// Native source generated from src/kit/draw.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_draw final:j::Module {
j::Cell _v_6333_EMPTY;
j::Cell _v_6334_NONE;
j::Cell _v_6335_TAU;
j::Cell _v_6336_and;
j::Cell _v_6337_code;
j::Cell _v_6338_fail;
j::Cell _v_6339_isHex;
j::Cell _v_6340_grid;
j::Cell _v_6345_paint;
j::Cell _v_6349_brush;
j::Cell _v_6353_finite;
j::Cell _v_6358_show;
j::Cell _v_6371_or;
j::Cell _v_6376_opts;
j::Cell _v_6380_yes;
j::Cell _v_6385_area;
j::Cell _v_6390_XS;
j::Cell _v_6391_YS;
j::Cell _v_6392_trace;
j::Cell _v_6415_UP;
j::Cell _v_6416_RISE;
j::Cell _v_6417_FALL;
j::Cell _v_6418_RUN;
j::Cell _v_6419_FLAT;
j::Cell _v_6420_DOT;
j::Cell _v_6421_JOINS;
j::Cell _v_6422_AU;
j::Cell _v_6423_AR;
j::Cell _v_6424_AD;
j::Cell _v_6425_AL;
j::Cell _v_6426_ARMS;
j::Cell _v_6427_GLYPH;
j::Cell _v_6428_ROUND;
j::Cell _v_6433_glyph;
j::Cell _v_6441_PLUS;
j::Cell _v_6442_DASH;
j::Cell _v_6443_BAR;
j::Cell _v_6444_asciiGlyph;
j::Cell _v_6447_asciiArms;
j::Cell _v_6450_linked;
j::Cell _v_6464_place;
j::Cell _v_6481_strokeCells;
j::Cell _v_6502_stroke;
j::Cell _v_6509_PX;
j::Cell _v_6510_PY;
j::Cell _v_6511_PS;
j::Cell _v_6512_boxPath;
j::Cell _v_6553_ALIGN;
j::Cell _v_6554_VALIGN;
j::Cell _v_6555_size;
j::Cell _v_6559_BAD;
j::Cell _v_6560_words;
j::Cell _v_6566_writeLines;
j::Cell _v_6584_layout;
j::Cell _v_6593_regionOf;
j::Cell _v_6598_text;
j::Cell _v_6603_write;
j::Cell _v_6632_label;
j::Cell _v_6650_line;
j::Cell _v_6664_polyline;
j::Cell _v_6673_path;
j::Cell _v_6695_checkPoints;
j::Cell _v_6703_around;
j::Cell _v_6713_ray;
j::Cell _v_6723_boxes;
j::Cell _v_6724_EDGE_ARMS;
j::Cell _v_6725_rect;
j::Cell _v_6785_EDGE;
j::Cell _v_6786_ellipseCells;
j::Cell _v_6849_tangentChar;
j::Cell _v_6862_shape;
j::Cell _v_6888_sweep;
j::Cell _v_6893_circle;
j::Cell _v_6900_ellipse;
j::Cell _v_6908_arc;
j::Cell _v_6917_polygon;
j::Cell _v_6962_samePalette;
j::Cell _v_6969_startAt;
j::Cell _v_6974_stamp;
j::Cell _v_7019_BITS;
j::Cell _v_7020_canvasOpts;
j::Cell _v_7025_BrailleCanvas;
j::Cell _v_7148_boxDots;
j::Cell _v_7160_braille;
j::Cell _v_7164_UPPER;
j::Cell _v_7165_LOWER;
j::Cell _v_7166_FULL;
j::Cell _v_7167_artRows;
j::Cell _v_7177_PixelCanvas;
j::Cell _v_7297_pixels;
std::vector<V> _literals;
Generated_kit_draw():_v_6333_EMPTY(this->slot("EMPTY")),_v_6334_NONE(this->slot("NONE")),_v_6335_TAU(this->slot("TAU")),_v_6336_and(this->slot("and")),_v_6337_code(this->slot("code")),_v_6338_fail(this->slot("fail")),_v_6339_isHex(this->slot("isHex")),_v_6340_grid(this->slot("grid")),_v_6345_paint(this->slot("paint")),_v_6349_brush(this->slot("brush")),_v_6353_finite(this->slot("finite")),_v_6358_show(this->slot("show")),_v_6371_or(this->slot("or")),_v_6376_opts(this->slot("opts")),_v_6380_yes(this->slot("yes")),_v_6385_area(this->slot("area")),_v_6390_XS(this->slot("XS")),_v_6391_YS(this->slot("YS")),_v_6392_trace(this->slot("trace")),_v_6415_UP(this->slot("UP")),_v_6416_RISE(this->slot("RISE")),_v_6417_FALL(this->slot("FALL")),_v_6418_RUN(this->slot("RUN")),_v_6419_FLAT(this->slot("FLAT")),_v_6420_DOT(this->slot("DOT")),_v_6421_JOINS(this->slot("JOINS")),_v_6422_AU(this->slot("AU")),_v_6423_AR(this->slot("AR")),_v_6424_AD(this->slot("AD")),_v_6425_AL(this->slot("AL")),_v_6426_ARMS(this->slot("ARMS")),_v_6427_GLYPH(this->slot("GLYPH")),_v_6428_ROUND(this->slot("ROUND")),_v_6433_glyph(this->slot("glyph")),_v_6441_PLUS(this->slot("PLUS")),_v_6442_DASH(this->slot("DASH")),_v_6443_BAR(this->slot("BAR")),_v_6444_asciiGlyph(this->slot("asciiGlyph")),_v_6447_asciiArms(this->slot("asciiArms")),_v_6450_linked(this->slot("linked")),_v_6464_place(this->slot("place")),_v_6481_strokeCells(this->slot("strokeCells")),_v_6502_stroke(this->slot("stroke")),_v_6509_PX(this->slot("PX")),_v_6510_PY(this->slot("PY")),_v_6511_PS(this->slot("PS")),_v_6512_boxPath(this->slot("boxPath")),_v_6553_ALIGN(this->slot("ALIGN")),_v_6554_VALIGN(this->slot("VALIGN")),_v_6555_size(this->slot("size")),_v_6559_BAD(this->slot("BAD")),_v_6560_words(this->slot("words")),_v_6566_writeLines(this->slot("writeLines")),_v_6584_layout(this->slot("layout")),_v_6593_regionOf(this->slot("regionOf")),_v_6598_text(this->slot("text")),_v_6603_write(this->slot("write")),_v_6632_label(this->slot("label")),_v_6650_line(this->slot("line")),_v_6664_polyline(this->slot("polyline")),_v_6673_path(this->slot("path")),_v_6695_checkPoints(this->slot("checkPoints")),_v_6703_around(this->slot("around")),_v_6713_ray(this->slot("ray")),_v_6723_boxes(this->slot("boxes")),_v_6724_EDGE_ARMS(this->slot("EDGE_ARMS")),_v_6725_rect(this->slot("rect")),_v_6785_EDGE(this->slot("EDGE")),_v_6786_ellipseCells(this->slot("ellipseCells")),_v_6849_tangentChar(this->slot("tangentChar")),_v_6862_shape(this->slot("shape")),_v_6888_sweep(this->slot("sweep")),_v_6893_circle(this->slot("circle")),_v_6900_ellipse(this->slot("ellipse")),_v_6908_arc(this->slot("arc")),_v_6917_polygon(this->slot("polygon")),_v_6962_samePalette(this->slot("samePalette")),_v_6969_startAt(this->slot("startAt")),_v_6974_stamp(this->slot("stamp")),_v_7019_BITS(this->slot("BITS")),_v_7020_canvasOpts(this->slot("canvasOpts")),_v_7025_BrailleCanvas(this->slot("BrailleCanvas")),_v_7148_boxDots(this->slot("boxDots")),_v_7160_braille(this->slot("braille")),_v_7164_UPPER(this->slot("UPPER")),_v_7165_LOWER(this->slot("LOWER")),_v_7166_FULL(this->slot("FULL")),_v_7167_artRows(this->slot("artRows")),_v_7177_PixelCanvas(this->slot("PixelCanvas")),_v_7297_pixels(this->slot("pixels")),_literals{V(u"object"),
V(u"chars"),
V(u"colors"),
V(u"put"),
V(u"function"),
V(u"palette"),
V(u"paper"),
V(u"index"),
V(u"number"),
V(u"isInteger"),
V(u""),
V(u"string"),
V(u"length"),
V(u"slice"),
V(u"…"),
V(u"stringify"),
V(u"a function"),
V(u"isArray"),
V(u"[...]"),
V(u"{...}"),
V(u", ..."),
V(u", "),
V(u"from"),
V(u"join"),
V(u"entries"),
V(u"map"),
V(u"{}"),
V(u"boolean"),
V(u"clip"),
V(u"x"),
V(u"y"),
V(u"cols"),
V(u"rows"),
V(u"min"),
V(u"max"),
V(u"has"),
V(u"get"),
V(u"auto"),
V(u"aspect"),
V(u"hasOwn"),
V(u"keys"),
V(u"set"),
V(u"ascii"),
V(u"rounded"),
V(u"heavy"),
V(u"double"),
V(u"isFinite"),
V(u"\n"),
V(u"replace"),
V(u"exec"),
V(u"charCodeAt"),
V(u"forEach"),
V(u"split"),
V(u"push"),
V(u" "),
V(u"filter"),
V(u"text"),
V(u"color"),
V(u"align"),
V(u"left"),
V(u"valign"),
V(u"top"),
V(u"width"),
V(u"height"),
V(u"includes"),
V(u"transparent"),
V(u"wrap"),
V(u"middle"),
V(u"center"),
V(u"label"),
V(u"line"),
V(u"char"),
V(u"style"),
V(u"a line"),
V(u"polyline"),
V(u"a polyline"),
V(u"closed"),
V(u"around() takes the grid, or a braille() or pixels() canvas, the circle is on first, then cx, cy, r and turn"),
V(u"ray"),
V(u"rect"),
V(u"single"),
V(u"fill"),
V(u"fillColor"),
V(u"title"),
V(u"none"),
V(u"test"),
V(u"*"),
V(u"an"),
V(u"a"),
V(u"circle"),
V(u"ellipse"),
V(u"arc"),
V(u"polygon"),
V(u"a polygon"),
V(u"every"),
V(u"sort"),
V(u"stamp"),
V(u"mask"),
V(u"map takes a list of palette indices, one for each of the grid's colours, as mergePalettes() makes"),
V(u"startsWith"),
V(u"reduce"),
V(u"size"),
V(u"themed"),
V(u"braille"),
V(u"trim"),
V(u"shift"),
V(u"pop"),
V(u"trimStart"),
V(u"pixels"),
V(u" or $1"),
V(u"─0101 ━0202 │1010 ┃2020 ┌0110 ┍0210 ┎0120 ┏0220 ┐0011 ┑0012 ┒0021 ┓0022 └1100 ┕1200 ┖2100 ┗2200 ┘1001 ┙1002 "),
V(u"┚2001 ┛2002 ├1110 ┝1210 ┞2110 ┟1120 ┠2120 ┡2210 ┢1220 ┣2220 ┤1011 ┥1012 ┦2011 ┧1021 ┨2021 ┩2012 ┪1022 ┫2022 "),
V(u"┬0111 ┭0112 ┮0211 ┯0212 ┰0121 ┱0122 ┲0221 ┳0222 ┴1101 ┵1102 ┶1201 ┷1202 ┸2101 ┹2102 ┺2201 ┻2202 ┼1111 ┽1112 "),
V(u"┾1211 ┿1212 ╀2111 ╁1121 ╂2121 ╃2112 ╄2211 ╅1122 ╆1221 ╇2212 ╈1222 ╉2122 ╊2221 ╋2222 ═0303 ║3030 ╒0310 ╓0130 "),
V(u"╔0330 ╕0013 ╖0031 ╗0033 ╘1300 ╙3100 ╚3300 ╛1003 ╜3001 ╝3003 ╞1310 ╟3130 ╠3330 ╡1013 ╢3031 ╣3033 ╤0313 ╥0131 "),
V(u"╦0333 ╧1303 ╨3101 ╩3303 ╪1313 ╫3131 ╬3333 ╭0110 ╮0011 ╯1001 ╰1100 ╴0001 ╵1000 ╶0100 ╷0010 ╸0002 ╹2000 ╺0200 "),
V(u"╻0020 ╼0201 ╽1020 ╾0102 ╿2010"),
V(u"right"),
V(u"bottom"),
V(u"┌┐└┘─│"),
V(u"╔╗╚╝═║"),
V(u"╭╮╰╯─│"),
V(u"┏┓┗┛━┃"),
V(u"++++-|"),
V(u"freeze"),
V(u"toLowerCase"),
V(u"#s"),
V(u"#r"),
V(u"#bits"),
V(u"#ink"),
V(u"#dot"),
V(u"#k"),
V(u"unset"),
V(u"toggle"),
V(u"plot"),
V(u"plot() takes a function of x, such as Math.sin or (x) => x * x, or a list of numbers"),
V(u"x0"),
V(u"x1"),
V(u"y0"),
V(u"y1"),
V(u"plot's fill"),
V(u"clear"),
V(u"draw"),
V(u"#px"),
V(u"#on"),
V(u"sprite"),
V(u"sprite() takes its art as a string, a line a row and a character a pixel, or a list of them for frames"),
V(u"sprite() takes its colours as an object of characters to colours, such as { r: \"#e11d48\" }, or {} for none"),
V(u"frame"),
V(u"frames"),
V(u"sprite's wrap"),
V(u".")}{
this->exports["text"]=this->_v_6598_text;
this->exports["label"]=this->_v_6632_label;
this->exports["line"]=this->_v_6650_line;
this->exports["polyline"]=this->_v_6664_polyline;
this->exports["around"]=this->_v_6703_around;
this->exports["ray"]=this->_v_6713_ray;
this->exports["boxes"]=this->_v_6723_boxes;
this->exports["rect"]=this->_v_6725_rect;
this->exports["circle"]=this->_v_6893_circle;
this->exports["ellipse"]=this->_v_6900_ellipse;
this->exports["arc"]=this->_v_6908_arc;
this->exports["polygon"]=this->_v_6917_polygon;
this->exports["stamp"]=this->_v_6974_stamp;
this->exports["braille"]=this->_v_7160_braille;
this->exports["pixels"]=this->_v_7297_pixels;
}
void init() override{if(initialized)return;initialized=true;
this->_v_6340_grid.get()=j::function([=](const j::Args &_args_fn6341,const V &_receiver_fn6341,const V &_self_fn6341) mutable ->V{
V _v_6342_s;
V _v_6343_what;
_v_6342_s=_args_fn6341[0];
_v_6343_what=_args_fn6341[1];
{
V _v_6344_g;
_v_6344_g=_v_6342_s;
if(j::truth(([&]()->V{V _logical7301=([&]()->V{V _logical7302=([&]()->V{V _logical7303=([&]()->V{V _logical7304=j::unary("!",_v_6344_g);return !j::truth(_logical7304)?([&]()->V{V _lhs7305=j::unary("typeof",_v_6344_g);V _rhs7306=this->_literals[0];return V(!j::equal(_lhs7305,_rhs7306,true));})():_logical7304;})();return !j::truth(_logical7303)?j::unary("!",([&]()->V{V _lhs7307=j::get(_v_6344_g,this->_literals[1]);V _rhs7308=j::builtin("Uint16Array");return j::binary("instanceof",_lhs7307,_rhs7308);})()):_logical7303;})();return !j::truth(_logical7302)?j::unary("!",([&]()->V{V _lhs7309=j::get(_v_6344_g,this->_literals[2]);V _rhs7310=j::builtin("Uint8Array");return j::binary("instanceof",_lhs7309,_rhs7310);})()):_logical7302;})();return !j::truth(_logical7301)?([&]()->V{V _lhs7311=j::unary("typeof",j::get(_v_6344_g,this->_literals[3]));V _rhs7312=this->_literals[4];return V(!j::equal(_lhs7311,_rhs7312,true));})():_logical7301;})())){(void)(([&]()->V{V _callee7314=this->_v_6338_fail.get();return j::call(_callee7314,j::Args{([&]()->V{std::u16string _text7313;_text7313+=u"";_text7313+=j::string(_v_6343_what);_text7313+=u"() takes the Surface to draw on first: the grid a drawing is given, (t, s) => { ";_text7313+=j::string(_v_6343_what);_text7313+=u"(s, ...) }";return V(std::move(_text7313));})()});})());
}
return _v_6344_g;

}

return V{};
},2);
this->_v_6345_paint.get()=j::function([=](const j::Args &_args_fn6346,const V &_receiver_fn6346,const V &_self_fn6346) mutable ->V{
V _v_6347_s;
V _v_6348_color;
_v_6347_s=_args_fn6346[0];
_v_6348_color=_args_fn6346[1];
{
if(j::truth(([&]()->V{V _logical7315=([&]()->V{V _lhs7316=_v_6348_color;V _rhs7317=j::builtin("undefined");return V(j::equal(_lhs7316,_rhs7317,true));})();return !j::truth(_logical7315)?([&]()->V{V _lhs7318=_v_6348_color;V _rhs7319=V::null();return V(j::equal(_lhs7318,_rhs7319,true));})():_logical7315;})())){return this->_v_6334_NONE.get();
}
if(j::truth(j::get(_v_6347_s,this->_literals[5]))){return ([&]()->V{V _receiver7320=j::get(_v_6347_s,this->_literals[5]);V _method7321=this->_literals[7];V _method=j::get(_receiver7320,_method7321);j::Args _params7322=j::Args{_v_6348_color,j::get(_v_6347_s,this->_literals[6])};return j::call(_method,_params7322,_receiver7320);})();
}
if(j::truth((j::truth(([&]()->V{V _lhs7323=j::unary("typeof",_v_6348_color);V _rhs7324=this->_literals[8];return V(j::equal(_lhs7323,_rhs7324,true));})())?j::unary("!",([&]()->V{V _logical7325=([&]()->V{V _receiver7326=j::builtin("Number");V _method7327=this->_literals[9];V _method=j::get(_receiver7326,_method7327);j::Args _params7328=j::Args{_v_6348_color};return j::call(_method,_params7328,_receiver7326);})();return j::truth(_logical7325)?([&]()->V{V _lhs7329=_v_6348_color;V _rhs7330=V(0.0);return j::binary(">=",_lhs7329,_rhs7330);})():_logical7325;})()):j::unary("!",([&]()->V{V _callee7331=this->_v_6339_isHex.get();return j::call(_callee7331,j::Args{_v_6348_color});})())))){(void)(([&]()->V{V _callee7334=this->_v_6338_fail.get();return j::call(_callee7334,j::Args{([&]()->V{std::u16string _text7332;_text7332+=u"a colour takes #rrggbb or an index into the palette, not ";_text7332+=j::string(([&]()->V{V _callee7333=this->_v_6358_show.get();return j::call(_callee7333,j::Args{_v_6348_color});})());_text7332+=u"";return V(std::move(_text7332));})()});})());
}
return this->_v_6334_NONE.get();

}

return V{};
},2);
this->_v_6349_brush.get()=j::function([=](const j::Args &_args_fn6350,const V &_receiver_fn6350,const V &_self_fn6350) mutable ->V{
V _v_6351_ch;
V _v_6352_what;
_v_6351_ch=_args_fn6350[0];
_v_6352_what=_args_fn6350[1];
{
if(j::truth(([&]()->V{V _lhs7335=_v_6351_ch;V _rhs7336=this->_literals[10];return V(j::equal(_lhs7335,_rhs7336,true));})())){return this->_v_6333_EMPTY.get();
}
if(j::truth(([&]()->V{V _logical7337=([&]()->V{V _lhs7338=j::unary("typeof",_v_6351_ch);V _rhs7339=this->_literals[11];return V(!j::equal(_lhs7338,_rhs7339,true));})();return !j::truth(_logical7337)?([&]()->V{V _lhs7340=j::get(([&]()->V{j::Args _array7342;for(const auto &_value:j::elements(_v_6351_ch))_array7342.push_back(_value);return j::array(std::move(_array7342));})(),this->_literals[12]);V _rhs7341=V(1.0);return V(!j::equal(_lhs7340,_rhs7341,true));})():_logical7337;})())){(void)(([&]()->V{V _callee7345=this->_v_6338_fail.get();return j::call(_callee7345,j::Args{([&]()->V{std::u16string _text7343;_text7343+=u"";_text7343+=j::string(_v_6352_what);_text7343+=u" takes one character, or \"\" to clear, not ";_text7343+=j::string(([&]()->V{V _callee7344=this->_v_6358_show.get();return j::call(_callee7344,j::Args{_v_6351_ch});})());_text7343+=u"";return V(std::move(_text7343));})()});})());
}
return ([&]()->V{V _callee7346=this->_v_6337_code.get();return j::call(_callee7346,j::Args{_v_6351_ch});})();

}

return V{};
},2);
this->_v_6358_show.get()=j::function([=](const j::Args &_args_fn6359,const V &_receiver_fn6359,const V &_self_fn6359) mutable ->V{
V _v_6360_v;
j::Cell _v_6361_depth;
_v_6360_v=_args_fn6359[0];
V _default7347=_args_fn6359[1];if(_default7347.kind==V::Undefined||_default7347.kind==V::Hole)_default7347=V(0.0);
_v_6361_depth.get()=_default7347;
{
V _v_6362_more;
V _v_6367_entries;
if(j::truth(([&]()->V{V _lhs7348=j::unary("typeof",_v_6360_v);V _rhs7349=this->_literals[11];return V(j::equal(_lhs7348,_rhs7349,true));})())){return ([&]()->V{V _receiver7357=j::builtin("JSON");V _method7358=this->_literals[15];V _method=j::get(_receiver7357,_method7358);j::Args _params7359=j::Args{(j::truth(([&]()->V{V _lhs7350=j::get(_v_6360_v,this->_literals[12]);V _rhs7351=V(40.0);return j::binary(">",_lhs7350,_rhs7351);})())?([&]()->V{V _lhs7352=([&]()->V{V _receiver7354=_v_6360_v;V _method7355=this->_literals[13];V _method=j::get(_receiver7354,_method7355);j::Args _params7356=j::Args{V(0.0),V(40.0)};return j::call(_method,_params7356,_receiver7354);})();V _rhs7353=this->_literals[14];return j::binary("+",_lhs7352,_rhs7353);})():_v_6360_v)};return j::call(_method,_params7359,_receiver7357);})();
}
if(j::truth(([&]()->V{V _lhs7360=j::unary("typeof",_v_6360_v);V _rhs7361=this->_literals[4];return V(j::equal(_lhs7360,_rhs7361,true));})())){return this->_literals[16];
}
if(j::truth(([&]()->V{V _logical7362=j::unary("!",_v_6360_v);return !j::truth(_logical7362)?([&]()->V{V _lhs7363=j::unary("typeof",_v_6360_v);V _rhs7364=this->_literals[0];return V(!j::equal(_lhs7363,_rhs7364,true));})():_logical7362;})())){return ([&]()->V{V _callee7365=j::builtin("String");return j::call(_callee7365,j::Args{_v_6360_v});})();
}
if(j::truth(([&]()->V{V _lhs7366=_v_6361_depth.get();V _rhs7367=V(1.0);return j::binary(">",_lhs7366,_rhs7367);})())){return (j::truth(([&]()->V{V _receiver7368=j::builtin("Array");V _method7369=this->_literals[17];V _method=j::get(_receiver7368,_method7369);j::Args _params7370=j::Args{_v_6360_v};return j::call(_method,_params7370,_receiver7368);})())?this->_literals[18]:this->_literals[19]);
}
_v_6362_more=j::function([=](const j::Args &_args_fn6363,const V &_receiver_fn6363,const V &_self_fn6363) mutable ->V{
V _v_6364_n;
_v_6364_n=_args_fn6363[0];
return (j::truth(([&]()->V{V _lhs7371=_v_6364_n;V _rhs7372=V(6.0);return j::binary(">",_lhs7371,_rhs7372);})())?this->_literals[20]:this->_literals[10]);
return V{};
},1);
if(j::truth(([&]()->V{V _receiver7373=j::builtin("Array");V _method7374=this->_literals[17];V _method=j::get(_receiver7373,_method7374);j::Args _params7375=j::Args{_v_6360_v};return j::call(_method,_params7375,_receiver7373);})())){return ([&]()->V{std::u16string _text7376;_text7376+=u"[";_text7376+=j::string(([&]()->V{V _receiver7377=([&]()->V{V _receiver7386=j::builtin("Array");V _method7387=this->_literals[22];V _method=j::get(_receiver7386,_method7387);j::Args _params7388=j::Args{([&]()->V{V _receiver7380=_v_6360_v;V _method7381=this->_literals[13];V _method=j::get(_receiver7380,_method7381);j::Args _params7382=j::Args{V(0.0),V(6.0)};return j::call(_method,_params7382,_receiver7380);})(),j::function([=](const j::Args &_args_fn6365,const V &_receiver_fn6365,const V &_self_fn6365) mutable ->V{
V _v_6366_x;
_v_6366_x=_args_fn6365[0];
return ([&]()->V{V _callee7385=this->_v_6358_show.get();return j::call(_callee7385,j::Args{_v_6366_x,([&]()->V{V _lhs7383=_v_6361_depth.get();V _rhs7384=V(1.0);return j::binary("+",_lhs7383,_rhs7384);})()});})();
return V{};
},1)};return j::call(_method,_params7388,_receiver7386);})();V _method7378=this->_literals[23];V _method=j::get(_receiver7377,_method7378);j::Args _params7379=j::Args{this->_literals[21]};return j::call(_method,_params7379,_receiver7377);})());_text7376+=u"";_text7376+=j::string(([&]()->V{V _callee7389=_v_6362_more;return j::call(_callee7389,j::Args{j::get(_v_6360_v,this->_literals[12])});})());_text7376+=u"]";return V(std::move(_text7376));})();
}
_v_6367_entries=([&]()->V{V _receiver7390=j::builtin("Object");V _method7391=this->_literals[24];V _method=j::get(_receiver7390,_method7391);j::Args _params7392=j::Args{_v_6360_v};return j::call(_method,_params7392,_receiver7390);})();
return (j::truth(j::get(_v_6367_entries,this->_literals[12]))?([&]()->V{std::u16string _text7393;_text7393+=u"{ ";_text7393+=j::string(([&]()->V{V _receiver7394=([&]()->V{V _receiver7402=([&]()->V{V _receiver7405=_v_6367_entries;V _method7406=this->_literals[13];V _method=j::get(_receiver7405,_method7406);j::Args _params7407=j::Args{V(0.0),V(6.0)};return j::call(_method,_params7407,_receiver7405);})();V _method7403=this->_literals[25];V _method=j::get(_receiver7402,_method7403);j::Args _params7404=j::Args{j::function([=](const j::Args &_args_fn6368,const V &_receiver_fn6368,const V &_self_fn6368) mutable ->V{
V _v_6369_k;
V _v_6370_x;
V _pattern7397=_args_fn6368[0];
_v_6369_k=j::get(_pattern7397,V(0));
_v_6370_x=j::get(_pattern7397,V(1));
return ([&]()->V{std::u16string _text7398;_text7398+=u"";_text7398+=j::string(_v_6369_k);_text7398+=u": ";_text7398+=j::string(([&]()->V{V _callee7401=this->_v_6358_show.get();return j::call(_callee7401,j::Args{_v_6370_x,([&]()->V{V _lhs7399=_v_6361_depth.get();V _rhs7400=V(1.0);return j::binary("+",_lhs7399,_rhs7400);})()});})());_text7398+=u"";return V(std::move(_text7398));})();
return V{};
},1)};return j::call(_method,_params7404,_receiver7402);})();V _method7395=this->_literals[23];V _method=j::get(_receiver7394,_method7395);j::Args _params7396=j::Args{this->_literals[21]};return j::call(_method,_params7396,_receiver7394);})());_text7393+=u"";_text7393+=j::string(([&]()->V{V _callee7408=_v_6362_more;return j::call(_callee7408,j::Args{j::get(_v_6367_entries,this->_literals[12])});})());_text7393+=u" }";return V(std::move(_text7393));})():this->_literals[26]);

}

return V{};
},1);
this->_v_6376_opts.get()=j::function([=](const j::Args &_args_fn6377,const V &_receiver_fn6377,const V &_self_fn6377) mutable ->V{
V _v_6378_o;
V _v_6379_what;
_v_6378_o=_args_fn6377[0];
_v_6379_what=_args_fn6377[1];
{
if(j::truth(([&]()->V{V _lhs7409=_v_6378_o;V _rhs7410=j::builtin("undefined");return V(j::equal(_lhs7409,_rhs7410,true));})())){return ([&]()->V{V _obj7411=j::object();return _obj7411;})();
}
if(j::truth(([&]()->V{V _logical7412=([&]()->V{V _lhs7413=_v_6378_o;V _rhs7414=V::null();return V(j::equal(_lhs7413,_rhs7414,true));})();return !j::truth(_logical7412)?([&]()->V{V _lhs7415=j::unary("typeof",_v_6378_o);V _rhs7416=this->_literals[0];return V(!j::equal(_lhs7415,_rhs7416,true));})():_logical7412;})())){(void)(([&]()->V{V _callee7418=this->_v_6338_fail.get();return j::call(_callee7418,j::Args{([&]()->V{std::u16string _text7417;_text7417+=u"";_text7417+=j::string(_v_6379_what);_text7417+=u"() takes its options as an object, such as { color: 1 }";return V(std::move(_text7417));})()});})());
}
return _v_6378_o;

}

return V{};
},2);
this->_v_6380_yes.get()=j::function([=](const j::Args &_args_fn6381,const V &_receiver_fn6381,const V &_self_fn6381) mutable ->V{
V _v_6382_v;
V _v_6383_name;
V _v_6384_fallback;
_v_6382_v=_args_fn6381[0];
_v_6383_name=_args_fn6381[1];
_v_6384_fallback=_args_fn6381[2];
{
if(j::truth(([&]()->V{V _lhs7419=_v_6382_v;V _rhs7420=j::builtin("undefined");return V(j::equal(_lhs7419,_rhs7420,true));})())){return _v_6384_fallback;
}
if(j::truth(([&]()->V{V _lhs7421=j::unary("typeof",_v_6382_v);V _rhs7422=this->_literals[27];return V(!j::equal(_lhs7421,_rhs7422,true));})())){(void)(([&]()->V{V _callee7425=this->_v_6338_fail.get();return j::call(_callee7425,j::Args{([&]()->V{std::u16string _text7423;_text7423+=u"";_text7423+=j::string(_v_6383_name);_text7423+=u" takes true or false, not ";_text7423+=j::string(([&]()->V{V _callee7424=this->_v_6358_show.get();return j::call(_callee7424,j::Args{_v_6382_v});})());_text7423+=u"";return V(std::move(_text7423));})()});})());
}
return _v_6382_v;

}

return V{};
},3);
this->_v_6385_area.get()=j::function([=](const j::Args &_args_fn6386,const V &_receiver_fn6386,const V &_self_fn6386) mutable ->V{
V _v_6387_s;
V _v_6388_region;
V _v_6389_what;
_v_6387_s=_args_fn6386[0];
_v_6388_region=_args_fn6386[1];
_v_6389_what=_args_fn6386[2];
{
if(j::truth(([&]()->V{V _lhs7426=_v_6388_region;V _rhs7427=j::builtin("undefined");return V(j::equal(_lhs7426,_rhs7427,true));})())){return ([&]()->V{V _receiver7428=_v_6387_s;V _method7429=this->_literals[28];V _method=j::get(_receiver7428,_method7429);j::Args _params7430=j::Args{};return j::call(_method,_params7430,_receiver7428);})();
}
if(j::truth(([&]()->V{V _logical7431=([&]()->V{V _logical7432=j::unary("!",_v_6388_region);return !j::truth(_logical7432)?([&]()->V{V _lhs7433=j::unary("typeof",_v_6388_region);V _rhs7434=this->_literals[0];return V(!j::equal(_lhs7433,_rhs7434,true));})():_logical7432;})();return !j::truth(_logical7431)?j::unary("!",([&]()->V{V _callee7435=this->_v_6353_finite.get();return j::call(_callee7435,j::Args{j::get(_v_6388_region,this->_literals[29]),j::get(_v_6388_region,this->_literals[30]),j::get(_v_6388_region,this->_literals[31]),j::get(_v_6388_region,this->_literals[32])});})()):_logical7431;})())){(void)(([&]()->V{V _callee7438=this->_v_6338_fail.get();return j::call(_callee7438,j::Args{([&]()->V{std::u16string _text7436;_text7436+=u"";_text7436+=j::string(_v_6389_what);_text7436+=u"() takes a region as { x, y, cols, rows } in numbers, not ";_text7436+=j::string(([&]()->V{V _callee7437=this->_v_6358_show.get();return j::call(_callee7437,j::Args{_v_6388_region});})());_text7436+=u"";return V(std::move(_text7436));})()});})());
}
return ([&]()->V{V _receiver7439=_v_6387_s;V _method7440=this->_literals[28];V _method=j::get(_receiver7439,_method7440);j::Args _params7441=j::Args{_v_6388_region};return j::call(_method,_params7441,_receiver7439);})();

}

return V{};
},3);
this->_v_6392_trace.get()=j::function([=](const j::Args &_args_fn6393,const V &_receiver_fn6393,const V &_self_fn6393) mutable ->V{
V _v_6394_x0;
V _v_6395_y0;
V _v_6396_x1;
V _v_6397_y1;
V _v_6398_w;
V _v_6399_h;
_v_6394_x0=_args_fn6393[0];
_v_6395_y0=_args_fn6393[1];
_v_6396_x1=_args_fn6393[2];
_v_6397_y1=_args_fn6393[3];
_v_6398_w=_args_fn6393[4];
_v_6399_h=_args_fn6393[5];
{
V _v_6400_m;
V _v_6408_dx;
V _v_6409_dy;
V _v_6410_sx;
V _v_6411_sy;
V _v_6412_err;
V _v_6413_n;
if(j::truth(j::unary("!",([&]()->V{V _callee7442=this->_v_6353_finite.get();return j::call(_callee7442,j::Args{_v_6394_x0,_v_6395_y0,_v_6396_x1,_v_6397_y1});})()))){return V(0.0);
}
_v_6400_m=([&]()->V{V _lhs7443=([&]()->V{V _lhs7445=_v_6398_w;V _rhs7446=_v_6399_h;return j::binary("+",_lhs7445,_rhs7446);})();V _rhs7444=V(8.0);return j::binary("+",_lhs7443,_rhs7444);})();
if(j::truth(([&]()->V{V _logical7447=([&]()->V{V _logical7448=([&]()->V{V _logical7449=([&]()->V{V _lhs7450=([&]()->V{V _receiver7454=j::builtin("Math");V _method7455=this->_literals[33];V _method=j::get(_receiver7454,_method7455);j::Args _params7456=j::Args{_v_6394_x0,_v_6396_x1};return j::call(_method,_params7456,_receiver7454);})();V _rhs7451=j::unary("-",_v_6400_m);return j::binary("<",_lhs7450,_rhs7451);})();return !j::truth(_logical7449)?([&]()->V{V _lhs7457=([&]()->V{V _receiver7461=j::builtin("Math");V _method7462=this->_literals[34];V _method=j::get(_receiver7461,_method7462);j::Args _params7463=j::Args{_v_6394_x0,_v_6396_x1};return j::call(_method,_params7463,_receiver7461);})();V _rhs7458=([&]()->V{V _lhs7464=_v_6398_w;V _rhs7465=_v_6400_m;return j::binary("+",_lhs7464,_rhs7465);})();return j::binary(">",_lhs7457,_rhs7458);})():_logical7449;})();return !j::truth(_logical7448)?([&]()->V{V _lhs7466=([&]()->V{V _receiver7470=j::builtin("Math");V _method7471=this->_literals[33];V _method=j::get(_receiver7470,_method7471);j::Args _params7472=j::Args{_v_6395_y0,_v_6397_y1};return j::call(_method,_params7472,_receiver7470);})();V _rhs7467=j::unary("-",_v_6400_m);return j::binary("<",_lhs7466,_rhs7467);})():_logical7448;})();return !j::truth(_logical7447)?([&]()->V{V _lhs7473=([&]()->V{V _receiver7477=j::builtin("Math");V _method7478=this->_literals[34];V _method=j::get(_receiver7477,_method7478);j::Args _params7479=j::Args{_v_6395_y0,_v_6397_y1};return j::call(_method,_params7479,_receiver7477);})();V _rhs7474=([&]()->V{V _lhs7480=_v_6399_h;V _rhs7481=_v_6400_m;return j::binary("+",_lhs7480,_rhs7481);})();return j::binary(">",_lhs7473,_rhs7474);})():_logical7447;})())){
V _v_6401_dx;
V _v_6402_dy;
V _v_6403_a;
V _v_6404_b;
_v_6401_dx=([&]()->V{V _lhs7482=_v_6396_x1;V _rhs7483=_v_6394_x0;return V(j::number(_lhs7482)-j::number(_rhs7483));})();
_v_6402_dy=([&]()->V{V _lhs7484=_v_6397_y1;V _rhs7485=_v_6395_y0;return V(j::number(_lhs7484)-j::number(_rhs7485));})();
_v_6403_a=V(0.0);
_v_6404_b=V(1.0);
{for(const auto &_item7486:j::elements(([&]()->V{j::Args _array7487;_array7487.push_back(([&]()->V{j::Args _array7488;_array7488.push_back(j::unary("-",_v_6401_dx));_array7488.push_back(([&]()->V{V _lhs7489=_v_6394_x0;V _rhs7490=V(2.0);return j::binary("+",_lhs7489,_rhs7490);})());return j::array(std::move(_array7488));})());_array7487.push_back(([&]()->V{j::Args _array7491;_array7491.push_back(_v_6401_dx);_array7491.push_back(([&]()->V{V _lhs7492=([&]()->V{V _lhs7494=_v_6398_w;V _rhs7495=V(2.0);return j::binary("+",_lhs7494,_rhs7495);})();V _rhs7493=_v_6394_x0;return V(j::number(_lhs7492)-j::number(_rhs7493));})());return j::array(std::move(_array7491));})());_array7487.push_back(([&]()->V{j::Args _array7496;_array7496.push_back(j::unary("-",_v_6402_dy));_array7496.push_back(([&]()->V{V _lhs7497=_v_6395_y0;V _rhs7498=V(2.0);return j::binary("+",_lhs7497,_rhs7498);})());return j::array(std::move(_array7496));})());_array7487.push_back(([&]()->V{j::Args _array7499;_array7499.push_back(_v_6402_dy);_array7499.push_back(([&]()->V{V _lhs7500=([&]()->V{V _lhs7502=_v_6399_h;V _rhs7503=V(2.0);return j::binary("+",_lhs7502,_rhs7503);})();V _rhs7501=_v_6395_y0;return V(j::number(_lhs7500)-j::number(_rhs7501));})());return j::array(std::move(_array7499));})());return j::array(std::move(_array7487));})())){V _v_6405_p;
V _v_6406_q;
V _pattern7504=_item7486;
_v_6405_p=j::get(_pattern7504,V(0));
_v_6406_q=j::get(_pattern7504,V(1));
{
V _v_6407_r;
if(j::truth(([&]()->V{V _lhs7505=_v_6405_p;V _rhs7506=V(0.0);return V(j::equal(_lhs7505,_rhs7506,true));})())){
if(j::truth(([&]()->V{V _lhs7507=_v_6406_q;V _rhs7508=V(0.0);return j::binary("<",_lhs7507,_rhs7508);})())){return V(0.0);
}
continue;

}

_v_6407_r=([&]()->V{V _lhs7509=_v_6406_q;V _rhs7510=_v_6405_p;return V(j::number(_lhs7509)/j::number(_rhs7510));})();
if(j::truth(([&]()->V{V _lhs7511=_v_6405_p;V _rhs7512=V(0.0);return j::binary("<",_lhs7511,_rhs7512);})())){(void)((_v_6403_a=([&]()->V{V _receiver7516=j::builtin("Math");V _method7517=this->_literals[34];V _method=j::get(_receiver7516,_method7517);j::Args _params7518=j::Args{_v_6403_a,_v_6407_r};return j::call(_method,_params7518,_receiver7516);})()));
}else {(void)((_v_6404_b=([&]()->V{V _receiver7522=j::builtin("Math");V _method7523=this->_literals[33];V _method=j::get(_receiver7522,_method7523);j::Args _params7524=j::Args{_v_6404_b,_v_6407_r};return j::call(_method,_params7524,_receiver7522);})()));
}
if(j::truth(([&]()->V{V _lhs7525=_v_6403_a;V _rhs7526=_v_6404_b;return j::binary(">",_lhs7525,_rhs7526);})())){return V(0.0);
}

}
}}
(void)(([&]()->V{V _assign7527=([&]()->V{j::Args _array7528;_array7528.push_back(([&]()->V{V _lhs7529=_v_6394_x0;V _rhs7530=([&]()->V{V _lhs7531=_v_6403_a;V _rhs7532=_v_6401_dx;return V(j::number(_lhs7531)*j::number(_rhs7532));})();return j::binary("+",_lhs7529,_rhs7530);})());_array7528.push_back(([&]()->V{V _lhs7533=_v_6395_y0;V _rhs7534=([&]()->V{V _lhs7535=_v_6403_a;V _rhs7536=_v_6402_dy;return V(j::number(_lhs7535)*j::number(_rhs7536));})();return j::binary("+",_lhs7533,_rhs7534);})());_array7528.push_back(([&]()->V{V _lhs7537=_v_6394_x0;V _rhs7538=([&]()->V{V _lhs7539=_v_6404_b;V _rhs7540=_v_6401_dx;return V(j::number(_lhs7539)*j::number(_rhs7540));})();return j::binary("+",_lhs7537,_rhs7538);})());_array7528.push_back(([&]()->V{V _lhs7541=_v_6395_y0;V _rhs7542=([&]()->V{V _lhs7543=_v_6404_b;V _rhs7544=_v_6402_dy;return V(j::number(_lhs7543)*j::number(_rhs7544));})();return j::binary("+",_lhs7541,_rhs7542);})());return j::array(std::move(_array7528));})();V _pattern7545=_assign7527;
_v_6394_x0=j::get(_pattern7545,V(0));
_v_6395_y0=j::get(_pattern7545,V(1));
_v_6396_x1=j::get(_pattern7545,V(2));
_v_6397_y1=j::get(_pattern7545,V(3));
return _assign7527;})());

}

(void)((_v_6394_x0=([&]()->V{V _number7547=_v_6394_x0;return V(std::floor(j::number(_number7547)));})()));
(void)((_v_6395_y0=([&]()->V{V _number7549=_v_6395_y0;return V(std::floor(j::number(_number7549)));})()));
(void)((_v_6396_x1=([&]()->V{V _number7551=_v_6396_x1;return V(std::floor(j::number(_number7551)));})()));
(void)((_v_6397_y1=([&]()->V{V _number7553=_v_6397_y1;return V(std::floor(j::number(_number7553)));})()));
_v_6408_dx=([&]()->V{V _number7556=([&]()->V{V _lhs7557=_v_6396_x1;V _rhs7558=_v_6394_x0;return V(j::number(_lhs7557)-j::number(_rhs7558));})();return V(std::fabs(j::number(_number7556)));})();
_v_6409_dy=j::unary("-",([&]()->V{V _number7561=([&]()->V{V _lhs7562=_v_6397_y1;V _rhs7563=_v_6395_y0;return V(j::number(_lhs7562)-j::number(_rhs7563));})();return V(std::fabs(j::number(_number7561)));})());
_v_6410_sx=(j::truth(([&]()->V{V _lhs7564=_v_6394_x0;V _rhs7565=_v_6396_x1;return j::binary("<",_lhs7564,_rhs7565);})())?V(1.0):j::unary("-",V(1.0)));
_v_6411_sy=(j::truth(([&]()->V{V _lhs7566=_v_6395_y0;V _rhs7567=_v_6397_y1;return j::binary("<",_lhs7566,_rhs7567);})())?V(1.0):j::unary("-",V(1.0)));
if(j::truth(([&]()->V{V _lhs7568=j::get(this->_v_6390_XS.get(),this->_literals[12]);V _rhs7569=([&]()->V{V _lhs7570=([&]()->V{V _lhs7572=_v_6408_dx;V _rhs7573=_v_6409_dy;return V(j::number(_lhs7572)-j::number(_rhs7573));})();V _rhs7571=V(1.0);return j::binary("+",_lhs7570,_rhs7571);})();return j::binary("<",_lhs7568,_rhs7569);})())){(void)(((this->_v_6390_XS.get()=([&]()->V{V _callee7579=j::builtin("Int32Array");return j::construct(_callee7579,j::Args{([&]()->V{V _lhs7575=([&]()->V{V _lhs7577=_v_6408_dx;V _rhs7578=_v_6409_dy;return V(j::number(_lhs7577)-j::number(_rhs7578));})();V _rhs7576=V(1.0);return j::binary("+",_lhs7575,_rhs7576);})()});})()),(this->_v_6391_YS.get()=([&]()->V{V _callee7585=j::builtin("Int32Array");return j::construct(_callee7585,j::Args{([&]()->V{V _lhs7581=([&]()->V{V _lhs7583=_v_6408_dx;V _rhs7584=_v_6409_dy;return V(j::number(_lhs7583)-j::number(_rhs7584));})();V _rhs7582=V(1.0);return j::binary("+",_lhs7581,_rhs7582);})()});})())));
}
_v_6412_err=([&]()->V{V _lhs7586=_v_6408_dx;V _rhs7587=_v_6409_dy;return j::binary("+",_lhs7586,_rhs7587);})();
_v_6413_n=V(0.0);
{for(;true;(void)0){
V _v_6414_e2;
(void)(([&]()->V{V _base7589=this->_v_6390_XS.get();V _key7590=_v_6413_n;V _assign7588=_v_6394_x0;return j::put(_base7589,_key7590,_assign7588);})());
(void)(([&]()->V{V _base7592=this->_v_6391_YS.get();V _key7593=j::increment(_v_6413_n,1,false);V _assign7591=_v_6395_y0;return j::put(_base7592,_key7593,_assign7591);})());
if(j::truth(([&]()->V{V _logical7594=([&]()->V{V _lhs7595=_v_6394_x0;V _rhs7596=_v_6396_x1;return V(j::equal(_lhs7595,_rhs7596,true));})();return j::truth(_logical7594)?([&]()->V{V _lhs7597=_v_6395_y0;V _rhs7598=_v_6397_y1;return V(j::equal(_lhs7597,_rhs7598,true));})():_logical7594;})())){return _v_6413_n;
}
_v_6414_e2=([&]()->V{V _lhs7599=V(2.0);V _rhs7600=_v_6412_err;return V(j::number(_lhs7599)*j::number(_rhs7600));})();
if(j::truth(([&]()->V{V _lhs7601=_v_6414_e2;V _rhs7602=_v_6409_dy;return j::binary(">=",_lhs7601,_rhs7602);})())){(void)(((_v_6412_err=j::binary("+",_v_6412_err,_v_6409_dy)),(_v_6394_x0=j::binary("+",_v_6394_x0,_v_6410_sx))));
}
if(j::truth(([&]()->V{V _lhs7605=_v_6414_e2;V _rhs7606=_v_6408_dx;return j::binary("<=",_lhs7605,_rhs7606);})())){(void)(((_v_6412_err=j::binary("+",_v_6412_err,_v_6408_dx)),(_v_6395_y0=j::binary("+",_v_6395_y0,_v_6411_sy))));
}

}
}

}

return V{};
},6);
this->_v_6433_glyph.get()=j::function([=](const j::Args &_args_fn6434,const V &_receiver_fn6434,const V &_self_fn6434) mutable ->V{
V _v_6435_a;
V _v_6436_round;
V _v_6437_weight;
_v_6435_a=_args_fn6434[0];
_v_6436_round=_args_fn6434[1];
_v_6437_weight=_args_fn6434[2];
{
V _v_6438_c;
if(j::truth(([&]()->V{V _logical7609=_v_6436_round;return j::truth(_logical7609)?([&]()->V{V _receiver7610=this->_v_6428_ROUND.get();V _method7611=this->_literals[35];V _method=j::get(_receiver7610,_method7611);j::Args _params7612=j::Args{_v_6435_a};return j::call(_method,_params7612,_receiver7610);})():_logical7609;})())){return ([&]()->V{V _receiver7613=this->_v_6428_ROUND.get();V _method7614=this->_literals[36];V _method=j::get(_receiver7613,_method7614);j::Args _params7615=j::Args{_v_6435_a};return j::call(_method,_params7615,_receiver7613);})();
}
_v_6438_c=([&]()->V{V _receiver7616=this->_v_6427_GLYPH.get();V _method7617=this->_literals[36];V _method=j::get(_receiver7616,_method7617);j::Args _params7618=j::Args{_v_6435_a};return j::call(_method,_params7618,_receiver7616);})();
if(j::truth(([&]()->V{V _lhs7619=_v_6438_c;V _rhs7620=j::builtin("undefined");return V(j::equal(_lhs7619,_rhs7620,true));})())){
V _v_6439_n;
_v_6439_n=V(0.0);
{V _v_6440_k;
_v_6440_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs7621=_v_6440_k;V _rhs7622=V(8.0);return j::binary("<",_lhs7621,_rhs7622);})());(void)((_v_6440_k=j::binary("+",_v_6440_k,V(2.0))))){if(j::truth(([&]()->V{V _lhs7624=([&]()->V{V _lhs7626=_v_6435_a;V _rhs7627=_v_6440_k;return V(int(j::i32(_lhs7626)>>(j::u32(_rhs7627)&31)));})();V _rhs7625=V(3.0);return V(int(j::i32(_lhs7624)&j::i32(_rhs7625)));})())){(void)((_v_6439_n=j::binary("|",_v_6439_n,([&]()->V{V _lhs7629=_v_6437_weight;V _rhs7630=_v_6440_k;return V(double(int32_t(j::u32(_lhs7629)<<(j::u32(_rhs7630)&31))));})())));
}
}}
(void)((_v_6438_c=([&]()->V{V _receiver7632=this->_v_6427_GLYPH.get();V _method7633=this->_literals[36];V _method=j::get(_receiver7632,_method7633);j::Args _params7634=j::Args{_v_6439_n};return j::call(_method,_params7634,_receiver7632);})()));

}

return ([&]()->V{V _logical7635=_v_6438_c;return j::nullish(_logical7635)?this->_v_6420_DOT.get():_logical7635;})();

}

return V{};
},3);
this->_v_6450_linked.get()=j::function([=](const j::Args &_args_fn6451,const V &_receiver_fn6451,const V &_self_fn6451) mutable ->V{
V _v_6452_s;
V _v_6453_j;
V _v_6454_b;
V _v_6455_ascii;
_v_6452_s=_args_fn6451[0];
_v_6453_j=_args_fn6451[1];
_v_6454_b=_args_fn6451[2];
_v_6455_ascii=_args_fn6451[3];
{
V _v_6456_x;
V _v_6457_y;
V _v_6458_m;
_v_6456_x=([&]()->V{V _lhs7636=_v_6453_j;V _rhs7637=j::get(_v_6452_s,this->_literals[31]);return V(std::fmod(j::number(_lhs7636),j::number(_rhs7637)));})();
_v_6457_y=([&]()->V{V _lhs7638=([&]()->V{V _lhs7640=_v_6453_j;V _rhs7641=_v_6456_x;return V(j::number(_lhs7640)-j::number(_rhs7641));})();V _rhs7639=j::get(_v_6452_s,this->_literals[31]);return V(j::number(_lhs7638)/j::number(_rhs7639));})();
_v_6458_m=V(0.0);
{V _v_6459_k;
_v_6459_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs7642=_v_6459_k;V _rhs7643=V(8.0);return j::binary("<",_lhs7642,_rhs7643);})());(void)((_v_6459_k=j::binary("+",_v_6459_k,V(2.0))))){
V _v_6460_nx;
V _v_6461_ny;
V _v_6462_n;
V _v_6463_nb;
if(j::truth(j::unary("!",([&]()->V{V _lhs7645=([&]()->V{V _lhs7647=_v_6454_b;V _rhs7648=_v_6459_k;return V(int(j::i32(_lhs7647)>>(j::u32(_rhs7648)&31)));})();V _rhs7646=V(3.0);return V(int(j::i32(_lhs7645)&j::i32(_rhs7646)));})()))){continue;
}
_v_6460_nx=([&]()->V{V _lhs7649=_v_6456_x;V _rhs7650=(j::truth(([&]()->V{V _lhs7651=_v_6459_k;V _rhs7652=this->_v_6423_AR.get();return V(j::equal(_lhs7651,_rhs7652,true));})())?V(1.0):(j::truth(([&]()->V{V _lhs7653=_v_6459_k;V _rhs7654=this->_v_6425_AL.get();return V(j::equal(_lhs7653,_rhs7654,true));})())?j::unary("-",V(1.0)):V(0.0)));return j::binary("+",_lhs7649,_rhs7650);})();
_v_6461_ny=([&]()->V{V _lhs7655=_v_6457_y;V _rhs7656=(j::truth(([&]()->V{V _lhs7657=_v_6459_k;V _rhs7658=this->_v_6424_AD.get();return V(j::equal(_lhs7657,_rhs7658,true));})())?V(1.0):(j::truth(([&]()->V{V _lhs7659=_v_6459_k;V _rhs7660=this->_v_6422_AU.get();return V(j::equal(_lhs7659,_rhs7660,true));})())?j::unary("-",V(1.0)):V(0.0)));return j::binary("+",_lhs7655,_rhs7656);})();
if(j::truth(([&]()->V{V _logical7661=([&]()->V{V _logical7662=([&]()->V{V _logical7663=([&]()->V{V _lhs7664=_v_6460_nx;V _rhs7665=V(0.0);return j::binary("<",_lhs7664,_rhs7665);})();return !j::truth(_logical7663)?([&]()->V{V _lhs7666=_v_6461_ny;V _rhs7667=V(0.0);return j::binary("<",_lhs7666,_rhs7667);})():_logical7663;})();return !j::truth(_logical7662)?([&]()->V{V _lhs7668=_v_6460_nx;V _rhs7669=j::get(_v_6452_s,this->_literals[31]);return j::binary(">=",_lhs7668,_rhs7669);})():_logical7662;})();return !j::truth(_logical7661)?([&]()->V{V _lhs7670=_v_6461_ny;V _rhs7671=j::get(_v_6452_s,this->_literals[32]);return j::binary(">=",_lhs7670,_rhs7671);})():_logical7661;})())){continue;
}
_v_6462_n=j::get(j::get(_v_6452_s,this->_literals[1]),([&]()->V{V _lhs7672=([&]()->V{V _lhs7674=_v_6461_ny;V _rhs7675=j::get(_v_6452_s,this->_literals[31]);return V(j::number(_lhs7674)*j::number(_rhs7675));})();V _rhs7673=_v_6460_nx;return j::binary("+",_lhs7672,_rhs7673);})());
_v_6463_nb=(j::truth(_v_6455_ascii)?([&]()->V{V _callee7676=this->_v_6447_asciiArms.get();return j::call(_callee7676,j::Args{_v_6462_n});})():([&]()->V{V _receiver7677=this->_v_6426_ARMS.get();V _method7678=this->_literals[36];V _method=j::get(_receiver7677,_method7678);j::Args _params7679=j::Args{_v_6462_n};return j::call(_method,_params7679,_receiver7677);})());
if(j::truth(([&]()->V{V _logical7680=([&]()->V{V _lhs7681=_v_6463_nb;V _rhs7682=j::builtin("undefined");return V(!j::equal(_lhs7681,_rhs7682,true));})();return j::truth(_logical7680)?([&]()->V{V _lhs7683=([&]()->V{V _lhs7685=_v_6463_nb;V _rhs7686=([&]()->V{V _lhs7687=_v_6459_k;V _rhs7688=V(4.0);return V(int(j::i32(_lhs7687)^j::i32(_rhs7688)));})();return V(int(j::i32(_lhs7685)>>(j::u32(_rhs7686)&31)));})();V _rhs7684=V(3.0);return V(int(j::i32(_lhs7683)&j::i32(_rhs7684)));})():_logical7680;})())){(void)((_v_6458_m=j::binary("|",_v_6458_m,([&]()->V{V _lhs7690=_v_6454_b;V _rhs7691=([&]()->V{V _lhs7692=V(3.0);V _rhs7693=_v_6459_k;return V(double(int32_t(j::u32(_lhs7692)<<(j::u32(_rhs7693)&31))));})();return V(int(j::i32(_lhs7690)&j::i32(_rhs7691)));})())));
}

}
}
return _v_6458_m;

}

return V{};
},4);
this->_v_6464_place.get()=j::function([=](const j::Args &_args_fn6465,const V &_receiver_fn6465,const V &_self_fn6465) mutable ->V{
V _v_6466_s;
V _v_6467_j;
V _v_6468_c;
V _v_6469_k;
V _v_6470_join;
V _v_6471_a;
V _v_6472_ascii;
V _v_6473_round;
_v_6466_s=_args_fn6465[0];
_v_6467_j=_args_fn6465[1];
_v_6468_c=_args_fn6465[2];
_v_6469_k=_args_fn6465[3];
_v_6470_join=_args_fn6465[4];
V _default7694=_args_fn6465[5];if(_default7694.kind==V::Undefined||_default7694.kind==V::Hole)_default7694=([&]()->V{V _receiver7695=this->_v_6426_ARMS.get();V _method7696=this->_literals[36];V _method=j::get(_receiver7695,_method7696);j::Args _params7697=j::Args{_v_6468_c};return j::call(_method,_params7697,_receiver7695);})();
_v_6471_a=_default7694;
V _default7698=_args_fn6465[6];if(_default7698.kind==V::Undefined||_default7698.kind==V::Hole)_default7698=V(false);
_v_6472_ascii=_default7698;
V _default7699=_args_fn6465[7];if(_default7699.kind==V::Undefined||_default7699.kind==V::Hole)_default7699=V(false);
_v_6473_round=_default7699;
{
if(j::truth(([&]()->V{V _logical7700=_v_6470_join;return j::truth(_logical7700)?([&]()->V{V _lhs7701=_v_6471_a;V _rhs7702=j::builtin("undefined");return V(!j::equal(_lhs7701,_rhs7702,true));})():_logical7700;})())){
V _v_6474_old;
V _v_6475_b;
_v_6474_old=j::get(j::get(_v_6466_s,this->_literals[1]),_v_6467_j);
_v_6475_b=(j::truth(_v_6472_ascii)?([&]()->V{V _callee7703=this->_v_6447_asciiArms.get();return j::call(_callee7703,j::Args{_v_6474_old});})():([&]()->V{V _receiver7704=this->_v_6426_ARMS.get();V _method7705=this->_literals[36];V _method=j::get(_receiver7704,_method7705);j::Args _params7706=j::Args{_v_6474_old};return j::call(_method,_params7706,_receiver7704);})());
if(j::truth(([&]()->V{V _lhs7707=_v_6475_b;V _rhs7708=j::builtin("undefined");return V(!j::equal(_lhs7707,_rhs7708,true));})())){
V _v_6476_kept;
V _v_6477_m;
V _v_6478_w;
_v_6476_kept=([&]()->V{V _callee7709=this->_v_6450_linked.get();return j::call(_callee7709,j::Args{_v_6466_s,_v_6467_j,_v_6475_b,_v_6472_ascii});})();
_v_6477_m=V(0.0);
_v_6478_w=V(1.0);
{V _v_6479_i;
_v_6479_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs7710=_v_6479_i;V _rhs7711=V(8.0);return j::binary("<",_lhs7710,_rhs7711);})());(void)((_v_6479_i=j::binary("+",_v_6479_i,V(2.0))))){
V _v_6480_v;
_v_6480_v=([&]()->V{V _lhs7713=([&]()->V{V _lhs7715=_v_6471_a;V _rhs7716=_v_6479_i;return V(int(j::i32(_lhs7715)>>(j::u32(_rhs7716)&31)));})();V _rhs7714=V(3.0);return V(int(j::i32(_lhs7713)&j::i32(_rhs7714)));})();
(void)((_v_6477_m=j::binary("|",_v_6477_m,([&]()->V{V _lhs7718=([&]()->V{V _logical7720=_v_6480_v;return !j::truth(_logical7720)?([&]()->V{V _lhs7721=([&]()->V{V _lhs7723=_v_6476_kept;V _rhs7724=_v_6479_i;return V(int(j::i32(_lhs7723)>>(j::u32(_rhs7724)&31)));})();V _rhs7722=V(3.0);return V(int(j::i32(_lhs7721)&j::i32(_rhs7722)));})():_logical7720;})();V _rhs7719=_v_6479_i;return V(double(int32_t(j::u32(_lhs7718)<<(j::u32(_rhs7719)&31))));})())));
if(j::truth(([&]()->V{V _lhs7725=_v_6480_v;V _rhs7726=_v_6478_w;return j::binary(">",_lhs7725,_rhs7726);})())){(void)((_v_6478_w=_v_6480_v));
}

}
}
(void)((_v_6468_c=(j::truth(([&]()->V{V _lhs7729=_v_6477_m;V _rhs7730=_v_6475_b;return V(j::equal(_lhs7729,_rhs7730,true));})())?_v_6474_old:(j::truth(_v_6472_ascii)?([&]()->V{V _callee7731=this->_v_6444_asciiGlyph.get();return j::call(_callee7731,j::Args{_v_6477_m});})():([&]()->V{V _callee7732=this->_v_6433_glyph.get();return j::call(_callee7732,j::Args{_v_6477_m,_v_6473_round,_v_6478_w});})()))));

}


}

(void)(([&]()->V{V _receiver7735=_v_6466_s;V _method7736=this->_literals[3];V _method=j::get(_receiver7735,_method7736);j::Args _params7737=j::Args{_v_6467_j,_v_6468_c,(j::truth(([&]()->V{V _lhs7733=_v_6468_c;V _rhs7734=this->_v_6333_EMPTY.get();return V(j::equal(_lhs7733,_rhs7734,true));})())?this->_v_6334_NONE.get():_v_6469_k)};return j::call(_method,_params7737,_receiver7735);})());

}

return V{};
},5);
this->_v_6481_strokeCells.get()=j::function([=](const j::Args &_args_fn6482,const V &_receiver_fn6482,const V &_self_fn6482) mutable ->V{
V _v_6483_s;
V _v_6484_n;
V _v_6485_ch;
V _v_6486_k;
V _v_6487_join;
_v_6483_s=_args_fn6482[0];
_v_6484_n=_args_fn6482[1];
_v_6485_ch=_args_fn6482[2];
_v_6486_k=_args_fn6482[3];
V _default7738=_args_fn6482[4];if(_default7738.kind==V::Undefined||_default7738.kind==V::Hole)_default7738=V(false);
_v_6487_join=_default7738;
{
V _v_6490_dx;
V _v_6491_dy;
V _v_6492_ax;
V _v_6493_ay;
V _v_6494_rising;
V _v_6495_runs;
V _v_6496_upright;
if(j::truth(([&]()->V{V _lhs7739=_v_6485_ch;V _rhs7740=this->_literals[37];return V(!j::equal(_lhs7739,_rhs7740,true));})())){
{V _v_6488_i;
_v_6488_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs7741=_v_6488_i;V _rhs7742=_v_6484_n;return j::binary("<",_lhs7741,_rhs7742);})());(void)(j::increment(_v_6488_i,1,false))){
V _v_6489_j;
_v_6489_j=([&]()->V{V _receiver7743=_v_6483_s;V _method7744=this->_literals[7];V _method=j::get(_receiver7743,_method7744);j::Args _params7745=j::Args{j::get(this->_v_6390_XS.get(),_v_6488_i),j::get(this->_v_6391_YS.get(),_v_6488_i)};return j::call(_method,_params7745,_receiver7743);})();
if(j::truth(([&]()->V{V _lhs7746=_v_6489_j;V _rhs7747=V(0.0);return j::binary(">=",_lhs7746,_rhs7747);})())){(void)(([&]()->V{V _callee7748=this->_v_6464_place.get();return j::call(_callee7748,j::Args{_v_6483_s,_v_6489_j,_v_6485_ch,_v_6486_k,_v_6487_join});})());
}

}
}
return V{};

}

_v_6490_dx=([&]()->V{V _lhs7749=j::get(this->_v_6390_XS.get(),([&]()->V{V _lhs7751=_v_6484_n;V _rhs7752=V(1.0);return V(j::number(_lhs7751)-j::number(_rhs7752));})());V _rhs7750=j::get(this->_v_6390_XS.get(),V(0.0));return V(j::number(_lhs7749)-j::number(_rhs7750));})();
_v_6491_dy=([&]()->V{V _lhs7753=j::get(this->_v_6391_YS.get(),([&]()->V{V _lhs7755=_v_6484_n;V _rhs7756=V(1.0);return V(j::number(_lhs7755)-j::number(_rhs7756));})());V _rhs7754=j::get(this->_v_6391_YS.get(),V(0.0));return V(j::number(_lhs7753)-j::number(_rhs7754));})();
_v_6492_ax=([&]()->V{V _number7757=_v_6490_dx;return V(std::fabs(j::number(_number7757)));})();
_v_6493_ay=([&]()->V{V _number7758=_v_6491_dy;return V(std::fabs(j::number(_number7758)));})();
_v_6494_rising=([&]()->V{V _lhs7759=([&]()->V{V _lhs7761=_v_6490_dx;V _rhs7762=V(0.0);return j::binary(">",_lhs7761,_rhs7762);})();V _rhs7760=([&]()->V{V _lhs7763=_v_6491_dy;V _rhs7764=V(0.0);return j::binary(">",_lhs7763,_rhs7764);})();return V(!j::equal(_lhs7759,_rhs7760,true));})();
_v_6495_runs=([&]()->V{V _lhs7765=_v_6492_ax;V _rhs7766=_v_6493_ay;return j::binary(">",_lhs7765,_rhs7766);})();
_v_6496_upright=([&]()->V{V _lhs7767=([&]()->V{V _lhs7769=_v_6493_ay;V _rhs7770=j::get(_v_6483_s,this->_literals[38]);return V(j::number(_lhs7769)*j::number(_rhs7770));})();V _rhs7768=([&]()->V{V _lhs7771=V(4.0);V _rhs7772=_v_6492_ax;return V(j::number(_lhs7771)*j::number(_rhs7772));})();return j::binary(">",_lhs7767,_rhs7768);})();
{V _v_6497_i;
_v_6497_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs7773=_v_6497_i;V _rhs7774=_v_6484_n;return j::binary("<",_lhs7773,_rhs7774);})());(void)(j::increment(_v_6497_i,1,false))){
V _v_6498_j;
V _v_6499_c;
_v_6498_j=([&]()->V{V _receiver7775=_v_6483_s;V _method7776=this->_literals[7];V _method=j::get(_receiver7775,_method7776);j::Args _params7777=j::Args{j::get(this->_v_6390_XS.get(),_v_6497_i),j::get(this->_v_6391_YS.get(),_v_6497_i)};return j::call(_method,_params7777,_receiver7775);})();
if(j::truth(([&]()->V{V _lhs7778=_v_6498_j;V _rhs7779=V(0.0);return j::binary("<",_lhs7778,_rhs7779);})())){continue;
}
if(j::truth(([&]()->V{V _lhs7780=_v_6484_n;V _rhs7781=V(1.0);return V(j::equal(_lhs7780,_rhs7781,true));})())){(void)((_v_6499_c=this->_v_6420_DOT.get()));
}else {if(j::truth(_v_6496_upright)){(void)((_v_6499_c=this->_v_6415_UP.get()));
}else {if(j::truth(j::unary("!",_v_6495_runs))){(void)((_v_6499_c=(j::truth(_v_6494_rising)?this->_v_6416_RISE.get():this->_v_6417_FALL.get())));
}else {if(j::truth(j::unary("!",_v_6491_dy))){(void)((_v_6499_c=this->_v_6419_FLAT.get()));
}else {if(j::truth(_v_6494_rising)){
V _v_6500_r;
_v_6500_r=(j::truth(([&]()->V{V _lhs7786=_v_6490_dx;V _rhs7787=V(0.0);return j::binary(">",_lhs7786,_rhs7787);})())?([&]()->V{V _lhs7788=_v_6497_i;V _rhs7789=V(1.0);return j::binary("+",_lhs7788,_rhs7789);})():([&]()->V{V _lhs7790=_v_6497_i;V _rhs7791=V(1.0);return V(j::number(_lhs7790)-j::number(_rhs7791));})());
(void)((_v_6499_c=(j::truth(([&]()->V{V _logical7793=([&]()->V{V _logical7794=([&]()->V{V _lhs7795=_v_6500_r;V _rhs7796=V(0.0);return j::binary(">=",_lhs7795,_rhs7796);})();return j::truth(_logical7794)?([&]()->V{V _lhs7797=_v_6500_r;V _rhs7798=_v_6484_n;return j::binary("<",_lhs7797,_rhs7798);})():_logical7794;})();return j::truth(_logical7793)?([&]()->V{V _lhs7799=j::get(this->_v_6391_YS.get(),_v_6500_r);V _rhs7800=j::get(this->_v_6391_YS.get(),_v_6497_i);return V(!j::equal(_lhs7799,_rhs7800,true));})():_logical7793;})())?this->_v_6416_RISE.get():this->_v_6418_RUN.get())));

}
else {
V _v_6501_l;
_v_6501_l=(j::truth(([&]()->V{V _lhs7801=_v_6490_dx;V _rhs7802=V(0.0);return j::binary(">",_lhs7801,_rhs7802);})())?([&]()->V{V _lhs7803=_v_6497_i;V _rhs7804=V(1.0);return V(j::number(_lhs7803)-j::number(_rhs7804));})():([&]()->V{V _lhs7805=_v_6497_i;V _rhs7806=V(1.0);return j::binary("+",_lhs7805,_rhs7806);})());
(void)((_v_6499_c=(j::truth(([&]()->V{V _logical7808=([&]()->V{V _logical7809=([&]()->V{V _lhs7810=_v_6501_l;V _rhs7811=V(0.0);return j::binary(">=",_lhs7810,_rhs7811);})();return j::truth(_logical7809)?([&]()->V{V _lhs7812=_v_6501_l;V _rhs7813=_v_6484_n;return j::binary("<",_lhs7812,_rhs7813);})():_logical7809;})();return j::truth(_logical7808)?([&]()->V{V _lhs7814=j::get(this->_v_6391_YS.get(),_v_6501_l);V _rhs7815=j::get(this->_v_6391_YS.get(),_v_6497_i);return V(!j::equal(_lhs7814,_rhs7815,true));})():_logical7808;})())?this->_v_6417_FALL.get():this->_v_6418_RUN.get())));

}

}
}
}
}
(void)(([&]()->V{V _receiver7816=_v_6483_s;V _method7817=this->_literals[3];V _method=j::get(_receiver7816,_method7817);j::Args _params7818=j::Args{_v_6498_j,_v_6499_c,_v_6486_k};return j::call(_method,_params7818,_receiver7816);})());

}
}

}

return V{};
},4);
this->_v_6502_stroke.get()=j::function([=](const j::Args &_args_fn6503,const V &_receiver_fn6503,const V &_self_fn6503) mutable ->V{
V _v_6504_char;
V _v_6505_style;
V _v_6506_what;
V _v_6507_fallback;
_v_6504_char=_args_fn6503[0];
_v_6505_style=_args_fn6503[1];
_v_6506_what=_args_fn6503[2];
V _default7819=_args_fn6503[3];if(_default7819.kind==V::Undefined||_default7819.kind==V::Hole)_default7819=this->_literals[37];
_v_6507_fallback=_default7819;
{
V _v_6508_ch;
if(j::truth(([&]()->V{V _lhs7820=_v_6505_style;V _rhs7821=j::builtin("undefined");return V(!j::equal(_lhs7820,_rhs7821,true));})())){
if(j::truth(([&]()->V{V _lhs7822=_v_6504_char;V _rhs7823=j::builtin("undefined");return V(!j::equal(_lhs7822,_rhs7823,true));})())){(void)(([&]()->V{V _callee7825=this->_v_6338_fail.get();return j::call(_callee7825,j::Args{([&]()->V{std::u16string _text7824;_text7824+=u"";_text7824+=j::string(_v_6506_what);_text7824+=u" takes a char or a style, not both: a style draws in a box's lines, ─ │ ┌ and the rest";return V(std::move(_text7824));})()});})());
}
if(j::truth(([&]()->V{V _logical7826=([&]()->V{V _lhs7827=j::unary("typeof",_v_6505_style);V _rhs7828=this->_literals[11];return V(!j::equal(_lhs7827,_rhs7828,true));})();return !j::truth(_logical7826)?j::unary("!",([&]()->V{V _receiver7829=j::builtin("Object");V _method7830=this->_literals[39];V _method=j::get(_receiver7829,_method7830);j::Args _params7831=j::Args{this->_v_6723_boxes.get(),_v_6505_style};return j::call(_method,_params7831,_receiver7829);})()):_logical7826;})())){(void)(([&]()->V{V _callee7838=this->_v_6338_fail.get();return j::call(_callee7838,j::Args{([&]()->V{std::u16string _text7832;_text7832+=u"";_text7832+=j::string(_v_6506_what);_text7832+=u"'s style takes ";_text7832+=j::string(([&]()->V{V _callee7836=this->_v_6371_or.get();return j::call(_callee7836,j::Args{([&]()->V{V _receiver7833=j::builtin("Object");V _method7834=this->_literals[40];V _method=j::get(_receiver7833,_method7834);j::Args _params7835=j::Args{this->_v_6723_boxes.get()};return j::call(_method,_params7835,_receiver7833);})()});})());_text7832+=u", not ";_text7832+=j::string(([&]()->V{V _callee7837=this->_v_6358_show.get();return j::call(_callee7837,j::Args{_v_6505_style});})());_text7832+=u"";return V(std::move(_text7832));})()});})());
}
return _v_6505_style;

}

_v_6508_ch=([&]()->V{V _logical7839=_v_6504_char;return j::nullish(_logical7839)?_v_6507_fallback:_logical7839;})();
return (j::truth(([&]()->V{V _lhs7840=_v_6508_ch;V _rhs7841=this->_literals[37];return V(j::equal(_lhs7840,_rhs7841,true));})())?this->_literals[37]:([&]()->V{V _callee7843=this->_v_6349_brush.get();return j::call(_callee7843,j::Args{_v_6508_ch,([&]()->V{std::u16string _text7842;_text7842+=u"";_text7842+=j::string(_v_6506_what);_text7842+=u"'s char";return V(std::move(_text7842));})()});})());

}

return V{};
},3);
this->_v_6512_boxPath.get()=j::function([=](const j::Args &_args_fn6513,const V &_receiver_fn6513,const V &_self_fn6513) mutable ->V{
V _v_6514_s;
V _v_6515_pts;
V _v_6516_closed;
V _v_6517_style;
V _v_6518_k;
V _v_6519_join;
_v_6514_s=_args_fn6513[0];
_v_6515_pts=_args_fn6513[1];
_v_6516_closed=_args_fn6513[2];
_v_6517_style=_args_fn6513[3];
_v_6518_k=_args_fn6513[4];
_v_6519_join=_args_fn6513[5];
{
j::Cell _v_6520_n;
V _v_6521_push;
V _v_6529_segs;
V _v_6536_ring;
V _v_6537_ascii;
V _v_6538_round;
V _v_6539_w;
V _v_6540_across;
V _v_6541_down;
_v_6520_n.get()=V(0.0);
_v_6521_push=j::function([=](const j::Args &_args_fn6522,const V &_receiver_fn6522,const V &_self_fn6522) mutable ->V{
V _v_6523_x;
V _v_6524_y;
V _v_6525_straight;
_v_6523_x=_args_fn6522[0];
_v_6524_y=_args_fn6522[1];
_v_6525_straight=_args_fn6522[2];
{
if(j::truth(([&]()->V{V _logical7844=([&]()->V{V _logical7845=_v_6520_n.get();return j::truth(_logical7845)?([&]()->V{V _lhs7846=j::get(this->_v_6509_PX.get(),([&]()->V{V _lhs7848=_v_6520_n.get();V _rhs7849=V(1.0);return V(j::number(_lhs7848)-j::number(_rhs7849));})());V _rhs7847=_v_6523_x;return V(j::equal(_lhs7846,_rhs7847,true));})():_logical7845;})();return j::truth(_logical7844)?([&]()->V{V _lhs7850=j::get(this->_v_6510_PY.get(),([&]()->V{V _lhs7852=_v_6520_n.get();V _rhs7853=V(1.0);return V(j::number(_lhs7852)-j::number(_rhs7853));})());V _rhs7851=_v_6524_y;return V(j::equal(_lhs7850,_rhs7851,true));})():_logical7844;})())){
(void)(([&]()->V{V _base7855=this->_v_6511_PS.get();V _key7856=([&]()->V{V _lhs7857=_v_6520_n.get();V _rhs7858=V(1.0);return V(j::number(_lhs7857)-j::number(_rhs7858));})();V _assign7854=_v_6525_straight;return j::update(_base7855,_key7856,"|",_assign7854);})());
return V{};

}

if(j::truth(([&]()->V{V _lhs7859=_v_6520_n.get();V _rhs7860=j::get(this->_v_6509_PX.get(),this->_literals[12]);return V(j::equal(_lhs7859,_rhs7860,true));})())){
V _v_6526_nx;
V _v_6527_ny;
V _v_6528_ns;
_v_6526_nx=([&]()->V{V _callee7863=j::builtin("Int32Array");return j::construct(_callee7863,j::Args{([&]()->V{V _lhs7861=V(2.0);V _rhs7862=_v_6520_n.get();return V(j::number(_lhs7861)*j::number(_rhs7862));})()});})();
_v_6527_ny=([&]()->V{V _callee7866=j::builtin("Int32Array");return j::construct(_callee7866,j::Args{([&]()->V{V _lhs7864=V(2.0);V _rhs7865=_v_6520_n.get();return V(j::number(_lhs7864)*j::number(_rhs7865));})()});})();
_v_6528_ns=([&]()->V{V _callee7869=j::builtin("Uint8Array");return j::construct(_callee7869,j::Args{([&]()->V{V _lhs7867=V(2.0);V _rhs7868=_v_6520_n.get();return V(j::number(_lhs7867)*j::number(_rhs7868));})()});})();
(void)(([&]()->V{V _receiver7870=_v_6526_nx;V _method7871=this->_literals[41];V _method=j::get(_receiver7870,_method7871);j::Args _params7872=j::Args{this->_v_6509_PX.get()};return j::call(_method,_params7872,_receiver7870);})());
(void)(([&]()->V{V _receiver7873=_v_6527_ny;V _method7874=this->_literals[41];V _method=j::get(_receiver7873,_method7874);j::Args _params7875=j::Args{this->_v_6510_PY.get()};return j::call(_method,_params7875,_receiver7873);})());
(void)(([&]()->V{V _receiver7876=_v_6528_ns;V _method7877=this->_literals[41];V _method=j::get(_receiver7876,_method7877);j::Args _params7878=j::Args{this->_v_6511_PS.get()};return j::call(_method,_params7878,_receiver7876);})());
(void)(((this->_v_6509_PX.get()=_v_6526_nx),(this->_v_6510_PY.get()=_v_6527_ny),(this->_v_6511_PS.get()=_v_6528_ns)));

}

(void)(([&]()->V{V _base7883=this->_v_6509_PX.get();V _key7884=_v_6520_n.get();V _assign7882=_v_6523_x;return j::put(_base7883,_key7884,_assign7882);})());
(void)(([&]()->V{V _base7886=this->_v_6510_PY.get();V _key7887=_v_6520_n.get();V _assign7885=_v_6524_y;return j::put(_base7886,_key7887,_assign7885);})());
(void)(([&]()->V{V _base7889=this->_v_6511_PS.get();V _key7890=j::increment(_v_6520_n.get(),1,false);V _assign7888=_v_6525_straight;return j::put(_base7889,_key7890,_assign7888);})());

}

return V{};
},3);
_v_6529_segs=(j::truth(([&]()->V{V _lhs7891=j::get(_v_6515_pts,this->_literals[12]);V _rhs7892=V(1.0);return V(j::equal(_lhs7891,_rhs7892,true));})())?V(1.0):(j::truth(([&]()->V{V _logical7893=_v_6516_closed;return j::truth(_logical7893)?([&]()->V{V _lhs7894=j::get(_v_6515_pts,this->_literals[12]);V _rhs7895=V(2.0);return j::binary(">",_lhs7894,_rhs7895);})():_logical7893;})())?j::get(_v_6515_pts,this->_literals[12]):([&]()->V{V _lhs7896=j::get(_v_6515_pts,this->_literals[12]);V _rhs7897=V(1.0);return V(j::number(_lhs7896)-j::number(_rhs7897));})()));
{V _v_6530_i;
_v_6530_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs7898=_v_6530_i;V _rhs7899=_v_6529_segs;return j::binary("<",_lhs7898,_rhs7899);})());(void)(j::increment(_v_6530_i,1,false))){
V _v_6531_a;
V _v_6532_b;
V _v_6533_m;
V _v_6534_straight;
_v_6531_a=j::get(_v_6515_pts,_v_6530_i);
_v_6532_b=j::get(_v_6515_pts,([&]()->V{V _lhs7900=([&]()->V{V _lhs7902=_v_6530_i;V _rhs7903=V(1.0);return j::binary("+",_lhs7902,_rhs7903);})();V _rhs7901=j::get(_v_6515_pts,this->_literals[12]);return V(std::fmod(j::number(_lhs7900),j::number(_rhs7901)));})());
_v_6533_m=([&]()->V{V _callee7904=this->_v_6392_trace.get();return j::call(_callee7904,j::Args{j::get(_v_6531_a,V(0.0)),j::get(_v_6531_a,V(1.0)),j::get(_v_6532_b,V(0.0)),j::get(_v_6532_b,V(1.0)),j::get(_v_6514_s,this->_literals[31]),j::get(_v_6514_s,this->_literals[32])});})();
_v_6534_straight=([&]()->V{V _logical7905=([&]()->V{V _lhs7906=([&]()->V{V _number7908=j::get(_v_6531_a,V(0.0));return V(std::floor(j::number(_number7908)));})();V _rhs7907=([&]()->V{V _number7909=j::get(_v_6532_b,V(0.0));return V(std::floor(j::number(_number7909)));})();return V(j::equal(_lhs7906,_rhs7907,true));})();return !j::truth(_logical7905)?([&]()->V{V _lhs7910=([&]()->V{V _number7912=j::get(_v_6531_a,V(1.0));return V(std::floor(j::number(_number7912)));})();V _rhs7911=([&]()->V{V _number7913=j::get(_v_6532_b,V(1.0));return V(std::floor(j::number(_number7913)));})();return V(j::equal(_lhs7910,_rhs7911,true));})():_logical7905;})();
if(j::truth(([&]()->V{V _logical7914=j::unary("!",_v_6534_straight);return j::truth(_logical7914)?_v_6533_m:_logical7914;})())){(void)(([&]()->V{V _callee7915=this->_v_6481_strokeCells.get();return j::call(_callee7915,j::Args{_v_6514_s,_v_6533_m,this->_literals[37],_v_6518_k});})());
}
{V _v_6535_d;
_v_6535_d=V(0.0);
for(;j::truth(([&]()->V{V _lhs7916=_v_6535_d;V _rhs7917=_v_6533_m;return j::binary("<",_lhs7916,_rhs7917);})());(void)(j::increment(_v_6535_d,1,false))){(void)(([&]()->V{V _callee7918=_v_6521_push;return j::call(_callee7918,j::Args{j::get(this->_v_6390_XS.get(),_v_6535_d),j::get(this->_v_6391_YS.get(),_v_6535_d),(j::truth(_v_6534_straight)?V(1.0):V(0.0))});})());
}}

}
}
if(j::truth(([&]()->V{V _logical7919=([&]()->V{V _logical7920=([&]()->V{V _logical7921=_v_6516_closed;return j::truth(_logical7921)?([&]()->V{V _lhs7922=_v_6520_n.get();V _rhs7923=V(2.0);return j::binary(">",_lhs7922,_rhs7923);})():_logical7921;})();return j::truth(_logical7920)?([&]()->V{V _lhs7924=j::get(this->_v_6509_PX.get(),([&]()->V{V _lhs7926=_v_6520_n.get();V _rhs7927=V(1.0);return V(j::number(_lhs7926)-j::number(_rhs7927));})());V _rhs7925=j::get(this->_v_6509_PX.get(),V(0.0));return V(j::equal(_lhs7924,_rhs7925,true));})():_logical7920;})();return j::truth(_logical7919)?([&]()->V{V _lhs7928=j::get(this->_v_6510_PY.get(),([&]()->V{V _lhs7930=_v_6520_n.get();V _rhs7931=V(1.0);return V(j::number(_lhs7930)-j::number(_rhs7931));})());V _rhs7929=j::get(this->_v_6510_PY.get(),V(0.0));return V(j::equal(_lhs7928,_rhs7929,true));})():_logical7919;})())){(void)(([&]()->V{V _base7933=this->_v_6511_PS.get();V _key7934=V(0.0);V _assign7932=j::get(this->_v_6511_PS.get(),j::increment(_v_6520_n.get(),-1,true));return j::update(_base7933,_key7934,"|",_assign7932);})());
}
_v_6536_ring=([&]()->V{V _logical7935=_v_6516_closed;return j::truth(_logical7935)?([&]()->V{V _lhs7936=_v_6520_n.get();V _rhs7937=V(2.0);return j::binary(">",_lhs7936,_rhs7937);})():_logical7935;})();
_v_6537_ascii=([&]()->V{V _lhs7938=_v_6517_style;V _rhs7939=this->_literals[42];return V(j::equal(_lhs7938,_rhs7939,true));})();
_v_6538_round=([&]()->V{V _lhs7940=_v_6517_style;V _rhs7941=this->_literals[43];return V(j::equal(_lhs7940,_rhs7941,true));})();
_v_6539_w=(j::truth(([&]()->V{V _lhs7942=_v_6517_style;V _rhs7943=this->_literals[44];return V(j::equal(_lhs7942,_rhs7943,true));})())?V(2.0):(j::truth(([&]()->V{V _lhs7944=_v_6517_style;V _rhs7945=this->_literals[45];return V(j::equal(_lhs7944,_rhs7945,true));})())?V(3.0):V(1.0)));
_v_6540_across=([&]()->V{V _lhs7946=([&]()->V{V _lhs7948=_v_6539_w;V _rhs7949=this->_v_6425_AL.get();return V(double(int32_t(j::u32(_lhs7948)<<(j::u32(_rhs7949)&31))));})();V _rhs7947=([&]()->V{V _lhs7950=_v_6539_w;V _rhs7951=this->_v_6423_AR.get();return V(double(int32_t(j::u32(_lhs7950)<<(j::u32(_rhs7951)&31))));})();return V(int(j::i32(_lhs7946)|j::i32(_rhs7947)));})();
_v_6541_down=([&]()->V{V _lhs7952=([&]()->V{V _lhs7954=_v_6539_w;V _rhs7955=this->_v_6422_AU.get();return V(double(int32_t(j::u32(_lhs7954)<<(j::u32(_rhs7955)&31))));})();V _rhs7953=([&]()->V{V _lhs7956=_v_6539_w;V _rhs7957=this->_v_6424_AD.get();return V(double(int32_t(j::u32(_lhs7956)<<(j::u32(_rhs7957)&31))));})();return V(int(j::i32(_lhs7952)|j::i32(_rhs7953)));})();
{V _v_6542_i;
_v_6542_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs7958=_v_6542_i;V _rhs7959=_v_6520_n.get();return j::binary("<",_lhs7958,_rhs7959);})());(void)(j::increment(_v_6542_i,1,false))){
V _v_6543_j;
V _v_6544_a;
V _v_6545_before;
V _v_6546_after;
V _v_6551_ends;
V _v_6552_full;
_v_6543_j=([&]()->V{V _receiver7960=_v_6514_s;V _method7961=this->_literals[7];V _method=j::get(_receiver7960,_method7961);j::Args _params7962=j::Args{j::get(this->_v_6509_PX.get(),_v_6542_i),j::get(this->_v_6510_PY.get(),_v_6542_i)};return j::call(_method,_params7962,_receiver7960);})();
if(j::truth(([&]()->V{V _logical7963=([&]()->V{V _lhs7964=_v_6543_j;V _rhs7965=V(0.0);return j::binary("<",_lhs7964,_rhs7965);})();return !j::truth(_logical7963)?j::unary("!",j::get(this->_v_6511_PS.get(),_v_6542_i)):_logical7963;})())){continue;
}
_v_6544_a=V(0.0);
_v_6545_before=(j::truth(([&]()->V{V _lhs7966=_v_6542_i;V _rhs7967=V(0.0);return j::binary(">",_lhs7966,_rhs7967);})())?([&]()->V{V _lhs7968=_v_6542_i;V _rhs7969=V(1.0);return V(j::number(_lhs7968)-j::number(_rhs7969));})():(j::truth(_v_6536_ring)?([&]()->V{V _lhs7970=_v_6520_n.get();V _rhs7971=V(1.0);return V(j::number(_lhs7970)-j::number(_rhs7971));})():j::unary("-",V(1.0))));
_v_6546_after=(j::truth(([&]()->V{V _lhs7972=_v_6542_i;V _rhs7973=([&]()->V{V _lhs7974=_v_6520_n.get();V _rhs7975=V(1.0);return V(j::number(_lhs7974)-j::number(_rhs7975));})();return j::binary("<",_lhs7972,_rhs7973);})())?([&]()->V{V _lhs7976=_v_6542_i;V _rhs7977=V(1.0);return j::binary("+",_lhs7976,_rhs7977);})():(j::truth(_v_6536_ring)?V(0.0):j::unary("-",V(1.0))));
{V _v_6547_side;
_v_6547_side=V(0.0);
for(;j::truth(([&]()->V{V _lhs7978=_v_6547_side;V _rhs7979=V(2.0);return j::binary("<",_lhs7978,_rhs7979);})());(void)(j::increment(_v_6547_side,1,false))){
V _v_6548_o;
V _v_6549_dx;
V _v_6550_dy;
_v_6548_o=(j::truth(_v_6547_side)?_v_6546_after:_v_6545_before);
if(j::truth(([&]()->V{V _logical7980=([&]()->V{V _lhs7981=_v_6548_o;V _rhs7982=V(0.0);return j::binary("<",_lhs7981,_rhs7982);})();return !j::truth(_logical7980)?j::unary("!",j::get(this->_v_6511_PS.get(),_v_6548_o)):_logical7980;})())){continue;
}
_v_6549_dx=([&]()->V{V _lhs7983=j::get(this->_v_6509_PX.get(),_v_6548_o);V _rhs7984=j::get(this->_v_6509_PX.get(),_v_6542_i);return V(j::number(_lhs7983)-j::number(_rhs7984));})();
_v_6550_dy=([&]()->V{V _lhs7985=j::get(this->_v_6510_PY.get(),_v_6548_o);V _rhs7986=j::get(this->_v_6510_PY.get(),_v_6542_i);return V(j::number(_lhs7985)-j::number(_rhs7986));})();
if(j::truth(([&]()->V{V _logical7987=j::unary("!",_v_6549_dx);return j::truth(_logical7987)?([&]()->V{V _logical7988=([&]()->V{V _lhs7989=_v_6550_dy;V _rhs7990=V(1.0);return V(j::equal(_lhs7989,_rhs7990,true));})();return !j::truth(_logical7988)?([&]()->V{V _lhs7991=_v_6550_dy;V _rhs7992=j::unary("-",V(1.0));return V(j::equal(_lhs7991,_rhs7992,true));})():_logical7988;})():_logical7987;})())){(void)((_v_6544_a=j::binary("|",_v_6544_a,([&]()->V{V _lhs7994=_v_6539_w;V _rhs7995=(j::truth(([&]()->V{V _lhs7996=_v_6550_dy;V _rhs7997=V(0.0);return j::binary("<",_lhs7996,_rhs7997);})())?this->_v_6422_AU.get():this->_v_6424_AD.get());return V(double(int32_t(j::u32(_lhs7994)<<(j::u32(_rhs7995)&31))));})())));
}else {if(j::truth(([&]()->V{V _logical7998=j::unary("!",_v_6550_dy);return j::truth(_logical7998)?([&]()->V{V _logical7999=([&]()->V{V _lhs8000=_v_6549_dx;V _rhs8001=V(1.0);return V(j::equal(_lhs8000,_rhs8001,true));})();return !j::truth(_logical7999)?([&]()->V{V _lhs8002=_v_6549_dx;V _rhs8003=j::unary("-",V(1.0));return V(j::equal(_lhs8002,_rhs8003,true));})():_logical7999;})():_logical7998;})())){(void)((_v_6544_a=j::binary("|",_v_6544_a,([&]()->V{V _lhs8005=_v_6539_w;V _rhs8006=(j::truth(([&]()->V{V _lhs8007=_v_6549_dx;V _rhs8008=V(0.0);return j::binary("<",_lhs8007,_rhs8008);})())?this->_v_6425_AL.get():this->_v_6423_AR.get());return V(double(int32_t(j::u32(_lhs8005)<<(j::u32(_rhs8006)&31))));})())));
}
}

}
}
_v_6551_ends=([&]()->V{V _lhs8009=([&]()->V{V _lhs8011=([&]()->V{V _lhs8013=(j::truth(([&]()->V{V _lhs8015=_v_6544_a;V _rhs8016=V(3.0);return V(int(j::i32(_lhs8015)&j::i32(_rhs8016)));})())?V(1.0):V(0.0));V _rhs8014=(j::truth(([&]()->V{V _lhs8017=_v_6544_a;V _rhs8018=V(12.0);return V(int(j::i32(_lhs8017)&j::i32(_rhs8018)));})())?V(1.0):V(0.0));return j::binary("+",_lhs8013,_rhs8014);})();V _rhs8012=(j::truth(([&]()->V{V _lhs8019=_v_6544_a;V _rhs8020=V(48.0);return V(int(j::i32(_lhs8019)&j::i32(_rhs8020)));})())?V(1.0):V(0.0));return j::binary("+",_lhs8011,_rhs8012);})();V _rhs8010=(j::truth(([&]()->V{V _lhs8021=_v_6544_a;V _rhs8022=V(192.0);return V(int(j::i32(_lhs8021)&j::i32(_rhs8022)));})())?V(1.0):V(0.0));return j::binary("+",_lhs8009,_rhs8010);})();
_v_6552_full=(j::truth(([&]()->V{V _lhs8023=_v_6551_ends;V _rhs8024=V(1.0);return j::binary(">",_lhs8023,_rhs8024);})())?_v_6544_a:(j::truth(([&]()->V{V _lhs8025=_v_6544_a;V _rhs8026=V(51.0);return V(int(j::i32(_lhs8025)&j::i32(_rhs8026)));})())?_v_6541_down:_v_6540_across));
(void)(([&]()->V{V _callee8030=this->_v_6464_place.get();return j::call(_callee8030,j::Args{_v_6514_s,_v_6543_j,(j::truth(_v_6537_ascii)?([&]()->V{V _callee8027=this->_v_6444_asciiGlyph.get();return j::call(_callee8027,j::Args{_v_6552_full});})():([&]()->V{V _callee8028=this->_v_6433_glyph.get();return j::call(_callee8028,j::Args{_v_6552_full,_v_6538_round,_v_6539_w});})()),_v_6518_k,_v_6519_join,([&]()->V{V _logical8029=_v_6544_a;return !j::truth(_logical8029)?_v_6552_full:_logical8029;})(),_v_6537_ascii,_v_6538_round});})());

}
}

}

return V{};
},6);
this->_v_6555_size.get()=j::function([=](const j::Args &_args_fn6556,const V &_receiver_fn6556,const V &_self_fn6556) mutable ->V{
V _v_6557_v;
V _v_6558_what;
_v_6557_v=_args_fn6556[0];
_v_6558_what=_args_fn6556[1];
{
if(j::truth(([&]()->V{V _logical8031=([&]()->V{V _logical8032=([&]()->V{V _lhs8033=j::unary("typeof",_v_6557_v);V _rhs8034=this->_literals[8];return V(!j::equal(_lhs8033,_rhs8034,true));})();return !j::truth(_logical8032)?j::unary("!",([&]()->V{V _receiver8035=j::builtin("Number");V _method8036=this->_literals[46];V _method=j::get(_receiver8035,_method8036);j::Args _params8037=j::Args{_v_6557_v};return j::call(_method,_params8037,_receiver8035);})()):_logical8032;})();return !j::truth(_logical8031)?([&]()->V{V _lhs8038=_v_6557_v;V _rhs8039=V(1.0);return j::binary("<",_lhs8038,_rhs8039);})():_logical8031;})())){(void)(([&]()->V{V _callee8042=this->_v_6338_fail.get();return j::call(_callee8042,j::Args{([&]()->V{std::u16string _text8040;_text8040+=u"";_text8040+=j::string(_v_6558_what);_text8040+=u" takes a number of cells of 1 or more, not ";_text8040+=j::string(([&]()->V{V _callee8041=this->_v_6358_show.get();return j::call(_callee8041,j::Args{_v_6557_v});})());_text8040+=u"";return V(std::move(_text8040));})()});})());
}
return ([&]()->V{V _number8043=_v_6557_v;return V(std::floor(j::number(_number8043)));})();

}

return V{};
},2);
this->_v_6560_words.get()=j::function([=](const j::Args &_args_fn6561,const V &_receiver_fn6561,const V &_self_fn6561) mutable ->V{
V _v_6562_str;
V _v_6563_what;
_v_6562_str=_args_fn6561[0];
_v_6563_what=_args_fn6561[1];
{
V _v_6564_t;
V _v_6565_bad;
if(j::truth(([&]()->V{V _lhs8044=j::unary("typeof",_v_6562_str);V _rhs8045=this->_literals[8];return V(j::equal(_lhs8044,_rhs8045,true));})())){return ([&]()->V{V _callee8046=j::builtin("String");return j::call(_callee8046,j::Args{_v_6562_str});})();
}
if(j::truth(([&]()->V{V _lhs8047=j::unary("typeof",_v_6562_str);V _rhs8048=this->_literals[11];return V(!j::equal(_lhs8047,_rhs8048,true));})())){(void)(([&]()->V{V _callee8051=this->_v_6338_fail.get();return j::call(_callee8051,j::Args{([&]()->V{std::u16string _text8049;_text8049+=u"";_text8049+=j::string(_v_6563_what);_text8049+=u"() takes a string to write, or a number, not ";_text8049+=j::string(([&]()->V{V _callee8050=this->_v_6358_show.get();return j::call(_callee8050,j::Args{_v_6562_str});})());_text8049+=u"";return V(std::move(_text8049));})()});})());
}
_v_6564_t=([&]()->V{V _receiver8052=_v_6562_str;V _method8053=this->_literals[48];V _method=j::get(_receiver8052,_method8053);j::Args _params8054=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[47]};return j::call(_method,_params8054,_receiver8052);})();
_v_6565_bad=([&]()->V{V _receiver8055=this->_v_6559_BAD.get();V _method8056=this->_literals[49];V _method=j::get(_receiver8055,_method8056);j::Args _params8057=j::Args{_v_6564_t};return j::call(_method,_params8057,_receiver8055);})();
if(j::truth(_v_6565_bad)){(void)(([&]()->V{V _callee8058=this->_v_6337_code.get();return j::call(_callee8058,j::Args{j::get(_v_6565_bad,V(0.0))});})());
}
return _v_6564_t;

}

return V{};
},2);
this->_v_6566_writeLines.get()=j::function([=](const j::Args &_args_fn6567,const V &_receiver_fn6567,const V &_self_fn6567) mutable ->V{
j::Cell _v_6568_s;
V _v_6569_lines;
j::Cell _v_6570_lefts;
j::Cell _v_6571_top;
j::Cell _v_6572_k;
j::Cell _v_6573_transparent;
_v_6568_s.get()=_args_fn6567[0];
_v_6569_lines=_args_fn6567[1];
_v_6570_lefts.get()=_args_fn6567[2];
_v_6571_top.get()=_args_fn6567[3];
_v_6572_k.get()=_args_fn6567[4];
_v_6573_transparent.get()=_args_fn6567[5];
{
j::Cell _v_6574_left;
j::Cell _v_6575_right;
_v_6574_left.get()=j::builtin("Infinity");
_v_6575_right.get()=j::unary("-",j::builtin("Infinity"));
(void)(([&]()->V{V _receiver8093=_v_6569_lines;V _method8094=this->_literals[51];V _method=j::get(_receiver8093,_method8094);j::Args _params8095=j::Args{j::function([=](const j::Args &_args_fn6576,const V &_receiver_fn6576,const V &_self_fn6576) mutable ->V{
V _v_6577_line;
V _v_6578_r;
_v_6577_line=_args_fn6576[0];
_v_6578_r=_args_fn6576[1];
{
V _v_6579_lx;
V _v_6580_len;
_v_6579_lx=j::get(_v_6570_lefts.get(),_v_6578_r);
_v_6580_len=j::get(_v_6577_line,this->_literals[12]);
if(j::truth(_v_6580_len)){(void)(((_v_6574_left.get()=([&]()->V{V _receiver8062=j::builtin("Math");V _method8063=this->_literals[33];V _method=j::get(_receiver8062,_method8063);j::Args _params8064=j::Args{_v_6574_left.get(),_v_6579_lx};return j::call(_method,_params8064,_receiver8062);})()),(_v_6575_right.get()=([&]()->V{V _receiver8070=j::builtin("Math");V _method8071=this->_literals[34];V _method=j::get(_receiver8070,_method8071);j::Args _params8072=j::Args{_v_6575_right.get(),([&]()->V{V _lhs8066=_v_6579_lx;V _rhs8067=_v_6580_len;return j::binary("+",_lhs8066,_rhs8067);})()};return j::call(_method,_params8072,_receiver8070);})())));
}
{V _v_6581_i;
_v_6581_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs8073=_v_6581_i;V _rhs8074=_v_6580_len;return j::binary("<",_lhs8073,_rhs8074);})());(void)(j::increment(_v_6581_i,1,false))){
V _v_6582_c;
V _v_6583_j;
_v_6582_c=([&]()->V{V _receiver8075=_v_6577_line;V _method8076=this->_literals[50];V _method=j::get(_receiver8075,_method8076);j::Args _params8077=j::Args{_v_6581_i};return j::call(_method,_params8077,_receiver8075);})();
if(j::truth(([&]()->V{V _logical8078=_v_6573_transparent.get();return j::truth(_logical8078)?([&]()->V{V _lhs8079=_v_6582_c;V _rhs8080=V(32.0);return V(j::equal(_lhs8079,_rhs8080,true));})():_logical8078;})())){continue;
}
_v_6583_j=([&]()->V{V _receiver8085=_v_6568_s.get();V _method8086=this->_literals[7];V _method=j::get(_receiver8085,_method8086);j::Args _params8087=j::Args{([&]()->V{V _lhs8081=_v_6579_lx;V _rhs8082=_v_6581_i;return j::binary("+",_lhs8081,_rhs8082);})(),([&]()->V{V _lhs8083=_v_6571_top.get();V _rhs8084=_v_6578_r;return j::binary("+",_lhs8083,_rhs8084);})()};return j::call(_method,_params8087,_receiver8085);})();
if(j::truth(([&]()->V{V _lhs8088=_v_6583_j;V _rhs8089=V(0.0);return j::binary(">=",_lhs8088,_rhs8089);})())){(void)(([&]()->V{V _receiver8090=_v_6568_s.get();V _method8091=this->_literals[3];V _method=j::get(_receiver8090,_method8091);j::Args _params8092=j::Args{_v_6583_j,_v_6582_c,_v_6572_k.get()};return j::call(_method,_params8092,_receiver8090);})());
}

}
}

}

return V{};
},2)};return j::call(_method,_params8095,_receiver8093);})());
return (j::truth(([&]()->V{V _lhs8096=_v_6574_left.get();V _rhs8097=j::builtin("Infinity");return V(j::equal(_lhs8096,_rhs8097,true));})())?([&]()->V{V _obj8098=j::object();j::put(_obj8098,this->_literals[29],([&]()->V{V _logical8099=j::get(_v_6570_lefts.get(),V(0.0));return j::nullish(_logical8099)?V(0.0):_logical8099;})());j::put(_obj8098,this->_literals[30],_v_6571_top.get());j::put(_obj8098,this->_literals[31],V(0.0));j::put(_obj8098,this->_literals[32],j::get(_v_6569_lines,this->_literals[12]));return _obj8098;})():([&]()->V{V _obj8100=j::object();j::put(_obj8100,this->_literals[29],_v_6574_left.get());j::put(_obj8100,this->_literals[30],_v_6571_top.get());j::put(_obj8100,this->_literals[31],([&]()->V{V _lhs8101=_v_6575_right.get();V _rhs8102=_v_6574_left.get();return V(j::number(_lhs8101)-j::number(_rhs8102));})());j::put(_obj8100,this->_literals[32],j::get(_v_6569_lines,this->_literals[12]));return _obj8100;})());

}

return V{};
},6);
this->_v_6584_layout.get()=j::function([=](const j::Args &_args_fn6585,const V &_receiver_fn6585,const V &_self_fn6585) mutable ->V{
V _v_6586_str;
V _v_6587_width;
V _v_6588_wrap;
_v_6586_str=_args_fn6585[0];
_v_6587_width=_args_fn6585[1];
_v_6588_wrap=_args_fn6585[2];
{
V _v_6589_out;
_v_6589_out=([&]()->V{j::Args _array8103;return j::array(std::move(_array8103));})();
{for(const auto &_item8104:j::elements(([&]()->V{V _receiver8105=_v_6586_str;V _method8106=this->_literals[52];V _method=j::get(_receiver8105,_method8106);j::Args _params8107=j::Args{this->_literals[47]};return j::call(_method,_params8107,_receiver8105);})())){V _v_6590_para;
_v_6590_para=_item8104;
{
V _v_6591_line;
if(j::truth(([&]()->V{V _logical8108=j::unary("!",_v_6588_wrap);return !j::truth(_logical8108)?([&]()->V{V _lhs8109=j::get(_v_6590_para,this->_literals[12]);V _rhs8110=_v_6587_width;return j::binary("<=",_lhs8109,_rhs8110);})():_logical8108;})())){
(void)(([&]()->V{V _receiver8114=_v_6589_out;V _method8115=this->_literals[53];V _method=j::get(_receiver8114,_method8115);j::Args _params8116=j::Args{([&]()->V{V _receiver8111=_v_6590_para;V _method8112=this->_literals[13];V _method=j::get(_receiver8111,_method8112);j::Args _params8113=j::Args{V(0.0),_v_6587_width};return j::call(_method,_params8113,_receiver8111);})()};return j::call(_method,_params8116,_receiver8114);})());
continue;

}

_v_6591_line=this->_literals[10];
{for(const auto &_item8117:j::elements(([&]()->V{V _receiver8118=([&]()->V{V _receiver8121=_v_6590_para;V _method8122=this->_literals[52];V _method=j::get(_receiver8121,_method8122);j::Args _params8123=j::Args{this->_literals[54]};return j::call(_method,_params8123,_receiver8121);})();V _method8119=this->_literals[55];V _method=j::get(_receiver8118,_method8119);j::Args _params8120=j::Args{j::builtin("Boolean")};return j::call(_method,_params8120,_receiver8118);})())){V _v_6592_word;
_v_6592_word=_item8117;
{
while(j::truth(([&]()->V{V _lhs8124=j::get(_v_6592_word,this->_literals[12]);V _rhs8125=_v_6587_width;return j::binary(">",_lhs8124,_rhs8125);})())){
if(j::truth(_v_6591_line)){(void)(([&]()->V{V _receiver8126=_v_6589_out;V _method8127=this->_literals[53];V _method=j::get(_receiver8126,_method8127);j::Args _params8128=j::Args{_v_6591_line};return j::call(_method,_params8128,_receiver8126);})());
}
(void)((_v_6591_line=this->_literals[10]));
(void)(([&]()->V{V _receiver8133=_v_6589_out;V _method8134=this->_literals[53];V _method=j::get(_receiver8133,_method8134);j::Args _params8135=j::Args{([&]()->V{V _receiver8130=_v_6592_word;V _method8131=this->_literals[13];V _method=j::get(_receiver8130,_method8131);j::Args _params8132=j::Args{V(0.0),_v_6587_width};return j::call(_method,_params8132,_receiver8130);})()};return j::call(_method,_params8135,_receiver8133);})());
(void)((_v_6592_word=([&]()->V{V _receiver8137=_v_6592_word;V _method8138=this->_literals[13];V _method=j::get(_receiver8137,_method8138);j::Args _params8139=j::Args{_v_6587_width};return j::call(_method,_params8139,_receiver8137);})()));

}

if(j::truth(j::unary("!",_v_6591_line))){(void)((_v_6591_line=_v_6592_word));
}else {if(j::truth(([&]()->V{V _lhs8141=([&]()->V{V _lhs8143=([&]()->V{V _lhs8145=j::get(_v_6591_line,this->_literals[12]);V _rhs8146=V(1.0);return j::binary("+",_lhs8145,_rhs8146);})();V _rhs8144=j::get(_v_6592_word,this->_literals[12]);return j::binary("+",_lhs8143,_rhs8144);})();V _rhs8142=_v_6587_width;return j::binary("<=",_lhs8141,_rhs8142);})())){(void)((_v_6591_line=j::binary("+",_v_6591_line,([&]()->V{V _lhs8148=this->_literals[54];V _rhs8149=_v_6592_word;return j::binary("+",_lhs8148,_rhs8149);})())));
}else {
(void)(([&]()->V{V _receiver8150=_v_6589_out;V _method8151=this->_literals[53];V _method=j::get(_receiver8150,_method8151);j::Args _params8152=j::Args{_v_6591_line};return j::call(_method,_params8152,_receiver8150);})());
(void)((_v_6591_line=_v_6592_word));

}

}

}
}}
(void)(([&]()->V{V _receiver8154=_v_6589_out;V _method8155=this->_literals[53];V _method=j::get(_receiver8154,_method8155);j::Args _params8156=j::Args{_v_6591_line};return j::call(_method,_params8156,_receiver8154);})());

}
}}
return _v_6589_out;

}

return V{};
},3);
this->_v_6593_regionOf.get()=j::function([=](const j::Args &_args_fn6594,const V &_receiver_fn6594,const V &_self_fn6594) mutable ->V{
V _v_6595_r;
V _v_6596_what;
_v_6595_r=_args_fn6594[0];
_v_6596_what=_args_fn6594[1];
{
V _v_6597_g;
_v_6597_g=_v_6595_r;
if(j::truth(([&]()->V{V _logical8157=([&]()->V{V _logical8158=j::unary("!",_v_6597_g);return !j::truth(_logical8158)?([&]()->V{V _lhs8159=j::unary("typeof",_v_6597_g);V _rhs8160=this->_literals[0];return V(!j::equal(_lhs8159,_rhs8160,true));})():_logical8158;})();return !j::truth(_logical8157)?j::unary("!",([&]()->V{V _callee8161=this->_v_6353_finite.get();return j::call(_callee8161,j::Args{j::get(_v_6597_g,this->_literals[29]),j::get(_v_6597_g,this->_literals[30]),j::get(_v_6597_g,this->_literals[31]),j::get(_v_6597_g,this->_literals[32])});})()):_logical8157;})())){(void)(([&]()->V{V _callee8164=this->_v_6338_fail.get();return j::call(_callee8164,j::Args{([&]()->V{std::u16string _text8162;_text8162+=u"";_text8162+=j::string(_v_6596_what);_text8162+=u"() takes a region as { x, y, cols, rows } in numbers, not ";_text8162+=j::string(([&]()->V{V _callee8163=this->_v_6358_show.get();return j::call(_callee8163,j::Args{_v_6595_r});})());_text8162+=u"";return V(std::move(_text8162));})()});})());
}
return _v_6597_g;

}

return V{};
},2);
this->_v_6598_text.get()=j::function([=](const j::Args &_args_fn6599,const V &_receiver_fn6599,const V &_self_fn6599) mutable ->V{
V _v_6600_s;
V _v_6601_a;
_v_6600_s=_args_fn6599[0];
_v_6601_a=j::rest(_args_fn6599,1);
{
(void)(([&]()->V{V _callee8165=this->_v_6340_grid.get();return j::call(_callee8165,j::Args{_v_6600_s,this->_literals[56]});})());
if(j::truth(([&]()->V{V _logical8166=([&]()->V{V _lhs8167=j::get(_v_6601_a,V(0.0));V _rhs8168=V::null();return V(!j::equal(_lhs8167,_rhs8168,true));})();return j::truth(_logical8166)?([&]()->V{V _lhs8169=j::unary("typeof",j::get(_v_6601_a,V(0.0)));V _rhs8170=this->_literals[0];return V(j::equal(_lhs8169,_rhs8170,true));})():_logical8166;})())){
V _v_6602_r;
_v_6602_r=([&]()->V{V _callee8171=this->_v_6593_regionOf.get();return j::call(_callee8171,j::Args{j::get(_v_6601_a,V(0.0)),this->_literals[56]});})();
return ([&]()->V{V _callee8172=this->_v_6603_write.get();return j::call(_callee8172,j::Args{_v_6600_s,j::get(_v_6602_r,this->_literals[29]),j::get(_v_6602_r,this->_literals[30]),j::get(_v_6601_a,V(1.0)),j::get(_v_6601_a,V(2.0)),_v_6602_r});})();

}

return ([&]()->V{V _callee8173=this->_v_6603_write.get();return j::call(_callee8173,j::Args{_v_6600_s,j::get(_v_6601_a,V(0.0)),j::get(_v_6601_a,V(1.0)),j::get(_v_6601_a,V(2.0)),j::get(_v_6601_a,V(3.0))});})();

}

return V{};
},1);
this->_v_6603_write.get()=j::function([=](const j::Args &_args_fn6604,const V &_receiver_fn6604,const V &_self_fn6604) mutable ->V{
V _v_6605_s;
V _v_6606_x;
V _v_6607_y;
V _v_6608_str;
V _v_6609_o;
V _v_6610_region;
_v_6605_s=_args_fn6604[0];
_v_6606_x=_args_fn6604[1];
_v_6607_y=_args_fn6604[2];
_v_6608_str=_args_fn6604[3];
_v_6609_o=_args_fn6604[4];
_v_6610_region=_args_fn6604[5];
{
V _v_6611_color;
j::Cell _v_6612_align;
V _v_6613_valign;
V _v_6614_w;
V _v_6615_h;
V _v_6616_transparent;
V _v_6617_width;
V _v_6618_height;
V _v_6619_wrap;
V _v_6620_t;
V _v_6621_k;
j::Cell _v_6622_fx;
V _v_6623_fy;
j::Cell _v_6624_bw;
V _v_6625_bh;
V _v_6626_lines;
V _v_6627_n;
V _v_6628_top;
V _v_6629_lefts;
V _pattern8175=([&]()->V{V _callee8174=this->_v_6376_opts.get();return j::call(_callee8174,j::Args{_v_6609_o,this->_literals[56]});})();
_v_6611_color=j::get(_pattern8175,this->_literals[57]);
V _default8176=j::get(_pattern8175,this->_literals[58]);if(_default8176.kind==V::Undefined||_default8176.kind==V::Hole)_default8176=this->_literals[59];
_v_6612_align.get()=_default8176;
V _default8177=j::get(_pattern8175,this->_literals[60]);if(_default8177.kind==V::Undefined||_default8177.kind==V::Hole)_default8177=this->_literals[61];
_v_6613_valign=_default8177;
_v_6614_w=j::get(_pattern8175,this->_literals[62]);
_v_6615_h=j::get(_pattern8175,this->_literals[63]);
if(j::truth(j::unary("!",([&]()->V{V _receiver8178=this->_v_6553_ALIGN.get();V _method8179=this->_literals[64];V _method=j::get(_receiver8178,_method8179);j::Args _params8180=j::Args{_v_6612_align.get()};return j::call(_method,_params8180,_receiver8178);})()))){(void)(([&]()->V{V _callee8184=this->_v_6338_fail.get();return j::call(_callee8184,j::Args{([&]()->V{std::u16string _text8181;_text8181+=u"align takes ";_text8181+=j::string(([&]()->V{V _callee8182=this->_v_6371_or.get();return j::call(_callee8182,j::Args{this->_v_6553_ALIGN.get()});})());_text8181+=u", not ";_text8181+=j::string(([&]()->V{V _callee8183=this->_v_6358_show.get();return j::call(_callee8183,j::Args{_v_6612_align.get()});})());_text8181+=u"";return V(std::move(_text8181));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _receiver8185=this->_v_6554_VALIGN.get();V _method8186=this->_literals[64];V _method=j::get(_receiver8185,_method8186);j::Args _params8187=j::Args{_v_6613_valign};return j::call(_method,_params8187,_receiver8185);})()))){(void)(([&]()->V{V _callee8191=this->_v_6338_fail.get();return j::call(_callee8191,j::Args{([&]()->V{std::u16string _text8188;_text8188+=u"valign takes ";_text8188+=j::string(([&]()->V{V _callee8189=this->_v_6371_or.get();return j::call(_callee8189,j::Args{this->_v_6554_VALIGN.get()});})());_text8188+=u", not ";_text8188+=j::string(([&]()->V{V _callee8190=this->_v_6358_show.get();return j::call(_callee8190,j::Args{_v_6613_valign});})());_text8188+=u"";return V(std::move(_text8188));})()});})());
}
_v_6616_transparent=([&]()->V{V _callee8194=this->_v_6380_yes.get();return j::call(_callee8194,j::Args{([&]()->V{V _chain8192=_v_6609_o;if(j::nullish(_chain8192))return V{};V _chain8193=j::get(_chain8192,this->_literals[65]);return _chain8193;})(),this->_literals[65],V(false)});})();
_v_6617_width=(j::truth(([&]()->V{V _lhs8195=_v_6614_w;V _rhs8196=j::builtin("undefined");return V(j::equal(_lhs8195,_rhs8196,true));})())?j::builtin("undefined"):([&]()->V{V _callee8197=this->_v_6555_size.get();return j::call(_callee8197,j::Args{_v_6614_w,this->_literals[62]});})());
_v_6618_height=(j::truth(([&]()->V{V _lhs8198=_v_6615_h;V _rhs8199=j::builtin("undefined");return V(j::equal(_lhs8198,_rhs8199,true));})())?j::builtin("undefined"):([&]()->V{V _callee8200=this->_v_6555_size.get();return j::call(_callee8200,j::Args{_v_6615_h,this->_literals[63]});})());
_v_6619_wrap=([&]()->V{V _callee8206=this->_v_6380_yes.get();return j::call(_callee8206,j::Args{([&]()->V{V _chain8201=_v_6609_o;if(j::nullish(_chain8201))return V{};V _chain8202=j::get(_chain8201,this->_literals[66]);return _chain8202;})(),this->_literals[66],([&]()->V{V _logical8203=([&]()->V{V _lhs8204=_v_6617_width;V _rhs8205=j::builtin("undefined");return V(!j::equal(_lhs8204,_rhs8205,true));})();return !j::truth(_logical8203)?j::unary("!",j::unary("!",_v_6610_region)):_logical8203;})()});})();
_v_6620_t=([&]()->V{V _callee8207=this->_v_6560_words.get();return j::call(_callee8207,j::Args{_v_6608_str,this->_literals[56]});})();
_v_6621_k=([&]()->V{V _callee8208=this->_v_6345_paint.get();return j::call(_callee8208,j::Args{_v_6605_s,_v_6611_color});})();
if(j::truth(j::unary("!",([&]()->V{V _callee8209=this->_v_6353_finite.get();return j::call(_callee8209,j::Args{_v_6606_x,_v_6607_y});})()))){return ([&]()->V{V _obj8210=j::object();j::put(_obj8210,this->_literals[29],V(0.0));j::put(_obj8210,this->_literals[30],V(0.0));j::put(_obj8210,this->_literals[31],V(0.0));j::put(_obj8210,this->_literals[32],V(0.0));return _obj8210;})();
}
_v_6622_fx.get()=([&]()->V{V _number8211=_v_6606_x;return V(std::floor(j::number(_number8211)));})();
_v_6623_fy=([&]()->V{V _number8212=_v_6607_y;return V(std::floor(j::number(_number8212)));})();
_v_6624_bw.get()=([&]()->V{V _logical8213=_v_6617_width;return j::nullish(_logical8213)?(j::truth(_v_6610_region)?([&]()->V{V _number8214=j::get(_v_6610_region,this->_literals[31]);return V(std::floor(j::number(_number8214)));})():([&]()->V{V _lhs8215=j::get(_v_6605_s,this->_literals[31]);V _rhs8216=_v_6622_fx.get();return V(j::number(_lhs8215)-j::number(_rhs8216));})()):_logical8213;})();
_v_6625_bh=([&]()->V{V _logical8217=_v_6618_height;return j::nullish(_logical8217)?(j::truth(_v_6610_region)?([&]()->V{V _number8218=j::get(_v_6610_region,this->_literals[32]);return V(std::floor(j::number(_number8218)));})():([&]()->V{V _lhs8219=j::get(_v_6605_s,this->_literals[32]);V _rhs8220=_v_6623_fy;return V(j::number(_lhs8219)-j::number(_rhs8220));})()):_logical8217;})();
if(j::truth(([&]()->V{V _logical8221=([&]()->V{V _logical8222=([&]()->V{V _lhs8223=_v_6620_t;V _rhs8224=this->_literals[10];return V(j::equal(_lhs8223,_rhs8224,true));})();return !j::truth(_logical8222)?([&]()->V{V _lhs8225=_v_6624_bw.get();V _rhs8226=V(1.0);return j::binary("<",_lhs8225,_rhs8226);})():_logical8222;})();return !j::truth(_logical8221)?([&]()->V{V _lhs8227=_v_6625_bh;V _rhs8228=V(1.0);return j::binary("<",_lhs8227,_rhs8228);})():_logical8221;})())){return ([&]()->V{V _obj8229=j::object();j::put(_obj8229,this->_literals[29],_v_6622_fx.get());j::put(_obj8229,this->_literals[30],_v_6623_fy);j::put(_obj8229,this->_literals[31],V(0.0));j::put(_obj8229,this->_literals[32],V(0.0));return _obj8229;})();
}
_v_6626_lines=([&]()->V{V _callee8230=this->_v_6584_layout.get();return j::call(_callee8230,j::Args{_v_6620_t,_v_6624_bw.get(),_v_6619_wrap});})();
if(j::truth(([&]()->V{V _lhs8231=j::get(_v_6626_lines,this->_literals[12]);V _rhs8232=_v_6625_bh;return j::binary(">",_lhs8231,_rhs8232);})())){(void)((_v_6626_lines=([&]()->V{V _receiver8234=_v_6626_lines;V _method8235=this->_literals[13];V _method=j::get(_receiver8234,_method8235);j::Args _params8236=j::Args{V(0.0),_v_6625_bh};return j::call(_method,_params8236,_receiver8234);})()));
}
_v_6627_n=j::get(_v_6626_lines,this->_literals[12]);
_v_6628_top=(j::truth(([&]()->V{V _lhs8237=_v_6613_valign;V _rhs8238=this->_literals[61];return V(j::equal(_lhs8237,_rhs8238,true));})())?_v_6623_fy:(j::truth(([&]()->V{V _lhs8239=_v_6613_valign;V _rhs8240=this->_literals[67];return V(j::equal(_lhs8239,_rhs8240,true));})())?([&]()->V{V _lhs8241=_v_6623_fy;V _rhs8242=([&]()->V{V _number8247=([&]()->V{V _lhs8248=([&]()->V{V _lhs8250=_v_6625_bh;V _rhs8251=_v_6627_n;return V(j::number(_lhs8250)-j::number(_rhs8251));})();V _rhs8249=V(2.0);return V(j::number(_lhs8248)/j::number(_rhs8249));})();return V(std::floor(j::number(_number8247)));})();return j::binary("+",_lhs8241,_rhs8242);})():([&]()->V{V _lhs8252=([&]()->V{V _lhs8254=_v_6623_fy;V _rhs8255=_v_6625_bh;return j::binary("+",_lhs8254,_rhs8255);})();V _rhs8253=_v_6627_n;return V(j::number(_lhs8252)-j::number(_rhs8253));})()));
_v_6629_lefts=([&]()->V{V _receiver8275=_v_6626_lines;V _method8276=this->_literals[25];V _method=j::get(_receiver8275,_method8276);j::Args _params8277=j::Args{j::function([=](const j::Args &_args_fn6630,const V &_receiver_fn6630,const V &_self_fn6630) mutable ->V{
V _v_6631_l;
_v_6631_l=_args_fn6630[0];
return (j::truth(([&]()->V{V _lhs8256=_v_6612_align.get();V _rhs8257=this->_literals[59];return V(j::equal(_lhs8256,_rhs8257,true));})())?_v_6622_fx.get():(j::truth(([&]()->V{V _lhs8258=_v_6612_align.get();V _rhs8259=this->_literals[68];return V(j::equal(_lhs8258,_rhs8259,true));})())?([&]()->V{V _lhs8260=_v_6622_fx.get();V _rhs8261=([&]()->V{V _number8266=([&]()->V{V _lhs8267=([&]()->V{V _lhs8269=_v_6624_bw.get();V _rhs8270=j::get(_v_6631_l,this->_literals[12]);return V(j::number(_lhs8269)-j::number(_rhs8270));})();V _rhs8268=V(2.0);return V(j::number(_lhs8267)/j::number(_rhs8268));})();return V(std::floor(j::number(_number8266)));})();return j::binary("+",_lhs8260,_rhs8261);})():([&]()->V{V _lhs8271=([&]()->V{V _lhs8273=_v_6622_fx.get();V _rhs8274=_v_6624_bw.get();return j::binary("+",_lhs8273,_rhs8274);})();V _rhs8272=j::get(_v_6631_l,this->_literals[12]);return V(j::number(_lhs8271)-j::number(_rhs8272));})()));
return V{};
},1)};return j::call(_method,_params8277,_receiver8275);})();
return ([&]()->V{V _callee8278=this->_v_6566_writeLines.get();return j::call(_callee8278,j::Args{_v_6605_s,_v_6626_lines,_v_6629_lefts,_v_6628_top,_v_6621_k,_v_6616_transparent});})();

}

return V{};
},6);
this->_v_6632_label.get()=j::function([=](const j::Args &_args_fn6633,const V &_receiver_fn6633,const V &_self_fn6633) mutable ->V{
V _v_6634_s;
j::Cell _v_6635_x;
V _v_6636_y;
V _v_6637_str;
V _v_6638_o;
_v_6634_s=_args_fn6633[0];
_v_6635_x.get()=_args_fn6633[1];
_v_6636_y=_args_fn6633[2];
_v_6637_str=_args_fn6633[3];
_v_6638_o=_args_fn6633[4];
{
V _v_6639_color;
V _v_6640_transparent;
V _v_6641_t;
V _v_6642_k;
V _v_6643_lines;
j::Cell _v_6644_start;
(void)(([&]()->V{V _callee8279=this->_v_6340_grid.get();return j::call(_callee8279,j::Args{_v_6634_s,this->_literals[69]});})());
V _pattern8281=([&]()->V{V _callee8280=this->_v_6376_opts.get();return j::call(_callee8280,j::Args{_v_6638_o,this->_literals[69]});})();
_v_6639_color=j::get(_pattern8281,this->_literals[57]);
_v_6640_transparent=([&]()->V{V _callee8284=this->_v_6380_yes.get();return j::call(_callee8284,j::Args{([&]()->V{V _chain8282=_v_6638_o;if(j::nullish(_chain8282))return V{};V _chain8283=j::get(_chain8282,this->_literals[65]);return _chain8283;})(),this->_literals[65],V(false)});})();
_v_6641_t=([&]()->V{V _callee8285=this->_v_6560_words.get();return j::call(_callee8285,j::Args{_v_6637_str,this->_literals[69]});})();
_v_6642_k=([&]()->V{V _callee8286=this->_v_6345_paint.get();return j::call(_callee8286,j::Args{_v_6634_s,_v_6639_color});})();
if(j::truth(([&]()->V{V _logical8287=j::unary("!",([&]()->V{V _callee8288=this->_v_6353_finite.get();return j::call(_callee8288,j::Args{_v_6635_x.get(),_v_6636_y});})());return !j::truth(_logical8287)?([&]()->V{V _lhs8289=_v_6641_t;V _rhs8290=this->_literals[10];return V(j::equal(_lhs8289,_rhs8290,true));})():_logical8287;})())){return ([&]()->V{V _obj8291=j::object();j::put(_obj8291,this->_literals[29],(j::truth(([&]()->V{V _callee8292=this->_v_6353_finite.get();return j::call(_callee8292,j::Args{_v_6635_x.get()});})())?([&]()->V{V _number8293=_v_6635_x.get();return V(std::floor(j::number(_number8293)));})():V(0.0)));j::put(_obj8291,this->_literals[30],(j::truth(([&]()->V{V _callee8294=this->_v_6353_finite.get();return j::call(_callee8294,j::Args{_v_6636_y});})())?([&]()->V{V _number8295=_v_6636_y;return V(std::floor(j::number(_number8295)));})():V(0.0)));j::put(_obj8291,this->_literals[31],V(0.0));j::put(_obj8291,this->_literals[32],V(0.0));return _obj8291;})();
}
_v_6643_lines=([&]()->V{V _receiver8296=_v_6641_t;V _method8297=this->_literals[52];V _method=j::get(_receiver8296,_method8297);j::Args _params8298=j::Args{this->_literals[47]};return j::call(_method,_params8298,_receiver8296);})();
_v_6644_start.get()=j::function([=](const j::Args &_args_fn6645,const V &_receiver_fn6645,const V &_self_fn6645) mutable ->V{
V _v_6646_v;
V _v_6647_n;
_v_6646_v=_args_fn6645[0];
_v_6647_n=_args_fn6645[1];
return ([&]()->V{V _number8305=([&]()->V{V _lhs8306=([&]()->V{V _lhs8308=_v_6646_v;V _rhs8309=([&]()->V{V _lhs8310=_v_6647_n;V _rhs8311=V(2.0);return V(j::number(_lhs8310)/j::number(_rhs8311));})();return V(j::number(_lhs8308)-j::number(_rhs8309));})();V _rhs8307=V(0.5);return j::binary("+",_lhs8306,_rhs8307);})();return V(std::floor(j::number(_number8305)));})();
return V{};
},2);
return ([&]()->V{V _callee8317=this->_v_6566_writeLines.get();return j::call(_callee8317,j::Args{_v_6634_s,_v_6643_lines,([&]()->V{V _receiver8313=_v_6643_lines;V _method8314=this->_literals[25];V _method=j::get(_receiver8313,_method8314);j::Args _params8315=j::Args{j::function([=](const j::Args &_args_fn6648,const V &_receiver_fn6648,const V &_self_fn6648) mutable ->V{
V _v_6649_l;
_v_6649_l=_args_fn6648[0];
return ([&]()->V{V _callee8312=_v_6644_start.get();return j::call(_callee8312,j::Args{_v_6635_x.get(),j::get(_v_6649_l,this->_literals[12])});})();
return V{};
},1)};return j::call(_method,_params8315,_receiver8313);})(),([&]()->V{V _callee8316=_v_6644_start.get();return j::call(_callee8316,j::Args{_v_6636_y,j::get(_v_6643_lines,this->_literals[12])});})(),_v_6642_k,_v_6640_transparent});})();

}

return V{};
},5);
this->_v_6650_line.get()=j::function([=](const j::Args &_args_fn6651,const V &_receiver_fn6651,const V &_self_fn6651) mutable ->V{
V _v_6652_s;
V _v_6653_x0;
V _v_6654_y0;
V _v_6655_x1;
V _v_6656_y1;
V _v_6657_o;
_v_6652_s=_args_fn6651[0];
_v_6653_x0=_args_fn6651[1];
_v_6654_y0=_args_fn6651[2];
_v_6655_x1=_args_fn6651[3];
_v_6656_y1=_args_fn6651[4];
_v_6657_o=_args_fn6651[5];
{
V _v_6658_char;
V _v_6659_style;
V _v_6660_color;
V _v_6661_ch;
V _v_6662_k;
V _v_6663_join;
(void)(([&]()->V{V _callee8318=this->_v_6340_grid.get();return j::call(_callee8318,j::Args{_v_6652_s,this->_literals[70]});})());
V _pattern8320=([&]()->V{V _callee8319=this->_v_6376_opts.get();return j::call(_callee8319,j::Args{_v_6657_o,this->_literals[70]});})();
_v_6658_char=j::get(_pattern8320,this->_literals[71]);
_v_6659_style=j::get(_pattern8320,this->_literals[72]);
_v_6660_color=j::get(_pattern8320,this->_literals[57]);
_v_6661_ch=([&]()->V{V _callee8321=this->_v_6502_stroke.get();return j::call(_callee8321,j::Args{_v_6658_char,_v_6659_style,this->_literals[73]});})();
_v_6662_k=([&]()->V{V _callee8322=this->_v_6345_paint.get();return j::call(_callee8322,j::Args{_v_6652_s,_v_6660_color});})();
_v_6663_join=([&]()->V{V _callee8325=this->_v_6380_yes.get();return j::call(_callee8325,j::Args{([&]()->V{V _chain8323=_v_6657_o;if(j::nullish(_chain8323))return V{};V _chain8324=j::get(_chain8323,this->_literals[23]);return _chain8324;})(),this->_literals[23],V(true)});})();
(void)(([&]()->V{V _callee8329=this->_v_6673_path.get();return j::call(_callee8329,j::Args{_v_6652_s,([&]()->V{j::Args _array8326;_array8326.push_back(([&]()->V{j::Args _array8327;_array8327.push_back(_v_6653_x0);_array8327.push_back(_v_6654_y0);return j::array(std::move(_array8327));})());_array8326.push_back(([&]()->V{j::Args _array8328;_array8328.push_back(_v_6655_x1);_array8328.push_back(_v_6656_y1);return j::array(std::move(_array8328));})());return j::array(std::move(_array8326));})(),_v_6661_ch,_v_6662_k,V(false),_v_6663_join});})());

}

return V{};
},6);
this->_v_6664_polyline.get()=j::function([=](const j::Args &_args_fn6665,const V &_receiver_fn6665,const V &_self_fn6665) mutable ->V{
V _v_6666_s;
V _v_6667_points;
V _v_6668_o;
_v_6666_s=_args_fn6665[0];
_v_6667_points=_args_fn6665[1];
_v_6668_o=_args_fn6665[2];
{
V _v_6669_char;
V _v_6670_style;
V _v_6671_color;
V _v_6672_ch;
(void)(([&]()->V{V _callee8330=this->_v_6340_grid.get();return j::call(_callee8330,j::Args{_v_6666_s,this->_literals[74]});})());
V _pattern8332=([&]()->V{V _callee8331=this->_v_6376_opts.get();return j::call(_callee8331,j::Args{_v_6668_o,this->_literals[74]});})();
_v_6669_char=j::get(_pattern8332,this->_literals[71]);
_v_6670_style=j::get(_pattern8332,this->_literals[72]);
_v_6671_color=j::get(_pattern8332,this->_literals[57]);
_v_6672_ch=([&]()->V{V _callee8333=this->_v_6502_stroke.get();return j::call(_callee8333,j::Args{_v_6669_char,_v_6670_style,this->_literals[75]});})();
(void)(([&]()->V{V _callee8342=this->_v_6673_path.get();return j::call(_callee8342,j::Args{_v_6666_s,([&]()->V{V _callee8334=this->_v_6695_checkPoints.get();return j::call(_callee8334,j::Args{_v_6667_points,this->_literals[74]});})(),_v_6672_ch,([&]()->V{V _callee8335=this->_v_6345_paint.get();return j::call(_callee8335,j::Args{_v_6666_s,_v_6671_color});})(),([&]()->V{V _callee8338=this->_v_6380_yes.get();return j::call(_callee8338,j::Args{([&]()->V{V _chain8336=_v_6668_o;if(j::nullish(_chain8336))return V{};V _chain8337=j::get(_chain8336,this->_literals[76]);return _chain8337;})(),this->_literals[76],V(false)});})(),([&]()->V{V _callee8341=this->_v_6380_yes.get();return j::call(_callee8341,j::Args{([&]()->V{V _chain8339=_v_6668_o;if(j::nullish(_chain8339))return V{};V _chain8340=j::get(_chain8339,this->_literals[23]);return _chain8340;})(),this->_literals[23],V(true)});})()});})());

}

return V{};
},3);
this->_v_6673_path.get()=j::function([=](const j::Args &_args_fn6674,const V &_receiver_fn6674,const V &_self_fn6674) mutable ->V{
j::Cell _v_6675_s;
j::Cell _v_6676_pts;
V _v_6677_ch;
V _v_6678_k;
V _v_6679_closed;
V _v_6680_join;
_v_6675_s.get()=_args_fn6674[0];
_v_6676_pts.get()=_args_fn6674[1];
_v_6677_ch=_args_fn6674[2];
_v_6678_k=_args_fn6674[3];
_v_6679_closed=_args_fn6674[4];
_v_6680_join=_args_fn6674[5];
{
V _v_6682_last;
V _v_6683_rank;
if(j::truth(([&]()->V{V _logical8343=([&]()->V{V _lhs8344=j::unary("typeof",_v_6677_ch);V _rhs8345=this->_literals[11];return V(j::equal(_lhs8344,_rhs8345,true));})();return j::truth(_logical8343)?([&]()->V{V _lhs8346=_v_6677_ch;V _rhs8347=this->_literals[37];return V(!j::equal(_lhs8346,_rhs8347,true));})():_logical8343;})())){return ([&]()->V{V _callee8348=this->_v_6512_boxPath.get();return j::call(_callee8348,j::Args{_v_6675_s.get(),_v_6676_pts.get(),_v_6679_closed,_v_6677_ch,_v_6678_k,_v_6680_join});})();
}
if(j::truth(([&]()->V{V _lhs8349=j::get(_v_6676_pts.get(),this->_literals[12]);V _rhs8350=V(1.0);return V(j::equal(_lhs8349,_rhs8350,true));})())){
V _v_6681_n;
_v_6681_n=([&]()->V{V _callee8351=this->_v_6392_trace.get();return j::call(_callee8351,j::Args{j::get(j::get(_v_6676_pts.get(),V(0.0)),V(0.0)),j::get(j::get(_v_6676_pts.get(),V(0.0)),V(1.0)),j::get(j::get(_v_6676_pts.get(),V(0.0)),V(0.0)),j::get(j::get(_v_6676_pts.get(),V(0.0)),V(1.0)),j::get(_v_6675_s.get(),this->_literals[31]),j::get(_v_6675_s.get(),this->_literals[32])});})();
if(j::truth(_v_6681_n)){(void)(([&]()->V{V _callee8352=this->_v_6481_strokeCells.get();return j::call(_callee8352,j::Args{_v_6675_s.get(),_v_6681_n,_v_6677_ch,_v_6678_k,_v_6680_join});})());
}
return V{};

}

_v_6682_last=(j::truth(([&]()->V{V _logical8353=_v_6679_closed;return j::truth(_logical8353)?([&]()->V{V _lhs8354=j::get(_v_6676_pts.get(),this->_literals[12]);V _rhs8355=V(2.0);return j::binary(">",_lhs8354,_rhs8355);})():_logical8353;})())?j::get(_v_6676_pts.get(),this->_literals[12]):([&]()->V{V _lhs8356=j::get(_v_6676_pts.get(),this->_literals[12]);V _rhs8357=V(1.0);return V(j::number(_lhs8356)-j::number(_rhs8357));})());
_v_6683_rank=j::function([=](const j::Args &_args_fn6684,const V &_receiver_fn6684,const V &_self_fn6684) mutable ->V{
V _v_6685_i;
_v_6685_i=_args_fn6684[0];
{
V _v_6686_a;
V _v_6687_b;
V _v_6688_ax;
V _v_6689_ay;
_v_6686_a=j::get(_v_6676_pts.get(),_v_6685_i);
_v_6687_b=j::get(_v_6676_pts.get(),([&]()->V{V _lhs8358=([&]()->V{V _lhs8360=_v_6685_i;V _rhs8361=V(1.0);return j::binary("+",_lhs8360,_rhs8361);})();V _rhs8359=j::get(_v_6676_pts.get(),this->_literals[12]);return V(std::fmod(j::number(_lhs8358),j::number(_rhs8359)));})());
_v_6688_ax=([&]()->V{V _number8366=([&]()->V{V _lhs8367=([&]()->V{V _number8369=j::get(_v_6687_b,V(0.0));return V(std::floor(j::number(_number8369)));})();V _rhs8368=([&]()->V{V _number8370=j::get(_v_6686_a,V(0.0));return V(std::floor(j::number(_number8370)));})();return V(j::number(_lhs8367)-j::number(_rhs8368));})();return V(std::fabs(j::number(_number8366)));})();
_v_6689_ay=([&]()->V{V _number8375=([&]()->V{V _lhs8376=([&]()->V{V _number8378=j::get(_v_6687_b,V(1.0));return V(std::floor(j::number(_number8378)));})();V _rhs8377=([&]()->V{V _number8379=j::get(_v_6686_a,V(1.0));return V(std::floor(j::number(_number8379)));})();return V(j::number(_lhs8376)-j::number(_rhs8377));})();return V(std::fabs(j::number(_number8375)));})();
return (j::truth(j::unary("!",_v_6689_ay))?V(0.0):(j::truth(([&]()->V{V _lhs8380=([&]()->V{V _lhs8382=_v_6689_ay;V _rhs8383=j::get(_v_6675_s.get(),this->_literals[38]);return V(j::number(_lhs8382)*j::number(_rhs8383));})();V _rhs8381=([&]()->V{V _lhs8384=V(4.0);V _rhs8385=_v_6688_ax;return V(j::number(_lhs8384)*j::number(_rhs8385));})();return j::binary(">",_lhs8380,_rhs8381);})())?V(1.0):V(2.0)));

}

return V{};
},1);
{V _v_6690_pass;
_v_6690_pass=V(0.0);
for(;j::truth(([&]()->V{V _lhs8386=_v_6690_pass;V _rhs8387=(j::truth(([&]()->V{V _lhs8388=_v_6677_ch;V _rhs8389=this->_literals[37];return V(j::equal(_lhs8388,_rhs8389,true));})())?V(3.0):V(1.0));return j::binary("<",_lhs8386,_rhs8387);})());(void)(j::increment(_v_6690_pass,1,false))){{V _v_6691_i;
_v_6691_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs8390=_v_6691_i;V _rhs8391=_v_6682_last;return j::binary("<",_lhs8390,_rhs8391);})());(void)(j::increment(_v_6691_i,1,false))){
V _v_6692_a;
V _v_6693_b;
V _v_6694_n;
if(j::truth(([&]()->V{V _logical8392=([&]()->V{V _lhs8393=_v_6677_ch;V _rhs8394=this->_literals[37];return V(j::equal(_lhs8393,_rhs8394,true));})();return j::truth(_logical8392)?([&]()->V{V _lhs8395=([&]()->V{V _callee8397=_v_6683_rank;return j::call(_callee8397,j::Args{_v_6691_i});})();V _rhs8396=_v_6690_pass;return V(!j::equal(_lhs8395,_rhs8396,true));})():_logical8392;})())){continue;
}
_v_6692_a=j::get(_v_6676_pts.get(),_v_6691_i);
_v_6693_b=j::get(_v_6676_pts.get(),([&]()->V{V _lhs8398=([&]()->V{V _lhs8400=_v_6691_i;V _rhs8401=V(1.0);return j::binary("+",_lhs8400,_rhs8401);})();V _rhs8399=j::get(_v_6676_pts.get(),this->_literals[12]);return V(std::fmod(j::number(_lhs8398),j::number(_rhs8399)));})());
_v_6694_n=([&]()->V{V _callee8402=this->_v_6392_trace.get();return j::call(_callee8402,j::Args{j::get(_v_6692_a,V(0.0)),j::get(_v_6692_a,V(1.0)),j::get(_v_6693_b,V(0.0)),j::get(_v_6693_b,V(1.0)),j::get(_v_6675_s.get(),this->_literals[31]),j::get(_v_6675_s.get(),this->_literals[32])});})();
if(j::truth(_v_6694_n)){(void)(([&]()->V{V _callee8403=this->_v_6481_strokeCells.get();return j::call(_callee8403,j::Args{_v_6675_s.get(),_v_6694_n,_v_6677_ch,_v_6678_k,_v_6680_join});})());
}

}
}
}}

}

return V{};
},6);
this->_v_6695_checkPoints.get()=j::function([=](const j::Args &_args_fn6696,const V &_receiver_fn6696,const V &_self_fn6696) mutable ->V{
V _v_6697_points;
V _v_6698_what;
_v_6697_points=_args_fn6696[0];
_v_6698_what=_args_fn6696[1];
{
V _v_6699_ok;
_v_6699_ok=j::function([=](const j::Args &_args_fn6700,const V &_receiver_fn6700,const V &_self_fn6700) mutable ->V{
V _v_6701_p;
_v_6701_p=_args_fn6700[0];
return ([&]()->V{V _logical8404=([&]()->V{V _logical8405=([&]()->V{V _logical8406=([&]()->V{V _receiver8407=j::builtin("Array");V _method8408=this->_literals[17];V _method=j::get(_receiver8407,_method8408);j::Args _params8409=j::Args{_v_6701_p};return j::call(_method,_params8409,_receiver8407);})();return j::truth(_logical8406)?([&]()->V{V _lhs8410=j::get(_v_6701_p,this->_literals[12]);V _rhs8411=V(2.0);return j::binary(">=",_lhs8410,_rhs8411);})():_logical8406;})();return j::truth(_logical8405)?([&]()->V{V _lhs8412=j::unary("typeof",j::get(_v_6701_p,V(0.0)));V _rhs8413=this->_literals[8];return V(j::equal(_lhs8412,_rhs8413,true));})():_logical8405;})();return j::truth(_logical8404)?([&]()->V{V _lhs8414=j::unary("typeof",j::get(_v_6701_p,V(1.0)));V _rhs8415=this->_literals[8];return V(j::equal(_lhs8414,_rhs8415,true));})():_logical8404;})();
return V{};
},1);
if(j::truth(j::unary("!",([&]()->V{V _receiver8416=j::builtin("Array");V _method8417=this->_literals[17];V _method=j::get(_receiver8416,_method8417);j::Args _params8418=j::Args{_v_6697_points};return j::call(_method,_params8418,_receiver8416);})()))){(void)(([&]()->V{V _callee8421=this->_v_6338_fail.get();return j::call(_callee8421,j::Args{([&]()->V{std::u16string _text8419;_text8419+=u"";_text8419+=j::string(_v_6698_what);_text8419+=u"() takes a list of points as [x, y], such as [[0, 0], [10, 4]], not ";_text8419+=j::string(([&]()->V{V _callee8420=this->_v_6358_show.get();return j::call(_callee8420,j::Args{_v_6697_points});})());_text8419+=u"";return V(std::move(_text8419));})()});})());
}
{V _v_6702_i;
_v_6702_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs8422=_v_6702_i;V _rhs8423=j::get(_v_6697_points,this->_literals[12]);return j::binary("<",_lhs8422,_rhs8423);})());(void)(j::increment(_v_6702_i,1,false))){if(j::truth(j::unary("!",([&]()->V{V _callee8424=_v_6699_ok;return j::call(_callee8424,j::Args{j::get(_v_6697_points,_v_6702_i)});})()))){(void)(([&]()->V{V _callee8427=this->_v_6338_fail.get();return j::call(_callee8427,j::Args{([&]()->V{std::u16string _text8425;_text8425+=u"";_text8425+=j::string(_v_6698_what);_text8425+=u"() takes a list of points as [x, y], such as [[0, 0], [10, 4]]: point ";_text8425+=j::string(_v_6702_i);_text8425+=u" is ";_text8425+=j::string(([&]()->V{V _callee8426=this->_v_6358_show.get();return j::call(_callee8426,j::Args{j::get(_v_6697_points,_v_6702_i)});})());_text8425+=u"";return V(std::move(_text8425));})()});})());
}
}}
return _v_6697_points;

}

return V{};
},2);
this->_v_6703_around.get()=j::function([=](const j::Args &_args_fn6704,const V &_receiver_fn6704,const V &_self_fn6704) mutable ->V{
V _v_6705_on;
V _v_6706_cx;
V _v_6707_cy;
V _v_6708_r;
V _v_6709_turn;
_v_6705_on=_args_fn6704[0];
_v_6706_cx=_args_fn6704[1];
_v_6707_cy=_args_fn6704[2];
_v_6708_r=_args_fn6704[3];
_v_6709_turn=_args_fn6704[4];
{
V _v_6710_aspect;
V _v_6711_a;
V _v_6712_k;
_v_6710_aspect=(j::truth(([&]()->V{V _logical8428=_v_6705_on;return j::truth(_logical8428)?([&]()->V{V _lhs8429=j::unary("typeof",_v_6705_on);V _rhs8430=this->_literals[0];return V(j::equal(_lhs8429,_rhs8430,true));})():_logical8428;})())?j::get(_v_6705_on,this->_literals[38]):j::builtin("undefined"));
if(j::truth(([&]()->V{V _logical8431=([&]()->V{V _lhs8432=j::unary("typeof",_v_6710_aspect);V _rhs8433=this->_literals[8];return V(!j::equal(_lhs8432,_rhs8433,true));})();return !j::truth(_logical8431)?j::unary("!",([&]()->V{V _lhs8434=_v_6710_aspect;V _rhs8435=V(0.0);return j::binary(">",_lhs8434,_rhs8435);})()):_logical8431;})())){(void)(([&]()->V{V _callee8436=this->_v_6338_fail.get();return j::call(_callee8436,j::Args{this->_literals[77]});})());
}
_v_6711_a=([&]()->V{V _lhs8437=_v_6709_turn;V _rhs8438=this->_v_6335_TAU.get();return V(j::number(_lhs8437)*j::number(_rhs8438));})();
_v_6712_k=([&]()->V{V _lhs8439=_v_6708_r;V _rhs8440=([&]()->V{V _lhs8441=V(1.0);V _rhs8442=V(1e-9);return V(j::number(_lhs8441)-j::number(_rhs8442));})();return V(j::number(_lhs8439)*j::number(_rhs8440));})();
return ([&]()->V{j::Args _array8443;_array8443.push_back(([&]()->V{V _lhs8444=_v_6706_cx;V _rhs8445=([&]()->V{V _lhs8446=([&]()->V{V _number8448=_v_6711_a;return V(std::sin(j::number(_number8448)));})();V _rhs8447=_v_6712_k;return V(j::number(_lhs8446)*j::number(_rhs8447));})();return j::binary("+",_lhs8444,_rhs8445);})());_array8443.push_back(([&]()->V{V _lhs8449=_v_6707_cy;V _rhs8450=([&]()->V{V _lhs8451=([&]()->V{V _lhs8453=([&]()->V{V _number8455=_v_6711_a;return V(std::cos(j::number(_number8455)));})();V _rhs8454=_v_6712_k;return V(j::number(_lhs8453)*j::number(_rhs8454));})();V _rhs8452=_v_6710_aspect;return V(j::number(_lhs8451)/j::number(_rhs8452));})();return V(j::number(_lhs8449)-j::number(_rhs8450));})());return j::array(std::move(_array8443));})();

}

return V{};
},5);
this->_v_6713_ray.get()=j::function([=](const j::Args &_args_fn6714,const V &_receiver_fn6714,const V &_self_fn6714) mutable ->V{
V _v_6715_s;
V _v_6716_x;
V _v_6717_y;
V _v_6718_length;
V _v_6719_turn;
V _v_6720_o;
_v_6715_s=_args_fn6714[0];
_v_6716_x=_args_fn6714[1];
_v_6717_y=_args_fn6714[2];
_v_6718_length=_args_fn6714[3];
_v_6719_turn=_args_fn6714[4];
_v_6720_o=_args_fn6714[5];
{
V _v_6721_x1;
V _v_6722_y1;
V _pattern8458=([&]()->V{V _callee8457=this->_v_6703_around.get();return j::call(_callee8457,j::Args{([&]()->V{V _callee8456=this->_v_6340_grid.get();return j::call(_callee8456,j::Args{_v_6715_s,this->_literals[78]});})(),_v_6716_x,_v_6717_y,_v_6718_length,_v_6719_turn});})();
_v_6721_x1=j::get(_pattern8458,V(0));
_v_6722_y1=j::get(_pattern8458,V(1));
(void)(([&]()->V{V _callee8459=this->_v_6650_line.get();return j::call(_callee8459,j::Args{_v_6715_s,_v_6716_x,_v_6717_y,_v_6721_x1,_v_6722_y1,_v_6720_o});})());

}

return V{};
},6);
this->_v_6725_rect.get()=j::function([=](const j::Args &_args_fn6726,const V &_receiver_fn6726,const V &_self_fn6726) mutable ->V{
j::Cell _v_6727_s;
V _v_6728_x;
V _v_6729_y;
V _v_6730_w;
V _v_6731_h;
V _v_6732_o;
_v_6727_s.get()=_args_fn6726[0];
_v_6728_x=_args_fn6726[1];
_v_6729_y=_args_fn6726[2];
_v_6730_w=_args_fn6726[3];
_v_6731_h=_args_fn6726[4];
_v_6732_o=_args_fn6726[5];
{
V _v_6733_style;
V _v_6734_fill;
V _v_6735_color;
V _v_6736_fillColor;
V _v_6737_title;
V _v_6738_edges;
V _v_6740_f;
j::Cell _v_6742_join;
j::Cell _v_6743_k;
V _v_6744_fk;
V _v_6745_inset;
V _v_6746_inside;
V _v_6780_room;
(void)(([&]()->V{V _callee8460=this->_v_6340_grid.get();return j::call(_callee8460,j::Args{_v_6727_s.get(),this->_literals[79]});})());
V _pattern8462=([&]()->V{V _callee8461=this->_v_6376_opts.get();return j::call(_callee8461,j::Args{_v_6732_o,this->_literals[79]});})();
V _default8463=j::get(_pattern8462,this->_literals[72]);if(_default8463.kind==V::Undefined||_default8463.kind==V::Hole)_default8463=this->_literals[80];
_v_6733_style=_default8463;
_v_6734_fill=j::get(_pattern8462,this->_literals[81]);
_v_6735_color=j::get(_pattern8462,this->_literals[57]);
_v_6736_fillColor=j::get(_pattern8462,this->_literals[82]);
_v_6737_title=j::get(_pattern8462,this->_literals[83]);
_v_6738_edges=V::null();
if(j::truth(([&]()->V{V _lhs8464=_v_6733_style;V _rhs8465=this->_literals[84];return V(!j::equal(_lhs8464,_rhs8465,true));})())){
V _v_6739_chars;
_v_6739_chars=(j::truth(([&]()->V{V _lhs8466=j::unary("typeof",_v_6733_style);V _rhs8467=this->_literals[11];return V(j::equal(_lhs8466,_rhs8467,true));})())?(j::truth(([&]()->V{V _receiver8468=j::builtin("Object");V _method8469=this->_literals[39];V _method=j::get(_receiver8468,_method8469);j::Args _params8470=j::Args{this->_v_6723_boxes.get(),_v_6733_style};return j::call(_method,_params8470,_receiver8468);})())?j::get(this->_v_6723_boxes.get(),_v_6733_style):_v_6733_style):this->_literals[10]);
if(j::truth(([&]()->V{V _logical8471=([&]()->V{V _lhs8472=j::get(([&]()->V{j::Args _array8474;for(const auto &_value:j::elements(_v_6739_chars))_array8474.push_back(_value);return j::array(std::move(_array8474));})(),this->_literals[12]);V _rhs8473=V(6.0);return V(!j::equal(_lhs8472,_rhs8473,true));})();return !j::truth(_logical8471)?([&]()->V{V _receiver8475=j::regexp(u"^[a-z]+$","i");V _method8476=this->_literals[85];V _method=j::get(_receiver8475,_method8476);j::Args _params8477=j::Args{_v_6739_chars};return j::call(_method,_params8477,_receiver8475);})():_logical8471;})())){(void)(([&]()->V{V _callee8485=this->_v_6338_fail.get();return j::call(_callee8485,j::Args{([&]()->V{std::u16string _text8478;_text8478+=u"style takes ";_text8478+=j::string(([&]()->V{V _callee8483=this->_v_6371_or.get();return j::call(_callee8483,j::Args{([&]()->V{j::Args _array8479;for(const auto &_value:j::elements(([&]()->V{V _receiver8480=j::builtin("Object");V _method8481=this->_literals[40];V _method=j::get(_receiver8480,_method8481);j::Args _params8482=j::Args{this->_v_6723_boxes.get()};return j::call(_method,_params8482,_receiver8480);})()))_array8479.push_back(_value);_array8479.push_back(this->_literals[84]);return j::array(std::move(_array8479));})()});})());_text8478+=u", or 6 characters of your own (top left, top right, bottom left, bottom right, across, down), not ";_text8478+=j::string(([&]()->V{V _callee8484=this->_v_6358_show.get();return j::call(_callee8484,j::Args{_v_6733_style});})());_text8478+=u"";return V(std::move(_text8478));})()});})());
}
(void)((_v_6738_edges=([&]()->V{V _receiver8487=([&]()->V{j::Args _array8490;for(const auto &_value:j::elements(_v_6739_chars))_array8490.push_back(_value);return j::array(std::move(_array8490));})();V _method8488=this->_literals[25];V _method=j::get(_receiver8487,_method8488);j::Args _params8489=j::Args{this->_v_6337_code.get()};return j::call(_method,_params8489,_receiver8487);})()));

}

_v_6740_f=(j::truth(([&]()->V{V _logical8491=([&]()->V{V _lhs8492=_v_6734_fill;V _rhs8493=j::builtin("undefined");return V(j::equal(_lhs8492,_rhs8493,true));})();return !j::truth(_logical8491)?([&]()->V{V _lhs8494=_v_6734_fill;V _rhs8495=V(false);return V(j::equal(_lhs8494,_rhs8495,true));})():_logical8491;})())?V::null():([&]()->V{V _callee8496=this->_v_6349_brush.get();return j::call(_callee8496,j::Args{_v_6734_fill,this->_literals[81]});})());
if(j::truth(([&]()->V{V _logical8497=([&]()->V{V _lhs8498=_v_6737_title;V _rhs8499=j::builtin("undefined");return V(!j::equal(_lhs8498,_rhs8499,true));})();return j::truth(_logical8497)?([&]()->V{V _lhs8500=j::unary("typeof",_v_6737_title);V _rhs8501=this->_literals[11];return V(!j::equal(_lhs8500,_rhs8501,true));})():_logical8497;})())){(void)(([&]()->V{V _callee8504=this->_v_6338_fail.get();return j::call(_callee8504,j::Args{([&]()->V{std::u16string _text8502;_text8502+=u"title takes a string, not ";_text8502+=j::string(([&]()->V{V _callee8503=this->_v_6358_show.get();return j::call(_callee8503,j::Args{_v_6737_title});})());_text8502+=u"";return V(std::move(_text8502));})()});})());
}
if(j::truth(_v_6737_title)){{for(const auto &_item8505:j::elements(_v_6737_title)){V _v_6741_ch;
_v_6741_ch=_item8505;
(void)(([&]()->V{V _callee8506=this->_v_6337_code.get();return j::call(_callee8506,j::Args{_v_6741_ch});})());
}}
}
_v_6742_join.get()=([&]()->V{V _callee8509=this->_v_6380_yes.get();return j::call(_callee8509,j::Args{([&]()->V{V _chain8507=_v_6732_o;if(j::nullish(_chain8507))return V{};V _chain8508=j::get(_chain8507,this->_literals[23]);return _chain8508;})(),this->_literals[23],V(true)});})();
_v_6743_k.get()=([&]()->V{V _callee8510=this->_v_6345_paint.get();return j::call(_callee8510,j::Args{_v_6727_s.get(),_v_6735_color});})();
_v_6744_fk=(j::truth(([&]()->V{V _lhs8511=_v_6736_fillColor;V _rhs8512=j::builtin("undefined");return V(j::equal(_lhs8511,_rhs8512,true));})())?_v_6743_k.get():([&]()->V{V _callee8513=this->_v_6345_paint.get();return j::call(_callee8513,j::Args{_v_6727_s.get(),_v_6736_fillColor});})());
if(j::truth(j::unary("!",([&]()->V{V _callee8514=this->_v_6353_finite.get();return j::call(_callee8514,j::Args{_v_6728_x,_v_6729_y,_v_6730_w,_v_6731_h});})()))){return ([&]()->V{V _obj8515=j::object();j::put(_obj8515,this->_literals[29],V(0.0));j::put(_obj8515,this->_literals[30],V(0.0));j::put(_obj8515,this->_literals[31],V(0.0));j::put(_obj8515,this->_literals[32],V(0.0));return _obj8515;})();
}
(void)((_v_6728_x=([&]()->V{V _number8517=_v_6728_x;return V(std::floor(j::number(_number8517)));})()));
(void)((_v_6729_y=([&]()->V{V _number8519=_v_6729_y;return V(std::floor(j::number(_number8519)));})()));
(void)((_v_6730_w=([&]()->V{V _number8521=_v_6730_w;return V(std::floor(j::number(_number8521)));})()));
(void)((_v_6731_h=([&]()->V{V _number8523=_v_6731_h;return V(std::floor(j::number(_number8523)));})()));
_v_6745_inset=(j::truth(_v_6738_edges)?V(1.0):V(0.0));
_v_6746_inside=([&]()->V{V _obj8524=j::object();j::put(_obj8524,this->_literals[29],([&]()->V{V _lhs8525=_v_6728_x;V _rhs8526=_v_6745_inset;return j::binary("+",_lhs8525,_rhs8526);})());j::put(_obj8524,this->_literals[30],([&]()->V{V _lhs8527=_v_6729_y;V _rhs8528=_v_6745_inset;return j::binary("+",_lhs8527,_rhs8528);})());j::put(_obj8524,this->_literals[31],([&]()->V{V _receiver8535=j::builtin("Math");V _method8536=this->_literals[34];V _method=j::get(_receiver8535,_method8536);j::Args _params8537=j::Args{V(0.0),([&]()->V{V _lhs8529=_v_6730_w;V _rhs8530=([&]()->V{V _lhs8531=V(2.0);V _rhs8532=_v_6745_inset;return V(j::number(_lhs8531)*j::number(_rhs8532));})();return V(j::number(_lhs8529)-j::number(_rhs8530));})()};return j::call(_method,_params8537,_receiver8535);})());j::put(_obj8524,this->_literals[32],([&]()->V{V _receiver8544=j::builtin("Math");V _method8545=this->_literals[34];V _method=j::get(_receiver8544,_method8545);j::Args _params8546=j::Args{V(0.0),([&]()->V{V _lhs8538=_v_6731_h;V _rhs8539=([&]()->V{V _lhs8540=V(2.0);V _rhs8541=_v_6745_inset;return V(j::number(_lhs8540)*j::number(_rhs8541));})();return V(j::number(_lhs8538)-j::number(_rhs8539));})()};return j::call(_method,_params8546,_receiver8544);})());return _obj8524;})();
if(j::truth(([&]()->V{V _logical8547=([&]()->V{V _lhs8548=_v_6730_w;V _rhs8549=V(1.0);return j::binary("<",_lhs8548,_rhs8549);})();return !j::truth(_logical8547)?([&]()->V{V _lhs8550=_v_6731_h;V _rhs8551=V(1.0);return j::binary("<",_lhs8550,_rhs8551);})():_logical8547;})())){return ([&]()->V{V _obj8552=j::object();j::put(_obj8552,this->_literals[29],_v_6728_x);j::put(_obj8552,this->_literals[30],_v_6729_y);j::put(_obj8552,this->_literals[31],V(0.0));j::put(_obj8552,this->_literals[32],V(0.0));return _obj8552;})();
}
if(j::truth(([&]()->V{V _lhs8553=_v_6740_f;V _rhs8554=V::null();return V(!j::equal(_lhs8553,_rhs8554,true));})())){
V _v_6747_r;
_v_6747_r=([&]()->V{V _receiver8555=_v_6727_s.get();V _method8556=this->_literals[28];V _method=j::get(_receiver8555,_method8556);j::Args _params8557=j::Args{_v_6746_inside};return j::call(_method,_params8557,_receiver8555);})();
{V _v_6748_cy;
_v_6748_cy=j::get(_v_6747_r,this->_literals[30]);
for(;j::truth(([&]()->V{V _lhs8558=_v_6748_cy;V _rhs8559=([&]()->V{V _lhs8560=j::get(_v_6747_r,this->_literals[30]);V _rhs8561=j::get(_v_6747_r,this->_literals[32]);return j::binary("+",_lhs8560,_rhs8561);})();return j::binary("<",_lhs8558,_rhs8559);})());(void)(j::increment(_v_6748_cy,1,false))){{V _v_6749_cx;
_v_6749_cx=j::get(_v_6747_r,this->_literals[29]);
for(;j::truth(([&]()->V{V _lhs8562=_v_6749_cx;V _rhs8563=([&]()->V{V _lhs8564=j::get(_v_6747_r,this->_literals[29]);V _rhs8565=j::get(_v_6747_r,this->_literals[31]);return j::binary("+",_lhs8564,_rhs8565);})();return j::binary("<",_lhs8562,_rhs8563);})());(void)(j::increment(_v_6749_cx,1,false))){(void)(([&]()->V{V _receiver8572=_v_6727_s.get();V _method8573=this->_literals[3];V _method=j::get(_receiver8572,_method8573);j::Args _params8574=j::Args{([&]()->V{V _lhs8566=([&]()->V{V _lhs8568=_v_6748_cy;V _rhs8569=j::get(_v_6727_s.get(),this->_literals[31]);return V(j::number(_lhs8568)*j::number(_rhs8569));})();V _rhs8567=_v_6749_cx;return j::binary("+",_lhs8566,_rhs8567);})(),_v_6740_f,(j::truth(([&]()->V{V _lhs8570=_v_6740_f;V _rhs8571=this->_v_6333_EMPTY.get();return V(j::equal(_lhs8570,_rhs8571,true));})())?this->_v_6334_NONE.get():_v_6744_fk)};return j::call(_method,_params8574,_receiver8572);})());
}}
}}

}

if(j::truth(_v_6738_edges)){
j::Cell _v_6750_ed;
j::Cell _v_6751_ascii;
j::Cell _v_6752_round;
V _v_6753_put;
V _v_6761_end;
V _v_6767_from;
V _v_6771_to;
_v_6750_ed.get()=_v_6738_edges;
_v_6751_ascii.get()=([&]()->V{V _lhs8575=_v_6733_style;V _rhs8576=this->_literals[42];return V(j::equal(_lhs8575,_rhs8576,true));})();
_v_6752_round.get()=([&]()->V{V _lhs8577=_v_6733_style;V _rhs8578=this->_literals[43];return V(j::equal(_lhs8577,_rhs8578,true));})();
_v_6753_put=j::function([=](const j::Args &_args_fn6754,const V &_receiver_fn6754,const V &_self_fn6754) mutable ->V{
V _v_6755_cx;
V _v_6756_cy;
V _v_6757_e;
V _v_6758_reach;
_v_6755_cx=_args_fn6754[0];
_v_6756_cy=_args_fn6754[1];
_v_6757_e=_args_fn6754[2];
V _default8579=_args_fn6754[3];if(_default8579.kind==V::Undefined||_default8579.kind==V::Hole)_default8579=V(255.0);
_v_6758_reach=_default8579;
{
V _v_6759_j;
V _v_6760_a;
_v_6759_j=([&]()->V{V _receiver8580=_v_6727_s.get();V _method8581=this->_literals[7];V _method=j::get(_receiver8580,_method8581);j::Args _params8582=j::Args{_v_6755_cx,_v_6756_cy};return j::call(_method,_params8582,_receiver8580);})();
_v_6760_a=(j::truth(_v_6751_ascii.get())?j::get(this->_v_6724_EDGE_ARMS.get(),_v_6757_e):([&]()->V{V _receiver8583=this->_v_6426_ARMS.get();V _method8584=this->_literals[36];V _method=j::get(_receiver8583,_method8584);j::Args _params8585=j::Args{j::get(_v_6750_ed.get(),_v_6757_e)};return j::call(_method,_params8585,_receiver8583);})());
if(j::truth(([&]()->V{V _lhs8586=_v_6759_j;V _rhs8587=V(0.0);return j::binary(">=",_lhs8586,_rhs8587);})())){(void)(([&]()->V{V _callee8592=this->_v_6464_place.get();return j::call(_callee8592,j::Args{_v_6727_s.get(),_v_6759_j,j::get(_v_6750_ed.get(),_v_6757_e),_v_6743_k.get(),_v_6742_join.get(),(j::truth(([&]()->V{V _lhs8588=_v_6760_a;V _rhs8589=j::builtin("undefined");return V(j::equal(_lhs8588,_rhs8589,true));})())?_v_6760_a:([&]()->V{V _lhs8590=_v_6760_a;V _rhs8591=_v_6758_reach;return V(int(j::i32(_lhs8590)&j::i32(_rhs8591)));})()),_v_6751_ascii.get(),_v_6752_round.get()});})());
}

}

return V{};
},3);
_v_6761_end=j::function([=](const j::Args &_args_fn6762,const V &_receiver_fn6762,const V &_self_fn6762) mutable ->V{
V _v_6763_i;
V _v_6764_n;
V _v_6765_first;
V _v_6766_last;
_v_6763_i=_args_fn6762[0];
_v_6764_n=_args_fn6762[1];
_v_6765_first=_args_fn6762[2];
_v_6766_last=_args_fn6762[3];
return (j::truth(([&]()->V{V _lhs8593=_v_6764_n;V _rhs8594=V(2.0);return j::binary("<",_lhs8593,_rhs8594);})())?V(255.0):(j::truth(([&]()->V{V _lhs8595=_v_6763_i;V _rhs8596=V(0.0);return V(j::equal(_lhs8595,_rhs8596,true));})())?([&]()->V{V _lhs8597=V(3.0);V _rhs8598=_v_6765_first;return V(double(int32_t(j::u32(_lhs8597)<<(j::u32(_rhs8598)&31))));})():(j::truth(([&]()->V{V _lhs8599=_v_6763_i;V _rhs8600=([&]()->V{V _lhs8601=_v_6764_n;V _rhs8602=V(1.0);return V(j::number(_lhs8601)-j::number(_rhs8602));})();return V(j::equal(_lhs8599,_rhs8600,true));})())?([&]()->V{V _lhs8603=V(3.0);V _rhs8604=_v_6766_last;return V(double(int32_t(j::u32(_lhs8603)<<(j::u32(_rhs8604)&31))));})():V(255.0))));
return V{};
},4);
_v_6767_from=j::function([=](const j::Args &_args_fn6768,const V &_receiver_fn6768,const V &_self_fn6768) mutable ->V{
V _v_6769_o;
V _v_6770_lo;
_v_6769_o=_args_fn6768[0];
_v_6770_lo=_args_fn6768[1];
return ([&]()->V{V _receiver8607=j::builtin("Math");V _method8608=this->_literals[34];V _method=j::get(_receiver8607,_method8608);j::Args _params8609=j::Args{_v_6770_lo,j::unary("-",_v_6769_o)};return j::call(_method,_params8609,_receiver8607);})();
return V{};
},2);
_v_6771_to=j::function([=](const j::Args &_args_fn6772,const V &_receiver_fn6772,const V &_self_fn6772) mutable ->V{
V _v_6773_o;
V _v_6774_hi;
V _v_6775_n;
_v_6773_o=_args_fn6772[0];
_v_6774_hi=_args_fn6772[1];
_v_6775_n=_args_fn6772[2];
return ([&]()->V{V _receiver8614=j::builtin("Math");V _method8615=this->_literals[33];V _method=j::get(_receiver8614,_method8615);j::Args _params8616=j::Args{_v_6774_hi,([&]()->V{V _lhs8610=_v_6775_n;V _rhs8611=_v_6773_o;return V(j::number(_lhs8610)-j::number(_rhs8611));})()};return j::call(_method,_params8616,_receiver8614);})();
return V{};
},3);
if(j::truth(([&]()->V{V _lhs8617=_v_6731_h;V _rhs8618=V(1.0);return V(j::equal(_lhs8617,_rhs8618,true));})())){{V _v_6776_i;
_v_6776_i=([&]()->V{V _callee8619=_v_6767_from;return j::call(_callee8619,j::Args{_v_6728_x,V(0.0)});})();
for(;j::truth(([&]()->V{V _lhs8620=_v_6776_i;V _rhs8621=([&]()->V{V _callee8622=_v_6771_to;return j::call(_callee8622,j::Args{_v_6728_x,_v_6730_w,j::get(_v_6727_s.get(),this->_literals[31])});})();return j::binary("<",_lhs8620,_rhs8621);})());(void)(j::increment(_v_6776_i,1,false))){(void)(([&]()->V{V _callee8626=_v_6753_put;return j::call(_callee8626,j::Args{([&]()->V{V _lhs8623=_v_6728_x;V _rhs8624=_v_6776_i;return j::binary("+",_lhs8623,_rhs8624);})(),_v_6729_y,V(4.0),([&]()->V{V _callee8625=_v_6761_end;return j::call(_callee8625,j::Args{_v_6776_i,_v_6730_w,this->_v_6423_AR.get(),this->_v_6425_AL.get()});})()});})());
}}
}else {if(j::truth(([&]()->V{V _lhs8627=_v_6730_w;V _rhs8628=V(1.0);return V(j::equal(_lhs8627,_rhs8628,true));})())){{V _v_6777_i;
_v_6777_i=([&]()->V{V _callee8629=_v_6767_from;return j::call(_callee8629,j::Args{_v_6729_y,V(0.0)});})();
for(;j::truth(([&]()->V{V _lhs8630=_v_6777_i;V _rhs8631=([&]()->V{V _callee8632=_v_6771_to;return j::call(_callee8632,j::Args{_v_6729_y,_v_6731_h,j::get(_v_6727_s.get(),this->_literals[32])});})();return j::binary("<",_lhs8630,_rhs8631);})());(void)(j::increment(_v_6777_i,1,false))){(void)(([&]()->V{V _callee8636=_v_6753_put;return j::call(_callee8636,j::Args{_v_6728_x,([&]()->V{V _lhs8633=_v_6729_y;V _rhs8634=_v_6777_i;return j::binary("+",_lhs8633,_rhs8634);})(),V(5.0),([&]()->V{V _callee8635=_v_6761_end;return j::call(_callee8635,j::Args{_v_6777_i,_v_6731_h,this->_v_6424_AD.get(),this->_v_6422_AU.get()});})()});})());
}}
}else {
{V _v_6778_i;
_v_6778_i=([&]()->V{V _callee8637=_v_6767_from;return j::call(_callee8637,j::Args{_v_6728_x,V(1.0)});})();
for(;j::truth(([&]()->V{V _lhs8638=_v_6778_i;V _rhs8639=([&]()->V{V _callee8642=_v_6771_to;return j::call(_callee8642,j::Args{_v_6728_x,([&]()->V{V _lhs8640=_v_6730_w;V _rhs8641=V(1.0);return V(j::number(_lhs8640)-j::number(_rhs8641));})(),j::get(_v_6727_s.get(),this->_literals[31])});})();return j::binary("<",_lhs8638,_rhs8639);})());(void)(j::increment(_v_6778_i,1,false))){
(void)(([&]()->V{V _callee8645=_v_6753_put;return j::call(_callee8645,j::Args{([&]()->V{V _lhs8643=_v_6728_x;V _rhs8644=_v_6778_i;return j::binary("+",_lhs8643,_rhs8644);})(),_v_6729_y,V(4.0)});})());
(void)(([&]()->V{V _callee8652=_v_6753_put;return j::call(_callee8652,j::Args{([&]()->V{V _lhs8646=_v_6728_x;V _rhs8647=_v_6778_i;return j::binary("+",_lhs8646,_rhs8647);})(),([&]()->V{V _lhs8648=([&]()->V{V _lhs8650=_v_6729_y;V _rhs8651=_v_6731_h;return j::binary("+",_lhs8650,_rhs8651);})();V _rhs8649=V(1.0);return V(j::number(_lhs8648)-j::number(_rhs8649));})(),V(4.0)});})());

}
}
{V _v_6779_i;
_v_6779_i=([&]()->V{V _callee8653=_v_6767_from;return j::call(_callee8653,j::Args{_v_6729_y,V(1.0)});})();
for(;j::truth(([&]()->V{V _lhs8654=_v_6779_i;V _rhs8655=([&]()->V{V _callee8658=_v_6771_to;return j::call(_callee8658,j::Args{_v_6729_y,([&]()->V{V _lhs8656=_v_6731_h;V _rhs8657=V(1.0);return V(j::number(_lhs8656)-j::number(_rhs8657));})(),j::get(_v_6727_s.get(),this->_literals[32])});})();return j::binary("<",_lhs8654,_rhs8655);})());(void)(j::increment(_v_6779_i,1,false))){
(void)(([&]()->V{V _callee8661=_v_6753_put;return j::call(_callee8661,j::Args{_v_6728_x,([&]()->V{V _lhs8659=_v_6729_y;V _rhs8660=_v_6779_i;return j::binary("+",_lhs8659,_rhs8660);})(),V(5.0)});})());
(void)(([&]()->V{V _callee8668=_v_6753_put;return j::call(_callee8668,j::Args{([&]()->V{V _lhs8662=([&]()->V{V _lhs8664=_v_6728_x;V _rhs8665=_v_6730_w;return j::binary("+",_lhs8664,_rhs8665);})();V _rhs8663=V(1.0);return V(j::number(_lhs8662)-j::number(_rhs8663));})(),([&]()->V{V _lhs8666=_v_6729_y;V _rhs8667=_v_6779_i;return j::binary("+",_lhs8666,_rhs8667);})(),V(5.0)});})());

}
}
(void)(([&]()->V{V _callee8669=_v_6753_put;return j::call(_callee8669,j::Args{_v_6728_x,_v_6729_y,V(0.0)});})());
(void)(([&]()->V{V _callee8674=_v_6753_put;return j::call(_callee8674,j::Args{([&]()->V{V _lhs8670=([&]()->V{V _lhs8672=_v_6728_x;V _rhs8673=_v_6730_w;return j::binary("+",_lhs8672,_rhs8673);})();V _rhs8671=V(1.0);return V(j::number(_lhs8670)-j::number(_rhs8671));})(),_v_6729_y,V(1.0)});})());
(void)(([&]()->V{V _callee8679=_v_6753_put;return j::call(_callee8679,j::Args{_v_6728_x,([&]()->V{V _lhs8675=([&]()->V{V _lhs8677=_v_6729_y;V _rhs8678=_v_6731_h;return j::binary("+",_lhs8677,_rhs8678);})();V _rhs8676=V(1.0);return V(j::number(_lhs8675)-j::number(_rhs8676));})(),V(2.0)});})());
(void)(([&]()->V{V _callee8688=_v_6753_put;return j::call(_callee8688,j::Args{([&]()->V{V _lhs8680=([&]()->V{V _lhs8682=_v_6728_x;V _rhs8683=_v_6730_w;return j::binary("+",_lhs8682,_rhs8683);})();V _rhs8681=V(1.0);return V(j::number(_lhs8680)-j::number(_rhs8681));})(),([&]()->V{V _lhs8684=([&]()->V{V _lhs8686=_v_6729_y;V _rhs8687=_v_6731_h;return j::binary("+",_lhs8686,_rhs8687);})();V _rhs8685=V(1.0);return V(j::number(_lhs8684)-j::number(_rhs8685));})(),V(3.0)});})());

}

}

}

_v_6780_room=([&]()->V{V _lhs8689=_v_6730_w;V _rhs8690=V(6.0);return V(j::number(_lhs8689)-j::number(_rhs8690));})();
if(j::truth(([&]()->V{V _logical8691=_v_6737_title;return j::truth(_logical8691)?([&]()->V{V _lhs8692=_v_6780_room;V _rhs8693=V(1.0);return j::binary(">=",_lhs8692,_rhs8693);})():_logical8691;})())){
V _v_6781_t;
V _v_6782_label;
_v_6781_t=(j::truth(([&]()->V{V _lhs8694=j::get(_v_6737_title,this->_literals[12]);V _rhs8695=_v_6780_room;return j::binary(">",_lhs8694,_rhs8695);})())?(j::truth(([&]()->V{V _lhs8696=_v_6780_room;V _rhs8697=V(1.0);return j::binary(">",_lhs8696,_rhs8697);})())?([&]()->V{V _lhs8698=([&]()->V{V _receiver8702=_v_6737_title;V _method8703=this->_literals[13];V _method=j::get(_receiver8702,_method8703);j::Args _params8704=j::Args{V(0.0),([&]()->V{V _lhs8700=_v_6780_room;V _rhs8701=V(1.0);return V(j::number(_lhs8700)-j::number(_rhs8701));})()};return j::call(_method,_params8704,_receiver8702);})();V _rhs8699=this->_literals[14];return j::binary("+",_lhs8698,_rhs8699);})():([&]()->V{V _receiver8705=_v_6737_title;V _method8706=this->_literals[13];V _method=j::get(_receiver8705,_method8706);j::Args _params8707=j::Args{V(0.0),V(1.0)};return j::call(_method,_params8707,_receiver8705);})()):_v_6737_title);
_v_6782_label=([&]()->V{std::u16string _text8708;_text8708+=u" ";_text8708+=j::string(_v_6781_t);_text8708+=u" ";return V(std::move(_text8708));})();
{V _v_6783_i;
_v_6783_i=([&]()->V{V _receiver8713=j::builtin("Math");V _method8714=this->_literals[34];V _method=j::get(_receiver8713,_method8714);j::Args _params8715=j::Args{V(0.0),j::unary("-",([&]()->V{V _lhs8709=_v_6728_x;V _rhs8710=V(2.0);return j::binary("+",_lhs8709,_rhs8710);})())};return j::call(_method,_params8715,_receiver8713);})();
for(;j::truth(([&]()->V{V _lhs8716=_v_6783_i;V _rhs8717=([&]()->V{V _receiver8724=j::builtin("Math");V _method8725=this->_literals[33];V _method=j::get(_receiver8724,_method8725);j::Args _params8726=j::Args{j::get(_v_6782_label,this->_literals[12]),([&]()->V{V _lhs8718=([&]()->V{V _lhs8720=j::get(_v_6727_s.get(),this->_literals[31]);V _rhs8721=_v_6728_x;return V(j::number(_lhs8720)-j::number(_rhs8721));})();V _rhs8719=V(2.0);return V(j::number(_lhs8718)-j::number(_rhs8719));})()};return j::call(_method,_params8726,_receiver8724);})();return j::binary("<",_lhs8716,_rhs8717);})());(void)(j::increment(_v_6783_i,1,false))){
V _v_6784_j;
_v_6784_j=([&]()->V{V _receiver8731=_v_6727_s.get();V _method8732=this->_literals[7];V _method=j::get(_receiver8731,_method8732);j::Args _params8733=j::Args{([&]()->V{V _lhs8727=([&]()->V{V _lhs8729=_v_6728_x;V _rhs8730=V(2.0);return j::binary("+",_lhs8729,_rhs8730);})();V _rhs8728=_v_6783_i;return j::binary("+",_lhs8727,_rhs8728);})(),_v_6729_y};return j::call(_method,_params8733,_receiver8731);})();
if(j::truth(([&]()->V{V _lhs8734=_v_6784_j;V _rhs8735=V(0.0);return j::binary(">=",_lhs8734,_rhs8735);})())){(void)(([&]()->V{V _receiver8739=_v_6727_s.get();V _method8740=this->_literals[3];V _method=j::get(_receiver8739,_method8740);j::Args _params8741=j::Args{_v_6784_j,([&]()->V{V _receiver8736=_v_6782_label;V _method8737=this->_literals[50];V _method=j::get(_receiver8736,_method8737);j::Args _params8738=j::Args{_v_6783_i};return j::call(_method,_params8738,_receiver8736);})(),_v_6743_k.get()};return j::call(_method,_params8741,_receiver8739);})());
}

}
}

}

return _v_6746_inside;

}

return V{};
},6);
this->_v_6786_ellipseCells.get()=j::function([=](const j::Args &_args_fn6787,const V &_receiver_fn6787,const V &_self_fn6787) mutable ->V{
V _v_6788_w;
V _v_6789_h;
j::Cell _v_6790_cx;
j::Cell _v_6791_cy;
j::Cell _v_6792_rx;
j::Cell _v_6793_ry;
V _v_6794_inside;
V _v_6795_visit;
V _v_6796_aspect;
j::Cell _v_6797_from;
j::Cell _v_6798_span;
_v_6788_w=_args_fn6787[0];
_v_6789_h=_args_fn6787[1];
_v_6790_cx.get()=_args_fn6787[2];
_v_6791_cy.get()=_args_fn6787[3];
_v_6792_rx.get()=_args_fn6787[4];
_v_6793_ry.get()=_args_fn6787[5];
_v_6794_inside=_args_fn6787[6];
_v_6795_visit=_args_fn6787[7];
V _default8742=_args_fn6787[8];if(_default8742.kind==V::Undefined||_default8742.kind==V::Hole)_default8742=V(0.0);
_v_6796_aspect=_default8742;
V _default8743=_args_fn6787[9];if(_default8743.kind==V::Undefined||_default8743.kind==V::Hole)_default8743=V(0.0);
_v_6797_from.get()=_default8743;
V _default8744=_args_fn6787[10];if(_default8744.kind==V::Undefined||_default8744.kind==V::Hole)_default8744=V(1.0);
_v_6798_span.get()=_default8744;
{
V _v_6799_within;
j::Cell _v_6805_i0;
j::Cell _v_6806_i1;
j::Cell _v_6807_j0;
j::Cell _v_6808_j1;
j::Cell _v_6809_bw;
V _v_6810_n;
j::Cell _v_6811_edge;
V _v_6812_mark;
V _v_6817_has;
V _v_6837_any;
V _v_6847_i;
V _v_6848_j;
if(j::truth(([&]()->V{V _logical8745=([&]()->V{V _logical8746=([&]()->V{V _logical8747=j::unary("!",([&]()->V{V _callee8748=this->_v_6353_finite.get();return j::call(_callee8748,j::Args{_v_6790_cx.get(),_v_6791_cy.get(),_v_6792_rx.get(),_v_6793_ry.get()});})());return !j::truth(_logical8747)?([&]()->V{V _lhs8749=_v_6792_rx.get();V _rhs8750=V(0.0);return j::binary("<=",_lhs8749,_rhs8750);})():_logical8747;})();return !j::truth(_logical8746)?([&]()->V{V _lhs8751=_v_6793_ry.get();V _rhs8752=V(0.0);return j::binary("<=",_lhs8751,_rhs8752);})():_logical8746;})();return !j::truth(_logical8745)?j::unary("!",([&]()->V{V _lhs8753=_v_6798_span.get();V _rhs8754=V(0.0);return j::binary(">",_lhs8753,_rhs8754);})()):_logical8745;})())){return V{};
}
_v_6799_within=j::function([=](const j::Args &_args_fn6800,const V &_receiver_fn6800,const V &_self_fn6800) mutable ->V{
V _v_6801_i;
V _v_6802_j;
_v_6801_i=_args_fn6800[0];
_v_6802_j=_args_fn6800[1];
{
V _v_6803_u;
V _v_6804_v;
if(j::truth(([&]()->V{V _lhs8755=_v_6798_span.get();V _rhs8756=V(1.0);return j::binary(">=",_lhs8755,_rhs8756);})())){return V(true);
}
_v_6803_u=([&]()->V{V _lhs8757=([&]()->V{V _lhs8759=([&]()->V{V _lhs8761=_v_6801_i;V _rhs8762=V(0.5);return j::binary("+",_lhs8761,_rhs8762);})();V _rhs8760=_v_6790_cx.get();return V(j::number(_lhs8759)-j::number(_rhs8760));})();V _rhs8758=_v_6792_rx.get();return V(j::number(_lhs8757)/j::number(_rhs8758));})();
_v_6804_v=([&]()->V{V _lhs8763=([&]()->V{V _lhs8765=([&]()->V{V _lhs8767=_v_6802_j;V _rhs8768=V(0.5);return j::binary("+",_lhs8767,_rhs8768);})();V _rhs8766=_v_6791_cy.get();return V(j::number(_lhs8765)-j::number(_rhs8766));})();V _rhs8764=_v_6793_ry.get();return V(j::number(_lhs8763)/j::number(_rhs8764));})();
return ([&]()->V{V _logical8769=([&]()->V{V _logical8770=j::unary("!",_v_6803_u);return j::truth(_logical8770)?j::unary("!",_v_6804_v):_logical8770;})();return !j::truth(_logical8769)?([&]()->V{V _lhs8771=([&]()->V{V _lhs8773=([&]()->V{V _lhs8775=([&]()->V{V _lhs8777=([&]()->V{V _lhs8779=([&]()->V{V _lhs8781=([&]()->V{V _number8783=_v_6803_u;V _number8784=j::unary("-",_v_6804_v);return V(std::atan2(j::number(_number8783),j::number(_number8784)));})();V _rhs8782=this->_v_6335_TAU.get();return V(j::number(_lhs8781)/j::number(_rhs8782));})();V _rhs8780=_v_6797_from.get();return V(j::number(_lhs8779)-j::number(_rhs8780));})();V _rhs8778=V(1.0);return V(std::fmod(j::number(_lhs8777),j::number(_rhs8778)));})();V _rhs8776=V(1.0);return j::binary("+",_lhs8775,_rhs8776);})();V _rhs8774=V(1.0);return V(std::fmod(j::number(_lhs8773),j::number(_rhs8774)));})();V _rhs8772=_v_6798_span.get();return j::binary("<=",_lhs8771,_rhs8772);})():_logical8769;})();

}

return V{};
},2);
_v_6805_i0.get()=([&]()->V{V _receiver8794=j::builtin("Math");V _method8795=this->_literals[34];V _method=j::get(_receiver8794,_method8795);j::Args _params8796=j::Args{V(0.0),([&]()->V{V _lhs8785=([&]()->V{V _number8789=([&]()->V{V _lhs8790=_v_6790_cx.get();V _rhs8791=_v_6792_rx.get();return V(j::number(_lhs8790)-j::number(_rhs8791));})();return V(std::floor(j::number(_number8789)));})();V _rhs8786=V(1.0);return V(j::number(_lhs8785)-j::number(_rhs8786));})()};return j::call(_method,_params8796,_receiver8794);})();
_v_6806_i1.get()=([&]()->V{V _receiver8806=j::builtin("Math");V _method8807=this->_literals[33];V _method=j::get(_receiver8806,_method8807);j::Args _params8808=j::Args{([&]()->V{V _lhs8797=_v_6788_w;V _rhs8798=V(1.0);return V(j::number(_lhs8797)-j::number(_rhs8798));})(),([&]()->V{V _number8801=([&]()->V{V _lhs8802=_v_6790_cx.get();V _rhs8803=_v_6792_rx.get();return j::binary("+",_lhs8802,_rhs8803);})();return V(std::ceil(j::number(_number8801)));})()};return j::call(_method,_params8808,_receiver8806);})();
_v_6807_j0.get()=([&]()->V{V _receiver8818=j::builtin("Math");V _method8819=this->_literals[34];V _method=j::get(_receiver8818,_method8819);j::Args _params8820=j::Args{V(0.0),([&]()->V{V _lhs8809=([&]()->V{V _number8813=([&]()->V{V _lhs8814=_v_6791_cy.get();V _rhs8815=_v_6793_ry.get();return V(j::number(_lhs8814)-j::number(_rhs8815));})();return V(std::floor(j::number(_number8813)));})();V _rhs8810=V(1.0);return V(j::number(_lhs8809)-j::number(_rhs8810));})()};return j::call(_method,_params8820,_receiver8818);})();
_v_6808_j1.get()=([&]()->V{V _receiver8830=j::builtin("Math");V _method8831=this->_literals[33];V _method=j::get(_receiver8830,_method8831);j::Args _params8832=j::Args{([&]()->V{V _lhs8821=_v_6789_h;V _rhs8822=V(1.0);return V(j::number(_lhs8821)-j::number(_rhs8822));})(),([&]()->V{V _number8825=([&]()->V{V _lhs8826=_v_6791_cy.get();V _rhs8827=_v_6793_ry.get();return j::binary("+",_lhs8826,_rhs8827);})();return V(std::ceil(j::number(_number8825)));})()};return j::call(_method,_params8832,_receiver8830);})();
if(j::truth(([&]()->V{V _logical8833=([&]()->V{V _lhs8834=_v_6805_i0.get();V _rhs8835=_v_6806_i1.get();return j::binary(">",_lhs8834,_rhs8835);})();return !j::truth(_logical8833)?([&]()->V{V _lhs8836=_v_6807_j0.get();V _rhs8837=_v_6808_j1.get();return j::binary(">",_lhs8836,_rhs8837);})():_logical8833;})())){return V{};
}
_v_6809_bw.get()=([&]()->V{V _lhs8838=([&]()->V{V _lhs8840=_v_6806_i1.get();V _rhs8841=_v_6805_i0.get();return V(j::number(_lhs8840)-j::number(_rhs8841));})();V _rhs8839=V(1.0);return j::binary("+",_lhs8838,_rhs8839);})();
_v_6810_n=([&]()->V{V _lhs8842=_v_6809_bw.get();V _rhs8843=([&]()->V{V _lhs8844=([&]()->V{V _lhs8846=_v_6808_j1.get();V _rhs8847=_v_6807_j0.get();return V(j::number(_lhs8846)-j::number(_rhs8847));})();V _rhs8845=V(1.0);return j::binary("+",_lhs8844,_rhs8845);})();return V(j::number(_lhs8842)*j::number(_rhs8843));})();
if(j::truth(([&]()->V{V _lhs8848=j::get(this->_v_6785_EDGE.get(),this->_literals[12]);V _rhs8849=_v_6810_n;return j::binary("<",_lhs8848,_rhs8849);})())){(void)((this->_v_6785_EDGE.get()=([&]()->V{V _callee8851=j::builtin("Uint8Array");return j::construct(_callee8851,j::Args{_v_6810_n});})()));
}
_v_6811_edge.get()=this->_v_6785_EDGE.get();
(void)(([&]()->V{V _receiver8852=_v_6811_edge.get();V _method8853=this->_literals[81];V _method=j::get(_receiver8852,_method8853);j::Args _params8854=j::Args{V(0.0),V(0.0),_v_6810_n};return j::call(_method,_params8854,_receiver8852);})());
_v_6812_mark=j::function([=](const j::Args &_args_fn6813,const V &_receiver_fn6813,const V &_self_fn6813) mutable ->V{
V _v_6814_i;
V _v_6815_j;
V _v_6816_kind;
_v_6814_i=_args_fn6813[0];
_v_6815_j=_args_fn6813[1];
_v_6816_kind=_args_fn6813[2];
{
if(j::truth(([&]()->V{V _logical8855=([&]()->V{V _logical8856=([&]()->V{V _logical8857=([&]()->V{V _lhs8858=_v_6814_i;V _rhs8859=_v_6805_i0.get();return j::binary(">=",_lhs8858,_rhs8859);})();return j::truth(_logical8857)?([&]()->V{V _lhs8860=_v_6814_i;V _rhs8861=_v_6806_i1.get();return j::binary("<=",_lhs8860,_rhs8861);})():_logical8857;})();return j::truth(_logical8856)?([&]()->V{V _lhs8862=_v_6815_j;V _rhs8863=_v_6807_j0.get();return j::binary(">=",_lhs8862,_rhs8863);})():_logical8856;})();return j::truth(_logical8855)?([&]()->V{V _lhs8864=_v_6815_j;V _rhs8865=_v_6808_j1.get();return j::binary("<=",_lhs8864,_rhs8865);})():_logical8855;})())){(void)(([&]()->V{V _base8867=_v_6811_edge.get();V _key8868=([&]()->V{V _lhs8869=([&]()->V{V _lhs8871=([&]()->V{V _lhs8873=([&]()->V{V _lhs8875=_v_6815_j;V _rhs8876=_v_6807_j0.get();return V(j::number(_lhs8875)-j::number(_rhs8876));})();V _rhs8874=_v_6809_bw.get();return V(j::number(_lhs8873)*j::number(_rhs8874));})();V _rhs8872=_v_6814_i;return j::binary("+",_lhs8871,_rhs8872);})();V _rhs8870=_v_6805_i0.get();return V(j::number(_lhs8869)-j::number(_rhs8870));})();V _assign8866=_v_6816_kind;return j::update(_base8867,_key8868,"|",_assign8866);})());
}

}

return V{};
},3);
_v_6817_has=j::function([=](const j::Args &_args_fn6818,const V &_receiver_fn6818,const V &_self_fn6818) mutable ->V{
V _v_6819_i;
V _v_6820_j;
_v_6819_i=_args_fn6818[0];
_v_6820_j=_args_fn6818[1];
return ([&]()->V{V _logical8877=([&]()->V{V _logical8878=([&]()->V{V _logical8879=([&]()->V{V _logical8880=([&]()->V{V _lhs8881=_v_6819_i;V _rhs8882=_v_6805_i0.get();return j::binary(">=",_lhs8881,_rhs8882);})();return j::truth(_logical8880)?([&]()->V{V _lhs8883=_v_6819_i;V _rhs8884=_v_6806_i1.get();return j::binary("<=",_lhs8883,_rhs8884);})():_logical8880;})();return j::truth(_logical8879)?([&]()->V{V _lhs8885=_v_6820_j;V _rhs8886=_v_6807_j0.get();return j::binary(">=",_lhs8885,_rhs8886);})():_logical8879;})();return j::truth(_logical8878)?([&]()->V{V _lhs8887=_v_6820_j;V _rhs8888=_v_6808_j1.get();return j::binary("<=",_lhs8887,_rhs8888);})():_logical8878;})();return j::truth(_logical8877)?([&]()->V{V _lhs8889=j::get(_v_6811_edge.get(),([&]()->V{V _lhs8891=([&]()->V{V _lhs8893=([&]()->V{V _lhs8895=([&]()->V{V _lhs8897=_v_6820_j;V _rhs8898=_v_6807_j0.get();return V(j::number(_lhs8897)-j::number(_rhs8898));})();V _rhs8896=_v_6809_bw.get();return V(j::number(_lhs8895)*j::number(_rhs8896));})();V _rhs8894=_v_6819_i;return j::binary("+",_lhs8893,_rhs8894);})();V _rhs8892=_v_6805_i0.get();return V(j::number(_lhs8891)-j::number(_rhs8892));})());V _rhs8890=V(0.0);return V(!j::equal(_lhs8889,_rhs8890,true));})():_logical8877;})();
return V{};
},2);
{V _v_6821_i;
_v_6821_i=_v_6805_i0.get();
for(;j::truth(([&]()->V{V _lhs8899=_v_6821_i;V _rhs8900=_v_6806_i1.get();return j::binary("<=",_lhs8899,_rhs8900);})());(void)(j::increment(_v_6821_i,1,false))){
V _v_6822_x;
V _v_6823_yo;
V _v_6824_flat;
_v_6822_x=([&]()->V{V _lhs8901=([&]()->V{V _lhs8903=_v_6821_i;V _rhs8904=V(0.5);return j::binary("+",_lhs8903,_rhs8904);})();V _rhs8902=_v_6790_cx.get();return V(j::number(_lhs8901)-j::number(_rhs8902));})();
if(j::truth(([&]()->V{V _lhs8905=([&]()->V{V _lhs8907=_v_6822_x;V _rhs8908=_v_6822_x;return V(j::number(_lhs8907)*j::number(_rhs8908));})();V _rhs8906=([&]()->V{V _lhs8909=_v_6792_rx.get();V _rhs8910=_v_6792_rx.get();return V(j::number(_lhs8909)*j::number(_rhs8910));})();return j::binary(">",_lhs8905,_rhs8906);})())){continue;
}
_v_6823_yo=([&]()->V{V _lhs8911=_v_6793_ry.get();V _rhs8912=([&]()->V{V _number8921=([&]()->V{V _lhs8922=V(1.0);V _rhs8923=([&]()->V{V _lhs8924=([&]()->V{V _lhs8926=_v_6822_x;V _rhs8927=_v_6822_x;return V(j::number(_lhs8926)*j::number(_rhs8927));})();V _rhs8925=([&]()->V{V _lhs8928=_v_6792_rx.get();V _rhs8929=_v_6792_rx.get();return V(j::number(_lhs8928)*j::number(_rhs8929));})();return V(j::number(_lhs8924)/j::number(_rhs8925));})();return V(j::number(_lhs8922)-j::number(_rhs8923));})();return V(std::sqrt(j::number(_number8921)));})();return V(j::number(_lhs8911)*j::number(_rhs8912));})();
_v_6824_flat=([&]()->V{V _lhs8930=([&]()->V{V _lhs8932=([&]()->V{V _lhs8934=_v_6793_ry.get();V _rhs8935=_v_6793_ry.get();return V(j::number(_lhs8934)*j::number(_rhs8935));})();V _rhs8933=([&]()->V{V _number8936=_v_6822_x;return V(std::fabs(j::number(_number8936)));})();return V(j::number(_lhs8932)*j::number(_rhs8933));})();V _rhs8931=([&]()->V{V _lhs8937=([&]()->V{V _lhs8939=_v_6792_rx.get();V _rhs8940=_v_6792_rx.get();return V(j::number(_lhs8939)*j::number(_rhs8940));})();V _rhs8938=_v_6823_yo;return V(j::number(_lhs8937)*j::number(_rhs8938));})();return j::binary("<=",_lhs8930,_rhs8931);})();
(void)(([&]()->V{V _callee8946=_v_6812_mark;return j::call(_callee8946,j::Args{_v_6821_i,([&]()->V{V _number8943=([&]()->V{V _lhs8944=_v_6791_cy.get();V _rhs8945=_v_6823_yo;return V(j::number(_lhs8944)-j::number(_rhs8945));})();return V(std::floor(j::number(_number8943)));})(),(j::truth(_v_6824_flat)?V(1.0):V(4.0))});})());
(void)(([&]()->V{V _callee8954=_v_6812_mark;return j::call(_callee8954,j::Args{_v_6821_i,([&]()->V{V _lhs8947=([&]()->V{V _number8951=([&]()->V{V _lhs8952=_v_6791_cy.get();V _rhs8953=_v_6823_yo;return j::binary("+",_lhs8952,_rhs8953);})();return V(std::ceil(j::number(_number8951)));})();V _rhs8948=V(1.0);return V(j::number(_lhs8947)-j::number(_rhs8948));})(),(j::truth(_v_6824_flat)?V(1.0):V(4.0))});})());

}
}
{V _v_6825_j;
_v_6825_j=_v_6807_j0.get();
for(;j::truth(([&]()->V{V _lhs8955=_v_6825_j;V _rhs8956=_v_6808_j1.get();return j::binary("<=",_lhs8955,_rhs8956);})());(void)(j::increment(_v_6825_j,1,false))){
V _v_6826_y;
V _v_6827_xo;
V _v_6828_steep;
_v_6826_y=([&]()->V{V _lhs8957=([&]()->V{V _lhs8959=_v_6825_j;V _rhs8960=V(0.5);return j::binary("+",_lhs8959,_rhs8960);})();V _rhs8958=_v_6791_cy.get();return V(j::number(_lhs8957)-j::number(_rhs8958));})();
if(j::truth(([&]()->V{V _lhs8961=([&]()->V{V _lhs8963=_v_6826_y;V _rhs8964=_v_6826_y;return V(j::number(_lhs8963)*j::number(_rhs8964));})();V _rhs8962=([&]()->V{V _lhs8965=_v_6793_ry.get();V _rhs8966=_v_6793_ry.get();return V(j::number(_lhs8965)*j::number(_rhs8966));})();return j::binary(">",_lhs8961,_rhs8962);})())){continue;
}
_v_6827_xo=([&]()->V{V _lhs8967=_v_6792_rx.get();V _rhs8968=([&]()->V{V _number8977=([&]()->V{V _lhs8978=V(1.0);V _rhs8979=([&]()->V{V _lhs8980=([&]()->V{V _lhs8982=_v_6826_y;V _rhs8983=_v_6826_y;return V(j::number(_lhs8982)*j::number(_rhs8983));})();V _rhs8981=([&]()->V{V _lhs8984=_v_6793_ry.get();V _rhs8985=_v_6793_ry.get();return V(j::number(_lhs8984)*j::number(_rhs8985));})();return V(j::number(_lhs8980)/j::number(_rhs8981));})();return V(j::number(_lhs8978)-j::number(_rhs8979));})();return V(std::sqrt(j::number(_number8977)));})();return V(j::number(_lhs8967)*j::number(_rhs8968));})();
_v_6828_steep=([&]()->V{V _lhs8986=([&]()->V{V _lhs8988=([&]()->V{V _lhs8990=_v_6792_rx.get();V _rhs8991=_v_6792_rx.get();return V(j::number(_lhs8990)*j::number(_rhs8991));})();V _rhs8989=([&]()->V{V _number8992=_v_6826_y;return V(std::fabs(j::number(_number8992)));})();return V(j::number(_lhs8988)*j::number(_rhs8989));})();V _rhs8987=([&]()->V{V _lhs8993=([&]()->V{V _lhs8995=_v_6793_ry.get();V _rhs8996=_v_6793_ry.get();return V(j::number(_lhs8995)*j::number(_rhs8996));})();V _rhs8994=_v_6827_xo;return V(j::number(_lhs8993)*j::number(_rhs8994));})();return j::binary("<=",_lhs8986,_rhs8987);})();
(void)(([&]()->V{V _callee9002=_v_6812_mark;return j::call(_callee9002,j::Args{([&]()->V{V _number8999=([&]()->V{V _lhs9000=_v_6790_cx.get();V _rhs9001=_v_6827_xo;return V(j::number(_lhs9000)-j::number(_rhs9001));})();return V(std::floor(j::number(_number8999)));})(),_v_6825_j,(j::truth(_v_6828_steep)?V(2.0):V(8.0))});})());
(void)(([&]()->V{V _callee9010=_v_6812_mark;return j::call(_callee9010,j::Args{([&]()->V{V _lhs9003=([&]()->V{V _number9007=([&]()->V{V _lhs9008=_v_6790_cx.get();V _rhs9009=_v_6827_xo;return j::binary("+",_lhs9008,_rhs9009);})();return V(std::ceil(j::number(_number9007)));})();V _rhs9004=V(1.0);return V(j::number(_lhs9003)-j::number(_rhs9004));})(),_v_6825_j,(j::truth(_v_6828_steep)?V(2.0):V(8.0))});})());

}
}
{V _v_6829_k;
_v_6829_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs9011=_v_6829_k;V _rhs9012=_v_6810_n;return j::binary("<",_lhs9011,_rhs9012);})());(void)(j::increment(_v_6829_k,1,false))){(void)(([&]()->V{V _base9014=_v_6811_edge.get();V _key9015=_v_6829_k;V _assign9013=([&]()->V{V _lhs9016=([&]()->V{V _lhs9018=j::get(_v_6811_edge.get(),_v_6829_k);V _rhs9019=V(3.0);return V(int(j::i32(_lhs9018)&j::i32(_rhs9019)));})();V _rhs9017=(j::truth(([&]()->V{V _lhs9020=([&]()->V{V _lhs9022=j::get(_v_6811_edge.get(),_v_6829_k);V _rhs9023=V(12.0);return V(int(j::i32(_lhs9022)&j::i32(_rhs9023)));})();V _rhs9021=V(12.0);return V(j::equal(_lhs9020,_rhs9021,true));})())?V(1.0):V(0.0));return V(int(j::i32(_lhs9016)|j::i32(_rhs9017)));})();return j::put(_base9014,_key9015,_assign9013);})());
}}
{V _v_6830_j;
_v_6830_j=_v_6807_j0.get();
for(;j::truth(([&]()->V{V _lhs9024=_v_6830_j;V _rhs9025=_v_6808_j1.get();return j::binary("<=",_lhs9024,_rhs9025);})());(void)(j::increment(_v_6830_j,1,false))){{V _v_6831_i;
_v_6831_i=_v_6805_i0.get();
for(;j::truth(([&]()->V{V _lhs9026=_v_6831_i;V _rhs9027=_v_6806_i1.get();return j::binary("<=",_lhs9026,_rhs9027);})());(void)(j::increment(_v_6831_i,1,false))){
V _v_6832_ni;
V _v_6833_spare;
V _v_6834_others;
if(j::truth(([&]()->V{V _lhs9028=j::get(_v_6811_edge.get(),([&]()->V{V _lhs9030=([&]()->V{V _lhs9032=([&]()->V{V _lhs9034=([&]()->V{V _lhs9036=_v_6830_j;V _rhs9037=_v_6807_j0.get();return V(j::number(_lhs9036)-j::number(_rhs9037));})();V _rhs9035=_v_6809_bw.get();return V(j::number(_lhs9034)*j::number(_rhs9035));})();V _rhs9033=_v_6831_i;return j::binary("+",_lhs9032,_rhs9033);})();V _rhs9031=_v_6805_i0.get();return V(j::number(_lhs9030)-j::number(_rhs9031));})());V _rhs9029=V(2.0);return V(!j::equal(_lhs9028,_rhs9029,true));})())){continue;
}
_v_6832_ni=(j::truth(([&]()->V{V _lhs9038=([&]()->V{V _lhs9040=_v_6831_i;V _rhs9041=V(0.5);return j::binary("+",_lhs9040,_rhs9041);})();V _rhs9039=_v_6790_cx.get();return j::binary("<",_lhs9038,_rhs9039);})())?([&]()->V{V _lhs9042=_v_6831_i;V _rhs9043=V(1.0);return j::binary("+",_lhs9042,_rhs9043);})():([&]()->V{V _lhs9044=_v_6831_i;V _rhs9045=V(1.0);return V(j::number(_lhs9044)-j::number(_rhs9045));})());
if(j::truth(([&]()->V{V _logical9046=([&]()->V{V _logical9047=([&]()->V{V _lhs9048=_v_6832_ni;V _rhs9049=_v_6805_i0.get();return j::binary("<",_lhs9048,_rhs9049);})();return !j::truth(_logical9047)?([&]()->V{V _lhs9050=_v_6832_ni;V _rhs9051=_v_6806_i1.get();return j::binary(">",_lhs9050,_rhs9051);})():_logical9047;})();return !j::truth(_logical9046)?j::unary("!",([&]()->V{V _lhs9052=j::get(_v_6811_edge.get(),([&]()->V{V _lhs9054=([&]()->V{V _lhs9056=([&]()->V{V _lhs9058=([&]()->V{V _lhs9060=_v_6830_j;V _rhs9061=_v_6807_j0.get();return V(j::number(_lhs9060)-j::number(_rhs9061));})();V _rhs9059=_v_6809_bw.get();return V(j::number(_lhs9058)*j::number(_rhs9059));})();V _rhs9057=_v_6832_ni;return j::binary("+",_lhs9056,_rhs9057);})();V _rhs9055=_v_6805_i0.get();return V(j::number(_lhs9054)-j::number(_rhs9055));})());V _rhs9053=V(1.0);return V(int(j::i32(_lhs9052)&j::i32(_rhs9053)));})()):_logical9046;})())){continue;
}
_v_6833_spare=V(true);
_v_6834_others=V(0.0);
{V _v_6835_y;
_v_6835_y=([&]()->V{V _lhs9062=_v_6830_j;V _rhs9063=V(1.0);return V(j::number(_lhs9062)-j::number(_rhs9063));})();
for(;j::truth(([&]()->V{V _lhs9064=_v_6835_y;V _rhs9065=([&]()->V{V _lhs9066=_v_6830_j;V _rhs9067=V(1.0);return j::binary("+",_lhs9066,_rhs9067);})();return j::binary("<=",_lhs9064,_rhs9065);})());(void)(j::increment(_v_6835_y,1,false))){{V _v_6836_x;
_v_6836_x=([&]()->V{V _lhs9068=_v_6831_i;V _rhs9069=V(1.0);return V(j::number(_lhs9068)-j::number(_rhs9069));})();
for(;j::truth(([&]()->V{V _lhs9070=_v_6836_x;V _rhs9071=([&]()->V{V _lhs9072=_v_6831_i;V _rhs9073=V(1.0);return j::binary("+",_lhs9072,_rhs9073);})();return j::binary("<=",_lhs9070,_rhs9071);})());(void)(j::increment(_v_6836_x,1,false))){if(j::truth(([&]()->V{V _logical9074=([&]()->V{V _logical9075=([&]()->V{V _logical9076=([&]()->V{V _lhs9077=_v_6836_x;V _rhs9078=_v_6832_ni;return V(!j::equal(_lhs9077,_rhs9078,true));})();return !j::truth(_logical9076)?([&]()->V{V _lhs9079=_v_6835_y;V _rhs9080=_v_6830_j;return V(!j::equal(_lhs9079,_rhs9080,true));})():_logical9076;})();return j::truth(_logical9075)?([&]()->V{V _logical9081=([&]()->V{V _lhs9082=_v_6836_x;V _rhs9083=_v_6831_i;return V(!j::equal(_lhs9082,_rhs9083,true));})();return !j::truth(_logical9081)?([&]()->V{V _lhs9084=_v_6835_y;V _rhs9085=_v_6830_j;return V(!j::equal(_lhs9084,_rhs9085,true));})():_logical9081;})():_logical9075;})();return j::truth(_logical9074)?([&]()->V{V _callee9086=_v_6817_has;return j::call(_callee9086,j::Args{_v_6836_x,_v_6835_y});})():_logical9074;})())){
(void)(j::increment(_v_6834_others,1,false));
if(j::truth(([&]()->V{V _lhs9087=([&]()->V{V _number9091=([&]()->V{V _lhs9092=_v_6836_x;V _rhs9093=_v_6832_ni;return V(j::number(_lhs9092)-j::number(_rhs9093));})();return V(std::fabs(j::number(_number9091)));})();V _rhs9088=V(1.0);return j::binary(">",_lhs9087,_rhs9088);})())){(void)((_v_6833_spare=V(false)));
}

}

}}
}}
if(j::truth(([&]()->V{V _logical9095=_v_6833_spare;return j::truth(_logical9095)?_v_6834_others:_logical9095;})())){(void)(([&]()->V{V _base9097=_v_6811_edge.get();V _key9098=([&]()->V{V _lhs9099=([&]()->V{V _lhs9101=([&]()->V{V _lhs9103=([&]()->V{V _lhs9105=_v_6830_j;V _rhs9106=_v_6807_j0.get();return V(j::number(_lhs9105)-j::number(_rhs9106));})();V _rhs9104=_v_6809_bw.get();return V(j::number(_lhs9103)*j::number(_rhs9104));})();V _rhs9102=_v_6831_i;return j::binary("+",_lhs9101,_rhs9102);})();V _rhs9100=_v_6805_i0.get();return V(j::number(_lhs9099)-j::number(_rhs9100));})();V _assign9096=V(0.0);return j::put(_base9097,_key9098,_assign9096);})());
}

}
}
}}
_v_6837_any=V(false);
{V _v_6838_j;
_v_6838_j=_v_6807_j0.get();
for(;j::truth(([&]()->V{V _lhs9107=_v_6838_j;V _rhs9108=_v_6808_j1.get();return j::binary("<=",_lhs9107,_rhs9108);})());(void)(j::increment(_v_6838_j,1,false))){{V _v_6839_i;
_v_6839_i=_v_6805_i0.get();
for(;j::truth(([&]()->V{V _lhs9109=_v_6839_i;V _rhs9110=_v_6806_i1.get();return j::binary("<=",_lhs9109,_rhs9110);})());(void)(j::increment(_v_6839_i,1,false))){
V _v_6840_e;
_v_6840_e=j::get(_v_6811_edge.get(),([&]()->V{V _lhs9111=([&]()->V{V _lhs9113=([&]()->V{V _lhs9115=([&]()->V{V _lhs9117=_v_6838_j;V _rhs9118=_v_6807_j0.get();return V(j::number(_lhs9117)-j::number(_rhs9118));})();V _rhs9116=_v_6809_bw.get();return V(j::number(_lhs9115)*j::number(_rhs9116));})();V _rhs9114=_v_6839_i;return j::binary("+",_lhs9113,_rhs9114);})();V _rhs9112=_v_6805_i0.get();return V(j::number(_lhs9111)-j::number(_rhs9112));})());
if(j::truth(_v_6840_e)){
V _v_6841_c;
(void)((_v_6837_any=V(true)));
if(j::truth(j::unary("!",([&]()->V{V _callee9120=_v_6799_within;return j::call(_callee9120,j::Args{_v_6839_i,_v_6838_j});})()))){continue;
}
_v_6841_c=V(0.0);
if(j::truth(([&]()->V{V _logical9121=_v_6796_aspect;return j::truth(_logical9121)?([&]()->V{V _lhs9122=_v_6840_e;V _rhs9123=V(1.0);return V(int(j::i32(_lhs9122)&j::i32(_rhs9123)));})():_logical9121;})())){
V _v_6842_l;
V _v_6843_r;
V _v_6844_above;
_v_6842_l=([&]()->V{V _callee9126=_v_6817_has;return j::call(_callee9126,j::Args{([&]()->V{V _lhs9124=_v_6839_i;V _rhs9125=V(1.0);return V(j::number(_lhs9124)-j::number(_rhs9125));})(),_v_6838_j});})();
_v_6843_r=([&]()->V{V _callee9129=_v_6817_has;return j::call(_callee9129,j::Args{([&]()->V{V _lhs9127=_v_6839_i;V _rhs9128=V(1.0);return j::binary("+",_lhs9127,_rhs9128);})(),_v_6838_j});})();
_v_6844_above=([&]()->V{V _callee9132=_v_6817_has;return j::call(_callee9132,j::Args{_v_6839_i,([&]()->V{V _lhs9130=_v_6838_j;V _rhs9131=V(1.0);return V(j::number(_lhs9130)-j::number(_rhs9131));})()});})();
(void)((_v_6841_c=(j::truth(([&]()->V{V _logical9134=j::unary("!",_v_6842_l);return j::truth(_logical9134)?j::unary("!",_v_6843_r):_logical9134;})())?([&]()->V{V _callee9135=this->_v_6849_tangentChar.get();return j::call(_callee9135,j::Args{_v_6839_i,_v_6838_j,_v_6790_cx.get(),_v_6791_cy.get(),_v_6792_rx.get(),_v_6793_ry.get(),_v_6796_aspect});})():(j::truth(([&]()->V{V _logical9136=j::unary("!",_v_6842_l);return j::truth(_logical9136)?([&]()->V{V _logical9137=_v_6844_above;return !j::truth(_logical9137)?([&]()->V{V _callee9142=_v_6817_has;return j::call(_callee9142,j::Args{([&]()->V{V _lhs9138=_v_6839_i;V _rhs9139=V(1.0);return V(j::number(_lhs9138)-j::number(_rhs9139));})(),([&]()->V{V _lhs9140=_v_6838_j;V _rhs9141=V(1.0);return V(j::number(_lhs9140)-j::number(_rhs9141));})()});})():_logical9137;})():_logical9136;})())?this->_v_6417_FALL.get():(j::truth(([&]()->V{V _logical9143=j::unary("!",_v_6843_r);return j::truth(_logical9143)?([&]()->V{V _logical9144=_v_6844_above;return !j::truth(_logical9144)?([&]()->V{V _callee9149=_v_6817_has;return j::call(_callee9149,j::Args{([&]()->V{V _lhs9145=_v_6839_i;V _rhs9146=V(1.0);return j::binary("+",_lhs9145,_rhs9146);})(),([&]()->V{V _lhs9147=_v_6838_j;V _rhs9148=V(1.0);return V(j::number(_lhs9147)-j::number(_rhs9148));})()});})():_logical9144;})():_logical9143;})())?this->_v_6416_RISE.get():this->_v_6418_RUN.get())))));

}
else {if(j::truth(_v_6796_aspect)){(void)((_v_6841_c=([&]()->V{V _callee9151=this->_v_6849_tangentChar.get();return j::call(_callee9151,j::Args{_v_6839_i,_v_6838_j,_v_6790_cx.get(),_v_6791_cy.get(),_v_6792_rx.get(),_v_6793_ry.get(),_v_6796_aspect});})()));
}
}
(void)(([&]()->V{V _callee9152=_v_6795_visit;return j::call(_callee9152,j::Args{_v_6839_i,_v_6838_j,V(true),_v_6841_c});})());

}
else {if(j::truth(_v_6794_inside)){
V _v_6845_u;
V _v_6846_v;
_v_6845_u=([&]()->V{V _lhs9153=([&]()->V{V _lhs9155=([&]()->V{V _lhs9157=_v_6839_i;V _rhs9158=V(0.5);return j::binary("+",_lhs9157,_rhs9158);})();V _rhs9156=_v_6790_cx.get();return V(j::number(_lhs9155)-j::number(_rhs9156));})();V _rhs9154=_v_6792_rx.get();return V(j::number(_lhs9153)/j::number(_rhs9154));})();
_v_6846_v=([&]()->V{V _lhs9159=([&]()->V{V _lhs9161=([&]()->V{V _lhs9163=_v_6838_j;V _rhs9164=V(0.5);return j::binary("+",_lhs9163,_rhs9164);})();V _rhs9162=_v_6791_cy.get();return V(j::number(_lhs9161)-j::number(_rhs9162));})();V _rhs9160=_v_6793_ry.get();return V(j::number(_lhs9159)/j::number(_rhs9160));})();
if(j::truth(([&]()->V{V _logical9165=([&]()->V{V _lhs9166=([&]()->V{V _lhs9168=([&]()->V{V _lhs9170=_v_6845_u;V _rhs9171=_v_6845_u;return V(j::number(_lhs9170)*j::number(_rhs9171));})();V _rhs9169=([&]()->V{V _lhs9172=_v_6846_v;V _rhs9173=_v_6846_v;return V(j::number(_lhs9172)*j::number(_rhs9173));})();return j::binary("+",_lhs9168,_rhs9169);})();V _rhs9167=V(1.0);return j::binary("<=",_lhs9166,_rhs9167);})();return j::truth(_logical9165)?([&]()->V{V _callee9174=_v_6799_within;return j::call(_callee9174,j::Args{_v_6839_i,_v_6838_j});})():_logical9165;})())){(void)(([&]()->V{V _callee9175=_v_6795_visit;return j::call(_callee9175,j::Args{_v_6839_i,_v_6838_j,V(false),V(0.0)});})());
}

}

}

}
}
}}
_v_6847_i=([&]()->V{V _number9176=_v_6790_cx.get();return V(std::floor(j::number(_number9176)));})();
_v_6848_j=([&]()->V{V _number9177=_v_6791_cy.get();return V(std::floor(j::number(_number9177)));})();
if(j::truth(([&]()->V{V _logical9178=([&]()->V{V _logical9179=([&]()->V{V _logical9180=([&]()->V{V _logical9181=j::unary("!",_v_6837_any);return j::truth(_logical9181)?([&]()->V{V _lhs9182=_v_6847_i;V _rhs9183=_v_6805_i0.get();return j::binary(">=",_lhs9182,_rhs9183);})():_logical9181;})();return j::truth(_logical9180)?([&]()->V{V _lhs9184=_v_6847_i;V _rhs9185=_v_6806_i1.get();return j::binary("<=",_lhs9184,_rhs9185);})():_logical9180;})();return j::truth(_logical9179)?([&]()->V{V _lhs9186=_v_6848_j;V _rhs9187=_v_6807_j0.get();return j::binary(">=",_lhs9186,_rhs9187);})():_logical9179;})();return j::truth(_logical9178)?([&]()->V{V _lhs9188=_v_6848_j;V _rhs9189=_v_6808_j1.get();return j::binary("<=",_lhs9188,_rhs9189);})():_logical9178;})())){(void)(([&]()->V{V _callee9190=_v_6795_visit;return j::call(_callee9190,j::Args{_v_6847_i,_v_6848_j,V(true),this->_v_6420_DOT.get()});})());
}

}

return V{};
},8);
this->_v_6849_tangentChar.get()=j::function([=](const j::Args &_args_fn6850,const V &_receiver_fn6850,const V &_self_fn6850) mutable ->V{
V _v_6851_x;
V _v_6852_y;
V _v_6853_cx;
V _v_6854_cy;
V _v_6855_rx;
V _v_6856_ry;
V _v_6857_aspect;
_v_6851_x=_args_fn6850[0];
_v_6852_y=_args_fn6850[1];
_v_6853_cx=_args_fn6850[2];
_v_6854_cy=_args_fn6850[3];
_v_6855_rx=_args_fn6850[4];
_v_6856_ry=_args_fn6850[5];
_v_6857_aspect=_args_fn6850[6];
{
V _v_6858_nx;
V _v_6859_ny;
V _v_6860_tx;
V _v_6861_ty;
_v_6858_nx=([&]()->V{V _lhs9191=([&]()->V{V _lhs9193=([&]()->V{V _lhs9195=_v_6851_x;V _rhs9196=V(0.5);return j::binary("+",_lhs9195,_rhs9196);})();V _rhs9194=_v_6853_cx;return V(j::number(_lhs9193)-j::number(_rhs9194));})();V _rhs9192=([&]()->V{V _lhs9197=_v_6855_rx;V _rhs9198=_v_6855_rx;return V(j::number(_lhs9197)*j::number(_rhs9198));})();return V(j::number(_lhs9191)/j::number(_rhs9192));})();
_v_6859_ny=([&]()->V{V _lhs9199=([&]()->V{V _lhs9201=([&]()->V{V _lhs9203=([&]()->V{V _lhs9205=_v_6852_y;V _rhs9206=V(0.5);return j::binary("+",_lhs9205,_rhs9206);})();V _rhs9204=_v_6854_cy;return V(j::number(_lhs9203)-j::number(_rhs9204));})();V _rhs9202=([&]()->V{V _lhs9207=_v_6856_ry;V _rhs9208=_v_6856_ry;return V(j::number(_lhs9207)*j::number(_rhs9208));})();return V(j::number(_lhs9201)/j::number(_rhs9202));})();V _rhs9200=_v_6857_aspect;return V(j::number(_lhs9199)/j::number(_rhs9200));})();
_v_6860_tx=j::unary("-",_v_6859_ny);
_v_6861_ty=_v_6858_nx;
if(j::truth(([&]()->V{V _lhs9209=([&]()->V{V _number9211=_v_6861_ty;return V(std::fabs(j::number(_number9211)));})();V _rhs9210=([&]()->V{V _lhs9212=V(2.4);V _rhs9213=([&]()->V{V _number9214=_v_6860_tx;return V(std::fabs(j::number(_number9214)));})();return V(j::number(_lhs9212)*j::number(_rhs9213));})();return j::binary(">",_lhs9209,_rhs9210);})())){return this->_v_6415_UP.get();
}
return (j::truth(([&]()->V{V _lhs9215=([&]()->V{V _lhs9217=_v_6860_tx;V _rhs9218=V(0.0);return j::binary(">",_lhs9217,_rhs9218);})();V _rhs9216=([&]()->V{V _lhs9219=_v_6861_ty;V _rhs9220=V(0.0);return j::binary(">",_lhs9219,_rhs9220);})();return V(!j::equal(_lhs9215,_rhs9216,true));})())?this->_v_6416_RISE.get():this->_v_6417_FALL.get());

}

return V{};
},7);
this->_v_6862_shape.get()=j::function([=](const j::Args &_args_fn6863,const V &_receiver_fn6863,const V &_self_fn6863) mutable ->V{
j::Cell _v_6864_s;
V _v_6865_cx;
V _v_6866_cy;
V _v_6867_rx;
V _v_6868_ry;
V _v_6869_o;
V _v_6870_what;
V _v_6871_from;
V _v_6872_span;
_v_6864_s.get()=_args_fn6863[0];
_v_6865_cx=_args_fn6863[1];
_v_6866_cy=_args_fn6863[2];
_v_6867_rx=_args_fn6863[3];
_v_6868_ry=_args_fn6863[4];
_v_6869_o=_args_fn6863[5];
_v_6870_what=_args_fn6863[6];
V _default9221=_args_fn6863[7];if(_default9221.kind==V::Undefined||_default9221.kind==V::Hole)_default9221=V(0.0);
_v_6871_from=_default9221;
V _default9222=_args_fn6863[8];if(_default9222.kind==V::Undefined||_default9222.kind==V::Hole)_default9222=V(1.0);
_v_6872_span=_default9222;
{
V _v_6873_char;
V _v_6874_fill;
V _v_6875_color;
V _v_6876_fillColor;
j::Cell _v_6877_ch;
j::Cell _v_6878_f;
j::Cell _v_6879_k;
j::Cell _v_6880_fk;
j::Cell _v_6881_join;
V _pattern9224=([&]()->V{V _callee9223=this->_v_6376_opts.get();return j::call(_callee9223,j::Args{_v_6869_o,_v_6870_what});})();
V _default9225=j::get(_pattern9224,this->_literals[71]);if(_default9225.kind==V::Undefined||_default9225.kind==V::Hole)_default9225=this->_literals[86];
_v_6873_char=_default9225;
_v_6874_fill=j::get(_pattern9224,this->_literals[81]);
_v_6875_color=j::get(_pattern9224,this->_literals[57]);
_v_6876_fillColor=j::get(_pattern9224,this->_literals[82]);
_v_6877_ch.get()=(j::truth(([&]()->V{V _lhs9226=_v_6873_char;V _rhs9227=this->_literals[37];return V(j::equal(_lhs9226,_rhs9227,true));})())?this->_literals[37]:([&]()->V{V _callee9232=this->_v_6349_brush.get();return j::call(_callee9232,j::Args{_v_6873_char,([&]()->V{std::u16string _text9228;_text9228+=u"";_text9228+=j::string((j::truth(([&]()->V{V _receiver9229=j::regexp(u"^[aeiou]","");V _method9230=this->_literals[85];V _method=j::get(_receiver9229,_method9230);j::Args _params9231=j::Args{_v_6870_what};return j::call(_method,_params9231,_receiver9229);})())?this->_literals[87]:this->_literals[88]));_text9228+=u" ";_text9228+=j::string(_v_6870_what);_text9228+=u"'s char";return V(std::move(_text9228));})()});})());
_v_6878_f.get()=(j::truth(([&]()->V{V _logical9233=([&]()->V{V _lhs9234=_v_6874_fill;V _rhs9235=j::builtin("undefined");return V(j::equal(_lhs9234,_rhs9235,true));})();return !j::truth(_logical9233)?([&]()->V{V _lhs9236=_v_6874_fill;V _rhs9237=V(false);return V(j::equal(_lhs9236,_rhs9237,true));})():_logical9233;})())?V::null():([&]()->V{V _callee9238=this->_v_6349_brush.get();return j::call(_callee9238,j::Args{_v_6874_fill,this->_literals[81]});})());
_v_6879_k.get()=([&]()->V{V _callee9239=this->_v_6345_paint.get();return j::call(_callee9239,j::Args{_v_6864_s.get(),_v_6875_color});})();
_v_6880_fk.get()=(j::truth(([&]()->V{V _lhs9240=_v_6876_fillColor;V _rhs9241=j::builtin("undefined");return V(j::equal(_lhs9240,_rhs9241,true));})())?_v_6879_k.get():([&]()->V{V _callee9242=this->_v_6345_paint.get();return j::call(_callee9242,j::Args{_v_6864_s.get(),_v_6876_fillColor});})());
_v_6881_join.get()=([&]()->V{V _callee9245=this->_v_6380_yes.get();return j::call(_callee9245,j::Args{([&]()->V{V _chain9243=_v_6869_o;if(j::nullish(_chain9243))return V{};V _chain9244=j::get(_chain9243,this->_literals[23]);return _chain9244;})(),this->_literals[23],V(true)});})();
(void)(([&]()->V{V _callee9265=this->_v_6786_ellipseCells.get();return j::call(_callee9265,j::Args{j::get(_v_6864_s.get(),this->_literals[31]),j::get(_v_6864_s.get(),this->_literals[32]),_v_6865_cx,_v_6866_cy,_v_6867_rx,_v_6868_ry,([&]()->V{V _lhs9246=_v_6878_f.get();V _rhs9247=V::null();return V(!j::equal(_lhs9246,_rhs9247,true));})(),j::function([=](const j::Args &_args_fn6882,const V &_receiver_fn6882,const V &_self_fn6882) mutable ->V{
V _v_6883_x;
V _v_6884_y;
V _v_6885_edge;
V _v_6886_slope;
_v_6883_x=_args_fn6882[0];
_v_6884_y=_args_fn6882[1];
_v_6885_edge=_args_fn6882[2];
_v_6886_slope=_args_fn6882[3];
{
V _v_6887_j;
_v_6887_j=([&]()->V{V _lhs9248=([&]()->V{V _lhs9250=_v_6884_y;V _rhs9251=j::get(_v_6864_s.get(),this->_literals[31]);return V(j::number(_lhs9250)*j::number(_rhs9251));})();V _rhs9249=_v_6883_x;return j::binary("+",_lhs9248,_rhs9249);})();
if(j::truth(_v_6885_edge)){(void)(([&]()->V{V _callee9257=this->_v_6464_place.get();return j::call(_callee9257,j::Args{_v_6864_s.get(),_v_6887_j,(j::truth(([&]()->V{V _lhs9252=_v_6877_ch.get();V _rhs9253=this->_literals[37];return V(j::equal(_lhs9252,_rhs9253,true));})())?_v_6886_slope:_v_6877_ch.get()),_v_6879_k.get(),([&]()->V{V _logical9254=_v_6881_join.get();return j::truth(_logical9254)?([&]()->V{V _lhs9255=_v_6877_ch.get();V _rhs9256=this->_literals[37];return V(!j::equal(_lhs9255,_rhs9256,true));})():_logical9254;})()});})());
}else {(void)(([&]()->V{V _receiver9260=_v_6864_s.get();V _method9261=this->_literals[3];V _method=j::get(_receiver9260,_method9261);j::Args _params9262=j::Args{_v_6887_j,_v_6878_f.get(),(j::truth(([&]()->V{V _lhs9258=_v_6878_f.get();V _rhs9259=this->_v_6333_EMPTY.get();return V(j::equal(_lhs9258,_rhs9259,true));})())?this->_v_6334_NONE.get():_v_6880_fk.get())};return j::call(_method,_params9262,_receiver9260);})());
}

}

return V{};
},4),(j::truth(([&]()->V{V _lhs9263=_v_6877_ch.get();V _rhs9264=this->_literals[37];return V(j::equal(_lhs9263,_rhs9264,true));})())?j::get(_v_6864_s.get(),this->_literals[38]):V(0.0)),_v_6871_from,_v_6872_span});})());

}

return V{};
},7);
this->_v_6888_sweep.get()=j::function([=](const j::Args &_args_fn6889,const V &_receiver_fn6889,const V &_self_fn6889) mutable ->V{
V _v_6890_from;
V _v_6891_to;
_v_6890_from=_args_fn6889[0];
_v_6891_to=_args_fn6889[1];
{
V _v_6892_d;
if(j::truth(j::unary("!",([&]()->V{V _callee9266=this->_v_6353_finite.get();return j::call(_callee9266,j::Args{_v_6890_from,_v_6891_to});})()))){return V(0.0);
}
_v_6892_d=([&]()->V{V _lhs9267=_v_6891_to;V _rhs9268=_v_6890_from;return V(j::number(_lhs9267)-j::number(_rhs9268));})();
return (j::truth(([&]()->V{V _lhs9269=_v_6892_d;V _rhs9270=V(1.0);return j::binary(">=",_lhs9269,_rhs9270);})())?V(1.0):([&]()->V{V _lhs9271=([&]()->V{V _lhs9273=([&]()->V{V _lhs9275=_v_6892_d;V _rhs9276=V(1.0);return V(std::fmod(j::number(_lhs9275),j::number(_rhs9276)));})();V _rhs9274=V(1.0);return j::binary("+",_lhs9273,_rhs9274);})();V _rhs9272=V(1.0);return V(std::fmod(j::number(_lhs9271),j::number(_rhs9272)));})());

}

return V{};
},2);
this->_v_6893_circle.get()=j::function([=](const j::Args &_args_fn6894,const V &_receiver_fn6894,const V &_self_fn6894) mutable ->V{
V _v_6895_s;
V _v_6896_cx;
V _v_6897_cy;
V _v_6898_r;
V _v_6899_o;
_v_6895_s=_args_fn6894[0];
_v_6896_cx=_args_fn6894[1];
_v_6897_cy=_args_fn6894[2];
_v_6898_r=_args_fn6894[3];
_v_6899_o=_args_fn6894[4];
{
(void)(([&]()->V{V _callee9277=this->_v_6340_grid.get();return j::call(_callee9277,j::Args{_v_6895_s,this->_literals[89]});})());
(void)(([&]()->V{V _callee9280=this->_v_6862_shape.get();return j::call(_callee9280,j::Args{_v_6895_s,_v_6896_cx,_v_6897_cy,_v_6898_r,([&]()->V{V _lhs9278=_v_6898_r;V _rhs9279=j::get(_v_6895_s,this->_literals[38]);return V(j::number(_lhs9278)/j::number(_rhs9279));})(),_v_6899_o,this->_literals[89]});})());

}

return V{};
},5);
this->_v_6900_ellipse.get()=j::function([=](const j::Args &_args_fn6901,const V &_receiver_fn6901,const V &_self_fn6901) mutable ->V{
V _v_6902_s;
V _v_6903_cx;
V _v_6904_cy;
V _v_6905_rx;
V _v_6906_ry;
V _v_6907_o;
_v_6902_s=_args_fn6901[0];
_v_6903_cx=_args_fn6901[1];
_v_6904_cy=_args_fn6901[2];
_v_6905_rx=_args_fn6901[3];
_v_6906_ry=_args_fn6901[4];
_v_6907_o=_args_fn6901[5];
{
(void)(([&]()->V{V _callee9281=this->_v_6340_grid.get();return j::call(_callee9281,j::Args{_v_6902_s,this->_literals[90]});})());
(void)(([&]()->V{V _callee9282=this->_v_6862_shape.get();return j::call(_callee9282,j::Args{_v_6902_s,_v_6903_cx,_v_6904_cy,_v_6905_rx,_v_6906_ry,_v_6907_o,this->_literals[90]});})());

}

return V{};
},6);
this->_v_6908_arc.get()=j::function([=](const j::Args &_args_fn6909,const V &_receiver_fn6909,const V &_self_fn6909) mutable ->V{
V _v_6910_s;
V _v_6911_cx;
V _v_6912_cy;
V _v_6913_r;
V _v_6914_from;
V _v_6915_to;
V _v_6916_o;
_v_6910_s=_args_fn6909[0];
_v_6911_cx=_args_fn6909[1];
_v_6912_cy=_args_fn6909[2];
_v_6913_r=_args_fn6909[3];
_v_6914_from=_args_fn6909[4];
_v_6915_to=_args_fn6909[5];
_v_6916_o=_args_fn6909[6];
{
(void)(([&]()->V{V _callee9283=this->_v_6340_grid.get();return j::call(_callee9283,j::Args{_v_6910_s,this->_literals[91]});})());
(void)(([&]()->V{V _callee9287=this->_v_6862_shape.get();return j::call(_callee9287,j::Args{_v_6910_s,_v_6911_cx,_v_6912_cy,_v_6913_r,([&]()->V{V _lhs9284=_v_6913_r;V _rhs9285=j::get(_v_6910_s,this->_literals[38]);return V(j::number(_lhs9284)/j::number(_rhs9285));})(),_v_6916_o,this->_literals[91],_v_6914_from,([&]()->V{V _callee9286=this->_v_6888_sweep.get();return j::call(_callee9286,j::Args{_v_6914_from,_v_6915_to});})()});})());

}

return V{};
},7);
this->_v_6917_polygon.get()=j::function([=](const j::Args &_args_fn6918,const V &_receiver_fn6918,const V &_self_fn6918) mutable ->V{
V _v_6919_s;
V _v_6920_points;
V _v_6921_o;
_v_6919_s=_args_fn6918[0];
_v_6920_points=_args_fn6918[1];
_v_6921_o=_args_fn6918[2];
{
V _v_6922_char;
V _v_6923_style;
V _v_6924_fill;
V _v_6925_color;
V _v_6926_fillColor;
V _v_6927_pts;
V _v_6928_ch;
V _v_6929_f;
V _v_6930_k;
V _v_6931_fk;
V _v_6932_join;
(void)(([&]()->V{V _callee9288=this->_v_6340_grid.get();return j::call(_callee9288,j::Args{_v_6919_s,this->_literals[92]});})());
V _pattern9290=([&]()->V{V _callee9289=this->_v_6376_opts.get();return j::call(_callee9289,j::Args{_v_6921_o,this->_literals[92]});})();
_v_6922_char=j::get(_pattern9290,this->_literals[71]);
_v_6923_style=j::get(_pattern9290,this->_literals[72]);
_v_6924_fill=j::get(_pattern9290,this->_literals[81]);
_v_6925_color=j::get(_pattern9290,this->_literals[57]);
_v_6926_fillColor=j::get(_pattern9290,this->_literals[82]);
_v_6927_pts=([&]()->V{V _callee9291=this->_v_6695_checkPoints.get();return j::call(_callee9291,j::Args{_v_6920_points,this->_literals[92]});})();
_v_6928_ch=([&]()->V{V _callee9292=this->_v_6502_stroke.get();return j::call(_callee9292,j::Args{_v_6922_char,_v_6923_style,this->_literals[93],this->_literals[86]});})();
_v_6929_f=(j::truth(([&]()->V{V _logical9293=([&]()->V{V _lhs9294=_v_6924_fill;V _rhs9295=j::builtin("undefined");return V(j::equal(_lhs9294,_rhs9295,true));})();return !j::truth(_logical9293)?([&]()->V{V _lhs9296=_v_6924_fill;V _rhs9297=V(false);return V(j::equal(_lhs9296,_rhs9297,true));})():_logical9293;})())?V::null():([&]()->V{V _callee9298=this->_v_6349_brush.get();return j::call(_callee9298,j::Args{_v_6924_fill,this->_literals[81]});})());
_v_6930_k=([&]()->V{V _callee9299=this->_v_6345_paint.get();return j::call(_callee9299,j::Args{_v_6919_s,_v_6925_color});})();
_v_6931_fk=(j::truth(([&]()->V{V _lhs9300=_v_6926_fillColor;V _rhs9301=j::builtin("undefined");return V(j::equal(_lhs9300,_rhs9301,true));})())?_v_6930_k:([&]()->V{V _callee9302=this->_v_6345_paint.get();return j::call(_callee9302,j::Args{_v_6919_s,_v_6926_fillColor});})());
_v_6932_join=([&]()->V{V _callee9305=this->_v_6380_yes.get();return j::call(_callee9305,j::Args{([&]()->V{V _chain9303=_v_6921_o;if(j::nullish(_chain9303))return V{};V _chain9304=j::get(_chain9303,this->_literals[23]);return _chain9304;})(),this->_literals[23],V(true)});})();
if(j::truth(([&]()->V{V _logical9306=([&]()->V{V _logical9307=([&]()->V{V _lhs9308=_v_6929_f;V _rhs9309=V::null();return V(!j::equal(_lhs9308,_rhs9309,true));})();return j::truth(_logical9307)?([&]()->V{V _lhs9310=j::get(_v_6927_pts,this->_literals[12]);V _rhs9311=V(2.0);return j::binary(">",_lhs9310,_rhs9311);})():_logical9307;})();return j::truth(_logical9306)?([&]()->V{V _receiver9313=_v_6927_pts;V _method9314=this->_literals[94];V _method=j::get(_receiver9313,_method9314);j::Args _params9315=j::Args{j::function([=](const j::Args &_args_fn6933,const V &_receiver_fn6933,const V &_self_fn6933) mutable ->V{
V _v_6934_p;
_v_6934_p=_args_fn6933[0];
return ([&]()->V{V _callee9312=this->_v_6353_finite.get();return j::call(_callee9312,j::Args{j::get(_v_6934_p,V(0.0)),j::get(_v_6934_p,V(1.0))});})();
return V{};
},1)};return j::call(_method,_params9315,_receiver9313);})():_logical9306;})())){
V _v_6935_px;
V _v_6938_py;
V _v_6941_lo;
V _v_6942_hi;
V _v_6944_j0;
V _v_6945_j1;
V _v_6946_xs;
_v_6935_px=([&]()->V{V _receiver9319=_v_6927_pts;V _method9320=this->_literals[25];V _method=j::get(_receiver9319,_method9320);j::Args _params9321=j::Args{j::function([=](const j::Args &_args_fn6936,const V &_receiver_fn6936,const V &_self_fn6936) mutable ->V{
V _v_6937_p;
_v_6937_p=_args_fn6936[0];
return ([&]()->V{V _lhs9316=([&]()->V{V _number9318=j::get(_v_6937_p,V(0.0));return V(std::floor(j::number(_number9318)));})();V _rhs9317=V(0.5);return j::binary("+",_lhs9316,_rhs9317);})();
return V{};
},1)};return j::call(_method,_params9321,_receiver9319);})();
_v_6938_py=([&]()->V{V _receiver9325=_v_6927_pts;V _method9326=this->_literals[25];V _method=j::get(_receiver9325,_method9326);j::Args _params9327=j::Args{j::function([=](const j::Args &_args_fn6939,const V &_receiver_fn6939,const V &_self_fn6939) mutable ->V{
V _v_6940_p;
_v_6940_p=_args_fn6939[0];
return ([&]()->V{V _lhs9322=([&]()->V{V _number9324=j::get(_v_6940_p,V(1.0));return V(std::floor(j::number(_number9324)));})();V _rhs9323=V(0.5);return j::binary("+",_lhs9322,_rhs9323);})();
return V{};
},1)};return j::call(_method,_params9327,_receiver9325);})();
_v_6941_lo=j::builtin("Infinity");
_v_6942_hi=j::unary("-",j::builtin("Infinity"));
{for(const auto &_item9328:j::elements(_v_6938_py)){V _v_6943_v;
_v_6943_v=_item9328;
(void)(((_v_6941_lo=([&]()->V{V _receiver9332=j::builtin("Math");V _method9333=this->_literals[33];V _method=j::get(_receiver9332,_method9333);j::Args _params9334=j::Args{_v_6941_lo,_v_6943_v};return j::call(_method,_params9334,_receiver9332);})()),(_v_6942_hi=([&]()->V{V _receiver9338=j::builtin("Math");V _method9339=this->_literals[34];V _method=j::get(_receiver9338,_method9339);j::Args _params9340=j::Args{_v_6942_hi,_v_6943_v};return j::call(_method,_params9340,_receiver9338);})())));
}}
_v_6944_j0=([&]()->V{V _receiver9344=j::builtin("Math");V _method9345=this->_literals[34];V _method=j::get(_receiver9344,_method9345);j::Args _params9346=j::Args{V(0.0),([&]()->V{V _number9341=_v_6941_lo;return V(std::floor(j::number(_number9341)));})()};return j::call(_method,_params9346,_receiver9344);})();
_v_6945_j1=([&]()->V{V _receiver9352=j::builtin("Math");V _method9353=this->_literals[33];V _method=j::get(_receiver9352,_method9353);j::Args _params9354=j::Args{([&]()->V{V _lhs9347=j::get(_v_6919_s,this->_literals[32]);V _rhs9348=V(1.0);return V(j::number(_lhs9347)-j::number(_rhs9348));})(),([&]()->V{V _number9349=_v_6942_hi;return V(std::ceil(j::number(_number9349)));})()};return j::call(_method,_params9354,_receiver9352);})();
_v_6946_xs=([&]()->V{j::Args _array9355;return j::array(std::move(_array9355));})();
{V _v_6947_j;
_v_6947_j=_v_6944_j0;
for(;j::truth(([&]()->V{V _lhs9356=_v_6947_j;V _rhs9357=_v_6945_j1;return j::binary("<=",_lhs9356,_rhs9357);})());(void)(j::increment(_v_6947_j,1,false))){
V _v_6948_yc;
_v_6948_yc=([&]()->V{V _lhs9358=_v_6947_j;V _rhs9359=V(0.5);return j::binary("+",_lhs9358,_rhs9359);})();
(void)(([&]()->V{V _base9361=_v_6946_xs;V _key9362=this->_literals[12];V _assign9360=V(0.0);return j::put(_base9361,_key9362,_assign9360);})());
{V _v_6949_i;
_v_6949_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs9363=_v_6949_i;V _rhs9364=j::get(_v_6927_pts,this->_literals[12]);return j::binary("<",_lhs9363,_rhs9364);})());(void)(j::increment(_v_6949_i,1,false))){
V _v_6950_n;
V _v_6951_ax;
V _v_6952_ay;
V _v_6953_bx;
V _v_6954_by;
_v_6950_n=([&]()->V{V _lhs9365=([&]()->V{V _lhs9367=_v_6949_i;V _rhs9368=V(1.0);return j::binary("+",_lhs9367,_rhs9368);})();V _rhs9366=j::get(_v_6927_pts,this->_literals[12]);return V(std::fmod(j::number(_lhs9365),j::number(_rhs9366)));})();
_v_6951_ax=j::get(_v_6935_px,_v_6949_i);
_v_6952_ay=j::get(_v_6938_py,_v_6949_i);
_v_6953_bx=j::get(_v_6935_px,_v_6950_n);
_v_6954_by=j::get(_v_6938_py,_v_6950_n);
if(j::truth(([&]()->V{V _lhs9369=([&]()->V{V _lhs9371=_v_6952_ay;V _rhs9372=_v_6948_yc;return j::binary("<=",_lhs9371,_rhs9372);})();V _rhs9370=([&]()->V{V _lhs9373=_v_6954_by;V _rhs9374=_v_6948_yc;return j::binary("<=",_lhs9373,_rhs9374);})();return V(!j::equal(_lhs9369,_rhs9370,true));})())){(void)(([&]()->V{V _receiver9387=_v_6946_xs;V _method9388=this->_literals[53];V _method=j::get(_receiver9387,_method9388);j::Args _params9389=j::Args{([&]()->V{V _lhs9375=_v_6951_ax;V _rhs9376=([&]()->V{V _lhs9377=([&]()->V{V _lhs9379=([&]()->V{V _lhs9381=_v_6948_yc;V _rhs9382=_v_6952_ay;return V(j::number(_lhs9381)-j::number(_rhs9382));})();V _rhs9380=([&]()->V{V _lhs9383=_v_6954_by;V _rhs9384=_v_6952_ay;return V(j::number(_lhs9383)-j::number(_rhs9384));})();return V(j::number(_lhs9379)/j::number(_rhs9380));})();V _rhs9378=([&]()->V{V _lhs9385=_v_6953_bx;V _rhs9386=_v_6951_ax;return V(j::number(_lhs9385)-j::number(_rhs9386));})();return V(j::number(_lhs9377)*j::number(_rhs9378));})();return j::binary("+",_lhs9375,_rhs9376);})()};return j::call(_method,_params9389,_receiver9387);})());
}

}
}
(void)(([&]()->V{V _receiver9392=_v_6946_xs;V _method9393=this->_literals[95];V _method=j::get(_receiver9392,_method9393);j::Args _params9394=j::Args{j::function([=](const j::Args &_args_fn6955,const V &_receiver_fn6955,const V &_self_fn6955) mutable ->V{
V _v_6956_a;
V _v_6957_b;
_v_6956_a=_args_fn6955[0];
_v_6957_b=_args_fn6955[1];
return ([&]()->V{V _lhs9390=_v_6956_a;V _rhs9391=_v_6957_b;return V(j::number(_lhs9390)-j::number(_rhs9391));})();
return V{};
},2)};return j::call(_method,_params9394,_receiver9392);})());
{V _v_6958_p;
_v_6958_p=V(0.0);
for(;j::truth(([&]()->V{V _lhs9395=([&]()->V{V _lhs9397=_v_6958_p;V _rhs9398=V(1.0);return j::binary("+",_lhs9397,_rhs9398);})();V _rhs9396=j::get(_v_6946_xs,this->_literals[12]);return j::binary("<",_lhs9395,_rhs9396);})());(void)((_v_6958_p=j::binary("+",_v_6958_p,V(2.0))))){
V _v_6959_i0;
V _v_6960_i1;
_v_6959_i0=([&]()->V{V _receiver9407=j::builtin("Math");V _method9408=this->_literals[34];V _method=j::get(_receiver9407,_method9408);j::Args _params9409=j::Args{V(0.0),([&]()->V{V _number9402=([&]()->V{V _lhs9403=j::get(_v_6946_xs,_v_6958_p);V _rhs9404=V(0.5);return V(j::number(_lhs9403)-j::number(_rhs9404));})();return V(std::ceil(j::number(_number9402)));})()};return j::call(_method,_params9409,_receiver9407);})();
_v_6960_i1=([&]()->V{V _receiver9425=j::builtin("Math");V _method9426=this->_literals[33];V _method=j::get(_receiver9425,_method9426);j::Args _params9427=j::Args{([&]()->V{V _lhs9410=j::get(_v_6919_s,this->_literals[31]);V _rhs9411=V(1.0);return V(j::number(_lhs9410)-j::number(_rhs9411));})(),([&]()->V{V _lhs9412=([&]()->V{V _number9418=([&]()->V{V _lhs9419=j::get(_v_6946_xs,([&]()->V{V _lhs9421=_v_6958_p;V _rhs9422=V(1.0);return j::binary("+",_lhs9421,_rhs9422);})());V _rhs9420=V(0.5);return V(j::number(_lhs9419)-j::number(_rhs9420));})();return V(std::ceil(j::number(_number9418)));})();V _rhs9413=V(1.0);return V(j::number(_lhs9412)-j::number(_rhs9413));})()};return j::call(_method,_params9427,_receiver9425);})();
{V _v_6961_i;
_v_6961_i=_v_6959_i0;
for(;j::truth(([&]()->V{V _lhs9428=_v_6961_i;V _rhs9429=_v_6960_i1;return j::binary("<=",_lhs9428,_rhs9429);})());(void)(j::increment(_v_6961_i,1,false))){(void)(([&]()->V{V _receiver9436=_v_6919_s;V _method9437=this->_literals[3];V _method=j::get(_receiver9436,_method9437);j::Args _params9438=j::Args{([&]()->V{V _lhs9430=([&]()->V{V _lhs9432=_v_6947_j;V _rhs9433=j::get(_v_6919_s,this->_literals[31]);return V(j::number(_lhs9432)*j::number(_rhs9433));})();V _rhs9431=_v_6961_i;return j::binary("+",_lhs9430,_rhs9431);})(),_v_6929_f,(j::truth(([&]()->V{V _lhs9434=_v_6929_f;V _rhs9435=this->_v_6333_EMPTY.get();return V(j::equal(_lhs9434,_rhs9435,true));})())?this->_v_6334_NONE.get():_v_6931_fk)};return j::call(_method,_params9438,_receiver9436);})());
}}

}
}

}
}

}

(void)(([&]()->V{V _callee9439=this->_v_6673_path.get();return j::call(_callee9439,j::Args{_v_6919_s,_v_6927_pts,_v_6928_ch,_v_6930_k,V(true),_v_6932_join});})());

}

return V{};
},3);
this->_v_6974_stamp.get()=j::function([=](const j::Args &_args_fn6975,const V &_receiver_fn6975,const V &_self_fn6975) mutable ->V{
j::Cell _v_6976_s;
V _v_6977_src;
j::Cell _v_6978_x;
j::Cell _v_6979_y;
V _v_6980_o;
_v_6976_s.get()=_args_fn6975[0];
_v_6977_src=_args_fn6975[1];
_v_6978_x.get()=_args_fn6975[2];
_v_6979_y.get()=_args_fn6975[3];
_v_6980_o=_args_fn6975[4];
{
V _v_6981_mask;
V _v_6982_color;
V _v_6983_map;
V _v_6984_align;
V _v_6985_valign;
j::Cell _v_6986_m;
j::Cell _v_6987_k;
V _v_7004_g;
V _v_7005_to;
V _v_7013_from;
(void)(([&]()->V{V _callee9440=this->_v_6340_grid.get();return j::call(_callee9440,j::Args{_v_6976_s.get(),this->_literals[96]});})());
V _pattern9442=([&]()->V{V _callee9441=this->_v_6376_opts.get();return j::call(_callee9441,j::Args{_v_6980_o,this->_literals[96]});})();
V _default9443=j::get(_pattern9442,this->_literals[97]);if(_default9443.kind==V::Undefined||_default9443.kind==V::Hole)_default9443=this->_literals[54];
_v_6981_mask=_default9443;
_v_6982_color=j::get(_pattern9442,this->_literals[57]);
_v_6983_map=j::get(_pattern9442,this->_literals[25]);
V _default9444=j::get(_pattern9442,this->_literals[58]);if(_default9444.kind==V::Undefined||_default9444.kind==V::Hole)_default9444=this->_literals[59];
_v_6984_align=_default9444;
V _default9445=j::get(_pattern9442,this->_literals[60]);if(_default9445.kind==V::Undefined||_default9445.kind==V::Hole)_default9445=this->_literals[61];
_v_6985_valign=_default9445;
if(j::truth(([&]()->V{V _logical9446=([&]()->V{V _lhs9447=_v_6981_mask;V _rhs9448=V::null();return V(!j::equal(_lhs9447,_rhs9448,true));})();return j::truth(_logical9446)?([&]()->V{V _logical9449=([&]()->V{V _lhs9450=j::unary("typeof",_v_6981_mask);V _rhs9451=this->_literals[11];return V(!j::equal(_lhs9450,_rhs9451,true));})();return !j::truth(_logical9449)?([&]()->V{V _lhs9452=j::get(_v_6981_mask,this->_literals[12]);V _rhs9453=V(1.0);return j::binary(">",_lhs9452,_rhs9453);})():_logical9449;})():_logical9446;})())){(void)(([&]()->V{V _callee9456=this->_v_6338_fail.get();return j::call(_callee9456,j::Args{([&]()->V{std::u16string _text9454;_text9454+=u"mask takes one character, or null for none, not ";_text9454+=j::string(([&]()->V{V _callee9455=this->_v_6358_show.get();return j::call(_callee9455,j::Args{_v_6981_mask});})());_text9454+=u"";return V(std::move(_text9454));})()});})());
}
if(j::truth(([&]()->V{V _logical9457=([&]()->V{V _lhs9458=_v_6983_map;V _rhs9459=j::builtin("undefined");return V(!j::equal(_lhs9458,_rhs9459,true));})();return j::truth(_logical9457)?([&]()->V{V _logical9460=([&]()->V{V _logical9461=([&]()->V{V _lhs9462=_v_6983_map;V _rhs9463=V::null();return V(j::equal(_lhs9462,_rhs9463,true));})();return !j::truth(_logical9461)?([&]()->V{V _lhs9464=j::unary("typeof",_v_6983_map);V _rhs9465=this->_literals[0];return V(!j::equal(_lhs9464,_rhs9465,true));})():_logical9461;})();return !j::truth(_logical9460)?([&]()->V{V _lhs9466=j::unary("typeof",j::get(_v_6983_map,this->_literals[12]));V _rhs9467=this->_literals[8];return V(!j::equal(_lhs9466,_rhs9467,true));})():_logical9460;})():_logical9457;})())){(void)(([&]()->V{V _callee9468=this->_v_6338_fail.get();return j::call(_callee9468,j::Args{this->_literals[98]});})());
}
if(j::truth(j::unary("!",([&]()->V{V _receiver9469=this->_v_6553_ALIGN.get();V _method9470=this->_literals[64];V _method=j::get(_receiver9469,_method9470);j::Args _params9471=j::Args{_v_6984_align};return j::call(_method,_params9471,_receiver9469);})()))){(void)(([&]()->V{V _callee9475=this->_v_6338_fail.get();return j::call(_callee9475,j::Args{([&]()->V{std::u16string _text9472;_text9472+=u"stamp's align takes ";_text9472+=j::string(([&]()->V{V _callee9473=this->_v_6371_or.get();return j::call(_callee9473,j::Args{this->_v_6553_ALIGN.get()});})());_text9472+=u", not ";_text9472+=j::string(([&]()->V{V _callee9474=this->_v_6358_show.get();return j::call(_callee9474,j::Args{_v_6984_align});})());_text9472+=u"";return V(std::move(_text9472));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _receiver9476=this->_v_6554_VALIGN.get();V _method9477=this->_literals[64];V _method=j::get(_receiver9476,_method9477);j::Args _params9478=j::Args{_v_6985_valign};return j::call(_method,_params9478,_receiver9476);})()))){(void)(([&]()->V{V _callee9482=this->_v_6338_fail.get();return j::call(_callee9482,j::Args{([&]()->V{std::u16string _text9479;_text9479+=u"stamp's valign takes ";_text9479+=j::string(([&]()->V{V _callee9480=this->_v_6371_or.get();return j::call(_callee9480,j::Args{this->_v_6554_VALIGN.get()});})());_text9479+=u", not ";_text9479+=j::string(([&]()->V{V _callee9481=this->_v_6358_show.get();return j::call(_callee9481,j::Args{_v_6985_valign});})());_text9479+=u"";return V(std::move(_text9479));})()});})());
}
_v_6986_m.get()=(j::truth(([&]()->V{V _logical9483=([&]()->V{V _lhs9484=_v_6981_mask;V _rhs9485=V::null();return V(j::equal(_lhs9484,_rhs9485,true));})();return !j::truth(_logical9483)?([&]()->V{V _lhs9486=_v_6981_mask;V _rhs9487=this->_literals[10];return V(j::equal(_lhs9486,_rhs9487,true));})():_logical9483;})())?j::unary("-",V(1.0)):([&]()->V{V _receiver9488=_v_6981_mask;V _method9489=this->_literals[50];V _method=j::get(_receiver9488,_method9489);j::Args _params9490=j::Args{V(0.0)};return j::call(_method,_params9490,_receiver9488);})());
_v_6987_k.get()=(j::truth(([&]()->V{V _lhs9491=_v_6982_color;V _rhs9492=j::builtin("undefined");return V(j::equal(_lhs9491,_rhs9492,true));})())?j::unary("-",V(1.0)):([&]()->V{V _callee9493=this->_v_6345_paint.get();return j::call(_callee9493,j::Args{_v_6976_s.get(),_v_6982_color});})());
if(j::truth(([&]()->V{V _lhs9494=j::unary("typeof",_v_6977_src);V _rhs9495=this->_literals[11];return V(j::equal(_lhs9494,_rhs9495,true));})())){
V _v_6988_text;
V _v_6989_lines;
V _v_6994_w;
V _v_6998_h;
_v_6988_text=([&]()->V{V _receiver9496=_v_6977_src;V _method9497=this->_literals[48];V _method=j::get(_receiver9496,_method9497);j::Args _params9498=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[47]};return j::call(_method,_params9498,_receiver9496);})();
_v_6989_lines=([&]()->V{V _receiver9503=(j::truth(([&]()->V{V _receiver9506=_v_6988_text;V _method9507=this->_literals[99];V _method=j::get(_receiver9506,_method9507);j::Args _params9508=j::Args{this->_literals[47]};return j::call(_method,_params9508,_receiver9506);})())?([&]()->V{V _callee9509=this->_v_7167_artRows.get();return j::call(_callee9509,j::Args{_v_6988_text});})():([&]()->V{V _receiver9510=_v_6988_text;V _method9511=this->_literals[52];V _method=j::get(_receiver9510,_method9511);j::Args _params9512=j::Args{this->_literals[47]};return j::call(_method,_params9512,_receiver9510);})());V _method9504=this->_literals[25];V _method=j::get(_receiver9503,_method9504);j::Args _params9505=j::Args{j::function([=](const j::Args &_args_fn6990,const V &_receiver_fn6990,const V &_self_fn6990) mutable ->V{
V _v_6991_l;
_v_6991_l=_args_fn6990[0];
return ([&]()->V{V _receiver9500=j::builtin("Array");V _method9501=this->_literals[22];V _method=j::get(_receiver9500,_method9501);j::Args _params9502=j::Args{_v_6991_l,j::function([=](const j::Args &_args_fn6992,const V &_receiver_fn6992,const V &_self_fn6992) mutable ->V{
V _v_6993_ch;
_v_6993_ch=_args_fn6992[0];
return ([&]()->V{V _callee9499=this->_v_6337_code.get();return j::call(_callee9499,j::Args{_v_6993_ch});})();
return V{};
},1)};return j::call(_method,_params9502,_receiver9500);})();
return V{};
},1)};return j::call(_method,_params9505,_receiver9503);})();
_v_6994_w=([&]()->V{V _receiver9518=_v_6989_lines;V _method9519=this->_literals[100];V _method=j::get(_receiver9518,_method9519);j::Args _params9520=j::Args{j::function([=](const j::Args &_args_fn6995,const V &_receiver_fn6995,const V &_self_fn6995) mutable ->V{
V _v_6996_n;
V _v_6997_l;
_v_6996_n=_args_fn6995[0];
_v_6997_l=_args_fn6995[1];
return ([&]()->V{V _receiver9515=j::builtin("Math");V _method9516=this->_literals[34];V _method=j::get(_receiver9515,_method9516);j::Args _params9517=j::Args{_v_6996_n,j::get(_v_6997_l,this->_literals[12])};return j::call(_method,_params9517,_receiver9515);})();
return V{};
},2),V(0.0)};return j::call(_method,_params9520,_receiver9518);})();
_v_6998_h=j::get(_v_6989_lines,this->_literals[12]);
if(j::truth(j::unary("!",([&]()->V{V _callee9521=this->_v_6353_finite.get();return j::call(_callee9521,j::Args{_v_6978_x.get(),_v_6979_y.get()});})()))){return ([&]()->V{V _obj9522=j::object();j::put(_obj9522,this->_literals[29],V(0.0));j::put(_obj9522,this->_literals[30],V(0.0));j::put(_obj9522,this->_literals[31],V(0.0));j::put(_obj9522,this->_literals[32],V(0.0));return _obj9522;})();
}
(void)((_v_6978_x.get()=([&]()->V{V _callee9524=this->_v_6969_startAt.get();return j::call(_callee9524,j::Args{_v_6978_x.get(),_v_6994_w,_v_6984_align});})()));
(void)((_v_6979_y.get()=([&]()->V{V _callee9526=this->_v_6969_startAt.get();return j::call(_callee9526,j::Args{_v_6979_y.get(),_v_6998_h,_v_6985_valign});})()));
(void)(([&]()->V{V _receiver9545=_v_6989_lines;V _method9546=this->_literals[51];V _method=j::get(_receiver9545,_method9546);j::Args _params9547=j::Args{j::function([=](const j::Args &_args_fn6999,const V &_receiver_fn6999,const V &_self_fn6999) mutable ->V{
V _v_7000_l;
V _v_7001_r;
_v_7000_l=_args_fn6999[0];
_v_7001_r=_args_fn6999[1];
{
{V _v_7002_c;
_v_7002_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs9527=_v_7002_c;V _rhs9528=j::get(_v_7000_l,this->_literals[12]);return j::binary("<",_lhs9527,_rhs9528);})());(void)(j::increment(_v_7002_c,1,false))){
V _v_7003_j;
if(j::truth(([&]()->V{V _lhs9529=j::get(_v_7000_l,_v_7002_c);V _rhs9530=_v_6986_m.get();return V(j::equal(_lhs9529,_rhs9530,true));})())){continue;
}
_v_7003_j=([&]()->V{V _receiver9535=_v_6976_s.get();V _method9536=this->_literals[7];V _method=j::get(_receiver9535,_method9536);j::Args _params9537=j::Args{([&]()->V{V _lhs9531=_v_6978_x.get();V _rhs9532=_v_7002_c;return j::binary("+",_lhs9531,_rhs9532);})(),([&]()->V{V _lhs9533=_v_6979_y.get();V _rhs9534=_v_7001_r;return j::binary("+",_lhs9533,_rhs9534);})()};return j::call(_method,_params9537,_receiver9535);})();
if(j::truth(([&]()->V{V _lhs9538=_v_7003_j;V _rhs9539=V(0.0);return j::binary(">=",_lhs9538,_rhs9539);})())){(void)(([&]()->V{V _receiver9542=_v_6976_s.get();V _method9543=this->_literals[3];V _method=j::get(_receiver9542,_method9543);j::Args _params9544=j::Args{_v_7003_j,j::get(_v_7000_l,_v_7002_c),(j::truth(([&]()->V{V _lhs9540=_v_6987_k.get();V _rhs9541=V(0.0);return j::binary("<",_lhs9540,_rhs9541);})())?this->_v_6334_NONE.get():_v_6987_k.get())};return j::call(_method,_params9544,_receiver9542);})());
}

}
}

}

return V{};
},2)};return j::call(_method,_params9547,_receiver9545);})());
return ([&]()->V{V _obj9548=j::object();j::put(_obj9548,this->_literals[29],_v_6978_x.get());j::put(_obj9548,this->_literals[30],_v_6979_y.get());j::put(_obj9548,this->_literals[31],_v_6994_w);j::put(_obj9548,this->_literals[32],_v_6998_h);return _obj9548;})();

}

_v_7004_g=_v_6977_src;
if(j::truth(([&]()->V{V _logical9549=([&]()->V{V _logical9550=([&]()->V{V _logical9551=j::unary("!",_v_7004_g);return !j::truth(_logical9551)?([&]()->V{V _lhs9552=j::unary("typeof",_v_7004_g);V _rhs9553=this->_literals[0];return V(!j::equal(_lhs9552,_rhs9553,true));})():_logical9551;})();return !j::truth(_logical9550)?j::unary("!",([&]()->V{V _lhs9554=j::get(_v_7004_g,this->_literals[1]);V _rhs9555=j::builtin("Uint16Array");return j::binary("instanceof",_lhs9554,_rhs9555);})()):_logical9550;})();return !j::truth(_logical9549)?j::unary("!",([&]()->V{V _lhs9556=j::get(_v_7004_g,this->_literals[2]);V _rhs9557=j::builtin("Uint8Array");return j::binary("instanceof",_lhs9556,_rhs9557);})()):_logical9549;})())){(void)(([&]()->V{V _callee9560=this->_v_6338_fail.get();return j::call(_callee9560,j::Args{([&]()->V{std::u16string _text9558;_text9558+=u"stamp() takes a Surface or a string of text to lay over the grid, not ";_text9558+=j::string(([&]()->V{V _callee9559=this->_v_6358_show.get();return j::call(_callee9559,j::Args{_v_6977_src});})());_text9558+=u"";return V(std::move(_text9558));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _callee9561=this->_v_6353_finite.get();return j::call(_callee9561,j::Args{_v_6978_x.get(),_v_6979_y.get()});})()))){return ([&]()->V{V _obj9562=j::object();j::put(_obj9562,this->_literals[29],V(0.0));j::put(_obj9562,this->_literals[30],V(0.0));j::put(_obj9562,this->_literals[31],V(0.0));j::put(_obj9562,this->_literals[32],V(0.0));return _obj9562;})();
}
(void)((_v_6978_x.get()=([&]()->V{V _callee9564=this->_v_6969_startAt.get();return j::call(_callee9564,j::Args{_v_6978_x.get(),j::get(_v_7004_g,this->_literals[31]),_v_6984_align});})()));
(void)((_v_6979_y.get()=([&]()->V{V _callee9566=this->_v_6969_startAt.get();return j::call(_callee9566,j::Args{_v_6979_y.get(),j::get(_v_7004_g,this->_literals[32]),_v_6985_valign});})()));
_v_7005_to=([&]()->V{V _logical9567=_v_6983_map;return j::nullish(_logical9567)?V::null():_logical9567;})();
if(j::truth(([&]()->V{V _logical9568=([&]()->V{V _logical9569=([&]()->V{V _logical9570=j::unary("!",_v_7005_to);return j::truth(_logical9570)?([&]()->V{V _lhs9571=_v_6987_k.get();V _rhs9572=V(0.0);return j::binary("<",_lhs9571,_rhs9572);})():_logical9570;})();return j::truth(_logical9569)?j::get(_v_6976_s.get(),this->_literals[5]):_logical9569;})();return j::truth(_logical9568)?j::get(_v_7004_g,this->_literals[5]):_logical9568;})())){
j::Cell _v_7006_pal;
j::Cell _v_7007_size;
_v_7006_pal.get()=j::get(_v_6976_s.get(),this->_literals[5]);
_v_7007_size.get()=j::get(_v_7006_pal.get(),this->_literals[101]);
if(j::truth(j::unary("!",([&]()->V{V _callee9573=this->_v_6962_samePalette.get();return j::call(_callee9573,j::Args{_v_7006_pal.get(),j::get(_v_7004_g,this->_literals[5])});})()))){(void)((_v_7005_to=([&]()->V{V _receiver9578=j::get(j::get(_v_7004_g,this->_literals[5]),this->_literals[2]);V _method9579=this->_literals[25];V _method=j::get(_receiver9578,_method9579);j::Args _params9580=j::Args{j::function([=](const j::Args &_args_fn7008,const V &_receiver_fn7008,const V &_self_fn7008) mutable ->V{
V _v_7009_c;
_v_7009_c=_args_fn7008[0];
return ([&]()->V{V _receiver9575=_v_7006_pal.get();V _method9576=this->_literals[7];V _method=j::get(_receiver9575,_method9576);j::Args _params9577=j::Args{_v_7009_c,j::get(_v_6976_s.get(),this->_literals[6])};return j::call(_method,_params9577,_receiver9575);})();
return V{};
},1)};return j::call(_method,_params9580,_receiver9578);})()));
}else {if(j::truth(([&]()->V{V _logical9581=j::get(_v_7006_pal.get(),this->_literals[102]);return j::truth(_logical9581)?([&]()->V{V _lhs9582=j::get(_v_7004_g,this->_literals[6]);V _rhs9583=j::get(_v_6976_s.get(),this->_literals[6]);return V(!j::equal(_lhs9582,_rhs9583,true));})():_logical9581;})())){(void)((_v_7005_to=([&]()->V{V _receiver9591=j::builtin("Array");V _method9592=this->_literals[22];V _method=j::get(_receiver9591,_method9592);j::Args _params9593=j::Args{j::get(_v_7006_pal.get(),this->_literals[2]),j::function([=](const j::Args &_args_fn7010,const V &_receiver_fn7010,const V &_self_fn7010) mutable ->V{
V _v_7011__;
V _v_7012_i;
_v_7011__=_args_fn7010[0];
_v_7012_i=_args_fn7010[1];
return (j::truth(([&]()->V{V _lhs9585=_v_7012_i;V _rhs9586=_v_7007_size.get();return j::binary("<",_lhs9585,_rhs9586);})())?([&]()->V{V _lhs9587=_v_7012_i;V _rhs9588=_v_7007_size.get();return j::binary("+",_lhs9587,_rhs9588);})():([&]()->V{V _lhs9589=_v_7012_i;V _rhs9590=_v_7007_size.get();return V(j::number(_lhs9589)-j::number(_rhs9590));})());
return V{};
},2)};return j::call(_method,_params9593,_receiver9591);})()));
}
}

}

_v_7013_from=(j::truth(([&]()->V{V _lhs9594=_v_7004_g;V _rhs9595=_v_6976_s.get();return V(j::equal(_lhs9594,_rhs9595,true));})())?([&]()->V{V _obj9596=j::object();j::put(_obj9596,this->_literals[1],([&]()->V{V _receiver9597=j::get(_v_7004_g,this->_literals[1]);V _method9598=this->_literals[13];V _method=j::get(_receiver9597,_method9598);j::Args _params9599=j::Args{};return j::call(_method,_params9599,_receiver9597);})());j::put(_obj9596,this->_literals[2],([&]()->V{V _receiver9600=j::get(_v_7004_g,this->_literals[2]);V _method9601=this->_literals[13];V _method=j::get(_receiver9600,_method9601);j::Args _params9602=j::Args{};return j::call(_method,_params9602,_receiver9600);})());return _obj9596;})():_v_7004_g);
{V _v_7014_r;
_v_7014_r=([&]()->V{V _receiver9605=j::builtin("Math");V _method9606=this->_literals[34];V _method=j::get(_receiver9605,_method9606);j::Args _params9607=j::Args{V(0.0),j::unary("-",_v_6979_y.get())};return j::call(_method,_params9607,_receiver9605);})();
for(;j::truth(([&]()->V{V _logical9608=([&]()->V{V _lhs9609=_v_7014_r;V _rhs9610=j::get(_v_7004_g,this->_literals[32]);return j::binary("<",_lhs9609,_rhs9610);})();return j::truth(_logical9608)?([&]()->V{V _lhs9611=([&]()->V{V _lhs9613=_v_7014_r;V _rhs9614=_v_6979_y.get();return j::binary("+",_lhs9613,_rhs9614);})();V _rhs9612=j::get(_v_6976_s.get(),this->_literals[32]);return j::binary("<",_lhs9611,_rhs9612);})():_logical9608;})());(void)(j::increment(_v_7014_r,1,false))){{V _v_7015_c;
_v_7015_c=([&]()->V{V _receiver9617=j::builtin("Math");V _method9618=this->_literals[34];V _method=j::get(_receiver9617,_method9618);j::Args _params9619=j::Args{V(0.0),j::unary("-",_v_6978_x.get())};return j::call(_method,_params9619,_receiver9617);})();
for(;j::truth(([&]()->V{V _logical9620=([&]()->V{V _lhs9621=_v_7015_c;V _rhs9622=j::get(_v_7004_g,this->_literals[31]);return j::binary("<",_lhs9621,_rhs9622);})();return j::truth(_logical9620)?([&]()->V{V _lhs9623=([&]()->V{V _lhs9625=_v_7015_c;V _rhs9626=_v_6978_x.get();return j::binary("+",_lhs9625,_rhs9626);})();V _rhs9624=j::get(_v_6976_s.get(),this->_literals[31]);return j::binary("<",_lhs9623,_rhs9624);})():_logical9620;})());(void)(j::increment(_v_7015_c,1,false))){
V _v_7016_i;
V _v_7017_ch;
V _v_7018_col;
_v_7016_i=([&]()->V{V _lhs9627=([&]()->V{V _lhs9629=_v_7014_r;V _rhs9630=j::get(_v_7004_g,this->_literals[31]);return V(j::number(_lhs9629)*j::number(_rhs9630));})();V _rhs9628=_v_7015_c;return j::binary("+",_lhs9627,_rhs9628);})();
_v_7017_ch=j::get(j::get(_v_7013_from,this->_literals[1]),_v_7016_i);
if(j::truth(([&]()->V{V _logical9631=([&]()->V{V _lhs9632=_v_7017_ch;V _rhs9633=this->_v_6333_EMPTY.get();return V(j::equal(_lhs9632,_rhs9633,true));})();return !j::truth(_logical9631)?([&]()->V{V _lhs9634=_v_7017_ch;V _rhs9635=_v_6986_m.get();return V(j::equal(_lhs9634,_rhs9635,true));})():_logical9631;})())){continue;
}
_v_7018_col=j::get(j::get(_v_7013_from,this->_literals[2]),_v_7016_i);
(void)(([&]()->V{V _receiver9650=_v_6976_s.get();V _method9651=this->_literals[3];V _method=j::get(_receiver9650,_method9651);j::Args _params9652=j::Args{([&]()->V{V _lhs9636=([&]()->V{V _lhs9638=([&]()->V{V _lhs9640=([&]()->V{V _lhs9642=_v_7014_r;V _rhs9643=_v_6979_y.get();return j::binary("+",_lhs9642,_rhs9643);})();V _rhs9641=j::get(_v_6976_s.get(),this->_literals[31]);return V(j::number(_lhs9640)*j::number(_rhs9641));})();V _rhs9639=_v_7015_c;return j::binary("+",_lhs9638,_rhs9639);})();V _rhs9637=_v_6978_x.get();return j::binary("+",_lhs9636,_rhs9637);})(),_v_7017_ch,(j::truth(([&]()->V{V _lhs9644=_v_6987_k.get();V _rhs9645=V(0.0);return j::binary(">=",_lhs9644,_rhs9645);})())?_v_6987_k.get():(j::truth(([&]()->V{V _logical9646=j::unary("!",j::get(_v_6976_s.get(),this->_literals[5]));return !j::truth(_logical9646)?([&]()->V{V _lhs9647=_v_7018_col;V _rhs9648=this->_v_6334_NONE.get();return V(j::equal(_lhs9647,_rhs9648,true));})():_logical9646;})())?this->_v_6334_NONE.get():(j::truth(_v_7005_to)?([&]()->V{V _logical9649=j::get(_v_7005_to,_v_7018_col);return j::nullish(_logical9649)?this->_v_6334_NONE.get():_logical9649;})():_v_7018_col)))};return j::call(_method,_params9652,_receiver9650);})());

}
}
}}
return ([&]()->V{V _obj9653=j::object();j::put(_obj9653,this->_literals[29],_v_6978_x.get());j::put(_obj9653,this->_literals[30],_v_6979_y.get());j::put(_obj9653,this->_literals[31],j::get(_v_7004_g,this->_literals[31]));j::put(_obj9653,this->_literals[32],j::get(_v_7004_g,this->_literals[32]));return _obj9653;})();

}

return V{};
},5);
this->_v_7020_canvasOpts.get()=j::function([=](const j::Args &_args_fn7021,const V &_receiver_fn7021,const V &_self_fn7021) mutable ->V{
V _v_7022_o;
V _v_7023_what;
_v_7022_o=_args_fn7021[0];
_v_7023_what=_args_fn7021[1];
{
V _v_7024_color;
V _pattern9655=([&]()->V{V _callee9654=this->_v_6376_opts.get();return j::call(_callee9654,j::Args{_v_7022_o,_v_7023_what});})();
_v_7024_color=j::get(_pattern9655,this->_literals[57]);
return ([&]()->V{V _obj9656=j::object();j::put(_obj9656,this->_literals[81],([&]()->V{V _callee9660=this->_v_6380_yes.get();return j::call(_callee9660,j::Args{([&]()->V{V _chain9657=_v_7022_o;if(j::nullish(_chain9657))return V{};V _chain9658=j::get(_chain9657,this->_literals[81]);return _chain9658;})(),([&]()->V{std::u16string _text9659;_text9659+=u"";_text9659+=j::string(_v_7023_what);_text9659+=u"'s fill";return V(std::move(_text9659));})(),V(false)});})());j::put(_obj9656,this->_literals[57],_v_7024_color);return _obj9656;})();

}

return V{};
},2);
this->_v_7148_boxDots.get()=j::function([=](const j::Args &_args_fn7149,const V &_receiver_fn7149,const V &_self_fn7149) mutable ->V{
V _v_7150_x;
V _v_7151_y;
V _v_7152_w;
V _v_7153_h;
V _v_7154_fill;
V _v_7155_dot;
V _v_7156_gw;
V _v_7157_gh;
_v_7150_x=_args_fn7149[0];
_v_7151_y=_args_fn7149[1];
_v_7152_w=_args_fn7149[2];
_v_7153_h=_args_fn7149[3];
_v_7154_fill=_args_fn7149[4];
_v_7155_dot=_args_fn7149[5];
_v_7156_gw=_args_fn7149[6];
_v_7157_gh=_args_fn7149[7];
{
if(j::truth(j::unary("!",([&]()->V{V _callee9661=this->_v_6353_finite.get();return j::call(_callee9661,j::Args{_v_7150_x,_v_7151_y,_v_7152_w,_v_7153_h});})()))){return V{};
}
(void)((_v_7150_x=([&]()->V{V _number9663=_v_7150_x;return V(std::floor(j::number(_number9663)));})()));
(void)((_v_7151_y=([&]()->V{V _number9665=_v_7151_y;return V(std::floor(j::number(_number9665)));})()));
(void)((_v_7152_w=([&]()->V{V _number9667=_v_7152_w;return V(std::floor(j::number(_number9667)));})()));
(void)((_v_7153_h=([&]()->V{V _number9669=_v_7153_h;return V(std::floor(j::number(_number9669)));})()));
{V _v_7158_j;
_v_7158_j=([&]()->V{V _receiver9672=j::builtin("Math");V _method9673=this->_literals[34];V _method=j::get(_receiver9672,_method9673);j::Args _params9674=j::Args{V(0.0),_v_7151_y};return j::call(_method,_params9674,_receiver9672);})();
for(;j::truth(([&]()->V{V _lhs9675=_v_7158_j;V _rhs9676=([&]()->V{V _receiver9681=j::builtin("Math");V _method9682=this->_literals[33];V _method=j::get(_receiver9681,_method9682);j::Args _params9683=j::Args{_v_7157_gh,([&]()->V{V _lhs9677=_v_7151_y;V _rhs9678=_v_7153_h;return j::binary("+",_lhs9677,_rhs9678);})()};return j::call(_method,_params9683,_receiver9681);})();return j::binary("<",_lhs9675,_rhs9676);})());(void)(j::increment(_v_7158_j,1,false))){{V _v_7159_i;
_v_7159_i=([&]()->V{V _receiver9686=j::builtin("Math");V _method9687=this->_literals[34];V _method=j::get(_receiver9686,_method9687);j::Args _params9688=j::Args{V(0.0),_v_7150_x};return j::call(_method,_params9688,_receiver9686);})();
for(;j::truth(([&]()->V{V _lhs9689=_v_7159_i;V _rhs9690=([&]()->V{V _receiver9695=j::builtin("Math");V _method9696=this->_literals[33];V _method=j::get(_receiver9695,_method9696);j::Args _params9697=j::Args{_v_7156_gw,([&]()->V{V _lhs9691=_v_7150_x;V _rhs9692=_v_7152_w;return j::binary("+",_lhs9691,_rhs9692);})()};return j::call(_method,_params9697,_receiver9695);})();return j::binary("<",_lhs9689,_rhs9690);})());(void)(j::increment(_v_7159_i,1,false))){if(j::truth(([&]()->V{V _logical9698=([&]()->V{V _logical9699=([&]()->V{V _logical9700=([&]()->V{V _logical9701=_v_7154_fill;return !j::truth(_logical9701)?([&]()->V{V _lhs9702=_v_7159_i;V _rhs9703=_v_7150_x;return V(j::equal(_lhs9702,_rhs9703,true));})():_logical9701;})();return !j::truth(_logical9700)?([&]()->V{V _lhs9704=_v_7158_j;V _rhs9705=_v_7151_y;return V(j::equal(_lhs9704,_rhs9705,true));})():_logical9700;})();return !j::truth(_logical9699)?([&]()->V{V _lhs9706=_v_7159_i;V _rhs9707=([&]()->V{V _lhs9708=([&]()->V{V _lhs9710=_v_7150_x;V _rhs9711=_v_7152_w;return j::binary("+",_lhs9710,_rhs9711);})();V _rhs9709=V(1.0);return V(j::number(_lhs9708)-j::number(_rhs9709));})();return V(j::equal(_lhs9706,_rhs9707,true));})():_logical9699;})();return !j::truth(_logical9698)?([&]()->V{V _lhs9712=_v_7158_j;V _rhs9713=([&]()->V{V _lhs9714=([&]()->V{V _lhs9716=_v_7151_y;V _rhs9717=_v_7153_h;return j::binary("+",_lhs9716,_rhs9717);})();V _rhs9715=V(1.0);return V(j::number(_lhs9714)-j::number(_rhs9715));})();return V(j::equal(_lhs9712,_rhs9713,true));})():_logical9698;})())){(void)(([&]()->V{V _callee9718=_v_7155_dot;return j::call(_callee9718,j::Args{_v_7159_i,_v_7158_j});})());
}
}}
}}

}

return V{};
},8);
this->_v_7160_braille.get()=j::function([=](const j::Args &_args_fn7161,const V &_receiver_fn7161,const V &_self_fn7161) mutable ->V{
V _v_7162_s;
V _v_7163_region;
_v_7162_s=_args_fn7161[0];
_v_7163_region=_args_fn7161[1];
{
(void)(([&]()->V{V _callee9719=this->_v_6340_grid.get();return j::call(_callee9719,j::Args{_v_7162_s,this->_literals[103]});})());
return ([&]()->V{V _callee9721=this->_v_7025_BrailleCanvas.get();return j::construct(_callee9721,j::Args{_v_7162_s,([&]()->V{V _callee9720=this->_v_6385_area.get();return j::call(_callee9720,j::Args{_v_7162_s,_v_7163_region,this->_literals[103]});})()});})();

}

return V{};
},2);
this->_v_7167_artRows.get()=j::function([=](const j::Args &_args_fn7168,const V &_receiver_fn7168,const V &_self_fn7168) mutable ->V{
V _v_7169_art;
_v_7169_art=_args_fn7168[0];
{
V _v_7170_lines;
j::Cell _v_7171_indent;
_v_7170_lines=([&]()->V{V _receiver9722=([&]()->V{V _receiver9725=_v_7169_art;V _method9726=this->_literals[48];V _method=j::get(_receiver9725,_method9726);j::Args _params9727=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[47]};return j::call(_method,_params9727,_receiver9725);})();V _method9723=this->_literals[52];V _method=j::get(_receiver9722,_method9723);j::Args _params9724=j::Args{this->_literals[47]};return j::call(_method,_params9724,_receiver9722);})();
while(j::truth(([&]()->V{V _logical9728=j::get(_v_7170_lines,this->_literals[12]);return j::truth(_logical9728)?j::unary("!",([&]()->V{V _receiver9729=j::get(_v_7170_lines,V(0.0));V _method9730=this->_literals[104];V _method=j::get(_receiver9729,_method9730);j::Args _params9731=j::Args{};return j::call(_method,_params9731,_receiver9729);})()):_logical9728;})())){(void)(([&]()->V{V _receiver9732=_v_7170_lines;V _method9733=this->_literals[105];V _method=j::get(_receiver9732,_method9733);j::Args _params9734=j::Args{};return j::call(_method,_params9734,_receiver9732);})());
}
while(j::truth(([&]()->V{V _logical9735=j::get(_v_7170_lines,this->_literals[12]);return j::truth(_logical9735)?j::unary("!",([&]()->V{V _receiver9736=j::get(_v_7170_lines,([&]()->V{V _lhs9739=j::get(_v_7170_lines,this->_literals[12]);V _rhs9740=V(1.0);return V(j::number(_lhs9739)-j::number(_rhs9740));})());V _method9737=this->_literals[104];V _method=j::get(_receiver9736,_method9737);j::Args _params9738=j::Args{};return j::call(_method,_params9738,_receiver9736);})()):_logical9735;})())){(void)(([&]()->V{V _receiver9741=_v_7170_lines;V _method9742=this->_literals[106];V _method=j::get(_receiver9741,_method9742);j::Args _params9743=j::Args{};return j::call(_method,_params9743,_receiver9741);})());
}
_v_7171_indent.get()=([&]()->V{V _receiver9757=_v_7170_lines;V _method9758=this->_literals[100];V _method=j::get(_receiver9757,_method9758);j::Args _params9759=j::Args{j::function([=](const j::Args &_args_fn7172,const V &_receiver_fn7172,const V &_self_fn7172) mutable ->V{
V _v_7173_n;
V _v_7174_l;
_v_7173_n=_args_fn7172[0];
_v_7174_l=_args_fn7172[1];
return (j::truth(([&]()->V{V _receiver9744=_v_7174_l;V _method9745=this->_literals[104];V _method=j::get(_receiver9744,_method9745);j::Args _params9746=j::Args{};return j::call(_method,_params9746,_receiver9744);})())?([&]()->V{V _receiver9754=j::builtin("Math");V _method9755=this->_literals[33];V _method=j::get(_receiver9754,_method9755);j::Args _params9756=j::Args{_v_7173_n,([&]()->V{V _lhs9747=j::get(_v_7174_l,this->_literals[12]);V _rhs9748=j::get(([&]()->V{V _receiver9749=_v_7174_l;V _method9750=this->_literals[107];V _method=j::get(_receiver9749,_method9750);j::Args _params9751=j::Args{};return j::call(_method,_params9751,_receiver9749);})(),this->_literals[12]);return V(j::number(_lhs9747)-j::number(_rhs9748));})()};return j::call(_method,_params9756,_receiver9754);})():_v_7173_n);
return V{};
},2),j::builtin("Infinity")};return j::call(_method,_params9759,_receiver9757);})();
return ([&]()->V{V _receiver9763=_v_7170_lines;V _method9764=this->_literals[25];V _method=j::get(_receiver9763,_method9764);j::Args _params9765=j::Args{j::function([=](const j::Args &_args_fn7175,const V &_receiver_fn7175,const V &_self_fn7175) mutable ->V{
V _v_7176_l;
_v_7176_l=_args_fn7175[0];
return ([&]()->V{V _receiver9760=_v_7176_l;V _method9761=this->_literals[13];V _method=j::get(_receiver9760,_method9761);j::Args _params9762=j::Args{_v_7171_indent.get()};return j::call(_method,_params9762,_receiver9760);})();
return V{};
},1)};return j::call(_method,_params9765,_receiver9763);})();

}

return V{};
},1);
this->_v_7297_pixels.get()=j::function([=](const j::Args &_args_fn7298,const V &_receiver_fn7298,const V &_self_fn7298) mutable ->V{
V _v_7299_s;
V _v_7300_region;
_v_7299_s=_args_fn7298[0];
_v_7300_region=_args_fn7298[1];
{
(void)(([&]()->V{V _callee9766=this->_v_6340_grid.get();return j::call(_callee9766,j::Args{_v_7299_s,this->_literals[108]});})());
return ([&]()->V{V _callee9768=this->_v_7177_PixelCanvas.get();return j::construct(_callee9768,j::Args{_v_7299_s,([&]()->V{V _callee9767=this->_v_6385_area.get();return j::call(_callee9767,j::Args{_v_7299_s,_v_7300_region,this->_literals[108]});})()});})();

}

return V{};
},2);
auto &_import1414=j::module("kit/core");
this->_v_6333_EMPTY=_import1414.exported("EMPTY");
this->_v_6334_NONE=_import1414.exported("NONE");
this->_v_6335_TAU=_import1414.exported("TAU");
this->_v_6336_and=_import1414.exported("and");
this->_v_6337_code=_import1414.exported("code");
this->_v_6338_fail=_import1414.exported("fail");
this->_v_6339_isHex=_import1414.exported("isHex");
this->exports["text"]=this->_v_6598_text;
this->exports["label"]=this->_v_6632_label;
this->exports["line"]=this->_v_6650_line;
this->exports["polyline"]=this->_v_6664_polyline;
this->exports["around"]=this->_v_6703_around;
this->exports["ray"]=this->_v_6713_ray;
this->exports["boxes"]=this->_v_6723_boxes;
this->exports["rect"]=this->_v_6725_rect;
this->exports["circle"]=this->_v_6893_circle;
this->exports["ellipse"]=this->_v_6900_ellipse;
this->exports["arc"]=this->_v_6908_arc;
this->exports["polygon"]=this->_v_6917_polygon;
this->exports["stamp"]=this->_v_6974_stamp;
this->exports["braille"]=this->_v_7160_braille;
this->exports["pixels"]=this->_v_7297_pixels;
this->_v_6353_finite.get()=j::function([=](const j::Args &_args_fn6354,const V &_receiver_fn6354,const V &_self_fn6354) mutable ->V{
V _v_6355_v;
_v_6355_v=j::rest(_args_fn6354,0);
return ([&]()->V{V _receiver9775=_v_6355_v;V _method9776=this->_literals[94];V _method=j::get(_receiver9775,_method9776);j::Args _params9777=j::Args{j::function([=](const j::Args &_args_fn6356,const V &_receiver_fn6356,const V &_self_fn6356) mutable ->V{
V _v_6357_n;
_v_6357_n=_args_fn6356[0];
return ([&]()->V{V _logical9769=([&]()->V{V _lhs9770=j::unary("typeof",_v_6357_n);V _rhs9771=this->_literals[8];return V(j::equal(_lhs9770,_rhs9771,true));})();return j::truth(_logical9769)?([&]()->V{V _receiver9772=j::builtin("Number");V _method9773=this->_literals[46];V _method=j::get(_receiver9772,_method9773);j::Args _params9774=j::Args{_v_6357_n};return j::call(_method,_params9774,_receiver9772);})():_logical9769;})();
return V{};
},1)};return j::call(_method,_params9777,_receiver9775);})();
return V{};
},0);
this->_v_6371_or.get()=j::function([=](const j::Args &_args_fn6372,const V &_receiver_fn6372,const V &_self_fn6372) mutable ->V{
V _v_6373_words;
_v_6373_words=_args_fn6372[0];
return ([&]()->V{V _receiver9778=([&]()->V{V _callee9785=this->_v_6336_and.get();return j::call(_callee9785,j::Args{([&]()->V{V _receiver9782=_v_6373_words;V _method9783=this->_literals[25];V _method=j::get(_receiver9782,_method9783);j::Args _params9784=j::Args{j::function([=](const j::Args &_args_fn6374,const V &_receiver_fn6374,const V &_self_fn6374) mutable ->V{
V _v_6375_w;
_v_6375_w=_args_fn6374[0];
return ([&]()->V{std::u16string _text9781;_text9781+=u"\"";_text9781+=j::string(_v_6375_w);_text9781+=u"\"";return V(std::move(_text9781));})();
return V{};
},1)};return j::call(_method,_params9784,_receiver9782);})()});})();V _method9779=this->_literals[48];V _method=j::get(_receiver9778,_method9779);j::Args _params9780=j::Args{j::regexp(u" and (\"[^\"]*\")$",""),this->_literals[109]};return j::call(_method,_params9780,_receiver9778);})();
return V{};
},1);
this->_v_6390_XS.get()=([&]()->V{V _callee9786=j::builtin("Int32Array");return j::construct(_callee9786,j::Args{V(256.0)});})();
this->_v_6391_YS.get()=([&]()->V{V _callee9787=j::builtin("Int32Array");return j::construct(_callee9787,j::Args{V(256.0)});})();
this->_v_6415_UP.get()=V(124.0);
this->_v_6416_RISE.get()=V(47.0);
this->_v_6417_FALL.get()=V(92.0);
this->_v_6418_RUN.get()=V(95.0);
this->_v_6419_FLAT.get()=V(45.0);
this->_v_6420_DOT.get()=V(42.0);
this->_v_6421_JOINS.get()=([&]()->V{V _lhs9788=([&]()->V{V _lhs9790=([&]()->V{V _lhs9792=([&]()->V{V _lhs9794=([&]()->V{V _lhs9796=([&]()->V{V _lhs9798=this->_literals[110];V _rhs9799=this->_literals[111];return j::binary("+",_lhs9798,_rhs9799);})();V _rhs9797=this->_literals[112];return j::binary("+",_lhs9796,_rhs9797);})();V _rhs9795=this->_literals[113];return j::binary("+",_lhs9794,_rhs9795);})();V _rhs9793=this->_literals[114];return j::binary("+",_lhs9792,_rhs9793);})();V _rhs9791=this->_literals[115];return j::binary("+",_lhs9790,_rhs9791);})();V _rhs9789=this->_literals[116];return j::binary("+",_lhs9788,_rhs9789);})();
this->_v_6422_AU.get()=V(0.0);
this->_v_6423_AR.get()=V(2.0);
this->_v_6424_AD.get()=V(4.0);
this->_v_6425_AL.get()=V(6.0);
this->_v_6426_ARMS.get()=([&]()->V{V _callee9800=j::builtin("Map");return j::construct(_callee9800,j::Args{});})();
this->_v_6427_GLYPH.get()=([&]()->V{V _callee9801=j::builtin("Map");return j::construct(_callee9801,j::Args{});})();
this->_v_6428_ROUND.get()=([&]()->V{V _callee9802=j::builtin("Map");return j::construct(_callee9802,j::Args{});})();
{for(const auto &_item9803:j::elements(([&]()->V{V _receiver9804=this->_v_6421_JOINS.get();V _method9805=this->_literals[52];V _method=j::get(_receiver9804,_method9805);j::Args _params9806=j::Args{this->_literals[54]};return j::call(_method,_params9806,_receiver9804);})())){V _v_6429_e;
_v_6429_e=_item9803;
{
V _v_6430_c;
V _v_6431_a;
_v_6430_c=([&]()->V{V _receiver9807=_v_6429_e;V _method9808=this->_literals[50];V _method=j::get(_receiver9807,_method9808);j::Args _params9809=j::Args{V(0.0)};return j::call(_method,_params9809,_receiver9807);})();
_v_6431_a=V(0.0);
{V _v_6432_k;
_v_6432_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs9810=_v_6432_k;V _rhs9811=V(4.0);return j::binary("<",_lhs9810,_rhs9811);})());(void)(j::increment(_v_6432_k,1,false))){(void)((_v_6431_a=j::binary("|",_v_6431_a,([&]()->V{V _lhs9813=([&]()->V{V _callee9817=j::builtin("Number");return j::call(_callee9817,j::Args{j::get(_v_6429_e,([&]()->V{V _lhs9815=_v_6432_k;V _rhs9816=V(1.0);return j::binary("+",_lhs9815,_rhs9816);})())});})();V _rhs9814=([&]()->V{V _lhs9818=V(2.0);V _rhs9819=_v_6432_k;return V(j::number(_lhs9818)*j::number(_rhs9819));})();return V(double(int32_t(j::u32(_lhs9813)<<(j::u32(_rhs9814)&31))));})())));
}}
(void)(([&]()->V{V _receiver9820=this->_v_6426_ARMS.get();V _method9821=this->_literals[41];V _method=j::get(_receiver9820,_method9821);j::Args _params9822=j::Args{_v_6430_c,_v_6431_a};return j::call(_method,_params9822,_receiver9820);})());
if(j::truth(j::unary("!",([&]()->V{V _receiver9823=this->_v_6427_GLYPH.get();V _method9824=this->_literals[35];V _method=j::get(_receiver9823,_method9824);j::Args _params9825=j::Args{_v_6431_a};return j::call(_method,_params9825,_receiver9823);})()))){(void)(([&]()->V{V _receiver9826=this->_v_6427_GLYPH.get();V _method9827=this->_literals[41];V _method=j::get(_receiver9826,_method9827);j::Args _params9828=j::Args{_v_6431_a,_v_6430_c};return j::call(_method,_params9828,_receiver9826);})());
}else {if(j::truth(([&]()->V{V _logical9829=([&]()->V{V _lhs9830=_v_6430_c;V _rhs9831=V(9581.0);return j::binary(">=",_lhs9830,_rhs9831);})();return j::truth(_logical9829)?([&]()->V{V _lhs9832=_v_6430_c;V _rhs9833=V(9584.0);return j::binary("<=",_lhs9832,_rhs9833);})():_logical9829;})())){(void)(([&]()->V{V _receiver9834=this->_v_6428_ROUND.get();V _method9835=this->_literals[41];V _method=j::get(_receiver9834,_method9835);j::Args _params9836=j::Args{_v_6431_a,_v_6430_c};return j::call(_method,_params9836,_receiver9834);})());
}
}

}
}}
this->_v_6441_PLUS.get()=V(43.0);
this->_v_6442_DASH.get()=V(45.0);
this->_v_6443_BAR.get()=V(124.0);
this->_v_6444_asciiGlyph.get()=j::function([=](const j::Args &_args_fn6445,const V &_receiver_fn6445,const V &_self_fn6445) mutable ->V{
V _v_6446_a;
_v_6446_a=_args_fn6445[0];
return (j::truth(([&]()->V{V _logical9837=([&]()->V{V _lhs9838=_v_6446_a;V _rhs9839=V(51.0);return V(int(j::i32(_lhs9838)&j::i32(_rhs9839)));})();return j::truth(_logical9837)?([&]()->V{V _lhs9840=_v_6446_a;V _rhs9841=V(204.0);return V(int(j::i32(_lhs9840)&j::i32(_rhs9841)));})():_logical9837;})())?this->_v_6441_PLUS.get():(j::truth(([&]()->V{V _lhs9842=_v_6446_a;V _rhs9843=V(204.0);return V(int(j::i32(_lhs9842)&j::i32(_rhs9843)));})())?this->_v_6442_DASH.get():this->_v_6443_BAR.get()));
return V{};
},1);
this->_v_6447_asciiArms.get()=j::function([=](const j::Args &_args_fn6448,const V &_receiver_fn6448,const V &_self_fn6448) mutable ->V{
V _v_6449_c;
_v_6449_c=_args_fn6448[0];
return (j::truth(([&]()->V{V _lhs9844=_v_6449_c;V _rhs9845=this->_v_6442_DASH.get();return V(j::equal(_lhs9844,_rhs9845,true));})())?V(68.0):(j::truth(([&]()->V{V _lhs9846=_v_6449_c;V _rhs9847=this->_v_6443_BAR.get();return V(j::equal(_lhs9846,_rhs9847,true));})())?V(17.0):(j::truth(([&]()->V{V _lhs9848=_v_6449_c;V _rhs9849=this->_v_6441_PLUS.get();return V(j::equal(_lhs9848,_rhs9849,true));})())?V(85.0):j::builtin("undefined"))));
return V{};
},1);
this->_v_6509_PX.get()=([&]()->V{V _callee9850=j::builtin("Int32Array");return j::construct(_callee9850,j::Args{V(256.0)});})();
this->_v_6510_PY.get()=([&]()->V{V _callee9851=j::builtin("Int32Array");return j::construct(_callee9851,j::Args{V(256.0)});})();
this->_v_6511_PS.get()=([&]()->V{V _callee9852=j::builtin("Uint8Array");return j::construct(_callee9852,j::Args{V(256.0)});})();
this->_v_6553_ALIGN.get()=([&]()->V{j::Args _array9853;_array9853.push_back(this->_literals[59]);_array9853.push_back(this->_literals[68]);_array9853.push_back(this->_literals[117]);return j::array(std::move(_array9853));})();
this->_v_6554_VALIGN.get()=([&]()->V{j::Args _array9854;_array9854.push_back(this->_literals[61]);_array9854.push_back(this->_literals[67]);_array9854.push_back(this->_literals[118]);return j::array(std::move(_array9854));})();
this->_v_6559_BAD.get()=j::regexp(u"[\\ud800-\\udbff][\\udc00-\\udfff]|[\\u0000-\\u0009\\u000b-\\u001f\\u007f-\\u009f\\ud800-\\udfff]","");
this->_v_6723_boxes.get()=([&]()->V{V _receiver9856=j::builtin("Object");V _method9857=this->_literals[124];V _method=j::get(_receiver9856,_method9857);j::Args _params9858=j::Args{([&]()->V{V _obj9855=j::object();j::put(_obj9855,this->_literals[80],this->_literals[119]);j::put(_obj9855,this->_literals[45],this->_literals[120]);j::put(_obj9855,this->_literals[43],this->_literals[121]);j::put(_obj9855,this->_literals[44],this->_literals[122]);j::put(_obj9855,this->_literals[42],this->_literals[123]);return _obj9855;})()};return j::call(_method,_params9858,_receiver9856);})();
this->_v_6724_EDGE_ARMS.get()=([&]()->V{j::Args _array9859;_array9859.push_back(([&]()->V{V _lhs9860=([&]()->V{V _lhs9862=V(1.0);V _rhs9863=this->_v_6423_AR.get();return V(double(int32_t(j::u32(_lhs9862)<<(j::u32(_rhs9863)&31))));})();V _rhs9861=([&]()->V{V _lhs9864=V(1.0);V _rhs9865=this->_v_6424_AD.get();return V(double(int32_t(j::u32(_lhs9864)<<(j::u32(_rhs9865)&31))));})();return V(int(j::i32(_lhs9860)|j::i32(_rhs9861)));})());_array9859.push_back(([&]()->V{V _lhs9866=([&]()->V{V _lhs9868=V(1.0);V _rhs9869=this->_v_6425_AL.get();return V(double(int32_t(j::u32(_lhs9868)<<(j::u32(_rhs9869)&31))));})();V _rhs9867=([&]()->V{V _lhs9870=V(1.0);V _rhs9871=this->_v_6424_AD.get();return V(double(int32_t(j::u32(_lhs9870)<<(j::u32(_rhs9871)&31))));})();return V(int(j::i32(_lhs9866)|j::i32(_rhs9867)));})());_array9859.push_back(([&]()->V{V _lhs9872=([&]()->V{V _lhs9874=V(1.0);V _rhs9875=this->_v_6422_AU.get();return V(double(int32_t(j::u32(_lhs9874)<<(j::u32(_rhs9875)&31))));})();V _rhs9873=([&]()->V{V _lhs9876=V(1.0);V _rhs9877=this->_v_6423_AR.get();return V(double(int32_t(j::u32(_lhs9876)<<(j::u32(_rhs9877)&31))));})();return V(int(j::i32(_lhs9872)|j::i32(_rhs9873)));})());_array9859.push_back(([&]()->V{V _lhs9878=([&]()->V{V _lhs9880=V(1.0);V _rhs9881=this->_v_6422_AU.get();return V(double(int32_t(j::u32(_lhs9880)<<(j::u32(_rhs9881)&31))));})();V _rhs9879=([&]()->V{V _lhs9882=V(1.0);V _rhs9883=this->_v_6425_AL.get();return V(double(int32_t(j::u32(_lhs9882)<<(j::u32(_rhs9883)&31))));})();return V(int(j::i32(_lhs9878)|j::i32(_rhs9879)));})());_array9859.push_back(([&]()->V{V _lhs9884=([&]()->V{V _lhs9886=V(1.0);V _rhs9887=this->_v_6425_AL.get();return V(double(int32_t(j::u32(_lhs9886)<<(j::u32(_rhs9887)&31))));})();V _rhs9885=([&]()->V{V _lhs9888=V(1.0);V _rhs9889=this->_v_6423_AR.get();return V(double(int32_t(j::u32(_lhs9888)<<(j::u32(_rhs9889)&31))));})();return V(int(j::i32(_lhs9884)|j::i32(_rhs9885)));})());_array9859.push_back(([&]()->V{V _lhs9890=([&]()->V{V _lhs9892=V(1.0);V _rhs9893=this->_v_6422_AU.get();return V(double(int32_t(j::u32(_lhs9892)<<(j::u32(_rhs9893)&31))));})();V _rhs9891=([&]()->V{V _lhs9894=V(1.0);V _rhs9895=this->_v_6424_AD.get();return V(double(int32_t(j::u32(_lhs9894)<<(j::u32(_rhs9895)&31))));})();return V(int(j::i32(_lhs9890)|j::i32(_rhs9891)));})());return j::array(std::move(_array9859));})();
this->_v_6785_EDGE.get()=([&]()->V{V _callee9896=j::builtin("Uint8Array");return j::construct(_callee9896,j::Args{V(1024.0)});})();
this->_v_6962_samePalette.get()=j::function([=](const j::Args &_args_fn6963,const V &_receiver_fn6963,const V &_self_fn6963) mutable ->V{
V _v_6964_a;
j::Cell _v_6965_b;
_v_6964_a=_args_fn6963[0];
_v_6965_b.get()=_args_fn6963[1];
return ([&]()->V{V _logical9897=([&]()->V{V _lhs9898=_v_6964_a;V _rhs9899=_v_6965_b.get();return V(j::equal(_lhs9898,_rhs9899,true));})();return !j::truth(_logical9897)?([&]()->V{V _logical9900=([&]()->V{V _logical9901=([&]()->V{V _logical9902=j::unary("!",j::unary("!",_v_6964_a));return j::truth(_logical9902)?j::unary("!",j::unary("!",_v_6965_b.get())):_logical9902;})();return j::truth(_logical9901)?([&]()->V{V _lhs9903=j::get(j::get(_v_6964_a,this->_literals[2]),this->_literals[12]);V _rhs9904=j::get(j::get(_v_6965_b.get(),this->_literals[2]),this->_literals[12]);return V(j::equal(_lhs9903,_rhs9904,true));})():_logical9901;})();return j::truth(_logical9900)?([&]()->V{V _receiver9913=j::get(_v_6964_a,this->_literals[2]);V _method9914=this->_literals[94];V _method=j::get(_receiver9913,_method9914);j::Args _params9915=j::Args{j::function([=](const j::Args &_args_fn6966,const V &_receiver_fn6966,const V &_self_fn6966) mutable ->V{
V _v_6967_c;
V _v_6968_i;
_v_6967_c=_args_fn6966[0];
_v_6968_i=_args_fn6966[1];
return ([&]()->V{V _lhs9905=([&]()->V{V _receiver9907=_v_6967_c;V _method9908=this->_literals[125];V _method=j::get(_receiver9907,_method9908);j::Args _params9909=j::Args{};return j::call(_method,_params9909,_receiver9907);})();V _rhs9906=([&]()->V{V _receiver9910=j::get(j::get(_v_6965_b.get(),this->_literals[2]),_v_6968_i);V _method9911=this->_literals[125];V _method=j::get(_receiver9910,_method9911);j::Args _params9912=j::Args{};return j::call(_method,_params9912,_receiver9910);})();return V(j::equal(_lhs9905,_rhs9906,true));})();
return V{};
},2)};return j::call(_method,_params9915,_receiver9913);})():_logical9900;})():_logical9897;})();
return V{};
},2);
this->_v_6969_startAt.get()=j::function([=](const j::Args &_args_fn6970,const V &_receiver_fn6970,const V &_self_fn6970) mutable ->V{
V _v_6971_at;
V _v_6972_n;
V _v_6973_how;
_v_6971_at=_args_fn6970[0];
_v_6972_n=_args_fn6970[1];
_v_6973_how=_args_fn6970[2];
return (j::truth(([&]()->V{V _logical9916=([&]()->V{V _lhs9917=_v_6973_how;V _rhs9918=this->_literals[59];return V(j::equal(_lhs9917,_rhs9918,true));})();return !j::truth(_logical9916)?([&]()->V{V _lhs9919=_v_6973_how;V _rhs9920=this->_literals[61];return V(j::equal(_lhs9919,_rhs9920,true));})():_logical9916;})())?([&]()->V{V _number9921=_v_6971_at;return V(std::floor(j::number(_number9921)));})():([&]()->V{V _number9933=([&]()->V{V _lhs9934=([&]()->V{V _lhs9936=_v_6971_at;V _rhs9937=(j::truth(([&]()->V{V _logical9938=([&]()->V{V _lhs9939=_v_6973_how;V _rhs9940=this->_literals[68];return V(j::equal(_lhs9939,_rhs9940,true));})();return !j::truth(_logical9938)?([&]()->V{V _lhs9941=_v_6973_how;V _rhs9942=this->_literals[67];return V(j::equal(_lhs9941,_rhs9942,true));})():_logical9938;})())?([&]()->V{V _lhs9943=_v_6972_n;V _rhs9944=V(2.0);return V(j::number(_lhs9943)/j::number(_rhs9944));})():_v_6972_n);return V(j::number(_lhs9936)-j::number(_rhs9937));})();V _rhs9935=V(0.5);return j::binary("+",_lhs9934,_rhs9935);})();return V(std::floor(j::number(_number9933)));})());
return V{};
},3);
this->_v_7019_BITS.get()=([&]()->V{j::Args _array9945;_array9945.push_back(([&]()->V{j::Args _array9946;_array9946.push_back(V(1.0));_array9946.push_back(V(2.0));_array9946.push_back(V(4.0));_array9946.push_back(V(64.0));return j::array(std::move(_array9946));})());_array9945.push_back(([&]()->V{j::Args _array9947;_array9947.push_back(V(8.0));_array9947.push_back(V(16.0));_array9947.push_back(V(32.0));_array9947.push_back(V(128.0));return j::array(std::move(_array9947));})());return j::array(std::move(_array9945));})();
{V _base9948=V{};V _class9949=j::make_class("BrailleCanvas",_base9948,j::function([=](const j::Args &_args_fn7026,const V &_receiver_fn7026,const V &_self_fn7026) mutable ->V{
j::put(_receiver_fn7026,this->_literals[62],V{});j::put(_receiver_fn7026,this->_literals[63],V{});j::put(_receiver_fn7026,this->_literals[38],V{});j::put(_receiver_fn7026,this->_literals[126],V{});_receiver_fn7026.data->hidden.insert(j::string(this->_literals[126]));j::put(_receiver_fn7026,this->_literals[127],V{});_receiver_fn7026.data->hidden.insert(j::string(this->_literals[127]));j::put(_receiver_fn7026,this->_literals[128],V{});_receiver_fn7026.data->hidden.insert(j::string(this->_literals[128]));j::put(_receiver_fn7026,this->_literals[129],V{});_receiver_fn7026.data->hidden.insert(j::string(this->_literals[129]));V _v_7027_s;
V _v_7028_r;
_v_7027_s=_args_fn7026[0];
_v_7028_r=_args_fn7026[1];
{
(void)(([&]()->V{V _base9951=_receiver_fn7026;V _key9952=this->_literals[126];V _assign9950=_v_7027_s;return j::put(_base9951,_key9952,_assign9950);})());
(void)(([&]()->V{V _base9954=_receiver_fn7026;V _key9955=this->_literals[127];V _assign9953=_v_7028_r;return j::put(_base9954,_key9955,_assign9953);})());
(void)(([&]()->V{V _base9957=_receiver_fn7026;V _key9958=this->_literals[62];V _assign9956=([&]()->V{V _lhs9959=j::get(_v_7028_r,this->_literals[31]);V _rhs9960=V(2.0);return V(j::number(_lhs9959)*j::number(_rhs9960));})();return j::put(_base9957,_key9958,_assign9956);})());
(void)(([&]()->V{V _base9962=_receiver_fn7026;V _key9963=this->_literals[63];V _assign9961=([&]()->V{V _lhs9964=j::get(_v_7028_r,this->_literals[32]);V _rhs9965=V(4.0);return V(j::number(_lhs9964)*j::number(_rhs9965));})();return j::put(_base9962,_key9963,_assign9961);})());
(void)(([&]()->V{V _base9967=_receiver_fn7026;V _key9968=this->_literals[38];V _assign9966=([&]()->V{V _lhs9969=j::get(_v_7027_s,this->_literals[38]);V _rhs9970=V(2.0);return V(j::number(_lhs9969)/j::number(_rhs9970));})();return j::put(_base9967,_key9968,_assign9966);})());
(void)(([&]()->V{V _base9972=_receiver_fn7026;V _key9973=this->_literals[128];V _assign9971=([&]()->V{V _callee9976=j::builtin("Uint8Array");return j::construct(_callee9976,j::Args{([&]()->V{V _lhs9974=j::get(_v_7028_r,this->_literals[31]);V _rhs9975=j::get(_v_7028_r,this->_literals[32]);return V(j::number(_lhs9974)*j::number(_rhs9975));})()});})();return j::put(_base9972,_key9973,_assign9971);})());
(void)(([&]()->V{V _base9978=_receiver_fn7026;V _key9979=this->_literals[129];V _assign9977=([&]()->V{V _receiver9980=([&]()->V{V _callee9985=j::builtin("Uint8Array");return j::construct(_callee9985,j::Args{([&]()->V{V _lhs9983=j::get(_v_7028_r,this->_literals[31]);V _rhs9984=j::get(_v_7028_r,this->_literals[32]);return V(j::number(_lhs9983)*j::number(_rhs9984));})()});})();V _method9981=this->_literals[81];V _method=j::get(_receiver9980,_method9981);j::Args _params9982=j::Args{this->_v_6334_NONE.get()};return j::call(_method,_params9982,_receiver9980);})();return j::put(_base9978,_key9979,_assign9977);})());

}

return V{};
},2));this->_v_7025_BrailleCanvas.get()=_class9949;j::class_method(_class9949,this->_literals[130],j::function([=](const j::Args &_args_fn7029,const V &_receiver_fn7029,const V &_self_fn7029) mutable ->V{
V _v_7030_x;
V _v_7031_y;
V _v_7032_k;
_v_7030_x=_args_fn7029[0];
_v_7031_y=_args_fn7029[1];
_v_7032_k=_args_fn7029[2];
{
V _v_7033_i;
if(j::truth(([&]()->V{V _logical9986=([&]()->V{V _logical9987=([&]()->V{V _logical9988=([&]()->V{V _lhs9989=_v_7030_x;V _rhs9990=V(0.0);return j::binary("<",_lhs9989,_rhs9990);})();return !j::truth(_logical9988)?([&]()->V{V _lhs9991=_v_7031_y;V _rhs9992=V(0.0);return j::binary("<",_lhs9991,_rhs9992);})():_logical9988;})();return !j::truth(_logical9987)?([&]()->V{V _lhs9993=_v_7030_x;V _rhs9994=j::get(_receiver_fn7029,this->_literals[62]);return j::binary(">=",_lhs9993,_rhs9994);})():_logical9987;})();return !j::truth(_logical9986)?([&]()->V{V _lhs9995=_v_7031_y;V _rhs9996=j::get(_receiver_fn7029,this->_literals[63]);return j::binary(">=",_lhs9995,_rhs9996);})():_logical9986;})())){return V{};
}
_v_7033_i=([&]()->V{V _lhs9997=([&]()->V{V _lhs9999=([&]()->V{V _lhs10001=_v_7031_y;V _rhs10002=V(2.0);return V(int(j::i32(_lhs10001)>>(j::u32(_rhs10002)&31)));})();V _rhs10000=j::get(j::get(_receiver_fn7029,this->_literals[127]),this->_literals[31]);return V(j::number(_lhs9999)*j::number(_rhs10000));})();V _rhs9998=([&]()->V{V _lhs10003=_v_7030_x;V _rhs10004=V(1.0);return V(int(j::i32(_lhs10003)>>(j::u32(_rhs10004)&31)));})();return j::binary("+",_lhs9997,_rhs9998);})();
(void)(([&]()->V{V _base10006=j::get(_receiver_fn7029,this->_literals[128]);V _key10007=_v_7033_i;V _assign10005=j::get(j::get(this->_v_7019_BITS.get(),([&]()->V{V _lhs10008=_v_7030_x;V _rhs10009=V(1.0);return V(int(j::i32(_lhs10008)&j::i32(_rhs10009)));})()),([&]()->V{V _lhs10010=_v_7031_y;V _rhs10011=V(3.0);return V(int(j::i32(_lhs10010)&j::i32(_rhs10011)));})());return j::update(_base10006,_key10007,"|",_assign10005);})());
if(j::truth(([&]()->V{V _lhs10012=_v_7032_k;V _rhs10013=V(0.0);return j::binary(">=",_lhs10012,_rhs10013);})())){(void)(([&]()->V{V _base10015=j::get(_receiver_fn7029,this->_literals[129]);V _key10016=_v_7033_i;V _assign10014=_v_7032_k;return j::put(_base10015,_key10016,_assign10014);})());
}

}

return V{};
},3),false,"method");j::class_method(_class9949,this->_literals[131],j::function([=](const j::Args &_args_fn7034,const V &_receiver_fn7034,const V &_self_fn7034) mutable ->V{
V _v_7035_color;
_v_7035_color=_args_fn7034[0];
{
return (j::truth(([&]()->V{V _logical10017=([&]()->V{V _lhs10018=_v_7035_color;V _rhs10019=j::builtin("undefined");return V(j::equal(_lhs10018,_rhs10019,true));})();return !j::truth(_logical10017)?([&]()->V{V _lhs10020=_v_7035_color;V _rhs10021=V::null();return V(j::equal(_lhs10020,_rhs10021,true));})():_logical10017;})())?j::unary("-",V(1.0)):([&]()->V{V _callee10022=this->_v_6345_paint.get();return j::call(_callee10022,j::Args{j::get(_receiver_fn7034,this->_literals[126]),_v_7035_color});})());

}

return V{};
},1),false,"method");j::class_method(_class9949,this->_literals[41],j::function([=](const j::Args &_args_fn7036,const V &_receiver_fn7036,const V &_self_fn7036) mutable ->V{
V _v_7037_x;
V _v_7038_y;
V _v_7039_color;
_v_7037_x=_args_fn7036[0];
_v_7038_y=_args_fn7036[1];
_v_7039_color=_args_fn7036[2];
{
V _v_7040_k;
_v_7040_k=([&]()->V{V _receiver10023=_receiver_fn7036;V _method10024=this->_literals[131];V _method=j::get(_receiver10023,_method10024);j::Args _params10025=j::Args{_v_7039_color};return j::call(_method,_params10025,_receiver10023);})();
if(j::truth(([&]()->V{V _callee10026=this->_v_6353_finite.get();return j::call(_callee10026,j::Args{_v_7037_x,_v_7038_y});})())){(void)(([&]()->V{V _receiver10029=_receiver_fn7036;V _method10030=this->_literals[130];V _method=j::get(_receiver10029,_method10030);j::Args _params10031=j::Args{([&]()->V{V _number10027=_v_7037_x;return V(std::floor(j::number(_number10027)));})(),([&]()->V{V _number10028=_v_7038_y;return V(std::floor(j::number(_number10028)));})(),_v_7040_k};return j::call(_method,_params10031,_receiver10029);})());
}

}

return V{};
},3),false,"method");j::class_method(_class9949,this->_literals[132],j::function([=](const j::Args &_args_fn7041,const V &_receiver_fn7041,const V &_self_fn7041) mutable ->V{
V _v_7042_x;
V _v_7043_y;
_v_7042_x=_args_fn7041[0];
_v_7043_y=_args_fn7041[1];
{
if(j::truth(j::unary("!",([&]()->V{V _receiver10032=_receiver_fn7041;V _method10033=this->_literals[36];V _method=j::get(_receiver10032,_method10033);j::Args _params10034=j::Args{_v_7042_x,_v_7043_y};return j::call(_method,_params10034,_receiver10032);})()))){return V{};
}
(void)((_v_7042_x=([&]()->V{V _number10036=_v_7042_x;return V(std::floor(j::number(_number10036)));})()));
(void)((_v_7043_y=([&]()->V{V _number10038=_v_7043_y;return V(std::floor(j::number(_number10038)));})()));
(void)(([&]()->V{V _base10040=j::get(_receiver_fn7041,this->_literals[128]);V _key10041=([&]()->V{V _lhs10042=([&]()->V{V _lhs10044=([&]()->V{V _lhs10046=_v_7043_y;V _rhs10047=V(2.0);return V(int(j::i32(_lhs10046)>>(j::u32(_rhs10047)&31)));})();V _rhs10045=j::get(j::get(_receiver_fn7041,this->_literals[127]),this->_literals[31]);return V(j::number(_lhs10044)*j::number(_rhs10045));})();V _rhs10043=([&]()->V{V _lhs10048=_v_7042_x;V _rhs10049=V(1.0);return V(int(j::i32(_lhs10048)>>(j::u32(_rhs10049)&31)));})();return j::binary("+",_lhs10042,_rhs10043);})();V _assign10039=j::unary("~",j::get(j::get(this->_v_7019_BITS.get(),([&]()->V{V _lhs10050=_v_7042_x;V _rhs10051=V(1.0);return V(int(j::i32(_lhs10050)&j::i32(_rhs10051)));})()),([&]()->V{V _lhs10052=_v_7043_y;V _rhs10053=V(3.0);return V(int(j::i32(_lhs10052)&j::i32(_rhs10053)));})()));return j::update(_base10040,_key10041,"&",_assign10039);})());

}

return V{};
},2),false,"method");j::class_method(_class9949,this->_literals[133],j::function([=](const j::Args &_args_fn7044,const V &_receiver_fn7044,const V &_self_fn7044) mutable ->V{
V _v_7045_x;
V _v_7046_y;
_v_7045_x=_args_fn7044[0];
_v_7046_y=_args_fn7044[1];
{
if(j::truth(([&]()->V{V _receiver10054=_receiver_fn7044;V _method10055=this->_literals[36];V _method=j::get(_receiver10054,_method10055);j::Args _params10056=j::Args{_v_7045_x,_v_7046_y};return j::call(_method,_params10056,_receiver10054);})())){(void)(([&]()->V{V _receiver10057=_receiver_fn7044;V _method10058=this->_literals[132];V _method=j::get(_receiver10057,_method10058);j::Args _params10059=j::Args{_v_7045_x,_v_7046_y};return j::call(_method,_params10059,_receiver10057);})());
}else {(void)(([&]()->V{V _receiver10060=_receiver_fn7044;V _method10061=this->_literals[41];V _method=j::get(_receiver10060,_method10061);j::Args _params10062=j::Args{_v_7045_x,_v_7046_y};return j::call(_method,_params10062,_receiver10060);})());
}

}

return V{};
},2),false,"method");j::class_method(_class9949,this->_literals[36],j::function([=](const j::Args &_args_fn7047,const V &_receiver_fn7047,const V &_self_fn7047) mutable ->V{
V _v_7048_x;
V _v_7049_y;
_v_7048_x=_args_fn7047[0];
_v_7049_y=_args_fn7047[1];
{
if(j::truth(j::unary("!",([&]()->V{V _callee10063=this->_v_6353_finite.get();return j::call(_callee10063,j::Args{_v_7048_x,_v_7049_y});})()))){return V(false);
}
(void)((_v_7048_x=([&]()->V{V _number10065=_v_7048_x;return V(std::floor(j::number(_number10065)));})()));
(void)((_v_7049_y=([&]()->V{V _number10067=_v_7049_y;return V(std::floor(j::number(_number10067)));})()));
if(j::truth(([&]()->V{V _logical10068=([&]()->V{V _logical10069=([&]()->V{V _logical10070=([&]()->V{V _lhs10071=_v_7048_x;V _rhs10072=V(0.0);return j::binary("<",_lhs10071,_rhs10072);})();return !j::truth(_logical10070)?([&]()->V{V _lhs10073=_v_7049_y;V _rhs10074=V(0.0);return j::binary("<",_lhs10073,_rhs10074);})():_logical10070;})();return !j::truth(_logical10069)?([&]()->V{V _lhs10075=_v_7048_x;V _rhs10076=j::get(_receiver_fn7047,this->_literals[62]);return j::binary(">=",_lhs10075,_rhs10076);})():_logical10069;})();return !j::truth(_logical10068)?([&]()->V{V _lhs10077=_v_7049_y;V _rhs10078=j::get(_receiver_fn7047,this->_literals[63]);return j::binary(">=",_lhs10077,_rhs10078);})():_logical10068;})())){return V(false);
}
return ([&]()->V{V _lhs10079=([&]()->V{V _lhs10081=j::get(j::get(_receiver_fn7047,this->_literals[128]),([&]()->V{V _lhs10083=([&]()->V{V _lhs10085=([&]()->V{V _lhs10087=_v_7049_y;V _rhs10088=V(2.0);return V(int(j::i32(_lhs10087)>>(j::u32(_rhs10088)&31)));})();V _rhs10086=j::get(j::get(_receiver_fn7047,this->_literals[127]),this->_literals[31]);return V(j::number(_lhs10085)*j::number(_rhs10086));})();V _rhs10084=([&]()->V{V _lhs10089=_v_7048_x;V _rhs10090=V(1.0);return V(int(j::i32(_lhs10089)>>(j::u32(_rhs10090)&31)));})();return j::binary("+",_lhs10083,_rhs10084);})());V _rhs10082=j::get(j::get(this->_v_7019_BITS.get(),([&]()->V{V _lhs10091=_v_7048_x;V _rhs10092=V(1.0);return V(int(j::i32(_lhs10091)&j::i32(_rhs10092)));})()),([&]()->V{V _lhs10093=_v_7049_y;V _rhs10094=V(3.0);return V(int(j::i32(_lhs10093)&j::i32(_rhs10094)));})());return V(int(j::i32(_lhs10081)&j::i32(_rhs10082)));})();V _rhs10080=V(0.0);return V(!j::equal(_lhs10079,_rhs10080,true));})();

}

return V{};
},2),false,"method");j::class_method(_class9949,this->_literals[70],j::function([=](const j::Args &_args_fn7050,const V &_receiver_fn7050,const V &_self_fn7050) mutable ->V{
V _v_7051_x0;
V _v_7052_y0;
V _v_7053_x1;
V _v_7054_y1;
V _v_7055_color;
_v_7051_x0=_args_fn7050[0];
_v_7052_y0=_args_fn7050[1];
_v_7053_x1=_args_fn7050[2];
_v_7054_y1=_args_fn7050[3];
_v_7055_color=_args_fn7050[4];
{
V _v_7056_k;
V _v_7057_n;
_v_7056_k=([&]()->V{V _receiver10095=_receiver_fn7050;V _method10096=this->_literals[131];V _method=j::get(_receiver10095,_method10096);j::Args _params10097=j::Args{_v_7055_color};return j::call(_method,_params10097,_receiver10095);})();
_v_7057_n=([&]()->V{V _callee10098=this->_v_6392_trace.get();return j::call(_callee10098,j::Args{_v_7051_x0,_v_7052_y0,_v_7053_x1,_v_7054_y1,j::get(_receiver_fn7050,this->_literals[62]),j::get(_receiver_fn7050,this->_literals[63])});})();
{V _v_7058_i;
_v_7058_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs10099=_v_7058_i;V _rhs10100=_v_7057_n;return j::binary("<",_lhs10099,_rhs10100);})());(void)(j::increment(_v_7058_i,1,false))){(void)(([&]()->V{V _receiver10101=_receiver_fn7050;V _method10102=this->_literals[130];V _method=j::get(_receiver10101,_method10102);j::Args _params10103=j::Args{j::get(this->_v_6390_XS.get(),_v_7058_i),j::get(this->_v_6391_YS.get(),_v_7058_i),_v_7056_k};return j::call(_method,_params10103,_receiver10101);})());
}}

}

return V{};
},5),false,"method");j::class_method(_class9949,this->_literals[78],j::function([=](const j::Args &_args_fn7059,const V &_receiver_fn7059,const V &_self_fn7059) mutable ->V{
V _v_7060_x;
V _v_7061_y;
V _v_7062_length;
V _v_7063_turn;
V _v_7064_color;
_v_7060_x=_args_fn7059[0];
_v_7061_y=_args_fn7059[1];
_v_7062_length=_args_fn7059[2];
_v_7063_turn=_args_fn7059[3];
_v_7064_color=_args_fn7059[4];
{
V _v_7065_x1;
V _v_7066_y1;
V _pattern10105=([&]()->V{V _callee10104=this->_v_6703_around.get();return j::call(_callee10104,j::Args{_receiver_fn7059,_v_7060_x,_v_7061_y,_v_7062_length,_v_7063_turn});})();
_v_7065_x1=j::get(_pattern10105,V(0));
_v_7066_y1=j::get(_pattern10105,V(1));
(void)(([&]()->V{V _receiver10106=_receiver_fn7059;V _method10107=this->_literals[70];V _method=j::get(_receiver10106,_method10107);j::Args _params10108=j::Args{_v_7060_x,_v_7061_y,_v_7065_x1,_v_7066_y1,_v_7064_color};return j::call(_method,_params10108,_receiver10106);})());

}

return V{};
},5),false,"method");j::class_method(_class9949,this->_literals[89],j::function([=](const j::Args &_args_fn7067,const V &_receiver_fn7067,const V &_self_fn7067) mutable ->V{
V _v_7068_cx;
V _v_7069_cy;
V _v_7070_r;
V _v_7071_o;
_v_7068_cx=_args_fn7067[0];
_v_7069_cy=_args_fn7067[1];
_v_7070_r=_args_fn7067[2];
_v_7071_o=_args_fn7067[3];
{
V _v_7072_fill;
V _v_7073_color;
j::Cell _v_7074_k;
V _pattern10110=([&]()->V{V _callee10109=this->_v_7020_canvasOpts.get();return j::call(_callee10109,j::Args{_v_7071_o,this->_literals[89]});})();
_v_7072_fill=j::get(_pattern10110,this->_literals[81]);
_v_7073_color=j::get(_pattern10110,this->_literals[57]);
_v_7074_k.get()=([&]()->V{V _receiver10111=_receiver_fn7067;V _method10112=this->_literals[131];V _method=j::get(_receiver10111,_method10112);j::Args _params10113=j::Args{_v_7073_color};return j::call(_method,_params10113,_receiver10111);})();
(void)(([&]()->V{V _callee10119=this->_v_6786_ellipseCells.get();return j::call(_callee10119,j::Args{j::get(_receiver_fn7067,this->_literals[62]),j::get(_receiver_fn7067,this->_literals[63]),_v_7068_cx,_v_7069_cy,_v_7070_r,([&]()->V{V _lhs10114=_v_7070_r;V _rhs10115=j::get(_receiver_fn7067,this->_literals[38]);return V(j::number(_lhs10114)/j::number(_rhs10115));})(),_v_7072_fill,j::function([=](const j::Args &_args_fn7075,const V &_receiver_fn7075,const V &_self_fn7075) mutable ->V{
V _v_7076_x;
V _v_7077_y;
_v_7076_x=_args_fn7075[0];
_v_7077_y=_args_fn7075[1];
return ([&]()->V{V _receiver10116=_receiver_fn7067;V _method10117=this->_literals[130];V _method=j::get(_receiver10116,_method10117);j::Args _params10118=j::Args{_v_7076_x,_v_7077_y,_v_7074_k.get()};return j::call(_method,_params10118,_receiver10116);})();
return V{};
},2)});})());

}

return V{};
},4),false,"method");j::class_method(_class9949,this->_literals[91],j::function([=](const j::Args &_args_fn7078,const V &_receiver_fn7078,const V &_self_fn7078) mutable ->V{
V _v_7079_cx;
V _v_7080_cy;
V _v_7081_r;
V _v_7082_from;
V _v_7083_to;
V _v_7084_o;
_v_7079_cx=_args_fn7078[0];
_v_7080_cy=_args_fn7078[1];
_v_7081_r=_args_fn7078[2];
_v_7082_from=_args_fn7078[3];
_v_7083_to=_args_fn7078[4];
_v_7084_o=_args_fn7078[5];
{
V _v_7085_fill;
V _v_7086_color;
j::Cell _v_7087_k;
V _pattern10121=([&]()->V{V _callee10120=this->_v_7020_canvasOpts.get();return j::call(_callee10120,j::Args{_v_7084_o,this->_literals[91]});})();
_v_7085_fill=j::get(_pattern10121,this->_literals[81]);
_v_7086_color=j::get(_pattern10121,this->_literals[57]);
_v_7087_k.get()=([&]()->V{V _receiver10122=_receiver_fn7078;V _method10123=this->_literals[131];V _method=j::get(_receiver10122,_method10123);j::Args _params10124=j::Args{_v_7086_color};return j::call(_method,_params10124,_receiver10122);})();
(void)(([&]()->V{V _callee10131=this->_v_6786_ellipseCells.get();return j::call(_callee10131,j::Args{j::get(_receiver_fn7078,this->_literals[62]),j::get(_receiver_fn7078,this->_literals[63]),_v_7079_cx,_v_7080_cy,_v_7081_r,([&]()->V{V _lhs10125=_v_7081_r;V _rhs10126=j::get(_receiver_fn7078,this->_literals[38]);return V(j::number(_lhs10125)/j::number(_rhs10126));})(),_v_7085_fill,j::function([=](const j::Args &_args_fn7088,const V &_receiver_fn7088,const V &_self_fn7088) mutable ->V{
V _v_7089_x;
V _v_7090_y;
_v_7089_x=_args_fn7088[0];
_v_7090_y=_args_fn7088[1];
return ([&]()->V{V _receiver10127=_receiver_fn7078;V _method10128=this->_literals[130];V _method=j::get(_receiver10127,_method10128);j::Args _params10129=j::Args{_v_7089_x,_v_7090_y,_v_7087_k.get()};return j::call(_method,_params10129,_receiver10127);})();
return V{};
},2),V(0.0),_v_7082_from,([&]()->V{V _callee10130=this->_v_6888_sweep.get();return j::call(_callee10130,j::Args{_v_7082_from,_v_7083_to});})()});})());

}

return V{};
},6),false,"method");j::class_method(_class9949,this->_literals[79],j::function([=](const j::Args &_args_fn7091,const V &_receiver_fn7091,const V &_self_fn7091) mutable ->V{
V _v_7092_x;
V _v_7093_y;
V _v_7094_w;
V _v_7095_h;
V _v_7096_o;
_v_7092_x=_args_fn7091[0];
_v_7093_y=_args_fn7091[1];
_v_7094_w=_args_fn7091[2];
_v_7095_h=_args_fn7091[3];
_v_7096_o=_args_fn7091[4];
{
V _v_7097_fill;
V _v_7098_color;
j::Cell _v_7099_k;
V _pattern10133=([&]()->V{V _callee10132=this->_v_7020_canvasOpts.get();return j::call(_callee10132,j::Args{_v_7096_o,this->_literals[79]});})();
_v_7097_fill=j::get(_pattern10133,this->_literals[81]);
_v_7098_color=j::get(_pattern10133,this->_literals[57]);
_v_7099_k.get()=([&]()->V{V _receiver10134=_receiver_fn7091;V _method10135=this->_literals[131];V _method=j::get(_receiver10134,_method10135);j::Args _params10136=j::Args{_v_7098_color};return j::call(_method,_params10136,_receiver10134);})();
(void)(([&]()->V{V _callee10140=this->_v_7148_boxDots.get();return j::call(_callee10140,j::Args{_v_7092_x,_v_7093_y,_v_7094_w,_v_7095_h,_v_7097_fill,j::function([=](const j::Args &_args_fn7100,const V &_receiver_fn7100,const V &_self_fn7100) mutable ->V{
V _v_7101_dx;
V _v_7102_dy;
_v_7101_dx=_args_fn7100[0];
_v_7102_dy=_args_fn7100[1];
return ([&]()->V{V _receiver10137=_receiver_fn7091;V _method10138=this->_literals[130];V _method=j::get(_receiver10137,_method10138);j::Args _params10139=j::Args{_v_7101_dx,_v_7102_dy,_v_7099_k.get()};return j::call(_method,_params10139,_receiver10137);})();
return V{};
},2),j::get(_receiver_fn7091,this->_literals[62]),j::get(_receiver_fn7091,this->_literals[63])});})());

}

return V{};
},5),false,"method");j::class_method(_class9949,this->_literals[134],j::function([=](const j::Args &_args_fn7103,const V &_receiver_fn7103,const V &_self_fn7103) mutable ->V{
V _v_7104_f;
V _v_7105_o;
_v_7104_f=_args_fn7103[0];
_v_7105_o=_args_fn7103[1];
{
V _v_7106_list;
V _v_7107_x0;
V _v_7108_x1;
V _v_7109_color;
V _v_7110_y0;
V _v_7111_y1;
V _v_7114_fill;
V _v_7115_k;
V _v_7119_w;
V _v_7120_h;
V _v_7121_n;
V _v_7122_top;
V _v_7123_px;
V _v_7124_py;
_v_7106_list=(j::truth(([&]()->V{V _receiver10141=j::builtin("Array");V _method10142=this->_literals[17];V _method=j::get(_receiver10141,_method10142);j::Args _params10143=j::Args{_v_7104_f};return j::call(_method,_params10143,_receiver10141);})())?_v_7104_f:V::null());
if(j::truth(([&]()->V{V _logical10144=j::unary("!",_v_7106_list);return j::truth(_logical10144)?([&]()->V{V _lhs10145=j::unary("typeof",_v_7104_f);V _rhs10146=this->_literals[4];return V(!j::equal(_lhs10145,_rhs10146,true));})():_logical10144;})())){(void)(([&]()->V{V _callee10147=this->_v_6338_fail.get();return j::call(_callee10147,j::Args{this->_literals[135]});})());
}
V _pattern10149=([&]()->V{V _callee10148=this->_v_6376_opts.get();return j::call(_callee10148,j::Args{_v_7105_o,this->_literals[134]});})();
V _default10150=j::get(_pattern10149,this->_literals[136]);if(_default10150.kind==V::Undefined||_default10150.kind==V::Hole)_default10150=V(0.0);
_v_7107_x0=_default10150;
V _default10151=j::get(_pattern10149,this->_literals[137]);if(_default10151.kind==V::Undefined||_default10151.kind==V::Hole)_default10151=this->_v_6335_TAU.get();
_v_7108_x1=_default10151;
_v_7109_color=j::get(_pattern10149,this->_literals[57]);
V _pattern10153=([&]()->V{V _callee10152=this->_v_6376_opts.get();return j::call(_callee10152,j::Args{_v_7105_o,this->_literals[134]});})();
_v_7110_y0=j::get(_pattern10153,this->_literals[138]);
_v_7111_y1=j::get(_pattern10153,this->_literals[139]);
{for(const auto &_item10154:j::elements(([&]()->V{j::Args _array10155;_array10155.push_back(([&]()->V{j::Args _array10156;_array10156.push_back(_v_7107_x0);_array10156.push_back(this->_literals[136]);return j::array(std::move(_array10156));})());_array10155.push_back(([&]()->V{j::Args _array10157;_array10157.push_back(_v_7108_x1);_array10157.push_back(this->_literals[137]);return j::array(std::move(_array10157));})());_array10155.push_back(([&]()->V{j::Args _array10158;_array10158.push_back(([&]()->V{V _logical10159=_v_7110_y0;return j::nullish(_logical10159)?V(0.0):_logical10159;})());_array10158.push_back(this->_literals[138]);return j::array(std::move(_array10158));})());_array10155.push_back(([&]()->V{j::Args _array10160;_array10160.push_back(([&]()->V{V _logical10161=_v_7111_y1;return j::nullish(_logical10161)?V(0.0):_logical10161;})());_array10160.push_back(this->_literals[139]);return j::array(std::move(_array10160));})());return j::array(std::move(_array10155));})())){V _v_7112_v;
V _v_7113_name;
V _pattern10162=_item10154;
_v_7112_v=j::get(_pattern10162,V(0));
_v_7113_name=j::get(_pattern10162,V(1));
if(j::truth(([&]()->V{V _logical10163=([&]()->V{V _lhs10164=j::unary("typeof",_v_7112_v);V _rhs10165=this->_literals[8];return V(!j::equal(_lhs10164,_rhs10165,true));})();return !j::truth(_logical10163)?j::unary("!",([&]()->V{V _receiver10166=j::builtin("Number");V _method10167=this->_literals[46];V _method=j::get(_receiver10166,_method10167);j::Args _params10168=j::Args{_v_7112_v};return j::call(_method,_params10168,_receiver10166);})()):_logical10163;})())){(void)(([&]()->V{V _callee10171=this->_v_6338_fail.get();return j::call(_callee10171,j::Args{([&]()->V{std::u16string _text10169;_text10169+=u"plot's ";_text10169+=j::string(_v_7113_name);_text10169+=u" takes a number, not ";_text10169+=j::string(([&]()->V{V _callee10170=this->_v_6358_show.get();return j::call(_callee10170,j::Args{_v_7112_v});})());_text10169+=u"";return V(std::move(_text10169));})()});})());
}
}}
_v_7114_fill=([&]()->V{V _callee10174=this->_v_6380_yes.get();return j::call(_callee10174,j::Args{([&]()->V{V _chain10172=_v_7105_o;if(j::nullish(_chain10172))return V{};V _chain10173=j::get(_chain10172,this->_literals[81]);return _chain10173;})(),this->_literals[140],V(false)});})();
_v_7115_k=([&]()->V{V _receiver10175=_receiver_fn7103;V _method10176=this->_literals[131];V _method=j::get(_receiver10175,_method10176);j::Args _params10177=j::Args{_v_7109_color};return j::call(_method,_params10177,_receiver10175);})();
if(j::truth(([&]()->V{V _logical10178=_v_7106_list;return j::truth(_logical10178)?([&]()->V{V _logical10179=([&]()->V{V _lhs10180=_v_7110_y0;V _rhs10181=j::builtin("undefined");return V(j::equal(_lhs10180,_rhs10181,true));})();return !j::truth(_logical10179)?([&]()->V{V _lhs10182=_v_7111_y1;V _rhs10183=j::builtin("undefined");return V(j::equal(_lhs10182,_rhs10183,true));})():_logical10179;})():_logical10178;})())){
V _v_7116_lo;
V _v_7117_hi;
_v_7116_lo=j::builtin("Infinity");
_v_7117_hi=j::unary("-",j::builtin("Infinity"));
{for(const auto &_item10184:j::elements(_v_7106_list)){V _v_7118_v;
_v_7118_v=_item10184;
if(j::truth(([&]()->V{V _logical10185=([&]()->V{V _lhs10186=j::unary("typeof",_v_7118_v);V _rhs10187=this->_literals[8];return V(j::equal(_lhs10186,_rhs10187,true));})();return j::truth(_logical10185)?([&]()->V{V _receiver10188=j::builtin("Number");V _method10189=this->_literals[46];V _method=j::get(_receiver10188,_method10189);j::Args _params10190=j::Args{_v_7118_v};return j::call(_method,_params10190,_receiver10188);})():_logical10185;})())){(void)(((_v_7116_lo=([&]()->V{V _receiver10194=j::builtin("Math");V _method10195=this->_literals[33];V _method=j::get(_receiver10194,_method10195);j::Args _params10196=j::Args{_v_7116_lo,_v_7118_v};return j::call(_method,_params10196,_receiver10194);})()),(_v_7117_hi=([&]()->V{V _receiver10200=j::builtin("Math");V _method10201=this->_literals[34];V _method=j::get(_receiver10200,_method10201);j::Args _params10202=j::Args{_v_7117_hi,_v_7118_v};return j::call(_method,_params10202,_receiver10200);})())));
}
}}
if(j::truth(([&]()->V{V _lhs10203=_v_7116_lo;V _rhs10204=j::builtin("Infinity");return V(j::equal(_lhs10203,_rhs10204,true));})())){return V{};
}
if(j::truth(([&]()->V{V _lhs10205=_v_7116_lo;V _rhs10206=_v_7117_hi;return V(j::equal(_lhs10205,_rhs10206,true));})())){(void)(((_v_7116_lo=j::binary("-",_v_7116_lo,V(1.0))),(_v_7117_hi=j::binary("+",_v_7117_hi,V(1.0)))));
}
(void)((j::nullish(_v_7110_y0)?(_v_7110_y0=_v_7116_lo):_v_7110_y0));
(void)((j::nullish(_v_7111_y1)?(_v_7111_y1=_v_7117_hi):_v_7111_y1));

}

(void)((j::nullish(_v_7110_y0)?(_v_7110_y0=j::unary("-",V(1.0))):_v_7110_y0));
(void)((j::nullish(_v_7111_y1)?(_v_7111_y1=V(1.0)):_v_7111_y1));
if(j::truth(([&]()->V{V _lhs10213=_v_7110_y0;V _rhs10214=_v_7111_y1;return V(j::equal(_lhs10213,_rhs10214,true));})())){(void)(([&]()->V{V _callee10216=this->_v_6338_fail.get();return j::call(_callee10216,j::Args{([&]()->V{std::u16string _text10215;_text10215+=u"plot's y0 and y1 take two different numbers, the values at the bottom and the top, not ";_text10215+=j::string(_v_7110_y0);_text10215+=u" and ";_text10215+=j::string(_v_7111_y1);_text10215+=u"";return V(std::move(_text10215));})()});})());
}
_v_7119_w=j::get(_receiver_fn7103,this->_literals[62]);
_v_7120_h=j::get(_receiver_fn7103,this->_literals[63]);
_v_7121_n=(j::truth(_v_7106_list)?j::get(_v_7106_list,this->_literals[12]):_v_7119_w);
_v_7122_top=(j::truth(_v_7114_fill)?([&]()->V{V _receiver10217=([&]()->V{V _callee10220=j::builtin("Int32Array");return j::construct(_callee10220,j::Args{_v_7119_w});})();V _method10218=this->_literals[81];V _method=j::get(_receiver10217,_method10218);j::Args _params10219=j::Args{_v_7120_h};return j::call(_method,_params10219,_receiver10217);})():V::null());
_v_7123_px=V(0.0);
_v_7124_py=j::builtin("NaN");
{V _v_7125_i;
_v_7125_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs10221=_v_7125_i;V _rhs10222=_v_7121_n;return j::binary("<",_lhs10221,_rhs10222);})());(void)(j::increment(_v_7125_i,1,false))){
V _v_7126_v;
V _v_7127_x;
V _v_7128_y;
_v_7126_v=(j::truth(_v_7106_list)?j::get(_v_7106_list,_v_7125_i):([&]()->V{V _callee10238=_v_7104_f;return j::call(_callee10238,j::Args{([&]()->V{V _lhs10223=_v_7107_x0;V _rhs10224=([&]()->V{V _lhs10225=([&]()->V{V _lhs10227=([&]()->V{V _lhs10229=_v_7108_x1;V _rhs10230=_v_7107_x0;return V(j::number(_lhs10229)-j::number(_rhs10230));})();V _rhs10228=_v_7125_i;return V(j::number(_lhs10227)*j::number(_rhs10228));})();V _rhs10226=([&]()->V{V _receiver10235=j::builtin("Math");V _method10236=this->_literals[34];V _method=j::get(_receiver10235,_method10236);j::Args _params10237=j::Args{V(1.0),([&]()->V{V _lhs10231=_v_7119_w;V _rhs10232=V(1.0);return V(j::number(_lhs10231)-j::number(_rhs10232));})()};return j::call(_method,_params10237,_receiver10235);})();return V(j::number(_lhs10225)/j::number(_rhs10226));})();return j::binary("+",_lhs10223,_rhs10224);})()});})());
_v_7127_x=(j::truth(_v_7106_list)?(j::truth(([&]()->V{V _lhs10239=_v_7121_n;V _rhs10240=V(1.0);return j::binary(">",_lhs10239,_rhs10240);})())?([&]()->V{V _number10249=([&]()->V{V _lhs10250=([&]()->V{V _lhs10252=_v_7125_i;V _rhs10253=([&]()->V{V _lhs10254=_v_7119_w;V _rhs10255=V(1.0);return V(j::number(_lhs10254)-j::number(_rhs10255));})();return V(j::number(_lhs10252)*j::number(_rhs10253));})();V _rhs10251=([&]()->V{V _lhs10256=_v_7121_n;V _rhs10257=V(1.0);return V(j::number(_lhs10256)-j::number(_rhs10257));})();return V(j::number(_lhs10250)/j::number(_rhs10251));})();return V(std::floor(j::number(_number10249)+.5));})():V(0.0)):_v_7125_i);
_v_7128_y=(j::truth(([&]()->V{V _logical10258=([&]()->V{V _lhs10259=j::unary("typeof",_v_7126_v);V _rhs10260=this->_literals[8];return V(j::equal(_lhs10259,_rhs10260,true));})();return j::truth(_logical10258)?([&]()->V{V _receiver10261=j::builtin("Number");V _method10262=this->_literals[46];V _method=j::get(_receiver10261,_method10262);j::Args _params10263=j::Args{_v_7126_v};return j::call(_method,_params10263,_receiver10261);})():_logical10258;})())?([&]()->V{V _number10274=([&]()->V{V _lhs10275=([&]()->V{V _lhs10277=([&]()->V{V _lhs10279=_v_7111_y1;V _rhs10280=_v_7126_v;return V(j::number(_lhs10279)-j::number(_rhs10280));})();V _rhs10278=([&]()->V{V _lhs10281=_v_7111_y1;V _rhs10282=_v_7110_y0;return V(j::number(_lhs10281)-j::number(_rhs10282));})();return V(j::number(_lhs10277)/j::number(_rhs10278));})();V _rhs10276=([&]()->V{V _lhs10283=_v_7120_h;V _rhs10284=V(1.0);return V(j::number(_lhs10283)-j::number(_rhs10284));})();return V(j::number(_lhs10275)*j::number(_rhs10276));})();return V(std::floor(j::number(_number10274)+.5));})():j::builtin("NaN"));
if(j::truth(([&]()->V{V _receiver10285=j::builtin("Number");V _method10286=this->_literals[46];V _method=j::get(_receiver10285,_method10286);j::Args _params10287=j::Args{_v_7128_y};return j::call(_method,_params10287,_receiver10285);})())){
V _v_7129_m;
_v_7129_m=(j::truth(([&]()->V{V _receiver10288=j::builtin("Number");V _method10289=this->_literals[46];V _method=j::get(_receiver10288,_method10289);j::Args _params10290=j::Args{_v_7124_py};return j::call(_method,_params10290,_receiver10288);})())?([&]()->V{V _callee10291=this->_v_6392_trace.get();return j::call(_callee10291,j::Args{_v_7123_px,_v_7124_py,_v_7127_x,_v_7128_y,_v_7119_w,_v_7120_h});})():([&]()->V{V _callee10292=this->_v_6392_trace.get();return j::call(_callee10292,j::Args{_v_7127_x,_v_7128_y,_v_7127_x,_v_7128_y,_v_7119_w,_v_7120_h});})());
{V _v_7130_d;
_v_7130_d=V(0.0);
for(;j::truth(([&]()->V{V _lhs10293=_v_7130_d;V _rhs10294=_v_7129_m;return j::binary("<",_lhs10293,_rhs10294);})());(void)(j::increment(_v_7130_d,1,false))){(void)(([&]()->V{V _receiver10295=_receiver_fn7103;V _method10296=this->_literals[130];V _method=j::get(_receiver10295,_method10296);j::Args _params10297=j::Args{j::get(this->_v_6390_XS.get(),_v_7130_d),j::get(this->_v_6391_YS.get(),_v_7130_d),_v_7115_k};return j::call(_method,_params10297,_receiver10295);})());
}}
if(j::truth(_v_7122_top)){
V _v_7131_a;
V _v_7132_ya;
_v_7131_a=(j::truth(([&]()->V{V _receiver10298=j::builtin("Number");V _method10299=this->_literals[46];V _method=j::get(_receiver10298,_method10299);j::Args _params10300=j::Args{_v_7124_py};return j::call(_method,_params10300,_receiver10298);})())?_v_7123_px:_v_7127_x);
_v_7132_ya=(j::truth(([&]()->V{V _receiver10301=j::builtin("Number");V _method10302=this->_literals[46];V _method=j::get(_receiver10301,_method10302);j::Args _params10303=j::Args{_v_7124_py};return j::call(_method,_params10303,_receiver10301);})())?_v_7124_py:_v_7128_y);
{V _v_7133_c;
_v_7133_c=([&]()->V{V _receiver10311=j::builtin("Math");V _method10312=this->_literals[34];V _method=j::get(_receiver10311,_method10312);j::Args _params10313=j::Args{V(0.0),([&]()->V{V _receiver10306=j::builtin("Math");V _method10307=this->_literals[33];V _method=j::get(_receiver10306,_method10307);j::Args _params10308=j::Args{_v_7131_a,_v_7127_x};return j::call(_method,_params10308,_receiver10306);})()};return j::call(_method,_params10313,_receiver10311);})();
for(;j::truth(([&]()->V{V _lhs10314=_v_7133_c;V _rhs10315=([&]()->V{V _receiver10325=j::builtin("Math");V _method10326=this->_literals[33];V _method=j::get(_receiver10325,_method10326);j::Args _params10327=j::Args{([&]()->V{V _lhs10316=_v_7119_w;V _rhs10317=V(1.0);return V(j::number(_lhs10316)-j::number(_rhs10317));})(),([&]()->V{V _receiver10320=j::builtin("Math");V _method10321=this->_literals[34];V _method=j::get(_receiver10320,_method10321);j::Args _params10322=j::Args{_v_7131_a,_v_7127_x};return j::call(_method,_params10322,_receiver10320);})()};return j::call(_method,_params10327,_receiver10325);})();return j::binary("<=",_lhs10314,_rhs10315);})());(void)(j::increment(_v_7133_c,1,false))){
V _v_7134_yc;
_v_7134_yc=(j::truth(([&]()->V{V _lhs10328=_v_7131_a;V _rhs10329=_v_7127_x;return V(j::equal(_lhs10328,_rhs10329,true));})())?([&]()->V{V _receiver10332=j::builtin("Math");V _method10333=this->_literals[33];V _method=j::get(_receiver10332,_method10333);j::Args _params10334=j::Args{_v_7132_ya,_v_7128_y};return j::call(_method,_params10334,_receiver10332);})():([&]()->V{V _lhs10335=_v_7132_ya;V _rhs10336=([&]()->V{V _lhs10337=([&]()->V{V _lhs10339=([&]()->V{V _lhs10341=_v_7128_y;V _rhs10342=_v_7132_ya;return V(j::number(_lhs10341)-j::number(_rhs10342));})();V _rhs10340=([&]()->V{V _lhs10343=_v_7133_c;V _rhs10344=_v_7131_a;return V(j::number(_lhs10343)-j::number(_rhs10344));})();return V(j::number(_lhs10339)*j::number(_rhs10340));})();V _rhs10338=([&]()->V{V _lhs10345=_v_7127_x;V _rhs10346=_v_7131_a;return V(j::number(_lhs10345)-j::number(_rhs10346));})();return V(j::number(_lhs10337)/j::number(_rhs10338));})();return j::binary("+",_lhs10335,_rhs10336);})());
(void)(([&]()->V{V _base10348=_v_7122_top;V _key10349=_v_7133_c;V _assign10347=([&]()->V{V _receiver10358=j::builtin("Math");V _method10359=this->_literals[33];V _method=j::get(_receiver10358,_method10359);j::Args _params10360=j::Args{j::get(_v_7122_top,_v_7133_c),([&]()->V{V _receiver10353=j::builtin("Math");V _method10354=this->_literals[34];V _method=j::get(_receiver10353,_method10354);j::Args _params10355=j::Args{j::unary("-",V(1.0)),([&]()->V{V _number10350=_v_7134_yc;return V(std::floor(j::number(_number10350)+.5));})()};return j::call(_method,_params10355,_receiver10353);})()};return j::call(_method,_params10360,_receiver10358);})();return j::put(_base10348,_key10349,_assign10347);})());

}
}

}


}

(void)((_v_7123_px=_v_7127_x));
(void)((_v_7124_py=_v_7128_y));

}
}
if(j::truth(_v_7122_top)){{V _v_7135_c;
_v_7135_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs10363=_v_7135_c;V _rhs10364=_v_7119_w;return j::binary("<",_lhs10363,_rhs10364);})());(void)(j::increment(_v_7135_c,1,false))){{V _v_7136_r;
_v_7136_r=([&]()->V{V _receiver10367=j::builtin("Math");V _method10368=this->_literals[34];V _method=j::get(_receiver10367,_method10368);j::Args _params10369=j::Args{V(0.0),j::get(_v_7122_top,_v_7135_c)};return j::call(_method,_params10369,_receiver10367);})();
for(;j::truth(([&]()->V{V _lhs10370=_v_7136_r;V _rhs10371=_v_7120_h;return j::binary("<",_lhs10370,_rhs10371);})());(void)(j::increment(_v_7136_r,1,false))){(void)(([&]()->V{V _receiver10372=_receiver_fn7103;V _method10373=this->_literals[130];V _method=j::get(_receiver10372,_method10373);j::Args _params10374=j::Args{_v_7135_c,_v_7136_r,_v_7115_k};return j::call(_method,_params10374,_receiver10372);})());
}}
}}
}

}

return V{};
},2),false,"method");j::class_method(_class9949,this->_literals[141],j::function([=](const j::Args &_args_fn7137,const V &_receiver_fn7137,const V &_self_fn7137) mutable ->V{
{
(void)(([&]()->V{V _receiver10375=j::get(_receiver_fn7137,this->_literals[128]);V _method10376=this->_literals[81];V _method=j::get(_receiver10375,_method10376);j::Args _params10377=j::Args{V(0.0)};return j::call(_method,_params10377,_receiver10375);})());
(void)(([&]()->V{V _receiver10378=j::get(_receiver_fn7137,this->_literals[129]);V _method10379=this->_literals[81];V _method=j::get(_receiver10378,_method10379);j::Args _params10380=j::Args{this->_v_6334_NONE.get()};return j::call(_method,_params10380,_receiver10378);})());

}

return V{};
},0),false,"method");j::class_method(_class9949,this->_literals[142],j::function([=](const j::Args &_args_fn7138,const V &_receiver_fn7138,const V &_self_fn7138) mutable ->V{
{
V _v_7139_s;
V _v_7140_x;
V _v_7141_y;
V _v_7142_cols;
V _v_7143_rows;
_v_7139_s=j::get(_receiver_fn7138,this->_literals[126]);
V _pattern10381=j::get(_receiver_fn7138,this->_literals[127]);
_v_7140_x=j::get(_pattern10381,this->_literals[29]);
_v_7141_y=j::get(_pattern10381,this->_literals[30]);
_v_7142_cols=j::get(_pattern10381,this->_literals[31]);
_v_7143_rows=j::get(_pattern10381,this->_literals[32]);
{V _v_7144_r;
_v_7144_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs10382=_v_7144_r;V _rhs10383=_v_7143_rows;return j::binary("<",_lhs10382,_rhs10383);})());(void)(j::increment(_v_7144_r,1,false))){{V _v_7145_c;
_v_7145_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs10384=_v_7145_c;V _rhs10385=_v_7142_cols;return j::binary("<",_lhs10384,_rhs10385);})());(void)(j::increment(_v_7145_c,1,false))){
V _v_7146_i;
V _v_7147_b;
_v_7146_i=([&]()->V{V _lhs10386=([&]()->V{V _lhs10388=_v_7144_r;V _rhs10389=_v_7142_cols;return V(j::number(_lhs10388)*j::number(_rhs10389));})();V _rhs10387=_v_7145_c;return j::binary("+",_lhs10386,_rhs10387);})();
_v_7147_b=j::get(j::get(_receiver_fn7138,this->_literals[128]),_v_7146_i);
if(j::truth(_v_7147_b)){(void)(([&]()->V{V _receiver10400=_v_7139_s;V _method10401=this->_literals[3];V _method=j::get(_receiver10400,_method10401);j::Args _params10402=j::Args{([&]()->V{V _lhs10390=([&]()->V{V _lhs10392=([&]()->V{V _lhs10394=([&]()->V{V _lhs10396=_v_7141_y;V _rhs10397=_v_7144_r;return j::binary("+",_lhs10396,_rhs10397);})();V _rhs10395=j::get(_v_7139_s,this->_literals[31]);return V(j::number(_lhs10394)*j::number(_rhs10395));})();V _rhs10393=_v_7140_x;return j::binary("+",_lhs10392,_rhs10393);})();V _rhs10391=_v_7145_c;return j::binary("+",_lhs10390,_rhs10391);})(),([&]()->V{V _lhs10398=V(10240.0);V _rhs10399=_v_7147_b;return j::binary("+",_lhs10398,_rhs10399);})(),j::get(j::get(_receiver_fn7138,this->_literals[129]),_v_7146_i)};return j::call(_method,_params10402,_receiver10400);})());
}

}
}
}}

}

return V{};
},0),false,"method");}
this->_v_7164_UPPER.get()=V(9600.0);
this->_v_7165_LOWER.get()=V(9604.0);
this->_v_7166_FULL.get()=V(9608.0);
{V _base10403=V{};V _class10404=j::make_class("PixelCanvas",_base10403,j::function([=](const j::Args &_args_fn7178,const V &_receiver_fn7178,const V &_self_fn7178) mutable ->V{
j::put(_receiver_fn7178,this->_literals[62],V{});j::put(_receiver_fn7178,this->_literals[63],V{});j::put(_receiver_fn7178,this->_literals[38],V{});j::put(_receiver_fn7178,this->_literals[126],V{});_receiver_fn7178.data->hidden.insert(j::string(this->_literals[126]));j::put(_receiver_fn7178,this->_literals[127],V{});_receiver_fn7178.data->hidden.insert(j::string(this->_literals[127]));j::put(_receiver_fn7178,this->_literals[143],V{});_receiver_fn7178.data->hidden.insert(j::string(this->_literals[143]));V _v_7179_s;
V _v_7180_r;
_v_7179_s=_args_fn7178[0];
_v_7180_r=_args_fn7178[1];
{
(void)(([&]()->V{V _base10406=_receiver_fn7178;V _key10407=this->_literals[126];V _assign10405=_v_7179_s;return j::put(_base10406,_key10407,_assign10405);})());
(void)(([&]()->V{V _base10409=_receiver_fn7178;V _key10410=this->_literals[127];V _assign10408=_v_7180_r;return j::put(_base10409,_key10410,_assign10408);})());
(void)(([&]()->V{V _base10412=_receiver_fn7178;V _key10413=this->_literals[62];V _assign10411=j::get(_v_7180_r,this->_literals[31]);return j::put(_base10412,_key10413,_assign10411);})());
(void)(([&]()->V{V _base10415=_receiver_fn7178;V _key10416=this->_literals[63];V _assign10414=([&]()->V{V _lhs10417=j::get(_v_7180_r,this->_literals[32]);V _rhs10418=V(2.0);return V(j::number(_lhs10417)*j::number(_rhs10418));})();return j::put(_base10415,_key10416,_assign10414);})());
(void)(([&]()->V{V _base10420=_receiver_fn7178;V _key10421=this->_literals[38];V _assign10419=([&]()->V{V _lhs10422=j::get(_v_7179_s,this->_literals[38]);V _rhs10423=V(2.0);return V(j::number(_lhs10422)/j::number(_rhs10423));})();return j::put(_base10420,_key10421,_assign10419);})());
(void)(([&]()->V{V _base10425=_receiver_fn7178;V _key10426=this->_literals[143];V _assign10424=([&]()->V{V _callee10429=j::builtin("Uint16Array");return j::construct(_callee10429,j::Args{([&]()->V{V _lhs10427=j::get(_receiver_fn7178,this->_literals[62]);V _rhs10428=j::get(_receiver_fn7178,this->_literals[63]);return V(j::number(_lhs10427)*j::number(_rhs10428));})()});})();return j::put(_base10425,_key10426,_assign10424);})());

}

return V{};
},2));this->_v_7177_PixelCanvas.get()=_class10404;j::class_method(_class10404,this->_literals[144],j::function([=](const j::Args &_args_fn7181,const V &_receiver_fn7181,const V &_self_fn7181) mutable ->V{
V _v_7182_x;
V _v_7183_y;
V _v_7184_k;
_v_7182_x=_args_fn7181[0];
_v_7183_y=_args_fn7181[1];
_v_7184_k=_args_fn7181[2];
{
if(j::truth(([&]()->V{V _logical10430=([&]()->V{V _logical10431=([&]()->V{V _logical10432=([&]()->V{V _lhs10433=_v_7182_x;V _rhs10434=V(0.0);return j::binary(">=",_lhs10433,_rhs10434);})();return j::truth(_logical10432)?([&]()->V{V _lhs10435=_v_7183_y;V _rhs10436=V(0.0);return j::binary(">=",_lhs10435,_rhs10436);})():_logical10432;})();return j::truth(_logical10431)?([&]()->V{V _lhs10437=_v_7182_x;V _rhs10438=j::get(_receiver_fn7181,this->_literals[62]);return j::binary("<",_lhs10437,_rhs10438);})():_logical10431;})();return j::truth(_logical10430)?([&]()->V{V _lhs10439=_v_7183_y;V _rhs10440=j::get(_receiver_fn7181,this->_literals[63]);return j::binary("<",_lhs10439,_rhs10440);})():_logical10430;})())){(void)(([&]()->V{V _base10442=j::get(_receiver_fn7181,this->_literals[143]);V _key10443=([&]()->V{V _lhs10444=([&]()->V{V _lhs10446=_v_7183_y;V _rhs10447=j::get(_receiver_fn7181,this->_literals[62]);return V(j::number(_lhs10446)*j::number(_rhs10447));})();V _rhs10445=_v_7182_x;return j::binary("+",_lhs10444,_rhs10445);})();V _assign10441=([&]()->V{V _lhs10448=_v_7184_k;V _rhs10449=V(1.0);return j::binary("+",_lhs10448,_rhs10449);})();return j::put(_base10442,_key10443,_assign10441);})());
}

}

return V{};
},3),false,"method");j::class_method(_class10404,this->_literals[41],j::function([=](const j::Args &_args_fn7185,const V &_receiver_fn7185,const V &_self_fn7185) mutable ->V{
V _v_7186_x;
V _v_7187_y;
V _v_7188_color;
_v_7186_x=_args_fn7185[0];
_v_7187_y=_args_fn7185[1];
_v_7188_color=_args_fn7185[2];
{
V _v_7189_k;
_v_7189_k=([&]()->V{V _callee10450=this->_v_6345_paint.get();return j::call(_callee10450,j::Args{j::get(_receiver_fn7185,this->_literals[126]),_v_7188_color});})();
if(j::truth(([&]()->V{V _callee10451=this->_v_6353_finite.get();return j::call(_callee10451,j::Args{_v_7186_x,_v_7187_y});})())){(void)(([&]()->V{V _receiver10454=_receiver_fn7185;V _method10455=this->_literals[144];V _method=j::get(_receiver10454,_method10455);j::Args _params10456=j::Args{([&]()->V{V _number10452=_v_7186_x;return V(std::floor(j::number(_number10452)));})(),([&]()->V{V _number10453=_v_7187_y;return V(std::floor(j::number(_number10453)));})(),_v_7189_k};return j::call(_method,_params10456,_receiver10454);})());
}

}

return V{};
},3),false,"method");j::class_method(_class10404,this->_literals[132],j::function([=](const j::Args &_args_fn7190,const V &_receiver_fn7190,const V &_self_fn7190) mutable ->V{
V _v_7191_x;
V _v_7192_y;
_v_7191_x=_args_fn7190[0];
_v_7192_y=_args_fn7190[1];
{
if(j::truth(([&]()->V{V _receiver10457=_receiver_fn7190;V _method10458=this->_literals[36];V _method=j::get(_receiver10457,_method10458);j::Args _params10459=j::Args{_v_7191_x,_v_7192_y};return j::call(_method,_params10459,_receiver10457);})())){(void)(([&]()->V{V _base10461=j::get(_receiver_fn7190,this->_literals[143]);V _key10462=([&]()->V{V _lhs10463=([&]()->V{V _lhs10465=([&]()->V{V _number10467=_v_7192_y;return V(std::floor(j::number(_number10467)));})();V _rhs10466=j::get(_receiver_fn7190,this->_literals[62]);return V(j::number(_lhs10465)*j::number(_rhs10466));})();V _rhs10464=([&]()->V{V _number10468=_v_7191_x;return V(std::floor(j::number(_number10468)));})();return j::binary("+",_lhs10463,_rhs10464);})();V _assign10460=V(0.0);return j::put(_base10461,_key10462,_assign10460);})());
}

}

return V{};
},2),false,"method");j::class_method(_class10404,this->_literals[36],j::function([=](const j::Args &_args_fn7193,const V &_receiver_fn7193,const V &_self_fn7193) mutable ->V{
V _v_7194_x;
V _v_7195_y;
_v_7194_x=_args_fn7193[0];
_v_7195_y=_args_fn7193[1];
{
if(j::truth(j::unary("!",([&]()->V{V _callee10469=this->_v_6353_finite.get();return j::call(_callee10469,j::Args{_v_7194_x,_v_7195_y});})()))){return V(false);
}
(void)((_v_7194_x=([&]()->V{V _number10471=_v_7194_x;return V(std::floor(j::number(_number10471)));})()));
(void)((_v_7195_y=([&]()->V{V _number10473=_v_7195_y;return V(std::floor(j::number(_number10473)));})()));
return ([&]()->V{V _logical10474=([&]()->V{V _logical10475=([&]()->V{V _logical10476=([&]()->V{V _logical10477=([&]()->V{V _lhs10478=_v_7194_x;V _rhs10479=V(0.0);return j::binary(">=",_lhs10478,_rhs10479);})();return j::truth(_logical10477)?([&]()->V{V _lhs10480=_v_7195_y;V _rhs10481=V(0.0);return j::binary(">=",_lhs10480,_rhs10481);})():_logical10477;})();return j::truth(_logical10476)?([&]()->V{V _lhs10482=_v_7194_x;V _rhs10483=j::get(_receiver_fn7193,this->_literals[62]);return j::binary("<",_lhs10482,_rhs10483);})():_logical10476;})();return j::truth(_logical10475)?([&]()->V{V _lhs10484=_v_7195_y;V _rhs10485=j::get(_receiver_fn7193,this->_literals[63]);return j::binary("<",_lhs10484,_rhs10485);})():_logical10475;})();return j::truth(_logical10474)?([&]()->V{V _lhs10486=j::get(j::get(_receiver_fn7193,this->_literals[143]),([&]()->V{V _lhs10488=([&]()->V{V _lhs10490=_v_7195_y;V _rhs10491=j::get(_receiver_fn7193,this->_literals[62]);return V(j::number(_lhs10490)*j::number(_rhs10491));})();V _rhs10489=_v_7194_x;return j::binary("+",_lhs10488,_rhs10489);})());V _rhs10487=V(0.0);return V(!j::equal(_lhs10486,_rhs10487,true));})():_logical10474;})();

}

return V{};
},2),false,"method");j::class_method(_class10404,this->_literals[70],j::function([=](const j::Args &_args_fn7196,const V &_receiver_fn7196,const V &_self_fn7196) mutable ->V{
V _v_7197_x0;
V _v_7198_y0;
V _v_7199_x1;
V _v_7200_y1;
V _v_7201_color;
_v_7197_x0=_args_fn7196[0];
_v_7198_y0=_args_fn7196[1];
_v_7199_x1=_args_fn7196[2];
_v_7200_y1=_args_fn7196[3];
_v_7201_color=_args_fn7196[4];
{
V _v_7202_k;
V _v_7203_n;
_v_7202_k=([&]()->V{V _callee10492=this->_v_6345_paint.get();return j::call(_callee10492,j::Args{j::get(_receiver_fn7196,this->_literals[126]),_v_7201_color});})();
_v_7203_n=([&]()->V{V _callee10493=this->_v_6392_trace.get();return j::call(_callee10493,j::Args{_v_7197_x0,_v_7198_y0,_v_7199_x1,_v_7200_y1,j::get(_receiver_fn7196,this->_literals[62]),j::get(_receiver_fn7196,this->_literals[63])});})();
{V _v_7204_i;
_v_7204_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs10494=_v_7204_i;V _rhs10495=_v_7203_n;return j::binary("<",_lhs10494,_rhs10495);})());(void)(j::increment(_v_7204_i,1,false))){(void)(([&]()->V{V _receiver10496=_receiver_fn7196;V _method10497=this->_literals[144];V _method=j::get(_receiver10496,_method10497);j::Args _params10498=j::Args{j::get(this->_v_6390_XS.get(),_v_7204_i),j::get(this->_v_6391_YS.get(),_v_7204_i),_v_7202_k};return j::call(_method,_params10498,_receiver10496);})());
}}

}

return V{};
},5),false,"method");j::class_method(_class10404,this->_literals[78],j::function([=](const j::Args &_args_fn7205,const V &_receiver_fn7205,const V &_self_fn7205) mutable ->V{
V _v_7206_x;
V _v_7207_y;
V _v_7208_length;
V _v_7209_turn;
V _v_7210_color;
_v_7206_x=_args_fn7205[0];
_v_7207_y=_args_fn7205[1];
_v_7208_length=_args_fn7205[2];
_v_7209_turn=_args_fn7205[3];
_v_7210_color=_args_fn7205[4];
{
V _v_7211_x1;
V _v_7212_y1;
V _pattern10500=([&]()->V{V _callee10499=this->_v_6703_around.get();return j::call(_callee10499,j::Args{_receiver_fn7205,_v_7206_x,_v_7207_y,_v_7208_length,_v_7209_turn});})();
_v_7211_x1=j::get(_pattern10500,V(0));
_v_7212_y1=j::get(_pattern10500,V(1));
(void)(([&]()->V{V _receiver10501=_receiver_fn7205;V _method10502=this->_literals[70];V _method=j::get(_receiver10501,_method10502);j::Args _params10503=j::Args{_v_7206_x,_v_7207_y,_v_7211_x1,_v_7212_y1,_v_7210_color};return j::call(_method,_params10503,_receiver10501);})());

}

return V{};
},5),false,"method");j::class_method(_class10404,this->_literals[79],j::function([=](const j::Args &_args_fn7213,const V &_receiver_fn7213,const V &_self_fn7213) mutable ->V{
V _v_7214_x;
V _v_7215_y;
V _v_7216_w;
V _v_7217_h;
V _v_7218_o;
_v_7214_x=_args_fn7213[0];
_v_7215_y=_args_fn7213[1];
_v_7216_w=_args_fn7213[2];
_v_7217_h=_args_fn7213[3];
_v_7218_o=_args_fn7213[4];
{
V _v_7219_fill;
V _v_7220_color;
j::Cell _v_7221_k;
V _pattern10505=([&]()->V{V _callee10504=this->_v_7020_canvasOpts.get();return j::call(_callee10504,j::Args{_v_7218_o,this->_literals[79]});})();
_v_7219_fill=j::get(_pattern10505,this->_literals[81]);
_v_7220_color=j::get(_pattern10505,this->_literals[57]);
_v_7221_k.get()=([&]()->V{V _callee10506=this->_v_6345_paint.get();return j::call(_callee10506,j::Args{j::get(_receiver_fn7213,this->_literals[126]),_v_7220_color});})();
(void)(([&]()->V{V _callee10510=this->_v_7148_boxDots.get();return j::call(_callee10510,j::Args{_v_7214_x,_v_7215_y,_v_7216_w,_v_7217_h,_v_7219_fill,j::function([=](const j::Args &_args_fn7222,const V &_receiver_fn7222,const V &_self_fn7222) mutable ->V{
V _v_7223_px;
V _v_7224_py;
_v_7223_px=_args_fn7222[0];
_v_7224_py=_args_fn7222[1];
return ([&]()->V{V _receiver10507=_receiver_fn7213;V _method10508=this->_literals[144];V _method=j::get(_receiver10507,_method10508);j::Args _params10509=j::Args{_v_7223_px,_v_7224_py,_v_7221_k.get()};return j::call(_method,_params10509,_receiver10507);})();
return V{};
},2),j::get(_receiver_fn7213,this->_literals[62]),j::get(_receiver_fn7213,this->_literals[63])});})());

}

return V{};
},5),false,"method");j::class_method(_class10404,this->_literals[89],j::function([=](const j::Args &_args_fn7225,const V &_receiver_fn7225,const V &_self_fn7225) mutable ->V{
V _v_7226_cx;
V _v_7227_cy;
V _v_7228_r;
V _v_7229_o;
_v_7226_cx=_args_fn7225[0];
_v_7227_cy=_args_fn7225[1];
_v_7228_r=_args_fn7225[2];
_v_7229_o=_args_fn7225[3];
{
V _v_7230_fill;
V _v_7231_color;
j::Cell _v_7232_k;
V _pattern10512=([&]()->V{V _callee10511=this->_v_7020_canvasOpts.get();return j::call(_callee10511,j::Args{_v_7229_o,this->_literals[89]});})();
_v_7230_fill=j::get(_pattern10512,this->_literals[81]);
_v_7231_color=j::get(_pattern10512,this->_literals[57]);
_v_7232_k.get()=([&]()->V{V _callee10513=this->_v_6345_paint.get();return j::call(_callee10513,j::Args{j::get(_receiver_fn7225,this->_literals[126]),_v_7231_color});})();
(void)(([&]()->V{V _callee10519=this->_v_6786_ellipseCells.get();return j::call(_callee10519,j::Args{j::get(_receiver_fn7225,this->_literals[62]),j::get(_receiver_fn7225,this->_literals[63]),_v_7226_cx,_v_7227_cy,_v_7228_r,([&]()->V{V _lhs10514=_v_7228_r;V _rhs10515=j::get(_receiver_fn7225,this->_literals[38]);return V(j::number(_lhs10514)/j::number(_rhs10515));})(),_v_7230_fill,j::function([=](const j::Args &_args_fn7233,const V &_receiver_fn7233,const V &_self_fn7233) mutable ->V{
V _v_7234_x;
V _v_7235_y;
_v_7234_x=_args_fn7233[0];
_v_7235_y=_args_fn7233[1];
return ([&]()->V{V _receiver10516=_receiver_fn7225;V _method10517=this->_literals[144];V _method=j::get(_receiver10516,_method10517);j::Args _params10518=j::Args{_v_7234_x,_v_7235_y,_v_7232_k.get()};return j::call(_method,_params10518,_receiver10516);})();
return V{};
},2)});})());

}

return V{};
},4),false,"method");j::class_method(_class10404,this->_literals[91],j::function([=](const j::Args &_args_fn7236,const V &_receiver_fn7236,const V &_self_fn7236) mutable ->V{
V _v_7237_cx;
V _v_7238_cy;
V _v_7239_r;
V _v_7240_from;
V _v_7241_to;
V _v_7242_o;
_v_7237_cx=_args_fn7236[0];
_v_7238_cy=_args_fn7236[1];
_v_7239_r=_args_fn7236[2];
_v_7240_from=_args_fn7236[3];
_v_7241_to=_args_fn7236[4];
_v_7242_o=_args_fn7236[5];
{
V _v_7243_fill;
V _v_7244_color;
j::Cell _v_7245_k;
V _pattern10521=([&]()->V{V _callee10520=this->_v_7020_canvasOpts.get();return j::call(_callee10520,j::Args{_v_7242_o,this->_literals[91]});})();
_v_7243_fill=j::get(_pattern10521,this->_literals[81]);
_v_7244_color=j::get(_pattern10521,this->_literals[57]);
_v_7245_k.get()=([&]()->V{V _callee10522=this->_v_6345_paint.get();return j::call(_callee10522,j::Args{j::get(_receiver_fn7236,this->_literals[126]),_v_7244_color});})();
(void)(([&]()->V{V _callee10529=this->_v_6786_ellipseCells.get();return j::call(_callee10529,j::Args{j::get(_receiver_fn7236,this->_literals[62]),j::get(_receiver_fn7236,this->_literals[63]),_v_7237_cx,_v_7238_cy,_v_7239_r,([&]()->V{V _lhs10523=_v_7239_r;V _rhs10524=j::get(_receiver_fn7236,this->_literals[38]);return V(j::number(_lhs10523)/j::number(_rhs10524));})(),_v_7243_fill,j::function([=](const j::Args &_args_fn7246,const V &_receiver_fn7246,const V &_self_fn7246) mutable ->V{
V _v_7247_x;
V _v_7248_y;
_v_7247_x=_args_fn7246[0];
_v_7248_y=_args_fn7246[1];
return ([&]()->V{V _receiver10525=_receiver_fn7236;V _method10526=this->_literals[144];V _method=j::get(_receiver10525,_method10526);j::Args _params10527=j::Args{_v_7247_x,_v_7248_y,_v_7245_k.get()};return j::call(_method,_params10527,_receiver10525);})();
return V{};
},2),V(0.0),_v_7240_from,([&]()->V{V _callee10528=this->_v_6888_sweep.get();return j::call(_callee10528,j::Args{_v_7240_from,_v_7241_to});})()});})());

}

return V{};
},6),false,"method");j::class_method(_class10404,this->_literals[145],j::function([=](const j::Args &_args_fn7249,const V &_receiver_fn7249,const V &_self_fn7249) mutable ->V{
V _v_7250_art;
V _v_7251_colors;
j::Cell _v_7252_x;
j::Cell _v_7253_y;
V _v_7254_o;
_v_7250_art=_args_fn7249[0];
_v_7251_colors=_args_fn7249[1];
_v_7252_x.get()=_args_fn7249[2];
_v_7253_y.get()=_args_fn7249[3];
_v_7254_o=_args_fn7249[4];
{
V _v_7255_frames;
V _v_7258_frame;
V _v_7259_across;
j::Cell _v_7260_wrap;
j::Cell _v_7261_ink;
V _v_7263_count;
V _v_7264_f;
V _v_7265_sheet;
j::Cell _v_7266_fw;
j::Cell _v_7270_from;
V _v_7271_rows;
j::Cell _v_7274_w;
j::Cell _v_7275_h;
_v_7255_frames=(j::truth(([&]()->V{V _receiver10530=j::builtin("Array");V _method10531=this->_literals[17];V _method=j::get(_receiver10530,_method10531);j::Args _params10532=j::Args{_v_7250_art};return j::call(_method,_params10532,_receiver10530);})())?_v_7250_art:([&]()->V{j::Args _array10533;_array10533.push_back(_v_7250_art);return j::array(std::move(_array10533));})());
if(j::truth(j::unary("!",([&]()->V{V _receiver10536=_v_7255_frames;V _method10537=this->_literals[94];V _method=j::get(_receiver10536,_method10537);j::Args _params10538=j::Args{j::function([=](const j::Args &_args_fn7256,const V &_receiver_fn7256,const V &_self_fn7256) mutable ->V{
V _v_7257_f;
_v_7257_f=_args_fn7256[0];
return ([&]()->V{V _lhs10534=j::unary("typeof",_v_7257_f);V _rhs10535=this->_literals[11];return V(j::equal(_lhs10534,_rhs10535,true));})();
return V{};
},1)};return j::call(_method,_params10538,_receiver10536);})()))){(void)(([&]()->V{V _callee10539=this->_v_6338_fail.get();return j::call(_callee10539,j::Args{this->_literals[146]});})());
}
if(j::truth(([&]()->V{V _logical10540=([&]()->V{V _lhs10541=_v_7251_colors;V _rhs10542=V::null();return V(j::equal(_lhs10541,_rhs10542,true));})();return !j::truth(_logical10540)?([&]()->V{V _lhs10543=j::unary("typeof",_v_7251_colors);V _rhs10544=this->_literals[0];return V(!j::equal(_lhs10543,_rhs10544,true));})():_logical10540;})())){(void)(([&]()->V{V _callee10545=this->_v_6338_fail.get();return j::call(_callee10545,j::Args{this->_literals[147]});})());
}
V _pattern10547=([&]()->V{V _callee10546=this->_v_6376_opts.get();return j::call(_callee10546,j::Args{_v_7254_o,this->_literals[145]});})();
V _default10548=j::get(_pattern10547,this->_literals[148]);if(_default10548.kind==V::Undefined||_default10548.kind==V::Hole)_default10548=V(0.0);
_v_7258_frame=_default10548;
V _default10549=j::get(_pattern10547,this->_literals[149]);if(_default10549.kind==V::Undefined||_default10549.kind==V::Hole)_default10549=V(1.0);
_v_7259_across=_default10549;
if(j::truth(([&]()->V{V _lhs10550=j::unary("typeof",_v_7258_frame);V _rhs10551=this->_literals[8];return V(!j::equal(_lhs10550,_rhs10551,true));})())){(void)(([&]()->V{V _callee10554=this->_v_6338_fail.get();return j::call(_callee10554,j::Args{([&]()->V{std::u16string _text10552;_text10552+=u"sprite's frame takes a number, such as t * 4 for four frames a second, not ";_text10552+=j::string(([&]()->V{V _callee10553=this->_v_6358_show.get();return j::call(_callee10553,j::Args{_v_7258_frame});})());_text10552+=u"";return V(std::move(_text10552));})()});})());
}
if(j::truth(([&]()->V{V _logical10555=j::unary("!",([&]()->V{V _receiver10556=j::builtin("Number");V _method10557=this->_literals[9];V _method=j::get(_receiver10556,_method10557);j::Args _params10558=j::Args{_v_7259_across};return j::call(_method,_params10558,_receiver10556);})());return !j::truth(_logical10555)?([&]()->V{V _lhs10559=_v_7259_across;V _rhs10560=V(1.0);return j::binary("<",_lhs10559,_rhs10560);})():_logical10555;})())){(void)(([&]()->V{V _callee10563=this->_v_6338_fail.get();return j::call(_callee10563,j::Args{([&]()->V{std::u16string _text10561;_text10561+=u"sprite's frames takes a whole number of frames side by side, 1 or more, not ";_text10561+=j::string(([&]()->V{V _callee10562=this->_v_6358_show.get();return j::call(_callee10562,j::Args{_v_7259_across});})());_text10561+=u"";return V(std::move(_text10561));})()});})());
}
_v_7260_wrap.get()=([&]()->V{V _callee10566=this->_v_6380_yes.get();return j::call(_callee10566,j::Args{([&]()->V{V _chain10564=_v_7254_o;if(j::nullish(_chain10564))return V{};V _chain10565=j::get(_chain10564,this->_literals[66]);return _chain10565;})(),this->_literals[150],V(false)});})();
_v_7261_ink.get()=([&]()->V{V _callee10567=j::builtin("Map");return j::construct(_callee10567,j::Args{});})();
{for(const auto &_item10568:j::elements(([&]()->V{V _receiver10569=j::builtin("Object");V _method10570=this->_literals[40];V _method=j::get(_receiver10569,_method10570);j::Args _params10571=j::Args{_v_7251_colors};return j::call(_method,_params10571,_receiver10569);})())){V _v_7262_ch;
_v_7262_ch=_item10568;
{
if(j::truth(([&]()->V{V _lhs10572=j::get(_v_7262_ch,this->_literals[12]);V _rhs10573=V(1.0);return V(!j::equal(_lhs10572,_rhs10573,true));})())){(void)(([&]()->V{V _callee10576=this->_v_6338_fail.get();return j::call(_callee10576,j::Args{([&]()->V{std::u16string _text10574;_text10574+=u"sprite()'s colours take one character of the art each, such as { r: \"#e11d48\" }, not ";_text10574+=j::string(([&]()->V{V _callee10575=this->_v_6358_show.get();return j::call(_callee10575,j::Args{_v_7262_ch});})());_text10574+=u"";return V(std::move(_text10574));})()});})());
}
(void)(([&]()->V{V _receiver10578=_v_7261_ink.get();V _method10579=this->_literals[41];V _method=j::get(_receiver10578,_method10579);j::Args _params10580=j::Args{_v_7262_ch,([&]()->V{V _callee10577=this->_v_6345_paint.get();return j::call(_callee10577,j::Args{j::get(_receiver_fn7249,this->_literals[126]),j::get(_v_7251_colors,_v_7262_ch)});})()};return j::call(_method,_params10580,_receiver10578);})());

}
}}
if(j::truth(([&]()->V{V _logical10581=j::unary("!",j::get(_v_7255_frames,this->_literals[12]));return !j::truth(_logical10581)?j::unary("!",([&]()->V{V _callee10582=this->_v_6353_finite.get();return j::call(_callee10582,j::Args{_v_7252_x.get(),_v_7253_y.get()});})()):_logical10581;})())){return V{};
}
_v_7263_count=([&]()->V{V _lhs10583=j::get(_v_7255_frames,this->_literals[12]);V _rhs10584=_v_7259_across;return V(j::number(_lhs10583)*j::number(_rhs10584));})();
_v_7264_f=([&]()->V{V _lhs10585=([&]()->V{V _lhs10587=([&]()->V{V _lhs10589=([&]()->V{V _number10594=(j::truth(([&]()->V{V _receiver10595=j::builtin("Number");V _method10596=this->_literals[46];V _method=j::get(_receiver10595,_method10596);j::Args _params10597=j::Args{_v_7258_frame};return j::call(_method,_params10597,_receiver10595);})())?_v_7258_frame:V(0.0));return V(std::floor(j::number(_number10594)));})();V _rhs10590=_v_7263_count;return V(std::fmod(j::number(_lhs10589),j::number(_rhs10590)));})();V _rhs10588=_v_7263_count;return j::binary("+",_lhs10587,_rhs10588);})();V _rhs10586=_v_7263_count;return V(std::fmod(j::number(_lhs10585),j::number(_rhs10586)));})();
_v_7265_sheet=([&]()->V{V _callee10603=this->_v_7167_artRows.get();return j::call(_callee10603,j::Args{j::get(_v_7255_frames,([&]()->V{V _number10600=([&]()->V{V _lhs10601=_v_7264_f;V _rhs10602=_v_7259_across;return V(j::number(_lhs10601)/j::number(_rhs10602));})();return V(std::floor(j::number(_number10600)));})())});})();
_v_7266_fw.get()=([&]()->V{V _number10614=([&]()->V{V _lhs10615=([&]()->V{V _receiver10622=_v_7265_sheet;V _method10623=this->_literals[100];V _method=j::get(_receiver10622,_method10623);j::Args _params10624=j::Args{j::function([=](const j::Args &_args_fn7267,const V &_receiver_fn7267,const V &_self_fn7267) mutable ->V{
V _v_7268_n;
V _v_7269_l;
_v_7268_n=_args_fn7267[0];
_v_7269_l=_args_fn7267[1];
return ([&]()->V{V _receiver10619=j::builtin("Math");V _method10620=this->_literals[34];V _method=j::get(_receiver10619,_method10620);j::Args _params10621=j::Args{_v_7268_n,j::get(_v_7269_l,this->_literals[12])};return j::call(_method,_params10621,_receiver10619);})();
return V{};
},2),V(0.0)};return j::call(_method,_params10624,_receiver10622);})();V _rhs10616=_v_7259_across;return V(j::number(_lhs10615)/j::number(_rhs10616));})();return V(std::ceil(j::number(_number10614)));})();
_v_7270_from.get()=([&]()->V{V _lhs10625=([&]()->V{V _lhs10627=_v_7264_f;V _rhs10628=_v_7259_across;return V(std::fmod(j::number(_lhs10627),j::number(_rhs10628)));})();V _rhs10626=_v_7266_fw.get();return V(j::number(_lhs10625)*j::number(_rhs10626));})();
_v_7271_rows=(j::truth(([&]()->V{V _lhs10629=_v_7259_across;V _rhs10630=V(1.0);return V(j::equal(_lhs10629,_rhs10630,true));})())?_v_7265_sheet:([&]()->V{V _receiver10636=_v_7265_sheet;V _method10637=this->_literals[25];V _method=j::get(_receiver10636,_method10637);j::Args _params10638=j::Args{j::function([=](const j::Args &_args_fn7272,const V &_receiver_fn7272,const V &_self_fn7272) mutable ->V{
V _v_7273_l;
_v_7273_l=_args_fn7272[0];
return ([&]()->V{V _receiver10633=_v_7273_l;V _method10634=this->_literals[13];V _method=j::get(_receiver10633,_method10634);j::Args _params10635=j::Args{_v_7270_from.get(),([&]()->V{V _lhs10631=_v_7270_from.get();V _rhs10632=_v_7266_fw.get();return j::binary("+",_lhs10631,_rhs10632);})()};return j::call(_method,_params10635,_receiver10633);})();
return V{};
},1)};return j::call(_method,_params10638,_receiver10636);})());
_v_7274_w.get()=j::get(_receiver_fn7249,this->_literals[62]);
_v_7275_h.get()=j::get(_receiver_fn7249,this->_literals[63]);
(void)((_v_7252_x.get()=([&]()->V{V _number10640=_v_7252_x.get();return V(std::floor(j::number(_number10640)));})()));
(void)((_v_7253_y.get()=([&]()->V{V _number10642=_v_7253_y.get();return V(std::floor(j::number(_number10642)));})()));
(void)(([&]()->V{V _receiver10677=_v_7271_rows;V _method10678=this->_literals[51];V _method=j::get(_receiver10677,_method10678);j::Args _params10679=j::Args{j::function([=](const j::Args &_args_fn7276,const V &_receiver_fn7276,const V &_self_fn7276) mutable ->V{
V _v_7277_row;
V _v_7278_r;
_v_7277_row=_args_fn7276[0];
_v_7278_r=_args_fn7276[1];
{
{V _v_7279_c;
_v_7279_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs10643=_v_7279_c;V _rhs10644=j::get(_v_7277_row,this->_literals[12]);return j::binary("<",_lhs10643,_rhs10644);})());(void)(j::increment(_v_7279_c,1,false))){
V _v_7280_ch;
V _v_7281_px;
V _v_7282_py;
_v_7280_ch=j::get(_v_7277_row,_v_7279_c);
if(j::truth(([&]()->V{V _logical10645=([&]()->V{V _lhs10646=_v_7280_ch;V _rhs10647=this->_literals[151];return V(j::equal(_lhs10646,_rhs10647,true));})();return !j::truth(_logical10645)?([&]()->V{V _lhs10648=_v_7280_ch;V _rhs10649=this->_literals[54];return V(j::equal(_lhs10648,_rhs10649,true));})():_logical10645;})())){continue;
}
_v_7281_px=(j::truth(_v_7260_wrap.get())?([&]()->V{V _lhs10650=([&]()->V{V _lhs10652=([&]()->V{V _lhs10654=([&]()->V{V _lhs10656=_v_7252_x.get();V _rhs10657=_v_7279_c;return j::binary("+",_lhs10656,_rhs10657);})();V _rhs10655=_v_7274_w.get();return V(std::fmod(j::number(_lhs10654),j::number(_rhs10655)));})();V _rhs10653=_v_7274_w.get();return j::binary("+",_lhs10652,_rhs10653);})();V _rhs10651=_v_7274_w.get();return V(std::fmod(j::number(_lhs10650),j::number(_rhs10651)));})():([&]()->V{V _lhs10658=_v_7252_x.get();V _rhs10659=_v_7279_c;return j::binary("+",_lhs10658,_rhs10659);})());
_v_7282_py=(j::truth(_v_7260_wrap.get())?([&]()->V{V _lhs10660=([&]()->V{V _lhs10662=([&]()->V{V _lhs10664=([&]()->V{V _lhs10666=_v_7253_y.get();V _rhs10667=_v_7278_r;return j::binary("+",_lhs10666,_rhs10667);})();V _rhs10665=_v_7275_h.get();return V(std::fmod(j::number(_lhs10664),j::number(_rhs10665)));})();V _rhs10663=_v_7275_h.get();return j::binary("+",_lhs10662,_rhs10663);})();V _rhs10661=_v_7275_h.get();return V(std::fmod(j::number(_lhs10660),j::number(_rhs10661)));})():([&]()->V{V _lhs10668=_v_7253_y.get();V _rhs10669=_v_7278_r;return j::binary("+",_lhs10668,_rhs10669);})());
(void)(([&]()->V{V _receiver10674=_receiver_fn7249;V _method10675=this->_literals[144];V _method=j::get(_receiver10674,_method10675);j::Args _params10676=j::Args{_v_7281_px,_v_7282_py,([&]()->V{V _logical10670=([&]()->V{V _receiver10671=_v_7261_ink.get();V _method10672=this->_literals[36];V _method=j::get(_receiver10671,_method10672);j::Args _params10673=j::Args{_v_7280_ch};return j::call(_method,_params10673,_receiver10671);})();return j::nullish(_logical10670)?this->_v_6334_NONE.get():_logical10670;})()};return j::call(_method,_params10676,_receiver10674);})());

}
}

}

return V{};
},2)};return j::call(_method,_params10679,_receiver10677);})());

}

return V{};
},5),false,"method");j::class_method(_class10404,this->_literals[141],j::function([=](const j::Args &_args_fn7283,const V &_receiver_fn7283,const V &_self_fn7283) mutable ->V{
{
(void)(([&]()->V{V _receiver10680=j::get(_receiver_fn7283,this->_literals[143]);V _method10681=this->_literals[81];V _method=j::get(_receiver10680,_method10681);j::Args _params10682=j::Args{V(0.0)};return j::call(_method,_params10682,_receiver10680);})());

}

return V{};
},0),false,"method");j::class_method(_class10404,this->_literals[142],j::function([=](const j::Args &_args_fn7284,const V &_receiver_fn7284,const V &_self_fn7284) mutable ->V{
{
V _v_7285_s;
V _v_7286_x;
V _v_7287_y;
V _v_7288_cols;
V _v_7289_rows;
V _v_7290_w;
V _v_7291_px;
_v_7285_s=j::get(_receiver_fn7284,this->_literals[126]);
V _pattern10683=j::get(_receiver_fn7284,this->_literals[127]);
_v_7286_x=j::get(_pattern10683,this->_literals[29]);
_v_7287_y=j::get(_pattern10683,this->_literals[30]);
_v_7288_cols=j::get(_pattern10683,this->_literals[31]);
_v_7289_rows=j::get(_pattern10683,this->_literals[32]);
_v_7290_w=j::get(_receiver_fn7284,this->_literals[62]);
_v_7291_px=j::get(_receiver_fn7284,this->_literals[143]);
{V _v_7292_r;
_v_7292_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs10684=_v_7292_r;V _rhs10685=_v_7289_rows;return j::binary("<",_lhs10684,_rhs10685);})());(void)(j::increment(_v_7292_r,1,false))){{V _v_7293_c;
_v_7293_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs10686=_v_7293_c;V _rhs10687=_v_7288_cols;return j::binary("<",_lhs10686,_rhs10687);})());(void)(j::increment(_v_7293_c,1,false))){
V _v_7294_up;
V _v_7295_down;
V _v_7296_j;
_v_7294_up=j::get(_v_7291_px,([&]()->V{V _lhs10688=([&]()->V{V _lhs10690=([&]()->V{V _lhs10692=V(2.0);V _rhs10693=_v_7292_r;return V(j::number(_lhs10692)*j::number(_rhs10693));})();V _rhs10691=_v_7290_w;return V(j::number(_lhs10690)*j::number(_rhs10691));})();V _rhs10689=_v_7293_c;return j::binary("+",_lhs10688,_rhs10689);})());
_v_7295_down=j::get(_v_7291_px,([&]()->V{V _lhs10694=([&]()->V{V _lhs10696=([&]()->V{V _lhs10698=([&]()->V{V _lhs10700=V(2.0);V _rhs10701=_v_7292_r;return V(j::number(_lhs10700)*j::number(_rhs10701));})();V _rhs10699=V(1.0);return j::binary("+",_lhs10698,_rhs10699);})();V _rhs10697=_v_7290_w;return V(j::number(_lhs10696)*j::number(_rhs10697));})();V _rhs10695=_v_7293_c;return j::binary("+",_lhs10694,_rhs10695);})());
if(j::truth(([&]()->V{V _logical10702=j::unary("!",_v_7294_up);return j::truth(_logical10702)?j::unary("!",_v_7295_down):_logical10702;})())){continue;
}
_v_7296_j=([&]()->V{V _lhs10703=([&]()->V{V _lhs10705=([&]()->V{V _lhs10707=([&]()->V{V _lhs10709=_v_7287_y;V _rhs10710=_v_7292_r;return j::binary("+",_lhs10709,_rhs10710);})();V _rhs10708=j::get(_v_7285_s,this->_literals[31]);return V(j::number(_lhs10707)*j::number(_rhs10708));})();V _rhs10706=_v_7286_x;return j::binary("+",_lhs10705,_rhs10706);})();V _rhs10704=_v_7293_c;return j::binary("+",_lhs10703,_rhs10704);})();
if(j::truth(([&]()->V{V _logical10711=_v_7294_up;return j::truth(_logical10711)?_v_7295_down:_logical10711;})())){(void)(([&]()->V{V _receiver10714=_v_7285_s;V _method10715=this->_literals[3];V _method=j::get(_receiver10714,_method10715);j::Args _params10716=j::Args{_v_7296_j,this->_v_7166_FULL.get(),([&]()->V{V _lhs10712=_v_7294_up;V _rhs10713=V(1.0);return V(j::number(_lhs10712)-j::number(_rhs10713));})()};return j::call(_method,_params10716,_receiver10714);})());
}else {if(j::truth(_v_7294_up)){(void)(([&]()->V{V _receiver10719=_v_7285_s;V _method10720=this->_literals[3];V _method=j::get(_receiver10719,_method10720);j::Args _params10721=j::Args{_v_7296_j,this->_v_7164_UPPER.get(),([&]()->V{V _lhs10717=_v_7294_up;V _rhs10718=V(1.0);return V(j::number(_lhs10717)-j::number(_rhs10718));})()};return j::call(_method,_params10721,_receiver10719);})());
}else {(void)(([&]()->V{V _receiver10724=_v_7285_s;V _method10725=this->_literals[3];V _method=j::get(_receiver10724,_method10725);j::Args _params10726=j::Args{_v_7296_j,this->_v_7165_LOWER.get(),([&]()->V{V _lhs10722=_v_7295_down;V _rhs10723=V(1.0);return V(j::number(_lhs10722)-j::number(_rhs10723));})()};return j::call(_method,_params10726,_receiver10724);})());
}
}

}
}
}}

}

return V{};
},0),false,"method");}
}
};
}
std::unique_ptr<Module> new_kit_draw(){return std::make_unique<Generated_kit_draw>();}
}
