// Native source generated from src/kit/shapes3d.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_shapes3d final:j::Module {
j::Cell _v_42440_INK;
j::Cell _v_42441_NONE;
j::Cell _v_42442_Palette;
j::Cell _v_42443_Surface;
j::Cell _v_42444_TAU;
j::Cell _v_42445_and;
j::Cell _v_42446_code;
j::Cell _v_42447_named;
j::Cell _v_42448_namedColors;
j::Cell _v_42449_fail;
j::Cell _v_42450_fract;
j::Cell _v_42451_hash;
j::Cell _v_42452_isHex;
j::Cell _v_42453_mix;
j::Cell _v_42454_mulberry32;
j::Cell _v_42455_piece;
j::Cell _v_42456_rampOf;
j::Cell _v_42457_rgb;
j::Cell _v_42458_smoothstep;
j::Cell _v_42459_specOf;
j::Cell _v_42460_spread;
j::Cell _v_42461_suggest;
j::Cell _v_42462_shown;
j::Cell _v_42465_positive;
j::Cell _v_42470_finite;
j::Cell _v_42475_wholeIn;
j::Cell _v_42482_vec3;
j::Cell _v_42489_TURNS;
j::Cell _v_42490_anglesOf;
j::Cell _v_42502_SPINS;
j::Cell _v_42503_or;
j::Cell _v_42506_MEANT;
j::Cell _v_42507_known;
j::Cell _v_42517_wrapped;
j::Cell _v_42535_textures;
j::Cell _v_42588_TEXTURES;
j::Cell _v_42589_KINDS;
j::Cell _v_42590_BODIES;
j::Cell _v_42591_ORBITS;
j::Cell _v_42592_ORIGIN;
j::Cell _v_42593_SHAPE_KEYS;
j::Cell _v_42594_animated;
j::Cell _v_42598_base;
j::Cell _v_42612_PLAIN;
j::Cell _v_42613_shape;
j::Cell _v_42617_body;
j::Cell _v_42624_digest;
j::Cell _v_42631_motion;
j::Cell _v_42634_sigOf;
j::Cell _v_42641_MEMO;
j::Cell _v_42642_memo;
j::Cell _v_42647_around;
j::Cell _v_42651_lattice;
j::Cell _v_42672_join;
j::Cell _v_42687_outline;
j::Cell _v_42720_disc;
j::Cell _v_42735_ballMesh;
j::Cell _v_42751_ringMesh;
j::Cell _v_42771_tubeMesh;
j::Cell _v_42803_FACES;
j::Cell _v_42804_boxMesh;
j::Cell _v_42825_floorMesh;
j::Cell _v_42837_flat;
j::Cell _v_42864_CLOUDS;
j::Cell _v_42865_cloud;
j::Cell _v_42902_torus;
j::Cell _v_42911_sphere;
j::Cell _v_42919_cube;
j::Cell _v_42926_cylinder;
j::Cell _v_42935_cone;
j::Cell _v_42944_plane;
j::Cell _v_42952_points;
j::Cell _v_42986_lines;
j::Cell _v_43019_group;
j::Cell _v_43036_centred;
j::Cell _v_43061_paint;
j::Cell _v_43067_mesh;
j::Cell _v_43087_parametric;
j::Cell _v_43133_sheet;
j::Cell _v_43178_orbit;
j::Cell _v_43194_DONUT;
j::Cell _v_43195_AMBIENT;
j::Cell _v_43196_TILTS;
j::Cell _v_43197_NEAR;
j::Cell _v_43198_COLOR_BY;
j::Cell _v_43199_SCENE_KEYS;
j::Cell _v_43200_SPEC_KEYS;
j::Cell _v_43201_CAMERA_KEYS;
j::Cell _v_43202_settings;
j::Cell _v_43219_luminance;
j::Cell _v_43228_PAGE;
j::Cell _v_43229_legible;
j::Cell _v_43243_shadesOf;
j::Cell _v_43254_listAt;
j::Cell _v_43260_whole;
j::Cell _v_43263_turns;
j::Cell _v_43268_moves;
j::Cell _v_43271_leaves;
j::Cell _v_43276_lined;
j::Cell _v_43279_rate;
j::Cell _v_43283_orbits;
j::Cell _v_43289_speed;
j::Cell _v_43299_into;
j::Cell _v_43303_rotation;
j::Cell _v_43315_times;
j::Cell _v_43322_YAW;
j::Cell _v_43323_TILT;
j::Cell _v_43324_OWN;
j::Cell _v_43325_IDENTITY;
j::Cell _v_43326_ZERO;
j::Cell _v_43327_camera;
j::Cell _v_43332_cameraAt;
j::Cell _v_43338_pose;
j::Cell _v_43348_corners;
j::Cell _v_43376_side;
j::Cell _v_43384_measure;
j::Cell _v_43442_loopOf;
j::Cell _v_43458_S;
j::Cell _v_43459_TRI;
j::Cell _v_43460_CORNERS;
j::Cell _v_43461_CUT;
j::Cell _v_43462_View;
j::Cell _v_43824_span;
j::Cell _v_43833_fade;
j::Cell _v_43841_VIEWS;
j::Cell _v_43842_same;
j::Cell _v_43849_render3d;
j::Cell _v_43869_usedColors;
j::Cell _v_43876_colorsOf;
j::Cell _v_43883_tally;
j::Cell _v_43887_scenePalette;
j::Cell _v_43901_scene;
j::Cell _v_43934_one;
std::vector<V> _literals;
Generated_kit_shapes3d():_v_42440_INK(this->slot("INK")),_v_42441_NONE(this->slot("NONE")),_v_42442_Palette(this->slot("Palette")),_v_42443_Surface(this->slot("Surface")),_v_42444_TAU(this->slot("TAU")),_v_42445_and(this->slot("and")),_v_42446_code(this->slot("code")),_v_42447_named(this->slot("named")),_v_42448_namedColors(this->slot("namedColors")),_v_42449_fail(this->slot("fail")),_v_42450_fract(this->slot("fract")),_v_42451_hash(this->slot("hash")),_v_42452_isHex(this->slot("isHex")),_v_42453_mix(this->slot("mix")),_v_42454_mulberry32(this->slot("mulberry32")),_v_42455_piece(this->slot("piece")),_v_42456_rampOf(this->slot("rampOf")),_v_42457_rgb(this->slot("rgb")),_v_42458_smoothstep(this->slot("smoothstep")),_v_42459_specOf(this->slot("specOf")),_v_42460_spread(this->slot("spread")),_v_42461_suggest(this->slot("suggest")),_v_42462_shown(this->slot("shown")),_v_42465_positive(this->slot("positive")),_v_42470_finite(this->slot("finite")),_v_42475_wholeIn(this->slot("wholeIn")),_v_42482_vec3(this->slot("vec3")),_v_42489_TURNS(this->slot("TURNS")),_v_42490_anglesOf(this->slot("anglesOf")),_v_42502_SPINS(this->slot("SPINS")),_v_42503_or(this->slot("or")),_v_42506_MEANT(this->slot("MEANT")),_v_42507_known(this->slot("known")),_v_42517_wrapped(this->slot("wrapped")),_v_42535_textures(this->slot("textures")),_v_42588_TEXTURES(this->slot("TEXTURES")),_v_42589_KINDS(this->slot("KINDS")),_v_42590_BODIES(this->slot("BODIES")),_v_42591_ORBITS(this->slot("ORBITS")),_v_42592_ORIGIN(this->slot("ORIGIN")),_v_42593_SHAPE_KEYS(this->slot("SHAPE_KEYS")),_v_42594_animated(this->slot("animated")),_v_42598_base(this->slot("base")),_v_42612_PLAIN(this->slot("PLAIN")),_v_42613_shape(this->slot("shape")),_v_42617_body(this->slot("body")),_v_42624_digest(this->slot("digest")),_v_42631_motion(this->slot("motion")),_v_42634_sigOf(this->slot("sigOf")),_v_42641_MEMO(this->slot("MEMO")),_v_42642_memo(this->slot("memo")),_v_42647_around(this->slot("around")),_v_42651_lattice(this->slot("lattice")),_v_42672_join(this->slot("join")),_v_42687_outline(this->slot("outline")),_v_42720_disc(this->slot("disc")),_v_42735_ballMesh(this->slot("ballMesh")),_v_42751_ringMesh(this->slot("ringMesh")),_v_42771_tubeMesh(this->slot("tubeMesh")),_v_42803_FACES(this->slot("FACES")),_v_42804_boxMesh(this->slot("boxMesh")),_v_42825_floorMesh(this->slot("floorMesh")),_v_42837_flat(this->slot("flat")),_v_42864_CLOUDS(this->slot("CLOUDS")),_v_42865_cloud(this->slot("cloud")),_v_42902_torus(this->slot("torus")),_v_42911_sphere(this->slot("sphere")),_v_42919_cube(this->slot("cube")),_v_42926_cylinder(this->slot("cylinder")),_v_42935_cone(this->slot("cone")),_v_42944_plane(this->slot("plane")),_v_42952_points(this->slot("points")),_v_42986_lines(this->slot("lines")),_v_43019_group(this->slot("group")),_v_43036_centred(this->slot("centred")),_v_43061_paint(this->slot("paint")),_v_43067_mesh(this->slot("mesh")),_v_43087_parametric(this->slot("parametric")),_v_43133_sheet(this->slot("sheet")),_v_43178_orbit(this->slot("orbit")),_v_43194_DONUT(this->slot("DONUT")),_v_43195_AMBIENT(this->slot("AMBIENT")),_v_43196_TILTS(this->slot("TILTS")),_v_43197_NEAR(this->slot("NEAR")),_v_43198_COLOR_BY(this->slot("COLOR_BY")),_v_43199_SCENE_KEYS(this->slot("SCENE_KEYS")),_v_43200_SPEC_KEYS(this->slot("SPEC_KEYS")),_v_43201_CAMERA_KEYS(this->slot("CAMERA_KEYS")),_v_43202_settings(this->slot("settings")),_v_43219_luminance(this->slot("luminance")),_v_43228_PAGE(this->slot("PAGE")),_v_43229_legible(this->slot("legible")),_v_43243_shadesOf(this->slot("shadesOf")),_v_43254_listAt(this->slot("listAt")),_v_43260_whole(this->slot("whole")),_v_43263_turns(this->slot("turns")),_v_43268_moves(this->slot("moves")),_v_43271_leaves(this->slot("leaves")),_v_43276_lined(this->slot("lined")),_v_43279_rate(this->slot("rate")),_v_43283_orbits(this->slot("orbits")),_v_43289_speed(this->slot("speed")),_v_43299_into(this->slot("into")),_v_43303_rotation(this->slot("rotation")),_v_43315_times(this->slot("times")),_v_43322_YAW(this->slot("YAW")),_v_43323_TILT(this->slot("TILT")),_v_43324_OWN(this->slot("OWN")),_v_43325_IDENTITY(this->slot("IDENTITY")),_v_43326_ZERO(this->slot("ZERO")),_v_43327_camera(this->slot("camera")),_v_43332_cameraAt(this->slot("cameraAt")),_v_43338_pose(this->slot("pose")),_v_43348_corners(this->slot("corners")),_v_43376_side(this->slot("side")),_v_43384_measure(this->slot("measure")),_v_43442_loopOf(this->slot("loopOf")),_v_43458_S(this->slot("S")),_v_43459_TRI(this->slot("TRI")),_v_43460_CORNERS(this->slot("CORNERS")),_v_43461_CUT(this->slot("CUT")),_v_43462_View(this->slot("View")),_v_43824_span(this->slot("span")),_v_43833_fade(this->slot("fade")),_v_43841_VIEWS(this->slot("VIEWS")),_v_43842_same(this->slot("same")),_v_43849_render3d(this->slot("render3d")),_v_43869_usedColors(this->slot("usedColors")),_v_43876_colorsOf(this->slot("colorsOf")),_v_43883_tally(this->slot("tally")),_v_43887_scenePalette(this->slot("scenePalette")),_v_43901_scene(this->slot("scene")),_v_43934_one(this->slot("one")),_literals{V(u"function"),
V(u"a function"),
V(u"number"),
V(u"symbol"),
V(u"bigint"),
V(u"stringify"),
V(u"isFinite"),
V(u"isInteger"),
V(u"isArray"),
V(u"length"),
V(u"every"),
V(u"string"),
V(u"hasOwn"),
V(u"keys"),
V(u"map"),
V(u"object"),
V(u"turns"),
V(u"degrees"),
V(u"PI"),
V(u"includes"),
V(u"find"),
V(u"camera"),
V(u""),
V(u"texture"),
V(u"slice"),
V(u"color"),
V(u"dark"),
V(u"edges"),
V(u"boolean"),
V(u"spin"),
V(u"kind"),
V(u"at"),
V(u"rotate"),
V(u"scale"),
V(u"toLowerCase"),
V(u"timed"),
V(u"freeze"),
V(u"set"),
V(u"get"),
V(u"buffer"),
V(u"byteOffset"),
V(u"toString"),
V(u"sig"),
V(u"form"),
V(u"children"),
V(u","),
V(u"join"),
V(u"e"),
V(u"~"),
V(u";"),
V(u"size"),
V(u"clear"),
V(u"pos"),
V(u"nrm"),
V(u"uv"),
V(u"tri"),
V(u"closed"),
V(u"sides"),
V(u"corners"),
V(u"a"),
V(u"b"),
V(u"n"),
V(u"m"),
V(u"forEach"),
V(u"values"),
V(u"filter"),
V(u"cone"),
V(u"cylinder"),
V(u"push"),
V(u"galaxy"),
V(u"ball"),
V(u"shell"),
V(u"ring"),
V(u"max"),
V(u"torus"),
V(u"radius"),
V(u"tube"),
V(u"torus's radius"),
V(u"torus's tube"),
V(u"reach"),
V(u"mesh"),
V(u"sphere"),
V(u"sphere's radius"),
V(u"cube"),
V(u"cube's size"),
V(u"height"),
V(u"cylinder's radius"),
V(u"cylinder's height"),
V(u"cone's radius"),
V(u"cone's height"),
V(u"plane"),
V(u"width"),
V(u"depth"),
V(u"plane's width"),
V(u"plane's depth"),
V(u"points"),
V(u"char"),
V(u"count"),
V(u"seed"),
V(u"glow"),
V(u"points' count and seed are for a named cloud, such as points(\"galaxy\", { count: 500 }); a list of your own is drawn as it is"),
V(u"points' count"),
V(u"points' seed"),
V(u" at t = 0"),
V(u" "),
V(u"points' glow"),
V(u"flat"),
V(u"from"),
V(u"cloud"),
V(u"dots"),
V(u"lines"),
V(u" at t = 0,"),
V(u"wire"),
V(u"paths"),
V(u"|"),
V(u"group"),
V(u"center"),
V(u"group()"),
V(u"some"),
V(u"min"),
V(u"period"),
V(u"toFixed"),
V(u"mesh() takes no texture: its faces have no u and v; parametric() makes a surface of your own that takes one"),
V(u"parametric"),
V(u"segments"),
V(u"parametric's function at u 0, v 0 and t 0"),
V(u"lu"),
V(u"lv"),
V(u"far"),
V(u"tilt"),
V(u"phase"),
V(u"orbit()"),
V(u"orbit's radius"),
V(u"orbit's period"),
V(u"orbit's tilt"),
V(u"orbit's phase"),
V(u"orbit's center"),
V(u"light"),
V(u"hypot"),
V(u"light takes a direction towards the light, not [0, 0, 0]: [-0.4, 1, -1] is from the upper left"),
V(u"ambient"),
V(u"camera's tilt"),
V(u"ramp"),
V(u"invert"),
V(u"auto"),
V(u"colorBy"),
V(u"shades"),
V(u"colors"),
V(u"fit"),
V(u"distance"),
V(u"camera's distance"),
V(u"zoom"),
V(u"camera's zoom"),
V(u"camera's spin"),
V(u"chars"),
V(u"charCodeAt"),
V(u"shape"),
V(u"#000000"),
V(u"#ffffff"),
V(u"and its function gave"),
V(u"not"),
V(u"sign"),
V(u"reduce"),
V(u"flatMap"),
V(u"scene()"),
V(u"a scene"),
V(u"has"),
V(u"add"),
V(u"zmin"),
V(u"zmax"),
V(u"key"),
V(u"shapes"),
V(u"render3d()"),
V(u"view"),
V(u"cols"),
V(u"rows"),
V(u"aspect"),
V(u"shift"),
V(u"draw"),
V(u"scenePalette()"),
V(u"themed"),
V(u"scene() takes its spec first and its shapes second, such as scene({ cols: 40, rows: 20 }, torus()), or the shapes alone"),
V(u"scene"),
V(u"palette"),
V(u"ink"),
V(u" and the ink for shapes with none"),
V(u"loop"),
V(u"cell"),
V(u"category"),
V(u"fps"),
V(u"setup"),
V(u"upside-down"),
V(u"on-its-side"),
V(u"tipped"),
V(u"facing-left"),
V(u"facing-right"),
V(u"turned-round"),
V(u"slow"),
V(u"normal"),
V(u"fast"),
V(u", "),
V(u"colour"),
V(u"colours"),
V(u"colourBy"),
V(u"colorby"),
V(u"shadeBy"),
V(u"position"),
V(u"origin"),
V(u"centre"),
V(u"rotation"),
V(u"angle"),
V(u"angles"),
V(u"orientation"),
V(u"speed"),
V(u"spins"),
V(u"fov"),
V(u"pitch"),
V(u"yaw"),
V(u"dist"),
V(u"diameter"),
V(u"r"),
V(u"thickness"),
V(u"tubeRadius"),
V(u"columns"),
V(u"pattern"),
V(u"textures"),
V(u"material"),
V(u"edge"),
V(u"outline"),
V(u"wireframe"),
V(u"background"),
V(u"ground"),
V(u"bg"),
V(u"lights"),
V(u"lighting"),
V(u"sun"),
V(u"characters"),
V(u"charset"),
V(u"character"),
V(u"glyph"),
V(u"duration"),
V(u"seconds"),
V(u"close"),
V(u"shade"),
V(u"steps"),
V(u"resolution"),
V(u"detail"),
V(u"brightness"),
V(u"inverted"),
V(u"flip"),
V(u"fitted"),
V(u"bands"),
V(u"textures.bands"),
V(u"stripes"),
V(u"textures.stripes"),
V(u"checker"),
V(u"textures.checker"),
V(u"textures.checker's along"),
V(u"grid"),
V(u"textures.grid"),
V(u"textures.grid's along"),
V(u"spots"),
V(u"textures.spots"),
V(u"textures.spots' seed"),
V(u"sort"),
V(u"helix"),
V(u".,-~:;=!*#$@"),
V(u"none"),
V(u"soft"),
V(u"bright"),
V(u"level"),
V(u"above"),
V(u"high"),
V(u"below"),
V(u"name"),
V(u"note"),
V(u"still"),
V(u"clock"),
V(u"options"),
V(u"#0d1117"),
V(u"of"),
V(u"z"),
V(u"nearest"),
V(u"lit"),
V(u"who"),
V(u"marks"),
V(u"buf"),
V(u"c"),
V(u"#turns"),
V(u"#places"),
V(u"#steps"),
V(u"#palette"),
V(u"#s"),
V(u"#t"),
V(u"#flip"),
V(u"#f"),
V(u"#zk"),
V(u"#id"),
V(u"#shade"),
V(u"#tex"),
V(u"#hit"),
V(u"fill"),
V(u"mono"),
V(u"paper"),
V(u"p"),
V(u"d"),
V(u"resolve"),
V(u"place"),
V(u"surface"),
V(u"put"),
V(u"seg"),
V(u"see"),
V(u"cut"),
V(u"speck")}{
this->exports["textures"]=this->_v_42535_textures;
this->exports["torus"]=this->_v_42902_torus;
this->exports["sphere"]=this->_v_42911_sphere;
this->exports["cube"]=this->_v_42919_cube;
this->exports["cylinder"]=this->_v_42926_cylinder;
this->exports["cone"]=this->_v_42935_cone;
this->exports["plane"]=this->_v_42944_plane;
this->exports["points"]=this->_v_42952_points;
this->exports["lines"]=this->_v_42986_lines;
this->exports["group"]=this->_v_43019_group;
this->exports["mesh"]=this->_v_43067_mesh;
this->exports["parametric"]=this->_v_43087_parametric;
this->exports["orbit"]=this->_v_43178_orbit;
this->exports["render3d"]=this->_v_43849_render3d;
this->exports["scenePalette"]=this->_v_43887_scenePalette;
this->exports["scene"]=this->_v_43901_scene;
}
void init() override{if(initialized)return;initialized=true;
this->_v_42462_shown.get()=j::function([=](const j::Args &_args_fn42463,const V &_receiver_fn42463,const V &_self_fn42463) mutable ->V{
V _v_42464_v;
_v_42464_v=_args_fn42463[0];
{
if(j::truth(([&]()->V{V _lhs43937=j::unary("typeof",_v_42464_v);V _rhs43938=this->_literals[0];return V(j::equal(_lhs43937,_rhs43938,true));})())){return this->_literals[1];
}
if(j::truth(([&]()->V{V _logical43939=([&]()->V{V _logical43940=([&]()->V{V _logical43941=([&]()->V{V _lhs43942=j::unary("typeof",_v_42464_v);V _rhs43943=this->_literals[2];return V(j::equal(_lhs43942,_rhs43943,true));})();return !j::truth(_logical43941)?([&]()->V{V _lhs43944=_v_42464_v;V _rhs43945=j::builtin("undefined");return V(j::equal(_lhs43944,_rhs43945,true));})():_logical43941;})();return !j::truth(_logical43940)?([&]()->V{V _lhs43946=j::unary("typeof",_v_42464_v);V _rhs43947=this->_literals[3];return V(j::equal(_lhs43946,_rhs43947,true));})():_logical43940;})();return !j::truth(_logical43939)?([&]()->V{V _lhs43948=j::unary("typeof",_v_42464_v);V _rhs43949=this->_literals[4];return V(j::equal(_lhs43948,_rhs43949,true));})():_logical43939;})())){return ([&]()->V{V _callee43950=j::builtin("String");return j::call(_callee43950,j::Args{_v_42464_v});})();
}
{try {
return ([&]()->V{V _logical43951=([&]()->V{V _receiver43952=j::builtin("JSON");V _method43953=this->_literals[5];V _method=j::get(_receiver43952,_method43953);j::Args _params43954=j::Args{_v_42464_v};return j::call(_method,_params43954,_receiver43952);})();return j::nullish(_logical43951)?([&]()->V{V _callee43955=j::builtin("String");return j::call(_callee43955,j::Args{_v_42464_v});})():_logical43951;})();

}
catch(const std::exception &_error43956){{
return ([&]()->V{V _callee43957=j::builtin("String");return j::call(_callee43957,j::Args{_v_42464_v});})();

}
}}

}

return V{};
},1);
this->_v_42465_positive.get()=j::function([=](const j::Args &_args_fn42466,const V &_receiver_fn42466,const V &_self_fn42466) mutable ->V{
V _v_42467_v;
V _v_42468_what;
V _v_42469_def;
_v_42467_v=_args_fn42466[0];
_v_42468_what=_args_fn42466[1];
_v_42469_def=_args_fn42466[2];
{
if(j::truth(([&]()->V{V _logical43958=([&]()->V{V _lhs43959=_v_42467_v;V _rhs43960=j::builtin("undefined");return V(j::equal(_lhs43959,_rhs43960,true));})();return j::truth(_logical43958)?([&]()->V{V _lhs43961=_v_42469_def;V _rhs43962=j::builtin("undefined");return V(!j::equal(_lhs43961,_rhs43962,true));})():_logical43958;})())){return _v_42469_def;
}
if(j::truth(([&]()->V{V _logical43963=([&]()->V{V _logical43964=([&]()->V{V _lhs43965=j::unary("typeof",_v_42467_v);V _rhs43966=this->_literals[2];return V(!j::equal(_lhs43965,_rhs43966,true));})();return !j::truth(_logical43964)?j::unary("!",([&]()->V{V _receiver43967=j::builtin("Number");V _method43968=this->_literals[6];V _method=j::get(_receiver43967,_method43968);j::Args _params43969=j::Args{_v_42467_v};return j::call(_method,_params43969,_receiver43967);})()):_logical43964;})();return !j::truth(_logical43963)?([&]()->V{V _lhs43970=_v_42467_v;V _rhs43971=V(0.0);return j::binary("<=",_lhs43970,_rhs43971);})():_logical43963;})())){(void)(([&]()->V{V _callee43974=this->_v_42449_fail.get();return j::call(_callee43974,j::Args{([&]()->V{std::u16string _text43972;_text43972+=u"";_text43972+=j::string(_v_42468_what);_text43972+=u" takes a number above 0, not ";_text43972+=j::string(([&]()->V{V _callee43973=this->_v_42462_shown.get();return j::call(_callee43973,j::Args{_v_42467_v});})());_text43972+=u"";return V(std::move(_text43972));})()});})());
}
return _v_42467_v;

}

return V{};
},3);
this->_v_42470_finite.get()=j::function([=](const j::Args &_args_fn42471,const V &_receiver_fn42471,const V &_self_fn42471) mutable ->V{
V _v_42472_v;
V _v_42473_what;
V _v_42474_def;
_v_42472_v=_args_fn42471[0];
_v_42473_what=_args_fn42471[1];
_v_42474_def=_args_fn42471[2];
{
if(j::truth(([&]()->V{V _lhs43975=_v_42472_v;V _rhs43976=j::builtin("undefined");return V(j::equal(_lhs43975,_rhs43976,true));})())){return _v_42474_def;
}
if(j::truth(([&]()->V{V _logical43977=([&]()->V{V _lhs43978=j::unary("typeof",_v_42472_v);V _rhs43979=this->_literals[2];return V(!j::equal(_lhs43978,_rhs43979,true));})();return !j::truth(_logical43977)?j::unary("!",([&]()->V{V _receiver43980=j::builtin("Number");V _method43981=this->_literals[6];V _method=j::get(_receiver43980,_method43981);j::Args _params43982=j::Args{_v_42472_v};return j::call(_method,_params43982,_receiver43980);})()):_logical43977;})())){(void)(([&]()->V{V _callee43985=this->_v_42449_fail.get();return j::call(_callee43985,j::Args{([&]()->V{std::u16string _text43983;_text43983+=u"";_text43983+=j::string(_v_42473_what);_text43983+=u" takes a number, not ";_text43983+=j::string(([&]()->V{V _callee43984=this->_v_42462_shown.get();return j::call(_callee43984,j::Args{_v_42472_v});})());_text43983+=u"";return V(std::move(_text43983));})()});})());
}
return _v_42472_v;

}

return V{};
},3);
this->_v_42475_wholeIn.get()=j::function([=](const j::Args &_args_fn42476,const V &_receiver_fn42476,const V &_self_fn42476) mutable ->V{
V _v_42477_v;
V _v_42478_what;
V _v_42479_def;
V _v_42480_lo;
V _v_42481_hi;
_v_42477_v=_args_fn42476[0];
_v_42478_what=_args_fn42476[1];
_v_42479_def=_args_fn42476[2];
_v_42480_lo=_args_fn42476[3];
_v_42481_hi=_args_fn42476[4];
{
if(j::truth(([&]()->V{V _lhs43986=_v_42477_v;V _rhs43987=j::builtin("undefined");return V(j::equal(_lhs43986,_rhs43987,true));})())){return _v_42479_def;
}
if(j::truth(([&]()->V{V _logical43988=([&]()->V{V _logical43989=j::unary("!",([&]()->V{V _receiver43990=j::builtin("Number");V _method43991=this->_literals[7];V _method=j::get(_receiver43990,_method43991);j::Args _params43992=j::Args{_v_42477_v};return j::call(_method,_params43992,_receiver43990);})());return !j::truth(_logical43989)?([&]()->V{V _lhs43993=_v_42477_v;V _rhs43994=_v_42480_lo;return j::binary("<",_lhs43993,_rhs43994);})():_logical43989;})();return !j::truth(_logical43988)?([&]()->V{V _lhs43995=_v_42477_v;V _rhs43996=_v_42481_hi;return j::binary(">",_lhs43995,_rhs43996);})():_logical43988;})())){(void)(([&]()->V{V _callee43999=this->_v_42449_fail.get();return j::call(_callee43999,j::Args{([&]()->V{std::u16string _text43997;_text43997+=u"";_text43997+=j::string(_v_42478_what);_text43997+=u" takes a whole number from ";_text43997+=j::string(_v_42480_lo);_text43997+=u" to ";_text43997+=j::string(_v_42481_hi);_text43997+=u", not ";_text43997+=j::string(([&]()->V{V _callee43998=this->_v_42462_shown.get();return j::call(_callee43998,j::Args{_v_42477_v});})());_text43997+=u"";return V(std::move(_text43997));})()});})());
}
return _v_42477_v;

}

return V{};
},5);
this->_v_42482_vec3.get()=j::function([=](const j::Args &_args_fn42483,const V &_receiver_fn42483,const V &_self_fn42483) mutable ->V{
V _v_42484_v;
V _v_42485_what;
V _v_42486_def;
_v_42484_v=_args_fn42483[0];
_v_42485_what=_args_fn42483[1];
_v_42486_def=_args_fn42483[2];
{
if(j::truth(([&]()->V{V _logical44000=([&]()->V{V _lhs44001=_v_42484_v;V _rhs44002=j::builtin("undefined");return V(j::equal(_lhs44001,_rhs44002,true));})();return j::truth(_logical44000)?_v_42486_def:_logical44000;})())){return ([&]()->V{j::Args _array44003;_array44003.push_back(j::get(_v_42486_def,V(0.0)));_array44003.push_back(j::get(_v_42486_def,V(1.0)));_array44003.push_back(j::get(_v_42486_def,V(2.0)));return j::array(std::move(_array44003));})();
}
if(j::truth(([&]()->V{V _logical44004=([&]()->V{V _logical44005=j::unary("!",([&]()->V{V _receiver44006=j::builtin("Array");V _method44007=this->_literals[8];V _method=j::get(_receiver44006,_method44007);j::Args _params44008=j::Args{_v_42484_v};return j::call(_method,_params44008,_receiver44006);})());return !j::truth(_logical44005)?([&]()->V{V _lhs44009=j::get(_v_42484_v,this->_literals[9]);V _rhs44010=V(3.0);return V(!j::equal(_lhs44009,_rhs44010,true));})():_logical44005;})();return !j::truth(_logical44004)?j::unary("!",([&]()->V{V _receiver44017=_v_42484_v;V _method44018=this->_literals[10];V _method=j::get(_receiver44017,_method44018);j::Args _params44019=j::Args{j::function([=](const j::Args &_args_fn42487,const V &_receiver_fn42487,const V &_self_fn42487) mutable ->V{
V _v_42488_n;
_v_42488_n=_args_fn42487[0];
return ([&]()->V{V _logical44011=([&]()->V{V _lhs44012=j::unary("typeof",_v_42488_n);V _rhs44013=this->_literals[2];return V(j::equal(_lhs44012,_rhs44013,true));})();return j::truth(_logical44011)?([&]()->V{V _receiver44014=j::builtin("Number");V _method44015=this->_literals[6];V _method=j::get(_receiver44014,_method44015);j::Args _params44016=j::Args{_v_42488_n};return j::call(_method,_params44016,_receiver44014);})():_logical44011;})();
return V{};
},1)};return j::call(_method,_params44019,_receiver44017);})()):_logical44004;})())){(void)(([&]()->V{V _callee44022=this->_v_42449_fail.get();return j::call(_callee44022,j::Args{([&]()->V{std::u16string _text44020;_text44020+=u"";_text44020+=j::string(_v_42485_what);_text44020+=u" takes [x, y, z], three numbers, not ";_text44020+=j::string(([&]()->V{V _callee44021=this->_v_42462_shown.get();return j::call(_callee44021,j::Args{_v_42484_v});})());_text44020+=u"";return V(std::move(_text44020));})()});})());
}
return ([&]()->V{j::Args _array44023;_array44023.push_back(j::get(_v_42484_v,V(0.0)));_array44023.push_back(j::get(_v_42484_v,V(1.0)));_array44023.push_back(j::get(_v_42484_v,V(2.0)));return j::array(std::move(_array44023));})();

}

return V{};
},3);
this->_v_42490_anglesOf.get()=j::function([=](const j::Args &_args_fn42491,const V &_receiver_fn42491,const V &_self_fn42491) mutable ->V{
V _v_42492_v;
V _v_42493_what;
V _v_42494_def;
_v_42492_v=_args_fn42491[0];
_v_42493_what=_args_fn42491[1];
_v_42494_def=_args_fn42491[2];
{
if(j::truth(([&]()->V{V _lhs44024=j::unary("typeof",_v_42492_v);V _rhs44025=this->_literals[11];return V(j::equal(_lhs44024,_rhs44025,true));})())){
if(j::truth(([&]()->V{V _receiver44026=j::builtin("Object");V _method44027=this->_literals[12];V _method=j::get(_receiver44026,_method44027);j::Args _params44028=j::Args{this->_v_42489_TURNS.get(),_v_42492_v};return j::call(_method,_params44028,_receiver44026);})())){return ([&]()->V{j::Args _array44029;for(const auto &_value:j::elements(j::get(this->_v_42489_TURNS.get(),_v_42492_v)))_array44029.push_back(_value);return j::array(std::move(_array44029));})();
}
(void)(([&]()->V{V _callee44046=this->_v_42449_fail.get();return j::call(_callee44046,j::Args{([&]()->V{std::u16string _text44030;_text44030+=u"";_text44030+=j::string(_v_42493_what);_text44030+=u" takes a turn's name, ";_text44030+=j::string(([&]()->V{V _callee44040=this->_v_42503_or.get();return j::call(_callee44040,j::Args{([&]()->V{V _receiver44034=([&]()->V{V _receiver44037=j::builtin("Object");V _method44038=this->_literals[13];V _method=j::get(_receiver44037,_method44038);j::Args _params44039=j::Args{this->_v_42489_TURNS.get()};return j::call(_method,_params44039,_receiver44037);})();V _method44035=this->_literals[14];V _method=j::get(_receiver44034,_method44035);j::Args _params44036=j::Args{j::function([=](const j::Args &_args_fn42495,const V &_receiver_fn42495,const V &_self_fn42495) mutable ->V{
V _v_42496_n;
_v_42496_n=_args_fn42495[0];
return ([&]()->V{V _receiver44031=j::builtin("JSON");V _method44032=this->_literals[5];V _method=j::get(_receiver44031,_method44032);j::Args _params44033=j::Args{_v_42496_n};return j::call(_method,_params44033,_receiver44031);})();
return V{};
},1)};return j::call(_method,_params44036,_receiver44034);})()});})());_text44030+=u", [x, y, z] in radians, { turns: [x, y, z] } or { degrees: [x, y, z] }, not ";_text44030+=j::string(([&]()->V{V _callee44041=this->_v_42462_shown.get();return j::call(_callee44041,j::Args{_v_42492_v});})());_text44030+=u"";_text44030+=j::string(([&]()->V{V _callee44045=this->_v_42461_suggest.get();return j::call(_callee44045,j::Args{_v_42492_v,([&]()->V{V _receiver44042=j::builtin("Object");V _method44043=this->_literals[13];V _method=j::get(_receiver44042,_method44043);j::Args _params44044=j::Args{this->_v_42489_TURNS.get()};return j::call(_method,_params44044,_receiver44042);})()});})());_text44030+=u"";return V(std::move(_text44030));})()});})());

}

if(j::truth(([&]()->V{V _logical44047=([&]()->V{V _logical44048=([&]()->V{V _lhs44049=_v_42492_v;V _rhs44050=V::null();return V(!j::equal(_lhs44049,_rhs44050,true));})();return j::truth(_logical44048)?([&]()->V{V _lhs44051=j::unary("typeof",_v_42492_v);V _rhs44052=this->_literals[15];return V(j::equal(_lhs44051,_rhs44052,true));})():_logical44048;})();return j::truth(_logical44047)?j::unary("!",([&]()->V{V _receiver44053=j::builtin("Array");V _method44054=this->_literals[8];V _method=j::get(_receiver44053,_method44054);j::Args _params44055=j::Args{_v_42492_v};return j::call(_method,_params44055,_receiver44053);})()):_logical44047;})())){
V _v_42497_o;
_v_42497_o=_v_42492_v;
if(j::truth(([&]()->V{V _lhs44056=j::get(_v_42497_o,this->_literals[16]);V _rhs44057=j::builtin("undefined");return V(!j::equal(_lhs44056,_rhs44057,true));})())){return ([&]()->V{V _receiver44060=([&]()->V{V _callee44064=this->_v_42482_vec3.get();return j::call(_callee44064,j::Args{j::get(_v_42497_o,this->_literals[16]),([&]()->V{std::u16string _text44063;_text44063+=u"";_text44063+=j::string(_v_42493_what);_text44063+=u"'s turns";return V(std::move(_text44063));})()});})();V _method44061=this->_literals[14];V _method=j::get(_receiver44060,_method44061);j::Args _params44062=j::Args{j::function([=](const j::Args &_args_fn42498,const V &_receiver_fn42498,const V &_self_fn42498) mutable ->V{
V _v_42499_k;
_v_42499_k=_args_fn42498[0];
return ([&]()->V{V _lhs44058=_v_42499_k;V _rhs44059=this->_v_42444_TAU.get();return V(j::number(_lhs44058)*j::number(_rhs44059));})();
return V{};
},1)};return j::call(_method,_params44062,_receiver44060);})();
}
if(j::truth(([&]()->V{V _lhs44065=j::get(_v_42497_o,this->_literals[17]);V _rhs44066=j::builtin("undefined");return V(!j::equal(_lhs44065,_rhs44066,true));})())){return ([&]()->V{V _receiver44071=([&]()->V{V _callee44075=this->_v_42482_vec3.get();return j::call(_callee44075,j::Args{j::get(_v_42497_o,this->_literals[17]),([&]()->V{std::u16string _text44074;_text44074+=u"";_text44074+=j::string(_v_42493_what);_text44074+=u"'s degrees";return V(std::move(_text44074));})()});})();V _method44072=this->_literals[14];V _method=j::get(_receiver44071,_method44072);j::Args _params44073=j::Args{j::function([=](const j::Args &_args_fn42500,const V &_receiver_fn42500,const V &_self_fn42500) mutable ->V{
V _v_42501_k;
_v_42501_k=_args_fn42500[0];
return ([&]()->V{V _lhs44067=([&]()->V{V _lhs44069=_v_42501_k;V _rhs44070=j::get(j::builtin("Math"),this->_literals[18]);return V(j::number(_lhs44069)*j::number(_rhs44070));})();V _rhs44068=V(180.0);return V(j::number(_lhs44067)/j::number(_rhs44068));})();
return V{};
},1)};return j::call(_method,_params44073,_receiver44071);})();
}
(void)(([&]()->V{V _callee44078=this->_v_42449_fail.get();return j::call(_callee44078,j::Args{([&]()->V{std::u16string _text44076;_text44076+=u"";_text44076+=j::string(_v_42493_what);_text44076+=u" takes [x, y, z] in radians, { turns: [x, y, z] }, { degrees: [x, y, z] } or a turn's name such as \"upside-down\", not ";_text44076+=j::string(([&]()->V{V _callee44077=this->_v_42462_shown.get();return j::call(_callee44077,j::Args{_v_42492_v});})());_text44076+=u"";return V(std::move(_text44076));})()});})());

}

return ([&]()->V{V _callee44079=this->_v_42482_vec3.get();return j::call(_callee44079,j::Args{_v_42492_v,_v_42493_what,_v_42494_def});})();

}

return V{};
},3);
this->_v_42507_known.get()=j::function([=](const j::Args &_args_fn42508,const V &_receiver_fn42508,const V &_self_fn42508) mutable ->V{
V _v_42509_o;
j::Cell _v_42510_keys;
V _v_42511_who;
_v_42509_o=_args_fn42508[0];
_v_42510_keys.get()=_args_fn42508[1];
_v_42511_who=_args_fn42508[2];
{
{for(const auto &_item44080:j::elements(([&]()->V{V _receiver44081=j::builtin("Object");V _method44082=this->_literals[13];V _method=j::get(_receiver44081,_method44082);j::Args _params44083=j::Args{_v_42509_o};return j::call(_method,_params44083,_receiver44081);})())){V _v_42512_k;
_v_42512_k=_item44080;
{
V _v_42513_meant;
V _v_42516_hint;
if(j::truth(([&]()->V{V _receiver44084=_v_42510_keys.get();V _method44085=this->_literals[19];V _method=j::get(_receiver44084,_method44085);j::Args _params44086=j::Args{_v_42512_k};return j::call(_method,_params44086,_receiver44084);})())){continue;
}
_v_42513_meant=(j::truth(([&]()->V{V _receiver44087=j::builtin("Object");V _method44088=this->_literals[12];V _method=j::get(_receiver44087,_method44088);j::Args _params44089=j::Args{this->_v_42506_MEANT.get(),_v_42512_k};return j::call(_method,_params44089,_receiver44087);})())?([&]()->V{V _receiver44093=j::get(this->_v_42506_MEANT.get(),_v_42512_k);V _method44094=this->_literals[20];V _method=j::get(_receiver44093,_method44094);j::Args _params44095=j::Args{j::function([=](const j::Args &_args_fn42514,const V &_receiver_fn42514,const V &_self_fn42514) mutable ->V{
V _v_42515_n;
_v_42515_n=_args_fn42514[0];
return ([&]()->V{V _receiver44090=_v_42510_keys.get();V _method44091=this->_literals[19];V _method=j::get(_receiver44090,_method44091);j::Args _params44092=j::Args{_v_42515_n};return j::call(_method,_params44092,_receiver44090);})();
return V{};
},1)};return j::call(_method,_params44095,_receiver44093);})():j::builtin("undefined"));
_v_42516_hint=(j::truth(([&]()->V{V _lhs44096=_v_42513_meant;V _rhs44097=this->_literals[21];return V(j::equal(_lhs44096,_rhs44097,true));})())?([&]()->V{std::u16string _text44098;_text44098+=u" (did you mean camera: { ";_text44098+=j::string(_v_42512_k);_text44098+=u" }?)";return V(std::move(_text44098));})():(j::truth(_v_42513_meant)?([&]()->V{std::u16string _text44099;_text44099+=u" (did you mean ";_text44099+=j::string(_v_42513_meant);_text44099+=u"?)";return V(std::move(_text44099));})():this->_literals[22]));
(void)(([&]()->V{V _callee44105=this->_v_42449_fail.get();return j::call(_callee44105,j::Args{([&]()->V{std::u16string _text44100;_text44100+=u"";_text44100+=j::string(_v_42511_who);_text44100+=u" has no option ";_text44100+=j::string(([&]()->V{V _receiver44101=j::builtin("JSON");V _method44102=this->_literals[5];V _method=j::get(_receiver44101,_method44102);j::Args _params44103=j::Args{_v_42512_k};return j::call(_method,_params44103,_receiver44101);})());_text44100+=u"";_text44100+=j::string(_v_42516_hint);_text44100+=u": it takes ";_text44100+=j::string(([&]()->V{V _callee44104=this->_v_42445_and.get();return j::call(_callee44104,j::Args{_v_42510_keys.get()});})());_text44100+=u"";return V(std::move(_text44100));})()});})());

}
}}

}

return V{};
},3);
this->_v_42517_wrapped.get()=j::function([=](const j::Args &_args_fn42518,const V &_receiver_fn42518,const V &_self_fn42518) mutable ->V{
V _v_42519_x;
V _v_42520_y;
V _v_42521_n;
V _v_42522_seed;
_v_42519_x=_args_fn42518[0];
_v_42520_y=_args_fn42518[1];
_v_42521_n=_args_fn42518[2];
_v_42522_seed=_args_fn42518[3];
{
V _v_42523_xi;
V _v_42524_yi;
V _v_42525_fx;
V _v_42526_fy;
V _v_42527_a;
V _v_42528_b;
V _v_42529_u;
V _v_42530_v;
V _v_42531_p;
V _v_42532_q;
V _v_42533_r;
V _v_42534_s;
_v_42523_xi=([&]()->V{V _number44106=_v_42519_x;return V(std::floor(j::number(_number44106)));})();
_v_42524_yi=([&]()->V{V _number44107=_v_42520_y;return V(std::floor(j::number(_number44107)));})();
_v_42525_fx=([&]()->V{V _lhs44108=_v_42519_x;V _rhs44109=_v_42523_xi;return V(j::number(_lhs44108)-j::number(_rhs44109));})();
_v_42526_fy=([&]()->V{V _lhs44110=_v_42520_y;V _rhs44111=_v_42524_yi;return V(j::number(_lhs44110)-j::number(_rhs44111));})();
_v_42527_a=([&]()->V{V _lhs44112=([&]()->V{V _lhs44114=([&]()->V{V _lhs44116=_v_42523_xi;V _rhs44117=_v_42521_n;return V(std::fmod(j::number(_lhs44116),j::number(_rhs44117)));})();V _rhs44115=_v_42521_n;return j::binary("+",_lhs44114,_rhs44115);})();V _rhs44113=_v_42521_n;return V(std::fmod(j::number(_lhs44112),j::number(_rhs44113)));})();
_v_42528_b=([&]()->V{V _lhs44118=([&]()->V{V _lhs44120=_v_42527_a;V _rhs44121=V(1.0);return j::binary("+",_lhs44120,_rhs44121);})();V _rhs44119=_v_42521_n;return V(std::fmod(j::number(_lhs44118),j::number(_rhs44119)));})();
_v_42529_u=([&]()->V{V _lhs44122=([&]()->V{V _lhs44124=_v_42525_fx;V _rhs44125=_v_42525_fx;return V(j::number(_lhs44124)*j::number(_rhs44125));})();V _rhs44123=([&]()->V{V _lhs44126=V(3.0);V _rhs44127=([&]()->V{V _lhs44128=V(2.0);V _rhs44129=_v_42525_fx;return V(j::number(_lhs44128)*j::number(_rhs44129));})();return V(j::number(_lhs44126)-j::number(_rhs44127));})();return V(j::number(_lhs44122)*j::number(_rhs44123));})();
_v_42530_v=([&]()->V{V _lhs44130=([&]()->V{V _lhs44132=_v_42526_fy;V _rhs44133=_v_42526_fy;return V(j::number(_lhs44132)*j::number(_rhs44133));})();V _rhs44131=([&]()->V{V _lhs44134=V(3.0);V _rhs44135=([&]()->V{V _lhs44136=V(2.0);V _rhs44137=_v_42526_fy;return V(j::number(_lhs44136)*j::number(_rhs44137));})();return V(j::number(_lhs44134)-j::number(_rhs44135));})();return V(j::number(_lhs44130)*j::number(_rhs44131));})();
_v_42531_p=([&]()->V{V _callee44138=this->_v_42451_hash.get();return j::call(_callee44138,j::Args{_v_42527_a,_v_42524_yi,_v_42522_seed});})();
_v_42532_q=([&]()->V{V _callee44139=this->_v_42451_hash.get();return j::call(_callee44139,j::Args{_v_42528_b,_v_42524_yi,_v_42522_seed});})();
_v_42533_r=([&]()->V{V _callee44142=this->_v_42451_hash.get();return j::call(_callee44142,j::Args{_v_42527_a,([&]()->V{V _lhs44140=_v_42524_yi;V _rhs44141=V(1.0);return j::binary("+",_lhs44140,_rhs44141);})(),_v_42522_seed});})();
_v_42534_s=([&]()->V{V _callee44145=this->_v_42451_hash.get();return j::call(_callee44145,j::Args{_v_42528_b,([&]()->V{V _lhs44143=_v_42524_yi;V _rhs44144=V(1.0);return j::binary("+",_lhs44143,_rhs44144);})(),_v_42522_seed});})();
return ([&]()->V{V _lhs44146=([&]()->V{V _lhs44148=([&]()->V{V _lhs44150=_v_42531_p;V _rhs44151=([&]()->V{V _lhs44152=([&]()->V{V _lhs44154=_v_42532_q;V _rhs44155=_v_42531_p;return V(j::number(_lhs44154)-j::number(_rhs44155));})();V _rhs44153=_v_42529_u;return V(j::number(_lhs44152)*j::number(_rhs44153));})();return j::binary("+",_lhs44150,_rhs44151);})();V _rhs44149=([&]()->V{V _lhs44156=([&]()->V{V _lhs44158=_v_42533_r;V _rhs44159=_v_42531_p;return V(j::number(_lhs44158)-j::number(_rhs44159));})();V _rhs44157=_v_42530_v;return V(j::number(_lhs44156)*j::number(_rhs44157));})();return j::binary("+",_lhs44148,_rhs44149);})();V _rhs44147=([&]()->V{V _lhs44160=([&]()->V{V _lhs44162=([&]()->V{V _lhs44164=([&]()->V{V _lhs44166=([&]()->V{V _lhs44168=_v_42531_p;V _rhs44169=_v_42532_q;return V(j::number(_lhs44168)-j::number(_rhs44169));})();V _rhs44167=_v_42533_r;return V(j::number(_lhs44166)-j::number(_rhs44167));})();V _rhs44165=_v_42534_s;return j::binary("+",_lhs44164,_rhs44165);})();V _rhs44163=_v_42529_u;return V(j::number(_lhs44162)*j::number(_rhs44163));})();V _rhs44161=_v_42530_v;return V(j::number(_lhs44160)*j::number(_rhs44161));})();return j::binary("+",_lhs44146,_rhs44147);})();

}

return V{};
},4);
this->_v_42594_animated.get()=j::function([=](const j::Args &_args_fn42595,const V &_receiver_fn42595,const V &_self_fn42595) mutable ->V{
V _v_42596_v;
V _v_42597_what;
_v_42596_v=_args_fn42595[0];
_v_42597_what=_args_fn42595[1];
{
if(j::truth(([&]()->V{V _lhs44170=j::unary("typeof",_v_42596_v);V _rhs44171=this->_literals[0];return V(!j::equal(_lhs44170,_rhs44171,true));})())){return ([&]()->V{V _callee44172=this->_v_42482_vec3.get();return j::call(_callee44172,j::Args{_v_42596_v,_v_42597_what,this->_v_42592_ORIGIN.get()});})();
}
(void)(([&]()->V{V _callee44175=this->_v_42482_vec3.get();return j::call(_callee44175,j::Args{([&]()->V{V _callee44173=_v_42596_v;return j::call(_callee44173,j::Args{V(0.0)});})(),([&]()->V{std::u16string _text44174;_text44174+=u"";_text44174+=j::string(_v_42597_what);_text44174+=u", a function of t, at t = 0,";return V(std::move(_text44174));})()});})());
return _v_42596_v;

}

return V{};
},2);
this->_v_42598_base.get()=j::function([=](const j::Args &_args_fn42599,const V &_receiver_fn42599,const V &_self_fn42599) mutable ->V{
V _v_42600_kind;
V _v_42601_o;
V _v_42602_extra;
V _v_42603_surface;
_v_42600_kind=_args_fn42599[0];
_v_42601_o=_args_fn42599[1];
_v_42602_extra=_args_fn42599[2];
V _default44176=_args_fn42599[3];if(_default44176.kind==V::Undefined||_default44176.kind==V::Hole)_default44176=V(true);
_v_42603_surface=_default44176;
{
V _v_42604_p;
V _v_42605_color;
V _v_42606_texture;
V _v_42611_spin;
if(j::truth(([&]()->V{V _logical44177=([&]()->V{V _lhs44178=_v_42601_o;V _rhs44179=j::builtin("undefined");return V(!j::equal(_lhs44178,_rhs44179,true));})();return j::truth(_logical44177)?([&]()->V{V _logical44180=([&]()->V{V _logical44181=([&]()->V{V _lhs44182=_v_42601_o;V _rhs44183=V::null();return V(j::equal(_lhs44182,_rhs44183,true));})();return !j::truth(_logical44181)?([&]()->V{V _lhs44184=j::unary("typeof",_v_42601_o);V _rhs44185=this->_literals[15];return V(!j::equal(_lhs44184,_rhs44185,true));})():_logical44181;})();return !j::truth(_logical44180)?([&]()->V{V _receiver44186=j::builtin("Array");V _method44187=this->_literals[8];V _method=j::get(_receiver44186,_method44187);j::Args _params44188=j::Args{_v_42601_o};return j::call(_method,_params44188,_receiver44186);})():_logical44180;})():_logical44177;})())){(void)(([&]()->V{V _callee44191=this->_v_42449_fail.get();return j::call(_callee44191,j::Args{([&]()->V{std::u16string _text44189;_text44189+=u"";_text44189+=j::string(_v_42600_kind);_text44189+=u"() takes an options object, such as { spin: [0, 1, 0] }, not ";_text44189+=j::string(([&]()->V{V _callee44190=this->_v_42462_shown.get();return j::call(_callee44190,j::Args{_v_42601_o});})());_text44189+=u"";return V(std::move(_text44189));})()});})());
}
_v_42604_p=([&]()->V{V _logical44192=_v_42601_o;return j::nullish(_logical44192)?([&]()->V{V _obj44193=j::object();return _obj44193;})():_logical44192;})();
if(j::truth(([&]()->V{V _logical44194=([&]()->V{V _lhs44195=j::get(_v_42604_p,this->_literals[23]);V _rhs44196=j::builtin("undefined");return V(!j::equal(_lhs44195,_rhs44196,true));})();return j::truth(_logical44194)?j::unary("!",_v_42603_surface):_logical44194;})())){(void)(([&]()->V{V _callee44198=this->_v_42449_fail.get();return j::call(_callee44198,j::Args{([&]()->V{std::u16string _text44197;_text44197+=u"";_text44197+=j::string(_v_42600_kind);_text44197+=u"() takes no texture: it has no surface to put one on";return V(std::move(_text44197));})()});})());
}
(void)(([&]()->V{V _callee44204=this->_v_42507_known.get();return j::call(_callee44204,j::Args{_v_42604_p,([&]()->V{j::Args _array44199;for(const auto &_value:j::elements(([&]()->V{V _receiver44200=this->_v_42593_SHAPE_KEYS.get();V _method44201=this->_literals[24];V _method=j::get(_receiver44200,_method44201);j::Args _params44202=j::Args{V(0.0),(j::truth(_v_42603_surface)?V(7.0):V(5.0))};return j::call(_method,_params44202,_receiver44200);})()))_array44199.push_back(_value);for(const auto &_value:j::elements(_v_42602_extra))_array44199.push_back(_value);return j::array(std::move(_array44199));})(),([&]()->V{std::u16string _text44203;_text44203+=u"";_text44203+=j::string(_v_42600_kind);_text44203+=u"()";return V(std::move(_text44203));})()});})());
_v_42605_color=(j::truth(([&]()->V{V _lhs44205=j::get(_v_42604_p,this->_literals[25]);V _rhs44206=j::builtin("undefined");return V(j::equal(_lhs44205,_rhs44206,true));})())?j::builtin("undefined"):(j::truth(([&]()->V{V _callee44207=this->_v_42452_isHex.get();return j::call(_callee44207,j::Args{j::get(_v_42604_p,this->_literals[25])});})())?j::get(_v_42604_p,this->_literals[25]):(j::truth(([&]()->V{V _lhs44208=j::unary("typeof",j::get(_v_42604_p,this->_literals[25]));V _rhs44209=this->_literals[11];return V(j::equal(_lhs44208,_rhs44209,true));})())?j::get(([&]()->V{V _callee44211=this->_v_42447_named.get();return j::call(_callee44211,j::Args{j::get(_v_42604_p,this->_literals[25]),([&]()->V{std::u16string _text44210;_text44210+=u"";_text44210+=j::string(_v_42600_kind);_text44210+=u"'s color";return V(std::move(_text44210));})()});})(),this->_literals[26]):([&]()->V{V _callee44214=this->_v_42449_fail.get();return j::call(_callee44214,j::Args{([&]()->V{std::u16string _text44212;_text44212+=u"";_text44212+=j::string(_v_42600_kind);_text44212+=u"'s color takes a colour as #rrggbb or a palette's name such as \"ocean\", not ";_text44212+=j::string(([&]()->V{V _callee44213=this->_v_42462_shown.get();return j::call(_callee44213,j::Args{j::get(_v_42604_p,this->_literals[25])});})());_text44212+=u"";return V(std::move(_text44212));})()});})())));
if(j::truth(([&]()->V{V _lhs44215=j::unary("typeof",j::get(_v_42604_p,this->_literals[23]));V _rhs44216=this->_literals[11];return V(j::equal(_lhs44215,_rhs44216,true));})())){
if(j::truth(j::unary("!",([&]()->V{V _receiver44217=this->_v_42588_TEXTURES.get();V _method44218=this->_literals[19];V _method=j::get(_receiver44217,_method44218);j::Args _params44219=j::Args{j::get(_v_42604_p,this->_literals[23])};return j::call(_method,_params44219,_receiver44217);})()))){(void)(([&]()->V{V _callee44227=this->_v_42449_fail.get();return j::call(_callee44227,j::Args{([&]()->V{std::u16string _text44220;_text44220+=u"";_text44220+=j::string(_v_42600_kind);_text44220+=u"'s texture takes ";_text44220+=j::string(([&]()->V{V _callee44225=this->_v_42445_and.get();return j::call(_callee44225,j::Args{([&]()->V{V _receiver44222=this->_v_42588_TEXTURES.get();V _method44223=this->_literals[14];V _method=j::get(_receiver44222,_method44223);j::Args _params44224=j::Args{j::function([=](const j::Args &_args_fn42607,const V &_receiver_fn42607,const V &_self_fn42607) mutable ->V{
V _v_42608_n;
_v_42608_n=_args_fn42607[0];
return ([&]()->V{std::u16string _text44221;_text44221+=u"\"";_text44221+=j::string(_v_42608_n);_text44221+=u"\"";return V(std::move(_text44221));})();
return V{};
},1)};return j::call(_method,_params44224,_receiver44222);})()});})());_text44220+=u", or a function (u, v, t) => brightness 0 to 1, not ";_text44220+=j::string(([&]()->V{V _callee44226=this->_v_42462_shown.get();return j::call(_callee44226,j::Args{j::get(_v_42604_p,this->_literals[23])});})());_text44220+=u"";return V(std::move(_text44220));})()});})());
}
(void)((_v_42606_texture=([&]()->V{V _receiver44229=this->_v_42535_textures.get();V _method44230=j::get(_v_42604_p,this->_literals[23]);V _method=j::get(_receiver44229,_method44230);j::Args _params44231=j::Args{};return j::call(_method,_params44231,_receiver44229);})()));

}
else {if(j::truth(([&]()->V{V _logical44232=([&]()->V{V _lhs44233=j::get(_v_42604_p,this->_literals[23]);V _rhs44234=j::builtin("undefined");return V(!j::equal(_lhs44233,_rhs44234,true));})();return j::truth(_logical44232)?([&]()->V{V _lhs44235=j::unary("typeof",j::get(_v_42604_p,this->_literals[23]));V _rhs44236=this->_literals[0];return V(!j::equal(_lhs44235,_rhs44236,true));})():_logical44232;})())){(void)(([&]()->V{V _callee44244=this->_v_42449_fail.get();return j::call(_callee44244,j::Args{([&]()->V{std::u16string _text44237;_text44237+=u"";_text44237+=j::string(_v_42600_kind);_text44237+=u"'s texture takes ";_text44237+=j::string(([&]()->V{V _callee44242=this->_v_42445_and.get();return j::call(_callee44242,j::Args{([&]()->V{V _receiver44239=this->_v_42588_TEXTURES.get();V _method44240=this->_literals[14];V _method=j::get(_receiver44239,_method44240);j::Args _params44241=j::Args{j::function([=](const j::Args &_args_fn42609,const V &_receiver_fn42609,const V &_self_fn42609) mutable ->V{
V _v_42610_n;
_v_42610_n=_args_fn42609[0];
return ([&]()->V{std::u16string _text44238;_text44238+=u"\"";_text44238+=j::string(_v_42610_n);_text44238+=u"\"";return V(std::move(_text44238));})();
return V{};
},1)};return j::call(_method,_params44241,_receiver44239);})()});})());_text44237+=u", or a function (u, v, t) => brightness 0 to 1, not ";_text44237+=j::string(([&]()->V{V _callee44243=this->_v_42462_shown.get();return j::call(_callee44243,j::Args{j::get(_v_42604_p,this->_literals[23])});})());_text44237+=u"";return V(std::move(_text44237));})()});})());
}else {(void)((_v_42606_texture=j::get(_v_42604_p,this->_literals[23])));
}
}
if(j::truth(([&]()->V{V _logical44246=([&]()->V{V _lhs44247=j::get(_v_42604_p,this->_literals[27]);V _rhs44248=j::builtin("undefined");return V(!j::equal(_lhs44247,_rhs44248,true));})();return j::truth(_logical44246)?([&]()->V{V _lhs44249=j::unary("typeof",j::get(_v_42604_p,this->_literals[27]));V _rhs44250=this->_literals[28];return V(!j::equal(_lhs44249,_rhs44250,true));})():_logical44246;})())){(void)(([&]()->V{V _callee44253=this->_v_42449_fail.get();return j::call(_callee44253,j::Args{([&]()->V{std::u16string _text44251;_text44251+=u"";_text44251+=j::string(_v_42600_kind);_text44251+=u"'s edges takes true or false, not ";_text44251+=j::string(([&]()->V{V _callee44252=this->_v_42462_shown.get();return j::call(_callee44252,j::Args{j::get(_v_42604_p,this->_literals[27])});})());_text44251+=u"";return V(std::move(_text44251));})()});})());
}
_v_42611_spin=(j::truth(([&]()->V{V _lhs44254=j::unary("typeof",j::get(_v_42604_p,this->_literals[29]));V _rhs44255=this->_literals[2];return V(j::equal(_lhs44254,_rhs44255,true));})())?(j::truth(([&]()->V{V _receiver44256=j::builtin("Number");V _method44257=this->_literals[6];V _method=j::get(_receiver44256,_method44257);j::Args _params44258=j::Args{j::get(_v_42604_p,this->_literals[29])};return j::call(_method,_params44258,_receiver44256);})())?([&]()->V{j::Args _array44259;_array44259.push_back(V(0.0));_array44259.push_back(j::get(_v_42604_p,this->_literals[29]));_array44259.push_back(V(0.0));return j::array(std::move(_array44259));})():([&]()->V{V _callee44262=this->_v_42449_fail.get();return j::call(_callee44262,j::Args{([&]()->V{std::u16string _text44260;_text44260+=u"";_text44260+=j::string(_v_42600_kind);_text44260+=u"'s spin takes radians a second about y, or [x, y, z] about each, not ";_text44260+=j::string(([&]()->V{V _callee44261=this->_v_42462_shown.get();return j::call(_callee44261,j::Args{j::get(_v_42604_p,this->_literals[29])});})());_text44260+=u"";return V(std::move(_text44260));})()});})()):(j::truth(([&]()->V{V _lhs44263=j::unary("typeof",j::get(_v_42604_p,this->_literals[29]));V _rhs44264=this->_literals[11];return V(j::equal(_lhs44263,_rhs44264,true));})())?(j::truth(([&]()->V{V _receiver44265=j::builtin("Object");V _method44266=this->_literals[12];V _method=j::get(_receiver44265,_method44266);j::Args _params44267=j::Args{this->_v_42502_SPINS.get(),j::get(_v_42604_p,this->_literals[29])};return j::call(_method,_params44267,_receiver44265);})())?([&]()->V{j::Args _array44268;_array44268.push_back(V(0.0));_array44268.push_back(j::get(this->_v_42502_SPINS.get(),j::get(_v_42604_p,this->_literals[29])));_array44268.push_back(V(0.0));return j::array(std::move(_array44268));})():([&]()->V{V _callee44275=this->_v_42449_fail.get();return j::call(_callee44275,j::Args{([&]()->V{std::u16string _text44269;_text44269+=u"";_text44269+=j::string(_v_42600_kind);_text44269+=u"'s spin takes \"slow\", \"normal\" or \"fast\", radians a second about y, [x, y, z] about each, or { turns: [x, y, z] } a second, not ";_text44269+=j::string(([&]()->V{V _callee44270=this->_v_42462_shown.get();return j::call(_callee44270,j::Args{j::get(_v_42604_p,this->_literals[29])});})());_text44269+=u"";_text44269+=j::string(([&]()->V{V _callee44274=this->_v_42461_suggest.get();return j::call(_callee44274,j::Args{j::get(_v_42604_p,this->_literals[29]),([&]()->V{V _receiver44271=j::builtin("Object");V _method44272=this->_literals[13];V _method=j::get(_receiver44271,_method44272);j::Args _params44273=j::Args{this->_v_42502_SPINS.get()};return j::call(_method,_params44273,_receiver44271);})()});})());_text44269+=u"";return V(std::move(_text44269));})()});})()):([&]()->V{V _callee44277=this->_v_42490_anglesOf.get();return j::call(_callee44277,j::Args{j::get(_v_42604_p,this->_literals[29]),([&]()->V{std::u16string _text44276;_text44276+=u"";_text44276+=j::string(_v_42600_kind);_text44276+=u"'s spin";return V(std::move(_text44276));})(),this->_v_42592_ORIGIN.get()});})()));
return ([&]()->V{V _obj44278=j::object();j::put(_obj44278,this->_literals[30],_v_42600_kind);j::put(_obj44278,this->_literals[31],([&]()->V{V _callee44280=this->_v_42594_animated.get();return j::call(_callee44280,j::Args{j::get(_v_42604_p,this->_literals[31]),([&]()->V{std::u16string _text44279;_text44279+=u"";_text44279+=j::string(_v_42600_kind);_text44279+=u"'s at";return V(std::move(_text44279));})()});})());j::put(_obj44278,this->_literals[32],(j::truth(([&]()->V{V _lhs44281=j::unary("typeof",j::get(_v_42604_p,this->_literals[32]));V _rhs44282=this->_literals[0];return V(j::equal(_lhs44281,_rhs44282,true));})())?([&]()->V{V _callee44284=this->_v_42594_animated.get();return j::call(_callee44284,j::Args{j::get(_v_42604_p,this->_literals[32]),([&]()->V{std::u16string _text44283;_text44283+=u"";_text44283+=j::string(_v_42600_kind);_text44283+=u"'s rotate";return V(std::move(_text44283));})()});})():([&]()->V{V _callee44286=this->_v_42490_anglesOf.get();return j::call(_callee44286,j::Args{j::get(_v_42604_p,this->_literals[32]),([&]()->V{std::u16string _text44285;_text44285+=u"";_text44285+=j::string(_v_42600_kind);_text44285+=u"'s rotate";return V(std::move(_text44285));})(),this->_v_42592_ORIGIN.get()});})()));j::put(_obj44278,this->_literals[29],_v_42611_spin);j::put(_obj44278,this->_literals[33],([&]()->V{V _callee44288=this->_v_42465_positive.get();return j::call(_callee44288,j::Args{j::get(_v_42604_p,this->_literals[33]),([&]()->V{std::u16string _text44287;_text44287+=u"";_text44287+=j::string(_v_42600_kind);_text44287+=u"'s scale";return V(std::move(_text44287));})(),V(1.0)});})());j::put(_obj44278,this->_literals[25],([&]()->V{V _chain44289=_v_42605_color;if(j::nullish(_chain44289))return V{};V _chain44290=j::get(_chain44289,this->_literals[34]);V _chain44291=j::call(_chain44290,j::Args{},_chain44289);return _chain44291;})());j::put(_obj44278,this->_literals[23],_v_42606_texture);j::put(_obj44278,this->_literals[27],([&]()->V{V _logical44292=j::get(_v_42604_p,this->_literals[27]);return j::nullish(_logical44292)?V(true):_logical44292;})());return _obj44278;})();

}

return V{};
},3);
this->_v_42613_shape.get()=j::function([=](const j::Args &_args_fn42614,const V &_receiver_fn42614,const V &_self_fn42614) mutable ->V{
V _v_42615_b;
_v_42615_b=_args_fn42614[0];
{
V _v_42616_s;
if(j::truth(([&]()->V{V _logical44293=j::get(_v_42615_b,this->_literals[23]);return j::truth(_logical44293)?([&]()->V{V _lhs44294=j::get(j::get(_v_42615_b,this->_literals[23]),this->_literals[9]);V _rhs44295=V(3.0);return j::binary(">=",_lhs44294,_rhs44295);})():_logical44293;})())){(void)(([&]()->V{V _base44297=_v_42615_b;V _key44298=this->_literals[35];V _assign44296=V(true);return j::put(_base44297,_key44298,_assign44296);})());
}
_v_42616_s=([&]()->V{V _receiver44300=j::builtin("Object");V _method44301=this->_literals[36];V _method=j::get(_receiver44300,_method44301);j::Args _params44302=j::Args{([&]()->V{V _obj44299=j::object();j::put(_obj44299,this->_literals[30],j::get(_v_42615_b,this->_literals[30]));return _obj44299;})()};return j::call(_method,_params44302,_receiver44300);})();
(void)(([&]()->V{V _receiver44303=this->_v_42590_BODIES.get();V _method44304=this->_literals[37];V _method=j::get(_receiver44303,_method44304);j::Args _params44305=j::Args{_v_42616_s,_v_42615_b};return j::call(_method,_params44305,_receiver44303);})());
return _v_42616_s;

}

return V{};
},1);
this->_v_42617_body.get()=j::function([=](const j::Args &_args_fn42618,const V &_receiver_fn42618,const V &_self_fn42618) mutable ->V{
V _v_42619_s;
V _v_42620_who;
_v_42619_s=_args_fn42618[0];
_v_42620_who=_args_fn42618[1];
{
V _v_42621_b;
_v_42621_b=(j::truth(([&]()->V{V _logical44306=([&]()->V{V _lhs44307=_v_42619_s;V _rhs44308=V::null();return V(!j::equal(_lhs44307,_rhs44308,true));})();return j::truth(_logical44306)?([&]()->V{V _lhs44309=j::unary("typeof",_v_42619_s);V _rhs44310=this->_literals[15];return V(j::equal(_lhs44309,_rhs44310,true));})():_logical44306;})())?([&]()->V{V _receiver44311=this->_v_42590_BODIES.get();V _method44312=this->_literals[38];V _method=j::get(_receiver44311,_method44312);j::Args _params44313=j::Args{_v_42619_s};return j::call(_method,_params44313,_receiver44311);})():j::builtin("undefined"));
if(j::truth(j::unary("!",_v_42621_b))){(void)(([&]()->V{V _callee44321=this->_v_42449_fail.get();return j::call(_callee44321,j::Args{([&]()->V{std::u16string _text44314;_text44314+=u"";_text44314+=j::string(_v_42620_who);_text44314+=u" takes shapes made by ";_text44314+=j::string(([&]()->V{V _callee44319=this->_v_42445_and.get();return j::call(_callee44319,j::Args{([&]()->V{V _receiver44316=this->_v_42589_KINDS.get();V _method44317=this->_literals[14];V _method=j::get(_receiver44316,_method44317);j::Args _params44318=j::Args{j::function([=](const j::Args &_args_fn42622,const V &_receiver_fn42622,const V &_self_fn42622) mutable ->V{
V _v_42623_k;
_v_42623_k=_args_fn42622[0];
return ([&]()->V{std::u16string _text44315;_text44315+=u"";_text44315+=j::string(_v_42623_k);_text44315+=u"()";return V(std::move(_text44315));})();
return V{};
},1)};return j::call(_method,_params44318,_receiver44316);})()});})());_text44314+=u", not ";_text44314+=j::string(([&]()->V{V _callee44320=this->_v_42462_shown.get();return j::call(_callee44320,j::Args{_v_42619_s});})());_text44314+=u"";return V(std::move(_text44314));})()});})());
}
return _v_42621_b;

}

return V{};
},2);
this->_v_42624_digest.get()=j::function([=](const j::Args &_args_fn42625,const V &_receiver_fn42625,const V &_self_fn42625) mutable ->V{
V _v_42626_list;
_v_42626_list=_args_fn42625[0];
{
V _v_42627_u;
V _v_42628_h;
V _v_42629_g;
_v_42627_u=([&]()->V{V _callee44322=j::builtin("Uint32Array");return j::construct(_callee44322,j::Args{j::get(_v_42626_list,this->_literals[39]),j::get(_v_42626_list,this->_literals[40]),j::get(_v_42626_list,this->_literals[9])});})();
_v_42628_h=V(2166136261.0);
_v_42629_g=V(2538058380.0);
{V _v_42630_i;
_v_42630_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs44323=_v_42630_i;V _rhs44324=j::get(_v_42627_u,this->_literals[9]);return j::binary("<",_lhs44323,_rhs44324);})());(void)(j::increment(_v_42630_i,1,false))){
(void)((_v_42628_h=([&]()->V{V _number44328=([&]()->V{V _lhs44330=_v_42628_h;V _rhs44331=j::get(_v_42627_u,_v_42630_i);return V(int(j::i32(_lhs44330)^j::i32(_rhs44331)));})();V _number44329=V(16777619.0);return V(double(int32_t(j::u32(_number44328)*j::u32(_number44329))));})()));
(void)((_v_42629_g=([&]()->V{V _number44335=([&]()->V{V _lhs44337=_v_42629_g;V _rhs44338=j::get(_v_42627_u,_v_42630_i);return V(int(j::i32(_lhs44337)^j::i32(_rhs44338)));})();V _number44336=V(2246822519.0);return V(double(int32_t(j::u32(_number44335)*j::u32(_number44336))));})()));

}
}
return ([&]()->V{std::u16string _text44339;_text44339+=u"";_text44339+=j::string(j::get(_v_42627_u,this->_literals[9]));_text44339+=u"#";_text44339+=j::string(([&]()->V{V _receiver44340=([&]()->V{V _lhs44343=_v_42628_h;V _rhs44344=V(0.0);return V(double(j::u32(_lhs44343)>>(j::u32(_rhs44344)&31)));})();V _method44341=this->_literals[41];V _method=j::get(_receiver44340,_method44341);j::Args _params44342=j::Args{V(36.0)};return j::call(_method,_params44342,_receiver44340);})());_text44339+=u".";_text44339+=j::string(([&]()->V{V _receiver44345=([&]()->V{V _lhs44348=_v_42629_g;V _rhs44349=V(0.0);return V(double(j::u32(_lhs44348)>>(j::u32(_rhs44349)&31)));})();V _method44346=this->_literals[41];V _method=j::get(_receiver44345,_method44346);j::Args _params44347=j::Args{V(36.0)};return j::call(_method,_params44347,_receiver44345);})());_text44339+=u"";return V(std::move(_text44339));})();

}

return V{};
},1);
this->_v_42634_sigOf.get()=j::function([=](const j::Args &_args_fn42635,const V &_receiver_fn42635,const V &_self_fn42635) mutable ->V{
V _v_42636_b;
_v_42636_b=_args_fn42635[0];
{
V _v_42637_at;
V _v_42638_rot;
V _v_42639_sig;
if(j::truth(([&]()->V{V _lhs44350=j::get(_v_42636_b,this->_literals[42]);V _rhs44351=j::builtin("undefined");return V(!j::equal(_lhs44350,_rhs44351,true));})())){return j::get(_v_42636_b,this->_literals[42]);
}
_v_42637_at=([&]()->V{V _callee44352=this->_v_42631_motion.get();return j::call(_callee44352,j::Args{j::get(_v_42636_b,this->_literals[31])});})();
_v_42638_rot=([&]()->V{V _callee44353=this->_v_42631_motion.get();return j::call(_callee44353,j::Args{j::get(_v_42636_b,this->_literals[32])});})();
_v_42639_sig=V::null();
if(j::truth(([&]()->V{V _logical44354=([&]()->V{V _logical44355=([&]()->V{V _lhs44356=j::get(_v_42636_b,this->_literals[43]);V _rhs44357=V::null();return V(!j::equal(_lhs44356,_rhs44357,true));})();return j::truth(_logical44355)?([&]()->V{V _lhs44358=_v_42637_at;V _rhs44359=V::null();return V(!j::equal(_lhs44358,_rhs44359,true));})():_logical44355;})();return j::truth(_logical44354)?([&]()->V{V _lhs44360=_v_42638_rot;V _rhs44361=V::null();return V(!j::equal(_lhs44360,_rhs44361,true));})():_logical44354;})())){
V _v_42640_inner;
_v_42640_inner=(j::truth(j::get(_v_42636_b,this->_literals[44]))?([&]()->V{V _receiver44362=j::get(_v_42636_b,this->_literals[44]);V _method44363=this->_literals[14];V _method=j::get(_receiver44362,_method44363);j::Args _params44364=j::Args{_self_fn42635};return j::call(_method,_params44364,_receiver44362);})():([&]()->V{j::Args _array44365;return j::array(std::move(_array44365));})());
if(j::truth(j::unary("!",([&]()->V{V _receiver44366=_v_42640_inner;V _method44367=this->_literals[19];V _method=j::get(_receiver44366,_method44367);j::Args _params44368=j::Args{V::null()};return j::call(_method,_params44368,_receiver44366);})()))){(void)((_v_42639_sig=([&]()->V{std::u16string _text44370;_text44370+=u"";_text44370+=j::string(j::get(_v_42636_b,this->_literals[30]));_text44370+=u"(";_text44370+=j::string(j::get(_v_42636_b,this->_literals[43]));_text44370+=u")@";_text44370+=j::string(_v_42637_at);_text44370+=u"r";_text44370+=j::string(_v_42638_rot);_text44370+=u"s";_text44370+=j::string(([&]()->V{V _receiver44371=j::get(_v_42636_b,this->_literals[29]);V _method44372=this->_literals[46];V _method=j::get(_receiver44371,_method44372);j::Args _params44373=j::Args{this->_literals[45]};return j::call(_method,_params44373,_receiver44371);})());_text44370+=u"k";_text44370+=j::string(j::get(_v_42636_b,this->_literals[33]));_text44370+=u"";_text44370+=j::string((j::truth(j::get(_v_42636_b,this->_literals[27]))?this->_literals[47]:this->_literals[22]));_text44370+=u"";_text44370+=j::string((j::truth(j::get(_v_42636_b,this->_literals[35]))?this->_literals[48]:this->_literals[22]));_text44370+=u"";_text44370+=j::string((j::truth(j::get(_v_42636_b,this->_literals[44]))?([&]()->V{std::u16string _text44374;_text44374+=u"[";_text44374+=j::string(([&]()->V{V _receiver44375=_v_42640_inner;V _method44376=this->_literals[46];V _method=j::get(_receiver44375,_method44376);j::Args _params44377=j::Args{this->_literals[49]};return j::call(_method,_params44377,_receiver44375);})());_text44374+=u"]";return V(std::move(_text44374));})():this->_literals[22]));_text44370+=u"";return V(std::move(_text44370));})()));
}

}

return ([&]()->V{V _base44379=_v_42636_b;V _key44380=this->_literals[42];V _assign44378=_v_42639_sig;return j::put(_base44379,_key44380,_assign44378);})();

}

return V{};
},1);
this->_v_42642_memo.get()=j::function([=](const j::Args &_args_fn42643,const V &_receiver_fn42643,const V &_self_fn42643) mutable ->V{
V _v_42644_key;
V _v_42645_build;
_v_42644_key=_args_fn42643[0];
_v_42645_build=_args_fn42643[1];
{
V _v_42646_m;
_v_42646_m=([&]()->V{V _receiver44381=this->_v_42641_MEMO.get();V _method44382=this->_literals[38];V _method=j::get(_receiver44381,_method44382);j::Args _params44383=j::Args{_v_42644_key};return j::call(_method,_params44383,_receiver44381);})();
if(j::truth(j::unary("!",_v_42646_m))){
if(j::truth(([&]()->V{V _lhs44384=j::get(this->_v_42641_MEMO.get(),this->_literals[50]);V _rhs44385=V(256.0);return j::binary(">=",_lhs44384,_rhs44385);})())){(void)(([&]()->V{V _receiver44386=this->_v_42641_MEMO.get();V _method44387=this->_literals[51];V _method=j::get(_receiver44386,_method44387);j::Args _params44388=j::Args{};return j::call(_method,_params44388,_receiver44386);})());
}
(void)(([&]()->V{V _receiver44391=this->_v_42641_MEMO.get();V _method44392=this->_literals[37];V _method=j::get(_receiver44391,_method44392);j::Args _params44393=j::Args{_v_42644_key,(_v_42646_m=([&]()->V{V _callee44390=_v_42645_build;return j::call(_callee44390,j::Args{});})())};return j::call(_method,_params44393,_receiver44391);})());

}

return _v_42646_m;

}

return V{};
},2);
this->_v_42651_lattice.get()=j::function([=](const j::Args &_args_fn42652,const V &_receiver_fn42652,const V &_self_fn42652) mutable ->V{
V _v_42653_nu;
V _v_42654_nv;
V _v_42655_closed;
V _v_42656_place;
_v_42653_nu=_args_fn42652[0];
_v_42654_nv=_args_fn42652[1];
_v_42655_closed=_args_fn42652[2];
_v_42656_place=_args_fn42652[3];
{
V _v_42657_count;
V _v_42658_pos;
V _v_42659_nrm;
V _v_42660_uv;
V _v_42664_tri;
_v_42657_count=([&]()->V{V _lhs44394=([&]()->V{V _lhs44396=_v_42653_nu;V _rhs44397=V(1.0);return j::binary("+",_lhs44396,_rhs44397);})();V _rhs44395=([&]()->V{V _lhs44398=_v_42654_nv;V _rhs44399=V(1.0);return j::binary("+",_lhs44398,_rhs44399);})();return V(j::number(_lhs44394)*j::number(_rhs44395));})();
_v_42658_pos=([&]()->V{V _callee44402=j::builtin("Float32Array");return j::construct(_callee44402,j::Args{([&]()->V{V _lhs44400=_v_42657_count;V _rhs44401=V(3.0);return V(j::number(_lhs44400)*j::number(_rhs44401));})()});})();
_v_42659_nrm=([&]()->V{V _callee44405=j::builtin("Float32Array");return j::construct(_callee44405,j::Args{([&]()->V{V _lhs44403=_v_42657_count;V _rhs44404=V(3.0);return V(j::number(_lhs44403)*j::number(_rhs44404));})()});})();
_v_42660_uv=([&]()->V{V _callee44408=j::builtin("Float32Array");return j::construct(_callee44408,j::Args{([&]()->V{V _lhs44406=_v_42657_count;V _rhs44407=V(2.0);return V(j::number(_lhs44406)*j::number(_rhs44407));})()});})();
{V _v_42661_j;
V _v_42662_k;
_v_42661_j=V(0.0);
_v_42662_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs44409=_v_42661_j;V _rhs44410=_v_42654_nv;return j::binary("<=",_lhs44409,_rhs44410);})());(void)(j::increment(_v_42661_j,1,false))){{V _v_42663_i;
_v_42663_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs44411=_v_42663_i;V _rhs44412=_v_42653_nu;return j::binary("<=",_lhs44411,_rhs44412);})());(void)((j::increment(_v_42663_i,1,false),j::increment(_v_42662_k,1,false)))){
(void)(([&]()->V{V _callee44419=_v_42656_place;return j::call(_callee44419,j::Args{([&]()->V{V _lhs44413=_v_42663_i;V _rhs44414=_v_42653_nu;return V(j::number(_lhs44413)/j::number(_rhs44414));})(),([&]()->V{V _lhs44415=_v_42661_j;V _rhs44416=_v_42654_nv;return V(j::number(_lhs44415)/j::number(_rhs44416));})(),_v_42658_pos,_v_42659_nrm,([&]()->V{V _lhs44417=_v_42662_k;V _rhs44418=V(3.0);return V(j::number(_lhs44417)*j::number(_rhs44418));})()});})());
(void)(([&]()->V{V _base44421=_v_42660_uv;V _key44422=([&]()->V{V _lhs44423=_v_42662_k;V _rhs44424=V(2.0);return V(j::number(_lhs44423)*j::number(_rhs44424));})();V _assign44420=([&]()->V{V _lhs44425=_v_42663_i;V _rhs44426=_v_42653_nu;return V(j::number(_lhs44425)/j::number(_rhs44426));})();return j::put(_base44421,_key44422,_assign44420);})());
(void)(([&]()->V{V _base44428=_v_42660_uv;V _key44429=([&]()->V{V _lhs44430=([&]()->V{V _lhs44432=_v_42662_k;V _rhs44433=V(2.0);return V(j::number(_lhs44432)*j::number(_rhs44433));})();V _rhs44431=V(1.0);return j::binary("+",_lhs44430,_rhs44431);})();V _assign44427=([&]()->V{V _lhs44434=_v_42661_j;V _rhs44435=_v_42654_nv;return V(j::number(_lhs44434)/j::number(_rhs44435));})();return j::put(_base44428,_key44429,_assign44427);})());

}
}
}}
_v_42664_tri=([&]()->V{V _callee44440=j::builtin("Uint32Array");return j::construct(_callee44440,j::Args{([&]()->V{V _lhs44436=([&]()->V{V _lhs44438=_v_42653_nu;V _rhs44439=_v_42654_nv;return V(j::number(_lhs44438)*j::number(_rhs44439));})();V _rhs44437=V(6.0);return V(j::number(_lhs44436)*j::number(_rhs44437));})()});})();
{V _v_42665_j;
V _v_42666_q;
_v_42665_j=V(0.0);
_v_42666_q=V(0.0);
for(;j::truth(([&]()->V{V _lhs44441=_v_42665_j;V _rhs44442=_v_42654_nv;return j::binary("<",_lhs44441,_rhs44442);})());(void)(j::increment(_v_42665_j,1,false))){{V _v_42667_i;
_v_42667_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs44443=_v_42667_i;V _rhs44444=_v_42653_nu;return j::binary("<",_lhs44443,_rhs44444);})());(void)((j::increment(_v_42667_i,1,false),(_v_42666_q=j::binary("+",_v_42666_q,V(6.0)))))){
V _v_42668_a;
V _v_42669_b;
V _v_42670_c;
V _v_42671_d;
_v_42668_a=([&]()->V{V _lhs44446=([&]()->V{V _lhs44448=_v_42665_j;V _rhs44449=([&]()->V{V _lhs44450=_v_42653_nu;V _rhs44451=V(1.0);return j::binary("+",_lhs44450,_rhs44451);})();return V(j::number(_lhs44448)*j::number(_rhs44449));})();V _rhs44447=_v_42667_i;return j::binary("+",_lhs44446,_rhs44447);})();
_v_42669_b=([&]()->V{V _lhs44452=_v_42668_a;V _rhs44453=V(1.0);return j::binary("+",_lhs44452,_rhs44453);})();
_v_42670_c=([&]()->V{V _lhs44454=([&]()->V{V _lhs44456=_v_42668_a;V _rhs44457=_v_42653_nu;return j::binary("+",_lhs44456,_rhs44457);})();V _rhs44455=V(1.0);return j::binary("+",_lhs44454,_rhs44455);})();
_v_42671_d=([&]()->V{V _lhs44458=_v_42670_c;V _rhs44459=V(1.0);return j::binary("+",_lhs44458,_rhs44459);})();
(void)(([&]()->V{V _base44461=_v_42664_tri;V _key44462=_v_42666_q;V _assign44460=_v_42668_a;return j::put(_base44461,_key44462,_assign44460);})());
(void)(([&]()->V{V _base44464=_v_42664_tri;V _key44465=([&]()->V{V _lhs44466=_v_42666_q;V _rhs44467=V(1.0);return j::binary("+",_lhs44466,_rhs44467);})();V _assign44463=_v_42669_b;return j::put(_base44464,_key44465,_assign44463);})());
(void)(([&]()->V{V _base44469=_v_42664_tri;V _key44470=([&]()->V{V _lhs44471=_v_42666_q;V _rhs44472=V(2.0);return j::binary("+",_lhs44471,_rhs44472);})();V _assign44468=_v_42671_d;return j::put(_base44469,_key44470,_assign44468);})());
(void)(([&]()->V{V _base44474=_v_42664_tri;V _key44475=([&]()->V{V _lhs44476=_v_42666_q;V _rhs44477=V(3.0);return j::binary("+",_lhs44476,_rhs44477);})();V _assign44473=_v_42668_a;return j::put(_base44474,_key44475,_assign44473);})());
(void)(([&]()->V{V _base44479=_v_42664_tri;V _key44480=([&]()->V{V _lhs44481=_v_42666_q;V _rhs44482=V(4.0);return j::binary("+",_lhs44481,_rhs44482);})();V _assign44478=_v_42671_d;return j::put(_base44479,_key44480,_assign44478);})());
(void)(([&]()->V{V _base44484=_v_42664_tri;V _key44485=([&]()->V{V _lhs44486=_v_42666_q;V _rhs44487=V(5.0);return j::binary("+",_lhs44486,_rhs44487);})();V _assign44483=_v_42670_c;return j::put(_base44484,_key44485,_assign44483);})());

}
}
}}
return ([&]()->V{V _obj44488=j::object();j::put(_obj44488,this->_literals[52],_v_42658_pos);j::put(_obj44488,this->_literals[53],_v_42659_nrm);j::put(_obj44488,this->_literals[54],_v_42660_uv);j::put(_obj44488,this->_literals[55],_v_42664_tri);j::put(_obj44488,this->_literals[56],_v_42655_closed);j::put(_obj44488,this->_literals[27],V::null());j::put(_obj44488,this->_literals[57],V::null());j::put(_obj44488,this->_literals[58],V(false));return _obj44488;})();

}

return V{};
},4);
this->_v_42672_join.get()=j::function([=](const j::Args &_args_fn42673,const V &_receiver_fn42673,const V &_self_fn42673) mutable ->V{
V _v_42674_parts;
V _v_42675_closed;
_v_42674_parts=_args_fn42673[0];
_v_42675_closed=_args_fn42673[1];
{
V _v_42676_nv;
V _v_42677_nt;
V _v_42679_pos;
V _v_42680_nrm;
V _v_42681_uv;
V _v_42682_tri;
V _v_42683_v;
V _v_42684_t;
_v_42676_nv=V(0.0);
_v_42677_nt=V(0.0);
{for(const auto &_item44489:j::elements(_v_42674_parts)){V _v_42678_m;
_v_42678_m=_item44489;
(void)(((_v_42676_nv=j::binary("+",_v_42676_nv,([&]()->V{V _lhs44491=j::get(j::get(_v_42678_m,this->_literals[52]),this->_literals[9]);V _rhs44492=V(3.0);return V(j::number(_lhs44491)/j::number(_rhs44492));})())),(_v_42677_nt=j::binary("+",_v_42677_nt,j::get(j::get(_v_42678_m,this->_literals[55]),this->_literals[9])))));
}}
_v_42679_pos=([&]()->V{V _callee44496=j::builtin("Float32Array");return j::construct(_callee44496,j::Args{([&]()->V{V _lhs44494=_v_42676_nv;V _rhs44495=V(3.0);return V(j::number(_lhs44494)*j::number(_rhs44495));})()});})();
_v_42680_nrm=([&]()->V{V _callee44499=j::builtin("Float32Array");return j::construct(_callee44499,j::Args{([&]()->V{V _lhs44497=_v_42676_nv;V _rhs44498=V(3.0);return V(j::number(_lhs44497)*j::number(_rhs44498));})()});})();
_v_42681_uv=([&]()->V{V _callee44502=j::builtin("Float32Array");return j::construct(_callee44502,j::Args{([&]()->V{V _lhs44500=_v_42676_nv;V _rhs44501=V(2.0);return V(j::number(_lhs44500)*j::number(_rhs44501));})()});})();
_v_42682_tri=([&]()->V{V _callee44503=j::builtin("Uint32Array");return j::construct(_callee44503,j::Args{_v_42677_nt});})();
_v_42683_v=V(0.0);
_v_42684_t=V(0.0);
{for(const auto &_item44504:j::elements(_v_42674_parts)){V _v_42685_m;
_v_42685_m=_item44504;
{
(void)(([&]()->V{V _receiver44507=_v_42679_pos;V _method44508=this->_literals[37];V _method=j::get(_receiver44507,_method44508);j::Args _params44509=j::Args{j::get(_v_42685_m,this->_literals[52]),([&]()->V{V _lhs44505=_v_42683_v;V _rhs44506=V(3.0);return V(j::number(_lhs44505)*j::number(_rhs44506));})()};return j::call(_method,_params44509,_receiver44507);})());
(void)(([&]()->V{V _receiver44512=_v_42680_nrm;V _method44513=this->_literals[37];V _method=j::get(_receiver44512,_method44513);j::Args _params44514=j::Args{j::get(_v_42685_m,this->_literals[53]),([&]()->V{V _lhs44510=_v_42683_v;V _rhs44511=V(3.0);return V(j::number(_lhs44510)*j::number(_rhs44511));})()};return j::call(_method,_params44514,_receiver44512);})());
(void)(([&]()->V{V _receiver44517=_v_42681_uv;V _method44518=this->_literals[37];V _method=j::get(_receiver44517,_method44518);j::Args _params44519=j::Args{j::get(_v_42685_m,this->_literals[54]),([&]()->V{V _lhs44515=_v_42683_v;V _rhs44516=V(2.0);return V(j::number(_lhs44515)*j::number(_rhs44516));})()};return j::call(_method,_params44519,_receiver44517);})());
{V _v_42686_i;
_v_42686_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs44520=_v_42686_i;V _rhs44521=j::get(j::get(_v_42685_m,this->_literals[55]),this->_literals[9]);return j::binary("<",_lhs44520,_rhs44521);})());(void)(j::increment(_v_42686_i,1,false))){(void)(([&]()->V{V _base44523=_v_42682_tri;V _key44524=j::increment(_v_42684_t,1,false);V _assign44522=([&]()->V{V _lhs44525=j::get(j::get(_v_42685_m,this->_literals[55]),_v_42686_i);V _rhs44526=_v_42683_v;return j::binary("+",_lhs44525,_rhs44526);})();return j::put(_base44523,_key44524,_assign44522);})());
}}
(void)((_v_42683_v=j::binary("+",_v_42683_v,([&]()->V{V _lhs44528=j::get(j::get(_v_42685_m,this->_literals[52]),this->_literals[9]);V _rhs44529=V(3.0);return V(j::number(_lhs44528)/j::number(_rhs44529));})())));

}
}}
return ([&]()->V{V _obj44530=j::object();j::put(_obj44530,this->_literals[52],_v_42679_pos);j::put(_obj44530,this->_literals[53],_v_42680_nrm);j::put(_obj44530,this->_literals[54],_v_42681_uv);j::put(_obj44530,this->_literals[55],_v_42682_tri);j::put(_obj44530,this->_literals[56],_v_42675_closed);j::put(_obj44530,this->_literals[27],V::null());j::put(_obj44530,this->_literals[57],V::null());j::put(_obj44530,this->_literals[58],V(false));return _obj44530;})();

}

return V{};
},2);
this->_v_42687_outline.get()=j::function([=](const j::Args &_args_fn42688,const V &_receiver_fn42688,const V &_self_fn42688) mutable ->V{
j::Cell _v_42689_pos;
V _v_42690_polys;
j::Cell _v_42691_normals;
j::Cell _v_42692_twoSided;
_v_42689_pos.get()=_args_fn42688[0];
_v_42690_polys=_args_fn42688[1];
_v_42691_normals.get()=_args_fn42688[2];
_v_42692_twoSided.get()=_args_fn42688[3];
{
j::Cell _v_42693_place;
j::Cell _v_42696_seen;
V _v_42707_keep;
j::Cell _v_42712_edges;
j::Cell _v_42713_sides;
_v_42693_place.get()=j::function([=](const j::Args &_args_fn42694,const V &_receiver_fn42694,const V &_self_fn42694) mutable ->V{
V _v_42695_i;
_v_42695_i=_args_fn42694[0];
return ([&]()->V{std::u16string _text44531;_text44531+=u"";_text44531+=j::string(([&]()->V{V _number44536=([&]()->V{V _lhs44537=j::get(_v_42689_pos.get(),([&]()->V{V _lhs44539=_v_42695_i;V _rhs44540=V(3.0);return V(j::number(_lhs44539)*j::number(_rhs44540));})());V _rhs44538=V(100000.0);return V(j::number(_lhs44537)*j::number(_rhs44538));})();return V(std::floor(j::number(_number44536)+.5));})());_text44531+=u",";_text44531+=j::string(([&]()->V{V _number44547=([&]()->V{V _lhs44548=j::get(_v_42689_pos.get(),([&]()->V{V _lhs44550=([&]()->V{V _lhs44552=_v_42695_i;V _rhs44553=V(3.0);return V(j::number(_lhs44552)*j::number(_rhs44553));})();V _rhs44551=V(1.0);return j::binary("+",_lhs44550,_rhs44551);})());V _rhs44549=V(100000.0);return V(j::number(_lhs44548)*j::number(_rhs44549));})();return V(std::floor(j::number(_number44547)+.5));})());_text44531+=u",";_text44531+=j::string(([&]()->V{V _number44560=([&]()->V{V _lhs44561=j::get(_v_42689_pos.get(),([&]()->V{V _lhs44563=([&]()->V{V _lhs44565=_v_42695_i;V _rhs44566=V(3.0);return V(j::number(_lhs44565)*j::number(_rhs44566));})();V _rhs44564=V(2.0);return j::binary("+",_lhs44563,_rhs44564);})());V _rhs44562=V(100000.0);return V(j::number(_lhs44561)*j::number(_rhs44562));})();return V(std::floor(j::number(_number44560)+.5));})());_text44531+=u"";return V(std::move(_text44531));})();
return V{};
},1);
_v_42696_seen.get()=([&]()->V{V _callee44567=j::builtin("Map");return j::construct(_callee44567,j::Args{});})();
(void)(([&]()->V{V _receiver44592=_v_42690_polys;V _method44593=this->_literals[63];V _method=j::get(_receiver44592,_method44593);j::Args _params44594=j::Args{j::function([=](const j::Args &_args_fn42697,const V &_receiver_fn42697,const V &_self_fn42697) mutable ->V{
V _v_42698_f;
V _v_42699_k;
_v_42698_f=_args_fn42697[0];
_v_42699_k=_args_fn42697[1];
{
{V _v_42700_i;
_v_42700_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs44568=_v_42700_i;V _rhs44569=j::get(_v_42698_f,this->_literals[9]);return j::binary("<",_lhs44568,_rhs44569);})());(void)(j::increment(_v_42700_i,1,false))){
V _v_42701_a;
V _v_42702_b;
V _v_42703_pa;
V _v_42704_pb;
V _v_42705_key;
V _v_42706_e;
_v_42701_a=j::get(_v_42698_f,_v_42700_i);
_v_42702_b=j::get(_v_42698_f,([&]()->V{V _lhs44570=([&]()->V{V _lhs44572=_v_42700_i;V _rhs44573=V(1.0);return j::binary("+",_lhs44572,_rhs44573);})();V _rhs44571=j::get(_v_42698_f,this->_literals[9]);return V(std::fmod(j::number(_lhs44570),j::number(_rhs44571)));})());
_v_42703_pa=([&]()->V{V _callee44574=_v_42693_place.get();return j::call(_callee44574,j::Args{_v_42701_a});})();
_v_42704_pb=([&]()->V{V _callee44575=_v_42693_place.get();return j::call(_callee44575,j::Args{_v_42702_b});})();
if(j::truth(([&]()->V{V _lhs44576=_v_42703_pa;V _rhs44577=_v_42704_pb;return V(j::equal(_lhs44576,_rhs44577,true));})())){continue;
}
_v_42705_key=(j::truth(([&]()->V{V _lhs44578=_v_42703_pa;V _rhs44579=_v_42704_pb;return j::binary("<",_lhs44578,_rhs44579);})())?([&]()->V{std::u16string _text44580;_text44580+=u"";_text44580+=j::string(_v_42703_pa);_text44580+=u"|";_text44580+=j::string(_v_42704_pb);_text44580+=u"";return V(std::move(_text44580));})():([&]()->V{std::u16string _text44581;_text44581+=u"";_text44581+=j::string(_v_42704_pb);_text44581+=u"|";_text44581+=j::string(_v_42703_pa);_text44581+=u"";return V(std::move(_text44581));})());
_v_42706_e=([&]()->V{V _receiver44582=_v_42696_seen.get();V _method44583=this->_literals[38];V _method=j::get(_receiver44582,_method44583);j::Args _params44584=j::Args{_v_42705_key};return j::call(_method,_params44584,_receiver44582);})();
if(j::truth(j::unary("!",_v_42706_e))){(void)(([&]()->V{V _receiver44586=_v_42696_seen.get();V _method44587=this->_literals[37];V _method=j::get(_receiver44586,_method44587);j::Args _params44588=j::Args{_v_42705_key,([&]()->V{V _obj44585=j::object();j::put(_obj44585,this->_literals[59],_v_42701_a);j::put(_obj44585,this->_literals[60],_v_42702_b);j::put(_obj44585,this->_literals[61],j::get(_v_42691_normals.get(),_v_42699_k));j::put(_obj44585,this->_literals[62],V::null());return _obj44585;})()};return j::call(_method,_params44588,_receiver44586);})());
}else {if(j::truth(j::unary("!",j::get(_v_42706_e,this->_literals[62])))){(void)(([&]()->V{V _base44590=_v_42706_e;V _key44591=this->_literals[62];V _assign44589=j::get(_v_42691_normals.get(),_v_42699_k);return j::put(_base44590,_key44591,_assign44589);})());
}
}

}
}

}

return V{};
},2)};return j::call(_method,_params44594,_receiver44592);})());
_v_42707_keep=([&]()->V{V _receiver44618=([&]()->V{j::Args _array44621;for(const auto &_value:j::elements(([&]()->V{V _receiver44622=_v_42696_seen.get();V _method44623=this->_literals[64];V _method=j::get(_receiver44622,_method44623);j::Args _params44624=j::Args{};return j::call(_method,_params44624,_receiver44622);})()))_array44621.push_back(_value);return j::array(std::move(_array44621));})();V _method44619=this->_literals[65];V _method=j::get(_receiver44618,_method44619);j::Args _params44620=j::Args{j::function([=](const j::Args &_args_fn42708,const V &_receiver_fn42708,const V &_self_fn42708) mutable ->V{
V _v_42709_n;
V _v_42710_m;
V _pattern44595=_args_fn42708[0];
_v_42709_n=j::get(_pattern44595,this->_literals[61]);
_v_42710_m=j::get(_pattern44595,this->_literals[62]);
{
V _v_42711_d;
if(j::truth(j::unary("!",_v_42710_m))){return V(true);
}
_v_42711_d=([&]()->V{V _lhs44596=([&]()->V{V _lhs44598=([&]()->V{V _lhs44600=j::get(_v_42709_n,V(0.0));V _rhs44601=j::get(_v_42710_m,V(0.0));return V(j::number(_lhs44600)*j::number(_rhs44601));})();V _rhs44599=([&]()->V{V _lhs44602=j::get(_v_42709_n,V(1.0));V _rhs44603=j::get(_v_42710_m,V(1.0));return V(j::number(_lhs44602)*j::number(_rhs44603));})();return j::binary("+",_lhs44598,_rhs44599);})();V _rhs44597=([&]()->V{V _lhs44604=j::get(_v_42709_n,V(2.0));V _rhs44605=j::get(_v_42710_m,V(2.0));return V(j::number(_lhs44604)*j::number(_rhs44605));})();return j::binary("+",_lhs44596,_rhs44597);})();
return ([&]()->V{V _lhs44606=(j::truth(_v_42692_twoSided.get())?([&]()->V{V _number44608=_v_42711_d;return V(std::fabs(j::number(_number44608)));})():_v_42711_d);V _rhs44607=([&]()->V{V _number44613=([&]()->V{V _lhs44614=([&]()->V{V _lhs44616=V(25.0);V _rhs44617=j::get(j::builtin("Math"),this->_literals[18]);return V(j::number(_lhs44616)*j::number(_rhs44617));})();V _rhs44615=V(180.0);return V(j::number(_lhs44614)/j::number(_rhs44615));})();return V(std::cos(j::number(_number44613)));})();return j::binary("<",_lhs44606,_rhs44607);})();

}

return V{};
},1)};return j::call(_method,_params44620,_receiver44618);})();
if(j::truth(j::unary("!",j::get(_v_42707_keep,this->_literals[9])))){return ([&]()->V{V _obj44625=j::object();j::put(_obj44625,this->_literals[27],V::null());j::put(_obj44625,this->_literals[57],V::null());j::put(_obj44625,this->_literals[58],V(false));return _obj44625;})();
}
_v_42712_edges.get()=([&]()->V{V _callee44628=j::builtin("Uint32Array");return j::construct(_callee44628,j::Args{([&]()->V{V _lhs44626=j::get(_v_42707_keep,this->_literals[9]);V _rhs44627=V(2.0);return V(j::number(_lhs44626)*j::number(_rhs44627));})()});})();
_v_42713_sides.get()=([&]()->V{V _callee44631=j::builtin("Float32Array");return j::construct(_callee44631,j::Args{([&]()->V{V _lhs44629=j::get(_v_42707_keep,this->_literals[9]);V _rhs44630=V(6.0);return V(j::number(_lhs44629)*j::number(_rhs44630));})()});})();
(void)(([&]()->V{V _receiver44657=_v_42707_keep;V _method44658=this->_literals[63];V _method=j::get(_receiver44657,_method44658);j::Args _params44659=j::Args{j::function([=](const j::Args &_args_fn42714,const V &_receiver_fn42714,const V &_self_fn42714) mutable ->V{
V _v_42715_a;
V _v_42716_b;
V _v_42717_n;
V _v_42718_m;
V _v_42719_i;
V _pattern44632=_args_fn42714[0];
_v_42715_a=j::get(_pattern44632,this->_literals[59]);
_v_42716_b=j::get(_pattern44632,this->_literals[60]);
_v_42717_n=j::get(_pattern44632,this->_literals[61]);
_v_42718_m=j::get(_pattern44632,this->_literals[62]);
_v_42719_i=_args_fn42714[1];
{
(void)(([&]()->V{V _base44634=_v_42712_edges.get();V _key44635=([&]()->V{V _lhs44636=_v_42719_i;V _rhs44637=V(2.0);return V(j::number(_lhs44636)*j::number(_rhs44637));})();V _assign44633=_v_42715_a;return j::put(_base44634,_key44635,_assign44633);})());
(void)(([&]()->V{V _base44639=_v_42712_edges.get();V _key44640=([&]()->V{V _lhs44641=([&]()->V{V _lhs44643=_v_42719_i;V _rhs44644=V(2.0);return V(j::number(_lhs44643)*j::number(_rhs44644));})();V _rhs44642=V(1.0);return j::binary("+",_lhs44641,_rhs44642);})();V _assign44638=_v_42716_b;return j::put(_base44639,_key44640,_assign44638);})());
(void)(([&]()->V{V _receiver44647=_v_42713_sides.get();V _method44648=this->_literals[37];V _method=j::get(_receiver44647,_method44648);j::Args _params44649=j::Args{_v_42717_n,([&]()->V{V _lhs44645=_v_42719_i;V _rhs44646=V(6.0);return V(j::number(_lhs44645)*j::number(_rhs44646));})()};return j::call(_method,_params44649,_receiver44647);})());
if(j::truth(_v_42718_m)){(void)(([&]()->V{V _receiver44654=_v_42713_sides.get();V _method44655=this->_literals[37];V _method=j::get(_receiver44654,_method44655);j::Args _params44656=j::Args{_v_42718_m,([&]()->V{V _lhs44650=([&]()->V{V _lhs44652=_v_42719_i;V _rhs44653=V(6.0);return V(j::number(_lhs44652)*j::number(_rhs44653));})();V _rhs44651=V(3.0);return j::binary("+",_lhs44650,_rhs44651);})()};return j::call(_method,_params44656,_receiver44654);})());
}

}

return V{};
},2)};return j::call(_method,_params44659,_receiver44657);})());
return ([&]()->V{V _obj44660=j::object();j::put(_obj44660,this->_literals[27],_v_42712_edges.get());j::put(_obj44660,this->_literals[57],_v_42713_sides.get());j::put(_obj44660,this->_literals[58],V(true));return _obj44660;})();

}

return V{};
},4);
this->_v_42720_disc.get()=j::function([=](const j::Args &_args_fn42721,const V &_receiver_fn42721,const V &_self_fn42721) mutable ->V{
V _v_42722_r;
V _v_42723_y;
V _v_42724_up;
V _v_42725_n;
_v_42722_r=_args_fn42721[0];
_v_42723_y=_args_fn42721[1];
_v_42724_up=_args_fn42721[2];
_v_42725_n=_args_fn42721[3];
{
V _v_42726_pos;
V _v_42727_nrm;
V _v_42728_uv;
V _v_42729_tri;
_v_42726_pos=([&]()->V{V _callee44665=j::builtin("Float32Array");return j::construct(_callee44665,j::Args{([&]()->V{V _lhs44661=([&]()->V{V _lhs44663=_v_42725_n;V _rhs44664=V(2.0);return j::binary("+",_lhs44663,_rhs44664);})();V _rhs44662=V(3.0);return V(j::number(_lhs44661)*j::number(_rhs44662));})()});})();
_v_42727_nrm=([&]()->V{V _callee44670=j::builtin("Float32Array");return j::construct(_callee44670,j::Args{([&]()->V{V _lhs44666=([&]()->V{V _lhs44668=_v_42725_n;V _rhs44669=V(2.0);return j::binary("+",_lhs44668,_rhs44669);})();V _rhs44667=V(3.0);return V(j::number(_lhs44666)*j::number(_rhs44667));})()});})();
_v_42728_uv=([&]()->V{V _callee44675=j::builtin("Float32Array");return j::construct(_callee44675,j::Args{([&]()->V{V _lhs44671=([&]()->V{V _lhs44673=_v_42725_n;V _rhs44674=V(2.0);return j::binary("+",_lhs44673,_rhs44674);})();V _rhs44672=V(2.0);return V(j::number(_lhs44671)*j::number(_rhs44672));})()});})();
_v_42729_tri=([&]()->V{V _callee44678=j::builtin("Uint32Array");return j::construct(_callee44678,j::Args{([&]()->V{V _lhs44676=_v_42725_n;V _rhs44677=V(3.0);return V(j::number(_lhs44676)*j::number(_rhs44677));})()});})();
(void)(([&]()->V{V _base44680=_v_42726_pos;V _key44681=V(1.0);V _assign44679=_v_42723_y;return j::put(_base44680,_key44681,_assign44679);})());
(void)(([&]()->V{V _base44683=_v_42727_nrm;V _key44684=V(1.0);V _assign44682=_v_42724_up;return j::put(_base44683,_key44684,_assign44682);})());
(void)(([&]()->V{V _base44686=_v_42728_uv;V _key44687=V(0.0);V _assign44685=([&]()->V{V _base44689=_v_42728_uv;V _key44690=V(1.0);V _assign44688=V(0.5);return j::put(_base44689,_key44690,_assign44688);})();return j::put(_base44686,_key44687,_assign44685);})());
{V _v_42730_i;
_v_42730_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs44691=_v_42730_i;V _rhs44692=_v_42725_n;return j::binary("<=",_lhs44691,_rhs44692);})());(void)(j::increment(_v_42730_i,1,false))){
V _v_42731_a;
V _v_42732_x;
V _v_42733_z;
V _v_42734_k;
_v_42731_a=([&]()->V{V _lhs44693=([&]()->V{V _lhs44695=([&]()->V{V _lhs44697=_v_42730_i;V _rhs44698=_v_42725_n;return V(j::number(_lhs44697)/j::number(_rhs44698));})();V _rhs44696=V(0.5);return V(j::number(_lhs44695)-j::number(_rhs44696));})();V _rhs44694=this->_v_42444_TAU.get();return V(j::number(_lhs44693)*j::number(_rhs44694));})();
_v_42732_x=([&]()->V{V _number44699=_v_42731_a;return V(std::sin(j::number(_number44699)));})();
_v_42733_z=j::unary("-",([&]()->V{V _number44700=_v_42731_a;return V(std::cos(j::number(_number44700)));})());
_v_42734_k=([&]()->V{V _lhs44701=([&]()->V{V _lhs44703=_v_42730_i;V _rhs44704=V(1.0);return j::binary("+",_lhs44703,_rhs44704);})();V _rhs44702=V(3.0);return V(j::number(_lhs44701)*j::number(_rhs44702));})();
(void)(([&]()->V{V _base44706=_v_42726_pos;V _key44707=_v_42734_k;V _assign44705=([&]()->V{V _lhs44708=_v_42722_r;V _rhs44709=_v_42732_x;return V(j::number(_lhs44708)*j::number(_rhs44709));})();return j::put(_base44706,_key44707,_assign44705);})());
(void)(([&]()->V{V _base44711=_v_42726_pos;V _key44712=([&]()->V{V _lhs44713=_v_42734_k;V _rhs44714=V(1.0);return j::binary("+",_lhs44713,_rhs44714);})();V _assign44710=_v_42723_y;return j::put(_base44711,_key44712,_assign44710);})());
(void)(([&]()->V{V _base44716=_v_42726_pos;V _key44717=([&]()->V{V _lhs44718=_v_42734_k;V _rhs44719=V(2.0);return j::binary("+",_lhs44718,_rhs44719);})();V _assign44715=([&]()->V{V _lhs44720=_v_42722_r;V _rhs44721=_v_42733_z;return V(j::number(_lhs44720)*j::number(_rhs44721));})();return j::put(_base44716,_key44717,_assign44715);})());
(void)(([&]()->V{V _base44723=_v_42727_nrm;V _key44724=([&]()->V{V _lhs44725=_v_42734_k;V _rhs44726=V(1.0);return j::binary("+",_lhs44725,_rhs44726);})();V _assign44722=_v_42724_up;return j::put(_base44723,_key44724,_assign44722);})());
(void)(([&]()->V{V _base44728=_v_42728_uv;V _key44729=([&]()->V{V _lhs44730=([&]()->V{V _lhs44732=_v_42730_i;V _rhs44733=V(1.0);return j::binary("+",_lhs44732,_rhs44733);})();V _rhs44731=V(2.0);return V(j::number(_lhs44730)*j::number(_rhs44731));})();V _assign44727=([&]()->V{V _lhs44734=V(0.5);V _rhs44735=([&]()->V{V _lhs44736=V(0.5);V _rhs44737=_v_42732_x;return V(j::number(_lhs44736)*j::number(_rhs44737));})();return j::binary("+",_lhs44734,_rhs44735);})();return j::put(_base44728,_key44729,_assign44727);})());
(void)(([&]()->V{V _base44739=_v_42728_uv;V _key44740=([&]()->V{V _lhs44741=([&]()->V{V _lhs44743=([&]()->V{V _lhs44745=_v_42730_i;V _rhs44746=V(1.0);return j::binary("+",_lhs44745,_rhs44746);})();V _rhs44744=V(2.0);return V(j::number(_lhs44743)*j::number(_rhs44744));})();V _rhs44742=V(1.0);return j::binary("+",_lhs44741,_rhs44742);})();V _assign44738=([&]()->V{V _lhs44747=V(0.5);V _rhs44748=([&]()->V{V _lhs44749=V(0.5);V _rhs44750=_v_42733_z;return V(j::number(_lhs44749)*j::number(_rhs44750));})();return j::binary("+",_lhs44747,_rhs44748);})();return j::put(_base44739,_key44740,_assign44738);})());
if(j::truth(([&]()->V{V _lhs44751=_v_42730_i;V _rhs44752=_v_42725_n;return j::binary("<",_lhs44751,_rhs44752);})())){(void)((([&]()->V{V _base44754=_v_42729_tri;V _key44755=([&]()->V{V _lhs44756=([&]()->V{V _lhs44758=_v_42730_i;V _rhs44759=V(3.0);return V(j::number(_lhs44758)*j::number(_rhs44759));})();V _rhs44757=V(1.0);return j::binary("+",_lhs44756,_rhs44757);})();V _assign44753=([&]()->V{V _lhs44760=_v_42730_i;V _rhs44761=V(1.0);return j::binary("+",_lhs44760,_rhs44761);})();return j::put(_base44754,_key44755,_assign44753);})(),([&]()->V{V _base44763=_v_42729_tri;V _key44764=([&]()->V{V _lhs44765=([&]()->V{V _lhs44767=_v_42730_i;V _rhs44768=V(3.0);return V(j::number(_lhs44767)*j::number(_rhs44768));})();V _rhs44766=V(2.0);return j::binary("+",_lhs44765,_rhs44766);})();V _assign44762=([&]()->V{V _lhs44769=_v_42730_i;V _rhs44770=V(2.0);return j::binary("+",_lhs44769,_rhs44770);})();return j::put(_base44763,_key44764,_assign44762);})()));
}

}
}
return ([&]()->V{V _obj44771=j::object();j::put(_obj44771,this->_literals[52],_v_42726_pos);j::put(_obj44771,this->_literals[53],_v_42727_nrm);j::put(_obj44771,this->_literals[54],_v_42728_uv);j::put(_obj44771,this->_literals[55],_v_42729_tri);j::put(_obj44771,this->_literals[56],V(true));j::put(_obj44771,this->_literals[27],V::null());j::put(_obj44771,this->_literals[57],V::null());j::put(_obj44771,this->_literals[58],V(false));return _obj44771;})();

}

return V{};
},4);
this->_v_42735_ballMesh.get()=j::function([=](const j::Args &_args_fn42736,const V &_receiver_fn42736,const V &_self_fn42736) mutable ->V{
j::Cell _v_42737_r;
V _v_42738_unit;
_v_42737_r.get()=_args_fn42736[0];
_v_42738_unit=_args_fn42736[1];
{
j::Cell _v_42739_nu;
j::Cell _v_42740_nv;
_v_42739_nu.get()=([&]()->V{V _callee44774=this->_v_42647_around.get();return j::call(_callee44774,j::Args{([&]()->V{V _lhs44772=_v_42737_r.get();V _rhs44773=_v_42738_unit;return V(j::number(_lhs44772)*j::number(_rhs44773));})()});})();
_v_42740_nv.get()=([&]()->V{V _lhs44775=_v_42739_nu.get();V _rhs44776=V(2.0);return V(j::number(_lhs44775)/j::number(_rhs44776));})();
return ([&]()->V{V _callee44831=this->_v_42642_memo.get();return j::call(_callee44831,j::Args{([&]()->V{std::u16string _text44777;_text44777+=u"sphere:";_text44777+=j::string(_v_42737_r.get());_text44777+=u":";_text44777+=j::string(_v_42739_nu.get());_text44777+=u"";return V(std::move(_text44777));})(),j::function([=](const j::Args &_args_fn42741,const V &_receiver_fn42741,const V &_self_fn42741) mutable ->V{
return ([&]()->V{V _callee44830=this->_v_42651_lattice.get();return j::call(_callee44830,j::Args{_v_42739_nu.get(),_v_42740_nv.get(),V(true),j::function([=](const j::Args &_args_fn42742,const V &_receiver_fn42742,const V &_self_fn42742) mutable ->V{
V _v_42743_u;
V _v_42744_v;
V _v_42745_p;
V _v_42746_n;
V _v_42747_k;
_v_42743_u=_args_fn42742[0];
_v_42744_v=_args_fn42742[1];
_v_42745_p=_args_fn42742[2];
_v_42746_n=_args_fn42742[3];
_v_42747_k=_args_fn42742[4];
{
V _v_42748_th;
V _v_42749_ph;
V _v_42750_c;
_v_42748_th=([&]()->V{V _lhs44778=([&]()->V{V _lhs44780=_v_42743_u;V _rhs44781=V(0.5);return V(j::number(_lhs44780)-j::number(_rhs44781));})();V _rhs44779=this->_v_42444_TAU.get();return V(j::number(_lhs44778)*j::number(_rhs44779));})();
_v_42749_ph=([&]()->V{V _lhs44782=([&]()->V{V _lhs44784=_v_42744_v;V _rhs44785=V(0.5);return V(j::number(_lhs44784)-j::number(_rhs44785));})();V _rhs44783=j::get(j::builtin("Math"),this->_literals[18]);return V(j::number(_lhs44782)*j::number(_rhs44783));})();
_v_42750_c=([&]()->V{V _number44786=_v_42749_ph;return V(std::cos(j::number(_number44786)));})();
(void)(([&]()->V{V _base44788=_v_42746_n;V _key44789=_v_42747_k;V _assign44787=([&]()->V{V _lhs44790=_v_42750_c;V _rhs44791=([&]()->V{V _number44792=_v_42748_th;return V(std::sin(j::number(_number44792)));})();return V(j::number(_lhs44790)*j::number(_rhs44791));})();return j::put(_base44788,_key44789,_assign44787);})());
(void)(([&]()->V{V _base44794=_v_42746_n;V _key44795=([&]()->V{V _lhs44796=_v_42747_k;V _rhs44797=V(1.0);return j::binary("+",_lhs44796,_rhs44797);})();V _assign44793=([&]()->V{V _number44798=_v_42749_ph;return V(std::sin(j::number(_number44798)));})();return j::put(_base44794,_key44795,_assign44793);})());
(void)(([&]()->V{V _base44800=_v_42746_n;V _key44801=([&]()->V{V _lhs44802=_v_42747_k;V _rhs44803=V(2.0);return j::binary("+",_lhs44802,_rhs44803);})();V _assign44799=([&]()->V{V _lhs44804=j::unary("-",_v_42750_c);V _rhs44805=([&]()->V{V _number44806=_v_42748_th;return V(std::cos(j::number(_number44806)));})();return V(j::number(_lhs44804)*j::number(_rhs44805));})();return j::put(_base44800,_key44801,_assign44799);})());
(void)(([&]()->V{V _base44808=_v_42745_p;V _key44809=_v_42747_k;V _assign44807=([&]()->V{V _lhs44810=_v_42737_r.get();V _rhs44811=j::get(_v_42746_n,_v_42747_k);return V(j::number(_lhs44810)*j::number(_rhs44811));})();return j::put(_base44808,_key44809,_assign44807);})());
(void)(([&]()->V{V _base44813=_v_42745_p;V _key44814=([&]()->V{V _lhs44815=_v_42747_k;V _rhs44816=V(1.0);return j::binary("+",_lhs44815,_rhs44816);})();V _assign44812=([&]()->V{V _lhs44817=_v_42737_r.get();V _rhs44818=j::get(_v_42746_n,([&]()->V{V _lhs44819=_v_42747_k;V _rhs44820=V(1.0);return j::binary("+",_lhs44819,_rhs44820);})());return V(j::number(_lhs44817)*j::number(_rhs44818));})();return j::put(_base44813,_key44814,_assign44812);})());
(void)(([&]()->V{V _base44822=_v_42745_p;V _key44823=([&]()->V{V _lhs44824=_v_42747_k;V _rhs44825=V(2.0);return j::binary("+",_lhs44824,_rhs44825);})();V _assign44821=([&]()->V{V _lhs44826=_v_42737_r.get();V _rhs44827=j::get(_v_42746_n,([&]()->V{V _lhs44828=_v_42747_k;V _rhs44829=V(2.0);return j::binary("+",_lhs44828,_rhs44829);})());return V(j::number(_lhs44826)*j::number(_rhs44827));})();return j::put(_base44822,_key44823,_assign44821);})());

}

return V{};
},5)});})();
return V{};
},0)});})();

}

return V{};
},2);
this->_v_42751_ringMesh.get()=j::function([=](const j::Args &_args_fn42752,const V &_receiver_fn42752,const V &_self_fn42752) mutable ->V{
j::Cell _v_42753_R;
j::Cell _v_42754_r;
V _v_42755_unit;
_v_42753_R.get()=_args_fn42752[0];
_v_42754_r.get()=_args_fn42752[1];
_v_42755_unit=_args_fn42752[2];
{
j::Cell _v_42756_nu;
j::Cell _v_42757_nv;
_v_42756_nu.get()=([&]()->V{V _callee44836=this->_v_42647_around.get();return j::call(_callee44836,j::Args{([&]()->V{V _lhs44832=([&]()->V{V _lhs44834=_v_42753_R.get();V _rhs44835=_v_42754_r.get();return j::binary("+",_lhs44834,_rhs44835);})();V _rhs44833=_v_42755_unit;return V(j::number(_lhs44832)*j::number(_rhs44833));})()});})();
_v_42757_nv.get()=([&]()->V{V _callee44839=this->_v_42647_around.get();return j::call(_callee44839,j::Args{([&]()->V{V _lhs44837=_v_42754_r.get();V _rhs44838=_v_42755_unit;return V(j::number(_lhs44837)*j::number(_rhs44838));})(),V(8.0)});})();
return ([&]()->V{V _callee44894=this->_v_42642_memo.get();return j::call(_callee44894,j::Args{([&]()->V{std::u16string _text44840;_text44840+=u"torus:";_text44840+=j::string(_v_42753_R.get());_text44840+=u":";_text44840+=j::string(_v_42754_r.get());_text44840+=u":";_text44840+=j::string(_v_42756_nu.get());_text44840+=u":";_text44840+=j::string(_v_42757_nv.get());_text44840+=u"";return V(std::move(_text44840));})(),j::function([=](const j::Args &_args_fn42758,const V &_receiver_fn42758,const V &_self_fn42758) mutable ->V{
return ([&]()->V{V _callee44893=this->_v_42651_lattice.get();return j::call(_callee44893,j::Args{_v_42756_nu.get(),_v_42757_nv.get(),V(true),j::function([=](const j::Args &_args_fn42759,const V &_receiver_fn42759,const V &_self_fn42759) mutable ->V{
V _v_42760_u;
V _v_42761_v;
V _v_42762_p;
V _v_42763_n;
V _v_42764_k;
_v_42760_u=_args_fn42759[0];
_v_42761_v=_args_fn42759[1];
_v_42762_p=_args_fn42759[2];
_v_42763_n=_args_fn42759[3];
_v_42764_k=_args_fn42759[4];
{
V _v_42765_a;
V _v_42766_b;
V _v_42767_ca;
V _v_42768_sa;
V _v_42769_cb;
V _v_42770_sb;
_v_42765_a=([&]()->V{V _lhs44841=_v_42760_u;V _rhs44842=this->_v_42444_TAU.get();return V(j::number(_lhs44841)*j::number(_rhs44842));})();
_v_42766_b=([&]()->V{V _lhs44843=_v_42761_v;V _rhs44844=this->_v_42444_TAU.get();return V(j::number(_lhs44843)*j::number(_rhs44844));})();
_v_42767_ca=([&]()->V{V _number44845=_v_42765_a;return V(std::cos(j::number(_number44845)));})();
_v_42768_sa=([&]()->V{V _number44846=_v_42765_a;return V(std::sin(j::number(_number44846)));})();
_v_42769_cb=([&]()->V{V _number44847=_v_42766_b;return V(std::cos(j::number(_number44847)));})();
_v_42770_sb=([&]()->V{V _number44848=_v_42766_b;return V(std::sin(j::number(_number44848)));})();
(void)(([&]()->V{V _base44850=_v_42763_n;V _key44851=_v_42764_k;V _assign44849=([&]()->V{V _lhs44852=_v_42769_cb;V _rhs44853=_v_42767_ca;return V(j::number(_lhs44852)*j::number(_rhs44853));})();return j::put(_base44850,_key44851,_assign44849);})());
(void)(([&]()->V{V _base44855=_v_42763_n;V _key44856=([&]()->V{V _lhs44857=_v_42764_k;V _rhs44858=V(1.0);return j::binary("+",_lhs44857,_rhs44858);})();V _assign44854=([&]()->V{V _lhs44859=_v_42769_cb;V _rhs44860=_v_42768_sa;return V(j::number(_lhs44859)*j::number(_rhs44860));})();return j::put(_base44855,_key44856,_assign44854);})());
(void)(([&]()->V{V _base44862=_v_42763_n;V _key44863=([&]()->V{V _lhs44864=_v_42764_k;V _rhs44865=V(2.0);return j::binary("+",_lhs44864,_rhs44865);})();V _assign44861=_v_42770_sb;return j::put(_base44862,_key44863,_assign44861);})());
(void)(([&]()->V{V _base44867=_v_42762_p;V _key44868=_v_42764_k;V _assign44866=([&]()->V{V _lhs44869=([&]()->V{V _lhs44871=_v_42753_R.get();V _rhs44872=([&]()->V{V _lhs44873=_v_42754_r.get();V _rhs44874=_v_42769_cb;return V(j::number(_lhs44873)*j::number(_rhs44874));})();return j::binary("+",_lhs44871,_rhs44872);})();V _rhs44870=_v_42767_ca;return V(j::number(_lhs44869)*j::number(_rhs44870));})();return j::put(_base44867,_key44868,_assign44866);})());
(void)(([&]()->V{V _base44876=_v_42762_p;V _key44877=([&]()->V{V _lhs44878=_v_42764_k;V _rhs44879=V(1.0);return j::binary("+",_lhs44878,_rhs44879);})();V _assign44875=([&]()->V{V _lhs44880=([&]()->V{V _lhs44882=_v_42753_R.get();V _rhs44883=([&]()->V{V _lhs44884=_v_42754_r.get();V _rhs44885=_v_42769_cb;return V(j::number(_lhs44884)*j::number(_rhs44885));})();return j::binary("+",_lhs44882,_rhs44883);})();V _rhs44881=_v_42768_sa;return V(j::number(_lhs44880)*j::number(_rhs44881));})();return j::put(_base44876,_key44877,_assign44875);})());
(void)(([&]()->V{V _base44887=_v_42762_p;V _key44888=([&]()->V{V _lhs44889=_v_42764_k;V _rhs44890=V(2.0);return j::binary("+",_lhs44889,_rhs44890);})();V _assign44886=([&]()->V{V _lhs44891=_v_42754_r.get();V _rhs44892=_v_42770_sb;return V(j::number(_lhs44891)*j::number(_rhs44892));})();return j::put(_base44887,_key44888,_assign44886);})());

}

return V{};
},5)});})();
return V{};
},0)});})();

}

return V{};
},3);
this->_v_42771_tubeMesh.get()=j::function([=](const j::Args &_args_fn42772,const V &_receiver_fn42772,const V &_self_fn42772) mutable ->V{
j::Cell _v_42773_r;
j::Cell _v_42774_h;
V _v_42775_unit;
j::Cell _v_42776_cone;
_v_42773_r.get()=_args_fn42772[0];
_v_42774_h.get()=_args_fn42772[1];
_v_42775_unit=_args_fn42772[2];
_v_42776_cone.get()=_args_fn42772[3];
{
j::Cell _v_42777_n;
_v_42777_n.get()=([&]()->V{V _callee44897=this->_v_42647_around.get();return j::call(_callee44897,j::Args{([&]()->V{V _lhs44895=_v_42773_r.get();V _rhs44896=_v_42775_unit;return V(j::number(_lhs44895)*j::number(_rhs44896));})()});})();
return ([&]()->V{V _callee45046=this->_v_42642_memo.get();return j::call(_callee45046,j::Args{([&]()->V{std::u16string _text44898;_text44898+=u"";_text44898+=j::string((j::truth(_v_42776_cone.get())?this->_literals[66]:this->_literals[67]));_text44898+=u":";_text44898+=j::string(_v_42773_r.get());_text44898+=u":";_text44898+=j::string(_v_42774_h.get());_text44898+=u":";_text44898+=j::string(_v_42777_n.get());_text44898+=u"";return V(std::move(_text44898));})(),j::function([=](const j::Args &_args_fn42778,const V &_receiver_fn42778,const V &_self_fn42778) mutable ->V{
{
j::Cell _v_42779_slant;
V _v_42780_side;
V _v_42791_m;
V _v_42792_rims;
V _v_42793_edges;
V _v_42794_sides;
_v_42779_slant.get()=([&]()->V{V _number44899=_v_42774_h.get();V _number44900=_v_42773_r.get();return V(std::hypot(j::number(_number44899),j::number(_number44900)));})();
_v_42780_side=([&]()->V{V _callee44957=this->_v_42651_lattice.get();return j::call(_callee44957,j::Args{_v_42777_n.get(),V(1.0),V(true),j::function([=](const j::Args &_args_fn42781,const V &_receiver_fn42781,const V &_self_fn42781) mutable ->V{
V _v_42782_u;
V _v_42783_v;
V _v_42784_p;
V _v_42785_nn;
V _v_42786_k;
_v_42782_u=_args_fn42781[0];
_v_42783_v=_args_fn42781[1];
_v_42784_p=_args_fn42781[2];
_v_42785_nn=_args_fn42781[3];
_v_42786_k=_args_fn42781[4];
{
V _v_42787_a;
V _v_42788_x;
V _v_42789_z;
V _v_42790_w;
_v_42787_a=([&]()->V{V _lhs44901=([&]()->V{V _lhs44903=_v_42782_u;V _rhs44904=V(0.5);return V(j::number(_lhs44903)-j::number(_rhs44904));})();V _rhs44902=this->_v_42444_TAU.get();return V(j::number(_lhs44901)*j::number(_rhs44902));})();
_v_42788_x=([&]()->V{V _number44905=_v_42787_a;return V(std::sin(j::number(_number44905)));})();
_v_42789_z=j::unary("-",([&]()->V{V _number44906=_v_42787_a;return V(std::cos(j::number(_number44906)));})());
_v_42790_w=(j::truth(_v_42776_cone.get())?([&]()->V{V _lhs44907=V(1.0);V _rhs44908=_v_42783_v;return V(j::number(_lhs44907)-j::number(_rhs44908));})():V(1.0));
(void)(([&]()->V{V _base44910=_v_42784_p;V _key44911=_v_42786_k;V _assign44909=([&]()->V{V _lhs44912=([&]()->V{V _lhs44914=_v_42773_r.get();V _rhs44915=_v_42790_w;return V(j::number(_lhs44914)*j::number(_rhs44915));})();V _rhs44913=_v_42788_x;return V(j::number(_lhs44912)*j::number(_rhs44913));})();return j::put(_base44910,_key44911,_assign44909);})());
(void)(([&]()->V{V _base44917=_v_42784_p;V _key44918=([&]()->V{V _lhs44919=_v_42786_k;V _rhs44920=V(1.0);return j::binary("+",_lhs44919,_rhs44920);})();V _assign44916=([&]()->V{V _lhs44921=([&]()->V{V _lhs44923=_v_42783_v;V _rhs44924=V(0.5);return V(j::number(_lhs44923)-j::number(_rhs44924));})();V _rhs44922=_v_42774_h.get();return V(j::number(_lhs44921)*j::number(_rhs44922));})();return j::put(_base44917,_key44918,_assign44916);})());
(void)(([&]()->V{V _base44926=_v_42784_p;V _key44927=([&]()->V{V _lhs44928=_v_42786_k;V _rhs44929=V(2.0);return j::binary("+",_lhs44928,_rhs44929);})();V _assign44925=([&]()->V{V _lhs44930=([&]()->V{V _lhs44932=_v_42773_r.get();V _rhs44933=_v_42790_w;return V(j::number(_lhs44932)*j::number(_rhs44933));})();V _rhs44931=_v_42789_z;return V(j::number(_lhs44930)*j::number(_rhs44931));})();return j::put(_base44926,_key44927,_assign44925);})());
(void)(([&]()->V{V _base44935=_v_42785_nn;V _key44936=_v_42786_k;V _assign44934=(j::truth(_v_42776_cone.get())?([&]()->V{V _lhs44937=([&]()->V{V _lhs44939=_v_42774_h.get();V _rhs44940=_v_42788_x;return V(j::number(_lhs44939)*j::number(_rhs44940));})();V _rhs44938=_v_42779_slant.get();return V(j::number(_lhs44937)/j::number(_rhs44938));})():_v_42788_x);return j::put(_base44935,_key44936,_assign44934);})());
(void)(([&]()->V{V _base44942=_v_42785_nn;V _key44943=([&]()->V{V _lhs44944=_v_42786_k;V _rhs44945=V(1.0);return j::binary("+",_lhs44944,_rhs44945);})();V _assign44941=(j::truth(_v_42776_cone.get())?([&]()->V{V _lhs44946=_v_42773_r.get();V _rhs44947=_v_42779_slant.get();return V(j::number(_lhs44946)/j::number(_rhs44947));})():V(0.0));return j::put(_base44942,_key44943,_assign44941);})());
(void)(([&]()->V{V _base44949=_v_42785_nn;V _key44950=([&]()->V{V _lhs44951=_v_42786_k;V _rhs44952=V(2.0);return j::binary("+",_lhs44951,_rhs44952);})();V _assign44948=(j::truth(_v_42776_cone.get())?([&]()->V{V _lhs44953=([&]()->V{V _lhs44955=_v_42774_h.get();V _rhs44956=_v_42789_z;return V(j::number(_lhs44955)*j::number(_rhs44956));})();V _rhs44954=_v_42779_slant.get();return V(j::number(_lhs44953)/j::number(_rhs44954));})():_v_42789_z);return j::put(_base44949,_key44950,_assign44948);})());

}

return V{};
},5)});})();
_v_42791_m=([&]()->V{V _callee44969=this->_v_42672_join.get();return j::call(_callee44969,j::Args{(j::truth(_v_42776_cone.get())?([&]()->V{j::Args _array44958;_array44958.push_back(_v_42780_side);_array44958.push_back(([&]()->V{V _callee44961=this->_v_42720_disc.get();return j::call(_callee44961,j::Args{_v_42773_r.get(),([&]()->V{V _lhs44959=j::unary("-",_v_42774_h.get());V _rhs44960=V(2.0);return V(j::number(_lhs44959)/j::number(_rhs44960));})(),j::unary("-",V(1.0)),_v_42777_n.get()});})());return j::array(std::move(_array44958));})():([&]()->V{j::Args _array44962;_array44962.push_back(_v_42780_side);_array44962.push_back(([&]()->V{V _callee44965=this->_v_42720_disc.get();return j::call(_callee44965,j::Args{_v_42773_r.get(),([&]()->V{V _lhs44963=j::unary("-",_v_42774_h.get());V _rhs44964=V(2.0);return V(j::number(_lhs44963)/j::number(_rhs44964));})(),j::unary("-",V(1.0)),_v_42777_n.get()});})());_array44962.push_back(([&]()->V{V _callee44968=this->_v_42720_disc.get();return j::call(_callee44968,j::Args{_v_42773_r.get(),([&]()->V{V _lhs44966=_v_42774_h.get();V _rhs44967=V(2.0);return V(j::number(_lhs44966)/j::number(_rhs44967));})(),V(1.0),_v_42777_n.get()});})());return j::array(std::move(_array44962));})()),V(true)});})();
_v_42792_rims=(j::truth(_v_42776_cone.get())?V(1.0):V(2.0));
_v_42793_edges=([&]()->V{V _callee44974=j::builtin("Uint32Array");return j::construct(_callee44974,j::Args{([&]()->V{V _lhs44970=([&]()->V{V _lhs44972=_v_42792_rims;V _rhs44973=_v_42777_n.get();return V(j::number(_lhs44972)*j::number(_rhs44973));})();V _rhs44971=V(2.0);return V(j::number(_lhs44970)*j::number(_rhs44971));})()});})();
_v_42794_sides=([&]()->V{V _callee44979=j::builtin("Float32Array");return j::construct(_callee44979,j::Args{([&]()->V{V _lhs44975=([&]()->V{V _lhs44977=_v_42792_rims;V _rhs44978=_v_42777_n.get();return V(j::number(_lhs44977)*j::number(_rhs44978));})();V _rhs44976=V(6.0);return V(j::number(_lhs44975)*j::number(_rhs44976));})()});})();
{V _v_42795_e;
_v_42795_e=V(0.0);
for(;j::truth(([&]()->V{V _lhs44980=_v_42795_e;V _rhs44981=_v_42792_rims;return j::binary("<",_lhs44980,_rhs44981);})());(void)(j::increment(_v_42795_e,1,false))){
V _v_42796_first;
V _v_42797_up;
_v_42796_first=([&]()->V{V _lhs44982=([&]()->V{V _lhs44984=([&]()->V{V _lhs44986=([&]()->V{V _lhs44988=_v_42777_n.get();V _rhs44989=V(1.0);return j::binary("+",_lhs44988,_rhs44989);})();V _rhs44987=V(2.0);return V(j::number(_lhs44986)*j::number(_rhs44987));})();V _rhs44985=([&]()->V{V _lhs44990=_v_42795_e;V _rhs44991=([&]()->V{V _lhs44992=_v_42777_n.get();V _rhs44993=V(2.0);return j::binary("+",_lhs44992,_rhs44993);})();return V(j::number(_lhs44990)*j::number(_rhs44991));})();return j::binary("+",_lhs44984,_rhs44985);})();V _rhs44983=V(1.0);return j::binary("+",_lhs44982,_rhs44983);})();
_v_42797_up=(j::truth(_v_42795_e)?V(1.0):j::unary("-",V(1.0)));
{V _v_42798_i;
_v_42798_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs44994=_v_42798_i;V _rhs44995=_v_42777_n.get();return j::binary("<",_lhs44994,_rhs44995);})());(void)(j::increment(_v_42798_i,1,false))){
V _v_42799_k;
V _v_42800_a;
V _v_42801_x;
V _v_42802_z;
_v_42799_k=([&]()->V{V _lhs44996=([&]()->V{V _lhs44998=_v_42795_e;V _rhs44999=_v_42777_n.get();return V(j::number(_lhs44998)*j::number(_rhs44999));})();V _rhs44997=_v_42798_i;return j::binary("+",_lhs44996,_rhs44997);})();
_v_42800_a=([&]()->V{V _lhs45000=([&]()->V{V _lhs45002=([&]()->V{V _lhs45004=([&]()->V{V _lhs45006=_v_42798_i;V _rhs45007=V(0.5);return j::binary("+",_lhs45006,_rhs45007);})();V _rhs45005=_v_42777_n.get();return V(j::number(_lhs45004)/j::number(_rhs45005));})();V _rhs45003=V(0.5);return V(j::number(_lhs45002)-j::number(_rhs45003));})();V _rhs45001=this->_v_42444_TAU.get();return V(j::number(_lhs45000)*j::number(_rhs45001));})();
_v_42801_x=([&]()->V{V _number45008=_v_42800_a;return V(std::sin(j::number(_number45008)));})();
_v_42802_z=j::unary("-",([&]()->V{V _number45009=_v_42800_a;return V(std::cos(j::number(_number45009)));})());
(void)(([&]()->V{V _base45011=_v_42793_edges;V _key45012=([&]()->V{V _lhs45013=_v_42799_k;V _rhs45014=V(2.0);return V(j::number(_lhs45013)*j::number(_rhs45014));})();V _assign45010=([&]()->V{V _lhs45015=_v_42796_first;V _rhs45016=_v_42798_i;return j::binary("+",_lhs45015,_rhs45016);})();return j::put(_base45011,_key45012,_assign45010);})());
(void)(([&]()->V{V _base45018=_v_42793_edges;V _key45019=([&]()->V{V _lhs45020=([&]()->V{V _lhs45022=_v_42799_k;V _rhs45023=V(2.0);return V(j::number(_lhs45022)*j::number(_rhs45023));})();V _rhs45021=V(1.0);return j::binary("+",_lhs45020,_rhs45021);})();V _assign45017=([&]()->V{V _lhs45024=([&]()->V{V _lhs45026=_v_42796_first;V _rhs45027=_v_42798_i;return j::binary("+",_lhs45026,_rhs45027);})();V _rhs45025=V(1.0);return j::binary("+",_lhs45024,_rhs45025);})();return j::put(_base45018,_key45019,_assign45017);})());
(void)(([&]()->V{V _receiver45041=_v_42794_sides;V _method45042=this->_literals[37];V _method=j::get(_receiver45041,_method45042);j::Args _params45043=j::Args{([&]()->V{j::Args _array45028;_array45028.push_back(V(0.0));_array45028.push_back(_v_42797_up);_array45028.push_back(V(0.0));_array45028.push_back((j::truth(_v_42776_cone.get())?([&]()->V{V _lhs45029=([&]()->V{V _lhs45031=_v_42774_h.get();V _rhs45032=_v_42801_x;return V(j::number(_lhs45031)*j::number(_rhs45032));})();V _rhs45030=_v_42779_slant.get();return V(j::number(_lhs45029)/j::number(_rhs45030));})():_v_42801_x));_array45028.push_back((j::truth(_v_42776_cone.get())?([&]()->V{V _lhs45033=_v_42773_r.get();V _rhs45034=_v_42779_slant.get();return V(j::number(_lhs45033)/j::number(_rhs45034));})():V(0.0)));_array45028.push_back((j::truth(_v_42776_cone.get())?([&]()->V{V _lhs45035=([&]()->V{V _lhs45037=_v_42774_h.get();V _rhs45038=_v_42802_z;return V(j::number(_lhs45037)*j::number(_rhs45038));})();V _rhs45036=_v_42779_slant.get();return V(j::number(_lhs45035)/j::number(_rhs45036));})():_v_42802_z));return j::array(std::move(_array45028));})(),([&]()->V{V _lhs45039=_v_42799_k;V _rhs45040=V(6.0);return V(j::number(_lhs45039)*j::number(_rhs45040));})()};return j::call(_method,_params45043,_receiver45041);})());

}
}

}
}
return ([&]()->V{V _obj45044=j::object();V _spread45045=_v_42791_m;for(const auto &_key:j::keys(_spread45045))j::put(_obj45044,_key,j::get(_spread45045,_key));j::put(_obj45044,this->_literals[27],_v_42793_edges);j::put(_obj45044,this->_literals[57],_v_42794_sides);return _obj45044;})();

}

return V{};
},0)});})();

}

return V{};
},4);
this->_v_42804_boxMesh.get()=j::function([=](const j::Args &_args_fn42805,const V &_receiver_fn42805,const V &_self_fn42805) mutable ->V{
j::Cell _v_42806_h;
_v_42806_h.get()=_args_fn42805[0];
{
return ([&]()->V{V _callee45110=this->_v_42642_memo.get();return j::call(_callee45110,j::Args{([&]()->V{std::u16string _text45047;_text45047+=u"cube:";_text45047+=j::string(_v_42806_h.get());_text45047+=u"";return V(std::move(_text45047));})(),j::function([=](const j::Args &_args_fn42807,const V &_receiver_fn42807,const V &_self_fn42807) mutable ->V{
{
V _v_42808_m;
_v_42808_m=([&]()->V{V _callee45083=this->_v_42672_join.get();return j::call(_callee45083,j::Args{([&]()->V{V _receiver45080=this->_v_42803_FACES.get();V _method45081=this->_literals[14];V _method=j::get(_receiver45080,_method45081);j::Args _params45082=j::Args{j::function([=](const j::Args &_args_fn42809,const V &_receiver_fn42809,const V &_self_fn42809) mutable ->V{
j::Cell _v_42810_n;
j::Cell _v_42811_a;
j::Cell _v_42812_b;
V _pattern45048=_args_fn42809[0];
_v_42810_n.get()=j::get(_pattern45048,V(0));
_v_42811_a.get()=j::get(_pattern45048,V(1));
_v_42812_b.get()=j::get(_pattern45048,V(2));
return ([&]()->V{V _callee45079=this->_v_42651_lattice.get();return j::call(_callee45079,j::Args{V(1.0),V(1.0),V(true),j::function([=](const j::Args &_args_fn42813,const V &_receiver_fn42813,const V &_self_fn42813) mutable ->V{
V _v_42814_u;
V _v_42815_v;
V _v_42816_p;
V _v_42817_nn;
V _v_42818_k;
_v_42814_u=_args_fn42813[0];
_v_42815_v=_args_fn42813[1];
_v_42816_p=_args_fn42813[2];
_v_42817_nn=_args_fn42813[3];
_v_42818_k=_args_fn42813[4];
{
{V _v_42819_j;
_v_42819_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs45049=_v_42819_j;V _rhs45050=V(3.0);return j::binary("<",_lhs45049,_rhs45050);})());(void)(j::increment(_v_42819_j,1,false))){
(void)(([&]()->V{V _base45052=_v_42816_p;V _key45053=([&]()->V{V _lhs45054=_v_42818_k;V _rhs45055=_v_42819_j;return j::binary("+",_lhs45054,_rhs45055);})();V _assign45051=([&]()->V{V _lhs45056=_v_42806_h.get();V _rhs45057=([&]()->V{V _lhs45058=([&]()->V{V _lhs45060=j::get(_v_42810_n.get(),_v_42819_j);V _rhs45061=([&]()->V{V _lhs45062=([&]()->V{V _lhs45064=([&]()->V{V _lhs45066=V(2.0);V _rhs45067=_v_42814_u;return V(j::number(_lhs45066)*j::number(_rhs45067));})();V _rhs45065=V(1.0);return V(j::number(_lhs45064)-j::number(_rhs45065));})();V _rhs45063=j::get(_v_42811_a.get(),_v_42819_j);return V(j::number(_lhs45062)*j::number(_rhs45063));})();return j::binary("+",_lhs45060,_rhs45061);})();V _rhs45059=([&]()->V{V _lhs45068=([&]()->V{V _lhs45070=([&]()->V{V _lhs45072=V(2.0);V _rhs45073=_v_42815_v;return V(j::number(_lhs45072)*j::number(_rhs45073));})();V _rhs45071=V(1.0);return V(j::number(_lhs45070)-j::number(_rhs45071));})();V _rhs45069=j::get(_v_42812_b.get(),_v_42819_j);return V(j::number(_lhs45068)*j::number(_rhs45069));})();return j::binary("+",_lhs45058,_rhs45059);})();return V(j::number(_lhs45056)*j::number(_rhs45057));})();return j::put(_base45052,_key45053,_assign45051);})());
(void)(([&]()->V{V _base45075=_v_42817_nn;V _key45076=([&]()->V{V _lhs45077=_v_42818_k;V _rhs45078=_v_42819_j;return j::binary("+",_lhs45077,_rhs45078);})();V _assign45074=j::get(_v_42810_n.get(),_v_42819_j);return j::put(_base45075,_key45076,_assign45074);})());

}
}

}

return V{};
},5)});})();
return V{};
},1)};return j::call(_method,_params45082,_receiver45080);})(),V(true)});})();
return ([&]()->V{V _obj45084=j::object();V _spread45085=_v_42808_m;for(const auto &_key:j::keys(_spread45085))j::put(_obj45084,_key,j::get(_spread45085,_key));V _spread45086=([&]()->V{V _callee45109=this->_v_42687_outline.get();return j::call(_callee45109,j::Args{j::get(_v_42808_m,this->_literals[52]),([&]()->V{V _receiver45102=this->_v_42803_FACES.get();V _method45103=this->_literals[14];V _method=j::get(_receiver45102,_method45103);j::Args _params45104=j::Args{j::function([=](const j::Args &_args_fn42820,const V &_receiver_fn42820,const V &_self_fn42820) mutable ->V{
V _v_42821__;
V _v_42822_f;
_v_42821__=_args_fn42820[0];
_v_42822_f=_args_fn42820[1];
return ([&]()->V{j::Args _array45087;_array45087.push_back(([&]()->V{V _lhs45088=_v_42822_f;V _rhs45089=V(4.0);return V(j::number(_lhs45088)*j::number(_rhs45089));})());_array45087.push_back(([&]()->V{V _lhs45090=([&]()->V{V _lhs45092=_v_42822_f;V _rhs45093=V(4.0);return V(j::number(_lhs45092)*j::number(_rhs45093));})();V _rhs45091=V(1.0);return j::binary("+",_lhs45090,_rhs45091);})());_array45087.push_back(([&]()->V{V _lhs45094=([&]()->V{V _lhs45096=_v_42822_f;V _rhs45097=V(4.0);return V(j::number(_lhs45096)*j::number(_rhs45097));})();V _rhs45095=V(3.0);return j::binary("+",_lhs45094,_rhs45095);})());_array45087.push_back(([&]()->V{V _lhs45098=([&]()->V{V _lhs45100=_v_42822_f;V _rhs45101=V(4.0);return V(j::number(_lhs45100)*j::number(_rhs45101));})();V _rhs45099=V(2.0);return j::binary("+",_lhs45098,_rhs45099);})());return j::array(std::move(_array45087));})();
return V{};
},2)};return j::call(_method,_params45104,_receiver45102);})(),([&]()->V{V _receiver45106=this->_v_42803_FACES.get();V _method45107=this->_literals[14];V _method=j::get(_receiver45106,_method45107);j::Args _params45108=j::Args{j::function([=](const j::Args &_args_fn42823,const V &_receiver_fn42823,const V &_self_fn42823) mutable ->V{
V _v_42824_n;
V _pattern45105=_args_fn42823[0];
_v_42824_n=j::get(_pattern45105,V(0));
return _v_42824_n;
return V{};
},1)};return j::call(_method,_params45108,_receiver45106);})(),V(false)});})();for(const auto &_key:j::keys(_spread45086))j::put(_obj45084,_key,j::get(_spread45086,_key));return _obj45084;})();

}

return V{};
},0)});})();

}

return V{};
},1);
this->_v_42825_floorMesh.get()=j::function([=](const j::Args &_args_fn42826,const V &_receiver_fn42826,const V &_self_fn42826) mutable ->V{
j::Cell _v_42827_w;
j::Cell _v_42828_d;
_v_42827_w.get()=_args_fn42826[0];
_v_42828_d.get()=_args_fn42826[1];
{
return ([&]()->V{V _callee45142=this->_v_42642_memo.get();return j::call(_callee45142,j::Args{([&]()->V{std::u16string _text45111;_text45111+=u"plane:";_text45111+=j::string(_v_42827_w.get());_text45111+=u":";_text45111+=j::string(_v_42828_d.get());_text45111+=u"";return V(std::move(_text45111));})(),j::function([=](const j::Args &_args_fn42829,const V &_receiver_fn42829,const V &_self_fn42829) mutable ->V{
{
V _v_42830_m;
_v_42830_m=([&]()->V{V _callee45133=this->_v_42651_lattice.get();return j::call(_callee45133,j::Args{V(1.0),V(1.0),V(false),j::function([=](const j::Args &_args_fn42831,const V &_receiver_fn42831,const V &_self_fn42831) mutable ->V{
V _v_42832_u;
V _v_42833_v;
V _v_42834_p;
V _v_42835_n;
V _v_42836_k;
_v_42832_u=_args_fn42831[0];
_v_42833_v=_args_fn42831[1];
_v_42834_p=_args_fn42831[2];
_v_42835_n=_args_fn42831[3];
_v_42836_k=_args_fn42831[4];
{
(void)(([&]()->V{V _base45113=_v_42834_p;V _key45114=_v_42836_k;V _assign45112=([&]()->V{V _lhs45115=([&]()->V{V _lhs45117=_v_42832_u;V _rhs45118=V(0.5);return V(j::number(_lhs45117)-j::number(_rhs45118));})();V _rhs45116=_v_42827_w.get();return V(j::number(_lhs45115)*j::number(_rhs45116));})();return j::put(_base45113,_key45114,_assign45112);})());
(void)(([&]()->V{V _base45120=_v_42834_p;V _key45121=([&]()->V{V _lhs45122=_v_42836_k;V _rhs45123=V(2.0);return j::binary("+",_lhs45122,_rhs45123);})();V _assign45119=([&]()->V{V _lhs45124=([&]()->V{V _lhs45126=_v_42833_v;V _rhs45127=V(0.5);return V(j::number(_lhs45126)-j::number(_rhs45127));})();V _rhs45125=_v_42828_d.get();return V(j::number(_lhs45124)*j::number(_rhs45125));})();return j::put(_base45120,_key45121,_assign45119);})());
(void)(([&]()->V{V _base45129=_v_42835_n;V _key45130=([&]()->V{V _lhs45131=_v_42836_k;V _rhs45132=V(1.0);return j::binary("+",_lhs45131,_rhs45132);})();V _assign45128=V(1.0);return j::put(_base45129,_key45130,_assign45128);})());

}

return V{};
},5)});})();
return ([&]()->V{V _obj45134=j::object();V _spread45135=_v_42830_m;for(const auto &_key:j::keys(_spread45135))j::put(_obj45134,_key,j::get(_spread45135,_key));V _spread45136=([&]()->V{V _callee45141=this->_v_42687_outline.get();return j::call(_callee45141,j::Args{j::get(_v_42830_m,this->_literals[52]),([&]()->V{j::Args _array45137;_array45137.push_back(([&]()->V{j::Args _array45138;_array45138.push_back(V(0.0));_array45138.push_back(V(1.0));_array45138.push_back(V(3.0));_array45138.push_back(V(2.0));return j::array(std::move(_array45138));})());return j::array(std::move(_array45137));})(),([&]()->V{j::Args _array45139;_array45139.push_back(([&]()->V{j::Args _array45140;_array45140.push_back(V(0.0));_array45140.push_back(V(1.0));_array45140.push_back(V(0.0));return j::array(std::move(_array45140));})());return j::array(std::move(_array45139));})(),V(true)});})();for(const auto &_key:j::keys(_spread45136))j::put(_obj45134,_key,j::get(_spread45136,_key));return _obj45134;})();

}

return V{};
},0)});})();

}

return V{};
},2);
this->_v_42837_flat.get()=j::function([=](const j::Args &_args_fn42838,const V &_receiver_fn42838,const V &_self_fn42838) mutable ->V{
V _v_42839_vs;
V _v_42840_faces;
_v_42839_vs=_args_fn42838[0];
_v_42840_faces=_args_fn42838[1];
{
V _v_42841_nv;
V _v_42842_nt;
V _v_42844_pos;
V _v_42845_nrm;
V _v_42846_uv;
V _v_42847_tri;
V _v_42848_polys;
V _v_42849_normals;
j::Cell _v_42850_v;
V _v_42851_t;
_v_42841_nv=V(0.0);
_v_42842_nt=V(0.0);
{for(const auto &_item45143:j::elements(_v_42840_faces)){V _v_42843_f;
_v_42843_f=_item45143;
(void)(((_v_42841_nv=j::binary("+",_v_42841_nv,j::get(_v_42843_f,this->_literals[9]))),(_v_42842_nt=j::binary("+",_v_42842_nt,([&]()->V{V _lhs45146=([&]()->V{V _lhs45148=j::get(_v_42843_f,this->_literals[9]);V _rhs45149=V(2.0);return V(j::number(_lhs45148)-j::number(_rhs45149));})();V _rhs45147=V(3.0);return V(j::number(_lhs45146)*j::number(_rhs45147));})()))));
}}
_v_42844_pos=([&]()->V{V _callee45152=j::builtin("Float32Array");return j::construct(_callee45152,j::Args{([&]()->V{V _lhs45150=_v_42841_nv;V _rhs45151=V(3.0);return V(j::number(_lhs45150)*j::number(_rhs45151));})()});})();
_v_42845_nrm=([&]()->V{V _callee45155=j::builtin("Float32Array");return j::construct(_callee45155,j::Args{([&]()->V{V _lhs45153=_v_42841_nv;V _rhs45154=V(3.0);return V(j::number(_lhs45153)*j::number(_rhs45154));})()});})();
_v_42846_uv=([&]()->V{V _callee45158=j::builtin("Float32Array");return j::construct(_callee45158,j::Args{([&]()->V{V _lhs45156=_v_42841_nv;V _rhs45157=V(2.0);return V(j::number(_lhs45156)*j::number(_rhs45157));})()});})();
_v_42847_tri=([&]()->V{V _callee45159=j::builtin("Uint32Array");return j::construct(_callee45159,j::Args{_v_42842_nt});})();
_v_42848_polys=([&]()->V{j::Args _array45160;return j::array(std::move(_array45160));})();
_v_42849_normals=([&]()->V{j::Args _array45161;return j::array(std::move(_array45161));})();
_v_42850_v.get()=V(0.0);
_v_42851_t=V(0.0);
{for(const auto &_item45162:j::elements(_v_42840_faces)){V _v_42852_f;
_v_42852_f=_item45162;
{
V _v_42853_nx;
V _v_42854_ny;
V _v_42855_nz;
V _v_42859_l;
_v_42853_nx=V(0.0);
_v_42854_ny=V(0.0);
_v_42855_nz=V(0.0);
{V _v_42856_i;
_v_42856_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45163=_v_42856_i;V _rhs45164=j::get(_v_42852_f,this->_literals[9]);return j::binary("<",_lhs45163,_rhs45164);})());(void)(j::increment(_v_42856_i,1,false))){
V _v_42857_a;
V _v_42858_b;
_v_42857_a=j::get(_v_42839_vs,j::get(_v_42852_f,_v_42856_i));
_v_42858_b=j::get(_v_42839_vs,j::get(_v_42852_f,([&]()->V{V _lhs45165=([&]()->V{V _lhs45167=_v_42856_i;V _rhs45168=V(1.0);return j::binary("+",_lhs45167,_rhs45168);})();V _rhs45166=j::get(_v_42852_f,this->_literals[9]);return V(std::fmod(j::number(_lhs45165),j::number(_rhs45166)));})()));
(void)((_v_42853_nx=j::binary("+",_v_42853_nx,([&]()->V{V _lhs45170=([&]()->V{V _lhs45172=j::get(_v_42857_a,V(1.0));V _rhs45173=j::get(_v_42858_b,V(1.0));return V(j::number(_lhs45172)-j::number(_rhs45173));})();V _rhs45171=([&]()->V{V _lhs45174=j::get(_v_42857_a,V(2.0));V _rhs45175=j::get(_v_42858_b,V(2.0));return j::binary("+",_lhs45174,_rhs45175);})();return V(j::number(_lhs45170)*j::number(_rhs45171));})())));
(void)((_v_42854_ny=j::binary("+",_v_42854_ny,([&]()->V{V _lhs45177=([&]()->V{V _lhs45179=j::get(_v_42857_a,V(2.0));V _rhs45180=j::get(_v_42858_b,V(2.0));return V(j::number(_lhs45179)-j::number(_rhs45180));})();V _rhs45178=([&]()->V{V _lhs45181=j::get(_v_42857_a,V(0.0));V _rhs45182=j::get(_v_42858_b,V(0.0));return j::binary("+",_lhs45181,_rhs45182);})();return V(j::number(_lhs45177)*j::number(_rhs45178));})())));
(void)((_v_42855_nz=j::binary("+",_v_42855_nz,([&]()->V{V _lhs45184=([&]()->V{V _lhs45186=j::get(_v_42857_a,V(0.0));V _rhs45187=j::get(_v_42858_b,V(0.0));return V(j::number(_lhs45186)-j::number(_rhs45187));})();V _rhs45185=([&]()->V{V _lhs45188=j::get(_v_42857_a,V(1.0));V _rhs45189=j::get(_v_42858_b,V(1.0));return j::binary("+",_lhs45188,_rhs45189);})();return V(j::number(_lhs45184)*j::number(_rhs45185));})())));

}
}
_v_42859_l=([&]()->V{V _logical45190=([&]()->V{V _number45191=_v_42853_nx;V _number45192=_v_42854_ny;V _number45193=_v_42855_nz;return V(std::hypot(j::number(_number45191),j::number(_number45192),j::number(_number45193)));})();return !j::truth(_logical45190)?V(1.0):_logical45190;})();
{V _v_42860_i;
_v_42860_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45194=_v_42860_i;V _rhs45195=j::get(_v_42852_f,this->_literals[9]);return j::binary("<",_lhs45194,_rhs45195);})());(void)(j::increment(_v_42860_i,1,false))){
(void)(([&]()->V{V _receiver45200=_v_42844_pos;V _method45201=this->_literals[37];V _method=j::get(_receiver45200,_method45201);j::Args _params45202=j::Args{j::get(_v_42839_vs,j::get(_v_42852_f,_v_42860_i)),([&]()->V{V _lhs45196=([&]()->V{V _lhs45198=_v_42850_v.get();V _rhs45199=_v_42860_i;return j::binary("+",_lhs45198,_rhs45199);})();V _rhs45197=V(3.0);return V(j::number(_lhs45196)*j::number(_rhs45197));})()};return j::call(_method,_params45202,_receiver45200);})());
(void)(([&]()->V{V _base45204=_v_42845_nrm;V _key45205=([&]()->V{V _lhs45206=([&]()->V{V _lhs45208=_v_42850_v.get();V _rhs45209=_v_42860_i;return j::binary("+",_lhs45208,_rhs45209);})();V _rhs45207=V(3.0);return V(j::number(_lhs45206)*j::number(_rhs45207));})();V _assign45203=([&]()->V{V _lhs45210=_v_42853_nx;V _rhs45211=_v_42859_l;return V(j::number(_lhs45210)/j::number(_rhs45211));})();return j::put(_base45204,_key45205,_assign45203);})());
(void)(([&]()->V{V _base45213=_v_42845_nrm;V _key45214=([&]()->V{V _lhs45215=([&]()->V{V _lhs45217=([&]()->V{V _lhs45219=_v_42850_v.get();V _rhs45220=_v_42860_i;return j::binary("+",_lhs45219,_rhs45220);})();V _rhs45218=V(3.0);return V(j::number(_lhs45217)*j::number(_rhs45218));})();V _rhs45216=V(1.0);return j::binary("+",_lhs45215,_rhs45216);})();V _assign45212=([&]()->V{V _lhs45221=_v_42854_ny;V _rhs45222=_v_42859_l;return V(j::number(_lhs45221)/j::number(_rhs45222));})();return j::put(_base45213,_key45214,_assign45212);})());
(void)(([&]()->V{V _base45224=_v_42845_nrm;V _key45225=([&]()->V{V _lhs45226=([&]()->V{V _lhs45228=([&]()->V{V _lhs45230=_v_42850_v.get();V _rhs45231=_v_42860_i;return j::binary("+",_lhs45230,_rhs45231);})();V _rhs45229=V(3.0);return V(j::number(_lhs45228)*j::number(_rhs45229));})();V _rhs45227=V(2.0);return j::binary("+",_lhs45226,_rhs45227);})();V _assign45223=([&]()->V{V _lhs45232=_v_42855_nz;V _rhs45233=_v_42859_l;return V(j::number(_lhs45232)/j::number(_rhs45233));})();return j::put(_base45224,_key45225,_assign45223);})());
if(j::truth(([&]()->V{V _lhs45234=_v_42860_i;V _rhs45235=V(2.0);return j::binary(">=",_lhs45234,_rhs45235);})())){(void)((([&]()->V{V _base45237=_v_42847_tri;V _key45238=j::increment(_v_42851_t,1,false);V _assign45236=_v_42850_v.get();return j::put(_base45237,_key45238,_assign45236);})(),([&]()->V{V _base45240=_v_42847_tri;V _key45241=j::increment(_v_42851_t,1,false);V _assign45239=([&]()->V{V _lhs45242=([&]()->V{V _lhs45244=_v_42850_v.get();V _rhs45245=_v_42860_i;return j::binary("+",_lhs45244,_rhs45245);})();V _rhs45243=V(1.0);return V(j::number(_lhs45242)-j::number(_rhs45243));})();return j::put(_base45240,_key45241,_assign45239);})(),([&]()->V{V _base45247=_v_42847_tri;V _key45248=j::increment(_v_42851_t,1,false);V _assign45246=([&]()->V{V _lhs45249=_v_42850_v.get();V _rhs45250=_v_42860_i;return j::binary("+",_lhs45249,_rhs45250);})();return j::put(_base45247,_key45248,_assign45246);})()));
}

}
}
(void)(([&]()->V{V _receiver45256=_v_42848_polys;V _method45257=this->_literals[68];V _method=j::get(_receiver45256,_method45257);j::Args _params45258=j::Args{([&]()->V{V _receiver45253=_v_42852_f;V _method45254=this->_literals[14];V _method=j::get(_receiver45253,_method45254);j::Args _params45255=j::Args{j::function([=](const j::Args &_args_fn42861,const V &_receiver_fn42861,const V &_self_fn42861) mutable ->V{
V _v_42862__;
V _v_42863_i;
_v_42862__=_args_fn42861[0];
_v_42863_i=_args_fn42861[1];
return ([&]()->V{V _lhs45251=_v_42850_v.get();V _rhs45252=_v_42863_i;return j::binary("+",_lhs45251,_rhs45252);})();
return V{};
},2)};return j::call(_method,_params45255,_receiver45253);})()};return j::call(_method,_params45258,_receiver45256);})());
(void)(([&]()->V{V _receiver45266=_v_42849_normals;V _method45267=this->_literals[68];V _method=j::get(_receiver45266,_method45267);j::Args _params45268=j::Args{([&]()->V{j::Args _array45259;_array45259.push_back(([&]()->V{V _lhs45260=_v_42853_nx;V _rhs45261=_v_42859_l;return V(j::number(_lhs45260)/j::number(_rhs45261));})());_array45259.push_back(([&]()->V{V _lhs45262=_v_42854_ny;V _rhs45263=_v_42859_l;return V(j::number(_lhs45262)/j::number(_rhs45263));})());_array45259.push_back(([&]()->V{V _lhs45264=_v_42855_nz;V _rhs45265=_v_42859_l;return V(j::number(_lhs45264)/j::number(_rhs45265));})());return j::array(std::move(_array45259));})()};return j::call(_method,_params45268,_receiver45266);})());
(void)((_v_42850_v.get()=j::binary("+",_v_42850_v.get(),j::get(_v_42852_f,this->_literals[9]))));

}
}}
return ([&]()->V{V _obj45270=j::object();j::put(_obj45270,this->_literals[52],_v_42844_pos);j::put(_obj45270,this->_literals[53],_v_42845_nrm);j::put(_obj45270,this->_literals[54],_v_42846_uv);j::put(_obj45270,this->_literals[55],_v_42847_tri);j::put(_obj45270,this->_literals[56],V(false));V _spread45271=([&]()->V{V _callee45272=this->_v_42687_outline.get();return j::call(_callee45272,j::Args{_v_42844_pos,_v_42848_polys,_v_42849_normals,V(true)});})();for(const auto &_key:j::keys(_spread45271))j::put(_obj45270,_key,j::get(_spread45271,_key));return _obj45270;})();

}

return V{};
},2);
this->_v_42865_cloud.get()=j::function([=](const j::Args &_args_fn42866,const V &_receiver_fn42866,const V &_self_fn42866) mutable ->V{
V _v_42867_name;
V _v_42868_n;
V _v_42869_seed;
_v_42867_name=_args_fn42866[0];
_v_42868_n=_args_fn42866[1];
_v_42869_seed=_args_fn42866[2];
{
j::Cell _v_42870_rand;
V _v_42871_out;
_v_42870_rand.get()=([&]()->V{V _callee45273=this->_v_42454_mulberry32.get();return j::call(_callee45273,j::Args{_v_42869_seed});})();
_v_42871_out=([&]()->V{j::Args _array45274;return j::array(std::move(_array45274));})();
if(j::truth(([&]()->V{V _lhs45275=_v_42867_name;V _rhs45276=this->_literals[69];return V(j::equal(_lhs45275,_rhs45276,true));})())){{V _v_42872_i;
_v_42872_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45277=_v_42872_i;V _rhs45278=_v_42868_n;return j::binary("<",_lhs45277,_rhs45278);})());(void)(j::increment(_v_42872_i,1,false))){
V _v_42873_bell;
V _v_42878_r;
V _v_42879_a;
_v_42873_bell=j::function([=](const j::Args &_args_fn42874,const V &_receiver_fn42874,const V &_self_fn42874) mutable ->V{
return ([&]()->V{V _lhs45279=([&]()->V{V _lhs45281=([&]()->V{V _lhs45283=([&]()->V{V _callee45285=_v_42870_rand.get();return j::call(_callee45285,j::Args{});})();V _rhs45284=([&]()->V{V _callee45286=_v_42870_rand.get();return j::call(_callee45286,j::Args{});})();return j::binary("+",_lhs45283,_rhs45284);})();V _rhs45282=([&]()->V{V _callee45287=_v_42870_rand.get();return j::call(_callee45287,j::Args{});})();return j::binary("+",_lhs45281,_rhs45282);})();V _rhs45280=V(1.5);return V(j::number(_lhs45279)-j::number(_rhs45280));})();
return V{};
},0);
if(j::truth(([&]()->V{V _lhs45288=([&]()->V{V _lhs45290=_v_42872_i;V _rhs45291=V(5.0);return V(std::fmod(j::number(_lhs45290),j::number(_rhs45291)));})();V _rhs45289=V(0.0);return V(j::equal(_lhs45288,_rhs45289,true));})())){
V _v_42875_r;
V _v_42876_a;
V _v_42877_y;
_v_42875_r=([&]()->V{V _lhs45292=V(0.5);V _rhs45293=([&]()->V{V _lhs45294=([&]()->V{V _number45297=([&]()->V{V _callee45298=_v_42873_bell;return j::call(_callee45298,j::Args{});})();return V(std::fabs(j::number(_number45297)));})();V _rhs45295=V(1.3);return V(std::pow(j::number(_lhs45294),j::number(_rhs45295)));})();return V(j::number(_lhs45292)*j::number(_rhs45293));})();
_v_42876_a=([&]()->V{V _lhs45299=([&]()->V{V _callee45301=_v_42870_rand.get();return j::call(_callee45301,j::Args{});})();V _rhs45300=this->_v_42444_TAU.get();return V(j::number(_lhs45299)*j::number(_rhs45300));})();
_v_42877_y=([&]()->V{V _lhs45302=([&]()->V{V _lhs45304=_v_42875_r;V _rhs45305=V(0.5);return V(j::number(_lhs45304)*j::number(_rhs45305));})();V _rhs45303=([&]()->V{V _callee45306=_v_42873_bell;return j::call(_callee45306,j::Args{});})();return V(j::number(_lhs45302)*j::number(_rhs45303));})();
(void)(([&]()->V{V _receiver45314=_v_42871_out;V _method45315=this->_literals[68];V _method=j::get(_receiver45314,_method45315);j::Args _params45316=j::Args{([&]()->V{j::Args _array45307;_array45307.push_back(([&]()->V{V _lhs45308=_v_42875_r;V _rhs45309=([&]()->V{V _number45310=_v_42876_a;return V(std::cos(j::number(_number45310)));})();return V(j::number(_lhs45308)*j::number(_rhs45309));})());_array45307.push_back(_v_42877_y);_array45307.push_back(([&]()->V{V _lhs45311=_v_42875_r;V _rhs45312=([&]()->V{V _number45313=_v_42876_a;return V(std::sin(j::number(_number45313)));})();return V(j::number(_lhs45311)*j::number(_rhs45312));})());return j::array(std::move(_array45307));})()};return j::call(_method,_params45316,_receiver45314);})());
continue;

}

_v_42878_r=([&]()->V{V _lhs45317=V(0.35);V _rhs45318=([&]()->V{V _lhs45319=V(2.65);V _rhs45320=([&]()->V{V _callee45321=_v_42870_rand.get();return j::call(_callee45321,j::Args{});})();return V(j::number(_lhs45319)*j::number(_rhs45320));})();return j::binary("+",_lhs45317,_rhs45318);})();
_v_42879_a=([&]()->V{V _lhs45322=([&]()->V{V _lhs45324=([&]()->V{V _lhs45326=V(2.7);V _rhs45327=([&]()->V{V _number45330=([&]()->V{V _lhs45331=_v_42878_r;V _rhs45332=V(0.35);return V(j::number(_lhs45331)/j::number(_rhs45332));})();return V(std::log(j::number(_number45330)));})();return V(j::number(_lhs45326)*j::number(_rhs45327));})();V _rhs45325=([&]()->V{V _lhs45333=([&]()->V{V _lhs45335=_v_42872_i;V _rhs45336=V(2.0);return V(std::fmod(j::number(_lhs45335),j::number(_rhs45336)));})();V _rhs45334=j::get(j::builtin("Math"),this->_literals[18]);return V(j::number(_lhs45333)*j::number(_rhs45334));})();return j::binary("+",_lhs45324,_rhs45325);})();V _rhs45323=([&]()->V{V _lhs45337=([&]()->V{V _callee45339=_v_42873_bell;return j::call(_callee45339,j::Args{});})();V _rhs45338=([&]()->V{V _lhs45340=V(0.25);V _rhs45341=([&]()->V{V _lhs45342=V(0.1);V _rhs45343=_v_42878_r;return V(j::number(_lhs45342)*j::number(_rhs45343));})();return j::binary("+",_lhs45340,_rhs45341);})();return V(j::number(_lhs45337)*j::number(_rhs45338));})();return j::binary("+",_lhs45322,_rhs45323);})();
(void)(([&]()->V{V _receiver45354=_v_42871_out;V _method45355=this->_literals[68];V _method=j::get(_receiver45354,_method45355);j::Args _params45356=j::Args{([&]()->V{j::Args _array45344;_array45344.push_back(([&]()->V{V _lhs45345=_v_42878_r;V _rhs45346=([&]()->V{V _number45347=_v_42879_a;return V(std::cos(j::number(_number45347)));})();return V(j::number(_lhs45345)*j::number(_rhs45346));})());_array45344.push_back(([&]()->V{V _lhs45348=([&]()->V{V _callee45350=_v_42873_bell;return j::call(_callee45350,j::Args{});})();V _rhs45349=V(0.08);return V(j::number(_lhs45348)*j::number(_rhs45349));})());_array45344.push_back(([&]()->V{V _lhs45351=_v_42878_r;V _rhs45352=([&]()->V{V _number45353=_v_42879_a;return V(std::sin(j::number(_number45353)));})();return V(j::number(_lhs45351)*j::number(_rhs45352));})());return j::array(std::move(_array45344));})()};return j::call(_method,_params45356,_receiver45354);})());

}
}
}else {if(j::truth(([&]()->V{V _lhs45357=_v_42867_name;V _rhs45358=this->_literals[70];return V(j::equal(_lhs45357,_rhs45358,true));})())){{V _v_42880_i;
_v_42880_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45359=_v_42880_i;V _rhs45360=_v_42868_n;return j::binary("<",_lhs45359,_rhs45360);})());(void)(j::increment(_v_42880_i,1,false))){
V _v_42881_r;
V _v_42882_y;
V _v_42883_a;
V _v_42884_c;
_v_42881_r=([&]()->V{V _number45362=([&]()->V{V _callee45363=_v_42870_rand.get();return j::call(_callee45363,j::Args{});})();return V(std::cbrt(j::number(_number45362)));})();
_v_42882_y=([&]()->V{V _lhs45364=([&]()->V{V _lhs45366=V(2.0);V _rhs45367=([&]()->V{V _callee45368=_v_42870_rand.get();return j::call(_callee45368,j::Args{});})();return V(j::number(_lhs45366)*j::number(_rhs45367));})();V _rhs45365=V(1.0);return V(j::number(_lhs45364)-j::number(_rhs45365));})();
_v_42883_a=([&]()->V{V _lhs45369=([&]()->V{V _callee45371=_v_42870_rand.get();return j::call(_callee45371,j::Args{});})();V _rhs45370=this->_v_42444_TAU.get();return V(j::number(_lhs45369)*j::number(_rhs45370));})();
_v_42884_c=([&]()->V{V _number45376=([&]()->V{V _lhs45377=V(1.0);V _rhs45378=([&]()->V{V _lhs45379=_v_42882_y;V _rhs45380=_v_42882_y;return V(j::number(_lhs45379)*j::number(_rhs45380));})();return V(j::number(_lhs45377)-j::number(_rhs45378));})();return V(std::sqrt(j::number(_number45376)));})();
(void)(([&]()->V{V _receiver45394=_v_42871_out;V _method45395=this->_literals[68];V _method=j::get(_receiver45394,_method45395);j::Args _params45396=j::Args{([&]()->V{j::Args _array45381;_array45381.push_back(([&]()->V{V _lhs45382=([&]()->V{V _lhs45384=_v_42881_r;V _rhs45385=_v_42884_c;return V(j::number(_lhs45384)*j::number(_rhs45385));})();V _rhs45383=([&]()->V{V _number45386=_v_42883_a;return V(std::cos(j::number(_number45386)));})();return V(j::number(_lhs45382)*j::number(_rhs45383));})());_array45381.push_back(([&]()->V{V _lhs45387=_v_42881_r;V _rhs45388=_v_42882_y;return V(j::number(_lhs45387)*j::number(_rhs45388));})());_array45381.push_back(([&]()->V{V _lhs45389=([&]()->V{V _lhs45391=_v_42881_r;V _rhs45392=_v_42884_c;return V(j::number(_lhs45391)*j::number(_rhs45392));})();V _rhs45390=([&]()->V{V _number45393=_v_42883_a;return V(std::sin(j::number(_number45393)));})();return V(j::number(_lhs45389)*j::number(_rhs45390));})());return j::array(std::move(_array45381));})()};return j::call(_method,_params45396,_receiver45394);})());

}
}
}else {if(j::truth(([&]()->V{V _lhs45397=_v_42867_name;V _rhs45398=this->_literals[71];return V(j::equal(_lhs45397,_rhs45398,true));})())){{V _v_42885_i;
_v_42885_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45399=_v_42885_i;V _rhs45400=_v_42868_n;return j::binary("<",_lhs45399,_rhs45400);})());(void)(j::increment(_v_42885_i,1,false))){
V _v_42886_y;
V _v_42887_c;
V _v_42888_a;
_v_42886_y=([&]()->V{V _lhs45401=V(1.0);V _rhs45402=([&]()->V{V _lhs45403=([&]()->V{V _lhs45405=V(2.0);V _rhs45406=([&]()->V{V _lhs45407=_v_42885_i;V _rhs45408=V(0.5);return j::binary("+",_lhs45407,_rhs45408);})();return V(j::number(_lhs45405)*j::number(_rhs45406));})();V _rhs45404=_v_42868_n;return V(j::number(_lhs45403)/j::number(_rhs45404));})();return V(j::number(_lhs45401)-j::number(_rhs45402));})();
_v_42887_c=([&]()->V{V _number45413=([&]()->V{V _lhs45414=V(1.0);V _rhs45415=([&]()->V{V _lhs45416=_v_42886_y;V _rhs45417=_v_42886_y;return V(j::number(_lhs45416)*j::number(_rhs45417));})();return V(j::number(_lhs45414)-j::number(_rhs45415));})();return V(std::sqrt(j::number(_number45413)));})();
_v_42888_a=([&]()->V{V _lhs45418=([&]()->V{V _lhs45420=([&]()->V{V _lhs45422=_v_42885_i;V _rhs45423=j::get(j::builtin("Math"),this->_literals[18]);return V(j::number(_lhs45422)*j::number(_rhs45423));})();V _rhs45421=([&]()->V{V _lhs45424=V(3.0);V _rhs45425=([&]()->V{V _number45426=V(5.0);return V(std::sqrt(j::number(_number45426)));})();return V(j::number(_lhs45424)-j::number(_rhs45425));})();return V(j::number(_lhs45420)*j::number(_rhs45421));})();V _rhs45419=([&]()->V{V _lhs45427=([&]()->V{V _callee45429=_v_42870_rand.get();return j::call(_callee45429,j::Args{});})();V _rhs45428=V(0.2);return V(j::number(_lhs45427)*j::number(_rhs45428));})();return j::binary("+",_lhs45418,_rhs45419);})();
(void)(([&]()->V{V _receiver45437=_v_42871_out;V _method45438=this->_literals[68];V _method=j::get(_receiver45437,_method45438);j::Args _params45439=j::Args{([&]()->V{j::Args _array45430;_array45430.push_back(([&]()->V{V _lhs45431=_v_42887_c;V _rhs45432=([&]()->V{V _number45433=_v_42888_a;return V(std::cos(j::number(_number45433)));})();return V(j::number(_lhs45431)*j::number(_rhs45432));})());_array45430.push_back(_v_42886_y);_array45430.push_back(([&]()->V{V _lhs45434=_v_42887_c;V _rhs45435=([&]()->V{V _number45436=_v_42888_a;return V(std::sin(j::number(_number45436)));})();return V(j::number(_lhs45434)*j::number(_rhs45435));})());return j::array(std::move(_array45430));})()};return j::call(_method,_params45439,_receiver45437);})());

}
}
}else {if(j::truth(([&]()->V{V _lhs45440=_v_42867_name;V _rhs45441=this->_literals[72];return V(j::equal(_lhs45440,_rhs45441,true));})())){{V _v_42889_i;
_v_42889_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45442=_v_42889_i;V _rhs45443=_v_42868_n;return j::binary("<",_lhs45442,_rhs45443);})());(void)(j::increment(_v_42889_i,1,false))){
V _v_42890_r;
V _v_42891_a;
_v_42890_r=([&]()->V{V _number45451=([&]()->V{V _lhs45452=V(1.96);V _rhs45453=([&]()->V{V _lhs45454=([&]()->V{V _callee45456=_v_42870_rand.get();return j::call(_callee45456,j::Args{});})();V _rhs45455=([&]()->V{V _lhs45457=V(4.84);V _rhs45458=V(1.96);return V(j::number(_lhs45457)-j::number(_rhs45458));})();return V(j::number(_lhs45454)*j::number(_rhs45455));})();return j::binary("+",_lhs45452,_rhs45453);})();return V(std::sqrt(j::number(_number45451)));})();
_v_42891_a=([&]()->V{V _lhs45459=([&]()->V{V _callee45461=_v_42870_rand.get();return j::call(_callee45461,j::Args{});})();V _rhs45460=this->_v_42444_TAU.get();return V(j::number(_lhs45459)*j::number(_rhs45460));})();
(void)(([&]()->V{V _receiver45474=_v_42871_out;V _method45475=this->_literals[68];V _method=j::get(_receiver45474,_method45475);j::Args _params45476=j::Args{([&]()->V{j::Args _array45462;_array45462.push_back(([&]()->V{V _lhs45463=_v_42890_r;V _rhs45464=([&]()->V{V _number45465=_v_42891_a;return V(std::cos(j::number(_number45465)));})();return V(j::number(_lhs45463)*j::number(_rhs45464));})());_array45462.push_back(([&]()->V{V _lhs45466=([&]()->V{V _lhs45468=([&]()->V{V _callee45470=_v_42870_rand.get();return j::call(_callee45470,j::Args{});})();V _rhs45469=V(0.5);return V(j::number(_lhs45468)-j::number(_rhs45469));})();V _rhs45467=V(0.04);return V(j::number(_lhs45466)*j::number(_rhs45467));})());_array45462.push_back(([&]()->V{V _lhs45471=_v_42890_r;V _rhs45472=([&]()->V{V _number45473=_v_42891_a;return V(std::sin(j::number(_number45473)));})();return V(j::number(_lhs45471)*j::number(_rhs45472));})());return j::array(std::move(_array45462));})()};return j::call(_method,_params45476,_receiver45474);})());

}
}
}else {
V _v_42892_rungs;
V _v_42893_strand;
V _v_42894_slots;
_v_42892_rungs=([&]()->V{V _number45479=([&]()->V{V _lhs45480=_v_42868_n;V _rhs45481=V(4.0);return V(j::number(_lhs45480)/j::number(_rhs45481));})();return V(std::floor(j::number(_number45479)));})();
_v_42893_strand=([&]()->V{V _lhs45482=_v_42868_n;V _rhs45483=_v_42892_rungs;return V(j::number(_lhs45482)-j::number(_rhs45483));})();
_v_42894_slots=([&]()->V{V _number45486=([&]()->V{V _lhs45487=_v_42892_rungs;V _rhs45488=V(12.0);return V(j::number(_lhs45487)/j::number(_rhs45488));})();return V(std::ceil(j::number(_number45486)));})();
{V _v_42895_i;
_v_42895_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45489=_v_42895_i;V _rhs45490=_v_42893_strand;return j::binary("<",_lhs45489,_rhs45490);})());(void)(j::increment(_v_42895_i,1,false))){
V _v_42896_k;
V _v_42897_a;
_v_42896_k=([&]()->V{V _lhs45491=([&]()->V{V _lhs45493=_v_42895_i;V _rhs45494=V(1.0);return V(int(j::i32(_lhs45493)>>(j::u32(_rhs45494)&31)));})();V _rhs45492=([&]()->V{V _receiver45504=j::builtin("Math");V _method45505=this->_literals[73];V _method=j::get(_receiver45504,_method45505);j::Args _params45506=j::Args{V(1.0),([&]()->V{V _lhs45495=([&]()->V{V _number45499=([&]()->V{V _lhs45500=_v_42893_strand;V _rhs45501=V(2.0);return V(j::number(_lhs45500)/j::number(_rhs45501));})();return V(std::ceil(j::number(_number45499)));})();V _rhs45496=V(1.0);return V(j::number(_lhs45495)-j::number(_rhs45496));})()};return j::call(_method,_params45506,_receiver45504);})();return V(j::number(_lhs45491)/j::number(_rhs45492));})();
_v_42897_a=([&]()->V{V _lhs45507=([&]()->V{V _lhs45509=([&]()->V{V _lhs45511=V(2.0);V _rhs45512=this->_v_42444_TAU.get();return V(j::number(_lhs45511)*j::number(_rhs45512));})();V _rhs45510=_v_42896_k;return V(j::number(_lhs45509)*j::number(_rhs45510));})();V _rhs45508=([&]()->V{V _lhs45513=([&]()->V{V _lhs45515=_v_42895_i;V _rhs45516=V(1.0);return V(int(j::i32(_lhs45515)&j::i32(_rhs45516)));})();V _rhs45514=j::get(j::builtin("Math"),this->_literals[18]);return V(j::number(_lhs45513)*j::number(_rhs45514));})();return j::binary("+",_lhs45507,_rhs45508);})();
(void)(([&]()->V{V _receiver45524=_v_42871_out;V _method45525=this->_literals[68];V _method=j::get(_receiver45524,_method45525);j::Args _params45526=j::Args{([&]()->V{j::Args _array45517;_array45517.push_back(([&]()->V{V _number45518=_v_42897_a;return V(std::cos(j::number(_number45518)));})());_array45517.push_back(([&]()->V{V _lhs45519=([&]()->V{V _lhs45521=V(4.0);V _rhs45522=_v_42896_k;return V(j::number(_lhs45521)*j::number(_rhs45522));})();V _rhs45520=V(2.0);return V(j::number(_lhs45519)-j::number(_rhs45520));})());_array45517.push_back(([&]()->V{V _number45523=_v_42897_a;return V(std::sin(j::number(_number45523)));})());return j::array(std::move(_array45517));})()};return j::call(_method,_params45526,_receiver45524);})());

}
}
{V _v_42898_i;
_v_42898_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45527=_v_42898_i;V _rhs45528=_v_42892_rungs;return j::binary("<",_lhs45527,_rhs45528);})());(void)(j::increment(_v_42898_i,1,false))){
V _v_42899_k;
V _v_42900_a;
V _v_42901_f;
_v_42899_k=([&]()->V{V _lhs45529=([&]()->V{V _lhs45531=([&]()->V{V _lhs45533=_v_42898_i;V _rhs45534=V(12.0);return V(std::fmod(j::number(_lhs45533),j::number(_rhs45534)));})();V _rhs45532=V(0.5);return j::binary("+",_lhs45531,_rhs45532);})();V _rhs45530=V(12.0);return V(j::number(_lhs45529)/j::number(_rhs45530));})();
_v_42900_a=([&]()->V{V _lhs45535=([&]()->V{V _lhs45537=V(2.0);V _rhs45538=this->_v_42444_TAU.get();return V(j::number(_lhs45537)*j::number(_rhs45538));})();V _rhs45536=_v_42899_k;return V(j::number(_lhs45535)*j::number(_rhs45536));})();
_v_42901_f=([&]()->V{V _lhs45539=([&]()->V{V _lhs45541=([&]()->V{V _lhs45543=V(2.0);V _rhs45544=([&]()->V{V _lhs45545=([&]()->V{V _number45549=([&]()->V{V _lhs45550=_v_42898_i;V _rhs45551=V(12.0);return V(j::number(_lhs45550)/j::number(_rhs45551));})();return V(std::floor(j::number(_number45549)));})();V _rhs45546=V(1.0);return j::binary("+",_lhs45545,_rhs45546);})();return V(j::number(_lhs45543)*j::number(_rhs45544));})();V _rhs45542=([&]()->V{V _lhs45552=_v_42894_slots;V _rhs45553=V(1.0);return j::binary("+",_lhs45552,_rhs45553);})();return V(j::number(_lhs45541)/j::number(_rhs45542));})();V _rhs45540=V(1.0);return V(j::number(_lhs45539)-j::number(_rhs45540));})();
(void)(([&]()->V{V _receiver45565=_v_42871_out;V _method45566=this->_literals[68];V _method=j::get(_receiver45565,_method45566);j::Args _params45567=j::Args{([&]()->V{j::Args _array45554;_array45554.push_back(([&]()->V{V _lhs45555=_v_42901_f;V _rhs45556=([&]()->V{V _number45557=_v_42900_a;return V(std::cos(j::number(_number45557)));})();return V(j::number(_lhs45555)*j::number(_rhs45556));})());_array45554.push_back(([&]()->V{V _lhs45558=([&]()->V{V _lhs45560=V(4.0);V _rhs45561=_v_42899_k;return V(j::number(_lhs45560)*j::number(_rhs45561));})();V _rhs45559=V(2.0);return V(j::number(_lhs45558)-j::number(_rhs45559));})());_array45554.push_back(([&]()->V{V _lhs45562=_v_42901_f;V _rhs45563=([&]()->V{V _number45564=_v_42900_a;return V(std::sin(j::number(_number45564)));})();return V(j::number(_lhs45562)*j::number(_rhs45563));})());return j::array(std::move(_array45554));})()};return j::call(_method,_params45567,_receiver45565);})());

}
}

}

}
}
}
return _v_42871_out;

}

return V{};
},3);
this->_v_42902_torus.get()=j::function([=](const j::Args &_args_fn42903,const V &_receiver_fn42903,const V &_self_fn42903) mutable ->V{
V _v_42904_o;
V _default45568=_args_fn42903[0];if(_default45568.kind==V::Undefined||_default45568.kind==V::Hole)_default45568=([&]()->V{V _obj45569=j::object();return _obj45569;})();
_v_42904_o=_default45568;
{
V _v_42905_b;
j::Cell _v_42906_R;
j::Cell _v_42907_r;
_v_42905_b=([&]()->V{V _callee45571=this->_v_42598_base.get();return j::call(_callee45571,j::Args{this->_literals[74],_v_42904_o,([&]()->V{j::Args _array45570;_array45570.push_back(this->_literals[75]);_array45570.push_back(this->_literals[76]);return j::array(std::move(_array45570));})()});})();
_v_42906_R.get()=([&]()->V{V _callee45572=this->_v_42465_positive.get();return j::call(_callee45572,j::Args{j::get(_v_42904_o,this->_literals[75]),this->_literals[77],V(2.0)});})();
_v_42907_r.get()=([&]()->V{V _callee45573=this->_v_42465_positive.get();return j::call(_callee45573,j::Args{j::get(_v_42904_o,this->_literals[76]),this->_literals[78],V(1.0)});})();
return ([&]()->V{V _callee45581=this->_v_42613_shape.get();return j::call(_callee45581,j::Args{([&]()->V{V _obj45574=j::object();V _spread45575=_v_42905_b;for(const auto &_key:j::keys(_spread45575))j::put(_obj45574,_key,j::get(_spread45575,_key));V _spread45576=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45576))j::put(_obj45574,_key,j::get(_spread45576,_key));j::put(_obj45574,this->_literals[79],j::function([=](const j::Args &_args_fn42908,const V &_receiver_fn42908,const V &_self_fn42908) mutable ->V{
return ([&]()->V{V _lhs45577=_v_42906_R.get();V _rhs45578=_v_42907_r.get();return j::binary("+",_lhs45577,_rhs45578);})();
return V{};
},0));j::put(_obj45574,this->_literals[80],j::function([=](const j::Args &_args_fn42909,const V &_receiver_fn42909,const V &_self_fn42909) mutable ->V{
V _v_42910_unit;
_v_42910_unit=_args_fn42909[0];
return ([&]()->V{V _callee45579=this->_v_42751_ringMesh.get();return j::call(_callee45579,j::Args{_v_42906_R.get(),_v_42907_r.get(),_v_42910_unit});})();
return V{};
},1));j::put(_obj45574,this->_literals[43],([&]()->V{std::u16string _text45580;_text45580+=u"";_text45580+=j::string(_v_42906_R.get());_text45580+=u",";_text45580+=j::string(_v_42907_r.get());_text45580+=u"";return V(std::move(_text45580));})());return _obj45574;})()});})();

}

return V{};
},0);
this->_v_42911_sphere.get()=j::function([=](const j::Args &_args_fn42912,const V &_receiver_fn42912,const V &_self_fn42912) mutable ->V{
V _v_42913_o;
V _default45582=_args_fn42912[0];if(_default45582.kind==V::Undefined||_default45582.kind==V::Hole)_default45582=([&]()->V{V _obj45583=j::object();return _obj45583;})();
_v_42913_o=_default45582;
{
V _v_42914_b;
j::Cell _v_42915_r;
_v_42914_b=([&]()->V{V _callee45585=this->_v_42598_base.get();return j::call(_callee45585,j::Args{this->_literals[81],_v_42913_o,([&]()->V{j::Args _array45584;_array45584.push_back(this->_literals[75]);return j::array(std::move(_array45584));})()});})();
_v_42915_r.get()=([&]()->V{V _callee45586=this->_v_42465_positive.get();return j::call(_callee45586,j::Args{j::get(_v_42913_o,this->_literals[75]),this->_literals[82],V(1.0)});})();
return ([&]()->V{V _callee45592=this->_v_42613_shape.get();return j::call(_callee45592,j::Args{([&]()->V{V _obj45587=j::object();V _spread45588=_v_42914_b;for(const auto &_key:j::keys(_spread45588))j::put(_obj45587,_key,j::get(_spread45588,_key));V _spread45589=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45589))j::put(_obj45587,_key,j::get(_spread45589,_key));j::put(_obj45587,this->_literals[79],j::function([=](const j::Args &_args_fn42916,const V &_receiver_fn42916,const V &_self_fn42916) mutable ->V{
return _v_42915_r.get();
return V{};
},0));j::put(_obj45587,this->_literals[80],j::function([=](const j::Args &_args_fn42917,const V &_receiver_fn42917,const V &_self_fn42917) mutable ->V{
V _v_42918_unit;
_v_42918_unit=_args_fn42917[0];
return ([&]()->V{V _callee45590=this->_v_42735_ballMesh.get();return j::call(_callee45590,j::Args{_v_42915_r.get(),_v_42918_unit});})();
return V{};
},1));j::put(_obj45587,this->_literals[43],([&]()->V{std::u16string _text45591;_text45591+=u"";_text45591+=j::string(_v_42915_r.get());_text45591+=u"";return V(std::move(_text45591));})());return _obj45587;})()});})();

}

return V{};
},0);
this->_v_42919_cube.get()=j::function([=](const j::Args &_args_fn42920,const V &_receiver_fn42920,const V &_self_fn42920) mutable ->V{
V _v_42921_o;
V _default45593=_args_fn42920[0];if(_default45593.kind==V::Undefined||_default45593.kind==V::Hole)_default45593=([&]()->V{V _obj45594=j::object();return _obj45594;})();
_v_42921_o=_default45593;
{
V _v_42922_b;
j::Cell _v_42923_h;
_v_42922_b=([&]()->V{V _callee45596=this->_v_42598_base.get();return j::call(_callee45596,j::Args{this->_literals[83],_v_42921_o,([&]()->V{j::Args _array45595;_array45595.push_back(this->_literals[50]);return j::array(std::move(_array45595));})()});})();
_v_42923_h.get()=([&]()->V{V _lhs45597=([&]()->V{V _callee45599=this->_v_42465_positive.get();return j::call(_callee45599,j::Args{j::get(_v_42921_o,this->_literals[50]),this->_literals[84],V(2.0)});})();V _rhs45598=V(2.0);return V(j::number(_lhs45597)/j::number(_rhs45598));})();
return ([&]()->V{V _callee45608=this->_v_42613_shape.get();return j::call(_callee45608,j::Args{([&]()->V{V _obj45600=j::object();V _spread45601=_v_42922_b;for(const auto &_key:j::keys(_spread45601))j::put(_obj45600,_key,j::get(_spread45601,_key));V _spread45602=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45602))j::put(_obj45600,_key,j::get(_spread45602,_key));j::put(_obj45600,this->_literals[79],j::function([=](const j::Args &_args_fn42924,const V &_receiver_fn42924,const V &_self_fn42924) mutable ->V{
return ([&]()->V{V _lhs45603=_v_42923_h.get();V _rhs45604=([&]()->V{V _number45605=V(3.0);return V(std::sqrt(j::number(_number45605)));})();return V(j::number(_lhs45603)*j::number(_rhs45604));})();
return V{};
},0));j::put(_obj45600,this->_literals[80],j::function([=](const j::Args &_args_fn42925,const V &_receiver_fn42925,const V &_self_fn42925) mutable ->V{
return ([&]()->V{V _callee45606=this->_v_42804_boxMesh.get();return j::call(_callee45606,j::Args{_v_42923_h.get()});})();
return V{};
},0));j::put(_obj45600,this->_literals[43],([&]()->V{std::u16string _text45607;_text45607+=u"";_text45607+=j::string(_v_42923_h.get());_text45607+=u"";return V(std::move(_text45607));})());return _obj45600;})()});})();

}

return V{};
},0);
this->_v_42926_cylinder.get()=j::function([=](const j::Args &_args_fn42927,const V &_receiver_fn42927,const V &_self_fn42927) mutable ->V{
V _v_42928_o;
V _default45609=_args_fn42927[0];if(_default45609.kind==V::Undefined||_default45609.kind==V::Hole)_default45609=([&]()->V{V _obj45610=j::object();return _obj45610;})();
_v_42928_o=_default45609;
{
V _v_42929_b;
j::Cell _v_42930_r;
j::Cell _v_42931_h;
_v_42929_b=([&]()->V{V _callee45612=this->_v_42598_base.get();return j::call(_callee45612,j::Args{this->_literals[67],_v_42928_o,([&]()->V{j::Args _array45611;_array45611.push_back(this->_literals[75]);_array45611.push_back(this->_literals[85]);return j::array(std::move(_array45611));})()});})();
_v_42930_r.get()=([&]()->V{V _callee45613=this->_v_42465_positive.get();return j::call(_callee45613,j::Args{j::get(_v_42928_o,this->_literals[75]),this->_literals[86],V(1.0)});})();
_v_42931_h.get()=([&]()->V{V _callee45614=this->_v_42465_positive.get();return j::call(_callee45614,j::Args{j::get(_v_42928_o,this->_literals[85]),this->_literals[87],V(2.0)});})();
return ([&]()->V{V _callee45626=this->_v_42613_shape.get();return j::call(_callee45626,j::Args{([&]()->V{V _obj45615=j::object();V _spread45616=_v_42929_b;for(const auto &_key:j::keys(_spread45616))j::put(_obj45615,_key,j::get(_spread45616,_key));V _spread45617=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45617))j::put(_obj45615,_key,j::get(_spread45617,_key));j::put(_obj45615,this->_literals[79],j::function([=](const j::Args &_args_fn42932,const V &_receiver_fn42932,const V &_self_fn42932) mutable ->V{
return ([&]()->V{V _number45620=_v_42930_r.get();V _number45621=([&]()->V{V _lhs45622=_v_42931_h.get();V _rhs45623=V(2.0);return V(j::number(_lhs45622)/j::number(_rhs45623));})();return V(std::hypot(j::number(_number45620),j::number(_number45621)));})();
return V{};
},0));j::put(_obj45615,this->_literals[80],j::function([=](const j::Args &_args_fn42933,const V &_receiver_fn42933,const V &_self_fn42933) mutable ->V{
V _v_42934_unit;
_v_42934_unit=_args_fn42933[0];
return ([&]()->V{V _callee45624=this->_v_42771_tubeMesh.get();return j::call(_callee45624,j::Args{_v_42930_r.get(),_v_42931_h.get(),_v_42934_unit,V(false)});})();
return V{};
},1));j::put(_obj45615,this->_literals[43],([&]()->V{std::u16string _text45625;_text45625+=u"";_text45625+=j::string(_v_42930_r.get());_text45625+=u",";_text45625+=j::string(_v_42931_h.get());_text45625+=u"";return V(std::move(_text45625));})());return _obj45615;})()});})();

}

return V{};
},0);
this->_v_42935_cone.get()=j::function([=](const j::Args &_args_fn42936,const V &_receiver_fn42936,const V &_self_fn42936) mutable ->V{
V _v_42937_o;
V _default45627=_args_fn42936[0];if(_default45627.kind==V::Undefined||_default45627.kind==V::Hole)_default45627=([&]()->V{V _obj45628=j::object();return _obj45628;})();
_v_42937_o=_default45627;
{
V _v_42938_b;
j::Cell _v_42939_r;
j::Cell _v_42940_h;
_v_42938_b=([&]()->V{V _callee45630=this->_v_42598_base.get();return j::call(_callee45630,j::Args{this->_literals[66],_v_42937_o,([&]()->V{j::Args _array45629;_array45629.push_back(this->_literals[75]);_array45629.push_back(this->_literals[85]);return j::array(std::move(_array45629));})()});})();
_v_42939_r.get()=([&]()->V{V _callee45631=this->_v_42465_positive.get();return j::call(_callee45631,j::Args{j::get(_v_42937_o,this->_literals[75]),this->_literals[88],V(1.0)});})();
_v_42940_h.get()=([&]()->V{V _callee45632=this->_v_42465_positive.get();return j::call(_callee45632,j::Args{j::get(_v_42937_o,this->_literals[85]),this->_literals[89],V(2.0)});})();
return ([&]()->V{V _callee45644=this->_v_42613_shape.get();return j::call(_callee45644,j::Args{([&]()->V{V _obj45633=j::object();V _spread45634=_v_42938_b;for(const auto &_key:j::keys(_spread45634))j::put(_obj45633,_key,j::get(_spread45634,_key));V _spread45635=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45635))j::put(_obj45633,_key,j::get(_spread45635,_key));j::put(_obj45633,this->_literals[79],j::function([=](const j::Args &_args_fn42941,const V &_receiver_fn42941,const V &_self_fn42941) mutable ->V{
return ([&]()->V{V _number45638=_v_42939_r.get();V _number45639=([&]()->V{V _lhs45640=_v_42940_h.get();V _rhs45641=V(2.0);return V(j::number(_lhs45640)/j::number(_rhs45641));})();return V(std::hypot(j::number(_number45638),j::number(_number45639)));})();
return V{};
},0));j::put(_obj45633,this->_literals[80],j::function([=](const j::Args &_args_fn42942,const V &_receiver_fn42942,const V &_self_fn42942) mutable ->V{
V _v_42943_unit;
_v_42943_unit=_args_fn42942[0];
return ([&]()->V{V _callee45642=this->_v_42771_tubeMesh.get();return j::call(_callee45642,j::Args{_v_42939_r.get(),_v_42940_h.get(),_v_42943_unit,V(true)});})();
return V{};
},1));j::put(_obj45633,this->_literals[43],([&]()->V{std::u16string _text45643;_text45643+=u"";_text45643+=j::string(_v_42939_r.get());_text45643+=u",";_text45643+=j::string(_v_42940_h.get());_text45643+=u"";return V(std::move(_text45643));})());return _obj45633;})()});})();

}

return V{};
},0);
this->_v_42944_plane.get()=j::function([=](const j::Args &_args_fn42945,const V &_receiver_fn42945,const V &_self_fn42945) mutable ->V{
V _v_42946_o;
V _default45645=_args_fn42945[0];if(_default45645.kind==V::Undefined||_default45645.kind==V::Hole)_default45645=([&]()->V{V _obj45646=j::object();return _obj45646;})();
_v_42946_o=_default45645;
{
V _v_42947_b;
j::Cell _v_42948_w;
j::Cell _v_42949_d;
_v_42947_b=([&]()->V{V _callee45648=this->_v_42598_base.get();return j::call(_callee45648,j::Args{this->_literals[90],_v_42946_o,([&]()->V{j::Args _array45647;_array45647.push_back(this->_literals[91]);_array45647.push_back(this->_literals[92]);return j::array(std::move(_array45647));})()});})();
_v_42948_w.get()=([&]()->V{V _callee45649=this->_v_42465_positive.get();return j::call(_callee45649,j::Args{j::get(_v_42946_o,this->_literals[91]),this->_literals[93],V(4.0)});})();
_v_42949_d.get()=([&]()->V{V _callee45650=this->_v_42465_positive.get();return j::call(_callee45650,j::Args{j::get(_v_42946_o,this->_literals[92]),this->_literals[94],V(4.0)});})();
return ([&]()->V{V _callee45660=this->_v_42613_shape.get();return j::call(_callee45660,j::Args{([&]()->V{V _obj45651=j::object();V _spread45652=_v_42947_b;for(const auto &_key:j::keys(_spread45652))j::put(_obj45651,_key,j::get(_spread45652,_key));V _spread45653=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45653))j::put(_obj45651,_key,j::get(_spread45653,_key));j::put(_obj45651,this->_literals[79],j::function([=](const j::Args &_args_fn42950,const V &_receiver_fn42950,const V &_self_fn42950) mutable ->V{
return ([&]()->V{V _lhs45654=([&]()->V{V _number45656=_v_42948_w.get();V _number45657=_v_42949_d.get();return V(std::hypot(j::number(_number45656),j::number(_number45657)));})();V _rhs45655=V(2.0);return V(j::number(_lhs45654)/j::number(_rhs45655));})();
return V{};
},0));j::put(_obj45651,this->_literals[80],j::function([=](const j::Args &_args_fn42951,const V &_receiver_fn42951,const V &_self_fn42951) mutable ->V{
return ([&]()->V{V _callee45658=this->_v_42825_floorMesh.get();return j::call(_callee45658,j::Args{_v_42948_w.get(),_v_42949_d.get()});})();
return V{};
},0));j::put(_obj45651,this->_literals[43],([&]()->V{std::u16string _text45659;_text45659+=u"";_text45659+=j::string(_v_42948_w.get());_text45659+=u",";_text45659+=j::string(_v_42949_d.get());_text45659+=u"";return V(std::move(_text45659));})());return _obj45651;})()});})();

}

return V{};
},0);
this->_v_42952_points.get()=j::function([=](const j::Args &_args_fn42953,const V &_receiver_fn42953,const V &_self_fn42953) mutable ->V{
V _v_42954_list;
V _v_42955_o;
_v_42954_list=_args_fn42953[0];
V _default45661=_args_fn42953[1];if(_default45661.kind==V::Undefined||_default45661.kind==V::Hole)_default45661=([&]()->V{V _obj45662=j::object();return _obj45662;})();
_v_42955_o=_default45661;
{
V _v_42956_b;
V _v_42957_named;
V _v_42960_count;
V _v_42961_seed;
V _v_42962_source;
V _v_42963_timed;
V _v_42964_check;
V _v_42971_first;
V _v_42972_char;
V _v_42973_glow;
j::Cell _v_42974_far;
j::Cell _v_42979_still;
j::Cell _v_42980_fn;
V _v_42981_dots;
V _v_42982_form;
_v_42956_b=([&]()->V{V _callee45664=this->_v_42598_base.get();return j::call(_callee45664,j::Args{this->_literals[95],_v_42955_o,([&]()->V{j::Args _array45663;_array45663.push_back(this->_literals[96]);_array45663.push_back(this->_literals[97]);_array45663.push_back(this->_literals[98]);_array45663.push_back(this->_literals[99]);return j::array(std::move(_array45663));})(),V(false)});})();
_v_42957_named=([&]()->V{V _lhs45665=j::unary("typeof",_v_42954_list);V _rhs45666=this->_literals[11];return V(j::equal(_lhs45665,_rhs45666,true));})();
if(j::truth(([&]()->V{V _logical45667=_v_42957_named;return j::truth(_logical45667)?j::unary("!",([&]()->V{V _receiver45668=j::builtin("Object");V _method45669=this->_literals[12];V _method=j::get(_receiver45668,_method45669);j::Args _params45670=j::Args{this->_v_42864_CLOUDS.get(),_v_42954_list};return j::call(_method,_params45670,_receiver45668);})()):_logical45667;})())){(void)(([&]()->V{V _callee45681=this->_v_42449_fail.get();return j::call(_callee45681,j::Args{([&]()->V{std::u16string _text45671;_text45671+=u"points() takes a cloud's name, ";_text45671+=j::string(([&]()->V{V _callee45679=this->_v_42445_and.get();return j::call(_callee45679,j::Args{([&]()->V{V _receiver45673=([&]()->V{V _receiver45676=j::builtin("Object");V _method45677=this->_literals[13];V _method=j::get(_receiver45676,_method45677);j::Args _params45678=j::Args{this->_v_42864_CLOUDS.get()};return j::call(_method,_params45678,_receiver45676);})();V _method45674=this->_literals[14];V _method=j::get(_receiver45673,_method45674);j::Args _params45675=j::Args{j::function([=](const j::Args &_args_fn42958,const V &_receiver_fn42958,const V &_self_fn42958) mutable ->V{
V _v_42959_n;
_v_42959_n=_args_fn42958[0];
return ([&]()->V{std::u16string _text45672;_text45672+=u"\"";_text45672+=j::string(_v_42959_n);_text45672+=u"\"";return V(std::move(_text45672));})();
return V{};
},1)};return j::call(_method,_params45675,_receiver45673);})()});})());_text45671+=u", or a list of points, each [x, y, z], not ";_text45671+=j::string(([&]()->V{V _callee45680=this->_v_42462_shown.get();return j::call(_callee45680,j::Args{_v_42954_list});})());_text45671+=u"";return V(std::move(_text45671));})()});})());
}
if(j::truth(([&]()->V{V _logical45682=j::unary("!",_v_42957_named);return j::truth(_logical45682)?([&]()->V{V _logical45683=([&]()->V{V _lhs45684=j::get(_v_42955_o,this->_literals[97]);V _rhs45685=j::builtin("undefined");return V(!j::equal(_lhs45684,_rhs45685,true));})();return !j::truth(_logical45683)?([&]()->V{V _lhs45686=j::get(_v_42955_o,this->_literals[98]);V _rhs45687=j::builtin("undefined");return V(!j::equal(_lhs45686,_rhs45687,true));})():_logical45683;})():_logical45682;})())){(void)(([&]()->V{V _callee45688=this->_v_42449_fail.get();return j::call(_callee45688,j::Args{this->_literals[100]});})());
}
_v_42960_count=(j::truth(_v_42957_named)?([&]()->V{V _callee45689=this->_v_42475_wholeIn.get();return j::call(_callee45689,j::Args{j::get(_v_42955_o,this->_literals[97]),this->_literals[101],j::get(j::get(this->_v_42864_CLOUDS.get(),_v_42954_list),this->_literals[97]),V(1.0),V(20000.0)});})():V(0.0));
_v_42961_seed=(j::truth(_v_42957_named)?([&]()->V{V _callee45696=this->_v_42475_wholeIn.get();return j::call(_callee45696,j::Args{j::get(_v_42955_o,this->_literals[98]),this->_literals[102],V(1.0),j::unary("-",([&]()->V{V _lhs45690=V(2.0);V _rhs45691=V(31.0);return V(std::pow(j::number(_lhs45690),j::number(_rhs45691)));})()),([&]()->V{V _lhs45692=([&]()->V{V _lhs45694=V(2.0);V _rhs45695=V(31.0);return V(std::pow(j::number(_lhs45694),j::number(_rhs45695)));})();V _rhs45693=V(1.0);return V(j::number(_lhs45692)-j::number(_rhs45693));})()});})():V(0.0));
_v_42962_source=(j::truth(_v_42957_named)?([&]()->V{V _callee45697=this->_v_42865_cloud.get();return j::call(_callee45697,j::Args{_v_42954_list,_v_42960_count,_v_42961_seed});})():_v_42954_list);
_v_42963_timed=([&]()->V{V _lhs45698=j::unary("typeof",_v_42962_source);V _rhs45699=this->_literals[0];return V(j::equal(_lhs45698,_rhs45699,true));})();
_v_42964_check=j::function([=](const j::Args &_args_fn42965,const V &_receiver_fn42965,const V &_self_fn42965) mutable ->V{
V _v_42966_l;
j::Cell _v_42967_when;
_v_42966_l=_args_fn42965[0];
_v_42967_when.get()=_args_fn42965[1];
{
if(j::truth(j::unary("!",([&]()->V{V _receiver45700=j::builtin("Array");V _method45701=this->_literals[8];V _method=j::get(_receiver45700,_method45701);j::Args _params45702=j::Args{_v_42966_l};return j::call(_method,_params45702,_receiver45700);})()))){(void)(([&]()->V{V _callee45705=this->_v_42449_fail.get();return j::call(_callee45705,j::Args{([&]()->V{std::u16string _text45703;_text45703+=u"points() takes a cloud's name, a list of points, each [x, y, z], or a function of t that gives one, not ";_text45703+=j::string(([&]()->V{V _callee45704=this->_v_42462_shown.get();return j::call(_callee45704,j::Args{_v_42966_l});})());_text45703+=u"";_text45703+=j::string(_v_42967_when.get());_text45703+=u"";return V(std::move(_text45703));})()});})());
}
(void)(([&]()->V{V _receiver45708=_v_42966_l;V _method45709=this->_literals[63];V _method=j::get(_receiver45708,_method45709);j::Args _params45710=j::Args{j::function([=](const j::Args &_args_fn42968,const V &_receiver_fn42968,const V &_self_fn42968) mutable ->V{
V _v_42969_p;
V _v_42970_i;
_v_42969_p=_args_fn42968[0];
_v_42970_i=_args_fn42968[1];
return ([&]()->V{V _callee45707=this->_v_42482_vec3.get();return j::call(_callee45707,j::Args{_v_42969_p,([&]()->V{std::u16string _text45706;_text45706+=u"points' point ";_text45706+=j::string(_v_42970_i);_text45706+=u"";_text45706+=j::string(_v_42967_when.get());_text45706+=u"";return V(std::move(_text45706));})()});})();
return V{};
},2)};return j::call(_method,_params45710,_receiver45708);})());
return _v_42966_l;

}

return V{};
},2);
_v_42971_first=([&]()->V{V _callee45712=_v_42964_check;return j::call(_callee45712,j::Args{(j::truth(_v_42963_timed)?([&]()->V{V _callee45711=_v_42962_source;return j::call(_callee45711,j::Args{V(0.0)});})():_v_42962_source),(j::truth(_v_42963_timed)?this->_literals[103]:this->_literals[22])});})();
if(j::truth(([&]()->V{V _logical45713=([&]()->V{V _lhs45714=j::get(_v_42955_o,this->_literals[96]);V _rhs45715=j::builtin("undefined");return V(!j::equal(_lhs45714,_rhs45715,true));})();return j::truth(_logical45713)?([&]()->V{V _logical45716=([&]()->V{V _logical45717=([&]()->V{V _lhs45718=j::unary("typeof",j::get(_v_42955_o,this->_literals[96]));V _rhs45719=this->_literals[11];return V(!j::equal(_lhs45718,_rhs45719,true));})();return !j::truth(_logical45717)?([&]()->V{V _lhs45720=j::get(j::get(_v_42955_o,this->_literals[96]),this->_literals[9]);V _rhs45721=V(1.0);return V(!j::equal(_lhs45720,_rhs45721,true));})():_logical45717;})();return !j::truth(_logical45716)?([&]()->V{V _lhs45722=j::get(_v_42955_o,this->_literals[96]);V _rhs45723=this->_literals[104];return V(j::equal(_lhs45722,_rhs45723,true));})():_logical45716;})():_logical45713;})())){(void)(([&]()->V{V _callee45726=this->_v_42449_fail.get();return j::call(_callee45726,j::Args{([&]()->V{std::u16string _text45724;_text45724+=u"points' char takes one character that isn't a space, such as \"*\", not ";_text45724+=j::string(([&]()->V{V _callee45725=this->_v_42462_shown.get();return j::call(_callee45725,j::Args{j::get(_v_42955_o,this->_literals[96])});})());_text45724+=u"";return V(std::move(_text45724));})()});})());
}
_v_42972_char=(j::truth(([&]()->V{V _lhs45727=j::get(_v_42955_o,this->_literals[96]);V _rhs45728=j::builtin("undefined");return V(j::equal(_lhs45727,_rhs45728,true));})())?V(0.0):([&]()->V{V _callee45729=this->_v_42446_code.get();return j::call(_callee45729,j::Args{j::get(_v_42955_o,this->_literals[96])});})());
_v_42973_glow=([&]()->V{V _callee45730=this->_v_42470_finite.get();return j::call(_callee45730,j::Args{j::get(_v_42955_o,this->_literals[99]),this->_literals[105],(j::truth(_v_42957_named)?j::get(j::get(this->_v_42864_CLOUDS.get(),_v_42954_list),this->_literals[99]):V(0.5))});})();
if(j::truth(([&]()->V{V _logical45731=([&]()->V{V _lhs45732=_v_42973_glow;V _rhs45733=V(0.0);return j::binary("<=",_lhs45732,_rhs45733);})();return !j::truth(_logical45731)?([&]()->V{V _lhs45734=_v_42973_glow;V _rhs45735=V(1.0);return j::binary(">",_lhs45734,_rhs45735);})():_logical45731;})())){(void)(([&]()->V{V _callee45738=this->_v_42449_fail.get();return j::call(_callee45738,j::Args{([&]()->V{std::u16string _text45736;_text45736+=u"points' glow takes a number above 0 and up to 1, the light one point gives its cell, not ";_text45736+=j::string(([&]()->V{V _callee45737=this->_v_42462_shown.get();return j::call(_callee45737,j::Args{j::get(_v_42955_o,this->_literals[99])});})());_text45736+=u"";return V(std::move(_text45736));})()});})());
}
_v_42974_far.get()=j::function([=](const j::Args &_args_fn42975,const V &_receiver_fn42975,const V &_self_fn42975) mutable ->V{
V _v_42976_l;
_v_42976_l=_args_fn42975[0];
{
V _v_42977_r;
_v_42977_r=V(0.0);
{for(const auto &_item45739:j::elements(_v_42976_l)){V _v_42978_p;
_v_42978_p=_item45739;
(void)((_v_42977_r=([&]()->V{V _receiver45747=j::builtin("Math");V _method45748=this->_literals[73];V _method=j::get(_receiver45747,_method45748);j::Args _params45749=j::Args{_v_42977_r,([&]()->V{V _logical45741=([&]()->V{V _number45742=j::get(_v_42978_p,V(0.0));V _number45743=j::get(_v_42978_p,V(1.0));V _number45744=j::get(_v_42978_p,V(2.0));return V(std::hypot(j::number(_number45742),j::number(_number45743),j::number(_number45744)));})();return !j::truth(_logical45741)?V(0.0):_logical45741;})()};return j::call(_method,_params45749,_receiver45747);})()));
}}
return _v_42977_r;

}

return V{};
},1);
_v_42979_still.get()=([&]()->V{V _callee45750=_v_42974_far.get();return j::call(_callee45750,j::Args{_v_42971_first});})();
_v_42980_fn.get()=_v_42962_source;
_v_42981_dots=(j::truth(_v_42963_timed)?_v_42980_fn.get():([&]()->V{V _receiver45754=j::builtin("Float32Array");V _method45755=this->_literals[107];V _method=j::get(_receiver45754,_method45755);j::Args _params45756=j::Args{([&]()->V{V _receiver45751=_v_42971_first;V _method45752=this->_literals[106];V _method=j::get(_receiver45751,_method45752);j::Args _params45753=j::Args{};return j::call(_method,_params45753,_receiver45751);})()};return j::call(_method,_params45756,_receiver45754);})());
_v_42982_form=(j::truth(_v_42963_timed)?V::null():(j::truth(_v_42957_named)?([&]()->V{std::u16string _text45757;_text45757+=u"";_text45757+=j::string(_v_42954_list);_text45757+=u",";_text45757+=j::string(_v_42960_count);_text45757+=u",";_text45757+=j::string(_v_42961_seed);_text45757+=u"";return V(std::move(_text45757));})():([&]()->V{V _callee45758=this->_v_42624_digest.get();return j::call(_callee45758,j::Args{_v_42981_dots});})()));
return ([&]()->V{V _callee45765=this->_v_42613_shape.get();return j::call(_callee45765,j::Args{([&]()->V{V _obj45759=j::object();V _spread45760=_v_42956_b;for(const auto &_key:j::keys(_spread45760))j::put(_obj45759,_key,j::get(_spread45760,_key));V _spread45761=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45761))j::put(_obj45759,_key,j::get(_spread45761,_key));j::put(_obj45759,this->_literals[79],(j::truth(_v_42963_timed)?j::function([=](const j::Args &_args_fn42983,const V &_receiver_fn42983,const V &_self_fn42983) mutable ->V{
V _v_42984_t;
_v_42984_t=_args_fn42983[0];
return ([&]()->V{V _callee45763=_v_42974_far.get();return j::call(_callee45763,j::Args{([&]()->V{V _callee45762=_v_42980_fn.get();return j::call(_callee45762,j::Args{_v_42984_t});})()});})();
return V{};
},1):j::function([=](const j::Args &_args_fn42985,const V &_receiver_fn42985,const V &_self_fn42985) mutable ->V{
return _v_42979_still.get();
return V{};
},0)));j::put(_obj45759,this->_literals[108],([&]()->V{V _obj45764=j::object();j::put(_obj45764,this->_literals[109],_v_42981_dots);j::put(_obj45764,this->_literals[96],_v_42972_char);j::put(_obj45764,this->_literals[99],_v_42973_glow);return _obj45764;})());j::put(_obj45759,this->_literals[35],_v_42963_timed);j::put(_obj45759,this->_literals[43],_v_42982_form);return _obj45759;})()});})();

}

return V{};
},1);
this->_v_42986_lines.get()=j::function([=](const j::Args &_args_fn42987,const V &_receiver_fn42987,const V &_self_fn42987) mutable ->V{
j::Cell _v_42988_list;
V _v_42989_o;
_v_42988_list.get()=_args_fn42987[0];
V _default45766=_args_fn42987[1];if(_default45766.kind==V::Undefined||_default45766.kind==V::Hole)_default45766=([&]()->V{V _obj45767=j::object();return _obj45767;})();
_v_42989_o=_default45766;
{
V _v_42990_b;
j::Cell _v_42991_timed;
j::Cell _v_42992_paths;
V _v_42995_given;
V _v_42996_first;
j::Cell _v_43003_far;
j::Cell _v_43009_still;
j::Cell _v_43010_fn;
V _v_43013_fixed;
_v_42990_b=([&]()->V{V _callee45769=this->_v_42598_base.get();return j::call(_callee45769,j::Args{this->_literals[110],_v_42989_o,([&]()->V{j::Args _array45768;_array45768.push_back(this->_literals[96]);_array45768.push_back(this->_literals[56]);return j::array(std::move(_array45768));})(),V(false)});})();
_v_42991_timed.get()=([&]()->V{V _lhs45770=j::unary("typeof",_v_42988_list.get());V _rhs45771=this->_literals[0];return V(j::equal(_lhs45770,_rhs45771,true));})();
_v_42992_paths.get()=j::function([=](const j::Args &_args_fn42993,const V &_receiver_fn42993,const V &_self_fn42993) mutable ->V{
V _v_42994_l;
_v_42994_l=_args_fn42993[0];
return (j::truth(j::unary("!",([&]()->V{V _receiver45772=j::builtin("Array");V _method45773=this->_literals[8];V _method=j::get(_receiver45772,_method45773);j::Args _params45774=j::Args{_v_42994_l};return j::call(_method,_params45774,_receiver45772);})()))?([&]()->V{j::Args _array45775;return j::array(std::move(_array45775));})():(j::truth(([&]()->V{V _logical45776=([&]()->V{V _logical45777=j::get(_v_42994_l,this->_literals[9]);return j::truth(_logical45777)?([&]()->V{V _receiver45778=j::builtin("Array");V _method45779=this->_literals[8];V _method=j::get(_receiver45778,_method45779);j::Args _params45780=j::Args{j::get(_v_42994_l,V(0.0))};return j::call(_method,_params45780,_receiver45778);})():_logical45777;})();return j::truth(_logical45776)?([&]()->V{V _lhs45781=j::unary("typeof",j::get(j::get(_v_42994_l,V(0.0)),V(0.0)));V _rhs45782=this->_literals[2];return V(j::equal(_lhs45781,_rhs45782,true));})():_logical45776;})())?([&]()->V{j::Args _array45783;_array45783.push_back(_v_42994_l);return j::array(std::move(_array45783));})():_v_42994_l));
return V{};
},1);
_v_42995_given=(j::truth(_v_42991_timed.get())?([&]()->V{V _callee45784=_v_42988_list.get();return j::call(_callee45784,j::Args{V(0.0)});})():_v_42988_list.get());
if(j::truth(j::unary("!",([&]()->V{V _receiver45785=j::builtin("Array");V _method45786=this->_literals[8];V _method=j::get(_receiver45785,_method45786);j::Args _params45787=j::Args{_v_42995_given};return j::call(_method,_params45787,_receiver45785);})()))){(void)(([&]()->V{V _callee45790=this->_v_42449_fail.get();return j::call(_callee45790,j::Args{([&]()->V{std::u16string _text45788;_text45788+=u"lines() takes a list of points, each [x, y, z], a list of such lists, or a function of t that gives one, not ";_text45788+=j::string(([&]()->V{V _callee45789=this->_v_42462_shown.get();return j::call(_callee45789,j::Args{_v_42995_given});})());_text45788+=u"";_text45788+=j::string((j::truth(_v_42991_timed.get())?this->_literals[103]:this->_literals[22]));_text45788+=u"";return V(std::move(_text45788));})()});})());
}
_v_42996_first=([&]()->V{V _callee45791=_v_42992_paths.get();return j::call(_callee45791,j::Args{_v_42995_given});})();
(void)(([&]()->V{V _receiver45803=_v_42996_first;V _method45804=this->_literals[63];V _method=j::get(_receiver45803,_method45804);j::Args _params45805=j::Args{j::function([=](const j::Args &_args_fn42997,const V &_receiver_fn42997,const V &_self_fn42997) mutable ->V{
V _v_42998_p;
j::Cell _v_42999_i;
_v_42998_p=_args_fn42997[0];
_v_42999_i.get()=_args_fn42997[1];
{
if(j::truth(j::unary("!",([&]()->V{V _receiver45792=j::builtin("Array");V _method45793=this->_literals[8];V _method=j::get(_receiver45792,_method45793);j::Args _params45794=j::Args{_v_42998_p};return j::call(_method,_params45794,_receiver45792);})()))){(void)(([&]()->V{V _callee45797=this->_v_42449_fail.get();return j::call(_callee45797,j::Args{([&]()->V{std::u16string _text45795;_text45795+=u"lines' path ";_text45795+=j::string(_v_42999_i.get());_text45795+=u" takes a list of points, each [x, y, z], not ";_text45795+=j::string(([&]()->V{V _callee45796=this->_v_42462_shown.get();return j::call(_callee45796,j::Args{_v_42998_p});})());_text45795+=u"";return V(std::move(_text45795));})()});})());
}
(void)(([&]()->V{V _receiver45800=_v_42998_p;V _method45801=this->_literals[63];V _method=j::get(_receiver45800,_method45801);j::Args _params45802=j::Args{j::function([=](const j::Args &_args_fn43000,const V &_receiver_fn43000,const V &_self_fn43000) mutable ->V{
V _v_43001_q;
V _v_43002_j;
_v_43001_q=_args_fn43000[0];
_v_43002_j=_args_fn43000[1];
return ([&]()->V{V _callee45799=this->_v_42482_vec3.get();return j::call(_callee45799,j::Args{_v_43001_q,([&]()->V{std::u16string _text45798;_text45798+=u"lines' path ";_text45798+=j::string(_v_42999_i.get());_text45798+=u", point ";_text45798+=j::string(_v_43002_j);_text45798+=u",";_text45798+=j::string((j::truth(_v_42991_timed.get())?this->_literals[111]:this->_literals[22]));_text45798+=u"";return V(std::move(_text45798));})()});})();
return V{};
},2)};return j::call(_method,_params45802,_receiver45800);})());

}

return V{};
},2)};return j::call(_method,_params45805,_receiver45803);})());
if(j::truth(([&]()->V{V _logical45806=([&]()->V{V _lhs45807=j::get(_v_42989_o,this->_literals[96]);V _rhs45808=j::builtin("undefined");return V(!j::equal(_lhs45807,_rhs45808,true));})();return j::truth(_logical45806)?([&]()->V{V _logical45809=([&]()->V{V _logical45810=([&]()->V{V _lhs45811=j::unary("typeof",j::get(_v_42989_o,this->_literals[96]));V _rhs45812=this->_literals[11];return V(!j::equal(_lhs45811,_rhs45812,true));})();return !j::truth(_logical45810)?([&]()->V{V _lhs45813=j::get(j::get(_v_42989_o,this->_literals[96]),this->_literals[9]);V _rhs45814=V(1.0);return V(!j::equal(_lhs45813,_rhs45814,true));})():_logical45810;})();return !j::truth(_logical45809)?([&]()->V{V _lhs45815=j::get(_v_42989_o,this->_literals[96]);V _rhs45816=this->_literals[104];return V(j::equal(_lhs45815,_rhs45816,true));})():_logical45809;})():_logical45806;})())){(void)(([&]()->V{V _callee45819=this->_v_42449_fail.get();return j::call(_callee45819,j::Args{([&]()->V{std::u16string _text45817;_text45817+=u"lines' char takes one character that isn't a space, such as \"*\", not ";_text45817+=j::string(([&]()->V{V _callee45818=this->_v_42462_shown.get();return j::call(_callee45818,j::Args{j::get(_v_42989_o,this->_literals[96])});})());_text45817+=u"";return V(std::move(_text45817));})()});})());
}
if(j::truth(([&]()->V{V _logical45820=([&]()->V{V _lhs45821=j::get(_v_42989_o,this->_literals[56]);V _rhs45822=j::builtin("undefined");return V(!j::equal(_lhs45821,_rhs45822,true));})();return j::truth(_logical45820)?([&]()->V{V _lhs45823=j::unary("typeof",j::get(_v_42989_o,this->_literals[56]));V _rhs45824=this->_literals[28];return V(!j::equal(_lhs45823,_rhs45824,true));})():_logical45820;})())){(void)(([&]()->V{V _callee45827=this->_v_42449_fail.get();return j::call(_callee45827,j::Args{([&]()->V{std::u16string _text45825;_text45825+=u"lines' closed takes true or false, not ";_text45825+=j::string(([&]()->V{V _callee45826=this->_v_42462_shown.get();return j::call(_callee45826,j::Args{j::get(_v_42989_o,this->_literals[56])});})());_text45825+=u"";return V(std::move(_text45825));})()});})());
}
_v_43003_far.get()=j::function([=](const j::Args &_args_fn43004,const V &_receiver_fn43004,const V &_self_fn43004) mutable ->V{
V _v_43005_l;
_v_43005_l=_args_fn43004[0];
{
V _v_43006_r;
_v_43006_r=V(0.0);
{for(const auto &_item45828:j::elements(_v_43005_l)){V _v_43007_p;
_v_43007_p=_item45828;
if(j::truth(([&]()->V{V _receiver45829=j::builtin("Array");V _method45830=this->_literals[8];V _method=j::get(_receiver45829,_method45830);j::Args _params45831=j::Args{_v_43007_p};return j::call(_method,_params45831,_receiver45829);})())){{for(const auto &_item45832:j::elements(_v_43007_p)){V _v_43008_q;
_v_43008_q=_item45832;
if(j::truth(([&]()->V{V _receiver45833=j::builtin("Array");V _method45834=this->_literals[8];V _method=j::get(_receiver45833,_method45834);j::Args _params45835=j::Args{_v_43008_q};return j::call(_method,_params45835,_receiver45833);})())){(void)((_v_43006_r=([&]()->V{V _receiver45843=j::builtin("Math");V _method45844=this->_literals[73];V _method=j::get(_receiver45843,_method45844);j::Args _params45845=j::Args{_v_43006_r,([&]()->V{V _logical45837=([&]()->V{V _number45838=j::get(_v_43008_q,V(0.0));V _number45839=j::get(_v_43008_q,V(1.0));V _number45840=j::get(_v_43008_q,V(2.0));return V(std::hypot(j::number(_number45838),j::number(_number45839),j::number(_number45840)));})();return !j::truth(_logical45837)?V(0.0):_logical45837;})()};return j::call(_method,_params45845,_receiver45843);})()));
}
}}
}
}}
return _v_43006_r;

}

return V{};
},1);
_v_43009_still.get()=([&]()->V{V _callee45846=_v_43003_far.get();return j::call(_callee45846,j::Args{_v_42996_first});})();
_v_43010_fn.get()=(j::truth(_v_42991_timed.get())?j::function([=](const j::Args &_args_fn43011,const V &_receiver_fn43011,const V &_self_fn43011) mutable ->V{
V _v_43012_t;
_v_43012_t=_args_fn43011[0];
return ([&]()->V{V _callee45848=_v_42992_paths.get();return j::call(_callee45848,j::Args{([&]()->V{V _callee45847=_v_42988_list.get();return j::call(_callee45847,j::Args{_v_43012_t});})()});})();
return V{};
},1):V::null());
_v_43013_fixed=(j::truth(_v_43010_fn.get())?V::null():([&]()->V{V _receiver45855=_v_42996_first;V _method45856=this->_literals[14];V _method=j::get(_receiver45855,_method45856);j::Args _params45857=j::Args{j::function([=](const j::Args &_args_fn43014,const V &_receiver_fn43014,const V &_self_fn43014) mutable ->V{
V _v_43015_p;
_v_43015_p=_args_fn43014[0];
return ([&]()->V{V _receiver45852=j::builtin("Float32Array");V _method45853=this->_literals[107];V _method=j::get(_receiver45852,_method45853);j::Args _params45854=j::Args{([&]()->V{V _receiver45849=_v_43015_p;V _method45850=this->_literals[106];V _method=j::get(_receiver45849,_method45850);j::Args _params45851=j::Args{};return j::call(_method,_params45851,_receiver45849);})()};return j::call(_method,_params45854,_receiver45852);})();
return V{};
},1)};return j::call(_method,_params45857,_receiver45855);})());
return ([&]()->V{V _callee45876=this->_v_42613_shape.get();return j::call(_callee45876,j::Args{([&]()->V{V _obj45858=j::object();V _spread45859=_v_42990_b;for(const auto &_key:j::keys(_spread45859))j::put(_obj45858,_key,j::get(_spread45859,_key));V _spread45860=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45860))j::put(_obj45858,_key,j::get(_spread45860,_key));j::put(_obj45858,this->_literals[79],(j::truth(_v_43010_fn.get())?j::function([=](const j::Args &_args_fn43016,const V &_receiver_fn43016,const V &_self_fn43016) mutable ->V{
V _v_43017_t;
_v_43017_t=_args_fn43016[0];
return ([&]()->V{V _callee45862=_v_43003_far.get();return j::call(_callee45862,j::Args{([&]()->V{V _callee45861=_v_43010_fn.get();return j::call(_callee45861,j::Args{_v_43017_t});})()});})();
return V{};
},1):j::function([=](const j::Args &_args_fn43018,const V &_receiver_fn43018,const V &_self_fn43018) mutable ->V{
return _v_43009_still.get();
return V{};
},0)));j::put(_obj45858,this->_literals[112],([&]()->V{V _obj45863=j::object();j::put(_obj45863,this->_literals[113],([&]()->V{V _logical45864=_v_43010_fn.get();return j::nullish(_logical45864)?_v_43013_fixed:_logical45864;})());j::put(_obj45863,this->_literals[56],([&]()->V{V _logical45865=j::get(_v_42989_o,this->_literals[56]);return j::nullish(_logical45865)?V(false):_logical45865;})());j::put(_obj45863,this->_literals[96],(j::truth(([&]()->V{V _lhs45866=j::get(_v_42989_o,this->_literals[96]);V _rhs45867=j::builtin("undefined");return V(j::equal(_lhs45866,_rhs45867,true));})())?V(0.0):([&]()->V{V _callee45868=this->_v_42446_code.get();return j::call(_callee45868,j::Args{j::get(_v_42989_o,this->_literals[96])});})()));return _obj45863;})());j::put(_obj45858,this->_literals[35],_v_42991_timed.get());j::put(_obj45858,this->_literals[43],([&]()->V{V _logical45869=_v_43013_fixed;return j::truth(_logical45869)?([&]()->V{V _receiver45870=([&]()->V{V _receiver45873=_v_43013_fixed;V _method45874=this->_literals[14];V _method=j::get(_receiver45873,_method45874);j::Args _params45875=j::Args{this->_v_42624_digest.get()};return j::call(_method,_params45875,_receiver45873);})();V _method45871=this->_literals[46];V _method=j::get(_receiver45870,_method45871);j::Args _params45872=j::Args{this->_literals[114]};return j::call(_method,_params45872,_receiver45870);})():_logical45869;})());return _obj45858;})()});})();

}

return V{};
},1);
this->_v_43019_group.get()=j::function([=](const j::Args &_args_fn43020,const V &_receiver_fn43020,const V &_self_fn43020) mutable ->V{
V _v_43021_shapes;
V _v_43022_o;
_v_43021_shapes=_args_fn43020[0];
V _default45877=_args_fn43020[1];if(_default45877.kind==V::Undefined||_default45877.kind==V::Hole)_default45877=([&]()->V{V _obj45878=j::object();return _obj45878;})();
_v_43022_o=_default45877;
{
j::Cell _v_43023_b;
j::Cell _v_43024_children;
V _v_43028_reach;
_v_43023_b.get()=([&]()->V{V _callee45880=this->_v_42598_base.get();return j::call(_callee45880,j::Args{this->_literals[115],_v_43022_o,([&]()->V{j::Args _array45879;_array45879.push_back(this->_literals[116]);return j::array(std::move(_array45879));})(),V(false)});})();
if(j::truth(j::unary("!",([&]()->V{V _receiver45881=j::builtin("Array");V _method45882=this->_literals[8];V _method=j::get(_receiver45881,_method45882);j::Args _params45883=j::Args{_v_43021_shapes};return j::call(_method,_params45883,_receiver45881);})()))){(void)(([&]()->V{V _callee45886=this->_v_42449_fail.get();return j::call(_callee45886,j::Args{([&]()->V{std::u16string _text45884;_text45884+=u"group() takes a list of shapes, such as [sphere(), cube({ at: [2, 0, 0] })], not ";_text45884+=j::string(([&]()->V{V _callee45885=this->_v_42462_shown.get();return j::call(_callee45885,j::Args{_v_43021_shapes});})());_text45884+=u"";return V(std::move(_text45884));})()});})());
}
if(j::truth(([&]()->V{V _logical45887=([&]()->V{V _lhs45888=j::get(_v_43022_o,this->_literals[116]);V _rhs45889=j::builtin("undefined");return V(!j::equal(_lhs45888,_rhs45889,true));})();return j::truth(_logical45887)?([&]()->V{V _lhs45890=j::unary("typeof",j::get(_v_43022_o,this->_literals[116]));V _rhs45891=this->_literals[28];return V(!j::equal(_lhs45890,_rhs45891,true));})():_logical45887;})())){(void)(([&]()->V{V _callee45894=this->_v_42449_fail.get();return j::call(_callee45894,j::Args{([&]()->V{std::u16string _text45892;_text45892+=u"group's center takes true or false, not ";_text45892+=j::string(([&]()->V{V _callee45893=this->_v_42462_shown.get();return j::call(_callee45893,j::Args{j::get(_v_43022_o,this->_literals[116])});})());_text45892+=u"";return V(std::move(_text45892));})()});})());
}
_v_43024_children.get()=([&]()->V{V _receiver45898=_v_43021_shapes;V _method45899=this->_literals[14];V _method=j::get(_receiver45898,_method45899);j::Args _params45900=j::Args{j::function([=](const j::Args &_args_fn43025,const V &_receiver_fn43025,const V &_self_fn43025) mutable ->V{
V _v_43026_s;
_v_43026_s=_args_fn43025[0];
{
V _v_43027_c;
_v_43027_c=([&]()->V{V _callee45895=this->_v_42617_body.get();return j::call(_callee45895,j::Args{_v_43026_s,this->_literals[117]});})();
return (j::truth(([&]()->V{V _logical45896=j::get(_v_43023_b.get(),this->_literals[25]);return j::truth(_logical45896)?j::unary("!",j::get(_v_43027_c,this->_literals[25])):_logical45896;})())?([&]()->V{V _callee45897=this->_v_43061_paint.get();return j::call(_callee45897,j::Args{_v_43027_c,j::get(_v_43023_b.get(),this->_literals[25])});})():_v_43027_c);

}

return V{};
},1)};return j::call(_method,_params45900,_receiver45898);})();
if(j::truth(j::get(_v_43022_o,this->_literals[116]))){(void)((_v_43024_children.get()=([&]()->V{V _callee45902=this->_v_43036_centred.get();return j::call(_callee45902,j::Args{_v_43024_children.get()});})()));
}
_v_43028_reach=j::function([=](const j::Args &_args_fn43029,const V &_receiver_fn43029,const V &_self_fn43029) mutable ->V{
V _v_43030_t;
_v_43030_t=_args_fn43029[0];
{
V _v_43031_r;
_v_43031_r=V(0.0);
{for(const auto &_item45903:j::elements(_v_43024_children.get())){V _v_43032_c;
_v_43032_c=_item45903;
{
V _v_43033_at;
_v_43033_at=(j::truth(([&]()->V{V _lhs45904=j::unary("typeof",j::get(_v_43032_c,this->_literals[31]));V _rhs45905=this->_literals[0];return V(j::equal(_lhs45904,_rhs45905,true));})())?([&]()->V{V _receiver45906=_v_43032_c;V _method45907=this->_literals[31];V _method=j::get(_receiver45906,_method45907);j::Args _params45908=j::Args{_v_43030_t};return j::call(_method,_params45908,_receiver45906);})():j::get(_v_43032_c,this->_literals[31]));
if(j::truth(([&]()->V{V _receiver45909=j::builtin("Array");V _method45910=this->_literals[8];V _method=j::get(_receiver45909,_method45910);j::Args _params45911=j::Args{_v_43033_at};return j::call(_method,_params45911,_receiver45909);})())){(void)((_v_43031_r=([&]()->V{V _receiver45926=j::builtin("Math");V _method45927=this->_literals[73];V _method=j::get(_receiver45926,_method45927);j::Args _params45928=j::Args{_v_43031_r,([&]()->V{V _lhs45913=([&]()->V{V _logical45915=([&]()->V{V _number45916=j::get(_v_43033_at,V(0.0));V _number45917=j::get(_v_43033_at,V(1.0));V _number45918=j::get(_v_43033_at,V(2.0));return V(std::hypot(j::number(_number45916),j::number(_number45917),j::number(_number45918)));})();return !j::truth(_logical45915)?V(0.0):_logical45915;})();V _rhs45914=([&]()->V{V _lhs45919=([&]()->V{V _receiver45921=_v_43032_c;V _method45922=this->_literals[79];V _method=j::get(_receiver45921,_method45922);j::Args _params45923=j::Args{_v_43030_t};return j::call(_method,_params45923,_receiver45921);})();V _rhs45920=j::get(_v_43032_c,this->_literals[33]);return V(j::number(_lhs45919)*j::number(_rhs45920));})();return j::binary("+",_lhs45913,_rhs45914);})()};return j::call(_method,_params45928,_receiver45926);})()));
}

}
}}
return _v_43031_r;

}

return V{};
},1);
return ([&]()->V{V _callee45935=this->_v_42613_shape.get();return j::call(_callee45935,j::Args{([&]()->V{V _obj45929=j::object();V _spread45930=_v_43023_b.get();for(const auto &_key:j::keys(_spread45930))j::put(_obj45929,_key,j::get(_spread45930,_key));V _spread45931=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread45931))j::put(_obj45929,_key,j::get(_spread45931,_key));j::put(_obj45929,this->_literals[79],_v_43028_reach);j::put(_obj45929,this->_literals[44],_v_43024_children.get());j::put(_obj45929,this->_literals[35],([&]()->V{V _receiver45932=_v_43024_children.get();V _method45933=this->_literals[118];V _method=j::get(_receiver45932,_method45933);j::Args _params45934=j::Args{j::function([=](const j::Args &_args_fn43034,const V &_receiver_fn43034,const V &_self_fn43034) mutable ->V{
V _v_43035_c;
_v_43035_c=_args_fn43034[0];
return j::get(_v_43035_c,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params45934,_receiver45932);})());j::put(_obj45929,this->_literals[43],this->_literals[22]);return _obj45929;})()});})();

}

return V{};
},1);
this->_v_43036_centred.get()=j::function([=](const j::Args &_args_fn43037,const V &_receiver_fn43037,const V &_self_fn43037) mutable ->V{
V _v_43038_children;
_v_43038_children=_args_fn43037[0];
{
V _v_43039_pts;
V _v_43040_lo;
j::Cell _v_43041_hi;
j::Cell _v_43045_c;
_v_43039_pts=([&]()->V{V _callee45937=this->_v_43348_corners.get();return j::call(_callee45937,j::Args{([&]()->V{V _obj45936=j::object();j::put(_obj45936,this->_literals[44],_v_43038_children);return _obj45936;})(),V(0.0),j::builtin("undefined"),j::builtin("undefined")});})();
if(j::truth(j::unary("!",j::get(_v_43039_pts,this->_literals[9])))){return _v_43038_children;
}
_v_43040_lo=([&]()->V{j::Args _array45938;_array45938.push_back(j::builtin("Infinity"));_array45938.push_back(j::builtin("Infinity"));_array45938.push_back(j::builtin("Infinity"));return j::array(std::move(_array45938));})();
_v_43041_hi.get()=([&]()->V{j::Args _array45939;_array45939.push_back(j::unary("-",j::builtin("Infinity")));_array45939.push_back(j::unary("-",j::builtin("Infinity")));_array45939.push_back(j::unary("-",j::builtin("Infinity")));return j::array(std::move(_array45939));})();
{V _v_43042_i;
_v_43042_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs45940=_v_43042_i;V _rhs45941=j::get(_v_43039_pts,this->_literals[9]);return j::binary("<",_lhs45940,_rhs45941);})());(void)((_v_43042_i=j::binary("+",_v_43042_i,V(3.0))))){{V _v_43043_k;
_v_43043_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs45943=_v_43043_k;V _rhs45944=V(3.0);return j::binary("<",_lhs45943,_rhs45944);})());(void)(j::increment(_v_43043_k,1,false))){
V _v_43044_v;
_v_43044_v=j::get(_v_43039_pts,([&]()->V{V _lhs45945=_v_43042_i;V _rhs45946=_v_43043_k;return j::binary("+",_lhs45945,_rhs45946);})());
if(j::truth(([&]()->V{V _receiver45947=j::builtin("Number");V _method45948=this->_literals[6];V _method=j::get(_receiver45947,_method45948);j::Args _params45949=j::Args{_v_43044_v};return j::call(_method,_params45949,_receiver45947);})())){(void)((([&]()->V{V _base45951=_v_43040_lo;V _key45952=_v_43043_k;V _assign45950=([&]()->V{V _receiver45955=j::builtin("Math");V _method45956=this->_literals[119];V _method=j::get(_receiver45955,_method45956);j::Args _params45957=j::Args{j::get(_v_43040_lo,_v_43043_k),_v_43044_v};return j::call(_method,_params45957,_receiver45955);})();return j::put(_base45951,_key45952,_assign45950);})(),([&]()->V{V _base45959=_v_43041_hi.get();V _key45960=_v_43043_k;V _assign45958=([&]()->V{V _receiver45963=j::builtin("Math");V _method45964=this->_literals[73];V _method=j::get(_receiver45963,_method45964);j::Args _params45965=j::Args{j::get(_v_43041_hi.get(),_v_43043_k),_v_43044_v};return j::call(_method,_params45965,_receiver45963);})();return j::put(_base45959,_key45960,_assign45958);})()));
}

}
}
}}
_v_43045_c.get()=([&]()->V{V _receiver45973=_v_43040_lo;V _method45974=this->_literals[14];V _method=j::get(_receiver45973,_method45974);j::Args _params45975=j::Args{j::function([=](const j::Args &_args_fn43046,const V &_receiver_fn43046,const V &_self_fn43046) mutable ->V{
V _v_43047_v;
V _v_43048_k;
_v_43047_v=_args_fn43046[0];
_v_43048_k=_args_fn43046[1];
return (j::truth(([&]()->V{V _receiver45966=j::builtin("Number");V _method45967=this->_literals[6];V _method=j::get(_receiver45966,_method45967);j::Args _params45968=j::Args{_v_43047_v};return j::call(_method,_params45968,_receiver45966);})())?([&]()->V{V _lhs45969=([&]()->V{V _lhs45971=_v_43047_v;V _rhs45972=j::get(_v_43041_hi.get(),_v_43048_k);return j::binary("+",_lhs45971,_rhs45972);})();V _rhs45970=V(2.0);return V(j::number(_lhs45969)/j::number(_rhs45970));})():V(0.0));
return V{};
},2)};return j::call(_method,_params45975,_receiver45973);})();
if(j::truth(([&]()->V{V _receiver45979=_v_43045_c.get();V _method45980=this->_literals[10];V _method=j::get(_receiver45979,_method45980);j::Args _params45981=j::Args{j::function([=](const j::Args &_args_fn43049,const V &_receiver_fn43049,const V &_self_fn43049) mutable ->V{
V _v_43050_v;
_v_43050_v=_args_fn43049[0];
return ([&]()->V{V _lhs45976=([&]()->V{V _number45978=_v_43050_v;return V(std::fabs(j::number(_number45978)));})();V _rhs45977=V(1e-9);return j::binary("<",_lhs45976,_rhs45977);})();
return V{};
},1)};return j::call(_method,_params45981,_receiver45979);})())){return _v_43038_children;
}
return ([&]()->V{V _receiver46020=_v_43038_children;V _method46021=this->_literals[14];V _method=j::get(_receiver46020,_method46021);j::Args _params46022=j::Args{j::function([=](const j::Args &_args_fn43051,const V &_receiver_fn43051,const V &_self_fn43051) mutable ->V{
V _v_43052_ch;
_v_43052_ch=_args_fn43051[0];
{
j::Cell _v_43053_at;
V _v_43054_moved;
V _v_43058_known;
_v_43053_at.get()=j::get(_v_43052_ch,this->_literals[31]);
if(j::truth(([&]()->V{V _lhs45982=j::unary("typeof",_v_43053_at.get());V _rhs45983=this->_literals[0];return V(!j::equal(_lhs45982,_rhs45983,true));})())){return ([&]()->V{V _obj45984=j::object();V _spread45985=_v_43052_ch;for(const auto &_key:j::keys(_spread45985))j::put(_obj45984,_key,j::get(_spread45985,_key));j::put(_obj45984,this->_literals[31],([&]()->V{j::Args _array45986;_array45986.push_back(([&]()->V{V _lhs45987=j::get(_v_43053_at.get(),V(0.0));V _rhs45988=j::get(_v_43045_c.get(),V(0.0));return V(j::number(_lhs45987)-j::number(_rhs45988));})());_array45986.push_back(([&]()->V{V _lhs45989=j::get(_v_43053_at.get(),V(1.0));V _rhs45990=j::get(_v_43045_c.get(),V(1.0));return V(j::number(_lhs45989)-j::number(_rhs45990));})());_array45986.push_back(([&]()->V{V _lhs45991=j::get(_v_43053_at.get(),V(2.0));V _rhs45992=j::get(_v_43045_c.get(),V(2.0));return V(j::number(_lhs45991)-j::number(_rhs45992));})());return j::array(std::move(_array45986));})());j::put(_obj45984,this->_literals[42],j::builtin("undefined"));return _obj45984;})();
}
_v_43054_moved=j::function([=](const j::Args &_args_fn43055,const V &_receiver_fn43055,const V &_self_fn43055) mutable ->V{
V _v_43056_t;
_v_43056_t=_args_fn43055[0];
{
V _v_43057_p;
_v_43057_p=([&]()->V{V _callee45993=_v_43053_at.get();return j::call(_callee45993,j::Args{_v_43056_t});})();
return ([&]()->V{j::Args _array45994;_array45994.push_back(([&]()->V{V _lhs45995=j::get(_v_43057_p,V(0.0));V _rhs45996=j::get(_v_43045_c.get(),V(0.0));return V(j::number(_lhs45995)-j::number(_rhs45996));})());_array45994.push_back(([&]()->V{V _lhs45997=j::get(_v_43057_p,V(1.0));V _rhs45998=j::get(_v_43045_c.get(),V(1.0));return V(j::number(_lhs45997)-j::number(_rhs45998));})());_array45994.push_back(([&]()->V{V _lhs45999=j::get(_v_43057_p,V(2.0));V _rhs46000=j::get(_v_43045_c.get(),V(2.0));return V(j::number(_lhs45999)-j::number(_rhs46000));})());return j::array(std::move(_array45994));})();

}

return V{};
},1);
_v_43058_known=([&]()->V{V _receiver46001=this->_v_42591_ORBITS.get();V _method46002=this->_literals[38];V _method=j::get(_receiver46001,_method46002);j::Args _params46003=j::Args{_v_43053_at.get()};return j::call(_method,_params46003,_receiver46001);})();
if(j::truth(_v_43058_known)){(void)(([&]()->V{V _receiver46015=this->_v_42591_ORBITS.get();V _method46016=this->_literals[37];V _method=j::get(_receiver46015,_method46016);j::Args _params46017=j::Args{_v_43054_moved,([&]()->V{V _obj46004=j::object();j::put(_obj46004,this->_literals[120],j::get(_v_43058_known,this->_literals[120]));j::put(_obj46004,this->_literals[42],([&]()->V{std::u16string _text46005;_text46005+=u"";_text46005+=j::string(j::get(_v_43058_known,this->_literals[42]));_text46005+=u" less ";_text46005+=j::string(([&]()->V{V _receiver46006=([&]()->V{V _receiver46012=_v_43045_c.get();V _method46013=this->_literals[14];V _method=j::get(_receiver46012,_method46013);j::Args _params46014=j::Args{j::function([=](const j::Args &_args_fn43059,const V &_receiver_fn43059,const V &_self_fn43059) mutable ->V{
V _v_43060_v;
_v_43060_v=_args_fn43059[0];
return ([&]()->V{V _receiver46009=_v_43060_v;V _method46010=this->_literals[121];V _method=j::get(_receiver46009,_method46010);j::Args _params46011=j::Args{V(6.0)};return j::call(_method,_params46011,_receiver46009);})();
return V{};
},1)};return j::call(_method,_params46014,_receiver46012);})();V _method46007=this->_literals[46];V _method=j::get(_receiver46006,_method46007);j::Args _params46008=j::Args{this->_literals[104]};return j::call(_method,_params46008,_receiver46006);})());_text46005+=u"";return V(std::move(_text46005));})());return _obj46004;})()};return j::call(_method,_params46017,_receiver46015);})());
}
return ([&]()->V{V _obj46018=j::object();V _spread46019=_v_43052_ch;for(const auto &_key:j::keys(_spread46019))j::put(_obj46018,_key,j::get(_spread46019,_key));j::put(_obj46018,this->_literals[31],_v_43054_moved);j::put(_obj46018,this->_literals[42],j::builtin("undefined"));return _obj46018;})();

}

return V{};
},1)};return j::call(_method,_params46022,_receiver46020);})();

}

return V{};
},1);
this->_v_43061_paint.get()=j::function([=](const j::Args &_args_fn43062,const V &_receiver_fn43062,const V &_self_fn43062) mutable ->V{
V _v_43063_b;
j::Cell _v_43064_color;
_v_43063_b=_args_fn43062[0];
_v_43064_color.get()=_args_fn43062[1];
{
return ([&]()->V{V _obj46023=j::object();V _spread46024=_v_43063_b;for(const auto &_key:j::keys(_spread46024))j::put(_obj46023,_key,j::get(_spread46024,_key));j::put(_obj46023,this->_literals[25],([&]()->V{V _logical46025=j::get(_v_43063_b,this->_literals[25]);return j::nullish(_logical46025)?_v_43064_color.get():_logical46025;})());j::put(_obj46023,this->_literals[44],([&]()->V{V _logical46026=j::get(_v_43063_b,this->_literals[44]);return j::truth(_logical46026)?([&]()->V{V _receiver46028=j::get(_v_43063_b,this->_literals[44]);V _method46029=this->_literals[14];V _method=j::get(_receiver46028,_method46029);j::Args _params46030=j::Args{j::function([=](const j::Args &_args_fn43065,const V &_receiver_fn43065,const V &_self_fn43065) mutable ->V{
V _v_43066_c;
_v_43066_c=_args_fn43065[0];
return ([&]()->V{V _callee46027=this->_v_43061_paint.get();return j::call(_callee46027,j::Args{_v_43066_c,_v_43064_color.get()});})();
return V{};
},1)};return j::call(_method,_params46030,_receiver46028);})():_logical46026;})());return _obj46023;})();

}

return V{};
},2);
this->_v_43067_mesh.get()=j::function([=](const j::Args &_args_fn43068,const V &_receiver_fn43068,const V &_self_fn43068) mutable ->V{
V _v_43069_vertices;
V _v_43070_faces;
V _v_43071_o;
_v_43069_vertices=_args_fn43068[0];
_v_43070_faces=_args_fn43068[1];
V _default46031=_args_fn43068[2];if(_default46031.kind==V::Undefined||_default46031.kind==V::Hole)_default46031=([&]()->V{V _obj46032=j::object();return _obj46032;})();
_v_43071_o=_default46031;
{
V _v_43072_b;
j::Cell _v_43073_vs;
j::Cell _v_43082_built;
j::Cell _v_43083_far;
_v_43072_b=([&]()->V{V _callee46034=this->_v_42598_base.get();return j::call(_callee46034,j::Args{this->_literals[80],_v_43071_o,([&]()->V{j::Args _array46033;return j::array(std::move(_array46033));})()});})();
if(j::truth(([&]()->V{V _lhs46035=j::get(_v_43071_o,this->_literals[23]);V _rhs46036=j::builtin("undefined");return V(!j::equal(_lhs46035,_rhs46036,true));})())){(void)(([&]()->V{V _callee46037=this->_v_42449_fail.get();return j::call(_callee46037,j::Args{this->_literals[122]});})());
}
if(j::truth(([&]()->V{V _logical46038=j::unary("!",([&]()->V{V _receiver46039=j::builtin("Array");V _method46040=this->_literals[8];V _method=j::get(_receiver46039,_method46040);j::Args _params46041=j::Args{_v_43069_vertices};return j::call(_method,_params46041,_receiver46039);})());return !j::truth(_logical46038)?j::unary("!",j::get(_v_43069_vertices,this->_literals[9])):_logical46038;})())){(void)(([&]()->V{V _callee46044=this->_v_42449_fail.get();return j::call(_callee46044,j::Args{([&]()->V{std::u16string _text46042;_text46042+=u"mesh() takes a list of vertices, each [x, y, z], such as [[0, 1, 0], [1, -1, 0], [-1, -1, 0]], not ";_text46042+=j::string(([&]()->V{V _callee46043=this->_v_42462_shown.get();return j::call(_callee46043,j::Args{_v_43069_vertices});})());_text46042+=u"";return V(std::move(_text46042));})()});})());
}
_v_43073_vs.get()=([&]()->V{V _receiver46047=_v_43069_vertices;V _method46048=this->_literals[14];V _method=j::get(_receiver46047,_method46048);j::Args _params46049=j::Args{j::function([=](const j::Args &_args_fn43074,const V &_receiver_fn43074,const V &_self_fn43074) mutable ->V{
V _v_43075_v;
V _v_43076_i;
_v_43075_v=_args_fn43074[0];
_v_43076_i=_args_fn43074[1];
return ([&]()->V{V _callee46046=this->_v_42482_vec3.get();return j::call(_callee46046,j::Args{_v_43075_v,([&]()->V{std::u16string _text46045;_text46045+=u"mesh's vertex ";_text46045+=j::string(_v_43076_i);_text46045+=u"";return V(std::move(_text46045));})()});})();
return V{};
},2)};return j::call(_method,_params46049,_receiver46047);})();
if(j::truth(([&]()->V{V _logical46050=j::unary("!",([&]()->V{V _receiver46051=j::builtin("Array");V _method46052=this->_literals[8];V _method=j::get(_receiver46051,_method46052);j::Args _params46053=j::Args{_v_43070_faces};return j::call(_method,_params46053,_receiver46051);})());return !j::truth(_logical46050)?j::unary("!",j::get(_v_43070_faces,this->_literals[9])):_logical46050;})())){(void)(([&]()->V{V _callee46056=this->_v_42449_fail.get();return j::call(_callee46056,j::Args{([&]()->V{std::u16string _text46054;_text46054+=u"mesh() takes faces, each a list of three or more vertex indices going round it, such as [[0, 1, 2]], not ";_text46054+=j::string(([&]()->V{V _callee46055=this->_v_42462_shown.get();return j::call(_callee46055,j::Args{_v_43070_faces});})());_text46054+=u"";return V(std::move(_text46054));})()});})());
}
(void)(([&]()->V{V _receiver46081=_v_43070_faces;V _method46082=this->_literals[63];V _method=j::get(_receiver46081,_method46082);j::Args _params46083=j::Args{j::function([=](const j::Args &_args_fn43077,const V &_receiver_fn43077,const V &_self_fn43077) mutable ->V{
V _v_43078_f;
V _v_43079_i;
_v_43078_f=_args_fn43077[0];
_v_43079_i=_args_fn43077[1];
{
if(j::truth(([&]()->V{V _logical46057=([&]()->V{V _logical46058=j::unary("!",([&]()->V{V _receiver46059=j::builtin("Array");V _method46060=this->_literals[8];V _method=j::get(_receiver46059,_method46060);j::Args _params46061=j::Args{_v_43078_f};return j::call(_method,_params46061,_receiver46059);})());return !j::truth(_logical46058)?([&]()->V{V _lhs46062=j::get(_v_43078_f,this->_literals[9]);V _rhs46063=V(3.0);return j::binary("<",_lhs46062,_rhs46063);})():_logical46058;})();return !j::truth(_logical46057)?j::unary("!",([&]()->V{V _receiver46073=_v_43078_f;V _method46074=this->_literals[10];V _method=j::get(_receiver46073,_method46074);j::Args _params46075=j::Args{j::function([=](const j::Args &_args_fn43080,const V &_receiver_fn43080,const V &_self_fn43080) mutable ->V{
V _v_43081_k;
_v_43081_k=_args_fn43080[0];
return ([&]()->V{V _logical46064=([&]()->V{V _logical46065=([&]()->V{V _receiver46066=j::builtin("Number");V _method46067=this->_literals[7];V _method=j::get(_receiver46066,_method46067);j::Args _params46068=j::Args{_v_43081_k};return j::call(_method,_params46068,_receiver46066);})();return j::truth(_logical46065)?([&]()->V{V _lhs46069=_v_43081_k;V _rhs46070=V(0.0);return j::binary(">=",_lhs46069,_rhs46070);})():_logical46065;})();return j::truth(_logical46064)?([&]()->V{V _lhs46071=_v_43081_k;V _rhs46072=j::get(_v_43073_vs.get(),this->_literals[9]);return j::binary("<",_lhs46071,_rhs46072);})():_logical46064;})();
return V{};
},1)};return j::call(_method,_params46075,_receiver46073);})()):_logical46057;})())){(void)(([&]()->V{V _callee46080=this->_v_42449_fail.get();return j::call(_callee46080,j::Args{([&]()->V{std::u16string _text46076;_text46076+=u"mesh's face ";_text46076+=j::string(_v_43079_i);_text46076+=u" takes three or more whole numbers from 0 to ";_text46076+=j::string(([&]()->V{V _lhs46077=j::get(_v_43073_vs.get(),this->_literals[9]);V _rhs46078=V(1.0);return V(j::number(_lhs46077)-j::number(_rhs46078));})());_text46076+=u", indices into its vertices, not ";_text46076+=j::string(([&]()->V{V _callee46079=this->_v_42462_shown.get();return j::call(_callee46079,j::Args{_v_43078_f});})());_text46076+=u"";return V(std::move(_text46076));})()});})());
}

}

return V{};
},2)};return j::call(_method,_params46083,_receiver46081);})());
_v_43082_built.get()=([&]()->V{V _callee46084=this->_v_42837_flat.get();return j::call(_callee46084,j::Args{_v_43073_vs.get(),_v_43070_faces});})();
_v_43083_far.get()=V(0.0);
{for(const auto &_item46085:j::elements(_v_43073_vs.get())){V _v_43084_v;
_v_43084_v=_item46085;
(void)((_v_43083_far.get()=([&]()->V{V _receiver46092=j::builtin("Math");V _method46093=this->_literals[73];V _method=j::get(_receiver46092,_method46093);j::Args _params46094=j::Args{_v_43083_far.get(),([&]()->V{V _number46087=j::get(_v_43084_v,V(0.0));V _number46088=j::get(_v_43084_v,V(1.0));V _number46089=j::get(_v_43084_v,V(2.0));return V(std::hypot(j::number(_number46087),j::number(_number46088),j::number(_number46089)));})()};return j::call(_method,_params46094,_receiver46092);})()));
}}
return ([&]()->V{V _callee46100=this->_v_42613_shape.get();return j::call(_callee46100,j::Args{([&]()->V{V _obj46095=j::object();V _spread46096=_v_43072_b;for(const auto &_key:j::keys(_spread46096))j::put(_obj46095,_key,j::get(_spread46096,_key));V _spread46097=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread46097))j::put(_obj46095,_key,j::get(_spread46097,_key));j::put(_obj46095,this->_literals[79],j::function([=](const j::Args &_args_fn43085,const V &_receiver_fn43085,const V &_self_fn43085) mutable ->V{
return _v_43083_far.get();
return V{};
},0));j::put(_obj46095,this->_literals[80],j::function([=](const j::Args &_args_fn43086,const V &_receiver_fn43086,const V &_self_fn43086) mutable ->V{
return _v_43082_built.get();
return V{};
},0));j::put(_obj46095,this->_literals[43],([&]()->V{std::u16string _text46098;_text46098+=u"";_text46098+=j::string(_v_43083_far.get());_text46098+=u",";_text46098+=j::string(([&]()->V{V _callee46099=this->_v_42624_digest.get();return j::call(_callee46099,j::Args{j::get(_v_43082_built.get(),this->_literals[52])});})());_text46098+=u"";return V(std::move(_text46098));})());return _obj46095;})()});})();

}

return V{};
},2);
this->_v_43087_parametric.get()=j::function([=](const j::Args &_args_fn43088,const V &_receiver_fn43088,const V &_self_fn43088) mutable ->V{
j::Cell _v_43089_fn;
V _v_43090_o;
_v_43089_fn.get()=_args_fn43088[0];
V _default46101=_args_fn43088[1];if(_default46101.kind==V::Undefined||_default46101.kind==V::Hole)_default46101=([&]()->V{V _obj46102=j::object();return _obj46102;})();
_v_43090_o=_default46101;
{
V _v_43091_b;
j::Cell _v_43092_timed;
j::Cell _v_43093_seg;
V _v_43094_ok;
j::Cell _v_43097_probe;
j::Cell _v_43116_at0;
j::Cell _v_43117_cache;
j::Cell _v_43118_count;
_v_43091_b=([&]()->V{V _callee46104=this->_v_42598_base.get();return j::call(_callee46104,j::Args{this->_literals[123],_v_43090_o,([&]()->V{j::Args _array46103;_array46103.push_back(this->_literals[124]);return j::array(std::move(_array46103));})()});})();
if(j::truth(([&]()->V{V _lhs46105=j::unary("typeof",_v_43089_fn.get());V _rhs46106=this->_literals[0];return V(!j::equal(_lhs46105,_rhs46106,true));})())){(void)(([&]()->V{V _callee46109=this->_v_42449_fail.get();return j::call(_callee46109,j::Args{([&]()->V{std::u16string _text46107;_text46107+=u"parametric() takes a function (u, v) => [x, y, z], u and v each 0 to 1, or (u, v, t) => [x, y, z] for a surface that moves, not ";_text46107+=j::string(([&]()->V{V _callee46108=this->_v_42462_shown.get();return j::call(_callee46108,j::Args{_v_43089_fn.get()});})());_text46107+=u"";return V(std::move(_text46107));})()});})());
}
(void)(([&]()->V{V _callee46111=this->_v_42482_vec3.get();return j::call(_callee46111,j::Args{([&]()->V{V _callee46110=_v_43089_fn.get();return j::call(_callee46110,j::Args{V(0.0),V(0.0),V(0.0)});})(),this->_literals[125]});})());
_v_43092_timed.get()=([&]()->V{V _lhs46112=j::get(_v_43089_fn.get(),this->_literals[9]);V _rhs46113=V(3.0);return j::binary(">=",_lhs46112,_rhs46113);})();
_v_43093_seg.get()=j::get(_v_43090_o,this->_literals[124]);
_v_43094_ok=j::function([=](const j::Args &_args_fn43095,const V &_receiver_fn43095,const V &_self_fn43095) mutable ->V{
V _v_43096_n;
_v_43096_n=_args_fn43095[0];
return ([&]()->V{V _logical46114=([&]()->V{V _logical46115=([&]()->V{V _receiver46116=j::builtin("Number");V _method46117=this->_literals[7];V _method=j::get(_receiver46116,_method46117);j::Args _params46118=j::Args{_v_43096_n};return j::call(_method,_params46118,_receiver46116);})();return j::truth(_logical46115)?([&]()->V{V _lhs46119=_v_43096_n;V _rhs46120=V(1.0);return j::binary(">=",_lhs46119,_rhs46120);})():_logical46115;})();return j::truth(_logical46114)?([&]()->V{V _lhs46121=_v_43096_n;V _rhs46122=V(512.0);return j::binary("<=",_lhs46121,_rhs46122);})():_logical46114;})();
return V{};
},1);
if(j::truth(([&]()->V{V _logical46123=([&]()->V{V _lhs46124=_v_43093_seg.get();V _rhs46125=j::builtin("undefined");return V(!j::equal(_lhs46124,_rhs46125,true));})();return j::truth(_logical46123)?j::unary("!",([&]()->V{V _logical46126=([&]()->V{V _callee46127=_v_43094_ok;return j::call(_callee46127,j::Args{_v_43093_seg.get()});})();return !j::truth(_logical46126)?([&]()->V{V _logical46128=([&]()->V{V _logical46129=([&]()->V{V _receiver46130=j::builtin("Array");V _method46131=this->_literals[8];V _method=j::get(_receiver46130,_method46131);j::Args _params46132=j::Args{_v_43093_seg.get()};return j::call(_method,_params46132,_receiver46130);})();return j::truth(_logical46129)?([&]()->V{V _lhs46133=j::get(_v_43093_seg.get(),this->_literals[9]);V _rhs46134=V(2.0);return V(j::equal(_lhs46133,_rhs46134,true));})():_logical46129;})();return j::truth(_logical46128)?([&]()->V{V _receiver46135=_v_43093_seg.get();V _method46136=this->_literals[10];V _method=j::get(_receiver46135,_method46136);j::Args _params46137=j::Args{_v_43094_ok};return j::call(_method,_params46137,_receiver46135);})():_logical46128;})():_logical46126;})()):_logical46123;})())){(void)(([&]()->V{V _callee46140=this->_v_42449_fail.get();return j::call(_callee46140,j::Args{([&]()->V{std::u16string _text46138;_text46138+=u"parametric's segments takes a whole number from 1 to 512, or [u, v] of them, not ";_text46138+=j::string(([&]()->V{V _callee46139=this->_v_42462_shown.get();return j::call(_callee46139,j::Args{_v_43093_seg.get()});})());_text46138+=u"";return V(std::move(_text46138));})()});})());
}
_v_43097_probe.get()=j::function([=](const j::Args &_args_fn43098,const V &_receiver_fn43098,const V &_self_fn43098) mutable ->V{
V _v_43099_t;
_v_43099_t=_args_fn43098[0];
{
V _v_43100_n;
V _v_43101_p;
V _v_43104_lu;
V _v_43105_lv;
V _v_43106_far;
V _v_43107_d;
_v_43100_n=V(32.0);
_v_43101_p=([&]()->V{j::Args _array46141;return j::array(std::move(_array46141));})();
{V _v_43102_j;
_v_43102_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs46142=_v_43102_j;V _rhs46143=_v_43100_n;return j::binary("<=",_lhs46142,_rhs46143);})());(void)(j::increment(_v_43102_j,1,false))){{V _v_43103_i;
_v_43103_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs46144=_v_43103_i;V _rhs46145=_v_43100_n;return j::binary("<=",_lhs46144,_rhs46145);})());(void)(j::increment(_v_43103_i,1,false))){(void)(([&]()->V{V _receiver46152=_v_43101_p;V _method46153=this->_literals[68];V _method=j::get(_receiver46152,_method46153);j::Args _params46154=j::Args{([&]()->V{V _logical46146=([&]()->V{V _callee46151=_v_43089_fn.get();return j::call(_callee46151,j::Args{([&]()->V{V _lhs46147=_v_43103_i;V _rhs46148=_v_43100_n;return V(j::number(_lhs46147)/j::number(_rhs46148));})(),([&]()->V{V _lhs46149=_v_43102_j;V _rhs46150=_v_43100_n;return V(j::number(_lhs46149)/j::number(_rhs46150));})(),_v_43099_t});})();return j::nullish(_logical46146)?this->_v_42592_ORIGIN.get():_logical46146;})()};return j::call(_method,_params46154,_receiver46152);})());
}}
}}
_v_43104_lu=V(0.0);
_v_43105_lv=V(0.0);
_v_43106_far=V(0.0);
_v_43107_d=j::function([=](const j::Args &_args_fn43108,const V &_receiver_fn43108,const V &_self_fn43108) mutable ->V{
V _v_43109_a;
V _v_43110_c;
_v_43109_a=_args_fn43108[0];
_v_43110_c=_args_fn43108[1];
return ([&]()->V{V _logical46155=([&]()->V{V _number46162=([&]()->V{V _lhs46165=j::get(_v_43109_a,V(0.0));V _rhs46166=j::get(_v_43110_c,V(0.0));return V(j::number(_lhs46165)-j::number(_rhs46166));})();V _number46163=([&]()->V{V _lhs46167=j::get(_v_43109_a,V(1.0));V _rhs46168=j::get(_v_43110_c,V(1.0));return V(j::number(_lhs46167)-j::number(_rhs46168));})();V _number46164=([&]()->V{V _lhs46169=j::get(_v_43109_a,V(2.0));V _rhs46170=j::get(_v_43110_c,V(2.0));return V(j::number(_lhs46169)-j::number(_rhs46170));})();return V(std::hypot(j::number(_number46162),j::number(_number46163),j::number(_number46164)));})();return !j::truth(_logical46155)?V(0.0):_logical46155;})();
return V{};
},2);
{V _v_43111_k;
_v_43111_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs46171=_v_43111_k;V _rhs46172=_v_43100_n;return j::binary("<=",_lhs46171,_rhs46172);})());(void)(j::increment(_v_43111_k,1,false))){
V _v_43112_su;
V _v_43113_sv;
_v_43112_su=V(0.0);
_v_43113_sv=V(0.0);
{V _v_43114_i;
_v_43114_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs46173=_v_43114_i;V _rhs46174=_v_43100_n;return j::binary("<",_lhs46173,_rhs46174);})());(void)(j::increment(_v_43114_i,1,false))){(void)(((_v_43112_su=j::binary("+",_v_43112_su,([&]()->V{V _callee46190=_v_43107_d;return j::call(_callee46190,j::Args{j::get(_v_43101_p,([&]()->V{V _lhs46176=([&]()->V{V _lhs46178=_v_43111_k;V _rhs46179=([&]()->V{V _lhs46180=_v_43100_n;V _rhs46181=V(1.0);return j::binary("+",_lhs46180,_rhs46181);})();return V(j::number(_lhs46178)*j::number(_rhs46179));})();V _rhs46177=_v_43114_i;return j::binary("+",_lhs46176,_rhs46177);})()),j::get(_v_43101_p,([&]()->V{V _lhs46182=([&]()->V{V _lhs46184=([&]()->V{V _lhs46186=_v_43111_k;V _rhs46187=([&]()->V{V _lhs46188=_v_43100_n;V _rhs46189=V(1.0);return j::binary("+",_lhs46188,_rhs46189);})();return V(j::number(_lhs46186)*j::number(_rhs46187));})();V _rhs46185=_v_43114_i;return j::binary("+",_lhs46184,_rhs46185);})();V _rhs46183=V(1.0);return j::binary("+",_lhs46182,_rhs46183);})())});})())),(_v_43113_sv=j::binary("+",_v_43113_sv,([&]()->V{V _callee46206=_v_43107_d;return j::call(_callee46206,j::Args{j::get(_v_43101_p,([&]()->V{V _lhs46192=([&]()->V{V _lhs46194=_v_43114_i;V _rhs46195=([&]()->V{V _lhs46196=_v_43100_n;V _rhs46197=V(1.0);return j::binary("+",_lhs46196,_rhs46197);})();return V(j::number(_lhs46194)*j::number(_rhs46195));})();V _rhs46193=_v_43111_k;return j::binary("+",_lhs46192,_rhs46193);})()),j::get(_v_43101_p,([&]()->V{V _lhs46198=([&]()->V{V _lhs46200=([&]()->V{V _lhs46202=_v_43114_i;V _rhs46203=V(1.0);return j::binary("+",_lhs46202,_rhs46203);})();V _rhs46201=([&]()->V{V _lhs46204=_v_43100_n;V _rhs46205=V(1.0);return j::binary("+",_lhs46204,_rhs46205);})();return V(j::number(_lhs46200)*j::number(_rhs46201));})();V _rhs46199=_v_43111_k;return j::binary("+",_lhs46198,_rhs46199);})())});})()))));
}}
(void)(((_v_43104_lu=([&]()->V{V _receiver46210=j::builtin("Math");V _method46211=this->_literals[73];V _method=j::get(_receiver46210,_method46211);j::Args _params46212=j::Args{_v_43104_lu,_v_43112_su};return j::call(_method,_params46212,_receiver46210);})()),(_v_43105_lv=([&]()->V{V _receiver46216=j::builtin("Math");V _method46217=this->_literals[73];V _method=j::get(_receiver46216,_method46217);j::Args _params46218=j::Args{_v_43105_lv,_v_43113_sv};return j::call(_method,_params46218,_receiver46216);})())));

}
}
{for(const auto &_item46219:j::elements(_v_43101_p)){V _v_43115_q;
_v_43115_q=_item46219;
(void)((_v_43106_far=([&]()->V{V _receiver46227=j::builtin("Math");V _method46228=this->_literals[73];V _method=j::get(_receiver46227,_method46228);j::Args _params46229=j::Args{_v_43106_far,([&]()->V{V _logical46221=([&]()->V{V _number46222=j::get(_v_43115_q,V(0.0));V _number46223=j::get(_v_43115_q,V(1.0));V _number46224=j::get(_v_43115_q,V(2.0));return V(std::hypot(j::number(_number46222),j::number(_number46223),j::number(_number46224)));})();return !j::truth(_logical46221)?V(0.0):_logical46221;})()};return j::call(_method,_params46229,_receiver46227);})()));
}}
return ([&]()->V{V _obj46230=j::object();j::put(_obj46230,this->_literals[126],_v_43104_lu);j::put(_obj46230,this->_literals[127],_v_43105_lv);j::put(_obj46230,this->_literals[128],([&]()->V{V _lhs46231=_v_43106_far;V _rhs46232=V(1.02);return V(j::number(_lhs46231)*j::number(_rhs46232));})());return _obj46230;})();

}

return V{};
},1);
_v_43116_at0.get()=([&]()->V{V _callee46233=_v_43097_probe.get();return j::call(_callee46233,j::Args{V(0.0)});})();
_v_43117_cache.get()=([&]()->V{V _callee46234=j::builtin("Map");return j::construct(_callee46234,j::Args{});})();
_v_43118_count.get()=j::function([=](const j::Args &_args_fn43119,const V &_receiver_fn43119,const V &_self_fn43119) mutable ->V{
V _v_43120_len;
V _v_43121_unit;
_v_43120_len=_args_fn43119[0];
_v_43121_unit=_args_fn43119[1];
return ([&]()->V{V _receiver46257=j::builtin("Math");V _method46258=this->_literals[119];V _method=j::get(_receiver46257,_method46258);j::Args _params46259=j::Args{V(256.0),([&]()->V{V _receiver46252=j::builtin("Math");V _method46253=this->_literals[73];V _method=j::get(_receiver46252,_method46253);j::Args _params46254=j::Args{V(8.0),([&]()->V{V _lhs46235=V(4.0);V _rhs46236=([&]()->V{V _number46243=([&]()->V{V _lhs46244=([&]()->V{V _lhs46246=([&]()->V{V _lhs46248=_v_43120_len;V _rhs46249=_v_43121_unit;return V(j::number(_lhs46248)*j::number(_rhs46249));})();V _rhs46247=V(1.5);return V(j::number(_lhs46246)/j::number(_rhs46247));})();V _rhs46245=V(4.0);return V(j::number(_lhs46244)/j::number(_rhs46245));})();return V(std::ceil(j::number(_number46243)));})();return V(j::number(_lhs46235)*j::number(_rhs46236));})()};return j::call(_method,_params46254,_receiver46252);})()};return j::call(_method,_params46259,_receiver46257);})();
return V{};
},2);
return ([&]()->V{V _callee46289=this->_v_42613_shape.get();return j::call(_callee46289,j::Args{([&]()->V{V _obj46260=j::object();V _spread46261=_v_43091_b;for(const auto &_key:j::keys(_spread46261))j::put(_obj46260,_key,j::get(_spread46261,_key));V _spread46262=this->_v_42612_PLAIN.get();for(const auto &_key:j::keys(_spread46262))j::put(_obj46260,_key,j::get(_spread46262,_key));j::put(_obj46260,this->_literals[79],(j::truth(_v_43092_timed.get())?j::function([=](const j::Args &_args_fn43122,const V &_receiver_fn43122,const V &_self_fn43122) mutable ->V{
V _v_43123_t;
_v_43123_t=_args_fn43122[0];
return j::get(([&]()->V{V _callee46263=_v_43097_probe.get();return j::call(_callee46263,j::Args{_v_43123_t});})(),this->_literals[128]);
return V{};
},1):j::function([=](const j::Args &_args_fn43124,const V &_receiver_fn43124,const V &_self_fn43124) mutable ->V{
return j::get(_v_43116_at0.get(),this->_literals[128]);
return V{};
},0)));j::put(_obj46260,this->_literals[80],j::function([=](const j::Args &_args_fn43125,const V &_receiver_fn43125,const V &_self_fn43125) mutable ->V{
V _v_43126_unit;
V _v_43127_t;
_v_43126_unit=_args_fn43125[0];
_v_43127_t=_args_fn43125[1];
{
V _v_43128_nu;
V _v_43129_nv;
V _v_43130_key;
V _v_43131_m;
_v_43128_nu=(j::truth(([&]()->V{V _lhs46264=j::unary("typeof",_v_43093_seg.get());V _rhs46265=this->_literals[2];return V(j::equal(_lhs46264,_rhs46265,true));})())?_v_43093_seg.get():(j::truth(_v_43093_seg.get())?j::get(_v_43093_seg.get(),V(0.0)):([&]()->V{V _callee46266=_v_43118_count.get();return j::call(_callee46266,j::Args{j::get(_v_43116_at0.get(),this->_literals[126]),_v_43126_unit});})()));
_v_43129_nv=(j::truth(([&]()->V{V _lhs46267=j::unary("typeof",_v_43093_seg.get());V _rhs46268=this->_literals[2];return V(j::equal(_lhs46267,_rhs46268,true));})())?_v_43093_seg.get():(j::truth(_v_43093_seg.get())?j::get(_v_43093_seg.get(),V(1.0)):([&]()->V{V _callee46269=_v_43118_count.get();return j::call(_callee46269,j::Args{j::get(_v_43116_at0.get(),this->_literals[127]),_v_43126_unit});})()));
_v_43130_key=([&]()->V{V _lhs46270=([&]()->V{V _lhs46272=_v_43128_nu;V _rhs46273=V(1024.0);return V(j::number(_lhs46272)*j::number(_rhs46273));})();V _rhs46271=_v_43129_nv;return j::binary("+",_lhs46270,_rhs46271);})();
_v_43131_m=([&]()->V{V _receiver46274=_v_43117_cache.get();V _method46275=this->_literals[38];V _method=j::get(_receiver46274,_method46275);j::Args _params46276=j::Args{_v_43130_key};return j::call(_method,_params46276,_receiver46274);})();
if(j::truth(([&]()->V{V _logical46277=_v_43131_m;return j::truth(_logical46277)?j::unary("!",_v_43092_timed.get()):_logical46277;})())){return _v_43131_m;
}
if(j::truth(j::unary("!",_v_43131_m))){
if(j::truth(([&]()->V{V _lhs46278=j::get(_v_43117_cache.get(),this->_literals[50]);V _rhs46279=V(16.0);return j::binary(">=",_lhs46278,_rhs46279);})())){(void)(([&]()->V{V _receiver46280=_v_43117_cache.get();V _method46281=this->_literals[51];V _method=j::get(_receiver46280,_method46281);j::Args _params46282=j::Args{};return j::call(_method,_params46282,_receiver46280);})());
}
(void)(([&]()->V{V _receiver46285=_v_43117_cache.get();V _method46286=this->_literals[37];V _method=j::get(_receiver46285,_method46286);j::Args _params46287=j::Args{_v_43130_key,(_v_43131_m=([&]()->V{V _callee46284=this->_v_42651_lattice.get();return j::call(_callee46284,j::Args{_v_43128_nu,_v_43129_nv,V(false),j::function([=](const j::Args &_args_fn43132,const V &_receiver_fn43132,const V &_self_fn43132) mutable ->V{
{

}

return V{};
},0)});})())};return j::call(_method,_params46287,_receiver46285);})());

}

return ([&]()->V{V _callee46288=this->_v_43133_sheet.get();return j::call(_callee46288,j::Args{_v_43131_m,_v_43089_fn.get(),_v_43128_nu,_v_43129_nv,_v_43127_t});})();

}

return V{};
},2));j::put(_obj46260,this->_literals[35],_v_43092_timed.get());j::put(_obj46260,this->_literals[43],V::null());return _obj46260;})()});})();

}

return V{};
},1);
this->_v_43133_sheet.get()=j::function([=](const j::Args &_args_fn43134,const V &_receiver_fn43134,const V &_self_fn43134) mutable ->V{
V _v_43135_m;
V _v_43136_fn;
V _v_43137_nu;
V _v_43138_nv;
V _v_43139_t;
_v_43135_m=_args_fn43134[0];
_v_43136_fn=_args_fn43134[1];
_v_43137_nu=_args_fn43134[2];
_v_43138_nv=_args_fn43134[3];
_v_43139_t=_args_fn43134[4];
{
j::Cell _v_43140_pos;
V _v_43141_nrm;
V _v_43142_w;
V _v_43143_far;
j::Cell _v_43148_eps;
V _v_43149_same;
V _v_43153_wu;
V _v_43154_wv;
V _pattern46290=_v_43135_m;
_v_43140_pos.get()=j::get(_pattern46290,this->_literals[52]);
_v_43141_nrm=j::get(_pattern46290,this->_literals[53]);
_v_43142_w=([&]()->V{V _lhs46291=_v_43137_nu;V _rhs46292=V(1.0);return j::binary("+",_lhs46291,_rhs46292);})();
_v_43143_far=V(0.0);
{V _v_43144_j;
V _v_43145_k;
_v_43144_j=V(0.0);
_v_43145_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs46293=_v_43144_j;V _rhs46294=_v_43138_nv;return j::binary("<=",_lhs46293,_rhs46294);})());(void)(j::increment(_v_43144_j,1,false))){{V _v_43146_i;
_v_43146_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs46295=_v_43146_i;V _rhs46296=_v_43137_nu;return j::binary("<=",_lhs46295,_rhs46296);})());(void)((j::increment(_v_43146_i,1,false),(_v_43145_k=j::binary("+",_v_43145_k,V(3.0)))))){
V _v_43147_p;
_v_43147_p=([&]()->V{V _logical46298=([&]()->V{V _callee46303=_v_43136_fn;return j::call(_callee46303,j::Args{([&]()->V{V _lhs46299=_v_43146_i;V _rhs46300=_v_43137_nu;return V(j::number(_lhs46299)/j::number(_rhs46300));})(),([&]()->V{V _lhs46301=_v_43144_j;V _rhs46302=_v_43138_nv;return V(j::number(_lhs46301)/j::number(_rhs46302));})(),_v_43139_t});})();return j::nullish(_logical46298)?this->_v_42592_ORIGIN.get():_logical46298;})();
(void)(([&]()->V{V _base46305=_v_43140_pos.get();V _key46306=_v_43145_k;V _assign46304=(j::truth(([&]()->V{V _receiver46307=j::builtin("Number");V _method46308=this->_literals[6];V _method=j::get(_receiver46307,_method46308);j::Args _params46309=j::Args{j::get(_v_43147_p,V(0.0))};return j::call(_method,_params46309,_receiver46307);})())?j::get(_v_43147_p,V(0.0)):V(0.0));return j::put(_base46305,_key46306,_assign46304);})());
(void)(([&]()->V{V _base46311=_v_43140_pos.get();V _key46312=([&]()->V{V _lhs46313=_v_43145_k;V _rhs46314=V(1.0);return j::binary("+",_lhs46313,_rhs46314);})();V _assign46310=(j::truth(([&]()->V{V _receiver46315=j::builtin("Number");V _method46316=this->_literals[6];V _method=j::get(_receiver46315,_method46316);j::Args _params46317=j::Args{j::get(_v_43147_p,V(1.0))};return j::call(_method,_params46317,_receiver46315);})())?j::get(_v_43147_p,V(1.0)):V(0.0));return j::put(_base46311,_key46312,_assign46310);})());
(void)(([&]()->V{V _base46319=_v_43140_pos.get();V _key46320=([&]()->V{V _lhs46321=_v_43145_k;V _rhs46322=V(2.0);return j::binary("+",_lhs46321,_rhs46322);})();V _assign46318=(j::truth(([&]()->V{V _receiver46323=j::builtin("Number");V _method46324=this->_literals[6];V _method=j::get(_receiver46323,_method46324);j::Args _params46325=j::Args{j::get(_v_43147_p,V(2.0))};return j::call(_method,_params46325,_receiver46323);})())?j::get(_v_43147_p,V(2.0)):V(0.0));return j::put(_base46319,_key46320,_assign46318);})());
(void)((_v_43143_far=([&]()->V{V _receiver46342=j::builtin("Math");V _method46343=this->_literals[73];V _method=j::get(_receiver46342,_method46343);j::Args _params46344=j::Args{_v_43143_far,([&]()->V{V _number46327=j::get(_v_43140_pos.get(),_v_43145_k);return V(std::fabs(j::number(_number46327)));})(),([&]()->V{V _number46330=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46331=_v_43145_k;V _rhs46332=V(1.0);return j::binary("+",_lhs46331,_rhs46332);})());return V(std::fabs(j::number(_number46330)));})(),([&]()->V{V _number46335=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46336=_v_43145_k;V _rhs46337=V(2.0);return j::binary("+",_lhs46336,_rhs46337);})());return V(std::fabs(j::number(_number46335)));})()};return j::call(_method,_params46344,_receiver46342);})()));

}
}
}}
_v_43148_eps.get()=([&]()->V{V _lhs46345=V(0.00001);V _rhs46346=([&]()->V{V _logical46347=_v_43143_far;return !j::truth(_logical46347)?V(1.0):_logical46347;})();return V(j::number(_lhs46345)*j::number(_rhs46346));})();
_v_43149_same=j::function([=](const j::Args &_args_fn43150,const V &_receiver_fn43150,const V &_self_fn43150) mutable ->V{
V _v_43151_a;
V _v_43152_b;
_v_43151_a=_args_fn43150[0];
_v_43152_b=_args_fn43150[1];
return ([&]()->V{V _logical46348=([&]()->V{V _logical46349=([&]()->V{V _lhs46350=([&]()->V{V _number46354=([&]()->V{V _lhs46355=j::get(_v_43140_pos.get(),_v_43151_a);V _rhs46356=j::get(_v_43140_pos.get(),_v_43152_b);return V(j::number(_lhs46355)-j::number(_rhs46356));})();return V(std::fabs(j::number(_number46354)));})();V _rhs46351=_v_43148_eps.get();return j::binary("<",_lhs46350,_rhs46351);})();return j::truth(_logical46349)?([&]()->V{V _lhs46357=([&]()->V{V _number46365=([&]()->V{V _lhs46366=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46368=_v_43151_a;V _rhs46369=V(1.0);return j::binary("+",_lhs46368,_rhs46369);})());V _rhs46367=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46370=_v_43152_b;V _rhs46371=V(1.0);return j::binary("+",_lhs46370,_rhs46371);})());return V(j::number(_lhs46366)-j::number(_rhs46367));})();return V(std::fabs(j::number(_number46365)));})();V _rhs46358=_v_43148_eps.get();return j::binary("<",_lhs46357,_rhs46358);})():_logical46349;})();return j::truth(_logical46348)?([&]()->V{V _lhs46372=([&]()->V{V _number46380=([&]()->V{V _lhs46381=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46383=_v_43151_a;V _rhs46384=V(2.0);return j::binary("+",_lhs46383,_rhs46384);})());V _rhs46382=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46385=_v_43152_b;V _rhs46386=V(2.0);return j::binary("+",_lhs46385,_rhs46386);})());return V(j::number(_lhs46381)-j::number(_rhs46382));})();return V(std::fabs(j::number(_number46380)));})();V _rhs46373=_v_43148_eps.get();return j::binary("<",_lhs46372,_rhs46373);})():_logical46348;})();
return V{};
},2);
_v_43153_wu=V(true);
_v_43154_wv=V(true);
{V _v_43155_j;
_v_43155_j=V(0.0);
for(;j::truth(([&]()->V{V _logical46387=([&]()->V{V _lhs46388=_v_43155_j;V _rhs46389=_v_43138_nv;return j::binary("<=",_lhs46388,_rhs46389);})();return j::truth(_logical46387)?_v_43153_wu:_logical46387;})());(void)(j::increment(_v_43155_j,1,false))){(void)((_v_43153_wu=([&]()->V{V _callee46401=_v_43149_same;return j::call(_callee46401,j::Args{([&]()->V{V _lhs46391=([&]()->V{V _lhs46393=_v_43155_j;V _rhs46394=_v_43142_w;return V(j::number(_lhs46393)*j::number(_rhs46394));})();V _rhs46392=V(3.0);return V(j::number(_lhs46391)*j::number(_rhs46392));})(),([&]()->V{V _lhs46395=([&]()->V{V _lhs46397=([&]()->V{V _lhs46399=_v_43155_j;V _rhs46400=_v_43142_w;return V(j::number(_lhs46399)*j::number(_rhs46400));})();V _rhs46398=_v_43137_nu;return j::binary("+",_lhs46397,_rhs46398);})();V _rhs46396=V(3.0);return V(j::number(_lhs46395)*j::number(_rhs46396));})()});})()));
}}
{V _v_43156_i;
_v_43156_i=V(0.0);
for(;j::truth(([&]()->V{V _logical46402=([&]()->V{V _lhs46403=_v_43156_i;V _rhs46404=_v_43137_nu;return j::binary("<=",_lhs46403,_rhs46404);})();return j::truth(_logical46402)?_v_43154_wv:_logical46402;})());(void)(j::increment(_v_43156_i,1,false))){(void)((_v_43154_wv=([&]()->V{V _callee46414=_v_43149_same;return j::call(_callee46414,j::Args{([&]()->V{V _lhs46406=_v_43156_i;V _rhs46407=V(3.0);return V(j::number(_lhs46406)*j::number(_rhs46407));})(),([&]()->V{V _lhs46408=([&]()->V{V _lhs46410=([&]()->V{V _lhs46412=_v_43138_nv;V _rhs46413=_v_43142_w;return V(j::number(_lhs46412)*j::number(_rhs46413));})();V _rhs46411=_v_43156_i;return j::binary("+",_lhs46410,_rhs46411);})();V _rhs46409=V(3.0);return V(j::number(_lhs46408)*j::number(_rhs46409));})()});})()));
}}
{V _v_43157_j;
_v_43157_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs46415=_v_43157_j;V _rhs46416=_v_43138_nv;return j::binary("<=",_lhs46415,_rhs46416);})());(void)(j::increment(_v_43157_j,1,false))){{V _v_43158_i;
_v_43158_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs46417=_v_43158_i;V _rhs46418=_v_43137_nu;return j::binary("<=",_lhs46417,_rhs46418);})());(void)(j::increment(_v_43158_i,1,false))){
V _v_43159_il;
V _v_43160_ir;
V _v_43161_jd;
V _v_43162_ju;
V _v_43163_a;
V _v_43164_b;
V _v_43165_c;
V _v_43166_d;
V _v_43167_ux;
V _v_43168_uy;
V _v_43169_uz;
V _v_43170_vx;
V _v_43171_vy;
V _v_43172_vz;
V _v_43173_nx;
V _v_43174_ny;
V _v_43175_nz;
V _v_43176_l;
V _v_43177_k;
_v_43159_il=(j::truth(([&]()->V{V _lhs46419=_v_43158_i;V _rhs46420=V(0.0);return j::binary(">",_lhs46419,_rhs46420);})())?([&]()->V{V _lhs46421=_v_43158_i;V _rhs46422=V(1.0);return V(j::number(_lhs46421)-j::number(_rhs46422));})():(j::truth(_v_43153_wu)?([&]()->V{V _lhs46423=_v_43137_nu;V _rhs46424=V(1.0);return V(j::number(_lhs46423)-j::number(_rhs46424));})():V(0.0)));
_v_43160_ir=(j::truth(([&]()->V{V _lhs46425=_v_43158_i;V _rhs46426=_v_43137_nu;return j::binary("<",_lhs46425,_rhs46426);})())?([&]()->V{V _lhs46427=_v_43158_i;V _rhs46428=V(1.0);return j::binary("+",_lhs46427,_rhs46428);})():(j::truth(_v_43153_wu)?V(1.0):_v_43137_nu));
_v_43161_jd=(j::truth(([&]()->V{V _lhs46429=_v_43157_j;V _rhs46430=V(0.0);return j::binary(">",_lhs46429,_rhs46430);})())?([&]()->V{V _lhs46431=_v_43157_j;V _rhs46432=V(1.0);return V(j::number(_lhs46431)-j::number(_rhs46432));})():(j::truth(_v_43154_wv)?([&]()->V{V _lhs46433=_v_43138_nv;V _rhs46434=V(1.0);return V(j::number(_lhs46433)-j::number(_rhs46434));})():V(0.0)));
_v_43162_ju=(j::truth(([&]()->V{V _lhs46435=_v_43157_j;V _rhs46436=_v_43138_nv;return j::binary("<",_lhs46435,_rhs46436);})())?([&]()->V{V _lhs46437=_v_43157_j;V _rhs46438=V(1.0);return j::binary("+",_lhs46437,_rhs46438);})():(j::truth(_v_43154_wv)?V(1.0):_v_43138_nv));
_v_43163_a=([&]()->V{V _lhs46439=([&]()->V{V _lhs46441=([&]()->V{V _lhs46443=_v_43157_j;V _rhs46444=_v_43142_w;return V(j::number(_lhs46443)*j::number(_rhs46444));})();V _rhs46442=_v_43159_il;return j::binary("+",_lhs46441,_rhs46442);})();V _rhs46440=V(3.0);return V(j::number(_lhs46439)*j::number(_rhs46440));})();
_v_43164_b=([&]()->V{V _lhs46445=([&]()->V{V _lhs46447=([&]()->V{V _lhs46449=_v_43157_j;V _rhs46450=_v_43142_w;return V(j::number(_lhs46449)*j::number(_rhs46450));})();V _rhs46448=_v_43160_ir;return j::binary("+",_lhs46447,_rhs46448);})();V _rhs46446=V(3.0);return V(j::number(_lhs46445)*j::number(_rhs46446));})();
_v_43165_c=([&]()->V{V _lhs46451=([&]()->V{V _lhs46453=([&]()->V{V _lhs46455=_v_43161_jd;V _rhs46456=_v_43142_w;return V(j::number(_lhs46455)*j::number(_rhs46456));})();V _rhs46454=_v_43158_i;return j::binary("+",_lhs46453,_rhs46454);})();V _rhs46452=V(3.0);return V(j::number(_lhs46451)*j::number(_rhs46452));})();
_v_43166_d=([&]()->V{V _lhs46457=([&]()->V{V _lhs46459=([&]()->V{V _lhs46461=_v_43162_ju;V _rhs46462=_v_43142_w;return V(j::number(_lhs46461)*j::number(_rhs46462));})();V _rhs46460=_v_43158_i;return j::binary("+",_lhs46459,_rhs46460);})();V _rhs46458=V(3.0);return V(j::number(_lhs46457)*j::number(_rhs46458));})();
_v_43167_ux=([&]()->V{V _lhs46463=j::get(_v_43140_pos.get(),_v_43164_b);V _rhs46464=j::get(_v_43140_pos.get(),_v_43163_a);return V(j::number(_lhs46463)-j::number(_rhs46464));})();
_v_43168_uy=([&]()->V{V _lhs46465=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46467=_v_43164_b;V _rhs46468=V(1.0);return j::binary("+",_lhs46467,_rhs46468);})());V _rhs46466=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46469=_v_43163_a;V _rhs46470=V(1.0);return j::binary("+",_lhs46469,_rhs46470);})());return V(j::number(_lhs46465)-j::number(_rhs46466));})();
_v_43169_uz=([&]()->V{V _lhs46471=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46473=_v_43164_b;V _rhs46474=V(2.0);return j::binary("+",_lhs46473,_rhs46474);})());V _rhs46472=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46475=_v_43163_a;V _rhs46476=V(2.0);return j::binary("+",_lhs46475,_rhs46476);})());return V(j::number(_lhs46471)-j::number(_rhs46472));})();
_v_43170_vx=([&]()->V{V _lhs46477=j::get(_v_43140_pos.get(),_v_43166_d);V _rhs46478=j::get(_v_43140_pos.get(),_v_43165_c);return V(j::number(_lhs46477)-j::number(_rhs46478));})();
_v_43171_vy=([&]()->V{V _lhs46479=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46481=_v_43166_d;V _rhs46482=V(1.0);return j::binary("+",_lhs46481,_rhs46482);})());V _rhs46480=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46483=_v_43165_c;V _rhs46484=V(1.0);return j::binary("+",_lhs46483,_rhs46484);})());return V(j::number(_lhs46479)-j::number(_rhs46480));})();
_v_43172_vz=([&]()->V{V _lhs46485=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46487=_v_43166_d;V _rhs46488=V(2.0);return j::binary("+",_lhs46487,_rhs46488);})());V _rhs46486=j::get(_v_43140_pos.get(),([&]()->V{V _lhs46489=_v_43165_c;V _rhs46490=V(2.0);return j::binary("+",_lhs46489,_rhs46490);})());return V(j::number(_lhs46485)-j::number(_rhs46486));})();
_v_43173_nx=([&]()->V{V _lhs46491=([&]()->V{V _lhs46493=_v_43168_uy;V _rhs46494=_v_43172_vz;return V(j::number(_lhs46493)*j::number(_rhs46494));})();V _rhs46492=([&]()->V{V _lhs46495=_v_43169_uz;V _rhs46496=_v_43171_vy;return V(j::number(_lhs46495)*j::number(_rhs46496));})();return V(j::number(_lhs46491)-j::number(_rhs46492));})();
_v_43174_ny=([&]()->V{V _lhs46497=([&]()->V{V _lhs46499=_v_43169_uz;V _rhs46500=_v_43170_vx;return V(j::number(_lhs46499)*j::number(_rhs46500));})();V _rhs46498=([&]()->V{V _lhs46501=_v_43167_ux;V _rhs46502=_v_43172_vz;return V(j::number(_lhs46501)*j::number(_rhs46502));})();return V(j::number(_lhs46497)-j::number(_rhs46498));})();
_v_43175_nz=([&]()->V{V _lhs46503=([&]()->V{V _lhs46505=_v_43167_ux;V _rhs46506=_v_43171_vy;return V(j::number(_lhs46505)*j::number(_rhs46506));})();V _rhs46504=([&]()->V{V _lhs46507=_v_43168_uy;V _rhs46508=_v_43170_vx;return V(j::number(_lhs46507)*j::number(_rhs46508));})();return V(j::number(_lhs46503)-j::number(_rhs46504));})();
_v_43176_l=([&]()->V{V _logical46509=([&]()->V{V _number46510=_v_43173_nx;V _number46511=_v_43174_ny;V _number46512=_v_43175_nz;return V(std::hypot(j::number(_number46510),j::number(_number46511),j::number(_number46512)));})();return !j::truth(_logical46509)?V(1.0):_logical46509;})();
_v_43177_k=([&]()->V{V _lhs46513=([&]()->V{V _lhs46515=([&]()->V{V _lhs46517=_v_43157_j;V _rhs46518=_v_43142_w;return V(j::number(_lhs46517)*j::number(_rhs46518));})();V _rhs46516=_v_43158_i;return j::binary("+",_lhs46515,_rhs46516);})();V _rhs46514=V(3.0);return V(j::number(_lhs46513)*j::number(_rhs46514));})();
(void)(([&]()->V{V _base46520=_v_43141_nrm;V _key46521=_v_43177_k;V _assign46519=([&]()->V{V _lhs46522=_v_43173_nx;V _rhs46523=_v_43176_l;return V(j::number(_lhs46522)/j::number(_rhs46523));})();return j::put(_base46520,_key46521,_assign46519);})());
(void)(([&]()->V{V _base46525=_v_43141_nrm;V _key46526=([&]()->V{V _lhs46527=_v_43177_k;V _rhs46528=V(1.0);return j::binary("+",_lhs46527,_rhs46528);})();V _assign46524=([&]()->V{V _lhs46529=_v_43174_ny;V _rhs46530=_v_43176_l;return V(j::number(_lhs46529)/j::number(_rhs46530));})();return j::put(_base46525,_key46526,_assign46524);})());
(void)(([&]()->V{V _base46532=_v_43141_nrm;V _key46533=([&]()->V{V _lhs46534=_v_43177_k;V _rhs46535=V(2.0);return j::binary("+",_lhs46534,_rhs46535);})();V _assign46531=([&]()->V{V _lhs46536=_v_43175_nz;V _rhs46537=_v_43176_l;return V(j::number(_lhs46536)/j::number(_rhs46537));})();return j::put(_base46532,_key46533,_assign46531);})());

}
}
}}
return _v_43135_m;

}

return V{};
},5);
this->_v_43178_orbit.get()=j::function([=](const j::Args &_args_fn43179,const V &_receiver_fn43179,const V &_self_fn43179) mutable ->V{
V _v_43180_o;
_v_43180_o=_args_fn43179[0];
{
j::Cell _v_43181_r;
j::Cell _v_43182_period;
V _v_43183_tilt;
j::Cell _v_43184_phase;
j::Cell _v_43185_c;
j::Cell _v_43186_ct;
j::Cell _v_43187_st;
V _v_43188_fn;
if(j::truth(([&]()->V{V _logical46538=j::unary("!",_v_43180_o);return !j::truth(_logical46538)?([&]()->V{V _lhs46539=j::unary("typeof",_v_43180_o);V _rhs46540=this->_literals[15];return V(!j::equal(_lhs46539,_rhs46540,true));})():_logical46538;})())){(void)(([&]()->V{V _callee46543=this->_v_42449_fail.get();return j::call(_callee46543,j::Args{([&]()->V{std::u16string _text46541;_text46541+=u"orbit() takes { radius, period }, such as { radius: 2.4, period: 6 }, not ";_text46541+=j::string(([&]()->V{V _callee46542=this->_v_42462_shown.get();return j::call(_callee46542,j::Args{_v_43180_o});})());_text46541+=u"";return V(std::move(_text46541));})()});})());
}
(void)(([&]()->V{V _callee46545=this->_v_42507_known.get();return j::call(_callee46545,j::Args{_v_43180_o,([&]()->V{j::Args _array46544;_array46544.push_back(this->_literals[75]);_array46544.push_back(this->_literals[120]);_array46544.push_back(this->_literals[129]);_array46544.push_back(this->_literals[116]);_array46544.push_back(this->_literals[130]);return j::array(std::move(_array46544));})(),this->_literals[131]});})());
_v_43181_r.get()=([&]()->V{V _callee46546=this->_v_42465_positive.get();return j::call(_callee46546,j::Args{j::get(_v_43180_o,this->_literals[75]),this->_literals[132]});})();
_v_43182_period.get()=([&]()->V{V _callee46547=this->_v_42465_positive.get();return j::call(_callee46547,j::Args{j::get(_v_43180_o,this->_literals[120]),this->_literals[133]});})();
_v_43183_tilt=([&]()->V{V _callee46548=this->_v_42470_finite.get();return j::call(_callee46548,j::Args{j::get(_v_43180_o,this->_literals[129]),this->_literals[134],V(0.0)});})();
_v_43184_phase.get()=([&]()->V{V _callee46549=this->_v_42470_finite.get();return j::call(_callee46549,j::Args{j::get(_v_43180_o,this->_literals[130]),this->_literals[135],V(0.0)});})();
_v_43185_c.get()=([&]()->V{V _callee46550=this->_v_42482_vec3.get();return j::call(_callee46550,j::Args{j::get(_v_43180_o,this->_literals[116]),this->_literals[136],this->_v_42592_ORIGIN.get()});})();
_v_43186_ct.get()=([&]()->V{V _number46551=_v_43183_tilt;return V(std::cos(j::number(_number46551)));})();
_v_43187_st.get()=([&]()->V{V _number46552=_v_43183_tilt;return V(std::sin(j::number(_number46552)));})();
_v_43188_fn=j::function([=](const j::Args &_args_fn43189,const V &_receiver_fn43189,const V &_self_fn43189) mutable ->V{
V _v_43190_t;
_v_43190_t=_args_fn43189[0];
{
V _v_43191_a;
V _v_43192_x;
V _v_43193_z;
_v_43191_a=([&]()->V{V _lhs46553=([&]()->V{V _lhs46555=([&]()->V{V _lhs46557=this->_v_42444_TAU.get();V _rhs46558=([&]()->V{V _lhs46559=([&]()->V{V _lhs46561=([&]()->V{V _lhs46563=_v_43190_t;V _rhs46564=_v_43182_period.get();return V(std::fmod(j::number(_lhs46563),j::number(_rhs46564)));})();V _rhs46562=_v_43182_period.get();return j::binary("+",_lhs46561,_rhs46562);})();V _rhs46560=_v_43182_period.get();return V(std::fmod(j::number(_lhs46559),j::number(_rhs46560)));})();return V(j::number(_lhs46557)*j::number(_rhs46558));})();V _rhs46556=_v_43182_period.get();return V(j::number(_lhs46555)/j::number(_rhs46556));})();V _rhs46554=_v_43184_phase.get();return j::binary("+",_lhs46553,_rhs46554);})();
_v_43192_x=([&]()->V{V _lhs46565=_v_43181_r.get();V _rhs46566=([&]()->V{V _number46567=_v_43191_a;return V(std::cos(j::number(_number46567)));})();return V(j::number(_lhs46565)*j::number(_rhs46566));})();
_v_43193_z=([&]()->V{V _lhs46568=_v_43181_r.get();V _rhs46569=([&]()->V{V _number46570=_v_43191_a;return V(std::sin(j::number(_number46570)));})();return V(j::number(_lhs46568)*j::number(_rhs46569));})();
return ([&]()->V{j::Args _array46571;_array46571.push_back(([&]()->V{V _lhs46572=j::get(_v_43185_c.get(),V(0.0));V _rhs46573=_v_43192_x;return j::binary("+",_lhs46572,_rhs46573);})());_array46571.push_back(([&]()->V{V _lhs46574=j::get(_v_43185_c.get(),V(1.0));V _rhs46575=([&]()->V{V _lhs46576=_v_43193_z;V _rhs46577=_v_43187_st.get();return V(j::number(_lhs46576)*j::number(_rhs46577));})();return j::binary("+",_lhs46574,_rhs46575);})());_array46571.push_back(([&]()->V{V _lhs46578=j::get(_v_43185_c.get(),V(2.0));V _rhs46579=([&]()->V{V _lhs46580=_v_43193_z;V _rhs46581=_v_43186_ct.get();return V(j::number(_lhs46580)*j::number(_rhs46581));})();return j::binary("+",_lhs46578,_rhs46579);})());return j::array(std::move(_array46571));})();

}

return V{};
},1);
(void)(([&]()->V{V _receiver46587=this->_v_42591_ORBITS.get();V _method46588=this->_literals[37];V _method=j::get(_receiver46587,_method46588);j::Args _params46589=j::Args{_v_43188_fn,([&]()->V{V _obj46582=j::object();j::put(_obj46582,this->_literals[120],_v_43182_period.get());j::put(_obj46582,this->_literals[42],([&]()->V{std::u16string _text46583;_text46583+=u"orbit(";_text46583+=j::string(_v_43181_r.get());_text46583+=u",";_text46583+=j::string(_v_43182_period.get());_text46583+=u",";_text46583+=j::string(_v_43183_tilt);_text46583+=u",";_text46583+=j::string(([&]()->V{V _receiver46584=_v_43185_c.get();V _method46585=this->_literals[46];V _method=j::get(_receiver46584,_method46585);j::Args _params46586=j::Args{this->_literals[45]};return j::call(_method,_params46586,_receiver46584);})());_text46583+=u",";_text46583+=j::string(_v_43184_phase.get());_text46583+=u")";return V(std::move(_text46583));})());return _obj46582;})()};return j::call(_method,_params46589,_receiver46587);})());
return _v_43188_fn;

}

return V{};
},1);
this->_v_43202_settings.get()=j::function([=](const j::Args &_args_fn43203,const V &_receiver_fn43203,const V &_self_fn43203) mutable ->V{
V _v_43204_o;
V _v_43205_who;
_v_43204_o=_args_fn43203[0];
_v_43205_who=_args_fn43203[1];
{
V _v_43206_cam;
V _v_43207_light;
V _v_43208_len;
V _v_43209_ambient;
V _v_43210_tilt;
j::Cell _v_43211_chars;
V _v_43214_shades;
V _v_43215_colors;
if(j::truth(([&]()->V{V _logical46590=([&]()->V{V _lhs46591=_v_43204_o;V _rhs46592=V::null();return V(j::equal(_lhs46591,_rhs46592,true));})();return !j::truth(_logical46590)?([&]()->V{V _lhs46593=j::unary("typeof",_v_43204_o);V _rhs46594=this->_literals[15];return V(!j::equal(_lhs46593,_rhs46594,true));})():_logical46590;})())){(void)(([&]()->V{V _callee46597=this->_v_42449_fail.get();return j::call(_callee46597,j::Args{([&]()->V{std::u16string _text46595;_text46595+=u"";_text46595+=j::string(_v_43205_who);_text46595+=u" takes its options as an object, such as { light: [0, 1, -1] }, not ";_text46595+=j::string(([&]()->V{V _callee46596=this->_v_42462_shown.get();return j::call(_callee46596,j::Args{_v_43204_o});})());_text46595+=u"";return V(std::move(_text46595));})()});})());
}
_v_43206_cam=([&]()->V{V _logical46598=j::get(_v_43204_o,this->_literals[21]);return j::nullish(_logical46598)?([&]()->V{V _obj46599=j::object();return _obj46599;})():_logical46598;})();
if(j::truth(([&]()->V{V _logical46600=([&]()->V{V _logical46601=([&]()->V{V _lhs46602=_v_43206_cam;V _rhs46603=V::null();return V(j::equal(_lhs46602,_rhs46603,true));})();return !j::truth(_logical46601)?([&]()->V{V _lhs46604=j::unary("typeof",_v_43206_cam);V _rhs46605=this->_literals[15];return V(!j::equal(_lhs46604,_rhs46605,true));})():_logical46601;})();return !j::truth(_logical46600)?([&]()->V{V _receiver46606=j::builtin("Array");V _method46607=this->_literals[8];V _method=j::get(_receiver46606,_method46607);j::Args _params46608=j::Args{_v_43206_cam};return j::call(_method,_params46608,_receiver46606);})():_logical46600;})())){(void)(([&]()->V{V _callee46611=this->_v_42449_fail.get();return j::call(_callee46611,j::Args{([&]()->V{std::u16string _text46609;_text46609+=u"camera takes { distance, zoom, tilt, spin }, not ";_text46609+=j::string(([&]()->V{V _callee46610=this->_v_42462_shown.get();return j::call(_callee46610,j::Args{j::get(_v_43204_o,this->_literals[21])});})());_text46609+=u"";return V(std::move(_text46609));})()});})());
}
(void)(([&]()->V{V _callee46612=this->_v_42507_known.get();return j::call(_callee46612,j::Args{_v_43206_cam,this->_v_43201_CAMERA_KEYS.get(),this->_literals[21]});})());
_v_43207_light=([&]()->V{V _callee46614=this->_v_42482_vec3.get();return j::call(_callee46614,j::Args{j::get(_v_43204_o,this->_literals[137]),this->_literals[137],([&]()->V{j::Args _array46613;_array46613.push_back(j::unary("-",V(0.4)));_array46613.push_back(V(1.0));_array46613.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array46613));})()});})();
_v_43208_len=([&]()->V{V _receiver46616=j::builtin("Math");V _method46617=this->_literals[138];V _method=j::get(_receiver46616,_method46617);j::Args _params46618=([&](){j::Args _args46615;for(const auto &_v:j::elements(_v_43207_light))_args46615.push_back(_v);return _args46615;})();return j::call(_method,_params46618,_receiver46616);})();
if(j::truth(j::unary("!",_v_43208_len))){(void)(([&]()->V{V _callee46619=this->_v_42449_fail.get();return j::call(_callee46619,j::Args{this->_literals[139]});})());
}
_v_43209_ambient=(j::truth(([&]()->V{V _lhs46620=j::unary("typeof",j::get(_v_43204_o,this->_literals[140]));V _rhs46621=this->_literals[11];return V(j::equal(_lhs46620,_rhs46621,true));})())?(j::truth(([&]()->V{V _receiver46622=j::builtin("Object");V _method46623=this->_literals[12];V _method=j::get(_receiver46622,_method46623);j::Args _params46624=j::Args{this->_v_43195_AMBIENT.get(),j::get(_v_43204_o,this->_literals[140])};return j::call(_method,_params46624,_receiver46622);})())?j::get(this->_v_43195_AMBIENT.get(),j::get(_v_43204_o,this->_literals[140])):([&]()->V{V _callee46631=this->_v_42449_fail.get();return j::call(_callee46631,j::Args{([&]()->V{std::u16string _text46625;_text46625+=u"ambient takes \"none\", \"soft\" or \"bright\", or a number from 0 to 1, not ";_text46625+=j::string(([&]()->V{V _callee46626=this->_v_42462_shown.get();return j::call(_callee46626,j::Args{j::get(_v_43204_o,this->_literals[140])});})());_text46625+=u"";_text46625+=j::string(([&]()->V{V _callee46630=this->_v_42461_suggest.get();return j::call(_callee46630,j::Args{j::get(_v_43204_o,this->_literals[140]),([&]()->V{V _receiver46627=j::builtin("Object");V _method46628=this->_literals[13];V _method=j::get(_receiver46627,_method46628);j::Args _params46629=j::Args{this->_v_43195_AMBIENT.get()};return j::call(_method,_params46629,_receiver46627);})()});})());_text46625+=u"";return V(std::move(_text46625));})()});})()):([&]()->V{V _callee46632=this->_v_42470_finite.get();return j::call(_callee46632,j::Args{j::get(_v_43204_o,this->_literals[140]),this->_literals[140],V(0.0)});})());
if(j::truth(([&]()->V{V _logical46633=([&]()->V{V _lhs46634=_v_43209_ambient;V _rhs46635=V(0.0);return j::binary("<",_lhs46634,_rhs46635);})();return !j::truth(_logical46633)?([&]()->V{V _lhs46636=_v_43209_ambient;V _rhs46637=V(1.0);return j::binary(">",_lhs46636,_rhs46637);})():_logical46633;})())){(void)(([&]()->V{V _callee46639=this->_v_42449_fail.get();return j::call(_callee46639,j::Args{([&]()->V{std::u16string _text46638;_text46638+=u"ambient takes a number from 0 to 1, not ";_text46638+=j::string(_v_43209_ambient);_text46638+=u"";return V(std::move(_text46638));})()});})());
}
_v_43210_tilt=(j::truth(([&]()->V{V _lhs46640=j::unary("typeof",j::get(_v_43206_cam,this->_literals[129]));V _rhs46641=this->_literals[11];return V(j::equal(_lhs46640,_rhs46641,true));})())?(j::truth(([&]()->V{V _receiver46642=j::builtin("Object");V _method46643=this->_literals[12];V _method=j::get(_receiver46642,_method46643);j::Args _params46644=j::Args{this->_v_43196_TILTS.get(),j::get(_v_43206_cam,this->_literals[129])};return j::call(_method,_params46644,_receiver46642);})())?j::get(this->_v_43196_TILTS.get(),j::get(_v_43206_cam,this->_literals[129])):([&]()->V{V _callee46651=this->_v_42449_fail.get();return j::call(_callee46651,j::Args{([&]()->V{std::u16string _text46645;_text46645+=u"camera's tilt takes \"level\", \"above\", \"high\" or \"below\", or radians, not ";_text46645+=j::string(([&]()->V{V _callee46646=this->_v_42462_shown.get();return j::call(_callee46646,j::Args{j::get(_v_43206_cam,this->_literals[129])});})());_text46645+=u"";_text46645+=j::string(([&]()->V{V _callee46650=this->_v_42461_suggest.get();return j::call(_callee46650,j::Args{j::get(_v_43206_cam,this->_literals[129]),([&]()->V{V _receiver46647=j::builtin("Object");V _method46648=this->_literals[13];V _method=j::get(_receiver46647,_method46648);j::Args _params46649=j::Args{this->_v_43196_TILTS.get()};return j::call(_method,_params46649,_receiver46647);})()});})());_text46645+=u"";return V(std::move(_text46645));})()});})()):([&]()->V{V _callee46652=this->_v_42470_finite.get();return j::call(_callee46652,j::Args{j::get(_v_43206_cam,this->_literals[129]),this->_literals[141],V(0.0)});})());
_v_43211_chars.get()=(j::truth(([&]()->V{V _lhs46653=j::get(_v_43204_o,this->_literals[142]);V _rhs46654=j::builtin("undefined");return V(j::equal(_lhs46653,_rhs46654,true));})())?this->_v_43194_DONUT.get():([&]()->V{V _callee46655=this->_v_42456_rampOf.get();return j::call(_callee46655,j::Args{j::get(_v_43204_o,this->_literals[142])});})());
if(j::truth(([&]()->V{V _logical46656=([&]()->V{V _logical46657=([&]()->V{V _logical46658=([&]()->V{V _lhs46659=j::get(_v_43204_o,this->_literals[143]);V _rhs46660=j::builtin("undefined");return V(!j::equal(_lhs46659,_rhs46660,true));})();return j::truth(_logical46658)?([&]()->V{V _lhs46661=j::get(_v_43204_o,this->_literals[143]);V _rhs46662=V(true);return V(!j::equal(_lhs46661,_rhs46662,true));})():_logical46658;})();return j::truth(_logical46657)?([&]()->V{V _lhs46663=j::get(_v_43204_o,this->_literals[143]);V _rhs46664=V(false);return V(!j::equal(_lhs46663,_rhs46664,true));})():_logical46657;})();return j::truth(_logical46656)?([&]()->V{V _lhs46665=j::get(_v_43204_o,this->_literals[143]);V _rhs46666=this->_literals[144];return V(!j::equal(_lhs46665,_rhs46666,true));})():_logical46656;})())){(void)(([&]()->V{V _callee46669=this->_v_42449_fail.get();return j::call(_callee46669,j::Args{([&]()->V{std::u16string _text46667;_text46667+=u"invert takes true, false or \"auto\", not ";_text46667+=j::string(([&]()->V{V _callee46668=this->_v_42462_shown.get();return j::call(_callee46668,j::Args{j::get(_v_43204_o,this->_literals[143])});})());_text46667+=u"";return V(std::move(_text46667));})()});})());
}
if(j::truth(([&]()->V{V _logical46670=([&]()->V{V _lhs46671=j::get(_v_43204_o,this->_literals[145]);V _rhs46672=j::builtin("undefined");return V(!j::equal(_lhs46671,_rhs46672,true));})();return j::truth(_logical46670)?j::unary("!",([&]()->V{V _receiver46673=this->_v_43198_COLOR_BY.get();V _method46674=this->_literals[19];V _method=j::get(_receiver46673,_method46674);j::Args _params46675=j::Args{j::get(_v_43204_o,this->_literals[145])};return j::call(_method,_params46675,_receiver46673);})()):_logical46670;})())){(void)(([&]()->V{V _callee46683=this->_v_42449_fail.get();return j::call(_callee46683,j::Args{([&]()->V{std::u16string _text46676;_text46676+=u"colorBy takes ";_text46676+=j::string(([&]()->V{V _callee46681=this->_v_42445_and.get();return j::call(_callee46681,j::Args{([&]()->V{V _receiver46678=this->_v_43198_COLOR_BY.get();V _method46679=this->_literals[14];V _method=j::get(_receiver46678,_method46679);j::Args _params46680=j::Args{j::function([=](const j::Args &_args_fn43212,const V &_receiver_fn43212,const V &_self_fn43212) mutable ->V{
V _v_43213_c;
_v_43213_c=_args_fn43212[0];
return ([&]()->V{std::u16string _text46677;_text46677+=u"\"";_text46677+=j::string(_v_43213_c);_text46677+=u"\"";return V(std::move(_text46677));})();
return V{};
},1)};return j::call(_method,_params46680,_receiver46678);})()});})());_text46676+=u", not ";_text46676+=j::string(([&]()->V{V _callee46682=this->_v_42462_shown.get();return j::call(_callee46682,j::Args{j::get(_v_43204_o,this->_literals[145])});})());_text46676+=u"";return V(std::move(_text46676));})()});})());
}
_v_43214_shades=([&]()->V{V _logical46684=j::get(_v_43204_o,this->_literals[146]);return j::nullish(_logical46684)?V(4.0):_logical46684;})();
if(j::truth(([&]()->V{V _logical46685=([&]()->V{V _logical46686=j::unary("!",([&]()->V{V _receiver46687=j::builtin("Number");V _method46688=this->_literals[7];V _method=j::get(_receiver46687,_method46688);j::Args _params46689=j::Args{_v_43214_shades};return j::call(_method,_params46689,_receiver46687);})());return !j::truth(_logical46686)?([&]()->V{V _lhs46690=_v_43214_shades;V _rhs46691=V(1.0);return j::binary("<",_lhs46690,_rhs46691);})():_logical46686;})();return !j::truth(_logical46685)?([&]()->V{V _lhs46692=_v_43214_shades;V _rhs46693=V(16.0);return j::binary(">",_lhs46692,_rhs46693);})():_logical46685;})())){(void)(([&]()->V{V _callee46696=this->_v_42449_fail.get();return j::call(_callee46696,j::Args{([&]()->V{std::u16string _text46694;_text46694+=u"shades takes a whole number from 1 to 16, not ";_text46694+=j::string(([&]()->V{V _callee46695=this->_v_42462_shown.get();return j::call(_callee46695,j::Args{j::get(_v_43204_o,this->_literals[146])});})());_text46694+=u"";return V(std::move(_text46694));})()});})());
}
_v_43215_colors=(j::truth(([&]()->V{V _lhs46697=j::get(_v_43204_o,this->_literals[147]);V _rhs46698=j::builtin("undefined");return V(j::equal(_lhs46697,_rhs46698,true));})())?j::builtin("undefined"):([&]()->V{V _callee46699=this->_v_42448_namedColors.get();return j::call(_callee46699,j::Args{j::get(_v_43204_o,this->_literals[147]),this->_literals[147]});})());
if(j::truth(([&]()->V{V _lhs46700=_v_43215_colors;V _rhs46701=j::builtin("undefined");return V(!j::equal(_lhs46700,_rhs46701,true));})())){(void)(([&]()->V{V _callee46702=this->_v_42460_spread.get();return j::call(_callee46702,j::Args{_v_43215_colors,_v_43214_shades});})());
}
if(j::truth(([&]()->V{V _logical46703=([&]()->V{V _lhs46704=j::get(_v_43204_o,this->_literals[148]);V _rhs46705=j::builtin("undefined");return V(!j::equal(_lhs46704,_rhs46705,true));})();return j::truth(_logical46703)?([&]()->V{V _lhs46706=j::unary("typeof",j::get(_v_43204_o,this->_literals[148]));V _rhs46707=this->_literals[28];return V(!j::equal(_lhs46706,_rhs46707,true));})():_logical46703;})())){(void)(([&]()->V{V _callee46710=this->_v_42449_fail.get();return j::call(_callee46710,j::Args{([&]()->V{std::u16string _text46708;_text46708+=u"fit takes true or false, not ";_text46708+=j::string(([&]()->V{V _callee46709=this->_v_42462_shown.get();return j::call(_callee46709,j::Args{j::get(_v_43204_o,this->_literals[148])});})());_text46708+=u"";return V(std::move(_text46708));})()});})());
}
return ([&]()->V{V _obj46711=j::object();j::put(_obj46711,this->_literals[149],([&]()->V{V _callee46712=this->_v_42465_positive.get();return j::call(_callee46712,j::Args{j::get(_v_43206_cam,this->_literals[149]),this->_literals[150],V(6.0)});})());j::put(_obj46711,this->_literals[151],(j::truth(([&]()->V{V _lhs46713=j::get(_v_43206_cam,this->_literals[151]);V _rhs46714=j::builtin("undefined");return V(j::equal(_lhs46713,_rhs46714,true));})())?j::builtin("undefined"):([&]()->V{V _callee46715=this->_v_42465_positive.get();return j::call(_callee46715,j::Args{j::get(_v_43206_cam,this->_literals[151]),this->_literals[152]});})()));j::put(_obj46711,this->_literals[129],_v_43210_tilt);j::put(_obj46711,this->_literals[29],([&]()->V{V _callee46716=this->_v_42470_finite.get();return j::call(_callee46716,j::Args{j::get(_v_43206_cam,this->_literals[29]),this->_literals[153],V(0.0)});})());j::put(_obj46711,this->_literals[137],([&]()->V{j::Args _array46717;_array46717.push_back(([&]()->V{V _lhs46718=j::get(_v_43207_light,V(0.0));V _rhs46719=_v_43208_len;return V(j::number(_lhs46718)/j::number(_rhs46719));})());_array46717.push_back(([&]()->V{V _lhs46720=j::get(_v_43207_light,V(1.0));V _rhs46721=_v_43208_len;return V(j::number(_lhs46720)/j::number(_rhs46721));})());_array46717.push_back(([&]()->V{V _lhs46722=j::get(_v_43207_light,V(2.0));V _rhs46723=_v_43208_len;return V(j::number(_lhs46722)/j::number(_rhs46723));})());return j::array(std::move(_array46717));})());j::put(_obj46711,this->_literals[140],_v_43209_ambient);j::put(_obj46711,this->_literals[154],([&]()->V{V _receiver46728=j::builtin("Uint16Array");V _method46729=this->_literals[107];V _method=j::get(_receiver46728,_method46729);j::Args _params46730=j::Args{([&]()->V{V _obj46724=j::object();j::put(_obj46724,this->_literals[9],j::get(_v_43211_chars.get(),this->_literals[9]));return _obj46724;})(),j::function([=](const j::Args &_args_fn43216,const V &_receiver_fn43216,const V &_self_fn43216) mutable ->V{
V _v_43217__;
V _v_43218_i;
_v_43217__=_args_fn43216[0];
_v_43218_i=_args_fn43216[1];
return ([&]()->V{V _receiver46725=_v_43211_chars.get();V _method46726=this->_literals[155];V _method=j::get(_receiver46725,_method46726);j::Args _params46727=j::Args{_v_43218_i};return j::call(_method,_params46727,_receiver46725);})();
return V{};
},2)};return j::call(_method,_params46730,_receiver46728);})());j::put(_obj46711,this->_literals[143],([&]()->V{V _logical46731=j::get(_v_43204_o,this->_literals[143]);return j::nullish(_logical46731)?this->_literals[144]:_logical46731;})());j::put(_obj46711,this->_literals[145],([&]()->V{V _logical46732=j::get(_v_43204_o,this->_literals[145]);return j::nullish(_logical46732)?this->_literals[156]:_logical46732;})());j::put(_obj46711,this->_literals[147],_v_43215_colors);j::put(_obj46711,this->_literals[146],_v_43214_shades);j::put(_obj46711,this->_literals[148],([&]()->V{V _logical46733=j::get(_v_43204_o,this->_literals[148]);return j::nullish(_logical46733)?V(true):_logical46733;})());j::put(_obj46711,this->_literals[120],(j::truth(([&]()->V{V _lhs46734=j::get(_v_43204_o,this->_literals[120]);V _rhs46735=j::builtin("undefined");return V(j::equal(_lhs46734,_rhs46735,true));})())?j::builtin("undefined"):([&]()->V{V _callee46736=this->_v_42465_positive.get();return j::call(_callee46736,j::Args{j::get(_v_43204_o,this->_literals[120]),this->_literals[120]});})()));return _obj46711;})();

}

return V{};
},2);
this->_v_43219_luminance.get()=j::function([=](const j::Args &_args_fn43220,const V &_receiver_fn43220,const V &_self_fn43220) mutable ->V{
V _v_43221_c;
_v_43221_c=_args_fn43220[0];
{
V _v_43222_r;
V _v_43223_g;
V _v_43224_b;
V _pattern46753=([&]()->V{V _receiver46749=([&]()->V{V _callee46752=this->_v_42457_rgb.get();return j::call(_callee46752,j::Args{_v_43221_c});})();V _method46750=this->_literals[14];V _method=j::get(_receiver46749,_method46750);j::Args _params46751=j::Args{j::function([=](const j::Args &_args_fn43225,const V &_receiver_fn43225,const V &_self_fn43225) mutable ->V{
V _v_43226_v;
_v_43226_v=_args_fn43225[0];
{
V _v_43227_k;
_v_43227_k=([&]()->V{V _lhs46737=_v_43226_v;V _rhs46738=V(255.0);return V(j::number(_lhs46737)/j::number(_rhs46738));})();
return (j::truth(([&]()->V{V _lhs46739=_v_43227_k;V _rhs46740=V(0.03928);return j::binary("<=",_lhs46739,_rhs46740);})())?([&]()->V{V _lhs46741=_v_43227_k;V _rhs46742=V(12.92);return V(j::number(_lhs46741)/j::number(_rhs46742));})():([&]()->V{V _lhs46743=([&]()->V{V _lhs46745=([&]()->V{V _lhs46747=_v_43227_k;V _rhs46748=V(0.055);return j::binary("+",_lhs46747,_rhs46748);})();V _rhs46746=V(1.055);return V(j::number(_lhs46745)/j::number(_rhs46746));})();V _rhs46744=V(2.4);return V(std::pow(j::number(_lhs46743),j::number(_rhs46744)));})());

}

return V{};
},1)};return j::call(_method,_params46751,_receiver46749);})();
_v_43222_r=j::get(_pattern46753,V(0));
_v_43223_g=j::get(_pattern46753,V(1));
_v_43224_b=j::get(_pattern46753,V(2));
return ([&]()->V{V _lhs46754=([&]()->V{V _lhs46756=([&]()->V{V _lhs46758=V(0.2126);V _rhs46759=_v_43222_r;return V(j::number(_lhs46758)*j::number(_rhs46759));})();V _rhs46757=([&]()->V{V _lhs46760=V(0.7152);V _rhs46761=_v_43223_g;return V(j::number(_lhs46760)*j::number(_rhs46761));})();return j::binary("+",_lhs46756,_rhs46757);})();V _rhs46755=([&]()->V{V _lhs46762=V(0.0722);V _rhs46763=_v_43224_b;return V(j::number(_lhs46762)*j::number(_rhs46763));})();return j::binary("+",_lhs46754,_rhs46755);})();

}

return V{};
},1);
this->_v_43229_legible.get()=j::function([=](const j::Args &_args_fn43230,const V &_receiver_fn43230,const V &_self_fn43230) mutable ->V{
V _v_43231_c;
V _v_43232_paper;
_v_43231_c=_args_fn43230[0];
_v_43232_paper=_args_fn43230[1];
{
j::Cell _v_43233_page;
V _v_43234_contrast;
V _v_43238_to;
V _v_43239_lo;
V _v_43240_hi;
_v_43233_page.get()=([&]()->V{V _callee46764=this->_v_43219_luminance.get();return j::call(_callee46764,j::Args{(j::truth(_v_43232_paper)?j::get(this->_v_43228_PAGE.get(),this->_literals[137]):j::get(this->_v_43228_PAGE.get(),this->_literals[26]))});})();
_v_43234_contrast=j::function([=](const j::Args &_args_fn43235,const V &_receiver_fn43235,const V &_self_fn43235) mutable ->V{
V _v_43236_h;
_v_43236_h=_args_fn43235[0];
{
V _v_43237_l;
_v_43237_l=([&]()->V{V _callee46765=this->_v_43219_luminance.get();return j::call(_callee46765,j::Args{_v_43236_h});})();
return ([&]()->V{V _lhs46766=([&]()->V{V _lhs46768=([&]()->V{V _receiver46772=j::builtin("Math");V _method46773=this->_literals[73];V _method=j::get(_receiver46772,_method46773);j::Args _params46774=j::Args{_v_43237_l,_v_43233_page.get()};return j::call(_method,_params46774,_receiver46772);})();V _rhs46769=V(0.05);return j::binary("+",_lhs46768,_rhs46769);})();V _rhs46767=([&]()->V{V _lhs46775=([&]()->V{V _receiver46779=j::builtin("Math");V _method46780=this->_literals[119];V _method=j::get(_receiver46779,_method46780);j::Args _params46781=j::Args{_v_43237_l,_v_43233_page.get()};return j::call(_method,_params46781,_receiver46779);})();V _rhs46776=V(0.05);return j::binary("+",_lhs46775,_rhs46776);})();return V(j::number(_lhs46766)/j::number(_rhs46767));})();

}

return V{};
},1);
if(j::truth(([&]()->V{V _lhs46782=([&]()->V{V _callee46784=_v_43234_contrast;return j::call(_callee46784,j::Args{_v_43231_c});})();V _rhs46783=V(3.0);return j::binary(">=",_lhs46782,_rhs46783);})())){return _v_43231_c;
}
_v_43238_to=(j::truth(_v_43232_paper)?this->_literals[157]:this->_literals[158]);
_v_43239_lo=V(0.0);
_v_43240_hi=V(1.0);
{V _v_43241_i;
_v_43241_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs46785=_v_43241_i;V _rhs46786=V(16.0);return j::binary("<",_lhs46785,_rhs46786);})());(void)(j::increment(_v_43241_i,1,false))){
V _v_43242_k;
_v_43242_k=([&]()->V{V _lhs46787=([&]()->V{V _lhs46789=_v_43239_lo;V _rhs46790=_v_43240_hi;return j::binary("+",_lhs46789,_rhs46790);})();V _rhs46788=V(2.0);return V(j::number(_lhs46787)/j::number(_rhs46788));})();
if(j::truth(([&]()->V{V _lhs46791=([&]()->V{V _callee46794=_v_43234_contrast;return j::call(_callee46794,j::Args{([&]()->V{V _callee46793=this->_v_42453_mix.get();return j::call(_callee46793,j::Args{_v_43231_c,_v_43238_to,_v_43242_k});})()});})();V _rhs46792=V(3.0);return j::binary(">=",_lhs46791,_rhs46792);})())){(void)((_v_43240_hi=_v_43242_k));
}else {(void)((_v_43239_lo=_v_43242_k));
}

}
}
return ([&]()->V{V _callee46797=this->_v_42453_mix.get();return j::call(_callee46797,j::Args{_v_43231_c,_v_43238_to,_v_43240_hi});})();

}

return V{};
},2);
this->_v_43243_shadesOf.get()=j::function([=](const j::Args &_args_fn43244,const V &_receiver_fn43244,const V &_self_fn43244) mutable ->V{
V _v_43245_c;
j::Cell _v_43246_by;
j::Cell _v_43247_n;
j::Cell _v_43248_paper;
_v_43245_c=_args_fn43244[0];
_v_43246_by.get()=_args_fn43244[1];
_v_43247_n.get()=_args_fn43244[2];
_v_43248_paper.get()=_args_fn43244[3];
{
j::Cell _v_43249_full;
_v_43249_full.get()=([&]()->V{V _callee46798=this->_v_43229_legible.get();return j::call(_callee46798,j::Args{_v_43245_c,_v_43248_paper.get()});})();
return ([&]()->V{V _receiver46830=j::builtin("Array");V _method46831=this->_literals[107];V _method=j::get(_receiver46830,_method46831);j::Args _params46832=j::Args{([&]()->V{V _obj46799=j::object();j::put(_obj46799,this->_literals[9],_v_43247_n.get());return _obj46799;})(),j::function([=](const j::Args &_args_fn43250,const V &_receiver_fn43250,const V &_self_fn43250) mutable ->V{
V _v_43251__;
V _v_43252_k;
_v_43251__=_args_fn43250[0];
_v_43252_k=_args_fn43250[1];
{
V _v_43253_f;
_v_43253_f=(j::truth(([&]()->V{V _lhs46800=_v_43247_n.get();V _rhs46801=V(1.0);return j::binary(">",_lhs46800,_rhs46801);})())?([&]()->V{V _lhs46802=_v_43252_k;V _rhs46803=([&]()->V{V _lhs46804=_v_43247_n.get();V _rhs46805=V(1.0);return V(j::number(_lhs46804)-j::number(_rhs46805));})();return V(j::number(_lhs46802)/j::number(_rhs46803));})():V(1.0));
if(j::truth(([&]()->V{V _logical46806=([&]()->V{V _lhs46807=_v_43246_by.get();V _rhs46808=this->_literals[137];return V(!j::equal(_lhs46807,_rhs46808,true));})();return !j::truth(_logical46806)?_v_43248_paper.get():_logical46806;})())){return ([&]()->V{V _callee46813=this->_v_42453_mix.get();return j::call(_callee46813,j::Args{this->_literals[157],_v_43249_full.get(),([&]()->V{V _lhs46809=V(0.45);V _rhs46810=([&]()->V{V _lhs46811=V(0.55);V _rhs46812=_v_43253_f;return V(j::number(_lhs46811)*j::number(_rhs46812));})();return j::binary("+",_lhs46809,_rhs46810);})()});})();
}
return (j::truth(([&]()->V{V _lhs46814=_v_43253_f;V _rhs46815=([&]()->V{V _lhs46816=V(2.0);V _rhs46817=V(3.0);return V(j::number(_lhs46816)/j::number(_rhs46817));})();return j::binary("<=",_lhs46814,_rhs46815);})())?([&]()->V{V _callee46822=this->_v_42453_mix.get();return j::call(_callee46822,j::Args{this->_literals[157],_v_43249_full.get(),([&]()->V{V _lhs46818=V(0.45);V _rhs46819=([&]()->V{V _lhs46820=V(0.825);V _rhs46821=_v_43253_f;return V(j::number(_lhs46820)*j::number(_rhs46821));})();return j::binary("+",_lhs46818,_rhs46819);})()});})():([&]()->V{V _callee46829=this->_v_42453_mix.get();return j::call(_callee46829,j::Args{_v_43249_full.get(),this->_literals[158],([&]()->V{V _lhs46823=([&]()->V{V _lhs46825=_v_43253_f;V _rhs46826=([&]()->V{V _lhs46827=V(2.0);V _rhs46828=V(3.0);return V(j::number(_lhs46827)/j::number(_rhs46828));})();return V(j::number(_lhs46825)-j::number(_rhs46826));})();V _rhs46824=V(1.5);return V(j::number(_lhs46823)*j::number(_rhs46824));})()});})());

}

return V{};
},2)};return j::call(_method,_params46832,_receiver46830);})();

}

return V{};
},4);
this->_v_43254_listAt.get()=j::function([=](const j::Args &_args_fn43255,const V &_receiver_fn43255,const V &_self_fn43255) mutable ->V{
V _v_43256_shapes;
V _v_43257_t;
V _v_43258_who;
_v_43256_shapes=_args_fn43255[0];
_v_43257_t=_args_fn43255[1];
_v_43258_who=_args_fn43255[2];
{
V _v_43259_list;
_v_43259_list=(j::truth(([&]()->V{V _lhs46833=j::unary("typeof",_v_43256_shapes);V _rhs46834=this->_literals[0];return V(j::equal(_lhs46833,_rhs46834,true));})())?([&]()->V{V _callee46835=_v_43256_shapes;return j::call(_callee46835,j::Args{_v_43257_t});})():_v_43256_shapes);
if(j::truth(j::unary("!",([&]()->V{V _receiver46836=j::builtin("Array");V _method46837=this->_literals[8];V _method=j::get(_receiver46836,_method46837);j::Args _params46838=j::Args{_v_43259_list};return j::call(_method,_params46838,_receiver46836);})()))){(void)(([&]()->V{V _callee46843=this->_v_42449_fail.get();return j::call(_callee46843,j::Args{([&]()->V{std::u16string _text46839;_text46839+=u"";_text46839+=j::string(_v_43258_who);_text46839+=u" takes a list of shapes, such as [torus()], ";_text46839+=j::string((j::truth(([&]()->V{V _lhs46840=j::unary("typeof",_v_43256_shapes);V _rhs46841=this->_literals[0];return V(j::equal(_lhs46840,_rhs46841,true));})())?this->_literals[159]:this->_literals[160]));_text46839+=u" ";_text46839+=j::string(([&]()->V{V _callee46842=this->_v_42462_shown.get();return j::call(_callee46842,j::Args{_v_43259_list});})());_text46839+=u"";return V(std::move(_text46839));})()});})());
}
return _v_43259_list;

}

return V{};
},3);
this->_v_43279_rate.get()=j::function([=](const j::Args &_args_fn43280,const V &_receiver_fn43280,const V &_self_fn43280) mutable ->V{
V _v_43281_w;
V _v_43282_period;
_v_43281_w=_args_fn43280[0];
_v_43282_period=_args_fn43280[1];
{
if(j::truth(([&]()->V{V _logical46844=j::unary("!",_v_43281_w);return !j::truth(_logical46844)?([&]()->V{V _lhs46845=_v_43282_period;V _rhs46846=j::builtin("undefined");return V(j::equal(_lhs46845,_rhs46846,true));})():_logical46844;})())){return _v_43281_w;
}
return ([&]()->V{V _lhs46847=([&]()->V{V _lhs46849=([&]()->V{V _lhs46851=([&]()->V{V _receiver46854=j::builtin("Math");V _method46855=this->_literals[161];V _method=j::get(_receiver46854,_method46855);j::Args _params46856=j::Args{_v_43281_w};return j::call(_method,_params46856,_receiver46854);})();V _rhs46852=([&]()->V{V _receiver46870=j::builtin("Math");V _method46871=this->_literals[73];V _method=j::get(_receiver46870,_method46871);j::Args _params46872=j::Args{V(1.0),([&]()->V{V _number46862=([&]()->V{V _lhs46863=([&]()->V{V _lhs46865=([&]()->V{V _number46867=_v_43281_w;return V(std::fabs(j::number(_number46867)));})();V _rhs46866=_v_43282_period;return V(j::number(_lhs46865)*j::number(_rhs46866));})();V _rhs46864=this->_v_42444_TAU.get();return V(j::number(_lhs46863)/j::number(_rhs46864));})();return V(std::floor(j::number(_number46862)+.5));})()};return j::call(_method,_params46872,_receiver46870);})();return V(j::number(_lhs46851)*j::number(_rhs46852));})();V _rhs46850=this->_v_42444_TAU.get();return V(j::number(_lhs46849)*j::number(_rhs46850));})();V _rhs46848=_v_43282_period;return V(j::number(_lhs46847)/j::number(_rhs46848));})();

}

return V{};
},2);
this->_v_43283_orbits.get()=j::function([=](const j::Args &_args_fn43284,const V &_receiver_fn43284,const V &_self_fn43284) mutable ->V{
V _v_43285_bodies;
V _v_43286_period;
_v_43285_bodies=_args_fn43284[0];
_v_43286_period=_args_fn43284[1];
{
if(j::truth(([&]()->V{V _lhs46873=_v_43286_period;V _rhs46874=j::builtin("undefined");return V(j::equal(_lhs46873,_rhs46874,true));})())){return V{};
}
{for(const auto &_item46875:j::elements(_v_43285_bodies)){V _v_43287_b;
_v_43287_b=_item46875;
{
V _v_43288_p;
_v_43288_p=(j::truth(([&]()->V{V _lhs46876=j::unary("typeof",j::get(_v_43287_b,this->_literals[31]));V _rhs46877=this->_literals[0];return V(j::equal(_lhs46876,_rhs46877,true));})())?([&]()->V{V _chain46878=this->_v_42591_ORBITS.get();V _chain46879=j::get(_chain46878,this->_literals[38]);V _chain46880=j::call(_chain46879,j::Args{j::get(_v_43287_b,this->_literals[31])},_chain46878);if(j::nullish(_chain46880))return V{};V _chain46881=j::get(_chain46880,this->_literals[120]);return _chain46881;})():j::builtin("undefined"));
if(j::truth(([&]()->V{V _logical46882=([&]()->V{V _lhs46883=_v_43288_p;V _rhs46884=j::builtin("undefined");return V(!j::equal(_lhs46883,_rhs46884,true));})();return j::truth(_logical46882)?j::unary("!",([&]()->V{V _callee46887=this->_v_43260_whole.get();return j::call(_callee46887,j::Args{([&]()->V{V _lhs46885=_v_43286_period;V _rhs46886=_v_43288_p;return V(j::number(_lhs46885)/j::number(_rhs46886));})()});})()):_logical46882;})())){(void)(([&]()->V{V _callee46889=this->_v_42449_fail.get();return j::call(_callee46889,j::Args{([&]()->V{std::u16string _text46888;_text46888+=u"an orbit going round every ";_text46888+=j::string(_v_43288_p);_text46888+=u" seconds doesn't go round a whole number of times in the scene's period of ";_text46888+=j::string(_v_43286_period);_text46888+=u": make the period a multiple of ";_text46888+=j::string(_v_43288_p);_text46888+=u"";return V(std::move(_text46888));})()});})());
}
if(j::truth(j::get(_v_43287_b,this->_literals[44]))){(void)(([&]()->V{V _callee46890=_self_fn43284;return j::call(_callee46890,j::Args{j::get(_v_43287_b,this->_literals[44]),_v_43286_period});})());
}

}
}}

}

return V{};
},2);
this->_v_43289_speed.get()=j::function([=](const j::Args &_args_fn43290,const V &_receiver_fn43290,const V &_self_fn43290) mutable ->V{
V _v_43291_b;
j::Cell _v_43292_period;
_v_43291_b=_args_fn43290[0];
_v_43292_period.get()=_args_fn43290[1];
{
V _v_43293_p;
V _v_43294_inner;
_v_43293_p=(j::truth(([&]()->V{V _lhs46891=j::unary("typeof",j::get(_v_43291_b,this->_literals[31]));V _rhs46892=this->_literals[0];return V(j::equal(_lhs46891,_rhs46892,true));})())?([&]()->V{V _chain46893=this->_v_42591_ORBITS.get();V _chain46894=j::get(_chain46893,this->_literals[38]);V _chain46895=j::call(_chain46894,j::Args{j::get(_v_43291_b,this->_literals[31])},_chain46893);if(j::nullish(_chain46895))return V{};V _chain46896=j::get(_chain46895,this->_literals[120]);return _chain46896;})():j::builtin("undefined"));
_v_43294_inner=V(0.0);
{for(const auto &_item46897:j::elements(([&]()->V{V _logical46898=j::get(_v_43291_b,this->_literals[44]);return j::nullish(_logical46898)?([&]()->V{j::Args _array46899;return j::array(std::move(_array46899));})():_logical46898;})())){V _v_43295_c;
_v_43295_c=_item46897;
(void)((_v_43294_inner=([&]()->V{V _receiver46904=j::builtin("Math");V _method46905=this->_literals[73];V _method=j::get(_receiver46904,_method46905);j::Args _params46906=j::Args{_v_43294_inner,([&]()->V{V _callee46901=_self_fn43290;return j::call(_callee46901,j::Args{_v_43295_c,_v_43292_period.get()});})()};return j::call(_method,_params46906,_receiver46904);})()));
}}
return ([&]()->V{V _lhs46907=([&]()->V{V _lhs46909=([&]()->V{V _receiver46916=j::get(_v_43291_b,this->_literals[29]);V _method46917=this->_literals[162];V _method=j::get(_receiver46916,_method46917);j::Args _params46918=j::Args{j::function([=](const j::Args &_args_fn43296,const V &_receiver_fn43296,const V &_self_fn43296) mutable ->V{
V _v_43297_sum;
V _v_43298_w;
_v_43297_sum=_args_fn43296[0];
_v_43298_w=_args_fn43296[1];
return ([&]()->V{V _lhs46911=_v_43297_sum;V _rhs46912=([&]()->V{V _number46914=([&]()->V{V _callee46915=this->_v_43279_rate.get();return j::call(_callee46915,j::Args{_v_43298_w,_v_43292_period.get()});})();return V(std::fabs(j::number(_number46914)));})();return j::binary("+",_lhs46911,_rhs46912);})();
return V{};
},2),V(0.0)};return j::call(_method,_params46918,_receiver46916);})();V _rhs46910=(j::truth(_v_43293_p)?([&]()->V{V _lhs46919=this->_v_42444_TAU.get();V _rhs46920=_v_43293_p;return V(j::number(_lhs46919)/j::number(_rhs46920));})():V(0.0));return j::binary("+",_lhs46909,_rhs46910);})();V _rhs46908=_v_43294_inner;return j::binary("+",_lhs46907,_rhs46908);})();

}

return V{};
},2);
this->_v_43303_rotation.get()=j::function([=](const j::Args &_args_fn43304,const V &_receiver_fn43304,const V &_self_fn43304) mutable ->V{
V _v_43305_m;
V _v_43306_ax;
V _v_43307_ay;
V _v_43308_az;
_v_43305_m=_args_fn43304[0];
_v_43306_ax=_args_fn43304[1];
_v_43307_ay=_args_fn43304[2];
_v_43308_az=_args_fn43304[3];
{
V _v_43309_ca;
V _v_43310_sa;
V _v_43311_cb;
V _v_43312_sb;
V _v_43313_cc;
V _v_43314_sc;
_v_43309_ca=([&]()->V{V _number46921=_v_43306_ax;return V(std::cos(j::number(_number46921)));})();
_v_43310_sa=([&]()->V{V _number46922=_v_43306_ax;return V(std::sin(j::number(_number46922)));})();
_v_43311_cb=([&]()->V{V _number46923=_v_43307_ay;return V(std::cos(j::number(_number46923)));})();
_v_43312_sb=([&]()->V{V _number46924=_v_43307_ay;return V(std::sin(j::number(_number46924)));})();
_v_43313_cc=([&]()->V{V _number46925=_v_43308_az;return V(std::cos(j::number(_number46925)));})();
_v_43314_sc=([&]()->V{V _number46926=_v_43308_az;return V(std::sin(j::number(_number46926)));})();
(void)(([&]()->V{V _base46928=_v_43305_m;V _key46929=V(0.0);V _assign46927=([&]()->V{V _lhs46930=_v_43313_cc;V _rhs46931=_v_43311_cb;return V(j::number(_lhs46930)*j::number(_rhs46931));})();return j::put(_base46928,_key46929,_assign46927);})());
(void)(([&]()->V{V _base46933=_v_43305_m;V _key46934=V(1.0);V _assign46932=([&]()->V{V _lhs46935=([&]()->V{V _lhs46937=([&]()->V{V _lhs46939=_v_43313_cc;V _rhs46940=_v_43312_sb;return V(j::number(_lhs46939)*j::number(_rhs46940));})();V _rhs46938=_v_43310_sa;return V(j::number(_lhs46937)*j::number(_rhs46938));})();V _rhs46936=([&]()->V{V _lhs46941=_v_43314_sc;V _rhs46942=_v_43309_ca;return V(j::number(_lhs46941)*j::number(_rhs46942));})();return V(j::number(_lhs46935)-j::number(_rhs46936));})();return j::put(_base46933,_key46934,_assign46932);})());
(void)(([&]()->V{V _base46944=_v_43305_m;V _key46945=V(2.0);V _assign46943=([&]()->V{V _lhs46946=([&]()->V{V _lhs46948=([&]()->V{V _lhs46950=_v_43313_cc;V _rhs46951=_v_43312_sb;return V(j::number(_lhs46950)*j::number(_rhs46951));})();V _rhs46949=_v_43309_ca;return V(j::number(_lhs46948)*j::number(_rhs46949));})();V _rhs46947=([&]()->V{V _lhs46952=_v_43314_sc;V _rhs46953=_v_43310_sa;return V(j::number(_lhs46952)*j::number(_rhs46953));})();return j::binary("+",_lhs46946,_rhs46947);})();return j::put(_base46944,_key46945,_assign46943);})());
(void)(([&]()->V{V _base46955=_v_43305_m;V _key46956=V(3.0);V _assign46954=([&]()->V{V _lhs46957=_v_43314_sc;V _rhs46958=_v_43311_cb;return V(j::number(_lhs46957)*j::number(_rhs46958));})();return j::put(_base46955,_key46956,_assign46954);})());
(void)(([&]()->V{V _base46960=_v_43305_m;V _key46961=V(4.0);V _assign46959=([&]()->V{V _lhs46962=([&]()->V{V _lhs46964=([&]()->V{V _lhs46966=_v_43314_sc;V _rhs46967=_v_43312_sb;return V(j::number(_lhs46966)*j::number(_rhs46967));})();V _rhs46965=_v_43310_sa;return V(j::number(_lhs46964)*j::number(_rhs46965));})();V _rhs46963=([&]()->V{V _lhs46968=_v_43313_cc;V _rhs46969=_v_43309_ca;return V(j::number(_lhs46968)*j::number(_rhs46969));})();return j::binary("+",_lhs46962,_rhs46963);})();return j::put(_base46960,_key46961,_assign46959);})());
(void)(([&]()->V{V _base46971=_v_43305_m;V _key46972=V(5.0);V _assign46970=([&]()->V{V _lhs46973=([&]()->V{V _lhs46975=([&]()->V{V _lhs46977=_v_43314_sc;V _rhs46978=_v_43312_sb;return V(j::number(_lhs46977)*j::number(_rhs46978));})();V _rhs46976=_v_43309_ca;return V(j::number(_lhs46975)*j::number(_rhs46976));})();V _rhs46974=([&]()->V{V _lhs46979=_v_43313_cc;V _rhs46980=_v_43310_sa;return V(j::number(_lhs46979)*j::number(_rhs46980));})();return V(j::number(_lhs46973)-j::number(_rhs46974));})();return j::put(_base46971,_key46972,_assign46970);})());
(void)(([&]()->V{V _base46982=_v_43305_m;V _key46983=V(6.0);V _assign46981=j::unary("-",_v_43312_sb);return j::put(_base46982,_key46983,_assign46981);})());
(void)(([&]()->V{V _base46985=_v_43305_m;V _key46986=V(7.0);V _assign46984=([&]()->V{V _lhs46987=_v_43311_cb;V _rhs46988=_v_43310_sa;return V(j::number(_lhs46987)*j::number(_rhs46988));})();return j::put(_base46985,_key46986,_assign46984);})());
(void)(([&]()->V{V _base46990=_v_43305_m;V _key46991=V(8.0);V _assign46989=([&]()->V{V _lhs46992=_v_43311_cb;V _rhs46993=_v_43309_ca;return V(j::number(_lhs46992)*j::number(_rhs46993));})();return j::put(_base46990,_key46991,_assign46989);})());

}

return V{};
},4);
this->_v_43315_times.get()=j::function([=](const j::Args &_args_fn43316,const V &_receiver_fn43316,const V &_self_fn43316) mutable ->V{
V _v_43317_a;
V _v_43318_b;
V _v_43319_c;
_v_43317_a=_args_fn43316[0];
_v_43318_b=_args_fn43316[1];
_v_43319_c=_args_fn43316[2];
{
{V _v_43320_i;
_v_43320_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs46994=_v_43320_i;V _rhs46995=V(9.0);return j::binary("<",_lhs46994,_rhs46995);})());(void)((_v_43320_i=j::binary("+",_v_43320_i,V(3.0))))){{V _v_43321_j;
_v_43321_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs46997=_v_43321_j;V _rhs46998=V(3.0);return j::binary("<",_lhs46997,_rhs46998);})());(void)(j::increment(_v_43321_j,1,false))){(void)(([&]()->V{V _base47000=_v_43317_a;V _key47001=([&]()->V{V _lhs47002=_v_43320_i;V _rhs47003=_v_43321_j;return j::binary("+",_lhs47002,_rhs47003);})();V _assign46999=([&]()->V{V _lhs47004=([&]()->V{V _lhs47006=([&]()->V{V _lhs47008=j::get(_v_43318_b,_v_43320_i);V _rhs47009=j::get(_v_43319_c,_v_43321_j);return V(j::number(_lhs47008)*j::number(_rhs47009));})();V _rhs47007=([&]()->V{V _lhs47010=j::get(_v_43318_b,([&]()->V{V _lhs47012=_v_43320_i;V _rhs47013=V(1.0);return j::binary("+",_lhs47012,_rhs47013);})());V _rhs47011=j::get(_v_43319_c,([&]()->V{V _lhs47014=V(3.0);V _rhs47015=_v_43321_j;return j::binary("+",_lhs47014,_rhs47015);})());return V(j::number(_lhs47010)*j::number(_rhs47011));})();return j::binary("+",_lhs47006,_rhs47007);})();V _rhs47005=([&]()->V{V _lhs47016=j::get(_v_43318_b,([&]()->V{V _lhs47018=_v_43320_i;V _rhs47019=V(2.0);return j::binary("+",_lhs47018,_rhs47019);})());V _rhs47017=j::get(_v_43319_c,([&]()->V{V _lhs47020=V(6.0);V _rhs47021=_v_43321_j;return j::binary("+",_lhs47020,_rhs47021);})());return V(j::number(_lhs47016)*j::number(_rhs47017));})();return j::binary("+",_lhs47004,_rhs47005);})();return j::put(_base47000,_key47001,_assign46999);})());
}}
}}

}

return V{};
},3);
this->_v_43327_camera.get()=j::function([=](const j::Args &_args_fn43328,const V &_receiver_fn43328,const V &_self_fn43328) mutable ->V{
V _v_43329_c;
V _v_43330_tilt;
V _v_43331_yaw;
_v_43329_c=_args_fn43328[0];
_v_43330_tilt=_args_fn43328[1];
_v_43331_yaw=_args_fn43328[2];
{
(void)(([&]()->V{V _callee47022=this->_v_43303_rotation.get();return j::call(_callee47022,j::Args{this->_v_43322_YAW.get(),V(0.0),_v_43331_yaw,V(0.0)});})());
(void)(([&]()->V{V _callee47023=this->_v_43303_rotation.get();return j::call(_callee47023,j::Args{this->_v_43323_TILT.get(),j::unary("-",_v_43330_tilt),V(0.0),V(0.0)});})());
(void)(([&]()->V{V _callee47024=this->_v_43315_times.get();return j::call(_callee47024,j::Args{_v_43329_c,this->_v_43323_TILT.get(),this->_v_43322_YAW.get()});})());

}

return V{};
},3);
this->_v_43332_cameraAt.get()=j::function([=](const j::Args &_args_fn43333,const V &_receiver_fn43333,const V &_self_fn43333) mutable ->V{
V _v_43334_c;
V _v_43335_set;
V _v_43336_t;
V _v_43337_loop;
_v_43334_c=_args_fn43333[0];
_v_43335_set=_args_fn43333[1];
_v_43336_t=_args_fn43333[2];
_v_43337_loop=_args_fn43333[3];
{
(void)(([&]()->V{V _callee47029=this->_v_43327_camera.get();return j::call(_callee47029,j::Args{_v_43334_c,j::get(_v_43335_set,this->_literals[129]),([&]()->V{V _lhs47025=([&]()->V{V _callee47027=this->_v_43279_rate.get();return j::call(_callee47027,j::Args{j::get(_v_43335_set,this->_literals[29]),j::get(_v_43335_set,this->_literals[120])});})();V _rhs47026=([&]()->V{V _callee47028=this->_v_43299_into.get();return j::call(_callee47028,j::Args{_v_43336_t,_v_43337_loop});})();return V(j::number(_lhs47025)*j::number(_rhs47026));})()});})());

}

return V{};
},4);
this->_v_43338_pose.get()=j::function([=](const j::Args &_args_fn43339,const V &_receiver_fn43339,const V &_self_fn43339) mutable ->V{
V _v_43340_m;
V _v_43341_b;
V _v_43342_t;
V _v_43343_period;
V _v_43344_loop;
V _v_43345_c;
_v_43340_m=_args_fn43339[0];
_v_43341_b=_args_fn43339[1];
_v_43342_t=_args_fn43339[2];
_v_43343_period=_args_fn43339[3];
_v_43344_loop=_args_fn43339[4];
_v_43345_c=_args_fn43339[5];
{
V _v_43346_rot;
V _v_43347_T;
_v_43346_rot=(j::truth(([&]()->V{V _lhs47030=j::unary("typeof",j::get(_v_43341_b,this->_literals[32]));V _rhs47031=this->_literals[0];return V(j::equal(_lhs47030,_rhs47031,true));})())?([&]()->V{V _receiver47032=_v_43341_b;V _method47033=this->_literals[32];V _method=j::get(_receiver47032,_method47033);j::Args _params47034=j::Args{_v_43342_t};return j::call(_method,_params47034,_receiver47032);})():j::get(_v_43341_b,this->_literals[32]));
if(j::truth(j::unary("!",([&]()->V{V _receiver47035=j::builtin("Array");V _method47036=this->_literals[8];V _method=j::get(_receiver47035,_method47036);j::Args _params47037=j::Args{_v_43346_rot};return j::call(_method,_params47037,_receiver47035);})()))){(void)((_v_43346_rot=this->_v_42592_ORIGIN.get()));
}
_v_43347_T=([&]()->V{V _callee47039=this->_v_43299_into.get();return j::call(_callee47039,j::Args{_v_43342_t,_v_43344_loop});})();
(void)(([&]()->V{V _callee47055=this->_v_43303_rotation.get();return j::call(_callee47055,j::Args{this->_v_43324_OWN.get(),([&]()->V{V _lhs47040=j::get(_v_43346_rot,V(0.0));V _rhs47041=([&]()->V{V _lhs47042=([&]()->V{V _callee47044=this->_v_43279_rate.get();return j::call(_callee47044,j::Args{j::get(j::get(_v_43341_b,this->_literals[29]),V(0.0)),_v_43343_period});})();V _rhs47043=_v_43347_T;return V(j::number(_lhs47042)*j::number(_rhs47043));})();return j::binary("+",_lhs47040,_rhs47041);})(),([&]()->V{V _lhs47045=j::get(_v_43346_rot,V(1.0));V _rhs47046=([&]()->V{V _lhs47047=([&]()->V{V _callee47049=this->_v_43279_rate.get();return j::call(_callee47049,j::Args{j::get(j::get(_v_43341_b,this->_literals[29]),V(1.0)),_v_43343_period});})();V _rhs47048=_v_43347_T;return V(j::number(_lhs47047)*j::number(_rhs47048));})();return j::binary("+",_lhs47045,_rhs47046);})(),([&]()->V{V _lhs47050=j::get(_v_43346_rot,V(2.0));V _rhs47051=([&]()->V{V _lhs47052=([&]()->V{V _callee47054=this->_v_43279_rate.get();return j::call(_callee47054,j::Args{j::get(j::get(_v_43341_b,this->_literals[29]),V(2.0)),_v_43343_period});})();V _rhs47053=_v_43347_T;return V(j::number(_lhs47052)*j::number(_rhs47053));})();return j::binary("+",_lhs47050,_rhs47051);})()});})());
(void)(([&]()->V{V _callee47056=this->_v_43315_times.get();return j::call(_callee47056,j::Args{_v_43340_m,_v_43345_c,this->_v_43324_OWN.get()});})());

}

return V{};
},6);
this->_v_43348_corners.get()=j::function([=](const j::Args &_args_fn43349,const V &_receiver_fn43349,const V &_self_fn43349) mutable ->V{
V _v_43350_b;
V _v_43351_t;
V _v_43352_period;
V _v_43353_loop;
_v_43350_b=_args_fn43349[0];
_v_43351_t=_args_fn43349[1];
_v_43352_period=_args_fn43349[2];
_v_43353_loop=_args_fn43349[3];
{
V _v_43366_out;
V _v_43367_m;
if(j::truth(j::get(_v_43350_b,this->_literals[80]))){return j::get(([&]()->V{V _receiver47057=_v_43350_b;V _method47058=this->_literals[80];V _method=j::get(_receiver47057,_method47058);j::Args _params47059=j::Args{V(6.0),_v_43351_t};return j::call(_method,_params47059,_receiver47057);})(),this->_literals[52]);
}
if(j::truth(j::get(_v_43350_b,this->_literals[108]))){
V _v_43354_dots;
V _v_43355_list;
_v_43354_dots=j::get(j::get(_v_43350_b,this->_literals[108]),this->_literals[109]);
if(j::truth(([&]()->V{V _lhs47060=j::unary("typeof",_v_43354_dots);V _rhs47061=this->_literals[0];return V(!j::equal(_lhs47060,_rhs47061,true));})())){return _v_43354_dots;
}
_v_43355_list=([&]()->V{V _callee47062=_v_43354_dots;return j::call(_callee47062,j::Args{_v_43351_t});})();
return ([&]()->V{V _receiver47070=j::builtin("Float32Array");V _method47071=this->_literals[107];V _method=j::get(_receiver47070,_method47071);j::Args _params47072=j::Args{(j::truth(([&]()->V{V _receiver47063=j::builtin("Array");V _method47064=this->_literals[8];V _method=j::get(_receiver47063,_method47064);j::Args _params47065=j::Args{_v_43355_list};return j::call(_method,_params47065,_receiver47063);})())?([&]()->V{V _receiver47066=_v_43355_list;V _method47067=this->_literals[106];V _method=j::get(_receiver47066,_method47067);j::Args _params47068=j::Args{};return j::call(_method,_params47068,_receiver47066);})():([&]()->V{j::Args _array47069;return j::array(std::move(_array47069));})())};return j::call(_method,_params47072,_receiver47070);})();

}

if(j::truth(j::get(_v_43350_b,this->_literals[112]))){
V _v_43356_paths;
_v_43356_paths=j::get(j::get(_v_43350_b,this->_literals[112]),this->_literals[113]);
if(j::truth(([&]()->V{V _lhs47073=j::unary("typeof",_v_43356_paths);V _rhs47074=this->_literals[0];return V(!j::equal(_lhs47073,_rhs47074,true));})())){
j::Cell _v_43357_out;
_v_43357_out.get()=([&]()->V{V _callee47080=j::builtin("Float32Array");return j::construct(_callee47080,j::Args{([&]()->V{V _receiver47077=_v_43356_paths;V _method47078=this->_literals[162];V _method=j::get(_receiver47077,_method47078);j::Args _params47079=j::Args{j::function([=](const j::Args &_args_fn43358,const V &_receiver_fn43358,const V &_self_fn43358) mutable ->V{
V _v_43359_n;
V _v_43360_p;
_v_43359_n=_args_fn43358[0];
_v_43360_p=_args_fn43358[1];
return ([&]()->V{V _lhs47075=_v_43359_n;V _rhs47076=j::get(_v_43360_p,this->_literals[9]);return j::binary("+",_lhs47075,_rhs47076);})();
return V{};
},2),V(0.0)};return j::call(_method,_params47079,_receiver47077);})()});})();
(void)(([&]()->V{V _receiver47086=_v_43356_paths;V _method47087=this->_literals[162];V _method=j::get(_receiver47086,_method47087);j::Args _params47088=j::Args{j::function([=](const j::Args &_args_fn43361,const V &_receiver_fn43361,const V &_self_fn43361) mutable ->V{
V _v_43362_at;
V _v_43363_p;
_v_43362_at=_args_fn43361[0];
_v_43363_p=_args_fn43361[1];
return (([&]()->V{V _receiver47081=_v_43357_out.get();V _method47082=this->_literals[37];V _method=j::get(_receiver47081,_method47082);j::Args _params47083=j::Args{_v_43363_p,_v_43362_at};return j::call(_method,_params47083,_receiver47081);})(),([&]()->V{V _lhs47084=_v_43362_at;V _rhs47085=j::get(_v_43363_p,this->_literals[9]);return j::binary("+",_lhs47084,_rhs47085);})());
return V{};
},2),V(0.0)};return j::call(_method,_params47088,_receiver47086);})());
return _v_43357_out.get();

}

return ([&]()->V{V _receiver47103=j::builtin("Float32Array");V _method47104=this->_literals[107];V _method=j::get(_receiver47103,_method47104);j::Args _params47105=j::Args{([&]()->V{V _receiver47099=([&]()->V{V _callee47102=_v_43356_paths;return j::call(_callee47102,j::Args{_v_43351_t});})();V _method47100=this->_literals[163];V _method=j::get(_receiver47099,_method47100);j::Args _params47101=j::Args{j::function([=](const j::Args &_args_fn43364,const V &_receiver_fn43364,const V &_self_fn43364) mutable ->V{
V _v_43365_p;
_v_43365_p=_args_fn43364[0];
return (j::truth(([&]()->V{V _receiver47089=j::builtin("Array");V _method47090=this->_literals[8];V _method=j::get(_receiver47089,_method47090);j::Args _params47091=j::Args{_v_43365_p};return j::call(_method,_params47091,_receiver47089);})())?([&]()->V{V _receiver47092=([&]()->V{V _receiver47095=_v_43365_p;V _method47096=this->_literals[65];V _method=j::get(_receiver47095,_method47096);j::Args _params47097=j::Args{j::get(j::builtin("Array"),this->_literals[8])};return j::call(_method,_params47097,_receiver47095);})();V _method47093=this->_literals[106];V _method=j::get(_receiver47092,_method47093);j::Args _params47094=j::Args{};return j::call(_method,_params47094,_receiver47092);})():([&]()->V{j::Args _array47098;return j::array(std::move(_array47098));})());
return V{};
},1)};return j::call(_method,_params47101,_receiver47099);})()};return j::call(_method,_params47105,_receiver47103);})();

}

_v_43366_out=([&]()->V{j::Args _array47106;return j::array(std::move(_array47106));})();
_v_43367_m=([&]()->V{V _callee47107=j::builtin("Float64Array");return j::construct(_callee47107,j::Args{V(9.0)});})();
{for(const auto &_item47108:j::elements(([&]()->V{V _logical47109=j::get(_v_43350_b,this->_literals[44]);return j::nullish(_logical47109)?([&]()->V{j::Args _array47110;return j::array(std::move(_array47110));})():_logical47109;})())){V _v_43368_c;
_v_43368_c=_item47108;
{
V _v_43369_at;
V _v_43370_pts;
V _v_43371_k;
_v_43369_at=(j::truth(([&]()->V{V _lhs47111=j::unary("typeof",j::get(_v_43368_c,this->_literals[31]));V _rhs47112=this->_literals[0];return V(j::equal(_lhs47111,_rhs47112,true));})())?([&]()->V{V _receiver47113=_v_43368_c;V _method47114=this->_literals[31];V _method=j::get(_receiver47113,_method47114);j::Args _params47115=j::Args{_v_43351_t};return j::call(_method,_params47115,_receiver47113);})():j::get(_v_43368_c,this->_literals[31]));
if(j::truth(j::unary("!",([&]()->V{V _receiver47116=j::builtin("Array");V _method47117=this->_literals[8];V _method=j::get(_receiver47116,_method47117);j::Args _params47118=j::Args{_v_43369_at};return j::call(_method,_params47118,_receiver47116);})()))){continue;
}
(void)(([&]()->V{V _callee47119=this->_v_43338_pose.get();return j::call(_callee47119,j::Args{_v_43367_m,_v_43368_c,_v_43351_t,_v_43352_period,_v_43353_loop,this->_v_43325_IDENTITY.get()});})());
_v_43370_pts=([&]()->V{V _callee47120=_self_fn43349;return j::call(_callee47120,j::Args{_v_43368_c,_v_43351_t,_v_43352_period,_v_43353_loop});})();
_v_43371_k=j::get(_v_43368_c,this->_literals[33]);
{V _v_43372_i;
_v_43372_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs47121=_v_43372_i;V _rhs47122=j::get(_v_43370_pts,this->_literals[9]);return j::binary("<",_lhs47121,_rhs47122);})());(void)((_v_43372_i=j::binary("+",_v_43372_i,V(3.0))))){
V _v_43373_x;
V _v_43374_y;
V _v_43375_w;
_v_43373_x=([&]()->V{V _lhs47124=j::get(_v_43370_pts,_v_43372_i);V _rhs47125=_v_43371_k;return V(j::number(_lhs47124)*j::number(_rhs47125));})();
_v_43374_y=([&]()->V{V _lhs47126=j::get(_v_43370_pts,([&]()->V{V _lhs47128=_v_43372_i;V _rhs47129=V(1.0);return j::binary("+",_lhs47128,_rhs47129);})());V _rhs47127=_v_43371_k;return V(j::number(_lhs47126)*j::number(_rhs47127));})();
_v_43375_w=([&]()->V{V _lhs47130=j::get(_v_43370_pts,([&]()->V{V _lhs47132=_v_43372_i;V _rhs47133=V(2.0);return j::binary("+",_lhs47132,_rhs47133);})());V _rhs47131=_v_43371_k;return V(j::number(_lhs47130)*j::number(_rhs47131));})();
(void)(([&]()->V{V _receiver47170=_v_43366_out;V _method47171=this->_literals[68];V _method=j::get(_receiver47170,_method47171);j::Args _params47172=j::Args{([&]()->V{V _lhs47134=([&]()->V{V _lhs47136=([&]()->V{V _lhs47138=([&]()->V{V _lhs47140=j::get(_v_43367_m,V(0.0));V _rhs47141=_v_43373_x;return V(j::number(_lhs47140)*j::number(_rhs47141));})();V _rhs47139=([&]()->V{V _lhs47142=j::get(_v_43367_m,V(1.0));V _rhs47143=_v_43374_y;return V(j::number(_lhs47142)*j::number(_rhs47143));})();return j::binary("+",_lhs47138,_rhs47139);})();V _rhs47137=([&]()->V{V _lhs47144=j::get(_v_43367_m,V(2.0));V _rhs47145=_v_43375_w;return V(j::number(_lhs47144)*j::number(_rhs47145));})();return j::binary("+",_lhs47136,_rhs47137);})();V _rhs47135=j::get(_v_43369_at,V(0.0));return j::binary("+",_lhs47134,_rhs47135);})(),([&]()->V{V _lhs47146=([&]()->V{V _lhs47148=([&]()->V{V _lhs47150=([&]()->V{V _lhs47152=j::get(_v_43367_m,V(3.0));V _rhs47153=_v_43373_x;return V(j::number(_lhs47152)*j::number(_rhs47153));})();V _rhs47151=([&]()->V{V _lhs47154=j::get(_v_43367_m,V(4.0));V _rhs47155=_v_43374_y;return V(j::number(_lhs47154)*j::number(_rhs47155));})();return j::binary("+",_lhs47150,_rhs47151);})();V _rhs47149=([&]()->V{V _lhs47156=j::get(_v_43367_m,V(5.0));V _rhs47157=_v_43375_w;return V(j::number(_lhs47156)*j::number(_rhs47157));})();return j::binary("+",_lhs47148,_rhs47149);})();V _rhs47147=j::get(_v_43369_at,V(1.0));return j::binary("+",_lhs47146,_rhs47147);})(),([&]()->V{V _lhs47158=([&]()->V{V _lhs47160=([&]()->V{V _lhs47162=([&]()->V{V _lhs47164=j::get(_v_43367_m,V(6.0));V _rhs47165=_v_43373_x;return V(j::number(_lhs47164)*j::number(_rhs47165));})();V _rhs47163=([&]()->V{V _lhs47166=j::get(_v_43367_m,V(7.0));V _rhs47167=_v_43374_y;return V(j::number(_lhs47166)*j::number(_rhs47167));})();return j::binary("+",_lhs47162,_rhs47163);})();V _rhs47161=([&]()->V{V _lhs47168=j::get(_v_43367_m,V(8.0));V _rhs47169=_v_43375_w;return V(j::number(_lhs47168)*j::number(_rhs47169));})();return j::binary("+",_lhs47160,_rhs47161);})();V _rhs47159=j::get(_v_43369_at,V(2.0));return j::binary("+",_lhs47158,_rhs47159);})()};return j::call(_method,_params47172,_receiver47170);})());

}
}

}
}}
return ([&]()->V{V _receiver47173=j::builtin("Float32Array");V _method47174=this->_literals[107];V _method=j::get(_receiver47173,_method47174);j::Args _params47175=j::Args{_v_43366_out};return j::call(_method,_params47175,_receiver47173);})();

}

return V{};
},4);
this->_v_43376_side.get()=j::function([=](const j::Args &_args_fn43377,const V &_receiver_fn43377,const V &_self_fn43377) mutable ->V{
V _v_43378_x;
V _v_43379_d;
V _v_43380_r;
_v_43378_x=_args_fn43377[0];
_v_43379_d=_args_fn43377[1];
_v_43380_r=_args_fn43377[2];
{
V _v_43381_h;
V _v_43382_c;
V _v_43383_a;
_v_43381_h=([&]()->V{V _number47176=_v_43378_x;V _number47177=_v_43379_d;return V(std::hypot(j::number(_number47176),j::number(_number47177)));})();
if(j::truth(([&]()->V{V _logical47178=([&]()->V{V _lhs47179=_v_43379_d;V _rhs47180=V(0.0);return j::binary("<=",_lhs47179,_rhs47180);})();return !j::truth(_logical47178)?([&]()->V{V _lhs47181=_v_43380_r;V _rhs47182=_v_43381_h;return j::binary(">=",_lhs47181,_rhs47182);})():_logical47178;})())){return j::builtin("Infinity");
}
_v_43382_c=([&]()->V{V _number47183=_v_43378_x;V _number47184=_v_43379_d;return V(std::atan2(j::number(_number47183),j::number(_number47184)));})();
_v_43383_a=([&]()->V{V _number47187=([&]()->V{V _lhs47188=_v_43380_r;V _rhs47189=_v_43381_h;return V(j::number(_lhs47188)/j::number(_rhs47189));})();return V(std::asin(j::number(_number47187)));})();
if(j::truth(([&]()->V{V _logical47190=([&]()->V{V _lhs47191=([&]()->V{V _lhs47193=_v_43382_c;V _rhs47194=_v_43383_a;return j::binary("+",_lhs47193,_rhs47194);})();V _rhs47192=([&]()->V{V _lhs47195=j::get(j::builtin("Math"),this->_literals[18]);V _rhs47196=V(2.0);return V(j::number(_lhs47195)/j::number(_rhs47196));})();return j::binary(">=",_lhs47191,_rhs47192);})();return !j::truth(_logical47190)?([&]()->V{V _lhs47197=([&]()->V{V _lhs47199=_v_43382_c;V _rhs47200=_v_43383_a;return V(j::number(_lhs47199)-j::number(_rhs47200));})();V _rhs47198=([&]()->V{V _lhs47201=j::unary("-",j::get(j::builtin("Math"),this->_literals[18]));V _rhs47202=V(2.0);return V(j::number(_lhs47201)/j::number(_rhs47202));})();return j::binary("<=",_lhs47197,_rhs47198);})():_logical47190;})())){return j::builtin("Infinity");
}
return ([&]()->V{V _receiver47215=j::builtin("Math");V _method47216=this->_literals[73];V _method=j::get(_receiver47215,_method47216);j::Args _params47217=j::Args{([&]()->V{V _number47205=([&]()->V{V _lhs47206=_v_43382_c;V _rhs47207=_v_43383_a;return j::binary("+",_lhs47206,_rhs47207);})();return V(std::tan(j::number(_number47205)));})(),j::unary("-",([&]()->V{V _number47210=([&]()->V{V _lhs47211=_v_43382_c;V _rhs47212=_v_43383_a;return V(j::number(_lhs47211)-j::number(_rhs47212));})();return V(std::tan(j::number(_number47210)));})())};return j::call(_method,_params47217,_receiver47215);})();

}

return V{};
},3);
this->_v_43384_measure.get()=j::function([=](const j::Args &_args_fn43385,const V &_receiver_fn43385,const V &_self_fn43385) mutable ->V{
V _v_43386_shapes;
j::Cell _v_43387_set;
V _v_43388_cols;
V _v_43389_rows;
V _v_43390_aspect;
j::Cell _v_43391_loop;
_v_43386_shapes=_args_fn43385[0];
_v_43387_set.get()=_args_fn43385[1];
_v_43388_cols=_args_fn43385[2];
_v_43389_rows=_args_fn43385[3];
_v_43390_aspect=_args_fn43385[4];
_v_43391_loop.get()=_args_fn43385[5];
{
V _v_43392_D;
V _v_43393_fn;
V _v_43394_span;
V _v_43395_c;
V _v_43396_m;
V _v_43397_around;
V _v_43398_sides;
V _v_43399_ex;
V _v_43400_ey;
V _v_43401_zmin;
V _v_43402_zmax;
V _v_43403_seen;
V _v_43404_fastest;
V _v_43405_lines;
j::Cell _v_43408_count;
V _v_43409_ball;
j::Cell _v_43410_many;
V _v_43411_heavy;
V _v_43439_pad;
V _v_43440_fitted;
V _v_43441_zoom;
_v_43392_D=j::get(_v_43387_set.get(),this->_literals[149]);
_v_43393_fn=([&]()->V{V _lhs47218=j::unary("typeof",_v_43386_shapes);V _rhs47219=this->_literals[0];return V(j::equal(_lhs47218,_rhs47219,true));})();
_v_43394_span=([&]()->V{V _logical47220=_v_43391_loop.get();return j::nullish(_logical47220)?V(30.0):_logical47220;})();
_v_43395_c=([&]()->V{V _callee47221=j::builtin("Float64Array");return j::construct(_callee47221,j::Args{V(9.0)});})();
_v_43396_m=([&]()->V{V _callee47222=j::builtin("Float64Array");return j::construct(_callee47222,j::Args{V(9.0)});})();
_v_43397_around=([&]()->V{V _logical47223=([&]()->V{V _lhs47224=j::get(_v_43387_set.get(),this->_literals[29]);V _rhs47225=V(0.0);return V(!j::equal(_lhs47224,_rhs47225,true));})();return j::truth(_logical47223)?([&]()->V{V _lhs47226=_v_43391_loop.get();V _rhs47227=j::builtin("undefined");return V(!j::equal(_lhs47226,_rhs47227,true));})():_logical47223;})();
_v_43398_sides=(j::truth(([&]()->V{V _logical47228=([&]()->V{V _lhs47229=j::get(_v_43387_set.get(),this->_literals[29]);V _rhs47230=V(0.0);return V(!j::equal(_lhs47229,_rhs47230,true));})();return j::truth(_logical47228)?([&]()->V{V _lhs47231=_v_43391_loop.get();V _rhs47232=j::builtin("undefined");return V(j::equal(_lhs47231,_rhs47232,true));})():_logical47228;})())?V(72.0):V(1.0));
_v_43399_ex=V(0.0);
_v_43400_ey=V(0.0);
_v_43401_zmin=j::builtin("Infinity");
_v_43402_zmax=j::unary("-",j::builtin("Infinity"));
_v_43403_seen=([&]()->V{V _callee47233=j::builtin("Set");return j::construct(_callee47233,j::Args{});})();
_v_43404_fastest=V(0.0);
_v_43405_lines=V(false);
{for(const auto &_item47234:j::elements(([&]()->V{V _callee47235=this->_v_43254_listAt.get();return j::call(_callee47235,j::Args{_v_43386_shapes,V(0.0),this->_literals[164]});})())){V _v_43406_s;
_v_43406_s=_item47234;
{
V _v_43407_b;
_v_43407_b=([&]()->V{V _callee47236=this->_v_42617_body.get();return j::call(_callee47236,j::Args{_v_43406_s,this->_literals[165]});})();
(void)((_v_43404_fastest=([&]()->V{V _receiver47241=j::builtin("Math");V _method47242=this->_literals[73];V _method=j::get(_receiver47241,_method47242);j::Args _params47243=j::Args{_v_43404_fastest,([&]()->V{V _callee47238=this->_v_43289_speed.get();return j::call(_callee47238,j::Args{_v_43407_b,j::get(_v_43387_set.get(),this->_literals[120])});})()};return j::call(_method,_params47243,_receiver47241);})()));
(void)((!j::truth(_v_43405_lines)?(_v_43405_lines=([&]()->V{V _callee47245=this->_v_43276_lined.get();return j::call(_callee47245,j::Args{_v_43407_b});})()):_v_43405_lines));

}
}}
(void)((_v_43404_fastest=j::binary("+",_v_43404_fastest,([&]()->V{V _number47248=([&]()->V{V _callee47249=this->_v_43279_rate.get();return j::call(_callee47249,j::Args{j::get(_v_43387_set.get(),this->_literals[29]),j::get(_v_43387_set.get(),this->_literals[120])});})();return V(std::fabs(j::number(_number47248)));})())));
_v_43408_count.get()=([&]()->V{V _receiver47266=j::builtin("Math");V _method47267=this->_literals[119];V _method=j::get(_receiver47266,_method47267);j::Args _params47268=j::Args{V(2000.0),([&]()->V{V _receiver47261=j::builtin("Math");V _method47262=this->_literals[73];V _method=j::get(_receiver47261,_method47262);j::Args _params47263=j::Args{V(240.0),([&]()->V{V _number47254=([&]()->V{V _lhs47255=([&]()->V{V _lhs47257=_v_43394_span;V _rhs47258=_v_43404_fastest;return V(j::number(_lhs47257)*j::number(_rhs47258));})();V _rhs47256=V(0.05);return V(j::number(_lhs47255)/j::number(_rhs47256));})();return V(std::ceil(j::number(_number47254)));})()};return j::call(_method,_params47263,_receiver47261);})()};return j::call(_method,_params47268,_receiver47266);})();
_v_43409_ball=([&]()->V{V _logical47269=([&]()->V{V _lhs47270=_v_43391_loop.get();V _rhs47271=j::builtin("undefined");return V(j::equal(_lhs47270,_rhs47271,true));})();return !j::truth(_logical47269)?([&]()->V{V _lhs47272=([&]()->V{V _lhs47274=([&]()->V{V _lhs47276=_v_43394_span;V _rhs47277=_v_43404_fastest;return V(j::number(_lhs47276)*j::number(_rhs47277));})();V _rhs47275=_v_43408_count.get();return V(j::number(_lhs47274)/j::number(_rhs47275));})();V _rhs47273=V(0.05);return j::binary(">",_lhs47272,_rhs47273);})():_logical47269;})();
_v_43410_many.get()=([&]()->V{V _callee47278=j::builtin("WeakMap");return j::construct(_callee47278,j::Args{});})();
_v_43411_heavy=j::function([=](const j::Args &_args_fn43412,const V &_receiver_fn43412,const V &_self_fn43412) mutable ->V{
V _v_43413_b;
_v_43413_b=_args_fn43412[0];
{
V _v_43414_h;
_v_43414_h=([&]()->V{V _receiver47279=_v_43410_many.get();V _method47280=this->_literals[38];V _method=j::get(_receiver47279,_method47280);j::Args _params47281=j::Args{_v_43413_b};return j::call(_method,_params47281,_receiver47279);})();
if(j::truth(([&]()->V{V _lhs47282=_v_43414_h;V _rhs47283=j::builtin("undefined");return V(j::equal(_lhs47282,_rhs47283,true));})())){(void)(([&]()->V{V _receiver47292=_v_43410_many.get();V _method47293=this->_literals[37];V _method=j::get(_receiver47292,_method47293);j::Args _params47294=j::Args{_v_43413_b,(_v_43414_h=([&]()->V{V _lhs47285=([&]()->V{V _lhs47287=([&]()->V{V _lhs47289=j::get(([&]()->V{V _callee47291=this->_v_43348_corners.get();return j::call(_callee47291,j::Args{_v_43413_b,V(0.0),j::get(_v_43387_set.get(),this->_literals[120]),_v_43391_loop.get()});})(),this->_literals[9]);V _rhs47290=V(3.0);return V(j::number(_lhs47289)/j::number(_rhs47290));})();V _rhs47288=_v_43408_count.get();return V(j::number(_lhs47287)*j::number(_rhs47288));})();V _rhs47286=V(4000000.0);return j::binary(">",_lhs47285,_rhs47286);})())};return j::call(_method,_params47294,_receiver47292);})());
}
return _v_43414_h;

}

return V{};
},1);
{V _v_43415_n;
_v_43415_n=V(0.0);
for(;j::truth(([&]()->V{V _lhs47295=_v_43415_n;V _rhs47296=_v_43408_count.get();return j::binary("<",_lhs47295,_rhs47296);})());(void)(j::increment(_v_43415_n,1,false))){
V _v_43416_t;
V _v_43417_moving;
_v_43416_t=([&]()->V{V _lhs47297=([&]()->V{V _lhs47299=_v_43415_n;V _rhs47300=_v_43394_span;return V(j::number(_lhs47299)*j::number(_rhs47300));})();V _rhs47298=_v_43408_count.get();return V(j::number(_lhs47297)/j::number(_rhs47298));})();
_v_43417_moving=([&]()->V{V _logical47301=_v_43393_fn;return !j::truth(_logical47301)?_v_43397_around:_logical47301;})();
{for(const auto &_item47302:j::elements(([&]()->V{V _callee47303=this->_v_43254_listAt.get();return j::call(_callee47303,j::Args{_v_43386_shapes,_v_43416_t,this->_literals[164]});})())){V _v_43418_s;
_v_43418_s=_item47302;
{
V _v_43419_b;
V _v_43420_p;
V _v_43421_k;
V _v_43427_px;
V _v_43428_py;
V _v_43429_pz;
V _v_43430_pts;
_v_43419_b=([&]()->V{V _callee47304=this->_v_42617_body.get();return j::call(_callee47304,j::Args{_v_43418_s,this->_literals[165]});})();
if(j::truth(([&]()->V{V _logical47305=([&]()->V{V _callee47306=this->_v_43268_moves.get();return j::call(_callee47306,j::Args{_v_43419_b});})();return !j::truth(_logical47305)?_v_43397_around:_logical47305;})())){(void)((_v_43417_moving=V(true)));
}else {if(j::truth(([&]()->V{V _receiver47308=_v_43403_seen;V _method47309=this->_literals[166];V _method=j::get(_receiver47308,_method47309);j::Args _params47310=j::Args{_v_43419_b};return j::call(_method,_params47310,_receiver47308);})())){continue;
}
}
(void)(([&]()->V{V _receiver47311=_v_43403_seen;V _method47312=this->_literals[167];V _method=j::get(_receiver47311,_method47312);j::Args _params47313=j::Args{_v_43419_b};return j::call(_method,_params47313,_receiver47311);})());
_v_43420_p=(j::truth(([&]()->V{V _lhs47314=j::unary("typeof",j::get(_v_43419_b,this->_literals[31]));V _rhs47315=this->_literals[0];return V(j::equal(_lhs47314,_rhs47315,true));})())?([&]()->V{V _receiver47316=_v_43419_b;V _method47317=this->_literals[31];V _method=j::get(_receiver47316,_method47317);j::Args _params47318=j::Args{_v_43416_t};return j::call(_method,_params47318,_receiver47316);})():j::get(_v_43419_b,this->_literals[31]));
_v_43421_k=j::get(_v_43419_b,this->_literals[33]);
if(j::truth(([&]()->V{V _logical47319=j::unary("!",([&]()->V{V _receiver47320=j::builtin("Array");V _method47321=this->_literals[8];V _method=j::get(_receiver47320,_method47321);j::Args _params47322=j::Args{_v_43420_p};return j::call(_method,_params47322,_receiver47320);})());return !j::truth(_logical47319)?j::unary("!",([&]()->V{V _receiver47327=j::builtin("Number");V _method47328=this->_literals[6];V _method=j::get(_receiver47327,_method47328);j::Args _params47329=j::Args{([&]()->V{V _lhs47323=([&]()->V{V _lhs47325=j::get(_v_43420_p,V(0.0));V _rhs47326=j::get(_v_43420_p,V(1.0));return j::binary("+",_lhs47325,_rhs47326);})();V _rhs47324=j::get(_v_43420_p,V(2.0));return j::binary("+",_lhs47323,_rhs47324);})()};return j::call(_method,_params47329,_receiver47327);})()):_logical47319;})())){continue;
}
if(j::truth(([&]()->V{V _logical47330=([&]()->V{V _logical47331=_v_43409_ball;return j::truth(_logical47331)?([&]()->V{V _logical47332=([&]()->V{V _logical47333=([&]()->V{V _callee47334=this->_v_43263_turns.get();return j::call(_callee47334,j::Args{_v_43419_b});})();return !j::truth(_logical47333)?([&]()->V{V _lhs47335=_v_43398_sides;V _rhs47336=V(1.0);return j::binary(">",_lhs47335,_rhs47336);})():_logical47333;})();return !j::truth(_logical47332)?([&]()->V{V _logical47337=([&]()->V{V _lhs47338=j::get(_v_43419_b,this->_literals[44]);V _rhs47339=V::null();return V(!j::equal(_lhs47338,_rhs47339,true));})();return j::truth(_logical47337)?([&]()->V{V _callee47340=this->_v_43268_moves.get();return j::call(_callee47340,j::Args{_v_43419_b});})():_logical47337;})():_logical47332;})():_logical47331;})();return !j::truth(_logical47330)?([&]()->V{V _callee47341=_v_43411_heavy;return j::call(_callee47341,j::Args{_v_43419_b});})():_logical47330;})())){
V _v_43422_r;
_v_43422_r=([&]()->V{V _lhs47342=([&]()->V{V _receiver47344=_v_43419_b;V _method47345=this->_literals[79];V _method=j::get(_receiver47344,_method47345);j::Args _params47346=j::Args{_v_43416_t};return j::call(_method,_params47346,_receiver47344);})();V _rhs47343=_v_43421_k;return V(j::number(_lhs47342)*j::number(_rhs47343));})();
{V _v_43423_i;
_v_43423_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs47347=_v_43423_i;V _rhs47348=_v_43398_sides;return j::binary("<",_lhs47347,_rhs47348);})());(void)(j::increment(_v_43423_i,1,false))){
V _v_43424_px;
V _v_43425_py;
V _v_43426_pz;
if(j::truth(([&]()->V{V _lhs47349=_v_43398_sides;V _rhs47350=V(1.0);return j::binary(">",_lhs47349,_rhs47350);})())){(void)(([&]()->V{V _callee47355=this->_v_43327_camera.get();return j::call(_callee47355,j::Args{_v_43395_c,j::get(_v_43387_set.get(),this->_literals[129]),([&]()->V{V _lhs47351=([&]()->V{V _lhs47353=this->_v_42444_TAU.get();V _rhs47354=_v_43423_i;return V(j::number(_lhs47353)*j::number(_rhs47354));})();V _rhs47352=_v_43398_sides;return V(j::number(_lhs47351)/j::number(_rhs47352));})()});})());
}else {(void)(([&]()->V{V _callee47356=this->_v_43332_cameraAt.get();return j::call(_callee47356,j::Args{_v_43395_c,_v_43387_set.get(),_v_43416_t,_v_43391_loop.get()});})());
}
_v_43424_px=([&]()->V{V _lhs47357=([&]()->V{V _lhs47359=([&]()->V{V _lhs47361=j::get(_v_43395_c,V(0.0));V _rhs47362=j::get(_v_43420_p,V(0.0));return V(j::number(_lhs47361)*j::number(_rhs47362));})();V _rhs47360=([&]()->V{V _lhs47363=j::get(_v_43395_c,V(1.0));V _rhs47364=j::get(_v_43420_p,V(1.0));return V(j::number(_lhs47363)*j::number(_rhs47364));})();return j::binary("+",_lhs47359,_rhs47360);})();V _rhs47358=([&]()->V{V _lhs47365=j::get(_v_43395_c,V(2.0));V _rhs47366=j::get(_v_43420_p,V(2.0));return V(j::number(_lhs47365)*j::number(_rhs47366));})();return j::binary("+",_lhs47357,_rhs47358);})();
_v_43425_py=([&]()->V{V _lhs47367=([&]()->V{V _lhs47369=([&]()->V{V _lhs47371=j::get(_v_43395_c,V(3.0));V _rhs47372=j::get(_v_43420_p,V(0.0));return V(j::number(_lhs47371)*j::number(_rhs47372));})();V _rhs47370=([&]()->V{V _lhs47373=j::get(_v_43395_c,V(4.0));V _rhs47374=j::get(_v_43420_p,V(1.0));return V(j::number(_lhs47373)*j::number(_rhs47374));})();return j::binary("+",_lhs47369,_rhs47370);})();V _rhs47368=([&]()->V{V _lhs47375=j::get(_v_43395_c,V(5.0));V _rhs47376=j::get(_v_43420_p,V(2.0));return V(j::number(_lhs47375)*j::number(_rhs47376));})();return j::binary("+",_lhs47367,_rhs47368);})();
_v_43426_pz=([&]()->V{V _lhs47377=([&]()->V{V _lhs47379=([&]()->V{V _lhs47381=j::get(_v_43395_c,V(6.0));V _rhs47382=j::get(_v_43420_p,V(0.0));return V(j::number(_lhs47381)*j::number(_rhs47382));})();V _rhs47380=([&]()->V{V _lhs47383=j::get(_v_43395_c,V(7.0));V _rhs47384=j::get(_v_43420_p,V(1.0));return V(j::number(_lhs47383)*j::number(_rhs47384));})();return j::binary("+",_lhs47379,_rhs47380);})();V _rhs47378=([&]()->V{V _lhs47385=j::get(_v_43395_c,V(8.0));V _rhs47386=j::get(_v_43420_p,V(2.0));return V(j::number(_lhs47385)*j::number(_rhs47386));})();return j::binary("+",_lhs47377,_rhs47378);})();
(void)((_v_43401_zmin=([&]()->V{V _receiver47392=j::builtin("Math");V _method47393=this->_literals[119];V _method=j::get(_receiver47392,_method47393);j::Args _params47394=j::Args{_v_43401_zmin,([&]()->V{V _lhs47388=_v_43426_pz;V _rhs47389=_v_43422_r;return V(j::number(_lhs47388)-j::number(_rhs47389));})()};return j::call(_method,_params47394,_receiver47392);})()));
(void)((_v_43402_zmax=([&]()->V{V _receiver47400=j::builtin("Math");V _method47401=this->_literals[73];V _method=j::get(_receiver47400,_method47401);j::Args _params47402=j::Args{_v_43402_zmax,([&]()->V{V _lhs47396=_v_43426_pz;V _rhs47397=_v_43422_r;return j::binary("+",_lhs47396,_rhs47397);})()};return j::call(_method,_params47402,_receiver47400);})()));
(void)((_v_43399_ex=([&]()->V{V _receiver47409=j::builtin("Math");V _method47410=this->_literals[73];V _method=j::get(_receiver47409,_method47410);j::Args _params47411=j::Args{_v_43399_ex,([&]()->V{V _callee47406=this->_v_43376_side.get();return j::call(_callee47406,j::Args{_v_43424_px,([&]()->V{V _lhs47404=_v_43426_pz;V _rhs47405=_v_43392_D;return j::binary("+",_lhs47404,_rhs47405);})(),_v_43422_r});})()};return j::call(_method,_params47411,_receiver47409);})()));
(void)((_v_43400_ey=([&]()->V{V _receiver47418=j::builtin("Math");V _method47419=this->_literals[73];V _method=j::get(_receiver47418,_method47419);j::Args _params47420=j::Args{_v_43400_ey,([&]()->V{V _callee47415=this->_v_43376_side.get();return j::call(_callee47415,j::Args{_v_43425_py,([&]()->V{V _lhs47413=_v_43426_pz;V _rhs47414=_v_43392_D;return j::binary("+",_lhs47413,_rhs47414);})(),_v_43422_r});})()};return j::call(_method,_params47420,_receiver47418);})()));

}
}
continue;

}

(void)(([&]()->V{V _callee47421=this->_v_43332_cameraAt.get();return j::call(_callee47421,j::Args{_v_43395_c,_v_43387_set.get(),_v_43416_t,_v_43391_loop.get()});})());
(void)(([&]()->V{V _callee47422=this->_v_43338_pose.get();return j::call(_callee47422,j::Args{_v_43396_m,_v_43419_b,_v_43416_t,j::get(_v_43387_set.get(),this->_literals[120]),_v_43391_loop.get(),_v_43395_c});})());
_v_43427_px=([&]()->V{V _lhs47423=([&]()->V{V _lhs47425=([&]()->V{V _lhs47427=j::get(_v_43395_c,V(0.0));V _rhs47428=j::get(_v_43420_p,V(0.0));return V(j::number(_lhs47427)*j::number(_rhs47428));})();V _rhs47426=([&]()->V{V _lhs47429=j::get(_v_43395_c,V(1.0));V _rhs47430=j::get(_v_43420_p,V(1.0));return V(j::number(_lhs47429)*j::number(_rhs47430));})();return j::binary("+",_lhs47425,_rhs47426);})();V _rhs47424=([&]()->V{V _lhs47431=j::get(_v_43395_c,V(2.0));V _rhs47432=j::get(_v_43420_p,V(2.0));return V(j::number(_lhs47431)*j::number(_rhs47432));})();return j::binary("+",_lhs47423,_rhs47424);})();
_v_43428_py=([&]()->V{V _lhs47433=([&]()->V{V _lhs47435=([&]()->V{V _lhs47437=j::get(_v_43395_c,V(3.0));V _rhs47438=j::get(_v_43420_p,V(0.0));return V(j::number(_lhs47437)*j::number(_rhs47438));})();V _rhs47436=([&]()->V{V _lhs47439=j::get(_v_43395_c,V(4.0));V _rhs47440=j::get(_v_43420_p,V(1.0));return V(j::number(_lhs47439)*j::number(_rhs47440));})();return j::binary("+",_lhs47435,_rhs47436);})();V _rhs47434=([&]()->V{V _lhs47441=j::get(_v_43395_c,V(5.0));V _rhs47442=j::get(_v_43420_p,V(2.0));return V(j::number(_lhs47441)*j::number(_rhs47442));})();return j::binary("+",_lhs47433,_rhs47434);})();
_v_43429_pz=([&]()->V{V _lhs47443=([&]()->V{V _lhs47445=([&]()->V{V _lhs47447=j::get(_v_43395_c,V(6.0));V _rhs47448=j::get(_v_43420_p,V(0.0));return V(j::number(_lhs47447)*j::number(_rhs47448));})();V _rhs47446=([&]()->V{V _lhs47449=j::get(_v_43395_c,V(7.0));V _rhs47450=j::get(_v_43420_p,V(1.0));return V(j::number(_lhs47449)*j::number(_rhs47450));})();return j::binary("+",_lhs47445,_rhs47446);})();V _rhs47444=([&]()->V{V _lhs47451=j::get(_v_43395_c,V(8.0));V _rhs47452=j::get(_v_43420_p,V(2.0));return V(j::number(_lhs47451)*j::number(_rhs47452));})();return j::binary("+",_lhs47443,_rhs47444);})();
_v_43430_pts=([&]()->V{V _callee47453=this->_v_43348_corners.get();return j::call(_callee47453,j::Args{_v_43419_b,_v_43416_t,j::get(_v_43387_set.get(),this->_literals[120]),_v_43391_loop.get()});})();
{V _v_43431_i;
_v_43431_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs47454=_v_43431_i;V _rhs47455=j::get(_v_43430_pts,this->_literals[9]);return j::binary("<",_lhs47454,_rhs47455);})());(void)((_v_43431_i=j::binary("+",_v_43431_i,V(3.0))))){
V _v_43432_x;
V _v_43433_y;
V _v_43434_w;
V _v_43435_X;
V _v_43436_Y;
V _v_43437_Z;
V _v_43438_d;
_v_43432_x=([&]()->V{V _lhs47457=j::get(_v_43430_pts,_v_43431_i);V _rhs47458=_v_43421_k;return V(j::number(_lhs47457)*j::number(_rhs47458));})();
_v_43433_y=([&]()->V{V _lhs47459=j::get(_v_43430_pts,([&]()->V{V _lhs47461=_v_43431_i;V _rhs47462=V(1.0);return j::binary("+",_lhs47461,_rhs47462);})());V _rhs47460=_v_43421_k;return V(j::number(_lhs47459)*j::number(_rhs47460));})();
_v_43434_w=([&]()->V{V _lhs47463=j::get(_v_43430_pts,([&]()->V{V _lhs47465=_v_43431_i;V _rhs47466=V(2.0);return j::binary("+",_lhs47465,_rhs47466);})());V _rhs47464=_v_43421_k;return V(j::number(_lhs47463)*j::number(_rhs47464));})();
_v_43435_X=([&]()->V{V _lhs47467=([&]()->V{V _lhs47469=([&]()->V{V _lhs47471=([&]()->V{V _lhs47473=j::get(_v_43396_m,V(0.0));V _rhs47474=_v_43432_x;return V(j::number(_lhs47473)*j::number(_rhs47474));})();V _rhs47472=([&]()->V{V _lhs47475=j::get(_v_43396_m,V(1.0));V _rhs47476=_v_43433_y;return V(j::number(_lhs47475)*j::number(_rhs47476));})();return j::binary("+",_lhs47471,_rhs47472);})();V _rhs47470=([&]()->V{V _lhs47477=j::get(_v_43396_m,V(2.0));V _rhs47478=_v_43434_w;return V(j::number(_lhs47477)*j::number(_rhs47478));})();return j::binary("+",_lhs47469,_rhs47470);})();V _rhs47468=_v_43427_px;return j::binary("+",_lhs47467,_rhs47468);})();
_v_43436_Y=([&]()->V{V _lhs47479=([&]()->V{V _lhs47481=([&]()->V{V _lhs47483=([&]()->V{V _lhs47485=j::get(_v_43396_m,V(3.0));V _rhs47486=_v_43432_x;return V(j::number(_lhs47485)*j::number(_rhs47486));})();V _rhs47484=([&]()->V{V _lhs47487=j::get(_v_43396_m,V(4.0));V _rhs47488=_v_43433_y;return V(j::number(_lhs47487)*j::number(_rhs47488));})();return j::binary("+",_lhs47483,_rhs47484);})();V _rhs47482=([&]()->V{V _lhs47489=j::get(_v_43396_m,V(5.0));V _rhs47490=_v_43434_w;return V(j::number(_lhs47489)*j::number(_rhs47490));})();return j::binary("+",_lhs47481,_rhs47482);})();V _rhs47480=_v_43428_py;return j::binary("+",_lhs47479,_rhs47480);})();
_v_43437_Z=([&]()->V{V _lhs47491=([&]()->V{V _lhs47493=([&]()->V{V _lhs47495=([&]()->V{V _lhs47497=j::get(_v_43396_m,V(6.0));V _rhs47498=_v_43432_x;return V(j::number(_lhs47497)*j::number(_rhs47498));})();V _rhs47496=([&]()->V{V _lhs47499=j::get(_v_43396_m,V(7.0));V _rhs47500=_v_43433_y;return V(j::number(_lhs47499)*j::number(_rhs47500));})();return j::binary("+",_lhs47495,_rhs47496);})();V _rhs47494=([&]()->V{V _lhs47501=j::get(_v_43396_m,V(8.0));V _rhs47502=_v_43434_w;return V(j::number(_lhs47501)*j::number(_rhs47502));})();return j::binary("+",_lhs47493,_rhs47494);})();V _rhs47492=_v_43429_pz;return j::binary("+",_lhs47491,_rhs47492);})();
if(j::truth(j::unary("!",([&]()->V{V _receiver47507=j::builtin("Number");V _method47508=this->_literals[6];V _method=j::get(_receiver47507,_method47508);j::Args _params47509=j::Args{([&]()->V{V _lhs47503=([&]()->V{V _lhs47505=_v_43435_X;V _rhs47506=_v_43436_Y;return j::binary("+",_lhs47505,_rhs47506);})();V _rhs47504=_v_43437_Z;return j::binary("+",_lhs47503,_rhs47504);})()};return j::call(_method,_params47509,_receiver47507);})()))){continue;
}
_v_43438_d=([&]()->V{V _lhs47510=_v_43437_Z;V _rhs47511=_v_43392_D;return j::binary("+",_lhs47510,_rhs47511);})();
(void)((_v_43401_zmin=([&]()->V{V _receiver47515=j::builtin("Math");V _method47516=this->_literals[119];V _method=j::get(_receiver47515,_method47516);j::Args _params47517=j::Args{_v_43401_zmin,_v_43437_Z};return j::call(_method,_params47517,_receiver47515);})()));
(void)((_v_43402_zmax=([&]()->V{V _receiver47521=j::builtin("Math");V _method47522=this->_literals[73];V _method=j::get(_receiver47521,_method47522);j::Args _params47523=j::Args{_v_43402_zmax,_v_43437_Z};return j::call(_method,_params47523,_receiver47521);})()));
if(j::truth(([&]()->V{V _lhs47524=_v_43438_d;V _rhs47525=this->_v_43197_NEAR.get();return j::binary("<=",_lhs47524,_rhs47525);})())){(void)((_v_43399_ex=(_v_43400_ey=j::builtin("Infinity"))));
}else {(void)(((_v_43399_ex=([&]()->V{V _receiver47534=j::builtin("Math");V _method47535=this->_literals[73];V _method=j::get(_receiver47534,_method47535);j::Args _params47536=j::Args{_v_43399_ex,([&]()->V{V _lhs47529=([&]()->V{V _number47531=_v_43435_X;return V(std::fabs(j::number(_number47531)));})();V _rhs47530=_v_43438_d;return V(j::number(_lhs47529)/j::number(_rhs47530));})()};return j::call(_method,_params47536,_receiver47534);})()),(_v_43400_ey=([&]()->V{V _receiver47543=j::builtin("Math");V _method47544=this->_literals[73];V _method=j::get(_receiver47543,_method47544);j::Args _params47545=j::Args{_v_43400_ey,([&]()->V{V _lhs47538=([&]()->V{V _number47540=_v_43436_Y;return V(std::fabs(j::number(_number47540)));})();V _rhs47539=_v_43438_d;return V(j::number(_lhs47538)/j::number(_rhs47539));})()};return j::call(_method,_params47545,_receiver47543);})())));
}

}
}

}
}}
if(j::truth(j::unary("!",_v_43417_moving))){break;
}

}
}
(void)((_v_43399_ex=j::binary("*",_v_43399_ex,V(1.02))));
(void)((_v_43400_ey=j::binary("*",_v_43400_ey,V(1.02))));
_v_43439_pad=(j::truth(_v_43405_lines)?V(1.5):V(1.0));
_v_43440_fitted=([&]()->V{V _receiver47582=j::builtin("Math");V _method47583=this->_literals[119];V _method=j::get(_receiver47582,_method47583);j::Args _params47584=j::Args{(j::truth(([&]()->V{V _lhs47548=_v_43399_ex;V _rhs47549=V(0.0);return j::binary(">",_lhs47548,_rhs47549);})())?([&]()->V{V _lhs47550=([&]()->V{V _receiver47558=j::builtin("Math");V _method47559=this->_literals[73];V _method=j::get(_receiver47558,_method47559);j::Args _params47560=j::Args{V(0.5),([&]()->V{V _lhs47552=([&]()->V{V _lhs47554=_v_43388_cols;V _rhs47555=V(2.0);return V(j::number(_lhs47554)/j::number(_rhs47555));})();V _rhs47553=_v_43439_pad;return V(j::number(_lhs47552)-j::number(_rhs47553));})()};return j::call(_method,_params47560,_receiver47558);})();V _rhs47551=([&]()->V{V _lhs47561=_v_43392_D;V _rhs47562=_v_43399_ex;return V(j::number(_lhs47561)*j::number(_rhs47562));})();return V(j::number(_lhs47550)/j::number(_rhs47551));})():j::builtin("Infinity")),(j::truth(([&]()->V{V _lhs47563=_v_43400_ey;V _rhs47564=V(0.0);return j::binary(">",_lhs47563,_rhs47564);})())?([&]()->V{V _lhs47565=([&]()->V{V _lhs47567=([&]()->V{V _receiver47575=j::builtin("Math");V _method47576=this->_literals[73];V _method=j::get(_receiver47575,_method47576);j::Args _params47577=j::Args{V(0.5),([&]()->V{V _lhs47569=([&]()->V{V _lhs47571=_v_43389_rows;V _rhs47572=V(2.0);return V(j::number(_lhs47571)/j::number(_rhs47572));})();V _rhs47570=_v_43439_pad;return V(j::number(_lhs47569)-j::number(_rhs47570));})()};return j::call(_method,_params47577,_receiver47575);})();V _rhs47568=_v_43390_aspect;return V(j::number(_lhs47567)*j::number(_rhs47568));})();V _rhs47566=([&]()->V{V _lhs47578=_v_43392_D;V _rhs47579=_v_43400_ey;return V(j::number(_lhs47578)*j::number(_rhs47579));})();return V(j::number(_lhs47565)/j::number(_rhs47566));})():j::builtin("Infinity"))};return j::call(_method,_params47584,_receiver47582);})();
_v_43441_zoom=([&]()->V{V _logical47585=j::get(_v_43387_set.get(),this->_literals[151]);return j::nullish(_logical47585)?(j::truth(j::get(_v_43387_set.get(),this->_literals[148]))?_v_43440_fitted:([&]()->V{V _lhs47586=([&]()->V{V _lhs47588=_v_43389_rows;V _rhs47589=_v_43390_aspect;return V(j::number(_lhs47588)*j::number(_rhs47589));})();V _rhs47587=V(8.0);return V(j::number(_lhs47586)/j::number(_rhs47587));})()):_logical47585;})();
if(j::truth(j::unary("!",([&]()->V{V _logical47590=([&]()->V{V _lhs47591=_v_43441_zoom;V _rhs47592=V(0.0);return j::binary(">",_lhs47591,_rhs47592);})();return j::truth(_logical47590)?([&]()->V{V _receiver47593=j::builtin("Number");V _method47594=this->_literals[6];V _method=j::get(_receiver47593,_method47594);j::Args _params47595=j::Args{_v_43441_zoom};return j::call(_method,_params47595,_receiver47593);})():_logical47590;})()))){(void)((_v_43441_zoom=([&]()->V{V _lhs47597=([&]()->V{V _lhs47599=_v_43389_rows;V _rhs47600=_v_43390_aspect;return V(j::number(_lhs47599)*j::number(_rhs47600));})();V _rhs47598=V(8.0);return V(j::number(_lhs47597)/j::number(_rhs47598));})()));
}
return ([&]()->V{V _obj47601=j::object();j::put(_obj47601,this->_literals[151],_v_43441_zoom);j::put(_obj47601,this->_literals[168],(j::truth(([&]()->V{V _receiver47602=j::builtin("Number");V _method47603=this->_literals[6];V _method=j::get(_receiver47602,_method47603);j::Args _params47604=j::Args{_v_43401_zmin};return j::call(_method,_params47604,_receiver47602);})())?_v_43401_zmin:j::unary("-",V(1.0))));j::put(_obj47601,this->_literals[169],(j::truth(([&]()->V{V _receiver47605=j::builtin("Number");V _method47606=this->_literals[6];V _method=j::get(_receiver47605,_method47606);j::Args _params47607=j::Args{_v_43402_zmax};return j::call(_method,_params47607,_receiver47605);})())?_v_43402_zmax:V(1.0)));return _obj47601;})();

}

return V{};
},6);
this->_v_43442_loopOf.get()=j::function([=](const j::Args &_args_fn43443,const V &_receiver_fn43443,const V &_self_fn43443) mutable ->V{
V _v_43444_shapes;
V _v_43445_spin;
_v_43444_shapes=_args_fn43443[0];
_v_43445_spin=_args_fn43443[1];
{
j::Cell _v_43446_periods;
j::Cell _v_43447_add;
j::Cell _v_43454_top;
if(j::truth(([&]()->V{V _lhs47608=j::unary("typeof",_v_43444_shapes);V _rhs47609=this->_literals[0];return V(j::equal(_lhs47608,_rhs47609,true));})())){return j::builtin("undefined");
}
_v_43446_periods.get()=(j::truth(_v_43445_spin)?([&]()->V{j::Args _array47610;_array47610.push_back(([&]()->V{V _lhs47611=this->_v_42444_TAU.get();V _rhs47612=([&]()->V{V _number47613=_v_43445_spin;return V(std::fabs(j::number(_number47613)));})();return V(j::number(_lhs47611)/j::number(_rhs47612));})());return j::array(std::move(_array47610));})():([&]()->V{j::Args _array47614;return j::array(std::move(_array47614));})());
_v_43447_add.get()=j::function([=](const j::Args &_args_fn43448,const V &_receiver_fn43448,const V &_self_fn43448) mutable ->V{
V _v_43449_b;
_v_43449_b=_args_fn43448[0];
{
if(j::truth(([&]()->V{V _logical47615=j::get(_v_43449_b,this->_literals[35]);return !j::truth(_logical47615)?([&]()->V{V _lhs47616=j::unary("typeof",j::get(_v_43449_b,this->_literals[32]));V _rhs47617=this->_literals[0];return V(j::equal(_lhs47616,_rhs47617,true));})():_logical47615;})())){return V(false);
}
if(j::truth(([&]()->V{V _lhs47618=j::unary("typeof",j::get(_v_43449_b,this->_literals[31]));V _rhs47619=this->_literals[0];return V(j::equal(_lhs47618,_rhs47619,true));})())){
V _v_43450_p;
_v_43450_p=([&]()->V{V _chain47620=this->_v_42591_ORBITS.get();V _chain47621=j::get(_chain47620,this->_literals[38]);V _chain47622=j::call(_chain47621,j::Args{j::get(_v_43449_b,this->_literals[31])},_chain47620);if(j::nullish(_chain47622))return V{};V _chain47623=j::get(_chain47622,this->_literals[120]);return _chain47623;})();
if(j::truth(([&]()->V{V _lhs47624=_v_43450_p;V _rhs47625=j::builtin("undefined");return V(j::equal(_lhs47624,_rhs47625,true));})())){return V(false);
}
(void)(([&]()->V{V _receiver47626=_v_43446_periods.get();V _method47627=this->_literals[68];V _method=j::get(_receiver47626,_method47627);j::Args _params47628=j::Args{_v_43450_p};return j::call(_method,_params47628,_receiver47626);})());

}

{for(const auto &_item47629:j::elements(j::get(_v_43449_b,this->_literals[29]))){V _v_43451_w;
_v_43451_w=_item47629;
if(j::truth(_v_43451_w)){(void)(([&]()->V{V _receiver47633=_v_43446_periods.get();V _method47634=this->_literals[68];V _method=j::get(_receiver47633,_method47634);j::Args _params47635=j::Args{([&]()->V{V _lhs47630=this->_v_42444_TAU.get();V _rhs47631=([&]()->V{V _number47632=_v_43451_w;return V(std::fabs(j::number(_number47632)));})();return V(j::number(_lhs47630)/j::number(_rhs47631));})()};return j::call(_method,_params47635,_receiver47633);})());
}
}}
return ([&]()->V{V _receiver47636=([&]()->V{V _logical47639=j::get(_v_43449_b,this->_literals[44]);return j::nullish(_logical47639)?([&]()->V{j::Args _array47640;return j::array(std::move(_array47640));})():_logical47639;})();V _method47637=this->_literals[10];V _method=j::get(_receiver47636,_method47637);j::Args _params47638=j::Args{_v_43447_add.get()};return j::call(_method,_params47638,_receiver47636);})();

}

return V{};
},1);
if(j::truth(j::unary("!",([&]()->V{V _receiver47643=_v_43444_shapes;V _method47644=this->_literals[10];V _method=j::get(_receiver47643,_method47644);j::Args _params47645=j::Args{j::function([=](const j::Args &_args_fn43452,const V &_receiver_fn43452,const V &_self_fn43452) mutable ->V{
V _v_43453_s;
_v_43453_s=_args_fn43452[0];
return ([&]()->V{V _callee47642=_v_43447_add.get();return j::call(_callee47642,j::Args{([&]()->V{V _callee47641=this->_v_42617_body.get();return j::call(_callee47641,j::Args{_v_43453_s,this->_literals[165]});})()});})();
return V{};
},1)};return j::call(_method,_params47645,_receiver47643);})()))){return j::builtin("undefined");
}
if(j::truth(j::unary("!",j::get(_v_43446_periods.get(),this->_literals[9])))){return j::builtin("undefined");
}
_v_43454_top.get()=([&]()->V{V _receiver47647=j::builtin("Math");V _method47648=this->_literals[73];V _method=j::get(_receiver47647,_method47648);j::Args _params47649=([&](){j::Args _args47646;for(const auto &_v:j::elements(_v_43446_periods.get()))_args47646.push_back(_v);return _args47646;})();return j::call(_method,_params47649,_receiver47647);})();
{j::Cell _v_43455_k;
_v_43455_k.get()=V(1.0);
for(;j::truth(([&]()->V{V _lhs47650=([&]()->V{V _lhs47652=_v_43455_k.get();V _rhs47653=_v_43454_top.get();return V(j::number(_lhs47652)*j::number(_rhs47653));})();V _rhs47651=([&]()->V{V _lhs47654=V(60.0);V _rhs47655=V(1e-9);return j::binary("+",_lhs47654,_rhs47655);})();return j::binary("<=",_lhs47650,_rhs47651);})());_v_43455_k=j::Cell(_v_43455_k.get()),(void)(j::increment(_v_43455_k.get(),1,false))){if(j::truth(([&]()->V{V _receiver47661=_v_43446_periods.get();V _method47662=this->_literals[10];V _method=j::get(_receiver47661,_method47662);j::Args _params47663=j::Args{j::function([=](const j::Args &_args_fn43456,const V &_receiver_fn43456,const V &_self_fn43456) mutable ->V{
V _v_43457_p;
_v_43457_p=_args_fn43456[0];
return ([&]()->V{V _callee47660=this->_v_43260_whole.get();return j::call(_callee47660,j::Args{([&]()->V{V _lhs47656=([&]()->V{V _lhs47658=_v_43455_k.get();V _rhs47659=_v_43454_top.get();return V(j::number(_lhs47658)*j::number(_rhs47659));})();V _rhs47657=_v_43457_p;return V(j::number(_lhs47656)/j::number(_rhs47657));})()});})();
return V{};
},1)};return j::call(_method,_params47663,_receiver47661);})())){return ([&]()->V{V _lhs47664=_v_43455_k.get();V _rhs47665=_v_43454_top.get();return V(j::number(_lhs47664)*j::number(_rhs47665));})();
}
}}
return j::builtin("undefined");

}

return V{};
},2);
this->_v_43824_span.get()=j::function([=](const j::Args &_args_fn43825,const V &_receiver_fn43825,const V &_self_fn43825) mutable ->V{
V _v_43826_a;
V _v_43827_d;
V _v_43828_size;
_v_43826_a=_args_fn43825[0];
_v_43827_d=_args_fn43825[1];
_v_43828_size=_args_fn43825[2];
{
V _v_43829_p;
V _v_43830_q;
V _v_43831_lo;
V _v_43832_hi;
if(j::truth(([&]()->V{V _lhs47666=_v_43827_d;V _rhs47667=V(0.0);return V(j::equal(_lhs47666,_rhs47667,true));})())){
if(j::truth(([&]()->V{V _logical47668=([&]()->V{V _lhs47669=_v_43826_a;V _rhs47670=V(0.0);return j::binary("<",_lhs47669,_rhs47670);})();return !j::truth(_logical47668)?([&]()->V{V _lhs47671=_v_43826_a;V _rhs47672=_v_43828_size;return j::binary(">=",_lhs47671,_rhs47672);})():_logical47668;})())){(void)((([&]()->V{V _base47674=this->_v_43461_CUT.get();V _key47675=V(0.0);V _assign47673=V(1.0);return j::put(_base47674,_key47675,_assign47673);})(),([&]()->V{V _base47677=this->_v_43461_CUT.get();V _key47678=V(1.0);V _assign47676=V(0.0);return j::put(_base47677,_key47678,_assign47676);})()));
}
return V{};

}

_v_43829_p=([&]()->V{V _lhs47679=j::unary("-",_v_43826_a);V _rhs47680=_v_43827_d;return V(j::number(_lhs47679)/j::number(_rhs47680));})();
_v_43830_q=([&]()->V{V _lhs47681=([&]()->V{V _lhs47683=_v_43828_size;V _rhs47684=_v_43826_a;return V(j::number(_lhs47683)-j::number(_rhs47684));})();V _rhs47682=_v_43827_d;return V(j::number(_lhs47681)/j::number(_rhs47682));})();
_v_43831_lo=(j::truth(([&]()->V{V _lhs47685=_v_43829_p;V _rhs47686=_v_43830_q;return j::binary("<",_lhs47685,_rhs47686);})())?_v_43829_p:_v_43830_q);
_v_43832_hi=(j::truth(([&]()->V{V _lhs47687=_v_43829_p;V _rhs47688=_v_43830_q;return j::binary("<",_lhs47687,_rhs47688);})())?_v_43830_q:_v_43829_p);
if(j::truth(([&]()->V{V _lhs47689=_v_43831_lo;V _rhs47690=j::get(this->_v_43461_CUT.get(),V(0.0));return j::binary(">",_lhs47689,_rhs47690);})())){(void)(([&]()->V{V _base47692=this->_v_43461_CUT.get();V _key47693=V(0.0);V _assign47691=_v_43831_lo;return j::put(_base47692,_key47693,_assign47691);})());
}
if(j::truth(([&]()->V{V _lhs47694=_v_43832_hi;V _rhs47695=j::get(this->_v_43461_CUT.get(),V(1.0));return j::binary("<",_lhs47694,_rhs47695);})())){(void)(([&]()->V{V _base47697=this->_v_43461_CUT.get();V _key47698=V(1.0);V _assign47696=_v_43832_hi;return j::put(_base47697,_key47698,_assign47696);})());
}

}

return V{};
},3);
this->_v_43833_fade.get()=j::function([=](const j::Args &_args_fn43834,const V &_receiver_fn43834,const V &_self_fn43834) mutable ->V{
V _v_43835_colors;
V _v_43836_shades;
j::Cell _v_43837_paper;
_v_43835_colors=_args_fn43834[0];
_v_43836_shades=_args_fn43834[1];
_v_43837_paper.get()=_args_fn43834[2];
{
V _v_43838_f;
_v_43838_f=([&]()->V{V _callee47699=this->_v_42460_spread.get();return j::call(_callee47699,j::Args{_v_43835_colors,_v_43836_shades});})();
if(j::truth(([&]()->V{V _receiver47700=j::builtin("Array");V _method47701=this->_literals[8];V _method=j::get(_receiver47700,_method47701);j::Args _params47702=j::Args{_v_43838_f};return j::call(_method,_params47702,_receiver47700);})())){return ([&]()->V{V _receiver47704=_v_43838_f;V _method47705=this->_literals[14];V _method=j::get(_receiver47704,_method47705);j::Args _params47706=j::Args{j::function([=](const j::Args &_args_fn43839,const V &_receiver_fn43839,const V &_self_fn43839) mutable ->V{
V _v_43840_c;
_v_43840_c=_args_fn43839[0];
return ([&]()->V{V _callee47703=this->_v_43229_legible.get();return j::call(_callee47703,j::Args{_v_43840_c,_v_43837_paper.get()});})();
return V{};
},1)};return j::call(_method,_params47706,_receiver47704);})();
}
return (j::truth(_v_43837_paper.get())?j::get(_v_43838_f,this->_literals[137]):j::get(_v_43838_f,this->_literals[26]));

}

return V{};
},3);
this->_v_43849_render3d.get()=j::function([=](const j::Args &_args_fn43850,const V &_receiver_fn43850,const V &_self_fn43850) mutable ->V{
V _v_43851_s;
j::Cell _v_43852_shapes;
V _v_43853_t;
V _v_43854_o;
_v_43851_s=_args_fn43850[0];
_v_43852_shapes.get()=_args_fn43850[1];
_v_43853_t=_args_fn43850[2];
V _default47707=_args_fn43850[3];if(_default47707.kind==V::Undefined||_default47707.kind==V::Hole)_default47707=([&]()->V{V _obj47708=j::object();return _obj47708;})();
_v_43854_o=_default47707;
{
j::Cell _v_43855_key;
V _v_43856_kept;
V _v_43857_v;
if(j::truth(j::unary("!",([&]()->V{V _lhs47709=_v_43851_s;V _rhs47710=this->_v_42443_Surface.get();return j::binary("instanceof",_lhs47709,_rhs47710);})()))){(void)(([&]()->V{V _callee47713=this->_v_42449_fail.get();return j::call(_callee47713,j::Args{([&]()->V{std::u16string _text47711;_text47711+=u"render3d() takes the surface to draw into first, the one a piece's drawing is given, not ";_text47711+=j::string(([&]()->V{V _callee47712=this->_v_42462_shown.get();return j::call(_callee47712,j::Args{_v_43851_s});})());_text47711+=u"";return V(std::move(_text47711));})()});})());
}
if(j::truth(([&]()->V{V _callee47714=this->_v_43934_one.get();return j::call(_callee47714,j::Args{_v_43852_shapes.get()});})())){(void)((_v_43852_shapes.get()=([&]()->V{j::Args _array47716;_array47716.push_back(_v_43852_shapes.get());return j::array(std::move(_array47716));})()));
}
if(j::truth(j::unary("!",([&]()->V{V _receiver47717=j::builtin("Array");V _method47718=this->_literals[8];V _method=j::get(_receiver47717,_method47718);j::Args _params47719=j::Args{_v_43852_shapes.get()};return j::call(_method,_params47719,_receiver47717);})()))){(void)(([&]()->V{V _callee47722=this->_v_42449_fail.get();return j::call(_callee47722,j::Args{([&]()->V{std::u16string _text47720;_text47720+=u"render3d() takes a shape or a list of shapes, such as [torus()], not ";_text47720+=j::string(([&]()->V{V _callee47721=this->_v_42462_shown.get();return j::call(_callee47721,j::Args{_v_43852_shapes.get()});})());_text47720+=u"";return V(std::move(_text47720));})()});})());
}
_v_43855_key.get()=(j::truth(([&]()->V{V _logical47723=([&]()->V{V _lhs47724=_v_43854_o;V _rhs47725=V::null();return V(!j::equal(_lhs47724,_rhs47725,true));})();return j::truth(_logical47723)?([&]()->V{V _lhs47726=j::unary("typeof",_v_43854_o);V _rhs47727=this->_literals[15];return V(j::equal(_lhs47726,_rhs47727,true));})():_logical47723;})())?([&]()->V{V _receiver47728=j::builtin("JSON");V _method47729=this->_literals[5];V _method=j::get(_receiver47728,_method47729);j::Args _params47730=j::Args{_v_43854_o};return j::call(_method,_params47730,_receiver47728);})():this->_literals[22]);
_v_43856_kept=([&]()->V{V _receiver47731=this->_v_43841_VIEWS.get();V _method47732=this->_literals[38];V _method=j::get(_receiver47731,_method47732);j::Args _params47733=j::Args{_v_43851_s};return j::call(_method,_params47733,_receiver47731);})();
if(j::truth(j::unary("!",_v_43856_kept))){(void)(([&]()->V{V _receiver47736=this->_v_43841_VIEWS.get();V _method47737=this->_literals[37];V _method=j::get(_receiver47736,_method47737);j::Args _params47738=j::Args{_v_43851_s,(_v_43856_kept=([&]()->V{j::Args _array47735;return j::array(std::move(_array47735));})())};return j::call(_method,_params47738,_receiver47736);})());
}
_v_43857_v=([&]()->V{V _receiver47743=_v_43856_kept;V _method47744=this->_literals[20];V _method=j::get(_receiver47743,_method47744);j::Args _params47745=j::Args{j::function([=](const j::Args &_args_fn43858,const V &_receiver_fn43858,const V &_self_fn43858) mutable ->V{
V _v_43859_k;
_v_43859_k=_args_fn43858[0];
return ([&]()->V{V _logical47739=([&]()->V{V _lhs47740=j::get(_v_43859_k,this->_literals[170]);V _rhs47741=_v_43855_key.get();return V(j::equal(_lhs47740,_rhs47741,true));})();return j::truth(_logical47739)?([&]()->V{V _callee47742=this->_v_43842_same.get();return j::call(_callee47742,j::Args{j::get(_v_43859_k,this->_literals[171]),_v_43852_shapes.get()});})():_logical47739;})();
return V{};
},1)};return j::call(_method,_params47745,_receiver47743);})();
if(j::truth(j::unary("!",_v_43857_v))){
V _v_43860_bodies;
V _v_43863_sigs;
j::Cell _v_43864_sig;
_v_43860_bodies=([&]()->V{V _receiver47747=_v_43852_shapes.get();V _method47748=this->_literals[14];V _method=j::get(_receiver47747,_method47748);j::Args _params47749=j::Args{j::function([=](const j::Args &_args_fn43861,const V &_receiver_fn43861,const V &_self_fn43861) mutable ->V{
V _v_43862_x;
_v_43862_x=_args_fn43861[0];
return ([&]()->V{V _callee47746=this->_v_42617_body.get();return j::call(_callee47746,j::Args{_v_43862_x,this->_literals[172]});})();
return V{};
},1)};return j::call(_method,_params47749,_receiver47747);})();
_v_43863_sigs=([&]()->V{V _receiver47750=_v_43860_bodies;V _method47751=this->_literals[14];V _method=j::get(_receiver47750,_method47751);j::Args _params47752=j::Args{this->_v_42634_sigOf.get()};return j::call(_method,_params47752,_receiver47750);})();
_v_43864_sig.get()=(j::truth(([&]()->V{V _receiver47753=_v_43863_sigs;V _method47754=this->_literals[19];V _method=j::get(_receiver47753,_method47754);j::Args _params47755=j::Args{V::null()};return j::call(_method,_params47755,_receiver47753);})())?V::null():([&]()->V{V _receiver47756=_v_43863_sigs;V _method47757=this->_literals[46];V _method=j::get(_receiver47756,_method47757);j::Args _params47758=j::Args{this->_literals[49]};return j::call(_method,_params47758,_receiver47756);})());
if(j::truth(([&]()->V{V _lhs47759=_v_43864_sig.get();V _rhs47760=V::null();return V(!j::equal(_lhs47759,_rhs47760,true));})())){(void)((_v_43857_v=([&]()->V{V _receiver47767=_v_43856_kept;V _method47768=this->_literals[20];V _method=j::get(_receiver47767,_method47768);j::Args _params47769=j::Args{j::function([=](const j::Args &_args_fn43865,const V &_receiver_fn43865,const V &_self_fn43865) mutable ->V{
V _v_43866_k;
_v_43866_k=_args_fn43865[0];
return ([&]()->V{V _logical47762=([&]()->V{V _lhs47763=j::get(_v_43866_k,this->_literals[170]);V _rhs47764=_v_43855_key.get();return V(j::equal(_lhs47763,_rhs47764,true));})();return j::truth(_logical47762)?([&]()->V{V _lhs47765=j::get(_v_43866_k,this->_literals[42]);V _rhs47766=_v_43864_sig.get();return V(j::equal(_lhs47765,_rhs47766,true));})():_logical47762;})();
return V{};
},1)};return j::call(_method,_params47769,_receiver47767);})()));
}
if(j::truth(j::unary("!",_v_43857_v))){
V _v_43867_set;
V _v_43868_loop;
if(j::truth(([&]()->V{V _logical47770=([&]()->V{V _lhs47771=_v_43854_o;V _rhs47772=V::null();return V(!j::equal(_lhs47771,_rhs47772,true));})();return j::truth(_logical47770)?([&]()->V{V _lhs47773=j::unary("typeof",_v_43854_o);V _rhs47774=this->_literals[15];return V(j::equal(_lhs47773,_rhs47774,true));})():_logical47770;})())){(void)(([&]()->V{V _callee47775=this->_v_42507_known.get();return j::call(_callee47775,j::Args{_v_43854_o,this->_v_43199_SCENE_KEYS.get(),this->_literals[172]});})());
}
_v_43867_set=([&]()->V{V _callee47776=this->_v_43202_settings.get();return j::call(_callee47776,j::Args{_v_43854_o,this->_literals[172]});})();
(void)(([&]()->V{V _callee47777=this->_v_43283_orbits.get();return j::call(_callee47777,j::Args{_v_43860_bodies,j::get(_v_43867_set,this->_literals[120])});})());
_v_43868_loop=([&]()->V{V _logical47778=j::get(_v_43867_set,this->_literals[120]);return j::nullish(_logical47778)?([&]()->V{V _callee47779=this->_v_43442_loopOf.get();return j::call(_callee47779,j::Args{_v_43852_shapes.get(),j::get(_v_43867_set,this->_literals[29])});})():_logical47778;})();
(void)((_v_43857_v=([&]()->V{V _obj47781=j::object();j::put(_obj47781,this->_literals[171],([&]()->V{j::Args _array47782;for(const auto &_value:j::elements(_v_43852_shapes.get()))_array47782.push_back(_value);return j::array(std::move(_array47782));})());j::put(_obj47781,this->_literals[42],_v_43864_sig.get());j::put(_obj47781,this->_literals[170],_v_43855_key.get());j::put(_obj47781,this->_literals[173],([&]()->V{V _callee47784=this->_v_43462_View.get();return j::construct(_callee47784,j::Args{j::get(_v_43851_s,this->_literals[174]),j::get(_v_43851_s,this->_literals[175]),j::get(_v_43851_s,this->_literals[176]),_v_43867_set,([&]()->V{V _callee47783=this->_v_43384_measure.get();return j::call(_callee47783,j::Args{_v_43852_shapes.get(),_v_43867_set,j::get(_v_43851_s,this->_literals[174]),j::get(_v_43851_s,this->_literals[175]),j::get(_v_43851_s,this->_literals[176]),_v_43868_loop});})(),_v_43868_loop});})());return _obj47781;})()));
if(j::truth(([&]()->V{V _lhs47785=([&]()->V{V _receiver47787=_v_43856_kept;V _method47788=this->_literals[68];V _method=j::get(_receiver47787,_method47788);j::Args _params47789=j::Args{_v_43857_v};return j::call(_method,_params47789,_receiver47787);})();V _rhs47786=V(8.0);return j::binary(">",_lhs47785,_rhs47786);})())){(void)(([&]()->V{V _receiver47790=_v_43856_kept;V _method47791=this->_literals[177];V _method=j::get(_receiver47790,_method47791);j::Args _params47792=j::Args{};return j::call(_method,_params47792,_receiver47790);})());
}

}


}

(void)(([&]()->V{V _receiver47796=j::get(_v_43857_v,this->_literals[173]);V _method47797=this->_literals[178];V _method=j::get(_receiver47796,_method47797);j::Args _params47798=j::Args{_v_43851_s,_v_43852_shapes.get(),(j::truth(([&]()->V{V _receiver47793=j::builtin("Number");V _method47794=this->_literals[6];V _method=j::get(_receiver47793,_method47794);j::Args _params47795=j::Args{_v_43853_t};return j::call(_method,_params47795,_receiver47793);})())?_v_43853_t:V(0.0))};return j::call(_method,_params47798,_receiver47796);})());

}

return V{};
},3);
this->_v_43876_colorsOf.get()=j::function([=](const j::Args &_args_fn43877,const V &_receiver_fn43877,const V &_self_fn43877) mutable ->V{
V _v_43878_bodies;
j::Cell _v_43879_set;
j::Cell _v_43880_paper;
_v_43878_bodies=_args_fn43877[0];
_v_43879_set.get()=_args_fn43877[1];
_v_43880_paper.get()=_args_fn43877[2];
{
if(j::truth(j::get(_v_43879_set.get(),this->_literals[147]))){return ([&]()->V{j::Args _array47799;for(const auto &_value:j::elements(([&]()->V{V _callee47800=this->_v_43833_fade.get();return j::call(_callee47800,j::Args{j::get(_v_43879_set.get(),this->_literals[147]),j::get(_v_43879_set.get(),this->_literals[146]),_v_43880_paper.get()});})()))_array47799.push_back(_value);return j::array(std::move(_array47799));})();
}
return ([&]()->V{V _receiver47802=([&]()->V{V _callee47805=this->_v_43869_usedColors.get();return j::call(_callee47805,j::Args{_v_43878_bodies});})();V _method47803=this->_literals[163];V _method=j::get(_receiver47802,_method47803);j::Args _params47804=j::Args{j::function([=](const j::Args &_args_fn43881,const V &_receiver_fn43881,const V &_self_fn43881) mutable ->V{
V _v_43882_c;
_v_43882_c=_args_fn43881[0];
return ([&]()->V{V _callee47801=this->_v_43243_shadesOf.get();return j::call(_callee47801,j::Args{_v_43882_c,j::get(_v_43879_set.get(),this->_literals[145]),j::get(_v_43879_set.get(),this->_literals[146]),_v_43880_paper.get()});})();
return V{};
},1)};return j::call(_method,_params47804,_receiver47802);})();

}

return V{};
},3);
this->_v_43887_scenePalette.get()=j::function([=](const j::Args &_args_fn43888,const V &_receiver_fn43888,const V &_self_fn43888) mutable ->V{
V _v_43889_shapes;
V _v_43890_o;
V _v_43891_own;
_v_43889_shapes=_args_fn43888[0];
V _default47806=_args_fn43888[1];if(_default47806.kind==V::Undefined||_default47806.kind==V::Hole)_default47806=([&]()->V{V _obj47807=j::object();return _obj47807;})();
_v_43890_o=_default47806;
_v_43891_own=_args_fn43888[2];
{
V _v_43892_set;
V _v_43893_bodies;
V _v_43896_light;
V _v_43897_dark;
V _v_43898_mine;
V _v_43899_first;
V _v_43900_out;
if(j::truth(([&]()->V{V _logical47808=([&]()->V{V _lhs47809=_v_43890_o;V _rhs47810=V::null();return V(!j::equal(_lhs47809,_rhs47810,true));})();return j::truth(_logical47808)?([&]()->V{V _lhs47811=j::unary("typeof",_v_43890_o);V _rhs47812=this->_literals[15];return V(j::equal(_lhs47811,_rhs47812,true));})():_logical47808;})())){(void)(([&]()->V{V _callee47813=this->_v_42507_known.get();return j::call(_callee47813,j::Args{_v_43890_o,this->_v_43199_SCENE_KEYS.get(),this->_literals[179]});})());
}
_v_43892_set=([&]()->V{V _callee47814=this->_v_43202_settings.get();return j::call(_callee47814,j::Args{_v_43890_o,this->_literals[179]});})();
if(j::truth(([&]()->V{V _callee47815=this->_v_43934_one.get();return j::call(_callee47815,j::Args{_v_43889_shapes});})())){(void)((_v_43889_shapes=([&]()->V{j::Args _array47817;_array47817.push_back(_v_43889_shapes);return j::array(std::move(_array47817));})()));
}
if(j::truth(([&]()->V{V _logical47818=([&]()->V{V _lhs47819=j::unary("typeof",_v_43889_shapes);V _rhs47820=this->_literals[0];return V(!j::equal(_lhs47819,_rhs47820,true));})();return j::truth(_logical47818)?j::unary("!",([&]()->V{V _receiver47821=j::builtin("Array");V _method47822=this->_literals[8];V _method=j::get(_receiver47821,_method47822);j::Args _params47823=j::Args{_v_43889_shapes};return j::call(_method,_params47823,_receiver47821);})()):_logical47818;})())){(void)(([&]()->V{V _callee47826=this->_v_42449_fail.get();return j::call(_callee47826,j::Args{([&]()->V{std::u16string _text47824;_text47824+=u"scenePalette() takes a shape, a list of shapes, or a function of t that gives a list, not ";_text47824+=j::string(([&]()->V{V _callee47825=this->_v_42462_shown.get();return j::call(_callee47825,j::Args{_v_43889_shapes});})());_text47824+=u"";return V(std::move(_text47824));})()});})());
}
_v_43893_bodies=([&]()->V{V _receiver47828=([&]()->V{V _callee47831=this->_v_43254_listAt.get();return j::call(_callee47831,j::Args{_v_43889_shapes,V(0.0),this->_literals[179]});})();V _method47829=this->_literals[14];V _method=j::get(_receiver47828,_method47829);j::Args _params47830=j::Args{j::function([=](const j::Args &_args_fn43894,const V &_receiver_fn43894,const V &_self_fn43894) mutable ->V{
V _v_43895_s;
_v_43895_s=_args_fn43894[0];
return ([&]()->V{V _callee47827=this->_v_42617_body.get();return j::call(_callee47827,j::Args{_v_43895_s,this->_literals[179]});})();
return V{};
},1)};return j::call(_method,_params47830,_receiver47828);})();
_v_43896_light=([&]()->V{V _callee47832=this->_v_43876_colorsOf.get();return j::call(_callee47832,j::Args{_v_43893_bodies,_v_43892_set,V(true)});})();
_v_43897_dark=([&]()->V{V _callee47833=this->_v_43876_colorsOf.get();return j::call(_callee47833,j::Args{_v_43893_bodies,_v_43892_set,V(false)});})();
if(j::truth(([&]()->V{V _logical47834=j::unary("!",j::get(_v_43896_light,this->_literals[9]));return j::truth(_logical47834)?([&]()->V{V _lhs47835=_v_43891_own;V _rhs47836=j::builtin("undefined");return V(j::equal(_lhs47835,_rhs47836,true));})():_logical47834;})())){return j::builtin("undefined");
}
_v_43898_mine=(j::truth(([&]()->V{V _lhs47837=_v_43891_own;V _rhs47838=j::builtin("undefined");return V(j::equal(_lhs47837,_rhs47838,true));})())?V::null():([&]()->V{V _callee47839=this->_v_42442_Palette.get();return j::construct(_callee47839,j::Args{_v_43891_own});})());
_v_43899_first=(j::truth(_v_43898_mine)?([&]()->V{V _obj47840=j::object();j::put(_obj47840,this->_literals[137],([&]()->V{V _receiver47841=j::get(_v_43898_mine,this->_literals[147]);V _method47842=this->_literals[24];V _method=j::get(_receiver47841,_method47842);j::Args _params47843=j::Args{V(0.0),j::get(_v_43898_mine,this->_literals[50])};return j::call(_method,_params47843,_receiver47841);})());j::put(_obj47840,this->_literals[26],([&]()->V{V _receiver47846=j::get(_v_43898_mine,this->_literals[147]);V _method47847=this->_literals[24];V _method=j::get(_receiver47846,_method47847);j::Args _params47848=j::Args{(j::truth(j::get(_v_43898_mine,this->_literals[180]))?j::get(_v_43898_mine,this->_literals[50]):V(0.0)),(j::truth(j::get(_v_43898_mine,this->_literals[180]))?([&]()->V{V _lhs47844=V(2.0);V _rhs47845=j::get(_v_43898_mine,this->_literals[50]);return V(j::number(_lhs47844)*j::number(_rhs47845));})():j::get(_v_43898_mine,this->_literals[50]))};return j::call(_method,_params47848,_receiver47846);})());return _obj47840;})():([&]()->V{V _obj47849=j::object();j::put(_obj47849,this->_literals[137],([&]()->V{j::Args _array47850;_array47850.push_back(j::get(this->_v_42440_INK.get(),this->_literals[137]));return j::array(std::move(_array47850));})());j::put(_obj47849,this->_literals[26],([&]()->V{j::Args _array47851;_array47851.push_back(j::get(this->_v_42440_INK.get(),this->_literals[26]));return j::array(std::move(_array47851));})());return _obj47849;})());
_v_43900_out=([&]()->V{V _obj47852=j::object();j::put(_obj47852,this->_literals[137],([&]()->V{j::Args _array47853;for(const auto &_value:j::elements(j::get(_v_43899_first,this->_literals[137])))_array47853.push_back(_value);for(const auto &_value:j::elements(_v_43896_light))_array47853.push_back(_value);return j::array(std::move(_array47853));})());j::put(_obj47852,this->_literals[26],([&]()->V{j::Args _array47854;for(const auto &_value:j::elements(j::get(_v_43899_first,this->_literals[26])))_array47854.push_back(_value);for(const auto &_value:j::elements(_v_43897_dark))_array47854.push_back(_value);return j::array(std::move(_array47854));})());return _obj47852;})();
if(j::truth(([&]()->V{V _lhs47855=j::get(j::get(_v_43900_out,this->_literals[137]),this->_literals[9]);V _rhs47856=V(32.0);return j::binary(">",_lhs47855,_rhs47856);})())){(void)(([&]()->V{V _callee47859=this->_v_42449_fail.get();return j::call(_callee47859,j::Args{([&]()->V{std::u16string _text47857;_text47857+=u"scenePalette(): these colours come to ";_text47857+=j::string(j::get(j::get(_v_43900_out,this->_literals[137]),this->_literals[9]));_text47857+=u" a page, ";_text47857+=j::string(([&]()->V{V _callee47858=this->_v_43883_tally.get();return j::call(_callee47858,j::Args{_v_43893_bodies,_v_43892_set});})());_text47857+=u" and ";_text47857+=j::string(j::get(j::get(_v_43899_first,this->_literals[137]),this->_literals[9]));_text47857+=u" first, past the 32 a page a piece can have: use fewer colours or fewer shades";return V(std::move(_text47857));})()});})());
}
return _v_43900_out;

}

return V{};
},1);
this->_v_43901_scene.get()=j::function([=](const j::Args &_args_fn43902,const V &_receiver_fn43902,const V &_self_fn43902) mutable ->V{
V _v_43903_first;
V _v_43904_second;
_v_43903_first=_args_fn43902[0];
_v_43904_second=_args_fn43902[1];
{
V _v_43905_drawable;
V _v_43906_spec;
V _v_43907_shapes;
V _v_43908_base;
j::Cell _v_43909_set;
j::Cell _v_43910_list;
V _v_43911_bodies;
V _v_43914_palette;
V _v_43915_ink;
V _v_43921_moving;
j::Cell _v_43922_repeats;
V _v_43923_loop;
j::Cell _v_43924_aspect;
V _v_43925_made;
j::Cell _v_43933_fit;
_v_43905_drawable=([&]()->V{V _logical47860=([&]()->V{V _logical47861=([&]()->V{V _callee47862=this->_v_43934_one.get();return j::call(_callee47862,j::Args{_v_43903_first});})();return !j::truth(_logical47861)?([&]()->V{V _receiver47863=j::builtin("Array");V _method47864=this->_literals[8];V _method=j::get(_receiver47863,_method47864);j::Args _params47865=j::Args{_v_43903_first};return j::call(_method,_params47865,_receiver47863);})():_logical47861;})();return !j::truth(_logical47860)?([&]()->V{V _lhs47866=j::unary("typeof",_v_43903_first);V _rhs47867=this->_literals[0];return V(j::equal(_lhs47866,_rhs47867,true));})():_logical47860;})();
if(j::truth(([&]()->V{V _logical47868=_v_43905_drawable;return j::truth(_logical47868)?([&]()->V{V _lhs47869=_v_43904_second;V _rhs47870=j::builtin("undefined");return V(!j::equal(_lhs47869,_rhs47870,true));})():_logical47868;})())){(void)(([&]()->V{V _callee47871=this->_v_42449_fail.get();return j::call(_callee47871,j::Args{this->_literals[181]});})());
}
_v_43906_spec=(j::truth(_v_43905_drawable)?([&]()->V{V _obj47872=j::object();return _obj47872;})():_v_43903_first);
_v_43907_shapes=(j::truth(_v_43905_drawable)?_v_43903_first:_v_43904_second);
_v_43908_base=([&]()->V{V _callee47873=this->_v_42459_specOf.get();return j::call(_callee47873,j::Args{_v_43906_spec,this->_literals[182]});})();
if(j::truth(_v_43906_spec)){(void)(([&]()->V{V _callee47875=this->_v_42507_known.get();return j::call(_callee47875,j::Args{_v_43906_spec,([&]()->V{j::Args _array47874;for(const auto &_value:j::elements(this->_v_43200_SPEC_KEYS.get()))_array47874.push_back(_value);for(const auto &_value:j::elements(this->_v_43199_SCENE_KEYS.get()))_array47874.push_back(_value);return j::array(std::move(_array47874));})(),this->_literals[164]});})());
}
_v_43909_set.get()=([&]()->V{V _callee47878=this->_v_43202_settings.get();return j::call(_callee47878,j::Args{([&]()->V{V _logical47876=_v_43906_spec;return j::nullish(_logical47876)?([&]()->V{V _obj47877=j::object();return _obj47877;})():_logical47876;})(),this->_literals[164]});})();
if(j::truth(([&]()->V{V _callee47879=this->_v_43934_one.get();return j::call(_callee47879,j::Args{_v_43907_shapes});})())){(void)((_v_43907_shapes=([&]()->V{j::Args _array47881;_array47881.push_back(_v_43907_shapes);return j::array(std::move(_array47881));})()));
}
if(j::truth(([&]()->V{V _logical47882=([&]()->V{V _lhs47883=j::unary("typeof",_v_43907_shapes);V _rhs47884=this->_literals[0];return V(!j::equal(_lhs47883,_rhs47884,true));})();return j::truth(_logical47882)?j::unary("!",([&]()->V{V _receiver47885=j::builtin("Array");V _method47886=this->_literals[8];V _method=j::get(_receiver47885,_method47886);j::Args _params47887=j::Args{_v_43907_shapes};return j::call(_method,_params47887,_receiver47885);})()):_logical47882;})())){(void)(([&]()->V{V _callee47890=this->_v_42449_fail.get();return j::call(_callee47890,j::Args{([&]()->V{std::u16string _text47888;_text47888+=u"scene() takes a shape, a list of shapes, such as [torus()], or a function of t that gives a list, not ";_text47888+=j::string(([&]()->V{V _callee47889=this->_v_42462_shown.get();return j::call(_callee47889,j::Args{_v_43907_shapes});})());_text47888+=u"";return V(std::move(_text47888));})()});})());
}
_v_43910_list.get()=_v_43907_shapes;
_v_43911_bodies=([&]()->V{V _receiver47892=([&]()->V{V _callee47895=this->_v_43254_listAt.get();return j::call(_callee47895,j::Args{_v_43910_list.get(),V(0.0),this->_literals[164]});})();V _method47893=this->_literals[14];V _method=j::get(_receiver47892,_method47893);j::Args _params47894=j::Args{j::function([=](const j::Args &_args_fn43912,const V &_receiver_fn43912,const V &_self_fn43912) mutable ->V{
V _v_43913_s;
_v_43913_s=_args_fn43912[0];
return ([&]()->V{V _callee47891=this->_v_42617_body.get();return j::call(_callee47891,j::Args{_v_43913_s,this->_literals[165]});})();
return V{};
},1)};return j::call(_method,_params47894,_receiver47892);})();
(void)(([&]()->V{V _callee47896=this->_v_43283_orbits.get();return j::call(_callee47896,j::Args{_v_43911_bodies,j::get(_v_43909_set.get(),this->_literals[120])});})());
_v_43914_palette=j::get(_v_43908_base,this->_literals[183]);
_v_43915_ink=j::get(_v_43908_base,this->_literals[184]);
if(j::truth(([&]()->V{V _lhs47897=_v_43914_palette;V _rhs47898=j::builtin("undefined");return V(j::equal(_lhs47897,_rhs47898,true));})())){
V _v_43916_light;
V _v_43917_dark;
_v_43916_light=([&]()->V{V _callee47899=this->_v_43876_colorsOf.get();return j::call(_callee47899,j::Args{_v_43911_bodies,_v_43909_set.get(),V(true)});})();
_v_43917_dark=([&]()->V{V _callee47900=this->_v_43876_colorsOf.get();return j::call(_callee47900,j::Args{_v_43911_bodies,_v_43909_set.get(),V(false)});})();
if(j::truth(j::get(_v_43916_light,this->_literals[9]))){
V _v_43918_plain;
_v_43918_plain=([&]()->V{V _logical47901=j::unary("!",j::get(_v_43909_set.get(),this->_literals[147]));return j::truth(_logical47901)?([&]()->V{V _receiver47904=([&]()->V{V _callee47907=this->_v_43271_leaves.get();return j::call(_callee47907,j::Args{_v_43911_bodies});})();V _method47905=this->_literals[118];V _method=j::get(_receiver47904,_method47905);j::Args _params47906=j::Args{j::function([=](const j::Args &_args_fn43919,const V &_receiver_fn43919,const V &_self_fn43919) mutable ->V{
V _v_43920_b;
_v_43920_b=_args_fn43919[0];
return ([&]()->V{V _lhs47902=j::get(_v_43920_b,this->_literals[25]);V _rhs47903=j::builtin("undefined");return V(j::equal(_lhs47902,_rhs47903,true));})();
return V{};
},1)};return j::call(_method,_params47906,_receiver47904);})():_logical47901;})();
if(j::truth(_v_43918_plain)){
(void)(([&]()->V{V _receiver47908=_v_43916_light;V _method47909=this->_literals[68];V _method=j::get(_receiver47908,_method47909);j::Args _params47910=j::Args{j::get(this->_v_42440_INK.get(),this->_literals[137])};return j::call(_method,_params47910,_receiver47908);})());
(void)((_v_43915_ink=([&]()->V{V _lhs47912=([&]()->V{V _receiver47914=_v_43917_dark;V _method47915=this->_literals[68];V _method=j::get(_receiver47914,_method47915);j::Args _params47916=j::Args{j::get(this->_v_42440_INK.get(),this->_literals[26])};return j::call(_method,_params47916,_receiver47914);})();V _rhs47913=V(1.0);return V(j::number(_lhs47912)-j::number(_rhs47913));})()));

}

if(j::truth(([&]()->V{V _lhs47917=j::get(_v_43916_light,this->_literals[9]);V _rhs47918=V(32.0);return j::binary(">",_lhs47917,_rhs47918);})())){(void)(([&]()->V{V _callee47921=this->_v_42449_fail.get();return j::call(_callee47921,j::Args{([&]()->V{std::u16string _text47919;_text47919+=u"this scene's colours come to ";_text47919+=j::string(j::get(_v_43916_light,this->_literals[9]));_text47919+=u" a page, ";_text47919+=j::string(([&]()->V{V _callee47920=this->_v_43883_tally.get();return j::call(_callee47920,j::Args{_v_43911_bodies,_v_43909_set.get()});})());_text47919+=u"";_text47919+=j::string((j::truth(_v_43918_plain)?this->_literals[185]:this->_literals[22]));_text47919+=u", past the 32 a page a piece can have: use fewer colours or fewer shades";return V(std::move(_text47919));})()});})());
}
(void)((_v_43914_palette=([&]()->V{V _obj47923=j::object();j::put(_obj47923,this->_literals[137],_v_43916_light);j::put(_obj47923,this->_literals[26],_v_43917_dark);return _obj47923;})()));

}


}

_v_43921_moving=([&]()->V{V _logical47924=([&]()->V{V _logical47925=([&]()->V{V _lhs47926=j::unary("typeof",_v_43910_list.get());V _rhs47927=this->_literals[0];return V(j::equal(_lhs47926,_rhs47927,true));})();return !j::truth(_logical47925)?([&]()->V{V _lhs47928=j::get(_v_43909_set.get(),this->_literals[29]);V _rhs47929=V(0.0);return V(!j::equal(_lhs47928,_rhs47929,true));})():_logical47925;})();return !j::truth(_logical47924)?([&]()->V{V _receiver47930=_v_43911_bodies;V _method47931=this->_literals[118];V _method=j::get(_receiver47930,_method47931);j::Args _params47932=j::Args{this->_v_43268_moves.get()};return j::call(_method,_params47932,_receiver47930);})():_logical47924;})();
_v_43922_repeats.get()=([&]()->V{V _logical47933=j::get(_v_43909_set.get(),this->_literals[120]);return j::nullish(_logical47933)?([&]()->V{V _callee47934=this->_v_43442_loopOf.get();return j::call(_callee47934,j::Args{_v_43910_list.get(),j::get(_v_43909_set.get(),this->_literals[29])});})():_logical47933;})();
_v_43923_loop=([&]()->V{V _logical47935=j::get(_v_43908_base,this->_literals[186]);return j::nullish(_logical47935)?_v_43922_repeats.get():_logical47935;})();
_v_43924_aspect.get()=(j::truth(([&]()->V{V _lhs47936=j::get(_v_43908_base,this->_literals[187]);V _rhs47937=V(1.0);return V(j::equal(_lhs47936,_rhs47937,true));})())?V(1.0):V(2.0));
_v_43925_made=([&]()->V{V _callee47953=this->_v_42455_piece.get();return j::call(_callee47953,j::Args{([&]()->V{V _obj47938=j::object();V _spread47939=_v_43908_base;for(const auto &_key:j::keys(_spread47939))j::put(_obj47938,_key,j::get(_spread47939,_key));j::put(_obj47938,this->_literals[188],([&]()->V{V _logical47940=j::get(_v_43908_base,this->_literals[188]);return j::nullish(_logical47940)?this->_literals[171]:_logical47940;})());j::put(_obj47938,this->_literals[189],([&]()->V{V _logical47941=j::get(_v_43908_base,this->_literals[189]);return j::nullish(_logical47941)?(j::truth(_v_43921_moving)?V(30.0):V(0.0)):_logical47941;})());j::put(_obj47938,this->_literals[183],_v_43914_palette);j::put(_obj47938,this->_literals[184],_v_43915_ink);V _spread47942=(j::truth(([&]()->V{V _lhs47943=_v_43923_loop;V _rhs47944=j::builtin("undefined");return V(!j::equal(_lhs47943,_rhs47944,true));})())?([&]()->V{V _obj47945=j::object();j::put(_obj47945,this->_literals[186],_v_43923_loop);return _obj47945;})():([&]()->V{V _obj47946=j::object();return _obj47946;})());for(const auto &_key:j::keys(_spread47942))j::put(_obj47938,_key,j::get(_spread47942,_key));return _obj47938;})(),([&]()->V{V _obj47947=j::object();j::put(_obj47947,this->_literals[190],j::function([=](const j::Args &_args_fn43926,const V &_receiver_fn43926,const V &_self_fn43926) mutable ->V{
V _v_43927__;
V _v_43928_size;
_v_43927__=_args_fn43926[0];
_v_43928_size=_args_fn43926[1];
{
j::Cell _v_43929_view;
_v_43929_view.get()=([&]()->V{V _callee47948=this->_v_43462_View.get();return j::construct(_callee47948,j::Args{j::get(_v_43928_size,this->_literals[174]),j::get(_v_43928_size,this->_literals[175]),_v_43924_aspect.get(),_v_43909_set.get(),_v_43933_fit.get(),_v_43922_repeats.get()});})();
return j::function([=](const j::Args &_args_fn43930,const V &_receiver_fn43930,const V &_self_fn43930) mutable ->V{
V _v_43931_t;
V _v_43932_s;
_v_43931_t=_args_fn43930[0];
_v_43932_s=_args_fn43930[1];
return ([&]()->V{V _receiver47950=_v_43929_view.get();V _method47951=this->_literals[178];V _method=j::get(_receiver47950,_method47951);j::Args _params47952=j::Args{_v_43932_s,([&]()->V{V _callee47949=this->_v_43254_listAt.get();return j::call(_callee47949,j::Args{_v_43910_list.get(),_v_43931_t,this->_literals[164]});})(),_v_43931_t};return j::call(_method,_params47952,_receiver47950);})();
return V{};
},2);

}

return V{};
},2));return _obj47947;})()});})();
_v_43933_fit.get()=([&]()->V{V _callee47954=this->_v_43384_measure.get();return j::call(_callee47954,j::Args{_v_43910_list.get(),_v_43909_set.get(),j::get(_v_43908_base,this->_literals[174]),j::get(_v_43908_base,this->_literals[175]),_v_43924_aspect.get(),_v_43922_repeats.get()});})();
return _v_43925_made;

}

return V{};
},2);
auto &_import2202=j::module("kit/core");
this->_v_42440_INK=_import2202.exported("INK");
this->_v_42441_NONE=_import2202.exported("NONE");
this->_v_42442_Palette=_import2202.exported("Palette");
this->_v_42443_Surface=_import2202.exported("Surface");
this->_v_42444_TAU=_import2202.exported("TAU");
this->_v_42445_and=_import2202.exported("and");
this->_v_42446_code=_import2202.exported("code");
this->_v_42447_named=_import2202.exported("colorOf");
this->_v_42448_namedColors=_import2202.exported("colorsOf");
this->_v_42449_fail=_import2202.exported("fail");
this->_v_42450_fract=_import2202.exported("fract");
this->_v_42451_hash=_import2202.exported("hash");
this->_v_42452_isHex=_import2202.exported("isHex");
this->_v_42453_mix=_import2202.exported("mix");
this->_v_42454_mulberry32=_import2202.exported("mulberry32");
this->_v_42455_piece=_import2202.exported("piece");
this->_v_42456_rampOf=_import2202.exported("ramp");
this->_v_42457_rgb=_import2202.exported("rgb");
this->_v_42458_smoothstep=_import2202.exported("smoothstep");
this->_v_42459_specOf=_import2202.exported("specOf");
this->_v_42460_spread=_import2202.exported("spread");
this->_v_42461_suggest=_import2202.exported("suggest");
this->exports["textures"]=this->_v_42535_textures;
this->exports["torus"]=this->_v_42902_torus;
this->exports["sphere"]=this->_v_42911_sphere;
this->exports["cube"]=this->_v_42919_cube;
this->exports["cylinder"]=this->_v_42926_cylinder;
this->exports["cone"]=this->_v_42935_cone;
this->exports["plane"]=this->_v_42944_plane;
this->exports["points"]=this->_v_42952_points;
this->exports["lines"]=this->_v_42986_lines;
this->exports["group"]=this->_v_43019_group;
this->exports["mesh"]=this->_v_43067_mesh;
this->exports["parametric"]=this->_v_43087_parametric;
this->exports["orbit"]=this->_v_43178_orbit;
this->exports["render3d"]=this->_v_43849_render3d;
this->exports["scenePalette"]=this->_v_43887_scenePalette;
this->exports["scene"]=this->_v_43901_scene;
this->_v_42489_TURNS.get()=([&]()->V{V _obj47955=j::object();j::put(_obj47955,this->_literals[191],([&]()->V{j::Args _array47956;_array47956.push_back(j::get(j::builtin("Math"),this->_literals[18]));_array47956.push_back(V(0.0));_array47956.push_back(V(0.0));return j::array(std::move(_array47956));})());j::put(_obj47955,this->_literals[192],([&]()->V{j::Args _array47957;_array47957.push_back(V(0.0));_array47957.push_back(V(0.0));_array47957.push_back(([&]()->V{V _lhs47958=j::get(j::builtin("Math"),this->_literals[18]);V _rhs47959=V(2.0);return V(j::number(_lhs47958)/j::number(_rhs47959));})());return j::array(std::move(_array47957));})());j::put(_obj47955,this->_literals[193],([&]()->V{j::Args _array47960;_array47960.push_back(V(0.45));_array47960.push_back(V(0.0));_array47960.push_back(V(0.0));return j::array(std::move(_array47960));})());j::put(_obj47955,this->_literals[194],([&]()->V{j::Args _array47961;_array47961.push_back(V(0.0));_array47961.push_back(([&]()->V{V _lhs47962=j::unary("-",j::get(j::builtin("Math"),this->_literals[18]));V _rhs47963=V(2.0);return V(j::number(_lhs47962)/j::number(_rhs47963));})());_array47961.push_back(V(0.0));return j::array(std::move(_array47961));})());j::put(_obj47955,this->_literals[195],([&]()->V{j::Args _array47964;_array47964.push_back(V(0.0));_array47964.push_back(([&]()->V{V _lhs47965=j::get(j::builtin("Math"),this->_literals[18]);V _rhs47966=V(2.0);return V(j::number(_lhs47965)/j::number(_rhs47966));})());_array47964.push_back(V(0.0));return j::array(std::move(_array47964));})());j::put(_obj47955,this->_literals[196],([&]()->V{j::Args _array47967;_array47967.push_back(V(0.0));_array47967.push_back(j::get(j::builtin("Math"),this->_literals[18]));_array47967.push_back(V(0.0));return j::array(std::move(_array47967));})());return _obj47955;})();
this->_v_42502_SPINS.get()=([&]()->V{V _obj47968=j::object();j::put(_obj47968,this->_literals[197],([&]()->V{V _lhs47969=this->_v_42444_TAU.get();V _rhs47970=V(12.0);return V(j::number(_lhs47969)/j::number(_rhs47970));})());j::put(_obj47968,this->_literals[198],([&]()->V{V _lhs47971=this->_v_42444_TAU.get();V _rhs47972=V(6.0);return V(j::number(_lhs47971)/j::number(_rhs47972));})());j::put(_obj47968,this->_literals[199],([&]()->V{V _lhs47973=this->_v_42444_TAU.get();V _rhs47974=V(3.0);return V(j::number(_lhs47973)/j::number(_rhs47974));})());return _obj47968;})();
this->_v_42503_or.get()=j::function([=](const j::Args &_args_fn42504,const V &_receiver_fn42504,const V &_self_fn42504) mutable ->V{
V _v_42505_words;
_v_42505_words=_args_fn42504[0];
return (j::truth(([&]()->V{V _lhs47975=j::get(_v_42505_words,this->_literals[9]);V _rhs47976=V(1.0);return j::binary(">",_lhs47975,_rhs47976);})())?([&]()->V{std::u16string _text47977;_text47977+=u"";_text47977+=j::string(([&]()->V{V _receiver47978=([&]()->V{V _receiver47981=_v_42505_words;V _method47982=this->_literals[24];V _method=j::get(_receiver47981,_method47982);j::Args _params47983=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params47983,_receiver47981);})();V _method47979=this->_literals[46];V _method=j::get(_receiver47978,_method47979);j::Args _params47980=j::Args{this->_literals[200]};return j::call(_method,_params47980,_receiver47978);})());_text47977+=u" or ";_text47977+=j::string(([&]()->V{V _receiver47984=_v_42505_words;V _method47985=this->_literals[31];V _method=j::get(_receiver47984,_method47985);j::Args _params47986=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params47986,_receiver47984);})());_text47977+=u"";return V(std::move(_text47977));})():([&]()->V{V _logical47987=j::get(_v_42505_words,V(0.0));return j::nullish(_logical47987)?this->_literals[22]:_logical47987;})());
return V{};
},1);
this->_v_42506_MEANT.get()=([&]()->V{V _obj47988=j::object();j::put(_obj47988,this->_literals[201],([&]()->V{j::Args _array47989;_array47989.push_back(this->_literals[25]);_array47989.push_back(this->_literals[147]);return j::array(std::move(_array47989));})());j::put(_obj47988,this->_literals[202],([&]()->V{j::Args _array47990;_array47990.push_back(this->_literals[147]);_array47990.push_back(this->_literals[25]);return j::array(std::move(_array47990));})());j::put(_obj47988,this->_literals[25],([&]()->V{j::Args _array47991;_array47991.push_back(this->_literals[147]);return j::array(std::move(_array47991));})());j::put(_obj47988,this->_literals[147],([&]()->V{j::Args _array47992;_array47992.push_back(this->_literals[25]);return j::array(std::move(_array47992));})());j::put(_obj47988,this->_literals[203],([&]()->V{j::Args _array47993;_array47993.push_back(this->_literals[145]);return j::array(std::move(_array47993));})());j::put(_obj47988,this->_literals[204],([&]()->V{j::Args _array47994;_array47994.push_back(this->_literals[145]);return j::array(std::move(_array47994));})());j::put(_obj47988,this->_literals[205],([&]()->V{j::Args _array47995;_array47995.push_back(this->_literals[145]);return j::array(std::move(_array47995));})());j::put(_obj47988,this->_literals[206],([&]()->V{j::Args _array47996;_array47996.push_back(this->_literals[31]);return j::array(std::move(_array47996));})());j::put(_obj47988,this->_literals[52],([&]()->V{j::Args _array47997;_array47997.push_back(this->_literals[31]);return j::array(std::move(_array47997));})());j::put(_obj47988,this->_literals[207],([&]()->V{j::Args _array47998;_array47998.push_back(this->_literals[31]);return j::array(std::move(_array47998));})());j::put(_obj47988,this->_literals[116],([&]()->V{j::Args _array47999;_array47999.push_back(this->_literals[31]);_array47999.push_back(this->_literals[116]);return j::array(std::move(_array47999));})());j::put(_obj47988,this->_literals[208],([&]()->V{j::Args _array48000;_array48000.push_back(this->_literals[31]);_array48000.push_back(this->_literals[116]);return j::array(std::move(_array48000));})());j::put(_obj47988,this->_literals[209],([&]()->V{j::Args _array48001;_array48001.push_back(this->_literals[32]);_array48001.push_back(this->_literals[29]);return j::array(std::move(_array48001));})());j::put(_obj47988,this->_literals[210],([&]()->V{j::Args _array48002;_array48002.push_back(this->_literals[32]);_array48002.push_back(this->_literals[129]);_array48002.push_back(this->_literals[130]);return j::array(std::move(_array48002));})());j::put(_obj47988,this->_literals[211],([&]()->V{j::Args _array48003;_array48003.push_back(this->_literals[32]);return j::array(std::move(_array48003));})());j::put(_obj47988,this->_literals[212],([&]()->V{j::Args _array48004;_array48004.push_back(this->_literals[32]);return j::array(std::move(_array48004));})());j::put(_obj47988,this->_literals[213],([&]()->V{j::Args _array48005;_array48005.push_back(this->_literals[29]);_array48005.push_back(this->_literals[120]);return j::array(std::move(_array48005));})());j::put(_obj47988,this->_literals[214],([&]()->V{j::Args _array48006;_array48006.push_back(this->_literals[29]);return j::array(std::move(_array48006));})());j::put(_obj47988,this->_literals[29],([&]()->V{j::Args _array48007;_array48007.push_back(this->_literals[21]);return j::array(std::move(_array48007));})());j::put(_obj47988,this->_literals[129],([&]()->V{j::Args _array48008;_array48008.push_back(this->_literals[21]);return j::array(std::move(_array48008));})());j::put(_obj47988,this->_literals[149],([&]()->V{j::Args _array48009;_array48009.push_back(this->_literals[21]);return j::array(std::move(_array48009));})());j::put(_obj47988,this->_literals[151],([&]()->V{j::Args _array48010;_array48010.push_back(this->_literals[21]);_array48010.push_back(this->_literals[33]);return j::array(std::move(_array48010));})());j::put(_obj47988,this->_literals[215],([&]()->V{j::Args _array48011;_array48011.push_back(this->_literals[151]);return j::array(std::move(_array48011));})());j::put(_obj47988,this->_literals[216],([&]()->V{j::Args _array48012;_array48012.push_back(this->_literals[129]);return j::array(std::move(_array48012));})());j::put(_obj47988,this->_literals[217],([&]()->V{j::Args _array48013;_array48013.push_back(this->_literals[29]);return j::array(std::move(_array48013));})());j::put(_obj47988,this->_literals[32],([&]()->V{j::Args _array48014;_array48014.push_back(this->_literals[29]);return j::array(std::move(_array48014));})());j::put(_obj47988,this->_literals[218],([&]()->V{j::Args _array48015;_array48015.push_back(this->_literals[149]);return j::array(std::move(_array48015));})());j::put(_obj47988,this->_literals[50],([&]()->V{j::Args _array48016;_array48016.push_back(this->_literals[75]);_array48016.push_back(this->_literals[91]);return j::array(std::move(_array48016));})());j::put(_obj47988,this->_literals[75],([&]()->V{j::Args _array48017;_array48017.push_back(this->_literals[50]);return j::array(std::move(_array48017));})());j::put(_obj47988,this->_literals[219],([&]()->V{j::Args _array48018;_array48018.push_back(this->_literals[75]);_array48018.push_back(this->_literals[50]);return j::array(std::move(_array48018));})());j::put(_obj47988,this->_literals[220],([&]()->V{j::Args _array48019;_array48019.push_back(this->_literals[75]);return j::array(std::move(_array48019));})());j::put(_obj47988,this->_literals[221],([&]()->V{j::Args _array48020;_array48020.push_back(this->_literals[76]);return j::array(std::move(_array48020));})());j::put(_obj47988,this->_literals[222],([&]()->V{j::Args _array48021;_array48021.push_back(this->_literals[76]);return j::array(std::move(_array48021));})());j::put(_obj47988,this->_literals[91],([&]()->V{j::Args _array48022;_array48022.push_back(this->_literals[174]);return j::array(std::move(_array48022));})());j::put(_obj47988,this->_literals[85],([&]()->V{j::Args _array48023;_array48023.push_back(this->_literals[175]);_array48023.push_back(this->_literals[92]);return j::array(std::move(_array48023));})());j::put(_obj47988,this->_literals[223],([&]()->V{j::Args _array48024;_array48024.push_back(this->_literals[174]);return j::array(std::move(_array48024));})());j::put(_obj47988,this->_literals[9],([&]()->V{j::Args _array48025;_array48025.push_back(this->_literals[85]);_array48025.push_back(this->_literals[92]);return j::array(std::move(_array48025));})());j::put(_obj47988,this->_literals[224],([&]()->V{j::Args _array48026;_array48026.push_back(this->_literals[23]);return j::array(std::move(_array48026));})());j::put(_obj47988,this->_literals[225],([&]()->V{j::Args _array48027;_array48027.push_back(this->_literals[23]);return j::array(std::move(_array48027));})());j::put(_obj47988,this->_literals[226],([&]()->V{j::Args _array48028;_array48028.push_back(this->_literals[23]);return j::array(std::move(_array48028));})());j::put(_obj47988,this->_literals[227],([&]()->V{j::Args _array48029;_array48029.push_back(this->_literals[27]);return j::array(std::move(_array48029));})());j::put(_obj47988,this->_literals[228],([&]()->V{j::Args _array48030;_array48030.push_back(this->_literals[27]);return j::array(std::move(_array48030));})());j::put(_obj47988,this->_literals[229],([&]()->V{j::Args _array48031;_array48031.push_back(this->_literals[27]);return j::array(std::move(_array48031));})());j::put(_obj47988,this->_literals[230],([&]()->V{j::Args _array48032;_array48032.push_back(this->_literals[231]);return j::array(std::move(_array48032));})());j::put(_obj47988,this->_literals[232],([&]()->V{j::Args _array48033;_array48033.push_back(this->_literals[231]);return j::array(std::move(_array48033));})());j::put(_obj47988,this->_literals[233],([&]()->V{j::Args _array48034;_array48034.push_back(this->_literals[137]);return j::array(std::move(_array48034));})());j::put(_obj47988,this->_literals[234],([&]()->V{j::Args _array48035;_array48035.push_back(this->_literals[137]);return j::array(std::move(_array48035));})());j::put(_obj47988,this->_literals[235],([&]()->V{j::Args _array48036;_array48036.push_back(this->_literals[137]);return j::array(std::move(_array48036));})());j::put(_obj47988,this->_literals[154],([&]()->V{j::Args _array48037;_array48037.push_back(this->_literals[142]);_array48037.push_back(this->_literals[96]);return j::array(std::move(_array48037));})());j::put(_obj47988,this->_literals[236],([&]()->V{j::Args _array48038;_array48038.push_back(this->_literals[142]);_array48038.push_back(this->_literals[96]);return j::array(std::move(_array48038));})());j::put(_obj47988,this->_literals[237],([&]()->V{j::Args _array48039;_array48039.push_back(this->_literals[142]);return j::array(std::move(_array48039));})());j::put(_obj47988,this->_literals[238],([&]()->V{j::Args _array48040;_array48040.push_back(this->_literals[96]);return j::array(std::move(_array48040));})());j::put(_obj47988,this->_literals[239],([&]()->V{j::Args _array48041;_array48041.push_back(this->_literals[96]);return j::array(std::move(_array48041));})());j::put(_obj47988,this->_literals[240],([&]()->V{j::Args _array48042;_array48042.push_back(this->_literals[120]);return j::array(std::move(_array48042));})());j::put(_obj47988,this->_literals[241],([&]()->V{j::Args _array48043;_array48043.push_back(this->_literals[120]);return j::array(std::move(_array48043));})());j::put(_obj47988,this->_literals[186],([&]()->V{j::Args _array48044;_array48044.push_back(this->_literals[56]);_array48044.push_back(this->_literals[120]);return j::array(std::move(_array48044));})());j::put(_obj47988,this->_literals[242],([&]()->V{j::Args _array48045;_array48045.push_back(this->_literals[56]);return j::array(std::move(_array48045));})());j::put(_obj47988,this->_literals[243],([&]()->V{j::Args _array48046;_array48046.push_back(this->_literals[146]);return j::array(std::move(_array48046));})());j::put(_obj47988,this->_literals[244],([&]()->V{j::Args _array48047;_array48047.push_back(this->_literals[146]);_array48047.push_back(this->_literals[124]);return j::array(std::move(_array48047));})());j::put(_obj47988,this->_literals[245],([&]()->V{j::Args _array48048;_array48048.push_back(this->_literals[124]);return j::array(std::move(_array48048));})());j::put(_obj47988,this->_literals[246],([&]()->V{j::Args _array48049;_array48049.push_back(this->_literals[124]);return j::array(std::move(_array48049));})());j::put(_obj47988,this->_literals[61],([&]()->V{j::Args _array48050;_array48050.push_back(this->_literals[97]);return j::array(std::move(_array48050));})());j::put(_obj47988,this->_literals[2],([&]()->V{j::Args _array48051;_array48051.push_back(this->_literals[97]);return j::array(std::move(_array48051));})());j::put(_obj47988,this->_literals[247],([&]()->V{j::Args _array48052;_array48052.push_back(this->_literals[99]);return j::array(std::move(_array48052));})());j::put(_obj47988,this->_literals[248],([&]()->V{j::Args _array48053;_array48053.push_back(this->_literals[143]);return j::array(std::move(_array48053));})());j::put(_obj47988,this->_literals[249],([&]()->V{j::Args _array48054;_array48054.push_back(this->_literals[143]);return j::array(std::move(_array48054));})());j::put(_obj47988,this->_literals[250],([&]()->V{j::Args _array48055;_array48055.push_back(this->_literals[148]);return j::array(std::move(_array48055));})());return _obj47988;})();
this->_v_42535_textures.get()=([&]()->V{V _obj48056=j::object();j::put(_obj48056,this->_literals[251],j::function([=](const j::Args &_args_fn42536,const V &_receiver_fn42536,const V &_self_fn42536) mutable ->V{
V _v_42537_count;
V _default48057=_args_fn42536[0];if(_default48057.kind==V::Undefined||_default48057.kind==V::Hole)_default48057=V(6.0);
_v_42537_count=_default48057;
{
j::Cell _v_42538_n;
_v_42538_n.get()=([&]()->V{V _callee48058=this->_v_42475_wholeIn.get();return j::call(_callee48058,j::Args{_v_42537_count,this->_literals[252],V(6.0),V(1.0),V(64.0)});})();
return j::function([=](const j::Args &_args_fn42539,const V &_receiver_fn42539,const V &_self_fn42539) mutable ->V{
V _v_42540_u;
V _v_42541_v;
_v_42540_u=_args_fn42539[0];
_v_42541_v=_args_fn42539[1];
{
V _v_42542_du;
V _v_42543_dv;
V _v_42544_d;
_v_42542_du=([&]()->V{V _lhs48059=([&]()->V{V _lhs48061=([&]()->V{V _callee48067=this->_v_42450_fract.get();return j::call(_callee48067,j::Args{([&]()->V{V _lhs48063=([&]()->V{V _lhs48065=_v_42540_u;V _rhs48066=V(0.25);return V(j::number(_lhs48065)-j::number(_rhs48066));})();V _rhs48064=V(0.5);return j::binary("+",_lhs48063,_rhs48064);})()});})();V _rhs48062=V(0.5);return V(j::number(_lhs48061)-j::number(_rhs48062));})();V _rhs48060=V(0.08);return V(j::number(_lhs48059)/j::number(_rhs48060));})();
_v_42543_dv=([&]()->V{V _lhs48068=([&]()->V{V _lhs48070=([&]()->V{V _lhs48072=_v_42541_v;V _rhs48073=V(0.5);return V(j::number(_lhs48072)-j::number(_rhs48073));})();V _rhs48071=([&]()->V{V _lhs48074=V(0.5);V _rhs48075=_v_42538_n.get();return V(j::number(_lhs48074)/j::number(_rhs48075));})();return j::binary("+",_lhs48070,_rhs48071);})();V _rhs48069=V(0.05);return V(j::number(_lhs48068)/j::number(_rhs48069));})();
_v_42544_d=([&]()->V{V _lhs48076=([&]()->V{V _lhs48078=_v_42542_du;V _rhs48079=_v_42542_du;return V(j::number(_lhs48078)*j::number(_rhs48079));})();V _rhs48077=([&]()->V{V _lhs48080=_v_42543_dv;V _rhs48081=_v_42543_dv;return V(j::number(_lhs48080)*j::number(_rhs48081));})();return j::binary("+",_lhs48076,_rhs48077);})();
if(j::truth(([&]()->V{V _lhs48082=_v_42544_d;V _rhs48083=V(1.0);return j::binary("<",_lhs48082,_rhs48083);})())){return (j::truth(([&]()->V{V _lhs48084=_v_42544_d;V _rhs48085=V(0.45);return j::binary(">",_lhs48084,_rhs48085);})())?V(0.35):V(1.0));
}
return ([&]()->V{V _lhs48086=V(0.65);V _rhs48087=([&]()->V{V _lhs48088=V(0.35);V _rhs48089=([&]()->V{V _number48107=([&]()->V{V _lhs48108=([&]()->V{V _lhs48110=([&]()->V{V _lhs48112=this->_v_42444_TAU.get();V _rhs48113=_v_42538_n.get();return V(j::number(_lhs48112)*j::number(_rhs48113));})();V _rhs48111=_v_42541_v;return V(j::number(_lhs48110)*j::number(_rhs48111));})();V _rhs48109=([&]()->V{V _lhs48114=V(0.3);V _rhs48115=([&]()->V{V _number48120=([&]()->V{V _lhs48121=([&]()->V{V _lhs48123=this->_v_42444_TAU.get();V _rhs48124=V(3.0);return V(j::number(_lhs48123)*j::number(_rhs48124));})();V _rhs48122=_v_42540_u;return V(j::number(_lhs48121)*j::number(_rhs48122));})();return V(std::sin(j::number(_number48120)));})();return V(j::number(_lhs48114)*j::number(_rhs48115));})();return j::binary("+",_lhs48108,_rhs48109);})();return V(std::cos(j::number(_number48107)));})();return V(j::number(_lhs48088)*j::number(_rhs48089));})();return j::binary("+",_lhs48086,_rhs48087);})();

}

return V{};
},2);

}

return V{};
},0));j::put(_obj48056,this->_literals[253],j::function([=](const j::Args &_args_fn42545,const V &_receiver_fn42545,const V &_self_fn42545) mutable ->V{
V _v_42546_count;
V _default48125=_args_fn42545[0];if(_default48125.kind==V::Undefined||_default48125.kind==V::Hole)_default48125=V(8.0);
_v_42546_count=_default48125;
{
j::Cell _v_42547_n;
_v_42547_n.get()=([&]()->V{V _callee48126=this->_v_42475_wholeIn.get();return j::call(_callee48126,j::Args{_v_42546_count,this->_literals[254],V(8.0),V(1.0),V(64.0)});})();
return j::function([=](const j::Args &_args_fn42548,const V &_receiver_fn42548,const V &_self_fn42548) mutable ->V{
V _v_42549_u;
_v_42549_u=_args_fn42548[0];
return (j::truth(([&]()->V{V _lhs48127=([&]()->V{V _number48131=([&]()->V{V _lhs48132=_v_42549_u;V _rhs48133=_v_42547_n.get();return V(j::number(_lhs48132)*j::number(_rhs48133));})();return V(std::floor(j::number(_number48131)));})();V _rhs48128=V(1.0);return V(int(j::i32(_lhs48127)&j::i32(_rhs48128)));})())?V(0.45):V(1.0));
return V{};
},1);

}

return V{};
},0));j::put(_obj48056,this->_literals[255],j::function([=](const j::Args &_args_fn42550,const V &_receiver_fn42550,const V &_self_fn42550) mutable ->V{
V _v_42551_across;
V _v_42552_along;
V _default48134=_args_fn42550[0];if(_default48134.kind==V::Undefined||_default48134.kind==V::Hole)_default48134=V(8.0);
_v_42551_across=_default48134;
_v_42552_along=_args_fn42550[1];
{
j::Cell _v_42553_n;
j::Cell _v_42554_m;
_v_42553_n.get()=([&]()->V{V _callee48135=this->_v_42475_wholeIn.get();return j::call(_callee48135,j::Args{_v_42551_across,this->_literals[256],V(8.0),V(1.0),V(64.0)});})();
_v_42554_m.get()=([&]()->V{V _callee48146=this->_v_42475_wholeIn.get();return j::call(_callee48146,j::Args{_v_42552_along,this->_literals[257],([&]()->V{V _receiver48143=j::builtin("Math");V _method48144=this->_literals[73];V _method=j::get(_receiver48143,_method48144);j::Args _params48145=j::Args{V(1.0),([&]()->V{V _number48138=([&]()->V{V _lhs48139=_v_42553_n.get();V _rhs48140=V(2.0);return V(j::number(_lhs48139)/j::number(_rhs48140));})();return V(std::floor(j::number(_number48138)+.5));})()};return j::call(_method,_params48145,_receiver48143);})(),V(1.0),V(64.0)});})();
return j::function([=](const j::Args &_args_fn42555,const V &_receiver_fn42555,const V &_self_fn42555) mutable ->V{
V _v_42556_u;
V _v_42557_v;
_v_42556_u=_args_fn42555[0];
_v_42557_v=_args_fn42555[1];
return (j::truth(([&]()->V{V _lhs48147=([&]()->V{V _lhs48149=([&]()->V{V _number48153=([&]()->V{V _lhs48154=_v_42556_u;V _rhs48155=_v_42553_n.get();return V(j::number(_lhs48154)*j::number(_rhs48155));})();return V(std::floor(j::number(_number48153)));})();V _rhs48150=([&]()->V{V _number48158=([&]()->V{V _lhs48159=_v_42557_v;V _rhs48160=_v_42554_m.get();return V(j::number(_lhs48159)*j::number(_rhs48160));})();return V(std::floor(j::number(_number48158)));})();return j::binary("+",_lhs48149,_rhs48150);})();V _rhs48148=V(1.0);return V(int(j::i32(_lhs48147)&j::i32(_rhs48148)));})())?V(0.45):V(1.0));
return V{};
},2);

}

return V{};
},0));j::put(_obj48056,this->_literals[258],j::function([=](const j::Args &_args_fn42558,const V &_receiver_fn42558,const V &_self_fn42558) mutable ->V{
V _v_42559_across;
V _v_42560_along;
V _default48161=_args_fn42558[0];if(_default48161.kind==V::Undefined||_default48161.kind==V::Hole)_default48161=V(12.0);
_v_42559_across=_default48161;
_v_42560_along=_args_fn42558[1];
{
j::Cell _v_42561_n;
j::Cell _v_42562_m;
_v_42561_n.get()=([&]()->V{V _callee48162=this->_v_42475_wholeIn.get();return j::call(_callee48162,j::Args{_v_42559_across,this->_literals[259],V(12.0),V(1.0),V(64.0)});})();
_v_42562_m.get()=([&]()->V{V _callee48173=this->_v_42475_wholeIn.get();return j::call(_callee48173,j::Args{_v_42560_along,this->_literals[260],([&]()->V{V _receiver48170=j::builtin("Math");V _method48171=this->_literals[73];V _method=j::get(_receiver48170,_method48171);j::Args _params48172=j::Args{V(1.0),([&]()->V{V _number48165=([&]()->V{V _lhs48166=_v_42561_n.get();V _rhs48167=V(2.0);return V(j::number(_lhs48166)/j::number(_rhs48167));})();return V(std::floor(j::number(_number48165)+.5));})()};return j::call(_method,_params48172,_receiver48170);})(),V(1.0),V(64.0)});})();
return j::function([=](const j::Args &_args_fn42563,const V &_receiver_fn42563,const V &_self_fn42563) mutable ->V{
V _v_42564_u;
V _v_42565_v;
_v_42564_u=_args_fn42563[0];
_v_42565_v=_args_fn42563[1];
{
V _v_42566_a;
V _v_42567_b;
_v_42566_a=([&]()->V{V _callee48176=this->_v_42450_fract.get();return j::call(_callee48176,j::Args{([&]()->V{V _lhs48174=_v_42564_u;V _rhs48175=_v_42561_n.get();return V(j::number(_lhs48174)*j::number(_rhs48175));})()});})();
_v_42567_b=([&]()->V{V _callee48179=this->_v_42450_fract.get();return j::call(_callee48179,j::Args{([&]()->V{V _lhs48177=_v_42565_v;V _rhs48178=_v_42562_m.get();return V(j::number(_lhs48177)*j::number(_rhs48178));})()});})();
return (j::truth(([&]()->V{V _logical48180=([&]()->V{V _lhs48181=([&]()->V{V _receiver48187=j::builtin("Math");V _method48188=this->_literals[119];V _method=j::get(_receiver48187,_method48188);j::Args _params48189=j::Args{_v_42566_a,([&]()->V{V _lhs48183=V(1.0);V _rhs48184=_v_42566_a;return V(j::number(_lhs48183)-j::number(_rhs48184));})()};return j::call(_method,_params48189,_receiver48187);})();V _rhs48182=V(0.1);return j::binary("<",_lhs48181,_rhs48182);})();return !j::truth(_logical48180)?([&]()->V{V _lhs48190=([&]()->V{V _receiver48196=j::builtin("Math");V _method48197=this->_literals[119];V _method=j::get(_receiver48196,_method48197);j::Args _params48198=j::Args{_v_42567_b,([&]()->V{V _lhs48192=V(1.0);V _rhs48193=_v_42567_b;return V(j::number(_lhs48192)-j::number(_rhs48193));})()};return j::call(_method,_params48198,_receiver48196);})();V _rhs48191=V(0.1);return j::binary("<",_lhs48190,_rhs48191);})():_logical48180;})())?V(0.3):V(1.0));

}

return V{};
},2);

}

return V{};
},0));j::put(_obj48056,this->_literals[261],j::function([=](const j::Args &_args_fn42568,const V &_receiver_fn42568,const V &_self_fn42568) mutable ->V{
V _v_42569_count;
V _v_42570_seed;
V _default48199=_args_fn42568[0];if(_default48199.kind==V::Undefined||_default48199.kind==V::Hole)_default48199=V(5.0);
_v_42569_count=_default48199;
V _default48200=_args_fn42568[1];if(_default48200.kind==V::Undefined||_default48200.kind==V::Hole)_default48200=V(1.0);
_v_42570_seed=_default48200;
{
j::Cell _v_42571_n;
j::Cell _v_42572_m;
j::Cell _v_42573_s;
j::Cell _v_42574_h;
V _v_42578_heights;
j::Cell _v_42584_coast;
_v_42571_n.get()=([&]()->V{V _callee48201=this->_v_42475_wholeIn.get();return j::call(_callee48201,j::Args{_v_42569_count,this->_literals[262],V(5.0),V(1.0),V(64.0)});})();
_v_42572_m.get()=([&]()->V{V _receiver48209=j::builtin("Math");V _method48210=this->_literals[73];V _method=j::get(_receiver48209,_method48210);j::Args _params48211=j::Args{V(1.0),([&]()->V{V _number48204=([&]()->V{V _lhs48205=_v_42571_n.get();V _rhs48206=V(2.0);return V(j::number(_lhs48205)/j::number(_rhs48206));})();return V(std::floor(j::number(_number48204)+.5));})()};return j::call(_method,_params48211,_receiver48209);})();
_v_42573_s.get()=([&]()->V{V _callee48218=this->_v_42475_wholeIn.get();return j::call(_callee48218,j::Args{_v_42570_seed,this->_literals[263],V(1.0),j::unary("-",([&]()->V{V _lhs48212=V(2.0);V _rhs48213=V(31.0);return V(std::pow(j::number(_lhs48212),j::number(_rhs48213)));})()),([&]()->V{V _lhs48214=([&]()->V{V _lhs48216=V(2.0);V _rhs48217=V(31.0);return V(std::pow(j::number(_lhs48216),j::number(_rhs48217)));})();V _rhs48215=V(1.0);return V(j::number(_lhs48214)-j::number(_rhs48215));})()});})();
_v_42574_h.get()=j::function([=](const j::Args &_args_fn42575,const V &_receiver_fn42575,const V &_self_fn42575) mutable ->V{
V _v_42576_u;
V _v_42577_v;
_v_42576_u=_args_fn42575[0];
_v_42577_v=_args_fn42575[1];
return ([&]()->V{V _lhs48219=([&]()->V{V _lhs48221=([&]()->V{V _lhs48223=([&]()->V{V _lhs48225=V(4.0);V _rhs48226=([&]()->V{V _callee48231=this->_v_42517_wrapped.get();return j::call(_callee48231,j::Args{([&]()->V{V _lhs48227=_v_42576_u;V _rhs48228=_v_42571_n.get();return V(j::number(_lhs48227)*j::number(_rhs48228));})(),([&]()->V{V _lhs48229=_v_42577_v;V _rhs48230=_v_42572_m.get();return V(j::number(_lhs48229)*j::number(_rhs48230));})(),_v_42571_n.get(),_v_42573_s.get()});})();return V(j::number(_lhs48225)*j::number(_rhs48226));})();V _rhs48224=([&]()->V{V _lhs48232=V(2.0);V _rhs48233=([&]()->V{V _callee48246=this->_v_42517_wrapped.get();return j::call(_callee48246,j::Args{([&]()->V{V _lhs48234=([&]()->V{V _lhs48236=_v_42576_u;V _rhs48237=_v_42571_n.get();return V(j::number(_lhs48236)*j::number(_rhs48237));})();V _rhs48235=V(2.0);return V(j::number(_lhs48234)*j::number(_rhs48235));})(),([&]()->V{V _lhs48238=([&]()->V{V _lhs48240=_v_42577_v;V _rhs48241=_v_42572_m.get();return V(j::number(_lhs48240)*j::number(_rhs48241));})();V _rhs48239=V(2.0);return V(j::number(_lhs48238)*j::number(_rhs48239));})(),([&]()->V{V _lhs48242=_v_42571_n.get();V _rhs48243=V(2.0);return V(j::number(_lhs48242)*j::number(_rhs48243));})(),([&]()->V{V _lhs48244=_v_42573_s.get();V _rhs48245=V(101.0);return j::binary("+",_lhs48244,_rhs48245);})()});})();return V(j::number(_lhs48232)*j::number(_rhs48233));})();return j::binary("+",_lhs48223,_rhs48224);})();V _rhs48222=([&]()->V{V _callee48259=this->_v_42517_wrapped.get();return j::call(_callee48259,j::Args{([&]()->V{V _lhs48247=([&]()->V{V _lhs48249=_v_42576_u;V _rhs48250=_v_42571_n.get();return V(j::number(_lhs48249)*j::number(_rhs48250));})();V _rhs48248=V(4.0);return V(j::number(_lhs48247)*j::number(_rhs48248));})(),([&]()->V{V _lhs48251=([&]()->V{V _lhs48253=_v_42577_v;V _rhs48254=_v_42572_m.get();return V(j::number(_lhs48253)*j::number(_rhs48254));})();V _rhs48252=V(4.0);return V(j::number(_lhs48251)*j::number(_rhs48252));})(),([&]()->V{V _lhs48255=_v_42571_n.get();V _rhs48256=V(4.0);return V(j::number(_lhs48255)*j::number(_rhs48256));})(),([&]()->V{V _lhs48257=_v_42573_s.get();V _rhs48258=V(202.0);return j::binary("+",_lhs48257,_rhs48258);})()});})();return j::binary("+",_lhs48221,_rhs48222);})();V _rhs48220=V(7.0);return V(j::number(_lhs48219)/j::number(_rhs48220));})();
return V{};
},2);
_v_42578_heights=([&]()->V{j::Args _array48260;return j::array(std::move(_array48260));})();
{V _v_42579_j;
_v_42579_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs48261=_v_42579_j;V _rhs48262=V(32.0);return j::binary("<",_lhs48261,_rhs48262);})());(void)(j::increment(_v_42579_j,1,false))){{V _v_42580_i;
_v_42580_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs48263=_v_42580_i;V _rhs48264=V(64.0);return j::binary("<",_lhs48263,_rhs48264);})());(void)(j::increment(_v_42580_i,1,false))){(void)(([&]()->V{V _receiver48274=_v_42578_heights;V _method48275=this->_literals[68];V _method=j::get(_receiver48274,_method48275);j::Args _params48276=j::Args{([&]()->V{V _callee48273=_v_42574_h.get();return j::call(_callee48273,j::Args{([&]()->V{V _lhs48265=([&]()->V{V _lhs48267=_v_42580_i;V _rhs48268=V(0.5);return j::binary("+",_lhs48267,_rhs48268);})();V _rhs48266=V(64.0);return V(j::number(_lhs48265)/j::number(_rhs48266));})(),([&]()->V{V _lhs48269=([&]()->V{V _lhs48271=_v_42579_j;V _rhs48272=V(0.5);return j::binary("+",_lhs48271,_rhs48272);})();V _rhs48270=V(32.0);return V(j::number(_lhs48269)/j::number(_rhs48270));})()});})()};return j::call(_method,_params48276,_receiver48274);})());
}}
}}
(void)(([&]()->V{V _receiver48279=_v_42578_heights;V _method48280=this->_literals[264];V _method=j::get(_receiver48279,_method48280);j::Args _params48281=j::Args{j::function([=](const j::Args &_args_fn42581,const V &_receiver_fn42581,const V &_self_fn42581) mutable ->V{
V _v_42582_a;
V _v_42583_b;
_v_42582_a=_args_fn42581[0];
_v_42583_b=_args_fn42581[1];
return ([&]()->V{V _lhs48277=_v_42582_a;V _rhs48278=_v_42583_b;return V(j::number(_lhs48277)-j::number(_rhs48278));})();
return V{};
},2)};return j::call(_method,_params48281,_receiver48279);})());
_v_42584_coast.get()=j::get(_v_42578_heights,([&]()->V{V _number48284=([&]()->V{V _lhs48285=j::get(_v_42578_heights,this->_literals[9]);V _rhs48286=V(0.6);return V(j::number(_lhs48285)*j::number(_rhs48286));})();return V(std::floor(j::number(_number48284)));})());
return j::function([=](const j::Args &_args_fn42585,const V &_receiver_fn42585,const V &_self_fn42585) mutable ->V{
V _v_42586_u;
V _v_42587_v;
_v_42586_u=_args_fn42585[0];
_v_42587_v=_args_fn42585[1];
return ([&]()->V{V _lhs48287=V(0.45);V _rhs48288=([&]()->V{V _lhs48289=V(0.55);V _rhs48290=([&]()->V{V _callee48296=this->_v_42458_smoothstep.get();return j::call(_callee48296,j::Args{([&]()->V{V _lhs48291=_v_42584_coast.get();V _rhs48292=V(0.015);return V(j::number(_lhs48291)-j::number(_rhs48292));})(),([&]()->V{V _lhs48293=_v_42584_coast.get();V _rhs48294=V(0.015);return j::binary("+",_lhs48293,_rhs48294);})(),([&]()->V{V _callee48295=_v_42574_h.get();return j::call(_callee48295,j::Args{_v_42586_u,_v_42587_v});})()});})();return V(j::number(_lhs48289)*j::number(_rhs48290));})();return j::binary("+",_lhs48287,_rhs48288);})();
return V{};
},2);

}

return V{};
},0));return _obj48056;})();
this->_v_42588_TEXTURES.get()=([&]()->V{V _receiver48297=j::builtin("Object");V _method48298=this->_literals[13];V _method=j::get(_receiver48297,_method48298);j::Args _params48299=j::Args{this->_v_42535_textures.get()};return j::call(_method,_params48299,_receiver48297);})();
this->_v_42589_KINDS.get()=([&]()->V{j::Args _array48300;_array48300.push_back(this->_literals[74]);_array48300.push_back(this->_literals[81]);_array48300.push_back(this->_literals[83]);_array48300.push_back(this->_literals[67]);_array48300.push_back(this->_literals[66]);_array48300.push_back(this->_literals[90]);_array48300.push_back(this->_literals[95]);_array48300.push_back(this->_literals[110]);_array48300.push_back(this->_literals[80]);_array48300.push_back(this->_literals[123]);_array48300.push_back(this->_literals[115]);return j::array(std::move(_array48300));})();
this->_v_42590_BODIES.get()=([&]()->V{V _callee48301=j::builtin("WeakMap");return j::construct(_callee48301,j::Args{});})();
this->_v_42591_ORBITS.get()=([&]()->V{V _callee48302=j::builtin("WeakMap");return j::construct(_callee48302,j::Args{});})();
this->_v_42592_ORIGIN.get()=([&]()->V{j::Args _array48303;_array48303.push_back(V(0.0));_array48303.push_back(V(0.0));_array48303.push_back(V(0.0));return j::array(std::move(_array48303));})();
this->_v_42593_SHAPE_KEYS.get()=([&]()->V{j::Args _array48304;_array48304.push_back(this->_literals[31]);_array48304.push_back(this->_literals[32]);_array48304.push_back(this->_literals[29]);_array48304.push_back(this->_literals[33]);_array48304.push_back(this->_literals[25]);_array48304.push_back(this->_literals[23]);_array48304.push_back(this->_literals[27]);return j::array(std::move(_array48304));})();
this->_v_42612_PLAIN.get()=([&]()->V{V _obj48305=j::object();j::put(_obj48305,this->_literals[80],V::null());j::put(_obj48305,this->_literals[108],V::null());j::put(_obj48305,this->_literals[112],V::null());j::put(_obj48305,this->_literals[44],V::null());j::put(_obj48305,this->_literals[35],V(false));return _obj48305;})();
this->_v_42631_motion.get()=j::function([=](const j::Args &_args_fn42632,const V &_receiver_fn42632,const V &_self_fn42632) mutable ->V{
V _v_42633_v;
_v_42633_v=_args_fn42632[0];
return (j::truth(([&]()->V{V _lhs48306=j::unary("typeof",_v_42633_v);V _rhs48307=this->_literals[0];return V(j::equal(_lhs48306,_rhs48307,true));})())?([&]()->V{V _logical48308=([&]()->V{V _chain48309=this->_v_42591_ORBITS.get();V _chain48310=j::get(_chain48309,this->_literals[38]);V _chain48311=j::call(_chain48310,j::Args{_v_42633_v},_chain48309);if(j::nullish(_chain48311))return V{};V _chain48312=j::get(_chain48311,this->_literals[42]);return _chain48312;})();return j::nullish(_logical48308)?V::null():_logical48308;})():([&]()->V{std::u16string _text48313;_text48313+=u"";_text48313+=j::string(j::get(_v_42633_v,V(0.0)));_text48313+=u",";_text48313+=j::string(j::get(_v_42633_v,V(1.0)));_text48313+=u",";_text48313+=j::string(j::get(_v_42633_v,V(2.0)));_text48313+=u"";return V(std::move(_text48313));})());
return V{};
},1);
this->_v_42641_MEMO.get()=([&]()->V{V _callee48314=j::builtin("Map");return j::construct(_callee48314,j::Args{});})();
this->_v_42647_around.get()=j::function([=](const j::Args &_args_fn42648,const V &_receiver_fn42648,const V &_self_fn42648) mutable ->V{
V _v_42649_cells;
V _v_42650_least;
_v_42649_cells=_args_fn42648[0];
V _default48315=_args_fn42648[1];if(_default48315.kind==V::Undefined||_default48315.kind==V::Hole)_default48315=V(12.0);
_v_42650_least=_default48315;
return ([&]()->V{V _receiver48338=j::builtin("Math");V _method48339=this->_literals[119];V _method=j::get(_receiver48338,_method48339);j::Args _params48340=j::Args{V(192.0),([&]()->V{V _receiver48333=j::builtin("Math");V _method48334=this->_literals[73];V _method=j::get(_receiver48333,_method48334);j::Args _params48335=j::Args{_v_42650_least,([&]()->V{V _lhs48316=V(4.0);V _rhs48317=([&]()->V{V _number48324=([&]()->V{V _lhs48325=([&]()->V{V _lhs48327=([&]()->V{V _lhs48329=this->_v_42444_TAU.get();V _rhs48330=_v_42649_cells;return V(j::number(_lhs48329)*j::number(_rhs48330));})();V _rhs48328=V(1.5);return V(j::number(_lhs48327)/j::number(_rhs48328));})();V _rhs48326=V(4.0);return V(j::number(_lhs48325)/j::number(_rhs48326));})();return V(std::ceil(j::number(_number48324)));})();return V(j::number(_lhs48316)*j::number(_rhs48317));})()};return j::call(_method,_params48335,_receiver48333);})()};return j::call(_method,_params48340,_receiver48338);})();
return V{};
},1);
this->_v_42803_FACES.get()=([&]()->V{j::Args _array48341;_array48341.push_back(([&]()->V{j::Args _array48342;_array48342.push_back(([&]()->V{j::Args _array48343;_array48343.push_back(V(0.0));_array48343.push_back(V(0.0));_array48343.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array48343));})());_array48342.push_back(([&]()->V{j::Args _array48344;_array48344.push_back(V(1.0));_array48344.push_back(V(0.0));_array48344.push_back(V(0.0));return j::array(std::move(_array48344));})());_array48342.push_back(([&]()->V{j::Args _array48345;_array48345.push_back(V(0.0));_array48345.push_back(V(1.0));_array48345.push_back(V(0.0));return j::array(std::move(_array48345));})());return j::array(std::move(_array48342));})());_array48341.push_back(([&]()->V{j::Args _array48346;_array48346.push_back(([&]()->V{j::Args _array48347;_array48347.push_back(V(0.0));_array48347.push_back(V(0.0));_array48347.push_back(V(1.0));return j::array(std::move(_array48347));})());_array48346.push_back(([&]()->V{j::Args _array48348;_array48348.push_back(j::unary("-",V(1.0)));_array48348.push_back(V(0.0));_array48348.push_back(V(0.0));return j::array(std::move(_array48348));})());_array48346.push_back(([&]()->V{j::Args _array48349;_array48349.push_back(V(0.0));_array48349.push_back(V(1.0));_array48349.push_back(V(0.0));return j::array(std::move(_array48349));})());return j::array(std::move(_array48346));})());_array48341.push_back(([&]()->V{j::Args _array48350;_array48350.push_back(([&]()->V{j::Args _array48351;_array48351.push_back(V(1.0));_array48351.push_back(V(0.0));_array48351.push_back(V(0.0));return j::array(std::move(_array48351));})());_array48350.push_back(([&]()->V{j::Args _array48352;_array48352.push_back(V(0.0));_array48352.push_back(V(0.0));_array48352.push_back(V(1.0));return j::array(std::move(_array48352));})());_array48350.push_back(([&]()->V{j::Args _array48353;_array48353.push_back(V(0.0));_array48353.push_back(V(1.0));_array48353.push_back(V(0.0));return j::array(std::move(_array48353));})());return j::array(std::move(_array48350));})());_array48341.push_back(([&]()->V{j::Args _array48354;_array48354.push_back(([&]()->V{j::Args _array48355;_array48355.push_back(j::unary("-",V(1.0)));_array48355.push_back(V(0.0));_array48355.push_back(V(0.0));return j::array(std::move(_array48355));})());_array48354.push_back(([&]()->V{j::Args _array48356;_array48356.push_back(V(0.0));_array48356.push_back(V(0.0));_array48356.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array48356));})());_array48354.push_back(([&]()->V{j::Args _array48357;_array48357.push_back(V(0.0));_array48357.push_back(V(1.0));_array48357.push_back(V(0.0));return j::array(std::move(_array48357));})());return j::array(std::move(_array48354));})());_array48341.push_back(([&]()->V{j::Args _array48358;_array48358.push_back(([&]()->V{j::Args _array48359;_array48359.push_back(V(0.0));_array48359.push_back(V(1.0));_array48359.push_back(V(0.0));return j::array(std::move(_array48359));})());_array48358.push_back(([&]()->V{j::Args _array48360;_array48360.push_back(V(1.0));_array48360.push_back(V(0.0));_array48360.push_back(V(0.0));return j::array(std::move(_array48360));})());_array48358.push_back(([&]()->V{j::Args _array48361;_array48361.push_back(V(0.0));_array48361.push_back(V(0.0));_array48361.push_back(V(1.0));return j::array(std::move(_array48361));})());return j::array(std::move(_array48358));})());_array48341.push_back(([&]()->V{j::Args _array48362;_array48362.push_back(([&]()->V{j::Args _array48363;_array48363.push_back(V(0.0));_array48363.push_back(j::unary("-",V(1.0)));_array48363.push_back(V(0.0));return j::array(std::move(_array48363));})());_array48362.push_back(([&]()->V{j::Args _array48364;_array48364.push_back(V(1.0));_array48364.push_back(V(0.0));_array48364.push_back(V(0.0));return j::array(std::move(_array48364));})());_array48362.push_back(([&]()->V{j::Args _array48365;_array48365.push_back(V(0.0));_array48365.push_back(V(0.0));_array48365.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array48365));})());return j::array(std::move(_array48362));})());return j::array(std::move(_array48341));})();
this->_v_42864_CLOUDS.get()=([&]()->V{V _obj48366=j::object();j::put(_obj48366,this->_literals[69],([&]()->V{V _obj48367=j::object();j::put(_obj48367,this->_literals[97],V(1200.0));j::put(_obj48367,this->_literals[99],V(0.2));return _obj48367;})());j::put(_obj48366,this->_literals[70],([&]()->V{V _obj48368=j::object();j::put(_obj48368,this->_literals[97],V(600.0));j::put(_obj48368,this->_literals[99],V(0.4));return _obj48368;})());j::put(_obj48366,this->_literals[71],([&]()->V{V _obj48369=j::object();j::put(_obj48369,this->_literals[97],V(600.0));j::put(_obj48369,this->_literals[99],V(0.5));return _obj48369;})());j::put(_obj48366,this->_literals[72],([&]()->V{V _obj48370=j::object();j::put(_obj48370,this->_literals[97],V(800.0));j::put(_obj48370,this->_literals[99],V(0.35));return _obj48370;})());j::put(_obj48366,this->_literals[265],([&]()->V{V _obj48371=j::object();j::put(_obj48371,this->_literals[97],V(480.0));j::put(_obj48371,this->_literals[99],V(0.5));return _obj48371;})());return _obj48366;})();
this->_v_43194_DONUT.get()=this->_literals[266];
this->_v_43195_AMBIENT.get()=([&]()->V{V _obj48372=j::object();j::put(_obj48372,this->_literals[267],V(0.0));j::put(_obj48372,this->_literals[268],V(0.15));j::put(_obj48372,this->_literals[269],V(0.35));return _obj48372;})();
this->_v_43196_TILTS.get()=([&]()->V{V _obj48373=j::object();j::put(_obj48373,this->_literals[270],V(0.0));j::put(_obj48373,this->_literals[271],V(0.45));j::put(_obj48373,this->_literals[272],V(0.9));j::put(_obj48373,this->_literals[273],j::unary("-",V(0.45)));return _obj48373;})();
this->_v_43197_NEAR.get()=V(0.05);
this->_v_43198_COLOR_BY.get()=([&]()->V{j::Args _array48374;_array48374.push_back(this->_literals[156]);_array48374.push_back(this->_literals[92]);_array48374.push_back(this->_literals[137]);return j::array(std::move(_array48374));})();
this->_v_43199_SCENE_KEYS.get()=([&]()->V{j::Args _array48375;_array48375.push_back(this->_literals[21]);_array48375.push_back(this->_literals[137]);_array48375.push_back(this->_literals[140]);_array48375.push_back(this->_literals[142]);_array48375.push_back(this->_literals[143]);_array48375.push_back(this->_literals[145]);_array48375.push_back(this->_literals[147]);_array48375.push_back(this->_literals[146]);_array48375.push_back(this->_literals[148]);_array48375.push_back(this->_literals[120]);return j::array(std::move(_array48375));})();
this->_v_43200_SPEC_KEYS.get()=([&]()->V{j::Args _array48376;_array48376.push_back(this->_literals[274]);_array48376.push_back(this->_literals[275]);_array48376.push_back(this->_literals[188]);_array48376.push_back(this->_literals[174]);_array48376.push_back(this->_literals[175]);_array48376.push_back(this->_literals[189]);_array48376.push_back(this->_literals[183]);_array48376.push_back(this->_literals[184]);_array48376.push_back(this->_literals[231]);_array48376.push_back(this->_literals[187]);_array48376.push_back(this->_literals[186]);_array48376.push_back(this->_literals[276]);_array48376.push_back(this->_literals[277]);_array48376.push_back(this->_literals[278]);_array48376.push_back(this->_literals[51]);return j::array(std::move(_array48376));})();
this->_v_43201_CAMERA_KEYS.get()=([&]()->V{j::Args _array48377;_array48377.push_back(this->_literals[149]);_array48377.push_back(this->_literals[151]);_array48377.push_back(this->_literals[129]);_array48377.push_back(this->_literals[29]);return j::array(std::move(_array48377));})();
this->_v_43228_PAGE.get()=([&]()->V{V _obj48378=j::object();j::put(_obj48378,this->_literals[137],this->_literals[158]);j::put(_obj48378,this->_literals[26],this->_literals[279]);return _obj48378;})();
this->_v_43260_whole.get()=j::function([=](const j::Args &_args_fn43261,const V &_receiver_fn43261,const V &_self_fn43261) mutable ->V{
V _v_43262_x;
_v_43262_x=_args_fn43261[0];
return ([&]()->V{V _logical48379=([&]()->V{V _lhs48380=_v_43262_x;V _rhs48381=([&]()->V{V _lhs48382=V(1.0);V _rhs48383=V(1e-9);return V(j::number(_lhs48382)-j::number(_rhs48383));})();return j::binary(">=",_lhs48380,_rhs48381);})();return j::truth(_logical48379)?([&]()->V{V _lhs48384=([&]()->V{V _number48389=([&]()->V{V _lhs48390=_v_43262_x;V _rhs48391=([&]()->V{V _number48392=_v_43262_x;return V(std::floor(j::number(_number48392)+.5));})();return V(j::number(_lhs48390)-j::number(_rhs48391));})();return V(std::fabs(j::number(_number48389)));})();V _rhs48385=([&]()->V{V _lhs48393=V(0.000001);V _rhs48394=([&]()->V{V _receiver48397=j::builtin("Math");V _method48398=this->_literals[73];V _method=j::get(_receiver48397,_method48398);j::Args _params48399=j::Args{V(1.0),_v_43262_x};return j::call(_method,_params48399,_receiver48397);})();return V(j::number(_lhs48393)*j::number(_rhs48394));})();return j::binary("<",_lhs48384,_rhs48385);})():_logical48379;})();
return V{};
},1);
this->_v_43263_turns.get()=j::function([=](const j::Args &_args_fn43264,const V &_receiver_fn43264,const V &_self_fn43264) mutable ->V{
V _v_43265_b;
_v_43265_b=_args_fn43264[0];
return ([&]()->V{V _logical48400=([&]()->V{V _lhs48401=j::unary("typeof",j::get(_v_43265_b,this->_literals[32]));V _rhs48402=this->_literals[0];return V(j::equal(_lhs48401,_rhs48402,true));})();return !j::truth(_logical48400)?([&]()->V{V _receiver48405=j::get(_v_43265_b,this->_literals[29]);V _method48406=this->_literals[118];V _method=j::get(_receiver48405,_method48406);j::Args _params48407=j::Args{j::function([=](const j::Args &_args_fn43266,const V &_receiver_fn43266,const V &_self_fn43266) mutable ->V{
V _v_43267_w;
_v_43267_w=_args_fn43266[0];
return ([&]()->V{V _lhs48403=_v_43267_w;V _rhs48404=V(0.0);return V(!j::equal(_lhs48403,_rhs48404,true));})();
return V{};
},1)};return j::call(_method,_params48407,_receiver48405);})():_logical48400;})();
return V{};
},1);
this->_v_43268_moves.get()=j::function([=](const j::Args &_args_fn43269,const V &_receiver_fn43269,const V &_self_fn43269) mutable ->V{
V _v_43270_b;
_v_43270_b=_args_fn43269[0];
return ([&]()->V{V _logical48408=([&]()->V{V _logical48409=([&]()->V{V _logical48410=([&]()->V{V _lhs48411=j::unary("typeof",j::get(_v_43270_b,this->_literals[31]));V _rhs48412=this->_literals[0];return V(j::equal(_lhs48411,_rhs48412,true));})();return !j::truth(_logical48410)?j::get(_v_43270_b,this->_literals[35]):_logical48410;})();return !j::truth(_logical48409)?([&]()->V{V _callee48413=this->_v_43263_turns.get();return j::call(_callee48413,j::Args{_v_43270_b});})():_logical48409;})();return !j::truth(_logical48408)?j::unary("!",j::unary("!",([&]()->V{V _chain48414=_v_43270_b;V _chain48415=j::get(_chain48414,this->_literals[44]);if(j::nullish(_chain48415))return V{};V _chain48416=j::get(_chain48415,this->_literals[118]);V _chain48417=j::call(_chain48416,j::Args{this->_v_43268_moves.get()},_chain48415);return _chain48417;})())):_logical48408;})();
return V{};
},1);
this->_v_43271_leaves.get()=j::function([=](const j::Args &_args_fn43272,const V &_receiver_fn43272,const V &_self_fn43272) mutable ->V{
V _v_43273_bodies;
_v_43273_bodies=_args_fn43272[0];
return ([&]()->V{V _receiver48420=_v_43273_bodies;V _method48421=this->_literals[163];V _method=j::get(_receiver48420,_method48421);j::Args _params48422=j::Args{j::function([=](const j::Args &_args_fn43274,const V &_receiver_fn43274,const V &_self_fn43274) mutable ->V{
V _v_43275_b;
_v_43275_b=_args_fn43274[0];
return (j::truth(j::get(_v_43275_b,this->_literals[44]))?([&]()->V{V _callee48418=this->_v_43271_leaves.get();return j::call(_callee48418,j::Args{j::get(_v_43275_b,this->_literals[44])});})():([&]()->V{j::Args _array48419;_array48419.push_back(_v_43275_b);return j::array(std::move(_array48419));})());
return V{};
},1)};return j::call(_method,_params48422,_receiver48420);})();
return V{};
},1);
this->_v_43276_lined.get()=j::function([=](const j::Args &_args_fn43277,const V &_receiver_fn43277,const V &_self_fn43277) mutable ->V{
V _v_43278_b;
_v_43278_b=_args_fn43277[0];
return ([&]()->V{V _logical48423=([&]()->V{V _logical48424=j::unary("!",j::unary("!",j::get(_v_43278_b,this->_literals[112])));return !j::truth(_logical48424)?([&]()->V{V _logical48425=([&]()->V{V _logical48426=j::get(_v_43278_b,this->_literals[27]);return j::truth(_logical48426)?j::unary("!",j::unary("!",j::get(_v_43278_b,this->_literals[80]))):_logical48426;})();return j::truth(_logical48425)?j::unary("!",j::unary("!",j::get(([&]()->V{V _receiver48427=_v_43278_b;V _method48428=this->_literals[80];V _method=j::get(_receiver48427,_method48428);j::Args _params48429=j::Args{V(6.0),V(0.0)};return j::call(_method,_params48429,_receiver48427);})(),this->_literals[27]))):_logical48425;})():_logical48424;})();return !j::truth(_logical48423)?j::unary("!",j::unary("!",([&]()->V{V _chain48430=_v_43278_b;V _chain48431=j::get(_chain48430,this->_literals[44]);if(j::nullish(_chain48431))return V{};V _chain48432=j::get(_chain48431,this->_literals[118]);V _chain48433=j::call(_chain48432,j::Args{this->_v_43276_lined.get()},_chain48431);return _chain48433;})())):_logical48423;})();
return V{};
},1);
this->_v_43299_into.get()=j::function([=](const j::Args &_args_fn43300,const V &_receiver_fn43300,const V &_self_fn43300) mutable ->V{
V _v_43301_t;
V _v_43302_loop;
_v_43301_t=_args_fn43300[0];
_v_43302_loop=_args_fn43300[1];
return (j::truth(([&]()->V{V _lhs48434=_v_43302_loop;V _rhs48435=j::builtin("undefined");return V(j::equal(_lhs48434,_rhs48435,true));})())?_v_43301_t:([&]()->V{V _lhs48436=([&]()->V{V _lhs48438=([&]()->V{V _lhs48440=_v_43301_t;V _rhs48441=_v_43302_loop;return V(std::fmod(j::number(_lhs48440),j::number(_rhs48441)));})();V _rhs48439=_v_43302_loop;return j::binary("+",_lhs48438,_rhs48439);})();V _rhs48437=_v_43302_loop;return V(std::fmod(j::number(_lhs48436),j::number(_rhs48437)));})());
return V{};
},2);
this->_v_43322_YAW.get()=([&]()->V{V _callee48442=j::builtin("Float64Array");return j::construct(_callee48442,j::Args{V(9.0)});})();
this->_v_43323_TILT.get()=([&]()->V{V _callee48443=j::builtin("Float64Array");return j::construct(_callee48443,j::Args{V(9.0)});})();
this->_v_43324_OWN.get()=([&]()->V{V _callee48444=j::builtin("Float64Array");return j::construct(_callee48444,j::Args{V(9.0)});})();
this->_v_43325_IDENTITY.get()=([&]()->V{V _receiver48445=j::builtin("Float64Array");V _method48446=this->_literals[280];V _method=j::get(_receiver48445,_method48446);j::Args _params48447=j::Args{V(1.0),V(0.0),V(0.0),V(0.0),V(1.0),V(0.0),V(0.0),V(0.0),V(1.0)};return j::call(_method,_params48447,_receiver48445);})();
this->_v_43326_ZERO.get()=([&]()->V{V _callee48448=j::builtin("Float64Array");return j::construct(_callee48448,j::Args{V(3.0)});})();
this->_v_43458_S.get()=V(11.0);
this->_v_43459_TRI.get()=([&]()->V{V _callee48449=j::builtin("Int32Array");return j::construct(_callee48449,j::Args{V(3.0)});})();
this->_v_43460_CORNERS.get()=([&]()->V{V _callee48450=j::builtin("Int32Array");return j::construct(_callee48450,j::Args{V(4.0)});})();
this->_v_43461_CUT.get()=([&]()->V{V _callee48451=j::builtin("Float64Array");return j::construct(_callee48451,j::Args{V(2.0)});})();
{V _base48452=V{};V _class48453=j::make_class("View",_base48452,j::function([=](const j::Args &_args_fn43463,const V &_receiver_fn43463,const V &_self_fn43463) mutable ->V{
j::put(_receiver_fn43463,this->_literals[174],V{});j::put(_receiver_fn43463,this->_literals[175],V{});j::put(_receiver_fn43463,this->_literals[176],V{});j::put(_receiver_fn43463,this->_literals[37],V{});j::put(_receiver_fn43463,this->_literals[148],V{});j::put(_receiver_fn43463,this->_literals[186],V{});j::put(_receiver_fn43463,this->_literals[281],V{});j::put(_receiver_fn43463,this->_literals[26],V{});j::put(_receiver_fn43463,this->_literals[282],V{});j::put(_receiver_fn43463,this->_literals[242],V{});j::put(_receiver_fn43463,this->_literals[283],V{});j::put(_receiver_fn43463,this->_literals[284],V{});j::put(_receiver_fn43463,this->_literals[285],V{});j::put(_receiver_fn43463,this->_literals[286],([&]()->V{V _callee48456=j::builtin("Float32Array");return j::construct(_callee48456,j::Args{([&]()->V{V _lhs48454=this->_v_43458_S.get();V _rhs48455=V(1024.0);return V(j::number(_lhs48454)*j::number(_rhs48455));})()});})());j::put(_receiver_fn43463,this->_literals[287],([&]()->V{V _callee48457=j::builtin("Float64Array");return j::construct(_callee48457,j::Args{V(9.0)});})());j::put(_receiver_fn43463,this->_literals[288],([&]()->V{j::Args _array48458;return j::array(std::move(_array48458));})());_receiver_fn43463.data->hidden.insert(j::string(this->_literals[288]));j::put(_receiver_fn43463,this->_literals[289],([&]()->V{j::Args _array48459;return j::array(std::move(_array48459));})());_receiver_fn43463.data->hidden.insert(j::string(this->_literals[289]));j::put(_receiver_fn43463,this->_literals[290],([&]()->V{V _callee48460=j::builtin("Map");return j::construct(_callee48460,j::Args{});})());_receiver_fn43463.data->hidden.insert(j::string(this->_literals[290]));j::put(_receiver_fn43463,this->_literals[291],V::null());_receiver_fn43463.data->hidden.insert(j::string(this->_literals[291]));j::put(_receiver_fn43463,this->_literals[292],V::null());_receiver_fn43463.data->hidden.insert(j::string(this->_literals[292]));j::put(_receiver_fn43463,this->_literals[293],V(0.0));_receiver_fn43463.data->hidden.insert(j::string(this->_literals[293]));j::put(_receiver_fn43463,this->_literals[294],V(false));_receiver_fn43463.data->hidden.insert(j::string(this->_literals[294]));j::put(_receiver_fn43463,this->_literals[295],V(1.0));_receiver_fn43463.data->hidden.insert(j::string(this->_literals[295]));j::put(_receiver_fn43463,this->_literals[296],V(0.0));_receiver_fn43463.data->hidden.insert(j::string(this->_literals[296]));j::put(_receiver_fn43463,this->_literals[297],V(0.0));_receiver_fn43463.data->hidden.insert(j::string(this->_literals[297]));j::put(_receiver_fn43463,this->_literals[298],V::null());_receiver_fn43463.data->hidden.insert(j::string(this->_literals[298]));j::put(_receiver_fn43463,this->_literals[299],V{});_receiver_fn43463.data->hidden.insert(j::string(this->_literals[299]));j::put(_receiver_fn43463,this->_literals[300],V(false));_receiver_fn43463.data->hidden.insert(j::string(this->_literals[300]));V _v_43464_cols;
V _v_43465_rows;
V _v_43466_aspect;
V _v_43467_set;
V _v_43468_fit;
V _v_43469_loop;
_v_43464_cols=_args_fn43463[0];
_v_43465_rows=_args_fn43463[1];
_v_43466_aspect=_args_fn43463[2];
_v_43467_set=_args_fn43463[3];
_v_43468_fit=_args_fn43463[4];
_v_43469_loop=_args_fn43463[5];
{
(void)(([&]()->V{V _base48462=_receiver_fn43463;V _key48463=this->_literals[174];V _assign48461=_v_43464_cols;return j::put(_base48462,_key48463,_assign48461);})());
(void)(([&]()->V{V _base48465=_receiver_fn43463;V _key48466=this->_literals[175];V _assign48464=_v_43465_rows;return j::put(_base48465,_key48466,_assign48464);})());
(void)(([&]()->V{V _base48468=_receiver_fn43463;V _key48469=this->_literals[176];V _assign48467=_v_43466_aspect;return j::put(_base48468,_key48469,_assign48467);})());
(void)(([&]()->V{V _base48471=_receiver_fn43463;V _key48472=this->_literals[37];V _assign48470=_v_43467_set;return j::put(_base48471,_key48472,_assign48470);})());
(void)(([&]()->V{V _base48474=_receiver_fn43463;V _key48475=this->_literals[148];V _assign48473=_v_43468_fit;return j::put(_base48474,_key48475,_assign48473);})());
(void)(([&]()->V{V _base48477=_receiver_fn43463;V _key48478=this->_literals[186];V _assign48476=_v_43469_loop;return j::put(_base48477,_key48478,_assign48476);})());
(void)(([&]()->V{V _base48480=_receiver_fn43463;V _key48481=this->_literals[281];V _assign48479=([&]()->V{V _callee48484=j::builtin("Float32Array");return j::construct(_callee48484,j::Args{([&]()->V{V _lhs48482=_v_43464_cols;V _rhs48483=_v_43465_rows;return V(j::number(_lhs48482)*j::number(_rhs48483));})()});})();return j::put(_base48480,_key48481,_assign48479);})());
(void)(([&]()->V{V _base48486=_receiver_fn43463;V _key48487=this->_literals[284];V _assign48485=([&]()->V{V _callee48490=j::builtin("Uint32Array");return j::construct(_callee48490,j::Args{([&]()->V{V _lhs48488=_v_43464_cols;V _rhs48489=_v_43465_rows;return V(j::number(_lhs48488)*j::number(_rhs48489));})()});})();return j::put(_base48486,_key48487,_assign48485);})());
(void)(([&]()->V{V _base48492=_receiver_fn43463;V _key48493=this->_literals[285];V _assign48491=([&]()->V{V _callee48496=j::builtin("Uint32Array");return j::construct(_callee48496,j::Args{([&]()->V{V _lhs48494=_v_43464_cols;V _rhs48495=_v_43465_rows;return V(j::number(_lhs48494)*j::number(_rhs48495));})()});})();return j::put(_base48492,_key48493,_assign48491);})());
(void)(([&]()->V{V _base48498=_receiver_fn43463;V _key48499=this->_literals[26];V _assign48497=([&]()->V{V _receiver48500=([&]()->V{V _callee48505=j::builtin("Float32Array");return j::construct(_callee48505,j::Args{([&]()->V{V _lhs48503=_v_43464_cols;V _rhs48504=_v_43465_rows;return V(j::number(_lhs48503)*j::number(_rhs48504));})()});})();V _method48501=this->_literals[301];V _method=j::get(_receiver48500,_method48501);j::Args _params48502=j::Args{V(1.0)};return j::call(_method,_params48502,_receiver48500);})();return j::put(_base48498,_key48499,_assign48497);})());
(void)(([&]()->V{V _base48507=_receiver_fn43463;V _key48508=this->_literals[282];V _assign48506=([&]()->V{V _callee48511=j::builtin("Float32Array");return j::construct(_callee48511,j::Args{([&]()->V{V _lhs48509=_v_43464_cols;V _rhs48510=_v_43465_rows;return V(j::number(_lhs48509)*j::number(_rhs48510));})()});})();return j::put(_base48507,_key48508,_assign48506);})());
(void)(([&]()->V{V _base48513=_receiver_fn43463;V _key48514=this->_literals[242];V _assign48512=([&]()->V{V _callee48517=j::builtin("Float32Array");return j::construct(_callee48517,j::Args{([&]()->V{V _lhs48515=_v_43464_cols;V _rhs48516=_v_43465_rows;return V(j::number(_lhs48515)*j::number(_rhs48516));})()});})();return j::put(_base48513,_key48514,_assign48512);})());
(void)(([&]()->V{V _base48519=_receiver_fn43463;V _key48520=this->_literals[283];V _assign48518=([&]()->V{V _callee48523=j::builtin("Int32Array");return j::construct(_callee48523,j::Args{([&]()->V{V _lhs48521=_v_43464_cols;V _rhs48522=_v_43465_rows;return V(j::number(_lhs48521)*j::number(_rhs48522));})()});})();return j::put(_base48519,_key48520,_assign48518);})());

}

return V{};
},6));this->_v_43462_View.get()=_class48453;j::class_method(_class48453,this->_literals[244],j::function([=](const j::Args &_args_fn43470,const V &_receiver_fn43470,const V &_self_fn43470) mutable ->V{
j::Cell _v_43471_s;
V _v_43472_color;
_v_43471_s.get()=_args_fn43470[0];
_v_43472_color=_args_fn43470[1];
{
V _v_43473_colors;
V _v_43474_colorBy;
V _v_43475_shades;
V _v_43476_key;
V _v_43477_st;
V _pattern48524=j::get(_receiver_fn43470,this->_literals[37]);
_v_43473_colors=j::get(_pattern48524,this->_literals[147]);
_v_43474_colorBy=j::get(_pattern48524,this->_literals[145]);
_v_43475_shades=j::get(_pattern48524,this->_literals[146]);
if(j::truth(([&]()->V{V _logical48525=([&]()->V{V _logical48526=j::get(_v_43471_s.get(),this->_literals[302]);return !j::truth(_logical48526)?j::unary("!",j::get(_v_43471_s.get(),this->_literals[183])):_logical48526;})();return !j::truth(_logical48525)?([&]()->V{V _logical48527=j::unary("!",_v_43473_colors);return j::truth(_logical48527)?([&]()->V{V _lhs48528=_v_43472_color;V _rhs48529=j::builtin("undefined");return V(j::equal(_lhs48528,_rhs48529,true));})():_logical48527;})():_logical48525;})())){return V::null();
}
if(j::truth(([&]()->V{V _lhs48530=j::get(_receiver_fn43470,this->_literals[291]);V _rhs48531=j::get(_v_43471_s.get(),this->_literals[183]);return V(!j::equal(_lhs48530,_rhs48531,true));})())){
(void)(([&]()->V{V _receiver48532=j::get(_receiver_fn43470,this->_literals[290]);V _method48533=this->_literals[51];V _method=j::get(_receiver48532,_method48533);j::Args _params48534=j::Args{};return j::call(_method,_params48534,_receiver48532);})());
(void)(([&]()->V{V _base48536=_receiver_fn43470;V _key48537=this->_literals[291];V _assign48535=j::get(_v_43471_s.get(),this->_literals[183]);return j::put(_base48536,_key48537,_assign48535);})());

}

_v_43476_key=([&]()->V{V _lhs48538=(j::truth(j::get(_v_43471_s.get(),this->_literals[303]))?this->_literals[304]:this->_literals[305]);V _rhs48539=(j::truth(_v_43473_colors)?this->_literals[22]:_v_43472_color);return j::binary("+",_lhs48538,_rhs48539);})();
_v_43477_st=([&]()->V{V _receiver48540=j::get(_receiver_fn43470,this->_literals[290]);V _method48541=this->_literals[38];V _method=j::get(_receiver48540,_method48541);j::Args _params48542=j::Args{_v_43476_key};return j::call(_method,_params48542,_receiver48540);})();
if(j::truth(j::unary("!",_v_43477_st))){
V _v_43478_list;
_v_43478_list=(j::truth(_v_43473_colors)?([&]()->V{V _callee48543=this->_v_43833_fade.get();return j::call(_callee48543,j::Args{_v_43473_colors,_v_43475_shades,j::get(_v_43471_s.get(),this->_literals[303])});})():([&]()->V{V _callee48544=this->_v_43243_shadesOf.get();return j::call(_callee48544,j::Args{_v_43472_color,_v_43474_colorBy,_v_43475_shades,j::get(_v_43471_s.get(),this->_literals[303])});})());
(void)((_v_43477_st=([&]()->V{V _receiver48549=j::builtin("Uint8Array");V _method48550=this->_literals[107];V _method=j::get(_receiver48549,_method48550);j::Args _params48551=j::Args{_v_43478_list,j::function([=](const j::Args &_args_fn43479,const V &_receiver_fn43479,const V &_self_fn43479) mutable ->V{
V _v_43480_h;
_v_43480_h=_args_fn43479[0];
return ([&]()->V{V _receiver48546=_v_43471_s.get();V _method48547=this->_literals[306];V _method=j::get(_receiver48546,_method48547);j::Args _params48548=j::Args{_v_43480_h};return j::call(_method,_params48548,_receiver48546);})();
return V{};
},1)};return j::call(_method,_params48551,_receiver48549);})()));
(void)(([&]()->V{V _receiver48552=j::get(_receiver_fn43470,this->_literals[290]);V _method48553=this->_literals[37];V _method=j::get(_receiver48552,_method48553);j::Args _params48554=j::Args{_v_43476_key,_v_43477_st};return j::call(_method,_params48554,_receiver48552);})());

}

return _v_43477_st;

}

return V{};
},2),false,"method");j::class_method(_class48453,this->_literals[178],j::function([=](const j::Args &_args_fn43481,const V &_receiver_fn43481,const V &_self_fn43481) mutable ->V{
V _v_43482_s;
V _v_43483_shapes;
V _v_43484_t;
_v_43482_s=_args_fn43481[0];
_v_43483_shapes=_args_fn43481[1];
_v_43484_t=_args_fn43481[2];
{
V _v_43485_set;
V _v_43486_zspan;
_v_43485_set=j::get(_receiver_fn43481,this->_literals[37]);
(void)(([&]()->V{V _base48556=_receiver_fn43481;V _key48557=this->_literals[292];V _assign48555=_v_43482_s;return j::put(_base48556,_key48557,_assign48555);})());
(void)(([&]()->V{V _base48559=_receiver_fn43481;V _key48560=this->_literals[293];V _assign48558=_v_43484_t;return j::put(_base48559,_key48560,_assign48558);})());
(void)(([&]()->V{V _base48562=_receiver_fn43481;V _key48563=this->_literals[294];V _assign48561=(j::truth(([&]()->V{V _lhs48564=j::get(_v_43485_set,this->_literals[143]);V _rhs48565=this->_literals[144];return V(j::equal(_lhs48564,_rhs48565,true));})())?j::get(_v_43482_s,this->_literals[303]):j::get(_v_43485_set,this->_literals[143]));return j::put(_base48562,_key48563,_assign48561);})());
(void)(([&]()->V{V _base48567=_receiver_fn43481;V _key48568=this->_literals[295];V _assign48566=([&]()->V{V _lhs48569=j::get(j::get(_receiver_fn43481,this->_literals[148]),this->_literals[151]);V _rhs48570=j::get(_v_43485_set,this->_literals[149]);return V(j::number(_lhs48569)*j::number(_rhs48570));})();return j::put(_base48567,_key48568,_assign48566);})());
_v_43486_zspan=([&]()->V{V _lhs48571=j::get(j::get(_receiver_fn43481,this->_literals[148]),this->_literals[169]);V _rhs48572=j::get(j::get(_receiver_fn43481,this->_literals[148]),this->_literals[168]);return V(j::number(_lhs48571)-j::number(_rhs48572));})();
(void)(([&]()->V{V _base48574=_receiver_fn43481;V _key48575=this->_literals[296];V _assign48573=(j::truth(([&]()->V{V _lhs48576=_v_43486_zspan;V _rhs48577=V(0.000001);return j::binary(">",_lhs48576,_rhs48577);})())?([&]()->V{V _lhs48578=V(1.0);V _rhs48579=_v_43486_zspan;return V(j::number(_lhs48578)/j::number(_rhs48579));})():V(0.0));return j::put(_base48574,_key48575,_assign48573);})());
(void)(([&]()->V{V _base48581=_receiver_fn43481;V _key48582=this->_literals[297];V _assign48580=V(0.0);return j::put(_base48581,_key48582,_assign48580);})());
(void)(([&]()->V{V _receiver48583=j::get(_receiver_fn43481,this->_literals[281]);V _method48584=this->_literals[301];V _method=j::get(_receiver48583,_method48584);j::Args _params48585=j::Args{V(0.0)};return j::call(_method,_params48585,_receiver48583);})());
(void)(([&]()->V{V _receiver48586=j::get(_receiver_fn43481,this->_literals[284]);V _method48587=this->_literals[301];V _method=j::get(_receiver48586,_method48587);j::Args _params48588=j::Args{V(0.0)};return j::call(_method,_params48588,_receiver48586);})());
(void)(([&]()->V{V _receiver48589=j::get(_receiver_fn43481,this->_literals[285]);V _method48590=this->_literals[301];V _method=j::get(_receiver48589,_method48590);j::Args _params48591=j::Args{V(0.0)};return j::call(_method,_params48591,_receiver48589);})());
(void)(([&]()->V{V _callee48592=this->_v_43332_cameraAt.get();return j::call(_callee48592,j::Args{j::get(_receiver_fn43481,this->_literals[287]),_v_43485_set,_v_43484_t,j::get(_receiver_fn43481,this->_literals[186])});})());
{for(const auto &_item48593:j::elements(_v_43483_shapes)){V _v_43487_shape;
_v_43487_shape=_item48593;
(void)(([&]()->V{V _receiver48595=_receiver_fn43481;V _method48596=this->_literals[307];V _method=j::get(_receiver48595,_method48596);j::Args _params48597=j::Args{([&]()->V{V _callee48594=this->_v_42617_body.get();return j::call(_callee48594,j::Args{_v_43487_shape,this->_literals[165]});})(),j::get(_receiver_fn43481,this->_literals[287]),this->_v_43326_ZERO.get(),V(1.0),V(0.0)};return j::call(_method,_params48597,_receiver48595);})());
}}

}

return V{};
},3),false,"method");j::class_method(_class48453,this->_literals[307],j::function([=](const j::Args &_args_fn43488,const V &_receiver_fn43488,const V &_self_fn43488) mutable ->V{
V _v_43489_b;
V _v_43490_M;
V _v_43491_P;
V _v_43492_K;
V _v_43493_depth;
_v_43489_b=_args_fn43488[0];
_v_43490_M=_args_fn43488[1];
_v_43491_P=_args_fn43488[2];
_v_43492_K=_args_fn43488[3];
_v_43493_depth=_args_fn43488[4];
{
V _v_43494_t;
V _v_43495_at;
V _v_43496_m;
V _v_43497_p;
V _v_43498_ax;
V _v_43499_ay;
V _v_43500_az;
V _v_43501_k;
_v_43494_t=j::get(_receiver_fn43488,this->_literals[293]);
_v_43495_at=(j::truth(([&]()->V{V _lhs48598=j::unary("typeof",j::get(_v_43489_b,this->_literals[31]));V _rhs48599=this->_literals[0];return V(j::equal(_lhs48598,_rhs48599,true));})())?([&]()->V{V _receiver48600=_v_43489_b;V _method48601=this->_literals[31];V _method=j::get(_receiver48600,_method48601);j::Args _params48602=j::Args{_v_43494_t};return j::call(_method,_params48602,_receiver48600);})():j::get(_v_43489_b,this->_literals[31]));
if(j::truth(j::unary("!",([&]()->V{V _receiver48603=j::builtin("Array");V _method48604=this->_literals[8];V _method=j::get(_receiver48603,_method48604);j::Args _params48605=j::Args{_v_43495_at};return j::call(_method,_params48605,_receiver48603);})()))){return V{};
}
while(j::truth(([&]()->V{V _lhs48606=j::get(j::get(_receiver_fn43488,this->_literals[288]),this->_literals[9]);V _rhs48607=_v_43493_depth;return j::binary("<=",_lhs48606,_rhs48607);})())){(void)((([&]()->V{V _receiver48609=j::get(_receiver_fn43488,this->_literals[288]);V _method48610=this->_literals[68];V _method=j::get(_receiver48609,_method48610);j::Args _params48611=j::Args{([&]()->V{V _callee48608=j::builtin("Float64Array");return j::construct(_callee48608,j::Args{V(9.0)});})()};return j::call(_method,_params48611,_receiver48609);})(),([&]()->V{V _receiver48613=j::get(_receiver_fn43488,this->_literals[289]);V _method48614=this->_literals[68];V _method=j::get(_receiver48613,_method48614);j::Args _params48615=j::Args{([&]()->V{V _callee48612=j::builtin("Float64Array");return j::construct(_callee48612,j::Args{V(3.0)});})()};return j::call(_method,_params48615,_receiver48613);})()));
}
_v_43496_m=j::get(j::get(_receiver_fn43488,this->_literals[288]),_v_43493_depth);
_v_43497_p=j::get(j::get(_receiver_fn43488,this->_literals[289]),_v_43493_depth);
(void)(([&]()->V{V _callee48616=this->_v_43338_pose.get();return j::call(_callee48616,j::Args{_v_43496_m,_v_43489_b,_v_43494_t,j::get(j::get(_receiver_fn43488,this->_literals[37]),this->_literals[120]),j::get(_receiver_fn43488,this->_literals[186]),_v_43490_M});})());
_v_43498_ax=([&]()->V{V _lhs48617=j::get(_v_43495_at,V(0.0));V _rhs48618=_v_43492_K;return V(j::number(_lhs48617)*j::number(_rhs48618));})();
_v_43499_ay=([&]()->V{V _lhs48619=j::get(_v_43495_at,V(1.0));V _rhs48620=_v_43492_K;return V(j::number(_lhs48619)*j::number(_rhs48620));})();
_v_43500_az=([&]()->V{V _lhs48621=j::get(_v_43495_at,V(2.0));V _rhs48622=_v_43492_K;return V(j::number(_lhs48621)*j::number(_rhs48622));})();
(void)(([&]()->V{V _base48624=_v_43497_p;V _key48625=V(0.0);V _assign48623=([&]()->V{V _lhs48626=([&]()->V{V _lhs48628=([&]()->V{V _lhs48630=([&]()->V{V _lhs48632=j::get(_v_43490_M,V(0.0));V _rhs48633=_v_43498_ax;return V(j::number(_lhs48632)*j::number(_rhs48633));})();V _rhs48631=([&]()->V{V _lhs48634=j::get(_v_43490_M,V(1.0));V _rhs48635=_v_43499_ay;return V(j::number(_lhs48634)*j::number(_rhs48635));})();return j::binary("+",_lhs48630,_rhs48631);})();V _rhs48629=([&]()->V{V _lhs48636=j::get(_v_43490_M,V(2.0));V _rhs48637=_v_43500_az;return V(j::number(_lhs48636)*j::number(_rhs48637));})();return j::binary("+",_lhs48628,_rhs48629);})();V _rhs48627=j::get(_v_43491_P,V(0.0));return j::binary("+",_lhs48626,_rhs48627);})();return j::put(_base48624,_key48625,_assign48623);})());
(void)(([&]()->V{V _base48639=_v_43497_p;V _key48640=V(1.0);V _assign48638=([&]()->V{V _lhs48641=([&]()->V{V _lhs48643=([&]()->V{V _lhs48645=([&]()->V{V _lhs48647=j::get(_v_43490_M,V(3.0));V _rhs48648=_v_43498_ax;return V(j::number(_lhs48647)*j::number(_rhs48648));})();V _rhs48646=([&]()->V{V _lhs48649=j::get(_v_43490_M,V(4.0));V _rhs48650=_v_43499_ay;return V(j::number(_lhs48649)*j::number(_rhs48650));})();return j::binary("+",_lhs48645,_rhs48646);})();V _rhs48644=([&]()->V{V _lhs48651=j::get(_v_43490_M,V(5.0));V _rhs48652=_v_43500_az;return V(j::number(_lhs48651)*j::number(_rhs48652));})();return j::binary("+",_lhs48643,_rhs48644);})();V _rhs48642=j::get(_v_43491_P,V(1.0));return j::binary("+",_lhs48641,_rhs48642);})();return j::put(_base48639,_key48640,_assign48638);})());
(void)(([&]()->V{V _base48654=_v_43497_p;V _key48655=V(2.0);V _assign48653=([&]()->V{V _lhs48656=([&]()->V{V _lhs48658=([&]()->V{V _lhs48660=([&]()->V{V _lhs48662=j::get(_v_43490_M,V(6.0));V _rhs48663=_v_43498_ax;return V(j::number(_lhs48662)*j::number(_rhs48663));})();V _rhs48661=([&]()->V{V _lhs48664=j::get(_v_43490_M,V(7.0));V _rhs48665=_v_43499_ay;return V(j::number(_lhs48664)*j::number(_rhs48665));})();return j::binary("+",_lhs48660,_rhs48661);})();V _rhs48659=([&]()->V{V _lhs48666=j::get(_v_43490_M,V(8.0));V _rhs48667=_v_43500_az;return V(j::number(_lhs48666)*j::number(_rhs48667));})();return j::binary("+",_lhs48658,_rhs48659);})();V _rhs48657=j::get(_v_43491_P,V(2.0));return j::binary("+",_lhs48656,_rhs48657);})();return j::put(_base48654,_key48655,_assign48653);})());
_v_43501_k=([&]()->V{V _lhs48668=_v_43492_K;V _rhs48669=j::get(_v_43489_b,this->_literals[33]);return V(j::number(_lhs48668)*j::number(_rhs48669));})();
if(j::truth(j::get(_v_43489_b,this->_literals[44]))){
{for(const auto &_item48670:j::elements(j::get(_v_43489_b,this->_literals[44]))){V _v_43502_c;
_v_43502_c=_item48670;
(void)(([&]()->V{V _receiver48673=_receiver_fn43488;V _method48674=this->_literals[307];V _method=j::get(_receiver48673,_method48674);j::Args _params48675=j::Args{_v_43502_c,_v_43496_m,_v_43497_p,_v_43501_k,([&]()->V{V _lhs48671=_v_43493_depth;V _rhs48672=V(1.0);return j::binary("+",_lhs48671,_rhs48672);})()};return j::call(_method,_params48675,_receiver48673);})());
}}
return V{};

}

(void)(j::increment(_receiver_fn43488,this->_literals[297],1,false));
(void)(([&]()->V{V _base48677=_receiver_fn43488;V _key48678=this->_literals[298];V _assign48676=([&]()->V{V _receiver48679=_receiver_fn43488;V _method48680=this->_literals[244];V _method=j::get(_receiver48679,_method48680);j::Args _params48681=j::Args{j::get(_receiver_fn43488,this->_literals[292]),j::get(_v_43489_b,this->_literals[25])};return j::call(_method,_params48681,_receiver48679);})();return j::put(_base48677,_key48678,_assign48676);})());
(void)(([&]()->V{V _base48683=_receiver_fn43488;V _key48684=this->_literals[299];V _assign48682=j::get(_v_43489_b,this->_literals[23]);return j::put(_base48683,_key48684,_assign48682);})());
if(j::truth(j::get(_v_43489_b,this->_literals[108]))){(void)(([&]()->V{V _receiver48685=_receiver_fn43488;V _method48686=this->_literals[108];V _method=j::get(_receiver48685,_method48686);j::Args _params48687=j::Args{j::get(_v_43489_b,this->_literals[108]),_v_43496_m,_v_43497_p,_v_43501_k};return j::call(_method,_params48687,_receiver48685);})());
}else {if(j::truth(j::get(_v_43489_b,this->_literals[112]))){(void)(([&]()->V{V _receiver48688=_receiver_fn43488;V _method48689=this->_literals[112];V _method=j::get(_receiver48688,_method48689);j::Args _params48690=j::Args{j::get(_v_43489_b,this->_literals[112]),_v_43496_m,_v_43497_p,_v_43501_k};return j::call(_method,_params48690,_receiver48688);})());
}else {(void)(([&]()->V{V _receiver48691=_receiver_fn43488;V _method48692=this->_literals[308];V _method=j::get(_receiver48691,_method48692);j::Args _params48693=j::Args{_v_43489_b,_v_43496_m,_v_43497_p,_v_43501_k};return j::call(_method,_params48693,_receiver48691);})());
}
}

}

return V{};
},5),false,"method");j::class_method(_class48453,this->_literals[108],j::function([=](const j::Args &_args_fn43503,const V &_receiver_fn43503,const V &_self_fn43503) mutable ->V{
V _v_43504_dots;
V _v_43505_char;
V _v_43506_glow;
V _v_43507_m;
V _v_43508_p;
V _v_43509_k;
V _pattern48694=_args_fn43503[0];
_v_43504_dots=j::get(_pattern48694,this->_literals[109]);
_v_43505_char=j::get(_pattern48694,this->_literals[96]);
_v_43506_glow=j::get(_pattern48694,this->_literals[99]);
_v_43507_m=_args_fn43503[1];
_v_43508_p=_args_fn43503[2];
_v_43509_k=_args_fn43503[3];
{
V _v_43510_cols;
V _v_43511_rows;
V _v_43512_aspect;
V _v_43513_set;
V _v_43514_z;
V _v_43515_who;
V _v_43516_dark;
V _v_43517_nearest;
V _v_43518_close;
V _v_43519_lit;
V _v_43520_s;
V _v_43521_steps;
V _v_43522_ns;
V _v_43523_id;
V _v_43524_zk;
V _v_43525_zmax;
V _v_43526_D;
V _v_43527_f;
V _v_43528_cx;
V _v_43529_cy;
V _v_43530_chars;
V _v_43531_nc;
V _v_43532_byDepth;
V _v_43533_px;
V _v_43534_py;
V _v_43535_pz;
V _v_43536_pts;
V _v_43537_count;
V _v_43538_n;
V _pattern48695=_receiver_fn43503;
_v_43510_cols=j::get(_pattern48695,this->_literals[174]);
_v_43511_rows=j::get(_pattern48695,this->_literals[175]);
_v_43512_aspect=j::get(_pattern48695,this->_literals[176]);
_v_43513_set=j::get(_pattern48695,this->_literals[37]);
_v_43514_z=j::get(_pattern48695,this->_literals[281]);
_v_43515_who=j::get(_pattern48695,this->_literals[284]);
_v_43516_dark=j::get(_pattern48695,this->_literals[26]);
_v_43517_nearest=j::get(_pattern48695,this->_literals[282]);
_v_43518_close=j::get(_pattern48695,this->_literals[242]);
_v_43519_lit=j::get(_pattern48695,this->_literals[283]);
_v_43520_s=j::get(_receiver_fn43503,this->_literals[292]);
_v_43521_steps=j::get(_receiver_fn43503,this->_literals[298]);
_v_43522_ns=(j::truth(_v_43521_steps)?j::get(_v_43521_steps,this->_literals[9]):V(0.0));
_v_43523_id=j::get(_receiver_fn43503,this->_literals[297]);
_v_43524_zk=j::get(_receiver_fn43503,this->_literals[296]);
_v_43525_zmax=j::get(j::get(_receiver_fn43503,this->_literals[148]),this->_literals[169]);
_v_43526_D=j::get(_v_43513_set,this->_literals[149]);
_v_43527_f=j::get(_receiver_fn43503,this->_literals[295]);
_v_43528_cx=([&]()->V{V _lhs48696=_v_43510_cols;V _rhs48697=V(2.0);return V(j::number(_lhs48696)/j::number(_rhs48697));})();
_v_43529_cy=([&]()->V{V _lhs48698=_v_43511_rows;V _rhs48699=V(2.0);return V(j::number(_lhs48698)/j::number(_rhs48699));})();
_v_43530_chars=j::get(_v_43513_set,this->_literals[154]);
_v_43531_nc=j::get(_v_43530_chars,this->_literals[9]);
_v_43532_byDepth=([&]()->V{V _lhs48700=j::get(_v_43513_set,this->_literals[145]);V _rhs48701=this->_literals[92];return V(j::equal(_lhs48700,_rhs48701,true));})();
_v_43533_px=j::get(_v_43508_p,V(0.0));
_v_43534_py=j::get(_v_43508_p,V(1.0));
_v_43535_pz=j::get(_v_43508_p,V(2.0));
_v_43536_pts=(j::truth(([&]()->V{V _lhs48702=j::unary("typeof",_v_43504_dots);V _rhs48703=this->_literals[0];return V(j::equal(_lhs48702,_rhs48703,true));})())?([&]()->V{V _callee48704=_v_43504_dots;return j::call(_callee48704,j::Args{j::get(_receiver_fn43503,this->_literals[293])});})():V::null());
_v_43537_count=(j::truth(_v_43536_pts)?(j::truth(([&]()->V{V _receiver48705=j::builtin("Array");V _method48706=this->_literals[8];V _method=j::get(_receiver48705,_method48706);j::Args _params48707=j::Args{_v_43536_pts};return j::call(_method,_params48707,_receiver48705);})())?j::get(_v_43536_pts,this->_literals[9]):V(0.0)):([&]()->V{V _lhs48708=j::get(_v_43504_dots,this->_literals[9]);V _rhs48709=V(3.0);return V(j::number(_lhs48708)/j::number(_rhs48709));})());
_v_43538_n=V(0.0);
{V _v_43539_i;
_v_43539_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs48710=_v_43539_i;V _rhs48711=_v_43537_count;return j::binary("<",_lhs48710,_rhs48711);})());(void)(j::increment(_v_43539_i,1,false))){
V _v_43540_x;
V _v_43541_y;
V _v_43542_w;
V _v_43544_X;
V _v_43545_Y;
V _v_43546_Z;
V _v_43547_d;
V _v_43548_q;
V _v_43549_col;
V _v_43550_row;
V _v_43551_cell;
V _v_43552_g;
if(j::truth(_v_43536_pts)){
V _v_43543_q;
_v_43543_q=j::get(_v_43536_pts,_v_43539_i);
if(j::truth(j::unary("!",_v_43543_q))){continue;
}
(void)(((_v_43540_x=([&]()->V{V _lhs48713=j::get(_v_43543_q,V(0.0));V _rhs48714=_v_43509_k;return V(j::number(_lhs48713)*j::number(_rhs48714));})()),(_v_43541_y=([&]()->V{V _lhs48716=j::get(_v_43543_q,V(1.0));V _rhs48717=_v_43509_k;return V(j::number(_lhs48716)*j::number(_rhs48717));})()),(_v_43542_w=([&]()->V{V _lhs48719=j::get(_v_43543_q,V(2.0));V _rhs48720=_v_43509_k;return V(j::number(_lhs48719)*j::number(_rhs48720));})())));

}
else {(void)(((_v_43540_x=([&]()->V{V _lhs48722=j::get(_v_43504_dots,([&]()->V{V _lhs48724=_v_43539_i;V _rhs48725=V(3.0);return V(j::number(_lhs48724)*j::number(_rhs48725));})());V _rhs48723=_v_43509_k;return V(j::number(_lhs48722)*j::number(_rhs48723));})()),(_v_43541_y=([&]()->V{V _lhs48727=j::get(_v_43504_dots,([&]()->V{V _lhs48729=([&]()->V{V _lhs48731=_v_43539_i;V _rhs48732=V(3.0);return V(j::number(_lhs48731)*j::number(_rhs48732));})();V _rhs48730=V(1.0);return j::binary("+",_lhs48729,_rhs48730);})());V _rhs48728=_v_43509_k;return V(j::number(_lhs48727)*j::number(_rhs48728));})()),(_v_43542_w=([&]()->V{V _lhs48734=j::get(_v_43504_dots,([&]()->V{V _lhs48736=([&]()->V{V _lhs48738=_v_43539_i;V _rhs48739=V(3.0);return V(j::number(_lhs48738)*j::number(_rhs48739));})();V _rhs48737=V(2.0);return j::binary("+",_lhs48736,_rhs48737);})());V _rhs48735=_v_43509_k;return V(j::number(_lhs48734)*j::number(_rhs48735));})())));
}
_v_43544_X=([&]()->V{V _lhs48740=([&]()->V{V _lhs48742=([&]()->V{V _lhs48744=([&]()->V{V _lhs48746=j::get(_v_43507_m,V(0.0));V _rhs48747=_v_43540_x;return V(j::number(_lhs48746)*j::number(_rhs48747));})();V _rhs48745=([&]()->V{V _lhs48748=j::get(_v_43507_m,V(1.0));V _rhs48749=_v_43541_y;return V(j::number(_lhs48748)*j::number(_rhs48749));})();return j::binary("+",_lhs48744,_rhs48745);})();V _rhs48743=([&]()->V{V _lhs48750=j::get(_v_43507_m,V(2.0));V _rhs48751=_v_43542_w;return V(j::number(_lhs48750)*j::number(_rhs48751));})();return j::binary("+",_lhs48742,_rhs48743);})();V _rhs48741=_v_43533_px;return j::binary("+",_lhs48740,_rhs48741);})();
_v_43545_Y=([&]()->V{V _lhs48752=([&]()->V{V _lhs48754=([&]()->V{V _lhs48756=([&]()->V{V _lhs48758=j::get(_v_43507_m,V(3.0));V _rhs48759=_v_43540_x;return V(j::number(_lhs48758)*j::number(_rhs48759));})();V _rhs48757=([&]()->V{V _lhs48760=j::get(_v_43507_m,V(4.0));V _rhs48761=_v_43541_y;return V(j::number(_lhs48760)*j::number(_rhs48761));})();return j::binary("+",_lhs48756,_rhs48757);})();V _rhs48755=([&]()->V{V _lhs48762=j::get(_v_43507_m,V(5.0));V _rhs48763=_v_43542_w;return V(j::number(_lhs48762)*j::number(_rhs48763));})();return j::binary("+",_lhs48754,_rhs48755);})();V _rhs48753=_v_43534_py;return j::binary("+",_lhs48752,_rhs48753);})();
_v_43546_Z=([&]()->V{V _lhs48764=([&]()->V{V _lhs48766=([&]()->V{V _lhs48768=([&]()->V{V _lhs48770=j::get(_v_43507_m,V(6.0));V _rhs48771=_v_43540_x;return V(j::number(_lhs48770)*j::number(_rhs48771));})();V _rhs48769=([&]()->V{V _lhs48772=j::get(_v_43507_m,V(7.0));V _rhs48773=_v_43541_y;return V(j::number(_lhs48772)*j::number(_rhs48773));})();return j::binary("+",_lhs48768,_rhs48769);})();V _rhs48767=([&]()->V{V _lhs48774=j::get(_v_43507_m,V(8.0));V _rhs48775=_v_43542_w;return V(j::number(_lhs48774)*j::number(_rhs48775));})();return j::binary("+",_lhs48766,_rhs48767);})();V _rhs48765=_v_43535_pz;return j::binary("+",_lhs48764,_rhs48765);})();
_v_43547_d=([&]()->V{V _lhs48776=_v_43546_Z;V _rhs48777=_v_43526_D;return j::binary("+",_lhs48776,_rhs48777);})();
if(j::truth(j::unary("!",([&]()->V{V _lhs48778=_v_43547_d;V _rhs48779=this->_v_43197_NEAR.get();return j::binary(">=",_lhs48778,_rhs48779);})()))){continue;
}
_v_43548_q=([&]()->V{V _lhs48780=V(1.0);V _rhs48781=_v_43547_d;return V(j::number(_lhs48780)/j::number(_rhs48781));})();
_v_43549_col=([&]()->V{V _number48788=([&]()->V{V _lhs48789=_v_43528_cx;V _rhs48790=([&]()->V{V _lhs48791=([&]()->V{V _lhs48793=_v_43527_f;V _rhs48794=_v_43544_X;return V(j::number(_lhs48793)*j::number(_rhs48794));})();V _rhs48792=_v_43548_q;return V(j::number(_lhs48791)*j::number(_rhs48792));})();return j::binary("+",_lhs48789,_rhs48790);})();return V(std::floor(j::number(_number48788)));})();
_v_43550_row=([&]()->V{V _number48803=([&]()->V{V _lhs48804=_v_43529_cy;V _rhs48805=([&]()->V{V _lhs48806=([&]()->V{V _lhs48808=([&]()->V{V _lhs48810=_v_43527_f;V _rhs48811=_v_43545_Y;return V(j::number(_lhs48810)*j::number(_rhs48811));})();V _rhs48809=_v_43548_q;return V(j::number(_lhs48808)*j::number(_rhs48809));})();V _rhs48807=_v_43512_aspect;return V(j::number(_lhs48806)/j::number(_rhs48807));})();return V(j::number(_lhs48804)-j::number(_rhs48805));})();return V(std::floor(j::number(_number48803)));})();
if(j::truth(j::unary("!",([&]()->V{V _logical48812=([&]()->V{V _logical48813=([&]()->V{V _logical48814=([&]()->V{V _lhs48815=_v_43549_col;V _rhs48816=V(0.0);return j::binary(">=",_lhs48815,_rhs48816);})();return j::truth(_logical48814)?([&]()->V{V _lhs48817=_v_43549_col;V _rhs48818=_v_43510_cols;return j::binary("<",_lhs48817,_rhs48818);})():_logical48814;})();return j::truth(_logical48813)?([&]()->V{V _lhs48819=_v_43550_row;V _rhs48820=V(0.0);return j::binary(">=",_lhs48819,_rhs48820);})():_logical48813;})();return j::truth(_logical48812)?([&]()->V{V _lhs48821=_v_43550_row;V _rhs48822=_v_43511_rows;return j::binary("<",_lhs48821,_rhs48822);})():_logical48812;})()))){continue;
}
_v_43551_cell=([&]()->V{V _lhs48823=([&]()->V{V _lhs48825=_v_43550_row;V _rhs48826=_v_43510_cols;return V(j::number(_lhs48825)*j::number(_rhs48826));})();V _rhs48824=_v_43549_col;return j::binary("+",_lhs48823,_rhs48824);})();
if(j::truth(([&]()->V{V _lhs48827=_v_43548_q;V _rhs48828=j::get(_v_43514_z,_v_43551_cell);return j::binary("<=",_lhs48827,_rhs48828);})())){continue;
}
_v_43552_g=(j::truth(_v_43524_zk)?([&]()->V{V _lhs48829=([&]()->V{V _lhs48831=_v_43525_zmax;V _rhs48832=_v_43546_Z;return V(j::number(_lhs48831)-j::number(_rhs48832));})();V _rhs48830=_v_43524_zk;return V(j::number(_lhs48829)*j::number(_rhs48830));})():V(1.0));
(void)((_v_43552_g=(j::truth(([&]()->V{V _lhs48834=_v_43552_g;V _rhs48835=V(0.0);return j::binary("<",_lhs48834,_rhs48835);})())?V(0.0):(j::truth(([&]()->V{V _lhs48836=_v_43552_g;V _rhs48837=V(1.0);return j::binary(">",_lhs48836,_rhs48837);})())?V(1.0):_v_43552_g))));
if(j::truth(([&]()->V{V _lhs48838=j::get(_v_43517_nearest,_v_43551_cell);V _rhs48839=V(0.0);return V(j::equal(_lhs48838,_rhs48839,true));})())){(void)(([&]()->V{V _base48841=_v_43519_lit;V _key48842=j::increment(_v_43538_n,1,false);V _assign48840=_v_43551_cell;return j::put(_base48841,_key48842,_assign48840);})());
}
(void)(([&]()->V{V _base48844=_v_43516_dark;V _key48845=_v_43551_cell;V _assign48843=([&]()->V{V _lhs48846=V(1.0);V _rhs48847=([&]()->V{V _lhs48848=_v_43506_glow;V _rhs48849=([&]()->V{V _lhs48850=V(0.5);V _rhs48851=([&]()->V{V _lhs48852=V(0.5);V _rhs48853=_v_43552_g;return V(j::number(_lhs48852)*j::number(_rhs48853));})();return j::binary("+",_lhs48850,_rhs48851);})();return V(j::number(_lhs48848)*j::number(_rhs48849));})();return V(j::number(_lhs48846)-j::number(_rhs48847));})();return j::update(_base48844,_key48845,"*",_assign48843);})());
if(j::truth(([&]()->V{V _lhs48854=_v_43548_q;V _rhs48855=j::get(_v_43517_nearest,_v_43551_cell);return j::binary(">",_lhs48854,_rhs48855);})())){(void)((([&]()->V{V _base48857=_v_43517_nearest;V _key48858=_v_43551_cell;V _assign48856=_v_43548_q;return j::put(_base48857,_key48858,_assign48856);})(),([&]()->V{V _base48860=_v_43518_close;V _key48861=_v_43551_cell;V _assign48859=_v_43552_g;return j::put(_base48860,_key48861,_assign48859);})()));
}

}
}
{V _v_43553_j;
_v_43553_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs48862=_v_43553_j;V _rhs48863=_v_43538_n;return j::binary("<",_lhs48862,_rhs48863);})());(void)(j::increment(_v_43553_j,1,false))){
V _v_43554_cell;
V _v_43555_v;
V _v_43556_g;
V _v_43557_ci;
V _v_43558_ch;
V _v_43559_shade;
_v_43554_cell=j::get(_v_43519_lit,_v_43553_j);
_v_43555_v=([&]()->V{V _lhs48864=V(1.0);V _rhs48865=j::get(_v_43516_dark,_v_43554_cell);return V(j::number(_lhs48864)-j::number(_rhs48865));})();
_v_43556_g=j::get(_v_43518_close,_v_43554_cell);
(void)(([&]()->V{V _base48867=_v_43514_z;V _key48868=_v_43554_cell;V _assign48866=j::get(_v_43517_nearest,_v_43554_cell);return j::put(_base48867,_key48868,_assign48866);})());
(void)(([&]()->V{V _base48870=_v_43515_who;V _key48871=_v_43554_cell;V _assign48869=_v_43523_id;return j::put(_base48870,_key48871,_assign48869);})());
(void)(([&]()->V{V _base48873=_v_43516_dark;V _key48874=_v_43554_cell;V _assign48872=V(1.0);return j::put(_base48873,_key48874,_assign48872);})());
(void)(([&]()->V{V _base48876=_v_43517_nearest;V _key48877=_v_43554_cell;V _assign48875=V(0.0);return j::put(_base48876,_key48877,_assign48875);})());
_v_43557_ci=([&]()->V{V _lhs48878=([&]()->V{V _lhs48880=_v_43555_v;V _rhs48881=_v_43531_nc;return V(j::number(_lhs48880)*j::number(_rhs48881));})();V _rhs48879=V(0.0);return V(int(j::i32(_lhs48878)|j::i32(_rhs48879)));})();
if(j::truth(([&]()->V{V _lhs48882=_v_43557_ci;V _rhs48883=_v_43531_nc;return j::binary(">=",_lhs48882,_rhs48883);})())){(void)((_v_43557_ci=([&]()->V{V _lhs48885=_v_43531_nc;V _rhs48886=V(1.0);return V(j::number(_lhs48885)-j::number(_rhs48886));})()));
}
_v_43558_ch=([&]()->V{V _logical48887=_v_43505_char;return !j::truth(_logical48887)?j::get(_v_43530_chars,_v_43557_ci):_logical48887;})();
if(j::truth(([&]()->V{V _lhs48888=_v_43558_ch;V _rhs48889=V(32.0);return V(j::equal(_lhs48888,_rhs48889,true));})())){continue;
}
_v_43559_shade=this->_v_42441_NONE.get();
if(j::truth(_v_43521_steps)){
V _v_43560_si;
_v_43560_si=([&]()->V{V _lhs48890=([&]()->V{V _lhs48892=(j::truth(_v_43532_byDepth)?_v_43556_g:_v_43555_v);V _rhs48893=_v_43522_ns;return V(j::number(_lhs48892)*j::number(_rhs48893));})();V _rhs48891=V(0.0);return V(int(j::i32(_lhs48890)|j::i32(_rhs48891)));})();
(void)((_v_43559_shade=j::get(_v_43521_steps,(j::truth(([&]()->V{V _lhs48895=_v_43560_si;V _rhs48896=_v_43522_ns;return j::binary(">=",_lhs48895,_rhs48896);})())?([&]()->V{V _lhs48897=_v_43522_ns;V _rhs48898=V(1.0);return V(j::number(_lhs48897)-j::number(_rhs48898));})():_v_43560_si))));

}

(void)(([&]()->V{V _receiver48899=_v_43520_s;V _method48900=this->_literals[309];V _method=j::get(_receiver48899,_method48900);j::Args _params48901=j::Args{_v_43554_cell,_v_43558_ch,_v_43559_shade};return j::call(_method,_params48901,_receiver48899);})());

}
}

}

return V{};
},4),false,"method");j::class_method(_class48453,this->_literals[112],j::function([=](const j::Args &_args_fn43561,const V &_receiver_fn43561,const V &_self_fn43561) mutable ->V{
V _v_43562_paths;
V _v_43563_closed;
V _v_43564_char;
V _v_43565_m;
V _v_43566_p;
V _v_43567_k;
V _pattern48902=_args_fn43561[0];
_v_43562_paths=j::get(_pattern48902,this->_literals[113]);
_v_43563_closed=j::get(_pattern48902,this->_literals[56]);
_v_43564_char=j::get(_pattern48902,this->_literals[96]);
_v_43565_m=_args_fn43561[1];
_v_43566_p=_args_fn43561[2];
_v_43567_k=_args_fn43561[3];
{
V _v_43568_D;
V _v_43569_px;
V _v_43570_py;
V _v_43571_pz;
V _v_43572_list;
_v_43568_D=j::get(j::get(_receiver_fn43561,this->_literals[37]),this->_literals[149]);
_v_43569_px=j::get(_v_43566_p,V(0.0));
_v_43570_py=j::get(_v_43566_p,V(1.0));
_v_43571_pz=j::get(_v_43566_p,V(2.0));
_v_43572_list=(j::truth(([&]()->V{V _lhs48903=j::unary("typeof",_v_43562_paths);V _rhs48904=this->_literals[0];return V(j::equal(_lhs48903,_rhs48904,true));})())?([&]()->V{V _callee48905=_v_43562_paths;return j::call(_callee48905,j::Args{j::get(_receiver_fn43561,this->_literals[293])});})():_v_43562_paths);
{for(const auto &_item48906:j::elements(_v_43572_list)){V _v_43573_path;
_v_43573_path=_item48906;
{
V _v_43574_fixed;
V _v_43575_n;
V _v_43576_has;
V _v_43577_whole;
V _v_43578_x0;
V _v_43579_y0;
V _v_43580_d0;
V _v_43581_fx;
V _v_43582_fy;
V _v_43583_fd;
_v_43574_fixed=([&]()->V{V _lhs48907=_v_43573_path;V _rhs48908=j::builtin("Float32Array");return j::binary("instanceof",_lhs48907,_rhs48908);})();
_v_43575_n=(j::truth(_v_43574_fixed)?([&]()->V{V _lhs48909=j::get(_v_43573_path,this->_literals[9]);V _rhs48910=V(3.0);return V(j::number(_lhs48909)/j::number(_rhs48910));})():(j::truth(([&]()->V{V _receiver48911=j::builtin("Array");V _method48912=this->_literals[8];V _method=j::get(_receiver48911,_method48912);j::Args _params48913=j::Args{_v_43573_path};return j::call(_method,_params48913,_receiver48911);})())?j::get(_v_43573_path,this->_literals[9]):V(0.0)));
_v_43576_has=V(false);
_v_43577_whole=V(true);
_v_43578_x0=V(0.0);
_v_43579_y0=V(0.0);
_v_43580_d0=V(0.0);
_v_43581_fx=V(0.0);
_v_43582_fy=V(0.0);
_v_43583_fd=V(0.0);
{V _v_43584_i;
_v_43584_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs48914=_v_43584_i;V _rhs48915=_v_43575_n;return j::binary("<",_lhs48914,_rhs48915);})());(void)(j::increment(_v_43584_i,1,false))){
V _v_43585_x;
V _v_43586_y;
V _v_43587_w;
V _v_43589_X;
V _v_43590_Y;
V _v_43591_d;
if(j::truth(_v_43574_fixed)){(void)(((_v_43585_x=([&]()->V{V _lhs48917=j::get(_v_43573_path,([&]()->V{V _lhs48919=_v_43584_i;V _rhs48920=V(3.0);return V(j::number(_lhs48919)*j::number(_rhs48920));})());V _rhs48918=_v_43567_k;return V(j::number(_lhs48917)*j::number(_rhs48918));})()),(_v_43586_y=([&]()->V{V _lhs48922=j::get(_v_43573_path,([&]()->V{V _lhs48924=([&]()->V{V _lhs48926=_v_43584_i;V _rhs48927=V(3.0);return V(j::number(_lhs48926)*j::number(_rhs48927));})();V _rhs48925=V(1.0);return j::binary("+",_lhs48924,_rhs48925);})());V _rhs48923=_v_43567_k;return V(j::number(_lhs48922)*j::number(_rhs48923));})()),(_v_43587_w=([&]()->V{V _lhs48929=j::get(_v_43573_path,([&]()->V{V _lhs48931=([&]()->V{V _lhs48933=_v_43584_i;V _rhs48934=V(3.0);return V(j::number(_lhs48933)*j::number(_rhs48934));})();V _rhs48932=V(2.0);return j::binary("+",_lhs48931,_rhs48932);})());V _rhs48930=_v_43567_k;return V(j::number(_lhs48929)*j::number(_rhs48930));})())));
}else {
V _v_43588_q;
_v_43588_q=j::get(_v_43573_path,_v_43584_i);
if(j::truth(j::unary("!",([&]()->V{V _receiver48935=j::builtin("Array");V _method48936=this->_literals[8];V _method=j::get(_receiver48935,_method48936);j::Args _params48937=j::Args{_v_43588_q};return j::call(_method,_params48937,_receiver48935);})()))){
(void)((_v_43576_has=(_v_43577_whole=V(false))));
continue;

}

(void)(((_v_43585_x=([&]()->V{V _lhs48941=j::get(_v_43588_q,V(0.0));V _rhs48942=_v_43567_k;return V(j::number(_lhs48941)*j::number(_rhs48942));})()),(_v_43586_y=([&]()->V{V _lhs48944=j::get(_v_43588_q,V(1.0));V _rhs48945=_v_43567_k;return V(j::number(_lhs48944)*j::number(_rhs48945));})()),(_v_43587_w=([&]()->V{V _lhs48947=j::get(_v_43588_q,V(2.0));V _rhs48948=_v_43567_k;return V(j::number(_lhs48947)*j::number(_rhs48948));})())));

}

_v_43589_X=([&]()->V{V _lhs48949=([&]()->V{V _lhs48951=([&]()->V{V _lhs48953=([&]()->V{V _lhs48955=j::get(_v_43565_m,V(0.0));V _rhs48956=_v_43585_x;return V(j::number(_lhs48955)*j::number(_rhs48956));})();V _rhs48954=([&]()->V{V _lhs48957=j::get(_v_43565_m,V(1.0));V _rhs48958=_v_43586_y;return V(j::number(_lhs48957)*j::number(_rhs48958));})();return j::binary("+",_lhs48953,_rhs48954);})();V _rhs48952=([&]()->V{V _lhs48959=j::get(_v_43565_m,V(2.0));V _rhs48960=_v_43587_w;return V(j::number(_lhs48959)*j::number(_rhs48960));})();return j::binary("+",_lhs48951,_rhs48952);})();V _rhs48950=_v_43569_px;return j::binary("+",_lhs48949,_rhs48950);})();
_v_43590_Y=([&]()->V{V _lhs48961=([&]()->V{V _lhs48963=([&]()->V{V _lhs48965=([&]()->V{V _lhs48967=j::get(_v_43565_m,V(3.0));V _rhs48968=_v_43585_x;return V(j::number(_lhs48967)*j::number(_rhs48968));})();V _rhs48966=([&]()->V{V _lhs48969=j::get(_v_43565_m,V(4.0));V _rhs48970=_v_43586_y;return V(j::number(_lhs48969)*j::number(_rhs48970));})();return j::binary("+",_lhs48965,_rhs48966);})();V _rhs48964=([&]()->V{V _lhs48971=j::get(_v_43565_m,V(5.0));V _rhs48972=_v_43587_w;return V(j::number(_lhs48971)*j::number(_rhs48972));})();return j::binary("+",_lhs48963,_rhs48964);})();V _rhs48962=_v_43570_py;return j::binary("+",_lhs48961,_rhs48962);})();
_v_43591_d=([&]()->V{V _lhs48973=([&]()->V{V _lhs48975=([&]()->V{V _lhs48977=([&]()->V{V _lhs48979=([&]()->V{V _lhs48981=j::get(_v_43565_m,V(6.0));V _rhs48982=_v_43585_x;return V(j::number(_lhs48981)*j::number(_rhs48982));})();V _rhs48980=([&]()->V{V _lhs48983=j::get(_v_43565_m,V(7.0));V _rhs48984=_v_43586_y;return V(j::number(_lhs48983)*j::number(_rhs48984));})();return j::binary("+",_lhs48979,_rhs48980);})();V _rhs48978=([&]()->V{V _lhs48985=j::get(_v_43565_m,V(8.0));V _rhs48986=_v_43587_w;return V(j::number(_lhs48985)*j::number(_rhs48986));})();return j::binary("+",_lhs48977,_rhs48978);})();V _rhs48976=_v_43571_pz;return j::binary("+",_lhs48975,_rhs48976);})();V _rhs48974=_v_43568_D;return j::binary("+",_lhs48973,_rhs48974);})();
if(j::truth(j::unary("!",([&]()->V{V _receiver48991=j::builtin("Number");V _method48992=this->_literals[6];V _method=j::get(_receiver48991,_method48992);j::Args _params48993=j::Args{([&]()->V{V _lhs48987=([&]()->V{V _lhs48989=_v_43589_X;V _rhs48990=_v_43590_Y;return j::binary("+",_lhs48989,_rhs48990);})();V _rhs48988=_v_43591_d;return j::binary("+",_lhs48987,_rhs48988);})()};return j::call(_method,_params48993,_receiver48991);})()))){
(void)((_v_43576_has=(_v_43577_whole=V(false))));
continue;

}

if(j::truth(_v_43576_has)){(void)(([&]()->V{V _receiver48996=_receiver_fn43561;V _method48997=this->_literals[310];V _method=j::get(_receiver48996,_method48997);j::Args _params48998=j::Args{_v_43578_x0,_v_43579_y0,_v_43580_d0,_v_43589_X,_v_43590_Y,_v_43591_d,_v_43564_char,j::builtin("Infinity"),V(false)};return j::call(_method,_params48998,_receiver48996);})());
}else {if(j::truth(([&]()->V{V _lhs48999=_v_43584_i;V _rhs49000=V(0.0);return V(j::equal(_lhs48999,_rhs49000,true));})())){(void)(((_v_43581_fx=_v_43589_X),(_v_43582_fy=_v_43590_Y),(_v_43583_fd=_v_43591_d)));
}
}
(void)(((_v_43578_x0=_v_43589_X),(_v_43579_y0=_v_43590_Y),(_v_43580_d0=_v_43591_d),(_v_43576_has=V(true))));

}
}
if(j::truth(([&]()->V{V _logical49008=([&]()->V{V _logical49009=_v_43563_closed;return j::truth(_logical49009)?_v_43577_whole:_logical49009;})();return j::truth(_logical49008)?([&]()->V{V _lhs49010=_v_43575_n;V _rhs49011=V(2.0);return j::binary(">",_lhs49010,_rhs49011);})():_logical49008;})())){(void)(([&]()->V{V _receiver49012=_receiver_fn43561;V _method49013=this->_literals[310];V _method=j::get(_receiver49012,_method49013);j::Args _params49014=j::Args{_v_43578_x0,_v_43579_y0,_v_43580_d0,_v_43581_fx,_v_43582_fy,_v_43583_fd,_v_43564_char,j::builtin("Infinity"),V(false)};return j::call(_method,_params49014,_receiver49012);})());
}

}
}}

}

return V{};
},4),false,"method");j::class_method(_class48453,this->_literals[308],j::function([=](const j::Args &_args_fn43592,const V &_receiver_fn43592,const V &_self_fn43592) mutable ->V{
V _v_43593_b;
V _v_43594_m;
V _v_43595_p;
V _v_43596_k;
_v_43593_b=_args_fn43592[0];
_v_43594_m=_args_fn43592[1];
_v_43595_p=_args_fn43592[2];
_v_43596_k=_args_fn43592[3];
{
V _v_43597_D;
V _v_43598_f;
V _v_43599_px;
V _v_43600_py;
V _v_43601_pz;
V _v_43602_mesh;
V _v_43603_pos;
V _v_43604_nrm;
V _v_43605_uv;
V _v_43606_tri;
V _v_43607_closed;
V _v_43608_nv;
V _v_43609_V;
V _v_43620_spare;
_v_43597_D=j::get(j::get(_receiver_fn43592,this->_literals[37]),this->_literals[149]);
_v_43598_f=j::get(_receiver_fn43592,this->_literals[295]);
_v_43599_px=j::get(_v_43595_p,V(0.0));
_v_43600_py=j::get(_v_43595_p,V(1.0));
_v_43601_pz=j::get(_v_43595_p,V(2.0));
_v_43602_mesh=([&]()->V{V _receiver49026=_v_43593_b;V _method49027=this->_literals[80];V _method=j::get(_receiver49026,_method49027);j::Args _params49028=j::Args{([&]()->V{V _lhs49015=([&]()->V{V _lhs49017=_v_43598_f;V _rhs49018=_v_43596_k;return V(j::number(_lhs49017)*j::number(_rhs49018));})();V _rhs49016=([&]()->V{V _receiver49023=j::builtin("Math");V _method49024=this->_literals[73];V _method=j::get(_receiver49023,_method49024);j::Args _params49025=j::Args{([&]()->V{V _lhs49019=_v_43601_pz;V _rhs49020=_v_43597_D;return j::binary("+",_lhs49019,_rhs49020);})(),this->_v_43197_NEAR.get()};return j::call(_method,_params49025,_receiver49023);})();return V(j::number(_lhs49015)/j::number(_rhs49016));})(),j::get(_receiver_fn43592,this->_literals[293])};return j::call(_method,_params49028,_receiver49026);})();
V _pattern49029=_v_43602_mesh;
_v_43603_pos=j::get(_pattern49029,this->_literals[52]);
_v_43604_nrm=j::get(_pattern49029,this->_literals[53]);
_v_43605_uv=j::get(_pattern49029,this->_literals[54]);
_v_43606_tri=j::get(_pattern49029,this->_literals[55]);
_v_43607_closed=j::get(_pattern49029,this->_literals[56]);
_v_43608_nv=([&]()->V{V _lhs49030=j::get(_v_43603_pos,this->_literals[9]);V _rhs49031=V(3.0);return V(j::number(_lhs49030)/j::number(_rhs49031));})();
if(j::truth(([&]()->V{V _lhs49032=j::get(j::get(_receiver_fn43592,this->_literals[286]),this->_literals[9]);V _rhs49033=([&]()->V{V _lhs49034=([&]()->V{V _lhs49036=_v_43608_nv;V _rhs49037=V(4.0);return j::binary("+",_lhs49036,_rhs49037);})();V _rhs49035=this->_v_43458_S.get();return V(j::number(_lhs49034)*j::number(_rhs49035));})();return j::binary("<",_lhs49032,_rhs49033);})())){(void)(([&]()->V{V _base49039=_receiver_fn43592;V _key49040=this->_literals[286];V _assign49038=([&]()->V{V _callee49045=j::builtin("Float32Array");return j::construct(_callee49045,j::Args{([&]()->V{V _lhs49041=([&]()->V{V _lhs49043=_v_43608_nv;V _rhs49044=V(4.0);return j::binary("+",_lhs49043,_rhs49044);})();V _rhs49042=this->_v_43458_S.get();return V(j::number(_lhs49041)*j::number(_rhs49042));})()});})();return j::put(_base49039,_key49040,_assign49038);})());
}
_v_43609_V=j::get(_receiver_fn43592,this->_literals[286]);
{V _v_43610_i;
V _v_43611_a;
V _v_43612_o;
_v_43610_i=V(0.0);
_v_43611_a=V(0.0);
_v_43612_o=V(0.0);
for(;j::truth(([&]()->V{V _lhs49046=_v_43610_i;V _rhs49047=_v_43608_nv;return j::binary("<",_lhs49046,_rhs49047);})());(void)((j::increment(_v_43610_i,1,false),(_v_43611_a=j::binary("+",_v_43611_a,V(3.0))),(_v_43612_o=j::binary("+",_v_43612_o,this->_v_43458_S.get()))))){
V _v_43613_x;
V _v_43614_y;
V _v_43615_w;
V _v_43616_nx;
V _v_43617_ny;
V _v_43618_nz;
V _v_43619_d;
_v_43613_x=([&]()->V{V _lhs49050=j::get(_v_43603_pos,_v_43611_a);V _rhs49051=_v_43596_k;return V(j::number(_lhs49050)*j::number(_rhs49051));})();
_v_43614_y=([&]()->V{V _lhs49052=j::get(_v_43603_pos,([&]()->V{V _lhs49054=_v_43611_a;V _rhs49055=V(1.0);return j::binary("+",_lhs49054,_rhs49055);})());V _rhs49053=_v_43596_k;return V(j::number(_lhs49052)*j::number(_rhs49053));})();
_v_43615_w=([&]()->V{V _lhs49056=j::get(_v_43603_pos,([&]()->V{V _lhs49058=_v_43611_a;V _rhs49059=V(2.0);return j::binary("+",_lhs49058,_rhs49059);})());V _rhs49057=_v_43596_k;return V(j::number(_lhs49056)*j::number(_rhs49057));})();
_v_43616_nx=j::get(_v_43604_nrm,_v_43611_a);
_v_43617_ny=j::get(_v_43604_nrm,([&]()->V{V _lhs49060=_v_43611_a;V _rhs49061=V(1.0);return j::binary("+",_lhs49060,_rhs49061);})());
_v_43618_nz=j::get(_v_43604_nrm,([&]()->V{V _lhs49062=_v_43611_a;V _rhs49063=V(2.0);return j::binary("+",_lhs49062,_rhs49063);})());
(void)(([&]()->V{V _base49065=_v_43609_V;V _key49066=([&]()->V{V _lhs49067=_v_43612_o;V _rhs49068=V(3.0);return j::binary("+",_lhs49067,_rhs49068);})();V _assign49064=([&]()->V{V _lhs49069=([&]()->V{V _lhs49071=([&]()->V{V _lhs49073=([&]()->V{V _lhs49075=j::get(_v_43594_m,V(0.0));V _rhs49076=_v_43613_x;return V(j::number(_lhs49075)*j::number(_rhs49076));})();V _rhs49074=([&]()->V{V _lhs49077=j::get(_v_43594_m,V(1.0));V _rhs49078=_v_43614_y;return V(j::number(_lhs49077)*j::number(_rhs49078));})();return j::binary("+",_lhs49073,_rhs49074);})();V _rhs49072=([&]()->V{V _lhs49079=j::get(_v_43594_m,V(2.0));V _rhs49080=_v_43615_w;return V(j::number(_lhs49079)*j::number(_rhs49080));})();return j::binary("+",_lhs49071,_rhs49072);})();V _rhs49070=_v_43599_px;return j::binary("+",_lhs49069,_rhs49070);})();return j::put(_base49065,_key49066,_assign49064);})());
(void)(([&]()->V{V _base49082=_v_43609_V;V _key49083=([&]()->V{V _lhs49084=_v_43612_o;V _rhs49085=V(4.0);return j::binary("+",_lhs49084,_rhs49085);})();V _assign49081=([&]()->V{V _lhs49086=([&]()->V{V _lhs49088=([&]()->V{V _lhs49090=([&]()->V{V _lhs49092=j::get(_v_43594_m,V(3.0));V _rhs49093=_v_43613_x;return V(j::number(_lhs49092)*j::number(_rhs49093));})();V _rhs49091=([&]()->V{V _lhs49094=j::get(_v_43594_m,V(4.0));V _rhs49095=_v_43614_y;return V(j::number(_lhs49094)*j::number(_rhs49095));})();return j::binary("+",_lhs49090,_rhs49091);})();V _rhs49089=([&]()->V{V _lhs49096=j::get(_v_43594_m,V(5.0));V _rhs49097=_v_43615_w;return V(j::number(_lhs49096)*j::number(_rhs49097));})();return j::binary("+",_lhs49088,_rhs49089);})();V _rhs49087=_v_43600_py;return j::binary("+",_lhs49086,_rhs49087);})();return j::put(_base49082,_key49083,_assign49081);})());
(void)(([&]()->V{V _base49099=_v_43609_V;V _key49100=([&]()->V{V _lhs49101=_v_43612_o;V _rhs49102=V(5.0);return j::binary("+",_lhs49101,_rhs49102);})();V _assign49098=([&]()->V{V _lhs49103=([&]()->V{V _lhs49105=([&]()->V{V _lhs49107=([&]()->V{V _lhs49109=j::get(_v_43594_m,V(6.0));V _rhs49110=_v_43613_x;return V(j::number(_lhs49109)*j::number(_rhs49110));})();V _rhs49108=([&]()->V{V _lhs49111=j::get(_v_43594_m,V(7.0));V _rhs49112=_v_43614_y;return V(j::number(_lhs49111)*j::number(_rhs49112));})();return j::binary("+",_lhs49107,_rhs49108);})();V _rhs49106=([&]()->V{V _lhs49113=j::get(_v_43594_m,V(8.0));V _rhs49114=_v_43615_w;return V(j::number(_lhs49113)*j::number(_rhs49114));})();return j::binary("+",_lhs49105,_rhs49106);})();V _rhs49104=_v_43601_pz;return j::binary("+",_lhs49103,_rhs49104);})();return j::put(_base49099,_key49100,_assign49098);})());
(void)(([&]()->V{V _base49116=_v_43609_V;V _key49117=([&]()->V{V _lhs49118=_v_43612_o;V _rhs49119=V(6.0);return j::binary("+",_lhs49118,_rhs49119);})();V _assign49115=([&]()->V{V _lhs49120=([&]()->V{V _lhs49122=([&]()->V{V _lhs49124=j::get(_v_43594_m,V(0.0));V _rhs49125=_v_43616_nx;return V(j::number(_lhs49124)*j::number(_rhs49125));})();V _rhs49123=([&]()->V{V _lhs49126=j::get(_v_43594_m,V(1.0));V _rhs49127=_v_43617_ny;return V(j::number(_lhs49126)*j::number(_rhs49127));})();return j::binary("+",_lhs49122,_rhs49123);})();V _rhs49121=([&]()->V{V _lhs49128=j::get(_v_43594_m,V(2.0));V _rhs49129=_v_43618_nz;return V(j::number(_lhs49128)*j::number(_rhs49129));})();return j::binary("+",_lhs49120,_rhs49121);})();return j::put(_base49116,_key49117,_assign49115);})());
(void)(([&]()->V{V _base49131=_v_43609_V;V _key49132=([&]()->V{V _lhs49133=_v_43612_o;V _rhs49134=V(7.0);return j::binary("+",_lhs49133,_rhs49134);})();V _assign49130=([&]()->V{V _lhs49135=([&]()->V{V _lhs49137=([&]()->V{V _lhs49139=j::get(_v_43594_m,V(3.0));V _rhs49140=_v_43616_nx;return V(j::number(_lhs49139)*j::number(_rhs49140));})();V _rhs49138=([&]()->V{V _lhs49141=j::get(_v_43594_m,V(4.0));V _rhs49142=_v_43617_ny;return V(j::number(_lhs49141)*j::number(_rhs49142));})();return j::binary("+",_lhs49137,_rhs49138);})();V _rhs49136=([&]()->V{V _lhs49143=j::get(_v_43594_m,V(5.0));V _rhs49144=_v_43618_nz;return V(j::number(_lhs49143)*j::number(_rhs49144));})();return j::binary("+",_lhs49135,_rhs49136);})();return j::put(_base49131,_key49132,_assign49130);})());
(void)(([&]()->V{V _base49146=_v_43609_V;V _key49147=([&]()->V{V _lhs49148=_v_43612_o;V _rhs49149=V(8.0);return j::binary("+",_lhs49148,_rhs49149);})();V _assign49145=([&]()->V{V _lhs49150=([&]()->V{V _lhs49152=([&]()->V{V _lhs49154=j::get(_v_43594_m,V(6.0));V _rhs49155=_v_43616_nx;return V(j::number(_lhs49154)*j::number(_rhs49155));})();V _rhs49153=([&]()->V{V _lhs49156=j::get(_v_43594_m,V(7.0));V _rhs49157=_v_43617_ny;return V(j::number(_lhs49156)*j::number(_rhs49157));})();return j::binary("+",_lhs49152,_rhs49153);})();V _rhs49151=([&]()->V{V _lhs49158=j::get(_v_43594_m,V(8.0));V _rhs49159=_v_43618_nz;return V(j::number(_lhs49158)*j::number(_rhs49159));})();return j::binary("+",_lhs49150,_rhs49151);})();return j::put(_base49146,_key49147,_assign49145);})());
(void)(([&]()->V{V _base49161=_v_43609_V;V _key49162=([&]()->V{V _lhs49163=_v_43612_o;V _rhs49164=V(9.0);return j::binary("+",_lhs49163,_rhs49164);})();V _assign49160=j::get(_v_43605_uv,([&]()->V{V _lhs49165=_v_43610_i;V _rhs49166=V(2.0);return V(j::number(_lhs49165)*j::number(_rhs49166));})());return j::put(_base49161,_key49162,_assign49160);})());
(void)(([&]()->V{V _base49168=_v_43609_V;V _key49169=([&]()->V{V _lhs49170=_v_43612_o;V _rhs49171=V(10.0);return j::binary("+",_lhs49170,_rhs49171);})();V _assign49167=j::get(_v_43605_uv,([&]()->V{V _lhs49172=([&]()->V{V _lhs49174=_v_43610_i;V _rhs49175=V(2.0);return V(j::number(_lhs49174)*j::number(_rhs49175));})();V _rhs49173=V(1.0);return j::binary("+",_lhs49172,_rhs49173);})());return j::put(_base49168,_key49169,_assign49167);})());
_v_43619_d=([&]()->V{V _lhs49176=j::get(_v_43609_V,([&]()->V{V _lhs49178=_v_43612_o;V _rhs49179=V(5.0);return j::binary("+",_lhs49178,_rhs49179);})());V _rhs49177=_v_43597_D;return j::binary("+",_lhs49176,_rhs49177);})();
if(j::truth(([&]()->V{V _lhs49180=_v_43619_d;V _rhs49181=this->_v_43197_NEAR.get();return j::binary(">=",_lhs49180,_rhs49181);})())){(void)(([&]()->V{V _receiver49182=_receiver_fn43592;V _method49183=this->_literals[311];V _method=j::get(_receiver49182,_method49183);j::Args _params49184=j::Args{_v_43609_V,_v_43612_o,_v_43619_d};return j::call(_method,_params49184,_receiver49182);})());
}else {(void)(([&]()->V{V _base49186=_v_43609_V;V _key49187=([&]()->V{V _lhs49188=_v_43612_o;V _rhs49189=V(2.0);return j::binary("+",_lhs49188,_rhs49189);})();V _assign49185=j::unary("-",V(1.0));return j::put(_base49186,_key49187,_assign49185);})());
}

}
}
_v_43620_spare=([&]()->V{V _lhs49190=_v_43608_nv;V _rhs49191=this->_v_43458_S.get();return V(j::number(_lhs49190)*j::number(_rhs49191));})();
(void)(([&]()->V{V _base49193=_receiver_fn43592;V _key49194=this->_literals[300];V _assign49192=V(false);return j::put(_base49193,_key49194,_assign49192);})());
{V _v_43621_j;
_v_43621_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs49195=_v_43621_j;V _rhs49196=j::get(_v_43606_tri,this->_literals[9]);return j::binary("<",_lhs49195,_rhs49196);})());(void)((_v_43621_j=j::binary("+",_v_43621_j,V(3.0))))){
V _v_43622_A;
V _v_43623_B;
V _v_43624_C;
V _v_43625_ex;
V _v_43626_ey;
V _v_43627_ez;
V _v_43628_fx;
V _v_43629_fy;
V _v_43630_fz;
V _v_43631_gx;
V _v_43632_gy;
V _v_43633_gz;
V _v_43634_away;
V _v_43635_sign;
_v_43622_A=([&]()->V{V _lhs49198=j::get(_v_43606_tri,_v_43621_j);V _rhs49199=this->_v_43458_S.get();return V(j::number(_lhs49198)*j::number(_rhs49199));})();
_v_43623_B=([&]()->V{V _lhs49200=j::get(_v_43606_tri,([&]()->V{V _lhs49202=_v_43621_j;V _rhs49203=V(1.0);return j::binary("+",_lhs49202,_rhs49203);})());V _rhs49201=this->_v_43458_S.get();return V(j::number(_lhs49200)*j::number(_rhs49201));})();
_v_43624_C=([&]()->V{V _lhs49204=j::get(_v_43606_tri,([&]()->V{V _lhs49206=_v_43621_j;V _rhs49207=V(2.0);return j::binary("+",_lhs49206,_rhs49207);})());V _rhs49205=this->_v_43458_S.get();return V(j::number(_lhs49204)*j::number(_rhs49205));})();
_v_43625_ex=([&]()->V{V _lhs49208=j::get(_v_43609_V,([&]()->V{V _lhs49210=_v_43623_B;V _rhs49211=V(3.0);return j::binary("+",_lhs49210,_rhs49211);})());V _rhs49209=j::get(_v_43609_V,([&]()->V{V _lhs49212=_v_43622_A;V _rhs49213=V(3.0);return j::binary("+",_lhs49212,_rhs49213);})());return V(j::number(_lhs49208)-j::number(_rhs49209));})();
_v_43626_ey=([&]()->V{V _lhs49214=j::get(_v_43609_V,([&]()->V{V _lhs49216=_v_43623_B;V _rhs49217=V(4.0);return j::binary("+",_lhs49216,_rhs49217);})());V _rhs49215=j::get(_v_43609_V,([&]()->V{V _lhs49218=_v_43622_A;V _rhs49219=V(4.0);return j::binary("+",_lhs49218,_rhs49219);})());return V(j::number(_lhs49214)-j::number(_rhs49215));})();
_v_43627_ez=([&]()->V{V _lhs49220=j::get(_v_43609_V,([&]()->V{V _lhs49222=_v_43623_B;V _rhs49223=V(5.0);return j::binary("+",_lhs49222,_rhs49223);})());V _rhs49221=j::get(_v_43609_V,([&]()->V{V _lhs49224=_v_43622_A;V _rhs49225=V(5.0);return j::binary("+",_lhs49224,_rhs49225);})());return V(j::number(_lhs49220)-j::number(_rhs49221));})();
_v_43628_fx=([&]()->V{V _lhs49226=j::get(_v_43609_V,([&]()->V{V _lhs49228=_v_43624_C;V _rhs49229=V(3.0);return j::binary("+",_lhs49228,_rhs49229);})());V _rhs49227=j::get(_v_43609_V,([&]()->V{V _lhs49230=_v_43622_A;V _rhs49231=V(3.0);return j::binary("+",_lhs49230,_rhs49231);})());return V(j::number(_lhs49226)-j::number(_rhs49227));})();
_v_43629_fy=([&]()->V{V _lhs49232=j::get(_v_43609_V,([&]()->V{V _lhs49234=_v_43624_C;V _rhs49235=V(4.0);return j::binary("+",_lhs49234,_rhs49235);})());V _rhs49233=j::get(_v_43609_V,([&]()->V{V _lhs49236=_v_43622_A;V _rhs49237=V(4.0);return j::binary("+",_lhs49236,_rhs49237);})());return V(j::number(_lhs49232)-j::number(_rhs49233));})();
_v_43630_fz=([&]()->V{V _lhs49238=j::get(_v_43609_V,([&]()->V{V _lhs49240=_v_43624_C;V _rhs49241=V(5.0);return j::binary("+",_lhs49240,_rhs49241);})());V _rhs49239=j::get(_v_43609_V,([&]()->V{V _lhs49242=_v_43622_A;V _rhs49243=V(5.0);return j::binary("+",_lhs49242,_rhs49243);})());return V(j::number(_lhs49238)-j::number(_rhs49239));})();
_v_43631_gx=([&]()->V{V _lhs49244=([&]()->V{V _lhs49246=_v_43626_ey;V _rhs49247=_v_43630_fz;return V(j::number(_lhs49246)*j::number(_rhs49247));})();V _rhs49245=([&]()->V{V _lhs49248=_v_43627_ez;V _rhs49249=_v_43629_fy;return V(j::number(_lhs49248)*j::number(_rhs49249));})();return V(j::number(_lhs49244)-j::number(_rhs49245));})();
_v_43632_gy=([&]()->V{V _lhs49250=([&]()->V{V _lhs49252=_v_43627_ez;V _rhs49253=_v_43628_fx;return V(j::number(_lhs49252)*j::number(_rhs49253));})();V _rhs49251=([&]()->V{V _lhs49254=_v_43625_ex;V _rhs49255=_v_43630_fz;return V(j::number(_lhs49254)*j::number(_rhs49255));})();return V(j::number(_lhs49250)-j::number(_rhs49251));})();
_v_43633_gz=([&]()->V{V _lhs49256=([&]()->V{V _lhs49258=_v_43625_ex;V _rhs49259=_v_43629_fy;return V(j::number(_lhs49258)*j::number(_rhs49259));})();V _rhs49257=([&]()->V{V _lhs49260=_v_43626_ey;V _rhs49261=_v_43628_fx;return V(j::number(_lhs49260)*j::number(_rhs49261));})();return V(j::number(_lhs49256)-j::number(_rhs49257));})();
if(j::truth(([&]()->V{V _lhs49262=([&]()->V{V _lhs49264=([&]()->V{V _lhs49266=([&]()->V{V _lhs49268=_v_43631_gx;V _rhs49269=([&]()->V{V _lhs49270=([&]()->V{V _lhs49272=j::get(_v_43609_V,([&]()->V{V _lhs49274=_v_43622_A;V _rhs49275=V(6.0);return j::binary("+",_lhs49274,_rhs49275);})());V _rhs49273=j::get(_v_43609_V,([&]()->V{V _lhs49276=_v_43623_B;V _rhs49277=V(6.0);return j::binary("+",_lhs49276,_rhs49277);})());return j::binary("+",_lhs49272,_rhs49273);})();V _rhs49271=j::get(_v_43609_V,([&]()->V{V _lhs49278=_v_43624_C;V _rhs49279=V(6.0);return j::binary("+",_lhs49278,_rhs49279);})());return j::binary("+",_lhs49270,_rhs49271);})();return V(j::number(_lhs49268)*j::number(_rhs49269));})();V _rhs49267=([&]()->V{V _lhs49280=_v_43632_gy;V _rhs49281=([&]()->V{V _lhs49282=([&]()->V{V _lhs49284=j::get(_v_43609_V,([&]()->V{V _lhs49286=_v_43622_A;V _rhs49287=V(7.0);return j::binary("+",_lhs49286,_rhs49287);})());V _rhs49285=j::get(_v_43609_V,([&]()->V{V _lhs49288=_v_43623_B;V _rhs49289=V(7.0);return j::binary("+",_lhs49288,_rhs49289);})());return j::binary("+",_lhs49284,_rhs49285);})();V _rhs49283=j::get(_v_43609_V,([&]()->V{V _lhs49290=_v_43624_C;V _rhs49291=V(7.0);return j::binary("+",_lhs49290,_rhs49291);})());return j::binary("+",_lhs49282,_rhs49283);})();return V(j::number(_lhs49280)*j::number(_rhs49281));})();return j::binary("+",_lhs49266,_rhs49267);})();V _rhs49265=([&]()->V{V _lhs49292=_v_43633_gz;V _rhs49293=([&]()->V{V _lhs49294=([&]()->V{V _lhs49296=j::get(_v_43609_V,([&]()->V{V _lhs49298=_v_43622_A;V _rhs49299=V(8.0);return j::binary("+",_lhs49298,_rhs49299);})());V _rhs49297=j::get(_v_43609_V,([&]()->V{V _lhs49300=_v_43623_B;V _rhs49301=V(8.0);return j::binary("+",_lhs49300,_rhs49301);})());return j::binary("+",_lhs49296,_rhs49297);})();V _rhs49295=j::get(_v_43609_V,([&]()->V{V _lhs49302=_v_43624_C;V _rhs49303=V(8.0);return j::binary("+",_lhs49302,_rhs49303);})());return j::binary("+",_lhs49294,_rhs49295);})();return V(j::number(_lhs49292)*j::number(_rhs49293));})();return j::binary("+",_lhs49264,_rhs49265);})();V _rhs49263=V(0.0);return j::binary("<",_lhs49262,_rhs49263);})())){(void)(((_v_43631_gx=j::unary("-",_v_43631_gx)),(_v_43632_gy=j::unary("-",_v_43632_gy)),(_v_43633_gz=j::unary("-",_v_43633_gz))));
}
_v_43634_away=([&]()->V{V _lhs49307=([&]()->V{V _lhs49309=([&]()->V{V _lhs49311=([&]()->V{V _lhs49313=_v_43631_gx;V _rhs49314=j::get(_v_43609_V,([&]()->V{V _lhs49315=_v_43622_A;V _rhs49316=V(3.0);return j::binary("+",_lhs49315,_rhs49316);})());return V(j::number(_lhs49313)*j::number(_rhs49314));})();V _rhs49312=([&]()->V{V _lhs49317=_v_43632_gy;V _rhs49318=j::get(_v_43609_V,([&]()->V{V _lhs49319=_v_43622_A;V _rhs49320=V(4.0);return j::binary("+",_lhs49319,_rhs49320);})());return V(j::number(_lhs49317)*j::number(_rhs49318));})();return j::binary("+",_lhs49311,_rhs49312);})();V _rhs49310=([&]()->V{V _lhs49321=_v_43633_gz;V _rhs49322=([&]()->V{V _lhs49323=j::get(_v_43609_V,([&]()->V{V _lhs49325=_v_43622_A;V _rhs49326=V(5.0);return j::binary("+",_lhs49325,_rhs49326);})());V _rhs49324=_v_43597_D;return j::binary("+",_lhs49323,_rhs49324);})();return V(j::number(_lhs49321)*j::number(_rhs49322));})();return j::binary("+",_lhs49309,_rhs49310);})();V _rhs49308=V(0.0);return j::binary(">",_lhs49307,_rhs49308);})();
if(j::truth(([&]()->V{V _logical49327=_v_43634_away;return j::truth(_logical49327)?_v_43607_closed:_logical49327;})())){continue;
}
_v_43635_sign=(j::truth(_v_43634_away)?j::unary("-",V(1.0)):V(1.0));
if(j::truth(([&]()->V{V _logical49328=([&]()->V{V _logical49329=([&]()->V{V _lhs49330=j::get(_v_43609_V,([&]()->V{V _lhs49332=_v_43622_A;V _rhs49333=V(2.0);return j::binary("+",_lhs49332,_rhs49333);})());V _rhs49331=V(0.0);return j::binary(">=",_lhs49330,_rhs49331);})();return j::truth(_logical49329)?([&]()->V{V _lhs49334=j::get(_v_43609_V,([&]()->V{V _lhs49336=_v_43623_B;V _rhs49337=V(2.0);return j::binary("+",_lhs49336,_rhs49337);})());V _rhs49335=V(0.0);return j::binary(">=",_lhs49334,_rhs49335);})():_logical49329;})();return j::truth(_logical49328)?([&]()->V{V _lhs49338=j::get(_v_43609_V,([&]()->V{V _lhs49340=_v_43624_C;V _rhs49341=V(2.0);return j::binary("+",_lhs49340,_rhs49341);})());V _rhs49339=V(0.0);return j::binary(">=",_lhs49338,_rhs49339);})():_logical49328;})())){(void)(([&]()->V{V _receiver49342=_receiver_fn43592;V _method49343=this->_literals[301];V _method=j::get(_receiver49342,_method49343);j::Args _params49344=j::Args{_v_43609_V,_v_43622_A,_v_43623_B,_v_43624_C,_v_43635_sign};return j::call(_method,_params49344,_receiver49342);})());
}else {(void)(([&]()->V{V _receiver49345=_receiver_fn43592;V _method49346=this->_literals[312];V _method=j::get(_receiver49345,_method49346);j::Args _params49347=j::Args{_v_43609_V,_v_43622_A,_v_43623_B,_v_43624_C,_v_43620_spare,_v_43635_sign};return j::call(_method,_params49347,_receiver49345);})());
}

}
}
if(j::truth(j::unary("!",j::get(_receiver_fn43592,this->_literals[300])))){(void)(([&]()->V{V _receiver49348=_receiver_fn43592;V _method49349=this->_literals[313];V _method=j::get(_receiver49348,_method49349);j::Args _params49350=j::Args{_v_43593_b,_v_43595_p,_v_43596_k};return j::call(_method,_params49350,_receiver49348);})());
}
if(j::truth(([&]()->V{V _logical49351=j::get(_v_43593_b,this->_literals[27]);return j::truth(_logical49351)?j::get(_v_43602_mesh,this->_literals[27]):_logical49351;})())){(void)(([&]()->V{V _receiver49359=_receiver_fn43592;V _method49360=this->_literals[27];V _method=j::get(_receiver49359,_method49360);j::Args _params49361=j::Args{_v_43609_V,_v_43602_mesh,_v_43594_m,([&]()->V{V _lhs49352=([&]()->V{V _lhs49354=([&]()->V{V _receiver49356=_v_43593_b;V _method49357=this->_literals[79];V _method=j::get(_receiver49356,_method49357);j::Args _params49358=j::Args{j::get(_receiver_fn43592,this->_literals[293])};return j::call(_method,_params49358,_receiver49356);})();V _rhs49355=_v_43596_k;return V(j::number(_lhs49354)*j::number(_rhs49355));})();V _rhs49353=V(0.35);return V(j::number(_lhs49352)*j::number(_rhs49353));})()};return j::call(_method,_params49361,_receiver49359);})());
}

}

return V{};
},4),false,"method");j::class_method(_class48453,this->_literals[311],j::function([=](const j::Args &_args_fn43636,const V &_receiver_fn43636,const V &_self_fn43636) mutable ->V{
V _v_43637_V;
V _v_43638_o;
V _v_43639_d;
_v_43637_V=_args_fn43636[0];
_v_43638_o=_args_fn43636[1];
_v_43639_d=_args_fn43636[2];
{
V _v_43640_q;
_v_43640_q=([&]()->V{V _lhs49362=V(1.0);V _rhs49363=_v_43639_d;return V(j::number(_lhs49362)/j::number(_rhs49363));})();
(void)(([&]()->V{V _base49365=_v_43637_V;V _key49366=_v_43638_o;V _assign49364=([&]()->V{V _lhs49367=([&]()->V{V _lhs49369=j::get(_receiver_fn43636,this->_literals[174]);V _rhs49370=V(2.0);return V(j::number(_lhs49369)/j::number(_rhs49370));})();V _rhs49368=([&]()->V{V _lhs49371=([&]()->V{V _lhs49373=j::get(_receiver_fn43636,this->_literals[295]);V _rhs49374=j::get(_v_43637_V,([&]()->V{V _lhs49375=_v_43638_o;V _rhs49376=V(3.0);return j::binary("+",_lhs49375,_rhs49376);})());return V(j::number(_lhs49373)*j::number(_rhs49374));})();V _rhs49372=_v_43640_q;return V(j::number(_lhs49371)*j::number(_rhs49372));})();return j::binary("+",_lhs49367,_rhs49368);})();return j::put(_base49365,_key49366,_assign49364);})());
(void)(([&]()->V{V _base49378=_v_43637_V;V _key49379=([&]()->V{V _lhs49380=_v_43638_o;V _rhs49381=V(1.0);return j::binary("+",_lhs49380,_rhs49381);})();V _assign49377=([&]()->V{V _lhs49382=([&]()->V{V _lhs49384=j::get(_receiver_fn43636,this->_literals[175]);V _rhs49385=V(2.0);return V(j::number(_lhs49384)/j::number(_rhs49385));})();V _rhs49383=([&]()->V{V _lhs49386=([&]()->V{V _lhs49388=([&]()->V{V _lhs49390=j::get(_receiver_fn43636,this->_literals[295]);V _rhs49391=j::get(_v_43637_V,([&]()->V{V _lhs49392=_v_43638_o;V _rhs49393=V(4.0);return j::binary("+",_lhs49392,_rhs49393);})());return V(j::number(_lhs49390)*j::number(_rhs49391));})();V _rhs49389=_v_43640_q;return V(j::number(_lhs49388)*j::number(_rhs49389));})();V _rhs49387=j::get(_receiver_fn43636,this->_literals[176]);return V(j::number(_lhs49386)/j::number(_rhs49387));})();return V(j::number(_lhs49382)-j::number(_rhs49383));})();return j::put(_base49378,_key49379,_assign49377);})());
(void)(([&]()->V{V _base49395=_v_43637_V;V _key49396=([&]()->V{V _lhs49397=_v_43638_o;V _rhs49398=V(2.0);return j::binary("+",_lhs49397,_rhs49398);})();V _assign49394=_v_43640_q;return j::put(_base49395,_key49396,_assign49394);})());

}

return V{};
},3),false,"method");j::class_method(_class48453,this->_literals[312],j::function([=](const j::Args &_args_fn43641,const V &_receiver_fn43641,const V &_self_fn43641) mutable ->V{
V _v_43642_V;
V _v_43643_A;
V _v_43644_B;
V _v_43645_C;
V _v_43646_spare;
V _v_43647_sign;
_v_43642_V=_args_fn43641[0];
_v_43643_A=_args_fn43641[1];
_v_43644_B=_args_fn43641[2];
_v_43645_C=_args_fn43641[3];
_v_43646_spare=_args_fn43641[4];
_v_43647_sign=_args_fn43641[5];
{
V _v_43648_D;
V _v_43649_n;
_v_43648_D=j::get(j::get(_receiver_fn43641,this->_literals[37]),this->_literals[149]);
(void)(([&]()->V{V _base49400=this->_v_43459_TRI.get();V _key49401=V(0.0);V _assign49399=_v_43643_A;return j::put(_base49400,_key49401,_assign49399);})());
(void)(([&]()->V{V _base49403=this->_v_43459_TRI.get();V _key49404=V(1.0);V _assign49402=_v_43644_B;return j::put(_base49403,_key49404,_assign49402);})());
(void)(([&]()->V{V _base49406=this->_v_43459_TRI.get();V _key49407=V(2.0);V _assign49405=_v_43645_C;return j::put(_base49406,_key49407,_assign49405);})());
_v_43649_n=V(0.0);
{V _v_43650_i;
_v_43650_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs49408=_v_43650_i;V _rhs49409=V(3.0);return j::binary("<",_lhs49408,_rhs49409);})());(void)(j::increment(_v_43650_i,1,false))){
V _v_43651_P;
V _v_43652_Q;
V _v_43653_dp;
V _v_43654_dq;
_v_43651_P=j::get(this->_v_43459_TRI.get(),_v_43650_i);
_v_43652_Q=j::get(this->_v_43459_TRI.get(),([&]()->V{V _lhs49410=([&]()->V{V _lhs49412=_v_43650_i;V _rhs49413=V(1.0);return j::binary("+",_lhs49412,_rhs49413);})();V _rhs49411=V(3.0);return V(std::fmod(j::number(_lhs49410),j::number(_rhs49411)));})());
_v_43653_dp=([&]()->V{V _lhs49414=j::get(_v_43642_V,([&]()->V{V _lhs49416=_v_43651_P;V _rhs49417=V(5.0);return j::binary("+",_lhs49416,_rhs49417);})());V _rhs49415=_v_43648_D;return j::binary("+",_lhs49414,_rhs49415);})();
_v_43654_dq=([&]()->V{V _lhs49418=j::get(_v_43642_V,([&]()->V{V _lhs49420=_v_43652_Q;V _rhs49421=V(5.0);return j::binary("+",_lhs49420,_rhs49421);})());V _rhs49419=_v_43648_D;return j::binary("+",_lhs49418,_rhs49419);})();
if(j::truth(([&]()->V{V _lhs49422=_v_43653_dp;V _rhs49423=this->_v_43197_NEAR.get();return j::binary(">=",_lhs49422,_rhs49423);})())){(void)(([&]()->V{V _base49425=this->_v_43460_CORNERS.get();V _key49426=j::increment(_v_43649_n,1,false);V _assign49424=_v_43651_P;return j::put(_base49425,_key49426,_assign49424);})());
}
if(j::truth(([&]()->V{V _lhs49427=([&]()->V{V _lhs49429=_v_43653_dp;V _rhs49430=this->_v_43197_NEAR.get();return j::binary(">=",_lhs49429,_rhs49430);})();V _rhs49428=([&]()->V{V _lhs49431=_v_43654_dq;V _rhs49432=this->_v_43197_NEAR.get();return j::binary(">=",_lhs49431,_rhs49432);})();return V(!j::equal(_lhs49427,_rhs49428,true));})())){
V _v_43655_k;
_v_43655_k=([&]()->V{V _lhs49433=([&]()->V{V _lhs49435=this->_v_43197_NEAR.get();V _rhs49436=_v_43653_dp;return V(j::number(_lhs49435)-j::number(_rhs49436));})();V _rhs49434=([&]()->V{V _lhs49437=_v_43654_dq;V _rhs49438=_v_43653_dp;return V(j::number(_lhs49437)-j::number(_rhs49438));})();return V(j::number(_lhs49433)/j::number(_rhs49434));})();
{V _v_43656_j;
_v_43656_j=V(3.0);
for(;j::truth(([&]()->V{V _lhs49439=_v_43656_j;V _rhs49440=this->_v_43458_S.get();return j::binary("<",_lhs49439,_rhs49440);})());(void)(j::increment(_v_43656_j,1,false))){(void)(([&]()->V{V _base49442=_v_43642_V;V _key49443=([&]()->V{V _lhs49444=_v_43646_spare;V _rhs49445=_v_43656_j;return j::binary("+",_lhs49444,_rhs49445);})();V _assign49441=([&]()->V{V _lhs49446=j::get(_v_43642_V,([&]()->V{V _lhs49448=_v_43651_P;V _rhs49449=_v_43656_j;return j::binary("+",_lhs49448,_rhs49449);})());V _rhs49447=([&]()->V{V _lhs49450=([&]()->V{V _lhs49452=j::get(_v_43642_V,([&]()->V{V _lhs49454=_v_43652_Q;V _rhs49455=_v_43656_j;return j::binary("+",_lhs49454,_rhs49455);})());V _rhs49453=j::get(_v_43642_V,([&]()->V{V _lhs49456=_v_43651_P;V _rhs49457=_v_43656_j;return j::binary("+",_lhs49456,_rhs49457);})());return V(j::number(_lhs49452)-j::number(_rhs49453));})();V _rhs49451=_v_43655_k;return V(j::number(_lhs49450)*j::number(_rhs49451));})();return j::binary("+",_lhs49446,_rhs49447);})();return j::put(_base49442,_key49443,_assign49441);})());
}}
(void)(([&]()->V{V _receiver49458=_receiver_fn43641;V _method49459=this->_literals[311];V _method=j::get(_receiver49458,_method49459);j::Args _params49460=j::Args{_v_43642_V,_v_43646_spare,this->_v_43197_NEAR.get()};return j::call(_method,_params49460,_receiver49458);})());
(void)(([&]()->V{V _base49462=this->_v_43460_CORNERS.get();V _key49463=j::increment(_v_43649_n,1,false);V _assign49461=_v_43646_spare;return j::put(_base49462,_key49463,_assign49461);})());
(void)((_v_43646_spare=j::binary("+",_v_43646_spare,this->_v_43458_S.get())));

}


}
}
if(j::truth(([&]()->V{V _lhs49465=_v_43649_n;V _rhs49466=V(3.0);return j::binary(">=",_lhs49465,_rhs49466);})())){(void)(([&]()->V{V _receiver49467=_receiver_fn43641;V _method49468=this->_literals[301];V _method=j::get(_receiver49467,_method49468);j::Args _params49469=j::Args{_v_43642_V,j::get(this->_v_43460_CORNERS.get(),V(0.0)),j::get(this->_v_43460_CORNERS.get(),V(1.0)),j::get(this->_v_43460_CORNERS.get(),V(2.0)),_v_43647_sign};return j::call(_method,_params49469,_receiver49467);})());
}
if(j::truth(([&]()->V{V _lhs49470=_v_43649_n;V _rhs49471=V(4.0);return V(j::equal(_lhs49470,_rhs49471,true));})())){(void)(([&]()->V{V _receiver49472=_receiver_fn43641;V _method49473=this->_literals[301];V _method=j::get(_receiver49472,_method49473);j::Args _params49474=j::Args{_v_43642_V,j::get(this->_v_43460_CORNERS.get(),V(0.0)),j::get(this->_v_43460_CORNERS.get(),V(2.0)),j::get(this->_v_43460_CORNERS.get(),V(3.0)),_v_43647_sign};return j::call(_method,_params49474,_receiver49472);})());
}

}

return V{};
},6),false,"method");j::class_method(_class48453,this->_literals[301],j::function([=](const j::Args &_args_fn43657,const V &_receiver_fn43657,const V &_self_fn43657) mutable ->V{
V _v_43658_V;
V _v_43659_A;
V _v_43660_B;
V _v_43661_C;
V _v_43662_sign;
_v_43658_V=_args_fn43657[0];
_v_43659_A=_args_fn43657[1];
_v_43660_B=_args_fn43657[2];
_v_43661_C=_args_fn43657[3];
_v_43662_sign=_args_fn43657[4];
{
V _v_43663_cols;
V _v_43664_rows;
V _v_43665_z;
V _v_43666_who;
V _v_43667_set;
V _v_43668_s;
V _v_43669_id;
V _v_43670_steps;
V _v_43671_ns;
V _v_43672_tex;
V _v_43673_t;
V _v_43674_light;
V _v_43675_lx;
V _v_43676_ly;
V _v_43677_lz;
V _v_43678_amb;
V _v_43679_chars;
V _v_43680_nc;
V _v_43681_flip;
V _v_43682_D;
V _v_43683_zk;
V _v_43684_zmax;
V _v_43685_byDepth;
V _v_43686_q0;
V _v_43687_q1;
V _v_43688_q2;
V _v_43689_x0;
V _v_43690_y0;
V _v_43691_x1;
V _v_43692_y1;
V _v_43693_x2;
V _v_43694_y2;
V _v_43695_c0;
V _v_43696_c1;
V _v_43697_r0;
V _v_43698_r1;
V _v_43699_area;
V _v_43700_inv;
V _v_43701_hit;
V _pattern49475=_receiver_fn43657;
_v_43663_cols=j::get(_pattern49475,this->_literals[174]);
_v_43664_rows=j::get(_pattern49475,this->_literals[175]);
_v_43665_z=j::get(_pattern49475,this->_literals[281]);
_v_43666_who=j::get(_pattern49475,this->_literals[284]);
_v_43667_set=j::get(_pattern49475,this->_literals[37]);
_v_43668_s=j::get(_receiver_fn43657,this->_literals[292]);
_v_43669_id=j::get(_receiver_fn43657,this->_literals[297]);
_v_43670_steps=j::get(_receiver_fn43657,this->_literals[298]);
_v_43671_ns=(j::truth(_v_43670_steps)?j::get(_v_43670_steps,this->_literals[9]):V(0.0));
_v_43672_tex=j::get(_receiver_fn43657,this->_literals[299]);
_v_43673_t=j::get(_receiver_fn43657,this->_literals[293]);
_v_43674_light=j::get(_v_43667_set,this->_literals[137]);
_v_43675_lx=j::get(_v_43674_light,V(0.0));
_v_43676_ly=j::get(_v_43674_light,V(1.0));
_v_43677_lz=j::get(_v_43674_light,V(2.0));
_v_43678_amb=j::get(_v_43667_set,this->_literals[140]);
_v_43679_chars=j::get(_v_43667_set,this->_literals[154]);
_v_43680_nc=j::get(_v_43679_chars,this->_literals[9]);
_v_43681_flip=j::get(_receiver_fn43657,this->_literals[294]);
_v_43682_D=j::get(_v_43667_set,this->_literals[149]);
_v_43683_zk=j::get(_receiver_fn43657,this->_literals[296]);
_v_43684_zmax=j::get(j::get(_receiver_fn43657,this->_literals[148]),this->_literals[169]);
_v_43685_byDepth=([&]()->V{V _lhs49476=j::get(_v_43667_set,this->_literals[145]);V _rhs49477=this->_literals[92];return V(j::equal(_lhs49476,_rhs49477,true));})();
_v_43686_q0=j::get(_v_43658_V,([&]()->V{V _lhs49478=_v_43659_A;V _rhs49479=V(2.0);return j::binary("+",_lhs49478,_rhs49479);})());
_v_43687_q1=j::get(_v_43658_V,([&]()->V{V _lhs49480=_v_43660_B;V _rhs49481=V(2.0);return j::binary("+",_lhs49480,_rhs49481);})());
_v_43688_q2=j::get(_v_43658_V,([&]()->V{V _lhs49482=_v_43661_C;V _rhs49483=V(2.0);return j::binary("+",_lhs49482,_rhs49483);})());
_v_43689_x0=j::get(_v_43658_V,_v_43659_A);
_v_43690_y0=j::get(_v_43658_V,([&]()->V{V _lhs49484=_v_43659_A;V _rhs49485=V(1.0);return j::binary("+",_lhs49484,_rhs49485);})());
_v_43691_x1=j::get(_v_43658_V,_v_43660_B);
_v_43692_y1=j::get(_v_43658_V,([&]()->V{V _lhs49486=_v_43660_B;V _rhs49487=V(1.0);return j::binary("+",_lhs49486,_rhs49487);})());
_v_43693_x2=j::get(_v_43658_V,_v_43661_C);
_v_43694_y2=j::get(_v_43658_V,([&]()->V{V _lhs49488=_v_43661_C;V _rhs49489=V(1.0);return j::binary("+",_lhs49488,_rhs49489);})());
_v_43695_c0=([&]()->V{V _number49498=([&]()->V{V _lhs49499=(j::truth(([&]()->V{V _lhs49501=_v_43689_x0;V _rhs49502=_v_43691_x1;return j::binary("<",_lhs49501,_rhs49502);})())?(j::truth(([&]()->V{V _lhs49503=_v_43689_x0;V _rhs49504=_v_43693_x2;return j::binary("<",_lhs49503,_rhs49504);})())?_v_43689_x0:_v_43693_x2):(j::truth(([&]()->V{V _lhs49505=_v_43691_x1;V _rhs49506=_v_43693_x2;return j::binary("<",_lhs49505,_rhs49506);})())?_v_43691_x1:_v_43693_x2));V _rhs49500=V(0.5);return V(j::number(_lhs49499)-j::number(_rhs49500));})();return V(std::ceil(j::number(_number49498)));})();
_v_43696_c1=([&]()->V{V _number49515=([&]()->V{V _lhs49516=(j::truth(([&]()->V{V _lhs49518=_v_43689_x0;V _rhs49519=_v_43691_x1;return j::binary(">",_lhs49518,_rhs49519);})())?(j::truth(([&]()->V{V _lhs49520=_v_43689_x0;V _rhs49521=_v_43693_x2;return j::binary(">",_lhs49520,_rhs49521);})())?_v_43689_x0:_v_43693_x2):(j::truth(([&]()->V{V _lhs49522=_v_43691_x1;V _rhs49523=_v_43693_x2;return j::binary(">",_lhs49522,_rhs49523);})())?_v_43691_x1:_v_43693_x2));V _rhs49517=V(0.5);return V(j::number(_lhs49516)-j::number(_rhs49517));})();return V(std::floor(j::number(_number49515)));})();
_v_43697_r0=([&]()->V{V _number49532=([&]()->V{V _lhs49533=(j::truth(([&]()->V{V _lhs49535=_v_43690_y0;V _rhs49536=_v_43692_y1;return j::binary("<",_lhs49535,_rhs49536);})())?(j::truth(([&]()->V{V _lhs49537=_v_43690_y0;V _rhs49538=_v_43694_y2;return j::binary("<",_lhs49537,_rhs49538);})())?_v_43690_y0:_v_43694_y2):(j::truth(([&]()->V{V _lhs49539=_v_43692_y1;V _rhs49540=_v_43694_y2;return j::binary("<",_lhs49539,_rhs49540);})())?_v_43692_y1:_v_43694_y2));V _rhs49534=V(0.5);return V(j::number(_lhs49533)-j::number(_rhs49534));})();return V(std::ceil(j::number(_number49532)));})();
_v_43698_r1=([&]()->V{V _number49549=([&]()->V{V _lhs49550=(j::truth(([&]()->V{V _lhs49552=_v_43690_y0;V _rhs49553=_v_43692_y1;return j::binary(">",_lhs49552,_rhs49553);})())?(j::truth(([&]()->V{V _lhs49554=_v_43690_y0;V _rhs49555=_v_43694_y2;return j::binary(">",_lhs49554,_rhs49555);})())?_v_43690_y0:_v_43694_y2):(j::truth(([&]()->V{V _lhs49556=_v_43692_y1;V _rhs49557=_v_43694_y2;return j::binary(">",_lhs49556,_rhs49557);})())?_v_43692_y1:_v_43694_y2));V _rhs49551=V(0.5);return V(j::number(_lhs49550)-j::number(_rhs49551));})();return V(std::floor(j::number(_number49549)));})();
if(j::truth(([&]()->V{V _lhs49558=_v_43695_c0;V _rhs49559=V(0.0);return j::binary("<",_lhs49558,_rhs49559);})())){(void)((_v_43695_c0=V(0.0)));
}
if(j::truth(([&]()->V{V _lhs49561=_v_43697_r0;V _rhs49562=V(0.0);return j::binary("<",_lhs49561,_rhs49562);})())){(void)((_v_43697_r0=V(0.0)));
}
if(j::truth(([&]()->V{V _lhs49564=_v_43696_c1;V _rhs49565=_v_43663_cols;return j::binary(">=",_lhs49564,_rhs49565);})())){(void)((_v_43696_c1=([&]()->V{V _lhs49567=_v_43663_cols;V _rhs49568=V(1.0);return V(j::number(_lhs49567)-j::number(_rhs49568));})()));
}
if(j::truth(([&]()->V{V _lhs49569=_v_43698_r1;V _rhs49570=_v_43664_rows;return j::binary(">=",_lhs49569,_rhs49570);})())){(void)((_v_43698_r1=([&]()->V{V _lhs49572=_v_43664_rows;V _rhs49573=V(1.0);return V(j::number(_lhs49572)-j::number(_rhs49573));})()));
}
if(j::truth(([&]()->V{V _logical49574=([&]()->V{V _lhs49575=_v_43695_c0;V _rhs49576=_v_43696_c1;return j::binary(">",_lhs49575,_rhs49576);})();return !j::truth(_logical49574)?([&]()->V{V _lhs49577=_v_43697_r0;V _rhs49578=_v_43698_r1;return j::binary(">",_lhs49577,_rhs49578);})():_logical49574;})())){return V{};
}
_v_43699_area=([&]()->V{V _lhs49579=([&]()->V{V _lhs49581=([&]()->V{V _lhs49583=_v_43691_x1;V _rhs49584=_v_43689_x0;return V(j::number(_lhs49583)-j::number(_rhs49584));})();V _rhs49582=([&]()->V{V _lhs49585=_v_43694_y2;V _rhs49586=_v_43690_y0;return V(j::number(_lhs49585)-j::number(_rhs49586));})();return V(j::number(_lhs49581)*j::number(_rhs49582));})();V _rhs49580=([&]()->V{V _lhs49587=([&]()->V{V _lhs49589=_v_43693_x2;V _rhs49590=_v_43689_x0;return V(j::number(_lhs49589)-j::number(_rhs49590));})();V _rhs49588=([&]()->V{V _lhs49591=_v_43692_y1;V _rhs49592=_v_43690_y0;return V(j::number(_lhs49591)-j::number(_rhs49592));})();return V(j::number(_lhs49587)*j::number(_rhs49588));})();return V(j::number(_lhs49579)-j::number(_rhs49580));})();
if(j::truth(j::unary("!",_v_43699_area))){return V{};
}
_v_43700_inv=([&]()->V{V _lhs49593=V(1.0);V _rhs49594=_v_43699_area;return V(j::number(_lhs49593)/j::number(_rhs49594));})();
_v_43701_hit=V(false);
{V _v_43702_r;
_v_43702_r=_v_43697_r0;
for(;j::truth(([&]()->V{V _lhs49595=_v_43702_r;V _rhs49596=_v_43698_r1;return j::binary("<=",_lhs49595,_rhs49596);})());(void)(j::increment(_v_43702_r,1,false))){
V _v_43703_sy;
_v_43703_sy=([&]()->V{V _lhs49597=_v_43702_r;V _rhs49598=V(0.5);return j::binary("+",_lhs49597,_rhs49598);})();
{V _v_43704_cc;
_v_43704_cc=_v_43695_c0;
for(;j::truth(([&]()->V{V _lhs49599=_v_43704_cc;V _rhs49600=_v_43696_c1;return j::binary("<=",_lhs49599,_rhs49600);})());(void)(j::increment(_v_43704_cc,1,false))){
V _v_43705_sx;
V _v_43706_w0;
V _v_43707_w1;
V _v_43708_w2;
V _v_43709_q;
V _v_43710_i;
V _v_43711_a0;
V _v_43712_a1;
V _v_43713_a2;
V _v_43714_nx;
V _v_43715_ny;
V _v_43716_nz;
V _v_43717_len;
V _v_43718_v;
V _v_43720_ci;
V _v_43721_ch;
V _v_43722_shade;
_v_43705_sx=([&]()->V{V _lhs49601=_v_43704_cc;V _rhs49602=V(0.5);return j::binary("+",_lhs49601,_rhs49602);})();
_v_43706_w0=([&]()->V{V _lhs49603=([&]()->V{V _lhs49605=([&]()->V{V _lhs49607=([&]()->V{V _lhs49609=_v_43691_x1;V _rhs49610=_v_43705_sx;return V(j::number(_lhs49609)-j::number(_rhs49610));})();V _rhs49608=([&]()->V{V _lhs49611=_v_43694_y2;V _rhs49612=_v_43703_sy;return V(j::number(_lhs49611)-j::number(_rhs49612));})();return V(j::number(_lhs49607)*j::number(_rhs49608));})();V _rhs49606=([&]()->V{V _lhs49613=([&]()->V{V _lhs49615=_v_43693_x2;V _rhs49616=_v_43705_sx;return V(j::number(_lhs49615)-j::number(_rhs49616));})();V _rhs49614=([&]()->V{V _lhs49617=_v_43692_y1;V _rhs49618=_v_43703_sy;return V(j::number(_lhs49617)-j::number(_rhs49618));})();return V(j::number(_lhs49613)*j::number(_rhs49614));})();return V(j::number(_lhs49605)-j::number(_rhs49606));})();V _rhs49604=_v_43700_inv;return V(j::number(_lhs49603)*j::number(_rhs49604));})();
_v_43707_w1=([&]()->V{V _lhs49619=([&]()->V{V _lhs49621=([&]()->V{V _lhs49623=([&]()->V{V _lhs49625=_v_43693_x2;V _rhs49626=_v_43705_sx;return V(j::number(_lhs49625)-j::number(_rhs49626));})();V _rhs49624=([&]()->V{V _lhs49627=_v_43690_y0;V _rhs49628=_v_43703_sy;return V(j::number(_lhs49627)-j::number(_rhs49628));})();return V(j::number(_lhs49623)*j::number(_rhs49624));})();V _rhs49622=([&]()->V{V _lhs49629=([&]()->V{V _lhs49631=_v_43689_x0;V _rhs49632=_v_43705_sx;return V(j::number(_lhs49631)-j::number(_rhs49632));})();V _rhs49630=([&]()->V{V _lhs49633=_v_43694_y2;V _rhs49634=_v_43703_sy;return V(j::number(_lhs49633)-j::number(_rhs49634));})();return V(j::number(_lhs49629)*j::number(_rhs49630));})();return V(j::number(_lhs49621)-j::number(_rhs49622));})();V _rhs49620=_v_43700_inv;return V(j::number(_lhs49619)*j::number(_rhs49620));})();
_v_43708_w2=([&]()->V{V _lhs49635=([&]()->V{V _lhs49637=V(1.0);V _rhs49638=_v_43706_w0;return V(j::number(_lhs49637)-j::number(_rhs49638));})();V _rhs49636=_v_43707_w1;return V(j::number(_lhs49635)-j::number(_rhs49636));})();
if(j::truth(([&]()->V{V _logical49639=([&]()->V{V _logical49640=([&]()->V{V _lhs49641=_v_43706_w0;V _rhs49642=j::unary("-",V(1e-9));return j::binary("<",_lhs49641,_rhs49642);})();return !j::truth(_logical49640)?([&]()->V{V _lhs49643=_v_43707_w1;V _rhs49644=j::unary("-",V(1e-9));return j::binary("<",_lhs49643,_rhs49644);})():_logical49640;})();return !j::truth(_logical49639)?([&]()->V{V _lhs49645=_v_43708_w2;V _rhs49646=j::unary("-",V(1e-9));return j::binary("<",_lhs49645,_rhs49646);})():_logical49639;})())){continue;
}
(void)((_v_43701_hit=V(true)));
_v_43709_q=([&]()->V{V _lhs49648=([&]()->V{V _lhs49650=([&]()->V{V _lhs49652=_v_43706_w0;V _rhs49653=_v_43686_q0;return V(j::number(_lhs49652)*j::number(_rhs49653));})();V _rhs49651=([&]()->V{V _lhs49654=_v_43707_w1;V _rhs49655=_v_43687_q1;return V(j::number(_lhs49654)*j::number(_rhs49655));})();return j::binary("+",_lhs49650,_rhs49651);})();V _rhs49649=([&]()->V{V _lhs49656=_v_43708_w2;V _rhs49657=_v_43688_q2;return V(j::number(_lhs49656)*j::number(_rhs49657));})();return j::binary("+",_lhs49648,_rhs49649);})();
_v_43710_i=([&]()->V{V _lhs49658=([&]()->V{V _lhs49660=_v_43702_r;V _rhs49661=_v_43663_cols;return V(j::number(_lhs49660)*j::number(_rhs49661));})();V _rhs49659=_v_43704_cc;return j::binary("+",_lhs49658,_rhs49659);})();
if(j::truth(([&]()->V{V _lhs49662=_v_43709_q;V _rhs49663=j::get(_v_43665_z,_v_43710_i);return j::binary("<=",_lhs49662,_rhs49663);})())){continue;
}
(void)(([&]()->V{V _base49665=_v_43665_z;V _key49666=_v_43710_i;V _assign49664=_v_43709_q;return j::put(_base49665,_key49666,_assign49664);})());
(void)(([&]()->V{V _base49668=_v_43666_who;V _key49669=_v_43710_i;V _assign49667=_v_43669_id;return j::put(_base49668,_key49669,_assign49667);})());
_v_43711_a0=([&]()->V{V _lhs49670=([&]()->V{V _lhs49672=_v_43706_w0;V _rhs49673=_v_43686_q0;return V(j::number(_lhs49672)*j::number(_rhs49673));})();V _rhs49671=_v_43709_q;return V(j::number(_lhs49670)/j::number(_rhs49671));})();
_v_43712_a1=([&]()->V{V _lhs49674=([&]()->V{V _lhs49676=_v_43707_w1;V _rhs49677=_v_43687_q1;return V(j::number(_lhs49676)*j::number(_rhs49677));})();V _rhs49675=_v_43709_q;return V(j::number(_lhs49674)/j::number(_rhs49675));})();
_v_43713_a2=([&]()->V{V _lhs49678=([&]()->V{V _lhs49680=V(1.0);V _rhs49681=_v_43711_a0;return V(j::number(_lhs49680)-j::number(_rhs49681));})();V _rhs49679=_v_43712_a1;return V(j::number(_lhs49678)-j::number(_rhs49679));})();
_v_43714_nx=([&]()->V{V _lhs49682=([&]()->V{V _lhs49684=([&]()->V{V _lhs49686=_v_43711_a0;V _rhs49687=j::get(_v_43658_V,([&]()->V{V _lhs49688=_v_43659_A;V _rhs49689=V(6.0);return j::binary("+",_lhs49688,_rhs49689);})());return V(j::number(_lhs49686)*j::number(_rhs49687));})();V _rhs49685=([&]()->V{V _lhs49690=_v_43712_a1;V _rhs49691=j::get(_v_43658_V,([&]()->V{V _lhs49692=_v_43660_B;V _rhs49693=V(6.0);return j::binary("+",_lhs49692,_rhs49693);})());return V(j::number(_lhs49690)*j::number(_rhs49691));})();return j::binary("+",_lhs49684,_rhs49685);})();V _rhs49683=([&]()->V{V _lhs49694=_v_43713_a2;V _rhs49695=j::get(_v_43658_V,([&]()->V{V _lhs49696=_v_43661_C;V _rhs49697=V(6.0);return j::binary("+",_lhs49696,_rhs49697);})());return V(j::number(_lhs49694)*j::number(_rhs49695));})();return j::binary("+",_lhs49682,_rhs49683);})();
_v_43715_ny=([&]()->V{V _lhs49698=([&]()->V{V _lhs49700=([&]()->V{V _lhs49702=_v_43711_a0;V _rhs49703=j::get(_v_43658_V,([&]()->V{V _lhs49704=_v_43659_A;V _rhs49705=V(7.0);return j::binary("+",_lhs49704,_rhs49705);})());return V(j::number(_lhs49702)*j::number(_rhs49703));})();V _rhs49701=([&]()->V{V _lhs49706=_v_43712_a1;V _rhs49707=j::get(_v_43658_V,([&]()->V{V _lhs49708=_v_43660_B;V _rhs49709=V(7.0);return j::binary("+",_lhs49708,_rhs49709);})());return V(j::number(_lhs49706)*j::number(_rhs49707));})();return j::binary("+",_lhs49700,_rhs49701);})();V _rhs49699=([&]()->V{V _lhs49710=_v_43713_a2;V _rhs49711=j::get(_v_43658_V,([&]()->V{V _lhs49712=_v_43661_C;V _rhs49713=V(7.0);return j::binary("+",_lhs49712,_rhs49713);})());return V(j::number(_lhs49710)*j::number(_rhs49711));})();return j::binary("+",_lhs49698,_rhs49699);})();
_v_43716_nz=([&]()->V{V _lhs49714=([&]()->V{V _lhs49716=([&]()->V{V _lhs49718=_v_43711_a0;V _rhs49719=j::get(_v_43658_V,([&]()->V{V _lhs49720=_v_43659_A;V _rhs49721=V(8.0);return j::binary("+",_lhs49720,_rhs49721);})());return V(j::number(_lhs49718)*j::number(_rhs49719));})();V _rhs49717=([&]()->V{V _lhs49722=_v_43712_a1;V _rhs49723=j::get(_v_43658_V,([&]()->V{V _lhs49724=_v_43660_B;V _rhs49725=V(8.0);return j::binary("+",_lhs49724,_rhs49725);})());return V(j::number(_lhs49722)*j::number(_rhs49723));})();return j::binary("+",_lhs49716,_rhs49717);})();V _rhs49715=([&]()->V{V _lhs49726=_v_43713_a2;V _rhs49727=j::get(_v_43658_V,([&]()->V{V _lhs49728=_v_43661_C;V _rhs49729=V(8.0);return j::binary("+",_lhs49728,_rhs49729);})());return V(j::number(_lhs49726)*j::number(_rhs49727));})();return j::binary("+",_lhs49714,_rhs49715);})();
_v_43717_len=([&]()->V{V _number49740=([&]()->V{V _lhs49741=([&]()->V{V _lhs49743=([&]()->V{V _lhs49745=_v_43714_nx;V _rhs49746=_v_43714_nx;return V(j::number(_lhs49745)*j::number(_rhs49746));})();V _rhs49744=([&]()->V{V _lhs49747=_v_43715_ny;V _rhs49748=_v_43715_ny;return V(j::number(_lhs49747)*j::number(_rhs49748));})();return j::binary("+",_lhs49743,_rhs49744);})();V _rhs49742=([&]()->V{V _lhs49749=_v_43716_nz;V _rhs49750=_v_43716_nz;return V(j::number(_lhs49749)*j::number(_rhs49750));})();return j::binary("+",_lhs49741,_rhs49742);})();return V(std::sqrt(j::number(_number49740)));})();
_v_43718_v=(j::truth(([&]()->V{V _lhs49751=_v_43717_len;V _rhs49752=V(0.0);return j::binary(">",_lhs49751,_rhs49752);})())?([&]()->V{V _lhs49753=([&]()->V{V _lhs49755=_v_43662_sign;V _rhs49756=([&]()->V{V _lhs49757=([&]()->V{V _lhs49759=([&]()->V{V _lhs49761=_v_43714_nx;V _rhs49762=_v_43675_lx;return V(j::number(_lhs49761)*j::number(_rhs49762));})();V _rhs49760=([&]()->V{V _lhs49763=_v_43715_ny;V _rhs49764=_v_43676_ly;return V(j::number(_lhs49763)*j::number(_rhs49764));})();return j::binary("+",_lhs49759,_rhs49760);})();V _rhs49758=([&]()->V{V _lhs49765=_v_43716_nz;V _rhs49766=_v_43677_lz;return V(j::number(_lhs49765)*j::number(_rhs49766));})();return j::binary("+",_lhs49757,_rhs49758);})();return V(j::number(_lhs49755)*j::number(_rhs49756));})();V _rhs49754=_v_43717_len;return V(j::number(_lhs49753)/j::number(_rhs49754));})():V(0.0));
(void)((_v_43718_v=([&]()->V{V _lhs49768=([&]()->V{V _lhs49770=(j::truth(([&]()->V{V _lhs49772=_v_43718_v;V _rhs49773=V(0.0);return j::binary(">",_lhs49772,_rhs49773);})())?_v_43718_v:V(0.0));V _rhs49771=([&]()->V{V _lhs49774=V(1.0);V _rhs49775=_v_43678_amb;return V(j::number(_lhs49774)-j::number(_rhs49775));})();return V(j::number(_lhs49770)*j::number(_rhs49771));})();V _rhs49769=_v_43678_amb;return j::binary("+",_lhs49768,_rhs49769);})()));
if(j::truth(_v_43672_tex)){
V _v_43719_g;
_v_43719_g=([&]()->V{V _callee49808=_v_43672_tex;return j::call(_callee49808,j::Args{([&]()->V{V _lhs49776=([&]()->V{V _lhs49778=([&]()->V{V _lhs49780=_v_43711_a0;V _rhs49781=j::get(_v_43658_V,([&]()->V{V _lhs49782=_v_43659_A;V _rhs49783=V(9.0);return j::binary("+",_lhs49782,_rhs49783);})());return V(j::number(_lhs49780)*j::number(_rhs49781));})();V _rhs49779=([&]()->V{V _lhs49784=_v_43712_a1;V _rhs49785=j::get(_v_43658_V,([&]()->V{V _lhs49786=_v_43660_B;V _rhs49787=V(9.0);return j::binary("+",_lhs49786,_rhs49787);})());return V(j::number(_lhs49784)*j::number(_rhs49785));})();return j::binary("+",_lhs49778,_rhs49779);})();V _rhs49777=([&]()->V{V _lhs49788=_v_43713_a2;V _rhs49789=j::get(_v_43658_V,([&]()->V{V _lhs49790=_v_43661_C;V _rhs49791=V(9.0);return j::binary("+",_lhs49790,_rhs49791);})());return V(j::number(_lhs49788)*j::number(_rhs49789));})();return j::binary("+",_lhs49776,_rhs49777);})(),([&]()->V{V _lhs49792=([&]()->V{V _lhs49794=([&]()->V{V _lhs49796=_v_43711_a0;V _rhs49797=j::get(_v_43658_V,([&]()->V{V _lhs49798=_v_43659_A;V _rhs49799=V(10.0);return j::binary("+",_lhs49798,_rhs49799);})());return V(j::number(_lhs49796)*j::number(_rhs49797));})();V _rhs49795=([&]()->V{V _lhs49800=_v_43712_a1;V _rhs49801=j::get(_v_43658_V,([&]()->V{V _lhs49802=_v_43660_B;V _rhs49803=V(10.0);return j::binary("+",_lhs49802,_rhs49803);})());return V(j::number(_lhs49800)*j::number(_rhs49801));})();return j::binary("+",_lhs49794,_rhs49795);})();V _rhs49793=([&]()->V{V _lhs49804=_v_43713_a2;V _rhs49805=j::get(_v_43658_V,([&]()->V{V _lhs49806=_v_43661_C;V _rhs49807=V(10.0);return j::binary("+",_lhs49806,_rhs49807);})());return V(j::number(_lhs49804)*j::number(_rhs49805));})();return j::binary("+",_lhs49792,_rhs49793);})(),_v_43673_t});})();
(void)((_v_43718_v=j::binary("*",_v_43718_v,(j::truth(([&]()->V{V _lhs49810=_v_43719_g;V _rhs49811=V(0.0);return j::binary(">",_lhs49810,_rhs49811);})())?(j::truth(([&]()->V{V _lhs49812=_v_43719_g;V _rhs49813=V(1.0);return j::binary("<",_lhs49812,_rhs49813);})())?_v_43719_g:V(1.0)):V(0.0)))));

}

_v_43720_ci=([&]()->V{V _lhs49814=([&]()->V{V _lhs49816=_v_43718_v;V _rhs49817=_v_43680_nc;return V(j::number(_lhs49816)*j::number(_rhs49817));})();V _rhs49815=V(0.0);return V(int(j::i32(_lhs49814)|j::i32(_rhs49815)));})();
if(j::truth(([&]()->V{V _lhs49818=_v_43720_ci;V _rhs49819=_v_43680_nc;return j::binary(">=",_lhs49818,_rhs49819);})())){(void)((_v_43720_ci=([&]()->V{V _lhs49821=_v_43680_nc;V _rhs49822=V(1.0);return V(j::number(_lhs49821)-j::number(_rhs49822));})()));
}
_v_43721_ch=j::get(_v_43679_chars,(j::truth(_v_43681_flip)?([&]()->V{V _lhs49823=([&]()->V{V _lhs49825=_v_43680_nc;V _rhs49826=V(1.0);return V(j::number(_lhs49825)-j::number(_rhs49826));})();V _rhs49824=_v_43720_ci;return V(j::number(_lhs49823)-j::number(_rhs49824));})():_v_43720_ci));
if(j::truth(([&]()->V{V _lhs49827=_v_43721_ch;V _rhs49828=V(32.0);return V(j::equal(_lhs49827,_rhs49828,true));})())){continue;
}
_v_43722_shade=this->_v_42441_NONE.get();
if(j::truth(_v_43670_steps)){
V _v_43723_g;
V _v_43724_si;
_v_43723_g=(j::truth(_v_43685_byDepth)?(j::truth(_v_43683_zk)?([&]()->V{V _lhs49829=([&]()->V{V _lhs49831=_v_43684_zmax;V _rhs49832=([&]()->V{V _lhs49833=([&]()->V{V _lhs49835=V(1.0);V _rhs49836=_v_43709_q;return V(j::number(_lhs49835)/j::number(_rhs49836));})();V _rhs49834=_v_43682_D;return V(j::number(_lhs49833)-j::number(_rhs49834));})();return V(j::number(_lhs49831)-j::number(_rhs49832));})();V _rhs49830=_v_43683_zk;return V(j::number(_lhs49829)*j::number(_rhs49830));})():V(1.0)):_v_43718_v);
(void)((_v_43723_g=(j::truth(([&]()->V{V _lhs49838=_v_43723_g;V _rhs49839=V(0.0);return j::binary("<",_lhs49838,_rhs49839);})())?V(0.0):_v_43723_g)));
_v_43724_si=([&]()->V{V _lhs49840=([&]()->V{V _lhs49842=_v_43723_g;V _rhs49843=_v_43671_ns;return V(j::number(_lhs49842)*j::number(_rhs49843));})();V _rhs49841=V(0.0);return V(int(j::i32(_lhs49840)|j::i32(_rhs49841)));})();
(void)((_v_43722_shade=j::get(_v_43670_steps,(j::truth(([&]()->V{V _lhs49845=_v_43724_si;V _rhs49846=_v_43671_ns;return j::binary(">=",_lhs49845,_rhs49846);})())?([&]()->V{V _lhs49847=_v_43671_ns;V _rhs49848=V(1.0);return V(j::number(_lhs49847)-j::number(_rhs49848));})():_v_43724_si))));

}

(void)(([&]()->V{V _receiver49849=_v_43668_s;V _method49850=this->_literals[309];V _method=j::get(_receiver49849,_method49850);j::Args _params49851=j::Args{_v_43710_i,_v_43721_ch,_v_43722_shade};return j::call(_method,_params49851,_receiver49849);})());

}
}

}
}
if(j::truth(_v_43701_hit)){(void)(([&]()->V{V _base49853=_receiver_fn43657;V _key49854=this->_literals[300];V _assign49852=V(true);return j::put(_base49853,_key49854,_assign49852);})());
}

}

return V{};
},5),false,"method");j::class_method(_class48453,this->_literals[313],j::function([=](const j::Args &_args_fn43725,const V &_receiver_fn43725,const V &_self_fn43725) mutable ->V{
V _v_43726_b;
V _v_43727_p;
V _v_43728_k;
_v_43726_b=_args_fn43725[0];
_v_43727_p=_args_fn43725[1];
_v_43728_k=_args_fn43725[2];
{
V _v_43729_cols;
V _v_43730_rows;
V _v_43731_aspect;
V _v_43732_set;
V _v_43733_z;
V _v_43734_who;
V _v_43735_D;
V _v_43736_f;
V _v_43737_d;
V _v_43738_r;
V _v_43739_col;
V _v_43740_row;
V _v_43741_i;
V _v_43742_q;
V _v_43743_l;
V _v_43744_len;
V _v_43745_v;
V _v_43746_chars;
V _v_43747_nc;
V _v_43748_ci;
V _v_43749_ch;
V _v_43750_steps;
V _v_43751_shade;
V _pattern49855=_receiver_fn43725;
_v_43729_cols=j::get(_pattern49855,this->_literals[174]);
_v_43730_rows=j::get(_pattern49855,this->_literals[175]);
_v_43731_aspect=j::get(_pattern49855,this->_literals[176]);
_v_43732_set=j::get(_pattern49855,this->_literals[37]);
_v_43733_z=j::get(_pattern49855,this->_literals[281]);
_v_43734_who=j::get(_pattern49855,this->_literals[284]);
_v_43735_D=j::get(_v_43732_set,this->_literals[149]);
_v_43736_f=j::get(_receiver_fn43725,this->_literals[295]);
_v_43737_d=([&]()->V{V _lhs49856=j::get(_v_43727_p,V(2.0));V _rhs49857=_v_43735_D;return j::binary("+",_lhs49856,_rhs49857);})();
if(j::truth(j::unary("!",([&]()->V{V _lhs49858=_v_43737_d;V _rhs49859=this->_v_43197_NEAR.get();return j::binary(">=",_lhs49858,_rhs49859);})()))){return V{};
}
_v_43738_r=([&]()->V{V _lhs49860=([&]()->V{V _receiver49862=_v_43726_b;V _method49863=this->_literals[79];V _method=j::get(_receiver49862,_method49863);j::Args _params49864=j::Args{j::get(_receiver_fn43725,this->_literals[293])};return j::call(_method,_params49864,_receiver49862);})();V _rhs49861=_v_43728_k;return V(j::number(_lhs49860)*j::number(_rhs49861));})();
if(j::truth(j::unary("!",([&]()->V{V _lhs49865=([&]()->V{V _lhs49867=([&]()->V{V _lhs49869=_v_43736_f;V _rhs49870=_v_43738_r;return V(j::number(_lhs49869)*j::number(_rhs49870));})();V _rhs49868=_v_43737_d;return V(j::number(_lhs49867)/j::number(_rhs49868));})();V _rhs49866=V(1.5);return j::binary("<",_lhs49865,_rhs49866);})()))){return V{};
}
_v_43739_col=([&]()->V{V _number49879=([&]()->V{V _lhs49880=([&]()->V{V _lhs49882=_v_43729_cols;V _rhs49883=V(2.0);return V(j::number(_lhs49882)/j::number(_rhs49883));})();V _rhs49881=([&]()->V{V _lhs49884=([&]()->V{V _lhs49886=_v_43736_f;V _rhs49887=j::get(_v_43727_p,V(0.0));return V(j::number(_lhs49886)*j::number(_rhs49887));})();V _rhs49885=_v_43737_d;return V(j::number(_lhs49884)/j::number(_rhs49885));})();return j::binary("+",_lhs49880,_rhs49881);})();return V(std::floor(j::number(_number49879)));})();
_v_43740_row=([&]()->V{V _number49898=([&]()->V{V _lhs49899=([&]()->V{V _lhs49901=_v_43730_rows;V _rhs49902=V(2.0);return V(j::number(_lhs49901)/j::number(_rhs49902));})();V _rhs49900=([&]()->V{V _lhs49903=([&]()->V{V _lhs49905=([&]()->V{V _lhs49907=_v_43736_f;V _rhs49908=j::get(_v_43727_p,V(1.0));return V(j::number(_lhs49907)*j::number(_rhs49908));})();V _rhs49906=_v_43737_d;return V(j::number(_lhs49905)/j::number(_rhs49906));})();V _rhs49904=_v_43731_aspect;return V(j::number(_lhs49903)/j::number(_rhs49904));})();return V(j::number(_lhs49899)-j::number(_rhs49900));})();return V(std::floor(j::number(_number49898)));})();
if(j::truth(j::unary("!",([&]()->V{V _logical49909=([&]()->V{V _logical49910=([&]()->V{V _logical49911=([&]()->V{V _lhs49912=_v_43739_col;V _rhs49913=V(0.0);return j::binary(">=",_lhs49912,_rhs49913);})();return j::truth(_logical49911)?([&]()->V{V _lhs49914=_v_43739_col;V _rhs49915=_v_43729_cols;return j::binary("<",_lhs49914,_rhs49915);})():_logical49911;})();return j::truth(_logical49910)?([&]()->V{V _lhs49916=_v_43740_row;V _rhs49917=V(0.0);return j::binary(">=",_lhs49916,_rhs49917);})():_logical49910;})();return j::truth(_logical49909)?([&]()->V{V _lhs49918=_v_43740_row;V _rhs49919=_v_43730_rows;return j::binary("<",_lhs49918,_rhs49919);})():_logical49909;})()))){return V{};
}
_v_43741_i=([&]()->V{V _lhs49920=([&]()->V{V _lhs49922=_v_43740_row;V _rhs49923=_v_43729_cols;return V(j::number(_lhs49922)*j::number(_rhs49923));})();V _rhs49921=_v_43739_col;return j::binary("+",_lhs49920,_rhs49921);})();
_v_43742_q=([&]()->V{V _lhs49924=V(1.0);V _rhs49925=([&]()->V{V _receiver49930=j::builtin("Math");V _method49931=this->_literals[73];V _method=j::get(_receiver49930,_method49931);j::Args _params49932=j::Args{this->_v_43197_NEAR.get(),([&]()->V{V _lhs49926=_v_43737_d;V _rhs49927=_v_43738_r;return V(j::number(_lhs49926)-j::number(_rhs49927));})()};return j::call(_method,_params49932,_receiver49930);})();return V(j::number(_lhs49924)/j::number(_rhs49925));})();
if(j::truth(([&]()->V{V _lhs49933=_v_43742_q;V _rhs49934=j::get(_v_43733_z,_v_43741_i);return j::binary("<=",_lhs49933,_rhs49934);})())){return V{};
}
(void)(([&]()->V{V _base49936=_v_43733_z;V _key49937=_v_43741_i;V _assign49935=_v_43742_q;return j::put(_base49936,_key49937,_assign49935);})());
(void)(([&]()->V{V _base49939=_v_43734_who;V _key49940=_v_43741_i;V _assign49938=j::get(_receiver_fn43725,this->_literals[297]);return j::put(_base49939,_key49940,_assign49938);})());
_v_43743_l=j::get(_v_43732_set,this->_literals[137]);
_v_43744_len=([&]()->V{V _number49941=j::get(_v_43727_p,V(0.0));V _number49942=j::get(_v_43727_p,V(1.0));V _number49943=_v_43737_d;return V(std::hypot(j::number(_number49941),j::number(_number49942),j::number(_number49943)));})();
_v_43745_v=([&]()->V{V _lhs49944=j::unary("-",([&]()->V{V _lhs49946=([&]()->V{V _lhs49948=([&]()->V{V _lhs49950=j::get(_v_43727_p,V(0.0));V _rhs49951=j::get(_v_43743_l,V(0.0));return V(j::number(_lhs49950)*j::number(_rhs49951));})();V _rhs49949=([&]()->V{V _lhs49952=j::get(_v_43727_p,V(1.0));V _rhs49953=j::get(_v_43743_l,V(1.0));return V(j::number(_lhs49952)*j::number(_rhs49953));})();return j::binary("+",_lhs49948,_rhs49949);})();V _rhs49947=([&]()->V{V _lhs49954=_v_43737_d;V _rhs49955=j::get(_v_43743_l,V(2.0));return V(j::number(_lhs49954)*j::number(_rhs49955));})();return j::binary("+",_lhs49946,_rhs49947);})());V _rhs49945=_v_43744_len;return V(j::number(_lhs49944)/j::number(_rhs49945));})();
(void)((_v_43745_v=([&]()->V{V _lhs49957=([&]()->V{V _lhs49959=(j::truth(([&]()->V{V _lhs49961=_v_43745_v;V _rhs49962=V(0.0);return j::binary(">",_lhs49961,_rhs49962);})())?_v_43745_v:V(0.0));V _rhs49960=([&]()->V{V _lhs49963=V(1.0);V _rhs49964=j::get(_v_43732_set,this->_literals[140]);return V(j::number(_lhs49963)-j::number(_rhs49964));})();return V(j::number(_lhs49959)*j::number(_rhs49960));})();V _rhs49958=j::get(_v_43732_set,this->_literals[140]);return j::binary("+",_lhs49957,_rhs49958);})()));
_v_43746_chars=j::get(_v_43732_set,this->_literals[154]);
_v_43747_nc=j::get(_v_43746_chars,this->_literals[9]);
_v_43748_ci=([&]()->V{V _lhs49965=([&]()->V{V _lhs49967=_v_43745_v;V _rhs49968=_v_43747_nc;return V(j::number(_lhs49967)*j::number(_rhs49968));})();V _rhs49966=V(0.0);return V(int(j::i32(_lhs49965)|j::i32(_rhs49966)));})();
if(j::truth(([&]()->V{V _lhs49969=_v_43748_ci;V _rhs49970=_v_43747_nc;return j::binary(">=",_lhs49969,_rhs49970);})())){(void)((_v_43748_ci=([&]()->V{V _lhs49972=_v_43747_nc;V _rhs49973=V(1.0);return V(j::number(_lhs49972)-j::number(_rhs49973));})()));
}
_v_43749_ch=j::get(_v_43746_chars,(j::truth(j::get(_receiver_fn43725,this->_literals[294]))?([&]()->V{V _lhs49974=([&]()->V{V _lhs49976=_v_43747_nc;V _rhs49977=V(1.0);return V(j::number(_lhs49976)-j::number(_rhs49977));})();V _rhs49975=_v_43748_ci;return V(j::number(_lhs49974)-j::number(_rhs49975));})():_v_43748_ci));
if(j::truth(([&]()->V{V _lhs49978=_v_43749_ch;V _rhs49979=V(32.0);return V(j::equal(_lhs49978,_rhs49979,true));})())){return V{};
}
_v_43750_steps=j::get(_receiver_fn43725,this->_literals[298]);
_v_43751_shade=this->_v_42441_NONE.get();
if(j::truth(_v_43750_steps)){
V _v_43752_ns;
V _v_43753_g;
V _v_43754_si;
_v_43752_ns=j::get(_v_43750_steps,this->_literals[9]);
_v_43753_g=(j::truth(([&]()->V{V _lhs49980=j::get(_v_43732_set,this->_literals[145]);V _rhs49981=this->_literals[92];return V(j::equal(_lhs49980,_rhs49981,true));})())?(j::truth(j::get(_receiver_fn43725,this->_literals[296]))?([&]()->V{V _lhs49982=([&]()->V{V _lhs49984=j::get(j::get(_receiver_fn43725,this->_literals[148]),this->_literals[169]);V _rhs49985=j::get(_v_43727_p,V(2.0));return V(j::number(_lhs49984)-j::number(_rhs49985));})();V _rhs49983=j::get(_receiver_fn43725,this->_literals[296]);return V(j::number(_lhs49982)*j::number(_rhs49983));})():V(1.0)):_v_43745_v);
(void)((_v_43753_g=(j::truth(([&]()->V{V _lhs49987=_v_43753_g;V _rhs49988=V(0.0);return j::binary("<",_lhs49987,_rhs49988);})())?V(0.0):_v_43753_g)));
_v_43754_si=([&]()->V{V _lhs49989=([&]()->V{V _lhs49991=_v_43753_g;V _rhs49992=_v_43752_ns;return V(j::number(_lhs49991)*j::number(_rhs49992));})();V _rhs49990=V(0.0);return V(int(j::i32(_lhs49989)|j::i32(_rhs49990)));})();
(void)((_v_43751_shade=j::get(_v_43750_steps,(j::truth(([&]()->V{V _lhs49994=_v_43754_si;V _rhs49995=_v_43752_ns;return j::binary(">=",_lhs49994,_rhs49995);})())?([&]()->V{V _lhs49996=_v_43752_ns;V _rhs49997=V(1.0);return V(j::number(_lhs49996)-j::number(_rhs49997));})():_v_43754_si))));

}

(void)(([&]()->V{V _receiver49998=j::get(_receiver_fn43725,this->_literals[292]);V _method49999=this->_literals[309];V _method=j::get(_receiver49998,_method49999);j::Args _params50000=j::Args{_v_43741_i,_v_43749_ch,_v_43751_shade};return j::call(_method,_params50000,_receiver49998);})());

}

return V{};
},3),false,"method");j::class_method(_class48453,this->_literals[27],j::function([=](const j::Args &_args_fn43755,const V &_receiver_fn43755,const V &_self_fn43755) mutable ->V{
V _v_43756_V;
V _v_43757_mesh;
V _v_43758_m;
V _v_43759_slack;
_v_43756_V=_args_fn43755[0];
_v_43757_mesh=_args_fn43755[1];
_v_43758_m=_args_fn43755[2];
_v_43759_slack=_args_fn43755[3];
{
V _v_43760_edges;
V _v_43761_sides;
V _v_43762_D;
_v_43760_edges=j::get(_v_43757_mesh,this->_literals[27]);
_v_43761_sides=j::get(_v_43757_mesh,this->_literals[57]);
_v_43762_D=j::get(j::get(_receiver_fn43755,this->_literals[37]),this->_literals[149]);
{V _v_43763_e;
_v_43763_e=V(0.0);
for(;j::truth(([&]()->V{V _lhs50001=_v_43763_e;V _rhs50002=j::get(_v_43760_edges,this->_literals[9]);return j::binary("<",_lhs50001,_rhs50002);})());(void)((_v_43763_e=j::binary("+",_v_43763_e,V(2.0))))){
V _v_43764_A;
V _v_43765_B;
V _v_43766_X;
V _v_43767_Y;
V _v_43768_Z;
_v_43764_A=([&]()->V{V _lhs50004=j::get(_v_43760_edges,_v_43763_e);V _rhs50005=this->_v_43458_S.get();return V(j::number(_lhs50004)*j::number(_rhs50005));})();
_v_43765_B=([&]()->V{V _lhs50006=j::get(_v_43760_edges,([&]()->V{V _lhs50008=_v_43763_e;V _rhs50009=V(1.0);return j::binary("+",_lhs50008,_rhs50009);})());V _rhs50007=this->_v_43458_S.get();return V(j::number(_lhs50006)*j::number(_rhs50007));})();
_v_43766_X=j::get(_v_43756_V,([&]()->V{V _lhs50010=_v_43764_A;V _rhs50011=V(3.0);return j::binary("+",_lhs50010,_rhs50011);})());
_v_43767_Y=j::get(_v_43756_V,([&]()->V{V _lhs50012=_v_43764_A;V _rhs50013=V(4.0);return j::binary("+",_lhs50012,_rhs50013);})());
_v_43768_Z=([&]()->V{V _lhs50014=j::get(_v_43756_V,([&]()->V{V _lhs50016=_v_43764_A;V _rhs50017=V(5.0);return j::binary("+",_lhs50016,_rhs50017);})());V _rhs50015=_v_43762_D;return j::binary("+",_lhs50014,_rhs50015);})();
if(j::truth(j::get(_v_43757_mesh,this->_literals[56]))){
V _v_43769_j;
V _v_43770_a;
V _v_43771_b;
_v_43769_j=([&]()->V{V _lhs50018=_v_43763_e;V _rhs50019=V(3.0);return V(j::number(_lhs50018)*j::number(_rhs50019));})();
_v_43770_a=([&]()->V{V _lhs50020=([&]()->V{V _lhs50022=([&]()->V{V _lhs50024=([&]()->V{V _lhs50026=([&]()->V{V _lhs50028=([&]()->V{V _lhs50030=j::get(_v_43758_m,V(0.0));V _rhs50031=j::get(_v_43761_sides,_v_43769_j);return V(j::number(_lhs50030)*j::number(_rhs50031));})();V _rhs50029=([&]()->V{V _lhs50032=j::get(_v_43758_m,V(1.0));V _rhs50033=j::get(_v_43761_sides,([&]()->V{V _lhs50034=_v_43769_j;V _rhs50035=V(1.0);return j::binary("+",_lhs50034,_rhs50035);})());return V(j::number(_lhs50032)*j::number(_rhs50033));})();return j::binary("+",_lhs50028,_rhs50029);})();V _rhs50027=([&]()->V{V _lhs50036=j::get(_v_43758_m,V(2.0));V _rhs50037=j::get(_v_43761_sides,([&]()->V{V _lhs50038=_v_43769_j;V _rhs50039=V(2.0);return j::binary("+",_lhs50038,_rhs50039);})());return V(j::number(_lhs50036)*j::number(_rhs50037));})();return j::binary("+",_lhs50026,_rhs50027);})();V _rhs50025=_v_43766_X;return V(j::number(_lhs50024)*j::number(_rhs50025));})();V _rhs50023=([&]()->V{V _lhs50040=([&]()->V{V _lhs50042=([&]()->V{V _lhs50044=([&]()->V{V _lhs50046=j::get(_v_43758_m,V(3.0));V _rhs50047=j::get(_v_43761_sides,_v_43769_j);return V(j::number(_lhs50046)*j::number(_rhs50047));})();V _rhs50045=([&]()->V{V _lhs50048=j::get(_v_43758_m,V(4.0));V _rhs50049=j::get(_v_43761_sides,([&]()->V{V _lhs50050=_v_43769_j;V _rhs50051=V(1.0);return j::binary("+",_lhs50050,_rhs50051);})());return V(j::number(_lhs50048)*j::number(_rhs50049));})();return j::binary("+",_lhs50044,_rhs50045);})();V _rhs50043=([&]()->V{V _lhs50052=j::get(_v_43758_m,V(5.0));V _rhs50053=j::get(_v_43761_sides,([&]()->V{V _lhs50054=_v_43769_j;V _rhs50055=V(2.0);return j::binary("+",_lhs50054,_rhs50055);})());return V(j::number(_lhs50052)*j::number(_rhs50053));})();return j::binary("+",_lhs50042,_rhs50043);})();V _rhs50041=_v_43767_Y;return V(j::number(_lhs50040)*j::number(_rhs50041));})();return j::binary("+",_lhs50022,_rhs50023);})();V _rhs50021=([&]()->V{V _lhs50056=([&]()->V{V _lhs50058=([&]()->V{V _lhs50060=([&]()->V{V _lhs50062=j::get(_v_43758_m,V(6.0));V _rhs50063=j::get(_v_43761_sides,_v_43769_j);return V(j::number(_lhs50062)*j::number(_rhs50063));})();V _rhs50061=([&]()->V{V _lhs50064=j::get(_v_43758_m,V(7.0));V _rhs50065=j::get(_v_43761_sides,([&]()->V{V _lhs50066=_v_43769_j;V _rhs50067=V(1.0);return j::binary("+",_lhs50066,_rhs50067);})());return V(j::number(_lhs50064)*j::number(_rhs50065));})();return j::binary("+",_lhs50060,_rhs50061);})();V _rhs50059=([&]()->V{V _lhs50068=j::get(_v_43758_m,V(8.0));V _rhs50069=j::get(_v_43761_sides,([&]()->V{V _lhs50070=_v_43769_j;V _rhs50071=V(2.0);return j::binary("+",_lhs50070,_rhs50071);})());return V(j::number(_lhs50068)*j::number(_rhs50069));})();return j::binary("+",_lhs50058,_rhs50059);})();V _rhs50057=_v_43768_Z;return V(j::number(_lhs50056)*j::number(_rhs50057));})();return j::binary("+",_lhs50020,_rhs50021);})();
_v_43771_b=([&]()->V{V _lhs50072=([&]()->V{V _lhs50074=([&]()->V{V _lhs50076=([&]()->V{V _lhs50078=([&]()->V{V _lhs50080=([&]()->V{V _lhs50082=j::get(_v_43758_m,V(0.0));V _rhs50083=j::get(_v_43761_sides,([&]()->V{V _lhs50084=_v_43769_j;V _rhs50085=V(3.0);return j::binary("+",_lhs50084,_rhs50085);})());return V(j::number(_lhs50082)*j::number(_rhs50083));})();V _rhs50081=([&]()->V{V _lhs50086=j::get(_v_43758_m,V(1.0));V _rhs50087=j::get(_v_43761_sides,([&]()->V{V _lhs50088=_v_43769_j;V _rhs50089=V(4.0);return j::binary("+",_lhs50088,_rhs50089);})());return V(j::number(_lhs50086)*j::number(_rhs50087));})();return j::binary("+",_lhs50080,_rhs50081);})();V _rhs50079=([&]()->V{V _lhs50090=j::get(_v_43758_m,V(2.0));V _rhs50091=j::get(_v_43761_sides,([&]()->V{V _lhs50092=_v_43769_j;V _rhs50093=V(5.0);return j::binary("+",_lhs50092,_rhs50093);})());return V(j::number(_lhs50090)*j::number(_rhs50091));})();return j::binary("+",_lhs50078,_rhs50079);})();V _rhs50077=_v_43766_X;return V(j::number(_lhs50076)*j::number(_rhs50077));})();V _rhs50075=([&]()->V{V _lhs50094=([&]()->V{V _lhs50096=([&]()->V{V _lhs50098=([&]()->V{V _lhs50100=j::get(_v_43758_m,V(3.0));V _rhs50101=j::get(_v_43761_sides,([&]()->V{V _lhs50102=_v_43769_j;V _rhs50103=V(3.0);return j::binary("+",_lhs50102,_rhs50103);})());return V(j::number(_lhs50100)*j::number(_rhs50101));})();V _rhs50099=([&]()->V{V _lhs50104=j::get(_v_43758_m,V(4.0));V _rhs50105=j::get(_v_43761_sides,([&]()->V{V _lhs50106=_v_43769_j;V _rhs50107=V(4.0);return j::binary("+",_lhs50106,_rhs50107);})());return V(j::number(_lhs50104)*j::number(_rhs50105));})();return j::binary("+",_lhs50098,_rhs50099);})();V _rhs50097=([&]()->V{V _lhs50108=j::get(_v_43758_m,V(5.0));V _rhs50109=j::get(_v_43761_sides,([&]()->V{V _lhs50110=_v_43769_j;V _rhs50111=V(5.0);return j::binary("+",_lhs50110,_rhs50111);})());return V(j::number(_lhs50108)*j::number(_rhs50109));})();return j::binary("+",_lhs50096,_rhs50097);})();V _rhs50095=_v_43767_Y;return V(j::number(_lhs50094)*j::number(_rhs50095));})();return j::binary("+",_lhs50074,_rhs50075);})();V _rhs50073=([&]()->V{V _lhs50112=([&]()->V{V _lhs50114=([&]()->V{V _lhs50116=([&]()->V{V _lhs50118=j::get(_v_43758_m,V(6.0));V _rhs50119=j::get(_v_43761_sides,([&]()->V{V _lhs50120=_v_43769_j;V _rhs50121=V(3.0);return j::binary("+",_lhs50120,_rhs50121);})());return V(j::number(_lhs50118)*j::number(_rhs50119));})();V _rhs50117=([&]()->V{V _lhs50122=j::get(_v_43758_m,V(7.0));V _rhs50123=j::get(_v_43761_sides,([&]()->V{V _lhs50124=_v_43769_j;V _rhs50125=V(4.0);return j::binary("+",_lhs50124,_rhs50125);})());return V(j::number(_lhs50122)*j::number(_rhs50123));})();return j::binary("+",_lhs50116,_rhs50117);})();V _rhs50115=([&]()->V{V _lhs50126=j::get(_v_43758_m,V(8.0));V _rhs50127=j::get(_v_43761_sides,([&]()->V{V _lhs50128=_v_43769_j;V _rhs50129=V(5.0);return j::binary("+",_lhs50128,_rhs50129);})());return V(j::number(_lhs50126)*j::number(_rhs50127));})();return j::binary("+",_lhs50114,_rhs50115);})();V _rhs50113=_v_43768_Z;return V(j::number(_lhs50112)*j::number(_rhs50113));})();return j::binary("+",_lhs50072,_rhs50073);})();
if(j::truth(j::unary("!",([&]()->V{V _logical50130=([&]()->V{V _lhs50131=_v_43770_a;V _rhs50132=V(0.0);return j::binary("<",_lhs50131,_rhs50132);})();return !j::truth(_logical50130)?([&]()->V{V _lhs50133=_v_43771_b;V _rhs50134=V(0.0);return j::binary("<",_lhs50133,_rhs50134);})():_logical50130;})()))){continue;
}

}

(void)(([&]()->V{V _receiver50143=_receiver_fn43755;V _method50144=this->_literals[310];V _method=j::get(_receiver50143,_method50144);j::Args _params50145=j::Args{_v_43766_X,_v_43767_Y,_v_43768_Z,j::get(_v_43756_V,([&]()->V{V _lhs50135=_v_43765_B;V _rhs50136=V(3.0);return j::binary("+",_lhs50135,_rhs50136);})()),j::get(_v_43756_V,([&]()->V{V _lhs50137=_v_43765_B;V _rhs50138=V(4.0);return j::binary("+",_lhs50137,_rhs50138);})()),([&]()->V{V _lhs50139=j::get(_v_43756_V,([&]()->V{V _lhs50141=_v_43765_B;V _rhs50142=V(5.0);return j::binary("+",_lhs50141,_rhs50142);})());V _rhs50140=_v_43762_D;return j::binary("+",_lhs50139,_rhs50140);})(),V(0.0),_v_43759_slack,j::get(_v_43757_mesh,this->_literals[58])};return j::call(_method,_params50145,_receiver50143);})());

}
}

}

return V{};
},4),false,"method");j::class_method(_class48453,this->_literals[310],j::function([=](const j::Args &_args_fn43772,const V &_receiver_fn43772,const V &_self_fn43772) mutable ->V{
V _v_43773_x0;
V _v_43774_y0;
V _v_43775_d0;
V _v_43776_x1;
V _v_43777_y1;
V _v_43778_d1;
V _v_43779_ch;
V _v_43780_slack;
V _v_43781_corner;
_v_43773_x0=_args_fn43772[0];
_v_43774_y0=_args_fn43772[1];
_v_43775_d0=_args_fn43772[2];
_v_43776_x1=_args_fn43772[3];
_v_43777_y1=_args_fn43772[4];
_v_43778_d1=_args_fn43772[5];
_v_43779_ch=_args_fn43772[6];
_v_43780_slack=_args_fn43772[7];
_v_43781_corner=_args_fn43772[8];
{
V _v_43784_cols;
V _v_43785_rows;
V _v_43786_aspect;
V _v_43787_z;
V _v_43788_who;
V _v_43789_marks;
V _v_43790_f;
V _v_43791_q0;
V _v_43792_q1;
V _v_43793_ax;
V _v_43794_ay;
V _v_43795_dx;
V _v_43796_dy;
V _v_43797_code;
V _v_43800_k0;
V _v_43801_k1;
V _v_43802_s;
V _v_43803_id;
V _v_43804_steps;
V _v_43805_ns;
V _v_43806_zk;
V _v_43807_zmax;
V _v_43808_byDepth;
V _v_43809_D;
V _v_43810_n;
if(j::truth(j::unary("!",([&]()->V{V _lhs50146=_v_43775_d0;V _rhs50147=this->_v_43197_NEAR.get();return j::binary(">=",_lhs50146,_rhs50147);})()))){
V _v_43782_k;
if(j::truth(j::unary("!",([&]()->V{V _lhs50148=_v_43778_d1;V _rhs50149=this->_v_43197_NEAR.get();return j::binary(">=",_lhs50148,_rhs50149);})()))){return V{};
}
_v_43782_k=([&]()->V{V _lhs50150=([&]()->V{V _lhs50152=this->_v_43197_NEAR.get();V _rhs50153=_v_43775_d0;return V(j::number(_lhs50152)-j::number(_rhs50153));})();V _rhs50151=([&]()->V{V _lhs50154=_v_43778_d1;V _rhs50155=_v_43775_d0;return V(j::number(_lhs50154)-j::number(_rhs50155));})();return V(j::number(_lhs50150)/j::number(_rhs50151));})();
(void)(((_v_43773_x0=j::binary("+",_v_43773_x0,([&]()->V{V _lhs50157=([&]()->V{V _lhs50159=_v_43776_x1;V _rhs50160=_v_43773_x0;return V(j::number(_lhs50159)-j::number(_rhs50160));})();V _rhs50158=_v_43782_k;return V(j::number(_lhs50157)*j::number(_rhs50158));})())),(_v_43774_y0=j::binary("+",_v_43774_y0,([&]()->V{V _lhs50162=([&]()->V{V _lhs50164=_v_43777_y1;V _rhs50165=_v_43774_y0;return V(j::number(_lhs50164)-j::number(_rhs50165));})();V _rhs50163=_v_43782_k;return V(j::number(_lhs50162)*j::number(_rhs50163));})())),(_v_43775_d0=this->_v_43197_NEAR.get())));

}
else {if(j::truth(j::unary("!",([&]()->V{V _lhs50167=_v_43778_d1;V _rhs50168=this->_v_43197_NEAR.get();return j::binary(">=",_lhs50167,_rhs50168);})()))){
V _v_43783_k;
_v_43783_k=([&]()->V{V _lhs50169=([&]()->V{V _lhs50171=this->_v_43197_NEAR.get();V _rhs50172=_v_43778_d1;return V(j::number(_lhs50171)-j::number(_rhs50172));})();V _rhs50170=([&]()->V{V _lhs50173=_v_43775_d0;V _rhs50174=_v_43778_d1;return V(j::number(_lhs50173)-j::number(_rhs50174));})();return V(j::number(_lhs50169)/j::number(_rhs50170));})();
(void)(((_v_43776_x1=j::binary("+",_v_43776_x1,([&]()->V{V _lhs50176=([&]()->V{V _lhs50178=_v_43773_x0;V _rhs50179=_v_43776_x1;return V(j::number(_lhs50178)-j::number(_rhs50179));})();V _rhs50177=_v_43783_k;return V(j::number(_lhs50176)*j::number(_rhs50177));})())),(_v_43777_y1=j::binary("+",_v_43777_y1,([&]()->V{V _lhs50181=([&]()->V{V _lhs50183=_v_43774_y0;V _rhs50184=_v_43777_y1;return V(j::number(_lhs50183)-j::number(_rhs50184));})();V _rhs50182=_v_43783_k;return V(j::number(_lhs50181)*j::number(_rhs50182));})())),(_v_43778_d1=this->_v_43197_NEAR.get())));

}

}
V _pattern50186=_receiver_fn43772;
_v_43784_cols=j::get(_pattern50186,this->_literals[174]);
_v_43785_rows=j::get(_pattern50186,this->_literals[175]);
_v_43786_aspect=j::get(_pattern50186,this->_literals[176]);
_v_43787_z=j::get(_pattern50186,this->_literals[281]);
_v_43788_who=j::get(_pattern50186,this->_literals[284]);
_v_43789_marks=j::get(_pattern50186,this->_literals[285]);
_v_43790_f=j::get(_receiver_fn43772,this->_literals[295]);
_v_43791_q0=([&]()->V{V _lhs50187=V(1.0);V _rhs50188=_v_43775_d0;return V(j::number(_lhs50187)/j::number(_rhs50188));})();
_v_43792_q1=([&]()->V{V _lhs50189=V(1.0);V _rhs50190=_v_43778_d1;return V(j::number(_lhs50189)/j::number(_rhs50190));})();
_v_43793_ax=([&]()->V{V _lhs50191=([&]()->V{V _lhs50193=_v_43784_cols;V _rhs50194=V(2.0);return V(j::number(_lhs50193)/j::number(_rhs50194));})();V _rhs50192=([&]()->V{V _lhs50195=([&]()->V{V _lhs50197=_v_43790_f;V _rhs50198=_v_43773_x0;return V(j::number(_lhs50197)*j::number(_rhs50198));})();V _rhs50196=_v_43791_q0;return V(j::number(_lhs50195)*j::number(_rhs50196));})();return j::binary("+",_lhs50191,_rhs50192);})();
_v_43794_ay=([&]()->V{V _lhs50199=([&]()->V{V _lhs50201=_v_43785_rows;V _rhs50202=V(2.0);return V(j::number(_lhs50201)/j::number(_rhs50202));})();V _rhs50200=([&]()->V{V _lhs50203=([&]()->V{V _lhs50205=([&]()->V{V _lhs50207=_v_43790_f;V _rhs50208=_v_43774_y0;return V(j::number(_lhs50207)*j::number(_rhs50208));})();V _rhs50206=_v_43791_q0;return V(j::number(_lhs50205)*j::number(_rhs50206));})();V _rhs50204=_v_43786_aspect;return V(j::number(_lhs50203)/j::number(_rhs50204));})();return V(j::number(_lhs50199)-j::number(_rhs50200));})();
_v_43795_dx=([&]()->V{V _lhs50209=([&]()->V{V _lhs50211=([&]()->V{V _lhs50213=_v_43784_cols;V _rhs50214=V(2.0);return V(j::number(_lhs50213)/j::number(_rhs50214));})();V _rhs50212=([&]()->V{V _lhs50215=([&]()->V{V _lhs50217=_v_43790_f;V _rhs50218=_v_43776_x1;return V(j::number(_lhs50217)*j::number(_rhs50218));})();V _rhs50216=_v_43792_q1;return V(j::number(_lhs50215)*j::number(_rhs50216));})();return j::binary("+",_lhs50211,_rhs50212);})();V _rhs50210=_v_43793_ax;return V(j::number(_lhs50209)-j::number(_rhs50210));})();
_v_43796_dy=([&]()->V{V _lhs50219=([&]()->V{V _lhs50221=([&]()->V{V _lhs50223=_v_43785_rows;V _rhs50224=V(2.0);return V(j::number(_lhs50223)/j::number(_rhs50224));})();V _rhs50222=([&]()->V{V _lhs50225=([&]()->V{V _lhs50227=([&]()->V{V _lhs50229=_v_43790_f;V _rhs50230=_v_43777_y1;return V(j::number(_lhs50229)*j::number(_rhs50230));})();V _rhs50228=_v_43792_q1;return V(j::number(_lhs50227)*j::number(_rhs50228));})();V _rhs50226=_v_43786_aspect;return V(j::number(_lhs50225)/j::number(_rhs50226));})();return V(j::number(_lhs50221)-j::number(_rhs50222));})();V _rhs50220=_v_43794_ay;return V(j::number(_lhs50219)-j::number(_rhs50220));})();
if(j::truth(j::unary("!",([&]()->V{V _receiver50237=j::builtin("Number");V _method50238=this->_literals[6];V _method=j::get(_receiver50237,_method50238);j::Args _params50239=j::Args{([&]()->V{V _lhs50231=([&]()->V{V _lhs50233=([&]()->V{V _lhs50235=_v_43793_ax;V _rhs50236=_v_43794_ay;return j::binary("+",_lhs50235,_rhs50236);})();V _rhs50234=_v_43795_dx;return j::binary("+",_lhs50233,_rhs50234);})();V _rhs50232=_v_43796_dy;return j::binary("+",_lhs50231,_rhs50232);})()};return j::call(_method,_params50239,_receiver50237);})()))){return V{};
}
_v_43797_code=_v_43779_ch;
if(j::truth(j::unary("!",_v_43797_code))){
V _v_43798_w;
V _v_43799_h;
_v_43798_w=([&]()->V{V _number50240=_v_43795_dx;return V(std::fabs(j::number(_number50240)));})();
_v_43799_h=([&]()->V{V _lhs50241=([&]()->V{V _number50243=_v_43796_dy;return V(std::fabs(j::number(_number50243)));})();V _rhs50242=_v_43786_aspect;return V(j::number(_lhs50241)*j::number(_rhs50242));})();
(void)((_v_43797_code=(j::truth(([&]()->V{V _lhs50245=_v_43799_h;V _rhs50246=([&]()->V{V _lhs50247=_v_43798_w;V _rhs50248=V(0.8);return V(j::number(_lhs50247)*j::number(_rhs50248));})();return j::binary("<",_lhs50245,_rhs50246);})())?V(45.0):(j::truth(([&]()->V{V _lhs50249=_v_43799_h;V _rhs50250=([&]()->V{V _lhs50251=_v_43798_w;V _rhs50252=V(3.0);return V(j::number(_lhs50251)*j::number(_rhs50252));})();return j::binary(">",_lhs50249,_rhs50250);})())?V(124.0):(j::truth(([&]()->V{V _lhs50253=([&]()->V{V _lhs50255=_v_43795_dx;V _rhs50256=_v_43796_dy;return V(j::number(_lhs50255)*j::number(_rhs50256));})();V _rhs50254=V(0.0);return j::binary("<",_lhs50253,_rhs50254);})())?V(47.0):V(92.0))))));

}

(void)(([&]()->V{V _base50258=this->_v_43461_CUT.get();V _key50259=V(0.0);V _assign50257=V(0.0);return j::put(_base50258,_key50259,_assign50257);})());
(void)(([&]()->V{V _base50261=this->_v_43461_CUT.get();V _key50262=V(1.0);V _assign50260=V(1.0);return j::put(_base50261,_key50262,_assign50260);})());
(void)(([&]()->V{V _callee50263=this->_v_43824_span.get();return j::call(_callee50263,j::Args{_v_43793_ax,_v_43795_dx,_v_43784_cols});})());
(void)(([&]()->V{V _callee50264=this->_v_43824_span.get();return j::call(_callee50264,j::Args{_v_43794_ay,_v_43796_dy,_v_43785_rows});})());
_v_43800_k0=j::get(this->_v_43461_CUT.get(),V(0.0));
_v_43801_k1=j::get(this->_v_43461_CUT.get(),V(1.0));
if(j::truth(j::unary("!",([&]()->V{V _lhs50265=_v_43800_k0;V _rhs50266=_v_43801_k1;return j::binary("<=",_lhs50265,_rhs50266);})()))){return V{};
}
_v_43802_s=j::get(_receiver_fn43772,this->_literals[292]);
_v_43803_id=j::get(_receiver_fn43772,this->_literals[297]);
_v_43804_steps=j::get(_receiver_fn43772,this->_literals[298]);
_v_43805_ns=(j::truth(_v_43804_steps)?j::get(_v_43804_steps,this->_literals[9]):V(0.0));
_v_43806_zk=j::get(_receiver_fn43772,this->_literals[296]);
_v_43807_zmax=j::get(j::get(_receiver_fn43772,this->_literals[148]),this->_literals[169]);
_v_43808_byDepth=([&]()->V{V _lhs50267=j::get(j::get(_receiver_fn43772,this->_literals[37]),this->_literals[145]);V _rhs50268=this->_literals[92];return V(j::equal(_lhs50267,_rhs50268,true));})();
_v_43809_D=j::get(j::get(_receiver_fn43772,this->_literals[37]),this->_literals[149]);
_v_43810_n=([&]()->V{V _number50280=([&]()->V{V _lhs50281=([&]()->V{V _receiver50287=j::builtin("Math");V _method50288=this->_literals[73];V _method=j::get(_receiver50287,_method50288);j::Args _params50289=j::Args{([&]()->V{V _number50283=_v_43795_dx;return V(std::fabs(j::number(_number50283)));})(),([&]()->V{V _number50284=_v_43796_dy;return V(std::fabs(j::number(_number50284)));})()};return j::call(_method,_params50289,_receiver50287);})();V _rhs50282=([&]()->V{V _lhs50290=_v_43801_k1;V _rhs50291=_v_43800_k0;return V(j::number(_lhs50290)-j::number(_rhs50291));})();return V(j::number(_lhs50281)*j::number(_rhs50282));})();return V(std::ceil(j::number(_number50280)));})();
{V _v_43811_i;
_v_43811_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs50292=_v_43811_i;V _rhs50293=_v_43810_n;return j::binary("<=",_lhs50292,_rhs50293);})());(void)(j::increment(_v_43811_i,1,false))){
V _v_43812_k;
V _v_43813_col;
V _v_43814_row;
V _v_43815_cell;
V _v_43816_q;
V _v_43817_zc;
V _v_43818_shade;
V _v_43821_end;
V _v_43822_mine;
V _v_43823_was;
_v_43812_k=(j::truth(_v_43810_n)?([&]()->V{V _lhs50294=_v_43800_k0;V _rhs50295=([&]()->V{V _lhs50296=([&]()->V{V _lhs50298=([&]()->V{V _lhs50300=_v_43801_k1;V _rhs50301=_v_43800_k0;return V(j::number(_lhs50300)-j::number(_rhs50301));})();V _rhs50299=_v_43811_i;return V(j::number(_lhs50298)*j::number(_rhs50299));})();V _rhs50297=_v_43810_n;return V(j::number(_lhs50296)/j::number(_rhs50297));})();return j::binary("+",_lhs50294,_rhs50295);})():_v_43800_k0);
_v_43813_col=([&]()->V{V _number50306=([&]()->V{V _lhs50307=_v_43793_ax;V _rhs50308=([&]()->V{V _lhs50309=_v_43795_dx;V _rhs50310=_v_43812_k;return V(j::number(_lhs50309)*j::number(_rhs50310));})();return j::binary("+",_lhs50307,_rhs50308);})();return V(std::floor(j::number(_number50306)));})();
_v_43814_row=([&]()->V{V _number50315=([&]()->V{V _lhs50316=_v_43794_ay;V _rhs50317=([&]()->V{V _lhs50318=_v_43796_dy;V _rhs50319=_v_43812_k;return V(j::number(_lhs50318)*j::number(_rhs50319));})();return j::binary("+",_lhs50316,_rhs50317);})();return V(std::floor(j::number(_number50315)));})();
if(j::truth(([&]()->V{V _logical50320=([&]()->V{V _logical50321=([&]()->V{V _logical50322=([&]()->V{V _lhs50323=_v_43813_col;V _rhs50324=V(0.0);return j::binary("<",_lhs50323,_rhs50324);})();return !j::truth(_logical50322)?([&]()->V{V _lhs50325=_v_43813_col;V _rhs50326=_v_43784_cols;return j::binary(">=",_lhs50325,_rhs50326);})():_logical50322;})();return !j::truth(_logical50321)?([&]()->V{V _lhs50327=_v_43814_row;V _rhs50328=V(0.0);return j::binary("<",_lhs50327,_rhs50328);})():_logical50321;})();return !j::truth(_logical50320)?([&]()->V{V _lhs50329=_v_43814_row;V _rhs50330=_v_43785_rows;return j::binary(">=",_lhs50329,_rhs50330);})():_logical50320;})())){continue;
}
_v_43815_cell=([&]()->V{V _lhs50331=([&]()->V{V _lhs50333=_v_43814_row;V _rhs50334=_v_43784_cols;return V(j::number(_lhs50333)*j::number(_rhs50334));})();V _rhs50332=_v_43813_col;return j::binary("+",_lhs50331,_rhs50332);})();
_v_43816_q=([&]()->V{V _lhs50335=_v_43791_q0;V _rhs50336=([&]()->V{V _lhs50337=([&]()->V{V _lhs50339=_v_43792_q1;V _rhs50340=_v_43791_q0;return V(j::number(_lhs50339)-j::number(_rhs50340));})();V _rhs50338=_v_43812_k;return V(j::number(_lhs50337)*j::number(_rhs50338));})();return j::binary("+",_lhs50335,_rhs50336);})();
_v_43817_zc=j::get(_v_43787_z,_v_43815_cell);
if(j::truth(([&]()->V{V _logical50341=([&]()->V{V _lhs50342=_v_43817_zc;V _rhs50343=V(0.0);return j::binary(">",_lhs50342,_rhs50343);})();return j::truth(_logical50341)?(j::truth(([&]()->V{V _lhs50344=j::get(_v_43788_who,_v_43815_cell);V _rhs50345=_v_43803_id;return V(j::equal(_lhs50344,_rhs50345,true));})())?([&]()->V{V _lhs50346=([&]()->V{V _lhs50348=([&]()->V{V _lhs50350=V(1.0);V _rhs50351=_v_43816_q;return V(j::number(_lhs50350)/j::number(_rhs50351));})();V _rhs50349=([&]()->V{V _lhs50352=V(1.0);V _rhs50353=_v_43817_zc;return V(j::number(_lhs50352)/j::number(_rhs50353));})();return V(j::number(_lhs50348)-j::number(_rhs50349));})();V _rhs50347=_v_43780_slack;return j::binary(">",_lhs50346,_rhs50347);})():([&]()->V{V _lhs50354=_v_43816_q;V _rhs50355=_v_43817_zc;return j::binary("<",_lhs50354,_rhs50355);})()):_logical50341;})())){continue;
}
if(j::truth(([&]()->V{V _lhs50356=_v_43816_q;V _rhs50357=_v_43817_zc;return j::binary(">",_lhs50356,_rhs50357);})())){(void)(([&]()->V{V _base50359=_v_43787_z;V _key50360=_v_43815_cell;V _assign50358=_v_43816_q;return j::put(_base50359,_key50360,_assign50358);})());
}
(void)(([&]()->V{V _base50362=_v_43788_who;V _key50363=_v_43815_cell;V _assign50361=_v_43803_id;return j::put(_base50362,_key50363,_assign50361);})());
_v_43818_shade=this->_v_42441_NONE.get();
if(j::truth(_v_43804_steps)){
V _v_43819_g;
V _v_43820_si;
_v_43819_g=(j::truth(_v_43808_byDepth)?(j::truth(_v_43806_zk)?([&]()->V{V _lhs50364=([&]()->V{V _lhs50366=_v_43807_zmax;V _rhs50367=([&]()->V{V _lhs50368=([&]()->V{V _lhs50370=V(1.0);V _rhs50371=_v_43816_q;return V(j::number(_lhs50370)/j::number(_rhs50371));})();V _rhs50369=_v_43809_D;return V(j::number(_lhs50368)-j::number(_rhs50369));})();return V(j::number(_lhs50366)-j::number(_rhs50367));})();V _rhs50365=_v_43806_zk;return V(j::number(_lhs50364)*j::number(_rhs50365));})():V(1.0)):V(1.0));
(void)((_v_43819_g=(j::truth(([&]()->V{V _lhs50373=_v_43819_g;V _rhs50374=V(0.0);return j::binary("<",_lhs50373,_rhs50374);})())?V(0.0):_v_43819_g)));
_v_43820_si=([&]()->V{V _lhs50375=([&]()->V{V _lhs50377=_v_43819_g;V _rhs50378=_v_43805_ns;return V(j::number(_lhs50377)*j::number(_rhs50378));})();V _rhs50376=V(0.0);return V(int(j::i32(_lhs50375)|j::i32(_rhs50376)));})();
(void)((_v_43818_shade=j::get(_v_43804_steps,(j::truth(([&]()->V{V _lhs50380=_v_43820_si;V _rhs50381=_v_43805_ns;return j::binary(">=",_lhs50380,_rhs50381);})())?([&]()->V{V _lhs50382=_v_43805_ns;V _rhs50383=V(1.0);return V(j::number(_lhs50382)-j::number(_rhs50383));})():_v_43820_si))));

}

_v_43821_end=(j::truth(([&]()->V{V _lhs50384=_v_43811_i;V _rhs50385=V(0.0);return V(j::equal(_lhs50384,_rhs50385,true));})())?([&]()->V{V _lhs50386=_v_43800_k0;V _rhs50387=V(0.0);return V(j::equal(_lhs50386,_rhs50387,true));})():([&]()->V{V _logical50388=([&]()->V{V _lhs50389=_v_43811_i;V _rhs50390=_v_43810_n;return V(j::equal(_lhs50389,_rhs50390,true));})();return j::truth(_logical50388)?([&]()->V{V _lhs50391=_v_43801_k1;V _rhs50392=V(1.0);return V(j::equal(_lhs50391,_rhs50392,true));})():_logical50388;})());
_v_43822_mine=([&]()->V{V _lhs50393=j::get(_v_43789_marks,_v_43815_cell);V _rhs50394=_v_43803_id;return V(j::equal(_lhs50393,_rhs50394,true));})();
_v_43823_was=j::get(j::get(_v_43802_s,this->_literals[154]),_v_43815_cell);
(void)(([&]()->V{V _receiver50403=_v_43802_s;V _method50404=this->_literals[309];V _method=j::get(_receiver50403,_method50404);j::Args _params50405=j::Args{_v_43815_cell,(j::truth(([&]()->V{V _logical50395=_v_43822_mine;return j::truth(_logical50395)?([&]()->V{V _logical50396=([&]()->V{V _lhs50397=_v_43823_was;V _rhs50398=V(43.0);return V(j::equal(_lhs50397,_rhs50398,true));})();return !j::truth(_logical50396)?([&]()->V{V _logical50399=([&]()->V{V _logical50400=_v_43781_corner;return j::truth(_logical50400)?_v_43821_end:_logical50400;})();return j::truth(_logical50399)?([&]()->V{V _lhs50401=_v_43823_was;V _rhs50402=_v_43797_code;return V(!j::equal(_lhs50401,_rhs50402,true));})():_logical50399;})():_logical50396;})():_logical50395;})())?V(43.0):_v_43797_code),_v_43818_shade};return j::call(_method,_params50405,_receiver50403);})());
(void)(([&]()->V{V _base50407=_v_43789_marks;V _key50408=_v_43815_cell;V _assign50406=_v_43803_id;return j::put(_base50407,_key50408,_assign50406);})());

}
}

}

return V{};
},9),false,"method");}
this->_v_43841_VIEWS.get()=([&]()->V{V _callee50409=j::builtin("WeakMap");return j::construct(_callee50409,j::Args{});})();
this->_v_43842_same.get()=j::function([=](const j::Args &_args_fn43843,const V &_receiver_fn43843,const V &_self_fn43843) mutable ->V{
V _v_43844_a;
j::Cell _v_43845_b;
_v_43844_a=_args_fn43843[0];
_v_43845_b.get()=_args_fn43843[1];
return ([&]()->V{V _logical50410=([&]()->V{V _lhs50411=j::get(_v_43844_a,this->_literals[9]);V _rhs50412=j::get(_v_43845_b.get(),this->_literals[9]);return V(j::equal(_lhs50411,_rhs50412,true));})();return j::truth(_logical50410)?([&]()->V{V _receiver50415=_v_43844_a;V _method50416=this->_literals[10];V _method=j::get(_receiver50415,_method50416);j::Args _params50417=j::Args{j::function([=](const j::Args &_args_fn43846,const V &_receiver_fn43846,const V &_self_fn43846) mutable ->V{
V _v_43847_s;
V _v_43848_i;
_v_43847_s=_args_fn43846[0];
_v_43848_i=_args_fn43846[1];
return ([&]()->V{V _lhs50413=_v_43847_s;V _rhs50414=j::get(_v_43845_b.get(),_v_43848_i);return V(j::equal(_lhs50413,_rhs50414,true));})();
return V{};
},2)};return j::call(_method,_params50417,_receiver50415);})():_logical50410;})();
return V{};
},2);
this->_v_43869_usedColors.get()=j::function([=](const j::Args &_args_fn43870,const V &_receiver_fn43870,const V &_self_fn43870) mutable ->V{
V _v_43871_bodies;
_v_43871_bodies=_args_fn43870[0];
return ([&]()->V{j::Args _array50418;for(const auto &_value:j::elements(([&]()->V{V _callee50426=j::builtin("Set");return j::construct(_callee50426,j::Args{([&]()->V{V _receiver50419=([&]()->V{V _receiver50422=([&]()->V{V _callee50425=this->_v_43271_leaves.get();return j::call(_callee50425,j::Args{_v_43871_bodies});})();V _method50423=this->_literals[14];V _method=j::get(_receiver50422,_method50423);j::Args _params50424=j::Args{j::function([=](const j::Args &_args_fn43872,const V &_receiver_fn43872,const V &_self_fn43872) mutable ->V{
V _v_43873_b;
_v_43873_b=_args_fn43872[0];
return j::get(_v_43873_b,this->_literals[25]);
return V{};
},1)};return j::call(_method,_params50424,_receiver50422);})();V _method50420=this->_literals[65];V _method=j::get(_receiver50419,_method50420);j::Args _params50421=j::Args{j::function([=](const j::Args &_args_fn43874,const V &_receiver_fn43874,const V &_self_fn43874) mutable ->V{
V _v_43875_c;
_v_43875_c=_args_fn43874[0];
return j::unary("!",j::unary("!",_v_43875_c));
return V{};
},1)};return j::call(_method,_params50421,_receiver50419);})()});})()))_array50418.push_back(_value);return j::array(std::move(_array50418));})();
return V{};
},1);
this->_v_43883_tally.get()=j::function([=](const j::Args &_args_fn43884,const V &_receiver_fn43884,const V &_self_fn43884) mutable ->V{
V _v_43885_bodies;
V _v_43886_set;
_v_43885_bodies=_args_fn43884[0];
_v_43886_set=_args_fn43884[1];
return (j::truth(j::get(_v_43886_set,this->_literals[147]))?([&]()->V{std::u16string _text50427;_text50427+=u"a fade of ";_text50427+=j::string(j::get(_v_43886_set,this->_literals[146]));_text50427+=u" shades";return V(std::move(_text50427));})():([&]()->V{std::u16string _text50428;_text50428+=u"";_text50428+=j::string(j::get(([&]()->V{V _callee50429=this->_v_43869_usedColors.get();return j::call(_callee50429,j::Args{_v_43885_bodies});})(),this->_literals[9]));_text50428+=u" colours in ";_text50428+=j::string(j::get(_v_43886_set,this->_literals[146]));_text50428+=u" shades each";return V(std::move(_text50428));})());
return V{};
},2);
this->_v_43934_one.get()=j::function([=](const j::Args &_args_fn43935,const V &_receiver_fn43935,const V &_self_fn43935) mutable ->V{
V _v_43936_v;
_v_43936_v=_args_fn43935[0];
return ([&]()->V{V _logical50430=([&]()->V{V _logical50431=([&]()->V{V _lhs50432=_v_43936_v;V _rhs50433=V::null();return V(!j::equal(_lhs50432,_rhs50433,true));})();return j::truth(_logical50431)?([&]()->V{V _lhs50434=j::unary("typeof",_v_43936_v);V _rhs50435=this->_literals[15];return V(j::equal(_lhs50434,_rhs50435,true));})():_logical50431;})();return j::truth(_logical50430)?([&]()->V{V _receiver50436=this->_v_42590_BODIES.get();V _method50437=this->_literals[166];V _method=j::get(_receiver50436,_method50437);j::Args _params50438=j::Args{_v_43936_v};return j::call(_method,_params50438,_receiver50436);})():_logical50430;})();
return V{};
},1);
}
};
}
std::unique_ptr<Module> new_kit_shapes3d(){return std::make_unique<Generated_kit_shapes3d>();}
}
