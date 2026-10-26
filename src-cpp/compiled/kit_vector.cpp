// Native source generated from src/kit/vector.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_vector final:j::Module {
j::Cell _v_50439_EMPTY;
j::Cell _v_50440_INK;
j::Cell _v_50441_MAX;
j::Cell _v_50442_NONE;
j::Cell _v_50443_Surface;
j::Cell _v_50444_TAU;
j::Cell _v_50445_and;
j::Cell _v_50446_asPiece;
j::Cell _v_50447_clamp;
j::Cell _v_50448_code;
j::Cell _v_50449_named;
j::Cell _v_50450_fail;
j::Cell _v_50451_fract;
j::Cell _v_50452_hex;
j::Cell _v_50453_isHex;
j::Cell _v_50454_materialColors;
j::Cell _v_50455_mergePalettes;
j::Cell _v_50456_piece;
j::Cell _v_50457_rgb;
j::Cell _v_50458_sample;
j::Cell _v_50459_schemes;
j::Cell _v_50460_NAME;
j::Cell _v_50461_ATTR;
j::Cell _v_50462_ENTITY;
j::Cell _v_50463_NAMED_ENTITY;
j::Cell _v_50464_codePoint;
j::Cell _v_50467_entities;
j::Cell _v_50473_local;
j::Cell _v_50476_xml;
j::Cell _v_50500_PROPS;
j::Cell _v_50501_declarations;
j::Cell _v_50508_stylesheet;
j::Cell _v_50532_NAMED;
j::Cell _v_50538_unit;
j::Cell _v_50542_hslToRgb;
j::Cell _v_50554_color;
j::Cell _v_50576_IDENTITY;
j::Cell _v_50577_mul;
j::Cell _v_50581_about;
j::Cell _v_50589_invert;
j::Cell _v_50597_transform;
j::Cell _v_50610_MOVE;
j::Cell _v_50611_LINE;
j::Cell _v_50612_CURVE;
j::Cell _v_50613_CLOSE;
j::Cell _v_50614_KAPPA;
j::Cell _v_50615_arc;
j::Cell _v_50666_NUMBER;
j::Cell _v_50667_FLAG;
j::Cell _v_50668_COMMAND;
j::Cell _v_50669_ARGS;
j::Cell _v_50670_pathOps;
j::Cell _v_50707_len;
j::Cell _v_50714_numbers;
j::Cell _v_50717_shapeOps;
j::Cell _v_50745_moved;
j::Cell _v_50756_flatten;
j::Cell _v_50797_bounds;
j::Cell _v_50807_SHAPES;
j::Cell _v_50808_GROUPS;
j::Cell _v_50809_LEFT_OUT;
j::Cell _v_50810_MOST;
j::Cell _v_50811_MOST_SHAPES;
j::Cell _v_50812_MOST_SEGMENTS;
j::Cell _v_50813_MOST_MARKUP;
j::Cell _v_50814_DEEP;
j::Cell _v_50815_parseSvg;
j::Cell _v_50973_ORIGINS;
j::Cell _v_50974_MOTIONS;
j::Cell _v_50975_traceWindow;
j::Cell _v_50984_TRACE_HELD;
j::Cell _v_50985_isPartMaterial;
j::Cell _v_50989_isSource;
j::Cell _v_50992_OPTIONS;
j::Cell _v_50993_PART_KEYS;
j::Cell _v_50994_STYLES;
j::Cell _v_50995_whole;
j::Cell _v_51001_above0;
j::Cell _v_51005_finite;
j::Cell _v_51009_oneChar;
j::Cell _v_51013_SHAPE_TABLE;
j::Cell _v_51014_GLYPH_CODES;
j::Cell _v_51017_GLYPH_INK;
j::Cell _v_51020_SOLID;
j::Cell _v_51023_SLASH;
j::Cell _v_51024_QUARTERS;
j::Cell _v_51025_PAGE;
j::Cell _v_51026_LIGHT;
j::Cell _v_51027_lum;
j::Cell _v_51033_contrast;
j::Cell _v_51037_toHsl;
j::Cell _v_51051_greyish;
j::Cell _v_51054_lift;
j::Cell _v_51065_white;
j::Cell _v_51069_PAPER;
j::Cell _v_51070_sink;
j::Cell _v_51080_tint;
j::Cell _v_51086_Raster;
j::Cell _v_51146_sortFirst;
j::Cell _v_51153_disc;
j::Cell _v_51161_oriented;
j::Cell _v_51170_strokePieces;
j::Cell _v_51207_subdivide;
j::Cell _v_51226_lineChar;
j::Cell _v_51231_loopOf;
j::Cell _v_51241_num;
j::Cell _v_51245_motionAt;
j::Cell _v_51269_partOf;
j::Cell _v_51313_matches;
j::Cell _v_51336_plan;
j::Cell _v_51880_pick;
j::Cell _v_51899_planOptions;
j::Cell _v_51923_drawOptions;
j::Cell _v_51930_svgOf;
j::Cell _v_51933_partCells;
j::Cell _v_52010_fringeChar;
j::Cell _v_52017_edgeChar;
j::Cell _v_52045_fillParts;
j::Cell _v_52076_fromSvg;
j::Cell _v_52138_parsed;
j::Cell _v_52139_plans;
j::Cell _v_52140_identities;
j::Cell _v_52141_identity;
j::Cell _v_52142_keyOf;
j::Cell _v_52150_svgPalette;
j::Cell _v_52158_drawSvg;
std::vector<V> _literals;
Generated_kit_vector():_v_50439_EMPTY(this->slot("EMPTY")),_v_50440_INK(this->slot("INK")),_v_50441_MAX(this->slot("MAX")),_v_50442_NONE(this->slot("NONE")),_v_50443_Surface(this->slot("Surface")),_v_50444_TAU(this->slot("TAU")),_v_50445_and(this->slot("and")),_v_50446_asPiece(this->slot("asPiece")),_v_50447_clamp(this->slot("clamp")),_v_50448_code(this->slot("code")),_v_50449_named(this->slot("named")),_v_50450_fail(this->slot("fail")),_v_50451_fract(this->slot("fract")),_v_50452_hex(this->slot("hex")),_v_50453_isHex(this->slot("isHex")),_v_50454_materialColors(this->slot("materialColors")),_v_50455_mergePalettes(this->slot("mergePalettes")),_v_50456_piece(this->slot("piece")),_v_50457_rgb(this->slot("rgb")),_v_50458_sample(this->slot("sample")),_v_50459_schemes(this->slot("schemes")),_v_50460_NAME(this->slot("NAME")),_v_50461_ATTR(this->slot("ATTR")),_v_50462_ENTITY(this->slot("ENTITY")),_v_50463_NAMED_ENTITY(this->slot("NAMED_ENTITY")),_v_50464_codePoint(this->slot("codePoint")),_v_50467_entities(this->slot("entities")),_v_50473_local(this->slot("local")),_v_50476_xml(this->slot("xml")),_v_50500_PROPS(this->slot("PROPS")),_v_50501_declarations(this->slot("declarations")),_v_50508_stylesheet(this->slot("stylesheet")),_v_50532_NAMED(this->slot("NAMED")),_v_50538_unit(this->slot("unit")),_v_50542_hslToRgb(this->slot("hslToRgb")),_v_50554_color(this->slot("color")),_v_50576_IDENTITY(this->slot("IDENTITY")),_v_50577_mul(this->slot("mul")),_v_50581_about(this->slot("about")),_v_50589_invert(this->slot("invert")),_v_50597_transform(this->slot("transform")),_v_50610_MOVE(this->slot("MOVE")),_v_50611_LINE(this->slot("LINE")),_v_50612_CURVE(this->slot("CURVE")),_v_50613_CLOSE(this->slot("CLOSE")),_v_50614_KAPPA(this->slot("KAPPA")),_v_50615_arc(this->slot("arc")),_v_50666_NUMBER(this->slot("NUMBER")),_v_50667_FLAG(this->slot("FLAG")),_v_50668_COMMAND(this->slot("COMMAND")),_v_50669_ARGS(this->slot("ARGS")),_v_50670_pathOps(this->slot("pathOps")),_v_50707_len(this->slot("len")),_v_50714_numbers(this->slot("numbers")),_v_50717_shapeOps(this->slot("shapeOps")),_v_50745_moved(this->slot("moved")),_v_50756_flatten(this->slot("flatten")),_v_50797_bounds(this->slot("bounds")),_v_50807_SHAPES(this->slot("SHAPES")),_v_50808_GROUPS(this->slot("GROUPS")),_v_50809_LEFT_OUT(this->slot("LEFT_OUT")),_v_50810_MOST(this->slot("MOST")),_v_50811_MOST_SHAPES(this->slot("MOST_SHAPES")),_v_50812_MOST_SEGMENTS(this->slot("MOST_SEGMENTS")),_v_50813_MOST_MARKUP(this->slot("MOST_MARKUP")),_v_50814_DEEP(this->slot("DEEP")),_v_50815_parseSvg(this->slot("parseSvg")),_v_50973_ORIGINS(this->slot("ORIGINS")),_v_50974_MOTIONS(this->slot("MOTIONS")),_v_50975_traceWindow(this->slot("traceWindow")),_v_50984_TRACE_HELD(this->slot("TRACE_HELD")),_v_50985_isPartMaterial(this->slot("isPartMaterial")),_v_50989_isSource(this->slot("isSource")),_v_50992_OPTIONS(this->slot("OPTIONS")),_v_50993_PART_KEYS(this->slot("PART_KEYS")),_v_50994_STYLES(this->slot("STYLES")),_v_50995_whole(this->slot("whole")),_v_51001_above0(this->slot("above0")),_v_51005_finite(this->slot("finite")),_v_51009_oneChar(this->slot("oneChar")),_v_51013_SHAPE_TABLE(this->slot("SHAPE_TABLE")),_v_51014_GLYPH_CODES(this->slot("GLYPH_CODES")),_v_51017_GLYPH_INK(this->slot("GLYPH_INK")),_v_51020_SOLID(this->slot("SOLID")),_v_51023_SLASH(this->slot("SLASH")),_v_51024_QUARTERS(this->slot("QUARTERS")),_v_51025_PAGE(this->slot("PAGE")),_v_51026_LIGHT(this->slot("LIGHT")),_v_51027_lum(this->slot("lum")),_v_51033_contrast(this->slot("contrast")),_v_51037_toHsl(this->slot("toHsl")),_v_51051_greyish(this->slot("greyish")),_v_51054_lift(this->slot("lift")),_v_51065_white(this->slot("white")),_v_51069_PAPER(this->slot("PAPER")),_v_51070_sink(this->slot("sink")),_v_51080_tint(this->slot("tint")),_v_51086_Raster(this->slot("Raster")),_v_51146_sortFirst(this->slot("sortFirst")),_v_51153_disc(this->slot("disc")),_v_51161_oriented(this->slot("oriented")),_v_51170_strokePieces(this->slot("strokePieces")),_v_51207_subdivide(this->slot("subdivide")),_v_51226_lineChar(this->slot("lineChar")),_v_51231_loopOf(this->slot("loopOf")),_v_51241_num(this->slot("num")),_v_51245_motionAt(this->slot("motionAt")),_v_51269_partOf(this->slot("partOf")),_v_51313_matches(this->slot("matches")),_v_51336_plan(this->slot("plan")),_v_51880_pick(this->slot("pick")),_v_51899_planOptions(this->slot("planOptions")),_v_51923_drawOptions(this->slot("drawOptions")),_v_51930_svgOf(this->slot("svgOf")),_v_51933_partCells(this->slot("partCells")),_v_52010_fringeChar(this->slot("fringeChar")),_v_52017_edgeChar(this->slot("edgeChar")),_v_52045_fillParts(this->slot("fillParts")),_v_52076_fromSvg(this->slot("fromSvg")),_v_52138_parsed(this->slot("parsed")),_v_52139_plans(this->slot("plans")),_v_52140_identities(this->slot("identities")),_v_52141_identity(this->slot("identity")),_v_52142_keyOf(this->slot("keyOf")),_v_52150_svgPalette(this->slot("svgPalette")),_v_52158_drawSvg(this->slot("drawSvg")),_literals{V(u"name"),
V(u""),
V(u"attrs"),
V(u"kids"),
V(u"text"),
V(u"length"),
V(u"<"),
V(u"indexOf"),
V(u"slice"),
V(u"<!--"),
V(u"startsWith"),
V(u"-->"),
V(u"<![CDATA["),
V(u"]]>"),
V(u"?"),
V(u"?>"),
V(u"!"),
V(u"["),
V(u"]"),
V(u">"),
V(u"/"),
V(u"trim"),
V(u"lastIndex"),
V(u"exec"),
V(u"test"),
V(u"push"),
V(u";"),
V(u"split"),
V(u":"),
V(u"toLowerCase"),
V(u"has"),
V(u"replace"),
V(u"{"),
V(u"}"),
V(u"lastIndexOf"),
V(u"@"),
V(u","),
V(u"*"),
V(u"match"),
V(u"#"),
V(u"filter"),
V(u"map"),
V(u"."),
V(u"tag"),
V(u"id"),
V(u"classes"),
V(u"rank"),
V(u"decls"),
V(u"none"),
V(u"transparent"),
V(u"c"),
V(u"a"),
V(u"currentcolor"),
V(u"currentColor"),
V(u"get"),
V(u"join"),
V(u"rgb"),
V(u"isFinite"),
V(u"some"),
V(u"PI"),
V(u"matrix"),
V(u"translate"),
V(u"scale"),
V(u"rotate"),
V(u"skewx"),
V(u"skewy"),
V(u"max"),
V(u"Z"),
V(u"z"),
V(u"toUpperCase"),
V(u"A"),
V(u"isNaN"),
V(u"M"),
V(u"L"),
V(u"H"),
V(u"V"),
V(u"C"),
V(u"S"),
V(u"Q"),
V(u"T"),
V(u"l"),
V(u"px"),
V(u"pt"),
V(u"pc"),
V(u"mm"),
V(u"cm"),
V(u"in"),
V(u"em"),
V(u"ex"),
V(u"%"),
V(u"path"),
V(u"rect"),
V(u"circle"),
V(u"ellipse"),
V(u"line"),
V(u"polyline"),
V(u"polygon"),
V(u"d"),
V(u"x"),
V(u"y"),
V(u"width"),
V(u"height"),
V(u"rx"),
V(u"auto"),
V(u"ry"),
V(u"cx"),
V(u"cy"),
V(u"r"),
V(u"x1"),
V(u"y1"),
V(u"x2"),
V(u"y2"),
V(u"points"),
V(u"from"),
V(u"pts"),
V(u"closed"),
V(u"min"),
V(u"string"),
V(u"null"),
V(u"reverse"),
V(u"pop"),
V(u"svg"),
V(u"fromSvg takes SVG markup, an <svg> element with shapes inside it, such as <svg viewBox=\"0 0 24 24\"><circle cx=\"12\" cy=\"12\" r=\"9\"/></svg>"),
V(u"set"),
V(u"style"),
V(u"title"),
V(u"find"),
V(u" "),
V(u"sort"),
V(u"viewBox"),
V(u"fill"),
V(u"stroke"),
V(u"class"),
V(u"includes"),
V(u"every"),
V(u"stop"),
V(u"href"),
V(u"xlink:href"),
V(u"stop-color"),
V(u"black"),
V(u"#000000"),
V(u"color"),
V(u"stop-opacity"),
V(u"1"),
V(u"reduce"),
V(u"pattern"),
V(u"elements"),
V(u"add"),
V(u"delete"),
V(u"display"),
V(u"inherit"),
V(u"strokeWidth"),
V(u"stroke-width"),
V(u"fillOpacity"),
V(u"fill-opacity"),
V(u"strokeOpacity"),
V(u"stroke-opacity"),
V(u"fillRule"),
V(u"fill-rule"),
V(u"evenodd"),
V(u"nonzero"),
V(u"cap"),
V(u"stroke-linecap"),
V(u"round"),
V(u"square"),
V(u"butt"),
V(u"visible"),
V(u"visibility"),
V(u"opacity"),
V(u"index"),
V(u"transform"),
V(u"use"),
V(u"symbol"),
V(u"foreignobject"),
V(u"foreignObject"),
V(u"marker-start"),
V(u"marker-mid"),
V(u"marker-end"),
V(u"marker"),
V(u"shapes"),
V(u"line segments"),
V(u"chain"),
V(u"ops"),
V(u"box"),
V(u"parts"),
V(u"skipped"),
V(u"subarray"),
V(u"rings"),
V(u"to"),
V(u"quad"),
V(u"total"),
V(u"of"),
V(u"offset"),
V(u"period"),
V(u"ox"),
V(u"oy"),
V(u"motion"),
V(u"spin"),
V(u"flip"),
V(u"bob"),
V(u"pulse"),
V(u"sway"),
V(u"blink"),
V(u"rise"),
V(u"pose"),
V(u"amount"),
V(u"fn"),
V(u"isArray"),
V(u"key"),
V(u"motions"),
V(u"origin"),
V(u"material"),
V(u"char"),
V(u"hide"),
V(u"keys"),
V(u"stringify"),
V(u"hasOwn"),
V(u"function"),
V(u"object"),
V(u"stagger"),
V(u"number"),
V(u"entries"),
V(u"colors"),
V(u"light"),
V(u"dark"),
V(u"forEach"),
V(u"owners"),
V(u"kind"),
V(u"all"),
V(u"size"),
V(u"colour"),
V(u"aspect"),
V(u" and more"),
V(u"it names no parts"),
V(u"findIndex"),
V(u"part"),
V(u"count"),
V(u"depth"),
V(u"owner"),
V(u"x0"),
V(u"y0"),
V(u"left"),
V(u"right"),
V(u"top"),
V(u"bottom"),
V(u"center"),
V(u"glint"),
V(u"trace"),
V(u"ripple"),
V(u"fit"),
V(u"margin"),
V(u"cols"),
V(u"rows"),
V(u"k"),
V(u"ink"),
V(u"fromSvg's motions move a part out to infinity: give a motion function numbers it can draw"),
V(u"outline"),
V(u"shape"),
V(u"alpha"),
V(u"lines"),
V(u"pieces"),
V(u"values"),
V(u"splice"),
V(u"charCodeAt"),
V(u"mover"),
V(u"moved"),
V(u"slot"),
V(u"group"),
V(u"knock"),
V(u"movers"),
V(u"moves"),
V(u"first"),
V(u"ids"),
V(u"W"),
V(u"t"),
V(u"m"),
V(u"cut"),
V(u"shown"),
V(u"ownOf"),
V(u"own"),
V(u"render"),
V(u"colourSlots"),
V(u"mono"),
V(u"covers"),
V(u"chars"),
V(u"slots"),
V(u"cover"),
V(u"runs"),
V(u"moving"),
V(u"periods"),
V(u"held"),
V(u"textured"),
V(u"draw"),
V(u"blocks"),
V(u"braille"),
V(u"drawSvg"),
V(u"fromSvg"),
V(u"note"),
V(u"category"),
V(u"fps"),
V(u"still"),
V(u"ground"),
V(u"region"),
V(u"isInteger"),
V(u"logo"),
V(u"boolean"),
V(u"fromSvg takes width or cols, not both: width sizes it by its shape, cols with rows fixes it"),
V(u"8"),
V(u"list"),
V(u"inside"),
V(u"border"),
V(u"fringe"),
V(u"cells"),
V(u"nx"),
V(u"ny"),
V(u"maxDepth"),
V(u"level"),
V(u"room"),
V(u"cavity"),
V(u"open"),
V(u"placed"),
V(u"_"),
V(u"'"),
V(u"-"),
V(u"("),
V(u"|"),
V(u")"),
V(u"\\"),
V(u"run"),
V(u"prepare"),
V(u"sampler"),
V(u"paper"),
V(u"at"),
V(u"put"),
V(u"under"),
V(u"s"),
V(u"src"),
V(u"meta"),
V(u"palette"),
V(u"maps"),
V(u"loop"),
V(u"vector"),
V(u"setup"),
V(u"svgPalette"),
V(u"drawSvg takes the grid to draw into first: drawSvg(s, svg, t)"),
V(u"next"),
V(u"value"),
V(u"clip"),
V(u"plan"),
V(u"drawer"),
V(u"fills"),
V(u"target"),
V(u"resolve"),
V(u"amp"),
V(u"&"),
V(u"lt"),
V(u"gt"),
V(u"quot"),
V(u"\""),
V(u"apos"),
V(u"fromCodePoint"),
V(u"X"),
V(u"aliceblue f0f8ff antiquewhite faebd7 aqua 00ffff aquamarine 7fffd4 azure f0ffff beige f5f5dc bisque ffe4c4 black 000000 "),
V(u"blanchedalmond ffebcd blue 0000ff blueviolet 8a2be2 brown a52a2a burlywood deb887 cadetblue 5f9ea0 chartreuse 7fff00 "),
V(u"chocolate d2691e coral ff7f50 cornflowerblue 6495ed cornsilk fff8dc crimson dc143c cyan 00ffff darkblue 00008b "),
V(u"darkcyan 008b8b darkgoldenrod b8860b darkgray a9a9a9 darkgreen 006400 darkgrey a9a9a9 darkkhaki bdb76b darkmagenta 8b008b "),
V(u"darkolivegreen 556b2f darkorange ff8c00 darkorchid 9932cc darkred 8b0000 darksalmon e9967a darkseagreen 8fbc8f "),
V(u"darkslateblue 483d8b darkslategray 2f4f4f darkslategrey 2f4f4f darkturquoise 00ced1 darkviolet 9400d3 deeppink ff1493 "),
V(u"deepskyblue 00bfff dimgray 696969 dimgrey 696969 dodgerblue 1e90ff firebrick b22222 floralwhite fffaf0 forestgreen 228b22 "),
V(u"fuchsia ff00ff gainsboro dcdcdc ghostwhite f8f8ff gold ffd700 goldenrod daa520 gray 808080 green 008000 greenyellow adff2f "),
V(u"grey 808080 honeydew f0fff0 hotpink ff69b4 indianred cd5c5c indigo 4b0082 ivory fffff0 khaki f0e68c lavender e6e6fa "),
V(u"lavenderblush fff0f5 lawngreen 7cfc00 lemonchiffon fffacd lightblue add8e6 lightcoral f08080 lightcyan e0ffff "),
V(u"lightgoldenrodyellow fafad2 lightgray d3d3d3 lightgreen 90ee90 lightgrey d3d3d3 lightpink ffb6c1 lightsalmon ffa07a "),
V(u"lightseagreen 20b2aa lightskyblue 87cefa lightslategray 778899 lightslategrey 778899 lightsteelblue b0c4de "),
V(u"lightyellow ffffe0 lime 00ff00 limegreen 32cd32 linen faf0e6 magenta ff00ff maroon 800000 mediumaquamarine 66cdaa "),
V(u"mediumblue 0000cd mediumorchid ba55d3 mediumpurple 9370db mediumseagreen 3cb371 mediumslateblue 7b68ee "),
V(u"mediumspringgreen 00fa9a mediumturquoise 48d1cc mediumvioletred c71585 midnightblue 191970 mintcream f5fffa "),
V(u"mistyrose ffe4e1 moccasin ffe4b5 navajowhite ffdead navy 000080 oldlace fdf5e6 olive 808000 olivedrab 6b8e23 "),
V(u"orange ffa500 orangered ff4500 orchid da70d6 palegoldenrod eee8aa palegreen 98fb98 paleturquoise afeeee "),
V(u"palevioletred db7093 papayawhip ffefd5 peachpuff ffdab9 peru cd853f pink ffc0cb plum dda0dd powderblue b0e0e6 "),
V(u"purple 800080 rebeccapurple 663399 red ff0000 rosybrown bc8f8f royalblue 4169e1 saddlebrown 8b4513 salmon fa8072 "),
V(u"sandybrown f4a460 seagreen 2e8b57 seashell fff5ee sienna a0522d silver c0c0c0 skyblue 87ceeb slateblue 6a5acd "),
V(u"slategray 708090 slategrey 708090 snow fffafa springgreen 00ff7f steelblue 4682b4 tan d2b48c teal 008080 thistle d8bfd8 "),
V(u"tomato ff6347 turquoise 40e0d0 violet ee82ee wheat f5deb3 white ffffff whitesmoke f5f5f5 yellow ffff00 yellowgreen 9acd32"),
V(u"endsWith"),
V(u"g"),
V(u"switch"),
V(u"image"),
V(u"top-left"),
V(u"top-right"),
V(u"bottom-left"),
V(u"bottom-right"),
V(u"default"),
V(u"^"),
V(u"~"),
V(u"="),
V(u"b"),
V(u"q"),
V(u"p"),
V(u"P"),
V(u"Y"),
V(u"o"),
V(u"O"),
V(u"0"),
V(u"flatMap"),
V(u"8dbqpPYOo0"),
V(u" ▘▝▀▖▌▞▛▗▚▐▜▄▙▟█"),
V(u"#ya"),
V(u"#yb"),
V(u"#xa"),
V(u"#dx"),
V(u"#dir"),
V(u"#order"),
V(u"#act"),
V(u"#up"),
V(u"#down"),
V(u"#grow"),
V(u"fromSvg takes SVG markup as a string, or what parseSvg() made of it")}{
this->exports["parseSvg"]=this->_v_50815_parseSvg;
this->exports["partCells"]=this->_v_51933_partCells;
this->exports["fromSvg"]=this->_v_52076_fromSvg;
this->exports["svgPalette"]=this->_v_52150_svgPalette;
this->exports["drawSvg"]=this->_v_52158_drawSvg;
}
void init() override{if(initialized)return;initialized=true;
this->_v_50476_xml.get()=j::function([=](const j::Args &_args_fn50477,const V &_receiver_fn50477,const V &_self_fn50477) mutable ->V{
V _v_50478_src;
_v_50478_src=_args_fn50477[0];
{
V _v_50479_root;
V _v_50480_stack;
V _v_50481_n;
V _v_50482_i;
_v_50479_root=([&]()->V{V _obj52195=j::object();j::put(_obj52195,this->_literals[0],this->_literals[1]);j::put(_obj52195,this->_literals[2],([&]()->V{V _obj52196=j::object();return _obj52196;})());j::put(_obj52195,this->_literals[3],([&]()->V{j::Args _array52197;return j::array(std::move(_array52197));})());j::put(_obj52195,this->_literals[4],this->_literals[1]);return _obj52195;})();
_v_50480_stack=([&]()->V{j::Args _array52198;_array52198.push_back(_v_50479_root);return j::array(std::move(_array52198));})();
_v_50481_n=j::get(_v_50478_src,this->_literals[5]);
_v_50482_i=V(0.0);
while(j::truth(([&]()->V{V _lhs52199=_v_50482_i;V _rhs52200=_v_50481_n;return j::binary("<",_lhs52199,_rhs52200);})())){
V _v_50483_top;
V _v_50484_lt;
_v_50483_top=j::get(_v_50480_stack,([&]()->V{V _lhs52201=j::get(_v_50480_stack,this->_literals[5]);V _rhs52202=V(1.0);return V(j::number(_lhs52201)-j::number(_rhs52202));})());
_v_50484_lt=([&]()->V{V _receiver52203=_v_50478_src;V _method52204=this->_literals[7];V _method=j::get(_receiver52203,_method52204);j::Args _params52205=j::Args{this->_literals[6],_v_50482_i};return j::call(_method,_params52205,_receiver52203);})();
if(j::truth(([&]()->V{V _lhs52206=_v_50484_lt;V _rhs52207=V(0.0);return j::binary("<",_lhs52206,_rhs52207);})())){break;
}
if(j::truth(([&]()->V{V _lhs52208=_v_50484_lt;V _rhs52209=_v_50482_i;return j::binary(">",_lhs52208,_rhs52209);})())){(void)(([&]()->V{V _base52211=_v_50483_top;V _key52212=this->_literals[4];V _assign52210=([&]()->V{V _receiver52213=_v_50478_src;V _method52214=this->_literals[8];V _method=j::get(_receiver52213,_method52214);j::Args _params52215=j::Args{_v_50482_i,_v_50484_lt};return j::call(_method,_params52215,_receiver52213);})();return j::update(_base52211,_key52212,"+",_assign52210);})());
}
if(j::truth(([&]()->V{V _receiver52216=_v_50478_src;V _method52217=this->_literals[10];V _method=j::get(_receiver52216,_method52217);j::Args _params52218=j::Args{this->_literals[9],_v_50484_lt};return j::call(_method,_params52218,_receiver52216);})())){
V _v_50485_e;
_v_50485_e=([&]()->V{V _receiver52221=_v_50478_src;V _method52222=this->_literals[7];V _method=j::get(_receiver52221,_method52222);j::Args _params52223=j::Args{this->_literals[11],([&]()->V{V _lhs52219=_v_50484_lt;V _rhs52220=V(4.0);return j::binary("+",_lhs52219,_rhs52220);})()};return j::call(_method,_params52223,_receiver52221);})();
(void)((_v_50482_i=(j::truth(([&]()->V{V _lhs52225=_v_50485_e;V _rhs52226=V(0.0);return j::binary("<",_lhs52225,_rhs52226);})())?_v_50481_n:([&]()->V{V _lhs52227=_v_50485_e;V _rhs52228=V(3.0);return j::binary("+",_lhs52227,_rhs52228);})())));

}
else {if(j::truth(([&]()->V{V _receiver52229=_v_50478_src;V _method52230=this->_literals[10];V _method=j::get(_receiver52229,_method52230);j::Args _params52231=j::Args{this->_literals[12],_v_50484_lt};return j::call(_method,_params52231,_receiver52229);})())){
V _v_50486_e;
_v_50486_e=([&]()->V{V _receiver52234=_v_50478_src;V _method52235=this->_literals[7];V _method=j::get(_receiver52234,_method52235);j::Args _params52236=j::Args{this->_literals[13],([&]()->V{V _lhs52232=_v_50484_lt;V _rhs52233=V(9.0);return j::binary("+",_lhs52232,_rhs52233);})()};return j::call(_method,_params52236,_receiver52234);})();
(void)(([&]()->V{V _base52238=_v_50483_top;V _key52239=this->_literals[4];V _assign52237=([&]()->V{V _receiver52244=_v_50478_src;V _method52245=this->_literals[8];V _method=j::get(_receiver52244,_method52245);j::Args _params52246=j::Args{([&]()->V{V _lhs52240=_v_50484_lt;V _rhs52241=V(9.0);return j::binary("+",_lhs52240,_rhs52241);})(),(j::truth(([&]()->V{V _lhs52242=_v_50486_e;V _rhs52243=V(0.0);return j::binary("<",_lhs52242,_rhs52243);})())?_v_50481_n:_v_50486_e)};return j::call(_method,_params52246,_receiver52244);})();return j::update(_base52238,_key52239,"+",_assign52237);})());
(void)((_v_50482_i=(j::truth(([&]()->V{V _lhs52248=_v_50486_e;V _rhs52249=V(0.0);return j::binary("<",_lhs52248,_rhs52249);})())?_v_50481_n:([&]()->V{V _lhs52250=_v_50486_e;V _rhs52251=V(3.0);return j::binary("+",_lhs52250,_rhs52251);})())));

}
else {if(j::truth(([&]()->V{V _lhs52252=j::get(_v_50478_src,([&]()->V{V _lhs52254=_v_50484_lt;V _rhs52255=V(1.0);return j::binary("+",_lhs52254,_rhs52255);})());V _rhs52253=this->_literals[14];return V(j::equal(_lhs52252,_rhs52253,true));})())){
V _v_50487_e;
_v_50487_e=([&]()->V{V _receiver52258=_v_50478_src;V _method52259=this->_literals[7];V _method=j::get(_receiver52258,_method52259);j::Args _params52260=j::Args{this->_literals[15],([&]()->V{V _lhs52256=_v_50484_lt;V _rhs52257=V(2.0);return j::binary("+",_lhs52256,_rhs52257);})()};return j::call(_method,_params52260,_receiver52258);})();
(void)((_v_50482_i=(j::truth(([&]()->V{V _lhs52262=_v_50487_e;V _rhs52263=V(0.0);return j::binary("<",_lhs52262,_rhs52263);})())?_v_50481_n:([&]()->V{V _lhs52264=_v_50487_e;V _rhs52265=V(2.0);return j::binary("+",_lhs52264,_rhs52265);})())));

}
else {if(j::truth(([&]()->V{V _lhs52266=j::get(_v_50478_src,([&]()->V{V _lhs52268=_v_50484_lt;V _rhs52269=V(1.0);return j::binary("+",_lhs52268,_rhs52269);})());V _rhs52267=this->_literals[16];return V(j::equal(_lhs52266,_rhs52267,true));})())){
V _v_50488_j;
_v_50488_j=([&]()->V{V _lhs52270=_v_50484_lt;V _rhs52271=V(2.0);return j::binary("+",_lhs52270,_rhs52271);})();
{V _v_50489_depth;
_v_50489_depth=V(0.0);
for(;j::truth(([&]()->V{V _lhs52272=_v_50488_j;V _rhs52273=_v_50481_n;return j::binary("<",_lhs52272,_rhs52273);})());(void)(j::increment(_v_50488_j,1,false))){
V _v_50490_c;
_v_50490_c=j::get(_v_50478_src,_v_50488_j);
if(j::truth(([&]()->V{V _lhs52274=_v_50490_c;V _rhs52275=this->_literals[17];return V(j::equal(_lhs52274,_rhs52275,true));})())){(void)(j::increment(_v_50489_depth,1,false));
}else {if(j::truth(([&]()->V{V _lhs52276=_v_50490_c;V _rhs52277=this->_literals[18];return V(j::equal(_lhs52276,_rhs52277,true));})())){(void)(j::increment(_v_50489_depth,-1,false));
}else {if(j::truth(([&]()->V{V _logical52278=([&]()->V{V _lhs52279=_v_50490_c;V _rhs52280=this->_literals[19];return V(j::equal(_lhs52279,_rhs52280,true));})();return j::truth(_logical52278)?([&]()->V{V _lhs52281=_v_50489_depth;V _rhs52282=V(0.0);return j::binary("<=",_lhs52281,_rhs52282);})():_logical52278;})())){break;
}
}
}

}
}
(void)((_v_50482_i=([&]()->V{V _lhs52284=_v_50488_j;V _rhs52285=V(1.0);return j::binary("+",_lhs52284,_rhs52285);})()));

}
else {if(j::truth(([&]()->V{V _lhs52286=j::get(_v_50478_src,([&]()->V{V _lhs52288=_v_50484_lt;V _rhs52289=V(1.0);return j::binary("+",_lhs52288,_rhs52289);})());V _rhs52287=this->_literals[20];return V(j::equal(_lhs52286,_rhs52287,true));})())){
V _v_50491_e;
V _v_50492_name;
_v_50491_e=([&]()->V{V _receiver52290=_v_50478_src;V _method52291=this->_literals[7];V _method=j::get(_receiver52290,_method52291);j::Args _params52292=j::Args{this->_literals[19],_v_50484_lt};return j::call(_method,_params52292,_receiver52290);})();
_v_50492_name=([&]()->V{V _callee52303=this->_v_50473_local.get();return j::call(_callee52303,j::Args{([&]()->V{V _receiver52293=([&]()->V{V _receiver52300=_v_50478_src;V _method52301=this->_literals[8];V _method=j::get(_receiver52300,_method52301);j::Args _params52302=j::Args{([&]()->V{V _lhs52296=_v_50484_lt;V _rhs52297=V(2.0);return j::binary("+",_lhs52296,_rhs52297);})(),(j::truth(([&]()->V{V _lhs52298=_v_50491_e;V _rhs52299=V(0.0);return j::binary("<",_lhs52298,_rhs52299);})())?_v_50481_n:_v_50491_e)};return j::call(_method,_params52302,_receiver52300);})();V _method52294=this->_literals[21];V _method=j::get(_receiver52293,_method52294);j::Args _params52295=j::Args{};return j::call(_method,_params52295,_receiver52293);})()});})();
{V _v_50493_k;
_v_50493_k=([&]()->V{V _lhs52304=j::get(_v_50480_stack,this->_literals[5]);V _rhs52305=V(1.0);return V(j::number(_lhs52304)-j::number(_rhs52305));})();
for(;j::truth(([&]()->V{V _lhs52306=_v_50493_k;V _rhs52307=V(0.0);return j::binary(">",_lhs52306,_rhs52307);})());(void)(j::increment(_v_50493_k,-1,false))){if(j::truth(([&]()->V{V _lhs52308=j::get(j::get(_v_50480_stack,_v_50493_k),this->_literals[0]);V _rhs52309=_v_50492_name;return V(j::equal(_lhs52308,_rhs52309,true));})())){
(void)(([&]()->V{V _base52311=_v_50480_stack;V _key52312=this->_literals[5];V _assign52310=_v_50493_k;return j::put(_base52311,_key52312,_assign52310);})());
break;

}

}}
(void)((_v_50482_i=(j::truth(([&]()->V{V _lhs52314=_v_50491_e;V _rhs52315=V(0.0);return j::binary("<",_lhs52314,_rhs52315);})())?_v_50481_n:([&]()->V{V _lhs52316=_v_50491_e;V _rhs52317=V(1.0);return j::binary("+",_lhs52316,_rhs52317);})())));

}
else {
V _v_50494_m;
V _v_50495_node;
V _v_50496_j;
V _v_50498_closed;
V _v_50499_e;
(void)(([&]()->V{V _base52319=this->_v_50460_NAME.get();V _key52320=this->_literals[22];V _assign52318=([&]()->V{V _lhs52321=_v_50484_lt;V _rhs52322=V(1.0);return j::binary("+",_lhs52321,_rhs52322);})();return j::put(_base52319,_key52320,_assign52318);})());
_v_50494_m=([&]()->V{V _receiver52323=this->_v_50460_NAME.get();V _method52324=this->_literals[23];V _method=j::get(_receiver52323,_method52324);j::Args _params52325=j::Args{_v_50478_src};return j::call(_method,_params52325,_receiver52323);})();
if(j::truth(j::unary("!",_v_50494_m))){
(void)(([&]()->V{V _base52327=_v_50483_top;V _key52328=this->_literals[4];V _assign52326=this->_literals[6];return j::update(_base52327,_key52328,"+",_assign52326);})());
(void)((_v_50482_i=([&]()->V{V _lhs52330=_v_50484_lt;V _rhs52331=V(1.0);return j::binary("+",_lhs52330,_rhs52331);})()));
continue;

}

_v_50495_node=([&]()->V{V _obj52332=j::object();j::put(_obj52332,this->_literals[0],([&]()->V{V _callee52333=this->_v_50473_local.get();return j::call(_callee52333,j::Args{j::get(_v_50494_m,V(0.0))});})());j::put(_obj52332,this->_literals[2],([&]()->V{V _obj52334=j::object();return _obj52334;})());j::put(_obj52332,this->_literals[3],([&]()->V{j::Args _array52335;return j::array(std::move(_array52335));})());j::put(_obj52332,this->_literals[4],this->_literals[1]);return _obj52332;})();
_v_50496_j=j::get(this->_v_50460_NAME.get(),this->_literals[22]);
{for(;true;(void)0){
V _v_50497_a;
(void)(([&]()->V{V _base52337=this->_v_50461_ATTR.get();V _key52338=this->_literals[22];V _assign52336=_v_50496_j;return j::put(_base52337,_key52338,_assign52336);})());
_v_50497_a=([&]()->V{V _receiver52339=this->_v_50461_ATTR.get();V _method52340=this->_literals[23];V _method=j::get(_receiver52339,_method52340);j::Args _params52341=j::Args{_v_50478_src};return j::call(_method,_params52341,_receiver52339);})();
if(j::truth(j::unary("!",_v_50497_a))){break;
}
(void)(([&]()->V{V _base52343=j::get(_v_50495_node,this->_literals[2]);V _key52344=j::get(_v_50497_a,V(1.0));V _assign52342=([&]()->V{V _callee52348=this->_v_50467_entities.get();return j::call(_callee52348,j::Args{([&]()->V{V _logical52345=([&]()->V{V _logical52346=([&]()->V{V _logical52347=j::get(_v_50497_a,V(2.0));return j::nullish(_logical52347)?j::get(_v_50497_a,V(3.0)):_logical52347;})();return j::nullish(_logical52346)?j::get(_v_50497_a,V(4.0)):_logical52346;})();return j::nullish(_logical52345)?this->_literals[1]:_logical52345;})()});})();return j::put(_base52343,_key52344,_assign52342);})());
(void)((_v_50496_j=j::get(this->_v_50461_ATTR.get(),this->_literals[22])));

}
}
while(j::truth(([&]()->V{V _logical52350=([&]()->V{V _lhs52351=_v_50496_j;V _rhs52352=_v_50481_n;return j::binary("<",_lhs52351,_rhs52352);})();return j::truth(_logical52350)?([&]()->V{V _receiver52353=j::regexp(u"\\s","");V _method52354=this->_literals[24];V _method=j::get(_receiver52353,_method52354);j::Args _params52355=j::Args{j::get(_v_50478_src,_v_50496_j)};return j::call(_method,_params52355,_receiver52353);})():_logical52350;})())){(void)(j::increment(_v_50496_j,1,false));
}
_v_50498_closed=([&]()->V{V _lhs52356=j::get(_v_50478_src,_v_50496_j);V _rhs52357=this->_literals[20];return V(j::equal(_lhs52356,_rhs52357,true));})();
_v_50499_e=([&]()->V{V _receiver52358=_v_50478_src;V _method52359=this->_literals[7];V _method=j::get(_receiver52358,_method52359);j::Args _params52360=j::Args{this->_literals[19],_v_50496_j};return j::call(_method,_params52360,_receiver52358);})();
(void)((_v_50482_i=(j::truth(([&]()->V{V _lhs52362=_v_50499_e;V _rhs52363=V(0.0);return j::binary("<",_lhs52362,_rhs52363);})())?_v_50481_n:([&]()->V{V _lhs52364=_v_50499_e;V _rhs52365=V(1.0);return j::binary("+",_lhs52364,_rhs52365);})())));
(void)(([&]()->V{V _receiver52366=j::get(_v_50483_top,this->_literals[3]);V _method52367=this->_literals[25];V _method=j::get(_receiver52366,_method52367);j::Args _params52368=j::Args{_v_50495_node};return j::call(_method,_params52368,_receiver52366);})());
if(j::truth(j::unary("!",_v_50498_closed))){(void)(([&]()->V{V _receiver52369=_v_50480_stack;V _method52370=this->_literals[25];V _method=j::get(_receiver52369,_method52370);j::Args _params52371=j::Args{_v_50495_node};return j::call(_method,_params52371,_receiver52369);})());
}

}

}
}
}
}

}

return _v_50479_root;

}

return V{};
},1);
this->_v_50501_declarations.get()=j::function([=](const j::Args &_args_fn50502,const V &_receiver_fn50502,const V &_self_fn50502) mutable ->V{
V _v_50503_body;
_v_50503_body=_args_fn50502[0];
{
V _v_50504_out;
_v_50504_out=([&]()->V{V _obj52372=j::object();return _obj52372;})();
{for(const auto &_item52373:j::elements(([&]()->V{V _receiver52374=_v_50503_body;V _method52375=this->_literals[27];V _method=j::get(_receiver52374,_method52375);j::Args _params52376=j::Args{this->_literals[26]};return j::call(_method,_params52376,_receiver52374);})())){V _v_50505_d;
_v_50505_d=_item52373;
{
V _v_50506_k;
V _v_50507_prop;
_v_50506_k=([&]()->V{V _receiver52377=_v_50505_d;V _method52378=this->_literals[7];V _method=j::get(_receiver52377,_method52378);j::Args _params52379=j::Args{this->_literals[28]};return j::call(_method,_params52379,_receiver52377);})();
if(j::truth(([&]()->V{V _lhs52380=_v_50506_k;V _rhs52381=V(0.0);return j::binary("<",_lhs52380,_rhs52381);})())){continue;
}
_v_50507_prop=([&]()->V{V _receiver52382=([&]()->V{V _receiver52385=([&]()->V{V _receiver52388=_v_50505_d;V _method52389=this->_literals[8];V _method=j::get(_receiver52388,_method52389);j::Args _params52390=j::Args{V(0.0),_v_50506_k};return j::call(_method,_params52390,_receiver52388);})();V _method52386=this->_literals[21];V _method=j::get(_receiver52385,_method52386);j::Args _params52387=j::Args{};return j::call(_method,_params52387,_receiver52385);})();V _method52383=this->_literals[29];V _method=j::get(_receiver52382,_method52383);j::Args _params52384=j::Args{};return j::call(_method,_params52384,_receiver52382);})();
if(j::truth(([&]()->V{V _receiver52391=this->_v_50500_PROPS.get();V _method52392=this->_literals[30];V _method=j::get(_receiver52391,_method52392);j::Args _params52393=j::Args{_v_50507_prop};return j::call(_method,_params52393,_receiver52391);})())){(void)(([&]()->V{V _base52395=_v_50504_out;V _key52396=_v_50507_prop;V _assign52394=([&]()->V{V _receiver52397=([&]()->V{V _receiver52400=([&]()->V{V _receiver52405=_v_50505_d;V _method52406=this->_literals[8];V _method=j::get(_receiver52405,_method52406);j::Args _params52407=j::Args{([&]()->V{V _lhs52403=_v_50506_k;V _rhs52404=V(1.0);return j::binary("+",_lhs52403,_rhs52404);})()};return j::call(_method,_params52407,_receiver52405);})();V _method52401=this->_literals[31];V _method=j::get(_receiver52400,_method52401);j::Args _params52402=j::Args{j::regexp(u"!important","i"),this->_literals[1]};return j::call(_method,_params52402,_receiver52400);})();V _method52398=this->_literals[21];V _method=j::get(_receiver52397,_method52398);j::Args _params52399=j::Args{};return j::call(_method,_params52399,_receiver52397);})();return j::put(_base52395,_key52396,_assign52394);})());
}

}
}}
return _v_50504_out;

}

return V{};
},1);
this->_v_50508_stylesheet.get()=j::function([=](const j::Args &_args_fn50509,const V &_receiver_fn50509,const V &_self_fn50509) mutable ->V{
V _v_50510_text;
V _v_50511_rules;
_v_50510_text=_args_fn50509[0];
_v_50511_rules=_args_fn50509[1];
{
V _v_50512_i;
(void)((_v_50510_text=([&]()->V{V _receiver52409=_v_50510_text;V _method52410=this->_literals[31];V _method=j::get(_receiver52409,_method52410);j::Args _params52411=j::Args{j::regexp(u"\\/\\*[\\s\\S]*?\\*\\/","g"),this->_literals[1]};return j::call(_method,_params52411,_receiver52409);})()));
_v_50512_i=V(0.0);
while(j::truth(([&]()->V{V _lhs52412=_v_50512_i;V _rhs52413=j::get(_v_50510_text,this->_literals[5]);return j::binary("<",_lhs52412,_rhs52413);})())){
V _v_50513_open;
V _v_50514_j;
V _v_50516_head;
V _v_50517_decls;
_v_50513_open=([&]()->V{V _receiver52414=_v_50510_text;V _method52415=this->_literals[7];V _method=j::get(_receiver52414,_method52415);j::Args _params52416=j::Args{this->_literals[32],_v_50512_i};return j::call(_method,_params52416,_receiver52414);})();
if(j::truth(([&]()->V{V _lhs52417=_v_50513_open;V _rhs52418=V(0.0);return j::binary("<",_lhs52417,_rhs52418);})())){break;
}
_v_50514_j=([&]()->V{V _lhs52419=_v_50513_open;V _rhs52420=V(1.0);return j::binary("+",_lhs52419,_rhs52420);})();
{V _v_50515_depth;
_v_50515_depth=V(1.0);
for(;j::truth(([&]()->V{V _logical52421=([&]()->V{V _lhs52422=_v_50514_j;V _rhs52423=j::get(_v_50510_text,this->_literals[5]);return j::binary("<",_lhs52422,_rhs52423);})();return j::truth(_logical52421)?_v_50515_depth:_logical52421;})());(void)(j::increment(_v_50514_j,1,false))){(void)((_v_50515_depth=j::binary("+",_v_50515_depth,(j::truth(([&]()->V{V _lhs52425=j::get(_v_50510_text,_v_50514_j);V _rhs52426=this->_literals[32];return V(j::equal(_lhs52425,_rhs52426,true));})())?V(1.0):(j::truth(([&]()->V{V _lhs52427=j::get(_v_50510_text,_v_50514_j);V _rhs52428=this->_literals[33];return V(j::equal(_lhs52427,_rhs52428,true));})())?j::unary("-",V(1.0)):V(0.0))))));
}}
_v_50516_head=([&]()->V{V _receiver52429=([&]()->V{V _receiver52440=([&]()->V{V _receiver52443=_v_50510_text;V _method52444=this->_literals[8];V _method=j::get(_receiver52443,_method52444);j::Args _params52445=j::Args{_v_50512_i,_v_50513_open};return j::call(_method,_params52445,_receiver52443);})();V _method52441=this->_literals[8];V _method=j::get(_receiver52440,_method52441);j::Args _params52442=j::Args{([&]()->V{V _lhs52432=([&]()->V{V _receiver52434=([&]()->V{V _receiver52437=_v_50510_text;V _method52438=this->_literals[8];V _method=j::get(_receiver52437,_method52438);j::Args _params52439=j::Args{_v_50512_i,_v_50513_open};return j::call(_method,_params52439,_receiver52437);})();V _method52435=this->_literals[34];V _method=j::get(_receiver52434,_method52435);j::Args _params52436=j::Args{this->_literals[26]};return j::call(_method,_params52436,_receiver52434);})();V _rhs52433=V(1.0);return j::binary("+",_lhs52432,_rhs52433);})()};return j::call(_method,_params52442,_receiver52440);})();V _method52430=this->_literals[21];V _method=j::get(_receiver52429,_method52430);j::Args _params52431=j::Args{};return j::call(_method,_params52431,_receiver52429);})();
_v_50517_decls=([&]()->V{V _callee52453=this->_v_50501_declarations.get();return j::call(_callee52453,j::Args{([&]()->V{V _receiver52450=_v_50510_text;V _method52451=this->_literals[8];V _method=j::get(_receiver52450,_method52451);j::Args _params52452=j::Args{([&]()->V{V _lhs52446=_v_50513_open;V _rhs52447=V(1.0);return j::binary("+",_lhs52446,_rhs52447);})(),([&]()->V{V _lhs52448=_v_50514_j;V _rhs52449=V(1.0);return V(j::number(_lhs52448)-j::number(_rhs52449));})()};return j::call(_method,_params52452,_receiver52450);})()});})();
(void)((_v_50512_i=_v_50514_j));
if(j::truth(([&]()->V{V _receiver52455=_v_50516_head;V _method52456=this->_literals[10];V _method=j::get(_receiver52455,_method52456);j::Args _params52457=j::Args{this->_literals[35]};return j::call(_method,_params52457,_receiver52455);})())){continue;
}
{for(const auto &_item52458:j::elements(([&]()->V{V _receiver52459=_v_50516_head;V _method52460=this->_literals[27];V _method=j::get(_receiver52459,_method52460);j::Args _params52461=j::Args{this->_literals[36]};return j::call(_method,_params52461,_receiver52459);})())){V _v_50518_sel;
_v_50518_sel=_item52458;
{
V _v_50519_m;
V _v_50520_tag;
V _v_50521_bits;
V _v_50522_ids;
V _v_50527_classes;
_v_50519_m=([&]()->V{V _receiver52465=j::regexp(u"^([a-z][\\w-]*|\\*)?((?:[.#][\\w-]+)*)$","i");V _method52466=this->_literals[23];V _method=j::get(_receiver52465,_method52466);j::Args _params52467=j::Args{([&]()->V{V _receiver52462=_v_50518_sel;V _method52463=this->_literals[21];V _method=j::get(_receiver52462,_method52463);j::Args _params52464=j::Args{};return j::call(_method,_params52464,_receiver52462);})()};return j::call(_method,_params52467,_receiver52465);})();
if(j::truth(([&]()->V{V _logical52468=j::unary("!",_v_50519_m);return !j::truth(_logical52468)?([&]()->V{V _logical52469=j::unary("!",j::get(_v_50519_m,V(1.0)));return j::truth(_logical52469)?j::unary("!",j::get(_v_50519_m,V(2.0))):_logical52469;})():_logical52468;})())){continue;
}
_v_50520_tag=(j::truth(([&]()->V{V _logical52470=j::get(_v_50519_m,V(1.0));return j::truth(_logical52470)?([&]()->V{V _lhs52471=j::get(_v_50519_m,V(1.0));V _rhs52472=this->_literals[37];return V(!j::equal(_lhs52471,_rhs52472,true));})():_logical52470;})())?([&]()->V{V _receiver52473=j::get(_v_50519_m,V(1.0));V _method52474=this->_literals[29];V _method=j::get(_receiver52473,_method52474);j::Args _params52475=j::Args{};return j::call(_method,_params52475,_receiver52473);})():V::null());
_v_50521_bits=([&]()->V{V _logical52476=([&]()->V{V _receiver52477=j::get(_v_50519_m,V(2.0));V _method52478=this->_literals[38];V _method=j::get(_receiver52477,_method52478);j::Args _params52479=j::Args{j::regexp(u"[.#][\\w-]+","g")};return j::call(_method,_params52479,_receiver52477);})();return j::nullish(_logical52476)?([&]()->V{j::Args _array52480;return j::array(std::move(_array52480));})():_logical52476;})();
_v_50522_ids=([&]()->V{V _receiver52484=([&]()->V{V _receiver52489=_v_50521_bits;V _method52490=this->_literals[40];V _method=j::get(_receiver52489,_method52490);j::Args _params52491=j::Args{j::function([=](const j::Args &_args_fn50523,const V &_receiver_fn50523,const V &_self_fn50523) mutable ->V{
V _v_50524_b;
_v_50524_b=_args_fn50523[0];
return ([&]()->V{V _lhs52487=j::get(_v_50524_b,V(0.0));V _rhs52488=this->_literals[39];return V(j::equal(_lhs52487,_rhs52488,true));})();
return V{};
},1)};return j::call(_method,_params52491,_receiver52489);})();V _method52485=this->_literals[41];V _method=j::get(_receiver52484,_method52485);j::Args _params52486=j::Args{j::function([=](const j::Args &_args_fn50525,const V &_receiver_fn50525,const V &_self_fn50525) mutable ->V{
V _v_50526_b;
_v_50526_b=_args_fn50525[0];
return ([&]()->V{V _receiver52481=_v_50526_b;V _method52482=this->_literals[8];V _method=j::get(_receiver52481,_method52482);j::Args _params52483=j::Args{V(1.0)};return j::call(_method,_params52483,_receiver52481);})();
return V{};
},1)};return j::call(_method,_params52486,_receiver52484);})();
_v_50527_classes=([&]()->V{V _receiver52495=([&]()->V{V _receiver52500=_v_50521_bits;V _method52501=this->_literals[40];V _method=j::get(_receiver52500,_method52501);j::Args _params52502=j::Args{j::function([=](const j::Args &_args_fn50528,const V &_receiver_fn50528,const V &_self_fn50528) mutable ->V{
V _v_50529_b;
_v_50529_b=_args_fn50528[0];
return ([&]()->V{V _lhs52498=j::get(_v_50529_b,V(0.0));V _rhs52499=this->_literals[42];return V(j::equal(_lhs52498,_rhs52499,true));})();
return V{};
},1)};return j::call(_method,_params52502,_receiver52500);})();V _method52496=this->_literals[41];V _method=j::get(_receiver52495,_method52496);j::Args _params52497=j::Args{j::function([=](const j::Args &_args_fn50530,const V &_receiver_fn50530,const V &_self_fn50530) mutable ->V{
V _v_50531_b;
_v_50531_b=_args_fn50530[0];
return ([&]()->V{V _receiver52492=_v_50531_b;V _method52493=this->_literals[8];V _method=j::get(_receiver52492,_method52493);j::Args _params52494=j::Args{V(1.0)};return j::call(_method,_params52494,_receiver52492);})();
return V{};
},1)};return j::call(_method,_params52497,_receiver52495);})();
if(j::truth(([&]()->V{V _lhs52503=j::get(_v_50522_ids,this->_literals[5]);V _rhs52504=V(1.0);return j::binary(">",_lhs52503,_rhs52504);})())){continue;
}
(void)(([&]()->V{V _receiver52517=_v_50511_rules;V _method52518=this->_literals[25];V _method=j::get(_receiver52517,_method52518);j::Args _params52519=j::Args{([&]()->V{V _obj52505=j::object();j::put(_obj52505,this->_literals[43],_v_50520_tag);j::put(_obj52505,this->_literals[44],([&]()->V{V _logical52506=j::get(_v_50522_ids,V(0.0));return j::nullish(_logical52506)?V::null():_logical52506;})());j::put(_obj52505,this->_literals[45],_v_50527_classes);j::put(_obj52505,this->_literals[46],([&]()->V{V _lhs52507=([&]()->V{V _lhs52509=([&]()->V{V _lhs52511=(j::truth(j::get(_v_50522_ids,this->_literals[5]))?V(10000.0):V(0.0));V _rhs52512=([&]()->V{V _lhs52513=j::get(_v_50527_classes,this->_literals[5]);V _rhs52514=V(100.0);return V(j::number(_lhs52513)*j::number(_rhs52514));})();return j::binary("+",_lhs52511,_rhs52512);})();V _rhs52510=(j::truth(_v_50520_tag)?V(1.0):V(0.0));return j::binary("+",_lhs52509,_rhs52510);})();V _rhs52508=([&]()->V{V _lhs52515=j::get(_v_50511_rules,this->_literals[5]);V _rhs52516=V(1000000.0);return V(j::number(_lhs52515)/j::number(_rhs52516));})();return j::binary("+",_lhs52507,_rhs52508);})());j::put(_obj52505,this->_literals[47],_v_50517_decls);return _obj52505;})()};return j::call(_method,_params52519,_receiver52517);})());

}
}}

}


}

return V{};
},2);
this->_v_50542_hslToRgb.get()=j::function([=](const j::Args &_args_fn50543,const V &_receiver_fn50543,const V &_self_fn50543) mutable ->V{
V _v_50544_h;
V _v_50545_s;
V _v_50546_l;
_v_50544_h=_args_fn50543[0];
_v_50545_s=_args_fn50543[1];
_v_50546_l=_args_fn50543[2];
{
j::Cell _v_50547_q;
j::Cell _v_50548_p;
V _v_50549_f;
_v_50547_q.get()=(j::truth(([&]()->V{V _lhs52520=_v_50546_l;V _rhs52521=V(0.5);return j::binary("<",_lhs52520,_rhs52521);})())?([&]()->V{V _lhs52522=_v_50546_l;V _rhs52523=([&]()->V{V _lhs52524=V(1.0);V _rhs52525=_v_50545_s;return j::binary("+",_lhs52524,_rhs52525);})();return V(j::number(_lhs52522)*j::number(_rhs52523));})():([&]()->V{V _lhs52526=([&]()->V{V _lhs52528=_v_50546_l;V _rhs52529=_v_50545_s;return j::binary("+",_lhs52528,_rhs52529);})();V _rhs52527=([&]()->V{V _lhs52530=_v_50546_l;V _rhs52531=_v_50545_s;return V(j::number(_lhs52530)*j::number(_rhs52531));})();return V(j::number(_lhs52526)-j::number(_rhs52527));})());
_v_50548_p.get()=([&]()->V{V _lhs52532=([&]()->V{V _lhs52534=V(2.0);V _rhs52535=_v_50546_l;return V(j::number(_lhs52534)*j::number(_rhs52535));})();V _rhs52533=_v_50547_q.get();return V(j::number(_lhs52532)-j::number(_rhs52533));})();
_v_50549_f=j::function([=](const j::Args &_args_fn50550,const V &_receiver_fn50550,const V &_self_fn50550) mutable ->V{
V _v_50551_t;
_v_50551_t=_args_fn50550[0];
return (j::truth(([&]()->V{V _lhs52536=(_v_50551_t=([&]()->V{V _lhs52539=([&]()->V{V _lhs52541=([&]()->V{V _lhs52543=_v_50551_t;V _rhs52544=V(1.0);return V(std::fmod(j::number(_lhs52543),j::number(_rhs52544)));})();V _rhs52542=V(1.0);return j::binary("+",_lhs52541,_rhs52542);})();V _rhs52540=V(1.0);return V(std::fmod(j::number(_lhs52539),j::number(_rhs52540)));})());V _rhs52537=([&]()->V{V _lhs52545=V(1.0);V _rhs52546=V(6.0);return V(j::number(_lhs52545)/j::number(_rhs52546));})();return j::binary("<",_lhs52536,_rhs52537);})())?([&]()->V{V _lhs52547=_v_50548_p.get();V _rhs52548=([&]()->V{V _lhs52549=([&]()->V{V _lhs52551=([&]()->V{V _lhs52553=_v_50547_q.get();V _rhs52554=_v_50548_p.get();return V(j::number(_lhs52553)-j::number(_rhs52554));})();V _rhs52552=V(6.0);return V(j::number(_lhs52551)*j::number(_rhs52552));})();V _rhs52550=_v_50551_t;return V(j::number(_lhs52549)*j::number(_rhs52550));})();return j::binary("+",_lhs52547,_rhs52548);})():(j::truth(([&]()->V{V _lhs52555=_v_50551_t;V _rhs52556=([&]()->V{V _lhs52557=V(1.0);V _rhs52558=V(2.0);return V(j::number(_lhs52557)/j::number(_rhs52558));})();return j::binary("<",_lhs52555,_rhs52556);})())?_v_50547_q.get():(j::truth(([&]()->V{V _lhs52559=_v_50551_t;V _rhs52560=([&]()->V{V _lhs52561=V(2.0);V _rhs52562=V(3.0);return V(j::number(_lhs52561)/j::number(_rhs52562));})();return j::binary("<",_lhs52559,_rhs52560);})())?([&]()->V{V _lhs52563=_v_50548_p.get();V _rhs52564=([&]()->V{V _lhs52565=([&]()->V{V _lhs52567=([&]()->V{V _lhs52569=_v_50547_q.get();V _rhs52570=_v_50548_p.get();return V(j::number(_lhs52569)-j::number(_rhs52570));})();V _rhs52568=([&]()->V{V _lhs52571=([&]()->V{V _lhs52573=V(2.0);V _rhs52574=V(3.0);return V(j::number(_lhs52573)/j::number(_rhs52574));})();V _rhs52572=_v_50551_t;return V(j::number(_lhs52571)-j::number(_rhs52572));})();return V(j::number(_lhs52567)*j::number(_rhs52568));})();V _rhs52566=V(6.0);return V(j::number(_lhs52565)*j::number(_rhs52566));})();return j::binary("+",_lhs52563,_rhs52564);})():_v_50548_p.get())));
return V{};
},1);
return ([&]()->V{V _receiver52577=([&]()->V{j::Args _array52580;_array52580.push_back(([&]()->V{V _callee52585=_v_50549_f;return j::call(_callee52585,j::Args{([&]()->V{V _lhs52581=_v_50544_h;V _rhs52582=([&]()->V{V _lhs52583=V(1.0);V _rhs52584=V(3.0);return V(j::number(_lhs52583)/j::number(_rhs52584));})();return j::binary("+",_lhs52581,_rhs52582);})()});})());_array52580.push_back(([&]()->V{V _callee52586=_v_50549_f;return j::call(_callee52586,j::Args{_v_50544_h});})());_array52580.push_back(([&]()->V{V _callee52591=_v_50549_f;return j::call(_callee52591,j::Args{([&]()->V{V _lhs52587=_v_50544_h;V _rhs52588=([&]()->V{V _lhs52589=V(1.0);V _rhs52590=V(3.0);return V(j::number(_lhs52589)/j::number(_rhs52590));})();return V(j::number(_lhs52587)-j::number(_rhs52588));})()});})());return j::array(std::move(_array52580));})();V _method52578=this->_literals[41];V _method=j::get(_receiver52577,_method52578);j::Args _params52579=j::Args{j::function([=](const j::Args &_args_fn50552,const V &_receiver_fn50552,const V &_self_fn50552) mutable ->V{
V _v_50553_v;
_v_50553_v=_args_fn50552[0];
return ([&]()->V{V _lhs52575=_v_50553_v;V _rhs52576=V(255.0);return V(j::number(_lhs52575)*j::number(_rhs52576));})();
return V{};
},1)};return j::call(_method,_params52579,_receiver52577);})();

}

return V{};
},3);
this->_v_50554_color.get()=j::function([=](const j::Args &_args_fn50555,const V &_receiver_fn50555,const V &_self_fn50555) mutable ->V{
V _v_50556_v;
_v_50556_v=_args_fn50555[0];
{
V _v_50557_s;
V _v_50558_fallback;
V _v_50559_named;
V _v_50560_m;
V _v_50564_parts;
V _v_50565_a;
V _v_50571_h;
V _v_50572_sat;
V _v_50573_l;
_v_50557_s=([&]()->V{V _receiver52592=([&]()->V{V _receiver52595=_v_50556_v;V _method52596=this->_literals[21];V _method=j::get(_receiver52595,_method52596);j::Args _params52597=j::Args{};return j::call(_method,_params52597,_receiver52595);})();V _method52593=this->_literals[29];V _method=j::get(_receiver52592,_method52593);j::Args _params52594=j::Args{};return j::call(_method,_params52594,_receiver52592);})();
_v_50558_fallback=([&]()->V{V _receiver52598=j::regexp(u"^var\\(\\s*--[\\w-]+\\s*,(.*)\\)$","");V _method52599=this->_literals[23];V _method=j::get(_receiver52598,_method52599);j::Args _params52600=j::Args{_v_50557_s};return j::call(_method,_params52600,_receiver52598);})();
if(j::truth(_v_50558_fallback)){return ([&]()->V{V _callee52601=_self_fn50555;return j::call(_callee52601,j::Args{j::get(_v_50558_fallback,V(1.0))});})();
}
if(j::truth(([&]()->V{V _logical52602=([&]()->V{V _lhs52603=_v_50557_s;V _rhs52604=this->_literals[48];return V(j::equal(_lhs52603,_rhs52604,true));})();return !j::truth(_logical52602)?([&]()->V{V _lhs52605=_v_50557_s;V _rhs52606=this->_literals[49];return V(j::equal(_lhs52605,_rhs52606,true));})():_logical52602;})())){return ([&]()->V{V _obj52607=j::object();j::put(_obj52607,this->_literals[50],V::null());j::put(_obj52607,this->_literals[51],V(0.0));return _obj52607;})();
}
if(j::truth(([&]()->V{V _lhs52608=_v_50557_s;V _rhs52609=this->_literals[52];return V(j::equal(_lhs52608,_rhs52609,true));})())){return ([&]()->V{V _obj52610=j::object();j::put(_obj52610,this->_literals[50],this->_literals[53]);j::put(_obj52610,this->_literals[51],V(1.0));return _obj52610;})();
}
_v_50559_named=([&]()->V{V _receiver52611=this->_v_50532_NAMED.get();V _method52612=this->_literals[54];V _method=j::get(_receiver52611,_method52612);j::Args _params52613=j::Args{_v_50557_s};return j::call(_method,_params52613,_receiver52611);})();
if(j::truth(_v_50559_named)){return ([&]()->V{V _obj52614=j::object();j::put(_obj52614,this->_literals[50],_v_50559_named);j::put(_obj52614,this->_literals[51],V(1.0));return _obj52614;})();
}
_v_50560_m=([&]()->V{V _receiver52615=j::regexp(u"^#([0-9a-f]{3,4}|[0-9a-f]{6}|[0-9a-f]{8})$","");V _method52616=this->_literals[23];V _method=j::get(_receiver52615,_method52616);j::Args _params52617=j::Args{_v_50557_s};return j::call(_method,_params52617,_receiver52615);})();
if(j::truth(_v_50560_m)){
V _v_50561_d;
_v_50561_d=(j::truth(([&]()->V{V _lhs52618=j::get(j::get(_v_50560_m,V(1.0)),this->_literals[5]);V _rhs52619=V(4.0);return j::binary("<=",_lhs52618,_rhs52619);})())?([&]()->V{V _receiver52620=([&]()->V{V _receiver52625=([&]()->V{j::Args _array52628;for(const auto &_value:j::elements(j::get(_v_50560_m,V(1.0))))_array52628.push_back(_value);return j::array(std::move(_array52628));})();V _method52626=this->_literals[41];V _method=j::get(_receiver52625,_method52626);j::Args _params52627=j::Args{j::function([=](const j::Args &_args_fn50562,const V &_receiver_fn50562,const V &_self_fn50562) mutable ->V{
V _v_50563_x;
_v_50563_x=_args_fn50562[0];
return ([&]()->V{V _lhs52623=_v_50563_x;V _rhs52624=_v_50563_x;return j::binary("+",_lhs52623,_rhs52624);})();
return V{};
},1)};return j::call(_method,_params52627,_receiver52625);})();V _method52621=this->_literals[55];V _method=j::get(_receiver52620,_method52621);j::Args _params52622=j::Args{this->_literals[1]};return j::call(_method,_params52622,_receiver52620);})():j::get(_v_50560_m,V(1.0)));
return ([&]()->V{V _obj52629=j::object();j::put(_obj52629,this->_literals[50],([&]()->V{std::u16string _text52630;_text52630+=u"#";_text52630+=j::string(([&]()->V{V _receiver52631=_v_50561_d;V _method52632=this->_literals[8];V _method=j::get(_receiver52631,_method52632);j::Args _params52633=j::Args{V(0.0),V(6.0)};return j::call(_method,_params52633,_receiver52631);})());_text52630+=u"";return V(std::move(_text52630));})());j::put(_obj52629,this->_literals[51],(j::truth(([&]()->V{V _lhs52634=j::get(_v_50561_d,this->_literals[5]);V _rhs52635=V(8.0);return V(j::equal(_lhs52634,_rhs52635,true));})())?([&]()->V{V _lhs52636=([&]()->V{V _callee52641=j::builtin("parseInt");return j::call(_callee52641,j::Args{([&]()->V{V _receiver52638=_v_50561_d;V _method52639=this->_literals[8];V _method=j::get(_receiver52638,_method52639);j::Args _params52640=j::Args{V(6.0)};return j::call(_method,_params52640,_receiver52638);})(),V(16.0)});})();V _rhs52637=V(255.0);return V(j::number(_lhs52636)/j::number(_rhs52637));})():V(1.0)));return _obj52629;})();

}

(void)((_v_50560_m=([&]()->V{V _receiver52643=j::regexp(u"^(rgba?|hsla?)\\(([^)]*)\\)$","");V _method52644=this->_literals[23];V _method=j::get(_receiver52643,_method52644);j::Args _params52645=j::Args{_v_50557_s};return j::call(_method,_params52645,_receiver52643);})()));
if(j::truth(j::unary("!",_v_50560_m))){return j::builtin("undefined");
}
_v_50564_parts=([&]()->V{V _receiver52646=([&]()->V{V _receiver52649=j::get(_v_50560_m,V(2.0));V _method52650=this->_literals[27];V _method=j::get(_receiver52649,_method52650);j::Args _params52651=j::Args{j::regexp(u"[\\s,/]+","")};return j::call(_method,_params52651,_receiver52649);})();V _method52647=this->_literals[40];V _method=j::get(_receiver52646,_method52647);j::Args _params52648=j::Args{j::builtin("Boolean")};return j::call(_method,_params52648,_receiver52646);})();
if(j::truth(([&]()->V{V _lhs52652=j::get(_v_50564_parts,this->_literals[5]);V _rhs52653=V(3.0);return j::binary("<",_lhs52652,_rhs52653);})())){return j::builtin("undefined");
}
_v_50565_a=(j::truth(([&]()->V{V _lhs52654=j::get(_v_50564_parts,V(3.0));V _rhs52655=j::builtin("undefined");return V(j::equal(_lhs52654,_rhs52655,true));})())?V(1.0):([&]()->V{V _callee52657=this->_v_50447_clamp.get();return j::call(_callee52657,j::Args{([&]()->V{V _callee52656=this->_v_50538_unit.get();return j::call(_callee52656,j::Args{j::get(_v_50564_parts,V(3.0)),V(1.0)});})()});})());
if(j::truth(([&]()->V{V _receiver52658=j::get(_v_50560_m,V(1.0));V _method52659=this->_literals[10];V _method=j::get(_receiver52658,_method52659);j::Args _params52660=j::Args{this->_literals[56]};return j::call(_method,_params52660,_receiver52658);})())){
V _v_50566_c;
_v_50566_c=([&]()->V{V _receiver52662=([&]()->V{V _receiver52665=_v_50564_parts;V _method52666=this->_literals[8];V _method=j::get(_receiver52665,_method52666);j::Args _params52667=j::Args{V(0.0),V(3.0)};return j::call(_method,_params52667,_receiver52665);})();V _method52663=this->_literals[41];V _method=j::get(_receiver52662,_method52663);j::Args _params52664=j::Args{j::function([=](const j::Args &_args_fn50567,const V &_receiver_fn50567,const V &_self_fn50567) mutable ->V{
V _v_50568_p;
_v_50568_p=_args_fn50567[0];
return ([&]()->V{V _callee52661=this->_v_50538_unit.get();return j::call(_callee52661,j::Args{_v_50568_p,V(255.0)});})();
return V{};
},1)};return j::call(_method,_params52664,_receiver52662);})();
return (j::truth(([&]()->V{V _receiver52671=_v_50566_c;V _method52672=this->_literals[58];V _method=j::get(_receiver52671,_method52672);j::Args _params52673=j::Args{j::function([=](const j::Args &_args_fn50569,const V &_receiver_fn50569,const V &_self_fn50569) mutable ->V{
V _v_50570_x;
_v_50570_x=_args_fn50569[0];
return j::unary("!",([&]()->V{V _receiver52668=j::builtin("Number");V _method52669=this->_literals[57];V _method=j::get(_receiver52668,_method52669);j::Args _params52670=j::Args{_v_50570_x};return j::call(_method,_params52670,_receiver52668);})());
return V{};
},1)};return j::call(_method,_params52673,_receiver52671);})())?j::builtin("undefined"):([&]()->V{V _obj52674=j::object();j::put(_obj52674,this->_literals[50],([&]()->V{V _callee52675=this->_v_50452_hex.get();return j::call(_callee52675,j::Args{_v_50566_c});})());j::put(_obj52674,this->_literals[51],_v_50565_a);return _obj52674;})());

}

_v_50571_h=([&]()->V{V _lhs52676=([&]()->V{V _callee52678=j::builtin("parseFloat");return j::call(_callee52678,j::Args{j::get(_v_50564_parts,V(0.0))});})();V _rhs52677=V(360.0);return V(j::number(_lhs52676)/j::number(_rhs52677));})();
_v_50572_sat=([&]()->V{V _callee52682=this->_v_50447_clamp.get();return j::call(_callee52682,j::Args{([&]()->V{V _lhs52679=([&]()->V{V _callee52681=j::builtin("parseFloat");return j::call(_callee52681,j::Args{j::get(_v_50564_parts,V(1.0))});})();V _rhs52680=V(100.0);return V(j::number(_lhs52679)/j::number(_rhs52680));})()});})();
_v_50573_l=([&]()->V{V _callee52686=this->_v_50447_clamp.get();return j::call(_callee52686,j::Args{([&]()->V{V _lhs52683=([&]()->V{V _callee52685=j::builtin("parseFloat");return j::call(_callee52685,j::Args{j::get(_v_50564_parts,V(2.0))});})();V _rhs52684=V(100.0);return V(j::number(_lhs52683)/j::number(_rhs52684));})()});})();
return (j::truth(([&]()->V{V _receiver52690=([&]()->V{j::Args _array52693;_array52693.push_back(_v_50571_h);_array52693.push_back(_v_50572_sat);_array52693.push_back(_v_50573_l);return j::array(std::move(_array52693));})();V _method52691=this->_literals[58];V _method=j::get(_receiver52690,_method52691);j::Args _params52692=j::Args{j::function([=](const j::Args &_args_fn50574,const V &_receiver_fn50574,const V &_self_fn50574) mutable ->V{
V _v_50575_x;
_v_50575_x=_args_fn50574[0];
return j::unary("!",([&]()->V{V _receiver52687=j::builtin("Number");V _method52688=this->_literals[57];V _method=j::get(_receiver52687,_method52688);j::Args _params52689=j::Args{_v_50575_x};return j::call(_method,_params52689,_receiver52687);})());
return V{};
},1)};return j::call(_method,_params52692,_receiver52690);})())?j::builtin("undefined"):([&]()->V{V _obj52694=j::object();j::put(_obj52694,this->_literals[50],([&]()->V{V _callee52696=this->_v_50452_hex.get();return j::call(_callee52696,j::Args{([&]()->V{V _callee52695=this->_v_50542_hslToRgb.get();return j::call(_callee52695,j::Args{_v_50571_h,_v_50572_sat,_v_50573_l});})()});})());j::put(_obj52694,this->_literals[51],_v_50565_a);return _obj52694;})());

}

return V{};
},1);
this->_v_50597_transform.get()=j::function([=](const j::Args &_args_fn50598,const V &_receiver_fn50598,const V &_self_fn50598) mutable ->V{
V _v_50599_v;
_v_50599_v=_args_fn50598[0];
{
V _v_50600_out;
V _v_50601_re;
_v_50600_out=this->_v_50576_IDENTITY.get();
if(j::truth(j::unary("!",_v_50599_v))){return _v_50600_out;
}
_v_50601_re=j::regexp(u"(matrix|translate|scale|rotate|skewx|skewy)\\s*\\(([^)]*)\\)","gi");
{V _v_50602_m;
_v_50602_m=([&]()->V{V _receiver52697=_v_50601_re;V _method52698=this->_literals[23];V _method=j::get(_receiver52697,_method52698);j::Args _params52699=j::Args{_v_50599_v};return j::call(_method,_params52699,_receiver52697);})();
for(;j::truth(_v_50602_m);(void)((_v_50602_m=([&]()->V{V _receiver52701=_v_50601_re;V _method52702=this->_literals[23];V _method=j::get(_receiver52701,_method52702);j::Args _params52703=j::Args{_v_50599_v};return j::call(_method,_params52703,_receiver52701);})()))){
V _v_50603_a;
V _v_50604_r;
V _v_50607_t;
_v_50603_a=([&]()->V{V _receiver52704=([&]()->V{V _logical52707=([&]()->V{V _receiver52708=j::get(_v_50602_m,V(2.0));V _method52709=this->_literals[38];V _method=j::get(_receiver52708,_method52709);j::Args _params52710=j::Args{j::regexp(u"[+-]?(?:\\d+\\.?\\d*|\\.\\d+)(?:e[+-]?\\d+)?","gi")};return j::call(_method,_params52710,_receiver52708);})();return j::nullish(_logical52707)?([&]()->V{j::Args _array52711;return j::array(std::move(_array52711));})():_logical52707;})();V _method52705=this->_literals[41];V _method=j::get(_receiver52704,_method52705);j::Args _params52706=j::Args{j::builtin("Number")};return j::call(_method,_params52706,_receiver52704);})();
_v_50604_r=j::function([=](const j::Args &_args_fn50605,const V &_receiver_fn50605,const V &_self_fn50605) mutable ->V{
V _v_50606_deg;
_v_50606_deg=_args_fn50605[0];
return ([&]()->V{V _lhs52712=([&]()->V{V _lhs52714=_v_50606_deg;V _rhs52715=j::get(j::builtin("Math"),this->_literals[59]);return V(j::number(_lhs52714)*j::number(_rhs52715));})();V _rhs52713=V(180.0);return V(j::number(_lhs52712)/j::number(_rhs52713));})();
return V{};
},1);
_v_50607_t=this->_v_50576_IDENTITY.get();
{V _switch52716=([&]()->V{V _receiver52719=j::get(_v_50602_m,V(1.0));V _method52720=this->_literals[29];V _method=j::get(_receiver52719,_method52720);j::Args _params52721=j::Args{};return j::call(_method,_params52721,_receiver52719);})();int _case52717=-1;if(_case52717<0&&j::equal(_switch52716,this->_literals[60]))_case52717=0;if(_case52717<0&&j::equal(_switch52716,this->_literals[61]))_case52717=1;if(_case52717<0&&j::equal(_switch52716,this->_literals[62]))_case52717=2;if(_case52717<0&&j::equal(_switch52716,this->_literals[63]))_case52717=3;if(_case52717<0&&j::equal(_switch52716,this->_literals[64]))_case52717=4;if(_case52717<0&&j::equal(_switch52716,this->_literals[65]))_case52717=5;if(_case52717>=0&&_case52717<=0){if(j::truth(([&]()->V{V _lhs52722=j::get(_v_50603_a,this->_literals[5]);V _rhs52723=V(6.0);return V(j::equal(_lhs52722,_rhs52723,true));})())){(void)((_v_50607_t=([&]()->V{j::Args _array52725;_array52725.push_back(j::get(_v_50603_a,V(0.0)));_array52725.push_back(j::get(_v_50603_a,V(1.0)));_array52725.push_back(j::get(_v_50603_a,V(2.0)));_array52725.push_back(j::get(_v_50603_a,V(3.0)));_array52725.push_back(j::get(_v_50603_a,V(4.0)));_array52725.push_back(j::get(_v_50603_a,V(5.0)));return j::array(std::move(_array52725));})()));
}
goto _switch_end52718;
}if(_case52717>=0&&_case52717<=1){(void)((_v_50607_t=([&]()->V{j::Args _array52727;_array52727.push_back(V(1.0));_array52727.push_back(V(0.0));_array52727.push_back(V(0.0));_array52727.push_back(V(1.0));_array52727.push_back(([&]()->V{V _logical52728=j::get(_v_50603_a,V(0.0));return j::nullish(_logical52728)?V(0.0):_logical52728;})());_array52727.push_back(([&]()->V{V _logical52729=j::get(_v_50603_a,V(1.0));return j::nullish(_logical52729)?V(0.0):_logical52729;})());return j::array(std::move(_array52727));})()));
goto _switch_end52718;
}if(_case52717>=0&&_case52717<=2){(void)((_v_50607_t=([&]()->V{j::Args _array52731;_array52731.push_back(([&]()->V{V _logical52732=j::get(_v_50603_a,V(0.0));return j::nullish(_logical52732)?V(1.0):_logical52732;})());_array52731.push_back(V(0.0));_array52731.push_back(V(0.0));_array52731.push_back(([&]()->V{V _logical52733=([&]()->V{V _logical52734=j::get(_v_50603_a,V(1.0));return j::nullish(_logical52734)?j::get(_v_50603_a,V(0.0)):_logical52734;})();return j::nullish(_logical52733)?V(1.0):_logical52733;})());_array52731.push_back(V(0.0));_array52731.push_back(V(0.0));return j::array(std::move(_array52731));})()));
goto _switch_end52718;
}if(_case52717>=0&&_case52717<=3){{
V _v_50608_c;
V _v_50609_s;
_v_50608_c=([&]()->V{V _number52737=([&]()->V{V _callee52739=_v_50604_r;return j::call(_callee52739,j::Args{([&]()->V{V _logical52738=j::get(_v_50603_a,V(0.0));return j::nullish(_logical52738)?V(0.0):_logical52738;})()});})();return V(std::cos(j::number(_number52737)));})();
_v_50609_s=([&]()->V{V _number52742=([&]()->V{V _callee52744=_v_50604_r;return j::call(_callee52744,j::Args{([&]()->V{V _logical52743=j::get(_v_50603_a,V(0.0));return j::nullish(_logical52743)?V(0.0):_logical52743;})()});})();return V(std::sin(j::number(_number52742)));})();
(void)((_v_50607_t=([&]()->V{V _callee52748=this->_v_50581_about.get();return j::call(_callee52748,j::Args{([&]()->V{V _logical52746=j::get(_v_50603_a,V(1.0));return j::nullish(_logical52746)?V(0.0):_logical52746;})(),([&]()->V{V _logical52747=j::get(_v_50603_a,V(2.0));return j::nullish(_logical52747)?V(0.0):_logical52747;})(),_v_50608_c,_v_50609_s,j::unary("-",_v_50609_s),_v_50608_c});})()));
goto _switch_end52718;

}
}if(_case52717>=0&&_case52717<=4){(void)((_v_50607_t=([&]()->V{j::Args _array52750;_array52750.push_back(V(1.0));_array52750.push_back(V(0.0));_array52750.push_back(([&]()->V{V _number52753=([&]()->V{V _callee52755=_v_50604_r;return j::call(_callee52755,j::Args{([&]()->V{V _logical52754=j::get(_v_50603_a,V(0.0));return j::nullish(_logical52754)?V(0.0):_logical52754;})()});})();return V(std::tan(j::number(_number52753)));})());_array52750.push_back(V(1.0));_array52750.push_back(V(0.0));_array52750.push_back(V(0.0));return j::array(std::move(_array52750));})()));
goto _switch_end52718;
}if(_case52717>=0&&_case52717<=5){(void)((_v_50607_t=([&]()->V{j::Args _array52757;_array52757.push_back(V(1.0));_array52757.push_back(([&]()->V{V _number52760=([&]()->V{V _callee52762=_v_50604_r;return j::call(_callee52762,j::Args{([&]()->V{V _logical52761=j::get(_v_50603_a,V(0.0));return j::nullish(_logical52761)?V(0.0):_logical52761;})()});})();return V(std::tan(j::number(_number52760)));})());_array52757.push_back(V(0.0));_array52757.push_back(V(1.0));_array52757.push_back(V(0.0));_array52757.push_back(V(0.0));return j::array(std::move(_array52757));})()));
goto _switch_end52718;
}_switch_end52718:;
}
(void)((_v_50600_out=([&]()->V{V _callee52764=this->_v_50577_mul.get();return j::call(_callee52764,j::Args{_v_50600_out,_v_50607_t});})()));

}
}
return _v_50600_out;

}

return V{};
},1);
this->_v_50615_arc.get()=j::function([=](const j::Args &_args_fn50616,const V &_receiver_fn50616,const V &_self_fn50616) mutable ->V{
V _v_50617_out;
V _v_50618_x1;
V _v_50619_y1;
j::Cell _v_50620_rx;
j::Cell _v_50621_ry;
V _v_50622_deg;
V _v_50623_large;
V _v_50624_sweep;
V _v_50625_x2;
V _v_50626_y2;
_v_50617_out=_args_fn50616[0];
_v_50618_x1=_args_fn50616[1];
_v_50619_y1=_args_fn50616[2];
_v_50620_rx.get()=_args_fn50616[3];
_v_50621_ry.get()=_args_fn50616[4];
_v_50622_deg=_args_fn50616[5];
_v_50623_large=_args_fn50616[6];
_v_50624_sweep=_args_fn50616[7];
_v_50625_x2=_args_fn50616[8];
_v_50626_y2=_args_fn50616[9];
{
V _v_50627_phi;
j::Cell _v_50628_cos;
j::Cell _v_50629_sin;
V _v_50630_dx;
V _v_50631_dy;
V _v_50632_xp;
V _v_50633_yp;
V _v_50634_lam;
V _v_50635_num;
V _v_50636_den;
V _v_50637_k;
V _v_50638_cxp;
V _v_50639_cyp;
j::Cell _v_50640_cx;
j::Cell _v_50641_cy;
V _v_50642_angle;
V _v_50648_ux;
V _v_50649_uy;
V _v_50650_start;
V _v_50651_span;
V _v_50652_n;
V _v_50653_step;
V _v_50654_h;
V _v_50655_at;
if(j::truth(([&]()->V{V _logical52765=([&]()->V{V _lhs52766=_v_50618_x1;V _rhs52767=_v_50625_x2;return V(j::equal(_lhs52766,_rhs52767,true));})();return j::truth(_logical52765)?([&]()->V{V _lhs52768=_v_50619_y1;V _rhs52769=_v_50626_y2;return V(j::equal(_lhs52768,_rhs52769,true));})():_logical52765;})())){return V{};
}
(void)((_v_50620_rx.get()=([&]()->V{V _number52771=_v_50620_rx.get();return V(std::fabs(j::number(_number52771)));})()));
(void)((_v_50621_ry.get()=([&]()->V{V _number52773=_v_50621_ry.get();return V(std::fabs(j::number(_number52773)));})()));
if(j::truth(([&]()->V{V _logical52774=j::unary("!",_v_50620_rx.get());return !j::truth(_logical52774)?j::unary("!",_v_50621_ry.get()):_logical52774;})())){
(void)(([&]()->V{V _receiver52775=_v_50617_out;V _method52776=this->_literals[25];V _method=j::get(_receiver52775,_method52776);j::Args _params52777=j::Args{this->_v_50611_LINE.get(),_v_50625_x2,_v_50626_y2};return j::call(_method,_params52777,_receiver52775);})());
return V{};

}

_v_50627_phi=([&]()->V{V _lhs52778=([&]()->V{V _lhs52780=_v_50622_deg;V _rhs52781=j::get(j::builtin("Math"),this->_literals[59]);return V(j::number(_lhs52780)*j::number(_rhs52781));})();V _rhs52779=V(180.0);return V(j::number(_lhs52778)/j::number(_rhs52779));})();
_v_50628_cos.get()=([&]()->V{V _number52782=_v_50627_phi;return V(std::cos(j::number(_number52782)));})();
_v_50629_sin.get()=([&]()->V{V _number52783=_v_50627_phi;return V(std::sin(j::number(_number52783)));})();
_v_50630_dx=([&]()->V{V _lhs52784=([&]()->V{V _lhs52786=_v_50618_x1;V _rhs52787=_v_50625_x2;return V(j::number(_lhs52786)-j::number(_rhs52787));})();V _rhs52785=V(2.0);return V(j::number(_lhs52784)/j::number(_rhs52785));})();
_v_50631_dy=([&]()->V{V _lhs52788=([&]()->V{V _lhs52790=_v_50619_y1;V _rhs52791=_v_50626_y2;return V(j::number(_lhs52790)-j::number(_rhs52791));})();V _rhs52789=V(2.0);return V(j::number(_lhs52788)/j::number(_rhs52789));})();
_v_50632_xp=([&]()->V{V _lhs52792=([&]()->V{V _lhs52794=_v_50628_cos.get();V _rhs52795=_v_50630_dx;return V(j::number(_lhs52794)*j::number(_rhs52795));})();V _rhs52793=([&]()->V{V _lhs52796=_v_50629_sin.get();V _rhs52797=_v_50631_dy;return V(j::number(_lhs52796)*j::number(_rhs52797));})();return j::binary("+",_lhs52792,_rhs52793);})();
_v_50633_yp=([&]()->V{V _lhs52798=([&]()->V{V _lhs52800=j::unary("-",_v_50629_sin.get());V _rhs52801=_v_50630_dx;return V(j::number(_lhs52800)*j::number(_rhs52801));})();V _rhs52799=([&]()->V{V _lhs52802=_v_50628_cos.get();V _rhs52803=_v_50631_dy;return V(j::number(_lhs52802)*j::number(_rhs52803));})();return j::binary("+",_lhs52798,_rhs52799);})();
_v_50634_lam=([&]()->V{V _lhs52804=([&]()->V{V _lhs52806=([&]()->V{V _lhs52808=_v_50632_xp;V _rhs52809=_v_50632_xp;return V(j::number(_lhs52808)*j::number(_rhs52809));})();V _rhs52807=([&]()->V{V _lhs52810=_v_50620_rx.get();V _rhs52811=_v_50620_rx.get();return V(j::number(_lhs52810)*j::number(_rhs52811));})();return V(j::number(_lhs52806)/j::number(_rhs52807));})();V _rhs52805=([&]()->V{V _lhs52812=([&]()->V{V _lhs52814=_v_50633_yp;V _rhs52815=_v_50633_yp;return V(j::number(_lhs52814)*j::number(_rhs52815));})();V _rhs52813=([&]()->V{V _lhs52816=_v_50621_ry.get();V _rhs52817=_v_50621_ry.get();return V(j::number(_lhs52816)*j::number(_rhs52817));})();return V(j::number(_lhs52812)/j::number(_rhs52813));})();return j::binary("+",_lhs52804,_rhs52805);})();
if(j::truth(([&]()->V{V _lhs52818=_v_50634_lam;V _rhs52819=V(1.0);return j::binary(">",_lhs52818,_rhs52819);})())){
(void)((_v_50620_rx.get()=j::binary("*",_v_50620_rx.get(),([&]()->V{V _number52821=_v_50634_lam;return V(std::sqrt(j::number(_number52821)));})())));
(void)((_v_50621_ry.get()=j::binary("*",_v_50621_ry.get(),([&]()->V{V _number52823=_v_50634_lam;return V(std::sqrt(j::number(_number52823)));})())));

}

_v_50635_num=([&]()->V{V _lhs52824=([&]()->V{V _lhs52826=([&]()->V{V _lhs52828=([&]()->V{V _lhs52830=([&]()->V{V _lhs52832=_v_50620_rx.get();V _rhs52833=_v_50620_rx.get();return V(j::number(_lhs52832)*j::number(_rhs52833));})();V _rhs52831=_v_50621_ry.get();return V(j::number(_lhs52830)*j::number(_rhs52831));})();V _rhs52829=_v_50621_ry.get();return V(j::number(_lhs52828)*j::number(_rhs52829));})();V _rhs52827=([&]()->V{V _lhs52834=([&]()->V{V _lhs52836=([&]()->V{V _lhs52838=_v_50620_rx.get();V _rhs52839=_v_50620_rx.get();return V(j::number(_lhs52838)*j::number(_rhs52839));})();V _rhs52837=_v_50633_yp;return V(j::number(_lhs52836)*j::number(_rhs52837));})();V _rhs52835=_v_50633_yp;return V(j::number(_lhs52834)*j::number(_rhs52835));})();return V(j::number(_lhs52826)-j::number(_rhs52827));})();V _rhs52825=([&]()->V{V _lhs52840=([&]()->V{V _lhs52842=([&]()->V{V _lhs52844=_v_50621_ry.get();V _rhs52845=_v_50621_ry.get();return V(j::number(_lhs52844)*j::number(_rhs52845));})();V _rhs52843=_v_50632_xp;return V(j::number(_lhs52842)*j::number(_rhs52843));})();V _rhs52841=_v_50632_xp;return V(j::number(_lhs52840)*j::number(_rhs52841));})();return V(j::number(_lhs52824)-j::number(_rhs52825));})();
_v_50636_den=([&]()->V{V _lhs52846=([&]()->V{V _lhs52848=([&]()->V{V _lhs52850=([&]()->V{V _lhs52852=_v_50620_rx.get();V _rhs52853=_v_50620_rx.get();return V(j::number(_lhs52852)*j::number(_rhs52853));})();V _rhs52851=_v_50633_yp;return V(j::number(_lhs52850)*j::number(_rhs52851));})();V _rhs52849=_v_50633_yp;return V(j::number(_lhs52848)*j::number(_rhs52849));})();V _rhs52847=([&]()->V{V _lhs52854=([&]()->V{V _lhs52856=([&]()->V{V _lhs52858=_v_50621_ry.get();V _rhs52859=_v_50621_ry.get();return V(j::number(_lhs52858)*j::number(_rhs52859));})();V _rhs52857=_v_50632_xp;return V(j::number(_lhs52856)*j::number(_rhs52857));})();V _rhs52855=_v_50632_xp;return V(j::number(_lhs52854)*j::number(_rhs52855));})();return j::binary("+",_lhs52846,_rhs52847);})();
_v_50637_k=([&]()->V{V _number52868=([&]()->V{V _receiver52874=j::builtin("Math");V _method52875=this->_literals[66];V _method=j::get(_receiver52874,_method52875);j::Args _params52876=j::Args{V(0.0),([&]()->V{V _lhs52869=_v_50635_num;V _rhs52870=([&]()->V{V _logical52871=_v_50636_den;return !j::truth(_logical52871)?V(1.0):_logical52871;})();return V(j::number(_lhs52869)/j::number(_rhs52870));})()};return j::call(_method,_params52876,_receiver52874);})();return V(std::sqrt(j::number(_number52868)));})();
if(j::truth(([&]()->V{V _lhs52877=_v_50623_large;V _rhs52878=_v_50624_sweep;return V(j::equal(_lhs52877,_rhs52878,true));})())){(void)((_v_50637_k=j::unary("-",_v_50637_k)));
}
_v_50638_cxp=([&]()->V{V _lhs52880=([&]()->V{V _lhs52882=([&]()->V{V _lhs52884=_v_50637_k;V _rhs52885=_v_50620_rx.get();return V(j::number(_lhs52884)*j::number(_rhs52885));})();V _rhs52883=_v_50633_yp;return V(j::number(_lhs52882)*j::number(_rhs52883));})();V _rhs52881=_v_50621_ry.get();return V(j::number(_lhs52880)/j::number(_rhs52881));})();
_v_50639_cyp=([&]()->V{V _lhs52886=([&]()->V{V _lhs52888=([&]()->V{V _lhs52890=j::unary("-",_v_50637_k);V _rhs52891=_v_50621_ry.get();return V(j::number(_lhs52890)*j::number(_rhs52891));})();V _rhs52889=_v_50632_xp;return V(j::number(_lhs52888)*j::number(_rhs52889));})();V _rhs52887=_v_50620_rx.get();return V(j::number(_lhs52886)/j::number(_rhs52887));})();
_v_50640_cx.get()=([&]()->V{V _lhs52892=([&]()->V{V _lhs52894=([&]()->V{V _lhs52896=_v_50628_cos.get();V _rhs52897=_v_50638_cxp;return V(j::number(_lhs52896)*j::number(_rhs52897));})();V _rhs52895=([&]()->V{V _lhs52898=_v_50629_sin.get();V _rhs52899=_v_50639_cyp;return V(j::number(_lhs52898)*j::number(_rhs52899));})();return V(j::number(_lhs52894)-j::number(_rhs52895));})();V _rhs52893=([&]()->V{V _lhs52900=([&]()->V{V _lhs52902=_v_50618_x1;V _rhs52903=_v_50625_x2;return j::binary("+",_lhs52902,_rhs52903);})();V _rhs52901=V(2.0);return V(j::number(_lhs52900)/j::number(_rhs52901));})();return j::binary("+",_lhs52892,_rhs52893);})();
_v_50641_cy.get()=([&]()->V{V _lhs52904=([&]()->V{V _lhs52906=([&]()->V{V _lhs52908=_v_50629_sin.get();V _rhs52909=_v_50638_cxp;return V(j::number(_lhs52908)*j::number(_rhs52909));})();V _rhs52907=([&]()->V{V _lhs52910=_v_50628_cos.get();V _rhs52911=_v_50639_cyp;return V(j::number(_lhs52910)*j::number(_rhs52911));})();return j::binary("+",_lhs52906,_rhs52907);})();V _rhs52905=([&]()->V{V _lhs52912=([&]()->V{V _lhs52914=_v_50619_y1;V _rhs52915=_v_50626_y2;return j::binary("+",_lhs52914,_rhs52915);})();V _rhs52913=V(2.0);return V(j::number(_lhs52912)/j::number(_rhs52913));})();return j::binary("+",_lhs52904,_rhs52905);})();
_v_50642_angle=j::function([=](const j::Args &_args_fn50643,const V &_receiver_fn50643,const V &_self_fn50643) mutable ->V{
V _v_50644_ux;
V _v_50645_uy;
V _v_50646_vx;
V _v_50647_vy;
_v_50644_ux=_args_fn50643[0];
_v_50645_uy=_args_fn50643[1];
_v_50646_vx=_args_fn50643[2];
_v_50647_vy=_args_fn50643[3];
return ([&]()->V{V _number52928=([&]()->V{V _lhs52930=([&]()->V{V _lhs52932=_v_50644_ux;V _rhs52933=_v_50647_vy;return V(j::number(_lhs52932)*j::number(_rhs52933));})();V _rhs52931=([&]()->V{V _lhs52934=_v_50645_uy;V _rhs52935=_v_50646_vx;return V(j::number(_lhs52934)*j::number(_rhs52935));})();return V(j::number(_lhs52930)-j::number(_rhs52931));})();V _number52929=([&]()->V{V _lhs52936=([&]()->V{V _lhs52938=_v_50644_ux;V _rhs52939=_v_50646_vx;return V(j::number(_lhs52938)*j::number(_rhs52939));})();V _rhs52937=([&]()->V{V _lhs52940=_v_50645_uy;V _rhs52941=_v_50647_vy;return V(j::number(_lhs52940)*j::number(_rhs52941));})();return j::binary("+",_lhs52936,_rhs52937);})();return V(std::atan2(j::number(_number52928),j::number(_number52929)));})();
return V{};
},4);
_v_50648_ux=([&]()->V{V _lhs52942=([&]()->V{V _lhs52944=_v_50632_xp;V _rhs52945=_v_50638_cxp;return V(j::number(_lhs52944)-j::number(_rhs52945));})();V _rhs52943=_v_50620_rx.get();return V(j::number(_lhs52942)/j::number(_rhs52943));})();
_v_50649_uy=([&]()->V{V _lhs52946=([&]()->V{V _lhs52948=_v_50633_yp;V _rhs52949=_v_50639_cyp;return V(j::number(_lhs52948)-j::number(_rhs52949));})();V _rhs52947=_v_50621_ry.get();return V(j::number(_lhs52946)/j::number(_rhs52947));})();
_v_50650_start=([&]()->V{V _callee52950=_v_50642_angle;return j::call(_callee52950,j::Args{V(1.0),V(0.0),_v_50648_ux,_v_50649_uy});})();
_v_50651_span=([&]()->V{V _callee52959=_v_50642_angle;return j::call(_callee52959,j::Args{_v_50648_ux,_v_50649_uy,([&]()->V{V _lhs52951=([&]()->V{V _lhs52953=j::unary("-",_v_50632_xp);V _rhs52954=_v_50638_cxp;return V(j::number(_lhs52953)-j::number(_rhs52954));})();V _rhs52952=_v_50620_rx.get();return V(j::number(_lhs52951)/j::number(_rhs52952));})(),([&]()->V{V _lhs52955=([&]()->V{V _lhs52957=j::unary("-",_v_50633_yp);V _rhs52958=_v_50639_cyp;return V(j::number(_lhs52957)-j::number(_rhs52958));})();V _rhs52956=_v_50621_ry.get();return V(j::number(_lhs52955)/j::number(_rhs52956));})()});})();
if(j::truth(([&]()->V{V _logical52960=j::unary("!",_v_50624_sweep);return j::truth(_logical52960)?([&]()->V{V _lhs52961=_v_50651_span;V _rhs52962=V(0.0);return j::binary(">",_lhs52961,_rhs52962);})():_logical52960;})())){(void)((_v_50651_span=j::binary("-",_v_50651_span,this->_v_50444_TAU.get())));
}else {if(j::truth(([&]()->V{V _logical52964=_v_50624_sweep;return j::truth(_logical52964)?([&]()->V{V _lhs52965=_v_50651_span;V _rhs52966=V(0.0);return j::binary("<",_lhs52965,_rhs52966);})():_logical52964;})())){(void)((_v_50651_span=j::binary("+",_v_50651_span,this->_v_50444_TAU.get())));
}
}
_v_50652_n=([&]()->V{V _receiver52985=j::builtin("Math");V _method52986=this->_literals[66];V _method=j::get(_receiver52985,_method52986);j::Args _params52987=j::Args{V(1.0),([&]()->V{V _number52975=([&]()->V{V _lhs52976=([&]()->V{V _lhs52978=([&]()->V{V _number52980=_v_50651_span;return V(std::fabs(j::number(_number52980)));})();V _rhs52979=([&]()->V{V _lhs52981=j::get(j::builtin("Math"),this->_literals[59]);V _rhs52982=V(2.0);return V(j::number(_lhs52981)/j::number(_rhs52982));})();return V(j::number(_lhs52978)/j::number(_rhs52979));})();V _rhs52977=V(1e-9);return V(j::number(_lhs52976)-j::number(_rhs52977));})();return V(std::ceil(j::number(_number52975)));})()};return j::call(_method,_params52987,_receiver52985);})();
_v_50653_step=([&]()->V{V _lhs52988=_v_50651_span;V _rhs52989=_v_50652_n;return V(j::number(_lhs52988)/j::number(_rhs52989));})();
_v_50654_h=([&]()->V{V _lhs52990=([&]()->V{V _lhs52992=V(4.0);V _rhs52993=V(3.0);return V(j::number(_lhs52992)/j::number(_rhs52993));})();V _rhs52991=([&]()->V{V _number52996=([&]()->V{V _lhs52997=_v_50653_step;V _rhs52998=V(4.0);return V(j::number(_lhs52997)/j::number(_rhs52998));})();return V(std::tan(j::number(_number52996)));})();return V(j::number(_lhs52990)*j::number(_rhs52991));})();
_v_50655_at=j::function([=](const j::Args &_args_fn50656,const V &_receiver_fn50656,const V &_self_fn50656) mutable ->V{
V _v_50657_px;
V _v_50658_py;
_v_50657_px=_args_fn50656[0];
_v_50658_py=_args_fn50656[1];
return ([&]()->V{j::Args _array52999;_array52999.push_back(([&]()->V{V _lhs53000=([&]()->V{V _lhs53002=_v_50640_cx.get();V _rhs53003=([&]()->V{V _lhs53004=([&]()->V{V _lhs53006=_v_50620_rx.get();V _rhs53007=_v_50657_px;return V(j::number(_lhs53006)*j::number(_rhs53007));})();V _rhs53005=_v_50628_cos.get();return V(j::number(_lhs53004)*j::number(_rhs53005));})();return j::binary("+",_lhs53002,_rhs53003);})();V _rhs53001=([&]()->V{V _lhs53008=([&]()->V{V _lhs53010=_v_50621_ry.get();V _rhs53011=_v_50658_py;return V(j::number(_lhs53010)*j::number(_rhs53011));})();V _rhs53009=_v_50629_sin.get();return V(j::number(_lhs53008)*j::number(_rhs53009));})();return V(j::number(_lhs53000)-j::number(_rhs53001));})());_array52999.push_back(([&]()->V{V _lhs53012=([&]()->V{V _lhs53014=_v_50641_cy.get();V _rhs53015=([&]()->V{V _lhs53016=([&]()->V{V _lhs53018=_v_50620_rx.get();V _rhs53019=_v_50657_px;return V(j::number(_lhs53018)*j::number(_rhs53019));})();V _rhs53017=_v_50629_sin.get();return V(j::number(_lhs53016)*j::number(_rhs53017));})();return j::binary("+",_lhs53014,_rhs53015);})();V _rhs53013=([&]()->V{V _lhs53020=([&]()->V{V _lhs53022=_v_50621_ry.get();V _rhs53023=_v_50658_py;return V(j::number(_lhs53022)*j::number(_rhs53023));})();V _rhs53021=_v_50628_cos.get();return V(j::number(_lhs53020)*j::number(_rhs53021));})();return j::binary("+",_lhs53012,_rhs53013);})());return j::array(std::move(_array52999));})();
return V{};
},2);
{V _v_50659_i;
V _v_50660_a;
_v_50659_i=V(0.0);
_v_50660_a=_v_50650_start;
for(;j::truth(([&]()->V{V _lhs53024=_v_50659_i;V _rhs53025=_v_50652_n;return j::binary("<",_lhs53024,_rhs53025);})());(void)((j::increment(_v_50659_i,1,false),(_v_50660_a=j::binary("+",_v_50660_a,_v_50653_step))))){
V _v_50661_c1;
V _v_50662_s1;
V _v_50663_c2;
V _v_50664_s2;
V _v_50665_p;
_v_50661_c1=([&]()->V{V _number53027=_v_50660_a;return V(std::cos(j::number(_number53027)));})();
_v_50662_s1=([&]()->V{V _number53028=_v_50660_a;return V(std::sin(j::number(_number53028)));})();
_v_50663_c2=([&]()->V{V _number53031=([&]()->V{V _lhs53032=_v_50660_a;V _rhs53033=_v_50653_step;return j::binary("+",_lhs53032,_rhs53033);})();return V(std::cos(j::number(_number53031)));})();
_v_50664_s2=([&]()->V{V _number53036=([&]()->V{V _lhs53037=_v_50660_a;V _rhs53038=_v_50653_step;return j::binary("+",_lhs53037,_rhs53038);})();return V(std::sin(j::number(_number53036)));})();
_v_50665_p=(j::truth(([&]()->V{V _lhs53039=_v_50659_i;V _rhs53040=([&]()->V{V _lhs53041=_v_50652_n;V _rhs53042=V(1.0);return V(j::number(_lhs53041)-j::number(_rhs53042));})();return V(j::equal(_lhs53039,_rhs53040,true));})())?([&]()->V{j::Args _array53043;_array53043.push_back(_v_50625_x2);_array53043.push_back(_v_50626_y2);return j::array(std::move(_array53043));})():([&]()->V{V _callee53044=_v_50655_at;return j::call(_callee53044,j::Args{_v_50663_c2,_v_50664_s2});})());
(void)(([&]()->V{V _receiver53064=_v_50617_out;V _method53065=this->_literals[25];V _method=j::get(_receiver53064,_method53065);j::Args _params53066=([&](){j::Args _args53045;_args53045.push_back(this->_v_50612_CURVE.get());for(const auto &_v:j::elements(([&]()->V{V _callee53054=_v_50655_at;return j::call(_callee53054,j::Args{([&]()->V{V _lhs53046=_v_50661_c1;V _rhs53047=([&]()->V{V _lhs53048=_v_50654_h;V _rhs53049=_v_50662_s1;return V(j::number(_lhs53048)*j::number(_rhs53049));})();return V(j::number(_lhs53046)-j::number(_rhs53047));})(),([&]()->V{V _lhs53050=_v_50662_s1;V _rhs53051=([&]()->V{V _lhs53052=_v_50654_h;V _rhs53053=_v_50661_c1;return V(j::number(_lhs53052)*j::number(_rhs53053));})();return j::binary("+",_lhs53050,_rhs53051);})()});})()))_args53045.push_back(_v);for(const auto &_v:j::elements(([&]()->V{V _callee53063=_v_50655_at;return j::call(_callee53063,j::Args{([&]()->V{V _lhs53055=_v_50663_c2;V _rhs53056=([&]()->V{V _lhs53057=_v_50654_h;V _rhs53058=_v_50664_s2;return V(j::number(_lhs53057)*j::number(_rhs53058));})();return j::binary("+",_lhs53055,_rhs53056);})(),([&]()->V{V _lhs53059=_v_50664_s2;V _rhs53060=([&]()->V{V _lhs53061=_v_50654_h;V _rhs53062=_v_50663_c2;return V(j::number(_lhs53061)*j::number(_rhs53062));})();return V(j::number(_lhs53059)-j::number(_rhs53060));})()});})()))_args53045.push_back(_v);_args53045.push_back(j::get(_v_50665_p,V(0.0)));_args53045.push_back(j::get(_v_50665_p,V(1.0)));return _args53045;})();return j::call(_method,_params53066,_receiver53064);})());

}
}

}

return V{};
},10);
this->_v_50670_pathOps.get()=j::function([=](const j::Args &_args_fn50671,const V &_receiver_fn50671,const V &_self_fn50671) mutable ->V{
j::Cell _v_50672_d;
V _v_50673_out;
_v_50672_d.get()=_args_fn50671[0];
_v_50673_out=_args_fn50671[1];
{
j::Cell _v_50674_i;
V _v_50675_cmd;
V _v_50676_x;
V _v_50677_y;
V _v_50678_sx;
V _v_50679_sy;
V _v_50680_qx;
V _v_50681_qy;
V _v_50682_cx;
V _v_50683_cy;
V _v_50684_last;
V _v_50685_closed;
V _v_50686_read;
_v_50674_i.get()=V(0.0);
_v_50675_cmd=this->_literals[1];
_v_50676_x=V(0.0);
_v_50677_y=V(0.0);
_v_50678_sx=V(0.0);
_v_50679_sy=V(0.0);
_v_50680_qx=V(0.0);
_v_50681_qy=V(0.0);
_v_50682_cx=V(0.0);
_v_50683_cy=V(0.0);
_v_50684_last=this->_literals[1];
_v_50685_closed=V(false);
_v_50686_read=j::function([=](const j::Args &_args_fn50687,const V &_receiver_fn50687,const V &_self_fn50687) mutable ->V{
V _v_50688_re;
_v_50688_re=_args_fn50687[0];
{
V _v_50689_m;
(void)(([&]()->V{V _base53068=_v_50688_re;V _key53069=this->_literals[22];V _assign53067=_v_50674_i.get();return j::put(_base53068,_key53069,_assign53067);})());
_v_50689_m=([&]()->V{V _receiver53070=_v_50688_re;V _method53071=this->_literals[23];V _method=j::get(_receiver53070,_method53071);j::Args _params53072=j::Args{_v_50672_d.get()};return j::call(_method,_params53072,_receiver53070);})();
if(j::truth(j::unary("!",_v_50689_m))){return j::builtin("NaN");
}
(void)((_v_50674_i.get()=j::get(_v_50688_re,this->_literals[22])));
return j::unary("+",j::get(_v_50689_m,V(1.0)));

}

return V{};
},1);
{for(;true;(void)0){
V _v_50690_c;
V _v_50691_up;
V _v_50692_rel;
V _v_50693_a;
V _v_50696_ox;
V _v_50697_oy;
(void)(([&]()->V{V _base53075=this->_v_50668_COMMAND.get();V _key53076=this->_literals[22];V _assign53074=_v_50674_i.get();return j::put(_base53075,_key53076,_assign53074);})());
_v_50690_c=([&]()->V{V _receiver53077=this->_v_50668_COMMAND.get();V _method53078=this->_literals[23];V _method=j::get(_receiver53077,_method53078);j::Args _params53079=j::Args{_v_50672_d.get()};return j::call(_method,_params53079,_receiver53077);})();
if(j::truth(_v_50690_c)){
(void)((_v_50675_cmd=j::get(_v_50690_c,V(1.0))));
(void)((_v_50674_i.get()=j::get(this->_v_50668_COMMAND.get(),this->_literals[22])));

}
else {if(j::truth(([&]()->V{V _logical53082=([&]()->V{V _logical53083=([&]()->V{V _logical53084=([&]()->V{V _logical53085=j::unary("!",_v_50675_cmd);return !j::truth(_logical53085)?([&]()->V{V _lhs53086=_v_50675_cmd;V _rhs53087=this->_literals[67];return V(j::equal(_lhs53086,_rhs53087,true));})():_logical53085;})();return !j::truth(_logical53084)?([&]()->V{V _lhs53088=_v_50675_cmd;V _rhs53089=this->_literals[68];return V(j::equal(_lhs53088,_rhs53089,true));})():_logical53084;})();return !j::truth(_logical53083)?([&]()->V{V _lhs53090=_v_50674_i.get();V _rhs53091=j::get(_v_50672_d.get(),this->_literals[5]);return j::binary(">=",_lhs53090,_rhs53091);})():_logical53083;})();return !j::truth(_logical53082)?([&]()->V{V _receiver53095=j::regexp(u"^[\\s,]*$","");V _method53096=this->_literals[24];V _method=j::get(_receiver53095,_method53096);j::Args _params53097=j::Args{([&]()->V{V _receiver53092=_v_50672_d.get();V _method53093=this->_literals[8];V _method=j::get(_receiver53092,_method53093);j::Args _params53094=j::Args{_v_50674_i.get()};return j::call(_method,_params53094,_receiver53092);})()};return j::call(_method,_params53097,_receiver53095);})():_logical53082;})())){break;
}
}
_v_50691_up=([&]()->V{V _receiver53098=_v_50675_cmd;V _method53099=this->_literals[69];V _method=j::get(_receiver53098,_method53099);j::Args _params53100=j::Args{};return j::call(_method,_params53100,_receiver53098);})();
_v_50692_rel=([&]()->V{V _lhs53101=_v_50675_cmd;V _rhs53102=_v_50691_up;return V(!j::equal(_lhs53101,_rhs53102,true));})();
_v_50693_a=([&]()->V{j::Args _array53103;return j::array(std::move(_array53103));})();
{V _v_50694_k;
_v_50694_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs53104=_v_50694_k;V _rhs53105=j::get(this->_v_50669_ARGS.get(),_v_50691_up);return j::binary("<",_lhs53104,_rhs53105);})());(void)(j::increment(_v_50694_k,1,false))){
V _v_50695_v;
_v_50695_v=(j::truth(([&]()->V{V _logical53106=([&]()->V{V _lhs53107=_v_50691_up;V _rhs53108=this->_literals[70];return V(j::equal(_lhs53107,_rhs53108,true));})();return j::truth(_logical53106)?([&]()->V{V _logical53109=([&]()->V{V _lhs53110=_v_50694_k;V _rhs53111=V(3.0);return V(j::equal(_lhs53110,_rhs53111,true));})();return !j::truth(_logical53109)?([&]()->V{V _lhs53112=_v_50694_k;V _rhs53113=V(4.0);return V(j::equal(_lhs53112,_rhs53113,true));})():_logical53109;})():_logical53106;})())?([&]()->V{V _callee53114=_v_50686_read;return j::call(_callee53114,j::Args{this->_v_50667_FLAG.get()});})():([&]()->V{V _callee53115=_v_50686_read;return j::call(_callee53115,j::Args{this->_v_50666_NUMBER.get()});})());
if(j::truth(([&]()->V{V _receiver53116=j::builtin("Number");V _method53117=this->_literals[71];V _method=j::get(_receiver53116,_method53117);j::Args _params53118=j::Args{_v_50695_v};return j::call(_method,_params53118,_receiver53116);})())){return V{};
}
(void)(([&]()->V{V _receiver53119=_v_50693_a;V _method53120=this->_literals[25];V _method=j::get(_receiver53119,_method53120);j::Args _params53121=j::Args{_v_50695_v};return j::call(_method,_params53121,_receiver53119);})());

}
}
if(j::truth(([&]()->V{V _logical53122=_v_50685_closed;return j::truth(_logical53122)?([&]()->V{V _lhs53123=_v_50691_up;V _rhs53124=this->_literals[72];return V(!j::equal(_lhs53123,_rhs53124,true));})():_logical53122;})())){(void)(([&]()->V{V _receiver53125=_v_50673_out;V _method53126=this->_literals[25];V _method=j::get(_receiver53125,_method53126);j::Args _params53127=j::Args{this->_v_50610_MOVE.get(),_v_50678_sx,_v_50679_sy};return j::call(_method,_params53127,_receiver53125);})());
}
(void)((_v_50685_closed=V(false)));
_v_50696_ox=(j::truth(_v_50692_rel)?_v_50676_x:V(0.0));
_v_50697_oy=(j::truth(_v_50692_rel)?_v_50677_y:V(0.0));
{V _switch53129=_v_50691_up;int _case53130=-1;if(_case53130<0&&j::equal(_switch53129,this->_literals[72]))_case53130=0;if(_case53130<0&&j::equal(_switch53129,this->_literals[73]))_case53130=1;if(_case53130<0&&j::equal(_switch53129,this->_literals[74]))_case53130=2;if(_case53130<0&&j::equal(_switch53129,this->_literals[75]))_case53130=3;if(_case53130<0&&j::equal(_switch53129,this->_literals[76]))_case53130=4;if(_case53130<0&&j::equal(_switch53129,this->_literals[77]))_case53130=5;if(_case53130<0&&j::equal(_switch53129,this->_literals[78]))_case53130=6;if(_case53130<0&&j::equal(_switch53129,this->_literals[79]))_case53130=7;if(_case53130<0&&j::equal(_switch53129,this->_literals[70]))_case53130=8;if(_case53130<0&&j::equal(_switch53129,this->_literals[67]))_case53130=9;if(_case53130>=0&&_case53130<=0){(void)((_v_50676_x=([&]()->V{V _lhs53133=j::get(_v_50693_a,V(0.0));V _rhs53134=_v_50696_ox;return j::binary("+",_lhs53133,_rhs53134);})()));
(void)((_v_50677_y=([&]()->V{V _lhs53136=j::get(_v_50693_a,V(1.0));V _rhs53137=_v_50697_oy;return j::binary("+",_lhs53136,_rhs53137);})()));
(void)((_v_50678_sx=_v_50676_x));
(void)((_v_50679_sy=_v_50677_y));
(void)(([&]()->V{V _receiver53140=_v_50673_out;V _method53141=this->_literals[25];V _method=j::get(_receiver53140,_method53141);j::Args _params53142=j::Args{this->_v_50610_MOVE.get(),_v_50676_x,_v_50677_y};return j::call(_method,_params53142,_receiver53140);})());
(void)((_v_50675_cmd=(j::truth(_v_50692_rel)?this->_literals[80]:this->_literals[73])));
goto _switch_end53131;
}if(_case53130>=0&&_case53130<=1){(void)(([&]()->V{V _receiver53150=_v_50673_out;V _method53151=this->_literals[25];V _method=j::get(_receiver53150,_method53151);j::Args _params53152=j::Args{this->_v_50611_LINE.get(),(_v_50676_x=([&]()->V{V _lhs53145=j::get(_v_50693_a,V(0.0));V _rhs53146=_v_50696_ox;return j::binary("+",_lhs53145,_rhs53146);})()),(_v_50677_y=([&]()->V{V _lhs53148=j::get(_v_50693_a,V(1.0));V _rhs53149=_v_50697_oy;return j::binary("+",_lhs53148,_rhs53149);})())};return j::call(_method,_params53152,_receiver53150);})());
goto _switch_end53131;
}if(_case53130>=0&&_case53130<=2){(void)(([&]()->V{V _receiver53156=_v_50673_out;V _method53157=this->_literals[25];V _method=j::get(_receiver53156,_method53157);j::Args _params53158=j::Args{this->_v_50611_LINE.get(),(_v_50676_x=([&]()->V{V _lhs53154=j::get(_v_50693_a,V(0.0));V _rhs53155=_v_50696_ox;return j::binary("+",_lhs53154,_rhs53155);})()),_v_50677_y};return j::call(_method,_params53158,_receiver53156);})());
goto _switch_end53131;
}if(_case53130>=0&&_case53130<=3){(void)(([&]()->V{V _receiver53162=_v_50673_out;V _method53163=this->_literals[25];V _method=j::get(_receiver53162,_method53163);j::Args _params53164=j::Args{this->_v_50611_LINE.get(),_v_50676_x,(_v_50677_y=([&]()->V{V _lhs53160=j::get(_v_50693_a,V(0.0));V _rhs53161=_v_50697_oy;return j::binary("+",_lhs53160,_rhs53161);})())};return j::call(_method,_params53164,_receiver53162);})());
goto _switch_end53131;
}if(_case53130>=0&&_case53130<=4){(void)((_v_50682_cx=([&]()->V{V _lhs53166=j::get(_v_50693_a,V(2.0));V _rhs53167=_v_50696_ox;return j::binary("+",_lhs53166,_rhs53167);})()));
(void)((_v_50683_cy=([&]()->V{V _lhs53169=j::get(_v_50693_a,V(3.0));V _rhs53170=_v_50697_oy;return j::binary("+",_lhs53169,_rhs53170);})()));
(void)(([&]()->V{V _receiver53181=_v_50673_out;V _method53182=this->_literals[25];V _method=j::get(_receiver53181,_method53182);j::Args _params53183=j::Args{this->_v_50612_CURVE.get(),([&]()->V{V _lhs53171=j::get(_v_50693_a,V(0.0));V _rhs53172=_v_50696_ox;return j::binary("+",_lhs53171,_rhs53172);})(),([&]()->V{V _lhs53173=j::get(_v_50693_a,V(1.0));V _rhs53174=_v_50697_oy;return j::binary("+",_lhs53173,_rhs53174);})(),_v_50682_cx,_v_50683_cy,(_v_50676_x=([&]()->V{V _lhs53176=j::get(_v_50693_a,V(4.0));V _rhs53177=_v_50696_ox;return j::binary("+",_lhs53176,_rhs53177);})()),(_v_50677_y=([&]()->V{V _lhs53179=j::get(_v_50693_a,V(5.0));V _rhs53180=_v_50697_oy;return j::binary("+",_lhs53179,_rhs53180);})())};return j::call(_method,_params53183,_receiver53181);})());
goto _switch_end53131;
}if(_case53130>=0&&_case53130<=5){{
V _v_50698_x1;
V _v_50699_y1;
_v_50698_x1=(j::truth(([&]()->V{V _logical53184=([&]()->V{V _lhs53185=_v_50684_last;V _rhs53186=this->_literals[76];return V(j::equal(_lhs53185,_rhs53186,true));})();return !j::truth(_logical53184)?([&]()->V{V _lhs53187=_v_50684_last;V _rhs53188=this->_literals[77];return V(j::equal(_lhs53187,_rhs53188,true));})():_logical53184;})())?([&]()->V{V _lhs53189=([&]()->V{V _lhs53191=V(2.0);V _rhs53192=_v_50676_x;return V(j::number(_lhs53191)*j::number(_rhs53192));})();V _rhs53190=_v_50682_cx;return V(j::number(_lhs53189)-j::number(_rhs53190));})():_v_50676_x);
_v_50699_y1=(j::truth(([&]()->V{V _logical53193=([&]()->V{V _lhs53194=_v_50684_last;V _rhs53195=this->_literals[76];return V(j::equal(_lhs53194,_rhs53195,true));})();return !j::truth(_logical53193)?([&]()->V{V _lhs53196=_v_50684_last;V _rhs53197=this->_literals[77];return V(j::equal(_lhs53196,_rhs53197,true));})():_logical53193;})())?([&]()->V{V _lhs53198=([&]()->V{V _lhs53200=V(2.0);V _rhs53201=_v_50677_y;return V(j::number(_lhs53200)*j::number(_rhs53201));})();V _rhs53199=_v_50683_cy;return V(j::number(_lhs53198)-j::number(_rhs53199));})():_v_50677_y);
(void)((_v_50682_cx=([&]()->V{V _lhs53203=j::get(_v_50693_a,V(0.0));V _rhs53204=_v_50696_ox;return j::binary("+",_lhs53203,_rhs53204);})()));
(void)((_v_50683_cy=([&]()->V{V _lhs53206=j::get(_v_50693_a,V(1.0));V _rhs53207=_v_50697_oy;return j::binary("+",_lhs53206,_rhs53207);})()));
(void)(([&]()->V{V _receiver53214=_v_50673_out;V _method53215=this->_literals[25];V _method=j::get(_receiver53214,_method53215);j::Args _params53216=j::Args{this->_v_50612_CURVE.get(),_v_50698_x1,_v_50699_y1,_v_50682_cx,_v_50683_cy,(_v_50676_x=([&]()->V{V _lhs53209=j::get(_v_50693_a,V(2.0));V _rhs53210=_v_50696_ox;return j::binary("+",_lhs53209,_rhs53210);})()),(_v_50677_y=([&]()->V{V _lhs53212=j::get(_v_50693_a,V(3.0));V _rhs53213=_v_50697_oy;return j::binary("+",_lhs53212,_rhs53213);})())};return j::call(_method,_params53216,_receiver53214);})());
goto _switch_end53131;

}
}if(_case53130>=0&&_case53130<=6){}if(_case53130>=0&&_case53130<=7){{
V _v_50700_px;
V _v_50701_py;
V _v_50702_ex;
V _v_50703_ey;
if(j::truth(([&]()->V{V _lhs53217=_v_50691_up;V _rhs53218=this->_literals[78];return V(j::equal(_lhs53217,_rhs53218,true));})())){(void)(((_v_50700_px=([&]()->V{V _lhs53220=j::get(_v_50693_a,V(0.0));V _rhs53221=_v_50696_ox;return j::binary("+",_lhs53220,_rhs53221);})()),(_v_50701_py=([&]()->V{V _lhs53223=j::get(_v_50693_a,V(1.0));V _rhs53224=_v_50697_oy;return j::binary("+",_lhs53223,_rhs53224);})()),(_v_50702_ex=([&]()->V{V _lhs53226=j::get(_v_50693_a,V(2.0));V _rhs53227=_v_50696_ox;return j::binary("+",_lhs53226,_rhs53227);})()),(_v_50703_ey=([&]()->V{V _lhs53229=j::get(_v_50693_a,V(3.0));V _rhs53230=_v_50697_oy;return j::binary("+",_lhs53229,_rhs53230);})())));
}else {
V _v_50704_reflect;
_v_50704_reflect=([&]()->V{V _logical53231=([&]()->V{V _lhs53232=_v_50684_last;V _rhs53233=this->_literals[78];return V(j::equal(_lhs53232,_rhs53233,true));})();return !j::truth(_logical53231)?([&]()->V{V _lhs53234=_v_50684_last;V _rhs53235=this->_literals[79];return V(j::equal(_lhs53234,_rhs53235,true));})():_logical53231;})();
(void)(((_v_50700_px=(j::truth(_v_50704_reflect)?([&]()->V{V _lhs53237=([&]()->V{V _lhs53239=V(2.0);V _rhs53240=_v_50676_x;return V(j::number(_lhs53239)*j::number(_rhs53240));})();V _rhs53238=_v_50680_qx;return V(j::number(_lhs53237)-j::number(_rhs53238));})():_v_50676_x)),(_v_50701_py=(j::truth(_v_50704_reflect)?([&]()->V{V _lhs53242=([&]()->V{V _lhs53244=V(2.0);V _rhs53245=_v_50677_y;return V(j::number(_lhs53244)*j::number(_rhs53245));})();V _rhs53243=_v_50681_qy;return V(j::number(_lhs53242)-j::number(_rhs53243));})():_v_50677_y)),(_v_50702_ex=([&]()->V{V _lhs53247=j::get(_v_50693_a,V(0.0));V _rhs53248=_v_50696_ox;return j::binary("+",_lhs53247,_rhs53248);})()),(_v_50703_ey=([&]()->V{V _lhs53250=j::get(_v_50693_a,V(1.0));V _rhs53251=_v_50697_oy;return j::binary("+",_lhs53250,_rhs53251);})())));

}

(void)(([&]()->V{V _receiver53284=_v_50673_out;V _method53285=this->_literals[25];V _method=j::get(_receiver53284,_method53285);j::Args _params53286=j::Args{this->_v_50612_CURVE.get(),([&]()->V{V _lhs53252=_v_50676_x;V _rhs53253=([&]()->V{V _lhs53254=([&]()->V{V _lhs53256=([&]()->V{V _lhs53258=_v_50700_px;V _rhs53259=_v_50676_x;return V(j::number(_lhs53258)-j::number(_rhs53259));})();V _rhs53257=V(2.0);return V(j::number(_lhs53256)*j::number(_rhs53257));})();V _rhs53255=V(3.0);return V(j::number(_lhs53254)/j::number(_rhs53255));})();return j::binary("+",_lhs53252,_rhs53253);})(),([&]()->V{V _lhs53260=_v_50677_y;V _rhs53261=([&]()->V{V _lhs53262=([&]()->V{V _lhs53264=([&]()->V{V _lhs53266=_v_50701_py;V _rhs53267=_v_50677_y;return V(j::number(_lhs53266)-j::number(_rhs53267));})();V _rhs53265=V(2.0);return V(j::number(_lhs53264)*j::number(_rhs53265));})();V _rhs53263=V(3.0);return V(j::number(_lhs53262)/j::number(_rhs53263));})();return j::binary("+",_lhs53260,_rhs53261);})(),([&]()->V{V _lhs53268=_v_50702_ex;V _rhs53269=([&]()->V{V _lhs53270=([&]()->V{V _lhs53272=([&]()->V{V _lhs53274=_v_50700_px;V _rhs53275=_v_50702_ex;return V(j::number(_lhs53274)-j::number(_rhs53275));})();V _rhs53273=V(2.0);return V(j::number(_lhs53272)*j::number(_rhs53273));})();V _rhs53271=V(3.0);return V(j::number(_lhs53270)/j::number(_rhs53271));})();return j::binary("+",_lhs53268,_rhs53269);})(),([&]()->V{V _lhs53276=_v_50703_ey;V _rhs53277=([&]()->V{V _lhs53278=([&]()->V{V _lhs53280=([&]()->V{V _lhs53282=_v_50701_py;V _rhs53283=_v_50703_ey;return V(j::number(_lhs53282)-j::number(_rhs53283));})();V _rhs53281=V(2.0);return V(j::number(_lhs53280)*j::number(_rhs53281));})();V _rhs53279=V(3.0);return V(j::number(_lhs53278)/j::number(_rhs53279));})();return j::binary("+",_lhs53276,_rhs53277);})(),_v_50702_ex,_v_50703_ey};return j::call(_method,_params53286,_receiver53284);})());
(void)((_v_50680_qx=_v_50700_px));
(void)((_v_50681_qy=_v_50701_py));
(void)((_v_50676_x=_v_50702_ex));
(void)((_v_50677_y=_v_50703_ey));
goto _switch_end53131;

}
}if(_case53130>=0&&_case53130<=8){{
V _v_50705_ex;
V _v_50706_ey;
_v_50705_ex=([&]()->V{V _lhs53291=j::get(_v_50693_a,V(5.0));V _rhs53292=_v_50696_ox;return j::binary("+",_lhs53291,_rhs53292);})();
_v_50706_ey=([&]()->V{V _lhs53293=j::get(_v_50693_a,V(6.0));V _rhs53294=_v_50697_oy;return j::binary("+",_lhs53293,_rhs53294);})();
(void)(([&]()->V{V _callee53299=this->_v_50615_arc.get();return j::call(_callee53299,j::Args{_v_50673_out,_v_50676_x,_v_50677_y,j::get(_v_50693_a,V(0.0)),j::get(_v_50693_a,V(1.0)),j::get(_v_50693_a,V(2.0)),([&]()->V{V _lhs53295=j::get(_v_50693_a,V(3.0));V _rhs53296=V(1.0);return V(j::equal(_lhs53295,_rhs53296,true));})(),([&]()->V{V _lhs53297=j::get(_v_50693_a,V(4.0));V _rhs53298=V(1.0);return V(j::equal(_lhs53297,_rhs53298,true));})(),_v_50705_ex,_v_50706_ey});})());
(void)((_v_50676_x=_v_50705_ex));
(void)((_v_50677_y=_v_50706_ey));
goto _switch_end53131;

}
}if(_case53130>=0&&_case53130<=9){(void)(([&]()->V{V _receiver53302=_v_50673_out;V _method53303=this->_literals[25];V _method=j::get(_receiver53302,_method53303);j::Args _params53304=j::Args{this->_v_50613_CLOSE.get()};return j::call(_method,_params53304,_receiver53302);})());
(void)((_v_50676_x=_v_50678_sx));
(void)((_v_50677_y=_v_50679_sy));
(void)((_v_50685_closed=V(true)));
goto _switch_end53131;
}_switch_end53131:;
}
(void)((_v_50684_last=_v_50691_up));

}
}

}

return V{};
},2);
this->_v_50707_len.get()=j::function([=](const j::Args &_args_fn50708,const V &_receiver_fn50708,const V &_self_fn50708) mutable ->V{
V _v_50709_v;
V _v_50710_ref;
V _v_50711_fallback;
_v_50709_v=_args_fn50708[0];
V _default53309=_args_fn50708[1];if(_default53309.kind==V::Undefined||_default53309.kind==V::Hole)_default53309=V(0.0);
_v_50710_ref=_default53309;
V _default53310=_args_fn50708[2];if(_default53310.kind==V::Undefined||_default53310.kind==V::Hole)_default53310=V(0.0);
_v_50711_fallback=_default53310;
{
V _v_50712_m;
V _v_50713_k;
if(j::truth(([&]()->V{V _lhs53311=_v_50709_v;V _rhs53312=j::builtin("undefined");return V(j::equal(_lhs53311,_rhs53312,true));})())){return _v_50711_fallback;
}
_v_50712_m=([&]()->V{V _receiver53313=j::regexp(u"^\\s*([+-]?(?:\\d+\\.?\\d*|\\.\\d+)(?:e[+-]?\\d+)?)\\s*(px|pt|pc|mm|cm|in|em|ex|%)?\\s*$","i");V _method53314=this->_literals[23];V _method=j::get(_receiver53313,_method53314);j::Args _params53315=j::Args{_v_50709_v};return j::call(_method,_params53315,_receiver53313);})();
if(j::truth(j::unary("!",_v_50712_m))){return _v_50711_fallback;
}
_v_50713_k=([&]()->V{V _obj53316=j::object();j::put(_obj53316,this->_literals[81],V(1.0));j::put(_obj53316,this->_literals[82],([&]()->V{V _lhs53317=V(4.0);V _rhs53318=V(3.0);return V(j::number(_lhs53317)/j::number(_rhs53318));})());j::put(_obj53316,this->_literals[83],V(16.0));j::put(_obj53316,this->_literals[84],([&]()->V{V _lhs53319=V(96.0);V _rhs53320=V(25.4);return V(j::number(_lhs53319)/j::number(_rhs53320));})());j::put(_obj53316,this->_literals[85],([&]()->V{V _lhs53321=V(96.0);V _rhs53322=V(2.54);return V(j::number(_lhs53321)/j::number(_rhs53322));})());j::put(_obj53316,this->_literals[86],V(96.0));j::put(_obj53316,this->_literals[87],V(16.0));j::put(_obj53316,this->_literals[88],V(8.0));j::put(_obj53316,this->_literals[89],([&]()->V{V _lhs53323=_v_50710_ref;V _rhs53324=V(100.0);return V(j::number(_lhs53323)/j::number(_rhs53324));})());return _obj53316;})();
return ([&]()->V{V _lhs53325=j::unary("+",j::get(_v_50712_m,V(1.0)));V _rhs53326=(j::truth(j::get(_v_50712_m,V(2.0)))?j::get(_v_50713_k,([&]()->V{V _receiver53327=j::get(_v_50712_m,V(2.0));V _method53328=this->_literals[29];V _method=j::get(_receiver53327,_method53328);j::Args _params53329=j::Args{};return j::call(_method,_params53329,_receiver53327);})()):V(1.0));return V(j::number(_lhs53325)*j::number(_rhs53326));})();

}

return V{};
},1);
this->_v_50717_shapeOps.get()=j::function([=](const j::Args &_args_fn50718,const V &_receiver_fn50718,const V &_self_fn50718) mutable ->V{
V _v_50719_tag;
V _v_50720_at;
V _v_50721_vw;
V _v_50722_vh;
_v_50719_tag=_args_fn50718[0];
_v_50720_at=_args_fn50718[1];
_v_50721_vw=_args_fn50718[2];
_v_50722_vh=_args_fn50718[3];
{
j::Cell _v_50723_out;
V _v_50724_diag;
V _v_50725_ellipse;
_v_50723_out.get()=([&]()->V{j::Args _array53330;return j::array(std::move(_array53330));})();
_v_50724_diag=([&]()->V{V _number53339=([&]()->V{V _lhs53340=([&]()->V{V _lhs53342=([&]()->V{V _lhs53344=_v_50721_vw;V _rhs53345=_v_50721_vw;return V(j::number(_lhs53344)*j::number(_rhs53345));})();V _rhs53343=([&]()->V{V _lhs53346=_v_50722_vh;V _rhs53347=_v_50722_vh;return V(j::number(_lhs53346)*j::number(_rhs53347));})();return j::binary("+",_lhs53342,_rhs53343);})();V _rhs53341=V(2.0);return V(j::number(_lhs53340)/j::number(_rhs53341));})();return V(std::sqrt(j::number(_number53339)));})();
_v_50725_ellipse=j::function([=](const j::Args &_args_fn50726,const V &_receiver_fn50726,const V &_self_fn50726) mutable ->V{
V _v_50727_cx;
V _v_50728_cy;
V _v_50729_rx;
V _v_50730_ry;
_v_50727_cx=_args_fn50726[0];
_v_50728_cy=_args_fn50726[1];
_v_50729_rx=_args_fn50726[2];
_v_50730_ry=_args_fn50726[3];
{
V _v_50731_kx;
V _v_50732_ky;
if(j::truth(j::unary("!",([&]()->V{V _logical53348=([&]()->V{V _lhs53349=_v_50729_rx;V _rhs53350=V(0.0);return j::binary(">",_lhs53349,_rhs53350);})();return j::truth(_logical53348)?([&]()->V{V _lhs53351=_v_50730_ry;V _rhs53352=V(0.0);return j::binary(">",_lhs53351,_rhs53352);})():_logical53348;})()))){return V::null();
}
_v_50731_kx=([&]()->V{V _lhs53353=_v_50729_rx;V _rhs53354=this->_v_50614_KAPPA.get();return V(j::number(_lhs53353)*j::number(_rhs53354));})();
_v_50732_ky=([&]()->V{V _lhs53355=_v_50730_ry;V _rhs53356=this->_v_50614_KAPPA.get();return V(j::number(_lhs53355)*j::number(_rhs53356));})();
(void)(([&]()->V{V _receiver53359=_v_50723_out.get();V _method53360=this->_literals[25];V _method=j::get(_receiver53359,_method53360);j::Args _params53361=j::Args{this->_v_50610_MOVE.get(),([&]()->V{V _lhs53357=_v_50727_cx;V _rhs53358=_v_50729_rx;return j::binary("+",_lhs53357,_rhs53358);})(),_v_50728_cy};return j::call(_method,_params53361,_receiver53359);})());
(void)(([&]()->V{V _receiver53372=_v_50723_out.get();V _method53373=this->_literals[25];V _method=j::get(_receiver53372,_method53373);j::Args _params53374=j::Args{this->_v_50612_CURVE.get(),([&]()->V{V _lhs53362=_v_50727_cx;V _rhs53363=_v_50729_rx;return j::binary("+",_lhs53362,_rhs53363);})(),([&]()->V{V _lhs53364=_v_50728_cy;V _rhs53365=_v_50732_ky;return j::binary("+",_lhs53364,_rhs53365);})(),([&]()->V{V _lhs53366=_v_50727_cx;V _rhs53367=_v_50731_kx;return j::binary("+",_lhs53366,_rhs53367);})(),([&]()->V{V _lhs53368=_v_50728_cy;V _rhs53369=_v_50730_ry;return j::binary("+",_lhs53368,_rhs53369);})(),_v_50727_cx,([&]()->V{V _lhs53370=_v_50728_cy;V _rhs53371=_v_50730_ry;return j::binary("+",_lhs53370,_rhs53371);})()};return j::call(_method,_params53374,_receiver53372);})());
(void)(([&]()->V{V _receiver53385=_v_50723_out.get();V _method53386=this->_literals[25];V _method=j::get(_receiver53385,_method53386);j::Args _params53387=j::Args{this->_v_50612_CURVE.get(),([&]()->V{V _lhs53375=_v_50727_cx;V _rhs53376=_v_50731_kx;return V(j::number(_lhs53375)-j::number(_rhs53376));})(),([&]()->V{V _lhs53377=_v_50728_cy;V _rhs53378=_v_50730_ry;return j::binary("+",_lhs53377,_rhs53378);})(),([&]()->V{V _lhs53379=_v_50727_cx;V _rhs53380=_v_50729_rx;return V(j::number(_lhs53379)-j::number(_rhs53380));})(),([&]()->V{V _lhs53381=_v_50728_cy;V _rhs53382=_v_50732_ky;return j::binary("+",_lhs53381,_rhs53382);})(),([&]()->V{V _lhs53383=_v_50727_cx;V _rhs53384=_v_50729_rx;return V(j::number(_lhs53383)-j::number(_rhs53384));})(),_v_50728_cy};return j::call(_method,_params53387,_receiver53385);})());
(void)(([&]()->V{V _receiver53398=_v_50723_out.get();V _method53399=this->_literals[25];V _method=j::get(_receiver53398,_method53399);j::Args _params53400=j::Args{this->_v_50612_CURVE.get(),([&]()->V{V _lhs53388=_v_50727_cx;V _rhs53389=_v_50729_rx;return V(j::number(_lhs53388)-j::number(_rhs53389));})(),([&]()->V{V _lhs53390=_v_50728_cy;V _rhs53391=_v_50732_ky;return V(j::number(_lhs53390)-j::number(_rhs53391));})(),([&]()->V{V _lhs53392=_v_50727_cx;V _rhs53393=_v_50731_kx;return V(j::number(_lhs53392)-j::number(_rhs53393));})(),([&]()->V{V _lhs53394=_v_50728_cy;V _rhs53395=_v_50730_ry;return V(j::number(_lhs53394)-j::number(_rhs53395));})(),_v_50727_cx,([&]()->V{V _lhs53396=_v_50728_cy;V _rhs53397=_v_50730_ry;return V(j::number(_lhs53396)-j::number(_rhs53397));})()};return j::call(_method,_params53400,_receiver53398);})());
(void)(([&]()->V{V _receiver53411=_v_50723_out.get();V _method53412=this->_literals[25];V _method=j::get(_receiver53411,_method53412);j::Args _params53413=j::Args{this->_v_50612_CURVE.get(),([&]()->V{V _lhs53401=_v_50727_cx;V _rhs53402=_v_50731_kx;return j::binary("+",_lhs53401,_rhs53402);})(),([&]()->V{V _lhs53403=_v_50728_cy;V _rhs53404=_v_50730_ry;return V(j::number(_lhs53403)-j::number(_rhs53404));})(),([&]()->V{V _lhs53405=_v_50727_cx;V _rhs53406=_v_50729_rx;return j::binary("+",_lhs53405,_rhs53406);})(),([&]()->V{V _lhs53407=_v_50728_cy;V _rhs53408=_v_50732_ky;return V(j::number(_lhs53407)-j::number(_rhs53408));})(),([&]()->V{V _lhs53409=_v_50727_cx;V _rhs53410=_v_50729_rx;return j::binary("+",_lhs53409,_rhs53410);})(),_v_50728_cy};return j::call(_method,_params53413,_receiver53411);})());
(void)(([&]()->V{V _receiver53414=_v_50723_out.get();V _method53415=this->_literals[25];V _method=j::get(_receiver53414,_method53415);j::Args _params53416=j::Args{this->_v_50613_CLOSE.get()};return j::call(_method,_params53416,_receiver53414);})());
return _v_50723_out.get();

}

return V{};
},4);
{V _switch53417=_v_50719_tag;int _case53418=-1;if(_case53418<0&&j::equal(_switch53417,this->_literals[90]))_case53418=0;if(_case53418<0&&j::equal(_switch53417,this->_literals[91]))_case53418=1;if(_case53418<0&&j::equal(_switch53417,this->_literals[92]))_case53418=2;if(_case53418<0&&j::equal(_switch53417,this->_literals[93]))_case53418=3;if(_case53418<0&&j::equal(_switch53417,this->_literals[94]))_case53418=4;if(_case53418<0&&j::equal(_switch53417,this->_literals[95]))_case53418=5;if(_case53418<0&&j::equal(_switch53417,this->_literals[96]))_case53418=6;if(_case53418>=0&&_case53418<=0){(void)(([&]()->V{V _callee53421=this->_v_50670_pathOps.get();return j::call(_callee53421,j::Args{([&]()->V{V _logical53420=j::get(_v_50720_at,this->_literals[97]);return j::nullish(_logical53420)?this->_literals[1]:_logical53420;})(),_v_50723_out.get()});})());
return (j::truth(j::get(_v_50723_out.get(),this->_literals[5]))?_v_50723_out.get():V::null());
}if(_case53418>=0&&_case53418<=1){{
V _v_50733_x;
V _v_50734_y;
V _v_50735_w;
V _v_50736_h;
V _v_50737_rx;
V _v_50738_ry;
_v_50733_x=([&]()->V{V _callee53422=this->_v_50707_len.get();return j::call(_callee53422,j::Args{j::get(_v_50720_at,this->_literals[98]),_v_50721_vw});})();
_v_50734_y=([&]()->V{V _callee53423=this->_v_50707_len.get();return j::call(_callee53423,j::Args{j::get(_v_50720_at,this->_literals[99]),_v_50722_vh});})();
_v_50735_w=([&]()->V{V _callee53424=this->_v_50707_len.get();return j::call(_callee53424,j::Args{j::get(_v_50720_at,this->_literals[100]),_v_50721_vw});})();
_v_50736_h=([&]()->V{V _callee53425=this->_v_50707_len.get();return j::call(_callee53425,j::Args{j::get(_v_50720_at,this->_literals[101]),_v_50722_vh});})();
if(j::truth(j::unary("!",([&]()->V{V _logical53426=([&]()->V{V _lhs53427=_v_50735_w;V _rhs53428=V(0.0);return j::binary(">",_lhs53427,_rhs53428);})();return j::truth(_logical53426)?([&]()->V{V _lhs53429=_v_50736_h;V _rhs53430=V(0.0);return j::binary(">",_lhs53429,_rhs53430);})():_logical53426;})()))){return V::null();
}
_v_50737_rx=(j::truth(([&]()->V{V _logical53431=([&]()->V{V _lhs53432=j::get(_v_50720_at,this->_literals[102]);V _rhs53433=j::builtin("undefined");return V(j::equal(_lhs53432,_rhs53433,true));})();return !j::truth(_logical53431)?([&]()->V{V _lhs53434=j::get(_v_50720_at,this->_literals[102]);V _rhs53435=this->_literals[103];return V(j::equal(_lhs53434,_rhs53435,true));})():_logical53431;})())?j::builtin("NaN"):([&]()->V{V _callee53436=this->_v_50707_len.get();return j::call(_callee53436,j::Args{j::get(_v_50720_at,this->_literals[102]),_v_50721_vw});})());
_v_50738_ry=(j::truth(([&]()->V{V _logical53437=([&]()->V{V _lhs53438=j::get(_v_50720_at,this->_literals[104]);V _rhs53439=j::builtin("undefined");return V(j::equal(_lhs53438,_rhs53439,true));})();return !j::truth(_logical53437)?([&]()->V{V _lhs53440=j::get(_v_50720_at,this->_literals[104]);V _rhs53441=this->_literals[103];return V(j::equal(_lhs53440,_rhs53441,true));})():_logical53437;})())?j::builtin("NaN"):([&]()->V{V _callee53442=this->_v_50707_len.get();return j::call(_callee53442,j::Args{j::get(_v_50720_at,this->_literals[104]),_v_50722_vh});})());
if(j::truth(([&]()->V{V _receiver53443=j::builtin("Number");V _method53444=this->_literals[71];V _method=j::get(_receiver53443,_method53444);j::Args _params53445=j::Args{_v_50737_rx};return j::call(_method,_params53445,_receiver53443);})())){(void)((_v_50737_rx=(j::truth(([&]()->V{V _receiver53447=j::builtin("Number");V _method53448=this->_literals[71];V _method=j::get(_receiver53447,_method53448);j::Args _params53449=j::Args{_v_50738_ry};return j::call(_method,_params53449,_receiver53447);})())?V(0.0):_v_50738_ry)));
}
if(j::truth(([&]()->V{V _receiver53450=j::builtin("Number");V _method53451=this->_literals[71];V _method=j::get(_receiver53450,_method53451);j::Args _params53452=j::Args{_v_50738_ry};return j::call(_method,_params53452,_receiver53450);})())){(void)((_v_50738_ry=_v_50737_rx));
}
(void)((_v_50737_rx=([&]()->V{V _callee53457=this->_v_50447_clamp.get();return j::call(_callee53457,j::Args{_v_50737_rx,V(0.0),([&]()->V{V _lhs53455=_v_50735_w;V _rhs53456=V(2.0);return V(j::number(_lhs53455)/j::number(_rhs53456));})()});})()));
(void)((_v_50738_ry=([&]()->V{V _callee53461=this->_v_50447_clamp.get();return j::call(_callee53461,j::Args{_v_50738_ry,V(0.0),([&]()->V{V _lhs53459=_v_50736_h;V _rhs53460=V(2.0);return V(j::number(_lhs53459)/j::number(_rhs53460));})()});})()));
if(j::truth(([&]()->V{V _logical53462=j::unary("!",_v_50737_rx);return !j::truth(_logical53462)?j::unary("!",_v_50738_ry):_logical53462;})())){(void)(([&]()->V{V _receiver53471=_v_50723_out.get();V _method53472=this->_literals[25];V _method=j::get(_receiver53471,_method53472);j::Args _params53473=j::Args{this->_v_50610_MOVE.get(),_v_50733_x,_v_50734_y,this->_v_50611_LINE.get(),([&]()->V{V _lhs53463=_v_50733_x;V _rhs53464=_v_50735_w;return j::binary("+",_lhs53463,_rhs53464);})(),_v_50734_y,this->_v_50611_LINE.get(),([&]()->V{V _lhs53465=_v_50733_x;V _rhs53466=_v_50735_w;return j::binary("+",_lhs53465,_rhs53466);})(),([&]()->V{V _lhs53467=_v_50734_y;V _rhs53468=_v_50736_h;return j::binary("+",_lhs53467,_rhs53468);})(),this->_v_50611_LINE.get(),_v_50733_x,([&]()->V{V _lhs53469=_v_50734_y;V _rhs53470=_v_50736_h;return j::binary("+",_lhs53469,_rhs53470);})(),this->_v_50613_CLOSE.get()};return j::call(_method,_params53473,_receiver53471);})());
}else {
V _v_50739_kx;
V _v_50740_ky;
_v_50739_kx=([&]()->V{V _lhs53474=_v_50737_rx;V _rhs53475=([&]()->V{V _lhs53476=V(1.0);V _rhs53477=this->_v_50614_KAPPA.get();return V(j::number(_lhs53476)-j::number(_rhs53477));})();return V(j::number(_lhs53474)*j::number(_rhs53475));})();
_v_50740_ky=([&]()->V{V _lhs53478=_v_50738_ry;V _rhs53479=([&]()->V{V _lhs53480=V(1.0);V _rhs53481=this->_v_50614_KAPPA.get();return V(j::number(_lhs53480)-j::number(_rhs53481));})();return V(j::number(_lhs53478)*j::number(_rhs53479));})();
(void)(([&]()->V{V _receiver53500=_v_50723_out.get();V _method53501=this->_literals[25];V _method=j::get(_receiver53500,_method53501);j::Args _params53502=j::Args{this->_v_50610_MOVE.get(),([&]()->V{V _lhs53482=_v_50733_x;V _rhs53483=_v_50737_rx;return j::binary("+",_lhs53482,_rhs53483);})(),_v_50734_y,this->_v_50611_LINE.get(),([&]()->V{V _lhs53484=([&]()->V{V _lhs53486=_v_50733_x;V _rhs53487=_v_50735_w;return j::binary("+",_lhs53486,_rhs53487);})();V _rhs53485=_v_50737_rx;return V(j::number(_lhs53484)-j::number(_rhs53485));})(),_v_50734_y,this->_v_50612_CURVE.get(),([&]()->V{V _lhs53488=([&]()->V{V _lhs53490=_v_50733_x;V _rhs53491=_v_50735_w;return j::binary("+",_lhs53490,_rhs53491);})();V _rhs53489=_v_50739_kx;return V(j::number(_lhs53488)-j::number(_rhs53489));})(),_v_50734_y,([&]()->V{V _lhs53492=_v_50733_x;V _rhs53493=_v_50735_w;return j::binary("+",_lhs53492,_rhs53493);})(),([&]()->V{V _lhs53494=_v_50734_y;V _rhs53495=_v_50740_ky;return j::binary("+",_lhs53494,_rhs53495);})(),([&]()->V{V _lhs53496=_v_50733_x;V _rhs53497=_v_50735_w;return j::binary("+",_lhs53496,_rhs53497);})(),([&]()->V{V _lhs53498=_v_50734_y;V _rhs53499=_v_50738_ry;return j::binary("+",_lhs53498,_rhs53499);})()};return j::call(_method,_params53502,_receiver53500);})());
(void)(([&]()->V{V _receiver53527=_v_50723_out.get();V _method53528=this->_literals[25];V _method=j::get(_receiver53527,_method53528);j::Args _params53529=j::Args{this->_v_50611_LINE.get(),([&]()->V{V _lhs53503=_v_50733_x;V _rhs53504=_v_50735_w;return j::binary("+",_lhs53503,_rhs53504);})(),([&]()->V{V _lhs53505=([&]()->V{V _lhs53507=_v_50734_y;V _rhs53508=_v_50736_h;return j::binary("+",_lhs53507,_rhs53508);})();V _rhs53506=_v_50738_ry;return V(j::number(_lhs53505)-j::number(_rhs53506));})(),this->_v_50612_CURVE.get(),([&]()->V{V _lhs53509=_v_50733_x;V _rhs53510=_v_50735_w;return j::binary("+",_lhs53509,_rhs53510);})(),([&]()->V{V _lhs53511=([&]()->V{V _lhs53513=_v_50734_y;V _rhs53514=_v_50736_h;return j::binary("+",_lhs53513,_rhs53514);})();V _rhs53512=_v_50740_ky;return V(j::number(_lhs53511)-j::number(_rhs53512));})(),([&]()->V{V _lhs53515=([&]()->V{V _lhs53517=_v_50733_x;V _rhs53518=_v_50735_w;return j::binary("+",_lhs53517,_rhs53518);})();V _rhs53516=_v_50739_kx;return V(j::number(_lhs53515)-j::number(_rhs53516));})(),([&]()->V{V _lhs53519=_v_50734_y;V _rhs53520=_v_50736_h;return j::binary("+",_lhs53519,_rhs53520);})(),([&]()->V{V _lhs53521=([&]()->V{V _lhs53523=_v_50733_x;V _rhs53524=_v_50735_w;return j::binary("+",_lhs53523,_rhs53524);})();V _rhs53522=_v_50737_rx;return V(j::number(_lhs53521)-j::number(_rhs53522));})(),([&]()->V{V _lhs53525=_v_50734_y;V _rhs53526=_v_50736_h;return j::binary("+",_lhs53525,_rhs53526);})()};return j::call(_method,_params53529,_receiver53527);})());
(void)(([&]()->V{V _receiver53546=_v_50723_out.get();V _method53547=this->_literals[25];V _method=j::get(_receiver53546,_method53547);j::Args _params53548=j::Args{this->_v_50611_LINE.get(),([&]()->V{V _lhs53530=_v_50733_x;V _rhs53531=_v_50737_rx;return j::binary("+",_lhs53530,_rhs53531);})(),([&]()->V{V _lhs53532=_v_50734_y;V _rhs53533=_v_50736_h;return j::binary("+",_lhs53532,_rhs53533);})(),this->_v_50612_CURVE.get(),([&]()->V{V _lhs53534=_v_50733_x;V _rhs53535=_v_50739_kx;return j::binary("+",_lhs53534,_rhs53535);})(),([&]()->V{V _lhs53536=_v_50734_y;V _rhs53537=_v_50736_h;return j::binary("+",_lhs53536,_rhs53537);})(),_v_50733_x,([&]()->V{V _lhs53538=([&]()->V{V _lhs53540=_v_50734_y;V _rhs53541=_v_50736_h;return j::binary("+",_lhs53540,_rhs53541);})();V _rhs53539=_v_50740_ky;return V(j::number(_lhs53538)-j::number(_rhs53539));})(),_v_50733_x,([&]()->V{V _lhs53542=([&]()->V{V _lhs53544=_v_50734_y;V _rhs53545=_v_50736_h;return j::binary("+",_lhs53544,_rhs53545);})();V _rhs53543=_v_50738_ry;return V(j::number(_lhs53542)-j::number(_rhs53543));})()};return j::call(_method,_params53548,_receiver53546);})());
(void)(([&]()->V{V _receiver53557=_v_50723_out.get();V _method53558=this->_literals[25];V _method=j::get(_receiver53557,_method53558);j::Args _params53559=j::Args{this->_v_50611_LINE.get(),_v_50733_x,([&]()->V{V _lhs53549=_v_50734_y;V _rhs53550=_v_50738_ry;return j::binary("+",_lhs53549,_rhs53550);})(),this->_v_50612_CURVE.get(),_v_50733_x,([&]()->V{V _lhs53551=_v_50734_y;V _rhs53552=_v_50740_ky;return j::binary("+",_lhs53551,_rhs53552);})(),([&]()->V{V _lhs53553=_v_50733_x;V _rhs53554=_v_50739_kx;return j::binary("+",_lhs53553,_rhs53554);})(),_v_50734_y,([&]()->V{V _lhs53555=_v_50733_x;V _rhs53556=_v_50737_rx;return j::binary("+",_lhs53555,_rhs53556);})(),_v_50734_y,this->_v_50613_CLOSE.get()};return j::call(_method,_params53559,_receiver53557);})());

}

return _v_50723_out.get();

}
}if(_case53418>=0&&_case53418<=2){return ([&]()->V{V _callee53564=_v_50725_ellipse;return j::call(_callee53564,j::Args{([&]()->V{V _callee53560=this->_v_50707_len.get();return j::call(_callee53560,j::Args{j::get(_v_50720_at,this->_literals[105]),_v_50721_vw});})(),([&]()->V{V _callee53561=this->_v_50707_len.get();return j::call(_callee53561,j::Args{j::get(_v_50720_at,this->_literals[106]),_v_50722_vh});})(),([&]()->V{V _callee53562=this->_v_50707_len.get();return j::call(_callee53562,j::Args{j::get(_v_50720_at,this->_literals[107]),_v_50724_diag});})(),([&]()->V{V _callee53563=this->_v_50707_len.get();return j::call(_callee53563,j::Args{j::get(_v_50720_at,this->_literals[107]),_v_50724_diag});})()});})();
}if(_case53418>=0&&_case53418<=3){{
V _v_50741_rx;
V _v_50742_ry;
_v_50741_rx=(j::truth(([&]()->V{V _logical53565=([&]()->V{V _lhs53566=j::get(_v_50720_at,this->_literals[102]);V _rhs53567=j::builtin("undefined");return V(j::equal(_lhs53566,_rhs53567,true));})();return !j::truth(_logical53565)?([&]()->V{V _lhs53568=j::get(_v_50720_at,this->_literals[102]);V _rhs53569=this->_literals[103];return V(j::equal(_lhs53568,_rhs53569,true));})():_logical53565;})())?([&]()->V{V _callee53570=this->_v_50707_len.get();return j::call(_callee53570,j::Args{j::get(_v_50720_at,this->_literals[104]),_v_50722_vh});})():([&]()->V{V _callee53571=this->_v_50707_len.get();return j::call(_callee53571,j::Args{j::get(_v_50720_at,this->_literals[102]),_v_50721_vw});})());
_v_50742_ry=(j::truth(([&]()->V{V _logical53572=([&]()->V{V _lhs53573=j::get(_v_50720_at,this->_literals[104]);V _rhs53574=j::builtin("undefined");return V(j::equal(_lhs53573,_rhs53574,true));})();return !j::truth(_logical53572)?([&]()->V{V _lhs53575=j::get(_v_50720_at,this->_literals[104]);V _rhs53576=this->_literals[103];return V(j::equal(_lhs53575,_rhs53576,true));})():_logical53572;})())?_v_50741_rx:([&]()->V{V _callee53577=this->_v_50707_len.get();return j::call(_callee53577,j::Args{j::get(_v_50720_at,this->_literals[104]),_v_50722_vh});})());
return ([&]()->V{V _callee53580=_v_50725_ellipse;return j::call(_callee53580,j::Args{([&]()->V{V _callee53578=this->_v_50707_len.get();return j::call(_callee53578,j::Args{j::get(_v_50720_at,this->_literals[105]),_v_50721_vw});})(),([&]()->V{V _callee53579=this->_v_50707_len.get();return j::call(_callee53579,j::Args{j::get(_v_50720_at,this->_literals[106]),_v_50722_vh});})(),_v_50741_rx,_v_50742_ry});})();

}
}if(_case53418>=0&&_case53418<=4){(void)(([&]()->V{V _receiver53585=_v_50723_out.get();V _method53586=this->_literals[25];V _method=j::get(_receiver53585,_method53586);j::Args _params53587=j::Args{this->_v_50610_MOVE.get(),([&]()->V{V _callee53581=this->_v_50707_len.get();return j::call(_callee53581,j::Args{j::get(_v_50720_at,this->_literals[108]),_v_50721_vw});})(),([&]()->V{V _callee53582=this->_v_50707_len.get();return j::call(_callee53582,j::Args{j::get(_v_50720_at,this->_literals[109]),_v_50722_vh});})(),this->_v_50611_LINE.get(),([&]()->V{V _callee53583=this->_v_50707_len.get();return j::call(_callee53583,j::Args{j::get(_v_50720_at,this->_literals[110]),_v_50721_vw});})(),([&]()->V{V _callee53584=this->_v_50707_len.get();return j::call(_callee53584,j::Args{j::get(_v_50720_at,this->_literals[111]),_v_50722_vh});})()};return j::call(_method,_params53587,_receiver53585);})());
return _v_50723_out.get();
}if(_case53418>=0&&_case53418<=5){}if(_case53418>=0&&_case53418<=6){{
V _v_50743_p;
_v_50743_p=([&]()->V{V _callee53588=this->_v_50714_numbers.get();return j::call(_callee53588,j::Args{j::get(_v_50720_at,this->_literals[112])});})();
if(j::truth(([&]()->V{V _lhs53589=j::get(_v_50743_p,this->_literals[5]);V _rhs53590=V(4.0);return j::binary("<",_lhs53589,_rhs53590);})())){return V::null();
}
{V _v_50744_i;
_v_50744_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs53591=([&]()->V{V _lhs53593=_v_50744_i;V _rhs53594=V(1.0);return j::binary("+",_lhs53593,_rhs53594);})();V _rhs53592=j::get(_v_50743_p,this->_literals[5]);return j::binary("<",_lhs53591,_rhs53592);})());(void)((_v_50744_i=j::binary("+",_v_50744_i,V(2.0))))){(void)(([&]()->V{V _receiver53598=_v_50723_out.get();V _method53599=this->_literals[25];V _method=j::get(_receiver53598,_method53599);j::Args _params53600=j::Args{(j::truth(_v_50744_i)?this->_v_50611_LINE.get():this->_v_50610_MOVE.get()),j::get(_v_50743_p,_v_50744_i),j::get(_v_50743_p,([&]()->V{V _lhs53596=_v_50744_i;V _rhs53597=V(1.0);return j::binary("+",_lhs53596,_rhs53597);})())};return j::call(_method,_params53600,_receiver53598);})());
}}
if(j::truth(([&]()->V{V _lhs53601=_v_50719_tag;V _rhs53602=this->_literals[96];return V(j::equal(_lhs53601,_rhs53602,true));})())){(void)(([&]()->V{V _receiver53603=_v_50723_out.get();V _method53604=this->_literals[25];V _method=j::get(_receiver53603,_method53604);j::Args _params53605=j::Args{this->_v_50613_CLOSE.get()};return j::call(_method,_params53605,_receiver53603);})());
}
return _v_50723_out.get();

}
}_switch_end53419:;
}
return V::null();

}

return V{};
},4);
this->_v_50745_moved.get()=j::function([=](const j::Args &_args_fn50746,const V &_receiver_fn50746,const V &_self_fn50746) mutable ->V{
V _v_50747_ops;
V _v_50748_m;
_v_50747_ops=_args_fn50746[0];
_v_50748_m=_args_fn50746[1];
{
V _v_50749_out;
_v_50749_out=([&]()->V{V _receiver53606=j::builtin("Float64Array");V _method53607=this->_literals[113];V _method=j::get(_receiver53606,_method53607);j::Args _params53608=j::Args{_v_50747_ops};return j::call(_method,_params53608,_receiver53606);})();
{V _v_50750_i;
_v_50750_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs53609=_v_50750_i;V _rhs53610=j::get(_v_50749_out,this->_literals[5]);return j::binary("<",_lhs53609,_rhs53610);})());(void)0){
V _v_50751_op;
V _v_50752_pairs;
_v_50751_op=j::get(_v_50749_out,j::increment(_v_50750_i,1,false));
_v_50752_pairs=(j::truth(([&]()->V{V _lhs53611=_v_50751_op;V _rhs53612=this->_v_50612_CURVE.get();return V(j::equal(_lhs53611,_rhs53612,true));})())?V(3.0):(j::truth(([&]()->V{V _lhs53613=_v_50751_op;V _rhs53614=this->_v_50613_CLOSE.get();return V(j::equal(_lhs53613,_rhs53614,true));})())?V(0.0):V(1.0)));
{V _v_50753_k;
_v_50753_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs53615=_v_50753_k;V _rhs53616=_v_50752_pairs;return j::binary("<",_lhs53615,_rhs53616);})());(void)((j::increment(_v_50753_k,1,false),(_v_50750_i=j::binary("+",_v_50750_i,V(2.0)))))){
V _v_50754_x;
V _v_50755_y;
_v_50754_x=j::get(_v_50749_out,_v_50750_i);
_v_50755_y=j::get(_v_50749_out,([&]()->V{V _lhs53618=_v_50750_i;V _rhs53619=V(1.0);return j::binary("+",_lhs53618,_rhs53619);})());
(void)(([&]()->V{V _base53621=_v_50749_out;V _key53622=_v_50750_i;V _assign53620=([&]()->V{V _lhs53623=([&]()->V{V _lhs53625=([&]()->V{V _lhs53627=j::get(_v_50748_m,V(0.0));V _rhs53628=_v_50754_x;return V(j::number(_lhs53627)*j::number(_rhs53628));})();V _rhs53626=([&]()->V{V _lhs53629=j::get(_v_50748_m,V(2.0));V _rhs53630=_v_50755_y;return V(j::number(_lhs53629)*j::number(_rhs53630));})();return j::binary("+",_lhs53625,_rhs53626);})();V _rhs53624=j::get(_v_50748_m,V(4.0));return j::binary("+",_lhs53623,_rhs53624);})();return j::put(_base53621,_key53622,_assign53620);})());
(void)(([&]()->V{V _base53632=_v_50749_out;V _key53633=([&]()->V{V _lhs53634=_v_50750_i;V _rhs53635=V(1.0);return j::binary("+",_lhs53634,_rhs53635);})();V _assign53631=([&]()->V{V _lhs53636=([&]()->V{V _lhs53638=([&]()->V{V _lhs53640=j::get(_v_50748_m,V(1.0));V _rhs53641=_v_50754_x;return V(j::number(_lhs53640)*j::number(_rhs53641));})();V _rhs53639=([&]()->V{V _lhs53642=j::get(_v_50748_m,V(3.0));V _rhs53643=_v_50755_y;return V(j::number(_lhs53642)*j::number(_rhs53643));})();return j::binary("+",_lhs53638,_rhs53639);})();V _rhs53637=j::get(_v_50748_m,V(5.0));return j::binary("+",_lhs53636,_rhs53637);})();return j::put(_base53632,_key53633,_assign53631);})());

}
}

}
}
return _v_50749_out;

}

return V{};
},2);
this->_v_50756_flatten.get()=j::function([=](const j::Args &_args_fn50757,const V &_receiver_fn50757,const V &_self_fn50757) mutable ->V{
V _v_50758_ops;
j::Cell _v_50759_m;
V _v_50760_tol;
_v_50758_ops=_args_fn50757[0];
_v_50759_m.get()=_args_fn50757[1];
_v_50760_tol=_args_fn50757[2];
{
j::Cell _v_50761_subs;
j::Cell _v_50762_pts;
V _v_50763_x;
V _v_50764_y;
V _v_50765_flush;
V _v_50768_add;
V _v_50772_tx;
V _v_50776_ty;
_v_50761_subs.get()=([&]()->V{j::Args _array53644;return j::array(std::move(_array53644));})();
_v_50762_pts.get()=([&]()->V{j::Args _array53645;return j::array(std::move(_array53645));})();
_v_50763_x=V(0.0);
_v_50764_y=V(0.0);
_v_50765_flush=j::function([=](const j::Args &_args_fn50766,const V &_receiver_fn50766,const V &_self_fn50766) mutable ->V{
V _v_50767_closed;
_v_50767_closed=_args_fn50766[0];
{
if(j::truth(([&]()->V{V _lhs53646=j::get(_v_50762_pts.get(),this->_literals[5]);V _rhs53647=V(2.0);return j::binary(">=",_lhs53646,_rhs53647);})())){(void)(([&]()->V{V _receiver53652=_v_50761_subs.get();V _method53653=this->_literals[25];V _method=j::get(_receiver53652,_method53653);j::Args _params53654=j::Args{([&]()->V{V _obj53648=j::object();j::put(_obj53648,this->_literals[114],([&]()->V{V _receiver53649=j::builtin("Float64Array");V _method53650=this->_literals[113];V _method=j::get(_receiver53649,_method53650);j::Args _params53651=j::Args{_v_50762_pts.get()};return j::call(_method,_params53651,_receiver53649);})());j::put(_obj53648,this->_literals[115],_v_50767_closed);return _obj53648;})()};return j::call(_method,_params53654,_receiver53652);})());
}
(void)((_v_50762_pts.get()=([&]()->V{j::Args _array53656;return j::array(std::move(_array53656));})()));

}

return V{};
},1);
_v_50768_add=j::function([=](const j::Args &_args_fn50769,const V &_receiver_fn50769,const V &_self_fn50769) mutable ->V{
V _v_50770_px;
V _v_50771_py;
_v_50770_px=_args_fn50769[0];
_v_50771_py=_args_fn50769[1];
{
if(j::truth(([&]()->V{V _logical53657=([&]()->V{V _logical53658=j::get(_v_50762_pts.get(),this->_literals[5]);return j::truth(_logical53658)?([&]()->V{V _lhs53659=([&]()->V{V _number53665=([&]()->V{V _lhs53666=j::get(_v_50762_pts.get(),([&]()->V{V _lhs53668=j::get(_v_50762_pts.get(),this->_literals[5]);V _rhs53669=V(2.0);return V(j::number(_lhs53668)-j::number(_rhs53669));})());V _rhs53667=_v_50770_px;return V(j::number(_lhs53666)-j::number(_rhs53667));})();return V(std::fabs(j::number(_number53665)));})();V _rhs53660=V(1e-9);return j::binary("<",_lhs53659,_rhs53660);})():_logical53658;})();return j::truth(_logical53657)?([&]()->V{V _lhs53670=([&]()->V{V _number53676=([&]()->V{V _lhs53677=j::get(_v_50762_pts.get(),([&]()->V{V _lhs53679=j::get(_v_50762_pts.get(),this->_literals[5]);V _rhs53680=V(1.0);return V(j::number(_lhs53679)-j::number(_rhs53680));})());V _rhs53678=_v_50771_py;return V(j::number(_lhs53677)-j::number(_rhs53678));})();return V(std::fabs(j::number(_number53676)));})();V _rhs53671=V(1e-9);return j::binary("<",_lhs53670,_rhs53671);})():_logical53657;})())){return V{};
}
(void)(([&]()->V{V _receiver53681=_v_50762_pts.get();V _method53682=this->_literals[25];V _method=j::get(_receiver53681,_method53682);j::Args _params53683=j::Args{_v_50770_px,_v_50771_py};return j::call(_method,_params53683,_receiver53681);})());

}

return V{};
},2);
_v_50772_tx=j::function([=](const j::Args &_args_fn50773,const V &_receiver_fn50773,const V &_self_fn50773) mutable ->V{
V _v_50774_px;
V _v_50775_py;
_v_50774_px=_args_fn50773[0];
_v_50775_py=_args_fn50773[1];
return ([&]()->V{V _lhs53684=([&]()->V{V _lhs53686=([&]()->V{V _lhs53688=j::get(_v_50759_m.get(),V(0.0));V _rhs53689=_v_50774_px;return V(j::number(_lhs53688)*j::number(_rhs53689));})();V _rhs53687=([&]()->V{V _lhs53690=j::get(_v_50759_m.get(),V(2.0));V _rhs53691=_v_50775_py;return V(j::number(_lhs53690)*j::number(_rhs53691));})();return j::binary("+",_lhs53686,_rhs53687);})();V _rhs53685=j::get(_v_50759_m.get(),V(4.0));return j::binary("+",_lhs53684,_rhs53685);})();
return V{};
},2);
_v_50776_ty=j::function([=](const j::Args &_args_fn50777,const V &_receiver_fn50777,const V &_self_fn50777) mutable ->V{
V _v_50778_px;
V _v_50779_py;
_v_50778_px=_args_fn50777[0];
_v_50779_py=_args_fn50777[1];
return ([&]()->V{V _lhs53692=([&]()->V{V _lhs53694=([&]()->V{V _lhs53696=j::get(_v_50759_m.get(),V(1.0));V _rhs53697=_v_50778_px;return V(j::number(_lhs53696)*j::number(_rhs53697));})();V _rhs53695=([&]()->V{V _lhs53698=j::get(_v_50759_m.get(),V(3.0));V _rhs53699=_v_50779_py;return V(j::number(_lhs53698)*j::number(_rhs53699));})();return j::binary("+",_lhs53694,_rhs53695);})();V _rhs53693=j::get(_v_50759_m.get(),V(5.0));return j::binary("+",_lhs53692,_rhs53693);})();
return V{};
},2);
{V _v_50780_i;
_v_50780_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs53700=_v_50780_i;V _rhs53701=j::get(_v_50758_ops,this->_literals[5]);return j::binary("<",_lhs53700,_rhs53701);})());(void)0){
V _v_50781_op;
_v_50781_op=j::get(_v_50758_ops,_v_50780_i);
if(j::truth(([&]()->V{V _lhs53702=_v_50781_op;V _rhs53703=this->_v_50610_MOVE.get();return V(j::equal(_lhs53702,_rhs53703,true));})())){
(void)(([&]()->V{V _callee53704=_v_50765_flush;return j::call(_callee53704,j::Args{V(false)});})());
(void)((_v_50763_x=([&]()->V{V _callee53710=_v_50772_tx;return j::call(_callee53710,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53706=_v_50780_i;V _rhs53707=V(1.0);return j::binary("+",_lhs53706,_rhs53707);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53708=_v_50780_i;V _rhs53709=V(2.0);return j::binary("+",_lhs53708,_rhs53709);})())});})()));
(void)((_v_50764_y=([&]()->V{V _callee53716=_v_50776_ty;return j::call(_callee53716,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53712=_v_50780_i;V _rhs53713=V(1.0);return j::binary("+",_lhs53712,_rhs53713);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53714=_v_50780_i;V _rhs53715=V(2.0);return j::binary("+",_lhs53714,_rhs53715);})())});})()));
(void)(([&]()->V{V _callee53717=_v_50768_add;return j::call(_callee53717,j::Args{_v_50763_x,_v_50764_y});})());
(void)((_v_50780_i=j::binary("+",_v_50780_i,V(3.0))));

}
else {if(j::truth(([&]()->V{V _lhs53719=_v_50781_op;V _rhs53720=this->_v_50611_LINE.get();return V(j::equal(_lhs53719,_rhs53720,true));})())){
(void)((_v_50763_x=([&]()->V{V _callee53726=_v_50772_tx;return j::call(_callee53726,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53722=_v_50780_i;V _rhs53723=V(1.0);return j::binary("+",_lhs53722,_rhs53723);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53724=_v_50780_i;V _rhs53725=V(2.0);return j::binary("+",_lhs53724,_rhs53725);})())});})()));
(void)((_v_50764_y=([&]()->V{V _callee53732=_v_50776_ty;return j::call(_callee53732,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53728=_v_50780_i;V _rhs53729=V(1.0);return j::binary("+",_lhs53728,_rhs53729);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53730=_v_50780_i;V _rhs53731=V(2.0);return j::binary("+",_lhs53730,_rhs53731);})())});})()));
if(j::truth(j::unary("!",j::get(_v_50762_pts.get(),this->_literals[5])))){(void)(([&]()->V{V _receiver53733=_v_50762_pts.get();V _method53734=this->_literals[25];V _method=j::get(_receiver53733,_method53734);j::Args _params53735=j::Args{_v_50763_x,_v_50764_y};return j::call(_method,_params53735,_receiver53733);})());
}else {(void)(([&]()->V{V _callee53736=_v_50768_add;return j::call(_callee53736,j::Args{_v_50763_x,_v_50764_y});})());
}
(void)((_v_50780_i=j::binary("+",_v_50780_i,V(3.0))));

}
else {if(j::truth(([&]()->V{V _lhs53738=_v_50781_op;V _rhs53739=this->_v_50612_CURVE.get();return V(j::equal(_lhs53738,_rhs53739,true));})())){
V _v_50782_x1;
V _v_50783_y1;
V _v_50784_x2;
V _v_50785_y2;
V _v_50786_x3;
V _v_50787_y3;
V _v_50788_dd;
V _v_50789_n;
_v_50782_x1=([&]()->V{V _callee53744=_v_50772_tx;return j::call(_callee53744,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53740=_v_50780_i;V _rhs53741=V(1.0);return j::binary("+",_lhs53740,_rhs53741);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53742=_v_50780_i;V _rhs53743=V(2.0);return j::binary("+",_lhs53742,_rhs53743);})())});})();
_v_50783_y1=([&]()->V{V _callee53749=_v_50776_ty;return j::call(_callee53749,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53745=_v_50780_i;V _rhs53746=V(1.0);return j::binary("+",_lhs53745,_rhs53746);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53747=_v_50780_i;V _rhs53748=V(2.0);return j::binary("+",_lhs53747,_rhs53748);})())});})();
_v_50784_x2=([&]()->V{V _callee53754=_v_50772_tx;return j::call(_callee53754,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53750=_v_50780_i;V _rhs53751=V(3.0);return j::binary("+",_lhs53750,_rhs53751);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53752=_v_50780_i;V _rhs53753=V(4.0);return j::binary("+",_lhs53752,_rhs53753);})())});})();
_v_50785_y2=([&]()->V{V _callee53759=_v_50776_ty;return j::call(_callee53759,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53755=_v_50780_i;V _rhs53756=V(3.0);return j::binary("+",_lhs53755,_rhs53756);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53757=_v_50780_i;V _rhs53758=V(4.0);return j::binary("+",_lhs53757,_rhs53758);})())});})();
_v_50786_x3=([&]()->V{V _callee53764=_v_50772_tx;return j::call(_callee53764,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53760=_v_50780_i;V _rhs53761=V(5.0);return j::binary("+",_lhs53760,_rhs53761);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53762=_v_50780_i;V _rhs53763=V(6.0);return j::binary("+",_lhs53762,_rhs53763);})())});})();
_v_50787_y3=([&]()->V{V _callee53769=_v_50776_ty;return j::call(_callee53769,j::Args{j::get(_v_50758_ops,([&]()->V{V _lhs53765=_v_50780_i;V _rhs53766=V(5.0);return j::binary("+",_lhs53765,_rhs53766);})()),j::get(_v_50758_ops,([&]()->V{V _lhs53767=_v_50780_i;V _rhs53768=V(6.0);return j::binary("+",_lhs53767,_rhs53768);})())});})();
if(j::truth(j::unary("!",j::get(_v_50762_pts.get(),this->_literals[5])))){(void)(([&]()->V{V _receiver53770=_v_50762_pts.get();V _method53771=this->_literals[25];V _method=j::get(_receiver53770,_method53771);j::Args _params53772=j::Args{_v_50763_x,_v_50764_y};return j::call(_method,_params53772,_receiver53770);})());
}
_v_50788_dd=([&]()->V{V _receiver53827=j::builtin("Math");V _method53828=this->_literals[66];V _method=j::get(_receiver53827,_method53828);j::Args _params53829=j::Args{([&]()->V{V _number53785=([&]()->V{V _lhs53787=([&]()->V{V _lhs53789=_v_50763_x;V _rhs53790=([&]()->V{V _lhs53791=V(2.0);V _rhs53792=_v_50782_x1;return V(j::number(_lhs53791)*j::number(_rhs53792));})();return V(j::number(_lhs53789)-j::number(_rhs53790));})();V _rhs53788=_v_50784_x2;return j::binary("+",_lhs53787,_rhs53788);})();V _number53786=([&]()->V{V _lhs53793=([&]()->V{V _lhs53795=_v_50764_y;V _rhs53796=([&]()->V{V _lhs53797=V(2.0);V _rhs53798=_v_50783_y1;return V(j::number(_lhs53797)*j::number(_rhs53798));})();return V(j::number(_lhs53795)-j::number(_rhs53796));})();V _rhs53794=_v_50785_y2;return j::binary("+",_lhs53793,_rhs53794);})();return V(std::hypot(j::number(_number53785),j::number(_number53786)));})(),([&]()->V{V _number53811=([&]()->V{V _lhs53813=([&]()->V{V _lhs53815=_v_50782_x1;V _rhs53816=([&]()->V{V _lhs53817=V(2.0);V _rhs53818=_v_50784_x2;return V(j::number(_lhs53817)*j::number(_rhs53818));})();return V(j::number(_lhs53815)-j::number(_rhs53816));})();V _rhs53814=_v_50786_x3;return j::binary("+",_lhs53813,_rhs53814);})();V _number53812=([&]()->V{V _lhs53819=([&]()->V{V _lhs53821=_v_50783_y1;V _rhs53822=([&]()->V{V _lhs53823=V(2.0);V _rhs53824=_v_50785_y2;return V(j::number(_lhs53823)*j::number(_rhs53824));})();return V(j::number(_lhs53821)-j::number(_rhs53822));})();V _rhs53820=_v_50787_y3;return j::binary("+",_lhs53819,_rhs53820);})();return V(std::hypot(j::number(_number53811),j::number(_number53812)));})()};return j::call(_method,_params53829,_receiver53827);})();
_v_50789_n=([&]()->V{V _receiver53856=j::builtin("Math");V _method53857=this->_literals[66];V _method=j::get(_receiver53856,_method53857);j::Args _params53858=j::Args{V(1.0),([&]()->V{V _receiver53851=j::builtin("Math");V _method53852=this->_literals[116];V _method=j::get(_receiver53851,_method53852);j::Args _params53853=j::Args{V(256.0),([&]()->V{V _number53839=([&]()->V{V _number53844=([&]()->V{V _lhs53845=([&]()->V{V _lhs53847=V(0.75);V _rhs53848=_v_50788_dd;return V(j::number(_lhs53847)*j::number(_rhs53848));})();V _rhs53846=_v_50760_tol;return V(j::number(_lhs53845)/j::number(_rhs53846));})();return V(std::sqrt(j::number(_number53844)));})();return V(std::ceil(j::number(_number53839)));})()};return j::call(_method,_params53853,_receiver53851);})()};return j::call(_method,_params53858,_receiver53856);})();
{V _v_50790_k;
_v_50790_k=V(1.0);
for(;j::truth(([&]()->V{V _lhs53859=_v_50790_k;V _rhs53860=_v_50789_n;return j::binary("<=",_lhs53859,_rhs53860);})());(void)(j::increment(_v_50790_k,1,false))){
V _v_50791_u;
V _v_50792_v;
V _v_50793_a;
V _v_50794_b;
V _v_50795_c;
V _v_50796_d;
_v_50791_u=([&]()->V{V _lhs53861=_v_50790_k;V _rhs53862=_v_50789_n;return V(j::number(_lhs53861)/j::number(_rhs53862));})();
_v_50792_v=([&]()->V{V _lhs53863=V(1.0);V _rhs53864=_v_50791_u;return V(j::number(_lhs53863)-j::number(_rhs53864));})();
_v_50793_a=([&]()->V{V _lhs53865=([&]()->V{V _lhs53867=_v_50792_v;V _rhs53868=_v_50792_v;return V(j::number(_lhs53867)*j::number(_rhs53868));})();V _rhs53866=_v_50792_v;return V(j::number(_lhs53865)*j::number(_rhs53866));})();
_v_50794_b=([&]()->V{V _lhs53869=([&]()->V{V _lhs53871=([&]()->V{V _lhs53873=V(3.0);V _rhs53874=_v_50792_v;return V(j::number(_lhs53873)*j::number(_rhs53874));})();V _rhs53872=_v_50792_v;return V(j::number(_lhs53871)*j::number(_rhs53872));})();V _rhs53870=_v_50791_u;return V(j::number(_lhs53869)*j::number(_rhs53870));})();
_v_50795_c=([&]()->V{V _lhs53875=([&]()->V{V _lhs53877=([&]()->V{V _lhs53879=V(3.0);V _rhs53880=_v_50792_v;return V(j::number(_lhs53879)*j::number(_rhs53880));})();V _rhs53878=_v_50791_u;return V(j::number(_lhs53877)*j::number(_rhs53878));})();V _rhs53876=_v_50791_u;return V(j::number(_lhs53875)*j::number(_rhs53876));})();
_v_50796_d=([&]()->V{V _lhs53881=([&]()->V{V _lhs53883=_v_50791_u;V _rhs53884=_v_50791_u;return V(j::number(_lhs53883)*j::number(_rhs53884));})();V _rhs53882=_v_50791_u;return V(j::number(_lhs53881)*j::number(_rhs53882));})();
(void)(([&]()->V{V _callee53913=_v_50768_add;return j::call(_callee53913,j::Args{([&]()->V{V _lhs53885=([&]()->V{V _lhs53887=([&]()->V{V _lhs53889=([&]()->V{V _lhs53891=_v_50793_a;V _rhs53892=_v_50763_x;return V(j::number(_lhs53891)*j::number(_rhs53892));})();V _rhs53890=([&]()->V{V _lhs53893=_v_50794_b;V _rhs53894=_v_50782_x1;return V(j::number(_lhs53893)*j::number(_rhs53894));})();return j::binary("+",_lhs53889,_rhs53890);})();V _rhs53888=([&]()->V{V _lhs53895=_v_50795_c;V _rhs53896=_v_50784_x2;return V(j::number(_lhs53895)*j::number(_rhs53896));})();return j::binary("+",_lhs53887,_rhs53888);})();V _rhs53886=([&]()->V{V _lhs53897=_v_50796_d;V _rhs53898=_v_50786_x3;return V(j::number(_lhs53897)*j::number(_rhs53898));})();return j::binary("+",_lhs53885,_rhs53886);})(),([&]()->V{V _lhs53899=([&]()->V{V _lhs53901=([&]()->V{V _lhs53903=([&]()->V{V _lhs53905=_v_50793_a;V _rhs53906=_v_50764_y;return V(j::number(_lhs53905)*j::number(_rhs53906));})();V _rhs53904=([&]()->V{V _lhs53907=_v_50794_b;V _rhs53908=_v_50783_y1;return V(j::number(_lhs53907)*j::number(_rhs53908));})();return j::binary("+",_lhs53903,_rhs53904);})();V _rhs53902=([&]()->V{V _lhs53909=_v_50795_c;V _rhs53910=_v_50785_y2;return V(j::number(_lhs53909)*j::number(_rhs53910));})();return j::binary("+",_lhs53901,_rhs53902);})();V _rhs53900=([&]()->V{V _lhs53911=_v_50796_d;V _rhs53912=_v_50787_y3;return V(j::number(_lhs53911)*j::number(_rhs53912));})();return j::binary("+",_lhs53899,_rhs53900);})()});})());

}
}
(void)((_v_50763_x=_v_50786_x3));
(void)((_v_50764_y=_v_50787_y3));
(void)((_v_50780_i=j::binary("+",_v_50780_i,V(7.0))));

}
else {
(void)(([&]()->V{V _callee53917=_v_50765_flush;return j::call(_callee53917,j::Args{V(true)});})());
(void)((_v_50780_i=j::binary("+",_v_50780_i,V(1.0))));

}

}
}

}
}
(void)(([&]()->V{V _callee53919=_v_50765_flush;return j::call(_callee53919,j::Args{V(false)});})());
return _v_50761_subs.get();

}

return V{};
},3);
this->_v_50797_bounds.get()=j::function([=](const j::Args &_args_fn50798,const V &_receiver_fn50798,const V &_self_fn50798) mutable ->V{
V _v_50799_subs;
V _v_50800_grow;
_v_50799_subs=_args_fn50798[0];
V _default53920=_args_fn50798[1];if(_default53920.kind==V::Undefined||_default53920.kind==V::Hole)_default53920=V(0.0);
_v_50800_grow=_default53920;
{
V _v_50801_x0;
V _v_50802_y0;
V _v_50803_x1;
V _v_50804_y1;
_v_50801_x0=j::builtin("Infinity");
_v_50802_y0=j::builtin("Infinity");
_v_50803_x1=j::unary("-",j::builtin("Infinity"));
_v_50804_y1=j::unary("-",j::builtin("Infinity"));
{for(const auto &_item53921:j::elements(_v_50799_subs)){V _v_50805_pts;
V _pattern53922=_item53921;
_v_50805_pts=j::get(_pattern53922,this->_literals[114]);
{V _v_50806_i;
_v_50806_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs53923=_v_50806_i;V _rhs53924=j::get(_v_50805_pts,this->_literals[5]);return j::binary("<",_lhs53923,_rhs53924);})());(void)((_v_50806_i=j::binary("+",_v_50806_i,V(2.0))))){
if(j::truth(([&]()->V{V _lhs53926=j::get(_v_50805_pts,_v_50806_i);V _rhs53927=_v_50801_x0;return j::binary("<",_lhs53926,_rhs53927);})())){(void)((_v_50801_x0=j::get(_v_50805_pts,_v_50806_i)));
}
if(j::truth(([&]()->V{V _lhs53929=j::get(_v_50805_pts,_v_50806_i);V _rhs53930=_v_50803_x1;return j::binary(">",_lhs53929,_rhs53930);})())){(void)((_v_50803_x1=j::get(_v_50805_pts,_v_50806_i)));
}
if(j::truth(([&]()->V{V _lhs53932=j::get(_v_50805_pts,([&]()->V{V _lhs53934=_v_50806_i;V _rhs53935=V(1.0);return j::binary("+",_lhs53934,_rhs53935);})());V _rhs53933=_v_50802_y0;return j::binary("<",_lhs53932,_rhs53933);})())){(void)((_v_50802_y0=j::get(_v_50805_pts,([&]()->V{V _lhs53937=_v_50806_i;V _rhs53938=V(1.0);return j::binary("+",_lhs53937,_rhs53938);})())));
}
if(j::truth(([&]()->V{V _lhs53939=j::get(_v_50805_pts,([&]()->V{V _lhs53941=_v_50806_i;V _rhs53942=V(1.0);return j::binary("+",_lhs53941,_rhs53942);})());V _rhs53940=_v_50804_y1;return j::binary(">",_lhs53939,_rhs53940);})())){(void)((_v_50804_y1=j::get(_v_50805_pts,([&]()->V{V _lhs53944=_v_50806_i;V _rhs53945=V(1.0);return j::binary("+",_lhs53944,_rhs53945);})())));
}

}
}
}}
return (j::truth(([&]()->V{V _lhs53946=_v_50803_x1;V _rhs53947=_v_50801_x0;return j::binary("<",_lhs53946,_rhs53947);})())?V::null():([&]()->V{j::Args _array53948;_array53948.push_back(([&]()->V{V _lhs53949=_v_50801_x0;V _rhs53950=_v_50800_grow;return V(j::number(_lhs53949)-j::number(_rhs53950));})());_array53948.push_back(([&]()->V{V _lhs53951=_v_50802_y0;V _rhs53952=_v_50800_grow;return V(j::number(_lhs53951)-j::number(_rhs53952));})());_array53948.push_back(([&]()->V{V _lhs53953=_v_50803_x1;V _rhs53954=_v_50800_grow;return j::binary("+",_lhs53953,_rhs53954);})());_array53948.push_back(([&]()->V{V _lhs53955=_v_50804_y1;V _rhs53956=_v_50800_grow;return j::binary("+",_lhs53955,_rhs53956);})());return j::array(std::move(_array53948));})());

}

return V{};
},1);
this->_v_50815_parseSvg.get()=j::function([=](const j::Args &_args_fn50816,const V &_receiver_fn50816,const V &_self_fn50816) mutable ->V{
V _v_50817_markup;
_v_50817_markup=_args_fn50816[0];
{
V _v_50818_doc;
V _v_50819_each;
j::Cell _v_50826_root;
V _v_50829_svgRoot;
j::Cell _v_50830_ids;
j::Cell _v_50831_rules;
V _v_50832_index;
V _v_50835_named;
V _v_50838_title;
V _v_50842_vb0;
V _v_50843_rw;
V _v_50844_rh;
V _v_50845_viewBox;
j::Cell _v_50846_vw;
j::Cell _v_50847_vh;
j::Cell _v_50848_shapes;
j::Cell _v_50849_skipped;
j::Cell _v_50850_open;
j::Cell _v_50851_count;
j::Cell _v_50852_segments;
j::Cell _v_50853_tooMuch;
j::Cell _v_50857_own;
j::Cell _v_50872_paint;
j::Cell _v_50899_walk;
j::Cell _v_50908_visit;
j::Cell _v_50942_nested;
V _v_50963_start;
V _v_50968_parts;
if(j::truth(([&]()->V{V _lhs53957=j::unary("typeof",_v_50817_markup);V _rhs53958=this->_literals[117];return V(!j::equal(_lhs53957,_rhs53958,true));})())){(void)(([&]()->V{V _callee53962=this->_v_50450_fail.get();return j::call(_callee53962,j::Args{([&]()->V{std::u16string _text53959;_text53959+=u"fromSvg takes SVG markup as a string, such as \"<svg viewBox=\\\"0 0 24 24\\\">...</svg>\", not ";_text53959+=j::string((j::truth(([&]()->V{V _lhs53960=_v_50817_markup;V _rhs53961=V::null();return V(j::equal(_lhs53960,_rhs53961,true));})())?this->_literals[118]:j::unary("typeof",_v_50817_markup)));_text53959+=u"";return V(std::move(_text53959));})()});})());
}
if(j::truth(([&]()->V{V _lhs53963=j::get(_v_50817_markup,this->_literals[5]);V _rhs53964=this->_v_50813_MOST_MARKUP.get();return j::binary(">",_lhs53963,_rhs53964);})())){(void)(([&]()->V{V _callee53968=this->_v_50450_fail.get();return j::call(_callee53968,j::Args{([&]()->V{std::u16string _text53965;_text53965+=u"fromSvg reads markup up to ";_text53965+=j::string(([&]()->V{V _lhs53966=this->_v_50813_MOST_MARKUP.get();V _rhs53967=V(1000000.0);return V(j::number(_lhs53966)/j::number(_rhs53967));})());_text53965+=u" million characters long, and this is ";_text53965+=j::string(j::get(_v_50817_markup,this->_literals[5]));_text53965+=u": simplify the svg, or save it smaller in your editor";return V(std::move(_text53965));})()});})());
}
_v_50818_doc=([&]()->V{V _callee53969=this->_v_50476_xml.get();return j::call(_callee53969,j::Args{_v_50817_markup});})();
_v_50819_each=j::function([=](const j::Args &_args_fn50820,const V &_receiver_fn50820,const V &_self_fn50820) mutable ->V{
V _v_50821_from;
V _v_50822_visit;
_v_50821_from=_args_fn50820[0];
_v_50822_visit=_args_fn50820[1];
{
V _v_50823_stack;
_v_50823_stack=([&]()->V{V _receiver53970=([&]()->V{j::Args _array53973;for(const auto &_value:j::elements(j::get(_v_50821_from,this->_literals[3])))_array53973.push_back(_value);return j::array(std::move(_array53973));})();V _method53971=this->_literals[119];V _method=j::get(_receiver53970,_method53971);j::Args _params53972=j::Args{};return j::call(_method,_params53972,_receiver53970);})();
while(j::truth(j::get(_v_50823_stack,this->_literals[5]))){
V _v_50824_n;
_v_50824_n=([&]()->V{V _receiver53974=_v_50823_stack;V _method53975=this->_literals[120];V _method=j::get(_receiver53974,_method53975);j::Args _params53976=j::Args{};return j::call(_method,_params53976,_receiver53974);})();
if(j::truth(([&]()->V{V _lhs53977=([&]()->V{V _callee53979=_v_50822_visit;return j::call(_callee53979,j::Args{_v_50824_n});})();V _rhs53978=V(true);return V(j::equal(_lhs53977,_rhs53978,true));})())){return V{};
}
{V _v_50825_k;
_v_50825_k=([&]()->V{V _lhs53980=j::get(j::get(_v_50824_n,this->_literals[3]),this->_literals[5]);V _rhs53981=V(1.0);return V(j::number(_lhs53980)-j::number(_rhs53981));})();
for(;j::truth(([&]()->V{V _lhs53982=_v_50825_k;V _rhs53983=V(0.0);return j::binary(">=",_lhs53982,_rhs53983);})());(void)(j::increment(_v_50825_k,-1,false))){(void)(([&]()->V{V _receiver53984=_v_50823_stack;V _method53985=this->_literals[25];V _method=j::get(_receiver53984,_method53985);j::Args _params53986=j::Args{j::get(j::get(_v_50824_n,this->_literals[3]),_v_50825_k)};return j::call(_method,_params53986,_receiver53984);})());
}}

}


}

return V{};
},2);
_v_50826_root.get()=V::null();
(void)(([&]()->V{V _callee53991=_v_50819_each;return j::call(_callee53991,j::Args{_v_50818_doc,j::function([=](const j::Args &_args_fn50827,const V &_receiver_fn50827,const V &_self_fn50827) mutable ->V{
V _v_50828_n;
_v_50828_n=_args_fn50827[0];
return ([&]()->V{V _logical53987=([&]()->V{V _lhs53988=j::get(_v_50828_n,this->_literals[0]);V _rhs53989=this->_literals[121];return V(j::equal(_lhs53988,_rhs53989,true));})();return j::truth(_logical53987)?j::unary("!",j::unary("!",(_v_50826_root.get()=_v_50828_n))):_logical53987;})();
return V{};
},1)});})());
if(j::truth(j::unary("!",_v_50826_root.get()))){(void)(([&]()->V{V _callee53992=this->_v_50450_fail.get();return j::call(_callee53992,j::Args{this->_literals[122]});})());
}
_v_50829_svgRoot=_v_50826_root.get();
_v_50830_ids.get()=([&]()->V{V _callee53993=j::builtin("Map");return j::construct(_callee53993,j::Args{});})();
_v_50831_rules.get()=([&]()->V{j::Args _array53994;return j::array(std::move(_array53994));})();
_v_50832_index=j::function([=](const j::Args &_args_fn50833,const V &_receiver_fn50833,const V &_self_fn50833) mutable ->V{
V _v_50834_n;
_v_50834_n=_args_fn50833[0];
{
if(j::truth(([&]()->V{V _logical53995=([&]()->V{V _lhs53996=j::get(j::get(_v_50834_n,this->_literals[2]),this->_literals[44]);V _rhs53997=j::builtin("undefined");return V(!j::equal(_lhs53996,_rhs53997,true));})();return j::truth(_logical53995)?j::unary("!",([&]()->V{V _receiver53998=_v_50830_ids.get();V _method53999=this->_literals[30];V _method=j::get(_receiver53998,_method53999);j::Args _params54000=j::Args{j::get(j::get(_v_50834_n,this->_literals[2]),this->_literals[44])};return j::call(_method,_params54000,_receiver53998);})()):_logical53995;})())){(void)(([&]()->V{V _receiver54001=_v_50830_ids.get();V _method54002=this->_literals[123];V _method=j::get(_receiver54001,_method54002);j::Args _params54003=j::Args{j::get(j::get(_v_50834_n,this->_literals[2]),this->_literals[44]),_v_50834_n};return j::call(_method,_params54003,_receiver54001);})());
}
if(j::truth(([&]()->V{V _lhs54004=j::get(_v_50834_n,this->_literals[0]);V _rhs54005=this->_literals[124];return V(j::equal(_lhs54004,_rhs54005,true));})())){(void)(([&]()->V{V _callee54006=this->_v_50508_stylesheet.get();return j::call(_callee54006,j::Args{j::get(_v_50834_n,this->_literals[4]),_v_50831_rules.get()});})());
}

}

return V{};
},1);
(void)(([&]()->V{V _callee54007=_v_50832_index;return j::call(_callee54007,j::Args{_v_50829_svgRoot});})());
(void)(([&]()->V{V _callee54008=_v_50819_each;return j::call(_callee54008,j::Args{_v_50829_svgRoot,_v_50832_index});})());
_v_50835_named=([&]()->V{V _receiver54011=j::get(_v_50829_svgRoot,this->_literals[3]);V _method54012=this->_literals[126];V _method=j::get(_receiver54011,_method54012);j::Args _params54013=j::Args{j::function([=](const j::Args &_args_fn50836,const V &_receiver_fn50836,const V &_self_fn50836) mutable ->V{
V _v_50837_k;
_v_50837_k=_args_fn50836[0];
return ([&]()->V{V _lhs54009=j::get(_v_50837_k,this->_literals[0]);V _rhs54010=this->_literals[125];return V(j::equal(_lhs54009,_rhs54010,true));})();
return V{};
},1)};return j::call(_method,_params54013,_receiver54011);})();
_v_50838_title=(j::truth(_v_50835_named)?([&]()->V{V _logical54014=([&]()->V{V _receiver54015=([&]()->V{V _receiver54018=([&]()->V{V _callee54021=this->_v_50467_entities.get();return j::call(_callee54021,j::Args{j::get(_v_50835_named,this->_literals[4])});})();V _method54019=this->_literals[31];V _method=j::get(_receiver54018,_method54019);j::Args _params54020=j::Args{j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f\\s]+","g"),this->_literals[127]};return j::call(_method,_params54020,_receiver54018);})();V _method54016=this->_literals[21];V _method=j::get(_receiver54015,_method54016);j::Args _params54017=j::Args{};return j::call(_method,_params54017,_receiver54015);})();return !j::truth(_logical54014)?V::null():_logical54014;})():V::null());
(void)(([&]()->V{V _receiver54024=_v_50831_rules.get();V _method54025=this->_literals[128];V _method=j::get(_receiver54024,_method54025);j::Args _params54026=j::Args{j::function([=](const j::Args &_args_fn50839,const V &_receiver_fn50839,const V &_self_fn50839) mutable ->V{
V _v_50840_a;
V _v_50841_b;
_v_50840_a=_args_fn50839[0];
_v_50841_b=_args_fn50839[1];
return ([&]()->V{V _lhs54022=j::get(_v_50840_a,this->_literals[46]);V _rhs54023=j::get(_v_50841_b,this->_literals[46]);return V(j::number(_lhs54022)-j::number(_rhs54023));})();
return V{};
},2)};return j::call(_method,_params54026,_receiver54024);})());
_v_50842_vb0=([&]()->V{V _callee54027=this->_v_50714_numbers.get();return j::call(_callee54027,j::Args{j::get(j::get(_v_50829_svgRoot,this->_literals[2]),this->_literals[129])});})();
_v_50843_rw=([&]()->V{V _callee54028=this->_v_50707_len.get();return j::call(_callee54028,j::Args{j::get(j::get(_v_50829_svgRoot,this->_literals[2]),this->_literals[100]),V(0.0),j::builtin("NaN")});})();
_v_50844_rh=([&]()->V{V _callee54029=this->_v_50707_len.get();return j::call(_callee54029,j::Args{j::get(j::get(_v_50829_svgRoot,this->_literals[2]),this->_literals[101]),V(0.0),j::builtin("NaN")});})();
_v_50845_viewBox=(j::truth(([&]()->V{V _logical54030=([&]()->V{V _logical54031=([&]()->V{V _lhs54032=j::get(_v_50842_vb0,this->_literals[5]);V _rhs54033=V(4.0);return V(j::equal(_lhs54032,_rhs54033,true));})();return j::truth(_logical54031)?([&]()->V{V _lhs54034=j::get(_v_50842_vb0,V(2.0));V _rhs54035=V(0.0);return j::binary(">",_lhs54034,_rhs54035);})():_logical54031;})();return j::truth(_logical54030)?([&]()->V{V _lhs54036=j::get(_v_50842_vb0,V(3.0));V _rhs54037=V(0.0);return j::binary(">",_lhs54036,_rhs54037);})():_logical54030;})())?([&]()->V{j::Args _array54038;_array54038.push_back(j::get(_v_50842_vb0,V(0.0)));_array54038.push_back(j::get(_v_50842_vb0,V(1.0)));_array54038.push_back(j::get(_v_50842_vb0,V(2.0)));_array54038.push_back(j::get(_v_50842_vb0,V(3.0)));return j::array(std::move(_array54038));})():(j::truth(([&]()->V{V _logical54039=([&]()->V{V _lhs54040=_v_50843_rw;V _rhs54041=V(0.0);return j::binary(">",_lhs54040,_rhs54041);})();return j::truth(_logical54039)?([&]()->V{V _lhs54042=_v_50844_rh;V _rhs54043=V(0.0);return j::binary(">",_lhs54042,_rhs54043);})():_logical54039;})())?([&]()->V{j::Args _array54044;_array54044.push_back(V(0.0));_array54044.push_back(V(0.0));_array54044.push_back(_v_50843_rw);_array54044.push_back(_v_50844_rh);return j::array(std::move(_array54044));})():V::null()));
_v_50846_vw.get()=([&]()->V{V _logical54045=([&]()->V{V _chain54046=_v_50845_viewBox;if(j::nullish(_chain54046))return V{};V _chain54047=j::get(_chain54046,V(2.0));return _chain54047;})();return j::nullish(_logical54045)?V(100.0):_logical54045;})();
_v_50847_vh.get()=([&]()->V{V _logical54048=([&]()->V{V _chain54049=_v_50845_viewBox;if(j::nullish(_chain54049))return V{};V _chain54050=j::get(_chain54049,V(3.0));return _chain54050;})();return j::nullish(_logical54048)?V(100.0):_logical54048;})();
_v_50848_shapes.get()=([&]()->V{j::Args _array54051;return j::array(std::move(_array54051));})();
_v_50849_skipped.get()=([&]()->V{V _callee54052=j::builtin("Set");return j::construct(_callee54052,j::Args{});})();
_v_50850_open.get()=([&]()->V{V _callee54053=j::builtin("Set");return j::construct(_callee54053,j::Args{});})();
_v_50851_count.get()=V(0.0);
_v_50852_segments.get()=V(0.0);
_v_50853_tooMuch.get()=j::function([=](const j::Args &_args_fn50854,const V &_receiver_fn50854,const V &_self_fn50854) mutable ->V{
V _v_50855_what;
V _v_50856_most;
_v_50855_what=_args_fn50854[0];
_v_50856_most=_args_fn50854[1];
return ([&]()->V{V _callee54055=this->_v_50450_fail.get();return j::call(_callee54055,j::Args{([&]()->V{std::u16string _text54054;_text54054+=u"this SVG expands to more than ";_text54054+=j::string(_v_50856_most);_text54054+=u" ";_text54054+=j::string(_v_50855_what);_text54054+=u": simplify it or flatten its <use> elements";return V(std::move(_text54054));})()});})();
return V{};
},2);
_v_50857_own.get()=j::function([=](const j::Args &_args_fn50858,const V &_receiver_fn50858,const V &_self_fn50858) mutable ->V{
V _v_50859_n;
_v_50859_n=_args_fn50858[0];
{
j::Cell _v_50860_p;
j::Cell _v_50861_readable;
V _v_50864_put;
j::Cell _v_50868_classes;
_v_50860_p.get()=([&]()->V{V _obj54056=j::object();return _obj54056;})();
_v_50861_readable.get()=j::function([=](const j::Args &_args_fn50862,const V &_receiver_fn50862,const V &_self_fn50862) mutable ->V{
V _v_50863_v;
_v_50863_v=_args_fn50862[0];
return ([&]()->V{V _logical54057=([&]()->V{V _receiver54058=j::regexp(u"^\\s*(url\\(|inherit\\s*$)","i");V _method54059=this->_literals[24];V _method=j::get(_receiver54058,_method54059);j::Args _params54060=j::Args{_v_50863_v};return j::call(_method,_params54060,_receiver54058);})();return !j::truth(_logical54057)?([&]()->V{V _lhs54061=([&]()->V{V _callee54063=this->_v_50554_color.get();return j::call(_callee54063,j::Args{_v_50863_v});})();V _rhs54062=j::builtin("undefined");return V(!j::equal(_lhs54061,_rhs54062,true));})():_logical54057;})();
return V{};
},1);
_v_50864_put=j::function([=](const j::Args &_args_fn50865,const V &_receiver_fn50865,const V &_self_fn50865) mutable ->V{
V _v_50866_from;
_v_50866_from=_args_fn50865[0];
{
{for(const auto &_item54064:j::keys(_v_50866_from)){V _v_50867_k;
_v_50867_k=_item54064;
if(j::truth(([&]()->V{V _logical54065=([&]()->V{V _receiver54066=this->_v_50500_PROPS.get();V _method54067=this->_literals[30];V _method=j::get(_receiver54066,_method54067);j::Args _params54068=j::Args{_v_50867_k};return j::call(_method,_params54068,_receiver54066);})();return j::truth(_logical54065)?([&]()->V{V _logical54069=([&]()->V{V _callee54070=_v_50861_readable.get();return j::call(_callee54070,j::Args{j::get(_v_50866_from,_v_50867_k)});})();return !j::truth(_logical54069)?([&]()->V{V _logical54071=([&]()->V{V _lhs54072=_v_50867_k;V _rhs54073=this->_literals[130];return V(!j::equal(_lhs54072,_rhs54073,true));})();return j::truth(_logical54071)?([&]()->V{V _lhs54074=_v_50867_k;V _rhs54075=this->_literals[131];return V(!j::equal(_lhs54074,_rhs54075,true));})():_logical54071;})():_logical54069;})():_logical54065;})())){(void)(([&]()->V{V _base54077=_v_50860_p.get();V _key54078=_v_50867_k;V _assign54076=j::get(_v_50866_from,_v_50867_k);return j::put(_base54077,_key54078,_assign54076);})());
}
}}

}

return V{};
},1);
(void)(([&]()->V{V _callee54079=_v_50864_put;return j::call(_callee54079,j::Args{j::get(_v_50859_n,this->_literals[2])});})());
_v_50868_classes.get()=([&]()->V{V _receiver54080=([&]()->V{V _receiver54083=([&]()->V{V _logical54086=j::get(j::get(_v_50859_n,this->_literals[2]),this->_literals[132]);return j::nullish(_logical54086)?this->_literals[1]:_logical54086;})();V _method54084=this->_literals[27];V _method=j::get(_receiver54083,_method54084);j::Args _params54085=j::Args{j::regexp(u"\\s+","")};return j::call(_method,_params54085,_receiver54083);})();V _method54081=this->_literals[40];V _method=j::get(_receiver54080,_method54081);j::Args _params54082=j::Args{j::builtin("Boolean")};return j::call(_method,_params54082,_receiver54080);})();
{for(const auto &_item54087:j::elements(_v_50831_rules.get())){V _v_50869_r;
_v_50869_r=_item54087;
if(j::truth(([&]()->V{V _logical54088=([&]()->V{V _logical54089=([&]()->V{V _logical54090=j::unary("!",j::get(_v_50869_r,this->_literals[43]));return !j::truth(_logical54090)?([&]()->V{V _lhs54091=j::get(_v_50869_r,this->_literals[43]);V _rhs54092=j::get(_v_50859_n,this->_literals[0]);return V(j::equal(_lhs54091,_rhs54092,true));})():_logical54090;})();return j::truth(_logical54089)?([&]()->V{V _logical54093=j::unary("!",j::get(_v_50869_r,this->_literals[44]));return !j::truth(_logical54093)?([&]()->V{V _lhs54094=j::get(_v_50869_r,this->_literals[44]);V _rhs54095=j::get(j::get(_v_50859_n,this->_literals[2]),this->_literals[44]);return V(j::equal(_lhs54094,_rhs54095,true));})():_logical54093;})():_logical54089;})();return j::truth(_logical54088)?([&]()->V{V _receiver54099=j::get(_v_50869_r,this->_literals[45]);V _method54100=this->_literals[134];V _method=j::get(_receiver54099,_method54100);j::Args _params54101=j::Args{j::function([=](const j::Args &_args_fn50870,const V &_receiver_fn50870,const V &_self_fn50870) mutable ->V{
V _v_50871_c;
_v_50871_c=_args_fn50870[0];
return ([&]()->V{V _receiver54096=_v_50868_classes.get();V _method54097=this->_literals[133];V _method=j::get(_receiver54096,_method54097);j::Args _params54098=j::Args{_v_50871_c};return j::call(_method,_params54098,_receiver54096);})();
return V{};
},1)};return j::call(_method,_params54101,_receiver54099);})():_logical54088;})())){(void)(([&]()->V{V _callee54102=_v_50864_put;return j::call(_callee54102,j::Args{j::get(_v_50869_r,this->_literals[47])});})());
}
}}
if(j::truth(j::get(j::get(_v_50859_n,this->_literals[2]),this->_literals[124]))){(void)(([&]()->V{V _callee54104=_v_50864_put;return j::call(_callee54104,j::Args{([&]()->V{V _callee54103=this->_v_50501_declarations.get();return j::call(_callee54103,j::Args{j::get(j::get(_v_50859_n,this->_literals[2]),this->_literals[124])});})()});})());
}
return _v_50860_p.get();

}

return V{};
},1);
_v_50872_paint.get()=j::function([=](const j::Args &_args_fn50873,const V &_receiver_fn50873,const V &_self_fn50873) mutable ->V{
V _v_50874_v;
V _v_50875_st;
V _v_50876_depth;
_v_50874_v=_args_fn50873[0];
_v_50875_st=_args_fn50873[1];
V _default54105=_args_fn50873[2];if(_default54105.kind==V::Undefined||_default54105.kind==V::Hole)_default54105=V(0.0);
_v_50876_depth=_default54105;
{
V _v_50877_url;
V _v_50897_c;
_v_50877_url=([&]()->V{V _receiver54109=j::regexp(u"^url\\(\\s*['\"]?#([^'\")\\s]+)['\"]?\\s*\\)\\s*(.*)$","i");V _method54110=this->_literals[23];V _method=j::get(_receiver54109,_method54110);j::Args _params54111=j::Args{([&]()->V{V _receiver54106=_v_50874_v;V _method54107=this->_literals[21];V _method=j::get(_receiver54106,_method54107);j::Args _params54108=j::Args{};return j::call(_method,_params54108,_receiver54106);})()};return j::call(_method,_params54111,_receiver54109);})();
if(j::truth(_v_50877_url)){
V _v_50878_target;
V _v_50879_g;
V _v_50883_stops;
_v_50878_target=([&]()->V{V _receiver54112=_v_50830_ids.get();V _method54113=this->_literals[54];V _method=j::get(_receiver54112,_method54113);j::Args _params54114=j::Args{j::get(_v_50877_url,V(1.0))};return j::call(_method,_params54114,_receiver54112);})();
_v_50879_g=_v_50878_target;
{V _v_50880_k;
_v_50880_k=V(0.0);
for(;j::truth(([&]()->V{V _logical54115=([&]()->V{V _logical54116=_v_50879_g;return j::truth(_logical54116)?j::unary("!",([&]()->V{V _receiver54119=j::get(_v_50879_g,this->_literals[3]);V _method54120=this->_literals[58];V _method=j::get(_receiver54119,_method54120);j::Args _params54121=j::Args{j::function([=](const j::Args &_args_fn50881,const V &_receiver_fn50881,const V &_self_fn50881) mutable ->V{
V _v_50882_s;
_v_50882_s=_args_fn50881[0];
return ([&]()->V{V _lhs54117=j::get(_v_50882_s,this->_literals[0]);V _rhs54118=this->_literals[135];return V(j::equal(_lhs54117,_rhs54118,true));})();
return V{};
},1)};return j::call(_method,_params54121,_receiver54119);})()):_logical54116;})();return j::truth(_logical54115)?([&]()->V{V _lhs54122=_v_50880_k;V _rhs54123=V(8.0);return j::binary("<",_lhs54122,_rhs54123);})():_logical54115;})());(void)(j::increment(_v_50880_k,1,false))){(void)((_v_50879_g=([&]()->V{V _receiver54130=_v_50830_ids.get();V _method54131=this->_literals[54];V _method=j::get(_receiver54130,_method54131);j::Args _params54132=j::Args{([&]()->V{V _receiver54125=([&]()->V{V _logical54128=([&]()->V{V _logical54129=j::get(j::get(_v_50879_g,this->_literals[2]),this->_literals[136]);return j::nullish(_logical54129)?j::get(j::get(_v_50879_g,this->_literals[2]),this->_literals[137]):_logical54129;})();return j::nullish(_logical54128)?this->_literals[1]:_logical54128;})();V _method54126=this->_literals[8];V _method=j::get(_receiver54125,_method54126);j::Args _params54127=j::Args{V(1.0)};return j::call(_method,_params54127,_receiver54125);})()};return j::call(_method,_params54132,_receiver54130);})()));
}}
_v_50883_stops=(j::truth(_v_50879_g)?([&]()->V{V _receiver54135=j::get(_v_50879_g,this->_literals[3]);V _method54136=this->_literals[40];V _method=j::get(_receiver54135,_method54136);j::Args _params54137=j::Args{j::function([=](const j::Args &_args_fn50884,const V &_receiver_fn50884,const V &_self_fn50884) mutable ->V{
V _v_50885_s;
_v_50885_s=_args_fn50884[0];
return ([&]()->V{V _lhs54133=j::get(_v_50885_s,this->_literals[0]);V _rhs54134=this->_literals[135];return V(j::equal(_lhs54133,_rhs54134,true));})();
return V{};
},1)};return j::call(_method,_params54137,_receiver54135);})():([&]()->V{j::Args _array54138;return j::array(std::move(_array54138));})());
if(j::truth(j::get(_v_50883_stops,this->_literals[5]))){
j::Cell _v_50886_rgbs;
V _v_50887_alpha;
_v_50886_rgbs.get()=([&]()->V{j::Args _array54139;return j::array(std::move(_array54139));})();
_v_50887_alpha=V(0.0);
{for(const auto &_item54140:j::elements(_v_50883_stops)){V _v_50888_s;
_v_50888_s=_item54140;
{
V _v_50889_sp;
V _v_50890_c;
V _v_50891_hexc;
_v_50889_sp=([&]()->V{V _callee54141=_v_50857_own.get();return j::call(_callee54141,j::Args{_v_50888_s});})();
_v_50890_c=([&]()->V{V _logical54142=([&]()->V{V _callee54144=this->_v_50554_color.get();return j::call(_callee54144,j::Args{([&]()->V{V _logical54143=j::get(_v_50889_sp,this->_literals[138]);return j::nullish(_logical54143)?this->_literals[139]:_logical54143;})()});})();return j::nullish(_logical54142)?([&]()->V{V _obj54145=j::object();j::put(_obj54145,this->_literals[50],this->_literals[140]);j::put(_obj54145,this->_literals[51],V(1.0));return _obj54145;})():_logical54142;})();
_v_50891_hexc=(j::truth(([&]()->V{V _lhs54146=j::get(_v_50890_c,this->_literals[50]);V _rhs54147=this->_literals[53];return V(j::equal(_lhs54146,_rhs54147,true));})())?([&]()->V{V _logical54148=([&]()->V{V _chain54149=this->_v_50554_color.get();V _chain54150=j::call(_chain54149,j::Args{j::get(_v_50875_st,this->_literals[141])},V{});if(j::nullish(_chain54150))return V{};V _chain54151=j::get(_chain54150,this->_literals[50]);return _chain54151;})();return j::nullish(_logical54148)?V::null():_logical54148;})():j::get(_v_50890_c,this->_literals[50]));
(void)(([&]()->V{V _receiver54157=_v_50886_rgbs.get();V _method54158=this->_literals[25];V _method=j::get(_receiver54157,_method54158);j::Args _params54159=j::Args{(j::truth(([&]()->V{V _logical54152=_v_50891_hexc;return j::truth(_logical54152)?([&]()->V{V _lhs54153=_v_50891_hexc;V _rhs54154=this->_literals[53];return V(!j::equal(_lhs54153,_rhs54154,true));})():_logical54152;})())?([&]()->V{V _callee54155=this->_v_50457_rgb.get();return j::call(_callee54155,j::Args{_v_50891_hexc});})():([&]()->V{j::Args _array54156;_array54156.push_back(V(0.0));_array54156.push_back(V(0.0));_array54156.push_back(V(0.0));return j::array(std::move(_array54156));})())};return j::call(_method,_params54159,_receiver54157);})());
(void)((_v_50887_alpha=j::binary("+",_v_50887_alpha,([&]()->V{V _lhs54161=j::get(_v_50890_c,this->_literals[51]);V _rhs54162=([&]()->V{V _callee54165=this->_v_50447_clamp.get();return j::call(_callee54165,j::Args{([&]()->V{V _callee54164=j::builtin("parseFloat");return j::call(_callee54164,j::Args{([&]()->V{V _logical54163=j::get(_v_50889_sp,this->_literals[142]);return j::nullish(_logical54163)?this->_literals[143]:_logical54163;})()});})()});})();return V(j::number(_lhs54161)*j::number(_rhs54162));})())));

}
}}
return ([&]()->V{V _obj54166=j::object();j::put(_obj54166,this->_literals[50],([&]()->V{V _callee54178=this->_v_50452_hex.get();return j::call(_callee54178,j::Args{([&]()->V{V _receiver54174=([&]()->V{j::Args _array54177;_array54177.push_back(V(0.0));_array54177.push_back(V(1.0));_array54177.push_back(V(2.0));return j::array(std::move(_array54177));})();V _method54175=this->_literals[41];V _method=j::get(_receiver54174,_method54175);j::Args _params54176=j::Args{j::function([=](const j::Args &_args_fn50892,const V &_receiver_fn50892,const V &_self_fn50892) mutable ->V{
j::Cell _v_50893_i;
_v_50893_i.get()=_args_fn50892[0];
return ([&]()->V{V _lhs54167=([&]()->V{V _receiver54171=_v_50886_rgbs.get();V _method54172=this->_literals[144];V _method=j::get(_receiver54171,_method54172);j::Args _params54173=j::Args{j::function([=](const j::Args &_args_fn50894,const V &_receiver_fn50894,const V &_self_fn50894) mutable ->V{
V _v_50895_s;
V _v_50896_c;
_v_50895_s=_args_fn50894[0];
_v_50896_c=_args_fn50894[1];
return ([&]()->V{V _lhs54169=_v_50895_s;V _rhs54170=j::get(_v_50896_c,_v_50893_i.get());return j::binary("+",_lhs54169,_rhs54170);})();
return V{};
},2),V(0.0)};return j::call(_method,_params54173,_receiver54171);})();V _rhs54168=j::get(_v_50886_rgbs.get(),this->_literals[5]);return V(j::number(_lhs54167)/j::number(_rhs54168));})();
return V{};
},1)};return j::call(_method,_params54176,_receiver54174);})()});})());j::put(_obj54166,this->_literals[51],([&]()->V{V _lhs54179=_v_50887_alpha;V _rhs54180=j::get(_v_50883_stops,this->_literals[5]);return V(j::number(_lhs54179)/j::number(_rhs54180));})());return _obj54166;})();

}

if(j::truth(j::get(_v_50877_url,V(2.0)))){return (j::truth(([&]()->V{V _lhs54181=_v_50876_depth;V _rhs54182=V(2.0);return j::binary("<",_lhs54181,_rhs54182);})())?([&]()->V{V _callee54185=_v_50872_paint.get();return j::call(_callee54185,j::Args{j::get(_v_50877_url,V(2.0)),_v_50875_st,([&]()->V{V _lhs54183=_v_50876_depth;V _rhs54184=V(1.0);return j::binary("+",_lhs54183,_rhs54184);})()});})():([&]()->V{V _obj54186=j::object();j::put(_obj54186,this->_literals[50],V::null());j::put(_obj54186,this->_literals[51],V(0.0));return _obj54186;})());
}
return (j::truth(([&]()->V{V _lhs54187=([&]()->V{V _chain54189=_v_50878_target;if(j::nullish(_chain54189))return V{};V _chain54190=j::get(_chain54189,this->_literals[0]);return _chain54190;})();V _rhs54188=this->_literals[145];return V(j::equal(_lhs54187,_rhs54188,true));})())?([&]()->V{V _obj54191=j::object();j::put(_obj54191,this->_literals[50],this->_literals[53]);j::put(_obj54191,this->_literals[51],V(1.0));return _obj54191;})():([&]()->V{V _obj54192=j::object();j::put(_obj54192,this->_literals[50],V::null());j::put(_obj54192,this->_literals[51],V(0.0));return _obj54192;})());

}

_v_50897_c=([&]()->V{V _callee54193=this->_v_50554_color.get();return j::call(_callee54193,j::Args{_v_50874_v});})();
if(j::truth(j::unary("!",_v_50897_c))){return ([&]()->V{V _obj54194=j::object();j::put(_obj54194,this->_literals[50],this->_literals[140]);j::put(_obj54194,this->_literals[51],V(1.0));return _obj54194;})();
}
if(j::truth(([&]()->V{V _logical54195=([&]()->V{V _lhs54196=j::get(_v_50897_c,this->_literals[50]);V _rhs54197=this->_literals[53];return V(j::equal(_lhs54196,_rhs54197,true));})();return j::truth(_logical54195)?([&]()->V{V _lhs54198=_v_50876_depth;V _rhs54199=V(2.0);return j::binary("<",_lhs54198,_rhs54199);})():_logical54195;})())){
V _v_50898_cc;
_v_50898_cc=([&]()->V{V _callee54200=this->_v_50554_color.get();return j::call(_callee54200,j::Args{j::get(_v_50875_st,this->_literals[141])});})();
if(j::truth(([&]()->V{V _logical54201=_v_50898_cc;return j::truth(_logical54201)?([&]()->V{V _lhs54202=j::get(_v_50898_cc,this->_literals[50]);V _rhs54203=this->_literals[53];return V(!j::equal(_lhs54202,_rhs54203,true));})():_logical54201;})())){return ([&]()->V{V _obj54204=j::object();j::put(_obj54204,this->_literals[50],j::get(_v_50898_cc,this->_literals[50]));j::put(_obj54204,this->_literals[51],j::get(_v_50898_cc,this->_literals[51]));return _obj54204;})();
}

}

return _v_50897_c;

}

return V{};
},2);
_v_50899_walk.get()=j::function([=](const j::Args &_args_fn50900,const V &_receiver_fn50900,const V &_self_fn50900) mutable ->V{
V _v_50901_n;
V _v_50902_ctm;
V _v_50903_parent;
V _v_50904_chain;
V _v_50905_depth;
V _v_50906_vbw;
V _v_50907_vbh;
_v_50901_n=_args_fn50900[0];
_v_50902_ctm=_args_fn50900[1];
_v_50903_parent=_args_fn50900[2];
_v_50904_chain=_args_fn50900[3];
_v_50905_depth=_args_fn50900[4];
_v_50906_vbw=_args_fn50900[5];
_v_50907_vbh=_args_fn50900[6];
{
if(j::truth(([&]()->V{V _lhs54205=_v_50905_depth;V _rhs54206=this->_v_50814_DEEP.get();return j::binary(">",_lhs54205,_rhs54206);})())){return V{};
}
if(j::truth(([&]()->V{V _lhs54207=_v_50851_count.get();V _rhs54208=this->_v_50810_MOST.get();return j::binary(">=",_lhs54207,_rhs54208);})())){(void)(([&]()->V{V _callee54209=_v_50853_tooMuch.get();return j::call(_callee54209,j::Args{this->_literals[146],this->_v_50810_MOST.get()});})());
}
(void)(([&]()->V{V _receiver54210=_v_50850_open.get();V _method54211=this->_literals[147];V _method=j::get(_receiver54210,_method54211);j::Args _params54212=j::Args{_v_50901_n};return j::call(_method,_params54212,_receiver54210);})());
{struct _Guard{std::function<void()> f;~_Guard(){f();}} _guard{[&](){{
(void)(([&]()->V{V _receiver54213=_v_50850_open.get();V _method54214=this->_literals[148];V _method=j::get(_receiver54213,_method54214);j::Args _params54215=j::Args{_v_50901_n};return j::call(_method,_params54215,_receiver54213);})());

}
}};try {
(void)(([&]()->V{V _callee54216=_v_50908_visit.get();return j::call(_callee54216,j::Args{_v_50901_n,_v_50902_ctm,_v_50903_parent,_v_50904_chain,_v_50905_depth,_v_50906_vbw,_v_50907_vbh});})());

}
catch(...){throw;}}

}

return V{};
},7);
_v_50908_visit.get()=j::function([=](const j::Args &_args_fn50909,const V &_receiver_fn50909,const V &_self_fn50909) mutable ->V{
V _v_50910_n;
V _v_50911_ctm;
V _v_50912_parent;
V _v_50913_chain;
V _v_50914_depth;
V _v_50915_vbw;
V _v_50916_vbh;
_v_50910_n=_args_fn50909[0];
_v_50911_ctm=_args_fn50909[1];
_v_50912_parent=_args_fn50909[2];
_v_50913_chain=_args_fn50909[3];
_v_50914_depth=_args_fn50909[4];
_v_50915_vbw=_args_fn50909[5];
_v_50916_vbh=_args_fn50909[6];
{
V _v_50917_p;
V _v_50918_pick;
V _v_50922_op;
V _v_50925_st;
V _v_50926_node;
V _v_50927_path;
V _v_50928_m;
V _v_50931_ops;
V _v_50932_f;
V _v_50933_s;
V _v_50934_scale;
V _v_50935_sw;
V _v_50936_fill;
V _v_50937_stroke;
V _v_50938_all;
V _v_50939_subs;
V _v_50941_b;
_v_50917_p=([&]()->V{V _callee54217=_v_50857_own.get();return j::call(_callee54217,j::Args{_v_50910_n});})();
if(j::truth(([&]()->V{V _lhs54218=([&]()->V{V _chain54220=_v_50917_p;V _chain54221=j::get(_chain54220,this->_literals[149]);if(j::nullish(_chain54221))return V{};V _chain54222=j::get(_chain54221,this->_literals[21]);V _chain54223=j::call(_chain54222,j::Args{},_chain54221);return _chain54223;})();V _rhs54219=this->_literals[48];return V(j::equal(_lhs54218,_rhs54219,true));})())){return V{};
}
_v_50918_pick=j::function([=](const j::Args &_args_fn50919,const V &_receiver_fn50919,const V &_self_fn50919) mutable ->V{
V _v_50920_v;
V _v_50921_inherited;
_v_50920_v=_args_fn50919[0];
_v_50921_inherited=_args_fn50919[1];
return (j::truth(([&]()->V{V _logical54224=([&]()->V{V _lhs54225=_v_50920_v;V _rhs54226=j::builtin("undefined");return V(j::equal(_lhs54225,_rhs54226,true));})();return !j::truth(_logical54224)?([&]()->V{V _lhs54227=_v_50920_v;V _rhs54228=this->_literals[150];return V(j::equal(_lhs54227,_rhs54228,true));})():_logical54224;})())?_v_50921_inherited:_v_50920_v);
return V{};
},2);
_v_50922_op=j::function([=](const j::Args &_args_fn50923,const V &_receiver_fn50923,const V &_self_fn50923) mutable ->V{
V _v_50924_v;
_v_50924_v=_args_fn50923[0];
return (j::truth(([&]()->V{V _logical54229=([&]()->V{V _lhs54230=_v_50924_v;V _rhs54231=j::builtin("undefined");return V(j::equal(_lhs54230,_rhs54231,true));})();return !j::truth(_logical54229)?([&]()->V{V _lhs54232=_v_50924_v;V _rhs54233=this->_literals[150];return V(j::equal(_lhs54232,_rhs54233,true));})():_logical54229;})())?V(1.0):([&]()->V{V _callee54235=this->_v_50447_clamp.get();return j::call(_callee54235,j::Args{([&]()->V{V _callee54234=this->_v_50538_unit.get();return j::call(_callee54234,j::Args{_v_50924_v,V(1.0)});})()});})());
return V{};
},1);
_v_50925_st=([&]()->V{V _obj54236=j::object();j::put(_obj54236,this->_literals[130],([&]()->V{V _callee54237=_v_50918_pick;return j::call(_callee54237,j::Args{j::get(_v_50917_p,this->_literals[130]),j::get(_v_50912_parent,this->_literals[130])});})());j::put(_obj54236,this->_literals[131],([&]()->V{V _callee54238=_v_50918_pick;return j::call(_callee54238,j::Args{j::get(_v_50917_p,this->_literals[131]),j::get(_v_50912_parent,this->_literals[131])});})());j::put(_obj54236,this->_literals[151],([&]()->V{V _callee54239=_v_50918_pick;return j::call(_callee54239,j::Args{j::get(_v_50917_p,this->_literals[152]),j::get(_v_50912_parent,this->_literals[151])});})());j::put(_obj54236,this->_literals[153],(j::truth(([&]()->V{V _logical54240=([&]()->V{V _lhs54241=j::get(_v_50917_p,this->_literals[154]);V _rhs54242=j::builtin("undefined");return V(j::equal(_lhs54241,_rhs54242,true));})();return !j::truth(_logical54240)?([&]()->V{V _lhs54243=j::get(_v_50917_p,this->_literals[154]);V _rhs54244=this->_literals[150];return V(j::equal(_lhs54243,_rhs54244,true));})():_logical54240;})())?j::get(_v_50912_parent,this->_literals[153]):([&]()->V{V _callee54245=_v_50922_op;return j::call(_callee54245,j::Args{j::get(_v_50917_p,this->_literals[154])});})()));j::put(_obj54236,this->_literals[155],(j::truth(([&]()->V{V _logical54246=([&]()->V{V _lhs54247=j::get(_v_50917_p,this->_literals[156]);V _rhs54248=j::builtin("undefined");return V(j::equal(_lhs54247,_rhs54248,true));})();return !j::truth(_logical54246)?([&]()->V{V _lhs54249=j::get(_v_50917_p,this->_literals[156]);V _rhs54250=this->_literals[150];return V(j::equal(_lhs54249,_rhs54250,true));})():_logical54246;})())?j::get(_v_50912_parent,this->_literals[155]):([&]()->V{V _callee54251=_v_50922_op;return j::call(_callee54251,j::Args{j::get(_v_50917_p,this->_literals[156])});})()));j::put(_obj54236,this->_literals[157],(j::truth(([&]()->V{V _lhs54252=j::get(_v_50917_p,this->_literals[158]);V _rhs54253=this->_literals[159];return V(j::equal(_lhs54252,_rhs54253,true));})())?this->_literals[159]:(j::truth(([&]()->V{V _lhs54254=j::get(_v_50917_p,this->_literals[158]);V _rhs54255=this->_literals[160];return V(j::equal(_lhs54254,_rhs54255,true));})())?this->_literals[160]:j::get(_v_50912_parent,this->_literals[157]))));j::put(_obj54236,this->_literals[161],(j::truth(([&]()->V{V _logical54256=([&]()->V{V _logical54257=([&]()->V{V _lhs54258=j::get(_v_50917_p,this->_literals[162]);V _rhs54259=this->_literals[163];return V(j::equal(_lhs54258,_rhs54259,true));})();return !j::truth(_logical54257)?([&]()->V{V _lhs54260=j::get(_v_50917_p,this->_literals[162]);V _rhs54261=this->_literals[164];return V(j::equal(_lhs54260,_rhs54261,true));})():_logical54257;})();return !j::truth(_logical54256)?([&]()->V{V _lhs54262=j::get(_v_50917_p,this->_literals[162]);V _rhs54263=this->_literals[165];return V(j::equal(_lhs54262,_rhs54263,true));})():_logical54256;})())?j::get(_v_50917_p,this->_literals[162]):j::get(_v_50912_parent,this->_literals[161])));j::put(_obj54236,this->_literals[166],(j::truth(([&]()->V{V _logical54264=([&]()->V{V _lhs54265=j::get(_v_50917_p,this->_literals[167]);V _rhs54266=j::builtin("undefined");return V(j::equal(_lhs54265,_rhs54266,true));})();return !j::truth(_logical54264)?([&]()->V{V _lhs54267=j::get(_v_50917_p,this->_literals[167]);V _rhs54268=this->_literals[150];return V(j::equal(_lhs54267,_rhs54268,true));})():_logical54264;})())?j::get(_v_50912_parent,this->_literals[166]):([&]()->V{V _lhs54269=j::get(_v_50917_p,this->_literals[167]);V _rhs54270=this->_literals[166];return V(j::equal(_lhs54269,_rhs54270,true));})()));j::put(_obj54236,this->_literals[141],([&]()->V{V _callee54271=_v_50918_pick;return j::call(_callee54271,j::Args{j::get(_v_50917_p,this->_literals[141]),j::get(_v_50912_parent,this->_literals[141])});})());j::put(_obj54236,this->_literals[168],([&]()->V{V _lhs54272=j::get(_v_50912_parent,this->_literals[168]);V _rhs54273=([&]()->V{V _callee54274=_v_50922_op;return j::call(_callee54274,j::Args{j::get(_v_50917_p,this->_literals[168])});})();return V(j::number(_lhs54272)*j::number(_rhs54273));})());return _obj54236;})();
_v_50926_node=([&]()->V{V _obj54275=j::object();j::put(_obj54275,this->_literals[43],j::get(_v_50910_n,this->_literals[0]));j::put(_obj54275,this->_literals[44],([&]()->V{V _logical54276=j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[44]);return j::nullish(_logical54276)?V::null():_logical54276;})());j::put(_obj54275,this->_literals[45],([&]()->V{V _receiver54277=([&]()->V{V _receiver54280=([&]()->V{V _logical54283=j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[132]);return j::nullish(_logical54283)?this->_literals[1]:_logical54283;})();V _method54281=this->_literals[27];V _method=j::get(_receiver54280,_method54281);j::Args _params54282=j::Args{j::regexp(u"\\s+","")};return j::call(_method,_params54282,_receiver54280);})();V _method54278=this->_literals[40];V _method=j::get(_receiver54277,_method54278);j::Args _params54279=j::Args{j::builtin("Boolean")};return j::call(_method,_params54279,_receiver54277);})());j::put(_obj54275,this->_literals[169],j::increment(_v_50851_count.get(),1,false));return _obj54275;})();
_v_50927_path=([&]()->V{j::Args _array54284;for(const auto &_value:j::elements(_v_50913_chain))_array54284.push_back(_value);_array54284.push_back(_v_50926_node);return j::array(std::move(_array54284));})();
_v_50928_m=([&]()->V{V _callee54286=this->_v_50577_mul.get();return j::call(_callee54286,j::Args{_v_50911_ctm,([&]()->V{V _callee54285=this->_v_50597_transform.get();return j::call(_callee54285,j::Args{j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[170])});})()});})();
if(j::truth(([&]()->V{V _lhs54287=j::get(_v_50910_n,this->_literals[0]);V _rhs54288=this->_literals[171];return V(j::equal(_lhs54287,_rhs54288,true));})())){
V _v_50929_ref;
_v_50929_ref=([&]()->V{V _receiver54294=_v_50830_ids.get();V _method54295=this->_literals[54];V _method=j::get(_receiver54294,_method54295);j::Args _params54296=j::Args{([&]()->V{V _receiver54289=([&]()->V{V _logical54292=([&]()->V{V _logical54293=j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[136]);return j::nullish(_logical54293)?j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[137]):_logical54293;})();return j::nullish(_logical54292)?this->_literals[1]:_logical54292;})();V _method54290=this->_literals[31];V _method=j::get(_receiver54289,_method54290);j::Args _params54291=j::Args{j::regexp(u"^#",""),this->_literals[1]};return j::call(_method,_params54291,_receiver54289);})()};return j::call(_method,_params54296,_receiver54294);})();
if(j::truth(([&]()->V{V _logical54297=j::unary("!",_v_50929_ref);return !j::truth(_logical54297)?([&]()->V{V _receiver54298=_v_50850_open.get();V _method54299=this->_literals[30];V _method=j::get(_receiver54298,_method54299);j::Args _params54300=j::Args{_v_50929_ref};return j::call(_method,_params54300,_receiver54298);})():_logical54297;})())){return V{};
}
(void)((_v_50928_m=([&]()->V{V _callee54305=this->_v_50577_mul.get();return j::call(_callee54305,j::Args{_v_50928_m,([&]()->V{j::Args _array54302;_array54302.push_back(V(1.0));_array54302.push_back(V(0.0));_array54302.push_back(V(0.0));_array54302.push_back(V(1.0));_array54302.push_back(([&]()->V{V _callee54303=this->_v_50707_len.get();return j::call(_callee54303,j::Args{j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[98]),_v_50915_vbw});})());_array54302.push_back(([&]()->V{V _callee54304=this->_v_50707_len.get();return j::call(_callee54304,j::Args{j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[99]),_v_50916_vbh});})());return j::array(std::move(_array54302));})()});})()));
(void)(([&]()->V{V _receiver54306=_v_50850_open.get();V _method54307=this->_literals[147];V _method=j::get(_receiver54306,_method54307);j::Args _params54308=j::Args{_v_50929_ref};return j::call(_method,_params54308,_receiver54306);})());
{struct _Guard{std::function<void()> f;~_Guard(){f();}} _guard{[&](){{
(void)(([&]()->V{V _receiver54309=_v_50850_open.get();V _method54310=this->_literals[148];V _method=j::get(_receiver54309,_method54310);j::Args _params54311=j::Args{_v_50929_ref};return j::call(_method,_params54311,_receiver54309);})());

}
}};try {
if(j::truth(([&]()->V{V _logical54312=([&]()->V{V _lhs54313=j::get(_v_50929_ref,this->_literals[0]);V _rhs54314=this->_literals[172];return V(j::equal(_lhs54313,_rhs54314,true));})();return !j::truth(_logical54312)?([&]()->V{V _lhs54315=j::get(_v_50929_ref,this->_literals[0]);V _rhs54316=this->_literals[121];return V(j::equal(_lhs54315,_rhs54316,true));})():_logical54312;})())){(void)(([&]()->V{V _callee54317=_v_50942_nested.get();return j::call(_callee54317,j::Args{_v_50929_ref,_v_50928_m,_v_50925_st,_v_50927_path,_v_50914_depth,j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[100]),j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[101]),_v_50915_vbw,_v_50916_vbh});})());
}else {(void)(([&]()->V{V _callee54320=_v_50899_walk.get();return j::call(_callee54320,j::Args{_v_50929_ref,_v_50928_m,_v_50925_st,_v_50927_path,([&]()->V{V _lhs54318=_v_50914_depth;V _rhs54319=V(1.0);return j::binary("+",_lhs54318,_rhs54319);})(),_v_50915_vbw,_v_50916_vbh});})());
}

}
catch(...){throw;}}
return V{};

}

if(j::truth(([&]()->V{V _logical54321=([&]()->V{V _lhs54322=j::get(_v_50910_n,this->_literals[0]);V _rhs54323=this->_literals[121];return V(j::equal(_lhs54322,_rhs54323,true));})();return j::truth(_logical54321)?([&]()->V{V _lhs54324=_v_50914_depth;V _rhs54325=V(0.0);return j::binary(">",_lhs54324,_rhs54325);})():_logical54321;})())){
(void)(([&]()->V{V _callee54330=_v_50942_nested.get();return j::call(_callee54330,j::Args{_v_50910_n,([&]()->V{V _callee54329=this->_v_50577_mul.get();return j::call(_callee54329,j::Args{_v_50928_m,([&]()->V{j::Args _array54326;_array54326.push_back(V(1.0));_array54326.push_back(V(0.0));_array54326.push_back(V(0.0));_array54326.push_back(V(1.0));_array54326.push_back(([&]()->V{V _callee54327=this->_v_50707_len.get();return j::call(_callee54327,j::Args{j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[98]),_v_50915_vbw});})());_array54326.push_back(([&]()->V{V _callee54328=this->_v_50707_len.get();return j::call(_callee54328,j::Args{j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[99]),_v_50916_vbh});})());return j::array(std::move(_array54326));})()});})(),_v_50925_st,_v_50913_chain,_v_50914_depth,j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[100]),j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[101]),_v_50915_vbw,_v_50916_vbh,_v_50926_node});})());
return V{};

}

if(j::truth(([&]()->V{V _receiver54331=this->_v_50808_GROUPS.get();V _method54332=this->_literals[30];V _method=j::get(_receiver54331,_method54332);j::Args _params54333=j::Args{j::get(_v_50910_n,this->_literals[0])};return j::call(_method,_params54333,_receiver54331);})())){
{for(const auto &_item54334:j::elements(j::get(_v_50910_n,this->_literals[3]))){V _v_50930_k;
_v_50930_k=_item54334;
(void)(([&]()->V{V _callee54337=_v_50899_walk.get();return j::call(_callee54337,j::Args{_v_50930_k,_v_50928_m,_v_50925_st,_v_50927_path,([&]()->V{V _lhs54335=_v_50914_depth;V _rhs54336=V(1.0);return j::binary("+",_lhs54335,_rhs54336);})(),_v_50915_vbw,_v_50916_vbh});})());
}}
return V{};

}

if(j::truth(([&]()->V{V _logical54338=([&]()->V{V _receiver54339=this->_v_50809_LEFT_OUT.get();V _method54340=this->_literals[30];V _method=j::get(_receiver54339,_method54340);j::Args _params54341=j::Args{j::get(_v_50910_n,this->_literals[0])};return j::call(_method,_params54341,_receiver54339);})();return j::truth(_logical54338)?j::get(_v_50925_st,this->_literals[166]):_logical54338;})())){(void)(([&]()->V{V _receiver54344=_v_50849_skipped.get();V _method54345=this->_literals[147];V _method=j::get(_receiver54344,_method54345);j::Args _params54346=j::Args{(j::truth(([&]()->V{V _lhs54342=j::get(_v_50910_n,this->_literals[0]);V _rhs54343=this->_literals[173];return V(j::equal(_lhs54342,_rhs54343,true));})())?this->_literals[174]:j::get(_v_50910_n,this->_literals[0]))};return j::call(_method,_params54346,_receiver54344);})());
}
if(j::truth(([&]()->V{V _logical54347=j::get(_v_50925_st,this->_literals[166]);return j::truth(_logical54347)?([&]()->V{V _logical54348=([&]()->V{V _logical54349=([&]()->V{V _logical54350=j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[175]);return !j::truth(_logical54350)?j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[176]):_logical54350;})();return !j::truth(_logical54349)?j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[177]):_logical54349;})();return !j::truth(_logical54348)?([&]()->V{V _receiver54352=j::regexp(u"marker(-start|-mid|-end)?\\s*:","");V _method54353=this->_literals[24];V _method=j::get(_receiver54352,_method54353);j::Args _params54354=j::Args{([&]()->V{V _logical54351=j::get(j::get(_v_50910_n,this->_literals[2]),this->_literals[124]);return j::nullish(_logical54351)?this->_literals[1]:_logical54351;})()};return j::call(_method,_params54354,_receiver54352);})():_logical54348;})():_logical54347;})())){(void)(([&]()->V{V _receiver54355=_v_50849_skipped.get();V _method54356=this->_literals[147];V _method=j::get(_receiver54355,_method54356);j::Args _params54357=j::Args{this->_literals[178]};return j::call(_method,_params54357,_receiver54355);})());
}
if(j::truth(([&]()->V{V _logical54358=j::unary("!",([&]()->V{V _receiver54359=this->_v_50807_SHAPES.get();V _method54360=this->_literals[30];V _method=j::get(_receiver54359,_method54360);j::Args _params54361=j::Args{j::get(_v_50910_n,this->_literals[0])};return j::call(_method,_params54361,_receiver54359);})());return !j::truth(_logical54358)?j::unary("!",j::get(_v_50925_st,this->_literals[166])):_logical54358;})())){return V{};
}
_v_50931_ops=([&]()->V{V _callee54362=this->_v_50717_shapeOps.get();return j::call(_callee54362,j::Args{j::get(_v_50910_n,this->_literals[0]),j::get(_v_50910_n,this->_literals[2]),_v_50915_vbw,_v_50916_vbh});})();
if(j::truth(j::unary("!",_v_50931_ops))){return V{};
}
_v_50932_f=(j::truth(([&]()->V{V _lhs54363=j::get(_v_50910_n,this->_literals[0]);V _rhs54364=this->_literals[94];return V(j::equal(_lhs54363,_rhs54364,true));})())?([&]()->V{V _obj54365=j::object();j::put(_obj54365,this->_literals[50],V::null());j::put(_obj54365,this->_literals[51],V(0.0));return _obj54365;})():([&]()->V{V _callee54366=_v_50872_paint.get();return j::call(_callee54366,j::Args{j::get(_v_50925_st,this->_literals[130]),_v_50925_st});})());
_v_50933_s=([&]()->V{V _callee54367=_v_50872_paint.get();return j::call(_callee54367,j::Args{j::get(_v_50925_st,this->_literals[131]),_v_50925_st});})();
_v_50934_scale=([&]()->V{V _number54381=([&]()->V{V _number54388=([&]()->V{V _lhs54389=([&]()->V{V _lhs54391=j::get(_v_50928_m,V(0.0));V _rhs54392=j::get(_v_50928_m,V(3.0));return V(j::number(_lhs54391)*j::number(_rhs54392));})();V _rhs54390=([&]()->V{V _lhs54393=j::get(_v_50928_m,V(1.0));V _rhs54394=j::get(_v_50928_m,V(2.0));return V(j::number(_lhs54393)*j::number(_rhs54394));})();return V(j::number(_lhs54389)-j::number(_rhs54390));})();return V(std::fabs(j::number(_number54388)));})();return V(std::sqrt(j::number(_number54381)));})();
_v_50935_sw=([&]()->V{V _lhs54395=([&]()->V{V _receiver54417=j::builtin("Math");V _method54418=this->_literals[66];V _method=j::get(_receiver54417,_method54418);j::Args _params54419=j::Args{V(0.0),([&]()->V{V _callee54414=this->_v_50707_len.get();return j::call(_callee54414,j::Args{j::get(_v_50925_st,this->_literals[151]),([&]()->V{V _number54405=([&]()->V{V _lhs54406=([&]()->V{V _lhs54408=([&]()->V{V _lhs54410=_v_50915_vbw;V _rhs54411=_v_50915_vbw;return V(j::number(_lhs54410)*j::number(_rhs54411));})();V _rhs54409=([&]()->V{V _lhs54412=_v_50916_vbh;V _rhs54413=_v_50916_vbh;return V(j::number(_lhs54412)*j::number(_rhs54413));})();return j::binary("+",_lhs54408,_rhs54409);})();V _rhs54407=V(2.0);return V(j::number(_lhs54406)/j::number(_rhs54407));})();return V(std::sqrt(j::number(_number54405)));})(),V(1.0)});})()};return j::call(_method,_params54419,_receiver54417);})();V _rhs54396=_v_50934_scale;return V(j::number(_lhs54395)*j::number(_rhs54396));})();
_v_50936_fill=(j::truth(([&]()->V{V _logical54420=j::get(_v_50932_f,this->_literals[50]);return j::truth(_logical54420)?([&]()->V{V _lhs54421=([&]()->V{V _lhs54423=([&]()->V{V _lhs54425=j::get(_v_50932_f,this->_literals[51]);V _rhs54426=j::get(_v_50925_st,this->_literals[153]);return V(j::number(_lhs54425)*j::number(_rhs54426));})();V _rhs54424=j::get(_v_50925_st,this->_literals[168]);return V(j::number(_lhs54423)*j::number(_rhs54424));})();V _rhs54422=V(0.0);return j::binary(">",_lhs54421,_rhs54422);})():_logical54420;})())?j::get(_v_50932_f,this->_literals[50]):V::null());
_v_50937_stroke=(j::truth(([&]()->V{V _logical54427=([&]()->V{V _logical54428=j::get(_v_50933_s,this->_literals[50]);return j::truth(_logical54428)?([&]()->V{V _lhs54429=_v_50935_sw;V _rhs54430=V(0.0);return j::binary(">",_lhs54429,_rhs54430);})():_logical54428;})();return j::truth(_logical54427)?([&]()->V{V _lhs54431=([&]()->V{V _lhs54433=([&]()->V{V _lhs54435=j::get(_v_50933_s,this->_literals[51]);V _rhs54436=j::get(_v_50925_st,this->_literals[155]);return V(j::number(_lhs54435)*j::number(_rhs54436));})();V _rhs54434=j::get(_v_50925_st,this->_literals[168]);return V(j::number(_lhs54433)*j::number(_rhs54434));})();V _rhs54432=V(0.0);return j::binary(">",_lhs54431,_rhs54432);})():_logical54427;})())?j::get(_v_50933_s,this->_literals[50]):V::null());
if(j::truth(([&]()->V{V _logical54437=j::unary("!",_v_50936_fill);return j::truth(_logical54437)?j::unary("!",_v_50937_stroke):_logical54437;})())){return V{};
}
_v_50938_all=([&]()->V{V _callee54438=this->_v_50745_moved.get();return j::call(_callee54438,j::Args{_v_50931_ops,_v_50928_m});})();
if(j::truth(j::unary("!",([&]()->V{V _receiver54439=_v_50938_all;V _method54440=this->_literals[134];V _method=j::get(_receiver54439,_method54440);j::Args _params54441=j::Args{j::get(j::builtin("Number"),this->_literals[57])};return j::call(_method,_params54441,_receiver54439);})()))){return V{};
}
if(j::truth(([&]()->V{V _lhs54442=j::get(_v_50848_shapes.get(),this->_literals[5]);V _rhs54443=this->_v_50811_MOST_SHAPES.get();return j::binary(">=",_lhs54442,_rhs54443);})())){(void)(([&]()->V{V _callee54444=_v_50853_tooMuch.get();return j::call(_callee54444,j::Args{this->_literals[179],this->_v_50811_MOST_SHAPES.get()});})());
}
_v_50939_subs=([&]()->V{V _callee54452=this->_v_50756_flatten.get();return j::call(_callee54452,j::Args{_v_50938_all,this->_v_50576_IDENTITY.get(),([&]()->V{V _lhs54445=([&]()->V{V _receiver54449=j::builtin("Math");V _method54450=this->_literals[66];V _method=j::get(_receiver54449,_method54450);j::Args _params54451=j::Args{_v_50846_vw.get(),_v_50847_vh.get()};return j::call(_method,_params54451,_receiver54449);})();V _rhs54446=V(4000.0);return V(j::number(_lhs54445)/j::number(_rhs54446));})()});})();
{for(const auto &_item54453:j::elements(_v_50939_subs)){V _v_50940_sub;
_v_50940_sub=_item54453;
(void)((_v_50852_segments.get()=j::binary("+",_v_50852_segments.get(),([&]()->V{V _lhs54455=j::get(j::get(_v_50940_sub,this->_literals[114]),this->_literals[5]);V _rhs54456=V(1.0);return V(int(j::i32(_lhs54455)>>(j::u32(_rhs54456)&31)));})())));
}}
if(j::truth(([&]()->V{V _lhs54457=_v_50852_segments.get();V _rhs54458=this->_v_50812_MOST_SEGMENTS.get();return j::binary(">",_lhs54457,_rhs54458);})())){(void)(([&]()->V{V _callee54459=_v_50853_tooMuch.get();return j::call(_callee54459,j::Args{this->_literals[180],this->_v_50812_MOST_SEGMENTS.get()});})());
}
_v_50941_b=([&]()->V{V _callee54462=this->_v_50797_bounds.get();return j::call(_callee54462,j::Args{_v_50939_subs,(j::truth(_v_50937_stroke)?([&]()->V{V _lhs54460=_v_50935_sw;V _rhs54461=V(2.0);return V(j::number(_lhs54460)/j::number(_rhs54461));})():V(0.0))});})();
if(j::truth(([&]()->V{V _logical54463=([&]()->V{V _logical54464=j::unary("!",_v_50941_b);return !j::truth(_logical54464)?j::unary("!",([&]()->V{V _receiver54467=j::builtin("Number");V _method54468=this->_literals[57];V _method=j::get(_receiver54467,_method54468);j::Args _params54469=j::Args{([&]()->V{V _lhs54465=j::get(_v_50941_b,V(2.0));V _rhs54466=j::get(_v_50941_b,V(0.0));return V(j::number(_lhs54465)-j::number(_rhs54466));})()};return j::call(_method,_params54469,_receiver54467);})()):_logical54464;})();return !j::truth(_logical54463)?j::unary("!",([&]()->V{V _receiver54472=j::builtin("Number");V _method54473=this->_literals[57];V _method=j::get(_receiver54472,_method54473);j::Args _params54474=j::Args{([&]()->V{V _lhs54470=j::get(_v_50941_b,V(3.0));V _rhs54471=j::get(_v_50941_b,V(1.0));return V(j::number(_lhs54470)-j::number(_rhs54471));})()};return j::call(_method,_params54474,_receiver54472);})()):_logical54463;})())){return V{};
}
(void)(([&]()->V{V _receiver54489=_v_50848_shapes.get();V _method54490=this->_literals[25];V _method=j::get(_receiver54489,_method54490);j::Args _params54491=j::Args{([&]()->V{V _obj54475=j::object();j::put(_obj54475,this->_literals[43],j::get(_v_50910_n,this->_literals[0]));j::put(_obj54475,this->_literals[44],j::get(_v_50926_node,this->_literals[44]));j::put(_obj54475,this->_literals[45],j::get(_v_50926_node,this->_literals[45]));j::put(_obj54475,this->_literals[181],_v_50927_path);j::put(_obj54475,this->_literals[130],_v_50936_fill);j::put(_obj54475,this->_literals[131],_v_50937_stroke);j::put(_obj54475,this->_literals[151],(j::truth(_v_50937_stroke)?_v_50935_sw:V(0.0)));j::put(_obj54475,this->_literals[153],(j::truth(_v_50936_fill)?([&]()->V{V _lhs54476=([&]()->V{V _lhs54478=j::get(_v_50932_f,this->_literals[51]);V _rhs54479=j::get(_v_50925_st,this->_literals[153]);return V(j::number(_lhs54478)*j::number(_rhs54479));})();V _rhs54477=j::get(_v_50925_st,this->_literals[168]);return V(j::number(_lhs54476)*j::number(_rhs54477));})():V(0.0)));j::put(_obj54475,this->_literals[155],(j::truth(_v_50937_stroke)?([&]()->V{V _lhs54480=([&]()->V{V _lhs54482=j::get(_v_50933_s,this->_literals[51]);V _rhs54483=j::get(_v_50925_st,this->_literals[155]);return V(j::number(_lhs54482)*j::number(_rhs54483));})();V _rhs54481=j::get(_v_50925_st,this->_literals[168]);return V(j::number(_lhs54480)*j::number(_rhs54481));})():V(0.0)));j::put(_obj54475,this->_literals[157],j::get(_v_50925_st,this->_literals[157]));j::put(_obj54475,this->_literals[161],j::get(_v_50925_st,this->_literals[161]));j::put(_obj54475,this->_literals[182],_v_50938_all);j::put(_obj54475,this->_literals[183],([&]()->V{j::Args _array54484;_array54484.push_back(j::get(_v_50941_b,V(0.0)));_array54484.push_back(j::get(_v_50941_b,V(1.0)));_array54484.push_back(([&]()->V{V _lhs54485=j::get(_v_50941_b,V(2.0));V _rhs54486=j::get(_v_50941_b,V(0.0));return V(j::number(_lhs54485)-j::number(_rhs54486));})());_array54484.push_back(([&]()->V{V _lhs54487=j::get(_v_50941_b,V(3.0));V _rhs54488=j::get(_v_50941_b,V(1.0));return V(j::number(_lhs54487)-j::number(_rhs54488));})());return j::array(std::move(_array54484));})());return _obj54475;})()};return j::call(_method,_params54491,_receiver54489);})());

}

return V{};
},7);
_v_50942_nested.get()=j::function([=](const j::Args &_args_fn50943,const V &_receiver_fn50943,const V &_self_fn50943) mutable ->V{
V _v_50944_n;
V _v_50945_m;
V _v_50946_st;
V _v_50947_chain;
V _v_50948_depth;
V _v_50949_w;
V _v_50950_h;
V _v_50951_pw;
V _v_50952_ph;
V _v_50953_self;
_v_50944_n=_args_fn50943[0];
_v_50945_m=_args_fn50943[1];
_v_50946_st=_args_fn50943[2];
_v_50947_chain=_args_fn50943[3];
_v_50948_depth=_args_fn50943[4];
_v_50949_w=_args_fn50943[5];
_v_50950_h=_args_fn50943[6];
_v_50951_pw=_args_fn50943[7];
_v_50952_ph=_args_fn50943[8];
_v_50953_self=_args_fn50943[9];
{
V _v_50954_vb;
V _v_50955_width;
V _v_50956_height;
V _v_50957_inner;
V _v_50958_iw;
V _v_50959_ih;
V _v_50961_path;
_v_50954_vb=([&]()->V{V _callee54492=this->_v_50714_numbers.get();return j::call(_callee54492,j::Args{j::get(j::get(_v_50944_n,this->_literals[2]),this->_literals[129])});})();
_v_50955_width=([&]()->V{V _callee54494=this->_v_50707_len.get();return j::call(_callee54494,j::Args{([&]()->V{V _logical54493=_v_50949_w;return j::nullish(_logical54493)?j::get(j::get(_v_50944_n,this->_literals[2]),this->_literals[100]):_logical54493;})(),_v_50951_pw,_v_50951_pw});})();
_v_50956_height=([&]()->V{V _callee54496=this->_v_50707_len.get();return j::call(_callee54496,j::Args{([&]()->V{V _logical54495=_v_50950_h;return j::nullish(_logical54495)?j::get(j::get(_v_50944_n,this->_literals[2]),this->_literals[101]):_logical54495;})(),_v_50952_ph,_v_50952_ph});})();
_v_50957_inner=_v_50945_m;
_v_50958_iw=_v_50955_width;
_v_50959_ih=_v_50956_height;
if(j::truth(([&]()->V{V _logical54497=([&]()->V{V _logical54498=([&]()->V{V _lhs54499=j::get(_v_50954_vb,this->_literals[5]);V _rhs54500=V(4.0);return V(j::equal(_lhs54499,_rhs54500,true));})();return j::truth(_logical54498)?([&]()->V{V _lhs54501=j::get(_v_50954_vb,V(2.0));V _rhs54502=V(0.0);return j::binary(">",_lhs54501,_rhs54502);})():_logical54498;})();return j::truth(_logical54497)?([&]()->V{V _lhs54503=j::get(_v_50954_vb,V(3.0));V _rhs54504=V(0.0);return j::binary(">",_lhs54503,_rhs54504);})():_logical54497;})())){
V _v_50960_k;
_v_50960_k=([&]()->V{V _receiver54511=j::builtin("Math");V _method54512=this->_literals[116];V _method=j::get(_receiver54511,_method54512);j::Args _params54513=j::Args{([&]()->V{V _lhs54505=_v_50955_width;V _rhs54506=j::get(_v_50954_vb,V(2.0));return V(j::number(_lhs54505)/j::number(_rhs54506));})(),([&]()->V{V _lhs54507=_v_50956_height;V _rhs54508=j::get(_v_50954_vb,V(3.0));return V(j::number(_lhs54507)/j::number(_rhs54508));})()};return j::call(_method,_params54513,_receiver54511);})();
(void)((_v_50957_inner=([&]()->V{V _callee54536=this->_v_50577_mul.get();return j::call(_callee54536,j::Args{_v_50945_m,([&]()->V{j::Args _array54515;_array54515.push_back(_v_50960_k);_array54515.push_back(V(0.0));_array54515.push_back(V(0.0));_array54515.push_back(_v_50960_k);_array54515.push_back(([&]()->V{V _lhs54516=([&]()->V{V _lhs54518=([&]()->V{V _lhs54520=_v_50955_width;V _rhs54521=([&]()->V{V _lhs54522=j::get(_v_50954_vb,V(2.0));V _rhs54523=_v_50960_k;return V(j::number(_lhs54522)*j::number(_rhs54523));})();return V(j::number(_lhs54520)-j::number(_rhs54521));})();V _rhs54519=V(2.0);return V(j::number(_lhs54518)/j::number(_rhs54519));})();V _rhs54517=([&]()->V{V _lhs54524=j::get(_v_50954_vb,V(0.0));V _rhs54525=_v_50960_k;return V(j::number(_lhs54524)*j::number(_rhs54525));})();return V(j::number(_lhs54516)-j::number(_rhs54517));})());_array54515.push_back(([&]()->V{V _lhs54526=([&]()->V{V _lhs54528=([&]()->V{V _lhs54530=_v_50956_height;V _rhs54531=([&]()->V{V _lhs54532=j::get(_v_50954_vb,V(3.0));V _rhs54533=_v_50960_k;return V(j::number(_lhs54532)*j::number(_rhs54533));})();return V(j::number(_lhs54530)-j::number(_rhs54531));})();V _rhs54529=V(2.0);return V(j::number(_lhs54528)/j::number(_rhs54529));})();V _rhs54527=([&]()->V{V _lhs54534=j::get(_v_50954_vb,V(1.0));V _rhs54535=_v_50960_k;return V(j::number(_lhs54534)*j::number(_rhs54535));})();return V(j::number(_lhs54526)-j::number(_rhs54527));})());return j::array(std::move(_array54515));})()});})()));
(void)((_v_50958_iw=j::get(_v_50954_vb,V(2.0))));
(void)((_v_50959_ih=j::get(_v_50954_vb,V(3.0))));

}

_v_50961_path=(j::truth(_v_50953_self)?([&]()->V{j::Args _array54539;for(const auto &_value:j::elements(_v_50947_chain))_array54539.push_back(_value);_array54539.push_back(_v_50953_self);return j::array(std::move(_array54539));})():_v_50947_chain);
{for(const auto &_item54540:j::elements(j::get(_v_50944_n,this->_literals[3]))){V _v_50962_k;
_v_50962_k=_item54540;
(void)(([&]()->V{V _callee54543=_v_50899_walk.get();return j::call(_callee54543,j::Args{_v_50962_k,_v_50957_inner,_v_50946_st,_v_50961_path,([&]()->V{V _lhs54541=_v_50948_depth;V _rhs54542=V(1.0);return j::binary("+",_lhs54541,_rhs54542);})(),_v_50958_iw,_v_50959_ih});})());
}}

}

return V{};
},10);
_v_50963_start=([&]()->V{V _obj54544=j::object();j::put(_obj54544,this->_literals[130],this->_literals[139]);j::put(_obj54544,this->_literals[131],this->_literals[48]);j::put(_obj54544,this->_literals[151],this->_literals[143]);j::put(_obj54544,this->_literals[153],V(1.0));j::put(_obj54544,this->_literals[155],V(1.0));j::put(_obj54544,this->_literals[157],this->_literals[160]);j::put(_obj54544,this->_literals[161],this->_literals[165]);j::put(_obj54544,this->_literals[166],V(true));j::put(_obj54544,this->_literals[141],this->_literals[53]);j::put(_obj54544,this->_literals[168],V(1.0));return _obj54544;})();
(void)(([&]()->V{V _callee54546=_v_50899_walk.get();return j::call(_callee54546,j::Args{_v_50829_svgRoot,this->_v_50576_IDENTITY.get(),_v_50963_start,([&]()->V{j::Args _array54545;return j::array(std::move(_array54545));})(),V(0.0),_v_50846_vw.get(),_v_50847_vh.get()});})());
if(j::truth(j::unary("!",_v_50845_viewBox))){
V _v_50964_b;
_v_50964_b=(j::truth(j::get(_v_50848_shapes.get(),this->_literals[5]))?([&]()->V{V _receiver54573=_v_50848_shapes.get();V _method54574=this->_literals[144];V _method=j::get(_receiver54573,_method54574);j::Args _params54575=j::Args{j::function([=](const j::Args &_args_fn50965,const V &_receiver_fn50965,const V &_self_fn50965) mutable ->V{
V _v_50966_a;
V _v_50967_s;
_v_50966_a=_args_fn50965[0];
_v_50967_s=_args_fn50965[1];
return ([&]()->V{j::Args _array54547;_array54547.push_back(([&]()->V{V _receiver54550=j::builtin("Math");V _method54551=this->_literals[116];V _method=j::get(_receiver54550,_method54551);j::Args _params54552=j::Args{j::get(_v_50966_a,V(0.0)),j::get(j::get(_v_50967_s,this->_literals[183]),V(0.0))};return j::call(_method,_params54552,_receiver54550);})());_array54547.push_back(([&]()->V{V _receiver54555=j::builtin("Math");V _method54556=this->_literals[116];V _method=j::get(_receiver54555,_method54556);j::Args _params54557=j::Args{j::get(_v_50966_a,V(1.0)),j::get(j::get(_v_50967_s,this->_literals[183]),V(1.0))};return j::call(_method,_params54557,_receiver54555);})());_array54547.push_back(([&]()->V{V _receiver54562=j::builtin("Math");V _method54563=this->_literals[66];V _method=j::get(_receiver54562,_method54563);j::Args _params54564=j::Args{j::get(_v_50966_a,V(2.0)),([&]()->V{V _lhs54558=j::get(j::get(_v_50967_s,this->_literals[183]),V(0.0));V _rhs54559=j::get(j::get(_v_50967_s,this->_literals[183]),V(2.0));return j::binary("+",_lhs54558,_rhs54559);})()};return j::call(_method,_params54564,_receiver54562);})());_array54547.push_back(([&]()->V{V _receiver54569=j::builtin("Math");V _method54570=this->_literals[66];V _method=j::get(_receiver54569,_method54570);j::Args _params54571=j::Args{j::get(_v_50966_a,V(3.0)),([&]()->V{V _lhs54565=j::get(j::get(_v_50967_s,this->_literals[183]),V(1.0));V _rhs54566=j::get(j::get(_v_50967_s,this->_literals[183]),V(3.0));return j::binary("+",_lhs54565,_rhs54566);})()};return j::call(_method,_params54571,_receiver54569);})());return j::array(std::move(_array54547));})();
return V{};
},2),([&]()->V{j::Args _array54572;_array54572.push_back(j::builtin("Infinity"));_array54572.push_back(j::builtin("Infinity"));_array54572.push_back(j::unary("-",j::builtin("Infinity")));_array54572.push_back(j::unary("-",j::builtin("Infinity")));return j::array(std::move(_array54572));})()};return j::call(_method,_params54575,_receiver54573);})():([&]()->V{j::Args _array54576;_array54576.push_back(V(0.0));_array54576.push_back(V(0.0));_array54576.push_back(V(1.0));_array54576.push_back(V(1.0));return j::array(std::move(_array54576));})());
(void)((_v_50845_viewBox=([&]()->V{j::Args _array54578;_array54578.push_back(j::get(_v_50964_b,V(0.0)));_array54578.push_back(j::get(_v_50964_b,V(1.0)));_array54578.push_back(([&]()->V{V _receiver54583=j::builtin("Math");V _method54584=this->_literals[66];V _method=j::get(_receiver54583,_method54584);j::Args _params54585=j::Args{V(0.000001),([&]()->V{V _lhs54579=j::get(_v_50964_b,V(2.0));V _rhs54580=j::get(_v_50964_b,V(0.0));return V(j::number(_lhs54579)-j::number(_rhs54580));})()};return j::call(_method,_params54585,_receiver54583);})());_array54578.push_back(([&]()->V{V _receiver54590=j::builtin("Math");V _method54591=this->_literals[66];V _method=j::get(_receiver54590,_method54591);j::Args _params54592=j::Args{V(0.000001),([&]()->V{V _lhs54586=j::get(_v_50964_b,V(3.0));V _rhs54587=j::get(_v_50964_b,V(1.0));return V(j::number(_lhs54586)-j::number(_rhs54587));})()};return j::call(_method,_params54592,_receiver54590);})());return j::array(std::move(_array54578));})()));

}

_v_50968_parts=([&]()->V{V _callee54593=j::builtin("Set");return j::construct(_callee54593,j::Args{});})();
{for(const auto &_item54594:j::elements(_v_50848_shapes.get())){V _v_50969_s;
_v_50969_s=_item54594;
{
{for(const auto &_item54595:j::elements(j::get(_v_50969_s,this->_literals[181]))){V _v_50970_c;
_v_50970_c=_item54595;
{
if(j::truth(j::get(_v_50970_c,this->_literals[44]))){(void)(([&]()->V{V _receiver54597=_v_50968_parts;V _method54598=this->_literals[147];V _method=j::get(_receiver54597,_method54598);j::Args _params54599=j::Args{([&]()->V{std::u16string _text54596;_text54596+=u"#";_text54596+=j::string(j::get(_v_50970_c,this->_literals[44]));_text54596+=u"";return V(std::move(_text54596));})()};return j::call(_method,_params54599,_receiver54597);})());
}
{for(const auto &_item54600:j::elements(j::get(_v_50970_c,this->_literals[45]))){V _v_50971_k;
_v_50971_k=_item54600;
(void)(([&]()->V{V _receiver54602=_v_50968_parts;V _method54603=this->_literals[147];V _method=j::get(_receiver54602,_method54603);j::Args _params54604=j::Args{([&]()->V{std::u16string _text54601;_text54601+=u".";_text54601+=j::string(_v_50971_k);_text54601+=u"";return V(std::move(_text54601));})()};return j::call(_method,_params54604,_receiver54602);})());
}}

}
}}
{for(const auto &_item54605:j::elements(([&]()->V{j::Args _array54606;_array54606.push_back(j::get(_v_50969_s,this->_literals[130]));_array54606.push_back(j::get(_v_50969_s,this->_literals[131]));return j::array(std::move(_array54606));})())){V _v_50972_c;
_v_50972_c=_item54605;
if(j::truth(([&]()->V{V _logical54607=_v_50972_c;return j::truth(_logical54607)?([&]()->V{V _lhs54608=_v_50972_c;V _rhs54609=this->_literals[53];return V(!j::equal(_lhs54608,_rhs54609,true));})():_logical54607;})())){(void)(([&]()->V{V _receiver54610=_v_50968_parts;V _method54611=this->_literals[147];V _method=j::get(_receiver54610,_method54611);j::Args _params54612=j::Args{_v_50972_c};return j::call(_method,_params54612,_receiver54610);})());
}
}}

}
}}
return ([&]()->V{V _obj54613=j::object();j::put(_obj54613,this->_literals[129],_v_50845_viewBox);j::put(_obj54613,this->_literals[179],_v_50848_shapes.get());j::put(_obj54613,this->_literals[125],_v_50838_title);j::put(_obj54613,this->_literals[184],([&]()->V{j::Args _array54614;for(const auto &_value:j::elements(_v_50968_parts))_array54614.push_back(_value);return j::array(std::move(_array54614));})());j::put(_obj54613,this->_literals[185],([&]()->V{j::Args _array54615;for(const auto &_value:j::elements(_v_50849_skipped.get()))_array54615.push_back(_value);return j::array(std::move(_array54615));})());return _obj54613;})();

}

return V{};
},1);
this->_v_50975_traceWindow.get()=j::function([=](const j::Args &_args_fn50976,const V &_receiver_fn50976,const V &_self_fn50976) mutable ->V{
V _v_50977_period;
V _v_50978_offset;
V _v_50979_t;
_v_50977_period=_args_fn50976[0];
_v_50978_offset=_args_fn50976[1];
_v_50979_t=_args_fn50976[2];
{
V _v_50980_u;
V _v_50981_ease;
_v_50980_u=([&]()->V{V _callee54620=this->_v_50451_fract.get();return j::call(_callee54620,j::Args{([&]()->V{V _lhs54616=([&]()->V{V _lhs54618=_v_50979_t;V _rhs54619=_v_50978_offset;return j::binary("+",_lhs54618,_rhs54619);})();V _rhs54617=_v_50977_period;return V(j::number(_lhs54616)/j::number(_rhs54617));})()});})();
_v_50981_ease=j::function([=](const j::Args &_args_fn50982,const V &_receiver_fn50982,const V &_self_fn50982) mutable ->V{
V _v_50983_k;
_v_50983_k=_args_fn50982[0];
return ([&]()->V{V _lhs54621=([&]()->V{V _lhs54623=_v_50983_k;V _rhs54624=_v_50983_k;return V(j::number(_lhs54623)*j::number(_rhs54624));})();V _rhs54622=([&]()->V{V _lhs54625=V(3.0);V _rhs54626=([&]()->V{V _lhs54627=V(2.0);V _rhs54628=_v_50983_k;return V(j::number(_lhs54627)*j::number(_rhs54628));})();return V(j::number(_lhs54625)-j::number(_rhs54626));})();return V(j::number(_lhs54621)*j::number(_rhs54622));})();
return V{};
},1);
return (j::truth(([&]()->V{V _lhs54629=_v_50980_u;V _rhs54630=V(0.5);return j::binary("<",_lhs54629,_rhs54630);})())?([&]()->V{j::Args _array54631;_array54631.push_back(V(0.0));_array54631.push_back(([&]()->V{V _callee54634=_v_50981_ease;return j::call(_callee54634,j::Args{([&]()->V{V _lhs54632=_v_50980_u;V _rhs54633=V(0.5);return V(j::number(_lhs54632)/j::number(_rhs54633));})()});})());return j::array(std::move(_array54631));})():(j::truth(([&]()->V{V _lhs54635=_v_50980_u;V _rhs54636=V(0.8);return j::binary("<",_lhs54635,_rhs54636);})())?([&]()->V{j::Args _array54637;_array54637.push_back(V(0.0));_array54637.push_back(V(1.0));return j::array(std::move(_array54637));})():([&]()->V{j::Args _array54638;_array54638.push_back(([&]()->V{V _callee54643=_v_50981_ease;return j::call(_callee54643,j::Args{([&]()->V{V _lhs54639=([&]()->V{V _lhs54641=_v_50980_u;V _rhs54642=V(0.8);return V(j::number(_lhs54641)-j::number(_rhs54642));})();V _rhs54640=V(0.2);return V(j::number(_lhs54639)/j::number(_rhs54640));})()});})());_array54638.push_back(V(1.0));return j::array(std::move(_array54638));})()));

}

return V{};
},3);
this->_v_51037_toHsl.get()=j::function([=](const j::Args &_args_fn51038,const V &_receiver_fn51038,const V &_self_fn51038) mutable ->V{
V _v_51039_c;
_v_51039_c=_args_fn51038[0];
{
V _v_51040_r;
V _v_51041_g;
V _v_51042_b;
V _v_51045_max;
V _v_51046_min;
V _v_51047_l;
V _v_51048_d;
V _v_51049_s;
V _v_51050_h;
V _pattern54649=([&]()->V{V _receiver54646=_v_51039_c;V _method54647=this->_literals[41];V _method=j::get(_receiver54646,_method54647);j::Args _params54648=j::Args{j::function([=](const j::Args &_args_fn51043,const V &_receiver_fn51043,const V &_self_fn51043) mutable ->V{
V _v_51044_v;
_v_51044_v=_args_fn51043[0];
return ([&]()->V{V _lhs54644=_v_51044_v;V _rhs54645=V(255.0);return V(j::number(_lhs54644)/j::number(_rhs54645));})();
return V{};
},1)};return j::call(_method,_params54648,_receiver54646);})();
_v_51040_r=j::get(_pattern54649,V(0));
_v_51041_g=j::get(_pattern54649,V(1));
_v_51042_b=j::get(_pattern54649,V(2));
_v_51045_max=([&]()->V{V _receiver54653=j::builtin("Math");V _method54654=this->_literals[66];V _method=j::get(_receiver54653,_method54654);j::Args _params54655=j::Args{_v_51040_r,_v_51041_g,_v_51042_b};return j::call(_method,_params54655,_receiver54653);})();
_v_51046_min=([&]()->V{V _receiver54659=j::builtin("Math");V _method54660=this->_literals[116];V _method=j::get(_receiver54659,_method54660);j::Args _params54661=j::Args{_v_51040_r,_v_51041_g,_v_51042_b};return j::call(_method,_params54661,_receiver54659);})();
_v_51047_l=([&]()->V{V _lhs54662=([&]()->V{V _lhs54664=_v_51045_max;V _rhs54665=_v_51046_min;return j::binary("+",_lhs54664,_rhs54665);})();V _rhs54663=V(2.0);return V(j::number(_lhs54662)/j::number(_rhs54663));})();
if(j::truth(([&]()->V{V _lhs54666=_v_51045_max;V _rhs54667=_v_51046_min;return V(j::equal(_lhs54666,_rhs54667,true));})())){return ([&]()->V{j::Args _array54668;_array54668.push_back(V(0.0));_array54668.push_back(V(0.0));_array54668.push_back(_v_51047_l);return j::array(std::move(_array54668));})();
}
_v_51048_d=([&]()->V{V _lhs54669=_v_51045_max;V _rhs54670=_v_51046_min;return V(j::number(_lhs54669)-j::number(_rhs54670));})();
_v_51049_s=(j::truth(([&]()->V{V _lhs54671=_v_51047_l;V _rhs54672=V(0.5);return j::binary(">",_lhs54671,_rhs54672);})())?([&]()->V{V _lhs54673=_v_51048_d;V _rhs54674=([&]()->V{V _lhs54675=([&]()->V{V _lhs54677=V(2.0);V _rhs54678=_v_51045_max;return V(j::number(_lhs54677)-j::number(_rhs54678));})();V _rhs54676=_v_51046_min;return V(j::number(_lhs54675)-j::number(_rhs54676));})();return V(j::number(_lhs54673)/j::number(_rhs54674));})():([&]()->V{V _lhs54679=_v_51048_d;V _rhs54680=([&]()->V{V _lhs54681=_v_51045_max;V _rhs54682=_v_51046_min;return j::binary("+",_lhs54681,_rhs54682);})();return V(j::number(_lhs54679)/j::number(_rhs54680));})());
_v_51050_h=(j::truth(([&]()->V{V _lhs54683=_v_51045_max;V _rhs54684=_v_51040_r;return V(j::equal(_lhs54683,_rhs54684,true));})())?([&]()->V{V _lhs54685=([&]()->V{V _lhs54687=([&]()->V{V _lhs54689=_v_51041_g;V _rhs54690=_v_51042_b;return V(j::number(_lhs54689)-j::number(_rhs54690));})();V _rhs54688=_v_51048_d;return V(j::number(_lhs54687)/j::number(_rhs54688));})();V _rhs54686=(j::truth(([&]()->V{V _lhs54691=_v_51041_g;V _rhs54692=_v_51042_b;return j::binary("<",_lhs54691,_rhs54692);})())?V(6.0):V(0.0));return j::binary("+",_lhs54685,_rhs54686);})():(j::truth(([&]()->V{V _lhs54693=_v_51045_max;V _rhs54694=_v_51041_g;return V(j::equal(_lhs54693,_rhs54694,true));})())?([&]()->V{V _lhs54695=([&]()->V{V _lhs54697=([&]()->V{V _lhs54699=_v_51042_b;V _rhs54700=_v_51040_r;return V(j::number(_lhs54699)-j::number(_rhs54700));})();V _rhs54698=_v_51048_d;return V(j::number(_lhs54697)/j::number(_rhs54698));})();V _rhs54696=V(2.0);return j::binary("+",_lhs54695,_rhs54696);})():([&]()->V{V _lhs54701=([&]()->V{V _lhs54703=([&]()->V{V _lhs54705=_v_51040_r;V _rhs54706=_v_51041_g;return V(j::number(_lhs54705)-j::number(_rhs54706));})();V _rhs54704=_v_51048_d;return V(j::number(_lhs54703)/j::number(_rhs54704));})();V _rhs54702=V(4.0);return j::binary("+",_lhs54701,_rhs54702);})()));
return ([&]()->V{j::Args _array54707;_array54707.push_back(([&]()->V{V _lhs54708=_v_51050_h;V _rhs54709=V(6.0);return V(j::number(_lhs54708)/j::number(_rhs54709));})());_array54707.push_back(_v_51049_s);_array54707.push_back(_v_51047_l);return j::array(std::move(_array54707));})();

}

return V{};
},1);
this->_v_51054_lift.get()=j::function([=](const j::Args &_args_fn51055,const V &_receiver_fn51055,const V &_self_fn51055) mutable ->V{
V _v_51056_c;
_v_51056_c=_args_fn51055[0];
{
V _v_51057_v;
V _v_51058_h;
V _v_51059_s;
V _v_51060_l;
V _v_51061_g;
V _v_51062_want;
V _v_51063_k;
V _v_51064_out;
_v_51057_v=([&]()->V{V _callee54710=this->_v_50457_rgb.get();return j::call(_callee54710,j::Args{_v_51056_c});})();
if(j::truth(([&]()->V{V _logical54711=([&]()->V{V _lhs54712=([&]()->V{V _receiver54715=j::builtin("Math");V _method54716=this->_literals[66];V _method=j::get(_receiver54715,_method54716);j::Args _params54717=([&](){j::Args _args54714;for(const auto &_v:j::elements(_v_51057_v))_args54714.push_back(_v);return _args54714;})();return j::call(_method,_params54717,_receiver54715);})();V _rhs54713=V(64.0);return j::binary("<",_lhs54712,_rhs54713);})();return j::truth(_logical54711)?([&]()->V{V _lhs54718=([&]()->V{V _lhs54720=([&]()->V{V _receiver54723=j::builtin("Math");V _method54724=this->_literals[66];V _method=j::get(_receiver54723,_method54724);j::Args _params54725=([&](){j::Args _args54722;for(const auto &_v:j::elements(_v_51057_v))_args54722.push_back(_v);return _args54722;})();return j::call(_method,_params54725,_receiver54723);})();V _rhs54721=([&]()->V{V _receiver54727=j::builtin("Math");V _method54728=this->_literals[116];V _method=j::get(_receiver54727,_method54728);j::Args _params54729=([&](){j::Args _args54726;for(const auto &_v:j::elements(_v_51057_v))_args54726.push_back(_v);return _args54726;})();return j::call(_method,_params54729,_receiver54727);})();return V(j::number(_lhs54720)-j::number(_rhs54721));})();V _rhs54719=V(24.0);return j::binary("<",_lhs54718,_rhs54719);})():_logical54711;})())){return ([&]()->V{V _callee54730=this->_v_50452_hex.get();return j::call(_callee54730,j::Args{this->_v_51026_LIGHT.get()});})();
}
V _pattern54732=([&]()->V{V _callee54731=this->_v_51037_toHsl.get();return j::call(_callee54731,j::Args{_v_51057_v});})();
_v_51058_h=j::get(_pattern54732,V(0));
_v_51059_s=j::get(_pattern54732,V(1));
_v_51060_l=j::get(_pattern54732,V(2));
_v_51061_g=([&]()->V{V _callee54733=this->_v_51051_greyish.get();return j::call(_callee54733,j::Args{_v_51057_v});})();
_v_51062_want=(j::truth(_v_51061_g)?V(2.4):V(2.8));
_v_51063_k=_v_51060_l;
_v_51064_out=_v_51057_v;
while(j::truth(([&]()->V{V _logical54734=([&]()->V{V _lhs54735=([&]()->V{V _callee54737=this->_v_51033_contrast.get();return j::call(_callee54737,j::Args{_v_51064_out,this->_v_51025_PAGE.get()});})();V _rhs54736=_v_51062_want;return j::binary("<",_lhs54735,_rhs54736);})();return j::truth(_logical54734)?([&]()->V{V _lhs54738=_v_51063_k;V _rhs54739=V(0.8);return j::binary("<",_lhs54738,_rhs54739);})():_logical54734;})())){(void)((_v_51064_out=([&]()->V{V _receiver54741=([&]()->V{V _callee54745=this->_v_50542_hslToRgb.get();return j::call(_callee54745,j::Args{_v_51058_h,(j::truth(_v_51061_g)?V(0.0):_v_51059_s),(_v_51063_k=j::binary("+",_v_51063_k,V(0.01)))});})();V _method54742=this->_literals[41];V _method=j::get(_receiver54741,_method54742);j::Args _params54743=j::Args{j::get(j::builtin("Math"),this->_literals[163])};return j::call(_method,_params54743,_receiver54741);})()));
}
return ([&]()->V{V _callee54746=this->_v_50452_hex.get();return j::call(_callee54746,j::Args{_v_51064_out});})();

}

return V{};
},1);
this->_v_51070_sink.get()=j::function([=](const j::Args &_args_fn51071,const V &_receiver_fn51071,const V &_self_fn51071) mutable ->V{
V _v_51072_c;
V _v_51073_shown;
_v_51072_c=_args_fn51071[0];
V _default54747=_args_fn51071[1];if(_default54747.kind==V::Undefined||_default54747.kind==V::Hole)_default54747=V(false);
_v_51073_shown=_default54747;
{
V _v_51074_v;
V _v_51075_h;
V _v_51076_s;
V _v_51077_l;
V _v_51078_k;
V _v_51079_out;
_v_51074_v=([&]()->V{V _callee54748=this->_v_50457_rgb.get();return j::call(_callee54748,j::Args{_v_51072_c});})();
if(j::truth(([&]()->V{V _logical54749=([&]()->V{V _logical54750=([&]()->V{V _callee54751=this->_v_51065_white.get();return j::call(_callee54751,j::Args{_v_51072_c});})();return j::truth(_logical54750)?j::unary("!",_v_51073_shown):_logical54750;})();return !j::truth(_logical54749)?([&]()->V{V _lhs54752=([&]()->V{V _callee54754=this->_v_51033_contrast.get();return j::call(_callee54754,j::Args{_v_51074_v,this->_v_51069_PAPER.get()});})();V _rhs54753=V(2.0);return j::binary(">=",_lhs54752,_rhs54753);})():_logical54749;})())){return _v_51072_c;
}
V _pattern54756=([&]()->V{V _callee54755=this->_v_51037_toHsl.get();return j::call(_callee54755,j::Args{_v_51074_v});})();
_v_51075_h=j::get(_pattern54756,V(0));
_v_51076_s=j::get(_pattern54756,V(1));
_v_51077_l=j::get(_pattern54756,V(2));
_v_51078_k=_v_51077_l;
_v_51079_out=_v_51074_v;
while(j::truth(([&]()->V{V _logical54757=([&]()->V{V _lhs54758=([&]()->V{V _callee54760=this->_v_51033_contrast.get();return j::call(_callee54760,j::Args{_v_51079_out,this->_v_51069_PAPER.get()});})();V _rhs54759=V(2.0);return j::binary("<",_lhs54758,_rhs54759);})();return j::truth(_logical54757)?([&]()->V{V _lhs54761=_v_51078_k;V _rhs54762=V(0.15);return j::binary(">",_lhs54761,_rhs54762);})():_logical54757;})())){(void)((_v_51079_out=([&]()->V{V _receiver54764=([&]()->V{V _callee54768=this->_v_50542_hslToRgb.get();return j::call(_callee54768,j::Args{_v_51075_h,_v_51076_s,(_v_51078_k=j::binary("-",_v_51078_k,V(0.01)))});})();V _method54765=this->_literals[41];V _method=j::get(_receiver54764,_method54765);j::Args _params54766=j::Args{j::get(j::builtin("Math"),this->_literals[163])};return j::call(_method,_params54766,_receiver54764);})()));
}
return ([&]()->V{V _callee54769=this->_v_50452_hex.get();return j::call(_callee54769,j::Args{_v_51079_out});})();

}

return V{};
},1);
this->_v_51146_sortFirst.get()=j::function([=](const j::Args &_args_fn51147,const V &_receiver_fn51147,const V &_self_fn51147) mutable ->V{
V _v_51148_a;
V _v_51149_n;
_v_51148_a=_args_fn51147[0];
_v_51149_n=_args_fn51147[1];
{
if(j::truth(([&]()->V{V _lhs54770=_v_51149_n;V _rhs54771=V(24.0);return j::binary(">",_lhs54770,_rhs54771);})())){
(void)(([&]()->V{V _receiver54772=([&]()->V{V _receiver54775=_v_51148_a;V _method54776=this->_literals[186];V _method=j::get(_receiver54775,_method54776);j::Args _params54777=j::Args{V(0.0),_v_51149_n};return j::call(_method,_params54777,_receiver54775);})();V _method54773=this->_literals[128];V _method=j::get(_receiver54772,_method54773);j::Args _params54774=j::Args{};return j::call(_method,_params54774,_receiver54772);})());
return V{};

}

{V _v_51150_i;
_v_51150_i=V(1.0);
for(;j::truth(([&]()->V{V _lhs54778=_v_51150_i;V _rhs54779=_v_51149_n;return j::binary("<",_lhs54778,_rhs54779);})());(void)(j::increment(_v_51150_i,1,false))){
V _v_51151_v;
V _v_51152_j;
_v_51151_v=j::get(_v_51148_a,_v_51150_i);
_v_51152_j=_v_51150_i;
{for(;j::truth(([&]()->V{V _logical54780=([&]()->V{V _lhs54781=_v_51152_j;V _rhs54782=V(0.0);return j::binary(">",_lhs54781,_rhs54782);})();return j::truth(_logical54780)?([&]()->V{V _lhs54783=j::get(_v_51148_a,([&]()->V{V _lhs54785=_v_51152_j;V _rhs54786=V(1.0);return V(j::number(_lhs54785)-j::number(_rhs54786));})());V _rhs54784=_v_51151_v;return j::binary(">",_lhs54783,_rhs54784);})():_logical54780;})());(void)(j::increment(_v_51152_j,-1,false))){(void)(([&]()->V{V _base54788=_v_51148_a;V _key54789=_v_51152_j;V _assign54787=j::get(_v_51148_a,([&]()->V{V _lhs54790=_v_51152_j;V _rhs54791=V(1.0);return V(j::number(_lhs54790)-j::number(_rhs54791));})());return j::put(_base54788,_key54789,_assign54787);})());
}}
(void)(([&]()->V{V _base54793=_v_51148_a;V _key54794=_v_51152_j;V _assign54792=_v_51151_v;return j::put(_base54793,_key54794,_assign54792);})());

}
}

}

return V{};
},2);
this->_v_51153_disc.get()=j::function([=](const j::Args &_args_fn51154,const V &_receiver_fn51154,const V &_self_fn51154) mutable ->V{
V _v_51155_x;
V _v_51156_y;
V _v_51157_r;
_v_51155_x=_args_fn51154[0];
_v_51156_y=_args_fn51154[1];
_v_51157_r=_args_fn51154[2];
{
V _v_51158_n;
V _v_51159_p;
_v_51158_n=([&]()->V{V _receiver54807=j::builtin("Math");V _method54808=this->_literals[66];V _method=j::get(_receiver54807,_method54808);j::Args _params54809=j::Args{V(8.0),([&]()->V{V _receiver54802=j::builtin("Math");V _method54803=this->_literals[116];V _method=j::get(_receiver54802,_method54803);j::Args _params54804=j::Args{V(32.0),([&]()->V{V _number54797=([&]()->V{V _lhs54798=_v_51157_r;V _rhs54799=V(1.2);return V(j::number(_lhs54798)*j::number(_rhs54799));})();return V(std::ceil(j::number(_number54797)));})()};return j::call(_method,_params54804,_receiver54802);})()};return j::call(_method,_params54809,_receiver54807);})();
_v_51159_p=([&]()->V{V _callee54812=j::builtin("Float64Array");return j::construct(_callee54812,j::Args{([&]()->V{V _lhs54810=V(2.0);V _rhs54811=_v_51158_n;return V(j::number(_lhs54810)*j::number(_rhs54811));})()});})();
{V _v_51160_i;
_v_51160_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs54813=_v_51160_i;V _rhs54814=_v_51158_n;return j::binary("<",_lhs54813,_rhs54814);})());(void)(j::increment(_v_51160_i,1,false))){
(void)(([&]()->V{V _base54816=_v_51159_p;V _key54817=([&]()->V{V _lhs54818=V(2.0);V _rhs54819=_v_51160_i;return V(j::number(_lhs54818)*j::number(_rhs54819));})();V _assign54815=([&]()->V{V _lhs54820=_v_51155_x;V _rhs54821=([&]()->V{V _lhs54822=_v_51157_r;V _rhs54823=([&]()->V{V _number54828=([&]()->V{V _lhs54829=([&]()->V{V _lhs54831=j::unary("-",_v_51160_i);V _rhs54832=this->_v_50444_TAU.get();return V(j::number(_lhs54831)*j::number(_rhs54832));})();V _rhs54830=_v_51158_n;return V(j::number(_lhs54829)/j::number(_rhs54830));})();return V(std::cos(j::number(_number54828)));})();return V(j::number(_lhs54822)*j::number(_rhs54823));})();return j::binary("+",_lhs54820,_rhs54821);})();return j::put(_base54816,_key54817,_assign54815);})());
(void)(([&]()->V{V _base54834=_v_51159_p;V _key54835=([&]()->V{V _lhs54836=([&]()->V{V _lhs54838=V(2.0);V _rhs54839=_v_51160_i;return V(j::number(_lhs54838)*j::number(_rhs54839));})();V _rhs54837=V(1.0);return j::binary("+",_lhs54836,_rhs54837);})();V _assign54833=([&]()->V{V _lhs54840=_v_51156_y;V _rhs54841=([&]()->V{V _lhs54842=_v_51157_r;V _rhs54843=([&]()->V{V _number54848=([&]()->V{V _lhs54849=([&]()->V{V _lhs54851=j::unary("-",_v_51160_i);V _rhs54852=this->_v_50444_TAU.get();return V(j::number(_lhs54851)*j::number(_rhs54852));})();V _rhs54850=_v_51158_n;return V(j::number(_lhs54849)/j::number(_rhs54850));})();return V(std::sin(j::number(_number54848)));})();return V(j::number(_lhs54842)*j::number(_rhs54843));})();return j::binary("+",_lhs54840,_rhs54841);})();return j::put(_base54834,_key54835,_assign54833);})());

}
}
return _v_51159_p;

}

return V{};
},3);
this->_v_51161_oriented.get()=j::function([=](const j::Args &_args_fn51162,const V &_receiver_fn51162,const V &_self_fn51162) mutable ->V{
V _v_51163_p;
_v_51163_p=_args_fn51162[0];
{
V _v_51164_a;
V _v_51165_n;
V _v_51168_q;
_v_51164_a=V(0.0);
_v_51165_n=([&]()->V{V _lhs54853=j::get(_v_51163_p,this->_literals[5]);V _rhs54854=V(1.0);return V(int(j::i32(_lhs54853)>>(j::u32(_rhs54854)&31)));})();
{V _v_51166_i;
_v_51166_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs54855=_v_51166_i;V _rhs54856=_v_51165_n;return j::binary("<",_lhs54855,_rhs54856);})());(void)(j::increment(_v_51166_i,1,false))){
V _v_51167_j;
_v_51167_j=([&]()->V{V _lhs54857=([&]()->V{V _lhs54859=_v_51166_i;V _rhs54860=V(1.0);return j::binary("+",_lhs54859,_rhs54860);})();V _rhs54858=_v_51165_n;return V(std::fmod(j::number(_lhs54857),j::number(_rhs54858)));})();
(void)((_v_51164_a=j::binary("+",_v_51164_a,([&]()->V{V _lhs54862=([&]()->V{V _lhs54864=j::get(_v_51163_p,([&]()->V{V _lhs54866=V(2.0);V _rhs54867=_v_51166_i;return V(j::number(_lhs54866)*j::number(_rhs54867));})());V _rhs54865=j::get(_v_51163_p,([&]()->V{V _lhs54868=([&]()->V{V _lhs54870=V(2.0);V _rhs54871=_v_51167_j;return V(j::number(_lhs54870)*j::number(_rhs54871));})();V _rhs54869=V(1.0);return j::binary("+",_lhs54868,_rhs54869);})());return V(j::number(_lhs54864)*j::number(_rhs54865));})();V _rhs54863=([&]()->V{V _lhs54872=j::get(_v_51163_p,([&]()->V{V _lhs54874=V(2.0);V _rhs54875=_v_51167_j;return V(j::number(_lhs54874)*j::number(_rhs54875));})());V _rhs54873=j::get(_v_51163_p,([&]()->V{V _lhs54876=([&]()->V{V _lhs54878=V(2.0);V _rhs54879=_v_51166_i;return V(j::number(_lhs54878)*j::number(_rhs54879));})();V _rhs54877=V(1.0);return j::binary("+",_lhs54876,_rhs54877);})());return V(j::number(_lhs54872)*j::number(_rhs54873));})();return V(j::number(_lhs54862)-j::number(_rhs54863));})())));

}
}
if(j::truth(([&]()->V{V _lhs54880=_v_51164_a;V _rhs54881=V(0.0);return j::binary("<=",_lhs54880,_rhs54881);})())){return _v_51163_p;
}
_v_51168_q=([&]()->V{V _callee54882=j::builtin("Float64Array");return j::construct(_callee54882,j::Args{j::get(_v_51163_p,this->_literals[5])});})();
{V _v_51169_i;
_v_51169_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs54883=_v_51169_i;V _rhs54884=_v_51165_n;return j::binary("<",_lhs54883,_rhs54884);})());(void)(j::increment(_v_51169_i,1,false))){
(void)(([&]()->V{V _base54886=_v_51168_q;V _key54887=([&]()->V{V _lhs54888=V(2.0);V _rhs54889=_v_51169_i;return V(j::number(_lhs54888)*j::number(_rhs54889));})();V _assign54885=j::get(_v_51163_p,([&]()->V{V _lhs54890=V(2.0);V _rhs54891=([&]()->V{V _lhs54892=([&]()->V{V _lhs54894=_v_51165_n;V _rhs54895=V(1.0);return V(j::number(_lhs54894)-j::number(_rhs54895));})();V _rhs54893=_v_51169_i;return V(j::number(_lhs54892)-j::number(_rhs54893));})();return V(j::number(_lhs54890)*j::number(_rhs54891));})());return j::put(_base54886,_key54887,_assign54885);})());
(void)(([&]()->V{V _base54897=_v_51168_q;V _key54898=([&]()->V{V _lhs54899=([&]()->V{V _lhs54901=V(2.0);V _rhs54902=_v_51169_i;return V(j::number(_lhs54901)*j::number(_rhs54902));})();V _rhs54900=V(1.0);return j::binary("+",_lhs54899,_rhs54900);})();V _assign54896=j::get(_v_51163_p,([&]()->V{V _lhs54903=([&]()->V{V _lhs54905=V(2.0);V _rhs54906=([&]()->V{V _lhs54907=([&]()->V{V _lhs54909=_v_51165_n;V _rhs54910=V(1.0);return V(j::number(_lhs54909)-j::number(_rhs54910));})();V _rhs54908=_v_51169_i;return V(j::number(_lhs54907)-j::number(_rhs54908));})();return V(j::number(_lhs54905)*j::number(_rhs54906));})();V _rhs54904=V(1.0);return j::binary("+",_lhs54903,_rhs54904);})());return j::put(_base54897,_key54898,_assign54896);})());

}
}
return _v_51168_q;

}

return V{};
},1);
this->_v_51170_strokePieces.get()=j::function([=](const j::Args &_args_fn51171,const V &_receiver_fn51171,const V &_self_fn51171) mutable ->V{
V _v_51172_subs;
V _v_51173_hw;
j::Cell _v_51174_cap;
_v_51172_subs=_args_fn51171[0];
_v_51173_hw=_args_fn51171[1];
_v_51174_cap.get()=_args_fn51171[2];
{
j::Cell _v_51175_out;
V _v_51176_at;
V _v_51177_add;
_v_51175_out.get()=([&]()->V{V _obj54911=j::object();j::put(_obj54911,this->_literals[187],([&]()->V{j::Args _array54912;return j::array(std::move(_array54912));})());j::put(_obj54911,this->_literals[113],([&]()->V{j::Args _array54913;return j::array(std::move(_array54913));})());j::put(_obj54911,this->_literals[188],([&]()->V{j::Args _array54914;return j::array(std::move(_array54914));})());j::put(_obj54911,this->_literals[189],([&]()->V{j::Args _array54915;return j::array(std::move(_array54915));})());j::put(_obj54911,this->_literals[190],V(0.0));return _obj54911;})();
_v_51176_at=V(0.0);
_v_51177_add=j::function([=](const j::Args &_args_fn51178,const V &_receiver_fn51178,const V &_self_fn51178) mutable ->V{
V _v_51179_r;
V _v_51180_a;
V _v_51181_b;
V _v_51182_quad;
_v_51179_r=_args_fn51178[0];
_v_51180_a=_args_fn51178[1];
_v_51181_b=_args_fn51178[2];
_v_51182_quad=_args_fn51178[3];
{
(void)(([&]()->V{V _receiver54916=j::get(_v_51175_out.get(),this->_literals[187]);V _method54917=this->_literals[25];V _method=j::get(_receiver54916,_method54917);j::Args _params54918=j::Args{_v_51179_r};return j::call(_method,_params54918,_receiver54916);})());
(void)(([&]()->V{V _receiver54919=j::get(_v_51175_out.get(),this->_literals[113]);V _method54920=this->_literals[25];V _method=j::get(_receiver54919,_method54920);j::Args _params54921=j::Args{_v_51180_a};return j::call(_method,_params54921,_receiver54919);})());
(void)(([&]()->V{V _receiver54922=j::get(_v_51175_out.get(),this->_literals[188]);V _method54923=this->_literals[25];V _method=j::get(_receiver54922,_method54923);j::Args _params54924=j::Args{_v_51181_b};return j::call(_method,_params54924,_receiver54922);})());
(void)(([&]()->V{V _receiver54925=j::get(_v_51175_out.get(),this->_literals[189]);V _method54926=this->_literals[25];V _method=j::get(_receiver54925,_method54926);j::Args _params54927=j::Args{_v_51182_quad};return j::call(_method,_params54927,_receiver54925);})());

}

return V{};
},4);
{for(const auto &_item54928:j::elements(_v_51172_subs)){j::Cell _v_51183_pts;
j::Cell _v_51184_closed;
V _pattern54929=_item54928;
_v_51183_pts.get()=j::get(_pattern54929,this->_literals[114]);
_v_51184_closed.get()=j::get(_pattern54929,this->_literals[115]);
{
j::Cell _v_51185_n;
V _v_51186_segs;
V _v_51187_joint;
_v_51185_n.get()=([&]()->V{V _lhs54930=j::get(_v_51183_pts.get(),this->_literals[5]);V _rhs54931=V(1.0);return V(int(j::i32(_lhs54930)>>(j::u32(_rhs54931)&31)));})();
if(j::truth(([&]()->V{V _lhs54932=_v_51185_n.get();V _rhs54933=V(1.0);return V(j::equal(_lhs54932,_rhs54933,true));})())){
if(j::truth(([&]()->V{V _lhs54934=_v_51174_cap.get();V _rhs54935=this->_literals[163];return V(j::equal(_lhs54934,_rhs54935,true));})())){(void)(([&]()->V{V _callee54937=_v_51177_add;return j::call(_callee54937,j::Args{([&]()->V{V _callee54936=this->_v_51153_disc.get();return j::call(_callee54936,j::Args{j::get(_v_51183_pts.get(),V(0.0)),j::get(_v_51183_pts.get(),V(1.0)),_v_51173_hw});})(),_v_51176_at,_v_51176_at,V(false)});})());
}else {if(j::truth(([&]()->V{V _lhs54938=_v_51174_cap.get();V _rhs54939=this->_literals[164];return V(j::equal(_lhs54938,_rhs54939,true));})())){(void)(([&]()->V{V _callee54960=_v_51177_add;return j::call(_callee54960,j::Args{([&]()->V{V _callee54959=this->_v_51161_oriented.get();return j::call(_callee54959,j::Args{([&]()->V{V _receiver54956=j::builtin("Float64Array");V _method54957=this->_literals[191];V _method=j::get(_receiver54956,_method54957);j::Args _params54958=j::Args{([&]()->V{V _lhs54940=j::get(_v_51183_pts.get(),V(0.0));V _rhs54941=_v_51173_hw;return V(j::number(_lhs54940)-j::number(_rhs54941));})(),([&]()->V{V _lhs54942=j::get(_v_51183_pts.get(),V(1.0));V _rhs54943=_v_51173_hw;return V(j::number(_lhs54942)-j::number(_rhs54943));})(),([&]()->V{V _lhs54944=j::get(_v_51183_pts.get(),V(0.0));V _rhs54945=_v_51173_hw;return j::binary("+",_lhs54944,_rhs54945);})(),([&]()->V{V _lhs54946=j::get(_v_51183_pts.get(),V(1.0));V _rhs54947=_v_51173_hw;return V(j::number(_lhs54946)-j::number(_rhs54947));})(),([&]()->V{V _lhs54948=j::get(_v_51183_pts.get(),V(0.0));V _rhs54949=_v_51173_hw;return j::binary("+",_lhs54948,_rhs54949);})(),([&]()->V{V _lhs54950=j::get(_v_51183_pts.get(),V(1.0));V _rhs54951=_v_51173_hw;return j::binary("+",_lhs54950,_rhs54951);})(),([&]()->V{V _lhs54952=j::get(_v_51183_pts.get(),V(0.0));V _rhs54953=_v_51173_hw;return V(j::number(_lhs54952)-j::number(_rhs54953));})(),([&]()->V{V _lhs54954=j::get(_v_51183_pts.get(),V(1.0));V _rhs54955=_v_51173_hw;return j::binary("+",_lhs54954,_rhs54955);})()};return j::call(_method,_params54958,_receiver54956);})()});})(),_v_51176_at,_v_51176_at,V(false)});})());
}
}
continue;

}

_v_51186_segs=(j::truth(_v_51184_closed.get())?_v_51185_n.get():([&]()->V{V _lhs54961=_v_51185_n.get();V _rhs54962=V(1.0);return V(j::number(_lhs54961)-j::number(_rhs54962));})());
_v_51187_joint=j::function([=](const j::Args &_args_fn51188,const V &_receiver_fn51188,const V &_self_fn51188) mutable ->V{
V _v_51189_i;
_v_51189_i=_args_fn51188[0];
{
V _v_51190_p;
V _v_51191_q;
V _v_51192_ax;
V _v_51193_ay;
V _v_51194_bx;
V _v_51195_by;
if(j::truth(([&]()->V{V _logical54963=j::unary("!",_v_51184_closed.get());return j::truth(_logical54963)?([&]()->V{V _logical54964=([&]()->V{V _lhs54965=_v_51189_i;V _rhs54966=V(0.0);return V(j::equal(_lhs54965,_rhs54966,true));})();return !j::truth(_logical54964)?([&]()->V{V _lhs54967=_v_51189_i;V _rhs54968=([&]()->V{V _lhs54969=_v_51185_n.get();V _rhs54970=V(1.0);return V(j::number(_lhs54969)-j::number(_rhs54970));})();return V(j::equal(_lhs54967,_rhs54968,true));})():_logical54964;})():_logical54963;})())){return ([&]()->V{V _lhs54971=_v_51174_cap.get();V _rhs54972=this->_literals[163];return V(j::equal(_lhs54971,_rhs54972,true));})();
}
_v_51190_p=([&]()->V{V _lhs54973=([&]()->V{V _lhs54975=([&]()->V{V _lhs54977=_v_51189_i;V _rhs54978=V(1.0);return V(j::number(_lhs54977)-j::number(_rhs54978));})();V _rhs54976=_v_51185_n.get();return j::binary("+",_lhs54975,_rhs54976);})();V _rhs54974=_v_51185_n.get();return V(std::fmod(j::number(_lhs54973),j::number(_rhs54974)));})();
_v_51191_q=([&]()->V{V _lhs54979=([&]()->V{V _lhs54981=_v_51189_i;V _rhs54982=V(1.0);return j::binary("+",_lhs54981,_rhs54982);})();V _rhs54980=_v_51185_n.get();return V(std::fmod(j::number(_lhs54979),j::number(_rhs54980)));})();
_v_51192_ax=([&]()->V{V _lhs54983=j::get(_v_51183_pts.get(),([&]()->V{V _lhs54985=V(2.0);V _rhs54986=_v_51189_i;return V(j::number(_lhs54985)*j::number(_rhs54986));})());V _rhs54984=j::get(_v_51183_pts.get(),([&]()->V{V _lhs54987=V(2.0);V _rhs54988=_v_51190_p;return V(j::number(_lhs54987)*j::number(_rhs54988));})());return V(j::number(_lhs54983)-j::number(_rhs54984));})();
_v_51193_ay=([&]()->V{V _lhs54989=j::get(_v_51183_pts.get(),([&]()->V{V _lhs54991=([&]()->V{V _lhs54993=V(2.0);V _rhs54994=_v_51189_i;return V(j::number(_lhs54993)*j::number(_rhs54994));})();V _rhs54992=V(1.0);return j::binary("+",_lhs54991,_rhs54992);})());V _rhs54990=j::get(_v_51183_pts.get(),([&]()->V{V _lhs54995=([&]()->V{V _lhs54997=V(2.0);V _rhs54998=_v_51190_p;return V(j::number(_lhs54997)*j::number(_rhs54998));})();V _rhs54996=V(1.0);return j::binary("+",_lhs54995,_rhs54996);})());return V(j::number(_lhs54989)-j::number(_rhs54990));})();
_v_51194_bx=([&]()->V{V _lhs54999=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55001=V(2.0);V _rhs55002=_v_51191_q;return V(j::number(_lhs55001)*j::number(_rhs55002));})());V _rhs55000=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55003=V(2.0);V _rhs55004=_v_51189_i;return V(j::number(_lhs55003)*j::number(_rhs55004));})());return V(j::number(_lhs54999)-j::number(_rhs55000));})();
_v_51195_by=([&]()->V{V _lhs55005=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55007=([&]()->V{V _lhs55009=V(2.0);V _rhs55010=_v_51191_q;return V(j::number(_lhs55009)*j::number(_rhs55010));})();V _rhs55008=V(1.0);return j::binary("+",_lhs55007,_rhs55008);})());V _rhs55006=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55011=([&]()->V{V _lhs55013=V(2.0);V _rhs55014=_v_51189_i;return V(j::number(_lhs55013)*j::number(_rhs55014));})();V _rhs55012=V(1.0);return j::binary("+",_lhs55011,_rhs55012);})());return V(j::number(_lhs55005)-j::number(_rhs55006));})();
return ([&]()->V{V _lhs55015=([&]()->V{V _lhs55017=([&]()->V{V _lhs55019=([&]()->V{V _lhs55021=_v_51192_ax;V _rhs55022=_v_51194_bx;return V(j::number(_lhs55021)*j::number(_rhs55022));})();V _rhs55020=([&]()->V{V _lhs55023=_v_51193_ay;V _rhs55024=_v_51195_by;return V(j::number(_lhs55023)*j::number(_rhs55024));})();return j::binary("+",_lhs55019,_rhs55020);})();V _rhs55018=([&]()->V{V _logical55025=([&]()->V{V _lhs55026=([&]()->V{V _number55028=_v_51192_ax;V _number55029=_v_51193_ay;return V(std::hypot(j::number(_number55028),j::number(_number55029)));})();V _rhs55027=([&]()->V{V _number55030=_v_51194_bx;V _number55031=_v_51195_by;return V(std::hypot(j::number(_number55030),j::number(_number55031)));})();return V(j::number(_lhs55026)*j::number(_rhs55027));})();return !j::truth(_logical55025)?V(1.0):_logical55025;})();return V(j::number(_lhs55017)/j::number(_rhs55018));})();V _rhs55016=V(0.985);return j::binary("<",_lhs55015,_rhs55016);})();

}

return V{};
},1);
{V _v_51196_i;
_v_51196_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs55032=_v_51196_i;V _rhs55033=_v_51186_segs;return j::binary("<",_lhs55032,_rhs55033);})());(void)(j::increment(_v_51196_i,1,false))){
V _v_51197_j;
V _v_51198_ax;
V _v_51199_ay;
V _v_51200_bx;
V _v_51201_by;
V _v_51202_l;
V _v_51203_ux;
V _v_51204_uy;
V _v_51205_nx;
V _v_51206_ny;
if(j::truth(([&]()->V{V _callee55034=_v_51187_joint;return j::call(_callee55034,j::Args{_v_51196_i});})())){(void)(([&]()->V{V _callee55042=_v_51177_add;return j::call(_callee55042,j::Args{([&]()->V{V _callee55041=this->_v_51153_disc.get();return j::call(_callee55041,j::Args{j::get(_v_51183_pts.get(),([&]()->V{V _lhs55035=V(2.0);V _rhs55036=_v_51196_i;return V(j::number(_lhs55035)*j::number(_rhs55036));})()),j::get(_v_51183_pts.get(),([&]()->V{V _lhs55037=([&]()->V{V _lhs55039=V(2.0);V _rhs55040=_v_51196_i;return V(j::number(_lhs55039)*j::number(_rhs55040));})();V _rhs55038=V(1.0);return j::binary("+",_lhs55037,_rhs55038);})()),_v_51173_hw});})(),_v_51176_at,_v_51176_at,V(false)});})());
}
_v_51197_j=([&]()->V{V _lhs55043=([&]()->V{V _lhs55045=_v_51196_i;V _rhs55046=V(1.0);return j::binary("+",_lhs55045,_rhs55046);})();V _rhs55044=_v_51185_n.get();return V(std::fmod(j::number(_lhs55043),j::number(_rhs55044)));})();
_v_51198_ax=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55047=V(2.0);V _rhs55048=_v_51196_i;return V(j::number(_lhs55047)*j::number(_rhs55048));})());
_v_51199_ay=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55049=([&]()->V{V _lhs55051=V(2.0);V _rhs55052=_v_51196_i;return V(j::number(_lhs55051)*j::number(_rhs55052));})();V _rhs55050=V(1.0);return j::binary("+",_lhs55049,_rhs55050);})());
_v_51200_bx=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55053=V(2.0);V _rhs55054=_v_51197_j;return V(j::number(_lhs55053)*j::number(_rhs55054));})());
_v_51201_by=j::get(_v_51183_pts.get(),([&]()->V{V _lhs55055=([&]()->V{V _lhs55057=V(2.0);V _rhs55058=_v_51197_j;return V(j::number(_lhs55057)*j::number(_rhs55058));})();V _rhs55056=V(1.0);return j::binary("+",_lhs55055,_rhs55056);})());
_v_51202_l=([&]()->V{V _number55063=([&]()->V{V _lhs55065=_v_51200_bx;V _rhs55066=_v_51198_ax;return V(j::number(_lhs55065)-j::number(_rhs55066));})();V _number55064=([&]()->V{V _lhs55067=_v_51201_by;V _rhs55068=_v_51199_ay;return V(j::number(_lhs55067)-j::number(_rhs55068));})();return V(std::hypot(j::number(_number55063),j::number(_number55064)));})();
if(j::truth(([&]()->V{V _lhs55069=_v_51202_l;V _rhs55070=V(1e-9);return j::binary("<",_lhs55069,_rhs55070);})())){continue;
}
_v_51203_ux=([&]()->V{V _lhs55071=([&]()->V{V _lhs55073=_v_51200_bx;V _rhs55074=_v_51198_ax;return V(j::number(_lhs55073)-j::number(_rhs55074));})();V _rhs55072=_v_51202_l;return V(j::number(_lhs55071)/j::number(_rhs55072));})();
_v_51204_uy=([&]()->V{V _lhs55075=([&]()->V{V _lhs55077=_v_51201_by;V _rhs55078=_v_51199_ay;return V(j::number(_lhs55077)-j::number(_rhs55078));})();V _rhs55076=_v_51202_l;return V(j::number(_lhs55075)/j::number(_rhs55076));})();
if(j::truth(([&]()->V{V _logical55079=j::unary("!",_v_51184_closed.get());return j::truth(_logical55079)?([&]()->V{V _lhs55080=_v_51174_cap.get();V _rhs55081=this->_literals[164];return V(j::equal(_lhs55080,_rhs55081,true));})():_logical55079;})())){
if(j::truth(([&]()->V{V _lhs55082=_v_51196_i;V _rhs55083=V(0.0);return V(j::equal(_lhs55082,_rhs55083,true));})())){(void)(((_v_51198_ax=j::binary("-",_v_51198_ax,([&]()->V{V _lhs55085=_v_51203_ux;V _rhs55086=_v_51173_hw;return V(j::number(_lhs55085)*j::number(_rhs55086));})())),(_v_51199_ay=j::binary("-",_v_51199_ay,([&]()->V{V _lhs55088=_v_51204_uy;V _rhs55089=_v_51173_hw;return V(j::number(_lhs55088)*j::number(_rhs55089));})()))));
}
if(j::truth(([&]()->V{V _lhs55090=_v_51196_i;V _rhs55091=([&]()->V{V _lhs55092=_v_51186_segs;V _rhs55093=V(1.0);return V(j::number(_lhs55092)-j::number(_rhs55093));})();return V(j::equal(_lhs55090,_rhs55091,true));})())){(void)(((_v_51200_bx=j::binary("+",_v_51200_bx,([&]()->V{V _lhs55095=_v_51203_ux;V _rhs55096=_v_51173_hw;return V(j::number(_lhs55095)*j::number(_rhs55096));})())),(_v_51201_by=j::binary("+",_v_51201_by,([&]()->V{V _lhs55098=_v_51204_uy;V _rhs55099=_v_51173_hw;return V(j::number(_lhs55098)*j::number(_rhs55099));})()))));
}

}

_v_51205_nx=([&]()->V{V _lhs55100=j::unary("-",_v_51204_uy);V _rhs55101=_v_51173_hw;return V(j::number(_lhs55100)*j::number(_rhs55101));})();
_v_51206_ny=([&]()->V{V _lhs55102=_v_51203_ux;V _rhs55103=_v_51173_hw;return V(j::number(_lhs55102)*j::number(_rhs55103));})();
(void)(([&]()->V{V _callee55126=_v_51177_add;return j::call(_callee55126,j::Args{([&]()->V{V _callee55123=this->_v_51161_oriented.get();return j::call(_callee55123,j::Args{([&]()->V{V _receiver55120=j::builtin("Float64Array");V _method55121=this->_literals[191];V _method=j::get(_receiver55120,_method55121);j::Args _params55122=j::Args{([&]()->V{V _lhs55104=_v_51198_ax;V _rhs55105=_v_51205_nx;return j::binary("+",_lhs55104,_rhs55105);})(),([&]()->V{V _lhs55106=_v_51199_ay;V _rhs55107=_v_51206_ny;return j::binary("+",_lhs55106,_rhs55107);})(),([&]()->V{V _lhs55108=_v_51200_bx;V _rhs55109=_v_51205_nx;return j::binary("+",_lhs55108,_rhs55109);})(),([&]()->V{V _lhs55110=_v_51201_by;V _rhs55111=_v_51206_ny;return j::binary("+",_lhs55110,_rhs55111);})(),([&]()->V{V _lhs55112=_v_51200_bx;V _rhs55113=_v_51205_nx;return V(j::number(_lhs55112)-j::number(_rhs55113));})(),([&]()->V{V _lhs55114=_v_51201_by;V _rhs55115=_v_51206_ny;return V(j::number(_lhs55114)-j::number(_rhs55115));})(),([&]()->V{V _lhs55116=_v_51198_ax;V _rhs55117=_v_51205_nx;return V(j::number(_lhs55116)-j::number(_rhs55117));})(),([&]()->V{V _lhs55118=_v_51199_ay;V _rhs55119=_v_51206_ny;return V(j::number(_lhs55118)-j::number(_rhs55119));})()};return j::call(_method,_params55122,_receiver55120);})()});})(),_v_51176_at,([&]()->V{V _lhs55124=_v_51176_at;V _rhs55125=_v_51202_l;return j::binary("+",_lhs55124,_rhs55125);})(),V(true)});})());
(void)((_v_51176_at=j::binary("+",_v_51176_at,_v_51202_l)));

}
}
if(j::truth(([&]()->V{V _logical55128=j::unary("!",_v_51184_closed.get());return j::truth(_logical55128)?([&]()->V{V _callee55131=_v_51187_joint;return j::call(_callee55131,j::Args{([&]()->V{V _lhs55129=_v_51185_n.get();V _rhs55130=V(1.0);return V(j::number(_lhs55129)-j::number(_rhs55130));})()});})():_logical55128;})())){(void)(([&]()->V{V _callee55141=_v_51177_add;return j::call(_callee55141,j::Args{([&]()->V{V _callee55140=this->_v_51153_disc.get();return j::call(_callee55140,j::Args{j::get(_v_51183_pts.get(),([&]()->V{V _lhs55132=([&]()->V{V _lhs55134=V(2.0);V _rhs55135=_v_51185_n.get();return V(j::number(_lhs55134)*j::number(_rhs55135));})();V _rhs55133=V(2.0);return V(j::number(_lhs55132)-j::number(_rhs55133));})()),j::get(_v_51183_pts.get(),([&]()->V{V _lhs55136=([&]()->V{V _lhs55138=V(2.0);V _rhs55139=_v_51185_n.get();return V(j::number(_lhs55138)*j::number(_rhs55139));})();V _rhs55137=V(1.0);return V(j::number(_lhs55136)-j::number(_rhs55137));})()),_v_51173_hw});})(),_v_51176_at,_v_51176_at,V(false)});})());
}

}
}}
(void)(([&]()->V{V _base55143=_v_51175_out.get();V _key55144=this->_literals[190];V _assign55142=_v_51176_at;return j::put(_base55143,_key55144,_assign55142);})());
return _v_51175_out.get();

}

return V{};
},3);
this->_v_51207_subdivide.get()=j::function([=](const j::Args &_args_fn51208,const V &_receiver_fn51208,const V &_self_fn51208) mutable ->V{
V _v_51209_rings;
j::Cell _v_51210_most;
j::Cell _v_51211_closed;
_v_51209_rings=_args_fn51208[0];
_v_51210_most.get()=_args_fn51208[1];
_v_51211_closed.get()=_args_fn51208[2];
{
return ([&]()->V{V _receiver55234=_v_51209_rings;V _method55235=this->_literals[41];V _method=j::get(_receiver55234,_method55235);j::Args _params55236=j::Args{j::function([=](const j::Args &_args_fn51212,const V &_receiver_fn51212,const V &_self_fn51212) mutable ->V{
V _v_51213_r;
V _v_51214_ri;
_v_51213_r=_args_fn51212[0];
_v_51214_ri=_args_fn51212[1];
{
V _v_51215_n;
V _v_51216_out;
V _v_51217_shut;
_v_51215_n=([&]()->V{V _lhs55145=j::get(_v_51213_r,this->_literals[5]);V _rhs55146=V(1.0);return V(int(j::i32(_lhs55145)>>(j::u32(_rhs55146)&31)));})();
_v_51216_out=([&]()->V{j::Args _array55147;return j::array(std::move(_array55147));})();
_v_51217_shut=(j::truth(_v_51211_closed.get())?j::get(_v_51211_closed.get(),_v_51214_ri):V(true));
{V _v_51218_i;
_v_51218_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs55148=_v_51218_i;V _rhs55149=_v_51215_n;return j::binary("<",_lhs55148,_rhs55149);})());(void)(j::increment(_v_51218_i,1,false))){
V _v_51219_j;
V _v_51220_ax;
V _v_51221_ay;
V _v_51222_bx;
V _v_51223_by;
V _v_51224_k;
if(j::truth(([&]()->V{V _logical55150=j::unary("!",_v_51217_shut);return j::truth(_logical55150)?([&]()->V{V _lhs55151=_v_51218_i;V _rhs55152=([&]()->V{V _lhs55153=_v_51215_n;V _rhs55154=V(1.0);return V(j::number(_lhs55153)-j::number(_rhs55154));})();return V(j::equal(_lhs55151,_rhs55152,true));})():_logical55150;})())){
(void)(([&]()->V{V _receiver55161=_v_51216_out;V _method55162=this->_literals[25];V _method=j::get(_receiver55161,_method55162);j::Args _params55163=j::Args{j::get(_v_51213_r,([&]()->V{V _lhs55155=V(2.0);V _rhs55156=_v_51218_i;return V(j::number(_lhs55155)*j::number(_rhs55156));})()),j::get(_v_51213_r,([&]()->V{V _lhs55157=([&]()->V{V _lhs55159=V(2.0);V _rhs55160=_v_51218_i;return V(j::number(_lhs55159)*j::number(_rhs55160));})();V _rhs55158=V(1.0);return j::binary("+",_lhs55157,_rhs55158);})())};return j::call(_method,_params55163,_receiver55161);})());
break;

}

_v_51219_j=([&]()->V{V _lhs55164=([&]()->V{V _lhs55166=_v_51218_i;V _rhs55167=V(1.0);return j::binary("+",_lhs55166,_rhs55167);})();V _rhs55165=_v_51215_n;return V(std::fmod(j::number(_lhs55164),j::number(_rhs55165)));})();
_v_51220_ax=j::get(_v_51213_r,([&]()->V{V _lhs55168=V(2.0);V _rhs55169=_v_51218_i;return V(j::number(_lhs55168)*j::number(_rhs55169));})());
_v_51221_ay=j::get(_v_51213_r,([&]()->V{V _lhs55170=([&]()->V{V _lhs55172=V(2.0);V _rhs55173=_v_51218_i;return V(j::number(_lhs55172)*j::number(_rhs55173));})();V _rhs55171=V(1.0);return j::binary("+",_lhs55170,_rhs55171);})());
_v_51222_bx=j::get(_v_51213_r,([&]()->V{V _lhs55174=V(2.0);V _rhs55175=_v_51219_j;return V(j::number(_lhs55174)*j::number(_rhs55175));})());
_v_51223_by=j::get(_v_51213_r,([&]()->V{V _lhs55176=([&]()->V{V _lhs55178=V(2.0);V _rhs55179=_v_51219_j;return V(j::number(_lhs55178)*j::number(_rhs55179));})();V _rhs55177=V(1.0);return j::binary("+",_lhs55176,_rhs55177);})());
_v_51224_k=([&]()->V{V _receiver55207=j::builtin("Math");V _method55208=this->_literals[66];V _method=j::get(_receiver55207,_method55208);j::Args _params55209=j::Args{V(1.0),([&]()->V{V _number55192=([&]()->V{V _lhs55193=([&]()->V{V _number55199=([&]()->V{V _lhs55201=_v_51222_bx;V _rhs55202=_v_51220_ax;return V(j::number(_lhs55201)-j::number(_rhs55202));})();V _number55200=([&]()->V{V _lhs55203=_v_51223_by;V _rhs55204=_v_51221_ay;return V(j::number(_lhs55203)-j::number(_rhs55204));})();return V(std::hypot(j::number(_number55199),j::number(_number55200)));})();V _rhs55194=_v_51210_most.get();return V(j::number(_lhs55193)/j::number(_rhs55194));})();return V(std::ceil(j::number(_number55192)));})()};return j::call(_method,_params55209,_receiver55207);})();
{V _v_51225_s;
_v_51225_s=V(0.0);
for(;j::truth(([&]()->V{V _lhs55210=_v_51225_s;V _rhs55211=_v_51224_k;return j::binary("<",_lhs55210,_rhs55211);})());(void)(j::increment(_v_51225_s,1,false))){(void)(([&]()->V{V _receiver55228=_v_51216_out;V _method55229=this->_literals[25];V _method=j::get(_receiver55228,_method55229);j::Args _params55230=j::Args{([&]()->V{V _lhs55212=_v_51220_ax;V _rhs55213=([&]()->V{V _lhs55214=([&]()->V{V _lhs55216=([&]()->V{V _lhs55218=_v_51222_bx;V _rhs55219=_v_51220_ax;return V(j::number(_lhs55218)-j::number(_rhs55219));})();V _rhs55217=_v_51225_s;return V(j::number(_lhs55216)*j::number(_rhs55217));})();V _rhs55215=_v_51224_k;return V(j::number(_lhs55214)/j::number(_rhs55215));})();return j::binary("+",_lhs55212,_rhs55213);})(),([&]()->V{V _lhs55220=_v_51221_ay;V _rhs55221=([&]()->V{V _lhs55222=([&]()->V{V _lhs55224=([&]()->V{V _lhs55226=_v_51223_by;V _rhs55227=_v_51221_ay;return V(j::number(_lhs55226)-j::number(_rhs55227));})();V _rhs55225=_v_51225_s;return V(j::number(_lhs55224)*j::number(_rhs55225));})();V _rhs55223=_v_51224_k;return V(j::number(_lhs55222)/j::number(_rhs55223));})();return j::binary("+",_lhs55220,_rhs55221);})()};return j::call(_method,_params55230,_receiver55228);})());
}}

}
}
return ([&]()->V{V _receiver55231=j::builtin("Float64Array");V _method55232=this->_literals[113];V _method=j::get(_receiver55231,_method55232);j::Args _params55233=j::Args{_v_51216_out};return j::call(_method,_params55233,_receiver55231);})();

}

return V{};
},2)};return j::call(_method,_params55236,_receiver55234);})();

}

return V{};
},3);
this->_v_51226_lineChar.get()=j::function([=](const j::Args &_args_fn51227,const V &_receiver_fn51227,const V &_self_fn51227) mutable ->V{
V _v_51228_slope;
V _v_51229_rising;
V _v_51230_at;
_v_51228_slope=_args_fn51227[0];
_v_51229_rising=_args_fn51227[1];
_v_51230_at=_args_fn51227[2];
{
if(j::truth(([&]()->V{V _lhs55237=_v_51228_slope;V _rhs55238=V(15.0);return j::binary("<",_lhs55237,_rhs55238);})())){return (j::truth(([&]()->V{V _lhs55239=_v_51230_at;V _rhs55240=V(0.7);return j::binary("<",_lhs55239,_rhs55240);})())?V(45.0):V(95.0));
}
if(j::truth(([&]()->V{V _lhs55241=_v_51228_slope;V _rhs55242=V(32.0);return j::binary("<",_lhs55241,_rhs55242);})())){return (j::truth(([&]()->V{V _lhs55243=_v_51230_at;V _rhs55244=V(0.75);return j::binary(">",_lhs55243,_rhs55244);})())?V(95.0):(j::truth(([&]()->V{V _lhs55245=_v_51230_at;V _rhs55246=V(0.6);return j::binary(">",_lhs55245,_rhs55246);})())?V(46.0):(j::truth(([&]()->V{V _lhs55247=_v_51230_at;V _rhs55248=V(0.3);return j::binary(">",_lhs55247,_rhs55248);})())?V(45.0):V(39.0))));
}
if(j::truth(([&]()->V{V _lhs55249=_v_51228_slope;V _rhs55250=V(56.0);return j::binary("<",_lhs55249,_rhs55250);})())){return (j::truth(([&]()->V{V _lhs55251=_v_51230_at;V _rhs55252=V(0.5);return j::binary(">=",_lhs55251,_rhs55252);})())?V(46.0):V(39.0));
}
if(j::truth(([&]()->V{V _lhs55253=_v_51228_slope;V _rhs55254=V(74.0);return j::binary("<",_lhs55253,_rhs55254);})())){return (j::truth(_v_51229_rising)?V(47.0):V(92.0));
}
return V(124.0);

}

return V{};
},3);
this->_v_51231_loopOf.get()=j::function([=](const j::Args &_args_fn51232,const V &_receiver_fn51232,const V &_self_fn51232) mutable ->V{
V _v_51233_periods;
_v_51233_periods=_args_fn51232[0];
{
j::Cell _v_51234_gcd;
V _v_51238_l;
_v_51234_gcd.get()=j::function([=](const j::Args &_args_fn51235,const V &_receiver_fn51235,const V &_self_fn51235) mutable ->V{
V _v_51236_a;
V _v_51237_b;
_v_51236_a=_args_fn51235[0];
_v_51237_b=_args_fn51235[1];
return (j::truth(_v_51237_b)?([&]()->V{V _callee55257=_v_51234_gcd.get();return j::call(_callee55257,j::Args{_v_51237_b,([&]()->V{V _lhs55255=_v_51236_a;V _rhs55256=_v_51237_b;return V(std::fmod(j::number(_lhs55255),j::number(_rhs55256)));})()});})():_v_51236_a);
return V{};
},2);
_v_51238_l=V(1.0);
{for(const auto &_item55258:j::elements(_v_51233_periods)){V _v_51239_p;
_v_51239_p=_item55258;
{
V _v_51240_h;
if(j::truth(([&]()->V{V _receiver55259=j::builtin("Number");V _method55260=this->_literals[71];V _method=j::get(_receiver55259,_method55260);j::Args _params55261=j::Args{_v_51239_p};return j::call(_method,_params55261,_receiver55259);})())){return j::builtin("undefined");
}
_v_51240_h=([&]()->V{V _number55264=([&]()->V{V _lhs55265=_v_51239_p;V _rhs55266=V(100.0);return V(j::number(_lhs55265)*j::number(_rhs55266));})();return V(std::floor(j::number(_number55264)+.5));})();
if(j::truth(([&]()->V{V _lhs55267=_v_51240_h;V _rhs55268=V(0.0);return j::binary("<=",_lhs55267,_rhs55268);})())){continue;
}
(void)((_v_51238_l=([&]()->V{V _lhs55270=([&]()->V{V _lhs55272=_v_51238_l;V _rhs55273=([&]()->V{V _callee55274=_v_51234_gcd.get();return j::call(_callee55274,j::Args{_v_51238_l,_v_51240_h});})();return V(j::number(_lhs55272)/j::number(_rhs55273));})();V _rhs55271=_v_51240_h;return V(j::number(_lhs55270)*j::number(_rhs55271));})()));
if(j::truth(([&]()->V{V _lhs55275=_v_51238_l;V _rhs55276=V(6000.0);return j::binary(">",_lhs55275,_rhs55276);})())){return j::builtin("undefined");
}

}
}}
return (j::truth(j::get(_v_51233_periods,this->_literals[5]))?([&]()->V{V _lhs55277=_v_51238_l;V _rhs55278=V(100.0);return V(j::number(_lhs55277)/j::number(_rhs55278));})():j::builtin("undefined"));

}

return V{};
},1);
this->_v_51245_motionAt.get()=j::function([=](const j::Args &_args_fn51246,const V &_receiver_fn51246,const V &_self_fn51246) mutable ->V{
V _v_51247_m;
V _v_51248_t;
V _v_51249_rowUnits;
V _v_51250_colUnits;
_v_51247_m=_args_fn51246[0];
_v_51248_t=_args_fn51246[1];
_v_51249_rowUnits=_args_fn51246[2];
_v_51250_colUnits=_args_fn51246[3];
{
V _v_51251_u;
V _v_51252_ox;
V _v_51253_oy;
_v_51251_u=([&]()->V{V _lhs55279=([&]()->V{V _lhs55281=_v_51248_t;V _rhs55282=j::get(_v_51247_m,this->_literals[192]);return j::binary("+",_lhs55281,_rhs55282);})();V _rhs55280=j::get(_v_51247_m,this->_literals[193]);return V(j::number(_lhs55279)/j::number(_rhs55280));})();
V _pattern55283=_v_51247_m;
_v_51252_ox=j::get(_pattern55283,this->_literals[194]);
_v_51253_oy=j::get(_pattern55283,this->_literals[195]);
{V _switch55284=j::get(_v_51247_m,this->_literals[196]);int _case55285=-1;if(_case55285<0&&j::equal(_switch55284,this->_literals[197]))_case55285=0;if(_case55285<0&&j::equal(_switch55284,this->_literals[198]))_case55285=1;if(_case55285<0&&j::equal(_switch55284,this->_literals[199]))_case55285=2;if(_case55285<0&&j::equal(_switch55284,this->_literals[200]))_case55285=3;if(_case55285<0&&j::equal(_switch55284,this->_literals[201]))_case55285=4;if(_case55285<0&&j::equal(_switch55284,this->_literals[202]))_case55285=5;if(_case55285<0&&j::equal(_switch55284,this->_literals[203]))_case55285=6;if(_case55285<0&&j::equal(_switch55284,this->_literals[204]))_case55285=7;if(_case55285<0)_case55285=8;if(_case55285>=0&&_case55285<=0){{
V _v_51254_a;
_v_51254_a=([&]()->V{V _lhs55287=([&]()->V{V _lhs55289=this->_v_50444_TAU.get();V _rhs55290=j::get(_v_51247_m,this->_literals[205]);return V(j::number(_lhs55289)*j::number(_rhs55290));})();V _rhs55288=_v_51251_u;return V(j::number(_lhs55287)*j::number(_rhs55288));})();
return ([&]()->V{V _callee55295=this->_v_50581_about.get();return j::call(_callee55295,j::Args{_v_51252_ox,_v_51253_oy,([&]()->V{V _number55291=_v_51254_a;return V(std::cos(j::number(_number55291)));})(),([&]()->V{V _number55292=_v_51254_a;return V(std::sin(j::number(_number55292)));})(),j::unary("-",([&]()->V{V _number55293=_v_51254_a;return V(std::sin(j::number(_number55293)));})()),([&]()->V{V _number55294=_v_51254_a;return V(std::cos(j::number(_number55294)));})()});})();

}
}if(_case55285>=0&&_case55285<=1){{
V _v_51255_k;
_v_51255_k=([&]()->V{V _number55300=([&]()->V{V _lhs55301=([&]()->V{V _lhs55303=this->_v_50444_TAU.get();V _rhs55304=j::get(_v_51247_m,this->_literals[205]);return V(j::number(_lhs55303)*j::number(_rhs55304));})();V _rhs55302=_v_51251_u;return V(j::number(_lhs55301)*j::number(_rhs55302));})();return V(std::cos(j::number(_number55300)));})();
return ([&]()->V{V _callee55310=this->_v_50581_about.get();return j::call(_callee55310,j::Args{_v_51252_ox,_v_51253_oy,(j::truth(([&]()->V{V _lhs55305=([&]()->V{V _number55307=_v_51255_k;return V(std::fabs(j::number(_number55307)));})();V _rhs55306=V(0.08);return j::binary("<",_lhs55305,_rhs55306);})())?(j::truth(([&]()->V{V _lhs55308=_v_51255_k;V _rhs55309=V(0.0);return j::binary("<",_lhs55308,_rhs55309);})())?j::unary("-",V(0.08)):V(0.08)):_v_51255_k),V(0.0),V(0.0),V(1.0)});})();

}
}if(_case55285>=0&&_case55285<=2){return ([&]()->V{j::Args _array55311;_array55311.push_back(V(1.0));_array55311.push_back(V(0.0));_array55311.push_back(V(0.0));_array55311.push_back(V(1.0));_array55311.push_back(V(0.0));_array55311.push_back(([&]()->V{V _lhs55312=([&]()->V{V _lhs55314=j::unary("-",j::get(_v_51247_m,this->_literals[205]));V _rhs55315=_v_51249_rowUnits;return V(j::number(_lhs55314)*j::number(_rhs55315));})();V _rhs55313=([&]()->V{V _number55318=([&]()->V{V _lhs55319=this->_v_50444_TAU.get();V _rhs55320=_v_51251_u;return V(j::number(_lhs55319)*j::number(_rhs55320));})();return V(std::sin(j::number(_number55318)));})();return V(j::number(_lhs55312)*j::number(_rhs55313));})());return j::array(std::move(_array55311));})();
}if(_case55285>=0&&_case55285<=3){{
V _v_51256_k;
_v_51256_k=([&]()->V{V _lhs55321=V(1.0);V _rhs55322=([&]()->V{V _lhs55323=j::get(_v_51247_m,this->_literals[205]);V _rhs55324=([&]()->V{V _lhs55325=V(0.5);V _rhs55326=([&]()->V{V _lhs55327=V(0.5);V _rhs55328=([&]()->V{V _number55331=([&]()->V{V _lhs55332=this->_v_50444_TAU.get();V _rhs55333=_v_51251_u;return V(j::number(_lhs55332)*j::number(_rhs55333));})();return V(std::cos(j::number(_number55331)));})();return V(j::number(_lhs55327)*j::number(_rhs55328));})();return V(j::number(_lhs55325)-j::number(_rhs55326));})();return V(j::number(_lhs55323)*j::number(_rhs55324));})();return j::binary("+",_lhs55321,_rhs55322);})();
return ([&]()->V{V _callee55334=this->_v_50581_about.get();return j::call(_callee55334,j::Args{_v_51252_ox,_v_51253_oy,_v_51256_k,V(0.0),V(0.0),_v_51256_k});})();

}
}if(_case55285>=0&&_case55285<=4){{
V _v_51257_a;
_v_51257_a=([&]()->V{V _lhs55335=j::get(_v_51247_m,this->_literals[205]);V _rhs55336=([&]()->V{V _number55339=([&]()->V{V _lhs55340=this->_v_50444_TAU.get();V _rhs55341=_v_51251_u;return V(j::number(_lhs55340)*j::number(_rhs55341));})();return V(std::sin(j::number(_number55339)));})();return V(j::number(_lhs55335)*j::number(_rhs55336));})();
return ([&]()->V{V _callee55346=this->_v_50581_about.get();return j::call(_callee55346,j::Args{_v_51252_ox,_v_51253_oy,([&]()->V{V _number55342=_v_51257_a;return V(std::cos(j::number(_number55342)));})(),([&]()->V{V _number55343=_v_51257_a;return V(std::sin(j::number(_number55343)));})(),j::unary("-",([&]()->V{V _number55344=_v_51257_a;return V(std::sin(j::number(_number55344)));})()),([&]()->V{V _number55345=_v_51257_a;return V(std::cos(j::number(_number55345)));})()});})();

}
}if(_case55285>=0&&_case55285<=5){{
V _v_51258_w;
V _v_51259_shut;
V _v_51260_k;
_v_51258_w=([&]()->V{V _lhs55347=j::get(_v_51247_m,this->_literals[193]);V _rhs55348=([&]()->V{V _lhs55349=_v_51251_u;V _rhs55350=([&]()->V{V _number55351=_v_51251_u;return V(std::floor(j::number(_number55351)));})();return V(j::number(_lhs55349)-j::number(_rhs55350));})();return V(j::number(_lhs55347)*j::number(_rhs55348));})();
_v_51259_shut=V(0.2);
_v_51260_k=(j::truth(([&]()->V{V _lhs55352=_v_51258_w;V _rhs55353=([&]()->V{V _lhs55354=j::get(_v_51247_m,this->_literals[193]);V _rhs55355=_v_51259_shut;return V(j::number(_lhs55354)-j::number(_rhs55355));})();return j::binary(">",_lhs55352,_rhs55353);})())?([&]()->V{V _lhs55356=V(1.0);V _rhs55357=([&]()->V{V _lhs55358=j::get(_v_51247_m,this->_literals[205]);V _rhs55359=([&]()->V{V _number55368=([&]()->V{V _lhs55369=([&]()->V{V _lhs55371=j::get(j::builtin("Math"),this->_literals[59]);V _rhs55372=([&]()->V{V _lhs55373=_v_51258_w;V _rhs55374=([&]()->V{V _lhs55375=j::get(_v_51247_m,this->_literals[193]);V _rhs55376=_v_51259_shut;return V(j::number(_lhs55375)-j::number(_rhs55376));})();return V(j::number(_lhs55373)-j::number(_rhs55374));})();return V(j::number(_lhs55371)*j::number(_rhs55372));})();V _rhs55370=_v_51259_shut;return V(j::number(_lhs55369)/j::number(_rhs55370));})();return V(std::sin(j::number(_number55368)));})();return V(j::number(_lhs55358)*j::number(_rhs55359));})();return V(j::number(_lhs55356)-j::number(_rhs55357));})():V(1.0));
return ([&]()->V{V _callee55377=this->_v_50581_about.get();return j::call(_callee55377,j::Args{_v_51252_ox,_v_51253_oy,V(1.0),V(0.0),V(0.0),_v_51260_k});})();

}
}if(_case55285>=0&&_case55285<=6){return ([&]()->V{j::Args _array55378;_array55378.push_back(V(1.0));_array55378.push_back(V(0.0));_array55378.push_back(V(0.0));_array55378.push_back(V(1.0));_array55378.push_back(V(0.0));_array55378.push_back(([&]()->V{V _lhs55379=([&]()->V{V _lhs55381=j::unary("-",j::get(_v_51247_m,this->_literals[205]));V _rhs55382=_v_51249_rowUnits;return V(j::number(_lhs55381)*j::number(_rhs55382));})();V _rhs55380=([&]()->V{V _lhs55383=_v_51251_u;V _rhs55384=([&]()->V{V _number55385=_v_51251_u;return V(std::floor(j::number(_number55385)));})();return V(j::number(_lhs55383)-j::number(_rhs55384));})();return V(j::number(_lhs55379)*j::number(_rhs55380));})());return j::array(std::move(_array55378));})();
}if(_case55285>=0&&_case55285<=7){{
V _v_51261_p;
V _v_51262_a;
V _v_51263_sc;
V _v_51264_sx;
V _v_51265_sy;
V _v_51266_c;
V _v_51267_s;
V _v_51268_r;
_v_51261_p=([&]()->V{V _logical55386=([&]()->V{V _receiver55389=_v_51247_m;V _method55390=this->_literals[206];V _method=j::get(_receiver55389,_method55390);j::Args _params55391=j::Args{([&]()->V{V _lhs55387=_v_51248_t;V _rhs55388=j::get(_v_51247_m,this->_literals[192]);return j::binary("+",_lhs55387,_rhs55388);})()};return j::call(_method,_params55391,_receiver55389);})();return j::nullish(_logical55386)?([&]()->V{V _obj55392=j::object();return _obj55392;})():_logical55386;})();
_v_51262_a=([&]()->V{V _callee55393=this->_v_51241_num.get();return j::call(_callee55393,j::Args{j::get(_v_51261_p,this->_literals[63]),V(0.0)});})();
_v_51263_sc=j::get(_v_51261_p,this->_literals[62]);
_v_51264_sx=([&]()->V{V _callee55397=this->_v_51241_num.get();return j::call(_callee55397,j::Args{(j::truth(([&]()->V{V _receiver55394=j::builtin("Array");V _method55395=this->_literals[207];V _method=j::get(_receiver55394,_method55395);j::Args _params55396=j::Args{_v_51263_sc};return j::call(_method,_params55396,_receiver55394);})())?j::get(_v_51263_sc,V(0.0)):_v_51263_sc),V(1.0)});})();
_v_51265_sy=([&]()->V{V _callee55401=this->_v_51241_num.get();return j::call(_callee55401,j::Args{(j::truth(([&]()->V{V _receiver55398=j::builtin("Array");V _method55399=this->_literals[207];V _method=j::get(_receiver55398,_method55399);j::Args _params55400=j::Args{_v_51263_sc};return j::call(_method,_params55400,_receiver55398);})())?j::get(_v_51263_sc,V(1.0)):_v_51263_sc),V(1.0)});})();
_v_51266_c=([&]()->V{V _number55402=_v_51262_a;return V(std::cos(j::number(_number55402)));})();
_v_51267_s=([&]()->V{V _number55403=_v_51262_a;return V(std::sin(j::number(_number55403)));})();
_v_51268_r=([&]()->V{V _callee55412=this->_v_50581_about.get();return j::call(_callee55412,j::Args{_v_51252_ox,_v_51253_oy,([&]()->V{V _lhs55404=_v_51266_c;V _rhs55405=_v_51264_sx;return V(j::number(_lhs55404)*j::number(_rhs55405));})(),([&]()->V{V _lhs55406=_v_51267_s;V _rhs55407=_v_51264_sx;return V(j::number(_lhs55406)*j::number(_rhs55407));})(),([&]()->V{V _lhs55408=j::unary("-",_v_51267_s);V _rhs55409=_v_51265_sy;return V(j::number(_lhs55408)*j::number(_rhs55409));})(),([&]()->V{V _lhs55410=_v_51266_c;V _rhs55411=_v_51265_sy;return V(j::number(_lhs55410)*j::number(_rhs55411));})()});})();
return ([&]()->V{j::Args _array55413;_array55413.push_back(j::get(_v_51268_r,V(0.0)));_array55413.push_back(j::get(_v_51268_r,V(1.0)));_array55413.push_back(j::get(_v_51268_r,V(2.0)));_array55413.push_back(j::get(_v_51268_r,V(3.0)));_array55413.push_back(([&]()->V{V _lhs55414=j::get(_v_51268_r,V(4.0));V _rhs55415=([&]()->V{V _lhs55416=([&]()->V{V _callee55418=this->_v_51241_num.get();return j::call(_callee55418,j::Args{j::get(_v_51261_p,this->_literals[98]),V(0.0)});})();V _rhs55417=_v_51250_colUnits;return V(j::number(_lhs55416)*j::number(_rhs55417));})();return j::binary("+",_lhs55414,_rhs55415);})());_array55413.push_back(([&]()->V{V _lhs55419=j::get(_v_51268_r,V(5.0));V _rhs55420=([&]()->V{V _lhs55421=([&]()->V{V _callee55423=this->_v_51241_num.get();return j::call(_callee55423,j::Args{j::get(_v_51261_p,this->_literals[99]),V(0.0)});})();V _rhs55422=_v_51249_rowUnits;return V(j::number(_lhs55421)*j::number(_rhs55422));})();return j::binary("+",_lhs55419,_rhs55420);})());return j::array(std::move(_array55413));})();

}
}if(_case55285>=0&&_case55285<=8){return this->_v_50576_IDENTITY.get();
}_switch_end55286:;
}

}

return V{};
},4);
this->_v_51269_partOf.get()=j::function([=](const j::Args &_args_fn51270,const V &_receiver_fn51270,const V &_self_fn51270) mutable ->V{
j::Cell _v_51271_key;
V _v_51272_v;
V _v_51273_rank;
_v_51271_key.get()=_args_fn51270[0];
_v_51272_v=_args_fn51270[1];
_v_51273_rank=_args_fn51270[2];
{
V _v_51274_plan;
j::Cell _v_51275_takes;
V _v_51276_words;
V _v_51281_o;
V _v_51283_fn;
V _v_51284_list;
V _v_51285_period;
V _v_51286_every;
V _v_51287_amount;
V _v_51288_offset;
V _v_51289_stagger;
_v_51274_plan=([&]()->V{V _obj55424=j::object();j::put(_obj55424,this->_literals[208],_v_51271_key.get());j::put(_obj55424,this->_literals[209],([&]()->V{j::Args _array55425;return j::array(std::move(_array55425));})());j::put(_obj55424,this->_literals[210],V::null());j::put(_obj55424,this->_literals[211],V::null());j::put(_obj55424,this->_literals[130],V::null());j::put(_obj55424,this->_literals[212],V::null());j::put(_obj55424,this->_literals[141],V::null());j::put(_obj55424,this->_literals[213],V(false));j::put(_obj55424,this->_literals[46],_v_51273_rank);return _obj55424;})();
_v_51275_takes.get()=([&]()->V{std::u16string _text55426;_text55426+=u"";_text55426+=j::string(_v_51271_key.get());_text55426+=u" takes a motion, ";_text55426+=j::string(([&]()->V{V _callee55430=this->_v_50445_and.get();return j::call(_callee55430,j::Args{([&]()->V{V _receiver55427=j::builtin("Object");V _method55428=this->_literals[214];V _method=j::get(_receiver55427,_method55428);j::Args _params55429=j::Args{this->_v_50974_MOTIONS.get()};return j::call(_method,_params55429,_receiver55427);})()});})());_text55426+=u", a function of t giving its pose, a material, or { motion, origin, material, fill, char, color, hide }";return V(std::move(_text55426));})();
_v_51276_words=j::function([=](const j::Args &_args_fn51277,const V &_receiver_fn51277,const V &_self_fn51277) mutable ->V{
V _v_51278_w;
_v_51278_w=_args_fn51277[0];
{
V _v_51279_list;
_v_51279_list=(j::truth(([&]()->V{V _lhs55431=j::unary("typeof",_v_51278_w);V _rhs55432=this->_literals[117];return V(j::equal(_lhs55431,_rhs55432,true));})())?([&]()->V{j::Args _array55433;_array55433.push_back(_v_51278_w);return j::array(std::move(_array55433));})():(j::truth(([&]()->V{V _receiver55434=j::builtin("Array");V _method55435=this->_literals[207];V _method=j::get(_receiver55434,_method55435);j::Args _params55436=j::Args{_v_51278_w};return j::call(_method,_params55436,_receiver55434);})())?_v_51278_w:([&]()->V{V _callee55445=this->_v_50450_fail.get();return j::call(_callee55445,j::Args{([&]()->V{std::u16string _text55437;_text55437+=u"";_text55437+=j::string(_v_51271_key.get());_text55437+=u"'s motion takes a word, ";_text55437+=j::string(([&]()->V{V _callee55441=this->_v_50445_and.get();return j::call(_callee55441,j::Args{([&]()->V{V _receiver55438=j::builtin("Object");V _method55439=this->_literals[214];V _method=j::get(_receiver55438,_method55439);j::Args _params55440=j::Args{this->_v_50974_MOTIONS.get()};return j::call(_method,_params55440,_receiver55438);})()});})());_text55437+=u", a list of them, or a function of t, not ";_text55437+=j::string(([&]()->V{V _receiver55442=j::builtin("JSON");V _method55443=this->_literals[215];V _method=j::get(_receiver55442,_method55443);j::Args _params55444=j::Args{_v_51278_w};return j::call(_method,_params55444,_receiver55442);})());_text55437+=u"";return V(std::move(_text55437));})()});})()));
{for(const auto &_item55446:j::elements(_v_51279_list)){V _v_51280_m;
_v_51280_m=_item55446;
if(j::truth(([&]()->V{V _logical55447=([&]()->V{V _lhs55448=j::unary("typeof",_v_51280_m);V _rhs55449=this->_literals[117];return V(!j::equal(_lhs55448,_rhs55449,true));})();return !j::truth(_logical55447)?j::unary("!",([&]()->V{V _receiver55450=j::builtin("Object");V _method55451=this->_literals[216];V _method=j::get(_receiver55450,_method55451);j::Args _params55452=j::Args{this->_v_50974_MOTIONS.get(),_v_51280_m};return j::call(_method,_params55452,_receiver55450);})()):_logical55447;})())){(void)(([&]()->V{V _callee55457=this->_v_50450_fail.get();return j::call(_callee55457,j::Args{([&]()->V{std::u16string _text55453;_text55453+=u"";_text55453+=j::string(_v_51275_takes.get());_text55453+=u", not ";_text55453+=j::string(([&]()->V{V _receiver55454=j::builtin("JSON");V _method55455=this->_literals[215];V _method=j::get(_receiver55454,_method55455);j::Args _params55456=j::Args{_v_51280_m};return j::call(_method,_params55456,_receiver55454);})());_text55453+=u"";return V(std::move(_text55453));})()});})());
}
}}
return _v_51279_list;

}

return V{};
},1);
if(j::truth(([&]()->V{V _lhs55458=_v_51272_v;V _rhs55459=V(false);return V(j::equal(_lhs55458,_rhs55459,true));})())){
(void)(([&]()->V{V _base55461=_v_51274_plan;V _key55462=this->_literals[213];V _assign55460=V(true);return j::put(_base55461,_key55462,_assign55460);})());
return _v_51274_plan;

}

if(j::truth(([&]()->V{V _lhs55463=j::unary("typeof",_v_51272_v);V _rhs55464=this->_literals[217];return V(j::equal(_lhs55463,_rhs55464,true));})())){(void)((_v_51281_o=([&]()->V{V _obj55466=j::object();j::put(_obj55466,this->_literals[196],_v_51272_v);return _obj55466;})()));
}else {if(j::truth(([&]()->V{V _logical55467=([&]()->V{V _lhs55468=j::unary("typeof",_v_51272_v);V _rhs55469=this->_literals[117];return V(j::equal(_lhs55468,_rhs55469,true));})();return !j::truth(_logical55467)?([&]()->V{V _receiver55470=j::builtin("Array");V _method55471=this->_literals[207];V _method=j::get(_receiver55470,_method55471);j::Args _params55472=j::Args{_v_51272_v};return j::call(_method,_params55472,_receiver55470);})():_logical55467;})())){(void)((_v_51281_o=([&]()->V{V _obj55474=j::object();j::put(_obj55474,this->_literals[196],([&]()->V{V _callee55475=_v_51276_words;return j::call(_callee55475,j::Args{_v_51272_v});})());return _obj55474;})()));
}else {if(j::truth(([&]()->V{V _logical55476=([&]()->V{V _callee55477=this->_v_50989_isSource.get();return j::call(_callee55477,j::Args{_v_51272_v});})();return !j::truth(_logical55476)?([&]()->V{V _callee55478=this->_v_50985_isPartMaterial.get();return j::call(_callee55478,j::Args{_v_51272_v});})():_logical55476;})())){(void)((_v_51281_o=([&]()->V{V _obj55480=j::object();j::put(_obj55480,this->_literals[211],_v_51272_v);return _obj55480;})()));
}else {if(j::truth(([&]()->V{V _logical55481=_v_51272_v;return j::truth(_logical55481)?([&]()->V{V _lhs55482=j::unary("typeof",_v_51272_v);V _rhs55483=this->_literals[218];return V(j::equal(_lhs55482,_rhs55483,true));})():_logical55481;})())){
{for(const auto &_item55484:j::elements(([&]()->V{V _receiver55485=j::builtin("Object");V _method55486=this->_literals[214];V _method=j::get(_receiver55485,_method55486);j::Args _params55487=j::Args{_v_51272_v};return j::call(_method,_params55487,_receiver55485);})())){V _v_51282_k;
_v_51282_k=_item55484;
if(j::truth(j::unary("!",([&]()->V{V _receiver55488=this->_v_50993_PART_KEYS.get();V _method55489=this->_literals[30];V _method=j::get(_receiver55488,_method55489);j::Args _params55490=j::Args{_v_51282_k};return j::call(_method,_params55490,_receiver55488);})()))){(void)(([&]()->V{V _callee55497=this->_v_50450_fail.get();return j::call(_callee55497,j::Args{([&]()->V{std::u16string _text55491;_text55491+=u"";_text55491+=j::string(_v_51271_key.get());_text55491+=u" has no option named ";_text55491+=j::string(([&]()->V{V _receiver55492=j::builtin("JSON");V _method55493=this->_literals[215];V _method=j::get(_receiver55492,_method55493);j::Args _params55494=j::Args{_v_51282_k};return j::call(_method,_params55494,_receiver55492);})());_text55491+=u": a part takes ";_text55491+=j::string(([&]()->V{V _callee55496=this->_v_50445_and.get();return j::call(_callee55496,j::Args{([&]()->V{j::Args _array55495;for(const auto &_value:j::elements(this->_v_50993_PART_KEYS.get()))_array55495.push_back(_value);return j::array(std::move(_array55495));})()});})());_text55491+=u"";return V(std::move(_text55491));})()});})());
}
}}
(void)((_v_51281_o=_v_51272_v));

}
else {return ([&]()->V{V _callee55501=this->_v_50450_fail.get();return j::call(_callee55501,j::Args{([&]()->V{std::u16string _text55499;_text55499+=u"";_text55499+=j::string(_v_51275_takes.get());_text55499+=u", not ";_text55499+=j::string(([&]()->V{V _callee55500=j::builtin("String");return j::call(_callee55500,j::Args{_v_51272_v});})());_text55499+=u"";return V(std::move(_text55499));})()});})();
}
}
}
}
_v_51283_fn=(j::truth(([&]()->V{V _lhs55502=j::unary("typeof",j::get(_v_51281_o,this->_literals[196]));V _rhs55503=this->_literals[217];return V(j::equal(_lhs55502,_rhs55503,true));})())?j::get(_v_51281_o,this->_literals[196]):V::null());
_v_51284_list=(j::truth(([&]()->V{V _logical55504=([&]()->V{V _lhs55505=j::get(_v_51281_o,this->_literals[196]);V _rhs55506=j::builtin("undefined");return V(j::equal(_lhs55505,_rhs55506,true));})();return !j::truth(_logical55504)?_v_51283_fn:_logical55504;})())?([&]()->V{j::Args _array55507;return j::array(std::move(_array55507));})():([&]()->V{V _callee55508=_v_51276_words;return j::call(_callee55508,j::Args{j::get(_v_51281_o,this->_literals[196])});})());
_v_51285_period=([&]()->V{V _callee55510=this->_v_51001_above0.get();return j::call(_callee55510,j::Args{j::get(_v_51281_o,this->_literals[193]),([&]()->V{std::u16string _text55509;_text55509+=u"";_text55509+=j::string(_v_51271_key.get());_text55509+=u"'s period";return V(std::move(_text55509));})()});})();
_v_51286_every=([&]()->V{V _callee55512=this->_v_51001_above0.get();return j::call(_callee55512,j::Args{j::get(_v_51281_o,this->_literals[134]),([&]()->V{std::u16string _text55511;_text55511+=u"";_text55511+=j::string(_v_51271_key.get());_text55511+=u"'s every";return V(std::move(_text55511));})()});})();
_v_51287_amount=([&]()->V{V _callee55514=this->_v_51005_finite.get();return j::call(_callee55514,j::Args{j::get(_v_51281_o,this->_literals[205]),([&]()->V{std::u16string _text55513;_text55513+=u"";_text55513+=j::string(_v_51271_key.get());_text55513+=u"'s amount";return V(std::move(_text55513));})()});})();
_v_51288_offset=([&]()->V{V _logical55515=([&]()->V{V _callee55517=this->_v_51005_finite.get();return j::call(_callee55517,j::Args{j::get(_v_51281_o,this->_literals[192]),([&]()->V{std::u16string _text55516;_text55516+=u"";_text55516+=j::string(_v_51271_key.get());_text55516+=u"'s offset";return V(std::move(_text55516));})()});})();return j::nullish(_logical55515)?V(0.0):_logical55515;})();
_v_51289_stagger=([&]()->V{V _callee55519=this->_v_51005_finite.get();return j::call(_callee55519,j::Args{j::get(_v_51281_o,this->_literals[219]),([&]()->V{std::u16string _text55518;_text55518+=u"";_text55518+=j::string(_v_51271_key.get());_text55518+=u"'s stagger";return V(std::move(_text55518));})()});})();
if(j::truth(([&]()->V{V _logical55520=([&]()->V{V _logical55521=([&]()->V{V _lhs55522=_v_51285_period;V _rhs55523=j::builtin("undefined");return V(!j::equal(_lhs55522,_rhs55523,true));})();return j::truth(_logical55521)?j::get(_v_51284_list,this->_literals[5]):_logical55521;})();return j::truth(_logical55520)?([&]()->V{V _receiver55524=_v_51284_list;V _method55525=this->_literals[134];V _method=j::get(_receiver55524,_method55525);j::Args _params55526=j::Args{j::function([=](const j::Args &_args_fn51290,const V &_receiver_fn51290,const V &_self_fn51290) mutable ->V{
V _v_51291_m;
_v_51291_m=_args_fn51290[0];
return j::get(j::get(this->_v_50974_MOTIONS.get(),_v_51291_m),this->_literals[134]);
return V{};
},1)};return j::call(_method,_params55526,_receiver55524);})():_logical55520;})())){(void)(([&]()->V{V _callee55529=this->_v_50450_fail.get();return j::call(_callee55529,j::Args{([&]()->V{std::u16string _text55527;_text55527+=u"";_text55527+=j::string(_v_51271_key.get());_text55527+=u"'s ";_text55527+=j::string(([&]()->V{V _callee55528=this->_v_50445_and.get();return j::call(_callee55528,j::Args{_v_51284_list});})());_text55527+=u" comes now and then: give it every, the seconds between, not period";return V(std::move(_text55527));})()});})());
}
if(j::truth(([&]()->V{V _logical55530=([&]()->V{V _logical55531=([&]()->V{V _lhs55532=_v_51286_every;V _rhs55533=j::builtin("undefined");return V(!j::equal(_lhs55532,_rhs55533,true));})();return j::truth(_logical55531)?j::get(_v_51284_list,this->_literals[5]):_logical55531;})();return j::truth(_logical55530)?([&]()->V{V _receiver55534=_v_51284_list;V _method55535=this->_literals[134];V _method=j::get(_receiver55534,_method55535);j::Args _params55536=j::Args{j::function([=](const j::Args &_args_fn51292,const V &_receiver_fn51292,const V &_self_fn51292) mutable ->V{
V _v_51293_m;
_v_51293_m=_args_fn51292[0];
return j::unary("!",j::get(j::get(this->_v_50974_MOTIONS.get(),_v_51293_m),this->_literals[134]));
return V{};
},1)};return j::call(_method,_params55536,_receiver55534);})():_logical55530;})())){(void)(([&]()->V{V _callee55539=this->_v_50450_fail.get();return j::call(_callee55539,j::Args{([&]()->V{std::u16string _text55537;_text55537+=u"";_text55537+=j::string(_v_51271_key.get());_text55537+=u"'s ";_text55537+=j::string(([&]()->V{V _callee55538=this->_v_50445_and.get();return j::call(_callee55538,j::Args{_v_51284_list});})());_text55537+=u" goes round and round: give it period, the seconds a loop, not every";return V(std::move(_text55537));})()});})());
}
{for(const auto &_item55540:j::elements(_v_51284_list)){V _v_51294_m;
_v_51294_m=_item55540;
{
V _v_51295_d;
V _v_51296_p;
_v_51295_d=j::get(this->_v_50974_MOTIONS.get(),_v_51294_m);
_v_51296_p=([&]()->V{V _logical55541=(j::truth(j::get(_v_51295_d,this->_literals[134]))?_v_51286_every:_v_51285_period);return j::nullish(_logical55541)?j::get(_v_51295_d,this->_literals[193]):_logical55541;})();
(void)(([&]()->V{V _receiver55547=j::get(_v_51274_plan,this->_literals[209]);V _method55548=this->_literals[25];V _method=j::get(_receiver55547,_method55548);j::Args _params55549=j::Args{([&]()->V{V _obj55542=j::object();j::put(_obj55542,this->_literals[196],_v_51294_m);j::put(_obj55542,this->_literals[206],V::null());j::put(_obj55542,this->_literals[193],_v_51296_p);j::put(_obj55542,this->_literals[205],([&]()->V{V _logical55543=_v_51287_amount;return j::nullish(_logical55543)?j::get(_v_51295_d,this->_literals[205]):_logical55543;})());j::put(_obj55542,this->_literals[192],_v_51288_offset);j::put(_obj55542,this->_literals[219],([&]()->V{V _logical55544=_v_51289_stagger;return j::nullish(_logical55544)?(j::truth(([&]()->V{V _lhs55545=_v_51294_m;V _rhs55546=this->_literals[203];return V(j::equal(_lhs55545,_rhs55546,true));})())?j::builtin("NaN"):V(0.0)):_logical55544;})());return _obj55542;})()};return j::call(_method,_params55549,_receiver55547);})());

}
}}
if(j::truth(_v_51283_fn)){
V _v_51297_pose;
j::Cell _v_51298_ok;
if(j::truth(([&]()->V{V _lhs55550=_v_51286_every;V _rhs55551=j::builtin("undefined");return V(!j::equal(_lhs55550,_rhs55551,true));})())){(void)(([&]()->V{V _callee55553=this->_v_50450_fail.get();return j::call(_callee55553,j::Args{([&]()->V{std::u16string _text55552;_text55552+=u"";_text55552+=j::string(_v_51271_key.get());_text55552+=u"'s every is for blink and glint: give a function period, the seconds before it repeats";return V(std::move(_text55552));})()});})());
}
if(j::truth(([&]()->V{V _lhs55554=_v_51287_amount;V _rhs55555=j::builtin("undefined");return V(!j::equal(_lhs55554,_rhs55555,true));})())){(void)(([&]()->V{V _callee55557=this->_v_50450_fail.get();return j::call(_callee55557,j::Args{([&]()->V{std::u16string _text55556;_text55556+=u"";_text55556+=j::string(_v_51271_key.get());_text55556+=u"'s amount is for motion words: a function says how far it moves itself";return V(std::move(_text55556));})()});})());
}
_v_51297_pose=([&]()->V{V _callee55558=_v_51283_fn;return j::call(_callee55558,j::Args{V(0.0)});})();
_v_51298_ok.get()=j::function([=](const j::Args &_args_fn51299,const V &_receiver_fn51299,const V &_self_fn51299) mutable ->V{
V _v_51300_k;
V _v_51301_x;
_v_51300_k=_args_fn51299[0];
_v_51301_x=_args_fn51299[1];
return ([&]()->V{V _logical55559=([&]()->V{V _logical55560=([&]()->V{V _lhs55561=_v_51301_x;V _rhs55562=j::builtin("undefined");return V(j::equal(_lhs55561,_rhs55562,true));})();return !j::truth(_logical55560)?([&]()->V{V _logical55563=([&]()->V{V _lhs55564=j::unary("typeof",_v_51301_x);V _rhs55565=this->_literals[220];return V(j::equal(_lhs55564,_rhs55565,true));})();return j::truth(_logical55563)?([&]()->V{V _receiver55566=j::builtin("Number");V _method55567=this->_literals[57];V _method=j::get(_receiver55566,_method55567);j::Args _params55568=j::Args{_v_51301_x};return j::call(_method,_params55568,_receiver55566);})():_logical55563;})():_logical55560;})();return !j::truth(_logical55559)?([&]()->V{V _logical55569=([&]()->V{V _logical55570=([&]()->V{V _logical55571=([&]()->V{V _lhs55572=_v_51300_k;V _rhs55573=this->_literals[62];return V(j::equal(_lhs55572,_rhs55573,true));})();return j::truth(_logical55571)?([&]()->V{V _receiver55574=j::builtin("Array");V _method55575=this->_literals[207];V _method=j::get(_receiver55574,_method55575);j::Args _params55576=j::Args{_v_51301_x};return j::call(_method,_params55576,_receiver55574);})():_logical55571;})();return j::truth(_logical55570)?([&]()->V{V _lhs55577=j::get(_v_51301_x,this->_literals[5]);V _rhs55578=V(2.0);return V(j::equal(_lhs55577,_rhs55578,true));})():_logical55570;})();return j::truth(_logical55569)?([&]()->V{V _receiver55585=_v_51301_x;V _method55586=this->_literals[134];V _method=j::get(_receiver55585,_method55586);j::Args _params55587=j::Args{j::function([=](const j::Args &_args_fn51302,const V &_receiver_fn51302,const V &_self_fn51302) mutable ->V{
V _v_51303_y;
_v_51303_y=_args_fn51302[0];
return ([&]()->V{V _logical55579=([&]()->V{V _lhs55580=j::unary("typeof",_v_51303_y);V _rhs55581=this->_literals[220];return V(j::equal(_lhs55580,_rhs55581,true));})();return j::truth(_logical55579)?([&]()->V{V _receiver55582=j::builtin("Number");V _method55583=this->_literals[57];V _method=j::get(_receiver55582,_method55583);j::Args _params55584=j::Args{_v_51303_y};return j::call(_method,_params55584,_receiver55582);})():_logical55579;})();
return V{};
},1)};return j::call(_method,_params55587,_receiver55585);})():_logical55569;})():_logical55559;})();
return V{};
},2);
if(j::truth(([&]()->V{V _logical55588=([&]()->V{V _logical55589=j::unary("!",_v_51297_pose);return !j::truth(_logical55589)?([&]()->V{V _lhs55590=j::unary("typeof",_v_51297_pose);V _rhs55591=this->_literals[218];return V(!j::equal(_lhs55590,_rhs55591,true));})():_logical55589;})();return !j::truth(_logical55588)?([&]()->V{V _receiver55599=([&]()->V{V _receiver55602=j::builtin("Object");V _method55603=this->_literals[221];V _method=j::get(_receiver55602,_method55603);j::Args _params55604=j::Args{_v_51297_pose};return j::call(_method,_params55604,_receiver55602);})();V _method55600=this->_literals[58];V _method=j::get(_receiver55599,_method55600);j::Args _params55601=j::Args{j::function([=](const j::Args &_args_fn51304,const V &_receiver_fn51304,const V &_self_fn51304) mutable ->V{
V _v_51305_k;
V _v_51306_x;
V _pattern55592=_args_fn51304[0];
_v_51305_k=j::get(_pattern55592,V(0));
_v_51306_x=j::get(_pattern55592,V(1));
return ([&]()->V{V _logical55593=j::unary("!",([&]()->V{V _receiver55594=([&]()->V{j::Args _array55597;_array55597.push_back(this->_literals[98]);_array55597.push_back(this->_literals[99]);_array55597.push_back(this->_literals[63]);_array55597.push_back(this->_literals[62]);return j::array(std::move(_array55597));})();V _method55595=this->_literals[133];V _method=j::get(_receiver55594,_method55595);j::Args _params55596=j::Args{_v_51305_k};return j::call(_method,_params55596,_receiver55594);})());return !j::truth(_logical55593)?j::unary("!",([&]()->V{V _callee55598=_v_51298_ok.get();return j::call(_callee55598,j::Args{_v_51305_k,_v_51306_x});})()):_logical55593;})();
return V{};
},1)};return j::call(_method,_params55601,_receiver55599);})():_logical55588;})())){(void)(([&]()->V{V _callee55611=this->_v_50450_fail.get();return j::call(_callee55611,j::Args{([&]()->V{std::u16string _text55605;_text55605+=u"";_text55605+=j::string(_v_51271_key.get());_text55605+=u"'s motion function returns a pose, { x, y, rotate, scale } of numbers (columns, rows, radians, times), not ";_text55605+=j::string(([&]()->V{V _logical55606=([&]()->V{V _receiver55607=j::builtin("JSON");V _method55608=this->_literals[215];V _method=j::get(_receiver55607,_method55608);j::Args _params55609=j::Args{_v_51297_pose};return j::call(_method,_params55609,_receiver55607);})();return j::nullish(_logical55606)?([&]()->V{V _callee55610=j::builtin("String");return j::call(_callee55610,j::Args{_v_51297_pose});})():_logical55606;})());_text55605+=u"";return V(std::move(_text55605));})()});})());
}
(void)(([&]()->V{V _receiver55615=j::get(_v_51274_plan,this->_literals[209]);V _method55616=this->_literals[25];V _method=j::get(_receiver55615,_method55616);j::Args _params55617=j::Args{([&]()->V{V _obj55612=j::object();j::put(_obj55612,this->_literals[196],this->_literals[204]);j::put(_obj55612,this->_literals[206],_v_51283_fn);j::put(_obj55612,this->_literals[193],([&]()->V{V _logical55613=_v_51285_period;return j::nullish(_logical55613)?j::builtin("NaN"):_logical55613;})());j::put(_obj55612,this->_literals[205],V(0.0));j::put(_obj55612,this->_literals[192],_v_51288_offset);j::put(_obj55612,this->_literals[219],([&]()->V{V _logical55614=_v_51289_stagger;return j::nullish(_logical55614)?V(0.0):_logical55614;})());return _obj55612;})()};return j::call(_method,_params55617,_receiver55615);})());

}

if(j::truth(([&]()->V{V _lhs55618=j::get(_v_51281_o,this->_literals[210]);V _rhs55619=j::builtin("undefined");return V(!j::equal(_lhs55618,_rhs55619,true));})())){
V _v_51307_g;
_v_51307_g=j::get(_v_51281_o,this->_literals[210]);
if(j::truth(j::unary("!",(j::truth(([&]()->V{V _lhs55620=j::unary("typeof",_v_51307_g);V _rhs55621=this->_literals[117];return V(j::equal(_lhs55620,_rhs55621,true));})())?([&]()->V{V _receiver55622=this->_v_50973_ORIGINS.get();V _method55623=this->_literals[133];V _method=j::get(_receiver55622,_method55623);j::Args _params55624=j::Args{_v_51307_g};return j::call(_method,_params55624,_receiver55622);})():([&]()->V{V _logical55625=([&]()->V{V _logical55626=([&]()->V{V _receiver55627=j::builtin("Array");V _method55628=this->_literals[207];V _method=j::get(_receiver55627,_method55628);j::Args _params55629=j::Args{_v_51307_g};return j::call(_method,_params55629,_receiver55627);})();return j::truth(_logical55626)?([&]()->V{V _lhs55630=j::get(_v_51307_g,this->_literals[5]);V _rhs55631=V(2.0);return V(j::equal(_lhs55630,_rhs55631,true));})():_logical55626;})();return j::truth(_logical55625)?([&]()->V{V _receiver55638=_v_51307_g;V _method55639=this->_literals[134];V _method=j::get(_receiver55638,_method55639);j::Args _params55640=j::Args{j::function([=](const j::Args &_args_fn51308,const V &_receiver_fn51308,const V &_self_fn51308) mutable ->V{
V _v_51309_x;
_v_51309_x=_args_fn51308[0];
return ([&]()->V{V _logical55632=([&]()->V{V _lhs55633=j::unary("typeof",_v_51309_x);V _rhs55634=this->_literals[220];return V(j::equal(_lhs55633,_rhs55634,true));})();return j::truth(_logical55632)?([&]()->V{V _receiver55635=j::builtin("Number");V _method55636=this->_literals[57];V _method=j::get(_receiver55635,_method55636);j::Args _params55637=j::Args{_v_51309_x};return j::call(_method,_params55637,_receiver55635);})():_logical55632;})();
return V{};
},1)};return j::call(_method,_params55640,_receiver55638);})():_logical55625;})())))){(void)(([&]()->V{V _callee55652=this->_v_50450_fail.get();return j::call(_callee55652,j::Args{([&]()->V{std::u16string _text55641;_text55641+=u"";_text55641+=j::string(_v_51271_key.get());_text55641+=u"'s origin takes ";_text55641+=j::string(([&]()->V{V _callee55648=this->_v_50445_and.get();return j::call(_callee55648,j::Args{([&]()->V{V _receiver55645=this->_v_50973_ORIGINS.get();V _method55646=this->_literals[41];V _method=j::get(_receiver55645,_method55646);j::Args _params55647=j::Args{j::function([=](const j::Args &_args_fn51310,const V &_receiver_fn51310,const V &_self_fn51310) mutable ->V{
V _v_51311_w;
_v_51311_w=_args_fn51310[0];
return ([&]()->V{V _receiver55642=j::builtin("JSON");V _method55643=this->_literals[215];V _method=j::get(_receiver55642,_method55643);j::Args _params55644=j::Args{_v_51311_w};return j::call(_method,_params55644,_receiver55642);})();
return V{};
},1)};return j::call(_method,_params55647,_receiver55645);})()});})());_text55641+=u", or a point [x, y] in the svg's units, not ";_text55641+=j::string(([&]()->V{V _receiver55649=j::builtin("JSON");V _method55650=this->_literals[215];V _method=j::get(_receiver55649,_method55650);j::Args _params55651=j::Args{_v_51307_g};return j::call(_method,_params55651,_receiver55649);})());_text55641+=u"";return V(std::move(_text55641));})()});})());
}
(void)(([&]()->V{V _base55654=_v_51274_plan;V _key55655=this->_literals[210];V _assign55653=_v_51307_g;return j::put(_base55654,_key55655,_assign55653);})());

}

if(j::truth(([&]()->V{V _lhs55656=j::get(_v_51281_o,this->_literals[211]);V _rhs55657=j::builtin("undefined");return V(!j::equal(_lhs55656,_rhs55657,true));})())){
if(j::truth(([&]()->V{V _logical55658=j::unary("!",([&]()->V{V _callee55659=this->_v_50989_isSource.get();return j::call(_callee55659,j::Args{j::get(_v_51281_o,this->_literals[211])});})());return j::truth(_logical55658)?j::unary("!",([&]()->V{V _callee55660=this->_v_50985_isPartMaterial.get();return j::call(_callee55660,j::Args{j::get(_v_51281_o,this->_literals[211])});})()):_logical55658;})())){(void)(([&]()->V{V _callee55667=this->_v_50450_fail.get();return j::call(_callee55667,j::Args{([&]()->V{std::u16string _text55661;_text55661+=u"";_text55661+=j::string(_v_51271_key.get());_text55661+=u"'s material takes a material such as water() or glass() from ascii.rest/kit, a piece or a Surface, not ";_text55661+=j::string(([&]()->V{V _logical55662=([&]()->V{V _receiver55663=j::builtin("JSON");V _method55664=this->_literals[215];V _method=j::get(_receiver55663,_method55664);j::Args _params55665=j::Args{j::get(_v_51281_o,this->_literals[211])};return j::call(_method,_params55665,_receiver55663);})();return j::nullish(_logical55662)?([&]()->V{V _callee55666=j::builtin("String");return j::call(_callee55666,j::Args{j::get(_v_51281_o,this->_literals[211])});})():_logical55662;})());_text55661+=u"";return V(std::move(_text55661));})()});})());
}
if(j::truth(([&]()->V{V _callee55668=this->_v_50985_isPartMaterial.get();return j::call(_callee55668,j::Args{j::get(_v_51281_o,this->_literals[211])});})())){{for(const auto &_item55669:j::elements(([&]()->V{j::Args _array55670;for(const auto &_value:j::elements(j::get(j::get(j::get(_v_51281_o,this->_literals[211]),this->_literals[222]),this->_literals[223])))_array55670.push_back(_value);for(const auto &_value:j::elements(j::get(j::get(j::get(_v_51281_o,this->_literals[211]),this->_literals[222]),this->_literals[224])))_array55670.push_back(_value);return j::array(std::move(_array55670));})())){V _v_51312_c;
_v_51312_c=_item55669;
if(j::truth(j::unary("!",([&]()->V{V _callee55671=this->_v_50453_isHex.get();return j::call(_callee55671,j::Args{_v_51312_c});})()))){(void)(([&]()->V{V _callee55676=this->_v_50450_fail.get();return j::call(_callee55676,j::Args{([&]()->V{std::u16string _text55672;_text55672+=u"";_text55672+=j::string(_v_51271_key.get());_text55672+=u"'s material has a colour that is not #rrggbb: ";_text55672+=j::string(([&]()->V{V _receiver55673=j::builtin("JSON");V _method55674=this->_literals[215];V _method=j::get(_receiver55673,_method55674);j::Args _params55675=j::Args{_v_51312_c};return j::call(_method,_params55675,_receiver55673);})());_text55672+=u"";return V(std::move(_text55672));})()});})());
}
}}
}
(void)(([&]()->V{V _base55678=_v_51274_plan;V _key55679=this->_literals[211];V _assign55677=j::get(_v_51281_o,this->_literals[211]);return j::put(_base55678,_key55679,_assign55677);})());

}

(void)(([&]()->V{V _base55681=_v_51274_plan;V _key55682=this->_literals[130];V _assign55680=([&]()->V{V _logical55683=([&]()->V{V _callee55685=this->_v_51009_oneChar.get();return j::call(_callee55685,j::Args{j::get(_v_51281_o,this->_literals[130]),([&]()->V{std::u16string _text55684;_text55684+=u"";_text55684+=j::string(_v_51271_key.get());_text55684+=u"'s fill";return V(std::move(_text55684));})()});})();return j::nullish(_logical55683)?V::null():_logical55683;})();return j::put(_base55681,_key55682,_assign55680);})());
(void)(([&]()->V{V _base55687=_v_51274_plan;V _key55688=this->_literals[212];V _assign55686=([&]()->V{V _logical55689=([&]()->V{V _callee55691=this->_v_51009_oneChar.get();return j::call(_callee55691,j::Args{j::get(_v_51281_o,this->_literals[212]),([&]()->V{std::u16string _text55690;_text55690+=u"";_text55690+=j::string(_v_51271_key.get());_text55690+=u"'s char";return V(std::move(_text55690));})()});})();return j::nullish(_logical55689)?V::null():_logical55689;})();return j::put(_base55687,_key55688,_assign55686);})());
if(j::truth(([&]()->V{V _logical55692=([&]()->V{V _lhs55693=j::get(_v_51281_o,this->_literals[141]);V _rhs55694=j::builtin("undefined");return V(!j::equal(_lhs55693,_rhs55694,true));})();return j::truth(_logical55692)?([&]()->V{V _lhs55695=j::unary("typeof",j::get(_v_51281_o,this->_literals[141]));V _rhs55696=this->_literals[117];return V(!j::equal(_lhs55695,_rhs55696,true));})():_logical55692;})())){(void)(([&]()->V{V _callee55701=this->_v_50450_fail.get();return j::call(_callee55701,j::Args{([&]()->V{std::u16string _text55697;_text55697+=u"";_text55697+=j::string(_v_51271_key.get());_text55697+=u"'s color takes #rrggbb or a palette's name, not ";_text55697+=j::string(([&]()->V{V _receiver55698=j::builtin("JSON");V _method55699=this->_literals[215];V _method=j::get(_receiver55698,_method55699);j::Args _params55700=j::Args{j::get(_v_51281_o,this->_literals[141])};return j::call(_method,_params55700,_receiver55698);})());_text55697+=u"";return V(std::move(_text55697));})()});})());
}
(void)(([&]()->V{V _base55703=_v_51274_plan;V _key55704=this->_literals[141];V _assign55702=(j::truth(([&]()->V{V _lhs55705=j::get(_v_51281_o,this->_literals[141]);V _rhs55706=j::builtin("undefined");return V(j::equal(_lhs55705,_rhs55706,true));})())?V::null():([&]()->V{V _receiver55707=(j::truth(([&]()->V{V _callee55710=this->_v_50453_isHex.get();return j::call(_callee55710,j::Args{j::get(_v_51281_o,this->_literals[141])});})())?j::get(_v_51281_o,this->_literals[141]):j::get(([&]()->V{V _callee55712=this->_v_50449_named.get();return j::call(_callee55712,j::Args{j::get(_v_51281_o,this->_literals[141]),([&]()->V{std::u16string _text55711;_text55711+=u"";_text55711+=j::string(_v_51271_key.get());_text55711+=u"'s color";return V(std::move(_text55711));})()});})(),this->_literals[224]));V _method55708=this->_literals[29];V _method=j::get(_receiver55707,_method55708);j::Args _params55709=j::Args{};return j::call(_method,_params55709,_receiver55707);})());return j::put(_base55703,_key55704,_assign55702);})());
(void)(([&]()->V{V _base55714=_v_51274_plan;V _key55715=this->_literals[213];V _assign55713=([&]()->V{V _lhs55716=j::get(_v_51281_o,this->_literals[213]);V _rhs55717=V(true);return V(j::equal(_lhs55716,_rhs55717,true));})();return j::put(_base55714,_key55715,_assign55713);})());
return _v_51274_plan;

}

return V{};
},3);
this->_v_51313_matches.get()=j::function([=](const j::Args &_args_fn51314,const V &_receiver_fn51314,const V &_self_fn51314) mutable ->V{
V _v_51315_svg;
V _v_51316_key;
_v_51315_svg=_args_fn51314[0];
_v_51316_key=_args_fn51314[1];
{
j::Cell _v_51317_owners;
j::Cell _v_51318_add;
j::Cell _v_51325_name;
j::Cell _v_51326_byId;
j::Cell _v_51332_colour;
_v_51317_owners.get()=([&]()->V{V _callee55718=j::builtin("Map");return j::construct(_callee55718,j::Args{});})();
_v_51318_add.get()=j::function([=](const j::Args &_args_fn51319,const V &_receiver_fn51319,const V &_self_fn51319) mutable ->V{
V _v_51320_owner;
V _v_51321_shape;
_v_51320_owner=_args_fn51319[0];
_v_51321_shape=_args_fn51319[1];
return ([&]()->V{V _receiver55719=([&]()->V{V _logical55722=([&]()->V{V _receiver55723=_v_51317_owners.get();V _method55724=this->_literals[54];V _method=j::get(_receiver55723,_method55724);j::Args _params55725=j::Args{_v_51320_owner};return j::call(_method,_params55725,_receiver55723);})();return j::nullish(_logical55722)?([&]()->V{V _receiver55726=([&]()->V{V _receiver55730=_v_51317_owners.get();V _method55731=this->_literals[123];V _method=j::get(_receiver55730,_method55731);j::Args _params55732=j::Args{_v_51320_owner,([&]()->V{j::Args _array55729;return j::array(std::move(_array55729));})()};return j::call(_method,_params55732,_receiver55730);})();V _method55727=this->_literals[54];V _method=j::get(_receiver55726,_method55727);j::Args _params55728=j::Args{_v_51320_owner};return j::call(_method,_params55728,_receiver55726);})():_logical55722;})();V _method55720=this->_literals[25];V _method=j::get(_receiver55719,_method55720);j::Args _params55721=j::Args{_v_51321_shape};return j::call(_method,_params55721,_receiver55719);})();
return V{};
},2);
if(j::truth(([&]()->V{V _lhs55733=_v_51316_key;V _rhs55734=this->_literals[37];return V(j::equal(_lhs55733,_rhs55734,true));})())){
(void)(([&]()->V{V _receiver55736=j::get(_v_51315_svg,this->_literals[179]);V _method55737=this->_literals[225];V _method=j::get(_receiver55736,_method55737);j::Args _params55738=j::Args{j::function([=](const j::Args &_args_fn51322,const V &_receiver_fn51322,const V &_self_fn51322) mutable ->V{
V _v_51323__;
V _v_51324_i;
_v_51323__=_args_fn51322[0];
_v_51324_i=_args_fn51322[1];
return ([&]()->V{V _callee55735=_v_51318_add.get();return j::call(_callee55735,j::Args{j::unary("-",V(1.0)),_v_51324_i});})();
return V{};
},2)};return j::call(_method,_params55738,_receiver55736);})());
return ([&]()->V{V _obj55739=j::object();j::put(_obj55739,this->_literals[226],_v_51317_owners.get());j::put(_obj55739,this->_literals[227],this->_literals[228]);return _obj55739;})();

}

_v_51325_name.get()=([&]()->V{V _receiver55740=_v_51316_key;V _method55741=this->_literals[8];V _method=j::get(_receiver55740,_method55741);j::Args _params55742=j::Args{V(1.0)};return j::call(_method,_params55742,_receiver55740);})();
_v_51326_byId.get()=([&]()->V{V _lhs55743=j::get(_v_51316_key,V(0.0));V _rhs55744=this->_literals[39];return V(j::equal(_lhs55743,_rhs55744,true));})();
(void)(([&]()->V{V _receiver55755=j::get(_v_51315_svg,this->_literals[179]);V _method55756=this->_literals[225];V _method=j::get(_receiver55755,_method55756);j::Args _params55757=j::Args{j::function([=](const j::Args &_args_fn51327,const V &_receiver_fn51327,const V &_self_fn51327) mutable ->V{
V _v_51328_s;
V _v_51329_i;
_v_51328_s=_args_fn51327[0];
_v_51329_i=_args_fn51327[1];
{
{V _v_51330_k;
_v_51330_k=([&]()->V{V _lhs55745=j::get(j::get(_v_51328_s,this->_literals[181]),this->_literals[5]);V _rhs55746=V(1.0);return V(j::number(_lhs55745)-j::number(_rhs55746));})();
for(;j::truth(([&]()->V{V _lhs55747=_v_51330_k;V _rhs55748=V(0.0);return j::binary(">=",_lhs55747,_rhs55748);})());(void)(j::increment(_v_51330_k,-1,false))){
V _v_51331_c;
_v_51331_c=j::get(j::get(_v_51328_s,this->_literals[181]),_v_51330_k);
if(j::truth((j::truth(_v_51326_byId.get())?([&]()->V{V _lhs55749=j::get(_v_51331_c,this->_literals[44]);V _rhs55750=_v_51325_name.get();return V(j::equal(_lhs55749,_rhs55750,true));})():([&]()->V{V _receiver55751=j::get(_v_51331_c,this->_literals[45]);V _method55752=this->_literals[133];V _method=j::get(_receiver55751,_method55752);j::Args _params55753=j::Args{_v_51325_name.get()};return j::call(_method,_params55753,_receiver55751);})()))){return ([&]()->V{V _callee55754=_v_51318_add.get();return j::call(_callee55754,j::Args{j::get(_v_51331_c,this->_literals[169]),_v_51329_i});})();
}

}
}

}

return V{};
},2)};return j::call(_method,_params55757,_receiver55755);})());
if(j::truth(([&]()->V{V _logical55758=j::get(_v_51317_owners.get(),this->_literals[229]);return !j::truth(_logical55758)?j::unary("!",_v_51326_byId.get()):_logical55758;})())){return ([&]()->V{V _obj55759=j::object();j::put(_obj55759,this->_literals[226],_v_51317_owners.get());j::put(_obj55759,this->_literals[227],(j::truth(_v_51326_byId.get())?this->_literals[44]:this->_literals[132]));return _obj55759;})();
}
_v_51332_colour.get()=(j::truth(([&]()->V{V _receiver55760=j::regexp(u"^#([0-9a-f]{3}|[0-9a-f]{6})$","i");V _method55761=this->_literals[24];V _method=j::get(_receiver55760,_method55761);j::Args _params55762=j::Args{_v_51316_key};return j::call(_method,_params55762,_receiver55760);})())?([&]()->V{V _logical55763=([&]()->V{V _chain55764=this->_v_50554_color.get();V _chain55765=j::call(_chain55764,j::Args{_v_51316_key},V{});if(j::nullish(_chain55765))return V{};V _chain55766=j::get(_chain55765,this->_literals[50]);return _chain55766;})();return j::nullish(_logical55763)?V::null():_logical55763;})():V::null());
if(j::truth(_v_51332_colour.get())){(void)(([&]()->V{V _receiver55776=j::get(_v_51315_svg,this->_literals[179]);V _method55777=this->_literals[225];V _method=j::get(_receiver55776,_method55777);j::Args _params55778=j::Args{j::function([=](const j::Args &_args_fn51333,const V &_receiver_fn51333,const V &_self_fn51333) mutable ->V{
V _v_51334_s;
V _v_51335_i;
_v_51334_s=_args_fn51333[0];
_v_51335_i=_args_fn51333[1];
return ([&]()->V{V _logical55767=([&]()->V{V _logical55768=([&]()->V{V _lhs55769=j::get(_v_51334_s,this->_literals[130]);V _rhs55770=_v_51332_colour.get();return V(j::equal(_lhs55769,_rhs55770,true));})();return !j::truth(_logical55768)?([&]()->V{V _lhs55771=j::get(_v_51334_s,this->_literals[131]);V _rhs55772=_v_51332_colour.get();return V(j::equal(_lhs55771,_rhs55772,true));})():_logical55768;})();return j::truth(_logical55767)?([&]()->V{V _callee55775=_v_51318_add.get();return j::call(_callee55775,j::Args{([&]()->V{V _lhs55773=j::unary("-",V(2.0));V _rhs55774=_v_51335_i;return V(j::number(_lhs55773)-j::number(_rhs55774));})(),_v_51335_i});})():_logical55767;})();
return V{};
},2)};return j::call(_method,_params55778,_receiver55776);})());
}
return ([&]()->V{V _obj55779=j::object();j::put(_obj55779,this->_literals[226],_v_51317_owners.get());j::put(_obj55779,this->_literals[227],this->_literals[230]);return _obj55779;})();

}

return V{};
},2);
this->_v_51336_plan.get()=j::function([=](const j::Args &_args_fn51337,const V &_receiver_fn51337,const V &_self_fn51337) mutable ->V{
j::Cell _v_51338_svg;
j::Cell _v_51339_o;
_v_51338_svg.get()=_args_fn51337[0];
_v_51339_o.get()=_args_fn51337[1];
{
j::Cell _v_51340_aspect;
j::Cell _v_51341_style;
j::Cell _v_51342_shapes;
j::Cell _v_51343_partsOf;
j::Cell _v_51345_owners;
j::Cell _v_51346_rank;
j::Cell _v_51347_KINDS;
j::Cell _v_51369_hidden;
j::Cell _v_51375_last;
V _v_51381_boxOf;
V _v_51390_pivot;
j::Cell _v_51394_movers;
j::Cell _v_51396_ripples;
j::Cell _v_51398_traces;
j::Cell _v_51400_glints;
V _v_51401_periods;
V _v_51402_held;
j::Cell _v_51415_box;
V _v_51416_ink;
V _v_51425_vb;
j::Cell _v_51428_mx;
j::Cell _v_51429_my;
j::Cell _v_51430_sizeFor;
j::Cell _v_51437_fitTo;
j::Cell _v_51445_size;
j::Cell _v_51446_fit;
j::Cell _v_51447_rowUnits;
j::Cell _v_51484_colUnits;
j::Cell _v_51485_cols;
j::Cell _v_51486_rows;
j::Cell _v_51487_sx;
j::Cell _v_51488_sy;
j::Cell _v_51489_ky;
j::Cell _v_51490_toSamples;
j::Cell _v_51491_fromSamples;
j::Cell _v_51492_used;
j::Cell _v_51493_seen;
V _v_51494_want;
j::Cell _v_51498_paints;
j::Cell _v_51499_raw;
j::Cell _v_51500_tol;
j::Cell _v_51501_outline;
V _v_51527_glinting;
j::Cell _v_51528_runs;
j::Cell _v_51529_counts;
V _v_51531_hasInk;
V _v_51534_colours;
V _v_51535_room;
j::Cell _v_51536_merged;
V _v_51537_into;
V _v_51550_rgbs;
j::Cell _v_51561_final;
V _v_51565_coloured;
V _v_51566_knockable;
j::Cell _v_51568_light;
V _v_51569_dark;
V _v_51570_shown;
j::Cell _v_51579_fillCode;
j::Cell _v_51580_groups;
j::Cell _v_51581_groupSlot;
j::Cell _v_51603_changes;
j::Cell _v_51606_moving;
j::Cell _v_51607_firstMoving;
j::Cell _v_51608_textured;
j::Cell _v_51620_partBox;
V _v_51635_draw;
V _pattern55780=_v_51339_o.get();
_v_51340_aspect.get()=j::get(_pattern55780,this->_literals[231]);
_v_51341_style.get()=j::get(_pattern55780,this->_literals[124]);
_v_51342_shapes.get()=j::get(_v_51338_svg.get(),this->_literals[179]);
_v_51343_partsOf.get()=([&]()->V{V _receiver55782=_v_51342_shapes.get();V _method55783=this->_literals[41];V _method=j::get(_receiver55782,_method55783);j::Args _params55784=j::Args{j::function([=](const j::Args &_args_fn51344,const V &_receiver_fn51344,const V &_self_fn51344) mutable ->V{
return ([&]()->V{j::Args _array55781;return j::array(std::move(_array55781));})();
return V{};
},0)};return j::call(_method,_params55784,_receiver55782);})();
_v_51345_owners.get()=([&]()->V{V _callee55785=j::builtin("Map");return j::construct(_callee55785,j::Args{});})();
_v_51346_rank.get()=([&]()->V{V _callee55786=j::builtin("Float64Array");return j::construct(_callee55786,j::Args{j::get(j::get(_v_51339_o.get(),this->_literals[184]),this->_literals[5])});})();
_v_51347_KINDS.get()=([&]()->V{V _obj55787=j::object();j::put(_obj55787,this->_literals[228],V(0.0));j::put(_obj55787,this->_literals[230],V(1.0));j::put(_obj55787,this->_literals[132],V(2.0));j::put(_obj55787,this->_literals[44],V(3.0));return _obj55787;})();
(void)(([&]()->V{V _receiver55836=j::get(_v_51339_o.get(),this->_literals[184]);V _method55837=this->_literals[225];V _method=j::get(_receiver55836,_method55837);j::Args _params55838=j::Args{j::function([=](const j::Args &_args_fn51348,const V &_receiver_fn51348,const V &_self_fn51348) mutable ->V{
V _v_51349_p;
V _v_51350_pi;
_v_51349_p=_args_fn51348[0];
_v_51350_pi=_args_fn51348[1];
{
V _v_51351_found;
V _v_51352_kind;
V _v_51356_index;
V _pattern55789=([&]()->V{V _callee55788=this->_v_51313_matches.get();return j::call(_callee55788,j::Args{_v_51338_svg.get(),j::get(_v_51349_p,this->_literals[208])});})();
_v_51351_found=j::get(_pattern55789,this->_literals[226]);
_v_51352_kind=j::get(_pattern55789,this->_literals[227]);
(void)(([&]()->V{V _base55791=_v_51346_rank.get();V _key55792=_v_51350_pi;V _assign55790=([&]()->V{V _lhs55793=([&]()->V{V _lhs55795=j::get(_v_51347_KINDS.get(),_v_51352_kind);V _rhs55796=j::get(j::get(_v_51339_o.get(),this->_literals[184]),this->_literals[5]);return V(j::number(_lhs55795)*j::number(_rhs55796));})();V _rhs55794=j::get(_v_51349_p,this->_literals[46]);return j::binary("+",_lhs55793,_rhs55794);})();return j::put(_base55791,_key55792,_assign55790);})());
if(j::truth(j::unary("!",j::get(_v_51351_found,this->_literals[229])))){
V _v_51353_known;
_v_51353_known=(j::truth(j::get(j::get(_v_51338_svg.get(),this->_literals[184]),this->_literals[5]))?([&]()->V{std::u16string _text55797;_text55797+=u"it has ";_text55797+=j::string(([&]()->V{V _callee55807=this->_v_50445_and.get();return j::call(_callee55807,j::Args{([&]()->V{V _receiver55801=([&]()->V{V _receiver55804=j::get(_v_51338_svg.get(),this->_literals[184]);V _method55805=this->_literals[8];V _method=j::get(_receiver55804,_method55805);j::Args _params55806=j::Args{V(0.0),V(12.0)};return j::call(_method,_params55806,_receiver55804);})();V _method55802=this->_literals[41];V _method=j::get(_receiver55801,_method55802);j::Args _params55803=j::Args{j::function([=](const j::Args &_args_fn51354,const V &_receiver_fn51354,const V &_self_fn51354) mutable ->V{
V _v_51355_k;
_v_51355_k=_args_fn51354[0];
return ([&]()->V{V _receiver55798=j::builtin("JSON");V _method55799=this->_literals[215];V _method=j::get(_receiver55798,_method55799);j::Args _params55800=j::Args{_v_51355_k};return j::call(_method,_params55800,_receiver55798);})();
return V{};
},1)};return j::call(_method,_params55803,_receiver55801);})()});})());_text55797+=u"";_text55797+=j::string((j::truth(([&]()->V{V _lhs55808=j::get(j::get(_v_51338_svg.get(),this->_literals[184]),this->_literals[5]);V _rhs55809=V(12.0);return j::binary(">",_lhs55808,_rhs55809);})())?this->_literals[232]:this->_literals[1]));_text55797+=u"";return V(std::move(_text55797));})():this->_literals[233]);
(void)(([&]()->V{V _callee55814=this->_v_50450_fail.get();return j::call(_callee55814,j::Args{([&]()->V{std::u16string _text55810;_text55810+=u"fromSvg's part ";_text55810+=j::string(([&]()->V{V _receiver55811=j::builtin("JSON");V _method55812=this->_literals[215];V _method=j::get(_receiver55811,_method55812);j::Args _params55813=j::Args{j::get(_v_51349_p,this->_literals[208])};return j::call(_method,_params55813,_receiver55811);})());_text55810+=u" names nothing in this svg: ";_text55810+=j::string(_v_51353_known);_text55810+=u"";return V(std::move(_text55810));})()});})());

}

_v_51356_index=V(0.0);
{for(const auto &_item55815:j::elements(_v_51351_found)){j::Cell _v_51357_owner;
V _v_51358_list;
V _pattern55816=_item55815;
_v_51357_owner.get()=j::get(_pattern55816,V(0));
_v_51358_list=j::get(_pattern55816,V(1));
{
V _v_51359_k;
V _v_51360_chain;
V _v_51361_depth;
_v_51359_k=([&]()->V{std::u16string _text55817;_text55817+=u"";_text55817+=j::string(_v_51350_pi);_text55817+=u":";_text55817+=j::string(_v_51357_owner.get());_text55817+=u"";return V(std::move(_text55817));})();
_v_51360_chain=j::get(j::get(j::get(_v_51338_svg.get(),this->_literals[179]),j::get(_v_51358_list,V(0.0))),this->_literals[181]);
_v_51361_depth=(j::truth(([&]()->V{V _lhs55818=_v_51357_owner.get();V _rhs55819=j::unary("-",V(1.0));return V(j::equal(_lhs55818,_rhs55819,true));})())?j::unary("-",V(1.0)):(j::truth(([&]()->V{V _lhs55820=_v_51357_owner.get();V _rhs55821=j::unary("-",V(2.0));return j::binary("<=",_lhs55820,_rhs55821);})())?j::get(_v_51360_chain,this->_literals[5]):([&]()->V{V _receiver55824=_v_51360_chain;V _method55825=this->_literals[234];V _method=j::get(_receiver55824,_method55825);j::Args _params55826=j::Args{j::function([=](const j::Args &_args_fn51362,const V &_receiver_fn51362,const V &_self_fn51362) mutable ->V{
V _v_51363_c;
_v_51363_c=_args_fn51362[0];
return ([&]()->V{V _lhs55822=j::get(_v_51363_c,this->_literals[169]);V _rhs55823=_v_51357_owner.get();return V(j::equal(_lhs55822,_rhs55823,true));})();
return V{};
},1)};return j::call(_method,_params55826,_receiver55824);})()));
(void)(([&]()->V{V _receiver55828=_v_51345_owners.get();V _method55829=this->_literals[123];V _method=j::get(_receiver55828,_method55829);j::Args _params55830=j::Args{_v_51359_k,([&]()->V{V _obj55827=j::object();j::put(_obj55827,this->_literals[235],_v_51350_pi);j::put(_obj55827,this->_literals[179],_v_51358_list);j::put(_obj55827,this->_literals[169],j::increment(_v_51356_index,1,false));j::put(_obj55827,this->_literals[236],j::get(_v_51351_found,this->_literals[229]));j::put(_obj55827,this->_literals[237],_v_51361_depth);return _obj55827;})()};return j::call(_method,_params55830,_receiver55828);})());
{for(const auto &_item55831:j::elements(_v_51358_list)){V _v_51364_s;
_v_51364_s=_item55831;
(void)(([&]()->V{V _receiver55833=j::get(_v_51343_partsOf.get(),_v_51364_s);V _method55834=this->_literals[25];V _method=j::get(_receiver55833,_method55834);j::Args _params55835=j::Args{([&]()->V{V _obj55832=j::object();j::put(_obj55832,this->_literals[235],_v_51350_pi);j::put(_obj55832,this->_literals[238],_v_51357_owner.get());return _obj55832;})()};return j::call(_method,_params55835,_receiver55833);})());
}}

}
}}

}

return V{};
},2)};return j::call(_method,_params55838,_receiver55836);})());
{for(const auto &_item55839:j::elements(_v_51343_partsOf.get())){V _v_51365_list;
_v_51365_list=_item55839;
(void)(([&]()->V{V _receiver55842=_v_51365_list;V _method55843=this->_literals[128];V _method=j::get(_receiver55842,_method55843);j::Args _params55844=j::Args{j::function([=](const j::Args &_args_fn51366,const V &_receiver_fn51366,const V &_self_fn51366) mutable ->V{
V _v_51367_a;
V _v_51368_b;
_v_51367_a=_args_fn51366[0];
_v_51368_b=_args_fn51366[1];
return ([&]()->V{V _lhs55840=j::get(_v_51346_rank.get(),j::get(_v_51367_a,this->_literals[235]));V _rhs55841=j::get(_v_51346_rank.get(),j::get(_v_51368_b,this->_literals[235]));return V(j::number(_lhs55840)-j::number(_rhs55841));})();
return V{};
},2)};return j::call(_method,_params55844,_receiver55842);})());
}}
_v_51369_hidden.get()=([&]()->V{V _receiver55848=_v_51342_shapes.get();V _method55849=this->_literals[41];V _method=j::get(_receiver55848,_method55849);j::Args _params55850=j::Args{j::function([=](const j::Args &_args_fn51370,const V &_receiver_fn51370,const V &_self_fn51370) mutable ->V{
V _v_51371__;
V _v_51372_i;
_v_51371__=_args_fn51370[0];
_v_51372_i=_args_fn51370[1];
return ([&]()->V{V _receiver55845=j::get(_v_51343_partsOf.get(),_v_51372_i);V _method55846=this->_literals[58];V _method=j::get(_receiver55845,_method55846);j::Args _params55847=j::Args{j::function([=](const j::Args &_args_fn51373,const V &_receiver_fn51373,const V &_self_fn51373) mutable ->V{
V _v_51374_p;
_v_51374_p=_args_fn51373[0];
return j::get(j::get(j::get(_v_51339_o.get(),this->_literals[184]),j::get(_v_51374_p,this->_literals[235])),this->_literals[213]);
return V{};
},1)};return j::call(_method,_params55847,_receiver55845);})();
return V{};
},2)};return j::call(_method,_params55850,_receiver55848);})();
_v_51375_last.get()=j::function([=](const j::Args &_args_fn51376,const V &_receiver_fn51376,const V &_self_fn51376) mutable ->V{
V _v_51377_i;
V _v_51378_k;
_v_51377_i=_args_fn51376[0];
_v_51378_k=_args_fn51376[1];
{
V _v_51379_v;
_v_51379_v=V::null();
{for(const auto &_item55851:j::elements(j::get(_v_51343_partsOf.get(),_v_51377_i))){V _v_51380_p;
_v_51380_p=_item55851;
if(j::truth(([&]()->V{V _logical55852=([&]()->V{V _lhs55853=j::get(j::get(j::get(_v_51339_o.get(),this->_literals[184]),j::get(_v_51380_p,this->_literals[235])),_v_51378_k);V _rhs55854=V::null();return V(!j::equal(_lhs55853,_rhs55854,true));})();return j::truth(_logical55852)?([&]()->V{V _lhs55855=j::get(j::get(j::get(_v_51339_o.get(),this->_literals[184]),j::get(_v_51380_p,this->_literals[235])),_v_51378_k);V _rhs55856=V(false);return V(!j::equal(_lhs55855,_rhs55856,true));})():_logical55852;})())){(void)((_v_51379_v=j::get(j::get(j::get(_v_51339_o.get(),this->_literals[184]),j::get(_v_51380_p,this->_literals[235])),_v_51378_k)));
}
}}
return _v_51379_v;

}

return V{};
},2);
_v_51381_boxOf=j::function([=](const j::Args &_args_fn51382,const V &_receiver_fn51382,const V &_self_fn51382) mutable ->V{
V _v_51383_list;
_v_51383_list=_args_fn51382[0];
{
V _v_51384_x0;
V _v_51385_y0;
V _v_51386_x1;
V _v_51387_y1;
_v_51384_x0=j::builtin("Infinity");
_v_51385_y0=j::builtin("Infinity");
_v_51386_x1=j::unary("-",j::builtin("Infinity"));
_v_51387_y1=j::unary("-",j::builtin("Infinity"));
{for(const auto &_item55858:j::elements(_v_51383_list)){V _v_51388_i;
_v_51388_i=_item55858;
{
V _v_51389_b;
_v_51389_b=j::get(j::get(_v_51342_shapes.get(),_v_51388_i),this->_literals[183]);
(void)((_v_51384_x0=([&]()->V{V _receiver55862=j::builtin("Math");V _method55863=this->_literals[116];V _method=j::get(_receiver55862,_method55863);j::Args _params55864=j::Args{_v_51384_x0,j::get(_v_51389_b,V(0.0))};return j::call(_method,_params55864,_receiver55862);})()));
(void)((_v_51385_y0=([&]()->V{V _receiver55868=j::builtin("Math");V _method55869=this->_literals[116];V _method=j::get(_receiver55868,_method55869);j::Args _params55870=j::Args{_v_51385_y0,j::get(_v_51389_b,V(1.0))};return j::call(_method,_params55870,_receiver55868);})()));
(void)((_v_51386_x1=([&]()->V{V _receiver55876=j::builtin("Math");V _method55877=this->_literals[66];V _method=j::get(_receiver55876,_method55877);j::Args _params55878=j::Args{_v_51386_x1,([&]()->V{V _lhs55872=j::get(_v_51389_b,V(0.0));V _rhs55873=j::get(_v_51389_b,V(2.0));return j::binary("+",_lhs55872,_rhs55873);})()};return j::call(_method,_params55878,_receiver55876);})()));
(void)((_v_51387_y1=([&]()->V{V _receiver55884=j::builtin("Math");V _method55885=this->_literals[66];V _method=j::get(_receiver55884,_method55885);j::Args _params55886=j::Args{_v_51387_y1,([&]()->V{V _lhs55880=j::get(_v_51389_b,V(1.0));V _rhs55881=j::get(_v_51389_b,V(3.0));return j::binary("+",_lhs55880,_rhs55881);})()};return j::call(_method,_params55886,_receiver55884);})()));

}
}}
return ([&]()->V{V _obj55887=j::object();j::put(_obj55887,this->_literals[239],_v_51384_x0);j::put(_obj55887,this->_literals[240],_v_51385_y0);j::put(_obj55887,this->_literals[108],_v_51386_x1);j::put(_obj55887,this->_literals[109],_v_51387_y1);return _obj55887;})();

}

return V{};
},1);
_v_51390_pivot=j::function([=](const j::Args &_args_fn51391,const V &_receiver_fn51391,const V &_self_fn51391) mutable ->V{
V _v_51392_b;
V _v_51393_g;
_v_51392_b=_args_fn51391[0];
_v_51393_g=_args_fn51391[1];
return (j::truth(([&]()->V{V _lhs55888=j::unary("typeof",_v_51393_g);V _rhs55889=this->_literals[117];return V(j::equal(_lhs55888,_rhs55889,true));})())?([&]()->V{V _obj55890=j::object();j::put(_obj55890,this->_literals[194],(j::truth(([&]()->V{V _receiver55891=_v_51393_g;V _method55892=this->_literals[133];V _method=j::get(_receiver55891,_method55892);j::Args _params55893=j::Args{this->_literals[241]};return j::call(_method,_params55893,_receiver55891);})())?j::get(_v_51392_b,this->_literals[239]):(j::truth(([&]()->V{V _receiver55894=_v_51393_g;V _method55895=this->_literals[133];V _method=j::get(_receiver55894,_method55895);j::Args _params55896=j::Args{this->_literals[242]};return j::call(_method,_params55896,_receiver55894);})())?j::get(_v_51392_b,this->_literals[108]):([&]()->V{V _lhs55897=([&]()->V{V _lhs55899=j::get(_v_51392_b,this->_literals[239]);V _rhs55900=j::get(_v_51392_b,this->_literals[108]);return j::binary("+",_lhs55899,_rhs55900);})();V _rhs55898=V(2.0);return V(j::number(_lhs55897)/j::number(_rhs55898));})())));j::put(_obj55890,this->_literals[195],(j::truth(([&]()->V{V _receiver55901=_v_51393_g;V _method55902=this->_literals[133];V _method=j::get(_receiver55901,_method55902);j::Args _params55903=j::Args{this->_literals[243]};return j::call(_method,_params55903,_receiver55901);})())?j::get(_v_51392_b,this->_literals[240]):(j::truth(([&]()->V{V _receiver55904=_v_51393_g;V _method55905=this->_literals[133];V _method=j::get(_receiver55904,_method55905);j::Args _params55906=j::Args{this->_literals[244]};return j::call(_method,_params55906,_receiver55904);})())?j::get(_v_51392_b,this->_literals[109]):([&]()->V{V _lhs55907=([&]()->V{V _lhs55909=j::get(_v_51392_b,this->_literals[240]);V _rhs55910=j::get(_v_51392_b,this->_literals[109]);return j::binary("+",_lhs55909,_rhs55910);})();V _rhs55908=V(2.0);return V(j::number(_lhs55907)/j::number(_rhs55908));})())));return _obj55890;})():([&]()->V{V _obj55911=j::object();j::put(_obj55911,this->_literals[194],j::get(_v_51393_g,V(0.0)));j::put(_obj55911,this->_literals[195],j::get(_v_51393_g,V(1.0)));return _obj55911;})());
return V{};
},2);
_v_51394_movers.get()=([&]()->V{V _receiver55913=_v_51342_shapes.get();V _method55914=this->_literals[41];V _method=j::get(_receiver55913,_method55914);j::Args _params55915=j::Args{j::function([=](const j::Args &_args_fn51395,const V &_receiver_fn51395,const V &_self_fn51395) mutable ->V{
return ([&]()->V{j::Args _array55912;return j::array(std::move(_array55912));})();
return V{};
},0)};return j::call(_method,_params55915,_receiver55913);})();
_v_51396_ripples.get()=([&]()->V{V _receiver55916=_v_51342_shapes.get();V _method55917=this->_literals[41];V _method=j::get(_receiver55916,_method55917);j::Args _params55918=j::Args{j::function([=](const j::Args &_args_fn51397,const V &_receiver_fn51397,const V &_self_fn51397) mutable ->V{
return V::null();
return V{};
},0)};return j::call(_method,_params55918,_receiver55916);})();
_v_51398_traces.get()=([&]()->V{V _receiver55919=_v_51342_shapes.get();V _method55920=this->_literals[41];V _method=j::get(_receiver55919,_method55920);j::Args _params55921=j::Args{j::function([=](const j::Args &_args_fn51399,const V &_receiver_fn51399,const V &_self_fn51399) mutable ->V{
return V::null();
return V{};
},0)};return j::call(_method,_params55921,_receiver55919);})();
_v_51400_glints.get()=([&]()->V{V _callee55922=j::builtin("Map");return j::construct(_callee55922,j::Args{});})();
_v_51401_periods=([&]()->V{j::Args _array55923;return j::array(std::move(_array55923));})();
{for(const auto &_item55924:j::elements(_v_51345_owners.get())){V _v_51403_ow;
V _pattern55925=_item55924;
_v_51403_ow=j::get(_pattern55925,V(1));
{
V _v_51404_p;
V _v_51405_box;
_v_51404_p=j::get(j::get(_v_51339_o.get(),this->_literals[184]),j::get(_v_51403_ow,this->_literals[235]));
_v_51405_box=([&]()->V{V _callee55926=_v_51381_boxOf;return j::call(_callee55926,j::Args{j::get(_v_51403_ow,this->_literals[179])});})();
{for(const auto &_item55927:j::elements(j::get(_v_51404_p,this->_literals[209]))){V _v_51406_m;
_v_51406_m=_item55927;
{
V _v_51407_stagger;
V _v_51408_at;
V _v_51409_mover;
(void)(([&]()->V{V _receiver55928=_v_51401_periods;V _method55929=this->_literals[25];V _method=j::get(_receiver55928,_method55929);j::Args _params55930=j::Args{j::get(_v_51406_m,this->_literals[193])};return j::call(_method,_params55930,_receiver55928);})());
_v_51407_stagger=(j::truth(([&]()->V{V _receiver55931=j::builtin("Number");V _method55932=this->_literals[71];V _method=j::get(_receiver55931,_method55932);j::Args _params55933=j::Args{j::get(_v_51406_m,this->_literals[219])};return j::call(_method,_params55933,_receiver55931);})())?([&]()->V{V _lhs55934=j::get(_v_51406_m,this->_literals[193]);V _rhs55935=j::get(_v_51403_ow,this->_literals[236]);return V(j::number(_lhs55934)/j::number(_rhs55935));})():j::get(_v_51406_m,this->_literals[219]));
_v_51408_at=([&]()->V{V _callee55939=_v_51390_pivot;return j::call(_callee55939,j::Args{_v_51405_box,([&]()->V{V _logical55936=j::get(_v_51404_p,this->_literals[210]);return j::nullish(_logical55936)?(j::truth(([&]()->V{V _lhs55937=j::get(_v_51406_m,this->_literals[196]);V _rhs55938=this->_literals[201];return V(j::equal(_lhs55937,_rhs55938,true));})())?this->_literals[244]:this->_literals[245]):_logical55936;})()});})();
_v_51409_mover=([&]()->V{V _obj55940=j::object();j::put(_obj55940,this->_literals[196],j::get(_v_51406_m,this->_literals[196]));j::put(_obj55940,this->_literals[206],j::get(_v_51406_m,this->_literals[206]));j::put(_obj55940,this->_literals[193],j::get(_v_51406_m,this->_literals[193]));j::put(_obj55940,this->_literals[205],j::get(_v_51406_m,this->_literals[205]));j::put(_obj55940,this->_literals[192],([&]()->V{V _lhs55941=j::get(_v_51406_m,this->_literals[192]);V _rhs55942=([&]()->V{V _lhs55943=_v_51407_stagger;V _rhs55944=j::get(_v_51403_ow,this->_literals[169]);return V(j::number(_lhs55943)*j::number(_rhs55944));})();return j::binary("+",_lhs55941,_rhs55942);})());j::put(_obj55940,this->_literals[237],j::get(_v_51403_ow,this->_literals[237]));V _spread55945=_v_51405_box;for(const auto &_key:j::keys(_spread55945))j::put(_obj55940,_key,j::get(_spread55945,_key));V _spread55946=_v_51408_at;for(const auto &_key:j::keys(_spread55946))j::put(_obj55940,_key,j::get(_spread55946,_key));return _obj55940;})();
if(j::truth(([&]()->V{V _lhs55947=j::get(_v_51406_m,this->_literals[196]);V _rhs55948=this->_literals[246];return V(j::equal(_lhs55947,_rhs55948,true));})())){
(void)(([&]()->V{V _receiver55950=_v_51400_glints.get();V _method55951=this->_literals[123];V _method=j::get(_receiver55950,_method55951);j::Args _params55952=j::Args{j::get(_v_51403_ow,this->_literals[235]),([&]()->V{V _obj55949=j::object();j::put(_obj55949,this->_literals[134],j::get(_v_51406_m,this->_literals[193]));j::put(_obj55949,this->_literals[192],j::get(_v_51406_m,this->_literals[192]));return _obj55949;})()};return j::call(_method,_params55952,_receiver55950);})());
continue;

}

if(j::truth(([&]()->V{V _lhs55953=j::get(_v_51406_m,this->_literals[196]);V _rhs55954=this->_literals[247];return V(j::equal(_lhs55953,_rhs55954,true));})())){(void)((j::nullish(_v_51402_held)?(_v_51402_held=([&]()->V{V _lhs55956=([&]()->V{V _lhs55958=([&]()->V{V _lhs55960=([&]()->V{V _lhs55962=([&]()->V{V _lhs55964=this->_v_50984_TRACE_HELD.get();V _rhs55965=j::get(_v_51406_m,this->_literals[193]);return V(j::number(_lhs55964)*j::number(_rhs55965));})();V _rhs55963=j::get(_v_51409_mover,this->_literals[192]);return V(j::number(_lhs55962)-j::number(_rhs55963));})();V _rhs55961=j::get(_v_51406_m,this->_literals[193]);return V(std::fmod(j::number(_lhs55960),j::number(_rhs55961)));})();V _rhs55959=j::get(_v_51406_m,this->_literals[193]);return j::binary("+",_lhs55958,_rhs55959);})();V _rhs55957=j::get(_v_51406_m,this->_literals[193]);return V(std::fmod(j::number(_lhs55956),j::number(_rhs55957)));})()):_v_51402_held));
}
{for(const auto &_item55966:j::elements(j::get(_v_51403_ow,this->_literals[179]))){V _v_51410_s;
_v_51410_s=_item55966;
{
if(j::truth(([&]()->V{V _lhs55967=j::get(_v_51406_m,this->_literals[196]);V _rhs55968=this->_literals[248];return V(j::equal(_lhs55967,_rhs55968,true));})())){(void)(([&]()->V{V _base55970=_v_51396_ripples.get();V _key55971=_v_51410_s;V _assign55969=_v_51409_mover;return j::put(_base55970,_key55971,_assign55969);})());
}else {if(j::truth(([&]()->V{V _lhs55972=j::get(_v_51406_m,this->_literals[196]);V _rhs55973=this->_literals[247];return V(j::equal(_lhs55972,_rhs55973,true));})())){(void)(([&]()->V{V _base55975=_v_51398_traces.get();V _key55976=_v_51410_s;V _assign55974=_v_51409_mover;return j::put(_base55975,_key55976,_assign55974);})());
}else {(void)(([&]()->V{V _receiver55977=j::get(_v_51394_movers.get(),_v_51410_s);V _method55978=this->_literals[25];V _method=j::get(_receiver55977,_method55978);j::Args _params55979=j::Args{_v_51409_mover};return j::call(_method,_params55979,_receiver55977);})());
}
}

}
}}

}
}}

}
}}
{for(const auto &_item55980:j::elements(_v_51394_movers.get())){V _v_51411_list;
_v_51411_list=_item55980;
(void)(([&]()->V{V _receiver55983=_v_51411_list;V _method55984=this->_literals[128];V _method=j::get(_receiver55983,_method55984);j::Args _params55985=j::Args{j::function([=](const j::Args &_args_fn51412,const V &_receiver_fn51412,const V &_self_fn51412) mutable ->V{
V _v_51413_a;
V _v_51414_b;
_v_51413_a=_args_fn51412[0];
_v_51414_b=_args_fn51412[1];
return ([&]()->V{V _lhs55981=j::get(_v_51414_b,this->_literals[237]);V _rhs55982=j::get(_v_51413_a,this->_literals[237]);return V(j::number(_lhs55981)-j::number(_rhs55982));})();
return V{};
},2)};return j::call(_method,_params55985,_receiver55983);})());
}}
_v_51416_ink=j::function([=](const j::Args &_args_fn51417,const V &_receiver_fn51417,const V &_self_fn51417) mutable ->V{
{
j::Cell _v_51418_x0;
j::Cell _v_51419_y0;
j::Cell _v_51420_x1;
j::Cell _v_51421_y1;
_v_51418_x0.get()=j::builtin("Infinity");
_v_51419_y0.get()=j::builtin("Infinity");
_v_51420_x1.get()=j::unary("-",j::builtin("Infinity"));
_v_51421_y1.get()=j::unary("-",j::builtin("Infinity"));
(void)(([&]()->V{V _receiver56014=_v_51342_shapes.get();V _method56015=this->_literals[225];V _method=j::get(_receiver56014,_method56015);j::Args _params56016=j::Args{j::function([=](const j::Args &_args_fn51422,const V &_receiver_fn51422,const V &_self_fn51422) mutable ->V{
V _v_51423_s;
V _v_51424_i;
_v_51423_s=_args_fn51422[0];
_v_51424_i=_args_fn51422[1];
{
if(j::truth(j::get(_v_51369_hidden.get(),_v_51424_i))){return V{};
}
(void)((_v_51418_x0.get()=([&]()->V{V _receiver55989=j::builtin("Math");V _method55990=this->_literals[116];V _method=j::get(_receiver55989,_method55990);j::Args _params55991=j::Args{_v_51418_x0.get(),j::get(j::get(_v_51423_s,this->_literals[183]),V(0.0))};return j::call(_method,_params55991,_receiver55989);})()));
(void)((_v_51419_y0.get()=([&]()->V{V _receiver55995=j::builtin("Math");V _method55996=this->_literals[116];V _method=j::get(_receiver55995,_method55996);j::Args _params55997=j::Args{_v_51419_y0.get(),j::get(j::get(_v_51423_s,this->_literals[183]),V(1.0))};return j::call(_method,_params55997,_receiver55995);})()));
(void)((_v_51420_x1.get()=([&]()->V{V _receiver56003=j::builtin("Math");V _method56004=this->_literals[66];V _method=j::get(_receiver56003,_method56004);j::Args _params56005=j::Args{_v_51420_x1.get(),([&]()->V{V _lhs55999=j::get(j::get(_v_51423_s,this->_literals[183]),V(0.0));V _rhs56000=j::get(j::get(_v_51423_s,this->_literals[183]),V(2.0));return j::binary("+",_lhs55999,_rhs56000);})()};return j::call(_method,_params56005,_receiver56003);})()));
(void)((_v_51421_y1.get()=([&]()->V{V _receiver56011=j::builtin("Math");V _method56012=this->_literals[66];V _method=j::get(_receiver56011,_method56012);j::Args _params56013=j::Args{_v_51421_y1.get(),([&]()->V{V _lhs56007=j::get(j::get(_v_51423_s,this->_literals[183]),V(1.0));V _rhs56008=j::get(j::get(_v_51423_s,this->_literals[183]),V(3.0));return j::binary("+",_lhs56007,_rhs56008);})()};return j::call(_method,_params56013,_receiver56011);})()));

}

return V{};
},2)};return j::call(_method,_params56016,_receiver56014);})());
return (j::truth(([&]()->V{V _lhs56017=_v_51420_x1.get();V _rhs56018=_v_51418_x0.get();return j::binary("<",_lhs56017,_rhs56018);})())?V::null():([&]()->V{j::Args _array56019;_array56019.push_back(_v_51418_x0.get());_array56019.push_back(_v_51419_y0.get());_array56019.push_back(([&]()->V{V _lhs56020=_v_51420_x1.get();V _rhs56021=_v_51418_x0.get();return V(j::number(_lhs56020)-j::number(_rhs56021));})());_array56019.push_back(([&]()->V{V _lhs56022=_v_51421_y1.get();V _rhs56023=_v_51419_y0.get();return V(j::number(_lhs56022)-j::number(_rhs56023));})());return j::array(std::move(_array56019));})());

}

return V{};
},0);
_v_51425_vb=j::get(_v_51338_svg.get(),this->_literals[129]);
if(j::truth(([&]()->V{V _lhs56024=j::get(_v_51339_o.get(),this->_literals[249]);V _rhs56025=this->_literals[129];return V(j::equal(_lhs56024,_rhs56025,true));})())){(void)((_v_51415_box.get()=([&]()->V{j::Args _array56027;_array56027.push_back(j::get(_v_51425_vb,V(0.0)));_array56027.push_back(j::get(_v_51425_vb,V(1.0)));_array56027.push_back(j::get(_v_51425_vb,V(2.0)));_array56027.push_back(j::get(_v_51425_vb,V(3.0)));return j::array(std::move(_array56027));})()));
}else {
V _v_51426_b;
_v_51426_b=([&]()->V{V _callee56028=_v_51416_ink;return j::call(_callee56028,j::Args{});})();
if(j::truth(j::unary("!",_v_51426_b))){
V _v_51427_left;
_v_51427_left=(j::truth(([&]()->V{V _chain56029=_v_51338_svg.get();V _chain56030=j::get(_chain56029,this->_literals[185]);if(j::nullish(_chain56030))return V{};V _chain56031=j::get(_chain56030,this->_literals[5]);return _chain56031;})())?([&]()->V{std::u16string _text56032;_text56032+=u" (it has ";_text56032+=j::string(([&]()->V{V _callee56033=this->_v_50445_and.get();return j::call(_callee56033,j::Args{j::get(_v_51338_svg.get(),this->_literals[185])});})());_text56032+=u", which fromSvg leaves out: turn text to outlines in your editor before you export)";return V(std::move(_text56032));})():this->_literals[1]);
(void)(([&]()->V{V _callee56035=this->_v_50450_fail.get();return j::call(_callee56035,j::Args{([&]()->V{std::u16string _text56034;_text56034+=u"fromSvg found nothing to draw in this svg: no path, rect, circle, ellipse, line, polyline or polygon with a fill or a stroke";_text56034+=j::string(_v_51427_left);_text56034+=u"";return V(std::move(_text56034));})()});})());

}

(void)((_v_51415_box.get()=_v_51426_b));

}

V _pattern56037=j::get(_v_51339_o.get(),this->_literals[250]);
_v_51428_mx.get()=j::get(_pattern56037,V(0));
_v_51429_my.get()=j::get(_pattern56037,V(1));
_v_51430_sizeFor.get()=j::function([=](const j::Args &_args_fn51431,const V &_receiver_fn51431,const V &_self_fn51431) mutable ->V{
V _v_51432_b;
_v_51432_b=_args_fn51431[0];
{
V _v_51433_cols;
V _v_51434_rows;
V _v_51435_w;
V _v_51436_h;
_v_51435_w=([&]()->V{V _receiver56040=j::builtin("Math");V _method56041=this->_literals[66];V _method=j::get(_receiver56040,_method56041);j::Args _params56042=j::Args{j::get(_v_51432_b,V(2.0)),V(1e-9)};return j::call(_method,_params56042,_receiver56040);})();
_v_51436_h=([&]()->V{V _receiver56045=j::builtin("Math");V _method56046=this->_literals[66];V _method=j::get(_receiver56045,_method56046);j::Args _params56047=j::Args{j::get(_v_51432_b,V(3.0)),V(1e-9)};return j::call(_method,_params56047,_receiver56045);})();
if(j::truth(([&]()->V{V _logical56048=([&]()->V{V _lhs56049=j::get(_v_51339_o.get(),this->_literals[251]);V _rhs56050=j::builtin("undefined");return V(!j::equal(_lhs56049,_rhs56050,true));})();return j::truth(_logical56048)?([&]()->V{V _lhs56051=j::get(_v_51339_o.get(),this->_literals[252]);V _rhs56052=j::builtin("undefined");return V(!j::equal(_lhs56051,_rhs56052,true));})():_logical56048;})())){(void)(((_v_51433_cols=j::get(_v_51339_o.get(),this->_literals[251])),(_v_51434_rows=j::get(_v_51339_o.get(),this->_literals[252]))));
}else {if(j::truth(([&]()->V{V _lhs56055=j::get(_v_51339_o.get(),this->_literals[252]);V _rhs56056=j::builtin("undefined");return V(!j::equal(_lhs56055,_rhs56056,true));})())){
(void)((_v_51434_rows=j::get(_v_51339_o.get(),this->_literals[252])));
(void)((_v_51433_cols=([&]()->V{V _lhs56059=([&]()->V{V _receiver56084=j::builtin("Math");V _method56085=this->_literals[66];V _method=j::get(_receiver56084,_method56085);j::Args _params56086=j::Args{V(1.0),([&]()->V{V _number56071=([&]()->V{V _lhs56072=([&]()->V{V _lhs56074=([&]()->V{V _lhs56076=([&]()->V{V _lhs56078=_v_51434_rows;V _rhs56079=([&]()->V{V _lhs56080=V(2.0);V _rhs56081=_v_51429_my.get();return V(j::number(_lhs56080)*j::number(_rhs56081));})();return V(j::number(_lhs56078)-j::number(_rhs56079));})();V _rhs56077=_v_51340_aspect.get();return V(j::number(_lhs56076)*j::number(_rhs56077));})();V _rhs56075=_v_51435_w;return V(j::number(_lhs56074)*j::number(_rhs56075));})();V _rhs56073=_v_51436_h;return V(j::number(_lhs56072)/j::number(_rhs56073));})();return V(std::floor(j::number(_number56071)+.5));})()};return j::call(_method,_params56086,_receiver56084);})();V _rhs56060=([&]()->V{V _lhs56087=V(2.0);V _rhs56088=_v_51428_mx.get();return V(j::number(_lhs56087)*j::number(_rhs56088));})();return j::binary("+",_lhs56059,_rhs56060);})()));

}
else {
(void)((_v_51433_cols=([&]()->V{V _logical56090=([&]()->V{V _logical56091=j::get(_v_51339_o.get(),this->_literals[251]);return j::nullish(_logical56091)?j::get(_v_51339_o.get(),this->_literals[100]):_logical56091;})();return j::nullish(_logical56090)?V(48.0):_logical56090;})()));
(void)((_v_51434_rows=([&]()->V{V _lhs56093=([&]()->V{V _receiver56118=j::builtin("Math");V _method56119=this->_literals[66];V _method=j::get(_receiver56118,_method56119);j::Args _params56120=j::Args{V(1.0),([&]()->V{V _number56105=([&]()->V{V _lhs56106=([&]()->V{V _lhs56108=([&]()->V{V _lhs56110=_v_51433_cols;V _rhs56111=([&]()->V{V _lhs56112=V(2.0);V _rhs56113=_v_51428_mx.get();return V(j::number(_lhs56112)*j::number(_rhs56113));})();return V(j::number(_lhs56110)-j::number(_rhs56111));})();V _rhs56109=([&]()->V{V _lhs56114=_v_51436_h;V _rhs56115=_v_51435_w;return V(j::number(_lhs56114)/j::number(_rhs56115));})();return V(j::number(_lhs56108)*j::number(_rhs56109));})();V _rhs56107=_v_51340_aspect.get();return V(j::number(_lhs56106)/j::number(_rhs56107));})();return V(std::floor(j::number(_number56105)+.5));})()};return j::call(_method,_params56120,_receiver56118);})();V _rhs56094=([&]()->V{V _lhs56121=V(2.0);V _rhs56122=_v_51429_my.get();return V(j::number(_lhs56121)*j::number(_rhs56122));})();return j::binary("+",_lhs56093,_rhs56094);})()));
if(j::truth(([&]()->V{V _logical56123=([&]()->V{V _logical56124=([&]()->V{V _lhs56125=j::get(_v_51339_o.get(),this->_literals[251]);V _rhs56126=j::builtin("undefined");return V(j::equal(_lhs56125,_rhs56126,true));})();return j::truth(_logical56124)?([&]()->V{V _lhs56127=j::get(_v_51339_o.get(),this->_literals[100]);V _rhs56128=j::builtin("undefined");return V(j::equal(_lhs56127,_rhs56128,true));})():_logical56124;})();return j::truth(_logical56123)?([&]()->V{V _lhs56129=_v_51434_rows;V _rhs56130=V(24.0);return j::binary(">",_lhs56129,_rhs56130);})():_logical56123;})())){
(void)((_v_51434_rows=V(24.0)));
(void)((_v_51433_cols=([&]()->V{V _lhs56133=([&]()->V{V _receiver56158=j::builtin("Math");V _method56159=this->_literals[66];V _method=j::get(_receiver56158,_method56159);j::Args _params56160=j::Args{V(1.0),([&]()->V{V _number56145=([&]()->V{V _lhs56146=([&]()->V{V _lhs56148=([&]()->V{V _lhs56150=([&]()->V{V _lhs56152=_v_51434_rows;V _rhs56153=([&]()->V{V _lhs56154=V(2.0);V _rhs56155=_v_51429_my.get();return V(j::number(_lhs56154)*j::number(_rhs56155));})();return V(j::number(_lhs56152)-j::number(_rhs56153));})();V _rhs56151=_v_51340_aspect.get();return V(j::number(_lhs56150)*j::number(_rhs56151));})();V _rhs56149=_v_51435_w;return V(j::number(_lhs56148)*j::number(_rhs56149));})();V _rhs56147=_v_51436_h;return V(j::number(_lhs56146)/j::number(_rhs56147));})();return V(std::floor(j::number(_number56145)+.5));})()};return j::call(_method,_params56160,_receiver56158);})();V _rhs56134=([&]()->V{V _lhs56161=V(2.0);V _rhs56162=_v_51428_mx.get();return V(j::number(_lhs56161)*j::number(_rhs56162));})();return j::binary("+",_lhs56133,_rhs56134);})()));

}


}

}
if(j::truth(([&]()->V{V _logical56163=([&]()->V{V _lhs56164=_v_51434_rows;V _rhs56165=j::get(this->_v_50441_MAX.get(),this->_literals[252]);return j::binary(">",_lhs56164,_rhs56165);})();return j::truth(_logical56163)?([&]()->V{V _lhs56166=j::get(_v_51339_o.get(),this->_literals[252]);V _rhs56167=j::builtin("undefined");return V(j::equal(_lhs56166,_rhs56167,true));})():_logical56163;})())){
(void)((_v_51434_rows=j::get(this->_v_50441_MAX.get(),this->_literals[252])));
if(j::truth(([&]()->V{V _lhs56169=j::get(_v_51339_o.get(),this->_literals[251]);V _rhs56170=j::builtin("undefined");return V(j::equal(_lhs56169,_rhs56170,true));})())){(void)((_v_51433_cols=([&]()->V{V _lhs56172=([&]()->V{V _receiver56197=j::builtin("Math");V _method56198=this->_literals[66];V _method=j::get(_receiver56197,_method56198);j::Args _params56199=j::Args{V(1.0),([&]()->V{V _number56184=([&]()->V{V _lhs56185=([&]()->V{V _lhs56187=([&]()->V{V _lhs56189=([&]()->V{V _lhs56191=_v_51434_rows;V _rhs56192=([&]()->V{V _lhs56193=V(2.0);V _rhs56194=_v_51429_my.get();return V(j::number(_lhs56193)*j::number(_rhs56194));})();return V(j::number(_lhs56191)-j::number(_rhs56192));})();V _rhs56190=_v_51340_aspect.get();return V(j::number(_lhs56189)*j::number(_rhs56190));})();V _rhs56188=_v_51435_w;return V(j::number(_lhs56187)*j::number(_rhs56188));})();V _rhs56186=_v_51436_h;return V(j::number(_lhs56185)/j::number(_rhs56186));})();return V(std::floor(j::number(_number56184)+.5));})()};return j::call(_method,_params56199,_receiver56197);})();V _rhs56173=([&]()->V{V _lhs56200=V(2.0);V _rhs56201=_v_51428_mx.get();return V(j::number(_lhs56200)*j::number(_rhs56201));})();return j::binary("+",_lhs56172,_rhs56173);})()));
}

}

if(j::truth(([&]()->V{V _lhs56202=_v_51433_cols;V _rhs56203=j::get(this->_v_50441_MAX.get(),this->_literals[251]);return j::binary(">",_lhs56202,_rhs56203);})())){(void)((_v_51433_cols=j::get(this->_v_50441_MAX.get(),this->_literals[251])));
}
if(j::truth(([&]()->V{V _logical56205=([&]()->V{V _lhs56206=([&]()->V{V _lhs56208=_v_51433_cols;V _rhs56209=([&]()->V{V _lhs56210=V(2.0);V _rhs56211=_v_51428_mx.get();return V(j::number(_lhs56210)*j::number(_rhs56211));})();return V(j::number(_lhs56208)-j::number(_rhs56209));})();V _rhs56207=V(1.0);return j::binary("<",_lhs56206,_rhs56207);})();return !j::truth(_logical56205)?([&]()->V{V _lhs56212=([&]()->V{V _lhs56214=_v_51434_rows;V _rhs56215=([&]()->V{V _lhs56216=V(2.0);V _rhs56217=_v_51429_my.get();return V(j::number(_lhs56216)*j::number(_rhs56217));})();return V(j::number(_lhs56214)-j::number(_rhs56215));})();V _rhs56213=V(1.0);return j::binary("<",_lhs56212,_rhs56213);})():_logical56205;})())){(void)(([&]()->V{V _callee56219=this->_v_50450_fail.get();return j::call(_callee56219,j::Args{([&]()->V{std::u16string _text56218;_text56218+=u"fromSvg's margin of ";_text56218+=j::string(_v_51428_mx.get());_text56218+=u" columns and ";_text56218+=j::string(_v_51429_my.get());_text56218+=u" rows leaves no room in ";_text56218+=j::string(_v_51433_cols);_text56218+=u" by ";_text56218+=j::string(_v_51434_rows);_text56218+=u" cells: give it a smaller margin or more room";return V(std::move(_text56218));})()});})());
}
return ([&]()->V{V _obj56220=j::object();j::put(_obj56220,this->_literals[251],_v_51433_cols);j::put(_obj56220,this->_literals[252],_v_51434_rows);return _obj56220;})();

}

return V{};
},1);
_v_51437_fitTo.get()=j::function([=](const j::Args &_args_fn51438,const V &_receiver_fn51438,const V &_self_fn51438) mutable ->V{
V _v_51439_b;
V _v_51440_cols;
V _v_51441_rows;
_v_51439_b=_args_fn51438[0];
_v_51440_cols=_args_fn51438[1];
_v_51441_rows=_args_fn51438[2];
{
V _v_51442_iw;
V _v_51443_ih;
V _v_51444_k;
_v_51442_iw=([&]()->V{V _lhs56221=_v_51440_cols;V _rhs56222=([&]()->V{V _lhs56223=V(2.0);V _rhs56224=_v_51428_mx.get();return V(j::number(_lhs56223)*j::number(_rhs56224));})();return V(j::number(_lhs56221)-j::number(_rhs56222));})();
_v_51443_ih=([&]()->V{V _lhs56225=([&]()->V{V _lhs56227=_v_51441_rows;V _rhs56228=([&]()->V{V _lhs56229=V(2.0);V _rhs56230=_v_51429_my.get();return V(j::number(_lhs56229)*j::number(_rhs56230));})();return V(j::number(_lhs56227)-j::number(_rhs56228));})();V _rhs56226=_v_51340_aspect.get();return V(j::number(_lhs56225)*j::number(_rhs56226));})();
_v_51444_k=([&]()->V{V _receiver56247=j::builtin("Math");V _method56248=this->_literals[116];V _method=j::get(_receiver56247,_method56248);j::Args _params56249=j::Args{([&]()->V{V _lhs56231=_v_51442_iw;V _rhs56232=([&]()->V{V _receiver56235=j::builtin("Math");V _method56236=this->_literals[66];V _method=j::get(_receiver56235,_method56236);j::Args _params56237=j::Args{j::get(_v_51439_b,V(2.0)),V(1e-9)};return j::call(_method,_params56237,_receiver56235);})();return V(j::number(_lhs56231)/j::number(_rhs56232));})(),([&]()->V{V _lhs56238=_v_51443_ih;V _rhs56239=([&]()->V{V _receiver56242=j::builtin("Math");V _method56243=this->_literals[66];V _method=j::get(_receiver56242,_method56243);j::Args _params56244=j::Args{j::get(_v_51439_b,V(3.0)),V(1e-9)};return j::call(_method,_params56244,_receiver56242);})();return V(j::number(_lhs56238)/j::number(_rhs56239));})()};return j::call(_method,_params56249,_receiver56247);})();
return ([&]()->V{V _obj56250=j::object();j::put(_obj56250,this->_literals[253],_v_51444_k);j::put(_obj56250,this->_literals[194],([&]()->V{V _lhs56251=([&]()->V{V _lhs56253=_v_51428_mx.get();V _rhs56254=([&]()->V{V _lhs56255=([&]()->V{V _lhs56257=_v_51442_iw;V _rhs56258=([&]()->V{V _lhs56259=j::get(_v_51439_b,V(2.0));V _rhs56260=_v_51444_k;return V(j::number(_lhs56259)*j::number(_rhs56260));})();return V(j::number(_lhs56257)-j::number(_rhs56258));})();V _rhs56256=V(2.0);return V(j::number(_lhs56255)/j::number(_rhs56256));})();return j::binary("+",_lhs56253,_rhs56254);})();V _rhs56252=([&]()->V{V _lhs56261=j::get(_v_51439_b,V(0.0));V _rhs56262=_v_51444_k;return V(j::number(_lhs56261)*j::number(_rhs56262));})();return V(j::number(_lhs56251)-j::number(_rhs56252));})());j::put(_obj56250,this->_literals[195],([&]()->V{V _lhs56263=([&]()->V{V _lhs56265=([&]()->V{V _lhs56267=_v_51429_my.get();V _rhs56268=_v_51340_aspect.get();return V(j::number(_lhs56267)*j::number(_rhs56268));})();V _rhs56266=([&]()->V{V _lhs56269=([&]()->V{V _lhs56271=_v_51443_ih;V _rhs56272=([&]()->V{V _lhs56273=j::get(_v_51439_b,V(3.0));V _rhs56274=_v_51444_k;return V(j::number(_lhs56273)*j::number(_rhs56274));})();return V(j::number(_lhs56271)-j::number(_rhs56272));})();V _rhs56270=V(2.0);return V(j::number(_lhs56269)/j::number(_rhs56270));})();return j::binary("+",_lhs56265,_rhs56266);})();V _rhs56264=([&]()->V{V _lhs56275=j::get(_v_51439_b,V(1.0));V _rhs56276=_v_51444_k;return V(j::number(_lhs56275)*j::number(_rhs56276));})();return V(j::number(_lhs56263)-j::number(_rhs56264));})());return _obj56250;})();

}

return V{};
},3);
_v_51445_size.get()=([&]()->V{V _callee56277=_v_51430_sizeFor.get();return j::call(_callee56277,j::Args{_v_51415_box.get()});})();
_v_51446_fit.get()=([&]()->V{V _callee56278=_v_51437_fitTo.get();return j::call(_callee56278,j::Args{_v_51415_box.get(),j::get(_v_51445_size.get(),this->_literals[251]),j::get(_v_51445_size.get(),this->_literals[252])});})();
_v_51447_rowUnits.get()=([&]()->V{V _lhs56279=_v_51340_aspect.get();V _rhs56280=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs56279)/j::number(_rhs56280));})();
if(j::truth(([&]()->V{V _logical56281=([&]()->V{V _lhs56282=j::get(_v_51339_o.get(),this->_literals[249]);V _rhs56283=this->_literals[254];return V(j::equal(_lhs56282,_rhs56283,true));})();return j::truth(_logical56281)?([&]()->V{V _logical56284=([&]()->V{V _receiver56285=_v_51394_movers.get();V _method56286=this->_literals[58];V _method=j::get(_receiver56285,_method56286);j::Args _params56287=j::Args{j::function([=](const j::Args &_args_fn51448,const V &_receiver_fn51448,const V &_self_fn51448) mutable ->V{
V _v_51449_m;
_v_51449_m=_args_fn51448[0];
return j::get(_v_51449_m,this->_literals[5]);
return V{};
},1)};return j::call(_method,_params56287,_receiver56285);})();return !j::truth(_logical56284)?([&]()->V{V _receiver56288=_v_51396_ripples.get();V _method56289=this->_literals[58];V _method=j::get(_receiver56288,_method56289);j::Args _params56290=j::Args{j::builtin("Boolean")};return j::call(_method,_params56290,_receiver56288);})():_logical56284;})():_logical56281;})())){
V _v_51450_unknown;
V _v_51451_known;
j::Cell _v_51454_loop;
j::Cell _v_51455_steps;
j::Cell _v_51456_ink0;
V _v_51457_measure;
V _v_51476_k0;
V _v_51477_f0;
V _v_51478_k1;
V _v_51479_f1;
_v_51450_unknown=([&]()->V{V _receiver56291=_v_51401_periods;V _method56292=this->_literals[58];V _method=j::get(_receiver56291,_method56292);j::Args _params56293=j::Args{j::get(j::builtin("Number"),this->_literals[71])};return j::call(_method,_params56293,_receiver56291);})();
_v_51451_known=([&]()->V{V _callee56300=this->_v_51231_loopOf.get();return j::call(_callee56300,j::Args{([&]()->V{V _receiver56297=_v_51401_periods;V _method56298=this->_literals[40];V _method=j::get(_receiver56297,_method56298);j::Args _params56299=j::Args{j::function([=](const j::Args &_args_fn51452,const V &_receiver_fn51452,const V &_self_fn51452) mutable ->V{
V _v_51453_p;
_v_51453_p=_args_fn51452[0];
return j::unary("!",([&]()->V{V _receiver56294=j::builtin("Number");V _method56295=this->_literals[71];V _method=j::get(_receiver56294,_method56295);j::Args _params56296=j::Args{_v_51453_p};return j::call(_method,_params56296,_receiver56294);})());
return V{};
},1)};return j::call(_method,_params56299,_receiver56297);})()});})();
_v_51454_loop.get()=(j::truth(_v_51450_unknown)?([&]()->V{V _receiver56304=j::builtin("Math");V _method56305=this->_literals[66];V _method=j::get(_receiver56304,_method56305);j::Args _params56306=j::Args{V(12.0),([&]()->V{V _logical56301=_v_51451_known;return j::nullish(_logical56301)?V(0.0):_logical56301;})()};return j::call(_method,_params56306,_receiver56304);})():([&]()->V{V _logical56307=_v_51451_known;return j::nullish(_logical56307)?V(12.0):_logical56307;})());
_v_51455_steps.get()=(j::truth(_v_51450_unknown)?V(240.0):V(96.0));
_v_51456_ink0.get()=_v_51415_box.get();
_v_51457_measure=j::function([=](const j::Args &_args_fn51458,const V &_receiver_fn51458,const V &_self_fn51458) mutable ->V{
V _v_51459_k;
_v_51459_k=_args_fn51458[0];
{
j::Cell _v_51460_x0;
j::Cell _v_51461_y0;
j::Cell _v_51462_x1;
j::Cell _v_51463_y1;
(void)((_v_51447_rowUnits.get()=([&]()->V{V _lhs56309=_v_51340_aspect.get();V _rhs56310=_v_51459_k;return V(j::number(_lhs56309)/j::number(_rhs56310));})()));
_v_51460_x0.get()=j::get(_v_51456_ink0.get(),V(0.0));
_v_51461_y0.get()=j::get(_v_51456_ink0.get(),V(1.0));
_v_51462_x1.get()=([&]()->V{V _lhs56311=j::get(_v_51456_ink0.get(),V(0.0));V _rhs56312=j::get(_v_51456_ink0.get(),V(2.0));return j::binary("+",_lhs56311,_rhs56312);})();
_v_51463_y1.get()=([&]()->V{V _lhs56313=j::get(_v_51456_ink0.get(),V(1.0));V _rhs56314=j::get(_v_51456_ink0.get(),V(3.0));return j::binary("+",_lhs56313,_rhs56314);})();
(void)(([&]()->V{V _receiver56391=_v_51342_shapes.get();V _method56392=this->_literals[225];V _method=j::get(_receiver56391,_method56392);j::Args _params56393=j::Args{j::function([=](const j::Args &_args_fn51464,const V &_receiver_fn51464,const V &_self_fn51464) mutable ->V{
V _v_51465_s;
V _v_51466_i;
_v_51465_s=_args_fn51464[0];
_v_51466_i=_args_fn51464[1];
{
V _v_51467_b;
V _v_51468_grow;
V _v_51469_corners;
if(j::truth(([&]()->V{V _logical56315=j::get(_v_51369_hidden.get(),_v_51466_i);return !j::truth(_logical56315)?([&]()->V{V _logical56316=j::unary("!",j::get(j::get(_v_51394_movers.get(),_v_51466_i),this->_literals[5]));return j::truth(_logical56316)?j::unary("!",j::get(_v_51396_ripples.get(),_v_51466_i)):_logical56316;})():_logical56315;})())){return V{};
}
_v_51467_b=j::get(_v_51465_s,this->_literals[183]);
_v_51468_grow=(j::truth(j::get(_v_51396_ripples.get(),_v_51466_i))?([&]()->V{V _lhs56317=j::get(j::get(_v_51396_ripples.get(),_v_51466_i),this->_literals[205]);V _rhs56318=_v_51447_rowUnits.get();return V(j::number(_lhs56317)*j::number(_rhs56318));})():V(0.0));
_v_51469_corners=([&]()->V{j::Args _array56319;_array56319.push_back(j::get(_v_51467_b,V(0.0)));_array56319.push_back(([&]()->V{V _lhs56320=j::get(_v_51467_b,V(1.0));V _rhs56321=_v_51468_grow;return V(j::number(_lhs56320)-j::number(_rhs56321));})());_array56319.push_back(([&]()->V{V _lhs56322=j::get(_v_51467_b,V(0.0));V _rhs56323=j::get(_v_51467_b,V(2.0));return j::binary("+",_lhs56322,_rhs56323);})());_array56319.push_back(([&]()->V{V _lhs56324=j::get(_v_51467_b,V(1.0));V _rhs56325=_v_51468_grow;return V(j::number(_lhs56324)-j::number(_rhs56325));})());_array56319.push_back(j::get(_v_51467_b,V(0.0)));_array56319.push_back(([&]()->V{V _lhs56326=j::get(_v_51467_b,V(1.0));V _rhs56327=j::get(_v_51467_b,V(3.0));return j::binary("+",_lhs56326,_rhs56327);})());_array56319.push_back(([&]()->V{V _lhs56328=j::get(_v_51467_b,V(0.0));V _rhs56329=j::get(_v_51467_b,V(2.0));return j::binary("+",_lhs56328,_rhs56329);})());_array56319.push_back(([&]()->V{V _lhs56330=j::get(_v_51467_b,V(1.0));V _rhs56331=j::get(_v_51467_b,V(3.0));return j::binary("+",_lhs56330,_rhs56331);})());return j::array(std::move(_array56319));})();
{V _v_51470_n;
_v_51470_n=V(0.0);
for(;j::truth(([&]()->V{V _lhs56332=_v_51470_n;V _rhs56333=_v_51455_steps.get();return j::binary("<",_lhs56332,_rhs56333);})());(void)(j::increment(_v_51470_n,1,false))){
V _v_51471_m;
_v_51471_m=this->_v_50576_IDENTITY.get();
{for(const auto &_item56334:j::elements(j::get(_v_51394_movers.get(),_v_51466_i))){V _v_51472_mv;
_v_51472_mv=_item56334;
(void)((_v_51471_m=([&]()->V{V _callee56343=this->_v_50577_mul.get();return j::call(_callee56343,j::Args{([&]()->V{V _callee56342=this->_v_51245_motionAt.get();return j::call(_callee56342,j::Args{_v_51472_mv,([&]()->V{V _lhs56336=([&]()->V{V _lhs56338=_v_51454_loop.get();V _rhs56339=_v_51470_n;return V(j::number(_lhs56338)*j::number(_rhs56339));})();V _rhs56337=_v_51455_steps.get();return V(j::number(_lhs56336)/j::number(_rhs56337));})(),_v_51447_rowUnits.get(),([&]()->V{V _lhs56340=_v_51447_rowUnits.get();V _rhs56341=_v_51340_aspect.get();return V(j::number(_lhs56340)/j::number(_rhs56341));})()});})(),_v_51471_m});})()));
}}
{V _v_51473_c;
_v_51473_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs56344=_v_51473_c;V _rhs56345=V(8.0);return j::binary("<",_lhs56344,_rhs56345);})());(void)((_v_51473_c=j::binary("+",_v_51473_c,V(2.0))))){
V _v_51474_x;
V _v_51475_y;
_v_51474_x=([&]()->V{V _lhs56347=([&]()->V{V _lhs56349=([&]()->V{V _lhs56351=j::get(_v_51471_m,V(0.0));V _rhs56352=j::get(_v_51469_corners,_v_51473_c);return V(j::number(_lhs56351)*j::number(_rhs56352));})();V _rhs56350=([&]()->V{V _lhs56353=j::get(_v_51471_m,V(2.0));V _rhs56354=j::get(_v_51469_corners,([&]()->V{V _lhs56355=_v_51473_c;V _rhs56356=V(1.0);return j::binary("+",_lhs56355,_rhs56356);})());return V(j::number(_lhs56353)*j::number(_rhs56354));})();return j::binary("+",_lhs56349,_rhs56350);})();V _rhs56348=j::get(_v_51471_m,V(4.0));return j::binary("+",_lhs56347,_rhs56348);})();
_v_51475_y=([&]()->V{V _lhs56357=([&]()->V{V _lhs56359=([&]()->V{V _lhs56361=j::get(_v_51471_m,V(1.0));V _rhs56362=j::get(_v_51469_corners,_v_51473_c);return V(j::number(_lhs56361)*j::number(_rhs56362));})();V _rhs56360=([&]()->V{V _lhs56363=j::get(_v_51471_m,V(3.0));V _rhs56364=j::get(_v_51469_corners,([&]()->V{V _lhs56365=_v_51473_c;V _rhs56366=V(1.0);return j::binary("+",_lhs56365,_rhs56366);})());return V(j::number(_lhs56363)*j::number(_rhs56364));})();return j::binary("+",_lhs56359,_rhs56360);})();V _rhs56358=j::get(_v_51471_m,V(5.0));return j::binary("+",_lhs56357,_rhs56358);})();
(void)((_v_51460_x0.get()=([&]()->V{V _receiver56370=j::builtin("Math");V _method56371=this->_literals[116];V _method=j::get(_receiver56370,_method56371);j::Args _params56372=j::Args{_v_51460_x0.get(),_v_51474_x};return j::call(_method,_params56372,_receiver56370);})()));
(void)((_v_51462_x1.get()=([&]()->V{V _receiver56376=j::builtin("Math");V _method56377=this->_literals[66];V _method=j::get(_receiver56376,_method56377);j::Args _params56378=j::Args{_v_51462_x1.get(),_v_51474_x};return j::call(_method,_params56378,_receiver56376);})()));
(void)((_v_51461_y0.get()=([&]()->V{V _receiver56382=j::builtin("Math");V _method56383=this->_literals[116];V _method=j::get(_receiver56382,_method56383);j::Args _params56384=j::Args{_v_51461_y0.get(),_v_51475_y};return j::call(_method,_params56384,_receiver56382);})()));
(void)((_v_51463_y1.get()=([&]()->V{V _receiver56388=j::builtin("Math");V _method56389=this->_literals[66];V _method=j::get(_receiver56388,_method56389);j::Args _params56390=j::Args{_v_51463_y1.get(),_v_51475_y};return j::call(_method,_params56390,_receiver56388);})()));

}
}

}
}

}

return V{};
},2)};return j::call(_method,_params56393,_receiver56391);})());
if(j::truth(j::unary("!",([&]()->V{V _receiver56394=([&]()->V{j::Args _array56397;_array56397.push_back(_v_51460_x0.get());_array56397.push_back(_v_51461_y0.get());_array56397.push_back(_v_51462_x1.get());_array56397.push_back(_v_51463_y1.get());return j::array(std::move(_array56397));})();V _method56395=this->_literals[134];V _method=j::get(_receiver56394,_method56395);j::Args _params56396=j::Args{j::get(j::builtin("Number"),this->_literals[57])};return j::call(_method,_params56396,_receiver56394);})()))){(void)(([&]()->V{V _callee56398=this->_v_50450_fail.get();return j::call(_callee56398,j::Args{this->_literals[255]});})());
}
(void)((_v_51415_box.get()=([&]()->V{j::Args _array56400;_array56400.push_back(_v_51460_x0.get());_array56400.push_back(_v_51461_y0.get());_array56400.push_back(([&]()->V{V _lhs56401=_v_51462_x1.get();V _rhs56402=_v_51460_x0.get();return V(j::number(_lhs56401)-j::number(_rhs56402));})());_array56400.push_back(([&]()->V{V _lhs56403=_v_51463_y1.get();V _rhs56404=_v_51461_y0.get();return V(j::number(_lhs56403)-j::number(_rhs56404));})());return j::array(std::move(_array56400));})()));
(void)((_v_51445_size.get()=([&]()->V{V _callee56406=_v_51430_sizeFor.get();return j::call(_callee56406,j::Args{_v_51415_box.get()});})()));
return ([&]()->V{V _callee56407=_v_51437_fitTo.get();return j::call(_callee56407,j::Args{_v_51415_box.get(),j::get(_v_51445_size.get(),this->_literals[251]),j::get(_v_51445_size.get(),this->_literals[252])});})();

}

return V{};
},1);
_v_51476_k0=j::get(_v_51446_fit.get(),this->_literals[253]);
_v_51477_f0=([&]()->V{V _callee56408=_v_51457_measure;return j::call(_callee56408,j::Args{_v_51476_k0});})();
_v_51478_k1=j::get(_v_51477_f0,this->_literals[253]);
_v_51479_f1=([&]()->V{V _callee56409=_v_51457_measure;return j::call(_callee56409,j::Args{_v_51478_k1});})();
{V _v_51480_pass;
_v_51480_pass=V(0.0);
for(;j::truth(([&]()->V{V _logical56410=([&]()->V{V _lhs56411=_v_51480_pass;V _rhs56412=V(12.0);return j::binary("<",_lhs56411,_rhs56412);})();return j::truth(_logical56410)?([&]()->V{V _lhs56413=([&]()->V{V _number56417=([&]()->V{V _lhs56418=j::get(_v_51479_f1,this->_literals[253]);V _rhs56419=_v_51478_k1;return V(j::number(_lhs56418)-j::number(_rhs56419));})();return V(std::fabs(j::number(_number56417)));})();V _rhs56414=([&]()->V{V _lhs56420=_v_51478_k1;V _rhs56421=V(0.00001);return V(j::number(_lhs56420)*j::number(_rhs56421));})();return j::binary(">",_lhs56413,_rhs56414);})():_logical56410;})());(void)(j::increment(_v_51480_pass,1,false))){
V _v_51481_g0;
V _v_51482_g1;
V _v_51483_k2;
_v_51481_g0=([&]()->V{V _lhs56422=j::get(_v_51477_f0,this->_literals[253]);V _rhs56423=_v_51476_k0;return V(j::number(_lhs56422)-j::number(_rhs56423));})();
_v_51482_g1=([&]()->V{V _lhs56424=j::get(_v_51479_f1,this->_literals[253]);V _rhs56425=_v_51478_k1;return V(j::number(_lhs56424)-j::number(_rhs56425));})();
_v_51483_k2=(j::truth(([&]()->V{V _lhs56426=_v_51482_g1;V _rhs56427=_v_51481_g0;return V(!j::equal(_lhs56426,_rhs56427,true));})())?([&]()->V{V _lhs56428=_v_51478_k1;V _rhs56429=([&]()->V{V _lhs56430=([&]()->V{V _lhs56432=_v_51482_g1;V _rhs56433=([&]()->V{V _lhs56434=_v_51478_k1;V _rhs56435=_v_51476_k0;return V(j::number(_lhs56434)-j::number(_rhs56435));})();return V(j::number(_lhs56432)*j::number(_rhs56433));})();V _rhs56431=([&]()->V{V _lhs56436=_v_51482_g1;V _rhs56437=_v_51481_g0;return V(j::number(_lhs56436)-j::number(_rhs56437));})();return V(j::number(_lhs56430)/j::number(_rhs56431));})();return V(j::number(_lhs56428)-j::number(_rhs56429));})():j::get(_v_51479_f1,this->_literals[253]));
(void)(((_v_51476_k0=_v_51478_k1),(_v_51477_f0=_v_51479_f1)));
(void)((_v_51478_k1=(j::truth(([&]()->V{V _logical56441=([&]()->V{V _receiver56442=j::builtin("Number");V _method56443=this->_literals[57];V _method=j::get(_receiver56442,_method56443);j::Args _params56444=j::Args{_v_51483_k2};return j::call(_method,_params56444,_receiver56442);})();return j::truth(_logical56441)?([&]()->V{V _lhs56445=_v_51483_k2;V _rhs56446=V(0.0);return j::binary(">",_lhs56445,_rhs56446);})():_logical56441;})())?_v_51483_k2:j::get(_v_51479_f1,this->_literals[253]))));
(void)((_v_51479_f1=([&]()->V{V _callee56448=_v_51457_measure;return j::call(_callee56448,j::Args{_v_51478_k1});})()));

}
}
(void)((_v_51446_fit.get()=_v_51479_f1));

}

_v_51484_colUnits.get()=([&]()->V{V _lhs56450=_v_51447_rowUnits.get();V _rhs56451=_v_51340_aspect.get();return V(j::number(_lhs56450)/j::number(_rhs56451));})();
V _pattern56452=_v_51445_size.get();
_v_51485_cols.get()=j::get(_pattern56452,this->_literals[251]);
_v_51486_rows.get()=j::get(_pattern56452,this->_literals[252]);
_v_51487_sx.get()=(j::truth(([&]()->V{V _lhs56453=([&]()->V{V _lhs56455=_v_51485_cols.get();V _rhs56456=_v_51486_rows.get();return V(j::number(_lhs56455)*j::number(_rhs56456));})();V _rhs56454=V(4096.0);return j::binary("<=",_lhs56453,_rhs56454);})())?V(8.0):V(4.0));
_v_51488_sy.get()=([&]()->V{V _receiver56470=j::builtin("Math");V _method56471=this->_literals[66];V _method=j::get(_receiver56470,_method56471);j::Args _params56472=j::Args{V(4.0),([&]()->V{V _lhs56457=([&]()->V{V _number56463=([&]()->V{V _lhs56464=([&]()->V{V _lhs56466=_v_51487_sx.get();V _rhs56467=_v_51340_aspect.get();return V(j::number(_lhs56466)*j::number(_rhs56467));})();V _rhs56465=V(4.0);return V(j::number(_lhs56464)/j::number(_rhs56465));})();return V(std::floor(j::number(_number56463)+.5));})();V _rhs56458=V(4.0);return V(j::number(_lhs56457)*j::number(_rhs56458));})()};return j::call(_method,_params56472,_receiver56470);})();
_v_51489_ky.get()=([&]()->V{V _lhs56473=_v_51488_sy.get();V _rhs56474=_v_51340_aspect.get();return V(j::number(_lhs56473)/j::number(_rhs56474));})();
_v_51490_toSamples.get()=([&]()->V{j::Args _array56475;_array56475.push_back(([&]()->V{V _lhs56476=j::get(_v_51446_fit.get(),this->_literals[253]);V _rhs56477=_v_51487_sx.get();return V(j::number(_lhs56476)*j::number(_rhs56477));})());_array56475.push_back(V(0.0));_array56475.push_back(V(0.0));_array56475.push_back(([&]()->V{V _lhs56478=j::get(_v_51446_fit.get(),this->_literals[253]);V _rhs56479=_v_51489_ky.get();return V(j::number(_lhs56478)*j::number(_rhs56479));})());_array56475.push_back(([&]()->V{V _lhs56480=j::get(_v_51446_fit.get(),this->_literals[194]);V _rhs56481=_v_51487_sx.get();return V(j::number(_lhs56480)*j::number(_rhs56481));})());_array56475.push_back(([&]()->V{V _lhs56482=j::get(_v_51446_fit.get(),this->_literals[195]);V _rhs56483=_v_51489_ky.get();return V(j::number(_lhs56482)*j::number(_rhs56483));})());return j::array(std::move(_array56475));})();
_v_51491_fromSamples.get()=([&]()->V{V _callee56484=this->_v_50589_invert.get();return j::call(_callee56484,j::Args{_v_51490_toSamples.get()});})();
_v_51492_used.get()=([&]()->V{j::Args _array56485;return j::array(std::move(_array56485));})();
_v_51493_seen.get()=([&]()->V{V _callee56486=j::builtin("Map");return j::construct(_callee56486,j::Args{});})();
_v_51494_want=j::function([=](const j::Args &_args_fn51495,const V &_receiver_fn51495,const V &_self_fn51495) mutable ->V{
V _v_51496_c;
_v_51496_c=_args_fn51495[0];
{
V _v_51497_k;
_v_51497_k=([&]()->V{V _receiver56487=_v_51496_c;V _method56488=this->_literals[29];V _method=j::get(_receiver56487,_method56488);j::Args _params56489=j::Args{};return j::call(_method,_params56489,_receiver56487);})();
if(j::truth(j::unary("!",([&]()->V{V _receiver56490=_v_51493_seen.get();V _method56491=this->_literals[30];V _method=j::get(_receiver56490,_method56491);j::Args _params56492=j::Args{_v_51497_k};return j::call(_method,_params56492,_receiver56490);})()))){(void)(([&]()->V{V _receiver56498=_v_51493_seen.get();V _method56499=this->_literals[123];V _method=j::get(_receiver56498,_method56499);j::Args _params56500=j::Args{_v_51497_k,([&]()->V{V _lhs56493=([&]()->V{V _receiver56495=_v_51492_used.get();V _method56496=this->_literals[25];V _method=j::get(_receiver56495,_method56496);j::Args _params56497=j::Args{_v_51497_k};return j::call(_method,_params56497,_receiver56495);})();V _rhs56494=V(1.0);return V(j::number(_lhs56493)-j::number(_rhs56494));})()};return j::call(_method,_params56500,_receiver56498);})());
}
return ([&]()->V{V _receiver56501=_v_51493_seen.get();V _method56502=this->_literals[54];V _method=j::get(_receiver56501,_method56502);j::Args _params56503=j::Args{_v_51497_k};return j::call(_method,_params56503,_receiver56501);})();

}

return V{};
},1);
_v_51498_paints.get()=([&]()->V{j::Args _array56504;return j::array(std::move(_array56504));})();
_v_51499_raw.get()=([&]()->V{j::Args _array56505;return j::array(std::move(_array56505));})();
_v_51500_tol.get()=V(0.2);
_v_51501_outline.get()=([&]()->V{V _lhs56506=_v_51341_style.get();V _rhs56507=this->_literals[256];return V(j::equal(_lhs56506,_rhs56507,true));})();
(void)(([&]()->V{V _receiver56615=_v_51342_shapes.get();V _method56616=this->_literals[225];V _method=j::get(_receiver56615,_method56616);j::Args _params56617=j::Args{j::function([=](const j::Args &_args_fn51502,const V &_receiver_fn51502,const V &_self_fn51502) mutable ->V{
V _v_51503_s;
V _v_51504_i;
_v_51503_s=_args_fn51502[0];
_v_51504_i=_args_fn51502[1];
{
j::Cell _v_51505_recolor;
V _v_51506_paint;
V _v_51509_subs;
V _v_51510_hwMin;
V _v_51511_traced;
if(j::truth(j::get(_v_51369_hidden.get(),_v_51504_i))){return V{};
}
_v_51505_recolor.get()=([&]()->V{V _callee56508=_v_51375_last.get();return j::call(_callee56508,j::Args{_v_51504_i,this->_literals[141]});})();
_v_51506_paint=j::function([=](const j::Args &_args_fn51507,const V &_receiver_fn51507,const V &_self_fn51507) mutable ->V{
V _v_51508_c;
_v_51508_c=_args_fn51507[0];
return ([&]()->V{V _logical56509=_v_51505_recolor.get();return j::nullish(_logical56509)?(j::truth(([&]()->V{V _logical56510=([&]()->V{V _lhs56511=_v_51508_c;V _rhs56512=this->_literals[53];return V(j::equal(_lhs56511,_rhs56512,true));})();return j::truth(_logical56510)?j::get(_v_51339_o.get(),this->_literals[254]):_logical56510;})())?j::get(_v_51339_o.get(),this->_literals[254]):_v_51508_c):_logical56509;})();
return V{};
},1);
_v_51509_subs=([&]()->V{V _callee56513=this->_v_50756_flatten.get();return j::call(_callee56513,j::Args{j::get(_v_51503_s,this->_literals[182]),_v_51490_toSamples.get(),_v_51500_tol.get()});})();
_v_51510_hwMin=([&]()->V{V _lhs56514=([&]()->V{V _lhs56516=j::get(_v_51339_o.get(),this->_literals[94]);V _rhs56517=_v_51487_sx.get();return V(j::number(_lhs56516)*j::number(_rhs56517));})();V _rhs56515=V(2.0);return V(j::number(_lhs56514)/j::number(_rhs56515));})();
_v_51511_traced=([&]()->V{V _logical56518=j::unary("!",j::unary("!",j::get(_v_51398_traces.get(),_v_51504_i)));return j::truth(_logical56518)?j::unary("!",_v_51501_outline.get()):_logical56518;})();
if(j::truth(j::get(_v_51503_s,this->_literals[130]))){
V _v_51512_c;
V _v_51513_closed;
_v_51512_c=([&]()->V{V _callee56519=_v_51506_paint;return j::call(_callee56519,j::Args{j::get(_v_51503_s,this->_literals[130])});})();
_v_51513_closed=([&]()->V{V _receiver56521=_v_51509_subs;V _method56522=this->_literals[41];V _method=j::get(_receiver56521,_method56522);j::Args _params56523=j::Args{j::function([=](const j::Args &_args_fn51514,const V &_receiver_fn51514,const V &_self_fn51514) mutable ->V{
V _v_51515_x;
_v_51515_x=_args_fn51514[0];
return ([&]()->V{V _obj56520=j::object();j::put(_obj56520,this->_literals[114],j::get(_v_51515_x,this->_literals[114]));j::put(_obj56520,this->_literals[115],V(true));return _obj56520;})();
return V{};
},1)};return j::call(_method,_params56523,_receiver56521);})();
if(j::truth(_v_51501_outline.get())){(void)(([&]()->V{V _receiver56526=_v_51499_raw.get();V _method56527=this->_literals[25];V _method=j::get(_receiver56526,_method56527);j::Args _params56528=j::Args{([&]()->V{V _obj56524=j::object();j::put(_obj56524,this->_literals[257],_v_51504_i);j::put(_obj56524,this->_literals[50],_v_51512_c);j::put(_obj56524,this->_literals[258],j::get(_v_51503_s,this->_literals[153]));j::put(_obj56524,this->_literals[187],([&]()->V{j::Args _array56525;return j::array(std::move(_array56525));})());j::put(_obj56524,this->_literals[259],_v_51513_closed);j::put(_obj56524,this->_literals[159],V(false));j::put(_obj56524,this->_literals[260],V::null());return _obj56524;})()};return j::call(_method,_params56528,_receiver56526);})());
}else {
V _v_51516_own;
V _v_51519_area;
V _v_51524_pieces;
_v_51516_own=([&]()->V{V _receiver56529=_v_51509_subs;V _method56530=this->_literals[41];V _method=j::get(_receiver56529,_method56530);j::Args _params56531=j::Args{j::function([=](const j::Args &_args_fn51517,const V &_receiver_fn51517,const V &_self_fn51517) mutable ->V{
V _v_51518_x;
_v_51518_x=_args_fn51517[0];
return j::get(_v_51518_x,this->_literals[114]);
return V{};
},1)};return j::call(_method,_params56531,_receiver56529);})();
_v_51519_area=V(0.0);
{for(const auto &_item56532:j::elements(_v_51516_own)){V _v_51520_r;
_v_51520_r=_item56532;
{
V _v_51521_a;
_v_51521_a=V(0.0);
{V _v_51522_k;
V _v_51523_n;
_v_51522_k=V(0.0);
_v_51523_n=([&]()->V{V _lhs56533=j::get(_v_51520_r,this->_literals[5]);V _rhs56534=V(1.0);return V(int(j::i32(_lhs56533)>>(j::u32(_rhs56534)&31)));})();
for(;j::truth(([&]()->V{V _lhs56535=_v_51522_k;V _rhs56536=_v_51523_n;return j::binary("<",_lhs56535,_rhs56536);})());(void)(j::increment(_v_51522_k,1,false))){(void)((_v_51521_a=j::binary("+",_v_51521_a,([&]()->V{V _lhs56538=([&]()->V{V _lhs56540=j::get(_v_51520_r,([&]()->V{V _lhs56542=V(2.0);V _rhs56543=_v_51522_k;return V(j::number(_lhs56542)*j::number(_rhs56543));})());V _rhs56541=j::get(_v_51520_r,([&]()->V{V _lhs56544=([&]()->V{V _lhs56546=([&]()->V{V _lhs56548=V(2.0);V _rhs56549=_v_51522_k;return V(j::number(_lhs56548)*j::number(_rhs56549));})();V _rhs56547=V(3.0);return j::binary("+",_lhs56546,_rhs56547);})();V _rhs56545=([&]()->V{V _lhs56550=V(2.0);V _rhs56551=_v_51523_n;return V(j::number(_lhs56550)*j::number(_rhs56551));})();return V(std::fmod(j::number(_lhs56544),j::number(_rhs56545)));})());return V(j::number(_lhs56540)*j::number(_rhs56541));})();V _rhs56539=([&]()->V{V _lhs56552=j::get(_v_51520_r,([&]()->V{V _lhs56554=([&]()->V{V _lhs56556=([&]()->V{V _lhs56558=V(2.0);V _rhs56559=_v_51522_k;return V(j::number(_lhs56558)*j::number(_rhs56559));})();V _rhs56557=V(2.0);return j::binary("+",_lhs56556,_rhs56557);})();V _rhs56555=([&]()->V{V _lhs56560=V(2.0);V _rhs56561=_v_51523_n;return V(j::number(_lhs56560)*j::number(_rhs56561));})();return V(std::fmod(j::number(_lhs56554),j::number(_rhs56555)));})());V _rhs56553=j::get(_v_51520_r,([&]()->V{V _lhs56562=([&]()->V{V _lhs56564=V(2.0);V _rhs56565=_v_51522_k;return V(j::number(_lhs56564)*j::number(_rhs56565));})();V _rhs56563=V(1.0);return j::binary("+",_lhs56562,_rhs56563);})());return V(j::number(_lhs56552)*j::number(_rhs56553));})();return V(j::number(_lhs56538)-j::number(_rhs56539));})())));
}}
(void)((_v_51519_area=j::binary("+",_v_51519_area,([&]()->V{V _lhs56567=([&]()->V{V _number56569=_v_51521_a;return V(std::fabs(j::number(_number56569)));})();V _rhs56568=V(2.0);return V(j::number(_lhs56567)/j::number(_rhs56568));})())));

}
}}
_v_51524_pieces=(j::truth(_v_51511_traced)?([&]()->V{V _callee56584=this->_v_51170_strokePieces.get();return j::call(_callee56584,j::Args{(j::truth(([&]()->V{V _lhs56570=_v_51519_area;V _rhs56571=([&]()->V{V _lhs56572=([&]()->V{V _lhs56574=_v_51487_sx.get();V _rhs56575=_v_51488_sy.get();return V(j::number(_lhs56574)*j::number(_rhs56575));})();V _rhs56573=V(0.1);return V(j::number(_lhs56572)*j::number(_rhs56573));})();return j::binary("<",_lhs56570,_rhs56571);})())?([&]()->V{j::Args _array56576;return j::array(std::move(_array56576));})():_v_51513_closed),([&]()->V{V _receiver56581=j::builtin("Math");V _method56582=this->_literals[66];V _method=j::get(_receiver56581,_method56582);j::Args _params56583=j::Args{_v_51510_hwMin,([&]()->V{V _lhs56577=_v_51487_sx.get();V _rhs56578=V(2.0);return V(j::number(_lhs56577)/j::number(_rhs56578));})()};return j::call(_method,_params56583,_receiver56581);})(),this->_literals[165]});})():V::null());
(void)(([&]()->V{V _receiver56589=_v_51499_raw.get();V _method56590=this->_literals[25];V _method=j::get(_receiver56589,_method56590);j::Args _params56591=j::Args{([&]()->V{V _obj56585=j::object();j::put(_obj56585,this->_literals[257],_v_51504_i);j::put(_obj56585,this->_literals[50],_v_51512_c);j::put(_obj56585,this->_literals[258],j::get(_v_51503_s,this->_literals[153]));j::put(_obj56585,this->_literals[187],(j::truth(_v_51524_pieces)?([&]()->V{j::Args _array56586;for(const auto &_value:j::elements(j::get(_v_51524_pieces,this->_literals[187])))_array56586.push_back(_value);for(const auto &_value:j::elements(_v_51516_own))_array56586.push_back(_value);return j::array(std::move(_array56586));})():_v_51516_own));j::put(_obj56585,this->_literals[259],V::null());j::put(_obj56585,this->_literals[159],([&]()->V{V _lhs56587=j::get(_v_51503_s,this->_literals[157]);V _rhs56588=this->_literals[159];return V(j::equal(_lhs56587,_rhs56588,true));})());j::put(_obj56585,this->_literals[260],_v_51524_pieces);return _obj56585;})()};return j::call(_method,_params56591,_receiver56589);})());

}


}

if(j::truth(j::get(_v_51503_s,this->_literals[131]))){
V _v_51525_hw;
_v_51525_hw=([&]()->V{V _receiver56600=j::builtin("Math");V _method56601=this->_literals[66];V _method=j::get(_receiver56600,_method56601);j::Args _params56602=j::Args{_v_51510_hwMin,([&]()->V{V _lhs56592=([&]()->V{V _lhs56594=([&]()->V{V _lhs56596=j::get(_v_51503_s,this->_literals[151]);V _rhs56597=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs56596)*j::number(_rhs56597));})();V _rhs56595=_v_51487_sx.get();return V(j::number(_lhs56594)*j::number(_rhs56595));})();V _rhs56593=V(2.0);return V(j::number(_lhs56592)/j::number(_rhs56593));})()};return j::call(_method,_params56602,_receiver56600);})();
if(j::truth(_v_51501_outline.get())){(void)(([&]()->V{V _receiver56606=_v_51499_raw.get();V _method56607=this->_literals[25];V _method=j::get(_receiver56606,_method56607);j::Args _params56608=j::Args{([&]()->V{V _obj56603=j::object();j::put(_obj56603,this->_literals[257],_v_51504_i);j::put(_obj56603,this->_literals[50],([&]()->V{V _callee56604=_v_51506_paint;return j::call(_callee56604,j::Args{j::get(_v_51503_s,this->_literals[131])});})());j::put(_obj56603,this->_literals[258],j::get(_v_51503_s,this->_literals[155]));j::put(_obj56603,this->_literals[187],([&]()->V{j::Args _array56605;return j::array(std::move(_array56605));})());j::put(_obj56603,this->_literals[259],_v_51509_subs);j::put(_obj56603,this->_literals[159],V(false));j::put(_obj56603,this->_literals[260],V::null());return _obj56603;})()};return j::call(_method,_params56608,_receiver56606);})());
}else {
V _v_51526_pieces;
_v_51526_pieces=([&]()->V{V _callee56609=this->_v_51170_strokePieces.get();return j::call(_callee56609,j::Args{_v_51509_subs,_v_51525_hw,j::get(_v_51503_s,this->_literals[161])});})();
(void)(([&]()->V{V _receiver56612=_v_51499_raw.get();V _method56613=this->_literals[25];V _method=j::get(_receiver56612,_method56613);j::Args _params56614=j::Args{([&]()->V{V _obj56610=j::object();j::put(_obj56610,this->_literals[257],_v_51504_i);j::put(_obj56610,this->_literals[50],([&]()->V{V _callee56611=_v_51506_paint;return j::call(_callee56611,j::Args{j::get(_v_51503_s,this->_literals[131])});})());j::put(_obj56610,this->_literals[258],j::get(_v_51503_s,this->_literals[155]));j::put(_obj56610,this->_literals[187],j::get(_v_51526_pieces,this->_literals[187]));j::put(_obj56610,this->_literals[259],V::null());j::put(_obj56610,this->_literals[159],V(false));j::put(_obj56610,this->_literals[260],(j::truth(_v_51511_traced)?_v_51526_pieces:V::null()));return _obj56610;})()};return j::call(_method,_params56614,_receiver56612);})());

}


}


}

return V{};
},2)};return j::call(_method,_params56617,_receiver56615);})());
_v_51527_glinting=([&]()->V{V _lhs56618=j::get(_v_51400_glints.get(),this->_literals[229]);V _rhs56619=V(0.0);return j::binary(">",_lhs56618,_rhs56619);})();
_v_51528_runs.get()=(j::truth(_v_51527_glinting)?V(3.0):V(1.0));
_v_51529_counts.get()=([&]()->V{V _callee56620=j::builtin("Map");return j::construct(_callee56620,j::Args{});})();
{for(const auto &_item56621:j::elements(_v_51499_raw.get())){V _v_51530_r;
_v_51530_r=_item56621;
if(j::truth(([&]()->V{V _lhs56622=j::get(_v_51530_r,this->_literals[50]);V _rhs56623=this->_literals[53];return V(!j::equal(_lhs56622,_rhs56623,true));})())){(void)(([&]()->V{V _receiver56630=_v_51529_counts.get();V _method56631=this->_literals[123];V _method=j::get(_receiver56630,_method56631);j::Args _params56632=j::Args{j::get(_v_51530_r,this->_literals[50]),([&]()->V{V _lhs56624=([&]()->V{V _logical56626=([&]()->V{V _receiver56627=_v_51529_counts.get();V _method56628=this->_literals[54];V _method=j::get(_receiver56627,_method56628);j::Args _params56629=j::Args{j::get(_v_51530_r,this->_literals[50])};return j::call(_method,_params56629,_receiver56627);})();return j::nullish(_logical56626)?V(0.0):_logical56626;})();V _rhs56625=V(1.0);return j::binary("+",_lhs56624,_rhs56625);})()};return j::call(_method,_params56632,_receiver56630);})());
}
}}
_v_51531_hasInk=([&]()->V{V _receiver56635=_v_51499_raw.get();V _method56636=this->_literals[58];V _method=j::get(_receiver56635,_method56636);j::Args _params56637=j::Args{j::function([=](const j::Args &_args_fn51532,const V &_receiver_fn51532,const V &_self_fn51532) mutable ->V{
V _v_51533_r;
_v_51533_r=_args_fn51532[0];
return ([&]()->V{V _lhs56633=j::get(_v_51533_r,this->_literals[50]);V _rhs56634=this->_literals[53];return V(j::equal(_lhs56633,_rhs56634,true));})();
return V{};
},1)};return j::call(_method,_params56637,_receiver56635);})();
_v_51534_colours=([&]()->V{j::Args _array56638;for(const auto &_value:j::elements(([&]()->V{V _receiver56639=_v_51529_counts.get();V _method56640=this->_literals[214];V _method=j::get(_receiver56639,_method56640);j::Args _params56641=j::Args{};return j::call(_method,_params56641,_receiver56639);})()))_array56638.push_back(_value);return j::array(std::move(_array56638));})();
_v_51535_room=([&]()->V{V _receiver56661=j::builtin("Math");V _method56662=this->_literals[66];V _method=j::get(_receiver56661,_method56662);j::Args _params56663=j::Args{V(1.0),([&]()->V{V _number56650=([&]()->V{V _lhs56651=([&]()->V{V _lhs56653=V(48.0);V _rhs56654=(j::truth(_v_51531_hasInk)?([&]()->V{V _lhs56655=_v_51528_runs.get();V _rhs56656=V(2.0);return V(j::number(_lhs56655)*j::number(_rhs56656));})():V(0.0));return V(j::number(_lhs56653)-j::number(_rhs56654));})();V _rhs56652=([&]()->V{V _lhs56657=V(2.0);V _rhs56658=_v_51528_runs.get();return V(j::number(_lhs56657)*j::number(_rhs56658));})();return V(j::number(_lhs56651)/j::number(_rhs56652));})();return V(std::floor(j::number(_number56650)));})()};return j::call(_method,_params56663,_receiver56661);})();
_v_51536_merged.get()=([&]()->V{V _callee56664=j::builtin("Map");return j::construct(_callee56664,j::Args{});})();
_v_51537_into=j::function([=](const j::Args &_args_fn51538,const V &_receiver_fn51538,const V &_self_fn51538) mutable ->V{
V _v_51539_drop;
V _v_51540_keep;
_v_51539_drop=_args_fn51538[0];
_v_51540_keep=_args_fn51538[1];
{
(void)(([&]()->V{V _receiver56665=_v_51536_merged.get();V _method56666=this->_literals[123];V _method=j::get(_receiver56665,_method56666);j::Args _params56667=j::Args{_v_51539_drop,_v_51540_keep};return j::call(_method,_params56667,_receiver56665);})());
(void)(([&]()->V{V _receiver56676=_v_51529_counts.get();V _method56677=this->_literals[123];V _method=j::get(_receiver56676,_method56677);j::Args _params56678=j::Args{_v_51540_keep,([&]()->V{V _lhs56668=([&]()->V{V _receiver56670=_v_51529_counts.get();V _method56671=this->_literals[54];V _method=j::get(_receiver56670,_method56671);j::Args _params56672=j::Args{_v_51540_keep};return j::call(_method,_params56672,_receiver56670);})();V _rhs56669=([&]()->V{V _receiver56673=_v_51529_counts.get();V _method56674=this->_literals[54];V _method=j::get(_receiver56673,_method56674);j::Args _params56675=j::Args{_v_51539_drop};return j::call(_method,_params56675,_receiver56673);})();return j::binary("+",_lhs56668,_rhs56669);})()};return j::call(_method,_params56678,_receiver56676);})());

}

return V{};
},2);
{for(const auto &_item56679:j::elements(([&]()->V{j::Args _array56680;_array56680.push_back(V(5.0));_array56680.push_back(V(6.0));return j::array(std::move(_array56680));})())){j::Cell _v_51541_shift;
_v_51541_shift.get()=_item56679;
{
V _v_51542_best;
V _v_51543_box;
if(j::truth(([&]()->V{V _lhs56681=j::get(_v_51534_colours,this->_literals[5]);V _rhs56682=V(96.0);return j::binary("<=",_lhs56681,_rhs56682);})())){break;
}
_v_51542_best=([&]()->V{V _callee56683=j::builtin("Map");return j::construct(_callee56683,j::Args{});})();
_v_51543_box=j::function([=](const j::Args &_args_fn51544,const V &_receiver_fn51544,const V &_self_fn51544) mutable ->V{
V _v_51545_c;
_v_51545_c=_args_fn51544[0];
{
V _v_51546_v;
_v_51546_v=([&]()->V{V _callee56684=this->_v_50457_rgb.get();return j::call(_callee56684,j::Args{_v_51545_c});})();
return ([&]()->V{V _lhs56685=([&]()->V{V _lhs56687=([&]()->V{V _lhs56689=([&]()->V{V _lhs56691=j::get(_v_51546_v,V(0.0));V _rhs56692=_v_51541_shift.get();return V(int(j::i32(_lhs56691)>>(j::u32(_rhs56692)&31)));})();V _rhs56690=V(6.0);return V(double(int32_t(j::u32(_lhs56689)<<(j::u32(_rhs56690)&31))));})();V _rhs56688=([&]()->V{V _lhs56693=([&]()->V{V _lhs56695=j::get(_v_51546_v,V(1.0));V _rhs56696=_v_51541_shift.get();return V(int(j::i32(_lhs56695)>>(j::u32(_rhs56696)&31)));})();V _rhs56694=V(3.0);return V(double(int32_t(j::u32(_lhs56693)<<(j::u32(_rhs56694)&31))));})();return V(int(j::i32(_lhs56687)|j::i32(_rhs56688)));})();V _rhs56686=([&]()->V{V _lhs56697=j::get(_v_51546_v,V(2.0));V _rhs56698=_v_51541_shift.get();return V(int(j::i32(_lhs56697)>>(j::u32(_rhs56698)&31)));})();return V(int(j::i32(_lhs56685)|j::i32(_rhs56686)));})();

}

return V{};
},1);
{for(const auto &_item56699:j::elements(_v_51534_colours)){V _v_51547_c;
_v_51547_c=_item56699;
{
V _v_51548_b;
_v_51548_b=([&]()->V{V _receiver56701=_v_51542_best;V _method56702=this->_literals[54];V _method=j::get(_receiver56701,_method56702);j::Args _params56703=j::Args{([&]()->V{V _callee56700=_v_51543_box;return j::call(_callee56700,j::Args{_v_51547_c});})()};return j::call(_method,_params56703,_receiver56701);})();
if(j::truth(([&]()->V{V _logical56704=j::unary("!",_v_51548_b);return !j::truth(_logical56704)?([&]()->V{V _lhs56705=([&]()->V{V _receiver56707=_v_51529_counts.get();V _method56708=this->_literals[54];V _method=j::get(_receiver56707,_method56708);j::Args _params56709=j::Args{_v_51547_c};return j::call(_method,_params56709,_receiver56707);})();V _rhs56706=([&]()->V{V _receiver56710=_v_51529_counts.get();V _method56711=this->_literals[54];V _method=j::get(_receiver56710,_method56711);j::Args _params56712=j::Args{_v_51548_b};return j::call(_method,_params56712,_receiver56710);})();return j::binary(">",_lhs56705,_rhs56706);})():_logical56704;})())){(void)(([&]()->V{V _receiver56714=_v_51542_best;V _method56715=this->_literals[123];V _method=j::get(_receiver56714,_method56715);j::Args _params56716=j::Args{([&]()->V{V _callee56713=_v_51543_box;return j::call(_callee56713,j::Args{_v_51547_c});})(),_v_51547_c};return j::call(_method,_params56716,_receiver56714);})());
}

}
}}
{for(const auto &_item56717:j::elements(_v_51534_colours)){V _v_51549_c;
_v_51549_c=_item56717;
if(j::truth(([&]()->V{V _lhs56718=([&]()->V{V _receiver56721=_v_51542_best;V _method56722=this->_literals[54];V _method=j::get(_receiver56721,_method56722);j::Args _params56723=j::Args{([&]()->V{V _callee56720=_v_51543_box;return j::call(_callee56720,j::Args{_v_51549_c});})()};return j::call(_method,_params56723,_receiver56721);})();V _rhs56719=_v_51549_c;return V(!j::equal(_lhs56718,_rhs56719,true));})())){(void)(([&]()->V{V _callee56728=_v_51537_into;return j::call(_callee56728,j::Args{_v_51549_c,([&]()->V{V _receiver56725=_v_51542_best;V _method56726=this->_literals[54];V _method=j::get(_receiver56725,_method56726);j::Args _params56727=j::Args{([&]()->V{V _callee56724=_v_51543_box;return j::call(_callee56724,j::Args{_v_51549_c});})()};return j::call(_method,_params56727,_receiver56725);})()});})());
}
}}
(void)((_v_51534_colours=([&]()->V{j::Args _array56730;for(const auto &_value:j::elements(([&]()->V{V _receiver56731=_v_51542_best;V _method56732=this->_literals[261];V _method=j::get(_receiver56731,_method56732);j::Args _params56733=j::Args{};return j::call(_method,_params56733,_receiver56731);})()))_array56730.push_back(_value);return j::array(std::move(_array56730));})()));

}
}}
_v_51550_rgbs=([&]()->V{V _receiver56734=_v_51534_colours;V _method56735=this->_literals[41];V _method=j::get(_receiver56734,_method56735);j::Args _params56736=j::Args{this->_v_50457_rgb.get()};return j::call(_method,_params56736,_receiver56734);})();
while(j::truth(([&]()->V{V _lhs56737=j::get(_v_51534_colours,this->_literals[5]);V _rhs56738=_v_51535_room;return j::binary(">",_lhs56737,_rhs56738);})())){
V _v_51551_bi;
V _v_51552_bj;
V _v_51553_bd;
V _v_51559_keep;
V _v_51560_drop;
_v_51551_bi=V(0.0);
_v_51552_bj=V(1.0);
_v_51553_bd=j::builtin("Infinity");
{V _v_51554_i;
_v_51554_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs56739=_v_51554_i;V _rhs56740=j::get(_v_51534_colours,this->_literals[5]);return j::binary("<",_lhs56739,_rhs56740);})());(void)(j::increment(_v_51554_i,1,false))){{V _v_51555_j;
_v_51555_j=([&]()->V{V _lhs56741=_v_51554_i;V _rhs56742=V(1.0);return j::binary("+",_lhs56741,_rhs56742);})();
for(;j::truth(([&]()->V{V _lhs56743=_v_51555_j;V _rhs56744=j::get(_v_51534_colours,this->_literals[5]);return j::binary("<",_lhs56743,_rhs56744);})());(void)(j::increment(_v_51555_j,1,false))){
V _v_51556_x;
V _v_51557_y;
V _v_51558_d;
_v_51556_x=j::get(_v_51550_rgbs,_v_51554_i);
_v_51557_y=j::get(_v_51550_rgbs,_v_51555_j);
_v_51558_d=([&]()->V{V _lhs56745=([&]()->V{V _lhs56747=([&]()->V{V _lhs56749=V(0.3);V _rhs56750=([&]()->V{V _lhs56751=([&]()->V{V _lhs56753=j::get(_v_51556_x,V(0.0));V _rhs56754=j::get(_v_51557_y,V(0.0));return V(j::number(_lhs56753)-j::number(_rhs56754));})();V _rhs56752=V(2.0);return V(std::pow(j::number(_lhs56751),j::number(_rhs56752)));})();return V(j::number(_lhs56749)*j::number(_rhs56750));})();V _rhs56748=([&]()->V{V _lhs56755=V(0.59);V _rhs56756=([&]()->V{V _lhs56757=([&]()->V{V _lhs56759=j::get(_v_51556_x,V(1.0));V _rhs56760=j::get(_v_51557_y,V(1.0));return V(j::number(_lhs56759)-j::number(_rhs56760));})();V _rhs56758=V(2.0);return V(std::pow(j::number(_lhs56757),j::number(_rhs56758)));})();return V(j::number(_lhs56755)*j::number(_rhs56756));})();return j::binary("+",_lhs56747,_rhs56748);})();V _rhs56746=([&]()->V{V _lhs56761=V(0.11);V _rhs56762=([&]()->V{V _lhs56763=([&]()->V{V _lhs56765=j::get(_v_51556_x,V(2.0));V _rhs56766=j::get(_v_51557_y,V(2.0));return V(j::number(_lhs56765)-j::number(_rhs56766));})();V _rhs56764=V(2.0);return V(std::pow(j::number(_lhs56763),j::number(_rhs56764)));})();return V(j::number(_lhs56761)*j::number(_rhs56762));})();return j::binary("+",_lhs56745,_rhs56746);})();
if(j::truth(([&]()->V{V _lhs56767=_v_51558_d;V _rhs56768=_v_51553_bd;return j::binary("<",_lhs56767,_rhs56768);})())){(void)(((_v_51553_bd=_v_51558_d),(_v_51551_bi=_v_51554_i),(_v_51552_bj=_v_51555_j)));
}

}
}
}}
V _pattern56782=(j::truth(([&]()->V{V _lhs56772=([&]()->V{V _receiver56774=_v_51529_counts.get();V _method56775=this->_literals[54];V _method=j::get(_receiver56774,_method56775);j::Args _params56776=j::Args{j::get(_v_51534_colours,_v_51551_bi)};return j::call(_method,_params56776,_receiver56774);})();V _rhs56773=([&]()->V{V _receiver56777=_v_51529_counts.get();V _method56778=this->_literals[54];V _method=j::get(_receiver56777,_method56778);j::Args _params56779=j::Args{j::get(_v_51534_colours,_v_51552_bj)};return j::call(_method,_params56779,_receiver56777);})();return j::binary(">=",_lhs56772,_rhs56773);})())?([&]()->V{j::Args _array56780;_array56780.push_back(_v_51551_bi);_array56780.push_back(_v_51552_bj);return j::array(std::move(_array56780));})():([&]()->V{j::Args _array56781;_array56781.push_back(_v_51552_bj);_array56781.push_back(_v_51551_bi);return j::array(std::move(_array56781));})());
_v_51559_keep=j::get(_pattern56782,V(0));
_v_51560_drop=j::get(_pattern56782,V(1));
(void)(([&]()->V{V _callee56783=_v_51537_into;return j::call(_callee56783,j::Args{j::get(_v_51534_colours,_v_51560_drop),j::get(_v_51534_colours,_v_51559_keep)});})());
(void)(([&]()->V{V _receiver56784=_v_51534_colours;V _method56785=this->_literals[262];V _method=j::get(_receiver56784,_method56785);j::Args _params56786=j::Args{_v_51560_drop,V(1.0)};return j::call(_method,_params56786,_receiver56784);})());
(void)(([&]()->V{V _receiver56787=_v_51550_rgbs;V _method56788=this->_literals[262];V _method=j::get(_receiver56787,_method56788);j::Args _params56789=j::Args{_v_51560_drop,V(1.0)};return j::call(_method,_params56789,_receiver56787);})());

}

_v_51561_final.get()=j::function([=](const j::Args &_args_fn51562,const V &_receiver_fn51562,const V &_self_fn51562) mutable ->V{
V _v_51563_c;
_v_51563_c=_args_fn51562[0];
{
{V _v_51564_k;
_v_51564_k=V(0.0);
for(;j::truth(([&]()->V{V _logical56790=([&]()->V{V _receiver56791=_v_51536_merged.get();V _method56792=this->_literals[30];V _method=j::get(_receiver56791,_method56792);j::Args _params56793=j::Args{_v_51563_c};return j::call(_method,_params56793,_receiver56791);})();return j::truth(_logical56790)?([&]()->V{V _lhs56794=_v_51564_k;V _rhs56795=V(1024.0);return j::binary("<",_lhs56794,_rhs56795);})():_logical56790;})());(void)(j::increment(_v_51564_k,1,false))){(void)((_v_51563_c=([&]()->V{V _receiver56797=_v_51536_merged.get();V _method56798=this->_literals[54];V _method=j::get(_receiver56797,_method56798);j::Args _params56799=j::Args{_v_51563_c};return j::call(_method,_params56799,_receiver56797);})()));
}}
return _v_51563_c;

}

return V{};
},1);
_v_51565_coloured=([&]()->V{V _logical56800=j::get(_v_51339_o.get(),this->_literals[141]);return j::truth(_logical56800)?([&]()->V{V _lhs56801=j::get(_v_51534_colours,this->_literals[5]);V _rhs56802=V(0.0);return j::binary(">",_lhs56801,_rhs56802);})():_logical56800;})();
_v_51566_knockable=([&]()->V{V _logical56803=([&]()->V{V _receiver56804=_v_51534_colours;V _method56805=this->_literals[58];V _method=j::get(_receiver56804,_method56805);j::Args _params56806=j::Args{this->_v_51065_white.get()};return j::call(_method,_params56806,_receiver56804);})();return j::truth(_logical56803)?([&]()->V{V _logical56807=_v_51531_hasInk;return !j::truth(_logical56807)?j::unary("!",([&]()->V{V _receiver56808=_v_51534_colours;V _method56809=this->_literals[134];V _method=j::get(_receiver56808,_method56809);j::Args _params56810=j::Args{this->_v_51065_white.get()};return j::call(_method,_params56810,_receiver56808);})()):_logical56807;})():_logical56803;})();
{for(const auto &_item56811:j::elements(_v_51534_colours)){V _v_51567_c;
_v_51567_c=_item56811;
(void)(([&]()->V{V _callee56812=_v_51494_want;return j::call(_callee56812,j::Args{_v_51567_c});})());
}}
if(j::truth(([&]()->V{V _logical56813=_v_51565_coloured;return j::truth(_logical56813)?_v_51531_hasInk:_logical56813;})())){(void)(([&]()->V{V _callee56814=_v_51494_want;return j::call(_callee56814,j::Args{this->_literals[52]});})());
}
_v_51568_light.get()=([&]()->V{j::Args _array56815;return j::array(std::move(_array56815));})();
_v_51569_dark=([&]()->V{j::Args _array56816;return j::array(std::move(_array56816));})();
_v_51570_shown=([&]()->V{V _callee56827=j::builtin("Set");return j::construct(_callee56827,j::Args{([&]()->V{V _receiver56820=([&]()->V{V _receiver56824=_v_51499_raw.get();V _method56825=this->_literals[40];V _method=j::get(_receiver56824,_method56825);j::Args _params56826=j::Args{j::function([=](const j::Args &_args_fn51571,const V &_receiver_fn51571,const V &_self_fn51571) mutable ->V{
V _v_51572_r;
_v_51572_r=_args_fn51571[0];
return ([&]()->V{V _callee56823=_v_51375_last.get();return j::call(_callee56823,j::Args{j::get(_v_51572_r,this->_literals[257]),this->_literals[212]});})();
return V{};
},1)};return j::call(_method,_params56826,_receiver56824);})();V _method56821=this->_literals[41];V _method=j::get(_receiver56820,_method56821);j::Args _params56822=j::Args{j::function([=](const j::Args &_args_fn51573,const V &_receiver_fn51573,const V &_self_fn51573) mutable ->V{
V _v_51574_r;
_v_51574_r=_args_fn51573[0];
return (j::truth(([&]()->V{V _lhs56817=j::get(_v_51574_r,this->_literals[50]);V _rhs56818=this->_literals[53];return V(j::equal(_lhs56817,_rhs56818,true));})())?this->_literals[52]:([&]()->V{V _callee56819=_v_51561_final.get();return j::call(_callee56819,j::Args{j::get(_v_51574_r,this->_literals[50])});})());
return V{};
},1)};return j::call(_method,_params56822,_receiver56820);})()});})();
if(j::truth(_v_51565_coloured)){
{V _v_51575_run;
_v_51575_run=V(0.0);
for(;j::truth(([&]()->V{V _lhs56828=_v_51575_run;V _rhs56829=_v_51528_runs.get();return j::binary("<",_lhs56828,_rhs56829);})());(void)(j::increment(_v_51575_run,1,false))){{for(const auto &_item56830:j::elements(_v_51492_used.get())){V _v_51576_c;
_v_51576_c=_item56830;
{
V _v_51577_l;
V _v_51578_d;
_v_51577_l=(j::truth(([&]()->V{V _lhs56831=_v_51576_c;V _rhs56832=this->_literals[52];return V(j::equal(_lhs56831,_rhs56832,true));})())?j::get(this->_v_50440_INK.get(),this->_literals[223]):([&]()->V{V _callee56837=this->_v_51070_sink.get();return j::call(_callee56837,j::Args{_v_51576_c,([&]()->V{V _logical56833=([&]()->V{V _receiver56834=_v_51570_shown;V _method56835=this->_literals[30];V _method=j::get(_receiver56834,_method56835);j::Args _params56836=j::Args{_v_51576_c};return j::call(_method,_params56836,_receiver56834);})();return !j::truth(_logical56833)?j::unary("!",_v_51566_knockable):_logical56833;})()});})());
_v_51578_d=(j::truth(([&]()->V{V _lhs56838=_v_51576_c;V _rhs56839=this->_literals[52];return V(j::equal(_lhs56838,_rhs56839,true));})())?j::get(this->_v_50440_INK.get(),this->_literals[224]):([&]()->V{V _callee56840=this->_v_51054_lift.get();return j::call(_callee56840,j::Args{_v_51576_c});})());
(void)(([&]()->V{V _receiver56844=_v_51568_light.get();V _method56845=this->_literals[25];V _method=j::get(_receiver56844,_method56845);j::Args _params56846=j::Args{(j::truth(_v_51575_run)?([&]()->V{V _callee56843=this->_v_51080_tint.get();return j::call(_callee56843,j::Args{_v_51577_l,([&]()->V{V _lhs56841=_v_51575_run;V _rhs56842=V(0.35);return V(j::number(_lhs56841)*j::number(_rhs56842));})()});})():_v_51577_l)};return j::call(_method,_params56846,_receiver56844);})());
(void)(([&]()->V{V _receiver56850=_v_51569_dark;V _method56851=this->_literals[25];V _method=j::get(_receiver56850,_method56851);j::Args _params56852=j::Args{(j::truth(_v_51575_run)?([&]()->V{V _callee56849=this->_v_51080_tint.get();return j::call(_callee56849,j::Args{_v_51578_d,([&]()->V{V _lhs56847=_v_51575_run;V _rhs56848=V(0.35);return V(j::number(_lhs56847)*j::number(_rhs56848));})()});})():_v_51578_d)};return j::call(_method,_params56852,_receiver56850);})());

}
}}
}}

}

_v_51579_fillCode.get()=([&]()->V{V _receiver56853=j::get(_v_51339_o.get(),this->_literals[130]);V _method56854=this->_literals[263];V _method=j::get(_receiver56853,_method56854);j::Args _params56855=j::Args{V(0.0)};return j::call(_method,_params56855,_receiver56853);})();
_v_51580_groups.get()=([&]()->V{j::Args _array56856;return j::array(std::move(_array56856));})();
_v_51581_groupSlot.get()=([&]()->V{j::Args _array56857;return j::array(std::move(_array56857));})();
{for(const auto &_item56858:j::elements(_v_51499_raw.get())){V _v_51582_r;
_v_51582_r=_item56858;
{
V _v_51583_c;
V _v_51584_slot;
V _v_51585_group;
V _v_51586_ms;
V _v_51587_rp;
V _v_51588_tr;
V _v_51589_rings;
V _v_51594_trace;
V _v_51595_part;
V _v_51597_ownFill;
V _v_51598_ownChar;
_v_51583_c=(j::truth(([&]()->V{V _lhs56859=j::get(_v_51582_r,this->_literals[50]);V _rhs56860=this->_literals[53];return V(j::equal(_lhs56859,_rhs56860,true));})())?this->_literals[52]:([&]()->V{V _callee56861=_v_51561_final.get();return j::call(_callee56861,j::Args{j::get(_v_51582_r,this->_literals[50])});})());
_v_51584_slot=(j::truth(_v_51565_coloured)?([&]()->V{V _receiver56862=_v_51493_seen.get();V _method56863=this->_literals[54];V _method=j::get(_receiver56862,_method56863);j::Args _params56864=j::Args{_v_51583_c};return j::call(_method,_params56864,_receiver56862);})():j::unary("-",V(1.0)));
_v_51585_group=([&]()->V{V _receiver56865=_v_51580_groups.get();V _method56866=this->_literals[7];V _method=j::get(_receiver56865,_method56866);j::Args _params56867=j::Args{_v_51583_c};return j::call(_method,_params56867,_receiver56865);})();
if(j::truth(([&]()->V{V _lhs56868=_v_51585_group;V _rhs56869=V(0.0);return j::binary("<",_lhs56868,_rhs56869);})())){
(void)((_v_51585_group=([&]()->V{V _lhs56871=([&]()->V{V _receiver56873=_v_51580_groups.get();V _method56874=this->_literals[25];V _method=j::get(_receiver56873,_method56874);j::Args _params56875=j::Args{_v_51583_c};return j::call(_method,_params56875,_receiver56873);})();V _rhs56872=V(1.0);return V(j::number(_lhs56871)-j::number(_rhs56872));})()));
(void)(([&]()->V{V _receiver56876=_v_51581_groupSlot.get();V _method56877=this->_literals[25];V _method=j::get(_receiver56876,_method56877);j::Args _params56878=j::Args{_v_51584_slot};return j::call(_method,_params56878,_receiver56876);})());

}

_v_51586_ms=j::get(_v_51394_movers.get(),j::get(_v_51582_r,this->_literals[257]));
_v_51587_rp=j::get(_v_51396_ripples.get(),j::get(_v_51582_r,this->_literals[257]));
_v_51588_tr=j::get(_v_51398_traces.get(),j::get(_v_51582_r,this->_literals[257]));
_v_51589_rings=(j::truth(j::get(_v_51582_r,this->_literals[259]))?([&]()->V{V _receiver56879=j::get(_v_51582_r,this->_literals[259]);V _method56880=this->_literals[41];V _method=j::get(_receiver56879,_method56880);j::Args _params56881=j::Args{j::function([=](const j::Args &_args_fn51590,const V &_receiver_fn51590,const V &_self_fn51590) mutable ->V{
V _v_51591_x;
_v_51591_x=_args_fn51590[0];
return j::get(_v_51591_x,this->_literals[114]);
return V{};
},1)};return j::call(_method,_params56881,_receiver56879);})():j::get(_v_51582_r,this->_literals[187]));
if(j::truth(([&]()->V{V _logical56882=_v_51587_rp;return j::truth(_logical56882)?j::unary("!",j::get(_v_51582_r,this->_literals[260])):_logical56882;})())){(void)((_v_51589_rings=([&]()->V{V _callee56887=this->_v_51207_subdivide.get();return j::call(_callee56887,j::Args{_v_51589_rings,_v_51487_sx.get(),(j::truth(j::get(_v_51582_r,this->_literals[259]))?([&]()->V{V _receiver56884=j::get(_v_51582_r,this->_literals[259]);V _method56885=this->_literals[41];V _method=j::get(_receiver56884,_method56885);j::Args _params56886=j::Args{j::function([=](const j::Args &_args_fn51592,const V &_receiver_fn51592,const V &_self_fn51592) mutable ->V{
V _v_51593_x;
_v_51593_x=_args_fn51592[0];
return j::get(_v_51593_x,this->_literals[115]);
return V{};
},1)};return j::call(_method,_params56886,_receiver56884);})():V::null())});})()));
}
_v_51594_trace=(j::truth(_v_51588_tr)?([&]()->V{V _obj56888=j::object();j::put(_obj56888,this->_literals[264],_v_51588_tr);j::put(_obj56888,this->_literals[260],(j::truth(j::get(_v_51582_r,this->_literals[260]))?j::get(j::get(j::get(_v_51582_r,this->_literals[260]),this->_literals[187]),this->_literals[5]):V(0.0)));j::put(_obj56888,this->_literals[113],([&]()->V{V _receiver56894=j::builtin("Float64Array");V _method56895=this->_literals[113];V _method=j::get(_receiver56894,_method56895);j::Args _params56896=j::Args{([&]()->V{V _logical56889=([&]()->V{V _chain56890=_v_51582_r;V _chain56891=j::get(_chain56890,this->_literals[260]);if(j::nullish(_chain56891))return V{};V _chain56892=j::get(_chain56891,this->_literals[113]);return _chain56892;})();return j::nullish(_logical56889)?([&]()->V{j::Args _array56893;return j::array(std::move(_array56893));})():_logical56889;})()};return j::call(_method,_params56896,_receiver56894);})());j::put(_obj56888,this->_literals[188],([&]()->V{V _receiver56902=j::builtin("Float64Array");V _method56903=this->_literals[113];V _method=j::get(_receiver56902,_method56903);j::Args _params56904=j::Args{([&]()->V{V _logical56897=([&]()->V{V _chain56898=_v_51582_r;V _chain56899=j::get(_chain56898,this->_literals[260]);if(j::nullish(_chain56899))return V{};V _chain56900=j::get(_chain56899,this->_literals[188]);return _chain56900;})();return j::nullish(_logical56897)?([&]()->V{j::Args _array56901;return j::array(std::move(_array56901));})():_logical56897;})()};return j::call(_method,_params56904,_receiver56902);})());j::put(_obj56888,this->_literals[189],([&]()->V{V _receiver56910=j::builtin("Uint8Array");V _method56911=this->_literals[113];V _method=j::get(_receiver56910,_method56911);j::Args _params56912=j::Args{([&]()->V{V _logical56905=([&]()->V{V _chain56906=_v_51582_r;V _chain56907=j::get(_chain56906,this->_literals[260]);if(j::nullish(_chain56907))return V{};V _chain56908=j::get(_chain56907,this->_literals[189]);return _chain56908;})();return j::nullish(_logical56905)?([&]()->V{j::Args _array56909;return j::array(std::move(_array56909));})():_logical56905;})(),j::builtin("Number")};return j::call(_method,_params56912,_receiver56910);})());j::put(_obj56888,this->_literals[190],([&]()->V{V _logical56913=([&]()->V{V _chain56914=_v_51582_r;V _chain56915=j::get(_chain56914,this->_literals[260]);if(j::nullish(_chain56915))return V{};V _chain56916=j::get(_chain56915,this->_literals[190]);return _chain56916;})();return j::nullish(_logical56913)?V(0.0):_logical56913;})());return _obj56888;})():V::null());
_v_51595_part=j::unary("-",V(1.0));
{for(const auto &_item56917:j::elements(j::get(_v_51343_partsOf.get(),j::get(_v_51582_r,this->_literals[257])))){V _v_51596_p;
_v_51596_p=_item56917;
if(j::truth(([&]()->V{V _logical56918=([&]()->V{V _logical56919=j::get(j::get(j::get(_v_51339_o.get(),this->_literals[184]),j::get(_v_51596_p,this->_literals[235])),this->_literals[211]);return !j::truth(_logical56919)?([&]()->V{V _receiver56920=_v_51400_glints.get();V _method56921=this->_literals[30];V _method=j::get(_receiver56920,_method56921);j::Args _params56922=j::Args{j::get(_v_51596_p,this->_literals[235])};return j::call(_method,_params56922,_receiver56920);})():_logical56919;})();return !j::truth(_logical56918)?j::get(j::get(j::get(_v_51339_o.get(),this->_literals[184]),j::get(_v_51596_p,this->_literals[235])),this->_literals[130]):_logical56918;})())){(void)((_v_51595_part=j::get(_v_51596_p,this->_literals[235])));
}
}}
_v_51597_ownFill=([&]()->V{V _callee56924=_v_51375_last.get();return j::call(_callee56924,j::Args{j::get(_v_51582_r,this->_literals[257]),this->_literals[130]});})();
_v_51598_ownChar=([&]()->V{V _callee56925=_v_51375_last.get();return j::call(_callee56925,j::Args{j::get(_v_51582_r,this->_literals[257]),this->_literals[212]});})();
(void)(([&]()->V{V _receiver56948=_v_51498_paints.get();V _method56949=this->_literals[25];V _method=j::get(_receiver56948,_method56949);j::Args _params56950=j::Args{([&]()->V{V _obj56926=j::object();j::put(_obj56926,this->_literals[187],_v_51589_rings);j::put(_obj56926,this->_literals[115],(j::truth(j::get(_v_51582_r,this->_literals[259]))?([&]()->V{V _receiver56927=j::get(_v_51582_r,this->_literals[259]);V _method56928=this->_literals[41];V _method=j::get(_receiver56927,_method56928);j::Args _params56929=j::Args{j::function([=](const j::Args &_args_fn51599,const V &_receiver_fn51599,const V &_self_fn51599) mutable ->V{
V _v_51600_x;
_v_51600_x=_args_fn51599[0];
return j::get(_v_51600_x,this->_literals[115]);
return V{};
},1)};return j::call(_method,_params56929,_receiver56927);})():V::null()));j::put(_obj56926,this->_literals[265],(j::truth(([&]()->V{V _logical56930=j::get(_v_51586_ms,this->_literals[5]);return !j::truth(_logical56930)?_v_51587_rp:_logical56930;})())?([&]()->V{V _receiver56932=_v_51589_rings;V _method56933=this->_literals[41];V _method=j::get(_receiver56932,_method56933);j::Args _params56934=j::Args{j::function([=](const j::Args &_args_fn51601,const V &_receiver_fn51601,const V &_self_fn51601) mutable ->V{
V _v_51602_x;
_v_51602_x=_args_fn51601[0];
return ([&]()->V{V _callee56931=j::builtin("Float64Array");return j::construct(_callee56931,j::Args{j::get(_v_51602_x,this->_literals[5])});})();
return V{};
},1)};return j::call(_method,_params56934,_receiver56932);})():V::null()));j::put(_obj56926,this->_literals[159],j::get(_v_51582_r,this->_literals[159]));j::put(_obj56926,this->_literals[266],_v_51584_slot);j::put(_obj56926,this->_literals[267],_v_51585_group);j::put(_obj56926,this->_literals[258],j::get(_v_51582_r,this->_literals[258]));j::put(_obj56926,this->_literals[268],([&]()->V{V _logical56935=([&]()->V{V _logical56936=([&]()->V{V _logical56937=j::unary("!",j::unary("!",_v_51566_knockable));return j::truth(_logical56937)?([&]()->V{V _lhs56938=j::get(_v_51582_r,this->_literals[50]);V _rhs56939=this->_literals[53];return V(!j::equal(_lhs56938,_rhs56939,true));})():_logical56937;})();return j::truth(_logical56936)?([&]()->V{V _callee56941=this->_v_51065_white.get();return j::call(_callee56941,j::Args{([&]()->V{V _callee56940=_v_51561_final.get();return j::call(_callee56940,j::Args{j::get(_v_51582_r,this->_literals[50])});})()});})():_logical56936;})();return j::truth(_logical56935)?j::unary("!",_v_51598_ownChar):_logical56935;})());j::put(_obj56926,this->_literals[269],_v_51586_ms);j::put(_obj56926,this->_literals[248],_v_51587_rp);j::put(_obj56926,this->_literals[247],_v_51594_trace);j::put(_obj56926,this->_literals[235],_v_51595_part);j::put(_obj56926,this->_literals[130],(j::truth(_v_51597_ownFill)?([&]()->V{V _receiver56942=_v_51597_ownFill;V _method56943=this->_literals[263];V _method=j::get(_receiver56942,_method56943);j::Args _params56944=j::Args{V(0.0)};return j::call(_method,_params56944,_receiver56942);})():_v_51579_fillCode.get()));j::put(_obj56926,this->_literals[212],(j::truth(_v_51598_ownChar)?([&]()->V{V _receiver56945=_v_51598_ownChar;V _method56946=this->_literals[263];V _method=j::get(_receiver56945,_method56946);j::Args _params56947=j::Args{V(0.0)};return j::call(_method,_params56947,_receiver56945);})():V(0.0)));return _obj56926;})()};return j::call(_method,_params56950,_receiver56948);})());

}
}}
if(j::truth(([&]()->V{V _lhs56951=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs56952=V(65534.0);return j::binary(">",_lhs56951,_rhs56952);})())){(void)(([&]()->V{V _callee56954=this->_v_50450_fail.get();return j::call(_callee56954,j::Args{([&]()->V{std::u16string _text56953;_text56953+=u"fromSvg can draw up to 65534 fills and strokes, not ";_text56953+=j::string(j::get(_v_51498_paints.get(),this->_literals[5]));_text56953+=u": simplify the svg";return V(std::move(_text56953));})()});})());
}
_v_51603_changes.get()=j::function([=](const j::Args &_args_fn51604,const V &_receiver_fn51604,const V &_self_fn51604) mutable ->V{
V _v_51605_p;
_v_51605_p=_args_fn51604[0];
return ([&]()->V{V _logical56955=j::unary("!",j::unary("!",j::get(_v_51605_p,this->_literals[265])));return !j::truth(_logical56955)?j::unary("!",j::unary("!",j::get(_v_51605_p,this->_literals[247]))):_logical56955;})();
return V{};
},1);
_v_51606_moving.get()=([&]()->V{V _logical56956=([&]()->V{V _receiver56957=_v_51498_paints.get();V _method56958=this->_literals[58];V _method=j::get(_receiver56957,_method56958);j::Args _params56959=j::Args{_v_51603_changes.get()};return j::call(_method,_params56959,_receiver56957);})();return !j::truth(_logical56956)?([&]()->V{V _lhs56960=j::get(_v_51400_glints.get(),this->_literals[229]);V _rhs56961=V(0.0);return j::binary(">",_lhs56960,_rhs56961);})():_logical56956;})();
_v_51607_firstMoving.get()=([&]()->V{V _receiver56962=_v_51498_paints.get();V _method56963=this->_literals[234];V _method=j::get(_receiver56962,_method56963);j::Args _params56964=j::Args{_v_51603_changes.get()};return j::call(_method,_params56964,_receiver56962);})();
_v_51608_textured.get()=([&]()->V{j::Args _array56965;return j::array(std::move(_array56965));})();
(void)(([&]()->V{V _receiver56984=j::get(_v_51339_o.get(),this->_literals[184]);V _method56985=this->_literals[225];V _method=j::get(_receiver56984,_method56985);j::Args _params56986=j::Args{j::function([=](const j::Args &_args_fn51609,const V &_receiver_fn51609,const V &_self_fn51609) mutable ->V{
V _v_51610_pp;
j::Cell _v_51611_pi;
_v_51610_pp=_args_fn51609[0];
_v_51611_pi.get()=_args_fn51609[1];
{
V _v_51612_first;
if(j::truth(j::unary("!",j::get(_v_51610_pp,this->_literals[211])))){return V{};
}
_v_51612_first=([&]()->V{V _receiver56968=_v_51498_paints.get();V _method56969=this->_literals[234];V _method=j::get(_receiver56968,_method56969);j::Args _params56970=j::Args{j::function([=](const j::Args &_args_fn51613,const V &_receiver_fn51613,const V &_self_fn51613) mutable ->V{
V _v_51614_p;
_v_51614_p=_args_fn51613[0];
return ([&]()->V{V _lhs56966=j::get(_v_51614_p,this->_literals[235]);V _rhs56967=_v_51611_pi.get();return V(j::equal(_lhs56966,_rhs56967,true));})();
return V{};
},1)};return j::call(_method,_params56970,_receiver56968);})();
if(j::truth(([&]()->V{V _lhs56971=_v_51612_first;V _rhs56972=V(0.0);return j::binary(">=",_lhs56971,_rhs56972);})())){(void)(([&]()->V{V _receiver56981=_v_51608_textured.get();V _method56982=this->_literals[25];V _method=j::get(_receiver56981,_method56982);j::Args _params56983=j::Args{([&]()->V{V _obj56973=j::object();j::put(_obj56973,this->_literals[235],_v_51611_pi.get());j::put(_obj56973,this->_literals[211],j::get(_v_51610_pp,this->_literals[211]));j::put(_obj56973,this->_literals[270],([&]()->V{V _receiver56978=_v_51498_paints.get();V _method56979=this->_literals[58];V _method=j::get(_receiver56978,_method56979);j::Args _params56980=j::Args{j::function([=](const j::Args &_args_fn51615,const V &_receiver_fn51615,const V &_self_fn51615) mutable ->V{
V _v_51616_p;
_v_51616_p=_args_fn51615[0];
return ([&]()->V{V _logical56974=([&]()->V{V _lhs56975=j::get(_v_51616_p,this->_literals[235]);V _rhs56976=_v_51611_pi.get();return V(j::equal(_lhs56975,_rhs56976,true));})();return j::truth(_logical56974)?([&]()->V{V _callee56977=_v_51603_changes.get();return j::call(_callee56977,j::Args{_v_51616_p});})():_logical56974;})();
return V{};
},1)};return j::call(_method,_params56980,_receiver56978);})());j::put(_obj56973,this->_literals[271],_v_51612_first);return _obj56973;})()};return j::call(_method,_params56983,_receiver56981);})());
}

}

return V{};
},2)};return j::call(_method,_params56986,_receiver56984);})());
(void)(([&]()->V{V _receiver56989=_v_51608_textured.get();V _method56990=this->_literals[128];V _method=j::get(_receiver56989,_method56990);j::Args _params56991=j::Args{j::function([=](const j::Args &_args_fn51617,const V &_receiver_fn51617,const V &_self_fn51617) mutable ->V{
V _v_51618_a;
V _v_51619_b;
_v_51618_a=_args_fn51617[0];
_v_51619_b=_args_fn51617[1];
return ([&]()->V{V _lhs56987=j::get(_v_51618_a,this->_literals[271]);V _rhs56988=j::get(_v_51619_b,this->_literals[271]);return V(j::number(_lhs56987)-j::number(_rhs56988));})();
return V{};
},2)};return j::call(_method,_params56991,_receiver56989);})());
_v_51620_partBox.get()=([&]()->V{V _callee56992=j::builtin("Map");return j::construct(_callee56992,j::Args{});})();
{for(const auto &_item56993:j::elements(([&]()->V{V _receiver56994=j::get(_v_51339_o.get(),this->_literals[184]);V _method56995=this->_literals[221];V _method=j::get(_receiver56994,_method56995);j::Args _params56996=j::Args{};return j::call(_method,_params56996,_receiver56994);})())){j::Cell _v_51621_pi;
V _pattern56997=_item56993;
_v_51621_pi.get()=j::get(_pattern56997,V(0));
{
V _v_51622_list;
V _v_51630_b;
V _v_51631_x0;
V _v_51632_x1;
V _v_51633_y0;
V _v_51634_y1;
_v_51622_list=([&]()->V{V _receiver57004=([&]()->V{V _receiver57007=_v_51342_shapes.get();V _method57008=this->_literals[41];V _method=j::get(_receiver57007,_method57008);j::Args _params57009=j::Args{j::function([=](const j::Args &_args_fn51623,const V &_receiver_fn51623,const V &_self_fn51623) mutable ->V{
V _v_51624__;
V _v_51625_i;
_v_51624__=_args_fn51623[0];
_v_51625_i=_args_fn51623[1];
return _v_51625_i;
return V{};
},2)};return j::call(_method,_params57009,_receiver57007);})();V _method57005=this->_literals[40];V _method=j::get(_receiver57004,_method57005);j::Args _params57006=j::Args{j::function([=](const j::Args &_args_fn51626,const V &_receiver_fn51626,const V &_self_fn51626) mutable ->V{
V _v_51627_i;
_v_51627_i=_args_fn51626[0];
return ([&]()->V{V _logical56998=j::unary("!",j::get(_v_51369_hidden.get(),_v_51627_i));return j::truth(_logical56998)?([&]()->V{V _receiver57001=j::get(_v_51343_partsOf.get(),_v_51627_i);V _method57002=this->_literals[58];V _method=j::get(_receiver57001,_method57002);j::Args _params57003=j::Args{j::function([=](const j::Args &_args_fn51628,const V &_receiver_fn51628,const V &_self_fn51628) mutable ->V{
V _v_51629_p;
_v_51629_p=_args_fn51628[0];
return ([&]()->V{V _lhs56999=j::get(_v_51629_p,this->_literals[235]);V _rhs57000=_v_51621_pi.get();return V(j::equal(_lhs56999,_rhs57000,true));})();
return V{};
},1)};return j::call(_method,_params57003,_receiver57001);})():_logical56998;})();
return V{};
},1)};return j::call(_method,_params57006,_receiver57004);})();
if(j::truth(j::unary("!",j::get(_v_51622_list,this->_literals[5])))){continue;
}
_v_51630_b=([&]()->V{V _callee57010=_v_51381_boxOf;return j::call(_callee57010,j::Args{_v_51622_list});})();
_v_51631_x0=([&]()->V{V _lhs57011=([&]()->V{V _lhs57013=j::get(_v_51630_b,this->_literals[239]);V _rhs57014=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs57013)*j::number(_rhs57014));})();V _rhs57012=j::get(_v_51446_fit.get(),this->_literals[194]);return j::binary("+",_lhs57011,_rhs57012);})();
_v_51632_x1=([&]()->V{V _lhs57015=([&]()->V{V _lhs57017=j::get(_v_51630_b,this->_literals[108]);V _rhs57018=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs57017)*j::number(_rhs57018));})();V _rhs57016=j::get(_v_51446_fit.get(),this->_literals[194]);return j::binary("+",_lhs57015,_rhs57016);})();
_v_51633_y0=([&]()->V{V _lhs57019=([&]()->V{V _lhs57021=([&]()->V{V _lhs57023=j::get(_v_51630_b,this->_literals[240]);V _rhs57024=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs57023)*j::number(_rhs57024));})();V _rhs57022=j::get(_v_51446_fit.get(),this->_literals[195]);return j::binary("+",_lhs57021,_rhs57022);})();V _rhs57020=_v_51340_aspect.get();return V(j::number(_lhs57019)/j::number(_rhs57020));})();
_v_51634_y1=([&]()->V{V _lhs57025=([&]()->V{V _lhs57027=([&]()->V{V _lhs57029=j::get(_v_51630_b,this->_literals[109]);V _rhs57030=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs57029)*j::number(_rhs57030));})();V _rhs57028=j::get(_v_51446_fit.get(),this->_literals[195]);return j::binary("+",_lhs57027,_rhs57028);})();V _rhs57026=_v_51340_aspect.get();return V(j::number(_lhs57025)/j::number(_rhs57026));})();
(void)(([&]()->V{V _receiver57052=_v_51620_partBox.get();V _method57053=this->_literals[123];V _method=j::get(_receiver57052,_method57053);j::Args _params57054=j::Args{_v_51621_pi.get(),([&]()->V{V _obj57031=j::object();j::put(_obj57031,this->_literals[98],([&]()->V{V _number57032=_v_51631_x0;return V(std::floor(j::number(_number57032)));})());j::put(_obj57031,this->_literals[99],([&]()->V{V _number57033=_v_51633_y0;return V(std::floor(j::number(_number57033)));})());j::put(_obj57031,this->_literals[251],([&]()->V{V _receiver57040=j::builtin("Math");V _method57041=this->_literals[66];V _method=j::get(_receiver57040,_method57041);j::Args _params57042=j::Args{V(1.0),([&]()->V{V _lhs57034=([&]()->V{V _number57036=_v_51632_x1;return V(std::ceil(j::number(_number57036)));})();V _rhs57035=([&]()->V{V _number57037=_v_51631_x0;return V(std::floor(j::number(_number57037)));})();return V(j::number(_lhs57034)-j::number(_rhs57035));})()};return j::call(_method,_params57042,_receiver57040);})());j::put(_obj57031,this->_literals[252],([&]()->V{V _receiver57049=j::builtin("Math");V _method57050=this->_literals[66];V _method=j::get(_receiver57049,_method57050);j::Args _params57051=j::Args{V(1.0),([&]()->V{V _lhs57043=([&]()->V{V _number57045=_v_51634_y1;return V(std::ceil(j::number(_number57045)));})();V _rhs57044=([&]()->V{V _number57046=_v_51633_y0;return V(std::floor(j::number(_number57046)));})();return V(j::number(_lhs57043)-j::number(_rhs57044));})()};return j::call(_method,_params57051,_receiver57049);})());return _obj57031;})()};return j::call(_method,_params57054,_receiver57052);})());

}
}}
_v_51635_draw=j::function([=](const j::Args &_args_fn51636,const V &_receiver_fn51636,const V &_self_fn51636) mutable ->V{
{
j::Cell _v_51637_raster;
j::Cell _v_51638_base;
V _v_51639_nParts;
j::Cell _v_51640_chars;
j::Cell _v_51641_slots;
j::Cell _v_51642_owner;
j::Cell _v_51643_cover;
j::Cell _v_51645_alpha;
j::Cell _v_51646_knock;
j::Cell _v_51647_slotOf;
j::Cell _v_51648_partOfPaint;
j::Cell _v_51649_fillOf;
j::Cell _v_51650_charOf;
j::Cell _v_51654_groupOf;
j::Cell _v_51658_v;
j::Cell _v_51659_votes;
j::Cell _v_51660_partVotes;
j::Cell _v_51661_touched;
j::Cell _v_51662_seenParts;
j::Cell _v_51663_W;
j::Cell _v_51664_ids;
j::Cell _v_51665_bw;
j::Cell _v_51666_bh;
j::Cell _v_51667_per;
j::Cell _v_51668_based;
j::Cell _v_51669_poses;
j::Cell _v_51670_pose;
j::Cell _v_51675_place;
j::Cell _v_51696_traceBuffers;
j::Cell _v_51697_traced;
j::Cell _v_51716_rasterise;
j::Cell _v_51724_sure;
j::Cell _v_51725_alongs;
j::Cell _v_51726_stamp;
j::Cell _v_51727_outlines;
j::Cell _v_51816_cellsOf;
j::Cell _v_51850_still;
_v_51637_raster.get()=(j::truth(_v_51501_outline.get())?([&]()->V{V _callee57055=this->_v_51086_Raster.get();return j::construct(_callee57055,j::Args{V(1.0),V(1.0)});})():([&]()->V{V _callee57060=this->_v_51086_Raster.get();return j::construct(_callee57060,j::Args{([&]()->V{V _lhs57056=_v_51485_cols.get();V _rhs57057=_v_51487_sx.get();return V(j::number(_lhs57056)*j::number(_rhs57057));})(),([&]()->V{V _lhs57058=_v_51486_rows.get();V _rhs57059=_v_51488_sy.get();return V(j::number(_lhs57058)*j::number(_rhs57059));})()});})());
_v_51638_base.get()=(j::truth(([&]()->V{V _lhs57061=_v_51607_firstMoving.get();V _rhs57062=V(0.0);return j::binary(">",_lhs57061,_rhs57062);})())?([&]()->V{V _callee57063=j::builtin("Uint16Array");return j::construct(_callee57063,j::Args{j::get(j::get(_v_51637_raster.get(),this->_literals[272]),this->_literals[5])});})():V::null());
_v_51639_nParts=j::get(j::get(_v_51339_o.get(),this->_literals[184]),this->_literals[5]);
_v_51640_chars.get()=([&]()->V{V _callee57066=j::builtin("Uint16Array");return j::construct(_callee57066,j::Args{([&]()->V{V _lhs57064=_v_51485_cols.get();V _rhs57065=_v_51486_rows.get();return V(j::number(_lhs57064)*j::number(_rhs57065));})()});})();
_v_51641_slots.get()=([&]()->V{V _callee57069=j::builtin("Int16Array");return j::construct(_callee57069,j::Args{([&]()->V{V _lhs57067=_v_51485_cols.get();V _rhs57068=_v_51486_rows.get();return V(j::number(_lhs57067)*j::number(_rhs57068));})()});})();
_v_51642_owner.get()=([&]()->V{V _callee57072=j::builtin("Int16Array");return j::construct(_callee57072,j::Args{([&]()->V{V _lhs57070=_v_51485_cols.get();V _rhs57071=_v_51486_rows.get();return V(j::number(_lhs57070)*j::number(_rhs57071));})()});})();
_v_51643_cover.get()=([&]()->V{V _receiver57077=j::builtin("Array");V _method57078=this->_literals[113];V _method=j::get(_receiver57077,_method57078);j::Args _params57079=j::Args{([&]()->V{V _obj57073=j::object();j::put(_obj57073,this->_literals[5],_v_51639_nParts);return _obj57073;})(),j::function([=](const j::Args &_args_fn51644,const V &_receiver_fn51644,const V &_self_fn51644) mutable ->V{
return ([&]()->V{V _callee57076=j::builtin("Float32Array");return j::construct(_callee57076,j::Args{([&]()->V{V _lhs57074=_v_51485_cols.get();V _rhs57075=_v_51486_rows.get();return V(j::number(_lhs57074)*j::number(_rhs57075));})()});})();
return V{};
},0)};return j::call(_method,_params57079,_receiver57077);})();
_v_51645_alpha.get()=([&]()->V{V _callee57082=j::builtin("Float32Array");return j::construct(_callee57082,j::Args{([&]()->V{V _lhs57080=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs57081=V(1.0);return j::binary("+",_lhs57080,_rhs57081);})()});})();
_v_51646_knock.get()=([&]()->V{V _callee57085=j::builtin("Uint8Array");return j::construct(_callee57085,j::Args{([&]()->V{V _lhs57083=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs57084=V(1.0);return j::binary("+",_lhs57083,_rhs57084);})()});})();
_v_51647_slotOf.get()=([&]()->V{V _callee57088=j::builtin("Int16Array");return j::construct(_callee57088,j::Args{([&]()->V{V _lhs57086=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs57087=V(1.0);return j::binary("+",_lhs57086,_rhs57087);})()});})();
_v_51648_partOfPaint.get()=([&]()->V{V _receiver57089=([&]()->V{V _callee57094=j::builtin("Int16Array");return j::construct(_callee57094,j::Args{([&]()->V{V _lhs57092=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs57093=V(1.0);return j::binary("+",_lhs57092,_rhs57093);})()});})();V _method57090=this->_literals[130];V _method=j::get(_receiver57089,_method57090);j::Args _params57091=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params57091,_receiver57089);})();
_v_51649_fillOf.get()=([&]()->V{V _callee57097=j::builtin("Uint16Array");return j::construct(_callee57097,j::Args{([&]()->V{V _lhs57095=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs57096=V(1.0);return j::binary("+",_lhs57095,_rhs57096);})()});})();
_v_51650_charOf.get()=([&]()->V{V _callee57100=j::builtin("Uint16Array");return j::construct(_callee57100,j::Args{([&]()->V{V _lhs57098=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs57099=V(1.0);return j::binary("+",_lhs57098,_rhs57099);})()});})();
(void)(([&]()->V{V _receiver57131=_v_51498_paints.get();V _method57132=this->_literals[225];V _method=j::get(_receiver57131,_method57132);j::Args _params57133=j::Args{j::function([=](const j::Args &_args_fn51651,const V &_receiver_fn51651,const V &_self_fn51651) mutable ->V{
V _v_51652_p;
V _v_51653_i;
_v_51652_p=_args_fn51651[0];
_v_51653_i=_args_fn51651[1];
{
(void)(([&]()->V{V _base57102=_v_51645_alpha.get();V _key57103=([&]()->V{V _lhs57104=_v_51653_i;V _rhs57105=V(1.0);return j::binary("+",_lhs57104,_rhs57105);})();V _assign57101=j::get(_v_51652_p,this->_literals[258]);return j::put(_base57102,_key57103,_assign57101);})());
(void)(([&]()->V{V _base57107=_v_51646_knock.get();V _key57108=([&]()->V{V _lhs57109=_v_51653_i;V _rhs57110=V(1.0);return j::binary("+",_lhs57109,_rhs57110);})();V _assign57106=(j::truth(j::get(_v_51652_p,this->_literals[268]))?V(1.0):V(0.0));return j::put(_base57107,_key57108,_assign57106);})());
(void)(([&]()->V{V _base57112=_v_51647_slotOf.get();V _key57113=([&]()->V{V _lhs57114=_v_51653_i;V _rhs57115=V(1.0);return j::binary("+",_lhs57114,_rhs57115);})();V _assign57111=j::get(_v_51652_p,this->_literals[266]);return j::put(_base57112,_key57113,_assign57111);})());
(void)(([&]()->V{V _base57117=_v_51648_partOfPaint.get();V _key57118=([&]()->V{V _lhs57119=_v_51653_i;V _rhs57120=V(1.0);return j::binary("+",_lhs57119,_rhs57120);})();V _assign57116=j::get(_v_51652_p,this->_literals[235]);return j::put(_base57117,_key57118,_assign57116);})());
(void)(([&]()->V{V _base57122=_v_51649_fillOf.get();V _key57123=([&]()->V{V _lhs57124=_v_51653_i;V _rhs57125=V(1.0);return j::binary("+",_lhs57124,_rhs57125);})();V _assign57121=j::get(_v_51652_p,this->_literals[130]);return j::put(_base57122,_key57123,_assign57121);})());
(void)(([&]()->V{V _base57127=_v_51650_charOf.get();V _key57128=([&]()->V{V _lhs57129=_v_51653_i;V _rhs57130=V(1.0);return j::binary("+",_lhs57129,_rhs57130);})();V _assign57126=j::get(_v_51652_p,this->_literals[212]);return j::put(_base57127,_key57128,_assign57126);})());

}

return V{};
},2)};return j::call(_method,_params57133,_receiver57131);})());
_v_51654_groupOf.get()=([&]()->V{V _callee57136=j::builtin("Uint16Array");return j::construct(_callee57136,j::Args{([&]()->V{V _lhs57134=j::get(_v_51498_paints.get(),this->_literals[5]);V _rhs57135=V(1.0);return j::binary("+",_lhs57134,_rhs57135);})()});})();
(void)(([&]()->V{V _receiver57142=_v_51498_paints.get();V _method57143=this->_literals[225];V _method=j::get(_receiver57142,_method57143);j::Args _params57144=j::Args{j::function([=](const j::Args &_args_fn51655,const V &_receiver_fn51655,const V &_self_fn51655) mutable ->V{
V _v_51656_p;
V _v_51657_i;
_v_51656_p=_args_fn51655[0];
_v_51657_i=_args_fn51655[1];
return ([&]()->V{V _base57138=_v_51654_groupOf.get();V _key57139=([&]()->V{V _lhs57140=_v_51657_i;V _rhs57141=V(1.0);return j::binary("+",_lhs57140,_rhs57141);})();V _assign57137=j::get(_v_51656_p,this->_literals[267]);return j::put(_base57138,_key57139,_assign57137);})();
return V{};
},2)};return j::call(_method,_params57144,_receiver57142);})());
_v_51658_v.get()=([&]()->V{V _callee57145=j::builtin("Float64Array");return j::construct(_callee57145,j::Args{V(8.0)});})();
_v_51659_votes.get()=([&]()->V{V _callee57148=j::builtin("Uint16Array");return j::construct(_callee57148,j::Args{([&]()->V{V _lhs57146=j::get(_v_51580_groups.get(),this->_literals[5]);V _rhs57147=V(1.0);return j::binary("+",_lhs57146,_rhs57147);})()});})();
_v_51660_partVotes.get()=([&]()->V{V _callee57151=j::builtin("Uint16Array");return j::construct(_callee57151,j::Args{([&]()->V{V _lhs57149=_v_51639_nParts;V _rhs57150=V(1.0);return j::binary("+",_lhs57149,_rhs57150);})()});})();
_v_51661_touched.get()=([&]()->V{V _callee57152=j::builtin("Int16Array");return j::construct(_callee57152,j::Args{j::get(_v_51659_votes.get(),this->_literals[5])});})();
_v_51662_seenParts.get()=([&]()->V{V _callee57155=j::builtin("Int16Array");return j::construct(_callee57155,j::Args{([&]()->V{V _lhs57153=_v_51639_nParts;V _rhs57154=V(1.0);return j::binary("+",_lhs57153,_rhs57154);})()});})();
_v_51663_W.get()=j::get(_v_51637_raster.get(),this->_literals[273]);
_v_51664_ids.get()=j::get(_v_51637_raster.get(),this->_literals[272]);
_v_51665_bw.get()=([&]()->V{V _lhs57156=_v_51487_sx.get();V _rhs57157=V(2.0);return V(j::number(_lhs57156)/j::number(_rhs57157));})();
_v_51666_bh.get()=([&]()->V{V _lhs57158=_v_51488_sy.get();V _rhs57159=V(4.0);return V(j::number(_lhs57158)/j::number(_rhs57159));})();
_v_51667_per.get()=([&]()->V{V _lhs57160=_v_51665_bw.get();V _rhs57161=_v_51666_bh.get();return V(j::number(_lhs57160)*j::number(_rhs57161));})();
_v_51668_based.get()=V(false);
_v_51669_poses.get()=([&]()->V{V _callee57162=j::builtin("Map");return j::construct(_callee57162,j::Args{});})();
_v_51670_pose.get()=j::function([=](const j::Args &_args_fn51671,const V &_receiver_fn51671,const V &_self_fn51671) mutable ->V{
V _v_51672_mv;
V _v_51673_t;
_v_51672_mv=_args_fn51671[0];
_v_51673_t=_args_fn51671[1];
{
V _v_51674_c;
_v_51674_c=([&]()->V{V _receiver57163=_v_51669_poses.get();V _method57164=this->_literals[54];V _method=j::get(_receiver57163,_method57164);j::Args _params57165=j::Args{_v_51672_mv};return j::call(_method,_params57165,_receiver57163);})();
if(j::truth(j::unary("!",_v_51674_c))){(void)(([&]()->V{V _receiver57168=_v_51669_poses.get();V _method57169=this->_literals[123];V _method=j::get(_receiver57168,_method57169);j::Args _params57170=j::Args{_v_51672_mv,(_v_51674_c=([&]()->V{V _obj57167=j::object();j::put(_obj57167,this->_literals[274],j::builtin("NaN"));j::put(_obj57167,this->_literals[275],this->_v_50576_IDENTITY.get());return _obj57167;})())};return j::call(_method,_params57170,_receiver57168);})());
}
if(j::truth(([&]()->V{V _lhs57171=j::get(_v_51674_c,this->_literals[274]);V _rhs57172=_v_51673_t;return V(!j::equal(_lhs57171,_rhs57172,true));})())){(void)((([&]()->V{V _base57174=_v_51674_c;V _key57175=this->_literals[274];V _assign57173=_v_51673_t;return j::put(_base57174,_key57175,_assign57173);})(),([&]()->V{V _base57177=_v_51674_c;V _key57178=this->_literals[275];V _assign57176=([&]()->V{V _callee57179=this->_v_51245_motionAt.get();return j::call(_callee57179,j::Args{_v_51672_mv,_v_51673_t,_v_51447_rowUnits.get(),_v_51484_colUnits.get()});})();return j::put(_base57177,_key57178,_assign57176);})()));
}
return j::get(_v_51674_c,this->_literals[275]);

}

return V{};
},2);
_v_51675_place.get()=j::function([=](const j::Args &_args_fn51676,const V &_receiver_fn51676,const V &_self_fn51676) mutable ->V{
j::Cell _v_51677_p;
V _v_51678_t;
_v_51677_p.get()=_args_fn51676[0];
_v_51678_t=_args_fn51676[1];
{
V _v_51679_m;
j::Cell _v_51681_s;
j::Cell _v_51682_rp;
j::Cell _v_51683_top;
j::Cell _v_51684_depth;
j::Cell _v_51685_amp;
j::Cell _v_51686_phase;
j::Cell _v_51687_wave;
_v_51679_m=this->_v_50576_IDENTITY.get();
{for(const auto &_item57180:j::elements(j::get(_v_51677_p.get(),this->_literals[269]))){V _v_51680_mv;
_v_51680_mv=_item57180;
(void)((_v_51679_m=([&]()->V{V _callee57183=this->_v_50577_mul.get();return j::call(_callee57183,j::Args{([&]()->V{V _callee57182=_v_51670_pose.get();return j::call(_callee57182,j::Args{_v_51680_mv,_v_51678_t});})(),_v_51679_m});})()));
}}
_v_51681_s.get()=([&]()->V{V _callee57185=this->_v_50577_mul.get();return j::call(_callee57185,j::Args{_v_51490_toSamples.get(),([&]()->V{V _callee57184=this->_v_50577_mul.get();return j::call(_callee57184,j::Args{_v_51679_m,_v_51491_fromSamples.get()});})()});})();
_v_51682_rp.get()=j::get(_v_51677_p.get(),this->_literals[248]);
_v_51683_top.get()=V(0.0);
_v_51684_depth.get()=V(1.0);
_v_51685_amp.get()=V(0.0);
_v_51686_phase.get()=V(0.0);
_v_51687_wave.get()=V(1.0);
if(j::truth(_v_51682_rp.get())){
(void)((_v_51683_top.get()=([&]()->V{V _lhs57187=([&]()->V{V _lhs57189=([&]()->V{V _lhs57191=j::get(_v_51682_rp.get(),this->_literals[240]);V _rhs57192=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs57191)*j::number(_rhs57192));})();V _rhs57190=j::get(_v_51446_fit.get(),this->_literals[195]);return j::binary("+",_lhs57189,_rhs57190);})();V _rhs57188=_v_51489_ky.get();return V(j::number(_lhs57187)*j::number(_rhs57188));})()));
(void)((_v_51684_depth.get()=([&]()->V{V _receiver57204=j::builtin("Math");V _method57205=this->_literals[66];V _method=j::get(_receiver57204,_method57205);j::Args _params57206=j::Args{V(1.0),([&]()->V{V _lhs57194=([&]()->V{V _lhs57196=([&]()->V{V _lhs57198=([&]()->V{V _lhs57200=j::get(_v_51682_rp.get(),this->_literals[109]);V _rhs57201=j::get(_v_51682_rp.get(),this->_literals[240]);return V(j::number(_lhs57200)-j::number(_rhs57201));})();V _rhs57199=j::get(_v_51446_fit.get(),this->_literals[253]);return V(j::number(_lhs57198)*j::number(_rhs57199));})();V _rhs57197=_v_51489_ky.get();return V(j::number(_lhs57196)*j::number(_rhs57197));})();V _rhs57195=V(2.0);return V(j::number(_lhs57194)/j::number(_rhs57195));})()};return j::call(_method,_params57206,_receiver57204);})()));
(void)((_v_51685_amp.get()=([&]()->V{V _lhs57208=([&]()->V{V _lhs57210=j::get(_v_51682_rp.get(),this->_literals[205]);V _rhs57211=_v_51340_aspect.get();return V(j::number(_lhs57210)*j::number(_rhs57211));})();V _rhs57209=_v_51489_ky.get();return V(j::number(_lhs57208)*j::number(_rhs57209));})()));
(void)((_v_51686_phase.get()=([&]()->V{V _lhs57213=([&]()->V{V _lhs57215=this->_v_50444_TAU.get();V _rhs57216=([&]()->V{V _lhs57217=_v_51678_t;V _rhs57218=j::get(_v_51682_rp.get(),this->_literals[192]);return j::binary("+",_lhs57217,_rhs57218);})();return V(j::number(_lhs57215)*j::number(_rhs57216));})();V _rhs57214=j::get(_v_51682_rp.get(),this->_literals[193]);return V(j::number(_lhs57213)/j::number(_rhs57214));})()));
(void)((_v_51687_wave.get()=([&]()->V{V _lhs57220=V(12.0);V _rhs57221=_v_51487_sx.get();return V(j::number(_lhs57220)*j::number(_rhs57221));})()));

}

(void)(([&]()->V{V _receiver57303=j::get(_v_51677_p.get(),this->_literals[187]);V _method57304=this->_literals[225];V _method=j::get(_receiver57303,_method57304);j::Args _params57305=j::Args{j::function([=](const j::Args &_args_fn51688,const V &_receiver_fn51688,const V &_self_fn51688) mutable ->V{
V _v_51689_r;
V _v_51690_k;
_v_51689_r=_args_fn51688[0];
_v_51690_k=_args_fn51688[1];
{
V _v_51691_out;
_v_51691_out=j::get(j::get(_v_51677_p.get(),this->_literals[265]),_v_51690_k);
{V _v_51692_j;
_v_51692_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs57222=_v_51692_j;V _rhs57223=j::get(_v_51689_r,this->_literals[5]);return j::binary("<",_lhs57222,_rhs57223);})());(void)((_v_51692_j=j::binary("+",_v_51692_j,V(2.0))))){
V _v_51693_x;
V _v_51694_y;
_v_51693_x=j::get(_v_51689_r,_v_51692_j);
_v_51694_y=j::get(_v_51689_r,([&]()->V{V _lhs57225=_v_51692_j;V _rhs57226=V(1.0);return j::binary("+",_lhs57225,_rhs57226);})());
if(j::truth(_v_51682_rp.get())){
V _v_51695_w;
_v_51695_w=([&]()->V{V _callee57233=this->_v_50447_clamp.get();return j::call(_callee57233,j::Args{([&]()->V{V _lhs57227=V(1.0);V _rhs57228=([&]()->V{V _lhs57229=([&]()->V{V _lhs57231=_v_51694_y;V _rhs57232=_v_51683_top.get();return V(j::number(_lhs57231)-j::number(_rhs57232));})();V _rhs57230=_v_51684_depth.get();return V(j::number(_lhs57229)/j::number(_rhs57230));})();return V(j::number(_lhs57227)-j::number(_rhs57228));})()});})();
(void)((_v_51694_y=j::binary("+",_v_51694_y,([&]()->V{V _lhs57235=([&]()->V{V _lhs57237=([&]()->V{V _lhs57239=_v_51695_w;V _rhs57240=_v_51685_amp.get();return V(j::number(_lhs57239)*j::number(_rhs57240));})();V _rhs57238=([&]()->V{V _lhs57241=([&]()->V{V _number57249=([&]()->V{V _lhs57250=([&]()->V{V _lhs57252=([&]()->V{V _lhs57254=this->_v_50444_TAU.get();V _rhs57255=_v_51693_x;return V(j::number(_lhs57254)*j::number(_rhs57255));})();V _rhs57253=_v_51687_wave.get();return V(j::number(_lhs57252)/j::number(_rhs57253));})();V _rhs57251=_v_51686_phase.get();return V(j::number(_lhs57250)-j::number(_rhs57251));})();return V(std::sin(j::number(_number57249)));})();V _rhs57242=([&]()->V{V _lhs57256=V(0.5);V _rhs57257=([&]()->V{V _number57268=([&]()->V{V _lhs57269=([&]()->V{V _lhs57271=([&]()->V{V _lhs57273=this->_v_50444_TAU.get();V _rhs57274=_v_51693_x;return V(j::number(_lhs57273)*j::number(_rhs57274));})();V _rhs57272=([&]()->V{V _lhs57275=_v_51687_wave.get();V _rhs57276=V(0.53);return V(j::number(_lhs57275)*j::number(_rhs57276));})();return V(j::number(_lhs57271)/j::number(_rhs57272));})();V _rhs57270=([&]()->V{V _lhs57277=V(2.0);V _rhs57278=_v_51686_phase.get();return V(j::number(_lhs57277)*j::number(_rhs57278));})();return j::binary("+",_lhs57269,_rhs57270);})();return V(std::sin(j::number(_number57268)));})();return V(j::number(_lhs57256)*j::number(_rhs57257));})();return j::binary("+",_lhs57241,_rhs57242);})();return V(j::number(_lhs57237)*j::number(_rhs57238));})();V _rhs57236=V(1.5);return V(j::number(_lhs57235)/j::number(_rhs57236));})())));

}

(void)(([&]()->V{V _base57280=_v_51691_out;V _key57281=_v_51692_j;V _assign57279=([&]()->V{V _lhs57282=([&]()->V{V _lhs57284=([&]()->V{V _lhs57286=j::get(_v_51681_s.get(),V(0.0));V _rhs57287=_v_51693_x;return V(j::number(_lhs57286)*j::number(_rhs57287));})();V _rhs57285=([&]()->V{V _lhs57288=j::get(_v_51681_s.get(),V(2.0));V _rhs57289=_v_51694_y;return V(j::number(_lhs57288)*j::number(_rhs57289));})();return j::binary("+",_lhs57284,_rhs57285);})();V _rhs57283=j::get(_v_51681_s.get(),V(4.0));return j::binary("+",_lhs57282,_rhs57283);})();return j::put(_base57280,_key57281,_assign57279);})());
(void)(([&]()->V{V _base57291=_v_51691_out;V _key57292=([&]()->V{V _lhs57293=_v_51692_j;V _rhs57294=V(1.0);return j::binary("+",_lhs57293,_rhs57294);})();V _assign57290=([&]()->V{V _lhs57295=([&]()->V{V _lhs57297=([&]()->V{V _lhs57299=j::get(_v_51681_s.get(),V(1.0));V _rhs57300=_v_51693_x;return V(j::number(_lhs57299)*j::number(_rhs57300));})();V _rhs57298=([&]()->V{V _lhs57301=j::get(_v_51681_s.get(),V(3.0));V _rhs57302=_v_51694_y;return V(j::number(_lhs57301)*j::number(_rhs57302));})();return j::binary("+",_lhs57297,_rhs57298);})();V _rhs57296=j::get(_v_51681_s.get(),V(5.0));return j::binary("+",_lhs57295,_rhs57296);})();return j::put(_base57291,_key57292,_assign57290);})());

}
}

}

return V{};
},2)};return j::call(_method,_params57305,_receiver57303);})());
return j::get(_v_51677_p.get(),this->_literals[265]);

}

return V{};
},2);
_v_51696_traceBuffers.get()=([&]()->V{V _callee57306=j::builtin("Map");return j::construct(_callee57306,j::Args{});})();
_v_51697_traced.get()=j::function([=](const j::Args &_args_fn51698,const V &_receiver_fn51698,const V &_self_fn51698) mutable ->V{
V _v_51699_p;
V _v_51700_rings;
V _v_51701_t;
_v_51699_p=_args_fn51698[0];
_v_51700_rings=_args_fn51698[1];
_v_51701_t=_args_fn51698[2];
{
V _v_51702_tr;
V _v_51703_b;
V _v_51704_tail;
V _v_51705_head;
V _v_51706_lo;
V _v_51707_hi;
V _v_51708_shown;
_v_51702_tr=j::get(_v_51699_p,this->_literals[247]);
_v_51703_b=([&]()->V{V _receiver57307=_v_51696_traceBuffers.get();V _method57308=this->_literals[54];V _method=j::get(_receiver57307,_method57308);j::Args _params57309=j::Args{_v_51699_p};return j::call(_method,_params57309,_receiver57307);})();
if(j::truth(j::unary("!",_v_51703_b))){(void)(([&]()->V{V _receiver57315=_v_51696_traceBuffers.get();V _method57316=this->_literals[123];V _method=j::get(_receiver57315,_method57316);j::Args _params57317=j::Args{_v_51699_p,(_v_51703_b=([&]()->V{V _obj57311=j::object();j::put(_obj57311,this->_literals[276],([&]()->V{j::Args _array57312;return j::array(std::move(_array57312));})());j::put(_obj57311,this->_literals[277],([&]()->V{j::Args _array57313;return j::array(std::move(_array57313));})());j::put(_obj57311,this->_literals[278],V::null());j::put(_obj57311,this->_literals[279],([&]()->V{j::Args _array57314;return j::array(std::move(_array57314));})());return _obj57311;})())};return j::call(_method,_params57317,_receiver57315);})());
}
V _pattern57319=([&]()->V{V _callee57318=this->_v_50975_traceWindow.get();return j::call(_callee57318,j::Args{j::get(j::get(_v_51702_tr,this->_literals[264]),this->_literals[193]),j::get(j::get(_v_51702_tr,this->_literals[264]),this->_literals[192]),_v_51701_t});})();
_v_51704_tail=j::get(_pattern57319,V(0));
_v_51705_head=j::get(_pattern57319,V(1));
if(j::truth(([&]()->V{V _logical57320=([&]()->V{V _lhs57321=_v_51704_tail;V _rhs57322=V(0.0);return j::binary("<=",_lhs57321,_rhs57322);})();return j::truth(_logical57320)?([&]()->V{V _lhs57323=_v_51705_head;V _rhs57324=V(1.0);return j::binary(">=",_lhs57323,_rhs57324);})():_logical57320;})())){
if(j::truth(([&]()->V{V _lhs57325=j::get(_v_51702_tr,this->_literals[260]);V _rhs57326=j::get(_v_51700_rings,this->_literals[5]);return j::binary(">=",_lhs57325,_rhs57326);})())){return ([&]()->V{V _obj57327=j::object();j::put(_obj57327,this->_literals[187],_v_51700_rings);j::put(_obj57327,this->_literals[159],V(false));return _obj57327;})();
}
if(j::truth(([&]()->V{V _lhs57328=j::get(_v_51703_b,this->_literals[278]);V _rhs57329=_v_51700_rings;return V(!j::equal(_lhs57328,_rhs57329,true));})())){(void)((([&]()->V{V _base57331=_v_51703_b;V _key57332=this->_literals[278];V _assign57330=_v_51700_rings;return j::put(_base57331,_key57332,_assign57330);})(),([&]()->V{V _base57334=_v_51703_b;V _key57335=this->_literals[279];V _assign57333=([&]()->V{V _receiver57336=_v_51700_rings;V _method57337=this->_literals[8];V _method=j::get(_receiver57336,_method57337);j::Args _params57338=j::Args{j::get(_v_51702_tr,this->_literals[260])};return j::call(_method,_params57338,_receiver57336);})();return j::put(_base57334,_key57335,_assign57333);})()));
}
return ([&]()->V{V _obj57339=j::object();j::put(_obj57339,this->_literals[187],j::get(_v_51703_b,this->_literals[279]));j::put(_obj57339,this->_literals[159],j::get(_v_51699_p,this->_literals[159]));return _obj57339;})();

}

_v_51706_lo=([&]()->V{V _lhs57340=_v_51704_tail;V _rhs57341=j::get(_v_51702_tr,this->_literals[190]);return V(j::number(_lhs57340)*j::number(_rhs57341));})();
_v_51707_hi=([&]()->V{V _lhs57342=_v_51705_head;V _rhs57343=j::get(_v_51702_tr,this->_literals[190]);return V(j::number(_lhs57342)*j::number(_rhs57343));})();
_v_51708_shown=j::get(_v_51703_b,this->_literals[277]);
(void)(([&]()->V{V _base57345=_v_51708_shown;V _key57346=this->_literals[5];V _assign57344=V(0.0);return j::put(_base57345,_key57346,_assign57344);})());
{V _v_51709_k;
_v_51709_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs57347=_v_51709_k;V _rhs57348=j::get(_v_51702_tr,this->_literals[260]);return j::binary("<",_lhs57347,_rhs57348);})());(void)(j::increment(_v_51709_k,1,false))){
V _v_51710_a;
V _v_51711_z;
V _v_51712_f0;
V _v_51713_f1;
V _v_51714_r;
V _v_51715_c;
_v_51710_a=j::get(j::get(_v_51702_tr,this->_literals[113]),_v_51709_k);
_v_51711_z=j::get(j::get(_v_51702_tr,this->_literals[188]),_v_51709_k);
if(j::truth(j::unary("!",j::get(j::get(_v_51702_tr,this->_literals[189]),_v_51709_k)))){
if(j::truth(([&]()->V{V _logical57349=([&]()->V{V _logical57350=([&]()->V{V _lhs57351=_v_51710_a;V _rhs57352=_v_51706_lo;return j::binary(">=",_lhs57351,_rhs57352);})();return j::truth(_logical57350)?([&]()->V{V _lhs57353=_v_51710_a;V _rhs57354=_v_51707_hi;return j::binary("<=",_lhs57353,_rhs57354);})():_logical57350;})();return j::truth(_logical57349)?([&]()->V{V _lhs57355=_v_51707_hi;V _rhs57356=_v_51706_lo;return j::binary(">",_lhs57355,_rhs57356);})():_logical57349;})())){(void)(([&]()->V{V _receiver57357=_v_51708_shown;V _method57358=this->_literals[25];V _method=j::get(_receiver57357,_method57358);j::Args _params57359=j::Args{j::get(_v_51700_rings,_v_51709_k)};return j::call(_method,_params57359,_receiver57357);})());
}
continue;

}

if(j::truth(([&]()->V{V _logical57360=([&]()->V{V _lhs57361=_v_51711_z;V _rhs57362=_v_51706_lo;return j::binary("<=",_lhs57361,_rhs57362);})();return !j::truth(_logical57360)?([&]()->V{V _lhs57363=_v_51710_a;V _rhs57364=_v_51707_hi;return j::binary(">=",_lhs57363,_rhs57364);})():_logical57360;})())){continue;
}
if(j::truth(([&]()->V{V _logical57365=([&]()->V{V _lhs57366=_v_51710_a;V _rhs57367=_v_51706_lo;return j::binary(">=",_lhs57366,_rhs57367);})();return j::truth(_logical57365)?([&]()->V{V _lhs57368=_v_51711_z;V _rhs57369=_v_51707_hi;return j::binary("<=",_lhs57368,_rhs57369);})():_logical57365;})())){
(void)(([&]()->V{V _receiver57370=_v_51708_shown;V _method57371=this->_literals[25];V _method=j::get(_receiver57370,_method57371);j::Args _params57372=j::Args{j::get(_v_51700_rings,_v_51709_k)};return j::call(_method,_params57372,_receiver57370);})());
continue;

}

_v_51712_f0=([&]()->V{V _receiver57381=j::builtin("Math");V _method57382=this->_literals[66];V _method=j::get(_receiver57381,_method57382);j::Args _params57383=j::Args{V(0.0),([&]()->V{V _lhs57373=([&]()->V{V _lhs57375=_v_51706_lo;V _rhs57376=_v_51710_a;return V(j::number(_lhs57375)-j::number(_rhs57376));})();V _rhs57374=([&]()->V{V _lhs57377=_v_51711_z;V _rhs57378=_v_51710_a;return V(j::number(_lhs57377)-j::number(_rhs57378));})();return V(j::number(_lhs57373)/j::number(_rhs57374));})()};return j::call(_method,_params57383,_receiver57381);})();
_v_51713_f1=([&]()->V{V _receiver57392=j::builtin("Math");V _method57393=this->_literals[116];V _method=j::get(_receiver57392,_method57393);j::Args _params57394=j::Args{V(1.0),([&]()->V{V _lhs57384=([&]()->V{V _lhs57386=_v_51707_hi;V _rhs57387=_v_51710_a;return V(j::number(_lhs57386)-j::number(_rhs57387));})();V _rhs57385=([&]()->V{V _lhs57388=_v_51711_z;V _rhs57389=_v_51710_a;return V(j::number(_lhs57388)-j::number(_rhs57389));})();return V(j::number(_lhs57384)/j::number(_rhs57385));})()};return j::call(_method,_params57394,_receiver57392);})();
_v_51714_r=j::get(_v_51700_rings,_v_51709_k);
_v_51715_c=([&]()->V{V _base57396=j::get(_v_51703_b,this->_literals[276]);V _key57397=_v_51709_k;V _old57398=j::get(_base57396,_key57397);return j::nullish(_old57398)?j::put(_base57396,_key57397,([&]()->V{V _callee57399=j::builtin("Float64Array");return j::construct(_callee57399,j::Args{V(8.0)});})()):_old57398;})();
(void)(([&]()->V{V _base57401=_v_51715_c;V _key57402=V(0.0);V _assign57400=([&]()->V{V _lhs57403=j::get(_v_51714_r,V(0.0));V _rhs57404=([&]()->V{V _lhs57405=([&]()->V{V _lhs57407=j::get(_v_51714_r,V(2.0));V _rhs57408=j::get(_v_51714_r,V(0.0));return V(j::number(_lhs57407)-j::number(_rhs57408));})();V _rhs57406=_v_51712_f0;return V(j::number(_lhs57405)*j::number(_rhs57406));})();return j::binary("+",_lhs57403,_rhs57404);})();return j::put(_base57401,_key57402,_assign57400);})());
(void)(([&]()->V{V _base57410=_v_51715_c;V _key57411=V(1.0);V _assign57409=([&]()->V{V _lhs57412=j::get(_v_51714_r,V(1.0));V _rhs57413=([&]()->V{V _lhs57414=([&]()->V{V _lhs57416=j::get(_v_51714_r,V(3.0));V _rhs57417=j::get(_v_51714_r,V(1.0));return V(j::number(_lhs57416)-j::number(_rhs57417));})();V _rhs57415=_v_51712_f0;return V(j::number(_lhs57414)*j::number(_rhs57415));})();return j::binary("+",_lhs57412,_rhs57413);})();return j::put(_base57410,_key57411,_assign57409);})());
(void)(([&]()->V{V _base57419=_v_51715_c;V _key57420=V(2.0);V _assign57418=([&]()->V{V _lhs57421=j::get(_v_51714_r,V(0.0));V _rhs57422=([&]()->V{V _lhs57423=([&]()->V{V _lhs57425=j::get(_v_51714_r,V(2.0));V _rhs57426=j::get(_v_51714_r,V(0.0));return V(j::number(_lhs57425)-j::number(_rhs57426));})();V _rhs57424=_v_51713_f1;return V(j::number(_lhs57423)*j::number(_rhs57424));})();return j::binary("+",_lhs57421,_rhs57422);})();return j::put(_base57419,_key57420,_assign57418);})());
(void)(([&]()->V{V _base57428=_v_51715_c;V _key57429=V(3.0);V _assign57427=([&]()->V{V _lhs57430=j::get(_v_51714_r,V(1.0));V _rhs57431=([&]()->V{V _lhs57432=([&]()->V{V _lhs57434=j::get(_v_51714_r,V(3.0));V _rhs57435=j::get(_v_51714_r,V(1.0));return V(j::number(_lhs57434)-j::number(_rhs57435));})();V _rhs57433=_v_51713_f1;return V(j::number(_lhs57432)*j::number(_rhs57433));})();return j::binary("+",_lhs57430,_rhs57431);})();return j::put(_base57428,_key57429,_assign57427);})());
(void)(([&]()->V{V _base57437=_v_51715_c;V _key57438=V(4.0);V _assign57436=([&]()->V{V _lhs57439=j::get(_v_51714_r,V(6.0));V _rhs57440=([&]()->V{V _lhs57441=([&]()->V{V _lhs57443=j::get(_v_51714_r,V(4.0));V _rhs57444=j::get(_v_51714_r,V(6.0));return V(j::number(_lhs57443)-j::number(_rhs57444));})();V _rhs57442=_v_51713_f1;return V(j::number(_lhs57441)*j::number(_rhs57442));})();return j::binary("+",_lhs57439,_rhs57440);})();return j::put(_base57437,_key57438,_assign57436);})());
(void)(([&]()->V{V _base57446=_v_51715_c;V _key57447=V(5.0);V _assign57445=([&]()->V{V _lhs57448=j::get(_v_51714_r,V(7.0));V _rhs57449=([&]()->V{V _lhs57450=([&]()->V{V _lhs57452=j::get(_v_51714_r,V(5.0));V _rhs57453=j::get(_v_51714_r,V(7.0));return V(j::number(_lhs57452)-j::number(_rhs57453));})();V _rhs57451=_v_51713_f1;return V(j::number(_lhs57450)*j::number(_rhs57451));})();return j::binary("+",_lhs57448,_rhs57449);})();return j::put(_base57446,_key57447,_assign57445);})());
(void)(([&]()->V{V _base57455=_v_51715_c;V _key57456=V(6.0);V _assign57454=([&]()->V{V _lhs57457=j::get(_v_51714_r,V(6.0));V _rhs57458=([&]()->V{V _lhs57459=([&]()->V{V _lhs57461=j::get(_v_51714_r,V(4.0));V _rhs57462=j::get(_v_51714_r,V(6.0));return V(j::number(_lhs57461)-j::number(_rhs57462));})();V _rhs57460=_v_51712_f0;return V(j::number(_lhs57459)*j::number(_rhs57460));})();return j::binary("+",_lhs57457,_rhs57458);})();return j::put(_base57455,_key57456,_assign57454);})());
(void)(([&]()->V{V _base57464=_v_51715_c;V _key57465=V(7.0);V _assign57463=([&]()->V{V _lhs57466=j::get(_v_51714_r,V(7.0));V _rhs57467=([&]()->V{V _lhs57468=([&]()->V{V _lhs57470=j::get(_v_51714_r,V(5.0));V _rhs57471=j::get(_v_51714_r,V(7.0));return V(j::number(_lhs57470)-j::number(_rhs57471));})();V _rhs57469=_v_51712_f0;return V(j::number(_lhs57468)*j::number(_rhs57469));})();return j::binary("+",_lhs57466,_rhs57467);})();return j::put(_base57464,_key57465,_assign57463);})());
(void)(([&]()->V{V _receiver57472=_v_51708_shown;V _method57473=this->_literals[25];V _method=j::get(_receiver57472,_method57473);j::Args _params57474=j::Args{_v_51715_c};return j::call(_method,_params57474,_receiver57472);})());

}
}
return ([&]()->V{V _obj57475=j::object();j::put(_obj57475,this->_literals[187],_v_51708_shown);j::put(_obj57475,this->_literals[159],V(false));return _obj57475;})();

}

return V{};
},3);
_v_51716_rasterise.get()=j::function([=](const j::Args &_args_fn51717,const V &_receiver_fn51717,const V &_self_fn51717) mutable ->V{
V _v_51718_t;
_v_51718_t=_args_fn51717[0];
{
if(j::truth(([&]()->V{V _logical57476=_v_51638_base.get();return j::truth(_logical57476)?j::unary("!",_v_51668_based.get()):_logical57476;})())){
(void)(([&]()->V{V _receiver57477=_v_51664_ids.get();V _method57478=this->_literals[130];V _method=j::get(_receiver57477,_method57478);j::Args _params57479=j::Args{V(0.0)};return j::call(_method,_params57479,_receiver57477);})());
{V _v_51719_i;
_v_51719_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs57480=_v_51719_i;V _rhs57481=_v_51607_firstMoving.get();return j::binary("<",_lhs57480,_rhs57481);})());(void)(j::increment(_v_51719_i,1,false))){(void)(([&]()->V{V _receiver57484=_v_51637_raster.get();V _method57485=this->_literals[130];V _method=j::get(_receiver57484,_method57485);j::Args _params57486=j::Args{j::get(j::get(_v_51498_paints.get(),_v_51719_i),this->_literals[187]),j::get(j::get(_v_51498_paints.get(),_v_51719_i),this->_literals[159]),([&]()->V{V _lhs57482=_v_51719_i;V _rhs57483=V(1.0);return j::binary("+",_lhs57482,_rhs57483);})()};return j::call(_method,_params57486,_receiver57484);})());
}}
(void)(([&]()->V{V _receiver57487=_v_51638_base.get();V _method57488=this->_literals[123];V _method=j::get(_receiver57487,_method57488);j::Args _params57489=j::Args{_v_51664_ids.get()};return j::call(_method,_params57489,_receiver57487);})());
(void)((_v_51668_based.get()=V(true)));

}

if(j::truth(_v_51638_base.get())){(void)(([&]()->V{V _receiver57491=_v_51664_ids.get();V _method57492=this->_literals[123];V _method=j::get(_receiver57491,_method57492);j::Args _params57493=j::Args{_v_51638_base.get()};return j::call(_method,_params57493,_receiver57491);})());
}else {(void)(([&]()->V{V _receiver57494=_v_51664_ids.get();V _method57495=this->_literals[130];V _method=j::get(_receiver57494,_method57495);j::Args _params57496=j::Args{V(0.0)};return j::call(_method,_params57496,_receiver57494);})());
}
{V _v_51720_i;
_v_51720_i=([&]()->V{V _receiver57499=j::builtin("Math");V _method57500=this->_literals[66];V _method=j::get(_receiver57499,_method57500);j::Args _params57501=j::Args{V(0.0),_v_51607_firstMoving.get()};return j::call(_method,_params57501,_receiver57499);})();
for(;j::truth(([&]()->V{V _lhs57502=_v_51720_i;V _rhs57503=j::get(_v_51498_paints.get(),this->_literals[5]);return j::binary("<",_lhs57502,_rhs57503);})());(void)(j::increment(_v_51720_i,1,false))){
V _v_51721_p;
V _v_51722_rings;
_v_51721_p=j::get(_v_51498_paints.get(),_v_51720_i);
_v_51722_rings=(j::truth(j::get(_v_51721_p,this->_literals[265]))?([&]()->V{V _callee57504=_v_51675_place.get();return j::call(_callee57504,j::Args{_v_51721_p,_v_51718_t});})():j::get(_v_51721_p,this->_literals[187]));
if(j::truth(j::get(_v_51721_p,this->_literals[247]))){
V _v_51723_now;
_v_51723_now=([&]()->V{V _callee57505=_v_51697_traced.get();return j::call(_callee57505,j::Args{_v_51721_p,_v_51722_rings,_v_51718_t});})();
(void)(([&]()->V{V _receiver57508=_v_51637_raster.get();V _method57509=this->_literals[130];V _method=j::get(_receiver57508,_method57509);j::Args _params57510=j::Args{j::get(_v_51723_now,this->_literals[187]),j::get(_v_51723_now,this->_literals[159]),([&]()->V{V _lhs57506=_v_51720_i;V _rhs57507=V(1.0);return j::binary("+",_lhs57506,_rhs57507);})()};return j::call(_method,_params57510,_receiver57508);})());

}
else {(void)(([&]()->V{V _receiver57513=_v_51637_raster.get();V _method57514=this->_literals[130];V _method=j::get(_receiver57513,_method57514);j::Args _params57515=j::Args{_v_51722_rings,j::get(_v_51721_p,this->_literals[159]),([&]()->V{V _lhs57511=_v_51720_i;V _rhs57512=V(1.0);return j::binary("+",_lhs57511,_rhs57512);})()};return j::call(_method,_params57515,_receiver57513);})());
}

}
}

}

return V{};
},1);
_v_51724_sure.get()=([&]()->V{V _callee57518=j::builtin("Uint32Array");return j::construct(_callee57518,j::Args{([&]()->V{V _lhs57516=_v_51485_cols.get();V _rhs57517=_v_51486_rows.get();return V(j::number(_lhs57516)*j::number(_rhs57517));})()});})();
_v_51725_alongs.get()=([&]()->V{V _callee57519=j::builtin("Map");return j::construct(_callee57519,j::Args{});})();
_v_51726_stamp.get()=V(0.0);
_v_51727_outlines.get()=j::function([=](const j::Args &_args_fn51728,const V &_receiver_fn51728,const V &_self_fn51728) mutable ->V{
j::Cell _v_51729_t;
_v_51729_t.get()=_args_fn51728[0];
{
j::Cell _v_51731_set;
j::Cell _v_51738_segment;
(void)(j::increment(_v_51726_stamp.get(),1,false));
(void)(([&]()->V{V _receiver57520=_v_51640_chars.get();V _method57521=this->_literals[130];V _method=j::get(_receiver57520,_method57521);j::Args _params57522=j::Args{this->_v_50439_EMPTY.get()};return j::call(_method,_params57522,_receiver57520);})());
(void)(([&]()->V{V _receiver57523=_v_51641_slots.get();V _method57524=this->_literals[130];V _method=j::get(_receiver57523,_method57524);j::Args _params57525=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params57525,_receiver57523);})());
(void)(([&]()->V{V _receiver57526=_v_51642_owner.get();V _method57527=this->_literals[130];V _method=j::get(_receiver57526,_method57527);j::Args _params57528=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params57528,_receiver57526);})());
{for(const auto &_item57529:j::elements(_v_51643_cover.get())){V _v_51730_c;
_v_51730_c=_item57529;
(void)(([&]()->V{V _receiver57530=_v_51730_c;V _method57531=this->_literals[130];V _method=j::get(_receiver57530,_method57531);j::Args _params57532=j::Args{V(0.0)};return j::call(_method,_params57532,_receiver57530);})());
}}
_v_51731_set.get()=j::function([=](const j::Args &_args_fn51732,const V &_receiver_fn51732,const V &_self_fn51732) mutable ->V{
V _v_51733_x;
V _v_51734_y;
V _v_51735_ch;
V _v_51736_i;
_v_51733_x=_args_fn51732[0];
_v_51734_y=_args_fn51732[1];
_v_51735_ch=_args_fn51732[2];
_v_51736_i=_args_fn51732[3];
{
V _v_51737_k;
if(j::truth(([&]()->V{V _logical57533=([&]()->V{V _logical57534=([&]()->V{V _logical57535=([&]()->V{V _lhs57536=_v_51733_x;V _rhs57537=V(0.0);return j::binary("<",_lhs57536,_rhs57537);})();return !j::truth(_logical57535)?([&]()->V{V _lhs57538=_v_51734_y;V _rhs57539=V(0.0);return j::binary("<",_lhs57538,_rhs57539);})():_logical57535;})();return !j::truth(_logical57534)?([&]()->V{V _lhs57540=_v_51733_x;V _rhs57541=_v_51485_cols.get();return j::binary(">=",_lhs57540,_rhs57541);})():_logical57534;})();return !j::truth(_logical57533)?([&]()->V{V _lhs57542=_v_51734_y;V _rhs57543=_v_51486_rows.get();return j::binary(">=",_lhs57542,_rhs57543);})():_logical57533;})())){return V{};
}
_v_51737_k=([&]()->V{V _lhs57544=([&]()->V{V _lhs57546=_v_51734_y;V _rhs57547=_v_51485_cols.get();return V(j::number(_lhs57546)*j::number(_rhs57547));})();V _rhs57545=_v_51733_x;return j::binary("+",_lhs57544,_rhs57545);})();
(void)(([&]()->V{V _base57549=_v_51640_chars.get();V _key57550=_v_51737_k;V _assign57548=_v_51735_ch;return j::put(_base57549,_key57550,_assign57548);})());
(void)(([&]()->V{V _base57552=_v_51641_slots.get();V _key57553=_v_51737_k;V _assign57551=j::get(_v_51647_slotOf.get(),([&]()->V{V _lhs57554=_v_51736_i;V _rhs57555=V(1.0);return j::binary("+",_lhs57554,_rhs57555);})());return j::put(_base57552,_key57553,_assign57551);})());
(void)(([&]()->V{V _base57557=_v_51642_owner.get();V _key57558=_v_51737_k;V _assign57556=j::get(_v_51648_partOfPaint.get(),([&]()->V{V _lhs57559=_v_51736_i;V _rhs57560=V(1.0);return j::binary("+",_lhs57559,_rhs57560);})());return j::put(_base57557,_key57558,_assign57556);})());

}

return V{};
},4);
_v_51738_segment.get()=j::function([=](const j::Args &_args_fn51739,const V &_receiver_fn51739,const V &_self_fn51739) mutable ->V{
V _v_51740_x0;
V _v_51741_y0;
V _v_51742_x1;
V _v_51743_y1;
V _v_51744_tx;
V _v_51745_ty;
V _v_51746_i;
_v_51740_x0=_args_fn51739[0];
_v_51741_y0=_args_fn51739[1];
_v_51742_x1=_args_fn51739[2];
_v_51743_y1=_args_fn51739[3];
_v_51744_tx=_args_fn51739[4];
_v_51745_ty=_args_fn51739[5];
_v_51746_i=_args_fn51739[6];
{
V _v_51747_dx;
V _v_51748_dy;
V _v_51749_slope;
V _v_51750_rising;
V _v_51751_across;
V _v_51752_a;
V _v_51753_b;
_v_51747_dx=([&]()->V{V _lhs57561=_v_51742_x1;V _rhs57562=_v_51740_x0;return V(j::number(_lhs57561)-j::number(_rhs57562));})();
_v_51748_dy=([&]()->V{V _lhs57563=_v_51743_y1;V _rhs57564=_v_51741_y0;return V(j::number(_lhs57563)-j::number(_rhs57564));})();
if(j::truth(([&]()->V{V _logical57565=([&]()->V{V _lhs57566=([&]()->V{V _number57568=_v_51747_dx;return V(std::fabs(j::number(_number57568)));})();V _rhs57567=V(1e-9);return j::binary("<",_lhs57566,_rhs57567);})();return j::truth(_logical57565)?([&]()->V{V _lhs57569=([&]()->V{V _number57571=_v_51748_dy;return V(std::fabs(j::number(_number57571)));})();V _rhs57570=V(1e-9);return j::binary("<",_lhs57569,_rhs57570);})():_logical57565;})())){return V{};
}
_v_51749_slope=([&]()->V{V _lhs57572=([&]()->V{V _lhs57574=([&]()->V{V _number57580=([&]()->V{V _lhs57582=([&]()->V{V _number57584=_v_51745_ty;return V(std::fabs(j::number(_number57584)));})();V _rhs57583=_v_51340_aspect.get();return V(j::number(_lhs57582)*j::number(_rhs57583));})();V _number57581=([&]()->V{V _number57585=_v_51744_tx;return V(std::fabs(j::number(_number57585)));})();return V(std::atan2(j::number(_number57580),j::number(_number57581)));})();V _rhs57575=V(180.0);return V(j::number(_lhs57574)*j::number(_rhs57575));})();V _rhs57573=j::get(j::builtin("Math"),this->_literals[59]);return V(j::number(_lhs57572)/j::number(_rhs57573));})();
_v_51750_rising=([&]()->V{V _lhs57586=([&]()->V{V _lhs57588=_v_51744_tx;V _rhs57589=_v_51745_ty;return V(j::number(_lhs57588)*j::number(_rhs57589));})();V _rhs57587=V(0.0);return j::binary("<",_lhs57586,_rhs57587);})();
_v_51751_across=([&]()->V{V _lhs57590=([&]()->V{V _number57592=_v_51747_dx;return V(std::fabs(j::number(_number57592)));})();V _rhs57591=([&]()->V{V _number57593=_v_51748_dy;return V(std::fabs(j::number(_number57593)));})();return j::binary(">=",_lhs57590,_rhs57591);})();
_v_51752_a=(j::truth(_v_51751_across)?([&]()->V{V _receiver57596=j::builtin("Math");V _method57597=this->_literals[116];V _method=j::get(_receiver57596,_method57597);j::Args _params57598=j::Args{_v_51740_x0,_v_51742_x1};return j::call(_method,_params57598,_receiver57596);})():([&]()->V{V _receiver57601=j::builtin("Math");V _method57602=this->_literals[116];V _method=j::get(_receiver57601,_method57602);j::Args _params57603=j::Args{_v_51741_y0,_v_51743_y1};return j::call(_method,_params57603,_receiver57601);})());
_v_51753_b=(j::truth(_v_51751_across)?([&]()->V{V _receiver57606=j::builtin("Math");V _method57607=this->_literals[66];V _method=j::get(_receiver57606,_method57607);j::Args _params57608=j::Args{_v_51740_x0,_v_51742_x1};return j::call(_method,_params57608,_receiver57606);})():([&]()->V{V _receiver57611=j::builtin("Math");V _method57612=this->_literals[66];V _method=j::get(_receiver57611,_method57612);j::Args _params57613=j::Args{_v_51741_y0,_v_51743_y1};return j::call(_method,_params57613,_receiver57611);})());
{V _v_51754_c;
_v_51754_c=([&]()->V{V _number57614=_v_51752_a;return V(std::floor(j::number(_number57614)));})();
for(;j::truth(([&]()->V{V _logical57615=([&]()->V{V _lhs57616=_v_51754_c;V _rhs57617=([&]()->V{V _number57620=([&]()->V{V _lhs57621=_v_51753_b;V _rhs57622=V(1e-9);return V(j::number(_lhs57621)-j::number(_rhs57622));})();return V(std::floor(j::number(_number57620)));})();return j::binary("<=",_lhs57616,_rhs57617);})();return !j::truth(_logical57615)?([&]()->V{V _lhs57623=_v_51754_c;V _rhs57624=([&]()->V{V _number57625=_v_51752_a;return V(std::floor(j::number(_number57625)));})();return V(j::equal(_lhs57623,_rhs57624,true));})():_logical57615;})());(void)(j::increment(_v_51754_c,1,false))){
V _v_51755_m;
V _v_51756_x;
V _v_51757_y;
V _v_51758_cx;
V _v_51759_cy;
V _v_51760_at;
V _v_51761_exact;
V _v_51762_up;
V _v_51763_tx0;
V _v_51764_ty0;
V _v_51765_k;
_v_51755_m=([&]()->V{V _callee57628=this->_v_50447_clamp.get();return j::call(_callee57628,j::Args{([&]()->V{V _lhs57626=_v_51754_c;V _rhs57627=V(0.5);return j::binary("+",_lhs57626,_rhs57627);})(),_v_51752_a,_v_51753_b});})();
_v_51756_x=(j::truth(_v_51751_across)?_v_51755_m:([&]()->V{V _lhs57629=_v_51740_x0;V _rhs57630=([&]()->V{V _lhs57631=([&]()->V{V _lhs57633=([&]()->V{V _lhs57635=_v_51755_m;V _rhs57636=_v_51741_y0;return V(j::number(_lhs57635)-j::number(_rhs57636));})();V _rhs57634=_v_51747_dx;return V(j::number(_lhs57633)*j::number(_rhs57634));})();V _rhs57632=_v_51748_dy;return V(j::number(_lhs57631)/j::number(_rhs57632));})();return j::binary("+",_lhs57629,_rhs57630);})());
_v_51757_y=(j::truth(_v_51751_across)?([&]()->V{V _lhs57637=_v_51741_y0;V _rhs57638=([&]()->V{V _lhs57639=([&]()->V{V _lhs57641=([&]()->V{V _lhs57643=_v_51755_m;V _rhs57644=_v_51740_x0;return V(j::number(_lhs57643)-j::number(_rhs57644));})();V _rhs57642=_v_51748_dy;return V(j::number(_lhs57641)*j::number(_rhs57642));})();V _rhs57640=_v_51747_dx;return V(j::number(_lhs57639)/j::number(_rhs57640));})();return j::binary("+",_lhs57637,_rhs57638);})():_v_51755_m);
_v_51758_cx=([&]()->V{V _number57645=_v_51756_x;return V(std::floor(j::number(_number57645)));})();
_v_51759_cy=([&]()->V{V _number57646=_v_51757_y;return V(std::floor(j::number(_number57646)));})();
_v_51760_at=([&]()->V{V _lhs57647=_v_51757_y;V _rhs57648=_v_51759_cy;return V(j::number(_lhs57647)-j::number(_rhs57648));})();
_v_51761_exact=([&]()->V{V _lhs57649=_v_51755_m;V _rhs57650=([&]()->V{V _lhs57651=_v_51754_c;V _rhs57652=V(0.5);return j::binary("+",_lhs57651,_rhs57652);})();return V(j::equal(_lhs57649,_rhs57650,true));})();
_v_51762_up=([&]()->V{V _logical57653=([&]()->V{V _lhs57654=_v_51749_slope;V _rhs57655=V(15.0);return j::binary("<",_lhs57654,_rhs57655);})();return j::truth(_logical57653)?([&]()->V{V _lhs57656=_v_51760_at;V _rhs57657=V(0.3);return j::binary("<",_lhs57656,_rhs57657);})():_logical57653;})();
_v_51763_tx0=_v_51758_cx;
_v_51764_ty0=(j::truth(_v_51762_up)?([&]()->V{V _lhs57658=_v_51759_cy;V _rhs57659=V(1.0);return V(j::number(_lhs57658)-j::number(_rhs57659));})():_v_51759_cy);
if(j::truth(([&]()->V{V _logical57660=([&]()->V{V _logical57661=([&]()->V{V _logical57662=([&]()->V{V _lhs57663=_v_51763_tx0;V _rhs57664=V(0.0);return j::binary("<",_lhs57663,_rhs57664);})();return !j::truth(_logical57662)?([&]()->V{V _lhs57665=_v_51764_ty0;V _rhs57666=V(0.0);return j::binary("<",_lhs57665,_rhs57666);})():_logical57662;})();return !j::truth(_logical57661)?([&]()->V{V _lhs57667=_v_51763_tx0;V _rhs57668=_v_51485_cols.get();return j::binary(">=",_lhs57667,_rhs57668);})():_logical57661;})();return !j::truth(_logical57660)?([&]()->V{V _lhs57669=_v_51764_ty0;V _rhs57670=_v_51486_rows.get();return j::binary(">=",_lhs57669,_rhs57670);})():_logical57660;})())){continue;
}
_v_51765_k=([&]()->V{V _lhs57671=([&]()->V{V _lhs57673=_v_51764_ty0;V _rhs57674=_v_51485_cols.get();return V(j::number(_lhs57673)*j::number(_rhs57674));})();V _rhs57672=_v_51763_tx0;return j::binary("+",_lhs57671,_rhs57672);})();
if(j::truth(([&]()->V{V _logical57675=j::unary("!",_v_51761_exact);return j::truth(_logical57675)?([&]()->V{V _lhs57676=j::get(_v_51724_sure.get(),_v_51765_k);V _rhs57677=_v_51726_stamp.get();return V(j::equal(_lhs57676,_rhs57677,true));})():_logical57675;})())){continue;
}
if(j::truth(_v_51761_exact)){(void)(([&]()->V{V _base57679=_v_51724_sure.get();V _key57680=_v_51765_k;V _assign57678=_v_51726_stamp.get();return j::put(_base57679,_key57680,_assign57678);})());
}
(void)(([&]()->V{V _callee57685=_v_51731_set.get();return j::call(_callee57685,j::Args{_v_51763_tx0,_v_51764_ty0,([&]()->V{V _logical57681=j::get(_v_51650_charOf.get(),([&]()->V{V _lhs57682=_v_51746_i;V _rhs57683=V(1.0);return j::binary("+",_lhs57682,_rhs57683);})());return !j::truth(_logical57681)?(j::truth(_v_51762_up)?V(95.0):([&]()->V{V _callee57684=this->_v_51226_lineChar.get();return j::call(_callee57684,j::Args{_v_51749_slope,_v_51750_rising,_v_51760_at});})()):_logical57681;})(),_v_51746_i});})());

}
}

}

return V{};
},7);
(void)(([&]()->V{V _receiver57964=_v_51498_paints.get();V _method57965=this->_literals[225];V _method=j::get(_receiver57964,_method57965);j::Args _params57966=j::Args{j::function([=](const j::Args &_args_fn51766,const V &_receiver_fn51766,const V &_self_fn51766) mutable ->V{
j::Cell _v_51767_p;
j::Cell _v_51768_i;
_v_51767_p.get()=_args_fn51766[0];
_v_51768_i.get()=_args_fn51766[1];
{
V _v_51769_rings;
j::Cell _v_51770_length;
V _v_51779_win;
j::Cell _v_51780_lo;
j::Cell _v_51781_hi;
j::Cell _v_51782_before;
_v_51769_rings=(j::truth(j::get(_v_51767_p.get(),this->_literals[265]))?([&]()->V{V _callee57686=_v_51675_place.get();return j::call(_callee57686,j::Args{_v_51767_p.get(),_v_51729_t.get()});})():j::get(_v_51767_p.get(),this->_literals[187]));
_v_51770_length.get()=V(0.0);
(void)(([&]()->V{V _receiver57761=_v_51769_rings;V _method57762=this->_literals[225];V _method=j::get(_receiver57761,_method57762);j::Args _params57763=j::Args{j::function([=](const j::Args &_args_fn51771,const V &_receiver_fn51771,const V &_self_fn51771) mutable ->V{
V _v_51772_r;
V _v_51773_k;
_v_51772_r=_args_fn51771[0];
_v_51773_k=_args_fn51771[1];
{
V _v_51774_n;
V _v_51775_segs;
V _v_51776_along;
_v_51774_n=([&]()->V{V _lhs57687=j::get(_v_51772_r,this->_literals[5]);V _rhs57688=V(1.0);return V(int(j::i32(_lhs57687)>>(j::u32(_rhs57688)&31)));})();
_v_51775_segs=(j::truth((j::truth(j::get(_v_51767_p.get(),this->_literals[115]))?j::get(j::get(_v_51767_p.get(),this->_literals[115]),_v_51773_k):V(true)))?_v_51774_n:([&]()->V{V _lhs57689=_v_51774_n;V _rhs57690=V(1.0);return V(j::number(_lhs57689)-j::number(_rhs57690));})());
_v_51776_along=([&]()->V{V _receiver57691=_v_51725_alongs.get();V _method57692=this->_literals[54];V _method=j::get(_receiver57691,_method57692);j::Args _params57693=j::Args{_v_51772_r};return j::call(_method,_params57693,_receiver57691);})();
if(j::truth(j::unary("!",_v_51776_along))){(void)(([&]()->V{V _receiver57698=_v_51725_alongs.get();V _method57699=this->_literals[123];V _method=j::get(_receiver57698,_method57699);j::Args _params57700=j::Args{_v_51772_r,(_v_51776_along=([&]()->V{V _callee57697=j::builtin("Float64Array");return j::construct(_callee57697,j::Args{([&]()->V{V _lhs57695=_v_51774_n;V _rhs57696=V(1.0);return j::binary("+",_lhs57695,_rhs57696);})()});})())};return j::call(_method,_params57700,_receiver57698);})());
}
{V _v_51777_j;
_v_51777_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs57701=_v_51777_j;V _rhs57702=_v_51775_segs;return j::binary("<",_lhs57701,_rhs57702);})());(void)(j::increment(_v_51777_j,1,false))){
V _v_51778_q;
_v_51778_q=([&]()->V{V _lhs57703=([&]()->V{V _lhs57705=_v_51777_j;V _rhs57706=V(1.0);return j::binary("+",_lhs57705,_rhs57706);})();V _rhs57704=_v_51774_n;return V(std::fmod(j::number(_lhs57703),j::number(_rhs57704)));})();
(void)(([&]()->V{V _base57708=_v_51776_along;V _key57709=([&]()->V{V _lhs57710=_v_51777_j;V _rhs57711=V(1.0);return j::binary("+",_lhs57710,_rhs57711);})();V _assign57707=([&]()->V{V _lhs57712=j::get(_v_51776_along,_v_51777_j);V _rhs57713=([&]()->V{V _number57736=([&]()->V{V _lhs57738=([&]()->V{V _lhs57740=j::get(_v_51772_r,([&]()->V{V _lhs57742=V(2.0);V _rhs57743=_v_51778_q;return V(j::number(_lhs57742)*j::number(_rhs57743));})());V _rhs57741=j::get(_v_51772_r,([&]()->V{V _lhs57744=V(2.0);V _rhs57745=_v_51777_j;return V(j::number(_lhs57744)*j::number(_rhs57745));})());return V(j::number(_lhs57740)-j::number(_rhs57741));})();V _rhs57739=_v_51487_sx.get();return V(j::number(_lhs57738)/j::number(_rhs57739));})();V _number57737=([&]()->V{V _lhs57746=([&]()->V{V _lhs57748=([&]()->V{V _lhs57750=j::get(_v_51772_r,([&]()->V{V _lhs57752=([&]()->V{V _lhs57754=V(2.0);V _rhs57755=_v_51778_q;return V(j::number(_lhs57754)*j::number(_rhs57755));})();V _rhs57753=V(1.0);return j::binary("+",_lhs57752,_rhs57753);})());V _rhs57751=j::get(_v_51772_r,([&]()->V{V _lhs57756=([&]()->V{V _lhs57758=V(2.0);V _rhs57759=_v_51777_j;return V(j::number(_lhs57758)*j::number(_rhs57759));})();V _rhs57757=V(1.0);return j::binary("+",_lhs57756,_rhs57757);})());return V(j::number(_lhs57750)-j::number(_rhs57751));})();V _rhs57749=_v_51488_sy.get();return V(j::number(_lhs57748)/j::number(_rhs57749));})();V _rhs57747=_v_51340_aspect.get();return V(j::number(_lhs57746)*j::number(_rhs57747));})();return V(std::hypot(j::number(_number57736),j::number(_number57737)));})();return j::binary("+",_lhs57712,_rhs57713);})();return j::put(_base57708,_key57709,_assign57707);})());

}
}
(void)((_v_51770_length.get()=j::binary("+",_v_51770_length.get(),j::get(_v_51776_along,_v_51775_segs))));

}

return V{};
},2)};return j::call(_method,_params57763,_receiver57761);})());
_v_51779_win=(j::truth(j::get(_v_51767_p.get(),this->_literals[247]))?([&]()->V{V _callee57764=this->_v_50975_traceWindow.get();return j::call(_callee57764,j::Args{j::get(j::get(j::get(_v_51767_p.get(),this->_literals[247]),this->_literals[264]),this->_literals[193]),j::get(j::get(j::get(_v_51767_p.get(),this->_literals[247]),this->_literals[264]),this->_literals[192]),_v_51729_t.get()});})():V::null());
_v_51780_lo.get()=(j::truth(_v_51779_win)?([&]()->V{V _lhs57765=j::get(_v_51779_win,V(0.0));V _rhs57766=_v_51770_length.get();return V(j::number(_lhs57765)*j::number(_rhs57766));})():V(0.0));
_v_51781_hi.get()=(j::truth(_v_51779_win)?([&]()->V{V _lhs57767=j::get(_v_51779_win,V(1.0));V _rhs57768=_v_51770_length.get();return V(j::number(_lhs57767)*j::number(_rhs57768));})():j::builtin("Infinity"));
_v_51782_before.get()=V(0.0);
(void)(([&]()->V{V _receiver57961=_v_51769_rings;V _method57962=this->_literals[225];V _method=j::get(_receiver57961,_method57962);j::Args _params57963=j::Args{j::function([=](const j::Args &_args_fn51783,const V &_receiver_fn51783,const V &_self_fn51783) mutable ->V{
j::Cell _v_51784_r;
V _v_51785_k;
_v_51784_r.get()=_args_fn51783[0];
_v_51785_k=_args_fn51783[1];
{
j::Cell _v_51786_n;
j::Cell _v_51787_shut;
j::Cell _v_51788_segs;
j::Cell _v_51789_along;
j::Cell _v_51790_total;
V _v_51791_at;
_v_51786_n.get()=([&]()->V{V _lhs57769=j::get(_v_51784_r.get(),this->_literals[5]);V _rhs57770=V(1.0);return V(int(j::i32(_lhs57769)>>(j::u32(_rhs57770)&31)));})();
_v_51787_shut.get()=(j::truth(j::get(_v_51767_p.get(),this->_literals[115]))?j::get(j::get(_v_51767_p.get(),this->_literals[115]),_v_51785_k):V(true));
_v_51788_segs.get()=(j::truth(_v_51787_shut.get())?_v_51786_n.get():([&]()->V{V _lhs57771=_v_51786_n.get();V _rhs57772=V(1.0);return V(j::number(_lhs57771)-j::number(_rhs57772));})());
_v_51789_along.get()=([&]()->V{V _receiver57773=_v_51725_alongs.get();V _method57774=this->_literals[54];V _method=j::get(_receiver57773,_method57774);j::Args _params57775=j::Args{_v_51784_r.get()};return j::call(_method,_params57775,_receiver57773);})();
_v_51790_total.get()=j::get(_v_51789_along.get(),_v_51788_segs.get());
_v_51791_at=j::function([=](const j::Args &_args_fn51792,const V &_receiver_fn51792,const V &_self_fn51792) mutable ->V{
V _v_51793_d;
_v_51793_d=_args_fn51792[0];
{
V _v_51794_lo;
V _v_51795_hi;
V _v_51797_q;
V _v_51798_f;
(void)((_v_51793_d=(j::truth(_v_51787_shut.get())?([&]()->V{V _lhs57777=([&]()->V{V _lhs57779=([&]()->V{V _lhs57781=_v_51793_d;V _rhs57782=_v_51790_total.get();return V(std::fmod(j::number(_lhs57781),j::number(_rhs57782)));})();V _rhs57780=_v_51790_total.get();return j::binary("+",_lhs57779,_rhs57780);})();V _rhs57778=_v_51790_total.get();return V(std::fmod(j::number(_lhs57777),j::number(_rhs57778)));})():([&]()->V{V _callee57783=this->_v_50447_clamp.get();return j::call(_callee57783,j::Args{_v_51793_d,V(0.0),_v_51790_total.get()});})())));
_v_51794_lo=V(0.0);
_v_51795_hi=_v_51788_segs.get();
while(j::truth(([&]()->V{V _lhs57784=([&]()->V{V _lhs57786=_v_51795_hi;V _rhs57787=_v_51794_lo;return V(j::number(_lhs57786)-j::number(_rhs57787));})();V _rhs57785=V(1.0);return j::binary(">",_lhs57784,_rhs57785);})())){
V _v_51796_mid;
_v_51796_mid=([&]()->V{V _lhs57788=([&]()->V{V _lhs57790=_v_51794_lo;V _rhs57791=_v_51795_hi;return j::binary("+",_lhs57790,_rhs57791);})();V _rhs57789=V(1.0);return V(int(j::i32(_lhs57788)>>(j::u32(_rhs57789)&31)));})();
if(j::truth(([&]()->V{V _lhs57792=j::get(_v_51789_along.get(),_v_51796_mid);V _rhs57793=_v_51793_d;return j::binary("<=",_lhs57792,_rhs57793);})())){(void)((_v_51794_lo=_v_51796_mid));
}else {(void)((_v_51795_hi=_v_51796_mid));
}

}

_v_51797_q=([&]()->V{V _lhs57796=([&]()->V{V _lhs57798=_v_51794_lo;V _rhs57799=V(1.0);return j::binary("+",_lhs57798,_rhs57799);})();V _rhs57797=_v_51786_n.get();return V(std::fmod(j::number(_lhs57796),j::number(_rhs57797)));})();
_v_51798_f=([&]()->V{V _lhs57800=([&]()->V{V _lhs57802=_v_51793_d;V _rhs57803=j::get(_v_51789_along.get(),_v_51794_lo);return V(j::number(_lhs57802)-j::number(_rhs57803));})();V _rhs57801=([&]()->V{V _logical57804=([&]()->V{V _lhs57805=j::get(_v_51789_along.get(),([&]()->V{V _lhs57807=_v_51794_lo;V _rhs57808=V(1.0);return j::binary("+",_lhs57807,_rhs57808);})());V _rhs57806=j::get(_v_51789_along.get(),_v_51794_lo);return V(j::number(_lhs57805)-j::number(_rhs57806));})();return !j::truth(_logical57804)?V(1.0):_logical57804;})();return V(j::number(_lhs57800)/j::number(_rhs57801));})();
return ([&]()->V{j::Args _array57809;_array57809.push_back(([&]()->V{V _lhs57810=([&]()->V{V _lhs57812=j::get(_v_51784_r.get(),([&]()->V{V _lhs57814=V(2.0);V _rhs57815=_v_51794_lo;return V(j::number(_lhs57814)*j::number(_rhs57815));})());V _rhs57813=([&]()->V{V _lhs57816=([&]()->V{V _lhs57818=j::get(_v_51784_r.get(),([&]()->V{V _lhs57820=V(2.0);V _rhs57821=_v_51797_q;return V(j::number(_lhs57820)*j::number(_rhs57821));})());V _rhs57819=j::get(_v_51784_r.get(),([&]()->V{V _lhs57822=V(2.0);V _rhs57823=_v_51794_lo;return V(j::number(_lhs57822)*j::number(_rhs57823));})());return V(j::number(_lhs57818)-j::number(_rhs57819));})();V _rhs57817=_v_51798_f;return V(j::number(_lhs57816)*j::number(_rhs57817));})();return j::binary("+",_lhs57812,_rhs57813);})();V _rhs57811=_v_51487_sx.get();return V(j::number(_lhs57810)/j::number(_rhs57811));})());_array57809.push_back(([&]()->V{V _lhs57824=([&]()->V{V _lhs57826=j::get(_v_51784_r.get(),([&]()->V{V _lhs57828=([&]()->V{V _lhs57830=V(2.0);V _rhs57831=_v_51794_lo;return V(j::number(_lhs57830)*j::number(_rhs57831));})();V _rhs57829=V(1.0);return j::binary("+",_lhs57828,_rhs57829);})());V _rhs57827=([&]()->V{V _lhs57832=([&]()->V{V _lhs57834=j::get(_v_51784_r.get(),([&]()->V{V _lhs57836=([&]()->V{V _lhs57838=V(2.0);V _rhs57839=_v_51797_q;return V(j::number(_lhs57838)*j::number(_rhs57839));})();V _rhs57837=V(1.0);return j::binary("+",_lhs57836,_rhs57837);})());V _rhs57835=j::get(_v_51784_r.get(),([&]()->V{V _lhs57840=([&]()->V{V _lhs57842=V(2.0);V _rhs57843=_v_51794_lo;return V(j::number(_lhs57842)*j::number(_rhs57843));})();V _rhs57841=V(1.0);return j::binary("+",_lhs57840,_rhs57841);})());return V(j::number(_lhs57834)-j::number(_rhs57835));})();V _rhs57833=_v_51798_f;return V(j::number(_lhs57832)*j::number(_rhs57833));})();return j::binary("+",_lhs57826,_rhs57827);})();V _rhs57825=_v_51488_sy.get();return V(j::number(_lhs57824)/j::number(_rhs57825));})());return j::array(std::move(_array57809));})();

}

return V{};
},1);
{V _v_51799_j;
_v_51799_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs57844=_v_51799_j;V _rhs57845=_v_51788_segs.get();return j::binary("<",_lhs57844,_rhs57845);})());(void)(j::increment(_v_51799_j,1,false))){
V _v_51800_a0;
V _v_51801_a1;
V _v_51802_q;
V _v_51803_x0;
V _v_51804_y0;
V _v_51805_x1;
V _v_51806_y1;
V _v_51807_tx;
V _v_51808_ty;
_v_51800_a0=([&]()->V{V _lhs57846=_v_51782_before.get();V _rhs57847=j::get(_v_51789_along.get(),_v_51799_j);return j::binary("+",_lhs57846,_rhs57847);})();
_v_51801_a1=([&]()->V{V _lhs57848=_v_51782_before.get();V _rhs57849=j::get(_v_51789_along.get(),([&]()->V{V _lhs57850=_v_51799_j;V _rhs57851=V(1.0);return j::binary("+",_lhs57850,_rhs57851);})());return j::binary("+",_lhs57848,_rhs57849);})();
if(j::truth(([&]()->V{V _logical57852=([&]()->V{V _lhs57853=_v_51801_a1;V _rhs57854=_v_51780_lo.get();return j::binary("<=",_lhs57853,_rhs57854);})();return !j::truth(_logical57852)?([&]()->V{V _lhs57855=_v_51800_a0;V _rhs57856=_v_51781_hi.get();return j::binary(">=",_lhs57855,_rhs57856);})():_logical57852;})())){continue;
}
_v_51802_q=([&]()->V{V _lhs57857=([&]()->V{V _lhs57859=_v_51799_j;V _rhs57860=V(1.0);return j::binary("+",_lhs57859,_rhs57860);})();V _rhs57858=_v_51786_n.get();return V(std::fmod(j::number(_lhs57857),j::number(_rhs57858)));})();
_v_51803_x0=([&]()->V{V _lhs57861=j::get(_v_51784_r.get(),([&]()->V{V _lhs57863=V(2.0);V _rhs57864=_v_51799_j;return V(j::number(_lhs57863)*j::number(_rhs57864));})());V _rhs57862=_v_51487_sx.get();return V(j::number(_lhs57861)/j::number(_rhs57862));})();
_v_51804_y0=([&]()->V{V _lhs57865=j::get(_v_51784_r.get(),([&]()->V{V _lhs57867=([&]()->V{V _lhs57869=V(2.0);V _rhs57870=_v_51799_j;return V(j::number(_lhs57869)*j::number(_rhs57870));})();V _rhs57868=V(1.0);return j::binary("+",_lhs57867,_rhs57868);})());V _rhs57866=_v_51488_sy.get();return V(j::number(_lhs57865)/j::number(_rhs57866));})();
_v_51805_x1=([&]()->V{V _lhs57871=j::get(_v_51784_r.get(),([&]()->V{V _lhs57873=V(2.0);V _rhs57874=_v_51802_q;return V(j::number(_lhs57873)*j::number(_rhs57874));})());V _rhs57872=_v_51487_sx.get();return V(j::number(_lhs57871)/j::number(_rhs57872));})();
_v_51806_y1=([&]()->V{V _lhs57875=j::get(_v_51784_r.get(),([&]()->V{V _lhs57877=([&]()->V{V _lhs57879=V(2.0);V _rhs57880=_v_51802_q;return V(j::number(_lhs57879)*j::number(_rhs57880));})();V _rhs57878=V(1.0);return j::binary("+",_lhs57877,_rhs57878);})());V _rhs57876=_v_51488_sy.get();return V(j::number(_lhs57875)/j::number(_rhs57876));})();
_v_51807_tx=([&]()->V{V _lhs57881=_v_51805_x1;V _rhs57882=_v_51803_x0;return V(j::number(_lhs57881)-j::number(_rhs57882));})();
_v_51808_ty=([&]()->V{V _lhs57883=_v_51806_y1;V _rhs57884=_v_51804_y0;return V(j::number(_lhs57883)-j::number(_rhs57884));})();
if(j::truth(([&]()->V{V _logical57885=([&]()->V{V _lhs57886=([&]()->V{V _lhs57888=j::get(_v_51789_along.get(),([&]()->V{V _lhs57890=_v_51799_j;V _rhs57891=V(1.0);return j::binary("+",_lhs57890,_rhs57891);})());V _rhs57889=j::get(_v_51789_along.get(),_v_51799_j);return V(j::number(_lhs57888)-j::number(_rhs57889));})();V _rhs57887=V(3.0);return j::binary("<",_lhs57886,_rhs57887);})();return j::truth(_logical57885)?([&]()->V{V _lhs57892=_v_51790_total.get();V _rhs57893=V(4.0);return j::binary(">",_lhs57892,_rhs57893);})():_logical57885;})())){
V _v_51809_mid;
V _v_51810_a;
V _v_51811_b;
_v_51809_mid=([&]()->V{V _lhs57894=([&]()->V{V _lhs57896=j::get(_v_51789_along.get(),_v_51799_j);V _rhs57897=j::get(_v_51789_along.get(),([&]()->V{V _lhs57898=_v_51799_j;V _rhs57899=V(1.0);return j::binary("+",_lhs57898,_rhs57899);})());return j::binary("+",_lhs57896,_rhs57897);})();V _rhs57895=V(2.0);return V(j::number(_lhs57894)/j::number(_rhs57895));})();
_v_51810_a=([&]()->V{V _callee57902=_v_51791_at;return j::call(_callee57902,j::Args{([&]()->V{V _lhs57900=_v_51809_mid;V _rhs57901=V(1.5);return V(j::number(_lhs57900)-j::number(_rhs57901));})()});})();
_v_51811_b=([&]()->V{V _callee57905=_v_51791_at;return j::call(_callee57905,j::Args{([&]()->V{V _lhs57903=_v_51809_mid;V _rhs57904=V(1.5);return j::binary("+",_lhs57903,_rhs57904);})()});})();
(void)((_v_51807_tx=([&]()->V{V _lhs57907=j::get(_v_51811_b,V(0.0));V _rhs57908=j::get(_v_51810_a,V(0.0));return V(j::number(_lhs57907)-j::number(_rhs57908));})()));
(void)((_v_51808_ty=([&]()->V{V _lhs57910=j::get(_v_51811_b,V(1.0));V _rhs57911=j::get(_v_51810_a,V(1.0));return V(j::number(_lhs57910)-j::number(_rhs57911));})()));

}

if(j::truth(([&]()->V{V _logical57912=([&]()->V{V _lhs57913=_v_51800_a0;V _rhs57914=_v_51780_lo.get();return j::binary("<",_lhs57913,_rhs57914);})();return !j::truth(_logical57912)?([&]()->V{V _lhs57915=_v_51801_a1;V _rhs57916=_v_51781_hi.get();return j::binary(">",_lhs57915,_rhs57916);})():_logical57912;})())){
V _v_51812_f0;
V _v_51813_f1;
V _v_51814_dx;
V _v_51815_dy;
_v_51812_f0=([&]()->V{V _receiver57925=j::builtin("Math");V _method57926=this->_literals[66];V _method=j::get(_receiver57925,_method57926);j::Args _params57927=j::Args{V(0.0),([&]()->V{V _lhs57917=([&]()->V{V _lhs57919=_v_51780_lo.get();V _rhs57920=_v_51800_a0;return V(j::number(_lhs57919)-j::number(_rhs57920));})();V _rhs57918=([&]()->V{V _lhs57921=_v_51801_a1;V _rhs57922=_v_51800_a0;return V(j::number(_lhs57921)-j::number(_rhs57922));})();return V(j::number(_lhs57917)/j::number(_rhs57918));})()};return j::call(_method,_params57927,_receiver57925);})();
_v_51813_f1=([&]()->V{V _receiver57936=j::builtin("Math");V _method57937=this->_literals[116];V _method=j::get(_receiver57936,_method57937);j::Args _params57938=j::Args{V(1.0),([&]()->V{V _lhs57928=([&]()->V{V _lhs57930=_v_51781_hi.get();V _rhs57931=_v_51800_a0;return V(j::number(_lhs57930)-j::number(_rhs57931));})();V _rhs57929=([&]()->V{V _lhs57932=_v_51801_a1;V _rhs57933=_v_51800_a0;return V(j::number(_lhs57932)-j::number(_rhs57933));})();return V(j::number(_lhs57928)/j::number(_rhs57929));})()};return j::call(_method,_params57938,_receiver57936);})();
_v_51814_dx=([&]()->V{V _lhs57939=_v_51805_x1;V _rhs57940=_v_51803_x0;return V(j::number(_lhs57939)-j::number(_rhs57940));})();
_v_51815_dy=([&]()->V{V _lhs57941=_v_51806_y1;V _rhs57942=_v_51804_y0;return V(j::number(_lhs57941)-j::number(_rhs57942));})();
(void)(((_v_51805_x1=([&]()->V{V _lhs57944=_v_51803_x0;V _rhs57945=([&]()->V{V _lhs57946=_v_51814_dx;V _rhs57947=_v_51813_f1;return V(j::number(_lhs57946)*j::number(_rhs57947));})();return j::binary("+",_lhs57944,_rhs57945);})()),(_v_51806_y1=([&]()->V{V _lhs57949=_v_51804_y0;V _rhs57950=([&]()->V{V _lhs57951=_v_51815_dy;V _rhs57952=_v_51813_f1;return V(j::number(_lhs57951)*j::number(_rhs57952));})();return j::binary("+",_lhs57949,_rhs57950);})()),(_v_51803_x0=j::binary("+",_v_51803_x0,([&]()->V{V _lhs57954=_v_51814_dx;V _rhs57955=_v_51812_f0;return V(j::number(_lhs57954)*j::number(_rhs57955));})())),(_v_51804_y0=j::binary("+",_v_51804_y0,([&]()->V{V _lhs57957=_v_51815_dy;V _rhs57958=_v_51812_f0;return V(j::number(_lhs57957)*j::number(_rhs57958));})()))));

}

(void)(([&]()->V{V _callee57959=_v_51738_segment.get();return j::call(_callee57959,j::Args{_v_51803_x0,_v_51804_y0,_v_51805_x1,_v_51806_y1,_v_51807_tx,_v_51808_ty,_v_51768_i.get()});})());

}
}
(void)((_v_51782_before.get()=j::binary("+",_v_51782_before.get(),_v_51790_total.get())));

}

return V{};
},2)};return j::call(_method,_params57963,_receiver57961);})());

}

return V{};
},2)};return j::call(_method,_params57966,_receiver57964);})());

}

return V{};
},1);
_v_51816_cellsOf.get()=j::function([=](const j::Args &_args_fn51817,const V &_receiver_fn51817,const V &_self_fn51817) mutable ->V{
V _v_51818_mono;
_v_51818_mono=_args_fn51817[0];
{
{for(const auto &_item57967:j::elements(_v_51643_cover.get())){V _v_51819_c;
_v_51819_c=_item57967;
(void)(([&]()->V{V _receiver57968=_v_51819_c;V _method57969=this->_literals[130];V _method=j::get(_receiver57968,_method57969);j::Args _params57970=j::Args{V(0.0)};return j::call(_method,_params57970,_receiver57968);})());
}}
{V _v_51820_cy;
_v_51820_cy=V(0.0);
for(;j::truth(([&]()->V{V _lhs57971=_v_51820_cy;V _rhs57972=_v_51486_rows.get();return j::binary("<",_lhs57971,_rhs57972);})());(void)(j::increment(_v_51820_cy,1,false))){{V _v_51821_cx;
_v_51821_cx=V(0.0);
for(;j::truth(([&]()->V{V _lhs57973=_v_51821_cx;V _rhs57974=_v_51485_cols.get();return j::binary("<",_lhs57973,_rhs57974);})());(void)(j::increment(_v_51821_cx,1,false))){
V _v_51822_k;
V _v_51823_at0;
V _v_51824_nt;
V _v_51825_np;
V _v_51832_best;
V _v_51833_bv;
V _v_51836_bp;
V _v_51837_pv;
V _v_51840_solid;
V _v_51841_one;
V _v_51849_picked;
_v_51822_k=([&]()->V{V _lhs57975=([&]()->V{V _lhs57977=_v_51820_cy;V _rhs57978=_v_51485_cols.get();return V(j::number(_lhs57977)*j::number(_rhs57978));})();V _rhs57976=_v_51821_cx;return j::binary("+",_lhs57975,_rhs57976);})();
_v_51823_at0=([&]()->V{V _lhs57979=([&]()->V{V _lhs57981=([&]()->V{V _lhs57983=_v_51820_cy;V _rhs57984=_v_51488_sy.get();return V(j::number(_lhs57983)*j::number(_rhs57984));})();V _rhs57982=_v_51663_W.get();return V(j::number(_lhs57981)*j::number(_rhs57982));})();V _rhs57980=([&]()->V{V _lhs57985=_v_51821_cx;V _rhs57986=_v_51487_sx.get();return V(j::number(_lhs57985)*j::number(_rhs57986));})();return j::binary("+",_lhs57979,_rhs57980);})();
_v_51824_nt=V(0.0);
_v_51825_np=V(0.0);
{V _v_51826_yy;
_v_51826_yy=V(0.0);
for(;j::truth(([&]()->V{V _lhs57987=_v_51826_yy;V _rhs57988=_v_51488_sy.get();return j::binary("<",_lhs57987,_rhs57988);})());(void)(j::increment(_v_51826_yy,1,false))){{V _v_51827_xx;
V _v_51828_i;
_v_51827_xx=V(0.0);
_v_51828_i=([&]()->V{V _lhs57989=_v_51823_at0;V _rhs57990=([&]()->V{V _lhs57991=_v_51826_yy;V _rhs57992=_v_51663_W.get();return V(j::number(_lhs57991)*j::number(_rhs57992));})();return j::binary("+",_lhs57989,_rhs57990);})();
for(;j::truth(([&]()->V{V _lhs57993=_v_51827_xx;V _rhs57994=_v_51487_sx.get();return j::binary("<",_lhs57993,_rhs57994);})());(void)((j::increment(_v_51827_xx,1,false),j::increment(_v_51828_i,1,false)))){
V _v_51829_id;
V _v_51830_pt;
V _v_51831_g;
_v_51829_id=j::get(_v_51664_ids.get(),_v_51828_i);
if(j::truth(j::unary("!",_v_51829_id))){continue;
}
_v_51830_pt=j::get(_v_51648_partOfPaint.get(),_v_51829_id);
if(j::truth(([&]()->V{V _lhs57995=_v_51830_pt;V _rhs57996=V(0.0);return j::binary(">=",_lhs57995,_rhs57996);})())){
if(j::truth(j::unary("!",j::get(_v_51660_partVotes.get(),_v_51830_pt)))){(void)(([&]()->V{V _base57998=_v_51662_seenParts.get();V _key57999=j::increment(_v_51825_np,1,false);V _assign57997=_v_51830_pt;return j::put(_base57998,_key57999,_assign57997);})());
}
(void)(j::increment(_v_51660_partVotes.get(),_v_51830_pt,1,false));

}

if(j::truth(([&]()->V{V _logical58000=_v_51818_mono;return j::truth(_logical58000)?j::get(_v_51646_knock.get(),_v_51829_id):_logical58000;})())){continue;
}
_v_51831_g=j::get(_v_51654_groupOf.get(),_v_51829_id);
if(j::truth(j::unary("!",j::get(_v_51659_votes.get(),_v_51831_g)))){(void)(([&]()->V{V _base58002=_v_51661_touched.get();V _key58003=j::increment(_v_51824_nt,1,false);V _assign58001=_v_51831_g;return j::put(_base58002,_key58003,_assign58001);})());
}
(void)(j::increment(_v_51659_votes.get(),_v_51831_g,1,false));

}
}
}}
_v_51832_best=j::unary("-",V(1.0));
_v_51833_bv=V(0.0);
{V _v_51834_q;
_v_51834_q=V(0.0);
for(;j::truth(([&]()->V{V _lhs58004=_v_51834_q;V _rhs58005=_v_51824_nt;return j::binary("<",_lhs58004,_rhs58005);})());(void)(j::increment(_v_51834_q,1,false))){
V _v_51835_g;
_v_51835_g=j::get(_v_51661_touched.get(),_v_51834_q);
if(j::truth(([&]()->V{V _lhs58006=j::get(_v_51659_votes.get(),_v_51835_g);V _rhs58007=_v_51833_bv;return j::binary(">",_lhs58006,_rhs58007);})())){(void)(((_v_51833_bv=j::get(_v_51659_votes.get(),_v_51835_g)),(_v_51832_best=_v_51835_g)));
}
(void)(([&]()->V{V _base58011=_v_51659_votes.get();V _key58012=_v_51835_g;V _assign58010=V(0.0);return j::put(_base58011,_key58012,_assign58010);})());

}
}
_v_51836_bp=j::unary("-",V(1.0));
_v_51837_pv=V(0.0);
{V _v_51838_q;
_v_51838_q=V(0.0);
for(;j::truth(([&]()->V{V _lhs58013=_v_51838_q;V _rhs58014=_v_51825_np;return j::binary("<",_lhs58013,_rhs58014);})());(void)(j::increment(_v_51838_q,1,false))){
V _v_51839_pt;
_v_51839_pt=j::get(_v_51662_seenParts.get(),_v_51838_q);
(void)(([&]()->V{V _base58016=j::get(_v_51643_cover.get(),_v_51839_pt);V _key58017=_v_51822_k;V _assign58015=([&]()->V{V _lhs58018=j::get(_v_51660_partVotes.get(),_v_51839_pt);V _rhs58019=([&]()->V{V _lhs58020=_v_51667_per.get();V _rhs58021=V(8.0);return V(j::number(_lhs58020)*j::number(_rhs58021));})();return V(j::number(_lhs58018)/j::number(_rhs58019));})();return j::put(_base58016,_key58017,_assign58015);})());
if(j::truth(([&]()->V{V _lhs58022=j::get(_v_51660_partVotes.get(),_v_51839_pt);V _rhs58023=_v_51837_pv;return j::binary(">",_lhs58022,_rhs58023);})())){(void)(((_v_51837_pv=j::get(_v_51660_partVotes.get(),_v_51839_pt)),(_v_51836_bp=_v_51839_pt)));
}
(void)(([&]()->V{V _base58027=_v_51660_partVotes.get();V _key58028=_v_51839_pt;V _assign58026=V(0.0);return j::put(_base58027,_key58028,_assign58026);})());

}
}
(void)(([&]()->V{V _base58030=_v_51642_owner.get();V _key58031=_v_51822_k;V _assign58029=_v_51836_bp;return j::put(_base58030,_key58031,_assign58029);})());
if(j::truth(([&]()->V{V _lhs58032=_v_51832_best;V _rhs58033=V(0.0);return j::binary("<",_lhs58032,_rhs58033);})())){
(void)(([&]()->V{V _base58035=_v_51640_chars.get();V _key58036=_v_51822_k;V _assign58034=this->_v_50439_EMPTY.get();return j::put(_base58035,_key58036,_assign58034);})());
(void)(([&]()->V{V _base58038=_v_51641_slots.get();V _key58039=_v_51822_k;V _assign58037=j::unary("-",V(1.0));return j::put(_base58038,_key58039,_assign58037);})());
continue;

}

_v_51840_solid=V(0.0);
_v_51841_one=V(0.0);
{V _v_51842_by;
_v_51842_by=V(0.0);
for(;j::truth(([&]()->V{V _lhs58040=_v_51842_by;V _rhs58041=V(4.0);return j::binary("<",_lhs58040,_rhs58041);})());(void)(j::increment(_v_51842_by,1,false))){{V _v_51843_bx;
_v_51843_bx=V(0.0);
for(;j::truth(([&]()->V{V _lhs58042=_v_51843_bx;V _rhs58043=V(2.0);return j::binary("<",_lhs58042,_rhs58043);})());(void)(j::increment(_v_51843_bx,1,false))){
V _v_51844_sum;
_v_51844_sum=V(0.0);
{V _v_51845_yy;
_v_51845_yy=V(0.0);
for(;j::truth(([&]()->V{V _lhs58044=_v_51845_yy;V _rhs58045=_v_51666_bh.get();return j::binary("<",_lhs58044,_rhs58045);})());(void)(j::increment(_v_51845_yy,1,false))){{V _v_51846_xx;
V _v_51847_i;
_v_51846_xx=V(0.0);
_v_51847_i=([&]()->V{V _lhs58046=([&]()->V{V _lhs58048=_v_51823_at0;V _rhs58049=([&]()->V{V _lhs58050=([&]()->V{V _lhs58052=([&]()->V{V _lhs58054=_v_51842_by;V _rhs58055=_v_51666_bh.get();return V(j::number(_lhs58054)*j::number(_rhs58055));})();V _rhs58053=_v_51845_yy;return j::binary("+",_lhs58052,_rhs58053);})();V _rhs58051=_v_51663_W.get();return V(j::number(_lhs58050)*j::number(_rhs58051));})();return j::binary("+",_lhs58048,_rhs58049);})();V _rhs58047=([&]()->V{V _lhs58056=_v_51843_bx;V _rhs58057=_v_51665_bw.get();return V(j::number(_lhs58056)*j::number(_rhs58057));})();return j::binary("+",_lhs58046,_rhs58047);})();
for(;j::truth(([&]()->V{V _lhs58058=_v_51846_xx;V _rhs58059=_v_51665_bw.get();return j::binary("<",_lhs58058,_rhs58059);})());(void)((j::increment(_v_51846_xx,1,false),j::increment(_v_51847_i,1,false)))){
V _v_51848_id;
_v_51848_id=j::get(_v_51664_ids.get(),_v_51847_i);
if(j::truth(([&]()->V{V _logical58060=([&]()->V{V _logical58061=j::unary("!",_v_51848_id);return !j::truth(_logical58061)?([&]()->V{V _lhs58062=j::get(_v_51654_groupOf.get(),_v_51848_id);V _rhs58063=_v_51832_best;return V(!j::equal(_lhs58062,_rhs58063,true));})():_logical58061;})();return !j::truth(_logical58060)?([&]()->V{V _logical58064=_v_51818_mono;return j::truth(_logical58064)?j::get(_v_51646_knock.get(),_v_51848_id):_logical58064;})():_logical58060;})())){continue;
}
(void)((_v_51844_sum=j::binary("+",_v_51844_sum,j::get(_v_51645_alpha.get(),_v_51848_id))));
if(j::truth(j::unary("!",_v_51840_solid))){(void)(((_v_51840_solid=j::get(_v_51649_fillOf.get(),_v_51848_id)),(_v_51841_one=j::get(_v_51650_charOf.get(),_v_51848_id))));
}

}
}
}}
(void)(([&]()->V{V _base58069=_v_51658_v.get();V _key58070=([&]()->V{V _lhs58071=([&]()->V{V _lhs58073=_v_51842_by;V _rhs58074=V(2.0);return V(j::number(_lhs58073)*j::number(_rhs58074));})();V _rhs58072=_v_51843_bx;return j::binary("+",_lhs58071,_rhs58072);})();V _assign58068=([&]()->V{V _lhs58075=_v_51844_sum;V _rhs58076=_v_51667_per.get();return V(j::number(_lhs58075)/j::number(_rhs58076));})();return j::put(_base58069,_key58070,_assign58068);})());

}
}
}}
_v_51849_picked=([&]()->V{V _callee58078=this->_v_51880_pick.get();return j::call(_callee58078,j::Args{_v_51658_v.get(),_v_51341_style.get(),([&]()->V{V _logical58077=_v_51840_solid;return !j::truth(_logical58077)?_v_51579_fillCode.get():_logical58077;})()});})();
(void)(([&]()->V{V _base58080=_v_51640_chars.get();V _key58081=_v_51822_k;V _assign58079=(j::truth(([&]()->V{V _logical58082=_v_51841_one;return j::truth(_logical58082)?([&]()->V{V _lhs58083=_v_51849_picked;V _rhs58084=this->_v_50439_EMPTY.get();return V(!j::equal(_lhs58083,_rhs58084,true));})():_logical58082;})())?_v_51841_one:_v_51849_picked);return j::put(_base58080,_key58081,_assign58079);})());
(void)(([&]()->V{V _base58086=_v_51641_slots.get();V _key58087=_v_51822_k;V _assign58085=(j::truth(([&]()->V{V _lhs58088=j::get(_v_51640_chars.get(),_v_51822_k);V _rhs58089=this->_v_50439_EMPTY.get();return V(j::equal(_lhs58088,_rhs58089,true));})())?j::unary("-",V(1.0)):j::get(_v_51581_groupSlot.get(),_v_51832_best));return j::put(_base58086,_key58087,_assign58085);})());

}
}
}}

}

return V{};
},1);
_v_51850_still.get()=V::null();
return ([&]()->V{V _obj58090=j::object();j::put(_obj58090,this->_literals[280],j::function([=](const j::Args &_args_fn51851,const V &_receiver_fn51851,const V &_self_fn51851) mutable ->V{
V _v_51852_t;
V _v_51853_mono;
_v_51852_t=_args_fn51851[0];
_v_51853_mono=_args_fn51851[1];
{
if(j::truth(([&]()->V{V _logical58091=j::unary("!",_v_51606_moving.get());return !j::truth(_logical58091)?([&]()->V{V _logical58092=([&]()->V{V _lhs58093=_v_51607_firstMoving.get();V _rhs58094=V(0.0);return j::binary("<",_lhs58093,_rhs58094);})();return j::truth(_logical58092)?j::get(_v_51400_glints.get(),this->_literals[229]):_logical58092;})():_logical58091;})())){
if(j::truth(j::unary("!",_v_51850_still.get()))){
V _v_51854_colour;
V _v_51855_colourSlots;
V _v_51856_owners;
V _v_51857_covers;
if(j::truth(_v_51501_outline.get())){(void)(([&]()->V{V _callee58095=_v_51727_outlines.get();return j::call(_callee58095,j::Args{V(0.0)});})());
}else {
(void)(([&]()->V{V _callee58096=_v_51716_rasterise.get();return j::call(_callee58096,j::Args{V(0.0)});})());
(void)(([&]()->V{V _callee58097=_v_51816_cellsOf.get();return j::call(_callee58097,j::Args{V(false)});})());

}

_v_51854_colour=([&]()->V{V _receiver58098=_v_51640_chars.get();V _method58099=this->_literals[8];V _method=j::get(_receiver58098,_method58099);j::Args _params58100=j::Args{};return j::call(_method,_params58100,_receiver58098);})();
_v_51855_colourSlots=([&]()->V{V _receiver58101=_v_51641_slots.get();V _method58102=this->_literals[8];V _method=j::get(_receiver58101,_method58102);j::Args _params58103=j::Args{};return j::call(_method,_params58103,_receiver58101);})();
_v_51856_owners=([&]()->V{V _receiver58104=_v_51642_owner.get();V _method58105=this->_literals[8];V _method=j::get(_receiver58104,_method58105);j::Args _params58106=j::Args{};return j::call(_method,_params58106,_receiver58104);})();
_v_51857_covers=([&]()->V{V _receiver58110=_v_51643_cover.get();V _method58111=this->_literals[41];V _method=j::get(_receiver58110,_method58111);j::Args _params58112=j::Args{j::function([=](const j::Args &_args_fn51858,const V &_receiver_fn51858,const V &_self_fn51858) mutable ->V{
V _v_51859_c;
_v_51859_c=_args_fn51858[0];
return ([&]()->V{V _receiver58107=_v_51859_c;V _method58108=this->_literals[8];V _method=j::get(_receiver58107,_method58108);j::Args _params58109=j::Args{};return j::call(_method,_params58109,_receiver58107);})();
return V{};
},1)};return j::call(_method,_params58112,_receiver58110);})();
if(j::truth(j::unary("!",_v_51501_outline.get()))){(void)(([&]()->V{V _callee58113=_v_51816_cellsOf.get();return j::call(_callee58113,j::Args{V(true)});})());
}
(void)((_v_51850_still.get()=([&]()->V{V _obj58115=j::object();j::put(_obj58115,this->_literals[230],_v_51854_colour);j::put(_obj58115,this->_literals[281],_v_51855_colourSlots);j::put(_obj58115,this->_literals[282],([&]()->V{V _receiver58116=_v_51640_chars.get();V _method58117=this->_literals[8];V _method=j::get(_receiver58116,_method58117);j::Args _params58118=j::Args{};return j::call(_method,_params58118,_receiver58116);})());j::put(_obj58115,this->_literals[226],_v_51856_owners);j::put(_obj58115,this->_literals[283],_v_51857_covers);return _obj58115;})()));

}

(void)(([&]()->V{V _receiver58119=_v_51640_chars.get();V _method58120=this->_literals[123];V _method=j::get(_receiver58119,_method58120);j::Args _params58121=j::Args{(j::truth(_v_51853_mono)?j::get(_v_51850_still.get(),this->_literals[282]):j::get(_v_51850_still.get(),this->_literals[230]))};return j::call(_method,_params58121,_receiver58119);})());
(void)(([&]()->V{V _receiver58122=_v_51641_slots.get();V _method58123=this->_literals[123];V _method=j::get(_receiver58122,_method58123);j::Args _params58124=j::Args{j::get(_v_51850_still.get(),this->_literals[281])};return j::call(_method,_params58124,_receiver58122);})());
(void)(([&]()->V{V _receiver58125=_v_51642_owner.get();V _method58126=this->_literals[123];V _method=j::get(_receiver58125,_method58126);j::Args _params58127=j::Args{j::get(_v_51850_still.get(),this->_literals[226])};return j::call(_method,_params58127,_receiver58125);})());
(void)(([&]()->V{V _receiver58131=j::get(_v_51850_still.get(),this->_literals[283]);V _method58132=this->_literals[225];V _method=j::get(_receiver58131,_method58132);j::Args _params58133=j::Args{j::function([=](const j::Args &_args_fn51860,const V &_receiver_fn51860,const V &_self_fn51860) mutable ->V{
V _v_51861_c;
V _v_51862_i;
_v_51861_c=_args_fn51860[0];
_v_51862_i=_args_fn51860[1];
return ([&]()->V{V _receiver58128=j::get(_v_51643_cover.get(),_v_51862_i);V _method58129=this->_literals[123];V _method=j::get(_receiver58128,_method58129);j::Args _params58130=j::Args{_v_51861_c};return j::call(_method,_params58130,_receiver58128);})();
return V{};
},2)};return j::call(_method,_params58133,_receiver58131);})());

}
else {if(j::truth(_v_51501_outline.get())){(void)(([&]()->V{V _callee58134=_v_51727_outlines.get();return j::call(_callee58134,j::Args{_v_51852_t});})());
}else {
(void)(([&]()->V{V _callee58135=_v_51716_rasterise.get();return j::call(_callee58135,j::Args{_v_51852_t});})());
(void)(([&]()->V{V _callee58136=_v_51816_cellsOf.get();return j::call(_callee58136,j::Args{_v_51853_mono});})());

}

}
if(j::truth(j::get(_v_51400_glints.get(),this->_literals[229]))){
{for(const auto &_item58137:j::elements(_v_51400_glints.get())){V _v_51863_pi;
V _v_51864_g;
V _pattern58138=_item58137;
_v_51863_pi=j::get(_pattern58138,V(0));
_v_51864_g=j::get(_pattern58138,V(1));
{
V _v_51865_b;
V _v_51866_half;
V _v_51867_lean;
V _v_51868_sweep;
V _v_51869_first;
V _v_51870_lo;
V _v_51871_span;
V _v_51872_since;
V _v_51873_u;
V _v_51874_at;
_v_51865_b=([&]()->V{V _receiver58139=_v_51620_partBox.get();V _method58140=this->_literals[54];V _method=j::get(_receiver58139,_method58140);j::Args _params58141=j::Args{_v_51863_pi};return j::call(_method,_params58141,_receiver58139);})();
if(j::truth(j::unary("!",_v_51865_b))){continue;
}
_v_51866_half=([&]()->V{V _callee58144=this->_v_50447_clamp.get();return j::call(_callee58144,j::Args{([&]()->V{V _lhs58142=j::get(_v_51865_b,this->_literals[251]);V _rhs58143=V(8.0);return V(j::number(_lhs58142)/j::number(_rhs58143));})(),V(2.0),V(5.0)});})();
_v_51867_lean=V(0.9);
_v_51868_sweep=([&]()->V{V _receiver58149=j::builtin("Math");V _method58150=this->_literals[116];V _method=j::get(_receiver58149,_method58150);j::Args _params58151=j::Args{V(2.0),([&]()->V{V _lhs58145=j::get(_v_51864_g,this->_literals[134]);V _rhs58146=V(0.8);return V(j::number(_lhs58145)*j::number(_rhs58146));})()};return j::call(_method,_params58151,_receiver58149);})();
_v_51869_first=V(0.5);
_v_51870_lo=([&]()->V{V _lhs58152=j::get(_v_51865_b,this->_literals[98]);V _rhs58153=_v_51866_half;return V(j::number(_lhs58152)-j::number(_rhs58153));})();
_v_51871_span=([&]()->V{V _lhs58154=([&]()->V{V _lhs58156=j::get(_v_51865_b,this->_literals[251]);V _rhs58157=([&]()->V{V _lhs58158=_v_51867_lean;V _rhs58159=j::get(_v_51865_b,this->_literals[252]);return V(j::number(_lhs58158)*j::number(_rhs58159));})();return j::binary("+",_lhs58156,_rhs58157);})();V _rhs58155=([&]()->V{V _lhs58160=V(2.0);V _rhs58161=_v_51866_half;return V(j::number(_lhs58160)*j::number(_rhs58161));})();return j::binary("+",_lhs58154,_rhs58155);})();
_v_51872_since=([&]()->V{V _lhs58162=([&]()->V{V _lhs58164=_v_51852_t;V _rhs58165=j::get(_v_51864_g,this->_literals[192]);return j::binary("+",_lhs58164,_rhs58165);})();V _rhs58163=_v_51869_first;return V(j::number(_lhs58162)-j::number(_rhs58163));})();
_v_51873_u=([&]()->V{V _lhs58166=([&]()->V{V _lhs58168=([&]()->V{V _lhs58170=([&]()->V{V _lhs58172=_v_51872_since;V _rhs58173=j::get(_v_51864_g,this->_literals[134]);return V(std::fmod(j::number(_lhs58172),j::number(_rhs58173)));})();V _rhs58171=j::get(_v_51864_g,this->_literals[134]);return j::binary("+",_lhs58170,_rhs58171);})();V _rhs58169=j::get(_v_51864_g,this->_literals[134]);return V(std::fmod(j::number(_lhs58168),j::number(_rhs58169)));})();V _rhs58167=_v_51868_sweep;return V(j::number(_lhs58166)/j::number(_rhs58167));})();
if(j::truth(j::unary("!",([&]()->V{V _lhs58174=_v_51873_u;V _rhs58175=V(1.0);return j::binary("<",_lhs58174,_rhs58175);})()))){continue;
}
_v_51874_at=([&]()->V{V _lhs58176=_v_51870_lo;V _rhs58177=([&]()->V{V _lhs58178=_v_51871_span;V _rhs58179=_v_51873_u;return V(j::number(_lhs58178)*j::number(_rhs58179));})();return j::binary("+",_lhs58176,_rhs58177);})();
{V _v_51875_y;
_v_51875_y=([&]()->V{V _receiver58182=j::builtin("Math");V _method58183=this->_literals[66];V _method=j::get(_receiver58182,_method58183);j::Args _params58184=j::Args{V(0.0),j::get(_v_51865_b,this->_literals[99])};return j::call(_method,_params58184,_receiver58182);})();
for(;j::truth(([&]()->V{V _lhs58185=_v_51875_y;V _rhs58186=([&]()->V{V _receiver58191=j::builtin("Math");V _method58192=this->_literals[116];V _method=j::get(_receiver58191,_method58192);j::Args _params58193=j::Args{_v_51486_rows.get(),([&]()->V{V _lhs58187=j::get(_v_51865_b,this->_literals[99]);V _rhs58188=j::get(_v_51865_b,this->_literals[252]);return j::binary("+",_lhs58187,_rhs58188);})()};return j::call(_method,_params58193,_receiver58191);})();return j::binary("<",_lhs58185,_rhs58186);})());(void)(j::increment(_v_51875_y,1,false))){{V _v_51876_x;
_v_51876_x=([&]()->V{V _receiver58196=j::builtin("Math");V _method58197=this->_literals[66];V _method=j::get(_receiver58196,_method58197);j::Args _params58198=j::Args{V(0.0),j::get(_v_51865_b,this->_literals[98])};return j::call(_method,_params58198,_receiver58196);})();
for(;j::truth(([&]()->V{V _lhs58199=_v_51876_x;V _rhs58200=([&]()->V{V _receiver58205=j::builtin("Math");V _method58206=this->_literals[116];V _method=j::get(_receiver58205,_method58206);j::Args _params58207=j::Args{_v_51485_cols.get(),([&]()->V{V _lhs58201=j::get(_v_51865_b,this->_literals[98]);V _rhs58202=j::get(_v_51865_b,this->_literals[251]);return j::binary("+",_lhs58201,_rhs58202);})()};return j::call(_method,_params58207,_receiver58205);})();return j::binary("<",_lhs58199,_rhs58200);})());(void)(j::increment(_v_51876_x,1,false))){
V _v_51877_k;
V _v_51878_d;
V _v_51879_kk;
_v_51877_k=([&]()->V{V _lhs58208=([&]()->V{V _lhs58210=_v_51875_y;V _rhs58211=_v_51485_cols.get();return V(j::number(_lhs58210)*j::number(_rhs58211));})();V _rhs58209=_v_51876_x;return j::binary("+",_lhs58208,_rhs58209);})();
if(j::truth(([&]()->V{V _logical58212=([&]()->V{V _lhs58213=j::get(_v_51642_owner.get(),_v_51877_k);V _rhs58214=_v_51863_pi;return V(!j::equal(_lhs58213,_rhs58214,true));})();return !j::truth(_logical58212)?([&]()->V{V _lhs58215=j::get(_v_51640_chars.get(),_v_51877_k);V _rhs58216=this->_v_50439_EMPTY.get();return V(j::equal(_lhs58215,_rhs58216,true));})():_logical58212;})())){continue;
}
_v_51878_d=([&]()->V{V _number58229=([&]()->V{V _lhs58230=([&]()->V{V _lhs58232=([&]()->V{V _lhs58234=_v_51876_x;V _rhs58235=j::get(_v_51865_b,this->_literals[98]);return V(j::number(_lhs58234)-j::number(_rhs58235));})();V _rhs58233=([&]()->V{V _lhs58236=_v_51867_lean;V _rhs58237=([&]()->V{V _lhs58238=_v_51875_y;V _rhs58239=j::get(_v_51865_b,this->_literals[99]);return V(j::number(_lhs58238)-j::number(_rhs58239));})();return V(j::number(_lhs58236)*j::number(_rhs58237));})();return j::binary("+",_lhs58232,_rhs58233);})();V _rhs58231=([&]()->V{V _lhs58240=_v_51874_at;V _rhs58241=j::get(_v_51865_b,this->_literals[98]);return V(j::number(_lhs58240)-j::number(_rhs58241));})();return V(j::number(_lhs58230)-j::number(_rhs58231));})();return V(std::fabs(j::number(_number58229)));})();
_v_51879_kk=(j::truth(([&]()->V{V _lhs58242=_v_51878_d;V _rhs58243=_v_51866_half;return j::binary("<",_lhs58242,_rhs58243);})())?([&]()->V{V _lhs58244=V(1.0);V _rhs58245=([&]()->V{V _lhs58246=_v_51878_d;V _rhs58247=_v_51866_half;return V(j::number(_lhs58246)/j::number(_rhs58247));})();return V(j::number(_lhs58244)-j::number(_rhs58245));})():V(0.0));
(void)((_v_51879_kk=([&]()->V{V _lhs58249=([&]()->V{V _lhs58251=_v_51879_kk;V _rhs58252=_v_51879_kk;return V(j::number(_lhs58251)*j::number(_rhs58252));})();V _rhs58250=([&]()->V{V _lhs58253=V(3.0);V _rhs58254=([&]()->V{V _lhs58255=V(2.0);V _rhs58256=_v_51879_kk;return V(j::number(_lhs58255)*j::number(_rhs58256));})();return V(j::number(_lhs58253)-j::number(_rhs58254));})();return V(j::number(_lhs58249)*j::number(_rhs58250));})()));
if(j::truth(([&]()->V{V _logical58257=([&]()->V{V _lhs58258=_v_51879_kk;V _rhs58259=V(0.55);return j::binary(">",_lhs58258,_rhs58259);})();return j::truth(_logical58257)?([&]()->V{V _logical58260=([&]()->V{V _receiver58261=this->_v_51020_SOLID.get();V _method58262=this->_literals[30];V _method=j::get(_receiver58261,_method58262);j::Args _params58263=j::Args{j::get(_v_51640_chars.get(),_v_51877_k)};return j::call(_method,_params58263,_receiver58261);})();return !j::truth(_logical58260)?([&]()->V{V _lhs58264=j::get(_v_51640_chars.get(),_v_51877_k);V _rhs58265=_v_51579_fillCode.get();return V(j::equal(_lhs58264,_rhs58265,true));})():_logical58260;})():_logical58257;})())){(void)(([&]()->V{V _base58267=_v_51640_chars.get();V _key58268=_v_51877_k;V _assign58266=this->_v_51023_SLASH.get();return j::put(_base58267,_key58268,_assign58266);})());
}
if(j::truth(([&]()->V{V _logical58269=([&]()->V{V _lhs58270=j::get(_v_51641_slots.get(),_v_51877_k);V _rhs58271=V(0.0);return j::binary(">=",_lhs58270,_rhs58271);})();return j::truth(_logical58269)?([&]()->V{V _lhs58272=_v_51528_runs.get();V _rhs58273=V(3.0);return V(j::equal(_lhs58272,_rhs58273,true));})():_logical58269;})())){(void)(([&]()->V{V _base58275=_v_51641_slots.get();V _key58276=_v_51877_k;V _assign58274=([&]()->V{V _lhs58277=([&]()->V{V _lhs58279=j::get(_v_51641_slots.get(),_v_51877_k);V _rhs58280=([&]()->V{V _lhs58281=j::get(_v_51568_light.get(),this->_literals[5]);V _rhs58282=V(3.0);return V(j::number(_lhs58281)/j::number(_rhs58282));})();return V(std::fmod(j::number(_lhs58279),j::number(_rhs58280)));})();V _rhs58278=([&]()->V{V _lhs58283=(j::truth(([&]()->V{V _lhs58285=_v_51879_kk;V _rhs58286=V(0.6);return j::binary(">",_lhs58285,_rhs58286);})())?V(2.0):(j::truth(([&]()->V{V _lhs58287=_v_51879_kk;V _rhs58288=V(0.25);return j::binary(">",_lhs58287,_rhs58288);})())?V(1.0):V(0.0)));V _rhs58284=([&]()->V{V _lhs58289=j::get(_v_51568_light.get(),this->_literals[5]);V _rhs58290=V(3.0);return V(j::number(_lhs58289)/j::number(_rhs58290));})();return V(j::number(_lhs58283)*j::number(_rhs58284));})();return j::binary("+",_lhs58277,_rhs58278);})();return j::put(_base58275,_key58276,_assign58274);})());
}

}
}
}}

}
}}

}

return ([&]()->V{V _obj58291=j::object();j::put(_obj58291,this->_literals[284],_v_51640_chars.get());j::put(_obj58291,this->_literals[285],_v_51641_slots.get());j::put(_obj58291,this->_literals[184],_v_51642_owner.get());j::put(_obj58291,this->_literals[286],_v_51643_cover.get());return _obj58291;})();

}

return V{};
},2));return _obj58090;})();

}

return V{};
},0);
return ([&]()->V{V _obj58292=j::object();j::put(_obj58292,this->_literals[251],_v_51485_cols.get());j::put(_obj58292,this->_literals[252],_v_51486_rows.get());j::put(_obj58292,this->_literals[223],_v_51568_light.get());j::put(_obj58292,this->_literals[224],_v_51569_dark);j::put(_obj58292,this->_literals[287],_v_51528_runs.get());j::put(_obj58292,this->_literals[288],_v_51606_moving.get());j::put(_obj58292,this->_literals[289],_v_51401_periods);j::put(_obj58292,this->_literals[290],_v_51402_held);j::put(_obj58292,this->_literals[291],_v_51608_textured.get());j::put(_obj58292,this->_literals[292],_v_51635_draw);return _obj58292;})();

}

return V{};
},2);
this->_v_51880_pick.get()=j::function([=](const j::Args &_args_fn51881,const V &_receiver_fn51881,const V &_self_fn51881) mutable ->V{
V _v_51882_v;
V _v_51883_style;
V _v_51884_solid;
_v_51882_v=_args_fn51881[0];
_v_51883_style=_args_fn51881[1];
_v_51884_solid=_args_fn51881[2];
{
V _v_51889_min;
V _v_51890_max;
V _v_51892_best;
V _v_51893_bd;
V _v_51897_e;
if(j::truth(([&]()->V{V _lhs58293=_v_51883_style;V _rhs58294=this->_literals[293];return V(j::equal(_lhs58293,_rhs58294,true));})())){
V _v_51885_q;
_v_51885_q=([&]()->V{V _lhs58295=([&]()->V{V _lhs58297=([&]()->V{V _lhs58299=(j::truth(([&]()->V{V _lhs58301=([&]()->V{V _lhs58303=([&]()->V{V _lhs58305=j::get(_v_51882_v,V(0.0));V _rhs58306=j::get(_v_51882_v,V(2.0));return j::binary("+",_lhs58305,_rhs58306);})();V _rhs58304=V(2.0);return V(j::number(_lhs58303)/j::number(_rhs58304));})();V _rhs58302=V(0.5);return j::binary(">=",_lhs58301,_rhs58302);})())?V(1.0):V(0.0));V _rhs58300=(j::truth(([&]()->V{V _lhs58307=([&]()->V{V _lhs58309=([&]()->V{V _lhs58311=j::get(_v_51882_v,V(1.0));V _rhs58312=j::get(_v_51882_v,V(3.0));return j::binary("+",_lhs58311,_rhs58312);})();V _rhs58310=V(2.0);return V(j::number(_lhs58309)/j::number(_rhs58310));})();V _rhs58308=V(0.5);return j::binary(">=",_lhs58307,_rhs58308);})())?V(2.0):V(0.0));return V(int(j::i32(_lhs58299)|j::i32(_rhs58300)));})();V _rhs58298=(j::truth(([&]()->V{V _lhs58313=([&]()->V{V _lhs58315=([&]()->V{V _lhs58317=j::get(_v_51882_v,V(4.0));V _rhs58318=j::get(_v_51882_v,V(6.0));return j::binary("+",_lhs58317,_rhs58318);})();V _rhs58316=V(2.0);return V(j::number(_lhs58315)/j::number(_rhs58316));})();V _rhs58314=V(0.5);return j::binary(">=",_lhs58313,_rhs58314);})())?V(4.0):V(0.0));return V(int(j::i32(_lhs58297)|j::i32(_rhs58298)));})();V _rhs58296=(j::truth(([&]()->V{V _lhs58319=([&]()->V{V _lhs58321=([&]()->V{V _lhs58323=j::get(_v_51882_v,V(5.0));V _rhs58324=j::get(_v_51882_v,V(7.0));return j::binary("+",_lhs58323,_rhs58324);})();V _rhs58322=V(2.0);return V(j::number(_lhs58321)/j::number(_rhs58322));})();V _rhs58320=V(0.5);return j::binary(">=",_lhs58319,_rhs58320);})())?V(8.0):V(0.0));return V(int(j::i32(_lhs58295)|j::i32(_rhs58296)));})();
return (j::truth(_v_51885_q)?([&]()->V{V _receiver58325=this->_v_51024_QUARTERS.get();V _method58326=this->_literals[263];V _method=j::get(_receiver58325,_method58326);j::Args _params58327=j::Args{_v_51885_q};return j::call(_method,_params58327,_receiver58325);})():this->_v_50439_EMPTY.get());

}

if(j::truth(([&]()->V{V _lhs58328=_v_51883_style;V _rhs58329=this->_literals[294];return V(j::equal(_lhs58328,_rhs58329,true));})())){
V _v_51886_bits;
V _v_51887_b;
_v_51886_bits=([&]()->V{j::Args _array58330;_array58330.push_back(V(1.0));_array58330.push_back(V(8.0));_array58330.push_back(V(2.0));_array58330.push_back(V(16.0));_array58330.push_back(V(4.0));_array58330.push_back(V(32.0));_array58330.push_back(V(64.0));_array58330.push_back(V(128.0));return j::array(std::move(_array58330));})();
_v_51887_b=V(0.0);
{V _v_51888_i;
_v_51888_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs58331=_v_51888_i;V _rhs58332=V(8.0);return j::binary("<",_lhs58331,_rhs58332);})());(void)(j::increment(_v_51888_i,1,false))){if(j::truth(([&]()->V{V _lhs58333=j::get(_v_51882_v,_v_51888_i);V _rhs58334=V(0.5);return j::binary(">=",_lhs58333,_rhs58334);})())){(void)((_v_51887_b=j::binary("|",_v_51887_b,j::get(_v_51886_bits,_v_51888_i))));
}
}}
return (j::truth(_v_51887_b)?([&]()->V{V _lhs58336=V(10240.0);V _rhs58337=_v_51887_b;return j::binary("+",_lhs58336,_rhs58337);})():this->_v_50439_EMPTY.get());

}

_v_51889_min=V(1.0);
_v_51890_max=V(0.0);
{V _v_51891_i;
_v_51891_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs58338=_v_51891_i;V _rhs58339=V(8.0);return j::binary("<",_lhs58338,_rhs58339);})());(void)(j::increment(_v_51891_i,1,false))){
if(j::truth(([&]()->V{V _lhs58340=j::get(_v_51882_v,_v_51891_i);V _rhs58341=_v_51889_min;return j::binary("<",_lhs58340,_rhs58341);})())){(void)((_v_51889_min=j::get(_v_51882_v,_v_51891_i)));
}
if(j::truth(([&]()->V{V _lhs58343=j::get(_v_51882_v,_v_51891_i);V _rhs58344=_v_51890_max;return j::binary(">",_lhs58343,_rhs58344);})())){(void)((_v_51890_max=j::get(_v_51882_v,_v_51891_i)));
}

}
}
if(j::truth(([&]()->V{V _lhs58346=_v_51890_max;V _rhs58347=V(0.1);return j::binary("<",_lhs58346,_rhs58347);})())){return this->_v_50439_EMPTY.get();
}
if(j::truth(([&]()->V{V _lhs58348=_v_51889_min;V _rhs58349=V(0.8);return j::binary(">",_lhs58348,_rhs58349);})())){return _v_51884_solid;
}
_v_51892_best=V(0.0);
_v_51893_bd=j::builtin("Infinity");
{V _v_51894_g;
_v_51894_g=V(0.0);
for(;j::truth(([&]()->V{V _lhs58350=_v_51894_g;V _rhs58351=j::get(this->_v_51014_GLYPH_CODES.get(),this->_literals[5]);return j::binary("<",_lhs58350,_rhs58351);})());(void)(j::increment(_v_51894_g,1,false))){
V _v_51895_d;
_v_51895_d=V(0.0);
{V _v_51896_i;
_v_51896_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs58352=_v_51896_i;V _rhs58353=V(8.0);return j::binary("<",_lhs58352,_rhs58353);})());(void)(j::increment(_v_51896_i,1,false))){(void)((_v_51895_d=j::binary("+",_v_51895_d,([&]()->V{V _lhs58355=([&]()->V{V _lhs58357=j::get(_v_51882_v,_v_51896_i);V _rhs58358=j::get(this->_v_51017_GLYPH_INK.get(),([&]()->V{V _lhs58359=([&]()->V{V _lhs58361=_v_51894_g;V _rhs58362=V(8.0);return V(j::number(_lhs58361)*j::number(_rhs58362));})();V _rhs58360=_v_51896_i;return j::binary("+",_lhs58359,_rhs58360);})());return V(j::number(_lhs58357)-j::number(_rhs58358));})();V _rhs58356=V(2.0);return V(std::pow(j::number(_lhs58355),j::number(_rhs58356)));})())));
}}
if(j::truth(([&]()->V{V _lhs58363=_v_51895_d;V _rhs58364=_v_51893_bd;return j::binary("<",_lhs58363,_rhs58364);})())){(void)(((_v_51893_bd=_v_51895_d),(_v_51892_best=_v_51894_g)));
}

}
}
_v_51897_e=V(0.0);
{V _v_51898_i;
_v_51898_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs58367=_v_51898_i;V _rhs58368=V(8.0);return j::binary("<",_lhs58367,_rhs58368);})());(void)(j::increment(_v_51898_i,1,false))){(void)((_v_51897_e=j::binary("+",_v_51897_e,([&]()->V{V _lhs58370=j::get(_v_51882_v,_v_51898_i);V _rhs58371=j::get(_v_51882_v,_v_51898_i);return V(j::number(_lhs58370)*j::number(_rhs58371));})())));
}}
return (j::truth(([&]()->V{V _lhs58372=_v_51897_e;V _rhs58373=_v_51893_bd;return j::binary("<",_lhs58372,_rhs58373);})())?this->_v_50439_EMPTY.get():(j::truth(([&]()->V{V _lhs58374=j::get(this->_v_51014_GLYPH_CODES.get(),_v_51892_best);V _rhs58375=V(56.0);return V(j::equal(_lhs58374,_rhs58375,true));})())?_v_51884_solid:j::get(this->_v_51014_GLYPH_CODES.get(),_v_51892_best)));

}

return V{};
},3);
this->_v_51899_planOptions.get()=j::function([=](const j::Args &_args_fn51900,const V &_receiver_fn51900,const V &_self_fn51900) mutable ->V{
V _v_51901_o;
j::Cell _v_51902_drawing;
V _v_51903_aspect;
_v_51901_o=_args_fn51900[0];
_v_51902_drawing.get()=_args_fn51900[1];
_v_51903_aspect=_args_fn51900[2];
{
V _v_51904_parts;
V _v_51908_m;
V _v_51909_margin;
V _v_51911_style;
V _v_51915_fit;
V _v_51916_known;
V _v_51919_ink;
V _v_51920_width;
V _v_51921_cols;
V _v_51922_rows;
if(j::truth(([&]()->V{V _logical58376=([&]()->V{V _logical58377=([&]()->V{V _lhs58378=_v_51901_o;V _rhs58379=V::null();return V(j::equal(_lhs58378,_rhs58379,true));})();return !j::truth(_logical58377)?([&]()->V{V _lhs58380=j::unary("typeof",_v_51901_o);V _rhs58381=this->_literals[218];return V(!j::equal(_lhs58380,_rhs58381,true));})():_logical58377;})();return !j::truth(_logical58376)?([&]()->V{V _receiver58382=j::builtin("Array");V _method58383=this->_literals[207];V _method=j::get(_receiver58382,_method58383);j::Args _params58384=j::Args{_v_51901_o};return j::call(_method,_params58384,_receiver58382);})():_logical58376;})())){(void)(([&]()->V{V _callee58386=this->_v_50450_fail.get();return j::call(_callee58386,j::Args{([&]()->V{std::u16string _text58385;_text58385+=u"";_text58385+=j::string((j::truth(_v_51902_drawing.get())?this->_literals[295]:this->_literals[296]));_text58385+=u" takes options as an object, such as { width: 40, \"#star\": \"spin\" }";return V(std::move(_text58385));})()});})());
}
_v_51904_parts=([&]()->V{j::Args _array58387;return j::array(std::move(_array58387));})();
{for(const auto &_item58388:j::elements(([&]()->V{V _receiver58389=j::builtin("Object");V _method58390=this->_literals[214];V _method=j::get(_receiver58389,_method58390);j::Args _params58391=j::Args{_v_51901_o};return j::call(_method,_params58391,_receiver58389);})())){V _v_51905_key;
_v_51905_key=_item58388;
{
if(j::truth(([&]()->V{V _logical58392=([&]()->V{V _logical58393=([&]()->V{V _lhs58394=_v_51905_key;V _rhs58395=this->_literals[37];return V(j::equal(_lhs58394,_rhs58395,true));})();return !j::truth(_logical58393)?([&]()->V{V _receiver58396=_v_51905_key;V _method58397=this->_literals[10];V _method=j::get(_receiver58396,_method58397);j::Args _params58398=j::Args{this->_literals[39]};return j::call(_method,_params58398,_receiver58396);})():_logical58393;})();return !j::truth(_logical58392)?([&]()->V{V _receiver58399=_v_51905_key;V _method58400=this->_literals[10];V _method=j::get(_receiver58399,_method58400);j::Args _params58401=j::Args{this->_literals[42]};return j::call(_method,_params58401,_receiver58399);})():_logical58392;})())){
if(j::truth(([&]()->V{V _logical58402=([&]()->V{V _lhs58403=j::get(_v_51905_key,this->_literals[5]);V _rhs58404=V(2.0);return j::binary("<",_lhs58403,_rhs58404);})();return j::truth(_logical58402)?([&]()->V{V _lhs58405=_v_51905_key;V _rhs58406=this->_literals[37];return V(!j::equal(_lhs58405,_rhs58406,true));})():_logical58402;})())){(void)(([&]()->V{V _callee58408=this->_v_50450_fail.get();return j::call(_callee58408,j::Args{([&]()->V{std::u16string _text58407;_text58407+=u"a part's name takes an id, a class or a colour after \"";_text58407+=j::string(_v_51905_key);_text58407+=u"\", such as \"#cup\" or \".flame\"";return V(std::move(_text58407));})()});})());
}
(void)(([&]()->V{V _receiver58410=_v_51904_parts;V _method58411=this->_literals[25];V _method=j::get(_receiver58410,_method58411);j::Args _params58412=j::Args{([&]()->V{V _callee58409=this->_v_51269_partOf.get();return j::call(_callee58409,j::Args{_v_51905_key,j::get(_v_51901_o,_v_51905_key),j::get(_v_51904_parts,this->_literals[5])});})()};return j::call(_method,_params58412,_receiver58410);})());

}
else {if(j::truth(([&]()->V{V _logical58413=([&]()->V{V _logical58414=j::unary("!",([&]()->V{V _receiver58415=this->_v_50992_OPTIONS.get();V _method58416=this->_literals[133];V _method=j::get(_receiver58415,_method58416);j::Args _params58417=j::Args{_v_51905_key};return j::call(_method,_params58417,_receiver58415);})());return !j::truth(_logical58414)?([&]()->V{V _logical58418=_v_51902_drawing.get();return j::truth(_logical58418)?([&]()->V{V _receiver58419=([&]()->V{j::Args _array58422;_array58422.push_back(this->_literals[100]);_array58422.push_back(this->_literals[251]);_array58422.push_back(this->_literals[252]);_array58422.push_back(this->_literals[0]);_array58422.push_back(this->_literals[297]);_array58422.push_back(this->_literals[298]);_array58422.push_back(this->_literals[299]);_array58422.push_back(this->_literals[300]);_array58422.push_back(this->_literals[301]);return j::array(std::move(_array58422));})();V _method58420=this->_literals[133];V _method=j::get(_receiver58419,_method58420);j::Args _params58421=j::Args{_v_51905_key};return j::call(_method,_params58421,_receiver58419);})():_logical58418;})():_logical58414;})();return !j::truth(_logical58413)?([&]()->V{V _logical58423=j::unary("!",_v_51902_drawing.get());return j::truth(_logical58423)?([&]()->V{V _lhs58424=_v_51905_key;V _rhs58425=this->_literals[302];return V(j::equal(_lhs58424,_rhs58425,true));})():_logical58423;})():_logical58413;})())){(void)(([&]()->V{V _callee58440=this->_v_50450_fail.get();return j::call(_callee58440,j::Args{([&]()->V{std::u16string _text58426;_text58426+=u"";_text58426+=j::string((j::truth(_v_51902_drawing.get())?this->_literals[295]:this->_literals[296]));_text58426+=u" has no option named ";_text58426+=j::string(([&]()->V{V _receiver58427=j::builtin("JSON");V _method58428=this->_literals[215];V _method=j::get(_receiver58427,_method58428);j::Args _params58429=j::Args{_v_51905_key};return j::call(_method,_params58429,_receiver58427);})());_text58426+=u": it takes ";_text58426+=j::string(([&]()->V{V _callee58439=this->_v_50445_and.get();return j::call(_callee58439,j::Args{([&]()->V{V _receiver58436=this->_v_50992_OPTIONS.get();V _method58437=this->_literals[40];V _method=j::get(_receiver58436,_method58437);j::Args _params58438=j::Args{j::function([=](const j::Args &_args_fn51906,const V &_receiver_fn51906,const V &_self_fn51906) mutable ->V{
V _v_51907_k;
_v_51907_k=_args_fn51906[0];
return (j::truth(_v_51902_drawing.get())?j::unary("!",([&]()->V{V _receiver58430=([&]()->V{j::Args _array58433;_array58433.push_back(this->_literals[100]);_array58433.push_back(this->_literals[251]);_array58433.push_back(this->_literals[252]);_array58433.push_back(this->_literals[0]);_array58433.push_back(this->_literals[297]);_array58433.push_back(this->_literals[298]);_array58433.push_back(this->_literals[299]);_array58433.push_back(this->_literals[300]);_array58433.push_back(this->_literals[301]);return j::array(std::move(_array58433));})();V _method58431=this->_literals[133];V _method=j::get(_receiver58430,_method58431);j::Args _params58432=j::Args{_v_51907_k};return j::call(_method,_params58432,_receiver58430);})()):([&]()->V{V _lhs58434=_v_51907_k;V _rhs58435=this->_literals[302];return V(!j::equal(_lhs58434,_rhs58435,true));})());
return V{};
},1)};return j::call(_method,_params58438,_receiver58436);})()});})());_text58426+=u", and parts by \"#id\", \".class\", a colour or \"*\"";return V(std::move(_text58426));})()});})());
}
}

}
}}
_v_51908_m=j::get(_v_51901_o,this->_literals[250]);
_v_51909_margin=(j::truth(([&]()->V{V _lhs58441=_v_51908_m;V _rhs58442=j::builtin("undefined");return V(j::equal(_lhs58441,_rhs58442,true));})())?(j::truth(_v_51902_drawing.get())?([&]()->V{j::Args _array58443;_array58443.push_back(V(0.0));_array58443.push_back(V(0.0));return j::array(std::move(_array58443));})():([&]()->V{j::Args _array58444;_array58444.push_back(V(2.0));_array58444.push_back(V(1.0));return j::array(std::move(_array58444));})()):(j::truth(([&]()->V{V _lhs58445=j::unary("typeof",_v_51908_m);V _rhs58446=this->_literals[220];return V(j::equal(_lhs58445,_rhs58446,true));})())?([&]()->V{j::Args _array58447;_array58447.push_back(_v_51908_m);_array58447.push_back(_v_51908_m);return j::array(std::move(_array58447));})():(j::truth(([&]()->V{V _logical58448=([&]()->V{V _receiver58449=j::builtin("Array");V _method58450=this->_literals[207];V _method=j::get(_receiver58449,_method58450);j::Args _params58451=j::Args{_v_51908_m};return j::call(_method,_params58451,_receiver58449);})();return j::truth(_logical58448)?([&]()->V{V _lhs58452=j::get(_v_51908_m,this->_literals[5]);V _rhs58453=V(2.0);return V(j::equal(_lhs58452,_rhs58453,true));})():_logical58448;})())?([&]()->V{j::Args _array58454;_array58454.push_back(j::get(_v_51908_m,V(0.0)));_array58454.push_back(j::get(_v_51908_m,V(1.0)));return j::array(std::move(_array58454));})():([&]()->V{V _callee58459=this->_v_50450_fail.get();return j::call(_callee58459,j::Args{([&]()->V{std::u16string _text58455;_text58455+=u"margin takes a number of cells, or [columns, rows], not ";_text58455+=j::string(([&]()->V{V _receiver58456=j::builtin("JSON");V _method58457=this->_literals[215];V _method=j::get(_receiver58456,_method58457);j::Args _params58458=j::Args{_v_51908_m};return j::call(_method,_params58458,_receiver58456);})());_text58455+=u"";return V(std::move(_text58455));})()});})())));
{for(const auto &_item58460:j::elements(_v_51909_margin)){V _v_51910_v;
_v_51910_v=_item58460;
if(j::truth(([&]()->V{V _logical58461=j::unary("!",([&]()->V{V _receiver58462=j::builtin("Number");V _method58463=this->_literals[303];V _method=j::get(_receiver58462,_method58463);j::Args _params58464=j::Args{_v_51910_v};return j::call(_method,_params58464,_receiver58462);})());return !j::truth(_logical58461)?([&]()->V{V _lhs58465=_v_51910_v;V _rhs58466=V(0.0);return j::binary("<",_lhs58465,_rhs58466);})():_logical58461;})())){(void)(([&]()->V{V _callee58471=this->_v_50450_fail.get();return j::call(_callee58471,j::Args{([&]()->V{std::u16string _text58467;_text58467+=u"margin takes whole numbers of 0 or more, not ";_text58467+=j::string(([&]()->V{V _receiver58468=j::builtin("JSON");V _method58469=this->_literals[215];V _method=j::get(_receiver58468,_method58469);j::Args _params58470=j::Args{_v_51908_m};return j::call(_method,_params58470,_receiver58468);})());_text58467+=u"";return V(std::move(_text58467));})()});})());
}
}}
_v_51911_style=([&]()->V{V _logical58472=j::get(_v_51901_o,this->_literals[124]);return j::nullish(_logical58472)?this->_literals[304]:_logical58472;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver58473=this->_v_50994_STYLES.get();V _method58474=this->_literals[133];V _method=j::get(_receiver58473,_method58474);j::Args _params58475=j::Args{_v_51911_style};return j::call(_method,_params58475,_receiver58473);})()))){(void)(([&]()->V{V _callee58487=this->_v_50450_fail.get();return j::call(_callee58487,j::Args{([&]()->V{std::u16string _text58476;_text58476+=u"style takes ";_text58476+=j::string(([&]()->V{V _callee58483=this->_v_50445_and.get();return j::call(_callee58483,j::Args{([&]()->V{V _receiver58480=this->_v_50994_STYLES.get();V _method58481=this->_literals[41];V _method=j::get(_receiver58480,_method58481);j::Args _params58482=j::Args{j::function([=](const j::Args &_args_fn51912,const V &_receiver_fn51912,const V &_self_fn51912) mutable ->V{
V _v_51913_s;
_v_51913_s=_args_fn51912[0];
return ([&]()->V{V _receiver58477=j::builtin("JSON");V _method58478=this->_literals[215];V _method=j::get(_receiver58477,_method58478);j::Args _params58479=j::Args{_v_51913_s};return j::call(_method,_params58479,_receiver58477);})();
return V{};
},1)};return j::call(_method,_params58482,_receiver58480);})()});})());_text58476+=u", not ";_text58476+=j::string(([&]()->V{V _receiver58484=j::builtin("JSON");V _method58485=this->_literals[215];V _method=j::get(_receiver58484,_method58485);j::Args _params58486=j::Args{j::get(_v_51901_o,this->_literals[124])};return j::call(_method,_params58486,_receiver58484);})());_text58476+=u"";return V(std::move(_text58476));})()});})());
}
{for(const auto &_item58488:j::elements(_v_51904_parts)){V _v_51914_p;
_v_51914_p=_item58488;
if(j::truth(([&]()->V{V _logical58489=j::get(_v_51914_p,this->_literals[211]);return j::truth(_logical58489)?([&]()->V{V _lhs58490=_v_51911_style;V _rhs58491=this->_literals[256];return V(j::equal(_lhs58490,_rhs58491,true));})():_logical58489;})())){(void)(([&]()->V{V _callee58493=this->_v_50450_fail.get();return j::call(_callee58493,j::Args{([&]()->V{std::u16string _text58492;_text58492+=u"";_text58492+=j::string(j::get(_v_51914_p,this->_literals[208]));_text58492+=u"'s material has nothing to fill in the \"outline\" style, which draws only edges: use \"logo\", \"blocks\" or \"braille\"";return V(std::move(_text58492));})()});})());
}
}}
_v_51915_fit=([&]()->V{V _logical58494=j::get(_v_51901_o,this->_literals[249]);return j::nullish(_logical58494)?this->_literals[254]:_logical58494;})();
if(j::truth(([&]()->V{V _logical58495=([&]()->V{V _lhs58496=_v_51915_fit;V _rhs58497=this->_literals[254];return V(!j::equal(_lhs58496,_rhs58497,true));})();return j::truth(_logical58495)?([&]()->V{V _lhs58498=_v_51915_fit;V _rhs58499=this->_literals[129];return V(!j::equal(_lhs58498,_rhs58499,true));})():_logical58495;})())){(void)(([&]()->V{V _callee58504=this->_v_50450_fail.get();return j::call(_callee58504,j::Args{([&]()->V{std::u16string _text58500;_text58500+=u"fit takes \"ink\" or \"viewBox\", not ";_text58500+=j::string(([&]()->V{V _receiver58501=j::builtin("JSON");V _method58502=this->_literals[215];V _method=j::get(_receiver58501,_method58502);j::Args _params58503=j::Args{j::get(_v_51901_o,this->_literals[249])};return j::call(_method,_params58503,_receiver58501);})());_text58500+=u"";return V(std::move(_text58500));})()});})());
}
_v_51916_known=j::function([=](const j::Args &_args_fn51917,const V &_receiver_fn51917,const V &_self_fn51917) mutable ->V{
V _v_51918_v;
_v_51918_v=_args_fn51917[0];
return ([&]()->V{V _logical58505=([&]()->V{V _lhs58506=j::unary("typeof",_v_51918_v);V _rhs58507=this->_literals[117];return V(j::equal(_lhs58506,_rhs58507,true));})();return j::truth(_logical58505)?([&]()->V{V _logical58508=([&]()->V{V _logical58509=([&]()->V{V _callee58510=this->_v_50453_isHex.get();return j::call(_callee58510,j::Args{_v_51918_v});})();return !j::truth(_logical58509)?([&]()->V{V _receiver58511=j::builtin("Object");V _method58512=this->_literals[216];V _method=j::get(_receiver58511,_method58512);j::Args _params58513=j::Args{this->_v_50459_schemes.get(),_v_51918_v};return j::call(_method,_params58513,_receiver58511);})():_logical58509;})();return !j::truth(_logical58508)?([&]()->V{V _receiver58514=j::builtin("Object");V _method58515=this->_literals[216];V _method=j::get(_receiver58514,_method58515);j::Args _params58516=j::Args{this->_v_50454_materialColors.get(),_v_51918_v};return j::call(_method,_params58516,_receiver58514);})():_logical58508;})():_logical58505;})();
return V{};
},1);
if(j::truth(([&]()->V{V _logical58517=([&]()->V{V _logical58518=([&]()->V{V _lhs58519=j::get(_v_51901_o,this->_literals[141]);V _rhs58520=j::builtin("undefined");return V(!j::equal(_lhs58519,_rhs58520,true));})();return j::truth(_logical58518)?([&]()->V{V _lhs58521=j::unary("typeof",j::get(_v_51901_o,this->_literals[141]));V _rhs58522=this->_literals[305];return V(!j::equal(_lhs58521,_rhs58522,true));})():_logical58518;})();return j::truth(_logical58517)?j::unary("!",([&]()->V{V _callee58523=_v_51916_known;return j::call(_callee58523,j::Args{j::get(_v_51901_o,this->_literals[141])});})()):_logical58517;})())){(void)(([&]()->V{V _callee58528=this->_v_50450_fail.get();return j::call(_callee58528,j::Args{([&]()->V{std::u16string _text58524;_text58524+=u"color takes true (the drawing's own colours), false (the page's), or #rrggbb or a palette's name such as \"ocean\" for what it draws in currentColor, not ";_text58524+=j::string(([&]()->V{V _receiver58525=j::builtin("JSON");V _method58526=this->_literals[215];V _method=j::get(_receiver58525,_method58526);j::Args _params58527=j::Args{j::get(_v_51901_o,this->_literals[141])};return j::call(_method,_params58527,_receiver58525);})());_text58524+=u"";return V(std::move(_text58524));})()});})());
}
_v_51919_ink=(j::truth(([&]()->V{V _lhs58529=j::unary("typeof",j::get(_v_51901_o,this->_literals[141]));V _rhs58530=this->_literals[117];return V(j::equal(_lhs58529,_rhs58530,true));})())?(j::truth(([&]()->V{V _callee58531=this->_v_50453_isHex.get();return j::call(_callee58531,j::Args{j::get(_v_51901_o,this->_literals[141])});})())?j::get(_v_51901_o,this->_literals[141]):j::get(([&]()->V{V _callee58532=this->_v_50449_named.get();return j::call(_callee58532,j::Args{j::get(_v_51901_o,this->_literals[141]),this->_literals[141]});})(),this->_literals[224])):V::null());
_v_51920_width=([&]()->V{V _callee58533=this->_v_50995_whole.get();return j::call(_callee58533,j::Args{j::get(_v_51901_o,this->_literals[100]),this->_literals[100],V(3.0),j::get(this->_v_50441_MAX.get(),this->_literals[251])});})();
_v_51921_cols=([&]()->V{V _callee58534=this->_v_50995_whole.get();return j::call(_callee58534,j::Args{j::get(_v_51901_o,this->_literals[251]),this->_literals[251],V(1.0),j::get(this->_v_50441_MAX.get(),this->_literals[251])});})();
_v_51922_rows=([&]()->V{V _callee58535=this->_v_50995_whole.get();return j::call(_callee58535,j::Args{j::get(_v_51901_o,this->_literals[252]),this->_literals[252],V(1.0),j::get(this->_v_50441_MAX.get(),this->_literals[252])});})();
if(j::truth(([&]()->V{V _logical58536=([&]()->V{V _lhs58537=_v_51920_width;V _rhs58538=j::builtin("undefined");return V(!j::equal(_lhs58537,_rhs58538,true));})();return j::truth(_logical58536)?([&]()->V{V _lhs58539=_v_51921_cols;V _rhs58540=j::builtin("undefined");return V(!j::equal(_lhs58539,_rhs58540,true));})():_logical58536;})())){(void)(([&]()->V{V _callee58541=this->_v_50450_fail.get();return j::call(_callee58541,j::Args{this->_literals[306]});})());
}
return ([&]()->V{V _obj58542=j::object();j::put(_obj58542,this->_literals[100],_v_51920_width);j::put(_obj58542,this->_literals[251],_v_51921_cols);j::put(_obj58542,this->_literals[252],_v_51922_rows);j::put(_obj58542,this->_literals[250],_v_51909_margin);j::put(_obj58542,this->_literals[249],_v_51915_fit);j::put(_obj58542,this->_literals[124],_v_51911_style);j::put(_obj58542,this->_literals[130],([&]()->V{V _logical58543=([&]()->V{V _callee58544=this->_v_51009_oneChar.get();return j::call(_callee58544,j::Args{j::get(_v_51901_o,this->_literals[130]),this->_literals[130]});})();return j::nullish(_logical58543)?this->_literals[307]:_logical58543;})());j::put(_obj58542,this->_literals[141],([&]()->V{V _lhs58545=j::get(_v_51901_o,this->_literals[141]);V _rhs58546=V(false);return V(!j::equal(_lhs58545,_rhs58546,true));})());j::put(_obj58542,this->_literals[254],([&]()->V{V _logical58547=([&]()->V{V _chain58548=_v_51919_ink;if(j::nullish(_chain58548))return V{};V _chain58549=j::get(_chain58548,this->_literals[29]);V _chain58550=j::call(_chain58549,j::Args{},_chain58548);return _chain58550;})();return j::nullish(_logical58547)?V::null():_logical58547;})());j::put(_obj58542,this->_literals[94],([&]()->V{V _logical58551=([&]()->V{V _callee58552=this->_v_51001_above0.get();return j::call(_callee58552,j::Args{j::get(_v_51901_o,this->_literals[94]),this->_literals[94]});})();return j::nullish(_logical58551)?V(0.4):_logical58551;})());j::put(_obj58542,this->_literals[231],_v_51903_aspect);j::put(_obj58542,this->_literals[184],_v_51904_parts);return _obj58542;})();

}

return V{};
},3);
this->_v_51923_drawOptions.get()=j::function([=](const j::Args &_args_fn51924,const V &_receiver_fn51924,const V &_self_fn51924) mutable ->V{
V _v_51925_o;
V _v_51926_name;
_v_51925_o=_args_fn51924[0];
_v_51926_name=_args_fn51924[1];
{
V _v_51927_r;
if(j::truth(([&]()->V{V _logical58553=([&]()->V{V _logical58554=([&]()->V{V _lhs58555=_v_51925_o;V _rhs58556=V::null();return V(j::equal(_lhs58555,_rhs58556,true));})();return !j::truth(_logical58554)?([&]()->V{V _lhs58557=j::unary("typeof",_v_51925_o);V _rhs58558=this->_literals[218];return V(!j::equal(_lhs58557,_rhs58558,true));})():_logical58554;})();return !j::truth(_logical58553)?([&]()->V{V _receiver58559=j::builtin("Array");V _method58560=this->_literals[207];V _method=j::get(_receiver58559,_method58560);j::Args _params58561=j::Args{_v_51925_o};return j::call(_method,_params58561,_receiver58559);})():_logical58553;})())){(void)(([&]()->V{V _callee58563=this->_v_50450_fail.get();return j::call(_callee58563,j::Args{([&]()->V{std::u16string _text58562;_text58562+=u"";_text58562+=j::string(_v_51926_name);_text58562+=u" takes options as an object, such as { region, \"#star\": \"spin\" }";return V(std::move(_text58562));})()});})());
}
_v_51927_r=j::get(_v_51925_o,this->_literals[302]);
if(j::truth(([&]()->V{V _logical58564=([&]()->V{V _lhs58565=_v_51927_r;V _rhs58566=j::builtin("undefined");return V(!j::equal(_lhs58565,_rhs58566,true));})();return j::truth(_logical58564)?j::unary("!",([&]()->V{V _logical58567=([&]()->V{V _logical58568=_v_51927_r;return j::truth(_logical58568)?([&]()->V{V _lhs58569=j::unary("typeof",_v_51927_r);V _rhs58570=this->_literals[218];return V(j::equal(_lhs58569,_rhs58570,true));})():_logical58568;})();return j::truth(_logical58567)?([&]()->V{V _receiver58577=([&]()->V{j::Args _array58580;_array58580.push_back(j::get(_v_51927_r,this->_literals[98]));_array58580.push_back(j::get(_v_51927_r,this->_literals[99]));_array58580.push_back(j::get(_v_51927_r,this->_literals[251]));_array58580.push_back(j::get(_v_51927_r,this->_literals[252]));return j::array(std::move(_array58580));})();V _method58578=this->_literals[134];V _method=j::get(_receiver58577,_method58578);j::Args _params58579=j::Args{j::function([=](const j::Args &_args_fn51928,const V &_receiver_fn51928,const V &_self_fn51928) mutable ->V{
V _v_51929_v;
_v_51929_v=_args_fn51928[0];
return ([&]()->V{V _logical58571=([&]()->V{V _lhs58572=j::unary("typeof",_v_51929_v);V _rhs58573=this->_literals[220];return V(j::equal(_lhs58572,_rhs58573,true));})();return j::truth(_logical58571)?([&]()->V{V _receiver58574=j::builtin("Number");V _method58575=this->_literals[57];V _method=j::get(_receiver58574,_method58575);j::Args _params58576=j::Args{_v_51929_v};return j::call(_method,_params58576,_receiver58574);})():_logical58571;})();
return V{};
},1)};return j::call(_method,_params58579,_receiver58577);})():_logical58567;})()):_logical58564;})())){(void)(([&]()->V{V _callee58585=this->_v_50450_fail.get();return j::call(_callee58585,j::Args{([&]()->V{std::u16string _text58581;_text58581+=u"";_text58581+=j::string(_v_51926_name);_text58581+=u"'s region takes { x, y, cols, rows } in cells, not ";_text58581+=j::string(([&]()->V{V _receiver58582=j::builtin("JSON");V _method58583=this->_literals[215];V _method=j::get(_receiver58582,_method58583);j::Args _params58584=j::Args{_v_51927_r};return j::call(_method,_params58584,_receiver58582);})());_text58581+=u"";return V(std::move(_text58581));})()});})());
}
return _v_51925_o;

}

return V{};
},2);
this->_v_51933_partCells.get()=j::function([=](const j::Args &_args_fn51934,const V &_receiver_fn51934,const V &_self_fn51934) mutable ->V{
j::Cell _v_51935_cover;
j::Cell _v_51936_cols;
j::Cell _v_51937_rows;
V _v_51938_aspect;
_v_51935_cover.get()=_args_fn51934[0];
_v_51936_cols.get()=_args_fn51934[1];
_v_51937_rows.get()=_args_fn51934[2];
V _default58586=_args_fn51934[3];if(_default58586.kind==V::Undefined||_default58586.kind==V::Hole)_default58586=V(2.0);
_v_51938_aspect=_default58586;
{
j::Cell _v_51939_n;
V _v_51940_inside;
j::Cell _v_51941_list;
V _v_51942_x0;
V _v_51943_y0;
V _v_51944_x1;
V _v_51945_y1;
V _v_51946_top;
V _v_51947_bottom;
V _v_51948_left;
V _v_51949_right;
j::Cell _v_51953_cv;
j::Cell _v_51957_isIn;
j::Cell _v_51961_border;
V _v_51962_nx;
V _v_51963_ny;
j::Cell _v_51970_depth;
V _v_51971_D;
V _v_51972_far;
V _v_51974_d;
V _v_51985_maxDepth;
j::Cell _v_51987_fringe;
V _v_51993_empty;
j::Cell _v_51994_outlines;
j::Cell _v_51995_cells;
_v_51939_n.get()=([&]()->V{V _lhs58587=_v_51936_cols.get();V _rhs58588=_v_51937_rows.get();return V(j::number(_lhs58587)*j::number(_rhs58588));})();
_v_51940_inside=([&]()->V{V _callee58589=j::builtin("Uint8Array");return j::construct(_callee58589,j::Args{_v_51939_n.get()});})();
_v_51941_list.get()=([&]()->V{j::Args _array58590;return j::array(std::move(_array58590));})();
_v_51942_x0=_v_51936_cols.get();
_v_51943_y0=_v_51937_rows.get();
_v_51944_x1=V(0.0);
_v_51945_y1=V(0.0);
_v_51946_top=([&]()->V{V _receiver58591=([&]()->V{V _callee58594=j::builtin("Int16Array");return j::construct(_callee58594,j::Args{_v_51936_cols.get()});})();V _method58592=this->_literals[130];V _method=j::get(_receiver58591,_method58592);j::Args _params58593=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params58593,_receiver58591);})();
_v_51947_bottom=([&]()->V{V _receiver58595=([&]()->V{V _callee58598=j::builtin("Int16Array");return j::construct(_callee58598,j::Args{_v_51936_cols.get()});})();V _method58596=this->_literals[130];V _method=j::get(_receiver58595,_method58596);j::Args _params58597=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params58597,_receiver58595);})();
_v_51948_left=([&]()->V{V _receiver58599=([&]()->V{V _callee58602=j::builtin("Int16Array");return j::construct(_callee58602,j::Args{_v_51937_rows.get()});})();V _method58600=this->_literals[130];V _method=j::get(_receiver58599,_method58600);j::Args _params58601=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params58601,_receiver58599);})();
_v_51949_right=([&]()->V{V _receiver58603=([&]()->V{V _callee58606=j::builtin("Int16Array");return j::construct(_callee58606,j::Args{_v_51937_rows.get()});})();V _method58604=this->_literals[130];V _method=j::get(_receiver58603,_method58604);j::Args _params58605=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params58605,_receiver58603);})();
{V _v_51950_y;
_v_51950_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs58607=_v_51950_y;V _rhs58608=_v_51937_rows.get();return j::binary("<",_lhs58607,_rhs58608);})());(void)(j::increment(_v_51950_y,1,false))){{V _v_51951_x;
_v_51951_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs58609=_v_51951_x;V _rhs58610=_v_51936_cols.get();return j::binary("<",_lhs58609,_rhs58610);})());(void)(j::increment(_v_51951_x,1,false))){
V _v_51952_i;
_v_51952_i=([&]()->V{V _lhs58611=([&]()->V{V _lhs58613=_v_51950_y;V _rhs58614=_v_51936_cols.get();return V(j::number(_lhs58613)*j::number(_rhs58614));})();V _rhs58612=_v_51951_x;return j::binary("+",_lhs58611,_rhs58612);})();
if(j::truth(([&]()->V{V _lhs58615=j::get(_v_51935_cover.get(),_v_51952_i);V _rhs58616=V(0.5);return j::binary("<",_lhs58615,_rhs58616);})())){continue;
}
(void)(([&]()->V{V _base58618=_v_51940_inside;V _key58619=_v_51952_i;V _assign58617=V(1.0);return j::put(_base58618,_key58619,_assign58617);})());
(void)(([&]()->V{V _receiver58620=_v_51941_list.get();V _method58621=this->_literals[25];V _method=j::get(_receiver58620,_method58621);j::Args _params58622=j::Args{_v_51952_i};return j::call(_method,_params58622,_receiver58620);})());
(void)((_v_51942_x0=([&]()->V{V _receiver58626=j::builtin("Math");V _method58627=this->_literals[116];V _method=j::get(_receiver58626,_method58627);j::Args _params58628=j::Args{_v_51942_x0,_v_51951_x};return j::call(_method,_params58628,_receiver58626);})()));
(void)((_v_51944_x1=([&]()->V{V _receiver58634=j::builtin("Math");V _method58635=this->_literals[66];V _method=j::get(_receiver58634,_method58635);j::Args _params58636=j::Args{_v_51944_x1,([&]()->V{V _lhs58630=_v_51951_x;V _rhs58631=V(1.0);return j::binary("+",_lhs58630,_rhs58631);})()};return j::call(_method,_params58636,_receiver58634);})()));
(void)((_v_51943_y0=([&]()->V{V _receiver58640=j::builtin("Math");V _method58641=this->_literals[116];V _method=j::get(_receiver58640,_method58641);j::Args _params58642=j::Args{_v_51943_y0,_v_51950_y};return j::call(_method,_params58642,_receiver58640);})()));
(void)((_v_51945_y1=([&]()->V{V _receiver58648=j::builtin("Math");V _method58649=this->_literals[66];V _method=j::get(_receiver58648,_method58649);j::Args _params58650=j::Args{_v_51945_y1,([&]()->V{V _lhs58644=_v_51950_y;V _rhs58645=V(1.0);return j::binary("+",_lhs58644,_rhs58645);})()};return j::call(_method,_params58650,_receiver58648);})()));
if(j::truth(([&]()->V{V _lhs58651=j::get(_v_51946_top,_v_51951_x);V _rhs58652=V(0.0);return j::binary("<",_lhs58651,_rhs58652);})())){(void)(([&]()->V{V _base58654=_v_51946_top;V _key58655=_v_51951_x;V _assign58653=_v_51950_y;return j::put(_base58654,_key58655,_assign58653);})());
}
(void)(([&]()->V{V _base58657=_v_51947_bottom;V _key58658=_v_51951_x;V _assign58656=_v_51950_y;return j::put(_base58657,_key58658,_assign58656);})());
if(j::truth(([&]()->V{V _lhs58659=j::get(_v_51948_left,_v_51950_y);V _rhs58660=V(0.0);return j::binary("<",_lhs58659,_rhs58660);})())){(void)(([&]()->V{V _base58662=_v_51948_left;V _key58663=_v_51950_y;V _assign58661=_v_51951_x;return j::put(_base58662,_key58663,_assign58661);})());
}
(void)(([&]()->V{V _base58665=_v_51949_right;V _key58666=_v_51950_y;V _assign58664=_v_51951_x;return j::put(_base58665,_key58666,_assign58664);})());

}
}
}}
_v_51953_cv.get()=j::function([=](const j::Args &_args_fn51954,const V &_receiver_fn51954,const V &_self_fn51954) mutable ->V{
V _v_51955_x;
V _v_51956_y;
_v_51955_x=_args_fn51954[0];
_v_51956_y=_args_fn51954[1];
return (j::truth(([&]()->V{V _logical58667=([&]()->V{V _logical58668=([&]()->V{V _logical58669=([&]()->V{V _lhs58670=_v_51955_x;V _rhs58671=V(0.0);return j::binary("<",_lhs58670,_rhs58671);})();return !j::truth(_logical58669)?([&]()->V{V _lhs58672=_v_51956_y;V _rhs58673=V(0.0);return j::binary("<",_lhs58672,_rhs58673);})():_logical58669;})();return !j::truth(_logical58668)?([&]()->V{V _lhs58674=_v_51955_x;V _rhs58675=_v_51936_cols.get();return j::binary(">=",_lhs58674,_rhs58675);})():_logical58668;})();return !j::truth(_logical58667)?([&]()->V{V _lhs58676=_v_51956_y;V _rhs58677=_v_51937_rows.get();return j::binary(">=",_lhs58676,_rhs58677);})():_logical58667;})())?V(0.0):j::get(_v_51935_cover.get(),([&]()->V{V _lhs58678=([&]()->V{V _lhs58680=_v_51956_y;V _rhs58681=_v_51936_cols.get();return V(j::number(_lhs58680)*j::number(_rhs58681));})();V _rhs58679=_v_51955_x;return j::binary("+",_lhs58678,_rhs58679);})()));
return V{};
},2);
_v_51957_isIn.get()=j::function([=](const j::Args &_args_fn51958,const V &_receiver_fn51958,const V &_self_fn51958) mutable ->V{
V _v_51959_x;
V _v_51960_y;
_v_51959_x=_args_fn51958[0];
_v_51960_y=_args_fn51958[1];
return (j::truth(([&]()->V{V _lhs58682=([&]()->V{V _callee58684=_v_51953_cv.get();return j::call(_callee58684,j::Args{_v_51959_x,_v_51960_y});})();V _rhs58683=V(0.5);return j::binary(">=",_lhs58682,_rhs58683);})())?V(1.0):V(0.0));
return V{};
},2);
_v_51961_border.get()=([&]()->V{V _callee58685=j::builtin("Uint8Array");return j::construct(_callee58685,j::Args{_v_51939_n.get()});})();
_v_51962_nx=([&]()->V{V _callee58686=j::builtin("Float32Array");return j::construct(_callee58686,j::Args{_v_51939_n.get()});})();
_v_51963_ny=([&]()->V{V _callee58687=j::builtin("Float32Array");return j::construct(_callee58687,j::Args{_v_51939_n.get()});})();
{for(const auto &_item58688:j::elements(_v_51941_list.get())){V _v_51964_i;
_v_51964_i=_item58688;
{
V _v_51965_x;
V _v_51966_y;
V _v_51967_gx;
V _v_51968_gy;
V _v_51969_l;
_v_51965_x=([&]()->V{V _lhs58689=_v_51964_i;V _rhs58690=_v_51936_cols.get();return V(std::fmod(j::number(_lhs58689),j::number(_rhs58690)));})();
_v_51966_y=([&]()->V{V _lhs58691=([&]()->V{V _lhs58693=_v_51964_i;V _rhs58694=_v_51965_x;return V(j::number(_lhs58693)-j::number(_rhs58694));})();V _rhs58692=_v_51936_cols.get();return V(j::number(_lhs58691)/j::number(_rhs58692));})();
if(j::truth(([&]()->V{V _logical58695=([&]()->V{V _logical58696=([&]()->V{V _logical58697=([&]()->V{V _callee58700=_v_51957_isIn.get();return j::call(_callee58700,j::Args{([&]()->V{V _lhs58698=_v_51965_x;V _rhs58699=V(1.0);return V(j::number(_lhs58698)-j::number(_rhs58699));})(),_v_51966_y});})();return j::truth(_logical58697)?([&]()->V{V _callee58703=_v_51957_isIn.get();return j::call(_callee58703,j::Args{([&]()->V{V _lhs58701=_v_51965_x;V _rhs58702=V(1.0);return j::binary("+",_lhs58701,_rhs58702);})(),_v_51966_y});})():_logical58697;})();return j::truth(_logical58696)?([&]()->V{V _callee58706=_v_51957_isIn.get();return j::call(_callee58706,j::Args{_v_51965_x,([&]()->V{V _lhs58704=_v_51966_y;V _rhs58705=V(1.0);return V(j::number(_lhs58704)-j::number(_rhs58705));})()});})():_logical58696;})();return j::truth(_logical58695)?([&]()->V{V _callee58709=_v_51957_isIn.get();return j::call(_callee58709,j::Args{_v_51965_x,([&]()->V{V _lhs58707=_v_51966_y;V _rhs58708=V(1.0);return j::binary("+",_lhs58707,_rhs58708);})()});})():_logical58695;})())){continue;
}
(void)(([&]()->V{V _base58711=_v_51961_border.get();V _key58712=_v_51964_i;V _assign58710=V(1.0);return j::put(_base58711,_key58712,_assign58710);})());
_v_51967_gx=([&]()->V{V _lhs58713=([&]()->V{V _lhs58715=([&]()->V{V _lhs58717=([&]()->V{V _lhs58719=([&]()->V{V _lhs58721=([&]()->V{V _callee58727=_v_51953_cv.get();return j::call(_callee58727,j::Args{([&]()->V{V _lhs58723=_v_51965_x;V _rhs58724=V(1.0);return j::binary("+",_lhs58723,_rhs58724);})(),([&]()->V{V _lhs58725=_v_51966_y;V _rhs58726=V(1.0);return V(j::number(_lhs58725)-j::number(_rhs58726));})()});})();V _rhs58722=([&]()->V{V _lhs58728=V(2.0);V _rhs58729=([&]()->V{V _callee58732=_v_51953_cv.get();return j::call(_callee58732,j::Args{([&]()->V{V _lhs58730=_v_51965_x;V _rhs58731=V(1.0);return j::binary("+",_lhs58730,_rhs58731);})(),_v_51966_y});})();return V(j::number(_lhs58728)*j::number(_rhs58729));})();return j::binary("+",_lhs58721,_rhs58722);})();V _rhs58720=([&]()->V{V _callee58737=_v_51953_cv.get();return j::call(_callee58737,j::Args{([&]()->V{V _lhs58733=_v_51965_x;V _rhs58734=V(1.0);return j::binary("+",_lhs58733,_rhs58734);})(),([&]()->V{V _lhs58735=_v_51966_y;V _rhs58736=V(1.0);return j::binary("+",_lhs58735,_rhs58736);})()});})();return j::binary("+",_lhs58719,_rhs58720);})();V _rhs58718=([&]()->V{V _callee58742=_v_51953_cv.get();return j::call(_callee58742,j::Args{([&]()->V{V _lhs58738=_v_51965_x;V _rhs58739=V(1.0);return V(j::number(_lhs58738)-j::number(_rhs58739));})(),([&]()->V{V _lhs58740=_v_51966_y;V _rhs58741=V(1.0);return V(j::number(_lhs58740)-j::number(_rhs58741));})()});})();return V(j::number(_lhs58717)-j::number(_rhs58718));})();V _rhs58716=([&]()->V{V _lhs58743=V(2.0);V _rhs58744=([&]()->V{V _callee58747=_v_51953_cv.get();return j::call(_callee58747,j::Args{([&]()->V{V _lhs58745=_v_51965_x;V _rhs58746=V(1.0);return V(j::number(_lhs58745)-j::number(_rhs58746));})(),_v_51966_y});})();return V(j::number(_lhs58743)*j::number(_rhs58744));})();return V(j::number(_lhs58715)-j::number(_rhs58716));})();V _rhs58714=([&]()->V{V _callee58752=_v_51953_cv.get();return j::call(_callee58752,j::Args{([&]()->V{V _lhs58748=_v_51965_x;V _rhs58749=V(1.0);return V(j::number(_lhs58748)-j::number(_rhs58749));})(),([&]()->V{V _lhs58750=_v_51966_y;V _rhs58751=V(1.0);return j::binary("+",_lhs58750,_rhs58751);})()});})();return V(j::number(_lhs58713)-j::number(_rhs58714));})();
_v_51968_gy=([&]()->V{V _lhs58753=([&]()->V{V _lhs58755=([&]()->V{V _lhs58757=([&]()->V{V _lhs58759=([&]()->V{V _lhs58761=([&]()->V{V _lhs58763=([&]()->V{V _callee58769=_v_51953_cv.get();return j::call(_callee58769,j::Args{([&]()->V{V _lhs58765=_v_51965_x;V _rhs58766=V(1.0);return V(j::number(_lhs58765)-j::number(_rhs58766));})(),([&]()->V{V _lhs58767=_v_51966_y;V _rhs58768=V(1.0);return j::binary("+",_lhs58767,_rhs58768);})()});})();V _rhs58764=([&]()->V{V _lhs58770=V(2.0);V _rhs58771=([&]()->V{V _callee58774=_v_51953_cv.get();return j::call(_callee58774,j::Args{_v_51965_x,([&]()->V{V _lhs58772=_v_51966_y;V _rhs58773=V(1.0);return j::binary("+",_lhs58772,_rhs58773);})()});})();return V(j::number(_lhs58770)*j::number(_rhs58771));})();return j::binary("+",_lhs58763,_rhs58764);})();V _rhs58762=([&]()->V{V _callee58779=_v_51953_cv.get();return j::call(_callee58779,j::Args{([&]()->V{V _lhs58775=_v_51965_x;V _rhs58776=V(1.0);return j::binary("+",_lhs58775,_rhs58776);})(),([&]()->V{V _lhs58777=_v_51966_y;V _rhs58778=V(1.0);return j::binary("+",_lhs58777,_rhs58778);})()});})();return j::binary("+",_lhs58761,_rhs58762);})();V _rhs58760=([&]()->V{V _callee58784=_v_51953_cv.get();return j::call(_callee58784,j::Args{([&]()->V{V _lhs58780=_v_51965_x;V _rhs58781=V(1.0);return V(j::number(_lhs58780)-j::number(_rhs58781));})(),([&]()->V{V _lhs58782=_v_51966_y;V _rhs58783=V(1.0);return V(j::number(_lhs58782)-j::number(_rhs58783));})()});})();return V(j::number(_lhs58759)-j::number(_rhs58760));})();V _rhs58758=([&]()->V{V _lhs58785=V(2.0);V _rhs58786=([&]()->V{V _callee58789=_v_51953_cv.get();return j::call(_callee58789,j::Args{_v_51965_x,([&]()->V{V _lhs58787=_v_51966_y;V _rhs58788=V(1.0);return V(j::number(_lhs58787)-j::number(_rhs58788));})()});})();return V(j::number(_lhs58785)*j::number(_rhs58786));})();return V(j::number(_lhs58757)-j::number(_rhs58758));})();V _rhs58756=([&]()->V{V _callee58794=_v_51953_cv.get();return j::call(_callee58794,j::Args{([&]()->V{V _lhs58790=_v_51965_x;V _rhs58791=V(1.0);return j::binary("+",_lhs58790,_rhs58791);})(),([&]()->V{V _lhs58792=_v_51966_y;V _rhs58793=V(1.0);return V(j::number(_lhs58792)-j::number(_rhs58793));})()});})();return V(j::number(_lhs58755)-j::number(_rhs58756));})();V _rhs58754=_v_51938_aspect;return V(j::number(_lhs58753)/j::number(_rhs58754));})();
if(j::truth(([&]()->V{V _lhs58795=([&]()->V{V _lhs58797=([&]()->V{V _number58799=_v_51967_gx;return V(std::fabs(j::number(_number58799)));})();V _rhs58798=([&]()->V{V _number58800=_v_51968_gy;return V(std::fabs(j::number(_number58800)));})();return j::binary("+",_lhs58797,_rhs58798);})();V _rhs58796=V(0.000001);return j::binary("<",_lhs58795,_rhs58796);})())){
(void)((_v_51967_gx=([&]()->V{V _lhs58802=([&]()->V{V _callee58806=_v_51957_isIn.get();return j::call(_callee58806,j::Args{([&]()->V{V _lhs58804=_v_51965_x;V _rhs58805=V(1.0);return j::binary("+",_lhs58804,_rhs58805);})(),_v_51966_y});})();V _rhs58803=([&]()->V{V _callee58809=_v_51957_isIn.get();return j::call(_callee58809,j::Args{([&]()->V{V _lhs58807=_v_51965_x;V _rhs58808=V(1.0);return V(j::number(_lhs58807)-j::number(_rhs58808));})(),_v_51966_y});})();return V(j::number(_lhs58802)-j::number(_rhs58803));})()));
(void)((_v_51968_gy=([&]()->V{V _lhs58811=([&]()->V{V _lhs58813=([&]()->V{V _callee58817=_v_51957_isIn.get();return j::call(_callee58817,j::Args{_v_51965_x,([&]()->V{V _lhs58815=_v_51966_y;V _rhs58816=V(1.0);return j::binary("+",_lhs58815,_rhs58816);})()});})();V _rhs58814=([&]()->V{V _callee58820=_v_51957_isIn.get();return j::call(_callee58820,j::Args{_v_51965_x,([&]()->V{V _lhs58818=_v_51966_y;V _rhs58819=V(1.0);return V(j::number(_lhs58818)-j::number(_rhs58819));})()});})();return V(j::number(_lhs58813)-j::number(_rhs58814));})();V _rhs58812=_v_51938_aspect;return V(j::number(_lhs58811)/j::number(_rhs58812));})()));

}

_v_51969_l=([&]()->V{V _logical58821=([&]()->V{V _number58822=_v_51967_gx;V _number58823=_v_51968_gy;return V(std::hypot(j::number(_number58822),j::number(_number58823)));})();return !j::truth(_logical58821)?V(1.0):_logical58821;})();
(void)(([&]()->V{V _base58825=_v_51962_nx;V _key58826=_v_51964_i;V _assign58824=([&]()->V{V _lhs58827=_v_51967_gx;V _rhs58828=_v_51969_l;return V(j::number(_lhs58827)/j::number(_rhs58828));})();return j::put(_base58825,_key58826,_assign58824);})());
(void)(([&]()->V{V _base58830=_v_51963_ny;V _key58831=_v_51964_i;V _assign58829=([&]()->V{V _lhs58832=_v_51968_gy;V _rhs58833=_v_51969_l;return V(j::number(_lhs58832)/j::number(_rhs58833));})();return j::put(_base58830,_key58831,_assign58829);})());

}
}}
_v_51970_depth.get()=([&]()->V{V _callee58834=j::builtin("Float32Array");return j::construct(_callee58834,j::Args{_v_51939_n.get()});})();
_v_51971_D=([&]()->V{V _number58835=V(1.0);V _number58836=_v_51938_aspect;return V(std::hypot(j::number(_number58835),j::number(_number58836)));})();
_v_51972_far=([&]()->V{V _lhs58837=V(4.0);V _rhs58838=([&]()->V{V _lhs58839=_v_51936_cols.get();V _rhs58840=([&]()->V{V _lhs58841=_v_51937_rows.get();V _rhs58842=_v_51938_aspect;return V(j::number(_lhs58841)*j::number(_rhs58842));})();return j::binary("+",_lhs58839,_rhs58840);})();return V(j::number(_lhs58837)*j::number(_rhs58838));})();
{for(const auto &_item58843:j::elements(_v_51941_list.get())){V _v_51973_i;
_v_51973_i=_item58843;
(void)(([&]()->V{V _base58845=_v_51970_depth.get();V _key58846=_v_51973_i;V _assign58844=_v_51972_far;return j::put(_base58845,_key58846,_assign58844);})());
}}
_v_51974_d=j::function([=](const j::Args &_args_fn51975,const V &_receiver_fn51975,const V &_self_fn51975) mutable ->V{
V _v_51976_x;
V _v_51977_y;
V _v_51978_w;
_v_51976_x=_args_fn51975[0];
_v_51977_y=_args_fn51975[1];
_v_51978_w=_args_fn51975[2];
return ([&]()->V{V _lhs58847=(j::truth(([&]()->V{V _logical58849=([&]()->V{V _logical58850=([&]()->V{V _logical58851=([&]()->V{V _lhs58852=_v_51976_x;V _rhs58853=V(0.0);return j::binary("<",_lhs58852,_rhs58853);})();return !j::truth(_logical58851)?([&]()->V{V _lhs58854=_v_51976_x;V _rhs58855=_v_51936_cols.get();return j::binary(">=",_lhs58854,_rhs58855);})():_logical58851;})();return !j::truth(_logical58850)?([&]()->V{V _lhs58856=_v_51977_y;V _rhs58857=V(0.0);return j::binary("<",_lhs58856,_rhs58857);})():_logical58850;})();return !j::truth(_logical58849)?([&]()->V{V _lhs58858=_v_51977_y;V _rhs58859=_v_51937_rows.get();return j::binary(">=",_lhs58858,_rhs58859);})():_logical58849;})())?V(0.0):j::get(_v_51970_depth.get(),([&]()->V{V _lhs58860=([&]()->V{V _lhs58862=_v_51977_y;V _rhs58863=_v_51936_cols.get();return V(j::number(_lhs58862)*j::number(_rhs58863));})();V _rhs58861=_v_51976_x;return j::binary("+",_lhs58860,_rhs58861);})()));V _rhs58848=_v_51978_w;return j::binary("+",_lhs58847,_rhs58848);})();
return V{};
},3);
{V _v_51979_y;
_v_51979_y=_v_51943_y0;
for(;j::truth(([&]()->V{V _lhs58864=_v_51979_y;V _rhs58865=_v_51945_y1;return j::binary("<",_lhs58864,_rhs58865);})());(void)(j::increment(_v_51979_y,1,false))){{V _v_51980_x;
_v_51980_x=_v_51942_x0;
for(;j::truth(([&]()->V{V _lhs58866=_v_51980_x;V _rhs58867=_v_51944_x1;return j::binary("<",_lhs58866,_rhs58867);})());(void)(j::increment(_v_51980_x,1,false))){
V _v_51981_i;
_v_51981_i=([&]()->V{V _lhs58868=([&]()->V{V _lhs58870=_v_51979_y;V _rhs58871=_v_51936_cols.get();return V(j::number(_lhs58870)*j::number(_rhs58871));})();V _rhs58869=_v_51980_x;return j::binary("+",_lhs58868,_rhs58869);})();
if(j::truth(j::get(_v_51940_inside,_v_51981_i))){(void)(([&]()->V{V _base58873=_v_51970_depth.get();V _key58874=_v_51981_i;V _assign58872=([&]()->V{V _receiver58896=j::builtin("Math");V _method58897=this->_literals[116];V _method=j::get(_receiver58896,_method58897);j::Args _params58898=j::Args{j::get(_v_51970_depth.get(),_v_51981_i),([&]()->V{V _callee58877=_v_51974_d;return j::call(_callee58877,j::Args{([&]()->V{V _lhs58875=_v_51980_x;V _rhs58876=V(1.0);return V(j::number(_lhs58875)-j::number(_rhs58876));})(),_v_51979_y,V(1.0)});})(),([&]()->V{V _callee58880=_v_51974_d;return j::call(_callee58880,j::Args{_v_51980_x,([&]()->V{V _lhs58878=_v_51979_y;V _rhs58879=V(1.0);return V(j::number(_lhs58878)-j::number(_rhs58879));})(),_v_51938_aspect});})(),([&]()->V{V _callee58885=_v_51974_d;return j::call(_callee58885,j::Args{([&]()->V{V _lhs58881=_v_51980_x;V _rhs58882=V(1.0);return V(j::number(_lhs58881)-j::number(_rhs58882));})(),([&]()->V{V _lhs58883=_v_51979_y;V _rhs58884=V(1.0);return V(j::number(_lhs58883)-j::number(_rhs58884));})(),_v_51971_D});})(),([&]()->V{V _callee58890=_v_51974_d;return j::call(_callee58890,j::Args{([&]()->V{V _lhs58886=_v_51980_x;V _rhs58887=V(1.0);return j::binary("+",_lhs58886,_rhs58887);})(),([&]()->V{V _lhs58888=_v_51979_y;V _rhs58889=V(1.0);return V(j::number(_lhs58888)-j::number(_rhs58889));})(),_v_51971_D});})()};return j::call(_method,_params58898,_receiver58896);})();return j::put(_base58873,_key58874,_assign58872);})());
}

}
}
}}
{V _v_51982_y;
_v_51982_y=([&]()->V{V _lhs58899=_v_51945_y1;V _rhs58900=V(1.0);return V(j::number(_lhs58899)-j::number(_rhs58900));})();
for(;j::truth(([&]()->V{V _lhs58901=_v_51982_y;V _rhs58902=_v_51943_y0;return j::binary(">=",_lhs58901,_rhs58902);})());(void)(j::increment(_v_51982_y,-1,false))){{V _v_51983_x;
_v_51983_x=([&]()->V{V _lhs58903=_v_51944_x1;V _rhs58904=V(1.0);return V(j::number(_lhs58903)-j::number(_rhs58904));})();
for(;j::truth(([&]()->V{V _lhs58905=_v_51983_x;V _rhs58906=_v_51942_x0;return j::binary(">=",_lhs58905,_rhs58906);})());(void)(j::increment(_v_51983_x,-1,false))){
V _v_51984_i;
_v_51984_i=([&]()->V{V _lhs58907=([&]()->V{V _lhs58909=_v_51982_y;V _rhs58910=_v_51936_cols.get();return V(j::number(_lhs58909)*j::number(_rhs58910));})();V _rhs58908=_v_51983_x;return j::binary("+",_lhs58907,_rhs58908);})();
if(j::truth(j::get(_v_51940_inside,_v_51984_i))){(void)(([&]()->V{V _base58912=_v_51970_depth.get();V _key58913=_v_51984_i;V _assign58911=([&]()->V{V _receiver58935=j::builtin("Math");V _method58936=this->_literals[116];V _method=j::get(_receiver58935,_method58936);j::Args _params58937=j::Args{j::get(_v_51970_depth.get(),_v_51984_i),([&]()->V{V _callee58916=_v_51974_d;return j::call(_callee58916,j::Args{([&]()->V{V _lhs58914=_v_51983_x;V _rhs58915=V(1.0);return j::binary("+",_lhs58914,_rhs58915);})(),_v_51982_y,V(1.0)});})(),([&]()->V{V _callee58919=_v_51974_d;return j::call(_callee58919,j::Args{_v_51983_x,([&]()->V{V _lhs58917=_v_51982_y;V _rhs58918=V(1.0);return j::binary("+",_lhs58917,_rhs58918);})(),_v_51938_aspect});})(),([&]()->V{V _callee58924=_v_51974_d;return j::call(_callee58924,j::Args{([&]()->V{V _lhs58920=_v_51983_x;V _rhs58921=V(1.0);return j::binary("+",_lhs58920,_rhs58921);})(),([&]()->V{V _lhs58922=_v_51982_y;V _rhs58923=V(1.0);return j::binary("+",_lhs58922,_rhs58923);})(),_v_51971_D});})(),([&]()->V{V _callee58929=_v_51974_d;return j::call(_callee58929,j::Args{([&]()->V{V _lhs58925=_v_51983_x;V _rhs58926=V(1.0);return V(j::number(_lhs58925)-j::number(_rhs58926));})(),([&]()->V{V _lhs58927=_v_51982_y;V _rhs58928=V(1.0);return j::binary("+",_lhs58927,_rhs58928);})(),_v_51971_D});})()};return j::call(_method,_params58937,_receiver58935);})();return j::put(_base58912,_key58913,_assign58911);})());
}

}
}
}}
_v_51985_maxDepth=V(0.0);
{for(const auto &_item58938:j::elements(_v_51941_list.get())){V _v_51986_i;
_v_51986_i=_item58938;
{
(void)(([&]()->V{V _base58940=_v_51970_depth.get();V _key58941=_v_51986_i;V _assign58939=(j::truth(j::get(_v_51961_border.get(),_v_51986_i))?V(0.0):([&]()->V{V _receiver58946=j::builtin("Math");V _method58947=this->_literals[66];V _method=j::get(_receiver58946,_method58947);j::Args _params58948=j::Args{V(0.0),([&]()->V{V _lhs58942=j::get(_v_51970_depth.get(),_v_51986_i);V _rhs58943=V(1.0);return V(j::number(_lhs58942)-j::number(_rhs58943));})()};return j::call(_method,_params58948,_receiver58946);})());return j::put(_base58940,_key58941,_assign58939);})());
(void)((_v_51985_maxDepth=([&]()->V{V _receiver58952=j::builtin("Math");V _method58953=this->_literals[66];V _method=j::get(_receiver58952,_method58953);j::Args _params58954=j::Args{_v_51985_maxDepth,j::get(_v_51970_depth.get(),_v_51986_i)};return j::call(_method,_params58954,_receiver58952);})()));

}
}}
_v_51987_fringe.get()=([&]()->V{V _callee58955=j::builtin("Uint8Array");return j::construct(_callee58955,j::Args{_v_51939_n.get()});})();
{V _v_51988_y;
_v_51988_y=([&]()->V{V _receiver58960=j::builtin("Math");V _method58961=this->_literals[66];V _method=j::get(_receiver58960,_method58961);j::Args _params58962=j::Args{V(0.0),([&]()->V{V _lhs58956=_v_51943_y0;V _rhs58957=V(1.0);return V(j::number(_lhs58956)-j::number(_rhs58957));})()};return j::call(_method,_params58962,_receiver58960);})();
for(;j::truth(([&]()->V{V _lhs58963=_v_51988_y;V _rhs58964=([&]()->V{V _receiver58969=j::builtin("Math");V _method58970=this->_literals[116];V _method=j::get(_receiver58969,_method58970);j::Args _params58971=j::Args{_v_51937_rows.get(),([&]()->V{V _lhs58965=_v_51945_y1;V _rhs58966=V(1.0);return j::binary("+",_lhs58965,_rhs58966);})()};return j::call(_method,_params58971,_receiver58969);})();return j::binary("<",_lhs58963,_rhs58964);})());(void)(j::increment(_v_51988_y,1,false))){{V _v_51989_x;
_v_51989_x=([&]()->V{V _receiver58976=j::builtin("Math");V _method58977=this->_literals[66];V _method=j::get(_receiver58976,_method58977);j::Args _params58978=j::Args{V(0.0),([&]()->V{V _lhs58972=_v_51942_x0;V _rhs58973=V(1.0);return V(j::number(_lhs58972)-j::number(_rhs58973));})()};return j::call(_method,_params58978,_receiver58976);})();
for(;j::truth(([&]()->V{V _lhs58979=_v_51989_x;V _rhs58980=([&]()->V{V _receiver58985=j::builtin("Math");V _method58986=this->_literals[116];V _method=j::get(_receiver58985,_method58986);j::Args _params58987=j::Args{_v_51936_cols.get(),([&]()->V{V _lhs58981=_v_51944_x1;V _rhs58982=V(1.0);return j::binary("+",_lhs58981,_rhs58982);})()};return j::call(_method,_params58987,_receiver58985);})();return j::binary("<",_lhs58979,_rhs58980);})());(void)(j::increment(_v_51989_x,1,false))){
V _v_51990_i;
V _v_51991_gx;
V _v_51992_gy;
_v_51990_i=([&]()->V{V _lhs58988=([&]()->V{V _lhs58990=_v_51988_y;V _rhs58991=_v_51936_cols.get();return V(j::number(_lhs58990)*j::number(_rhs58991));})();V _rhs58989=_v_51989_x;return j::binary("+",_lhs58988,_rhs58989);})();
if(j::truth(([&]()->V{V _logical58992=([&]()->V{V _logical58993=([&]()->V{V _logical58994=j::get(_v_51940_inside,_v_51990_i);return !j::truth(_logical58994)?([&]()->V{V _lhs58995=j::get(_v_51935_cover.get(),_v_51990_i);V _rhs58996=V(0.12);return j::binary("<",_lhs58995,_rhs58996);})():_logical58994;})();return !j::truth(_logical58993)?([&]()->V{V _lhs58997=([&]()->V{V _callee59001=_v_51957_isIn.get();return j::call(_callee59001,j::Args{_v_51989_x,([&]()->V{V _lhs58999=_v_51988_y;V _rhs59000=V(1.0);return j::binary("+",_lhs58999,_rhs59000);})()});})();V _rhs58998=([&]()->V{V _callee59004=_v_51957_isIn.get();return j::call(_callee59004,j::Args{_v_51989_x,([&]()->V{V _lhs59002=_v_51988_y;V _rhs59003=V(1.0);return V(j::number(_lhs59002)-j::number(_rhs59003));})()});})();return V(j::equal(_lhs58997,_rhs58998,true));})():_logical58993;})();return !j::truth(_logical58992)?([&]()->V{V _lhs59005=([&]()->V{V _number59015=([&]()->V{V _lhs59016=([&]()->V{V _callee59020=_v_51953_cv.get();return j::call(_callee59020,j::Args{([&]()->V{V _lhs59018=_v_51989_x;V _rhs59019=V(1.0);return V(j::number(_lhs59018)-j::number(_rhs59019));})(),_v_51988_y});})();V _rhs59017=([&]()->V{V _callee59023=_v_51953_cv.get();return j::call(_callee59023,j::Args{([&]()->V{V _lhs59021=_v_51989_x;V _rhs59022=V(1.0);return j::binary("+",_lhs59021,_rhs59022);})(),_v_51988_y});})();return V(j::number(_lhs59016)-j::number(_rhs59017));})();return V(std::fabs(j::number(_number59015)));})();V _rhs59006=V(0.08);return j::binary("<",_lhs59005,_rhs59006);})():_logical58992;})())){continue;
}
_v_51991_gx=([&]()->V{V _lhs59024=([&]()->V{V _lhs59026=([&]()->V{V _lhs59028=([&]()->V{V _lhs59030=([&]()->V{V _lhs59032=([&]()->V{V _callee59038=_v_51953_cv.get();return j::call(_callee59038,j::Args{([&]()->V{V _lhs59034=_v_51989_x;V _rhs59035=V(1.0);return j::binary("+",_lhs59034,_rhs59035);})(),([&]()->V{V _lhs59036=_v_51988_y;V _rhs59037=V(1.0);return V(j::number(_lhs59036)-j::number(_rhs59037));})()});})();V _rhs59033=([&]()->V{V _lhs59039=V(2.0);V _rhs59040=([&]()->V{V _callee59043=_v_51953_cv.get();return j::call(_callee59043,j::Args{([&]()->V{V _lhs59041=_v_51989_x;V _rhs59042=V(1.0);return j::binary("+",_lhs59041,_rhs59042);})(),_v_51988_y});})();return V(j::number(_lhs59039)*j::number(_rhs59040));})();return j::binary("+",_lhs59032,_rhs59033);})();V _rhs59031=([&]()->V{V _callee59048=_v_51953_cv.get();return j::call(_callee59048,j::Args{([&]()->V{V _lhs59044=_v_51989_x;V _rhs59045=V(1.0);return j::binary("+",_lhs59044,_rhs59045);})(),([&]()->V{V _lhs59046=_v_51988_y;V _rhs59047=V(1.0);return j::binary("+",_lhs59046,_rhs59047);})()});})();return j::binary("+",_lhs59030,_rhs59031);})();V _rhs59029=([&]()->V{V _callee59053=_v_51953_cv.get();return j::call(_callee59053,j::Args{([&]()->V{V _lhs59049=_v_51989_x;V _rhs59050=V(1.0);return V(j::number(_lhs59049)-j::number(_rhs59050));})(),([&]()->V{V _lhs59051=_v_51988_y;V _rhs59052=V(1.0);return V(j::number(_lhs59051)-j::number(_rhs59052));})()});})();return V(j::number(_lhs59028)-j::number(_rhs59029));})();V _rhs59027=([&]()->V{V _lhs59054=V(2.0);V _rhs59055=([&]()->V{V _callee59058=_v_51953_cv.get();return j::call(_callee59058,j::Args{([&]()->V{V _lhs59056=_v_51989_x;V _rhs59057=V(1.0);return V(j::number(_lhs59056)-j::number(_rhs59057));})(),_v_51988_y});})();return V(j::number(_lhs59054)*j::number(_rhs59055));})();return V(j::number(_lhs59026)-j::number(_rhs59027));})();V _rhs59025=([&]()->V{V _callee59063=_v_51953_cv.get();return j::call(_callee59063,j::Args{([&]()->V{V _lhs59059=_v_51989_x;V _rhs59060=V(1.0);return V(j::number(_lhs59059)-j::number(_rhs59060));})(),([&]()->V{V _lhs59061=_v_51988_y;V _rhs59062=V(1.0);return j::binary("+",_lhs59061,_rhs59062);})()});})();return V(j::number(_lhs59024)-j::number(_rhs59025));})();
_v_51992_gy=([&]()->V{V _lhs59064=([&]()->V{V _lhs59066=([&]()->V{V _lhs59068=([&]()->V{V _lhs59070=([&]()->V{V _lhs59072=([&]()->V{V _callee59078=_v_51953_cv.get();return j::call(_callee59078,j::Args{([&]()->V{V _lhs59074=_v_51989_x;V _rhs59075=V(1.0);return V(j::number(_lhs59074)-j::number(_rhs59075));})(),([&]()->V{V _lhs59076=_v_51988_y;V _rhs59077=V(1.0);return j::binary("+",_lhs59076,_rhs59077);})()});})();V _rhs59073=([&]()->V{V _lhs59079=V(2.0);V _rhs59080=([&]()->V{V _callee59083=_v_51953_cv.get();return j::call(_callee59083,j::Args{_v_51989_x,([&]()->V{V _lhs59081=_v_51988_y;V _rhs59082=V(1.0);return j::binary("+",_lhs59081,_rhs59082);})()});})();return V(j::number(_lhs59079)*j::number(_rhs59080));})();return j::binary("+",_lhs59072,_rhs59073);})();V _rhs59071=([&]()->V{V _callee59088=_v_51953_cv.get();return j::call(_callee59088,j::Args{([&]()->V{V _lhs59084=_v_51989_x;V _rhs59085=V(1.0);return j::binary("+",_lhs59084,_rhs59085);})(),([&]()->V{V _lhs59086=_v_51988_y;V _rhs59087=V(1.0);return j::binary("+",_lhs59086,_rhs59087);})()});})();return j::binary("+",_lhs59070,_rhs59071);})();V _rhs59069=([&]()->V{V _callee59093=_v_51953_cv.get();return j::call(_callee59093,j::Args{([&]()->V{V _lhs59089=_v_51989_x;V _rhs59090=V(1.0);return V(j::number(_lhs59089)-j::number(_rhs59090));})(),([&]()->V{V _lhs59091=_v_51988_y;V _rhs59092=V(1.0);return V(j::number(_lhs59091)-j::number(_rhs59092));})()});})();return V(j::number(_lhs59068)-j::number(_rhs59069));})();V _rhs59067=([&]()->V{V _lhs59094=V(2.0);V _rhs59095=([&]()->V{V _callee59098=_v_51953_cv.get();return j::call(_callee59098,j::Args{_v_51989_x,([&]()->V{V _lhs59096=_v_51988_y;V _rhs59097=V(1.0);return V(j::number(_lhs59096)-j::number(_rhs59097));})()});})();return V(j::number(_lhs59094)*j::number(_rhs59095));})();return V(j::number(_lhs59066)-j::number(_rhs59067));})();V _rhs59065=([&]()->V{V _callee59103=_v_51953_cv.get();return j::call(_callee59103,j::Args{([&]()->V{V _lhs59099=_v_51989_x;V _rhs59100=V(1.0);return j::binary("+",_lhs59099,_rhs59100);})(),([&]()->V{V _lhs59101=_v_51988_y;V _rhs59102=V(1.0);return V(j::number(_lhs59101)-j::number(_rhs59102));})()});})();return V(j::number(_lhs59064)-j::number(_rhs59065));})();
if(j::truth(([&]()->V{V _lhs59104=([&]()->V{V _lhs59106=([&]()->V{V _number59108=_v_51992_gy;return V(std::fabs(j::number(_number59108)));})();V _rhs59107=_v_51938_aspect;return V(j::number(_lhs59106)/j::number(_rhs59107));})();V _rhs59105=([&]()->V{V _number59109=_v_51991_gx;return V(std::fabs(j::number(_number59109)));})();return j::binary(">",_lhs59104,_rhs59105);})())){(void)(([&]()->V{V _base59111=_v_51987_fringe.get();V _key59112=_v_51990_i;V _assign59110=V(1.0);return j::put(_base59111,_key59112,_assign59110);})());
}

}
}
}}
_v_51993_empty=([&]()->V{V _lhs59113=_v_51944_x1;V _rhs59114=_v_51942_x0;return j::binary("<=",_lhs59113,_rhs59114);})();
_v_51994_outlines.get()=([&]()->V{V _callee59115=j::builtin("Map");return j::construct(_callee59115,j::Args{});})();
_v_51995_cells.get()=([&]()->V{V _obj59116=j::object();j::put(_obj59116,this->_literals[251],_v_51936_cols.get());j::put(_obj59116,this->_literals[252],_v_51937_rows.get());j::put(_obj59116,this->_literals[308],([&]()->V{V _receiver59117=j::builtin("Int32Array");V _method59118=this->_literals[113];V _method=j::get(_receiver59117,_method59118);j::Args _params59119=j::Args{_v_51941_list.get()};return j::call(_method,_params59119,_receiver59117);})());j::put(_obj59116,this->_literals[309],_v_51940_inside);j::put(_obj59116,this->_literals[286],_v_51935_cover.get());j::put(_obj59116,this->_literals[310],_v_51961_border.get());j::put(_obj59116,this->_literals[311],_v_51987_fringe.get());j::put(_obj59116,this->_literals[30],j::function([=](const j::Args &_args_fn51996,const V &_receiver_fn51996,const V &_self_fn51996) mutable ->V{
V _v_51997_x;
V _v_51998_y;
_v_51997_x=_args_fn51996[0];
_v_51998_y=_args_fn51996[1];
return ([&]()->V{V _lhs59120=([&]()->V{V _callee59124=_v_51957_isIn.get();return j::call(_callee59124,j::Args{([&]()->V{V _number59122=_v_51997_x;return V(std::floor(j::number(_number59122)));})(),([&]()->V{V _number59123=_v_51998_y;return V(std::floor(j::number(_number59123)));})()});})();V _rhs59121=V(1.0);return V(j::equal(_lhs59120,_rhs59121,true));})();
return V{};
},2));j::put(_obj59116,this->_literals[256],j::function([=](const j::Args &_args_fn51999,const V &_receiver_fn51999,const V &_self_fn51999) mutable ->V{
j::Cell _v_52000_style;
V _default59125=_args_fn51999[0];if(_default59125.kind==V::Undefined||_default59125.kind==V::Hole)_default59125=this->_literals[94];
_v_52000_style.get()=_default59125;
{
V _v_52001_o;
_v_52001_o=([&]()->V{V _receiver59126=_v_51994_outlines.get();V _method59127=this->_literals[54];V _method=j::get(_receiver59126,_method59127);j::Args _params59128=j::Args{_v_52000_style.get()};return j::call(_method,_params59128,_receiver59126);})();
if(j::truth(j::unary("!",_v_52001_o))){
V _v_52002_at;
_v_52002_at=([&]()->V{j::Args _array59129;return j::array(std::move(_array59129));})();
{for(const auto &_item59130:j::elements(_v_51941_list.get())){V _v_52003_i;
_v_52003_i=_item59130;
if(j::truth(j::get(_v_51961_border.get(),_v_52003_i))){(void)(([&]()->V{V _receiver59131=_v_52002_at;V _method59132=this->_literals[25];V _method=j::get(_receiver59131,_method59132);j::Args _params59133=j::Args{_v_52003_i};return j::call(_method,_params59133,_receiver59131);})());
}
}}
{V _v_52004_i;
_v_52004_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs59134=_v_52004_i;V _rhs59135=_v_51939_n.get();return j::binary("<",_lhs59134,_rhs59135);})());(void)(j::increment(_v_52004_i,1,false))){if(j::truth(j::get(_v_51987_fringe.get(),_v_52004_i))){(void)(([&]()->V{V _receiver59136=_v_52002_at;V _method59137=this->_literals[25];V _method=j::get(_receiver59136,_method59137);j::Args _params59138=j::Args{_v_52004_i};return j::call(_method,_params59138,_receiver59136);})());
}
}}
(void)((_v_52001_o=([&]()->V{V _obj59140=j::object();j::put(_obj59140,this->_literals[312],([&]()->V{V _receiver59141=j::builtin("Int32Array");V _method59142=this->_literals[113];V _method=j::get(_receiver59141,_method59142);j::Args _params59143=j::Args{_v_52002_at};return j::call(_method,_params59143,_receiver59141);})());j::put(_obj59140,this->_literals[284],([&]()->V{V _receiver59149=j::builtin("Uint16Array");V _method59150=this->_literals[113];V _method=j::get(_receiver59149,_method59150);j::Args _params59151=j::Args{_v_52002_at,j::function([=](const j::Args &_args_fn52005,const V &_receiver_fn52005,const V &_self_fn52005) mutable ->V{
V _v_52006_i;
_v_52006_i=_args_fn52005[0];
return ([&]()->V{V _receiver59144=(j::truth(j::get(_v_51961_border.get(),_v_52006_i))?([&]()->V{V _callee59147=this->_v_52017_edgeChar.get();return j::call(_callee59147,j::Args{_v_51995_cells.get(),_v_52006_i,_v_52000_style.get()});})():([&]()->V{V _callee59148=this->_v_52010_fringeChar.get();return j::call(_callee59148,j::Args{_v_51995_cells.get(),_v_52006_i});})());V _method59145=this->_literals[263];V _method=j::get(_receiver59144,_method59145);j::Args _params59146=j::Args{V(0.0)};return j::call(_method,_params59146,_receiver59144);})();
return V{};
},1)};return j::call(_method,_params59151,_receiver59149);})());return _obj59140;})()));
(void)(([&]()->V{V _receiver59152=_v_51994_outlines.get();V _method59153=this->_literals[123];V _method=j::get(_receiver59152,_method59153);j::Args _params59154=j::Args{_v_52000_style.get(),_v_52001_o};return j::call(_method,_params59154,_receiver59152);})());

}

return _v_52001_o;

}

return V{};
},0));j::put(_obj59116,this->_literals[313],_v_51962_nx);j::put(_obj59116,this->_literals[314],_v_51963_ny);j::put(_obj59116,this->_literals[237],_v_51970_depth.get());j::put(_obj59116,this->_literals[315],_v_51985_maxDepth);j::put(_obj59116,this->_literals[239],(j::truth(_v_51993_empty)?V(0.0):_v_51942_x0));j::put(_obj59116,this->_literals[240],(j::truth(_v_51993_empty)?V(0.0):_v_51943_y0));j::put(_obj59116,this->_literals[108],(j::truth(_v_51993_empty)?V(0.0):_v_51944_x1));j::put(_obj59116,this->_literals[109],(j::truth(_v_51993_empty)?V(0.0):_v_51945_y1));j::put(_obj59116,this->_literals[243],_v_51946_top);j::put(_obj59116,this->_literals[244],_v_51947_bottom);j::put(_obj59116,this->_literals[241],_v_51948_left);j::put(_obj59116,this->_literals[242],_v_51949_right);j::put(_obj59116,this->_literals[316],V::null());j::put(_obj59116,this->_literals[317],V::null());j::put(_obj59116,this->_literals[318],V::null());j::put(_obj59116,this->_literals[319],V(false));j::put(_obj59116,this->_literals[212],V::null());j::put(_obj59116,this->_literals[320],([&]()->V{V _obj59155=j::object();j::put(_obj59155,this->_literals[24],j::function([=](const j::Args &_args_fn52007,const V &_receiver_fn52007,const V &_self_fn52007) mutable ->V{
V _v_52008_x;
V _v_52009_y;
_v_52008_x=_args_fn52007[0];
_v_52009_y=_args_fn52007[1];
return ([&]()->V{V _lhs59156=([&]()->V{V _callee59160=_v_51957_isIn.get();return j::call(_callee59160,j::Args{([&]()->V{V _number59158=_v_52008_x;return V(std::floor(j::number(_number59158)));})(),([&]()->V{V _number59159=_v_52009_y;return V(std::floor(j::number(_number59159)));})()});})();V _rhs59157=V(1.0);return V(j::equal(_lhs59156,_rhs59157,true));})();
return V{};
},2));j::put(_obj59155,this->_literals[239],(j::truth(_v_51993_empty)?V(0.0):_v_51942_x0));j::put(_obj59155,this->_literals[240],(j::truth(_v_51993_empty)?V(0.0):_v_51943_y0));j::put(_obj59155,this->_literals[108],(j::truth(_v_51993_empty)?V(0.0):_v_51944_x1));j::put(_obj59155,this->_literals[109],(j::truth(_v_51993_empty)?V(0.0):_v_51945_y1));return _obj59155;})());return _obj59116;})();
return _v_51995_cells.get();

}

return V{};
},3);
this->_v_52010_fringeChar.get()=j::function([=](const j::Args &_args_fn52011,const V &_receiver_fn52011,const V &_self_fn52011) mutable ->V{
V _v_52012_c;
V _v_52013_i;
_v_52012_c=_args_fn52011[0];
_v_52013_i=_args_fn52011[1];
{
V _v_52014_x;
V _v_52015_y;
V _v_52016_k;
_v_52014_x=([&]()->V{V _lhs59161=_v_52013_i;V _rhs59162=j::get(_v_52012_c,this->_literals[251]);return V(std::fmod(j::number(_lhs59161),j::number(_rhs59162)));})();
_v_52015_y=([&]()->V{V _lhs59163=([&]()->V{V _lhs59165=_v_52013_i;V _rhs59166=_v_52014_x;return V(j::number(_lhs59165)-j::number(_rhs59166));})();V _rhs59164=j::get(_v_52012_c,this->_literals[251]);return V(j::number(_lhs59163)/j::number(_rhs59164));})();
_v_52016_k=j::get(j::get(_v_52012_c,this->_literals[286]),_v_52013_i);
return (j::truth(([&]()->V{V _receiver59169=_v_52012_c;V _method59170=this->_literals[30];V _method=j::get(_receiver59169,_method59170);j::Args _params59171=j::Args{_v_52014_x,([&]()->V{V _lhs59167=_v_52015_y;V _rhs59168=V(1.0);return j::binary("+",_lhs59167,_rhs59168);})()};return j::call(_method,_params59171,_receiver59169);})())?(j::truth(([&]()->V{V _lhs59172=_v_52016_k;V _rhs59173=V(0.3);return j::binary("<",_lhs59172,_rhs59173);})())?this->_literals[321]:this->_literals[42]):(j::truth(([&]()->V{V _lhs59174=_v_52016_k;V _rhs59175=V(0.3);return j::binary("<",_lhs59174,_rhs59175);})())?this->_literals[322]:this->_literals[323]));

}

return V{};
},2);
this->_v_52017_edgeChar.get()=j::function([=](const j::Args &_args_fn52018,const V &_receiver_fn52018,const V &_self_fn52018) mutable ->V{
j::Cell _v_52019_c;
V _v_52020_i;
V _v_52021_style;
_v_52019_c.get()=_args_fn52018[0];
_v_52020_i=_args_fn52018[1];
_v_52021_style=_args_fn52018[2];
{
j::Cell _v_52022_cols;
j::Cell _v_52023_x;
V _v_52024_y;
j::Cell _v_52025_has;
V _v_52026_L;
V _v_52027_R;
V _v_52028_U;
V _v_52029_D;
V _v_52030_left;
V _v_52031_right;
V _v_52032_n;
V _v_52033_fringeAt;
V _pattern59176=_v_52019_c.get();
_v_52022_cols.get()=j::get(_pattern59176,this->_literals[251]);
_v_52023_x.get()=([&]()->V{V _lhs59177=_v_52020_i;V _rhs59178=_v_52022_cols.get();return V(std::fmod(j::number(_lhs59177),j::number(_rhs59178)));})();
_v_52024_y=([&]()->V{V _lhs59179=([&]()->V{V _lhs59181=_v_52020_i;V _rhs59182=_v_52023_x.get();return V(j::number(_lhs59181)-j::number(_rhs59182));})();V _rhs59180=_v_52022_cols.get();return V(j::number(_lhs59179)/j::number(_rhs59180));})();
_v_52025_has.get()=j::get(_v_52019_c.get(),this->_literals[30]);
_v_52026_L=j::unary("!",([&]()->V{V _callee59185=_v_52025_has.get();return j::call(_callee59185,j::Args{([&]()->V{V _lhs59183=_v_52023_x.get();V _rhs59184=V(1.0);return V(j::number(_lhs59183)-j::number(_rhs59184));})(),_v_52024_y});})());
_v_52027_R=j::unary("!",([&]()->V{V _callee59188=_v_52025_has.get();return j::call(_callee59188,j::Args{([&]()->V{V _lhs59186=_v_52023_x.get();V _rhs59187=V(1.0);return j::binary("+",_lhs59186,_rhs59187);})(),_v_52024_y});})());
_v_52028_U=j::unary("!",([&]()->V{V _callee59191=_v_52025_has.get();return j::call(_callee59191,j::Args{_v_52023_x.get(),([&]()->V{V _lhs59189=_v_52024_y;V _rhs59190=V(1.0);return V(j::number(_lhs59189)-j::number(_rhs59190));})()});})());
_v_52029_D=j::unary("!",([&]()->V{V _callee59194=_v_52025_has.get();return j::call(_callee59194,j::Args{_v_52023_x.get(),([&]()->V{V _lhs59192=_v_52024_y;V _rhs59193=V(1.0);return j::binary("+",_lhs59192,_rhs59193);})()});})());
_v_52030_left=(j::truth(([&]()->V{V _lhs59195=_v_52021_style;V _rhs59196=this->_literals[163];return V(j::equal(_lhs59195,_rhs59196,true));})())?this->_literals[324]:this->_literals[325]);
_v_52031_right=(j::truth(([&]()->V{V _lhs59197=_v_52021_style;V _rhs59198=this->_literals[163];return V(j::equal(_lhs59197,_rhs59198,true));})())?this->_literals[326]:this->_literals[325]);
_v_52032_n=([&]()->V{V _lhs59199=([&]()->V{V _lhs59201=([&]()->V{V _lhs59203=j::unary("+",_v_52026_L);V _rhs59204=j::unary("+",_v_52027_R);return j::binary("+",_lhs59203,_rhs59204);})();V _rhs59202=j::unary("+",_v_52028_U);return j::binary("+",_lhs59201,_rhs59202);})();V _rhs59200=j::unary("+",_v_52029_D);return j::binary("+",_lhs59199,_rhs59200);})();
_v_52033_fringeAt=j::function([=](const j::Args &_args_fn52034,const V &_receiver_fn52034,const V &_self_fn52034) mutable ->V{
V _v_52035_yy;
_v_52035_yy=_args_fn52034[0];
return ([&]()->V{V _logical59205=([&]()->V{V _logical59206=([&]()->V{V _lhs59207=_v_52035_yy;V _rhs59208=V(0.0);return j::binary(">=",_lhs59207,_rhs59208);})();return j::truth(_logical59206)?([&]()->V{V _lhs59209=_v_52035_yy;V _rhs59210=j::get(_v_52019_c.get(),this->_literals[252]);return j::binary("<",_lhs59209,_rhs59210);})():_logical59206;})();return j::truth(_logical59205)?([&]()->V{V _lhs59211=j::get(j::get(_v_52019_c.get(),this->_literals[311]),([&]()->V{V _lhs59213=([&]()->V{V _lhs59215=_v_52035_yy;V _rhs59216=_v_52022_cols.get();return V(j::number(_lhs59215)*j::number(_rhs59216));})();V _rhs59214=_v_52023_x.get();return j::binary("+",_lhs59213,_rhs59214);})());V _rhs59212=V(1.0);return V(j::equal(_lhs59211,_rhs59212,true));})():_logical59205;})();
return V{};
},1);
if(j::truth(([&]()->V{V _lhs59217=_v_52032_n;V _rhs59218=V(1.0);return V(j::equal(_lhs59217,_rhs59218,true));})())){
j::Cell _v_52036_d;
V _v_52037_out;
if(j::truth(_v_52028_U)){return (j::truth(([&]()->V{V _callee59221=_v_52033_fringeAt;return j::call(_callee59221,j::Args{([&]()->V{V _lhs59219=_v_52024_y;V _rhs59220=V(1.0);return V(j::number(_lhs59219)-j::number(_rhs59220));})()});})())?this->_literals[127]:this->_literals[323]);
}
if(j::truth(_v_52029_D)){return (j::truth(([&]()->V{V _callee59224=_v_52033_fringeAt;return j::call(_callee59224,j::Args{([&]()->V{V _lhs59222=_v_52024_y;V _rhs59223=V(1.0);return j::binary("+",_lhs59222,_rhs59223);})()});})())?this->_literals[127]:this->_literals[321]);
}
_v_52036_d.get()=(j::truth(_v_52026_L)?V(1.0):j::unary("-",V(1.0)));
_v_52037_out=j::function([=](const j::Args &_args_fn52038,const V &_receiver_fn52038,const V &_self_fn52038) mutable ->V{
V _v_52039_yy;
_v_52039_yy=_args_fn52038[0];
return ([&]()->V{V _logical59225=j::unary("!",([&]()->V{V _callee59226=_v_52025_has.get();return j::call(_callee59226,j::Args{_v_52023_x.get(),_v_52039_yy});})());return j::truth(_logical59225)?([&]()->V{V _callee59229=_v_52025_has.get();return j::call(_callee59229,j::Args{([&]()->V{V _lhs59227=_v_52023_x.get();V _rhs59228=_v_52036_d.get();return j::binary("+",_lhs59227,_rhs59228);})(),_v_52039_yy});})():_logical59225;})();
return V{};
},1);
if(j::truth(([&]()->V{V _logical59230=([&]()->V{V _logical59231=([&]()->V{V _lhs59232=_v_52021_style;V _rhs59233=this->_literals[94];return V(j::equal(_lhs59232,_rhs59233,true));})();return j::truth(_logical59231)?([&]()->V{V _callee59236=_v_52037_out;return j::call(_callee59236,j::Args{([&]()->V{V _lhs59234=_v_52024_y;V _rhs59235=V(1.0);return j::binary("+",_lhs59234,_rhs59235);})()});})():_logical59231;})();return j::truth(_logical59230)?j::unary("!",([&]()->V{V _callee59239=_v_52037_out;return j::call(_callee59239,j::Args{([&]()->V{V _lhs59237=_v_52024_y;V _rhs59238=V(1.0);return V(j::number(_lhs59237)-j::number(_rhs59238));})()});})()):_logical59230;})())){return (j::truth(([&]()->V{V _lhs59240=_v_52036_d.get();V _rhs59241=V(0.0);return j::binary(">",_lhs59240,_rhs59241);})())?this->_literals[327]:this->_literals[20]);
}
if(j::truth(([&]()->V{V _logical59242=([&]()->V{V _logical59243=([&]()->V{V _lhs59244=_v_52021_style;V _rhs59245=this->_literals[94];return V(j::equal(_lhs59244,_rhs59245,true));})();return j::truth(_logical59243)?([&]()->V{V _callee59248=_v_52037_out;return j::call(_callee59248,j::Args{([&]()->V{V _lhs59246=_v_52024_y;V _rhs59247=V(1.0);return V(j::number(_lhs59246)-j::number(_rhs59247));})()});})():_logical59243;})();return j::truth(_logical59242)?j::unary("!",([&]()->V{V _callee59251=_v_52037_out;return j::call(_callee59251,j::Args{([&]()->V{V _lhs59249=_v_52024_y;V _rhs59250=V(1.0);return j::binary("+",_lhs59249,_rhs59250);})()});})()):_logical59242;})())){return (j::truth(([&]()->V{V _lhs59252=_v_52036_d.get();V _rhs59253=V(0.0);return j::binary(">",_lhs59252,_rhs59253);})())?this->_literals[20]:this->_literals[327]);
}
return (j::truth(([&]()->V{V _lhs59254=_v_52036_d.get();V _rhs59255=V(0.0);return j::binary(">",_lhs59254,_rhs59255);})())?_v_52030_left:_v_52031_right);

}

if(j::truth(([&]()->V{V _lhs59256=_v_52032_n;V _rhs59257=V(2.0);return V(j::equal(_lhs59256,_rhs59257,true));})())){
V _v_52040_h;
V _v_52041_v;
V _v_52042_slope;
V _v_52043_square;
if(j::truth(([&]()->V{V _logical59258=_v_52026_L;return j::truth(_logical59258)?_v_52027_R:_logical59258;})())){return this->_literals[325];
}
if(j::truth(([&]()->V{V _logical59259=_v_52028_U;return j::truth(_logical59259)?_v_52029_D:_logical59259;})())){return this->_literals[323];
}
_v_52040_h=(j::truth(_v_52026_L)?V(1.0):j::unary("-",V(1.0)));
_v_52041_v=(j::truth(_v_52028_U)?V(1.0):j::unary("-",V(1.0)));
_v_52042_slope=(j::truth(([&]()->V{V _lhs59260=_v_52021_style;V _rhs59261=this->_literals[163];return V(j::equal(_lhs59260,_rhs59261,true));})())?(j::truth(([&]()->V{V _lhs59262=_v_52040_h;V _rhs59263=V(0.0);return j::binary(">",_lhs59262,_rhs59263);})())?this->_literals[324]:this->_literals[326]):(j::truth(([&]()->V{V _lhs59264=([&]()->V{V _lhs59266=_v_52041_v;V _rhs59267=V(0.0);return j::binary(">",_lhs59266,_rhs59267);})();V _rhs59265=([&]()->V{V _lhs59268=_v_52040_h;V _rhs59269=V(0.0);return j::binary(">",_lhs59268,_rhs59269);})();return V(j::equal(_lhs59264,_rhs59265,true));})())?this->_literals[20]:this->_literals[327]));
if(j::truth(([&]()->V{V _logical59270=([&]()->V{V _logical59271=([&]()->V{V _lhs59272=([&]()->V{V _lhs59274=_v_52023_x.get();V _rhs59275=_v_52040_h;return V(j::number(_lhs59274)-j::number(_rhs59275));})();V _rhs59273=V(0.0);return j::binary(">=",_lhs59272,_rhs59273);})();return j::truth(_logical59271)?([&]()->V{V _lhs59276=([&]()->V{V _lhs59278=_v_52023_x.get();V _rhs59279=_v_52040_h;return V(j::number(_lhs59278)-j::number(_rhs59279));})();V _rhs59277=_v_52022_cols.get();return j::binary("<",_lhs59276,_rhs59277);})():_logical59271;})();return j::truth(_logical59270)?j::get(j::get(_v_52019_c.get(),this->_literals[311]),([&]()->V{V _lhs59280=_v_52020_i;V _rhs59281=_v_52040_h;return V(j::number(_lhs59280)-j::number(_rhs59281));})()):_logical59270;})())){return (j::truth(([&]()->V{V _lhs59282=_v_52041_v;V _rhs59283=V(0.0);return j::binary(">",_lhs59282,_rhs59283);})())?this->_literals[323]:this->_literals[321]);
}
_v_52043_square=([&]()->V{V _logical59284=([&]()->V{V _logical59285=([&]()->V{V _logical59286=([&]()->V{V _callee59289=_v_52025_has.get();return j::call(_callee59289,j::Args{_v_52023_x.get(),([&]()->V{V _lhs59287=_v_52024_y;V _rhs59288=_v_52041_v;return j::binary("+",_lhs59287,_rhs59288);})()});})();return j::truth(_logical59286)?j::unary("!",([&]()->V{V _callee59294=_v_52025_has.get();return j::call(_callee59294,j::Args{([&]()->V{V _lhs59290=_v_52023_x.get();V _rhs59291=_v_52040_h;return V(j::number(_lhs59290)-j::number(_rhs59291));})(),([&]()->V{V _lhs59292=_v_52024_y;V _rhs59293=_v_52041_v;return j::binary("+",_lhs59292,_rhs59293);})()});})()):_logical59286;})();return j::truth(_logical59285)?([&]()->V{V _callee59297=_v_52025_has.get();return j::call(_callee59297,j::Args{([&]()->V{V _lhs59295=_v_52023_x.get();V _rhs59296=_v_52040_h;return j::binary("+",_lhs59295,_rhs59296);})(),_v_52024_y});})():_logical59285;})();return j::truth(_logical59284)?j::unary("!",([&]()->V{V _callee59302=_v_52025_has.get();return j::call(_callee59302,j::Args{([&]()->V{V _lhs59298=_v_52023_x.get();V _rhs59299=_v_52040_h;return j::binary("+",_lhs59298,_rhs59299);})(),([&]()->V{V _lhs59300=_v_52024_y;V _rhs59301=_v_52041_v;return V(j::number(_lhs59300)-j::number(_rhs59301));})()});})()):_logical59284;})();
if(j::truth(_v_52043_square)){return (j::truth(([&]()->V{V _lhs59303=_v_52041_v;V _rhs59304=V(0.0);return j::binary(">",_lhs59303,_rhs59304);})())?this->_literals[42]:(j::truth(j::unary("!",([&]()->V{V _callee59309=_v_52025_has.get();return j::call(_callee59309,j::Args{([&]()->V{V _lhs59305=_v_52023_x.get();V _rhs59306=_v_52040_h;return j::binary("+",_lhs59305,_rhs59306);})(),([&]()->V{V _lhs59307=_v_52024_y;V _rhs59308=_v_52041_v;return j::binary("+",_lhs59307,_rhs59308);})()});})()))?this->_literals[322]:(j::truth(([&]()->V{V _lhs59310=_v_52040_h;V _rhs59311=V(0.0);return j::binary(">",_lhs59310,_rhs59311);})())?_v_52030_left:_v_52031_right)));
}
if(j::truth(([&]()->V{V _callee59316=_v_52025_has.get();return j::call(_callee59316,j::Args{([&]()->V{V _lhs59312=_v_52023_x.get();V _rhs59313=_v_52040_h;return j::binary("+",_lhs59312,_rhs59313);})(),([&]()->V{V _lhs59314=_v_52024_y;V _rhs59315=_v_52041_v;return V(j::number(_lhs59314)-j::number(_rhs59315));})()});})())){return _v_52042_slope;
}
if(j::truth(([&]()->V{V _lhs59317=j::get(j::get(_v_52019_c.get(),this->_literals[286]),_v_52020_i);V _rhs59318=V(0.62);return j::binary("<",_lhs59317,_rhs59318);})())){return (j::truth(([&]()->V{V _lhs59319=_v_52041_v;V _rhs59320=V(0.0);return j::binary(">",_lhs59319,_rhs59320);})())?this->_literals[42]:this->_literals[322]);
}
return _v_52042_slope;

}

if(j::truth(([&]()->V{V _lhs59321=_v_52032_n;V _rhs59322=V(3.0);return V(j::equal(_lhs59321,_rhs59322,true));})())){
V _v_52044_d;
if(j::truth(j::unary("!",_v_52029_D))){return this->_literals[42];
}
if(j::truth(j::unary("!",_v_52028_U))){return this->_literals[322];
}
_v_52044_d=(j::truth(j::unary("!",_v_52027_R))?V(1.0):j::unary("-",V(1.0)));
if(j::truth(([&]()->V{V _logical59323=([&]()->V{V _lhs59324=_v_52021_style;V _rhs59325=this->_literals[163];return V(j::equal(_lhs59324,_rhs59325,true));})();return j::truth(_logical59323)?([&]()->V{V _logical59326=([&]()->V{V _callee59331=_v_52025_has.get();return j::call(_callee59331,j::Args{([&]()->V{V _lhs59327=_v_52023_x.get();V _rhs59328=_v_52044_d;return j::binary("+",_lhs59327,_rhs59328);})(),([&]()->V{V _lhs59329=_v_52024_y;V _rhs59330=V(1.0);return V(j::number(_lhs59329)-j::number(_rhs59330));})()});})();return !j::truth(_logical59326)?([&]()->V{V _callee59336=_v_52025_has.get();return j::call(_callee59336,j::Args{([&]()->V{V _lhs59332=_v_52023_x.get();V _rhs59333=_v_52044_d;return j::binary("+",_lhs59332,_rhs59333);})(),([&]()->V{V _lhs59334=_v_52024_y;V _rhs59335=V(1.0);return j::binary("+",_lhs59334,_rhs59335);})()});})():_logical59326;})():_logical59323;})())){return (j::truth(([&]()->V{V _lhs59337=_v_52044_d;V _rhs59338=V(0.0);return j::binary(">",_lhs59337,_rhs59338);})())?this->_literals[324]:this->_literals[326]);
}
return (j::truth(([&]()->V{V _callee59343=_v_52025_has.get();return j::call(_callee59343,j::Args{([&]()->V{V _lhs59339=_v_52023_x.get();V _rhs59340=_v_52044_d;return j::binary("+",_lhs59339,_rhs59340);})(),([&]()->V{V _lhs59341=_v_52024_y;V _rhs59342=V(1.0);return V(j::number(_lhs59341)-j::number(_rhs59342));})()});})())?(j::truth(([&]()->V{V _lhs59344=_v_52044_d;V _rhs59345=V(0.0);return j::binary(">",_lhs59344,_rhs59345);})())?this->_literals[20]:this->_literals[327]):(j::truth(([&]()->V{V _callee59350=_v_52025_has.get();return j::call(_callee59350,j::Args{([&]()->V{V _lhs59346=_v_52023_x.get();V _rhs59347=_v_52044_d;return j::binary("+",_lhs59346,_rhs59347);})(),([&]()->V{V _lhs59348=_v_52024_y;V _rhs59349=V(1.0);return j::binary("+",_lhs59348,_rhs59349);})()});})())?(j::truth(([&]()->V{V _lhs59351=_v_52044_d;V _rhs59352=V(0.0);return j::binary(">",_lhs59351,_rhs59352);})())?this->_literals[327]:this->_literals[20]):this->_literals[323]));

}

return this->_literals[42];

}

return V{};
},3);
this->_v_52045_fillParts.get()=j::function([=](const j::Args &_args_fn52046,const V &_receiver_fn52046,const V &_self_fn52046) mutable ->V{
V _v_52047_s;
V _v_52048_ox;
V _v_52049_oy;
V _v_52050_cols;
V _v_52051_rows;
V _v_52052_r;
V _v_52053_t;
V _v_52054_fills;
_v_52047_s=_args_fn52046[0];
_v_52048_ox=_args_fn52046[1];
_v_52049_oy=_args_fn52046[2];
_v_52050_cols=_args_fn52046[3];
_v_52051_rows=_args_fn52046[4];
_v_52052_r=_args_fn52046[5];
_v_52053_t=_args_fn52046[6];
_v_52054_fills=_args_fn52046[7];
{
{for(const auto &_item59353:j::elements(_v_52054_fills)){j::Cell _v_52055_f;
_v_52055_f.get()=_item59353;
{
V _v_52056_own;
V _v_52062_c;
_v_52056_own=j::get(j::get(_v_52052_r,this->_literals[286]),j::get(_v_52055_f.get(),this->_literals[235]));
if(j::truth(([&]()->V{V _logical59354=j::unary("!",j::get(_v_52055_f.get(),this->_literals[312]));return !j::truth(_logical59354)?j::get(_v_52055_f.get(),this->_literals[270]):_logical59354;})())){
V _v_52057_cover;
_v_52057_cover=([&]()->V{V _base59356=_v_52055_f.get();V _key59357=this->_literals[286];V _old59358=j::get(_base59356,_key59357);return j::nullish(_old59358)?j::put(_base59356,_key59357,([&]()->V{V _callee59361=j::builtin("Float32Array");return j::construct(_callee59361,j::Args{([&]()->V{V _lhs59359=j::get(_v_52047_s,this->_literals[251]);V _rhs59360=j::get(_v_52047_s,this->_literals[252]);return V(j::number(_lhs59359)*j::number(_rhs59360));})()});})()):_old59358;})();
(void)(([&]()->V{V _receiver59362=_v_52057_cover;V _method59363=this->_literals[130];V _method=j::get(_receiver59362,_method59363);j::Args _params59364=j::Args{V(0.0)};return j::call(_method,_params59364,_receiver59362);})());
{V _v_52058_y;
_v_52058_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs59365=_v_52058_y;V _rhs59366=_v_52051_rows;return j::binary("<",_lhs59365,_rhs59366);})());(void)(j::increment(_v_52058_y,1,false))){{V _v_52059_x;
_v_52059_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs59367=_v_52059_x;V _rhs59368=_v_52050_cols;return j::binary("<",_lhs59367,_rhs59368);})());(void)(j::increment(_v_52059_x,1,false))){
V _v_52060_v;
V _v_52061_i;
_v_52060_v=j::get(_v_52056_own,([&]()->V{V _lhs59369=([&]()->V{V _lhs59371=_v_52058_y;V _rhs59372=_v_52050_cols;return V(j::number(_lhs59371)*j::number(_rhs59372));})();V _rhs59370=_v_52059_x;return j::binary("+",_lhs59369,_rhs59370);})());
_v_52061_i=(j::truth(([&]()->V{V _logical59373=([&]()->V{V _lhs59374=_v_52060_v;V _rhs59375=V(0.0);return j::binary(">",_lhs59374,_rhs59375);})();return j::truth(_logical59373)?([&]()->V{V _lhs59376=j::get(j::get(_v_52052_r,this->_literals[184]),([&]()->V{V _lhs59378=([&]()->V{V _lhs59380=_v_52058_y;V _rhs59381=_v_52050_cols;return V(j::number(_lhs59380)*j::number(_rhs59381));})();V _rhs59379=_v_52059_x;return j::binary("+",_lhs59378,_rhs59379);})());V _rhs59377=j::get(_v_52055_f.get(),this->_literals[235]);return V(j::equal(_lhs59376,_rhs59377,true));})():_logical59373;})())?([&]()->V{V _receiver59386=_v_52047_s;V _method59387=this->_literals[169];V _method=j::get(_receiver59386,_method59387);j::Args _params59388=j::Args{([&]()->V{V _lhs59382=_v_52048_ox;V _rhs59383=_v_52059_x;return j::binary("+",_lhs59382,_rhs59383);})(),([&]()->V{V _lhs59384=_v_52049_oy;V _rhs59385=_v_52058_y;return j::binary("+",_lhs59384,_rhs59385);})()};return j::call(_method,_params59388,_receiver59386);})():j::unary("-",V(1.0)));
if(j::truth(([&]()->V{V _lhs59389=_v_52061_i;V _rhs59390=V(0.0);return j::binary(">=",_lhs59389,_rhs59390);})())){(void)(([&]()->V{V _base59392=_v_52057_cover;V _key59393=_v_52061_i;V _assign59391=_v_52060_v;return j::put(_base59392,_key59393,_assign59391);})());
}

}
}
}}
(void)(([&]()->V{V _base59395=_v_52055_f.get();V _key59396=this->_literals[312];V _assign59394=([&]()->V{V _callee59397=this->_v_51933_partCells.get();return j::call(_callee59397,j::Args{_v_52057_cover,j::get(_v_52047_s,this->_literals[251]),j::get(_v_52047_s,this->_literals[252]),j::get(_v_52047_s,this->_literals[231])});})();return j::put(_base59395,_key59396,_assign59394);})());
(void)(([&]()->V{V _base59399=_v_52055_f.get();V _key59400=this->_literals[328];V _assign59398=(j::truth(j::get(_v_52055_f.get(),this->_literals[211]))?([&]()->V{V _receiver59401=j::get(_v_52055_f.get(),this->_literals[211]);V _method59402=this->_literals[329];V _method=j::get(_receiver59401,_method59402);j::Args _params59403=j::Args{j::get(_v_52055_f.get(),this->_literals[312])};return j::call(_method,_params59403,_receiver59401);})():V::null());return j::put(_base59399,_key59400,_assign59398);})());

}

_v_52062_c=j::get(_v_52055_f.get(),this->_literals[312]);
if(j::truth(j::unary("!",j::get(j::get(_v_52062_c,this->_literals[308]),this->_literals[5])))){continue;
}
if(j::truth(j::get(_v_52055_f.get(),this->_literals[330]))){
V _v_52063_g;
V _v_52064_gx0;
V _v_52065_gy0;
_v_52063_g=([&]()->V{V _receiver59405=j::get(_v_52055_f.get(),this->_literals[330]);V _method59406=this->_literals[332];V _method=j::get(_receiver59405,_method59406);j::Args _params59407=j::Args{_v_52053_t,([&]()->V{V _obj59404=j::object();j::put(_obj59404,this->_literals[331],j::get(_v_52047_s,this->_literals[331]));j::put(_obj59404,this->_literals[282],j::get(_v_52047_s,this->_literals[282]));return _obj59404;})()};return j::call(_method,_params59407,_receiver59405);})();
_v_52064_gx0=([&]()->V{V _number59414=([&]()->V{V _lhs59415=([&]()->V{V _lhs59417=([&]()->V{V _lhs59419=j::get(_v_52062_c,this->_literals[239]);V _rhs59420=j::get(_v_52062_c,this->_literals[108]);return j::binary("+",_lhs59419,_rhs59420);})();V _rhs59418=j::get(_v_52063_g,this->_literals[251]);return V(j::number(_lhs59417)-j::number(_rhs59418));})();V _rhs59416=V(2.0);return V(j::number(_lhs59415)/j::number(_rhs59416));})();return V(std::floor(j::number(_number59414)+.5));})();
_v_52065_gy0=([&]()->V{V _number59427=([&]()->V{V _lhs59428=([&]()->V{V _lhs59430=([&]()->V{V _lhs59432=j::get(_v_52062_c,this->_literals[240]);V _rhs59433=j::get(_v_52062_c,this->_literals[109]);return j::binary("+",_lhs59432,_rhs59433);})();V _rhs59431=j::get(_v_52063_g,this->_literals[252]);return V(j::number(_lhs59430)-j::number(_rhs59431));})();V _rhs59429=V(2.0);return V(j::number(_lhs59428)/j::number(_rhs59429));})();return V(std::floor(j::number(_number59427)+.5));})();
{for(const auto &_item59434:j::elements(j::get(_v_52062_c,this->_literals[308]))){V _v_52066_k;
_v_52066_k=_item59434;
{
V _v_52067_x;
V _v_52068_y;
V _v_52069_gi;
V _v_52070_ch;
_v_52067_x=([&]()->V{V _lhs59435=_v_52066_k;V _rhs59436=j::get(_v_52047_s,this->_literals[251]);return V(std::fmod(j::number(_lhs59435),j::number(_rhs59436)));})();
_v_52068_y=([&]()->V{V _lhs59437=([&]()->V{V _lhs59439=_v_52066_k;V _rhs59440=_v_52067_x;return V(j::number(_lhs59439)-j::number(_rhs59440));})();V _rhs59438=j::get(_v_52047_s,this->_literals[251]);return V(j::number(_lhs59437)/j::number(_rhs59438));})();
_v_52069_gi=([&]()->V{V _lhs59441=([&]()->V{V _lhs59443=([&]()->V{V _lhs59445=([&]()->V{V _lhs59447=([&]()->V{V _lhs59449=([&]()->V{V _lhs59451=_v_52068_y;V _rhs59452=_v_52065_gy0;return V(j::number(_lhs59451)-j::number(_rhs59452));})();V _rhs59450=j::get(_v_52063_g,this->_literals[252]);return V(std::fmod(j::number(_lhs59449),j::number(_rhs59450)));})();V _rhs59448=j::get(_v_52063_g,this->_literals[252]);return j::binary("+",_lhs59447,_rhs59448);})();V _rhs59446=j::get(_v_52063_g,this->_literals[252]);return V(std::fmod(j::number(_lhs59445),j::number(_rhs59446)));})();V _rhs59444=j::get(_v_52063_g,this->_literals[251]);return V(j::number(_lhs59443)*j::number(_rhs59444));})();V _rhs59442=([&]()->V{V _lhs59453=([&]()->V{V _lhs59455=([&]()->V{V _lhs59457=([&]()->V{V _lhs59459=_v_52067_x;V _rhs59460=_v_52064_gx0;return V(j::number(_lhs59459)-j::number(_rhs59460));})();V _rhs59458=j::get(_v_52063_g,this->_literals[251]);return V(std::fmod(j::number(_lhs59457),j::number(_rhs59458)));})();V _rhs59456=j::get(_v_52063_g,this->_literals[251]);return j::binary("+",_lhs59455,_rhs59456);})();V _rhs59454=j::get(_v_52063_g,this->_literals[251]);return V(std::fmod(j::number(_lhs59453),j::number(_rhs59454)));})();return j::binary("+",_lhs59441,_rhs59442);})();
_v_52070_ch=j::get(j::get(_v_52063_g,this->_literals[284]),_v_52069_gi);
(void)(([&]()->V{V _receiver59466=_v_52047_s;V _method59467=this->_literals[333];V _method=j::get(_receiver59466,_method59467);j::Args _params59468=j::Args{_v_52066_k,_v_52070_ch,(j::truth(([&]()->V{V _lhs59461=_v_52070_ch;V _rhs59462=this->_v_50439_EMPTY.get();return V(j::equal(_lhs59461,_rhs59462,true));})())?this->_v_50442_NONE.get():([&]()->V{V _receiver59463=_v_52055_f.get();V _method59464=this->_literals[169];V _method=j::get(_receiver59463,_method59464);j::Args _params59465=j::Args{j::get(j::get(_v_52063_g,this->_literals[222]),_v_52069_gi),j::get(_v_52047_s,this->_literals[331])};return j::call(_method,_params59465,_receiver59463);})())};return j::call(_method,_params59468,_receiver59466);})());

}
}}

}
else {if(j::truth(j::get(_v_52055_f.get(),this->_literals[328]))){
V _v_52072_under;
j::Cell _v_52073_paper;
{for(const auto &_item59469:j::elements(j::get(_v_52062_c,this->_literals[308]))){V _v_52071_k;
_v_52071_k=_item59469;
(void)(([&]()->V{V _receiver59470=_v_52047_s;V _method59471=this->_literals[333];V _method=j::get(_receiver59470,_method59471);j::Args _params59472=j::Args{_v_52071_k,this->_v_50439_EMPTY.get(),this->_v_50442_NONE.get()};return j::call(_method,_params59472,_receiver59470);})());
}}
_v_52072_under=([&]()->V{V _base59474=_v_52055_f.get();V _key59475=this->_literals[334];V _old59476=j::get(_base59474,_key59475);return j::nullish(_old59476)?j::put(_base59474,_key59475,([&]()->V{V _obj59477=j::object();j::put(_obj59477,this->_literals[284],([&]()->V{V _callee59478=j::builtin("Uint16Array");return j::construct(_callee59478,j::Args{j::get(j::get(_v_52047_s,this->_literals[284]),this->_literals[5])});})());j::put(_obj59477,this->_literals[222],([&]()->V{V _callee59479=j::builtin("Uint8Array");return j::construct(_callee59479,j::Args{j::get(j::get(_v_52047_s,this->_literals[222]),this->_literals[5])});})());return _obj59477;})()):_old59476;})();
(void)(([&]()->V{V _receiver59480=j::get(_v_52072_under,this->_literals[284]);V _method59481=this->_literals[123];V _method=j::get(_receiver59480,_method59481);j::Args _params59482=j::Args{j::get(_v_52047_s,this->_literals[284])};return j::call(_method,_params59482,_receiver59480);})());
(void)(([&]()->V{V _receiver59483=j::get(_v_52072_under,this->_literals[222]);V _method59484=this->_literals[123];V _method=j::get(_receiver59483,_method59484);j::Args _params59485=j::Args{j::get(_v_52047_s,this->_literals[222])};return j::call(_method,_params59485,_receiver59483);})());
_v_52073_paper.get()=j::get(_v_52047_s,this->_literals[331]);
(void)(([&]()->V{V _receiver59490=_v_52055_f.get();V _method59491=this->_literals[328];V _method=j::get(_receiver59490,_method59491);j::Args _params59492=j::Args{_v_52053_t,([&]()->V{V _obj59486=j::object();j::put(_obj59486,this->_literals[335],_v_52047_s);j::put(_obj59486,this->_literals[331],_v_52073_paper.get());j::put(_obj59486,this->_literals[282],j::get(_v_52047_s,this->_literals[282]));j::put(_obj59486,this->_literals[141],j::function([=](const j::Args &_args_fn52074,const V &_receiver_fn52074,const V &_self_fn52074) mutable ->V{
V _v_52075_i;
_v_52075_i=_args_fn52074[0];
return ([&]()->V{V _receiver59487=_v_52055_f.get();V _method59488=this->_literals[169];V _method=j::get(_receiver59487,_method59488);j::Args _params59489=j::Args{_v_52075_i,_v_52073_paper.get()};return j::call(_method,_params59489,_receiver59487);})();
return V{};
},1));j::put(_obj59486,this->_literals[334],_v_52072_under);return _obj59486;})()};return j::call(_method,_params59492,_receiver59490);})());

}

}

}
}}

}

return V{};
},8);
this->_v_52076_fromSvg.get()=j::function([=](const j::Args &_args_fn52077,const V &_receiver_fn52077,const V &_self_fn52077) mutable ->V{
V _v_52078_svg;
V _v_52079_options;
_v_52078_svg=_args_fn52077[0];
V _default59493=_args_fn52077[1];if(_default59493.kind==V::Undefined||_default59493.kind==V::Hole)_default59493=([&]()->V{V _obj59494=j::object();return _obj59494;})();
_v_52079_options=_default59493;
{
V _v_52080_doc;
V _v_52081_o;
j::Cell _v_52082_p;
V _v_52083_opts;
V _v_52084_fps;
V _v_52085_still;
V _v_52086_control;
j::Cell _v_52087_sources;
j::Cell _v_52092_mine;
V _v_52093_lists;
j::Cell _v_52098_palette;
j::Cell _v_52099_maps;
j::Cell _v_52100_inkAt;
j::Cell _v_52102_slotIndex;
j::Cell _v_52106_inkIndex;
j::Cell _v_52109_indexOf;
V _v_52117_loops;
V _v_52118_unknown;
V _v_52121_moving;
V _v_52124_loop;
V _v_52125_name;
_v_52080_doc=([&]()->V{V _callee59495=this->_v_51930_svgOf.get();return j::call(_callee59495,j::Args{_v_52078_svg});})();
_v_52081_o=([&]()->V{V _callee59496=this->_v_51899_planOptions.get();return j::call(_callee59496,j::Args{_v_52079_options,V(false),V(2.0)});})();
_v_52082_p.get()=([&]()->V{V _callee59497=this->_v_51336_plan.get();return j::call(_callee59497,j::Args{_v_52080_doc,_v_52081_o});})();
_v_52083_opts=_v_52079_options;
_v_52084_fps=([&]()->V{V _callee59498=this->_v_50995_whole.get();return j::call(_callee59498,j::Args{j::get(_v_52083_opts,this->_literals[299]),this->_literals[299],V(0.0),V(60.0)});})();
_v_52085_still=(j::truth(([&]()->V{V _lhs59499=j::get(_v_52083_opts,this->_literals[300]);V _rhs59500=j::builtin("undefined");return V(j::equal(_lhs59499,_rhs59500,true));})())?j::builtin("undefined"):(j::truth(([&]()->V{V _logical59501=([&]()->V{V _logical59502=([&]()->V{V _lhs59503=j::unary("typeof",j::get(_v_52083_opts,this->_literals[300]));V _rhs59504=this->_literals[220];return V(j::equal(_lhs59503,_rhs59504,true));})();return j::truth(_logical59502)?([&]()->V{V _receiver59505=j::builtin("Number");V _method59506=this->_literals[57];V _method=j::get(_receiver59505,_method59506);j::Args _params59507=j::Args{j::get(_v_52083_opts,this->_literals[300])};return j::call(_method,_params59507,_receiver59505);})():_logical59502;})();return j::truth(_logical59501)?([&]()->V{V _lhs59508=j::get(_v_52083_opts,this->_literals[300]);V _rhs59509=V(0.0);return j::binary(">=",_lhs59508,_rhs59509);})():_logical59501;})())?j::get(_v_52083_opts,this->_literals[300]):([&]()->V{V _callee59512=this->_v_50450_fail.get();return j::call(_callee59512,j::Args{([&]()->V{std::u16string _text59510;_text59510+=u"still takes a number of seconds of 0 or more, not ";_text59510+=j::string(([&]()->V{V _callee59511=j::builtin("String");return j::call(_callee59511,j::Args{j::get(_v_52083_opts,this->_literals[300])});})());_text59510+=u"";return V(std::move(_text59510));})()});})()));
if(j::truth(([&]()->V{V _logical59513=([&]()->V{V _lhs59514=j::get(_v_52083_opts,this->_literals[301]);V _rhs59515=j::builtin("undefined");return V(!j::equal(_lhs59514,_rhs59515,true));})();return j::truth(_logical59513)?j::unary("!",([&]()->V{V _callee59516=this->_v_50453_isHex.get();return j::call(_callee59516,j::Args{j::get(_v_52083_opts,this->_literals[301])});})()):_logical59513;})())){(void)(([&]()->V{V _callee59521=this->_v_50450_fail.get();return j::call(_callee59521,j::Args{([&]()->V{std::u16string _text59517;_text59517+=u"ground takes a colour as #rrggbb, not ";_text59517+=j::string(([&]()->V{V _receiver59518=j::builtin("JSON");V _method59519=this->_literals[215];V _method=j::get(_receiver59518,_method59519);j::Args _params59520=j::Args{j::get(_v_52083_opts,this->_literals[301])};return j::call(_method,_params59520,_receiver59518);})());_text59517+=u"";return V(std::move(_text59517));})()});})());
}
_v_52086_control=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f]","");
if(j::truth(([&]()->V{V _logical59522=([&]()->V{V _lhs59523=j::get(_v_52083_opts,this->_literals[0]);V _rhs59524=j::builtin("undefined");return V(!j::equal(_lhs59523,_rhs59524,true));})();return j::truth(_logical59522)?([&]()->V{V _logical59525=([&]()->V{V _logical59526=([&]()->V{V _lhs59527=j::unary("typeof",j::get(_v_52083_opts,this->_literals[0]));V _rhs59528=this->_literals[117];return V(!j::equal(_lhs59527,_rhs59528,true));})();return !j::truth(_logical59526)?j::unary("!",([&]()->V{V _receiver59529=j::get(_v_52083_opts,this->_literals[0]);V _method59530=this->_literals[21];V _method=j::get(_receiver59529,_method59530);j::Args _params59531=j::Args{};return j::call(_method,_params59531,_receiver59529);})()):_logical59526;})();return !j::truth(_logical59525)?([&]()->V{V _receiver59532=_v_52086_control;V _method59533=this->_literals[24];V _method=j::get(_receiver59532,_method59533);j::Args _params59534=j::Args{j::get(_v_52083_opts,this->_literals[0])};return j::call(_method,_params59534,_receiver59532);})():_logical59525;})():_logical59522;})())){(void)(([&]()->V{V _callee59539=this->_v_50450_fail.get();return j::call(_callee59539,j::Args{([&]()->V{std::u16string _text59535;_text59535+=u"name takes one line, such as \"heart\", not ";_text59535+=j::string(([&]()->V{V _receiver59536=j::builtin("JSON");V _method59537=this->_literals[215];V _method=j::get(_receiver59536,_method59537);j::Args _params59538=j::Args{j::get(_v_52083_opts,this->_literals[0])};return j::call(_method,_params59538,_receiver59536);})());_text59535+=u"";return V(std::move(_text59535));})()});})());
}
if(j::truth(([&]()->V{V _logical59540=([&]()->V{V _lhs59541=j::get(_v_52083_opts,this->_literals[297]);V _rhs59542=j::builtin("undefined");return V(!j::equal(_lhs59541,_rhs59542,true));})();return j::truth(_logical59540)?([&]()->V{V _logical59543=([&]()->V{V _lhs59544=j::unary("typeof",j::get(_v_52083_opts,this->_literals[297]));V _rhs59545=this->_literals[117];return V(!j::equal(_lhs59544,_rhs59545,true));})();return !j::truth(_logical59543)?([&]()->V{V _receiver59546=_v_52086_control;V _method59547=this->_literals[24];V _method=j::get(_receiver59546,_method59547);j::Args _params59548=j::Args{j::get(_v_52083_opts,this->_literals[297])};return j::call(_method,_params59548,_receiver59546);})():_logical59543;})():_logical59540;})())){(void)(([&]()->V{V _callee59553=this->_v_50450_fail.get();return j::call(_callee59553,j::Args{([&]()->V{std::u16string _text59549;_text59549+=u"note takes one line of 1 to 72 characters, not ";_text59549+=j::string(([&]()->V{V _receiver59550=j::builtin("JSON");V _method59551=this->_literals[215];V _method=j::get(_receiver59550,_method59551);j::Args _params59552=j::Args{j::get(_v_52083_opts,this->_literals[297])};return j::call(_method,_params59552,_receiver59550);})());_text59549+=u"";return V(std::move(_text59549));})()});})());
}
_v_52087_sources.get()=([&]()->V{V _receiver59559=j::get(_v_52082_p.get(),this->_literals[291]);V _method59560=this->_literals[41];V _method=j::get(_receiver59559,_method59560);j::Args _params59561=j::Args{j::function([=](const j::Args &_args_fn52088,const V &_receiver_fn52088,const V &_self_fn52088) mutable ->V{
V _v_52089_part;
V _v_52090_material;
V _v_52091_moves;
V _pattern59554=_args_fn52088[0];
_v_52089_part=j::get(_pattern59554,this->_literals[235]);
_v_52090_material=j::get(_pattern59554,this->_literals[211]);
_v_52091_moves=j::get(_pattern59554,this->_literals[270]);
return ([&]()->V{V _obj59555=j::object();j::put(_obj59555,this->_literals[235],_v_52089_part);j::put(_obj59555,this->_literals[270],_v_52091_moves);j::put(_obj59555,this->_literals[211],(j::truth(([&]()->V{V _callee59556=this->_v_50985_isPartMaterial.get();return j::call(_callee59556,j::Args{_v_52090_material});})())?_v_52090_material:V::null()));j::put(_obj59555,this->_literals[336],(j::truth(([&]()->V{V _callee59557=this->_v_50985_isPartMaterial.get();return j::call(_callee59557,j::Args{_v_52090_material});})())?V::null():([&]()->V{V _callee59558=this->_v_50446_asPiece.get();return j::call(_callee59558,j::Args{_v_52090_material});})()));return _obj59555;})();
return V{};
},1)};return j::call(_method,_params59561,_receiver59559);})();
_v_52092_mine.get()=([&]()->V{j::Args _array59562;for(const auto &_value:j::elements(j::get(_v_52082_p.get(),this->_literals[223])))_array59562.push_back(_value);for(const auto &_value:j::elements(j::get(_v_52082_p.get(),this->_literals[224])))_array59562.push_back(_value);return j::array(std::move(_array59562));})();
_v_52093_lists=([&]()->V{V _receiver59571=_v_52087_sources.get();V _method59572=this->_literals[41];V _method=j::get(_receiver59571,_method59572);j::Args _params59573=j::Args{j::function([=](const j::Args &_args_fn52094,const V &_receiver_fn52094,const V &_self_fn52094) mutable ->V{
V _v_52095_f;
_v_52095_f=_args_fn52094[0];
return (j::truth(j::get(_v_52095_f,this->_literals[211]))?([&]()->V{V _receiver59566=([&]()->V{j::Args _array59569;for(const auto &_value:j::elements(j::get(j::get(j::get(_v_52095_f,this->_literals[211]),this->_literals[222]),this->_literals[223])))_array59569.push_back(_value);for(const auto &_value:j::elements(j::get(j::get(j::get(_v_52095_f,this->_literals[211]),this->_literals[222]),this->_literals[224])))_array59569.push_back(_value);return j::array(std::move(_array59569));})();V _method59567=this->_literals[41];V _method=j::get(_receiver59566,_method59567);j::Args _params59568=j::Args{j::function([=](const j::Args &_args_fn52096,const V &_receiver_fn52096,const V &_self_fn52096) mutable ->V{
V _v_52097_c;
_v_52097_c=_args_fn52096[0];
return ([&]()->V{V _receiver59563=_v_52097_c;V _method59564=this->_literals[29];V _method=j::get(_receiver59563,_method59564);j::Args _params59565=j::Args{};return j::call(_method,_params59565,_receiver59563);})();
return V{};
},1)};return j::call(_method,_params59568,_receiver59566);})():(j::truth(j::get(j::get(j::get(_v_52095_f,this->_literals[336]),this->_literals[337]),this->_literals[338]))?([&]()->V{j::Args _array59570;for(const auto &_value:j::elements(j::get(j::get(j::get(_v_52095_f,this->_literals[336]),this->_literals[337]),this->_literals[338])))_array59570.push_back(_value);return j::array(std::move(_array59570));})():j::builtin("undefined")));
return V{};
},1)};return j::call(_method,_params59573,_receiver59571);})();
_v_52099_maps.get()=([&]()->V{j::Args _array59574;return j::array(std::move(_array59574));})();
_v_52100_inkAt.get()=V::null();
if(j::truth(([&]()->V{V _logical59575=j::get(_v_52081_o,this->_literals[141]);return j::truth(_logical59575)?([&]()->V{V _logical59576=([&]()->V{V _lhs59577=j::get(_v_52092_mine.get(),this->_literals[5]);V _rhs59578=V(0.0);return j::binary(">",_lhs59577,_rhs59578);})();return !j::truth(_logical59576)?([&]()->V{V _receiver59579=_v_52093_lists;V _method59580=this->_literals[58];V _method=j::get(_receiver59579,_method59580);j::Args _params59581=j::Args{j::builtin("Boolean")};return j::call(_method,_params59581,_receiver59579);})():_logical59576;})():_logical59575;})())){
V _v_52101_m;
_v_52101_m=([&]()->V{V _callee59583=this->_v_50455_mergePalettes.get();return j::call(_callee59583,j::Args{([&]()->V{j::Args _array59582;_array59582.push_back((j::truth(j::get(_v_52092_mine.get(),this->_literals[5]))?_v_52092_mine.get():j::builtin("undefined")));for(const auto &_value:j::elements(_v_52093_lists))_array59582.push_back(_value);return j::array(std::move(_array59582));})()});})();
(void)((_v_52098_palette.get()=j::get(_v_52101_m,this->_literals[338])));
(void)((_v_52099_maps.get()=j::get(_v_52101_m,this->_literals[339])));
(void)((_v_52100_inkAt.get()=j::get(_v_52101_m,this->_literals[254])));

}

_v_52102_slotIndex.get()=j::function([=](const j::Args &_args_fn52103,const V &_receiver_fn52103,const V &_self_fn52103) mutable ->V{
V _v_52104_slot;
V _v_52105_paper;
_v_52104_slot=_args_fn52103[0];
_v_52105_paper=_args_fn52103[1];
return j::get(j::get(_v_52099_maps.get(),V(0.0)),([&]()->V{V _lhs59587=(j::truth(_v_52105_paper)?V(0.0):j::get(j::get(_v_52082_p.get(),this->_literals[223]),this->_literals[5]));V _rhs59588=_v_52104_slot;return j::binary("+",_lhs59587,_rhs59588);})());
return V{};
},2);
_v_52106_inkIndex.get()=j::function([=](const j::Args &_args_fn52107,const V &_receiver_fn52107,const V &_self_fn52107) mutable ->V{
V _v_52108_paper;
_v_52108_paper=_args_fn52107[0];
return (j::truth(_v_52100_inkAt.get())?(j::truth(_v_52108_paper)?j::get(_v_52100_inkAt.get(),this->_literals[223]):j::get(_v_52100_inkAt.get(),this->_literals[224])):(j::truth(j::get(_v_52092_mine.get(),this->_literals[5]))?([&]()->V{V _callee59589=_v_52102_slotIndex.get();return j::call(_callee59589,j::Args{V(0.0),_v_52108_paper});})():V(0.0)));
return V{};
},1);
_v_52109_indexOf.get()=j::function([=](const j::Args &_args_fn52110,const V &_receiver_fn52110,const V &_self_fn52110) mutable ->V{
j::Cell _v_52111_n;
j::Cell _v_52112_f;
_v_52111_n.get()=_args_fn52110[0];
_v_52112_f.get()=_args_fn52110[1];
return j::function([=](const j::Args &_args_fn52113,const V &_receiver_fn52113,const V &_self_fn52113) mutable ->V{
V _v_52114_i;
V _v_52115_paper;
_v_52114_i=_args_fn52113[0];
_v_52115_paper=_args_fn52113[1];
{
V _v_52116_map;
_v_52116_map=j::get(_v_52099_maps.get(),([&]()->V{V _lhs59590=_v_52111_n.get();V _rhs59591=V(1.0);return j::binary("+",_lhs59590,_rhs59591);})());
if(j::truth(([&]()->V{V _logical59592=j::unary("!",_v_52098_palette.get());return !j::truth(_logical59592)?j::unary("!",_v_52116_map):_logical59592;})())){return this->_v_50442_NONE.get();
}
if(j::truth(j::get(_v_52112_f.get(),this->_literals[211]))){return ([&]()->V{V _logical59593=j::get(_v_52116_map,([&]()->V{V _lhs59594=(j::truth(_v_52115_paper)?V(0.0):j::get(j::get(j::get(j::get(_v_52112_f.get(),this->_literals[211]),this->_literals[222]),this->_literals[223]),this->_literals[5]));V _rhs59595=([&]()->V{V _receiver59600=j::builtin("Math");V _method59601=this->_literals[116];V _method=j::get(_receiver59600,_method59601);j::Args _params59602=j::Args{_v_52114_i,([&]()->V{V _lhs59596=j::get(j::get(j::get(j::get(_v_52112_f.get(),this->_literals[211]),this->_literals[222]),this->_literals[223]),this->_literals[5]);V _rhs59597=V(1.0);return V(j::number(_lhs59596)-j::number(_rhs59597));})()};return j::call(_method,_params59602,_receiver59600);})();return j::binary("+",_lhs59594,_rhs59595);})());return j::nullish(_logical59593)?this->_v_50442_NONE.get():_logical59593;})();
}
return (j::truth(([&]()->V{V _lhs59603=_v_52114_i;V _rhs59604=this->_v_50442_NONE.get();return V(j::equal(_lhs59603,_rhs59604,true));})())?([&]()->V{V _callee59605=_v_52106_inkIndex.get();return j::call(_callee59605,j::Args{_v_52115_paper});})():([&]()->V{V _logical59606=j::get(_v_52116_map,_v_52114_i);return j::nullish(_logical59606)?this->_v_50442_NONE.get():_logical59606;})());

}

return V{};
},2);
return V{};
},2);
_v_52117_loops=([&]()->V{j::Args _array59607;for(const auto &_value:j::elements(j::get(_v_52082_p.get(),this->_literals[289])))_array59607.push_back(_value);return j::array(std::move(_array59607));})();
_v_52118_unknown=V(false);
{for(const auto &_item59608:j::elements(_v_52087_sources.get())){V _v_52119_f;
_v_52119_f=_item59608;
{
V _v_52120_l;
_v_52120_l=(j::truth(j::get(_v_52119_f,this->_literals[211]))?j::get(j::get(_v_52119_f,this->_literals[211]),this->_literals[193]):j::get(j::get(j::get(_v_52119_f,this->_literals[336]),this->_literals[337]),this->_literals[340]));
if(j::truth(([&]()->V{V _logical59609=([&]()->V{V _logical59610=([&]()->V{V _lhs59611=_v_52120_l;V _rhs59612=j::builtin("undefined");return V(!j::equal(_lhs59611,_rhs59612,true));})();return j::truth(_logical59610)?([&]()->V{V _receiver59613=j::builtin("Number");V _method59614=this->_literals[57];V _method=j::get(_receiver59613,_method59614);j::Args _params59615=j::Args{_v_52120_l};return j::call(_method,_params59615,_receiver59613);})():_logical59610;})();return j::truth(_logical59609)?([&]()->V{V _lhs59616=_v_52120_l;V _rhs59617=V(0.0);return j::binary(">",_lhs59616,_rhs59617);})():_logical59609;})())){(void)(([&]()->V{V _receiver59618=_v_52117_loops;V _method59619=this->_literals[25];V _method=j::get(_receiver59618,_method59619);j::Args _params59620=j::Args{_v_52120_l};return j::call(_method,_params59620,_receiver59618);})());
}else {if(j::truth(([&]()->V{V _logical59621=([&]()->V{V _lhs59622=_v_52120_l;V _rhs59623=j::builtin("Infinity");return V(j::equal(_lhs59622,_rhs59623,true));})();return !j::truth(_logical59621)?([&]()->V{V _logical59624=([&]()->V{V _logical59625=j::get(_v_52119_f,this->_literals[336]);return j::truth(_logical59625)?([&]()->V{V _lhs59626=j::get(j::get(j::get(_v_52119_f,this->_literals[336]),this->_literals[337]),this->_literals[299]);V _rhs59627=V(0.0);return j::binary(">",_lhs59626,_rhs59627);})():_logical59625;})();return j::truth(_logical59624)?j::unary("!",j::get(j::get(_v_52082_p.get(),this->_literals[289]),this->_literals[5])):_logical59624;})():_logical59621;})())){(void)((_v_52118_unknown=V(true)));
}
}

}
}}
_v_52121_moving=([&]()->V{V _logical59629=j::get(_v_52082_p.get(),this->_literals[288]);return !j::truth(_logical59629)?([&]()->V{V _receiver59634=_v_52087_sources.get();V _method59635=this->_literals[58];V _method=j::get(_receiver59634,_method59635);j::Args _params59636=j::Args{j::function([=](const j::Args &_args_fn52122,const V &_receiver_fn52122,const V &_self_fn52122) mutable ->V{
V _v_52123_f;
_v_52123_f=_args_fn52122[0];
return (j::truth(j::get(_v_52123_f,this->_literals[336]))?([&]()->V{V _lhs59630=j::get(j::get(j::get(_v_52123_f,this->_literals[336]),this->_literals[337]),this->_literals[299]);V _rhs59631=V(0.0);return j::binary(">",_lhs59630,_rhs59631);})():([&]()->V{V _lhs59632=j::get(j::get(_v_52123_f,this->_literals[211]),this->_literals[193]);V _rhs59633=j::builtin("undefined");return V(!j::equal(_lhs59632,_rhs59633,true));})());
return V{};
},1)};return j::call(_method,_params59636,_receiver59634);})():_logical59629;})();
_v_52124_loop=(j::truth(([&]()->V{V _logical59637=_v_52121_moving;return j::truth(_logical59637)?j::unary("!",_v_52118_unknown):_logical59637;})())?([&]()->V{V _callee59638=this->_v_51231_loopOf.get();return j::call(_callee59638,j::Args{_v_52117_loops});})():j::builtin("undefined"));
_v_52125_name=([&]()->V{V _receiver59639=([&]()->V{V _receiver59642=([&]()->V{V _receiver59645=([&]()->V{V _logical59648=([&]()->V{V _logical59649=j::get(_v_52083_opts,this->_literals[0]);return j::nullish(_logical59649)?j::get(_v_52080_doc,this->_literals[125]):_logical59649;})();return j::nullish(_logical59648)?this->_literals[341]:_logical59648;})();V _method59646=this->_literals[21];V _method=j::get(_receiver59645,_method59646);j::Args _params59647=j::Args{};return j::call(_method,_params59647,_receiver59645);})();V _method59643=this->_literals[29];V _method=j::get(_receiver59642,_method59643);j::Args _params59644=j::Args{};return j::call(_method,_params59644,_receiver59642);})();V _method59640=this->_literals[8];V _method=j::get(_receiver59639,_method59640);j::Args _params59641=j::Args{V(0.0),V(72.0)};return j::call(_method,_params59641,_receiver59639);})();
return ([&]()->V{V _callee59707=this->_v_50456_piece.get();return j::call(_callee59707,j::Args{([&]()->V{V _obj59650=j::object();j::put(_obj59650,this->_literals[0],_v_52125_name);j::put(_obj59650,this->_literals[297],j::get(_v_52083_opts,this->_literals[297]));j::put(_obj59650,this->_literals[298],([&]()->V{V _logical59651=j::get(_v_52083_opts,this->_literals[298]);return j::nullish(_logical59651)?this->_literals[179]:_logical59651;})());j::put(_obj59650,this->_literals[251],j::get(_v_52082_p.get(),this->_literals[251]));j::put(_obj59650,this->_literals[252],j::get(_v_52082_p.get(),this->_literals[252]));j::put(_obj59650,this->_literals[299],([&]()->V{V _logical59652=_v_52084_fps;return j::nullish(_logical59652)?(j::truth(_v_52121_moving)?V(30.0):V(0.0)):_logical59652;})());V _spread59653=(j::truth(_v_52098_palette.get())?([&]()->V{V _obj59654=j::object();j::put(_obj59654,this->_literals[338],_v_52098_palette.get());j::put(_obj59654,this->_literals[254],([&]()->V{V _obj59655=j::object();j::put(_obj59655,this->_literals[223],([&]()->V{V _callee59656=_v_52106_inkIndex.get();return j::call(_callee59656,j::Args{V(true)});})());j::put(_obj59655,this->_literals[224],([&]()->V{V _callee59657=_v_52106_inkIndex.get();return j::call(_callee59657,j::Args{V(false)});})());return _obj59655;})());return _obj59654;})():([&]()->V{V _obj59658=j::object();return _obj59658;})());for(const auto &_key:j::keys(_spread59653))j::put(_obj59650,_key,j::get(_spread59653,_key));V _spread59659=(j::truth(([&]()->V{V _lhs59660=j::get(_v_52083_opts,this->_literals[301]);V _rhs59661=j::builtin("undefined");return V(!j::equal(_lhs59660,_rhs59661,true));})())?([&]()->V{V _obj59662=j::object();j::put(_obj59662,this->_literals[301],j::get(_v_52083_opts,this->_literals[301]));return _obj59662;})():([&]()->V{V _obj59663=j::object();return _obj59663;})());for(const auto &_key:j::keys(_spread59659))j::put(_obj59650,_key,j::get(_spread59659,_key));V _spread59664=(j::truth(([&]()->V{V _lhs59665=_v_52124_loop;V _rhs59666=j::builtin("undefined");return V(!j::equal(_lhs59665,_rhs59666,true));})())?([&]()->V{V _obj59667=j::object();j::put(_obj59667,this->_literals[340],_v_52124_loop);return _obj59667;})():([&]()->V{V _obj59668=j::object();return _obj59668;})());for(const auto &_key:j::keys(_spread59664))j::put(_obj59650,_key,j::get(_spread59664,_key));V _spread59669=(j::truth(([&]()->V{V _lhs59670=_v_52085_still;V _rhs59671=j::builtin("undefined");return V(!j::equal(_lhs59670,_rhs59671,true));})())?([&]()->V{V _obj59672=j::object();j::put(_obj59672,this->_literals[300],_v_52085_still);return _obj59672;})():(j::truth(([&]()->V{V _lhs59673=j::get(_v_52082_p.get(),this->_literals[290]);V _rhs59674=j::builtin("undefined");return V(!j::equal(_lhs59673,_rhs59674,true));})())?([&]()->V{V _obj59675=j::object();j::put(_obj59675,this->_literals[300],([&]()->V{V _lhs59676=([&]()->V{V _number59680=([&]()->V{V _lhs59681=j::get(_v_52082_p.get(),this->_literals[290]);V _rhs59682=V(1000.0);return V(j::number(_lhs59681)*j::number(_rhs59682));})();return V(std::floor(j::number(_number59680)+.5));})();V _rhs59677=V(1000.0);return V(j::number(_lhs59676)/j::number(_rhs59677));})());return _obj59675;})():([&]()->V{V _obj59683=j::object();return _obj59683;})()));for(const auto &_key:j::keys(_spread59669))j::put(_obj59650,_key,j::get(_spread59669,_key));return _obj59650;})(),([&]()->V{V _obj59684=j::object();j::put(_obj59684,this->_literals[342],j::function([=](const j::Args &_args_fn52126,const V &_receiver_fn52126,const V &_self_fn52126) mutable ->V{
{
j::Cell _v_52127_drawer;
j::Cell _v_52128_fills;
_v_52127_drawer.get()=([&]()->V{V _receiver59685=_v_52082_p.get();V _method59686=this->_literals[292];V _method=j::get(_receiver59685,_method59686);j::Args _params59687=j::Args{};return j::call(_method,_params59687,_receiver59685);})();
_v_52128_fills.get()=([&]()->V{V _receiver59691=_v_52087_sources.get();V _method59692=this->_literals[41];V _method=j::get(_receiver59691,_method59692);j::Args _params59693=j::Args{j::function([=](const j::Args &_args_fn52129,const V &_receiver_fn52129,const V &_self_fn52129) mutable ->V{
V _v_52130_f;
V _v_52131_n;
_v_52130_f=_args_fn52129[0];
_v_52131_n=_args_fn52129[1];
return ([&]()->V{V _obj59688=j::object();j::put(_obj59688,this->_literals[235],j::get(_v_52130_f,this->_literals[235]));j::put(_obj59688,this->_literals[211],j::get(_v_52130_f,this->_literals[211]));j::put(_obj59688,this->_literals[330],(j::truth(j::get(_v_52130_f,this->_literals[336]))?([&]()->V{V _callee59689=this->_v_50458_sample.get();return j::call(_callee59689,j::Args{j::get(_v_52130_f,this->_literals[336])});})():V::null()));j::put(_obj59688,this->_literals[270],j::get(_v_52130_f,this->_literals[270]));j::put(_obj59688,this->_literals[286],V::null());j::put(_obj59688,this->_literals[312],V::null());j::put(_obj59688,this->_literals[328],V::null());j::put(_obj59688,this->_literals[334],V::null());j::put(_obj59688,this->_literals[169],([&]()->V{V _callee59690=_v_52109_indexOf.get();return j::call(_callee59690,j::Args{_v_52131_n,_v_52130_f});})());return _obj59688;})();
return V{};
},2)};return j::call(_method,_params59693,_receiver59691);})();
return j::function([=](const j::Args &_args_fn52132,const V &_receiver_fn52132,const V &_self_fn52132) mutable ->V{
V _v_52133_t;
V _v_52134_s;
V _v_52135_ctx;
_v_52133_t=_args_fn52132[0];
_v_52134_s=_args_fn52132[1];
_v_52135_ctx=_args_fn52132[2];
{
V _v_52136_r;
_v_52136_r=([&]()->V{V _receiver59694=_v_52127_drawer.get();V _method59695=this->_literals[280];V _method=j::get(_receiver59694,_method59695);j::Args _params59696=j::Args{_v_52133_t,j::get(_v_52135_ctx,this->_literals[282])};return j::call(_method,_params59696,_receiver59694);})();
{V _v_52137_k;
_v_52137_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs59697=_v_52137_k;V _rhs59698=j::get(j::get(_v_52136_r,this->_literals[284]),this->_literals[5]);return j::binary("<",_lhs59697,_rhs59698);})());(void)(j::increment(_v_52137_k,1,false))){(void)(([&]()->V{V _receiver59703=_v_52134_s;V _method59704=this->_literals[333];V _method=j::get(_receiver59703,_method59704);j::Args _params59705=j::Args{_v_52137_k,j::get(j::get(_v_52136_r,this->_literals[284]),_v_52137_k),(j::truth(([&]()->V{V _logical59699=([&]()->V{V _lhs59700=j::get(j::get(_v_52136_r,this->_literals[285]),_v_52137_k);V _rhs59701=V(0.0);return j::binary("<",_lhs59700,_rhs59701);})();return !j::truth(_logical59699)?j::unary("!",_v_52098_palette.get()):_logical59699;})())?this->_v_50442_NONE.get():([&]()->V{V _callee59702=_v_52102_slotIndex.get();return j::call(_callee59702,j::Args{j::get(j::get(_v_52136_r,this->_literals[285]),_v_52137_k),j::get(_v_52135_ctx,this->_literals[331])});})())};return j::call(_method,_params59705,_receiver59703);})());
}}
if(j::truth(j::get(_v_52128_fills.get(),this->_literals[5]))){(void)(([&]()->V{V _callee59706=this->_v_52045_fillParts.get();return j::call(_callee59706,j::Args{_v_52134_s,V(0.0),V(0.0),j::get(_v_52082_p.get(),this->_literals[251]),j::get(_v_52082_p.get(),this->_literals[252]),_v_52136_r,_v_52133_t,_v_52128_fills.get()});})());
}

}

return V{};
},3);

}

return V{};
},0));return _obj59684;})()});})();

}

return V{};
},1);
this->_v_52150_svgPalette.get()=j::function([=](const j::Args &_args_fn52151,const V &_receiver_fn52151,const V &_self_fn52151) mutable ->V{
V _v_52152_svg;
V _v_52153_options;
_v_52152_svg=_args_fn52151[0];
V _default59708=_args_fn52151[1];if(_default59708.kind==V::Undefined||_default59708.kind==V::Hole)_default59708=([&]()->V{V _obj59709=j::object();return _obj59709;})();
_v_52153_options=_default59708;
{
V _v_52154__;
V _v_52155_rest;
V _v_52156_o;
V _v_52157_p;
V _pattern59711=([&]()->V{V _callee59710=this->_v_51923_drawOptions.get();return j::call(_callee59710,j::Args{_v_52153_options,this->_literals[343]});})();
_v_52154__=j::get(_pattern59711,this->_literals[302]);
_v_52155_rest=j::object_rest(_pattern59711,{j::string(this->_literals[302])});
_v_52156_o=([&]()->V{V _callee59712=this->_v_51899_planOptions.get();return j::call(_callee59712,j::Args{_v_52155_rest,V(true),V(2.0)});})();
_v_52157_p=([&]()->V{V _callee59716=this->_v_51336_plan.get();return j::call(_callee59716,j::Args{([&]()->V{V _callee59713=this->_v_51930_svgOf.get();return j::call(_callee59713,j::Args{_v_52152_svg});})(),([&]()->V{V _obj59714=j::object();V _spread59715=_v_52156_o;for(const auto &_key:j::keys(_spread59715))j::put(_obj59714,_key,j::get(_spread59715,_key));j::put(_obj59714,this->_literals[251],V(48.0));j::put(_obj59714,this->_literals[252],V(24.0));return _obj59714;})()});})();
return (j::truth(j::get(j::get(_v_52157_p,this->_literals[223]),this->_literals[5]))?([&]()->V{V _obj59717=j::object();j::put(_obj59717,this->_literals[223],j::get(_v_52157_p,this->_literals[223]));j::put(_obj59717,this->_literals[224],j::get(_v_52157_p,this->_literals[224]));return _obj59717;})():j::builtin("undefined"));

}

return V{};
},1);
this->_v_52158_drawSvg.get()=j::function([=](const j::Args &_args_fn52159,const V &_receiver_fn52159,const V &_self_fn52159) mutable ->V{
V _v_52160_s;
V _v_52161_svg;
V _v_52162_t;
V _v_52163_options;
_v_52160_s=_args_fn52159[0];
_v_52161_svg=_args_fn52159[1];
_v_52162_t=_args_fn52159[2];
V _default59718=_args_fn52159[3];if(_default59718.kind==V::Undefined||_default59718.kind==V::Hole)_default59718=([&]()->V{V _obj59719=j::object();return _obj59719;})();
_v_52163_options=_default59718;
{
V _v_52164_doc;
V _v_52165_region;
V _v_52166_key;
V _v_52167_byKey;
V _v_52168_entry;
V _v_52186_p;
V _v_52187_drawer;
V _v_52188_fills;
V _v_52189_r;
V _v_52190_theme;
if(j::truth(j::unary("!",([&]()->V{V _lhs59720=_v_52160_s;V _rhs59721=this->_v_50443_Surface.get();return j::binary("instanceof",_lhs59720,_rhs59721);})()))){(void)(([&]()->V{V _callee59722=this->_v_50450_fail.get();return j::call(_callee59722,j::Args{this->_literals[344]});})());
}
if(j::truth(([&]()->V{V _lhs59723=j::unary("typeof",_v_52161_svg);V _rhs59724=this->_literals[117];return V(j::equal(_lhs59723,_rhs59724,true));})())){
(void)((_v_52164_doc=([&]()->V{V _logical59726=([&]()->V{V _receiver59727=this->_v_52138_parsed.get();V _method59728=this->_literals[54];V _method=j::get(_receiver59727,_method59728);j::Args _params59729=j::Args{_v_52161_svg};return j::call(_method,_params59729,_receiver59727);})();return j::nullish(_logical59726)?([&]()->V{V _callee59730=this->_v_50815_parseSvg.get();return j::call(_callee59730,j::Args{_v_52161_svg});})():_logical59726;})()));
if(j::truth(j::unary("!",([&]()->V{V _receiver59731=this->_v_52138_parsed.get();V _method59732=this->_literals[30];V _method=j::get(_receiver59731,_method59732);j::Args _params59733=j::Args{_v_52161_svg};return j::call(_method,_params59733,_receiver59731);})()))){
if(j::truth(([&]()->V{V _lhs59734=j::get(this->_v_52138_parsed.get(),this->_literals[229]);V _rhs59735=V(16.0);return j::binary(">=",_lhs59734,_rhs59735);})())){(void)(([&]()->V{V _receiver59742=this->_v_52138_parsed.get();V _method59743=this->_literals[148];V _method=j::get(_receiver59742,_method59743);j::Args _params59744=j::Args{j::get(([&]()->V{V _receiver59736=([&]()->V{V _receiver59739=this->_v_52138_parsed.get();V _method59740=this->_literals[214];V _method=j::get(_receiver59739,_method59740);j::Args _params59741=j::Args{};return j::call(_method,_params59741,_receiver59739);})();V _method59737=this->_literals[345];V _method=j::get(_receiver59736,_method59737);j::Args _params59738=j::Args{};return j::call(_method,_params59738,_receiver59736);})(),this->_literals[346])};return j::call(_method,_params59744,_receiver59742);})());
}
(void)(([&]()->V{V _receiver59745=this->_v_52138_parsed.get();V _method59746=this->_literals[123];V _method=j::get(_receiver59745,_method59746);j::Args _params59747=j::Args{_v_52161_svg,_v_52164_doc};return j::call(_method,_params59747,_receiver59745);})());

}


}
else {(void)((_v_52164_doc=([&]()->V{V _callee59749=this->_v_51930_svgOf.get();return j::call(_callee59749,j::Args{_v_52161_svg});})()));
}
_v_52165_region=([&]()->V{V _receiver59751=_v_52160_s;V _method59752=this->_literals[347];V _method=j::get(_receiver59751,_method59752);j::Args _params59753=j::Args{j::get(([&]()->V{V _callee59750=this->_v_51923_drawOptions.get();return j::call(_callee59750,j::Args{_v_52163_options,this->_literals[295]});})(),this->_literals[302])};return j::call(_method,_params59753,_receiver59751);})();
if(j::truth(([&]()->V{V _logical59754=j::unary("!",j::get(_v_52165_region,this->_literals[251]));return !j::truth(_logical59754)?j::unary("!",j::get(_v_52165_region,this->_literals[252])):_logical59754;})())){return V{};
}
_v_52166_key=([&]()->V{V _callee59755=this->_v_52142_keyOf.get();return j::call(_callee59755,j::Args{_v_52163_options,_v_52160_s,_v_52165_region});})();
_v_52167_byKey=([&]()->V{V _receiver59756=this->_v_52139_plans.get();V _method59757=this->_literals[54];V _method=j::get(_receiver59756,_method59757);j::Args _params59758=j::Args{_v_52164_doc};return j::call(_method,_params59758,_receiver59756);})();
if(j::truth(j::unary("!",_v_52167_byKey))){(void)(([&]()->V{V _receiver59761=this->_v_52139_plans.get();V _method59762=this->_literals[123];V _method=j::get(_receiver59761,_method59762);j::Args _params59763=j::Args{_v_52164_doc,(_v_52167_byKey=([&]()->V{V _callee59760=j::builtin("Map");return j::construct(_callee59760,j::Args{});})())};return j::call(_method,_params59763,_receiver59761);})());
}
_v_52168_entry=([&]()->V{V _receiver59764=_v_52167_byKey;V _method59765=this->_literals[54];V _method=j::get(_receiver59764,_method59765);j::Args _params59766=j::Args{_v_52166_key};return j::call(_method,_params59766,_receiver59764);})();
if(j::truth(j::unary("!",_v_52168_entry))){
V _v_52169__;
V _v_52170_rest;
V _v_52171_o;
V _v_52172_p;
j::Cell _v_52173_made;
j::Cell _v_52174_find;
V _pattern59767=_v_52163_options;
_v_52169__=j::get(_pattern59767,this->_literals[302]);
_v_52170_rest=j::object_rest(_pattern59767,{j::string(this->_literals[302])});
_v_52171_o=([&]()->V{V _callee59768=this->_v_51899_planOptions.get();return j::call(_callee59768,j::Args{_v_52170_rest,V(true),j::get(_v_52160_s,this->_literals[231])});})();
(void)(([&]()->V{V _base59770=_v_52171_o;V _key59771=this->_literals[251];V _assign59769=j::get(_v_52165_region,this->_literals[251]);return j::put(_base59770,_key59771,_assign59769);})());
(void)(([&]()->V{V _base59773=_v_52171_o;V _key59774=this->_literals[252];V _assign59772=j::get(_v_52165_region,this->_literals[252]);return j::put(_base59773,_key59774,_assign59772);})());
_v_52172_p=([&]()->V{V _callee59775=this->_v_51336_plan.get();return j::call(_callee59775,j::Args{_v_52164_doc,_v_52171_o});})();
_v_52173_made.get()=([&]()->V{V _obj59776=j::object();j::put(_obj59776,this->_literals[348],_v_52172_p);j::put(_obj59776,this->_literals[349],([&]()->V{V _receiver59777=_v_52172_p;V _method59778=this->_literals[292];V _method=j::get(_receiver59777,_method59778);j::Args _params59779=j::Args{};return j::call(_method,_params59779,_receiver59777);})());j::put(_obj59776,this->_literals[350],([&]()->V{j::Args _array59780;return j::array(std::move(_array59780));})());j::put(_obj59776,this->_literals[351],V::null());return _obj59776;})();
_v_52174_find.get()=j::function([=](const j::Args &_args_fn52175,const V &_receiver_fn52175,const V &_self_fn52175) mutable ->V{
V _v_52176_c;
_v_52176_c=_args_fn52175[0];
return (j::truth(([&]()->V{V _logical59781=([&]()->V{V _chain59782=_v_52173_made.get();V _chain59783=j::get(_chain59782,this->_literals[351]);if(j::nullish(_chain59783))return V{};V _chain59784=j::get(_chain59783,this->_literals[338]);return _chain59784;})();return j::truth(_logical59781)?_v_52176_c:_logical59781;})())?([&]()->V{V _receiver59785=j::get(_v_52173_made.get(),this->_literals[351]);V _method59786=this->_literals[352];V _method=j::get(_receiver59785,_method59786);j::Args _params59787=j::Args{_v_52176_c};return j::call(_method,_params59787,_receiver59785);})():this->_v_50442_NONE.get());
return V{};
},1);
(void)(([&]()->V{V _base59789=_v_52173_made.get();V _key59790=this->_literals[350];V _assign59788=([&]()->V{V _receiver59800=j::get(_v_52172_p,this->_literals[291]);V _method59801=this->_literals[41];V _method=j::get(_receiver59800,_method59801);j::Args _params59802=j::Args{j::function([=](const j::Args &_args_fn52177,const V &_receiver_fn52177,const V &_self_fn52177) mutable ->V{
V _v_52178_part;
V _v_52179_material;
V _v_52180_moves;
V _pattern59791=_args_fn52177[0];
_v_52178_part=j::get(_pattern59791,this->_literals[235]);
_v_52179_material=j::get(_pattern59791,this->_literals[211]);
_v_52180_moves=j::get(_pattern59791,this->_literals[270]);
{
j::Cell _v_52181_m;
j::Cell _v_52182_sampler;
_v_52181_m.get()=(j::truth(([&]()->V{V _callee59792=this->_v_50985_isPartMaterial.get();return j::call(_callee59792,j::Args{_v_52179_material});})())?_v_52179_material:V::null());
_v_52182_sampler.get()=(j::truth(_v_52181_m.get())?V::null():([&]()->V{V _callee59793=this->_v_50458_sample.get();return j::call(_callee59793,j::Args{_v_52179_material});})());
return ([&]()->V{V _obj59794=j::object();j::put(_obj59794,this->_literals[235],_v_52178_part);j::put(_obj59794,this->_literals[211],_v_52181_m.get());j::put(_obj59794,this->_literals[330],_v_52182_sampler.get());j::put(_obj59794,this->_literals[270],_v_52180_moves);j::put(_obj59794,this->_literals[286],V::null());j::put(_obj59794,this->_literals[312],V::null());j::put(_obj59794,this->_literals[328],V::null());j::put(_obj59794,this->_literals[334],V::null());j::put(_obj59794,this->_literals[169],j::function([=](const j::Args &_args_fn52183,const V &_receiver_fn52183,const V &_self_fn52183) mutable ->V{
V _v_52184_i;
V _v_52185_paper;
_v_52184_i=_args_fn52183[0];
_v_52185_paper=_args_fn52183[1];
return (j::truth(_v_52181_m.get())?([&]()->V{V _callee59795=_v_52174_find.get();return j::call(_callee59795,j::Args{j::get((j::truth(_v_52185_paper)?j::get(j::get(_v_52181_m.get(),this->_literals[222]),this->_literals[223]):j::get(j::get(_v_52181_m.get(),this->_literals[222]),this->_literals[224])),_v_52184_i)});})():(j::truth(([&]()->V{V _logical59796=([&]()->V{V _lhs59797=_v_52184_i;V _rhs59798=this->_v_50442_NONE.get();return V(j::equal(_lhs59797,_rhs59798,true));})();return !j::truth(_logical59796)?j::unary("!",j::get(_v_52182_sampler.get(),this->_literals[338])):_logical59796;})())?this->_v_50442_NONE.get():([&]()->V{V _callee59799=_v_52174_find.get();return j::call(_callee59799,j::Args{j::get(j::get(_v_52182_sampler.get(),this->_literals[338]),_v_52184_i)});})()));
return V{};
},2));return _obj59794;})();

}

return V{};
},1)};return j::call(_method,_params59802,_receiver59800);})();return j::put(_base59789,_key59790,_assign59788);})());
(void)((_v_52168_entry=_v_52173_made.get()));
if(j::truth(([&]()->V{V _lhs59804=j::get(_v_52167_byKey,this->_literals[229]);V _rhs59805=V(8.0);return j::binary(">=",_lhs59804,_rhs59805);})())){(void)(([&]()->V{V _receiver59812=_v_52167_byKey;V _method59813=this->_literals[148];V _method=j::get(_receiver59812,_method59813);j::Args _params59814=j::Args{j::get(([&]()->V{V _receiver59806=([&]()->V{V _receiver59809=_v_52167_byKey;V _method59810=this->_literals[214];V _method=j::get(_receiver59809,_method59810);j::Args _params59811=j::Args{};return j::call(_method,_params59811,_receiver59809);})();V _method59807=this->_literals[345];V _method=j::get(_receiver59806,_method59807);j::Args _params59808=j::Args{};return j::call(_method,_params59808,_receiver59806);})(),this->_literals[346])};return j::call(_method,_params59814,_receiver59812);})());
}
(void)(([&]()->V{V _receiver59815=_v_52167_byKey;V _method59816=this->_literals[123];V _method=j::get(_receiver59815,_method59816);j::Args _params59817=j::Args{_v_52166_key,_v_52168_entry};return j::call(_method,_params59817,_receiver59815);})());

}

V _pattern59818=_v_52168_entry;
_v_52186_p=j::get(_pattern59818,this->_literals[348]);
_v_52187_drawer=j::get(_pattern59818,this->_literals[349]);
_v_52188_fills=j::get(_pattern59818,this->_literals[350]);
(void)(([&]()->V{V _base59820=_v_52168_entry;V _key59821=this->_literals[351];V _assign59819=_v_52160_s;return j::put(_base59820,_key59821,_assign59819);})());
_v_52189_r=([&]()->V{V _receiver59826=_v_52187_drawer;V _method59827=this->_literals[280];V _method=j::get(_receiver59826,_method59827);j::Args _params59828=j::Args{(j::truth(([&]()->V{V _receiver59822=j::builtin("Number");V _method59823=this->_literals[57];V _method=j::get(_receiver59822,_method59823);j::Args _params59824=j::Args{_v_52162_t};return j::call(_method,_params59824,_receiver59822);})())?_v_52162_t:V(0.0)),([&]()->V{V _logical59825=j::get(_v_52160_s,this->_literals[282]);return !j::truth(_logical59825)?j::unary("!",j::get(j::get(_v_52186_p,this->_literals[223]),this->_literals[5])):_logical59825;})()};return j::call(_method,_params59828,_receiver59826);})();
_v_52190_theme=(j::truth(j::get(_v_52160_s,this->_literals[331]))?j::get(_v_52186_p,this->_literals[223]):j::get(_v_52186_p,this->_literals[224]));
{V _v_52191_y;
_v_52191_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs59829=_v_52191_y;V _rhs59830=j::get(_v_52186_p,this->_literals[252]);return j::binary("<",_lhs59829,_rhs59830);})());(void)(j::increment(_v_52191_y,1,false))){{V _v_52192_x;
_v_52192_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs59831=_v_52192_x;V _rhs59832=j::get(_v_52186_p,this->_literals[251]);return j::binary("<",_lhs59831,_rhs59832);})());(void)(j::increment(_v_52192_x,1,false))){
V _v_52193_k;
V _v_52194_i;
_v_52193_k=([&]()->V{V _lhs59833=([&]()->V{V _lhs59835=_v_52191_y;V _rhs59836=j::get(_v_52186_p,this->_literals[251]);return V(j::number(_lhs59835)*j::number(_rhs59836));})();V _rhs59834=_v_52192_x;return j::binary("+",_lhs59833,_rhs59834);})();
if(j::truth(([&]()->V{V _lhs59837=j::get(j::get(_v_52189_r,this->_literals[284]),_v_52193_k);V _rhs59838=this->_v_50439_EMPTY.get();return V(j::equal(_lhs59837,_rhs59838,true));})())){continue;
}
_v_52194_i=([&]()->V{V _receiver59843=_v_52160_s;V _method59844=this->_literals[169];V _method=j::get(_receiver59843,_method59844);j::Args _params59845=j::Args{([&]()->V{V _lhs59839=j::get(_v_52165_region,this->_literals[98]);V _rhs59840=_v_52192_x;return j::binary("+",_lhs59839,_rhs59840);})(),([&]()->V{V _lhs59841=j::get(_v_52165_region,this->_literals[99]);V _rhs59842=_v_52191_y;return j::binary("+",_lhs59841,_rhs59842);})()};return j::call(_method,_params59845,_receiver59843);})();
if(j::truth(([&]()->V{V _lhs59846=_v_52194_i;V _rhs59847=V(0.0);return j::binary(">=",_lhs59846,_rhs59847);})())){(void)(([&]()->V{V _receiver59854=_v_52160_s;V _method59855=this->_literals[333];V _method=j::get(_receiver59854,_method59855);j::Args _params59856=j::Args{_v_52194_i,j::get(j::get(_v_52189_r,this->_literals[284]),_v_52193_k),(j::truth(([&]()->V{V _logical59848=([&]()->V{V _lhs59849=j::get(j::get(_v_52189_r,this->_literals[285]),_v_52193_k);V _rhs59850=V(0.0);return j::binary("<",_lhs59849,_rhs59850);})();return !j::truth(_logical59848)?j::unary("!",j::get(_v_52160_s,this->_literals[338])):_logical59848;})())?this->_v_50442_NONE.get():([&]()->V{V _receiver59851=_v_52160_s;V _method59852=this->_literals[352];V _method=j::get(_receiver59851,_method59852);j::Args _params59853=j::Args{j::get(_v_52190_theme,j::get(j::get(_v_52189_r,this->_literals[285]),_v_52193_k))};return j::call(_method,_params59853,_receiver59851);})())};return j::call(_method,_params59856,_receiver59854);})());
}

}
}
}}
if(j::truth(j::get(_v_52188_fills,this->_literals[5]))){(void)(([&]()->V{V _callee59857=this->_v_52045_fillParts.get();return j::call(_callee59857,j::Args{_v_52160_s,j::get(_v_52165_region,this->_literals[98]),j::get(_v_52165_region,this->_literals[99]),j::get(_v_52186_p,this->_literals[251]),j::get(_v_52186_p,this->_literals[252]),_v_52189_r,_v_52162_t,_v_52188_fills});})());
}

}

return V{};
},3);
auto &_import1741=j::module("kit/core");
this->_v_50439_EMPTY=_import1741.exported("EMPTY");
this->_v_50440_INK=_import1741.exported("INK");
this->_v_50441_MAX=_import1741.exported("MAX");
this->_v_50442_NONE=_import1741.exported("NONE");
this->_v_50443_Surface=_import1741.exported("Surface");
this->_v_50444_TAU=_import1741.exported("TAU");
this->_v_50445_and=_import1741.exported("and");
this->_v_50446_asPiece=_import1741.exported("asPiece");
this->_v_50447_clamp=_import1741.exported("clamp");
this->_v_50448_code=_import1741.exported("code");
this->_v_50449_named=_import1741.exported("colorOf");
this->_v_50450_fail=_import1741.exported("fail");
this->_v_50451_fract=_import1741.exported("fract");
this->_v_50452_hex=_import1741.exported("hex");
this->_v_50453_isHex=_import1741.exported("isHex");
this->_v_50454_materialColors=_import1741.exported("materialColors");
this->_v_50455_mergePalettes=_import1741.exported("mergePalettes");
this->_v_50456_piece=_import1741.exported("piece");
this->_v_50457_rgb=_import1741.exported("rgb");
this->_v_50458_sample=_import1741.exported("sample");
this->_v_50459_schemes=_import1741.exported("schemes");
this->exports["parseSvg"]=this->_v_50815_parseSvg;
this->exports["partCells"]=this->_v_51933_partCells;
this->exports["fromSvg"]=this->_v_52076_fromSvg;
this->exports["svgPalette"]=this->_v_52150_svgPalette;
this->exports["drawSvg"]=this->_v_52158_drawSvg;
this->_v_50460_NAME.get()=j::regexp(u"[^\\s/>]+","y");
this->_v_50461_ATTR.get()=j::regexp(u"\\s*([^\\s=/>]+)(?:\\s*=\\s*(?:\"([^\"]*)\"|'([^']*)'|([^\\s\"'>]+)))?","y");
this->_v_50462_ENTITY.get()=j::regexp(u"&(#x[0-9a-f]+|#\\d+|amp|lt|gt|quot|apos);","gi");
this->_v_50463_NAMED_ENTITY.get()=([&]()->V{V _obj59858=j::object();j::put(_obj59858,this->_literals[353],this->_literals[354]);j::put(_obj59858,this->_literals[355],this->_literals[6]);j::put(_obj59858,this->_literals[356],this->_literals[19]);j::put(_obj59858,this->_literals[357],this->_literals[358]);j::put(_obj59858,this->_literals[359],this->_literals[322]);return _obj59858;})();
this->_v_50464_codePoint.get()=j::function([=](const j::Args &_args_fn50465,const V &_receiver_fn50465,const V &_self_fn50465) mutable ->V{
V _v_50466_n;
_v_50466_n=_args_fn50465[0];
return ([&]()->V{V _receiver59870=j::builtin("String");V _method59871=this->_literals[360];V _method=j::get(_receiver59870,_method59871);j::Args _params59872=j::Args{(j::truth(([&]()->V{V _logical59859=([&]()->V{V _logical59860=([&]()->V{V _lhs59861=_v_50466_n;V _rhs59862=V(0.0);return j::binary(">=",_lhs59861,_rhs59862);})();return j::truth(_logical59860)?([&]()->V{V _lhs59863=_v_50466_n;V _rhs59864=V(1114111.0);return j::binary("<=",_lhs59863,_rhs59864);})():_logical59860;})();return j::truth(_logical59859)?j::unary("!",([&]()->V{V _logical59865=([&]()->V{V _lhs59866=_v_50466_n;V _rhs59867=V(55296.0);return j::binary(">=",_lhs59866,_rhs59867);})();return j::truth(_logical59865)?([&]()->V{V _lhs59868=_v_50466_n;V _rhs59869=V(57343.0);return j::binary("<=",_lhs59868,_rhs59869);})():_logical59865;})()):_logical59859;})())?_v_50466_n:V(65533.0))};return j::call(_method,_params59872,_receiver59870);})();
return V{};
},1);
this->_v_50467_entities.get()=j::function([=](const j::Args &_args_fn50468,const V &_receiver_fn50468,const V &_self_fn50468) mutable ->V{
V _v_50469_v;
_v_50469_v=_args_fn50468[0];
return ([&]()->V{V _receiver59892=_v_50469_v;V _method59893=this->_literals[31];V _method=j::get(_receiver59892,_method59893);j::Args _params59894=j::Args{this->_v_50462_ENTITY.get(),j::function([=](const j::Args &_args_fn50470,const V &_receiver_fn50470,const V &_self_fn50470) mutable ->V{
V _v_50471__;
V _v_50472_e;
_v_50471__=_args_fn50470[0];
_v_50472_e=_args_fn50470[1];
return (j::truth(([&]()->V{V _lhs59873=j::get(_v_50472_e,V(0.0));V _rhs59874=this->_literals[39];return V(j::equal(_lhs59873,_rhs59874,true));})())?([&]()->V{V _callee59888=this->_v_50464_codePoint.get();return j::call(_callee59888,j::Args{(j::truth(([&]()->V{V _logical59875=([&]()->V{V _lhs59876=j::get(_v_50472_e,V(1.0));V _rhs59877=this->_literals[98];return V(j::equal(_lhs59876,_rhs59877,true));})();return !j::truth(_logical59875)?([&]()->V{V _lhs59878=j::get(_v_50472_e,V(1.0));V _rhs59879=this->_literals[361];return V(j::equal(_lhs59878,_rhs59879,true));})():_logical59875;})())?([&]()->V{V _callee59883=j::builtin("parseInt");return j::call(_callee59883,j::Args{([&]()->V{V _receiver59880=_v_50472_e;V _method59881=this->_literals[8];V _method=j::get(_receiver59880,_method59881);j::Args _params59882=j::Args{V(2.0)};return j::call(_method,_params59882,_receiver59880);})(),V(16.0)});})():([&]()->V{V _callee59887=j::builtin("parseInt");return j::call(_callee59887,j::Args{([&]()->V{V _receiver59884=_v_50472_e;V _method59885=this->_literals[8];V _method=j::get(_receiver59884,_method59885);j::Args _params59886=j::Args{V(1.0)};return j::call(_method,_params59886,_receiver59884);})(),V(10.0)});})())});})():j::get(this->_v_50463_NAMED_ENTITY.get(),([&]()->V{V _receiver59889=_v_50472_e;V _method59890=this->_literals[29];V _method=j::get(_receiver59889,_method59890);j::Args _params59891=j::Args{};return j::call(_method,_params59891,_receiver59889);})()));
return V{};
},2)};return j::call(_method,_params59894,_receiver59892);})();
return V{};
},1);
this->_v_50473_local.get()=j::function([=](const j::Args &_args_fn50474,const V &_receiver_fn50474,const V &_self_fn50474) mutable ->V{
V _v_50475_name;
_v_50475_name=_args_fn50474[0];
return ([&]()->V{V _receiver59895=([&]()->V{V _receiver59903=_v_50475_name;V _method59904=this->_literals[8];V _method=j::get(_receiver59903,_method59904);j::Args _params59905=j::Args{([&]()->V{V _lhs59898=([&]()->V{V _receiver59900=_v_50475_name;V _method59901=this->_literals[7];V _method=j::get(_receiver59900,_method59901);j::Args _params59902=j::Args{this->_literals[28]};return j::call(_method,_params59902,_receiver59900);})();V _rhs59899=V(1.0);return j::binary("+",_lhs59898,_rhs59899);})()};return j::call(_method,_params59905,_receiver59903);})();V _method59896=this->_literals[29];V _method=j::get(_receiver59895,_method59896);j::Args _params59897=j::Args{};return j::call(_method,_params59897,_receiver59895);})();
return V{};
},1);
this->_v_50500_PROPS.get()=([&]()->V{V _callee59907=j::builtin("Set");return j::construct(_callee59907,j::Args{([&]()->V{j::Args _array59906;_array59906.push_back(this->_literals[130]);_array59906.push_back(this->_literals[131]);_array59906.push_back(this->_literals[152]);_array59906.push_back(this->_literals[168]);_array59906.push_back(this->_literals[154]);_array59906.push_back(this->_literals[156]);_array59906.push_back(this->_literals[158]);_array59906.push_back(this->_literals[149]);_array59906.push_back(this->_literals[167]);_array59906.push_back(this->_literals[141]);_array59906.push_back(this->_literals[162]);_array59906.push_back(this->_literals[138]);_array59906.push_back(this->_literals[142]);return j::array(std::move(_array59906));})()});})();
this->_v_50532_NAMED.get()=([&]()->V{V _callee59964=j::builtin("Map");return j::construct(_callee59964,j::Args{([&]()->V{V _receiver59916=([&]()->V{V _receiver59919=([&]()->V{V _lhs59922=([&]()->V{V _lhs59924=([&]()->V{V _lhs59926=([&]()->V{V _lhs59928=([&]()->V{V _lhs59930=([&]()->V{V _lhs59932=([&]()->V{V _lhs59934=([&]()->V{V _lhs59936=([&]()->V{V _lhs59938=([&]()->V{V _lhs59940=([&]()->V{V _lhs59942=([&]()->V{V _lhs59944=([&]()->V{V _lhs59946=([&]()->V{V _lhs59948=([&]()->V{V _lhs59950=([&]()->V{V _lhs59952=([&]()->V{V _lhs59954=([&]()->V{V _lhs59956=([&]()->V{V _lhs59958=([&]()->V{V _lhs59960=([&]()->V{V _lhs59962=this->_literals[362];V _rhs59963=this->_literals[363];return j::binary("+",_lhs59962,_rhs59963);})();V _rhs59961=this->_literals[364];return j::binary("+",_lhs59960,_rhs59961);})();V _rhs59959=this->_literals[365];return j::binary("+",_lhs59958,_rhs59959);})();V _rhs59957=this->_literals[366];return j::binary("+",_lhs59956,_rhs59957);})();V _rhs59955=this->_literals[367];return j::binary("+",_lhs59954,_rhs59955);})();V _rhs59953=this->_literals[368];return j::binary("+",_lhs59952,_rhs59953);})();V _rhs59951=this->_literals[369];return j::binary("+",_lhs59950,_rhs59951);})();V _rhs59949=this->_literals[370];return j::binary("+",_lhs59948,_rhs59949);})();V _rhs59947=this->_literals[371];return j::binary("+",_lhs59946,_rhs59947);})();V _rhs59945=this->_literals[372];return j::binary("+",_lhs59944,_rhs59945);})();V _rhs59943=this->_literals[373];return j::binary("+",_lhs59942,_rhs59943);})();V _rhs59941=this->_literals[374];return j::binary("+",_lhs59940,_rhs59941);})();V _rhs59939=this->_literals[375];return j::binary("+",_lhs59938,_rhs59939);})();V _rhs59937=this->_literals[376];return j::binary("+",_lhs59936,_rhs59937);})();V _rhs59935=this->_literals[377];return j::binary("+",_lhs59934,_rhs59935);})();V _rhs59933=this->_literals[378];return j::binary("+",_lhs59932,_rhs59933);})();V _rhs59931=this->_literals[379];return j::binary("+",_lhs59930,_rhs59931);})();V _rhs59929=this->_literals[380];return j::binary("+",_lhs59928,_rhs59929);})();V _rhs59927=this->_literals[381];return j::binary("+",_lhs59926,_rhs59927);})();V _rhs59925=this->_literals[382];return j::binary("+",_lhs59924,_rhs59925);})();V _rhs59923=this->_literals[383];return j::binary("+",_lhs59922,_rhs59923);})();V _method59920=this->_literals[27];V _method=j::get(_receiver59919,_method59920);j::Args _params59921=j::Args{this->_literals[127]};return j::call(_method,_params59921,_receiver59919);})();V _method59917=this->_literals[144];V _method=j::get(_receiver59916,_method59917);j::Args _params59918=j::Args{j::function([=](const j::Args &_args_fn50533,const V &_receiver_fn50533,const V &_self_fn50533) mutable ->V{
V _v_50534_out;
V _v_50535_w;
V _v_50536_i;
V _v_50537_all;
_v_50534_out=_args_fn50533[0];
_v_50535_w=_args_fn50533[1];
_v_50536_i=_args_fn50533[2];
_v_50537_all=_args_fn50533[3];
return (j::truth(([&]()->V{V _lhs59908=_v_50536_i;V _rhs59909=V(2.0);return V(std::fmod(j::number(_lhs59908),j::number(_rhs59909)));})())?_v_50534_out:([&]()->V{j::Args _array59910;for(const auto &_value:j::elements(_v_50534_out))_array59910.push_back(_value);_array59910.push_back(([&]()->V{j::Args _array59911;_array59911.push_back(_v_50535_w);_array59911.push_back(([&]()->V{std::u16string _text59912;_text59912+=u"#";_text59912+=j::string(j::get(_v_50537_all,([&]()->V{V _lhs59913=_v_50536_i;V _rhs59914=V(1.0);return j::binary("+",_lhs59913,_rhs59914);})()));_text59912+=u"";return V(std::move(_text59912));})());return j::array(std::move(_array59911));})());return j::array(std::move(_array59910));})());
return V{};
},4),([&]()->V{j::Args _array59915;return j::array(std::move(_array59915));})()};return j::call(_method,_params59918,_receiver59916);})()});})();
this->_v_50538_unit.get()=j::function([=](const j::Args &_args_fn50539,const V &_receiver_fn50539,const V &_self_fn50539) mutable ->V{
V _v_50540_v;
V _v_50541_max;
_v_50540_v=_args_fn50539[0];
_v_50541_max=_args_fn50539[1];
return (j::truth(([&]()->V{V _receiver59965=([&]()->V{V _receiver59968=_v_50540_v;V _method59969=this->_literals[21];V _method=j::get(_receiver59968,_method59969);j::Args _params59970=j::Args{};return j::call(_method,_params59970,_receiver59968);})();V _method59966=this->_literals[384];V _method=j::get(_receiver59965,_method59966);j::Args _params59967=j::Args{this->_literals[89]};return j::call(_method,_params59967,_receiver59965);})())?([&]()->V{V _lhs59971=([&]()->V{V _lhs59973=([&]()->V{V _callee59975=j::builtin("parseFloat");return j::call(_callee59975,j::Args{_v_50540_v});})();V _rhs59974=V(100.0);return V(j::number(_lhs59973)/j::number(_rhs59974));})();V _rhs59972=_v_50541_max;return V(j::number(_lhs59971)*j::number(_rhs59972));})():([&]()->V{V _callee59976=j::builtin("parseFloat");return j::call(_callee59976,j::Args{_v_50540_v});})());
return V{};
},2);
this->_v_50576_IDENTITY.get()=([&]()->V{j::Args _array59977;_array59977.push_back(V(1.0));_array59977.push_back(V(0.0));_array59977.push_back(V(0.0));_array59977.push_back(V(1.0));_array59977.push_back(V(0.0));_array59977.push_back(V(0.0));return j::array(std::move(_array59977));})();
this->_v_50577_mul.get()=j::function([=](const j::Args &_args_fn50578,const V &_receiver_fn50578,const V &_self_fn50578) mutable ->V{
V _v_50579_m;
V _v_50580_n;
_v_50579_m=_args_fn50578[0];
_v_50580_n=_args_fn50578[1];
return ([&]()->V{j::Args _array59978;_array59978.push_back(([&]()->V{V _lhs59979=([&]()->V{V _lhs59981=j::get(_v_50579_m,V(0.0));V _rhs59982=j::get(_v_50580_n,V(0.0));return V(j::number(_lhs59981)*j::number(_rhs59982));})();V _rhs59980=([&]()->V{V _lhs59983=j::get(_v_50579_m,V(2.0));V _rhs59984=j::get(_v_50580_n,V(1.0));return V(j::number(_lhs59983)*j::number(_rhs59984));})();return j::binary("+",_lhs59979,_rhs59980);})());_array59978.push_back(([&]()->V{V _lhs59985=([&]()->V{V _lhs59987=j::get(_v_50579_m,V(1.0));V _rhs59988=j::get(_v_50580_n,V(0.0));return V(j::number(_lhs59987)*j::number(_rhs59988));})();V _rhs59986=([&]()->V{V _lhs59989=j::get(_v_50579_m,V(3.0));V _rhs59990=j::get(_v_50580_n,V(1.0));return V(j::number(_lhs59989)*j::number(_rhs59990));})();return j::binary("+",_lhs59985,_rhs59986);})());_array59978.push_back(([&]()->V{V _lhs59991=([&]()->V{V _lhs59993=j::get(_v_50579_m,V(0.0));V _rhs59994=j::get(_v_50580_n,V(2.0));return V(j::number(_lhs59993)*j::number(_rhs59994));})();V _rhs59992=([&]()->V{V _lhs59995=j::get(_v_50579_m,V(2.0));V _rhs59996=j::get(_v_50580_n,V(3.0));return V(j::number(_lhs59995)*j::number(_rhs59996));})();return j::binary("+",_lhs59991,_rhs59992);})());_array59978.push_back(([&]()->V{V _lhs59997=([&]()->V{V _lhs59999=j::get(_v_50579_m,V(1.0));V _rhs60000=j::get(_v_50580_n,V(2.0));return V(j::number(_lhs59999)*j::number(_rhs60000));})();V _rhs59998=([&]()->V{V _lhs60001=j::get(_v_50579_m,V(3.0));V _rhs60002=j::get(_v_50580_n,V(3.0));return V(j::number(_lhs60001)*j::number(_rhs60002));})();return j::binary("+",_lhs59997,_rhs59998);})());_array59978.push_back(([&]()->V{V _lhs60003=([&]()->V{V _lhs60005=([&]()->V{V _lhs60007=j::get(_v_50579_m,V(0.0));V _rhs60008=j::get(_v_50580_n,V(4.0));return V(j::number(_lhs60007)*j::number(_rhs60008));})();V _rhs60006=([&]()->V{V _lhs60009=j::get(_v_50579_m,V(2.0));V _rhs60010=j::get(_v_50580_n,V(5.0));return V(j::number(_lhs60009)*j::number(_rhs60010));})();return j::binary("+",_lhs60005,_rhs60006);})();V _rhs60004=j::get(_v_50579_m,V(4.0));return j::binary("+",_lhs60003,_rhs60004);})());_array59978.push_back(([&]()->V{V _lhs60011=([&]()->V{V _lhs60013=([&]()->V{V _lhs60015=j::get(_v_50579_m,V(1.0));V _rhs60016=j::get(_v_50580_n,V(4.0));return V(j::number(_lhs60015)*j::number(_rhs60016));})();V _rhs60014=([&]()->V{V _lhs60017=j::get(_v_50579_m,V(3.0));V _rhs60018=j::get(_v_50580_n,V(5.0));return V(j::number(_lhs60017)*j::number(_rhs60018));})();return j::binary("+",_lhs60013,_rhs60014);})();V _rhs60012=j::get(_v_50579_m,V(5.0));return j::binary("+",_lhs60011,_rhs60012);})());return j::array(std::move(_array59978));})();
return V{};
},2);
this->_v_50581_about.get()=j::function([=](const j::Args &_args_fn50582,const V &_receiver_fn50582,const V &_self_fn50582) mutable ->V{
V _v_50583_x;
V _v_50584_y;
V _v_50585_a;
V _v_50586_b;
V _v_50587_c;
V _v_50588_d;
_v_50583_x=_args_fn50582[0];
_v_50584_y=_args_fn50582[1];
_v_50585_a=_args_fn50582[2];
_v_50586_b=_args_fn50582[3];
_v_50587_c=_args_fn50582[4];
_v_50588_d=_args_fn50582[5];
return ([&]()->V{j::Args _array60019;_array60019.push_back(_v_50585_a);_array60019.push_back(_v_50586_b);_array60019.push_back(_v_50587_c);_array60019.push_back(_v_50588_d);_array60019.push_back(([&]()->V{V _lhs60020=([&]()->V{V _lhs60022=_v_50583_x;V _rhs60023=([&]()->V{V _lhs60024=_v_50585_a;V _rhs60025=_v_50583_x;return V(j::number(_lhs60024)*j::number(_rhs60025));})();return V(j::number(_lhs60022)-j::number(_rhs60023));})();V _rhs60021=([&]()->V{V _lhs60026=_v_50587_c;V _rhs60027=_v_50584_y;return V(j::number(_lhs60026)*j::number(_rhs60027));})();return V(j::number(_lhs60020)-j::number(_rhs60021));})());_array60019.push_back(([&]()->V{V _lhs60028=([&]()->V{V _lhs60030=_v_50584_y;V _rhs60031=([&]()->V{V _lhs60032=_v_50586_b;V _rhs60033=_v_50583_x;return V(j::number(_lhs60032)*j::number(_rhs60033));})();return V(j::number(_lhs60030)-j::number(_rhs60031));})();V _rhs60029=([&]()->V{V _lhs60034=_v_50588_d;V _rhs60035=_v_50584_y;return V(j::number(_lhs60034)*j::number(_rhs60035));})();return V(j::number(_lhs60028)-j::number(_rhs60029));})());return j::array(std::move(_array60019));})();
return V{};
},6);
this->_v_50589_invert.get()=j::function([=](const j::Args &_args_fn50590,const V &_receiver_fn50590,const V &_self_fn50590) mutable ->V{
V _v_50591_m;
_v_50591_m=_args_fn50590[0];
{
V _v_50592_det;
V _v_50593_a;
V _v_50594_b;
V _v_50595_c;
V _v_50596_d;
_v_50592_det=([&]()->V{V _logical60036=([&]()->V{V _lhs60037=([&]()->V{V _lhs60039=j::get(_v_50591_m,V(0.0));V _rhs60040=j::get(_v_50591_m,V(3.0));return V(j::number(_lhs60039)*j::number(_rhs60040));})();V _rhs60038=([&]()->V{V _lhs60041=j::get(_v_50591_m,V(1.0));V _rhs60042=j::get(_v_50591_m,V(2.0));return V(j::number(_lhs60041)*j::number(_rhs60042));})();return V(j::number(_lhs60037)-j::number(_rhs60038));})();return !j::truth(_logical60036)?V(1e-12):_logical60036;})();
_v_50593_a=([&]()->V{V _lhs60043=j::get(_v_50591_m,V(3.0));V _rhs60044=_v_50592_det;return V(j::number(_lhs60043)/j::number(_rhs60044));})();
_v_50594_b=([&]()->V{V _lhs60045=j::unary("-",j::get(_v_50591_m,V(1.0)));V _rhs60046=_v_50592_det;return V(j::number(_lhs60045)/j::number(_rhs60046));})();
_v_50595_c=([&]()->V{V _lhs60047=j::unary("-",j::get(_v_50591_m,V(2.0)));V _rhs60048=_v_50592_det;return V(j::number(_lhs60047)/j::number(_rhs60048));})();
_v_50596_d=([&]()->V{V _lhs60049=j::get(_v_50591_m,V(0.0));V _rhs60050=_v_50592_det;return V(j::number(_lhs60049)/j::number(_rhs60050));})();
return ([&]()->V{j::Args _array60051;_array60051.push_back(_v_50593_a);_array60051.push_back(_v_50594_b);_array60051.push_back(_v_50595_c);_array60051.push_back(_v_50596_d);_array60051.push_back(j::unary("-",([&]()->V{V _lhs60052=([&]()->V{V _lhs60054=_v_50593_a;V _rhs60055=j::get(_v_50591_m,V(4.0));return V(j::number(_lhs60054)*j::number(_rhs60055));})();V _rhs60053=([&]()->V{V _lhs60056=_v_50595_c;V _rhs60057=j::get(_v_50591_m,V(5.0));return V(j::number(_lhs60056)*j::number(_rhs60057));})();return j::binary("+",_lhs60052,_rhs60053);})()));_array60051.push_back(j::unary("-",([&]()->V{V _lhs60058=([&]()->V{V _lhs60060=_v_50594_b;V _rhs60061=j::get(_v_50591_m,V(4.0));return V(j::number(_lhs60060)*j::number(_rhs60061));})();V _rhs60059=([&]()->V{V _lhs60062=_v_50596_d;V _rhs60063=j::get(_v_50591_m,V(5.0));return V(j::number(_lhs60062)*j::number(_rhs60063));})();return j::binary("+",_lhs60058,_rhs60059);})()));return j::array(std::move(_array60051));})();

}

return V{};
},1);
this->_v_50610_MOVE.get()=V(0.0);
this->_v_50611_LINE.get()=V(1.0);
this->_v_50612_CURVE.get()=V(2.0);
this->_v_50613_CLOSE.get()=V(3.0);
this->_v_50614_KAPPA.get()=V(0.5522847498);
this->_v_50666_NUMBER.get()=j::regexp(u"[\\s,]*([+-]?(?:\\d+\\.?\\d*|\\.\\d+)(?:[eE][+-]?\\d+)?)","y");
this->_v_50667_FLAG.get()=j::regexp(u"[\\s,]*([01])","y");
this->_v_50668_COMMAND.get()=j::regexp(u"[\\s,]*([MmLlHhVvCcSsQqTtAaZz])","y");
this->_v_50669_ARGS.get()=([&]()->V{V _obj60064=j::object();j::put(_obj60064,this->_literals[72],V(2.0));j::put(_obj60064,this->_literals[73],V(2.0));j::put(_obj60064,this->_literals[74],V(1.0));j::put(_obj60064,this->_literals[75],V(1.0));j::put(_obj60064,this->_literals[76],V(6.0));j::put(_obj60064,this->_literals[77],V(4.0));j::put(_obj60064,this->_literals[78],V(4.0));j::put(_obj60064,this->_literals[79],V(2.0));j::put(_obj60064,this->_literals[70],V(7.0));j::put(_obj60064,this->_literals[67],V(0.0));return _obj60064;})();
this->_v_50714_numbers.get()=j::function([=](const j::Args &_args_fn50715,const V &_receiver_fn50715,const V &_self_fn50715) mutable ->V{
V _v_50716_v;
_v_50716_v=_args_fn50715[0];
return ([&]()->V{V _receiver60065=([&]()->V{V _logical60068=([&]()->V{V _chain60069=_v_50716_v;if(j::nullish(_chain60069))return V{};V _chain60070=j::get(_chain60069,this->_literals[38]);V _chain60071=j::call(_chain60070,j::Args{j::regexp(u"[+-]?(?:\\d+\\.?\\d*|\\.\\d+)(?:e[+-]?\\d+)?","gi")},_chain60069);return _chain60071;})();return j::nullish(_logical60068)?([&]()->V{j::Args _array60072;return j::array(std::move(_array60072));})():_logical60068;})();V _method60066=this->_literals[41];V _method=j::get(_receiver60065,_method60066);j::Args _params60067=j::Args{j::builtin("Number")};return j::call(_method,_params60067,_receiver60065);})();
return V{};
},1);
this->_v_50807_SHAPES.get()=([&]()->V{V _callee60074=j::builtin("Set");return j::construct(_callee60074,j::Args{([&]()->V{j::Args _array60073;_array60073.push_back(this->_literals[90]);_array60073.push_back(this->_literals[91]);_array60073.push_back(this->_literals[92]);_array60073.push_back(this->_literals[93]);_array60073.push_back(this->_literals[94]);_array60073.push_back(this->_literals[95]);_array60073.push_back(this->_literals[96]);return j::array(std::move(_array60073));})()});})();
this->_v_50808_GROUPS.get()=([&]()->V{V _callee60076=j::builtin("Set");return j::construct(_callee60076,j::Args{([&]()->V{j::Args _array60075;_array60075.push_back(this->_literals[385]);_array60075.push_back(this->_literals[51]);_array60075.push_back(this->_literals[386]);_array60075.push_back(this->_literals[121]);return j::array(std::move(_array60075));})()});})();
this->_v_50809_LEFT_OUT.get()=([&]()->V{V _callee60078=j::builtin("Set");return j::construct(_callee60078,j::Args{([&]()->V{j::Args _array60077;_array60077.push_back(this->_literals[4]);_array60077.push_back(this->_literals[387]);_array60077.push_back(this->_literals[173]);return j::array(std::move(_array60077));})()});})();
this->_v_50810_MOST.get()=V(50000.0);
this->_v_50811_MOST_SHAPES.get()=V(20000.0);
this->_v_50812_MOST_SEGMENTS.get()=V(200000.0);
this->_v_50813_MOST_MARKUP.get()=V(5000000.0);
this->_v_50814_DEEP.get()=V(256.0);
this->_v_50973_ORIGINS.get()=([&]()->V{j::Args _array60079;_array60079.push_back(this->_literals[245]);_array60079.push_back(this->_literals[243]);_array60079.push_back(this->_literals[244]);_array60079.push_back(this->_literals[241]);_array60079.push_back(this->_literals[242]);_array60079.push_back(this->_literals[388]);_array60079.push_back(this->_literals[389]);_array60079.push_back(this->_literals[390]);_array60079.push_back(this->_literals[391]);return j::array(std::move(_array60079));})();
this->_v_50974_MOTIONS.get()=([&]()->V{V _obj60080=j::object();j::put(_obj60080,this->_literals[197],([&]()->V{V _obj60081=j::object();j::put(_obj60081,this->_literals[193],V(4.0));j::put(_obj60081,this->_literals[205],V(1.0));return _obj60081;})());j::put(_obj60080,this->_literals[198],([&]()->V{V _obj60082=j::object();j::put(_obj60082,this->_literals[193],V(4.0));j::put(_obj60082,this->_literals[205],V(1.0));return _obj60082;})());j::put(_obj60080,this->_literals[199],([&]()->V{V _obj60083=j::object();j::put(_obj60083,this->_literals[193],V(2.0));j::put(_obj60083,this->_literals[205],V(1.0));return _obj60083;})());j::put(_obj60080,this->_literals[200],([&]()->V{V _obj60084=j::object();j::put(_obj60084,this->_literals[193],V(1.6));j::put(_obj60084,this->_literals[205],V(0.15));return _obj60084;})());j::put(_obj60080,this->_literals[201],([&]()->V{V _obj60085=j::object();j::put(_obj60085,this->_literals[193],V(4.0));j::put(_obj60085,this->_literals[205],V(0.15));return _obj60085;})());j::put(_obj60080,this->_literals[202],([&]()->V{V _obj60086=j::object();j::put(_obj60086,this->_literals[193],V(4.0));j::put(_obj60086,this->_literals[205],V(0.9));j::put(_obj60086,this->_literals[134],V(true));return _obj60086;})());j::put(_obj60080,this->_literals[246],([&]()->V{V _obj60087=j::object();j::put(_obj60087,this->_literals[193],V(4.0));j::put(_obj60087,this->_literals[205],V(1.0));j::put(_obj60087,this->_literals[134],V(true));return _obj60087;})());j::put(_obj60080,this->_literals[248],([&]()->V{V _obj60088=j::object();j::put(_obj60088,this->_literals[193],V(2.0));j::put(_obj60088,this->_literals[205],V(0.4));return _obj60088;})());j::put(_obj60080,this->_literals[203],([&]()->V{V _obj60089=j::object();j::put(_obj60089,this->_literals[193],V(4.0));j::put(_obj60089,this->_literals[205],V(4.0));return _obj60089;})());j::put(_obj60080,this->_literals[247],([&]()->V{V _obj60090=j::object();j::put(_obj60090,this->_literals[193],V(4.0));j::put(_obj60090,this->_literals[205],V(1.0));return _obj60090;})());return _obj60080;})();
this->_v_50984_TRACE_HELD.get()=V(0.65);
this->_v_50985_isPartMaterial.get()=j::function([=](const j::Args &_args_fn50986,const V &_receiver_fn50986,const V &_self_fn50986) mutable ->V{
V _v_50987_v;
_v_50987_v=_args_fn50986[0];
{
V _v_50988_m;
_v_50988_m=_v_50987_v;
return ([&]()->V{V _logical60091=([&]()->V{V _logical60092=([&]()->V{V _logical60093=([&]()->V{V _logical60094=([&]()->V{V _logical60095=j::unary("!",j::unary("!",_v_50988_m));return j::truth(_logical60095)?([&]()->V{V _lhs60096=j::unary("typeof",_v_50988_m);V _rhs60097=this->_literals[218];return V(j::equal(_lhs60096,_rhs60097,true));})():_logical60095;})();return j::truth(_logical60094)?([&]()->V{V _lhs60098=j::unary("typeof",j::get(_v_50988_m,this->_literals[329]));V _rhs60099=this->_literals[217];return V(j::equal(_lhs60098,_rhs60099,true));})():_logical60094;})();return j::truth(_logical60093)?j::unary("!",j::unary("!",j::get(_v_50988_m,this->_literals[222]))):_logical60093;})();return j::truth(_logical60092)?([&]()->V{V _receiver60100=j::builtin("Array");V _method60101=this->_literals[207];V _method=j::get(_receiver60100,_method60101);j::Args _params60102=j::Args{j::get(j::get(_v_50988_m,this->_literals[222]),this->_literals[223])};return j::call(_method,_params60102,_receiver60100);})():_logical60092;})();return j::truth(_logical60091)?([&]()->V{V _receiver60103=j::builtin("Array");V _method60104=this->_literals[207];V _method=j::get(_receiver60103,_method60104);j::Args _params60105=j::Args{j::get(j::get(_v_50988_m,this->_literals[222]),this->_literals[224])};return j::call(_method,_params60105,_receiver60103);})():_logical60091;})();

}

return V{};
},1);
this->_v_50989_isSource.get()=j::function([=](const j::Args &_args_fn50990,const V &_receiver_fn50990,const V &_self_fn50990) mutable ->V{
V _v_50991_v;
_v_50991_v=_args_fn50990[0];
return ([&]()->V{V _logical60106=([&]()->V{V _lhs60107=_v_50991_v;V _rhs60108=this->_v_50443_Surface.get();return j::binary("instanceof",_lhs60107,_rhs60108);})();return !j::truth(_logical60106)?([&]()->V{V _logical60109=([&]()->V{V _logical60110=([&]()->V{V _logical60111=j::unary("!",j::unary("!",_v_50991_v));return j::truth(_logical60111)?([&]()->V{V _lhs60112=j::unary("typeof",_v_50991_v);V _rhs60113=this->_literals[218];return V(j::equal(_lhs60112,_rhs60113,true));})():_logical60111;})();return j::truth(_logical60110)?([&]()->V{V _lhs60114=this->_literals[337];V _rhs60115=_v_50991_v;return j::binary("in",_lhs60114,_rhs60115);})():_logical60110;})();return j::truth(_logical60109)?([&]()->V{V _lhs60116=j::unary("typeof",j::get(_v_50991_v,this->_literals[392]));V _rhs60117=this->_literals[217];return V(j::equal(_lhs60116,_rhs60117,true));})():_logical60109;})():_logical60106;})();
return V{};
},1);
this->_v_50992_OPTIONS.get()=([&]()->V{j::Args _array60118;_array60118.push_back(this->_literals[100]);_array60118.push_back(this->_literals[251]);_array60118.push_back(this->_literals[252]);_array60118.push_back(this->_literals[250]);_array60118.push_back(this->_literals[249]);_array60118.push_back(this->_literals[124]);_array60118.push_back(this->_literals[130]);_array60118.push_back(this->_literals[141]);_array60118.push_back(this->_literals[94]);_array60118.push_back(this->_literals[0]);_array60118.push_back(this->_literals[297]);_array60118.push_back(this->_literals[298]);_array60118.push_back(this->_literals[299]);_array60118.push_back(this->_literals[300]);_array60118.push_back(this->_literals[301]);_array60118.push_back(this->_literals[302]);return j::array(std::move(_array60118));})();
this->_v_50993_PART_KEYS.get()=([&]()->V{V _callee60120=j::builtin("Set");return j::construct(_callee60120,j::Args{([&]()->V{j::Args _array60119;_array60119.push_back(this->_literals[196]);_array60119.push_back(this->_literals[193]);_array60119.push_back(this->_literals[134]);_array60119.push_back(this->_literals[205]);_array60119.push_back(this->_literals[210]);_array60119.push_back(this->_literals[192]);_array60119.push_back(this->_literals[219]);_array60119.push_back(this->_literals[211]);_array60119.push_back(this->_literals[130]);_array60119.push_back(this->_literals[212]);_array60119.push_back(this->_literals[141]);_array60119.push_back(this->_literals[213]);return j::array(std::move(_array60119));})()});})();
this->_v_50994_STYLES.get()=([&]()->V{j::Args _array60121;_array60121.push_back(this->_literals[304]);_array60121.push_back(this->_literals[256]);_array60121.push_back(this->_literals[293]);_array60121.push_back(this->_literals[294]);return j::array(std::move(_array60121));})();
this->_v_50995_whole.get()=j::function([=](const j::Args &_args_fn50996,const V &_receiver_fn50996,const V &_self_fn50996) mutable ->V{
V _v_50997_v;
V _v_50998_name;
V _v_50999_lo;
V _v_51000_hi;
_v_50997_v=_args_fn50996[0];
_v_50998_name=_args_fn50996[1];
_v_50999_lo=_args_fn50996[2];
_v_51000_hi=_args_fn50996[3];
return (j::truth(([&]()->V{V _lhs60122=_v_50997_v;V _rhs60123=j::builtin("undefined");return V(j::equal(_lhs60122,_rhs60123,true));})())?j::builtin("undefined"):(j::truth(([&]()->V{V _logical60124=([&]()->V{V _logical60125=([&]()->V{V _receiver60126=j::builtin("Number");V _method60127=this->_literals[303];V _method=j::get(_receiver60126,_method60127);j::Args _params60128=j::Args{_v_50997_v};return j::call(_method,_params60128,_receiver60126);})();return j::truth(_logical60125)?([&]()->V{V _lhs60129=_v_50997_v;V _rhs60130=_v_50999_lo;return j::binary(">=",_lhs60129,_rhs60130);})():_logical60125;})();return j::truth(_logical60124)?([&]()->V{V _lhs60131=_v_50997_v;V _rhs60132=_v_51000_hi;return j::binary("<=",_lhs60131,_rhs60132);})():_logical60124;})())?_v_50997_v:([&]()->V{V _callee60135=this->_v_50450_fail.get();return j::call(_callee60135,j::Args{([&]()->V{std::u16string _text60133;_text60133+=u"";_text60133+=j::string(_v_50998_name);_text60133+=u" takes a whole number from ";_text60133+=j::string(_v_50999_lo);_text60133+=u" to ";_text60133+=j::string(_v_51000_hi);_text60133+=u", not ";_text60133+=j::string(([&]()->V{V _callee60134=j::builtin("String");return j::call(_callee60134,j::Args{_v_50997_v});})());_text60133+=u"";return V(std::move(_text60133));})()});})()));
return V{};
},4);
this->_v_51001_above0.get()=j::function([=](const j::Args &_args_fn51002,const V &_receiver_fn51002,const V &_self_fn51002) mutable ->V{
V _v_51003_v;
V _v_51004_name;
_v_51003_v=_args_fn51002[0];
_v_51004_name=_args_fn51002[1];
return (j::truth(([&]()->V{V _lhs60136=_v_51003_v;V _rhs60137=j::builtin("undefined");return V(j::equal(_lhs60136,_rhs60137,true));})())?j::builtin("undefined"):(j::truth(([&]()->V{V _logical60138=([&]()->V{V _logical60139=([&]()->V{V _lhs60140=j::unary("typeof",_v_51003_v);V _rhs60141=this->_literals[220];return V(j::equal(_lhs60140,_rhs60141,true));})();return j::truth(_logical60139)?([&]()->V{V _receiver60142=j::builtin("Number");V _method60143=this->_literals[57];V _method=j::get(_receiver60142,_method60143);j::Args _params60144=j::Args{_v_51003_v};return j::call(_method,_params60144,_receiver60142);})():_logical60139;})();return j::truth(_logical60138)?([&]()->V{V _lhs60145=_v_51003_v;V _rhs60146=V(0.0);return j::binary(">",_lhs60145,_rhs60146);})():_logical60138;})())?_v_51003_v:([&]()->V{V _callee60149=this->_v_50450_fail.get();return j::call(_callee60149,j::Args{([&]()->V{std::u16string _text60147;_text60147+=u"";_text60147+=j::string(_v_51004_name);_text60147+=u" takes a number above 0, not ";_text60147+=j::string(([&]()->V{V _callee60148=j::builtin("String");return j::call(_callee60148,j::Args{_v_51003_v});})());_text60147+=u"";return V(std::move(_text60147));})()});})()));
return V{};
},2);
this->_v_51005_finite.get()=j::function([=](const j::Args &_args_fn51006,const V &_receiver_fn51006,const V &_self_fn51006) mutable ->V{
V _v_51007_v;
V _v_51008_name;
_v_51007_v=_args_fn51006[0];
_v_51008_name=_args_fn51006[1];
return (j::truth(([&]()->V{V _lhs60150=_v_51007_v;V _rhs60151=j::builtin("undefined");return V(j::equal(_lhs60150,_rhs60151,true));})())?j::builtin("undefined"):(j::truth(([&]()->V{V _logical60152=([&]()->V{V _lhs60153=j::unary("typeof",_v_51007_v);V _rhs60154=this->_literals[220];return V(j::equal(_lhs60153,_rhs60154,true));})();return j::truth(_logical60152)?([&]()->V{V _receiver60155=j::builtin("Number");V _method60156=this->_literals[57];V _method=j::get(_receiver60155,_method60156);j::Args _params60157=j::Args{_v_51007_v};return j::call(_method,_params60157,_receiver60155);})():_logical60152;})())?_v_51007_v:([&]()->V{V _callee60160=this->_v_50450_fail.get();return j::call(_callee60160,j::Args{([&]()->V{std::u16string _text60158;_text60158+=u"";_text60158+=j::string(_v_51008_name);_text60158+=u" takes a number, not ";_text60158+=j::string(([&]()->V{V _callee60159=j::builtin("String");return j::call(_callee60159,j::Args{_v_51007_v});})());_text60158+=u"";return V(std::move(_text60158));})()});})()));
return V{};
},2);
this->_v_51009_oneChar.get()=j::function([=](const j::Args &_args_fn51010,const V &_receiver_fn51010,const V &_self_fn51010) mutable ->V{
V _v_51011_v;
V _v_51012_name;
_v_51011_v=_args_fn51010[0];
_v_51012_name=_args_fn51010[1];
{
if(j::truth(([&]()->V{V _lhs60161=_v_51011_v;V _rhs60162=j::builtin("undefined");return V(j::equal(_lhs60161,_rhs60162,true));})())){return j::builtin("undefined");
}
if(j::truth(([&]()->V{V _logical60163=([&]()->V{V _logical60164=([&]()->V{V _lhs60165=j::unary("typeof",_v_51011_v);V _rhs60166=this->_literals[117];return V(!j::equal(_lhs60165,_rhs60166,true));})();return !j::truth(_logical60164)?([&]()->V{V _lhs60167=j::get(_v_51011_v,this->_literals[5]);V _rhs60168=V(1.0);return V(!j::equal(_lhs60167,_rhs60168,true));})():_logical60164;})();return !j::truth(_logical60163)?([&]()->V{V _lhs60169=_v_51011_v;V _rhs60170=this->_literals[127];return V(j::equal(_lhs60169,_rhs60170,true));})():_logical60163;})())){(void)(([&]()->V{V _callee60175=this->_v_50450_fail.get();return j::call(_callee60175,j::Args{([&]()->V{std::u16string _text60171;_text60171+=u"";_text60171+=j::string(_v_51012_name);_text60171+=u" takes one character other than a space, not ";_text60171+=j::string(([&]()->V{V _receiver60172=j::builtin("JSON");V _method60173=this->_literals[215];V _method=j::get(_receiver60172,_method60173);j::Args _params60174=j::Args{_v_51011_v};return j::call(_method,_params60174,_receiver60172);})());_text60171+=u"";return V(std::move(_text60171));})()});})());
}
(void)(([&]()->V{V _callee60176=this->_v_50448_code.get();return j::call(_callee60176,j::Args{_v_51011_v});})());
return _v_51011_v;

}

return V{};
},2);
this->_v_51013_SHAPE_TABLE.get()=([&]()->V{j::Args _array60177;_array60177.push_back(([&]()->V{j::Args _array60178;_array60178.push_back(this->_literals[42]);_array60178.push_back(([&]()->V{j::Args _array60179;_array60179.push_back(V(0.0));_array60179.push_back(V(0.0));_array60179.push_back(V(0.0));_array60179.push_back(V(0.0));_array60179.push_back(V(0.15573));_array60179.push_back(V(0.15566));_array60179.push_back(V(0.10222));_array60179.push_back(V(0.10207));return j::array(std::move(_array60179));})());return j::array(std::move(_array60178));})());_array60177.push_back(([&]()->V{j::Args _array60180;_array60180.push_back(this->_literals[36]);_array60180.push_back(([&]()->V{j::Args _array60181;_array60181.push_back(V(0.0));_array60181.push_back(V(0.0));_array60181.push_back(V(0.0));_array60181.push_back(V(0.0));_array60181.push_back(V(0.1372));_array60181.push_back(V(0.18145));_array60181.push_back(V(0.41383));_array60181.push_back(V(0.0891));return j::array(std::move(_array60181));})());return j::array(std::move(_array60180));})());_array60177.push_back(([&]()->V{j::Args _array60182;_array60182.push_back(this->_literals[28]);_array60182.push_back(([&]()->V{j::Args _array60183;_array60183.push_back(V(0.0));_array60183.push_back(V(0.0));_array60183.push_back(V(0.25802));_array60183.push_back(V(0.2578));_array60183.push_back(V(0.15573));_array60183.push_back(V(0.15566));_array60183.push_back(V(0.10222));_array60183.push_back(V(0.10207));return j::array(std::move(_array60183));})());return j::array(std::move(_array60182));})());_array60177.push_back(([&]()->V{j::Args _array60184;_array60184.push_back(this->_literals[322]);_array60184.push_back(([&]()->V{j::Args _array60185;_array60185.push_back(V(0.10585));_array60185.push_back(V(0.10585));_array60185.push_back(V(0.21273));_array60185.push_back(V(0.21273));_array60185.push_back(V(0.0));_array60185.push_back(V(0.0));_array60185.push_back(V(0.0));_array60185.push_back(V(0.0));return j::array(std::move(_array60185));})());return j::array(std::move(_array60184));})());_array60177.push_back(([&]()->V{j::Args _array60186;_array60186.push_back(this->_literals[358]);_array60186.push_back(([&]()->V{j::Args _array60187;_array60187.push_back(V(0.21147));_array60187.push_back(V(0.2117));_array60187.push_back(V(0.42502));_array60187.push_back(V(0.42554));_array60187.push_back(V(0.0));_array60187.push_back(V(0.0));_array60187.push_back(V(0.0));_array60187.push_back(V(0.0));return j::array(std::move(_array60187));})());return j::array(std::move(_array60186));})());_array60177.push_back(([&]()->V{j::Args _array60188;_array60188.push_back(this->_literals[393]);_array60188.push_back(([&]()->V{j::Args _array60189;_array60189.push_back(V(0.0888));_array60189.push_back(V(0.0891));_array60189.push_back(V(0.71744));_array60189.push_back(V(0.75132));_array60189.push_back(V(0.10874));_array60189.push_back(V(0.11467));_array60189.push_back(V(0.0));_array60189.push_back(V(0.0));return j::array(std::move(_array60189));})());return j::array(std::move(_array60188));})());_array60177.push_back(([&]()->V{j::Args _array60190;_array60190.push_back(this->_literals[323]);_array60190.push_back(([&]()->V{j::Args _array60191;_array60191.push_back(V(0.0));_array60191.push_back(V(0.0));_array60191.push_back(V(0.0));_array60191.push_back(V(0.0));_array60191.push_back(V(0.36936));_array60191.push_back(V(0.36936));_array60191.push_back(V(0.0));_array60191.push_back(V(0.0));return j::array(std::move(_array60191));})());return j::array(std::move(_array60190));})());_array60177.push_back(([&]()->V{j::Args _array60192;_array60192.push_back(this->_literals[321]);_array60192.push_back(([&]()->V{j::Args _array60193;_array60193.push_back(V(0.0));_array60193.push_back(V(0.0));_array60193.push_back(V(0.0));_array60193.push_back(V(0.0));_array60193.push_back(V(0.0));_array60193.push_back(V(0.0));_array60193.push_back(V(0.53806));_array60193.push_back(V(0.53806));return j::array(std::move(_array60193));})());return j::array(std::move(_array60192));})());_array60177.push_back(([&]()->V{j::Args _array60194;_array60194.push_back(this->_literals[394]);_array60194.push_back(([&]()->V{j::Args _array60195;_array60195.push_back(V(0.0));_array60195.push_back(V(0.0));_array60195.push_back(V(0.28456));_array60195.push_back(V(0.09488));_array60195.push_back(V(0.40323));_array60195.push_back(V(0.59151));_array60195.push_back(V(0.0));_array60195.push_back(V(0.0));return j::array(std::move(_array60195));})());return j::array(std::move(_array60194));})());_array60177.push_back(([&]()->V{j::Args _array60196;_array60196.push_back(this->_literals[395]);_array60196.push_back(([&]()->V{j::Args _array60197;_array60197.push_back(V(0.0));_array60197.push_back(V(0.0));_array60197.push_back(V(0.48973));_array60197.push_back(V(0.48973));_array60197.push_back(V(0.48973));_array60197.push_back(V(0.48973));_array60197.push_back(V(0.0));_array60197.push_back(V(0.0));return j::array(std::move(_array60197));})());return j::array(std::move(_array60196));})());_array60177.push_back(([&]()->V{j::Args _array60198;_array60198.push_back(this->_literals[20]);_array60198.push_back(([&]()->V{j::Args _array60199;_array60199.push_back(V(0.0));_array60199.push_back(V(0.24313));_array60199.push_back(V(0.01831));_array60199.push_back(V(0.63457));_array60199.push_back(V(0.55378));_array60199.push_back(V(0.09903));_array60199.push_back(V(0.40642));_array60199.push_back(V(0.0));return j::array(std::move(_array60199));})());return j::array(std::move(_array60198));})());_array60177.push_back(([&]()->V{j::Args _array60200;_array60200.push_back(this->_literals[327]);_array60200.push_back(([&]()->V{j::Args _array60201;_array60201.push_back(V(0.24313));_array60201.push_back(V(0.0));_array60201.push_back(V(0.63479));_array60201.push_back(V(0.01823));_array60201.push_back(V(0.09873));_array60201.push_back(V(0.554));_array60201.push_back(V(0.0));_array60201.push_back(V(0.40642));return j::array(std::move(_array60201));})());return j::array(std::move(_array60200));})());_array60177.push_back(([&]()->V{j::Args _array60202;_array60202.push_back(this->_literals[325]);_array60202.push_back(([&]()->V{j::Args _array60203;_array60203.push_back(V(0.1186));_array60203.push_back(V(0.1186));_array60203.push_back(V(0.31755));_array60203.push_back(V(0.31755));_array60203.push_back(V(0.31755));_array60203.push_back(V(0.31755));_array60203.push_back(V(0.19695));_array60203.push_back(V(0.19695));return j::array(std::move(_array60203));})());return j::array(std::move(_array60202));})());_array60177.push_back(([&]()->V{j::Args _array60204;_array60204.push_back(this->_literals[324]);_array60204.push_back(([&]()->V{j::Args _array60205;_array60205.push_back(V(0.0));_array60205.push_back(V(0.26329));_array60205.push_back(V(0.46779));_array60205.push_back(V(0.17293));_array60205.push_back(V(0.59966));_array60205.push_back(V(0.0441));_array60205.push_back(V(0.03358));_array60205.push_back(V(0.39656));return j::array(std::move(_array60205));})());return j::array(std::move(_array60204));})());_array60177.push_back(([&]()->V{j::Args _array60206;_array60206.push_back(this->_literals[326]);_array60206.push_back(([&]()->V{j::Args _array60207;_array60207.push_back(V(0.26447));_array60207.push_back(V(0.0));_array60207.push_back(V(0.17278));_array60207.push_back(V(0.46705));_array60207.push_back(V(0.0441));_array60207.push_back(V(0.59907));_array60207.push_back(V(0.39767));_array60207.push_back(V(0.03313));return j::array(std::move(_array60207));})());return j::array(std::move(_array60206));})());_array60177.push_back(([&]()->V{j::Args _array60208;_array60208.push_back(this->_literals[97]);_array60208.push_back(([&]()->V{j::Args _array60209;_array60209.push_back(V(0.0));_array60209.push_back(V(0.22178));_array60209.push_back(V(0.62694));_array60209.push_back(V(0.93966));_array60209.push_back(V(0.84212));_array60209.push_back(V(0.83589));_array60209.push_back(V(0.24164));_array60209.push_back(V(0.22));return j::array(std::move(_array60209));})());return j::array(std::move(_array60208));})());_array60177.push_back(([&]()->V{j::Args _array60210;_array60210.push_back(this->_literals[396]);_array60210.push_back(([&]()->V{j::Args _array60211;_array60211.push_back(V(0.22178));_array60211.push_back(V(0.0));_array60211.push_back(V(0.94003));_array60211.push_back(V(0.62664));_array60211.push_back(V(0.83582));_array60211.push_back(V(0.84167));_array60211.push_back(V(0.22044));_array60211.push_back(V(0.24127));return j::array(std::move(_array60211));})());return j::array(std::move(_array60210));})());_array60177.push_back(([&]()->V{j::Args _array60212;_array60212.push_back(this->_literals[397]);_array60212.push_back(([&]()->V{j::Args _array60213;_array60213.push_back(V(0.0));_array60213.push_back(V(0.0));_array60213.push_back(V(0.62694));_array60213.push_back(V(0.62108));_array60213.push_back(V(0.84212));_array60213.push_back(V(0.83589));_array60213.push_back(V(0.24164));_array60213.push_back(V(0.70388));return j::array(std::move(_array60213));})());return j::array(std::move(_array60212));})());_array60177.push_back(([&]()->V{j::Args _array60214;_array60214.push_back(this->_literals[398]);_array60214.push_back(([&]()->V{j::Args _array60215;_array60215.push_back(V(0.0));_array60215.push_back(V(0.0));_array60215.push_back(V(0.62145));_array60215.push_back(V(0.62664));_array60215.push_back(V(0.83582));_array60215.push_back(V(0.84167));_array60215.push_back(V(0.70432));_array60215.push_back(V(0.24127));return j::array(std::move(_array60215));})());return j::array(std::move(_array60214));})());_array60177.push_back(([&]()->V{j::Args _array60216;_array60216.push_back(this->_literals[399]);_array60216.push_back(([&]()->V{j::Args _array60217;_array60217.push_back(V(0.31755));_array60217.push_back(V(0.22052));_array60217.push_back(V(0.93373));_array60217.push_back(V(1.0));_array60217.push_back(V(0.95916));_array60217.push_back(V(0.23097));_array60217.push_back(V(0.12282));_array60217.push_back(V(0.0));return j::array(std::move(_array60217));})());return j::array(std::move(_array60216));})());_array60177.push_back(([&]()->V{j::Args _array60218;_array60218.push_back(this->_literals[400]);_array60218.push_back(([&]()->V{j::Args _array60219;_array60219.push_back(V(0.14432));_array60219.push_back(V(0.14143));_array60219.push_back(V(0.83041));_array60219.push_back(V(0.81758));_array60219.push_back(V(0.42762));_array60219.push_back(V(0.42791));_array60219.push_back(V(0.06137));_array60219.push_back(V(0.06137));return j::array(std::move(_array60219));})());return j::array(std::move(_array60218));})());_array60177.push_back(([&]()->V{j::Args _array60220;_array60220.push_back(this->_literals[401]);_array60220.push_back(([&]()->V{j::Args _array60221;_array60221.push_back(V(0.0));_array60221.push_back(V(0.0));_array60221.push_back(V(0.54585));_array60221.push_back(V(0.54555));_array60221.push_back(V(0.79616));_array60221.push_back(V(0.79668));_array60221.push_back(V(0.19754));_array60221.push_back(V(0.19739));return j::array(std::move(_array60221));})());return j::array(std::move(_array60220));})());_array60177.push_back(([&]()->V{j::Args _array60222;_array60222.push_back(this->_literals[402]);_array60222.push_back(([&]()->V{j::Args _array60223;_array60223.push_back(V(0.20703));_array60223.push_back(V(0.20695));_array60223.push_back(V(0.8396));_array60223.push_back(V(0.83952));_array60223.push_back(V(0.84397));_array60223.push_back(V(0.8439));_array60223.push_back(V(0.19709));_array60223.push_back(V(0.19702));return j::array(std::move(_array60223));})());return j::array(std::move(_array60222));})());_array60177.push_back(([&]()->V{j::Args _array60224;_array60224.push_back(this->_literals[403]);_array60224.push_back(([&]()->V{j::Args _array60225;_array60225.push_back(V(0.20703));_array60225.push_back(V(0.20695));_array60225.push_back(V(0.92061));_array60225.push_back(V(0.92047));_array60225.push_back(V(0.9215));_array60225.push_back(V(0.92128));_array60225.push_back(V(0.19709));_array60225.push_back(V(0.19702));return j::array(std::move(_array60225));})());return j::array(std::move(_array60224));})());_array60177.push_back(([&]()->V{j::Args _array60226;_array60226.push_back(this->_literals[307]);_array60226.push_back(([&]()->V{j::Args _array60227;_array60227.push_back(V(0.24201));_array60227.push_back(V(0.24186));_array60227.push_back(V(0.92402));_array60227.push_back(V(0.92373));_array60227.push_back(V(0.92929));_array60227.push_back(V(0.92862));_array60227.push_back(V(0.23586));_array60227.push_back(V(0.23453));return j::array(std::move(_array60227));})());return j::array(std::move(_array60226));})());return j::array(std::move(_array60177));})();
this->_v_51014_GLYPH_CODES.get()=([&]()->V{V _receiver60232=j::builtin("Uint16Array");V _method60233=this->_literals[113];V _method=j::get(_receiver60232,_method60233);j::Args _params60234=j::Args{this->_v_51013_SHAPE_TABLE.get(),j::function([=](const j::Args &_args_fn51015,const V &_receiver_fn51015,const V &_self_fn51015) mutable ->V{
V _v_51016_ch;
V _pattern60228=_args_fn51015[0];
_v_51016_ch=j::get(_pattern60228,V(0));
return ([&]()->V{V _receiver60229=_v_51016_ch;V _method60230=this->_literals[263];V _method=j::get(_receiver60229,_method60230);j::Args _params60231=j::Args{V(0.0)};return j::call(_method,_params60231,_receiver60229);})();
return V{};
},1)};return j::call(_method,_params60234,_receiver60232);})();
this->_v_51017_GLYPH_INK.get()=([&]()->V{V _receiver60239=j::builtin("Float64Array");V _method60240=this->_literals[113];V _method=j::get(_receiver60239,_method60240);j::Args _params60241=j::Args{([&]()->V{V _receiver60236=this->_v_51013_SHAPE_TABLE.get();V _method60237=this->_literals[404];V _method=j::get(_receiver60236,_method60237);j::Args _params60238=j::Args{j::function([=](const j::Args &_args_fn51018,const V &_receiver_fn51018,const V &_self_fn51018) mutable ->V{
V _v_51019_v;
V _pattern60235=_args_fn51018[0];
_v_51019_v=j::get(_pattern60235,V(1));
return _v_51019_v;
return V{};
},1)};return j::call(_method,_params60238,_receiver60236);})()};return j::call(_method,_params60241,_receiver60239);})();
this->_v_51020_SOLID.get()=([&]()->V{V _callee60249=j::builtin("Set");return j::construct(_callee60249,j::Args{([&]()->V{V _receiver60245=([&]()->V{j::Args _array60248;for(const auto &_value:j::elements(this->_literals[405]))_array60248.push_back(_value);return j::array(std::move(_array60248));})();V _method60246=this->_literals[41];V _method=j::get(_receiver60245,_method60246);j::Args _params60247=j::Args{j::function([=](const j::Args &_args_fn51021,const V &_receiver_fn51021,const V &_self_fn51021) mutable ->V{
V _v_51022_c;
_v_51022_c=_args_fn51021[0];
return ([&]()->V{V _receiver60242=_v_51022_c;V _method60243=this->_literals[263];V _method=j::get(_receiver60242,_method60243);j::Args _params60244=j::Args{V(0.0)};return j::call(_method,_params60244,_receiver60242);})();
return V{};
},1)};return j::call(_method,_params60247,_receiver60245);})()});})();
this->_v_51023_SLASH.get()=([&]()->V{V _receiver60250=this->_literals[20];V _method60251=this->_literals[263];V _method=j::get(_receiver60250,_method60251);j::Args _params60252=j::Args{V(0.0)};return j::call(_method,_params60252,_receiver60250);})();
this->_v_51024_QUARTERS.get()=this->_literals[406];
this->_v_51025_PAGE.get()=([&]()->V{j::Args _array60253;_array60253.push_back(V(19.0));_array60253.push_back(V(21.0));_array60253.push_back(V(24.0));return j::array(std::move(_array60253));})();
this->_v_51026_LIGHT.get()=([&]()->V{j::Args _array60254;_array60254.push_back(V(232.0));_array60254.push_back(V(235.0));_array60254.push_back(V(239.0));return j::array(std::move(_array60254));})();
this->_v_51027_lum.get()=j::function([=](const j::Args &_args_fn51028,const V &_receiver_fn51028,const V &_self_fn51028) mutable ->V{
V _v_51029_c;
_v_51029_c=_args_fn51028[0];
{
V _v_51030_f;
_v_51030_f=j::function([=](const j::Args &_args_fn51031,const V &_receiver_fn51031,const V &_self_fn51031) mutable ->V{
V _v_51032_v;
_v_51032_v=_args_fn51031[0];
return (j::truth(([&]()->V{V _lhs60255=(_v_51032_v=j::binary("/",_v_51032_v,V(255.0)));V _rhs60256=V(0.03928);return j::binary("<=",_lhs60255,_rhs60256);})())?([&]()->V{V _lhs60258=_v_51032_v;V _rhs60259=V(12.92);return V(j::number(_lhs60258)/j::number(_rhs60259));})():([&]()->V{V _lhs60260=([&]()->V{V _lhs60262=([&]()->V{V _lhs60264=_v_51032_v;V _rhs60265=V(0.055);return j::binary("+",_lhs60264,_rhs60265);})();V _rhs60263=V(1.055);return V(j::number(_lhs60262)/j::number(_rhs60263));})();V _rhs60261=V(2.4);return V(std::pow(j::number(_lhs60260),j::number(_rhs60261)));})());
return V{};
},1);
return ([&]()->V{V _lhs60266=([&]()->V{V _lhs60268=([&]()->V{V _lhs60270=V(0.2126);V _rhs60271=([&]()->V{V _callee60272=_v_51030_f;return j::call(_callee60272,j::Args{j::get(_v_51029_c,V(0.0))});})();return V(j::number(_lhs60270)*j::number(_rhs60271));})();V _rhs60269=([&]()->V{V _lhs60273=V(0.7152);V _rhs60274=([&]()->V{V _callee60275=_v_51030_f;return j::call(_callee60275,j::Args{j::get(_v_51029_c,V(1.0))});})();return V(j::number(_lhs60273)*j::number(_rhs60274));})();return j::binary("+",_lhs60268,_rhs60269);})();V _rhs60267=([&]()->V{V _lhs60276=V(0.0722);V _rhs60277=([&]()->V{V _callee60278=_v_51030_f;return j::call(_callee60278,j::Args{j::get(_v_51029_c,V(2.0))});})();return V(j::number(_lhs60276)*j::number(_rhs60277));})();return j::binary("+",_lhs60266,_rhs60267);})();

}

return V{};
},1);
this->_v_51033_contrast.get()=j::function([=](const j::Args &_args_fn51034,const V &_receiver_fn51034,const V &_self_fn51034) mutable ->V{
V _v_51035_a;
V _v_51036_b;
_v_51035_a=_args_fn51034[0];
_v_51036_b=_args_fn51034[1];
return ([&]()->V{V _lhs60279=([&]()->V{V _lhs60281=([&]()->V{V _receiver60287=j::builtin("Math");V _method60288=this->_literals[66];V _method=j::get(_receiver60287,_method60288);j::Args _params60289=j::Args{([&]()->V{V _callee60283=this->_v_51027_lum.get();return j::call(_callee60283,j::Args{_v_51035_a});})(),([&]()->V{V _callee60284=this->_v_51027_lum.get();return j::call(_callee60284,j::Args{_v_51036_b});})()};return j::call(_method,_params60289,_receiver60287);})();V _rhs60282=V(0.05);return j::binary("+",_lhs60281,_rhs60282);})();V _rhs60280=([&]()->V{V _lhs60290=([&]()->V{V _receiver60296=j::builtin("Math");V _method60297=this->_literals[116];V _method=j::get(_receiver60296,_method60297);j::Args _params60298=j::Args{([&]()->V{V _callee60292=this->_v_51027_lum.get();return j::call(_callee60292,j::Args{_v_51035_a});})(),([&]()->V{V _callee60293=this->_v_51027_lum.get();return j::call(_callee60293,j::Args{_v_51036_b});})()};return j::call(_method,_params60298,_receiver60296);})();V _rhs60291=V(0.05);return j::binary("+",_lhs60290,_rhs60291);})();return V(j::number(_lhs60279)/j::number(_rhs60280));})();
return V{};
},2);
this->_v_51051_greyish.get()=j::function([=](const j::Args &_args_fn51052,const V &_receiver_fn51052,const V &_self_fn51052) mutable ->V{
V _v_51053_c;
_v_51053_c=_args_fn51052[0];
return ([&]()->V{V _logical60299=([&]()->V{V _lhs60300=([&]()->V{V _lhs60302=([&]()->V{V _receiver60305=j::builtin("Math");V _method60306=this->_literals[66];V _method=j::get(_receiver60305,_method60306);j::Args _params60307=([&](){j::Args _args60304;for(const auto &_v:j::elements(_v_51053_c))_args60304.push_back(_v);return _args60304;})();return j::call(_method,_params60307,_receiver60305);})();V _rhs60303=([&]()->V{V _receiver60309=j::builtin("Math");V _method60310=this->_literals[116];V _method=j::get(_receiver60309,_method60310);j::Args _params60311=([&](){j::Args _args60308;for(const auto &_v:j::elements(_v_51053_c))_args60308.push_back(_v);return _args60308;})();return j::call(_method,_params60311,_receiver60309);})();return V(j::number(_lhs60302)-j::number(_rhs60303));})();V _rhs60301=V(24.0);return j::binary("<",_lhs60300,_rhs60301);})();return !j::truth(_logical60299)?([&]()->V{V _lhs60312=([&]()->V{V _lhs60314=([&]()->V{V _lhs60316=([&]()->V{V _receiver60319=j::builtin("Math");V _method60320=this->_literals[66];V _method=j::get(_receiver60319,_method60320);j::Args _params60321=([&](){j::Args _args60318;for(const auto &_v:j::elements(_v_51053_c))_args60318.push_back(_v);return _args60318;})();return j::call(_method,_params60321,_receiver60319);})();V _rhs60317=([&]()->V{V _receiver60323=j::builtin("Math");V _method60324=this->_literals[116];V _method=j::get(_receiver60323,_method60324);j::Args _params60325=([&](){j::Args _args60322;for(const auto &_v:j::elements(_v_51053_c))_args60322.push_back(_v);return _args60322;})();return j::call(_method,_params60325,_receiver60323);})();return V(j::number(_lhs60316)-j::number(_rhs60317));})();V _rhs60315=([&]()->V{V _receiver60327=j::builtin("Math");V _method60328=this->_literals[66];V _method=j::get(_receiver60327,_method60328);j::Args _params60329=([&](){j::Args _args60326;for(const auto &_v:j::elements(_v_51053_c))_args60326.push_back(_v);return _args60326;})();return j::call(_method,_params60329,_receiver60327);})();return V(j::number(_lhs60314)/j::number(_rhs60315));})();V _rhs60313=V(0.3);return j::binary("<",_lhs60312,_rhs60313);})():_logical60299;})();
return V{};
},1);
this->_v_51065_white.get()=j::function([=](const j::Args &_args_fn51066,const V &_receiver_fn51066,const V &_self_fn51066) mutable ->V{
V _v_51067_c;
_v_51067_c=_args_fn51066[0];
{
V _v_51068_v;
_v_51068_v=([&]()->V{V _callee60330=this->_v_50457_rgb.get();return j::call(_callee60330,j::Args{_v_51067_c});})();
return ([&]()->V{V _logical60331=([&]()->V{V _logical60332=([&]()->V{V _lhs60333=j::get(_v_51068_v,V(0.0));V _rhs60334=V(215.0);return j::binary(">",_lhs60333,_rhs60334);})();return j::truth(_logical60332)?([&]()->V{V _lhs60335=j::get(_v_51068_v,V(1.0));V _rhs60336=V(215.0);return j::binary(">",_lhs60335,_rhs60336);})():_logical60332;})();return j::truth(_logical60331)?([&]()->V{V _lhs60337=j::get(_v_51068_v,V(2.0));V _rhs60338=V(215.0);return j::binary(">",_lhs60337,_rhs60338);})():_logical60331;})();

}

return V{};
},1);
this->_v_51069_PAPER.get()=([&]()->V{j::Args _array60339;_array60339.push_back(V(255.0));_array60339.push_back(V(255.0));_array60339.push_back(V(255.0));return j::array(std::move(_array60339));})();
this->_v_51080_tint.get()=j::function([=](const j::Args &_args_fn51081,const V &_receiver_fn51081,const V &_self_fn51081) mutable ->V{
V _v_51082_c;
j::Cell _v_51083_k;
_v_51082_c=_args_fn51081[0];
_v_51083_k.get()=_args_fn51081[1];
return ([&]()->V{V _callee60350=this->_v_50452_hex.get();return j::call(_callee60350,j::Args{([&]()->V{V _receiver60346=([&]()->V{V _callee60349=this->_v_50457_rgb.get();return j::call(_callee60349,j::Args{_v_51082_c});})();V _method60347=this->_literals[41];V _method=j::get(_receiver60346,_method60347);j::Args _params60348=j::Args{j::function([=](const j::Args &_args_fn51084,const V &_receiver_fn51084,const V &_self_fn51084) mutable ->V{
V _v_51085_v;
_v_51085_v=_args_fn51084[0];
return ([&]()->V{V _lhs60340=_v_51085_v;V _rhs60341=([&]()->V{V _lhs60342=([&]()->V{V _lhs60344=V(255.0);V _rhs60345=_v_51085_v;return V(j::number(_lhs60344)-j::number(_rhs60345));})();V _rhs60343=_v_51083_k.get();return V(j::number(_lhs60342)*j::number(_rhs60343));})();return j::binary("+",_lhs60340,_rhs60341);})();
return V{};
},1)};return j::call(_method,_params60348,_receiver60346);})()});})();
return V{};
},2);
{V _base60351=V{};V _class60352=j::make_class("Raster",_base60351,j::function([=](const j::Args &_args_fn51087,const V &_receiver_fn51087,const V &_self_fn51087) mutable ->V{
j::put(_receiver_fn51087,this->_literals[273],V{});j::put(_receiver_fn51087,this->_literals[74],V{});j::put(_receiver_fn51087,this->_literals[272],V{});j::put(_receiver_fn51087,this->_literals[407],([&]()->V{V _callee60353=j::builtin("Float64Array");return j::construct(_callee60353,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[407]));j::put(_receiver_fn51087,this->_literals[408],([&]()->V{V _callee60354=j::builtin("Float64Array");return j::construct(_callee60354,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[408]));j::put(_receiver_fn51087,this->_literals[409],([&]()->V{V _callee60355=j::builtin("Float64Array");return j::construct(_callee60355,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[409]));j::put(_receiver_fn51087,this->_literals[410],([&]()->V{V _callee60356=j::builtin("Float64Array");return j::construct(_callee60356,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[410]));j::put(_receiver_fn51087,this->_literals[411],([&]()->V{V _callee60357=j::builtin("Int8Array");return j::construct(_callee60357,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[411]));j::put(_receiver_fn51087,this->_literals[412],([&]()->V{V _callee60358=j::builtin("Uint32Array");return j::construct(_callee60358,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[412]));j::put(_receiver_fn51087,this->_literals[413],([&]()->V{V _callee60359=j::builtin("Int32Array");return j::construct(_callee60359,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[413]));j::put(_receiver_fn51087,this->_literals[414],([&]()->V{V _callee60360=j::builtin("Float64Array");return j::construct(_callee60360,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[414]));j::put(_receiver_fn51087,this->_literals[415],([&]()->V{V _callee60361=j::builtin("Float64Array");return j::construct(_callee60361,j::Args{V(64.0)});})());_receiver_fn51087.data->hidden.insert(j::string(this->_literals[415]));V _v_51088_W;
V _v_51089_H;
_v_51088_W=_args_fn51087[0];
_v_51089_H=_args_fn51087[1];
{
(void)(([&]()->V{V _base60363=_receiver_fn51087;V _key60364=this->_literals[273];V _assign60362=_v_51088_W;return j::put(_base60363,_key60364,_assign60362);})());
(void)(([&]()->V{V _base60366=_receiver_fn51087;V _key60367=this->_literals[74];V _assign60365=_v_51089_H;return j::put(_base60366,_key60367,_assign60365);})());
(void)(([&]()->V{V _base60369=_receiver_fn51087;V _key60370=this->_literals[272];V _assign60368=([&]()->V{V _callee60373=j::builtin("Uint16Array");return j::construct(_callee60373,j::Args{([&]()->V{V _lhs60371=_v_51088_W;V _rhs60372=_v_51089_H;return V(j::number(_lhs60371)*j::number(_rhs60372));})()});})();return j::put(_base60369,_key60370,_assign60368);})());

}

return V{};
},2));this->_v_51086_Raster.get()=_class60352;j::class_method(_class60352,this->_literals[416],j::function([=](const j::Args &_args_fn51090,const V &_receiver_fn51090,const V &_self_fn51090) mutable ->V{
V _v_51091_n;
_v_51091_n=_args_fn51090[0];
{
V _v_51092_k;
if(j::truth(([&]()->V{V _lhs60374=_v_51091_n;V _rhs60375=j::get(j::get(_receiver_fn51090,this->_literals[407]),this->_literals[5]);return j::binary("<=",_lhs60374,_rhs60375);})())){return V{};
}
_v_51092_k=([&]()->V{V _receiver60380=j::builtin("Math");V _method60381=this->_literals[66];V _method=j::get(_receiver60380,_method60381);j::Args _params60382=j::Args{_v_51091_n,([&]()->V{V _lhs60376=j::get(j::get(_receiver_fn51090,this->_literals[407]),this->_literals[5]);V _rhs60377=V(2.0);return V(j::number(_lhs60376)*j::number(_rhs60377));})()};return j::call(_method,_params60382,_receiver60380);})();
(void)(([&]()->V{V _base60384=_receiver_fn51090;V _key60385=this->_literals[407];V _assign60383=([&]()->V{V _callee60386=j::builtin("Float64Array");return j::construct(_callee60386,j::Args{_v_51092_k});})();return j::put(_base60384,_key60385,_assign60383);})());
(void)(([&]()->V{V _base60388=_receiver_fn51090;V _key60389=this->_literals[408];V _assign60387=([&]()->V{V _callee60390=j::builtin("Float64Array");return j::construct(_callee60390,j::Args{_v_51092_k});})();return j::put(_base60388,_key60389,_assign60387);})());
(void)(([&]()->V{V _base60392=_receiver_fn51090;V _key60393=this->_literals[409];V _assign60391=([&]()->V{V _callee60394=j::builtin("Float64Array");return j::construct(_callee60394,j::Args{_v_51092_k});})();return j::put(_base60392,_key60393,_assign60391);})());
(void)(([&]()->V{V _base60396=_receiver_fn51090;V _key60397=this->_literals[410];V _assign60395=([&]()->V{V _callee60398=j::builtin("Float64Array");return j::construct(_callee60398,j::Args{_v_51092_k});})();return j::put(_base60396,_key60397,_assign60395);})());
(void)(([&]()->V{V _base60400=_receiver_fn51090;V _key60401=this->_literals[411];V _assign60399=([&]()->V{V _callee60402=j::builtin("Int8Array");return j::construct(_callee60402,j::Args{_v_51092_k});})();return j::put(_base60400,_key60401,_assign60399);})());
(void)(([&]()->V{V _base60404=_receiver_fn51090;V _key60405=this->_literals[412];V _assign60403=([&]()->V{V _callee60406=j::builtin("Uint32Array");return j::construct(_callee60406,j::Args{_v_51092_k});})();return j::put(_base60404,_key60405,_assign60403);})());
(void)(([&]()->V{V _base60408=_receiver_fn51090;V _key60409=this->_literals[413];V _assign60407=([&]()->V{V _callee60410=j::builtin("Int32Array");return j::construct(_callee60410,j::Args{_v_51092_k});})();return j::put(_base60408,_key60409,_assign60407);})());
(void)(([&]()->V{V _base60412=_receiver_fn51090;V _key60413=this->_literals[414];V _assign60411=([&]()->V{V _callee60414=j::builtin("Float64Array");return j::construct(_callee60414,j::Args{_v_51092_k});})();return j::put(_base60412,_key60413,_assign60411);})());
(void)(([&]()->V{V _base60416=_receiver_fn51090;V _key60417=this->_literals[415];V _assign60415=([&]()->V{V _callee60418=j::builtin("Float64Array");return j::construct(_callee60418,j::Args{_v_51092_k});})();return j::put(_base60416,_key60417,_assign60415);})());

}

return V{};
},1),false,"method");j::class_method(_class60352,this->_literals[130],j::function([=](const j::Args &_args_fn51093,const V &_receiver_fn51093,const V &_self_fn51093) mutable ->V{
V _v_51094_rings;
V _v_51095_evenodd;
V _v_51096_id;
_v_51094_rings=_args_fn51093[0];
_v_51095_evenodd=_args_fn51093[1];
_v_51096_id=_args_fn51093[2];
{
V _v_51097_n;
j::Cell _v_51099_ya;
V _v_51100_yb;
V _v_51101_xa;
V _v_51102_dx;
V _v_51103_dir;
V _v_51104_e;
V _v_51105_lo;
V _v_51106_hi;
V _v_51116_order;
V _v_51121_act;
V _v_51122_up;
V _v_51123_down;
V _v_51124_ids;
V _v_51125_W;
V _v_51126_na;
V _v_51127_next;
V _v_51128_r0;
V _v_51129_r1;
_v_51097_n=V(0.0);
{for(const auto &_item60419:j::elements(_v_51094_rings)){V _v_51098_r;
_v_51098_r=_item60419;
(void)((_v_51097_n=j::binary("+",_v_51097_n,([&]()->V{V _lhs60421=j::get(_v_51098_r,this->_literals[5]);V _rhs60422=V(1.0);return V(int(j::i32(_lhs60421)>>(j::u32(_rhs60422)&31)));})())));
}}
(void)(([&]()->V{V _receiver60423=_receiver_fn51093;V _method60424=this->_literals[416];V _method=j::get(_receiver60423,_method60424);j::Args _params60425=j::Args{_v_51097_n};return j::call(_method,_params60425,_receiver60423);})());
_v_51099_ya.get()=j::get(_receiver_fn51093,this->_literals[407]);
_v_51100_yb=j::get(_receiver_fn51093,this->_literals[408]);
_v_51101_xa=j::get(_receiver_fn51093,this->_literals[409]);
_v_51102_dx=j::get(_receiver_fn51093,this->_literals[410]);
_v_51103_dir=j::get(_receiver_fn51093,this->_literals[411]);
_v_51104_e=V(0.0);
_v_51105_lo=j::builtin("Infinity");
_v_51106_hi=j::unary("-",j::builtin("Infinity"));
{for(const auto &_item60426:j::elements(_v_51094_rings)){V _v_51107_r;
_v_51107_r=_item60426;
{
V _v_51108_k;
_v_51108_k=([&]()->V{V _lhs60427=j::get(_v_51107_r,this->_literals[5]);V _rhs60428=V(1.0);return V(int(j::i32(_lhs60427)>>(j::u32(_rhs60428)&31)));})();
{V _v_51109_i;
_v_51109_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs60429=_v_51109_i;V _rhs60430=_v_51108_k;return j::binary("<",_lhs60429,_rhs60430);})());(void)(j::increment(_v_51109_i,1,false))){
V _v_51110_j;
V _v_51111_x0;
V _v_51112_y0;
V _v_51113_x1;
V _v_51114_y1;
V _v_51115_down;
_v_51110_j=(j::truth(([&]()->V{V _lhs60431=([&]()->V{V _lhs60433=_v_51109_i;V _rhs60434=V(1.0);return j::binary("+",_lhs60433,_rhs60434);})();V _rhs60432=_v_51108_k;return V(j::equal(_lhs60431,_rhs60432,true));})())?V(0.0):([&]()->V{V _lhs60435=_v_51109_i;V _rhs60436=V(1.0);return j::binary("+",_lhs60435,_rhs60436);})());
_v_51111_x0=j::get(_v_51107_r,([&]()->V{V _lhs60437=V(2.0);V _rhs60438=_v_51109_i;return V(j::number(_lhs60437)*j::number(_rhs60438));})());
_v_51112_y0=j::get(_v_51107_r,([&]()->V{V _lhs60439=([&]()->V{V _lhs60441=V(2.0);V _rhs60442=_v_51109_i;return V(j::number(_lhs60441)*j::number(_rhs60442));})();V _rhs60440=V(1.0);return j::binary("+",_lhs60439,_rhs60440);})());
_v_51113_x1=j::get(_v_51107_r,([&]()->V{V _lhs60443=V(2.0);V _rhs60444=_v_51110_j;return V(j::number(_lhs60443)*j::number(_rhs60444));})());
_v_51114_y1=j::get(_v_51107_r,([&]()->V{V _lhs60445=([&]()->V{V _lhs60447=V(2.0);V _rhs60448=_v_51110_j;return V(j::number(_lhs60447)*j::number(_rhs60448));})();V _rhs60446=V(1.0);return j::binary("+",_lhs60445,_rhs60446);})());
if(j::truth(([&]()->V{V _logical60449=([&]()->V{V _lhs60450=_v_51112_y0;V _rhs60451=_v_51114_y1;return V(j::equal(_lhs60450,_rhs60451,true));})();return !j::truth(_logical60449)?j::unary("!",([&]()->V{V _logical60452=([&]()->V{V _logical60453=([&]()->V{V _logical60454=([&]()->V{V _receiver60455=j::builtin("Number");V _method60456=this->_literals[57];V _method=j::get(_receiver60455,_method60456);j::Args _params60457=j::Args{_v_51112_y0};return j::call(_method,_params60457,_receiver60455);})();return j::truth(_logical60454)?([&]()->V{V _receiver60458=j::builtin("Number");V _method60459=this->_literals[57];V _method=j::get(_receiver60458,_method60459);j::Args _params60460=j::Args{_v_51114_y1};return j::call(_method,_params60460,_receiver60458);})():_logical60454;})();return j::truth(_logical60453)?([&]()->V{V _receiver60461=j::builtin("Number");V _method60462=this->_literals[57];V _method=j::get(_receiver60461,_method60462);j::Args _params60463=j::Args{_v_51111_x0};return j::call(_method,_params60463,_receiver60461);})():_logical60453;})();return j::truth(_logical60452)?([&]()->V{V _receiver60464=j::builtin("Number");V _method60465=this->_literals[57];V _method=j::get(_receiver60464,_method60465);j::Args _params60466=j::Args{_v_51113_x1};return j::call(_method,_params60466,_receiver60464);})():_logical60452;})()):_logical60449;})())){continue;
}
_v_51115_down=([&]()->V{V _lhs60467=_v_51114_y1;V _rhs60468=_v_51112_y0;return j::binary(">",_lhs60467,_rhs60468);})();
(void)(([&]()->V{V _base60470=_v_51099_ya.get();V _key60471=_v_51104_e;V _assign60469=(j::truth(_v_51115_down)?_v_51112_y0:_v_51114_y1);return j::put(_base60470,_key60471,_assign60469);})());
(void)(([&]()->V{V _base60473=_v_51100_yb;V _key60474=_v_51104_e;V _assign60472=(j::truth(_v_51115_down)?_v_51114_y1:_v_51112_y0);return j::put(_base60473,_key60474,_assign60472);})());
(void)(([&]()->V{V _base60476=_v_51101_xa;V _key60477=_v_51104_e;V _assign60475=(j::truth(_v_51115_down)?_v_51111_x0:_v_51113_x1);return j::put(_base60476,_key60477,_assign60475);})());
(void)(([&]()->V{V _base60479=_v_51102_dx;V _key60480=_v_51104_e;V _assign60478=([&]()->V{V _lhs60481=([&]()->V{V _lhs60483=_v_51113_x1;V _rhs60484=_v_51111_x0;return V(j::number(_lhs60483)-j::number(_rhs60484));})();V _rhs60482=([&]()->V{V _lhs60485=_v_51114_y1;V _rhs60486=_v_51112_y0;return V(j::number(_lhs60485)-j::number(_rhs60486));})();return V(j::number(_lhs60481)/j::number(_rhs60482));})();return j::put(_base60479,_key60480,_assign60478);})());
(void)(([&]()->V{V _base60488=_v_51103_dir;V _key60489=_v_51104_e;V _assign60487=(j::truth(_v_51115_down)?V(1.0):j::unary("-",V(1.0)));return j::put(_base60488,_key60489,_assign60487);})());
if(j::truth(([&]()->V{V _lhs60490=j::get(_v_51099_ya.get(),_v_51104_e);V _rhs60491=_v_51105_lo;return j::binary("<",_lhs60490,_rhs60491);})())){(void)((_v_51105_lo=j::get(_v_51099_ya.get(),_v_51104_e)));
}
if(j::truth(([&]()->V{V _lhs60493=j::get(_v_51100_yb,_v_51104_e);V _rhs60494=_v_51106_hi;return j::binary(">",_lhs60493,_rhs60494);})())){(void)((_v_51106_hi=j::get(_v_51100_yb,_v_51104_e)));
}
(void)(j::increment(_v_51104_e,1,false));

}
}

}
}}
if(j::truth(j::unary("!",_v_51104_e))){return V{};
}
_v_51116_order=([&]()->V{V _receiver60496=j::get(_receiver_fn51093,this->_literals[412]);V _method60497=this->_literals[186];V _method=j::get(_receiver60496,_method60497);j::Args _params60498=j::Args{V(0.0),_v_51104_e};return j::call(_method,_params60498,_receiver60496);})();
{V _v_51117_i;
_v_51117_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs60499=_v_51117_i;V _rhs60500=_v_51104_e;return j::binary("<",_lhs60499,_rhs60500);})());(void)(j::increment(_v_51117_i,1,false))){(void)(([&]()->V{V _base60502=_v_51116_order;V _key60503=_v_51117_i;V _assign60501=_v_51117_i;return j::put(_base60502,_key60503,_assign60501);})());
}}
(void)(([&]()->V{V _receiver60506=_v_51116_order;V _method60507=this->_literals[128];V _method=j::get(_receiver60506,_method60507);j::Args _params60508=j::Args{j::function([=](const j::Args &_args_fn51118,const V &_receiver_fn51118,const V &_self_fn51118) mutable ->V{
V _v_51119_a;
V _v_51120_b;
_v_51119_a=_args_fn51118[0];
_v_51120_b=_args_fn51118[1];
return ([&]()->V{V _lhs60504=j::get(_v_51099_ya.get(),_v_51119_a);V _rhs60505=j::get(_v_51099_ya.get(),_v_51120_b);return V(j::number(_lhs60504)-j::number(_rhs60505));})();
return V{};
},2)};return j::call(_method,_params60508,_receiver60506);})());
_v_51121_act=j::get(_receiver_fn51093,this->_literals[413]);
_v_51122_up=j::get(_receiver_fn51093,this->_literals[414]);
_v_51123_down=j::get(_receiver_fn51093,this->_literals[415]);
_v_51124_ids=j::get(_receiver_fn51093,this->_literals[272]);
_v_51125_W=j::get(_receiver_fn51093,this->_literals[273]);
_v_51126_na=V(0.0);
_v_51127_next=V(0.0);
_v_51128_r0=([&]()->V{V _receiver60516=j::builtin("Math");V _method60517=this->_literals[66];V _method=j::get(_receiver60516,_method60517);j::Args _params60518=j::Args{V(0.0),([&]()->V{V _number60511=([&]()->V{V _lhs60512=_v_51105_lo;V _rhs60513=V(0.5);return V(j::number(_lhs60512)-j::number(_rhs60513));})();return V(std::ceil(j::number(_number60511)));})()};return j::call(_method,_params60518,_receiver60516);})();
_v_51129_r1=([&]()->V{V _receiver60530=j::builtin("Math");V _method60531=this->_literals[116];V _method=j::get(_receiver60530,_method60531);j::Args _params60532=j::Args{([&]()->V{V _lhs60519=j::get(_receiver_fn51093,this->_literals[74]);V _rhs60520=V(1.0);return V(j::number(_lhs60519)-j::number(_rhs60520));})(),([&]()->V{V _lhs60521=([&]()->V{V _number60525=([&]()->V{V _lhs60526=_v_51106_hi;V _rhs60527=V(0.5);return V(j::number(_lhs60526)-j::number(_rhs60527));})();return V(std::ceil(j::number(_number60525)));})();V _rhs60522=V(1.0);return V(j::number(_lhs60521)-j::number(_rhs60522));})()};return j::call(_method,_params60532,_receiver60530);})();
{V _v_51130_row;
_v_51130_row=_v_51128_r0;
for(;j::truth(([&]()->V{V _lhs60533=_v_51130_row;V _rhs60534=_v_51129_r1;return j::binary("<=",_lhs60533,_rhs60534);})());(void)(j::increment(_v_51130_row,1,false))){
V _v_51131_yc;
V _v_51132_nu;
V _v_51133_nd;
V _v_51137_wind;
V _v_51138_crossed;
V _v_51139_a;
V _v_51140_b;
V _v_51141_prev;
_v_51131_yc=([&]()->V{V _lhs60535=_v_51130_row;V _rhs60536=V(0.5);return j::binary("+",_lhs60535,_rhs60536);})();
while(j::truth(([&]()->V{V _logical60537=([&]()->V{V _lhs60538=_v_51127_next;V _rhs60539=_v_51104_e;return j::binary("<",_lhs60538,_rhs60539);})();return j::truth(_logical60537)?([&]()->V{V _lhs60540=j::get(_v_51099_ya.get(),j::get(_v_51116_order,_v_51127_next));V _rhs60541=_v_51131_yc;return j::binary("<=",_lhs60540,_rhs60541);})():_logical60537;})())){(void)(([&]()->V{V _base60543=_v_51121_act;V _key60544=j::increment(_v_51126_na,1,false);V _assign60542=j::get(_v_51116_order,j::increment(_v_51127_next,1,false));return j::put(_base60543,_key60544,_assign60542);})());
}
_v_51132_nu=V(0.0);
_v_51133_nd=V(0.0);
{V _v_51134_k;
_v_51134_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs60545=_v_51134_k;V _rhs60546=_v_51126_na;return j::binary("<",_lhs60545,_rhs60546);})());(void)(j::increment(_v_51134_k,1,false))){
V _v_51135_i;
V _v_51136_x;
_v_51135_i=j::get(_v_51121_act,_v_51134_k);
if(j::truth(([&]()->V{V _lhs60547=j::get(_v_51100_yb,_v_51135_i);V _rhs60548=_v_51131_yc;return j::binary("<=",_lhs60547,_rhs60548);})())){
(void)(([&]()->V{V _base60550=_v_51121_act;V _key60551=j::increment(_v_51134_k,-1,false);V _assign60549=j::get(_v_51121_act,j::increment(_v_51126_na,-1,true));return j::put(_base60550,_key60551,_assign60549);})());
continue;

}

if(j::truth(([&]()->V{V _lhs60552=j::get(_v_51099_ya.get(),_v_51135_i);V _rhs60553=_v_51131_yc;return j::binary(">",_lhs60552,_rhs60553);})())){continue;
}
_v_51136_x=([&]()->V{V _lhs60554=j::get(_v_51101_xa,_v_51135_i);V _rhs60555=([&]()->V{V _lhs60556=([&]()->V{V _lhs60558=_v_51131_yc;V _rhs60559=j::get(_v_51099_ya.get(),_v_51135_i);return V(j::number(_lhs60558)-j::number(_rhs60559));})();V _rhs60557=j::get(_v_51102_dx,_v_51135_i);return V(j::number(_lhs60556)*j::number(_rhs60557));})();return j::binary("+",_lhs60554,_rhs60555);})();
if(j::truth(([&]()->V{V _lhs60560=j::get(_v_51103_dir,_v_51135_i);V _rhs60561=V(0.0);return j::binary(">",_lhs60560,_rhs60561);})())){(void)(([&]()->V{V _base60563=_v_51123_down;V _key60564=j::increment(_v_51133_nd,1,false);V _assign60562=_v_51136_x;return j::put(_base60563,_key60564,_assign60562);})());
}else {(void)(([&]()->V{V _base60566=_v_51122_up;V _key60567=j::increment(_v_51132_nu,1,false);V _assign60565=_v_51136_x;return j::put(_base60566,_key60567,_assign60565);})());
}

}
}
(void)(([&]()->V{V _callee60568=this->_v_51146_sortFirst.get();return j::call(_callee60568,j::Args{_v_51123_down,_v_51133_nd});})());
(void)(([&]()->V{V _callee60569=this->_v_51146_sortFirst.get();return j::call(_callee60569,j::Args{_v_51122_up,_v_51132_nu});})());
_v_51137_wind=V(0.0);
_v_51138_crossed=V(0.0);
_v_51139_a=V(0.0);
_v_51140_b=V(0.0);
_v_51141_prev=V(0.0);
while(j::truth(([&]()->V{V _logical60570=([&]()->V{V _lhs60571=_v_51139_a;V _rhs60572=_v_51133_nd;return j::binary("<",_lhs60571,_rhs60572);})();return !j::truth(_logical60570)?([&]()->V{V _lhs60573=_v_51140_b;V _rhs60574=_v_51132_nu;return j::binary("<",_lhs60573,_rhs60574);})():_logical60570;})())){
V _v_51142_isDown;
V _v_51143_x;
_v_51142_isDown=([&]()->V{V _logical60575=([&]()->V{V _lhs60576=_v_51140_b;V _rhs60577=_v_51132_nu;return j::binary(">=",_lhs60576,_rhs60577);})();return !j::truth(_logical60575)?([&]()->V{V _logical60578=([&]()->V{V _lhs60579=_v_51139_a;V _rhs60580=_v_51133_nd;return j::binary("<",_lhs60579,_rhs60580);})();return j::truth(_logical60578)?([&]()->V{V _lhs60581=j::get(_v_51123_down,_v_51139_a);V _rhs60582=j::get(_v_51122_up,_v_51140_b);return j::binary("<=",_lhs60581,_rhs60582);})():_logical60578;})():_logical60575;})();
_v_51143_x=(j::truth(_v_51142_isDown)?j::get(_v_51123_down,j::increment(_v_51139_a,1,false)):j::get(_v_51122_up,j::increment(_v_51140_b,1,false)));
if(j::truth(([&]()->V{V _logical60583=_v_51138_crossed;return j::truth(_logical60583)?(j::truth(_v_51095_evenodd)?([&]()->V{V _lhs60584=_v_51138_crossed;V _rhs60585=V(1.0);return V(int(j::i32(_lhs60584)&j::i32(_rhs60585)));})():([&]()->V{V _lhs60586=_v_51137_wind;V _rhs60587=V(0.0);return V(!j::equal(_lhs60586,_rhs60587,true));})()):_logical60583;})())){
V _v_51144_c0;
V _v_51145_c1;
_v_51144_c0=([&]()->V{V _receiver60595=j::builtin("Math");V _method60596=this->_literals[66];V _method=j::get(_receiver60595,_method60596);j::Args _params60597=j::Args{V(0.0),([&]()->V{V _number60590=([&]()->V{V _lhs60591=_v_51141_prev;V _rhs60592=V(0.5);return V(j::number(_lhs60591)-j::number(_rhs60592));})();return V(std::ceil(j::number(_number60590)));})()};return j::call(_method,_params60597,_receiver60595);})();
_v_51145_c1=([&]()->V{V _receiver60605=j::builtin("Math");V _method60606=this->_literals[116];V _method=j::get(_receiver60605,_method60606);j::Args _params60607=j::Args{_v_51125_W,([&]()->V{V _number60600=([&]()->V{V _lhs60601=_v_51143_x;V _rhs60602=V(0.5);return V(j::number(_lhs60601)-j::number(_rhs60602));})();return V(std::ceil(j::number(_number60600)));})()};return j::call(_method,_params60607,_receiver60605);})();
if(j::truth(([&]()->V{V _lhs60608=_v_51145_c1;V _rhs60609=_v_51144_c0;return j::binary(">",_lhs60608,_rhs60609);})())){(void)(([&]()->V{V _receiver60618=_v_51124_ids;V _method60619=this->_literals[130];V _method=j::get(_receiver60618,_method60619);j::Args _params60620=j::Args{_v_51096_id,([&]()->V{V _lhs60610=([&]()->V{V _lhs60612=_v_51130_row;V _rhs60613=_v_51125_W;return V(j::number(_lhs60612)*j::number(_rhs60613));})();V _rhs60611=_v_51144_c0;return j::binary("+",_lhs60610,_rhs60611);})(),([&]()->V{V _lhs60614=([&]()->V{V _lhs60616=_v_51130_row;V _rhs60617=_v_51125_W;return V(j::number(_lhs60616)*j::number(_rhs60617));})();V _rhs60615=_v_51145_c1;return j::binary("+",_lhs60614,_rhs60615);})()};return j::call(_method,_params60620,_receiver60618);})());
}

}

(void)((_v_51137_wind=j::binary("+",_v_51137_wind,(j::truth(_v_51142_isDown)?V(1.0):j::unary("-",V(1.0))))));
(void)(j::increment(_v_51138_crossed,1,false));
(void)((_v_51141_prev=_v_51143_x));

}


}
}

}

return V{};
},3),false,"method");}
this->_v_51241_num.get()=j::function([=](const j::Args &_args_fn51242,const V &_receiver_fn51242,const V &_self_fn51242) mutable ->V{
V _v_51243_v;
V _v_51244_fallback;
_v_51243_v=_args_fn51242[0];
_v_51244_fallback=_args_fn51242[1];
return (j::truth(([&]()->V{V _logical60623=([&]()->V{V _lhs60624=j::unary("typeof",_v_51243_v);V _rhs60625=this->_literals[220];return V(j::equal(_lhs60624,_rhs60625,true));})();return j::truth(_logical60623)?([&]()->V{V _receiver60626=j::builtin("Number");V _method60627=this->_literals[57];V _method=j::get(_receiver60626,_method60627);j::Args _params60628=j::Args{_v_51243_v};return j::call(_method,_params60628,_receiver60626);})():_logical60623;})())?_v_51243_v:_v_51244_fallback);
return V{};
},2);
this->_v_51930_svgOf.get()=j::function([=](const j::Args &_args_fn51931,const V &_receiver_fn51931,const V &_self_fn51931) mutable ->V{
V _v_51932_svg;
_v_51932_svg=_args_fn51931[0];
{
if(j::truth(([&]()->V{V _lhs60629=j::unary("typeof",_v_51932_svg);V _rhs60630=this->_literals[117];return V(j::equal(_lhs60629,_rhs60630,true));})())){return ([&]()->V{V _callee60631=this->_v_50815_parseSvg.get();return j::call(_callee60631,j::Args{_v_51932_svg});})();
}
if(j::truth(([&]()->V{V _logical60632=([&]()->V{V _logical60633=([&]()->V{V _logical60634=j::unary("!",_v_51932_svg);return !j::truth(_logical60634)?([&]()->V{V _lhs60635=j::unary("typeof",_v_51932_svg);V _rhs60636=this->_literals[218];return V(!j::equal(_lhs60635,_rhs60636,true));})():_logical60634;})();return !j::truth(_logical60633)?j::unary("!",([&]()->V{V _receiver60637=j::builtin("Array");V _method60638=this->_literals[207];V _method=j::get(_receiver60637,_method60638);j::Args _params60639=j::Args{j::get(_v_51932_svg,this->_literals[179])};return j::call(_method,_params60639,_receiver60637);})()):_logical60633;})();return !j::truth(_logical60632)?j::unary("!",([&]()->V{V _receiver60640=j::builtin("Array");V _method60641=this->_literals[207];V _method=j::get(_receiver60640,_method60641);j::Args _params60642=j::Args{j::get(_v_51932_svg,this->_literals[129])};return j::call(_method,_params60642,_receiver60640);})()):_logical60632;})())){(void)(([&]()->V{V _callee60643=this->_v_50450_fail.get();return j::call(_callee60643,j::Args{this->_literals[417]});})());
}
return _v_51932_svg;

}

return V{};
},1);
this->_v_52138_parsed.get()=([&]()->V{V _callee60644=j::builtin("Map");return j::construct(_callee60644,j::Args{});})();
this->_v_52139_plans.get()=([&]()->V{V _callee60645=j::builtin("WeakMap");return j::construct(_callee60645,j::Args{});})();
this->_v_52140_identities.get()=([&]()->V{V _callee60646=j::builtin("WeakMap");return j::construct(_callee60646,j::Args{});})();
this->_v_52141_identity.get()=V(0.0);
this->_v_52142_keyOf.get()=j::function([=](const j::Args &_args_fn52143,const V &_receiver_fn52143,const V &_self_fn52143) mutable ->V{
V _v_52144_o;
V _v_52145_s;
V _v_52146_region;
_v_52144_o=_args_fn52143[0];
_v_52145_s=_args_fn52143[1];
_v_52146_region=_args_fn52143[2];
return ([&]()->V{V _receiver60670=j::builtin("JSON");V _method60671=this->_literals[215];V _method=j::get(_receiver60670,_method60671);j::Args _params60672=j::Args{([&]()->V{j::Args _array60647;_array60647.push_back(j::get(_v_52145_s,this->_literals[251]));_array60647.push_back(j::get(_v_52145_s,this->_literals[252]));_array60647.push_back(j::get(_v_52145_s,this->_literals[231]));_array60647.push_back(_v_52146_region);_array60647.push_back(_v_52144_o);return j::array(std::move(_array60647));})(),j::function([=](const j::Args &_args_fn52147,const V &_receiver_fn52147,const V &_self_fn52147) mutable ->V{
V _v_52148__;
V _v_52149_v;
_v_52148__=_args_fn52147[0];
_v_52149_v=_args_fn52147[1];
return (j::truth(([&]()->V{V _logical60648=([&]()->V{V _lhs60649=j::unary("typeof",_v_52149_v);V _rhs60650=this->_literals[217];return V(j::equal(_lhs60649,_rhs60650,true));})();return !j::truth(_logical60648)?([&]()->V{V _logical60651=([&]()->V{V _logical60652=([&]()->V{V _logical60653=_v_52149_v;return j::truth(_logical60653)?([&]()->V{V _lhs60654=j::unary("typeof",_v_52149_v);V _rhs60655=this->_literals[218];return V(j::equal(_lhs60654,_rhs60655,true));})():_logical60653;})();return j::truth(_logical60652)?j::unary("!",([&]()->V{V _receiver60656=j::builtin("Array");V _method60657=this->_literals[207];V _method=j::get(_receiver60656,_method60657);j::Args _params60658=j::Args{_v_52149_v};return j::call(_method,_params60658,_receiver60656);})()):_logical60652;})();return j::truth(_logical60651)?([&]()->V{V _logical60659=([&]()->V{V _callee60660=this->_v_50989_isSource.get();return j::call(_callee60660,j::Args{_v_52149_v});})();return !j::truth(_logical60659)?([&]()->V{V _callee60661=this->_v_50985_isPartMaterial.get();return j::call(_callee60661,j::Args{_v_52149_v});})():_logical60659;})():_logical60651;})():_logical60648;})())?([&]()->V{std::u16string _text60662;_text60662+=u"#";_text60662+=j::string(([&]()->V{V _logical60663=([&]()->V{V _receiver60664=this->_v_52140_identities.get();V _method60665=this->_literals[54];V _method=j::get(_receiver60664,_method60665);j::Args _params60666=j::Args{_v_52149_v};return j::call(_method,_params60666,_receiver60664);})();return j::nullish(_logical60663)?(([&]()->V{V _receiver60667=this->_v_52140_identities.get();V _method60668=this->_literals[123];V _method=j::get(_receiver60667,_method60668);j::Args _params60669=j::Args{_v_52149_v,j::increment(this->_v_52141_identity.get(),1,true)};return j::call(_method,_params60669,_receiver60667);})(),this->_v_52141_identity.get()):_logical60663;})());_text60662+=u"";return V(std::move(_text60662));})():_v_52149_v);
return V{};
},2)};return j::call(_method,_params60672,_receiver60670);})();
return V{};
},3);
}
};
}
std::unique_ptr<Module> new_kit_vector(){return std::make_unique<Generated_kit_vector>();}
}
