// Native source generated from src/kit/materials.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_materials final:j::Module {
j::Cell _v_20623_EMPTY;
j::Cell _v_20624_INK;
j::Cell _v_20625_MAX;
j::Cell _v_20626_NONE;
j::Cell _v_20627_Surface;
j::Cell _v_20628_TAU;
j::Cell _v_20629_and;
j::Cell _v_20630_clamp;
j::Cell _v_20631_namedColors;
j::Cell _v_20632_fail;
j::Cell _v_20633_fract;
j::Cell _v_20634_hash;
j::Cell _v_20635_isHex;
j::Cell _v_20636_lerp;
j::Cell _v_20637_materialColors;
j::Cell _v_20638_piece;
j::Cell _v_20639_ramps;
j::Cell _v_20640_sample;
j::Cell _v_20641_shadeChar;
j::Cell _v_20642_smoothstep;
j::Cell _v_20643_specOf;
j::Cell _v_20644_spread;
j::Cell _v_20645_suggest;
j::Cell _v_20646_isObject;
j::Cell _v_20649_show;
j::Cell _v_20652_optionsOf;
j::Cell _v_20660_or;
j::Cell _v_20663_numberOf;
j::Cell _v_20672_wordOrNumber;
j::Cell _v_20682_periodOf;
j::Cell _v_20688_wordOf;
j::Cell _v_20696_boolOf;
j::Cell _v_20701_seedOf;
j::Cell _v_20706_charOf;
j::Cell _v_20711_rampOf;
j::Cell _v_20716_palettes;
j::Cell _v_20717_colorsOf;
j::Cell _v_20725_ANCHORS;
j::Cell _v_20726_SIZES;
j::Cell _v_20727_ASPECT;
j::Cell _v_20728_isArea;
j::Cell _v_20731_isPointOn;
j::Cell _v_20734_spotOf;
j::Cell _v_20746_makeArea;
j::Cell _v_20758_areaOf;
j::Cell _v_20762_PLACE_KEYS;
j::Cell _v_20763_checkPlace;
j::Cell _v_20773_roomOf;
j::Cell _v_20779_boxOf;
j::Cell _v_20800_unitTest;
j::Cell _v_20810_placedOf;
j::Cell _v_20815_unitShape;
j::Cell _v_20837_inPolygon;
j::Cell _v_20850_segmentDistance;
j::Cell _v_20864_pointsOf;
j::Cell _v_20874_FONT;
j::Cell _v_20875_area;
j::Cell _v_21015_numbers;
j::Cell _v_21022_sky;
j::Cell _v_21024_ground;
j::Cell _v_21041_union;
j::Cell _v_21066_subtract;
j::Cell _v_21093_intersect;
j::Cell _v_21118_FILLS;
j::Cell _v_21119_inside;
j::Cell _v_21149_cup;
j::Cell _v_21165_mug;
j::Cell _v_21223_bottle;
j::Cell _v_21238_straw;
j::Cell _v_21258_box;
j::Cell _v_21264_ball;
j::Cell _v_21270_blob;
j::Cell _v_21283_CLOUD_RATIO;
j::Cell _v_21284_PUFFS;
j::Cell _v_21285_cloud;
j::Cell _v_21298_flame;
j::Cell _v_21306_leaf;
j::Cell _v_21313_heart;
j::Cell _v_21322_star;
j::Cell _v_21337_moon;
j::Cell _v_21344_fish;
j::Cell _v_21363_house;
j::Cell _v_21401_lamp;
j::Cell _v_21439_SAMPLES;
j::Cell _v_21440_cellsOf;
j::Cell _v_21533_fringeChar;
j::Cell _v_21540_edgeChar;
j::Cell _v_21568_isMaterial;
j::Cell _v_21571_makeMaterial;
j::Cell _v_21577_code;
j::Cell _v_21580_SPACE;
j::Cell _v_21581_tiled;
j::Cell _v_21604_lap;
j::Cell _v_21610_highlights;
j::Cell _v_21611_SHADES;
j::Cell _v_21612_BODY;
j::Cell _v_21613_water;
j::Cell _v_21669_glass;
j::Cell _v_21739_fire;
j::Cell _v_21770_hazeMaterial;
j::Cell _v_21797_smoke;
j::Cell _v_21803_cloudChar;
j::Cell _v_21823_cloudMaterial;
j::Cell _v_21840_metal;
j::Cell _v_21872_wood;
j::Cell _v_21909_grass;
j::Cell _v_21943_lawn;
j::Cell _v_21979_sand;
j::Cell _v_22006_lava;
j::Cell _v_22045_ice;
j::Cell _v_22095_haloOf;
j::Cell _v_22117_neon;
j::Cell _v_22151_solid;
j::Cell _v_22181_gradientFill;
j::Cell _v_22209_patterns;
j::Cell _v_22210_pattern;
j::Cell _v_22243_ceramic;
j::Cell _v_22284_starfield;
j::Cell _v_22307_material;
j::Cell _v_22336_printable;
j::Cell _v_22341_colorIn;
j::Cell _v_22347_isEmission;
j::Cell _v_22350_eachParticle;
j::Cell _v_22363_columnsOf;
j::Cell _v_22368_bubbles;
j::Cell _v_22402_springPoint;
j::Cell _v_22409_plume;
j::Cell _v_22447_steam;
j::Cell _v_22479_sparks;
j::Cell _v_22510_rain;
j::Cell _v_22545_snow;
j::Cell _v_22575_emission;
j::Cell _v_22611_stopsIn;
j::Cell _v_22614_pageHalf;
j::Cell _v_22628_texture;
j::Cell _v_22660_isPart;
j::Cell _v_22663_MOVES;
j::Cell _v_22664_moved;
j::Cell _v_22682_frameWindow;
j::Cell _v_22725_shape;
j::Cell _v_22776_emit;
j::Cell _v_22795_loopOf;
j::Cell _v_22805_partsOf;
j::Cell _v_22813_colorsFor;
j::Cell _v_22829_partsPalette;
j::Cell _v_22834_stage;
j::Cell _v_22856_staged;
j::Cell _v_22857_drawParts;
j::Cell _v_22879_SPEC_KEYS;
j::Cell _v_22880_picture;
j::Cell _v_22922_waterGlass;
std::vector<V> _literals;
Generated_kit_materials():_v_20623_EMPTY(this->slot("EMPTY")),_v_20624_INK(this->slot("INK")),_v_20625_MAX(this->slot("MAX")),_v_20626_NONE(this->slot("NONE")),_v_20627_Surface(this->slot("Surface")),_v_20628_TAU(this->slot("TAU")),_v_20629_and(this->slot("and")),_v_20630_clamp(this->slot("clamp")),_v_20631_namedColors(this->slot("namedColors")),_v_20632_fail(this->slot("fail")),_v_20633_fract(this->slot("fract")),_v_20634_hash(this->slot("hash")),_v_20635_isHex(this->slot("isHex")),_v_20636_lerp(this->slot("lerp")),_v_20637_materialColors(this->slot("materialColors")),_v_20638_piece(this->slot("piece")),_v_20639_ramps(this->slot("ramps")),_v_20640_sample(this->slot("sample")),_v_20641_shadeChar(this->slot("shadeChar")),_v_20642_smoothstep(this->slot("smoothstep")),_v_20643_specOf(this->slot("specOf")),_v_20644_spread(this->slot("spread")),_v_20645_suggest(this->slot("suggest")),_v_20646_isObject(this->slot("isObject")),_v_20649_show(this->slot("show")),_v_20652_optionsOf(this->slot("optionsOf")),_v_20660_or(this->slot("or")),_v_20663_numberOf(this->slot("numberOf")),_v_20672_wordOrNumber(this->slot("wordOrNumber")),_v_20682_periodOf(this->slot("periodOf")),_v_20688_wordOf(this->slot("wordOf")),_v_20696_boolOf(this->slot("boolOf")),_v_20701_seedOf(this->slot("seedOf")),_v_20706_charOf(this->slot("charOf")),_v_20711_rampOf(this->slot("rampOf")),_v_20716_palettes(this->slot("palettes")),_v_20717_colorsOf(this->slot("colorsOf")),_v_20725_ANCHORS(this->slot("ANCHORS")),_v_20726_SIZES(this->slot("SIZES")),_v_20727_ASPECT(this->slot("ASPECT")),_v_20728_isArea(this->slot("isArea")),_v_20731_isPointOn(this->slot("isPointOn")),_v_20734_spotOf(this->slot("spotOf")),_v_20746_makeArea(this->slot("makeArea")),_v_20758_areaOf(this->slot("areaOf")),_v_20762_PLACE_KEYS(this->slot("PLACE_KEYS")),_v_20763_checkPlace(this->slot("checkPlace")),_v_20773_roomOf(this->slot("roomOf")),_v_20779_boxOf(this->slot("boxOf")),_v_20800_unitTest(this->slot("unitTest")),_v_20810_placedOf(this->slot("placedOf")),_v_20815_unitShape(this->slot("unitShape")),_v_20837_inPolygon(this->slot("inPolygon")),_v_20850_segmentDistance(this->slot("segmentDistance")),_v_20864_pointsOf(this->slot("pointsOf")),_v_20874_FONT(this->slot("FONT")),_v_20875_area(this->slot("area")),_v_21015_numbers(this->slot("numbers")),_v_21022_sky(this->slot("sky")),_v_21024_ground(this->slot("ground")),_v_21041_union(this->slot("union")),_v_21066_subtract(this->slot("subtract")),_v_21093_intersect(this->slot("intersect")),_v_21118_FILLS(this->slot("FILLS")),_v_21119_inside(this->slot("inside")),_v_21149_cup(this->slot("cup")),_v_21165_mug(this->slot("mug")),_v_21223_bottle(this->slot("bottle")),_v_21238_straw(this->slot("straw")),_v_21258_box(this->slot("box")),_v_21264_ball(this->slot("ball")),_v_21270_blob(this->slot("blob")),_v_21283_CLOUD_RATIO(this->slot("CLOUD_RATIO")),_v_21284_PUFFS(this->slot("PUFFS")),_v_21285_cloud(this->slot("cloud")),_v_21298_flame(this->slot("flame")),_v_21306_leaf(this->slot("leaf")),_v_21313_heart(this->slot("heart")),_v_21322_star(this->slot("star")),_v_21337_moon(this->slot("moon")),_v_21344_fish(this->slot("fish")),_v_21363_house(this->slot("house")),_v_21401_lamp(this->slot("lamp")),_v_21439_SAMPLES(this->slot("SAMPLES")),_v_21440_cellsOf(this->slot("cellsOf")),_v_21533_fringeChar(this->slot("fringeChar")),_v_21540_edgeChar(this->slot("edgeChar")),_v_21568_isMaterial(this->slot("isMaterial")),_v_21571_makeMaterial(this->slot("makeMaterial")),_v_21577_code(this->slot("code")),_v_21580_SPACE(this->slot("SPACE")),_v_21581_tiled(this->slot("tiled")),_v_21604_lap(this->slot("lap")),_v_21610_highlights(this->slot("highlights")),_v_21611_SHADES(this->slot("SHADES")),_v_21612_BODY(this->slot("BODY")),_v_21613_water(this->slot("water")),_v_21669_glass(this->slot("glass")),_v_21739_fire(this->slot("fire")),_v_21770_hazeMaterial(this->slot("hazeMaterial")),_v_21797_smoke(this->slot("smoke")),_v_21803_cloudChar(this->slot("cloudChar")),_v_21823_cloudMaterial(this->slot("cloudMaterial")),_v_21840_metal(this->slot("metal")),_v_21872_wood(this->slot("wood")),_v_21909_grass(this->slot("grass")),_v_21943_lawn(this->slot("lawn")),_v_21979_sand(this->slot("sand")),_v_22006_lava(this->slot("lava")),_v_22045_ice(this->slot("ice")),_v_22095_haloOf(this->slot("haloOf")),_v_22117_neon(this->slot("neon")),_v_22151_solid(this->slot("solid")),_v_22181_gradientFill(this->slot("gradientFill")),_v_22209_patterns(this->slot("patterns")),_v_22210_pattern(this->slot("pattern")),_v_22243_ceramic(this->slot("ceramic")),_v_22284_starfield(this->slot("starfield")),_v_22307_material(this->slot("material")),_v_22336_printable(this->slot("printable")),_v_22341_colorIn(this->slot("colorIn")),_v_22347_isEmission(this->slot("isEmission")),_v_22350_eachParticle(this->slot("eachParticle")),_v_22363_columnsOf(this->slot("columnsOf")),_v_22368_bubbles(this->slot("bubbles")),_v_22402_springPoint(this->slot("springPoint")),_v_22409_plume(this->slot("plume")),_v_22447_steam(this->slot("steam")),_v_22479_sparks(this->slot("sparks")),_v_22510_rain(this->slot("rain")),_v_22545_snow(this->slot("snow")),_v_22575_emission(this->slot("emission")),_v_22611_stopsIn(this->slot("stopsIn")),_v_22614_pageHalf(this->slot("pageHalf")),_v_22628_texture(this->slot("texture")),_v_22660_isPart(this->slot("isPart")),_v_22663_MOVES(this->slot("MOVES")),_v_22664_moved(this->slot("moved")),_v_22682_frameWindow(this->slot("frameWindow")),_v_22725_shape(this->slot("shape")),_v_22776_emit(this->slot("emit")),_v_22795_loopOf(this->slot("loopOf")),_v_22805_partsOf(this->slot("partsOf")),_v_22813_colorsFor(this->slot("colorsFor")),_v_22829_partsPalette(this->slot("partsPalette")),_v_22834_stage(this->slot("stage")),_v_22856_staged(this->slot("staged")),_v_22857_drawParts(this->slot("drawParts")),_v_22879_SPEC_KEYS(this->slot("SPEC_KEYS")),_v_22880_picture(this->slot("picture")),_v_22922_waterGlass(this->slot("waterGlass")),_literals{V(u"function"),
V(u"name"),
V(u"a function"),
V(u"object"),
V(u"string"),
V(u"stringify"),
V(u"isArray"),
V(u", "),
V(u"map"),
V(u"join"),
V(u"keys"),
V(u"includes"),
V(u""),
V(u"number"),
V(u"isFinite"),
V(u"hasOwn"),
V(u" of seconds above 0, up to 60"),
V(u"boolean"),
V(u"isInteger"),
V(u"length"),
V(u"test"),
V(u"materials"),
V(u"light"),
V(u"dark"),
V(u"center"),
V(u"kind"),
V(u"spot"),
V(u"place"),
V(u"left"),
V(u"endsWith"),
V(u"x0"),
V(u"right"),
V(u"x1"),
V(u"top"),
V(u"startsWith"),
V(u"y0"),
V(u"bottom"),
V(u"y1"),
V(u"area"),
V(u"at"),
V(u"every"),
V(u"within"),
V(u"on"),
V(u"x"),
V(u"y"),
V(u"size"),
V(u"cols"),
V(u" of cells from 1 to 320"),
V(u"rows"),
V(u" of cells from 1 to 120"),
V(u"flip"),
V(u"max"),
V(u"min"),
V(u"w"),
V(u"h"),
V(u"frame"),
V(u"vessel"),
V(u"base"),
V(u"open"),
V(u"cavity"),
V(u"material"),
V(u"[x, y] in cells"),
V(u"entries"),
V(u"ground()"),
V(u"ground"),
V(u"union takes one or more areas"),
V(u"forEach"),
V(u"some"),
V(u"subtract's first area"),
V(u"room"),
V(u"intersect takes one or more areas"),
V(u"inside"),
V(u"inside()"),
V(u"fill"),
V(u"wall"),
V(u"inside's fill"),
V(u"inside's wall"),
V(u"inside's base"),
V(u"level"),
V(u"cup.taper"),
V(u"taper"),
V(u"cup"),
V(u"large"),
V(u"mug()"),
V(u"mug"),
V(u"medium"),
V(u"b"),
V(u"body"),
V(u"handle"),
V(u"pieces"),
V(u"bottle"),
V(u"straw()"),
V(u"lean"),
V(u"straw"),
V(u"straw.lean"),
V(u"/"),
V(u"\\"),
V(u"|"),
V(u"colors"),
V(u"#dc2626"),
V(u"#94a3b8"),
V(u"#ef4444"),
V(u"#f8fafc"),
V(u"box.ratio"),
V(u"ratio"),
V(u"box"),
V(u"small"),
V(u"ball"),
V(u"blob.seed"),
V(u"seed"),
V(u"blob"),
V(u"cloud"),
V(u"flame"),
V(u"leaf"),
V(u"PI"),
V(u"grass"),
V(u"char"),
V(u"▓"),
V(u"heart"),
V(u"rose"),
V(u"star.points"),
V(u"points"),
V(u"star.inner"),
V(u"inner"),
V(u"from"),
V(u"star"),
V(u"gold"),
V(u"moon"),
V(u"top-right"),
V(u"█"),
V(u"fish()"),
V(u"fish"),
V(u"o"),
V(u"goldfish"),
V(u" "),
V(u"edge"),
V(u"house()"),
V(u"house"),
V(u"walls"),
V(u"roof"),
V(u"chimney"),
V(u"door"),
V(u"windows"),
V(u"night"),
V(u"assign"),
V(u"lamp()"),
V(u"lamp"),
V(u"cap"),
V(u"globe"),
V(u"push"),
V(u"list"),
V(u"cover"),
V(u"border"),
V(u"fringe"),
V(u"has"),
V(u"outline"),
V(u"line"),
V(u"get"),
V(u"filter"),
V(u"cells"),
V(u"chars"),
V(u"charCodeAt"),
V(u"set"),
V(u"nx"),
V(u"ny"),
V(u"depth"),
V(u"maxDepth"),
V(u"placed"),
V(u"_"),
V(u"."),
V(u"'"),
V(u"-"),
V(u"round"),
V(u"("),
V(u")"),
V(u"period"),
V(u"prepare"),
V(u"water()"),
V(u"waves"),
V(u"bend"),
V(u"texture"),
V(u"water.colors"),
V(u"water"),
V(u"water.waves"),
V(u"still"),
V(u"gentle"),
V(u"slosh"),
V(u"rough"),
V(u"water.period"),
V(u"water.bend"),
V(u"water.texture"),
V(u"s"),
V(u"under"),
V(u"‾"),
V(u"~"),
V(u"color"),
V(u"put"),
V(u"glass()"),
V(u"highlight"),
V(u"glass.colors"),
V(u"glass"),
V(u"glass.highlight"),
V(u"glass.period"),
V(u"="),
V(u"!"),
V(u"fire()"),
V(u"heat"),
V(u"ramp"),
V(u"glow"),
V(u"fire.colors"),
V(u"fire"),
V(u"fire.period"),
V(u"fire.heat"),
V(u"normal"),
V(u"fierce"),
V(u"fire.ramp"),
V(u" .:^*#%@"),
V(u"fire.glow"),
V(u"none"),
V(u"soft"),
V(u"strong"),
V(u" .:-~=o"),
V(u"smoke()"),
V(u"height"),
V(u"spread"),
V(u"wind"),
V(u"smoke"),
V(u"emission"),
V(u"cloud.colors"),
V(u"metal()"),
V(u"sheen"),
V(u"invert"),
V(u"metal.colors"),
V(u"steel"),
V(u"metal.sheen"),
V(u"metal.period"),
V(u"metal.ramp"),
V(u"░▒▓█"),
V(u"metal.edge"),
V(u"auto"),
V(u"metal.invert"),
V(u"metal"),
V(u"paper"),
V(u"wood()"),
V(u"grain"),
V(u"wood.colors"),
V(u"wood"),
V(u"wood.grain"),
V(u"planks"),
V(u"rings"),
V(u"wood.edge"),
V(u"wood.seed"),
V(u"@"),
V(u"grass()"),
V(u"sway"),
V(u"density"),
V(u"opaque"),
V(u"grass.kind"),
V(u"lawn"),
V(u"reeds"),
V(u"seaweed"),
V(u"grass.colors"),
V(u"grass.sway"),
V(u"grass.period"),
V(u"grass.density"),
V(u"grass.opaque"),
V(u"grass.seed"),
V(u"\""),
V(u","),
V(u"len"),
V(u"slant"),
V(u"short"),
V(u"sand()"),
V(u"ripples"),
V(u"sand.colors"),
V(u"sand"),
V(u"sand.ripples"),
V(u"sand.seed"),
V(u":"),
V(u"lava()"),
V(u"blobs"),
V(u"lava.colors"),
V(u"lava"),
V(u"lava.blobs"),
V(u"lava.period"),
V(u"lava.seed"),
V(u"u"),
V(u"r"),
V(u"turns"),
V(u"phase"),
V(u"%"),
V(u"ice()"),
V(u"ice.colors"),
V(u"ice"),
V(u"ice.period"),
V(u"ice.seed"),
V(u"add"),
V(u"*"),
V(u"`"),
V(u"far"),
V(u"neon()"),
V(u"flicker"),
V(u"neon.colors"),
V(u"neon"),
V(u"neon.glow"),
V(u"neon.flicker"),
V(u"neon.period"),
V(u"neon.char"),
V(u"solid()"),
V(u"solid.colors"),
V(u"ink"),
V(u"solid takes a char or a ramp, not both: a char fills it flat, a ramp shades it from the edge in"),
V(u"solid.ramp"),
V(u"solid.char"),
V(u"solid.edge"),
V(u"solid"),
V(u"gradientFill()"),
V(u"direction"),
V(u"steps"),
V(u"gradientFill.steps"),
V(u"gradientFill.colors"),
V(u"sunset"),
V(u"gradientFill.direction"),
V(u"down"),
V(u"up"),
V(u"out"),
V(u"gradientFill.ramp"),
V(u"█▓▒░"),
V(u"gradient"),
V(u"tile"),
V(u"pattern()"),
V(u"move"),
V(u"pattern.colors"),
V(u"pattern.move"),
V(u"pattern.period"),
V(u"padEnd"),
V(u"pattern"),
V(u"ceramic()"),
V(u"shade"),
V(u"ceramic.colors"),
V(u"ceramic"),
V(u"ceramic.shade"),
V(u"starfield()"),
V(u"starfield.colors"),
V(u"stars"),
V(u"starfield.density"),
V(u"starfield.period"),
V(u"starfield.seed"),
V(u"starfield"),
V(u"+"),
V(u"·"),
V(u"material takes a function (cell, t) => a character, [character, colour index] or \"\""),
V(u"material()"),
V(u"material.steps"),
V(u"material.colors"),
V(u"material.period"),
V(u"v"),
V(u"0"),
V(u"toString"),
V(u"toUpperCase"),
V(u"padStart"),
V(u"one colour, 0"),
V(u"bubbles()"),
V(u"rate"),
V(u"speed"),
V(u"wobble"),
V(u"bubbles.colors"),
V(u"bubbles"),
V(u"bubbles.rate"),
V(u"bubbles.speed"),
V(u"bubbles.wobble"),
V(u"bubbles.period"),
V(u"bubbles.seed"),
V(u"emits"),
V(u"O"),
V(u"°"),
V(u"point"),
V(u"low"),
V(u"high"),
V(u"narrow"),
V(u"wide"),
V(u"toward"),
V(u"steam()"),
V(u"wisps"),
V(u"steam.colors"),
V(u"steam"),
V(u"steam.wisps"),
V(u"steam.height"),
V(u"steam.period"),
V(u"steam.seed"),
V(u"sparks()"),
V(u"gravity"),
V(u"life"),
V(u"sparks.colors"),
V(u"sparks"),
V(u"sparks.rate"),
V(u"sparks.speed"),
V(u"sparks.gravity"),
V(u"sparks.life"),
V(u"sparks.period"),
V(u"sparks.seed"),
V(u"rain()"),
V(u"rain.colors"),
V(u"rain"),
V(u"rain.rate"),
V(u"rain.speed"),
V(u"rain.wind"),
V(u"rain.period"),
V(u"rain.seed"),
V(u"snow()"),
V(u"snow.colors"),
V(u"snow"),
V(u"snow.rate"),
V(u"snow.speed"),
V(u"snow.wind"),
V(u"snow.period"),
V(u"snow.seed"),
V(u"emission takes a function (particle, t) => [x, y, character], or null to hide it"),
V(u"emission()"),
V(u"birth"),
V(u"emission.steps"),
V(u"emission.colors"),
V(u"emission.rate"),
V(u"emission.life"),
V(u"emission.birth"),
V(u"anywhere"),
V(u"emission.period"),
V(u"emission.seed"),
V(u"index"),
V(u"age"),
V(u"k"),
V(u"random"),
V(u"palette"),
V(u"fps"),
V(u"meta"),
V(u"default"),
V(u"texture()"),
V(u"options"),
V(u"texture.speed"),
V(u"texture.tile"),
V(u"texture.opaque"),
V(u"slice"),
V(u"loop"),
V(u"mono"),
V(u"lay"),
V(u"clear"),
V(u"subarray"),
V(u"shape"),
V(u"shape takes a material second, not another area: give each area a shape() of its own, or join them with union()"),
V(u"shape()'s options"),
V(u"amount"),
V(u"own"),
V(u"shape's move"),
V(u"bob"),
V(u"swim"),
V(u"drift"),
V(u"shape's amount"),
V(u"shape's period"),
V(u"part"),
V(u"what"),
V(u"extent"),
V(u"setup"),
V(u"emit()'s options"),
V(u"emit's at"),
V(u"emit's toward"),
V(u"emit's inside"),
V(u"toLowerCase"),
V(u"slots"),
V(u"partsPalette"),
V(u"drawParts takes the grid to draw into first, the s a piece() drawing is given"),
V(u"drawParts"),
V(u"picture"),
V(u"picture()'s spec"),
V(u"picture() makes its palette from its parts' colours: give each material `colors` instead of a palette or an ink"),
V(u"cell"),
V(u"picture() empties its grid before each frame, so a frame depends only on t: leave clear out"),
V(u"category"),
V(u"scenes"),
V(u"waterGlass()"),
V(u"huge"),
V(u"half"),
V(u"waterGlass.colors"),
V(u"glass of water"),
V(u"note"),
V(u"a glass of water, its surface rippling, bubbles rising"),
V(u"top-left"),
V(u"bottom-left"),
V(u"bottom-right"),
V(u"tiny"),
V(u"full"),
V(u"A"),
V(u".#.|#.#|###|#.#|#.#"),
V(u"B"),
V(u"##.|#.#|##.|#.#|##."),
V(u"C"),
V(u".##|#..|#..|#..|.##"),
V(u"D"),
V(u"##.|#.#|#.#|#.#|##."),
V(u"E"),
V(u"###|#..|##.|#..|###"),
V(u"F"),
V(u"###|#..|##.|#..|#.."),
V(u"G"),
V(u".##|#..|#.#|#.#|.##"),
V(u"H"),
V(u"#.#|#.#|###|#.#|#.#"),
V(u"I"),
V(u"###|.#.|.#.|.#.|###"),
V(u"J"),
V(u"..#|..#|..#|#.#|.#."),
V(u"K"),
V(u"#.#|#.#|##.|#.#|#.#"),
V(u"L"),
V(u"#..|#..|#..|#..|###"),
V(u"M"),
V(u"#.#|###|#.#|#.#|#.#"),
V(u"N"),
V(u"##.|#.#|#.#|#.#|#.#"),
V(u".#.|#.#|#.#|#.#|.#."),
V(u"P"),
V(u"##.|#.#|##.|#..|#.."),
V(u"Q"),
V(u".#.|#.#|#.#|##.|.##"),
V(u"R"),
V(u"##.|#.#|##.|#.#|#.#"),
V(u"S"),
V(u".##|#..|.#.|..#|##."),
V(u"T"),
V(u"###|.#.|.#.|.#.|.#."),
V(u"U"),
V(u"#.#|#.#|#.#|#.#|###"),
V(u"V"),
V(u"#.#|#.#|#.#|.#.|.#."),
V(u"W"),
V(u"#.#|#.#|#.#|###|#.#"),
V(u"X"),
V(u"#.#|#.#|.#.|#.#|#.#"),
V(u"Y"),
V(u"#.#|#.#|.#.|.#.|.#."),
V(u"Z"),
V(u"###|..#|.#.|#..|###"),
V(u"###|#.#|#.#|#.#|###"),
V(u"1"),
V(u".#.|##.|.#.|.#.|###"),
V(u"2"),
V(u"##.|..#|.#.|#..|###"),
V(u"3"),
V(u"##.|..#|.#.|..#|##."),
V(u"4"),
V(u"#.#|#.#|###|..#|..#"),
V(u"5"),
V(u"###|#..|##.|..#|##."),
V(u"6"),
V(u".##|#..|###|#.#|###"),
V(u"7"),
V(u"###|..#|.#.|.#.|.#."),
V(u"8"),
V(u"###|#.#|###|#.#|###"),
V(u"9"),
V(u"###|#.#|###|..#|##."),
V(u".|.|.|.|#"),
V(u".|.|.|#|#"),
V(u"#|#|#|.|#"),
V(u"?"),
V(u"##.|..#|.#.|...|.#."),
V(u"#|#|.|.|."),
V(u".|#|.|#|."),
V(u"...|...|###|...|..."),
V(u"...|.#.|###|.#.|..."),
V(u"...|###|...|###|..."),
V(u"..#|..#|.#.|#..|#.."),
V(u"<"),
V(u"..#|.#.|#..|.#.|..#"),
V(u">"),
V(u"#..|.#.|..#|.#.|#.."),
V(u"#.#|.#.|#.#|...|..."),
V(u"..|..|..|..|.."),
V(u"rect"),
V(u"area.rect"),
V(u"rounded"),
V(u"area.rounded"),
V(u"radius"),
V(u"ellipse"),
V(u"area.ellipse"),
V(u"cx"),
V(u"cy"),
V(u"rx"),
V(u"ry"),
V(u"circle"),
V(u"area.circle"),
V(u"polygon"),
V(u"area.polygon"),
V(u"path"),
V(u"area.path"),
V(u"width"),
V(u"text"),
V(u"area.text()"),
V(u"big"),
V(u"area.text"),
V(u"area.text.big"),
V(u"\n"),
V(u"split"),
V(u"#"),
V(u"pop"),
V(u"where"),
V(u"area.where takes a function (x, y, cols, rows) => true for a point in the area"),
V(u"area.where's box"),
V(u"all"),
V(u"fit"),
V(u"area.fit"),
V(u"[u, v], 0 to 1 across and down its box, or a function (u, v) => true for a point in it"),
V(u"area.fit.ratio"),
V(u"brim"),
V(u".-~~≈≈"),
V(u"bricks"),
V(u"___|"),
V(u"_|__"),
V(u"tiles"),
V(u"+--"),
V(u"|  "),
V(u"checks"),
V(u"▓░"),
V(u"░▓"),
V(u"stripes"),
V(u"\\  "),
V(u" \\ "),
V(u"  \\"),
V(u"dots"),
V(u". "),
V(u"  "),
V(u"~-~ "),
V(u" ~-~"),
V(u"hatch"),
V(u"zigzag"),
V(u"/\\"),
V(u"scales"),
V(u"(_)"),
V(u"_)("),
V(u"shingles"),
V(u"\\_/"),
V(u"/ \\"),
V(u"clock")}{
this->exports["area"]=this->_v_20875_area;
this->exports["sky"]=this->_v_21022_sky;
this->exports["ground"]=this->_v_21024_ground;
this->exports["union"]=this->_v_21041_union;
this->exports["subtract"]=this->_v_21066_subtract;
this->exports["intersect"]=this->_v_21093_intersect;
this->exports["inside"]=this->_v_21119_inside;
this->exports["cup"]=this->_v_21149_cup;
this->exports["mug"]=this->_v_21165_mug;
this->exports["bottle"]=this->_v_21223_bottle;
this->exports["straw"]=this->_v_21238_straw;
this->exports["box"]=this->_v_21258_box;
this->exports["ball"]=this->_v_21264_ball;
this->exports["blob"]=this->_v_21270_blob;
this->exports["cloud"]=this->_v_21285_cloud;
this->exports["flame"]=this->_v_21298_flame;
this->exports["leaf"]=this->_v_21306_leaf;
this->exports["heart"]=this->_v_21313_heart;
this->exports["star"]=this->_v_21322_star;
this->exports["moon"]=this->_v_21337_moon;
this->exports["fish"]=this->_v_21344_fish;
this->exports["house"]=this->_v_21363_house;
this->exports["lamp"]=this->_v_21401_lamp;
this->exports["cellsOf"]=this->_v_21440_cellsOf;
this->exports["edgeChar"]=this->_v_21540_edgeChar;
this->exports["water"]=this->_v_21613_water;
this->exports["glass"]=this->_v_21669_glass;
this->exports["fire"]=this->_v_21739_fire;
this->exports["smoke"]=this->_v_21797_smoke;
this->exports["metal"]=this->_v_21840_metal;
this->exports["wood"]=this->_v_21872_wood;
this->exports["grass"]=this->_v_21909_grass;
this->exports["sand"]=this->_v_21979_sand;
this->exports["lava"]=this->_v_22006_lava;
this->exports["ice"]=this->_v_22045_ice;
this->exports["neon"]=this->_v_22117_neon;
this->exports["solid"]=this->_v_22151_solid;
this->exports["gradientFill"]=this->_v_22181_gradientFill;
this->exports["patterns"]=this->_v_22209_patterns;
this->exports["pattern"]=this->_v_22210_pattern;
this->exports["ceramic"]=this->_v_22243_ceramic;
this->exports["starfield"]=this->_v_22284_starfield;
this->exports["material"]=this->_v_22307_material;
this->exports["bubbles"]=this->_v_22368_bubbles;
this->exports["steam"]=this->_v_22447_steam;
this->exports["sparks"]=this->_v_22479_sparks;
this->exports["rain"]=this->_v_22510_rain;
this->exports["snow"]=this->_v_22545_snow;
this->exports["emission"]=this->_v_22575_emission;
this->exports["texture"]=this->_v_22628_texture;
this->exports["shape"]=this->_v_22725_shape;
this->exports["emit"]=this->_v_22776_emit;
this->exports["partsPalette"]=this->_v_22829_partsPalette;
this->exports["drawParts"]=this->_v_22857_drawParts;
this->exports["picture"]=this->_v_22880_picture;
this->exports["waterGlass"]=this->_v_22922_waterGlass;
}
void init() override{if(initialized)return;initialized=true;
this->_v_20649_show.get()=j::function([=](const j::Args &_args_fn20650,const V &_receiver_fn20650,const V &_self_fn20650) mutable ->V{
V _v_20651_v;
_v_20651_v=_args_fn20650[0];
{
if(j::truth(([&]()->V{V _lhs22930=j::unary("typeof",_v_20651_v);V _rhs22931=this->_literals[0];return V(j::equal(_lhs22930,_rhs22931,true));})())){return (j::truth(j::get(_v_20651_v,this->_literals[1]))?([&]()->V{std::u16string _text22932;_text22932+=u"";_text22932+=j::string(j::get(_v_20651_v,this->_literals[1]));_text22932+=u", a function: call it, ";_text22932+=j::string(j::get(_v_20651_v,this->_literals[1]));_text22932+=u"()";return V(std::move(_text22932));})():this->_literals[2]);
}
if(j::truth(([&]()->V{V _logical22933=([&]()->V{V _lhs22934=j::unary("typeof",_v_20651_v);V _rhs22935=this->_literals[3];return V(!j::equal(_lhs22934,_rhs22935,true));})();return !j::truth(_logical22933)?([&]()->V{V _lhs22936=_v_20651_v;V _rhs22937=V::null();return V(j::equal(_lhs22936,_rhs22937,true));})():_logical22933;})())){return (j::truth(([&]()->V{V _lhs22938=j::unary("typeof",_v_20651_v);V _rhs22939=this->_literals[4];return V(j::equal(_lhs22938,_rhs22939,true));})())?([&]()->V{V _receiver22940=j::builtin("JSON");V _method22941=this->_literals[5];V _method=j::get(_receiver22940,_method22941);j::Args _params22942=j::Args{_v_20651_v};return j::call(_method,_params22942,_receiver22940);})():([&]()->V{V _callee22943=j::builtin("String");return j::call(_callee22943,j::Args{_v_20651_v});})());
}
if(j::truth(([&]()->V{V _receiver22944=j::builtin("Array");V _method22945=this->_literals[6];V _method=j::get(_receiver22944,_method22945);j::Args _params22946=j::Args{_v_20651_v};return j::call(_method,_params22946,_receiver22944);})())){return ([&]()->V{std::u16string _text22947;_text22947+=u"[";_text22947+=j::string(([&]()->V{V _receiver22948=([&]()->V{V _receiver22951=_v_20651_v;V _method22952=this->_literals[8];V _method=j::get(_receiver22951,_method22952);j::Args _params22953=j::Args{_self_fn20650};return j::call(_method,_params22953,_receiver22951);})();V _method22949=this->_literals[9];V _method=j::get(_receiver22948,_method22949);j::Args _params22950=j::Args{this->_literals[7]};return j::call(_method,_params22950,_receiver22948);})());_text22947+=u"]";return V(std::move(_text22947));})();
}
{try {
return ([&]()->V{V _logical22954=([&]()->V{V _receiver22955=j::builtin("JSON");V _method22956=this->_literals[5];V _method=j::get(_receiver22955,_method22956);j::Args _params22957=j::Args{_v_20651_v};return j::call(_method,_params22957,_receiver22955);})();return j::nullish(_logical22954)?([&]()->V{V _callee22958=j::builtin("String");return j::call(_callee22958,j::Args{_v_20651_v});})():_logical22954;})();

}
catch(const std::exception &_error22959){{
return ([&]()->V{V _callee22960=j::builtin("String");return j::call(_callee22960,j::Args{_v_20651_v});})();

}
}}

}

return V{};
},1);
this->_v_20652_optionsOf.get()=j::function([=](const j::Args &_args_fn20653,const V &_receiver_fn20653,const V &_self_fn20653) mutable ->V{
V _v_20654_what;
V _v_20655_o;
V _v_20656_keys;
_v_20654_what=_args_fn20653[0];
_v_20655_o=_args_fn20653[1];
_v_20656_keys=_args_fn20653[2];
{
if(j::truth(([&]()->V{V _lhs22961=_v_20655_o;V _rhs22962=j::builtin("undefined");return V(j::equal(_lhs22961,_rhs22962,true));})())){return ([&]()->V{V _obj22963=j::object();return _obj22963;})();
}
if(j::truth(j::unary("!",([&]()->V{V _callee22964=this->_v_20646_isObject.get();return j::call(_callee22964,j::Args{_v_20655_o});})()))){(void)(([&]()->V{V _callee22967=this->_v_20632_fail.get();return j::call(_callee22967,j::Args{([&]()->V{std::u16string _text22965;_text22965+=u"";_text22965+=j::string(_v_20654_what);_text22965+=u" takes an options object, such as { ";_text22965+=j::string(j::get(_v_20656_keys,V(0.0)));_text22965+=u": ... }, not ";_text22965+=j::string(([&]()->V{V _callee22966=this->_v_20649_show.get();return j::call(_callee22966,j::Args{_v_20655_o});})());_text22965+=u"";return V(std::move(_text22965));})()});})());
}
{for(const auto &_item22968:j::elements(([&]()->V{V _receiver22969=j::builtin("Object");V _method22970=this->_literals[10];V _method=j::get(_receiver22969,_method22970);j::Args _params22971=j::Args{_v_20655_o};return j::call(_method,_params22971,_receiver22969);})())){V _v_20657_k;
_v_20657_k=_item22968;
if(j::truth(j::unary("!",([&]()->V{V _receiver22972=_v_20656_keys;V _method22973=this->_literals[11];V _method=j::get(_receiver22972,_method22973);j::Args _params22974=j::Args{_v_20657_k};return j::call(_method,_params22974,_receiver22972);})()))){(void)(([&]()->V{V _callee22987=this->_v_20632_fail.get();return j::call(_callee22987,j::Args{([&]()->V{std::u16string _text22975;_text22975+=u"";_text22975+=j::string(_v_20654_what);_text22975+=u" has no option ";_text22975+=j::string(([&]()->V{V _receiver22976=j::builtin("JSON");V _method22977=this->_literals[5];V _method=j::get(_receiver22976,_method22977);j::Args _params22978=j::Args{_v_20657_k};return j::call(_method,_params22978,_receiver22976);})());_text22975+=u"";_text22975+=j::string(([&]()->V{V _callee22979=this->_v_20645_suggest.get();return j::call(_callee22979,j::Args{_v_20657_k,_v_20656_keys});})());_text22975+=u": it takes ";_text22975+=j::string(([&]()->V{V _callee22986=this->_v_20629_and.get();return j::call(_callee22986,j::Args{([&]()->V{V _receiver22983=_v_20656_keys;V _method22984=this->_literals[8];V _method=j::get(_receiver22983,_method22984);j::Args _params22985=j::Args{j::function([=](const j::Args &_args_fn20658,const V &_receiver_fn20658,const V &_self_fn20658) mutable ->V{
V _v_20659_x;
_v_20659_x=_args_fn20658[0];
return ([&]()->V{V _receiver22980=j::builtin("JSON");V _method22981=this->_literals[5];V _method=j::get(_receiver22980,_method22981);j::Args _params22982=j::Args{_v_20659_x};return j::call(_method,_params22982,_receiver22980);})();
return V{};
},1)};return j::call(_method,_params22985,_receiver22983);})()});})());_text22975+=u"";return V(std::move(_text22975));})()});})());
}
}}
return _v_20655_o;

}

return V{};
},3);
this->_v_20663_numberOf.get()=j::function([=](const j::Args &_args_fn20664,const V &_receiver_fn20664,const V &_self_fn20664) mutable ->V{
V _v_20665_what;
V _v_20666_v;
V _v_20667_def;
V _v_20668_lo;
V _v_20669_hi;
V _v_20670_words;
_v_20665_what=_args_fn20664[0];
_v_20666_v=_args_fn20664[1];
_v_20667_def=_args_fn20664[2];
V _default22988=_args_fn20664[3];if(_default22988.kind==V::Undefined||_default22988.kind==V::Hole)_default22988=j::unary("-",j::builtin("Infinity"));
_v_20668_lo=_default22988;
V _default22989=_args_fn20664[4];if(_default22989.kind==V::Undefined||_default22989.kind==V::Hole)_default22989=j::builtin("Infinity");
_v_20669_hi=_default22989;
V _default22990=_args_fn20664[5];if(_default22990.kind==V::Undefined||_default22990.kind==V::Hole)_default22990=this->_literals[12];
_v_20670_words=_default22990;
{
if(j::truth(([&]()->V{V _lhs22991=_v_20666_v;V _rhs22992=j::builtin("undefined");return V(j::equal(_lhs22991,_rhs22992,true));})())){return _v_20667_def;
}
if(j::truth(([&]()->V{V _logical22993=([&]()->V{V _logical22994=([&]()->V{V _logical22995=([&]()->V{V _lhs22996=j::unary("typeof",_v_20666_v);V _rhs22997=this->_literals[13];return V(!j::equal(_lhs22996,_rhs22997,true));})();return !j::truth(_logical22995)?j::unary("!",([&]()->V{V _receiver22998=j::builtin("Number");V _method22999=this->_literals[14];V _method=j::get(_receiver22998,_method22999);j::Args _params23000=j::Args{_v_20666_v};return j::call(_method,_params23000,_receiver22998);})()):_logical22995;})();return !j::truth(_logical22994)?([&]()->V{V _lhs23001=_v_20666_v;V _rhs23002=_v_20668_lo;return j::binary("<",_lhs23001,_rhs23002);})():_logical22994;})();return !j::truth(_logical22993)?([&]()->V{V _lhs23003=_v_20666_v;V _rhs23004=_v_20669_hi;return j::binary(">",_lhs23003,_rhs23004);})():_logical22993;})())){
V _v_20671_range;
_v_20671_range=([&]()->V{V _logical23005=_v_20670_words;return !j::truth(_logical23005)?(j::truth(([&]()->V{V _lhs23006=_v_20669_hi;V _rhs23007=j::builtin("Infinity");return V(j::equal(_lhs23006,_rhs23007,true));})())?(j::truth(([&]()->V{V _lhs23008=_v_20668_lo;V _rhs23009=j::unary("-",j::builtin("Infinity"));return V(j::equal(_lhs23008,_rhs23009,true));})())?this->_literals[12]:([&]()->V{std::u16string _text23010;_text23010+=u" of ";_text23010+=j::string(_v_20668_lo);_text23010+=u" or more";return V(std::move(_text23010));})()):([&]()->V{std::u16string _text23011;_text23011+=u" from ";_text23011+=j::string(_v_20668_lo);_text23011+=u" to ";_text23011+=j::string(_v_20669_hi);_text23011+=u"";return V(std::move(_text23011));})()):_logical23005;})();
(void)(([&]()->V{V _callee23014=this->_v_20632_fail.get();return j::call(_callee23014,j::Args{([&]()->V{std::u16string _text23012;_text23012+=u"";_text23012+=j::string(_v_20665_what);_text23012+=u" takes a number";_text23012+=j::string(_v_20671_range);_text23012+=u", not ";_text23012+=j::string(([&]()->V{V _callee23013=this->_v_20649_show.get();return j::call(_callee23013,j::Args{_v_20666_v});})());_text23012+=u"";return V(std::move(_text23012));})()});})());

}

return _v_20666_v;

}

return V{};
},3);
this->_v_20672_wordOrNumber.get()=j::function([=](const j::Args &_args_fn20673,const V &_receiver_fn20673,const V &_self_fn20673) mutable ->V{
V _v_20674_what;
V _v_20675_v;
V _v_20676_words;
V _v_20677_def;
V _v_20678_lo;
V _v_20679_hi;
_v_20674_what=_args_fn20673[0];
_v_20675_v=_args_fn20673[1];
_v_20676_words=_args_fn20673[2];
_v_20677_def=_args_fn20673[3];
_v_20678_lo=_args_fn20673[4];
_v_20679_hi=_args_fn20673[5];
{
if(j::truth(([&]()->V{V _lhs23015=j::unary("typeof",_v_20675_v);V _rhs23016=this->_literals[4];return V(j::equal(_lhs23015,_rhs23016,true));})())){
if(j::truth(([&]()->V{V _receiver23017=j::builtin("Object");V _method23018=this->_literals[15];V _method=j::get(_receiver23017,_method23018);j::Args _params23019=j::Args{_v_20676_words,_v_20675_v};return j::call(_method,_params23019,_receiver23017);})())){return j::get(_v_20676_words,_v_20675_v);
}
(void)(([&]()->V{V _callee23038=this->_v_20632_fail.get();return j::call(_callee23038,j::Args{([&]()->V{std::u16string _text23020;_text23020+=u"";_text23020+=j::string(_v_20674_what);_text23020+=u" takes ";_text23020+=j::string(([&]()->V{V _callee23030=this->_v_20660_or.get();return j::call(_callee23030,j::Args{([&]()->V{V _receiver23024=([&]()->V{V _receiver23027=j::builtin("Object");V _method23028=this->_literals[10];V _method=j::get(_receiver23027,_method23028);j::Args _params23029=j::Args{_v_20676_words};return j::call(_method,_params23029,_receiver23027);})();V _method23025=this->_literals[8];V _method=j::get(_receiver23024,_method23025);j::Args _params23026=j::Args{j::function([=](const j::Args &_args_fn20680,const V &_receiver_fn20680,const V &_self_fn20680) mutable ->V{
V _v_20681_w;
_v_20681_w=_args_fn20680[0];
return ([&]()->V{V _receiver23021=j::builtin("JSON");V _method23022=this->_literals[5];V _method=j::get(_receiver23021,_method23022);j::Args _params23023=j::Args{_v_20681_w};return j::call(_method,_params23023,_receiver23021);})();
return V{};
},1)};return j::call(_method,_params23026,_receiver23024);})()});})());_text23020+=u", or a number from ";_text23020+=j::string(_v_20678_lo);_text23020+=u" to ";_text23020+=j::string(_v_20679_hi);_text23020+=u", not ";_text23020+=j::string(([&]()->V{V _receiver23031=j::builtin("JSON");V _method23032=this->_literals[5];V _method=j::get(_receiver23031,_method23032);j::Args _params23033=j::Args{_v_20675_v};return j::call(_method,_params23033,_receiver23031);})());_text23020+=u"";_text23020+=j::string(([&]()->V{V _callee23037=this->_v_20645_suggest.get();return j::call(_callee23037,j::Args{_v_20675_v,([&]()->V{V _receiver23034=j::builtin("Object");V _method23035=this->_literals[10];V _method=j::get(_receiver23034,_method23035);j::Args _params23036=j::Args{_v_20676_words};return j::call(_method,_params23036,_receiver23034);})()});})());_text23020+=u"";return V(std::move(_text23020));})()});})());

}

return ([&]()->V{V _callee23039=this->_v_20663_numberOf.get();return j::call(_callee23039,j::Args{_v_20674_what,_v_20675_v,_v_20677_def,_v_20678_lo,_v_20679_hi});})();

}

return V{};
},6);
this->_v_20682_periodOf.get()=j::function([=](const j::Args &_args_fn20683,const V &_receiver_fn20683,const V &_self_fn20683) mutable ->V{
V _v_20684_what;
V _v_20685_v;
V _v_20686_def;
_v_20684_what=_args_fn20683[0];
_v_20685_v=_args_fn20683[1];
_v_20686_def=_args_fn20683[2];
{
V _v_20687_p;
_v_20687_p=([&]()->V{V _callee23040=this->_v_20663_numberOf.get();return j::call(_callee23040,j::Args{_v_20684_what,_v_20685_v,_v_20686_def,V(0.0),V(60.0),this->_literals[16]});})();
if(j::truth(([&]()->V{V _lhs23041=_v_20687_p;V _rhs23042=V(0.0);return j::binary("<=",_lhs23041,_rhs23042);})())){(void)(([&]()->V{V _callee23044=this->_v_20632_fail.get();return j::call(_callee23044,j::Args{([&]()->V{std::u16string _text23043;_text23043+=u"";_text23043+=j::string(_v_20684_what);_text23043+=u" takes a number of seconds above 0, up to 60, not ";_text23043+=j::string(_v_20687_p);_text23043+=u"";return V(std::move(_text23043));})()});})());
}
return _v_20687_p;

}

return V{};
},3);
this->_v_20688_wordOf.get()=j::function([=](const j::Args &_args_fn20689,const V &_receiver_fn20689,const V &_self_fn20689) mutable ->V{
V _v_20690_what;
V _v_20691_v;
V _v_20692_words;
V _v_20693_def;
_v_20690_what=_args_fn20689[0];
_v_20691_v=_args_fn20689[1];
_v_20692_words=_args_fn20689[2];
_v_20693_def=_args_fn20689[3];
{
if(j::truth(([&]()->V{V _lhs23045=_v_20691_v;V _rhs23046=j::builtin("undefined");return V(j::equal(_lhs23045,_rhs23046,true));})())){return _v_20693_def;
}
if(j::truth(j::unary("!",([&]()->V{V _receiver23047=_v_20692_words;V _method23048=this->_literals[11];V _method=j::get(_receiver23047,_method23048);j::Args _params23049=j::Args{_v_20691_v};return j::call(_method,_params23049,_receiver23047);})()))){(void)(([&]()->V{V _callee23060=this->_v_20632_fail.get();return j::call(_callee23060,j::Args{([&]()->V{std::u16string _text23050;_text23050+=u"";_text23050+=j::string(_v_20690_what);_text23050+=u" takes ";_text23050+=j::string(([&]()->V{V _callee23057=this->_v_20660_or.get();return j::call(_callee23057,j::Args{([&]()->V{V _receiver23054=_v_20692_words;V _method23055=this->_literals[8];V _method=j::get(_receiver23054,_method23055);j::Args _params23056=j::Args{j::function([=](const j::Args &_args_fn20694,const V &_receiver_fn20694,const V &_self_fn20694) mutable ->V{
V _v_20695_w;
_v_20695_w=_args_fn20694[0];
return ([&]()->V{V _receiver23051=j::builtin("JSON");V _method23052=this->_literals[5];V _method=j::get(_receiver23051,_method23052);j::Args _params23053=j::Args{_v_20695_w};return j::call(_method,_params23053,_receiver23051);})();
return V{};
},1)};return j::call(_method,_params23056,_receiver23054);})()});})());_text23050+=u", not ";_text23050+=j::string(([&]()->V{V _callee23058=this->_v_20649_show.get();return j::call(_callee23058,j::Args{_v_20691_v});})());_text23050+=u"";_text23050+=j::string(([&]()->V{V _callee23059=this->_v_20645_suggest.get();return j::call(_callee23059,j::Args{_v_20691_v,_v_20692_words});})());_text23050+=u"";return V(std::move(_text23050));})()});})());
}
return _v_20691_v;

}

return V{};
},4);
this->_v_20696_boolOf.get()=j::function([=](const j::Args &_args_fn20697,const V &_receiver_fn20697,const V &_self_fn20697) mutable ->V{
V _v_20698_what;
V _v_20699_v;
V _v_20700_def;
_v_20698_what=_args_fn20697[0];
_v_20699_v=_args_fn20697[1];
_v_20700_def=_args_fn20697[2];
{
if(j::truth(([&]()->V{V _lhs23061=_v_20699_v;V _rhs23062=j::builtin("undefined");return V(j::equal(_lhs23061,_rhs23062,true));})())){return _v_20700_def;
}
if(j::truth(([&]()->V{V _lhs23063=j::unary("typeof",_v_20699_v);V _rhs23064=this->_literals[17];return V(!j::equal(_lhs23063,_rhs23064,true));})())){(void)(([&]()->V{V _callee23067=this->_v_20632_fail.get();return j::call(_callee23067,j::Args{([&]()->V{std::u16string _text23065;_text23065+=u"";_text23065+=j::string(_v_20698_what);_text23065+=u" takes true or false, not ";_text23065+=j::string(([&]()->V{V _callee23066=this->_v_20649_show.get();return j::call(_callee23066,j::Args{_v_20699_v});})());_text23065+=u"";return V(std::move(_text23065));})()});})());
}
return _v_20699_v;

}

return V{};
},3);
this->_v_20701_seedOf.get()=j::function([=](const j::Args &_args_fn20702,const V &_receiver_fn20702,const V &_self_fn20702) mutable ->V{
V _v_20703_what;
V _v_20704_v;
V _v_20705_def;
_v_20703_what=_args_fn20702[0];
_v_20704_v=_args_fn20702[1];
_v_20705_def=_args_fn20702[2];
{
if(j::truth(([&]()->V{V _lhs23068=_v_20704_v;V _rhs23069=j::builtin("undefined");return V(j::equal(_lhs23068,_rhs23069,true));})())){return _v_20705_def;
}
if(j::truth(j::unary("!",([&]()->V{V _receiver23070=j::builtin("Number");V _method23071=this->_literals[18];V _method=j::get(_receiver23070,_method23071);j::Args _params23072=j::Args{_v_20704_v};return j::call(_method,_params23072,_receiver23070);})()))){(void)(([&]()->V{V _callee23075=this->_v_20632_fail.get();return j::call(_callee23075,j::Args{([&]()->V{std::u16string _text23073;_text23073+=u"";_text23073+=j::string(_v_20703_what);_text23073+=u" takes a whole number, not ";_text23073+=j::string(([&]()->V{V _callee23074=this->_v_20649_show.get();return j::call(_callee23074,j::Args{_v_20704_v});})());_text23073+=u"";return V(std::move(_text23073));})()});})());
}
return _v_20704_v;

}

return V{};
},3);
this->_v_20706_charOf.get()=j::function([=](const j::Args &_args_fn20707,const V &_receiver_fn20707,const V &_self_fn20707) mutable ->V{
V _v_20708_what;
V _v_20709_v;
V _v_20710_def;
_v_20708_what=_args_fn20707[0];
_v_20709_v=_args_fn20707[1];
_v_20710_def=_args_fn20707[2];
{
if(j::truth(([&]()->V{V _lhs23076=_v_20709_v;V _rhs23077=j::builtin("undefined");return V(j::equal(_lhs23076,_rhs23077,true));})())){return _v_20710_def;
}
if(j::truth(([&]()->V{V _logical23078=([&]()->V{V _logical23079=([&]()->V{V _lhs23080=j::unary("typeof",_v_20709_v);V _rhs23081=this->_literals[4];return V(!j::equal(_lhs23080,_rhs23081,true));})();return !j::truth(_logical23079)?([&]()->V{V _lhs23082=j::get(_v_20709_v,this->_literals[19]);V _rhs23083=V(1.0);return V(!j::equal(_lhs23082,_rhs23083,true));})():_logical23079;})();return !j::truth(_logical23078)?([&]()->V{V _receiver23084=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f\\ud800-\\udfff]","");V _method23085=this->_literals[20];V _method=j::get(_receiver23084,_method23085);j::Args _params23086=j::Args{_v_20709_v};return j::call(_method,_params23086,_receiver23084);})():_logical23078;})())){(void)(([&]()->V{V _callee23089=this->_v_20632_fail.get();return j::call(_callee23089,j::Args{([&]()->V{std::u16string _text23087;_text23087+=u"";_text23087+=j::string(_v_20708_what);_text23087+=u" takes one printable character, not ";_text23087+=j::string(([&]()->V{V _callee23088=this->_v_20649_show.get();return j::call(_callee23088,j::Args{_v_20709_v});})());_text23087+=u"";return V(std::move(_text23087));})()});})());
}
return _v_20709_v;

}

return V{};
},3);
this->_v_20711_rampOf.get()=j::function([=](const j::Args &_args_fn20712,const V &_receiver_fn20712,const V &_self_fn20712) mutable ->V{
V _v_20713_what;
V _v_20714_v;
V _v_20715_def;
_v_20713_what=_args_fn20712[0];
_v_20714_v=_args_fn20712[1];
_v_20715_def=_args_fn20712[2];
{
if(j::truth(([&]()->V{V _lhs23090=_v_20714_v;V _rhs23091=j::builtin("undefined");return V(j::equal(_lhs23090,_rhs23091,true));})())){return _v_20715_def;
}
if(j::truth(([&]()->V{V _logical23092=([&]()->V{V _lhs23093=j::unary("typeof",_v_20714_v);V _rhs23094=this->_literals[4];return V(j::equal(_lhs23093,_rhs23094,true));})();return j::truth(_logical23092)?([&]()->V{V _receiver23095=j::builtin("Object");V _method23096=this->_literals[15];V _method=j::get(_receiver23095,_method23096);j::Args _params23097=j::Args{this->_v_20639_ramps.get(),_v_20714_v};return j::call(_method,_params23097,_receiver23095);})():_logical23092;})())){return j::get(this->_v_20639_ramps.get(),_v_20714_v);
}
if(j::truth(([&]()->V{V _logical23098=([&]()->V{V _logical23099=([&]()->V{V _lhs23100=j::unary("typeof",_v_20714_v);V _rhs23101=this->_literals[4];return V(!j::equal(_lhs23100,_rhs23101,true));})();return !j::truth(_logical23099)?([&]()->V{V _lhs23102=j::get(_v_20714_v,this->_literals[19]);V _rhs23103=V(2.0);return j::binary("<",_lhs23102,_rhs23103);})():_logical23099;})();return !j::truth(_logical23098)?([&]()->V{V _receiver23104=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f\\ud800-\\udfff]","");V _method23105=this->_literals[20];V _method=j::get(_receiver23104,_method23105);j::Args _params23106=j::Args{_v_20714_v};return j::call(_method,_params23106,_receiver23104);})():_logical23098;})())){(void)(([&]()->V{V _callee23113=this->_v_20632_fail.get();return j::call(_callee23113,j::Args{([&]()->V{std::u16string _text23107;_text23107+=u"";_text23107+=j::string(_v_20713_what);_text23107+=u" takes a ramp's name, ";_text23107+=j::string(([&]()->V{V _callee23111=this->_v_20660_or.get();return j::call(_callee23111,j::Args{([&]()->V{V _receiver23108=j::builtin("Object");V _method23109=this->_literals[10];V _method=j::get(_receiver23108,_method23109);j::Args _params23110=j::Args{this->_v_20639_ramps.get()};return j::call(_method,_params23110,_receiver23108);})()});})());_text23107+=u", or two or more characters of your own, not ";_text23107+=j::string(([&]()->V{V _callee23112=this->_v_20649_show.get();return j::call(_callee23112,j::Args{_v_20714_v});})());_text23107+=u"";return V(std::move(_text23107));})()});})());
}
return _v_20714_v;

}

return V{};
},3);
this->_v_20717_colorsOf.get()=j::function([=](const j::Args &_args_fn20718,const V &_receiver_fn20718,const V &_self_fn20718) mutable ->V{
V _v_20719_what;
V _v_20720_v;
V _v_20721_def;
V _v_20722_n;
_v_20719_what=_args_fn20718[0];
_v_20720_v=_args_fn20718[1];
_v_20721_def=_args_fn20718[2];
_v_20722_n=_args_fn20718[3];
{
V _v_20723_spec;
V _v_20724_s;
_v_20723_spec=(j::truth(([&]()->V{V _lhs23114=_v_20720_v;V _rhs23115=j::builtin("undefined");return V(j::equal(_lhs23114,_rhs23115,true));})())?j::get(this->_v_20716_palettes.get(),_v_20721_def):([&]()->V{V _callee23116=this->_v_20631_namedColors.get();return j::call(_callee23116,j::Args{_v_20720_v,_v_20719_what,this->_literals[21]});})());
_v_20724_s=([&]()->V{V _callee23117=this->_v_20644_spread.get();return j::call(_callee23117,j::Args{_v_20723_spec,_v_20722_n});})();
return (j::truth(([&]()->V{V _receiver23118=j::builtin("Array");V _method23119=this->_literals[6];V _method=j::get(_receiver23118,_method23119);j::Args _params23120=j::Args{_v_20724_s};return j::call(_method,_params23120,_receiver23118);})())?([&]()->V{V _obj23121=j::object();j::put(_obj23121,this->_literals[22],_v_20724_s);j::put(_obj23121,this->_literals[23],_v_20724_s);return _obj23121;})():_v_20724_s);

}

return V{};
},4);
this->_v_20734_spotOf.get()=j::function([=](const j::Args &_args_fn20735,const V &_receiver_fn20735,const V &_self_fn20735) mutable ->V{
j::Cell _v_20736_area;
j::Cell _v_20737_anchor;
_v_20736_area.get()=_args_fn20735[0];
V _default23122=_args_fn20735[1];if(_default23122.kind==V::Undefined||_default23122.kind==V::Hole)_default23122=this->_literals[24];
_v_20737_anchor.get()=_default23122;
{
if(j::truth(j::unary("!",([&]()->V{V _receiver23123=this->_v_20725_ANCHORS.get();V _method23124=this->_literals[11];V _method=j::get(_receiver23123,_method23124);j::Args _params23125=j::Args{_v_20737_anchor.get()};return j::call(_method,_params23125,_receiver23123);})()))){(void)(([&]()->V{V _callee23136=this->_v_20632_fail.get();return j::call(_callee23136,j::Args{([&]()->V{std::u16string _text23126;_text23126+=u"at() takes an anchor word, ";_text23126+=j::string(([&]()->V{V _callee23133=this->_v_20660_or.get();return j::call(_callee23133,j::Args{([&]()->V{V _receiver23130=this->_v_20725_ANCHORS.get();V _method23131=this->_literals[8];V _method=j::get(_receiver23130,_method23131);j::Args _params23132=j::Args{j::function([=](const j::Args &_args_fn20738,const V &_receiver_fn20738,const V &_self_fn20738) mutable ->V{
V _v_20739_a;
_v_20739_a=_args_fn20738[0];
return ([&]()->V{V _receiver23127=j::builtin("JSON");V _method23128=this->_literals[5];V _method=j::get(_receiver23127,_method23128);j::Args _params23129=j::Args{_v_20739_a};return j::call(_method,_params23129,_receiver23127);})();
return V{};
},1)};return j::call(_method,_params23132,_receiver23130);})()});})());_text23126+=u", not ";_text23126+=j::string(([&]()->V{V _callee23134=this->_v_20649_show.get();return j::call(_callee23134,j::Args{_v_20737_anchor.get()});})());_text23126+=u"";_text23126+=j::string(([&]()->V{V _callee23135=this->_v_20645_suggest.get();return j::call(_callee23135,j::Args{_v_20737_anchor.get(),this->_v_20725_ANCHORS.get()});})());_text23126+=u"";return V(std::move(_text23126));})()});})());
}
return ([&]()->V{V _obj23137=j::object();j::put(_obj23137,this->_literals[25],this->_literals[26]);j::put(_obj23137,this->_literals[27],j::function([=](const j::Args &_args_fn20740,const V &_receiver_fn20740,const V &_self_fn20740) mutable ->V{
V _v_20741_cols;
V _v_20742_rows;
_v_20741_cols=_args_fn20740[0];
_v_20742_rows=_args_fn20740[1];
{
V _v_20743_p;
V _v_20744_x;
V _v_20745_y;
_v_20743_p=([&]()->V{V _receiver23138=_v_20736_area.get();V _method23139=this->_literals[27];V _method=j::get(_receiver23138,_method23139);j::Args _params23140=j::Args{_v_20741_cols,_v_20742_rows};return j::call(_method,_params23140,_receiver23138);})();
_v_20744_x=(j::truth(([&]()->V{V _receiver23141=_v_20737_anchor.get();V _method23142=this->_literals[29];V _method=j::get(_receiver23141,_method23142);j::Args _params23143=j::Args{this->_literals[28]};return j::call(_method,_params23143,_receiver23141);})())?j::get(_v_20743_p,this->_literals[30]):(j::truth(([&]()->V{V _receiver23144=_v_20737_anchor.get();V _method23145=this->_literals[29];V _method=j::get(_receiver23144,_method23145);j::Args _params23146=j::Args{this->_literals[31]};return j::call(_method,_params23146,_receiver23144);})())?j::get(_v_20743_p,this->_literals[32]):([&]()->V{V _lhs23147=([&]()->V{V _lhs23149=j::get(_v_20743_p,this->_literals[30]);V _rhs23150=j::get(_v_20743_p,this->_literals[32]);return j::binary("+",_lhs23149,_rhs23150);})();V _rhs23148=V(2.0);return V(j::number(_lhs23147)/j::number(_rhs23148));})()));
_v_20745_y=(j::truth(([&]()->V{V _receiver23151=_v_20737_anchor.get();V _method23152=this->_literals[34];V _method=j::get(_receiver23151,_method23152);j::Args _params23153=j::Args{this->_literals[33]};return j::call(_method,_params23153,_receiver23151);})())?j::get(_v_20743_p,this->_literals[35]):(j::truth(([&]()->V{V _receiver23154=_v_20737_anchor.get();V _method23155=this->_literals[34];V _method=j::get(_receiver23154,_method23155);j::Args _params23156=j::Args{this->_literals[36]};return j::call(_method,_params23156,_receiver23154);})())?j::get(_v_20743_p,this->_literals[37]):([&]()->V{V _lhs23157=([&]()->V{V _lhs23159=j::get(_v_20743_p,this->_literals[35]);V _rhs23160=j::get(_v_20743_p,this->_literals[37]);return j::binary("+",_lhs23159,_rhs23160);})();V _rhs23158=V(2.0);return V(j::number(_lhs23157)/j::number(_rhs23158));})()));
return ([&]()->V{j::Args _array23161;_array23161.push_back(_v_20744_x);_array23161.push_back(_v_20745_y);return j::array(std::move(_array23161));})();

}

return V{};
},2));return _obj23137;})();

}

return V{};
},1);
this->_v_20746_makeArea.get()=j::function([=](const j::Args &_args_fn20747,const V &_receiver_fn20747,const V &_self_fn20747) mutable ->V{
j::Cell _v_20748_place;
V _v_20749_more;
_v_20748_place.get()=_args_fn20747[0];
V _default23162=_args_fn20747[1];if(_default23162.kind==V::Undefined||_default23162.kind==V::Hole)_default23162=([&]()->V{V _obj23163=j::object();return _obj23163;})();
_v_20749_more=_default23162;
{
j::Cell _v_20750_key;
j::Cell _v_20751_last;
_v_20750_key.get()=this->_literals[12];
_v_20751_last.get()=V::null();
return ([&]()->V{V _obj23164=j::object();j::put(_obj23164,this->_literals[25],this->_literals[38]);j::put(_obj23164,this->_literals[27],j::function([=](const j::Args &_args_fn20752,const V &_receiver_fn20752,const V &_self_fn20752) mutable ->V{
V _v_20753_cols;
V _v_20754_rows;
_v_20753_cols=_args_fn20752[0];
_v_20754_rows=_args_fn20752[1];
{
V _v_20755_k;
_v_20755_k=([&]()->V{std::u16string _text23165;_text23165+=u"";_text23165+=j::string(_v_20753_cols);_text23165+=u"x";_text23165+=j::string(_v_20754_rows);_text23165+=u"";return V(std::move(_text23165));})();
if(j::truth(([&]()->V{V _logical23166=([&]()->V{V _lhs23167=_v_20755_k;V _rhs23168=_v_20750_key.get();return V(!j::equal(_lhs23167,_rhs23168,true));})();return !j::truth(_logical23166)?j::unary("!",_v_20751_last.get()):_logical23166;})())){(void)(((_v_20751_last.get()=([&]()->V{V _callee23170=_v_20748_place.get();return j::call(_callee23170,j::Args{_v_20753_cols,_v_20754_rows});})()),(_v_20750_key.get()=_v_20755_k)));
}
return _v_20751_last.get();

}

return V{};
},2));j::put(_obj23164,this->_literals[39],j::function([=](const j::Args &_args_fn20756,const V &_receiver_fn20756,const V &_self_fn20756) mutable ->V{
V _v_20757_anchor;
_v_20757_anchor=_args_fn20756[0];
{
return ([&]()->V{V _callee23172=this->_v_20734_spotOf.get();return j::call(_callee23172,j::Args{_receiver_fn20756,_v_20757_anchor});})();

}

return V{};
},1));V _spread23173=_v_20749_more;for(const auto &_key:j::keys(_spread23173))j::put(_obj23164,_key,j::get(_spread23173,_key));return _obj23164;})();

}

return V{};
},1);
this->_v_20758_areaOf.get()=j::function([=](const j::Args &_args_fn20759,const V &_receiver_fn20759,const V &_self_fn20759) mutable ->V{
V _v_20760_what;
V _v_20761_v;
_v_20760_what=_args_fn20759[0];
_v_20761_v=_args_fn20759[1];
{
if(j::truth(j::unary("!",([&]()->V{V _callee23174=this->_v_20728_isArea.get();return j::call(_callee23174,j::Args{_v_20761_v});})()))){(void)(([&]()->V{V _callee23177=this->_v_20632_fail.get();return j::call(_callee23177,j::Args{([&]()->V{std::u16string _text23175;_text23175+=u"";_text23175+=j::string(_v_20760_what);_text23175+=u" takes an area, such as cup(), area.rect(2, 2, 10, 4) or inside(cup()), not ";_text23175+=j::string(([&]()->V{V _callee23176=this->_v_20649_show.get();return j::call(_callee23176,j::Args{_v_20761_v});})());_text23175+=u"";return V(std::move(_text23175));})()});})());
}
return _v_20761_v;

}

return V{};
},2);
this->_v_20763_checkPlace.get()=j::function([=](const j::Args &_args_fn20764,const V &_receiver_fn20764,const V &_self_fn20764) mutable ->V{
V _v_20765_what;
V _v_20766_o;
_v_20765_what=_args_fn20764[0];
_v_20766_o=_args_fn20764[1];
{
if(j::truth(([&]()->V{V _logical23178=([&]()->V{V _logical23179=([&]()->V{V _logical23180=([&]()->V{V _lhs23181=j::get(_v_20766_o,this->_literals[39]);V _rhs23182=j::builtin("undefined");return V(!j::equal(_lhs23181,_rhs23182,true));})();return j::truth(_logical23180)?j::unary("!",([&]()->V{V _receiver23183=this->_v_20725_ANCHORS.get();V _method23184=this->_literals[11];V _method=j::get(_receiver23183,_method23184);j::Args _params23185=j::Args{j::get(_v_20766_o,this->_literals[39])};return j::call(_method,_params23185,_receiver23183);})()):_logical23180;})();return j::truth(_logical23179)?j::unary("!",([&]()->V{V _callee23186=this->_v_20731_isPointOn.get();return j::call(_callee23186,j::Args{j::get(_v_20766_o,this->_literals[39])});})()):_logical23179;})();return j::truth(_logical23178)?j::unary("!",([&]()->V{V _logical23187=([&]()->V{V _logical23188=([&]()->V{V _receiver23189=j::builtin("Array");V _method23190=this->_literals[6];V _method=j::get(_receiver23189,_method23190);j::Args _params23191=j::Args{j::get(_v_20766_o,this->_literals[39])};return j::call(_method,_params23191,_receiver23189);})();return j::truth(_logical23188)?([&]()->V{V _lhs23192=j::get(j::get(_v_20766_o,this->_literals[39]),this->_literals[19]);V _rhs23193=V(2.0);return V(j::equal(_lhs23192,_rhs23193,true));})():_logical23188;})();return j::truth(_logical23187)?([&]()->V{V _receiver23197=j::get(_v_20766_o,this->_literals[39]);V _method23198=this->_literals[40];V _method=j::get(_receiver23197,_method23198);j::Args _params23199=j::Args{j::function([=](const j::Args &_args_fn20767,const V &_receiver_fn20767,const V &_self_fn20767) mutable ->V{
V _v_20768_v;
_v_20768_v=_args_fn20767[0];
return ([&]()->V{V _receiver23194=j::builtin("Number");V _method23195=this->_literals[14];V _method=j::get(_receiver23194,_method23195);j::Args _params23196=j::Args{_v_20768_v};return j::call(_method,_params23196,_receiver23194);})();
return V{};
},1)};return j::call(_method,_params23199,_receiver23197);})():_logical23187;})()):_logical23178;})())){(void)(([&]()->V{V _callee23210=this->_v_20632_fail.get();return j::call(_callee23210,j::Args{([&]()->V{std::u16string _text23200;_text23200+=u"";_text23200+=j::string(_v_20765_what);_text23200+=u".at takes ";_text23200+=j::string(([&]()->V{V _callee23207=this->_v_20660_or.get();return j::call(_callee23207,j::Args{([&]()->V{V _receiver23204=this->_v_20725_ANCHORS.get();V _method23205=this->_literals[8];V _method=j::get(_receiver23204,_method23205);j::Args _params23206=j::Args{j::function([=](const j::Args &_args_fn20769,const V &_receiver_fn20769,const V &_self_fn20769) mutable ->V{
V _v_20770_a;
_v_20770_a=_args_fn20769[0];
return ([&]()->V{V _receiver23201=j::builtin("JSON");V _method23202=this->_literals[5];V _method=j::get(_receiver23201,_method23202);j::Args _params23203=j::Args{_v_20770_a};return j::call(_method,_params23203,_receiver23201);})();
return V{};
},1)};return j::call(_method,_params23206,_receiver23204);})()});})());_text23200+=u", a point [x, y] in cells, or a point on another shape such as body.at(\"bottom-left\"), not ";_text23200+=j::string(([&]()->V{V _callee23208=this->_v_20649_show.get();return j::call(_callee23208,j::Args{j::get(_v_20766_o,this->_literals[39])});})());_text23200+=u"";_text23200+=j::string(([&]()->V{V _callee23209=this->_v_20645_suggest.get();return j::call(_callee23209,j::Args{j::get(_v_20766_o,this->_literals[39]),this->_v_20725_ANCHORS.get()});})());_text23200+=u"";return V(std::move(_text23200));})()});})());
}
if(j::truth(([&]()->V{V _lhs23211=j::get(_v_20766_o,this->_literals[41]);V _rhs23212=j::builtin("undefined");return V(!j::equal(_lhs23211,_rhs23212,true));})())){(void)(([&]()->V{V _callee23214=this->_v_20758_areaOf.get();return j::call(_callee23214,j::Args{([&]()->V{std::u16string _text23213;_text23213+=u"";_text23213+=j::string(_v_20765_what);_text23213+=u".within";return V(std::move(_text23213));})(),j::get(_v_20766_o,this->_literals[41])});})());
}
if(j::truth(([&]()->V{V _lhs23215=j::get(_v_20766_o,this->_literals[42]);V _rhs23216=j::builtin("undefined");return V(!j::equal(_lhs23215,_rhs23216,true));})())){(void)(([&]()->V{V _callee23218=this->_v_20758_areaOf.get();return j::call(_callee23218,j::Args{([&]()->V{std::u16string _text23217;_text23217+=u"";_text23217+=j::string(_v_20765_what);_text23217+=u".on";return V(std::move(_text23217));})(),j::get(_v_20766_o,this->_literals[42])});})());
}
(void)(([&]()->V{V _callee23220=this->_v_20663_numberOf.get();return j::call(_callee23220,j::Args{([&]()->V{std::u16string _text23219;_text23219+=u"";_text23219+=j::string(_v_20765_what);_text23219+=u".x";return V(std::move(_text23219));})(),j::get(_v_20766_o,this->_literals[43]),V(0.0)});})());
(void)(([&]()->V{V _callee23222=this->_v_20663_numberOf.get();return j::call(_callee23222,j::Args{([&]()->V{std::u16string _text23221;_text23221+=u"";_text23221+=j::string(_v_20765_what);_text23221+=u".y";return V(std::move(_text23221));})(),j::get(_v_20766_o,this->_literals[44]),V(0.0)});})());
if(j::truth(([&]()->V{V _logical23223=([&]()->V{V _logical23224=([&]()->V{V _lhs23225=j::get(_v_20766_o,this->_literals[45]);V _rhs23226=j::builtin("undefined");return V(!j::equal(_lhs23225,_rhs23226,true));})();return j::truth(_logical23224)?j::unary("!",([&]()->V{V _logical23227=([&]()->V{V _lhs23228=j::unary("typeof",j::get(_v_20766_o,this->_literals[45]));V _rhs23229=this->_literals[4];return V(j::equal(_lhs23228,_rhs23229,true));})();return j::truth(_logical23227)?([&]()->V{V _receiver23230=j::builtin("Object");V _method23231=this->_literals[15];V _method=j::get(_receiver23230,_method23231);j::Args _params23232=j::Args{this->_v_20726_SIZES.get(),j::get(_v_20766_o,this->_literals[45])};return j::call(_method,_params23232,_receiver23230);})():_logical23227;})()):_logical23224;})();return j::truth(_logical23223)?j::unary("!",([&]()->V{V _logical23233=([&]()->V{V _logical23234=([&]()->V{V _lhs23235=j::unary("typeof",j::get(_v_20766_o,this->_literals[45]));V _rhs23236=this->_literals[13];return V(j::equal(_lhs23235,_rhs23236,true));})();return j::truth(_logical23234)?([&]()->V{V _lhs23237=j::get(_v_20766_o,this->_literals[45]);V _rhs23238=V(0.0);return j::binary(">",_lhs23237,_rhs23238);})():_logical23234;})();return j::truth(_logical23233)?([&]()->V{V _lhs23239=j::get(_v_20766_o,this->_literals[45]);V _rhs23240=V(1.0);return j::binary("<=",_lhs23239,_rhs23240);})():_logical23233;})()):_logical23223;})())){(void)(([&]()->V{V _callee23257=this->_v_20632_fail.get();return j::call(_callee23257,j::Args{([&]()->V{std::u16string _text23241;_text23241+=u"";_text23241+=j::string(_v_20765_what);_text23241+=u".size takes ";_text23241+=j::string(([&]()->V{V _callee23251=this->_v_20660_or.get();return j::call(_callee23251,j::Args{([&]()->V{V _receiver23245=([&]()->V{V _receiver23248=j::builtin("Object");V _method23249=this->_literals[10];V _method=j::get(_receiver23248,_method23249);j::Args _params23250=j::Args{this->_v_20726_SIZES.get()};return j::call(_method,_params23250,_receiver23248);})();V _method23246=this->_literals[8];V _method=j::get(_receiver23245,_method23246);j::Args _params23247=j::Args{j::function([=](const j::Args &_args_fn20771,const V &_receiver_fn20771,const V &_self_fn20771) mutable ->V{
V _v_20772_s;
_v_20772_s=_args_fn20771[0];
return ([&]()->V{V _receiver23242=j::builtin("JSON");V _method23243=this->_literals[5];V _method=j::get(_receiver23242,_method23243);j::Args _params23244=j::Args{_v_20772_s};return j::call(_method,_params23244,_receiver23242);})();
return V{};
},1)};return j::call(_method,_params23247,_receiver23245);})()});})());_text23241+=u", or a share of the room's height above 0, up to 1, not ";_text23241+=j::string(([&]()->V{V _callee23252=this->_v_20649_show.get();return j::call(_callee23252,j::Args{j::get(_v_20766_o,this->_literals[45])});})());_text23241+=u"";_text23241+=j::string(([&]()->V{V _callee23256=this->_v_20645_suggest.get();return j::call(_callee23256,j::Args{j::get(_v_20766_o,this->_literals[45]),([&]()->V{V _receiver23253=j::builtin("Object");V _method23254=this->_literals[10];V _method=j::get(_receiver23253,_method23254);j::Args _params23255=j::Args{this->_v_20726_SIZES.get()};return j::call(_method,_params23255,_receiver23253);})()});})());_text23241+=u"";return V(std::move(_text23241));})()});})());
}
(void)(([&]()->V{V _callee23259=this->_v_20663_numberOf.get();return j::call(_callee23259,j::Args{([&]()->V{std::u16string _text23258;_text23258+=u"";_text23258+=j::string(_v_20765_what);_text23258+=u".cols";return V(std::move(_text23258));})(),j::get(_v_20766_o,this->_literals[46]),V(1.0),V(1.0),V(320.0),this->_literals[47]});})());
(void)(([&]()->V{V _callee23261=this->_v_20663_numberOf.get();return j::call(_callee23261,j::Args{([&]()->V{std::u16string _text23260;_text23260+=u"";_text23260+=j::string(_v_20765_what);_text23260+=u".rows";return V(std::move(_text23260));})(),j::get(_v_20766_o,this->_literals[48]),V(1.0),V(1.0),V(120.0),this->_literals[49]});})());
(void)(([&]()->V{V _callee23263=this->_v_20696_boolOf.get();return j::call(_callee23263,j::Args{([&]()->V{std::u16string _text23262;_text23262+=u"";_text23262+=j::string(_v_20765_what);_text23262+=u".flip";return V(std::move(_text23262));})(),j::get(_v_20766_o,this->_literals[50]),V(false)});})());

}

return V{};
},2);
this->_v_20773_roomOf.get()=j::function([=](const j::Args &_args_fn20774,const V &_receiver_fn20774,const V &_self_fn20774) mutable ->V{
V _v_20775_o;
V _v_20776_cols;
V _v_20777_rows;
_v_20775_o=_args_fn20774[0];
_v_20776_cols=_args_fn20774[1];
_v_20777_rows=_args_fn20774[2];
{
V _v_20778_p;
if(j::truth(j::unary("!",j::get(_v_20775_o,this->_literals[41])))){return ([&]()->V{V _obj23264=j::object();j::put(_obj23264,this->_literals[30],V(0.0));j::put(_obj23264,this->_literals[35],V(0.0));j::put(_obj23264,this->_literals[32],_v_20776_cols);j::put(_obj23264,this->_literals[37],_v_20777_rows);return _obj23264;})();
}
_v_20778_p=([&]()->V{V _receiver23265=j::get(_v_20775_o,this->_literals[41]);V _method23266=this->_literals[27];V _method=j::get(_receiver23265,_method23266);j::Args _params23267=j::Args{_v_20776_cols,_v_20777_rows};return j::call(_method,_params23267,_receiver23265);})();
return ([&]()->V{V _obj23268=j::object();j::put(_obj23268,this->_literals[30],([&]()->V{V _receiver23271=j::builtin("Math");V _method23272=this->_literals[51];V _method=j::get(_receiver23271,_method23272);j::Args _params23273=j::Args{V(0.0),j::get(_v_20778_p,this->_literals[30])};return j::call(_method,_params23273,_receiver23271);})());j::put(_obj23268,this->_literals[35],([&]()->V{V _receiver23276=j::builtin("Math");V _method23277=this->_literals[51];V _method=j::get(_receiver23276,_method23277);j::Args _params23278=j::Args{V(0.0),j::get(_v_20778_p,this->_literals[35])};return j::call(_method,_params23278,_receiver23276);})());j::put(_obj23268,this->_literals[32],([&]()->V{V _receiver23281=j::builtin("Math");V _method23282=this->_literals[52];V _method=j::get(_receiver23281,_method23282);j::Args _params23283=j::Args{_v_20776_cols,j::get(_v_20778_p,this->_literals[32])};return j::call(_method,_params23283,_receiver23281);})());j::put(_obj23268,this->_literals[37],([&]()->V{V _receiver23286=j::builtin("Math");V _method23287=this->_literals[52];V _method=j::get(_receiver23286,_method23287);j::Args _params23288=j::Args{_v_20777_rows,j::get(_v_20778_p,this->_literals[37])};return j::call(_method,_params23288,_receiver23286);})());return _obj23268;})();

}

return V{};
},3);
this->_v_20779_boxOf.get()=j::function([=](const j::Args &_args_fn20780,const V &_receiver_fn20780,const V &_self_fn20780) mutable ->V{
V _v_20781_o;
V _v_20782_ratio;
V _v_20783_cols;
V _v_20784_rows;
V _v_20785_def;
_v_20781_o=_args_fn20780[0];
_v_20782_ratio=_args_fn20780[1];
_v_20783_cols=_args_fn20780[2];
_v_20784_rows=_args_fn20780[3];
_v_20785_def=_args_fn20780[4];
{
V _v_20786_f;
V _v_20787_fw;
V _v_20788_fh;
V _v_20789_share;
V _v_20792_h;
V _v_20793_w;
V _v_20794_x0;
V _v_20795_y0;
_v_20786_f=([&]()->V{V _callee23289=this->_v_20773_roomOf.get();return j::call(_callee23289,j::Args{_v_20781_o,_v_20783_cols,_v_20784_rows});})();
_v_20787_fw=([&]()->V{V _lhs23290=j::get(_v_20786_f,this->_literals[32]);V _rhs23291=j::get(_v_20786_f,this->_literals[30]);return V(j::number(_lhs23290)-j::number(_rhs23291));})();
_v_20788_fh=([&]()->V{V _lhs23292=j::get(_v_20786_f,this->_literals[37]);V _rhs23293=j::get(_v_20786_f,this->_literals[35]);return V(j::number(_lhs23292)-j::number(_rhs23293));})();
_v_20789_share=j::function([=](const j::Args &_args_fn20790,const V &_receiver_fn20790,const V &_self_fn20790) mutable ->V{
V _v_20791_s;
_v_20791_s=_args_fn20790[0];
return (j::truth(([&]()->V{V _lhs23294=j::unary("typeof",_v_20791_s);V _rhs23295=this->_literals[13];return V(j::equal(_lhs23294,_rhs23295,true));})())?_v_20791_s:j::get(this->_v_20726_SIZES.get(),_v_20791_s));
return V{};
},1);
_v_20792_h=([&]()->V{V _logical23296=j::get(_v_20781_o,this->_literals[48]);return j::nullish(_logical23296)?(j::truth(([&]()->V{V _lhs23297=j::get(_v_20781_o,this->_literals[46]);V _rhs23298=j::builtin("undefined");return V(!j::equal(_lhs23297,_rhs23298,true));})())?([&]()->V{V _lhs23299=j::get(_v_20781_o,this->_literals[46]);V _rhs23300=([&]()->V{V _lhs23301=_v_20782_ratio;V _rhs23302=this->_v_20727_ASPECT.get();return V(j::number(_lhs23301)*j::number(_rhs23302));})();return V(j::number(_lhs23299)/j::number(_rhs23300));})():([&]()->V{V _lhs23303=([&]()->V{V _callee23306=_v_20789_share;return j::call(_callee23306,j::Args{([&]()->V{V _logical23305=j::get(_v_20781_o,this->_literals[45]);return j::nullish(_logical23305)?j::get(_v_20785_def,this->_literals[45]):_logical23305;})()});})();V _rhs23304=_v_20788_fh;return V(j::number(_lhs23303)*j::number(_rhs23304));})()):_logical23296;})();
_v_20793_w=([&]()->V{V _logical23307=j::get(_v_20781_o,this->_literals[46]);return j::nullish(_logical23307)?([&]()->V{V _lhs23308=([&]()->V{V _lhs23310=_v_20792_h;V _rhs23311=_v_20782_ratio;return V(j::number(_lhs23310)*j::number(_rhs23311));})();V _rhs23309=this->_v_20727_ASPECT.get();return V(j::number(_lhs23308)*j::number(_rhs23309));})():_logical23307;})();
if(j::truth(([&]()->V{V _logical23312=([&]()->V{V _logical23313=([&]()->V{V _lhs23314=j::get(_v_20781_o,this->_literals[46]);V _rhs23315=j::builtin("undefined");return V(j::equal(_lhs23314,_rhs23315,true));})();return j::truth(_logical23313)?([&]()->V{V _lhs23316=j::get(_v_20781_o,this->_literals[48]);V _rhs23317=j::builtin("undefined");return V(j::equal(_lhs23316,_rhs23317,true));})():_logical23313;})();return j::truth(_logical23312)?([&]()->V{V _lhs23318=_v_20793_w;V _rhs23319=_v_20787_fw;return j::binary(">",_lhs23318,_rhs23319);})():_logical23312;})())){(void)(((_v_20792_h=j::binary("*",_v_20792_h,([&]()->V{V _lhs23321=_v_20787_fw;V _rhs23322=_v_20793_w;return V(j::number(_lhs23321)/j::number(_rhs23322));})())),(_v_20793_w=_v_20787_fw)));
}
(void)((_v_20792_h=([&]()->V{V _receiver23328=j::builtin("Math");V _method23329=this->_literals[51];V _method=j::get(_receiver23328,_method23329);j::Args _params23330=j::Args{V(1.0),([&]()->V{V _number23325=_v_20792_h;return V(std::floor(j::number(_number23325)+.5));})()};return j::call(_method,_params23330,_receiver23328);})()));
(void)((_v_20793_w=([&]()->V{V _receiver23335=j::builtin("Math");V _method23336=this->_literals[51];V _method=j::get(_receiver23335,_method23336);j::Args _params23337=j::Args{V(1.0),([&]()->V{V _number23332=_v_20793_w;return V(std::floor(j::number(_number23332)+.5));})()};return j::call(_method,_params23337,_receiver23335);})()));
if(j::truth(j::get(_v_20781_o,this->_literals[42]))){
V _v_20796_p;
_v_20796_p=([&]()->V{V _receiver23338=j::get(_v_20781_o,this->_literals[42]);V _method23339=this->_literals[27];V _method=j::get(_receiver23338,_method23339);j::Args _params23340=j::Args{_v_20783_cols,_v_20784_rows};return j::call(_method,_params23340,_receiver23338);})();
(void)((_v_20794_x0=([&]()->V{V _lhs23342=([&]()->V{V _lhs23344=([&]()->V{V _lhs23346=j::get(_v_20796_p,this->_literals[30]);V _rhs23347=j::get(_v_20796_p,this->_literals[32]);return j::binary("+",_lhs23346,_rhs23347);})();V _rhs23345=V(2.0);return V(j::number(_lhs23344)/j::number(_rhs23345));})();V _rhs23343=([&]()->V{V _lhs23348=_v_20793_w;V _rhs23349=V(2.0);return V(j::number(_lhs23348)/j::number(_rhs23349));})();return V(j::number(_lhs23342)-j::number(_rhs23343));})()));
(void)((_v_20795_y0=([&]()->V{V _lhs23351=j::get(_v_20796_p,this->_literals[35]);V _rhs23352=_v_20792_h;return V(j::number(_lhs23351)-j::number(_rhs23352));})()));

}
else {if(j::truth(([&]()->V{V _logical23353=([&]()->V{V _receiver23354=j::builtin("Array");V _method23355=this->_literals[6];V _method=j::get(_receiver23354,_method23355);j::Args _params23356=j::Args{j::get(_v_20781_o,this->_literals[39])};return j::call(_method,_params23356,_receiver23354);})();return !j::truth(_logical23353)?([&]()->V{V _callee23357=this->_v_20731_isPointOn.get();return j::call(_callee23357,j::Args{j::get(_v_20781_o,this->_literals[39])});})():_logical23353;})())){
V _v_20797_px;
V _v_20798_py;
V _pattern23362=(j::truth(([&]()->V{V _callee23358=this->_v_20731_isPointOn.get();return j::call(_callee23358,j::Args{j::get(_v_20781_o,this->_literals[39])});})())?([&]()->V{V _receiver23359=j::get(_v_20781_o,this->_literals[39]);V _method23360=this->_literals[27];V _method=j::get(_receiver23359,_method23360);j::Args _params23361=j::Args{_v_20783_cols,_v_20784_rows};return j::call(_method,_params23361,_receiver23359);})():j::get(_v_20781_o,this->_literals[39]));
_v_20797_px=j::get(_pattern23362,V(0));
_v_20798_py=j::get(_pattern23362,V(1));
(void)((_v_20794_x0=([&]()->V{V _lhs23364=_v_20797_px;V _rhs23365=([&]()->V{V _lhs23366=_v_20793_w;V _rhs23367=V(2.0);return V(j::number(_lhs23366)/j::number(_rhs23367));})();return V(j::number(_lhs23364)-j::number(_rhs23365));})()));
(void)((_v_20795_y0=([&]()->V{V _lhs23369=_v_20798_py;V _rhs23370=([&]()->V{V _lhs23371=_v_20792_h;V _rhs23372=V(2.0);return V(j::number(_lhs23371)/j::number(_rhs23372));})();return V(j::number(_lhs23369)-j::number(_rhs23370));})()));

}
else {
V _v_20799_a;
_v_20799_a=([&]()->V{V _logical23373=j::get(_v_20781_o,this->_literals[39]);return j::nullish(_logical23373)?j::get(_v_20785_def,this->_literals[39]):_logical23373;})();
(void)((_v_20794_x0=(j::truth(([&]()->V{V _receiver23375=_v_20799_a;V _method23376=this->_literals[29];V _method=j::get(_receiver23375,_method23376);j::Args _params23377=j::Args{this->_literals[28]};return j::call(_method,_params23377,_receiver23375);})())?j::get(_v_20786_f,this->_literals[30]):(j::truth(([&]()->V{V _receiver23378=_v_20799_a;V _method23379=this->_literals[29];V _method=j::get(_receiver23378,_method23379);j::Args _params23380=j::Args{this->_literals[31]};return j::call(_method,_params23380,_receiver23378);})())?([&]()->V{V _lhs23381=j::get(_v_20786_f,this->_literals[32]);V _rhs23382=_v_20793_w;return V(j::number(_lhs23381)-j::number(_rhs23382));})():([&]()->V{V _lhs23383=j::get(_v_20786_f,this->_literals[30]);V _rhs23384=([&]()->V{V _lhs23385=([&]()->V{V _lhs23387=_v_20787_fw;V _rhs23388=_v_20793_w;return V(j::number(_lhs23387)-j::number(_rhs23388));})();V _rhs23386=V(2.0);return V(j::number(_lhs23385)/j::number(_rhs23386));})();return j::binary("+",_lhs23383,_rhs23384);})()))));
(void)((_v_20795_y0=(j::truth(([&]()->V{V _receiver23390=_v_20799_a;V _method23391=this->_literals[34];V _method=j::get(_receiver23390,_method23391);j::Args _params23392=j::Args{this->_literals[33]};return j::call(_method,_params23392,_receiver23390);})())?j::get(_v_20786_f,this->_literals[35]):(j::truth(([&]()->V{V _receiver23393=_v_20799_a;V _method23394=this->_literals[34];V _method=j::get(_receiver23393,_method23394);j::Args _params23395=j::Args{this->_literals[36]};return j::call(_method,_params23395,_receiver23393);})())?([&]()->V{V _lhs23396=j::get(_v_20786_f,this->_literals[37]);V _rhs23397=_v_20792_h;return V(j::number(_lhs23396)-j::number(_rhs23397));})():([&]()->V{V _lhs23398=j::get(_v_20786_f,this->_literals[35]);V _rhs23399=([&]()->V{V _lhs23400=([&]()->V{V _lhs23402=_v_20788_fh;V _rhs23403=_v_20792_h;return V(j::number(_lhs23402)-j::number(_rhs23403));})();V _rhs23401=V(2.0);return V(j::number(_lhs23400)/j::number(_rhs23401));})();return j::binary("+",_lhs23398,_rhs23399);})()))));

}

}
return ([&]()->V{V _obj23404=j::object();j::put(_obj23404,this->_literals[30],([&]()->V{V _number23408=([&]()->V{V _lhs23409=_v_20794_x0;V _rhs23410=([&]()->V{V _logical23411=j::get(_v_20781_o,this->_literals[43]);return j::nullish(_logical23411)?V(0.0):_logical23411;})();return j::binary("+",_lhs23409,_rhs23410);})();return V(std::floor(j::number(_number23408)+.5));})());j::put(_obj23404,this->_literals[35],([&]()->V{V _number23415=([&]()->V{V _lhs23416=_v_20795_y0;V _rhs23417=([&]()->V{V _logical23418=j::get(_v_20781_o,this->_literals[44]);return j::nullish(_logical23418)?V(0.0):_logical23418;})();return j::binary("+",_lhs23416,_rhs23417);})();return V(std::floor(j::number(_number23415)+.5));})());j::put(_obj23404,this->_literals[53],_v_20793_w);j::put(_obj23404,this->_literals[54],_v_20792_h);j::put(_obj23404,this->_literals[50],j::unary("!",j::unary("!",j::get(_v_20781_o,this->_literals[50]))));j::put(_obj23404,this->_literals[55],_v_20786_f);return _obj23404;})();

}

return V{};
},5);
this->_v_20800_unitTest.get()=j::function([=](const j::Args &_args_fn20801,const V &_receiver_fn20801,const V &_self_fn20801) mutable ->V{
j::Cell _v_20802_b;
j::Cell _v_20803_ratio;
j::Cell _v_20804_unit;
_v_20802_b.get()=_args_fn20801[0];
_v_20803_ratio.get()=_args_fn20801[1];
_v_20804_unit.get()=_args_fn20801[2];
{
return j::function([=](const j::Args &_args_fn20805,const V &_receiver_fn20805,const V &_self_fn20805) mutable ->V{
V _v_20806_x;
V _v_20807_y;
_v_20806_x=_args_fn20805[0];
_v_20807_y=_args_fn20805[1];
{
V _v_20808_u;
V _v_20809_v;
_v_20808_u=([&]()->V{V _lhs23419=([&]()->V{V _lhs23421=_v_20806_x;V _rhs23422=j::get(_v_20802_b.get(),this->_literals[30]);return V(j::number(_lhs23421)-j::number(_rhs23422));})();V _rhs23420=j::get(_v_20802_b.get(),this->_literals[53]);return V(j::number(_lhs23419)/j::number(_rhs23420));})();
_v_20809_v=([&]()->V{V _lhs23423=([&]()->V{V _lhs23425=_v_20807_y;V _rhs23426=j::get(_v_20802_b.get(),this->_literals[35]);return V(j::number(_lhs23425)-j::number(_rhs23426));})();V _rhs23424=j::get(_v_20802_b.get(),this->_literals[54]);return V(j::number(_lhs23423)/j::number(_rhs23424));})();
if(j::truth(([&]()->V{V _logical23427=([&]()->V{V _logical23428=([&]()->V{V _logical23429=([&]()->V{V _lhs23430=_v_20808_u;V _rhs23431=V(0.0);return j::binary("<",_lhs23430,_rhs23431);})();return !j::truth(_logical23429)?([&]()->V{V _lhs23432=_v_20808_u;V _rhs23433=V(1.0);return j::binary(">",_lhs23432,_rhs23433);})():_logical23429;})();return !j::truth(_logical23428)?([&]()->V{V _lhs23434=_v_20809_v;V _rhs23435=V(0.0);return j::binary("<",_lhs23434,_rhs23435);})():_logical23428;})();return !j::truth(_logical23427)?([&]()->V{V _lhs23436=_v_20809_v;V _rhs23437=V(1.0);return j::binary(">",_lhs23436,_rhs23437);})():_logical23427;})())){return V(false);
}
if(j::truth(j::get(_v_20802_b.get(),this->_literals[50]))){(void)((_v_20808_u=([&]()->V{V _lhs23439=V(1.0);V _rhs23440=_v_20808_u;return V(j::number(_lhs23439)-j::number(_rhs23440));})()));
}
return ([&]()->V{V _callee23447=_v_20804_unit.get();return j::call(_callee23447,j::Args{([&]()->V{V _lhs23441=([&]()->V{V _lhs23443=_v_20808_u;V _rhs23444=V(0.5);return V(j::number(_lhs23443)-j::number(_rhs23444));})();V _rhs23442=_v_20803_ratio.get();return V(j::number(_lhs23441)*j::number(_rhs23442));})(),([&]()->V{V _lhs23445=_v_20809_v;V _rhs23446=V(0.5);return V(j::number(_lhs23445)-j::number(_rhs23446));})()});})();

}

return V{};
},2);

}

return V{};
},3);
this->_v_20815_unitShape.get()=j::function([=](const j::Args &_args_fn20816,const V &_receiver_fn20816,const V &_self_fn20816) mutable ->V{
V _v_20817_what;
V _v_20818_o;
V _v_20819_keys;
j::Cell _v_20820_ratio;
j::Cell _v_20821_def;
j::Cell _v_20822_unit;
j::Cell _v_20823_more;
_v_20817_what=_args_fn20816[0];
_v_20818_o=_args_fn20816[1];
_v_20819_keys=_args_fn20816[2];
_v_20820_ratio.get()=_args_fn20816[3];
_v_20821_def.get()=_args_fn20816[4];
_v_20822_unit.get()=_args_fn20816[5];
V _default23448=_args_fn20816[6];if(_default23448.kind==V::Undefined||_default23448.kind==V::Hole)_default23448=([&]()->V{V _obj23449=j::object();return _obj23449;})();
_v_20823_more.get()=_default23448;
{
j::Cell _v_20824_p;
_v_20824_p.get()=([&]()->V{V _callee23452=this->_v_20652_optionsOf.get();return j::call(_callee23452,j::Args{([&]()->V{std::u16string _text23450;_text23450+=u"";_text23450+=j::string(_v_20817_what);_text23450+=u"()";return V(std::move(_text23450));})(),_v_20818_o,([&]()->V{j::Args _array23451;for(const auto &_value:j::elements(this->_v_20762_PLACE_KEYS.get()))_array23451.push_back(_value);for(const auto &_value:j::elements(_v_20819_keys))_array23451.push_back(_value);return j::array(std::move(_array23451));})()});})();
(void)(([&]()->V{V _callee23453=this->_v_20763_checkPlace.get();return j::call(_callee23453,j::Args{_v_20817_what,_v_20824_p.get()});})());
return ([&]()->V{V _callee23499=this->_v_20746_makeArea.get();return j::call(_callee23499,j::Args{j::function([=](const j::Args &_args_fn20825,const V &_receiver_fn20825,const V &_self_fn20825) mutable ->V{
V _v_20826_cols;
V _v_20827_rows;
_v_20826_cols=_args_fn20825[0];
_v_20827_rows=_args_fn20825[1];
{
j::Cell _v_20828_b;
j::Cell _v_20829_test;
V _v_20830_base;
j::Cell _v_20831_open;
j::Cell _v_20832_floor;
V _v_20833_cavity;
_v_20828_b.get()=([&]()->V{V _callee23454=this->_v_20779_boxOf.get();return j::call(_callee23454,j::Args{_v_20824_p.get(),_v_20820_ratio.get(),_v_20826_cols,_v_20827_rows,_v_20821_def.get()});})();
_v_20829_test.get()=([&]()->V{V _callee23455=this->_v_20800_unitTest.get();return j::call(_callee23455,j::Args{_v_20828_b.get(),_v_20820_ratio.get(),_v_20822_unit.get()});})();
if(j::truth(j::unary("!",j::get(_v_20823_more.get(),this->_literals[56])))){return ([&]()->V{V _callee23456=this->_v_20810_placedOf.get();return j::call(_callee23456,j::Args{_v_20828_b.get(),_v_20829_test.get()});})();
}
_v_20830_base=([&]()->V{V _receiver23462=j::builtin("Math");V _method23463=this->_literals[51];V _method=j::get(_receiver23462,_method23463);j::Args _params23464=j::Args{V(1.0),([&]()->V{V _receiver23457=j::get(_v_20823_more.get(),this->_literals[56]);V _method23458=this->_literals[57];V _method=j::get(_receiver23457,_method23458);j::Args _params23459=j::Args{j::get(_v_20828_b.get(),this->_literals[54])};return j::call(_method,_params23459,_receiver23457);})()};return j::call(_method,_params23464,_receiver23462);})();
_v_20831_open.get()=j::get(j::get(_v_20823_more.get(),this->_literals[56]),this->_literals[58]);
_v_20832_floor.get()=([&]()->V{V _lhs23465=([&]()->V{V _lhs23467=j::get(_v_20828_b.get(),this->_literals[35]);V _rhs23468=j::get(_v_20828_b.get(),this->_literals[54]);return j::binary("+",_lhs23467,_rhs23468);})();V _rhs23466=_v_20830_base;return V(j::number(_lhs23465)-j::number(_rhs23466));})();
_v_20833_cavity=j::function([=](const j::Args &_args_fn20834,const V &_receiver_fn20834,const V &_self_fn20834) mutable ->V{
V _v_20835_x;
V _v_20836_y;
_v_20835_x=_args_fn20834[0];
_v_20836_y=_args_fn20834[1];
return ([&]()->V{V _logical23469=([&]()->V{V _logical23470=([&]()->V{V _logical23471=([&]()->V{V _logical23472=([&]()->V{V _lhs23473=_v_20836_y;V _rhs23474=_v_20832_floor.get();return j::binary("<",_lhs23473,_rhs23474);})();return j::truth(_logical23472)?([&]()->V{V _callee23475=_v_20829_test.get();return j::call(_callee23475,j::Args{_v_20835_x,_v_20836_y});})():_logical23472;})();return j::truth(_logical23471)?([&]()->V{V _callee23478=_v_20829_test.get();return j::call(_callee23478,j::Args{([&]()->V{V _lhs23476=_v_20835_x;V _rhs23477=V(1.0);return V(j::number(_lhs23476)-j::number(_rhs23477));})(),_v_20836_y});})():_logical23471;})();return j::truth(_logical23470)?([&]()->V{V _callee23481=_v_20829_test.get();return j::call(_callee23481,j::Args{([&]()->V{V _lhs23479=_v_20835_x;V _rhs23480=V(1.0);return j::binary("+",_lhs23479,_rhs23480);})(),_v_20836_y});})():_logical23470;})();return j::truth(_logical23469)?([&]()->V{V _logical23482=([&]()->V{V _callee23485=_v_20829_test.get();return j::call(_callee23485,j::Args{_v_20835_x,([&]()->V{V _lhs23483=_v_20836_y;V _rhs23484=V(1.0);return V(j::number(_lhs23483)-j::number(_rhs23484));})()});})();return !j::truth(_logical23482)?([&]()->V{V _logical23486=_v_20831_open.get();return j::truth(_logical23486)?([&]()->V{V _lhs23487=([&]()->V{V _lhs23489=_v_20836_y;V _rhs23490=V(1.0);return V(j::number(_lhs23489)-j::number(_rhs23490));})();V _rhs23488=j::get(_v_20828_b.get(),this->_literals[35]);return j::binary("<",_lhs23487,_rhs23488);})():_logical23486;})():_logical23482;})():_logical23469;})();
return V{};
},2);
return ([&]()->V{V _callee23497=this->_v_20810_placedOf.get();return j::call(_callee23497,j::Args{_v_20828_b.get(),_v_20829_test.get(),([&]()->V{V _obj23491=j::object();j::put(_obj23491,this->_literals[59],([&]()->V{V _obj23492=j::object();j::put(_obj23492,this->_literals[20],_v_20833_cavity);j::put(_obj23492,this->_literals[30],j::get(_v_20828_b.get(),this->_literals[30]));j::put(_obj23492,this->_literals[35],j::get(_v_20828_b.get(),this->_literals[35]));j::put(_obj23492,this->_literals[32],([&]()->V{V _lhs23493=j::get(_v_20828_b.get(),this->_literals[30]);V _rhs23494=j::get(_v_20828_b.get(),this->_literals[53]);return j::binary("+",_lhs23493,_rhs23494);})());j::put(_obj23492,this->_literals[37],([&]()->V{V _lhs23495=j::get(_v_20828_b.get(),this->_literals[35]);V _rhs23496=j::get(_v_20828_b.get(),this->_literals[54]);return j::binary("+",_lhs23495,_rhs23496);})());return _obj23492;})());j::put(_obj23491,this->_literals[58],j::get(j::get(_v_20823_more.get(),this->_literals[56]),this->_literals[58]));return _obj23491;})()});})();

}

return V{};
},2),([&]()->V{V _obj23498=j::object();j::put(_obj23498,this->_literals[60],j::get(_v_20823_more.get(),this->_literals[60]));return _obj23498;})()});})();

}

return V{};
},6);
this->_v_20837_inPolygon.get()=j::function([=](const j::Args &_args_fn20838,const V &_receiver_fn20838,const V &_self_fn20838) mutable ->V{
V _v_20839_pts;
V _v_20840_x;
V _v_20841_y;
_v_20839_pts=_args_fn20838[0];
_v_20840_x=_args_fn20838[1];
_v_20841_y=_args_fn20838[2];
{
V _v_20842_c;
_v_20842_c=V(false);
{V _v_20843_i;
V _v_20844_j;
_v_20843_i=V(0.0);
_v_20844_j=([&]()->V{V _lhs23500=j::get(_v_20839_pts,this->_literals[19]);V _rhs23501=V(1.0);return V(j::number(_lhs23500)-j::number(_rhs23501));})();
for(;j::truth(([&]()->V{V _lhs23502=_v_20843_i;V _rhs23503=j::get(_v_20839_pts,this->_literals[19]);return j::binary("<",_lhs23502,_rhs23503);})());(void)((_v_20844_j=j::increment(_v_20843_i,1,false)))){
V _v_20845_xi;
V _v_20846_yi;
V _v_20847_xj;
V _v_20848_yj;
V _v_20849_cross;
V _pattern23505=j::get(_v_20839_pts,_v_20843_i);
_v_20845_xi=j::get(_pattern23505,V(0));
_v_20846_yi=j::get(_pattern23505,V(1));
V _pattern23506=j::get(_v_20839_pts,_v_20844_j);
_v_20847_xj=j::get(_pattern23506,V(0));
_v_20848_yj=j::get(_pattern23506,V(1));
_v_20849_cross=([&]()->V{V _lhs23507=([&]()->V{V _lhs23509=([&]()->V{V _lhs23511=_v_20847_xj;V _rhs23512=_v_20845_xi;return V(j::number(_lhs23511)-j::number(_rhs23512));})();V _rhs23510=([&]()->V{V _lhs23513=_v_20841_y;V _rhs23514=_v_20846_yi;return V(j::number(_lhs23513)-j::number(_rhs23514));})();return V(j::number(_lhs23509)*j::number(_rhs23510));})();V _rhs23508=([&]()->V{V _lhs23515=([&]()->V{V _lhs23517=_v_20848_yj;V _rhs23518=_v_20846_yi;return V(j::number(_lhs23517)-j::number(_rhs23518));})();V _rhs23516=([&]()->V{V _lhs23519=_v_20840_x;V _rhs23520=_v_20845_xi;return V(j::number(_lhs23519)-j::number(_rhs23520));})();return V(j::number(_lhs23515)*j::number(_rhs23516));})();return V(j::number(_lhs23507)-j::number(_rhs23508));})();
if(j::truth(([&]()->V{V _logical23521=([&]()->V{V _logical23522=([&]()->V{V _logical23523=([&]()->V{V _logical23524=([&]()->V{V _lhs23525=([&]()->V{V _number23527=_v_20849_cross;return V(std::fabs(j::number(_number23527)));})();V _rhs23526=([&]()->V{V _lhs23528=V(1e-9);V _rhs23529=([&]()->V{V _lhs23530=([&]()->V{V _number23534=([&]()->V{V _lhs23535=_v_20847_xj;V _rhs23536=_v_20845_xi;return V(j::number(_lhs23535)-j::number(_rhs23536));})();return V(std::fabs(j::number(_number23534)));})();V _rhs23531=([&]()->V{V _number23539=([&]()->V{V _lhs23540=_v_20848_yj;V _rhs23541=_v_20846_yi;return V(j::number(_lhs23540)-j::number(_rhs23541));})();return V(std::fabs(j::number(_number23539)));})();return j::binary("+",_lhs23530,_rhs23531);})();return V(j::number(_lhs23528)*j::number(_rhs23529));})();return j::binary("<=",_lhs23525,_rhs23526);})();return j::truth(_logical23524)?([&]()->V{V _lhs23542=_v_20840_x;V _rhs23543=([&]()->V{V _receiver23546=j::builtin("Math");V _method23547=this->_literals[52];V _method=j::get(_receiver23546,_method23547);j::Args _params23548=j::Args{_v_20845_xi,_v_20847_xj};return j::call(_method,_params23548,_receiver23546);})();return j::binary(">=",_lhs23542,_rhs23543);})():_logical23524;})();return j::truth(_logical23523)?([&]()->V{V _lhs23549=_v_20840_x;V _rhs23550=([&]()->V{V _receiver23553=j::builtin("Math");V _method23554=this->_literals[51];V _method=j::get(_receiver23553,_method23554);j::Args _params23555=j::Args{_v_20845_xi,_v_20847_xj};return j::call(_method,_params23555,_receiver23553);})();return j::binary("<=",_lhs23549,_rhs23550);})():_logical23523;})();return j::truth(_logical23522)?([&]()->V{V _lhs23556=_v_20841_y;V _rhs23557=([&]()->V{V _receiver23560=j::builtin("Math");V _method23561=this->_literals[52];V _method=j::get(_receiver23560,_method23561);j::Args _params23562=j::Args{_v_20846_yi,_v_20848_yj};return j::call(_method,_params23562,_receiver23560);})();return j::binary(">=",_lhs23556,_rhs23557);})():_logical23522;})();return j::truth(_logical23521)?([&]()->V{V _lhs23563=_v_20841_y;V _rhs23564=([&]()->V{V _receiver23567=j::builtin("Math");V _method23568=this->_literals[51];V _method=j::get(_receiver23567,_method23568);j::Args _params23569=j::Args{_v_20846_yi,_v_20848_yj};return j::call(_method,_params23569,_receiver23567);})();return j::binary("<=",_lhs23563,_rhs23564);})():_logical23521;})())){return V(true);
}
if(j::truth(([&]()->V{V _logical23570=([&]()->V{V _lhs23571=([&]()->V{V _lhs23573=_v_20846_yi;V _rhs23574=_v_20841_y;return j::binary(">",_lhs23573,_rhs23574);})();V _rhs23572=([&]()->V{V _lhs23575=_v_20848_yj;V _rhs23576=_v_20841_y;return j::binary(">",_lhs23575,_rhs23576);})();return V(!j::equal(_lhs23571,_rhs23572,true));})();return j::truth(_logical23570)?([&]()->V{V _lhs23577=_v_20840_x;V _rhs23578=([&]()->V{V _lhs23579=([&]()->V{V _lhs23581=([&]()->V{V _lhs23583=([&]()->V{V _lhs23585=_v_20847_xj;V _rhs23586=_v_20845_xi;return V(j::number(_lhs23585)-j::number(_rhs23586));})();V _rhs23584=([&]()->V{V _lhs23587=_v_20841_y;V _rhs23588=_v_20846_yi;return V(j::number(_lhs23587)-j::number(_rhs23588));})();return V(j::number(_lhs23583)*j::number(_rhs23584));})();V _rhs23582=([&]()->V{V _lhs23589=_v_20848_yj;V _rhs23590=_v_20846_yi;return V(j::number(_lhs23589)-j::number(_rhs23590));})();return V(j::number(_lhs23581)/j::number(_rhs23582));})();V _rhs23580=_v_20845_xi;return j::binary("+",_lhs23579,_rhs23580);})();return j::binary("<",_lhs23577,_rhs23578);})():_logical23570;})())){(void)((_v_20842_c=j::unary("!",_v_20842_c)));
}

}
}
return _v_20842_c;

}

return V{};
},3);
this->_v_20850_segmentDistance.get()=j::function([=](const j::Args &_args_fn20851,const V &_receiver_fn20851,const V &_self_fn20851) mutable ->V{
V _v_20852_x;
V _v_20853_y;
V _v_20854_a;
V _v_20855_b;
_v_20852_x=_args_fn20851[0];
_v_20853_y=_args_fn20851[1];
_v_20854_a=_args_fn20851[2];
_v_20855_b=_args_fn20851[3];
{
V _v_20856_ax;
V _v_20857_ay;
V _v_20858_bx;
V _v_20859_by;
V _v_20860_py;
V _v_20861_dx;
V _v_20862_dy;
V _v_20863_k;
_v_20856_ax=j::get(_v_20854_a,V(0.0));
_v_20857_ay=([&]()->V{V _lhs23592=j::get(_v_20854_a,V(1.0));V _rhs23593=this->_v_20727_ASPECT.get();return V(j::number(_lhs23592)*j::number(_rhs23593));})();
_v_20858_bx=j::get(_v_20855_b,V(0.0));
_v_20859_by=([&]()->V{V _lhs23594=j::get(_v_20855_b,V(1.0));V _rhs23595=this->_v_20727_ASPECT.get();return V(j::number(_lhs23594)*j::number(_rhs23595));})();
_v_20860_py=([&]()->V{V _lhs23596=_v_20853_y;V _rhs23597=this->_v_20727_ASPECT.get();return V(j::number(_lhs23596)*j::number(_rhs23597));})();
_v_20861_dx=([&]()->V{V _lhs23598=_v_20858_bx;V _rhs23599=_v_20856_ax;return V(j::number(_lhs23598)-j::number(_rhs23599));})();
_v_20862_dy=([&]()->V{V _lhs23600=_v_20859_by;V _rhs23601=_v_20857_ay;return V(j::number(_lhs23600)-j::number(_rhs23601));})();
_v_20863_k=(j::truth(([&]()->V{V _logical23602=_v_20861_dx;return !j::truth(_logical23602)?_v_20862_dy:_logical23602;})())?([&]()->V{V _callee23621=this->_v_20630_clamp.get();return j::call(_callee23621,j::Args{([&]()->V{V _lhs23603=([&]()->V{V _lhs23605=([&]()->V{V _lhs23607=([&]()->V{V _lhs23609=_v_20852_x;V _rhs23610=_v_20856_ax;return V(j::number(_lhs23609)-j::number(_rhs23610));})();V _rhs23608=_v_20861_dx;return V(j::number(_lhs23607)*j::number(_rhs23608));})();V _rhs23606=([&]()->V{V _lhs23611=([&]()->V{V _lhs23613=_v_20860_py;V _rhs23614=_v_20857_ay;return V(j::number(_lhs23613)-j::number(_rhs23614));})();V _rhs23612=_v_20862_dy;return V(j::number(_lhs23611)*j::number(_rhs23612));})();return j::binary("+",_lhs23605,_rhs23606);})();V _rhs23604=([&]()->V{V _lhs23615=([&]()->V{V _lhs23617=_v_20861_dx;V _rhs23618=_v_20861_dx;return V(j::number(_lhs23617)*j::number(_rhs23618));})();V _rhs23616=([&]()->V{V _lhs23619=_v_20862_dy;V _rhs23620=_v_20862_dy;return V(j::number(_lhs23619)*j::number(_rhs23620));})();return j::binary("+",_lhs23615,_rhs23616);})();return V(j::number(_lhs23603)/j::number(_rhs23604));})()});})():V(0.0));
return ([&]()->V{V _number23634=([&]()->V{V _lhs23636=_v_20852_x;V _rhs23637=([&]()->V{V _lhs23638=_v_20856_ax;V _rhs23639=([&]()->V{V _lhs23640=_v_20861_dx;V _rhs23641=_v_20863_k;return V(j::number(_lhs23640)*j::number(_rhs23641));})();return j::binary("+",_lhs23638,_rhs23639);})();return V(j::number(_lhs23636)-j::number(_rhs23637));})();V _number23635=([&]()->V{V _lhs23642=_v_20860_py;V _rhs23643=([&]()->V{V _lhs23644=_v_20857_ay;V _rhs23645=([&]()->V{V _lhs23646=_v_20862_dy;V _rhs23647=_v_20863_k;return V(j::number(_lhs23646)*j::number(_rhs23647));})();return j::binary("+",_lhs23644,_rhs23645);})();return V(j::number(_lhs23642)-j::number(_rhs23643));})();return V(std::hypot(j::number(_number23634),j::number(_number23635)));})();

}

return V{};
},4);
this->_v_20864_pointsOf.get()=j::function([=](const j::Args &_args_fn20865,const V &_receiver_fn20865,const V &_self_fn20865) mutable ->V{
V _v_20866_what;
V _v_20867_v;
V _v_20868_min;
V _v_20869_unit;
_v_20866_what=_args_fn20865[0];
_v_20867_v=_args_fn20865[1];
_v_20868_min=_args_fn20865[2];
V _default23648=_args_fn20865[3];if(_default23648.kind==V::Undefined||_default23648.kind==V::Hole)_default23648=this->_literals[61];
_v_20869_unit=_default23648;
{
if(j::truth(([&]()->V{V _logical23649=([&]()->V{V _logical23650=j::unary("!",([&]()->V{V _receiver23651=j::builtin("Array");V _method23652=this->_literals[6];V _method=j::get(_receiver23651,_method23652);j::Args _params23653=j::Args{_v_20867_v};return j::call(_method,_params23653,_receiver23651);})());return !j::truth(_logical23650)?([&]()->V{V _lhs23654=j::get(_v_20867_v,this->_literals[19]);V _rhs23655=_v_20868_min;return j::binary("<",_lhs23654,_rhs23655);})():_logical23650;})();return !j::truth(_logical23649)?j::unary("!",([&]()->V{V _receiver23672=_v_20867_v;V _method23673=this->_literals[40];V _method=j::get(_receiver23672,_method23673);j::Args _params23674=j::Args{j::function([=](const j::Args &_args_fn20870,const V &_receiver_fn20870,const V &_self_fn20870) mutable ->V{
V _v_20871_p;
_v_20871_p=_args_fn20870[0];
return ([&]()->V{V _logical23656=([&]()->V{V _logical23657=([&]()->V{V _receiver23658=j::builtin("Array");V _method23659=this->_literals[6];V _method=j::get(_receiver23658,_method23659);j::Args _params23660=j::Args{_v_20871_p};return j::call(_method,_params23660,_receiver23658);})();return j::truth(_logical23657)?([&]()->V{V _lhs23661=j::get(_v_20871_p,this->_literals[19]);V _rhs23662=V(2.0);return V(j::equal(_lhs23661,_rhs23662,true));})():_logical23657;})();return j::truth(_logical23656)?([&]()->V{V _receiver23669=_v_20871_p;V _method23670=this->_literals[40];V _method=j::get(_receiver23669,_method23670);j::Args _params23671=j::Args{j::function([=](const j::Args &_args_fn20872,const V &_receiver_fn20872,const V &_self_fn20872) mutable ->V{
V _v_20873_n;
_v_20873_n=_args_fn20872[0];
return ([&]()->V{V _logical23663=([&]()->V{V _lhs23664=j::unary("typeof",_v_20873_n);V _rhs23665=this->_literals[13];return V(j::equal(_lhs23664,_rhs23665,true));})();return j::truth(_logical23663)?([&]()->V{V _receiver23666=j::builtin("Number");V _method23667=this->_literals[14];V _method=j::get(_receiver23666,_method23667);j::Args _params23668=j::Args{_v_20873_n};return j::call(_method,_params23668,_receiver23666);})():_logical23663;})();
return V{};
},1)};return j::call(_method,_params23671,_receiver23669);})():_logical23656;})();
return V{};
},1)};return j::call(_method,_params23674,_receiver23672);})()):_logical23649;})())){(void)(([&]()->V{V _callee23677=this->_v_20632_fail.get();return j::call(_callee23677,j::Args{([&]()->V{std::u16string _text23675;_text23675+=u"";_text23675+=j::string(_v_20866_what);_text23675+=u" takes a list of ";_text23675+=j::string(_v_20868_min);_text23675+=u" or more points ";_text23675+=j::string(_v_20869_unit);_text23675+=u", not ";_text23675+=j::string(([&]()->V{V _callee23676=this->_v_20649_show.get();return j::call(_callee23676,j::Args{_v_20867_v});})());_text23675+=u"";return V(std::move(_text23675));})()});})());
}
return _v_20867_v;

}

return V{};
},3);
this->_v_21015_numbers.get()=j::function([=](const j::Args &_args_fn21016,const V &_receiver_fn21016,const V &_self_fn21016) mutable ->V{
V _v_21017_what;
V _v_21018_o;
V _v_21019_positive;
_v_21017_what=_args_fn21016[0];
_v_21018_o=_args_fn21016[1];
_v_21019_positive=_args_fn21016[2];
{
{for(const auto &_item23678:j::elements(([&]()->V{V _receiver23679=j::builtin("Object");V _method23680=this->_literals[62];V _method=j::get(_receiver23679,_method23680);j::Args _params23681=j::Args{_v_21018_o};return j::call(_method,_params23681,_receiver23679);})())){V _v_21020_k;
V _v_21021_v;
V _pattern23682=_item23678;
_v_21020_k=j::get(_pattern23682,V(0));
_v_21021_v=j::get(_pattern23682,V(1));
{
if(j::truth(([&]()->V{V _logical23683=([&]()->V{V _lhs23684=j::unary("typeof",_v_21021_v);V _rhs23685=this->_literals[13];return V(!j::equal(_lhs23684,_rhs23685,true));})();return !j::truth(_logical23683)?j::unary("!",([&]()->V{V _receiver23686=j::builtin("Number");V _method23687=this->_literals[14];V _method=j::get(_receiver23686,_method23687);j::Args _params23688=j::Args{_v_21021_v};return j::call(_method,_params23688,_receiver23686);})()):_logical23683;})())){(void)(([&]()->V{V _callee23691=this->_v_20632_fail.get();return j::call(_callee23691,j::Args{([&]()->V{std::u16string _text23689;_text23689+=u"";_text23689+=j::string(_v_21017_what);_text23689+=u" takes a number for ";_text23689+=j::string(_v_21020_k);_text23689+=u", not ";_text23689+=j::string(([&]()->V{V _callee23690=this->_v_20649_show.get();return j::call(_callee23690,j::Args{_v_21021_v});})());_text23689+=u"";return V(std::move(_text23689));})()});})());
}
if(j::truth(([&]()->V{V _logical23692=([&]()->V{V _receiver23693=_v_21019_positive;V _method23694=this->_literals[11];V _method=j::get(_receiver23693,_method23694);j::Args _params23695=j::Args{_v_21020_k};return j::call(_method,_params23695,_receiver23693);})();return j::truth(_logical23692)?([&]()->V{V _lhs23696=_v_21021_v;V _rhs23697=V(0.0);return j::binary("<=",_lhs23696,_rhs23697);})():_logical23692;})())){(void)(([&]()->V{V _callee23699=this->_v_20632_fail.get();return j::call(_callee23699,j::Args{([&]()->V{std::u16string _text23698;_text23698+=u"";_text23698+=j::string(_v_21017_what);_text23698+=u" takes ";_text23698+=j::string(_v_21020_k);_text23698+=u" above 0, not ";_text23698+=j::string(_v_21021_v);_text23698+=u"";return V(std::move(_text23698));})()});})());
}

}
}}

}

return V{};
},3);
this->_v_21024_ground.get()=j::function([=](const j::Args &_args_fn21025,const V &_receiver_fn21025,const V &_self_fn21025) mutable ->V{
V _v_21026_o;
_v_21026_o=_args_fn21025[0];
{
j::Cell _v_21027_p;
_v_21027_p.get()=([&]()->V{V _callee23701=this->_v_20652_optionsOf.get();return j::call(_callee23701,j::Args{this->_literals[63],_v_21026_o,([&]()->V{j::Args _array23700;_array23700.push_back(this->_literals[45]);_array23700.push_back(this->_literals[48]);_array23700.push_back(this->_literals[41]);return j::array(std::move(_array23700));})()});})();
(void)(([&]()->V{V _callee23702=this->_v_20763_checkPlace.get();return j::call(_callee23702,j::Args{this->_literals[64],_v_21027_p.get()});})());
return ([&]()->V{V _callee23743=this->_v_20746_makeArea.get();return j::call(_callee23743,j::Args{j::function([=](const j::Args &_args_fn21028,const V &_receiver_fn21028,const V &_self_fn21028) mutable ->V{
V _v_21029_cols;
V _v_21030_rows;
_v_21029_cols=_args_fn21028[0];
_v_21030_rows=_args_fn21028[1];
{
j::Cell _v_21031_f;
V _v_21032_share;
j::Cell _v_21033_h;
V _v_21034_test;
_v_21031_f.get()=([&]()->V{V _callee23703=this->_v_20773_roomOf.get();return j::call(_callee23703,j::Args{_v_21027_p.get(),_v_21029_cols,_v_21030_rows});})();
_v_21032_share=(j::truth(([&]()->V{V _lhs23704=j::get(_v_21027_p.get(),this->_literals[45]);V _rhs23705=j::builtin("undefined");return V(j::equal(_lhs23704,_rhs23705,true));})())?V(0.2):(j::truth(([&]()->V{V _lhs23706=j::unary("typeof",j::get(_v_21027_p.get(),this->_literals[45]));V _rhs23707=this->_literals[13];return V(j::equal(_lhs23706,_rhs23707,true));})())?j::get(_v_21027_p.get(),this->_literals[45]):j::get(this->_v_20726_SIZES.get(),j::get(_v_21027_p.get(),this->_literals[45]))));
_v_21033_h.get()=([&]()->V{V _logical23708=j::get(_v_21027_p.get(),this->_literals[48]);return j::nullish(_logical23708)?([&]()->V{V _receiver23720=j::builtin("Math");V _method23721=this->_literals[51];V _method=j::get(_receiver23720,_method23721);j::Args _params23722=j::Args{V(1.0),([&]()->V{V _number23713=([&]()->V{V _lhs23714=([&]()->V{V _lhs23716=j::get(_v_21031_f.get(),this->_literals[37]);V _rhs23717=j::get(_v_21031_f.get(),this->_literals[35]);return V(j::number(_lhs23716)-j::number(_rhs23717));})();V _rhs23715=_v_21032_share;return V(j::number(_lhs23714)*j::number(_rhs23715));})();return V(std::floor(j::number(_number23713)+.5));})()};return j::call(_method,_params23722,_receiver23720);})():_logical23708;})();
_v_21034_test=(j::truth(j::get(_v_21027_p.get(),this->_literals[41]))?j::function([=](const j::Args &_args_fn21035,const V &_receiver_fn21035,const V &_self_fn21035) mutable ->V{
V _v_21036_x;
V _v_21037_y;
_v_21036_x=_args_fn21035[0];
_v_21037_y=_args_fn21035[1];
return ([&]()->V{V _logical23723=([&]()->V{V _logical23724=([&]()->V{V _logical23725=([&]()->V{V _lhs23726=_v_21036_x;V _rhs23727=j::get(_v_21031_f.get(),this->_literals[30]);return j::binary(">=",_lhs23726,_rhs23727);})();return j::truth(_logical23725)?([&]()->V{V _lhs23728=_v_21036_x;V _rhs23729=j::get(_v_21031_f.get(),this->_literals[32]);return j::binary("<",_lhs23728,_rhs23729);})():_logical23725;})();return j::truth(_logical23724)?([&]()->V{V _lhs23730=_v_21037_y;V _rhs23731=([&]()->V{V _lhs23732=j::get(_v_21031_f.get(),this->_literals[37]);V _rhs23733=_v_21033_h.get();return V(j::number(_lhs23732)-j::number(_rhs23733));})();return j::binary(">=",_lhs23730,_rhs23731);})():_logical23724;})();return j::truth(_logical23723)?([&]()->V{V _lhs23734=_v_21037_y;V _rhs23735=j::get(_v_21031_f.get(),this->_literals[37]);return j::binary("<",_lhs23734,_rhs23735);})():_logical23723;})();
return V{};
},2):j::function([=](const j::Args &_args_fn21038,const V &_receiver_fn21038,const V &_self_fn21038) mutable ->V{
V _v_21039__x;
V _v_21040_y;
_v_21039__x=_args_fn21038[0];
_v_21040_y=_args_fn21038[1];
return ([&]()->V{V _lhs23736=_v_21040_y;V _rhs23737=([&]()->V{V _lhs23738=j::get(_v_21031_f.get(),this->_literals[37]);V _rhs23739=_v_21033_h.get();return V(j::number(_lhs23738)-j::number(_rhs23739));})();return j::binary(">=",_lhs23736,_rhs23737);})();
return V{};
},2));
return ([&]()->V{V _obj23740=j::object();j::put(_obj23740,this->_literals[20],_v_21034_test);j::put(_obj23740,this->_literals[30],j::get(_v_21031_f.get(),this->_literals[30]));j::put(_obj23740,this->_literals[35],([&]()->V{V _lhs23741=j::get(_v_21031_f.get(),this->_literals[37]);V _rhs23742=_v_21033_h.get();return V(j::number(_lhs23741)-j::number(_rhs23742));})());j::put(_obj23740,this->_literals[32],j::get(_v_21031_f.get(),this->_literals[32]));j::put(_obj23740,this->_literals[37],j::get(_v_21031_f.get(),this->_literals[37]));return _obj23740;})();

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_21041_union.get()=j::function([=](const j::Args &_args_fn21042,const V &_receiver_fn21042,const V &_self_fn21042) mutable ->V{
j::Cell _v_21043_areas;
_v_21043_areas.get()=j::rest(_args_fn21042,0);
{
if(j::truth(j::unary("!",j::get(_v_21043_areas.get(),this->_literals[19])))){(void)(([&]()->V{V _callee23744=this->_v_20632_fail.get();return j::call(_callee23744,j::Args{this->_literals[65]});})());
}
(void)(([&]()->V{V _receiver23749=_v_21043_areas.get();V _method23750=this->_literals[66];V _method=j::get(_receiver23749,_method23750);j::Args _params23751=j::Args{j::function([=](const j::Args &_args_fn21044,const V &_receiver_fn21044,const V &_self_fn21044) mutable ->V{
V _v_21045_a;
V _v_21046_i;
_v_21045_a=_args_fn21044[0];
_v_21046_i=_args_fn21044[1];
return ([&]()->V{V _callee23748=this->_v_20758_areaOf.get();return j::call(_callee23748,j::Args{([&]()->V{std::u16string _text23745;_text23745+=u"union's area ";_text23745+=j::string(([&]()->V{V _lhs23746=_v_21046_i;V _rhs23747=V(1.0);return j::binary("+",_lhs23746,_rhs23747);})());_text23745+=u"";return V(std::move(_text23745));})(),_v_21045_a});})();
return V{};
},2)};return j::call(_method,_params23751,_receiver23749);})());
return ([&]()->V{V _callee23794=this->_v_20746_makeArea.get();return j::call(_callee23794,j::Args{j::function([=](const j::Args &_args_fn21047,const V &_receiver_fn21047,const V &_self_fn21047) mutable ->V{
j::Cell _v_21048_cols;
j::Cell _v_21049_rows;
_v_21048_cols.get()=_args_fn21047[0];
_v_21049_rows.get()=_args_fn21047[1];
{
j::Cell _v_21050_ps;
_v_21050_ps.get()=([&]()->V{V _receiver23755=_v_21043_areas.get();V _method23756=this->_literals[8];V _method=j::get(_receiver23755,_method23756);j::Args _params23757=j::Args{j::function([=](const j::Args &_args_fn21051,const V &_receiver_fn21051,const V &_self_fn21051) mutable ->V{
V _v_21052_a;
_v_21052_a=_args_fn21051[0];
return ([&]()->V{V _receiver23752=_v_21052_a;V _method23753=this->_literals[27];V _method=j::get(_receiver23752,_method23753);j::Args _params23754=j::Args{_v_21048_cols.get(),_v_21049_rows.get()};return j::call(_method,_params23754,_receiver23752);})();
return V{};
},1)};return j::call(_method,_params23757,_receiver23755);})();
return ([&]()->V{V _obj23758=j::object();j::put(_obj23758,this->_literals[20],j::function([=](const j::Args &_args_fn21053,const V &_receiver_fn21053,const V &_self_fn21053) mutable ->V{
j::Cell _v_21054_x;
j::Cell _v_21055_y;
_v_21054_x.get()=_args_fn21053[0];
_v_21055_y.get()=_args_fn21053[1];
return ([&]()->V{V _receiver23762=_v_21050_ps.get();V _method23763=this->_literals[67];V _method=j::get(_receiver23762,_method23763);j::Args _params23764=j::Args{j::function([=](const j::Args &_args_fn21056,const V &_receiver_fn21056,const V &_self_fn21056) mutable ->V{
V _v_21057_p;
_v_21057_p=_args_fn21056[0];
return ([&]()->V{V _receiver23759=_v_21057_p;V _method23760=this->_literals[20];V _method=j::get(_receiver23759,_method23760);j::Args _params23761=j::Args{_v_21054_x.get(),_v_21055_y.get()};return j::call(_method,_params23761,_receiver23759);})();
return V{};
},1)};return j::call(_method,_params23764,_receiver23762);})();
return V{};
},2));j::put(_obj23758,this->_literals[30],([&]()->V{V _receiver23769=j::builtin("Math");V _method23770=this->_literals[52];V _method=j::get(_receiver23769,_method23770);j::Args _params23771=([&](){j::Args _args23765;for(const auto &_v:j::elements(([&]()->V{V _receiver23766=_v_21050_ps.get();V _method23767=this->_literals[8];V _method=j::get(_receiver23766,_method23767);j::Args _params23768=j::Args{j::function([=](const j::Args &_args_fn21058,const V &_receiver_fn21058,const V &_self_fn21058) mutable ->V{
V _v_21059_p;
_v_21059_p=_args_fn21058[0];
return j::get(_v_21059_p,this->_literals[30]);
return V{};
},1)};return j::call(_method,_params23768,_receiver23766);})()))_args23765.push_back(_v);return _args23765;})();return j::call(_method,_params23771,_receiver23769);})());j::put(_obj23758,this->_literals[35],([&]()->V{V _receiver23776=j::builtin("Math");V _method23777=this->_literals[52];V _method=j::get(_receiver23776,_method23777);j::Args _params23778=([&](){j::Args _args23772;for(const auto &_v:j::elements(([&]()->V{V _receiver23773=_v_21050_ps.get();V _method23774=this->_literals[8];V _method=j::get(_receiver23773,_method23774);j::Args _params23775=j::Args{j::function([=](const j::Args &_args_fn21060,const V &_receiver_fn21060,const V &_self_fn21060) mutable ->V{
V _v_21061_p;
_v_21061_p=_args_fn21060[0];
return j::get(_v_21061_p,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params23775,_receiver23773);})()))_args23772.push_back(_v);return _args23772;})();return j::call(_method,_params23778,_receiver23776);})());j::put(_obj23758,this->_literals[32],([&]()->V{V _receiver23783=j::builtin("Math");V _method23784=this->_literals[51];V _method=j::get(_receiver23783,_method23784);j::Args _params23785=([&](){j::Args _args23779;for(const auto &_v:j::elements(([&]()->V{V _receiver23780=_v_21050_ps.get();V _method23781=this->_literals[8];V _method=j::get(_receiver23780,_method23781);j::Args _params23782=j::Args{j::function([=](const j::Args &_args_fn21062,const V &_receiver_fn21062,const V &_self_fn21062) mutable ->V{
V _v_21063_p;
_v_21063_p=_args_fn21062[0];
return j::get(_v_21063_p,this->_literals[32]);
return V{};
},1)};return j::call(_method,_params23782,_receiver23780);})()))_args23779.push_back(_v);return _args23779;})();return j::call(_method,_params23785,_receiver23783);})());j::put(_obj23758,this->_literals[37],([&]()->V{V _receiver23790=j::builtin("Math");V _method23791=this->_literals[51];V _method=j::get(_receiver23790,_method23791);j::Args _params23792=([&](){j::Args _args23786;for(const auto &_v:j::elements(([&]()->V{V _receiver23787=_v_21050_ps.get();V _method23788=this->_literals[8];V _method=j::get(_receiver23787,_method23788);j::Args _params23789=j::Args{j::function([=](const j::Args &_args_fn21064,const V &_receiver_fn21064,const V &_self_fn21064) mutable ->V{
V _v_21065_p;
_v_21065_p=_args_fn21064[0];
return j::get(_v_21065_p,this->_literals[37]);
return V{};
},1)};return j::call(_method,_params23789,_receiver23787);})()))_args23786.push_back(_v);return _args23786;})();return j::call(_method,_params23792,_receiver23790);})());return _obj23758;})();

}

return V{};
},2),([&]()->V{V _obj23793=j::object();j::put(_obj23793,this->_literals[60],j::get(j::get(_v_21043_areas.get(),V(0.0)),this->_literals[60]));return _obj23793;})()});})();

}

return V{};
},0);
this->_v_21066_subtract.get()=j::function([=](const j::Args &_args_fn21067,const V &_receiver_fn21067,const V &_self_fn21067) mutable ->V{
j::Cell _v_21068_from;
j::Cell _v_21069_areas;
_v_21068_from.get()=_args_fn21067[0];
_v_21069_areas.get()=j::rest(_args_fn21067,1);
{
(void)(([&]()->V{V _callee23795=this->_v_20758_areaOf.get();return j::call(_callee23795,j::Args{this->_literals[68],_v_21068_from.get()});})());
(void)(([&]()->V{V _receiver23800=_v_21069_areas.get();V _method23801=this->_literals[66];V _method=j::get(_receiver23800,_method23801);j::Args _params23802=j::Args{j::function([=](const j::Args &_args_fn21070,const V &_receiver_fn21070,const V &_self_fn21070) mutable ->V{
V _v_21071_a;
V _v_21072_i;
_v_21071_a=_args_fn21070[0];
_v_21072_i=_args_fn21070[1];
return ([&]()->V{V _callee23799=this->_v_20758_areaOf.get();return j::call(_callee23799,j::Args{([&]()->V{std::u16string _text23796;_text23796+=u"subtract's area ";_text23796+=j::string(([&]()->V{V _lhs23797=_v_21072_i;V _rhs23798=V(2.0);return j::binary("+",_lhs23797,_rhs23798);})());_text23796+=u"";return V(std::move(_text23796));})(),_v_21071_a});})();
return V{};
},2)};return j::call(_method,_params23802,_receiver23800);})());
return ([&]()->V{V _callee23834=this->_v_20746_makeArea.get();return j::call(_callee23834,j::Args{j::function([=](const j::Args &_args_fn21073,const V &_receiver_fn21073,const V &_self_fn21073) mutable ->V{
j::Cell _v_21074_cols;
j::Cell _v_21075_rows;
_v_21074_cols.get()=_args_fn21073[0];
_v_21075_rows.get()=_args_fn21073[1];
{
j::Cell _v_21076_p;
j::Cell _v_21077_ps;
j::Cell _v_21080_out;
V _v_21086_room;
_v_21076_p.get()=([&]()->V{V _receiver23803=_v_21068_from.get();V _method23804=this->_literals[27];V _method=j::get(_receiver23803,_method23804);j::Args _params23805=j::Args{_v_21074_cols.get(),_v_21075_rows.get()};return j::call(_method,_params23805,_receiver23803);})();
_v_21077_ps.get()=([&]()->V{V _receiver23809=_v_21069_areas.get();V _method23810=this->_literals[8];V _method=j::get(_receiver23809,_method23810);j::Args _params23811=j::Args{j::function([=](const j::Args &_args_fn21078,const V &_receiver_fn21078,const V &_self_fn21078) mutable ->V{
V _v_21079_a;
_v_21079_a=_args_fn21078[0];
return ([&]()->V{V _receiver23806=_v_21079_a;V _method23807=this->_literals[27];V _method=j::get(_receiver23806,_method23807);j::Args _params23808=j::Args{_v_21074_cols.get(),_v_21075_rows.get()};return j::call(_method,_params23808,_receiver23806);})();
return V{};
},1)};return j::call(_method,_params23811,_receiver23809);})();
_v_21080_out.get()=j::function([=](const j::Args &_args_fn21081,const V &_receiver_fn21081,const V &_self_fn21081) mutable ->V{
j::Cell _v_21082_x;
j::Cell _v_21083_y;
_v_21082_x.get()=_args_fn21081[0];
_v_21083_y.get()=_args_fn21081[1];
return j::unary("!",([&]()->V{V _receiver23815=_v_21077_ps.get();V _method23816=this->_literals[67];V _method=j::get(_receiver23815,_method23816);j::Args _params23817=j::Args{j::function([=](const j::Args &_args_fn21084,const V &_receiver_fn21084,const V &_self_fn21084) mutable ->V{
V _v_21085_q;
_v_21085_q=_args_fn21084[0];
return ([&]()->V{V _receiver23812=_v_21085_q;V _method23813=this->_literals[20];V _method=j::get(_receiver23812,_method23813);j::Args _params23814=j::Args{_v_21082_x.get(),_v_21083_y.get()};return j::call(_method,_params23814,_receiver23812);})();
return V{};
},1)};return j::call(_method,_params23817,_receiver23815);})());
return V{};
},2);
_v_21086_room=([&]()->V{V _logical23818=j::get(_v_21076_p.get(),this->_literals[69]);return j::truth(_logical23818)?([&]()->V{V _obj23819=j::object();V _spread23820=j::get(_v_21076_p.get(),this->_literals[69]);for(const auto &_key:j::keys(_spread23820))j::put(_obj23819,_key,j::get(_spread23820,_key));j::put(_obj23819,this->_literals[20],j::function([=](const j::Args &_args_fn21087,const V &_receiver_fn21087,const V &_self_fn21087) mutable ->V{
V _v_21088_x;
V _v_21089_y;
_v_21088_x=_args_fn21087[0];
_v_21089_y=_args_fn21087[1];
return ([&]()->V{V _logical23821=([&]()->V{V _receiver23822=j::get(_v_21076_p.get(),this->_literals[69]);V _method23823=this->_literals[20];V _method=j::get(_receiver23822,_method23823);j::Args _params23824=j::Args{_v_21088_x,_v_21089_y};return j::call(_method,_params23824,_receiver23822);})();return j::truth(_logical23821)?([&]()->V{V _callee23825=_v_21080_out.get();return j::call(_callee23825,j::Args{_v_21088_x,_v_21089_y});})():_logical23821;})();
return V{};
},2));return _obj23819;})():_logical23818;})();
return ([&]()->V{V _obj23826=j::object();V _spread23827=_v_21076_p.get();for(const auto &_key:j::keys(_spread23827))j::put(_obj23826,_key,j::get(_spread23827,_key));j::put(_obj23826,this->_literals[20],j::function([=](const j::Args &_args_fn21090,const V &_receiver_fn21090,const V &_self_fn21090) mutable ->V{
V _v_21091_x;
V _v_21092_y;
_v_21091_x=_args_fn21090[0];
_v_21092_y=_args_fn21090[1];
return ([&]()->V{V _logical23828=([&]()->V{V _receiver23829=_v_21076_p.get();V _method23830=this->_literals[20];V _method=j::get(_receiver23829,_method23830);j::Args _params23831=j::Args{_v_21091_x,_v_21092_y};return j::call(_method,_params23831,_receiver23829);})();return j::truth(_logical23828)?([&]()->V{V _callee23832=_v_21080_out.get();return j::call(_callee23832,j::Args{_v_21091_x,_v_21092_y});})():_logical23828;})();
return V{};
},2));j::put(_obj23826,this->_literals[59],j::builtin("undefined"));j::put(_obj23826,this->_literals[69],_v_21086_room);return _obj23826;})();

}

return V{};
},2),([&]()->V{V _obj23833=j::object();j::put(_obj23833,this->_literals[60],j::get(_v_21068_from.get(),this->_literals[60]));return _obj23833;})()});})();

}

return V{};
},1);
this->_v_21093_intersect.get()=j::function([=](const j::Args &_args_fn21094,const V &_receiver_fn21094,const V &_self_fn21094) mutable ->V{
j::Cell _v_21095_areas;
_v_21095_areas.get()=j::rest(_args_fn21094,0);
{
if(j::truth(j::unary("!",j::get(_v_21095_areas.get(),this->_literals[19])))){(void)(([&]()->V{V _callee23835=this->_v_20632_fail.get();return j::call(_callee23835,j::Args{this->_literals[70]});})());
}
(void)(([&]()->V{V _receiver23840=_v_21095_areas.get();V _method23841=this->_literals[66];V _method=j::get(_receiver23840,_method23841);j::Args _params23842=j::Args{j::function([=](const j::Args &_args_fn21096,const V &_receiver_fn21096,const V &_self_fn21096) mutable ->V{
V _v_21097_a;
V _v_21098_i;
_v_21097_a=_args_fn21096[0];
_v_21098_i=_args_fn21096[1];
return ([&]()->V{V _callee23839=this->_v_20758_areaOf.get();return j::call(_callee23839,j::Args{([&]()->V{std::u16string _text23836;_text23836+=u"intersect's area ";_text23836+=j::string(([&]()->V{V _lhs23837=_v_21098_i;V _rhs23838=V(1.0);return j::binary("+",_lhs23837,_rhs23838);})());_text23836+=u"";return V(std::move(_text23836));})(),_v_21097_a});})();
return V{};
},2)};return j::call(_method,_params23842,_receiver23840);})());
return ([&]()->V{V _callee23885=this->_v_20746_makeArea.get();return j::call(_callee23885,j::Args{j::function([=](const j::Args &_args_fn21099,const V &_receiver_fn21099,const V &_self_fn21099) mutable ->V{
j::Cell _v_21100_cols;
j::Cell _v_21101_rows;
_v_21100_cols.get()=_args_fn21099[0];
_v_21101_rows.get()=_args_fn21099[1];
{
j::Cell _v_21102_ps;
_v_21102_ps.get()=([&]()->V{V _receiver23846=_v_21095_areas.get();V _method23847=this->_literals[8];V _method=j::get(_receiver23846,_method23847);j::Args _params23848=j::Args{j::function([=](const j::Args &_args_fn21103,const V &_receiver_fn21103,const V &_self_fn21103) mutable ->V{
V _v_21104_a;
_v_21104_a=_args_fn21103[0];
return ([&]()->V{V _receiver23843=_v_21104_a;V _method23844=this->_literals[27];V _method=j::get(_receiver23843,_method23844);j::Args _params23845=j::Args{_v_21100_cols.get(),_v_21101_rows.get()};return j::call(_method,_params23845,_receiver23843);})();
return V{};
},1)};return j::call(_method,_params23848,_receiver23846);})();
return ([&]()->V{V _obj23849=j::object();j::put(_obj23849,this->_literals[20],j::function([=](const j::Args &_args_fn21105,const V &_receiver_fn21105,const V &_self_fn21105) mutable ->V{
j::Cell _v_21106_x;
j::Cell _v_21107_y;
_v_21106_x.get()=_args_fn21105[0];
_v_21107_y.get()=_args_fn21105[1];
return ([&]()->V{V _receiver23853=_v_21102_ps.get();V _method23854=this->_literals[40];V _method=j::get(_receiver23853,_method23854);j::Args _params23855=j::Args{j::function([=](const j::Args &_args_fn21108,const V &_receiver_fn21108,const V &_self_fn21108) mutable ->V{
V _v_21109_p;
_v_21109_p=_args_fn21108[0];
return ([&]()->V{V _receiver23850=_v_21109_p;V _method23851=this->_literals[20];V _method=j::get(_receiver23850,_method23851);j::Args _params23852=j::Args{_v_21106_x.get(),_v_21107_y.get()};return j::call(_method,_params23852,_receiver23850);})();
return V{};
},1)};return j::call(_method,_params23855,_receiver23853);})();
return V{};
},2));j::put(_obj23849,this->_literals[30],([&]()->V{V _receiver23860=j::builtin("Math");V _method23861=this->_literals[51];V _method=j::get(_receiver23860,_method23861);j::Args _params23862=([&](){j::Args _args23856;for(const auto &_v:j::elements(([&]()->V{V _receiver23857=_v_21102_ps.get();V _method23858=this->_literals[8];V _method=j::get(_receiver23857,_method23858);j::Args _params23859=j::Args{j::function([=](const j::Args &_args_fn21110,const V &_receiver_fn21110,const V &_self_fn21110) mutable ->V{
V _v_21111_p;
_v_21111_p=_args_fn21110[0];
return j::get(_v_21111_p,this->_literals[30]);
return V{};
},1)};return j::call(_method,_params23859,_receiver23857);})()))_args23856.push_back(_v);return _args23856;})();return j::call(_method,_params23862,_receiver23860);})());j::put(_obj23849,this->_literals[35],([&]()->V{V _receiver23867=j::builtin("Math");V _method23868=this->_literals[51];V _method=j::get(_receiver23867,_method23868);j::Args _params23869=([&](){j::Args _args23863;for(const auto &_v:j::elements(([&]()->V{V _receiver23864=_v_21102_ps.get();V _method23865=this->_literals[8];V _method=j::get(_receiver23864,_method23865);j::Args _params23866=j::Args{j::function([=](const j::Args &_args_fn21112,const V &_receiver_fn21112,const V &_self_fn21112) mutable ->V{
V _v_21113_p;
_v_21113_p=_args_fn21112[0];
return j::get(_v_21113_p,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params23866,_receiver23864);})()))_args23863.push_back(_v);return _args23863;})();return j::call(_method,_params23869,_receiver23867);})());j::put(_obj23849,this->_literals[32],([&]()->V{V _receiver23874=j::builtin("Math");V _method23875=this->_literals[52];V _method=j::get(_receiver23874,_method23875);j::Args _params23876=([&](){j::Args _args23870;for(const auto &_v:j::elements(([&]()->V{V _receiver23871=_v_21102_ps.get();V _method23872=this->_literals[8];V _method=j::get(_receiver23871,_method23872);j::Args _params23873=j::Args{j::function([=](const j::Args &_args_fn21114,const V &_receiver_fn21114,const V &_self_fn21114) mutable ->V{
V _v_21115_p;
_v_21115_p=_args_fn21114[0];
return j::get(_v_21115_p,this->_literals[32]);
return V{};
},1)};return j::call(_method,_params23873,_receiver23871);})()))_args23870.push_back(_v);return _args23870;})();return j::call(_method,_params23876,_receiver23874);})());j::put(_obj23849,this->_literals[37],([&]()->V{V _receiver23881=j::builtin("Math");V _method23882=this->_literals[52];V _method=j::get(_receiver23881,_method23882);j::Args _params23883=([&](){j::Args _args23877;for(const auto &_v:j::elements(([&]()->V{V _receiver23878=_v_21102_ps.get();V _method23879=this->_literals[8];V _method=j::get(_receiver23878,_method23879);j::Args _params23880=j::Args{j::function([=](const j::Args &_args_fn21116,const V &_receiver_fn21116,const V &_self_fn21116) mutable ->V{
V _v_21117_p;
_v_21117_p=_args_fn21116[0];
return j::get(_v_21117_p,this->_literals[37]);
return V{};
},1)};return j::call(_method,_params23880,_receiver23878);})()))_args23877.push_back(_v);return _args23877;})();return j::call(_method,_params23883,_receiver23881);})());return _obj23849;})();

}

return V{};
},2),([&]()->V{V _obj23884=j::object();j::put(_obj23884,this->_literals[60],j::get(j::get(_v_21095_areas.get(),V(0.0)),this->_literals[60]));return _obj23884;})()});})();

}

return V{};
},0);
this->_v_21119_inside.get()=j::function([=](const j::Args &_args_fn21120,const V &_receiver_fn21120,const V &_self_fn21120) mutable ->V{
j::Cell _v_21121_vessel;
V _v_21122_o;
_v_21121_vessel.get()=_args_fn21120[0];
_v_21122_o=_args_fn21120[1];
{
j::Cell _v_21123_p;
j::Cell _v_21124_fill;
j::Cell _v_21127_wall;
j::Cell _v_21128_base;
(void)(([&]()->V{V _callee23886=this->_v_20758_areaOf.get();return j::call(_callee23886,j::Args{this->_literals[71],_v_21121_vessel.get()});})());
_v_21123_p.get()=([&]()->V{V _callee23888=this->_v_20652_optionsOf.get();return j::call(_callee23888,j::Args{this->_literals[72],_v_21122_o,([&]()->V{j::Args _array23887;_array23887.push_back(this->_literals[73]);_array23887.push_back(this->_literals[74]);_array23887.push_back(this->_literals[57]);return j::array(std::move(_array23887));})()});})();
_v_21124_fill.get()=(j::truth(([&]()->V{V _lhs23889=j::unary("typeof",j::get(_v_21123_p.get(),this->_literals[73]));V _rhs23890=this->_literals[4];return V(j::equal(_lhs23889,_rhs23890,true));})())?(j::truth(([&]()->V{V _receiver23891=j::builtin("Object");V _method23892=this->_literals[15];V _method=j::get(_receiver23891,_method23892);j::Args _params23893=j::Args{this->_v_21118_FILLS.get(),j::get(_v_21123_p.get(),this->_literals[73])};return j::call(_method,_params23893,_receiver23891);})())?j::get(this->_v_21118_FILLS.get(),j::get(_v_21123_p.get(),this->_literals[73])):([&]()->V{V _callee23912=this->_v_20632_fail.get();return j::call(_callee23912,j::Args{([&]()->V{std::u16string _text23894;_text23894+=u"inside's fill takes ";_text23894+=j::string(([&]()->V{V _callee23904=this->_v_20660_or.get();return j::call(_callee23904,j::Args{([&]()->V{V _receiver23898=([&]()->V{V _receiver23901=j::builtin("Object");V _method23902=this->_literals[10];V _method=j::get(_receiver23901,_method23902);j::Args _params23903=j::Args{this->_v_21118_FILLS.get()};return j::call(_method,_params23903,_receiver23901);})();V _method23899=this->_literals[8];V _method=j::get(_receiver23898,_method23899);j::Args _params23900=j::Args{j::function([=](const j::Args &_args_fn21125,const V &_receiver_fn21125,const V &_self_fn21125) mutable ->V{
V _v_21126_f;
_v_21126_f=_args_fn21125[0];
return ([&]()->V{V _receiver23895=j::builtin("JSON");V _method23896=this->_literals[5];V _method=j::get(_receiver23895,_method23896);j::Args _params23897=j::Args{_v_21126_f};return j::call(_method,_params23897,_receiver23895);})();
return V{};
},1)};return j::call(_method,_params23900,_receiver23898);})()});})());_text23894+=u", or a share from 0 to 1, not ";_text23894+=j::string(([&]()->V{V _receiver23905=j::builtin("JSON");V _method23906=this->_literals[5];V _method=j::get(_receiver23905,_method23906);j::Args _params23907=j::Args{j::get(_v_21123_p.get(),this->_literals[73])};return j::call(_method,_params23907,_receiver23905);})());_text23894+=u"";_text23894+=j::string(([&]()->V{V _callee23911=this->_v_20645_suggest.get();return j::call(_callee23911,j::Args{j::get(_v_21123_p.get(),this->_literals[73]),([&]()->V{V _receiver23908=j::builtin("Object");V _method23909=this->_literals[10];V _method=j::get(_receiver23908,_method23909);j::Args _params23910=j::Args{this->_v_21118_FILLS.get()};return j::call(_method,_params23910,_receiver23908);})()});})());_text23894+=u"";return V(std::move(_text23894));})()});})()):([&]()->V{V _callee23913=this->_v_20663_numberOf.get();return j::call(_callee23913,j::Args{this->_literals[75],j::get(_v_21123_p.get(),this->_literals[73]),V(1.0),V(0.0),V(1.0)});})());
_v_21127_wall.get()=([&]()->V{V _callee23914=this->_v_20663_numberOf.get();return j::call(_callee23914,j::Args{this->_literals[76],j::get(_v_21123_p.get(),this->_literals[74]),V(1.0),V(0.0),V(40.0)});})();
_v_21128_base.get()=([&]()->V{V _callee23915=this->_v_20663_numberOf.get();return j::call(_callee23915,j::Args{this->_literals[77],j::get(_v_21123_p.get(),this->_literals[57]),V(1.0),V(0.0),V(40.0)});})();
return ([&]()->V{V _callee24028=this->_v_20746_makeArea.get();return j::call(_callee24028,j::Args{j::function([=](const j::Args &_args_fn21129,const V &_receiver_fn21129,const V &_self_fn21129) mutable ->V{
V _v_21130_cols;
V _v_21131_rows;
_v_21130_cols=_args_fn21129[0];
_v_21131_rows=_args_fn21129[1];
{
j::Cell _v_21132_v;
j::Cell _v_21133_room;
V _v_21137_top;
V _v_21138_bottom;
V _v_21139_left;
V _v_21140_right;
j::Cell _v_21144_level;
V _v_21145_bounds;
_v_21132_v.get()=([&]()->V{V _receiver23916=_v_21121_vessel.get();V _method23917=this->_literals[27];V _method=j::get(_receiver23916,_method23917);j::Args _params23918=j::Args{_v_21130_cols,_v_21131_rows};return j::call(_method,_params23918,_receiver23916);})();
_v_21133_room.get()=(j::truth(([&]()->V{V _logical23919=([&]()->V{V _logical23920=j::get(_v_21132_v.get(),this->_literals[59]);return j::truth(_logical23920)?([&]()->V{V _lhs23921=j::get(_v_21123_p.get(),this->_literals[74]);V _rhs23922=j::builtin("undefined");return V(j::equal(_lhs23921,_rhs23922,true));})():_logical23920;})();return j::truth(_logical23919)?([&]()->V{V _lhs23923=j::get(_v_21123_p.get(),this->_literals[57]);V _rhs23924=j::builtin("undefined");return V(j::equal(_lhs23923,_rhs23924,true));})():_logical23919;})())?j::get(_v_21132_v.get(),this->_literals[59]):([&]()->V{V _obj23925=j::object();j::put(_obj23925,this->_literals[20],j::function([=](const j::Args &_args_fn21134,const V &_receiver_fn21134,const V &_self_fn21134) mutable ->V{
V _v_21135_x;
V _v_21136_y;
_v_21135_x=_args_fn21134[0];
_v_21136_y=_args_fn21134[1];
return ([&]()->V{V _logical23926=([&]()->V{V _logical23927=([&]()->V{V _logical23928=([&]()->V{V _receiver23929=_v_21132_v.get();V _method23930=this->_literals[20];V _method=j::get(_receiver23929,_method23930);j::Args _params23931=j::Args{_v_21135_x,_v_21136_y};return j::call(_method,_params23931,_receiver23929);})();return j::truth(_logical23928)?([&]()->V{V _receiver23934=_v_21132_v.get();V _method23935=this->_literals[20];V _method=j::get(_receiver23934,_method23935);j::Args _params23936=j::Args{([&]()->V{V _lhs23932=_v_21135_x;V _rhs23933=_v_21127_wall.get();return V(j::number(_lhs23932)-j::number(_rhs23933));})(),_v_21136_y};return j::call(_method,_params23936,_receiver23934);})():_logical23928;})();return j::truth(_logical23927)?([&]()->V{V _receiver23939=_v_21132_v.get();V _method23940=this->_literals[20];V _method=j::get(_receiver23939,_method23940);j::Args _params23941=j::Args{([&]()->V{V _lhs23937=_v_21135_x;V _rhs23938=_v_21127_wall.get();return j::binary("+",_lhs23937,_rhs23938);})(),_v_21136_y};return j::call(_method,_params23941,_receiver23939);})():_logical23927;})();return j::truth(_logical23926)?([&]()->V{V _receiver23944=_v_21132_v.get();V _method23945=this->_literals[20];V _method=j::get(_receiver23944,_method23945);j::Args _params23946=j::Args{_v_21135_x,([&]()->V{V _lhs23942=_v_21136_y;V _rhs23943=_v_21128_base.get();return j::binary("+",_lhs23942,_rhs23943);})()};return j::call(_method,_params23946,_receiver23944);})():_logical23926;})();
return V{};
},2));j::put(_obj23925,this->_literals[30],j::get(_v_21132_v.get(),this->_literals[30]));j::put(_obj23925,this->_literals[35],j::get(_v_21132_v.get(),this->_literals[35]));j::put(_obj23925,this->_literals[32],j::get(_v_21132_v.get(),this->_literals[32]));j::put(_obj23925,this->_literals[37],j::get(_v_21132_v.get(),this->_literals[37]));return _obj23925;})());
_v_21137_top=j::builtin("Infinity");
_v_21138_bottom=j::unary("-",j::builtin("Infinity"));
_v_21139_left=j::builtin("Infinity");
_v_21140_right=j::unary("-",j::builtin("Infinity"));
{V _v_21141_y;
_v_21141_y=([&]()->V{V _receiver23950=j::builtin("Math");V _method23951=this->_literals[51];V _method=j::get(_receiver23950,_method23951);j::Args _params23952=j::Args{V(0.0),([&]()->V{V _number23947=j::get(_v_21133_room.get(),this->_literals[35]);return V(std::floor(j::number(_number23947)));})()};return j::call(_method,_params23952,_receiver23950);})();
for(;j::truth(([&]()->V{V _lhs23953=_v_21141_y;V _rhs23954=([&]()->V{V _receiver23958=j::builtin("Math");V _method23959=this->_literals[52];V _method=j::get(_receiver23958,_method23959);j::Args _params23960=j::Args{_v_21131_rows,([&]()->V{V _number23955=j::get(_v_21133_room.get(),this->_literals[37]);return V(std::ceil(j::number(_number23955)));})()};return j::call(_method,_params23960,_receiver23958);})();return j::binary("<",_lhs23953,_rhs23954);})());(void)(j::increment(_v_21141_y,1,false))){{V _v_21142_x;
_v_21142_x=([&]()->V{V _receiver23964=j::builtin("Math");V _method23965=this->_literals[51];V _method=j::get(_receiver23964,_method23965);j::Args _params23966=j::Args{V(0.0),([&]()->V{V _number23961=j::get(_v_21133_room.get(),this->_literals[30]);return V(std::floor(j::number(_number23961)));})()};return j::call(_method,_params23966,_receiver23964);})();
for(;j::truth(([&]()->V{V _lhs23967=_v_21142_x;V _rhs23968=([&]()->V{V _receiver23972=j::builtin("Math");V _method23973=this->_literals[52];V _method=j::get(_receiver23972,_method23973);j::Args _params23974=j::Args{_v_21130_cols,([&]()->V{V _number23969=j::get(_v_21133_room.get(),this->_literals[32]);return V(std::ceil(j::number(_number23969)));})()};return j::call(_method,_params23974,_receiver23972);})();return j::binary("<",_lhs23967,_rhs23968);})());(void)(j::increment(_v_21142_x,1,false))){if(j::truth(([&]()->V{V _receiver23979=_v_21133_room.get();V _method23980=this->_literals[20];V _method=j::get(_receiver23979,_method23980);j::Args _params23981=j::Args{([&]()->V{V _lhs23975=_v_21142_x;V _rhs23976=V(0.5);return j::binary("+",_lhs23975,_rhs23976);})(),([&]()->V{V _lhs23977=_v_21141_y;V _rhs23978=V(0.5);return j::binary("+",_lhs23977,_rhs23978);})()};return j::call(_method,_params23981,_receiver23979);})())){
(void)((_v_21137_top=([&]()->V{V _receiver23985=j::builtin("Math");V _method23986=this->_literals[52];V _method=j::get(_receiver23985,_method23986);j::Args _params23987=j::Args{_v_21137_top,_v_21141_y};return j::call(_method,_params23987,_receiver23985);})()));
(void)((_v_21138_bottom=([&]()->V{V _receiver23993=j::builtin("Math");V _method23994=this->_literals[51];V _method=j::get(_receiver23993,_method23994);j::Args _params23995=j::Args{_v_21138_bottom,([&]()->V{V _lhs23989=_v_21141_y;V _rhs23990=V(1.0);return j::binary("+",_lhs23989,_rhs23990);})()};return j::call(_method,_params23995,_receiver23993);})()));
(void)((_v_21139_left=([&]()->V{V _receiver23999=j::builtin("Math");V _method24000=this->_literals[52];V _method=j::get(_receiver23999,_method24000);j::Args _params24001=j::Args{_v_21139_left,_v_21142_x};return j::call(_method,_params24001,_receiver23999);})()));
(void)((_v_21140_right=([&]()->V{V _receiver24007=j::builtin("Math");V _method24008=this->_literals[51];V _method=j::get(_receiver24007,_method24008);j::Args _params24009=j::Args{_v_21140_right,([&]()->V{V _lhs24003=_v_21142_x;V _rhs24004=V(1.0);return j::binary("+",_lhs24003,_rhs24004);})()};return j::call(_method,_params24009,_receiver24007);})()));

}

}}
}}
if(j::truth(([&]()->V{V _lhs24010=_v_21137_top;V _rhs24011=j::builtin("Infinity");return V(j::equal(_lhs24010,_rhs24011,true));})())){return ([&]()->V{V _obj24012=j::object();j::put(_obj24012,this->_literals[20],j::function([=](const j::Args &_args_fn21143,const V &_receiver_fn21143,const V &_self_fn21143) mutable ->V{
return V(false);
return V{};
},0));j::put(_obj24012,this->_literals[30],V(0.0));j::put(_obj24012,this->_literals[35],V(0.0));j::put(_obj24012,this->_literals[32],V(0.0));j::put(_obj24012,this->_literals[37],V(0.0));j::put(_obj24012,this->_literals[78],V(0.0));j::put(_obj24012,this->_literals[69],_v_21133_room.get());return _obj24012;})();
}
_v_21144_level.get()=([&]()->V{V _lhs24013=_v_21138_bottom;V _rhs24014=([&]()->V{V _lhs24015=_v_21124_fill.get();V _rhs24016=([&]()->V{V _lhs24017=_v_21138_bottom;V _rhs24018=_v_21137_top;return V(j::number(_lhs24017)-j::number(_rhs24018));})();return V(j::number(_lhs24015)*j::number(_rhs24016));})();return V(j::number(_lhs24013)-j::number(_rhs24014));})();
_v_21145_bounds=([&]()->V{V _obj24019=j::object();j::put(_obj24019,this->_literals[20],j::get(_v_21133_room.get(),this->_literals[20]));j::put(_obj24019,this->_literals[30],_v_21139_left);j::put(_obj24019,this->_literals[35],_v_21137_top);j::put(_obj24019,this->_literals[32],_v_21140_right);j::put(_obj24019,this->_literals[37],_v_21138_bottom);return _obj24019;})();
return ([&]()->V{V _obj24020=j::object();j::put(_obj24020,this->_literals[20],j::function([=](const j::Args &_args_fn21146,const V &_receiver_fn21146,const V &_self_fn21146) mutable ->V{
V _v_21147_x;
V _v_21148_y;
_v_21147_x=_args_fn21146[0];
_v_21148_y=_args_fn21146[1];
return ([&]()->V{V _logical24021=([&]()->V{V _lhs24022=_v_21148_y;V _rhs24023=_v_21144_level.get();return j::binary(">=",_lhs24022,_rhs24023);})();return j::truth(_logical24021)?([&]()->V{V _receiver24024=_v_21133_room.get();V _method24025=this->_literals[20];V _method=j::get(_receiver24024,_method24025);j::Args _params24026=j::Args{_v_21147_x,_v_21148_y};return j::call(_method,_params24026,_receiver24024);})():_logical24021;})();
return V{};
},2));j::put(_obj24020,this->_literals[30],_v_21139_left);j::put(_obj24020,this->_literals[35],([&]()->V{V _number24027=_v_21144_level.get();return V(std::floor(j::number(_number24027)));})());j::put(_obj24020,this->_literals[32],_v_21140_right);j::put(_obj24020,this->_literals[37],_v_21138_bottom);j::put(_obj24020,this->_literals[78],_v_21144_level.get());j::put(_obj24020,this->_literals[69],_v_21145_bounds);return _obj24020;})();

}

return V{};
},2)});})();

}

return V{};
},2);
this->_v_21149_cup.get()=j::function([=](const j::Args &_args_fn21150,const V &_receiver_fn21150,const V &_self_fn21150) mutable ->V{
V _v_21151_o;
_v_21151_o=_args_fn21150[0];
{
j::Cell _v_21152_taper;
V _v_21153_ratio;
j::Cell _v_21154_hw;
_v_21152_taper.get()=([&]()->V{V _callee24031=this->_v_20663_numberOf.get();return j::call(_callee24031,j::Args{this->_literals[79],([&]()->V{V _chain24029=_v_21151_o;if(j::nullish(_chain24029))return V{};V _chain24030=j::get(_chain24029,this->_literals[80]);return _chain24030;})(),V(0.0),V(0.0),V(0.6)});})();
_v_21153_ratio=V(0.72);
_v_21154_hw.get()=([&]()->V{V _lhs24032=_v_21153_ratio;V _rhs24033=V(2.0);return V(j::number(_lhs24032)/j::number(_rhs24033));})();
return ([&]()->V{V _callee24085=this->_v_20815_unitShape.get();return j::call(_callee24085,j::Args{this->_literals[81],_v_21151_o,([&]()->V{j::Args _array24034;_array24034.push_back(this->_literals[80]);return j::array(std::move(_array24034));})(),_v_21153_ratio,([&]()->V{V _obj24035=j::object();j::put(_obj24035,this->_literals[45],this->_literals[82]);j::put(_obj24035,this->_literals[39],this->_literals[36]);return _obj24035;})(),j::function([=](const j::Args &_args_fn21155,const V &_receiver_fn21155,const V &_self_fn21155) mutable ->V{
V _v_21156_px;
V _v_21157_py;
_v_21156_px=_args_fn21155[0];
_v_21157_py=_args_fn21155[1];
{
V _v_21158_w;
V _v_21159_r;
V _v_21160_cy;
V _v_21161_cx;
_v_21158_w=([&]()->V{V _lhs24036=_v_21154_hw.get();V _rhs24037=([&]()->V{V _lhs24038=V(1.0);V _rhs24039=([&]()->V{V _lhs24040=_v_21152_taper.get();V _rhs24041=([&]()->V{V _lhs24042=_v_21157_py;V _rhs24043=V(0.5);return j::binary("+",_lhs24042,_rhs24043);})();return V(j::number(_lhs24040)*j::number(_rhs24041));})();return V(j::number(_lhs24038)-j::number(_rhs24039));})();return V(j::number(_lhs24036)*j::number(_rhs24037));})();
if(j::truth(([&]()->V{V _lhs24044=([&]()->V{V _number24046=_v_21156_px;return V(std::fabs(j::number(_number24046)));})();V _rhs24045=_v_21158_w;return j::binary(">",_lhs24044,_rhs24045);})())){return V(false);
}
_v_21159_r=V(0.1);
_v_21160_cy=([&]()->V{V _lhs24047=V(0.5);V _rhs24048=_v_21159_r;return V(j::number(_lhs24047)-j::number(_rhs24048));})();
_v_21161_cx=([&]()->V{V _lhs24049=_v_21158_w;V _rhs24050=_v_21159_r;return V(j::number(_lhs24049)-j::number(_rhs24050));})();
return ([&]()->V{V _logical24051=([&]()->V{V _logical24052=([&]()->V{V _lhs24053=_v_21157_py;V _rhs24054=_v_21160_cy;return j::binary("<",_lhs24053,_rhs24054);})();return !j::truth(_logical24052)?([&]()->V{V _lhs24055=([&]()->V{V _number24057=_v_21156_px;return V(std::fabs(j::number(_number24057)));})();V _rhs24056=_v_21161_cx;return j::binary("<",_lhs24055,_rhs24056);})():_logical24052;})();return !j::truth(_logical24051)?([&]()->V{V _lhs24058=([&]()->V{V _number24065=([&]()->V{V _lhs24067=([&]()->V{V _number24069=_v_21156_px;return V(std::fabs(j::number(_number24069)));})();V _rhs24068=_v_21161_cx;return V(j::number(_lhs24067)-j::number(_rhs24068));})();V _number24066=([&]()->V{V _lhs24070=_v_21157_py;V _rhs24071=_v_21160_cy;return V(j::number(_lhs24070)-j::number(_rhs24071));})();return V(std::hypot(j::number(_number24065),j::number(_number24066)));})();V _rhs24059=_v_21159_r;return j::binary("<=",_lhs24058,_rhs24059);})():_logical24051;})();

}

return V{};
},2),([&]()->V{V _obj24072=j::object();j::put(_obj24072,this->_literals[60],j::function([=](const j::Args &_args_fn21162,const V &_receiver_fn21162,const V &_self_fn21162) mutable ->V{
return ([&]()->V{V _callee24073=this->_v_21669_glass.get();return j::call(_callee24073,j::Args{});})();
return V{};
},0));j::put(_obj24072,this->_literals[56],([&]()->V{V _obj24074=j::object();j::put(_obj24074,this->_literals[58],V(true));j::put(_obj24074,this->_literals[57],j::function([=](const j::Args &_args_fn21163,const V &_receiver_fn21163,const V &_self_fn21163) mutable ->V{
V _v_21164_h;
_v_21164_h=_args_fn21163[0];
return ([&]()->V{V _receiver24082=j::builtin("Math");V _method24083=this->_literals[51];V _method=j::get(_receiver24082,_method24083);j::Args _params24084=j::Args{V(1.0),([&]()->V{V _number24077=([&]()->V{V _lhs24078=_v_21164_h;V _rhs24079=V(0.16);return V(j::number(_lhs24078)*j::number(_rhs24079));})();return V(std::floor(j::number(_number24077)+.5));})()};return j::call(_method,_params24084,_receiver24082);})();
return V{};
},1));return _obj24074;})());return _obj24072;})()});})();

}

return V{};
},1);
this->_v_21165_mug.get()=j::function([=](const j::Args &_args_fn21166,const V &_receiver_fn21166,const V &_self_fn21166) mutable ->V{
V _v_21167_o;
_v_21167_o=_args_fn21166[0];
{
j::Cell _v_21168_p;
j::Cell _v_21169_layout;
j::Cell _v_21201_vessel;
V _v_21205_handle;
V _v_21210_body;
_v_21168_p.get()=([&]()->V{V _callee24086=this->_v_20652_optionsOf.get();return j::call(_callee24086,j::Args{this->_literals[83],_v_21167_o,this->_v_20762_PLACE_KEYS.get()});})();
(void)(([&]()->V{V _callee24087=this->_v_20763_checkPlace.get();return j::call(_callee24087,j::Args{this->_literals[84],_v_21168_p.get()});})());
_v_21169_layout.get()=j::function([=](const j::Args &_args_fn21170,const V &_receiver_fn21170,const V &_self_fn21170) mutable ->V{
V _v_21171_cols;
V _v_21172_rows;
_v_21171_cols=_args_fn21170[0];
_v_21172_rows=_args_fn21170[1];
{
j::Cell _v_21173_b;
V _v_21174_bw;
V _v_21175_hw;
j::Cell _v_21176_bx0;
j::Cell _v_21177_bx1;
j::Cell _v_21178_y1;
j::Cell _v_21179_ry;
j::Cell _v_21180_rx;
j::Cell _v_21181_body;
V _v_21187_hl;
j::Cell _v_21188_hh;
j::Cell _v_21189_ht;
j::Cell _v_21190_hx0;
j::Cell _v_21191_hx1;
V _v_21192_handle;
j::Cell _v_21196_base;
V _v_21197_cavity;
_v_21173_b.get()=([&]()->V{V _callee24089=this->_v_20779_boxOf.get();return j::call(_callee24089,j::Args{_v_21168_p.get(),V(0.95),_v_21171_cols,_v_21172_rows,([&]()->V{V _obj24088=j::object();j::put(_obj24088,this->_literals[45],this->_literals[85]);j::put(_obj24088,this->_literals[39],this->_literals[36]);return _obj24088;})()});})();
_v_21174_bw=([&]()->V{V _receiver24097=j::builtin("Math");V _method24098=this->_literals[51];V _method=j::get(_receiver24097,_method24098);j::Args _params24099=j::Args{V(3.0),([&]()->V{V _number24092=([&]()->V{V _lhs24093=j::get(_v_21173_b.get(),this->_literals[53]);V _rhs24094=V(0.72);return V(j::number(_lhs24093)*j::number(_rhs24094));})();return V(std::floor(j::number(_number24092)+.5));})()};return j::call(_method,_params24099,_receiver24097);})();
_v_21175_hw=([&]()->V{V _lhs24100=j::get(_v_21173_b.get(),this->_literals[53]);V _rhs24101=_v_21174_bw;return V(j::number(_lhs24100)-j::number(_rhs24101));})();
_v_21176_bx0.get()=(j::truth(j::get(_v_21173_b.get(),this->_literals[50]))?([&]()->V{V _lhs24102=j::get(_v_21173_b.get(),this->_literals[30]);V _rhs24103=_v_21175_hw;return j::binary("+",_lhs24102,_rhs24103);})():j::get(_v_21173_b.get(),this->_literals[30]));
_v_21177_bx1.get()=([&]()->V{V _lhs24104=_v_21176_bx0.get();V _rhs24105=_v_21174_bw;return j::binary("+",_lhs24104,_rhs24105);})();
_v_21178_y1.get()=([&]()->V{V _lhs24106=j::get(_v_21173_b.get(),this->_literals[35]);V _rhs24107=j::get(_v_21173_b.get(),this->_literals[54]);return j::binary("+",_lhs24106,_rhs24107);})();
_v_21179_ry.get()=([&]()->V{V _receiver24112=j::builtin("Math");V _method24113=this->_literals[51];V _method=j::get(_receiver24112,_method24113);j::Args _params24114=j::Args{V(0.5),([&]()->V{V _lhs24108=j::get(_v_21173_b.get(),this->_literals[54]);V _rhs24109=V(0.1);return V(j::number(_lhs24108)*j::number(_rhs24109));})()};return j::call(_method,_params24114,_receiver24112);})();
_v_21180_rx.get()=([&]()->V{V _lhs24115=_v_21179_ry.get();V _rhs24116=this->_v_20727_ASPECT.get();return V(j::number(_lhs24115)*j::number(_rhs24116));})();
_v_21181_body.get()=j::function([=](const j::Args &_args_fn21182,const V &_receiver_fn21182,const V &_self_fn21182) mutable ->V{
V _v_21183_x;
V _v_21184_y;
_v_21183_x=_args_fn21182[0];
_v_21184_y=_args_fn21182[1];
{
V _v_21185_dx;
V _v_21186_dy;
if(j::truth(([&]()->V{V _logical24117=([&]()->V{V _logical24118=([&]()->V{V _logical24119=([&]()->V{V _lhs24120=_v_21183_x;V _rhs24121=_v_21176_bx0.get();return j::binary("<",_lhs24120,_rhs24121);})();return !j::truth(_logical24119)?([&]()->V{V _lhs24122=_v_21183_x;V _rhs24123=_v_21177_bx1.get();return j::binary(">=",_lhs24122,_rhs24123);})():_logical24119;})();return !j::truth(_logical24118)?([&]()->V{V _lhs24124=_v_21184_y;V _rhs24125=j::get(_v_21173_b.get(),this->_literals[35]);return j::binary("<",_lhs24124,_rhs24125);})():_logical24118;})();return !j::truth(_logical24117)?([&]()->V{V _lhs24126=_v_21184_y;V _rhs24127=_v_21178_y1.get();return j::binary(">=",_lhs24126,_rhs24127);})():_logical24117;})())){return V(false);
}
_v_21185_dx=([&]()->V{V _receiver24139=j::builtin("Math");V _method24140=this->_literals[51];V _method=j::get(_receiver24139,_method24140);j::Args _params24141=j::Args{V(0.0),([&]()->V{V _lhs24128=([&]()->V{V _lhs24130=_v_21176_bx0.get();V _rhs24131=_v_21180_rx.get();return j::binary("+",_lhs24130,_rhs24131);})();V _rhs24129=_v_21183_x;return V(j::number(_lhs24128)-j::number(_rhs24129));})(),([&]()->V{V _lhs24132=_v_21183_x;V _rhs24133=([&]()->V{V _lhs24134=_v_21177_bx1.get();V _rhs24135=_v_21180_rx.get();return V(j::number(_lhs24134)-j::number(_rhs24135));})();return V(j::number(_lhs24132)-j::number(_rhs24133));})()};return j::call(_method,_params24141,_receiver24139);})();
_v_21186_dy=([&]()->V{V _receiver24148=j::builtin("Math");V _method24149=this->_literals[51];V _method=j::get(_receiver24148,_method24149);j::Args _params24150=j::Args{V(0.0),([&]()->V{V _lhs24142=_v_21184_y;V _rhs24143=([&]()->V{V _lhs24144=_v_21178_y1.get();V _rhs24145=_v_21179_ry.get();return V(j::number(_lhs24144)-j::number(_rhs24145));})();return V(j::number(_lhs24142)-j::number(_rhs24143));})()};return j::call(_method,_params24150,_receiver24148);})();
return ([&]()->V{V _lhs24151=([&]()->V{V _lhs24153=([&]()->V{V _lhs24155=([&]()->V{V _lhs24157=_v_21185_dx;V _rhs24158=_v_21180_rx.get();return V(j::number(_lhs24157)/j::number(_rhs24158));})();V _rhs24156=V(2.0);return V(std::pow(j::number(_lhs24155),j::number(_rhs24156)));})();V _rhs24154=([&]()->V{V _lhs24159=([&]()->V{V _lhs24161=_v_21186_dy;V _rhs24162=_v_21179_ry.get();return V(j::number(_lhs24161)/j::number(_rhs24162));})();V _rhs24160=V(2.0);return V(std::pow(j::number(_lhs24159),j::number(_rhs24160)));})();return j::binary("+",_lhs24153,_rhs24154);})();V _rhs24152=V(1.0);return j::binary("<=",_lhs24151,_rhs24152);})();

}

return V{};
},2);
_v_21187_hl=([&]()->V{V _receiver24165=j::builtin("Math");V _method24166=this->_literals[52];V _method=j::get(_receiver24165,_method24166);j::Args _params24167=j::Args{_v_21175_hw,V(4.0)};return j::call(_method,_params24167,_receiver24165);})();
_v_21188_hh.get()=([&]()->V{V _receiver24175=j::builtin("Math");V _method24176=this->_literals[51];V _method=j::get(_receiver24175,_method24176);j::Args _params24177=j::Args{V(3.0),([&]()->V{V _number24170=([&]()->V{V _lhs24171=j::get(_v_21173_b.get(),this->_literals[54]);V _rhs24172=V(0.45);return V(j::number(_lhs24171)*j::number(_rhs24172));})();return V(std::floor(j::number(_number24170)+.5));})()};return j::call(_method,_params24177,_receiver24175);})();
_v_21189_ht.get()=([&]()->V{V _number24182=([&]()->V{V _lhs24183=j::get(_v_21173_b.get(),this->_literals[35]);V _rhs24184=([&]()->V{V _lhs24185=j::get(_v_21173_b.get(),this->_literals[54]);V _rhs24186=V(0.22);return V(j::number(_lhs24185)*j::number(_rhs24186));})();return j::binary("+",_lhs24183,_rhs24184);})();return V(std::floor(j::number(_number24182)+.5));})();
_v_21190_hx0.get()=(j::truth(j::get(_v_21173_b.get(),this->_literals[50]))?([&]()->V{V _lhs24187=_v_21176_bx0.get();V _rhs24188=_v_21187_hl;return V(j::number(_lhs24187)-j::number(_rhs24188));})():_v_21177_bx1.get());
_v_21191_hx1.get()=([&]()->V{V _lhs24189=_v_21190_hx0.get();V _rhs24190=_v_21187_hl;return j::binary("+",_lhs24189,_rhs24190);})();
_v_21192_handle=j::function([=](const j::Args &_args_fn21193,const V &_receiver_fn21193,const V &_self_fn21193) mutable ->V{
V _v_21194_x;
V _v_21195_y;
_v_21194_x=_args_fn21193[0];
_v_21195_y=_args_fn21193[1];
{
if(j::truth(([&]()->V{V _logical24191=([&]()->V{V _logical24192=([&]()->V{V _logical24193=([&]()->V{V _lhs24194=_v_21194_x;V _rhs24195=_v_21190_hx0.get();return j::binary("<",_lhs24194,_rhs24195);})();return !j::truth(_logical24193)?([&]()->V{V _lhs24196=_v_21194_x;V _rhs24197=_v_21191_hx1.get();return j::binary(">=",_lhs24196,_rhs24197);})():_logical24193;})();return !j::truth(_logical24192)?([&]()->V{V _lhs24198=_v_21195_y;V _rhs24199=_v_21189_ht.get();return j::binary("<",_lhs24198,_rhs24199);})():_logical24192;})();return !j::truth(_logical24191)?([&]()->V{V _lhs24200=_v_21195_y;V _rhs24201=([&]()->V{V _lhs24202=_v_21189_ht.get();V _rhs24203=_v_21188_hh.get();return j::binary("+",_lhs24202,_rhs24203);})();return j::binary(">=",_lhs24200,_rhs24201);})():_logical24191;})())){return V(false);
}
return ([&]()->V{V _logical24204=([&]()->V{V _logical24205=([&]()->V{V _lhs24206=_v_21195_y;V _rhs24207=([&]()->V{V _lhs24208=_v_21189_ht.get();V _rhs24209=V(1.0);return j::binary("+",_lhs24208,_rhs24209);})();return j::binary("<",_lhs24206,_rhs24207);})();return !j::truth(_logical24205)?([&]()->V{V _lhs24210=_v_21195_y;V _rhs24211=([&]()->V{V _lhs24212=([&]()->V{V _lhs24214=_v_21189_ht.get();V _rhs24215=_v_21188_hh.get();return j::binary("+",_lhs24214,_rhs24215);})();V _rhs24213=V(1.0);return V(j::number(_lhs24212)-j::number(_rhs24213));})();return j::binary(">=",_lhs24210,_rhs24211);})():_logical24205;})();return !j::truth(_logical24204)?(j::truth(j::get(_v_21173_b.get(),this->_literals[50]))?([&]()->V{V _lhs24216=_v_21194_x;V _rhs24217=([&]()->V{V _lhs24218=_v_21190_hx0.get();V _rhs24219=V(1.0);return j::binary("+",_lhs24218,_rhs24219);})();return j::binary("<",_lhs24216,_rhs24217);})():([&]()->V{V _lhs24220=_v_21194_x;V _rhs24221=([&]()->V{V _lhs24222=_v_21191_hx1.get();V _rhs24223=V(1.0);return V(j::number(_lhs24222)-j::number(_rhs24223));})();return j::binary(">=",_lhs24220,_rhs24221);})()):_logical24204;})();

}

return V{};
},2);
_v_21196_base.get()=([&]()->V{V _receiver24231=j::builtin("Math");V _method24232=this->_literals[51];V _method=j::get(_receiver24231,_method24232);j::Args _params24233=j::Args{V(1.0),([&]()->V{V _number24226=([&]()->V{V _lhs24227=j::get(_v_21173_b.get(),this->_literals[54]);V _rhs24228=V(0.08);return V(j::number(_lhs24227)*j::number(_rhs24228));})();return V(std::floor(j::number(_number24226)+.5));})()};return j::call(_method,_params24233,_receiver24231);})();
_v_21197_cavity=j::function([=](const j::Args &_args_fn21198,const V &_receiver_fn21198,const V &_self_fn21198) mutable ->V{
V _v_21199_x;
V _v_21200_y;
_v_21199_x=_args_fn21198[0];
_v_21200_y=_args_fn21198[1];
return ([&]()->V{V _logical24234=([&]()->V{V _logical24235=([&]()->V{V _logical24236=([&]()->V{V _callee24237=_v_21181_body.get();return j::call(_callee24237,j::Args{_v_21199_x,_v_21200_y});})();return j::truth(_logical24236)?([&]()->V{V _callee24240=_v_21181_body.get();return j::call(_callee24240,j::Args{([&]()->V{V _lhs24238=_v_21199_x;V _rhs24239=V(1.0);return V(j::number(_lhs24238)-j::number(_rhs24239));})(),_v_21200_y});})():_logical24236;})();return j::truth(_logical24235)?([&]()->V{V _callee24243=_v_21181_body.get();return j::call(_callee24243,j::Args{([&]()->V{V _lhs24241=_v_21199_x;V _rhs24242=V(1.0);return j::binary("+",_lhs24241,_rhs24242);})(),_v_21200_y});})():_logical24235;})();return j::truth(_logical24234)?([&]()->V{V _callee24246=_v_21181_body.get();return j::call(_callee24246,j::Args{_v_21199_x,([&]()->V{V _lhs24244=_v_21200_y;V _rhs24245=_v_21196_base.get();return j::binary("+",_lhs24244,_rhs24245);})()});})():_logical24234;})();
return V{};
},2);
return ([&]()->V{V _obj24247=j::object();j::put(_obj24247,this->_literals[86],_v_21173_b.get());j::put(_obj24247,this->_literals[87],_v_21181_body.get());j::put(_obj24247,this->_literals[88],_v_21192_handle);j::put(_obj24247,this->_literals[59],([&]()->V{V _obj24248=j::object();j::put(_obj24248,this->_literals[20],_v_21197_cavity);j::put(_obj24248,this->_literals[30],_v_21176_bx0.get());j::put(_obj24248,this->_literals[35],j::get(_v_21173_b.get(),this->_literals[35]));j::put(_obj24248,this->_literals[32],_v_21177_bx1.get());j::put(_obj24248,this->_literals[37],_v_21178_y1.get());return _obj24248;})());return _obj24247;})();

}

return V{};
},2);
_v_21201_vessel.get()=j::function([=](const j::Args &_args_fn21202,const V &_receiver_fn21202,const V &_self_fn21202) mutable ->V{
V _v_21203_l;
V _v_21204_test;
_v_21203_l=_args_fn21202[0];
_v_21204_test=_args_fn21202[1];
return ([&]()->V{V _callee24250=this->_v_20810_placedOf.get();return j::call(_callee24250,j::Args{j::get(_v_21203_l,this->_literals[86]),_v_21204_test,([&]()->V{V _obj24249=j::object();j::put(_obj24249,this->_literals[59],j::get(_v_21203_l,this->_literals[59]));j::put(_obj24249,this->_literals[58],V(true));return _obj24249;})()});})();
return V{};
},2);
_v_21205_handle=([&]()->V{V _callee24253=this->_v_20746_makeArea.get();return j::call(_callee24253,j::Args{j::function([=](const j::Args &_args_fn21206,const V &_receiver_fn21206,const V &_self_fn21206) mutable ->V{
V _v_21207_cols;
V _v_21208_rows;
_v_21207_cols=_args_fn21206[0];
_v_21208_rows=_args_fn21206[1];
{
V _v_21209_l;
_v_21209_l=([&]()->V{V _callee24251=_v_21169_layout.get();return j::call(_callee24251,j::Args{_v_21207_cols,_v_21208_rows});})();
return ([&]()->V{V _callee24252=this->_v_20810_placedOf.get();return j::call(_callee24252,j::Args{j::get(_v_21209_l,this->_literals[86]),j::get(_v_21209_l,this->_literals[88])});})();

}

return V{};
},2)});})();
_v_21210_body=([&]()->V{V _callee24256=this->_v_20746_makeArea.get();return j::call(_callee24256,j::Args{j::function([=](const j::Args &_args_fn21211,const V &_receiver_fn21211,const V &_self_fn21211) mutable ->V{
V _v_21212_cols;
V _v_21213_rows;
_v_21212_cols=_args_fn21211[0];
_v_21213_rows=_args_fn21211[1];
{
V _v_21214_l;
_v_21214_l=([&]()->V{V _callee24254=_v_21169_layout.get();return j::call(_callee24254,j::Args{_v_21212_cols,_v_21213_rows});})();
return ([&]()->V{V _callee24255=_v_21201_vessel.get();return j::call(_callee24255,j::Args{_v_21214_l,j::get(_v_21214_l,this->_literals[87])});})();

}

return V{};
},2)});})();
return ([&]()->V{V _callee24269=this->_v_20746_makeArea.get();return j::call(_callee24269,j::Args{j::function([=](const j::Args &_args_fn21215,const V &_receiver_fn21215,const V &_self_fn21215) mutable ->V{
V _v_21216_cols;
V _v_21217_rows;
_v_21216_cols=_args_fn21215[0];
_v_21217_rows=_args_fn21215[1];
{
j::Cell _v_21218_l;
_v_21218_l.get()=([&]()->V{V _callee24257=_v_21169_layout.get();return j::call(_callee24257,j::Args{_v_21216_cols,_v_21217_rows});})();
return ([&]()->V{V _callee24265=_v_21201_vessel.get();return j::call(_callee24265,j::Args{_v_21218_l.get(),j::function([=](const j::Args &_args_fn21219,const V &_receiver_fn21219,const V &_self_fn21219) mutable ->V{
V _v_21220_x;
V _v_21221_y;
_v_21220_x=_args_fn21219[0];
_v_21221_y=_args_fn21219[1];
return ([&]()->V{V _logical24258=([&]()->V{V _receiver24259=_v_21218_l.get();V _method24260=this->_literals[87];V _method=j::get(_receiver24259,_method24260);j::Args _params24261=j::Args{_v_21220_x,_v_21221_y};return j::call(_method,_params24261,_receiver24259);})();return !j::truth(_logical24258)?([&]()->V{V _receiver24262=_v_21218_l.get();V _method24263=this->_literals[88];V _method=j::get(_receiver24262,_method24263);j::Args _params24264=j::Args{_v_21220_x,_v_21221_y};return j::call(_method,_params24264,_receiver24262);})():_logical24258;})();
return V{};
},2)});})();

}

return V{};
},2),([&]()->V{V _obj24266=j::object();j::put(_obj24266,this->_literals[60],j::function([=](const j::Args &_args_fn21222,const V &_receiver_fn21222,const V &_self_fn21222) mutable ->V{
return ([&]()->V{V _callee24267=this->_v_22243_ceramic.get();return j::call(_callee24267,j::Args{});})();
return V{};
},0));j::put(_obj24266,this->_literals[89],([&]()->V{j::Args _array24268;_array24268.push_back(_v_21205_handle);_array24268.push_back(_v_21210_body);return j::array(std::move(_array24268));})());return _obj24266;})()});})();

}

return V{};
},1);
this->_v_21223_bottle.get()=j::function([=](const j::Args &_args_fn21224,const V &_receiver_fn21224,const V &_self_fn21224) mutable ->V{
V _v_21225_o;
_v_21225_o=_args_fn21224[0];
{
V _v_21226_ratio;
_v_21226_ratio=V(0.42);
return ([&]()->V{V _callee24321=this->_v_20815_unitShape.get();return j::call(_callee24321,j::Args{this->_literals[90],_v_21225_o,([&]()->V{j::Args _array24270;return j::array(std::move(_array24270));})(),_v_21226_ratio,([&]()->V{V _obj24271=j::object();j::put(_obj24271,this->_literals[45],this->_literals[82]);j::put(_obj24271,this->_literals[39],this->_literals[36]);return _obj24271;})(),j::function([=](const j::Args &_args_fn21227,const V &_receiver_fn21227,const V &_self_fn21227) mutable ->V{
V _v_21228_px;
V _v_21229_py;
_v_21228_px=_args_fn21227[0];
_v_21229_py=_args_fn21227[1];
{
V _v_21230_neck;
V _v_21231_w;
V _v_21232_r;
V _v_21233_cy;
V _v_21234_cx;
_v_21230_neck=(j::truth(([&]()->V{V _lhs24272=_v_21229_py;V _rhs24273=j::unary("-",V(0.45));return j::binary("<",_lhs24272,_rhs24273);})())?V(0.1):V(0.085));
_v_21231_w=(j::truth(([&]()->V{V _lhs24274=_v_21229_py;V _rhs24275=j::unary("-",V(0.12));return j::binary("<",_lhs24274,_rhs24275);})())?_v_21230_neck:(j::truth(([&]()->V{V _lhs24276=_v_21229_py;V _rhs24277=V(0.08);return j::binary("<",_lhs24276,_rhs24277);})())?([&]()->V{V _callee24279=this->_v_20636_lerp.get();return j::call(_callee24279,j::Args{V(0.085),V(0.21),([&]()->V{V _callee24278=this->_v_20642_smoothstep.get();return j::call(_callee24278,j::Args{j::unary("-",V(0.12)),V(0.08),_v_21229_py});})()});})():V(0.21)));
if(j::truth(([&]()->V{V _lhs24280=([&]()->V{V _number24282=_v_21228_px;return V(std::fabs(j::number(_number24282)));})();V _rhs24281=_v_21231_w;return j::binary(">",_lhs24280,_rhs24281);})())){return V(false);
}
_v_21232_r=V(0.06);
_v_21233_cy=([&]()->V{V _lhs24283=V(0.5);V _rhs24284=_v_21232_r;return V(j::number(_lhs24283)-j::number(_rhs24284));})();
_v_21234_cx=([&]()->V{V _lhs24285=_v_21231_w;V _rhs24286=_v_21232_r;return V(j::number(_lhs24285)-j::number(_rhs24286));})();
return ([&]()->V{V _logical24287=([&]()->V{V _logical24288=([&]()->V{V _lhs24289=_v_21229_py;V _rhs24290=_v_21233_cy;return j::binary("<",_lhs24289,_rhs24290);})();return !j::truth(_logical24288)?([&]()->V{V _lhs24291=([&]()->V{V _number24293=_v_21228_px;return V(std::fabs(j::number(_number24293)));})();V _rhs24292=_v_21234_cx;return j::binary("<",_lhs24291,_rhs24292);})():_logical24288;})();return !j::truth(_logical24287)?([&]()->V{V _lhs24294=([&]()->V{V _number24301=([&]()->V{V _lhs24303=([&]()->V{V _number24305=_v_21228_px;return V(std::fabs(j::number(_number24305)));})();V _rhs24304=_v_21234_cx;return V(j::number(_lhs24303)-j::number(_rhs24304));})();V _number24302=([&]()->V{V _lhs24306=_v_21229_py;V _rhs24307=_v_21233_cy;return V(j::number(_lhs24306)-j::number(_rhs24307));})();return V(std::hypot(j::number(_number24301),j::number(_number24302)));})();V _rhs24295=_v_21232_r;return j::binary("<=",_lhs24294,_rhs24295);})():_logical24287;})();

}

return V{};
},2),([&]()->V{V _obj24308=j::object();j::put(_obj24308,this->_literals[60],j::function([=](const j::Args &_args_fn21235,const V &_receiver_fn21235,const V &_self_fn21235) mutable ->V{
return ([&]()->V{V _callee24309=this->_v_21669_glass.get();return j::call(_callee24309,j::Args{});})();
return V{};
},0));j::put(_obj24308,this->_literals[56],([&]()->V{V _obj24310=j::object();j::put(_obj24310,this->_literals[58],V(true));j::put(_obj24310,this->_literals[57],j::function([=](const j::Args &_args_fn21236,const V &_receiver_fn21236,const V &_self_fn21236) mutable ->V{
V _v_21237_h;
_v_21237_h=_args_fn21236[0];
return ([&]()->V{V _receiver24318=j::builtin("Math");V _method24319=this->_literals[51];V _method=j::get(_receiver24318,_method24319);j::Args _params24320=j::Args{V(1.0),([&]()->V{V _number24313=([&]()->V{V _lhs24314=_v_21237_h;V _rhs24315=V(0.06);return V(j::number(_lhs24314)*j::number(_rhs24315));})();return V(std::floor(j::number(_number24313)+.5));})()};return j::call(_method,_params24320,_receiver24318);})();
return V{};
},1));return _obj24310;})());return _obj24308;})()});})();

}

return V{};
},1);
this->_v_21238_straw.get()=j::function([=](const j::Args &_args_fn21239,const V &_receiver_fn21239,const V &_self_fn21239) mutable ->V{
V _v_21240_o;
_v_21240_o=_args_fn21239[0];
{
j::Cell _v_21241_p;
j::Cell _v_21242_lean;
_v_21241_p.get()=([&]()->V{V _callee24323=this->_v_20652_optionsOf.get();return j::call(_callee24323,j::Args{this->_literals[91],_v_21240_o,([&]()->V{j::Args _array24322;for(const auto &_value:j::elements(this->_v_20762_PLACE_KEYS.get()))_array24322.push_back(_value);_array24322.push_back(this->_literals[92]);return j::array(std::move(_array24322));})()});})();
(void)(([&]()->V{V _callee24324=this->_v_20763_checkPlace.get();return j::call(_callee24324,j::Args{this->_literals[93],_v_21241_p.get()});})());
_v_21242_lean.get()=([&]()->V{V _callee24325=this->_v_20663_numberOf.get();return j::call(_callee24325,j::Args{this->_literals[94],j::get(_v_21241_p.get(),this->_literals[92]),V(0.35),j::unary("-",V(2.0)),V(2.0)});})();
return ([&]()->V{V _callee24509=this->_v_20746_makeArea.get();return j::call(_callee24509,j::Args{j::function([=](const j::Args &_args_fn21243,const V &_receiver_fn21243,const V &_self_fn21243) mutable ->V{
V _v_21244_cols;
V _v_21245_rows;
_v_21244_cols=_args_fn21243[0];
_v_21245_rows=_args_fn21243[1];
{
V _v_21246_f;
j::Cell _v_21247_h;
V _v_21248_b;
j::Cell _v_21249_foot;
j::Cell _v_21250_tip;
_v_21246_f=([&]()->V{V _callee24326=this->_v_20773_roomOf.get();return j::call(_callee24326,j::Args{_v_21241_p.get(),_v_21244_cols,_v_21245_rows});})();
_v_21247_h.get()=([&]()->V{V _logical24327=j::get(_v_21241_p.get(),this->_literals[48]);return j::nullish(_logical24327)?([&]()->V{V _number24336=([&]()->V{V _lhs24337=([&]()->V{V _lhs24339=j::get(_v_21246_f,this->_literals[37]);V _rhs24340=j::get(_v_21246_f,this->_literals[35]);return V(j::number(_lhs24339)-j::number(_rhs24340));})();V _rhs24338=(j::truth(([&]()->V{V _lhs24341=j::get(_v_21241_p.get(),this->_literals[45]);V _rhs24342=j::builtin("undefined");return V(j::equal(_lhs24341,_rhs24342,true));})())?V(1.3):(j::truth(([&]()->V{V _lhs24343=j::unary("typeof",j::get(_v_21241_p.get(),this->_literals[45]));V _rhs24344=this->_literals[13];return V(j::equal(_lhs24343,_rhs24344,true));})())?j::get(_v_21241_p.get(),this->_literals[45]):j::get(this->_v_20726_SIZES.get(),j::get(_v_21241_p.get(),this->_literals[45]))));return V(j::number(_lhs24337)*j::number(_rhs24338));})();return V(std::floor(j::number(_number24336)+.5));})():_logical24327;})();
if(j::truth(([&]()->V{V _logical24345=([&]()->V{V _logical24346=([&]()->V{V _lhs24347=j::get(_v_21241_p.get(),this->_literals[48]);V _rhs24348=j::builtin("undefined");return V(j::equal(_lhs24347,_rhs24348,true));})();return j::truth(_logical24346)?([&]()->V{V _lhs24349=j::get(_v_21241_p.get(),this->_literals[39]);V _rhs24350=j::builtin("undefined");return V(j::equal(_lhs24349,_rhs24350,true));})():_logical24346;})();return j::truth(_logical24345)?j::unary("!",j::get(_v_21241_p.get(),this->_literals[42])):_logical24345;})())){(void)((_v_21247_h.get()=([&]()->V{V _receiver24370=j::builtin("Math");V _method24371=this->_literals[51];V _method=j::get(_receiver24370,_method24371);j::Args _params24372=j::Args{V(1.0),([&]()->V{V _receiver24365=j::builtin("Math");V _method24366=this->_literals[52];V _method=j::get(_receiver24365,_method24366);j::Args _params24367=j::Args{_v_21247_h.get(),([&]()->V{V _number24357=([&]()->V{V _lhs24358=([&]()->V{V _lhs24360=j::get(_v_21246_f,this->_literals[37]);V _rhs24361=V(1.5);return V(j::number(_lhs24360)-j::number(_rhs24361));})();V _rhs24359=([&]()->V{V _logical24362=j::get(_v_21241_p.get(),this->_literals[44]);return j::nullish(_logical24362)?V(0.0):_logical24362;})();return j::binary("+",_lhs24358,_rhs24359);})();return V(std::floor(j::number(_number24357)));})()};return j::call(_method,_params24367,_receiver24365);})()};return j::call(_method,_params24372,_receiver24370);})()));
}
_v_21248_b=(j::truth(([&]()->V{V _logical24373=([&]()->V{V _lhs24374=j::get(_v_21241_p.get(),this->_literals[39]);V _rhs24375=j::builtin("undefined");return V(!j::equal(_lhs24374,_rhs24375,true));})();return !j::truth(_logical24373)?j::get(_v_21241_p.get(),this->_literals[42]):_logical24373;})())?([&]()->V{V _callee24397=this->_v_20779_boxOf.get();return j::call(_callee24397,j::Args{([&]()->V{V _obj24376=j::object();V _spread24377=_v_21241_p.get();for(const auto &_key:j::keys(_spread24377))j::put(_obj24376,_key,j::get(_spread24377,_key));j::put(_obj24376,this->_literals[48],_v_21247_h.get());j::put(_obj24376,this->_literals[46],([&]()->V{V _receiver24393=j::builtin("Math");V _method24394=this->_literals[51];V _method=j::get(_receiver24393,_method24394);j::Args _params24395=j::Args{V(2.0),([&]()->V{V _lhs24378=([&]()->V{V _number24385=([&]()->V{V _lhs24386=([&]()->V{V _lhs24388=([&]()->V{V _number24390=_v_21242_lean.get();return V(std::fabs(j::number(_number24390)));})();V _rhs24389=_v_21247_h.get();return V(j::number(_lhs24388)*j::number(_rhs24389));})();V _rhs24387=this->_v_20727_ASPECT.get();return V(j::number(_lhs24386)*j::number(_rhs24387));})();return V(std::floor(j::number(_number24385)+.5));})();V _rhs24379=V(2.0);return j::binary("+",_lhs24378,_rhs24379);})()};return j::call(_method,_params24395,_receiver24393);})());return _obj24376;})(),V(1.0),_v_21244_cols,_v_21245_rows,([&]()->V{V _obj24396=j::object();j::put(_obj24396,this->_literals[45],this->_literals[82]);j::put(_obj24396,this->_literals[39],this->_literals[36]);return _obj24396;})()});})():V::null());
_v_21249_foot.get()=(j::truth(_v_21248_b)?([&]()->V{j::Args _array24398;_array24398.push_back((j::truth(([&]()->V{V _lhs24399=_v_21242_lean.get();V _rhs24400=V(0.0);return j::binary(">=",_lhs24399,_rhs24400);})())?([&]()->V{V _lhs24401=j::get(_v_21248_b,this->_literals[30]);V _rhs24402=V(1.0);return j::binary("+",_lhs24401,_rhs24402);})():([&]()->V{V _lhs24403=([&]()->V{V _lhs24405=j::get(_v_21248_b,this->_literals[30]);V _rhs24406=j::get(_v_21248_b,this->_literals[53]);return j::binary("+",_lhs24405,_rhs24406);})();V _rhs24404=V(1.0);return V(j::number(_lhs24403)-j::number(_rhs24404));})()));_array24398.push_back(([&]()->V{V _lhs24407=([&]()->V{V _lhs24409=j::get(_v_21248_b,this->_literals[35]);V _rhs24410=j::get(_v_21248_b,this->_literals[54]);return j::binary("+",_lhs24409,_rhs24410);})();V _rhs24408=V(0.5);return V(j::number(_lhs24407)-j::number(_rhs24408));})());return j::array(std::move(_array24398));})():([&]()->V{j::Args _array24411;_array24411.push_back(([&]()->V{V _lhs24412=([&]()->V{V _number24426=([&]()->V{V _lhs24427=([&]()->V{V _lhs24429=([&]()->V{V _lhs24431=j::get(_v_21246_f,this->_literals[30]);V _rhs24432=j::get(_v_21246_f,this->_literals[32]);return j::binary("+",_lhs24431,_rhs24432);})();V _rhs24430=V(2.0);return V(j::number(_lhs24429)/j::number(_rhs24430));})();V _rhs24428=([&]()->V{V _lhs24433=([&]()->V{V _lhs24435=([&]()->V{V _lhs24437=_v_21242_lean.get();V _rhs24438=_v_21247_h.get();return V(j::number(_lhs24437)*j::number(_rhs24438));})();V _rhs24436=this->_v_20727_ASPECT.get();return V(j::number(_lhs24435)*j::number(_rhs24436));})();V _rhs24434=V(3.0);return V(j::number(_lhs24433)/j::number(_rhs24434));})();return V(j::number(_lhs24427)-j::number(_rhs24428));})();return V(std::floor(j::number(_number24426)+.5));})();V _rhs24413=([&]()->V{V _logical24439=j::get(_v_21241_p.get(),this->_literals[43]);return j::nullish(_logical24439)?V(0.0):_logical24439;})();return j::binary("+",_lhs24412,_rhs24413);})());_array24411.push_back(([&]()->V{V _lhs24440=([&]()->V{V _lhs24442=j::get(_v_21246_f,this->_literals[37]);V _rhs24443=V(1.5);return V(j::number(_lhs24442)-j::number(_rhs24443));})();V _rhs24441=([&]()->V{V _logical24444=j::get(_v_21241_p.get(),this->_literals[44]);return j::nullish(_logical24444)?V(0.0):_logical24444;})();return j::binary("+",_lhs24440,_rhs24441);})());return j::array(std::move(_array24411));})());
_v_21250_tip.get()=([&]()->V{j::Args _array24445;_array24445.push_back(([&]()->V{V _lhs24446=j::get(_v_21249_foot.get(),V(0.0));V _rhs24447=([&]()->V{V _lhs24448=([&]()->V{V _lhs24450=_v_21242_lean.get();V _rhs24451=_v_21247_h.get();return V(j::number(_lhs24450)*j::number(_rhs24451));})();V _rhs24449=this->_v_20727_ASPECT.get();return V(j::number(_lhs24448)*j::number(_rhs24449));})();return j::binary("+",_lhs24446,_rhs24447);})());_array24445.push_back(([&]()->V{V _lhs24452=j::get(_v_21249_foot.get(),V(1.0));V _rhs24453=_v_21247_h.get();return V(j::number(_lhs24452)-j::number(_rhs24453));})());return j::array(std::move(_array24445));})();
return ([&]()->V{V _obj24454=j::object();j::put(_obj24454,this->_literals[20],j::function([=](const j::Args &_args_fn21251,const V &_receiver_fn21251,const V &_self_fn21251) mutable ->V{
V _v_21252_x;
V _v_21253_y;
_v_21252_x=_args_fn21251[0];
_v_21253_y=_args_fn21251[1];
return ([&]()->V{V _logical24455=([&]()->V{V _logical24456=([&]()->V{V _lhs24457=_v_21253_y;V _rhs24458=j::get(_v_21250_tip.get(),V(1.0));return j::binary(">=",_lhs24457,_rhs24458);})();return j::truth(_logical24456)?([&]()->V{V _lhs24459=_v_21253_y;V _rhs24460=j::get(_v_21249_foot.get(),V(1.0));return j::binary("<=",_lhs24459,_rhs24460);})():_logical24456;})();return j::truth(_logical24455)?([&]()->V{V _lhs24461=([&]()->V{V _number24470=([&]()->V{V _lhs24471=_v_21252_x;V _rhs24472=([&]()->V{V _callee24477=this->_v_20636_lerp.get();return j::call(_callee24477,j::Args{j::get(_v_21249_foot.get(),V(0.0)),j::get(_v_21250_tip.get(),V(0.0)),([&]()->V{V _lhs24473=([&]()->V{V _lhs24475=j::get(_v_21249_foot.get(),V(1.0));V _rhs24476=_v_21253_y;return V(j::number(_lhs24475)-j::number(_rhs24476));})();V _rhs24474=_v_21247_h.get();return V(j::number(_lhs24473)/j::number(_rhs24474));})()});})();return V(j::number(_lhs24471)-j::number(_rhs24472));})();return V(std::fabs(j::number(_number24470)));})();V _rhs24462=V(0.5);return j::binary("<=",_lhs24461,_rhs24462);})():_logical24455;})();
return V{};
},2));j::put(_obj24454,this->_literals[30],([&]()->V{V _lhs24478=([&]()->V{V _receiver24482=j::builtin("Math");V _method24483=this->_literals[52];V _method=j::get(_receiver24482,_method24483);j::Args _params24484=j::Args{j::get(_v_21249_foot.get(),V(0.0)),j::get(_v_21250_tip.get(),V(0.0))};return j::call(_method,_params24484,_receiver24482);})();V _rhs24479=V(1.0);return V(j::number(_lhs24478)-j::number(_rhs24479));})());j::put(_obj24454,this->_literals[35],([&]()->V{V _lhs24485=j::get(_v_21250_tip.get(),V(1.0));V _rhs24486=V(1.0);return V(j::number(_lhs24485)-j::number(_rhs24486));})());j::put(_obj24454,this->_literals[32],([&]()->V{V _lhs24487=([&]()->V{V _receiver24491=j::builtin("Math");V _method24492=this->_literals[51];V _method=j::get(_receiver24491,_method24492);j::Args _params24493=j::Args{j::get(_v_21249_foot.get(),V(0.0)),j::get(_v_21250_tip.get(),V(0.0))};return j::call(_method,_params24493,_receiver24491);})();V _rhs24488=V(1.0);return j::binary("+",_lhs24487,_rhs24488);})());j::put(_obj24454,this->_literals[37],([&]()->V{V _lhs24494=j::get(_v_21249_foot.get(),V(1.0));V _rhs24495=V(1.0);return j::binary("+",_lhs24494,_rhs24495);})());return _obj24454;})();

}

return V{};
},2),([&]()->V{V _obj24496=j::object();j::put(_obj24496,this->_literals[60],j::function([=](const j::Args &_args_fn21254,const V &_receiver_fn21254,const V &_self_fn21254) mutable ->V{
{
j::Cell _v_21255_ch;
_v_21255_ch.get()=(j::truth(([&]()->V{V _lhs24497=_v_21242_lean.get();V _rhs24498=V(0.2);return j::binary(">",_lhs24497,_rhs24498);})())?this->_literals[95]:(j::truth(([&]()->V{V _lhs24499=_v_21242_lean.get();V _rhs24500=j::unary("-",V(0.2));return j::binary("<",_lhs24499,_rhs24500);})())?this->_literals[96]:this->_literals[97]));
return ([&]()->V{V _callee24508=this->_v_22307_material.get();return j::call(_callee24508,j::Args{j::function([=](const j::Args &_args_fn21256,const V &_receiver_fn21256,const V &_self_fn21256) mutable ->V{
V _v_21257_c;
_v_21257_c=_args_fn21256[0];
return ([&]()->V{j::Args _array24501;_array24501.push_back(_v_21255_ch.get());_array24501.push_back(([&]()->V{V _lhs24502=j::get(_v_21257_c,this->_literals[44]);V _rhs24503=V(2.0);return V(std::fmod(j::number(_lhs24502),j::number(_rhs24503)));})());return j::array(std::move(_array24501));})();
return V{};
},1),([&]()->V{V _obj24504=j::object();j::put(_obj24504,this->_literals[1],this->_literals[93]);j::put(_obj24504,this->_literals[98],([&]()->V{V _obj24505=j::object();j::put(_obj24505,this->_literals[22],([&]()->V{j::Args _array24506;_array24506.push_back(this->_literals[99]);_array24506.push_back(this->_literals[100]);return j::array(std::move(_array24506));})());j::put(_obj24505,this->_literals[23],([&]()->V{j::Args _array24507;_array24507.push_back(this->_literals[101]);_array24507.push_back(this->_literals[102]);return j::array(std::move(_array24507));})());return _obj24505;})());return _obj24504;})()});})();

}

return V{};
},0));return _obj24496;})()});})();

}

return V{};
},1);
this->_v_21258_box.get()=j::function([=](const j::Args &_args_fn21259,const V &_receiver_fn21259,const V &_self_fn21259) mutable ->V{
V _v_21260_o;
_v_21260_o=_args_fn21259[0];
{
V _v_21261_ratio;
_v_21261_ratio=([&]()->V{V _callee24512=this->_v_20663_numberOf.get();return j::call(_callee24512,j::Args{this->_literals[103],([&]()->V{V _chain24510=_v_21260_o;if(j::nullish(_chain24510))return V{};V _chain24511=j::get(_chain24510,this->_literals[104]);return _chain24511;})(),V(1.0),V(0.05),V(20.0)});})();
return ([&]()->V{V _callee24517=this->_v_20815_unitShape.get();return j::call(_callee24517,j::Args{this->_literals[105],_v_21260_o,([&]()->V{j::Args _array24513;_array24513.push_back(this->_literals[104]);return j::array(std::move(_array24513));})(),_v_21261_ratio,([&]()->V{V _obj24514=j::object();j::put(_obj24514,this->_literals[45],this->_literals[106]);j::put(_obj24514,this->_literals[39],this->_literals[24]);return _obj24514;})(),j::function([=](const j::Args &_args_fn21262,const V &_receiver_fn21262,const V &_self_fn21262) mutable ->V{
return V(true);
return V{};
},0),([&]()->V{V _obj24515=j::object();j::put(_obj24515,this->_literals[56],([&]()->V{V _obj24516=j::object();j::put(_obj24516,this->_literals[58],V(false));j::put(_obj24516,this->_literals[57],j::function([=](const j::Args &_args_fn21263,const V &_receiver_fn21263,const V &_self_fn21263) mutable ->V{
return V(1.0);
return V{};
},0));return _obj24516;})());return _obj24515;})()});})();

}

return V{};
},1);
this->_v_21264_ball.get()=j::function([=](const j::Args &_args_fn21265,const V &_receiver_fn21265,const V &_self_fn21265) mutable ->V{
V _v_21266_o;
_v_21266_o=_args_fn21265[0];
{
return ([&]()->V{V _callee24528=this->_v_20815_unitShape.get();return j::call(_callee24528,j::Args{this->_literals[107],_v_21266_o,([&]()->V{j::Args _array24518;return j::array(std::move(_array24518));})(),V(1.0),([&]()->V{V _obj24519=j::object();j::put(_obj24519,this->_literals[45],this->_literals[106]);j::put(_obj24519,this->_literals[39],this->_literals[24]);return _obj24519;})(),j::function([=](const j::Args &_args_fn21267,const V &_receiver_fn21267,const V &_self_fn21267) mutable ->V{
V _v_21268_px;
V _v_21269_py;
_v_21268_px=_args_fn21267[0];
_v_21269_py=_args_fn21267[1];
return ([&]()->V{V _lhs24520=([&]()->V{V _lhs24522=([&]()->V{V _lhs24524=_v_21268_px;V _rhs24525=_v_21268_px;return V(j::number(_lhs24524)*j::number(_rhs24525));})();V _rhs24523=([&]()->V{V _lhs24526=_v_21269_py;V _rhs24527=_v_21269_py;return V(j::number(_lhs24526)*j::number(_rhs24527));})();return j::binary("+",_lhs24522,_rhs24523);})();V _rhs24521=V(0.25);return j::binary("<=",_lhs24520,_rhs24521);})();
return V{};
},2)});})();

}

return V{};
},1);
this->_v_21270_blob.get()=j::function([=](const j::Args &_args_fn21271,const V &_receiver_fn21271,const V &_self_fn21271) mutable ->V{
V _v_21272_o;
_v_21272_o=_args_fn21271[0];
{
V _v_21273_seed;
j::Cell _v_21274_a;
j::Cell _v_21275_b;
j::Cell _v_21276_c;
_v_21273_seed=([&]()->V{V _callee24531=this->_v_20701_seedOf.get();return j::call(_callee24531,j::Args{this->_literals[108],([&]()->V{V _chain24529=_v_21272_o;if(j::nullish(_chain24529))return V{};V _chain24530=j::get(_chain24529,this->_literals[109]);return _chain24530;})(),V(1.0)});})();
_v_21274_a.get()=([&]()->V{V _lhs24532=([&]()->V{V _callee24534=this->_v_20634_hash.get();return j::call(_callee24534,j::Args{_v_21273_seed,V(1.0)});})();V _rhs24533=this->_v_20628_TAU.get();return V(j::number(_lhs24532)*j::number(_rhs24533));})();
_v_21275_b.get()=([&]()->V{V _lhs24535=([&]()->V{V _callee24537=this->_v_20634_hash.get();return j::call(_callee24537,j::Args{_v_21273_seed,V(2.0)});})();V _rhs24536=this->_v_20628_TAU.get();return V(j::number(_lhs24535)*j::number(_rhs24536));})();
_v_21276_c.get()=([&]()->V{V _lhs24538=([&]()->V{V _callee24540=this->_v_20634_hash.get();return j::call(_callee24540,j::Args{_v_21273_seed,V(3.0)});})();V _rhs24539=this->_v_20628_TAU.get();return V(j::number(_lhs24538)*j::number(_rhs24539));})();
return ([&]()->V{V _callee24600=this->_v_20815_unitShape.get();return j::call(_callee24600,j::Args{this->_literals[110],_v_21272_o,([&]()->V{j::Args _array24541;_array24541.push_back(this->_literals[109]);return j::array(std::move(_array24541));})(),V(1.2),([&]()->V{V _obj24542=j::object();j::put(_obj24542,this->_literals[45],this->_literals[106]);j::put(_obj24542,this->_literals[39],this->_literals[24]);return _obj24542;})(),j::function([=](const j::Args &_args_fn21277,const V &_receiver_fn21277,const V &_self_fn21277) mutable ->V{
V _v_21278_px;
V _v_21279_py;
_v_21278_px=_args_fn21277[0];
_v_21279_py=_args_fn21277[1];
{
V _v_21280_t;
V _v_21281_r;
_v_21280_t=([&]()->V{V _number24545=_v_21279_py;V _number24546=([&]()->V{V _lhs24547=_v_21278_px;V _rhs24548=V(1.2);return V(j::number(_lhs24547)/j::number(_rhs24548));})();return V(std::atan2(j::number(_number24545),j::number(_number24546)));})();
_v_21281_r=([&]()->V{V _lhs24549=V(0.5);V _rhs24550=([&]()->V{V _lhs24551=([&]()->V{V _lhs24553=([&]()->V{V _lhs24555=V(0.84);V _rhs24556=([&]()->V{V _lhs24557=V(0.08);V _rhs24558=([&]()->V{V _number24563=([&]()->V{V _lhs24564=([&]()->V{V _lhs24566=V(3.0);V _rhs24567=_v_21280_t;return V(j::number(_lhs24566)*j::number(_rhs24567));})();V _rhs24565=_v_21274_a.get();return j::binary("+",_lhs24564,_rhs24565);})();return V(std::sin(j::number(_number24563)));})();return V(j::number(_lhs24557)*j::number(_rhs24558));})();return j::binary("+",_lhs24555,_rhs24556);})();V _rhs24554=([&]()->V{V _lhs24568=V(0.05);V _rhs24569=([&]()->V{V _number24574=([&]()->V{V _lhs24575=([&]()->V{V _lhs24577=V(5.0);V _rhs24578=_v_21280_t;return V(j::number(_lhs24577)*j::number(_rhs24578));})();V _rhs24576=_v_21275_b.get();return j::binary("+",_lhs24575,_rhs24576);})();return V(std::sin(j::number(_number24574)));})();return V(j::number(_lhs24568)*j::number(_rhs24569));})();return j::binary("+",_lhs24553,_rhs24554);})();V _rhs24552=([&]()->V{V _lhs24579=V(0.03);V _rhs24580=([&]()->V{V _number24585=([&]()->V{V _lhs24586=([&]()->V{V _lhs24588=V(2.0);V _rhs24589=_v_21280_t;return V(j::number(_lhs24588)*j::number(_rhs24589));})();V _rhs24587=_v_21276_c.get();return j::binary("+",_lhs24586,_rhs24587);})();return V(std::sin(j::number(_number24585)));})();return V(j::number(_lhs24579)*j::number(_rhs24580));})();return j::binary("+",_lhs24551,_rhs24552);})();return V(j::number(_lhs24549)*j::number(_rhs24550));})();
return ([&]()->V{V _lhs24590=([&]()->V{V _number24594=([&]()->V{V _lhs24596=_v_21278_px;V _rhs24597=V(1.2);return V(j::number(_lhs24596)/j::number(_rhs24597));})();V _number24595=_v_21279_py;return V(std::hypot(j::number(_number24594),j::number(_number24595)));})();V _rhs24591=_v_21281_r;return j::binary("<=",_lhs24590,_rhs24591);})();

}

return V{};
},2),([&]()->V{V _obj24598=j::object();j::put(_obj24598,this->_literals[60],j::function([=](const j::Args &_args_fn21282,const V &_receiver_fn21282,const V &_self_fn21282) mutable ->V{
return ([&]()->V{V _callee24599=this->_v_22006_lava.get();return j::call(_callee24599,j::Args{});})();
return V{};
},0));return _obj24598;})()});})();

}

return V{};
},1);
this->_v_21285_cloud.get()=j::function([=](const j::Args &_args_fn21286,const V &_receiver_fn21286,const V &_self_fn21286) mutable ->V{
V _v_21287_o;
_v_21287_o=_args_fn21286[0];
{
V _v_21288_shapeArea;
j::Cell _v_21296_fill;
_v_21288_shapeArea=([&]()->V{V _callee24631=this->_v_20815_unitShape.get();return j::call(_callee24631,j::Args{this->_literals[111],_v_21287_o,([&]()->V{j::Args _array24601;_array24601.push_back(this->_literals[98]);return j::array(std::move(_array24601));})(),this->_v_21283_CLOUD_RATIO.get(),([&]()->V{V _obj24602=j::object();j::put(_obj24602,this->_literals[45],this->_literals[106]);j::put(_obj24602,this->_literals[39],this->_literals[33]);return _obj24602;})(),j::function([=](const j::Args &_args_fn21289,const V &_receiver_fn21289,const V &_self_fn21289) mutable ->V{
j::Cell _v_21290_px;
j::Cell _v_21291_py;
_v_21290_px.get()=_args_fn21289[0];
_v_21291_py.get()=_args_fn21289[1];
{
if(j::truth(([&]()->V{V _logical24603=([&]()->V{V _logical24604=([&]()->V{V _lhs24605=_v_21291_py.get();V _rhs24606=V(0.1);return j::binary(">=",_lhs24605,_rhs24606);})();return j::truth(_logical24604)?([&]()->V{V _lhs24607=_v_21290_px.get();V _rhs24608=j::get(j::get(this->_v_21284_PUFFS.get(),V(0.0)),V(0.0));return j::binary(">=",_lhs24607,_rhs24608);})():_logical24604;})();return j::truth(_logical24603)?([&]()->V{V _lhs24609=_v_21290_px.get();V _rhs24610=j::get(j::get(this->_v_21284_PUFFS.get(),([&]()->V{V _lhs24611=j::get(this->_v_21284_PUFFS.get(),this->_literals[19]);V _rhs24612=V(1.0);return V(j::number(_lhs24611)-j::number(_rhs24612));})()),V(0.0));return j::binary("<=",_lhs24609,_rhs24610);})():_logical24603;})())){return V(true);
}
return ([&]()->V{V _receiver24628=this->_v_21284_PUFFS.get();V _method24629=this->_literals[67];V _method=j::get(_receiver24628,_method24629);j::Args _params24630=j::Args{j::function([=](const j::Args &_args_fn21292,const V &_receiver_fn21292,const V &_self_fn21292) mutable ->V{
V _v_21293_x;
V _v_21294_y;
V _v_21295_r;
V _pattern24613=_args_fn21292[0];
_v_21293_x=j::get(_pattern24613,V(0));
_v_21294_y=j::get(_pattern24613,V(1));
_v_21295_r=j::get(_pattern24613,V(2));
return ([&]()->V{V _lhs24614=([&]()->V{V _lhs24616=([&]()->V{V _lhs24618=([&]()->V{V _lhs24620=_v_21290_px.get();V _rhs24621=_v_21293_x;return V(j::number(_lhs24620)-j::number(_rhs24621));})();V _rhs24619=V(2.0);return V(std::pow(j::number(_lhs24618),j::number(_rhs24619)));})();V _rhs24617=([&]()->V{V _lhs24622=([&]()->V{V _lhs24624=_v_21291_py.get();V _rhs24625=_v_21294_y;return V(j::number(_lhs24624)-j::number(_rhs24625));})();V _rhs24623=V(2.0);return V(std::pow(j::number(_lhs24622),j::number(_rhs24623)));})();return j::binary("+",_lhs24616,_rhs24617);})();V _rhs24615=([&]()->V{V _lhs24626=_v_21295_r;V _rhs24627=_v_21295_r;return V(j::number(_lhs24626)*j::number(_rhs24627));})();return j::binary("<=",_lhs24614,_rhs24615);})();
return V{};
},1)};return j::call(_method,_params24630,_receiver24628);})();

}

return V{};
},2)});})();
_v_21296_fill.get()=([&]()->V{V _callee24634=this->_v_21823_cloudMaterial.get();return j::call(_callee24634,j::Args{([&]()->V{V _chain24632=_v_21287_o;if(j::nullish(_chain24632))return V{};V _chain24633=j::get(_chain24632,this->_literals[98]);return _chain24633;})()});})();
return ([&]()->V{V _obj24635=j::object();V _spread24636=_v_21288_shapeArea;for(const auto &_key:j::keys(_spread24636))j::put(_obj24635,_key,j::get(_spread24636,_key));V _spread24637=_v_21296_fill.get();for(const auto &_key:j::keys(_spread24637))j::put(_obj24635,_key,j::get(_spread24637,_key));j::put(_obj24635,this->_literals[25],this->_literals[38]);j::put(_obj24635,this->_literals[60],j::function([=](const j::Args &_args_fn21297,const V &_receiver_fn21297,const V &_self_fn21297) mutable ->V{
return _v_21296_fill.get();
return V{};
},0));return _obj24635;})();

}

return V{};
},1);
this->_v_21298_flame.get()=j::function([=](const j::Args &_args_fn21299,const V &_receiver_fn21299,const V &_self_fn21299) mutable ->V{
V _v_21300_o;
_v_21300_o=_args_fn21299[0];
{
return ([&]()->V{V _callee24676=this->_v_20815_unitShape.get();return j::call(_callee24676,j::Args{this->_literals[112],_v_21300_o,([&]()->V{j::Args _array24638;return j::array(std::move(_array24638));})(),V(0.55),([&]()->V{V _obj24639=j::object();j::put(_obj24639,this->_literals[45],this->_literals[85]);j::put(_obj24639,this->_literals[39],this->_literals[24]);return _obj24639;})(),j::function([=](const j::Args &_args_fn21301,const V &_receiver_fn21301,const V &_self_fn21301) mutable ->V{
V _v_21302_px;
V _v_21303_py;
_v_21302_px=_args_fn21301[0];
_v_21303_py=_args_fn21301[1];
{
V _v_21304_k;
if(j::truth(([&]()->V{V _lhs24640=_v_21303_py;V _rhs24641=V(0.2);return j::binary(">=",_lhs24640,_rhs24641);})())){return ([&]()->V{V _lhs24642=([&]()->V{V _lhs24644=([&]()->V{V _lhs24646=_v_21302_px;V _rhs24647=_v_21302_px;return V(j::number(_lhs24646)*j::number(_rhs24647));})();V _rhs24645=([&]()->V{V _lhs24648=([&]()->V{V _lhs24650=_v_21303_py;V _rhs24651=V(0.2);return V(j::number(_lhs24650)-j::number(_rhs24651));})();V _rhs24649=V(2.0);return V(std::pow(j::number(_lhs24648),j::number(_rhs24649)));})();return j::binary("+",_lhs24644,_rhs24645);})();V _rhs24643=V(0.075);return j::binary("<=",_lhs24642,_rhs24643);})();
}
_v_21304_k=([&]()->V{V _lhs24652=([&]()->V{V _lhs24654=_v_21303_py;V _rhs24655=V(0.5);return j::binary("+",_lhs24654,_rhs24655);})();V _rhs24653=V(0.7);return V(j::number(_lhs24652)/j::number(_rhs24653));})();
return ([&]()->V{V _lhs24656=([&]()->V{V _number24658=_v_21302_px;return V(std::fabs(j::number(_number24658)));})();V _rhs24657=([&]()->V{V _lhs24659=([&]()->V{V _lhs24661=V(0.274);V _rhs24662=([&]()->V{V _number24663=_v_21304_k;V _number24664=V(1.4);return V(std::pow(j::number(_number24663),j::number(_number24664)));})();return V(j::number(_lhs24661)*j::number(_rhs24662));})();V _rhs24660=([&]()->V{V _lhs24665=V(1.0);V _rhs24666=([&]()->V{V _lhs24667=V(0.15);V _rhs24668=([&]()->V{V _number24671=([&]()->V{V _lhs24672=_v_21304_k;V _rhs24673=V(3.0);return V(j::number(_lhs24672)*j::number(_rhs24673));})();return V(std::sin(j::number(_number24671)));})();return V(j::number(_lhs24667)*j::number(_rhs24668));})();return j::binary("+",_lhs24665,_rhs24666);})();return V(j::number(_lhs24659)*j::number(_rhs24660));})();return j::binary("<=",_lhs24656,_rhs24657);})();

}

return V{};
},2),([&]()->V{V _obj24674=j::object();j::put(_obj24674,this->_literals[60],j::function([=](const j::Args &_args_fn21305,const V &_receiver_fn21305,const V &_self_fn21305) mutable ->V{
return ([&]()->V{V _callee24675=this->_v_21739_fire.get();return j::call(_callee24675,j::Args{});})();
return V{};
},0));return _obj24674;})()});})();

}

return V{};
},1);
this->_v_21306_leaf.get()=j::function([=](const j::Args &_args_fn21307,const V &_receiver_fn21307,const V &_self_fn21307) mutable ->V{
V _v_21308_o;
_v_21308_o=_args_fn21307[0];
{
return ([&]()->V{V _callee24707=this->_v_20815_unitShape.get();return j::call(_callee24707,j::Args{this->_literals[113],_v_21308_o,([&]()->V{j::Args _array24677;return j::array(std::move(_array24677));})(),V(0.6),([&]()->V{V _obj24678=j::object();j::put(_obj24678,this->_literals[45],this->_literals[106]);j::put(_obj24678,this->_literals[39],this->_literals[24]);return _obj24678;})(),j::function([=](const j::Args &_args_fn21309,const V &_receiver_fn21309,const V &_self_fn21309) mutable ->V{
V _v_21310_px;
V _v_21311_py;
_v_21310_px=_args_fn21309[0];
_v_21311_py=_args_fn21309[1];
return ([&]()->V{V _lhs24679=([&]()->V{V _number24681=_v_21310_px;return V(std::fabs(j::number(_number24681)));})();V _rhs24680=([&]()->V{V _lhs24682=V(0.3);V _rhs24683=([&]()->V{V _number24693=([&]()->V{V _number24699=([&]()->V{V _lhs24700=j::get(j::builtin("Math"),this->_literals[114]);V _rhs24701=([&]()->V{V _lhs24702=_v_21311_py;V _rhs24703=V(0.5);return j::binary("+",_lhs24702,_rhs24703);})();return V(j::number(_lhs24700)*j::number(_rhs24701));})();return V(std::sin(j::number(_number24699)));})();V _number24694=V(0.9);return V(std::pow(j::number(_number24693),j::number(_number24694)));})();return V(j::number(_lhs24682)*j::number(_rhs24683));})();return j::binary("<=",_lhs24679,_rhs24680);})();
return V{};
},2),([&]()->V{V _obj24704=j::object();j::put(_obj24704,this->_literals[60],j::function([=](const j::Args &_args_fn21312,const V &_receiver_fn21312,const V &_self_fn21312) mutable ->V{
return ([&]()->V{V _callee24706=this->_v_22151_solid.get();return j::call(_callee24706,j::Args{([&]()->V{V _obj24705=j::object();j::put(_obj24705,this->_literals[98],this->_literals[115]);j::put(_obj24705,this->_literals[116],this->_literals[117]);return _obj24705;})()});})();
return V{};
},0));return _obj24704;})()});})();

}

return V{};
},1);
this->_v_21313_heart.get()=j::function([=](const j::Args &_args_fn21314,const V &_receiver_fn21314,const V &_self_fn21314) mutable ->V{
V _v_21315_o;
_v_21315_o=_args_fn21314[0];
{
return ([&]()->V{V _callee24741=this->_v_20815_unitShape.get();return j::call(_callee24741,j::Args{this->_literals[118],_v_21315_o,([&]()->V{j::Args _array24708;return j::array(std::move(_array24708));})(),V(1.1),([&]()->V{V _obj24709=j::object();j::put(_obj24709,this->_literals[45],this->_literals[106]);j::put(_obj24709,this->_literals[39],this->_literals[24]);return _obj24709;})(),j::function([=](const j::Args &_args_fn21316,const V &_receiver_fn21316,const V &_self_fn21316) mutable ->V{
V _v_21317_px;
V _v_21318_py;
_v_21317_px=_args_fn21316[0];
_v_21318_py=_args_fn21316[1];
{
V _v_21319_x;
V _v_21320_y;
_v_21319_x=([&]()->V{V _lhs24710=_v_21317_px;V _rhs24711=V(2.1);return V(j::number(_lhs24710)*j::number(_rhs24711));})();
_v_21320_y=([&]()->V{V _lhs24712=([&]()->V{V _lhs24714=j::unary("-",_v_21318_py);V _rhs24715=V(2.3);return V(j::number(_lhs24714)*j::number(_rhs24715));})();V _rhs24713=V(0.12);return j::binary("+",_lhs24712,_rhs24713);})();
return ([&]()->V{V _lhs24716=([&]()->V{V _lhs24718=([&]()->V{V _lhs24720=([&]()->V{V _lhs24722=([&]()->V{V _lhs24724=([&]()->V{V _lhs24726=_v_21319_x;V _rhs24727=_v_21319_x;return V(j::number(_lhs24726)*j::number(_rhs24727));})();V _rhs24725=([&]()->V{V _lhs24728=_v_21320_y;V _rhs24729=_v_21320_y;return V(j::number(_lhs24728)*j::number(_rhs24729));})();return j::binary("+",_lhs24724,_rhs24725);})();V _rhs24723=V(1.0);return V(j::number(_lhs24722)-j::number(_rhs24723));})();V _rhs24721=V(3.0);return V(std::pow(j::number(_lhs24720),j::number(_rhs24721)));})();V _rhs24719=([&]()->V{V _lhs24730=([&]()->V{V _lhs24732=([&]()->V{V _lhs24734=([&]()->V{V _lhs24736=_v_21319_x;V _rhs24737=_v_21319_x;return V(j::number(_lhs24736)*j::number(_rhs24737));})();V _rhs24735=_v_21320_y;return V(j::number(_lhs24734)*j::number(_rhs24735));})();V _rhs24733=_v_21320_y;return V(j::number(_lhs24732)*j::number(_rhs24733));})();V _rhs24731=_v_21320_y;return V(j::number(_lhs24730)*j::number(_rhs24731));})();return V(j::number(_lhs24718)-j::number(_rhs24719));})();V _rhs24717=V(0.0);return j::binary("<=",_lhs24716,_rhs24717);})();

}

return V{};
},2),([&]()->V{V _obj24738=j::object();j::put(_obj24738,this->_literals[60],j::function([=](const j::Args &_args_fn21321,const V &_receiver_fn21321,const V &_self_fn21321) mutable ->V{
return ([&]()->V{V _callee24740=this->_v_22151_solid.get();return j::call(_callee24740,j::Args{([&]()->V{V _obj24739=j::object();j::put(_obj24739,this->_literals[98],this->_literals[119]);return _obj24739;})()});})();
return V{};
},0));return _obj24738;})()});})();

}

return V{};
},1);
this->_v_21322_star.get()=j::function([=](const j::Args &_args_fn21323,const V &_receiver_fn21323,const V &_self_fn21323) mutable ->V{
V _v_21324_o;
_v_21324_o=_args_fn21323[0];
{
j::Cell _v_21325_n;
j::Cell _v_21326_inner;
j::Cell _v_21327_pts;
_v_21325_n.get()=([&]()->V{V _callee24744=this->_v_20663_numberOf.get();return j::call(_callee24744,j::Args{this->_literals[120],([&]()->V{V _chain24742=_v_21324_o;if(j::nullish(_chain24742))return V{};V _chain24743=j::get(_chain24742,this->_literals[121]);return _chain24743;})(),V(5.0),V(3.0),V(24.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _receiver24745=j::builtin("Number");V _method24746=this->_literals[18];V _method=j::get(_receiver24745,_method24746);j::Args _params24747=j::Args{_v_21325_n.get()};return j::call(_method,_params24747,_receiver24745);})()))){(void)(([&]()->V{V _callee24749=this->_v_20632_fail.get();return j::call(_callee24749,j::Args{([&]()->V{std::u16string _text24748;_text24748+=u"star.points takes a whole number from 3 to 24, not ";_text24748+=j::string(_v_21325_n.get());_text24748+=u"";return V(std::move(_text24748));})()});})());
}
_v_21326_inner.get()=([&]()->V{V _callee24752=this->_v_20663_numberOf.get();return j::call(_callee24752,j::Args{this->_literals[122],([&]()->V{V _chain24750=_v_21324_o;if(j::nullish(_chain24750))return V{};V _chain24751=j::get(_chain24750,this->_literals[123]);return _chain24751;})(),V(0.45),V(0.05),V(1.0)});})();
_v_21327_pts.get()=([&]()->V{V _receiver24777=j::builtin("Array");V _method24778=this->_literals[124];V _method=j::get(_receiver24777,_method24778);j::Args _params24779=j::Args{([&]()->V{V _obj24753=j::object();j::put(_obj24753,this->_literals[19],([&]()->V{V _lhs24754=V(2.0);V _rhs24755=_v_21325_n.get();return V(j::number(_lhs24754)*j::number(_rhs24755));})());return _obj24753;})(),j::function([=](const j::Args &_args_fn21328,const V &_receiver_fn21328,const V &_self_fn21328) mutable ->V{
V _v_21329__;
V _v_21330_i;
_v_21329__=_args_fn21328[0];
_v_21330_i=_args_fn21328[1];
{
V _v_21331_a;
V _v_21332_r;
_v_21331_a=([&]()->V{V _lhs24756=([&]()->V{V _lhs24758=j::unary("-",j::get(j::builtin("Math"),this->_literals[114]));V _rhs24759=V(2.0);return V(j::number(_lhs24758)/j::number(_rhs24759));})();V _rhs24757=([&]()->V{V _lhs24760=([&]()->V{V _lhs24762=_v_21330_i;V _rhs24763=j::get(j::builtin("Math"),this->_literals[114]);return V(j::number(_lhs24762)*j::number(_rhs24763));})();V _rhs24761=_v_21325_n.get();return V(j::number(_lhs24760)/j::number(_rhs24761));})();return j::binary("+",_lhs24756,_rhs24757);})();
_v_21332_r=(j::truth(([&]()->V{V _lhs24764=_v_21330_i;V _rhs24765=V(2.0);return V(std::fmod(j::number(_lhs24764),j::number(_rhs24765)));})())?([&]()->V{V _lhs24766=V(0.5);V _rhs24767=_v_21326_inner.get();return V(j::number(_lhs24766)*j::number(_rhs24767));})():V(0.5));
return ([&]()->V{j::Args _array24768;_array24768.push_back(([&]()->V{V _lhs24769=_v_21332_r;V _rhs24770=([&]()->V{V _number24771=_v_21331_a;return V(std::cos(j::number(_number24771)));})();return V(j::number(_lhs24769)*j::number(_rhs24770));})());_array24768.push_back(([&]()->V{V _lhs24772=V(0.04);V _rhs24773=([&]()->V{V _lhs24774=_v_21332_r;V _rhs24775=([&]()->V{V _number24776=_v_21331_a;return V(std::sin(j::number(_number24776)));})();return V(j::number(_lhs24774)*j::number(_rhs24775));})();return j::binary("+",_lhs24772,_rhs24773);})());return j::array(std::move(_array24768));})();

}

return V{};
},2)};return j::call(_method,_params24779,_receiver24777);})();
return ([&]()->V{V _callee24786=this->_v_20815_unitShape.get();return j::call(_callee24786,j::Args{this->_literals[125],_v_21324_o,([&]()->V{j::Args _array24780;_array24780.push_back(this->_literals[121]);_array24780.push_back(this->_literals[123]);return j::array(std::move(_array24780));})(),V(1.0),([&]()->V{V _obj24781=j::object();j::put(_obj24781,this->_literals[45],this->_literals[85]);j::put(_obj24781,this->_literals[39],this->_literals[24]);return _obj24781;})(),j::function([=](const j::Args &_args_fn21333,const V &_receiver_fn21333,const V &_self_fn21333) mutable ->V{
V _v_21334_px;
V _v_21335_py;
_v_21334_px=_args_fn21333[0];
_v_21335_py=_args_fn21333[1];
return ([&]()->V{V _callee24782=this->_v_20837_inPolygon.get();return j::call(_callee24782,j::Args{_v_21327_pts.get(),_v_21334_px,_v_21335_py});})();
return V{};
},2),([&]()->V{V _obj24783=j::object();j::put(_obj24783,this->_literals[60],j::function([=](const j::Args &_args_fn21336,const V &_receiver_fn21336,const V &_self_fn21336) mutable ->V{
return ([&]()->V{V _callee24785=this->_v_22151_solid.get();return j::call(_callee24785,j::Args{([&]()->V{V _obj24784=j::object();j::put(_obj24784,this->_literals[98],this->_literals[126]);return _obj24784;})()});})();
return V{};
},0));return _obj24783;})()});})();

}

return V{};
},1);
this->_v_21337_moon.get()=j::function([=](const j::Args &_args_fn21338,const V &_receiver_fn21338,const V &_self_fn21338) mutable ->V{
V _v_21339_o;
_v_21339_o=_args_fn21338[0];
{
return ([&]()->V{V _callee24811=this->_v_20815_unitShape.get();return j::call(_callee24811,j::Args{this->_literals[127],_v_21339_o,([&]()->V{j::Args _array24787;return j::array(std::move(_array24787));})(),V(1.0),([&]()->V{V _obj24788=j::object();j::put(_obj24788,this->_literals[45],this->_literals[106]);j::put(_obj24788,this->_literals[39],this->_literals[128]);return _obj24788;})(),j::function([=](const j::Args &_args_fn21340,const V &_receiver_fn21340,const V &_self_fn21340) mutable ->V{
V _v_21341_px;
V _v_21342_py;
_v_21341_px=_args_fn21340[0];
_v_21342_py=_args_fn21340[1];
return ([&]()->V{V _logical24789=([&]()->V{V _lhs24790=([&]()->V{V _lhs24792=([&]()->V{V _lhs24794=_v_21341_px;V _rhs24795=_v_21341_px;return V(j::number(_lhs24794)*j::number(_rhs24795));})();V _rhs24793=([&]()->V{V _lhs24796=_v_21342_py;V _rhs24797=_v_21342_py;return V(j::number(_lhs24796)*j::number(_rhs24797));})();return j::binary("+",_lhs24792,_rhs24793);})();V _rhs24791=V(0.25);return j::binary("<=",_lhs24790,_rhs24791);})();return j::truth(_logical24789)?([&]()->V{V _lhs24798=([&]()->V{V _lhs24800=([&]()->V{V _lhs24802=([&]()->V{V _lhs24804=_v_21341_px;V _rhs24805=V(0.33);return V(j::number(_lhs24804)-j::number(_rhs24805));})();V _rhs24803=V(2.0);return V(std::pow(j::number(_lhs24802),j::number(_rhs24803)));})();V _rhs24801=([&]()->V{V _lhs24806=_v_21342_py;V _rhs24807=_v_21342_py;return V(j::number(_lhs24806)*j::number(_rhs24807));})();return j::binary("+",_lhs24800,_rhs24801);})();V _rhs24799=V(0.25);return j::binary(">",_lhs24798,_rhs24799);})():_logical24789;})();
return V{};
},2),([&]()->V{V _obj24808=j::object();j::put(_obj24808,this->_literals[60],j::function([=](const j::Args &_args_fn21343,const V &_receiver_fn21343,const V &_self_fn21343) mutable ->V{
return ([&]()->V{V _callee24810=this->_v_22151_solid.get();return j::call(_callee24810,j::Args{([&]()->V{V _obj24809=j::object();j::put(_obj24809,this->_literals[98],this->_literals[127]);j::put(_obj24809,this->_literals[116],this->_literals[129]);return _obj24809;})()});})();
return V{};
},0));return _obj24808;})()});})();

}

return V{};
},1);
this->_v_21344_fish.get()=j::function([=](const j::Args &_args_fn21345,const V &_receiver_fn21345,const V &_self_fn21345) mutable ->V{
V _v_21346_o;
_v_21346_o=_args_fn21345[0];
{
j::Cell _v_21347_p;
j::Cell _v_21348_ratio;
j::Cell _v_21349_unit;
_v_21347_p.get()=([&]()->V{V _callee24812=this->_v_20652_optionsOf.get();return j::call(_callee24812,j::Args{this->_literals[130],_v_21346_o,this->_v_20762_PLACE_KEYS.get()});})();
(void)(([&]()->V{V _callee24813=this->_v_20763_checkPlace.get();return j::call(_callee24813,j::Args{this->_literals[131],_v_21347_p.get()});})());
_v_21348_ratio.get()=V(1.8);
_v_21349_unit.get()=j::function([=](const j::Args &_args_fn21350,const V &_receiver_fn21350,const V &_self_fn21350) mutable ->V{
V _v_21351_px;
V _v_21352_py;
_v_21351_px=_args_fn21350[0];
_v_21352_py=_args_fn21350[1];
{
if(j::truth(([&]()->V{V _lhs24814=([&]()->V{V _lhs24816=([&]()->V{V _lhs24818=([&]()->V{V _lhs24820=([&]()->V{V _lhs24822=_v_21351_px;V _rhs24823=V(0.15);return V(j::number(_lhs24822)-j::number(_rhs24823));})();V _rhs24821=V(0.6);return V(j::number(_lhs24820)/j::number(_rhs24821));})();V _rhs24819=V(2.0);return V(std::pow(j::number(_lhs24818),j::number(_rhs24819)));})();V _rhs24817=([&]()->V{V _lhs24824=([&]()->V{V _lhs24826=_v_21352_py;V _rhs24827=V(0.4);return V(j::number(_lhs24826)/j::number(_rhs24827));})();V _rhs24825=V(2.0);return V(std::pow(j::number(_lhs24824),j::number(_rhs24825)));})();return j::binary("+",_lhs24816,_rhs24817);})();V _rhs24815=V(1.0);return j::binary("<=",_lhs24814,_rhs24815);})())){return V(true);
}
return ([&]()->V{V _logical24828=([&]()->V{V _logical24829=([&]()->V{V _lhs24830=_v_21351_px;V _rhs24831=j::unary("-",V(0.38));return j::binary("<",_lhs24830,_rhs24831);})();return j::truth(_logical24829)?([&]()->V{V _lhs24832=_v_21351_px;V _rhs24833=([&]()->V{V _lhs24834=j::unary("-",V(0.9));V _rhs24835=([&]()->V{V _lhs24836=V(0.3);V _rhs24837=([&]()->V{V _lhs24838=V(1.0);V _rhs24839=([&]()->V{V _lhs24840=([&]()->V{V _number24842=_v_21352_py;return V(std::fabs(j::number(_number24842)));})();V _rhs24841=V(0.4);return V(j::number(_lhs24840)/j::number(_rhs24841));})();return V(j::number(_lhs24838)-j::number(_rhs24839));})();return V(j::number(_lhs24836)*j::number(_rhs24837));})();return j::binary("+",_lhs24834,_rhs24835);})();return j::binary(">",_lhs24832,_rhs24833);})():_logical24829;})();return j::truth(_logical24828)?([&]()->V{V _lhs24843=([&]()->V{V _number24845=_v_21352_py;return V(std::fabs(j::number(_number24845)));})();V _rhs24844=([&]()->V{V _lhs24846=V(0.08);V _rhs24847=([&]()->V{V _lhs24848=([&]()->V{V _lhs24850=j::unary("-",V(0.38));V _rhs24851=_v_21351_px;return V(j::number(_lhs24850)-j::number(_rhs24851));})();V _rhs24849=V(0.8);return V(j::number(_lhs24848)*j::number(_rhs24849));})();return j::binary("+",_lhs24846,_rhs24847);})();return j::binary("<=",_lhs24843,_rhs24844);})():_logical24828;})();

}

return V{};
},2);
return ([&]()->V{V _callee24893=this->_v_20746_makeArea.get();return j::call(_callee24893,j::Args{j::function([=](const j::Args &_args_fn21353,const V &_receiver_fn21353,const V &_self_fn21353) mutable ->V{
V _v_21354_cols;
V _v_21355_rows;
_v_21354_cols=_args_fn21353[0];
_v_21355_rows=_args_fn21353[1];
{
V _v_21356_b;
j::Cell _v_21357_ex;
j::Cell _v_21358_ey;
_v_21356_b=([&]()->V{V _callee24853=this->_v_20779_boxOf.get();return j::call(_callee24853,j::Args{_v_21347_p.get(),_v_21348_ratio.get(),_v_21354_cols,_v_21355_rows,([&]()->V{V _obj24852=j::object();j::put(_obj24852,this->_literals[45],this->_literals[106]);j::put(_obj24852,this->_literals[39],this->_literals[24]);return _obj24852;})()});})();
_v_21357_ex.get()=([&]()->V{V _number24862=(j::truth(j::get(_v_21356_b,this->_literals[50]))?([&]()->V{V _lhs24863=j::get(_v_21356_b,this->_literals[30]);V _rhs24864=([&]()->V{V _lhs24865=j::get(_v_21356_b,this->_literals[53]);V _rhs24866=V(0.22);return V(j::number(_lhs24865)*j::number(_rhs24866));})();return j::binary("+",_lhs24863,_rhs24864);})():([&]()->V{V _lhs24867=j::get(_v_21356_b,this->_literals[30]);V _rhs24868=([&]()->V{V _lhs24869=j::get(_v_21356_b,this->_literals[53]);V _rhs24870=V(0.78);return V(j::number(_lhs24869)*j::number(_rhs24870));})();return j::binary("+",_lhs24867,_rhs24868);})());return V(std::floor(j::number(_number24862)));})();
_v_21358_ey.get()=([&]()->V{V _number24875=([&]()->V{V _lhs24876=j::get(_v_21356_b,this->_literals[35]);V _rhs24877=([&]()->V{V _lhs24878=j::get(_v_21356_b,this->_literals[54]);V _rhs24879=V(0.4);return V(j::number(_lhs24878)*j::number(_rhs24879));})();return j::binary("+",_lhs24876,_rhs24877);})();return V(std::floor(j::number(_number24875)));})();
return ([&]()->V{V _callee24889=this->_v_20810_placedOf.get();return j::call(_callee24889,j::Args{_v_21356_b,([&]()->V{V _callee24880=this->_v_20800_unitTest.get();return j::call(_callee24880,j::Args{_v_21356_b,_v_21348_ratio.get(),_v_21349_unit.get()});})(),([&]()->V{V _obj24881=j::object();j::put(_obj24881,this->_literals[116],j::function([=](const j::Args &_args_fn21359,const V &_receiver_fn21359,const V &_self_fn21359) mutable ->V{
V _v_21360_x;
V _v_21361_y;
_v_21360_x=_args_fn21359[0];
_v_21361_y=_args_fn21359[1];
return (j::truth(([&]()->V{V _logical24882=([&]()->V{V _lhs24883=([&]()->V{V _number24885=_v_21360_x;return V(std::floor(j::number(_number24885)));})();V _rhs24884=_v_21357_ex.get();return V(j::equal(_lhs24883,_rhs24884,true));})();return j::truth(_logical24882)?([&]()->V{V _lhs24886=([&]()->V{V _number24888=_v_21361_y;return V(std::floor(j::number(_number24888)));})();V _rhs24887=_v_21358_ey.get();return V(j::equal(_lhs24886,_rhs24887,true));})():_logical24882;})())?this->_literals[132]:this->_literals[12]);
return V{};
},2));return _obj24881;})()});})();

}

return V{};
},2),([&]()->V{V _obj24890=j::object();j::put(_obj24890,this->_literals[60],j::function([=](const j::Args &_args_fn21362,const V &_receiver_fn21362,const V &_self_fn21362) mutable ->V{
return ([&]()->V{V _callee24892=this->_v_22151_solid.get();return j::call(_callee24892,j::Args{([&]()->V{V _obj24891=j::object();j::put(_obj24891,this->_literals[98],this->_literals[133]);j::put(_obj24891,this->_literals[116],this->_literals[134]);j::put(_obj24891,this->_literals[135],V(true));return _obj24891;})()});})();
return V{};
},0));return _obj24890;})()});})();

}

return V{};
},1);
this->_v_21363_house.get()=j::function([=](const j::Args &_args_fn21364,const V &_receiver_fn21364,const V &_self_fn21364) mutable ->V{
V _v_21365_o;
_v_21365_o=_args_fn21364[0];
{
j::Cell _v_21366_p;
j::Cell _v_21367_ratio;
V _v_21368_rect;
j::Cell _v_21377_roofPts;
j::Cell _v_21378_units;
V _v_21385_part;
V _v_21393_walls;
V _v_21394_roof;
V _v_21395_chimney;
V _v_21396_whole;
_v_21366_p.get()=([&]()->V{V _callee24894=this->_v_20652_optionsOf.get();return j::call(_callee24894,j::Args{this->_literals[136],_v_21365_o,this->_v_20762_PLACE_KEYS.get()});})();
(void)(([&]()->V{V _callee24895=this->_v_20763_checkPlace.get();return j::call(_callee24895,j::Args{this->_literals[137],_v_21366_p.get()});})());
_v_21367_ratio.get()=V(1.15);
_v_21368_rect=j::function([=](const j::Args &_args_fn21369,const V &_receiver_fn21369,const V &_self_fn21369) mutable ->V{
j::Cell _v_21370_x0;
j::Cell _v_21371_y0;
j::Cell _v_21372_x1;
j::Cell _v_21373_y1;
_v_21370_x0.get()=_args_fn21369[0];
_v_21371_y0.get()=_args_fn21369[1];
_v_21372_x1.get()=_args_fn21369[2];
_v_21373_y1.get()=_args_fn21369[3];
return j::function([=](const j::Args &_args_fn21374,const V &_receiver_fn21374,const V &_self_fn21374) mutable ->V{
V _v_21375_px;
V _v_21376_py;
_v_21375_px=_args_fn21374[0];
_v_21376_py=_args_fn21374[1];
return ([&]()->V{V _logical24896=([&]()->V{V _logical24897=([&]()->V{V _logical24898=([&]()->V{V _lhs24899=_v_21375_px;V _rhs24900=_v_21370_x0.get();return j::binary(">=",_lhs24899,_rhs24900);})();return j::truth(_logical24898)?([&]()->V{V _lhs24901=_v_21375_px;V _rhs24902=_v_21372_x1.get();return j::binary("<=",_lhs24901,_rhs24902);})():_logical24898;})();return j::truth(_logical24897)?([&]()->V{V _lhs24903=_v_21376_py;V _rhs24904=_v_21371_y0.get();return j::binary(">=",_lhs24903,_rhs24904);})():_logical24897;})();return j::truth(_logical24896)?([&]()->V{V _lhs24905=_v_21376_py;V _rhs24906=_v_21373_y1.get();return j::binary("<=",_lhs24905,_rhs24906);})():_logical24896;})();
return V{};
},2);
return V{};
},4);
_v_21377_roofPts.get()=([&]()->V{j::Args _array24907;_array24907.push_back(([&]()->V{j::Args _array24908;_array24908.push_back(V(0.0));_array24908.push_back(j::unary("-",V(0.36)));return j::array(std::move(_array24908));})());_array24907.push_back(([&]()->V{j::Args _array24909;_array24909.push_back(j::unary("-",V(0.56)));_array24909.push_back(V(0.12));return j::array(std::move(_array24909));})());_array24907.push_back(([&]()->V{j::Args _array24910;_array24910.push_back(V(0.56));_array24910.push_back(V(0.12));return j::array(std::move(_array24910));})());return j::array(std::move(_array24907));})();
_v_21378_units.get()=([&]()->V{V _obj24911=j::object();j::put(_obj24911,this->_literals[138],([&]()->V{V _callee24912=_v_21368_rect;return j::call(_callee24912,j::Args{j::unary("-",V(0.42)),V(0.06),V(0.42),V(0.5)});})());j::put(_obj24911,this->_literals[139],j::function([=](const j::Args &_args_fn21379,const V &_receiver_fn21379,const V &_self_fn21379) mutable ->V{
V _v_21380_px;
V _v_21381_py;
_v_21380_px=_args_fn21379[0];
_v_21381_py=_args_fn21379[1];
return ([&]()->V{V _callee24913=this->_v_20837_inPolygon.get();return j::call(_callee24913,j::Args{_v_21377_roofPts.get(),_v_21380_px,_v_21381_py});})();
return V{};
},2));j::put(_obj24911,this->_literals[140],([&]()->V{V _callee24914=_v_21368_rect;return j::call(_callee24914,j::Args{V(0.22),j::unary("-",V(0.5)),V(0.33),j::unary("-",V(0.1))});})());j::put(_obj24911,this->_literals[141],([&]()->V{V _callee24915=_v_21368_rect;return j::call(_callee24915,j::Args{j::unary("-",V(0.08)),V(0.24),V(0.08),V(0.5)});})());j::put(_obj24911,this->_literals[142],j::function([=](const j::Args &_args_fn21382,const V &_receiver_fn21382,const V &_self_fn21382) mutable ->V{
V _v_21383_px;
V _v_21384_py;
_v_21383_px=_args_fn21382[0];
_v_21384_py=_args_fn21382[1];
return ([&]()->V{V _logical24916=([&]()->V{V _logical24917=([&]()->V{V _lhs24918=_v_21384_py;V _rhs24919=V(0.14);return j::binary(">=",_lhs24918,_rhs24919);})();return j::truth(_logical24917)?([&]()->V{V _lhs24920=_v_21384_py;V _rhs24921=V(0.32);return j::binary("<=",_lhs24920,_rhs24921);})():_logical24917;})();return j::truth(_logical24916)?([&]()->V{V _logical24922=([&]()->V{V _logical24923=([&]()->V{V _lhs24924=_v_21383_px;V _rhs24925=j::unary("-",V(0.34));return j::binary(">=",_lhs24924,_rhs24925);})();return j::truth(_logical24923)?([&]()->V{V _lhs24926=_v_21383_px;V _rhs24927=j::unary("-",V(0.16));return j::binary("<=",_lhs24926,_rhs24927);})():_logical24923;})();return !j::truth(_logical24922)?([&]()->V{V _logical24928=([&]()->V{V _lhs24929=_v_21383_px;V _rhs24930=V(0.16);return j::binary(">=",_lhs24929,_rhs24930);})();return j::truth(_logical24928)?([&]()->V{V _lhs24931=_v_21383_px;V _rhs24932=V(0.34);return j::binary("<=",_lhs24931,_rhs24932);})():_logical24928;})():_logical24922;})():_logical24916;})();
return V{};
},2));return _obj24911;})();
_v_21385_part=j::function([=](const j::Args &_args_fn21386,const V &_receiver_fn21386,const V &_self_fn21386) mutable ->V{
j::Cell _v_21387_u;
V _v_21388_more;
_v_21387_u.get()=_args_fn21386[0];
V _default24933=_args_fn21386[1];if(_default24933.kind==V::Undefined||_default24933.kind==V::Hole)_default24933=([&]()->V{V _obj24934=j::object();return _obj24934;})();
_v_21388_more=_default24933;
return ([&]()->V{V _callee24939=this->_v_20746_makeArea.get();return j::call(_callee24939,j::Args{j::function([=](const j::Args &_args_fn21389,const V &_receiver_fn21389,const V &_self_fn21389) mutable ->V{
V _v_21390_cols;
V _v_21391_rows;
_v_21390_cols=_args_fn21389[0];
_v_21391_rows=_args_fn21389[1];
{
V _v_21392_b;
_v_21392_b=([&]()->V{V _callee24936=this->_v_20779_boxOf.get();return j::call(_callee24936,j::Args{_v_21366_p.get(),_v_21367_ratio.get(),_v_21390_cols,_v_21391_rows,([&]()->V{V _obj24935=j::object();j::put(_obj24935,this->_literals[45],this->_literals[82]);j::put(_obj24935,this->_literals[39],this->_literals[36]);return _obj24935;})()});})();
return ([&]()->V{V _callee24938=this->_v_20810_placedOf.get();return j::call(_callee24938,j::Args{_v_21392_b,([&]()->V{V _callee24937=this->_v_20800_unitTest.get();return j::call(_callee24937,j::Args{_v_21392_b,_v_21367_ratio.get(),_v_21387_u.get()});})()});})();

}

return V{};
},2),_v_21388_more});})();
return V{};
},1);
_v_21393_walls=([&]()->V{V _callee24940=_v_21385_part;return j::call(_callee24940,j::Args{j::get(_v_21378_units.get(),this->_literals[138])});})();
_v_21394_roof=([&]()->V{V _callee24941=_v_21385_part;return j::call(_callee24941,j::Args{j::get(_v_21378_units.get(),this->_literals[139])});})();
_v_21395_chimney=([&]()->V{V _callee24942=_v_21385_part;return j::call(_callee24942,j::Args{j::get(_v_21378_units.get(),this->_literals[140])});})();
_v_21396_whole=([&]()->V{V _callee24956=_v_21385_part;return j::call(_callee24956,j::Args{j::function([=](const j::Args &_args_fn21397,const V &_receiver_fn21397,const V &_self_fn21397) mutable ->V{
V _v_21398_px;
V _v_21399_py;
_v_21398_px=_args_fn21397[0];
_v_21399_py=_args_fn21397[1];
return ([&]()->V{V _logical24943=([&]()->V{V _logical24944=([&]()->V{V _receiver24945=_v_21378_units.get();V _method24946=this->_literals[138];V _method=j::get(_receiver24945,_method24946);j::Args _params24947=j::Args{_v_21398_px,_v_21399_py};return j::call(_method,_params24947,_receiver24945);})();return !j::truth(_logical24944)?([&]()->V{V _receiver24948=_v_21378_units.get();V _method24949=this->_literals[139];V _method=j::get(_receiver24948,_method24949);j::Args _params24950=j::Args{_v_21398_px,_v_21399_py};return j::call(_method,_params24950,_receiver24948);})():_logical24944;})();return !j::truth(_logical24943)?([&]()->V{V _receiver24951=_v_21378_units.get();V _method24952=this->_literals[140];V _method=j::get(_receiver24951,_method24952);j::Args _params24953=j::Args{_v_21398_px,_v_21399_py};return j::call(_method,_params24953,_receiver24951);})():_logical24943;})();
return V{};
},2),([&]()->V{V _obj24954=j::object();j::put(_obj24954,this->_literals[89],([&]()->V{j::Args _array24955;_array24955.push_back(_v_21395_chimney);_array24955.push_back(_v_21393_walls);_array24955.push_back(_v_21394_roof);return j::array(std::move(_array24955));})());return _obj24954;})()});})();
return ([&]()->V{V _receiver24962=j::builtin("Object");V _method24963=this->_literals[144];V _method=j::get(_receiver24962,_method24963);j::Args _params24964=j::Args{_v_21396_whole,([&]()->V{V _obj24957=j::object();j::put(_obj24957,this->_literals[60],j::function([=](const j::Args &_args_fn21400,const V &_receiver_fn21400,const V &_self_fn21400) mutable ->V{
return ([&]()->V{V _callee24959=this->_v_22243_ceramic.get();return j::call(_callee24959,j::Args{([&]()->V{V _obj24958=j::object();j::put(_obj24958,this->_literals[98],this->_literals[143]);return _obj24958;})()});})();
return V{};
},0));j::put(_obj24957,this->_literals[138],_v_21393_walls);j::put(_obj24957,this->_literals[139],_v_21394_roof);j::put(_obj24957,this->_literals[140],_v_21395_chimney);j::put(_obj24957,this->_literals[141],([&]()->V{V _callee24960=_v_21385_part;return j::call(_callee24960,j::Args{j::get(_v_21378_units.get(),this->_literals[141])});})());j::put(_obj24957,this->_literals[142],([&]()->V{V _callee24961=_v_21385_part;return j::call(_callee24961,j::Args{j::get(_v_21378_units.get(),this->_literals[142])});})());return _obj24957;})()};return j::call(_method,_params24964,_receiver24962);})();

}

return V{};
},1);
this->_v_21401_lamp.get()=j::function([=](const j::Args &_args_fn21402,const V &_receiver_fn21402,const V &_self_fn21402) mutable ->V{
V _v_21403_o;
_v_21403_o=_args_fn21402[0];
{
j::Cell _v_21404_p;
j::Cell _v_21405_ratio;
j::Cell _v_21406_units;
V _v_21418_part;
V _v_21431_cap;
V _v_21432_globe;
V _v_21433_base;
V _v_21434_whole;
_v_21404_p.get()=([&]()->V{V _callee24965=this->_v_20652_optionsOf.get();return j::call(_callee24965,j::Args{this->_literals[145],_v_21403_o,this->_v_20762_PLACE_KEYS.get()});})();
(void)(([&]()->V{V _callee24966=this->_v_20763_checkPlace.get();return j::call(_callee24966,j::Args{this->_literals[146],_v_21404_p.get()});})());
_v_21405_ratio.get()=V(0.42);
_v_21406_units.get()=([&]()->V{V _obj24967=j::object();j::put(_obj24967,this->_literals[147],j::function([=](const j::Args &_args_fn21407,const V &_receiver_fn21407,const V &_self_fn21407) mutable ->V{
V _v_21408_px;
V _v_21409_py;
_v_21408_px=_args_fn21407[0];
_v_21409_py=_args_fn21407[1];
return ([&]()->V{V _logical24968=([&]()->V{V _logical24969=([&]()->V{V _lhs24970=_v_21409_py;V _rhs24971=j::unary("-",V(0.5));return j::binary(">=",_lhs24970,_rhs24971);})();return j::truth(_logical24969)?([&]()->V{V _lhs24972=_v_21409_py;V _rhs24973=j::unary("-",V(0.34));return j::binary("<=",_lhs24972,_rhs24973);})():_logical24969;})();return j::truth(_logical24968)?([&]()->V{V _lhs24974=([&]()->V{V _number24976=_v_21408_px;return V(std::fabs(j::number(_number24976)));})();V _rhs24975=([&]()->V{V _callee24981=this->_v_20636_lerp.get();return j::call(_callee24981,j::Args{V(0.035),V(0.085),([&]()->V{V _lhs24977=([&]()->V{V _lhs24979=_v_21409_py;V _rhs24980=V(0.5);return j::binary("+",_lhs24979,_rhs24980);})();V _rhs24978=V(0.16);return V(j::number(_lhs24977)/j::number(_rhs24978));})()});})();return j::binary("<=",_lhs24974,_rhs24975);})():_logical24968;})();
return V{};
},2));j::put(_obj24967,this->_literals[148],j::function([=](const j::Args &_args_fn21410,const V &_receiver_fn21410,const V &_self_fn21410) mutable ->V{
V _v_21411_px;
V _v_21412_py;
_v_21411_px=_args_fn21410[0];
_v_21412_py=_args_fn21410[1];
{
V _v_21413_k;
V _v_21414_w;
if(j::truth(([&]()->V{V _logical24982=([&]()->V{V _lhs24983=_v_21412_py;V _rhs24984=j::unary("-",V(0.38));return j::binary("<",_lhs24983,_rhs24984);})();return !j::truth(_logical24982)?([&]()->V{V _lhs24985=_v_21412_py;V _rhs24986=V(0.24);return j::binary(">",_lhs24985,_rhs24986);})():_logical24982;})())){return V(false);
}
_v_21413_k=([&]()->V{V _lhs24987=([&]()->V{V _lhs24989=_v_21412_py;V _rhs24990=V(0.38);return j::binary("+",_lhs24989,_rhs24990);})();V _rhs24988=V(0.62);return V(j::number(_lhs24987)/j::number(_rhs24988));})();
_v_21414_w=(j::truth(([&]()->V{V _lhs24991=_v_21413_k;V _rhs24992=V(0.75);return j::binary("<",_lhs24991,_rhs24992);})())?([&]()->V{V _callee24995=this->_v_20636_lerp.get();return j::call(_callee24995,j::Args{V(0.075),V(0.175),([&]()->V{V _lhs24993=_v_21413_k;V _rhs24994=V(0.75);return V(j::number(_lhs24993)/j::number(_rhs24994));})()});})():([&]()->V{V _callee25000=this->_v_20636_lerp.get();return j::call(_callee25000,j::Args{V(0.175),V(0.145),([&]()->V{V _lhs24996=([&]()->V{V _lhs24998=_v_21413_k;V _rhs24999=V(0.75);return V(j::number(_lhs24998)-j::number(_rhs24999));})();V _rhs24997=V(0.25);return V(j::number(_lhs24996)/j::number(_rhs24997));})()});})());
return ([&]()->V{V _lhs25001=([&]()->V{V _number25003=_v_21411_px;return V(std::fabs(j::number(_number25003)));})();V _rhs25002=_v_21414_w;return j::binary("<=",_lhs25001,_rhs25002);})();

}

return V{};
},2));j::put(_obj24967,this->_literals[57],j::function([=](const j::Args &_args_fn21415,const V &_receiver_fn21415,const V &_self_fn21415) mutable ->V{
V _v_21416_px;
V _v_21417_py;
_v_21416_px=_args_fn21415[0];
_v_21417_py=_args_fn21415[1];
return ([&]()->V{V _logical25004=([&]()->V{V _logical25005=([&]()->V{V _lhs25006=_v_21417_py;V _rhs25007=V(0.19);return j::binary(">=",_lhs25006,_rhs25007);})();return j::truth(_logical25005)?([&]()->V{V _lhs25008=_v_21417_py;V _rhs25009=V(0.5);return j::binary("<=",_lhs25008,_rhs25009);})():_logical25005;})();return j::truth(_logical25004)?([&]()->V{V _lhs25010=([&]()->V{V _number25012=_v_21416_px;return V(std::fabs(j::number(_number25012)));})();V _rhs25011=([&]()->V{V _callee25017=this->_v_20636_lerp.get();return j::call(_callee25017,j::Args{V(0.145),V(0.21),([&]()->V{V _lhs25013=([&]()->V{V _lhs25015=_v_21417_py;V _rhs25016=V(0.19);return V(j::number(_lhs25015)-j::number(_rhs25016));})();V _rhs25014=V(0.31);return V(j::number(_lhs25013)/j::number(_rhs25014));})()});})();return j::binary("<=",_lhs25010,_rhs25011);})():_logical25004;})();
return V{};
},2));return _obj24967;})();
_v_21418_part=j::function([=](const j::Args &_args_fn21419,const V &_receiver_fn21419,const V &_self_fn21419) mutable ->V{
j::Cell _v_21420_u;
j::Cell _v_21421_vessel;
_v_21420_u.get()=_args_fn21419[0];
V _default25018=_args_fn21419[1];if(_default25018.kind==V::Undefined||_default25018.kind==V::Hole)_default25018=V(false);
_v_21421_vessel.get()=_default25018;
return ([&]()->V{V _callee25047=this->_v_20746_makeArea.get();return j::call(_callee25047,j::Args{j::function([=](const j::Args &_args_fn21422,const V &_receiver_fn21422,const V &_self_fn21422) mutable ->V{
V _v_21423_cols;
V _v_21424_rows;
_v_21423_cols=_args_fn21422[0];
_v_21424_rows=_args_fn21422[1];
{
V _v_21425_b;
j::Cell _v_21426_test;
V _v_21427_cavity;
_v_21425_b=([&]()->V{V _callee25020=this->_v_20779_boxOf.get();return j::call(_callee25020,j::Args{_v_21404_p.get(),_v_21405_ratio.get(),_v_21423_cols,_v_21424_rows,([&]()->V{V _obj25019=j::object();j::put(_obj25019,this->_literals[45],this->_literals[82]);j::put(_obj25019,this->_literals[39],this->_literals[36]);return _obj25019;})()});})();
_v_21426_test.get()=([&]()->V{V _callee25021=this->_v_20800_unitTest.get();return j::call(_callee25021,j::Args{_v_21425_b,_v_21405_ratio.get(),_v_21420_u.get()});})();
if(j::truth(j::unary("!",_v_21421_vessel.get()))){return ([&]()->V{V _callee25022=this->_v_20810_placedOf.get();return j::call(_callee25022,j::Args{_v_21425_b,_v_21426_test.get()});})();
}
_v_21427_cavity=j::function([=](const j::Args &_args_fn21428,const V &_receiver_fn21428,const V &_self_fn21428) mutable ->V{
V _v_21429_x;
V _v_21430_y;
_v_21429_x=_args_fn21428[0];
_v_21430_y=_args_fn21428[1];
return ([&]()->V{V _logical25023=([&]()->V{V _logical25024=([&]()->V{V _logical25025=([&]()->V{V _logical25026=([&]()->V{V _callee25027=_v_21426_test.get();return j::call(_callee25027,j::Args{_v_21429_x,_v_21430_y});})();return j::truth(_logical25026)?([&]()->V{V _callee25030=_v_21426_test.get();return j::call(_callee25030,j::Args{([&]()->V{V _lhs25028=_v_21429_x;V _rhs25029=V(1.0);return V(j::number(_lhs25028)-j::number(_rhs25029));})(),_v_21430_y});})():_logical25026;})();return j::truth(_logical25025)?([&]()->V{V _callee25033=_v_21426_test.get();return j::call(_callee25033,j::Args{([&]()->V{V _lhs25031=_v_21429_x;V _rhs25032=V(1.0);return j::binary("+",_lhs25031,_rhs25032);})(),_v_21430_y});})():_logical25025;})();return j::truth(_logical25024)?([&]()->V{V _callee25036=_v_21426_test.get();return j::call(_callee25036,j::Args{_v_21429_x,([&]()->V{V _lhs25034=_v_21430_y;V _rhs25035=V(1.0);return j::binary("+",_lhs25034,_rhs25035);})()});})():_logical25024;})();return j::truth(_logical25023)?([&]()->V{V _callee25039=_v_21426_test.get();return j::call(_callee25039,j::Args{_v_21429_x,([&]()->V{V _lhs25037=_v_21430_y;V _rhs25038=V(1.0);return V(j::number(_lhs25037)-j::number(_rhs25038));})()});})():_logical25023;})();
return V{};
},2);
return ([&]()->V{V _callee25046=this->_v_20810_placedOf.get();return j::call(_callee25046,j::Args{_v_21425_b,_v_21426_test.get(),([&]()->V{V _obj25040=j::object();j::put(_obj25040,this->_literals[59],([&]()->V{V _obj25041=j::object();j::put(_obj25041,this->_literals[20],_v_21427_cavity);j::put(_obj25041,this->_literals[30],j::get(_v_21425_b,this->_literals[30]));j::put(_obj25041,this->_literals[35],j::get(_v_21425_b,this->_literals[35]));j::put(_obj25041,this->_literals[32],([&]()->V{V _lhs25042=j::get(_v_21425_b,this->_literals[30]);V _rhs25043=j::get(_v_21425_b,this->_literals[53]);return j::binary("+",_lhs25042,_rhs25043);})());j::put(_obj25041,this->_literals[37],([&]()->V{V _lhs25044=j::get(_v_21425_b,this->_literals[35]);V _rhs25045=j::get(_v_21425_b,this->_literals[54]);return j::binary("+",_lhs25044,_rhs25045);})());return _obj25041;})());j::put(_obj25040,this->_literals[58],V(false));return _obj25040;})()});})();

}

return V{};
},2)});})();
return V{};
},1);
_v_21431_cap=([&]()->V{V _callee25048=_v_21418_part;return j::call(_callee25048,j::Args{j::get(_v_21406_units.get(),this->_literals[147])});})();
_v_21432_globe=([&]()->V{V _callee25049=_v_21418_part;return j::call(_callee25049,j::Args{j::get(_v_21406_units.get(),this->_literals[148]),V(true)});})();
_v_21433_base=([&]()->V{V _callee25050=_v_21418_part;return j::call(_callee25050,j::Args{j::get(_v_21406_units.get(),this->_literals[57])});})();
_v_21434_whole=([&]()->V{V _receiver25065=j::builtin("Object");V _method25066=this->_literals[144];V _method=j::get(_receiver25065,_method25066);j::Args _params25067=j::Args{([&]()->V{V _callee25062=_v_21418_part;return j::call(_callee25062,j::Args{j::function([=](const j::Args &_args_fn21435,const V &_receiver_fn21435,const V &_self_fn21435) mutable ->V{
V _v_21436_px;
V _v_21437_py;
_v_21436_px=_args_fn21435[0];
_v_21437_py=_args_fn21435[1];
return ([&]()->V{V _logical25051=([&]()->V{V _logical25052=([&]()->V{V _receiver25053=_v_21406_units.get();V _method25054=this->_literals[147];V _method=j::get(_receiver25053,_method25054);j::Args _params25055=j::Args{_v_21436_px,_v_21437_py};return j::call(_method,_params25055,_receiver25053);})();return !j::truth(_logical25052)?([&]()->V{V _receiver25056=_v_21406_units.get();V _method25057=this->_literals[148];V _method=j::get(_receiver25056,_method25057);j::Args _params25058=j::Args{_v_21436_px,_v_21437_py};return j::call(_method,_params25058,_receiver25056);})():_logical25052;})();return !j::truth(_logical25051)?([&]()->V{V _receiver25059=_v_21406_units.get();V _method25060=this->_literals[57];V _method=j::get(_receiver25059,_method25060);j::Args _params25061=j::Args{_v_21436_px,_v_21437_py};return j::call(_method,_params25061,_receiver25059);})():_logical25051;})();
return V{};
},2)});})(),([&]()->V{V _obj25063=j::object();j::put(_obj25063,this->_literals[89],([&]()->V{j::Args _array25064;_array25064.push_back(_v_21432_globe);_array25064.push_back(_v_21433_base);_array25064.push_back(_v_21431_cap);return j::array(std::move(_array25064));})());return _obj25063;})()};return j::call(_method,_params25067,_receiver25065);})();
return ([&]()->V{V _receiver25070=j::builtin("Object");V _method25071=this->_literals[144];V _method=j::get(_receiver25070,_method25071);j::Args _params25072=j::Args{_v_21434_whole,([&]()->V{V _obj25068=j::object();j::put(_obj25068,this->_literals[60],j::function([=](const j::Args &_args_fn21438,const V &_receiver_fn21438,const V &_self_fn21438) mutable ->V{
return ([&]()->V{V _callee25069=this->_v_21840_metal.get();return j::call(_callee25069,j::Args{});})();
return V{};
},0));j::put(_obj25068,this->_literals[147],_v_21431_cap);j::put(_obj25068,this->_literals[148],_v_21432_globe);j::put(_obj25068,this->_literals[57],_v_21433_base);return _obj25068;})()};return j::call(_method,_params25072,_receiver25070);})();

}

return V{};
},1);
this->_v_21440_cellsOf.get()=j::function([=](const j::Args &_args_fn21441,const V &_receiver_fn21441,const V &_self_fn21441) mutable ->V{
V _v_21442_a;
j::Cell _v_21443_cols;
j::Cell _v_21444_rows;
_v_21442_a=_args_fn21441[0];
_v_21443_cols.get()=_args_fn21441[1];
_v_21444_rows.get()=_args_fn21441[2];
{
V _v_21445_p;
V _v_21446_n;
V _v_21447_cover;
j::Cell _v_21448_W;
j::Cell _v_21449_pad;
V _v_21450_bx0;
V _v_21451_bx1;
V _v_21452_by0;
V _v_21453_by1;
V _v_21454_step;
V _v_21455_all;
V _v_21461_inside;
j::Cell _v_21462_list;
V _v_21463_x0;
V _v_21464_y0;
V _v_21465_x1;
V _v_21466_y1;
V _v_21467_top;
V _v_21468_bottom;
V _v_21469_left;
V _v_21470_right;
j::Cell _v_21474_cv;
j::Cell _v_21478_isIn;
j::Cell _v_21482_border;
V _v_21483_nx;
V _v_21484_ny;
j::Cell _v_21495_depth;
V _v_21496_D;
j::Cell _v_21497_far;
V _v_21499_d;
V _v_21510_maxDepth;
j::Cell _v_21512_fringe;
V _v_21518_isFringe;
j::Cell _v_21520_outlines;
j::Cell _v_21521_cells;
_v_21445_p=(j::truth(([&]()->V{V _callee25073=this->_v_20728_isArea.get();return j::call(_callee25073,j::Args{_v_21442_a});})())?([&]()->V{V _receiver25074=_v_21442_a;V _method25075=this->_literals[27];V _method=j::get(_receiver25074,_method25075);j::Args _params25076=j::Args{_v_21443_cols.get(),_v_21444_rows.get()};return j::call(_method,_params25076,_receiver25074);})():_v_21442_a);
_v_21446_n=([&]()->V{V _lhs25077=_v_21443_cols.get();V _rhs25078=_v_21444_rows.get();return V(j::number(_lhs25077)*j::number(_rhs25078));})();
_v_21447_cover=([&]()->V{V _callee25079=j::builtin("Float32Array");return j::construct(_callee25079,j::Args{_v_21446_n});})();
_v_21448_W.get()=([&]()->V{V _lhs25080=_v_21443_cols.get();V _rhs25081=V(2.0);return j::binary("+",_lhs25080,_rhs25081);})();
_v_21449_pad.get()=([&]()->V{V _callee25086=j::builtin("Float32Array");return j::construct(_callee25086,j::Args{([&]()->V{V _lhs25082=_v_21448_W.get();V _rhs25083=([&]()->V{V _lhs25084=_v_21444_rows.get();V _rhs25085=V(2.0);return j::binary("+",_lhs25084,_rhs25085);})();return V(j::number(_lhs25082)*j::number(_rhs25083));})()});})();
_v_21450_bx0=([&]()->V{V _callee25092=this->_v_20630_clamp.get();return j::call(_callee25092,j::Args{([&]()->V{V _lhs25087=([&]()->V{V _number25089=j::get(_v_21445_p,this->_literals[30]);return V(std::floor(j::number(_number25089)));})();V _rhs25088=V(1.0);return V(j::number(_lhs25087)-j::number(_rhs25088));})(),j::unary("-",V(1.0)),([&]()->V{V _lhs25090=_v_21443_cols.get();V _rhs25091=V(1.0);return j::binary("+",_lhs25090,_rhs25091);})()});})();
_v_21451_bx1=([&]()->V{V _callee25098=this->_v_20630_clamp.get();return j::call(_callee25098,j::Args{([&]()->V{V _lhs25093=([&]()->V{V _number25095=j::get(_v_21445_p,this->_literals[32]);return V(std::ceil(j::number(_number25095)));})();V _rhs25094=V(1.0);return j::binary("+",_lhs25093,_rhs25094);})(),j::unary("-",V(1.0)),([&]()->V{V _lhs25096=_v_21443_cols.get();V _rhs25097=V(1.0);return j::binary("+",_lhs25096,_rhs25097);})()});})();
_v_21452_by0=([&]()->V{V _callee25104=this->_v_20630_clamp.get();return j::call(_callee25104,j::Args{([&]()->V{V _lhs25099=([&]()->V{V _number25101=j::get(_v_21445_p,this->_literals[35]);return V(std::floor(j::number(_number25101)));})();V _rhs25100=V(1.0);return V(j::number(_lhs25099)-j::number(_rhs25100));})(),j::unary("-",V(1.0)),([&]()->V{V _lhs25102=_v_21444_rows.get();V _rhs25103=V(1.0);return j::binary("+",_lhs25102,_rhs25103);})()});})();
_v_21453_by1=([&]()->V{V _callee25110=this->_v_20630_clamp.get();return j::call(_callee25110,j::Args{([&]()->V{V _lhs25105=([&]()->V{V _number25107=j::get(_v_21445_p,this->_literals[37]);return V(std::ceil(j::number(_number25107)));})();V _rhs25106=V(1.0);return j::binary("+",_lhs25105,_rhs25106);})(),j::unary("-",V(1.0)),([&]()->V{V _lhs25108=_v_21444_rows.get();V _rhs25109=V(1.0);return j::binary("+",_lhs25108,_rhs25109);})()});})();
_v_21454_step=([&]()->V{V _lhs25111=V(1.0);V _rhs25112=this->_v_21439_SAMPLES.get();return V(j::number(_lhs25111)/j::number(_rhs25112));})();
_v_21455_all=([&]()->V{V _lhs25113=this->_v_21439_SAMPLES.get();V _rhs25114=this->_v_21439_SAMPLES.get();return V(j::number(_lhs25113)*j::number(_rhs25114));})();
{V _v_21456_y;
_v_21456_y=_v_21452_by0;
for(;j::truth(([&]()->V{V _lhs25115=_v_21456_y;V _rhs25116=_v_21453_by1;return j::binary("<",_lhs25115,_rhs25116);})());(void)(j::increment(_v_21456_y,1,false))){{V _v_21457_x;
_v_21457_x=_v_21450_bx0;
for(;j::truth(([&]()->V{V _lhs25117=_v_21457_x;V _rhs25118=_v_21451_bx1;return j::binary("<",_lhs25117,_rhs25118);})());(void)(j::increment(_v_21457_x,1,false))){
V _v_21458_k;
_v_21458_k=V(0.0);
{V _v_21459_j;
_v_21459_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs25119=_v_21459_j;V _rhs25120=this->_v_21439_SAMPLES.get();return j::binary("<",_lhs25119,_rhs25120);})());(void)(j::increment(_v_21459_j,1,false))){{V _v_21460_i;
_v_21460_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs25121=_v_21460_i;V _rhs25122=this->_v_21439_SAMPLES.get();return j::binary("<",_lhs25121,_rhs25122);})());(void)(j::increment(_v_21460_i,1,false))){if(j::truth(([&]()->V{V _receiver25135=_v_21445_p;V _method25136=this->_literals[20];V _method=j::get(_receiver25135,_method25136);j::Args _params25137=j::Args{([&]()->V{V _lhs25123=_v_21457_x;V _rhs25124=([&]()->V{V _lhs25125=([&]()->V{V _lhs25127=_v_21460_i;V _rhs25128=V(0.5);return j::binary("+",_lhs25127,_rhs25128);})();V _rhs25126=_v_21454_step;return V(j::number(_lhs25125)*j::number(_rhs25126));})();return j::binary("+",_lhs25123,_rhs25124);})(),([&]()->V{V _lhs25129=_v_21456_y;V _rhs25130=([&]()->V{V _lhs25131=([&]()->V{V _lhs25133=_v_21459_j;V _rhs25134=V(0.5);return j::binary("+",_lhs25133,_rhs25134);})();V _rhs25132=_v_21454_step;return V(j::number(_lhs25131)*j::number(_rhs25132));})();return j::binary("+",_lhs25129,_rhs25130);})()};return j::call(_method,_params25137,_receiver25135);})())){(void)(j::increment(_v_21458_k,1,false));
}
}}
}}
(void)(([&]()->V{V _base25139=_v_21449_pad.get();V _key25140=([&]()->V{V _lhs25141=([&]()->V{V _lhs25143=([&]()->V{V _lhs25145=([&]()->V{V _lhs25147=_v_21456_y;V _rhs25148=V(1.0);return j::binary("+",_lhs25147,_rhs25148);})();V _rhs25146=_v_21448_W.get();return V(j::number(_lhs25145)*j::number(_rhs25146));})();V _rhs25144=_v_21457_x;return j::binary("+",_lhs25143,_rhs25144);})();V _rhs25142=V(1.0);return j::binary("+",_lhs25141,_rhs25142);})();V _assign25138=([&]()->V{V _lhs25149=_v_21458_k;V _rhs25150=_v_21455_all;return V(j::number(_lhs25149)/j::number(_rhs25150));})();return j::put(_base25139,_key25140,_assign25138);})());
if(j::truth(([&]()->V{V _logical25151=([&]()->V{V _logical25152=([&]()->V{V _logical25153=([&]()->V{V _lhs25154=_v_21457_x;V _rhs25155=V(0.0);return j::binary(">=",_lhs25154,_rhs25155);})();return j::truth(_logical25153)?([&]()->V{V _lhs25156=_v_21457_x;V _rhs25157=_v_21443_cols.get();return j::binary("<",_lhs25156,_rhs25157);})():_logical25153;})();return j::truth(_logical25152)?([&]()->V{V _lhs25158=_v_21456_y;V _rhs25159=V(0.0);return j::binary(">=",_lhs25158,_rhs25159);})():_logical25152;})();return j::truth(_logical25151)?([&]()->V{V _lhs25160=_v_21456_y;V _rhs25161=_v_21444_rows.get();return j::binary("<",_lhs25160,_rhs25161);})():_logical25151;})())){(void)(([&]()->V{V _base25163=_v_21447_cover;V _key25164=([&]()->V{V _lhs25165=([&]()->V{V _lhs25167=_v_21456_y;V _rhs25168=_v_21443_cols.get();return V(j::number(_lhs25167)*j::number(_rhs25168));})();V _rhs25166=_v_21457_x;return j::binary("+",_lhs25165,_rhs25166);})();V _assign25162=([&]()->V{V _lhs25169=_v_21458_k;V _rhs25170=_v_21455_all;return V(j::number(_lhs25169)/j::number(_rhs25170));})();return j::put(_base25163,_key25164,_assign25162);})());
}

}
}
}}
_v_21461_inside=([&]()->V{V _callee25171=j::builtin("Uint8Array");return j::construct(_callee25171,j::Args{_v_21446_n});})();
_v_21462_list.get()=([&]()->V{j::Args _array25172;return j::array(std::move(_array25172));})();
_v_21463_x0=_v_21443_cols.get();
_v_21464_y0=_v_21444_rows.get();
_v_21465_x1=V(0.0);
_v_21466_y1=V(0.0);
_v_21467_top=([&]()->V{V _receiver25173=([&]()->V{V _callee25176=j::builtin("Int16Array");return j::construct(_callee25176,j::Args{_v_21443_cols.get()});})();V _method25174=this->_literals[73];V _method=j::get(_receiver25173,_method25174);j::Args _params25175=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params25175,_receiver25173);})();
_v_21468_bottom=([&]()->V{V _receiver25177=([&]()->V{V _callee25180=j::builtin("Int16Array");return j::construct(_callee25180,j::Args{_v_21443_cols.get()});})();V _method25178=this->_literals[73];V _method=j::get(_receiver25177,_method25178);j::Args _params25179=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params25179,_receiver25177);})();
_v_21469_left=([&]()->V{V _receiver25181=([&]()->V{V _callee25184=j::builtin("Int16Array");return j::construct(_callee25184,j::Args{_v_21444_rows.get()});})();V _method25182=this->_literals[73];V _method=j::get(_receiver25181,_method25182);j::Args _params25183=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params25183,_receiver25181);})();
_v_21470_right=([&]()->V{V _receiver25185=([&]()->V{V _callee25188=j::builtin("Int16Array");return j::construct(_callee25188,j::Args{_v_21444_rows.get()});})();V _method25186=this->_literals[73];V _method=j::get(_receiver25185,_method25186);j::Args _params25187=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params25187,_receiver25185);})();
{V _v_21471_y;
_v_21471_y=([&]()->V{V _receiver25191=j::builtin("Math");V _method25192=this->_literals[51];V _method=j::get(_receiver25191,_method25192);j::Args _params25193=j::Args{V(0.0),_v_21452_by0};return j::call(_method,_params25193,_receiver25191);})();
for(;j::truth(([&]()->V{V _lhs25194=_v_21471_y;V _rhs25195=([&]()->V{V _receiver25198=j::builtin("Math");V _method25199=this->_literals[52];V _method=j::get(_receiver25198,_method25199);j::Args _params25200=j::Args{_v_21444_rows.get(),_v_21453_by1};return j::call(_method,_params25200,_receiver25198);})();return j::binary("<",_lhs25194,_rhs25195);})());(void)(j::increment(_v_21471_y,1,false))){{V _v_21472_x;
_v_21472_x=([&]()->V{V _receiver25203=j::builtin("Math");V _method25204=this->_literals[51];V _method=j::get(_receiver25203,_method25204);j::Args _params25205=j::Args{V(0.0),_v_21450_bx0};return j::call(_method,_params25205,_receiver25203);})();
for(;j::truth(([&]()->V{V _lhs25206=_v_21472_x;V _rhs25207=([&]()->V{V _receiver25210=j::builtin("Math");V _method25211=this->_literals[52];V _method=j::get(_receiver25210,_method25211);j::Args _params25212=j::Args{_v_21443_cols.get(),_v_21451_bx1};return j::call(_method,_params25212,_receiver25210);})();return j::binary("<",_lhs25206,_rhs25207);})());(void)(j::increment(_v_21472_x,1,false))){
V _v_21473_i;
_v_21473_i=([&]()->V{V _lhs25213=([&]()->V{V _lhs25215=_v_21471_y;V _rhs25216=_v_21443_cols.get();return V(j::number(_lhs25215)*j::number(_rhs25216));})();V _rhs25214=_v_21472_x;return j::binary("+",_lhs25213,_rhs25214);})();
if(j::truth(([&]()->V{V _lhs25217=j::get(_v_21447_cover,_v_21473_i);V _rhs25218=V(0.5);return j::binary("<",_lhs25217,_rhs25218);})())){continue;
}
(void)(([&]()->V{V _base25220=_v_21461_inside;V _key25221=_v_21473_i;V _assign25219=V(1.0);return j::put(_base25220,_key25221,_assign25219);})());
(void)(([&]()->V{V _receiver25222=_v_21462_list.get();V _method25223=this->_literals[149];V _method=j::get(_receiver25222,_method25223);j::Args _params25224=j::Args{_v_21473_i};return j::call(_method,_params25224,_receiver25222);})());
if(j::truth(([&]()->V{V _lhs25225=_v_21472_x;V _rhs25226=_v_21463_x0;return j::binary("<",_lhs25225,_rhs25226);})())){(void)((_v_21463_x0=_v_21472_x));
}
if(j::truth(([&]()->V{V _lhs25228=_v_21472_x;V _rhs25229=_v_21465_x1;return j::binary(">=",_lhs25228,_rhs25229);})())){(void)((_v_21465_x1=([&]()->V{V _lhs25231=_v_21472_x;V _rhs25232=V(1.0);return j::binary("+",_lhs25231,_rhs25232);})()));
}
if(j::truth(([&]()->V{V _lhs25233=_v_21471_y;V _rhs25234=_v_21464_y0;return j::binary("<",_lhs25233,_rhs25234);})())){(void)((_v_21464_y0=_v_21471_y));
}
if(j::truth(([&]()->V{V _lhs25236=_v_21471_y;V _rhs25237=_v_21466_y1;return j::binary(">=",_lhs25236,_rhs25237);})())){(void)((_v_21466_y1=([&]()->V{V _lhs25239=_v_21471_y;V _rhs25240=V(1.0);return j::binary("+",_lhs25239,_rhs25240);})()));
}
if(j::truth(([&]()->V{V _lhs25241=j::get(_v_21467_top,_v_21472_x);V _rhs25242=V(0.0);return j::binary("<",_lhs25241,_rhs25242);})())){(void)(([&]()->V{V _base25244=_v_21467_top;V _key25245=_v_21472_x;V _assign25243=_v_21471_y;return j::put(_base25244,_key25245,_assign25243);})());
}
(void)(([&]()->V{V _base25247=_v_21468_bottom;V _key25248=_v_21472_x;V _assign25246=_v_21471_y;return j::put(_base25247,_key25248,_assign25246);})());
if(j::truth(([&]()->V{V _lhs25249=j::get(_v_21469_left,_v_21471_y);V _rhs25250=V(0.0);return j::binary("<",_lhs25249,_rhs25250);})())){(void)(([&]()->V{V _base25252=_v_21469_left;V _key25253=_v_21471_y;V _assign25251=_v_21472_x;return j::put(_base25252,_key25253,_assign25251);})());
}
(void)(([&]()->V{V _base25255=_v_21470_right;V _key25256=_v_21471_y;V _assign25254=_v_21472_x;return j::put(_base25255,_key25256,_assign25254);})());

}
}
}}
_v_21474_cv.get()=j::function([=](const j::Args &_args_fn21475,const V &_receiver_fn21475,const V &_self_fn21475) mutable ->V{
V _v_21476_x;
V _v_21477_y;
_v_21476_x=_args_fn21475[0];
_v_21477_y=_args_fn21475[1];
return j::get(_v_21449_pad.get(),([&]()->V{V _lhs25257=([&]()->V{V _lhs25259=([&]()->V{V _lhs25261=([&]()->V{V _lhs25263=_v_21477_y;V _rhs25264=V(1.0);return j::binary("+",_lhs25263,_rhs25264);})();V _rhs25262=_v_21448_W.get();return V(j::number(_lhs25261)*j::number(_rhs25262));})();V _rhs25260=_v_21476_x;return j::binary("+",_lhs25259,_rhs25260);})();V _rhs25258=V(1.0);return j::binary("+",_lhs25257,_rhs25258);})());
return V{};
},2);
_v_21478_isIn.get()=j::function([=](const j::Args &_args_fn21479,const V &_receiver_fn21479,const V &_self_fn21479) mutable ->V{
V _v_21480_x;
V _v_21481_y;
_v_21480_x=_args_fn21479[0];
_v_21481_y=_args_fn21479[1];
return (j::truth(([&]()->V{V _lhs25265=([&]()->V{V _callee25267=_v_21474_cv.get();return j::call(_callee25267,j::Args{_v_21480_x,_v_21481_y});})();V _rhs25266=V(0.5);return j::binary(">=",_lhs25265,_rhs25266);})())?V(1.0):V(0.0));
return V{};
},2);
_v_21482_border.get()=([&]()->V{V _callee25268=j::builtin("Uint8Array");return j::construct(_callee25268,j::Args{_v_21446_n});})();
_v_21483_nx=([&]()->V{V _callee25269=j::builtin("Float32Array");return j::construct(_callee25269,j::Args{_v_21446_n});})();
_v_21484_ny=([&]()->V{V _callee25270=j::builtin("Float32Array");return j::construct(_callee25270,j::Args{_v_21446_n});})();
{for(const auto &_item25271:j::elements(_v_21462_list.get())){V _v_21485_i;
_v_21485_i=_item25271;
{
j::Cell _v_21486_x;
j::Cell _v_21487_y;
V _v_21488_c;
V _v_21492_gx;
V _v_21493_gy;
V _v_21494_len;
_v_21486_x.get()=([&]()->V{V _lhs25272=_v_21485_i;V _rhs25273=_v_21443_cols.get();return V(std::fmod(j::number(_lhs25272),j::number(_rhs25273)));})();
_v_21487_y.get()=([&]()->V{V _lhs25274=([&]()->V{V _lhs25276=_v_21485_i;V _rhs25277=_v_21486_x.get();return V(j::number(_lhs25276)-j::number(_rhs25277));})();V _rhs25275=_v_21443_cols.get();return V(j::number(_lhs25274)/j::number(_rhs25275));})();
if(j::truth(([&]()->V{V _logical25278=([&]()->V{V _logical25279=([&]()->V{V _logical25280=([&]()->V{V _callee25283=_v_21478_isIn.get();return j::call(_callee25283,j::Args{([&]()->V{V _lhs25281=_v_21486_x.get();V _rhs25282=V(1.0);return V(j::number(_lhs25281)-j::number(_rhs25282));})(),_v_21487_y.get()});})();return j::truth(_logical25280)?([&]()->V{V _callee25286=_v_21478_isIn.get();return j::call(_callee25286,j::Args{([&]()->V{V _lhs25284=_v_21486_x.get();V _rhs25285=V(1.0);return j::binary("+",_lhs25284,_rhs25285);})(),_v_21487_y.get()});})():_logical25280;})();return j::truth(_logical25279)?([&]()->V{V _callee25289=_v_21478_isIn.get();return j::call(_callee25289,j::Args{_v_21486_x.get(),([&]()->V{V _lhs25287=_v_21487_y.get();V _rhs25288=V(1.0);return V(j::number(_lhs25287)-j::number(_rhs25288));})()});})():_logical25279;})();return j::truth(_logical25278)?([&]()->V{V _callee25292=_v_21478_isIn.get();return j::call(_callee25292,j::Args{_v_21486_x.get(),([&]()->V{V _lhs25290=_v_21487_y.get();V _rhs25291=V(1.0);return j::binary("+",_lhs25290,_rhs25291);})()});})():_logical25278;})())){continue;
}
(void)(([&]()->V{V _base25294=_v_21482_border.get();V _key25295=_v_21485_i;V _assign25293=V(1.0);return j::put(_base25294,_key25295,_assign25293);})());
_v_21488_c=j::function([=](const j::Args &_args_fn21489,const V &_receiver_fn21489,const V &_self_fn21489) mutable ->V{
V _v_21490_dx;
V _v_21491_dy;
_v_21490_dx=_args_fn21489[0];
_v_21491_dy=_args_fn21489[1];
return ([&]()->V{V _callee25300=_v_21474_cv.get();return j::call(_callee25300,j::Args{([&]()->V{V _lhs25296=_v_21486_x.get();V _rhs25297=_v_21490_dx;return j::binary("+",_lhs25296,_rhs25297);})(),([&]()->V{V _lhs25298=_v_21487_y.get();V _rhs25299=_v_21491_dy;return j::binary("+",_lhs25298,_rhs25299);})()});})();
return V{};
},2);
_v_21492_gx=([&]()->V{V _lhs25301=([&]()->V{V _lhs25303=([&]()->V{V _lhs25305=([&]()->V{V _lhs25307=([&]()->V{V _lhs25309=([&]()->V{V _callee25311=_v_21488_c;return j::call(_callee25311,j::Args{V(1.0),j::unary("-",V(1.0))});})();V _rhs25310=([&]()->V{V _lhs25312=V(2.0);V _rhs25313=([&]()->V{V _callee25314=_v_21488_c;return j::call(_callee25314,j::Args{V(1.0),V(0.0)});})();return V(j::number(_lhs25312)*j::number(_rhs25313));})();return j::binary("+",_lhs25309,_rhs25310);})();V _rhs25308=([&]()->V{V _callee25315=_v_21488_c;return j::call(_callee25315,j::Args{V(1.0),V(1.0)});})();return j::binary("+",_lhs25307,_rhs25308);})();V _rhs25306=([&]()->V{V _callee25316=_v_21488_c;return j::call(_callee25316,j::Args{j::unary("-",V(1.0)),j::unary("-",V(1.0))});})();return V(j::number(_lhs25305)-j::number(_rhs25306));})();V _rhs25304=([&]()->V{V _lhs25317=V(2.0);V _rhs25318=([&]()->V{V _callee25319=_v_21488_c;return j::call(_callee25319,j::Args{j::unary("-",V(1.0)),V(0.0)});})();return V(j::number(_lhs25317)*j::number(_rhs25318));})();return V(j::number(_lhs25303)-j::number(_rhs25304));})();V _rhs25302=([&]()->V{V _callee25320=_v_21488_c;return j::call(_callee25320,j::Args{j::unary("-",V(1.0)),V(1.0)});})();return V(j::number(_lhs25301)-j::number(_rhs25302));})();
_v_21493_gy=([&]()->V{V _lhs25321=([&]()->V{V _lhs25323=([&]()->V{V _lhs25325=([&]()->V{V _lhs25327=([&]()->V{V _lhs25329=([&]()->V{V _lhs25331=([&]()->V{V _callee25333=_v_21488_c;return j::call(_callee25333,j::Args{j::unary("-",V(1.0)),V(1.0)});})();V _rhs25332=([&]()->V{V _lhs25334=V(2.0);V _rhs25335=([&]()->V{V _callee25336=_v_21488_c;return j::call(_callee25336,j::Args{V(0.0),V(1.0)});})();return V(j::number(_lhs25334)*j::number(_rhs25335));})();return j::binary("+",_lhs25331,_rhs25332);})();V _rhs25330=([&]()->V{V _callee25337=_v_21488_c;return j::call(_callee25337,j::Args{V(1.0),V(1.0)});})();return j::binary("+",_lhs25329,_rhs25330);})();V _rhs25328=([&]()->V{V _callee25338=_v_21488_c;return j::call(_callee25338,j::Args{j::unary("-",V(1.0)),j::unary("-",V(1.0))});})();return V(j::number(_lhs25327)-j::number(_rhs25328));})();V _rhs25326=([&]()->V{V _lhs25339=V(2.0);V _rhs25340=([&]()->V{V _callee25341=_v_21488_c;return j::call(_callee25341,j::Args{V(0.0),j::unary("-",V(1.0))});})();return V(j::number(_lhs25339)*j::number(_rhs25340));})();return V(j::number(_lhs25325)-j::number(_rhs25326));})();V _rhs25324=([&]()->V{V _callee25342=_v_21488_c;return j::call(_callee25342,j::Args{V(1.0),j::unary("-",V(1.0))});})();return V(j::number(_lhs25323)-j::number(_rhs25324));})();V _rhs25322=this->_v_20727_ASPECT.get();return V(j::number(_lhs25321)/j::number(_rhs25322));})();
if(j::truth(([&]()->V{V _lhs25343=([&]()->V{V _lhs25345=([&]()->V{V _number25347=_v_21492_gx;return V(std::fabs(j::number(_number25347)));})();V _rhs25346=([&]()->V{V _number25348=_v_21493_gy;return V(std::fabs(j::number(_number25348)));})();return j::binary("+",_lhs25345,_rhs25346);})();V _rhs25344=V(0.000001);return j::binary("<",_lhs25343,_rhs25344);})())){
(void)((_v_21492_gx=([&]()->V{V _lhs25350=([&]()->V{V _callee25354=_v_21478_isIn.get();return j::call(_callee25354,j::Args{([&]()->V{V _lhs25352=_v_21486_x.get();V _rhs25353=V(1.0);return j::binary("+",_lhs25352,_rhs25353);})(),_v_21487_y.get()});})();V _rhs25351=([&]()->V{V _callee25357=_v_21478_isIn.get();return j::call(_callee25357,j::Args{([&]()->V{V _lhs25355=_v_21486_x.get();V _rhs25356=V(1.0);return V(j::number(_lhs25355)-j::number(_rhs25356));})(),_v_21487_y.get()});})();return V(j::number(_lhs25350)-j::number(_rhs25351));})()));
(void)((_v_21493_gy=([&]()->V{V _lhs25359=([&]()->V{V _lhs25361=([&]()->V{V _callee25365=_v_21478_isIn.get();return j::call(_callee25365,j::Args{_v_21486_x.get(),([&]()->V{V _lhs25363=_v_21487_y.get();V _rhs25364=V(1.0);return j::binary("+",_lhs25363,_rhs25364);})()});})();V _rhs25362=([&]()->V{V _callee25368=_v_21478_isIn.get();return j::call(_callee25368,j::Args{_v_21486_x.get(),([&]()->V{V _lhs25366=_v_21487_y.get();V _rhs25367=V(1.0);return V(j::number(_lhs25366)-j::number(_rhs25367));})()});})();return V(j::number(_lhs25361)-j::number(_rhs25362));})();V _rhs25360=this->_v_20727_ASPECT.get();return V(j::number(_lhs25359)/j::number(_rhs25360));})()));

}

_v_21494_len=([&]()->V{V _logical25369=([&]()->V{V _number25370=_v_21492_gx;V _number25371=_v_21493_gy;return V(std::hypot(j::number(_number25370),j::number(_number25371)));})();return !j::truth(_logical25369)?V(1.0):_logical25369;})();
(void)(([&]()->V{V _base25373=_v_21483_nx;V _key25374=_v_21485_i;V _assign25372=([&]()->V{V _lhs25375=_v_21492_gx;V _rhs25376=_v_21494_len;return V(j::number(_lhs25375)/j::number(_rhs25376));})();return j::put(_base25373,_key25374,_assign25372);})());
(void)(([&]()->V{V _base25378=_v_21484_ny;V _key25379=_v_21485_i;V _assign25377=([&]()->V{V _lhs25380=_v_21493_gy;V _rhs25381=_v_21494_len;return V(j::number(_lhs25380)/j::number(_rhs25381));})();return j::put(_base25378,_key25379,_assign25377);})());

}
}}
_v_21495_depth.get()=([&]()->V{V _callee25382=j::builtin("Float32Array");return j::construct(_callee25382,j::Args{_v_21446_n});})();
_v_21496_D=([&]()->V{V _number25383=V(1.0);V _number25384=this->_v_20727_ASPECT.get();return V(std::hypot(j::number(_number25383),j::number(_number25384)));})();
_v_21497_far.get()=([&]()->V{V _lhs25385=V(4.0);V _rhs25386=([&]()->V{V _lhs25387=_v_21443_cols.get();V _rhs25388=([&]()->V{V _lhs25389=_v_21444_rows.get();V _rhs25390=this->_v_20727_ASPECT.get();return V(j::number(_lhs25389)*j::number(_rhs25390));})();return j::binary("+",_lhs25387,_rhs25388);})();return V(j::number(_lhs25385)*j::number(_rhs25386));})();
{for(const auto &_item25391:j::elements(_v_21462_list.get())){V _v_21498_i;
_v_21498_i=_item25391;
(void)(([&]()->V{V _base25393=_v_21495_depth.get();V _key25394=_v_21498_i;V _assign25392=_v_21497_far.get();return j::put(_base25393,_key25394,_assign25392);})());
}}
_v_21499_d=j::function([=](const j::Args &_args_fn21500,const V &_receiver_fn21500,const V &_self_fn21500) mutable ->V{
V _v_21501_x;
V _v_21502_y;
V _v_21503_w;
_v_21501_x=_args_fn21500[0];
_v_21502_y=_args_fn21500[1];
_v_21503_w=_args_fn21500[2];
return ([&]()->V{V _lhs25395=(j::truth(([&]()->V{V _logical25397=([&]()->V{V _logical25398=([&]()->V{V _logical25399=([&]()->V{V _lhs25400=_v_21501_x;V _rhs25401=V(0.0);return j::binary("<",_lhs25400,_rhs25401);})();return !j::truth(_logical25399)?([&]()->V{V _lhs25402=_v_21501_x;V _rhs25403=_v_21443_cols.get();return j::binary(">=",_lhs25402,_rhs25403);})():_logical25399;})();return !j::truth(_logical25398)?([&]()->V{V _lhs25404=_v_21502_y;V _rhs25405=V(0.0);return j::binary("<",_lhs25404,_rhs25405);})():_logical25398;})();return !j::truth(_logical25397)?([&]()->V{V _lhs25406=_v_21502_y;V _rhs25407=_v_21444_rows.get();return j::binary(">=",_lhs25406,_rhs25407);})():_logical25397;})())?(j::truth(([&]()->V{V _callee25408=_v_21478_isIn.get();return j::call(_callee25408,j::Args{_v_21501_x,_v_21502_y});})())?_v_21497_far.get():V(0.0)):j::get(_v_21495_depth.get(),([&]()->V{V _lhs25409=([&]()->V{V _lhs25411=_v_21502_y;V _rhs25412=_v_21443_cols.get();return V(j::number(_lhs25411)*j::number(_rhs25412));})();V _rhs25410=_v_21501_x;return j::binary("+",_lhs25409,_rhs25410);})()));V _rhs25396=_v_21503_w;return j::binary("+",_lhs25395,_rhs25396);})();
return V{};
},3);
{V _v_21504_y;
_v_21504_y=_v_21464_y0;
for(;j::truth(([&]()->V{V _lhs25413=_v_21504_y;V _rhs25414=_v_21466_y1;return j::binary("<",_lhs25413,_rhs25414);})());(void)(j::increment(_v_21504_y,1,false))){{V _v_21505_x;
_v_21505_x=_v_21463_x0;
for(;j::truth(([&]()->V{V _lhs25415=_v_21505_x;V _rhs25416=_v_21465_x1;return j::binary("<",_lhs25415,_rhs25416);})());(void)(j::increment(_v_21505_x,1,false))){
V _v_21506_i;
_v_21506_i=([&]()->V{V _lhs25417=([&]()->V{V _lhs25419=_v_21504_y;V _rhs25420=_v_21443_cols.get();return V(j::number(_lhs25419)*j::number(_rhs25420));})();V _rhs25418=_v_21505_x;return j::binary("+",_lhs25417,_rhs25418);})();
if(j::truth(j::get(_v_21461_inside,_v_21506_i))){(void)(([&]()->V{V _base25422=_v_21495_depth.get();V _key25423=_v_21506_i;V _assign25421=([&]()->V{V _receiver25445=j::builtin("Math");V _method25446=this->_literals[52];V _method=j::get(_receiver25445,_method25446);j::Args _params25447=j::Args{j::get(_v_21495_depth.get(),_v_21506_i),([&]()->V{V _callee25426=_v_21499_d;return j::call(_callee25426,j::Args{([&]()->V{V _lhs25424=_v_21505_x;V _rhs25425=V(1.0);return V(j::number(_lhs25424)-j::number(_rhs25425));})(),_v_21504_y,V(1.0)});})(),([&]()->V{V _callee25429=_v_21499_d;return j::call(_callee25429,j::Args{_v_21505_x,([&]()->V{V _lhs25427=_v_21504_y;V _rhs25428=V(1.0);return V(j::number(_lhs25427)-j::number(_rhs25428));})(),this->_v_20727_ASPECT.get()});})(),([&]()->V{V _callee25434=_v_21499_d;return j::call(_callee25434,j::Args{([&]()->V{V _lhs25430=_v_21505_x;V _rhs25431=V(1.0);return V(j::number(_lhs25430)-j::number(_rhs25431));})(),([&]()->V{V _lhs25432=_v_21504_y;V _rhs25433=V(1.0);return V(j::number(_lhs25432)-j::number(_rhs25433));})(),_v_21496_D});})(),([&]()->V{V _callee25439=_v_21499_d;return j::call(_callee25439,j::Args{([&]()->V{V _lhs25435=_v_21505_x;V _rhs25436=V(1.0);return j::binary("+",_lhs25435,_rhs25436);})(),([&]()->V{V _lhs25437=_v_21504_y;V _rhs25438=V(1.0);return V(j::number(_lhs25437)-j::number(_rhs25438));})(),_v_21496_D});})()};return j::call(_method,_params25447,_receiver25445);})();return j::put(_base25422,_key25423,_assign25421);})());
}

}
}
}}
{V _v_21507_y;
_v_21507_y=([&]()->V{V _lhs25448=_v_21466_y1;V _rhs25449=V(1.0);return V(j::number(_lhs25448)-j::number(_rhs25449));})();
for(;j::truth(([&]()->V{V _lhs25450=_v_21507_y;V _rhs25451=_v_21464_y0;return j::binary(">=",_lhs25450,_rhs25451);})());(void)(j::increment(_v_21507_y,-1,false))){{V _v_21508_x;
_v_21508_x=([&]()->V{V _lhs25452=_v_21465_x1;V _rhs25453=V(1.0);return V(j::number(_lhs25452)-j::number(_rhs25453));})();
for(;j::truth(([&]()->V{V _lhs25454=_v_21508_x;V _rhs25455=_v_21463_x0;return j::binary(">=",_lhs25454,_rhs25455);})());(void)(j::increment(_v_21508_x,-1,false))){
V _v_21509_i;
_v_21509_i=([&]()->V{V _lhs25456=([&]()->V{V _lhs25458=_v_21507_y;V _rhs25459=_v_21443_cols.get();return V(j::number(_lhs25458)*j::number(_rhs25459));})();V _rhs25457=_v_21508_x;return j::binary("+",_lhs25456,_rhs25457);})();
if(j::truth(j::get(_v_21461_inside,_v_21509_i))){(void)(([&]()->V{V _base25461=_v_21495_depth.get();V _key25462=_v_21509_i;V _assign25460=([&]()->V{V _receiver25484=j::builtin("Math");V _method25485=this->_literals[52];V _method=j::get(_receiver25484,_method25485);j::Args _params25486=j::Args{j::get(_v_21495_depth.get(),_v_21509_i),([&]()->V{V _callee25465=_v_21499_d;return j::call(_callee25465,j::Args{([&]()->V{V _lhs25463=_v_21508_x;V _rhs25464=V(1.0);return j::binary("+",_lhs25463,_rhs25464);})(),_v_21507_y,V(1.0)});})(),([&]()->V{V _callee25468=_v_21499_d;return j::call(_callee25468,j::Args{_v_21508_x,([&]()->V{V _lhs25466=_v_21507_y;V _rhs25467=V(1.0);return j::binary("+",_lhs25466,_rhs25467);})(),this->_v_20727_ASPECT.get()});})(),([&]()->V{V _callee25473=_v_21499_d;return j::call(_callee25473,j::Args{([&]()->V{V _lhs25469=_v_21508_x;V _rhs25470=V(1.0);return j::binary("+",_lhs25469,_rhs25470);})(),([&]()->V{V _lhs25471=_v_21507_y;V _rhs25472=V(1.0);return j::binary("+",_lhs25471,_rhs25472);})(),_v_21496_D});})(),([&]()->V{V _callee25478=_v_21499_d;return j::call(_callee25478,j::Args{([&]()->V{V _lhs25474=_v_21508_x;V _rhs25475=V(1.0);return V(j::number(_lhs25474)-j::number(_rhs25475));})(),([&]()->V{V _lhs25476=_v_21507_y;V _rhs25477=V(1.0);return j::binary("+",_lhs25476,_rhs25477);})(),_v_21496_D});})()};return j::call(_method,_params25486,_receiver25484);})();return j::put(_base25461,_key25462,_assign25460);})());
}

}
}
}}
_v_21510_maxDepth=V(0.0);
{for(const auto &_item25487:j::elements(_v_21462_list.get())){V _v_21511_i;
_v_21511_i=_item25487;
{
(void)(([&]()->V{V _base25489=_v_21495_depth.get();V _key25490=_v_21511_i;V _assign25488=(j::truth(j::get(_v_21482_border.get(),_v_21511_i))?V(0.0):([&]()->V{V _receiver25500=j::builtin("Math");V _method25501=this->_literals[51];V _method=j::get(_receiver25500,_method25501);j::Args _params25502=j::Args{V(0.0),([&]()->V{V _lhs25491=([&]()->V{V _receiver25495=j::builtin("Math");V _method25496=this->_literals[52];V _method=j::get(_receiver25495,_method25496);j::Args _params25497=j::Args{j::get(_v_21495_depth.get(),_v_21511_i),_v_21497_far.get()};return j::call(_method,_params25497,_receiver25495);})();V _rhs25492=V(1.0);return V(j::number(_lhs25491)-j::number(_rhs25492));})()};return j::call(_method,_params25502,_receiver25500);})());return j::put(_base25489,_key25490,_assign25488);})());
if(j::truth(([&]()->V{V _lhs25503=j::get(_v_21495_depth.get(),_v_21511_i);V _rhs25504=([&]()->V{V _lhs25505=_v_21497_far.get();V _rhs25506=V(2.0);return V(j::number(_lhs25505)-j::number(_rhs25506));})();return j::binary(">=",_lhs25503,_rhs25504);})())){(void)(([&]()->V{V _base25508=_v_21495_depth.get();V _key25509=_v_21511_i;V _assign25507=([&]()->V{V _lhs25510=_v_21443_cols.get();V _rhs25511=([&]()->V{V _lhs25512=_v_21444_rows.get();V _rhs25513=this->_v_20727_ASPECT.get();return V(j::number(_lhs25512)*j::number(_rhs25513));})();return j::binary("+",_lhs25510,_rhs25511);})();return j::put(_base25508,_key25509,_assign25507);})());
}
if(j::truth(([&]()->V{V _lhs25514=j::get(_v_21495_depth.get(),_v_21511_i);V _rhs25515=_v_21510_maxDepth;return j::binary(">",_lhs25514,_rhs25515);})())){(void)((_v_21510_maxDepth=j::get(_v_21495_depth.get(),_v_21511_i)));
}

}
}}
_v_21512_fringe.get()=([&]()->V{j::Args _array25517;return j::array(std::move(_array25517));})();
{V _v_21513_y;
_v_21513_y=([&]()->V{V _receiver25522=j::builtin("Math");V _method25523=this->_literals[51];V _method=j::get(_receiver25522,_method25523);j::Args _params25524=j::Args{V(0.0),([&]()->V{V _lhs25518=_v_21464_y0;V _rhs25519=V(1.0);return V(j::number(_lhs25518)-j::number(_rhs25519));})()};return j::call(_method,_params25524,_receiver25522);})();
for(;j::truth(([&]()->V{V _lhs25525=_v_21513_y;V _rhs25526=([&]()->V{V _receiver25531=j::builtin("Math");V _method25532=this->_literals[52];V _method=j::get(_receiver25531,_method25532);j::Args _params25533=j::Args{_v_21444_rows.get(),([&]()->V{V _lhs25527=_v_21466_y1;V _rhs25528=V(1.0);return j::binary("+",_lhs25527,_rhs25528);})()};return j::call(_method,_params25533,_receiver25531);})();return j::binary("<",_lhs25525,_rhs25526);})());(void)(j::increment(_v_21513_y,1,false))){{V _v_21514_x;
_v_21514_x=([&]()->V{V _receiver25538=j::builtin("Math");V _method25539=this->_literals[51];V _method=j::get(_receiver25538,_method25539);j::Args _params25540=j::Args{V(0.0),([&]()->V{V _lhs25534=_v_21463_x0;V _rhs25535=V(1.0);return V(j::number(_lhs25534)-j::number(_rhs25535));})()};return j::call(_method,_params25540,_receiver25538);})();
for(;j::truth(([&]()->V{V _lhs25541=_v_21514_x;V _rhs25542=([&]()->V{V _receiver25547=j::builtin("Math");V _method25548=this->_literals[52];V _method=j::get(_receiver25547,_method25548);j::Args _params25549=j::Args{_v_21443_cols.get(),([&]()->V{V _lhs25543=_v_21465_x1;V _rhs25544=V(1.0);return j::binary("+",_lhs25543,_rhs25544);})()};return j::call(_method,_params25549,_receiver25547);})();return j::binary("<",_lhs25541,_rhs25542);})());(void)(j::increment(_v_21514_x,1,false))){
V _v_21515_i;
V _v_21516_gx;
V _v_21517_gy;
_v_21515_i=([&]()->V{V _lhs25550=([&]()->V{V _lhs25552=_v_21513_y;V _rhs25553=_v_21443_cols.get();return V(j::number(_lhs25552)*j::number(_rhs25553));})();V _rhs25551=_v_21514_x;return j::binary("+",_lhs25550,_rhs25551);})();
if(j::truth(([&]()->V{V _logical25554=([&]()->V{V _logical25555=([&]()->V{V _logical25556=j::get(_v_21461_inside,_v_21515_i);return !j::truth(_logical25556)?([&]()->V{V _lhs25557=j::get(_v_21447_cover,_v_21515_i);V _rhs25558=V(0.12);return j::binary("<",_lhs25557,_rhs25558);})():_logical25556;})();return !j::truth(_logical25555)?([&]()->V{V _lhs25559=([&]()->V{V _callee25563=_v_21478_isIn.get();return j::call(_callee25563,j::Args{_v_21514_x,([&]()->V{V _lhs25561=_v_21513_y;V _rhs25562=V(1.0);return j::binary("+",_lhs25561,_rhs25562);})()});})();V _rhs25560=([&]()->V{V _callee25566=_v_21478_isIn.get();return j::call(_callee25566,j::Args{_v_21514_x,([&]()->V{V _lhs25564=_v_21513_y;V _rhs25565=V(1.0);return V(j::number(_lhs25564)-j::number(_rhs25565));})()});})();return V(j::equal(_lhs25559,_rhs25560,true));})():_logical25555;})();return !j::truth(_logical25554)?([&]()->V{V _lhs25567=([&]()->V{V _number25577=([&]()->V{V _lhs25578=([&]()->V{V _callee25582=_v_21474_cv.get();return j::call(_callee25582,j::Args{([&]()->V{V _lhs25580=_v_21514_x;V _rhs25581=V(1.0);return V(j::number(_lhs25580)-j::number(_rhs25581));})(),_v_21513_y});})();V _rhs25579=([&]()->V{V _callee25585=_v_21474_cv.get();return j::call(_callee25585,j::Args{([&]()->V{V _lhs25583=_v_21514_x;V _rhs25584=V(1.0);return j::binary("+",_lhs25583,_rhs25584);})(),_v_21513_y});})();return V(j::number(_lhs25578)-j::number(_rhs25579));})();return V(std::fabs(j::number(_number25577)));})();V _rhs25568=V(0.08);return j::binary("<",_lhs25567,_rhs25568);})():_logical25554;})())){continue;
}
_v_21516_gx=([&]()->V{V _lhs25586=([&]()->V{V _lhs25588=([&]()->V{V _lhs25590=([&]()->V{V _lhs25592=([&]()->V{V _lhs25594=([&]()->V{V _callee25600=_v_21474_cv.get();return j::call(_callee25600,j::Args{([&]()->V{V _lhs25596=_v_21514_x;V _rhs25597=V(1.0);return j::binary("+",_lhs25596,_rhs25597);})(),([&]()->V{V _lhs25598=_v_21513_y;V _rhs25599=V(1.0);return V(j::number(_lhs25598)-j::number(_rhs25599));})()});})();V _rhs25595=([&]()->V{V _lhs25601=V(2.0);V _rhs25602=([&]()->V{V _callee25605=_v_21474_cv.get();return j::call(_callee25605,j::Args{([&]()->V{V _lhs25603=_v_21514_x;V _rhs25604=V(1.0);return j::binary("+",_lhs25603,_rhs25604);})(),_v_21513_y});})();return V(j::number(_lhs25601)*j::number(_rhs25602));})();return j::binary("+",_lhs25594,_rhs25595);})();V _rhs25593=([&]()->V{V _callee25610=_v_21474_cv.get();return j::call(_callee25610,j::Args{([&]()->V{V _lhs25606=_v_21514_x;V _rhs25607=V(1.0);return j::binary("+",_lhs25606,_rhs25607);})(),([&]()->V{V _lhs25608=_v_21513_y;V _rhs25609=V(1.0);return j::binary("+",_lhs25608,_rhs25609);})()});})();return j::binary("+",_lhs25592,_rhs25593);})();V _rhs25591=([&]()->V{V _callee25615=_v_21474_cv.get();return j::call(_callee25615,j::Args{([&]()->V{V _lhs25611=_v_21514_x;V _rhs25612=V(1.0);return V(j::number(_lhs25611)-j::number(_rhs25612));})(),([&]()->V{V _lhs25613=_v_21513_y;V _rhs25614=V(1.0);return V(j::number(_lhs25613)-j::number(_rhs25614));})()});})();return V(j::number(_lhs25590)-j::number(_rhs25591));})();V _rhs25589=([&]()->V{V _lhs25616=V(2.0);V _rhs25617=([&]()->V{V _callee25620=_v_21474_cv.get();return j::call(_callee25620,j::Args{([&]()->V{V _lhs25618=_v_21514_x;V _rhs25619=V(1.0);return V(j::number(_lhs25618)-j::number(_rhs25619));})(),_v_21513_y});})();return V(j::number(_lhs25616)*j::number(_rhs25617));})();return V(j::number(_lhs25588)-j::number(_rhs25589));})();V _rhs25587=([&]()->V{V _callee25625=_v_21474_cv.get();return j::call(_callee25625,j::Args{([&]()->V{V _lhs25621=_v_21514_x;V _rhs25622=V(1.0);return V(j::number(_lhs25621)-j::number(_rhs25622));})(),([&]()->V{V _lhs25623=_v_21513_y;V _rhs25624=V(1.0);return j::binary("+",_lhs25623,_rhs25624);})()});})();return V(j::number(_lhs25586)-j::number(_rhs25587));})();
_v_21517_gy=([&]()->V{V _lhs25626=([&]()->V{V _lhs25628=([&]()->V{V _lhs25630=([&]()->V{V _lhs25632=([&]()->V{V _lhs25634=([&]()->V{V _callee25640=_v_21474_cv.get();return j::call(_callee25640,j::Args{([&]()->V{V _lhs25636=_v_21514_x;V _rhs25637=V(1.0);return V(j::number(_lhs25636)-j::number(_rhs25637));})(),([&]()->V{V _lhs25638=_v_21513_y;V _rhs25639=V(1.0);return j::binary("+",_lhs25638,_rhs25639);})()});})();V _rhs25635=([&]()->V{V _lhs25641=V(2.0);V _rhs25642=([&]()->V{V _callee25645=_v_21474_cv.get();return j::call(_callee25645,j::Args{_v_21514_x,([&]()->V{V _lhs25643=_v_21513_y;V _rhs25644=V(1.0);return j::binary("+",_lhs25643,_rhs25644);})()});})();return V(j::number(_lhs25641)*j::number(_rhs25642));})();return j::binary("+",_lhs25634,_rhs25635);})();V _rhs25633=([&]()->V{V _callee25650=_v_21474_cv.get();return j::call(_callee25650,j::Args{([&]()->V{V _lhs25646=_v_21514_x;V _rhs25647=V(1.0);return j::binary("+",_lhs25646,_rhs25647);})(),([&]()->V{V _lhs25648=_v_21513_y;V _rhs25649=V(1.0);return j::binary("+",_lhs25648,_rhs25649);})()});})();return j::binary("+",_lhs25632,_rhs25633);})();V _rhs25631=([&]()->V{V _callee25655=_v_21474_cv.get();return j::call(_callee25655,j::Args{([&]()->V{V _lhs25651=_v_21514_x;V _rhs25652=V(1.0);return V(j::number(_lhs25651)-j::number(_rhs25652));})(),([&]()->V{V _lhs25653=_v_21513_y;V _rhs25654=V(1.0);return V(j::number(_lhs25653)-j::number(_rhs25654));})()});})();return V(j::number(_lhs25630)-j::number(_rhs25631));})();V _rhs25629=([&]()->V{V _lhs25656=V(2.0);V _rhs25657=([&]()->V{V _callee25660=_v_21474_cv.get();return j::call(_callee25660,j::Args{_v_21514_x,([&]()->V{V _lhs25658=_v_21513_y;V _rhs25659=V(1.0);return V(j::number(_lhs25658)-j::number(_rhs25659));})()});})();return V(j::number(_lhs25656)*j::number(_rhs25657));})();return V(j::number(_lhs25628)-j::number(_rhs25629));})();V _rhs25627=([&]()->V{V _callee25665=_v_21474_cv.get();return j::call(_callee25665,j::Args{([&]()->V{V _lhs25661=_v_21514_x;V _rhs25662=V(1.0);return j::binary("+",_lhs25661,_rhs25662);})(),([&]()->V{V _lhs25663=_v_21513_y;V _rhs25664=V(1.0);return V(j::number(_lhs25663)-j::number(_rhs25664));})()});})();return V(j::number(_lhs25626)-j::number(_rhs25627));})();
if(j::truth(([&]()->V{V _lhs25666=([&]()->V{V _lhs25668=([&]()->V{V _number25670=_v_21517_gy;return V(std::fabs(j::number(_number25670)));})();V _rhs25669=this->_v_20727_ASPECT.get();return V(j::number(_lhs25668)/j::number(_rhs25669));})();V _rhs25667=([&]()->V{V _number25671=_v_21516_gx;return V(std::fabs(j::number(_number25671)));})();return j::binary(">",_lhs25666,_rhs25667);})())){(void)(([&]()->V{V _receiver25672=_v_21512_fringe.get();V _method25673=this->_literals[149];V _method=j::get(_receiver25672,_method25673);j::Args _params25674=j::Args{_v_21515_i};return j::call(_method,_params25674,_receiver25672);})());
}

}
}
}}
_v_21518_isFringe=([&]()->V{V _callee25675=j::builtin("Uint8Array");return j::construct(_callee25675,j::Args{_v_21446_n});})();
{for(const auto &_item25676:j::elements(_v_21512_fringe.get())){V _v_21519_i;
_v_21519_i=_item25676;
(void)(([&]()->V{V _base25678=_v_21518_isFringe;V _key25679=_v_21519_i;V _assign25677=V(1.0);return j::put(_base25678,_key25679,_assign25677);})());
}}
_v_21520_outlines.get()=([&]()->V{V _callee25680=j::builtin("Map");return j::construct(_callee25680,j::Args{});})();
_v_21521_cells.get()=([&]()->V{V _obj25681=j::object();j::put(_obj25681,this->_literals[46],_v_21443_cols.get());j::put(_obj25681,this->_literals[48],_v_21444_rows.get());j::put(_obj25681,this->_literals[150],([&]()->V{V _receiver25682=j::builtin("Int32Array");V _method25683=this->_literals[124];V _method=j::get(_receiver25682,_method25683);j::Args _params25684=j::Args{_v_21462_list.get()};return j::call(_method,_params25684,_receiver25682);})());j::put(_obj25681,this->_literals[71],_v_21461_inside);j::put(_obj25681,this->_literals[151],_v_21447_cover);j::put(_obj25681,this->_literals[152],_v_21482_border.get());j::put(_obj25681,this->_literals[153],_v_21518_isFringe);j::put(_obj25681,this->_literals[154],j::function([=](const j::Args &_args_fn21522,const V &_receiver_fn21522,const V &_self_fn21522) mutable ->V{
V _v_21523_x;
V _v_21524_y;
_v_21523_x=_args_fn21522[0];
_v_21524_y=_args_fn21522[1];
return ([&]()->V{V _logical25685=([&]()->V{V _logical25686=([&]()->V{V _logical25687=([&]()->V{V _logical25688=([&]()->V{V _lhs25689=_v_21523_x;V _rhs25690=j::unary("-",V(1.0));return j::binary(">=",_lhs25689,_rhs25690);})();return j::truth(_logical25688)?([&]()->V{V _lhs25691=_v_21523_x;V _rhs25692=_v_21443_cols.get();return j::binary("<=",_lhs25691,_rhs25692);})():_logical25688;})();return j::truth(_logical25687)?([&]()->V{V _lhs25693=_v_21524_y;V _rhs25694=j::unary("-",V(1.0));return j::binary(">=",_lhs25693,_rhs25694);})():_logical25687;})();return j::truth(_logical25686)?([&]()->V{V _lhs25695=_v_21524_y;V _rhs25696=_v_21444_rows.get();return j::binary("<=",_lhs25695,_rhs25696);})():_logical25686;})();return j::truth(_logical25685)?([&]()->V{V _lhs25697=([&]()->V{V _callee25699=_v_21478_isIn.get();return j::call(_callee25699,j::Args{_v_21523_x,_v_21524_y});})();V _rhs25698=V(1.0);return V(j::equal(_lhs25697,_rhs25698,true));})():_logical25685;})();
return V{};
},2));j::put(_obj25681,this->_literals[155],j::function([=](const j::Args &_args_fn21525,const V &_receiver_fn21525,const V &_self_fn21525) mutable ->V{
j::Cell _v_21526_style;
V _default25700=_args_fn21525[0];if(_default25700.kind==V::Undefined||_default25700.kind==V::Hole)_default25700=this->_literals[156];
_v_21526_style.get()=_default25700;
{
V _v_21527_o;
_v_21527_o=([&]()->V{V _receiver25701=_v_21520_outlines.get();V _method25702=this->_literals[157];V _method=j::get(_receiver25701,_method25702);j::Args _params25703=j::Args{_v_21526_style.get()};return j::call(_method,_params25703,_receiver25701);})();
if(j::truth(j::unary("!",_v_21527_o))){
V _v_21528_at;
_v_21528_at=([&]()->V{j::Args _array25704;for(const auto &_value:j::elements(([&]()->V{V _receiver25705=_v_21462_list.get();V _method25706=this->_literals[158];V _method=j::get(_receiver25705,_method25706);j::Args _params25707=j::Args{j::function([=](const j::Args &_args_fn21529,const V &_receiver_fn21529,const V &_self_fn21529) mutable ->V{
V _v_21530_i;
_v_21530_i=_args_fn21529[0];
return j::get(_v_21482_border.get(),_v_21530_i);
return V{};
},1)};return j::call(_method,_params25707,_receiver25705);})()))_array25704.push_back(_value);for(const auto &_value:j::elements(_v_21512_fringe.get()))_array25704.push_back(_value);return j::array(std::move(_array25704));})();
(void)((_v_21527_o=([&]()->V{V _obj25709=j::object();j::put(_obj25709,this->_literals[159],([&]()->V{V _receiver25710=j::builtin("Int32Array");V _method25711=this->_literals[124];V _method=j::get(_receiver25710,_method25711);j::Args _params25712=j::Args{_v_21528_at};return j::call(_method,_params25712,_receiver25710);})());j::put(_obj25709,this->_literals[160],([&]()->V{V _receiver25718=j::builtin("Uint16Array");V _method25719=this->_literals[124];V _method=j::get(_receiver25718,_method25719);j::Args _params25720=j::Args{_v_21528_at,j::function([=](const j::Args &_args_fn21531,const V &_receiver_fn21531,const V &_self_fn21531) mutable ->V{
V _v_21532_i;
_v_21532_i=_args_fn21531[0];
return ([&]()->V{V _receiver25713=(j::truth(j::get(_v_21482_border.get(),_v_21532_i))?([&]()->V{V _callee25716=this->_v_21540_edgeChar.get();return j::call(_callee25716,j::Args{_v_21521_cells.get(),_v_21532_i,_v_21526_style.get()});})():([&]()->V{V _callee25717=this->_v_21533_fringeChar.get();return j::call(_callee25717,j::Args{_v_21521_cells.get(),_v_21532_i});})());V _method25714=this->_literals[161];V _method=j::get(_receiver25713,_method25714);j::Args _params25715=j::Args{V(0.0)};return j::call(_method,_params25715,_receiver25713);})();
return V{};
},1)};return j::call(_method,_params25720,_receiver25718);})());return _obj25709;})()));
(void)(([&]()->V{V _receiver25721=_v_21520_outlines.get();V _method25722=this->_literals[162];V _method=j::get(_receiver25721,_method25722);j::Args _params25723=j::Args{_v_21526_style.get(),_v_21527_o};return j::call(_method,_params25723,_receiver25721);})());

}

return _v_21527_o;

}

return V{};
},0));j::put(_obj25681,this->_literals[163],_v_21483_nx);j::put(_obj25681,this->_literals[164],_v_21484_ny);j::put(_obj25681,this->_literals[165],_v_21495_depth.get());j::put(_obj25681,this->_literals[166],_v_21510_maxDepth);j::put(_obj25681,this->_literals[30],(j::truth(([&]()->V{V _lhs25724=_v_21465_x1;V _rhs25725=_v_21463_x0;return j::binary(">",_lhs25724,_rhs25725);})())?_v_21463_x0:V(0.0)));j::put(_obj25681,this->_literals[35],(j::truth(([&]()->V{V _lhs25726=_v_21466_y1;V _rhs25727=_v_21464_y0;return j::binary(">",_lhs25726,_rhs25727);})())?_v_21464_y0:V(0.0)));j::put(_obj25681,this->_literals[32],(j::truth(([&]()->V{V _lhs25728=_v_21465_x1;V _rhs25729=_v_21463_x0;return j::binary(">",_lhs25728,_rhs25729);})())?_v_21465_x1:V(0.0)));j::put(_obj25681,this->_literals[37],(j::truth(([&]()->V{V _lhs25730=_v_21466_y1;V _rhs25731=_v_21464_y0;return j::binary(">",_lhs25730,_rhs25731);})())?_v_21466_y1:V(0.0)));j::put(_obj25681,this->_literals[33],_v_21467_top);j::put(_obj25681,this->_literals[36],_v_21468_bottom);j::put(_obj25681,this->_literals[28],_v_21469_left);j::put(_obj25681,this->_literals[31],_v_21470_right);j::put(_obj25681,this->_literals[78],([&]()->V{V _logical25732=j::get(_v_21445_p,this->_literals[78]);return j::nullish(_logical25732)?V::null():_logical25732;})());j::put(_obj25681,this->_literals[69],(j::truth(j::get(_v_21445_p,this->_literals[69]))?([&]()->V{V _callee25733=_self_fn21441;return j::call(_callee25733,j::Args{j::get(_v_21445_p,this->_literals[69]),_v_21443_cols.get(),_v_21444_rows.get()});})():V::null()));j::put(_obj25681,this->_literals[59],(j::truth(j::get(_v_21445_p,this->_literals[59]))?([&]()->V{V _callee25734=_self_fn21441;return j::call(_callee25734,j::Args{j::get(_v_21445_p,this->_literals[59]),_v_21443_cols.get(),_v_21444_rows.get()});})():V::null()));j::put(_obj25681,this->_literals[58],j::unary("!",j::unary("!",j::get(_v_21445_p,this->_literals[58]))));j::put(_obj25681,this->_literals[116],([&]()->V{V _logical25735=j::get(_v_21445_p,this->_literals[116]);return j::nullish(_logical25735)?V::null():_logical25735;})());j::put(_obj25681,this->_literals[167],_v_21445_p);return _obj25681;})();
return _v_21521_cells.get();

}

return V{};
},3);
this->_v_21533_fringeChar.get()=j::function([=](const j::Args &_args_fn21534,const V &_receiver_fn21534,const V &_self_fn21534) mutable ->V{
V _v_21535_c;
V _v_21536_i;
_v_21535_c=_args_fn21534[0];
_v_21536_i=_args_fn21534[1];
{
V _v_21537_x;
V _v_21538_y;
V _v_21539_k;
_v_21537_x=([&]()->V{V _lhs25736=_v_21536_i;V _rhs25737=j::get(_v_21535_c,this->_literals[46]);return V(std::fmod(j::number(_lhs25736),j::number(_rhs25737)));})();
_v_21538_y=([&]()->V{V _lhs25738=([&]()->V{V _lhs25740=_v_21536_i;V _rhs25741=_v_21537_x;return V(j::number(_lhs25740)-j::number(_rhs25741));})();V _rhs25739=j::get(_v_21535_c,this->_literals[46]);return V(j::number(_lhs25738)/j::number(_rhs25739));})();
_v_21539_k=j::get(j::get(_v_21535_c,this->_literals[151]),_v_21536_i);
return (j::truth(([&]()->V{V _receiver25744=_v_21535_c;V _method25745=this->_literals[154];V _method=j::get(_receiver25744,_method25745);j::Args _params25746=j::Args{_v_21537_x,([&]()->V{V _lhs25742=_v_21538_y;V _rhs25743=V(1.0);return j::binary("+",_lhs25742,_rhs25743);})()};return j::call(_method,_params25746,_receiver25744);})())?(j::truth(([&]()->V{V _lhs25747=_v_21539_k;V _rhs25748=V(0.3);return j::binary("<",_lhs25747,_rhs25748);})())?this->_literals[168]:this->_literals[169]):(j::truth(([&]()->V{V _lhs25749=_v_21539_k;V _rhs25750=V(0.3);return j::binary("<",_lhs25749,_rhs25750);})())?this->_literals[170]:this->_literals[171]));

}

return V{};
},2);
this->_v_21540_edgeChar.get()=j::function([=](const j::Args &_args_fn21541,const V &_receiver_fn21541,const V &_self_fn21541) mutable ->V{
j::Cell _v_21542_c;
V _v_21543_i;
V _v_21544_style;
_v_21542_c.get()=_args_fn21541[0];
_v_21543_i=_args_fn21541[1];
V _default25751=_args_fn21541[2];if(_default25751.kind==V::Undefined||_default25751.kind==V::Hole)_default25751=this->_literals[156];
_v_21544_style=_default25751;
{
j::Cell _v_21545_cols;
j::Cell _v_21546_x;
V _v_21547_y;
j::Cell _v_21548_has;
V _v_21549_L;
V _v_21550_R;
V _v_21551_U;
V _v_21552_D;
V _v_21553_left;
V _v_21554_right;
V _v_21555_n;
V _v_21556_fringeAt;
V _pattern25752=_v_21542_c.get();
_v_21545_cols.get()=j::get(_pattern25752,this->_literals[46]);
_v_21546_x.get()=([&]()->V{V _lhs25753=_v_21543_i;V _rhs25754=_v_21545_cols.get();return V(std::fmod(j::number(_lhs25753),j::number(_rhs25754)));})();
_v_21547_y=([&]()->V{V _lhs25755=([&]()->V{V _lhs25757=_v_21543_i;V _rhs25758=_v_21546_x.get();return V(j::number(_lhs25757)-j::number(_rhs25758));})();V _rhs25756=_v_21545_cols.get();return V(j::number(_lhs25755)/j::number(_rhs25756));})();
_v_21548_has.get()=j::get(_v_21542_c.get(),this->_literals[154]);
_v_21549_L=j::unary("!",([&]()->V{V _callee25761=_v_21548_has.get();return j::call(_callee25761,j::Args{([&]()->V{V _lhs25759=_v_21546_x.get();V _rhs25760=V(1.0);return V(j::number(_lhs25759)-j::number(_rhs25760));})(),_v_21547_y});})());
_v_21550_R=j::unary("!",([&]()->V{V _callee25764=_v_21548_has.get();return j::call(_callee25764,j::Args{([&]()->V{V _lhs25762=_v_21546_x.get();V _rhs25763=V(1.0);return j::binary("+",_lhs25762,_rhs25763);})(),_v_21547_y});})());
_v_21551_U=j::unary("!",([&]()->V{V _callee25767=_v_21548_has.get();return j::call(_callee25767,j::Args{_v_21546_x.get(),([&]()->V{V _lhs25765=_v_21547_y;V _rhs25766=V(1.0);return V(j::number(_lhs25765)-j::number(_rhs25766));})()});})());
_v_21552_D=j::unary("!",([&]()->V{V _callee25770=_v_21548_has.get();return j::call(_callee25770,j::Args{_v_21546_x.get(),([&]()->V{V _lhs25768=_v_21547_y;V _rhs25769=V(1.0);return j::binary("+",_lhs25768,_rhs25769);})()});})());
_v_21553_left=(j::truth(([&]()->V{V _lhs25771=_v_21544_style;V _rhs25772=this->_literals[172];return V(j::equal(_lhs25771,_rhs25772,true));})())?this->_literals[173]:this->_literals[97]);
_v_21554_right=(j::truth(([&]()->V{V _lhs25773=_v_21544_style;V _rhs25774=this->_literals[172];return V(j::equal(_lhs25773,_rhs25774,true));})())?this->_literals[174]:this->_literals[97]);
_v_21555_n=([&]()->V{V _lhs25775=([&]()->V{V _lhs25777=([&]()->V{V _lhs25779=j::unary("+",_v_21549_L);V _rhs25780=j::unary("+",_v_21550_R);return j::binary("+",_lhs25779,_rhs25780);})();V _rhs25778=j::unary("+",_v_21551_U);return j::binary("+",_lhs25777,_rhs25778);})();V _rhs25776=j::unary("+",_v_21552_D);return j::binary("+",_lhs25775,_rhs25776);})();
_v_21556_fringeAt=j::function([=](const j::Args &_args_fn21557,const V &_receiver_fn21557,const V &_self_fn21557) mutable ->V{
V _v_21558_yy;
_v_21558_yy=_args_fn21557[0];
return ([&]()->V{V _logical25781=([&]()->V{V _logical25782=([&]()->V{V _lhs25783=_v_21558_yy;V _rhs25784=V(0.0);return j::binary(">=",_lhs25783,_rhs25784);})();return j::truth(_logical25782)?([&]()->V{V _lhs25785=_v_21558_yy;V _rhs25786=j::get(_v_21542_c.get(),this->_literals[48]);return j::binary("<",_lhs25785,_rhs25786);})():_logical25782;})();return j::truth(_logical25781)?([&]()->V{V _lhs25787=j::get(j::get(_v_21542_c.get(),this->_literals[153]),([&]()->V{V _lhs25789=([&]()->V{V _lhs25791=_v_21558_yy;V _rhs25792=_v_21545_cols.get();return V(j::number(_lhs25791)*j::number(_rhs25792));})();V _rhs25790=_v_21546_x.get();return j::binary("+",_lhs25789,_rhs25790);})());V _rhs25788=V(1.0);return V(j::equal(_lhs25787,_rhs25788,true));})():_logical25781;})();
return V{};
},1);
if(j::truth(([&]()->V{V _lhs25793=_v_21555_n;V _rhs25794=V(1.0);return V(j::equal(_lhs25793,_rhs25794,true));})())){
j::Cell _v_21559_d;
V _v_21560_out;
if(j::truth(_v_21551_U)){return (j::truth(([&]()->V{V _callee25797=_v_21556_fringeAt;return j::call(_callee25797,j::Args{([&]()->V{V _lhs25795=_v_21547_y;V _rhs25796=V(1.0);return V(j::number(_lhs25795)-j::number(_rhs25796));})()});})())?this->_literals[134]:this->_literals[171]);
}
if(j::truth(_v_21552_D)){return (j::truth(([&]()->V{V _callee25800=_v_21556_fringeAt;return j::call(_callee25800,j::Args{([&]()->V{V _lhs25798=_v_21547_y;V _rhs25799=V(1.0);return j::binary("+",_lhs25798,_rhs25799);})()});})())?this->_literals[134]:this->_literals[168]);
}
_v_21559_d.get()=(j::truth(_v_21549_L)?V(1.0):j::unary("-",V(1.0)));
_v_21560_out=j::function([=](const j::Args &_args_fn21561,const V &_receiver_fn21561,const V &_self_fn21561) mutable ->V{
V _v_21562_yy;
_v_21562_yy=_args_fn21561[0];
return ([&]()->V{V _logical25801=j::unary("!",([&]()->V{V _callee25802=_v_21548_has.get();return j::call(_callee25802,j::Args{_v_21546_x.get(),_v_21562_yy});})());return j::truth(_logical25801)?([&]()->V{V _callee25805=_v_21548_has.get();return j::call(_callee25805,j::Args{([&]()->V{V _lhs25803=_v_21546_x.get();V _rhs25804=_v_21559_d.get();return j::binary("+",_lhs25803,_rhs25804);})(),_v_21562_yy});})():_logical25801;})();
return V{};
},1);
if(j::truth(([&]()->V{V _logical25806=([&]()->V{V _logical25807=([&]()->V{V _lhs25808=_v_21544_style;V _rhs25809=this->_literals[156];return V(j::equal(_lhs25808,_rhs25809,true));})();return j::truth(_logical25807)?([&]()->V{V _callee25812=_v_21560_out;return j::call(_callee25812,j::Args{([&]()->V{V _lhs25810=_v_21547_y;V _rhs25811=V(1.0);return j::binary("+",_lhs25810,_rhs25811);})()});})():_logical25807;})();return j::truth(_logical25806)?j::unary("!",([&]()->V{V _callee25815=_v_21560_out;return j::call(_callee25815,j::Args{([&]()->V{V _lhs25813=_v_21547_y;V _rhs25814=V(1.0);return V(j::number(_lhs25813)-j::number(_rhs25814));})()});})()):_logical25806;})())){return (j::truth(([&]()->V{V _lhs25816=_v_21559_d.get();V _rhs25817=V(0.0);return j::binary(">",_lhs25816,_rhs25817);})())?this->_literals[96]:this->_literals[95]);
}
if(j::truth(([&]()->V{V _logical25818=([&]()->V{V _logical25819=([&]()->V{V _lhs25820=_v_21544_style;V _rhs25821=this->_literals[156];return V(j::equal(_lhs25820,_rhs25821,true));})();return j::truth(_logical25819)?([&]()->V{V _callee25824=_v_21560_out;return j::call(_callee25824,j::Args{([&]()->V{V _lhs25822=_v_21547_y;V _rhs25823=V(1.0);return V(j::number(_lhs25822)-j::number(_rhs25823));})()});})():_logical25819;})();return j::truth(_logical25818)?j::unary("!",([&]()->V{V _callee25827=_v_21560_out;return j::call(_callee25827,j::Args{([&]()->V{V _lhs25825=_v_21547_y;V _rhs25826=V(1.0);return j::binary("+",_lhs25825,_rhs25826);})()});})()):_logical25818;})())){return (j::truth(([&]()->V{V _lhs25828=_v_21559_d.get();V _rhs25829=V(0.0);return j::binary(">",_lhs25828,_rhs25829);})())?this->_literals[95]:this->_literals[96]);
}
return (j::truth(([&]()->V{V _lhs25830=_v_21559_d.get();V _rhs25831=V(0.0);return j::binary(">",_lhs25830,_rhs25831);})())?_v_21553_left:_v_21554_right);

}

if(j::truth(([&]()->V{V _lhs25832=_v_21555_n;V _rhs25833=V(2.0);return V(j::equal(_lhs25832,_rhs25833,true));})())){
V _v_21563_h;
V _v_21564_v;
V _v_21565_slope;
V _v_21566_square;
if(j::truth(([&]()->V{V _logical25834=_v_21549_L;return j::truth(_logical25834)?_v_21550_R:_logical25834;})())){return this->_literals[97];
}
if(j::truth(([&]()->V{V _logical25835=_v_21551_U;return j::truth(_logical25835)?_v_21552_D:_logical25835;})())){return this->_literals[171];
}
_v_21563_h=(j::truth(_v_21549_L)?V(1.0):j::unary("-",V(1.0)));
_v_21564_v=(j::truth(_v_21551_U)?V(1.0):j::unary("-",V(1.0)));
_v_21565_slope=(j::truth(([&]()->V{V _lhs25836=_v_21544_style;V _rhs25837=this->_literals[172];return V(j::equal(_lhs25836,_rhs25837,true));})())?(j::truth(([&]()->V{V _lhs25838=_v_21563_h;V _rhs25839=V(0.0);return j::binary(">",_lhs25838,_rhs25839);})())?this->_literals[173]:this->_literals[174]):(j::truth(([&]()->V{V _lhs25840=([&]()->V{V _lhs25842=_v_21564_v;V _rhs25843=V(0.0);return j::binary(">",_lhs25842,_rhs25843);})();V _rhs25841=([&]()->V{V _lhs25844=_v_21563_h;V _rhs25845=V(0.0);return j::binary(">",_lhs25844,_rhs25845);})();return V(j::equal(_lhs25840,_rhs25841,true));})())?this->_literals[95]:this->_literals[96]));
if(j::truth(([&]()->V{V _logical25846=([&]()->V{V _logical25847=([&]()->V{V _lhs25848=([&]()->V{V _lhs25850=_v_21546_x.get();V _rhs25851=_v_21563_h;return V(j::number(_lhs25850)-j::number(_rhs25851));})();V _rhs25849=V(0.0);return j::binary(">=",_lhs25848,_rhs25849);})();return j::truth(_logical25847)?([&]()->V{V _lhs25852=([&]()->V{V _lhs25854=_v_21546_x.get();V _rhs25855=_v_21563_h;return V(j::number(_lhs25854)-j::number(_rhs25855));})();V _rhs25853=_v_21545_cols.get();return j::binary("<",_lhs25852,_rhs25853);})():_logical25847;})();return j::truth(_logical25846)?j::get(j::get(_v_21542_c.get(),this->_literals[153]),([&]()->V{V _lhs25856=_v_21543_i;V _rhs25857=_v_21563_h;return V(j::number(_lhs25856)-j::number(_rhs25857));})()):_logical25846;})())){return (j::truth(([&]()->V{V _lhs25858=_v_21564_v;V _rhs25859=V(0.0);return j::binary(">",_lhs25858,_rhs25859);})())?this->_literals[171]:this->_literals[168]);
}
_v_21566_square=([&]()->V{V _logical25860=([&]()->V{V _logical25861=([&]()->V{V _logical25862=([&]()->V{V _callee25865=_v_21548_has.get();return j::call(_callee25865,j::Args{_v_21546_x.get(),([&]()->V{V _lhs25863=_v_21547_y;V _rhs25864=_v_21564_v;return j::binary("+",_lhs25863,_rhs25864);})()});})();return j::truth(_logical25862)?j::unary("!",([&]()->V{V _callee25870=_v_21548_has.get();return j::call(_callee25870,j::Args{([&]()->V{V _lhs25866=_v_21546_x.get();V _rhs25867=_v_21563_h;return V(j::number(_lhs25866)-j::number(_rhs25867));})(),([&]()->V{V _lhs25868=_v_21547_y;V _rhs25869=_v_21564_v;return j::binary("+",_lhs25868,_rhs25869);})()});})()):_logical25862;})();return j::truth(_logical25861)?([&]()->V{V _callee25873=_v_21548_has.get();return j::call(_callee25873,j::Args{([&]()->V{V _lhs25871=_v_21546_x.get();V _rhs25872=_v_21563_h;return j::binary("+",_lhs25871,_rhs25872);})(),_v_21547_y});})():_logical25861;})();return j::truth(_logical25860)?j::unary("!",([&]()->V{V _callee25878=_v_21548_has.get();return j::call(_callee25878,j::Args{([&]()->V{V _lhs25874=_v_21546_x.get();V _rhs25875=_v_21563_h;return j::binary("+",_lhs25874,_rhs25875);})(),([&]()->V{V _lhs25876=_v_21547_y;V _rhs25877=_v_21564_v;return V(j::number(_lhs25876)-j::number(_rhs25877));})()});})()):_logical25860;})();
if(j::truth(_v_21566_square)){return (j::truth(([&]()->V{V _lhs25879=_v_21564_v;V _rhs25880=V(0.0);return j::binary(">",_lhs25879,_rhs25880);})())?this->_literals[169]:(j::truth(j::unary("!",([&]()->V{V _callee25885=_v_21548_has.get();return j::call(_callee25885,j::Args{([&]()->V{V _lhs25881=_v_21546_x.get();V _rhs25882=_v_21563_h;return j::binary("+",_lhs25881,_rhs25882);})(),([&]()->V{V _lhs25883=_v_21547_y;V _rhs25884=_v_21564_v;return j::binary("+",_lhs25883,_rhs25884);})()});})()))?this->_literals[170]:(j::truth(([&]()->V{V _lhs25886=_v_21563_h;V _rhs25887=V(0.0);return j::binary(">",_lhs25886,_rhs25887);})())?_v_21553_left:_v_21554_right)));
}
if(j::truth(([&]()->V{V _callee25892=_v_21548_has.get();return j::call(_callee25892,j::Args{([&]()->V{V _lhs25888=_v_21546_x.get();V _rhs25889=_v_21563_h;return j::binary("+",_lhs25888,_rhs25889);})(),([&]()->V{V _lhs25890=_v_21547_y;V _rhs25891=_v_21564_v;return V(j::number(_lhs25890)-j::number(_rhs25891));})()});})())){return _v_21565_slope;
}
if(j::truth(([&]()->V{V _lhs25893=j::get(j::get(_v_21542_c.get(),this->_literals[151]),_v_21543_i);V _rhs25894=V(0.62);return j::binary("<",_lhs25893,_rhs25894);})())){return (j::truth(([&]()->V{V _lhs25895=_v_21564_v;V _rhs25896=V(0.0);return j::binary(">",_lhs25895,_rhs25896);})())?this->_literals[169]:this->_literals[170]);
}
return _v_21565_slope;

}

if(j::truth(([&]()->V{V _lhs25897=_v_21555_n;V _rhs25898=V(3.0);return V(j::equal(_lhs25897,_rhs25898,true));})())){
V _v_21567_d;
if(j::truth(j::unary("!",_v_21552_D))){return this->_literals[169];
}
if(j::truth(j::unary("!",_v_21551_U))){return this->_literals[170];
}
_v_21567_d=(j::truth(j::unary("!",_v_21550_R))?V(1.0):j::unary("-",V(1.0)));
if(j::truth(([&]()->V{V _logical25899=([&]()->V{V _lhs25900=_v_21544_style;V _rhs25901=this->_literals[172];return V(j::equal(_lhs25900,_rhs25901,true));})();return j::truth(_logical25899)?([&]()->V{V _logical25902=([&]()->V{V _callee25907=_v_21548_has.get();return j::call(_callee25907,j::Args{([&]()->V{V _lhs25903=_v_21546_x.get();V _rhs25904=_v_21567_d;return j::binary("+",_lhs25903,_rhs25904);})(),([&]()->V{V _lhs25905=_v_21547_y;V _rhs25906=V(1.0);return V(j::number(_lhs25905)-j::number(_rhs25906));})()});})();return !j::truth(_logical25902)?([&]()->V{V _callee25912=_v_21548_has.get();return j::call(_callee25912,j::Args{([&]()->V{V _lhs25908=_v_21546_x.get();V _rhs25909=_v_21567_d;return j::binary("+",_lhs25908,_rhs25909);})(),([&]()->V{V _lhs25910=_v_21547_y;V _rhs25911=V(1.0);return j::binary("+",_lhs25910,_rhs25911);})()});})():_logical25902;})():_logical25899;})())){return (j::truth(([&]()->V{V _lhs25913=_v_21567_d;V _rhs25914=V(0.0);return j::binary(">",_lhs25913,_rhs25914);})())?this->_literals[173]:this->_literals[174]);
}
return (j::truth(([&]()->V{V _callee25919=_v_21548_has.get();return j::call(_callee25919,j::Args{([&]()->V{V _lhs25915=_v_21546_x.get();V _rhs25916=_v_21567_d;return j::binary("+",_lhs25915,_rhs25916);})(),([&]()->V{V _lhs25917=_v_21547_y;V _rhs25918=V(1.0);return V(j::number(_lhs25917)-j::number(_rhs25918));})()});})())?(j::truth(([&]()->V{V _lhs25920=_v_21567_d;V _rhs25921=V(0.0);return j::binary(">",_lhs25920,_rhs25921);})())?this->_literals[95]:this->_literals[96]):(j::truth(([&]()->V{V _callee25926=_v_21548_has.get();return j::call(_callee25926,j::Args{([&]()->V{V _lhs25922=_v_21546_x.get();V _rhs25923=_v_21567_d;return j::binary("+",_lhs25922,_rhs25923);})(),([&]()->V{V _lhs25924=_v_21547_y;V _rhs25925=V(1.0);return j::binary("+",_lhs25924,_rhs25925);})()});})())?(j::truth(([&]()->V{V _lhs25927=_v_21567_d;V _rhs25928=V(0.0);return j::binary(">",_lhs25927,_rhs25928);})())?this->_literals[96]:this->_literals[95]):this->_literals[171]));

}

return this->_literals[169];

}

return V{};
},2);
this->_v_21571_makeMaterial.get()=j::function([=](const j::Args &_args_fn21572,const V &_receiver_fn21572,const V &_self_fn21572) mutable ->V{
V _v_21573_name;
V _v_21574_colors;
V _v_21575_period;
V _v_21576_prepare;
_v_21573_name=_args_fn21572[0];
_v_21574_colors=_args_fn21572[1];
_v_21575_period=_args_fn21572[2];
_v_21576_prepare=_args_fn21572[3];
{
return ([&]()->V{V _obj25929=j::object();j::put(_obj25929,this->_literals[1],_v_21573_name);j::put(_obj25929,this->_literals[98],_v_21574_colors);j::put(_obj25929,this->_literals[175],_v_21575_period);j::put(_obj25929,this->_literals[176],_v_21576_prepare);return _obj25929;})();

}

return V{};
},4);
this->_v_21581_tiled.get()=j::function([=](const j::Args &_args_fn21582,const V &_receiver_fn21582,const V &_self_fn21582) mutable ->V{
V _v_21583_x;
V _v_21584_y;
j::Cell _v_21585_wx;
j::Cell _v_21586_wy;
V _v_21587_seed;
_v_21583_x=_args_fn21582[0];
_v_21584_y=_args_fn21582[1];
_v_21585_wx.get()=_args_fn21582[2];
_v_21586_wy.get()=_args_fn21582[3];
_v_21587_seed=_args_fn21582[4];
{
V _v_21588_xi;
V _v_21589_yi;
V _v_21590_fx;
V _v_21591_fy;
V _v_21592_u;
V _v_21593_v;
V _v_21594_X;
V _v_21597_Y;
V _v_21600_a;
V _v_21601_b;
V _v_21602_c;
V _v_21603_d;
_v_21588_xi=([&]()->V{V _number25930=_v_21583_x;return V(std::floor(j::number(_number25930)));})();
_v_21589_yi=([&]()->V{V _number25931=_v_21584_y;return V(std::floor(j::number(_number25931)));})();
_v_21590_fx=([&]()->V{V _lhs25932=_v_21583_x;V _rhs25933=_v_21588_xi;return V(j::number(_lhs25932)-j::number(_rhs25933));})();
_v_21591_fy=([&]()->V{V _lhs25934=_v_21584_y;V _rhs25935=_v_21589_yi;return V(j::number(_lhs25934)-j::number(_rhs25935));})();
_v_21592_u=([&]()->V{V _lhs25936=([&]()->V{V _lhs25938=_v_21590_fx;V _rhs25939=_v_21590_fx;return V(j::number(_lhs25938)*j::number(_rhs25939));})();V _rhs25937=([&]()->V{V _lhs25940=V(3.0);V _rhs25941=([&]()->V{V _lhs25942=V(2.0);V _rhs25943=_v_21590_fx;return V(j::number(_lhs25942)*j::number(_rhs25943));})();return V(j::number(_lhs25940)-j::number(_rhs25941));})();return V(j::number(_lhs25936)*j::number(_rhs25937));})();
_v_21593_v=([&]()->V{V _lhs25944=([&]()->V{V _lhs25946=_v_21591_fy;V _rhs25947=_v_21591_fy;return V(j::number(_lhs25946)*j::number(_rhs25947));})();V _rhs25945=([&]()->V{V _lhs25948=V(3.0);V _rhs25949=([&]()->V{V _lhs25950=V(2.0);V _rhs25951=_v_21591_fy;return V(j::number(_lhs25950)*j::number(_rhs25951));})();return V(j::number(_lhs25948)-j::number(_rhs25949));})();return V(j::number(_lhs25944)*j::number(_rhs25945));})();
_v_21594_X=j::function([=](const j::Args &_args_fn21595,const V &_receiver_fn21595,const V &_self_fn21595) mutable ->V{
V _v_21596_k;
_v_21596_k=_args_fn21595[0];
return (j::truth(_v_21585_wx.get())?([&]()->V{V _lhs25952=([&]()->V{V _lhs25954=([&]()->V{V _lhs25956=_v_21596_k;V _rhs25957=_v_21585_wx.get();return V(std::fmod(j::number(_lhs25956),j::number(_rhs25957)));})();V _rhs25955=_v_21585_wx.get();return j::binary("+",_lhs25954,_rhs25955);})();V _rhs25953=_v_21585_wx.get();return V(std::fmod(j::number(_lhs25952),j::number(_rhs25953)));})():_v_21596_k);
return V{};
},1);
_v_21597_Y=j::function([=](const j::Args &_args_fn21598,const V &_receiver_fn21598,const V &_self_fn21598) mutable ->V{
V _v_21599_k;
_v_21599_k=_args_fn21598[0];
return (j::truth(_v_21586_wy.get())?([&]()->V{V _lhs25958=([&]()->V{V _lhs25960=([&]()->V{V _lhs25962=_v_21599_k;V _rhs25963=_v_21586_wy.get();return V(std::fmod(j::number(_lhs25962),j::number(_rhs25963)));})();V _rhs25961=_v_21586_wy.get();return j::binary("+",_lhs25960,_rhs25961);})();V _rhs25959=_v_21586_wy.get();return V(std::fmod(j::number(_lhs25958),j::number(_rhs25959)));})():_v_21599_k);
return V{};
},1);
_v_21600_a=([&]()->V{V _callee25966=this->_v_20634_hash.get();return j::call(_callee25966,j::Args{([&]()->V{V _callee25964=_v_21594_X;return j::call(_callee25964,j::Args{_v_21588_xi});})(),([&]()->V{V _callee25965=_v_21597_Y;return j::call(_callee25965,j::Args{_v_21589_yi});})(),_v_21587_seed});})();
_v_21601_b=([&]()->V{V _callee25971=this->_v_20634_hash.get();return j::call(_callee25971,j::Args{([&]()->V{V _callee25969=_v_21594_X;return j::call(_callee25969,j::Args{([&]()->V{V _lhs25967=_v_21588_xi;V _rhs25968=V(1.0);return j::binary("+",_lhs25967,_rhs25968);})()});})(),([&]()->V{V _callee25970=_v_21597_Y;return j::call(_callee25970,j::Args{_v_21589_yi});})(),_v_21587_seed});})();
_v_21602_c=([&]()->V{V _callee25976=this->_v_20634_hash.get();return j::call(_callee25976,j::Args{([&]()->V{V _callee25972=_v_21594_X;return j::call(_callee25972,j::Args{_v_21588_xi});})(),([&]()->V{V _callee25975=_v_21597_Y;return j::call(_callee25975,j::Args{([&]()->V{V _lhs25973=_v_21589_yi;V _rhs25974=V(1.0);return j::binary("+",_lhs25973,_rhs25974);})()});})(),_v_21587_seed});})();
_v_21603_d=([&]()->V{V _callee25983=this->_v_20634_hash.get();return j::call(_callee25983,j::Args{([&]()->V{V _callee25979=_v_21594_X;return j::call(_callee25979,j::Args{([&]()->V{V _lhs25977=_v_21588_xi;V _rhs25978=V(1.0);return j::binary("+",_lhs25977,_rhs25978);})()});})(),([&]()->V{V _callee25982=_v_21597_Y;return j::call(_callee25982,j::Args{([&]()->V{V _lhs25980=_v_21589_yi;V _rhs25981=V(1.0);return j::binary("+",_lhs25980,_rhs25981);})()});})(),_v_21587_seed});})();
return ([&]()->V{V _lhs25984=([&]()->V{V _lhs25986=([&]()->V{V _lhs25988=_v_21600_a;V _rhs25989=([&]()->V{V _lhs25990=([&]()->V{V _lhs25992=_v_21601_b;V _rhs25993=_v_21600_a;return V(j::number(_lhs25992)-j::number(_rhs25993));})();V _rhs25991=_v_21592_u;return V(j::number(_lhs25990)*j::number(_rhs25991));})();return j::binary("+",_lhs25988,_rhs25989);})();V _rhs25987=([&]()->V{V _lhs25994=([&]()->V{V _lhs25996=_v_21602_c;V _rhs25997=_v_21600_a;return V(j::number(_lhs25996)-j::number(_rhs25997));})();V _rhs25995=_v_21593_v;return V(j::number(_lhs25994)*j::number(_rhs25995));})();return j::binary("+",_lhs25986,_rhs25987);})();V _rhs25985=([&]()->V{V _lhs25998=([&]()->V{V _lhs26000=([&]()->V{V _lhs26002=([&]()->V{V _lhs26004=([&]()->V{V _lhs26006=_v_21600_a;V _rhs26007=_v_21601_b;return V(j::number(_lhs26006)-j::number(_rhs26007));})();V _rhs26005=_v_21602_c;return V(j::number(_lhs26004)-j::number(_rhs26005));})();V _rhs26003=_v_21603_d;return j::binary("+",_lhs26002,_rhs26003);})();V _rhs26001=_v_21592_u;return V(j::number(_lhs26000)*j::number(_rhs26001));})();V _rhs25999=_v_21593_v;return V(j::number(_lhs25998)*j::number(_rhs25999));})();return j::binary("+",_lhs25984,_rhs25985);})();

}

return V{};
},5);
this->_v_21604_lap.get()=j::function([=](const j::Args &_args_fn21605,const V &_receiver_fn21605,const V &_self_fn21605) mutable ->V{
V _v_21606_t;
V _v_21607_period;
_v_21606_t=_args_fn21605[0];
_v_21607_period=_args_fn21605[1];
{
V _v_21608_k;
V _v_21609_f;
if(j::truth(([&]()->V{V _logical26008=([&]()->V{V _lhs26009=_v_21607_period;V _rhs26010=j::builtin("undefined");return V(j::equal(_lhs26009,_rhs26010,true));})();return !j::truth(_logical26008)?j::unary("!",([&]()->V{V _receiver26011=j::builtin("Number");V _method26012=this->_literals[14];V _method=j::get(_receiver26011,_method26012);j::Args _params26013=j::Args{_v_21607_period};return j::call(_method,_params26013,_receiver26011);})()):_logical26008;})())){return _v_21606_t;
}
_v_21608_k=([&]()->V{V _lhs26014=_v_21606_t;V _rhs26015=_v_21607_period;return V(j::number(_lhs26014)/j::number(_rhs26015));})();
_v_21609_f=([&]()->V{V _lhs26016=([&]()->V{V _number26023=([&]()->V{V _lhs26024=([&]()->V{V _lhs26026=_v_21608_k;V _rhs26027=([&]()->V{V _number26028=_v_21608_k;return V(std::floor(j::number(_number26028)));})();return V(j::number(_lhs26026)-j::number(_rhs26027));})();V _rhs26025=V(1000000000.0);return V(j::number(_lhs26024)*j::number(_rhs26025));})();return V(std::floor(j::number(_number26023)+.5));})();V _rhs26017=V(1000000000.0);return V(j::number(_lhs26016)/j::number(_rhs26017));})();
return (j::truth(([&]()->V{V _lhs26029=_v_21609_f;V _rhs26030=V(1.0);return j::binary(">=",_lhs26029,_rhs26030);})())?V(0.0):([&]()->V{V _lhs26031=_v_21609_f;V _rhs26032=_v_21607_period;return V(j::number(_lhs26031)*j::number(_rhs26032));})());

}

return V{};
},2);
this->_v_21613_water.get()=j::function([=](const j::Args &_args_fn21614,const V &_receiver_fn21614,const V &_self_fn21614) mutable ->V{
V _v_21615_o;
_v_21615_o=_args_fn21614[0];
{
V _v_21616_p;
V _v_21617_colors;
j::Cell _v_21618_waves;
j::Cell _v_21619_period;
j::Cell _v_21620_bend;
j::Cell _v_21621_texture;
j::Cell _v_21622_moves;
j::Cell _v_21623_body;
_v_21616_p=([&]()->V{V _callee26034=this->_v_20652_optionsOf.get();return j::call(_callee26034,j::Args{this->_literals[177],_v_21615_o,([&]()->V{j::Args _array26033;_array26033.push_back(this->_literals[98]);_array26033.push_back(this->_literals[178]);_array26033.push_back(this->_literals[175]);_array26033.push_back(this->_literals[179]);_array26033.push_back(this->_literals[180]);return j::array(std::move(_array26033));})()});})();
_v_21617_colors=([&]()->V{V _callee26035=this->_v_20717_colorsOf.get();return j::call(_callee26035,j::Args{this->_literals[181],j::get(_v_21616_p,this->_literals[98]),this->_literals[182],this->_v_21611_SHADES.get()});})();
_v_21618_waves.get()=([&]()->V{V _callee26037=this->_v_20688_wordOf.get();return j::call(_callee26037,j::Args{this->_literals[183],j::get(_v_21616_p,this->_literals[178]),([&]()->V{j::Args _array26036;_array26036.push_back(this->_literals[184]);_array26036.push_back(this->_literals[185]);_array26036.push_back(this->_literals[186]);_array26036.push_back(this->_literals[187]);return j::array(std::move(_array26036));})(),this->_literals[185]});})();
_v_21619_period.get()=([&]()->V{V _callee26038=this->_v_20682_periodOf.get();return j::call(_callee26038,j::Args{this->_literals[188],j::get(_v_21616_p,this->_literals[175]),V(4.0)});})();
_v_21620_bend.get()=([&]()->V{V _callee26039=this->_v_20663_numberOf.get();return j::call(_callee26039,j::Args{this->_literals[189],j::get(_v_21616_p,this->_literals[179]),V(1.0),V(0.0),V(8.0)});})();
_v_21621_texture.get()=([&]()->V{V _callee26040=this->_v_20663_numberOf.get();return j::call(_callee26040,j::Args{this->_literals[190],j::get(_v_21616_p,this->_literals[180]),V(0.5),V(0.0),V(1.0)});})();
_v_21622_moves.get()=([&]()->V{V _logical26041=([&]()->V{V _lhs26042=_v_21618_waves.get();V _rhs26043=this->_literals[184];return V(!j::equal(_lhs26042,_rhs26043,true));})();return !j::truth(_logical26041)?([&]()->V{V _lhs26044=_v_21621_texture.get();V _rhs26045=V(0.0);return j::binary(">",_lhs26044,_rhs26045);})():_logical26041;})();
_v_21623_body.get()=([&]()->V{V _receiver26046=j::builtin("Array");V _method26047=this->_literals[124];V _method=j::get(_receiver26046,_method26047);j::Args _params26048=j::Args{this->_v_21612_BODY.get(),this->_v_21577_code.get()};return j::call(_method,_params26048,_receiver26046);})();
return ([&]()->V{V _callee26508=this->_v_21571_makeMaterial.get();return j::call(_callee26508,j::Args{this->_literals[182],_v_21617_colors,(j::truth(_v_21622_moves.get())?_v_21619_period.get():j::builtin("undefined")),j::function([=](const j::Args &_args_fn21624,const V &_receiver_fn21624,const V &_self_fn21624) mutable ->V{
V _v_21625_c;
_v_21625_c=_args_fn21624[0];
{
j::Cell _v_21626_room;
j::Cell _v_21627_level;
j::Cell _v_21628_cols;
V _v_21629_rows;
j::Cell _v_21630_surface;
j::Cell _v_21631_xs;
V _v_21633_xa;
V _v_21634_xb;
j::Cell _v_21635_mid;
j::Cell _v_21636_half;
j::Cell _v_21637_depthRows;
j::Cell _v_21638_amp;
j::Cell _v_21639_wl;
j::Cell _v_21640_middle;
_v_21626_room.get()=([&]()->V{V _logical26049=j::get(_v_21625_c,this->_literals[69]);return j::nullish(_logical26049)?_v_21625_c:_logical26049;})();
_v_21627_level.get()=([&]()->V{V _lhs26050=([&]()->V{V _number26053=([&]()->V{V _logical26054=j::get(_v_21625_c,this->_literals[78]);return j::nullish(_logical26054)?j::get(_v_21625_c,this->_literals[35]):_logical26054;})();return V(std::floor(j::number(_number26053)));})();V _rhs26051=V(0.5);return j::binary("+",_lhs26050,_rhs26051);})();
V _pattern26055=_v_21625_c;
_v_21628_cols.get()=j::get(_pattern26055,this->_literals[46]);
_v_21629_rows=j::get(_pattern26055,this->_literals[48]);
_v_21630_surface.get()=([&]()->V{V _callee26056=j::builtin("Float32Array");return j::construct(_callee26056,j::Args{_v_21628_cols.get()});})();
_v_21631_xs.get()=([&]()->V{j::Args _array26057;return j::array(std::move(_array26057));})();
{V _v_21632_x;
_v_21632_x=j::get(_v_21626_room.get(),this->_literals[30]);
for(;j::truth(([&]()->V{V _lhs26058=_v_21632_x;V _rhs26059=j::get(_v_21626_room.get(),this->_literals[32]);return j::binary("<",_lhs26058,_rhs26059);})());(void)(j::increment(_v_21632_x,1,false))){if(j::truth(([&]()->V{V _lhs26060=j::get(j::get(_v_21626_room.get(),this->_literals[33]),_v_21632_x);V _rhs26061=V(0.0);return j::binary(">=",_lhs26060,_rhs26061);})())){(void)(([&]()->V{V _receiver26062=_v_21631_xs.get();V _method26063=this->_literals[149];V _method=j::get(_receiver26062,_method26063);j::Args _params26064=j::Args{_v_21632_x};return j::call(_method,_params26064,_receiver26062);})());
}
}}
_v_21633_xa=j::get(_v_21626_room.get(),this->_literals[30]);
_v_21634_xb=([&]()->V{V _receiver26069=j::builtin("Math");V _method26070=this->_literals[51];V _method=j::get(_receiver26069,_method26070);j::Args _params26071=j::Args{([&]()->V{V _lhs26065=j::get(_v_21626_room.get(),this->_literals[30]);V _rhs26066=V(1.0);return j::binary("+",_lhs26065,_rhs26066);})(),j::get(_v_21626_room.get(),this->_literals[32])};return j::call(_method,_params26071,_receiver26069);})();
_v_21635_mid.get()=([&]()->V{V _lhs26072=([&]()->V{V _lhs26074=_v_21633_xa;V _rhs26075=_v_21634_xb;return j::binary("+",_lhs26074,_rhs26075);})();V _rhs26073=V(2.0);return V(j::number(_lhs26072)/j::number(_rhs26073));})();
_v_21636_half.get()=([&]()->V{V _receiver26082=j::builtin("Math");V _method26083=this->_literals[51];V _method=j::get(_receiver26082,_method26083);j::Args _params26084=j::Args{V(1.0),([&]()->V{V _lhs26076=([&]()->V{V _lhs26078=_v_21634_xb;V _rhs26079=_v_21633_xa;return V(j::number(_lhs26078)-j::number(_rhs26079));})();V _rhs26077=V(2.0);return V(j::number(_lhs26076)/j::number(_rhs26077));})()};return j::call(_method,_params26084,_receiver26082);})();
_v_21637_depthRows.get()=([&]()->V{V _receiver26089=j::builtin("Math");V _method26090=this->_literals[51];V _method=j::get(_receiver26089,_method26090);j::Args _params26091=j::Args{V(1.0),([&]()->V{V _lhs26085=j::get(_v_21626_room.get(),this->_literals[37]);V _rhs26086=_v_21627_level.get();return V(j::number(_lhs26085)-j::number(_rhs26086));})()};return j::call(_method,_params26091,_receiver26089);})();
_v_21638_amp.get()=(j::truth(([&]()->V{V _lhs26092=_v_21618_waves.get();V _rhs26093=this->_literals[184];return V(j::equal(_lhs26092,_rhs26093,true));})())?V(0.0):(j::truth(([&]()->V{V _lhs26094=_v_21618_waves.get();V _rhs26095=this->_literals[185];return V(j::equal(_lhs26094,_rhs26095,true));})())?V(0.45):(j::truth(([&]()->V{V _lhs26096=_v_21618_waves.get();V _rhs26097=this->_literals[187];return V(j::equal(_lhs26096,_rhs26097,true));})())?V(1.0):([&]()->V{V _receiver26107=j::builtin("Math");V _method26108=this->_literals[52];V _method=j::get(_receiver26107,_method26108);j::Args _params26109=j::Args{V(2.2),([&]()->V{V _receiver26102=j::builtin("Math");V _method26103=this->_literals[51];V _method=j::get(_receiver26102,_method26103);j::Args _params26104=j::Args{V(0.8),([&]()->V{V _lhs26098=_v_21637_depthRows.get();V _rhs26099=V(0.25);return V(j::number(_lhs26098)*j::number(_rhs26099));})()};return j::call(_method,_params26104,_receiver26102);})()};return j::call(_method,_params26109,_receiver26107);})())));
_v_21639_wl.get()=([&]()->V{V _lhs26110=this->_v_20628_TAU.get();V _rhs26111=([&]()->V{V _receiver26118=j::builtin("Math");V _method26119=this->_literals[51];V _method=j::get(_receiver26118,_method26119);j::Args _params26120=j::Args{V(6.0),([&]()->V{V _lhs26112=([&]()->V{V _lhs26114=_v_21634_xb;V _rhs26115=_v_21633_xa;return V(j::number(_lhs26114)-j::number(_rhs26115));})();V _rhs26113=V(0.6);return V(j::number(_lhs26112)*j::number(_rhs26113));})()};return j::call(_method,_params26120,_receiver26118);})();return V(j::number(_lhs26110)/j::number(_rhs26111));})();
_v_21640_middle.get()=([&]()->V{V _callee26121=j::builtin("Float32Array");return j::construct(_callee26121,j::Args{_v_21629_rows});})();
{V _v_21641_y;
_v_21641_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs26122=_v_21641_y;V _rhs26123=_v_21629_rows;return j::binary("<",_lhs26122,_rhs26123);})());(void)(j::increment(_v_21641_y,1,false))){(void)(([&]()->V{V _base26125=_v_21640_middle.get();V _key26126=_v_21641_y;V _assign26124=(j::truth(([&]()->V{V _lhs26127=j::get(j::get(_v_21626_room.get(),this->_literals[28]),_v_21641_y);V _rhs26128=V(0.0);return j::binary(">=",_lhs26127,_rhs26128);})())?([&]()->V{V _lhs26129=([&]()->V{V _lhs26131=([&]()->V{V _lhs26133=j::get(j::get(_v_21626_room.get(),this->_literals[28]),_v_21641_y);V _rhs26134=j::get(j::get(_v_21626_room.get(),this->_literals[31]),_v_21641_y);return j::binary("+",_lhs26133,_rhs26134);})();V _rhs26132=V(1.0);return j::binary("+",_lhs26131,_rhs26132);})();V _rhs26130=V(2.0);return V(j::number(_lhs26129)/j::number(_rhs26130));})():([&]()->V{V _lhs26135=_v_21628_cols.get();V _rhs26136=V(2.0);return V(j::number(_lhs26135)/j::number(_rhs26136));})());return j::put(_base26125,_key26126,_assign26124);})());
}}
return j::function([=](const j::Args &_args_fn21642,const V &_receiver_fn21642,const V &_self_fn21642) mutable ->V{
V _v_21643_t;
V _v_21644_pt;
_v_21643_t=_args_fn21642[0];
_v_21644_pt=_args_fn21642[1];
{
V _v_21645_s;
V _v_21646_w;
V _v_21650_under;
V _v_21651_front;
V _pattern26137=_v_21644_pt;
_v_21645_s=j::get(_pattern26137,this->_literals[191]);
_v_21646_w=(j::truth(_v_21622_moves.get())?([&]()->V{V _lhs26138=([&]()->V{V _lhs26140=this->_v_20628_TAU.get();V _rhs26141=_v_21643_t;return V(j::number(_lhs26140)*j::number(_rhs26141));})();V _rhs26139=_v_21619_period.get();return V(j::number(_lhs26138)/j::number(_rhs26139));})():V(0.0));
{for(const auto &_item26142:j::elements(_v_21631_xs.get())){V _v_21647_x;
_v_21647_x=_item26142;
{
V _v_21648_k;
V _v_21649_h;
_v_21648_k=([&]()->V{V _lhs26143=_v_21647_x;V _rhs26144=V(0.5);return j::binary("+",_lhs26143,_rhs26144);})();
_v_21649_h=V(0.0);
if(j::truth(([&]()->V{V _lhs26145=_v_21618_waves.get();V _rhs26146=this->_literals[185];return V(j::equal(_lhs26145,_rhs26146,true));})())){(void)((_v_21649_h=([&]()->V{V _lhs26148=_v_21638_amp.get();V _rhs26149=([&]()->V{V _lhs26150=([&]()->V{V _lhs26152=([&]()->V{V _number26158=([&]()->V{V _lhs26159=([&]()->V{V _lhs26161=_v_21648_k;V _rhs26162=_v_21639_wl.get();return V(j::number(_lhs26161)*j::number(_rhs26162));})();V _rhs26160=_v_21646_w;return V(j::number(_lhs26159)-j::number(_rhs26160));})();return V(std::sin(j::number(_number26158)));})();V _rhs26153=V(0.7);return V(j::number(_lhs26152)*j::number(_rhs26153));})();V _rhs26151=([&]()->V{V _lhs26163=V(0.3);V _rhs26164=([&]()->V{V _number26173=([&]()->V{V _lhs26174=([&]()->V{V _lhs26176=([&]()->V{V _lhs26178=_v_21648_k;V _rhs26179=_v_21639_wl.get();return V(j::number(_lhs26178)*j::number(_rhs26179));})();V _rhs26177=V(2.3);return V(j::number(_lhs26176)*j::number(_rhs26177));})();V _rhs26175=([&]()->V{V _lhs26180=V(2.0);V _rhs26181=_v_21646_w;return V(j::number(_lhs26180)*j::number(_rhs26181));})();return j::binary("+",_lhs26174,_rhs26175);})();return V(std::sin(j::number(_number26173)));})();return V(j::number(_lhs26163)*j::number(_rhs26164));})();return j::binary("+",_lhs26150,_rhs26151);})();return V(j::number(_lhs26148)*j::number(_rhs26149));})()));
}else {if(j::truth(([&]()->V{V _lhs26182=_v_21618_waves.get();V _rhs26183=this->_literals[187];return V(j::equal(_lhs26182,_rhs26183,true));})())){(void)((_v_21649_h=([&]()->V{V _lhs26185=_v_21638_amp.get();V _rhs26186=([&]()->V{V _lhs26187=([&]()->V{V _lhs26189=([&]()->V{V _number26199=([&]()->V{V _lhs26200=([&]()->V{V _lhs26202=([&]()->V{V _lhs26204=_v_21648_k;V _rhs26205=_v_21639_wl.get();return V(j::number(_lhs26204)*j::number(_rhs26205));})();V _rhs26203=V(1.6);return V(j::number(_lhs26202)*j::number(_rhs26203));})();V _rhs26201=([&]()->V{V _lhs26206=V(2.0);V _rhs26207=_v_21646_w;return V(j::number(_lhs26206)*j::number(_rhs26207));})();return V(j::number(_lhs26200)-j::number(_rhs26201));})();return V(std::sin(j::number(_number26199)));})();V _rhs26190=V(0.6);return V(j::number(_lhs26189)*j::number(_rhs26190));})();V _rhs26188=([&]()->V{V _lhs26208=V(0.4);V _rhs26209=([&]()->V{V _number26218=([&]()->V{V _lhs26219=([&]()->V{V _lhs26221=([&]()->V{V _lhs26223=_v_21648_k;V _rhs26224=_v_21639_wl.get();return V(j::number(_lhs26223)*j::number(_rhs26224));})();V _rhs26222=V(3.1);return V(j::number(_lhs26221)*j::number(_rhs26222));})();V _rhs26220=([&]()->V{V _lhs26225=V(3.0);V _rhs26226=_v_21646_w;return V(j::number(_lhs26225)*j::number(_rhs26226));})();return j::binary("+",_lhs26219,_rhs26220);})();return V(std::sin(j::number(_number26218)));})();return V(j::number(_lhs26208)*j::number(_rhs26209));})();return j::binary("+",_lhs26187,_rhs26188);})();return V(j::number(_lhs26185)*j::number(_rhs26186));})()));
}else {if(j::truth(([&]()->V{V _lhs26227=_v_21618_waves.get();V _rhs26228=this->_literals[186];return V(j::equal(_lhs26227,_rhs26228,true));})())){(void)((_v_21649_h=([&]()->V{V _lhs26230=([&]()->V{V _lhs26232=([&]()->V{V _lhs26234=_v_21638_amp.get();V _rhs26235=([&]()->V{V _lhs26236=([&]()->V{V _lhs26238=_v_21648_k;V _rhs26239=_v_21635_mid.get();return V(j::number(_lhs26238)-j::number(_rhs26239));})();V _rhs26237=_v_21636_half.get();return V(j::number(_lhs26236)/j::number(_rhs26237));})();return V(j::number(_lhs26234)*j::number(_rhs26235));})();V _rhs26233=([&]()->V{V _number26240=_v_21646_w;return V(std::sin(j::number(_number26240)));})();return V(j::number(_lhs26232)*j::number(_rhs26233));})();V _rhs26231=([&]()->V{V _lhs26241=V(0.25);V _rhs26242=([&]()->V{V _number26251=([&]()->V{V _lhs26252=([&]()->V{V _lhs26254=([&]()->V{V _lhs26256=_v_21648_k;V _rhs26257=_v_21639_wl.get();return V(j::number(_lhs26256)*j::number(_rhs26257));})();V _rhs26255=V(2.0);return V(j::number(_lhs26254)*j::number(_rhs26255));})();V _rhs26253=([&]()->V{V _lhs26258=V(2.0);V _rhs26259=_v_21646_w;return V(j::number(_lhs26258)*j::number(_rhs26259));})();return V(j::number(_lhs26252)-j::number(_rhs26253));})();return V(std::sin(j::number(_number26251)));})();return V(j::number(_lhs26241)*j::number(_rhs26242));})();return j::binary("+",_lhs26230,_rhs26231);})()));
}
}
}
(void)(([&]()->V{V _base26261=_v_21630_surface.get();V _key26262=_v_21647_x;V _assign26260=([&]()->V{V _lhs26263=_v_21627_level.get();V _rhs26264=_v_21649_h;return V(j::number(_lhs26263)-j::number(_rhs26264));})();return j::put(_base26261,_key26262,_assign26260);})());

}
}}
_v_21650_under=j::get(_v_21644_pt,this->_literals[192]);
_v_21651_front=([&]()->V{V _receiver26265=this->_v_21610_highlights.get();V _method26266=this->_literals[157];V _method=j::get(_receiver26265,_method26266);j::Args _params26267=j::Args{_v_21645_s};return j::call(_method,_params26267,_receiver26265);})();
{for(const auto &_item26268:j::elements(j::get(_v_21626_room.get(),this->_literals[150]))){V _v_21652_i;
_v_21652_i=_item26268;
{
V _v_21653_x;
V _v_21654_y;
V _v_21655_sy;
V _v_21656_ch;
V _v_21657_col;
_v_21653_x=([&]()->V{V _lhs26269=_v_21652_i;V _rhs26270=_v_21628_cols.get();return V(std::fmod(j::number(_lhs26269),j::number(_rhs26270)));})();
_v_21654_y=([&]()->V{V _lhs26271=([&]()->V{V _lhs26273=_v_21652_i;V _rhs26274=_v_21653_x;return V(j::number(_lhs26273)-j::number(_rhs26274));})();V _rhs26272=_v_21628_cols.get();return V(j::number(_lhs26271)/j::number(_rhs26272));})();
_v_21655_sy=j::get(_v_21630_surface.get(),_v_21653_x);
if(j::truth(([&]()->V{V _lhs26275=([&]()->V{V _lhs26277=_v_21654_y;V _rhs26278=V(1.0);return j::binary("+",_lhs26277,_rhs26278);})();V _rhs26276=_v_21655_sy;return j::binary("<=",_lhs26275,_rhs26276);})())){continue;
}
if(j::truth(([&]()->V{V _lhs26279=_v_21654_y;V _rhs26280=_v_21655_sy;return j::binary("<=",_lhs26279,_rhs26280);})())){
V _v_21658_f;
V _v_21659_wall;
_v_21658_f=([&]()->V{V _lhs26281=_v_21655_sy;V _rhs26282=_v_21654_y;return V(j::number(_lhs26281)-j::number(_rhs26282));})();
_v_21659_wall=([&]()->V{V _logical26283=([&]()->V{V _logical26284=([&]()->V{V _lhs26285=_v_21654_y;V _rhs26286=V(0.0);return j::binary(">",_lhs26285,_rhs26286);})();return j::truth(_logical26284)?([&]()->V{V _lhs26287=j::get(j::get(_v_21626_room.get(),this->_literals[71]),([&]()->V{V _lhs26289=_v_21652_i;V _rhs26290=_v_21628_cols.get();return V(j::number(_lhs26289)-j::number(_rhs26290));})());V _rhs26288=V(1.0);return V(j::equal(_lhs26287,_rhs26288,true));})():_logical26284;})();return j::truth(_logical26283)?([&]()->V{V _logical26291=([&]()->V{V _logical26292=([&]()->V{V _logical26293=([&]()->V{V _lhs26294=_v_21653_x;V _rhs26295=V(0.0);return V(j::equal(_lhs26294,_rhs26295,true));})();return !j::truth(_logical26293)?([&]()->V{V _lhs26296=_v_21653_x;V _rhs26297=([&]()->V{V _lhs26298=_v_21628_cols.get();V _rhs26299=V(1.0);return V(j::number(_lhs26298)-j::number(_rhs26299));})();return V(j::equal(_lhs26296,_rhs26297,true));})():_logical26293;})();return !j::truth(_logical26292)?j::unary("!",j::get(j::get(_v_21626_room.get(),this->_literals[71]),([&]()->V{V _lhs26300=_v_21652_i;V _rhs26301=V(1.0);return V(j::number(_lhs26300)-j::number(_rhs26301));})())):_logical26292;})();return !j::truth(_logical26291)?j::unary("!",j::get(j::get(_v_21626_room.get(),this->_literals[71]),([&]()->V{V _lhs26302=_v_21652_i;V _rhs26303=V(1.0);return j::binary("+",_lhs26302,_rhs26303);})())):_logical26291;})():_logical26283;})();
(void)((_v_21656_ch=(j::truth(_v_21659_wall)?([&]()->V{V _callee26307=this->_v_21577_code.get();return j::call(_callee26307,j::Args{(j::truth(([&]()->V{V _lhs26305=_v_21658_f;V _rhs26306=V(0.85);return j::binary("<",_lhs26305,_rhs26306);})())?this->_literals[193]:this->_literals[171])});})():([&]()->V{V _callee26312=this->_v_21577_code.get();return j::call(_callee26312,j::Args{(j::truth(([&]()->V{V _lhs26308=_v_21658_f;V _rhs26309=V(0.25);return j::binary("<",_lhs26308,_rhs26309);})())?this->_literals[171]:(j::truth(([&]()->V{V _lhs26310=_v_21658_f;V _rhs26311=V(0.7);return j::binary("<",_lhs26310,_rhs26311);})())?this->_literals[194]:this->_literals[168]))});})())));
(void)((_v_21657_col=([&]()->V{V _receiver26316=_v_21644_pt;V _method26317=this->_literals[195];V _method=j::get(_receiver26316,_method26317);j::Args _params26318=j::Args{([&]()->V{V _lhs26314=this->_v_21611_SHADES.get();V _rhs26315=V(1.0);return V(j::number(_lhs26314)-j::number(_rhs26315));})()};return j::call(_method,_params26318,_receiver26316);})()));

}
else {if(j::truth(([&]()->V{V _logical26319=([&]()->V{V _logical26320=_v_21651_front;return j::truth(_logical26320)?([&]()->V{V _lhs26321=j::get(_v_21651_front,_v_21652_i);V _rhs26322=this->_v_20623_EMPTY.get();return V(!j::equal(_lhs26321,_rhs26322,true));})():_logical26320;})();return j::truth(_logical26319)?([&]()->V{V _lhs26323=j::get(_v_21651_front,_v_21652_i);V _rhs26324=j::get(j::get(_v_21650_under,this->_literals[160]),_v_21652_i);return V(j::equal(_lhs26323,_rhs26324,true));})():_logical26319;})())){
(void)(((_v_21656_ch=j::get(j::get(_v_21650_under,this->_literals[160]),_v_21652_i)),(_v_21657_col=j::get(j::get(_v_21650_under,this->_literals[98]),_v_21652_i))));

}
else {
V _v_21660_behind;
V _v_21665_d;
V _v_21666_ripple;
V _v_21667_v;
V _v_21668_shade;
_v_21660_behind=this->_v_20623_EMPTY.get();
if(j::truth(([&]()->V{V _lhs26327=_v_21620_bend.get();V _rhs26328=V(0.0);return j::binary(">",_lhs26327,_rhs26328);})())){
V _v_21661_dx;
V _v_21662_inward;
V _v_21663_sx;
V _v_21664_j;
_v_21661_dx=([&]()->V{V _number26344=([&]()->V{V _lhs26345=_v_21620_bend.get();V _rhs26346=([&]()->V{V _lhs26347=V(1.0);V _rhs26348=([&]()->V{V _lhs26349=V(0.9);V _rhs26350=([&]()->V{V _number26355=([&]()->V{V _lhs26356=([&]()->V{V _lhs26358=_v_21654_y;V _rhs26359=V(1.7);return V(j::number(_lhs26358)*j::number(_rhs26359));})();V _rhs26357=_v_21646_w;return j::binary("+",_lhs26356,_rhs26357);})();return V(std::sin(j::number(_number26355)));})();return V(j::number(_lhs26349)*j::number(_rhs26350));})();return j::binary("+",_lhs26347,_rhs26348);})();return V(j::number(_lhs26345)*j::number(_rhs26346));})();return V(std::floor(j::number(_number26344)+.5));})();
_v_21662_inward=(j::truth(([&]()->V{V _lhs26360=([&]()->V{V _lhs26362=_v_21653_x;V _rhs26363=V(0.5);return j::binary("+",_lhs26362,_rhs26363);})();V _rhs26361=j::get(_v_21640_middle.get(),_v_21654_y);return j::binary("<",_lhs26360,_rhs26361);})())?V(1.0):j::unary("-",V(1.0)));
_v_21663_sx=([&]()->V{V _lhs26364=_v_21653_x;V _rhs26365=([&]()->V{V _lhs26366=_v_21662_inward;V _rhs26367=_v_21661_dx;return V(j::number(_lhs26366)*j::number(_rhs26367));})();return V(j::number(_lhs26364)-j::number(_rhs26365));})();
_v_21664_j=([&]()->V{V _lhs26368=([&]()->V{V _lhs26370=_v_21654_y;V _rhs26371=_v_21628_cols.get();return V(j::number(_lhs26370)*j::number(_rhs26371));})();V _rhs26369=_v_21663_sx;return j::binary("+",_lhs26368,_rhs26369);})();
if(j::truth(([&]()->V{V _logical26372=([&]()->V{V _logical26373=([&]()->V{V _logical26374=([&]()->V{V _lhs26375=_v_21663_sx;V _rhs26376=V(0.0);return j::binary(">=",_lhs26375,_rhs26376);})();return j::truth(_logical26374)?([&]()->V{V _lhs26377=_v_21663_sx;V _rhs26378=_v_21628_cols.get();return j::binary("<",_lhs26377,_rhs26378);})():_logical26374;})();return j::truth(_logical26373)?j::unary("!",([&]()->V{V _logical26379=([&]()->V{V _logical26380=_v_21651_front;return j::truth(_logical26380)?([&]()->V{V _lhs26381=j::get(_v_21651_front,_v_21664_j);V _rhs26382=this->_v_20623_EMPTY.get();return V(!j::equal(_lhs26381,_rhs26382,true));})():_logical26380;})();return j::truth(_logical26379)?([&]()->V{V _lhs26383=j::get(_v_21651_front,_v_21664_j);V _rhs26384=j::get(j::get(_v_21650_under,this->_literals[160]),_v_21664_j);return V(j::equal(_lhs26383,_rhs26384,true));})():_logical26379;})()):_logical26373;})();return j::truth(_logical26372)?([&]()->V{V _logical26385=j::get(j::get(_v_21626_room.get(),this->_literals[71]),_v_21664_j);return !j::truth(_logical26385)?([&]()->V{V _logical26386=([&]()->V{V _lhs26387=_v_21662_inward;V _rhs26388=V(0.0);return j::binary("<",_lhs26387,_rhs26388);})();return j::truth(_logical26386)?j::get(j::get(_v_21626_room.get(),this->_literals[71]),([&]()->V{V _lhs26389=_v_21664_j;V _rhs26390=_v_21662_inward;return j::binary("+",_lhs26389,_rhs26390);})()):_logical26386;})():_logical26385;})():_logical26372;})())){(void)((_v_21660_behind=j::get(j::get(_v_21650_under,this->_literals[160]),_v_21664_j)));
}

}
else {(void)((_v_21660_behind=j::get(j::get(_v_21650_under,this->_literals[160]),_v_21652_i)));
}
_v_21665_d=([&]()->V{V _callee26399=this->_v_20630_clamp.get();return j::call(_callee26399,j::Args{([&]()->V{V _lhs26393=([&]()->V{V _lhs26395=([&]()->V{V _lhs26397=_v_21654_y;V _rhs26398=V(0.5);return j::binary("+",_lhs26397,_rhs26398);})();V _rhs26396=_v_21655_sy;return V(j::number(_lhs26395)-j::number(_rhs26396));})();V _rhs26394=_v_21637_depthRows.get();return V(j::number(_lhs26393)/j::number(_rhs26394));})()});})();
_v_21666_ripple=([&]()->V{V _lhs26400=([&]()->V{V _number26419=([&]()->V{V _lhs26420=([&]()->V{V _lhs26422=([&]()->V{V _lhs26424=_v_21653_x;V _rhs26425=V(0.45);return V(j::number(_lhs26424)*j::number(_rhs26425));})();V _rhs26423=([&]()->V{V _lhs26426=V(1.5);V _rhs26427=([&]()->V{V _number26432=([&]()->V{V _lhs26433=([&]()->V{V _lhs26435=_v_21654_y;V _rhs26436=V(0.7);return V(j::number(_lhs26435)*j::number(_rhs26436));})();V _rhs26434=_v_21646_w;return j::binary("+",_lhs26433,_rhs26434);})();return V(std::sin(j::number(_number26432)));})();return V(j::number(_lhs26426)*j::number(_rhs26427));})();return j::binary("+",_lhs26422,_rhs26423);})();V _rhs26421=_v_21646_w;return V(j::number(_lhs26420)-j::number(_rhs26421));})();return V(std::sin(j::number(_number26419)));})();V _rhs26401=([&]()->V{V _number26445=([&]()->V{V _lhs26446=([&]()->V{V _lhs26448=([&]()->V{V _lhs26450=_v_21654_y;V _rhs26451=V(1.1);return V(j::number(_lhs26450)*j::number(_rhs26451));})();V _rhs26449=([&]()->V{V _lhs26452=_v_21653_x;V _rhs26453=V(0.12);return V(j::number(_lhs26452)*j::number(_rhs26453));})();return V(j::number(_lhs26448)-j::number(_rhs26449));})();V _rhs26447=_v_21646_w;return j::binary("+",_lhs26446,_rhs26447);})();return V(std::sin(j::number(_number26445)));})();return V(j::number(_lhs26400)*j::number(_rhs26401));})();
_v_21667_v=([&]()->V{V _callee26471=this->_v_20630_clamp.get();return j::call(_callee26471,j::Args{([&]()->V{V _lhs26454=([&]()->V{V _lhs26456=([&]()->V{V _lhs26458=V(0.2);V _rhs26459=([&]()->V{V _lhs26460=V(0.74);V _rhs26461=_v_21665_d;return V(j::number(_lhs26460)*j::number(_rhs26461));})();return j::binary("+",_lhs26458,_rhs26459);})();V _rhs26457=([&]()->V{V _lhs26462=([&]()->V{V _lhs26464=_v_21621_texture.get();V _rhs26465=V(0.3);return V(j::number(_lhs26464)*j::number(_rhs26465));})();V _rhs26463=_v_21666_ripple;return V(j::number(_lhs26462)*j::number(_rhs26463));})();return j::binary("+",_lhs26456,_rhs26457);})();V _rhs26455=([&]()->V{V _lhs26466=V(0.24);V _rhs26467=([&]()->V{V _lhs26468=([&]()->V{V _callee26470=this->_v_20634_hash.get();return j::call(_callee26470,j::Args{_v_21653_x,_v_21654_y,V(5.0)});})();V _rhs26469=V(0.5);return V(j::number(_lhs26468)-j::number(_rhs26469));})();return V(j::number(_lhs26466)*j::number(_rhs26467));})();return j::binary("+",_lhs26454,_rhs26455);})(),V(0.0),V(0.999)});})();
_v_21668_shade=([&]()->V{V _number26478=([&]()->V{V _lhs26479=([&]()->V{V _lhs26481=V(1.0);V _rhs26482=_v_21667_v;return V(j::number(_lhs26481)-j::number(_rhs26482));})();V _rhs26480=([&]()->V{V _lhs26483=this->_v_21611_SHADES.get();V _rhs26484=V(2.0);return V(j::number(_lhs26483)-j::number(_rhs26484));})();return V(j::number(_lhs26479)*j::number(_rhs26480));})();return V(std::floor(j::number(_number26478)+.5));})();
if(j::truth(([&]()->V{V _logical26485=([&]()->V{V _lhs26486=_v_21660_behind;V _rhs26487=this->_v_20623_EMPTY.get();return V(!j::equal(_lhs26486,_rhs26487,true));})();return j::truth(_logical26485)?([&]()->V{V _lhs26488=_v_21660_behind;V _rhs26489=this->_v_21580_SPACE.get();return V(!j::equal(_lhs26488,_rhs26489,true));})():_logical26485;})())){
(void)((_v_21656_ch=_v_21660_behind));
(void)((_v_21657_col=([&]()->V{V _receiver26492=_v_21644_pt;V _method26493=this->_literals[195];V _method=j::get(_receiver26492,_method26493);j::Args _params26494=j::Args{_v_21668_shade};return j::call(_method,_params26494,_receiver26492);})()));

}
else {
(void)((_v_21656_ch=j::get(_v_21623_body.get(),([&]()->V{V _number26498=([&]()->V{V _lhs26499=_v_21667_v;V _rhs26500=j::get(_v_21623_body.get(),this->_literals[19]);return V(j::number(_lhs26499)*j::number(_rhs26500));})();return V(std::floor(j::number(_number26498)));})())));
(void)((_v_21657_col=([&]()->V{V _receiver26502=_v_21644_pt;V _method26503=this->_literals[195];V _method=j::get(_receiver26502,_method26503);j::Args _params26504=j::Args{_v_21668_shade};return j::call(_method,_params26504,_receiver26502);})()));

}


}

}
(void)(([&]()->V{V _receiver26505=_v_21645_s;V _method26506=this->_literals[196];V _method=j::get(_receiver26505,_method26506);j::Args _params26507=j::Args{_v_21652_i,_v_21656_ch,_v_21657_col};return j::call(_method,_params26507,_receiver26505);})());

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_21669_glass.get()=j::function([=](const j::Args &_args_fn21670,const V &_receiver_fn21670,const V &_self_fn21670) mutable ->V{
V _v_21671_o;
_v_21671_o=_args_fn21670[0];
{
V _v_21672_p;
V _v_21673_colors;
j::Cell _v_21674_highlight;
j::Cell _v_21675_period;
_v_21672_p=([&]()->V{V _callee26510=this->_v_20652_optionsOf.get();return j::call(_callee26510,j::Args{this->_literals[197],_v_21671_o,([&]()->V{j::Args _array26509;_array26509.push_back(this->_literals[98]);_array26509.push_back(this->_literals[198]);_array26509.push_back(this->_literals[175]);return j::array(std::move(_array26509));})()});})();
_v_21673_colors=([&]()->V{V _callee26511=this->_v_20717_colorsOf.get();return j::call(_callee26511,j::Args{this->_literals[199],j::get(_v_21672_p,this->_literals[98]),this->_literals[200],V(3.0)});})();
_v_21674_highlight.get()=([&]()->V{V _callee26512=this->_v_20696_boolOf.get();return j::call(_callee26512,j::Args{this->_literals[201],j::get(_v_21672_p,this->_literals[198]),V(true)});})();
_v_21675_period.get()=([&]()->V{V _callee26513=this->_v_20682_periodOf.get();return j::call(_callee26513,j::Args{this->_literals[202],j::get(_v_21672_p,this->_literals[175]),V(4.0)});})();
return ([&]()->V{V _callee26831=this->_v_21571_makeMaterial.get();return j::call(_callee26831,j::Args{this->_literals[200],_v_21673_colors,(j::truth(_v_21674_highlight.get())?_v_21675_period.get():j::builtin("undefined")),j::function([=](const j::Args &_args_fn21676,const V &_receiver_fn21676,const V &_self_fn21676) mutable ->V{
j::Cell _v_21677_c;
_v_21677_c.get()=_args_fn21676[0];
{
j::Cell _v_21678_cols;
j::Cell _v_21679_cav;
j::Cell _v_21680_vessel;
j::Cell _v_21681_cells;
j::Cell _v_21682_chars;
j::Cell _v_21683_roles;
j::Cell _v_21684_add;
j::Cell _v_21689_line;
V _v_21697_floor;
V _v_21698_rimRows;
j::Cell _v_21717_streak;
V _v_21718_room;
V _pattern26514=_v_21677_c.get();
_v_21678_cols.get()=j::get(_pattern26514,this->_literals[46]);
_v_21679_cav.get()=j::get(_v_21677_c.get(),this->_literals[59]);
_v_21680_vessel.get()=j::unary("!",j::unary("!",([&]()->V{V _logical26515=([&]()->V{V _logical26516=j::get(_v_21677_c.get(),this->_literals[58]);return j::truth(_logical26516)?_v_21679_cav.get():_logical26516;})();return j::truth(_logical26515)?j::get(j::get(_v_21679_cav.get(),this->_literals[150]),this->_literals[19]):_logical26515;})()));
_v_21681_cells.get()=([&]()->V{j::Args _array26517;return j::array(std::move(_array26517));})();
_v_21682_chars.get()=([&]()->V{j::Args _array26518;return j::array(std::move(_array26518));})();
_v_21683_roles.get()=([&]()->V{j::Args _array26519;return j::array(std::move(_array26519));})();
_v_21684_add.get()=j::function([=](const j::Args &_args_fn21685,const V &_receiver_fn21685,const V &_self_fn21685) mutable ->V{
V _v_21686_i;
V _v_21687_ch;
V _v_21688_role;
_v_21686_i=_args_fn21685[0];
_v_21687_ch=_args_fn21685[1];
_v_21688_role=_args_fn21685[2];
{
(void)((([&]()->V{V _receiver26520=_v_21681_cells.get();V _method26521=this->_literals[149];V _method=j::get(_receiver26520,_method26521);j::Args _params26522=j::Args{_v_21686_i};return j::call(_method,_params26522,_receiver26520);})(),([&]()->V{V _receiver26526=_v_21682_chars.get();V _method26527=this->_literals[149];V _method=j::get(_receiver26526,_method26527);j::Args _params26528=j::Args{(j::truth(([&]()->V{V _lhs26523=j::unary("typeof",_v_21687_ch);V _rhs26524=this->_literals[4];return V(j::equal(_lhs26523,_rhs26524,true));})())?([&]()->V{V _callee26525=this->_v_21577_code.get();return j::call(_callee26525,j::Args{_v_21687_ch});})():_v_21687_ch)};return j::call(_method,_params26528,_receiver26526);})(),([&]()->V{V _receiver26529=_v_21683_roles.get();V _method26530=this->_literals[149];V _method=j::get(_receiver26529,_method26530);j::Args _params26531=j::Args{_v_21688_role};return j::call(_method,_params26531,_receiver26529);})()));

}

return V{};
},3);
_v_21689_line.get()=([&]()->V{V _receiver26532=_v_21677_c.get();V _method26533=this->_literals[155];V _method=j::get(_receiver26532,_method26533);j::Args _params26534=j::Args{};return j::call(_method,_params26534,_receiver26532);})();
(void)(([&]()->V{V _receiver26577=j::get(_v_21689_line.get(),this->_literals[159]);V _method26578=this->_literals[66];V _method=j::get(_receiver26577,_method26578);j::Args _params26579=j::Args{j::function([=](const j::Args &_args_fn21690,const V &_receiver_fn21690,const V &_self_fn21690) mutable ->V{
V _v_21691_i;
V _v_21692_k;
_v_21691_i=_args_fn21690[0];
_v_21692_k=_args_fn21690[1];
{
V _v_21693_x;
V _v_21694_y;
V _v_21695_rim;
V _v_21696_foot;
_v_21693_x=([&]()->V{V _lhs26535=_v_21691_i;V _rhs26536=_v_21678_cols.get();return V(std::fmod(j::number(_lhs26535),j::number(_rhs26536)));})();
_v_21694_y=([&]()->V{V _lhs26537=([&]()->V{V _lhs26539=_v_21691_i;V _rhs26540=_v_21693_x;return V(j::number(_lhs26539)-j::number(_rhs26540));})();V _rhs26538=_v_21678_cols.get();return V(j::number(_lhs26537)/j::number(_rhs26538));})();
if(j::truth(([&]()->V{V _chain26541=_v_21679_cav.get();if(j::nullish(_chain26541))return V{};V _chain26542=j::get(_chain26541,this->_literals[71]);V _chain26543=j::get(_chain26542,_v_21691_i);return _chain26543;})())){return V{};
}
if(j::truth(([&]()->V{V _logical26544=([&]()->V{V _logical26545=([&]()->V{V _logical26546=j::get(_v_21677_c.get(),this->_literals[58]);return j::truth(_logical26546)?_v_21679_cav.get():_logical26546;})();return j::truth(_logical26545)?j::unary("!",j::get(j::get(_v_21677_c.get(),this->_literals[71]),_v_21691_i)):_logical26545;})();return j::truth(_logical26544)?([&]()->V{V _logical26547=j::get(j::get(_v_21679_cav.get(),this->_literals[71]),([&]()->V{V _lhs26548=_v_21691_i;V _rhs26549=_v_21678_cols.get();return j::binary("+",_lhs26548,_rhs26549);})());return !j::truth(_logical26547)?([&]()->V{V _logical26550=([&]()->V{V _logical26551=j::get(j::get(_v_21677_c.get(),this->_literals[153]),_v_21691_i);return j::truth(_logical26551)?([&]()->V{V _lhs26552=j::get(j::get(_v_21679_cav.get(),this->_literals[33]),_v_21693_x);V _rhs26553=V(0.0);return j::binary(">=",_lhs26552,_rhs26553);})():_logical26551;})();return j::truth(_logical26550)?([&]()->V{V _lhs26554=j::get(j::get(_v_21679_cav.get(),this->_literals[33]),_v_21693_x);V _rhs26555=([&]()->V{V _lhs26556=_v_21694_y;V _rhs26557=V(1.0);return j::binary("+",_lhs26556,_rhs26557);})();return j::binary("<=",_lhs26554,_rhs26555);})():_logical26550;})():_logical26547;})():_logical26544;})())){return V{};
}
_v_21695_rim=([&]()->V{V _logical26558=([&]()->V{V _logical26559=([&]()->V{V _logical26560=([&]()->V{V _logical26561=j::get(_v_21677_c.get(),this->_literals[58]);return j::truth(_logical26561)?_v_21679_cav.get():_logical26561;})();return j::truth(_logical26560)?j::get(j::get(_v_21677_c.get(),this->_literals[152]),_v_21691_i):_logical26560;})();return j::truth(_logical26559)?([&]()->V{V _lhs26562=_v_21694_y;V _rhs26563=j::get(j::get(_v_21677_c.get(),this->_literals[33]),_v_21693_x);return V(j::equal(_lhs26562,_rhs26563,true));})():_logical26559;})();return j::truth(_logical26558)?([&]()->V{V _lhs26564=j::get(j::get(_v_21677_c.get(),this->_literals[164]),_v_21691_i);V _rhs26565=V(0.3);return j::binary(">",_lhs26564,_rhs26565);})():_logical26558;})();
_v_21696_foot=([&]()->V{V _logical26566=([&]()->V{V _logical26567=_v_21680_vessel.get();return j::truth(_logical26567)?j::get(j::get(_v_21677_c.get(),this->_literals[152]),_v_21691_i):_logical26567;})();return j::truth(_logical26566)?([&]()->V{V _lhs26568=_v_21694_y;V _rhs26569=([&]()->V{V _lhs26570=j::get(_v_21677_c.get(),this->_literals[37]);V _rhs26571=V(1.0);return V(j::number(_lhs26570)-j::number(_rhs26571));})();return V(j::equal(_lhs26568,_rhs26569,true));})():_logical26566;})();
(void)(([&]()->V{V _callee26576=_v_21684_add.get();return j::call(_callee26576,j::Args{_v_21691_i,(j::truth(_v_21695_rim)?this->_literals[169]:(j::truth(_v_21696_foot)?(j::truth(([&]()->V{V _lhs26572=_v_21693_x;V _rhs26573=j::get(j::get(_v_21677_c.get(),this->_literals[28]),_v_21694_y);return V(j::equal(_lhs26572,_rhs26573,true));})())?this->_literals[96]:(j::truth(([&]()->V{V _lhs26574=_v_21693_x;V _rhs26575=j::get(j::get(_v_21677_c.get(),this->_literals[31]),_v_21694_y);return V(j::equal(_lhs26574,_rhs26575,true));})())?this->_literals[95]:this->_literals[168])):j::get(j::get(_v_21689_line.get(),this->_literals[160]),_v_21692_k))),V(0.0)});})());

}

return V{};
},2)};return j::call(_method,_params26579,_receiver26577);})());
_v_21697_floor=j::unary("-",V(1.0));
_v_21698_rimRows=V(0.0);
if(j::truth(_v_21679_cav.get())){{V _v_21699_x;
_v_21699_x=j::get(_v_21679_cav.get(),this->_literals[30]);
for(;j::truth(([&]()->V{V _lhs26580=_v_21699_x;V _rhs26581=j::get(_v_21679_cav.get(),this->_literals[32]);return j::binary("<",_lhs26580,_rhs26581);})());(void)(j::increment(_v_21699_x,1,false))){(void)((_v_21697_floor=([&]()->V{V _receiver26585=j::builtin("Math");V _method26586=this->_literals[51];V _method=j::get(_receiver26585,_method26586);j::Args _params26587=j::Args{_v_21697_floor,j::get(j::get(_v_21679_cav.get(),this->_literals[36]),_v_21699_x)};return j::call(_method,_params26587,_receiver26585);})()));
}}
}
if(j::truth(([&]()->V{V _logical26588=_v_21680_vessel.get();return j::truth(_logical26588)?_v_21679_cav.get():_logical26588;})())){
V _v_21700_y;
V _v_21701_l;
V _v_21702_r;
_v_21700_y=j::get(_v_21679_cav.get(),this->_literals[35]);
_v_21701_l=j::get(j::get(_v_21679_cav.get(),this->_literals[28]),_v_21700_y);
_v_21702_r=j::get(j::get(_v_21679_cav.get(),this->_literals[31]),_v_21700_y);
if(j::truth(([&]()->V{V _logical26589=([&]()->V{V _logical26590=([&]()->V{V _logical26591=([&]()->V{V _lhs26592=_v_21701_l;V _rhs26593=V(0.0);return j::binary(">=",_lhs26592,_rhs26593);})();return j::truth(_logical26591)?([&]()->V{V _lhs26594=([&]()->V{V _lhs26596=([&]()->V{V _lhs26598=_v_21702_r;V _rhs26599=_v_21701_l;return V(j::number(_lhs26598)-j::number(_rhs26599));})();V _rhs26597=V(1.0);return j::binary("+",_lhs26596,_rhs26597);})();V _rhs26595=V(6.0);return j::binary(">=",_lhs26594,_rhs26595);})():_logical26591;})();return j::truth(_logical26590)?([&]()->V{V _lhs26600=([&]()->V{V _lhs26602=_v_21697_floor;V _rhs26603=_v_21700_y;return V(j::number(_lhs26602)-j::number(_rhs26603));})();V _rhs26601=V(5.0);return j::binary(">=",_lhs26600,_rhs26601);})():_logical26590;})();return j::truth(_logical26589)?([&]()->V{V _lhs26604=j::get(j::get(_v_21679_cav.get(),this->_literals[28]),([&]()->V{V _lhs26606=_v_21700_y;V _rhs26607=V(1.0);return j::binary("+",_lhs26606,_rhs26607);})());V _rhs26605=V(0.0);return j::binary(">=",_lhs26604,_rhs26605);})():_logical26589;})())){
V _v_21704_l1;
V _v_21705_r1;
V _v_21706_n;
V _v_21707_run;
V _v_21708_dots;
(void)((_v_21698_rimRows=V(2.0)));
{V _v_21703_x;
_v_21703_x=_v_21701_l;
for(;j::truth(([&]()->V{V _lhs26609=_v_21703_x;V _rhs26610=_v_21702_r;return j::binary("<=",_lhs26609,_rhs26610);})());(void)(j::increment(_v_21703_x,1,false))){(void)(([&]()->V{V _callee26615=_v_21684_add.get();return j::call(_callee26615,j::Args{([&]()->V{V _lhs26611=([&]()->V{V _lhs26613=_v_21700_y;V _rhs26614=_v_21678_cols.get();return V(j::number(_lhs26613)*j::number(_rhs26614));})();V _rhs26612=_v_21703_x;return j::binary("+",_lhs26611,_rhs26612);})(),this->_literals[171],V(0.0)});})());
}}
_v_21704_l1=j::get(j::get(_v_21679_cav.get(),this->_literals[28]),([&]()->V{V _lhs26616=_v_21700_y;V _rhs26617=V(1.0);return j::binary("+",_lhs26616,_rhs26617);})());
_v_21705_r1=j::get(j::get(_v_21679_cav.get(),this->_literals[31]),([&]()->V{V _lhs26618=_v_21700_y;V _rhs26619=V(1.0);return j::binary("+",_lhs26618,_rhs26619);})());
_v_21706_n=([&]()->V{V _lhs26620=([&]()->V{V _lhs26622=_v_21705_r1;V _rhs26623=_v_21704_l1;return V(j::number(_lhs26622)-j::number(_rhs26623));})();V _rhs26621=V(1.0);return j::binary("+",_lhs26620,_rhs26621);})();
_v_21707_run=([&]()->V{V _receiver26631=j::builtin("Math");V _method26632=this->_literals[51];V _method=j::get(_receiver26631,_method26632);j::Args _params26633=j::Args{V(1.0),([&]()->V{V _number26626=([&]()->V{V _lhs26627=_v_21706_n;V _rhs26628=V(0.14);return V(j::number(_lhs26627)*j::number(_rhs26628));})();return V(std::floor(j::number(_number26626)+.5));})()};return j::call(_method,_params26633,_receiver26631);})();
_v_21708_dots=(j::truth(([&]()->V{V _lhs26634=_v_21706_n;V _rhs26635=V(14.0);return j::binary(">=",_lhs26634,_rhs26635);})())?V(2.0):V(1.0));
{V _v_21709_x;
_v_21709_x=_v_21704_l1;
for(;j::truth(([&]()->V{V _lhs26636=_v_21709_x;V _rhs26637=_v_21705_r1;return j::binary("<=",_lhs26636,_rhs26637);})());(void)(j::increment(_v_21709_x,1,false))){
V _v_21710_k;
_v_21710_k=([&]()->V{V _receiver26644=j::builtin("Math");V _method26645=this->_literals[52];V _method=j::get(_receiver26644,_method26645);j::Args _params26646=j::Args{([&]()->V{V _lhs26638=_v_21709_x;V _rhs26639=_v_21704_l1;return V(j::number(_lhs26638)-j::number(_rhs26639));})(),([&]()->V{V _lhs26640=_v_21705_r1;V _rhs26641=_v_21709_x;return V(j::number(_lhs26640)-j::number(_rhs26641));})()};return j::call(_method,_params26646,_receiver26644);})();
(void)(([&]()->V{V _callee26661=_v_21684_add.get();return j::call(_callee26661,j::Args{([&]()->V{V _lhs26647=([&]()->V{V _lhs26649=([&]()->V{V _lhs26651=_v_21700_y;V _rhs26652=V(1.0);return j::binary("+",_lhs26651,_rhs26652);})();V _rhs26650=_v_21678_cols.get();return V(j::number(_lhs26649)*j::number(_rhs26650));})();V _rhs26648=_v_21709_x;return j::binary("+",_lhs26647,_rhs26648);})(),(j::truth(([&]()->V{V _lhs26653=_v_21710_k;V _rhs26654=V(0.0);return V(j::equal(_lhs26653,_rhs26654,true));})())?this->_literals[170]:(j::truth(([&]()->V{V _lhs26655=_v_21710_k;V _rhs26656=_v_21707_run;return j::binary("<=",_lhs26655,_rhs26656);})())?this->_literals[171]:(j::truth(([&]()->V{V _lhs26657=_v_21710_k;V _rhs26658=([&]()->V{V _lhs26659=_v_21707_run;V _rhs26660=_v_21708_dots;return j::binary("+",_lhs26659,_rhs26660);})();return j::binary("<=",_lhs26657,_rhs26658);})())?this->_literals[169]:this->_literals[168]))),V(0.0)});})());

}
}

}


}

if(j::truth(([&]()->V{V _logical26662=_v_21679_cav.get();return j::truth(_logical26662)?j::unary("!",_v_21680_vessel.get()):_logical26662;})())){
{for(const auto &_item26663:j::elements(j::get(_v_21677_c.get(),this->_literals[150]))){V _v_21711_i;
_v_21711_i=_item26663;
{
V _v_21712_y;
_v_21712_y=([&]()->V{V _lhs26664=([&]()->V{V _lhs26666=_v_21711_i;V _rhs26667=([&]()->V{V _lhs26668=_v_21711_i;V _rhs26669=_v_21678_cols.get();return V(std::fmod(j::number(_lhs26668),j::number(_rhs26669)));})();return V(j::number(_lhs26666)-j::number(_rhs26667));})();V _rhs26665=_v_21678_cols.get();return V(j::number(_lhs26664)/j::number(_rhs26665));})();
if(j::truth(([&]()->V{V _logical26670=j::get(j::get(_v_21679_cav.get(),this->_literals[71]),_v_21711_i);return !j::truth(_logical26670)?j::get(j::get(_v_21677_c.get(),this->_literals[152]),_v_21711_i):_logical26670;})())){continue;
}
(void)(([&]()->V{V _callee26675=_v_21684_add.get();return j::call(_callee26675,j::Args{_v_21711_i,(j::truth(([&]()->V{V _lhs26671=_v_21712_y;V _rhs26672=([&]()->V{V _lhs26673=_v_21697_floor;V _rhs26674=V(1.0);return j::binary("+",_lhs26673,_rhs26674);})();return V(j::equal(_lhs26671,_rhs26672,true));})())?this->_literals[168]:this->_v_21580_SPACE.get()),V(2.0)});})());

}
}}

}

if(j::truth(_v_21680_vessel.get())){
{V _v_21713_y;
_v_21713_y=([&]()->V{V _lhs26676=_v_21697_floor;V _rhs26677=V(1.0);return j::binary("+",_lhs26676,_rhs26677);})();
for(;j::truth(([&]()->V{V _lhs26678=_v_21713_y;V _rhs26679=([&]()->V{V _lhs26680=j::get(_v_21677_c.get(),this->_literals[37]);V _rhs26681=V(1.0);return V(j::number(_lhs26680)-j::number(_rhs26681));})();return j::binary("<",_lhs26678,_rhs26679);})());(void)(j::increment(_v_21713_y,1,false))){
V _v_21714_l;
V _v_21715_r;
_v_21714_l=j::get(j::get(_v_21677_c.get(),this->_literals[28]),_v_21713_y);
_v_21715_r=j::get(j::get(_v_21677_c.get(),this->_literals[31]),_v_21713_y);
if(j::truth(([&]()->V{V _lhs26682=_v_21714_l;V _rhs26683=V(0.0);return j::binary("<",_lhs26682,_rhs26683);})())){continue;
}
(void)(([&]()->V{V _callee26692=_v_21684_add.get();return j::call(_callee26692,j::Args{([&]()->V{V _lhs26684=([&]()->V{V _lhs26686=_v_21713_y;V _rhs26687=_v_21678_cols.get();return V(j::number(_lhs26686)*j::number(_rhs26687));})();V _rhs26685=_v_21714_l;return j::binary("+",_lhs26684,_rhs26685);})(),(j::truth(([&]()->V{V _lhs26688=j::get(j::get(_v_21677_c.get(),this->_literals[28]),([&]()->V{V _lhs26690=_v_21713_y;V _rhs26691=V(1.0);return j::binary("+",_lhs26690,_rhs26691);})());V _rhs26689=_v_21714_l;return j::binary(">",_lhs26688,_rhs26689);})())?this->_literals[96]:this->_literals[97]),V(0.0)});})());
(void)(([&]()->V{V _callee26701=_v_21684_add.get();return j::call(_callee26701,j::Args{([&]()->V{V _lhs26693=([&]()->V{V _lhs26695=_v_21713_y;V _rhs26696=_v_21678_cols.get();return V(j::number(_lhs26695)*j::number(_rhs26696));})();V _rhs26694=_v_21715_r;return j::binary("+",_lhs26693,_rhs26694);})(),(j::truth(([&]()->V{V _lhs26697=j::get(j::get(_v_21677_c.get(),this->_literals[31]),([&]()->V{V _lhs26699=_v_21713_y;V _rhs26700=V(1.0);return j::binary("+",_lhs26699,_rhs26700);})());V _rhs26698=_v_21715_r;return j::binary("<",_lhs26697,_rhs26698);})())?this->_literals[95]:this->_literals[97]),V(0.0)});})());
{V _v_21716_x;
_v_21716_x=([&]()->V{V _lhs26702=_v_21714_l;V _rhs26703=V(1.0);return j::binary("+",_lhs26702,_rhs26703);})();
for(;j::truth(([&]()->V{V _lhs26704=_v_21716_x;V _rhs26705=_v_21715_r;return j::binary("<",_lhs26704,_rhs26705);})());(void)(j::increment(_v_21716_x,1,false))){(void)(([&]()->V{V _callee26710=_v_21684_add.get();return j::call(_callee26710,j::Args{([&]()->V{V _lhs26706=([&]()->V{V _lhs26708=_v_21713_y;V _rhs26709=_v_21678_cols.get();return V(j::number(_lhs26708)*j::number(_rhs26709));})();V _rhs26707=_v_21716_x;return j::binary("+",_lhs26706,_rhs26707);})(),this->_literals[203],V(2.0)});})());
}}

}
}

}

_v_21717_streak.get()=([&]()->V{j::Args _array26711;return j::array(std::move(_array26711));})();
_v_21718_room=([&]()->V{V _logical26712=_v_21679_cav.get();return j::nullish(_logical26712)?_v_21677_c.get():_logical26712;})();
if(j::truth(([&]()->V{V _logical26713=_v_21674_highlight.get();return j::truth(_logical26713)?([&]()->V{V _lhs26714=([&]()->V{V _lhs26716=j::get(_v_21718_room,this->_literals[32]);V _rhs26717=j::get(_v_21718_room,this->_literals[30]);return V(j::number(_lhs26716)-j::number(_rhs26717));})();V _rhs26715=V(5.0);return j::binary(">=",_lhs26714,_rhs26715);})():_logical26713;})())){
V _v_21719_h;
V _v_21720_widest;
V _v_21722_inset;
V _v_21723_from;
V _v_21724_to;
_v_21719_h=([&]()->V{V _lhs26718=j::get(_v_21718_room,this->_literals[37]);V _rhs26719=j::get(_v_21718_room,this->_literals[35]);return V(j::number(_lhs26718)-j::number(_rhs26719));})();
_v_21720_widest=V(0.0);
{V _v_21721_y;
_v_21721_y=j::get(_v_21718_room,this->_literals[35]);
for(;j::truth(([&]()->V{V _lhs26720=_v_21721_y;V _rhs26721=j::get(_v_21718_room,this->_literals[37]);return j::binary("<",_lhs26720,_rhs26721);})());(void)(j::increment(_v_21721_y,1,false))){if(j::truth(([&]()->V{V _lhs26722=j::get(j::get(_v_21718_room,this->_literals[28]),_v_21721_y);V _rhs26723=V(0.0);return j::binary(">=",_lhs26722,_rhs26723);})())){(void)((_v_21720_widest=([&]()->V{V _receiver26731=j::builtin("Math");V _method26732=this->_literals[51];V _method=j::get(_receiver26731,_method26732);j::Args _params26733=j::Args{_v_21720_widest,([&]()->V{V _lhs26725=([&]()->V{V _lhs26727=j::get(j::get(_v_21718_room,this->_literals[31]),_v_21721_y);V _rhs26728=j::get(j::get(_v_21718_room,this->_literals[28]),_v_21721_y);return V(j::number(_lhs26727)-j::number(_rhs26728));})();V _rhs26726=V(1.0);return j::binary("+",_lhs26725,_rhs26726);})()};return j::call(_method,_params26733,_receiver26731);})()));
}
}}
_v_21722_inset=(j::truth(([&]()->V{V _logical26734=_v_21680_vessel.get();return j::truth(_logical26734)?([&]()->V{V _lhs26735=_v_21720_widest;V _rhs26736=V(12.0);return j::binary(">=",_lhs26735,_rhs26736);})():_logical26734;})())?V(2.0):V(1.0));
_v_21723_from=(j::truth(_v_21680_vessel.get())?([&]()->V{V _lhs26737=j::get(_v_21718_room,this->_literals[35]);V _rhs26738=_v_21698_rimRows;return j::binary("+",_lhs26737,_rhs26738);})():([&]()->V{V _lhs26739=j::get(_v_21718_room,this->_literals[35]);V _rhs26740=([&]()->V{V _receiver26748=j::builtin("Math");V _method26749=this->_literals[51];V _method=j::get(_receiver26748,_method26749);j::Args _params26750=j::Args{V(1.0),([&]()->V{V _number26743=([&]()->V{V _lhs26744=_v_21719_h;V _rhs26745=V(0.15);return V(j::number(_lhs26744)*j::number(_rhs26745));})();return V(std::floor(j::number(_number26743)+.5));})()};return j::call(_method,_params26750,_receiver26748);})();return j::binary("+",_lhs26739,_rhs26740);})());
_v_21724_to=(j::truth(_v_21680_vessel.get())?([&]()->V{V _lhs26751=_v_21697_floor;V _rhs26752=V(1.0);return j::binary("+",_lhs26751,_rhs26752);})():([&]()->V{V _lhs26753=j::get(_v_21718_room,this->_literals[35]);V _rhs26754=([&]()->V{V _number26757=([&]()->V{V _lhs26758=_v_21719_h;V _rhs26759=V(0.7);return V(j::number(_lhs26758)*j::number(_rhs26759));})();return V(std::floor(j::number(_number26757)+.5));})();return j::binary("+",_lhs26753,_rhs26754);})());
{V _v_21725_y;
_v_21725_y=_v_21723_from;
for(;j::truth(([&]()->V{V _lhs26760=_v_21725_y;V _rhs26761=_v_21724_to;return j::binary("<",_lhs26760,_rhs26761);})());(void)(j::increment(_v_21725_y,1,false))){
V _v_21726_l;
_v_21726_l=j::get(j::get(_v_21718_room,this->_literals[28]),_v_21725_y);
if(j::truth(([&]()->V{V _logical26762=([&]()->V{V _lhs26763=_v_21726_l;V _rhs26764=V(0.0);return j::binary(">=",_lhs26763,_rhs26764);})();return j::truth(_logical26762)?([&]()->V{V _lhs26765=([&]()->V{V _lhs26767=([&]()->V{V _lhs26769=j::get(j::get(_v_21718_room,this->_literals[31]),_v_21725_y);V _rhs26770=_v_21726_l;return V(j::number(_lhs26769)-j::number(_rhs26770));})();V _rhs26768=V(1.0);return j::binary("+",_lhs26767,_rhs26768);})();V _rhs26766=([&]()->V{V _lhs26771=_v_21720_widest;V _rhs26772=V(0.6);return V(j::number(_lhs26771)*j::number(_rhs26772));})();return j::binary(">=",_lhs26765,_rhs26766);})():_logical26762;})())){(void)(([&]()->V{V _receiver26779=_v_21717_streak.get();V _method26780=this->_literals[149];V _method=j::get(_receiver26779,_method26780);j::Args _params26781=j::Args{([&]()->V{V _lhs26773=([&]()->V{V _lhs26775=([&]()->V{V _lhs26777=_v_21725_y;V _rhs26778=_v_21678_cols.get();return V(j::number(_lhs26777)*j::number(_rhs26778));})();V _rhs26776=_v_21726_l;return j::binary("+",_lhs26775,_rhs26776);})();V _rhs26774=_v_21722_inset;return j::binary("+",_lhs26773,_rhs26774);})()};return j::call(_method,_params26781,_receiver26779);})());
}

}
}

}

return j::function([=](const j::Args &_args_fn21727,const V &_receiver_fn21727,const V &_self_fn21727) mutable ->V{
V _v_21728_t;
j::Cell _v_21729_pt;
_v_21728_t=_args_fn21727[0];
_v_21729_pt.get()=_args_fn21727[1];
{
j::Cell _v_21730_s;
j::Cell _v_21732_mark;
j::Cell _v_21733_g;
V _pattern26782=_v_21729_pt.get();
_v_21730_s.get()=j::get(_pattern26782,this->_literals[191]);
{V _v_21731_k;
_v_21731_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs26783=_v_21731_k;V _rhs26784=j::get(_v_21681_cells.get(),this->_literals[19]);return j::binary("<",_lhs26783,_rhs26784);})());(void)(j::increment(_v_21731_k,1,false))){(void)(([&]()->V{V _receiver26788=_v_21730_s.get();V _method26789=this->_literals[196];V _method=j::get(_receiver26788,_method26789);j::Args _params26790=j::Args{j::get(_v_21681_cells.get(),_v_21731_k),j::get(_v_21682_chars.get(),_v_21731_k),([&]()->V{V _receiver26785=_v_21729_pt.get();V _method26786=this->_literals[195];V _method=j::get(_receiver26785,_method26786);j::Args _params26787=j::Args{j::get(_v_21683_roles.get(),_v_21731_k)};return j::call(_method,_params26787,_receiver26785);})()};return j::call(_method,_params26790,_receiver26788);})());
}}
if(j::truth(j::unary("!",j::get(_v_21717_streak.get(),this->_literals[19])))){return V{};
}
_v_21732_mark.get()=([&]()->V{V _receiver26791=this->_v_21610_highlights.get();V _method26792=this->_literals[157];V _method=j::get(_receiver26791,_method26792);j::Args _params26793=j::Args{_v_21730_s.get()};return j::call(_method,_params26793,_receiver26791);})();
if(j::truth(([&]()->V{V _logical26794=j::unary("!",_v_21732_mark.get());return !j::truth(_logical26794)?([&]()->V{V _lhs26795=j::get(_v_21732_mark.get(),this->_literals[19]);V _rhs26796=j::get(j::get(_v_21730_s.get(),this->_literals[160]),this->_literals[19]);return V(!j::equal(_lhs26795,_rhs26796,true));})():_logical26794;})())){(void)(([&]()->V{V _receiver26799=this->_v_21610_highlights.get();V _method26800=this->_literals[162];V _method=j::get(_receiver26799,_method26800);j::Args _params26801=j::Args{_v_21730_s.get(),(_v_21732_mark.get()=([&]()->V{V _callee26798=j::builtin("Uint16Array");return j::construct(_callee26798,j::Args{j::get(j::get(_v_21730_s.get(),this->_literals[160]),this->_literals[19])});})())};return j::call(_method,_params26801,_receiver26799);})());
}
_v_21733_g.get()=([&]()->V{V _lhs26802=([&]()->V{V _lhs26804=([&]()->V{V _callee26808=this->_v_20633_fract.get();return j::call(_callee26808,j::Args{([&]()->V{V _lhs26806=_v_21728_t;V _rhs26807=_v_21675_period.get();return V(j::number(_lhs26806)/j::number(_rhs26807));})()});})();V _rhs26805=([&]()->V{V _lhs26809=j::get(_v_21717_streak.get(),this->_literals[19]);V _rhs26810=V(6.0);return j::binary("+",_lhs26809,_rhs26810);})();return V(j::number(_lhs26804)*j::number(_rhs26805));})();V _rhs26803=V(3.0);return V(j::number(_lhs26802)-j::number(_rhs26803));})();
(void)(([&]()->V{V _receiver26828=_v_21717_streak.get();V _method26829=this->_literals[66];V _method=j::get(_receiver26828,_method26829);j::Args _params26830=j::Args{j::function([=](const j::Args &_args_fn21734,const V &_receiver_fn21734,const V &_self_fn21734) mutable ->V{
V _v_21735_i;
V _v_21736_k;
_v_21735_i=_args_fn21734[0];
_v_21736_k=_args_fn21734[1];
{
V _v_21737_near;
V _v_21738_ch;
_v_21737_near=([&]()->V{V _lhs26811=([&]()->V{V _number26815=([&]()->V{V _lhs26816=_v_21736_k;V _rhs26817=_v_21733_g.get();return V(j::number(_lhs26816)-j::number(_rhs26817));})();return V(std::fabs(j::number(_number26815)));})();V _rhs26812=V(0.75);return j::binary("<",_lhs26811,_rhs26812);})();
_v_21738_ch=([&]()->V{V _callee26818=this->_v_21577_code.get();return j::call(_callee26818,j::Args{(j::truth(_v_21680_vessel.get())?(j::truth(_v_21737_near)?this->_literals[204]:this->_literals[97]):(j::truth(_v_21737_near)?this->_literals[97]:this->_literals[170]))});})();
(void)(([&]()->V{V _receiver26822=_v_21730_s.get();V _method26823=this->_literals[196];V _method=j::get(_receiver26822,_method26823);j::Args _params26824=j::Args{_v_21735_i,_v_21738_ch,([&]()->V{V _receiver26819=_v_21729_pt.get();V _method26820=this->_literals[195];V _method=j::get(_receiver26819,_method26820);j::Args _params26821=j::Args{V(1.0)};return j::call(_method,_params26821,_receiver26819);})()};return j::call(_method,_params26824,_receiver26822);})());
(void)(([&]()->V{V _base26826=_v_21732_mark.get();V _key26827=_v_21735_i;V _assign26825=_v_21738_ch;return j::put(_base26826,_key26827,_assign26825);})());

}

return V{};
},2)};return j::call(_method,_params26830,_receiver26828);})());

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_21739_fire.get()=j::function([=](const j::Args &_args_fn21740,const V &_receiver_fn21740,const V &_self_fn21740) mutable ->V{
V _v_21741_o;
_v_21741_o=_args_fn21740[0];
{
V _v_21742_p;
V _v_21743_colors;
j::Cell _v_21744_period;
j::Cell _v_21745_heat;
j::Cell _v_21746_chars;
j::Cell _v_21747_glow;
_v_21742_p=([&]()->V{V _callee26833=this->_v_20652_optionsOf.get();return j::call(_callee26833,j::Args{this->_literals[205],_v_21741_o,([&]()->V{j::Args _array26832;_array26832.push_back(this->_literals[98]);_array26832.push_back(this->_literals[175]);_array26832.push_back(this->_literals[206]);_array26832.push_back(this->_literals[207]);_array26832.push_back(this->_literals[208]);return j::array(std::move(_array26832));})()});})();
_v_21743_colors=([&]()->V{V _callee26834=this->_v_20717_colorsOf.get();return j::call(_callee26834,j::Args{this->_literals[209],j::get(_v_21742_p,this->_literals[98]),this->_literals[210],V(5.0)});})();
_v_21744_period.get()=([&]()->V{V _callee26835=this->_v_20682_periodOf.get();return j::call(_callee26835,j::Args{this->_literals[211],j::get(_v_21742_p,this->_literals[175]),V(2.0)});})();
_v_21745_heat.get()=([&]()->V{V _callee26837=this->_v_20672_wordOrNumber.get();return j::call(_callee26837,j::Args{this->_literals[212],j::get(_v_21742_p,this->_literals[206]),([&]()->V{V _obj26836=j::object();j::put(_obj26836,this->_literals[185],V(0.6));j::put(_obj26836,this->_literals[213],V(1.0));j::put(_obj26836,this->_literals[214],V(1.6));return _obj26836;})(),V(1.0),V(0.2),V(2.0)});})();
_v_21746_chars.get()=([&]()->V{V _callee26838=this->_v_20711_rampOf.get();return j::call(_callee26838,j::Args{this->_literals[215],j::get(_v_21742_p,this->_literals[207]),this->_literals[216]});})();
_v_21747_glow.get()=([&]()->V{V _callee26840=this->_v_20672_wordOrNumber.get();return j::call(_callee26840,j::Args{this->_literals[217],j::get(_v_21742_p,this->_literals[208]),([&]()->V{V _obj26839=j::object();j::put(_obj26839,this->_literals[218],V(0.0));j::put(_obj26839,this->_literals[219],V(1.0));j::put(_obj26839,this->_literals[85],V(2.0));j::put(_obj26839,this->_literals[220],V(4.0));return _obj26839;})(),V(0.0),V(0.0),V(6.0)});})();
return ([&]()->V{V _callee26993=this->_v_21571_makeMaterial.get();return j::call(_callee26993,j::Args{this->_literals[210],_v_21743_colors,_v_21744_period.get(),j::function([=](const j::Args &_args_fn21748,const V &_receiver_fn21748,const V &_self_fn21748) mutable ->V{
j::Cell _v_21749_c;
_v_21749_c.get()=_args_fn21748[0];
{
j::Cell _v_21750_cols;
j::Cell _v_21751_h;
j::Cell _v_21752_md;
j::Cell _v_21753_scale;
j::Cell _v_21754_halo;
V _pattern26841=_v_21749_c.get();
_v_21750_cols.get()=j::get(_pattern26841,this->_literals[46]);
_v_21751_h.get()=([&]()->V{V _receiver26846=j::builtin("Math");V _method26847=this->_literals[51];V _method=j::get(_receiver26846,_method26847);j::Args _params26848=j::Args{V(1.0),([&]()->V{V _lhs26842=j::get(_v_21749_c.get(),this->_literals[37]);V _rhs26843=j::get(_v_21749_c.get(),this->_literals[35]);return V(j::number(_lhs26842)-j::number(_rhs26843));})()};return j::call(_method,_params26848,_receiver26846);})();
_v_21752_md.get()=([&]()->V{V _receiver26851=j::builtin("Math");V _method26852=this->_literals[51];V _method=j::get(_receiver26851,_method26852);j::Args _params26853=j::Args{V(1.0),j::get(_v_21749_c.get(),this->_literals[166])};return j::call(_method,_params26853,_receiver26851);})();
_v_21753_scale.get()=([&]()->V{V _receiver26858=j::builtin("Math");V _method26859=this->_literals[51];V _method=j::get(_receiver26858,_method26859);j::Args _params26860=j::Args{V(1.0),([&]()->V{V _lhs26854=_v_21751_h.get();V _rhs26855=V(6.0);return V(j::number(_lhs26854)/j::number(_rhs26855));})()};return j::call(_method,_params26860,_receiver26858);})();
_v_21754_halo.get()=j::get(([&]()->V{V _callee26861=this->_v_22095_haloOf.get();return j::call(_callee26861,j::Args{_v_21749_c.get(),_v_21747_glow.get()});})(),this->_literals[159]);
return j::function([=](const j::Args &_args_fn21755,const V &_receiver_fn21755,const V &_self_fn21755) mutable ->V{
V _v_21756_t;
V _v_21757_pt;
_v_21756_t=_args_fn21755[0];
_v_21757_pt=_args_fn21755[1];
{
V _v_21758_s;
V _v_21760_rise;
V _pattern26862=_v_21757_pt;
_v_21758_s=j::get(_pattern26862,this->_literals[191]);
{for(const auto &_item26863:j::elements(_v_21754_halo.get())){V _v_21759_j;
_v_21759_j=_item26863;
if(j::truth(([&]()->V{V _lhs26864=j::get(j::get(_v_21758_s,this->_literals[160]),_v_21759_j);V _rhs26865=this->_v_20623_EMPTY.get();return V(j::equal(_lhs26864,_rhs26865,true));})())){(void)(([&]()->V{V _receiver26870=_v_21758_s;V _method26871=this->_literals[196];V _method=j::get(_receiver26870,_method26871);j::Args _params26872=j::Args{_v_21759_j,([&]()->V{V _callee26866=this->_v_21577_code.get();return j::call(_callee26866,j::Args{this->_literals[169]});})(),([&]()->V{V _receiver26867=_v_21757_pt;V _method26868=this->_literals[195];V _method=j::get(_receiver26867,_method26868);j::Args _params26869=j::Args{V(1.0)};return j::call(_method,_params26869,_receiver26867);})()};return j::call(_method,_params26872,_receiver26870);})());
}
}}
_v_21760_rise=([&]()->V{V _lhs26873=([&]()->V{V _lhs26875=_v_21756_t;V _rhs26876=_v_21744_period.get();return V(j::number(_lhs26875)/j::number(_rhs26876));})();V _rhs26874=V(4.0);return V(j::number(_lhs26873)*j::number(_rhs26874));})();
{for(const auto &_item26877:j::elements(j::get(_v_21749_c.get(),this->_literals[150]))){V _v_21761_i;
_v_21761_i=_item26877;
{
V _v_21762_x;
V _v_21763_y;
V _v_21764_up;
V _v_21765_core;
V _v_21766_n;
V _v_21767_v;
V _v_21768_k;
V _v_21769_ch;
_v_21762_x=([&]()->V{V _lhs26878=_v_21761_i;V _rhs26879=_v_21750_cols.get();return V(std::fmod(j::number(_lhs26878),j::number(_rhs26879)));})();
_v_21763_y=([&]()->V{V _lhs26880=([&]()->V{V _lhs26882=_v_21761_i;V _rhs26883=_v_21762_x;return V(j::number(_lhs26882)-j::number(_rhs26883));})();V _rhs26881=_v_21750_cols.get();return V(j::number(_lhs26880)/j::number(_rhs26881));})();
_v_21764_up=([&]()->V{V _lhs26884=([&]()->V{V _lhs26886=([&]()->V{V _lhs26888=j::get(_v_21749_c.get(),this->_literals[37]);V _rhs26889=_v_21763_y;return V(j::number(_lhs26888)-j::number(_rhs26889));})();V _rhs26887=V(0.5);return V(j::number(_lhs26886)-j::number(_rhs26887));})();V _rhs26885=_v_21751_h.get();return V(j::number(_lhs26884)/j::number(_rhs26885));})();
_v_21765_core=([&]()->V{V _receiver26896=j::builtin("Math");V _method26897=this->_literals[52];V _method=j::get(_receiver26896,_method26897);j::Args _params26898=j::Args{V(1.0),([&]()->V{V _lhs26890=([&]()->V{V _lhs26892=j::get(j::get(_v_21749_c.get(),this->_literals[165]),_v_21761_i);V _rhs26893=_v_21752_md.get();return V(j::number(_lhs26892)/j::number(_rhs26893));})();V _rhs26891=V(0.15);return j::binary("+",_lhs26890,_rhs26891);})()};return j::call(_method,_params26898,_receiver26896);})();
_v_21766_n=([&]()->V{V _lhs26899=([&]()->V{V _lhs26901=([&]()->V{V _callee26911=this->_v_21581_tiled.get();return j::call(_callee26911,j::Args{([&]()->V{V _lhs26903=([&]()->V{V _lhs26905=_v_21762_x;V _rhs26906=V(0.7);return V(j::number(_lhs26905)*j::number(_rhs26906));})();V _rhs26904=_v_21753_scale.get();return V(j::number(_lhs26903)/j::number(_rhs26904));})(),([&]()->V{V _lhs26907=([&]()->V{V _lhs26909=_v_21763_y;V _rhs26910=_v_21753_scale.get();return V(j::number(_lhs26909)/j::number(_rhs26910));})();V _rhs26908=_v_21760_rise;return j::binary("+",_lhs26907,_rhs26908);})(),V(0.0),V(4.0),V(11.0)});})();V _rhs26902=V(0.65);return V(j::number(_lhs26901)*j::number(_rhs26902));})();V _rhs26900=([&]()->V{V _lhs26912=([&]()->V{V _callee26926=this->_v_21581_tiled.get();return j::call(_callee26926,j::Args{([&]()->V{V _lhs26914=([&]()->V{V _lhs26916=_v_21762_x;V _rhs26917=V(1.6);return V(j::number(_lhs26916)*j::number(_rhs26917));})();V _rhs26915=_v_21753_scale.get();return V(j::number(_lhs26914)/j::number(_rhs26915));})(),([&]()->V{V _lhs26918=([&]()->V{V _lhs26920=([&]()->V{V _lhs26922=_v_21763_y;V _rhs26923=V(2.0);return V(j::number(_lhs26922)*j::number(_rhs26923));})();V _rhs26921=_v_21753_scale.get();return V(j::number(_lhs26920)/j::number(_rhs26921));})();V _rhs26919=([&]()->V{V _lhs26924=V(2.0);V _rhs26925=_v_21760_rise;return V(j::number(_lhs26924)*j::number(_rhs26925));})();return j::binary("+",_lhs26918,_rhs26919);})(),V(0.0),V(8.0),V(12.0)});})();V _rhs26913=V(0.35);return V(j::number(_lhs26912)*j::number(_rhs26913));})();return j::binary("+",_lhs26899,_rhs26900);})();
_v_21767_v=([&]()->V{V _lhs26927=([&]()->V{V _lhs26929=([&]()->V{V _lhs26931=([&]()->V{V _lhs26933=_v_21745_heat.get();V _rhs26934=([&]()->V{V _lhs26935=([&]()->V{V _lhs26937=V(0.55);V _rhs26938=_v_21765_core;return V(j::number(_lhs26937)*j::number(_rhs26938));})();V _rhs26936=([&]()->V{V _lhs26939=V(0.45);V _rhs26940=([&]()->V{V _lhs26941=V(1.0);V _rhs26942=_v_21764_up;return V(j::number(_lhs26941)-j::number(_rhs26942));})();return V(j::number(_lhs26939)*j::number(_rhs26940));})();return j::binary("+",_lhs26935,_rhs26936);})();return V(j::number(_lhs26933)*j::number(_rhs26934));})();V _rhs26932=([&]()->V{V _lhs26943=V(0.6);V _rhs26944=([&]()->V{V _lhs26945=_v_21766_n;V _rhs26946=V(0.5);return V(j::number(_lhs26945)-j::number(_rhs26946));})();return V(j::number(_lhs26943)*j::number(_rhs26944));})();return j::binary("+",_lhs26931,_rhs26932);})();V _rhs26930=V(0.12);return j::binary("+",_lhs26929,_rhs26930);})();V _rhs26928=([&]()->V{V _lhs26947=V(0.1);V _rhs26948=_v_21764_up;return V(j::number(_lhs26947)*j::number(_rhs26948));})();return V(j::number(_lhs26927)-j::number(_rhs26928));})();
if(j::truth(([&]()->V{V _lhs26949=_v_21767_v;V _rhs26950=V(0.08);return j::binary("<",_lhs26949,_rhs26950);})())){continue;
}
_v_21768_k=([&]()->V{V _callee26955=this->_v_20630_clamp.get();return j::call(_callee26955,j::Args{([&]()->V{V _lhs26951=([&]()->V{V _lhs26953=_v_21767_v;V _rhs26954=V(0.08);return V(j::number(_lhs26953)-j::number(_rhs26954));})();V _rhs26952=V(0.9);return V(j::number(_lhs26951)/j::number(_rhs26952));})()});})();
_v_21769_ch=j::get(_v_21746_chars.get(),([&]()->V{V _receiver26971=j::builtin("Math");V _method26972=this->_literals[52];V _method=j::get(_receiver26971,_method26972);j::Args _params26973=j::Args{([&]()->V{V _lhs26956=j::get(_v_21746_chars.get(),this->_literals[19]);V _rhs26957=V(1.0);return V(j::number(_lhs26956)-j::number(_rhs26957));})(),([&]()->V{V _lhs26958=V(1.0);V _rhs26959=([&]()->V{V _number26964=([&]()->V{V _lhs26965=_v_21768_k;V _rhs26966=([&]()->V{V _lhs26967=j::get(_v_21746_chars.get(),this->_literals[19]);V _rhs26968=V(1.0);return V(j::number(_lhs26967)-j::number(_rhs26968));})();return V(j::number(_lhs26965)*j::number(_rhs26966));})();return V(std::floor(j::number(_number26964)));})();return j::binary("+",_lhs26958,_rhs26959);})()};return j::call(_method,_params26973,_receiver26971);})());
if(j::truth(([&]()->V{V _lhs26974=_v_21769_ch;V _rhs26975=this->_literals[134];return V(j::equal(_lhs26974,_rhs26975,true));})())){continue;
}
(void)(([&]()->V{V _receiver26990=_v_21758_s;V _method26991=this->_literals[196];V _method=j::get(_receiver26990,_method26991);j::Args _params26992=j::Args{_v_21761_i,([&]()->V{V _callee26976=this->_v_21577_code.get();return j::call(_callee26976,j::Args{_v_21769_ch});})(),([&]()->V{V _receiver26987=_v_21757_pt;V _method26988=this->_literals[195];V _method=j::get(_receiver26987,_method26988);j::Args _params26989=j::Args{([&]()->V{V _receiver26984=j::builtin("Math");V _method26985=this->_literals[52];V _method=j::get(_receiver26984,_method26985);j::Args _params26986=j::Args{V(4.0),([&]()->V{V _number26979=([&]()->V{V _lhs26980=_v_21768_k;V _rhs26981=V(5.0);return V(j::number(_lhs26980)*j::number(_rhs26981));})();return V(std::floor(j::number(_number26979)));})()};return j::call(_method,_params26986,_receiver26984);})()};return j::call(_method,_params26989,_receiver26987);})()};return j::call(_method,_params26992,_receiver26990);})());

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_21770_hazeMaterial.get()=j::function([=](const j::Args &_args_fn21771,const V &_receiver_fn21771,const V &_self_fn21771) mutable ->V{
V _v_21772_name;
V _v_21773_colorsIn;
V _v_21774_def;
V _v_21775_periodIn;
V _v_21776_rampIn;
_v_21772_name=_args_fn21771[0];
_v_21773_colorsIn=_args_fn21771[1];
_v_21774_def=_args_fn21771[2];
_v_21775_periodIn=_args_fn21771[3];
_v_21776_rampIn=_args_fn21771[4];
{
V _v_21777_colors;
j::Cell _v_21778_period;
j::Cell _v_21779_chars;
_v_21777_colors=([&]()->V{V _callee26995=this->_v_20717_colorsOf.get();return j::call(_callee26995,j::Args{([&]()->V{std::u16string _text26994;_text26994+=u"";_text26994+=j::string(_v_21772_name);_text26994+=u".colors";return V(std::move(_text26994));})(),_v_21773_colorsIn,_v_21774_def,V(3.0)});})();
_v_21778_period.get()=([&]()->V{V _callee26997=this->_v_20682_periodOf.get();return j::call(_callee26997,j::Args{([&]()->V{std::u16string _text26996;_text26996+=u"";_text26996+=j::string(_v_21772_name);_text26996+=u".period";return V(std::move(_text26996));})(),_v_21775_periodIn,V(4.0)});})();
_v_21779_chars.get()=([&]()->V{V _callee26999=this->_v_20711_rampOf.get();return j::call(_callee26999,j::Args{([&]()->V{std::u16string _text26998;_text26998+=u"";_text26998+=j::string(_v_21772_name);_text26998+=u".ramp";return V(std::move(_text26998));})(),_v_21776_rampIn,this->_literals[221]});})();
return ([&]()->V{V _callee27109=this->_v_21571_makeMaterial.get();return j::call(_callee27109,j::Args{_v_21772_name,_v_21777_colors,_v_21778_period.get(),j::function([=](const j::Args &_args_fn21780,const V &_receiver_fn21780,const V &_self_fn21780) mutable ->V{
j::Cell _v_21781_c;
_v_21781_c.get()=_args_fn21780[0];
{
j::Cell _v_21782_cols;
j::Cell _v_21783_h;
V _pattern27000=_v_21781_c.get();
_v_21782_cols.get()=j::get(_pattern27000,this->_literals[46]);
_v_21783_h.get()=([&]()->V{V _receiver27005=j::builtin("Math");V _method27006=this->_literals[51];V _method=j::get(_receiver27005,_method27006);j::Args _params27007=j::Args{V(1.0),([&]()->V{V _lhs27001=j::get(_v_21781_c.get(),this->_literals[37]);V _rhs27002=j::get(_v_21781_c.get(),this->_literals[35]);return V(j::number(_lhs27001)-j::number(_rhs27002));})()};return j::call(_method,_params27007,_receiver27005);})();
return j::function([=](const j::Args &_args_fn21784,const V &_receiver_fn21784,const V &_self_fn21784) mutable ->V{
V _v_21785_t;
V _v_21786_pt;
_v_21785_t=_args_fn21784[0];
_v_21786_pt=_args_fn21784[1];
{
V _v_21787_s;
V _v_21788_rise;
V _pattern27008=_v_21786_pt;
_v_21787_s=j::get(_pattern27008,this->_literals[191]);
_v_21788_rise=([&]()->V{V _lhs27009=([&]()->V{V _lhs27011=_v_21785_t;V _rhs27012=_v_21778_period.get();return V(j::number(_lhs27011)/j::number(_rhs27012));})();V _rhs27010=V(2.0);return V(j::number(_lhs27009)*j::number(_rhs27010));})();
{for(const auto &_item27013:j::elements(j::get(_v_21781_c.get(),this->_literals[150]))){V _v_21789_i;
_v_21789_i=_item27013;
{
V _v_21790_x;
V _v_21791_y;
V _v_21792_n;
V _v_21793_up;
V _v_21794_v;
V _v_21795_k;
V _v_21796_ch;
_v_21790_x=([&]()->V{V _lhs27014=_v_21789_i;V _rhs27015=_v_21782_cols.get();return V(std::fmod(j::number(_lhs27014),j::number(_rhs27015)));})();
_v_21791_y=([&]()->V{V _lhs27016=([&]()->V{V _lhs27018=_v_21789_i;V _rhs27019=_v_21790_x;return V(j::number(_lhs27018)-j::number(_rhs27019));})();V _rhs27017=_v_21782_cols.get();return V(j::number(_lhs27016)/j::number(_rhs27017));})();
_v_21792_n=([&]()->V{V _lhs27020=([&]()->V{V _lhs27022=([&]()->V{V _callee27030=this->_v_21581_tiled.get();return j::call(_callee27030,j::Args{([&]()->V{V _lhs27024=_v_21790_x;V _rhs27025=V(0.18);return V(j::number(_lhs27024)*j::number(_rhs27025));})(),([&]()->V{V _lhs27026=([&]()->V{V _lhs27028=_v_21791_y;V _rhs27029=V(0.35);return V(j::number(_lhs27028)*j::number(_rhs27029));})();V _rhs27027=_v_21788_rise;return j::binary("+",_lhs27026,_rhs27027);})(),V(0.0),V(2.0),V(21.0)});})();V _rhs27023=V(0.6);return V(j::number(_lhs27022)*j::number(_rhs27023));})();V _rhs27021=([&]()->V{V _lhs27031=([&]()->V{V _callee27041=this->_v_21581_tiled.get();return j::call(_callee27041,j::Args{([&]()->V{V _lhs27033=_v_21790_x;V _rhs27034=V(0.4);return V(j::number(_lhs27033)*j::number(_rhs27034));})(),([&]()->V{V _lhs27035=([&]()->V{V _lhs27037=_v_21791_y;V _rhs27038=V(0.7);return V(j::number(_lhs27037)*j::number(_rhs27038));})();V _rhs27036=([&]()->V{V _lhs27039=V(2.0);V _rhs27040=_v_21788_rise;return V(j::number(_lhs27039)*j::number(_rhs27040));})();return j::binary("+",_lhs27035,_rhs27036);})(),V(0.0),V(4.0),V(22.0)});})();V _rhs27032=V(0.4);return V(j::number(_lhs27031)*j::number(_rhs27032));})();return j::binary("+",_lhs27020,_rhs27021);})();
_v_21793_up=([&]()->V{V _lhs27042=([&]()->V{V _lhs27044=([&]()->V{V _lhs27046=j::get(_v_21781_c.get(),this->_literals[37]);V _rhs27047=_v_21791_y;return V(j::number(_lhs27046)-j::number(_rhs27047));})();V _rhs27045=V(0.5);return V(j::number(_lhs27044)-j::number(_rhs27045));})();V _rhs27043=_v_21783_h.get();return V(j::number(_lhs27042)/j::number(_rhs27043));})();
_v_21794_v=([&]()->V{V _lhs27048=([&]()->V{V _lhs27050=_v_21792_n;V _rhs27051=([&]()->V{V _lhs27052=V(1.0);V _rhs27053=([&]()->V{V _lhs27054=V(0.45);V _rhs27055=_v_21793_up;return V(j::number(_lhs27054)*j::number(_rhs27055));})();return V(j::number(_lhs27052)-j::number(_rhs27053));})();return V(j::number(_lhs27050)*j::number(_rhs27051));})();V _rhs27049=([&]()->V{V _receiver27062=j::builtin("Math");V _method27063=this->_literals[52];V _method=j::get(_receiver27062,_method27063);j::Args _params27064=j::Args{V(1.0),([&]()->V{V _lhs27056=V(0.4);V _rhs27057=([&]()->V{V _lhs27058=j::get(j::get(_v_21781_c.get(),this->_literals[165]),_v_21789_i);V _rhs27059=V(3.0);return V(j::number(_lhs27058)/j::number(_rhs27059));})();return j::binary("+",_lhs27056,_rhs27057);})()};return j::call(_method,_params27064,_receiver27062);})();return V(j::number(_lhs27048)*j::number(_rhs27049));})();
if(j::truth(([&]()->V{V _lhs27065=_v_21794_v;V _rhs27066=V(0.42);return j::binary("<",_lhs27065,_rhs27066);})())){continue;
}
_v_21795_k=([&]()->V{V _callee27071=this->_v_20630_clamp.get();return j::call(_callee27071,j::Args{([&]()->V{V _lhs27067=([&]()->V{V _lhs27069=_v_21794_v;V _rhs27070=V(0.42);return V(j::number(_lhs27069)-j::number(_rhs27070));})();V _rhs27068=V(0.4);return V(j::number(_lhs27067)/j::number(_rhs27068));})()});})();
_v_21796_ch=j::get(_v_21779_chars.get(),([&]()->V{V _receiver27087=j::builtin("Math");V _method27088=this->_literals[52];V _method=j::get(_receiver27087,_method27088);j::Args _params27089=j::Args{([&]()->V{V _lhs27072=j::get(_v_21779_chars.get(),this->_literals[19]);V _rhs27073=V(1.0);return V(j::number(_lhs27072)-j::number(_rhs27073));})(),([&]()->V{V _lhs27074=V(1.0);V _rhs27075=([&]()->V{V _number27080=([&]()->V{V _lhs27081=_v_21795_k;V _rhs27082=([&]()->V{V _lhs27083=j::get(_v_21779_chars.get(),this->_literals[19]);V _rhs27084=V(1.0);return V(j::number(_lhs27083)-j::number(_rhs27084));})();return V(j::number(_lhs27081)*j::number(_rhs27082));})();return V(std::floor(j::number(_number27080)));})();return j::binary("+",_lhs27074,_rhs27075);})()};return j::call(_method,_params27089,_receiver27087);})());
if(j::truth(([&]()->V{V _lhs27090=_v_21796_ch;V _rhs27091=this->_literals[134];return V(!j::equal(_lhs27090,_rhs27091,true));})())){(void)(([&]()->V{V _receiver27106=_v_21787_s;V _method27107=this->_literals[196];V _method=j::get(_receiver27106,_method27107);j::Args _params27108=j::Args{_v_21789_i,([&]()->V{V _callee27092=this->_v_21577_code.get();return j::call(_callee27092,j::Args{_v_21796_ch});})(),([&]()->V{V _receiver27103=_v_21786_pt;V _method27104=this->_literals[195];V _method=j::get(_receiver27103,_method27104);j::Args _params27105=j::Args{([&]()->V{V _receiver27100=j::builtin("Math");V _method27101=this->_literals[52];V _method=j::get(_receiver27100,_method27101);j::Args _params27102=j::Args{V(2.0),([&]()->V{V _number27095=([&]()->V{V _lhs27096=_v_21795_k;V _rhs27097=V(3.0);return V(j::number(_lhs27096)*j::number(_rhs27097));})();return V(std::floor(j::number(_number27095)));})()};return j::call(_method,_params27102,_receiver27100);})()};return j::call(_method,_params27105,_receiver27103);})()};return j::call(_method,_params27108,_receiver27106);})());
}

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},5);
this->_v_21797_smoke.get()=j::function([=](const j::Args &_args_fn21798,const V &_receiver_fn21798,const V &_self_fn21798) mutable ->V{
V _v_21799_o;
_v_21799_o=_args_fn21798[0];
{
V _v_21800_p;
V _v_21801_m;
V _v_21802_e;
_v_21800_p=([&]()->V{V _callee27111=this->_v_20652_optionsOf.get();return j::call(_callee27111,j::Args{this->_literals[222],_v_21799_o,([&]()->V{j::Args _array27110;_array27110.push_back(this->_literals[98]);_array27110.push_back(this->_literals[175]);_array27110.push_back(this->_literals[207]);_array27110.push_back(this->_literals[223]);_array27110.push_back(this->_literals[224]);_array27110.push_back(this->_literals[225]);_array27110.push_back(this->_literals[109]);return j::array(std::move(_array27110));})()});})();
_v_21801_m=([&]()->V{V _callee27112=this->_v_21770_hazeMaterial.get();return j::call(_callee27112,j::Args{this->_literals[226],j::get(_v_21800_p,this->_literals[98]),this->_literals[226],j::get(_v_21800_p,this->_literals[175]),j::get(_v_21800_p,this->_literals[207])});})();
_v_21802_e=([&]()->V{V _callee27113=this->_v_22409_plume.get();return j::call(_callee27113,j::Args{this->_literals[226],_v_21800_p});})();
return ([&]()->V{V _obj27114=j::object();V _spread27115=_v_21801_m;for(const auto &_key:j::keys(_spread27115))j::put(_obj27114,_key,j::get(_spread27115,_key));V _spread27116=_v_21802_e;for(const auto &_key:j::keys(_spread27116))j::put(_obj27114,_key,j::get(_spread27116,_key));j::put(_obj27114,this->_literals[25],this->_literals[227]);j::put(_obj27114,this->_literals[176],j::get(_v_21801_m,this->_literals[176]));return _obj27114;})();

}

return V{};
},1);
this->_v_21803_cloudChar.get()=j::function([=](const j::Args &_args_fn21804,const V &_receiver_fn21804,const V &_self_fn21804) mutable ->V{
V _v_21805_c;
V _v_21806_x;
V _v_21807_y;
_v_21805_c=_args_fn21804[0];
_v_21806_x=_args_fn21804[1];
_v_21807_y=_args_fn21804[2];
{
j::Cell _v_21808_cols;
j::Cell _v_21809_top;
j::Cell _v_21810_bottom;
V _v_21811_t;
V _v_21814_b;
V _pattern27117=_v_21805_c;
_v_21808_cols.get()=j::get(_pattern27117,this->_literals[46]);
_v_21809_top.get()=j::get(_pattern27117,this->_literals[33]);
_v_21810_bottom.get()=j::get(_pattern27117,this->_literals[36]);
_v_21811_t=j::function([=](const j::Args &_args_fn21812,const V &_receiver_fn21812,const V &_self_fn21812) mutable ->V{
V _v_21813_k;
_v_21813_k=_args_fn21812[0];
return (j::truth(([&]()->V{V _logical27118=([&]()->V{V _logical27119=([&]()->V{V _lhs27120=_v_21813_k;V _rhs27121=V(0.0);return j::binary(">=",_lhs27120,_rhs27121);})();return j::truth(_logical27119)?([&]()->V{V _lhs27122=_v_21813_k;V _rhs27123=_v_21808_cols.get();return j::binary("<",_lhs27122,_rhs27123);})():_logical27119;})();return j::truth(_logical27118)?([&]()->V{V _lhs27124=j::get(_v_21809_top.get(),_v_21813_k);V _rhs27125=V(0.0);return j::binary(">=",_lhs27124,_rhs27125);})():_logical27118;})())?j::get(_v_21809_top.get(),_v_21813_k):j::builtin("Infinity"));
return V{};
},1);
_v_21814_b=j::function([=](const j::Args &_args_fn21815,const V &_receiver_fn21815,const V &_self_fn21815) mutable ->V{
V _v_21816_k;
_v_21816_k=_args_fn21815[0];
return (j::truth(([&]()->V{V _logical27126=([&]()->V{V _logical27127=([&]()->V{V _lhs27128=_v_21816_k;V _rhs27129=V(0.0);return j::binary(">=",_lhs27128,_rhs27129);})();return j::truth(_logical27127)?([&]()->V{V _lhs27130=_v_21816_k;V _rhs27131=_v_21808_cols.get();return j::binary("<",_lhs27130,_rhs27131);})():_logical27127;})();return j::truth(_logical27126)?([&]()->V{V _lhs27132=j::get(_v_21810_bottom.get(),_v_21816_k);V _rhs27133=V(0.0);return j::binary(">=",_lhs27132,_rhs27133);})():_logical27126;})())?j::get(_v_21810_bottom.get(),_v_21816_k):j::unary("-",j::builtin("Infinity")));
return V{};
},1);
if(j::truth(([&]()->V{V _lhs27134=_v_21807_y;V _rhs27135=j::get(_v_21809_top.get(),_v_21806_x);return V(j::equal(_lhs27134,_rhs27135,true));})())){
V _v_21817_l;
V _v_21818_r;
V _v_21819_h;
_v_21817_l=([&]()->V{V _callee27138=_v_21811_t;return j::call(_callee27138,j::Args{([&]()->V{V _lhs27136=_v_21806_x;V _rhs27137=V(1.0);return V(j::number(_lhs27136)-j::number(_rhs27137));})()});})();
_v_21818_r=([&]()->V{V _callee27141=_v_21811_t;return j::call(_callee27141,j::Args{([&]()->V{V _lhs27139=_v_21806_x;V _rhs27140=V(1.0);return j::binary("+",_lhs27139,_rhs27140);})()});})();
_v_21819_h=j::get(_v_21809_top.get(),_v_21806_x);
if(j::truth(([&]()->V{V _logical27142=([&]()->V{V _lhs27143=_v_21817_l;V _rhs27144=_v_21819_h;return j::binary("<",_lhs27143,_rhs27144);})();return j::truth(_logical27142)?([&]()->V{V _lhs27145=_v_21818_r;V _rhs27146=_v_21819_h;return j::binary("<",_lhs27145,_rhs27146);})():_logical27142;})())){return this->_literals[170];
}
if(j::truth(([&]()->V{V _lhs27147=_v_21818_r;V _rhs27148=_v_21819_h;return j::binary("<",_lhs27147,_rhs27148);})())){return (j::truth(([&]()->V{V _lhs27149=_v_21817_l;V _rhs27150=_v_21819_h;return V(j::equal(_lhs27149,_rhs27150,true));})())?this->_literals[170]:this->_literals[173]);
}
if(j::truth(([&]()->V{V _lhs27151=_v_21817_l;V _rhs27152=_v_21819_h;return j::binary("<",_lhs27151,_rhs27152);})())){return (j::truth(([&]()->V{V _lhs27153=_v_21818_r;V _rhs27154=_v_21819_h;return V(j::equal(_lhs27153,_rhs27154,true));})())?this->_literals[170]:this->_literals[174]);
}
if(j::truth(([&]()->V{V _logical27155=([&]()->V{V _lhs27156=_v_21817_l;V _rhs27157=_v_21819_h;return j::binary(">",_lhs27156,_rhs27157);})();return !j::truth(_logical27155)?([&]()->V{V _lhs27158=_v_21818_r;V _rhs27159=_v_21819_h;return j::binary(">",_lhs27158,_rhs27159);})():_logical27155;})())){return this->_literals[169];
}
return (j::truth(([&]()->V{V _logical27160=([&]()->V{V _lhs27161=([&]()->V{V _callee27165=_v_21811_t;return j::call(_callee27165,j::Args{([&]()->V{V _lhs27163=_v_21806_x;V _rhs27164=V(2.0);return V(j::number(_lhs27163)-j::number(_rhs27164));})()});})();V _rhs27162=_v_21819_h;return V(!j::equal(_lhs27161,_rhs27162,true));})();return !j::truth(_logical27160)?([&]()->V{V _lhs27166=([&]()->V{V _callee27170=_v_21811_t;return j::call(_callee27170,j::Args{([&]()->V{V _lhs27168=_v_21806_x;V _rhs27169=V(2.0);return j::binary("+",_lhs27168,_rhs27169);})()});})();V _rhs27167=_v_21819_h;return V(!j::equal(_lhs27166,_rhs27167,true));})():_logical27160;})())?this->_literals[171]:this->_literals[194]);

}

if(j::truth(([&]()->V{V _lhs27171=_v_21807_y;V _rhs27172=j::get(_v_21810_bottom.get(),_v_21806_x);return V(j::equal(_lhs27171,_rhs27172,true));})())){
V _v_21820_l;
V _v_21821_r;
V _v_21822_h;
_v_21820_l=([&]()->V{V _callee27175=_v_21814_b;return j::call(_callee27175,j::Args{([&]()->V{V _lhs27173=_v_21806_x;V _rhs27174=V(1.0);return V(j::number(_lhs27173)-j::number(_rhs27174));})()});})();
_v_21821_r=([&]()->V{V _callee27178=_v_21814_b;return j::call(_callee27178,j::Args{([&]()->V{V _lhs27176=_v_21806_x;V _rhs27177=V(1.0);return j::binary("+",_lhs27176,_rhs27177);})()});})();
_v_21822_h=j::get(_v_21810_bottom.get(),_v_21806_x);
if(j::truth(([&]()->V{V _logical27179=([&]()->V{V _lhs27180=_v_21820_l;V _rhs27181=_v_21822_h;return j::binary(">",_lhs27180,_rhs27181);})();return j::truth(_logical27179)?([&]()->V{V _lhs27182=_v_21821_r;V _rhs27183=_v_21822_h;return j::binary(">",_lhs27182,_rhs27183);})():_logical27179;})())){return this->_literals[169];
}
if(j::truth(([&]()->V{V _lhs27184=_v_21821_r;V _rhs27185=_v_21822_h;return j::binary(">",_lhs27184,_rhs27185);})())){return (j::truth(([&]()->V{V _lhs27186=_v_21820_l;V _rhs27187=_v_21822_h;return V(j::equal(_lhs27186,_rhs27187,true));})())?this->_literals[169]:this->_literals[173]);
}
if(j::truth(([&]()->V{V _lhs27188=_v_21820_l;V _rhs27189=_v_21822_h;return j::binary(">",_lhs27188,_rhs27189);})())){return (j::truth(([&]()->V{V _lhs27190=_v_21821_r;V _rhs27191=_v_21822_h;return V(j::equal(_lhs27190,_rhs27191,true));})())?this->_literals[169]:this->_literals[174]);
}
if(j::truth(([&]()->V{V _logical27192=([&]()->V{V _lhs27193=_v_21820_l;V _rhs27194=_v_21822_h;return j::binary("<",_lhs27193,_rhs27194);})();return !j::truth(_logical27192)?([&]()->V{V _lhs27195=_v_21821_r;V _rhs27196=_v_21822_h;return j::binary("<",_lhs27195,_rhs27196);})():_logical27192;})())){return this->_literals[170];
}
return this->_literals[168];

}

return (j::truth(j::unary("!",([&]()->V{V _receiver27199=_v_21805_c;V _method27200=this->_literals[154];V _method=j::get(_receiver27199,_method27200);j::Args _params27201=j::Args{([&]()->V{V _lhs27197=_v_21806_x;V _rhs27198=V(1.0);return V(j::number(_lhs27197)-j::number(_rhs27198));})(),_v_21807_y};return j::call(_method,_params27201,_receiver27199);})()))?this->_literals[173]:(j::truth(j::unary("!",([&]()->V{V _receiver27204=_v_21805_c;V _method27205=this->_literals[154];V _method=j::get(_receiver27204,_method27205);j::Args _params27206=j::Args{([&]()->V{V _lhs27202=_v_21806_x;V _rhs27203=V(1.0);return j::binary("+",_lhs27202,_rhs27203);})(),_v_21807_y};return j::call(_method,_params27206,_receiver27204);})()))?this->_literals[174]:(j::truth(j::unary("!",([&]()->V{V _receiver27209=_v_21805_c;V _method27210=this->_literals[154];V _method=j::get(_receiver27209,_method27210);j::Args _params27211=j::Args{_v_21806_x,([&]()->V{V _lhs27207=_v_21807_y;V _rhs27208=V(1.0);return V(j::number(_lhs27207)-j::number(_rhs27208));})()};return j::call(_method,_params27211,_receiver27209);})()))?this->_literals[171]:this->_literals[168])));

}

return V{};
},3);
this->_v_21823_cloudMaterial.get()=j::function([=](const j::Args &_args_fn21824,const V &_receiver_fn21824,const V &_self_fn21824) mutable ->V{
V _v_21825_colorsIn;
_v_21825_colorsIn=_args_fn21824[0];
{
V _v_21826_colors;
_v_21826_colors=([&]()->V{V _callee27212=this->_v_20717_colorsOf.get();return j::call(_callee27212,j::Args{this->_literals[228],_v_21825_colorsIn,this->_literals[111],V(3.0)});})();
return ([&]()->V{V _callee27254=this->_v_21571_makeMaterial.get();return j::call(_callee27254,j::Args{this->_literals[111],_v_21826_colors,j::builtin("undefined"),j::function([=](const j::Args &_args_fn21827,const V &_receiver_fn21827,const V &_self_fn21827) mutable ->V{
V _v_21828_c;
_v_21828_c=_args_fn21827[0];
{
V _v_21829_cols;
j::Cell _v_21830_at;
j::Cell _v_21831_ch;
j::Cell _v_21832_role;
V _pattern27213=_v_21828_c;
_v_21829_cols=j::get(_pattern27213,this->_literals[46]);
_v_21830_at.get()=([&]()->V{j::Args _array27214;return j::array(std::move(_array27214));})();
_v_21831_ch.get()=([&]()->V{j::Args _array27215;return j::array(std::move(_array27215));})();
_v_21832_role.get()=([&]()->V{j::Args _array27216;return j::array(std::move(_array27216));})();
{for(const auto &_item27217:j::elements(j::get(_v_21828_c,this->_literals[150]))){V _v_21833_i;
_v_21833_i=_item27217;
{
V _v_21834_x;
V _v_21835_y;
_v_21834_x=([&]()->V{V _lhs27218=_v_21833_i;V _rhs27219=_v_21829_cols;return V(std::fmod(j::number(_lhs27218),j::number(_rhs27219)));})();
_v_21835_y=([&]()->V{V _lhs27220=([&]()->V{V _lhs27222=_v_21833_i;V _rhs27223=_v_21834_x;return V(j::number(_lhs27222)-j::number(_rhs27223));})();V _rhs27221=_v_21829_cols;return V(j::number(_lhs27220)/j::number(_rhs27221));})();
(void)(([&]()->V{V _receiver27224=_v_21830_at.get();V _method27225=this->_literals[149];V _method=j::get(_receiver27224,_method27225);j::Args _params27226=j::Args{_v_21833_i};return j::call(_method,_params27226,_receiver27224);})());
if(j::truth(j::unary("!",j::get(j::get(_v_21828_c,this->_literals[152]),_v_21833_i)))){(void)((([&]()->V{V _receiver27227=_v_21831_ch.get();V _method27228=this->_literals[149];V _method=j::get(_receiver27227,_method27228);j::Args _params27229=j::Args{this->_v_21580_SPACE.get()};return j::call(_method,_params27229,_receiver27227);})(),([&]()->V{V _receiver27230=_v_21832_role.get();V _method27231=this->_literals[149];V _method=j::get(_receiver27230,_method27231);j::Args _params27232=j::Args{V(1.0)};return j::call(_method,_params27232,_receiver27230);})()));
}else {(void)((([&]()->V{V _receiver27235=_v_21831_ch.get();V _method27236=this->_literals[149];V _method=j::get(_receiver27235,_method27236);j::Args _params27237=j::Args{([&]()->V{V _callee27234=this->_v_21577_code.get();return j::call(_callee27234,j::Args{([&]()->V{V _callee27233=this->_v_21803_cloudChar.get();return j::call(_callee27233,j::Args{_v_21828_c,_v_21834_x,_v_21835_y});})()});})()};return j::call(_method,_params27237,_receiver27235);})(),([&]()->V{V _receiver27243=_v_21832_role.get();V _method27244=this->_literals[149];V _method=j::get(_receiver27243,_method27244);j::Args _params27245=j::Args{(j::truth(([&]()->V{V _logical27238=([&]()->V{V _lhs27239=_v_21835_y;V _rhs27240=j::get(j::get(_v_21828_c,this->_literals[36]),_v_21834_x);return V(j::equal(_lhs27239,_rhs27240,true));})();return j::truth(_logical27238)?([&]()->V{V _lhs27241=_v_21835_y;V _rhs27242=j::get(j::get(_v_21828_c,this->_literals[33]),_v_21834_x);return V(!j::equal(_lhs27241,_rhs27242,true));})():_logical27238;})())?V(2.0):V(0.0))};return j::call(_method,_params27245,_receiver27243);})()));
}

}
}}
return j::function([=](const j::Args &_args_fn21836,const V &_receiver_fn21836,const V &_self_fn21836) mutable ->V{
V _v_21837__t;
V _v_21838_pt;
_v_21837__t=_args_fn21836[0];
_v_21838_pt=_args_fn21836[1];
{
{V _v_21839_k;
_v_21839_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs27246=_v_21839_k;V _rhs27247=j::get(_v_21830_at.get(),this->_literals[19]);return j::binary("<",_lhs27246,_rhs27247);})());(void)(j::increment(_v_21839_k,1,false))){(void)(([&]()->V{V _receiver27251=j::get(_v_21838_pt,this->_literals[191]);V _method27252=this->_literals[196];V _method=j::get(_receiver27251,_method27252);j::Args _params27253=j::Args{j::get(_v_21830_at.get(),_v_21839_k),j::get(_v_21831_ch.get(),_v_21839_k),([&]()->V{V _receiver27248=_v_21838_pt;V _method27249=this->_literals[195];V _method=j::get(_receiver27248,_method27249);j::Args _params27250=j::Args{j::get(_v_21832_role.get(),_v_21839_k)};return j::call(_method,_params27250,_receiver27248);})()};return j::call(_method,_params27253,_receiver27251);})());
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_21840_metal.get()=j::function([=](const j::Args &_args_fn21841,const V &_receiver_fn21841,const V &_self_fn21841) mutable ->V{
V _v_21842_o;
_v_21842_o=_args_fn21841[0];
{
V _v_21843_p;
V _v_21844_colors;
j::Cell _v_21845_sheen;
j::Cell _v_21846_period;
j::Cell _v_21847_chars;
j::Cell _v_21848_edge;
j::Cell _v_21849_invert;
_v_21843_p=([&]()->V{V _callee27256=this->_v_20652_optionsOf.get();return j::call(_callee27256,j::Args{this->_literals[229],_v_21842_o,([&]()->V{j::Args _array27255;_array27255.push_back(this->_literals[98]);_array27255.push_back(this->_literals[230]);_array27255.push_back(this->_literals[175]);_array27255.push_back(this->_literals[207]);_array27255.push_back(this->_literals[135]);_array27255.push_back(this->_literals[231]);return j::array(std::move(_array27255));})()});})();
_v_21844_colors=([&]()->V{V _callee27257=this->_v_20717_colorsOf.get();return j::call(_callee27257,j::Args{this->_literals[232],j::get(_v_21843_p,this->_literals[98]),this->_literals[233],V(4.0)});})();
_v_21845_sheen.get()=([&]()->V{V _callee27258=this->_v_20696_boolOf.get();return j::call(_callee27258,j::Args{this->_literals[234],j::get(_v_21843_p,this->_literals[230]),V(true)});})();
_v_21846_period.get()=([&]()->V{V _callee27259=this->_v_20682_periodOf.get();return j::call(_callee27259,j::Args{this->_literals[235],j::get(_v_21843_p,this->_literals[175]),V(4.0)});})();
_v_21847_chars.get()=([&]()->V{V _callee27260=this->_v_20711_rampOf.get();return j::call(_callee27260,j::Args{this->_literals[236],j::get(_v_21843_p,this->_literals[207]),this->_literals[237]});})();
_v_21848_edge.get()=([&]()->V{V _callee27261=this->_v_20696_boolOf.get();return j::call(_callee27261,j::Args{this->_literals[238],j::get(_v_21843_p,this->_literals[135]),V(true)});})();
_v_21849_invert.get()=(j::truth(([&]()->V{V _logical27262=([&]()->V{V _lhs27263=j::get(_v_21843_p,this->_literals[231]);V _rhs27264=this->_literals[239];return V(j::equal(_lhs27263,_rhs27264,true));})();return !j::truth(_logical27262)?([&]()->V{V _lhs27265=j::get(_v_21843_p,this->_literals[231]);V _rhs27266=j::builtin("undefined");return V(j::equal(_lhs27265,_rhs27266,true));})():_logical27262;})())?this->_literals[239]:([&]()->V{V _callee27267=this->_v_20696_boolOf.get();return j::call(_callee27267,j::Args{this->_literals[240],j::get(_v_21843_p,this->_literals[231]),V(false)});})());
return ([&]()->V{V _callee27376=this->_v_21571_makeMaterial.get();return j::call(_callee27376,j::Args{this->_literals[241],_v_21844_colors,(j::truth(_v_21845_sheen.get())?_v_21846_period.get():j::builtin("undefined")),j::function([=](const j::Args &_args_fn21850,const V &_receiver_fn21850,const V &_self_fn21850) mutable ->V{
j::Cell _v_21851_c;
_v_21851_c.get()=_args_fn21850[0];
{
j::Cell _v_21852_cols;
j::Cell _v_21853_w;
j::Cell _v_21854_h;
j::Cell _v_21855_line;
V _pattern27268=_v_21851_c.get();
_v_21852_cols.get()=j::get(_pattern27268,this->_literals[46]);
_v_21853_w.get()=([&]()->V{V _receiver27273=j::builtin("Math");V _method27274=this->_literals[51];V _method=j::get(_receiver27273,_method27274);j::Args _params27275=j::Args{V(1.0),([&]()->V{V _lhs27269=j::get(_v_21851_c.get(),this->_literals[32]);V _rhs27270=j::get(_v_21851_c.get(),this->_literals[30]);return V(j::number(_lhs27269)-j::number(_rhs27270));})()};return j::call(_method,_params27275,_receiver27273);})();
_v_21854_h.get()=([&]()->V{V _receiver27280=j::builtin("Math");V _method27281=this->_literals[51];V _method=j::get(_receiver27280,_method27281);j::Args _params27282=j::Args{V(1.0),([&]()->V{V _lhs27276=j::get(_v_21851_c.get(),this->_literals[37]);V _rhs27277=j::get(_v_21851_c.get(),this->_literals[35]);return V(j::number(_lhs27276)-j::number(_rhs27277));})()};return j::call(_method,_params27282,_receiver27280);})();
_v_21855_line.get()=([&]()->V{V _receiver27283=_v_21851_c.get();V _method27284=this->_literals[155];V _method=j::get(_receiver27283,_method27284);j::Args _params27285=j::Args{};return j::call(_method,_params27285,_receiver27283);})();
return j::function([=](const j::Args &_args_fn21856,const V &_receiver_fn21856,const V &_self_fn21856) mutable ->V{
V _v_21857_t;
j::Cell _v_21858_pt;
_v_21857_t=_args_fn21856[0];
_v_21858_pt.get()=_args_fn21856[1];
{
j::Cell _v_21859_s;
V _v_21863_at;
V _v_21864_flip;
V _pattern27286=_v_21858_pt.get();
_v_21859_s.get()=j::get(_pattern27286,this->_literals[191]);
if(j::truth(_v_21848_edge.get())){(void)(([&]()->V{V _receiver27293=j::get(_v_21855_line.get(),this->_literals[159]);V _method27294=this->_literals[66];V _method=j::get(_receiver27293,_method27294);j::Args _params27295=j::Args{j::function([=](const j::Args &_args_fn21860,const V &_receiver_fn21860,const V &_self_fn21860) mutable ->V{
V _v_21861_i;
V _v_21862_k;
_v_21861_i=_args_fn21860[0];
_v_21862_k=_args_fn21860[1];
return ([&]()->V{V _receiver27290=_v_21859_s.get();V _method27291=this->_literals[196];V _method=j::get(_receiver27290,_method27291);j::Args _params27292=j::Args{_v_21861_i,j::get(j::get(_v_21855_line.get(),this->_literals[160]),_v_21862_k),([&]()->V{V _receiver27287=_v_21858_pt.get();V _method27288=this->_literals[195];V _method=j::get(_receiver27287,_method27288);j::Args _params27289=j::Args{V(2.0)};return j::call(_method,_params27289,_receiver27287);})()};return j::call(_method,_params27292,_receiver27290);})();
return V{};
},2)};return j::call(_method,_params27295,_receiver27293);})());
}
_v_21863_at=([&]()->V{V _lhs27296=([&]()->V{V _lhs27298=([&]()->V{V _callee27302=this->_v_20633_fract.get();return j::call(_callee27302,j::Args{([&]()->V{V _lhs27300=_v_21857_t;V _rhs27301=_v_21846_period.get();return V(j::number(_lhs27300)/j::number(_rhs27301));})()});})();V _rhs27299=V(2.2);return V(j::number(_lhs27298)*j::number(_rhs27299));})();V _rhs27297=V(0.6);return V(j::number(_lhs27296)-j::number(_rhs27297));})();
_v_21864_flip=(j::truth(([&]()->V{V _lhs27303=_v_21849_invert.get();V _rhs27304=this->_literals[239];return V(j::equal(_lhs27303,_rhs27304,true));})())?j::get(_v_21858_pt.get(),this->_literals[242]):_v_21849_invert.get());
{for(const auto &_item27305:j::elements(j::get(_v_21851_c.get(),this->_literals[150]))){V _v_21865_i;
_v_21865_i=_item27305;
{
V _v_21866_x;
V _v_21867_y;
V _v_21868_u;
V _v_21869_v;
V _v_21870_lit;
V _v_21871_shine;
_v_21866_x=([&]()->V{V _lhs27306=_v_21865_i;V _rhs27307=_v_21852_cols.get();return V(std::fmod(j::number(_lhs27306),j::number(_rhs27307)));})();
_v_21867_y=([&]()->V{V _lhs27308=([&]()->V{V _lhs27310=_v_21865_i;V _rhs27311=_v_21866_x;return V(j::number(_lhs27310)-j::number(_rhs27311));})();V _rhs27309=_v_21852_cols.get();return V(j::number(_lhs27308)/j::number(_rhs27309));})();
_v_21868_u=([&]()->V{V _lhs27312=([&]()->V{V _lhs27314=([&]()->V{V _lhs27316=_v_21866_x;V _rhs27317=j::get(_v_21851_c.get(),this->_literals[30]);return V(j::number(_lhs27316)-j::number(_rhs27317));})();V _rhs27315=V(0.5);return j::binary("+",_lhs27314,_rhs27315);})();V _rhs27313=_v_21853_w.get();return V(j::number(_lhs27312)/j::number(_rhs27313));})();
_v_21869_v=([&]()->V{V _lhs27318=([&]()->V{V _lhs27320=([&]()->V{V _lhs27322=_v_21867_y;V _rhs27323=j::get(_v_21851_c.get(),this->_literals[35]);return V(j::number(_lhs27322)-j::number(_rhs27323));})();V _rhs27321=V(0.5);return j::binary("+",_lhs27320,_rhs27321);})();V _rhs27319=_v_21854_h.get();return V(j::number(_lhs27318)/j::number(_rhs27319));})();
if(j::truth(([&]()->V{V _logical27324=_v_21848_edge.get();return j::truth(_logical27324)?j::get(j::get(_v_21851_c.get(),this->_literals[152]),_v_21865_i):_logical27324;})())){continue;
}
_v_21870_lit=([&]()->V{V _callee27334=this->_v_20630_clamp.get();return j::call(_callee27334,j::Args{([&]()->V{V _lhs27325=V(1.0);V _rhs27326=([&]()->V{V _lhs27327=([&]()->V{V _number27331=([&]()->V{V _lhs27332=_v_21868_u;V _rhs27333=V(0.33);return V(j::number(_lhs27332)-j::number(_rhs27333));})();return V(std::fabs(j::number(_number27331)));})();V _rhs27328=V(1.5);return V(j::number(_lhs27327)*j::number(_rhs27328));})();return V(j::number(_lhs27325)-j::number(_rhs27326));})()});})();
_v_21871_shine=([&]()->V{V _logical27335=_v_21845_sheen.get();return j::truth(_logical27335)?([&]()->V{V _lhs27336=([&]()->V{V _number27344=([&]()->V{V _lhs27345=([&]()->V{V _lhs27347=_v_21868_u;V _rhs27348=([&]()->V{V _lhs27349=V(0.35);V _rhs27350=_v_21869_v;return V(j::number(_lhs27349)*j::number(_rhs27350));})();return j::binary("+",_lhs27347,_rhs27348);})();V _rhs27346=_v_21863_at;return V(j::number(_lhs27345)-j::number(_rhs27346));})();return V(std::fabs(j::number(_number27344)));})();V _rhs27337=V(0.07);return j::binary("<",_lhs27336,_rhs27337);})():_logical27335;})();
if(j::truth(_v_21871_shine)){(void)(([&]()->V{V _receiver27355=_v_21859_s.get();V _method27356=this->_literals[196];V _method=j::get(_receiver27355,_method27356);j::Args _params27357=j::Args{_v_21865_i,([&]()->V{V _callee27351=this->_v_21577_code.get();return j::call(_callee27351,j::Args{this->_literals[95]});})(),([&]()->V{V _receiver27352=_v_21858_pt.get();V _method27353=this->_literals[195];V _method=j::get(_receiver27352,_method27353);j::Args _params27354=j::Args{V(3.0)};return j::call(_method,_params27354,_receiver27352);})()};return j::call(_method,_params27357,_receiver27355);})());
}else {(void)(([&]()->V{V _receiver27373=_v_21859_s.get();V _method27374=this->_literals[196];V _method=j::get(_receiver27373,_method27374);j::Args _params27375=j::Args{_v_21865_i,([&]()->V{V _callee27359=this->_v_21577_code.get();return j::call(_callee27359,j::Args{([&]()->V{V _callee27358=this->_v_20641_shadeChar.get();return j::call(_callee27358,j::Args{_v_21847_chars.get(),_v_21870_lit,_v_21864_flip});})()});})(),([&]()->V{V _receiver27370=_v_21858_pt.get();V _method27371=this->_literals[195];V _method=j::get(_receiver27370,_method27371);j::Args _params27372=j::Args{([&]()->V{V _receiver27367=j::builtin("Math");V _method27368=this->_literals[52];V _method=j::get(_receiver27367,_method27368);j::Args _params27369=j::Args{V(2.0),([&]()->V{V _number27362=([&]()->V{V _lhs27363=_v_21870_lit;V _rhs27364=V(3.0);return V(j::number(_lhs27363)*j::number(_rhs27364));})();return V(std::floor(j::number(_number27362)));})()};return j::call(_method,_params27369,_receiver27367);})()};return j::call(_method,_params27372,_receiver27370);})()};return j::call(_method,_params27375,_receiver27373);})());
}

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_21872_wood.get()=j::function([=](const j::Args &_args_fn21873,const V &_receiver_fn21873,const V &_self_fn21873) mutable ->V{
V _v_21874_o;
_v_21874_o=_args_fn21873[0];
{
V _v_21875_p;
V _v_21876_colors;
j::Cell _v_21877_grain;
j::Cell _v_21878_edge;
j::Cell _v_21879_seed;
_v_21875_p=([&]()->V{V _callee27378=this->_v_20652_optionsOf.get();return j::call(_callee27378,j::Args{this->_literals[243],_v_21874_o,([&]()->V{j::Args _array27377;_array27377.push_back(this->_literals[98]);_array27377.push_back(this->_literals[244]);_array27377.push_back(this->_literals[135]);_array27377.push_back(this->_literals[109]);return j::array(std::move(_array27377));})()});})();
_v_21876_colors=([&]()->V{V _callee27379=this->_v_20717_colorsOf.get();return j::call(_callee27379,j::Args{this->_literals[245],j::get(_v_21875_p,this->_literals[98]),this->_literals[246],V(3.0)});})();
_v_21877_grain.get()=([&]()->V{V _callee27381=this->_v_20688_wordOf.get();return j::call(_callee27381,j::Args{this->_literals[247],j::get(_v_21875_p,this->_literals[244]),([&]()->V{j::Args _array27380;_array27380.push_back(this->_literals[244]);_array27380.push_back(this->_literals[248]);_array27380.push_back(this->_literals[249]);return j::array(std::move(_array27380));})(),this->_literals[244]});})();
_v_21878_edge.get()=([&]()->V{V _callee27382=this->_v_20696_boolOf.get();return j::call(_callee27382,j::Args{this->_literals[250],j::get(_v_21875_p,this->_literals[135]),V(true)});})();
_v_21879_seed.get()=([&]()->V{V _callee27383=this->_v_20701_seedOf.get();return j::call(_callee27383,j::Args{this->_literals[251],j::get(_v_21875_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _callee27562=this->_v_21571_makeMaterial.get();return j::call(_callee27562,j::Args{this->_literals[246],_v_21876_colors,j::builtin("undefined"),j::function([=](const j::Args &_args_fn21880,const V &_receiver_fn21880,const V &_self_fn21880) mutable ->V{
j::Cell _v_21881_c;
_v_21881_c.get()=_args_fn21880[0];
{
j::Cell _v_21882_cols;
j::Cell _v_21883_cx;
j::Cell _v_21884_cy;
j::Cell _v_21885_out;
j::Cell _v_21886_role;
j::Cell _v_21899_line;
V _pattern27384=_v_21881_c.get();
_v_21882_cols.get()=j::get(_pattern27384,this->_literals[46]);
_v_21883_cx.get()=([&]()->V{V _lhs27385=([&]()->V{V _lhs27387=j::get(_v_21881_c.get(),this->_literals[30]);V _rhs27388=j::get(_v_21881_c.get(),this->_literals[32]);return j::binary("+",_lhs27387,_rhs27388);})();V _rhs27386=V(2.0);return V(j::number(_lhs27385)/j::number(_rhs27386));})();
_v_21884_cy.get()=([&]()->V{V _lhs27389=([&]()->V{V _lhs27391=j::get(_v_21881_c.get(),this->_literals[35]);V _rhs27392=j::get(_v_21881_c.get(),this->_literals[37]);return j::binary("+",_lhs27391,_rhs27392);})();V _rhs27390=V(2.0);return V(j::number(_lhs27389)/j::number(_rhs27390));})();
_v_21885_out.get()=([&]()->V{V _callee27393=j::builtin("Uint16Array");return j::construct(_callee27393,j::Args{j::get(j::get(_v_21881_c.get(),this->_literals[150]),this->_literals[19])});})();
_v_21886_role.get()=([&]()->V{V _callee27394=j::builtin("Uint8Array");return j::construct(_callee27394,j::Args{j::get(j::get(_v_21881_c.get(),this->_literals[150]),this->_literals[19])});})();
(void)(([&]()->V{V _receiver27537=j::get(_v_21881_c.get(),this->_literals[150]);V _method27538=this->_literals[66];V _method=j::get(_receiver27537,_method27538);j::Args _params27539=j::Args{j::function([=](const j::Args &_args_fn21887,const V &_receiver_fn21887,const V &_self_fn21887) mutable ->V{
V _v_21888_i;
V _v_21889_k;
_v_21888_i=_args_fn21887[0];
_v_21889_k=_args_fn21887[1];
{
V _v_21890_x;
V _v_21891_y;
V _v_21892_ch;
V _v_21893_r;
_v_21890_x=([&]()->V{V _lhs27395=_v_21888_i;V _rhs27396=_v_21882_cols.get();return V(std::fmod(j::number(_lhs27395),j::number(_rhs27396)));})();
_v_21891_y=([&]()->V{V _lhs27397=([&]()->V{V _lhs27399=_v_21888_i;V _rhs27400=_v_21890_x;return V(j::number(_lhs27399)-j::number(_rhs27400));})();V _rhs27398=_v_21882_cols.get();return V(j::number(_lhs27397)/j::number(_rhs27398));})();
_v_21892_ch=this->_literals[134];
_v_21893_r=V(1.0);
if(j::truth(([&]()->V{V _logical27401=_v_21878_edge.get();return j::truth(_logical27401)?j::get(j::get(_v_21881_c.get(),this->_literals[152]),_v_21888_i):_logical27401;})())){(void)((_v_21893_r=V(0.0)));
}else {if(j::truth(([&]()->V{V _lhs27403=_v_21877_grain.get();V _rhs27404=this->_literals[249];return V(j::equal(_lhs27403,_rhs27404,true));})())){
V _v_21894_d;
V _v_21895_ring;
_v_21894_d=([&]()->V{V _number27415=([&]()->V{V _lhs27417=([&]()->V{V _lhs27419=_v_21890_x;V _rhs27420=V(0.5);return j::binary("+",_lhs27419,_rhs27420);})();V _rhs27418=_v_21883_cx.get();return V(j::number(_lhs27417)-j::number(_rhs27418));})();V _number27416=([&]()->V{V _lhs27421=([&]()->V{V _lhs27423=([&]()->V{V _lhs27425=_v_21891_y;V _rhs27426=V(0.5);return j::binary("+",_lhs27425,_rhs27426);})();V _rhs27424=_v_21884_cy.get();return V(j::number(_lhs27423)-j::number(_rhs27424));})();V _rhs27422=this->_v_20727_ASPECT.get();return V(j::number(_lhs27421)*j::number(_rhs27422));})();return V(std::hypot(j::number(_number27415),j::number(_number27416)));})();
_v_21895_ring=([&]()->V{V _number27438=([&]()->V{V _lhs27439=([&]()->V{V _lhs27441=_v_21894_d;V _rhs27442=V(1.3);return V(j::number(_lhs27441)*j::number(_rhs27442));})();V _rhs27440=([&]()->V{V _lhs27443=V(2.0);V _rhs27444=([&]()->V{V _callee27449=this->_v_21581_tiled.get();return j::call(_callee27449,j::Args{([&]()->V{V _lhs27445=_v_21890_x;V _rhs27446=V(0.3);return V(j::number(_lhs27445)*j::number(_rhs27446));})(),([&]()->V{V _lhs27447=_v_21891_y;V _rhs27448=V(0.6);return V(j::number(_lhs27447)*j::number(_rhs27448));})(),V(0.0),V(0.0),_v_21879_seed.get()});})();return V(j::number(_lhs27443)*j::number(_rhs27444));})();return j::binary("+",_lhs27439,_rhs27440);})();return V(std::sin(j::number(_number27438)));})();
(void)((_v_21892_ch=(j::truth(([&]()->V{V _lhs27451=_v_21894_d;V _rhs27452=V(1.2);return j::binary("<",_lhs27451,_rhs27452);})())?this->_literals[132]:(j::truth(([&]()->V{V _lhs27453=_v_21895_ring;V _rhs27454=V(0.6);return j::binary(">",_lhs27453,_rhs27454);})())?this->_literals[173]:(j::truth(([&]()->V{V _lhs27455=_v_21895_ring;V _rhs27456=j::unary("-",V(0.6));return j::binary("<",_lhs27455,_rhs27456);})())?this->_literals[174]:this->_literals[134])))));
if(j::truth(([&]()->V{V _logical27457=([&]()->V{V _lhs27458=_v_21892_ch;V _rhs27459=this->_literals[173];return V(j::equal(_lhs27458,_rhs27459,true));})();return j::truth(_logical27457)?([&]()->V{V _lhs27460=([&]()->V{V _lhs27462=_v_21890_x;V _rhs27463=V(0.5);return j::binary("+",_lhs27462,_rhs27463);})();V _rhs27461=_v_21883_cx.get();return j::binary(">",_lhs27460,_rhs27461);})():_logical27457;})())){(void)((_v_21892_ch=this->_literals[174]));
}else {if(j::truth(([&]()->V{V _logical27465=([&]()->V{V _lhs27466=_v_21892_ch;V _rhs27467=this->_literals[174];return V(j::equal(_lhs27466,_rhs27467,true));})();return j::truth(_logical27465)?([&]()->V{V _lhs27468=([&]()->V{V _lhs27470=_v_21890_x;V _rhs27471=V(0.5);return j::binary("+",_lhs27470,_rhs27471);})();V _rhs27469=_v_21883_cx.get();return j::binary("<",_lhs27468,_rhs27469);})():_logical27465;})())){(void)((_v_21892_ch=this->_literals[173]));
}
}
(void)((_v_21893_r=(j::truth(([&]()->V{V _lhs27474=_v_21895_ring;V _rhs27475=V(0.0);return j::binary(">",_lhs27474,_rhs27475);})())?V(2.0):V(1.0))));

}
else {
V _v_21896_seam;
V _v_21897_g;
V _v_21898_knot;
_v_21896_seam=([&]()->V{V _logical27476=([&]()->V{V _lhs27477=_v_21877_grain.get();V _rhs27478=this->_literals[248];return V(j::equal(_lhs27477,_rhs27478,true));})();return j::truth(_logical27476)?([&]()->V{V _lhs27479=([&]()->V{V _lhs27481=([&]()->V{V _lhs27483=_v_21890_x;V _rhs27484=j::get(_v_21881_c.get(),this->_literals[30]);return V(j::number(_lhs27483)-j::number(_rhs27484));})();V _rhs27482=V(6.0);return V(std::fmod(j::number(_lhs27481),j::number(_rhs27482)));})();V _rhs27480=V(5.0);return V(j::equal(_lhs27479,_rhs27480,true));})():_logical27476;})();
_v_21897_g=([&]()->V{V _number27496=([&]()->V{V _lhs27497=([&]()->V{V _lhs27499=_v_21891_y;V _rhs27500=([&]()->V{V _lhs27501=V(0.9);V _rhs27502=([&]()->V{V _callee27507=this->_v_21581_tiled.get();return j::call(_callee27507,j::Args{([&]()->V{V _lhs27503=_v_21890_x;V _rhs27504=V(0.12);return V(j::number(_lhs27503)*j::number(_rhs27504));})(),([&]()->V{V _lhs27505=_v_21891_y;V _rhs27506=V(0.5);return V(j::number(_lhs27505)*j::number(_rhs27506));})(),V(0.0),V(0.0),_v_21879_seed.get()});})();return V(j::number(_lhs27501)*j::number(_rhs27502));})();return j::binary("+",_lhs27499,_rhs27500);})();V _rhs27498=V(3.1);return V(j::number(_lhs27497)*j::number(_rhs27498));})();return V(std::sin(j::number(_number27496)));})();
_v_21898_knot=([&]()->V{V _logical27508=([&]()->V{V _lhs27509=([&]()->V{V _callee27515=this->_v_20634_hash.get();return j::call(_callee27515,j::Args{([&]()->V{V _lhs27511=_v_21890_x;V _rhs27512=V(3.0);return V(int(j::i32(_lhs27511)>>(j::u32(_rhs27512)&31)));})(),([&]()->V{V _lhs27513=_v_21891_y;V _rhs27514=V(1.0);return V(int(j::i32(_lhs27513)>>(j::u32(_rhs27514)&31)));})(),_v_21879_seed.get()});})();V _rhs27510=V(0.93);return j::binary(">",_lhs27509,_rhs27510);})();return j::truth(_logical27508)?([&]()->V{V _lhs27516=([&]()->V{V _callee27518=this->_v_20634_hash.get();return j::call(_callee27518,j::Args{_v_21890_x,_v_21891_y,_v_21879_seed.get()});})();V _rhs27517=V(0.6);return j::binary(">",_lhs27516,_rhs27517);})():_logical27508;})();
(void)((_v_21892_ch=(j::truth(_v_21896_seam)?this->_literals[97]:(j::truth(_v_21898_knot)?this->_literals[252]:(j::truth(([&]()->V{V _lhs27520=_v_21897_g;V _rhs27521=V(0.55);return j::binary(">",_lhs27520,_rhs27521);})())?this->_literals[203]:(j::truth(([&]()->V{V _lhs27522=_v_21897_g;V _rhs27523=j::unary("-",V(0.2));return j::binary(">",_lhs27522,_rhs27523);})())?this->_literals[171]:(j::truth(([&]()->V{V _lhs27524=_v_21897_g;V _rhs27525=j::unary("-",V(0.75));return j::binary(">",_lhs27524,_rhs27525);})())?this->_literals[194]:this->_literals[134])))))));
(void)((_v_21893_r=(j::truth(([&]()->V{V _logical27527=_v_21896_seam;return !j::truth(_logical27527)?_v_21898_knot:_logical27527;})())?V(0.0):(j::truth(([&]()->V{V _lhs27528=_v_21897_g;V _rhs27529=V(0.55);return j::binary(">",_lhs27528,_rhs27529);})())?V(2.0):V(1.0)))));

}

}
(void)(([&]()->V{V _base27531=_v_21885_out.get();V _key27532=_v_21889_k;V _assign27530=([&]()->V{V _callee27533=this->_v_21577_code.get();return j::call(_callee27533,j::Args{_v_21892_ch});})();return j::put(_base27531,_key27532,_assign27530);})());
(void)(([&]()->V{V _base27535=_v_21886_role.get();V _key27536=_v_21889_k;V _assign27534=_v_21893_r;return j::put(_base27535,_key27536,_assign27534);})());

}

return V{};
},2)};return j::call(_method,_params27539,_receiver27537);})());
_v_21899_line.get()=(j::truth(_v_21878_edge.get())?([&]()->V{V _receiver27540=_v_21881_c.get();V _method27541=this->_literals[155];V _method=j::get(_receiver27540,_method27541);j::Args _params27542=j::Args{};return j::call(_method,_params27542,_receiver27540);})():V::null());
return j::function([=](const j::Args &_args_fn21900,const V &_receiver_fn21900,const V &_self_fn21900) mutable ->V{
V _v_21901__t;
j::Cell _v_21902_pt;
_v_21901__t=_args_fn21900[0];
_v_21902_pt.get()=_args_fn21900[1];
{
(void)(([&]()->V{V _receiver27549=j::get(_v_21881_c.get(),this->_literals[150]);V _method27550=this->_literals[66];V _method=j::get(_receiver27549,_method27550);j::Args _params27551=j::Args{j::function([=](const j::Args &_args_fn21903,const V &_receiver_fn21903,const V &_self_fn21903) mutable ->V{
V _v_21904_i;
V _v_21905_k;
_v_21904_i=_args_fn21903[0];
_v_21905_k=_args_fn21903[1];
return ([&]()->V{V _receiver27546=j::get(_v_21902_pt.get(),this->_literals[191]);V _method27547=this->_literals[196];V _method=j::get(_receiver27546,_method27547);j::Args _params27548=j::Args{_v_21904_i,j::get(_v_21885_out.get(),_v_21905_k),([&]()->V{V _receiver27543=_v_21902_pt.get();V _method27544=this->_literals[195];V _method=j::get(_receiver27543,_method27544);j::Args _params27545=j::Args{j::get(_v_21886_role.get(),_v_21905_k)};return j::call(_method,_params27545,_receiver27543);})()};return j::call(_method,_params27548,_receiver27546);})();
return V{};
},2)};return j::call(_method,_params27551,_receiver27549);})());
(void)(([&]()->V{V _chain27552=_v_21899_line.get();if(j::nullish(_chain27552))return V{};V _chain27553=j::get(_chain27552,this->_literals[159]);V _chain27554=j::get(_chain27553,this->_literals[66]);V _chain27555=j::call(_chain27554,j::Args{j::function([=](const j::Args &_args_fn21906,const V &_receiver_fn21906,const V &_self_fn21906) mutable ->V{
V _v_21907_i;
V _v_21908_k;
_v_21907_i=_args_fn21906[0];
_v_21908_k=_args_fn21906[1];
return ([&]()->V{V _receiver27559=j::get(_v_21902_pt.get(),this->_literals[191]);V _method27560=this->_literals[196];V _method=j::get(_receiver27559,_method27560);j::Args _params27561=j::Args{_v_21907_i,j::get(j::get(_v_21899_line.get(),this->_literals[160]),_v_21908_k),([&]()->V{V _receiver27556=_v_21902_pt.get();V _method27557=this->_literals[195];V _method=j::get(_receiver27556,_method27557);j::Args _params27558=j::Args{V(0.0)};return j::call(_method,_params27558,_receiver27556);})()};return j::call(_method,_params27561,_receiver27559);})();
return V{};
},2)},_chain27553);return _chain27555;})());

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_21909_grass.get()=j::function([=](const j::Args &_args_fn21910,const V &_receiver_fn21910,const V &_self_fn21910) mutable ->V{
V _v_21911_o;
_v_21911_o=_args_fn21910[0];
{
V _v_21912_p;
j::Cell _v_21913_kind;
V _v_21914_colors;
j::Cell _v_21915_sway;
j::Cell _v_21916_period;
j::Cell _v_21917_density;
j::Cell _v_21918_opaque;
j::Cell _v_21919_seed;
_v_21912_p=([&]()->V{V _callee27564=this->_v_20652_optionsOf.get();return j::call(_callee27564,j::Args{this->_literals[253],_v_21911_o,([&]()->V{j::Args _array27563;_array27563.push_back(this->_literals[98]);_array27563.push_back(this->_literals[25]);_array27563.push_back(this->_literals[254]);_array27563.push_back(this->_literals[175]);_array27563.push_back(this->_literals[255]);_array27563.push_back(this->_literals[256]);_array27563.push_back(this->_literals[109]);return j::array(std::move(_array27563));})()});})();
_v_21913_kind.get()=([&]()->V{V _callee27566=this->_v_20688_wordOf.get();return j::call(_callee27566,j::Args{this->_literals[257],j::get(_v_21912_p,this->_literals[25]),([&]()->V{j::Args _array27565;_array27565.push_back(this->_literals[258]);_array27565.push_back(this->_literals[259]);_array27565.push_back(this->_literals[260]);return j::array(std::move(_array27565));})(),this->_literals[258]});})();
_v_21914_colors=([&]()->V{V _callee27569=this->_v_20717_colorsOf.get();return j::call(_callee27569,j::Args{this->_literals[261],j::get(_v_21912_p,this->_literals[98]),(j::truth(([&]()->V{V _lhs27567=_v_21913_kind.get();V _rhs27568=this->_literals[260];return V(j::equal(_lhs27567,_rhs27568,true));})())?this->_literals[260]:this->_literals[115]),V(3.0)});})();
_v_21915_sway.get()=([&]()->V{V _callee27570=this->_v_20663_numberOf.get();return j::call(_callee27570,j::Args{this->_literals[262],j::get(_v_21912_p,this->_literals[254]),V(1.0),V(0.0),V(3.0)});})();
_v_21916_period.get()=([&]()->V{V _callee27571=this->_v_20682_periodOf.get();return j::call(_callee27571,j::Args{this->_literals[263],j::get(_v_21912_p,this->_literals[175]),V(4.0)});})();
_v_21917_density.get()=([&]()->V{V _callee27576=this->_v_20663_numberOf.get();return j::call(_callee27576,j::Args{this->_literals[264],j::get(_v_21912_p,this->_literals[255]),(j::truth(([&]()->V{V _lhs27572=_v_21913_kind.get();V _rhs27573=this->_literals[260];return V(j::equal(_lhs27572,_rhs27573,true));})())?V(0.3):(j::truth(([&]()->V{V _lhs27574=_v_21913_kind.get();V _rhs27575=this->_literals[259];return V(j::equal(_lhs27574,_rhs27575,true));})())?V(0.85):V(0.7))),V(0.0),V(1.0)});})();
_v_21918_opaque.get()=([&]()->V{V _callee27579=this->_v_20696_boolOf.get();return j::call(_callee27579,j::Args{this->_literals[265],j::get(_v_21912_p,this->_literals[256]),([&]()->V{V _lhs27577=_v_21913_kind.get();V _rhs27578=this->_literals[260];return V(!j::equal(_lhs27577,_rhs27578,true));})()});})();
_v_21919_seed.get()=([&]()->V{V _callee27580=this->_v_20701_seedOf.get();return j::call(_callee27580,j::Args{this->_literals[266],j::get(_v_21912_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _callee27720=this->_v_21571_makeMaterial.get();return j::call(_callee27720,j::Args{this->_literals[115],_v_21914_colors,(j::truth(_v_21915_sway.get())?_v_21916_period.get():j::builtin("undefined")),j::function([=](const j::Args &_args_fn21920,const V &_receiver_fn21920,const V &_self_fn21920) mutable ->V{
j::Cell _v_21921_c;
_v_21921_c.get()=_args_fn21920[0];
{
j::Cell _v_21922_cols;
V _pattern27581=_v_21921_c.get();
_v_21922_cols.get()=j::get(_pattern27581,this->_literals[46]);
if(j::truth(([&]()->V{V _lhs27582=_v_21913_kind.get();V _rhs27583=this->_literals[258];return V(j::equal(_lhs27582,_rhs27583,true));})())){return ([&]()->V{V _callee27584=this->_v_21943_lawn.get();return j::call(_callee27584,j::Args{_v_21921_c.get(),_v_21915_sway.get(),_v_21916_period.get(),_v_21917_density.get(),_v_21918_opaque.get(),_v_21919_seed.get()});})();
}
return j::function([=](const j::Args &_args_fn21923,const V &_receiver_fn21923,const V &_self_fn21923) mutable ->V{
V _v_21924_t;
V _v_21925_pt;
_v_21924_t=_args_fn21923[0];
_v_21925_pt=_args_fn21923[1];
{
V _v_21926_s;
V _v_21927_w;
V _pattern27585=_v_21925_pt;
_v_21926_s=j::get(_pattern27585,this->_literals[191]);
_v_21927_w=([&]()->V{V _lhs27586=([&]()->V{V _lhs27588=this->_v_20628_TAU.get();V _rhs27589=_v_21924_t;return V(j::number(_lhs27588)*j::number(_rhs27589));})();V _rhs27587=_v_21916_period.get();return V(j::number(_lhs27586)/j::number(_rhs27587));})();
if(j::truth(_v_21918_opaque.get())){{for(const auto &_item27590:j::elements(j::get(_v_21921_c.get(),this->_literals[150]))){V _v_21928_i;
_v_21928_i=_item27590;
(void)(([&]()->V{V _receiver27594=_v_21926_s;V _method27595=this->_literals[196];V _method=j::get(_receiver27594,_method27595);j::Args _params27596=j::Args{_v_21928_i,this->_v_21580_SPACE.get(),([&]()->V{V _receiver27591=_v_21925_pt;V _method27592=this->_literals[195];V _method=j::get(_receiver27591,_method27592);j::Args _params27593=j::Args{V(0.0)};return j::call(_method,_params27593,_receiver27591);})()};return j::call(_method,_params27596,_receiver27594);})());
}}
}
{V _v_21929_x;
_v_21929_x=j::get(_v_21921_c.get(),this->_literals[30]);
for(;j::truth(([&]()->V{V _lhs27597=_v_21929_x;V _rhs27598=j::get(_v_21921_c.get(),this->_literals[32]);return j::binary("<",_lhs27597,_rhs27598);})());(void)(j::increment(_v_21929_x,1,false))){
V _v_21930_b;
V _v_21931_tp;
V _v_21932_room;
V _v_21933_tall;
V _v_21934_len;
_v_21930_b=j::get(j::get(_v_21921_c.get(),this->_literals[36]),_v_21929_x);
_v_21931_tp=j::get(j::get(_v_21921_c.get(),this->_literals[33]),_v_21929_x);
if(j::truth(([&]()->V{V _logical27599=([&]()->V{V _lhs27600=_v_21930_b;V _rhs27601=V(0.0);return j::binary("<",_lhs27600,_rhs27601);})();return !j::truth(_logical27599)?([&]()->V{V _lhs27602=([&]()->V{V _callee27604=this->_v_20634_hash.get();return j::call(_callee27604,j::Args{_v_21929_x,_v_21919_seed.get(),V(1.0)});})();V _rhs27603=_v_21917_density.get();return j::binary(">",_lhs27602,_rhs27603);})():_logical27599;})())){continue;
}
_v_21932_room=([&]()->V{V _lhs27605=([&]()->V{V _lhs27607=_v_21930_b;V _rhs27608=_v_21931_tp;return V(j::number(_lhs27607)-j::number(_rhs27608));})();V _rhs27606=V(1.0);return j::binary("+",_lhs27605,_rhs27606);})();
_v_21933_tall=(j::truth(([&]()->V{V _lhs27609=_v_21913_kind.get();V _rhs27610=this->_literals[259];return V(j::equal(_lhs27609,_rhs27610,true));})())?([&]()->V{V _lhs27611=V(0.7);V _rhs27612=([&]()->V{V _lhs27613=V(0.3);V _rhs27614=([&]()->V{V _callee27615=this->_v_20634_hash.get();return j::call(_callee27615,j::Args{_v_21929_x,_v_21919_seed.get(),V(2.0)});})();return V(j::number(_lhs27613)*j::number(_rhs27614));})();return j::binary("+",_lhs27611,_rhs27612);})():([&]()->V{V _lhs27616=V(0.45);V _rhs27617=([&]()->V{V _lhs27618=V(0.55);V _rhs27619=([&]()->V{V _callee27620=this->_v_20634_hash.get();return j::call(_callee27620,j::Args{_v_21929_x,_v_21919_seed.get(),V(2.0)});})();return V(j::number(_lhs27618)*j::number(_rhs27619));})();return j::binary("+",_lhs27616,_rhs27617);})());
_v_21934_len=([&]()->V{V _receiver27628=j::builtin("Math");V _method27629=this->_literals[51];V _method=j::get(_receiver27628,_method27629);j::Args _params27630=j::Args{V(1.0),([&]()->V{V _number27623=([&]()->V{V _lhs27624=_v_21932_room;V _rhs27625=_v_21933_tall;return V(j::number(_lhs27624)*j::number(_rhs27625));})();return V(std::floor(j::number(_number27623)+.5));})()};return j::call(_method,_params27630,_receiver27628);})();
{V _v_21935_k;
_v_21935_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs27631=_v_21935_k;V _rhs27632=_v_21934_len;return j::binary("<",_lhs27631,_rhs27632);})());(void)(j::increment(_v_21935_k,1,false))){
V _v_21936_y;
V _v_21937_f;
V _v_21938_phase;
V _v_21939_lean;
V _v_21940_xx;
V _v_21941_i;
V _v_21942_ch;
_v_21936_y=([&]()->V{V _lhs27633=_v_21930_b;V _rhs27634=_v_21935_k;return V(j::number(_lhs27633)-j::number(_rhs27634));})();
_v_21937_f=([&]()->V{V _lhs27635=([&]()->V{V _lhs27637=_v_21935_k;V _rhs27638=V(1.0);return j::binary("+",_lhs27637,_rhs27638);})();V _rhs27636=_v_21934_len;return V(j::number(_lhs27635)/j::number(_rhs27636));})();
_v_21938_phase=(j::truth(([&]()->V{V _lhs27639=_v_21913_kind.get();V _rhs27640=this->_literals[260];return V(j::equal(_lhs27639,_rhs27640,true));})())?([&]()->V{V _lhs27641=([&]()->V{V _lhs27643=_v_21927_w;V _rhs27644=([&]()->V{V _lhs27645=_v_21935_k;V _rhs27646=V(0.7);return V(j::number(_lhs27645)*j::number(_rhs27646));})();return V(j::number(_lhs27643)-j::number(_rhs27644));})();V _rhs27642=([&]()->V{V _lhs27647=_v_21929_x;V _rhs27648=V(0.4);return V(j::number(_lhs27647)*j::number(_rhs27648));})();return j::binary("+",_lhs27641,_rhs27642);})():([&]()->V{V _lhs27649=_v_21927_w;V _rhs27650=([&]()->V{V _lhs27651=_v_21929_x;V _rhs27652=V(0.35);return V(j::number(_lhs27651)*j::number(_rhs27652));})();return j::binary("+",_lhs27649,_rhs27650);})());
_v_21939_lean=([&]()->V{V _lhs27653=([&]()->V{V _lhs27655=_v_21915_sway.get();V _rhs27656=([&]()->V{V _number27657=_v_21938_phase;return V(std::sin(j::number(_number27657)));})();return V(j::number(_lhs27655)*j::number(_rhs27656));})();V _rhs27654=(j::truth(([&]()->V{V _lhs27658=_v_21913_kind.get();V _rhs27659=this->_literals[260];return V(j::equal(_lhs27658,_rhs27659,true));})())?V(0.8):([&]()->V{V _lhs27660=_v_21937_f;V _rhs27661=_v_21937_f;return V(j::number(_lhs27660)*j::number(_rhs27661));})());return V(j::number(_lhs27653)*j::number(_rhs27654));})();
_v_21940_xx=([&]()->V{V _lhs27662=_v_21929_x;V _rhs27663=([&]()->V{V _number27668=([&]()->V{V _lhs27669=_v_21939_lean;V _rhs27670=(j::truth(([&]()->V{V _lhs27671=_v_21913_kind.get();V _rhs27672=this->_literals[260];return V(j::equal(_lhs27671,_rhs27672,true));})())?V(1.0):_v_21937_f);return V(j::number(_lhs27669)*j::number(_rhs27670));})();return V(std::floor(j::number(_number27668)+.5));})();return j::binary("+",_lhs27662,_rhs27663);})();
_v_21941_i=([&]()->V{V _lhs27673=([&]()->V{V _lhs27675=_v_21936_y;V _rhs27676=_v_21922_cols.get();return V(j::number(_lhs27675)*j::number(_rhs27676));})();V _rhs27674=_v_21940_xx;return j::binary("+",_lhs27673,_rhs27674);})();
if(j::truth(([&]()->V{V _logical27677=([&]()->V{V _logical27678=([&]()->V{V _lhs27679=_v_21940_xx;V _rhs27680=V(0.0);return j::binary("<",_lhs27679,_rhs27680);})();return !j::truth(_logical27678)?([&]()->V{V _lhs27681=_v_21940_xx;V _rhs27682=_v_21922_cols.get();return j::binary(">=",_lhs27681,_rhs27682);})():_logical27678;})();return !j::truth(_logical27677)?j::unary("!",j::get(j::get(_v_21921_c.get(),this->_literals[71]),_v_21941_i)):_logical27677;})())){continue;
}
if(j::truth(([&]()->V{V _lhs27683=_v_21913_kind.get();V _rhs27684=this->_literals[260];return V(j::equal(_lhs27683,_rhs27684,true));})())){(void)((_v_21942_ch=(j::truth(([&]()->V{V _lhs27686=([&]()->V{V _number27688=_v_21938_phase;return V(std::cos(j::number(_number27688)));})();V _rhs27687=V(0.0);return j::binary(">",_lhs27686,_rhs27687);})())?this->_literals[174]:this->_literals[173])));
}else {if(j::truth(([&]()->V{V _lhs27689=_v_21935_k;V _rhs27690=([&]()->V{V _lhs27691=_v_21934_len;V _rhs27692=V(1.0);return V(j::number(_lhs27691)-j::number(_rhs27692));})();return V(j::equal(_lhs27689,_rhs27690,true));})())){(void)((_v_21942_ch=(j::truth(([&]()->V{V _lhs27694=_v_21939_lean;V _rhs27695=V(0.35);return j::binary(">",_lhs27694,_rhs27695);})())?this->_literals[95]:(j::truth(([&]()->V{V _lhs27696=_v_21939_lean;V _rhs27697=j::unary("-",V(0.35));return j::binary("<",_lhs27696,_rhs27697);})())?this->_literals[96]:this->_literals[97]))));
}else {(void)((_v_21942_ch=(j::truth(([&]()->V{V _logical27699=([&]()->V{V _lhs27700=_v_21939_lean;V _rhs27701=V(0.6);return j::binary(">",_lhs27700,_rhs27701);})();return j::truth(_logical27699)?([&]()->V{V _lhs27702=_v_21937_f;V _rhs27703=V(0.5);return j::binary(">",_lhs27702,_rhs27703);})():_logical27699;})())?this->_literals[95]:(j::truth(([&]()->V{V _logical27704=([&]()->V{V _lhs27705=_v_21939_lean;V _rhs27706=j::unary("-",V(0.6));return j::binary("<",_lhs27705,_rhs27706);})();return j::truth(_logical27704)?([&]()->V{V _lhs27707=_v_21937_f;V _rhs27708=V(0.5);return j::binary(">",_lhs27707,_rhs27708);})():_logical27704;})())?this->_literals[96]:this->_literals[97]))));
}
}
(void)(([&]()->V{V _receiver27717=_v_21926_s;V _method27718=this->_literals[196];V _method=j::get(_receiver27717,_method27718);j::Args _params27719=j::Args{_v_21941_i,([&]()->V{V _callee27709=this->_v_21577_code.get();return j::call(_callee27709,j::Args{_v_21942_ch});})(),([&]()->V{V _receiver27714=_v_21925_pt;V _method27715=this->_literals[195];V _method=j::get(_receiver27714,_method27715);j::Args _params27716=j::Args{(j::truth(([&]()->V{V _lhs27710=_v_21937_f;V _rhs27711=V(0.34);return j::binary("<",_lhs27710,_rhs27711);})())?V(0.0):(j::truth(([&]()->V{V _lhs27712=_v_21937_f;V _rhs27713=V(0.75);return j::binary("<",_lhs27712,_rhs27713);})())?V(1.0):V(2.0)))};return j::call(_method,_params27716,_receiver27714);})()};return j::call(_method,_params27719,_receiver27717);})());

}
}

}
}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_21943_lawn.get()=j::function([=](const j::Args &_args_fn21944,const V &_receiver_fn21944,const V &_self_fn21944) mutable ->V{
j::Cell _v_21945_c;
j::Cell _v_21946_sway;
j::Cell _v_21947_period;
V _v_21948_density;
j::Cell _v_21949_opaque;
V _v_21950_seed;
_v_21945_c.get()=_args_fn21944[0];
_v_21946_sway.get()=_args_fn21944[1];
_v_21947_period.get()=_args_fn21944[2];
_v_21948_density=_args_fn21944[3];
_v_21949_opaque.get()=_args_fn21944[4];
_v_21950_seed=_args_fn21944[5];
{
j::Cell _v_21951_cols;
j::Cell _v_21952_fixed;
j::Cell _v_21953_fixedCh;
j::Cell _v_21954_fixedRole;
j::Cell _v_21955_blades;
V _pattern27721=_v_21945_c.get();
_v_21951_cols.get()=j::get(_pattern27721,this->_literals[46]);
_v_21952_fixed.get()=([&]()->V{j::Args _array27722;return j::array(std::move(_array27722));})();
_v_21953_fixedCh.get()=([&]()->V{j::Args _array27723;return j::array(std::move(_array27723));})();
_v_21954_fixedRole.get()=([&]()->V{j::Args _array27724;return j::array(std::move(_array27724));})();
_v_21955_blades.get()=([&]()->V{j::Args _array27725;return j::array(std::move(_array27725));})();
{V _v_21956_x;
_v_21956_x=j::get(_v_21945_c.get(),this->_literals[30]);
for(;j::truth(([&]()->V{V _lhs27726=_v_21956_x;V _rhs27727=j::get(_v_21945_c.get(),this->_literals[32]);return j::binary("<",_lhs27726,_rhs27727);})());(void)(j::increment(_v_21956_x,1,false))){
V _v_21957_top;
V _v_21958_bottom;
V _v_21959_h;
V _v_21960_over;
V _v_21961_turf;
_v_21957_top=j::get(j::get(_v_21945_c.get(),this->_literals[33]),_v_21956_x);
_v_21958_bottom=j::get(j::get(_v_21945_c.get(),this->_literals[36]),_v_21956_x);
if(j::truth(([&]()->V{V _lhs27728=_v_21957_top;V _rhs27729=V(0.0);return j::binary("<",_lhs27728,_rhs27729);})())){continue;
}
_v_21959_h=([&]()->V{V _lhs27730=([&]()->V{V _lhs27732=_v_21958_bottom;V _rhs27733=_v_21957_top;return V(j::number(_lhs27732)-j::number(_rhs27733));})();V _rhs27731=V(1.0);return j::binary("+",_lhs27730,_rhs27731);})();
_v_21960_over=(j::truth(([&]()->V{V _lhs27734=_v_21959_h;V _rhs27735=V(4.0);return j::binary(">=",_lhs27734,_rhs27735);})())?V(2.0):(j::truth(([&]()->V{V _lhs27736=_v_21959_h;V _rhs27737=V(2.0);return j::binary(">=",_lhs27736,_rhs27737);})())?V(1.0):V(0.0)));
_v_21961_turf=([&]()->V{V _lhs27738=_v_21957_top;V _rhs27739=_v_21960_over;return j::binary("+",_lhs27738,_rhs27739);})();
{V _v_21962_y;
_v_21962_y=_v_21961_turf;
for(;j::truth(([&]()->V{V _lhs27740=_v_21962_y;V _rhs27741=_v_21958_bottom;return j::binary("<=",_lhs27740,_rhs27741);})());(void)(j::increment(_v_21962_y,1,false))){
V _v_21963_r;
V _v_21964_ch;
_v_21963_r=([&]()->V{V _callee27744=this->_v_20634_hash.get();return j::call(_callee27744,j::Args{_v_21956_x,_v_21962_y,([&]()->V{V _lhs27742=_v_21950_seed;V _rhs27743=V(5.0);return j::binary("+",_lhs27742,_rhs27743);})()});})();
_v_21964_ch=(j::truth(([&]()->V{V _lhs27745=_v_21962_y;V _rhs27746=_v_21961_turf;return V(j::equal(_lhs27745,_rhs27746,true));})())?(j::truth(([&]()->V{V _lhs27747=_v_21963_r;V _rhs27748=V(0.6);return j::binary("<",_lhs27747,_rhs27748);})())?this->_literals[267]:(j::truth(([&]()->V{V _lhs27749=_v_21963_r;V _rhs27750=V(0.85);return j::binary("<",_lhs27749,_rhs27750);})())?this->_literals[170]:this->_literals[268])):(j::truth(([&]()->V{V _lhs27751=_v_21963_r;V _rhs27752=V(0.12);return j::binary("<",_lhs27751,_rhs27752);})())?this->_literals[169]:(j::truth(([&]()->V{V _lhs27753=_v_21963_r;V _rhs27754=V(0.2);return j::binary("<",_lhs27753,_rhs27754);})())?this->_literals[268]:(j::truth(([&]()->V{V _lhs27755=_v_21963_r;V _rhs27756=V(0.24);return j::binary("<",_lhs27755,_rhs27756);})())?this->_literals[170]:this->_literals[134]))));
(void)((([&]()->V{V _receiver27761=_v_21952_fixed.get();V _method27762=this->_literals[149];V _method=j::get(_receiver27761,_method27762);j::Args _params27763=j::Args{([&]()->V{V _lhs27757=([&]()->V{V _lhs27759=_v_21962_y;V _rhs27760=_v_21951_cols.get();return V(j::number(_lhs27759)*j::number(_rhs27760));})();V _rhs27758=_v_21956_x;return j::binary("+",_lhs27757,_rhs27758);})()};return j::call(_method,_params27763,_receiver27761);})(),([&]()->V{V _receiver27765=_v_21953_fixedCh.get();V _method27766=this->_literals[149];V _method=j::get(_receiver27765,_method27766);j::Args _params27767=j::Args{([&]()->V{V _callee27764=this->_v_21577_code.get();return j::call(_callee27764,j::Args{_v_21964_ch});})()};return j::call(_method,_params27767,_receiver27765);})(),([&]()->V{V _receiver27770=_v_21954_fixedRole.get();V _method27771=this->_literals[149];V _method=j::get(_receiver27770,_method27771);j::Args _params27772=j::Args{(j::truth(([&]()->V{V _lhs27768=_v_21962_y;V _rhs27769=_v_21961_turf;return V(j::equal(_lhs27768,_rhs27769,true));})())?V(1.0):V(0.0))};return j::call(_method,_params27772,_receiver27770);})()));

}
}
if(j::truth(([&]()->V{V _logical27773=_v_21960_over;return j::truth(_logical27773)?([&]()->V{V _lhs27774=([&]()->V{V _callee27776=this->_v_20634_hash.get();return j::call(_callee27776,j::Args{_v_21956_x,_v_21950_seed,V(1.0)});})();V _rhs27775=_v_21948_density;return j::binary("<",_lhs27774,_rhs27775);})():_logical27773;})())){(void)(([&]()->V{V _receiver27805=_v_21955_blades.get();V _method27806=this->_literals[149];V _method=j::get(_receiver27805,_method27806);j::Args _params27807=j::Args{([&]()->V{V _obj27777=j::object();j::put(_obj27777,this->_literals[43],_v_21956_x);j::put(_obj27777,this->_literals[44],([&]()->V{V _lhs27778=_v_21961_turf;V _rhs27779=V(1.0);return V(j::number(_lhs27778)-j::number(_rhs27779));})());j::put(_obj27777,this->_literals[269],([&]()->V{V _lhs27780=V(1.0);V _rhs27781=([&]()->V{V _number27787=([&]()->V{V _lhs27788=([&]()->V{V _lhs27790=([&]()->V{V _callee27792=this->_v_20634_hash.get();return j::call(_callee27792,j::Args{_v_21956_x,_v_21950_seed,V(2.0)});})();V _rhs27791=_v_21960_over;return V(j::number(_lhs27790)*j::number(_rhs27791));})();V _rhs27789=V(0.999);return V(j::number(_lhs27788)*j::number(_rhs27789));})();return V(std::floor(j::number(_number27787)));})();return j::binary("+",_lhs27780,_rhs27781);})());j::put(_obj27777,this->_literals[270],([&]()->V{V _lhs27793=([&]()->V{V _number27798=([&]()->V{V _lhs27799=([&]()->V{V _callee27801=this->_v_20634_hash.get();return j::call(_callee27801,j::Args{_v_21956_x,_v_21950_seed,V(3.0)});})();V _rhs27800=V(3.0);return V(j::number(_lhs27799)*j::number(_rhs27800));})();return V(std::floor(j::number(_number27798)));})();V _rhs27794=V(1.0);return V(j::number(_lhs27793)-j::number(_rhs27794));})());j::put(_obj27777,this->_literals[271],(j::truth(([&]()->V{V _lhs27802=([&]()->V{V _callee27804=this->_v_20634_hash.get();return j::call(_callee27804,j::Args{_v_21956_x,_v_21950_seed,V(4.0)});})();V _rhs27803=V(0.5);return j::binary("<",_lhs27802,_rhs27803);})())?this->_literals[268]:this->_literals[170]));return _obj27777;})()};return j::call(_method,_params27807,_receiver27805);})());
}

}
}
return j::function([=](const j::Args &_args_fn21965,const V &_receiver_fn21965,const V &_self_fn21965) mutable ->V{
V _v_21966_t;
V _v_21967_pt;
_v_21966_t=_args_fn21965[0];
_v_21967_pt=_args_fn21965[1];
{
V _v_21968_s;
V _v_21971_w;
V _pattern27808=_v_21967_pt;
_v_21968_s=j::get(_pattern27808,this->_literals[191]);
if(j::truth(_v_21949_opaque.get())){{for(const auto &_item27809:j::elements(j::get(_v_21945_c.get(),this->_literals[150]))){V _v_21969_i;
_v_21969_i=_item27809;
(void)(([&]()->V{V _receiver27813=_v_21968_s;V _method27814=this->_literals[196];V _method=j::get(_receiver27813,_method27814);j::Args _params27815=j::Args{_v_21969_i,this->_v_21580_SPACE.get(),([&]()->V{V _receiver27810=_v_21967_pt;V _method27811=this->_literals[195];V _method=j::get(_receiver27810,_method27811);j::Args _params27812=j::Args{V(0.0)};return j::call(_method,_params27812,_receiver27810);})()};return j::call(_method,_params27815,_receiver27813);})());
}}
}
{V _v_21970_k;
_v_21970_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs27816=_v_21970_k;V _rhs27817=j::get(_v_21952_fixed.get(),this->_literals[19]);return j::binary("<",_lhs27816,_rhs27817);})());(void)(j::increment(_v_21970_k,1,false))){if(j::truth(j::get(j::get(_v_21945_c.get(),this->_literals[71]),j::get(_v_21952_fixed.get(),_v_21970_k)))){(void)(([&]()->V{V _receiver27821=_v_21968_s;V _method27822=this->_literals[196];V _method=j::get(_receiver27821,_method27822);j::Args _params27823=j::Args{j::get(_v_21952_fixed.get(),_v_21970_k),j::get(_v_21953_fixedCh.get(),_v_21970_k),([&]()->V{V _receiver27818=_v_21967_pt;V _method27819=this->_literals[195];V _method=j::get(_receiver27818,_method27819);j::Args _params27820=j::Args{j::get(_v_21954_fixedRole.get(),_v_21970_k)};return j::call(_method,_params27820,_receiver27818);})()};return j::call(_method,_params27823,_receiver27821);})());
}
}}
_v_21971_w=([&]()->V{V _lhs27824=([&]()->V{V _lhs27826=this->_v_20628_TAU.get();V _rhs27827=_v_21966_t;return V(j::number(_lhs27826)*j::number(_rhs27827));})();V _rhs27825=_v_21947_period.get();return V(j::number(_lhs27824)/j::number(_rhs27825));})();
{for(const auto &_item27828:j::elements(_v_21955_blades.get())){V _v_21972_b;
_v_21972_b=_item27828;
{
V _v_21973_lean;
V _v_21974_tip;
_v_21973_lean=([&]()->V{V _lhs27829=([&]()->V{V _lhs27831=j::get(_v_21972_b,this->_literals[270]);V _rhs27832=V(0.6);return V(j::number(_lhs27831)*j::number(_rhs27832));})();V _rhs27830=([&]()->V{V _lhs27833=_v_21946_sway.get();V _rhs27834=([&]()->V{V _number27839=([&]()->V{V _lhs27840=_v_21971_w;V _rhs27841=([&]()->V{V _lhs27842=j::get(_v_21972_b,this->_literals[43]);V _rhs27843=V(0.3);return V(j::number(_lhs27842)*j::number(_rhs27843));})();return V(j::number(_lhs27840)-j::number(_rhs27841));})();return V(std::sin(j::number(_number27839)));})();return V(j::number(_lhs27833)*j::number(_rhs27834));})();return j::binary("+",_lhs27829,_rhs27830);})();
_v_21974_tip=(j::truth(([&]()->V{V _lhs27844=_v_21973_lean;V _rhs27845=V(0.5);return j::binary(">",_lhs27844,_rhs27845);})())?this->_literals[95]:(j::truth(([&]()->V{V _lhs27846=_v_21973_lean;V _rhs27847=j::unary("-",V(0.5));return j::binary("<",_lhs27846,_rhs27847);})())?this->_literals[96]:this->_literals[97]));
{V _v_21975_k;
_v_21975_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs27848=_v_21975_k;V _rhs27849=j::get(_v_21972_b,this->_literals[269]);return j::binary("<",_lhs27848,_rhs27849);})());(void)(j::increment(_v_21975_k,1,false))){
V _v_21976_i;
V _v_21977_last;
V _v_21978_ch;
_v_21976_i=([&]()->V{V _lhs27850=([&]()->V{V _lhs27852=([&]()->V{V _lhs27854=j::get(_v_21972_b,this->_literals[44]);V _rhs27855=_v_21975_k;return V(j::number(_lhs27854)-j::number(_rhs27855));})();V _rhs27853=_v_21951_cols.get();return V(j::number(_lhs27852)*j::number(_rhs27853));})();V _rhs27851=j::get(_v_21972_b,this->_literals[43]);return j::binary("+",_lhs27850,_rhs27851);})();
if(j::truth(j::unary("!",j::get(j::get(_v_21945_c.get(),this->_literals[71]),_v_21976_i)))){continue;
}
_v_21977_last=([&]()->V{V _lhs27856=_v_21975_k;V _rhs27857=([&]()->V{V _lhs27858=j::get(_v_21972_b,this->_literals[269]);V _rhs27859=V(1.0);return V(j::number(_lhs27858)-j::number(_rhs27859));})();return V(j::equal(_lhs27856,_rhs27857,true));})();
_v_21978_ch=(j::truth(_v_21977_last)?(j::truth(([&]()->V{V _logical27860=([&]()->V{V _lhs27861=j::get(_v_21972_b,this->_literals[269]);V _rhs27862=V(1.0);return V(j::equal(_lhs27861,_rhs27862,true));})();return j::truth(_logical27860)?([&]()->V{V _lhs27863=_v_21974_tip;V _rhs27864=this->_literals[97];return V(j::equal(_lhs27863,_rhs27864,true));})():_logical27860;})())?j::get(_v_21972_b,this->_literals[271]):_v_21974_tip):this->_literals[97]);
(void)(([&]()->V{V _receiver27869=_v_21968_s;V _method27870=this->_literals[196];V _method=j::get(_receiver27869,_method27870);j::Args _params27871=j::Args{_v_21976_i,([&]()->V{V _callee27865=this->_v_21577_code.get();return j::call(_callee27865,j::Args{_v_21978_ch});})(),([&]()->V{V _receiver27866=_v_21967_pt;V _method27867=this->_literals[195];V _method=j::get(_receiver27866,_method27867);j::Args _params27868=j::Args{(j::truth(_v_21977_last)?V(2.0):V(1.0))};return j::call(_method,_params27868,_receiver27866);})()};return j::call(_method,_params27871,_receiver27869);})());

}
}

}
}}

}

return V{};
},2);

}

return V{};
},6);
this->_v_21979_sand.get()=j::function([=](const j::Args &_args_fn21980,const V &_receiver_fn21980,const V &_self_fn21980) mutable ->V{
V _v_21981_o;
_v_21981_o=_args_fn21980[0];
{
V _v_21982_p;
V _v_21983_colors;
j::Cell _v_21984_ripples;
j::Cell _v_21985_seed;
_v_21982_p=([&]()->V{V _callee27873=this->_v_20652_optionsOf.get();return j::call(_callee27873,j::Args{this->_literals[272],_v_21981_o,([&]()->V{j::Args _array27872;_array27872.push_back(this->_literals[98]);_array27872.push_back(this->_literals[273]);_array27872.push_back(this->_literals[109]);return j::array(std::move(_array27872));})()});})();
_v_21983_colors=([&]()->V{V _callee27874=this->_v_20717_colorsOf.get();return j::call(_callee27874,j::Args{this->_literals[274],j::get(_v_21982_p,this->_literals[98]),this->_literals[275],V(3.0)});})();
_v_21984_ripples.get()=([&]()->V{V _callee27875=this->_v_20696_boolOf.get();return j::call(_callee27875,j::Args{this->_literals[276],j::get(_v_21982_p,this->_literals[273]),V(true)});})();
_v_21985_seed.get()=([&]()->V{V _callee27876=this->_v_20701_seedOf.get();return j::call(_callee27876,j::Args{this->_literals[277],j::get(_v_21982_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _callee27979=this->_v_21571_makeMaterial.get();return j::call(_callee27979,j::Args{this->_literals[275],_v_21983_colors,j::builtin("undefined"),j::function([=](const j::Args &_args_fn21986,const V &_receiver_fn21986,const V &_self_fn21986) mutable ->V{
j::Cell _v_21987_c;
_v_21987_c.get()=_args_fn21986[0];
{
j::Cell _v_21988_cols;
j::Cell _v_21989_out;
j::Cell _v_21990_role;
V _pattern27877=_v_21987_c.get();
_v_21988_cols.get()=j::get(_pattern27877,this->_literals[46]);
_v_21989_out.get()=([&]()->V{V _callee27878=j::builtin("Uint16Array");return j::construct(_callee27878,j::Args{j::get(j::get(_v_21987_c.get(),this->_literals[150]),this->_literals[19])});})();
_v_21990_role.get()=([&]()->V{V _callee27879=j::builtin("Uint8Array");return j::construct(_callee27879,j::Args{j::get(j::get(_v_21987_c.get(),this->_literals[150]),this->_literals[19])});})();
(void)(([&]()->V{V _receiver27967=j::get(_v_21987_c.get(),this->_literals[150]);V _method27968=this->_literals[66];V _method=j::get(_receiver27967,_method27968);j::Args _params27969=j::Args{j::function([=](const j::Args &_args_fn21991,const V &_receiver_fn21991,const V &_self_fn21991) mutable ->V{
V _v_21992_i;
V _v_21993_k;
_v_21992_i=_args_fn21991[0];
_v_21993_k=_args_fn21991[1];
{
V _v_21994_x;
V _v_21995_y;
V _v_21996_down;
V _v_21997_r;
V _v_21998_top;
V _v_21999_ch;
_v_21994_x=([&]()->V{V _lhs27880=_v_21992_i;V _rhs27881=_v_21988_cols.get();return V(std::fmod(j::number(_lhs27880),j::number(_rhs27881)));})();
_v_21995_y=([&]()->V{V _lhs27882=([&]()->V{V _lhs27884=_v_21992_i;V _rhs27885=_v_21994_x;return V(j::number(_lhs27884)-j::number(_rhs27885));})();V _rhs27883=_v_21988_cols.get();return V(j::number(_lhs27882)/j::number(_rhs27883));})();
_v_21996_down=(j::truth(([&]()->V{V _lhs27886=([&]()->V{V _lhs27888=j::get(_v_21987_c.get(),this->_literals[37]);V _rhs27889=j::get(_v_21987_c.get(),this->_literals[35]);return V(j::number(_lhs27888)-j::number(_rhs27889));})();V _rhs27887=V(1.0);return j::binary(">",_lhs27886,_rhs27887);})())?([&]()->V{V _lhs27890=([&]()->V{V _lhs27892=_v_21995_y;V _rhs27893=j::get(j::get(_v_21987_c.get(),this->_literals[33]),_v_21994_x);return V(j::number(_lhs27892)-j::number(_rhs27893));})();V _rhs27891=([&]()->V{V _receiver27898=j::builtin("Math");V _method27899=this->_literals[51];V _method=j::get(_receiver27898,_method27899);j::Args _params27900=j::Args{V(1.0),([&]()->V{V _lhs27894=j::get(j::get(_v_21987_c.get(),this->_literals[36]),_v_21994_x);V _rhs27895=j::get(j::get(_v_21987_c.get(),this->_literals[33]),_v_21994_x);return V(j::number(_lhs27894)-j::number(_rhs27895));})()};return j::call(_method,_params27900,_receiver27898);})();return V(j::number(_lhs27890)/j::number(_rhs27891));})():V(0.5));
_v_21997_r=([&]()->V{V _callee27901=this->_v_20634_hash.get();return j::call(_callee27901,j::Args{_v_21994_x,_v_21995_y,_v_21985_seed.get()});})();
_v_21998_top=([&]()->V{V _lhs27902=_v_21995_y;V _rhs27903=j::get(j::get(_v_21987_c.get(),this->_literals[33]),_v_21994_x);return V(j::equal(_lhs27902,_rhs27903,true));})();
_v_21999_ch=(j::truth(_v_21998_top)?(j::truth(([&]()->V{V _lhs27904=_v_21997_r;V _rhs27905=V(0.5);return j::binary("<",_lhs27904,_rhs27905);})())?this->_literals[169]:(j::truth(([&]()->V{V _lhs27906=_v_21997_r;V _rhs27907=V(0.8);return j::binary("<",_lhs27906,_rhs27907);})())?this->_literals[268]:this->_literals[168])):(j::truth(([&]()->V{V _lhs27908=_v_21997_r;V _rhs27909=([&]()->V{V _lhs27910=V(0.25);V _rhs27911=([&]()->V{V _lhs27912=V(0.3);V _rhs27913=_v_21996_down;return V(j::number(_lhs27912)*j::number(_rhs27913));})();return j::binary("+",_lhs27910,_rhs27911);})();return j::binary("<",_lhs27908,_rhs27909);})())?this->_literals[278]:(j::truth(([&]()->V{V _lhs27914=_v_21997_r;V _rhs27915=([&]()->V{V _lhs27916=V(0.6);V _rhs27917=([&]()->V{V _lhs27918=V(0.2);V _rhs27919=_v_21996_down;return V(j::number(_lhs27918)*j::number(_rhs27919));})();return j::binary("+",_lhs27916,_rhs27917);})();return j::binary("<",_lhs27914,_rhs27915);})())?this->_literals[169]:(j::truth(([&]()->V{V _lhs27920=_v_21997_r;V _rhs27921=V(0.8);return j::binary("<",_lhs27920,_rhs27921);})())?this->_literals[268]:this->_literals[134]))));
if(j::truth(([&]()->V{V _logical27922=([&]()->V{V _logical27923=_v_21984_ripples.get();return j::truth(_logical27923)?j::unary("!",_v_21998_top):_logical27923;})();return j::truth(_logical27922)?([&]()->V{V _lhs27924=([&]()->V{V _number27941=([&]()->V{V _lhs27942=([&]()->V{V _lhs27944=([&]()->V{V _lhs27946=_v_21994_x;V _rhs27947=V(0.45);return V(j::number(_lhs27946)*j::number(_rhs27947));})();V _rhs27945=([&]()->V{V _lhs27948=_v_21995_y;V _rhs27949=V(2.1);return V(j::number(_lhs27948)*j::number(_rhs27949));})();return j::binary("+",_lhs27944,_rhs27945);})();V _rhs27943=([&]()->V{V _lhs27950=V(3.0);V _rhs27951=([&]()->V{V _callee27956=this->_v_21581_tiled.get();return j::call(_callee27956,j::Args{([&]()->V{V _lhs27952=_v_21994_x;V _rhs27953=V(0.1);return V(j::number(_lhs27952)*j::number(_rhs27953));})(),([&]()->V{V _lhs27954=_v_21995_y;V _rhs27955=V(0.3);return V(j::number(_lhs27954)*j::number(_rhs27955));})(),V(0.0),V(0.0),_v_21985_seed.get()});})();return V(j::number(_lhs27950)*j::number(_rhs27951));})();return j::binary("+",_lhs27942,_rhs27943);})();return V(std::sin(j::number(_number27941)));})();V _rhs27925=V(0.93);return j::binary(">",_lhs27924,_rhs27925);})():_logical27922;})())){(void)((_v_21999_ch=this->_literals[194]));
}
(void)(([&]()->V{V _base27959=_v_21989_out.get();V _key27960=_v_21993_k;V _assign27958=([&]()->V{V _callee27961=this->_v_21577_code.get();return j::call(_callee27961,j::Args{_v_21999_ch});})();return j::put(_base27959,_key27960,_assign27958);})());
(void)(([&]()->V{V _base27963=_v_21990_role.get();V _key27964=_v_21993_k;V _assign27962=(j::truth(_v_21998_top)?V(2.0):(j::truth(([&]()->V{V _lhs27965=_v_21997_r;V _rhs27966=V(0.3);return j::binary("<",_lhs27965,_rhs27966);})())?V(0.0):V(1.0)));return j::put(_base27963,_key27964,_assign27962);})());

}

return V{};
},2)};return j::call(_method,_params27969,_receiver27967);})());
return j::function([=](const j::Args &_args_fn22000,const V &_receiver_fn22000,const V &_self_fn22000) mutable ->V{
V _v_22001__t;
j::Cell _v_22002_pt;
_v_22001__t=_args_fn22000[0];
_v_22002_pt.get()=_args_fn22000[1];
return ([&]()->V{V _receiver27976=j::get(_v_21987_c.get(),this->_literals[150]);V _method27977=this->_literals[66];V _method=j::get(_receiver27976,_method27977);j::Args _params27978=j::Args{j::function([=](const j::Args &_args_fn22003,const V &_receiver_fn22003,const V &_self_fn22003) mutable ->V{
V _v_22004_i;
V _v_22005_k;
_v_22004_i=_args_fn22003[0];
_v_22005_k=_args_fn22003[1];
return ([&]()->V{V _receiver27973=j::get(_v_22002_pt.get(),this->_literals[191]);V _method27974=this->_literals[196];V _method=j::get(_receiver27973,_method27974);j::Args _params27975=j::Args{_v_22004_i,j::get(_v_21989_out.get(),_v_22005_k),([&]()->V{V _receiver27970=_v_22002_pt.get();V _method27971=this->_literals[195];V _method=j::get(_receiver27970,_method27971);j::Args _params27972=j::Args{j::get(_v_21990_role.get(),_v_22005_k)};return j::call(_method,_params27972,_receiver27970);})()};return j::call(_method,_params27975,_receiver27973);})();
return V{};
},2)};return j::call(_method,_params27978,_receiver27976);})();
return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22006_lava.get()=j::function([=](const j::Args &_args_fn22007,const V &_receiver_fn22007,const V &_self_fn22007) mutable ->V{
V _v_22008_o;
_v_22008_o=_args_fn22007[0];
{
V _v_22009_p;
V _v_22010_colors;
j::Cell _v_22011_count;
j::Cell _v_22012_period;
j::Cell _v_22013_seed;
_v_22009_p=([&]()->V{V _callee27981=this->_v_20652_optionsOf.get();return j::call(_callee27981,j::Args{this->_literals[279],_v_22008_o,([&]()->V{j::Args _array27980;_array27980.push_back(this->_literals[98]);_array27980.push_back(this->_literals[280]);_array27980.push_back(this->_literals[175]);_array27980.push_back(this->_literals[109]);return j::array(std::move(_array27980));})()});})();
_v_22010_colors=([&]()->V{V _callee27982=this->_v_20717_colorsOf.get();return j::call(_callee27982,j::Args{this->_literals[281],j::get(_v_22009_p,this->_literals[98]),this->_literals[282],V(4.0)});})();
_v_22011_count.get()=([&]()->V{V _callee27983=this->_v_20663_numberOf.get();return j::call(_callee27983,j::Args{this->_literals[283],j::get(_v_22009_p,this->_literals[280]),V(5.0),V(0.0),V(12.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _receiver27984=j::builtin("Number");V _method27985=this->_literals[18];V _method=j::get(_receiver27984,_method27985);j::Args _params27986=j::Args{_v_22011_count.get()};return j::call(_method,_params27986,_receiver27984);})()))){(void)(([&]()->V{V _callee27988=this->_v_20632_fail.get();return j::call(_callee27988,j::Args{([&]()->V{std::u16string _text27987;_text27987+=u"lava.blobs takes a whole number from 0 to 12, not ";_text27987+=j::string(_v_22011_count.get());_text27987+=u"";return V(std::move(_text27987));})()});})());
}
_v_22012_period.get()=([&]()->V{V _callee27989=this->_v_20682_periodOf.get();return j::call(_callee27989,j::Args{this->_literals[284],j::get(_v_22009_p,this->_literals[175]),V(8.0)});})();
_v_22013_seed.get()=([&]()->V{V _callee27990=this->_v_20701_seedOf.get();return j::call(_callee27990,j::Args{this->_literals[285],j::get(_v_22009_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _callee28168=this->_v_21571_makeMaterial.get();return j::call(_callee28168,j::Args{this->_literals[282],_v_22010_colors,_v_22012_period.get(),j::function([=](const j::Args &_args_fn22014,const V &_receiver_fn22014,const V &_self_fn22014) mutable ->V{
j::Cell _v_22015_c;
_v_22015_c.get()=_args_fn22014[0];
{
j::Cell _v_22016_cols;
j::Cell _v_22017_w;
j::Cell _v_22018_h;
j::Cell _v_22019_blobs;
j::Cell _v_22023_xs;
j::Cell _v_22024_ys;
V _pattern27991=_v_22015_c.get();
_v_22016_cols.get()=j::get(_pattern27991,this->_literals[46]);
_v_22017_w.get()=([&]()->V{V _receiver27996=j::builtin("Math");V _method27997=this->_literals[51];V _method=j::get(_receiver27996,_method27997);j::Args _params27998=j::Args{V(1.0),([&]()->V{V _lhs27992=j::get(_v_22015_c.get(),this->_literals[32]);V _rhs27993=j::get(_v_22015_c.get(),this->_literals[30]);return V(j::number(_lhs27992)-j::number(_rhs27993));})()};return j::call(_method,_params27998,_receiver27996);})();
_v_22018_h.get()=([&]()->V{V _receiver28003=j::builtin("Math");V _method28004=this->_literals[51];V _method=j::get(_receiver28003,_method28004);j::Args _params28005=j::Args{V(1.0),([&]()->V{V _lhs27999=j::get(_v_22015_c.get(),this->_literals[37]);V _rhs28000=j::get(_v_22015_c.get(),this->_literals[35]);return V(j::number(_lhs27999)-j::number(_rhs28000));})()};return j::call(_method,_params28005,_receiver28003);})();
_v_22019_blobs.get()=([&]()->V{V _receiver28033=j::builtin("Array");V _method28034=this->_literals[124];V _method=j::get(_receiver28033,_method28034);j::Args _params28035=j::Args{([&]()->V{V _obj28006=j::object();j::put(_obj28006,this->_literals[19],_v_22011_count.get());return _obj28006;})(),j::function([=](const j::Args &_args_fn22020,const V &_receiver_fn22020,const V &_self_fn22020) mutable ->V{
V _v_22021__;
V _v_22022_k;
_v_22021__=_args_fn22020[0];
_v_22022_k=_args_fn22020[1];
return ([&]()->V{V _obj28007=j::object();j::put(_obj28007,this->_literals[286],([&]()->V{V _lhs28008=V(0.3);V _rhs28009=([&]()->V{V _lhs28010=V(0.4);V _rhs28011=([&]()->V{V _callee28012=this->_v_20634_hash.get();return j::call(_callee28012,j::Args{_v_22022_k,_v_22013_seed.get(),V(1.0)});})();return V(j::number(_lhs28010)*j::number(_rhs28011));})();return j::binary("+",_lhs28008,_rhs28009);})());j::put(_obj28007,this->_literals[287],([&]()->V{V _receiver28022=j::builtin("Math");V _method28023=this->_literals[51];V _method=j::get(_receiver28022,_method28023);j::Args _params28024=j::Args{V(0.8),([&]()->V{V _lhs28013=_v_22017_w.get();V _rhs28014=([&]()->V{V _lhs28015=V(0.13);V _rhs28016=([&]()->V{V _lhs28017=V(0.07);V _rhs28018=([&]()->V{V _callee28019=this->_v_20634_hash.get();return j::call(_callee28019,j::Args{_v_22022_k,_v_22013_seed.get(),V(2.0)});})();return V(j::number(_lhs28017)*j::number(_rhs28018));})();return j::binary("+",_lhs28015,_rhs28016);})();return V(j::number(_lhs28013)*j::number(_rhs28014));})()};return j::call(_method,_params28024,_receiver28022);})());j::put(_obj28007,this->_literals[288],([&]()->V{V _lhs28025=V(1.0);V _rhs28026=(j::truth(([&]()->V{V _lhs28027=([&]()->V{V _callee28029=this->_v_20634_hash.get();return j::call(_callee28029,j::Args{_v_22022_k,_v_22013_seed.get(),V(3.0)});})();V _rhs28028=V(0.6);return j::binary(">",_lhs28027,_rhs28028);})())?V(1.0):V(0.0));return j::binary("+",_lhs28025,_rhs28026);})());j::put(_obj28007,this->_literals[289],([&]()->V{V _lhs28030=([&]()->V{V _callee28032=this->_v_20634_hash.get();return j::call(_callee28032,j::Args{_v_22022_k,_v_22013_seed.get(),V(4.0)});})();V _rhs28031=this->_v_20628_TAU.get();return V(j::number(_lhs28030)*j::number(_rhs28031));})());return _obj28007;})();
return V{};
},2)};return j::call(_method,_params28035,_receiver28033);})();
_v_22023_xs.get()=([&]()->V{V _callee28036=j::builtin("Float32Array");return j::construct(_callee28036,j::Args{_v_22011_count.get()});})();
_v_22024_ys.get()=([&]()->V{V _callee28037=j::builtin("Float32Array");return j::construct(_callee28037,j::Args{_v_22011_count.get()});})();
return j::function([=](const j::Args &_args_fn22025,const V &_receiver_fn22025,const V &_self_fn22025) mutable ->V{
V _v_22026_t;
V _v_22027_pt;
_v_22026_t=_args_fn22025[0];
_v_22027_pt=_args_fn22025[1];
{
V _v_22028_s;
j::Cell _v_22029_a;
V _pattern28038=_v_22027_pt;
_v_22028_s=j::get(_pattern28038,this->_literals[191]);
_v_22029_a.get()=([&]()->V{V _lhs28039=([&]()->V{V _lhs28041=this->_v_20628_TAU.get();V _rhs28042=_v_22026_t;return V(j::number(_lhs28041)*j::number(_rhs28042));})();V _rhs28040=_v_22012_period.get();return V(j::number(_lhs28039)/j::number(_rhs28040));})();
(void)(([&]()->V{V _receiver28089=_v_22019_blobs.get();V _method28090=this->_literals[66];V _method=j::get(_receiver28089,_method28090);j::Args _params28091=j::Args{j::function([=](const j::Args &_args_fn22030,const V &_receiver_fn22030,const V &_self_fn22030) mutable ->V{
V _v_22031_b;
V _v_22032_k;
_v_22031_b=_args_fn22030[0];
_v_22032_k=_args_fn22030[1];
{
V _v_22033_rise;
_v_22033_rise=([&]()->V{V _lhs28043=V(0.5);V _rhs28044=([&]()->V{V _lhs28045=V(0.5);V _rhs28046=([&]()->V{V _number28051=([&]()->V{V _lhs28052=([&]()->V{V _lhs28054=_v_22029_a.get();V _rhs28055=j::get(_v_22031_b,this->_literals[288]);return V(j::number(_lhs28054)*j::number(_rhs28055));})();V _rhs28053=j::get(_v_22031_b,this->_literals[289]);return j::binary("+",_lhs28052,_rhs28053);})();return V(std::cos(j::number(_number28051)));})();return V(j::number(_lhs28045)*j::number(_rhs28046));})();return V(j::number(_lhs28043)-j::number(_rhs28044));})();
(void)(([&]()->V{V _base28057=_v_22023_xs.get();V _key28058=_v_22032_k;V _assign28056=([&]()->V{V _lhs28059=([&]()->V{V _lhs28061=j::get(_v_22015_c.get(),this->_literals[30]);V _rhs28062=([&]()->V{V _lhs28063=_v_22017_w.get();V _rhs28064=j::get(_v_22031_b,this->_literals[286]);return V(j::number(_lhs28063)*j::number(_rhs28064));})();return j::binary("+",_lhs28061,_rhs28062);})();V _rhs28060=([&]()->V{V _lhs28065=([&]()->V{V _lhs28067=_v_22017_w.get();V _rhs28068=V(0.12);return V(j::number(_lhs28067)*j::number(_rhs28068));})();V _rhs28066=([&]()->V{V _number28073=([&]()->V{V _lhs28074=_v_22029_a.get();V _rhs28075=([&]()->V{V _lhs28076=j::get(_v_22031_b,this->_literals[289]);V _rhs28077=V(2.0);return V(j::number(_lhs28076)*j::number(_rhs28077));})();return j::binary("+",_lhs28074,_rhs28075);})();return V(std::sin(j::number(_number28073)));})();return V(j::number(_lhs28065)*j::number(_rhs28066));})();return j::binary("+",_lhs28059,_rhs28060);})();return j::put(_base28057,_key28058,_assign28056);})());
(void)(([&]()->V{V _base28079=_v_22024_ys.get();V _key28080=_v_22032_k;V _assign28078=([&]()->V{V _lhs28081=([&]()->V{V _lhs28083=j::get(_v_22015_c.get(),this->_literals[37]);V _rhs28084=V(1.0);return V(j::number(_lhs28083)-j::number(_rhs28084));})();V _rhs28082=([&]()->V{V _lhs28085=([&]()->V{V _lhs28087=_v_22018_h.get();V _rhs28088=V(2.0);return V(j::number(_lhs28087)-j::number(_rhs28088));})();V _rhs28086=_v_22033_rise;return V(j::number(_lhs28085)*j::number(_rhs28086));})();return V(j::number(_lhs28081)-j::number(_rhs28082));})();return j::put(_base28079,_key28080,_assign28078);})());

}

return V{};
},2)};return j::call(_method,_params28091,_receiver28089);})());
{for(const auto &_item28092:j::elements(j::get(_v_22015_c.get(),this->_literals[150]))){V _v_22034_i;
_v_22034_i=_item28092;
{
V _v_22035_x;
V _v_22036_y;
j::Cell _v_22037_px;
j::Cell _v_22038_py;
j::Cell _v_22039_f;
V _v_22044_ch;
_v_22035_x=([&]()->V{V _lhs28093=_v_22034_i;V _rhs28094=_v_22016_cols.get();return V(std::fmod(j::number(_lhs28093),j::number(_rhs28094)));})();
_v_22036_y=([&]()->V{V _lhs28095=([&]()->V{V _lhs28097=_v_22034_i;V _rhs28098=_v_22035_x;return V(j::number(_lhs28097)-j::number(_rhs28098));})();V _rhs28096=_v_22016_cols.get();return V(j::number(_lhs28095)/j::number(_rhs28096));})();
_v_22037_px.get()=([&]()->V{V _lhs28099=_v_22035_x;V _rhs28100=V(0.5);return j::binary("+",_lhs28099,_rhs28100);})();
_v_22038_py.get()=([&]()->V{V _lhs28101=_v_22036_y;V _rhs28102=V(0.5);return j::binary("+",_lhs28101,_rhs28102);})();
_v_22039_f.get()=([&]()->V{V _receiver28122=j::builtin("Math");V _method28123=this->_literals[51];V _method=j::get(_receiver28122,_method28123);j::Args _params28124=j::Args{V(0.0),([&]()->V{V _lhs28103=V(1.6);V _rhs28104=([&]()->V{V _lhs28105=([&]()->V{V _lhs28107=([&]()->V{V _lhs28109=([&]()->V{V _lhs28111=j::get(_v_22015_c.get(),this->_literals[37]);V _rhs28112=_v_22038_py.get();return V(j::number(_lhs28111)-j::number(_rhs28112));})();V _rhs28110=([&]()->V{V _receiver28117=j::builtin("Math");V _method28118=this->_literals[51];V _method=j::get(_receiver28117,_method28118);j::Args _params28119=j::Args{V(1.0),([&]()->V{V _lhs28113=_v_22018_h.get();V _rhs28114=V(0.08);return V(j::number(_lhs28113)*j::number(_rhs28114));})()};return j::call(_method,_params28119,_receiver28117);})();return V(j::number(_lhs28109)/j::number(_rhs28110));})();V _rhs28108=V(2.0);return V(std::pow(j::number(_lhs28107),j::number(_rhs28108)));})();V _rhs28106=V(0.8);return V(j::number(_lhs28105)*j::number(_rhs28106));})();return V(j::number(_lhs28103)-j::number(_rhs28104));})()};return j::call(_method,_params28124,_receiver28122);})();
(void)(([&]()->V{V _receiver28144=_v_22019_blobs.get();V _method28145=this->_literals[66];V _method=j::get(_receiver28144,_method28145);j::Args _params28146=j::Args{j::function([=](const j::Args &_args_fn22040,const V &_receiver_fn22040,const V &_self_fn22040) mutable ->V{
V _v_22041_b;
V _v_22042_k;
_v_22041_b=_args_fn22040[0];
_v_22042_k=_args_fn22040[1];
{
V _v_22043_d2;
_v_22043_d2=([&]()->V{V _lhs28125=([&]()->V{V _lhs28127=([&]()->V{V _lhs28129=_v_22037_px.get();V _rhs28130=j::get(_v_22023_xs.get(),_v_22042_k);return V(j::number(_lhs28129)-j::number(_rhs28130));})();V _rhs28128=V(2.0);return V(std::pow(j::number(_lhs28127),j::number(_rhs28128)));})();V _rhs28126=([&]()->V{V _lhs28131=([&]()->V{V _lhs28133=([&]()->V{V _lhs28135=_v_22038_py.get();V _rhs28136=j::get(_v_22024_ys.get(),_v_22042_k);return V(j::number(_lhs28135)-j::number(_rhs28136));})();V _rhs28134=this->_v_20727_ASPECT.get();return V(j::number(_lhs28133)*j::number(_rhs28134));})();V _rhs28132=V(2.0);return V(std::pow(j::number(_lhs28131),j::number(_rhs28132)));})();return j::binary("+",_lhs28125,_rhs28126);})();
(void)((_v_22039_f.get()=j::binary("+",_v_22039_f.get(),([&]()->V{V _lhs28138=([&]()->V{V _lhs28140=j::get(_v_22041_b,this->_literals[287]);V _rhs28141=j::get(_v_22041_b,this->_literals[287]);return V(j::number(_lhs28140)*j::number(_rhs28141));})();V _rhs28139=([&]()->V{V _lhs28142=_v_22043_d2;V _rhs28143=V(0.01);return j::binary("+",_lhs28142,_rhs28143);})();return V(j::number(_lhs28138)/j::number(_rhs28139));})())));

}

return V{};
},2)};return j::call(_method,_params28146,_receiver28144);})());
if(j::truth(([&]()->V{V _lhs28147=_v_22039_f.get();V _rhs28148=V(0.8);return j::binary("<",_lhs28147,_rhs28148);})())){continue;
}
_v_22044_ch=(j::truth(([&]()->V{V _lhs28149=_v_22039_f.get();V _rhs28150=V(2.2);return j::binary(">",_lhs28149,_rhs28150);})())?this->_literals[252]:(j::truth(([&]()->V{V _lhs28151=_v_22039_f.get();V _rhs28152=V(1.4);return j::binary(">",_lhs28151,_rhs28152);})())?this->_literals[290]:(j::truth(([&]()->V{V _lhs28153=_v_22039_f.get();V _rhs28154=V(1.0);return j::binary(">",_lhs28153,_rhs28154);})())?this->_literals[132]:this->_literals[169])));
(void)(([&]()->V{V _receiver28165=_v_22028_s;V _method28166=this->_literals[196];V _method=j::get(_receiver28165,_method28166);j::Args _params28167=j::Args{_v_22034_i,([&]()->V{V _callee28155=this->_v_21577_code.get();return j::call(_callee28155,j::Args{_v_22044_ch});})(),([&]()->V{V _receiver28162=_v_22027_pt;V _method28163=this->_literals[195];V _method=j::get(_receiver28162,_method28163);j::Args _params28164=j::Args{(j::truth(([&]()->V{V _lhs28156=_v_22039_f.get();V _rhs28157=V(2.2);return j::binary(">",_lhs28156,_rhs28157);})())?V(3.0):(j::truth(([&]()->V{V _lhs28158=_v_22039_f.get();V _rhs28159=V(1.4);return j::binary(">",_lhs28158,_rhs28159);})())?V(2.0):(j::truth(([&]()->V{V _lhs28160=_v_22039_f.get();V _rhs28161=V(1.0);return j::binary(">",_lhs28160,_rhs28161);})())?V(1.0):V(0.0))))};return j::call(_method,_params28164,_receiver28162);})()};return j::call(_method,_params28167,_receiver28165);})());

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22045_ice.get()=j::function([=](const j::Args &_args_fn22046,const V &_receiver_fn22046,const V &_self_fn22046) mutable ->V{
V _v_22047_o;
_v_22047_o=_args_fn22046[0];
{
V _v_22048_p;
V _v_22049_colors;
j::Cell _v_22050_period;
j::Cell _v_22051_seed;
_v_22048_p=([&]()->V{V _callee28170=this->_v_20652_optionsOf.get();return j::call(_callee28170,j::Args{this->_literals[291],_v_22047_o,([&]()->V{j::Args _array28169;_array28169.push_back(this->_literals[98]);_array28169.push_back(this->_literals[175]);_array28169.push_back(this->_literals[109]);return j::array(std::move(_array28169));})()});})();
_v_22049_colors=([&]()->V{V _callee28171=this->_v_20717_colorsOf.get();return j::call(_callee28171,j::Args{this->_literals[292],j::get(_v_22048_p,this->_literals[98]),this->_literals[293],V(3.0)});})();
_v_22050_period.get()=([&]()->V{V _callee28172=this->_v_20682_periodOf.get();return j::call(_callee28172,j::Args{this->_literals[294],j::get(_v_22048_p,this->_literals[175]),V(4.0)});})();
_v_22051_seed.get()=([&]()->V{V _callee28173=this->_v_20701_seedOf.get();return j::call(_callee28173,j::Args{this->_literals[295],j::get(_v_22048_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _callee28416=this->_v_21571_makeMaterial.get();return j::call(_callee28416,j::Args{this->_literals[293],_v_22049_colors,_v_22050_period.get(),j::function([=](const j::Args &_args_fn22052,const V &_receiver_fn22052,const V &_self_fn22052) mutable ->V{
j::Cell _v_22053_c;
_v_22053_c.get()=_args_fn22052[0];
{
j::Cell _v_22054_cols;
V _v_22055_rows;
j::Cell _v_22056_w;
j::Cell _v_22057_h;
V _v_22058_r;
j::Cell _v_22063_pts;
V _v_22064_chipped;
j::Cell _v_22065_chunk;
j::Cell _v_22069_own;
j::Cell _v_22072_line;
j::Cell _v_22073_edge;
j::Cell _v_22074_edgeCh;
j::Cell _v_22075_lit;
j::Cell _v_22076_blank;
j::Cell _v_22080_inner;
j::Cell _v_22083_facet;
V _pattern28174=_v_22053_c.get();
_v_22054_cols.get()=j::get(_pattern28174,this->_literals[46]);
_v_22055_rows=j::get(_pattern28174,this->_literals[48]);
_v_22056_w.get()=([&]()->V{V _receiver28179=j::builtin("Math");V _method28180=this->_literals[51];V _method=j::get(_receiver28179,_method28180);j::Args _params28181=j::Args{V(1.0),([&]()->V{V _lhs28175=j::get(_v_22053_c.get(),this->_literals[32]);V _rhs28176=j::get(_v_22053_c.get(),this->_literals[30]);return V(j::number(_lhs28175)-j::number(_rhs28176));})()};return j::call(_method,_params28181,_receiver28179);})();
_v_22057_h.get()=([&]()->V{V _receiver28186=j::builtin("Math");V _method28187=this->_literals[51];V _method=j::get(_receiver28186,_method28187);j::Args _params28188=j::Args{V(1.0),([&]()->V{V _lhs28182=j::get(_v_22053_c.get(),this->_literals[37]);V _rhs28183=j::get(_v_22053_c.get(),this->_literals[35]);return V(j::number(_lhs28182)-j::number(_rhs28183));})()};return j::call(_method,_params28188,_receiver28186);})();
_v_22058_r=j::function([=](const j::Args &_args_fn22059,const V &_receiver_fn22059,const V &_self_fn22059) mutable ->V{
V _v_22060_k;
V _v_22061_lo;
V _v_22062_hi;
_v_22060_k=_args_fn22059[0];
_v_22061_lo=_args_fn22059[1];
_v_22062_hi=_args_fn22059[2];
return ([&]()->V{V _lhs28189=_v_22061_lo;V _rhs28190=([&]()->V{V _lhs28191=([&]()->V{V _lhs28193=_v_22062_hi;V _rhs28194=_v_22061_lo;return V(j::number(_lhs28193)-j::number(_rhs28194));})();V _rhs28192=([&]()->V{V _callee28199=this->_v_20634_hash.get();return j::call(_callee28199,j::Args{_v_22051_seed.get(),_v_22060_k,([&]()->V{V _lhs28195=([&]()->V{V _lhs28197=_v_22056_w.get();V _rhs28198=V(31.0);return V(j::number(_lhs28197)*j::number(_rhs28198));})();V _rhs28196=_v_22057_h.get();return j::binary("+",_lhs28195,_rhs28196);})()});})();return V(j::number(_lhs28191)*j::number(_rhs28192));})();return j::binary("+",_lhs28189,_rhs28190);})();
return V{};
},3);
_v_22063_pts.get()=([&]()->V{j::Args _array28200;_array28200.push_back(([&]()->V{j::Args _array28201;_array28201.push_back(([&]()->V{V _lhs28202=j::get(_v_22053_c.get(),this->_literals[30]);V _rhs28203=([&]()->V{V _lhs28204=_v_22056_w.get();V _rhs28205=([&]()->V{V _callee28206=_v_22058_r;return j::call(_callee28206,j::Args{V(1.0),V(0.12),V(0.4)});})();return V(j::number(_lhs28204)*j::number(_rhs28205));})();return j::binary("+",_lhs28202,_rhs28203);})());_array28201.push_back(j::get(_v_22053_c.get(),this->_literals[35]));return j::array(std::move(_array28201));})());_array28200.push_back(([&]()->V{j::Args _array28207;_array28207.push_back(([&]()->V{V _lhs28208=j::get(_v_22053_c.get(),this->_literals[30]);V _rhs28209=([&]()->V{V _lhs28210=_v_22056_w.get();V _rhs28211=([&]()->V{V _callee28212=_v_22058_r;return j::call(_callee28212,j::Args{V(2.0),V(0.45),V(0.6)});})();return V(j::number(_lhs28210)*j::number(_rhs28211));})();return j::binary("+",_lhs28208,_rhs28209);})());_array28207.push_back(([&]()->V{V _lhs28213=j::get(_v_22053_c.get(),this->_literals[35]);V _rhs28214=([&]()->V{V _lhs28215=_v_22057_h.get();V _rhs28216=([&]()->V{V _callee28217=_v_22058_r;return j::call(_callee28217,j::Args{V(3.0),V(0.0),V(0.12)});})();return V(j::number(_lhs28215)*j::number(_rhs28216));})();return j::binary("+",_lhs28213,_rhs28214);})());return j::array(std::move(_array28207));})());_array28200.push_back(([&]()->V{j::Args _array28218;_array28218.push_back(([&]()->V{V _lhs28219=j::get(_v_22053_c.get(),this->_literals[32]);V _rhs28220=([&]()->V{V _lhs28221=_v_22056_w.get();V _rhs28222=([&]()->V{V _callee28223=_v_22058_r;return j::call(_callee28223,j::Args{V(4.0),V(0.08),V(0.3)});})();return V(j::number(_lhs28221)*j::number(_rhs28222));})();return V(j::number(_lhs28219)-j::number(_rhs28220));})());_array28218.push_back(j::get(_v_22053_c.get(),this->_literals[35]));return j::array(std::move(_array28218));})());_array28200.push_back(([&]()->V{j::Args _array28224;_array28224.push_back(j::get(_v_22053_c.get(),this->_literals[32]));_array28224.push_back(([&]()->V{V _lhs28225=j::get(_v_22053_c.get(),this->_literals[35]);V _rhs28226=([&]()->V{V _lhs28227=_v_22057_h.get();V _rhs28228=([&]()->V{V _callee28229=_v_22058_r;return j::call(_callee28229,j::Args{V(5.0),V(0.25),V(0.5)});})();return V(j::number(_lhs28227)*j::number(_rhs28228));})();return j::binary("+",_lhs28225,_rhs28226);})());return j::array(std::move(_array28224));})());_array28200.push_back(([&]()->V{j::Args _array28230;_array28230.push_back(([&]()->V{V _lhs28231=j::get(_v_22053_c.get(),this->_literals[32]);V _rhs28232=([&]()->V{V _lhs28233=_v_22056_w.get();V _rhs28234=([&]()->V{V _callee28235=_v_22058_r;return j::call(_callee28235,j::Args{V(6.0),V(0.12),V(0.3)});})();return V(j::number(_lhs28233)*j::number(_rhs28234));})();return V(j::number(_lhs28231)-j::number(_rhs28232));})());_array28230.push_back(j::get(_v_22053_c.get(),this->_literals[37]));return j::array(std::move(_array28230));})());_array28200.push_back(([&]()->V{j::Args _array28236;_array28236.push_back(([&]()->V{V _lhs28237=j::get(_v_22053_c.get(),this->_literals[30]);V _rhs28238=([&]()->V{V _lhs28239=_v_22056_w.get();V _rhs28240=([&]()->V{V _callee28241=_v_22058_r;return j::call(_callee28241,j::Args{V(7.0),V(0.2),V(0.4)});})();return V(j::number(_lhs28239)*j::number(_rhs28240));})();return j::binary("+",_lhs28237,_rhs28238);})());_array28236.push_back(j::get(_v_22053_c.get(),this->_literals[37]));return j::array(std::move(_array28236));})());_array28200.push_back(([&]()->V{j::Args _array28242;_array28242.push_back(j::get(_v_22053_c.get(),this->_literals[30]));_array28242.push_back(([&]()->V{V _lhs28243=j::get(_v_22053_c.get(),this->_literals[37]);V _rhs28244=([&]()->V{V _lhs28245=_v_22057_h.get();V _rhs28246=([&]()->V{V _callee28247=_v_22058_r;return j::call(_callee28247,j::Args{V(8.0),V(0.35),V(0.6)});})();return V(j::number(_lhs28245)*j::number(_rhs28246));})();return V(j::number(_lhs28243)-j::number(_rhs28244));})());return j::array(std::move(_array28242));})());_array28200.push_back(([&]()->V{j::Args _array28248;_array28248.push_back(([&]()->V{V _lhs28249=j::get(_v_22053_c.get(),this->_literals[30]);V _rhs28250=([&]()->V{V _lhs28251=_v_22056_w.get();V _rhs28252=([&]()->V{V _callee28253=_v_22058_r;return j::call(_callee28253,j::Args{V(9.0),V(0.0),V(0.06)});})();return V(j::number(_lhs28251)*j::number(_rhs28252));})();return j::binary("+",_lhs28249,_rhs28250);})());_array28248.push_back(([&]()->V{V _lhs28254=j::get(_v_22053_c.get(),this->_literals[35]);V _rhs28255=([&]()->V{V _lhs28256=_v_22057_h.get();V _rhs28257=([&]()->V{V _callee28258=_v_22058_r;return j::call(_callee28258,j::Args{V(10.0),V(0.3),V(0.5)});})();return V(j::number(_lhs28256)*j::number(_rhs28257));})();return j::binary("+",_lhs28254,_rhs28255);})());return j::array(std::move(_array28248));})());return j::array(std::move(_array28200));})();
_v_22064_chipped=([&]()->V{V _logical28259=([&]()->V{V _lhs28260=_v_22056_w.get();V _rhs28261=V(5.0);return j::binary(">=",_lhs28260,_rhs28261);})();return j::truth(_logical28259)?([&]()->V{V _lhs28262=_v_22057_h.get();V _rhs28263=V(2.0);return j::binary(">=",_lhs28262,_rhs28263);})():_logical28259;})();
_v_22065_chunk.get()=(j::truth(_v_22064_chipped)?([&]()->V{V _callee28270=this->_v_21440_cellsOf.get();return j::call(_callee28270,j::Args{([&]()->V{V _obj28264=j::object();j::put(_obj28264,this->_literals[20],j::function([=](const j::Args &_args_fn22066,const V &_receiver_fn22066,const V &_self_fn22066) mutable ->V{
V _v_22067_x;
V _v_22068_y;
_v_22067_x=_args_fn22066[0];
_v_22068_y=_args_fn22066[1];
return ([&]()->V{V _logical28265=([&]()->V{V _receiver28266=j::get(_v_22053_c.get(),this->_literals[167]);V _method28267=this->_literals[20];V _method=j::get(_receiver28266,_method28267);j::Args _params28268=j::Args{_v_22067_x,_v_22068_y};return j::call(_method,_params28268,_receiver28266);})();return j::truth(_logical28265)?([&]()->V{V _callee28269=this->_v_20837_inPolygon.get();return j::call(_callee28269,j::Args{_v_22063_pts.get(),_v_22067_x,_v_22068_y});})():_logical28265;})();
return V{};
},2));j::put(_obj28264,this->_literals[30],j::get(_v_22053_c.get(),this->_literals[30]));j::put(_obj28264,this->_literals[35],j::get(_v_22053_c.get(),this->_literals[35]));j::put(_obj28264,this->_literals[32],j::get(_v_22053_c.get(),this->_literals[32]));j::put(_obj28264,this->_literals[37],j::get(_v_22053_c.get(),this->_literals[37]));return _obj28264;})(),_v_22054_cols.get(),_v_22055_rows});})():_v_22053_c.get());
_v_22069_own.get()=([&]()->V{V _callee28273=j::builtin("Uint8Array");return j::construct(_callee28273,j::Args{([&]()->V{V _lhs28271=_v_22054_cols.get();V _rhs28272=_v_22055_rows;return V(j::number(_lhs28271)*j::number(_rhs28272));})()});})();
{for(const auto &_item28274:j::elements(j::get(_v_22053_c.get(),this->_literals[150]))){V _v_22070_i;
_v_22070_i=_item28274;
(void)(([&]()->V{V _base28276=_v_22069_own.get();V _key28277=_v_22070_i;V _assign28275=V(1.0);return j::put(_base28276,_key28277,_assign28275);})());
}}
{for(const auto &_item28278:j::elements(j::get(([&]()->V{V _receiver28279=_v_22053_c.get();V _method28280=this->_literals[155];V _method=j::get(_receiver28279,_method28280);j::Args _params28281=j::Args{};return j::call(_method,_params28281,_receiver28279);})(),this->_literals[159]))){V _v_22071_i;
_v_22071_i=_item28278;
(void)(([&]()->V{V _base28283=_v_22069_own.get();V _key28284=_v_22071_i;V _assign28282=V(1.0);return j::put(_base28283,_key28284,_assign28282);})());
}}
_v_22072_line.get()=([&]()->V{V _receiver28285=_v_22065_chunk.get();V _method28286=this->_literals[155];V _method=j::get(_receiver28285,_method28286);j::Args _params28287=j::Args{};return j::call(_method,_params28287,_receiver28285);})();
_v_22073_edge.get()=([&]()->V{j::Args _array28288;return j::array(std::move(_array28288));})();
_v_22074_edgeCh.get()=([&]()->V{j::Args _array28289;return j::array(std::move(_array28289));})();
_v_22075_lit.get()=([&]()->V{j::Args _array28290;return j::array(std::move(_array28290));})();
_v_22076_blank.get()=([&]()->V{V _callee28291=j::builtin("Set");return j::construct(_callee28291,j::Args{});})();
(void)(([&]()->V{V _receiver28325=j::get(_v_22072_line.get(),this->_literals[159]);V _method28326=this->_literals[66];V _method=j::get(_receiver28325,_method28326);j::Args _params28327=j::Args{j::function([=](const j::Args &_args_fn22077,const V &_receiver_fn22077,const V &_self_fn22077) mutable ->V{
V _v_22078_i;
V _v_22079_k;
_v_22078_i=_args_fn22077[0];
_v_22079_k=_args_fn22077[1];
{
if(j::truth(j::unary("!",j::get(_v_22069_own.get(),_v_22078_i)))){return V{};
}
if(j::truth(([&]()->V{V _lhs28292=j::get(j::get(_v_22072_line.get(),this->_literals[160]),_v_22079_k);V _rhs28293=this->_v_21580_SPACE.get();return V(j::equal(_lhs28292,_rhs28293,true));})())){return j::unary("void",([&]()->V{V _logical28294=j::get(j::get(_v_22065_chunk.get(),this->_literals[71]),_v_22078_i);return j::truth(_logical28294)?([&]()->V{V _receiver28295=_v_22076_blank.get();V _method28296=this->_literals[296];V _method=j::get(_receiver28295,_method28296);j::Args _params28297=j::Args{_v_22078_i};return j::call(_method,_params28297,_receiver28295);})():_logical28294;})());
}
(void)((([&]()->V{V _receiver28298=_v_22073_edge.get();V _method28299=this->_literals[149];V _method=j::get(_receiver28298,_method28299);j::Args _params28300=j::Args{_v_22078_i};return j::call(_method,_params28300,_receiver28298);})(),([&]()->V{V _receiver28301=_v_22074_edgeCh.get();V _method28302=this->_literals[149];V _method=j::get(_receiver28301,_method28302);j::Args _params28303=j::Args{j::get(j::get(_v_22072_line.get(),this->_literals[160]),_v_22079_k)};return j::call(_method,_params28303,_receiver28301);})()));
(void)(([&]()->V{V _receiver28322=_v_22075_lit.get();V _method28323=this->_literals[149];V _method=j::get(_receiver28322,_method28323);j::Args _params28324=j::Args{(j::truth(j::get(j::get(_v_22065_chunk.get(),this->_literals[71]),_v_22078_i))?([&]()->V{V _logical28304=([&]()->V{V _lhs28305=j::get(j::get(_v_22065_chunk.get(),this->_literals[164]),_v_22078_i);V _rhs28306=V(0.3);return j::binary(">",_lhs28305,_rhs28306);})();return !j::truth(_logical28304)?([&]()->V{V _lhs28307=j::get(j::get(_v_22065_chunk.get(),this->_literals[163]),_v_22078_i);V _rhs28308=V(0.3);return j::binary(">",_lhs28307,_rhs28308);})():_logical28304;})():([&]()->V{V _receiver28319=_v_22065_chunk.get();V _method28320=this->_literals[154];V _method=j::get(_receiver28319,_method28320);j::Args _params28321=j::Args{([&]()->V{V _lhs28309=_v_22078_i;V _rhs28310=_v_22054_cols.get();return V(std::fmod(j::number(_lhs28309),j::number(_rhs28310)));})(),([&]()->V{V _lhs28311=([&]()->V{V _lhs28313=([&]()->V{V _lhs28315=_v_22078_i;V _rhs28316=([&]()->V{V _lhs28317=_v_22078_i;V _rhs28318=_v_22054_cols.get();return V(std::fmod(j::number(_lhs28317),j::number(_rhs28318)));})();return V(j::number(_lhs28315)-j::number(_rhs28316));})();V _rhs28314=_v_22054_cols.get();return V(j::number(_lhs28313)/j::number(_rhs28314));})();V _rhs28312=V(1.0);return j::binary("+",_lhs28311,_rhs28312);})()};return j::call(_method,_params28321,_receiver28319);})())};return j::call(_method,_params28324,_receiver28322);})());

}

return V{};
},2)};return j::call(_method,_params28327,_receiver28325);})());
_v_22080_inner.get()=([&]()->V{V _receiver28333=([&]()->V{V _receiver28336=j::builtin("Array");V _method28337=this->_literals[124];V _method=j::get(_receiver28336,_method28337);j::Args _params28338=j::Args{j::get(_v_22065_chunk.get(),this->_literals[150])};return j::call(_method,_params28338,_receiver28336);})();V _method28334=this->_literals[158];V _method=j::get(_receiver28333,_method28334);j::Args _params28335=j::Args{j::function([=](const j::Args &_args_fn22081,const V &_receiver_fn22081,const V &_self_fn22081) mutable ->V{
V _v_22082_i;
_v_22082_i=_args_fn22081[0];
return ([&]()->V{V _logical28328=([&]()->V{V _logical28329=j::unary("!",j::get(j::get(_v_22065_chunk.get(),this->_literals[152]),_v_22082_i));return !j::truth(_logical28329)?([&]()->V{V _receiver28330=_v_22076_blank.get();V _method28331=this->_literals[154];V _method=j::get(_receiver28330,_method28331);j::Args _params28332=j::Args{_v_22082_i};return j::call(_method,_params28332,_receiver28330);})():_logical28329;})();return j::truth(_logical28328)?j::get(_v_22069_own.get(),_v_22082_i):_logical28328;})();
return V{};
},1)};return j::call(_method,_params28335,_receiver28333);})();
_v_22083_facet.get()=([&]()->V{V _callee28339=j::builtin("Set");return j::construct(_callee28339,j::Args{});})();
{V _v_22084_k;
_v_22084_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs28340=_v_22084_k;V _rhs28341=([&]()->V{V _receiver28349=j::builtin("Math");V _method28350=this->_literals[51];V _method=j::get(_receiver28349,_method28350);j::Args _params28351=j::Args{V(1.0),([&]()->V{V _number28344=([&]()->V{V _lhs28345=_v_22057_h.get();V _rhs28346=V(2.0);return V(j::number(_lhs28345)/j::number(_rhs28346));})();return V(std::floor(j::number(_number28344)));})()};return j::call(_method,_params28351,_receiver28349);})();return j::binary("<",_lhs28340,_rhs28341);})());(void)(j::increment(_v_22084_k,1,false))){
V _v_22085_y;
V _v_22086_l;
_v_22085_y=([&]()->V{V _lhs28352=([&]()->V{V _lhs28354=j::get(_v_22065_chunk.get(),this->_literals[35]);V _rhs28355=V(1.0);return j::binary("+",_lhs28354,_rhs28355);})();V _rhs28353=_v_22084_k;return j::binary("+",_lhs28352,_rhs28353);})();
_v_22086_l=j::get(j::get(_v_22065_chunk.get(),this->_literals[28]),_v_22085_y);
if(j::truth(([&]()->V{V _logical28356=([&]()->V{V _logical28357=([&]()->V{V _lhs28358=_v_22085_y;V _rhs28359=_v_22055_rows;return j::binary("<",_lhs28358,_rhs28359);})();return j::truth(_logical28357)?([&]()->V{V _lhs28360=_v_22086_l;V _rhs28361=V(0.0);return j::binary(">=",_lhs28360,_rhs28361);})():_logical28357;})();return j::truth(_logical28356)?([&]()->V{V _lhs28362=([&]()->V{V _lhs28364=([&]()->V{V _lhs28366=_v_22086_l;V _rhs28367=V(2.0);return j::binary("+",_lhs28366,_rhs28367);})();V _rhs28365=([&]()->V{V _lhs28368=_v_22084_k;V _rhs28369=V(2.0);return V(j::number(_lhs28368)*j::number(_rhs28369));})();return j::binary("+",_lhs28364,_rhs28365);})();V _rhs28363=j::get(j::get(_v_22065_chunk.get(),this->_literals[31]),_v_22085_y);return j::binary("<",_lhs28362,_rhs28363);})():_logical28356;})())){(void)(([&]()->V{V _receiver28380=_v_22083_facet.get();V _method28381=this->_literals[296];V _method=j::get(_receiver28380,_method28381);j::Args _params28382=j::Args{([&]()->V{V _lhs28370=([&]()->V{V _lhs28372=([&]()->V{V _lhs28374=([&]()->V{V _lhs28376=_v_22085_y;V _rhs28377=_v_22054_cols.get();return V(j::number(_lhs28376)*j::number(_rhs28377));})();V _rhs28375=_v_22086_l;return j::binary("+",_lhs28374,_rhs28375);})();V _rhs28373=V(2.0);return j::binary("+",_lhs28372,_rhs28373);})();V _rhs28371=([&]()->V{V _lhs28378=_v_22084_k;V _rhs28379=V(2.0);return V(j::number(_lhs28378)*j::number(_rhs28379));})();return j::binary("+",_lhs28370,_rhs28371);})()};return j::call(_method,_params28382,_receiver28380);})());
}

}
}
return j::function([=](const j::Args &_args_fn22087,const V &_receiver_fn22087,const V &_self_fn22087) mutable ->V{
V _v_22088_t;
V _v_22089_pt;
_v_22088_t=_args_fn22087[0];
_v_22089_pt=_args_fn22087[1];
{
V _v_22090_s;
V _v_22091_under;
V _v_22092_glint;
V _pattern28383=_v_22089_pt;
_v_22090_s=j::get(_pattern28383,this->_literals[191]);
_v_22091_under=j::get(_v_22089_pt,this->_literals[192]);
_v_22092_glint=([&]()->V{V _lhs28384=([&]()->V{V _callee28388=this->_v_20633_fract.get();return j::call(_callee28388,j::Args{([&]()->V{V _lhs28386=_v_22088_t;V _rhs28387=_v_22050_period.get();return V(j::number(_lhs28386)/j::number(_rhs28387));})()});})();V _rhs28385=V(0.2);return j::binary("<",_lhs28384,_rhs28385);})();
{for(const auto &_item28389:j::elements(_v_22080_inner.get())){V _v_22093_i;
_v_22093_i=_item28389;
{
if(j::truth(([&]()->V{V _receiver28390=_v_22083_facet.get();V _method28391=this->_literals[154];V _method=j::get(_receiver28390,_method28391);j::Args _params28392=j::Args{_v_22093_i};return j::call(_method,_params28392,_receiver28390);})())){(void)(([&]()->V{V _receiver28397=_v_22090_s;V _method28398=this->_literals[196];V _method=j::get(_receiver28397,_method28398);j::Args _params28399=j::Args{_v_22093_i,([&]()->V{V _callee28393=this->_v_21577_code.get();return j::call(_callee28393,j::Args{(j::truth(_v_22092_glint)?this->_literals[297]:this->_literals[298])});})(),([&]()->V{V _receiver28394=_v_22089_pt;V _method28395=this->_literals[195];V _method=j::get(_receiver28394,_method28395);j::Args _params28396=j::Args{V(2.0)};return j::call(_method,_params28396,_receiver28394);})()};return j::call(_method,_params28399,_receiver28397);})());
}else {(void)(([&]()->V{V _receiver28405=_v_22090_s;V _method28406=this->_literals[196];V _method=j::get(_receiver28405,_method28406);j::Args _params28407=j::Args{_v_22093_i,(j::truth(([&]()->V{V _lhs28400=j::get(j::get(_v_22091_under,this->_literals[160]),_v_22093_i);V _rhs28401=this->_v_20623_EMPTY.get();return V(!j::equal(_lhs28400,_rhs28401,true));})())?j::get(j::get(_v_22091_under,this->_literals[160]),_v_22093_i):this->_v_21580_SPACE.get()),([&]()->V{V _receiver28402=_v_22089_pt;V _method28403=this->_literals[195];V _method=j::get(_receiver28402,_method28403);j::Args _params28404=j::Args{V(1.0)};return j::call(_method,_params28404,_receiver28402);})()};return j::call(_method,_params28407,_receiver28405);})());
}

}
}}
{V _v_22094_k;
_v_22094_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs28408=_v_22094_k;V _rhs28409=j::get(_v_22073_edge.get(),this->_literals[19]);return j::binary("<",_lhs28408,_rhs28409);})());(void)(j::increment(_v_22094_k,1,false))){(void)(([&]()->V{V _receiver28413=_v_22090_s;V _method28414=this->_literals[196];V _method=j::get(_receiver28413,_method28414);j::Args _params28415=j::Args{j::get(_v_22073_edge.get(),_v_22094_k),j::get(_v_22074_edgeCh.get(),_v_22094_k),([&]()->V{V _receiver28410=_v_22089_pt;V _method28411=this->_literals[195];V _method=j::get(_receiver28410,_method28411);j::Args _params28412=j::Args{(j::truth(j::get(_v_22075_lit.get(),_v_22094_k))?V(2.0):V(0.0))};return j::call(_method,_params28412,_receiver28410);})()};return j::call(_method,_params28415,_receiver28413);})());
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22095_haloOf.get()=j::function([=](const j::Args &_args_fn22096,const V &_receiver_fn22096,const V &_self_fn22096) mutable ->V{
V _v_22097_c;
j::Cell _v_22098_glow;
_v_22097_c=_args_fn22096[0];
_v_22098_glow.get()=_args_fn22096[1];
{
j::Cell _v_22099_cells;
j::Cell _v_22100_far;
V _v_22101_cols;
V _v_22102_rows;
V _v_22103_g;
V _v_22104_gy;
V _v_22105_near;
_v_22099_cells.get()=([&]()->V{j::Args _array28417;return j::array(std::move(_array28417));})();
_v_22100_far.get()=([&]()->V{j::Args _array28418;return j::array(std::move(_array28418));})();
if(j::truth(j::unary("!",([&]()->V{V _lhs28419=_v_22098_glow.get();V _rhs28420=V(0.0);return j::binary(">",_lhs28419,_rhs28420);})()))){return ([&]()->V{V _obj28421=j::object();j::put(_obj28421,this->_literals[159],_v_22099_cells.get());j::put(_obj28421,this->_literals[299],_v_22100_far.get());return _obj28421;})();
}
V _pattern28422=_v_22097_c;
_v_22101_cols=j::get(_pattern28422,this->_literals[46]);
_v_22102_rows=j::get(_pattern28422,this->_literals[48]);
_v_22103_g=([&]()->V{V _number28423=_v_22098_glow.get();return V(std::ceil(j::number(_number28423)));})();
_v_22104_gy=([&]()->V{V _number28426=([&]()->V{V _lhs28427=_v_22103_g;V _rhs28428=this->_v_20727_ASPECT.get();return V(j::number(_lhs28427)/j::number(_rhs28428));})();return V(std::ceil(j::number(_number28426)));})();
_v_22105_near=([&]()->V{V _receiver28429=([&]()->V{V _callee28434=j::builtin("Float32Array");return j::construct(_callee28434,j::Args{([&]()->V{V _lhs28432=_v_22101_cols;V _rhs28433=_v_22102_rows;return V(j::number(_lhs28432)*j::number(_rhs28433));})()});})();V _method28430=this->_literals[73];V _method=j::get(_receiver28429,_method28430);j::Args _params28431=j::Args{j::builtin("Infinity")};return j::call(_method,_params28431,_receiver28429);})();
{for(const auto &_item28435:j::elements(j::get(_v_22097_c,this->_literals[150]))){V _v_22106_i;
_v_22106_i=_item28435;
{
V _v_22107_x;
V _v_22108_y;
_v_22107_x=([&]()->V{V _lhs28436=_v_22106_i;V _rhs28437=_v_22101_cols;return V(std::fmod(j::number(_lhs28436),j::number(_rhs28437)));})();
_v_22108_y=([&]()->V{V _lhs28438=([&]()->V{V _lhs28440=_v_22106_i;V _rhs28441=_v_22107_x;return V(j::number(_lhs28440)-j::number(_rhs28441));})();V _rhs28439=_v_22101_cols;return V(j::number(_lhs28438)/j::number(_rhs28439));})();
{V _v_22109_dy;
_v_22109_dy=j::unary("-",_v_22104_gy);
for(;j::truth(([&]()->V{V _lhs28442=_v_22109_dy;V _rhs28443=_v_22104_gy;return j::binary("<=",_lhs28442,_rhs28443);})());(void)(j::increment(_v_22109_dy,1,false))){{V _v_22110_dx;
_v_22110_dx=j::unary("-",_v_22103_g);
for(;j::truth(([&]()->V{V _lhs28444=_v_22110_dx;V _rhs28445=_v_22103_g;return j::binary("<=",_lhs28444,_rhs28445);})());(void)(j::increment(_v_22110_dx,1,false))){
V _v_22111_xx;
V _v_22112_yy;
V _v_22113_j;
_v_22111_xx=([&]()->V{V _lhs28446=_v_22107_x;V _rhs28447=_v_22110_dx;return j::binary("+",_lhs28446,_rhs28447);})();
_v_22112_yy=([&]()->V{V _lhs28448=_v_22108_y;V _rhs28449=_v_22109_dy;return j::binary("+",_lhs28448,_rhs28449);})();
if(j::truth(([&]()->V{V _logical28450=([&]()->V{V _logical28451=([&]()->V{V _logical28452=([&]()->V{V _lhs28453=_v_22111_xx;V _rhs28454=V(0.0);return j::binary("<",_lhs28453,_rhs28454);})();return !j::truth(_logical28452)?([&]()->V{V _lhs28455=_v_22111_xx;V _rhs28456=_v_22101_cols;return j::binary(">=",_lhs28455,_rhs28456);})():_logical28452;})();return !j::truth(_logical28451)?([&]()->V{V _lhs28457=_v_22112_yy;V _rhs28458=V(0.0);return j::binary("<",_lhs28457,_rhs28458);})():_logical28451;})();return !j::truth(_logical28450)?([&]()->V{V _lhs28459=_v_22112_yy;V _rhs28460=_v_22102_rows;return j::binary(">=",_lhs28459,_rhs28460);})():_logical28450;})())){continue;
}
_v_22113_j=([&]()->V{V _lhs28461=([&]()->V{V _lhs28463=_v_22112_yy;V _rhs28464=_v_22101_cols;return V(j::number(_lhs28463)*j::number(_rhs28464));})();V _rhs28462=_v_22111_xx;return j::binary("+",_lhs28461,_rhs28462);})();
if(j::truth(j::unary("!",j::get(j::get(_v_22097_c,this->_literals[71]),_v_22113_j)))){(void)(([&]()->V{V _base28466=_v_22105_near;V _key28467=_v_22113_j;V _assign28465=([&]()->V{V _receiver28476=j::builtin("Math");V _method28477=this->_literals[52];V _method=j::get(_receiver28476,_method28477);j::Args _params28478=j::Args{j::get(_v_22105_near,_v_22113_j),([&]()->V{V _number28470=_v_22110_dx;V _number28471=([&]()->V{V _lhs28472=_v_22109_dy;V _rhs28473=this->_v_20727_ASPECT.get();return V(j::number(_lhs28472)*j::number(_rhs28473));})();return V(std::hypot(j::number(_number28470),j::number(_number28471)));})()};return j::call(_method,_params28478,_receiver28476);})();return j::put(_base28466,_key28467,_assign28465);})());
}

}
}
}}

}
}}
(void)(([&]()->V{V _receiver28487=_v_22105_near;V _method28488=this->_literals[66];V _method=j::get(_receiver28487,_method28488);j::Args _params28489=j::Args{j::function([=](const j::Args &_args_fn22114,const V &_receiver_fn22114,const V &_self_fn22114) mutable ->V{
V _v_22115_d;
V _v_22116_j;
_v_22115_d=_args_fn22114[0];
_v_22116_j=_args_fn22114[1];
{
if(j::truth(([&]()->V{V _lhs28479=_v_22115_d;V _rhs28480=_v_22098_glow.get();return j::binary("<=",_lhs28479,_rhs28480);})())){(void)((([&]()->V{V _receiver28481=_v_22099_cells.get();V _method28482=this->_literals[149];V _method=j::get(_receiver28481,_method28482);j::Args _params28483=j::Args{_v_22116_j};return j::call(_method,_params28483,_receiver28481);})(),([&]()->V{V _receiver28484=_v_22100_far.get();V _method28485=this->_literals[149];V _method=j::get(_receiver28484,_method28485);j::Args _params28486=j::Args{_v_22115_d};return j::call(_method,_params28486,_receiver28484);})()));
}

}

return V{};
},2)};return j::call(_method,_params28489,_receiver28487);})());
return ([&]()->V{V _obj28490=j::object();j::put(_obj28490,this->_literals[159],_v_22099_cells.get());j::put(_obj28490,this->_literals[299],_v_22100_far.get());return _obj28490;})();

}

return V{};
},2);
this->_v_22117_neon.get()=j::function([=](const j::Args &_args_fn22118,const V &_receiver_fn22118,const V &_self_fn22118) mutable ->V{
V _v_22119_o;
_v_22119_o=_args_fn22118[0];
{
V _v_22120_p;
V _v_22121_colors;
j::Cell _v_22122_glow;
j::Cell _v_22123_flicker;
j::Cell _v_22124_period;
j::Cell _v_22125_tube;
_v_22120_p=([&]()->V{V _callee28492=this->_v_20652_optionsOf.get();return j::call(_callee28492,j::Args{this->_literals[300],_v_22119_o,([&]()->V{j::Args _array28491;_array28491.push_back(this->_literals[98]);_array28491.push_back(this->_literals[208]);_array28491.push_back(this->_literals[301]);_array28491.push_back(this->_literals[175]);_array28491.push_back(this->_literals[116]);return j::array(std::move(_array28491));})()});})();
_v_22121_colors=([&]()->V{V _callee28493=this->_v_20717_colorsOf.get();return j::call(_callee28493,j::Args{this->_literals[302],j::get(_v_22120_p,this->_literals[98]),this->_literals[303],V(3.0)});})();
_v_22122_glow.get()=([&]()->V{V _callee28494=this->_v_20663_numberOf.get();return j::call(_callee28494,j::Args{this->_literals[304],j::get(_v_22120_p,this->_literals[208]),V(2.0),V(0.0),V(6.0)});})();
_v_22123_flicker.get()=([&]()->V{V _callee28495=this->_v_20696_boolOf.get();return j::call(_callee28495,j::Args{this->_literals[305],j::get(_v_22120_p,this->_literals[301]),V(true)});})();
_v_22124_period.get()=([&]()->V{V _callee28496=this->_v_20682_periodOf.get();return j::call(_callee28496,j::Args{this->_literals[306],j::get(_v_22120_p,this->_literals[175]),V(4.0)});})();
_v_22125_tube.get()=([&]()->V{V _callee28498=this->_v_21577_code.get();return j::call(_callee28498,j::Args{([&]()->V{V _callee28497=this->_v_20706_charOf.get();return j::call(_callee28497,j::Args{this->_literals[307],j::get(_v_22120_p,this->_literals[116]),this->_literals[129]});})()});})();
return ([&]()->V{V _callee28562=this->_v_21571_makeMaterial.get();return j::call(_callee28562,j::Args{this->_literals[303],_v_22121_colors,(j::truth(_v_22123_flicker.get())?_v_22124_period.get():j::builtin("undefined")),j::function([=](const j::Args &_args_fn22126,const V &_receiver_fn22126,const V &_self_fn22126) mutable ->V{
j::Cell _v_22127_c;
_v_22127_c.get()=_args_fn22126[0];
{
j::Cell _v_22128_cols;
j::Cell _v_22129_core;
V _v_22134_ring;
j::Cell _v_22135_halo;
j::Cell _v_22136_haloCh;
V _pattern28499=_v_22127_c.get();
_v_22128_cols.get()=j::get(_pattern28499,this->_literals[46]);
_v_22129_core.get()=([&]()->V{V _receiver28510=j::get(_v_22127_c.get(),this->_literals[150]);V _method28511=this->_literals[8];V _method=j::get(_receiver28510,_method28511);j::Args _params28512=j::Args{j::function([=](const j::Args &_args_fn22130,const V &_receiver_fn22130,const V &_self_fn22130) mutable ->V{
V _v_22131_i;
_v_22131_i=_args_fn22130[0];
{
V _v_22132_x;
V _v_22133_ch;
_v_22132_x=([&]()->V{V _lhs28500=_v_22131_i;V _rhs28501=_v_22128_cols.get();return V(std::fmod(j::number(_lhs28500),j::number(_rhs28501)));})();
_v_22133_ch=([&]()->V{V _chain28502=_v_22127_c.get();V _chain28503=j::get(_chain28502,this->_literals[116]);if(j::nullish(_chain28503))return V{};V _chain28504=j::call(_chain28503,j::Args{_v_22132_x,([&]()->V{V _lhs28505=([&]()->V{V _lhs28507=_v_22131_i;V _rhs28508=_v_22132_x;return V(j::number(_lhs28507)-j::number(_rhs28508));})();V _rhs28506=_v_22128_cols.get();return V(j::number(_lhs28505)/j::number(_rhs28506));})()},_chain28502);return _chain28504;})();
return (j::truth(_v_22133_ch)?([&]()->V{V _callee28509=this->_v_21577_code.get();return j::call(_callee28509,j::Args{_v_22133_ch});})():_v_22125_tube.get());

}

return V{};
},1)};return j::call(_method,_params28512,_receiver28510);})();
_v_22134_ring=([&]()->V{V _callee28513=this->_v_22095_haloOf.get();return j::call(_callee28513,j::Args{_v_22127_c.get(),_v_22122_glow.get()});})();
_v_22135_halo.get()=j::get(_v_22134_ring,this->_literals[159]);
_v_22136_haloCh.get()=([&]()->V{V _receiver28519=j::get(_v_22134_ring,this->_literals[299]);V _method28520=this->_literals[8];V _method=j::get(_receiver28519,_method28520);j::Args _params28521=j::Args{j::function([=](const j::Args &_args_fn22137,const V &_receiver_fn22137,const V &_self_fn22137) mutable ->V{
V _v_22138_d;
_v_22138_d=_args_fn22137[0];
return ([&]()->V{V _callee28518=this->_v_21577_code.get();return j::call(_callee28518,j::Args{(j::truth(([&]()->V{V _lhs28514=_v_22138_d;V _rhs28515=([&]()->V{V _lhs28516=_v_22122_glow.get();V _rhs28517=V(2.0);return V(j::number(_lhs28516)/j::number(_rhs28517));})();return j::binary("<=",_lhs28514,_rhs28515);})())?this->_literals[278]:this->_literals[169])});})();
return V{};
},1)};return j::call(_method,_params28521,_receiver28519);})();
return j::function([=](const j::Args &_args_fn22139,const V &_receiver_fn22139,const V &_self_fn22139) mutable ->V{
V _v_22140_t;
j::Cell _v_22141_pt;
_v_22140_t=_args_fn22139[0];
_v_22141_pt.get()=_args_fn22139[1];
{
j::Cell _v_22142_s;
V _v_22143_f;
j::Cell _v_22144_off;
V _pattern28522=_v_22141_pt.get();
_v_22142_s.get()=j::get(_pattern28522,this->_literals[191]);
_v_22143_f=([&]()->V{V _callee28525=this->_v_20633_fract.get();return j::call(_callee28525,j::Args{([&]()->V{V _lhs28523=_v_22140_t;V _rhs28524=_v_22124_period.get();return V(j::number(_lhs28523)/j::number(_rhs28524));})()});})();
_v_22144_off.get()=([&]()->V{V _logical28526=_v_22123_flicker.get();return j::truth(_logical28526)?([&]()->V{V _logical28527=([&]()->V{V _logical28528=([&]()->V{V _lhs28529=_v_22143_f;V _rhs28530=V(0.62);return j::binary(">",_lhs28529,_rhs28530);})();return j::truth(_logical28528)?([&]()->V{V _lhs28531=_v_22143_f;V _rhs28532=V(0.65);return j::binary("<",_lhs28531,_rhs28532);})():_logical28528;})();return !j::truth(_logical28527)?([&]()->V{V _logical28533=([&]()->V{V _lhs28534=_v_22143_f;V _rhs28535=V(0.7);return j::binary(">",_lhs28534,_rhs28535);})();return j::truth(_logical28533)?([&]()->V{V _lhs28536=_v_22143_f;V _rhs28537=V(0.72);return j::binary("<",_lhs28536,_rhs28537);})():_logical28533;})():_logical28527;})():_logical28526;})();
(void)(([&]()->V{V _receiver28547=_v_22135_halo.get();V _method28548=this->_literals[66];V _method=j::get(_receiver28547,_method28548);j::Args _params28549=j::Args{j::function([=](const j::Args &_args_fn22145,const V &_receiver_fn22145,const V &_self_fn22145) mutable ->V{
V _v_22146_j;
V _v_22147_k;
_v_22146_j=_args_fn22145[0];
_v_22147_k=_args_fn22145[1];
{
if(j::truth(([&]()->V{V _logical28538=j::unary("!",_v_22144_off.get());return j::truth(_logical28538)?([&]()->V{V _lhs28539=j::get(j::get(_v_22142_s.get(),this->_literals[160]),_v_22146_j);V _rhs28540=this->_v_20623_EMPTY.get();return V(j::equal(_lhs28539,_rhs28540,true));})():_logical28538;})())){(void)(([&]()->V{V _receiver28544=_v_22142_s.get();V _method28545=this->_literals[196];V _method=j::get(_receiver28544,_method28545);j::Args _params28546=j::Args{_v_22146_j,j::get(_v_22136_haloCh.get(),_v_22147_k),([&]()->V{V _receiver28541=_v_22141_pt.get();V _method28542=this->_literals[195];V _method=j::get(_receiver28541,_method28542);j::Args _params28543=j::Args{V(0.0)};return j::call(_method,_params28543,_receiver28541);})()};return j::call(_method,_params28546,_receiver28544);})());
}

}

return V{};
},2)};return j::call(_method,_params28549,_receiver28547);})());
(void)(([&]()->V{V _receiver28559=j::get(_v_22127_c.get(),this->_literals[150]);V _method28560=this->_literals[66];V _method=j::get(_receiver28559,_method28560);j::Args _params28561=j::Args{j::function([=](const j::Args &_args_fn22148,const V &_receiver_fn22148,const V &_self_fn22148) mutable ->V{
V _v_22149_i;
V _v_22150_k;
_v_22149_i=_args_fn22148[0];
_v_22150_k=_args_fn22148[1];
return ([&]()->V{V _receiver28556=_v_22142_s.get();V _method28557=this->_literals[196];V _method=j::get(_receiver28556,_method28557);j::Args _params28558=j::Args{_v_22149_i,(j::truth(_v_22144_off.get())?([&]()->V{V _callee28550=this->_v_21577_code.get();return j::call(_callee28550,j::Args{this->_literals[169]});})():j::get(_v_22129_core.get(),_v_22150_k)),([&]()->V{V _receiver28553=_v_22141_pt.get();V _method28554=this->_literals[195];V _method=j::get(_receiver28553,_method28554);j::Args _params28555=j::Args{(j::truth(_v_22144_off.get())?V(0.0):(j::truth(([&]()->V{V _lhs28551=j::get(j::get(_v_22127_c.get(),this->_literals[165]),_v_22149_i);V _rhs28552=V(1.0);return j::binary(">=",_lhs28551,_rhs28552);})())?V(2.0):V(1.0)))};return j::call(_method,_params28555,_receiver28553);})()};return j::call(_method,_params28558,_receiver28556);})();
return V{};
},2)};return j::call(_method,_params28561,_receiver28559);})());

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22151_solid.get()=j::function([=](const j::Args &_args_fn22152,const V &_receiver_fn22152,const V &_self_fn22152) mutable ->V{
V _v_22153_o;
_v_22153_o=_args_fn22152[0];
{
V _v_22154_p;
V _v_22155_colors;
j::Cell _v_22156_chars;
j::Cell _v_22157_edge;
_v_22154_p=([&]()->V{V _callee28564=this->_v_20652_optionsOf.get();return j::call(_callee28564,j::Args{this->_literals[308],_v_22153_o,([&]()->V{j::Args _array28563;_array28563.push_back(this->_literals[98]);_array28563.push_back(this->_literals[116]);_array28563.push_back(this->_literals[207]);_array28563.push_back(this->_literals[135]);return j::array(std::move(_array28563));})()});})();
_v_22155_colors=([&]()->V{V _callee28565=this->_v_20717_colorsOf.get();return j::call(_callee28565,j::Args{this->_literals[309],j::get(_v_22154_p,this->_literals[98]),this->_literals[310],V(3.0)});})();
if(j::truth(([&]()->V{V _logical28566=([&]()->V{V _lhs28567=j::get(_v_22154_p,this->_literals[116]);V _rhs28568=j::builtin("undefined");return V(!j::equal(_lhs28567,_rhs28568,true));})();return j::truth(_logical28566)?([&]()->V{V _lhs28569=j::get(_v_22154_p,this->_literals[207]);V _rhs28570=j::builtin("undefined");return V(!j::equal(_lhs28569,_rhs28570,true));})():_logical28566;})())){(void)(([&]()->V{V _callee28571=this->_v_20632_fail.get();return j::call(_callee28571,j::Args{this->_literals[311]});})());
}
_v_22156_chars.get()=(j::truth(([&]()->V{V _lhs28572=j::get(_v_22154_p,this->_literals[207]);V _rhs28573=j::builtin("undefined");return V(!j::equal(_lhs28572,_rhs28573,true));})())?([&]()->V{V _callee28574=this->_v_20711_rampOf.get();return j::call(_callee28574,j::Args{this->_literals[312],j::get(_v_22154_p,this->_literals[207]),this->_literals[129]});})():([&]()->V{V _callee28575=this->_v_20706_charOf.get();return j::call(_callee28575,j::Args{this->_literals[313],j::get(_v_22154_p,this->_literals[116]),this->_literals[129]});})());
_v_22157_edge.get()=([&]()->V{V _callee28576=this->_v_20696_boolOf.get();return j::call(_callee28576,j::Args{this->_literals[314],j::get(_v_22154_p,this->_literals[135]),V(false)});})();
return ([&]()->V{V _callee28656=this->_v_21571_makeMaterial.get();return j::call(_callee28656,j::Args{this->_literals[315],_v_22155_colors,j::builtin("undefined"),j::function([=](const j::Args &_args_fn22158,const V &_receiver_fn22158,const V &_self_fn22158) mutable ->V{
j::Cell _v_22159_c;
_v_22159_c.get()=_args_fn22158[0];
{
j::Cell _v_22160_cols;
j::Cell _v_22161_md;
j::Cell _v_22162_out;
j::Cell _v_22168_role;
j::Cell _v_22171_line;
V _pattern28577=_v_22159_c.get();
_v_22160_cols.get()=j::get(_pattern28577,this->_literals[46]);
_v_22161_md.get()=([&]()->V{V _receiver28580=j::builtin("Math");V _method28581=this->_literals[51];V _method=j::get(_receiver28580,_method28581);j::Args _params28582=j::Args{V(1.0),j::get(_v_22159_c.get(),this->_literals[166])};return j::call(_method,_params28582,_receiver28580);})();
_v_22162_out.get()=([&]()->V{V _receiver28613=j::get(_v_22159_c.get(),this->_literals[150]);V _method28614=this->_literals[8];V _method=j::get(_receiver28613,_method28614);j::Args _params28615=j::Args{j::function([=](const j::Args &_args_fn22163,const V &_receiver_fn22163,const V &_self_fn22163) mutable ->V{
V _v_22164_i;
_v_22164_i=_args_fn22163[0];
{
V _v_22165_x;
V _v_22166_y;
V _v_22167_t;
_v_22165_x=([&]()->V{V _lhs28583=_v_22164_i;V _rhs28584=_v_22160_cols.get();return V(std::fmod(j::number(_lhs28583),j::number(_rhs28584)));})();
_v_22166_y=([&]()->V{V _lhs28585=([&]()->V{V _lhs28587=_v_22164_i;V _rhs28588=_v_22165_x;return V(j::number(_lhs28587)-j::number(_rhs28588));})();V _rhs28586=_v_22160_cols.get();return V(j::number(_lhs28585)/j::number(_rhs28586));})();
if(j::truth(([&]()->V{V _logical28589=_v_22157_edge.get();return j::truth(_logical28589)?j::get(j::get(_v_22159_c.get(),this->_literals[152]),_v_22164_i):_logical28589;})())){return this->_v_21580_SPACE.get();
}
_v_22167_t=([&]()->V{V _chain28590=_v_22159_c.get();V _chain28591=j::get(_chain28590,this->_literals[116]);if(j::nullish(_chain28591))return V{};V _chain28592=j::call(_chain28591,j::Args{_v_22165_x,_v_22166_y},_chain28590);return _chain28592;})();
if(j::truth(_v_22167_t)){return ([&]()->V{V _callee28593=this->_v_21577_code.get();return j::call(_callee28593,j::Args{_v_22167_t});})();
}
return ([&]()->V{V _callee28612=this->_v_21577_code.get();return j::call(_callee28612,j::Args{(j::truth(([&]()->V{V _lhs28594=j::get(_v_22156_chars.get(),this->_literals[19]);V _rhs28595=V(1.0);return V(j::equal(_lhs28594,_rhs28595,true));})())?_v_22156_chars.get():j::get(_v_22156_chars.get(),([&]()->V{V _receiver28609=j::builtin("Math");V _method28610=this->_literals[52];V _method=j::get(_receiver28609,_method28610);j::Args _params28611=j::Args{([&]()->V{V _lhs28596=j::get(_v_22156_chars.get(),this->_literals[19]);V _rhs28597=V(1.0);return V(j::number(_lhs28596)-j::number(_rhs28597));})(),([&]()->V{V _number28602=([&]()->V{V _lhs28603=([&]()->V{V _lhs28605=j::get(j::get(_v_22159_c.get(),this->_literals[165]),_v_22164_i);V _rhs28606=_v_22161_md.get();return V(j::number(_lhs28605)/j::number(_rhs28606));})();V _rhs28604=j::get(_v_22156_chars.get(),this->_literals[19]);return V(j::number(_lhs28603)*j::number(_rhs28604));})();return V(std::floor(j::number(_number28602)));})()};return j::call(_method,_params28611,_receiver28609);})()))});})();

}

return V{};
},1)};return j::call(_method,_params28615,_receiver28613);})();
_v_22168_role.get()=([&]()->V{V _receiver28631=j::get(_v_22159_c.get(),this->_literals[150]);V _method28632=this->_literals[8];V _method=j::get(_receiver28631,_method28632);j::Args _params28633=j::Args{j::function([=](const j::Args &_args_fn22169,const V &_receiver_fn22169,const V &_self_fn22169) mutable ->V{
V _v_22170_i;
_v_22170_i=_args_fn22169[0];
return (j::truth(([&]()->V{V _logical28616=_v_22157_edge.get();return j::truth(_logical28616)?j::get(j::get(_v_22159_c.get(),this->_literals[152]),_v_22170_i):_logical28616;})())?V(0.0):([&]()->V{V _receiver28628=j::builtin("Math");V _method28629=this->_literals[52];V _method=j::get(_receiver28628,_method28629);j::Args _params28630=j::Args{V(2.0),([&]()->V{V _number28621=([&]()->V{V _lhs28622=([&]()->V{V _lhs28624=j::get(j::get(_v_22159_c.get(),this->_literals[165]),_v_22170_i);V _rhs28625=_v_22161_md.get();return V(j::number(_lhs28624)/j::number(_rhs28625));})();V _rhs28623=V(3.0);return V(j::number(_lhs28622)*j::number(_rhs28623));})();return V(std::floor(j::number(_number28621)));})()};return j::call(_method,_params28630,_receiver28628);})());
return V{};
},1)};return j::call(_method,_params28633,_receiver28631);})();
_v_22171_line.get()=(j::truth(_v_22157_edge.get())?([&]()->V{V _receiver28634=_v_22159_c.get();V _method28635=this->_literals[155];V _method=j::get(_receiver28634,_method28635);j::Args _params28636=j::Args{};return j::call(_method,_params28636,_receiver28634);})():V::null());
return j::function([=](const j::Args &_args_fn22172,const V &_receiver_fn22172,const V &_self_fn22172) mutable ->V{
V _v_22173__t;
j::Cell _v_22174_pt;
_v_22173__t=_args_fn22172[0];
_v_22174_pt.get()=_args_fn22172[1];
{
(void)(([&]()->V{V _receiver28643=j::get(_v_22159_c.get(),this->_literals[150]);V _method28644=this->_literals[66];V _method=j::get(_receiver28643,_method28644);j::Args _params28645=j::Args{j::function([=](const j::Args &_args_fn22175,const V &_receiver_fn22175,const V &_self_fn22175) mutable ->V{
V _v_22176_i;
V _v_22177_k;
_v_22176_i=_args_fn22175[0];
_v_22177_k=_args_fn22175[1];
return ([&]()->V{V _receiver28640=j::get(_v_22174_pt.get(),this->_literals[191]);V _method28641=this->_literals[196];V _method=j::get(_receiver28640,_method28641);j::Args _params28642=j::Args{_v_22176_i,j::get(_v_22162_out.get(),_v_22177_k),([&]()->V{V _receiver28637=_v_22174_pt.get();V _method28638=this->_literals[195];V _method=j::get(_receiver28637,_method28638);j::Args _params28639=j::Args{j::get(_v_22168_role.get(),_v_22177_k)};return j::call(_method,_params28639,_receiver28637);})()};return j::call(_method,_params28642,_receiver28640);})();
return V{};
},2)};return j::call(_method,_params28645,_receiver28643);})());
(void)(([&]()->V{V _chain28646=_v_22171_line.get();if(j::nullish(_chain28646))return V{};V _chain28647=j::get(_chain28646,this->_literals[159]);V _chain28648=j::get(_chain28647,this->_literals[66]);V _chain28649=j::call(_chain28648,j::Args{j::function([=](const j::Args &_args_fn22178,const V &_receiver_fn22178,const V &_self_fn22178) mutable ->V{
V _v_22179_i;
V _v_22180_k;
_v_22179_i=_args_fn22178[0];
_v_22180_k=_args_fn22178[1];
return ([&]()->V{V _receiver28653=j::get(_v_22174_pt.get(),this->_literals[191]);V _method28654=this->_literals[196];V _method=j::get(_receiver28653,_method28654);j::Args _params28655=j::Args{_v_22179_i,j::get(j::get(_v_22171_line.get(),this->_literals[160]),_v_22180_k),([&]()->V{V _receiver28650=_v_22174_pt.get();V _method28651=this->_literals[195];V _method=j::get(_receiver28650,_method28651);j::Args _params28652=j::Args{V(0.0)};return j::call(_method,_params28652,_receiver28650);})()};return j::call(_method,_params28655,_receiver28653);})();
return V{};
},2)},_chain28647);return _chain28649;})());

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22181_gradientFill.get()=j::function([=](const j::Args &_args_fn22182,const V &_receiver_fn22182,const V &_self_fn22182) mutable ->V{
V _v_22183_o;
_v_22183_o=_args_fn22182[0];
{
V _v_22184_p;
j::Cell _v_22185_steps;
V _v_22186_colors;
j::Cell _v_22187_direction;
j::Cell _v_22188_chars;
_v_22184_p=([&]()->V{V _callee28658=this->_v_20652_optionsOf.get();return j::call(_callee28658,j::Args{this->_literals[316],_v_22183_o,([&]()->V{j::Args _array28657;_array28657.push_back(this->_literals[98]);_array28657.push_back(this->_literals[317]);_array28657.push_back(this->_literals[318]);_array28657.push_back(this->_literals[207]);return j::array(std::move(_array28657));})()});})();
_v_22185_steps.get()=([&]()->V{V _callee28659=this->_v_20663_numberOf.get();return j::call(_callee28659,j::Args{this->_literals[319],j::get(_v_22184_p,this->_literals[318]),V(8.0),V(1.0),V(24.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _receiver28660=j::builtin("Number");V _method28661=this->_literals[18];V _method=j::get(_receiver28660,_method28661);j::Args _params28662=j::Args{_v_22185_steps.get()};return j::call(_method,_params28662,_receiver28660);})()))){(void)(([&]()->V{V _callee28664=this->_v_20632_fail.get();return j::call(_callee28664,j::Args{([&]()->V{std::u16string _text28663;_text28663+=u"gradientFill.steps takes a whole number from 1 to 24, not ";_text28663+=j::string(_v_22185_steps.get());_text28663+=u"";return V(std::move(_text28663));})()});})());
}
_v_22186_colors=([&]()->V{V _callee28665=this->_v_20717_colorsOf.get();return j::call(_callee28665,j::Args{this->_literals[320],j::get(_v_22184_p,this->_literals[98]),this->_literals[321],_v_22185_steps.get()});})();
_v_22187_direction.get()=([&]()->V{V _callee28667=this->_v_20688_wordOf.get();return j::call(_callee28667,j::Args{this->_literals[322],j::get(_v_22184_p,this->_literals[317]),([&]()->V{j::Args _array28666;_array28666.push_back(this->_literals[323]);_array28666.push_back(this->_literals[324]);_array28666.push_back(this->_literals[28]);_array28666.push_back(this->_literals[31]);_array28666.push_back(this->_literals[325]);return j::array(std::move(_array28666));})(),this->_literals[323]});})();
_v_22188_chars.get()=(j::truth(([&]()->V{V _logical28668=([&]()->V{V _lhs28669=j::unary("typeof",j::get(_v_22184_p,this->_literals[207]));V _rhs28670=this->_literals[4];return V(j::equal(_lhs28669,_rhs28670,true));})();return j::truth(_logical28668)?([&]()->V{V _lhs28671=j::get(j::get(_v_22184_p,this->_literals[207]),this->_literals[19]);V _rhs28672=V(1.0);return V(j::equal(_lhs28671,_rhs28672,true));})():_logical28668;})())?([&]()->V{V _callee28673=this->_v_20706_charOf.get();return j::call(_callee28673,j::Args{this->_literals[326],j::get(_v_22184_p,this->_literals[207]),this->_literals[129]});})():([&]()->V{V _callee28674=this->_v_20711_rampOf.get();return j::call(_callee28674,j::Args{this->_literals[326],j::get(_v_22184_p,this->_literals[207]),this->_literals[327]});})());
return ([&]()->V{V _callee28753=this->_v_21571_makeMaterial.get();return j::call(_callee28753,j::Args{this->_literals[328],_v_22186_colors,j::builtin("undefined"),j::function([=](const j::Args &_args_fn22189,const V &_receiver_fn22189,const V &_self_fn22189) mutable ->V{
j::Cell _v_22190_c;
_v_22190_c.get()=_args_fn22189[0];
{
j::Cell _v_22191_cols;
j::Cell _v_22192_w;
j::Cell _v_22193_h;
j::Cell _v_22194_md;
j::Cell _v_22195_ks;
V _pattern28675=_v_22190_c.get();
_v_22191_cols.get()=j::get(_pattern28675,this->_literals[46]);
_v_22192_w.get()=([&]()->V{V _receiver28680=j::builtin("Math");V _method28681=this->_literals[51];V _method=j::get(_receiver28680,_method28681);j::Args _params28682=j::Args{V(1.0),([&]()->V{V _lhs28676=j::get(_v_22190_c.get(),this->_literals[32]);V _rhs28677=j::get(_v_22190_c.get(),this->_literals[30]);return V(j::number(_lhs28676)-j::number(_rhs28677));})()};return j::call(_method,_params28682,_receiver28680);})();
_v_22193_h.get()=([&]()->V{V _receiver28687=j::builtin("Math");V _method28688=this->_literals[51];V _method=j::get(_receiver28687,_method28688);j::Args _params28689=j::Args{V(1.0),([&]()->V{V _lhs28683=j::get(_v_22190_c.get(),this->_literals[37]);V _rhs28684=j::get(_v_22190_c.get(),this->_literals[35]);return V(j::number(_lhs28683)-j::number(_rhs28684));})()};return j::call(_method,_params28689,_receiver28687);})();
_v_22194_md.get()=([&]()->V{V _receiver28692=j::builtin("Math");V _method28693=this->_literals[51];V _method=j::get(_receiver28692,_method28693);j::Args _params28694=j::Args{V(1.0),j::get(_v_22190_c.get(),this->_literals[166])};return j::call(_method,_params28694,_receiver28692);})();
_v_22195_ks.get()=([&]()->V{V _receiver28729=j::builtin("Array");V _method28730=this->_literals[124];V _method=j::get(_receiver28729,_method28730);j::Args _params28731=j::Args{j::get(_v_22190_c.get(),this->_literals[150]),j::function([=](const j::Args &_args_fn22196,const V &_receiver_fn22196,const V &_self_fn22196) mutable ->V{
V _v_22197_i;
_v_22197_i=_args_fn22196[0];
{
V _v_22198_x;
V _v_22199_y;
V _v_22200_u;
V _v_22201_v;
_v_22198_x=([&]()->V{V _lhs28695=_v_22197_i;V _rhs28696=_v_22191_cols.get();return V(std::fmod(j::number(_lhs28695),j::number(_rhs28696)));})();
_v_22199_y=([&]()->V{V _lhs28697=([&]()->V{V _lhs28699=_v_22197_i;V _rhs28700=_v_22198_x;return V(j::number(_lhs28699)-j::number(_rhs28700));})();V _rhs28698=_v_22191_cols.get();return V(j::number(_lhs28697)/j::number(_rhs28698));})();
_v_22200_u=([&]()->V{V _lhs28701=([&]()->V{V _lhs28703=([&]()->V{V _lhs28705=_v_22198_x;V _rhs28706=j::get(_v_22190_c.get(),this->_literals[30]);return V(j::number(_lhs28705)-j::number(_rhs28706));})();V _rhs28704=V(0.5);return j::binary("+",_lhs28703,_rhs28704);})();V _rhs28702=_v_22192_w.get();return V(j::number(_lhs28701)/j::number(_rhs28702));})();
_v_22201_v=([&]()->V{V _lhs28707=([&]()->V{V _lhs28709=([&]()->V{V _lhs28711=_v_22199_y;V _rhs28712=j::get(_v_22190_c.get(),this->_literals[35]);return V(j::number(_lhs28711)-j::number(_rhs28712));})();V _rhs28710=V(0.5);return j::binary("+",_lhs28709,_rhs28710);})();V _rhs28708=_v_22193_h.get();return V(j::number(_lhs28707)/j::number(_rhs28708));})();
return (j::truth(([&]()->V{V _lhs28713=_v_22187_direction.get();V _rhs28714=this->_literals[323];return V(j::equal(_lhs28713,_rhs28714,true));})())?_v_22201_v:(j::truth(([&]()->V{V _lhs28715=_v_22187_direction.get();V _rhs28716=this->_literals[324];return V(j::equal(_lhs28715,_rhs28716,true));})())?([&]()->V{V _lhs28717=V(1.0);V _rhs28718=_v_22201_v;return V(j::number(_lhs28717)-j::number(_rhs28718));})():(j::truth(([&]()->V{V _lhs28719=_v_22187_direction.get();V _rhs28720=this->_literals[31];return V(j::equal(_lhs28719,_rhs28720,true));})())?_v_22200_u:(j::truth(([&]()->V{V _lhs28721=_v_22187_direction.get();V _rhs28722=this->_literals[28];return V(j::equal(_lhs28721,_rhs28722,true));})())?([&]()->V{V _lhs28723=V(1.0);V _rhs28724=_v_22200_u;return V(j::number(_lhs28723)-j::number(_rhs28724));})():([&]()->V{V _lhs28725=V(1.0);V _rhs28726=([&]()->V{V _lhs28727=j::get(j::get(_v_22190_c.get(),this->_literals[165]),_v_22197_i);V _rhs28728=_v_22194_md.get();return V(j::number(_lhs28727)/j::number(_rhs28728));})();return V(j::number(_lhs28725)-j::number(_rhs28726));})()))));

}

return V{};
},1)};return j::call(_method,_params28731,_receiver28729);})();
return j::function([=](const j::Args &_args_fn22202,const V &_receiver_fn22202,const V &_self_fn22202) mutable ->V{
V _v_22203__t;
j::Cell _v_22204_pt;
_v_22203__t=_args_fn22202[0];
_v_22204_pt.get()=_args_fn22202[1];
return ([&]()->V{V _receiver28750=j::get(_v_22190_c.get(),this->_literals[150]);V _method28751=this->_literals[66];V _method=j::get(_receiver28750,_method28751);j::Args _params28752=j::Args{j::function([=](const j::Args &_args_fn22205,const V &_receiver_fn22205,const V &_self_fn22205) mutable ->V{
V _v_22206_i;
V _v_22207_k;
_v_22206_i=_args_fn22205[0];
_v_22207_k=_args_fn22205[1];
{
V _v_22208_f;
_v_22208_f=([&]()->V{V _callee28732=this->_v_20630_clamp.get();return j::call(_callee28732,j::Args{j::get(_v_22195_ks.get(),_v_22207_k),V(0.0),V(0.9999)});})();
(void)(([&]()->V{V _receiver28747=j::get(_v_22204_pt.get(),this->_literals[191]);V _method28748=this->_literals[196];V _method=j::get(_receiver28747,_method28748);j::Args _params28749=j::Args{_v_22206_i,([&]()->V{V _callee28738=this->_v_21577_code.get();return j::call(_callee28738,j::Args{j::get(_v_22188_chars.get(),([&]()->V{V _number28735=([&]()->V{V _lhs28736=_v_22208_f;V _rhs28737=j::get(_v_22188_chars.get(),this->_literals[19]);return V(j::number(_lhs28736)*j::number(_rhs28737));})();return V(std::floor(j::number(_number28735)));})())});})(),([&]()->V{V _receiver28744=_v_22204_pt.get();V _method28745=this->_literals[195];V _method=j::get(_receiver28744,_method28745);j::Args _params28746=j::Args{([&]()->V{V _number28741=([&]()->V{V _lhs28742=_v_22208_f;V _rhs28743=_v_22185_steps.get();return V(j::number(_lhs28742)*j::number(_rhs28743));})();return V(std::floor(j::number(_number28741)));})()};return j::call(_method,_params28746,_receiver28744);})()};return j::call(_method,_params28749,_receiver28747);})());

}

return V{};
},2)};return j::call(_method,_params28752,_receiver28750);})();
return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22210_pattern.get()=j::function([=](const j::Args &_args_fn22211,const V &_receiver_fn22211,const V &_self_fn22211) mutable ->V{
V _v_22212_tile;
V _v_22213_o;
_v_22212_tile=_args_fn22211[0];
_v_22213_o=_args_fn22211[1];
{
V _v_22214_names;
V _v_22215_rowsOf;
V _v_22218_p;
V _v_22219_colors;
j::Cell _v_22220_move;
j::Cell _v_22221_period;
j::Cell _v_22222_tw;
j::Cell _v_22225_th;
j::Cell _v_22226_grid;
_v_22214_names=([&]()->V{V _receiver28754=j::builtin("Object");V _method28755=this->_literals[10];V _method=j::get(_receiver28754,_method28755);j::Args _params28756=j::Args{this->_v_22209_patterns.get()};return j::call(_method,_params28756,_receiver28754);})();
_v_22215_rowsOf=(j::truth(([&]()->V{V _lhs28757=j::unary("typeof",_v_22212_tile);V _rhs28758=this->_literals[4];return V(j::equal(_lhs28757,_rhs28758,true));})())?(j::truth(([&]()->V{V _receiver28759=j::builtin("Object");V _method28760=this->_literals[15];V _method=j::get(_receiver28759,_method28760);j::Args _params28761=j::Args{this->_v_22209_patterns.get(),_v_22212_tile};return j::call(_method,_params28761,_receiver28759);})())?j::get(this->_v_22209_patterns.get(),_v_22212_tile):([&]()->V{V _callee28768=this->_v_20632_fail.get();return j::call(_callee28768,j::Args{([&]()->V{std::u16string _text28762;_text28762+=u"pattern takes a name, ";_text28762+=j::string(([&]()->V{V _callee28763=this->_v_20660_or.get();return j::call(_callee28763,j::Args{_v_22214_names});})());_text28762+=u", or rows of text, not ";_text28762+=j::string(([&]()->V{V _receiver28764=j::builtin("JSON");V _method28765=this->_literals[5];V _method=j::get(_receiver28764,_method28765);j::Args _params28766=j::Args{_v_22212_tile};return j::call(_method,_params28766,_receiver28764);})());_text28762+=u"";_text28762+=j::string(([&]()->V{V _callee28767=this->_v_20645_suggest.get();return j::call(_callee28767,j::Args{_v_22212_tile,_v_22214_names});})());_text28762+=u"";return V(std::move(_text28762));})()});})()):_v_22212_tile);
if(j::truth(([&]()->V{V _logical28769=([&]()->V{V _logical28770=j::unary("!",([&]()->V{V _receiver28771=j::builtin("Array");V _method28772=this->_literals[6];V _method=j::get(_receiver28771,_method28772);j::Args _params28773=j::Args{_v_22215_rowsOf};return j::call(_method,_params28773,_receiver28771);})());return !j::truth(_logical28770)?j::unary("!",j::get(_v_22215_rowsOf,this->_literals[19])):_logical28770;})();return !j::truth(_logical28769)?j::unary("!",([&]()->V{V _receiver28781=_v_22215_rowsOf;V _method28782=this->_literals[40];V _method=j::get(_receiver28781,_method28782);j::Args _params28783=j::Args{j::function([=](const j::Args &_args_fn22216,const V &_receiver_fn22216,const V &_self_fn22216) mutable ->V{
V _v_22217_r;
_v_22217_r=_args_fn22216[0];
return ([&]()->V{V _logical28774=([&]()->V{V _logical28775=([&]()->V{V _lhs28776=j::unary("typeof",_v_22217_r);V _rhs28777=this->_literals[4];return V(j::equal(_lhs28776,_rhs28777,true));})();return j::truth(_logical28775)?j::get(_v_22217_r,this->_literals[19]):_logical28775;})();return j::truth(_logical28774)?j::unary("!",([&]()->V{V _receiver28778=j::regexp(u"[\\u0000-\\u001f\\ud800-\\udfff]","");V _method28779=this->_literals[20];V _method=j::get(_receiver28778,_method28779);j::Args _params28780=j::Args{_v_22217_r};return j::call(_method,_params28780,_receiver28778);})()):_logical28774;})();
return V{};
},1)};return j::call(_method,_params28783,_receiver28781);})()):_logical28769;})())){(void)(([&]()->V{V _callee28797=this->_v_20632_fail.get();return j::call(_callee28797,j::Args{([&]()->V{std::u16string _text28784;_text28784+=u"pattern takes a name, ";_text28784+=j::string(([&]()->V{V _callee28785=this->_v_20660_or.get();return j::call(_callee28785,j::Args{_v_22214_names});})());_text28784+=u", or rows of text, one or more, not ";_text28784+=j::string(([&]()->V{V _receiver28786=j::builtin("JSON");V _method28787=this->_literals[5];V _method=j::get(_receiver28786,_method28787);j::Args _params28788=j::Args{_v_22212_tile};return j::call(_method,_params28788,_receiver28786);})());_text28784+=u"";_text28784+=j::string((j::truth(([&]()->V{V _logical28789=([&]()->V{V _callee28790=this->_v_20646_isObject.get();return j::call(_callee28790,j::Args{_v_22212_tile});})();return j::truth(_logical28789)?([&]()->V{V _lhs28791=this->_literals[329];V _rhs28792=_v_22212_tile;return j::binary("in",_lhs28791,_rhs28792);})():_logical28789;})())?([&]()->V{std::u16string _text28793;_text28793+=u": give the name first, pattern(";_text28793+=j::string(([&]()->V{V _receiver28794=j::builtin("JSON");V _method28795=this->_literals[5];V _method=j::get(_receiver28794,_method28795);j::Args _params28796=j::Args{j::get(_v_22212_tile,this->_literals[329])};return j::call(_method,_params28796,_receiver28794);})());_text28793+=u")";return V(std::move(_text28793));})():this->_literals[12]));_text28784+=u"";return V(std::move(_text28784));})()});})());
}
_v_22218_p=([&]()->V{V _callee28799=this->_v_20652_optionsOf.get();return j::call(_callee28799,j::Args{this->_literals[330],_v_22213_o,([&]()->V{j::Args _array28798;_array28798.push_back(this->_literals[98]);_array28798.push_back(this->_literals[331]);_array28798.push_back(this->_literals[175]);return j::array(std::move(_array28798));})()});})();
_v_22219_colors=([&]()->V{V _callee28800=this->_v_20717_colorsOf.get();return j::call(_callee28800,j::Args{this->_literals[332],j::get(_v_22218_p,this->_literals[98]),this->_literals[310],V(2.0)});})();
_v_22220_move.get()=([&]()->V{V _callee28802=this->_v_20688_wordOf.get();return j::call(_callee28802,j::Args{this->_literals[333],j::get(_v_22218_p,this->_literals[331]),([&]()->V{j::Args _array28801;_array28801.push_back(this->_literals[218]);_array28801.push_back(this->_literals[28]);_array28801.push_back(this->_literals[31]);_array28801.push_back(this->_literals[324]);_array28801.push_back(this->_literals[323]);return j::array(std::move(_array28801));})(),this->_literals[218]});})();
_v_22221_period.get()=([&]()->V{V _callee28803=this->_v_20682_periodOf.get();return j::call(_callee28803,j::Args{this->_literals[334],j::get(_v_22218_p,this->_literals[175]),V(2.0)});})();
_v_22222_tw.get()=([&]()->V{V _receiver28808=j::builtin("Math");V _method28809=this->_literals[51];V _method=j::get(_receiver28808,_method28809);j::Args _params28810=([&](){j::Args _args28804;for(const auto &_v:j::elements(([&]()->V{V _receiver28805=_v_22215_rowsOf;V _method28806=this->_literals[8];V _method=j::get(_receiver28805,_method28806);j::Args _params28807=j::Args{j::function([=](const j::Args &_args_fn22223,const V &_receiver_fn22223,const V &_self_fn22223) mutable ->V{
V _v_22224_r;
_v_22224_r=_args_fn22223[0];
return j::get(_v_22224_r,this->_literals[19]);
return V{};
},1)};return j::call(_method,_params28807,_receiver28805);})()))_args28804.push_back(_v);return _args28804;})();return j::call(_method,_params28810,_receiver28808);})();
_v_22225_th.get()=j::get(_v_22215_rowsOf,this->_literals[19]);
_v_22226_grid.get()=([&]()->V{V _receiver28814=_v_22215_rowsOf;V _method28815=this->_literals[8];V _method=j::get(_receiver28814,_method28815);j::Args _params28816=j::Args{j::function([=](const j::Args &_args_fn22227,const V &_receiver_fn22227,const V &_self_fn22227) mutable ->V{
V _v_22228_r;
_v_22228_r=_args_fn22227[0];
return ([&]()->V{V _receiver28811=_v_22228_r;V _method28812=this->_literals[335];V _method=j::get(_receiver28811,_method28812);j::Args _params28813=j::Args{_v_22222_tw.get()};return j::call(_method,_params28813,_receiver28811);})();
return V{};
},1)};return j::call(_method,_params28816,_receiver28814);})();
return ([&]()->V{V _callee28887=this->_v_21571_makeMaterial.get();return j::call(_callee28887,j::Args{this->_literals[336],_v_22219_colors,(j::truth(([&]()->V{V _lhs28817=_v_22220_move.get();V _rhs28818=this->_literals[218];return V(j::equal(_lhs28817,_rhs28818,true));})())?j::builtin("undefined"):_v_22221_period.get()),j::function([=](const j::Args &_args_fn22229,const V &_receiver_fn22229,const V &_self_fn22229) mutable ->V{
j::Cell _v_22230_c;
_v_22230_c.get()=_args_fn22229[0];
{
j::Cell _v_22231_cols;
V _pattern28819=_v_22230_c.get();
_v_22231_cols.get()=j::get(_pattern28819,this->_literals[46]);
return j::function([=](const j::Args &_args_fn22232,const V &_receiver_fn22232,const V &_self_fn22232) mutable ->V{
V _v_22233_t;
V _v_22234_pt;
_v_22233_t=_args_fn22232[0];
_v_22234_pt=_args_fn22232[1];
{
V _v_22235_k;
V _v_22236_dx;
V _v_22237_dy;
_v_22235_k=(j::truth(([&]()->V{V _lhs28820=_v_22220_move.get();V _rhs28821=this->_literals[218];return V(j::equal(_lhs28820,_rhs28821,true));})())?V(0.0):([&]()->V{V _number28832=([&]()->V{V _lhs28833=([&]()->V{V _callee28837=this->_v_20633_fract.get();return j::call(_callee28837,j::Args{([&]()->V{V _lhs28835=_v_22233_t;V _rhs28836=_v_22221_period.get();return V(j::number(_lhs28835)/j::number(_rhs28836));})()});})();V _rhs28834=(j::truth(([&]()->V{V _logical28838=([&]()->V{V _lhs28839=_v_22220_move.get();V _rhs28840=this->_literals[28];return V(j::equal(_lhs28839,_rhs28840,true));})();return !j::truth(_logical28838)?([&]()->V{V _lhs28841=_v_22220_move.get();V _rhs28842=this->_literals[31];return V(j::equal(_lhs28841,_rhs28842,true));})():_logical28838;})())?_v_22222_tw.get():_v_22225_th.get());return V(j::number(_lhs28833)*j::number(_rhs28834));})();return V(std::floor(j::number(_number28832)));})());
_v_22236_dx=(j::truth(([&]()->V{V _lhs28843=_v_22220_move.get();V _rhs28844=this->_literals[28];return V(j::equal(_lhs28843,_rhs28844,true));})())?_v_22235_k:(j::truth(([&]()->V{V _lhs28845=_v_22220_move.get();V _rhs28846=this->_literals[31];return V(j::equal(_lhs28845,_rhs28846,true));})())?j::unary("-",_v_22235_k):V(0.0)));
_v_22237_dy=(j::truth(([&]()->V{V _lhs28847=_v_22220_move.get();V _rhs28848=this->_literals[324];return V(j::equal(_lhs28847,_rhs28848,true));})())?_v_22235_k:(j::truth(([&]()->V{V _lhs28849=_v_22220_move.get();V _rhs28850=this->_literals[323];return V(j::equal(_lhs28849,_rhs28850,true));})())?j::unary("-",_v_22235_k):V(0.0)));
{for(const auto &_item28851:j::elements(j::get(_v_22230_c.get(),this->_literals[150]))){V _v_22238_i;
_v_22238_i=_item28851;
{
V _v_22239_x;
V _v_22240_y;
V _v_22241_row;
V _v_22242_ch;
_v_22239_x=([&]()->V{V _lhs28852=_v_22238_i;V _rhs28853=_v_22231_cols.get();return V(std::fmod(j::number(_lhs28852),j::number(_rhs28853)));})();
_v_22240_y=([&]()->V{V _lhs28854=([&]()->V{V _lhs28856=_v_22238_i;V _rhs28857=_v_22239_x;return V(j::number(_lhs28856)-j::number(_rhs28857));})();V _rhs28855=_v_22231_cols.get();return V(j::number(_lhs28854)/j::number(_rhs28855));})();
_v_22241_row=j::get(_v_22226_grid.get(),([&]()->V{V _lhs28858=([&]()->V{V _lhs28860=([&]()->V{V _lhs28862=([&]()->V{V _lhs28864=_v_22240_y;V _rhs28865=_v_22237_dy;return j::binary("+",_lhs28864,_rhs28865);})();V _rhs28863=_v_22225_th.get();return V(std::fmod(j::number(_lhs28862),j::number(_rhs28863)));})();V _rhs28861=_v_22225_th.get();return j::binary("+",_lhs28860,_rhs28861);})();V _rhs28859=_v_22225_th.get();return V(std::fmod(j::number(_lhs28858),j::number(_rhs28859)));})());
_v_22242_ch=j::get(_v_22241_row,([&]()->V{V _lhs28866=([&]()->V{V _lhs28868=([&]()->V{V _lhs28870=([&]()->V{V _lhs28872=_v_22239_x;V _rhs28873=_v_22236_dx;return j::binary("+",_lhs28872,_rhs28873);})();V _rhs28871=_v_22222_tw.get();return V(std::fmod(j::number(_lhs28870),j::number(_rhs28871)));})();V _rhs28869=_v_22222_tw.get();return j::binary("+",_lhs28868,_rhs28869);})();V _rhs28867=_v_22222_tw.get();return V(std::fmod(j::number(_lhs28866),j::number(_rhs28867)));})());
if(j::truth(([&]()->V{V _lhs28874=_v_22242_ch;V _rhs28875=this->_literals[134];return V(!j::equal(_lhs28874,_rhs28875,true));})())){(void)(([&]()->V{V _receiver28884=j::get(_v_22234_pt,this->_literals[191]);V _method28885=this->_literals[196];V _method=j::get(_receiver28884,_method28885);j::Args _params28886=j::Args{_v_22238_i,([&]()->V{V _callee28876=this->_v_21577_code.get();return j::call(_callee28876,j::Args{_v_22242_ch});})(),([&]()->V{V _receiver28881=_v_22234_pt;V _method28882=this->_literals[195];V _method=j::get(_receiver28881,_method28882);j::Args _params28883=j::Args{(j::truth(([&]()->V{V _lhs28877=([&]()->V{V _lhs28879=_v_22240_y;V _rhs28880=_v_22237_dy;return j::binary("+",_lhs28879,_rhs28880);})();V _rhs28878=V(2.0);return V(std::fmod(j::number(_lhs28877),j::number(_rhs28878)));})())?V(1.0):V(0.0))};return j::call(_method,_params28883,_receiver28881);})()};return j::call(_method,_params28886,_receiver28884);})());
}

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_22243_ceramic.get()=j::function([=](const j::Args &_args_fn22244,const V &_receiver_fn22244,const V &_self_fn22244) mutable ->V{
V _v_22245_o;
_v_22245_o=_args_fn22244[0];
{
V _v_22246_p;
V _v_22247_colors;
j::Cell _v_22248_shade;
_v_22246_p=([&]()->V{V _callee28889=this->_v_20652_optionsOf.get();return j::call(_callee28889,j::Args{this->_literals[337],_v_22245_o,([&]()->V{j::Args _array28888;_array28888.push_back(this->_literals[98]);_array28888.push_back(this->_literals[338]);return j::array(std::move(_array28888));})()});})();
_v_22247_colors=([&]()->V{V _callee28890=this->_v_20717_colorsOf.get();return j::call(_callee28890,j::Args{this->_literals[339],j::get(_v_22246_p,this->_literals[98]),this->_literals[340],V(3.0)});})();
_v_22248_shade.get()=([&]()->V{V _callee28891=this->_v_20696_boolOf.get();return j::call(_callee28891,j::Args{this->_literals[341],j::get(_v_22246_p,this->_literals[338]),V(true)});})();
return ([&]()->V{V _callee29034=this->_v_21571_makeMaterial.get();return j::call(_callee29034,j::Args{this->_literals[340],_v_22247_colors,j::builtin("undefined"),j::function([=](const j::Args &_args_fn22249,const V &_receiver_fn22249,const V &_self_fn22249) mutable ->V{
j::Cell _v_22250_c;
_v_22250_c.get()=_args_fn22249[0];
{
j::Cell _v_22251_cols;
j::Cell _v_22252_mouth;
j::Cell _v_22258_at;
j::Cell _v_22259_out;
j::Cell _v_22260_role;
j::Cell _v_22261_line;
V _pattern28892=_v_22250_c.get();
_v_22251_cols.get()=j::get(_pattern28892,this->_literals[46]);
_v_22252_mouth.get()=j::function([=](const j::Args &_args_fn22253,const V &_receiver_fn22253,const V &_self_fn22253) mutable ->V{
V _v_22254_i;
_v_22254_i=_args_fn22253[0];
{
V _v_22255_cav;
V _v_22256_x;
V _v_22257_y;
_v_22255_cav=j::get(_v_22250_c.get(),this->_literals[59]);
if(j::truth(([&]()->V{V _logical28893=j::unary("!",j::get(_v_22250_c.get(),this->_literals[58]));return !j::truth(_logical28893)?j::unary("!",_v_22255_cav):_logical28893;})())){return V(false);
}
_v_22256_x=([&]()->V{V _lhs28894=_v_22254_i;V _rhs28895=_v_22251_cols.get();return V(std::fmod(j::number(_lhs28894),j::number(_rhs28895)));})();
_v_22257_y=([&]()->V{V _lhs28896=([&]()->V{V _lhs28898=_v_22254_i;V _rhs28899=_v_22256_x;return V(j::number(_lhs28898)-j::number(_rhs28899));})();V _rhs28897=_v_22251_cols.get();return V(j::number(_lhs28896)/j::number(_rhs28897));})();
return (j::truth(j::get(j::get(_v_22255_cav,this->_literals[71]),_v_22254_i))?([&]()->V{V _lhs28900=_v_22257_y;V _rhs28901=j::get(j::get(_v_22250_c.get(),this->_literals[33]),_v_22256_x);return V(j::equal(_lhs28900,_rhs28901,true));})():([&]()->V{V _logical28902=([&]()->V{V _logical28903=j::unary("!",j::get(j::get(_v_22250_c.get(),this->_literals[71]),_v_22254_i));return j::truth(_logical28903)?([&]()->V{V _lhs28904=j::get(j::get(_v_22255_cav,this->_literals[71]),([&]()->V{V _lhs28906=_v_22254_i;V _rhs28907=_v_22251_cols.get();return j::binary("+",_lhs28906,_rhs28907);})());V _rhs28905=V(1.0);return V(j::equal(_lhs28904,_rhs28905,true));})():_logical28903;})();return j::truth(_logical28902)?([&]()->V{V _lhs28908=([&]()->V{V _lhs28910=_v_22257_y;V _rhs28911=V(1.0);return j::binary("+",_lhs28910,_rhs28911);})();V _rhs28909=j::get(j::get(_v_22250_c.get(),this->_literals[33]),_v_22256_x);return V(j::equal(_lhs28908,_rhs28909,true));})():_logical28902;})());

}

return V{};
},1);
_v_22258_at.get()=([&]()->V{j::Args _array28912;return j::array(std::move(_array28912));})();
_v_22259_out.get()=([&]()->V{j::Args _array28913;return j::array(std::move(_array28913));})();
_v_22260_role.get()=([&]()->V{j::Args _array28914;return j::array(std::move(_array28914));})();
_v_22261_line.get()=([&]()->V{V _receiver28915=_v_22250_c.get();V _method28916=this->_literals[155];V _method=j::get(_receiver28915,_method28916);j::Args _params28917=j::Args{};return j::call(_method,_params28917,_receiver28915);})();
(void)(([&]()->V{V _receiver28928=j::get(_v_22261_line.get(),this->_literals[159]);V _method28929=this->_literals[66];V _method=j::get(_receiver28928,_method28929);j::Args _params28930=j::Args{j::function([=](const j::Args &_args_fn22262,const V &_receiver_fn22262,const V &_self_fn22262) mutable ->V{
V _v_22263_i;
V _v_22264_k;
_v_22263_i=_args_fn22262[0];
_v_22264_k=_args_fn22262[1];
{
if(j::truth(j::unary("!",([&]()->V{V _callee28918=_v_22252_mouth.get();return j::call(_callee28918,j::Args{_v_22263_i});})()))){(void)((([&]()->V{V _receiver28919=_v_22258_at.get();V _method28920=this->_literals[149];V _method=j::get(_receiver28919,_method28920);j::Args _params28921=j::Args{_v_22263_i};return j::call(_method,_params28921,_receiver28919);})(),([&]()->V{V _receiver28922=_v_22259_out.get();V _method28923=this->_literals[149];V _method=j::get(_receiver28922,_method28923);j::Args _params28924=j::Args{j::get(j::get(_v_22261_line.get(),this->_literals[160]),_v_22264_k)};return j::call(_method,_params28924,_receiver28922);})(),([&]()->V{V _receiver28925=_v_22260_role.get();V _method28926=this->_literals[149];V _method=j::get(_receiver28925,_method28926);j::Args _params28927=j::Args{V(0.0)};return j::call(_method,_params28927,_receiver28925);})()));
}

}

return V{};
},2)};return j::call(_method,_params28930,_receiver28928);})());
{for(const auto &_item28931:j::elements(j::get(_v_22250_c.get(),this->_literals[150]))){V _v_22265_i;
_v_22265_i=_item28931;
{
V _v_22266_x;
j::Cell _v_22267_y;
V _v_22268_l;
V _v_22269_r;
V _v_22270_u;
V _v_22271_v;
V _v_22272_upright;
V _v_22276_gleam;
V _v_22277_dark;
if(j::truth(([&]()->V{V _logical28932=j::get(j::get(_v_22250_c.get(),this->_literals[152]),_v_22265_i);return !j::truth(_logical28932)?([&]()->V{V _callee28933=_v_22252_mouth.get();return j::call(_callee28933,j::Args{_v_22265_i});})():_logical28932;})())){continue;
}
_v_22266_x=([&]()->V{V _lhs28934=_v_22265_i;V _rhs28935=_v_22251_cols.get();return V(std::fmod(j::number(_lhs28934),j::number(_rhs28935)));})();
_v_22267_y.get()=([&]()->V{V _lhs28936=([&]()->V{V _lhs28938=_v_22265_i;V _rhs28939=_v_22266_x;return V(j::number(_lhs28938)-j::number(_rhs28939));})();V _rhs28937=_v_22251_cols.get();return V(j::number(_lhs28936)/j::number(_rhs28937));})();
_v_22268_l=j::get(j::get(_v_22250_c.get(),this->_literals[28]),_v_22267_y.get());
_v_22269_r=j::get(j::get(_v_22250_c.get(),this->_literals[31]),_v_22267_y.get());
_v_22270_u=(j::truth(([&]()->V{V _lhs28940=_v_22269_r;V _rhs28941=_v_22268_l;return j::binary(">",_lhs28940,_rhs28941);})())?([&]()->V{V _lhs28942=([&]()->V{V _lhs28944=_v_22266_x;V _rhs28945=_v_22268_l;return V(j::number(_lhs28944)-j::number(_rhs28945));})();V _rhs28943=([&]()->V{V _lhs28946=_v_22269_r;V _rhs28947=_v_22268_l;return V(j::number(_lhs28946)-j::number(_rhs28947));})();return V(j::number(_lhs28942)/j::number(_rhs28943));})():V(0.5));
_v_22271_v=(j::truth(([&]()->V{V _lhs28948=([&]()->V{V _lhs28950=j::get(_v_22250_c.get(),this->_literals[37]);V _rhs28951=j::get(_v_22250_c.get(),this->_literals[35]);return V(j::number(_lhs28950)-j::number(_rhs28951));})();V _rhs28949=V(1.0);return j::binary(">",_lhs28948,_rhs28949);})())?([&]()->V{V _lhs28952=([&]()->V{V _lhs28954=_v_22267_y.get();V _rhs28955=j::get(_v_22250_c.get(),this->_literals[35]);return V(j::number(_lhs28954)-j::number(_rhs28955));})();V _rhs28953=([&]()->V{V _lhs28956=([&]()->V{V _lhs28958=j::get(_v_22250_c.get(),this->_literals[37]);V _rhs28959=j::get(_v_22250_c.get(),this->_literals[35]);return V(j::number(_lhs28958)-j::number(_rhs28959));})();V _rhs28957=V(1.0);return V(j::number(_lhs28956)-j::number(_rhs28957));})();return V(j::number(_lhs28952)/j::number(_rhs28953));})():V(0.5));
_v_22272_upright=j::function([=](const j::Args &_args_fn22273,const V &_receiver_fn22273,const V &_self_fn22273) mutable ->V{
V _v_22274_side;
V _v_22275_at;
_v_22274_side=_args_fn22273[0];
_v_22275_at=_args_fn22273[1];
return ([&]()->V{V _logical28960=([&]()->V{V _lhs28961=j::get(_v_22274_side,([&]()->V{V _receiver28967=j::builtin("Math");V _method28968=this->_literals[51];V _method=j::get(_receiver28967,_method28968);j::Args _params28969=j::Args{V(0.0),([&]()->V{V _lhs28963=_v_22267_y.get();V _rhs28964=V(1.0);return V(j::number(_lhs28963)-j::number(_rhs28964));})()};return j::call(_method,_params28969,_receiver28967);})());V _rhs28962=_v_22275_at;return V(j::equal(_lhs28961,_rhs28962,true));})();return j::truth(_logical28960)?([&]()->V{V _lhs28970=j::get(_v_22274_side,([&]()->V{V _receiver28978=j::builtin("Math");V _method28979=this->_literals[52];V _method=j::get(_receiver28978,_method28979);j::Args _params28980=j::Args{([&]()->V{V _lhs28972=j::get(_v_22250_c.get(),this->_literals[48]);V _rhs28973=V(1.0);return V(j::number(_lhs28972)-j::number(_rhs28973));})(),([&]()->V{V _lhs28974=_v_22267_y.get();V _rhs28975=V(1.0);return j::binary("+",_lhs28974,_rhs28975);})()};return j::call(_method,_params28980,_receiver28978);})());V _rhs28971=_v_22275_at;return V(j::equal(_lhs28970,_rhs28971,true));})():_logical28960;})();
return V{};
},2);
_v_22276_gleam=([&]()->V{V _logical28981=([&]()->V{V _logical28982=([&]()->V{V _logical28983=([&]()->V{V _logical28984=([&]()->V{V _logical28985=([&]()->V{V _lhs28986=_v_22270_u;V _rhs28987=V(0.3);return j::binary("<",_lhs28986,_rhs28987);})();return j::truth(_logical28985)?([&]()->V{V _lhs28988=_v_22270_u;V _rhs28989=V(0.1);return j::binary(">",_lhs28988,_rhs28989);})():_logical28985;})();return j::truth(_logical28984)?([&]()->V{V _lhs28990=_v_22271_v;V _rhs28991=V(0.15);return j::binary(">",_lhs28990,_rhs28991);})():_logical28984;})();return j::truth(_logical28983)?([&]()->V{V _lhs28992=_v_22271_v;V _rhs28993=V(0.45);return j::binary("<",_lhs28992,_rhs28993);})():_logical28983;})();return j::truth(_logical28982)?([&]()->V{V _lhs28994=([&]()->V{V _lhs28996=_v_22266_x;V _rhs28997=_v_22268_l;return V(j::number(_lhs28996)-j::number(_rhs28997));})();V _rhs28995=V(2.0);return V(j::equal(_lhs28994,_rhs28995,true));})():_logical28982;})();return j::truth(_logical28981)?([&]()->V{V _callee28998=_v_22272_upright;return j::call(_callee28998,j::Args{j::get(_v_22250_c.get(),this->_literals[28]),_v_22268_l});})():_logical28981;})();
_v_22277_dark=(j::truth(([&]()->V{V _logical28999=([&]()->V{V _logical29000=([&]()->V{V _logical29001=_v_22248_shade.get();return j::truth(_logical29001)?([&]()->V{V _lhs29002=([&]()->V{V _lhs29004=_v_22269_r;V _rhs29005=_v_22268_l;return V(j::number(_lhs29004)-j::number(_rhs29005));})();V _rhs29003=V(6.0);return j::binary(">=",_lhs29002,_rhs29003);})():_logical29001;})();return j::truth(_logical29000)?([&]()->V{V _lhs29006=([&]()->V{V _lhs29008=_v_22269_r;V _rhs29009=_v_22266_x;return V(j::number(_lhs29008)-j::number(_rhs29009));})();V _rhs29007=V(2.0);return j::binary("<=",_lhs29006,_rhs29007);})():_logical29000;})();return j::truth(_logical28999)?([&]()->V{V _callee29010=_v_22272_upright;return j::call(_callee29010,j::Args{j::get(_v_22250_c.get(),this->_literals[31]),_v_22269_r});})():_logical28999;})())?(j::truth(([&]()->V{V _lhs29011=([&]()->V{V _lhs29013=_v_22269_r;V _rhs29014=_v_22266_x;return V(j::number(_lhs29013)-j::number(_rhs29014));})();V _rhs29012=V(1.0);return V(j::equal(_lhs29011,_rhs29012,true));})())?this->_literals[278]:this->_literals[169]):this->_literals[134]);
(void)((([&]()->V{V _receiver29015=_v_22258_at.get();V _method29016=this->_literals[149];V _method=j::get(_receiver29015,_method29016);j::Args _params29017=j::Args{_v_22265_i};return j::call(_method,_params29017,_receiver29015);})(),([&]()->V{V _receiver29019=_v_22259_out.get();V _method29020=this->_literals[149];V _method=j::get(_receiver29019,_method29020);j::Args _params29021=j::Args{([&]()->V{V _callee29018=this->_v_21577_code.get();return j::call(_callee29018,j::Args{(j::truth(_v_22276_gleam)?this->_literals[170]:_v_22277_dark)});})()};return j::call(_method,_params29021,_receiver29019);})(),([&]()->V{V _receiver29022=_v_22260_role.get();V _method29023=this->_literals[149];V _method=j::get(_receiver29022,_method29023);j::Args _params29024=j::Args{(j::truth(_v_22276_gleam)?V(2.0):V(1.0))};return j::call(_method,_params29024,_receiver29022);})()));

}
}}
return j::function([=](const j::Args &_args_fn22278,const V &_receiver_fn22278,const V &_self_fn22278) mutable ->V{
V _v_22279__t;
j::Cell _v_22280_pt;
_v_22279__t=_args_fn22278[0];
_v_22280_pt.get()=_args_fn22278[1];
return ([&]()->V{V _receiver29031=_v_22258_at.get();V _method29032=this->_literals[66];V _method=j::get(_receiver29031,_method29032);j::Args _params29033=j::Args{j::function([=](const j::Args &_args_fn22281,const V &_receiver_fn22281,const V &_self_fn22281) mutable ->V{
V _v_22282_i;
V _v_22283_k;
_v_22282_i=_args_fn22281[0];
_v_22283_k=_args_fn22281[1];
return ([&]()->V{V _receiver29028=j::get(_v_22280_pt.get(),this->_literals[191]);V _method29029=this->_literals[196];V _method=j::get(_receiver29028,_method29029);j::Args _params29030=j::Args{_v_22282_i,j::get(_v_22259_out.get(),_v_22283_k),([&]()->V{V _receiver29025=_v_22280_pt.get();V _method29026=this->_literals[195];V _method=j::get(_receiver29025,_method29026);j::Args _params29027=j::Args{j::get(_v_22260_role.get(),_v_22283_k)};return j::call(_method,_params29027,_receiver29025);})()};return j::call(_method,_params29030,_receiver29028);})();
return V{};
},2)};return j::call(_method,_params29033,_receiver29031);})();
return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22284_starfield.get()=j::function([=](const j::Args &_args_fn22285,const V &_receiver_fn22285,const V &_self_fn22285) mutable ->V{
V _v_22286_o;
_v_22286_o=_args_fn22285[0];
{
V _v_22287_p;
V _v_22288_colors;
j::Cell _v_22289_density;
j::Cell _v_22290_period;
j::Cell _v_22291_seed;
_v_22287_p=([&]()->V{V _callee29036=this->_v_20652_optionsOf.get();return j::call(_callee29036,j::Args{this->_literals[342],_v_22286_o,([&]()->V{j::Args _array29035;_array29035.push_back(this->_literals[98]);_array29035.push_back(this->_literals[255]);_array29035.push_back(this->_literals[175]);_array29035.push_back(this->_literals[109]);return j::array(std::move(_array29035));})()});})();
_v_22288_colors=([&]()->V{V _callee29037=this->_v_20717_colorsOf.get();return j::call(_callee29037,j::Args{this->_literals[343],j::get(_v_22287_p,this->_literals[98]),this->_literals[344],V(2.0)});})();
_v_22289_density.get()=([&]()->V{V _callee29038=this->_v_20663_numberOf.get();return j::call(_callee29038,j::Args{this->_literals[345],j::get(_v_22287_p,this->_literals[255]),V(0.04),V(0.0),V(1.0)});})();
_v_22290_period.get()=([&]()->V{V _callee29039=this->_v_20682_periodOf.get();return j::call(_callee29039,j::Args{this->_literals[346],j::get(_v_22287_p,this->_literals[175]),V(4.0)});})();
_v_22291_seed.get()=([&]()->V{V _callee29040=this->_v_20701_seedOf.get();return j::call(_callee29040,j::Args{this->_literals[347],j::get(_v_22287_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _callee29143=this->_v_21571_makeMaterial.get();return j::call(_callee29143,j::Args{this->_literals[348],_v_22288_colors,_v_22290_period.get(),j::function([=](const j::Args &_args_fn22292,const V &_receiver_fn22292,const V &_self_fn22292) mutable ->V{
V _v_22293_c;
_v_22293_c=_args_fn22292[0];
{
j::Cell _v_22294_cols;
j::Cell _v_22295_stars;
V _pattern29041=_v_22293_c;
_v_22294_cols.get()=j::get(_pattern29041,this->_literals[46]);
_v_22295_stars.get()=([&]()->V{V _receiver29052=([&]()->V{V _receiver29055=j::builtin("Array");V _method29056=this->_literals[124];V _method=j::get(_receiver29055,_method29056);j::Args _params29057=j::Args{j::get(_v_22293_c,this->_literals[150])};return j::call(_method,_params29057,_receiver29055);})();V _method29053=this->_literals[158];V _method=j::get(_receiver29052,_method29053);j::Args _params29054=j::Args{j::function([=](const j::Args &_args_fn22296,const V &_receiver_fn22296,const V &_self_fn22296) mutable ->V{
V _v_22297_i;
_v_22297_i=_args_fn22296[0];
return ([&]()->V{V _lhs29042=([&]()->V{V _callee29051=this->_v_20634_hash.get();return j::call(_callee29051,j::Args{([&]()->V{V _lhs29044=_v_22297_i;V _rhs29045=_v_22294_cols.get();return V(std::fmod(j::number(_lhs29044),j::number(_rhs29045)));})(),([&]()->V{V _number29048=([&]()->V{V _lhs29049=_v_22297_i;V _rhs29050=_v_22294_cols.get();return V(j::number(_lhs29049)/j::number(_rhs29050));})();return V(std::floor(j::number(_number29048)));})(),_v_22291_seed.get()});})();V _rhs29043=_v_22289_density.get();return j::binary("<",_lhs29042,_rhs29043);})();
return V{};
},1)};return j::call(_method,_params29054,_receiver29052);})();
return j::function([=](const j::Args &_args_fn22298,const V &_receiver_fn22298,const V &_self_fn22298) mutable ->V{
V _v_22299_t;
V _v_22300_pt;
_v_22299_t=_args_fn22298[0];
_v_22300_pt=_args_fn22298[1];
{
{for(const auto &_item29058:j::elements(_v_22295_stars.get())){V _v_22301_i;
_v_22301_i=_item29058;
{
V _v_22302_x;
V _v_22303_y;
V _v_22304_b;
V _v_22305_big;
V _v_22306_ch;
_v_22302_x=([&]()->V{V _lhs29059=_v_22301_i;V _rhs29060=_v_22294_cols.get();return V(std::fmod(j::number(_lhs29059),j::number(_rhs29060)));})();
_v_22303_y=([&]()->V{V _lhs29061=([&]()->V{V _lhs29063=_v_22301_i;V _rhs29064=_v_22302_x;return V(j::number(_lhs29063)-j::number(_rhs29064));})();V _rhs29062=_v_22294_cols.get();return V(j::number(_lhs29061)/j::number(_rhs29062));})();
_v_22304_b=([&]()->V{V _lhs29065=V(0.5);V _rhs29066=([&]()->V{V _lhs29067=V(0.5);V _rhs29068=([&]()->V{V _number29095=([&]()->V{V _lhs29096=([&]()->V{V _lhs29098=([&]()->V{V _lhs29100=([&]()->V{V _lhs29102=this->_v_20628_TAU.get();V _rhs29103=_v_22299_t;return V(j::number(_lhs29102)*j::number(_rhs29103));})();V _rhs29101=([&]()->V{V _lhs29104=V(1.0);V _rhs29105=([&]()->V{V _number29111=([&]()->V{V _lhs29112=([&]()->V{V _callee29116=this->_v_20634_hash.get();return j::call(_callee29116,j::Args{_v_22302_x,_v_22303_y,([&]()->V{V _lhs29114=_v_22291_seed.get();V _rhs29115=V(1.0);return j::binary("+",_lhs29114,_rhs29115);})()});})();V _rhs29113=V(2.0);return V(j::number(_lhs29112)*j::number(_rhs29113));})();return V(std::floor(j::number(_number29111)));})();return j::binary("+",_lhs29104,_rhs29105);})();return V(j::number(_lhs29100)*j::number(_rhs29101));})();V _rhs29099=_v_22290_period.get();return V(j::number(_lhs29098)/j::number(_rhs29099));})();V _rhs29097=([&]()->V{V _lhs29117=([&]()->V{V _callee29121=this->_v_20634_hash.get();return j::call(_callee29121,j::Args{_v_22302_x,_v_22303_y,([&]()->V{V _lhs29119=_v_22291_seed.get();V _rhs29120=V(2.0);return j::binary("+",_lhs29119,_rhs29120);})()});})();V _rhs29118=this->_v_20628_TAU.get();return V(j::number(_lhs29117)*j::number(_rhs29118));})();return j::binary("+",_lhs29096,_rhs29097);})();return V(std::sin(j::number(_number29095)));})();return V(j::number(_lhs29067)*j::number(_rhs29068));})();return j::binary("+",_lhs29065,_rhs29066);})();
_v_22305_big=([&]()->V{V _lhs29122=([&]()->V{V _callee29126=this->_v_20634_hash.get();return j::call(_callee29126,j::Args{_v_22302_x,_v_22303_y,([&]()->V{V _lhs29124=_v_22291_seed.get();V _rhs29125=V(3.0);return j::binary("+",_lhs29124,_rhs29125);})()});})();V _rhs29123=V(0.85);return j::binary(">",_lhs29122,_rhs29123);})();
_v_22306_ch=(j::truth(([&]()->V{V _logical29127=_v_22305_big;return j::truth(_logical29127)?([&]()->V{V _lhs29128=_v_22304_b;V _rhs29129=V(0.7);return j::binary(">",_lhs29128,_rhs29129);})():_logical29127;})())?this->_literals[297]:(j::truth(([&]()->V{V _lhs29130=_v_22304_b;V _rhs29131=V(0.75);return j::binary(">",_lhs29130,_rhs29131);})())?this->_literals[349]:(j::truth(([&]()->V{V _lhs29132=_v_22304_b;V _rhs29133=V(0.25);return j::binary(">",_lhs29132,_rhs29133);})())?this->_literals[169]:this->_literals[350])));
(void)(([&]()->V{V _receiver29140=j::get(_v_22300_pt,this->_literals[191]);V _method29141=this->_literals[196];V _method=j::get(_receiver29140,_method29141);j::Args _params29142=j::Args{_v_22301_i,([&]()->V{V _callee29134=this->_v_21577_code.get();return j::call(_callee29134,j::Args{_v_22306_ch});})(),([&]()->V{V _receiver29137=_v_22300_pt;V _method29138=this->_literals[195];V _method=j::get(_receiver29137,_method29138);j::Args _params29139=j::Args{(j::truth(([&]()->V{V _lhs29135=_v_22304_b;V _rhs29136=V(0.6);return j::binary(">",_lhs29135,_rhs29136);})())?V(1.0):V(0.0))};return j::call(_method,_params29139,_receiver29137);})()};return j::call(_method,_params29142,_receiver29140);})());

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_22307_material.get()=j::function([=](const j::Args &_args_fn22308,const V &_receiver_fn22308,const V &_self_fn22308) mutable ->V{
j::Cell _v_22309_draw;
V _v_22310_o;
_v_22309_draw.get()=_args_fn22308[0];
_v_22310_o=_args_fn22308[1];
{
V _v_22311_p;
j::Cell _v_22312_name;
j::Cell _v_22313_n;
V _v_22314_colors;
V _v_22315_period;
if(j::truth(([&]()->V{V _lhs29144=j::unary("typeof",_v_22309_draw.get());V _rhs29145=this->_literals[0];return V(!j::equal(_lhs29144,_rhs29145,true));})())){(void)(([&]()->V{V _callee29146=this->_v_20632_fail.get();return j::call(_callee29146,j::Args{this->_literals[351]});})());
}
_v_22311_p=([&]()->V{V _callee29148=this->_v_20652_optionsOf.get();return j::call(_callee29148,j::Args{this->_literals[352],_v_22310_o,([&]()->V{j::Args _array29147;_array29147.push_back(this->_literals[98]);_array29147.push_back(this->_literals[1]);_array29147.push_back(this->_literals[318]);_array29147.push_back(this->_literals[175]);return j::array(std::move(_array29147));})()});})();
_v_22312_name.get()=([&]()->V{V _logical29149=j::get(_v_22311_p,this->_literals[1]);return j::nullish(_logical29149)?this->_literals[60]:_logical29149;})();
if(j::truth(([&]()->V{V _logical29150=([&]()->V{V _lhs29151=j::unary("typeof",_v_22312_name.get());V _rhs29152=this->_literals[4];return V(!j::equal(_lhs29151,_rhs29152,true));})();return !j::truth(_logical29150)?j::unary("!",_v_22312_name.get()):_logical29150;})())){(void)(([&]()->V{V _callee29155=this->_v_20632_fail.get();return j::call(_callee29155,j::Args{([&]()->V{std::u16string _text29153;_text29153+=u"material.name takes a string, not ";_text29153+=j::string(([&]()->V{V _callee29154=this->_v_20649_show.get();return j::call(_callee29154,j::Args{_v_22312_name.get()});})());_text29153+=u"";return V(std::move(_text29153));})()});})());
}
_v_22313_n.get()=([&]()->V{V _callee29157=this->_v_20663_numberOf.get();return j::call(_callee29157,j::Args{this->_literals[353],j::get(_v_22311_p,this->_literals[318]),([&]()->V{V _callee29156=this->_v_22611_stopsIn.get();return j::call(_callee29156,j::Args{j::get(_v_22311_p,this->_literals[98])});})(),V(1.0),V(32.0)});})();
_v_22314_colors=([&]()->V{V _callee29158=this->_v_20717_colorsOf.get();return j::call(_callee29158,j::Args{this->_literals[354],j::get(_v_22311_p,this->_literals[98]),this->_literals[310],_v_22313_n.get()});})();
_v_22315_period=(j::truth(([&]()->V{V _lhs29159=j::get(_v_22311_p,this->_literals[175]);V _rhs29160=j::builtin("undefined");return V(!j::equal(_lhs29159,_rhs29160,true));})())?([&]()->V{V _callee29161=this->_v_20682_periodOf.get();return j::call(_callee29161,j::Args{this->_literals[355],j::get(_v_22311_p,this->_literals[175]),V(4.0)});})():(j::truth(([&]()->V{V _lhs29162=j::get(_v_22309_draw.get(),this->_literals[19]);V _rhs29163=V(2.0);return j::binary(">=",_lhs29162,_rhs29163);})())?j::builtin("Infinity"):j::builtin("undefined")));
return ([&]()->V{V _callee29253=this->_v_21571_makeMaterial.get();return j::call(_callee29253,j::Args{_v_22312_name.get(),_v_22314_colors,_v_22315_period,j::function([=](const j::Args &_args_fn22316,const V &_receiver_fn22316,const V &_self_fn22316) mutable ->V{
j::Cell _v_22317_c;
_v_22317_c.get()=_args_fn22316[0];
{
j::Cell _v_22318_cols;
V _v_22319_rows;
j::Cell _v_22320_w;
j::Cell _v_22321_h;
j::Cell _v_22322_edges;
j::Cell _v_22325_cell;
V _pattern29164=_v_22317_c.get();
_v_22318_cols.get()=j::get(_pattern29164,this->_literals[46]);
_v_22319_rows=j::get(_pattern29164,this->_literals[48]);
_v_22320_w.get()=([&]()->V{V _receiver29169=j::builtin("Math");V _method29170=this->_literals[51];V _method=j::get(_receiver29169,_method29170);j::Args _params29171=j::Args{V(1.0),([&]()->V{V _lhs29165=j::get(_v_22317_c.get(),this->_literals[32]);V _rhs29166=j::get(_v_22317_c.get(),this->_literals[30]);return V(j::number(_lhs29165)-j::number(_rhs29166));})()};return j::call(_method,_params29171,_receiver29169);})();
_v_22321_h.get()=([&]()->V{V _receiver29176=j::builtin("Math");V _method29177=this->_literals[51];V _method=j::get(_receiver29176,_method29177);j::Args _params29178=j::Args{V(1.0),([&]()->V{V _lhs29172=j::get(_v_22317_c.get(),this->_literals[37]);V _rhs29173=j::get(_v_22317_c.get(),this->_literals[35]);return V(j::number(_lhs29172)-j::number(_rhs29173));})()};return j::call(_method,_params29178,_receiver29176);})();
_v_22322_edges.get()=([&]()->V{V _receiver29180=j::builtin("Array");V _method29181=this->_literals[124];V _method=j::get(_receiver29180,_method29181);j::Args _params29182=j::Args{j::get(_v_22317_c.get(),this->_literals[150]),j::function([=](const j::Args &_args_fn22323,const V &_receiver_fn22323,const V &_self_fn22323) mutable ->V{
V _v_22324_i;
_v_22324_i=_args_fn22323[0];
return (j::truth(j::get(j::get(_v_22317_c.get(),this->_literals[152]),_v_22324_i))?([&]()->V{V _callee29179=this->_v_21540_edgeChar.get();return j::call(_callee29179,j::Args{_v_22317_c.get(),_v_22324_i});})():this->_literals[12]);
return V{};
},1)};return j::call(_method,_params29182,_receiver29180);})();
_v_22325_cell.get()=([&]()->V{V _obj29183=j::object();j::put(_obj29183,this->_literals[43],V(0.0));j::put(_obj29183,this->_literals[44],V(0.0));j::put(_obj29183,this->_literals[286],V(0.0));j::put(_obj29183,this->_literals[356],V(0.0));j::put(_obj29183,this->_literals[165],V(0.0));j::put(_obj29183,this->_literals[135],this->_literals[12]);j::put(_obj29183,this->_literals[46],_v_22318_cols.get());j::put(_obj29183,this->_literals[48],_v_22319_rows);return _obj29183;})();
return j::function([=](const j::Args &_args_fn22326,const V &_receiver_fn22326,const V &_self_fn22326) mutable ->V{
j::Cell _v_22327_t;
j::Cell _v_22328_pt;
_v_22327_t.get()=_args_fn22326[0];
_v_22328_pt.get()=_args_fn22326[1];
return ([&]()->V{V _receiver29250=j::get(_v_22317_c.get(),this->_literals[150]);V _method29251=this->_literals[66];V _method=j::get(_receiver29250,_method29251);j::Args _params29252=j::Args{j::function([=](const j::Args &_args_fn22329,const V &_receiver_fn22329,const V &_self_fn22329) mutable ->V{
V _v_22330_i;
V _v_22331_k;
_v_22330_i=_args_fn22329[0];
_v_22331_k=_args_fn22329[1];
{
V _v_22332_x;
V _v_22333_y;
V _v_22334_r;
V _v_22335_ch;
_v_22332_x=([&]()->V{V _lhs29184=_v_22330_i;V _rhs29185=_v_22318_cols.get();return V(std::fmod(j::number(_lhs29184),j::number(_rhs29185)));})();
_v_22333_y=([&]()->V{V _lhs29186=([&]()->V{V _lhs29188=_v_22330_i;V _rhs29189=_v_22332_x;return V(j::number(_lhs29188)-j::number(_rhs29189));})();V _rhs29187=_v_22318_cols.get();return V(j::number(_lhs29186)/j::number(_rhs29187));})();
(void)(([&]()->V{V _base29191=_v_22325_cell.get();V _key29192=this->_literals[43];V _assign29190=_v_22332_x;return j::put(_base29191,_key29192,_assign29190);})());
(void)(([&]()->V{V _base29194=_v_22325_cell.get();V _key29195=this->_literals[44];V _assign29193=_v_22333_y;return j::put(_base29194,_key29195,_assign29193);})());
(void)(([&]()->V{V _base29197=_v_22325_cell.get();V _key29198=this->_literals[286];V _assign29196=([&]()->V{V _lhs29199=([&]()->V{V _lhs29201=([&]()->V{V _lhs29203=_v_22332_x;V _rhs29204=j::get(_v_22317_c.get(),this->_literals[30]);return V(j::number(_lhs29203)-j::number(_rhs29204));})();V _rhs29202=V(0.5);return j::binary("+",_lhs29201,_rhs29202);})();V _rhs29200=_v_22320_w.get();return V(j::number(_lhs29199)/j::number(_rhs29200));})();return j::put(_base29197,_key29198,_assign29196);})());
(void)(([&]()->V{V _base29206=_v_22325_cell.get();V _key29207=this->_literals[356];V _assign29205=([&]()->V{V _lhs29208=([&]()->V{V _lhs29210=([&]()->V{V _lhs29212=_v_22333_y;V _rhs29213=j::get(_v_22317_c.get(),this->_literals[35]);return V(j::number(_lhs29212)-j::number(_rhs29213));})();V _rhs29211=V(0.5);return j::binary("+",_lhs29210,_rhs29211);})();V _rhs29209=_v_22321_h.get();return V(j::number(_lhs29208)/j::number(_rhs29209));})();return j::put(_base29206,_key29207,_assign29205);})());
(void)(([&]()->V{V _base29215=_v_22325_cell.get();V _key29216=this->_literals[165];V _assign29214=j::get(j::get(_v_22317_c.get(),this->_literals[165]),_v_22330_i);return j::put(_base29215,_key29216,_assign29214);})());
(void)(([&]()->V{V _base29218=_v_22325_cell.get();V _key29219=this->_literals[135];V _assign29217=j::get(_v_22322_edges.get(),_v_22331_k);return j::put(_base29218,_key29219,_assign29217);})());
_v_22334_r=([&]()->V{V _callee29220=_v_22309_draw.get();return j::call(_callee29220,j::Args{_v_22325_cell.get(),_v_22327_t.get()});})();
if(j::truth(([&]()->V{V _logical29221=([&]()->V{V _logical29222=([&]()->V{V _lhs29223=_v_22334_r;V _rhs29224=V::null();return V(j::equal(_lhs29223,_rhs29224,true));})();return !j::truth(_logical29222)?([&]()->V{V _lhs29225=_v_22334_r;V _rhs29226=j::builtin("undefined");return V(j::equal(_lhs29225,_rhs29226,true));})():_logical29222;})();return !j::truth(_logical29221)?([&]()->V{V _lhs29227=_v_22334_r;V _rhs29228=this->_literals[12];return V(j::equal(_lhs29227,_rhs29228,true));})():_logical29221;})())){return V{};
}
if(j::truth(([&]()->V{V _logical29229=([&]()->V{V _lhs29230=j::unary("typeof",_v_22334_r);V _rhs29231=this->_literals[4];return V(!j::equal(_lhs29230,_rhs29231,true));})();return j::truth(_logical29229)?j::unary("!",([&]()->V{V _logical29232=([&]()->V{V _receiver29233=j::builtin("Array");V _method29234=this->_literals[6];V _method=j::get(_receiver29233,_method29234);j::Args _params29235=j::Args{_v_22334_r};return j::call(_method,_params29235,_receiver29233);})();return j::truth(_logical29232)?([&]()->V{V _lhs29236=j::unary("typeof",j::get(_v_22334_r,V(0.0)));V _rhs29237=this->_literals[4];return V(j::equal(_lhs29236,_rhs29237,true));})():_logical29232;})()):_logical29229;})())){(void)(([&]()->V{V _callee29240=this->_v_20632_fail.get();return j::call(_callee29240,j::Args{([&]()->V{std::u16string _text29238;_text29238+=u"";_text29238+=j::string(_v_22312_name.get());_text29238+=u" gave ";_text29238+=j::string(([&]()->V{V _callee29239=this->_v_20649_show.get();return j::call(_callee29239,j::Args{_v_22334_r});})());_text29238+=u": a material's function returns a character, [character, colour index] or \"\"";return V(std::move(_text29238));})()});})());
}
_v_22335_ch=(j::truth(([&]()->V{V _lhs29241=j::unary("typeof",_v_22334_r);V _rhs29242=this->_literals[4];return V(j::equal(_lhs29241,_rhs29242,true));})())?_v_22334_r:j::get(_v_22334_r,V(0.0)));
if(j::truth(j::unary("!",_v_22335_ch))){return V{};
}
(void)(([&]()->V{V _receiver29247=j::get(_v_22328_pt.get(),this->_literals[191]);V _method29248=this->_literals[196];V _method=j::get(_receiver29247,_method29248);j::Args _params29249=j::Args{_v_22330_i,([&]()->V{V _callee29243=this->_v_22336_printable.get();return j::call(_callee29243,j::Args{_v_22312_name.get(),_v_22335_ch});})(),([&]()->V{V _callee29246=this->_v_22341_colorIn.get();return j::call(_callee29246,j::Args{_v_22312_name.get(),(j::truth(([&]()->V{V _lhs29244=j::unary("typeof",_v_22334_r);V _rhs29245=this->_literals[4];return V(j::equal(_lhs29244,_rhs29245,true));})())?V(0.0):j::get(_v_22334_r,V(1.0))),_v_22313_n.get(),_v_22328_pt.get()});})()};return j::call(_method,_params29249,_receiver29247);})());

}

return V{};
},2)};return j::call(_method,_params29252,_receiver29250);})();
return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_22336_printable.get()=j::function([=](const j::Args &_args_fn22337,const V &_receiver_fn22337,const V &_self_fn22337) mutable ->V{
V _v_22338_name;
V _v_22339_ch;
_v_22338_name=_args_fn22337[0];
_v_22339_ch=_args_fn22337[1];
{
V _v_22340_cc;
_v_22340_cc=([&]()->V{V _receiver29254=_v_22339_ch;V _method29255=this->_literals[161];V _method=j::get(_receiver29254,_method29255);j::Args _params29256=j::Args{V(0.0)};return j::call(_method,_params29256,_receiver29254);})();
if(j::truth(([&]()->V{V _logical29257=([&]()->V{V _logical29258=([&]()->V{V _lhs29259=_v_22340_cc;V _rhs29260=V(32.0);return j::binary("<",_lhs29259,_rhs29260);})();return !j::truth(_logical29258)?([&]()->V{V _logical29261=([&]()->V{V _lhs29262=_v_22340_cc;V _rhs29263=V(127.0);return j::binary(">=",_lhs29262,_rhs29263);})();return j::truth(_logical29261)?([&]()->V{V _lhs29264=_v_22340_cc;V _rhs29265=V(159.0);return j::binary("<=",_lhs29264,_rhs29265);})():_logical29261;})():_logical29258;})();return !j::truth(_logical29257)?([&]()->V{V _logical29266=([&]()->V{V _lhs29267=_v_22340_cc;V _rhs29268=V(55296.0);return j::binary(">=",_lhs29267,_rhs29268);})();return j::truth(_logical29266)?([&]()->V{V _lhs29269=_v_22340_cc;V _rhs29270=V(57343.0);return j::binary("<=",_lhs29269,_rhs29270);})():_logical29266;})():_logical29257;})())){(void)(([&]()->V{V _callee29284=this->_v_20632_fail.get();return j::call(_callee29284,j::Args{([&]()->V{std::u16string _text29271;_text29271+=u"";_text29271+=j::string(_v_22338_name);_text29271+=u" drew ";_text29271+=j::string(([&]()->V{V _receiver29272=j::builtin("JSON");V _method29273=this->_literals[5];V _method=j::get(_receiver29272,_method29273);j::Args _params29274=j::Args{_v_22339_ch};return j::call(_method,_params29274,_receiver29272);})());_text29271+=u": a cell takes one printable character, and U+";_text29271+=j::string(([&]()->V{V _receiver29275=([&]()->V{V _receiver29278=([&]()->V{V _receiver29281=_v_22340_cc;V _method29282=this->_literals[358];V _method=j::get(_receiver29281,_method29282);j::Args _params29283=j::Args{V(16.0)};return j::call(_method,_params29283,_receiver29281);})();V _method29279=this->_literals[359];V _method=j::get(_receiver29278,_method29279);j::Args _params29280=j::Args{};return j::call(_method,_params29280,_receiver29278);})();V _method29276=this->_literals[360];V _method=j::get(_receiver29275,_method29276);j::Args _params29277=j::Args{V(4.0),this->_literals[357]};return j::call(_method,_params29277,_receiver29275);})());_text29271+=u" is not one";return V(std::move(_text29271));})()});})());
}
return _v_22340_cc;

}

return V{};
},2);
this->_v_22341_colorIn.get()=j::function([=](const j::Args &_args_fn22342,const V &_receiver_fn22342,const V &_self_fn22342) mutable ->V{
V _v_22343_name;
V _v_22344_col;
V _v_22345_n;
V _v_22346_pt;
_v_22343_name=_args_fn22342[0];
_v_22344_col=_args_fn22342[1];
_v_22345_n=_args_fn22342[2];
_v_22346_pt=_args_fn22342[3];
{
if(j::truth(([&]()->V{V _lhs29285=_v_22344_col;V _rhs29286=j::builtin("undefined");return V(j::equal(_lhs29285,_rhs29286,true));})())){return ([&]()->V{V _receiver29287=_v_22346_pt;V _method29288=this->_literals[195];V _method=j::get(_receiver29287,_method29288);j::Args _params29289=j::Args{V(0.0)};return j::call(_method,_params29289,_receiver29287);})();
}
if(j::truth(([&]()->V{V _logical29290=([&]()->V{V _logical29291=j::unary("!",([&]()->V{V _receiver29292=j::builtin("Number");V _method29293=this->_literals[18];V _method=j::get(_receiver29292,_method29293);j::Args _params29294=j::Args{_v_22344_col};return j::call(_method,_params29294,_receiver29292);})());return !j::truth(_logical29291)?([&]()->V{V _lhs29295=_v_22344_col;V _rhs29296=V(0.0);return j::binary("<",_lhs29295,_rhs29296);})():_logical29291;})();return !j::truth(_logical29290)?([&]()->V{V _lhs29297=_v_22344_col;V _rhs29298=_v_22345_n;return j::binary(">=",_lhs29297,_rhs29298);})():_logical29290;})())){(void)(([&]()->V{V _callee29306=this->_v_20632_fail.get();return j::call(_callee29306,j::Args{([&]()->V{std::u16string _text29299;_text29299+=u"";_text29299+=j::string(_v_22343_name);_text29299+=u" gave colour ";_text29299+=j::string(([&]()->V{V _callee29300=this->_v_20649_show.get();return j::call(_callee29300,j::Args{_v_22344_col});})());_text29299+=u": it has ";_text29299+=j::string((j::truth(([&]()->V{V _lhs29301=_v_22345_n;V _rhs29302=V(1.0);return V(j::equal(_lhs29301,_rhs29302,true));})())?this->_literals[361]:([&]()->V{std::u16string _text29303;_text29303+=u"";_text29303+=j::string(_v_22345_n);_text29303+=u" colours, 0 to ";_text29303+=j::string(([&]()->V{V _lhs29304=_v_22345_n;V _rhs29305=V(1.0);return V(j::number(_lhs29304)-j::number(_rhs29305));})());_text29303+=u"";return V(std::move(_text29303));})()));_text29299+=u", from its colors (give it more colors for more)";return V(std::move(_text29299));})()});})());
}
return ([&]()->V{V _receiver29307=_v_22346_pt;V _method29308=this->_literals[195];V _method=j::get(_receiver29307,_method29308);j::Args _params29309=j::Args{_v_22344_col};return j::call(_method,_params29309,_receiver29307);})();

}

return V{};
},4);
this->_v_22350_eachParticle.get()=j::function([=](const j::Args &_args_fn22351,const V &_receiver_fn22351,const V &_self_fn22351) mutable ->V{
V _v_22352_t;
V _v_22353_rate;
V _v_22354_period;
V _v_22355_life;
V _v_22356_seed;
V _v_22357_fn;
_v_22352_t=_args_fn22351[0];
_v_22353_rate=_args_fn22351[1];
_v_22354_period=_args_fn22351[2];
_v_22355_life=_args_fn22351[3];
_v_22356_seed=_args_fn22351[4];
_v_22357_fn=_args_fn22351[5];
{
V _v_22358_n;
V _v_22359_r;
if(j::truth(j::unary("!",([&]()->V{V _lhs29310=_v_22353_rate;V _rhs29311=V(0.0);return j::binary(">",_lhs29310,_rhs29311);})()))){return V{};
}
_v_22358_n=([&]()->V{V _receiver29319=j::builtin("Math");V _method29320=this->_literals[51];V _method=j::get(_receiver29319,_method29320);j::Args _params29321=j::Args{V(1.0),([&]()->V{V _number29314=([&]()->V{V _lhs29315=_v_22353_rate;V _rhs29316=_v_22354_period;return V(j::number(_lhs29315)*j::number(_rhs29316));})();return V(std::floor(j::number(_number29314)+.5));})()};return j::call(_method,_params29321,_receiver29319);})();
_v_22359_r=([&]()->V{V _lhs29322=_v_22358_n;V _rhs29323=_v_22354_period;return V(j::number(_lhs29322)/j::number(_rhs29323));})();
{V _v_22360_i;
_v_22360_i=([&]()->V{V _lhs29324=([&]()->V{V _number29330=([&]()->V{V _lhs29331=([&]()->V{V _lhs29333=_v_22352_t;V _rhs29334=_v_22355_life;return V(j::number(_lhs29333)-j::number(_rhs29334));})();V _rhs29332=_v_22359_r;return V(j::number(_lhs29331)*j::number(_rhs29332));})();return V(std::floor(j::number(_number29330)));})();V _rhs29325=V(1.0);return V(j::number(_lhs29324)-j::number(_rhs29325));})();
for(;j::truth(([&]()->V{V _lhs29335=_v_22360_i;V _rhs29336=([&]()->V{V _number29339=([&]()->V{V _lhs29340=_v_22352_t;V _rhs29341=_v_22359_r;return V(j::number(_lhs29340)*j::number(_rhs29341));})();return V(std::floor(j::number(_number29339)));})();return j::binary("<=",_lhs29335,_rhs29336);})());(void)(j::increment(_v_22360_i,1,false))){
V _v_22361_k;
V _v_22362_age;
_v_22361_k=([&]()->V{V _lhs29342=([&]()->V{V _lhs29344=([&]()->V{V _lhs29346=_v_22360_i;V _rhs29347=_v_22358_n;return V(std::fmod(j::number(_lhs29346),j::number(_rhs29347)));})();V _rhs29345=_v_22358_n;return j::binary("+",_lhs29344,_rhs29345);})();V _rhs29343=_v_22358_n;return V(std::fmod(j::number(_lhs29342),j::number(_rhs29343)));})();
_v_22362_age=([&]()->V{V _lhs29348=_v_22352_t;V _rhs29349=([&]()->V{V _lhs29350=([&]()->V{V _lhs29352=_v_22360_i;V _rhs29353=([&]()->V{V _lhs29354=V(0.85);V _rhs29355=([&]()->V{V _callee29356=this->_v_20634_hash.get();return j::call(_callee29356,j::Args{_v_22356_seed,_v_22361_k,V(101.0)});})();return V(j::number(_lhs29354)*j::number(_rhs29355));})();return j::binary("+",_lhs29352,_rhs29353);})();V _rhs29351=_v_22359_r;return V(j::number(_lhs29350)/j::number(_rhs29351));})();return V(j::number(_lhs29348)-j::number(_rhs29349));})();
if(j::truth(([&]()->V{V _logical29357=([&]()->V{V _lhs29358=_v_22362_age;V _rhs29359=V(0.0);return j::binary(">=",_lhs29358,_rhs29359);})();return j::truth(_logical29357)?([&]()->V{V _lhs29360=_v_22362_age;V _rhs29361=_v_22355_life;return j::binary("<",_lhs29360,_rhs29361);})():_logical29357;})())){(void)(([&]()->V{V _callee29362=_v_22357_fn;return j::call(_callee29362,j::Args{_v_22361_k,_v_22362_age});})());
}

}
}

}

return V{};
},6);
this->_v_22363_columnsOf.get()=j::function([=](const j::Args &_args_fn22364,const V &_receiver_fn22364,const V &_self_fn22364) mutable ->V{
V _v_22365_c;
_v_22365_c=_args_fn22364[0];
{
V _v_22366_xs;
_v_22366_xs=([&]()->V{j::Args _array29363;return j::array(std::move(_array29363));})();
{V _v_22367_x;
_v_22367_x=j::get(_v_22365_c,this->_literals[30]);
for(;j::truth(([&]()->V{V _lhs29364=_v_22367_x;V _rhs29365=j::get(_v_22365_c,this->_literals[32]);return j::binary("<",_lhs29364,_rhs29365);})());(void)(j::increment(_v_22367_x,1,false))){if(j::truth(([&]()->V{V _lhs29366=j::get(j::get(_v_22365_c,this->_literals[33]),_v_22367_x);V _rhs29367=V(0.0);return j::binary(">=",_lhs29366,_rhs29367);})())){(void)(([&]()->V{V _receiver29368=_v_22366_xs;V _method29369=this->_literals[149];V _method=j::get(_receiver29368,_method29369);j::Args _params29370=j::Args{_v_22367_x};return j::call(_method,_params29370,_receiver29368);})());
}
}}
return _v_22366_xs;

}

return V{};
},1);
this->_v_22368_bubbles.get()=j::function([=](const j::Args &_args_fn22369,const V &_receiver_fn22369,const V &_self_fn22369) mutable ->V{
V _v_22370_o;
_v_22370_o=_args_fn22369[0];
{
V _v_22371_p;
V _v_22372_colors;
j::Cell _v_22373_rate;
j::Cell _v_22374_speed;
j::Cell _v_22375_wobble;
j::Cell _v_22376_period;
j::Cell _v_22377_seed;
_v_22371_p=([&]()->V{V _callee29372=this->_v_20652_optionsOf.get();return j::call(_callee29372,j::Args{this->_literals[362],_v_22370_o,([&]()->V{j::Args _array29371;_array29371.push_back(this->_literals[98]);_array29371.push_back(this->_literals[363]);_array29371.push_back(this->_literals[364]);_array29371.push_back(this->_literals[365]);_array29371.push_back(this->_literals[175]);_array29371.push_back(this->_literals[109]);return j::array(std::move(_array29371));})()});})();
_v_22372_colors=([&]()->V{V _callee29373=this->_v_20717_colorsOf.get();return j::call(_callee29373,j::Args{this->_literals[366],j::get(_v_22371_p,this->_literals[98]),this->_literals[367],V(2.0)});})();
_v_22373_rate.get()=([&]()->V{V _callee29374=this->_v_20663_numberOf.get();return j::call(_callee29374,j::Args{this->_literals[368],j::get(_v_22371_p,this->_literals[363]),V(2.5),V(0.0),V(200.0)});})();
_v_22374_speed.get()=([&]()->V{V _callee29375=this->_v_20663_numberOf.get();return j::call(_callee29375,j::Args{this->_literals[369],j::get(_v_22371_p,this->_literals[364]),V(3.0),V(0.1),V(100.0)});})();
_v_22375_wobble.get()=([&]()->V{V _callee29376=this->_v_20663_numberOf.get();return j::call(_callee29376,j::Args{this->_literals[370],j::get(_v_22371_p,this->_literals[365]),V(0.5),V(0.0),V(5.0)});})();
_v_22376_period.get()=([&]()->V{V _callee29377=this->_v_20682_periodOf.get();return j::call(_callee29377,j::Args{this->_literals[371],j::get(_v_22371_p,this->_literals[175]),V(4.0)});})();
_v_22377_seed.get()=([&]()->V{V _callee29378=this->_v_20701_seedOf.get();return j::call(_callee29378,j::Args{this->_literals[372],j::get(_v_22371_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _obj29379=j::object();j::put(_obj29379,this->_literals[25],this->_literals[227]);j::put(_obj29379,this->_literals[1],this->_literals[367]);j::put(_obj29379,this->_literals[98],_v_22372_colors);j::put(_obj29379,this->_literals[175],_v_22376_period.get());j::put(_obj29379,this->_literals[373],j::function([=](const j::Args &_args_fn22378,const V &_receiver_fn22378,const V &_self_fn22378) mutable ->V{
V _v_22379_sp;
_v_22379_sp=_args_fn22378[0];
{
j::Cell _v_22380_home;
j::Cell _v_22381_cols;
j::Cell _v_22382_rows;
j::Cell _v_22383_xs;
j::Cell _v_22387_tall;
j::Cell _v_22388_life;
_v_22380_home.get()=([&]()->V{V _logical29380=j::get(_v_22379_sp,this->_literals[71]);return j::nullish(_logical29380)?j::get(_v_22379_sp,this->_literals[124]):_logical29380;})();
V _pattern29381=_v_22379_sp;
_v_22381_cols.get()=j::get(_pattern29381,this->_literals[46]);
_v_22382_rows.get()=j::get(_pattern29381,this->_literals[48]);
_v_22383_xs.get()=(j::truth(_v_22380_home.get())?([&]()->V{V _callee29382=this->_v_22363_columnsOf.get();return j::call(_callee29382,j::Args{_v_22380_home.get()});})():([&]()->V{V _receiver29384=j::builtin("Array");V _method29385=this->_literals[124];V _method=j::get(_receiver29384,_method29385);j::Args _params29386=j::Args{([&]()->V{V _obj29383=j::object();j::put(_obj29383,this->_literals[19],_v_22381_cols.get());return _obj29383;})(),j::function([=](const j::Args &_args_fn22384,const V &_receiver_fn22384,const V &_self_fn22384) mutable ->V{
V _v_22385__;
V _v_22386_x;
_v_22385__=_args_fn22384[0];
_v_22386_x=_args_fn22384[1];
return _v_22386_x;
return V{};
},2)};return j::call(_method,_params29386,_receiver29384);})());
_v_22387_tall.get()=(j::truth(_v_22380_home.get())?([&]()->V{V _lhs29387=j::get(_v_22380_home.get(),this->_literals[37]);V _rhs29388=j::get(_v_22380_home.get(),this->_literals[35]);return V(j::number(_lhs29387)-j::number(_rhs29388));})():_v_22382_rows.get());
_v_22388_life.get()=([&]()->V{V _lhs29389=([&]()->V{V _lhs29391=_v_22387_tall.get();V _rhs29392=V(2.0);return j::binary("+",_lhs29391,_rhs29392);})();V _rhs29390=([&]()->V{V _lhs29393=_v_22374_speed.get();V _rhs29394=V(0.8);return V(j::number(_lhs29393)*j::number(_rhs29394));})();return V(j::number(_lhs29389)/j::number(_rhs29390));})();
return j::function([=](const j::Args &_args_fn22389,const V &_receiver_fn22389,const V &_self_fn22389) mutable ->V{
V _v_22390_t;
j::Cell _v_22391_pt;
_v_22390_t=_args_fn22389[0];
_v_22391_pt.get()=_args_fn22389[1];
{
if(j::truth(j::unary("!",j::get(_v_22383_xs.get(),this->_literals[19])))){return V{};
}
(void)(([&]()->V{V _callee29485=this->_v_22350_eachParticle.get();return j::call(_callee29485,j::Args{_v_22390_t,_v_22373_rate.get(),_v_22376_period.get(),_v_22388_life.get(),_v_22377_seed.get(),j::function([=](const j::Args &_args_fn22392,const V &_receiver_fn22392,const V &_self_fn22392) mutable ->V{
V _v_22393_k;
V _v_22394_age;
_v_22393_k=_args_fn22392[0];
_v_22394_age=_args_fn22392[1];
{
V _v_22395_x0;
V _v_22396_y0;
V _v_22397_v;
V _v_22398_y;
V _v_22399_x;
V _v_22400_i;
V _v_22401_size;
_v_22395_x0=j::get(_v_22383_xs.get(),([&]()->V{V _number29398=([&]()->V{V _lhs29399=([&]()->V{V _callee29401=this->_v_20634_hash.get();return j::call(_callee29401,j::Args{_v_22377_seed.get(),_v_22393_k,V(1.0)});})();V _rhs29400=j::get(_v_22383_xs.get(),this->_literals[19]);return V(j::number(_lhs29399)*j::number(_rhs29400));})();return V(std::floor(j::number(_number29398)));})());
_v_22396_y0=(j::truth(_v_22380_home.get())?([&]()->V{V _lhs29402=j::get(j::get(_v_22380_home.get(),this->_literals[36]),_v_22395_x0);V _rhs29403=V(0.9);return j::binary("+",_lhs29402,_rhs29403);})():([&]()->V{V _lhs29404=_v_22382_rows.get();V _rhs29405=V(0.1);return V(j::number(_lhs29404)-j::number(_rhs29405));})());
_v_22397_v=([&]()->V{V _lhs29406=_v_22374_speed.get();V _rhs29407=([&]()->V{V _lhs29408=V(0.8);V _rhs29409=([&]()->V{V _lhs29410=V(0.4);V _rhs29411=([&]()->V{V _callee29412=this->_v_20634_hash.get();return j::call(_callee29412,j::Args{_v_22377_seed.get(),_v_22393_k,V(2.0)});})();return V(j::number(_lhs29410)*j::number(_rhs29411));})();return j::binary("+",_lhs29408,_rhs29409);})();return V(j::number(_lhs29406)*j::number(_rhs29407));})();
_v_22398_y=([&]()->V{V _lhs29413=_v_22396_y0;V _rhs29414=([&]()->V{V _lhs29415=_v_22397_v;V _rhs29416=_v_22394_age;return V(j::number(_lhs29415)*j::number(_rhs29416));})();return V(j::number(_lhs29413)-j::number(_rhs29414));})();
_v_22399_x=([&]()->V{V _lhs29417=([&]()->V{V _lhs29419=_v_22395_x0;V _rhs29420=V(0.5);return j::binary("+",_lhs29419,_rhs29420);})();V _rhs29418=([&]()->V{V _lhs29421=_v_22375_wobble.get();V _rhs29422=([&]()->V{V _number29430=([&]()->V{V _lhs29431=([&]()->V{V _lhs29433=_v_22394_age;V _rhs29434=V(4.0);return V(j::number(_lhs29433)*j::number(_rhs29434));})();V _rhs29432=([&]()->V{V _lhs29435=([&]()->V{V _callee29437=this->_v_20634_hash.get();return j::call(_callee29437,j::Args{_v_22377_seed.get(),_v_22393_k,V(3.0)});})();V _rhs29436=this->_v_20628_TAU.get();return V(j::number(_lhs29435)*j::number(_rhs29436));})();return j::binary("+",_lhs29431,_rhs29432);})();return V(std::sin(j::number(_number29430)));})();return V(j::number(_lhs29421)*j::number(_rhs29422));})();return j::binary("+",_lhs29417,_rhs29418);})();
_v_22400_i=([&]()->V{V _lhs29438=([&]()->V{V _lhs29440=([&]()->V{V _number29442=_v_22398_y;return V(std::floor(j::number(_number29442)));})();V _rhs29441=_v_22381_cols.get();return V(j::number(_lhs29440)*j::number(_rhs29441));})();V _rhs29439=([&]()->V{V _number29443=_v_22399_x;return V(std::floor(j::number(_number29443)));})();return j::binary("+",_lhs29438,_rhs29439);})();
if(j::truth(([&]()->V{V _logical29444=([&]()->V{V _logical29445=([&]()->V{V _logical29446=([&]()->V{V _logical29447=([&]()->V{V _lhs29448=_v_22398_y;V _rhs29449=V(0.0);return j::binary("<",_lhs29448,_rhs29449);})();return !j::truth(_logical29447)?([&]()->V{V _lhs29450=_v_22399_x;V _rhs29451=V(0.0);return j::binary("<",_lhs29450,_rhs29451);})():_logical29447;})();return !j::truth(_logical29446)?([&]()->V{V _lhs29452=_v_22399_x;V _rhs29453=_v_22381_cols.get();return j::binary(">=",_lhs29452,_rhs29453);})():_logical29446;})();return !j::truth(_logical29445)?([&]()->V{V _lhs29454=_v_22398_y;V _rhs29455=_v_22382_rows.get();return j::binary(">=",_lhs29454,_rhs29455);})():_logical29445;})();return !j::truth(_logical29444)?([&]()->V{V _logical29456=_v_22380_home.get();return j::truth(_logical29456)?j::unary("!",j::get(j::get(_v_22380_home.get(),this->_literals[71]),_v_22400_i)):_logical29456;})():_logical29444;})())){return V{};
}
_v_22401_size=([&]()->V{V _lhs29457=([&]()->V{V _callee29459=this->_v_20634_hash.get();return j::call(_callee29459,j::Args{_v_22377_seed.get(),_v_22393_k,V(4.0)});})();V _rhs29458=([&]()->V{V _lhs29460=([&]()->V{V _lhs29462=_v_22397_v;V _rhs29463=_v_22394_age;return V(j::number(_lhs29462)*j::number(_rhs29463));})();V _rhs29461=([&]()->V{V _receiver29466=j::builtin("Math");V _method29467=this->_literals[51];V _method=j::get(_receiver29466,_method29467);j::Args _params29468=j::Args{V(1.0),_v_22387_tall.get()};return j::call(_method,_params29468,_receiver29466);})();return V(j::number(_lhs29460)/j::number(_rhs29461));})();return j::binary("+",_lhs29457,_rhs29458);})();
(void)(([&]()->V{V _receiver29482=j::get(_v_22391_pt.get(),this->_literals[191]);V _method29483=this->_literals[196];V _method=j::get(_receiver29482,_method29483);j::Args _params29484=j::Args{_v_22400_i,([&]()->V{V _callee29476=this->_v_21577_code.get();return j::call(_callee29476,j::Args{(j::truth(([&]()->V{V _lhs29469=_v_22401_size;V _rhs29470=V(1.25);return j::binary(">",_lhs29469,_rhs29470);})())?this->_literals[374]:(j::truth(([&]()->V{V _lhs29471=_v_22401_size;V _rhs29472=V(0.7);return j::binary(">",_lhs29471,_rhs29472);})())?this->_literals[132]:(j::truth(([&]()->V{V _lhs29473=([&]()->V{V _callee29475=this->_v_20634_hash.get();return j::call(_callee29475,j::Args{_v_22377_seed.get(),_v_22393_k,V(5.0)});})();V _rhs29474=V(0.5);return j::binary(">",_lhs29473,_rhs29474);})())?this->_literals[375]:this->_literals[169])))});})(),([&]()->V{V _receiver29479=_v_22391_pt.get();V _method29480=this->_literals[195];V _method=j::get(_receiver29479,_method29480);j::Args _params29481=j::Args{(j::truth(([&]()->V{V _lhs29477=_v_22401_size;V _rhs29478=V(0.7);return j::binary(">",_lhs29477,_rhs29478);})())?V(0.0):V(1.0))};return j::call(_method,_params29481,_receiver29479);})()};return j::call(_method,_params29484,_receiver29482);})());

}

return V{};
},2)});})());

}

return V{};
},2);

}

return V{};
},1));return _obj29379;})();

}

return V{};
},1);
this->_v_22402_springPoint.get()=j::function([=](const j::Args &_args_fn22403,const V &_receiver_fn22403,const V &_self_fn22403) mutable ->V{
V _v_22404_sp;
V _v_22405_side;
_v_22404_sp=_args_fn22403[0];
_v_22405_side=_args_fn22403[1];
{
V _v_22406_c;
V _v_22407_room;
V _v_22408_mid;
if(j::truth(j::get(_v_22404_sp,this->_literals[376]))){return j::get(_v_22404_sp,this->_literals[376]);
}
if(j::truth(j::unary("!",j::get(_v_22404_sp,this->_literals[124])))){return V::null();
}
_v_22406_c=j::get(_v_22404_sp,this->_literals[124]);
_v_22407_room=([&]()->V{V _logical29486=j::get(_v_22406_c,this->_literals[59]);return j::nullish(_logical29486)?_v_22406_c:_logical29486;})();
_v_22408_mid=([&]()->V{V _number29493=([&]()->V{V _lhs29494=([&]()->V{V _lhs29496=([&]()->V{V _lhs29498=j::get(_v_22407_room,this->_literals[30]);V _rhs29499=j::get(_v_22407_room,this->_literals[32]);return j::binary("+",_lhs29498,_rhs29499);})();V _rhs29497=V(1.0);return V(j::number(_lhs29496)-j::number(_rhs29497));})();V _rhs29495=V(2.0);return V(j::number(_lhs29494)/j::number(_rhs29495));})();return V(std::floor(j::number(_number29493)));})();
return (j::truth(([&]()->V{V _lhs29500=_v_22405_side;V _rhs29501=this->_literals[33];return V(j::equal(_lhs29500,_rhs29501,true));})())?([&]()->V{j::Args _array29502;_array29502.push_back(([&]()->V{V _lhs29503=_v_22408_mid;V _rhs29504=V(0.5);return j::binary("+",_lhs29503,_rhs29504);})());_array29502.push_back(([&]()->V{V _receiver29509=j::builtin("Math");V _method29510=this->_literals[51];V _method=j::get(_receiver29509,_method29510);j::Args _params29511=j::Args{V(0.0),(j::truth(([&]()->V{V _lhs29505=j::get(j::get(_v_22406_c,this->_literals[33]),_v_22408_mid);V _rhs29506=V(0.0);return j::binary(">=",_lhs29505,_rhs29506);})())?j::get(j::get(_v_22406_c,this->_literals[33]),_v_22408_mid):j::get(_v_22406_c,this->_literals[35]))};return j::call(_method,_params29511,_receiver29509);})());return j::array(std::move(_array29502));})():([&]()->V{j::Args _array29512;_array29512.push_back(([&]()->V{V _lhs29513=_v_22408_mid;V _rhs29514=V(0.5);return j::binary("+",_lhs29513,_rhs29514);})());_array29512.push_back(([&]()->V{V _lhs29515=(j::truth(([&]()->V{V _lhs29517=j::get(j::get(_v_22406_c,this->_literals[36]),_v_22408_mid);V _rhs29518=V(0.0);return j::binary(">=",_lhs29517,_rhs29518);})())?j::get(j::get(_v_22406_c,this->_literals[36]),_v_22408_mid):([&]()->V{V _lhs29519=j::get(_v_22406_c,this->_literals[37]);V _rhs29520=V(1.0);return V(j::number(_lhs29519)-j::number(_rhs29520));})());V _rhs29516=V(1.0);return j::binary("+",_lhs29515,_rhs29516);})());return j::array(std::move(_array29512));})());

}

return V{};
},2);
this->_v_22409_plume.get()=j::function([=](const j::Args &_args_fn22410,const V &_receiver_fn22410,const V &_self_fn22410) mutable ->V{
V _v_22411_name;
V _v_22412_p;
_v_22411_name=_args_fn22410[0];
_v_22412_p=_args_fn22410[1];
{
V _v_22413_colors;
j::Cell _v_22414_height;
j::Cell _v_22415_spread;
j::Cell _v_22416_given;
j::Cell _v_22417_period;
j::Cell _v_22418_seed;
j::Cell _v_22419_phase;
_v_22413_colors=([&]()->V{V _callee29522=this->_v_20717_colorsOf.get();return j::call(_callee29522,j::Args{([&]()->V{std::u16string _text29521;_text29521+=u"";_text29521+=j::string(_v_22411_name);_text29521+=u".colors";return V(std::move(_text29521));})(),j::get(_v_22412_p,this->_literals[98]),this->_literals[226],V(3.0)});})();
_v_22414_height.get()=([&]()->V{V _callee29525=this->_v_20672_wordOrNumber.get();return j::call(_callee29525,j::Args{([&]()->V{std::u16string _text29523;_text29523+=u"";_text29523+=j::string(_v_22411_name);_text29523+=u".height";return V(std::move(_text29523));})(),j::get(_v_22412_p,this->_literals[223]),([&]()->V{V _obj29524=j::object();j::put(_obj29524,this->_literals[377],V(4.0));j::put(_obj29524,this->_literals[85],V(8.0));j::put(_obj29524,this->_literals[378],V(14.0));return _obj29524;})(),V(8.0),V(1.0),V(120.0)});})();
_v_22415_spread.get()=([&]()->V{V _callee29528=this->_v_20672_wordOrNumber.get();return j::call(_callee29528,j::Args{([&]()->V{std::u16string _text29526;_text29526+=u"";_text29526+=j::string(_v_22411_name);_text29526+=u".spread";return V(std::move(_text29526));})(),j::get(_v_22412_p,this->_literals[224]),([&]()->V{V _obj29527=j::object();j::put(_obj29527,this->_literals[379],V(0.15));j::put(_obj29527,this->_literals[85],V(0.3));j::put(_obj29527,this->_literals[380],V(0.6));return _obj29527;})(),V(0.3),V(0.0),V(3.0)});})();
_v_22416_given.get()=([&]()->V{V _callee29531=this->_v_20672_wordOrNumber.get();return j::call(_callee29531,j::Args{([&]()->V{std::u16string _text29529;_text29529+=u"";_text29529+=j::string(_v_22411_name);_text29529+=u".wind";return V(std::move(_text29529));})(),j::get(_v_22412_p,this->_literals[225]),([&]()->V{V _obj29530=j::object();j::put(_obj29530,this->_literals[218],V(0.0));j::put(_obj29530,this->_literals[22],V(0.3));j::put(_obj29530,this->_literals[220],V(1.0));return _obj29530;})(),V(0.3),j::unary("-",V(4.0)),V(4.0)});})();
_v_22417_period.get()=([&]()->V{V _callee29533=this->_v_20682_periodOf.get();return j::call(_callee29533,j::Args{([&]()->V{std::u16string _text29532;_text29532+=u"";_text29532+=j::string(_v_22411_name);_text29532+=u".period";return V(std::move(_text29532));})(),j::get(_v_22412_p,this->_literals[175]),V(4.0)});})();
_v_22418_seed.get()=([&]()->V{V _callee29535=this->_v_20701_seedOf.get();return j::call(_callee29535,j::Args{([&]()->V{std::u16string _text29534;_text29534+=u"";_text29534+=j::string(_v_22411_name);_text29534+=u".seed";return V(std::move(_text29534));})(),j::get(_v_22412_p,this->_literals[109]),V(1.0)});})();
_v_22419_phase.get()=([&]()->V{V _lhs29536=([&]()->V{V _callee29538=this->_v_20634_hash.get();return j::call(_callee29538,j::Args{_v_22418_seed.get(),V(7.0)});})();V _rhs29537=this->_v_20628_TAU.get();return V(j::number(_lhs29536)*j::number(_rhs29537));})();
return ([&]()->V{V _obj29539=j::object();j::put(_obj29539,this->_literals[25],this->_literals[227]);j::put(_obj29539,this->_literals[1],_v_22411_name);j::put(_obj29539,this->_literals[98],_v_22413_colors);j::put(_obj29539,this->_literals[175],_v_22417_period.get());j::put(_obj29539,this->_literals[373],j::function([=](const j::Args &_args_fn22420,const V &_receiver_fn22420,const V &_self_fn22420) mutable ->V{
V _v_22421_sp;
_v_22421_sp=_args_fn22420[0];
{
j::Cell _v_22422_cols;
V _v_22423_rows;
j::Cell _v_22424_from;
j::Cell _v_22425_wind;
V _pattern29540=_v_22421_sp;
_v_22422_cols.get()=j::get(_pattern29540,this->_literals[46]);
_v_22423_rows=j::get(_pattern29540,this->_literals[48]);
_v_22424_from.get()=([&]()->V{V _logical29541=([&]()->V{V _callee29542=this->_v_22402_springPoint.get();return j::call(_callee29542,j::Args{_v_22421_sp,this->_literals[33]});})();return j::nullish(_logical29541)?([&]()->V{j::Args _array29543;_array29543.push_back(([&]()->V{V _lhs29544=_v_22422_cols.get();V _rhs29545=V(2.0);return V(j::number(_lhs29544)/j::number(_rhs29545));})());_array29543.push_back(_v_22423_rows);return j::array(std::move(_array29543));})():_logical29541;})();
_v_22425_wind.get()=(j::truth(([&]()->V{V _lhs29546=j::get(_v_22421_sp,this->_literals[381]);V _rhs29547=this->_literals[28];return V(j::equal(_lhs29546,_rhs29547,true));})())?j::unary("-",([&]()->V{V _receiver29551=j::builtin("Math");V _method29552=this->_literals[51];V _method=j::get(_receiver29551,_method29552);j::Args _params29553=j::Args{V(1.5),([&]()->V{V _number29548=_v_22416_given.get();return V(std::fabs(j::number(_number29548)));})()};return j::call(_method,_params29553,_receiver29551);})()):(j::truth(([&]()->V{V _lhs29554=j::get(_v_22421_sp,this->_literals[381]);V _rhs29555=this->_literals[31];return V(j::equal(_lhs29554,_rhs29555,true));})())?([&]()->V{V _receiver29559=j::builtin("Math");V _method29560=this->_literals[51];V _method=j::get(_receiver29559,_method29560);j::Args _params29561=j::Args{V(1.5),([&]()->V{V _number29556=_v_22416_given.get();return V(std::fabs(j::number(_number29556)));})()};return j::call(_method,_params29561,_receiver29559);})():_v_22416_given.get()));
return j::function([=](const j::Args &_args_fn22426,const V &_receiver_fn22426,const V &_self_fn22426) mutable ->V{
j::Cell _v_22427_t;
j::Cell _v_22428_pt;
_v_22427_t.get()=_args_fn22426[0];
_v_22428_pt.get()=_args_fn22426[1];
{
j::Cell _v_22429_s;
V _v_22430_w;
V _v_22431_put;
V _pattern29562=_v_22428_pt.get();
_v_22429_s.get()=j::get(_pattern29562,this->_literals[191]);
_v_22430_w=([&]()->V{V _lhs29563=([&]()->V{V _lhs29565=this->_v_20628_TAU.get();V _rhs29566=_v_22427_t.get();return V(j::number(_lhs29565)*j::number(_rhs29566));})();V _rhs29564=_v_22417_period.get();return V(j::number(_lhs29563)/j::number(_rhs29564));})();
_v_22431_put=j::function([=](const j::Args &_args_fn22432,const V &_receiver_fn22432,const V &_self_fn22432) mutable ->V{
V _v_22433_x;
V _v_22434_y;
V _v_22435_ch;
V _v_22436_role;
_v_22433_x=_args_fn22432[0];
_v_22434_y=_args_fn22432[1];
_v_22435_ch=_args_fn22432[2];
_v_22436_role=_args_fn22432[3];
{
V _v_22437_xx;
_v_22437_xx=([&]()->V{V _number29567=_v_22433_x;return V(std::floor(j::number(_number29567)+.5));})();
if(j::truth(([&]()->V{V _logical29568=([&]()->V{V _lhs29569=_v_22437_xx;V _rhs29570=V(0.0);return j::binary(">=",_lhs29569,_rhs29570);})();return j::truth(_logical29568)?([&]()->V{V _lhs29571=_v_22437_xx;V _rhs29572=_v_22422_cols.get();return j::binary("<",_lhs29571,_rhs29572);})():_logical29568;})())){(void)(([&]()->V{V _receiver29581=_v_22429_s.get();V _method29582=this->_literals[196];V _method=j::get(_receiver29581,_method29582);j::Args _params29583=j::Args{([&]()->V{V _lhs29573=([&]()->V{V _lhs29575=_v_22434_y;V _rhs29576=_v_22422_cols.get();return V(j::number(_lhs29575)*j::number(_rhs29576));})();V _rhs29574=_v_22437_xx;return j::binary("+",_lhs29573,_rhs29574);})(),([&]()->V{V _callee29577=this->_v_21577_code.get();return j::call(_callee29577,j::Args{_v_22435_ch});})(),([&]()->V{V _receiver29578=_v_22428_pt.get();V _method29579=this->_literals[195];V _method=j::get(_receiver29578,_method29579);j::Args _params29580=j::Args{_v_22436_role};return j::call(_method,_params29580,_receiver29578);})()};return j::call(_method,_params29583,_receiver29581);})());
}

}

return V{};
},4);
{j::Cell _v_22438_h;
_v_22438_h.get()=V(0.0);
for(;j::truth(([&]()->V{V _lhs29584=_v_22438_h.get();V _rhs29585=_v_22414_height.get();return j::binary("<",_lhs29584,_rhs29585);})());_v_22438_h=j::Cell(_v_22438_h.get()),(void)(j::increment(_v_22438_h.get(),1,false))){
V _v_22439_y;
j::Cell _v_22440_f;
V _v_22441_centre;
V _v_22442_half;
V _v_22443_role;
V _v_22444_gone;
_v_22439_y=([&]()->V{V _lhs29586=([&]()->V{V _lhs29588=([&]()->V{V _number29590=j::get(_v_22424_from.get(),V(1.0));return V(std::floor(j::number(_number29590)));})();V _rhs29589=V(1.0);return V(j::number(_lhs29588)-j::number(_rhs29589));})();V _rhs29587=_v_22438_h.get();return V(j::number(_lhs29586)-j::number(_rhs29587));})();
if(j::truth(([&]()->V{V _lhs29591=_v_22439_y;V _rhs29592=V(0.0);return j::binary("<",_lhs29591,_rhs29592);})())){break;
}
_v_22440_f.get()=([&]()->V{V _lhs29593=([&]()->V{V _lhs29595=_v_22438_h.get();V _rhs29596=V(1.0);return j::binary("+",_lhs29595,_rhs29596);})();V _rhs29594=_v_22414_height.get();return V(j::number(_lhs29593)/j::number(_rhs29594));})();
_v_22441_centre=([&]()->V{V _lhs29597=([&]()->V{V _lhs29599=([&]()->V{V _lhs29601=j::get(_v_22424_from.get(),V(0.0));V _rhs29602=V(0.5);return V(j::number(_lhs29601)-j::number(_rhs29602));})();V _rhs29600=([&]()->V{V _lhs29603=_v_22425_wind.get();V _rhs29604=_v_22438_h.get();return V(j::number(_lhs29603)*j::number(_rhs29604));})();return j::binary("+",_lhs29599,_rhs29600);})();V _rhs29598=([&]()->V{V _lhs29605=([&]()->V{V _lhs29607=V(0.3);V _rhs29608=([&]()->V{V _lhs29609=V(1.1);V _rhs29610=_v_22440_f.get();return V(j::number(_lhs29609)*j::number(_rhs29610));})();return j::binary("+",_lhs29607,_rhs29608);})();V _rhs29606=([&]()->V{V _number29619=([&]()->V{V _lhs29620=([&]()->V{V _lhs29622=([&]()->V{V _lhs29624=_v_22438_h.get();V _rhs29625=V(0.6);return V(j::number(_lhs29624)*j::number(_rhs29625));})();V _rhs29623=([&]()->V{V _lhs29626=V(2.0);V _rhs29627=_v_22430_w;return V(j::number(_lhs29626)*j::number(_rhs29627));})();return V(j::number(_lhs29622)-j::number(_rhs29623));})();V _rhs29621=_v_22419_phase.get();return j::binary("+",_lhs29620,_rhs29621);})();return V(std::sin(j::number(_number29619)));})();return V(j::number(_lhs29605)*j::number(_rhs29606));})();return j::binary("+",_lhs29597,_rhs29598);})();
_v_22442_half=([&]()->V{V _lhs29628=_v_22415_spread.get();V _rhs29629=_v_22438_h.get();return V(j::number(_lhs29628)*j::number(_rhs29629));})();
_v_22443_role=(j::truth(([&]()->V{V _lhs29630=_v_22440_f.get();V _rhs29631=V(0.35);return j::binary("<",_lhs29630,_rhs29631);})())?V(2.0):(j::truth(([&]()->V{V _lhs29632=_v_22440_f.get();V _rhs29633=V(0.7);return j::binary("<",_lhs29632,_rhs29633);})())?V(1.0):V(0.0)));
_v_22444_gone=j::function([=](const j::Args &_args_fn22445,const V &_receiver_fn22445,const V &_self_fn22445) mutable ->V{
V _v_22446_side;
_v_22446_side=_args_fn22445[0];
return ([&]()->V{V _lhs29634=([&]()->V{V _callee29648=this->_v_21581_tiled.get();return j::call(_callee29648,j::Args{([&]()->V{V _lhs29636=([&]()->V{V _lhs29638=_v_22446_side;V _rhs29639=V(3.0);return V(j::number(_lhs29638)*j::number(_rhs29639));})();V _rhs29637=V(2.0);return j::binary("+",_lhs29636,_rhs29637);})(),([&]()->V{V _lhs29640=([&]()->V{V _lhs29642=_v_22438_h.get();V _rhs29643=V(0.9);return V(j::number(_lhs29642)*j::number(_rhs29643));})();V _rhs29641=([&]()->V{V _lhs29644=([&]()->V{V _lhs29646=_v_22427_t.get();V _rhs29647=_v_22417_period.get();return V(j::number(_lhs29646)/j::number(_rhs29647));})();V _rhs29645=V(8.0);return V(j::number(_lhs29644)*j::number(_rhs29645));})();return V(j::number(_lhs29640)-j::number(_rhs29641));})(),V(0.0),V(8.0),_v_22418_seed.get()});})();V _rhs29635=([&]()->V{V _lhs29649=([&]()->V{V _lhs29651=_v_22440_f.get();V _rhs29652=_v_22440_f.get();return V(j::number(_lhs29651)*j::number(_rhs29652));})();V _rhs29650=V(0.75);return V(j::number(_lhs29649)*j::number(_rhs29650));})();return j::binary("<",_lhs29634,_rhs29635);})();
return V{};
},1);
if(j::truth(([&]()->V{V _lhs29653=_v_22442_half;V _rhs29654=V(0.75);return j::binary("<",_lhs29653,_rhs29654);})())){
if(j::truth(j::unary("!",([&]()->V{V _callee29655=_v_22444_gone;return j::call(_callee29655,j::Args{V(0.0)});})()))){(void)(([&]()->V{V _callee29675=_v_22431_put;return j::call(_callee29675,j::Args{_v_22441_centre,_v_22439_y,(j::truth(([&]()->V{V _lhs29656=([&]()->V{V _number29666=([&]()->V{V _lhs29667=([&]()->V{V _lhs29669=([&]()->V{V _lhs29671=_v_22438_h.get();V _rhs29672=V(0.6);return V(j::number(_lhs29671)*j::number(_rhs29672));})();V _rhs29670=([&]()->V{V _lhs29673=V(2.0);V _rhs29674=_v_22430_w;return V(j::number(_lhs29673)*j::number(_rhs29674));})();return V(j::number(_lhs29669)-j::number(_rhs29670));})();V _rhs29668=_v_22419_phase.get();return j::binary("+",_lhs29667,_rhs29668);})();return V(std::cos(j::number(_number29666)));})();V _rhs29657=V(0.0);return j::binary(">",_lhs29656,_rhs29657);})())?this->_literals[174]:this->_literals[173]),_v_22443_role});})());
}

}
else {
if(j::truth(j::unary("!",([&]()->V{V _callee29676=_v_22444_gone;return j::call(_callee29676,j::Args{V(0.0)});})()))){(void)(([&]()->V{V _callee29679=_v_22431_put;return j::call(_callee29679,j::Args{([&]()->V{V _lhs29677=_v_22441_centre;V _rhs29678=_v_22442_half;return V(j::number(_lhs29677)-j::number(_rhs29678));})(),_v_22439_y,this->_literals[173],_v_22443_role});})());
}
if(j::truth(j::unary("!",([&]()->V{V _callee29680=_v_22444_gone;return j::call(_callee29680,j::Args{V(1.0)});})()))){(void)(([&]()->V{V _callee29683=_v_22431_put;return j::call(_callee29683,j::Args{([&]()->V{V _lhs29681=_v_22441_centre;V _rhs29682=_v_22442_half;return j::binary("+",_lhs29681,_rhs29682);})(),_v_22439_y,this->_literals[174],_v_22443_role});})());
}

}


}
}

}

return V{};
},2);

}

return V{};
},1));return _obj29539;})();

}

return V{};
},2);
this->_v_22447_steam.get()=j::function([=](const j::Args &_args_fn22448,const V &_receiver_fn22448,const V &_self_fn22448) mutable ->V{
V _v_22449_o;
_v_22449_o=_args_fn22448[0];
{
V _v_22450_p;
V _v_22451_colors;
j::Cell _v_22452_wisps;
j::Cell _v_22453_height;
j::Cell _v_22454_period;
j::Cell _v_22455_seed;
_v_22450_p=([&]()->V{V _callee29685=this->_v_20652_optionsOf.get();return j::call(_callee29685,j::Args{this->_literals[382],_v_22449_o,([&]()->V{j::Args _array29684;_array29684.push_back(this->_literals[98]);_array29684.push_back(this->_literals[383]);_array29684.push_back(this->_literals[223]);_array29684.push_back(this->_literals[175]);_array29684.push_back(this->_literals[109]);return j::array(std::move(_array29684));})()});})();
_v_22451_colors=([&]()->V{V _callee29686=this->_v_20717_colorsOf.get();return j::call(_callee29686,j::Args{this->_literals[384],j::get(_v_22450_p,this->_literals[98]),this->_literals[385],V(2.0)});})();
_v_22452_wisps.get()=([&]()->V{V _callee29687=this->_v_20663_numberOf.get();return j::call(_callee29687,j::Args{this->_literals[386],j::get(_v_22450_p,this->_literals[383]),V(3.0),V(1.0),V(12.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _receiver29688=j::builtin("Number");V _method29689=this->_literals[18];V _method=j::get(_receiver29688,_method29689);j::Args _params29690=j::Args{_v_22452_wisps.get()};return j::call(_method,_params29690,_receiver29688);})()))){(void)(([&]()->V{V _callee29692=this->_v_20632_fail.get();return j::call(_callee29692,j::Args{([&]()->V{std::u16string _text29691;_text29691+=u"steam.wisps takes a whole number from 1 to 12, not ";_text29691+=j::string(_v_22452_wisps.get());_text29691+=u"";return V(std::move(_text29691));})()});})());
}
_v_22453_height.get()=([&]()->V{V _callee29693=this->_v_20663_numberOf.get();return j::call(_callee29693,j::Args{this->_literals[387],j::get(_v_22450_p,this->_literals[223]),V(5.0),V(1.0),V(60.0)});})();
_v_22454_period.get()=([&]()->V{V _callee29694=this->_v_20682_periodOf.get();return j::call(_callee29694,j::Args{this->_literals[388],j::get(_v_22450_p,this->_literals[175]),V(4.0)});})();
_v_22455_seed.get()=([&]()->V{V _callee29695=this->_v_20701_seedOf.get();return j::call(_callee29695,j::Args{this->_literals[389],j::get(_v_22450_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _obj29696=j::object();j::put(_obj29696,this->_literals[25],this->_literals[227]);j::put(_obj29696,this->_literals[1],this->_literals[385]);j::put(_obj29696,this->_literals[98],_v_22451_colors);j::put(_obj29696,this->_literals[175],_v_22454_period.get());j::put(_obj29696,this->_literals[373],j::function([=](const j::Args &_args_fn22456,const V &_receiver_fn22456,const V &_self_fn22456) mutable ->V{
V _v_22457_sp;
_v_22457_sp=_args_fn22456[0];
{
j::Cell _v_22458_cols;
V _v_22459_rows;
V _v_22460_c;
j::Cell _v_22461_base;
j::Cell _v_22462_span;
j::Cell _v_22463_xs;
V _pattern29697=_v_22457_sp;
_v_22458_cols.get()=j::get(_pattern29697,this->_literals[46]);
_v_22459_rows=j::get(_pattern29697,this->_literals[48]);
_v_22460_c=j::get(_v_22457_sp,this->_literals[124]);
_v_22461_base.get()=([&]()->V{V _logical29698=([&]()->V{V _callee29699=this->_v_22402_springPoint.get();return j::call(_callee29699,j::Args{_v_22457_sp,this->_literals[33]});})();return j::nullish(_logical29698)?([&]()->V{j::Args _array29700;_array29700.push_back(([&]()->V{V _lhs29701=_v_22458_cols.get();V _rhs29702=V(2.0);return V(j::number(_lhs29701)/j::number(_rhs29702));})());_array29700.push_back(_v_22459_rows);return j::array(std::move(_array29700));})():_logical29698;})();
_v_22462_span.get()=(j::truth(_v_22460_c)?([&]()->V{V _receiver29709=j::builtin("Math");V _method29710=this->_literals[51];V _method=j::get(_receiver29709,_method29710);j::Args _params29711=j::Args{V(1.0),([&]()->V{V _lhs29703=([&]()->V{V _lhs29705=j::get(_v_22460_c,this->_literals[32]);V _rhs29706=j::get(_v_22460_c,this->_literals[30]);return V(j::number(_lhs29705)-j::number(_rhs29706));})();V _rhs29704=V(0.5);return V(j::number(_lhs29703)*j::number(_rhs29704));})()};return j::call(_method,_params29711,_receiver29709);})():([&]()->V{V _lhs29712=_v_22452_wisps.get();V _rhs29713=V(3.0);return V(j::number(_lhs29712)*j::number(_rhs29713));})());
_v_22463_xs.get()=([&]()->V{V _receiver29727=j::builtin("Array");V _method29728=this->_literals[124];V _method=j::get(_receiver29727,_method29728);j::Args _params29729=j::Args{([&]()->V{V _obj29714=j::object();j::put(_obj29714,this->_literals[19],_v_22452_wisps.get());return _obj29714;})(),j::function([=](const j::Args &_args_fn22464,const V &_receiver_fn22464,const V &_self_fn22464) mutable ->V{
V _v_22465__;
V _v_22466_j;
_v_22465__=_args_fn22464[0];
_v_22466_j=_args_fn22464[1];
return ([&]()->V{V _lhs29715=([&]()->V{V _lhs29717=j::get(_v_22461_base.get(),V(0.0));V _rhs29718=([&]()->V{V _lhs29719=_v_22462_span.get();V _rhs29720=V(2.0);return V(j::number(_lhs29719)/j::number(_rhs29720));})();return V(j::number(_lhs29717)-j::number(_rhs29718));})();V _rhs29716=([&]()->V{V _lhs29721=([&]()->V{V _lhs29723=_v_22462_span.get();V _rhs29724=([&]()->V{V _lhs29725=_v_22466_j;V _rhs29726=V(0.5);return j::binary("+",_lhs29725,_rhs29726);})();return V(j::number(_lhs29723)*j::number(_rhs29724));})();V _rhs29722=_v_22452_wisps.get();return V(j::number(_lhs29721)/j::number(_rhs29722));})();return j::binary("+",_lhs29715,_rhs29716);})();
return V{};
},2)};return j::call(_method,_params29729,_receiver29727);})();
return j::function([=](const j::Args &_args_fn22467,const V &_receiver_fn22467,const V &_self_fn22467) mutable ->V{
j::Cell _v_22468_t;
j::Cell _v_22469_pt;
_v_22468_t.get()=_args_fn22467[0];
_v_22469_pt.get()=_args_fn22467[1];
{
j::Cell _v_22470_w;
_v_22470_w.get()=([&]()->V{V _lhs29730=([&]()->V{V _lhs29732=this->_v_20628_TAU.get();V _rhs29733=_v_22468_t.get();return V(j::number(_lhs29732)*j::number(_rhs29733));})();V _rhs29731=_v_22454_period.get();return V(j::number(_lhs29730)/j::number(_rhs29731));})();
(void)(([&]()->V{V _receiver29813=_v_22463_xs.get();V _method29814=this->_literals[66];V _method=j::get(_receiver29813,_method29814);j::Args _params29815=j::Args{j::function([=](const j::Args &_args_fn22471,const V &_receiver_fn22471,const V &_self_fn22471) mutable ->V{
V _v_22472_x0;
V _v_22473_j;
_v_22472_x0=_args_fn22471[0];
_v_22473_j=_args_fn22471[1];
{
{V _v_22474_h;
_v_22474_h=V(0.0);
for(;j::truth(([&]()->V{V _lhs29734=_v_22474_h;V _rhs29735=_v_22453_height.get();return j::binary("<",_lhs29734,_rhs29735);})());(void)(j::increment(_v_22474_h,1,false))){
V _v_22475_y;
V _v_22476_ph;
V _v_22477_fade;
V _v_22478_x;
_v_22475_y=([&]()->V{V _lhs29736=([&]()->V{V _lhs29738=([&]()->V{V _number29740=j::get(_v_22461_base.get(),V(1.0));return V(std::floor(j::number(_number29740)));})();V _rhs29739=V(1.0);return V(j::number(_lhs29738)-j::number(_rhs29739));})();V _rhs29737=_v_22474_h;return V(j::number(_lhs29736)-j::number(_rhs29737));})();
if(j::truth(([&]()->V{V _lhs29741=_v_22475_y;V _rhs29742=V(0.0);return j::binary("<",_lhs29741,_rhs29742);})())){break;
}
_v_22476_ph=([&]()->V{V _lhs29743=([&]()->V{V _lhs29745=([&]()->V{V _lhs29747=([&]()->V{V _lhs29749=_v_22474_h;V _rhs29750=V(1.1);return V(j::number(_lhs29749)*j::number(_rhs29750));})();V _rhs29748=([&]()->V{V _lhs29751=V(2.0);V _rhs29752=_v_22470_w.get();return V(j::number(_lhs29751)*j::number(_rhs29752));})();return V(j::number(_lhs29747)-j::number(_rhs29748));})();V _rhs29746=([&]()->V{V _lhs29753=_v_22473_j;V _rhs29754=V(2.1);return V(j::number(_lhs29753)*j::number(_rhs29754));})();return j::binary("+",_lhs29745,_rhs29746);})();V _rhs29744=([&]()->V{V _lhs29755=([&]()->V{V _callee29757=this->_v_20634_hash.get();return j::call(_callee29757,j::Args{_v_22455_seed.get(),_v_22473_j});})();V _rhs29756=this->_v_20628_TAU.get();return V(j::number(_lhs29755)*j::number(_rhs29756));})();return j::binary("+",_lhs29743,_rhs29744);})();
_v_22477_fade=([&]()->V{V _lhs29758=([&]()->V{V _lhs29760=_v_22474_h;V _rhs29761=V(1.0);return j::binary("+",_lhs29760,_rhs29761);})();V _rhs29759=([&]()->V{V _lhs29762=_v_22453_height.get();V _rhs29763=V(1.0);return j::binary("+",_lhs29762,_rhs29763);})();return V(j::number(_lhs29758)/j::number(_rhs29759));})();
if(j::truth(([&]()->V{V _lhs29764=([&]()->V{V _callee29778=this->_v_21581_tiled.get();return j::call(_callee29778,j::Args{([&]()->V{V _lhs29766=_v_22473_j;V _rhs29767=V(3.7);return V(j::number(_lhs29766)*j::number(_rhs29767));})(),([&]()->V{V _lhs29768=([&]()->V{V _lhs29770=_v_22474_h;V _rhs29771=V(0.8);return V(j::number(_lhs29770)*j::number(_rhs29771));})();V _rhs29769=([&]()->V{V _lhs29772=([&]()->V{V _lhs29774=([&]()->V{V _lhs29776=V(2.0);V _rhs29777=_v_22468_t.get();return V(j::number(_lhs29776)*j::number(_rhs29777));})();V _rhs29775=_v_22454_period.get();return V(j::number(_lhs29774)/j::number(_rhs29775));})();V _rhs29773=V(4.0);return V(j::number(_lhs29772)*j::number(_rhs29773));})();return V(j::number(_lhs29768)-j::number(_rhs29769));})(),V(0.0),V(4.0),_v_22455_seed.get()});})();V _rhs29765=([&]()->V{V _lhs29779=_v_22477_fade;V _rhs29780=V(0.9);return V(j::number(_lhs29779)*j::number(_rhs29780));})();return j::binary("<",_lhs29764,_rhs29765);})())){continue;
}
_v_22478_x=([&]()->V{V _number29786=([&]()->V{V _lhs29787=_v_22472_x0;V _rhs29788=([&]()->V{V _lhs29789=V(0.7);V _rhs29790=([&]()->V{V _number29791=_v_22476_ph;return V(std::sin(j::number(_number29791)));})();return V(j::number(_lhs29789)*j::number(_rhs29790));})();return j::binary("+",_lhs29787,_rhs29788);})();return V(std::floor(j::number(_number29786)));})();
if(j::truth(([&]()->V{V _logical29792=([&]()->V{V _lhs29793=_v_22478_x;V _rhs29794=V(0.0);return j::binary("<",_lhs29793,_rhs29794);})();return !j::truth(_logical29792)?([&]()->V{V _lhs29795=_v_22478_x;V _rhs29796=_v_22458_cols.get();return j::binary(">=",_lhs29795,_rhs29796);})():_logical29792;})())){continue;
}
(void)(([&]()->V{V _receiver29810=j::get(_v_22469_pt.get(),this->_literals[191]);V _method29811=this->_literals[196];V _method=j::get(_receiver29810,_method29811);j::Args _params29812=j::Args{([&]()->V{V _lhs29797=([&]()->V{V _lhs29799=_v_22475_y;V _rhs29800=_v_22458_cols.get();return V(j::number(_lhs29799)*j::number(_rhs29800));})();V _rhs29798=_v_22478_x;return j::binary("+",_lhs29797,_rhs29798);})(),([&]()->V{V _callee29804=this->_v_21577_code.get();return j::call(_callee29804,j::Args{(j::truth(([&]()->V{V _lhs29801=([&]()->V{V _number29803=_v_22476_ph;return V(std::cos(j::number(_number29803)));})();V _rhs29802=V(0.0);return j::binary(">",_lhs29801,_rhs29802);})())?this->_literals[174]:this->_literals[173])});})(),([&]()->V{V _receiver29807=_v_22469_pt.get();V _method29808=this->_literals[195];V _method=j::get(_receiver29807,_method29808);j::Args _params29809=j::Args{(j::truth(([&]()->V{V _lhs29805=_v_22477_fade;V _rhs29806=V(0.5);return j::binary(">",_lhs29805,_rhs29806);})())?V(0.0):V(1.0))};return j::call(_method,_params29809,_receiver29807);})()};return j::call(_method,_params29812,_receiver29810);})());

}
}

}

return V{};
},2)};return j::call(_method,_params29815,_receiver29813);})());

}

return V{};
},2);

}

return V{};
},1));return _obj29696;})();

}

return V{};
},1);
this->_v_22479_sparks.get()=j::function([=](const j::Args &_args_fn22480,const V &_receiver_fn22480,const V &_self_fn22480) mutable ->V{
V _v_22481_o;
_v_22481_o=_args_fn22480[0];
{
V _v_22482_p;
V _v_22483_colors;
j::Cell _v_22484_rate;
j::Cell _v_22485_speed;
j::Cell _v_22486_gravity;
j::Cell _v_22487_life;
j::Cell _v_22488_period;
j::Cell _v_22489_seed;
_v_22482_p=([&]()->V{V _callee29817=this->_v_20652_optionsOf.get();return j::call(_callee29817,j::Args{this->_literals[390],_v_22481_o,([&]()->V{j::Args _array29816;_array29816.push_back(this->_literals[98]);_array29816.push_back(this->_literals[363]);_array29816.push_back(this->_literals[364]);_array29816.push_back(this->_literals[391]);_array29816.push_back(this->_literals[392]);_array29816.push_back(this->_literals[175]);_array29816.push_back(this->_literals[109]);return j::array(std::move(_array29816));})()});})();
_v_22483_colors=([&]()->V{V _callee29818=this->_v_20717_colorsOf.get();return j::call(_callee29818,j::Args{this->_literals[393],j::get(_v_22482_p,this->_literals[98]),this->_literals[394],V(3.0)});})();
_v_22484_rate.get()=([&]()->V{V _callee29819=this->_v_20663_numberOf.get();return j::call(_callee29819,j::Args{this->_literals[395],j::get(_v_22482_p,this->_literals[363]),V(8.0),V(0.0),V(200.0)});})();
_v_22485_speed.get()=([&]()->V{V _callee29820=this->_v_20663_numberOf.get();return j::call(_callee29820,j::Args{this->_literals[396],j::get(_v_22482_p,this->_literals[364]),V(7.0),V(0.0),V(100.0)});})();
_v_22486_gravity.get()=([&]()->V{V _callee29821=this->_v_20663_numberOf.get();return j::call(_callee29821,j::Args{this->_literals[397],j::get(_v_22482_p,this->_literals[391]),V(6.0),j::unary("-",V(100.0)),V(100.0)});})();
_v_22487_life.get()=([&]()->V{V _callee29822=this->_v_20663_numberOf.get();return j::call(_callee29822,j::Args{this->_literals[398],j::get(_v_22482_p,this->_literals[392]),V(1.2),V(0.1),V(20.0)});})();
_v_22488_period.get()=([&]()->V{V _callee29823=this->_v_20682_periodOf.get();return j::call(_callee29823,j::Args{this->_literals[399],j::get(_v_22482_p,this->_literals[175]),V(4.0)});})();
_v_22489_seed.get()=([&]()->V{V _callee29824=this->_v_20701_seedOf.get();return j::call(_callee29824,j::Args{this->_literals[400],j::get(_v_22482_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _obj29825=j::object();j::put(_obj29825,this->_literals[25],this->_literals[227]);j::put(_obj29825,this->_literals[1],this->_literals[394]);j::put(_obj29825,this->_literals[98],_v_22483_colors);j::put(_obj29825,this->_literals[175],_v_22488_period.get());j::put(_obj29825,this->_literals[373],j::function([=](const j::Args &_args_fn22490,const V &_receiver_fn22490,const V &_self_fn22490) mutable ->V{
V _v_22491_sp;
_v_22491_sp=_args_fn22490[0];
{
j::Cell _v_22492_cols;
j::Cell _v_22493_rows;
j::Cell _v_22494_c;
j::Cell _v_22495_xs;
j::Cell _v_22496_pt0;
V _pattern29826=_v_22491_sp;
_v_22492_cols.get()=j::get(_pattern29826,this->_literals[46]);
_v_22493_rows.get()=j::get(_pattern29826,this->_literals[48]);
_v_22494_c.get()=j::get(_v_22491_sp,this->_literals[124]);
_v_22495_xs.get()=(j::truth(_v_22494_c.get())?([&]()->V{V _callee29827=this->_v_22363_columnsOf.get();return j::call(_callee29827,j::Args{_v_22494_c.get()});})():([&]()->V{j::Args _array29828;return j::array(std::move(_array29828));})());
_v_22496_pt0.get()=([&]()->V{V _logical29829=([&]()->V{V _callee29830=this->_v_22402_springPoint.get();return j::call(_callee29830,j::Args{_v_22491_sp,this->_literals[33]});})();return j::nullish(_logical29829)?([&]()->V{j::Args _array29831;_array29831.push_back(([&]()->V{V _lhs29832=_v_22492_cols.get();V _rhs29833=V(2.0);return V(j::number(_lhs29832)/j::number(_rhs29833));})());_array29831.push_back(([&]()->V{V _lhs29834=_v_22493_rows.get();V _rhs29835=V(1.0);return V(j::number(_lhs29834)-j::number(_rhs29835));})());return j::array(std::move(_array29831));})():_logical29829;})();
return j::function([=](const j::Args &_args_fn22497,const V &_receiver_fn22497,const V &_self_fn22497) mutable ->V{
V _v_22498_t;
j::Cell _v_22499_pt;
_v_22498_t=_args_fn22497[0];
_v_22499_pt.get()=_args_fn22497[1];
{
(void)(([&]()->V{V _callee29931=this->_v_22350_eachParticle.get();return j::call(_callee29931,j::Args{_v_22498_t,_v_22484_rate.get(),_v_22488_period.get(),_v_22487_life.get(),_v_22489_seed.get(),j::function([=](const j::Args &_args_fn22500,const V &_receiver_fn22500,const V &_self_fn22500) mutable ->V{
V _v_22501_k;
V _v_22502_age;
_v_22501_k=_args_fn22500[0];
_v_22502_age=_args_fn22500[1];
{
V _v_22503_x0;
V _v_22504_y0;
V _v_22505_a;
V _v_22506_v;
V _v_22507_x;
V _v_22508_y;
V _v_22509_f;
_v_22503_x0=(j::truth(j::get(_v_22495_xs.get(),this->_literals[19]))?([&]()->V{V _lhs29836=j::get(_v_22495_xs.get(),([&]()->V{V _number29845=([&]()->V{V _lhs29846=j::get(_v_22495_xs.get(),this->_literals[19]);V _rhs29847=([&]()->V{V _lhs29848=V(0.25);V _rhs29849=([&]()->V{V _lhs29850=V(0.5);V _rhs29851=([&]()->V{V _callee29852=this->_v_20634_hash.get();return j::call(_callee29852,j::Args{_v_22489_seed.get(),_v_22501_k,V(1.0)});})();return V(j::number(_lhs29850)*j::number(_rhs29851));})();return j::binary("+",_lhs29848,_rhs29849);})();return V(j::number(_lhs29846)*j::number(_rhs29847));})();return V(std::floor(j::number(_number29845)));})());V _rhs29837=V(0.5);return j::binary("+",_lhs29836,_rhs29837);})():j::get(_v_22496_pt0.get(),V(0.0)));
_v_22504_y0=(j::truth(([&]()->V{V _logical29853=j::get(_v_22495_xs.get(),this->_literals[19]);return j::truth(_logical29853)?_v_22494_c.get():_logical29853;})())?j::get(j::get(_v_22494_c.get(),this->_literals[33]),([&]()->V{V _number29854=_v_22503_x0;return V(std::floor(j::number(_number29854)));})()):j::get(_v_22496_pt0.get(),V(1.0)));
_v_22505_a=([&]()->V{V _lhs29855=([&]()->V{V _lhs29857=j::unary("-",j::get(j::builtin("Math"),this->_literals[114]));V _rhs29858=V(2.0);return V(j::number(_lhs29857)/j::number(_rhs29858));})();V _rhs29856=([&]()->V{V _lhs29859=([&]()->V{V _lhs29861=([&]()->V{V _callee29863=this->_v_20634_hash.get();return j::call(_callee29863,j::Args{_v_22489_seed.get(),_v_22501_k,V(2.0)});})();V _rhs29862=V(0.5);return V(j::number(_lhs29861)-j::number(_rhs29862));})();V _rhs29860=V(1.1);return V(j::number(_lhs29859)*j::number(_rhs29860));})();return j::binary("+",_lhs29855,_rhs29856);})();
_v_22506_v=([&]()->V{V _lhs29864=_v_22485_speed.get();V _rhs29865=([&]()->V{V _lhs29866=V(0.6);V _rhs29867=([&]()->V{V _lhs29868=V(0.6);V _rhs29869=([&]()->V{V _callee29870=this->_v_20634_hash.get();return j::call(_callee29870,j::Args{_v_22489_seed.get(),_v_22501_k,V(3.0)});})();return V(j::number(_lhs29868)*j::number(_rhs29869));})();return j::binary("+",_lhs29866,_rhs29867);})();return V(j::number(_lhs29864)*j::number(_rhs29865));})();
_v_22507_x=([&]()->V{V _lhs29871=_v_22503_x0;V _rhs29872=([&]()->V{V _lhs29873=([&]()->V{V _lhs29875=([&]()->V{V _lhs29877=([&]()->V{V _number29879=_v_22505_a;return V(std::cos(j::number(_number29879)));})();V _rhs29878=_v_22506_v;return V(j::number(_lhs29877)*j::number(_rhs29878));})();V _rhs29876=_v_22502_age;return V(j::number(_lhs29875)*j::number(_rhs29876));})();V _rhs29874=V(1.5);return V(j::number(_lhs29873)*j::number(_rhs29874));})();return j::binary("+",_lhs29871,_rhs29872);})();
_v_22508_y=([&]()->V{V _lhs29880=([&]()->V{V _lhs29882=_v_22504_y0;V _rhs29883=([&]()->V{V _lhs29884=([&]()->V{V _lhs29886=([&]()->V{V _number29888=_v_22505_a;return V(std::sin(j::number(_number29888)));})();V _rhs29887=_v_22506_v;return V(j::number(_lhs29886)*j::number(_rhs29887));})();V _rhs29885=_v_22502_age;return V(j::number(_lhs29884)*j::number(_rhs29885));})();return j::binary("+",_lhs29882,_rhs29883);})();V _rhs29881=([&]()->V{V _lhs29889=([&]()->V{V _lhs29891=([&]()->V{V _lhs29893=V(0.5);V _rhs29894=_v_22486_gravity.get();return V(j::number(_lhs29893)*j::number(_rhs29894));})();V _rhs29892=_v_22502_age;return V(j::number(_lhs29891)*j::number(_rhs29892));})();V _rhs29890=_v_22502_age;return V(j::number(_lhs29889)*j::number(_rhs29890));})();return j::binary("+",_lhs29880,_rhs29881);})();
if(j::truth(([&]()->V{V _logical29895=([&]()->V{V _logical29896=([&]()->V{V _logical29897=([&]()->V{V _lhs29898=_v_22507_x;V _rhs29899=V(0.0);return j::binary("<",_lhs29898,_rhs29899);})();return !j::truth(_logical29897)?([&]()->V{V _lhs29900=_v_22507_x;V _rhs29901=_v_22492_cols.get();return j::binary(">=",_lhs29900,_rhs29901);})():_logical29897;})();return !j::truth(_logical29896)?([&]()->V{V _lhs29902=_v_22508_y;V _rhs29903=V(0.0);return j::binary("<",_lhs29902,_rhs29903);})():_logical29896;})();return !j::truth(_logical29895)?([&]()->V{V _lhs29904=_v_22508_y;V _rhs29905=_v_22493_rows.get();return j::binary(">=",_lhs29904,_rhs29905);})():_logical29895;})())){return V{};
}
_v_22509_f=([&]()->V{V _lhs29906=_v_22502_age;V _rhs29907=_v_22487_life.get();return V(j::number(_lhs29906)/j::number(_rhs29907));})();
(void)(([&]()->V{V _receiver29928=j::get(_v_22499_pt.get(),this->_literals[191]);V _method29929=this->_literals[196];V _method=j::get(_receiver29928,_method29929);j::Args _params29930=j::Args{([&]()->V{V _lhs29908=([&]()->V{V _lhs29910=([&]()->V{V _number29912=_v_22508_y;return V(std::floor(j::number(_number29912)));})();V _rhs29911=_v_22492_cols.get();return V(j::number(_lhs29910)*j::number(_rhs29911));})();V _rhs29909=([&]()->V{V _number29913=_v_22507_x;return V(std::floor(j::number(_number29913)));})();return j::binary("+",_lhs29908,_rhs29909);})(),([&]()->V{V _callee29920=this->_v_21577_code.get();return j::call(_callee29920,j::Args{(j::truth(([&]()->V{V _lhs29914=_v_22509_f;V _rhs29915=V(0.25);return j::binary("<",_lhs29914,_rhs29915);})())?this->_literals[297]:(j::truth(([&]()->V{V _lhs29916=_v_22509_f;V _rhs29917=V(0.6);return j::binary("<",_lhs29916,_rhs29917);})())?this->_literals[349]:(j::truth(([&]()->V{V _lhs29918=_v_22509_f;V _rhs29919=V(0.85);return j::binary("<",_lhs29918,_rhs29919);})())?this->_literals[170]:this->_literals[169])))});})(),([&]()->V{V _receiver29925=_v_22499_pt.get();V _method29926=this->_literals[195];V _method=j::get(_receiver29925,_method29926);j::Args _params29927=j::Args{(j::truth(([&]()->V{V _lhs29921=_v_22509_f;V _rhs29922=V(0.3);return j::binary("<",_lhs29921,_rhs29922);})())?V(0.0):(j::truth(([&]()->V{V _lhs29923=_v_22509_f;V _rhs29924=V(0.7);return j::binary("<",_lhs29923,_rhs29924);})())?V(1.0):V(2.0)))};return j::call(_method,_params29927,_receiver29925);})()};return j::call(_method,_params29930,_receiver29928);})());

}

return V{};
},2)});})());

}

return V{};
},2);

}

return V{};
},1));return _obj29825;})();

}

return V{};
},1);
this->_v_22510_rain.get()=j::function([=](const j::Args &_args_fn22511,const V &_receiver_fn22511,const V &_self_fn22511) mutable ->V{
V _v_22512_o;
_v_22512_o=_args_fn22511[0];
{
V _v_22513_p;
V _v_22514_colors;
j::Cell _v_22515_rate;
j::Cell _v_22516_speed;
j::Cell _v_22517_wind;
j::Cell _v_22518_period;
j::Cell _v_22519_seed;
_v_22513_p=([&]()->V{V _callee29933=this->_v_20652_optionsOf.get();return j::call(_callee29933,j::Args{this->_literals[401],_v_22512_o,([&]()->V{j::Args _array29932;_array29932.push_back(this->_literals[98]);_array29932.push_back(this->_literals[363]);_array29932.push_back(this->_literals[364]);_array29932.push_back(this->_literals[225]);_array29932.push_back(this->_literals[175]);_array29932.push_back(this->_literals[109]);return j::array(std::move(_array29932));})()});})();
_v_22514_colors=([&]()->V{V _callee29934=this->_v_20717_colorsOf.get();return j::call(_callee29934,j::Args{this->_literals[402],j::get(_v_22513_p,this->_literals[98]),this->_literals[403],V(2.0)});})();
_v_22515_rate.get()=([&]()->V{V _callee29935=this->_v_20663_numberOf.get();return j::call(_callee29935,j::Args{this->_literals[404],j::get(_v_22513_p,this->_literals[363]),V(24.0),V(0.0),V(400.0)});})();
_v_22516_speed.get()=([&]()->V{V _callee29936=this->_v_20663_numberOf.get();return j::call(_callee29936,j::Args{this->_literals[405],j::get(_v_22513_p,this->_literals[364]),V(12.0),V(0.5),V(200.0)});})();
_v_22517_wind.get()=([&]()->V{V _callee29937=this->_v_20663_numberOf.get();return j::call(_callee29937,j::Args{this->_literals[406],j::get(_v_22513_p,this->_literals[225]),V(0.0),j::unary("-",V(50.0)),V(50.0)});})();
_v_22518_period.get()=([&]()->V{V _callee29938=this->_v_20682_periodOf.get();return j::call(_callee29938,j::Args{this->_literals[407],j::get(_v_22513_p,this->_literals[175]),V(4.0)});})();
_v_22519_seed.get()=([&]()->V{V _callee29939=this->_v_20701_seedOf.get();return j::call(_callee29939,j::Args{this->_literals[408],j::get(_v_22513_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _obj29940=j::object();j::put(_obj29940,this->_literals[25],this->_literals[227]);j::put(_obj29940,this->_literals[1],this->_literals[403]);j::put(_obj29940,this->_literals[98],_v_22514_colors);j::put(_obj29940,this->_literals[175],_v_22518_period.get());j::put(_obj29940,this->_literals[373],j::function([=](const j::Args &_args_fn22520,const V &_receiver_fn22520,const V &_self_fn22520) mutable ->V{
V _v_22521_sp;
_v_22521_sp=_args_fn22520[0];
{
j::Cell _v_22522_cols;
j::Cell _v_22523_rows;
j::Cell _v_22524_c;
j::Cell _v_22525_xs;
j::Cell _v_22529_life;
V _v_22530_slant;
j::Cell _v_22531_drop;
V _pattern29941=_v_22521_sp;
_v_22522_cols.get()=j::get(_pattern29941,this->_literals[46]);
_v_22523_rows.get()=j::get(_pattern29941,this->_literals[48]);
_v_22524_c.get()=j::get(_v_22521_sp,this->_literals[124]);
_v_22525_xs.get()=(j::truth(_v_22524_c.get())?([&]()->V{V _callee29942=this->_v_22363_columnsOf.get();return j::call(_callee29942,j::Args{_v_22524_c.get()});})():([&]()->V{V _receiver29944=j::builtin("Array");V _method29945=this->_literals[124];V _method=j::get(_receiver29944,_method29945);j::Args _params29946=j::Args{([&]()->V{V _obj29943=j::object();j::put(_obj29943,this->_literals[19],_v_22522_cols.get());return _obj29943;})(),j::function([=](const j::Args &_args_fn22526,const V &_receiver_fn22526,const V &_self_fn22526) mutable ->V{
V _v_22527__;
V _v_22528_x;
_v_22527__=_args_fn22526[0];
_v_22528_x=_args_fn22526[1];
return _v_22528_x;
return V{};
},2)};return j::call(_method,_params29946,_receiver29944);})());
_v_22529_life.get()=([&]()->V{V _lhs29947=([&]()->V{V _lhs29949=([&]()->V{V _lhs29951=_v_22523_rows.get();V _rhs29952=V(2.0);return j::binary("+",_lhs29951,_rhs29952);})();V _rhs29950=_v_22516_speed.get();return V(j::number(_lhs29949)/j::number(_rhs29950));})();V _rhs29948=V(0.2);return j::binary("+",_lhs29947,_rhs29948);})();
_v_22530_slant=([&]()->V{V _lhs29953=_v_22517_wind.get();V _rhs29954=_v_22516_speed.get();return V(j::number(_lhs29953)/j::number(_rhs29954));})();
_v_22531_drop.get()=([&]()->V{V _callee29959=this->_v_21577_code.get();return j::call(_callee29959,j::Args{(j::truth(([&]()->V{V _lhs29955=_v_22530_slant;V _rhs29956=V(0.25);return j::binary(">",_lhs29955,_rhs29956);})())?this->_literals[95]:(j::truth(([&]()->V{V _lhs29957=_v_22530_slant;V _rhs29958=j::unary("-",V(0.25));return j::binary("<",_lhs29957,_rhs29958);})())?this->_literals[96]:this->_literals[97]))});})();
return j::function([=](const j::Args &_args_fn22532,const V &_receiver_fn22532,const V &_self_fn22532) mutable ->V{
V _v_22533_t;
j::Cell _v_22534_pt;
_v_22533_t=_args_fn22532[0];
_v_22534_pt.get()=_args_fn22532[1];
{
if(j::truth(j::unary("!",j::get(_v_22525_xs.get(),this->_literals[19])))){return V{};
}
(void)(([&]()->V{V _callee30016=this->_v_22350_eachParticle.get();return j::call(_callee30016,j::Args{_v_22533_t,_v_22515_rate.get(),_v_22518_period.get(),_v_22529_life.get(),_v_22519_seed.get(),j::function([=](const j::Args &_args_fn22535,const V &_receiver_fn22535,const V &_self_fn22535) mutable ->V{
V _v_22536_k;
V _v_22537_age;
_v_22536_k=_args_fn22535[0];
_v_22537_age=_args_fn22535[1];
{
V _v_22538_x0;
V _v_22539_y0;
V _v_22540_y;
V _v_22541_x;
V _v_22542_floor;
V _v_22543_ch;
V _v_22544_yy;
_v_22538_x0=j::get(_v_22525_xs.get(),([&]()->V{V _number29963=([&]()->V{V _lhs29964=([&]()->V{V _callee29966=this->_v_20634_hash.get();return j::call(_callee29966,j::Args{_v_22519_seed.get(),_v_22536_k,V(1.0)});})();V _rhs29965=j::get(_v_22525_xs.get(),this->_literals[19]);return V(j::number(_lhs29964)*j::number(_rhs29965));})();return V(std::floor(j::number(_number29963)));})());
_v_22539_y0=(j::truth(_v_22524_c.get())?([&]()->V{V _lhs29967=j::get(j::get(_v_22524_c.get(),this->_literals[36]),_v_22538_x0);V _rhs29968=V(1.0);return j::binary("+",_lhs29967,_rhs29968);})():V(0.0));
_v_22540_y=([&]()->V{V _lhs29969=_v_22539_y0;V _rhs29970=([&]()->V{V _lhs29971=_v_22516_speed.get();V _rhs29972=_v_22537_age;return V(j::number(_lhs29971)*j::number(_rhs29972));})();return j::binary("+",_lhs29969,_rhs29970);})();
_v_22541_x=([&]()->V{V _lhs29973=([&]()->V{V _lhs29975=_v_22538_x0;V _rhs29976=V(0.5);return j::binary("+",_lhs29975,_rhs29976);})();V _rhs29974=([&]()->V{V _lhs29977=_v_22517_wind.get();V _rhs29978=_v_22537_age;return V(j::number(_lhs29977)*j::number(_rhs29978));})();return j::binary("+",_lhs29973,_rhs29974);})();
_v_22542_floor=([&]()->V{V _lhs29979=_v_22523_rows.get();V _rhs29980=V(1.0);return V(j::number(_lhs29979)-j::number(_rhs29980));})();
_v_22543_ch=_v_22531_drop.get();
_v_22544_yy=_v_22540_y;
if(j::truth(([&]()->V{V _lhs29981=_v_22540_y;V _rhs29982=_v_22542_floor;return j::binary(">=",_lhs29981,_rhs29982);})())){
if(j::truth(([&]()->V{V _lhs29983=([&]()->V{V _lhs29985=_v_22537_age;V _rhs29986=([&]()->V{V _lhs29987=([&]()->V{V _lhs29989=_v_22542_floor;V _rhs29990=_v_22539_y0;return V(j::number(_lhs29989)-j::number(_rhs29990));})();V _rhs29988=_v_22516_speed.get();return V(j::number(_lhs29987)/j::number(_rhs29988));})();return V(j::number(_lhs29985)-j::number(_rhs29986));})();V _rhs29984=V(0.15);return j::binary(">",_lhs29983,_rhs29984);})())){return V{};
}
(void)(((_v_22543_ch=([&]()->V{V _callee29995=this->_v_21577_code.get();return j::call(_callee29995,j::Args{(j::truth(([&]()->V{V _lhs29992=([&]()->V{V _callee29994=this->_v_20634_hash.get();return j::call(_callee29994,j::Args{_v_22519_seed.get(),_v_22536_k,V(2.0)});})();V _rhs29993=V(0.5);return j::binary(">",_lhs29992,_rhs29993);})())?this->_literals[169]:this->_literals[268])});})()),(_v_22544_yy=_v_22542_floor)));

}

if(j::truth(([&]()->V{V _logical29997=([&]()->V{V _lhs29998=_v_22541_x;V _rhs29999=V(0.0);return j::binary("<",_lhs29998,_rhs29999);})();return !j::truth(_logical29997)?([&]()->V{V _lhs30000=_v_22541_x;V _rhs30001=_v_22522_cols.get();return j::binary(">=",_lhs30000,_rhs30001);})():_logical29997;})())){return V{};
}
(void)(([&]()->V{V _receiver30013=j::get(_v_22534_pt.get(),this->_literals[191]);V _method30014=this->_literals[196];V _method=j::get(_receiver30013,_method30014);j::Args _params30015=j::Args{([&]()->V{V _lhs30002=([&]()->V{V _lhs30004=([&]()->V{V _number30006=_v_22544_yy;return V(std::floor(j::number(_number30006)));})();V _rhs30005=_v_22522_cols.get();return V(j::number(_lhs30004)*j::number(_rhs30005));})();V _rhs30003=([&]()->V{V _number30007=_v_22541_x;return V(std::floor(j::number(_number30007)));})();return j::binary("+",_lhs30002,_rhs30003);})(),_v_22543_ch,([&]()->V{V _receiver30010=_v_22534_pt.get();V _method30011=this->_literals[195];V _method=j::get(_receiver30010,_method30011);j::Args _params30012=j::Args{(j::truth(([&]()->V{V _lhs30008=_v_22543_ch;V _rhs30009=_v_22531_drop.get();return V(j::equal(_lhs30008,_rhs30009,true));})())?V(0.0):V(1.0))};return j::call(_method,_params30012,_receiver30010);})()};return j::call(_method,_params30015,_receiver30013);})());

}

return V{};
},2)});})());

}

return V{};
},2);

}

return V{};
},1));return _obj29940;})();

}

return V{};
},1);
this->_v_22545_snow.get()=j::function([=](const j::Args &_args_fn22546,const V &_receiver_fn22546,const V &_self_fn22546) mutable ->V{
V _v_22547_o;
_v_22547_o=_args_fn22546[0];
{
V _v_22548_p;
V _v_22549_colors;
j::Cell _v_22550_rate;
j::Cell _v_22551_speed;
j::Cell _v_22552_wind;
j::Cell _v_22553_period;
j::Cell _v_22554_seed;
_v_22548_p=([&]()->V{V _callee30018=this->_v_20652_optionsOf.get();return j::call(_callee30018,j::Args{this->_literals[409],_v_22547_o,([&]()->V{j::Args _array30017;_array30017.push_back(this->_literals[98]);_array30017.push_back(this->_literals[363]);_array30017.push_back(this->_literals[364]);_array30017.push_back(this->_literals[225]);_array30017.push_back(this->_literals[175]);_array30017.push_back(this->_literals[109]);return j::array(std::move(_array30017));})()});})();
_v_22549_colors=([&]()->V{V _callee30019=this->_v_20717_colorsOf.get();return j::call(_callee30019,j::Args{this->_literals[410],j::get(_v_22548_p,this->_literals[98]),this->_literals[411],V(2.0)});})();
_v_22550_rate.get()=([&]()->V{V _callee30020=this->_v_20663_numberOf.get();return j::call(_callee30020,j::Args{this->_literals[412],j::get(_v_22548_p,this->_literals[363]),V(10.0),V(0.0),V(400.0)});})();
_v_22551_speed.get()=([&]()->V{V _callee30021=this->_v_20663_numberOf.get();return j::call(_callee30021,j::Args{this->_literals[413],j::get(_v_22548_p,this->_literals[364]),V(2.0),V(0.1),V(50.0)});})();
_v_22552_wind.get()=([&]()->V{V _callee30022=this->_v_20663_numberOf.get();return j::call(_callee30022,j::Args{this->_literals[414],j::get(_v_22548_p,this->_literals[225]),V(0.5),j::unary("-",V(20.0)),V(20.0)});})();
_v_22553_period.get()=([&]()->V{V _callee30023=this->_v_20682_periodOf.get();return j::call(_callee30023,j::Args{this->_literals[415],j::get(_v_22548_p,this->_literals[175]),V(8.0)});})();
_v_22554_seed.get()=([&]()->V{V _callee30024=this->_v_20701_seedOf.get();return j::call(_callee30024,j::Args{this->_literals[416],j::get(_v_22548_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _obj30025=j::object();j::put(_obj30025,this->_literals[25],this->_literals[227]);j::put(_obj30025,this->_literals[1],this->_literals[411]);j::put(_obj30025,this->_literals[98],_v_22549_colors);j::put(_obj30025,this->_literals[175],_v_22553_period.get());j::put(_obj30025,this->_literals[373],j::function([=](const j::Args &_args_fn22555,const V &_receiver_fn22555,const V &_self_fn22555) mutable ->V{
V _v_22556_sp;
_v_22556_sp=_args_fn22555[0];
{
j::Cell _v_22557_cols;
j::Cell _v_22558_rows;
j::Cell _v_22559_c;
j::Cell _v_22560_xs;
j::Cell _v_22564_life;
V _pattern30026=_v_22556_sp;
_v_22557_cols.get()=j::get(_pattern30026,this->_literals[46]);
_v_22558_rows.get()=j::get(_pattern30026,this->_literals[48]);
_v_22559_c.get()=j::get(_v_22556_sp,this->_literals[124]);
_v_22560_xs.get()=(j::truth(_v_22559_c.get())?([&]()->V{V _callee30027=this->_v_22363_columnsOf.get();return j::call(_callee30027,j::Args{_v_22559_c.get()});})():([&]()->V{V _receiver30029=j::builtin("Array");V _method30030=this->_literals[124];V _method=j::get(_receiver30029,_method30030);j::Args _params30031=j::Args{([&]()->V{V _obj30028=j::object();j::put(_obj30028,this->_literals[19],_v_22557_cols.get());return _obj30028;})(),j::function([=](const j::Args &_args_fn22561,const V &_receiver_fn22561,const V &_self_fn22561) mutable ->V{
V _v_22562__;
V _v_22563_x;
_v_22562__=_args_fn22561[0];
_v_22563_x=_args_fn22561[1];
return _v_22563_x;
return V{};
},2)};return j::call(_method,_params30031,_receiver30029);})());
_v_22564_life.get()=([&]()->V{V _lhs30032=([&]()->V{V _lhs30034=_v_22558_rows.get();V _rhs30035=V(1.0);return j::binary("+",_lhs30034,_rhs30035);})();V _rhs30033=([&]()->V{V _lhs30036=_v_22551_speed.get();V _rhs30037=V(0.7);return V(j::number(_lhs30036)*j::number(_rhs30037));})();return V(j::number(_lhs30032)/j::number(_rhs30033));})();
return j::function([=](const j::Args &_args_fn22565,const V &_receiver_fn22565,const V &_self_fn22565) mutable ->V{
V _v_22566_t;
j::Cell _v_22567_pt;
_v_22566_t=_args_fn22565[0];
_v_22567_pt.get()=_args_fn22565[1];
{
if(j::truth(j::unary("!",j::get(_v_22560_xs.get(),this->_literals[19])))){return V{};
}
(void)(([&]()->V{V _callee30108=this->_v_22350_eachParticle.get();return j::call(_callee30108,j::Args{_v_22566_t,_v_22550_rate.get(),_v_22553_period.get(),_v_22564_life.get(),_v_22554_seed.get(),j::function([=](const j::Args &_args_fn22568,const V &_receiver_fn22568,const V &_self_fn22568) mutable ->V{
V _v_22569_k;
V _v_22570_age;
_v_22569_k=_args_fn22568[0];
_v_22570_age=_args_fn22568[1];
{
V _v_22571_x0;
V _v_22572_y;
V _v_22573_x;
V _v_22574_xx;
_v_22571_x0=j::get(_v_22560_xs.get(),([&]()->V{V _number30041=([&]()->V{V _lhs30042=([&]()->V{V _callee30044=this->_v_20634_hash.get();return j::call(_callee30044,j::Args{_v_22554_seed.get(),_v_22569_k,V(1.0)});})();V _rhs30043=j::get(_v_22560_xs.get(),this->_literals[19]);return V(j::number(_lhs30042)*j::number(_rhs30043));})();return V(std::floor(j::number(_number30041)));})());
_v_22572_y=([&]()->V{V _lhs30045=(j::truth(_v_22559_c.get())?([&]()->V{V _lhs30047=j::get(j::get(_v_22559_c.get(),this->_literals[36]),_v_22571_x0);V _rhs30048=V(1.0);return j::binary("+",_lhs30047,_rhs30048);})():V(0.0));V _rhs30046=([&]()->V{V _lhs30049=([&]()->V{V _lhs30051=_v_22551_speed.get();V _rhs30052=([&]()->V{V _lhs30053=V(0.7);V _rhs30054=([&]()->V{V _lhs30055=V(0.6);V _rhs30056=([&]()->V{V _callee30057=this->_v_20634_hash.get();return j::call(_callee30057,j::Args{_v_22554_seed.get(),_v_22569_k,V(2.0)});})();return V(j::number(_lhs30055)*j::number(_rhs30056));})();return j::binary("+",_lhs30053,_rhs30054);})();return V(j::number(_lhs30051)*j::number(_rhs30052));})();V _rhs30050=_v_22570_age;return V(j::number(_lhs30049)*j::number(_rhs30050));})();return j::binary("+",_lhs30045,_rhs30046);})();
_v_22573_x=([&]()->V{V _lhs30058=([&]()->V{V _lhs30060=([&]()->V{V _lhs30062=_v_22571_x0;V _rhs30063=V(0.5);return j::binary("+",_lhs30062,_rhs30063);})();V _rhs30061=([&]()->V{V _lhs30064=_v_22552_wind.get();V _rhs30065=_v_22570_age;return V(j::number(_lhs30064)*j::number(_rhs30065));})();return j::binary("+",_lhs30060,_rhs30061);})();V _rhs30059=([&]()->V{V _number30073=([&]()->V{V _lhs30074=([&]()->V{V _lhs30076=_v_22570_age;V _rhs30077=V(2.0);return V(j::number(_lhs30076)*j::number(_rhs30077));})();V _rhs30075=([&]()->V{V _lhs30078=([&]()->V{V _callee30080=this->_v_20634_hash.get();return j::call(_callee30080,j::Args{_v_22554_seed.get(),_v_22569_k,V(3.0)});})();V _rhs30079=this->_v_20628_TAU.get();return V(j::number(_lhs30078)*j::number(_rhs30079));})();return j::binary("+",_lhs30074,_rhs30075);})();return V(std::sin(j::number(_number30073)));})();return j::binary("+",_lhs30058,_rhs30059);})();
_v_22574_xx=([&]()->V{V _lhs30081=([&]()->V{V _lhs30083=([&]()->V{V _lhs30085=([&]()->V{V _number30087=_v_22573_x;return V(std::floor(j::number(_number30087)));})();V _rhs30086=_v_22557_cols.get();return V(std::fmod(j::number(_lhs30085),j::number(_rhs30086)));})();V _rhs30084=_v_22557_cols.get();return j::binary("+",_lhs30083,_rhs30084);})();V _rhs30082=_v_22557_cols.get();return V(std::fmod(j::number(_lhs30081),j::number(_rhs30082)));})();
if(j::truth(([&]()->V{V _lhs30088=_v_22572_y;V _rhs30089=_v_22558_rows.get();return j::binary(">=",_lhs30088,_rhs30089);})())){return V{};
}
(void)(([&]()->V{V _receiver30105=j::get(_v_22567_pt.get(),this->_literals[191]);V _method30106=this->_literals[196];V _method=j::get(_receiver30105,_method30106);j::Args _params30107=j::Args{([&]()->V{V _lhs30090=([&]()->V{V _lhs30092=([&]()->V{V _number30094=_v_22572_y;return V(std::floor(j::number(_number30094)));})();V _rhs30093=_v_22557_cols.get();return V(j::number(_lhs30092)*j::number(_rhs30093));})();V _rhs30091=_v_22574_xx;return j::binary("+",_lhs30090,_rhs30091);})(),([&]()->V{V _callee30098=this->_v_21577_code.get();return j::call(_callee30098,j::Args{(j::truth(([&]()->V{V _lhs30095=([&]()->V{V _callee30097=this->_v_20634_hash.get();return j::call(_callee30097,j::Args{_v_22554_seed.get(),_v_22569_k,V(4.0)});})();V _rhs30096=V(0.7);return j::binary(">",_lhs30095,_rhs30096);})())?this->_literals[297]:this->_literals[169])});})(),([&]()->V{V _receiver30102=_v_22567_pt.get();V _method30103=this->_literals[195];V _method=j::get(_receiver30102,_method30103);j::Args _params30104=j::Args{(j::truth(([&]()->V{V _lhs30099=([&]()->V{V _callee30101=this->_v_20634_hash.get();return j::call(_callee30101,j::Args{_v_22554_seed.get(),_v_22569_k,V(4.0)});})();V _rhs30100=V(0.7);return j::binary(">",_lhs30099,_rhs30100);})())?V(1.0):V(0.0))};return j::call(_method,_params30104,_receiver30102);})()};return j::call(_method,_params30107,_receiver30105);})());

}

return V{};
},2)});})());

}

return V{};
},2);

}

return V{};
},1));return _obj30025;})();

}

return V{};
},1);
this->_v_22575_emission.get()=j::function([=](const j::Args &_args_fn22576,const V &_receiver_fn22576,const V &_self_fn22576) mutable ->V{
j::Cell _v_22577_draw;
V _v_22578_o;
_v_22577_draw.get()=_args_fn22576[0];
_v_22578_o=_args_fn22576[1];
{
V _v_22579_p;
j::Cell _v_22580_name;
j::Cell _v_22581_n;
V _v_22582_colors;
j::Cell _v_22583_rate;
j::Cell _v_22584_life;
j::Cell _v_22585_birth;
j::Cell _v_22586_period;
j::Cell _v_22587_seed;
if(j::truth(([&]()->V{V _lhs30109=j::unary("typeof",_v_22577_draw.get());V _rhs30110=this->_literals[0];return V(!j::equal(_lhs30109,_rhs30110,true));})())){(void)(([&]()->V{V _callee30111=this->_v_20632_fail.get();return j::call(_callee30111,j::Args{this->_literals[417]});})());
}
_v_22579_p=([&]()->V{V _callee30113=this->_v_20652_optionsOf.get();return j::call(_callee30113,j::Args{this->_literals[418],_v_22578_o,([&]()->V{j::Args _array30112;_array30112.push_back(this->_literals[98]);_array30112.push_back(this->_literals[1]);_array30112.push_back(this->_literals[363]);_array30112.push_back(this->_literals[392]);_array30112.push_back(this->_literals[419]);_array30112.push_back(this->_literals[175]);_array30112.push_back(this->_literals[318]);_array30112.push_back(this->_literals[109]);return j::array(std::move(_array30112));})()});})();
_v_22580_name.get()=([&]()->V{V _logical30114=j::get(_v_22579_p,this->_literals[1]);return j::nullish(_logical30114)?this->_literals[227]:_logical30114;})();
if(j::truth(([&]()->V{V _logical30115=([&]()->V{V _lhs30116=j::unary("typeof",_v_22580_name.get());V _rhs30117=this->_literals[4];return V(!j::equal(_lhs30116,_rhs30117,true));})();return !j::truth(_logical30115)?j::unary("!",_v_22580_name.get()):_logical30115;})())){(void)(([&]()->V{V _callee30120=this->_v_20632_fail.get();return j::call(_callee30120,j::Args{([&]()->V{std::u16string _text30118;_text30118+=u"emission.name takes a string, not ";_text30118+=j::string(([&]()->V{V _callee30119=this->_v_20649_show.get();return j::call(_callee30119,j::Args{_v_22580_name.get()});})());_text30118+=u"";return V(std::move(_text30118));})()});})());
}
_v_22581_n.get()=([&]()->V{V _callee30122=this->_v_20663_numberOf.get();return j::call(_callee30122,j::Args{this->_literals[420],j::get(_v_22579_p,this->_literals[318]),([&]()->V{V _callee30121=this->_v_22611_stopsIn.get();return j::call(_callee30121,j::Args{j::get(_v_22579_p,this->_literals[98])});})(),V(1.0),V(32.0)});})();
_v_22582_colors=([&]()->V{V _callee30123=this->_v_20717_colorsOf.get();return j::call(_callee30123,j::Args{this->_literals[421],j::get(_v_22579_p,this->_literals[98]),this->_literals[310],_v_22581_n.get()});})();
_v_22583_rate.get()=([&]()->V{V _callee30124=this->_v_20663_numberOf.get();return j::call(_callee30124,j::Args{this->_literals[422],j::get(_v_22579_p,this->_literals[363]),V(6.0),V(0.0),V(400.0)});})();
_v_22584_life.get()=([&]()->V{V _callee30125=this->_v_20663_numberOf.get();return j::call(_callee30125,j::Args{this->_literals[423],j::get(_v_22579_p,this->_literals[392]),V(2.0),V(0.05),V(60.0)});})();
_v_22585_birth.get()=([&]()->V{V _callee30127=this->_v_20688_wordOf.get();return j::call(_callee30127,j::Args{this->_literals[424],j::get(_v_22579_p,this->_literals[419]),([&]()->V{j::Args _array30126;_array30126.push_back(this->_literals[33]);_array30126.push_back(this->_literals[36]);_array30126.push_back(this->_literals[425]);return j::array(std::move(_array30126));})(),this->_literals[33]});})();
_v_22586_period.get()=([&]()->V{V _callee30128=this->_v_20682_periodOf.get();return j::call(_callee30128,j::Args{this->_literals[426],j::get(_v_22579_p,this->_literals[175]),V(4.0)});})();
_v_22587_seed.get()=([&]()->V{V _callee30129=this->_v_20701_seedOf.get();return j::call(_callee30129,j::Args{this->_literals[427],j::get(_v_22579_p,this->_literals[109]),V(1.0)});})();
return ([&]()->V{V _obj30130=j::object();j::put(_obj30130,this->_literals[25],this->_literals[227]);j::put(_obj30130,this->_literals[1],_v_22580_name.get());j::put(_obj30130,this->_literals[98],_v_22582_colors);j::put(_obj30130,this->_literals[175],_v_22586_period.get());j::put(_obj30130,this->_literals[373],j::function([=](const j::Args &_args_fn22588,const V &_receiver_fn22588,const V &_self_fn22588) mutable ->V{
j::Cell _v_22589_sp;
_v_22589_sp.get()=_args_fn22588[0];
{
j::Cell _v_22590_cols;
j::Cell _v_22591_rows;
V _v_22592_home;
j::Cell _v_22593_spots;
j::Cell _v_22597_em;
V _pattern30131=_v_22589_sp.get();
_v_22590_cols.get()=j::get(_pattern30131,this->_literals[46]);
_v_22591_rows.get()=j::get(_pattern30131,this->_literals[48]);
_v_22592_home=([&]()->V{V _logical30132=j::get(_v_22589_sp.get(),this->_literals[71]);return j::nullish(_logical30132)?j::get(_v_22589_sp.get(),this->_literals[124]):_logical30132;})();
_v_22593_spots.get()=([&]()->V{j::Args _array30133;return j::array(std::move(_array30133));})();
if(j::truth(j::unary("!",j::get(_v_22589_sp.get(),this->_literals[376])))){
if(j::truth(_v_22592_home)){
if(j::truth(([&]()->V{V _lhs30134=_v_22585_birth.get();V _rhs30135=this->_literals[425];return V(j::equal(_lhs30134,_rhs30135,true));})())){(void)(([&]()->V{V _receiver30137=_v_22593_spots.get();V _method30138=this->_literals[149];V _method=j::get(_receiver30137,_method30138);j::Args _params30139=([&](){j::Args _args30136;for(const auto &_v:j::elements(j::get(_v_22592_home,this->_literals[150])))_args30136.push_back(_v);return _args30136;})();return j::call(_method,_params30139,_receiver30137);})());
}else {{for(const auto &_item30140:j::elements(([&]()->V{V _callee30141=this->_v_22363_columnsOf.get();return j::call(_callee30141,j::Args{_v_22592_home});})())){V _v_22594_x;
_v_22594_x=_item30140;
(void)(([&]()->V{V _receiver30148=_v_22593_spots.get();V _method30149=this->_literals[149];V _method=j::get(_receiver30148,_method30149);j::Args _params30150=j::Args{([&]()->V{V _lhs30142=([&]()->V{V _lhs30144=(j::truth(([&]()->V{V _lhs30146=_v_22585_birth.get();V _rhs30147=this->_literals[33];return V(j::equal(_lhs30146,_rhs30147,true));})())?j::get(j::get(_v_22592_home,this->_literals[33]),_v_22594_x):j::get(j::get(_v_22592_home,this->_literals[36]),_v_22594_x));V _rhs30145=_v_22590_cols.get();return V(j::number(_lhs30144)*j::number(_rhs30145));})();V _rhs30143=_v_22594_x;return j::binary("+",_lhs30142,_rhs30143);})()};return j::call(_method,_params30150,_receiver30148);})());
}}
}

}
else {if(j::truth(([&]()->V{V _lhs30151=_v_22585_birth.get();V _rhs30152=this->_literals[425];return V(j::equal(_lhs30151,_rhs30152,true));})())){{V _v_22595_i;
_v_22595_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs30153=_v_22595_i;V _rhs30154=([&]()->V{V _lhs30155=_v_22590_cols.get();V _rhs30156=_v_22591_rows.get();return V(j::number(_lhs30155)*j::number(_rhs30156));})();return j::binary("<",_lhs30153,_rhs30154);})());(void)(j::increment(_v_22595_i,1,false))){(void)(([&]()->V{V _receiver30157=_v_22593_spots.get();V _method30158=this->_literals[149];V _method=j::get(_receiver30157,_method30158);j::Args _params30159=j::Args{_v_22595_i};return j::call(_method,_params30159,_receiver30157);})());
}}
}else {{V _v_22596_x;
_v_22596_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs30160=_v_22596_x;V _rhs30161=_v_22590_cols.get();return j::binary("<",_lhs30160,_rhs30161);})());(void)(j::increment(_v_22596_x,1,false))){(void)(([&]()->V{V _receiver30170=_v_22593_spots.get();V _method30171=this->_literals[149];V _method=j::get(_receiver30170,_method30171);j::Args _params30172=j::Args{([&]()->V{V _lhs30162=([&]()->V{V _lhs30164=(j::truth(([&]()->V{V _lhs30166=_v_22585_birth.get();V _rhs30167=this->_literals[33];return V(j::equal(_lhs30166,_rhs30167,true));})())?V(0.0):([&]()->V{V _lhs30168=_v_22591_rows.get();V _rhs30169=V(1.0);return V(j::number(_lhs30168)-j::number(_rhs30169));})());V _rhs30165=_v_22590_cols.get();return V(j::number(_lhs30164)*j::number(_rhs30165));})();V _rhs30163=_v_22596_x;return j::binary("+",_lhs30162,_rhs30163);})()};return j::call(_method,_params30172,_receiver30170);})());
}}
}
}

}

_v_22597_em.get()=([&]()->V{V _obj30173=j::object();j::put(_obj30173,this->_literals[428],V(0.0));j::put(_obj30173,this->_literals[429],V(0.0));j::put(_obj30173,this->_literals[392],_v_22584_life.get());j::put(_obj30173,this->_literals[430],V(0.0));j::put(_obj30173,this->_literals[43],V(0.0));j::put(_obj30173,this->_literals[44],V(0.0));j::put(_obj30173,this->_literals[46],_v_22590_cols.get());j::put(_obj30173,this->_literals[48],_v_22591_rows.get());j::put(_obj30173,this->_literals[431],j::function([=](const j::Args &_args_fn22598,const V &_receiver_fn22598,const V &_self_fn22598) mutable ->V{
V _v_22599_r;
_v_22599_r=_args_fn22598[0];
return ([&]()->V{V _callee30176=this->_v_20634_hash.get();return j::call(_callee30176,j::Args{_v_22587_seed.get(),j::get(_v_22597_em.get(),this->_literals[428]),([&]()->V{V _lhs30174=V(1000.0);V _rhs30175=_v_22599_r;return j::binary("+",_lhs30174,_rhs30175);})()});})();
return V{};
},1));return _obj30173;})();
return j::function([=](const j::Args &_args_fn22600,const V &_receiver_fn22600,const V &_self_fn22600) mutable ->V{
j::Cell _v_22601_t;
j::Cell _v_22602_pt;
_v_22601_t.get()=_args_fn22600[0];
_v_22602_pt.get()=_args_fn22600[1];
{
if(j::truth(([&]()->V{V _logical30177=j::unary("!",j::get(_v_22589_sp.get(),this->_literals[376]));return j::truth(_logical30177)?j::unary("!",j::get(_v_22593_spots.get(),this->_literals[19])):_logical30177;})())){return V{};
}
(void)(([&]()->V{V _callee30266=this->_v_22350_eachParticle.get();return j::call(_callee30266,j::Args{_v_22601_t.get(),_v_22583_rate.get(),_v_22586_period.get(),_v_22584_life.get(),_v_22587_seed.get(),j::function([=](const j::Args &_args_fn22603,const V &_receiver_fn22603,const V &_self_fn22603) mutable ->V{
V _v_22604_k;
V _v_22605_age;
_v_22604_k=_args_fn22603[0];
_v_22605_age=_args_fn22603[1];
{
V _v_22607_r;
V _v_22608_x;
V _v_22609_y;
V _v_22610_i;
(void)(([&]()->V{V _base30179=_v_22597_em.get();V _key30180=this->_literals[428];V _assign30178=_v_22604_k;return j::put(_base30179,_key30180,_assign30178);})());
(void)(([&]()->V{V _base30182=_v_22597_em.get();V _key30183=this->_literals[429];V _assign30181=_v_22605_age;return j::put(_base30182,_key30183,_assign30181);})());
(void)(([&]()->V{V _base30185=_v_22597_em.get();V _key30186=this->_literals[430];V _assign30184=([&]()->V{V _lhs30187=_v_22605_age;V _rhs30188=_v_22584_life.get();return V(j::number(_lhs30187)/j::number(_rhs30188));})();return j::put(_base30185,_key30186,_assign30184);})());
if(j::truth(j::get(_v_22589_sp.get(),this->_literals[376]))){(void)((([&]()->V{V _base30190=_v_22597_em.get();V _key30191=this->_literals[43];V _assign30189=j::get(j::get(_v_22589_sp.get(),this->_literals[376]),V(0.0));return j::put(_base30190,_key30191,_assign30189);})(),([&]()->V{V _base30193=_v_22597_em.get();V _key30194=this->_literals[44];V _assign30192=j::get(j::get(_v_22589_sp.get(),this->_literals[376]),V(1.0));return j::put(_base30193,_key30194,_assign30192);})()));
}else {
V _v_22606_i;
_v_22606_i=j::get(_v_22593_spots.get(),([&]()->V{V _number30198=([&]()->V{V _lhs30199=([&]()->V{V _callee30201=this->_v_20634_hash.get();return j::call(_callee30201,j::Args{_v_22587_seed.get(),_v_22604_k,V(1.0)});})();V _rhs30200=j::get(_v_22593_spots.get(),this->_literals[19]);return V(j::number(_lhs30199)*j::number(_rhs30200));})();return V(std::floor(j::number(_number30198)));})());
(void)(([&]()->V{V _base30203=_v_22597_em.get();V _key30204=this->_literals[43];V _assign30202=([&]()->V{V _lhs30205=([&]()->V{V _lhs30207=_v_22606_i;V _rhs30208=_v_22590_cols.get();return V(std::fmod(j::number(_lhs30207),j::number(_rhs30208)));})();V _rhs30206=V(0.5);return j::binary("+",_lhs30205,_rhs30206);})();return j::put(_base30203,_key30204,_assign30202);})());
(void)(([&]()->V{V _base30210=_v_22597_em.get();V _key30211=this->_literals[44];V _assign30209=([&]()->V{V _lhs30212=([&]()->V{V _number30216=([&]()->V{V _lhs30217=_v_22606_i;V _rhs30218=_v_22590_cols.get();return V(j::number(_lhs30217)/j::number(_rhs30218));})();return V(std::floor(j::number(_number30216)));})();V _rhs30213=V(0.5);return j::binary("+",_lhs30212,_rhs30213);})();return j::put(_base30210,_key30211,_assign30209);})());

}

_v_22607_r=([&]()->V{V _callee30219=_v_22577_draw.get();return j::call(_callee30219,j::Args{_v_22597_em.get(),_v_22601_t.get()});})();
if(j::truth(([&]()->V{V _logical30220=([&]()->V{V _lhs30221=_v_22607_r;V _rhs30222=V::null();return V(j::equal(_lhs30221,_rhs30222,true));})();return !j::truth(_logical30220)?([&]()->V{V _lhs30223=_v_22607_r;V _rhs30224=j::builtin("undefined");return V(j::equal(_lhs30223,_rhs30224,true));})():_logical30220;})())){return V{};
}
if(j::truth(([&]()->V{V _logical30225=([&]()->V{V _logical30226=([&]()->V{V _logical30227=j::unary("!",([&]()->V{V _receiver30228=j::builtin("Array");V _method30229=this->_literals[6];V _method=j::get(_receiver30228,_method30229);j::Args _params30230=j::Args{_v_22607_r};return j::call(_method,_params30230,_receiver30228);})());return !j::truth(_logical30227)?j::unary("!",([&]()->V{V _receiver30231=j::builtin("Number");V _method30232=this->_literals[14];V _method=j::get(_receiver30231,_method30232);j::Args _params30233=j::Args{j::get(_v_22607_r,V(0.0))};return j::call(_method,_params30233,_receiver30231);})()):_logical30227;})();return !j::truth(_logical30226)?j::unary("!",([&]()->V{V _receiver30234=j::builtin("Number");V _method30235=this->_literals[14];V _method=j::get(_receiver30234,_method30235);j::Args _params30236=j::Args{j::get(_v_22607_r,V(1.0))};return j::call(_method,_params30236,_receiver30234);})()):_logical30226;})();return !j::truth(_logical30225)?([&]()->V{V _lhs30237=j::unary("typeof",j::get(_v_22607_r,V(2.0)));V _rhs30238=this->_literals[4];return V(!j::equal(_lhs30237,_rhs30238,true));})():_logical30225;})())){(void)(([&]()->V{V _callee30241=this->_v_20632_fail.get();return j::call(_callee30241,j::Args{([&]()->V{std::u16string _text30239;_text30239+=u"";_text30239+=j::string(_v_22580_name.get());_text30239+=u" gave ";_text30239+=j::string(([&]()->V{V _callee30240=this->_v_20649_show.get();return j::call(_callee30240,j::Args{_v_22607_r});})());_text30239+=u": an emission's function returns [x, y, character], [x, y, character, colour index] or null";return V(std::move(_text30239));})()});})());
}
_v_22608_x=([&]()->V{V _number30242=j::get(_v_22607_r,V(0.0));return V(std::floor(j::number(_number30242)));})();
_v_22609_y=([&]()->V{V _number30243=j::get(_v_22607_r,V(1.0));return V(std::floor(j::number(_number30243)));})();
if(j::truth(([&]()->V{V _logical30244=([&]()->V{V _logical30245=([&]()->V{V _logical30246=([&]()->V{V _logical30247=([&]()->V{V _lhs30248=_v_22608_x;V _rhs30249=V(0.0);return j::binary("<",_lhs30248,_rhs30249);})();return !j::truth(_logical30247)?([&]()->V{V _lhs30250=_v_22608_x;V _rhs30251=_v_22590_cols.get();return j::binary(">=",_lhs30250,_rhs30251);})():_logical30247;})();return !j::truth(_logical30246)?([&]()->V{V _lhs30252=_v_22609_y;V _rhs30253=V(0.0);return j::binary("<",_lhs30252,_rhs30253);})():_logical30246;})();return !j::truth(_logical30245)?([&]()->V{V _lhs30254=_v_22609_y;V _rhs30255=_v_22591_rows.get();return j::binary(">=",_lhs30254,_rhs30255);})():_logical30245;})();return !j::truth(_logical30244)?j::unary("!",j::get(_v_22607_r,V(2.0))):_logical30244;})())){return V{};
}
_v_22610_i=([&]()->V{V _lhs30256=([&]()->V{V _lhs30258=_v_22609_y;V _rhs30259=_v_22590_cols.get();return V(j::number(_lhs30258)*j::number(_rhs30259));})();V _rhs30257=_v_22608_x;return j::binary("+",_lhs30256,_rhs30257);})();
if(j::truth(([&]()->V{V _logical30260=j::get(_v_22589_sp.get(),this->_literals[71]);return j::truth(_logical30260)?j::unary("!",j::get(j::get(j::get(_v_22589_sp.get(),this->_literals[71]),this->_literals[71]),_v_22610_i)):_logical30260;})())){return V{};
}
(void)(([&]()->V{V _receiver30263=j::get(_v_22602_pt.get(),this->_literals[191]);V _method30264=this->_literals[196];V _method=j::get(_receiver30263,_method30264);j::Args _params30265=j::Args{_v_22610_i,([&]()->V{V _callee30261=this->_v_22336_printable.get();return j::call(_callee30261,j::Args{_v_22580_name.get(),j::get(_v_22607_r,V(2.0))});})(),([&]()->V{V _callee30262=this->_v_22341_colorIn.get();return j::call(_callee30262,j::Args{_v_22580_name.get(),j::get(_v_22607_r,V(3.0)),_v_22581_n.get(),_v_22602_pt.get()});})()};return j::call(_method,_params30265,_receiver30263);})());

}

return V{};
},2)});})());

}

return V{};
},2);

}

return V{};
},1));return _obj30130;})();

}

return V{};
},2);
this->_v_22611_stopsIn.get()=j::function([=](const j::Args &_args_fn22612,const V &_receiver_fn22612,const V &_self_fn22612) mutable ->V{
V _v_22613_v;
_v_22613_v=_args_fn22612[0];
{
if(j::truth(([&]()->V{V _lhs30267=j::unary("typeof",_v_22613_v);V _rhs30268=this->_literals[4];return V(j::equal(_lhs30267,_rhs30268,true));})())){return (j::truth(([&]()->V{V _receiver30269=j::builtin("Object");V _method30270=this->_literals[15];V _method=j::get(_receiver30269,_method30270);j::Args _params30271=j::Args{this->_v_20716_palettes.get(),_v_22613_v};return j::call(_method,_params30271,_receiver30269);})())?j::get(j::get(j::get(this->_v_20716_palettes.get(),_v_22613_v),this->_literals[23]),this->_literals[19]):V(1.0));
}
if(j::truth(([&]()->V{V _receiver30272=j::builtin("Array");V _method30273=this->_literals[6];V _method=j::get(_receiver30272,_method30273);j::Args _params30274=j::Args{_v_22613_v};return j::call(_method,_params30274,_receiver30272);})())){return ([&]()->V{V _receiver30277=j::builtin("Math");V _method30278=this->_literals[51];V _method=j::get(_receiver30277,_method30278);j::Args _params30279=j::Args{V(1.0),j::get(_v_22613_v,this->_literals[19])};return j::call(_method,_params30279,_receiver30277);})();
}
if(j::truth(([&]()->V{V _logical30280=([&]()->V{V _callee30281=this->_v_20646_isObject.get();return j::call(_callee30281,j::Args{_v_22613_v});})();return j::truth(_logical30280)?([&]()->V{V _receiver30282=j::builtin("Array");V _method30283=this->_literals[6];V _method=j::get(_receiver30282,_method30283);j::Args _params30284=j::Args{j::get(_v_22613_v,this->_literals[23])};return j::call(_method,_params30284,_receiver30282);})():_logical30280;})())){return ([&]()->V{V _receiver30287=j::builtin("Math");V _method30288=this->_literals[51];V _method=j::get(_receiver30287,_method30288);j::Args _params30289=j::Args{V(1.0),j::get(j::get(_v_22613_v,this->_literals[23]),this->_literals[19])};return j::call(_method,_params30289,_receiver30287);})();
}
return V(1.0);

}

return V{};
},1);
this->_v_22614_pageHalf.get()=j::function([=](const j::Args &_args_fn22615,const V &_receiver_fn22615,const V &_self_fn22615) mutable ->V{
V _v_22616_src;
V _v_22617_options;
V _v_22618_meta;
_v_22616_src=_args_fn22615[0];
_v_22617_options=_args_fn22615[1];
_v_22618_meta=_args_fn22615[2];
{
V _v_22619_n;
V _v_22620_player;
V _v_22621_dark;
_v_22619_n=([&]()->V{V _lhs30290=([&]()->V{V _logical30292=([&]()->V{V _chain30293=_v_22618_meta;V _chain30294=j::get(_chain30293,this->_literals[432]);if(j::nullish(_chain30294))return V{};V _chain30295=j::get(_chain30294,this->_literals[19]);return _chain30295;})();return j::nullish(_logical30292)?V(0.0):_logical30292;})();V _rhs30291=V(2.0);return V(j::number(_lhs30290)/j::number(_rhs30291));})();
if(j::truth(([&]()->V{V _logical30296=j::unary("!",([&]()->V{V _receiver30297=j::builtin("Number");V _method30298=this->_literals[18];V _method=j::get(_receiver30297,_method30298);j::Args _params30299=j::Args{_v_22619_n};return j::call(_method,_params30299,_receiver30297);})());return !j::truth(_logical30296)?([&]()->V{V _lhs30300=_v_22619_n;V _rhs30301=V(1.0);return j::binary("<",_lhs30300,_rhs30301);})():_logical30296;})())){return V(0.0);
}
_v_22620_player=([&]()->V{V _callee30302=this->_v_20640_sample.get();return j::call(_callee30302,j::Args{_v_22616_src,_v_22617_options});})();
_v_22621_dark=V(false);
{for(const auto &_item30303:j::elements(([&]()->V{V _callee30308=j::builtin("Set");return j::construct(_callee30308,j::Args{([&]()->V{j::Args _array30304;_array30304.push_back(V(0.0));_array30304.push_back(([&]()->V{V _logical30305=j::get(_v_22618_meta,this->_literals[184]);return j::nullish(_logical30305)?V(0.0):_logical30305;})());for(const auto &_value:j::elements((j::truth(j::get(_v_22618_meta,this->_literals[433]))?([&]()->V{j::Args _array30306;_array30306.push_back(V(1.0));_array30306.push_back(V(2.5));return j::array(std::move(_array30306));})():([&]()->V{j::Args _array30307;return j::array(std::move(_array30307));})())))_array30304.push_back(_value);return j::array(std::move(_array30304));})()});})())){V _v_22622_t;
_v_22622_t=_item30303;
{for(const auto &_item30309:j::elements(([&]()->V{j::Args _array30310;_array30310.push_back(V(true));_array30310.push_back(V(false));return j::array(std::move(_array30310));})())){V _v_22623_paper;
_v_22623_paper=_item30309;
{
V _v_22624_chars;
V _v_22625_colors;
V _pattern30315=([&]()->V{V _receiver30312=_v_22620_player;V _method30313=this->_literals[39];V _method=j::get(_receiver30312,_method30313);j::Args _params30314=j::Args{_v_22622_t,([&]()->V{V _obj30311=j::object();j::put(_obj30311,this->_literals[242],_v_22623_paper);return _obj30311;})()};return j::call(_method,_params30314,_receiver30312);})();
_v_22624_chars=j::get(_pattern30315,this->_literals[160]);
_v_22625_colors=j::get(_pattern30315,this->_literals[98]);
{V _v_22626_i;
_v_22626_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs30316=_v_22626_i;V _rhs30317=j::get(_v_22624_chars,this->_literals[19]);return j::binary("<",_lhs30316,_rhs30317);})());(void)(j::increment(_v_22626_i,1,false))){
V _v_22627_c;
_v_22627_c=j::get(_v_22625_colors,_v_22626_i);
if(j::truth(([&]()->V{V _logical30318=([&]()->V{V _lhs30319=j::get(_v_22624_chars,_v_22626_i);V _rhs30320=this->_v_20623_EMPTY.get();return V(j::equal(_lhs30319,_rhs30320,true));})();return !j::truth(_logical30318)?([&]()->V{V _lhs30321=_v_22627_c;V _rhs30322=this->_v_20626_NONE.get();return V(j::equal(_lhs30321,_rhs30322,true));})():_logical30318;})())){continue;
}
if(j::truth((j::truth(_v_22623_paper)?([&]()->V{V _lhs30323=_v_22627_c;V _rhs30324=_v_22619_n;return j::binary(">=",_lhs30323,_rhs30324);})():([&]()->V{V _lhs30325=_v_22627_c;V _rhs30326=_v_22619_n;return j::binary("<",_lhs30325,_rhs30326);})()))){return V(0.0);
}
(void)((!j::truth(_v_22621_dark)?(_v_22621_dark=j::unary("!",_v_22623_paper)):_v_22621_dark));

}
}

}
}}
}}
return (j::truth(_v_22621_dark)?_v_22619_n:V(0.0));

}

return V{};
},3);
this->_v_22628_texture.get()=j::function([=](const j::Args &_args_fn22629,const V &_receiver_fn22629,const V &_self_fn22629) mutable ->V{
j::Cell _v_22630_src;
V _v_22631_o;
_v_22630_src.get()=_args_fn22629[0];
_v_22631_o=_args_fn22629[1];
{
V _v_22632_ok;
j::Cell _v_22633_p;
j::Cell _v_22634_speed;
j::Cell _v_22635_tile;
j::Cell _v_22636_opaque;
j::Cell _v_22637_meta;
V _v_22638_own;
j::Cell _v_22639_half;
V _v_22640_colors;
V _v_22641_period;
_v_22632_ok=([&]()->V{V _logical30328=([&]()->V{V _logical30329=([&]()->V{V _lhs30330=j::unary("typeof",_v_22630_src.get());V _rhs30331=this->_literals[4];return V(j::equal(_lhs30330,_rhs30331,true));})();return !j::truth(_logical30329)?([&]()->V{V _lhs30332=_v_22630_src.get();V _rhs30333=this->_v_20627_Surface.get();return j::binary("instanceof",_lhs30332,_rhs30333);})():_logical30329;})();return !j::truth(_logical30328)?([&]()->V{V _logical30334=([&]()->V{V _logical30335=([&]()->V{V _callee30336=this->_v_20646_isObject.get();return j::call(_callee30336,j::Args{_v_22630_src.get()});})();return j::truth(_logical30335)?([&]()->V{V _callee30337=this->_v_20646_isObject.get();return j::call(_callee30337,j::Args{j::get(_v_22630_src.get(),this->_literals[434])});})():_logical30335;})();return j::truth(_logical30334)?([&]()->V{V _lhs30338=j::unary("typeof",j::get(_v_22630_src.get(),this->_literals[435]));V _rhs30339=this->_literals[0];return V(j::equal(_lhs30338,_rhs30339,true));})():_logical30334;})():_logical30328;})();
if(j::truth(j::unary("!",_v_22632_ok))){(void)(([&]()->V{V _callee30342=this->_v_20632_fail.get();return j::call(_callee30342,j::Args{([&]()->V{std::u16string _text30340;_text30340+=u"texture takes a piece (such as one from ascii.rest/pieces), a block of text or a Surface, not ";_text30340+=j::string(([&]()->V{V _callee30341=this->_v_20649_show.get();return j::call(_callee30341,j::Args{_v_22630_src.get()});})());_text30340+=u"";return V(std::move(_text30340));})()});})());
}
_v_22633_p.get()=([&]()->V{V _callee30344=this->_v_20652_optionsOf.get();return j::call(_callee30344,j::Args{this->_literals[436],_v_22631_o,([&]()->V{j::Args _array30343;_array30343.push_back(this->_literals[437]);_array30343.push_back(this->_literals[364]);_array30343.push_back(this->_literals[329]);_array30343.push_back(this->_literals[256]);return j::array(std::move(_array30343));})()});})();
if(j::truth(([&]()->V{V _logical30345=([&]()->V{V _lhs30346=j::get(_v_22633_p.get(),this->_literals[437]);V _rhs30347=j::builtin("undefined");return V(!j::equal(_lhs30346,_rhs30347,true));})();return j::truth(_logical30345)?j::unary("!",([&]()->V{V _callee30348=this->_v_20646_isObject.get();return j::call(_callee30348,j::Args{j::get(_v_22633_p.get(),this->_literals[437])});})()):_logical30345;})())){(void)(([&]()->V{V _callee30351=this->_v_20632_fail.get();return j::call(_callee30351,j::Args{([&]()->V{std::u16string _text30349;_text30349+=u"texture.options takes the piece's options as an object, not ";_text30349+=j::string(([&]()->V{V _callee30350=this->_v_20649_show.get();return j::call(_callee30350,j::Args{j::get(_v_22633_p.get(),this->_literals[437])});})());_text30349+=u"";return V(std::move(_text30349));})()});})());
}
_v_22634_speed.get()=([&]()->V{V _callee30352=this->_v_20663_numberOf.get();return j::call(_callee30352,j::Args{this->_literals[438],j::get(_v_22633_p.get(),this->_literals[364]),V(1.0),V(0.01),V(100.0)});})();
_v_22635_tile.get()=([&]()->V{V _callee30353=this->_v_20696_boolOf.get();return j::call(_callee30353,j::Args{this->_literals[439],j::get(_v_22633_p.get(),this->_literals[329]),V(false)});})();
_v_22636_opaque.get()=([&]()->V{V _callee30354=this->_v_20696_boolOf.get();return j::call(_callee30354,j::Args{this->_literals[440],j::get(_v_22633_p.get(),this->_literals[256]),V(true)});})();
_v_22637_meta.get()=j::get(([&]()->V{V _callee30355=this->_v_20640_sample.get();return j::call(_callee30355,j::Args{_v_22630_src.get(),j::get(_v_22633_p.get(),this->_literals[437])});})(),this->_literals[434]);
_v_22638_own=j::get(_v_22637_meta.get(),this->_literals[432]);
_v_22639_half.get()=(j::truth(_v_22638_own)?([&]()->V{V _callee30356=this->_v_22614_pageHalf.get();return j::call(_callee30356,j::Args{_v_22630_src.get(),j::get(_v_22633_p.get(),this->_literals[437]),_v_22637_meta.get()});})():V(0.0));
_v_22640_colors=(j::truth(j::unary("!",_v_22638_own))?([&]()->V{V _obj30357=j::object();j::put(_obj30357,this->_literals[22],([&]()->V{j::Args _array30358;_array30358.push_back(j::get(this->_v_20624_INK.get(),this->_literals[22]));return j::array(std::move(_array30358));})());j::put(_obj30357,this->_literals[23],([&]()->V{j::Args _array30359;_array30359.push_back(j::get(this->_v_20624_INK.get(),this->_literals[23]));return j::array(std::move(_array30359));})());return _obj30357;})():(j::truth(_v_22639_half.get())?([&]()->V{V _obj30360=j::object();j::put(_obj30360,this->_literals[22],([&]()->V{V _receiver30361=_v_22638_own;V _method30362=this->_literals[441];V _method=j::get(_receiver30361,_method30362);j::Args _params30363=j::Args{V(0.0),_v_22639_half.get()};return j::call(_method,_params30363,_receiver30361);})());j::put(_obj30360,this->_literals[23],([&]()->V{V _receiver30364=_v_22638_own;V _method30365=this->_literals[441];V _method=j::get(_receiver30364,_method30365);j::Args _params30366=j::Args{_v_22639_half.get()};return j::call(_method,_params30366,_receiver30364);})());return _obj30360;})():([&]()->V{V _obj30367=j::object();j::put(_obj30367,this->_literals[22],_v_22638_own);j::put(_obj30367,this->_literals[23],_v_22638_own);return _obj30367;})()));
_v_22641_period=(j::truth(([&]()->V{V _lhs30368=j::get(_v_22637_meta.get(),this->_literals[433]);V _rhs30369=V(0.0);return V(j::equal(_lhs30368,_rhs30369,true));})())?j::builtin("undefined"):(j::truth(j::get(_v_22637_meta.get(),this->_literals[442]))?([&]()->V{V _lhs30370=j::get(_v_22637_meta.get(),this->_literals[442]);V _rhs30371=_v_22634_speed.get();return V(j::number(_lhs30370)/j::number(_rhs30371));})():j::builtin("Infinity")));
return ([&]()->V{V _callee30468=this->_v_21571_makeMaterial.get();return j::call(_callee30468,j::Args{([&]()->V{std::u16string _text30372;_text30372+=u"texture of ";_text30372+=j::string(j::get(_v_22637_meta.get(),this->_literals[1]));_text30372+=u"";return V(std::move(_text30372));})(),_v_22640_colors,_v_22641_period,j::function([=](const j::Args &_args_fn22642,const V &_receiver_fn22642,const V &_self_fn22642) mutable ->V{
j::Cell _v_22643_c;
_v_22643_c.get()=_args_fn22642[0];
{
j::Cell _v_22644_cols;
j::Cell _v_22645_player;
j::Cell _v_22646_ox;
j::Cell _v_22647_oy;
V _pattern30373=_v_22643_c.get();
_v_22644_cols.get()=j::get(_pattern30373,this->_literals[46]);
_v_22645_player.get()=([&]()->V{V _callee30374=this->_v_20640_sample.get();return j::call(_callee30374,j::Args{_v_22630_src.get(),j::get(_v_22633_p.get(),this->_literals[437])});})();
_v_22646_ox.get()=([&]()->V{V _number30381=([&]()->V{V _lhs30382=([&]()->V{V _lhs30384=([&]()->V{V _lhs30386=j::get(_v_22643_c.get(),this->_literals[30]);V _rhs30387=j::get(_v_22643_c.get(),this->_literals[32]);return j::binary("+",_lhs30386,_rhs30387);})();V _rhs30385=j::get(_v_22637_meta.get(),this->_literals[46]);return V(j::number(_lhs30384)-j::number(_rhs30385));})();V _rhs30383=V(2.0);return V(j::number(_lhs30382)/j::number(_rhs30383));})();return V(std::floor(j::number(_number30381)));})();
_v_22647_oy.get()=([&]()->V{V _number30394=([&]()->V{V _lhs30395=([&]()->V{V _lhs30397=([&]()->V{V _lhs30399=j::get(_v_22643_c.get(),this->_literals[35]);V _rhs30400=j::get(_v_22643_c.get(),this->_literals[37]);return j::binary("+",_lhs30399,_rhs30400);})();V _rhs30398=j::get(_v_22637_meta.get(),this->_literals[48]);return V(j::number(_lhs30397)-j::number(_rhs30398));})();V _rhs30396=V(2.0);return V(j::number(_lhs30395)/j::number(_rhs30396));})();return V(std::floor(j::number(_number30394)));})();
return j::function([=](const j::Args &_args_fn22648,const V &_receiver_fn22648,const V &_self_fn22648) mutable ->V{
V _v_22649_t;
V _v_22650_pt;
_v_22649_t=_args_fn22648[0];
_v_22650_pt=_args_fn22648[1];
{
V _v_22651_g;
_v_22651_g=([&]()->V{V _receiver30404=_v_22645_player.get();V _method30405=this->_literals[39];V _method=j::get(_receiver30404,_method30405);j::Args _params30406=j::Args{([&]()->V{V _lhs30401=_v_22649_t;V _rhs30402=_v_22634_speed.get();return V(j::number(_lhs30401)*j::number(_rhs30402));})(),([&]()->V{V _obj30403=j::object();j::put(_obj30403,this->_literals[242],j::get(_v_22650_pt,this->_literals[242]));j::put(_obj30403,this->_literals[443],j::get(_v_22650_pt,this->_literals[443]));return _obj30403;})()};return j::call(_method,_params30406,_receiver30404);})();
{for(const auto &_item30407:j::elements(j::get(_v_22643_c.get(),this->_literals[150]))){V _v_22652_i;
_v_22652_i=_item30407;
{
V _v_22653_x;
V _v_22654_y;
V _v_22655_gx;
V _v_22656_gy;
V _v_22657_k;
V _v_22658_ch;
V _v_22659_col;
_v_22653_x=([&]()->V{V _lhs30408=_v_22652_i;V _rhs30409=_v_22644_cols.get();return V(std::fmod(j::number(_lhs30408),j::number(_rhs30409)));})();
_v_22654_y=([&]()->V{V _lhs30410=([&]()->V{V _lhs30412=_v_22652_i;V _rhs30413=_v_22653_x;return V(j::number(_lhs30412)-j::number(_rhs30413));})();V _rhs30411=_v_22644_cols.get();return V(j::number(_lhs30410)/j::number(_rhs30411));})();
_v_22655_gx=([&]()->V{V _lhs30414=_v_22653_x;V _rhs30415=_v_22646_ox.get();return V(j::number(_lhs30414)-j::number(_rhs30415));})();
_v_22656_gy=([&]()->V{V _lhs30416=_v_22654_y;V _rhs30417=_v_22647_oy.get();return V(j::number(_lhs30416)-j::number(_rhs30417));})();
if(j::truth(_v_22635_tile.get())){(void)(((_v_22655_gx=([&]()->V{V _lhs30419=([&]()->V{V _lhs30421=([&]()->V{V _lhs30423=_v_22655_gx;V _rhs30424=j::get(_v_22651_g,this->_literals[46]);return V(std::fmod(j::number(_lhs30423),j::number(_rhs30424)));})();V _rhs30422=j::get(_v_22651_g,this->_literals[46]);return j::binary("+",_lhs30421,_rhs30422);})();V _rhs30420=j::get(_v_22651_g,this->_literals[46]);return V(std::fmod(j::number(_lhs30419),j::number(_rhs30420)));})()),(_v_22656_gy=([&]()->V{V _lhs30426=([&]()->V{V _lhs30428=([&]()->V{V _lhs30430=_v_22656_gy;V _rhs30431=j::get(_v_22651_g,this->_literals[48]);return V(std::fmod(j::number(_lhs30430),j::number(_rhs30431)));})();V _rhs30429=j::get(_v_22651_g,this->_literals[48]);return j::binary("+",_lhs30428,_rhs30429);})();V _rhs30427=j::get(_v_22651_g,this->_literals[48]);return V(std::fmod(j::number(_lhs30426),j::number(_rhs30427)));})())));
}else {if(j::truth(([&]()->V{V _logical30432=([&]()->V{V _logical30433=([&]()->V{V _logical30434=([&]()->V{V _lhs30435=_v_22655_gx;V _rhs30436=V(0.0);return j::binary("<",_lhs30435,_rhs30436);})();return !j::truth(_logical30434)?([&]()->V{V _lhs30437=_v_22655_gx;V _rhs30438=j::get(_v_22651_g,this->_literals[46]);return j::binary(">=",_lhs30437,_rhs30438);})():_logical30434;})();return !j::truth(_logical30433)?([&]()->V{V _lhs30439=_v_22656_gy;V _rhs30440=V(0.0);return j::binary("<",_lhs30439,_rhs30440);})():_logical30433;})();return !j::truth(_logical30432)?([&]()->V{V _lhs30441=_v_22656_gy;V _rhs30442=j::get(_v_22651_g,this->_literals[48]);return j::binary(">=",_lhs30441,_rhs30442);})():_logical30432;})())){
if(j::truth(_v_22636_opaque.get())){(void)(([&]()->V{V _receiver30443=j::get(_v_22650_pt,this->_literals[191]);V _method30444=this->_literals[196];V _method=j::get(_receiver30443,_method30444);j::Args _params30445=j::Args{_v_22652_i,this->_v_21580_SPACE.get(),this->_v_20626_NONE.get()};return j::call(_method,_params30445,_receiver30443);})());
}
continue;

}

}
_v_22657_k=([&]()->V{V _lhs30446=([&]()->V{V _lhs30448=_v_22656_gy;V _rhs30449=j::get(_v_22651_g,this->_literals[46]);return V(j::number(_lhs30448)*j::number(_rhs30449));})();V _rhs30447=_v_22655_gx;return j::binary("+",_lhs30446,_rhs30447);})();
_v_22658_ch=j::get(j::get(_v_22651_g,this->_literals[160]),_v_22657_k);
if(j::truth(([&]()->V{V _lhs30450=_v_22658_ch;V _rhs30451=this->_v_20623_EMPTY.get();return V(j::equal(_lhs30450,_rhs30451,true));})())){
if(j::truth(_v_22636_opaque.get())){(void)(([&]()->V{V _receiver30452=j::get(_v_22650_pt,this->_literals[191]);V _method30453=this->_literals[196];V _method=j::get(_receiver30452,_method30453);j::Args _params30454=j::Args{_v_22652_i,this->_v_21580_SPACE.get(),this->_v_20626_NONE.get()};return j::call(_method,_params30454,_receiver30452);})());
}
continue;

}

_v_22659_col=j::get(j::get(_v_22651_g,this->_literals[98]),_v_22657_k);
(void)(([&]()->V{V _receiver30465=j::get(_v_22650_pt,this->_literals[191]);V _method30466=this->_literals[196];V _method=j::get(_receiver30465,_method30466);j::Args _params30467=j::Args{_v_22652_i,_v_22658_ch,(j::truth(([&]()->V{V _lhs30455=_v_22659_col;V _rhs30456=this->_v_20626_NONE.get();return V(j::equal(_lhs30455,_rhs30456,true));})())?([&]()->V{V _receiver30457=_v_22650_pt;V _method30458=this->_literals[195];V _method=j::get(_receiver30457,_method30458);j::Args _params30459=j::Args{V(0.0)};return j::call(_method,_params30459,_receiver30457);})():([&]()->V{V _receiver30462=_v_22650_pt;V _method30463=this->_literals[195];V _method=j::get(_receiver30462,_method30463);j::Args _params30464=j::Args{(j::truth(_v_22639_half.get())?([&]()->V{V _lhs30460=_v_22659_col;V _rhs30461=_v_22639_half.get();return V(std::fmod(j::number(_lhs30460),j::number(_rhs30461)));})():_v_22659_col)};return j::call(_method,_params30464,_receiver30462);})())};return j::call(_method,_params30467,_receiver30465);})());

}
}}

}

return V{};
},2);

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_22664_moved.get()=j::function([=](const j::Args &_args_fn22665,const V &_receiver_fn22665,const V &_self_fn22665) mutable ->V{
j::Cell _v_22666_q;
j::Cell _v_22667_ox;
j::Cell _v_22668_oy;
j::Cell _v_22669_about;
_v_22666_q.get()=_args_fn22665[0];
_v_22667_ox.get()=_args_fn22665[1];
_v_22668_oy.get()=_args_fn22665[2];
_v_22669_about.get()=_args_fn22665[3];
{
j::Cell _v_22670_mx;
j::Cell _v_22675_char;
_v_22670_mx.get()=(j::truth(([&]()->V{V _lhs30469=_v_22669_about.get();V _rhs30470=j::builtin("undefined");return V(j::equal(_lhs30469,_rhs30470,true));})())?j::function([=](const j::Args &_args_fn22671,const V &_receiver_fn22671,const V &_self_fn22671) mutable ->V{
V _v_22672_x;
_v_22672_x=_args_fn22671[0];
return _v_22672_x;
return V{};
},1):j::function([=](const j::Args &_args_fn22673,const V &_receiver_fn22673,const V &_self_fn22673) mutable ->V{
V _v_22674_x;
_v_22674_x=_args_fn22673[0];
return ([&]()->V{V _lhs30471=([&]()->V{V _lhs30473=V(2.0);V _rhs30474=_v_22669_about.get();return V(j::number(_lhs30473)*j::number(_rhs30474));})();V _rhs30472=_v_22674_x;return V(j::number(_lhs30471)-j::number(_rhs30472));})();
return V{};
},1));
_v_22675_char.get()=j::get(_v_22666_q.get(),this->_literals[116]);
return ([&]()->V{V _obj30475=j::object();j::put(_obj30475,this->_literals[20],j::function([=](const j::Args &_args_fn22676,const V &_receiver_fn22676,const V &_self_fn22676) mutable ->V{
V _v_22677_x;
V _v_22678_y;
_v_22677_x=_args_fn22676[0];
_v_22678_y=_args_fn22676[1];
return ([&]()->V{V _receiver30481=_v_22666_q.get();V _method30482=this->_literals[20];V _method=j::get(_receiver30481,_method30482);j::Args _params30483=j::Args{([&]()->V{V _callee30478=_v_22670_mx.get();return j::call(_callee30478,j::Args{([&]()->V{V _lhs30476=_v_22677_x;V _rhs30477=_v_22667_ox.get();return j::binary("+",_lhs30476,_rhs30477);})()});})(),([&]()->V{V _lhs30479=_v_22678_y;V _rhs30480=_v_22668_oy.get();return j::binary("+",_lhs30479,_rhs30480);})()};return j::call(_method,_params30483,_receiver30481);})();
return V{};
},2));j::put(_obj30475,this->_literals[30],([&]()->V{V _lhs30484=(j::truth(([&]()->V{V _lhs30486=_v_22669_about.get();V _rhs30487=j::builtin("undefined");return V(j::equal(_lhs30486,_rhs30487,true));})())?j::get(_v_22666_q.get(),this->_literals[30]):([&]()->V{V _lhs30488=([&]()->V{V _lhs30490=V(2.0);V _rhs30491=_v_22669_about.get();return V(j::number(_lhs30490)*j::number(_rhs30491));})();V _rhs30489=j::get(_v_22666_q.get(),this->_literals[32]);return V(j::number(_lhs30488)-j::number(_rhs30489));})());V _rhs30485=_v_22667_ox.get();return V(j::number(_lhs30484)-j::number(_rhs30485));})());j::put(_obj30475,this->_literals[32],([&]()->V{V _lhs30492=(j::truth(([&]()->V{V _lhs30494=_v_22669_about.get();V _rhs30495=j::builtin("undefined");return V(j::equal(_lhs30494,_rhs30495,true));})())?j::get(_v_22666_q.get(),this->_literals[32]):([&]()->V{V _lhs30496=([&]()->V{V _lhs30498=V(2.0);V _rhs30499=_v_22669_about.get();return V(j::number(_lhs30498)*j::number(_rhs30499));})();V _rhs30497=j::get(_v_22666_q.get(),this->_literals[30]);return V(j::number(_lhs30496)-j::number(_rhs30497));})());V _rhs30493=_v_22667_ox.get();return V(j::number(_lhs30492)-j::number(_rhs30493));})());j::put(_obj30475,this->_literals[35],([&]()->V{V _lhs30500=j::get(_v_22666_q.get(),this->_literals[35]);V _rhs30501=_v_22668_oy.get();return V(j::number(_lhs30500)-j::number(_rhs30501));})());j::put(_obj30475,this->_literals[37],([&]()->V{V _lhs30502=j::get(_v_22666_q.get(),this->_literals[37]);V _rhs30503=_v_22668_oy.get();return V(j::number(_lhs30502)-j::number(_rhs30503));})());V _spread30504=(j::truth(([&]()->V{V _lhs30505=j::get(_v_22666_q.get(),this->_literals[78]);V _rhs30506=j::builtin("undefined");return V(!j::equal(_lhs30505,_rhs30506,true));})())?([&]()->V{V _obj30507=j::object();j::put(_obj30507,this->_literals[78],([&]()->V{V _lhs30508=j::get(_v_22666_q.get(),this->_literals[78]);V _rhs30509=_v_22668_oy.get();return V(j::number(_lhs30508)-j::number(_rhs30509));})());return _obj30507;})():([&]()->V{V _obj30510=j::object();return _obj30510;})());for(const auto &_key:j::keys(_spread30504))j::put(_obj30475,_key,j::get(_spread30504,_key));V _spread30511=(j::truth(j::get(_v_22666_q.get(),this->_literals[69]))?([&]()->V{V _obj30512=j::object();j::put(_obj30512,this->_literals[69],([&]()->V{V _callee30513=_self_fn22665;return j::call(_callee30513,j::Args{j::get(_v_22666_q.get(),this->_literals[69]),_v_22667_ox.get(),_v_22668_oy.get(),_v_22669_about.get()});})());return _obj30512;})():([&]()->V{V _obj30514=j::object();return _obj30514;})());for(const auto &_key:j::keys(_spread30511))j::put(_obj30475,_key,j::get(_spread30511,_key));V _spread30515=(j::truth(j::get(_v_22666_q.get(),this->_literals[59]))?([&]()->V{V _obj30516=j::object();j::put(_obj30516,this->_literals[59],([&]()->V{V _callee30517=_self_fn22665;return j::call(_callee30517,j::Args{j::get(_v_22666_q.get(),this->_literals[59]),_v_22667_ox.get(),_v_22668_oy.get(),_v_22669_about.get()});})());return _obj30516;})():([&]()->V{V _obj30518=j::object();return _obj30518;})());for(const auto &_key:j::keys(_spread30515))j::put(_obj30475,_key,j::get(_spread30515,_key));V _spread30519=(j::truth(([&]()->V{V _lhs30520=j::get(_v_22666_q.get(),this->_literals[58]);V _rhs30521=j::builtin("undefined");return V(!j::equal(_lhs30520,_rhs30521,true));})())?([&]()->V{V _obj30522=j::object();j::put(_obj30522,this->_literals[58],j::get(_v_22666_q.get(),this->_literals[58]));return _obj30522;})():([&]()->V{V _obj30523=j::object();return _obj30523;})());for(const auto &_key:j::keys(_spread30519))j::put(_obj30475,_key,j::get(_spread30519,_key));V _spread30524=(j::truth(_v_22675_char.get())?([&]()->V{V _obj30525=j::object();j::put(_obj30525,this->_literals[116],j::function([=](const j::Args &_args_fn22679,const V &_receiver_fn22679,const V &_self_fn22679) mutable ->V{
V _v_22680_x;
V _v_22681_y;
_v_22680_x=_args_fn22679[0];
_v_22681_y=_args_fn22679[1];
return ([&]()->V{V _callee30536=_v_22675_char.get();return j::call(_callee30536,j::Args{([&]()->V{V _callee30533=_v_22670_mx.get();return j::call(_callee30533,j::Args{([&]()->V{V _lhs30526=([&]()->V{V _number30530=([&]()->V{V _lhs30531=_v_22680_x;V _rhs30532=_v_22667_ox.get();return j::binary("+",_lhs30531,_rhs30532);})();return V(std::floor(j::number(_number30530)));})();V _rhs30527=V(0.5);return j::binary("+",_lhs30526,_rhs30527);})()});})(),([&]()->V{V _lhs30534=_v_22681_y;V _rhs30535=_v_22668_oy.get();return j::binary("+",_lhs30534,_rhs30535);})()});})();
return V{};
},2));return _obj30525;})():([&]()->V{V _obj30537=j::object();return _obj30537;})());for(const auto &_key:j::keys(_spread30524))j::put(_obj30475,_key,j::get(_spread30524,_key));return _obj30475;})();

}

return V{};
},4);
this->_v_22682_frameWindow.get()=j::function([=](const j::Args &_args_fn22683,const V &_receiver_fn22683,const V &_self_fn22683) mutable ->V{
V _v_22684_placed;
V _v_22685_parts;
j::Cell _v_22686_about;
j::Cell _v_22687_m;
j::Cell _v_22688_cols;
j::Cell _v_22689_rows;
V _v_22690_all;
_v_22684_placed=_args_fn22683[0];
_v_22685_parts=_args_fn22683[1];
_v_22686_about.get()=_args_fn22683[2];
_v_22687_m.get()=_args_fn22683[3];
_v_22688_cols.get()=_args_fn22683[4];
_v_22689_rows.get()=_args_fn22683[5];
_v_22690_all=_args_fn22683[6];
{
V _v_22691_whole;
j::Cell _v_22692_x0;
j::Cell _v_22693_y0;
j::Cell _v_22694_w;
j::Cell _v_22695_h;
j::Cell _v_22696_grid;
j::Cell _v_22697_draw;
j::Cell _v_22700_under;
j::Cell _v_22701_copied;
j::Cell _v_22702_outer;
j::Cell _v_22703_paint;
_v_22691_whole=([&]()->V{V _callee30538=this->_v_22664_moved.get();return j::call(_callee30538,j::Args{_v_22684_placed,V(0.0),V(0.0),_v_22686_about.get()});})();
_v_22692_x0.get()=([&]()->V{V _receiver30544=j::builtin("Math");V _method30545=this->_literals[51];V _method=j::get(_receiver30544,_method30545);j::Args _params30546=j::Args{j::unary("-",_v_22688_cols.get()),([&]()->V{V _lhs30539=([&]()->V{V _number30541=j::get(_v_22691_whole,this->_literals[30]);return V(std::floor(j::number(_number30541)));})();V _rhs30540=V(1.0);return V(j::number(_lhs30539)-j::number(_rhs30540));})()};return j::call(_method,_params30546,_receiver30544);})();
_v_22693_y0.get()=([&]()->V{V _receiver30552=j::builtin("Math");V _method30553=this->_literals[51];V _method=j::get(_receiver30552,_method30553);j::Args _params30554=j::Args{j::unary("-",_v_22689_rows.get()),([&]()->V{V _lhs30547=([&]()->V{V _number30549=j::get(_v_22691_whole,this->_literals[35]);return V(std::floor(j::number(_number30549)));})();V _rhs30548=V(1.0);return V(j::number(_lhs30547)-j::number(_rhs30548));})()};return j::call(_method,_params30554,_receiver30552);})();
_v_22694_w.get()=([&]()->V{V _receiver30569=j::builtin("Math");V _method30570=this->_literals[51];V _method=j::get(_receiver30569,_method30570);j::Args _params30571=j::Args{V(1.0),([&]()->V{V _lhs30555=([&]()->V{V _receiver30564=j::builtin("Math");V _method30565=this->_literals[52];V _method=j::get(_receiver30564,_method30565);j::Args _params30566=j::Args{([&]()->V{V _lhs30557=V(2.0);V _rhs30558=_v_22688_cols.get();return V(j::number(_lhs30557)*j::number(_rhs30558));})(),([&]()->V{V _lhs30559=([&]()->V{V _number30561=j::get(_v_22691_whole,this->_literals[32]);return V(std::ceil(j::number(_number30561)));})();V _rhs30560=V(1.0);return j::binary("+",_lhs30559,_rhs30560);})()};return j::call(_method,_params30566,_receiver30564);})();V _rhs30556=_v_22692_x0.get();return V(j::number(_lhs30555)-j::number(_rhs30556));})()};return j::call(_method,_params30571,_receiver30569);})();
_v_22695_h.get()=([&]()->V{V _receiver30586=j::builtin("Math");V _method30587=this->_literals[51];V _method=j::get(_receiver30586,_method30587);j::Args _params30588=j::Args{V(1.0),([&]()->V{V _lhs30572=([&]()->V{V _receiver30581=j::builtin("Math");V _method30582=this->_literals[52];V _method=j::get(_receiver30581,_method30582);j::Args _params30583=j::Args{([&]()->V{V _lhs30574=V(2.0);V _rhs30575=_v_22689_rows.get();return V(j::number(_lhs30574)*j::number(_rhs30575));})(),([&]()->V{V _lhs30576=([&]()->V{V _number30578=j::get(_v_22691_whole,this->_literals[37]);return V(std::ceil(j::number(_number30578)));})();V _rhs30577=V(1.0);return j::binary("+",_lhs30576,_rhs30577);})()};return j::call(_method,_params30583,_receiver30581);})();V _rhs30573=_v_22693_y0.get();return V(j::number(_lhs30572)-j::number(_rhs30573));})()};return j::call(_method,_params30588,_receiver30586);})();
_v_22696_grid.get()=([&]()->V{V _callee30589=this->_v_20627_Surface.get();return j::construct(_callee30589,j::Args{_v_22694_w.get(),_v_22695_h.get()});})();
_v_22697_draw.get()=([&]()->V{V _callee30598=_v_22690_all;return j::call(_callee30598,j::Args{([&]()->V{V _receiver30595=_v_22685_parts;V _method30596=this->_literals[8];V _method=j::get(_receiver30595,_method30596);j::Args _params30597=j::Args{j::function([=](const j::Args &_args_fn22698,const V &_receiver_fn22698,const V &_self_fn22698) mutable ->V{
V _v_22699_q;
_v_22699_q=_args_fn22698[0];
return ([&]()->V{V _receiver30592=_v_22687_m.get();V _method30593=this->_literals[176];V _method=j::get(_receiver30592,_method30593);j::Args _params30594=j::Args{([&]()->V{V _callee30591=this->_v_21440_cellsOf.get();return j::call(_callee30591,j::Args{([&]()->V{V _callee30590=this->_v_22664_moved.get();return j::call(_callee30590,j::Args{_v_22699_q,_v_22692_x0.get(),_v_22693_y0.get(),_v_22686_about.get()});})(),_v_22694_w.get(),_v_22695_h.get()});})()};return j::call(_method,_params30594,_receiver30592);})();
return V{};
},1)};return j::call(_method,_params30597,_receiver30595);})()});})();
_v_22700_under.get()=([&]()->V{V _obj30599=j::object();j::put(_obj30599,this->_literals[160],([&]()->V{V _callee30602=j::builtin("Uint16Array");return j::construct(_callee30602,j::Args{([&]()->V{V _lhs30600=_v_22694_w.get();V _rhs30601=_v_22695_h.get();return V(j::number(_lhs30600)*j::number(_rhs30601));})()});})());j::put(_obj30599,this->_literals[98],([&]()->V{V _callee30605=j::builtin("Uint8Array");return j::construct(_callee30605,j::Args{([&]()->V{V _lhs30603=_v_22694_w.get();V _rhs30604=_v_22695_h.get();return V(j::number(_lhs30603)*j::number(_rhs30604));})()});})());return _obj30599;})();
_v_22701_copied.get()=V(false);
_v_22702_outer.get()=V::null();
_v_22703_paint.get()=([&]()->V{V _obj30606=j::object();j::put(_obj30606,this->_literals[191],_v_22696_grid.get());V _accessor30607=this->_literals[242];j::accessor(_obj30606,_accessor30607,j::function([=](const j::Args &_args_fn22704,const V &_receiver_fn22704,const V &_self_fn22704) mutable ->V{
{
return j::get(_v_22702_outer.get(),this->_literals[242]);

}

return V{};
},0),true);V _accessor30608=this->_literals[443];j::accessor(_obj30606,_accessor30608,j::function([=](const j::Args &_args_fn22705,const V &_receiver_fn22705,const V &_self_fn22705) mutable ->V{
{
return j::get(_v_22702_outer.get(),this->_literals[443]);

}

return V{};
},0),true);j::put(_obj30606,this->_literals[195],j::function([=](const j::Args &_args_fn22706,const V &_receiver_fn22706,const V &_self_fn22706) mutable ->V{
V _v_22707_i;
_v_22707_i=_args_fn22706[0];
return ([&]()->V{V _receiver30609=_v_22702_outer.get();V _method30610=this->_literals[195];V _method=j::get(_receiver30609,_method30610);j::Args _params30611=j::Args{_v_22707_i};return j::call(_method,_params30611,_receiver30609);})();
return V{};
},1));V _accessor30612=this->_literals[192];j::accessor(_obj30606,_accessor30612,j::function([=](const j::Args &_args_fn22708,const V &_receiver_fn22708,const V &_self_fn22708) mutable ->V{
{
if(j::truth(j::unary("!",_v_22701_copied.get()))){(void)((([&]()->V{V _receiver30613=j::get(_v_22700_under.get(),this->_literals[160]);V _method30614=this->_literals[162];V _method=j::get(_receiver30613,_method30614);j::Args _params30615=j::Args{j::get(_v_22696_grid.get(),this->_literals[160])};return j::call(_method,_params30615,_receiver30613);})(),([&]()->V{V _receiver30616=j::get(_v_22700_under.get(),this->_literals[98]);V _method30617=this->_literals[162];V _method=j::get(_receiver30616,_method30617);j::Args _params30618=j::Args{j::get(_v_22696_grid.get(),this->_literals[98])};return j::call(_method,_params30618,_receiver30616);})(),(_v_22701_copied.get()=V(true))));
}
return _v_22700_under.get();

}

return V{};
},0),true);return _obj30606;})();
return ([&]()->V{V _obj30620=j::object();j::put(_obj30620,this->_literals[444],j::function([=](const j::Args &_args_fn22709,const V &_receiver_fn22709,const V &_self_fn22709) mutable ->V{
V _v_22710_t;
V _v_22711_pt;
V _v_22712_dx;
V _v_22713_dy;
_v_22710_t=_args_fn22709[0];
_v_22711_pt=_args_fn22709[1];
_v_22712_dx=_args_fn22709[2];
_v_22713_dy=_args_fn22709[3];
{
V _v_22714_s;
V _v_22715_ox;
V _v_22716_oy;
V _v_22717_c0;
V _v_22718_c1;
V _v_22719_r0;
V _v_22720_r1;
_v_22714_s=j::get(_v_22711_pt,this->_literals[191]);
_v_22715_ox=([&]()->V{V _lhs30621=_v_22692_x0.get();V _rhs30622=_v_22712_dx;return j::binary("+",_lhs30621,_rhs30622);})();
_v_22716_oy=([&]()->V{V _lhs30623=_v_22693_y0.get();V _rhs30624=_v_22713_dy;return j::binary("+",_lhs30623,_rhs30624);})();
_v_22717_c0=([&]()->V{V _receiver30627=j::builtin("Math");V _method30628=this->_literals[51];V _method=j::get(_receiver30627,_method30628);j::Args _params30629=j::Args{V(0.0),j::unary("-",_v_22715_ox)};return j::call(_method,_params30629,_receiver30627);})();
_v_22718_c1=([&]()->V{V _receiver30634=j::builtin("Math");V _method30635=this->_literals[52];V _method=j::get(_receiver30634,_method30635);j::Args _params30636=j::Args{_v_22694_w.get(),([&]()->V{V _lhs30630=_v_22688_cols.get();V _rhs30631=_v_22715_ox;return V(j::number(_lhs30630)-j::number(_rhs30631));})()};return j::call(_method,_params30636,_receiver30634);})();
_v_22719_r0=([&]()->V{V _receiver30639=j::builtin("Math");V _method30640=this->_literals[51];V _method=j::get(_receiver30639,_method30640);j::Args _params30641=j::Args{V(0.0),j::unary("-",_v_22716_oy)};return j::call(_method,_params30641,_receiver30639);})();
_v_22720_r1=([&]()->V{V _receiver30646=j::builtin("Math");V _method30647=this->_literals[52];V _method=j::get(_receiver30646,_method30647);j::Args _params30648=j::Args{_v_22695_h.get(),([&]()->V{V _lhs30642=_v_22689_rows.get();V _rhs30643=_v_22716_oy;return V(j::number(_lhs30642)-j::number(_rhs30643));})()};return j::call(_method,_params30648,_receiver30646);})();
if(j::truth(([&]()->V{V _logical30649=([&]()->V{V _lhs30650=_v_22717_c0;V _rhs30651=_v_22718_c1;return j::binary(">=",_lhs30650,_rhs30651);})();return !j::truth(_logical30649)?([&]()->V{V _lhs30652=_v_22719_r0;V _rhs30653=_v_22720_r1;return j::binary(">=",_lhs30652,_rhs30653);})():_logical30649;})())){return V{};
}
(void)(([&]()->V{V _receiver30654=_v_22696_grid.get();V _method30655=this->_literals[445];V _method=j::get(_receiver30654,_method30655);j::Args _params30656=j::Args{};return j::call(_method,_params30656,_receiver30654);})());
{V _v_22721_r;
_v_22721_r=_v_22719_r0;
for(;j::truth(([&]()->V{V _lhs30657=_v_22721_r;V _rhs30658=_v_22720_r1;return j::binary("<",_lhs30657,_rhs30658);})());(void)(j::increment(_v_22721_r,1,false))){
V _v_22722_j;
_v_22722_j=([&]()->V{V _lhs30659=([&]()->V{V _lhs30661=([&]()->V{V _lhs30663=_v_22716_oy;V _rhs30664=_v_22721_r;return j::binary("+",_lhs30663,_rhs30664);})();V _rhs30662=_v_22688_cols.get();return V(j::number(_lhs30661)*j::number(_rhs30662));})();V _rhs30660=_v_22715_ox;return j::binary("+",_lhs30659,_rhs30660);})();
(void)(([&]()->V{V _receiver30676=j::get(_v_22696_grid.get(),this->_literals[160]);V _method30677=this->_literals[162];V _method=j::get(_receiver30676,_method30677);j::Args _params30678=j::Args{([&]()->V{V _receiver30669=j::get(_v_22714_s,this->_literals[160]);V _method30670=this->_literals[446];V _method=j::get(_receiver30669,_method30670);j::Args _params30671=j::Args{([&]()->V{V _lhs30665=_v_22722_j;V _rhs30666=_v_22717_c0;return j::binary("+",_lhs30665,_rhs30666);})(),([&]()->V{V _lhs30667=_v_22722_j;V _rhs30668=_v_22718_c1;return j::binary("+",_lhs30667,_rhs30668);})()};return j::call(_method,_params30671,_receiver30669);})(),([&]()->V{V _lhs30672=([&]()->V{V _lhs30674=_v_22721_r;V _rhs30675=_v_22694_w.get();return V(j::number(_lhs30674)*j::number(_rhs30675));})();V _rhs30673=_v_22717_c0;return j::binary("+",_lhs30672,_rhs30673);})()};return j::call(_method,_params30678,_receiver30676);})());
(void)(([&]()->V{V _receiver30690=j::get(_v_22696_grid.get(),this->_literals[98]);V _method30691=this->_literals[162];V _method=j::get(_receiver30690,_method30691);j::Args _params30692=j::Args{([&]()->V{V _receiver30683=j::get(_v_22714_s,this->_literals[98]);V _method30684=this->_literals[446];V _method=j::get(_receiver30683,_method30684);j::Args _params30685=j::Args{([&]()->V{V _lhs30679=_v_22722_j;V _rhs30680=_v_22717_c0;return j::binary("+",_lhs30679,_rhs30680);})(),([&]()->V{V _lhs30681=_v_22722_j;V _rhs30682=_v_22718_c1;return j::binary("+",_lhs30681,_rhs30682);})()};return j::call(_method,_params30685,_receiver30683);})(),([&]()->V{V _lhs30686=([&]()->V{V _lhs30688=_v_22721_r;V _rhs30689=_v_22694_w.get();return V(j::number(_lhs30688)*j::number(_rhs30689));})();V _rhs30687=_v_22717_c0;return j::binary("+",_lhs30686,_rhs30687);})()};return j::call(_method,_params30692,_receiver30690);})());

}
}
(void)((_v_22702_outer.get()=_v_22711_pt));
(void)((_v_22701_copied.get()=V(false)));
(void)(([&]()->V{V _callee30695=_v_22697_draw.get();return j::call(_callee30695,j::Args{_v_22710_t,_v_22703_paint.get()});})());
{V _v_22723_r;
_v_22723_r=_v_22719_r0;
for(;j::truth(([&]()->V{V _lhs30696=_v_22723_r;V _rhs30697=_v_22720_r1;return j::binary("<",_lhs30696,_rhs30697);})());(void)(j::increment(_v_22723_r,1,false))){
V _v_22724_j;
_v_22724_j=([&]()->V{V _lhs30698=([&]()->V{V _lhs30700=([&]()->V{V _lhs30702=_v_22716_oy;V _rhs30703=_v_22723_r;return j::binary("+",_lhs30702,_rhs30703);})();V _rhs30701=_v_22688_cols.get();return V(j::number(_lhs30700)*j::number(_rhs30701));})();V _rhs30699=_v_22715_ox;return j::binary("+",_lhs30698,_rhs30699);})();
(void)(([&]()->V{V _receiver30717=j::get(_v_22714_s,this->_literals[160]);V _method30718=this->_literals[162];V _method=j::get(_receiver30717,_method30718);j::Args _params30719=j::Args{([&]()->V{V _receiver30712=j::get(_v_22696_grid.get(),this->_literals[160]);V _method30713=this->_literals[446];V _method=j::get(_receiver30712,_method30713);j::Args _params30714=j::Args{([&]()->V{V _lhs30704=([&]()->V{V _lhs30706=_v_22723_r;V _rhs30707=_v_22694_w.get();return V(j::number(_lhs30706)*j::number(_rhs30707));})();V _rhs30705=_v_22717_c0;return j::binary("+",_lhs30704,_rhs30705);})(),([&]()->V{V _lhs30708=([&]()->V{V _lhs30710=_v_22723_r;V _rhs30711=_v_22694_w.get();return V(j::number(_lhs30710)*j::number(_rhs30711));})();V _rhs30709=_v_22718_c1;return j::binary("+",_lhs30708,_rhs30709);})()};return j::call(_method,_params30714,_receiver30712);})(),([&]()->V{V _lhs30715=_v_22724_j;V _rhs30716=_v_22717_c0;return j::binary("+",_lhs30715,_rhs30716);})()};return j::call(_method,_params30719,_receiver30717);})());
(void)(([&]()->V{V _receiver30733=j::get(_v_22714_s,this->_literals[98]);V _method30734=this->_literals[162];V _method=j::get(_receiver30733,_method30734);j::Args _params30735=j::Args{([&]()->V{V _receiver30728=j::get(_v_22696_grid.get(),this->_literals[98]);V _method30729=this->_literals[446];V _method=j::get(_receiver30728,_method30729);j::Args _params30730=j::Args{([&]()->V{V _lhs30720=([&]()->V{V _lhs30722=_v_22723_r;V _rhs30723=_v_22694_w.get();return V(j::number(_lhs30722)*j::number(_rhs30723));})();V _rhs30721=_v_22717_c0;return j::binary("+",_lhs30720,_rhs30721);})(),([&]()->V{V _lhs30724=([&]()->V{V _lhs30726=_v_22723_r;V _rhs30727=_v_22694_w.get();return V(j::number(_lhs30726)*j::number(_rhs30727));})();V _rhs30725=_v_22718_c1;return j::binary("+",_lhs30724,_rhs30725);})()};return j::call(_method,_params30730,_receiver30728);})(),([&]()->V{V _lhs30731=_v_22724_j;V _rhs30732=_v_22717_c0;return j::binary("+",_lhs30731,_rhs30732);})()};return j::call(_method,_params30735,_receiver30733);})());

}
}

}

return V{};
},4));return _obj30620;})();

}

return V{};
},7);
this->_v_22725_shape.get()=j::function([=](const j::Args &_args_fn22726,const V &_receiver_fn22726,const V &_self_fn22726) mutable ->V{
j::Cell _v_22727_where;
V _v_22728_what;
V _v_22729_o;
_v_22727_where.get()=_args_fn22726[0];
_v_22728_what=_args_fn22726[1];
_v_22729_o=_args_fn22726[2];
{
j::Cell _v_22730_m;
V _v_22731_p;
j::Cell _v_22732_own;
j::Cell _v_22733_move;
j::Cell _v_22734_amount;
j::Cell _v_22735_period;
(void)(([&]()->V{V _callee30736=this->_v_20758_areaOf.get();return j::call(_callee30736,j::Args{this->_literals[447],_v_22727_where.get()});})());
if(j::truth(([&]()->V{V _logical30737=([&]()->V{V _callee30738=this->_v_20728_isArea.get();return j::call(_callee30738,j::Args{_v_22728_what});})();return j::truth(_logical30737)?j::unary("!",([&]()->V{V _callee30739=this->_v_21568_isMaterial.get();return j::call(_callee30739,j::Args{_v_22728_what});})()):_logical30737;})())){(void)(([&]()->V{V _callee30740=this->_v_20632_fail.get();return j::call(_callee30740,j::Args{this->_literals[448]});})());
}
if(j::truth(([&]()->V{V _logical30741=([&]()->V{V _callee30742=this->_v_22347_isEmission.get();return j::call(_callee30742,j::Args{_v_22728_what});})();return j::truth(_logical30741)?j::unary("!",([&]()->V{V _callee30743=this->_v_21568_isMaterial.get();return j::call(_callee30743,j::Args{_v_22728_what});})()):_logical30741;})())){(void)(([&]()->V{V _callee30745=this->_v_20632_fail.get();return j::call(_callee30745,j::Args{([&]()->V{std::u16string _text30744;_text30744+=u"shape takes a material second, and ";_text30744+=j::string(j::get(_v_22728_what,this->_literals[1]));_text30744+=u" is an emission: send it out with emit(";_text30744+=j::string(j::get(_v_22728_what,this->_literals[1]));_text30744+=u"(), { from: area })";return V(std::move(_text30744));})()});})());
}
if(j::truth(([&]()->V{V _logical30746=([&]()->V{V _logical30747=([&]()->V{V _logical30748=([&]()->V{V _lhs30749=_v_22728_what;V _rhs30750=j::builtin("undefined");return V(!j::equal(_lhs30749,_rhs30750,true));})();return j::truth(_logical30748)?j::unary("!",([&]()->V{V _callee30751=this->_v_21568_isMaterial.get();return j::call(_callee30751,j::Args{_v_22728_what});})()):_logical30748;})();return j::truth(_logical30747)?([&]()->V{V _callee30752=this->_v_20646_isObject.get();return j::call(_callee30752,j::Args{_v_22728_what});})():_logical30747;})();return j::truth(_logical30746)?([&]()->V{V _lhs30753=_v_22729_o;V _rhs30754=j::builtin("undefined");return V(j::equal(_lhs30753,_rhs30754,true));})():_logical30746;})())){(void)(((_v_22729_o=_v_22728_what),(_v_22728_what=j::builtin("undefined"))));
}
_v_22730_m.get()=([&]()->V{V _logical30757=([&]()->V{V _logical30758=_v_22728_what;return j::nullish(_logical30758)?([&]()->V{V _chain30759=_v_22727_where.get();V _chain30760=j::get(_chain30759,this->_literals[60]);if(j::nullish(_chain30760))return V{};V _chain30761=j::call(_chain30760,j::Args{},_chain30759);return _chain30761;})():_logical30758;})();return j::nullish(_logical30757)?([&]()->V{V _callee30762=this->_v_22151_solid.get();return j::call(_callee30762,j::Args{});})():_logical30757;})();
if(j::truth(j::unary("!",([&]()->V{V _callee30763=this->_v_21568_isMaterial.get();return j::call(_callee30763,j::Args{_v_22730_m.get()});})()))){(void)(([&]()->V{V _callee30766=this->_v_20632_fail.get();return j::call(_callee30766,j::Args{([&]()->V{std::u16string _text30764;_text30764+=u"shape takes a material second, such as water(), glass() or solid(), not ";_text30764+=j::string(([&]()->V{V _callee30765=this->_v_20649_show.get();return j::call(_callee30765,j::Args{_v_22728_what});})());_text30764+=u"";return V(std::move(_text30764));})()});})());
}
_v_22731_p=([&]()->V{V _callee30768=this->_v_20652_optionsOf.get();return j::call(_callee30768,j::Args{this->_literals[449],_v_22729_o,([&]()->V{j::Args _array30767;_array30767.push_back(this->_literals[331]);_array30767.push_back(this->_literals[450]);_array30767.push_back(this->_literals[175]);return j::array(std::move(_array30767));})()});})();
_v_22732_own.get()=(j::truth(([&]()->V{V _lhs30769=j::unary("typeof",j::get(_v_22731_p,this->_literals[331]));V _rhs30770=this->_literals[0];return V(j::equal(_lhs30769,_rhs30770,true));})())?j::get(_v_22731_p,this->_literals[331]):V::null());
_v_22733_move.get()=(j::truth(_v_22732_own.get())?this->_literals[451]:([&]()->V{V _callee30772=this->_v_20688_wordOf.get();return j::call(_callee30772,j::Args{this->_literals[452],j::get(_v_22731_p,this->_literals[331]),([&]()->V{j::Args _array30771;_array30771.push_back(this->_literals[218]);_array30771.push_back(this->_literals[453]);_array30771.push_back(this->_literals[254]);_array30771.push_back(this->_literals[454]);_array30771.push_back(this->_literals[455]);return j::array(std::move(_array30771));})(),this->_literals[218]});})());
_v_22734_amount.get()=(j::truth(([&]()->V{V _lhs30773=j::get(_v_22731_p,this->_literals[450]);V _rhs30774=j::builtin("undefined");return V(j::equal(_lhs30773,_rhs30774,true));})())?j::builtin("undefined"):([&]()->V{V _callee30775=this->_v_20663_numberOf.get();return j::call(_callee30775,j::Args{this->_literals[456],j::get(_v_22731_p,this->_literals[450]),V(1.0),V(0.0),V(320.0)});})());
if(j::truth(([&]()->V{V _logical30776=([&]()->V{V _lhs30777=_v_22733_move.get();V _rhs30778=this->_literals[218];return V(j::equal(_lhs30777,_rhs30778,true));})();return j::truth(_logical30776)?([&]()->V{V _logical30779=([&]()->V{V _lhs30780=j::get(_v_22731_p,this->_literals[450]);V _rhs30781=j::builtin("undefined");return V(!j::equal(_lhs30780,_rhs30781,true));})();return !j::truth(_logical30779)?([&]()->V{V _lhs30782=j::get(_v_22731_p,this->_literals[175]);V _rhs30783=j::builtin("undefined");return V(!j::equal(_lhs30782,_rhs30783,true));})():_logical30779;})():_logical30776;})())){(void)(([&]()->V{V _callee30787=this->_v_20632_fail.get();return j::call(_callee30787,j::Args{([&]()->V{std::u16string _text30784;_text30784+=u"shape's ";_text30784+=j::string((j::truth(([&]()->V{V _lhs30785=j::get(_v_22731_p,this->_literals[450]);V _rhs30786=j::builtin("undefined");return V(!j::equal(_lhs30785,_rhs30786,true));})())?this->_literals[450]:this->_literals[175]));_text30784+=u" is for a move: give it move \"bob\", \"sway\", \"swim\" or \"drift\", or a function of your own";return V(std::move(_text30784));})()});})());
}
_v_22735_period.get()=(j::truth(([&]()->V{V _lhs30788=_v_22733_move.get();V _rhs30789=this->_literals[218];return V(j::equal(_lhs30788,_rhs30789,true));})())?j::builtin("undefined"):(j::truth(([&]()->V{V _lhs30790=_v_22733_move.get();V _rhs30791=this->_literals[451];return V(j::equal(_lhs30790,_rhs30791,true));})())?(j::truth(([&]()->V{V _lhs30792=j::get(_v_22731_p,this->_literals[175]);V _rhs30793=j::builtin("undefined");return V(j::equal(_lhs30792,_rhs30793,true));})())?j::builtin("Infinity"):([&]()->V{V _callee30794=this->_v_20682_periodOf.get();return j::call(_callee30794,j::Args{this->_literals[457],j::get(_v_22731_p,this->_literals[175]),V(4.0)});})()):([&]()->V{V _callee30795=this->_v_20682_periodOf.get();return j::call(_callee30795,j::Args{this->_literals[457],j::get(_v_22731_p,this->_literals[175]),j::get(this->_v_22663_MOVES.get(),_v_22733_move.get())});})()));
return ([&]()->V{V _obj30796=j::object();j::put(_obj30796,this->_literals[25],this->_literals[458]);j::put(_obj30796,this->_literals[459],_v_22730_m.get());j::put(_obj30796,this->_literals[175],_v_22735_period.get());j::put(_obj30796,this->_literals[460],(j::truth(([&]()->V{V _lhs30797=_v_22733_move.get();V _rhs30798=this->_literals[218];return V(j::equal(_lhs30797,_rhs30798,true));})())?j::get(_v_22727_where.get(),this->_literals[460]):j::builtin("undefined")));j::put(_obj30796,this->_literals[461],j::function([=](const j::Args &_args_fn22736,const V &_receiver_fn22736,const V &_self_fn22736) mutable ->V{
j::Cell _v_22737_cols;
j::Cell _v_22738_rows;
_v_22737_cols.get()=_args_fn22736[0];
_v_22738_rows.get()=_args_fn22736[1];
{
j::Cell _v_22739_placed;
j::Cell _v_22740_parts;
j::Cell _v_22743_all;
j::Cell _v_22757_f;
V _v_22758_w;
j::Cell _v_22759_reach;
j::Cell _v_22760_cx;
j::Cell _v_22761_windows;
j::Cell _v_22762_windowOf;
_v_22739_placed.get()=([&]()->V{V _receiver30799=_v_22727_where.get();V _method30800=this->_literals[27];V _method=j::get(_receiver30799,_method30800);j::Args _params30801=j::Args{_v_22737_cols.get(),_v_22738_rows.get()};return j::call(_method,_params30801,_receiver30799);})();
_v_22740_parts.get()=([&]()->V{V _receiver30805=(j::truth(([&]()->V{V _chain30808=_v_22727_where.get();V _chain30809=j::get(_chain30808,this->_literals[89]);if(j::nullish(_chain30809))return V{};V _chain30810=j::get(_chain30809,this->_literals[19]);return _chain30810;})())?j::get(_v_22727_where.get(),this->_literals[89]):([&]()->V{j::Args _array30811;_array30811.push_back(_v_22727_where.get());return j::array(std::move(_array30811));})());V _method30806=this->_literals[8];V _method=j::get(_receiver30805,_method30806);j::Args _params30807=j::Args{j::function([=](const j::Args &_args_fn22741,const V &_receiver_fn22741,const V &_self_fn22741) mutable ->V{
V _v_22742_a;
_v_22742_a=_args_fn22741[0];
return ([&]()->V{V _receiver30802=_v_22742_a;V _method30803=this->_literals[27];V _method=j::get(_receiver30802,_method30803);j::Args _params30804=j::Args{_v_22737_cols.get(),_v_22738_rows.get()};return j::call(_method,_params30804,_receiver30802);})();
return V{};
},1)};return j::call(_method,_params30807,_receiver30805);})();
_v_22743_all.get()=j::function([=](const j::Args &_args_fn22744,const V &_receiver_fn22744,const V &_self_fn22744) mutable ->V{
j::Cell _v_22745_draws;
_v_22745_draws.get()=_args_fn22744[0];
return (j::truth(([&]()->V{V _lhs30812=j::get(_v_22745_draws.get(),this->_literals[19]);V _rhs30813=V(1.0);return V(j::equal(_lhs30812,_rhs30813,true));})())?j::get(_v_22745_draws.get(),V(0.0)):j::function([=](const j::Args &_args_fn22746,const V &_receiver_fn22746,const V &_self_fn22746) mutable ->V{
j::Cell _v_22747_t;
j::Cell _v_22748_pt;
_v_22747_t.get()=_args_fn22746[0];
_v_22748_pt.get()=_args_fn22746[1];
return ([&]()->V{V _receiver30815=_v_22745_draws.get();V _method30816=this->_literals[66];V _method=j::get(_receiver30815,_method30816);j::Args _params30817=j::Args{j::function([=](const j::Args &_args_fn22749,const V &_receiver_fn22749,const V &_self_fn22749) mutable ->V{
V _v_22750_d;
_v_22750_d=_args_fn22749[0];
return ([&]()->V{V _callee30814=_v_22750_d;return j::call(_callee30814,j::Args{_v_22747_t.get(),_v_22748_pt.get()});})();
return V{};
},1)};return j::call(_method,_params30817,_receiver30815);})();
return V{};
},2));
return V{};
},1);
if(j::truth(([&]()->V{V _lhs30818=_v_22733_move.get();V _rhs30819=this->_literals[218];return V(j::equal(_lhs30818,_rhs30819,true));})())){
j::Cell _v_22751_draw;
_v_22751_draw.get()=([&]()->V{V _callee30827=_v_22743_all.get();return j::call(_callee30827,j::Args{([&]()->V{V _receiver30824=_v_22740_parts.get();V _method30825=this->_literals[8];V _method=j::get(_receiver30824,_method30825);j::Args _params30826=j::Args{j::function([=](const j::Args &_args_fn22752,const V &_receiver_fn22752,const V &_self_fn22752) mutable ->V{
V _v_22753_q;
_v_22753_q=_args_fn22752[0];
return ([&]()->V{V _receiver30821=_v_22730_m.get();V _method30822=this->_literals[176];V _method=j::get(_receiver30821,_method30822);j::Args _params30823=j::Args{([&]()->V{V _callee30820=this->_v_21440_cellsOf.get();return j::call(_callee30820,j::Args{_v_22753_q,_v_22737_cols.get(),_v_22738_rows.get()});})()};return j::call(_method,_params30823,_receiver30821);})();
return V{};
},1)};return j::call(_method,_params30826,_receiver30824);})()});})();
return j::function([=](const j::Args &_args_fn22754,const V &_receiver_fn22754,const V &_self_fn22754) mutable ->V{
V _v_22755_t;
V _v_22756_pt;
_v_22755_t=_args_fn22754[0];
_v_22756_pt=_args_fn22754[1];
return ([&]()->V{V _callee30829=_v_22751_draw.get();return j::call(_callee30829,j::Args{([&]()->V{V _callee30828=this->_v_21604_lap.get();return j::call(_callee30828,j::Args{_v_22755_t,j::get(_v_22730_m.get(),this->_literals[175])});})(),_v_22756_pt});})();
return V{};
},2);

}

_v_22757_f.get()=([&]()->V{V _logical30830=j::get(_v_22739_placed.get(),this->_literals[55]);return j::nullish(_logical30830)?([&]()->V{V _obj30831=j::object();j::put(_obj30831,this->_literals[30],V(0.0));j::put(_obj30831,this->_literals[35],V(0.0));j::put(_obj30831,this->_literals[32],_v_22737_cols.get());j::put(_obj30831,this->_literals[37],_v_22738_rows.get());return _obj30831;})():_logical30830;})();
_v_22758_w=([&]()->V{V _lhs30832=j::get(_v_22739_placed.get(),this->_literals[32]);V _rhs30833=j::get(_v_22739_placed.get(),this->_literals[30]);return V(j::number(_lhs30832)-j::number(_rhs30833));})();
_v_22759_reach.get()=([&]()->V{V _logical30834=_v_22734_amount.get();return j::nullish(_logical30834)?(j::truth(([&]()->V{V _lhs30835=_v_22733_move.get();V _rhs30836=this->_literals[453];return V(j::equal(_lhs30835,_rhs30836,true));})())?V(1.0):(j::truth(([&]()->V{V _lhs30837=_v_22733_move.get();V _rhs30838=this->_literals[254];return V(j::equal(_lhs30837,_rhs30838,true));})())?V(2.0):(j::truth(([&]()->V{V _lhs30839=_v_22733_move.get();V _rhs30840=this->_literals[454];return V(j::equal(_lhs30839,_rhs30840,true));})())?([&]()->V{V _receiver30858=j::builtin("Math");V _method30859=this->_literals[51];V _method=j::get(_receiver30858,_method30859);j::Args _params30860=j::Args{V(0.0),([&]()->V{V _lhs30841=([&]()->V{V _number30849=([&]()->V{V _lhs30850=([&]()->V{V _lhs30852=([&]()->V{V _lhs30854=j::get(_v_22757_f.get(),this->_literals[32]);V _rhs30855=j::get(_v_22757_f.get(),this->_literals[30]);return V(j::number(_lhs30854)-j::number(_rhs30855));})();V _rhs30853=_v_22758_w;return V(j::number(_lhs30852)-j::number(_rhs30853));})();V _rhs30851=V(2.0);return V(j::number(_lhs30850)/j::number(_rhs30851));})();return V(std::floor(j::number(_number30849)));})();V _rhs30842=V(1.0);return V(j::number(_lhs30841)-j::number(_rhs30842));})()};return j::call(_method,_params30860,_receiver30858);})():_v_22737_cols.get()))):_logical30834;})();
_v_22760_cx.get()=([&]()->V{V _lhs30861=([&]()->V{V _lhs30863=j::get(_v_22739_placed.get(),this->_literals[30]);V _rhs30864=j::get(_v_22739_placed.get(),this->_literals[32]);return j::binary("+",_lhs30863,_rhs30864);})();V _rhs30862=V(2.0);return V(j::number(_lhs30861)/j::number(_rhs30862));})();
_v_22761_windows.get()=([&]()->V{j::Args _array30865;_array30865.push_back(V::null());_array30865.push_back(V::null());return j::array(std::move(_array30865));})();
_v_22762_windowOf.get()=j::function([=](const j::Args &_args_fn22763,const V &_receiver_fn22763,const V &_self_fn22763) mutable ->V{
V _v_22764_turned;
_v_22764_turned=_args_fn22763[0];
return ([&]()->V{V _base30867=_v_22761_windows.get();V _key30868=j::unary("+",_v_22764_turned);V _old30869=j::get(_base30867,_key30868);return j::nullish(_old30869)?j::put(_base30867,_key30868,([&]()->V{V _callee30870=this->_v_22682_frameWindow.get();return j::call(_callee30870,j::Args{_v_22739_placed.get(),_v_22740_parts.get(),(j::truth(_v_22764_turned)?_v_22760_cx.get():j::builtin("undefined")),_v_22730_m.get(),_v_22737_cols.get(),_v_22738_rows.get(),_v_22743_all.get()});})()):_old30869;})();
return V{};
},1);
return j::function([=](const j::Args &_args_fn22765,const V &_receiver_fn22765,const V &_self_fn22765) mutable ->V{
V _v_22766_t;
V _v_22767_pt;
_v_22766_t=_args_fn22765[0];
_v_22767_pt=_args_fn22765[1];
{
V _v_22768_dx;
V _v_22769_dy;
V _v_22770_turn;
V _v_22771_mt;
V _v_22774_win;
V _v_22775_at;
_v_22768_dx=V(0.0);
_v_22769_dy=V(0.0);
_v_22770_turn=V(false);
_v_22771_mt=([&]()->V{V _callee30871=this->_v_21604_lap.get();return j::call(_callee30871,j::Args{_v_22766_t,_v_22735_period.get()});})();
if(j::truth(_v_22732_own.get())){
V _v_22772_r;
_v_22772_r=([&]()->V{V _callee30872=_v_22732_own.get();return j::call(_callee30872,j::Args{_v_22771_mt});})();
if(j::truth(([&]()->V{V _logical30873=([&]()->V{V _logical30874=j::unary("!",([&]()->V{V _receiver30875=j::builtin("Array");V _method30876=this->_literals[6];V _method=j::get(_receiver30875,_method30876);j::Args _params30877=j::Args{_v_22772_r};return j::call(_method,_params30877,_receiver30875);})());return !j::truth(_logical30874)?j::unary("!",([&]()->V{V _receiver30878=j::builtin("Number");V _method30879=this->_literals[14];V _method=j::get(_receiver30878,_method30879);j::Args _params30880=j::Args{j::get(_v_22772_r,V(0.0))};return j::call(_method,_params30880,_receiver30878);})()):_logical30874;})();return !j::truth(_logical30873)?j::unary("!",([&]()->V{V _receiver30881=j::builtin("Number");V _method30882=this->_literals[14];V _method=j::get(_receiver30881,_method30882);j::Args _params30883=j::Args{j::get(_v_22772_r,V(1.0))};return j::call(_method,_params30883,_receiver30881);})()):_logical30873;})())){(void)(([&]()->V{V _callee30886=this->_v_20632_fail.get();return j::call(_callee30886,j::Args{([&]()->V{std::u16string _text30884;_text30884+=u"shape's move gave ";_text30884+=j::string(([&]()->V{V _callee30885=this->_v_20649_show.get();return j::call(_callee30885,j::Args{_v_22772_r});})());_text30884+=u" at t = ";_text30884+=j::string(_v_22771_mt);_text30884+=u": a move of your own returns [dx, dy] in cells, or [dx, dy, true] turned round";return V(std::move(_text30884));})()});})());
}
(void)(((_v_22768_dx=([&]()->V{V _number30888=j::get(_v_22772_r,V(0.0));return V(std::floor(j::number(_number30888)+.5));})()),(_v_22769_dy=([&]()->V{V _number30890=j::get(_v_22772_r,V(1.0));return V(std::floor(j::number(_number30890)+.5));})()),(_v_22770_turn=([&]()->V{V _lhs30892=j::get(_v_22772_r,V(2.0));V _rhs30893=V(true);return V(j::equal(_lhs30892,_rhs30893,true));})())));

}
else {
V _v_22773_k;
_v_22773_k=([&]()->V{V _lhs30894=_v_22771_mt;V _rhs30895=_v_22735_period.get();return V(j::number(_lhs30894)/j::number(_rhs30895));})();
if(j::truth(([&]()->V{V _lhs30896=_v_22733_move.get();V _rhs30897=this->_literals[453];return V(j::equal(_lhs30896,_rhs30897,true));})())){(void)((_v_22769_dy=([&]()->V{V _number30906=([&]()->V{V _lhs30907=_v_22759_reach.get();V _rhs30908=([&]()->V{V _number30911=([&]()->V{V _lhs30912=this->_v_20628_TAU.get();V _rhs30913=_v_22773_k;return V(j::number(_lhs30912)*j::number(_rhs30913));})();return V(std::sin(j::number(_number30911)));})();return V(j::number(_lhs30907)*j::number(_rhs30908));})();return V(std::floor(j::number(_number30906)+.5));})()));
}else {if(j::truth(([&]()->V{V _lhs30914=_v_22733_move.get();V _rhs30915=this->_literals[254];return V(j::equal(_lhs30914,_rhs30915,true));})())){(void)((_v_22768_dx=([&]()->V{V _number30924=([&]()->V{V _lhs30925=_v_22759_reach.get();V _rhs30926=([&]()->V{V _number30929=([&]()->V{V _lhs30930=this->_v_20628_TAU.get();V _rhs30931=_v_22773_k;return V(j::number(_lhs30930)*j::number(_rhs30931));})();return V(std::sin(j::number(_number30929)));})();return V(j::number(_lhs30925)*j::number(_rhs30926));})();return V(std::floor(j::number(_number30924)+.5));})()));
}else {if(j::truth(([&]()->V{V _lhs30932=_v_22733_move.get();V _rhs30933=this->_literals[454];return V(j::equal(_lhs30932,_rhs30933,true));})())){
(void)((_v_22768_dx=([&]()->V{V _lhs30935=([&]()->V{V _number30944=([&]()->V{V _lhs30945=_v_22759_reach.get();V _rhs30946=([&]()->V{V _number30949=([&]()->V{V _lhs30950=this->_v_20628_TAU.get();V _rhs30951=_v_22773_k;return V(j::number(_lhs30950)*j::number(_rhs30951));})();return V(std::sin(j::number(_number30949)));})();return V(j::number(_lhs30945)*j::number(_rhs30946));})();return V(std::floor(j::number(_number30944)+.5));})();V _rhs30936=([&]()->V{V _number30958=([&]()->V{V _lhs30959=([&]()->V{V _lhs30961=([&]()->V{V _lhs30963=j::get(_v_22757_f.get(),this->_literals[30]);V _rhs30964=j::get(_v_22757_f.get(),this->_literals[32]);return j::binary("+",_lhs30963,_rhs30964);})();V _rhs30962=V(2.0);return V(j::number(_lhs30961)/j::number(_rhs30962));})();V _rhs30960=_v_22760_cx.get();return V(j::number(_lhs30959)-j::number(_rhs30960));})();return V(std::floor(j::number(_number30958)+.5));})();return j::binary("+",_lhs30935,_rhs30936);})()));
(void)((_v_22770_turn=([&]()->V{V _lhs30966=([&]()->V{V _number30970=([&]()->V{V _lhs30971=this->_v_20628_TAU.get();V _rhs30972=_v_22773_k;return V(j::number(_lhs30971)*j::number(_rhs30972));})();return V(std::cos(j::number(_number30970)));})();V _rhs30967=V(0.0);return j::binary("<",_lhs30966,_rhs30967);})()));

}
else {(void)((_v_22768_dx=([&]()->V{V _number30976=([&]()->V{V _lhs30977=_v_22773_k;V _rhs30978=_v_22759_reach.get();return V(j::number(_lhs30977)*j::number(_rhs30978));})();return V(std::floor(j::number(_number30976)+.5));})()));
}
}
}

}

_v_22774_win=([&]()->V{V _callee30979=_v_22762_windowOf.get();return j::call(_callee30979,j::Args{_v_22770_turn});})();
_v_22775_at=([&]()->V{V _callee30980=this->_v_21604_lap.get();return j::call(_callee30980,j::Args{_v_22766_t,j::get(_v_22730_m.get(),this->_literals[175])});})();
(void)(([&]()->V{V _receiver30981=_v_22774_win;V _method30982=this->_literals[444];V _method=j::get(_receiver30981,_method30982);j::Args _params30983=j::Args{_v_22775_at,_v_22767_pt,_v_22768_dx,_v_22769_dy};return j::call(_method,_params30983,_receiver30981);})());
if(j::truth(([&]()->V{V _logical30984=([&]()->V{V _lhs30985=_v_22733_move.get();V _rhs30986=this->_literals[455];return V(j::equal(_lhs30985,_rhs30986,true));})();return j::truth(_logical30984)?([&]()->V{V _lhs30987=_v_22759_reach.get();V _rhs30988=V(0.0);return j::binary(">",_lhs30987,_rhs30988);})():_logical30984;})())){(void)(([&]()->V{V _receiver30991=_v_22774_win;V _method30992=this->_literals[444];V _method=j::get(_receiver30991,_method30992);j::Args _params30993=j::Args{_v_22775_at,_v_22767_pt,([&]()->V{V _lhs30989=_v_22768_dx;V _rhs30990=_v_22759_reach.get();return V(j::number(_lhs30989)-j::number(_rhs30990));})(),_v_22769_dy};return j::call(_method,_params30993,_receiver30991);})());
}

}

return V{};
},2);

}

return V{};
},2));return _obj30796;})();

}

return V{};
},3);
this->_v_22776_emit.get()=j::function([=](const j::Args &_args_fn22777,const V &_receiver_fn22777,const V &_self_fn22777) mutable ->V{
j::Cell _v_22778_what;
V _v_22779_o;
_v_22778_what.get()=_args_fn22777[0];
_v_22779_o=_args_fn22777[1];
{
j::Cell _v_22780_p;
j::Cell _v_22783_at;
j::Cell _v_22784_toward;
if(j::truth(j::unary("!",([&]()->V{V _callee30994=this->_v_22347_isEmission.get();return j::call(_callee30994,j::Args{_v_22778_what.get()});})()))){(void)(([&]()->V{V _callee30997=this->_v_20632_fail.get();return j::call(_callee30997,j::Args{([&]()->V{std::u16string _text30995;_text30995+=u"emit takes an emission first, such as bubbles(), smoke(), sparks(), rain(), steam() or snow(), not ";_text30995+=j::string(([&]()->V{V _callee30996=this->_v_20649_show.get();return j::call(_callee30996,j::Args{_v_22778_what.get()});})());_text30995+=u"";return V(std::move(_text30995));})()});})());
}
_v_22780_p.get()=([&]()->V{V _callee30999=this->_v_20652_optionsOf.get();return j::call(_callee30999,j::Args{this->_literals[462],_v_22779_o,([&]()->V{j::Args _array30998;_array30998.push_back(this->_literals[124]);_array30998.push_back(this->_literals[39]);_array30998.push_back(this->_literals[381]);_array30998.push_back(this->_literals[71]);return j::array(std::move(_array30998));})()});})();
if(j::truth(([&]()->V{V _logical31000=([&]()->V{V _logical31001=([&]()->V{V _logical31002=([&]()->V{V _logical31003=([&]()->V{V _lhs31004=j::get(_v_22780_p.get(),this->_literals[124]);V _rhs31005=j::builtin("undefined");return V(!j::equal(_lhs31004,_rhs31005,true));})();return j::truth(_logical31003)?j::unary("!",([&]()->V{V _callee31006=this->_v_20728_isArea.get();return j::call(_callee31006,j::Args{j::get(_v_22780_p.get(),this->_literals[124])});})()):_logical31003;})();return j::truth(_logical31002)?j::unary("!",([&]()->V{V _callee31007=this->_v_20731_isPointOn.get();return j::call(_callee31007,j::Args{j::get(_v_22780_p.get(),this->_literals[124])});})()):_logical31002;})();return j::truth(_logical31001)?j::unary("!",([&]()->V{V _receiver31008=this->_v_20725_ANCHORS.get();V _method31009=this->_literals[11];V _method=j::get(_receiver31008,_method31009);j::Args _params31010=j::Args{j::get(_v_22780_p.get(),this->_literals[124])};return j::call(_method,_params31010,_receiver31008);})()):_logical31001;})();return j::truth(_logical31000)?j::unary("!",([&]()->V{V _logical31011=([&]()->V{V _logical31012=([&]()->V{V _receiver31013=j::builtin("Array");V _method31014=this->_literals[6];V _method=j::get(_receiver31013,_method31014);j::Args _params31015=j::Args{j::get(_v_22780_p.get(),this->_literals[124])};return j::call(_method,_params31015,_receiver31013);})();return j::truth(_logical31012)?([&]()->V{V _lhs31016=j::get(j::get(_v_22780_p.get(),this->_literals[124]),this->_literals[19]);V _rhs31017=V(2.0);return V(j::equal(_lhs31016,_rhs31017,true));})():_logical31012;})();return j::truth(_logical31011)?([&]()->V{V _receiver31018=j::get(_v_22780_p.get(),this->_literals[124]);V _method31019=this->_literals[40];V _method=j::get(_receiver31018,_method31019);j::Args _params31020=j::Args{j::get(j::builtin("Number"),this->_literals[14])};return j::call(_method,_params31020,_receiver31018);})():_logical31011;})()):_logical31000;})())){(void)(([&]()->V{V _callee31031=this->_v_20632_fail.get();return j::call(_callee31031,j::Args{([&]()->V{std::u16string _text31021;_text31021+=u"emit's from takes an area, an anchor word (";_text31021+=j::string(([&]()->V{V _callee31028=this->_v_20660_or.get();return j::call(_callee31028,j::Args{([&]()->V{V _receiver31025=this->_v_20725_ANCHORS.get();V _method31026=this->_literals[8];V _method=j::get(_receiver31025,_method31026);j::Args _params31027=j::Args{j::function([=](const j::Args &_args_fn22781,const V &_receiver_fn22781,const V &_self_fn22781) mutable ->V{
V _v_22782_a;
_v_22782_a=_args_fn22781[0];
return ([&]()->V{V _receiver31022=j::builtin("JSON");V _method31023=this->_literals[5];V _method=j::get(_receiver31022,_method31023);j::Args _params31024=j::Args{_v_22782_a};return j::call(_method,_params31024,_receiver31022);})();
return V{};
},1)};return j::call(_method,_params31027,_receiver31025);})()});})());_text31021+=u"), a point [x, y], or a point on a shape such as chimney.at(\"top\"), not ";_text31021+=j::string(([&]()->V{V _callee31029=this->_v_20649_show.get();return j::call(_callee31029,j::Args{j::get(_v_22780_p.get(),this->_literals[124])});})());_text31021+=u"";_text31021+=j::string(([&]()->V{V _callee31030=this->_v_20645_suggest.get();return j::call(_callee31030,j::Args{j::get(_v_22780_p.get(),this->_literals[124]),this->_v_20725_ANCHORS.get()});})());_text31021+=u"";return V(std::move(_text31021));})()});})());
}
_v_22783_at.get()=(j::truth(([&]()->V{V _lhs31032=j::get(_v_22780_p.get(),this->_literals[39]);V _rhs31033=j::builtin("undefined");return V(j::equal(_lhs31032,_rhs31033,true));})())?j::builtin("undefined"):([&]()->V{V _callee31034=this->_v_20688_wordOf.get();return j::call(_callee31034,j::Args{this->_literals[463],j::get(_v_22780_p.get(),this->_literals[39]),this->_v_20725_ANCHORS.get(),this->_literals[24]});})());
if(j::truth(([&]()->V{V _logical31035=([&]()->V{V _lhs31036=_v_22783_at.get();V _rhs31037=j::builtin("undefined");return V(!j::equal(_lhs31036,_rhs31037,true));})();return j::truth(_logical31035)?j::unary("!",([&]()->V{V _callee31038=this->_v_20728_isArea.get();return j::call(_callee31038,j::Args{j::get(_v_22780_p.get(),this->_literals[124])});})()):_logical31035;})())){(void)(([&]()->V{V _callee31040=this->_v_20632_fail.get();return j::call(_callee31040,j::Args{([&]()->V{std::u16string _text31039;_text31039+=u"emit's at is a place on the area it comes from: give from an area too, such as { from: car, at: \"bottom-left\" }";return V(std::move(_text31039));})()});})());
}
_v_22784_toward.get()=([&]()->V{V _callee31042=this->_v_20688_wordOf.get();return j::call(_callee31042,j::Args{this->_literals[464],j::get(_v_22780_p.get(),this->_literals[381]),([&]()->V{j::Args _array31041;_array31041.push_back(this->_literals[324]);_array31041.push_back(this->_literals[28]);_array31041.push_back(this->_literals[31]);return j::array(std::move(_array31041));})(),this->_literals[324]});})();
if(j::truth(([&]()->V{V _lhs31043=j::get(_v_22780_p.get(),this->_literals[71]);V _rhs31044=j::builtin("undefined");return V(!j::equal(_lhs31043,_rhs31044,true));})())){(void)(([&]()->V{V _callee31045=this->_v_20758_areaOf.get();return j::call(_callee31045,j::Args{this->_literals[465],j::get(_v_22780_p.get(),this->_literals[71])});})());
}
return ([&]()->V{V _obj31046=j::object();j::put(_obj31046,this->_literals[25],this->_literals[458]);j::put(_obj31046,this->_literals[459],_v_22778_what.get());j::put(_obj31046,this->_literals[461],j::function([=](const j::Args &_args_fn22785,const V &_receiver_fn22785,const V &_self_fn22785) mutable ->V{
V _v_22786_cols;
V _v_22787_rows;
_v_22786_cols=_args_fn22785[0];
_v_22787_rows=_args_fn22785[1];
{
V _v_22788_f;
V _v_22789_point;
j::Cell _v_22791_draw;
_v_22788_f=j::get(_v_22780_p.get(),this->_literals[124]);
_v_22789_point=V::null();
if(j::truth(([&]()->V{V _receiver31047=j::builtin("Array");V _method31048=this->_literals[6];V _method=j::get(_receiver31047,_method31048);j::Args _params31049=j::Args{_v_22788_f};return j::call(_method,_params31049,_receiver31047);})())){(void)((_v_22789_point=([&]()->V{j::Args _array31051;_array31051.push_back(j::get(_v_22788_f,V(0.0)));_array31051.push_back(j::get(_v_22788_f,V(1.0)));return j::array(std::move(_array31051));})()));
}else {if(j::truth(([&]()->V{V _callee31052=this->_v_20731_isPointOn.get();return j::call(_callee31052,j::Args{_v_22788_f});})())){(void)((_v_22789_point=([&]()->V{V _receiver31054=_v_22788_f;V _method31055=this->_literals[27];V _method=j::get(_receiver31054,_method31055);j::Args _params31056=j::Args{_v_22786_cols,_v_22787_rows};return j::call(_method,_params31056,_receiver31054);})()));
}else {if(j::truth(([&]()->V{V _logical31057=([&]()->V{V _callee31058=this->_v_20728_isArea.get();return j::call(_callee31058,j::Args{_v_22788_f});})();return j::truth(_logical31057)?_v_22783_at.get():_logical31057;})())){(void)((_v_22789_point=([&]()->V{V _receiver31060=([&]()->V{V _callee31063=this->_v_20734_spotOf.get();return j::call(_callee31063,j::Args{_v_22788_f,_v_22783_at.get()});})();V _method31061=this->_literals[27];V _method=j::get(_receiver31060,_method31061);j::Args _params31062=j::Args{_v_22786_cols,_v_22787_rows};return j::call(_method,_params31062,_receiver31060);})()));
}else {if(j::truth(([&]()->V{V _lhs31064=j::unary("typeof",_v_22788_f);V _rhs31065=this->_literals[4];return V(j::equal(_lhs31064,_rhs31065,true));})())){
V _v_22790_a;
_v_22790_a=_v_22788_f;
(void)((_v_22789_point=([&]()->V{j::Args _array31067;_array31067.push_back((j::truth(([&]()->V{V _receiver31068=_v_22790_a;V _method31069=this->_literals[29];V _method=j::get(_receiver31068,_method31069);j::Args _params31070=j::Args{this->_literals[28]};return j::call(_method,_params31070,_receiver31068);})())?V(0.5):(j::truth(([&]()->V{V _receiver31071=_v_22790_a;V _method31072=this->_literals[29];V _method=j::get(_receiver31071,_method31072);j::Args _params31073=j::Args{this->_literals[31]};return j::call(_method,_params31073,_receiver31071);})())?([&]()->V{V _lhs31074=_v_22786_cols;V _rhs31075=V(0.5);return V(j::number(_lhs31074)-j::number(_rhs31075));})():([&]()->V{V _lhs31076=_v_22786_cols;V _rhs31077=V(2.0);return V(j::number(_lhs31076)/j::number(_rhs31077));})())));_array31067.push_back((j::truth(([&]()->V{V _receiver31078=_v_22790_a;V _method31079=this->_literals[34];V _method=j::get(_receiver31078,_method31079);j::Args _params31080=j::Args{this->_literals[33]};return j::call(_method,_params31080,_receiver31078);})())?V(0.0):(j::truth(([&]()->V{V _receiver31081=_v_22790_a;V _method31082=this->_literals[34];V _method=j::get(_receiver31081,_method31082);j::Args _params31083=j::Args{this->_literals[36]};return j::call(_method,_params31083,_receiver31081);})())?_v_22787_rows:([&]()->V{V _lhs31084=_v_22787_rows;V _rhs31085=V(2.0);return V(j::number(_lhs31084)/j::number(_rhs31085));})())));return j::array(std::move(_array31067));})()));

}

}
}
}
_v_22791_draw.get()=([&]()->V{V _receiver31091=_v_22778_what.get();V _method31092=this->_literals[373];V _method=j::get(_receiver31091,_method31092);j::Args _params31093=j::Args{([&]()->V{V _obj31086=j::object();j::put(_obj31086,this->_literals[124],(j::truth(([&]()->V{V _logical31087=([&]()->V{V _callee31088=this->_v_20728_isArea.get();return j::call(_callee31088,j::Args{_v_22788_f});})();return j::truth(_logical31087)?j::unary("!",_v_22783_at.get()):_logical31087;})())?([&]()->V{V _callee31089=this->_v_21440_cellsOf.get();return j::call(_callee31089,j::Args{_v_22788_f,_v_22786_cols,_v_22787_rows});})():V::null()));j::put(_obj31086,this->_literals[376],_v_22789_point);j::put(_obj31086,this->_literals[71],(j::truth(j::get(_v_22780_p.get(),this->_literals[71]))?([&]()->V{V _callee31090=this->_v_21440_cellsOf.get();return j::call(_callee31090,j::Args{j::get(_v_22780_p.get(),this->_literals[71]),_v_22786_cols,_v_22787_rows});})():V::null()));j::put(_obj31086,this->_literals[46],_v_22786_cols);j::put(_obj31086,this->_literals[48],_v_22787_rows);j::put(_obj31086,this->_literals[381],_v_22784_toward.get());return _obj31086;})()};return j::call(_method,_params31093,_receiver31091);})();
return j::function([=](const j::Args &_args_fn22792,const V &_receiver_fn22792,const V &_self_fn22792) mutable ->V{
V _v_22793_t;
V _v_22794_pt;
_v_22793_t=_args_fn22792[0];
_v_22794_pt=_args_fn22792[1];
return ([&]()->V{V _callee31095=_v_22791_draw.get();return j::call(_callee31095,j::Args{([&]()->V{V _callee31094=this->_v_21604_lap.get();return j::call(_callee31094,j::Args{_v_22793_t,j::get(_v_22778_what.get(),this->_literals[175])});})(),_v_22794_pt});})();
return V{};
},2);

}

return V{};
},2));return _obj31046;})();

}

return V{};
},2);
this->_v_22795_loopOf.get()=j::function([=](const j::Args &_args_fn22796,const V &_receiver_fn22796,const V &_self_fn22796) mutable ->V{
V _v_22797_periods;
_v_22797_periods=_args_fn22796[0];
{
j::Cell _v_22798_gcd;
V _v_22802_l;
if(j::truth(j::unary("!",j::get(_v_22797_periods,this->_literals[19])))){return j::builtin("undefined");
}
_v_22798_gcd.get()=j::function([=](const j::Args &_args_fn22799,const V &_receiver_fn22799,const V &_self_fn22799) mutable ->V{
V _v_22800_a;
V _v_22801_b;
_v_22800_a=_args_fn22799[0];
_v_22801_b=_args_fn22799[1];
return (j::truth(_v_22801_b)?([&]()->V{V _callee31098=_v_22798_gcd.get();return j::call(_callee31098,j::Args{_v_22801_b,([&]()->V{V _lhs31096=_v_22800_a;V _rhs31097=_v_22801_b;return V(std::fmod(j::number(_lhs31096),j::number(_rhs31097)));})()});})():_v_22800_a);
return V{};
},2);
_v_22802_l=V(1.0);
{for(const auto &_item31099:j::elements(_v_22797_periods)){V _v_22803_p;
_v_22803_p=_item31099;
{
V _v_22804_h;
if(j::truth(j::unary("!",([&]()->V{V _receiver31100=j::builtin("Number");V _method31101=this->_literals[14];V _method=j::get(_receiver31100,_method31101);j::Args _params31102=j::Args{_v_22803_p};return j::call(_method,_params31102,_receiver31100);})()))){return j::builtin("undefined");
}
_v_22804_h=([&]()->V{V _number31105=([&]()->V{V _lhs31106=_v_22803_p;V _rhs31107=V(100.0);return V(j::number(_lhs31106)*j::number(_rhs31107));})();return V(std::floor(j::number(_number31105)+.5));})();
if(j::truth(([&]()->V{V _lhs31108=_v_22804_h;V _rhs31109=V(0.0);return j::binary("<=",_lhs31108,_rhs31109);})())){return j::builtin("undefined");
}
(void)((_v_22802_l=([&]()->V{V _lhs31111=([&]()->V{V _lhs31113=_v_22802_l;V _rhs31114=_v_22804_h;return V(j::number(_lhs31113)*j::number(_rhs31114));})();V _rhs31112=([&]()->V{V _callee31115=_v_22798_gcd.get();return j::call(_callee31115,j::Args{_v_22802_l,_v_22804_h});})();return V(j::number(_lhs31111)/j::number(_rhs31112));})()));
if(j::truth(([&]()->V{V _lhs31116=_v_22802_l;V _rhs31117=V(6000.0);return j::binary(">",_lhs31116,_rhs31117);})())){return j::builtin("undefined");
}

}
}}
return ([&]()->V{V _lhs31118=_v_22802_l;V _rhs31119=V(100.0);return V(j::number(_lhs31118)/j::number(_rhs31119));})();

}

return V{};
},1);
this->_v_22805_partsOf.get()=j::function([=](const j::Args &_args_fn22806,const V &_receiver_fn22806,const V &_self_fn22806) mutable ->V{
j::Cell _v_22807_what;
V _v_22808_parts;
_v_22807_what.get()=_args_fn22806[0];
_v_22808_parts=_args_fn22806[1];
{
if(j::truth(([&]()->V{V _logical31120=j::unary("!",([&]()->V{V _receiver31121=j::builtin("Array");V _method31122=this->_literals[6];V _method=j::get(_receiver31121,_method31122);j::Args _params31123=j::Args{_v_22808_parts};return j::call(_method,_params31123,_receiver31121);})());return !j::truth(_logical31120)?j::unary("!",j::get(_v_22808_parts,this->_literals[19])):_logical31120;})())){(void)(([&]()->V{V _callee31125=this->_v_20632_fail.get();return j::call(_callee31125,j::Args{([&]()->V{std::u16string _text31124;_text31124+=u"";_text31124+=j::string(_v_22807_what.get());_text31124+=u" takes a list of one or more parts, such as [shape(cup(), glass())]";return V(std::move(_text31124));})()});})());
}
(void)(([&]()->V{V _receiver31146=_v_22808_parts;V _method31147=this->_literals[66];V _method=j::get(_receiver31146,_method31147);j::Args _params31148=j::Args{j::function([=](const j::Args &_args_fn22809,const V &_receiver_fn22809,const V &_self_fn22809) mutable ->V{
V _v_22810_part;
V _v_22811_i;
_v_22810_part=_args_fn22809[0];
_v_22811_i=_args_fn22809[1];
{
V _v_22812_n;
if(j::truth(([&]()->V{V _callee31126=this->_v_22660_isPart.get();return j::call(_callee31126,j::Args{_v_22810_part});})())){return V{};
}
_v_22812_n=([&]()->V{std::u16string _text31127;_text31127+=u"";_text31127+=j::string(_v_22807_what.get());_text31127+=u"'s part ";_text31127+=j::string(([&]()->V{V _lhs31128=_v_22811_i;V _rhs31129=V(1.0);return j::binary("+",_lhs31128,_rhs31129);})());_text31127+=u"";return V(std::move(_text31127));})();
if(j::truth(([&]()->V{V _lhs31130=j::unary("typeof",_v_22810_part);V _rhs31131=this->_literals[0];return V(j::equal(_lhs31130,_rhs31131,true));})())){(void)(([&]()->V{V _callee31134=this->_v_20632_fail.get();return j::call(_callee31134,j::Args{([&]()->V{std::u16string _text31132;_text31132+=u"";_text31132+=j::string(_v_22812_n);_text31132+=u" is ";_text31132+=j::string(([&]()->V{V _callee31133=this->_v_20649_show.get();return j::call(_callee31133,j::Args{_v_22810_part});})());_text31132+=u", and give what it makes to shape() or emit()";return V(std::move(_text31132));})()});})());
}
if(j::truth(([&]()->V{V _callee31135=this->_v_20728_isArea.get();return j::call(_callee31135,j::Args{_v_22810_part});})())){(void)(([&]()->V{V _callee31137=this->_v_20632_fail.get();return j::call(_callee31137,j::Args{([&]()->V{std::u16string _text31136;_text31136+=u"";_text31136+=j::string(_v_22812_n);_text31136+=u" is an area: draw it with shape(area), or shape(area, material)";return V(std::move(_text31136));})()});})());
}
if(j::truth(([&]()->V{V _callee31138=this->_v_22347_isEmission.get();return j::call(_callee31138,j::Args{_v_22810_part});})())){(void)(([&]()->V{V _callee31140=this->_v_20632_fail.get();return j::call(_callee31140,j::Args{([&]()->V{std::u16string _text31139;_text31139+=u"";_text31139+=j::string(_v_22812_n);_text31139+=u" is an emission: send it out with emit(";_text31139+=j::string(j::get(_v_22810_part,this->_literals[1]));_text31139+=u"(), { from: area })";return V(std::move(_text31139));})()});})());
}
if(j::truth(([&]()->V{V _callee31141=this->_v_21568_isMaterial.get();return j::call(_callee31141,j::Args{_v_22810_part});})())){(void)(([&]()->V{V _callee31143=this->_v_20632_fail.get();return j::call(_callee31143,j::Args{([&]()->V{std::u16string _text31142;_text31142+=u"";_text31142+=j::string(_v_22812_n);_text31142+=u" is a material: fill an area with it, shape(area, ";_text31142+=j::string(j::get(_v_22810_part,this->_literals[1]));_text31142+=u"())";return V(std::move(_text31142));})()});})());
}
(void)(([&]()->V{V _callee31145=this->_v_20632_fail.get();return j::call(_callee31145,j::Args{([&]()->V{std::u16string _text31144;_text31144+=u"";_text31144+=j::string(_v_22812_n);_text31144+=u" is not a part: make one with shape(area, material) or emit(emission)";return V(std::move(_text31144));})()});})());

}

return V{};
},2)};return j::call(_method,_params31148,_receiver31146);})());
return _v_22808_parts;

}

return V{};
},2);
this->_v_22813_colorsFor.get()=j::function([=](const j::Args &_args_fn22814,const V &_receiver_fn22814,const V &_self_fn22814) mutable ->V{
V _v_22815_parts;
_v_22815_parts=_args_fn22814[0];
{
j::Cell _v_22816_light;
j::Cell _v_22817_dark;
j::Cell _v_22818_seen;
V _v_22819_slots;
_v_22816_light.get()=([&]()->V{j::Args _array31149;_array31149.push_back(j::get(this->_v_20624_INK.get(),this->_literals[22]));return j::array(std::move(_array31149));})();
_v_22817_dark.get()=([&]()->V{j::Args _array31150;_array31150.push_back(j::get(this->_v_20624_INK.get(),this->_literals[23]));return j::array(std::move(_array31150));})();
_v_22818_seen.get()=([&]()->V{V _callee31154=j::builtin("Map");return j::construct(_callee31154,j::Args{([&]()->V{j::Args _array31151;_array31151.push_back(([&]()->V{j::Args _array31152;_array31152.push_back(([&]()->V{std::u16string _text31153;_text31153+=u"";_text31153+=j::string(j::get(this->_v_20624_INK.get(),this->_literals[22]));_text31153+=u"";_text31153+=j::string(j::get(this->_v_20624_INK.get(),this->_literals[23]));_text31153+=u"";return V(std::move(_text31153));})());_array31152.push_back(V(0.0));return j::array(std::move(_array31152));})());return j::array(std::move(_array31151));})()});})();
_v_22819_slots=([&]()->V{V _receiver31185=_v_22815_parts;V _method31186=this->_literals[8];V _method=j::get(_receiver31185,_method31186);j::Args _params31187=j::Args{j::function([=](const j::Args &_args_fn22820,const V &_receiver_fn22820,const V &_self_fn22820) mutable ->V{
V _v_22821_part;
_v_22821_part=_args_fn22820[0];
{
j::Cell _v_22822_colors;
V _pattern31155=j::get(_v_22821_part,this->_literals[459]);
_v_22822_colors.get()=j::get(_pattern31155,this->_literals[98]);
return ([&]()->V{V _receiver31182=j::get(_v_22822_colors.get(),this->_literals[23]);V _method31183=this->_literals[8];V _method=j::get(_receiver31182,_method31183);j::Args _params31184=j::Args{j::function([=](const j::Args &_args_fn22823,const V &_receiver_fn22823,const V &_self_fn22823) mutable ->V{
V _v_22824_d;
V _v_22825_i;
_v_22824_d=_args_fn22823[0];
_v_22825_i=_args_fn22823[1];
{
V _v_22826_l;
V _v_22827_key;
V _v_22828_at;
_v_22826_l=([&]()->V{V _logical31156=j::get(j::get(_v_22822_colors.get(),this->_literals[22]),_v_22825_i);return j::nullish(_logical31156)?j::get(j::get(_v_22822_colors.get(),this->_literals[22]),([&]()->V{V _lhs31157=j::get(j::get(_v_22822_colors.get(),this->_literals[22]),this->_literals[19]);V _rhs31158=V(1.0);return V(j::number(_lhs31157)-j::number(_rhs31158));})()):_logical31156;})();
_v_22827_key=([&]()->V{std::u16string _text31159;_text31159+=u"";_text31159+=j::string(([&]()->V{V _receiver31160=_v_22826_l;V _method31161=this->_literals[466];V _method=j::get(_receiver31160,_method31161);j::Args _params31162=j::Args{};return j::call(_method,_params31162,_receiver31160);})());_text31159+=u"";_text31159+=j::string(([&]()->V{V _receiver31163=_v_22824_d;V _method31164=this->_literals[466];V _method=j::get(_receiver31163,_method31164);j::Args _params31165=j::Args{};return j::call(_method,_params31165,_receiver31163);})());_text31159+=u"";return V(std::move(_text31159));})();
_v_22828_at=([&]()->V{V _receiver31166=_v_22818_seen.get();V _method31167=this->_literals[157];V _method=j::get(_receiver31166,_method31167);j::Args _params31168=j::Args{_v_22827_key};return j::call(_method,_params31168,_receiver31166);})();
if(j::truth(([&]()->V{V _lhs31169=_v_22828_at;V _rhs31170=j::builtin("undefined");return V(!j::equal(_lhs31169,_rhs31170,true));})())){return _v_22828_at;
}
(void)(([&]()->V{V _receiver31171=_v_22818_seen.get();V _method31172=this->_literals[162];V _method=j::get(_receiver31171,_method31172);j::Args _params31173=j::Args{_v_22827_key,j::get(_v_22816_light.get(),this->_literals[19])};return j::call(_method,_params31173,_receiver31171);})());
(void)(([&]()->V{V _receiver31174=_v_22817_dark.get();V _method31175=this->_literals[149];V _method=j::get(_receiver31174,_method31175);j::Args _params31176=j::Args{_v_22824_d};return j::call(_method,_params31176,_receiver31174);})());
return ([&]()->V{V _lhs31177=([&]()->V{V _receiver31179=_v_22816_light.get();V _method31180=this->_literals[149];V _method=j::get(_receiver31179,_method31180);j::Args _params31181=j::Args{_v_22826_l};return j::call(_method,_params31181,_receiver31179);})();V _rhs31178=V(1.0);return V(j::number(_lhs31177)-j::number(_rhs31178));})();

}

return V{};
},2)};return j::call(_method,_params31184,_receiver31182);})();

}

return V{};
},1)};return j::call(_method,_params31187,_receiver31185);})();
if(j::truth(([&]()->V{V _lhs31188=j::get(_v_22816_light.get(),this->_literals[19]);V _rhs31189=V(32.0);return j::binary(">",_lhs31188,_rhs31189);})())){(void)(([&]()->V{V _callee31191=this->_v_20632_fail.get();return j::call(_callee31191,j::Args{([&]()->V{std::u16string _text31190;_text31190+=u"these parts have ";_text31190+=j::string(j::get(_v_22816_light.get(),this->_literals[19]));_text31190+=u" colours for each page between them, past the 32 a picture can have: use fewer materials, or give some the same colors";return V(std::move(_text31190));})()});})());
}
return ([&]()->V{V _obj31192=j::object();j::put(_obj31192,this->_literals[22],_v_22816_light.get());j::put(_obj31192,this->_literals[23],_v_22817_dark.get());j::put(_obj31192,this->_literals[467],_v_22819_slots);return _obj31192;})();

}

return V{};
},1);
this->_v_22829_partsPalette.get()=j::function([=](const j::Args &_args_fn22830,const V &_receiver_fn22830,const V &_self_fn22830) mutable ->V{
V _v_22831_parts;
_v_22831_parts=_args_fn22830[0];
{
V _v_22832_light;
V _v_22833_dark;
V _pattern31195=([&]()->V{V _callee31194=this->_v_22813_colorsFor.get();return j::call(_callee31194,j::Args{([&]()->V{V _callee31193=this->_v_22805_partsOf.get();return j::call(_callee31193,j::Args{this->_literals[468],_v_22831_parts});})()});})();
_v_22832_light=j::get(_pattern31195,this->_literals[22]);
_v_22833_dark=j::get(_pattern31195,this->_literals[23]);
return ([&]()->V{V _obj31196=j::object();j::put(_obj31196,this->_literals[22],_v_22832_light);j::put(_obj31196,this->_literals[23],_v_22833_dark);return _obj31196;})();

}

return V{};
},1);
this->_v_22834_stage.get()=j::function([=](const j::Args &_args_fn22835,const V &_receiver_fn22835,const V &_self_fn22835) mutable ->V{
V _v_22836_parts;
j::Cell _v_22837_cols;
j::Cell _v_22838_rows;
j::Cell _v_22839_maps;
_v_22836_parts=_args_fn22835[0];
_v_22837_cols.get()=_args_fn22835[1];
_v_22838_rows.get()=_args_fn22835[2];
_v_22839_maps.get()=_args_fn22835[3];
{
j::Cell _v_22840_draws;
j::Cell _v_22843_under;
j::Cell _v_22844_copied;
j::Cell _v_22845_map;
j::Cell _v_22846_paint;
_v_22840_draws.get()=([&]()->V{V _receiver31200=_v_22836_parts;V _method31201=this->_literals[8];V _method=j::get(_receiver31200,_method31201);j::Args _params31202=j::Args{j::function([=](const j::Args &_args_fn22841,const V &_receiver_fn22841,const V &_self_fn22841) mutable ->V{
V _v_22842_part;
_v_22842_part=_args_fn22841[0];
return ([&]()->V{V _receiver31197=_v_22842_part;V _method31198=this->_literals[461];V _method=j::get(_receiver31197,_method31198);j::Args _params31199=j::Args{_v_22837_cols.get(),_v_22838_rows.get()};return j::call(_method,_params31199,_receiver31197);})();
return V{};
},1)};return j::call(_method,_params31202,_receiver31200);})();
_v_22843_under.get()=([&]()->V{V _obj31203=j::object();j::put(_obj31203,this->_literals[160],([&]()->V{V _callee31206=j::builtin("Uint16Array");return j::construct(_callee31206,j::Args{([&]()->V{V _lhs31204=_v_22837_cols.get();V _rhs31205=_v_22838_rows.get();return V(j::number(_lhs31204)*j::number(_rhs31205));})()});})());j::put(_obj31203,this->_literals[98],([&]()->V{V _callee31209=j::builtin("Uint8Array");return j::construct(_callee31209,j::Args{([&]()->V{V _lhs31207=_v_22837_cols.get();V _rhs31208=_v_22838_rows.get();return V(j::number(_lhs31207)*j::number(_rhs31208));})()});})());return _obj31203;})();
_v_22844_copied.get()=V(false);
_v_22845_map.get()=([&]()->V{V _callee31210=_v_22839_maps.get();return j::call(_callee31210,j::Args{V(0.0),V(false)});})();
_v_22846_paint.get()=([&]()->V{V _obj31211=j::object();j::put(_obj31211,this->_literals[191],V::null());j::put(_obj31211,this->_literals[242],V(false));j::put(_obj31211,this->_literals[443],V(true));j::put(_obj31211,this->_literals[195],j::function([=](const j::Args &_args_fn22847,const V &_receiver_fn22847,const V &_self_fn22847) mutable ->V{
V _v_22848_i;
_v_22848_i=_args_fn22847[0];
return ([&]()->V{V _logical31212=j::get(_v_22845_map.get(),(j::truth(([&]()->V{V _lhs31213=_v_22848_i;V _rhs31214=j::get(_v_22845_map.get(),this->_literals[19]);return j::binary("<",_lhs31213,_rhs31214);})())?_v_22848_i:([&]()->V{V _lhs31215=j::get(_v_22845_map.get(),this->_literals[19]);V _rhs31216=V(1.0);return V(j::number(_lhs31215)-j::number(_rhs31216));})()));return j::nullish(_logical31212)?this->_v_20626_NONE.get():_logical31212;})();
return V{};
},1));V _accessor31217=this->_literals[192];j::accessor(_obj31211,_accessor31217,j::function([=](const j::Args &_args_fn22849,const V &_receiver_fn22849,const V &_self_fn22849) mutable ->V{
{
if(j::truth(j::unary("!",_v_22844_copied.get()))){(void)((([&]()->V{V _receiver31218=j::get(_v_22843_under.get(),this->_literals[160]);V _method31219=this->_literals[162];V _method=j::get(_receiver31218,_method31219);j::Args _params31220=j::Args{j::get(j::get(_v_22846_paint.get(),this->_literals[191]),this->_literals[160])};return j::call(_method,_params31220,_receiver31218);})(),([&]()->V{V _receiver31221=j::get(_v_22843_under.get(),this->_literals[98]);V _method31222=this->_literals[162];V _method=j::get(_receiver31221,_method31222);j::Args _params31223=j::Args{j::get(j::get(_v_22846_paint.get(),this->_literals[191]),this->_literals[98])};return j::call(_method,_params31223,_receiver31221);})(),(_v_22844_copied.get()=V(true))));
}
return _v_22843_under.get();

}

return V{};
},0),true);return _obj31211;})();
return j::function([=](const j::Args &_args_fn22850,const V &_receiver_fn22850,const V &_self_fn22850) mutable ->V{
j::Cell _v_22851_t;
j::Cell _v_22852_s;
_v_22851_t.get()=_args_fn22850[0];
_v_22852_s.get()=_args_fn22850[1];
{
(void)(([&]()->V{V _base31226=_v_22846_paint.get();V _key31227=this->_literals[191];V _assign31225=_v_22852_s.get();return j::put(_base31226,_key31227,_assign31225);})());
(void)(([&]()->V{V _base31229=_v_22846_paint.get();V _key31230=this->_literals[242];V _assign31228=j::get(_v_22852_s.get(),this->_literals[242]);return j::put(_base31229,_key31230,_assign31228);})());
(void)(([&]()->V{V _base31232=_v_22846_paint.get();V _key31233=this->_literals[443];V _assign31231=j::get(_v_22852_s.get(),this->_literals[443]);return j::put(_base31232,_key31233,_assign31231);})());
(void)(([&]()->V{V _receiver31238=_v_22840_draws.get();V _method31239=this->_literals[66];V _method=j::get(_receiver31238,_method31239);j::Args _params31240=j::Args{j::function([=](const j::Args &_args_fn22853,const V &_receiver_fn22853,const V &_self_fn22853) mutable ->V{
V _v_22854_draw;
V _v_22855_k;
_v_22854_draw=_args_fn22853[0];
_v_22855_k=_args_fn22853[1];
{
(void)((_v_22845_map.get()=([&]()->V{V _callee31235=_v_22839_maps.get();return j::call(_callee31235,j::Args{_v_22855_k,j::get(_v_22852_s.get(),this->_literals[242])});})()));
(void)((_v_22844_copied.get()=V(false)));
(void)(([&]()->V{V _callee31237=_v_22854_draw;return j::call(_callee31237,j::Args{_v_22851_t.get(),_v_22846_paint.get()});})());

}

return V{};
},2)};return j::call(_method,_params31240,_receiver31238);})());

}

return V{};
},2);

}

return V{};
},4);
this->_v_22857_drawParts.get()=j::function([=](const j::Args &_args_fn22858,const V &_receiver_fn22858,const V &_self_fn22858) mutable ->V{
V _v_22859_s;
V _v_22860_parts;
V _v_22861_t;
_v_22859_s=_args_fn22858[0];
_v_22860_parts=_args_fn22858[1];
_v_22861_t=_args_fn22858[2];
{
V _v_22862_lists;
V _v_22863_draw;
if(j::truth(j::unary("!",([&]()->V{V _lhs31241=_v_22859_s;V _rhs31242=this->_v_20627_Surface.get();return j::binary("instanceof",_lhs31241,_rhs31242);})()))){(void)(([&]()->V{V _callee31243=this->_v_20632_fail.get();return j::call(_callee31243,j::Args{this->_literals[469]});})());
}
_v_22862_lists=([&]()->V{V _receiver31244=this->_v_22856_staged.get();V _method31245=this->_literals[157];V _method=j::get(_receiver31244,_method31245);j::Args _params31246=j::Args{_v_22859_s};return j::call(_method,_params31246,_receiver31244);})();
if(j::truth(j::unary("!",_v_22862_lists))){(void)(([&]()->V{V _receiver31249=this->_v_22856_staged.get();V _method31250=this->_literals[162];V _method=j::get(_receiver31249,_method31250);j::Args _params31251=j::Args{_v_22859_s,(_v_22862_lists=([&]()->V{V _callee31248=j::builtin("WeakMap");return j::construct(_callee31248,j::Args{});})())};return j::call(_method,_params31251,_receiver31249);})());
}
_v_22863_draw=(j::truth(([&]()->V{V _receiver31252=j::builtin("Array");V _method31253=this->_literals[6];V _method=j::get(_receiver31252,_method31253);j::Args _params31254=j::Args{_v_22860_parts};return j::call(_method,_params31254,_receiver31252);})())?([&]()->V{V _receiver31255=_v_22862_lists;V _method31256=this->_literals[157];V _method=j::get(_receiver31255,_method31256);j::Args _params31257=j::Args{_v_22860_parts};return j::call(_method,_params31257,_receiver31255);})():j::builtin("undefined"));
if(j::truth(j::unary("!",_v_22863_draw))){
j::Cell _v_22864_pal;
j::Cell _v_22865_maps;
(void)(([&]()->V{V _callee31258=this->_v_22805_partsOf.get();return j::call(_callee31258,j::Args{this->_literals[470],_v_22860_parts});})());
_v_22864_pal.get()=j::get(_v_22859_s,this->_literals[432]);
_v_22865_maps.get()=([&]()->V{V _receiver31269=_v_22860_parts;V _method31270=this->_literals[8];V _method=j::get(_receiver31269,_method31270);j::Args _params31271=j::Args{j::function([=](const j::Args &_args_fn22866,const V &_receiver_fn22866,const V &_self_fn22866) mutable ->V{
V _v_22867_part;
_v_22867_part=_args_fn22866[0];
{
V _v_22868_light;
V _v_22869_dark;
V _v_22870_at;
V _pattern31259=j::get(j::get(_v_22867_part,this->_literals[459]),this->_literals[98]);
_v_22868_light=j::get(_pattern31259,this->_literals[22]);
_v_22869_dark=j::get(_pattern31259,this->_literals[23]);
_v_22870_at=j::function([=](const j::Args &_args_fn22871,const V &_receiver_fn22871,const V &_self_fn22871) mutable ->V{
V _v_22872_list;
j::Cell _v_22873_paper;
_v_22872_list=_args_fn22871[0];
_v_22873_paper.get()=_args_fn22871[1];
return ([&]()->V{V _receiver31263=j::builtin("Uint8Array");V _method31264=this->_literals[124];V _method=j::get(_receiver31263,_method31264);j::Args _params31265=j::Args{_v_22872_list,j::function([=](const j::Args &_args_fn22874,const V &_receiver_fn22874,const V &_self_fn22874) mutable ->V{
V _v_22875_c;
_v_22875_c=_args_fn22874[0];
return (j::truth(_v_22864_pal.get())?([&]()->V{V _receiver31260=_v_22864_pal.get();V _method31261=this->_literals[428];V _method=j::get(_receiver31260,_method31261);j::Args _params31262=j::Args{_v_22875_c,_v_22873_paper.get()};return j::call(_method,_params31262,_receiver31260);})():this->_v_20626_NONE.get());
return V{};
},1)};return j::call(_method,_params31265,_receiver31263);})();
return V{};
},2);
return ([&]()->V{j::Args _array31266;_array31266.push_back(([&]()->V{V _callee31267=_v_22870_at;return j::call(_callee31267,j::Args{_v_22868_light,V(true)});})());_array31266.push_back(([&]()->V{V _callee31268=_v_22870_at;return j::call(_callee31268,j::Args{_v_22869_dark,V(false)});})());return j::array(std::move(_array31266));})();

}

return V{};
},1)};return j::call(_method,_params31271,_receiver31269);})();
(void)((_v_22863_draw=([&]()->V{V _callee31273=this->_v_22834_stage.get();return j::call(_callee31273,j::Args{_v_22860_parts,j::get(_v_22859_s,this->_literals[46]),j::get(_v_22859_s,this->_literals[48]),j::function([=](const j::Args &_args_fn22876,const V &_receiver_fn22876,const V &_self_fn22876) mutable ->V{
V _v_22877_k;
V _v_22878_paper;
_v_22877_k=_args_fn22876[0];
_v_22878_paper=_args_fn22876[1];
return j::get(j::get(_v_22865_maps.get(),_v_22877_k),(j::truth(_v_22878_paper)?V(0.0):V(1.0)));
return V{};
},2)});})()));
(void)(([&]()->V{V _receiver31274=_v_22862_lists;V _method31275=this->_literals[162];V _method=j::get(_receiver31274,_method31275);j::Args _params31276=j::Args{_v_22860_parts,_v_22863_draw};return j::call(_method,_params31276,_receiver31274);})());

}

(void)(([&]()->V{V _callee31280=_v_22863_draw;return j::call(_callee31280,j::Args{(j::truth(([&]()->V{V _receiver31277=j::builtin("Number");V _method31278=this->_literals[14];V _method=j::get(_receiver31277,_method31278);j::Args _params31279=j::Args{_v_22861_t};return j::call(_method,_params31279,_receiver31277);})())?_v_22861_t:V(0.0)),_v_22859_s});})());

}

return V{};
},3);
this->_v_22880_picture.get()=j::function([=](const j::Args &_args_fn22881,const V &_receiver_fn22881,const V &_self_fn22881) mutable ->V{
j::Cell _v_22882_parts;
V _v_22883_spec;
_v_22882_parts.get()=_args_fn22881[0];
_v_22883_spec=_args_fn22881[1];
{
V _v_22884_sp;
V _v_22885_fixed;
V _v_22888_size;
V _v_22893_s;
V _v_22894_light;
V _v_22895_dark;
V _v_22896_slots;
V _v_22897_periods;
V _v_22904_loop;
j::Cell _v_22905_n;
j::Cell _v_22906_maps;
(void)(([&]()->V{V _callee31281=this->_v_22805_partsOf.get();return j::call(_callee31281,j::Args{this->_literals[471],_v_22882_parts.get()});})());
_v_22884_sp=([&]()->V{V _callee31282=this->_v_20652_optionsOf.get();return j::call(_callee31282,j::Args{this->_literals[472],_v_22883_spec,this->_v_22879_SPEC_KEYS.get()});})();
if(j::truth(([&]()->V{V _logical31283=([&]()->V{V _lhs31284=j::get(_v_22884_sp,this->_literals[432]);V _rhs31285=j::builtin("undefined");return V(!j::equal(_lhs31284,_rhs31285,true));})();return !j::truth(_logical31283)?([&]()->V{V _lhs31286=j::get(_v_22884_sp,this->_literals[310]);V _rhs31287=j::builtin("undefined");return V(!j::equal(_lhs31286,_rhs31287,true));})():_logical31283;})())){(void)(([&]()->V{V _callee31288=this->_v_20632_fail.get();return j::call(_callee31288,j::Args{this->_literals[473]});})());
}
if(j::truth(([&]()->V{V _logical31289=([&]()->V{V _lhs31290=j::get(_v_22884_sp,this->_literals[474]);V _rhs31291=j::builtin("undefined");return V(!j::equal(_lhs31290,_rhs31291,true));})();return j::truth(_logical31289)?([&]()->V{V _lhs31292=j::get(_v_22884_sp,this->_literals[474]);V _rhs31293=V(2.0);return V(!j::equal(_lhs31292,_rhs31293,true));})():_logical31289;})())){(void)(([&]()->V{V _callee31296=this->_v_20632_fail.get();return j::call(_callee31296,j::Args{([&]()->V{std::u16string _text31294;_text31294+=u"picture() draws for cells twice as tall as wide, so its cell can only be 2, not ";_text31294+=j::string(([&]()->V{V _callee31295=this->_v_20649_show.get();return j::call(_callee31295,j::Args{j::get(_v_22884_sp,this->_literals[474])});})());_text31294+=u"";return V(std::move(_text31294));})()});})());
}
if(j::truth(([&]()->V{V _logical31297=([&]()->V{V _lhs31298=j::get(_v_22884_sp,this->_literals[445]);V _rhs31299=j::builtin("undefined");return V(!j::equal(_lhs31298,_rhs31299,true));})();return j::truth(_logical31297)?([&]()->V{V _lhs31300=j::get(_v_22884_sp,this->_literals[445]);V _rhs31301=V(true);return V(!j::equal(_lhs31300,_rhs31301,true));})():_logical31297;})())){(void)(([&]()->V{V _callee31302=this->_v_20632_fail.get();return j::call(_callee31302,j::Args{this->_literals[475]});})());
}
_v_22885_fixed=([&]()->V{V _receiver31303=_v_22882_parts.get();V _method31304=this->_literals[40];V _method=j::get(_receiver31303,_method31304);j::Args _params31305=j::Args{j::function([=](const j::Args &_args_fn22886,const V &_receiver_fn22886,const V &_self_fn22886) mutable ->V{
V _v_22887_part;
_v_22887_part=_args_fn22886[0];
return j::get(_v_22887_part,this->_literals[460]);
return V{};
},1)};return j::call(_method,_params31305,_receiver31303);})();
_v_22888_size=([&]()->V{V _obj31306=j::object();j::put(_obj31306,this->_literals[46],V(64.0));j::put(_obj31306,this->_literals[48],V(24.0));return _obj31306;})();
if(j::truth(([&]()->V{V _logical31307=([&]()->V{V _logical31308=_v_22885_fixed;return j::truth(_logical31308)?([&]()->V{V _lhs31309=j::get(_v_22884_sp,this->_literals[46]);V _rhs31310=j::builtin("undefined");return V(j::equal(_lhs31309,_rhs31310,true));})():_logical31308;})();return j::truth(_logical31307)?([&]()->V{V _lhs31311=j::get(_v_22884_sp,this->_literals[48]);V _rhs31312=j::builtin("undefined");return V(j::equal(_lhs31311,_rhs31312,true));})():_logical31307;})())){
(void)((_v_22888_size=([&]()->V{V _obj31314=j::object();j::put(_obj31314,this->_literals[46],([&]()->V{V _receiver31332=j::builtin("Math");V _method31333=this->_literals[51];V _method=j::get(_receiver31332,_method31333);j::Args _params31334=j::Args{V(1.0),([&]()->V{V _number31322=([&]()->V{V _receiver31327=j::builtin("Math");V _method31328=this->_literals[51];V _method=j::get(_receiver31327,_method31328);j::Args _params31329=([&](){j::Args _args31323;for(const auto &_v:j::elements(([&]()->V{V _receiver31324=_v_22882_parts.get();V _method31325=this->_literals[8];V _method=j::get(_receiver31324,_method31325);j::Args _params31326=j::Args{j::function([=](const j::Args &_args_fn22889,const V &_receiver_fn22889,const V &_self_fn22889) mutable ->V{
V _v_22890_part;
_v_22890_part=_args_fn22889[0];
return j::get(j::get(_v_22890_part,this->_literals[460]),this->_literals[46]);
return V{};
},1)};return j::call(_method,_params31326,_receiver31324);})()))_args31323.push_back(_v);return _args31323;})();return j::call(_method,_params31329,_receiver31327);})();return V(std::ceil(j::number(_number31322)));})()};return j::call(_method,_params31334,_receiver31332);})());j::put(_obj31314,this->_literals[48],([&]()->V{V _receiver31352=j::builtin("Math");V _method31353=this->_literals[51];V _method=j::get(_receiver31352,_method31353);j::Args _params31354=j::Args{V(1.0),([&]()->V{V _number31342=([&]()->V{V _receiver31347=j::builtin("Math");V _method31348=this->_literals[51];V _method=j::get(_receiver31347,_method31348);j::Args _params31349=([&](){j::Args _args31343;for(const auto &_v:j::elements(([&]()->V{V _receiver31344=_v_22882_parts.get();V _method31345=this->_literals[8];V _method=j::get(_receiver31344,_method31345);j::Args _params31346=j::Args{j::function([=](const j::Args &_args_fn22891,const V &_receiver_fn22891,const V &_self_fn22891) mutable ->V{
V _v_22892_part;
_v_22892_part=_args_fn22891[0];
return j::get(j::get(_v_22892_part,this->_literals[460]),this->_literals[48]);
return V{};
},1)};return j::call(_method,_params31346,_receiver31344);})()))_args31343.push_back(_v);return _args31343;})();return j::call(_method,_params31349,_receiver31347);})();return V(std::ceil(j::number(_number31342)));})()};return j::call(_method,_params31354,_receiver31352);})());return _obj31314;})()));
if(j::truth(([&]()->V{V _logical31355=([&]()->V{V _lhs31356=j::get(_v_22888_size,this->_literals[46]);V _rhs31357=j::get(this->_v_20625_MAX.get(),this->_literals[46]);return j::binary(">",_lhs31356,_rhs31357);})();return !j::truth(_logical31355)?([&]()->V{V _lhs31358=j::get(_v_22888_size,this->_literals[48]);V _rhs31359=j::get(this->_v_20625_MAX.get(),this->_literals[48]);return j::binary(">",_lhs31358,_rhs31359);})():_logical31355;})())){(void)(([&]()->V{V _callee31361=this->_v_20632_fail.get();return j::call(_callee31361,j::Args{([&]()->V{std::u16string _text31360;_text31360+=u"picture's parts reach ";_text31360+=j::string(j::get(_v_22888_size,this->_literals[46]));_text31360+=u" by ";_text31360+=j::string(j::get(_v_22888_size,this->_literals[48]));_text31360+=u" cells, past the ";_text31360+=j::string(j::get(this->_v_20625_MAX.get(),this->_literals[46]));_text31360+=u" by ";_text31360+=j::string(j::get(this->_v_20625_MAX.get(),this->_literals[48]));_text31360+=u" a piece can be: give the picture cols and rows, or make the areas smaller";return V(std::move(_text31360));})()});})());
}

}

_v_22893_s=([&]()->V{V _callee31362=this->_v_20643_specOf.get();return j::call(_callee31362,j::Args{_v_22884_sp,this->_literals[471],_v_22888_size});})();
V _pattern31364=([&]()->V{V _callee31363=this->_v_22813_colorsFor.get();return j::call(_callee31363,j::Args{_v_22882_parts.get()});})();
_v_22894_light=j::get(_pattern31364,this->_literals[22]);
_v_22895_dark=j::get(_pattern31364,this->_literals[23]);
_v_22896_slots=j::get(_pattern31364,this->_literals[467]);
_v_22897_periods=([&]()->V{V _receiver31367=([&]()->V{j::Args _array31370;for(const auto &_value:j::elements(([&]()->V{V _receiver31371=_v_22882_parts.get();V _method31372=this->_literals[8];V _method=j::get(_receiver31371,_method31372);j::Args _params31373=j::Args{j::function([=](const j::Args &_args_fn22898,const V &_receiver_fn22898,const V &_self_fn22898) mutable ->V{
V _v_22899_part;
_v_22899_part=_args_fn22898[0];
return j::get(j::get(_v_22899_part,this->_literals[459]),this->_literals[175]);
return V{};
},1)};return j::call(_method,_params31373,_receiver31371);})()))_array31370.push_back(_value);for(const auto &_value:j::elements(([&]()->V{V _receiver31374=_v_22882_parts.get();V _method31375=this->_literals[8];V _method=j::get(_receiver31374,_method31375);j::Args _params31376=j::Args{j::function([=](const j::Args &_args_fn22900,const V &_receiver_fn22900,const V &_self_fn22900) mutable ->V{
V _v_22901_part;
_v_22901_part=_args_fn22900[0];
return j::get(_v_22901_part,this->_literals[175]);
return V{};
},1)};return j::call(_method,_params31376,_receiver31374);})()))_array31370.push_back(_value);return j::array(std::move(_array31370));})();V _method31368=this->_literals[158];V _method=j::get(_receiver31367,_method31368);j::Args _params31369=j::Args{j::function([=](const j::Args &_args_fn22902,const V &_receiver_fn22902,const V &_self_fn22902) mutable ->V{
V _v_22903_v;
_v_22903_v=_args_fn22902[0];
return ([&]()->V{V _lhs31365=_v_22903_v;V _rhs31366=j::builtin("undefined");return V(!j::equal(_lhs31365,_rhs31366,true));})();
return V{};
},1)};return j::call(_method,_params31369,_receiver31367);})();
_v_22904_loop=([&]()->V{V _logical31377=j::get(_v_22893_s,this->_literals[442]);return j::nullish(_logical31377)?([&]()->V{V _callee31378=this->_v_22795_loopOf.get();return j::call(_callee31378,j::Args{_v_22897_periods});})():_logical31377;})();
_v_22905_n.get()=j::get(_v_22894_light,this->_literals[19]);
_v_22906_maps.get()=([&]()->V{V _receiver31388=_v_22896_slots;V _method31389=this->_literals[8];V _method=j::get(_receiver31388,_method31389);j::Args _params31390=j::Args{j::function([=](const j::Args &_args_fn22907,const V &_receiver_fn22907,const V &_self_fn22907) mutable ->V{
V _v_22908_sl;
_v_22908_sl=_args_fn22907[0];
return ([&]()->V{j::Args _array31379;_array31379.push_back(([&]()->V{V _receiver31380=j::builtin("Uint8Array");V _method31381=this->_literals[124];V _method=j::get(_receiver31380,_method31381);j::Args _params31382=j::Args{_v_22908_sl};return j::call(_method,_params31382,_receiver31380);})());_array31379.push_back(([&]()->V{V _receiver31385=j::builtin("Uint8Array");V _method31386=this->_literals[124];V _method=j::get(_receiver31385,_method31386);j::Args _params31387=j::Args{_v_22908_sl,j::function([=](const j::Args &_args_fn22909,const V &_receiver_fn22909,const V &_self_fn22909) mutable ->V{
V _v_22910_k;
_v_22910_k=_args_fn22909[0];
return ([&]()->V{V _lhs31383=_v_22905_n.get();V _rhs31384=_v_22910_k;return j::binary("+",_lhs31383,_rhs31384);})();
return V{};
},1)};return j::call(_method,_params31387,_receiver31385);})());return j::array(std::move(_array31379));})();
return V{};
},1)};return j::call(_method,_params31390,_receiver31388);})();
return ([&]()->V{V _callee31403=this->_v_20638_piece.get();return j::call(_callee31403,j::Args{([&]()->V{V _obj31391=j::object();V _spread31392=_v_22893_s;for(const auto &_key:j::keys(_spread31392))j::put(_obj31391,_key,j::get(_spread31392,_key));j::put(_obj31391,this->_literals[433],([&]()->V{V _logical31393=j::get(_v_22893_s,this->_literals[433]);return j::nullish(_logical31393)?(j::truth(j::get(_v_22897_periods,this->_literals[19]))?V(24.0):V(0.0)):_logical31393;})());j::put(_obj31391,this->_literals[476],([&]()->V{V _logical31394=j::get(_v_22893_s,this->_literals[476]);return j::nullish(_logical31394)?this->_literals[477]:_logical31394;})());j::put(_obj31391,this->_literals[432],([&]()->V{V _obj31395=j::object();j::put(_obj31395,this->_literals[22],_v_22894_light);j::put(_obj31395,this->_literals[23],_v_22895_dark);return _obj31395;})());j::put(_obj31391,this->_literals[310],V(0.0));V _spread31396=(j::truth(_v_22904_loop)?([&]()->V{V _obj31397=j::object();j::put(_obj31397,this->_literals[442],_v_22904_loop);return _obj31397;})():([&]()->V{V _obj31398=j::object();return _obj31398;})());for(const auto &_key:j::keys(_spread31396))j::put(_obj31391,_key,j::get(_spread31396,_key));return _obj31391;})(),([&]()->V{V _obj31399=j::object();j::put(_obj31399,this->_literals[461],j::function([=](const j::Args &_args_fn22911,const V &_receiver_fn22911,const V &_self_fn22911) mutable ->V{
V _v_22912__o;
V _v_22913_cols;
V _v_22914_rows;
_v_22912__o=_args_fn22911[0];
V _pattern31400=_args_fn22911[1];
_v_22913_cols=j::get(_pattern31400,this->_literals[46]);
_v_22914_rows=j::get(_pattern31400,this->_literals[48]);
{
j::Cell _v_22915_draw;
_v_22915_draw.get()=([&]()->V{V _callee31401=this->_v_22834_stage.get();return j::call(_callee31401,j::Args{_v_22882_parts.get(),_v_22913_cols,_v_22914_rows,j::function([=](const j::Args &_args_fn22916,const V &_receiver_fn22916,const V &_self_fn22916) mutable ->V{
V _v_22917_k;
V _v_22918_paper;
_v_22917_k=_args_fn22916[0];
_v_22918_paper=_args_fn22916[1];
return j::get(j::get(_v_22906_maps.get(),_v_22917_k),(j::truth(_v_22918_paper)?V(0.0):V(1.0)));
return V{};
},2)});})();
return j::function([=](const j::Args &_args_fn22919,const V &_receiver_fn22919,const V &_self_fn22919) mutable ->V{
V _v_22920_t;
V _v_22921_grid;
_v_22920_t=_args_fn22919[0];
_v_22921_grid=_args_fn22919[1];
return ([&]()->V{V _callee31402=_v_22915_draw.get();return j::call(_callee31402,j::Args{_v_22920_t,_v_22921_grid});})();
return V{};
},2);

}

return V{};
},2));return _obj31399;})()});})();

}

return V{};
},2);
this->_v_22922_waterGlass.get()=j::function([=](const j::Args &_args_fn22923,const V &_receiver_fn22923,const V &_self_fn22923) mutable ->V{
V _v_22924_o;
_v_22924_o=_args_fn22923[0];
{
V _v_22925_p;
V _v_22926_tumbler;
V _v_22927_drink;
V _v_22928_tint;
V _v_22929_fizz;
_v_22925_p=([&]()->V{V _callee31405=this->_v_20652_optionsOf.get();return j::call(_callee31405,j::Args{this->_literals[478],_v_22924_o,([&]()->V{j::Args _array31404;_array31404.push_back(this->_literals[73]);_array31404.push_back(this->_literals[178]);_array31404.push_back(this->_literals[98]);_array31404.push_back(this->_literals[46]);_array31404.push_back(this->_literals[48]);return j::array(std::move(_array31404));})()});})();
_v_22926_tumbler=([&]()->V{V _callee31407=this->_v_21149_cup.get();return j::call(_callee31407,j::Args{([&]()->V{V _obj31406=j::object();j::put(_obj31406,this->_literals[45],this->_literals[479]);j::put(_obj31406,this->_literals[39],this->_literals[24]);return _obj31406;})()});})();
_v_22927_drink=([&]()->V{V _callee31410=this->_v_21119_inside.get();return j::call(_callee31410,j::Args{_v_22926_tumbler,([&]()->V{V _obj31408=j::object();j::put(_obj31408,this->_literals[73],([&]()->V{V _logical31409=j::get(_v_22925_p,this->_literals[73]);return j::nullish(_logical31409)?this->_literals[480]:_logical31409;})());return _obj31408;})()});})();
_v_22928_tint=([&]()->V{V _callee31411=this->_v_20717_colorsOf.get();return j::call(_callee31411,j::Args{this->_literals[481],j::get(_v_22925_p,this->_literals[98]),this->_literals[182],V(4.0)});})();
_v_22929_fizz=([&]()->V{V _obj31412=j::object();j::put(_obj31412,this->_literals[22],([&]()->V{j::Args _array31413;_array31413.push_back(j::get(j::get(_v_22928_tint,this->_literals[22]),V(3.0)));_array31413.push_back(j::get(j::get(_v_22928_tint,this->_literals[22]),V(2.0)));return j::array(std::move(_array31413));})());j::put(_obj31412,this->_literals[23],([&]()->V{j::Args _array31414;_array31414.push_back(j::get(j::get(_v_22928_tint,this->_literals[23]),V(3.0)));_array31414.push_back(j::get(j::get(_v_22928_tint,this->_literals[23]),V(2.0)));return j::array(std::move(_array31414));})());return _obj31412;})();
return ([&]()->V{V _callee31428=this->_v_22880_picture.get();return j::call(_callee31428,j::Args{([&]()->V{j::Args _array31415;_array31415.push_back(([&]()->V{V _callee31417=this->_v_22725_shape.get();return j::call(_callee31417,j::Args{_v_22926_tumbler,([&]()->V{V _callee31416=this->_v_21669_glass.get();return j::call(_callee31416,j::Args{});})()});})());_array31415.push_back(([&]()->V{V _callee31420=this->_v_22725_shape.get();return j::call(_callee31420,j::Args{_v_22927_drink,([&]()->V{V _callee31419=this->_v_21613_water.get();return j::call(_callee31419,j::Args{([&]()->V{V _obj31418=j::object();j::put(_obj31418,this->_literals[178],j::get(_v_22925_p,this->_literals[178]));j::put(_obj31418,this->_literals[98],j::get(_v_22925_p,this->_literals[98]));return _obj31418;})()});})()});})());_array31415.push_back(([&]()->V{V _callee31424=this->_v_22776_emit.get();return j::call(_callee31424,j::Args{([&]()->V{V _callee31422=this->_v_22368_bubbles.get();return j::call(_callee31422,j::Args{([&]()->V{V _obj31421=j::object();j::put(_obj31421,this->_literals[98],_v_22929_fizz);return _obj31421;})()});})(),([&]()->V{V _obj31423=j::object();j::put(_obj31423,this->_literals[71],_v_22927_drink);return _obj31423;})()});})());return j::array(std::move(_array31415));})(),([&]()->V{V _obj31425=j::object();j::put(_obj31425,this->_literals[1],this->_literals[482]);j::put(_obj31425,this->_literals[483],this->_literals[484]);j::put(_obj31425,this->_literals[46],([&]()->V{V _logical31426=j::get(_v_22925_p,this->_literals[46]);return j::nullish(_logical31426)?V(32.0):_logical31426;})());j::put(_obj31425,this->_literals[48],([&]()->V{V _logical31427=j::get(_v_22925_p,this->_literals[48]);return j::nullish(_logical31427)?V(16.0):_logical31427;})());return _obj31425;})()});})();

}

return V{};
},1);
auto &_import1747=j::module("kit/core");
this->_v_20623_EMPTY=_import1747.exported("EMPTY");
this->_v_20624_INK=_import1747.exported("INK");
this->_v_20625_MAX=_import1747.exported("MAX");
this->_v_20626_NONE=_import1747.exported("NONE");
this->_v_20627_Surface=_import1747.exported("Surface");
this->_v_20628_TAU=_import1747.exported("TAU");
this->_v_20629_and=_import1747.exported("and");
this->_v_20630_clamp=_import1747.exported("clamp");
this->_v_20631_namedColors=_import1747.exported("colorsOf");
this->_v_20632_fail=_import1747.exported("fail");
this->_v_20633_fract=_import1747.exported("fract");
this->_v_20634_hash=_import1747.exported("hash");
this->_v_20635_isHex=_import1747.exported("isHex");
this->_v_20636_lerp=_import1747.exported("lerp");
this->_v_20637_materialColors=_import1747.exported("materialColors");
this->_v_20638_piece=_import1747.exported("piece");
this->_v_20639_ramps=_import1747.exported("ramps");
this->_v_20640_sample=_import1747.exported("sample");
this->_v_20641_shadeChar=_import1747.exported("shadeChar");
this->_v_20642_smoothstep=_import1747.exported("smoothstep");
this->_v_20643_specOf=_import1747.exported("specOf");
this->_v_20644_spread=_import1747.exported("spread");
this->_v_20645_suggest=_import1747.exported("suggest");
this->exports["area"]=this->_v_20875_area;
this->exports["sky"]=this->_v_21022_sky;
this->exports["ground"]=this->_v_21024_ground;
this->exports["union"]=this->_v_21041_union;
this->exports["subtract"]=this->_v_21066_subtract;
this->exports["intersect"]=this->_v_21093_intersect;
this->exports["inside"]=this->_v_21119_inside;
this->exports["cup"]=this->_v_21149_cup;
this->exports["mug"]=this->_v_21165_mug;
this->exports["bottle"]=this->_v_21223_bottle;
this->exports["straw"]=this->_v_21238_straw;
this->exports["box"]=this->_v_21258_box;
this->exports["ball"]=this->_v_21264_ball;
this->exports["blob"]=this->_v_21270_blob;
this->exports["cloud"]=this->_v_21285_cloud;
this->exports["flame"]=this->_v_21298_flame;
this->exports["leaf"]=this->_v_21306_leaf;
this->exports["heart"]=this->_v_21313_heart;
this->exports["star"]=this->_v_21322_star;
this->exports["moon"]=this->_v_21337_moon;
this->exports["fish"]=this->_v_21344_fish;
this->exports["house"]=this->_v_21363_house;
this->exports["lamp"]=this->_v_21401_lamp;
this->exports["cellsOf"]=this->_v_21440_cellsOf;
this->exports["edgeChar"]=this->_v_21540_edgeChar;
this->exports["water"]=this->_v_21613_water;
this->exports["glass"]=this->_v_21669_glass;
this->exports["fire"]=this->_v_21739_fire;
this->exports["smoke"]=this->_v_21797_smoke;
this->exports["metal"]=this->_v_21840_metal;
this->exports["wood"]=this->_v_21872_wood;
this->exports["grass"]=this->_v_21909_grass;
this->exports["sand"]=this->_v_21979_sand;
this->exports["lava"]=this->_v_22006_lava;
this->exports["ice"]=this->_v_22045_ice;
this->exports["neon"]=this->_v_22117_neon;
this->exports["solid"]=this->_v_22151_solid;
this->exports["gradientFill"]=this->_v_22181_gradientFill;
this->exports["patterns"]=this->_v_22209_patterns;
this->exports["pattern"]=this->_v_22210_pattern;
this->exports["ceramic"]=this->_v_22243_ceramic;
this->exports["starfield"]=this->_v_22284_starfield;
this->exports["material"]=this->_v_22307_material;
this->exports["bubbles"]=this->_v_22368_bubbles;
this->exports["steam"]=this->_v_22447_steam;
this->exports["sparks"]=this->_v_22479_sparks;
this->exports["rain"]=this->_v_22510_rain;
this->exports["snow"]=this->_v_22545_snow;
this->exports["emission"]=this->_v_22575_emission;
this->exports["texture"]=this->_v_22628_texture;
this->exports["shape"]=this->_v_22725_shape;
this->exports["emit"]=this->_v_22776_emit;
this->exports["partsPalette"]=this->_v_22829_partsPalette;
this->exports["drawParts"]=this->_v_22857_drawParts;
this->exports["picture"]=this->_v_22880_picture;
this->exports["waterGlass"]=this->_v_22922_waterGlass;
this->_v_20646_isObject.get()=j::function([=](const j::Args &_args_fn20647,const V &_receiver_fn20647,const V &_self_fn20647) mutable ->V{
V _v_20648_v;
_v_20648_v=_args_fn20647[0];
return ([&]()->V{V _logical31429=([&]()->V{V _logical31430=([&]()->V{V _lhs31431=_v_20648_v;V _rhs31432=V::null();return V(!j::equal(_lhs31431,_rhs31432,true));})();return j::truth(_logical31430)?([&]()->V{V _lhs31433=j::unary("typeof",_v_20648_v);V _rhs31434=this->_literals[3];return V(j::equal(_lhs31433,_rhs31434,true));})():_logical31430;})();return j::truth(_logical31429)?j::unary("!",([&]()->V{V _receiver31435=j::builtin("Array");V _method31436=this->_literals[6];V _method=j::get(_receiver31435,_method31436);j::Args _params31437=j::Args{_v_20648_v};return j::call(_method,_params31437,_receiver31435);})()):_logical31429;})();
return V{};
},1);
this->_v_20660_or.get()=j::function([=](const j::Args &_args_fn20661,const V &_receiver_fn20661,const V &_self_fn20661) mutable ->V{
V _v_20662_words;
_v_20662_words=_args_fn20661[0];
return (j::truth(([&]()->V{V _lhs31438=j::get(_v_20662_words,this->_literals[19]);V _rhs31439=V(1.0);return j::binary(">",_lhs31438,_rhs31439);})())?([&]()->V{std::u16string _text31440;_text31440+=u"";_text31440+=j::string(([&]()->V{V _receiver31441=([&]()->V{V _receiver31444=_v_20662_words;V _method31445=this->_literals[441];V _method=j::get(_receiver31444,_method31445);j::Args _params31446=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params31446,_receiver31444);})();V _method31442=this->_literals[9];V _method=j::get(_receiver31441,_method31442);j::Args _params31443=j::Args{this->_literals[7]};return j::call(_method,_params31443,_receiver31441);})());_text31440+=u" or ";_text31440+=j::string(([&]()->V{V _receiver31447=_v_20662_words;V _method31448=this->_literals[39];V _method=j::get(_receiver31447,_method31448);j::Args _params31449=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params31449,_receiver31447);})());_text31440+=u"";return V(std::move(_text31440));})():([&]()->V{V _logical31450=j::get(_v_20662_words,V(0.0));return j::nullish(_logical31450)?this->_literals[12]:_logical31450;})());
return V{};
},1);
this->_v_20716_palettes.get()=this->_v_20637_materialColors.get();
this->_v_20725_ANCHORS.get()=([&]()->V{j::Args _array31451;_array31451.push_back(this->_literals[485]);_array31451.push_back(this->_literals[33]);_array31451.push_back(this->_literals[128]);_array31451.push_back(this->_literals[28]);_array31451.push_back(this->_literals[24]);_array31451.push_back(this->_literals[31]);_array31451.push_back(this->_literals[486]);_array31451.push_back(this->_literals[36]);_array31451.push_back(this->_literals[487]);return j::array(std::move(_array31451));})();
this->_v_20726_SIZES.get()=([&]()->V{V _obj31452=j::object();j::put(_obj31452,this->_literals[488],V(0.2));j::put(_obj31452,this->_literals[106],V(0.35));j::put(_obj31452,this->_literals[85],V(0.55));j::put(_obj31452,this->_literals[82],V(0.75));j::put(_obj31452,this->_literals[479],V(0.9));j::put(_obj31452,this->_literals[489],V(1.0));return _obj31452;})();
this->_v_20727_ASPECT.get()=V(2.0);
this->_v_20728_isArea.get()=j::function([=](const j::Args &_args_fn20729,const V &_receiver_fn20729,const V &_self_fn20729) mutable ->V{
V _v_20730_v;
_v_20730_v=_args_fn20729[0];
return ([&]()->V{V _logical31453=([&]()->V{V _logical31454=([&]()->V{V _callee31455=this->_v_20646_isObject.get();return j::call(_callee31455,j::Args{_v_20730_v});})();return j::truth(_logical31454)?([&]()->V{V _lhs31456=j::get(_v_20730_v,this->_literals[25]);V _rhs31457=this->_literals[38];return V(j::equal(_lhs31456,_rhs31457,true));})():_logical31454;})();return j::truth(_logical31453)?([&]()->V{V _lhs31458=j::unary("typeof",j::get(_v_20730_v,this->_literals[27]));V _rhs31459=this->_literals[0];return V(j::equal(_lhs31458,_rhs31459,true));})():_logical31453;})();
return V{};
},1);
this->_v_20731_isPointOn.get()=j::function([=](const j::Args &_args_fn20732,const V &_receiver_fn20732,const V &_self_fn20732) mutable ->V{
V _v_20733_v;
_v_20733_v=_args_fn20732[0];
return ([&]()->V{V _logical31460=([&]()->V{V _logical31461=([&]()->V{V _callee31462=this->_v_20646_isObject.get();return j::call(_callee31462,j::Args{_v_20733_v});})();return j::truth(_logical31461)?([&]()->V{V _lhs31463=j::get(_v_20733_v,this->_literals[25]);V _rhs31464=this->_literals[26];return V(j::equal(_lhs31463,_rhs31464,true));})():_logical31461;})();return j::truth(_logical31460)?([&]()->V{V _lhs31465=j::unary("typeof",j::get(_v_20733_v,this->_literals[27]));V _rhs31466=this->_literals[0];return V(j::equal(_lhs31465,_rhs31466,true));})():_logical31460;})();
return V{};
},1);
this->_v_20762_PLACE_KEYS.get()=([&]()->V{j::Args _array31467;_array31467.push_back(this->_literals[39]);_array31467.push_back(this->_literals[41]);_array31467.push_back(this->_literals[42]);_array31467.push_back(this->_literals[43]);_array31467.push_back(this->_literals[44]);_array31467.push_back(this->_literals[45]);_array31467.push_back(this->_literals[46]);_array31467.push_back(this->_literals[48]);_array31467.push_back(this->_literals[50]);return j::array(std::move(_array31467));})();
this->_v_20810_placedOf.get()=j::function([=](const j::Args &_args_fn20811,const V &_receiver_fn20811,const V &_self_fn20811) mutable ->V{
V _v_20812_b;
V _v_20813_test;
V _v_20814_more;
_v_20812_b=_args_fn20811[0];
_v_20813_test=_args_fn20811[1];
V _default31468=_args_fn20811[2];if(_default31468.kind==V::Undefined||_default31468.kind==V::Hole)_default31468=([&]()->V{V _obj31469=j::object();return _obj31469;})();
_v_20814_more=_default31468;
return ([&]()->V{V _obj31470=j::object();j::put(_obj31470,this->_literals[20],_v_20813_test);j::put(_obj31470,this->_literals[30],j::get(_v_20812_b,this->_literals[30]));j::put(_obj31470,this->_literals[35],j::get(_v_20812_b,this->_literals[35]));j::put(_obj31470,this->_literals[32],([&]()->V{V _lhs31471=j::get(_v_20812_b,this->_literals[30]);V _rhs31472=j::get(_v_20812_b,this->_literals[53]);return j::binary("+",_lhs31471,_rhs31472);})());j::put(_obj31470,this->_literals[37],([&]()->V{V _lhs31473=j::get(_v_20812_b,this->_literals[35]);V _rhs31474=j::get(_v_20812_b,this->_literals[54]);return j::binary("+",_lhs31473,_rhs31474);})());j::put(_obj31470,this->_literals[55],j::get(_v_20812_b,this->_literals[55]));V _spread31475=_v_20814_more;for(const auto &_key:j::keys(_spread31475))j::put(_obj31470,_key,j::get(_spread31475,_key));return _obj31470;})();
return V{};
},2);
this->_v_20874_FONT.get()=([&]()->V{V _obj31476=j::object();j::put(_obj31476,this->_literals[490],this->_literals[491]);j::put(_obj31476,this->_literals[492],this->_literals[493]);j::put(_obj31476,this->_literals[494],this->_literals[495]);j::put(_obj31476,this->_literals[496],this->_literals[497]);j::put(_obj31476,this->_literals[498],this->_literals[499]);j::put(_obj31476,this->_literals[500],this->_literals[501]);j::put(_obj31476,this->_literals[502],this->_literals[503]);j::put(_obj31476,this->_literals[504],this->_literals[505]);j::put(_obj31476,this->_literals[506],this->_literals[507]);j::put(_obj31476,this->_literals[508],this->_literals[509]);j::put(_obj31476,this->_literals[510],this->_literals[511]);j::put(_obj31476,this->_literals[512],this->_literals[513]);j::put(_obj31476,this->_literals[514],this->_literals[515]);j::put(_obj31476,this->_literals[516],this->_literals[517]);j::put(_obj31476,this->_literals[374],this->_literals[518]);j::put(_obj31476,this->_literals[519],this->_literals[520]);j::put(_obj31476,this->_literals[521],this->_literals[522]);j::put(_obj31476,this->_literals[523],this->_literals[524]);j::put(_obj31476,this->_literals[525],this->_literals[526]);j::put(_obj31476,this->_literals[527],this->_literals[528]);j::put(_obj31476,this->_literals[529],this->_literals[530]);j::put(_obj31476,this->_literals[531],this->_literals[532]);j::put(_obj31476,this->_literals[533],this->_literals[534]);j::put(_obj31476,this->_literals[535],this->_literals[536]);j::put(_obj31476,this->_literals[537],this->_literals[538]);j::put(_obj31476,this->_literals[539],this->_literals[540]);j::put(_obj31476,this->_literals[357],this->_literals[541]);j::put(_obj31476,this->_literals[542],this->_literals[543]);j::put(_obj31476,this->_literals[544],this->_literals[545]);j::put(_obj31476,this->_literals[546],this->_literals[547]);j::put(_obj31476,this->_literals[548],this->_literals[549]);j::put(_obj31476,this->_literals[550],this->_literals[551]);j::put(_obj31476,this->_literals[552],this->_literals[553]);j::put(_obj31476,this->_literals[554],this->_literals[555]);j::put(_obj31476,this->_literals[556],this->_literals[557]);j::put(_obj31476,this->_literals[558],this->_literals[559]);j::put(_obj31476,this->_literals[169],this->_literals[560]);j::put(_obj31476,this->_literals[268],this->_literals[561]);j::put(_obj31476,this->_literals[204],this->_literals[562]);j::put(_obj31476,this->_literals[563],this->_literals[564]);j::put(_obj31476,this->_literals[170],this->_literals[565]);j::put(_obj31476,this->_literals[278],this->_literals[566]);j::put(_obj31476,this->_literals[171],this->_literals[567]);j::put(_obj31476,this->_literals[349],this->_literals[568]);j::put(_obj31476,this->_literals[203],this->_literals[569]);j::put(_obj31476,this->_literals[95],this->_literals[570]);j::put(_obj31476,this->_literals[571],this->_literals[572]);j::put(_obj31476,this->_literals[573],this->_literals[574]);j::put(_obj31476,this->_literals[297],this->_literals[575]);j::put(_obj31476,this->_literals[134],this->_literals[576]);return _obj31476;})();
this->_v_20875_area.get()=([&]()->V{V _obj31477=j::object();j::put(_obj31477,this->_literals[577],j::function([=](const j::Args &_args_fn20876,const V &_receiver_fn20876,const V &_self_fn20876) mutable ->V{
j::Cell _v_20877_x;
j::Cell _v_20878_y;
j::Cell _v_20879_cols;
j::Cell _v_20880_rows;
_v_20877_x.get()=_args_fn20876[0];
_v_20878_y.get()=_args_fn20876[1];
_v_20879_cols.get()=_args_fn20876[2];
_v_20880_rows.get()=_args_fn20876[3];
{
(void)(([&]()->V{V _callee31480=this->_v_21015_numbers.get();return j::call(_callee31480,j::Args{this->_literals[578],([&]()->V{V _obj31478=j::object();j::put(_obj31478,this->_literals[43],_v_20877_x.get());j::put(_obj31478,this->_literals[44],_v_20878_y.get());j::put(_obj31478,this->_literals[46],_v_20879_cols.get());j::put(_obj31478,this->_literals[48],_v_20880_rows.get());return _obj31478;})(),([&]()->V{j::Args _array31479;_array31479.push_back(this->_literals[46]);_array31479.push_back(this->_literals[48]);return j::array(std::move(_array31479));})()});})());
return ([&]()->V{V _callee31507=this->_v_20746_makeArea.get();return j::call(_callee31507,j::Args{j::function([=](const j::Args &_args_fn20881,const V &_receiver_fn20881,const V &_self_fn20881) mutable ->V{
return ([&]()->V{V _obj31481=j::object();j::put(_obj31481,this->_literals[20],j::function([=](const j::Args &_args_fn20882,const V &_receiver_fn20882,const V &_self_fn20882) mutable ->V{
V _v_20883_px;
V _v_20884_py;
_v_20883_px=_args_fn20882[0];
_v_20884_py=_args_fn20882[1];
return ([&]()->V{V _logical31482=([&]()->V{V _logical31483=([&]()->V{V _logical31484=([&]()->V{V _lhs31485=_v_20883_px;V _rhs31486=_v_20877_x.get();return j::binary(">=",_lhs31485,_rhs31486);})();return j::truth(_logical31484)?([&]()->V{V _lhs31487=_v_20883_px;V _rhs31488=([&]()->V{V _lhs31489=_v_20877_x.get();V _rhs31490=_v_20879_cols.get();return j::binary("+",_lhs31489,_rhs31490);})();return j::binary("<",_lhs31487,_rhs31488);})():_logical31484;})();return j::truth(_logical31483)?([&]()->V{V _lhs31491=_v_20884_py;V _rhs31492=_v_20878_y.get();return j::binary(">=",_lhs31491,_rhs31492);})():_logical31483;})();return j::truth(_logical31482)?([&]()->V{V _lhs31493=_v_20884_py;V _rhs31494=([&]()->V{V _lhs31495=_v_20878_y.get();V _rhs31496=_v_20880_rows.get();return j::binary("+",_lhs31495,_rhs31496);})();return j::binary("<",_lhs31493,_rhs31494);})():_logical31482;})();
return V{};
},2));j::put(_obj31481,this->_literals[30],_v_20877_x.get());j::put(_obj31481,this->_literals[35],_v_20878_y.get());j::put(_obj31481,this->_literals[32],([&]()->V{V _lhs31497=_v_20877_x.get();V _rhs31498=_v_20879_cols.get();return j::binary("+",_lhs31497,_rhs31498);})());j::put(_obj31481,this->_literals[37],([&]()->V{V _lhs31499=_v_20878_y.get();V _rhs31500=_v_20880_rows.get();return j::binary("+",_lhs31499,_rhs31500);})());return _obj31481;})();
return V{};
},0),([&]()->V{V _obj31501=j::object();j::put(_obj31501,this->_literals[460],([&]()->V{V _obj31502=j::object();j::put(_obj31502,this->_literals[46],([&]()->V{V _lhs31503=_v_20877_x.get();V _rhs31504=_v_20879_cols.get();return j::binary("+",_lhs31503,_rhs31504);})());j::put(_obj31502,this->_literals[48],([&]()->V{V _lhs31505=_v_20878_y.get();V _rhs31506=_v_20880_rows.get();return j::binary("+",_lhs31505,_rhs31506);})());return _obj31502;})());return _obj31501;})()});})();

}

return V{};
},4));j::put(_obj31477,this->_literals[579],j::function([=](const j::Args &_args_fn20885,const V &_receiver_fn20885,const V &_self_fn20885) mutable ->V{
j::Cell _v_20886_x;
j::Cell _v_20887_y;
j::Cell _v_20888_cols;
j::Cell _v_20889_rows;
V _v_20890_radius;
_v_20886_x.get()=_args_fn20885[0];
_v_20887_y.get()=_args_fn20885[1];
_v_20888_cols.get()=_args_fn20885[2];
_v_20889_rows.get()=_args_fn20885[3];
V _default31508=_args_fn20885[4];if(_default31508.kind==V::Undefined||_default31508.kind==V::Hole)_default31508=V(1.0);
_v_20890_radius=_default31508;
{
j::Cell _v_20891_ry;
j::Cell _v_20892_rx;
(void)(([&]()->V{V _callee31511=this->_v_21015_numbers.get();return j::call(_callee31511,j::Args{this->_literals[580],([&]()->V{V _obj31509=j::object();j::put(_obj31509,this->_literals[43],_v_20886_x.get());j::put(_obj31509,this->_literals[44],_v_20887_y.get());j::put(_obj31509,this->_literals[46],_v_20888_cols.get());j::put(_obj31509,this->_literals[48],_v_20889_rows.get());j::put(_obj31509,this->_literals[581],_v_20890_radius);return _obj31509;})(),([&]()->V{j::Args _array31510;_array31510.push_back(this->_literals[46]);_array31510.push_back(this->_literals[48]);return j::array(std::move(_array31510));})()});})());
_v_20891_ry.get()=([&]()->V{V _receiver31516=j::builtin("Math");V _method31517=this->_literals[52];V _method=j::get(_receiver31516,_method31517);j::Args _params31518=j::Args{_v_20890_radius,([&]()->V{V _lhs31512=_v_20889_rows.get();V _rhs31513=V(2.0);return V(j::number(_lhs31512)/j::number(_rhs31513));})()};return j::call(_method,_params31518,_receiver31516);})();
_v_20892_rx.get()=([&]()->V{V _receiver31525=j::builtin("Math");V _method31526=this->_literals[52];V _method=j::get(_receiver31525,_method31526);j::Args _params31527=j::Args{([&]()->V{V _lhs31519=_v_20890_radius;V _rhs31520=this->_v_20727_ASPECT.get();return V(j::number(_lhs31519)*j::number(_rhs31520));})(),([&]()->V{V _lhs31521=_v_20888_cols.get();V _rhs31522=V(2.0);return V(j::number(_lhs31521)/j::number(_rhs31522));})()};return j::call(_method,_params31527,_receiver31525);})();
return ([&]()->V{V _callee31608=this->_v_20746_makeArea.get();return j::call(_callee31608,j::Args{j::function([=](const j::Args &_args_fn20893,const V &_receiver_fn20893,const V &_self_fn20893) mutable ->V{
return ([&]()->V{V _obj31528=j::object();j::put(_obj31528,this->_literals[20],j::function([=](const j::Args &_args_fn20894,const V &_receiver_fn20894,const V &_self_fn20894) mutable ->V{
V _v_20895_px;
V _v_20896_py;
_v_20895_px=_args_fn20894[0];
_v_20896_py=_args_fn20894[1];
{
V _v_20897_dx;
V _v_20898_dy;
if(j::truth(([&]()->V{V _logical31529=([&]()->V{V _logical31530=([&]()->V{V _logical31531=([&]()->V{V _lhs31532=_v_20895_px;V _rhs31533=_v_20886_x.get();return j::binary("<",_lhs31532,_rhs31533);})();return !j::truth(_logical31531)?([&]()->V{V _lhs31534=_v_20895_px;V _rhs31535=([&]()->V{V _lhs31536=_v_20886_x.get();V _rhs31537=_v_20888_cols.get();return j::binary("+",_lhs31536,_rhs31537);})();return j::binary(">=",_lhs31534,_rhs31535);})():_logical31531;})();return !j::truth(_logical31530)?([&]()->V{V _lhs31538=_v_20896_py;V _rhs31539=_v_20887_y.get();return j::binary("<",_lhs31538,_rhs31539);})():_logical31530;})();return !j::truth(_logical31529)?([&]()->V{V _lhs31540=_v_20896_py;V _rhs31541=([&]()->V{V _lhs31542=_v_20887_y.get();V _rhs31543=_v_20889_rows.get();return j::binary("+",_lhs31542,_rhs31543);})();return j::binary(">=",_lhs31540,_rhs31541);})():_logical31529;})())){return V(false);
}
_v_20897_dx=([&]()->V{V _receiver31561=j::builtin("Math");V _method31562=this->_literals[51];V _method=j::get(_receiver31561,_method31562);j::Args _params31563=j::Args{V(0.0),([&]()->V{V _receiver31556=j::builtin("Math");V _method31557=this->_literals[51];V _method=j::get(_receiver31556,_method31557);j::Args _params31558=j::Args{([&]()->V{V _lhs31544=([&]()->V{V _lhs31546=_v_20886_x.get();V _rhs31547=_v_20892_rx.get();return j::binary("+",_lhs31546,_rhs31547);})();V _rhs31545=_v_20895_px;return V(j::number(_lhs31544)-j::number(_rhs31545));})(),([&]()->V{V _lhs31548=_v_20895_px;V _rhs31549=([&]()->V{V _lhs31550=([&]()->V{V _lhs31552=_v_20886_x.get();V _rhs31553=_v_20888_cols.get();return j::binary("+",_lhs31552,_rhs31553);})();V _rhs31551=_v_20892_rx.get();return V(j::number(_lhs31550)-j::number(_rhs31551));})();return V(j::number(_lhs31548)-j::number(_rhs31549));})()};return j::call(_method,_params31558,_receiver31556);})()};return j::call(_method,_params31563,_receiver31561);})();
_v_20898_dy=([&]()->V{V _receiver31581=j::builtin("Math");V _method31582=this->_literals[51];V _method=j::get(_receiver31581,_method31582);j::Args _params31583=j::Args{V(0.0),([&]()->V{V _receiver31576=j::builtin("Math");V _method31577=this->_literals[51];V _method=j::get(_receiver31576,_method31577);j::Args _params31578=j::Args{([&]()->V{V _lhs31564=([&]()->V{V _lhs31566=_v_20887_y.get();V _rhs31567=_v_20891_ry.get();return j::binary("+",_lhs31566,_rhs31567);})();V _rhs31565=_v_20896_py;return V(j::number(_lhs31564)-j::number(_rhs31565));})(),([&]()->V{V _lhs31568=_v_20896_py;V _rhs31569=([&]()->V{V _lhs31570=([&]()->V{V _lhs31572=_v_20887_y.get();V _rhs31573=_v_20889_rows.get();return j::binary("+",_lhs31572,_rhs31573);})();V _rhs31571=_v_20891_ry.get();return V(j::number(_lhs31570)-j::number(_rhs31571));})();return V(j::number(_lhs31568)-j::number(_rhs31569));})()};return j::call(_method,_params31578,_receiver31576);})()};return j::call(_method,_params31583,_receiver31581);})();
return ([&]()->V{V _logical31584=([&]()->V{V _logical31585=j::unary("!",_v_20892_rx.get());return !j::truth(_logical31585)?j::unary("!",_v_20891_ry.get()):_logical31585;})();return !j::truth(_logical31584)?([&]()->V{V _lhs31586=([&]()->V{V _lhs31588=([&]()->V{V _lhs31590=([&]()->V{V _lhs31592=_v_20897_dx;V _rhs31593=_v_20892_rx.get();return V(j::number(_lhs31592)/j::number(_rhs31593));})();V _rhs31591=V(2.0);return V(std::pow(j::number(_lhs31590),j::number(_rhs31591)));})();V _rhs31589=([&]()->V{V _lhs31594=([&]()->V{V _lhs31596=_v_20898_dy;V _rhs31597=_v_20891_ry.get();return V(j::number(_lhs31596)/j::number(_rhs31597));})();V _rhs31595=V(2.0);return V(std::pow(j::number(_lhs31594),j::number(_rhs31595)));})();return j::binary("+",_lhs31588,_rhs31589);})();V _rhs31587=V(1.0);return j::binary("<=",_lhs31586,_rhs31587);})():_logical31584;})();

}

return V{};
},2));j::put(_obj31528,this->_literals[30],_v_20886_x.get());j::put(_obj31528,this->_literals[35],_v_20887_y.get());j::put(_obj31528,this->_literals[32],([&]()->V{V _lhs31598=_v_20886_x.get();V _rhs31599=_v_20888_cols.get();return j::binary("+",_lhs31598,_rhs31599);})());j::put(_obj31528,this->_literals[37],([&]()->V{V _lhs31600=_v_20887_y.get();V _rhs31601=_v_20889_rows.get();return j::binary("+",_lhs31600,_rhs31601);})());return _obj31528;})();
return V{};
},0),([&]()->V{V _obj31602=j::object();j::put(_obj31602,this->_literals[460],([&]()->V{V _obj31603=j::object();j::put(_obj31603,this->_literals[46],([&]()->V{V _lhs31604=_v_20886_x.get();V _rhs31605=_v_20888_cols.get();return j::binary("+",_lhs31604,_rhs31605);})());j::put(_obj31603,this->_literals[48],([&]()->V{V _lhs31606=_v_20887_y.get();V _rhs31607=_v_20889_rows.get();return j::binary("+",_lhs31606,_rhs31607);})());return _obj31603;})());return _obj31602;})()});})();

}

return V{};
},4));j::put(_obj31477,this->_literals[582],j::function([=](const j::Args &_args_fn20899,const V &_receiver_fn20899,const V &_self_fn20899) mutable ->V{
j::Cell _v_20900_cx;
j::Cell _v_20901_cy;
j::Cell _v_20902_rx;
j::Cell _v_20903_ry;
_v_20900_cx.get()=_args_fn20899[0];
_v_20901_cy.get()=_args_fn20899[1];
_v_20902_rx.get()=_args_fn20899[2];
_v_20903_ry.get()=_args_fn20899[3];
{
(void)(([&]()->V{V _callee31611=this->_v_21015_numbers.get();return j::call(_callee31611,j::Args{this->_literals[583],([&]()->V{V _obj31609=j::object();j::put(_obj31609,this->_literals[584],_v_20900_cx.get());j::put(_obj31609,this->_literals[585],_v_20901_cy.get());j::put(_obj31609,this->_literals[586],_v_20902_rx.get());j::put(_obj31609,this->_literals[587],_v_20903_ry.get());return _obj31609;})(),([&]()->V{j::Args _array31610;_array31610.push_back(this->_literals[586]);_array31610.push_back(this->_literals[587]);return j::array(std::move(_array31610));})()});})());
return ([&]()->V{V _callee31643=this->_v_20746_makeArea.get();return j::call(_callee31643,j::Args{j::function([=](const j::Args &_args_fn20904,const V &_receiver_fn20904,const V &_self_fn20904) mutable ->V{
return ([&]()->V{V _obj31612=j::object();j::put(_obj31612,this->_literals[20],j::function([=](const j::Args &_args_fn20905,const V &_receiver_fn20905,const V &_self_fn20905) mutable ->V{
V _v_20906_px;
V _v_20907_py;
_v_20906_px=_args_fn20905[0];
_v_20907_py=_args_fn20905[1];
return ([&]()->V{V _lhs31613=([&]()->V{V _lhs31615=([&]()->V{V _lhs31617=([&]()->V{V _lhs31619=([&]()->V{V _lhs31621=_v_20906_px;V _rhs31622=_v_20900_cx.get();return V(j::number(_lhs31621)-j::number(_rhs31622));})();V _rhs31620=_v_20902_rx.get();return V(j::number(_lhs31619)/j::number(_rhs31620));})();V _rhs31618=V(2.0);return V(std::pow(j::number(_lhs31617),j::number(_rhs31618)));})();V _rhs31616=([&]()->V{V _lhs31623=([&]()->V{V _lhs31625=([&]()->V{V _lhs31627=_v_20907_py;V _rhs31628=_v_20901_cy.get();return V(j::number(_lhs31627)-j::number(_rhs31628));})();V _rhs31626=_v_20903_ry.get();return V(j::number(_lhs31625)/j::number(_rhs31626));})();V _rhs31624=V(2.0);return V(std::pow(j::number(_lhs31623),j::number(_rhs31624)));})();return j::binary("+",_lhs31615,_rhs31616);})();V _rhs31614=V(1.0);return j::binary("<=",_lhs31613,_rhs31614);})();
return V{};
},2));j::put(_obj31612,this->_literals[30],([&]()->V{V _lhs31629=_v_20900_cx.get();V _rhs31630=_v_20902_rx.get();return V(j::number(_lhs31629)-j::number(_rhs31630));})());j::put(_obj31612,this->_literals[35],([&]()->V{V _lhs31631=_v_20901_cy.get();V _rhs31632=_v_20903_ry.get();return V(j::number(_lhs31631)-j::number(_rhs31632));})());j::put(_obj31612,this->_literals[32],([&]()->V{V _lhs31633=_v_20900_cx.get();V _rhs31634=_v_20902_rx.get();return j::binary("+",_lhs31633,_rhs31634);})());j::put(_obj31612,this->_literals[37],([&]()->V{V _lhs31635=_v_20901_cy.get();V _rhs31636=_v_20903_ry.get();return j::binary("+",_lhs31635,_rhs31636);})());return _obj31612;})();
return V{};
},0),([&]()->V{V _obj31637=j::object();j::put(_obj31637,this->_literals[460],([&]()->V{V _obj31638=j::object();j::put(_obj31638,this->_literals[46],([&]()->V{V _lhs31639=_v_20900_cx.get();V _rhs31640=_v_20902_rx.get();return j::binary("+",_lhs31639,_rhs31640);})());j::put(_obj31638,this->_literals[48],([&]()->V{V _lhs31641=_v_20901_cy.get();V _rhs31642=_v_20903_ry.get();return j::binary("+",_lhs31641,_rhs31642);})());return _obj31638;})());return _obj31637;})()});})();

}

return V{};
},4));j::put(_obj31477,this->_literals[588],j::function([=](const j::Args &_args_fn20908,const V &_receiver_fn20908,const V &_self_fn20908) mutable ->V{
V _v_20909_cx;
V _v_20910_cy;
V _v_20911_r;
_v_20909_cx=_args_fn20908[0];
_v_20910_cy=_args_fn20908[1];
_v_20911_r=_args_fn20908[2];
{
(void)(([&]()->V{V _callee31646=this->_v_21015_numbers.get();return j::call(_callee31646,j::Args{this->_literals[589],([&]()->V{V _obj31644=j::object();j::put(_obj31644,this->_literals[584],_v_20909_cx);j::put(_obj31644,this->_literals[585],_v_20910_cy);j::put(_obj31644,this->_literals[287],_v_20911_r);return _obj31644;})(),([&]()->V{j::Args _array31645;_array31645.push_back(this->_literals[287]);return j::array(std::move(_array31645));})()});})());
return ([&]()->V{V _receiver31649=this->_v_20875_area.get();V _method31650=this->_literals[582];V _method=j::get(_receiver31649,_method31650);j::Args _params31651=j::Args{_v_20909_cx,_v_20910_cy,_v_20911_r,([&]()->V{V _lhs31647=_v_20911_r;V _rhs31648=this->_v_20727_ASPECT.get();return V(j::number(_lhs31647)/j::number(_rhs31648));})()};return j::call(_method,_params31651,_receiver31649);})();

}

return V{};
},3));j::put(_obj31477,this->_literals[590],j::function([=](const j::Args &_args_fn20912,const V &_receiver_fn20912,const V &_self_fn20912) mutable ->V{
V _v_20913_points;
_v_20913_points=_args_fn20912[0];
{
j::Cell _v_20914_pts;
V _v_20917_xs;
V _v_20920_ys;
j::Cell _v_20923_box;
_v_20914_pts.get()=([&]()->V{V _receiver31653=([&]()->V{V _callee31656=this->_v_20864_pointsOf.get();return j::call(_callee31656,j::Args{this->_literals[591],_v_20913_points,V(3.0)});})();V _method31654=this->_literals[8];V _method=j::get(_receiver31653,_method31654);j::Args _params31655=j::Args{j::function([=](const j::Args &_args_fn20915,const V &_receiver_fn20915,const V &_self_fn20915) mutable ->V{
V _v_20916_p;
_v_20916_p=_args_fn20915[0];
return ([&]()->V{j::Args _array31652;_array31652.push_back(j::get(_v_20916_p,V(0.0)));_array31652.push_back(j::get(_v_20916_p,V(1.0)));return j::array(std::move(_array31652));})();
return V{};
},1)};return j::call(_method,_params31655,_receiver31653);})();
_v_20917_xs=([&]()->V{V _receiver31657=_v_20914_pts.get();V _method31658=this->_literals[8];V _method=j::get(_receiver31657,_method31658);j::Args _params31659=j::Args{j::function([=](const j::Args &_args_fn20918,const V &_receiver_fn20918,const V &_self_fn20918) mutable ->V{
V _v_20919_p;
_v_20919_p=_args_fn20918[0];
return j::get(_v_20919_p,V(0.0));
return V{};
},1)};return j::call(_method,_params31659,_receiver31657);})();
_v_20920_ys=([&]()->V{V _receiver31660=_v_20914_pts.get();V _method31661=this->_literals[8];V _method=j::get(_receiver31660,_method31661);j::Args _params31662=j::Args{j::function([=](const j::Args &_args_fn20921,const V &_receiver_fn20921,const V &_self_fn20921) mutable ->V{
V _v_20922_p;
_v_20922_p=_args_fn20921[0];
return j::get(_v_20922_p,V(1.0));
return V{};
},1)};return j::call(_method,_params31662,_receiver31660);})();
_v_20923_box.get()=([&]()->V{V _obj31663=j::object();j::put(_obj31663,this->_literals[30],([&]()->V{V _receiver31665=j::builtin("Math");V _method31666=this->_literals[52];V _method=j::get(_receiver31665,_method31666);j::Args _params31667=([&](){j::Args _args31664;for(const auto &_v:j::elements(_v_20917_xs))_args31664.push_back(_v);return _args31664;})();return j::call(_method,_params31667,_receiver31665);})());j::put(_obj31663,this->_literals[35],([&]()->V{V _receiver31669=j::builtin("Math");V _method31670=this->_literals[52];V _method=j::get(_receiver31669,_method31670);j::Args _params31671=([&](){j::Args _args31668;for(const auto &_v:j::elements(_v_20920_ys))_args31668.push_back(_v);return _args31668;})();return j::call(_method,_params31671,_receiver31669);})());j::put(_obj31663,this->_literals[32],([&]()->V{V _receiver31673=j::builtin("Math");V _method31674=this->_literals[51];V _method=j::get(_receiver31673,_method31674);j::Args _params31675=([&](){j::Args _args31672;for(const auto &_v:j::elements(_v_20917_xs))_args31672.push_back(_v);return _args31672;})();return j::call(_method,_params31675,_receiver31673);})());j::put(_obj31663,this->_literals[37],([&]()->V{V _receiver31677=j::builtin("Math");V _method31678=this->_literals[51];V _method=j::get(_receiver31677,_method31678);j::Args _params31679=([&](){j::Args _args31676;for(const auto &_v:j::elements(_v_20920_ys))_args31676.push_back(_v);return _args31676;})();return j::call(_method,_params31679,_receiver31677);})());return _obj31663;})();
return ([&]()->V{V _callee31685=this->_v_20746_makeArea.get();return j::call(_callee31685,j::Args{j::function([=](const j::Args &_args_fn20924,const V &_receiver_fn20924,const V &_self_fn20924) mutable ->V{
return ([&]()->V{V _obj31680=j::object();j::put(_obj31680,this->_literals[20],j::function([=](const j::Args &_args_fn20925,const V &_receiver_fn20925,const V &_self_fn20925) mutable ->V{
V _v_20926_px;
V _v_20927_py;
_v_20926_px=_args_fn20925[0];
_v_20927_py=_args_fn20925[1];
return ([&]()->V{V _callee31681=this->_v_20837_inPolygon.get();return j::call(_callee31681,j::Args{_v_20914_pts.get(),_v_20926_px,_v_20927_py});})();
return V{};
},2));V _spread31682=_v_20923_box.get();for(const auto &_key:j::keys(_spread31682))j::put(_obj31680,_key,j::get(_spread31682,_key));return _obj31680;})();
return V{};
},0),([&]()->V{V _obj31683=j::object();j::put(_obj31683,this->_literals[460],([&]()->V{V _obj31684=j::object();j::put(_obj31684,this->_literals[46],j::get(_v_20923_box.get(),this->_literals[32]));j::put(_obj31684,this->_literals[48],j::get(_v_20923_box.get(),this->_literals[37]));return _obj31684;})());return _obj31683;})()});})();

}

return V{};
},1));j::put(_obj31477,this->_literals[592],j::function([=](const j::Args &_args_fn20928,const V &_receiver_fn20928,const V &_self_fn20928) mutable ->V{
V _v_20929_points;
V _v_20930_width;
_v_20929_points=_args_fn20928[0];
V _default31686=_args_fn20928[1];if(_default31686.kind==V::Undefined||_default31686.kind==V::Hole)_default31686=V(1.0);
_v_20930_width=_default31686;
{
j::Cell _v_20931_pts;
j::Cell _v_20934_r;
V _v_20935_xs;
V _v_20938_ys;
j::Cell _v_20941_box;
_v_20931_pts.get()=([&]()->V{V _receiver31688=([&]()->V{V _callee31691=this->_v_20864_pointsOf.get();return j::call(_callee31691,j::Args{this->_literals[593],_v_20929_points,V(2.0)});})();V _method31689=this->_literals[8];V _method=j::get(_receiver31688,_method31689);j::Args _params31690=j::Args{j::function([=](const j::Args &_args_fn20932,const V &_receiver_fn20932,const V &_self_fn20932) mutable ->V{
V _v_20933_p;
_v_20933_p=_args_fn20932[0];
return ([&]()->V{j::Args _array31687;_array31687.push_back(j::get(_v_20933_p,V(0.0)));_array31687.push_back(j::get(_v_20933_p,V(1.0)));return j::array(std::move(_array31687));})();
return V{};
},1)};return j::call(_method,_params31690,_receiver31688);})();
(void)(([&]()->V{V _callee31694=this->_v_21015_numbers.get();return j::call(_callee31694,j::Args{this->_literals[593],([&]()->V{V _obj31692=j::object();j::put(_obj31692,this->_literals[594],_v_20930_width);return _obj31692;})(),([&]()->V{j::Args _array31693;_array31693.push_back(this->_literals[594]);return j::array(std::move(_array31693));})()});})());
_v_20934_r.get()=([&]()->V{V _lhs31695=_v_20930_width;V _rhs31696=V(2.0);return V(j::number(_lhs31695)/j::number(_rhs31696));})();
_v_20935_xs=([&]()->V{V _receiver31697=_v_20931_pts.get();V _method31698=this->_literals[8];V _method=j::get(_receiver31697,_method31698);j::Args _params31699=j::Args{j::function([=](const j::Args &_args_fn20936,const V &_receiver_fn20936,const V &_self_fn20936) mutable ->V{
V _v_20937_p;
_v_20937_p=_args_fn20936[0];
return j::get(_v_20937_p,V(0.0));
return V{};
},1)};return j::call(_method,_params31699,_receiver31697);})();
_v_20938_ys=([&]()->V{V _receiver31700=_v_20931_pts.get();V _method31701=this->_literals[8];V _method=j::get(_receiver31700,_method31701);j::Args _params31702=j::Args{j::function([=](const j::Args &_args_fn20939,const V &_receiver_fn20939,const V &_self_fn20939) mutable ->V{
V _v_20940_p;
_v_20940_p=_args_fn20939[0];
return j::get(_v_20940_p,V(1.0));
return V{};
},1)};return j::call(_method,_params31702,_receiver31700);})();
_v_20941_box.get()=([&]()->V{V _obj31703=j::object();j::put(_obj31703,this->_literals[30],([&]()->V{V _lhs31704=([&]()->V{V _receiver31707=j::builtin("Math");V _method31708=this->_literals[52];V _method=j::get(_receiver31707,_method31708);j::Args _params31709=([&](){j::Args _args31706;for(const auto &_v:j::elements(_v_20935_xs))_args31706.push_back(_v);return _args31706;})();return j::call(_method,_params31709,_receiver31707);})();V _rhs31705=_v_20934_r.get();return V(j::number(_lhs31704)-j::number(_rhs31705));})());j::put(_obj31703,this->_literals[35],([&]()->V{V _lhs31710=([&]()->V{V _receiver31713=j::builtin("Math");V _method31714=this->_literals[52];V _method=j::get(_receiver31713,_method31714);j::Args _params31715=([&](){j::Args _args31712;for(const auto &_v:j::elements(_v_20938_ys))_args31712.push_back(_v);return _args31712;})();return j::call(_method,_params31715,_receiver31713);})();V _rhs31711=([&]()->V{V _lhs31716=_v_20934_r.get();V _rhs31717=this->_v_20727_ASPECT.get();return V(j::number(_lhs31716)/j::number(_rhs31717));})();return V(j::number(_lhs31710)-j::number(_rhs31711));})());j::put(_obj31703,this->_literals[32],([&]()->V{V _lhs31718=([&]()->V{V _receiver31721=j::builtin("Math");V _method31722=this->_literals[51];V _method=j::get(_receiver31721,_method31722);j::Args _params31723=([&](){j::Args _args31720;for(const auto &_v:j::elements(_v_20935_xs))_args31720.push_back(_v);return _args31720;})();return j::call(_method,_params31723,_receiver31721);})();V _rhs31719=_v_20934_r.get();return j::binary("+",_lhs31718,_rhs31719);})());j::put(_obj31703,this->_literals[37],([&]()->V{V _lhs31724=([&]()->V{V _receiver31727=j::builtin("Math");V _method31728=this->_literals[51];V _method=j::get(_receiver31727,_method31728);j::Args _params31729=([&](){j::Args _args31726;for(const auto &_v:j::elements(_v_20938_ys))_args31726.push_back(_v);return _args31726;})();return j::call(_method,_params31729,_receiver31727);})();V _rhs31725=([&]()->V{V _lhs31730=_v_20934_r.get();V _rhs31731=this->_v_20727_ASPECT.get();return V(j::number(_lhs31730)/j::number(_rhs31731));})();return j::binary("+",_lhs31724,_rhs31725);})());return _obj31703;})();
return ([&]()->V{V _callee31743=this->_v_20746_makeArea.get();return j::call(_callee31743,j::Args{j::function([=](const j::Args &_args_fn20942,const V &_receiver_fn20942,const V &_self_fn20942) mutable ->V{
return ([&]()->V{V _obj31732=j::object();j::put(_obj31732,this->_literals[20],j::function([=](const j::Args &_args_fn20943,const V &_receiver_fn20943,const V &_self_fn20943) mutable ->V{
V _v_20944_px;
V _v_20945_py;
_v_20944_px=_args_fn20943[0];
_v_20945_py=_args_fn20943[1];
{
{V _v_20946_i;
_v_20946_i=V(1.0);
for(;j::truth(([&]()->V{V _lhs31733=_v_20946_i;V _rhs31734=j::get(_v_20931_pts.get(),this->_literals[19]);return j::binary("<",_lhs31733,_rhs31734);})());(void)(j::increment(_v_20946_i,1,false))){if(j::truth(([&]()->V{V _lhs31735=([&]()->V{V _callee31739=this->_v_20850_segmentDistance.get();return j::call(_callee31739,j::Args{_v_20944_px,_v_20945_py,j::get(_v_20931_pts.get(),([&]()->V{V _lhs31737=_v_20946_i;V _rhs31738=V(1.0);return V(j::number(_lhs31737)-j::number(_rhs31738));})()),j::get(_v_20931_pts.get(),_v_20946_i)});})();V _rhs31736=_v_20934_r.get();return j::binary("<=",_lhs31735,_rhs31736);})())){return V(true);
}
}}
return V(false);

}

return V{};
},2));V _spread31740=_v_20941_box.get();for(const auto &_key:j::keys(_spread31740))j::put(_obj31732,_key,j::get(_spread31740,_key));return _obj31732;})();
return V{};
},0),([&]()->V{V _obj31741=j::object();j::put(_obj31741,this->_literals[460],([&]()->V{V _obj31742=j::object();j::put(_obj31742,this->_literals[46],j::get(_v_20941_box.get(),this->_literals[32]));j::put(_obj31742,this->_literals[48],j::get(_v_20941_box.get(),this->_literals[37]));return _obj31742;})());return _obj31741;})()});})();

}

return V{};
},1));j::put(_obj31477,this->_literals[595],j::function([=](const j::Args &_args_fn20947,const V &_receiver_fn20947,const V &_self_fn20947) mutable ->V{
V _v_20948_str;
V _v_20949_o;
_v_20948_str=_args_fn20947[0];
_v_20949_o=_args_fn20947[1];
{
j::Cell _v_20950_p;
j::Cell _v_20951_big;
j::Cell _v_20952_grid;
j::Cell _v_20966_w;
j::Cell _v_20969_h;
if(j::truth(([&]()->V{V _logical31744=([&]()->V{V _logical31745=([&]()->V{V _lhs31746=j::unary("typeof",_v_20948_str);V _rhs31747=this->_literals[4];return V(!j::equal(_lhs31746,_rhs31747,true));})();return !j::truth(_logical31745)?j::unary("!",j::get(_v_20948_str,this->_literals[19])):_logical31745;})();return !j::truth(_logical31744)?([&]()->V{V _receiver31748=j::regexp(u"[\\u0000-\\u0009\\u000b-\\u001f\\u007f-\\u009f\\ud800-\\udfff]","");V _method31749=this->_literals[20];V _method=j::get(_receiver31748,_method31749);j::Args _params31750=j::Args{_v_20948_str};return j::call(_method,_params31750,_receiver31748);})():_logical31744;})())){(void)(([&]()->V{V _callee31753=this->_v_20632_fail.get();return j::call(_callee31753,j::Args{([&]()->V{std::u16string _text31751;_text31751+=u"area.text takes a string of printable characters, not ";_text31751+=j::string(([&]()->V{V _callee31752=this->_v_20649_show.get();return j::call(_callee31752,j::Args{_v_20948_str});})());_text31751+=u"";return V(std::move(_text31751));})()});})());
}
_v_20950_p.get()=([&]()->V{V _callee31755=this->_v_20652_optionsOf.get();return j::call(_callee31755,j::Args{this->_literals[596],_v_20949_o,([&]()->V{j::Args _array31754;for(const auto &_value:j::elements(this->_v_20762_PLACE_KEYS.get()))_array31754.push_back(_value);_array31754.push_back(this->_literals[597]);return j::array(std::move(_array31754));})()});})();
(void)(([&]()->V{V _callee31756=this->_v_20763_checkPlace.get();return j::call(_callee31756,j::Args{this->_literals[598],_v_20950_p.get()});})());
_v_20951_big.get()=(j::truth(([&]()->V{V _lhs31757=j::get(_v_20950_p.get(),this->_literals[597]);V _rhs31758=V(true);return V(j::equal(_lhs31757,_rhs31758,true));})())?V(1.0):(j::truth(([&]()->V{V _logical31759=([&]()->V{V _lhs31760=j::get(_v_20950_p.get(),this->_literals[597]);V _rhs31761=V(false);return V(j::equal(_lhs31760,_rhs31761,true));})();return !j::truth(_logical31759)?([&]()->V{V _lhs31762=j::get(_v_20950_p.get(),this->_literals[597]);V _rhs31763=j::builtin("undefined");return V(j::equal(_lhs31762,_rhs31763,true));})():_logical31759;})())?V(0.0):([&]()->V{V _callee31764=this->_v_20663_numberOf.get();return j::call(_callee31764,j::Args{this->_literals[599],j::get(_v_20950_p.get(),this->_literals[597]),V(1.0),V(1.0),V(8.0)});})()));
if(j::truth(([&]()->V{V _logical31765=_v_20951_big.get();return j::truth(_logical31765)?j::unary("!",([&]()->V{V _receiver31766=j::builtin("Number");V _method31767=this->_literals[18];V _method=j::get(_receiver31766,_method31767);j::Args _params31768=j::Args{_v_20951_big.get()};return j::call(_method,_params31768,_receiver31766);})()):_logical31765;})())){(void)(([&]()->V{V _callee31770=this->_v_20632_fail.get();return j::call(_callee31770,j::Args{([&]()->V{std::u16string _text31769;_text31769+=u"area.text.big takes true or a whole number from 1 to 8, not ";_text31769+=j::string(_v_20951_big.get());_text31769+=u"";return V(std::move(_text31769));})()});})());
}
if(j::truth(j::unary("!",_v_20951_big.get()))){(void)((_v_20952_grid.get()=([&]()->V{V _receiver31778=([&]()->V{V _receiver31781=_v_20948_str;V _method31782=this->_literals[601];V _method=j::get(_receiver31781,_method31782);j::Args _params31783=j::Args{this->_literals[600]};return j::call(_method,_params31783,_receiver31781);})();V _method31779=this->_literals[8];V _method=j::get(_receiver31778,_method31779);j::Args _params31780=j::Args{j::function([=](const j::Args &_args_fn20953,const V &_receiver_fn20953,const V &_self_fn20953) mutable ->V{
V _v_20954_l;
_v_20954_l=_args_fn20953[0];
return ([&]()->V{V _receiver31774=([&]()->V{j::Args _array31777;for(const auto &_value:j::elements(_v_20954_l))_array31777.push_back(_value);return j::array(std::move(_array31777));})();V _method31775=this->_literals[8];V _method=j::get(_receiver31774,_method31775);j::Args _params31776=j::Args{j::function([=](const j::Args &_args_fn20955,const V &_receiver_fn20955,const V &_self_fn20955) mutable ->V{
V _v_20956_c;
_v_20956_c=_args_fn20955[0];
return (j::truth(([&]()->V{V _lhs31772=_v_20956_c;V _rhs31773=this->_literals[134];return V(j::equal(_lhs31772,_rhs31773,true));})())?this->_literals[12]:_v_20956_c);
return V{};
},1)};return j::call(_method,_params31776,_receiver31774);})();
return V{};
},1)};return j::call(_method,_params31780,_receiver31778);})()));
}else {
(void)((_v_20952_grid.get()=([&]()->V{j::Args _array31785;return j::array(std::move(_array31785));})()));
{for(const auto &_item31786:j::elements(([&]()->V{V _receiver31787=([&]()->V{V _receiver31790=_v_20948_str;V _method31791=this->_literals[359];V _method=j::get(_receiver31790,_method31791);j::Args _params31792=j::Args{};return j::call(_method,_params31792,_receiver31790);})();V _method31788=this->_literals[601];V _method=j::get(_receiver31787,_method31788);j::Args _params31789=j::Args{this->_literals[600]};return j::call(_method,_params31789,_receiver31787);})())){V _v_20957_line;
_v_20957_line=_item31786;
{
V _v_20958_rows;
_v_20958_rows=([&]()->V{V _receiver31797=j::builtin("Array");V _method31798=this->_literals[124];V _method=j::get(_receiver31797,_method31798);j::Args _params31799=j::Args{([&]()->V{V _obj31793=j::object();j::put(_obj31793,this->_literals[19],([&]()->V{V _lhs31794=V(5.0);V _rhs31795=_v_20951_big.get();return V(j::number(_lhs31794)*j::number(_rhs31795));})());return _obj31793;})(),j::function([=](const j::Args &_args_fn20959,const V &_receiver_fn20959,const V &_self_fn20959) mutable ->V{
return ([&]()->V{j::Args _array31796;return j::array(std::move(_array31796));})();
return V{};
},0)};return j::call(_method,_params31799,_receiver31797);})();
{for(const auto &_item31800:j::elements(_v_20957_line)){V _v_20960_ch;
_v_20960_ch=_item31800;
{
V _v_20961_g;
_v_20961_g=([&]()->V{V _receiver31801=([&]()->V{V _logical31804=j::get(this->_v_20874_FONT.get(),_v_20960_ch);return j::nullish(_logical31804)?j::get(this->_v_20874_FONT.get(),this->_literals[563]):_logical31804;})();V _method31802=this->_literals[601];V _method=j::get(_receiver31801,_method31802);j::Args _params31803=j::Args{this->_literals[97]};return j::call(_method,_params31803,_receiver31801);})();
{V _v_20962_r;
_v_20962_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs31805=_v_20962_r;V _rhs31806=V(5.0);return j::binary("<",_lhs31805,_rhs31806);})());(void)(j::increment(_v_20962_r,1,false))){{for(const auto &_item31807:j::elements(([&]()->V{V _lhs31808=j::get(_v_20961_g,_v_20962_r);V _rhs31809=this->_literals[169];return j::binary("+",_lhs31808,_rhs31809);})())){V _v_20963_px;
_v_20963_px=_item31807;
{V _v_20964_k;
_v_20964_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs31810=_v_20964_k;V _rhs31811=([&]()->V{V _lhs31812=V(2.0);V _rhs31813=_v_20951_big.get();return V(j::number(_lhs31812)*j::number(_rhs31813));})();return j::binary("<",_lhs31810,_rhs31811);})());(void)(j::increment(_v_20964_k,1,false))){{V _v_20965_q;
_v_20965_q=V(0.0);
for(;j::truth(([&]()->V{V _lhs31814=_v_20965_q;V _rhs31815=_v_20951_big.get();return j::binary("<",_lhs31814,_rhs31815);})());(void)(j::increment(_v_20965_q,1,false))){(void)(([&]()->V{V _receiver31818=j::get(_v_20958_rows,([&]()->V{V _lhs31821=([&]()->V{V _lhs31823=_v_20962_r;V _rhs31824=_v_20951_big.get();return V(j::number(_lhs31823)*j::number(_rhs31824));})();V _rhs31822=_v_20965_q;return j::binary("+",_lhs31821,_rhs31822);})());V _method31819=this->_literals[149];V _method=j::get(_receiver31818,_method31819);j::Args _params31820=j::Args{(j::truth(([&]()->V{V _lhs31816=_v_20963_px;V _rhs31817=this->_literals[602];return V(j::equal(_lhs31816,_rhs31817,true));})())?this->_literals[602]:this->_literals[12])};return j::call(_method,_params31820,_receiver31818);})());
}}
}}
}}
}}

}
}}
(void)(([&]()->V{V _receiver31827=_v_20952_grid.get();V _method31828=this->_literals[149];V _method=j::get(_receiver31827,_method31828);j::Args _params31829=([&](){j::Args _args31825;for(const auto &_v:j::elements(_v_20958_rows))_args31825.push_back(_v);_args31825.push_back(([&]()->V{j::Args _array31826;return j::array(std::move(_array31826));})());return _args31825;})();return j::call(_method,_params31829,_receiver31827);})());

}
}}
(void)(([&]()->V{V _receiver31830=_v_20952_grid.get();V _method31831=this->_literals[603];V _method=j::get(_receiver31830,_method31831);j::Args _params31832=j::Args{};return j::call(_method,_params31832,_receiver31830);})());

}

_v_20966_w.get()=([&]()->V{V _receiver31837=j::builtin("Math");V _method31838=this->_literals[51];V _method=j::get(_receiver31837,_method31838);j::Args _params31839=([&](){j::Args _args31833;_args31833.push_back(V(1.0));for(const auto &_v:j::elements(([&]()->V{V _receiver31834=_v_20952_grid.get();V _method31835=this->_literals[8];V _method=j::get(_receiver31834,_method31835);j::Args _params31836=j::Args{j::function([=](const j::Args &_args_fn20967,const V &_receiver_fn20967,const V &_self_fn20967) mutable ->V{
V _v_20968_r;
_v_20968_r=_args_fn20967[0];
return j::get(_v_20968_r,this->_literals[19]);
return V{};
},1)};return j::call(_method,_params31836,_receiver31834);})()))_args31833.push_back(_v);return _args31833;})();return j::call(_method,_params31839,_receiver31837);})();
_v_20969_h.get()=([&]()->V{V _receiver31842=j::builtin("Math");V _method31843=this->_literals[51];V _method=j::get(_receiver31842,_method31843);j::Args _params31844=j::Args{V(1.0),j::get(_v_20952_grid.get(),this->_literals[19])};return j::call(_method,_params31844,_receiver31842);})();
return ([&]()->V{V _callee31869=this->_v_20746_makeArea.get();return j::call(_callee31869,j::Args{j::function([=](const j::Args &_args_fn20970,const V &_receiver_fn20970,const V &_self_fn20970) mutable ->V{
V _v_20971_cols;
V _v_20972_rows;
_v_20971_cols=_args_fn20970[0];
_v_20972_rows=_args_fn20970[1];
{
j::Cell _v_20973_b;
j::Cell _v_20974_at;
_v_20973_b.get()=([&]()->V{V _callee31852=this->_v_20779_boxOf.get();return j::call(_callee31852,j::Args{([&]()->V{V _obj31845=j::object();V _spread31846=_v_20950_p.get();for(const auto &_key:j::keys(_spread31846))j::put(_obj31845,_key,j::get(_spread31846,_key));j::put(_obj31845,this->_literals[46],_v_20966_w.get());j::put(_obj31845,this->_literals[48],_v_20969_h.get());j::put(_obj31845,this->_literals[45],j::builtin("undefined"));return _obj31845;})(),([&]()->V{V _lhs31847=([&]()->V{V _lhs31849=_v_20966_w.get();V _rhs31850=_v_20969_h.get();return V(j::number(_lhs31849)/j::number(_rhs31850));})();V _rhs31848=this->_v_20727_ASPECT.get();return V(j::number(_lhs31847)/j::number(_rhs31848));})(),_v_20971_cols,_v_20972_rows,([&]()->V{V _obj31851=j::object();j::put(_obj31851,this->_literals[45],this->_literals[85]);j::put(_obj31851,this->_literals[39],this->_literals[24]);return _obj31851;})()});})();
_v_20974_at.get()=j::function([=](const j::Args &_args_fn20975,const V &_receiver_fn20975,const V &_self_fn20975) mutable ->V{
V _v_20976_x;
V _v_20977_y;
_v_20976_x=_args_fn20975[0];
_v_20977_y=_args_fn20975[1];
return ([&]()->V{V _logical31853=([&]()->V{V _chain31854=_v_20952_grid.get();V _chain31855=j::get(_chain31854,([&]()->V{V _lhs31856=([&]()->V{V _number31858=_v_20977_y;return V(std::floor(j::number(_number31858)));})();V _rhs31857=j::get(_v_20973_b.get(),this->_literals[35]);return V(j::number(_lhs31856)-j::number(_rhs31857));})());if(j::nullish(_chain31855))return V{};V _chain31859=j::get(_chain31855,([&]()->V{V _lhs31860=([&]()->V{V _number31862=_v_20976_x;return V(std::floor(j::number(_number31862)));})();V _rhs31861=j::get(_v_20973_b.get(),this->_literals[30]);return V(j::number(_lhs31860)-j::number(_rhs31861));})());return _chain31859;})();return j::nullish(_logical31853)?this->_literals[12]:_logical31853;})();
return V{};
},2);
return ([&]()->V{V _callee31868=this->_v_20810_placedOf.get();return j::call(_callee31868,j::Args{_v_20973_b.get(),j::function([=](const j::Args &_args_fn20978,const V &_receiver_fn20978,const V &_self_fn20978) mutable ->V{
V _v_20979_x;
V _v_20980_y;
_v_20979_x=_args_fn20978[0];
_v_20980_y=_args_fn20978[1];
return ([&]()->V{V _lhs31863=([&]()->V{V _callee31865=_v_20974_at.get();return j::call(_callee31865,j::Args{_v_20979_x,_v_20980_y});})();V _rhs31864=this->_literals[12];return V(!j::equal(_lhs31863,_rhs31864,true));})();
return V{};
},2),([&]()->V{V _obj31866=j::object();j::put(_obj31866,this->_literals[116],j::function([=](const j::Args &_args_fn20981,const V &_receiver_fn20981,const V &_self_fn20981) mutable ->V{
V _v_20982_x;
V _v_20983_y;
_v_20982_x=_args_fn20981[0];
_v_20983_y=_args_fn20981[1];
return (j::truth(_v_20951_big.get())?this->_literals[12]:([&]()->V{V _callee31867=_v_20974_at.get();return j::call(_callee31867,j::Args{_v_20982_x,_v_20983_y});})());
return V{};
},2));return _obj31866;})()});})();

}

return V{};
},2)});})();

}

return V{};
},2));j::put(_obj31477,this->_literals[604],j::function([=](const j::Args &_args_fn20984,const V &_receiver_fn20984,const V &_self_fn20984) mutable ->V{
j::Cell _v_20985_test;
j::Cell _v_20986_box;
_v_20985_test.get()=_args_fn20984[0];
_v_20986_box.get()=_args_fn20984[1];
{
if(j::truth(([&]()->V{V _lhs31870=j::unary("typeof",_v_20985_test.get());V _rhs31871=this->_literals[0];return V(!j::equal(_lhs31870,_rhs31871,true));})())){(void)(([&]()->V{V _callee31872=this->_v_20632_fail.get();return j::call(_callee31872,j::Args{this->_literals[605]});})());
}
if(j::truth(([&]()->V{V _lhs31873=_v_20986_box.get();V _rhs31874=j::builtin("undefined");return V(!j::equal(_lhs31873,_rhs31874,true));})())){
if(j::truth(j::unary("!",([&]()->V{V _callee31875=this->_v_20646_isObject.get();return j::call(_callee31875,j::Args{_v_20986_box.get()});})()))){(void)(([&]()->V{V _callee31878=this->_v_20632_fail.get();return j::call(_callee31878,j::Args{([&]()->V{std::u16string _text31876;_text31876+=u"area.where's box takes { x, y, cols, rows } in cells, not ";_text31876+=j::string(([&]()->V{V _callee31877=this->_v_20649_show.get();return j::call(_callee31877,j::Args{_v_20986_box.get()});})());_text31876+=u"";return V(std::move(_text31876));})()});})());
}
(void)(([&]()->V{V _callee31881=this->_v_21015_numbers.get();return j::call(_callee31881,j::Args{this->_literals[606],([&]()->V{V _obj31879=j::object();j::put(_obj31879,this->_literals[43],j::get(_v_20986_box.get(),this->_literals[43]));j::put(_obj31879,this->_literals[44],j::get(_v_20986_box.get(),this->_literals[44]));j::put(_obj31879,this->_literals[46],j::get(_v_20986_box.get(),this->_literals[46]));j::put(_obj31879,this->_literals[48],j::get(_v_20986_box.get(),this->_literals[48]));return _obj31879;})(),([&]()->V{j::Args _array31880;_array31880.push_back(this->_literals[46]);_array31880.push_back(this->_literals[48]);return j::array(std::move(_array31880));})()});})());

}

return ([&]()->V{V _callee31888=this->_v_20746_makeArea.get();return j::call(_callee31888,j::Args{j::function([=](const j::Args &_args_fn20987,const V &_receiver_fn20987,const V &_self_fn20987) mutable ->V{
j::Cell _v_20988_cols;
j::Cell _v_20989_rows;
_v_20988_cols.get()=_args_fn20987[0];
_v_20989_rows.get()=_args_fn20987[1];
return ([&]()->V{V _obj31882=j::object();j::put(_obj31882,this->_literals[20],j::function([=](const j::Args &_args_fn20990,const V &_receiver_fn20990,const V &_self_fn20990) mutable ->V{
V _v_20991_x;
V _v_20992_y;
_v_20991_x=_args_fn20990[0];
_v_20992_y=_args_fn20990[1];
return j::unary("!",j::unary("!",([&]()->V{V _callee31883=_v_20985_test.get();return j::call(_callee31883,j::Args{_v_20991_x,_v_20992_y,_v_20988_cols.get(),_v_20989_rows.get()});})()));
return V{};
},2));j::put(_obj31882,this->_literals[30],(j::truth(_v_20986_box.get())?j::get(_v_20986_box.get(),this->_literals[43]):V(0.0)));j::put(_obj31882,this->_literals[35],(j::truth(_v_20986_box.get())?j::get(_v_20986_box.get(),this->_literals[44]):V(0.0)));j::put(_obj31882,this->_literals[32],(j::truth(_v_20986_box.get())?([&]()->V{V _lhs31884=j::get(_v_20986_box.get(),this->_literals[43]);V _rhs31885=j::get(_v_20986_box.get(),this->_literals[46]);return j::binary("+",_lhs31884,_rhs31885);})():_v_20988_cols.get()));j::put(_obj31882,this->_literals[37],(j::truth(_v_20986_box.get())?([&]()->V{V _lhs31886=j::get(_v_20986_box.get(),this->_literals[44]);V _rhs31887=j::get(_v_20986_box.get(),this->_literals[48]);return j::binary("+",_lhs31886,_rhs31887);})():_v_20989_rows.get()));return _obj31882;})();
return V{};
},2)});})();

}

return V{};
},2));j::put(_obj31477,this->_literals[607],j::function([=](const j::Args &_args_fn20993,const V &_receiver_fn20993,const V &_self_fn20993) mutable ->V{
{
return ([&]()->V{V _callee31890=this->_v_20746_makeArea.get();return j::call(_callee31890,j::Args{j::function([=](const j::Args &_args_fn20994,const V &_receiver_fn20994,const V &_self_fn20994) mutable ->V{
V _v_20995_cols;
V _v_20996_rows;
_v_20995_cols=_args_fn20994[0];
_v_20996_rows=_args_fn20994[1];
return ([&]()->V{V _obj31889=j::object();j::put(_obj31889,this->_literals[20],j::function([=](const j::Args &_args_fn20997,const V &_receiver_fn20997,const V &_self_fn20997) mutable ->V{
return V(true);
return V{};
},0));j::put(_obj31889,this->_literals[30],V(0.0));j::put(_obj31889,this->_literals[35],V(0.0));j::put(_obj31889,this->_literals[32],_v_20995_cols);j::put(_obj31889,this->_literals[37],_v_20996_rows);return _obj31889;})();
return V{};
},2)});})();

}

return V{};
},0));j::put(_obj31477,this->_literals[608],j::function([=](const j::Args &_args_fn20998,const V &_receiver_fn20998,const V &_self_fn20998) mutable ->V{
j::Cell _v_20999_outline;
V _v_21000_o;
_v_20999_outline.get()=_args_fn20998[0];
_v_21000_o=_args_fn20998[1];
{
j::Cell _v_21001_inside;
j::Cell _v_21011_ratio;
if(j::truth(([&]()->V{V _lhs31891=j::unary("typeof",_v_20999_outline.get());V _rhs31892=this->_literals[0];return V(j::equal(_lhs31891,_rhs31892,true));})())){(void)((_v_21001_inside.get()=j::function([=](const j::Args &_args_fn21002,const V &_receiver_fn21002,const V &_self_fn21002) mutable ->V{
V _v_21003_u;
V _v_21004_v;
_v_21003_u=_args_fn21002[0];
_v_21004_v=_args_fn21002[1];
return j::unary("!",j::unary("!",([&]()->V{V _callee31894=_v_20999_outline.get();return j::call(_callee31894,j::Args{_v_21003_u,_v_21004_v});})()));
return V{};
},2)));
}else {
j::Cell _v_21005_pts;
_v_21005_pts.get()=([&]()->V{V _receiver31896=([&]()->V{V _callee31899=this->_v_20864_pointsOf.get();return j::call(_callee31899,j::Args{this->_literals[609],_v_20999_outline.get(),V(3.0),this->_literals[610]});})();V _method31897=this->_literals[8];V _method=j::get(_receiver31896,_method31897);j::Args _params31898=j::Args{j::function([=](const j::Args &_args_fn21006,const V &_receiver_fn21006,const V &_self_fn21006) mutable ->V{
V _v_21007_q;
_v_21007_q=_args_fn21006[0];
return ([&]()->V{j::Args _array31895;_array31895.push_back(j::get(_v_21007_q,V(0.0)));_array31895.push_back(j::get(_v_21007_q,V(1.0)));return j::array(std::move(_array31895));})();
return V{};
},1)};return j::call(_method,_params31898,_receiver31896);})();
(void)((_v_21001_inside.get()=j::function([=](const j::Args &_args_fn21008,const V &_receiver_fn21008,const V &_self_fn21008) mutable ->V{
V _v_21009_u;
V _v_21010_v;
_v_21009_u=_args_fn21008[0];
_v_21010_v=_args_fn21008[1];
return ([&]()->V{V _callee31901=this->_v_20837_inPolygon.get();return j::call(_callee31901,j::Args{_v_21005_pts.get(),_v_21009_u,_v_21010_v});})();
return V{};
},2)));

}

_v_21011_ratio.get()=([&]()->V{V _callee31903=this->_v_20663_numberOf.get();return j::call(_callee31903,j::Args{this->_literals[611],(j::truth(([&]()->V{V _callee31902=this->_v_20646_isObject.get();return j::call(_callee31902,j::Args{_v_21000_o});})())?j::get(_v_21000_o,this->_literals[104]):j::builtin("undefined")),V(1.0),V(0.05),V(20.0)});})();
return ([&]()->V{V _callee31913=this->_v_20815_unitShape.get();return j::call(_callee31913,j::Args{this->_literals[609],_v_21000_o,([&]()->V{j::Args _array31904;_array31904.push_back(this->_literals[104]);return j::array(std::move(_array31904));})(),_v_21011_ratio.get(),([&]()->V{V _obj31905=j::object();j::put(_obj31905,this->_literals[45],this->_literals[85]);j::put(_obj31905,this->_literals[39],this->_literals[24]);return _obj31905;})(),j::function([=](const j::Args &_args_fn21012,const V &_receiver_fn21012,const V &_self_fn21012) mutable ->V{
V _v_21013_px;
V _v_21014_py;
_v_21013_px=_args_fn21012[0];
_v_21014_py=_args_fn21012[1];
return ([&]()->V{V _callee31912=_v_21001_inside.get();return j::call(_callee31912,j::Args{([&]()->V{V _lhs31906=([&]()->V{V _lhs31908=_v_21013_px;V _rhs31909=_v_21011_ratio.get();return V(j::number(_lhs31908)/j::number(_rhs31909));})();V _rhs31907=V(0.5);return j::binary("+",_lhs31906,_rhs31907);})(),([&]()->V{V _lhs31910=_v_21014_py;V _rhs31911=V(0.5);return j::binary("+",_lhs31910,_rhs31911);})()});})();
return V{};
},2)});})();

}

return V{};
},2));return _obj31477;})();
this->_v_21022_sky.get()=j::function([=](const j::Args &_args_fn21023,const V &_receiver_fn21023,const V &_self_fn21023) mutable ->V{
return ([&]()->V{V _receiver31914=this->_v_20875_area.get();V _method31915=this->_literals[607];V _method=j::get(_receiver31914,_method31915);j::Args _params31916=j::Args{};return j::call(_method,_params31916,_receiver31914);})();
return V{};
},0);
this->_v_21118_FILLS.get()=([&]()->V{V _obj31917=j::object();j::put(_obj31917,this->_literals[377],V(0.3));j::put(_obj31917,this->_literals[480],V(0.5));j::put(_obj31917,this->_literals[378],V(0.75));j::put(_obj31917,this->_literals[489],V(0.9));j::put(_obj31917,this->_literals[612],V(1.0));return _obj31917;})();
this->_v_21283_CLOUD_RATIO.get()=V(2.4);
this->_v_21284_PUFFS.get()=([&]()->V{j::Args _array31918;_array31918.push_back(([&]()->V{j::Args _array31919;_array31919.push_back(j::unary("-",V(0.816)));_array31919.push_back(V(0.22));_array31919.push_back(V(0.28));return j::array(std::move(_array31919));})());_array31918.push_back(([&]()->V{j::Args _array31920;_array31920.push_back(j::unary("-",V(0.096)));_array31920.push_back(V(0.0));_array31920.push_back(V(0.5));return j::array(std::move(_array31920));})());_array31918.push_back(([&]()->V{j::Args _array31921;_array31921.push_back(V(0.72));_array31921.push_back(V(0.16));_array31921.push_back(V(0.34));return j::array(std::move(_array31921));})());return j::array(std::move(_array31918));})();
this->_v_21439_SAMPLES.get()=V(4.0);
this->_v_21568_isMaterial.get()=j::function([=](const j::Args &_args_fn21569,const V &_receiver_fn21569,const V &_self_fn21569) mutable ->V{
V _v_21570_v;
_v_21570_v=_args_fn21569[0];
return ([&]()->V{V _logical31922=([&]()->V{V _logical31923=([&]()->V{V _logical31924=([&]()->V{V _callee31925=this->_v_20646_isObject.get();return j::call(_callee31925,j::Args{_v_21570_v});})();return j::truth(_logical31924)?([&]()->V{V _lhs31926=j::unary("typeof",j::get(_v_21570_v,this->_literals[176]));V _rhs31927=this->_literals[0];return V(j::equal(_lhs31926,_rhs31927,true));})():_logical31924;})();return j::truth(_logical31923)?([&]()->V{V _callee31928=this->_v_20646_isObject.get();return j::call(_callee31928,j::Args{j::get(_v_21570_v,this->_literals[98])});})():_logical31923;})();return j::truth(_logical31922)?([&]()->V{V _lhs31929=j::unary("typeof",j::get(_v_21570_v,this->_literals[1]));V _rhs31930=this->_literals[4];return V(j::equal(_lhs31929,_rhs31930,true));})():_logical31922;})();
return V{};
},1);
this->_v_21577_code.get()=j::function([=](const j::Args &_args_fn21578,const V &_receiver_fn21578,const V &_self_fn21578) mutable ->V{
V _v_21579_ch;
_v_21579_ch=_args_fn21578[0];
return ([&]()->V{V _receiver31931=_v_21579_ch;V _method31932=this->_literals[161];V _method=j::get(_receiver31931,_method31932);j::Args _params31933=j::Args{V(0.0)};return j::call(_method,_params31933,_receiver31931);})();
return V{};
},1);
this->_v_21580_SPACE.get()=V(32.0);
this->_v_21610_highlights.get()=([&]()->V{V _callee31934=j::builtin("WeakMap");return j::construct(_callee31934,j::Args{});})();
this->_v_21611_SHADES.get()=V(6.0);
this->_v_21612_BODY.get()=this->_literals[613];
this->_v_22209_patterns.get()=([&]()->V{V _obj31935=j::object();j::put(_obj31935,this->_literals[614],([&]()->V{j::Args _array31936;_array31936.push_back(this->_literals[615]);_array31936.push_back(this->_literals[616]);return j::array(std::move(_array31936));})());j::put(_obj31935,this->_literals[617],([&]()->V{j::Args _array31937;_array31937.push_back(this->_literals[618]);_array31937.push_back(this->_literals[619]);return j::array(std::move(_array31937));})());j::put(_obj31935,this->_literals[620],([&]()->V{j::Args _array31938;_array31938.push_back(this->_literals[621]);_array31938.push_back(this->_literals[622]);return j::array(std::move(_array31938));})());j::put(_obj31935,this->_literals[623],([&]()->V{j::Args _array31939;_array31939.push_back(this->_literals[624]);_array31939.push_back(this->_literals[625]);_array31939.push_back(this->_literals[626]);return j::array(std::move(_array31939));})());j::put(_obj31935,this->_literals[627],([&]()->V{j::Args _array31940;_array31940.push_back(this->_literals[628]);_array31940.push_back(this->_literals[629]);return j::array(std::move(_array31940));})());j::put(_obj31935,this->_literals[178],([&]()->V{j::Args _array31941;_array31941.push_back(this->_literals[630]);_array31941.push_back(this->_literals[631]);return j::array(std::move(_array31941));})());j::put(_obj31935,this->_literals[632],([&]()->V{j::Args _array31942;_array31942.push_back(this->_literals[95]);return j::array(std::move(_array31942));})());j::put(_obj31935,this->_literals[633],([&]()->V{j::Args _array31943;_array31943.push_back(this->_literals[634]);return j::array(std::move(_array31943));})());j::put(_obj31935,this->_literals[635],([&]()->V{j::Args _array31944;_array31944.push_back(this->_literals[636]);_array31944.push_back(this->_literals[637]);return j::array(std::move(_array31944));})());j::put(_obj31935,this->_literals[638],([&]()->V{j::Args _array31945;_array31945.push_back(this->_literals[639]);_array31945.push_back(this->_literals[640]);return j::array(std::move(_array31945));})());return _obj31935;})();
this->_v_22347_isEmission.get()=j::function([=](const j::Args &_args_fn22348,const V &_receiver_fn22348,const V &_self_fn22348) mutable ->V{
V _v_22349_v;
_v_22349_v=_args_fn22348[0];
return ([&]()->V{V _logical31946=([&]()->V{V _logical31947=([&]()->V{V _logical31948=([&]()->V{V _callee31949=this->_v_20646_isObject.get();return j::call(_callee31949,j::Args{_v_22349_v});})();return j::truth(_logical31948)?([&]()->V{V _lhs31950=j::unary("typeof",j::get(_v_22349_v,this->_literals[373]));V _rhs31951=this->_literals[0];return V(j::equal(_lhs31950,_rhs31951,true));})():_logical31948;})();return j::truth(_logical31947)?([&]()->V{V _callee31952=this->_v_20646_isObject.get();return j::call(_callee31952,j::Args{j::get(_v_22349_v,this->_literals[98])});})():_logical31947;})();return j::truth(_logical31946)?([&]()->V{V _lhs31953=j::unary("typeof",j::get(_v_22349_v,this->_literals[1]));V _rhs31954=this->_literals[4];return V(j::equal(_lhs31953,_rhs31954,true));})():_logical31946;})();
return V{};
},1);
this->_v_22660_isPart.get()=j::function([=](const j::Args &_args_fn22661,const V &_receiver_fn22661,const V &_self_fn22661) mutable ->V{
V _v_22662_v;
_v_22662_v=_args_fn22661[0];
return ([&]()->V{V _logical31955=([&]()->V{V _logical31956=([&]()->V{V _callee31957=this->_v_20646_isObject.get();return j::call(_callee31957,j::Args{_v_22662_v});})();return j::truth(_logical31956)?([&]()->V{V _lhs31958=j::get(_v_22662_v,this->_literals[25]);V _rhs31959=this->_literals[458];return V(j::equal(_lhs31958,_rhs31959,true));})():_logical31956;})();return j::truth(_logical31955)?([&]()->V{V _lhs31960=j::unary("typeof",j::get(_v_22662_v,this->_literals[461]));V _rhs31961=this->_literals[0];return V(j::equal(_lhs31960,_rhs31961,true));})():_logical31955;})();
return V{};
},1);
this->_v_22663_MOVES.get()=([&]()->V{V _obj31962=j::object();j::put(_obj31962,this->_literals[453],V(4.0));j::put(_obj31962,this->_literals[254],V(4.0));j::put(_obj31962,this->_literals[454],V(12.0));j::put(_obj31962,this->_literals[455],V(24.0));return _obj31962;})();
this->_v_22856_staged.get()=([&]()->V{V _callee31963=j::builtin("WeakMap");return j::construct(_callee31963,j::Args{});})();
this->_v_22879_SPEC_KEYS.get()=([&]()->V{j::Args _array31964;_array31964.push_back(this->_literals[1]);_array31964.push_back(this->_literals[483]);_array31964.push_back(this->_literals[476]);_array31964.push_back(this->_literals[46]);_array31964.push_back(this->_literals[48]);_array31964.push_back(this->_literals[433]);_array31964.push_back(this->_literals[64]);_array31964.push_back(this->_literals[442]);_array31964.push_back(this->_literals[184]);_array31964.push_back(this->_literals[641]);_array31964.push_back(this->_literals[437]);_array31964.push_back(this->_literals[445]);_array31964.push_back(this->_literals[432]);_array31964.push_back(this->_literals[310]);_array31964.push_back(this->_literals[474]);return j::array(std::move(_array31964));})();
}
};
}
std::unique_ptr<Module> new_kit_materials(){return std::make_unique<Generated_kit_materials>();}
}
