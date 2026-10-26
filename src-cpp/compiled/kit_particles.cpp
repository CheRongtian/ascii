// Native source generated from src/kit/particles.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_particles final:j::Module {
j::Cell _v_36690_EMPTY;
j::Cell _v_36691_INK;
j::Cell _v_36692_NONE;
j::Cell _v_36693_asPiece;
j::Cell _v_36694_colorOf;
j::Cell _v_36695_colorsOf;
j::Cell _v_36696_Surface;
j::Cell _v_36697_TAU;
j::Cell _v_36698_and;
j::Cell _v_36699_code;
j::Cell _v_36700_fail;
j::Cell _v_36701_hash;
j::Cell _v_36702_isHex;
j::Cell _v_36703_mix;
j::Cell _v_36704_piece;
j::Cell _v_36705_rgb;
j::Cell _v_36706_snapshot;
j::Cell _v_36707_specOf;
j::Cell _v_36708_spread;
j::Cell _v_36709_system;
j::Cell _v_36712_SPLASH;
j::Cell _v_36713_SWING;
j::Cell _v_36714_ALIVE;
j::Cell _v_36715_IN;
j::Cell _v_36716_GUST;
j::Cell _v_36717_BOUNDS;
j::Cell _v_36718_EDGES;
j::Cell _v_36719_PLACES;
j::Cell _v_36720_SPOT;
j::Cell _v_36721_HEADING;
j::Cell _v_36722_DIRECTIONS;
j::Cell _v_36723_INWARD;
j::Cell _v_36724_mod;
j::Cell _v_36728_num;
j::Cell _v_36731_quoted;
j::Cell _v_36736_range;
j::Cell _v_36745_glyphCodes;
j::Cell _v_36751_fadeOf;
j::Cell _v_36762_WORDS;
j::Cell _v_36763_KINDS;
j::Cell _v_36764_isPiece;
j::Cell _v_36767_isSource;
j::Cell _v_36770_pictureOf;
j::Cell _v_36786_lettersOf;
j::Cell _v_36802_checkEmitter;
j::Cell _v_36817_headingOf;
j::Cell _v_36826_plan;
j::Cell _v_36875_reachOf;
j::Cell _v_36878_fit;
j::Cell _v_36893_checkAlive;
j::Cell _v_36900_listOf;
j::Cell _v_36903_kept;
j::Cell _v_36904_plansOf;
j::Cell _v_36914_carried;
j::Cell _v_36919_pulled;
j::Cell _v_36924_travel;
j::Cell _v_36931_pace;
j::Cell _v_36938_apex;
j::Cell _v_36946_fold;
j::Cell _v_36954_turned;
j::Cell _v_36961_streak;
j::Cell _v_36965_windAt;
j::Cell _v_36973_addWind;
j::Cell _v_36985_crossing;
j::Cell _v_37012_BOUNCES;
j::Cell _v_37013_newLog;
j::Cell _v_37015_extend;
j::Cell _v_37043_bounced;
j::Cell _v_37059_across;
j::Cell _v_37064_down;
j::Cell _v_37069_extent;
j::Cell _v_37079_MOMENT;
j::Cell _v_37080_walk;
j::Cell _v_37094_place;
j::Cell _v_37111_cellAt;
j::Cell _v_37119_birthplace;
j::Cell _v_37139_inksOf;
j::Cell _v_37154_tint;
j::Cell _v_37160_glyphOf;
j::Cell _v_37165_pushHead;
j::Cell _v_37175_particle;
j::Cell _v_37224_rising;
j::Cell _v_37243_drawPlan;
j::Cell _v_37284_unlike;
j::Cell _v_37294_checkPeriod;
j::Cell _v_37298_drawParticles;
j::Cell _v_37313_distinct;
j::Cell _v_37321_twoThemes;
j::Cell _v_37327_total;
j::Cell _v_37330_paletteFrom;
j::Cell _v_37342_pairsOf;
j::Cell _v_37350_pairsFor;
j::Cell _v_37369_paletteFor;
j::Cell _v_37376_particlesPalette;
j::Cell _v_37380_isThemedHex;
j::Cell _v_37383_artOf;
j::Cell _v_37432_thin;
j::Cell _v_37461_drawArt;
j::Cell _v_37474_PERIOD;
j::Cell _v_37475_particles;
j::Cell _v_37534_sizeOf;
j::Cell _v_37539_share;
j::Cell _v_37544_optionsOf;
j::Cell _v_37548_scaleOf;
j::Cell _v_37552_tones;
j::Cell _v_37567_snow;
j::Cell _v_37591_rain;
j::Cell _v_37606_stars;
j::Cell _v_37617_sparks;
j::Cell _v_37634_fireworks;
j::Cell _v_37647_fireflies;
j::Cell _v_37656_bubbles;
j::Cell _v_37666_HEAD;
j::Cell _v_37667_BODY;
j::Cell _v_37668_matrix;
j::Cell _v_37690_presets;
std::vector<V> _literals;
Generated_kit_particles():_v_36690_EMPTY(this->slot("EMPTY")),_v_36691_INK(this->slot("INK")),_v_36692_NONE(this->slot("NONE")),_v_36693_asPiece(this->slot("asPiece")),_v_36694_colorOf(this->slot("colorOf")),_v_36695_colorsOf(this->slot("colorsOf")),_v_36696_Surface(this->slot("Surface")),_v_36697_TAU(this->slot("TAU")),_v_36698_and(this->slot("and")),_v_36699_code(this->slot("code")),_v_36700_fail(this->slot("fail")),_v_36701_hash(this->slot("hash")),_v_36702_isHex(this->slot("isHex")),_v_36703_mix(this->slot("mix")),_v_36704_piece(this->slot("piece")),_v_36705_rgb(this->slot("rgb")),_v_36706_snapshot(this->slot("snapshot")),_v_36707_specOf(this->slot("specOf")),_v_36708_spread(this->slot("spread")),_v_36709_system(this->slot("system")),_v_36712_SPLASH(this->slot("SPLASH")),_v_36713_SWING(this->slot("SWING")),_v_36714_ALIVE(this->slot("ALIVE")),_v_36715_IN(this->slot("IN")),_v_36716_GUST(this->slot("GUST")),_v_36717_BOUNDS(this->slot("BOUNDS")),_v_36718_EDGES(this->slot("EDGES")),_v_36719_PLACES(this->slot("PLACES")),_v_36720_SPOT(this->slot("SPOT")),_v_36721_HEADING(this->slot("HEADING")),_v_36722_DIRECTIONS(this->slot("DIRECTIONS")),_v_36723_INWARD(this->slot("INWARD")),_v_36724_mod(this->slot("mod")),_v_36728_num(this->slot("num")),_v_36731_quoted(this->slot("quoted")),_v_36736_range(this->slot("range")),_v_36745_glyphCodes(this->slot("glyphCodes")),_v_36751_fadeOf(this->slot("fadeOf")),_v_36762_WORDS(this->slot("WORDS")),_v_36763_KINDS(this->slot("KINDS")),_v_36764_isPiece(this->slot("isPiece")),_v_36767_isSource(this->slot("isSource")),_v_36770_pictureOf(this->slot("pictureOf")),_v_36786_lettersOf(this->slot("lettersOf")),_v_36802_checkEmitter(this->slot("checkEmitter")),_v_36817_headingOf(this->slot("headingOf")),_v_36826_plan(this->slot("plan")),_v_36875_reachOf(this->slot("reachOf")),_v_36878_fit(this->slot("fit")),_v_36893_checkAlive(this->slot("checkAlive")),_v_36900_listOf(this->slot("listOf")),_v_36903_kept(this->slot("kept")),_v_36904_plansOf(this->slot("plansOf")),_v_36914_carried(this->slot("carried")),_v_36919_pulled(this->slot("pulled")),_v_36924_travel(this->slot("travel")),_v_36931_pace(this->slot("pace")),_v_36938_apex(this->slot("apex")),_v_36946_fold(this->slot("fold")),_v_36954_turned(this->slot("turned")),_v_36961_streak(this->slot("streak")),_v_36965_windAt(this->slot("windAt")),_v_36973_addWind(this->slot("addWind")),_v_36985_crossing(this->slot("crossing")),_v_37012_BOUNCES(this->slot("BOUNCES")),_v_37013_newLog(this->slot("newLog")),_v_37015_extend(this->slot("extend")),_v_37043_bounced(this->slot("bounced")),_v_37059_across(this->slot("across")),_v_37064_down(this->slot("down")),_v_37069_extent(this->slot("extent")),_v_37079_MOMENT(this->slot("MOMENT")),_v_37080_walk(this->slot("walk")),_v_37094_place(this->slot("place")),_v_37111_cellAt(this->slot("cellAt")),_v_37119_birthplace(this->slot("birthplace")),_v_37139_inksOf(this->slot("inksOf")),_v_37154_tint(this->slot("tint")),_v_37160_glyphOf(this->slot("glyphOf")),_v_37165_pushHead(this->slot("pushHead")),_v_37175_particle(this->slot("particle")),_v_37224_rising(this->slot("rising")),_v_37243_drawPlan(this->slot("drawPlan")),_v_37284_unlike(this->slot("unlike")),_v_37294_checkPeriod(this->slot("checkPeriod")),_v_37298_drawParticles(this->slot("drawParticles")),_v_37313_distinct(this->slot("distinct")),_v_37321_twoThemes(this->slot("twoThemes")),_v_37327_total(this->slot("total")),_v_37330_paletteFrom(this->slot("paletteFrom")),_v_37342_pairsOf(this->slot("pairsOf")),_v_37350_pairsFor(this->slot("pairsFor")),_v_37369_paletteFor(this->slot("paletteFor")),_v_37376_particlesPalette(this->slot("particlesPalette")),_v_37380_isThemedHex(this->slot("isThemedHex")),_v_37383_artOf(this->slot("artOf")),_v_37432_thin(this->slot("thin")),_v_37461_drawArt(this->slot("drawArt")),_v_37474_PERIOD(this->slot("PERIOD")),_v_37475_particles(this->slot("particles")),_v_37534_sizeOf(this->slot("sizeOf")),_v_37539_share(this->slot("share")),_v_37544_optionsOf(this->slot("optionsOf")),_v_37548_scaleOf(this->slot("scaleOf")),_v_37552_tones(this->slot("tones")),_v_37567_snow(this->slot("snow")),_v_37591_rain(this->slot("rain")),_v_37606_stars(this->slot("stars")),_v_37617_sparks(this->slot("sparks")),_v_37634_fireworks(this->slot("fireworks")),_v_37647_fireflies(this->slot("fireflies")),_v_37656_bubbles(this->slot("bubbles")),_v_37666_HEAD(this->slot("HEAD")),_v_37667_BODY(this->slot("BODY")),_v_37668_matrix(this->slot("matrix")),_v_37690_presets(this->slot("presets")),_literals{V(u"isArray"),
V(u"length"),
V(u""),
V(u"stringify"),
V(u"string"),
V(u"from"),
V(u"object"),
V(u"every"),
V(u"light"),
V(u"dark"),
V(u"meta"),
V(u"still"),
V(u"mono"),
V(u"text"),
V(u"palette"),
V(u"cols"),
V(u"paper"),
V(u"color"),
V(u"trimEnd"),
V(u"\n"),
V(u"split"),
V(u"map"),
V(u"lines"),
V(u"slice"),
V(u"top"),
V(u"includes"),
V(u" "),
V(u"push"),
V(u"forEach"),
V(u"w"),
V(u"max"),
V(u"h"),
V(u"at"),
V(u"center"),
V(u"dx"),
V(u"dy"),
V(u"codes"),
V(u"chars"),
V(u"edge"),
V(u"everywhere"),
V(u"area"),
V(u"point"),
V(u"keys"),
V(u"filter"),
V(u"letters"),
V(u"mark"),
V(u"function"),
V(u"line"),
V(u"x"),
V(u"y"),
V(u"rows"),
V(u"direction"),
V(u"spread"),
V(u"angle"),
V(u"out"),
V(u"PI"),
V(u"emitter"),
V(u"rate"),
V(u"burst"),
V(u"number"),
V(u"count"),
V(u"isInteger"),
V(u"first"),
V(u"rise"),
V(u"scatter"),
V(u"hold"),
V(u"life"),
V(u"path"),
V(u"speed"),
V(u"gravity"),
V(u"wind"),
V(u"drag"),
V(u"sway"),
V(u"amount"),
V(u"glyphs"),
V(u"*+."),
V(u"glyph"),
V(u"steps"),
V(u"colors"),
V(u"palettes"),
V(u"twinkle"),
V(u"bounds"),
V(u"die"),
V(u".x"),
V(u".y"),
V(u"bounciness"),
V(u"bounce"),
V(u"floor"),
V(u"splash"),
V(u"trail"),
V(u"trailGlyphs"),
V(u"trailColors"),
V(u"start"),
V(u"seed"),
V(u"what"),
V(u"gusts"),
V(u"swing"),
V(u"fades"),
V(u"bx"),
V(u"by"),
V(u"logX"),
V(u"logY"),
V(u"trailFade"),
V(u"own"),
V(u"side"),
V(u"fitLife"),
V(u"fitRate"),
V(u"p"),
V(u"id"),
V(u"age"),
V(u"k"),
V(u"vx"),
V(u"vy"),
V(u"t"),
V(u"rand"),
V(u"back"),
V(u"x0"),
V(u"y0"),
V(u"char"),
V(u"heads"),
V(u"ch"),
V(u"col"),
V(u"n"),
V(u"inks"),
V(u"now"),
V(u"trailNow"),
V(u"sum"),
V(u"work"),
V(u"s"),
V(u"A"),
V(u"lx"),
V(u"hx"),
V(u"ly"),
V(u"hy"),
V(u"c0"),
V(u"c1"),
V(u"r0"),
V(u"r1"),
V(u"tx"),
V(u"ty"),
V(u"slot"),
V(u"colored"),
V(u"landing"),
V(u"gust"),
V(u"j0"),
V(u"stamp"),
V(u"born"),
V(u"ph"),
V(u"w0"),
V(u"cell"),
V(u"lo"),
V(u"hi"),
V(u"eu"),
V(u"ev"),
V(u"du"),
V(u"dv"),
V(u"bottom"),
V(u"y1"),
V(u"min"),
V(u"x1"),
V(u"left"),
V(u"get"),
V(u"set"),
V(u"none"),
V(u"wrap"),
V(u"-"),
V(u"\\"),
V(u"|"),
V(u"/"),
V(u"u"),
V(u"v"),
V(u"done"),
V(u"rest"),
V(u"round"),
V(u"owner"),
V(u"index"),
V(u"trailPaper"),
V(u"trailDark"),
V(u"resolve"),
V(u"charCodeAt"),
V(u"put"),
V(u"."),
V(u"aspect"),
V(u"it has a start, and nothing comes before it"),
V(u"drawParticles() takes a Surface first: drawParticles(s, systems, t)"),
V(u"drawParticles() takes its options as an object: { period, region }"),
V(u"period"),
V(u"drawParticles()"),
V(u"region"),
V(u"find"),
V(u"isFinite"),
V(u"toLowerCase"),
V(u"has"),
V(u"add"),
V(u", light and dark"),
V(u"flatMap"),
V(u"some"),
V(u" and pictures"),
V(u"particlesPalette()"),
V(u"art"),
V(u"paint"),
V(u"entries"),
V(u"solid"),
V(u"boolean"),
V(u"findIndex"),
V(u"hasOwn"),
V(u"pair"),
V(u"pairs"),
V(u"plain"),
V(u"reduce"),
V(u"particles"),
V(u"particles()"),
V(u"particles() takes options third only for a preset: put them in the systems you give"),
V(u"particles()'s back"),
V(u"front"),
V(u"particles()'s front"),
V(u"top-left"),
V(u"fill"),
V(u"loop"),
V(u"presets.snow"),
V(u"density"),
V(u"layers"),
V(u"presets.snow's density"),
V(u"drift"),
V(u"+"),
V(u"*"),
V(u"presets.snow's colors"),
V(u"#a3afbf"),
V(u"#64748b"),
V(u"#1e293b"),
V(u"#5b6b82"),
V(u"#b6c2d1"),
V(u"#f8fafc"),
V(u"snow"),
V(u"presets.rain"),
V(u"o."),
V(u"presets.rain's density"),
V(u"#94a3b8"),
V(u"#475569"),
V(u"#a5b4c8"),
V(u"presets.rain's colors"),
V(u"'"),
V(u"presets.stars"),
V(u"shooting"),
V(u"presets.stars' density"),
V(u"·+*+·"),
V(u"#cbd5e1"),
V(u"#0f172a"),
V(u"#334155"),
V(u"#fff7d6"),
V(u"#ffffff"),
V(u"#e2e8f0"),
V(u"presets.sparks"),
V(u"height"),
V(u"presets.sparks' height"),
V(u"presets.sparks' density"),
V(u"*+:."),
V(u"#7c2d12"),
V(u"#c2410c"),
V(u"#ea580c"),
V(u"#f87171"),
V(u"#fecaca"),
V(u"#fffbeb"),
V(u"#fde047"),
V(u"#fb923c"),
V(u"#dc2626"),
V(u"#7f1d1d"),
V(u"presets.fireworks"),
V(u"#ef4444"),
V(u"#facc15"),
V(u"#22c55e"),
V(u"#38bdf8"),
V(u"#e879f9"),
V(u"**+:."),
V(u"#000000"),
V(u"#fffaf0"),
V(u"presets.fireflies"),
V(u"presets.fireflies' density"),
V(u" .·•*•·. "),
V(u"#d9f99d"),
V(u"#84cc16"),
V(u"#4d7c0f"),
V(u"#3f6212"),
V(u"#1a2e05"),
V(u"#a3e635"),
V(u"#fef08a"),
V(u"presets.bubbles"),
V(u"presets.bubbles' density"),
V(u"..oooOO"),
V(u"#a5f3fc"),
V(u"#22d3ee"),
V(u"#0e7490"),
V(u"#164e63"),
V(u"#155e75"),
V(u"#ecfeff"),
V(u"presets.matrix"),
V(u"presets.matrix's density"),
V(u"presets.matrix's speed"),
V(u"#052e16"),
V(u"#f0fdf4"),
V(u"#15803d"),
V(u"#86efac"),
V(u"#4ade80"),
V(u"#14532d"),
V(u"presets.matrix's colors"),
V(u"presets.matrix's colors takes two or more colours: the head's, then the trail's"),
V(u"right"),
V(u"top-right"),
V(u"bottom-left"),
V(u"bottom-right"),
V(u"down-right"),
V(u"down"),
V(u"down-left"),
V(u"up-left"),
V(u"up"),
V(u"up-right"),
V(u"default"),
V(u"@#%&$"),
V(u"0123456789ABCDEFHKMNPRSTXZacdeghkmnorsuvxz:;!|<>=+*"),
V(u"rain"),
V(u"stars"),
V(u"sparks"),
V(u"fireworks"),
V(u"fireflies"),
V(u"bubbles"),
V(u"matrix")}{
this->exports["system"]=this->_v_36709_system;
this->exports["streak"]=this->_v_36961_streak;
this->exports["drawParticles"]=this->_v_37298_drawParticles;
this->exports["particlesPalette"]=this->_v_37376_particlesPalette;
this->exports["particles"]=this->_v_37475_particles;
this->exports["presets"]=this->_v_37690_presets;
}
void init() override{if(initialized)return;initialized=true;
this->_v_36709_system.get()=j::function([=](const j::Args &_args_fn36710,const V &_receiver_fn36710,const V &_self_fn36710) mutable ->V{
V _v_36711_s;
_v_36711_s=_args_fn36710[0];
{
return _v_36711_s;

}

return V{};
},1);
this->_v_36736_range.get()=j::function([=](const j::Args &_args_fn36737,const V &_receiver_fn36737,const V &_self_fn36737) mutable ->V{
V _v_36738_v;
V _v_36739_fallback;
V _v_36740_what;
V _v_36741_min;
V _v_36742_above;
_v_36738_v=_args_fn36737[0];
_v_36739_fallback=_args_fn36737[1];
_v_36740_what=_args_fn36737[2];
V _default37691=_args_fn36737[3];if(_default37691.kind==V::Undefined||_default37691.kind==V::Hole)_default37691=j::unary("-",j::builtin("Infinity"));
_v_36741_min=_default37691;
V _default37692=_args_fn36737[4];if(_default37692.kind==V::Undefined||_default37692.kind==V::Hole)_default37692=V(false);
_v_36742_above=_default37692;
{
V _v_36743_r;
if(j::truth(([&]()->V{V _lhs37693=_v_36738_v;V _rhs37694=j::builtin("undefined");return V(j::equal(_lhs37693,_rhs37694,true));})())){return _v_36739_fallback;
}
_v_36743_r=(j::truth(([&]()->V{V _callee37695=this->_v_36728_num.get();return j::call(_callee37695,j::Args{_v_36738_v});})())?([&]()->V{j::Args _array37696;_array37696.push_back(_v_36738_v);_array37696.push_back(_v_36738_v);return j::array(std::move(_array37696));})():(j::truth(([&]()->V{V _logical37697=([&]()->V{V _logical37698=([&]()->V{V _logical37699=([&]()->V{V _logical37700=([&]()->V{V _receiver37701=j::builtin("Array");V _method37702=this->_literals[0];V _method=j::get(_receiver37701,_method37702);j::Args _params37703=j::Args{_v_36738_v};return j::call(_method,_params37703,_receiver37701);})();return j::truth(_logical37700)?([&]()->V{V _lhs37704=j::get(_v_36738_v,this->_literals[1]);V _rhs37705=V(2.0);return V(j::equal(_lhs37704,_rhs37705,true));})():_logical37700;})();return j::truth(_logical37699)?([&]()->V{V _callee37706=this->_v_36728_num.get();return j::call(_callee37706,j::Args{j::get(_v_36738_v,V(0.0))});})():_logical37699;})();return j::truth(_logical37698)?([&]()->V{V _callee37707=this->_v_36728_num.get();return j::call(_callee37707,j::Args{j::get(_v_36738_v,V(1.0))});})():_logical37698;})();return j::truth(_logical37697)?([&]()->V{V _lhs37708=j::get(_v_36738_v,V(0.0));V _rhs37709=j::get(_v_36738_v,V(1.0));return j::binary("<=",_lhs37708,_rhs37709);})():_logical37697;})())?([&]()->V{j::Args _array37710;_array37710.push_back(j::get(_v_36738_v,V(0.0)));_array37710.push_back(j::get(_v_36738_v,V(1.0)));return j::array(std::move(_array37710));})():V::null()));
if(j::truth(([&]()->V{V _logical37711=([&]()->V{V _logical37712=j::unary("!",_v_36743_r);return !j::truth(_logical37712)?([&]()->V{V _lhs37713=j::get(_v_36743_r,V(0.0));V _rhs37714=_v_36741_min;return j::binary("<",_lhs37713,_rhs37714);})():_logical37712;})();return !j::truth(_logical37711)?([&]()->V{V _logical37715=_v_36742_above;return j::truth(_logical37715)?([&]()->V{V _lhs37716=j::get(_v_36743_r,V(0.0));V _rhs37717=_v_36741_min;return V(j::equal(_lhs37716,_rhs37717,true));})():_logical37715;})():_logical37711;})())){
V _v_36744_floor;
_v_36744_floor=(j::truth(([&]()->V{V _lhs37718=_v_36741_min;V _rhs37719=j::unary("-",j::builtin("Infinity"));return V(j::equal(_lhs37718,_rhs37719,true));})())?this->_literals[2]:(j::truth(_v_36742_above)?([&]()->V{std::u16string _text37720;_text37720+=u" above ";_text37720+=j::string(_v_36741_min);_text37720+=u"";return V(std::move(_text37720));})():([&]()->V{std::u16string _text37721;_text37721+=u" of ";_text37721+=j::string(_v_36741_min);_text37721+=u" or more";return V(std::move(_text37721));})()));
(void)(([&]()->V{V _callee37726=this->_v_36700_fail.get();return j::call(_callee37726,j::Args{([&]()->V{std::u16string _text37722;_text37722+=u"";_text37722+=j::string(_v_36740_what);_text37722+=u" takes a number";_text37722+=j::string(_v_36744_floor);_text37722+=u", or [low, high] with low no more than high, not ";_text37722+=j::string(([&]()->V{V _receiver37723=j::builtin("JSON");V _method37724=this->_literals[3];V _method=j::get(_receiver37723,_method37724);j::Args _params37725=j::Args{_v_36738_v};return j::call(_method,_params37725,_receiver37723);})());_text37722+=u"";return V(std::move(_text37722));})()});})());

}

return _v_36743_r;

}

return V{};
},3);
this->_v_36745_glyphCodes.get()=j::function([=](const j::Args &_args_fn36746,const V &_receiver_fn36746,const V &_self_fn36746) mutable ->V{
V _v_36747_v;
V _v_36748_what;
_v_36747_v=_args_fn36746[0];
_v_36748_what=_args_fn36746[1];
{
if(j::truth(([&]()->V{V _logical37727=([&]()->V{V _lhs37728=j::unary("typeof",_v_36747_v);V _rhs37729=this->_literals[4];return V(!j::equal(_lhs37728,_rhs37729,true));})();return !j::truth(_logical37727)?j::unary("!",j::get(_v_36747_v,this->_literals[1])):_logical37727;})())){(void)(([&]()->V{V _callee37734=this->_v_36700_fail.get();return j::call(_callee37734,j::Args{([&]()->V{std::u16string _text37730;_text37730+=u"";_text37730+=j::string(_v_36748_what);_text37730+=u" takes a string of one or more characters, not ";_text37730+=j::string(([&]()->V{V _receiver37731=j::builtin("JSON");V _method37732=this->_literals[3];V _method=j::get(_receiver37731,_method37732);j::Args _params37733=j::Args{_v_36747_v};return j::call(_method,_params37733,_receiver37731);})());_text37730+=u"";return V(std::move(_text37730));})()});})());
}
return ([&]()->V{V _receiver37736=j::builtin("Uint16Array");V _method37737=this->_literals[5];V _method=j::get(_receiver37736,_method37737);j::Args _params37738=j::Args{_v_36747_v,j::function([=](const j::Args &_args_fn36749,const V &_receiver_fn36749,const V &_self_fn36749) mutable ->V{
V _v_36750_ch;
_v_36750_ch=_args_fn36749[0];
return ([&]()->V{V _callee37735=this->_v_36699_code.get();return j::call(_callee37735,j::Args{_v_36750_ch});})();
return V{};
},1)};return j::call(_method,_params37738,_receiver37736);})();

}

return V{};
},2);
this->_v_36751_fadeOf.get()=j::function([=](const j::Args &_args_fn36752,const V &_receiver_fn36752,const V &_self_fn36752) mutable ->V{
V _v_36753_given;
V _v_36754_steps;
V _v_36755_what;
_v_36753_given=_args_fn36752[0];
_v_36754_steps=_args_fn36752[1];
_v_36755_what=_args_fn36752[2];
{
V _v_36756_spec;
V _v_36757_themed;
V _v_36758_f;
V _v_36759_ok;
V _v_36760_one;
V _v_36761_s;
_v_36756_spec=(j::truth(([&]()->V{V _lhs37739=j::unary("typeof",_v_36753_given);V _rhs37740=this->_literals[4];return V(j::equal(_lhs37739,_rhs37740,true));})())?([&]()->V{V _callee37741=this->_v_36695_colorsOf.get();return j::call(_callee37741,j::Args{_v_36753_given,_v_36755_what});})():_v_36753_given);
_v_36757_themed=([&]()->V{V _logical37742=([&]()->V{V _logical37743=j::unary("!",j::unary("!",_v_36756_spec));return j::truth(_logical37743)?([&]()->V{V _lhs37744=j::unary("typeof",_v_36756_spec);V _rhs37745=this->_literals[6];return V(j::equal(_lhs37744,_rhs37745,true));})():_logical37743;})();return j::truth(_logical37742)?j::unary("!",([&]()->V{V _receiver37746=j::builtin("Array");V _method37747=this->_literals[0];V _method=j::get(_receiver37746,_method37747);j::Args _params37748=j::Args{_v_36756_spec};return j::call(_method,_params37748,_receiver37746);})()):_logical37742;})();
_v_36758_f=_v_36756_spec;
_v_36759_ok=(j::truth(([&]()->V{V _receiver37749=j::builtin("Array");V _method37750=this->_literals[0];V _method=j::get(_receiver37749,_method37750);j::Args _params37751=j::Args{_v_36756_spec};return j::call(_method,_params37751,_receiver37749);})())?([&]()->V{V _logical37752=([&]()->V{V _lhs37753=j::get(_v_36756_spec,this->_literals[1]);V _rhs37754=V(0.0);return j::binary(">",_lhs37753,_rhs37754);})();return j::truth(_logical37752)?([&]()->V{V _receiver37755=_v_36756_spec;V _method37756=this->_literals[7];V _method=j::get(_receiver37755,_method37756);j::Args _params37757=j::Args{this->_v_36702_isHex.get()};return j::call(_method,_params37757,_receiver37755);})():_logical37752;})():([&]()->V{V _logical37758=([&]()->V{V _logical37759=([&]()->V{V _logical37760=([&]()->V{V _logical37761=([&]()->V{V _logical37762=_v_36757_themed;return j::truth(_logical37762)?([&]()->V{V _receiver37763=j::builtin("Array");V _method37764=this->_literals[0];V _method=j::get(_receiver37763,_method37764);j::Args _params37765=j::Args{j::get(_v_36758_f,this->_literals[8])};return j::call(_method,_params37765,_receiver37763);})():_logical37762;})();return j::truth(_logical37761)?([&]()->V{V _receiver37766=j::builtin("Array");V _method37767=this->_literals[0];V _method=j::get(_receiver37766,_method37767);j::Args _params37768=j::Args{j::get(_v_36758_f,this->_literals[9])};return j::call(_method,_params37768,_receiver37766);})():_logical37761;})();return j::truth(_logical37760)?([&]()->V{V _lhs37769=j::get(j::get(_v_36758_f,this->_literals[8]),this->_literals[1]);V _rhs37770=V(0.0);return j::binary(">",_lhs37769,_rhs37770);})():_logical37760;})();return j::truth(_logical37759)?([&]()->V{V _lhs37771=j::get(j::get(_v_36758_f,this->_literals[8]),this->_literals[1]);V _rhs37772=j::get(j::get(_v_36758_f,this->_literals[9]),this->_literals[1]);return V(j::equal(_lhs37771,_rhs37772,true));})():_logical37759;})();return j::truth(_logical37758)?([&]()->V{V _receiver37773=([&]()->V{j::Args _array37776;for(const auto &_value:j::elements(j::get(_v_36758_f,this->_literals[8])))_array37776.push_back(_value);for(const auto &_value:j::elements(j::get(_v_36758_f,this->_literals[9])))_array37776.push_back(_value);return j::array(std::move(_array37776));})();V _method37774=this->_literals[7];V _method=j::get(_receiver37773,_method37774);j::Args _params37775=j::Args{this->_v_36702_isHex.get()};return j::call(_method,_params37775,_receiver37773);})():_logical37758;})());
if(j::truth(j::unary("!",_v_36759_ok))){(void)(([&]()->V{V _callee37781=this->_v_36700_fail.get();return j::call(_callee37781,j::Args{([&]()->V{std::u16string _text37777;_text37777+=u"";_text37777+=j::string(_v_36755_what);_text37777+=u" takes colours as #rrggbb: a list, or { light, dark } lists of the same length, not ";_text37777+=j::string(([&]()->V{V _receiver37778=j::builtin("JSON");V _method37779=this->_literals[3];V _method=j::get(_receiver37778,_method37779);j::Args _params37780=j::Args{_v_36756_spec};return j::call(_method,_params37780,_receiver37778);})());_text37777+=u"";return V(std::move(_text37777));})()});})());
}
_v_36760_one=(j::truth(([&]()->V{V _receiver37782=j::builtin("Array");V _method37783=this->_literals[0];V _method=j::get(_receiver37782,_method37783);j::Args _params37784=j::Args{_v_36756_spec};return j::call(_method,_params37784,_receiver37782);})())?([&]()->V{V _lhs37785=j::get(_v_36756_spec,this->_literals[1]);V _rhs37786=V(1.0);return V(j::equal(_lhs37785,_rhs37786,true));})():([&]()->V{V _lhs37787=j::get(j::get(_v_36758_f,this->_literals[8]),this->_literals[1]);V _rhs37788=V(1.0);return V(j::equal(_lhs37787,_rhs37788,true));})());
_v_36761_s=([&]()->V{V _callee37789=this->_v_36708_spread.get();return j::call(_callee37789,j::Args{_v_36756_spec,(j::truth(_v_36760_one)?V(1.0):_v_36754_steps)});})();
return (j::truth(([&]()->V{V _receiver37790=j::builtin("Array");V _method37791=this->_literals[0];V _method=j::get(_receiver37790,_method37791);j::Args _params37792=j::Args{_v_36761_s};return j::call(_method,_params37792,_receiver37790);})())?([&]()->V{V _obj37793=j::object();j::put(_obj37793,this->_literals[8],_v_36761_s);j::put(_obj37793,this->_literals[9],_v_36761_s);return _obj37793;})():_v_36761_s);

}

return V{};
},3);
this->_v_36770_pictureOf.get()=j::function([=](const j::Args &_args_fn36771,const V &_receiver_fn36771,const V &_self_fn36771) mutable ->V{
V _v_36772_src;
V _v_36773_colours;
_v_36772_src=_args_fn36771[0];
_v_36773_colours=_args_fn36771[1];
{
V _v_36774_text;
V _v_36775_palette;
V _v_36776_light;
V _v_36777_dark;
V _v_36778_cols;
V _v_36781_all;
V _v_36784_top;
V _v_36785_end;
_v_36774_text=_v_36772_src;
_v_36775_palette=V::null();
_v_36776_light=V::null();
_v_36777_dark=V::null();
_v_36778_cols=V(0.0);
if(j::truth(([&]()->V{V _lhs37794=j::unary("typeof",_v_36772_src);V _rhs37795=this->_literals[4];return V(!j::equal(_lhs37794,_rhs37795,true));})())){
V _v_36779_p;
V _v_36780_at;
_v_36779_p=([&]()->V{V _callee37796=this->_v_36693_asPiece.get();return j::call(_callee37796,j::Args{_v_36772_src});})();
_v_36780_at=([&]()->V{V _logical37797=j::get(j::get(_v_36779_p,this->_literals[10]),this->_literals[11]);return j::nullish(_logical37797)?V(0.0):_logical37797;})();
(void)((_v_36774_text=j::get(([&]()->V{V _callee37800=this->_v_36706_snapshot.get();return j::call(_callee37800,j::Args{_v_36779_p,_v_36780_at,([&]()->V{V _obj37799=j::object();j::put(_obj37799,this->_literals[12],V(true));return _obj37799;})()});})(),this->_literals[13])));
if(j::truth(([&]()->V{V _logical37801=_v_36773_colours;return j::truth(_logical37801)?j::get(j::get(_v_36779_p,this->_literals[10]),this->_literals[14]):_logical37801;})())){
(void)(((_v_36775_palette=j::get(j::get(_v_36779_p,this->_literals[10]),this->_literals[14])),(_v_36778_cols=j::get(j::get(_v_36779_p,this->_literals[10]),this->_literals[15]))));
(void)(((_v_36776_light=j::get(([&]()->V{V _callee37806=this->_v_36706_snapshot.get();return j::call(_callee37806,j::Args{_v_36779_p,_v_36780_at,([&]()->V{V _obj37805=j::object();j::put(_obj37805,this->_literals[16],V(true));return _obj37805;})()});})(),this->_literals[17])),(_v_36777_dark=j::get(([&]()->V{V _callee37808=this->_v_36706_snapshot.get();return j::call(_callee37808,j::Args{_v_36779_p,_v_36780_at});})(),this->_literals[17]))));

}


}

_v_36781_all=([&]()->V{V _receiver37812=([&]()->V{V _receiver37815=_v_36774_text;V _method37816=this->_literals[20];V _method=j::get(_receiver37815,_method37816);j::Args _params37817=j::Args{this->_literals[19]};return j::call(_method,_params37817,_receiver37815);})();V _method37813=this->_literals[21];V _method=j::get(_receiver37812,_method37813);j::Args _params37814=j::Args{j::function([=](const j::Args &_args_fn36782,const V &_receiver_fn36782,const V &_self_fn36782) mutable ->V{
V _v_36783_l;
_v_36783_l=_args_fn36782[0];
return ([&]()->V{V _receiver37809=_v_36783_l;V _method37810=this->_literals[18];V _method=j::get(_receiver37809,_method37810);j::Args _params37811=j::Args{};return j::call(_method,_params37811,_receiver37809);})();
return V{};
},1)};return j::call(_method,_params37814,_receiver37812);})();
_v_36784_top=V(0.0);
_v_36785_end=j::get(_v_36781_all,this->_literals[1]);
while(j::truth(([&]()->V{V _logical37818=([&]()->V{V _lhs37819=_v_36784_top;V _rhs37820=_v_36785_end;return j::binary("<",_lhs37819,_rhs37820);})();return j::truth(_logical37818)?j::unary("!",j::get(_v_36781_all,_v_36784_top)):_logical37818;})())){(void)(j::increment(_v_36784_top,1,false));
}
while(j::truth(([&]()->V{V _logical37821=([&]()->V{V _lhs37822=_v_36785_end;V _rhs37823=_v_36784_top;return j::binary(">",_lhs37822,_rhs37823);})();return j::truth(_logical37821)?j::unary("!",j::get(_v_36781_all,([&]()->V{V _lhs37824=_v_36785_end;V _rhs37825=V(1.0);return V(j::number(_lhs37824)-j::number(_rhs37825));})())):_logical37821;})())){(void)(j::increment(_v_36785_end,-1,false));
}
return ([&]()->V{V _obj37826=j::object();j::put(_obj37826,this->_literals[22],([&]()->V{V _receiver37827=_v_36781_all;V _method37828=this->_literals[23];V _method=j::get(_receiver37827,_method37828);j::Args _params37829=j::Args{_v_36784_top,_v_36785_end};return j::call(_method,_params37829,_receiver37827);})());j::put(_obj37826,this->_literals[24],_v_36784_top);j::put(_obj37826,this->_literals[14],_v_36775_palette);j::put(_obj37826,this->_literals[8],_v_36776_light);j::put(_obj37826,this->_literals[9],_v_36777_dark);j::put(_obj37826,this->_literals[15],_v_36778_cols);return _obj37826;})();

}

return V{};
},2);
this->_v_36786_lettersOf.get()=j::function([=](const j::Args &_args_fn36787,const V &_receiver_fn36787,const V &_self_fn36787) mutable ->V{
V _v_36788_src;
V _v_36789_at;
V _v_36790_what;
_v_36788_src=_args_fn36787[0];
_v_36789_at=_args_fn36787[1];
_v_36790_what=_args_fn36787[2];
{
V _v_36791_lines;
j::Cell _v_36792_dx;
j::Cell _v_36793_dy;
j::Cell _v_36794_codes;
j::Cell _v_36795_chars;
if(j::truth(j::unary("!",([&]()->V{V _callee37830=this->_v_36767_isSource.get();return j::call(_callee37830,j::Args{_v_36788_src});})()))){(void)(([&]()->V{V _callee37835=this->_v_36700_fail.get();return j::call(_callee37835,j::Args{([&]()->V{std::u16string _text37831;_text37831+=u"";_text37831+=j::string(_v_36790_what);_text37831+=u".emitter.text takes text, a piece such as banner(\"hi\"), or a Surface, not ";_text37831+=j::string(([&]()->V{V _receiver37832=j::builtin("JSON");V _method37833=this->_literals[3];V _method=j::get(_receiver37832,_method37833);j::Args _params37834=j::Args{_v_36788_src};return j::call(_method,_params37834,_receiver37832);})());_text37831+=u"";return V(std::move(_text37831));})()});})());
}
if(j::truth(([&]()->V{V _logical37836=([&]()->V{V _lhs37837=_v_36789_at;V _rhs37838=j::builtin("undefined");return V(!j::equal(_lhs37837,_rhs37838,true));})();return j::truth(_logical37836)?j::unary("!",([&]()->V{V _receiver37839=this->_v_36719_PLACES.get();V _method37840=this->_literals[25];V _method=j::get(_receiver37839,_method37840);j::Args _params37841=j::Args{_v_36789_at};return j::call(_method,_params37841,_receiver37839);})()):_logical37836;})())){(void)(([&]()->V{V _callee37847=this->_v_36700_fail.get();return j::call(_callee37847,j::Args{([&]()->V{std::u16string _text37842;_text37842+=u"";_text37842+=j::string(_v_36790_what);_text37842+=u".emitter.at takes a place, ";_text37842+=j::string(([&]()->V{V _callee37843=this->_v_36731_quoted.get();return j::call(_callee37843,j::Args{this->_v_36719_PLACES.get()});})());_text37842+=u", not ";_text37842+=j::string(([&]()->V{V _receiver37844=j::builtin("JSON");V _method37845=this->_literals[3];V _method=j::get(_receiver37844,_method37845);j::Args _params37846=j::Args{_v_36789_at};return j::call(_method,_params37846,_receiver37844);})());_text37842+=u"";return V(std::move(_text37842));})()});})());
}
V _pattern37849=([&]()->V{V _callee37848=this->_v_36770_pictureOf.get();return j::call(_callee37848,j::Args{_v_36788_src,V(false)});})();
_v_36791_lines=j::get(_pattern37849,this->_literals[22]);
_v_36792_dx.get()=([&]()->V{j::Args _array37850;return j::array(std::move(_array37850));})();
_v_36793_dy.get()=([&]()->V{j::Args _array37851;return j::array(std::move(_array37851));})();
_v_36794_codes.get()=([&]()->V{j::Args _array37852;return j::array(std::move(_array37852));})();
_v_36795_chars.get()=([&]()->V{j::Args _array37853;return j::array(std::move(_array37853));})();
(void)(([&]()->V{V _receiver37871=_v_36791_lines;V _method37872=this->_literals[28];V _method=j::get(_receiver37871,_method37872);j::Args _params37873=j::Args{j::function([=](const j::Args &_args_fn36796,const V &_receiver_fn36796,const V &_self_fn36796) mutable ->V{
V _v_36797_line;
V _v_36798_r;
_v_36797_line=_args_fn36796[0];
_v_36798_r=_args_fn36796[1];
{
{V _v_36799_c;
_v_36799_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs37854=_v_36799_c;V _rhs37855=j::get(_v_36797_line,this->_literals[1]);return j::binary("<",_lhs37854,_rhs37855);})());(void)(j::increment(_v_36799_c,1,false))){
if(j::truth(([&]()->V{V _lhs37856=j::get(_v_36797_line,_v_36799_c);V _rhs37857=this->_literals[26];return V(j::equal(_lhs37856,_rhs37857,true));})())){continue;
}
(void)(([&]()->V{V _receiver37859=_v_36794_codes.get();V _method37860=this->_literals[27];V _method=j::get(_receiver37859,_method37860);j::Args _params37861=j::Args{([&]()->V{V _callee37858=this->_v_36699_code.get();return j::call(_callee37858,j::Args{j::get(_v_36797_line,_v_36799_c)});})()};return j::call(_method,_params37861,_receiver37859);})());
(void)((([&]()->V{V _receiver37862=_v_36792_dx.get();V _method37863=this->_literals[27];V _method=j::get(_receiver37862,_method37863);j::Args _params37864=j::Args{_v_36799_c};return j::call(_method,_params37864,_receiver37862);})(),([&]()->V{V _receiver37865=_v_36793_dy.get();V _method37866=this->_literals[27];V _method=j::get(_receiver37865,_method37866);j::Args _params37867=j::Args{_v_36798_r};return j::call(_method,_params37867,_receiver37865);})(),([&]()->V{V _receiver37868=_v_36795_chars.get();V _method37869=this->_literals[27];V _method=j::get(_receiver37868,_method37869);j::Args _params37870=j::Args{j::get(_v_36797_line,_v_36799_c)};return j::call(_method,_params37870,_receiver37868);})()));

}
}

}

return V{};
},2)};return j::call(_method,_params37873,_receiver37871);})());
if(j::truth(j::unary("!",j::get(_v_36794_codes.get(),this->_literals[1])))){(void)(([&]()->V{V _callee37875=this->_v_36700_fail.get();return j::call(_callee37875,j::Args{([&]()->V{std::u16string _text37874;_text37874+=u"";_text37874+=j::string(_v_36790_what);_text37874+=u".emitter.text takes text with at least one character that isn't a space";return V(std::move(_text37874));})()});})());
}
return ([&]()->V{V _obj37876=j::object();j::put(_obj37876,this->_literals[29],([&]()->V{V _receiver37881=j::builtin("Math");V _method37882=this->_literals[30];V _method=j::get(_receiver37881,_method37882);j::Args _params37883=([&](){j::Args _args37877;for(const auto &_v:j::elements(([&]()->V{V _receiver37878=_v_36791_lines;V _method37879=this->_literals[21];V _method=j::get(_receiver37878,_method37879);j::Args _params37880=j::Args{j::function([=](const j::Args &_args_fn36800,const V &_receiver_fn36800,const V &_self_fn36800) mutable ->V{
V _v_36801_l;
_v_36801_l=_args_fn36800[0];
return j::get(_v_36801_l,this->_literals[1]);
return V{};
},1)};return j::call(_method,_params37880,_receiver37878);})()))_args37877.push_back(_v);return _args37877;})();return j::call(_method,_params37883,_receiver37881);})());j::put(_obj37876,this->_literals[31],j::get(_v_36791_lines,this->_literals[1]));j::put(_obj37876,this->_literals[32],([&]()->V{V _logical37884=_v_36789_at;return j::nullish(_logical37884)?this->_literals[33]:_logical37884;})());j::put(_obj37876,this->_literals[34],([&]()->V{V _receiver37885=j::builtin("Int32Array");V _method37886=this->_literals[5];V _method=j::get(_receiver37885,_method37886);j::Args _params37887=j::Args{_v_36792_dx.get()};return j::call(_method,_params37887,_receiver37885);})());j::put(_obj37876,this->_literals[35],([&]()->V{V _receiver37888=j::builtin("Int32Array");V _method37889=this->_literals[5];V _method=j::get(_receiver37888,_method37889);j::Args _params37890=j::Args{_v_36793_dy.get()};return j::call(_method,_params37890,_receiver37888);})());j::put(_obj37876,this->_literals[36],([&]()->V{V _receiver37891=j::builtin("Uint16Array");V _method37892=this->_literals[5];V _method=j::get(_receiver37891,_method37892);j::Args _params37893=j::Args{_v_36794_codes.get()};return j::call(_method,_params37893,_receiver37891);})());j::put(_obj37876,this->_literals[37],_v_36795_chars.get());return _obj37876;})();

}

return V{};
},3);
this->_v_36802_checkEmitter.get()=j::function([=](const j::Args &_args_fn36803,const V &_receiver_fn36803,const V &_self_fn36803) mutable ->V{
V _v_36804_e;
V _v_36805_what;
_v_36804_e=_args_fn36803[0];
_v_36805_what=_args_fn36803[1];
{
V _v_36806_pt;
V _v_36809_keys;
V _v_36812_em;
_v_36806_pt=j::function([=](const j::Args &_args_fn36807,const V &_receiver_fn36807,const V &_self_fn36807) mutable ->V{
V _v_36808_p;
_v_36808_p=_args_fn36807[0];
return ([&]()->V{V _logical37894=([&]()->V{V _logical37895=([&]()->V{V _logical37896=([&]()->V{V _receiver37897=j::builtin("Array");V _method37898=this->_literals[0];V _method=j::get(_receiver37897,_method37898);j::Args _params37899=j::Args{_v_36808_p};return j::call(_method,_params37899,_receiver37897);})();return j::truth(_logical37896)?([&]()->V{V _lhs37900=j::get(_v_36808_p,this->_literals[1]);V _rhs37901=V(2.0);return V(j::equal(_lhs37900,_rhs37901,true));})():_logical37896;})();return j::truth(_logical37895)?([&]()->V{V _callee37902=this->_v_36728_num.get();return j::call(_callee37902,j::Args{j::get(_v_36808_p,V(0.0))});})():_logical37895;})();return j::truth(_logical37894)?([&]()->V{V _callee37903=this->_v_36728_num.get();return j::call(_callee37903,j::Args{j::get(_v_36808_p,V(1.0))});})():_logical37894;})();
return V{};
},1);
if(j::truth(([&]()->V{V _lhs37904=j::unary("typeof",_v_36804_e);V _rhs37905=this->_literals[4];return V(j::equal(_lhs37904,_rhs37905,true));})())){
if(j::truth(([&]()->V{V _receiver37906=this->_v_36718_EDGES.get();V _method37907=this->_literals[25];V _method=j::get(_receiver37906,_method37907);j::Args _params37908=j::Args{_v_36804_e};return j::call(_method,_params37908,_receiver37906);})())){return ([&]()->V{V _obj37909=j::object();j::put(_obj37909,this->_literals[38],_v_36804_e);return _obj37909;})();
}
if(j::truth(([&]()->V{V _lhs37910=_v_36804_e;V _rhs37911=this->_literals[39];return V(j::equal(_lhs37910,_rhs37911,true));})())){return ([&]()->V{V _obj37912=j::object();j::put(_obj37912,this->_literals[40],V::null());return _obj37912;})();
}
if(j::truth(([&]()->V{V _lhs37913=_v_36804_e;V _rhs37914=this->_literals[33];return V(j::equal(_lhs37913,_rhs37914,true));})())){return ([&]()->V{V _obj37915=j::object();j::put(_obj37915,this->_literals[41],this->_literals[33]);return _obj37915;})();
}
(void)(([&]()->V{V _callee37921=this->_v_36700_fail.get();return j::call(_callee37921,j::Args{([&]()->V{std::u16string _text37916;_text37916+=u"";_text37916+=j::string(_v_36805_what);_text37916+=u".emitter takes ";_text37916+=j::string(([&]()->V{V _callee37917=this->_v_36731_quoted.get();return j::call(_callee37917,j::Args{this->_v_36762_WORDS.get()});})());_text37916+=u", or { point }, { line }, { area }, { edge } or { text }, not ";_text37916+=j::string(([&]()->V{V _receiver37918=j::builtin("JSON");V _method37919=this->_literals[3];V _method=j::get(_receiver37918,_method37919);j::Args _params37920=j::Args{_v_36804_e};return j::call(_method,_params37920,_receiver37918);})());_text37916+=u"";return V(std::move(_text37916));})()});})());

}

if(j::truth(([&]()->V{V _logical37922=j::unary("!",_v_36804_e);return !j::truth(_logical37922)?([&]()->V{V _lhs37923=j::unary("typeof",_v_36804_e);V _rhs37924=this->_literals[6];return V(!j::equal(_lhs37923,_rhs37924,true));})():_logical37922;})())){(void)(([&]()->V{V _callee37930=this->_v_36700_fail.get();return j::call(_callee37930,j::Args{([&]()->V{std::u16string _text37925;_text37925+=u"";_text37925+=j::string(_v_36805_what);_text37925+=u".emitter takes ";_text37925+=j::string(([&]()->V{V _callee37926=this->_v_36731_quoted.get();return j::call(_callee37926,j::Args{this->_v_36762_WORDS.get()});})());_text37925+=u", or { point }, { line }, { area }, { edge } or { text }, not ";_text37925+=j::string(([&]()->V{V _receiver37927=j::builtin("JSON");V _method37928=this->_literals[3];V _method=j::get(_receiver37927,_method37928);j::Args _params37929=j::Args{_v_36804_e};return j::call(_method,_params37929,_receiver37927);})());_text37925+=u"";return V(std::move(_text37925));})()});})());
}
_v_36809_keys=([&]()->V{V _receiver37934=([&]()->V{V _receiver37937=j::builtin("Object");V _method37938=this->_literals[42];V _method=j::get(_receiver37937,_method37938);j::Args _params37939=j::Args{_v_36804_e};return j::call(_method,_params37939,_receiver37937);})();V _method37935=this->_literals[43];V _method=j::get(_receiver37934,_method37935);j::Args _params37936=j::Args{j::function([=](const j::Args &_args_fn36810,const V &_receiver_fn36810,const V &_self_fn36810) mutable ->V{
V _v_36811_k;
_v_36811_k=_args_fn36810[0];
return ([&]()->V{V _receiver37931=this->_v_36763_KINDS.get();V _method37932=this->_literals[25];V _method=j::get(_receiver37931,_method37932);j::Args _params37933=j::Args{_v_36811_k};return j::call(_method,_params37933,_receiver37931);})();
return V{};
},1)};return j::call(_method,_params37936,_receiver37934);})();
if(j::truth(([&]()->V{V _lhs37940=j::get(_v_36809_keys,this->_literals[1]);V _rhs37941=V(1.0);return V(!j::equal(_lhs37940,_rhs37941,true));})())){(void)(([&]()->V{V _callee37947=this->_v_36700_fail.get();return j::call(_callee37947,j::Args{([&]()->V{std::u16string _text37942;_text37942+=u"";_text37942+=j::string(_v_36805_what);_text37942+=u".emitter takes one of point, line, area, edge, text and mark, not ";_text37942+=j::string((j::truth(j::get(_v_36809_keys,this->_literals[1]))?([&]()->V{V _callee37943=this->_v_36698_and.get();return j::call(_callee37943,j::Args{_v_36809_keys});})():([&]()->V{V _receiver37944=j::builtin("JSON");V _method37945=this->_literals[3];V _method=j::get(_receiver37944,_method37945);j::Args _params37946=j::Args{_v_36804_e};return j::call(_method,_params37946,_receiver37944);})()));_text37942+=u"";return V(std::move(_text37942));})()});})());
}
_v_36812_em=_v_36804_e;
if(j::truth(([&]()->V{V _lhs37948=j::get(_v_36809_keys,V(0.0));V _rhs37949=this->_literals[13];return V(j::equal(_lhs37948,_rhs37949,true));})())){return ([&]()->V{V _obj37950=j::object();j::put(_obj37950,this->_literals[44],([&]()->V{V _callee37951=this->_v_36786_lettersOf.get();return j::call(_callee37951,j::Args{j::get(_v_36812_em,this->_literals[13]),j::get(_v_36812_em,this->_literals[32]),_v_36805_what});})());return _obj37950;})();
}
if(j::truth(([&]()->V{V _lhs37952=j::get(_v_36809_keys,V(0.0));V _rhs37953=this->_literals[45];return V(j::equal(_lhs37952,_rhs37953,true));})())){
if(j::truth(([&]()->V{V _logical37954=([&]()->V{V _logical37955=([&]()->V{V _lhs37956=j::unary("typeof",j::get(_v_36812_em,this->_literals[45]));V _rhs37957=this->_literals[4];return V(!j::equal(_lhs37956,_rhs37957,true));})();return !j::truth(_logical37955)?([&]()->V{V _lhs37958=j::get(j::get(_v_36812_em,this->_literals[45]),this->_literals[1]);V _rhs37959=V(1.0);return V(!j::equal(_lhs37958,_rhs37959,true));})():_logical37955;})();return !j::truth(_logical37954)?([&]()->V{V _lhs37960=j::get(_v_36812_em,this->_literals[45]);V _rhs37961=this->_literals[26];return V(j::equal(_lhs37960,_rhs37961,true));})():_logical37954;})())){(void)(([&]()->V{V _callee37966=this->_v_36700_fail.get();return j::call(_callee37966,j::Args{([&]()->V{std::u16string _text37962;_text37962+=u"";_text37962+=j::string(_v_36805_what);_text37962+=u".emitter.mark takes one character other than a space, such as \"^\", not ";_text37962+=j::string(([&]()->V{V _receiver37963=j::builtin("JSON");V _method37964=this->_literals[3];V _method=j::get(_receiver37963,_method37964);j::Args _params37965=j::Args{j::get(_v_36812_em,this->_literals[45])};return j::call(_method,_params37965,_receiver37963);})());_text37962+=u"";return V(std::move(_text37962));})()});})());
}
(void)(([&]()->V{V _callee37967=this->_v_36699_code.get();return j::call(_callee37967,j::Args{j::get(_v_36812_em,this->_literals[45])});})());
return ([&]()->V{V _obj37968=j::object();j::put(_obj37968,this->_literals[45],j::get(_v_36812_em,this->_literals[45]));return _obj37968;})();

}

if(j::truth(([&]()->V{V _lhs37969=j::get(_v_36809_keys,V(0.0));V _rhs37970=this->_literals[41];return V(j::equal(_lhs37969,_rhs37970,true));})())){
V _v_36813_p;
_v_36813_p=j::get(_v_36812_em,this->_literals[41]);
if(j::truth(([&]()->V{V _lhs37971=j::unary("typeof",_v_36813_p);V _rhs37972=this->_literals[46];return V(j::equal(_lhs37971,_rhs37972,true));})())){
V _v_36814_at;
_v_36814_at=([&]()->V{V _callee37973=_v_36813_p;return j::call(_callee37973,j::Args{V(0.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _callee37974=_v_36806_pt;return j::call(_callee37974,j::Args{_v_36814_at});})()))){(void)(([&]()->V{V _callee37979=this->_v_36700_fail.get();return j::call(_callee37979,j::Args{([&]()->V{std::u16string _text37975;_text37975+=u"";_text37975+=j::string(_v_36805_what);_text37975+=u".emitter.point as a function takes the time and returns [column, row], not ";_text37975+=j::string(([&]()->V{V _receiver37976=j::builtin("JSON");V _method37977=this->_literals[3];V _method=j::get(_receiver37976,_method37977);j::Args _params37978=j::Args{_v_36814_at};return j::call(_method,_params37978,_receiver37976);})());_text37975+=u"";return V(std::move(_text37975));})()});})());
}

}
else {if(j::truth(([&]()->V{V _lhs37980=j::unary("typeof",_v_36813_p);V _rhs37981=this->_literals[4];return V(j::equal(_lhs37980,_rhs37981,true));})())){
if(j::truth(j::unary("!",([&]()->V{V _receiver37982=this->_v_36719_PLACES.get();V _method37983=this->_literals[25];V _method=j::get(_receiver37982,_method37983);j::Args _params37984=j::Args{_v_36813_p};return j::call(_method,_params37984,_receiver37982);})()))){(void)(([&]()->V{V _callee37990=this->_v_36700_fail.get();return j::call(_callee37990,j::Args{([&]()->V{std::u16string _text37985;_text37985+=u"";_text37985+=j::string(_v_36805_what);_text37985+=u".emitter.point takes a place, ";_text37985+=j::string(([&]()->V{V _callee37986=this->_v_36731_quoted.get();return j::call(_callee37986,j::Args{this->_v_36719_PLACES.get()});})());_text37985+=u", or [column, row], not ";_text37985+=j::string(([&]()->V{V _receiver37987=j::builtin("JSON");V _method37988=this->_literals[3];V _method=j::get(_receiver37987,_method37988);j::Args _params37989=j::Args{_v_36813_p};return j::call(_method,_params37989,_receiver37987);})());_text37985+=u"";return V(std::move(_text37985));})()});})());
}

}
else {if(j::truth(j::unary("!",([&]()->V{V _callee37991=_v_36806_pt;return j::call(_callee37991,j::Args{_v_36813_p});})()))){(void)(([&]()->V{V _callee37996=this->_v_36700_fail.get();return j::call(_callee37996,j::Args{([&]()->V{std::u16string _text37992;_text37992+=u"";_text37992+=j::string(_v_36805_what);_text37992+=u".emitter.point takes a place such as \"center\", [column, row], or a function of the time, not ";_text37992+=j::string(([&]()->V{V _receiver37993=j::builtin("JSON");V _method37994=this->_literals[3];V _method=j::get(_receiver37993,_method37994);j::Args _params37995=j::Args{_v_36813_p};return j::call(_method,_params37995,_receiver37993);})());_text37992+=u"";return V(std::move(_text37992));})()});})());
}
}
}

}
else {if(j::truth(([&]()->V{V _lhs37997=j::get(_v_36809_keys,V(0.0));V _rhs37998=this->_literals[47];return V(j::equal(_lhs37997,_rhs37998,true));})())){
V _v_36815_l;
_v_36815_l=j::get(_v_36812_em,this->_literals[47]);
if(j::truth(([&]()->V{V _logical37999=([&]()->V{V _logical38000=([&]()->V{V _logical38001=j::unary("!",([&]()->V{V _receiver38002=j::builtin("Array");V _method38003=this->_literals[0];V _method=j::get(_receiver38002,_method38003);j::Args _params38004=j::Args{_v_36815_l};return j::call(_method,_params38004,_receiver38002);})());return !j::truth(_logical38001)?([&]()->V{V _lhs38005=j::get(_v_36815_l,this->_literals[1]);V _rhs38006=V(2.0);return V(!j::equal(_lhs38005,_rhs38006,true));})():_logical38001;})();return !j::truth(_logical38000)?j::unary("!",([&]()->V{V _callee38007=_v_36806_pt;return j::call(_callee38007,j::Args{j::get(_v_36815_l,V(0.0))});})()):_logical38000;})();return !j::truth(_logical37999)?j::unary("!",([&]()->V{V _callee38008=_v_36806_pt;return j::call(_callee38008,j::Args{j::get(_v_36815_l,V(1.0))});})()):_logical37999;})())){(void)(([&]()->V{V _callee38013=this->_v_36700_fail.get();return j::call(_callee38013,j::Args{([&]()->V{std::u16string _text38009;_text38009+=u"";_text38009+=j::string(_v_36805_what);_text38009+=u".emitter.line takes two points, [[column, row], [column, row]], not ";_text38009+=j::string(([&]()->V{V _receiver38010=j::builtin("JSON");V _method38011=this->_literals[3];V _method=j::get(_receiver38010,_method38011);j::Args _params38012=j::Args{_v_36815_l};return j::call(_method,_params38012,_receiver38010);})());_text38009+=u"";return V(std::move(_text38009));})()});})());
}

}
else {if(j::truth(([&]()->V{V _lhs38014=j::get(_v_36809_keys,V(0.0));V _rhs38015=this->_literals[40];return V(j::equal(_lhs38014,_rhs38015,true));})())){
V _v_36816_r;
_v_36816_r=j::get(_v_36812_em,this->_literals[40]);
if(j::truth(([&]()->V{V _logical38016=([&]()->V{V _logical38017=([&]()->V{V _logical38018=([&]()->V{V _logical38019=j::unary("!",_v_36816_r);return !j::truth(_logical38019)?([&]()->V{V _lhs38020=j::unary("typeof",_v_36816_r);V _rhs38021=this->_literals[6];return V(!j::equal(_lhs38020,_rhs38021,true));})():_logical38019;})();return !j::truth(_logical38018)?j::unary("!",([&]()->V{V _receiver38022=([&]()->V{j::Args _array38025;_array38025.push_back(j::get(_v_36816_r,this->_literals[48]));_array38025.push_back(j::get(_v_36816_r,this->_literals[49]));_array38025.push_back(j::get(_v_36816_r,this->_literals[15]));_array38025.push_back(j::get(_v_36816_r,this->_literals[50]));return j::array(std::move(_array38025));})();V _method38023=this->_literals[7];V _method=j::get(_receiver38022,_method38023);j::Args _params38024=j::Args{this->_v_36728_num.get()};return j::call(_method,_params38024,_receiver38022);})()):_logical38018;})();return !j::truth(_logical38017)?([&]()->V{V _lhs38026=j::get(_v_36816_r,this->_literals[15]);V _rhs38027=V(0.0);return j::binary("<=",_lhs38026,_rhs38027);})():_logical38017;})();return !j::truth(_logical38016)?([&]()->V{V _lhs38028=j::get(_v_36816_r,this->_literals[50]);V _rhs38029=V(0.0);return j::binary("<=",_lhs38028,_rhs38029);})():_logical38016;})())){(void)(([&]()->V{V _callee38034=this->_v_36700_fail.get();return j::call(_callee38034,j::Args{([&]()->V{std::u16string _text38030;_text38030+=u"";_text38030+=j::string(_v_36805_what);_text38030+=u".emitter.area takes a region, { x, y, cols, rows } with cols and rows above 0, not ";_text38030+=j::string(([&]()->V{V _receiver38031=j::builtin("JSON");V _method38032=this->_literals[3];V _method=j::get(_receiver38031,_method38032);j::Args _params38033=j::Args{_v_36816_r};return j::call(_method,_params38033,_receiver38031);})());_text38030+=u"";return V(std::move(_text38030));})()});})());
}

}
else {if(j::truth(j::unary("!",([&]()->V{V _receiver38035=this->_v_36718_EDGES.get();V _method38036=this->_literals[25];V _method=j::get(_receiver38035,_method38036);j::Args _params38037=j::Args{j::get(_v_36812_em,this->_literals[38])};return j::call(_method,_params38037,_receiver38035);})()))){(void)(([&]()->V{V _callee38043=this->_v_36700_fail.get();return j::call(_callee38043,j::Args{([&]()->V{std::u16string _text38038;_text38038+=u"";_text38038+=j::string(_v_36805_what);_text38038+=u".emitter.edge takes ";_text38038+=j::string(([&]()->V{V _callee38039=this->_v_36731_quoted.get();return j::call(_callee38039,j::Args{this->_v_36718_EDGES.get()});})());_text38038+=u", not ";_text38038+=j::string(([&]()->V{V _receiver38040=j::builtin("JSON");V _method38041=this->_literals[3];V _method=j::get(_receiver38040,_method38041);j::Args _params38042=j::Args{j::get(_v_36812_em,this->_literals[38])};return j::call(_method,_params38042,_receiver38040);})());_text38038+=u"";return V(std::move(_text38038));})()});})());
}
}
}
}
return _v_36804_e;

}

return V{};
},2);
this->_v_36817_headingOf.get()=j::function([=](const j::Args &_args_fn36818,const V &_receiver_fn36818,const V &_self_fn36818) mutable ->V{
V _v_36819_sys;
V _v_36820_edge;
V _v_36821_what;
_v_36819_sys=_args_fn36818[0];
_v_36820_edge=_args_fn36818[1];
_v_36821_what=_args_fn36818[2];
{
V _v_36822_direction;
V _v_36823_fan;
V _v_36824_h;
V _v_36825_w;
V _pattern38044=_v_36819_sys;
_v_36822_direction=j::get(_pattern38044,this->_literals[51]);
_v_36823_fan=j::get(_pattern38044,this->_literals[52]);
if(j::truth(([&]()->V{V _logical38045=([&]()->V{V _lhs38046=_v_36822_direction;V _rhs38047=j::builtin("undefined");return V(!j::equal(_lhs38046,_rhs38047,true));})();return j::truth(_logical38045)?([&]()->V{V _lhs38048=j::get(_v_36819_sys,this->_literals[53]);V _rhs38049=j::builtin("undefined");return V(!j::equal(_lhs38048,_rhs38049,true));})():_logical38045;})())){(void)(([&]()->V{V _callee38051=this->_v_36700_fail.get();return j::call(_callee38051,j::Args{([&]()->V{std::u16string _text38050;_text38050+=u"";_text38050+=j::string(_v_36821_what);_text38050+=u" takes a direction or an angle, not both";return V(std::move(_text38050));})()});})());
}
if(j::truth(([&]()->V{V _logical38052=([&]()->V{V _lhs38053=_v_36823_fan;V _rhs38054=j::builtin("undefined");return V(!j::equal(_lhs38053,_rhs38054,true));})();return j::truth(_logical38052)?([&]()->V{V _lhs38055=j::get(_v_36819_sys,this->_literals[53]);V _rhs38056=j::builtin("undefined");return V(!j::equal(_lhs38055,_rhs38056,true));})():_logical38052;})())){(void)(([&]()->V{V _callee38058=this->_v_36700_fail.get();return j::call(_callee38058,j::Args{([&]()->V{std::u16string _text38057;_text38057+=u"";_text38057+=j::string(_v_36821_what);_text38057+=u".spread goes with a direction: with an angle, give [low, high] instead";return V(std::move(_text38057));})()});})());
}
if(j::truth(([&]()->V{V _logical38059=([&]()->V{V _lhs38060=_v_36822_direction;V _rhs38061=j::builtin("undefined");return V(!j::equal(_lhs38060,_rhs38061,true));})();return j::truth(_logical38059)?j::unary("!",([&]()->V{V _receiver38062=this->_v_36722_DIRECTIONS.get();V _method38063=this->_literals[25];V _method=j::get(_receiver38062,_method38063);j::Args _params38064=j::Args{_v_36822_direction};return j::call(_method,_params38064,_receiver38062);})()):_logical38059;})())){(void)(([&]()->V{V _callee38070=this->_v_36700_fail.get();return j::call(_callee38070,j::Args{([&]()->V{std::u16string _text38065;_text38065+=u"";_text38065+=j::string(_v_36821_what);_text38065+=u".direction takes ";_text38065+=j::string(([&]()->V{V _callee38066=this->_v_36731_quoted.get();return j::call(_callee38066,j::Args{this->_v_36722_DIRECTIONS.get()});})());_text38065+=u", not ";_text38065+=j::string(([&]()->V{V _receiver38067=j::builtin("JSON");V _method38068=this->_literals[3];V _method=j::get(_receiver38067,_method38068);j::Args _params38069=j::Args{_v_36822_direction};return j::call(_method,_params38069,_receiver38067);})());_text38065+=u"";return V(std::move(_text38065));})()});})());
}
if(j::truth(([&]()->V{V _logical38071=([&]()->V{V _lhs38072=_v_36823_fan;V _rhs38073=j::builtin("undefined");return V(!j::equal(_lhs38072,_rhs38073,true));})();return j::truth(_logical38071)?j::unary("!",([&]()->V{V _logical38074=([&]()->V{V _logical38075=([&]()->V{V _callee38076=this->_v_36728_num.get();return j::call(_callee38076,j::Args{_v_36823_fan});})();return j::truth(_logical38075)?([&]()->V{V _lhs38077=_v_36823_fan;V _rhs38078=V(0.0);return j::binary(">=",_lhs38077,_rhs38078);})():_logical38075;})();return j::truth(_logical38074)?([&]()->V{V _lhs38079=_v_36823_fan;V _rhs38080=V(360.0);return j::binary("<=",_lhs38079,_rhs38080);})():_logical38074;})()):_logical38071;})())){(void)(([&]()->V{V _callee38083=this->_v_36700_fail.get();return j::call(_callee38083,j::Args{([&]()->V{std::u16string _text38081;_text38081+=u"";_text38081+=j::string(_v_36821_what);_text38081+=u".spread takes degrees from 0 to 360, not ";_text38081+=j::string(([&]()->V{V _callee38082=j::builtin("String");return j::call(_callee38082,j::Args{_v_36823_fan});})());_text38081+=u"";return V(std::move(_text38081));})()});})());
}
if(j::truth(([&]()->V{V _logical38084=([&]()->V{V _lhs38085=_v_36822_direction;V _rhs38086=this->_literals[54];return V(j::equal(_lhs38085,_rhs38086,true));})();return !j::truth(_logical38084)?([&]()->V{V _logical38087=([&]()->V{V _logical38088=([&]()->V{V _lhs38089=_v_36822_direction;V _rhs38090=j::builtin("undefined");return V(j::equal(_lhs38089,_rhs38090,true));})();return j::truth(_logical38088)?([&]()->V{V _lhs38091=j::get(_v_36819_sys,this->_literals[53]);V _rhs38092=j::builtin("undefined");return V(j::equal(_lhs38091,_rhs38092,true));})():_logical38088;})();return j::truth(_logical38087)?j::unary("!",_v_36820_edge):_logical38087;})():_logical38084;})())){
if(j::truth(([&]()->V{V _logical38093=([&]()->V{V _lhs38094=_v_36823_fan;V _rhs38095=j::builtin("undefined");return V(!j::equal(_lhs38094,_rhs38095,true));})();return j::truth(_logical38093)?([&]()->V{V _lhs38096=_v_36822_direction;V _rhs38097=this->_literals[54];return V(!j::equal(_lhs38096,_rhs38097,true));})():_logical38093;})())){(void)(([&]()->V{V _callee38099=this->_v_36700_fail.get();return j::call(_callee38099,j::Args{([&]()->V{std::u16string _text38098;_text38098+=u"";_text38098+=j::string(_v_36821_what);_text38098+=u".spread fans out round a direction: give one too, such as direction: \"up\"";return V(std::move(_text38098));})()});})());
}
return ([&]()->V{j::Args _array38100;_array38100.push_back(V(0.0));_array38100.push_back(this->_v_36697_TAU.get());return j::array(std::move(_array38100));})();

}

if(j::truth(([&]()->V{V _lhs38101=j::get(_v_36819_sys,this->_literals[53]);V _rhs38102=j::builtin("undefined");return V(!j::equal(_lhs38101,_rhs38102,true));})())){return ([&]()->V{V _callee38105=this->_v_36736_range.get();return j::call(_callee38105,j::Args{j::get(_v_36819_sys,this->_literals[53]),([&]()->V{j::Args _array38103;_array38103.push_back(V(0.0));_array38103.push_back(this->_v_36697_TAU.get());return j::array(std::move(_array38103));})(),([&]()->V{std::u16string _text38104;_text38104+=u"";_text38104+=j::string(_v_36821_what);_text38104+=u".angle";return V(std::move(_text38104));})()});})();
}
_v_36824_h=(j::truth(_v_36822_direction)?j::get(this->_v_36721_HEADING.get(),_v_36822_direction):j::get(this->_v_36723_INWARD.get(),_v_36820_edge));
_v_36825_w=([&]()->V{V _lhs38106=([&]()->V{V _lhs38108=([&]()->V{V _logical38110=_v_36823_fan;return j::nullish(_logical38110)?V(0.0):_logical38110;})();V _rhs38109=V(360.0);return V(j::number(_lhs38108)/j::number(_rhs38109));})();V _rhs38107=j::get(j::builtin("Math"),this->_literals[55]);return V(j::number(_lhs38106)*j::number(_rhs38107));})();
return ([&]()->V{j::Args _array38111;_array38111.push_back(([&]()->V{V _lhs38112=_v_36824_h;V _rhs38113=_v_36825_w;return V(j::number(_lhs38112)-j::number(_rhs38113));})());_array38111.push_back(([&]()->V{V _lhs38114=_v_36824_h;V _rhs38115=_v_36825_w;return j::binary("+",_lhs38114,_rhs38115);})());return j::array(std::move(_array38111));})();

}

return V{};
},3);
this->_v_36826_plan.get()=j::function([=](const j::Args &_args_fn36827,const V &_receiver_fn36827,const V &_self_fn36827) mutable ->V{
V _v_36828_sys;
V _v_36829_n;
j::Cell _v_36830_what;
_v_36828_sys=_args_fn36827[0];
_v_36829_n=_args_fn36827[1];
_v_36830_what.get()=_args_fn36827[2];
{
V _v_36831_emitter;
V _v_36832_rate;
V _v_36833_letters;
V _v_36834_burst;
V _v_36837_hold;
V _v_36838_life;
V _v_36839_speed;
V _v_36840_side;
V _v_36841_angle;
V _v_36842_gravity;
V _v_36843_wind;
V _v_36844_gusts;
V _v_36846_drag;
V _v_36847_sway;
V _v_36848_swing;
V _v_36850_glyphs;
j::Cell _v_36851_steps;
V _v_36852_fades;
V _v_36856_twinkle;
V _v_36857_b;
V _v_36858_axis;
V _v_36862_both;
V _v_36863_bx;
V _v_36864_by;
V _v_36865_bounciness;
V _v_36866_path;
V _v_36867_splash;
V _v_36868_trail;
V _v_36869_trailGlyphs;
V _v_36870_trailFade;
V _v_36871_start;
V _v_36872_seed;
V _v_36873_pl;
if(j::truth(([&]()->V{V _logical38116=j::unary("!",_v_36828_sys);return !j::truth(_logical38116)?([&]()->V{V _lhs38117=j::unary("typeof",_v_36828_sys);V _rhs38118=this->_literals[6];return V(!j::equal(_lhs38117,_rhs38118,true));})():_logical38116;})())){(void)(([&]()->V{V _callee38123=this->_v_36700_fail.get();return j::call(_callee38123,j::Args{([&]()->V{std::u16string _text38119;_text38119+=u"";_text38119+=j::string(_v_36830_what.get());_text38119+=u" takes a system, { emitter, ... }, not ";_text38119+=j::string(([&]()->V{V _receiver38120=j::builtin("JSON");V _method38121=this->_literals[3];V _method=j::get(_receiver38120,_method38121);j::Args _params38122=j::Args{_v_36828_sys};return j::call(_method,_params38122,_receiver38120);})());_text38119+=u"";return V(std::move(_text38119));})()});})());
}
_v_36831_emitter=([&]()->V{V _callee38124=this->_v_36802_checkEmitter.get();return j::call(_callee38124,j::Args{j::get(_v_36828_sys,this->_literals[56]),_v_36830_what.get()});})();
if(j::truth(([&]()->V{V _logical38125=([&]()->V{V _lhs38126=j::get(_v_36828_sys,this->_literals[57]);V _rhs38127=j::builtin("undefined");return V(!j::equal(_lhs38126,_rhs38127,true));})();return j::truth(_logical38125)?([&]()->V{V _lhs38128=j::get(_v_36828_sys,this->_literals[58]);V _rhs38129=j::builtin("undefined");return V(!j::equal(_lhs38128,_rhs38129,true));})():_logical38125;})())){(void)(([&]()->V{V _callee38131=this->_v_36700_fail.get();return j::call(_callee38131,j::Args{([&]()->V{std::u16string _text38130;_text38130+=u"";_text38130+=j::string(_v_36830_what.get());_text38130+=u" takes a rate or a burst, not both";return V(std::move(_text38130));})()});})());
}
_v_36832_rate=([&]()->V{V _logical38132=j::get(_v_36828_sys,this->_literals[57]);return j::nullish(_logical38132)?V(20.0):_logical38132;})();
if(j::truth(([&]()->V{V _logical38133=j::unary("!",([&]()->V{V _callee38134=this->_v_36728_num.get();return j::call(_callee38134,j::Args{_v_36832_rate});})());return !j::truth(_logical38133)?([&]()->V{V _lhs38135=_v_36832_rate;V _rhs38136=V(0.0);return j::binary("<=",_lhs38135,_rhs38136);})():_logical38133;})())){(void)(([&]()->V{V _callee38139=this->_v_36700_fail.get();return j::call(_callee38139,j::Args{([&]()->V{std::u16string _text38137;_text38137+=u"";_text38137+=j::string(_v_36830_what.get());_text38137+=u".rate takes a number of particles a second above 0, not ";_text38137+=j::string(([&]()->V{V _callee38138=j::builtin("String");return j::call(_callee38138,j::Args{j::get(_v_36828_sys,this->_literals[57])});})());_text38137+=u"";return V(std::move(_text38137));})()});})());
}
_v_36833_letters=(j::truth(([&]()->V{V _lhs38140=this->_literals[44];V _rhs38141=_v_36831_emitter;return j::binary("in",_lhs38140,_rhs38141);})())?j::get(_v_36831_emitter,this->_literals[44]):V::null());
_v_36834_burst=V::null();
if(j::truth(([&]()->V{V _lhs38142=j::get(_v_36828_sys,this->_literals[58]);V _rhs38143=j::builtin("undefined");return V(!j::equal(_lhs38142,_rhs38143,true));})())){
V _v_36835_b;
V _v_36836_count;
_v_36835_b=j::get(_v_36828_sys,this->_literals[58]);
if(j::truth(([&]()->V{V _logical38144=j::unary("!",_v_36835_b);return !j::truth(_logical38144)?([&]()->V{V _lhs38145=j::unary("typeof",_v_36835_b);V _rhs38146=this->_literals[6];return V(!j::equal(_lhs38145,_rhs38146,true));})():_logical38144;})())){(void)(([&]()->V{V _callee38151=this->_v_36700_fail.get();return j::call(_callee38151,j::Args{([&]()->V{std::u16string _text38147;_text38147+=u"";_text38147+=j::string(_v_36830_what.get());_text38147+=u".burst takes { every, count }, not ";_text38147+=j::string(([&]()->V{V _receiver38148=j::builtin("JSON");V _method38149=this->_literals[3];V _method=j::get(_receiver38148,_method38149);j::Args _params38150=j::Args{_v_36835_b};return j::call(_method,_params38150,_receiver38148);})());_text38147+=u"";return V(std::move(_text38147));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _logical38152=([&]()->V{V _lhs38153=j::unary("typeof",j::get(_v_36835_b,this->_literals[7]));V _rhs38154=this->_literals[59];return V(j::equal(_lhs38153,_rhs38154,true));})();return j::truth(_logical38152)?([&]()->V{V _lhs38155=j::get(_v_36835_b,this->_literals[7]);V _rhs38156=V(0.0);return j::binary(">",_lhs38155,_rhs38156);})():_logical38152;})()))){(void)(([&]()->V{V _callee38159=this->_v_36700_fail.get();return j::call(_callee38159,j::Args{([&]()->V{std::u16string _text38157;_text38157+=u"";_text38157+=j::string(_v_36830_what.get());_text38157+=u".burst.every takes a number of seconds above 0 (Infinity for once), not ";_text38157+=j::string(([&]()->V{V _callee38158=j::builtin("String");return j::call(_callee38158,j::Args{j::get(_v_36835_b,this->_literals[7])});})());_text38157+=u"";return V(std::move(_text38157));})()});})());
}
_v_36836_count=([&]()->V{V _logical38160=j::get(_v_36835_b,this->_literals[60]);return j::nullish(_logical38160)?(j::truth(_v_36833_letters)?j::get(j::get(_v_36833_letters,this->_literals[36]),this->_literals[1]):j::builtin("undefined")):_logical38160;})();
if(j::truth(([&]()->V{V _logical38161=j::unary("!",([&]()->V{V _receiver38162=j::builtin("Number");V _method38163=this->_literals[61];V _method=j::get(_receiver38162,_method38163);j::Args _params38164=j::Args{_v_36836_count};return j::call(_method,_params38164,_receiver38162);})());return !j::truth(_logical38161)?([&]()->V{V _lhs38165=_v_36836_count;V _rhs38166=V(1.0);return j::binary("<",_lhs38165,_rhs38166);})():_logical38161;})())){(void)(([&]()->V{V _callee38169=this->_v_36700_fail.get();return j::call(_callee38169,j::Args{([&]()->V{std::u16string _text38167;_text38167+=u"";_text38167+=j::string(_v_36830_what.get());_text38167+=u".burst.count takes a whole number of particles of 1 or more, not ";_text38167+=j::string(([&]()->V{V _callee38168=j::builtin("String");return j::call(_callee38168,j::Args{j::get(_v_36835_b,this->_literals[60])});})());_text38167+=u"";return V(std::move(_text38167));})()});})());
}
if(j::truth(([&]()->V{V _logical38170=([&]()->V{V _lhs38171=j::get(_v_36835_b,this->_literals[62]);V _rhs38172=j::builtin("undefined");return V(!j::equal(_lhs38171,_rhs38172,true));})();return j::truth(_logical38170)?j::unary("!",([&]()->V{V _callee38173=this->_v_36728_num.get();return j::call(_callee38173,j::Args{j::get(_v_36835_b,this->_literals[62])});})()):_logical38170;})())){(void)(([&]()->V{V _callee38176=this->_v_36700_fail.get();return j::call(_callee38176,j::Args{([&]()->V{std::u16string _text38174;_text38174+=u"";_text38174+=j::string(_v_36830_what.get());_text38174+=u".burst.first takes a number of seconds, not ";_text38174+=j::string(([&]()->V{V _callee38175=j::builtin("String");return j::call(_callee38175,j::Args{j::get(_v_36835_b,this->_literals[62])});})());_text38174+=u"";return V(std::move(_text38174));})()});})());
}
if(j::truth(([&]()->V{V _logical38177=([&]()->V{V _lhs38178=j::get(_v_36835_b,this->_literals[63]);V _rhs38179=j::builtin("undefined");return V(!j::equal(_lhs38178,_rhs38179,true));})();return j::truth(_logical38177)?j::unary("!",([&]()->V{V _logical38180=([&]()->V{V _callee38181=this->_v_36728_num.get();return j::call(_callee38181,j::Args{j::get(_v_36835_b,this->_literals[63])});})();return j::truth(_logical38180)?([&]()->V{V _lhs38182=j::get(_v_36835_b,this->_literals[63]);V _rhs38183=V(0.0);return j::binary(">=",_lhs38182,_rhs38183);})():_logical38180;})()):_logical38177;})())){(void)(([&]()->V{V _callee38186=this->_v_36700_fail.get();return j::call(_callee38186,j::Args{([&]()->V{std::u16string _text38184;_text38184+=u"";_text38184+=j::string(_v_36830_what.get());_text38184+=u".burst.rise takes a number of seconds of 0 or more, not ";_text38184+=j::string(([&]()->V{V _callee38185=j::builtin("String");return j::call(_callee38185,j::Args{j::get(_v_36835_b,this->_literals[63])});})());_text38184+=u"";return V(std::move(_text38184));})()});})());
}
if(j::truth(([&]()->V{V _logical38187=j::get(_v_36835_b,this->_literals[63]);return j::truth(_logical38187)?j::get(_v_36835_b,this->_literals[64]):_logical38187;})())){(void)(([&]()->V{V _callee38189=this->_v_36700_fail.get();return j::call(_callee38189,j::Args{([&]()->V{std::u16string _text38188;_text38188+=u"";_text38188+=j::string(_v_36830_what.get());_text38188+=u".burst.rise launches a burst from one place, so it can't scatter: drop one of them";return V(std::move(_text38188));})()});})());
}
if(j::truth(([&]()->V{V _logical38190=j::get(_v_36835_b,this->_literals[63]);return j::truth(_logical38190)?_v_36833_letters:_logical38190;})())){(void)(([&]()->V{V _callee38192=this->_v_36700_fail.get();return j::call(_callee38192,j::Args{([&]()->V{std::u16string _text38191;_text38191+=u"";_text38191+=j::string(_v_36830_what.get());_text38191+=u".burst.rise launches a burst from one place, so it can't come from text: drop rise, or use a point";return V(std::move(_text38191));})()});})());
}
(void)((_v_36834_burst=([&]()->V{V _obj38194=j::object();j::put(_obj38194,this->_literals[7],j::get(_v_36835_b,this->_literals[7]));j::put(_obj38194,this->_literals[60],_v_36836_count);j::put(_obj38194,this->_literals[62],([&]()->V{V _logical38195=j::get(_v_36835_b,this->_literals[62]);return j::nullish(_logical38195)?V(0.0):_logical38195;})());j::put(_obj38194,this->_literals[64],([&]()->V{V _logical38196=j::unary("!",j::unary("!",j::get(_v_36835_b,this->_literals[64])));return !j::truth(_logical38196)?j::unary("!",j::unary("!",_v_36833_letters)):_logical38196;})());j::put(_obj38194,this->_literals[63],([&]()->V{V _logical38197=j::get(_v_36835_b,this->_literals[63]);return j::nullish(_logical38197)?V(0.0):_logical38197;})());return _obj38194;})()));

}

_v_36837_hold=([&]()->V{V _callee38202=this->_v_36736_range.get();return j::call(_callee38202,j::Args{j::get(_v_36828_sys,this->_literals[65]),(j::truth(([&]()->V{V _logical38198=_v_36833_letters;return j::truth(_logical38198)?_v_36834_burst:_logical38198;})())?([&]()->V{j::Args _array38199;_array38199.push_back(V(1.0));_array38199.push_back(V(1.0));return j::array(std::move(_array38199));})():([&]()->V{j::Args _array38200;_array38200.push_back(V(0.0));_array38200.push_back(V(0.0));return j::array(std::move(_array38200));})()),([&]()->V{std::u16string _text38201;_text38201+=u"";_text38201+=j::string(_v_36830_what.get());_text38201+=u".hold";return V(std::move(_text38201));})(),V(0.0)});})();
_v_36838_life=([&]()->V{V _callee38210=this->_v_36736_range.get();return j::call(_callee38210,j::Args{j::get(_v_36828_sys,this->_literals[66]),(j::truth(j::get(_v_36828_sys,this->_literals[67]))?([&]()->V{j::Args _array38203;_array38203.push_back(V(1.0));_array38203.push_back(V(2.0));return j::array(std::move(_array38203));})():([&]()->V{j::Args _array38204;_array38204.push_back(([&]()->V{V _lhs38205=V(1.0);V _rhs38206=j::get(_v_36837_hold,V(1.0));return j::binary("+",_lhs38205,_rhs38206);})());_array38204.push_back(([&]()->V{V _lhs38207=V(2.0);V _rhs38208=j::get(_v_36837_hold,V(1.0));return j::binary("+",_lhs38207,_rhs38208);})());return j::array(std::move(_array38204));})()),([&]()->V{std::u16string _text38209;_text38209+=u"";_text38209+=j::string(_v_36830_what.get());_text38209+=u".life";return V(std::move(_text38209));})(),V(0.0),V(true)});})();
_v_36839_speed=([&]()->V{V _callee38213=this->_v_36736_range.get();return j::call(_callee38213,j::Args{j::get(_v_36828_sys,this->_literals[68]),([&]()->V{j::Args _array38211;_array38211.push_back(V(2.0));_array38211.push_back(V(6.0));return j::array(std::move(_array38211));})(),([&]()->V{std::u16string _text38212;_text38212+=u"";_text38212+=j::string(_v_36830_what.get());_text38212+=u".speed";return V(std::move(_text38212));})(),V(0.0)});})();
_v_36840_side=(j::truth(([&]()->V{V _lhs38214=this->_literals[38];V _rhs38215=_v_36831_emitter;return j::binary("in",_lhs38214,_rhs38215);})())?j::get(_v_36831_emitter,this->_literals[38]):V::null());
_v_36841_angle=([&]()->V{V _callee38216=this->_v_36817_headingOf.get();return j::call(_callee38216,j::Args{_v_36828_sys,_v_36840_side,_v_36830_what.get()});})();
_v_36842_gravity=([&]()->V{V _logical38217=j::get(_v_36828_sys,this->_literals[69]);return j::nullish(_logical38217)?V(0.0):_logical38217;})();
if(j::truth(j::unary("!",([&]()->V{V _callee38218=this->_v_36728_num.get();return j::call(_callee38218,j::Args{_v_36842_gravity});})()))){(void)(([&]()->V{V _callee38221=this->_v_36700_fail.get();return j::call(_callee38221,j::Args{([&]()->V{std::u16string _text38219;_text38219+=u"";_text38219+=j::string(_v_36830_what.get());_text38219+=u".gravity takes a number of cells a second squared, not ";_text38219+=j::string(([&]()->V{V _callee38220=j::builtin("String");return j::call(_callee38220,j::Args{j::get(_v_36828_sys,this->_literals[69])});})());_text38219+=u"";return V(std::move(_text38219));})()});})());
}
_v_36843_wind=V(0.0);
_v_36844_gusts=V::null();
if(j::truth(([&]()->V{V _lhs38222=j::unary("typeof",j::get(_v_36828_sys,this->_literals[70]));V _rhs38223=this->_literals[46];return V(j::equal(_lhs38222,_rhs38223,true));})())){
V _v_36845_w;
(void)((_v_36844_gusts=j::get(_v_36828_sys,this->_literals[70])));
_v_36845_w=([&]()->V{V _callee38225=_v_36844_gusts;return j::call(_callee38225,j::Args{V(0.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _callee38226=this->_v_36728_num.get();return j::call(_callee38226,j::Args{_v_36845_w});})()))){(void)(([&]()->V{V _callee38229=this->_v_36700_fail.get();return j::call(_callee38229,j::Args{([&]()->V{std::u16string _text38227;_text38227+=u"";_text38227+=j::string(_v_36830_what.get());_text38227+=u".wind as a function takes the time and returns cells a second, not ";_text38227+=j::string(([&]()->V{V _callee38228=j::builtin("String");return j::call(_callee38228,j::Args{_v_36845_w});})());_text38227+=u"";return V(std::move(_text38227));})()});})());
}

}
else {if(j::truth(([&]()->V{V _lhs38230=j::get(_v_36828_sys,this->_literals[70]);V _rhs38231=j::builtin("undefined");return V(!j::equal(_lhs38230,_rhs38231,true));})())){
if(j::truth(j::unary("!",([&]()->V{V _callee38232=this->_v_36728_num.get();return j::call(_callee38232,j::Args{j::get(_v_36828_sys,this->_literals[70])});})()))){(void)(([&]()->V{V _callee38235=this->_v_36700_fail.get();return j::call(_callee38235,j::Args{([&]()->V{std::u16string _text38233;_text38233+=u"";_text38233+=j::string(_v_36830_what.get());_text38233+=u".wind takes a number of cells a second or a function of the time, not ";_text38233+=j::string(([&]()->V{V _callee38234=j::builtin("String");return j::call(_callee38234,j::Args{j::get(_v_36828_sys,this->_literals[70])});})());_text38233+=u"";return V(std::move(_text38233));})()});})());
}
(void)((_v_36843_wind=j::get(_v_36828_sys,this->_literals[70])));

}

}
_v_36846_drag=([&]()->V{V _logical38237=j::get(_v_36828_sys,this->_literals[71]);return j::nullish(_logical38237)?V(0.0):_logical38237;})();
if(j::truth(([&]()->V{V _logical38238=j::unary("!",([&]()->V{V _callee38239=this->_v_36728_num.get();return j::call(_callee38239,j::Args{_v_36846_drag});})());return !j::truth(_logical38238)?([&]()->V{V _lhs38240=_v_36846_drag;V _rhs38241=V(0.0);return j::binary("<",_lhs38240,_rhs38241);})():_logical38238;})())){(void)(([&]()->V{V _callee38244=this->_v_36700_fail.get();return j::call(_callee38244,j::Args{([&]()->V{std::u16string _text38242;_text38242+=u"";_text38242+=j::string(_v_36830_what.get());_text38242+=u".drag takes a number of 0 or more, not ";_text38242+=j::string(([&]()->V{V _callee38243=j::builtin("String");return j::call(_callee38243,j::Args{j::get(_v_36828_sys,this->_literals[71])});})());_text38242+=u"";return V(std::move(_text38242));})()});})());
}
_v_36847_sway=V(0.0);
_v_36848_swing=V(0.0);
if(j::truth(([&]()->V{V _lhs38245=j::unary("typeof",j::get(_v_36828_sys,this->_literals[72]));V _rhs38246=this->_literals[59];return V(j::equal(_lhs38245,_rhs38246,true));})())){
if(j::truth(([&]()->V{V _logical38247=j::unary("!",([&]()->V{V _callee38248=this->_v_36728_num.get();return j::call(_callee38248,j::Args{j::get(_v_36828_sys,this->_literals[72])});})());return !j::truth(_logical38247)?([&]()->V{V _lhs38249=j::get(_v_36828_sys,this->_literals[72]);V _rhs38250=V(0.0);return j::binary("<",_lhs38249,_rhs38250);})():_logical38247;})())){(void)(([&]()->V{V _callee38253=this->_v_36700_fail.get();return j::call(_callee38253,j::Args{([&]()->V{std::u16string _text38251;_text38251+=u"";_text38251+=j::string(_v_36830_what.get());_text38251+=u".sway takes cells each way, 0 or more, or { amount, speed }, not ";_text38251+=j::string(([&]()->V{V _callee38252=j::builtin("String");return j::call(_callee38252,j::Args{j::get(_v_36828_sys,this->_literals[72])});})());_text38251+=u"";return V(std::move(_text38251));})()});})());
}
(void)(((_v_36847_sway=j::get(_v_36828_sys,this->_literals[72])),(_v_36848_swing=this->_v_36713_SWING.get())));

}
else {if(j::truth(([&]()->V{V _lhs38256=j::get(_v_36828_sys,this->_literals[72]);V _rhs38257=j::builtin("undefined");return V(!j::equal(_lhs38256,_rhs38257,true));})())){
V _v_36849_s;
_v_36849_s=j::get(_v_36828_sys,this->_literals[72]);
if(j::truth(([&]()->V{V _logical38258=([&]()->V{V _logical38259=([&]()->V{V _logical38260=([&]()->V{V _logical38261=([&]()->V{V _logical38262=j::unary("!",_v_36849_s);return !j::truth(_logical38262)?([&]()->V{V _lhs38263=j::unary("typeof",_v_36849_s);V _rhs38264=this->_literals[6];return V(!j::equal(_lhs38263,_rhs38264,true));})():_logical38262;})();return !j::truth(_logical38261)?j::unary("!",([&]()->V{V _callee38265=this->_v_36728_num.get();return j::call(_callee38265,j::Args{j::get(_v_36849_s,this->_literals[73])});})()):_logical38261;})();return !j::truth(_logical38260)?([&]()->V{V _lhs38266=j::get(_v_36849_s,this->_literals[73]);V _rhs38267=V(0.0);return j::binary("<",_lhs38266,_rhs38267);})():_logical38260;})();return !j::truth(_logical38259)?j::unary("!",([&]()->V{V _callee38268=this->_v_36728_num.get();return j::call(_callee38268,j::Args{j::get(_v_36849_s,this->_literals[68])});})()):_logical38259;})();return !j::truth(_logical38258)?([&]()->V{V _lhs38269=j::get(_v_36849_s,this->_literals[68]);V _rhs38270=V(0.0);return j::binary("<",_lhs38269,_rhs38270);})():_logical38258;})())){(void)(([&]()->V{V _callee38275=this->_v_36700_fail.get();return j::call(_callee38275,j::Args{([&]()->V{std::u16string _text38271;_text38271+=u"";_text38271+=j::string(_v_36830_what.get());_text38271+=u".sway takes cells each way, or { amount, speed } in cells and swings a second of 0 or more, not ";_text38271+=j::string(([&]()->V{V _receiver38272=j::builtin("JSON");V _method38273=this->_literals[3];V _method=j::get(_receiver38272,_method38273);j::Args _params38274=j::Args{_v_36849_s};return j::call(_method,_params38274,_receiver38272);})());_text38271+=u"";return V(std::move(_text38271));})()});})());
}
(void)(((_v_36847_sway=j::get(_v_36849_s,this->_literals[73])),(_v_36848_swing=j::get(_v_36849_s,this->_literals[68]))));

}

}
_v_36850_glyphs=([&]()->V{V _callee38280=this->_v_36745_glyphCodes.get();return j::call(_callee38280,j::Args{([&]()->V{V _logical38278=j::get(_v_36828_sys,this->_literals[74]);return j::nullish(_logical38278)?this->_literals[75]:_logical38278;})(),([&]()->V{std::u16string _text38279;_text38279+=u"";_text38279+=j::string(_v_36830_what.get());_text38279+=u".glyphs";return V(std::move(_text38279));})()});})();
if(j::truth(([&]()->V{V _logical38281=([&]()->V{V _lhs38282=j::get(_v_36828_sys,this->_literals[76]);V _rhs38283=j::builtin("undefined");return V(!j::equal(_lhs38282,_rhs38283,true));})();return j::truth(_logical38281)?([&]()->V{V _lhs38284=j::unary("typeof",j::get(_v_36828_sys,this->_literals[76]));V _rhs38285=this->_literals[46];return V(!j::equal(_lhs38284,_rhs38285,true));})():_logical38281;})())){(void)(([&]()->V{V _callee38287=this->_v_36700_fail.get();return j::call(_callee38287,j::Args{([&]()->V{std::u16string _text38286;_text38286+=u"";_text38286+=j::string(_v_36830_what.get());_text38286+=u".glyph takes a function of the particle that returns a character";return V(std::move(_text38286));})()});})());
}
if(j::truth(([&]()->V{V _logical38288=([&]()->V{V _lhs38289=j::get(_v_36828_sys,this->_literals[17]);V _rhs38290=j::builtin("undefined");return V(!j::equal(_lhs38289,_rhs38290,true));})();return j::truth(_logical38288)?([&]()->V{V _lhs38291=j::unary("typeof",j::get(_v_36828_sys,this->_literals[17]));V _rhs38292=this->_literals[46];return V(!j::equal(_lhs38291,_rhs38292,true));})():_logical38288;})())){(void)(([&]()->V{V _callee38294=this->_v_36700_fail.get();return j::call(_callee38294,j::Args{([&]()->V{std::u16string _text38293;_text38293+=u"";_text38293+=j::string(_v_36830_what.get());_text38293+=u".color takes a function of the particle that returns a colour: for colours by age, use colors";return V(std::move(_text38293));})()});})());
}
_v_36851_steps.get()=([&]()->V{V _logical38295=j::get(_v_36828_sys,this->_literals[77]);return j::nullish(_logical38295)?V(8.0):_logical38295;})();
if(j::truth(([&]()->V{V _logical38296=([&]()->V{V _logical38297=j::unary("!",([&]()->V{V _receiver38298=j::builtin("Number");V _method38299=this->_literals[61];V _method=j::get(_receiver38298,_method38299);j::Args _params38300=j::Args{_v_36851_steps.get()};return j::call(_method,_params38300,_receiver38298);})());return !j::truth(_logical38297)?([&]()->V{V _lhs38301=_v_36851_steps.get();V _rhs38302=V(1.0);return j::binary("<",_lhs38301,_rhs38302);})():_logical38297;})();return !j::truth(_logical38296)?([&]()->V{V _lhs38303=_v_36851_steps.get();V _rhs38304=V(32.0);return j::binary(">",_lhs38303,_rhs38304);})():_logical38296;})())){(void)(([&]()->V{V _callee38307=this->_v_36700_fail.get();return j::call(_callee38307,j::Args{([&]()->V{std::u16string _text38305;_text38305+=u"";_text38305+=j::string(_v_36830_what.get());_text38305+=u".steps takes a whole number from 1 to 32, not ";_text38305+=j::string(([&]()->V{V _callee38306=j::builtin("String");return j::call(_callee38306,j::Args{j::get(_v_36828_sys,this->_literals[77])});})());_text38305+=u"";return V(std::move(_text38305));})()});})());
}
if(j::truth(([&]()->V{V _logical38308=([&]()->V{V _lhs38309=j::get(_v_36828_sys,this->_literals[78]);V _rhs38310=j::builtin("undefined");return V(!j::equal(_lhs38309,_rhs38310,true));})();return j::truth(_logical38308)?([&]()->V{V _lhs38311=j::get(_v_36828_sys,this->_literals[79]);V _rhs38312=j::builtin("undefined");return V(!j::equal(_lhs38311,_rhs38312,true));})():_logical38308;})())){(void)(([&]()->V{V _callee38314=this->_v_36700_fail.get();return j::call(_callee38314,j::Args{([&]()->V{std::u16string _text38313;_text38313+=u"";_text38313+=j::string(_v_36830_what.get());_text38313+=u" takes colors or palettes, not both";return V(std::move(_text38313));})()});})());
}
_v_36852_fades=([&]()->V{j::Args _array38315;return j::array(std::move(_array38315));})();
if(j::truth(([&]()->V{V _lhs38316=j::get(_v_36828_sys,this->_literals[78]);V _rhs38317=j::builtin("undefined");return V(!j::equal(_lhs38316,_rhs38317,true));})())){(void)((_v_36852_fades=([&]()->V{j::Args _array38319;_array38319.push_back(([&]()->V{V _callee38321=this->_v_36751_fadeOf.get();return j::call(_callee38321,j::Args{j::get(_v_36828_sys,this->_literals[78]),_v_36851_steps.get(),([&]()->V{std::u16string _text38320;_text38320+=u"";_text38320+=j::string(_v_36830_what.get());_text38320+=u".colors";return V(std::move(_text38320));})()});})());return j::array(std::move(_array38319));})()));
}
if(j::truth(([&]()->V{V _lhs38322=j::get(_v_36828_sys,this->_literals[79]);V _rhs38323=j::builtin("undefined");return V(!j::equal(_lhs38322,_rhs38323,true));})())){
if(j::truth(([&]()->V{V _logical38324=j::unary("!",([&]()->V{V _receiver38325=j::builtin("Array");V _method38326=this->_literals[0];V _method=j::get(_receiver38325,_method38326);j::Args _params38327=j::Args{j::get(_v_36828_sys,this->_literals[79])};return j::call(_method,_params38327,_receiver38325);})());return !j::truth(_logical38324)?j::unary("!",j::get(j::get(_v_36828_sys,this->_literals[79]),this->_literals[1])):_logical38324;})())){(void)(([&]()->V{V _callee38329=this->_v_36700_fail.get();return j::call(_callee38329,j::Args{([&]()->V{std::u16string _text38328;_text38328+=u"";_text38328+=j::string(_v_36830_what.get());_text38328+=u".palettes takes a list of one or more fades, each a list of #rrggbb or { light, dark }";return V(std::move(_text38328));})()});})());
}
(void)((_v_36852_fades=([&]()->V{V _receiver38333=j::get(_v_36828_sys,this->_literals[79]);V _method38334=this->_literals[21];V _method=j::get(_receiver38333,_method38334);j::Args _params38335=j::Args{j::function([=](const j::Args &_args_fn36853,const V &_receiver_fn36853,const V &_self_fn36853) mutable ->V{
V _v_36854_p;
V _v_36855_i;
_v_36854_p=_args_fn36853[0];
_v_36855_i=_args_fn36853[1];
return ([&]()->V{V _callee38332=this->_v_36751_fadeOf.get();return j::call(_callee38332,j::Args{_v_36854_p,_v_36851_steps.get(),([&]()->V{std::u16string _text38331;_text38331+=u"";_text38331+=j::string(_v_36830_what.get());_text38331+=u".palettes[";_text38331+=j::string(_v_36855_i);_text38331+=u"]";return V(std::move(_text38331));})()});})();
return V{};
},2)};return j::call(_method,_params38335,_receiver38333);})()));

}

_v_36856_twinkle=([&]()->V{V _logical38336=j::get(_v_36828_sys,this->_literals[80]);return j::nullish(_logical38336)?V(0.0):_logical38336;})();
if(j::truth(([&]()->V{V _logical38337=([&]()->V{V _logical38338=j::unary("!",([&]()->V{V _callee38339=this->_v_36728_num.get();return j::call(_callee38339,j::Args{_v_36856_twinkle});})());return !j::truth(_logical38338)?([&]()->V{V _lhs38340=_v_36856_twinkle;V _rhs38341=V(0.0);return j::binary("<",_lhs38340,_rhs38341);})():_logical38338;})();return !j::truth(_logical38337)?([&]()->V{V _lhs38342=_v_36856_twinkle;V _rhs38343=V(1.0);return j::binary(">",_lhs38342,_rhs38343);})():_logical38337;})())){(void)(([&]()->V{V _callee38346=this->_v_36700_fail.get();return j::call(_callee38346,j::Args{([&]()->V{std::u16string _text38344;_text38344+=u"";_text38344+=j::string(_v_36830_what.get());_text38344+=u".twinkle takes a share from 0 to 1, not ";_text38344+=j::string(([&]()->V{V _callee38345=j::builtin("String");return j::call(_callee38345,j::Args{j::get(_v_36828_sys,this->_literals[80])});})());_text38344+=u"";return V(std::move(_text38344));})()});})());
}
_v_36857_b=([&]()->V{V _logical38347=j::get(_v_36828_sys,this->_literals[81]);return j::nullish(_logical38347)?this->_literals[82]:_logical38347;})();
_v_36858_axis=j::function([=](const j::Args &_args_fn36859,const V &_receiver_fn36859,const V &_self_fn36859) mutable ->V{
V _v_36860_v;
V _v_36861_name;
_v_36860_v=_args_fn36859[0];
_v_36861_name=_args_fn36859[1];
{
if(j::truth(([&]()->V{V _lhs38348=_v_36860_v;V _rhs38349=j::builtin("undefined");return V(j::equal(_lhs38348,_rhs38349,true));})())){return this->_literals[82];
}
if(j::truth(j::unary("!",([&]()->V{V _receiver38350=this->_v_36717_BOUNDS.get();V _method38351=this->_literals[25];V _method=j::get(_receiver38350,_method38351);j::Args _params38352=j::Args{_v_36860_v};return j::call(_method,_params38352,_receiver38350);})()))){(void)(([&]()->V{V _callee38358=this->_v_36700_fail.get();return j::call(_callee38358,j::Args{([&]()->V{std::u16string _text38353;_text38353+=u"";_text38353+=j::string(_v_36830_what.get());_text38353+=u".bounds";_text38353+=j::string(_v_36861_name);_text38353+=u" takes ";_text38353+=j::string(([&]()->V{V _callee38354=this->_v_36731_quoted.get();return j::call(_callee38354,j::Args{this->_v_36717_BOUNDS.get()});})());_text38353+=u", not ";_text38353+=j::string(([&]()->V{V _receiver38355=j::builtin("JSON");V _method38356=this->_literals[3];V _method=j::get(_receiver38355,_method38356);j::Args _params38357=j::Args{_v_36860_v};return j::call(_method,_params38357,_receiver38355);})());_text38353+=u"";return V(std::move(_text38353));})()});})());
}
return _v_36860_v;

}

return V{};
},2);
_v_36862_both=([&]()->V{V _logical38359=([&]()->V{V _lhs38360=_v_36857_b;V _rhs38361=V::null();return V(j::equal(_lhs38360,_rhs38361,true));})();return !j::truth(_logical38359)?([&]()->V{V _lhs38362=j::unary("typeof",_v_36857_b);V _rhs38363=this->_literals[6];return V(!j::equal(_lhs38362,_rhs38363,true));})():_logical38359;})();
_v_36863_bx=(j::truth(_v_36862_both)?([&]()->V{V _callee38364=_v_36858_axis;return j::call(_callee38364,j::Args{_v_36857_b,this->_literals[2]});})():([&]()->V{V _callee38365=_v_36858_axis;return j::call(_callee38365,j::Args{j::get(_v_36857_b,this->_literals[48]),this->_literals[83]});})());
_v_36864_by=(j::truth(_v_36862_both)?([&]()->V{V _callee38366=_v_36858_axis;return j::call(_callee38366,j::Args{_v_36857_b,this->_literals[2]});})():([&]()->V{V _callee38367=_v_36858_axis;return j::call(_callee38367,j::Args{j::get(_v_36857_b,this->_literals[49]),this->_literals[84]});})());
_v_36865_bounciness=([&]()->V{V _logical38368=j::get(_v_36828_sys,this->_literals[85]);return j::nullish(_logical38368)?V(1.0):_logical38368;})();
if(j::truth(([&]()->V{V _logical38369=([&]()->V{V _logical38370=j::unary("!",([&]()->V{V _callee38371=this->_v_36728_num.get();return j::call(_callee38371,j::Args{_v_36865_bounciness});})());return !j::truth(_logical38370)?([&]()->V{V _lhs38372=_v_36865_bounciness;V _rhs38373=V(0.0);return j::binary("<",_lhs38372,_rhs38373);})():_logical38370;})();return !j::truth(_logical38369)?([&]()->V{V _lhs38374=_v_36865_bounciness;V _rhs38375=V(1.0);return j::binary(">",_lhs38374,_rhs38375);})():_logical38369;})())){(void)(([&]()->V{V _callee38378=this->_v_36700_fail.get();return j::call(_callee38378,j::Args{([&]()->V{std::u16string _text38376;_text38376+=u"";_text38376+=j::string(_v_36830_what.get());_text38376+=u".bounciness takes a share of its speed from 0 to 1, not ";_text38376+=j::string(([&]()->V{V _callee38377=j::builtin("String");return j::call(_callee38377,j::Args{j::get(_v_36828_sys,this->_literals[85])});})());_text38376+=u"";return V(std::move(_text38376));})()});})());
}
if(j::truth(([&]()->V{V _logical38379=([&]()->V{V _lhs38380=j::get(_v_36828_sys,this->_literals[67]);V _rhs38381=j::builtin("undefined");return V(!j::equal(_lhs38380,_rhs38381,true));})();return j::truth(_logical38379)?([&]()->V{V _lhs38382=j::unary("typeof",j::get(_v_36828_sys,this->_literals[67]));V _rhs38383=this->_literals[46];return V(!j::equal(_lhs38382,_rhs38383,true));})():_logical38379;})())){(void)(([&]()->V{V _callee38385=this->_v_36700_fail.get();return j::call(_callee38385,j::Args{([&]()->V{std::u16string _text38384;_text38384+=u"";_text38384+=j::string(_v_36830_what.get());_text38384+=u".path takes a function of the particle that returns [column, row]";return V(std::move(_text38384));})()});})());
}
_v_36866_path=([&]()->V{V _logical38386=j::get(_v_36828_sys,this->_literals[67]);return j::nullish(_logical38386)?V::null():_logical38386;})();
if(j::truth(([&]()->V{V _logical38387=([&]()->V{V _logical38388=([&]()->V{V _logical38389=([&]()->V{V _lhs38390=_v_36865_bounciness;V _rhs38391=V(1.0);return j::binary("<",_lhs38390,_rhs38391);})();return j::truth(_logical38389)?([&]()->V{V _lhs38392=_v_36863_bx;V _rhs38393=this->_literals[86];return V(j::equal(_lhs38392,_rhs38393,true));})():_logical38389;})();return j::truth(_logical38388)?_v_36844_gusts:_logical38388;})();return j::truth(_logical38387)?j::unary("!",_v_36866_path):_logical38387;})())){(void)(([&]()->V{V _callee38395=this->_v_36700_fail.get();return j::call(_callee38395,j::Args{([&]()->V{std::u16string _text38394;_text38394+=u"";_text38394+=j::string(_v_36830_what.get());_text38394+=u".bounciness can't slow a bounce off the sides in a wind that is a function: give the wind as a number, or bounds { x: \"wrap\" }";return V(std::move(_text38394));})()});})());
}
if(j::truth(([&]()->V{V _logical38396=([&]()->V{V _lhs38397=j::get(_v_36828_sys,this->_literals[87]);V _rhs38398=j::builtin("undefined");return V(!j::equal(_lhs38397,_rhs38398,true));})();return j::truth(_logical38396)?j::unary("!",([&]()->V{V _callee38399=this->_v_36728_num.get();return j::call(_callee38399,j::Args{j::get(_v_36828_sys,this->_literals[87])});})()):_logical38396;})())){(void)(([&]()->V{V _callee38402=this->_v_36700_fail.get();return j::call(_callee38402,j::Args{([&]()->V{std::u16string _text38400;_text38400+=u"";_text38400+=j::string(_v_36830_what.get());_text38400+=u".floor takes a row, not ";_text38400+=j::string(([&]()->V{V _callee38401=j::builtin("String");return j::call(_callee38401,j::Args{j::get(_v_36828_sys,this->_literals[87])});})());_text38400+=u"";return V(std::move(_text38400));})()});})());
}
_v_36867_splash=(j::truth(([&]()->V{V _logical38403=([&]()->V{V _lhs38404=j::get(_v_36828_sys,this->_literals[88]);V _rhs38405=j::builtin("undefined");return V(j::equal(_lhs38404,_rhs38405,true));})();return !j::truth(_logical38403)?([&]()->V{V _lhs38406=j::get(_v_36828_sys,this->_literals[88]);V _rhs38407=this->_literals[2];return V(j::equal(_lhs38406,_rhs38407,true));})():_logical38403;})())?([&]()->V{V _callee38408=j::builtin("Uint16Array");return j::construct(_callee38408,j::Args{V(0.0)});})():([&]()->V{V _callee38410=this->_v_36745_glyphCodes.get();return j::call(_callee38410,j::Args{j::get(_v_36828_sys,this->_literals[88]),([&]()->V{std::u16string _text38409;_text38409+=u"";_text38409+=j::string(_v_36830_what.get());_text38409+=u".splash";return V(std::move(_text38409));})()});})());
_v_36868_trail=([&]()->V{V _logical38411=j::get(_v_36828_sys,this->_literals[89]);return j::nullish(_logical38411)?V(0.0):_logical38411;})();
if(j::truth(([&]()->V{V _logical38412=j::unary("!",([&]()->V{V _callee38413=this->_v_36728_num.get();return j::call(_callee38413,j::Args{_v_36868_trail});})());return !j::truth(_logical38412)?([&]()->V{V _lhs38414=_v_36868_trail;V _rhs38415=V(0.0);return j::binary("<",_lhs38414,_rhs38415);})():_logical38412;})())){(void)(([&]()->V{V _callee38418=this->_v_36700_fail.get();return j::call(_callee38418,j::Args{([&]()->V{std::u16string _text38416;_text38416+=u"";_text38416+=j::string(_v_36830_what.get());_text38416+=u".trail takes a number of seconds of 0 or more, not ";_text38416+=j::string(([&]()->V{V _callee38417=j::builtin("String");return j::call(_callee38417,j::Args{j::get(_v_36828_sys,this->_literals[89])});})());_text38416+=u"";return V(std::move(_text38416));})()});})());
}
_v_36869_trailGlyphs=(j::truth(([&]()->V{V _lhs38419=j::get(_v_36828_sys,this->_literals[90]);V _rhs38420=j::builtin("undefined");return V(j::equal(_lhs38419,_rhs38420,true));})())?V::null():([&]()->V{V _callee38422=this->_v_36745_glyphCodes.get();return j::call(_callee38422,j::Args{j::get(_v_36828_sys,this->_literals[90]),([&]()->V{std::u16string _text38421;_text38421+=u"";_text38421+=j::string(_v_36830_what.get());_text38421+=u".trailGlyphs";return V(std::move(_text38421));})()});})());
_v_36870_trailFade=(j::truth(([&]()->V{V _lhs38423=j::get(_v_36828_sys,this->_literals[91]);V _rhs38424=j::builtin("undefined");return V(j::equal(_lhs38423,_rhs38424,true));})())?V::null():([&]()->V{V _callee38426=this->_v_36751_fadeOf.get();return j::call(_callee38426,j::Args{j::get(_v_36828_sys,this->_literals[91]),_v_36851_steps.get(),([&]()->V{std::u16string _text38425;_text38425+=u"";_text38425+=j::string(_v_36830_what.get());_text38425+=u".trailColors";return V(std::move(_text38425));})()});})());
_v_36871_start=([&]()->V{V _logical38427=j::get(_v_36828_sys,this->_literals[92]);return j::nullish(_logical38427)?j::unary("-",j::builtin("Infinity")):_logical38427;})();
if(j::truth(j::unary("!",([&]()->V{V _logical38428=([&]()->V{V _callee38429=this->_v_36728_num.get();return j::call(_callee38429,j::Args{_v_36871_start});})();return !j::truth(_logical38428)?([&]()->V{V _lhs38430=_v_36871_start;V _rhs38431=j::unary("-",j::builtin("Infinity"));return V(j::equal(_lhs38430,_rhs38431,true));})():_logical38428;})()))){(void)(([&]()->V{V _callee38434=this->_v_36700_fail.get();return j::call(_callee38434,j::Args{([&]()->V{std::u16string _text38432;_text38432+=u"";_text38432+=j::string(_v_36830_what.get());_text38432+=u".start takes a number of seconds, not ";_text38432+=j::string(([&]()->V{V _callee38433=j::builtin("String");return j::call(_callee38433,j::Args{j::get(_v_36828_sys,this->_literals[92])});})());_text38432+=u"";return V(std::move(_text38432));})()});})());
}
_v_36872_seed=([&]()->V{V _logical38435=j::get(_v_36828_sys,this->_literals[93]);return j::nullish(_logical38435)?([&]()->V{V _lhs38436=V(1.0);V _rhs38437=_v_36829_n;return j::binary("+",_lhs38436,_rhs38437);})():_logical38435;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver38438=j::builtin("Number");V _method38439=this->_literals[61];V _method=j::get(_receiver38438,_method38439);j::Args _params38440=j::Args{_v_36872_seed};return j::call(_method,_params38440,_receiver38438);})()))){(void)(([&]()->V{V _callee38443=this->_v_36700_fail.get();return j::call(_callee38443,j::Args{([&]()->V{std::u16string _text38441;_text38441+=u"";_text38441+=j::string(_v_36830_what.get());_text38441+=u".seed takes a whole number, not ";_text38441+=j::string(([&]()->V{V _callee38442=j::builtin("String");return j::call(_callee38442,j::Args{j::get(_v_36828_sys,this->_literals[93])});})());_text38441+=u"";return V(std::move(_text38441));})()});})());
}
_v_36873_pl=([&]()->V{V _obj38444=j::object();j::put(_obj38444,this->_literals[94],_v_36830_what.get());j::put(_obj38444,this->_literals[93],_v_36872_seed);j::put(_obj38444,this->_literals[57],(j::truth(_v_36834_burst)?V(0.0):_v_36832_rate));j::put(_obj38444,this->_literals[58],_v_36834_burst);j::put(_obj38444,this->_literals[66],_v_36838_life);j::put(_obj38444,this->_literals[65],_v_36837_hold);j::put(_obj38444,this->_literals[68],_v_36839_speed);j::put(_obj38444,this->_literals[53],_v_36841_angle);j::put(_obj38444,this->_literals[69],_v_36842_gravity);j::put(_obj38444,this->_literals[70],_v_36843_wind);j::put(_obj38444,this->_literals[95],_v_36844_gusts);j::put(_obj38444,this->_literals[71],_v_36846_drag);j::put(_obj38444,this->_literals[72],_v_36847_sway);j::put(_obj38444,this->_literals[96],_v_36848_swing);j::put(_obj38444,this->_literals[74],_v_36850_glyphs);j::put(_obj38444,this->_literals[76],([&]()->V{V _logical38445=j::get(_v_36828_sys,this->_literals[76]);return j::nullish(_logical38445)?V::null():_logical38445;})());j::put(_obj38444,this->_literals[97],_v_36852_fades);j::put(_obj38444,this->_literals[17],([&]()->V{V _logical38446=j::get(_v_36828_sys,this->_literals[17]);return j::nullish(_logical38446)?V::null():_logical38446;})());j::put(_obj38444,this->_literals[80],_v_36856_twinkle);j::put(_obj38444,this->_literals[98],_v_36863_bx);j::put(_obj38444,this->_literals[99],_v_36864_by);j::put(_obj38444,this->_literals[85],_v_36865_bounciness);j::put(_obj38444,this->_literals[100],(j::truth(([&]()->V{V _logical38447=([&]()->V{V _logical38448=([&]()->V{V _logical38449=([&]()->V{V _lhs38450=_v_36863_bx;V _rhs38451=this->_literals[86];return V(j::equal(_lhs38450,_rhs38451,true));})();return j::truth(_logical38449)?j::unary("!",_v_36866_path):_logical38449;})();return j::truth(_logical38448)?j::unary("!",_v_36844_gusts):_logical38448;})();return j::truth(_logical38447)?([&]()->V{V _logical38452=([&]()->V{V _lhs38453=_v_36865_bounciness;V _rhs38454=V(1.0);return j::binary("<",_lhs38453,_rhs38454);})();return !j::truth(_logical38452)?([&]()->V{V _logical38455=([&]()->V{V _lhs38456=_v_36846_drag;V _rhs38457=V(0.0);return j::binary(">",_lhs38456,_rhs38457);})();return j::truth(_logical38455)?([&]()->V{V _lhs38458=_v_36843_wind;V _rhs38459=V(0.0);return V(!j::equal(_lhs38458,_rhs38459,true));})():_logical38455;})():_logical38452;})():_logical38447;})())?([&]()->V{V _callee38460=this->_v_37013_newLog.get();return j::call(_callee38460,j::Args{});})():V::null()));j::put(_obj38444,this->_literals[101],(j::truth(([&]()->V{V _logical38461=([&]()->V{V _logical38462=([&]()->V{V _lhs38463=_v_36864_by;V _rhs38464=this->_literals[86];return V(j::equal(_lhs38463,_rhs38464,true));})();return j::truth(_logical38462)?j::unary("!",_v_36866_path):_logical38462;})();return j::truth(_logical38461)?([&]()->V{V _logical38465=([&]()->V{V _lhs38466=_v_36865_bounciness;V _rhs38467=V(1.0);return j::binary("<",_lhs38466,_rhs38467);})();return !j::truth(_logical38465)?([&]()->V{V _lhs38468=_v_36842_gravity;V _rhs38469=V(0.0);return V(!j::equal(_lhs38468,_rhs38469,true));})():_logical38465;})():_logical38461;})())?([&]()->V{V _callee38470=this->_v_37013_newLog.get();return j::call(_callee38470,j::Args{});})():V::null()));j::put(_obj38444,this->_literals[87],([&]()->V{V _logical38471=j::get(_v_36828_sys,this->_literals[87]);return j::nullish(_logical38471)?V::null():_logical38471;})());j::put(_obj38444,this->_literals[88],_v_36867_splash);j::put(_obj38444,this->_literals[89],_v_36868_trail);j::put(_obj38444,this->_literals[90],_v_36869_trailGlyphs);j::put(_obj38444,this->_literals[102],_v_36870_trailFade);j::put(_obj38444,this->_literals[67],_v_36866_path);j::put(_obj38444,this->_literals[103],([&]()->V{V _logical38472=([&]()->V{V _logical38473=([&]()->V{V _logical38474=j::unary("!",j::unary("!",_v_36833_letters));return j::truth(_logical38474)?j::unary("!",j::unary("!",_v_36834_burst)):_logical38474;})();return j::truth(_logical38473)?([&]()->V{V _lhs38475=j::get(_v_36828_sys,this->_literals[74]);V _rhs38476=j::builtin("undefined");return V(j::equal(_lhs38475,_rhs38476,true));})():_logical38473;})();return j::truth(_logical38472)?([&]()->V{V _lhs38477=j::get(_v_36828_sys,this->_literals[76]);V _rhs38478=j::builtin("undefined");return V(j::equal(_lhs38477,_rhs38478,true));})():_logical38472;})());j::put(_obj38444,this->_literals[92],_v_36871_start);j::put(_obj38444,this->_literals[56],_v_36831_emitter);j::put(_obj38444,this->_literals[104],_v_36840_side);j::put(_obj38444,this->_literals[105],([&]()->V{V _logical38479=([&]()->V{V _logical38480=j::unary("!",j::unary("!",_v_36840_side));return j::truth(_logical38480)?([&]()->V{V _lhs38481=j::get(_v_36828_sys,this->_literals[66]);V _rhs38482=j::builtin("undefined");return V(j::equal(_lhs38481,_rhs38482,true));})():_logical38480;})();return j::truth(_logical38479)?j::unary("!",_v_36866_path):_logical38479;})());j::put(_obj38444,this->_literals[106],([&]()->V{V _logical38483=([&]()->V{V _logical38484=([&]()->V{V _logical38485=([&]()->V{V _logical38486=j::unary("!",j::unary("!",_v_36840_side));return j::truth(_logical38486)?([&]()->V{V _lhs38487=j::get(_v_36828_sys,this->_literals[66]);V _rhs38488=j::builtin("undefined");return V(j::equal(_lhs38487,_rhs38488,true));})():_logical38486;})();return j::truth(_logical38485)?j::unary("!",_v_36866_path):_logical38485;})();return j::truth(_logical38484)?([&]()->V{V _lhs38489=j::get(_v_36828_sys,this->_literals[57]);V _rhs38490=j::builtin("undefined");return V(j::equal(_lhs38489,_rhs38490,true));})():_logical38484;})();return j::truth(_logical38483)?j::unary("!",_v_36834_burst):_logical38483;})());j::put(_obj38444,this->_literals[107],([&]()->V{V _obj38491=j::object();j::put(_obj38491,this->_literals[108],V(0.0));j::put(_obj38491,this->_literals[109],V(0.0));j::put(_obj38491,this->_literals[66],V(0.0));j::put(_obj38491,this->_literals[110],V(0.0));j::put(_obj38491,this->_literals[48],V(0.0));j::put(_obj38491,this->_literals[49],V(0.0));j::put(_obj38491,this->_literals[111],V(0.0));j::put(_obj38491,this->_literals[112],V(0.0));j::put(_obj38491,this->_literals[113],V(0.0));j::put(_obj38491,this->_literals[114],V(0.0));j::put(_obj38491,this->_literals[115],V(0.0));j::put(_obj38491,this->_literals[116],V(0.0));j::put(_obj38491,this->_literals[117],V(0.0));j::put(_obj38491,this->_literals[53],V(0.0));j::put(_obj38491,this->_literals[68],V(0.0));j::put(_obj38491,this->_literals[65],V(0.0));j::put(_obj38491,this->_literals[118],this->_literals[2]);return _obj38491;})());j::put(_obj38444,this->_literals[119],([&]()->V{V _obj38492=j::object();j::put(_obj38492,this->_literals[32],([&]()->V{V _callee38493=j::builtin("Int32Array");return j::construct(_callee38493,j::Args{V(64.0)});})());j::put(_obj38492,this->_literals[120],([&]()->V{V _callee38494=j::builtin("Uint16Array");return j::construct(_callee38494,j::Args{V(64.0)});})());j::put(_obj38492,this->_literals[121],([&]()->V{V _callee38495=j::builtin("Uint8Array");return j::construct(_callee38495,j::Args{V(64.0)});})());j::put(_obj38492,this->_literals[122],V(0.0));return _obj38492;})());j::put(_obj38444,this->_literals[123],V::null());j::put(_obj38444,this->_literals[124],V::null());j::put(_obj38444,this->_literals[125],V::null());j::put(_obj38444,this->_literals[126],([&]()->V{V _callee38496=j::builtin("Float64Array");return j::construct(_callee38496,j::Args{V(0.0)});})());j::put(_obj38444,this->_literals[127],([&]()->V{V _obj38497=j::object();j::put(_obj38497,this->_literals[128],V::null());j::put(_obj38497,this->_literals[113],V(0.0));j::put(_obj38497,this->_literals[129],V(2.0));j::put(_obj38497,this->_literals[130],V(0.0));j::put(_obj38497,this->_literals[131],V(0.0));j::put(_obj38497,this->_literals[132],V(0.0));j::put(_obj38497,this->_literals[133],V(0.0));j::put(_obj38497,this->_literals[134],V(0.0));j::put(_obj38497,this->_literals[135],V(0.0));j::put(_obj38497,this->_literals[136],V(0.0));j::put(_obj38497,this->_literals[137],V(0.0));j::put(_obj38497,this->_literals[138],V(0.0));j::put(_obj38497,this->_literals[139],V(0.0));j::put(_obj38497,this->_literals[140],V(0.0));j::put(_obj38497,this->_literals[141],V(false));j::put(_obj38497,this->_literals[142],V(false));j::put(_obj38497,this->_literals[143],this->_v_36716_GUST.get());j::put(_obj38497,this->_literals[144],V(0.0));j::put(_obj38497,this->_literals[122],V(0.0));j::put(_obj38497,this->_literals[145],V(0.0));j::put(_obj38497,this->_literals[146],V(0.0));j::put(_obj38497,this->_literals[116],V(0.0));j::put(_obj38497,this->_literals[117],V(0.0));j::put(_obj38497,this->_literals[111],V(0.0));j::put(_obj38497,this->_literals[112],V(0.0));j::put(_obj38497,this->_literals[147],V(0.0));j::put(_obj38497,this->_literals[148],V(0.0));j::put(_obj38497,this->_literals[149],j::unary("-",V(1.0)));j::put(_obj38497,this->_literals[150],V(0.0));j::put(_obj38497,this->_literals[151],V(0.0));j::put(_obj38497,this->_literals[152],V(0.0));j::put(_obj38497,this->_literals[153],V(0.0));j::put(_obj38497,this->_literals[154],V(0.0));j::put(_obj38497,this->_literals[155],V(0.0));j::put(_obj38497,this->_literals[54],([&]()->V{j::Args _array38498;_array38498.push_back(V(0.0));_array38498.push_back(V(0.0));return j::array(std::move(_array38498));})());return _obj38497;})());return _obj38444;})();
(void)(([&]()->V{V _callee38499=this->_v_36893_checkAlive.get();return j::call(_callee38499,j::Args{_v_36873_pl,V(0.0)});})());
if(j::truth(_v_36866_path)){
V _v_36874_at;
(void)(([&]()->V{V _base38501=j::get(_v_36873_pl,this->_literals[107]);V _key38502=this->_literals[66];V _assign38500=j::get(_v_36838_life,V(0.0));return j::put(_base38501,_key38502,_assign38500);})());
(void)(([&]()->V{V _base38504=j::get(_v_36873_pl,this->_literals[107]);V _key38505=this->_literals[114];V _assign38503=V(0.5);return j::put(_base38504,_key38505,_assign38503);})());
_v_36874_at=([&]()->V{V _callee38506=_v_36866_path;return j::call(_callee38506,j::Args{j::get(_v_36873_pl,this->_literals[107])});})();
if(j::truth(([&]()->V{V _logical38507=([&]()->V{V _logical38508=([&]()->V{V _logical38509=j::unary("!",([&]()->V{V _receiver38510=j::builtin("Array");V _method38511=this->_literals[0];V _method=j::get(_receiver38510,_method38511);j::Args _params38512=j::Args{_v_36874_at};return j::call(_method,_params38512,_receiver38510);})());return !j::truth(_logical38509)?([&]()->V{V _lhs38513=j::get(_v_36874_at,this->_literals[1]);V _rhs38514=V(2.0);return V(!j::equal(_lhs38513,_rhs38514,true));})():_logical38509;})();return !j::truth(_logical38508)?j::unary("!",([&]()->V{V _callee38515=this->_v_36728_num.get();return j::call(_callee38515,j::Args{j::get(_v_36874_at,V(0.0))});})()):_logical38508;})();return !j::truth(_logical38507)?j::unary("!",([&]()->V{V _callee38516=this->_v_36728_num.get();return j::call(_callee38516,j::Args{j::get(_v_36874_at,V(1.0))});})()):_logical38507;})())){(void)(([&]()->V{V _callee38521=this->_v_36700_fail.get();return j::call(_callee38521,j::Args{([&]()->V{std::u16string _text38517;_text38517+=u"";_text38517+=j::string(_v_36830_what.get());_text38517+=u".path takes a function of the particle that returns [column, row], not one that returns ";_text38517+=j::string(([&]()->V{V _receiver38518=j::builtin("JSON");V _method38519=this->_literals[3];V _method=j::get(_receiver38518,_method38519);j::Args _params38520=j::Args{_v_36874_at};return j::call(_method,_params38520,_receiver38518);})());_text38517+=u"";return V(std::move(_text38517));})()});})());
}

}

return _v_36873_pl;

}

return V{};
},3);
this->_v_36878_fit.get()=j::function([=](const j::Args &_args_fn36879,const V &_receiver_fn36879,const V &_self_fn36879) mutable ->V{
V _v_36880_pl;
V _v_36881_box;
V _v_36882_A;
_v_36880_pl=_args_fn36879[0];
_v_36881_box=_args_fn36879[1];
_v_36882_A=_args_fn36879[2];
{
V _v_36883_side;
V _v_36884_down;
V _v_36885_height;
V _v_36886_width;
V _v_36887_inward;
V _v_36888_span;
V _v_36889_v;
V _v_36890_g;
V _v_36891_cross;
V _v_36892_L;
_v_36883_side=j::get(_v_36880_pl,this->_literals[104]);
if(j::truth(([&]()->V{V _logical38522=j::unary("!",_v_36883_side);return !j::truth(_logical38522)?j::unary("!",j::get(_v_36880_pl,this->_literals[105])):_logical38522;})())){return V{};
}
_v_36884_down=([&]()->V{V _logical38523=([&]()->V{V _lhs38524=_v_36883_side;V _rhs38525=this->_literals[24];return V(j::equal(_lhs38524,_rhs38525,true));})();return !j::truth(_logical38523)?([&]()->V{V _lhs38526=_v_36883_side;V _rhs38527=this->_literals[156];return V(j::equal(_lhs38526,_rhs38527,true));})():_logical38523;})();
_v_36885_height=([&]()->V{V _lhs38528=([&]()->V{V _lhs38530=(j::truth(([&]()->V{V _lhs38532=j::get(_v_36880_pl,this->_literals[87]);V _rhs38533=V::null();return V(!j::equal(_lhs38532,_rhs38533,true));})())?([&]()->V{V _receiver38536=j::builtin("Math");V _method38537=this->_literals[158];V _method=j::get(_receiver38536,_method38537);j::Args _params38538=j::Args{j::get(_v_36880_pl,this->_literals[87]),j::get(_v_36881_box,this->_literals[157])};return j::call(_method,_params38538,_receiver38536);})():j::get(_v_36881_box,this->_literals[157]));V _rhs38531=j::get(_v_36881_box,this->_literals[117]);return V(j::number(_lhs38530)-j::number(_rhs38531));})();V _rhs38529=_v_36882_A;return V(j::number(_lhs38528)*j::number(_rhs38529));})();
_v_36886_width=([&]()->V{V _lhs38539=j::get(_v_36881_box,this->_literals[159]);V _rhs38540=j::get(_v_36881_box,this->_literals[116]);return V(j::number(_lhs38539)-j::number(_rhs38540));})();
_v_36887_inward=(j::truth(([&]()->V{V _logical38541=([&]()->V{V _lhs38542=_v_36883_side;V _rhs38543=this->_literals[24];return V(j::equal(_lhs38542,_rhs38543,true));})();return !j::truth(_logical38541)?([&]()->V{V _lhs38544=_v_36883_side;V _rhs38545=this->_literals[160];return V(j::equal(_lhs38544,_rhs38545,true));})():_logical38541;})())?V(1.0):j::unary("-",V(1.0)));
_v_36888_span=(j::truth(_v_36884_down)?_v_36885_height:_v_36886_width);
_v_36889_v=([&]()->V{V _lhs38546=([&]()->V{V _receiver38552=j::builtin("Math");V _method38553=this->_literals[30];V _method=j::get(_receiver38552,_method38553);j::Args _params38554=j::Args{j::get(j::get(_v_36880_pl,this->_literals[68]),V(0.0)),([&]()->V{V _lhs38548=j::get(j::get(_v_36880_pl,this->_literals[68]),V(1.0));V _rhs38549=V(4.0);return V(j::number(_lhs38548)/j::number(_rhs38549));})()};return j::call(_method,_params38554,_receiver38552);})();V _rhs38547=(j::truth(_v_36884_down)?V(0.0):([&]()->V{V _lhs38555=_v_36887_inward;V _rhs38556=j::get(_v_36880_pl,this->_literals[70]);return V(j::number(_lhs38555)*j::number(_rhs38556));})());return j::binary("+",_lhs38546,_rhs38547);})();
_v_36890_g=(j::truth(_v_36884_down)?([&]()->V{V _lhs38557=_v_36887_inward;V _rhs38558=j::get(_v_36880_pl,this->_literals[69]);return V(j::number(_lhs38557)*j::number(_rhs38558));})():V(0.0));
_v_36891_cross=(j::truth(([&]()->V{V _lhs38559=_v_36890_g;V _rhs38560=V(0.0);return j::binary(">",_lhs38559,_rhs38560);})())?([&]()->V{V _lhs38561=([&]()->V{V _lhs38563=([&]()->V{V _number38573=([&]()->V{V _lhs38574=([&]()->V{V _lhs38576=_v_36889_v;V _rhs38577=_v_36889_v;return V(j::number(_lhs38576)*j::number(_rhs38577));})();V _rhs38575=([&]()->V{V _lhs38578=([&]()->V{V _lhs38580=V(2.0);V _rhs38581=_v_36890_g;return V(j::number(_lhs38580)*j::number(_rhs38581));})();V _rhs38579=_v_36888_span;return V(j::number(_lhs38578)*j::number(_rhs38579));})();return j::binary("+",_lhs38574,_rhs38575);})();return V(std::sqrt(j::number(_number38573)));})();V _rhs38564=_v_36889_v;return V(j::number(_lhs38563)-j::number(_rhs38564));})();V _rhs38562=_v_36890_g;return V(j::number(_lhs38561)/j::number(_rhs38562));})():(j::truth(([&]()->V{V _lhs38582=_v_36889_v;V _rhs38583=V(0.0);return j::binary(">",_lhs38582,_rhs38583);})())?([&]()->V{V _lhs38584=_v_36888_span;V _rhs38585=_v_36889_v;return V(j::number(_lhs38584)/j::number(_rhs38585));})():V(0.0)));
if(j::truth(j::unary("!",([&]()->V{V _lhs38586=_v_36891_cross;V _rhs38587=V(0.0);return j::binary(">",_lhs38586,_rhs38587);})()))){return V{};
}
_v_36892_L=([&]()->V{V _lhs38588=([&]()->V{V _receiver38597=j::builtin("Math");V _method38598=this->_literals[158];V _method=j::get(_receiver38597,_method38598);j::Args _params38599=j::Args{V(60.0),([&]()->V{V _receiver38592=j::builtin("Math");V _method38593=this->_literals[30];V _method=j::get(_receiver38592,_method38593);j::Args _params38594=j::Args{V(1.0),_v_36891_cross};return j::call(_method,_params38594,_receiver38592);})()};return j::call(_method,_params38599,_receiver38597);})();V _rhs38589=j::get(j::get(_v_36880_pl,this->_literals[65]),V(1.0));return j::binary("+",_lhs38588,_rhs38589);})();
if(j::truth(([&]()->V{V _logical38600=([&]()->V{V _lhs38601=j::get(j::get(_v_36880_pl,this->_literals[66]),V(0.0));V _rhs38602=_v_36892_L;return V(!j::equal(_lhs38601,_rhs38602,true));})();return !j::truth(_logical38600)?([&]()->V{V _lhs38603=j::get(j::get(_v_36880_pl,this->_literals[66]),V(1.0));V _rhs38604=_v_36892_L;return V(!j::equal(_lhs38603,_rhs38604,true));})():_logical38600;})())){(void)(([&]()->V{V _base38606=_v_36880_pl;V _key38607=this->_literals[66];V _assign38605=([&]()->V{j::Args _array38608;_array38608.push_back(_v_36892_L);_array38608.push_back(_v_36892_L);return j::array(std::move(_array38608));})();return j::put(_base38606,_key38607,_assign38605);})());
}
if(j::truth(j::get(_v_36880_pl,this->_literals[106]))){(void)(([&]()->V{V _base38610=_v_36880_pl;V _key38611=this->_literals[57];V _assign38609=([&]()->V{V _receiver38616=j::builtin("Math");V _method38617=this->_literals[30];V _method=j::get(_receiver38616,_method38617);j::Args _params38618=j::Args{V(0.1),([&]()->V{V _lhs38612=(j::truth(_v_36884_down)?_v_36886_width:_v_36885_height);V _rhs38613=V(10.0);return V(j::number(_lhs38612)/j::number(_rhs38613));})()};return j::call(_method,_params38618,_receiver38616);})();return j::put(_base38610,_key38611,_assign38609);})());
}

}

return V{};
},3);
this->_v_36893_checkAlive.get()=j::function([=](const j::Args &_args_fn36894,const V &_receiver_fn36894,const V &_self_fn36894) mutable ->V{
V _v_36895_pl;
V _v_36896_period;
_v_36895_pl=_args_fn36894[0];
_v_36896_period=_args_fn36894[1];
{
V _v_36897_reach;
V _v_36898_alive;
_v_36897_reach=([&]()->V{V _callee38619=this->_v_36875_reachOf.get();return j::call(_callee38619,j::Args{_v_36895_pl});})();
if(j::truth(j::get(_v_36895_pl,this->_literals[58]))){
V _v_36899_every;
_v_36899_every=j::get(j::get(_v_36895_pl,this->_literals[58]),this->_literals[7]);
if(j::truth(_v_36896_period)){(void)((_v_36899_every=([&]()->V{V _lhs38621=_v_36896_period;V _rhs38622=([&]()->V{V _receiver38634=j::builtin("Math");V _method38635=this->_literals[30];V _method=j::get(_receiver38634,_method38635);j::Args _params38636=j::Args{V(1.0),([&]()->V{V _number38627=([&]()->V{V _lhs38628=_v_36896_period;V _rhs38629=(j::truth(([&]()->V{V _lhs38630=_v_36899_every;V _rhs38631=j::builtin("Infinity");return V(j::equal(_lhs38630,_rhs38631,true));})())?_v_36896_period:_v_36899_every);return V(j::number(_lhs38628)/j::number(_rhs38629));})();return V(std::floor(j::number(_number38627)+.5));})()};return j::call(_method,_params38636,_receiver38634);})();return V(j::number(_lhs38621)/j::number(_rhs38622));})()));
}
(void)((_v_36898_alive=([&]()->V{V _lhs38638=j::get(j::get(_v_36895_pl,this->_literals[58]),this->_literals[60]);V _rhs38639=(j::truth(([&]()->V{V _lhs38640=_v_36899_every;V _rhs38641=j::builtin("Infinity");return V(j::equal(_lhs38640,_rhs38641,true));})())?V(1.0):([&]()->V{V _lhs38642=([&]()->V{V _number38646=([&]()->V{V _lhs38647=_v_36897_reach;V _rhs38648=_v_36899_every;return V(j::number(_lhs38647)/j::number(_rhs38648));})();return V(std::ceil(j::number(_number38646)));})();V _rhs38643=V(1.0);return j::binary("+",_lhs38642,_rhs38643);})());return V(j::number(_lhs38638)*j::number(_rhs38639));})()));

}
else {(void)((_v_36898_alive=([&]()->V{V _lhs38650=(j::truth(_v_36896_period)?([&]()->V{V _lhs38652=([&]()->V{V _receiver38661=j::builtin("Math");V _method38662=this->_literals[30];V _method=j::get(_receiver38661,_method38662);j::Args _params38663=j::Args{V(1.0),([&]()->V{V _number38656=([&]()->V{V _lhs38657=j::get(_v_36895_pl,this->_literals[57]);V _rhs38658=_v_36896_period;return V(j::number(_lhs38657)*j::number(_rhs38658));})();return V(std::floor(j::number(_number38656)+.5));})()};return j::call(_method,_params38663,_receiver38661);})();V _rhs38653=_v_36896_period;return V(j::number(_lhs38652)/j::number(_rhs38653));})():j::get(_v_36895_pl,this->_literals[57]));V _rhs38651=_v_36897_reach;return V(j::number(_lhs38650)*j::number(_rhs38651));})()));
}
if(j::truth(([&]()->V{V _lhs38664=_v_36898_alive;V _rhs38665=this->_v_36714_ALIVE.get();return j::binary(">",_lhs38664,_rhs38665);})())){(void)(([&]()->V{V _callee38669=this->_v_36700_fail.get();return j::call(_callee38669,j::Args{([&]()->V{std::u16string _text38666;_text38666+=u"";_text38666+=j::string(j::get(_v_36895_pl,this->_literals[94]));_text38666+=u" would keep ";_text38666+=j::string(([&]()->V{V _number38667=_v_36898_alive;return V(std::floor(j::number(_number38667)+.5));})());_text38666+=u" particles alive at once";_text38666+=j::string((j::truth(_v_36896_period)?([&]()->V{std::u16string _text38668;_text38668+=u", repeating every ";_text38668+=j::string(_v_36896_period);_text38668+=u" seconds";return V(std::move(_text38668));})():this->_literals[2]));_text38666+=u", past the ";_text38666+=j::string(this->_v_36714_ALIVE.get());_text38666+=u" a frame can draw in time: lower its rate, count or life";return V(std::move(_text38666));})()});})());
}

}

return V{};
},2);
this->_v_36904_plansOf.get()=j::function([=](const j::Args &_args_fn36905,const V &_receiver_fn36905,const V &_self_fn36905) mutable ->V{
V _v_36906_systems;
j::Cell _v_36907_what;
_v_36906_systems=_args_fn36905[0];
_v_36907_what.get()=_args_fn36905[1];
{
j::Cell _v_36908_list;
if(j::truth(([&]()->V{V _logical38670=([&]()->V{V _lhs38671=_v_36906_systems;V _rhs38672=V::null();return V(j::equal(_lhs38671,_rhs38672,true));})();return !j::truth(_logical38670)?([&]()->V{V _lhs38673=j::unary("typeof",_v_36906_systems);V _rhs38674=this->_literals[6];return V(!j::equal(_lhs38673,_rhs38674,true));})():_logical38670;})())){(void)(([&]()->V{V _callee38679=this->_v_36700_fail.get();return j::call(_callee38679,j::Args{([&]()->V{std::u16string _text38675;_text38675+=u"";_text38675+=j::string(_v_36907_what.get());_text38675+=u" takes a system, { emitter, ... }, or a list of them, not ";_text38675+=j::string(([&]()->V{V _receiver38676=j::builtin("JSON");V _method38677=this->_literals[3];V _method=j::get(_receiver38676,_method38677);j::Args _params38678=j::Args{_v_36906_systems};return j::call(_method,_params38678,_receiver38676);})());_text38675+=u"";return V(std::move(_text38675));})()});})());
}
_v_36908_list.get()=([&]()->V{V _callee38680=this->_v_36900_listOf.get();return j::call(_callee38680,j::Args{_v_36906_systems});})();
return ([&]()->V{V _receiver38703=_v_36908_list.get();V _method38704=this->_literals[21];V _method=j::get(_receiver38703,_method38704);j::Args _params38705=j::Args{j::function([=](const j::Args &_args_fn36909,const V &_receiver_fn36909,const V &_self_fn36909) mutable ->V{
V _v_36910_sys;
V _v_36911_n;
_v_36910_sys=_args_fn36909[0];
_v_36911_n=_args_fn36909[1];
{
V _v_36912_at;
V _v_36913_plans;
_v_36912_at=(j::truth(([&]()->V{V _lhs38681=j::get(_v_36908_list.get(),this->_literals[1]);V _rhs38682=V(1.0);return j::binary(">",_lhs38681,_rhs38682);})())?([&]()->V{std::u16string _text38683;_text38683+=u"";_text38683+=j::string(_v_36907_what.get());_text38683+=u" (system ";_text38683+=j::string(([&]()->V{V _lhs38684=_v_36911_n;V _rhs38685=V(1.0);return j::binary("+",_lhs38684,_rhs38685);})());_text38683+=u")";return V(std::move(_text38683));})():_v_36907_what.get());
if(j::truth(([&]()->V{V _logical38686=j::unary("!",_v_36910_sys);return !j::truth(_logical38686)?([&]()->V{V _lhs38687=j::unary("typeof",_v_36910_sys);V _rhs38688=this->_literals[6];return V(!j::equal(_lhs38687,_rhs38688,true));})():_logical38686;})())){return ([&]()->V{V _callee38689=this->_v_36826_plan.get();return j::call(_callee38689,j::Args{_v_36910_sys,_v_36911_n,_v_36912_at});})();
}
_v_36913_plans=([&]()->V{V _receiver38690=this->_v_36903_kept.get();V _method38691=this->_literals[161];V _method=j::get(_receiver38690,_method38691);j::Args _params38692=j::Args{_v_36910_sys};return j::call(_method,_params38692,_receiver38690);})();
if(j::truth(j::unary("!",_v_36913_plans))){(void)(([&]()->V{V _receiver38695=this->_v_36903_kept.get();V _method38696=this->_literals[162];V _method=j::get(_receiver38695,_method38696);j::Args _params38697=j::Args{_v_36910_sys,(_v_36913_plans=([&]()->V{j::Args _array38694;return j::array(std::move(_array38694));})())};return j::call(_method,_params38697,_receiver38695);})());
}
return ([&]()->V{V _base38699=_v_36913_plans;V _key38700=_v_36911_n;V _old38701=j::get(_base38699,_key38700);return j::nullish(_old38701)?j::put(_base38699,_key38700,([&]()->V{V _callee38702=this->_v_36826_plan.get();return j::call(_callee38702,j::Args{_v_36910_sys,_v_36911_n,_v_36912_at});})()):_old38701;})();

}

return V{};
},2)};return j::call(_method,_params38705,_receiver38703);})();

}

return V{};
},2);
this->_v_36924_travel.get()=j::function([=](const j::Args &_args_fn36925,const V &_receiver_fn36925,const V &_self_fn36925) mutable ->V{
V _v_36926_v0;
V _v_36927_g;
V _v_36928_w;
V _v_36929_k;
V _v_36930_a;
_v_36926_v0=_args_fn36925[0];
_v_36927_g=_args_fn36925[1];
_v_36928_w=_args_fn36925[2];
_v_36929_k=_args_fn36925[3];
_v_36930_a=_args_fn36925[4];
{
if(j::truth(([&]()->V{V _lhs38706=_v_36929_k;V _rhs38707=V(0.0);return V(j::equal(_lhs38706,_rhs38707,true));})())){return ([&]()->V{V _lhs38708=([&]()->V{V _lhs38710=([&]()->V{V _lhs38712=_v_36926_v0;V _rhs38713=_v_36928_w;return j::binary("+",_lhs38712,_rhs38713);})();V _rhs38711=_v_36930_a;return V(j::number(_lhs38710)*j::number(_rhs38711));})();V _rhs38709=([&]()->V{V _lhs38714=([&]()->V{V _lhs38716=([&]()->V{V _lhs38718=V(0.5);V _rhs38719=_v_36927_g;return V(j::number(_lhs38718)*j::number(_rhs38719));})();V _rhs38717=_v_36930_a;return V(j::number(_lhs38716)*j::number(_rhs38717));})();V _rhs38715=_v_36930_a;return V(j::number(_lhs38714)*j::number(_rhs38715));})();return j::binary("+",_lhs38708,_rhs38709);})();
}
return ([&]()->V{V _lhs38720=([&]()->V{V _lhs38722=([&]()->V{V _lhs38724=_v_36928_w;V _rhs38725=_v_36930_a;return V(j::number(_lhs38724)*j::number(_rhs38725));})();V _rhs38723=([&]()->V{V _lhs38726=_v_36926_v0;V _rhs38727=([&]()->V{V _callee38728=this->_v_36914_carried.get();return j::call(_callee38728,j::Args{_v_36929_k,_v_36930_a});})();return V(j::number(_lhs38726)*j::number(_rhs38727));})();return j::binary("+",_lhs38722,_rhs38723);})();V _rhs38721=([&]()->V{V _lhs38729=_v_36927_g;V _rhs38730=([&]()->V{V _callee38731=this->_v_36919_pulled.get();return j::call(_callee38731,j::Args{_v_36929_k,_v_36930_a});})();return V(j::number(_lhs38729)*j::number(_rhs38730));})();return j::binary("+",_lhs38720,_rhs38721);})();

}

return V{};
},5);
this->_v_36931_pace.get()=j::function([=](const j::Args &_args_fn36932,const V &_receiver_fn36932,const V &_self_fn36932) mutable ->V{
V _v_36933_v0;
V _v_36934_g;
V _v_36935_w;
V _v_36936_k;
V _v_36937_a;
_v_36933_v0=_args_fn36932[0];
_v_36934_g=_args_fn36932[1];
_v_36935_w=_args_fn36932[2];
_v_36936_k=_args_fn36932[3];
_v_36937_a=_args_fn36932[4];
{
if(j::truth(([&]()->V{V _lhs38732=_v_36936_k;V _rhs38733=V(0.0);return V(j::equal(_lhs38732,_rhs38733,true));})())){return ([&]()->V{V _lhs38734=([&]()->V{V _lhs38736=_v_36933_v0;V _rhs38737=_v_36935_w;return j::binary("+",_lhs38736,_rhs38737);})();V _rhs38735=([&]()->V{V _lhs38738=_v_36934_g;V _rhs38739=_v_36937_a;return V(j::number(_lhs38738)*j::number(_rhs38739));})();return j::binary("+",_lhs38734,_rhs38735);})();
}
return ([&]()->V{V _lhs38740=([&]()->V{V _lhs38742=_v_36935_w;V _rhs38743=([&]()->V{V _lhs38744=_v_36933_v0;V _rhs38745=([&]()->V{V _number38748=([&]()->V{V _lhs38749=j::unary("-",_v_36936_k);V _rhs38750=_v_36937_a;return V(j::number(_lhs38749)*j::number(_rhs38750));})();return V(std::exp(j::number(_number38748)));})();return V(j::number(_lhs38744)*j::number(_rhs38745));})();return j::binary("+",_lhs38742,_rhs38743);})();V _rhs38741=([&]()->V{V _lhs38751=_v_36934_g;V _rhs38752=([&]()->V{V _callee38753=this->_v_36914_carried.get();return j::call(_callee38753,j::Args{_v_36936_k,_v_36937_a});})();return V(j::number(_lhs38751)*j::number(_rhs38752));})();return j::binary("+",_lhs38740,_rhs38741);})();

}

return V{};
},5);
this->_v_36938_apex.get()=j::function([=](const j::Args &_args_fn36939,const V &_receiver_fn36939,const V &_self_fn36939) mutable ->V{
V _v_36940_v0;
V _v_36941_g;
V _v_36942_w;
V _v_36943_k;
_v_36940_v0=_args_fn36939[0];
_v_36941_g=_args_fn36939[1];
_v_36942_w=_args_fn36939[2];
_v_36943_k=_args_fn36939[3];
{
V _v_36944_den;
V _v_36945_q;
if(j::truth(([&]()->V{V _lhs38754=_v_36943_k;V _rhs38755=V(0.0);return V(j::equal(_lhs38754,_rhs38755,true));})())){return (j::truth(([&]()->V{V _logical38756=([&]()->V{V _lhs38757=_v_36941_g;V _rhs38758=V(0.0);return V(!j::equal(_lhs38757,_rhs38758,true));})();return j::truth(_logical38756)?([&]()->V{V _lhs38759=([&]()->V{V _lhs38761=j::unary("-",([&]()->V{V _lhs38763=_v_36940_v0;V _rhs38764=_v_36942_w;return j::binary("+",_lhs38763,_rhs38764);})());V _rhs38762=_v_36941_g;return V(j::number(_lhs38761)/j::number(_rhs38762));})();V _rhs38760=V(0.0);return j::binary(">",_lhs38759,_rhs38760);})():_logical38756;})())?([&]()->V{V _lhs38765=j::unary("-",([&]()->V{V _lhs38767=_v_36940_v0;V _rhs38768=_v_36942_w;return j::binary("+",_lhs38767,_rhs38768);})());V _rhs38766=_v_36941_g;return V(j::number(_lhs38765)/j::number(_rhs38766));})():j::unary("-",V(1.0)));
}
_v_36944_den=([&]()->V{V _lhs38769=_v_36941_g;V _rhs38770=([&]()->V{V _lhs38771=_v_36943_k;V _rhs38772=_v_36940_v0;return V(j::number(_lhs38771)*j::number(_rhs38772));})();return V(j::number(_lhs38769)-j::number(_rhs38770));})();
_v_36945_q=(j::truth(([&]()->V{V _lhs38773=_v_36944_den;V _rhs38774=V(0.0);return V(j::equal(_lhs38773,_rhs38774,true));})())?V(0.0):([&]()->V{V _lhs38775=([&]()->V{V _lhs38777=_v_36943_k;V _rhs38778=([&]()->V{V _lhs38779=_v_36942_w;V _rhs38780=_v_36940_v0;return j::binary("+",_lhs38779,_rhs38780);})();return V(j::number(_lhs38777)*j::number(_rhs38778));})();V _rhs38776=_v_36944_den;return V(j::number(_lhs38775)/j::number(_rhs38776));})());
return (j::truth(([&]()->V{V _logical38781=([&]()->V{V _lhs38782=_v_36945_q;V _rhs38783=j::unary("-",V(1.0));return j::binary(">",_lhs38782,_rhs38783);})();return j::truth(_logical38781)?([&]()->V{V _lhs38784=_v_36945_q;V _rhs38785=V(0.0);return j::binary("<",_lhs38784,_rhs38785);})():_logical38781;})())?([&]()->V{V _lhs38786=j::unary("-",([&]()->V{V _number38788=_v_36945_q;return V(std::log1p(j::number(_number38788)));})());V _rhs38787=_v_36943_k;return V(j::number(_lhs38786)/j::number(_rhs38787));})():j::unary("-",V(1.0)));

}

return V{};
},4);
this->_v_36946_fold.get()=j::function([=](const j::Args &_args_fn36947,const V &_receiver_fn36947,const V &_self_fn36947) mutable ->V{
V _v_36948_p;
V _v_36949_lo;
V _v_36950_hi;
V _v_36951_how;
_v_36948_p=_args_fn36947[0];
_v_36949_lo=_args_fn36947[1];
_v_36950_hi=_args_fn36947[2];
_v_36951_how=_args_fn36947[3];
{
V _v_36952_span;
V _v_36953_m;
_v_36952_span=([&]()->V{V _lhs38789=_v_36950_hi;V _rhs38790=_v_36949_lo;return V(j::number(_lhs38789)-j::number(_rhs38790));})();
if(j::truth(([&]()->V{V _logical38791=([&]()->V{V _logical38792=([&]()->V{V _lhs38793=_v_36952_span;V _rhs38794=V(0.0);return j::binary("<=",_lhs38793,_rhs38794);})();return !j::truth(_logical38792)?([&]()->V{V _lhs38795=_v_36951_how;V _rhs38796=this->_literals[82];return V(j::equal(_lhs38795,_rhs38796,true));})():_logical38792;})();return !j::truth(_logical38791)?([&]()->V{V _lhs38797=_v_36951_how;V _rhs38798=this->_literals[163];return V(j::equal(_lhs38797,_rhs38798,true));})():_logical38791;})())){return _v_36948_p;
}
if(j::truth(([&]()->V{V _lhs38799=_v_36951_how;V _rhs38800=this->_literals[164];return V(j::equal(_lhs38799,_rhs38800,true));})())){return ([&]()->V{V _lhs38801=_v_36949_lo;V _rhs38802=([&]()->V{V _callee38805=this->_v_36724_mod.get();return j::call(_callee38805,j::Args{([&]()->V{V _lhs38803=_v_36948_p;V _rhs38804=_v_36949_lo;return V(j::number(_lhs38803)-j::number(_rhs38804));})(),_v_36952_span});})();return j::binary("+",_lhs38801,_rhs38802);})();
}
_v_36953_m=([&]()->V{V _callee38810=this->_v_36724_mod.get();return j::call(_callee38810,j::Args{([&]()->V{V _lhs38806=_v_36948_p;V _rhs38807=_v_36949_lo;return V(j::number(_lhs38806)-j::number(_rhs38807));})(),([&]()->V{V _lhs38808=V(2.0);V _rhs38809=_v_36952_span;return V(j::number(_lhs38808)*j::number(_rhs38809));})()});})();
return ([&]()->V{V _receiver38823=j::builtin("Math");V _method38824=this->_literals[158];V _method=j::get(_receiver38823,_method38824);j::Args _params38825=j::Args{([&]()->V{V _lhs38811=_v_36950_hi;V _rhs38812=this->_v_36715_IN.get();return V(j::number(_lhs38811)-j::number(_rhs38812));})(),([&]()->V{V _lhs38813=_v_36949_lo;V _rhs38814=(j::truth(([&]()->V{V _lhs38815=_v_36953_m;V _rhs38816=_v_36952_span;return j::binary("<",_lhs38815,_rhs38816);})())?_v_36953_m:([&]()->V{V _lhs38817=([&]()->V{V _lhs38819=V(2.0);V _rhs38820=_v_36952_span;return V(j::number(_lhs38819)*j::number(_rhs38820));})();V _rhs38818=_v_36953_m;return V(j::number(_lhs38817)-j::number(_rhs38818));})());return j::binary("+",_lhs38813,_rhs38814);})()};return j::call(_method,_params38825,_receiver38823);})();

}

return V{};
},4);
this->_v_36954_turned.get()=j::function([=](const j::Args &_args_fn36955,const V &_receiver_fn36955,const V &_self_fn36955) mutable ->V{
V _v_36956_p;
V _v_36957_lo;
V _v_36958_hi;
V _v_36959_how;
_v_36956_p=_args_fn36955[0];
_v_36957_lo=_args_fn36955[1];
_v_36958_hi=_args_fn36955[2];
_v_36959_how=_args_fn36955[3];
{
V _v_36960_span;
_v_36960_span=([&]()->V{V _lhs38826=_v_36958_hi;V _rhs38827=_v_36957_lo;return V(j::number(_lhs38826)-j::number(_rhs38827));})();
return (j::truth(([&]()->V{V _logical38828=([&]()->V{V _logical38829=([&]()->V{V _lhs38830=_v_36959_how;V _rhs38831=this->_literals[86];return V(j::equal(_lhs38830,_rhs38831,true));})();return j::truth(_logical38829)?([&]()->V{V _lhs38832=_v_36960_span;V _rhs38833=V(0.0);return j::binary(">",_lhs38832,_rhs38833);})():_logical38829;})();return j::truth(_logical38828)?([&]()->V{V _lhs38834=([&]()->V{V _callee38840=this->_v_36724_mod.get();return j::call(_callee38840,j::Args{([&]()->V{V _lhs38836=_v_36956_p;V _rhs38837=_v_36957_lo;return V(j::number(_lhs38836)-j::number(_rhs38837));})(),([&]()->V{V _lhs38838=V(2.0);V _rhs38839=_v_36960_span;return V(j::number(_lhs38838)*j::number(_rhs38839));})()});})();V _rhs38835=_v_36960_span;return j::binary(">=",_lhs38834,_rhs38835);})():_logical38828;})())?j::unary("-",V(1.0)):V(1.0));

}

return V{};
},4);
this->_v_36961_streak.get()=j::function([=](const j::Args &_args_fn36962,const V &_receiver_fn36962,const V &_self_fn36962) mutable ->V{
V _v_36963_p;
_v_36963_p=_args_fn36962[0];
{
V _v_36964_a;
_v_36964_a=([&]()->V{V _number38841=j::get(_v_36963_p,this->_literals[112]);V _number38842=j::get(_v_36963_p,this->_literals[111]);return V(std::atan2(j::number(_number38841),j::number(_number38842)));})();
if(j::truth(([&]()->V{V _lhs38843=_v_36964_a;V _rhs38844=V(0.0);return j::binary("<",_lhs38843,_rhs38844);})())){(void)((_v_36964_a=j::binary("+",_v_36964_a,j::get(j::builtin("Math"),this->_literals[55]))));
}
return (j::truth(([&]()->V{V _logical38846=([&]()->V{V _lhs38847=_v_36964_a;V _rhs38848=([&]()->V{V _lhs38849=j::get(j::builtin("Math"),this->_literals[55]);V _rhs38850=V(8.0);return V(j::number(_lhs38849)/j::number(_rhs38850));})();return j::binary("<",_lhs38847,_rhs38848);})();return !j::truth(_logical38846)?([&]()->V{V _lhs38851=_v_36964_a;V _rhs38852=([&]()->V{V _lhs38853=([&]()->V{V _lhs38855=V(7.0);V _rhs38856=j::get(j::builtin("Math"),this->_literals[55]);return V(j::number(_lhs38855)*j::number(_rhs38856));})();V _rhs38854=V(8.0);return V(j::number(_lhs38853)/j::number(_rhs38854));})();return j::binary(">=",_lhs38851,_rhs38852);})():_logical38846;})())?this->_literals[165]:(j::truth(([&]()->V{V _lhs38857=_v_36964_a;V _rhs38858=([&]()->V{V _lhs38859=([&]()->V{V _lhs38861=V(3.0);V _rhs38862=j::get(j::builtin("Math"),this->_literals[55]);return V(j::number(_lhs38861)*j::number(_rhs38862));})();V _rhs38860=V(8.0);return V(j::number(_lhs38859)/j::number(_rhs38860));})();return j::binary("<",_lhs38857,_rhs38858);})())?this->_literals[166]:(j::truth(([&]()->V{V _lhs38863=_v_36964_a;V _rhs38864=([&]()->V{V _lhs38865=([&]()->V{V _lhs38867=V(5.0);V _rhs38868=j::get(j::builtin("Math"),this->_literals[55]);return V(j::number(_lhs38867)*j::number(_rhs38868));})();V _rhs38866=V(8.0);return V(j::number(_lhs38865)/j::number(_rhs38866));})();return j::binary("<",_lhs38863,_rhs38864);})())?this->_literals[167]:this->_literals[168])));

}

return V{};
},1);
this->_v_36965_windAt.get()=j::function([=](const j::Args &_args_fn36966,const V &_receiver_fn36966,const V &_self_fn36966) mutable ->V{
V _v_36967_pl;
V _v_36968_time;
_v_36967_pl=_args_fn36966[0];
_v_36968_time=_args_fn36966[1];
{
V _v_36969_wk;
V _v_36970_sum;
V _v_36971_f;
V _v_36972_j;
_v_36969_wk=j::get(_v_36967_pl,this->_literals[127]);
_v_36970_sum=j::get(_v_36967_pl,this->_literals[126]);
_v_36971_f=([&]()->V{V _lhs38869=([&]()->V{V _lhs38871=_v_36968_time;V _rhs38872=j::get(_v_36969_wk,this->_literals[143]);return V(j::number(_lhs38871)/j::number(_rhs38872));})();V _rhs38870=j::get(_v_36969_wk,this->_literals[144]);return V(j::number(_lhs38869)-j::number(_rhs38870));})();
_v_36972_j=([&]()->V{V _receiver38883=j::builtin("Math");V _method38884=this->_literals[30];V _method=j::get(_receiver38883,_method38884);j::Args _params38885=j::Args{V(0.0),([&]()->V{V _receiver38878=j::builtin("Math");V _method38879=this->_literals[158];V _method=j::get(_receiver38878,_method38879);j::Args _params38880=j::Args{([&]()->V{V _lhs38873=j::get(_v_36969_wk,this->_literals[122]);V _rhs38874=V(2.0);return V(j::number(_lhs38873)-j::number(_rhs38874));})(),([&]()->V{V _number38875=_v_36971_f;return V(std::floor(j::number(_number38875)));})()};return j::call(_method,_params38880,_receiver38878);})()};return j::call(_method,_params38885,_receiver38883);})();
return ([&]()->V{V _lhs38886=j::get(_v_36970_sum,_v_36972_j);V _rhs38887=([&]()->V{V _lhs38888=([&]()->V{V _lhs38890=j::get(_v_36970_sum,([&]()->V{V _lhs38892=_v_36972_j;V _rhs38893=V(1.0);return j::binary("+",_lhs38892,_rhs38893);})());V _rhs38891=j::get(_v_36970_sum,_v_36972_j);return V(j::number(_lhs38890)-j::number(_rhs38891));})();V _rhs38889=([&]()->V{V _lhs38894=_v_36971_f;V _rhs38895=_v_36972_j;return V(j::number(_lhs38894)-j::number(_rhs38895));})();return V(j::number(_lhs38888)*j::number(_rhs38889));})();return j::binary("+",_lhs38886,_rhs38887);})();

}

return V{};
},2);
this->_v_36973_addWind.get()=j::function([=](const j::Args &_args_fn36974,const V &_receiver_fn36974,const V &_self_fn36974) mutable ->V{
V _v_36975_pl;
V _v_36976_from;
V _v_36977_to;
_v_36975_pl=_args_fn36974[0];
_v_36976_from=_args_fn36974[1];
_v_36977_to=_args_fn36974[2];
{
V _v_36978_gusts;
V _v_36979_wk;
V _v_36980_step;
V _v_36981_sum;
V _v_36982_prev;
_v_36978_gusts=j::get(_v_36975_pl,this->_literals[95]);
_v_36979_wk=j::get(_v_36975_pl,this->_literals[127]);
_v_36980_step=j::get(_v_36979_wk,this->_literals[143]);
(void)(([&]()->V{V _base38897=_v_36979_wk;V _key38898=this->_literals[144];V _assign38896=([&]()->V{V _number38901=([&]()->V{V _lhs38902=_v_36976_from;V _rhs38903=_v_36980_step;return V(j::number(_lhs38902)/j::number(_rhs38903));})();return V(std::floor(j::number(_number38901)));})();return j::put(_base38897,_key38898,_assign38896);})());
(void)(([&]()->V{V _base38905=_v_36979_wk;V _key38906=this->_literals[122];V _assign38904=([&]()->V{V _lhs38907=([&]()->V{V _lhs38909=([&]()->V{V _number38913=([&]()->V{V _lhs38914=_v_36977_to;V _rhs38915=_v_36980_step;return V(j::number(_lhs38914)/j::number(_rhs38915));})();return V(std::ceil(j::number(_number38913)));})();V _rhs38910=V(2.0);return j::binary("+",_lhs38909,_rhs38910);})();V _rhs38908=j::get(_v_36979_wk,this->_literals[144]);return V(j::number(_lhs38907)-j::number(_rhs38908));})();return j::put(_base38905,_key38906,_assign38904);})());
if(j::truth(([&]()->V{V _lhs38916=j::get(j::get(_v_36975_pl,this->_literals[126]),this->_literals[1]);V _rhs38917=j::get(_v_36979_wk,this->_literals[122]);return j::binary("<",_lhs38916,_rhs38917);})())){(void)(([&]()->V{V _base38919=_v_36975_pl;V _key38920=this->_literals[126];V _assign38918=([&]()->V{V _callee38923=j::builtin("Float64Array");return j::construct(_callee38923,j::Args{([&]()->V{V _lhs38921=j::get(_v_36979_wk,this->_literals[122]);V _rhs38922=V(2.0);return V(j::number(_lhs38921)*j::number(_rhs38922));})()});})();return j::put(_base38919,_key38920,_assign38918);})());
}
_v_36981_sum=j::get(_v_36975_pl,this->_literals[126]);
(void)(([&]()->V{V _base38925=_v_36981_sum;V _key38926=V(0.0);V _assign38924=V(0.0);return j::put(_base38925,_key38926,_assign38924);})());
_v_36982_prev=([&]()->V{V _logical38927=j::unary("+",([&]()->V{V _callee38930=_v_36978_gusts;return j::call(_callee38930,j::Args{([&]()->V{V _lhs38928=j::get(_v_36979_wk,this->_literals[144]);V _rhs38929=_v_36980_step;return V(j::number(_lhs38928)*j::number(_rhs38929));})()});})());return !j::truth(_logical38927)?V(0.0):_logical38927;})();
{V _v_36983_j;
_v_36983_j=V(1.0);
for(;j::truth(([&]()->V{V _lhs38931=_v_36983_j;V _rhs38932=j::get(_v_36979_wk,this->_literals[122]);return j::binary("<",_lhs38931,_rhs38932);})());(void)(j::increment(_v_36983_j,1,false))){
V _v_36984_w;
_v_36984_w=([&]()->V{V _logical38933=j::unary("+",([&]()->V{V _callee38938=_v_36978_gusts;return j::call(_callee38938,j::Args{([&]()->V{V _lhs38934=([&]()->V{V _lhs38936=j::get(_v_36979_wk,this->_literals[144]);V _rhs38937=_v_36983_j;return j::binary("+",_lhs38936,_rhs38937);})();V _rhs38935=_v_36980_step;return V(j::number(_lhs38934)*j::number(_rhs38935));})()});})());return !j::truth(_logical38933)?V(0.0):_logical38933;})();
(void)(([&]()->V{V _base38940=_v_36981_sum;V _key38941=_v_36983_j;V _assign38939=([&]()->V{V _lhs38942=j::get(_v_36981_sum,([&]()->V{V _lhs38944=_v_36983_j;V _rhs38945=V(1.0);return V(j::number(_lhs38944)-j::number(_rhs38945));})());V _rhs38943=([&]()->V{V _lhs38946=([&]()->V{V _lhs38948=([&]()->V{V _lhs38950=_v_36982_prev;V _rhs38951=_v_36984_w;return j::binary("+",_lhs38950,_rhs38951);})();V _rhs38949=V(2.0);return V(j::number(_lhs38948)/j::number(_rhs38949));})();V _rhs38947=_v_36980_step;return V(j::number(_lhs38946)*j::number(_rhs38947));})();return j::binary("+",_lhs38942,_rhs38943);})();return j::put(_base38940,_key38941,_assign38939);})());
(void)((_v_36982_prev=_v_36984_w));

}
}

}

return V{};
},3);
this->_v_36985_crossing.get()=j::function([=](const j::Args &_args_fn36986,const V &_receiver_fn36986,const V &_self_fn36986) mutable ->V{
V _v_36987_u0;
V _v_36988_v0;
V _v_36989_g;
V _v_36990_w;
V _v_36991_k;
V _v_36992_wall;
V _v_36993_lo;
V _v_36994_hi;
_v_36987_u0=_args_fn36986[0];
_v_36988_v0=_args_fn36986[1];
_v_36989_g=_args_fn36986[2];
_v_36990_w=_args_fn36986[3];
_v_36991_k=_args_fn36986[4];
_v_36992_wall=_args_fn36986[5];
_v_36993_lo=_args_fn36986[6];
_v_36994_hi=_args_fn36986[7];
{
V _v_37006_f0;
V _v_37007_x;
if(j::truth(([&]()->V{V _lhs38953=_v_36991_k;V _rhs38954=V(0.0);return V(j::equal(_lhs38953,_rhs38954,true));})())){
V _v_36995_A;
V _v_36996_B;
V _v_36997_C;
V _v_36998_a;
_v_36995_A=([&]()->V{V _lhs38955=_v_36989_g;V _rhs38956=V(2.0);return V(j::number(_lhs38955)/j::number(_rhs38956));})();
_v_36996_B=([&]()->V{V _lhs38957=_v_36988_v0;V _rhs38958=_v_36990_w;return j::binary("+",_lhs38957,_rhs38958);})();
_v_36997_C=([&]()->V{V _lhs38959=_v_36987_u0;V _rhs38960=_v_36992_wall;return V(j::number(_lhs38959)-j::number(_rhs38960));})();
_v_36998_a=j::unary("-",V(1.0));
if(j::truth(([&]()->V{V _lhs38961=_v_36995_A;V _rhs38962=V(0.0);return V(j::equal(_lhs38961,_rhs38962,true));})())){(void)((_v_36998_a=(j::truth(([&]()->V{V _lhs38964=_v_36996_B;V _rhs38965=V(0.0);return V(j::equal(_lhs38964,_rhs38965,true));})())?j::unary("-",V(1.0)):([&]()->V{V _lhs38966=j::unary("-",_v_36997_C);V _rhs38967=_v_36996_B;return V(j::number(_lhs38966)/j::number(_rhs38967));})())));
}else {
V _v_36999_d;
_v_36999_d=([&]()->V{V _lhs38968=([&]()->V{V _lhs38970=_v_36996_B;V _rhs38971=_v_36996_B;return V(j::number(_lhs38970)*j::number(_rhs38971));})();V _rhs38969=([&]()->V{V _lhs38972=([&]()->V{V _lhs38974=V(4.0);V _rhs38975=_v_36995_A;return V(j::number(_lhs38974)*j::number(_rhs38975));})();V _rhs38973=_v_36997_C;return V(j::number(_lhs38972)*j::number(_rhs38973));})();return V(j::number(_lhs38968)-j::number(_rhs38969));})();
if(j::truth(([&]()->V{V _lhs38976=_v_36999_d;V _rhs38977=V(0.0);return j::binary(">=",_lhs38976,_rhs38977);})())){
V _v_37000_q;
V _v_37001_r1;
V _v_37002_r2;
V _v_37003_e;
V _v_37004_in1;
V _v_37005_in2;
_v_37000_q=([&]()->V{V _lhs38978=j::unary("-",V(0.5));V _rhs38979=([&]()->V{V _lhs38980=_v_36996_B;V _rhs38981=([&]()->V{V _lhs38982=(j::truth(([&]()->V{V _lhs38984=_v_36996_B;V _rhs38985=V(0.0);return j::binary("<",_lhs38984,_rhs38985);})())?j::unary("-",V(1.0)):V(1.0));V _rhs38983=([&]()->V{V _number38986=_v_36999_d;return V(std::sqrt(j::number(_number38986)));})();return V(j::number(_lhs38982)*j::number(_rhs38983));})();return j::binary("+",_lhs38980,_rhs38981);})();return V(j::number(_lhs38978)*j::number(_rhs38979));})();
_v_37001_r1=([&]()->V{V _lhs38987=_v_37000_q;V _rhs38988=_v_36995_A;return V(j::number(_lhs38987)/j::number(_rhs38988));})();
_v_37002_r2=(j::truth(([&]()->V{V _lhs38989=_v_37000_q;V _rhs38990=V(0.0);return V(j::equal(_lhs38989,_rhs38990,true));})())?_v_37001_r1:([&]()->V{V _lhs38991=_v_36997_C;V _rhs38992=_v_37000_q;return V(j::number(_lhs38991)/j::number(_rhs38992));})());
_v_37003_e=([&]()->V{V _lhs38993=V(1e-9);V _rhs38994=([&]()->V{V _lhs38995=V(1.0);V _rhs38996=_v_36994_hi;return j::binary("+",_lhs38995,_rhs38996);})();return V(j::number(_lhs38993)*j::number(_rhs38994));})();
_v_37004_in1=([&]()->V{V _logical38997=([&]()->V{V _lhs38998=_v_37001_r1;V _rhs38999=([&]()->V{V _lhs39000=_v_36993_lo;V _rhs39001=_v_37003_e;return V(j::number(_lhs39000)-j::number(_rhs39001));})();return j::binary(">=",_lhs38998,_rhs38999);})();return j::truth(_logical38997)?([&]()->V{V _lhs39002=_v_37001_r1;V _rhs39003=([&]()->V{V _lhs39004=_v_36994_hi;V _rhs39005=_v_37003_e;return j::binary("+",_lhs39004,_rhs39005);})();return j::binary("<=",_lhs39002,_rhs39003);})():_logical38997;})();
_v_37005_in2=([&]()->V{V _logical39006=([&]()->V{V _lhs39007=_v_37002_r2;V _rhs39008=([&]()->V{V _lhs39009=_v_36993_lo;V _rhs39010=_v_37003_e;return V(j::number(_lhs39009)-j::number(_rhs39010));})();return j::binary(">=",_lhs39007,_rhs39008);})();return j::truth(_logical39006)?([&]()->V{V _lhs39011=_v_37002_r2;V _rhs39012=([&]()->V{V _lhs39013=_v_36994_hi;V _rhs39014=_v_37003_e;return j::binary("+",_lhs39013,_rhs39014);})();return j::binary("<=",_lhs39011,_rhs39012);})():_logical39006;})();
(void)((_v_36998_a=(j::truth(([&]()->V{V _logical39016=_v_37004_in1;return j::truth(_logical39016)?_v_37005_in2:_logical39016;})())?([&]()->V{V _receiver39019=j::builtin("Math");V _method39020=this->_literals[158];V _method=j::get(_receiver39019,_method39020);j::Args _params39021=j::Args{_v_37001_r1,_v_37002_r2};return j::call(_method,_params39021,_receiver39019);})():(j::truth(_v_37004_in1)?_v_37001_r1:(j::truth(_v_37005_in2)?_v_37002_r2:j::unary("-",V(1.0)))))));

}


}

if(j::truth(([&]()->V{V _lhs39022=_v_36998_a;V _rhs39023=([&]()->V{V _lhs39024=_v_36993_lo;V _rhs39025=([&]()->V{V _lhs39026=V(1e-9);V _rhs39027=([&]()->V{V _lhs39028=V(1.0);V _rhs39029=_v_36994_hi;return j::binary("+",_lhs39028,_rhs39029);})();return V(j::number(_lhs39026)*j::number(_rhs39027));})();return V(j::number(_lhs39024)-j::number(_rhs39025));})();return j::binary(">=",_lhs39022,_rhs39023);})())){return ([&]()->V{V _receiver39037=j::builtin("Math");V _method39038=this->_literals[158];V _method=j::get(_receiver39037,_method39038);j::Args _params39039=j::Args{_v_36994_hi,([&]()->V{V _receiver39032=j::builtin("Math");V _method39033=this->_literals[30];V _method=j::get(_receiver39032,_method39033);j::Args _params39034=j::Args{_v_36993_lo,_v_36998_a};return j::call(_method,_params39034,_receiver39032);})()};return j::call(_method,_params39039,_receiver39037);})();
}

}

_v_37006_f0=([&]()->V{V _lhs39040=([&]()->V{V _lhs39042=_v_36987_u0;V _rhs39043=([&]()->V{V _callee39044=this->_v_36924_travel.get();return j::call(_callee39044,j::Args{_v_36988_v0,_v_36989_g,_v_36990_w,_v_36991_k,_v_36993_lo});})();return j::binary("+",_lhs39042,_rhs39043);})();V _rhs39041=_v_36992_wall;return V(j::number(_lhs39040)-j::number(_rhs39041));})();
_v_37007_x=([&]()->V{V _lhs39045=([&]()->V{V _lhs39047=_v_36993_lo;V _rhs39048=_v_36994_hi;return j::binary("+",_lhs39047,_rhs39048);})();V _rhs39046=V(2.0);return V(j::number(_lhs39045)/j::number(_rhs39046));})();
{V _v_37008_i;
_v_37008_i=V(0.0);
for(;j::truth(([&]()->V{V _logical39049=([&]()->V{V _lhs39050=_v_37008_i;V _rhs39051=V(64.0);return j::binary("<",_lhs39050,_rhs39051);})();return j::truth(_logical39049)?([&]()->V{V _lhs39052=([&]()->V{V _lhs39054=_v_36994_hi;V _rhs39055=_v_36993_lo;return V(j::number(_lhs39054)-j::number(_rhs39055));})();V _rhs39053=V(1e-10);return j::binary(">",_lhs39052,_rhs39053);})():_logical39049;})());(void)(j::increment(_v_37008_i,1,false))){
V _v_37009_f;
V _v_37010_d;
V _v_37011_next;
_v_37009_f=([&]()->V{V _lhs39056=([&]()->V{V _lhs39058=_v_36987_u0;V _rhs39059=([&]()->V{V _callee39060=this->_v_36924_travel.get();return j::call(_callee39060,j::Args{_v_36988_v0,_v_36989_g,_v_36990_w,_v_36991_k,_v_37007_x});})();return j::binary("+",_lhs39058,_rhs39059);})();V _rhs39057=_v_36992_wall;return V(j::number(_lhs39056)-j::number(_rhs39057));})();
if(j::truth(([&]()->V{V _lhs39061=([&]()->V{V _number39063=_v_37009_f;return V(std::fabs(j::number(_number39063)));})();V _rhs39062=V(1e-9);return j::binary("<",_lhs39061,_rhs39062);})())){return _v_37007_x;
}
if(j::truth(([&]()->V{V _lhs39064=([&]()->V{V _lhs39066=_v_37009_f;V _rhs39067=V(0.0);return j::binary("<",_lhs39066,_rhs39067);})();V _rhs39065=([&]()->V{V _lhs39068=_v_37006_f0;V _rhs39069=V(0.0);return j::binary("<",_lhs39068,_rhs39069);})();return V(j::equal(_lhs39064,_rhs39065,true));})())){(void)((_v_36993_lo=_v_37007_x));
}else {(void)((_v_36994_hi=_v_37007_x));
}
_v_37010_d=([&]()->V{V _callee39072=this->_v_36931_pace.get();return j::call(_callee39072,j::Args{_v_36988_v0,_v_36989_g,_v_36990_w,_v_36991_k,_v_37007_x});})();
_v_37011_next=(j::truth(([&]()->V{V _lhs39073=_v_37010_d;V _rhs39074=V(0.0);return V(!j::equal(_lhs39073,_rhs39074,true));})())?([&]()->V{V _lhs39075=_v_37007_x;V _rhs39076=([&]()->V{V _lhs39077=_v_37009_f;V _rhs39078=_v_37010_d;return V(j::number(_lhs39077)/j::number(_rhs39078));})();return V(j::number(_lhs39075)-j::number(_rhs39076));})():_v_36993_lo);
(void)((_v_37007_x=(j::truth(([&]()->V{V _logical39080=([&]()->V{V _lhs39081=_v_37011_next;V _rhs39082=_v_36993_lo;return j::binary(">",_lhs39081,_rhs39082);})();return j::truth(_logical39080)?([&]()->V{V _lhs39083=_v_37011_next;V _rhs39084=_v_36994_hi;return j::binary("<",_lhs39083,_rhs39084);})():_logical39080;})())?_v_37011_next:([&]()->V{V _lhs39085=([&]()->V{V _lhs39087=_v_36993_lo;V _rhs39088=_v_36994_hi;return j::binary("+",_lhs39087,_rhs39088);})();V _rhs39086=V(2.0);return V(j::number(_lhs39085)/j::number(_rhs39086));})())));

}
}
return _v_36994_hi;

}

return V{};
},8);
this->_v_37015_extend.get()=j::function([=](const j::Args &_args_fn37016,const V &_receiver_fn37016,const V &_self_fn37016) mutable ->V{
V _v_37017_pl;
V _v_37018_log;
V _v_37019_g;
V _v_37020_w;
V _v_37021_a;
V _v_37022_lo;
V _v_37023_hi;
_v_37017_pl=_args_fn37016[0];
_v_37018_log=_args_fn37016[1];
_v_37019_g=_args_fn37016[2];
_v_37020_w=_args_fn37016[3];
_v_37021_a=_args_fn37016[4];
_v_37022_lo=_args_fn37016[5];
_v_37023_hi=_args_fn37016[6];
{
V _v_37024_k;
V _v_37025_keep;
V _v_37026_push;
_v_37024_k=j::get(_v_37017_pl,this->_literals[71]);
_v_37025_keep=j::get(_v_37017_pl,this->_literals[85]);
_v_37026_push=([&]()->V{V _lhs39089=_v_37019_g;V _rhs39090=([&]()->V{V _lhs39091=_v_37024_k;V _rhs39092=_v_37020_w;return V(j::number(_lhs39091)*j::number(_rhs39092));})();return j::binary("+",_lhs39089,_rhs39090);})();
{for(;true;(void)0){
V _v_37027_n;
V _v_37028_s;
V _v_37029_u;
V _v_37030_v;
V _v_37031_left;
V _v_37032_top;
V _v_37033_ends;
V _v_37034_hit;
V _v_37035_wall;
V _v_37040_speed;
_v_37027_n=j::get(_v_37018_log,this->_literals[122]);
_v_37028_s=j::get(j::get(_v_37018_log,this->_literals[128]),([&]()->V{V _lhs39093=_v_37027_n;V _rhs39094=V(1.0);return V(j::number(_lhs39093)-j::number(_rhs39094));})());
_v_37029_u=j::get(j::get(_v_37018_log,this->_literals[169]),([&]()->V{V _lhs39095=_v_37027_n;V _rhs39096=V(1.0);return V(j::number(_lhs39095)-j::number(_rhs39096));})());
_v_37030_v=j::get(j::get(_v_37018_log,this->_literals[170]),([&]()->V{V _lhs39097=_v_37027_n;V _rhs39098=V(1.0);return V(j::number(_lhs39097)-j::number(_rhs39098));})());
_v_37031_left=([&]()->V{V _lhs39099=_v_37021_a;V _rhs39100=_v_37028_s;return V(j::number(_lhs39099)-j::number(_rhs39100));})();
_v_37032_top=([&]()->V{V _callee39101=this->_v_36938_apex.get();return j::call(_callee39101,j::Args{_v_37030_v,_v_37019_g,_v_37020_w,_v_37024_k});})();
_v_37033_ends=(j::truth(([&]()->V{V _logical39102=([&]()->V{V _lhs39103=_v_37032_top;V _rhs39104=V(0.0);return j::binary(">",_lhs39103,_rhs39104);})();return j::truth(_logical39102)?([&]()->V{V _lhs39105=_v_37032_top;V _rhs39106=_v_37031_left;return j::binary("<",_lhs39105,_rhs39106);})():_logical39102;})())?V(2.0):V(1.0));
_v_37034_hit=j::unary("-",V(1.0));
_v_37035_wall=V(0.0);
{V _v_37036_piece;
V _v_37037_from;
_v_37036_piece=V(0.0);
_v_37037_from=V(0.0);
for(;j::truth(([&]()->V{V _logical39107=([&]()->V{V _lhs39108=_v_37036_piece;V _rhs39109=_v_37033_ends;return j::binary("<",_lhs39108,_rhs39109);})();return j::truth(_logical39107)?([&]()->V{V _lhs39110=_v_37034_hit;V _rhs39111=V(0.0);return j::binary("<",_lhs39110,_rhs39111);})():_logical39107;})());(void)(j::increment(_v_37036_piece,1,false))){
V _v_37038_to;
V _v_37039_at;
_v_37038_to=(j::truth(([&]()->V{V _logical39112=([&]()->V{V _lhs39113=_v_37036_piece;V _rhs39114=V(0.0);return V(j::equal(_lhs39113,_rhs39114,true));})();return j::truth(_logical39112)?([&]()->V{V _lhs39115=_v_37033_ends;V _rhs39116=V(2.0);return V(j::equal(_lhs39115,_rhs39116,true));})():_logical39112;})())?_v_37032_top:_v_37031_left);
_v_37039_at=([&]()->V{V _lhs39117=_v_37029_u;V _rhs39118=([&]()->V{V _callee39119=this->_v_36924_travel.get();return j::call(_callee39119,j::Args{_v_37030_v,_v_37019_g,_v_37020_w,_v_37024_k,_v_37038_to});})();return j::binary("+",_lhs39117,_rhs39118);})();
if(j::truth(([&]()->V{V _lhs39120=_v_37039_at;V _rhs39121=_v_37023_hi;return j::binary(">",_lhs39120,_rhs39121);})())){(void)(((_v_37035_wall=_v_37023_hi),(_v_37034_hit=([&]()->V{V _callee39124=this->_v_36985_crossing.get();return j::call(_callee39124,j::Args{_v_37029_u,_v_37030_v,_v_37019_g,_v_37020_w,_v_37024_k,_v_37023_hi,_v_37037_from,_v_37038_to});})())));
}else {if(j::truth(([&]()->V{V _lhs39125=_v_37039_at;V _rhs39126=_v_37022_lo;return j::binary("<",_lhs39125,_rhs39126);})())){(void)(((_v_37035_wall=_v_37022_lo),(_v_37034_hit=([&]()->V{V _callee39129=this->_v_36985_crossing.get();return j::call(_callee39129,j::Args{_v_37029_u,_v_37030_v,_v_37019_g,_v_37020_w,_v_37024_k,_v_37022_lo,_v_37037_from,_v_37038_to});})())));
}
}
(void)((_v_37037_from=_v_37038_to));

}
}
if(j::truth(([&]()->V{V _lhs39131=_v_37034_hit;V _rhs39132=V(0.0);return j::binary("<",_lhs39131,_rhs39132);})())){
(void)(([&]()->V{V _base39134=_v_37018_log;V _key39135=this->_literals[171];V _assign39133=_v_37021_a;return j::put(_base39134,_key39135,_assign39133);})());
return V{};

}

if(j::truth(([&]()->V{V _lhs39136=_v_37027_n;V _rhs39137=j::get(j::get(_v_37018_log,this->_literals[128]),this->_literals[1]);return V(j::equal(_lhs39136,_rhs39137,true));})())){
(void)(([&]()->V{V _base39139=_v_37018_log;V _key39140=this->_literals[172];V _assign39138=V(true);return j::put(_base39139,_key39140,_assign39138);})());
return V{};

}

_v_37040_speed=([&]()->V{V _lhs39141=j::unary("-",([&]()->V{V _callee39143=this->_v_36931_pace.get();return j::call(_callee39143,j::Args{_v_37030_v,_v_37019_g,_v_37020_w,_v_37024_k,_v_37034_hit});})());V _rhs39142=_v_37025_keep;return V(j::number(_lhs39141)*j::number(_rhs39142));})();
(void)(([&]()->V{V _base39145=j::get(_v_37018_log,this->_literals[128]);V _key39146=_v_37027_n;V _assign39144=([&]()->V{V _lhs39147=_v_37028_s;V _rhs39148=_v_37034_hit;return j::binary("+",_lhs39147,_rhs39148);})();return j::put(_base39145,_key39146,_assign39144);})());
(void)(([&]()->V{V _base39150=j::get(_v_37018_log,this->_literals[169]);V _key39151=_v_37027_n;V _assign39149=_v_37035_wall;return j::put(_base39150,_key39151,_assign39149);})());
(void)(([&]()->V{V _base39153=j::get(_v_37018_log,this->_literals[170]);V _key39154=_v_37027_n;V _assign39152=([&]()->V{V _lhs39155=_v_37040_speed;V _rhs39156=_v_37020_w;return V(j::number(_lhs39155)-j::number(_rhs39156));})();return j::put(_base39153,_key39154,_assign39152);})());
(void)(([&]()->V{V _base39158=_v_37018_log;V _key39159=this->_literals[122];V _assign39157=([&]()->V{V _lhs39160=_v_37027_n;V _rhs39161=V(1.0);return j::binary("+",_lhs39160,_rhs39161);})();return j::put(_base39158,_key39159,_assign39157);})());
if(j::truth(([&]()->V{V _logical39162=(j::truth(([&]()->V{V _lhs39163=_v_37035_wall;V _rhs39164=_v_37023_hi;return V(j::equal(_lhs39163,_rhs39164,true));})())?([&]()->V{V _lhs39165=_v_37026_push;V _rhs39166=V(0.0);return j::binary(">",_lhs39165,_rhs39166);})():([&]()->V{V _lhs39167=_v_37026_push;V _rhs39168=V(0.0);return j::binary("<",_lhs39167,_rhs39168);})());return j::truth(_logical39162)?([&]()->V{V _lhs39169=([&]()->V{V _lhs39171=_v_37040_speed;V _rhs39172=_v_37040_speed;return V(j::number(_lhs39171)*j::number(_rhs39172));})();V _rhs39170=([&]()->V{V _lhs39173=V(0.5);V _rhs39174=([&]()->V{V _number39175=_v_37026_push;return V(std::fabs(j::number(_number39175)));})();return V(j::number(_lhs39173)*j::number(_rhs39174));})();return j::binary("<",_lhs39169,_rhs39170);})():_logical39162;})())){
(void)(([&]()->V{V _base39177=_v_37018_log;V _key39178=this->_literals[172];V _assign39176=V(true);return j::put(_base39177,_key39178,_assign39176);})());
return V{};

}

if(j::truth(([&]()->V{V _logical39179=([&]()->V{V _lhs39180=_v_37025_keep;V _rhs39181=V(1.0);return V(j::equal(_lhs39180,_rhs39181,true));})();return j::truth(_logical39179)?([&]()->V{V _lhs39182=_v_37024_k;V _rhs39183=V(0.0);return V(j::equal(_lhs39182,_rhs39183,true));})():_logical39179;})())){
V _v_37041_j;
V _v_37042_round;
_v_37041_j=([&]()->V{V _lhs39184=_v_37027_n;V _rhs39185=V(1.0);return V(j::number(_lhs39184)-j::number(_rhs39185));})();
while(j::truth(([&]()->V{V _logical39186=([&]()->V{V _lhs39187=_v_37041_j;V _rhs39188=V(0.0);return j::binary(">",_lhs39187,_rhs39188);})();return j::truth(_logical39186)?([&]()->V{V _lhs39189=j::get(j::get(_v_37018_log,this->_literals[169]),_v_37041_j);V _rhs39190=_v_37035_wall;return V(!j::equal(_lhs39189,_rhs39190,true));})():_logical39186;})())){(void)(j::increment(_v_37041_j,-1,false));
}
_v_37042_round=([&]()->V{V _lhs39191=j::get(j::get(_v_37018_log,this->_literals[128]),_v_37027_n);V _rhs39192=j::get(j::get(_v_37018_log,this->_literals[128]),_v_37041_j);return V(j::number(_lhs39191)-j::number(_rhs39192));})();
if(j::truth(([&]()->V{V _logical39193=([&]()->V{V _lhs39194=_v_37041_j;V _rhs39195=V(0.0);return j::binary(">",_lhs39194,_rhs39195);})();return j::truth(_logical39193)?([&]()->V{V _lhs39196=_v_37042_round;V _rhs39197=V(1e-9);return j::binary(">",_lhs39196,_rhs39197);})():_logical39193;})())){
(void)(([&]()->V{V _base39199=_v_37018_log;V _key39200=this->_literals[5];V _assign39198=j::get(j::get(_v_37018_log,this->_literals[128]),_v_37041_j);return j::put(_base39199,_key39200,_assign39198);})());
(void)(([&]()->V{V _base39202=_v_37018_log;V _key39203=this->_literals[173];V _assign39201=_v_37042_round;return j::put(_base39202,_key39203,_assign39201);})());
(void)(([&]()->V{V _base39205=_v_37018_log;V _key39206=this->_literals[171];V _assign39204=j::get(j::get(_v_37018_log,this->_literals[128]),_v_37027_n);return j::put(_base39205,_key39206,_assign39204);})());
return V{};

}


}


}
}

}

return V{};
},7);
this->_v_37043_bounced.get()=j::function([=](const j::Args &_args_fn37044,const V &_receiver_fn37044,const V &_self_fn37044) mutable ->V{
V _v_37045_pl;
V _v_37046_log;
V _v_37047_u0;
V _v_37048_v0;
V _v_37049_g;
V _v_37050_w;
V _v_37051_a;
V _v_37052_lo;
V _v_37053_hi;
_v_37045_pl=_args_fn37044[0];
_v_37046_log=_args_fn37044[1];
_v_37047_u0=_args_fn37044[2];
_v_37048_v0=_args_fn37044[3];
_v_37049_g=_args_fn37044[4];
_v_37050_w=_args_fn37044[5];
_v_37051_a=_args_fn37044[6];
_v_37052_lo=_args_fn37044[7];
_v_37053_hi=_args_fn37044[8];
{
V _v_37054_wk;
V _v_37055_k;
V _v_37057_i;
V _v_37058_d;
_v_37054_wk=j::get(_v_37045_pl,this->_literals[127]);
_v_37055_k=j::get(_v_37045_pl,this->_literals[71]);
if(j::truth(([&]()->V{V _logical39207=([&]()->V{V _logical39208=([&]()->V{V _lhs39209=_v_37047_u0;V _rhs39210=_v_37052_lo;return j::binary("<",_lhs39209,_rhs39210);})();return !j::truth(_logical39208)?([&]()->V{V _lhs39211=_v_37047_u0;V _rhs39212=_v_37053_hi;return j::binary(">",_lhs39211,_rhs39212);})():_logical39208;})();return !j::truth(_logical39207)?([&]()->V{V _lhs39213=_v_37053_hi;V _rhs39214=_v_37052_lo;return j::binary("<=",_lhs39213,_rhs39214);})():_logical39207;})())){
V _v_37056_u;
_v_37056_u=([&]()->V{V _lhs39215=_v_37047_u0;V _rhs39216=([&]()->V{V _callee39217=this->_v_36924_travel.get();return j::call(_callee39217,j::Args{_v_37048_v0,_v_37049_g,_v_37050_w,_v_37055_k,_v_37051_a});})();return j::binary("+",_lhs39215,_rhs39216);})();
(void)(([&]()->V{V _base39219=_v_37054_wk;V _key39220=this->_literals[152];V _assign39218=([&]()->V{V _callee39221=this->_v_36946_fold.get();return j::call(_callee39221,j::Args{_v_37056_u,_v_37052_lo,_v_37053_hi,this->_literals[86]});})();return j::put(_base39219,_key39220,_assign39218);})());
(void)(([&]()->V{V _base39223=_v_37054_wk;V _key39224=this->_literals[153];V _assign39222=([&]()->V{V _lhs39225=([&]()->V{V _callee39227=this->_v_36931_pace.get();return j::call(_callee39227,j::Args{_v_37048_v0,_v_37049_g,_v_37050_w,_v_37055_k,_v_37051_a});})();V _rhs39226=([&]()->V{V _callee39228=this->_v_36954_turned.get();return j::call(_callee39228,j::Args{_v_37056_u,_v_37052_lo,_v_37053_hi,this->_literals[86]});})();return V(j::number(_lhs39225)*j::number(_rhs39226));})();return j::put(_base39223,_key39224,_assign39222);})());
return V{};

}

if(j::truth(([&]()->V{V _lhs39229=j::get(_v_37046_log,this->_literals[174]);V _rhs39230=j::get(_v_37054_wk,this->_literals[145]);return V(!j::equal(_lhs39229,_rhs39230,true));})())){
(void)(([&]()->V{V _base39232=_v_37046_log;V _key39233=this->_literals[174];V _assign39231=j::get(_v_37054_wk,this->_literals[145]);return j::put(_base39232,_key39233,_assign39231);})());
(void)(([&]()->V{V _base39235=_v_37046_log;V _key39236=this->_literals[122];V _assign39234=V(1.0);return j::put(_base39235,_key39236,_assign39234);})());
(void)(([&]()->V{V _base39238=j::get(_v_37046_log,this->_literals[128]);V _key39239=V(0.0);V _assign39237=V(0.0);return j::put(_base39238,_key39239,_assign39237);})());
(void)(([&]()->V{V _base39241=j::get(_v_37046_log,this->_literals[169]);V _key39242=V(0.0);V _assign39240=_v_37047_u0;return j::put(_base39241,_key39242,_assign39240);})());
(void)(([&]()->V{V _base39244=j::get(_v_37046_log,this->_literals[170]);V _key39245=V(0.0);V _assign39243=_v_37048_v0;return j::put(_base39244,_key39245,_assign39243);})());
(void)(([&]()->V{V _base39247=_v_37046_log;V _key39248=this->_literals[172];V _assign39246=V(false);return j::put(_base39247,_key39248,_assign39246);})());
(void)(([&]()->V{V _base39250=_v_37046_log;V _key39251=this->_literals[171];V _assign39249=V(0.0);return j::put(_base39250,_key39251,_assign39249);})());
(void)(([&]()->V{V _base39253=_v_37046_log;V _key39254=this->_literals[173];V _assign39252=V(0.0);return j::put(_base39253,_key39254,_assign39252);})());

}

if(j::truth(([&]()->V{V _logical39255=j::get(_v_37046_log,this->_literals[173]);return j::truth(_logical39255)?([&]()->V{V _lhs39256=_v_37051_a;V _rhs39257=([&]()->V{V _lhs39258=j::get(_v_37046_log,this->_literals[5]);V _rhs39259=j::get(_v_37046_log,this->_literals[173]);return j::binary("+",_lhs39258,_rhs39259);})();return j::binary(">",_lhs39256,_rhs39257);})():_logical39255;})())){(void)((_v_37051_a=([&]()->V{V _lhs39261=j::get(_v_37046_log,this->_literals[5]);V _rhs39262=([&]()->V{V _callee39265=this->_v_36724_mod.get();return j::call(_callee39265,j::Args{([&]()->V{V _lhs39263=_v_37051_a;V _rhs39264=j::get(_v_37046_log,this->_literals[5]);return V(j::number(_lhs39263)-j::number(_rhs39264));})(),j::get(_v_37046_log,this->_literals[173])});})();return j::binary("+",_lhs39261,_rhs39262);})()));
}
if(j::truth(([&]()->V{V _logical39266=([&]()->V{V _lhs39267=_v_37051_a;V _rhs39268=j::get(_v_37046_log,this->_literals[171]);return j::binary(">",_lhs39267,_rhs39268);})();return j::truth(_logical39266)?j::unary("!",j::get(_v_37046_log,this->_literals[172])):_logical39266;})())){
(void)(([&]()->V{V _callee39269=this->_v_37015_extend.get();return j::call(_callee39269,j::Args{_v_37045_pl,_v_37046_log,_v_37049_g,_v_37050_w,_v_37051_a,_v_37052_lo,_v_37053_hi});})());
if(j::truth(([&]()->V{V _logical39270=j::get(_v_37046_log,this->_literals[173]);return j::truth(_logical39270)?([&]()->V{V _lhs39271=_v_37051_a;V _rhs39272=([&]()->V{V _lhs39273=j::get(_v_37046_log,this->_literals[5]);V _rhs39274=j::get(_v_37046_log,this->_literals[173]);return j::binary("+",_lhs39273,_rhs39274);})();return j::binary(">",_lhs39271,_rhs39272);})():_logical39270;})())){(void)((_v_37051_a=([&]()->V{V _lhs39276=j::get(_v_37046_log,this->_literals[5]);V _rhs39277=([&]()->V{V _callee39280=this->_v_36724_mod.get();return j::call(_callee39280,j::Args{([&]()->V{V _lhs39278=_v_37051_a;V _rhs39279=j::get(_v_37046_log,this->_literals[5]);return V(j::number(_lhs39278)-j::number(_rhs39279));})(),j::get(_v_37046_log,this->_literals[173])});})();return j::binary("+",_lhs39276,_rhs39277);})()));
}

}

_v_37057_i=([&]()->V{V _lhs39281=j::get(_v_37046_log,this->_literals[122]);V _rhs39282=V(1.0);return V(j::number(_lhs39281)-j::number(_rhs39282));})();
while(j::truth(([&]()->V{V _logical39283=([&]()->V{V _lhs39284=_v_37057_i;V _rhs39285=V(0.0);return j::binary(">",_lhs39284,_rhs39285);})();return j::truth(_logical39283)?([&]()->V{V _lhs39286=j::get(j::get(_v_37046_log,this->_literals[128]),_v_37057_i);V _rhs39287=_v_37051_a;return j::binary(">",_lhs39286,_rhs39287);})():_logical39283;})())){(void)(j::increment(_v_37057_i,-1,false));
}
if(j::truth(([&]()->V{V _logical39288=j::get(_v_37046_log,this->_literals[172]);return j::truth(_logical39288)?([&]()->V{V _lhs39289=_v_37057_i;V _rhs39290=([&]()->V{V _lhs39291=j::get(_v_37046_log,this->_literals[122]);V _rhs39292=V(1.0);return V(j::number(_lhs39291)-j::number(_rhs39292));})();return V(j::equal(_lhs39289,_rhs39290,true));})():_logical39288;})())){
(void)(([&]()->V{V _base39294=_v_37054_wk;V _key39295=this->_literals[152];V _assign39293=([&]()->V{V _receiver39300=j::builtin("Math");V _method39301=this->_literals[158];V _method=j::get(_receiver39300,_method39301);j::Args _params39302=j::Args{([&]()->V{V _lhs39296=_v_37053_hi;V _rhs39297=this->_v_36715_IN.get();return V(j::number(_lhs39296)-j::number(_rhs39297));})(),j::get(j::get(_v_37046_log,this->_literals[169]),_v_37057_i)};return j::call(_method,_params39302,_receiver39300);})();return j::put(_base39294,_key39295,_assign39293);})());
(void)(([&]()->V{V _base39304=_v_37054_wk;V _key39305=this->_literals[153];V _assign39303=V(0.0);return j::put(_base39304,_key39305,_assign39303);})());
return V{};

}

_v_37058_d=([&]()->V{V _lhs39306=_v_37051_a;V _rhs39307=j::get(j::get(_v_37046_log,this->_literals[128]),_v_37057_i);return V(j::number(_lhs39306)-j::number(_rhs39307));})();
(void)(([&]()->V{V _base39309=_v_37054_wk;V _key39310=this->_literals[152];V _assign39308=([&]()->V{V _receiver39323=j::builtin("Math");V _method39324=this->_literals[158];V _method=j::get(_receiver39323,_method39324);j::Args _params39325=j::Args{([&]()->V{V _lhs39311=_v_37053_hi;V _rhs39312=this->_v_36715_IN.get();return V(j::number(_lhs39311)-j::number(_rhs39312));})(),([&]()->V{V _receiver39318=j::builtin("Math");V _method39319=this->_literals[30];V _method=j::get(_receiver39318,_method39319);j::Args _params39320=j::Args{_v_37052_lo,([&]()->V{V _lhs39313=j::get(j::get(_v_37046_log,this->_literals[169]),_v_37057_i);V _rhs39314=([&]()->V{V _callee39315=this->_v_36924_travel.get();return j::call(_callee39315,j::Args{j::get(j::get(_v_37046_log,this->_literals[170]),_v_37057_i),_v_37049_g,_v_37050_w,_v_37055_k,_v_37058_d});})();return j::binary("+",_lhs39313,_rhs39314);})()};return j::call(_method,_params39320,_receiver39318);})()};return j::call(_method,_params39325,_receiver39323);})();return j::put(_base39309,_key39310,_assign39308);})());
(void)(([&]()->V{V _base39327=_v_37054_wk;V _key39328=this->_literals[153];V _assign39326=([&]()->V{V _callee39329=this->_v_36931_pace.get();return j::call(_callee39329,j::Args{j::get(j::get(_v_37046_log,this->_literals[170]),_v_37057_i),_v_37049_g,_v_37050_w,_v_37055_k,_v_37058_d});})();return j::put(_base39327,_key39328,_assign39326);})());

}

return V{};
},9);
this->_v_37059_across.get()=j::function([=](const j::Args &_args_fn37060,const V &_receiver_fn37060,const V &_self_fn37060) mutable ->V{
V _v_37061_pl;
V _v_37062_a;
_v_37061_pl=_args_fn37060[0];
_v_37062_a=_args_fn37060[1];
{
V _v_37063_wk;
_v_37063_wk=j::get(_v_37061_pl,this->_literals[127]);
return ([&]()->V{V _lhs39330=([&]()->V{V _lhs39332=j::get(_v_37063_wk,this->_literals[116]);V _rhs39333=([&]()->V{V _callee39334=this->_v_36924_travel.get();return j::call(_callee39334,j::Args{j::get(_v_37063_wk,this->_literals[111]),V(0.0),j::get(_v_37061_pl,this->_literals[70]),j::get(_v_37061_pl,this->_literals[71]),_v_37062_a});})();return j::binary("+",_lhs39332,_rhs39333);})();V _rhs39331=(j::truth(j::get(_v_37061_pl,this->_literals[95]))?([&]()->V{V _lhs39335=([&]()->V{V _callee39339=this->_v_36965_windAt.get();return j::call(_callee39339,j::Args{_v_37061_pl,([&]()->V{V _lhs39337=j::get(_v_37063_wk,this->_literals[146]);V _rhs39338=_v_37062_a;return j::binary("+",_lhs39337,_rhs39338);})()});})();V _rhs39336=j::get(_v_37063_wk,this->_literals[148]);return V(j::number(_lhs39335)-j::number(_rhs39336));})():V(0.0));return j::binary("+",_lhs39330,_rhs39331);})();

}

return V{};
},2);
this->_v_37064_down.get()=j::function([=](const j::Args &_args_fn37065,const V &_receiver_fn37065,const V &_self_fn37065) mutable ->V{
V _v_37066_pl;
V _v_37067_a;
_v_37066_pl=_args_fn37065[0];
_v_37067_a=_args_fn37065[1];
{
V _v_37068_wk;
_v_37068_wk=j::get(_v_37066_pl,this->_literals[127]);
return ([&]()->V{V _lhs39340=j::get(_v_37068_wk,this->_literals[117]);V _rhs39341=([&]()->V{V _callee39342=this->_v_36924_travel.get();return j::call(_callee39342,j::Args{j::get(_v_37068_wk,this->_literals[112]),j::get(_v_37066_pl,this->_literals[69]),V(0.0),j::get(_v_37066_pl,this->_literals[71]),_v_37067_a});})();return j::binary("+",_lhs39340,_rhs39341);})();

}

return V{};
},2);
this->_v_37069_extent.get()=j::function([=](const j::Args &_args_fn37070,const V &_receiver_fn37070,const V &_self_fn37070) mutable ->V{
V _v_37071_pl;
V _v_37072_a;
V _v_37073_vertical;
_v_37071_pl=_args_fn37070[0];
_v_37072_a=_args_fn37070[1];
_v_37073_vertical=_args_fn37070[2];
{
V _v_37074_wk;
V _v_37075_start;
V _v_37076_end;
V _v_37077_top;
_v_37074_wk=j::get(_v_37071_pl,this->_literals[127]);
_v_37075_start=(j::truth(_v_37073_vertical)?j::get(_v_37074_wk,this->_literals[117]):j::get(_v_37074_wk,this->_literals[116]));
_v_37076_end=(j::truth(_v_37073_vertical)?([&]()->V{V _callee39343=this->_v_37064_down.get();return j::call(_callee39343,j::Args{_v_37071_pl,_v_37072_a});})():([&]()->V{V _callee39344=this->_v_37059_across.get();return j::call(_callee39344,j::Args{_v_37071_pl,_v_37072_a});})());
(void)(([&]()->V{V _base39346=_v_37074_wk;V _key39347=this->_literals[150];V _assign39345=([&]()->V{V _receiver39350=j::builtin("Math");V _method39351=this->_literals[158];V _method=j::get(_receiver39350,_method39351);j::Args _params39352=j::Args{_v_37075_start,_v_37076_end};return j::call(_method,_params39352,_receiver39350);})();return j::put(_base39346,_key39347,_assign39345);})());
(void)(([&]()->V{V _base39354=_v_37074_wk;V _key39355=this->_literals[151];V _assign39353=([&]()->V{V _receiver39358=j::builtin("Math");V _method39359=this->_literals[30];V _method=j::get(_receiver39358,_method39359);j::Args _params39360=j::Args{_v_37075_start,_v_37076_end};return j::call(_method,_params39360,_receiver39358);})();return j::put(_base39354,_key39355,_assign39353);})());
if(j::truth(([&]()->V{V _logical39361=j::unary("!",_v_37073_vertical);return j::truth(_logical39361)?j::get(_v_37071_pl,this->_literals[95]):_logical39361;})())){
(void)(([&]()->V{V _base39363=_v_37074_wk;V _key39364=this->_literals[150];V _assign39362=([&]()->V{V _base39366=_v_37074_wk;V _key39367=this->_literals[151];V _assign39365=_v_37076_end;return j::put(_base39366,_key39367,_assign39365);})();return j::put(_base39363,_key39364,_assign39362);})());
return V{};

}

_v_37077_top=(j::truth(_v_37073_vertical)?([&]()->V{V _callee39368=this->_v_36938_apex.get();return j::call(_callee39368,j::Args{j::get(_v_37074_wk,this->_literals[112]),j::get(_v_37071_pl,this->_literals[69]),V(0.0),j::get(_v_37071_pl,this->_literals[71])});})():([&]()->V{V _callee39369=this->_v_36938_apex.get();return j::call(_callee39369,j::Args{j::get(_v_37074_wk,this->_literals[111]),V(0.0),j::get(_v_37071_pl,this->_literals[70]),j::get(_v_37071_pl,this->_literals[71])});})());
if(j::truth(([&]()->V{V _logical39370=([&]()->V{V _lhs39371=_v_37077_top;V _rhs39372=V(0.0);return j::binary(">",_lhs39371,_rhs39372);})();return j::truth(_logical39370)?([&]()->V{V _lhs39373=_v_37077_top;V _rhs39374=_v_37072_a;return j::binary("<",_lhs39373,_rhs39374);})():_logical39370;})())){
V _v_37078_v;
_v_37078_v=(j::truth(_v_37073_vertical)?([&]()->V{V _callee39375=this->_v_37064_down.get();return j::call(_callee39375,j::Args{_v_37071_pl,_v_37077_top});})():([&]()->V{V _callee39376=this->_v_37059_across.get();return j::call(_callee39376,j::Args{_v_37071_pl,_v_37077_top});})());
(void)(([&]()->V{V _base39378=_v_37074_wk;V _key39379=this->_literals[150];V _assign39377=([&]()->V{V _receiver39382=j::builtin("Math");V _method39383=this->_literals[158];V _method=j::get(_receiver39382,_method39383);j::Args _params39384=j::Args{j::get(_v_37074_wk,this->_literals[150]),_v_37078_v};return j::call(_method,_params39384,_receiver39382);})();return j::put(_base39378,_key39379,_assign39377);})());
(void)(([&]()->V{V _base39386=_v_37074_wk;V _key39387=this->_literals[151];V _assign39385=([&]()->V{V _receiver39390=j::builtin("Math");V _method39391=this->_literals[30];V _method=j::get(_receiver39390,_method39391);j::Args _params39392=j::Args{j::get(_v_37074_wk,this->_literals[151]),_v_37078_v};return j::call(_method,_params39392,_receiver39390);})();return j::put(_base39386,_key39387,_assign39385);})());

}


}

return V{};
},3);
this->_v_37080_walk.get()=j::function([=](const j::Args &_args_fn37081,const V &_receiver_fn37081,const V &_self_fn37081) mutable ->V{
V _v_37082_pl;
V _v_37083_a;
_v_37082_pl=_args_fn37081[0];
_v_37083_a=_args_fn37081[1];
{
V _v_37084_wk;
V _v_37085_p;
V _v_37086_path;
V _v_37087_age;
V _v_37088_k;
V _v_37089_r;
V _v_37090_x;
V _v_37091_y;
V _v_37092_b;
V _v_37093_toward;
_v_37084_wk=j::get(_v_37082_pl,this->_literals[127]);
_v_37085_p=j::get(_v_37082_pl,this->_literals[107]);
_v_37086_path=j::get(_v_37082_pl,this->_literals[67]);
_v_37087_age=j::get(_v_37085_p,this->_literals[109]);
_v_37088_k=j::get(_v_37085_p,this->_literals[110]);
(void)(([&]()->V{V _base39394=_v_37085_p;V _key39395=this->_literals[109];V _assign39393=_v_37083_a;return j::put(_base39394,_key39395,_assign39393);})());
(void)(([&]()->V{V _base39397=_v_37085_p;V _key39398=this->_literals[110];V _assign39396=([&]()->V{V _lhs39399=_v_37083_a;V _rhs39400=j::get(_v_37085_p,this->_literals[66]);return V(j::number(_lhs39399)/j::number(_rhs39400));})();return j::put(_base39397,_key39398,_assign39396);})());
_v_37089_r=([&]()->V{V _callee39401=_v_37086_path;return j::call(_callee39401,j::Args{_v_37085_p});})();
_v_37090_x=j::unary("+",j::get(_v_37089_r,V(0.0)));
_v_37091_y=([&]()->V{V _lhs39402=j::unary("+",j::get(_v_37089_r,V(1.0)));V _rhs39403=j::get(_v_37084_wk,this->_literals[129]);return V(j::number(_lhs39402)*j::number(_rhs39403));})();
_v_37092_b=(j::truth(([&]()->V{V _lhs39404=_v_37083_a;V _rhs39405=this->_v_37079_MOMENT.get();return j::binary(">=",_lhs39404,_rhs39405);})())?([&]()->V{V _lhs39406=_v_37083_a;V _rhs39407=this->_v_37079_MOMENT.get();return V(j::number(_lhs39406)-j::number(_rhs39407));})():([&]()->V{V _lhs39408=_v_37083_a;V _rhs39409=this->_v_37079_MOMENT.get();return j::binary("+",_lhs39408,_rhs39409);})());
(void)(([&]()->V{V _base39411=_v_37085_p;V _key39412=this->_literals[109];V _assign39410=_v_37092_b;return j::put(_base39411,_key39412,_assign39410);})());
(void)(([&]()->V{V _base39414=_v_37085_p;V _key39415=this->_literals[110];V _assign39413=([&]()->V{V _lhs39416=_v_37092_b;V _rhs39417=j::get(_v_37085_p,this->_literals[66]);return V(j::number(_lhs39416)/j::number(_rhs39417));})();return j::put(_base39414,_key39415,_assign39413);})());
(void)((_v_37089_r=([&]()->V{V _callee39419=_v_37086_path;return j::call(_callee39419,j::Args{_v_37085_p});})()));
_v_37093_toward=(j::truth(([&]()->V{V _lhs39420=_v_37083_a;V _rhs39421=this->_v_37079_MOMENT.get();return j::binary(">=",_lhs39420,_rhs39421);})())?this->_v_37079_MOMENT.get():j::unary("-",this->_v_37079_MOMENT.get()));
(void)(([&]()->V{V _base39423=_v_37084_wk;V _key39424=this->_literals[154];V _assign39422=([&]()->V{V _lhs39425=([&]()->V{V _lhs39427=_v_37090_x;V _rhs39428=j::unary("+",j::get(_v_37089_r,V(0.0)));return V(j::number(_lhs39427)-j::number(_rhs39428));})();V _rhs39426=_v_37093_toward;return V(j::number(_lhs39425)/j::number(_rhs39426));})();return j::put(_base39423,_key39424,_assign39422);})());
(void)(([&]()->V{V _base39430=_v_37084_wk;V _key39431=this->_literals[155];V _assign39429=([&]()->V{V _lhs39432=([&]()->V{V _lhs39434=_v_37091_y;V _rhs39435=([&]()->V{V _lhs39436=j::unary("+",j::get(_v_37089_r,V(1.0)));V _rhs39437=j::get(_v_37084_wk,this->_literals[129]);return V(j::number(_lhs39436)*j::number(_rhs39437));})();return V(j::number(_lhs39434)-j::number(_rhs39435));})();V _rhs39433=_v_37093_toward;return V(j::number(_lhs39432)/j::number(_rhs39433));})();return j::put(_base39430,_key39431,_assign39429);})());
(void)(([&]()->V{V _base39439=_v_37084_wk;V _key39440=this->_literals[152];V _assign39438=_v_37090_x;return j::put(_base39439,_key39440,_assign39438);})());
(void)(([&]()->V{V _base39442=_v_37084_wk;V _key39443=this->_literals[153];V _assign39441=_v_37091_y;return j::put(_base39442,_key39443,_assign39441);})());
(void)(([&]()->V{V _base39445=_v_37085_p;V _key39446=this->_literals[109];V _assign39444=_v_37087_age;return j::put(_base39445,_key39446,_assign39444);})());
(void)(([&]()->V{V _base39448=_v_37085_p;V _key39449=this->_literals[110];V _assign39447=_v_37088_k;return j::put(_base39448,_key39449,_assign39447);})());

}

return V{};
},2);
this->_v_37094_place.get()=j::function([=](const j::Args &_args_fn37095,const V &_receiver_fn37095,const V &_self_fn37095) mutable ->V{
V _v_37096_pl;
V _v_37097_a;
_v_37096_pl=_args_fn37095[0];
_v_37097_a=_args_fn37095[1];
{
V _v_37098_wk;
V _v_37099_p;
V _v_37104_turn;
V _v_37105_sway;
V _v_37106_swaying;
_v_37098_wk=j::get(_v_37096_pl,this->_literals[127]);
_v_37099_p=j::get(_v_37096_pl,this->_literals[107]);
if(j::truth(j::get(_v_37096_pl,this->_literals[67]))){
V _v_37100_ux;
V _v_37101_uy;
V _v_37102_vx;
V _v_37103_vy;
(void)(([&]()->V{V _callee39450=this->_v_37080_walk.get();return j::call(_callee39450,j::Args{_v_37096_pl,_v_37097_a});})());
_v_37100_ux=j::get(_v_37098_wk,this->_literals[152]);
_v_37101_uy=j::get(_v_37098_wk,this->_literals[153]);
_v_37102_vx=j::get(_v_37098_wk,this->_literals[154]);
_v_37103_vy=j::get(_v_37098_wk,this->_literals[155]);
(void)(([&]()->V{V _base39452=_v_37099_p;V _key39453=this->_literals[48];V _assign39451=([&]()->V{V _callee39454=this->_v_36946_fold.get();return j::call(_callee39454,j::Args{_v_37100_ux,j::get(_v_37098_wk,this->_literals[130]),j::get(_v_37098_wk,this->_literals[131]),j::get(_v_37096_pl,this->_literals[98])});})();return j::put(_base39452,_key39453,_assign39451);})());
(void)(([&]()->V{V _base39456=_v_37099_p;V _key39457=this->_literals[111];V _assign39455=([&]()->V{V _lhs39458=_v_37102_vx;V _rhs39459=([&]()->V{V _callee39460=this->_v_36954_turned.get();return j::call(_callee39460,j::Args{_v_37100_ux,j::get(_v_37098_wk,this->_literals[130]),j::get(_v_37098_wk,this->_literals[131]),j::get(_v_37096_pl,this->_literals[98])});})();return V(j::number(_lhs39458)*j::number(_rhs39459));})();return j::put(_base39456,_key39457,_assign39455);})());
(void)(([&]()->V{V _base39462=_v_37099_p;V _key39463=this->_literals[49];V _assign39461=([&]()->V{V _lhs39464=(j::truth(([&]()->V{V _logical39466=([&]()->V{V _lhs39467=j::get(_v_37096_pl,this->_literals[99]);V _rhs39468=this->_literals[86];return V(j::equal(_lhs39467,_rhs39468,true));})();return !j::truth(_logical39466)?([&]()->V{V _lhs39469=j::get(_v_37096_pl,this->_literals[99]);V _rhs39470=this->_literals[164];return V(j::equal(_lhs39469,_rhs39470,true));})():_logical39466;})())?([&]()->V{V _callee39471=this->_v_36946_fold.get();return j::call(_callee39471,j::Args{_v_37101_uy,j::get(_v_37098_wk,this->_literals[132]),j::get(_v_37098_wk,this->_literals[133]),j::get(_v_37096_pl,this->_literals[99])});})():_v_37101_uy);V _rhs39465=j::get(_v_37098_wk,this->_literals[129]);return V(j::number(_lhs39464)/j::number(_rhs39465));})();return j::put(_base39462,_key39463,_assign39461);})());
(void)(([&]()->V{V _base39473=_v_37099_p;V _key39474=this->_literals[112];V _assign39472=([&]()->V{V _lhs39475=_v_37103_vy;V _rhs39476=([&]()->V{V _callee39477=this->_v_36954_turned.get();return j::call(_callee39477,j::Args{_v_37101_uy,j::get(_v_37098_wk,this->_literals[132]),j::get(_v_37098_wk,this->_literals[133]),j::get(_v_37096_pl,this->_literals[99])});})();return V(j::number(_lhs39475)*j::number(_rhs39476));})();return j::put(_base39473,_key39474,_assign39472);})());
return V{};

}

_v_37104_turn=([&]()->V{V _lhs39478=([&]()->V{V _lhs39480=([&]()->V{V _lhs39482=this->_v_36697_TAU.get();V _rhs39483=j::get(_v_37096_pl,this->_literals[96]);return V(j::number(_lhs39482)*j::number(_rhs39483));})();V _rhs39481=_v_37097_a;return V(j::number(_lhs39480)*j::number(_rhs39481));})();V _rhs39479=j::get(_v_37098_wk,this->_literals[147]);return j::binary("+",_lhs39478,_rhs39479);})();
_v_37105_sway=([&]()->V{V _lhs39484=j::get(_v_37096_pl,this->_literals[72]);V _rhs39485=([&]()->V{V _number39486=_v_37104_turn;return V(std::sin(j::number(_number39486)));})();return V(j::number(_lhs39484)*j::number(_rhs39485));})();
_v_37106_swaying=([&]()->V{V _lhs39487=([&]()->V{V _lhs39489=([&]()->V{V _lhs39491=j::get(_v_37096_pl,this->_literals[72]);V _rhs39492=this->_v_36697_TAU.get();return V(j::number(_lhs39491)*j::number(_rhs39492));})();V _rhs39490=j::get(_v_37096_pl,this->_literals[96]);return V(j::number(_lhs39489)*j::number(_rhs39490));})();V _rhs39488=([&]()->V{V _number39493=_v_37104_turn;return V(std::cos(j::number(_number39493)));})();return V(j::number(_lhs39487)*j::number(_rhs39488));})();
if(j::truth(j::get(_v_37096_pl,this->_literals[100]))){
V _v_37107_ux;
(void)(([&]()->V{V _callee39494=this->_v_37043_bounced.get();return j::call(_callee39494,j::Args{_v_37096_pl,j::get(_v_37096_pl,this->_literals[100]),j::get(_v_37098_wk,this->_literals[116]),j::get(_v_37098_wk,this->_literals[111]),V(0.0),j::get(_v_37096_pl,this->_literals[70]),_v_37097_a,j::get(_v_37098_wk,this->_literals[130]),j::get(_v_37098_wk,this->_literals[131])});})());
_v_37107_ux=([&]()->V{V _lhs39495=j::get(_v_37098_wk,this->_literals[152]);V _rhs39496=_v_37105_sway;return j::binary("+",_lhs39495,_rhs39496);})();
(void)(([&]()->V{V _base39498=_v_37099_p;V _key39499=this->_literals[48];V _assign39497=([&]()->V{V _callee39500=this->_v_36946_fold.get();return j::call(_callee39500,j::Args{_v_37107_ux,j::get(_v_37098_wk,this->_literals[130]),j::get(_v_37098_wk,this->_literals[131]),this->_literals[86]});})();return j::put(_base39498,_key39499,_assign39497);})());
(void)(([&]()->V{V _base39502=_v_37099_p;V _key39503=this->_literals[111];V _assign39501=([&]()->V{V _lhs39504=([&]()->V{V _lhs39506=j::get(_v_37098_wk,this->_literals[153]);V _rhs39507=_v_37106_swaying;return j::binary("+",_lhs39506,_rhs39507);})();V _rhs39505=([&]()->V{V _callee39508=this->_v_36954_turned.get();return j::call(_callee39508,j::Args{_v_37107_ux,j::get(_v_37098_wk,this->_literals[130]),j::get(_v_37098_wk,this->_literals[131]),this->_literals[86]});})();return V(j::number(_lhs39504)*j::number(_rhs39505));})();return j::put(_base39502,_key39503,_assign39501);})());

}
else {
V _v_37108_ux;
V _v_37109_vx;
_v_37108_ux=([&]()->V{V _lhs39509=([&]()->V{V _callee39511=this->_v_37059_across.get();return j::call(_callee39511,j::Args{_v_37096_pl,_v_37097_a});})();V _rhs39510=_v_37105_sway;return j::binary("+",_lhs39509,_rhs39510);})();
_v_37109_vx=([&]()->V{V _lhs39512=([&]()->V{V _lhs39514=([&]()->V{V _callee39516=this->_v_36931_pace.get();return j::call(_callee39516,j::Args{j::get(_v_37098_wk,this->_literals[111]),V(0.0),j::get(_v_37096_pl,this->_literals[70]),j::get(_v_37096_pl,this->_literals[71]),_v_37097_a});})();V _rhs39515=(j::truth(j::get(_v_37096_pl,this->_literals[95]))?([&]()->V{V _logical39517=j::unary("+",([&]()->V{V _receiver39520=_v_37096_pl;V _method39521=this->_literals[95];V _method=j::get(_receiver39520,_method39521);j::Args _params39522=j::Args{([&]()->V{V _lhs39518=j::get(_v_37098_wk,this->_literals[146]);V _rhs39519=_v_37097_a;return j::binary("+",_lhs39518,_rhs39519);})()};return j::call(_method,_params39522,_receiver39520);})());return !j::truth(_logical39517)?V(0.0):_logical39517;})():V(0.0));return j::binary("+",_lhs39514,_rhs39515);})();V _rhs39513=_v_37106_swaying;return j::binary("+",_lhs39512,_rhs39513);})();
(void)(([&]()->V{V _base39524=_v_37099_p;V _key39525=this->_literals[48];V _assign39523=([&]()->V{V _callee39526=this->_v_36946_fold.get();return j::call(_callee39526,j::Args{_v_37108_ux,j::get(_v_37098_wk,this->_literals[130]),j::get(_v_37098_wk,this->_literals[131]),j::get(_v_37096_pl,this->_literals[98])});})();return j::put(_base39524,_key39525,_assign39523);})());
(void)(([&]()->V{V _base39528=_v_37099_p;V _key39529=this->_literals[111];V _assign39527=([&]()->V{V _lhs39530=_v_37109_vx;V _rhs39531=([&]()->V{V _callee39532=this->_v_36954_turned.get();return j::call(_callee39532,j::Args{_v_37108_ux,j::get(_v_37098_wk,this->_literals[130]),j::get(_v_37098_wk,this->_literals[131]),j::get(_v_37096_pl,this->_literals[98])});})();return V(j::number(_lhs39530)*j::number(_rhs39531));})();return j::put(_base39528,_key39529,_assign39527);})());

}

if(j::truth(j::get(_v_37096_pl,this->_literals[101]))){
(void)(([&]()->V{V _callee39533=this->_v_37043_bounced.get();return j::call(_callee39533,j::Args{_v_37096_pl,j::get(_v_37096_pl,this->_literals[101]),j::get(_v_37098_wk,this->_literals[117]),j::get(_v_37098_wk,this->_literals[112]),j::get(_v_37096_pl,this->_literals[69]),V(0.0),_v_37097_a,j::get(_v_37098_wk,this->_literals[132]),j::get(_v_37098_wk,this->_literals[133])});})());
(void)(([&]()->V{V _base39535=_v_37099_p;V _key39536=this->_literals[49];V _assign39534=([&]()->V{V _lhs39537=j::get(_v_37098_wk,this->_literals[152]);V _rhs39538=j::get(_v_37098_wk,this->_literals[129]);return V(j::number(_lhs39537)/j::number(_rhs39538));})();return j::put(_base39535,_key39536,_assign39534);})());
(void)(([&]()->V{V _base39540=_v_37099_p;V _key39541=this->_literals[112];V _assign39539=j::get(_v_37098_wk,this->_literals[153]);return j::put(_base39540,_key39541,_assign39539);})());

}
else {
V _v_37110_uy;
_v_37110_uy=([&]()->V{V _callee39542=this->_v_37064_down.get();return j::call(_callee39542,j::Args{_v_37096_pl,_v_37097_a});})();
(void)(([&]()->V{V _base39544=_v_37099_p;V _key39545=this->_literals[49];V _assign39543=([&]()->V{V _lhs39546=(j::truth(([&]()->V{V _logical39548=([&]()->V{V _lhs39549=j::get(_v_37096_pl,this->_literals[99]);V _rhs39550=this->_literals[86];return V(j::equal(_lhs39549,_rhs39550,true));})();return !j::truth(_logical39548)?([&]()->V{V _lhs39551=j::get(_v_37096_pl,this->_literals[99]);V _rhs39552=this->_literals[164];return V(j::equal(_lhs39551,_rhs39552,true));})():_logical39548;})())?([&]()->V{V _callee39553=this->_v_36946_fold.get();return j::call(_callee39553,j::Args{_v_37110_uy,j::get(_v_37098_wk,this->_literals[132]),j::get(_v_37098_wk,this->_literals[133]),j::get(_v_37096_pl,this->_literals[99])});})():_v_37110_uy);V _rhs39547=j::get(_v_37098_wk,this->_literals[129]);return V(j::number(_lhs39546)/j::number(_rhs39547));})();return j::put(_base39544,_key39545,_assign39543);})());
(void)(([&]()->V{V _base39555=_v_37099_p;V _key39556=this->_literals[112];V _assign39554=([&]()->V{V _lhs39557=([&]()->V{V _callee39559=this->_v_36931_pace.get();return j::call(_callee39559,j::Args{j::get(_v_37098_wk,this->_literals[112]),j::get(_v_37096_pl,this->_literals[69]),V(0.0),j::get(_v_37096_pl,this->_literals[71]),_v_37097_a});})();V _rhs39558=([&]()->V{V _callee39560=this->_v_36954_turned.get();return j::call(_callee39560,j::Args{_v_37110_uy,j::get(_v_37098_wk,this->_literals[132]),j::get(_v_37098_wk,this->_literals[133]),j::get(_v_37096_pl,this->_literals[99])});})();return V(j::number(_lhs39557)*j::number(_rhs39558));})();return j::put(_base39555,_key39556,_assign39554);})());

}


}

return V{};
},2);
this->_v_37111_cellAt.get()=j::function([=](const j::Args &_args_fn37112,const V &_receiver_fn37112,const V &_self_fn37112) mutable ->V{
V _v_37113_pl;
V _v_37114_x;
V _v_37115_y;
_v_37113_pl=_args_fn37112[0];
_v_37114_x=_args_fn37112[1];
_v_37115_y=_args_fn37112[2];
{
V _v_37116_wk;
V _v_37117_c;
V _v_37118_r;
_v_37116_wk=j::get(_v_37113_pl,this->_literals[127]);
_v_37117_c=([&]()->V{V _number39561=_v_37114_x;return V(std::floor(j::number(_number39561)));})();
_v_37118_r=([&]()->V{V _number39562=_v_37115_y;return V(std::floor(j::number(_number39562)));})();
return (j::truth(([&]()->V{V _logical39563=([&]()->V{V _logical39564=([&]()->V{V _logical39565=([&]()->V{V _lhs39566=_v_37117_c;V _rhs39567=j::get(_v_37116_wk,this->_literals[134]);return j::binary(">=",_lhs39566,_rhs39567);})();return j::truth(_logical39565)?([&]()->V{V _lhs39568=_v_37117_c;V _rhs39569=j::get(_v_37116_wk,this->_literals[135]);return j::binary("<",_lhs39568,_rhs39569);})():_logical39565;})();return j::truth(_logical39564)?([&]()->V{V _lhs39570=_v_37118_r;V _rhs39571=j::get(_v_37116_wk,this->_literals[136]);return j::binary(">=",_lhs39570,_rhs39571);})():_logical39564;})();return j::truth(_logical39563)?([&]()->V{V _lhs39572=_v_37118_r;V _rhs39573=j::get(_v_37116_wk,this->_literals[137]);return j::binary("<",_lhs39572,_rhs39573);})():_logical39563;})())?([&]()->V{V _lhs39574=([&]()->V{V _lhs39576=_v_37118_r;V _rhs39577=j::get(j::get(_v_37116_wk,this->_literals[128]),this->_literals[15]);return V(j::number(_lhs39576)*j::number(_rhs39577));})();V _rhs39575=_v_37117_c;return j::binary("+",_lhs39574,_rhs39575);})():j::unary("-",V(1.0)));

}

return V{};
},3);
this->_v_37119_birthplace.get()=j::function([=](const j::Args &_args_fn37120,const V &_receiver_fn37120,const V &_self_fn37120) mutable ->V{
V _v_37121_pl;
V _v_37122_u;
V _v_37123_v;
V _v_37124_born;
V _v_37125_box;
_v_37121_pl=_args_fn37120[0];
_v_37122_u=_args_fn37120[1];
_v_37123_v=_args_fn37120[2];
_v_37124_born=_args_fn37120[3];
_v_37125_box=_args_fn37120[4];
{
V _v_37126_e;
V _v_37127_wk;
V _v_37128_out;
_v_37126_e=j::get(_v_37121_pl,this->_literals[56]);
_v_37127_wk=j::get(_v_37121_pl,this->_literals[127]);
_v_37128_out=j::get(_v_37127_wk,this->_literals[54]);
if(j::truth(([&]()->V{V _lhs39578=this->_literals[44];V _rhs39579=_v_37126_e;return j::binary("in",_lhs39578,_rhs39579);})())){
V _v_37129_L;
V _v_37130_i;
_v_37129_L=j::get(_v_37126_e,this->_literals[44]);
_v_37130_i=([&]()->V{V _receiver39589=j::builtin("Math");V _method39590=this->_literals[158];V _method=j::get(_receiver39589,_method39590);j::Args _params39591=j::Args{([&]()->V{V _lhs39580=j::get(j::get(_v_37129_L,this->_literals[36]),this->_literals[1]);V _rhs39581=V(1.0);return V(j::number(_lhs39580)-j::number(_rhs39581));})(),([&]()->V{V _number39584=([&]()->V{V _lhs39585=_v_37122_u;V _rhs39586=j::get(j::get(_v_37129_L,this->_literals[36]),this->_literals[1]);return V(j::number(_lhs39585)*j::number(_rhs39586));})();return V(std::floor(j::number(_number39584)));})()};return j::call(_method,_params39591,_receiver39589);})();
(void)(([&]()->V{V _base39593=_v_37127_wk;V _key39594=this->_literals[149];V _assign39592=_v_37130_i;return j::put(_base39593,_key39594,_assign39592);})());
(void)((([&]()->V{V _base39596=_v_37128_out;V _key39597=V(0.0);V _assign39595=([&]()->V{V _lhs39598=([&]()->V{V _lhs39600=j::get(_v_37127_wk,this->_literals[138]);V _rhs39601=j::get(j::get(_v_37129_L,this->_literals[34]),_v_37130_i);return j::binary("+",_lhs39600,_rhs39601);})();V _rhs39599=V(0.5);return j::binary("+",_lhs39598,_rhs39599);})();return j::put(_base39596,_key39597,_assign39595);})(),([&]()->V{V _base39603=_v_37128_out;V _key39604=V(1.0);V _assign39602=([&]()->V{V _lhs39605=([&]()->V{V _lhs39607=j::get(_v_37127_wk,this->_literals[139]);V _rhs39608=j::get(j::get(_v_37129_L,this->_literals[35]),_v_37130_i);return j::binary("+",_lhs39607,_rhs39608);})();V _rhs39606=V(0.5);return j::binary("+",_lhs39605,_rhs39606);})();return j::put(_base39603,_key39604,_assign39602);})()));
return V{};

}

if(j::truth(([&]()->V{V _lhs39609=this->_literals[41];V _rhs39610=_v_37126_e;return j::binary("in",_lhs39609,_rhs39610);})())){
V _v_37133_p;
if(j::truth(([&]()->V{V _lhs39611=j::unary("typeof",j::get(_v_37126_e,this->_literals[41]));V _rhs39612=this->_literals[4];return V(j::equal(_lhs39611,_rhs39612,true));})())){
V _v_37131_a;
V _v_37132_b;
V _pattern39613=j::get(this->_v_36720_SPOT.get(),j::get(_v_37126_e,this->_literals[41]));
_v_37131_a=j::get(_pattern39613,V(0));
_v_37132_b=j::get(_pattern39613,V(1));
(void)((([&]()->V{V _base39615=_v_37128_out;V _key39616=V(0.0);V _assign39614=([&]()->V{V _receiver39627=j::builtin("Math");V _method39628=this->_literals[158];V _method=j::get(_receiver39627,_method39628);j::Args _params39629=j::Args{([&]()->V{V _lhs39617=j::get(_v_37125_box,this->_literals[116]);V _rhs39618=([&]()->V{V _lhs39619=([&]()->V{V _lhs39621=j::get(_v_37125_box,this->_literals[159]);V _rhs39622=j::get(_v_37125_box,this->_literals[116]);return V(j::number(_lhs39621)-j::number(_rhs39622));})();V _rhs39620=_v_37131_a;return V(j::number(_lhs39619)*j::number(_rhs39620));})();return j::binary("+",_lhs39617,_rhs39618);})(),([&]()->V{V _lhs39623=j::get(_v_37125_box,this->_literals[159]);V _rhs39624=this->_v_36715_IN.get();return V(j::number(_lhs39623)-j::number(_rhs39624));})()};return j::call(_method,_params39629,_receiver39627);})();return j::put(_base39615,_key39616,_assign39614);})(),([&]()->V{V _base39631=_v_37128_out;V _key39632=V(1.0);V _assign39630=([&]()->V{V _receiver39643=j::builtin("Math");V _method39644=this->_literals[158];V _method=j::get(_receiver39643,_method39644);j::Args _params39645=j::Args{([&]()->V{V _lhs39633=j::get(_v_37125_box,this->_literals[117]);V _rhs39634=([&]()->V{V _lhs39635=([&]()->V{V _lhs39637=j::get(_v_37125_box,this->_literals[157]);V _rhs39638=j::get(_v_37125_box,this->_literals[117]);return V(j::number(_lhs39637)-j::number(_rhs39638));})();V _rhs39636=_v_37132_b;return V(j::number(_lhs39635)*j::number(_rhs39636));})();return j::binary("+",_lhs39633,_rhs39634);})(),([&]()->V{V _lhs39639=j::get(_v_37125_box,this->_literals[157]);V _rhs39640=this->_v_36715_IN.get();return V(j::number(_lhs39639)-j::number(_rhs39640));})()};return j::call(_method,_params39645,_receiver39643);})();return j::put(_base39631,_key39632,_assign39630);})()));
return V{};

}

_v_37133_p=(j::truth(([&]()->V{V _lhs39646=j::unary("typeof",j::get(_v_37126_e,this->_literals[41]));V _rhs39647=this->_literals[46];return V(j::equal(_lhs39646,_rhs39647,true));})())?([&]()->V{V _receiver39648=_v_37126_e;V _method39649=this->_literals[41];V _method=j::get(_receiver39648,_method39649);j::Args _params39650=j::Args{_v_37124_born};return j::call(_method,_params39650,_receiver39648);})():j::get(_v_37126_e,this->_literals[41]));
(void)((([&]()->V{V _base39652=_v_37128_out;V _key39653=V(0.0);V _assign39651=j::unary("+",j::get(_v_37133_p,V(0.0)));return j::put(_base39652,_key39653,_assign39651);})(),([&]()->V{V _base39655=_v_37128_out;V _key39656=V(1.0);V _assign39654=j::unary("+",j::get(_v_37133_p,V(1.0)));return j::put(_base39655,_key39656,_assign39654);})()));

}
else {if(j::truth(([&]()->V{V _lhs39657=this->_literals[47];V _rhs39658=_v_37126_e;return j::binary("in",_lhs39657,_rhs39658);})())){
V _v_37134_a;
V _v_37135_b;
V _pattern39659=j::get(_v_37126_e,this->_literals[47]);
_v_37134_a=j::get(_pattern39659,V(0));
_v_37135_b=j::get(_pattern39659,V(1));
(void)((([&]()->V{V _base39661=_v_37128_out;V _key39662=V(0.0);V _assign39660=([&]()->V{V _lhs39663=j::get(_v_37134_a,V(0.0));V _rhs39664=([&]()->V{V _lhs39665=([&]()->V{V _lhs39667=j::get(_v_37135_b,V(0.0));V _rhs39668=j::get(_v_37134_a,V(0.0));return V(j::number(_lhs39667)-j::number(_rhs39668));})();V _rhs39666=_v_37122_u;return V(j::number(_lhs39665)*j::number(_rhs39666));})();return j::binary("+",_lhs39663,_rhs39664);})();return j::put(_base39661,_key39662,_assign39660);})(),([&]()->V{V _base39670=_v_37128_out;V _key39671=V(1.0);V _assign39669=([&]()->V{V _lhs39672=j::get(_v_37134_a,V(1.0));V _rhs39673=([&]()->V{V _lhs39674=([&]()->V{V _lhs39676=j::get(_v_37135_b,V(1.0));V _rhs39677=j::get(_v_37134_a,V(1.0));return V(j::number(_lhs39676)-j::number(_rhs39677));})();V _rhs39675=_v_37122_u;return V(j::number(_lhs39674)*j::number(_rhs39675));})();return j::binary("+",_lhs39672,_rhs39673);})();return j::put(_base39670,_key39671,_assign39669);})()));

}
else {if(j::truth(([&]()->V{V _lhs39678=this->_literals[40];V _rhs39679=_v_37126_e;return j::binary("in",_lhs39678,_rhs39679);})())){
V _v_37136_r;
_v_37136_r=j::get(_v_37126_e,this->_literals[40]);
if(j::truth(_v_37136_r)){(void)((([&]()->V{V _base39681=_v_37128_out;V _key39682=V(0.0);V _assign39680=([&]()->V{V _lhs39683=j::get(_v_37136_r,this->_literals[48]);V _rhs39684=([&]()->V{V _lhs39685=j::get(_v_37136_r,this->_literals[15]);V _rhs39686=_v_37122_u;return V(j::number(_lhs39685)*j::number(_rhs39686));})();return j::binary("+",_lhs39683,_rhs39684);})();return j::put(_base39681,_key39682,_assign39680);})(),([&]()->V{V _base39688=_v_37128_out;V _key39689=V(1.0);V _assign39687=([&]()->V{V _lhs39690=j::get(_v_37136_r,this->_literals[49]);V _rhs39691=([&]()->V{V _lhs39692=j::get(_v_37136_r,this->_literals[50]);V _rhs39693=_v_37123_v;return V(j::number(_lhs39692)*j::number(_rhs39693));})();return j::binary("+",_lhs39690,_rhs39691);})();return j::put(_base39688,_key39689,_assign39687);})()));
}else {(void)((([&]()->V{V _base39695=_v_37128_out;V _key39696=V(0.0);V _assign39694=([&]()->V{V _lhs39697=j::get(_v_37125_box,this->_literals[116]);V _rhs39698=([&]()->V{V _lhs39699=([&]()->V{V _lhs39701=j::get(_v_37125_box,this->_literals[159]);V _rhs39702=j::get(_v_37125_box,this->_literals[116]);return V(j::number(_lhs39701)-j::number(_rhs39702));})();V _rhs39700=_v_37122_u;return V(j::number(_lhs39699)*j::number(_rhs39700));})();return j::binary("+",_lhs39697,_rhs39698);})();return j::put(_base39695,_key39696,_assign39694);})(),([&]()->V{V _base39704=_v_37128_out;V _key39705=V(1.0);V _assign39703=([&]()->V{V _lhs39706=j::get(_v_37125_box,this->_literals[117]);V _rhs39707=([&]()->V{V _lhs39708=([&]()->V{V _lhs39710=j::get(_v_37125_box,this->_literals[157]);V _rhs39711=j::get(_v_37125_box,this->_literals[117]);return V(j::number(_lhs39710)-j::number(_rhs39711));})();V _rhs39709=_v_37123_v;return V(j::number(_lhs39708)*j::number(_rhs39709));})();return j::binary("+",_lhs39706,_rhs39707);})();return j::put(_base39704,_key39705,_assign39703);})()));
}

}
else {if(j::truth(([&]()->V{V _lhs39712=this->_literals[38];V _rhs39713=_v_37126_e;return j::binary("in",_lhs39712,_rhs39713);})())){
V _v_37137_x;
V _v_37138_y;
_v_37137_x=([&]()->V{V _lhs39714=j::get(_v_37125_box,this->_literals[116]);V _rhs39715=([&]()->V{V _lhs39716=([&]()->V{V _lhs39718=j::get(_v_37125_box,this->_literals[159]);V _rhs39719=j::get(_v_37125_box,this->_literals[116]);return V(j::number(_lhs39718)-j::number(_rhs39719));})();V _rhs39717=_v_37122_u;return V(j::number(_lhs39716)*j::number(_rhs39717));})();return j::binary("+",_lhs39714,_rhs39715);})();
_v_37138_y=([&]()->V{V _lhs39720=j::get(_v_37125_box,this->_literals[117]);V _rhs39721=([&]()->V{V _lhs39722=([&]()->V{V _lhs39724=j::get(_v_37125_box,this->_literals[157]);V _rhs39725=j::get(_v_37125_box,this->_literals[117]);return V(j::number(_lhs39724)-j::number(_rhs39725));})();V _rhs39723=_v_37122_u;return V(j::number(_lhs39722)*j::number(_rhs39723));})();return j::binary("+",_lhs39720,_rhs39721);})();
if(j::truth(([&]()->V{V _lhs39726=j::get(_v_37126_e,this->_literals[38]);V _rhs39727=this->_literals[24];return V(j::equal(_lhs39726,_rhs39727,true));})())){(void)((([&]()->V{V _base39729=_v_37128_out;V _key39730=V(0.0);V _assign39728=_v_37137_x;return j::put(_base39729,_key39730,_assign39728);})(),([&]()->V{V _base39732=_v_37128_out;V _key39733=V(1.0);V _assign39731=j::get(_v_37125_box,this->_literals[117]);return j::put(_base39732,_key39733,_assign39731);})()));
}else {if(j::truth(([&]()->V{V _lhs39734=j::get(_v_37126_e,this->_literals[38]);V _rhs39735=this->_literals[156];return V(j::equal(_lhs39734,_rhs39735,true));})())){(void)((([&]()->V{V _base39737=_v_37128_out;V _key39738=V(0.0);V _assign39736=_v_37137_x;return j::put(_base39737,_key39738,_assign39736);})(),([&]()->V{V _base39740=_v_37128_out;V _key39741=V(1.0);V _assign39739=([&]()->V{V _lhs39742=j::get(_v_37125_box,this->_literals[157]);V _rhs39743=this->_v_36715_IN.get();return V(j::number(_lhs39742)-j::number(_rhs39743));})();return j::put(_base39740,_key39741,_assign39739);})()));
}else {if(j::truth(([&]()->V{V _lhs39744=j::get(_v_37126_e,this->_literals[38]);V _rhs39745=this->_literals[160];return V(j::equal(_lhs39744,_rhs39745,true));})())){(void)((([&]()->V{V _base39747=_v_37128_out;V _key39748=V(0.0);V _assign39746=j::get(_v_37125_box,this->_literals[116]);return j::put(_base39747,_key39748,_assign39746);})(),([&]()->V{V _base39750=_v_37128_out;V _key39751=V(1.0);V _assign39749=_v_37138_y;return j::put(_base39750,_key39751,_assign39749);})()));
}else {(void)((([&]()->V{V _base39753=_v_37128_out;V _key39754=V(0.0);V _assign39752=([&]()->V{V _lhs39755=j::get(_v_37125_box,this->_literals[159]);V _rhs39756=this->_v_36715_IN.get();return V(j::number(_lhs39755)-j::number(_rhs39756));})();return j::put(_base39753,_key39754,_assign39752);})(),([&]()->V{V _base39758=_v_37128_out;V _key39759=V(1.0);V _assign39757=_v_37138_y;return j::put(_base39758,_key39759,_assign39757);})()));
}
}
}

}
else {(void)((([&]()->V{V _base39761=_v_37128_out;V _key39762=V(0.0);V _assign39760=j::get(_v_37125_box,this->_literals[116]);return j::put(_base39761,_key39762,_assign39760);})(),([&]()->V{V _base39764=_v_37128_out;V _key39765=V(1.0);V _assign39763=j::get(_v_37125_box,this->_literals[117]);return j::put(_base39764,_key39765,_assign39763);})()));
}
}
}
}

}

return V{};
},5);
this->_v_37139_inksOf.get()=j::function([=](const j::Args &_args_fn37140,const V &_receiver_fn37140,const V &_self_fn37140) mutable ->V{
V _v_37141_pl;
V _v_37142_s;
_v_37141_pl=_args_fn37140[0];
_v_37142_s=_args_fn37140[1];
{
j::Cell _v_37143_pal;
j::Cell _v_37144_idx;
if(j::truth(([&]()->V{V _logical39766=j::get(_v_37141_pl,this->_literals[123]);return j::truth(_logical39766)?([&]()->V{V _lhs39767=j::get(j::get(_v_37141_pl,this->_literals[123]),this->_literals[14]);V _rhs39768=j::get(_v_37142_s,this->_literals[14]);return V(j::equal(_lhs39767,_rhs39768,true));})():_logical39766;})())){return j::get(_v_37141_pl,this->_literals[123]);
}
_v_37143_pal.get()=j::get(_v_37142_s,this->_literals[14]);
_v_37144_idx.get()=j::function([=](const j::Args &_args_fn37145,const V &_receiver_fn37145,const V &_self_fn37145) mutable ->V{
V _v_37146_list;
j::Cell _v_37147_paper;
_v_37146_list=_args_fn37145[0];
_v_37147_paper.get()=_args_fn37145[1];
return ([&]()->V{V _receiver39772=j::builtin("Uint8Array");V _method39773=this->_literals[5];V _method=j::get(_receiver39772,_method39773);j::Args _params39774=j::Args{_v_37146_list,j::function([=](const j::Args &_args_fn37148,const V &_receiver_fn37148,const V &_self_fn37148) mutable ->V{
V _v_37149_c;
_v_37149_c=_args_fn37148[0];
return (j::truth(_v_37143_pal.get())?([&]()->V{V _receiver39769=_v_37143_pal.get();V _method39770=this->_literals[175];V _method=j::get(_receiver39769,_method39770);j::Args _params39771=j::Args{_v_37149_c,_v_37147_paper.get()};return j::call(_method,_params39771,_receiver39769);})():this->_v_36692_NONE.get());
return V{};
},1)};return j::call(_method,_params39774,_receiver39772);})();
return V{};
},2);
(void)(([&]()->V{V _base39776=_v_37141_pl;V _key39777=this->_literals[123];V _assign39775=([&]()->V{V _obj39778=j::object();j::put(_obj39778,this->_literals[14],_v_37143_pal.get());j::put(_obj39778,this->_literals[16],([&]()->V{V _receiver39780=j::get(_v_37141_pl,this->_literals[97]);V _method39781=this->_literals[21];V _method=j::get(_receiver39780,_method39781);j::Args _params39782=j::Args{j::function([=](const j::Args &_args_fn37150,const V &_receiver_fn37150,const V &_self_fn37150) mutable ->V{
V _v_37151_f;
_v_37151_f=_args_fn37150[0];
return ([&]()->V{V _callee39779=_v_37144_idx.get();return j::call(_callee39779,j::Args{j::get(_v_37151_f,this->_literals[8]),V(true)});})();
return V{};
},1)};return j::call(_method,_params39782,_receiver39780);})());j::put(_obj39778,this->_literals[9],([&]()->V{V _receiver39784=j::get(_v_37141_pl,this->_literals[97]);V _method39785=this->_literals[21];V _method=j::get(_receiver39784,_method39785);j::Args _params39786=j::Args{j::function([=](const j::Args &_args_fn37152,const V &_receiver_fn37152,const V &_self_fn37152) mutable ->V{
V _v_37153_f;
_v_37153_f=_args_fn37152[0];
return ([&]()->V{V _callee39783=_v_37144_idx.get();return j::call(_callee39783,j::Args{j::get(_v_37153_f,this->_literals[9]),V(false)});})();
return V{};
},1)};return j::call(_method,_params39786,_receiver39784);})());j::put(_obj39778,this->_literals[176],(j::truth(j::get(_v_37141_pl,this->_literals[102]))?([&]()->V{V _callee39787=_v_37144_idx.get();return j::call(_callee39787,j::Args{j::get(j::get(_v_37141_pl,this->_literals[102]),this->_literals[8]),V(true)});})():V::null()));j::put(_obj39778,this->_literals[177],(j::truth(j::get(_v_37141_pl,this->_literals[102]))?([&]()->V{V _callee39788=_v_37144_idx.get();return j::call(_callee39788,j::Args{j::get(j::get(_v_37141_pl,this->_literals[102]),this->_literals[9]),V(false)});})():V::null()));return _obj39778;})();return j::put(_base39776,_key39777,_assign39775);})());
return j::get(_v_37141_pl,this->_literals[123]);

}

return V{};
},2);
this->_v_37154_tint.get()=j::function([=](const j::Args &_args_fn37155,const V &_receiver_fn37155,const V &_self_fn37155) mutable ->V{
V _v_37156_pl;
V _v_37157_fade;
V _v_37158_k;
_v_37156_pl=_args_fn37155[0];
_v_37157_fade=_args_fn37155[1];
_v_37158_k=_args_fn37155[2];
{
V _v_37159_f;
if(j::truth(j::unary("!",j::get(j::get(_v_37156_pl,this->_literals[127]),this->_literals[141])))){return this->_v_36692_NONE.get();
}
if(j::truth(j::get(_v_37156_pl,this->_literals[17]))){return ([&]()->V{V _receiver39792=j::get(j::get(_v_37156_pl,this->_literals[127]),this->_literals[128]);V _method39793=this->_literals[178];V _method=j::get(_receiver39792,_method39793);j::Args _params39794=j::Args{([&]()->V{V _receiver39789=_v_37156_pl;V _method39790=this->_literals[17];V _method=j::get(_receiver39789,_method39790);j::Args _params39791=j::Args{j::get(_v_37156_pl,this->_literals[107])};return j::call(_method,_params39791,_receiver39789);})()};return j::call(_method,_params39794,_receiver39792);})();
}
_v_37159_f=([&]()->V{V _chain39795=_v_37156_pl;V _chain39796=j::get(_chain39795,this->_literals[124]);if(j::nullish(_chain39796))return V{};V _chain39797=j::get(_chain39796,_v_37157_fade);return _chain39797;})();
return (j::truth(_v_37159_f)?j::get(_v_37159_f,([&]()->V{V _receiver39807=j::builtin("Math");V _method39808=this->_literals[158];V _method=j::get(_receiver39807,_method39808);j::Args _params39809=j::Args{([&]()->V{V _lhs39798=j::get(_v_37159_f,this->_literals[1]);V _rhs39799=V(1.0);return V(j::number(_lhs39798)-j::number(_rhs39799));})(),([&]()->V{V _number39802=([&]()->V{V _lhs39803=_v_37158_k;V _rhs39804=j::get(_v_37159_f,this->_literals[1]);return V(j::number(_lhs39803)*j::number(_rhs39804));})();return V(std::floor(j::number(_number39802)));})()};return j::call(_method,_params39809,_receiver39807);})()):this->_v_36692_NONE.get());

}

return V{};
},3);
this->_v_37160_glyphOf.get()=j::function([=](const j::Args &_args_fn37161,const V &_receiver_fn37161,const V &_self_fn37161) mutable ->V{
V _v_37162_v;
_v_37162_v=_args_fn37161[0];
{
V _v_37163_str;
V _v_37164_c;
if(j::truth(([&]()->V{V _logical39810=([&]()->V{V _logical39811=([&]()->V{V _lhs39812=_v_37162_v;V _rhs39813=j::builtin("undefined");return V(j::equal(_lhs39812,_rhs39813,true));})();return !j::truth(_logical39811)?([&]()->V{V _lhs39814=_v_37162_v;V _rhs39815=V::null();return V(j::equal(_lhs39814,_rhs39815,true));})():_logical39811;})();return !j::truth(_logical39810)?([&]()->V{V _lhs39816=_v_37162_v;V _rhs39817=this->_literals[2];return V(j::equal(_lhs39816,_rhs39817,true));})():_logical39810;})())){return this->_v_36690_EMPTY.get();
}
_v_37163_str=([&]()->V{V _callee39818=j::builtin("String");return j::call(_callee39818,j::Args{_v_37162_v});})();
_v_37164_c=([&]()->V{V _receiver39819=_v_37163_str;V _method39820=this->_literals[179];V _method=j::get(_receiver39819,_method39820);j::Args _params39821=j::Args{V(0.0)};return j::call(_method,_params39821,_receiver39819);})();
if(j::truth(([&]()->V{V _logical39822=([&]()->V{V _lhs39823=_v_37164_c;V _rhs39824=V(55296.0);return j::binary(">=",_lhs39823,_rhs39824);})();return j::truth(_logical39822)?([&]()->V{V _lhs39825=_v_37164_c;V _rhs39826=V(57343.0);return j::binary("<=",_lhs39825,_rhs39826);})():_logical39822;})())){(void)(([&]()->V{V _callee39831=this->_v_36700_fail.get();return j::call(_callee39831,j::Args{([&]()->V{std::u16string _text39827;_text39827+=u"a glyph function returns one character from the Basic Multilingual Plane, not ";_text39827+=j::string(([&]()->V{V _receiver39828=j::builtin("JSON");V _method39829=this->_literals[3];V _method=j::get(_receiver39828,_method39829);j::Args _params39830=j::Args{_v_37163_str};return j::call(_method,_params39830,_receiver39828);})());_text39827+=u"";return V(std::move(_text39827));})()});})());
}
return ([&]()->V{V _callee39832=this->_v_36699_code.get();return j::call(_callee39832,j::Args{j::get(_v_37163_str,V(0.0))});})();

}

return V{};
},1);
this->_v_37165_pushHead.get()=j::function([=](const j::Args &_args_fn37166,const V &_receiver_fn37166,const V &_self_fn37166) mutable ->V{
V _v_37167_pl;
V _v_37168_at;
V _v_37169_ch;
V _v_37170_col;
_v_37167_pl=_args_fn37166[0];
_v_37168_at=_args_fn37166[1];
_v_37169_ch=_args_fn37166[2];
_v_37170_col=_args_fn37166[3];
{
V _v_37171_h;
_v_37171_h=j::get(_v_37167_pl,this->_literals[119]);
if(j::truth(([&]()->V{V _lhs39833=j::get(_v_37171_h,this->_literals[122]);V _rhs39834=j::get(j::get(_v_37171_h,this->_literals[32]),this->_literals[1]);return V(j::equal(_lhs39833,_rhs39834,true));})())){
V _v_37172_at2;
V _v_37173_ch2;
V _v_37174_col2;
_v_37172_at2=([&]()->V{V _callee39837=j::builtin("Int32Array");return j::construct(_callee39837,j::Args{([&]()->V{V _lhs39835=j::get(_v_37171_h,this->_literals[122]);V _rhs39836=V(2.0);return V(j::number(_lhs39835)*j::number(_rhs39836));})()});})();
_v_37173_ch2=([&]()->V{V _callee39840=j::builtin("Uint16Array");return j::construct(_callee39840,j::Args{([&]()->V{V _lhs39838=j::get(_v_37171_h,this->_literals[122]);V _rhs39839=V(2.0);return V(j::number(_lhs39838)*j::number(_rhs39839));})()});})();
_v_37174_col2=([&]()->V{V _callee39843=j::builtin("Uint8Array");return j::construct(_callee39843,j::Args{([&]()->V{V _lhs39841=j::get(_v_37171_h,this->_literals[122]);V _rhs39842=V(2.0);return V(j::number(_lhs39841)*j::number(_rhs39842));})()});})();
(void)((([&]()->V{V _receiver39844=_v_37172_at2;V _method39845=this->_literals[162];V _method=j::get(_receiver39844,_method39845);j::Args _params39846=j::Args{j::get(_v_37171_h,this->_literals[32])};return j::call(_method,_params39846,_receiver39844);})(),([&]()->V{V _receiver39847=_v_37173_ch2;V _method39848=this->_literals[162];V _method=j::get(_receiver39847,_method39848);j::Args _params39849=j::Args{j::get(_v_37171_h,this->_literals[120])};return j::call(_method,_params39849,_receiver39847);})(),([&]()->V{V _receiver39850=_v_37174_col2;V _method39851=this->_literals[162];V _method=j::get(_receiver39850,_method39851);j::Args _params39852=j::Args{j::get(_v_37171_h,this->_literals[121])};return j::call(_method,_params39852,_receiver39850);})()));
(void)((([&]()->V{V _base39854=_v_37171_h;V _key39855=this->_literals[32];V _assign39853=_v_37172_at2;return j::put(_base39854,_key39855,_assign39853);})(),([&]()->V{V _base39857=_v_37171_h;V _key39858=this->_literals[120];V _assign39856=_v_37173_ch2;return j::put(_base39857,_key39858,_assign39856);})(),([&]()->V{V _base39860=_v_37171_h;V _key39861=this->_literals[121];V _assign39859=_v_37174_col2;return j::put(_base39860,_key39861,_assign39859);})()));

}

(void)(([&]()->V{V _base39863=j::get(_v_37171_h,this->_literals[32]);V _key39864=j::get(_v_37171_h,this->_literals[122]);V _assign39862=_v_37168_at;return j::put(_base39863,_key39864,_assign39862);})());
(void)(([&]()->V{V _base39866=j::get(_v_37171_h,this->_literals[120]);V _key39867=j::get(_v_37171_h,this->_literals[122]);V _assign39865=_v_37169_ch;return j::put(_base39866,_key39867,_assign39865);})());
(void)(([&]()->V{V _base39869=j::get(_v_37171_h,this->_literals[121]);V _key39870=j::increment(_v_37171_h,this->_literals[122],1,false);V _assign39868=_v_37170_col;return j::put(_base39869,_key39870,_assign39868);})());

}

return V{};
},4);
this->_v_37175_particle.get()=j::function([=](const j::Args &_args_fn37176,const V &_receiver_fn37176,const V &_self_fn37176) mutable ->V{
V _v_37177_pl;
V _v_37178_m;
V _v_37179_born;
V _v_37180_x0;
V _v_37181_y0;
V _v_37182_fade;
V _v_37183_even;
_v_37177_pl=_args_fn37176[0];
_v_37178_m=_args_fn37176[1];
_v_37179_born=_args_fn37176[2];
_v_37180_x0=_args_fn37176[3];
_v_37181_y0=_args_fn37176[4];
_v_37182_fade=_args_fn37176[5];
V _default39871=_args_fn37176[6];if(_default39871.kind==V::Undefined||_default39871.kind==V::Hole)_default39871=j::unary("-",V(1.0));
_v_37183_even=_default39871;
{
V _v_37184_wk;
V _v_37185_s;
V _v_37186_p;
V _v_37187_seed;
V _v_37188_age;
V _v_37189_life;
V _v_37190_splashFor;
V _v_37191_sp;
V _v_37192_th;
V _v_37193_wait;
V _v_37194_moved;
V _v_37195_shown;
V _v_37196_L;
V _v_37197_gone;
V _v_37198_landed;
V _v_37210_head;
V _v_37211_ch;
V _v_37212_color;
V _v_37213_now;
_v_37184_wk=j::get(_v_37177_pl,this->_literals[127]);
_v_37185_s=j::get(_v_37184_wk,this->_literals[128]);
_v_37186_p=j::get(_v_37177_pl,this->_literals[107]);
_v_37187_seed=j::get(_v_37177_pl,this->_literals[93]);
_v_37188_age=([&]()->V{V _lhs39872=j::get(_v_37184_wk,this->_literals[113]);V _rhs39873=_v_37179_born;return V(j::number(_lhs39872)-j::number(_rhs39873));})();
_v_37189_life=([&]()->V{V _lhs39874=j::get(j::get(_v_37177_pl,this->_literals[66]),V(0.0));V _rhs39875=([&]()->V{V _lhs39876=([&]()->V{V _lhs39878=j::get(j::get(_v_37177_pl,this->_literals[66]),V(1.0));V _rhs39879=j::get(j::get(_v_37177_pl,this->_literals[66]),V(0.0));return V(j::number(_lhs39878)-j::number(_rhs39879));})();V _rhs39877=([&]()->V{V _callee39880=this->_v_36701_hash.get();return j::call(_callee39880,j::Args{_v_37187_seed,_v_37178_m,V(3.0)});})();return V(j::number(_lhs39876)*j::number(_rhs39877));})();return j::binary("+",_lhs39874,_rhs39875);})();
_v_37190_splashFor=([&]()->V{V _lhs39881=j::get(j::get(_v_37177_pl,this->_literals[88]),this->_literals[1]);V _rhs39882=this->_v_36712_SPLASH.get();return V(j::number(_lhs39881)*j::number(_rhs39882));})();
if(j::truth(([&]()->V{V _logical39883=([&]()->V{V _lhs39884=_v_37188_age;V _rhs39885=V(0.0);return j::binary("<",_lhs39884,_rhs39885);})();return !j::truth(_logical39883)?([&]()->V{V _lhs39886=_v_37188_age;V _rhs39887=([&]()->V{V _lhs39888=_v_37189_life;V _rhs39889=_v_37190_splashFor;return j::binary("+",_lhs39888,_rhs39889);})();return j::binary(">=",_lhs39886,_rhs39887);})():_logical39883;})())){return V{};
}
_v_37191_sp=([&]()->V{V _lhs39890=j::get(j::get(_v_37177_pl,this->_literals[68]),V(0.0));V _rhs39891=([&]()->V{V _lhs39892=([&]()->V{V _lhs39894=j::get(j::get(_v_37177_pl,this->_literals[68]),V(1.0));V _rhs39895=j::get(j::get(_v_37177_pl,this->_literals[68]),V(0.0));return V(j::number(_lhs39894)-j::number(_rhs39895));})();V _rhs39893=([&]()->V{V _callee39896=this->_v_36701_hash.get();return j::call(_callee39896,j::Args{_v_37187_seed,_v_37178_m,V(4.0)});})();return V(j::number(_lhs39892)*j::number(_rhs39893));})();return j::binary("+",_lhs39890,_rhs39891);})();
_v_37192_th=([&]()->V{V _lhs39897=j::get(j::get(_v_37177_pl,this->_literals[53]),V(0.0));V _rhs39898=([&]()->V{V _lhs39899=([&]()->V{V _lhs39901=j::get(j::get(_v_37177_pl,this->_literals[53]),V(1.0));V _rhs39902=j::get(j::get(_v_37177_pl,this->_literals[53]),V(0.0));return V(j::number(_lhs39901)-j::number(_rhs39902));})();V _rhs39900=(j::truth(([&]()->V{V _lhs39903=_v_37183_even;V _rhs39904=V(0.0);return j::binary(">=",_lhs39903,_rhs39904);})())?_v_37183_even:([&]()->V{V _callee39905=this->_v_36701_hash.get();return j::call(_callee39905,j::Args{_v_37187_seed,_v_37178_m,V(5.0)});})());return V(j::number(_lhs39899)*j::number(_rhs39900));})();return j::binary("+",_lhs39897,_rhs39898);})();
_v_37193_wait=(j::truth(([&]()->V{V _logical39906=([&]()->V{V _lhs39907=j::get(j::get(_v_37177_pl,this->_literals[65]),V(1.0));V _rhs39908=V(0.0);return j::binary(">",_lhs39907,_rhs39908);})();return j::truth(_logical39906)?j::unary("!",j::get(_v_37177_pl,this->_literals[67])):_logical39906;})())?([&]()->V{V _lhs39909=j::get(j::get(_v_37177_pl,this->_literals[65]),V(0.0));V _rhs39910=([&]()->V{V _lhs39911=([&]()->V{V _lhs39913=j::get(j::get(_v_37177_pl,this->_literals[65]),V(1.0));V _rhs39914=j::get(j::get(_v_37177_pl,this->_literals[65]),V(0.0));return V(j::number(_lhs39913)-j::number(_rhs39914));})();V _rhs39912=([&]()->V{V _callee39915=this->_v_36701_hash.get();return j::call(_callee39915,j::Args{_v_37187_seed,_v_37178_m,V(9.0)});})();return V(j::number(_lhs39911)*j::number(_rhs39912));})();return j::binary("+",_lhs39909,_rhs39910);})():V(0.0));
_v_37194_moved=([&]()->V{V _receiver39920=j::builtin("Math");V _method39921=this->_literals[30];V _method=j::get(_receiver39920,_method39921);j::Args _params39922=j::Args{V(0.0),([&]()->V{V _lhs39916=_v_37188_age;V _rhs39917=_v_37193_wait;return V(j::number(_lhs39916)-j::number(_rhs39917));})()};return j::call(_method,_params39922,_receiver39920);})();
_v_37195_shown=([&]()->V{V _receiver39932=j::builtin("Math");V _method39933=this->_literals[30];V _method=j::get(_receiver39932,_method39933);j::Args _params39934=j::Args{V(0.0),([&]()->V{V _lhs39923=([&]()->V{V _receiver39927=j::builtin("Math");V _method39928=this->_literals[158];V _method=j::get(_receiver39927,_method39928);j::Args _params39929=j::Args{_v_37188_age,_v_37189_life};return j::call(_method,_params39929,_receiver39927);})();V _rhs39924=_v_37193_wait;return V(j::number(_lhs39923)-j::number(_rhs39924));})()};return j::call(_method,_params39934,_receiver39932);})();
(void)(j::increment(_v_37184_wk,this->_literals[145],1,false));
(void)(([&]()->V{V _base39936=_v_37184_wk;V _key39937=this->_literals[146];V _assign39935=([&]()->V{V _lhs39938=_v_37179_born;V _rhs39939=_v_37193_wait;return j::binary("+",_lhs39938,_rhs39939);})();return j::put(_base39936,_key39937,_assign39935);})());
(void)(([&]()->V{V _base39941=_v_37184_wk;V _key39942=this->_literals[116];V _assign39940=_v_37180_x0;return j::put(_base39941,_key39942,_assign39940);})());
(void)(([&]()->V{V _base39944=_v_37184_wk;V _key39945=this->_literals[117];V _assign39943=([&]()->V{V _lhs39946=_v_37181_y0;V _rhs39947=j::get(_v_37184_wk,this->_literals[129]);return V(j::number(_lhs39946)*j::number(_rhs39947));})();return j::put(_base39944,_key39945,_assign39943);})());
(void)(([&]()->V{V _base39949=_v_37184_wk;V _key39950=this->_literals[111];V _assign39948=([&]()->V{V _lhs39951=_v_37191_sp;V _rhs39952=([&]()->V{V _number39953=_v_37192_th;return V(std::cos(j::number(_number39953)));})();return V(j::number(_lhs39951)*j::number(_rhs39952));})();return j::put(_base39949,_key39950,_assign39948);})());
(void)(([&]()->V{V _base39955=_v_37184_wk;V _key39956=this->_literals[112];V _assign39954=([&]()->V{V _lhs39957=_v_37191_sp;V _rhs39958=([&]()->V{V _number39959=_v_37192_th;return V(std::sin(j::number(_number39959)));})();return V(j::number(_lhs39957)*j::number(_rhs39958));})();return j::put(_base39955,_key39956,_assign39954);})());
(void)(([&]()->V{V _base39961=_v_37184_wk;V _key39962=this->_literals[147];V _assign39960=([&]()->V{V _lhs39963=this->_v_36697_TAU.get();V _rhs39964=([&]()->V{V _callee39965=this->_v_36701_hash.get();return j::call(_callee39965,j::Args{_v_37187_seed,_v_37178_m,V(6.0)});})();return V(j::number(_lhs39963)*j::number(_rhs39964));})();return j::put(_base39961,_key39962,_assign39960);})());
(void)(([&]()->V{V _base39967=_v_37184_wk;V _key39968=this->_literals[148];V _assign39966=(j::truth(j::get(_v_37177_pl,this->_literals[95]))?([&]()->V{V _callee39969=this->_v_36965_windAt.get();return j::call(_callee39969,j::Args{_v_37177_pl,j::get(_v_37184_wk,this->_literals[146])});})():V(0.0));return j::put(_base39967,_key39968,_assign39966);})());
_v_37196_L=(j::truth(([&]()->V{V _lhs39970=this->_literals[44];V _rhs39971=j::get(_v_37177_pl,this->_literals[56]);return j::binary("in",_lhs39970,_rhs39971);})())?j::get(j::get(_v_37177_pl,this->_literals[56]),this->_literals[44]):V::null());
(void)(([&]()->V{V _base39973=_v_37186_p;V _key39974=this->_literals[108];V _assign39972=_v_37178_m;return j::put(_base39973,_key39974,_assign39972);})());
(void)(([&]()->V{V _base39976=_v_37186_p;V _key39977=this->_literals[66];V _assign39975=_v_37189_life;return j::put(_base39976,_key39977,_assign39975);})());
(void)(([&]()->V{V _base39979=_v_37186_p;V _key39980=this->_literals[113];V _assign39978=j::get(_v_37184_wk,this->_literals[113]);return j::put(_base39979,_key39980,_assign39978);})());
(void)(([&]()->V{V _base39982=_v_37186_p;V _key39983=this->_literals[114];V _assign39981=([&]()->V{V _callee39984=this->_v_36701_hash.get();return j::call(_callee39984,j::Args{_v_37187_seed,_v_37178_m,V(7.0)});})();return j::put(_base39982,_key39983,_assign39981);})());
(void)(([&]()->V{V _base39986=_v_37186_p;V _key39987=this->_literals[115];V _assign39985=V(0.0);return j::put(_base39986,_key39987,_assign39985);})());
(void)(([&]()->V{V _base39989=_v_37186_p;V _key39990=this->_literals[116];V _assign39988=_v_37180_x0;return j::put(_base39989,_key39990,_assign39988);})());
(void)(([&]()->V{V _base39992=_v_37186_p;V _key39993=this->_literals[117];V _assign39991=_v_37181_y0;return j::put(_base39992,_key39993,_assign39991);})());
(void)(([&]()->V{V _base39995=_v_37186_p;V _key39996=this->_literals[53];V _assign39994=_v_37192_th;return j::put(_base39995,_key39996,_assign39994);})());
(void)(([&]()->V{V _base39998=_v_37186_p;V _key39999=this->_literals[68];V _assign39997=_v_37191_sp;return j::put(_base39998,_key39999,_assign39997);})());
(void)(([&]()->V{V _base40001=_v_37186_p;V _key40002=this->_literals[65];V _assign40000=_v_37193_wait;return j::put(_base40001,_key40002,_assign40000);})());
(void)(([&]()->V{V _base40004=_v_37186_p;V _key40005=this->_literals[118];V _assign40003=(j::truth(([&]()->V{V _logical40006=_v_37196_L;return j::truth(_logical40006)?([&]()->V{V _lhs40007=j::get(_v_37184_wk,this->_literals[149]);V _rhs40008=V(0.0);return j::binary(">=",_lhs40007,_rhs40008);})():_logical40006;})())?j::get(j::get(_v_37196_L,this->_literals[37]),j::get(_v_37184_wk,this->_literals[149])):this->_literals[2]);return j::put(_base40004,_key40005,_assign40003);})());
_v_37197_gone=V(false);
_v_37198_landed=j::unary("-",V(1.0));
if(j::truth(j::get(_v_37177_pl,this->_literals[67]))){
V _v_37199_uy;
if(j::truth(([&]()->V{V _lhs40009=_v_37188_age;V _rhs40010=_v_37189_life;return j::binary(">=",_lhs40009,_rhs40010);})())){return V{};
}
(void)(([&]()->V{V _base40012=_v_37186_p;V _key40013=this->_literals[109];V _assign40011=_v_37188_age;return j::put(_base40012,_key40013,_assign40011);})());
(void)(([&]()->V{V _base40015=_v_37186_p;V _key40016=this->_literals[110];V _assign40014=([&]()->V{V _lhs40017=_v_37188_age;V _rhs40018=_v_37189_life;return V(j::number(_lhs40017)/j::number(_rhs40018));})();return j::put(_base40015,_key40016,_assign40014);})());
(void)(([&]()->V{V _callee40019=this->_v_37094_place.get();return j::call(_callee40019,j::Args{_v_37177_pl,_v_37188_age});})());
_v_37199_uy=([&]()->V{V _lhs40020=j::get(_v_37186_p,this->_literals[49]);V _rhs40021=j::get(_v_37184_wk,this->_literals[129]);return V(j::number(_lhs40020)*j::number(_rhs40021));})();
(void)((_v_37197_gone=([&]()->V{V _logical40023=([&]()->V{V _logical40024=([&]()->V{V _logical40025=([&]()->V{V _lhs40026=j::get(_v_37177_pl,this->_literals[98]);V _rhs40027=this->_literals[82];return V(j::equal(_lhs40026,_rhs40027,true));})();return j::truth(_logical40025)?([&]()->V{V _logical40028=([&]()->V{V _lhs40029=j::get(_v_37186_p,this->_literals[48]);V _rhs40030=j::get(_v_37184_wk,this->_literals[130]);return j::binary("<",_lhs40029,_rhs40030);})();return !j::truth(_logical40028)?([&]()->V{V _lhs40031=j::get(_v_37186_p,this->_literals[48]);V _rhs40032=j::get(_v_37184_wk,this->_literals[131]);return j::binary(">=",_lhs40031,_rhs40032);})():_logical40028;})():_logical40025;})();return !j::truth(_logical40024)?([&]()->V{V _logical40033=([&]()->V{V _lhs40034=j::get(_v_37177_pl,this->_literals[99]);V _rhs40035=this->_literals[82];return V(j::equal(_lhs40034,_rhs40035,true));})();return j::truth(_logical40033)?([&]()->V{V _lhs40036=_v_37199_uy;V _rhs40037=j::get(_v_37184_wk,this->_literals[132]);return j::binary("<",_lhs40036,_rhs40037);})():_logical40033;})():_logical40024;})();return !j::truth(_logical40023)?([&]()->V{V _logical40038=j::get(_v_37184_wk,this->_literals[142]);return j::truth(_logical40038)?([&]()->V{V _lhs40039=_v_37199_uy;V _rhs40040=j::get(_v_37184_wk,this->_literals[133]);return j::binary(">=",_lhs40039,_rhs40040);})():_logical40038;})():_logical40023;})()));

}
else {if(j::truth(([&]()->V{V _lhs40041=j::get(_v_37177_pl,this->_literals[98]);V _rhs40042=this->_literals[82];return V(j::equal(_lhs40041,_rhs40042,true));})())){
(void)(([&]()->V{V _callee40043=this->_v_37069_extent.get();return j::call(_callee40043,j::Args{_v_37177_pl,_v_37195_shown,V(false)});})());
if(j::truth(([&]()->V{V _logical40044=([&]()->V{V _lhs40045=j::get(_v_37184_wk,this->_literals[150]);V _rhs40046=j::get(_v_37184_wk,this->_literals[130]);return j::binary("<",_lhs40045,_rhs40046);})();return !j::truth(_logical40044)?([&]()->V{V _lhs40047=j::get(_v_37184_wk,this->_literals[151]);V _rhs40048=j::get(_v_37184_wk,this->_literals[131]);return j::binary(">=",_lhs40047,_rhs40048);})():_logical40044;})())){(void)((_v_37197_gone=V(true)));
}

}

}
if(j::truth(([&]()->V{V _logical40050=j::unary("!",j::get(_v_37177_pl,this->_literals[67]));return j::truth(_logical40050)?([&]()->V{V _logical40051=([&]()->V{V _lhs40052=j::get(_v_37177_pl,this->_literals[99]);V _rhs40053=this->_literals[82];return V(j::equal(_lhs40052,_rhs40053,true));})();return !j::truth(_logical40051)?j::get(_v_37184_wk,this->_literals[142]):_logical40051;})():_logical40050;})())){
V _v_37200_above;
(void)(([&]()->V{V _callee40054=this->_v_37069_extent.get();return j::call(_callee40054,j::Args{_v_37177_pl,_v_37195_shown,V(true)});})());
_v_37200_above=([&]()->V{V _logical40055=([&]()->V{V _lhs40056=j::get(_v_37177_pl,this->_literals[99]);V _rhs40057=this->_literals[82];return V(j::equal(_lhs40056,_rhs40057,true));})();return j::truth(_logical40055)?([&]()->V{V _lhs40058=j::get(_v_37184_wk,this->_literals[150]);V _rhs40059=j::get(_v_37184_wk,this->_literals[132]);return j::binary("<",_lhs40058,_rhs40059);})():_logical40055;})();
if(j::truth(_v_37200_above)){(void)((_v_37197_gone=V(true)));
}
if(j::truth(([&]()->V{V _logical40061=j::get(_v_37184_wk,this->_literals[142]);return j::truth(_logical40061)?([&]()->V{V _lhs40062=j::get(_v_37184_wk,this->_literals[151]);V _rhs40063=j::get(_v_37184_wk,this->_literals[133]);return j::binary(">=",_lhs40062,_rhs40063);})():_logical40061;})())){
(void)((_v_37197_gone=V(true)));
if(j::truth(([&]()->V{V _logical40065=([&]()->V{V _lhs40066=j::get(_v_37184_wk,this->_literals[117]);V _rhs40067=j::get(_v_37184_wk,this->_literals[133]);return j::binary("<",_lhs40066,_rhs40067);})();return j::truth(_logical40065)?j::unary("!",_v_37200_above):_logical40065;})())){
V _v_37201_top;
V _v_37202_a0;
V _v_37203_a1;
_v_37201_top=([&]()->V{V _callee40068=this->_v_36938_apex.get();return j::call(_callee40068,j::Args{j::get(_v_37184_wk,this->_literals[112]),j::get(_v_37177_pl,this->_literals[69]),V(0.0),j::get(_v_37177_pl,this->_literals[71])});})();
_v_37202_a0=(j::truth(([&]()->V{V _logical40069=([&]()->V{V _lhs40070=_v_37201_top;V _rhs40071=V(0.0);return j::binary(">",_lhs40070,_rhs40071);})();return j::truth(_logical40069)?([&]()->V{V _lhs40072=_v_37201_top;V _rhs40073=_v_37195_shown;return j::binary("<",_lhs40072,_rhs40073);})():_logical40069;})())?_v_37201_top:V(0.0));
_v_37203_a1=_v_37195_shown;
{V _v_37204_i;
_v_37204_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs40074=_v_37204_i;V _rhs40075=V(24.0);return j::binary("<",_lhs40074,_rhs40075);})());(void)(j::increment(_v_37204_i,1,false))){
V _v_37205_mid;
_v_37205_mid=([&]()->V{V _lhs40076=([&]()->V{V _lhs40078=_v_37202_a0;V _rhs40079=_v_37203_a1;return j::binary("+",_lhs40078,_rhs40079);})();V _rhs40077=V(2.0);return V(j::number(_lhs40076)/j::number(_rhs40077));})();
if(j::truth(([&]()->V{V _lhs40080=([&]()->V{V _callee40082=this->_v_37064_down.get();return j::call(_callee40082,j::Args{_v_37177_pl,_v_37205_mid});})();V _rhs40081=j::get(_v_37184_wk,this->_literals[133]);return j::binary(">=",_lhs40080,_rhs40081);})())){(void)((_v_37203_a1=_v_37205_mid));
}else {(void)((_v_37202_a0=_v_37205_mid));
}

}
}
(void)((_v_37198_landed=_v_37203_a1));
if(j::truth(([&]()->V{V _lhs40086=j::get(_v_37177_pl,this->_literals[98]);V _rhs40087=this->_literals[82];return V(j::equal(_lhs40086,_rhs40087,true));})())){
(void)(([&]()->V{V _callee40088=this->_v_37069_extent.get();return j::call(_callee40088,j::Args{_v_37177_pl,_v_37198_landed,V(false)});})());
if(j::truth(([&]()->V{V _logical40089=([&]()->V{V _lhs40090=j::get(_v_37184_wk,this->_literals[150]);V _rhs40091=j::get(_v_37184_wk,this->_literals[130]);return j::binary("<",_lhs40090,_rhs40091);})();return !j::truth(_logical40089)?([&]()->V{V _lhs40092=j::get(_v_37184_wk,this->_literals[151]);V _rhs40093=j::get(_v_37184_wk,this->_literals[131]);return j::binary(">=",_lhs40092,_rhs40093);})():_logical40089;})())){(void)((_v_37198_landed=j::unary("-",V(1.0))));
}

}


}


}


}

if(j::truth(([&]()->V{V _logical40095=([&]()->V{V _logical40096=([&]()->V{V _lhs40097=_v_37198_landed;V _rhs40098=V(0.0);return j::binary(">=",_lhs40097,_rhs40098);})();return j::truth(_logical40096)?([&]()->V{V _lhs40099=([&]()->V{V _lhs40101=_v_37198_landed;V _rhs40102=_v_37193_wait;return j::binary("+",_lhs40101,_rhs40102);})();V _rhs40100=_v_37189_life;return j::binary("<",_lhs40099,_rhs40100);})():_logical40096;})();return j::truth(_logical40095)?j::get(j::get(_v_37177_pl,this->_literals[88]),this->_literals[1]):_logical40095;})())){
V _v_37206_since;
V _v_37207_row;
_v_37206_since=([&]()->V{V _lhs40103=_v_37194_moved;V _rhs40104=_v_37198_landed;return V(j::number(_lhs40103)-j::number(_rhs40104));})();
_v_37207_row=([&]()->V{V _lhs40105=([&]()->V{V _number40109=([&]()->V{V _lhs40110=j::get(_v_37184_wk,this->_literals[133]);V _rhs40111=j::get(_v_37184_wk,this->_literals[129]);return V(j::number(_lhs40110)/j::number(_rhs40111));})();return V(std::ceil(j::number(_number40109)));})();V _rhs40106=V(1.0);return V(j::number(_lhs40105)-j::number(_rhs40106));})();
if(j::truth(([&]()->V{V _lhs40112=_v_37206_since;V _rhs40113=_v_37190_splashFor;return j::binary("<",_lhs40112,_rhs40113);})())){
V _v_37208_c;
V _v_37209_ch;
(void)(([&]()->V{V _callee40114=this->_v_37094_place.get();return j::call(_callee40114,j::Args{_v_37177_pl,_v_37198_landed});})());
(void)(([&]()->V{V _base40116=_v_37186_p;V _key40117=this->_literals[109];V _assign40115=([&]()->V{V _lhs40118=_v_37198_landed;V _rhs40119=_v_37193_wait;return j::binary("+",_lhs40118,_rhs40119);})();return j::put(_base40116,_key40117,_assign40115);})());
(void)(([&]()->V{V _base40121=_v_37186_p;V _key40122=this->_literals[110];V _assign40120=([&]()->V{V _lhs40123=j::get(_v_37186_p,this->_literals[109]);V _rhs40124=_v_37189_life;return V(j::number(_lhs40123)/j::number(_rhs40124));})();return j::put(_base40121,_key40122,_assign40120);})());
(void)(([&]()->V{V _base40126=_v_37186_p;V _key40127=this->_literals[49];V _assign40125=_v_37207_row;return j::put(_base40126,_key40127,_assign40125);})());
(void)(([&]()->V{V _base40129=_v_37186_p;V _key40130=this->_literals[111];V _assign40128=([&]()->V{V _base40132=_v_37186_p;V _key40133=this->_literals[112];V _assign40131=V(0.0);return j::put(_base40132,_key40133,_assign40131);})();return j::put(_base40129,_key40130,_assign40128);})());
_v_37208_c=([&]()->V{V _callee40134=this->_v_37111_cellAt.get();return j::call(_callee40134,j::Args{_v_37177_pl,j::get(_v_37186_p,this->_literals[48]),_v_37207_row});})();
_v_37209_ch=j::get(j::get(_v_37177_pl,this->_literals[88]),([&]()->V{V _receiver40144=j::builtin("Math");V _method40145=this->_literals[158];V _method=j::get(_receiver40144,_method40145);j::Args _params40146=j::Args{([&]()->V{V _lhs40135=j::get(j::get(_v_37177_pl,this->_literals[88]),this->_literals[1]);V _rhs40136=V(1.0);return V(j::number(_lhs40135)-j::number(_rhs40136));})(),([&]()->V{V _number40139=([&]()->V{V _lhs40140=_v_37206_since;V _rhs40141=this->_v_36712_SPLASH.get();return V(j::number(_lhs40140)/j::number(_rhs40141));})();return V(std::floor(j::number(_number40139)));})()};return j::call(_method,_params40146,_receiver40144);})());
if(j::truth(([&]()->V{V _logical40147=([&]()->V{V _lhs40148=_v_37208_c;V _rhs40149=V(0.0);return j::binary(">=",_lhs40148,_rhs40149);})();return j::truth(_logical40147)?([&]()->V{V _lhs40150=_v_37209_ch;V _rhs40151=V(32.0);return V(!j::equal(_lhs40150,_rhs40151,true));})():_logical40147;})())){(void)(([&]()->V{V _receiver40153=_v_37185_s;V _method40154=this->_literals[180];V _method=j::get(_receiver40153,_method40154);j::Args _params40155=j::Args{_v_37208_c,_v_37209_ch,([&]()->V{V _callee40152=this->_v_37154_tint.get();return j::call(_callee40152,j::Args{_v_37177_pl,_v_37182_fade,j::get(_v_37186_p,this->_literals[110])});})()};return j::call(_method,_params40155,_receiver40153);})());
}

}


}

if(j::truth(([&]()->V{V _logical40156=_v_37197_gone;return !j::truth(_logical40156)?([&]()->V{V _lhs40157=_v_37188_age;V _rhs40158=_v_37189_life;return j::binary(">=",_lhs40157,_rhs40158);})():_logical40156;})())){return V{};
}
if(j::truth(([&]()->V{V _logical40159=j::get(_v_37177_pl,this->_literals[80]);return j::truth(_logical40159)?([&]()->V{V _lhs40160=([&]()->V{V _callee40162=this->_v_36701_hash.get();return j::call(_callee40162,j::Args{_v_37187_seed,_v_37178_m,j::get(_v_37184_wk,this->_literals[140]),V(8.0)});})();V _rhs40161=j::get(_v_37177_pl,this->_literals[80]);return j::binary("<",_lhs40160,_rhs40161);})():_logical40159;})())){return V{};
}
(void)(([&]()->V{V _base40164=_v_37186_p;V _key40165=this->_literals[109];V _assign40163=_v_37188_age;return j::put(_base40164,_key40165,_assign40163);})());
(void)(([&]()->V{V _base40167=_v_37186_p;V _key40168=this->_literals[110];V _assign40166=([&]()->V{V _lhs40169=_v_37188_age;V _rhs40170=_v_37189_life;return V(j::number(_lhs40169)/j::number(_rhs40170));})();return j::put(_base40167,_key40168,_assign40166);})());
if(j::truth(j::unary("!",j::get(_v_37177_pl,this->_literals[67])))){(void)(([&]()->V{V _callee40171=this->_v_37094_place.get();return j::call(_callee40171,j::Args{_v_37177_pl,_v_37194_moved});})());
}
_v_37210_head=([&]()->V{V _callee40172=this->_v_37111_cellAt.get();return j::call(_callee40172,j::Args{_v_37177_pl,j::get(_v_37186_p,this->_literals[48]),j::get(_v_37186_p,this->_literals[49])});})();
_v_37211_ch=(j::truth(j::get(_v_37177_pl,this->_literals[76]))?([&]()->V{V _callee40176=this->_v_37160_glyphOf.get();return j::call(_callee40176,j::Args{([&]()->V{V _receiver40173=_v_37177_pl;V _method40174=this->_literals[76];V _method=j::get(_receiver40173,_method40174);j::Args _params40175=j::Args{_v_37186_p};return j::call(_method,_params40175,_receiver40173);})()});})():(j::truth(([&]()->V{V _logical40177=j::get(_v_37177_pl,this->_literals[103]);return j::truth(_logical40177)?([&]()->V{V _lhs40178=j::get(_v_37184_wk,this->_literals[149]);V _rhs40179=V(0.0);return j::binary(">=",_lhs40178,_rhs40179);})():_logical40177;})())?j::get(j::get(_v_37196_L,this->_literals[36]),j::get(_v_37184_wk,this->_literals[149])):j::get(j::get(_v_37177_pl,this->_literals[74]),([&]()->V{V _receiver40189=j::builtin("Math");V _method40190=this->_literals[158];V _method=j::get(_receiver40189,_method40190);j::Args _params40191=j::Args{([&]()->V{V _lhs40180=j::get(j::get(_v_37177_pl,this->_literals[74]),this->_literals[1]);V _rhs40181=V(1.0);return V(j::number(_lhs40180)-j::number(_rhs40181));})(),([&]()->V{V _number40184=([&]()->V{V _lhs40185=j::get(_v_37186_p,this->_literals[110]);V _rhs40186=j::get(j::get(_v_37177_pl,this->_literals[74]),this->_literals[1]);return V(j::number(_lhs40185)*j::number(_rhs40186));})();return V(std::floor(j::number(_number40184)));})()};return j::call(_method,_params40191,_receiver40189);})())));
_v_37212_color=([&]()->V{V _callee40192=this->_v_37154_tint.get();return j::call(_callee40192,j::Args{_v_37177_pl,_v_37182_fade,j::get(_v_37186_p,this->_literals[110])});})();
_v_37213_now=(j::truth(j::get(_v_37177_pl,this->_literals[67]))?_v_37188_age:_v_37194_moved);
if(j::truth(([&]()->V{V _lhs40193=j::get(_v_37177_pl,this->_literals[89]);V _rhs40194=V(0.0);return j::binary(">",_lhs40193,_rhs40194);})())){
V _v_37214_back;
V _v_37215_hx;
V _v_37216_hy;
V _v_37217_n;
V _v_37218_last;
_v_37214_back=([&]()->V{V _receiver40197=j::builtin("Math");V _method40198=this->_literals[158];V _method=j::get(_receiver40197,_method40198);j::Args _params40199=j::Args{j::get(_v_37177_pl,this->_literals[89]),_v_37213_now};return j::call(_method,_params40199,_receiver40197);})();
_v_37215_hx=j::get(_v_37186_p,this->_literals[48]);
_v_37216_hy=j::get(_v_37186_p,this->_literals[49]);
(void)(([&]()->V{V _callee40202=this->_v_37094_place.get();return j::call(_callee40202,j::Args{_v_37177_pl,([&]()->V{V _lhs40200=_v_37213_now;V _rhs40201=_v_37214_back;return V(j::number(_lhs40200)-j::number(_rhs40201));})()});})());
_v_37217_n=([&]()->V{V _receiver40247=j::builtin("Math");V _method40248=this->_literals[158];V _method=j::get(_receiver40247,_method40248);j::Args _params40249=j::Args{V(64.0),([&]()->V{V _receiver40242=j::builtin("Math");V _method40243=this->_literals[30];V _method=j::get(_receiver40242,_method40243);j::Args _params40244=j::Args{V(1.0),([&]()->V{V _lhs40203=([&]()->V{V _number40222=([&]()->V{V _lhs40223=([&]()->V{V _receiver40237=j::builtin("Math");V _method40238=this->_literals[30];V _method=j::get(_receiver40237,_method40238);j::Args _params40239=j::Args{([&]()->V{V _number40227=([&]()->V{V _lhs40228=j::get(_v_37186_p,this->_literals[48]);V _rhs40229=_v_37215_hx;return V(j::number(_lhs40228)-j::number(_rhs40229));})();return V(std::fabs(j::number(_number40227)));})(),([&]()->V{V _number40232=([&]()->V{V _lhs40233=j::get(_v_37186_p,this->_literals[49]);V _rhs40234=_v_37216_hy;return V(j::number(_lhs40233)-j::number(_rhs40234));})();return V(std::fabs(j::number(_number40232)));})()};return j::call(_method,_params40239,_receiver40237);})();V _rhs40224=V(1.5);return V(j::number(_lhs40223)*j::number(_rhs40224));})();return V(std::ceil(j::number(_number40222)));})();V _rhs40204=V(1.0);return j::binary("+",_lhs40203,_rhs40204);})()};return j::call(_method,_params40244,_receiver40242);})()};return j::call(_method,_params40249,_receiver40247);})();
_v_37218_last=_v_37210_head;
{V _v_37219_j;
_v_37219_j=V(1.0);
for(;j::truth(([&]()->V{V _lhs40250=_v_37219_j;V _rhs40251=_v_37217_n;return j::binary("<=",_lhs40250,_rhs40251);})());(void)(j::increment(_v_37219_j,1,false))){
V _v_37220_u;
V _v_37221_c;
V _v_37222_tc;
V _v_37223_tn;
(void)(([&]()->V{V _callee40258=this->_v_37094_place.get();return j::call(_callee40258,j::Args{_v_37177_pl,([&]()->V{V _lhs40252=_v_37213_now;V _rhs40253=([&]()->V{V _lhs40254=([&]()->V{V _lhs40256=_v_37219_j;V _rhs40257=_v_37217_n;return V(j::number(_lhs40256)/j::number(_rhs40257));})();V _rhs40255=_v_37214_back;return V(j::number(_lhs40254)*j::number(_rhs40255));})();return V(j::number(_lhs40252)-j::number(_rhs40253));})()});})());
_v_37220_u=([&]()->V{V _lhs40259=([&]()->V{V _lhs40261=_v_37219_j;V _rhs40262=_v_37217_n;return V(j::number(_lhs40261)/j::number(_rhs40262));})();V _rhs40260=([&]()->V{V _lhs40263=_v_37214_back;V _rhs40264=j::get(_v_37177_pl,this->_literals[89]);return V(j::number(_lhs40263)/j::number(_rhs40264));})();return V(j::number(_lhs40259)*j::number(_rhs40260));})();
(void)(([&]()->V{V _base40266=_v_37186_p;V _key40267=this->_literals[115];V _assign40265=_v_37220_u;return j::put(_base40266,_key40267,_assign40265);})());
_v_37221_c=([&]()->V{V _callee40268=this->_v_37111_cellAt.get();return j::call(_callee40268,j::Args{_v_37177_pl,j::get(_v_37186_p,this->_literals[48]),j::get(_v_37186_p,this->_literals[49])});})();
if(j::truth(([&]()->V{V _logical40269=([&]()->V{V _logical40270=([&]()->V{V _lhs40271=_v_37221_c;V _rhs40272=V(0.0);return j::binary("<",_lhs40271,_rhs40272);})();return !j::truth(_logical40270)?([&]()->V{V _lhs40273=_v_37221_c;V _rhs40274=_v_37218_last;return V(j::equal(_lhs40273,_rhs40274,true));})():_logical40270;})();return !j::truth(_logical40269)?([&]()->V{V _lhs40275=_v_37221_c;V _rhs40276=_v_37210_head;return V(j::equal(_lhs40275,_rhs40276,true));})():_logical40269;})())){continue;
}
(void)((_v_37218_last=_v_37221_c));
_v_37222_tc=(j::truth(j::get(_v_37177_pl,this->_literals[90]))?j::get(j::get(_v_37177_pl,this->_literals[90]),([&]()->V{V _receiver40287=j::builtin("Math");V _method40288=this->_literals[158];V _method=j::get(_receiver40287,_method40288);j::Args _params40289=j::Args{([&]()->V{V _lhs40278=j::get(j::get(_v_37177_pl,this->_literals[90]),this->_literals[1]);V _rhs40279=V(1.0);return V(j::number(_lhs40278)-j::number(_rhs40279));})(),([&]()->V{V _number40282=([&]()->V{V _lhs40283=_v_37220_u;V _rhs40284=j::get(j::get(_v_37177_pl,this->_literals[90]),this->_literals[1]);return V(j::number(_lhs40283)*j::number(_rhs40284));})();return V(std::floor(j::number(_number40282)));})()};return j::call(_method,_params40289,_receiver40287);})()):(j::truth(j::get(_v_37177_pl,this->_literals[76]))?([&]()->V{V _callee40293=this->_v_37160_glyphOf.get();return j::call(_callee40293,j::Args{([&]()->V{V _receiver40290=_v_37177_pl;V _method40291=this->_literals[76];V _method=j::get(_receiver40290,_method40291);j::Args _params40292=j::Args{_v_37186_p};return j::call(_method,_params40292,_receiver40290);})()});})():([&]()->V{V _receiver40294=(j::truth(([&]()->V{V _lhs40297=_v_37220_u;V _rhs40298=V(0.75);return j::binary("<",_lhs40297,_rhs40298);})())?([&]()->V{V _callee40299=this->_v_36961_streak.get();return j::call(_callee40299,j::Args{_v_37186_p});})():this->_literals[181]);V _method40295=this->_literals[179];V _method=j::get(_receiver40294,_method40295);j::Args _params40296=j::Args{V(0.0)};return j::call(_method,_params40296,_receiver40294);})()));
if(j::truth(([&]()->V{V _logical40300=([&]()->V{V _lhs40301=_v_37222_tc;V _rhs40302=V(32.0);return V(j::equal(_lhs40301,_rhs40302,true));})();return !j::truth(_logical40300)?([&]()->V{V _lhs40303=_v_37222_tc;V _rhs40304=V(0.0);return V(j::equal(_lhs40303,_rhs40304,true));})():_logical40300;})())){continue;
}
_v_37223_tn=j::get(_v_37177_pl,this->_literals[125]);
(void)(([&]()->V{V _receiver40318=_v_37185_s;V _method40319=this->_literals[180];V _method=j::get(_receiver40318,_method40319);j::Args _params40320=j::Args{_v_37221_c,_v_37222_tc,(j::truth(j::unary("!",j::get(_v_37184_wk,this->_literals[141])))?this->_v_36692_NONE.get():(j::truth(_v_37223_tn)?j::get(_v_37223_tn,([&]()->V{V _receiver40314=j::builtin("Math");V _method40315=this->_literals[158];V _method=j::get(_receiver40314,_method40315);j::Args _params40316=j::Args{([&]()->V{V _lhs40305=j::get(_v_37223_tn,this->_literals[1]);V _rhs40306=V(1.0);return V(j::number(_lhs40305)-j::number(_rhs40306));})(),([&]()->V{V _number40309=([&]()->V{V _lhs40310=_v_37220_u;V _rhs40311=j::get(_v_37223_tn,this->_literals[1]);return V(j::number(_lhs40310)*j::number(_rhs40311));})();return V(std::floor(j::number(_number40309)));})()};return j::call(_method,_params40316,_receiver40314);})()):(j::truth(j::get(_v_37177_pl,this->_literals[17]))?([&]()->V{V _callee40317=this->_v_37154_tint.get();return j::call(_callee40317,j::Args{_v_37177_pl,_v_37182_fade,j::get(_v_37186_p,this->_literals[110])});})():_v_37212_color)))};return j::call(_method,_params40320,_receiver40318);})());

}
}
(void)(([&]()->V{V _base40322=_v_37186_p;V _key40323=this->_literals[115];V _assign40321=V(0.0);return j::put(_base40322,_key40323,_assign40321);})());
(void)(([&]()->V{V _callee40324=this->_v_37094_place.get();return j::call(_callee40324,j::Args{_v_37177_pl,_v_37213_now});})());

}

if(j::truth(([&]()->V{V _logical40325=([&]()->V{V _logical40326=([&]()->V{V _lhs40327=_v_37210_head;V _rhs40328=V(0.0);return j::binary(">=",_lhs40327,_rhs40328);})();return j::truth(_logical40326)?([&]()->V{V _lhs40329=_v_37211_ch;V _rhs40330=V(32.0);return V(!j::equal(_lhs40329,_rhs40330,true));})():_logical40326;})();return j::truth(_logical40325)?([&]()->V{V _lhs40331=_v_37211_ch;V _rhs40332=V(0.0);return V(!j::equal(_lhs40331,_rhs40332,true));})():_logical40325;})())){(void)(([&]()->V{V _callee40333=this->_v_37165_pushHead.get();return j::call(_callee40333,j::Args{_v_37177_pl,_v_37210_head,_v_37211_ch,_v_37212_color});})());
}

}

return V{};
},6);
this->_v_37224_rising.get()=j::function([=](const j::Args &_args_fn37225,const V &_receiver_fn37225,const V &_self_fn37225) mutable ->V{
V _v_37226_pl;
V _v_37227_nm;
V _v_37228_tb;
V _v_37229_x;
V _v_37230_y;
V _v_37231_fade;
_v_37226_pl=_args_fn37225[0];
_v_37227_nm=_args_fn37225[1];
_v_37228_tb=_args_fn37225[2];
_v_37229_x=_args_fn37225[3];
_v_37230_y=_args_fn37225[4];
_v_37231_fade=_args_fn37225[5];
{
V _v_37232_wk;
V _v_37233_b;
V _v_37234_q;
V _v_37235_bottom;
V _v_37236_lean;
V _v_37237_color;
V _v_37238_tick;
_v_37232_wk=j::get(_v_37226_pl,this->_literals[127]);
_v_37233_b=j::get(_v_37226_pl,this->_literals[58]);
_v_37234_q=([&]()->V{V _lhs40334=V(1.0);V _rhs40335=([&]()->V{V _lhs40336=([&]()->V{V _lhs40338=_v_37228_tb;V _rhs40339=j::get(_v_37232_wk,this->_literals[113]);return V(j::number(_lhs40338)-j::number(_rhs40339));})();V _rhs40337=j::get(_v_37233_b,this->_literals[63]);return V(j::number(_lhs40336)/j::number(_rhs40337));})();return V(j::number(_lhs40334)-j::number(_rhs40335));})();
if(j::truth(([&]()->V{V _lhs40340=_v_37234_q;V _rhs40341=V(0.0);return j::binary("<",_lhs40340,_rhs40341);})())){return V{};
}
_v_37235_bottom=([&]()->V{V _lhs40342=j::get(_v_37232_wk,this->_literals[133]);V _rhs40343=j::get(_v_37232_wk,this->_literals[129]);return V(j::number(_lhs40342)/j::number(_rhs40343));})();
_v_37236_lean=([&]()->V{V _lhs40344=([&]()->V{V _lhs40346=([&]()->V{V _callee40348=this->_v_36701_hash.get();return j::call(_callee40348,j::Args{j::get(_v_37226_pl,this->_literals[93]),_v_37227_nm,V(14.0)});})();V _rhs40347=V(0.5);return V(j::number(_lhs40346)-j::number(_rhs40347));})();V _rhs40345=V(4.0);return V(j::number(_lhs40344)*j::number(_rhs40345));})();
_v_37237_color=(j::truth(([&]()->V{V _logical40349=j::get(_v_37232_wk,this->_literals[141]);return j::truth(_logical40349)?([&]()->V{V _chain40350=_v_37226_pl;V _chain40351=j::get(_chain40350,this->_literals[124]);if(j::nullish(_chain40351))return V{};V _chain40352=j::get(_chain40351,this->_literals[1]);return _chain40352;})():_logical40349;})())?j::get(j::get(j::get(_v_37226_pl,this->_literals[124]),_v_37231_fade),V(0.0)):this->_v_36692_NONE.get());
_v_37238_tick=([&]()->V{V _number40355=([&]()->V{V _lhs40356=_v_37234_q;V _rhs40357=V(24.0);return V(j::number(_lhs40356)*j::number(_rhs40357));})();return V(std::floor(j::number(_number40355)));})();
{V _v_37239_j;
_v_37239_j=V(3.0);
for(;j::truth(([&]()->V{V _lhs40358=_v_37239_j;V _rhs40359=V(0.0);return j::binary(">=",_lhs40358,_rhs40359);})());(void)(j::increment(_v_37239_j,-1,false))){
V _v_37240_qq;
V _v_37241_d;
V _v_37242_c;
if(j::truth(([&]()->V{V _logical40360=_v_37239_j;return j::truth(_logical40360)?([&]()->V{V _lhs40361=([&]()->V{V _callee40363=this->_v_36701_hash.get();return j::call(_callee40363,j::Args{j::get(_v_37226_pl,this->_literals[93]),_v_37227_nm,_v_37239_j,_v_37238_tick});})();V _rhs40362=V(0.3);return j::binary("<",_lhs40361,_rhs40362);})():_logical40360;})())){continue;
}
_v_37240_qq=([&]()->V{V _receiver40370=j::builtin("Math");V _method40371=this->_literals[30];V _method=j::get(_receiver40370,_method40371);j::Args _params40372=j::Args{V(0.0),([&]()->V{V _lhs40364=_v_37234_q;V _rhs40365=([&]()->V{V _lhs40366=_v_37239_j;V _rhs40367=V(0.05);return V(j::number(_lhs40366)*j::number(_rhs40367));})();return V(j::number(_lhs40364)-j::number(_rhs40365));})()};return j::call(_method,_params40372,_receiver40370);})();
_v_37241_d=([&]()->V{V _lhs40373=([&]()->V{V _lhs40375=V(1.0);V _rhs40376=_v_37240_qq;return V(j::number(_lhs40375)-j::number(_rhs40376));})();V _rhs40374=([&]()->V{V _lhs40377=V(1.0);V _rhs40378=_v_37240_qq;return V(j::number(_lhs40377)-j::number(_rhs40378));})();return V(j::number(_lhs40373)*j::number(_rhs40374));})();
_v_37242_c=([&]()->V{V _callee40389=this->_v_37111_cellAt.get();return j::call(_callee40389,j::Args{_v_37226_pl,([&]()->V{V _lhs40379=_v_37229_x;V _rhs40380=([&]()->V{V _lhs40381=_v_37236_lean;V _rhs40382=_v_37241_d;return V(j::number(_lhs40381)*j::number(_rhs40382));})();return j::binary("+",_lhs40379,_rhs40380);})(),([&]()->V{V _lhs40383=_v_37230_y;V _rhs40384=([&]()->V{V _lhs40385=([&]()->V{V _lhs40387=_v_37235_bottom;V _rhs40388=_v_37230_y;return V(j::number(_lhs40387)-j::number(_rhs40388));})();V _rhs40386=_v_37241_d;return V(j::number(_lhs40385)*j::number(_rhs40386));})();return j::binary("+",_lhs40383,_rhs40384);})()});})();
if(j::truth(([&]()->V{V _lhs40390=_v_37242_c;V _rhs40391=V(0.0);return j::binary(">=",_lhs40390,_rhs40391);})())){(void)(([&]()->V{V _receiver40396=j::get(_v_37232_wk,this->_literals[128]);V _method40397=this->_literals[180];V _method=j::get(_receiver40396,_method40397);j::Args _params40398=j::Args{_v_37242_c,(j::truth(([&]()->V{V _lhs40392=_v_37239_j;V _rhs40393=V(0.0);return V(j::equal(_lhs40392,_rhs40393,true));})())?V(124.0):(j::truth(([&]()->V{V _lhs40394=_v_37239_j;V _rhs40395=V(1.0);return j::binary(">",_lhs40394,_rhs40395);})())?V(46.0):V(58.0))),_v_37237_color};return j::call(_method,_params40398,_receiver40396);})());
}

}
}

}

return V{};
},6);
this->_v_37243_drawPlan.get()=j::function([=](const j::Args &_args_fn37244,const V &_receiver_fn37244,const V &_self_fn37244) mutable ->V{
V _v_37245_s;
V _v_37246_pl;
V _v_37247_t;
V _v_37248_period;
V _v_37249_box;
_v_37245_s=_args_fn37244[0];
_v_37246_pl=_args_fn37244[1];
_v_37247_t=_args_fn37244[2];
_v_37248_period=_args_fn37244[3];
_v_37249_box=_args_fn37244[4];
{
V _v_37250_wk;
V _v_37251_seed;
V _v_37252_A;
V _v_37254_slots;
V _v_37255_reach;
V _v_37256_L;
V _v_37282_h;
_v_37250_wk=j::get(_v_37246_pl,this->_literals[127]);
_v_37251_seed=j::get(_v_37246_pl,this->_literals[93]);
_v_37252_A=j::get(_v_37245_s,this->_literals[182]);
(void)(([&]()->V{V _base40400=_v_37250_wk;V _key40401=this->_literals[128];V _assign40399=_v_37245_s;return j::put(_base40400,_key40401,_assign40399);})());
(void)(([&]()->V{V _base40403=_v_37250_wk;V _key40404=this->_literals[113];V _assign40402=_v_37247_t;return j::put(_base40403,_key40404,_assign40402);})());
(void)(([&]()->V{V _base40406=_v_37250_wk;V _key40407=this->_literals[129];V _assign40405=_v_37252_A;return j::put(_base40406,_key40407,_assign40405);})());
(void)(([&]()->V{V _base40409=_v_37250_wk;V _key40410=this->_literals[130];V _assign40408=j::get(_v_37249_box,this->_literals[116]);return j::put(_base40409,_key40410,_assign40408);})());
(void)(([&]()->V{V _base40412=_v_37250_wk;V _key40413=this->_literals[131];V _assign40411=j::get(_v_37249_box,this->_literals[159]);return j::put(_base40412,_key40413,_assign40411);})());
(void)(([&]()->V{V _base40415=_v_37250_wk;V _key40416=this->_literals[132];V _assign40414=([&]()->V{V _lhs40417=j::get(_v_37249_box,this->_literals[117]);V _rhs40418=_v_37252_A;return V(j::number(_lhs40417)*j::number(_rhs40418));})();return j::put(_base40415,_key40416,_assign40414);})());
(void)(([&]()->V{V _base40420=_v_37250_wk;V _key40421=this->_literals[133];V _assign40419=([&]()->V{V _lhs40422=(j::truth(([&]()->V{V _lhs40424=j::get(_v_37246_pl,this->_literals[87]);V _rhs40425=V::null();return V(!j::equal(_lhs40424,_rhs40425,true));})())?([&]()->V{V _receiver40428=j::builtin("Math");V _method40429=this->_literals[158];V _method=j::get(_receiver40428,_method40429);j::Args _params40430=j::Args{j::get(_v_37246_pl,this->_literals[87]),j::get(_v_37249_box,this->_literals[157])};return j::call(_method,_params40430,_receiver40428);})():j::get(_v_37249_box,this->_literals[157]));V _rhs40423=_v_37252_A;return V(j::number(_lhs40422)*j::number(_rhs40423));})();return j::put(_base40420,_key40421,_assign40419);})());
(void)(([&]()->V{V _base40432=_v_37250_wk;V _key40433=this->_literals[134];V _assign40431=([&]()->V{V _number40434=j::get(_v_37249_box,this->_literals[116]);return V(std::floor(j::number(_number40434)));})();return j::put(_base40432,_key40433,_assign40431);})());
(void)(([&]()->V{V _base40436=_v_37250_wk;V _key40437=this->_literals[135];V _assign40435=([&]()->V{V _number40438=j::get(_v_37249_box,this->_literals[159]);return V(std::ceil(j::number(_number40438)));})();return j::put(_base40436,_key40437,_assign40435);})());
(void)(([&]()->V{V _base40440=_v_37250_wk;V _key40441=this->_literals[136];V _assign40439=([&]()->V{V _number40442=j::get(_v_37249_box,this->_literals[117]);return V(std::floor(j::number(_number40442)));})();return j::put(_base40440,_key40441,_assign40439);})());
(void)(([&]()->V{V _base40444=_v_37250_wk;V _key40445=this->_literals[137];V _assign40443=([&]()->V{V _number40446=j::get(_v_37249_box,this->_literals[157]);return V(std::ceil(j::number(_number40446)));})();return j::put(_base40444,_key40445,_assign40443);})());
(void)(([&]()->V{V _base40448=_v_37250_wk;V _key40449=this->_literals[142];V _assign40447=(j::truth(([&]()->V{V _lhs40450=j::get(_v_37246_pl,this->_literals[87]);V _rhs40451=V::null();return V(!j::equal(_lhs40450,_rhs40451,true));})())?([&]()->V{V _lhs40452=j::get(_v_37246_pl,this->_literals[99]);V _rhs40453=this->_literals[86];return V(!j::equal(_lhs40452,_rhs40453,true));})():([&]()->V{V _lhs40454=j::get(_v_37246_pl,this->_literals[99]);V _rhs40455=this->_literals[82];return V(j::equal(_lhs40454,_rhs40455,true));})());return j::put(_base40448,_key40449,_assign40447);})());
(void)(([&]()->V{V _base40457=_v_37250_wk;V _key40458=this->_literals[141];V _assign40456=([&]()->V{V _logical40459=([&]()->V{V _logical40460=j::unary("!",j::get(_v_37245_s,this->_literals[12]));return j::truth(_logical40460)?j::unary("!",j::unary("!",j::get(_v_37245_s,this->_literals[14]))):_logical40460;})();return j::truth(_logical40459)?([&]()->V{V _logical40461=([&]()->V{V _logical40462=([&]()->V{V _lhs40463=j::get(j::get(_v_37246_pl,this->_literals[97]),this->_literals[1]);V _rhs40464=V(0.0);return j::binary(">",_lhs40463,_rhs40464);})();return !j::truth(_logical40462)?([&]()->V{V _lhs40465=j::get(_v_37246_pl,this->_literals[17]);V _rhs40466=V::null();return V(!j::equal(_lhs40465,_rhs40466,true));})():_logical40462;})();return !j::truth(_logical40461)?([&]()->V{V _lhs40467=j::get(_v_37246_pl,this->_literals[102]);V _rhs40468=V::null();return V(!j::equal(_lhs40467,_rhs40468,true));})():_logical40461;})():_logical40459;})();return j::put(_base40457,_key40458,_assign40456);})());
if(j::truth(j::get(_v_37250_wk,this->_literals[141]))){
V _v_37253_inks;
_v_37253_inks=([&]()->V{V _callee40469=this->_v_37139_inksOf.get();return j::call(_callee40469,j::Args{_v_37246_pl,_v_37245_s});})();
(void)(([&]()->V{V _base40471=_v_37246_pl;V _key40472=this->_literals[124];V _assign40470=(j::truth(j::get(_v_37245_s,this->_literals[16]))?j::get(_v_37253_inks,this->_literals[16]):j::get(_v_37253_inks,this->_literals[9]));return j::put(_base40471,_key40472,_assign40470);})());
(void)(([&]()->V{V _base40474=_v_37246_pl;V _key40475=this->_literals[125];V _assign40473=(j::truth(j::get(_v_37245_s,this->_literals[16]))?j::get(_v_37253_inks,this->_literals[176]):j::get(_v_37253_inks,this->_literals[177]));return j::put(_base40474,_key40475,_assign40473);})());

}

_v_37254_slots=(j::truth(_v_37248_period)?([&]()->V{V _receiver40483=j::builtin("Math");V _method40484=this->_literals[30];V _method=j::get(_receiver40483,_method40484);j::Args _params40485=j::Args{V(1.0),([&]()->V{V _number40478=([&]()->V{V _lhs40479=_v_37248_period;V _rhs40480=V(10.0);return V(j::number(_lhs40479)*j::number(_rhs40480));})();return V(std::floor(j::number(_number40478)+.5));})()};return j::call(_method,_params40485,_receiver40483);})():V(0.0));
(void)(([&]()->V{V _base40487=_v_37250_wk;V _key40488=this->_literals[140];V _assign40486=(j::truth(_v_37254_slots)?([&]()->V{V _callee40498=this->_v_36724_mod.get();return j::call(_callee40498,j::Args{([&]()->V{V _number40493=([&]()->V{V _lhs40494=([&]()->V{V _lhs40496=_v_37247_t;V _rhs40497=_v_37248_period;return V(j::number(_lhs40496)/j::number(_rhs40497));})();V _rhs40495=_v_37254_slots;return V(j::number(_lhs40494)*j::number(_rhs40495));})();return V(std::floor(j::number(_number40493)));})(),_v_37254_slots});})():([&]()->V{V _number40501=([&]()->V{V _lhs40502=_v_37247_t;V _rhs40503=V(10.0);return V(j::number(_lhs40502)*j::number(_rhs40503));})();return V(std::floor(j::number(_number40501)));})());return j::put(_base40487,_key40488,_assign40486);})());
(void)(([&]()->V{V _callee40504=this->_v_36878_fit.get();return j::call(_callee40504,j::Args{_v_37246_pl,_v_37249_box,_v_37252_A});})());
_v_37255_reach=([&]()->V{V _callee40505=this->_v_36875_reachOf.get();return j::call(_callee40505,j::Args{_v_37246_pl});})();
if(j::truth(([&]()->V{V _logical40506=([&]()->V{V _logical40507=_v_37248_period;return !j::truth(_logical40507)?j::get(_v_37246_pl,this->_literals[105]):_logical40507;})();return !j::truth(_logical40506)?j::get(_v_37246_pl,this->_literals[106]):_logical40506;})())){(void)(([&]()->V{V _callee40508=this->_v_36893_checkAlive.get();return j::call(_callee40508,j::Args{_v_37246_pl,_v_37248_period});})());
}
(void)(([&]()->V{V _base40510=_v_37250_wk;V _key40511=this->_literals[143];V _assign40509=(j::truth(_v_37248_period)?([&]()->V{V _lhs40512=_v_37248_period;V _rhs40513=([&]()->V{V _receiver40521=j::builtin("Math");V _method40522=this->_literals[30];V _method=j::get(_receiver40521,_method40522);j::Args _params40523=j::Args{V(1.0),([&]()->V{V _number40516=([&]()->V{V _lhs40517=_v_37248_period;V _rhs40518=this->_v_36716_GUST.get();return V(j::number(_lhs40517)/j::number(_rhs40518));})();return V(std::floor(j::number(_number40516)+.5));})()};return j::call(_method,_params40523,_receiver40521);})();return V(j::number(_lhs40512)/j::number(_rhs40513));})():this->_v_36716_GUST.get());return j::put(_base40510,_key40511,_assign40509);})());
if(j::truth(j::get(_v_37246_pl,this->_literals[95]))){(void)(([&]()->V{V _callee40532=this->_v_36973_addWind.get();return j::call(_callee40532,j::Args{_v_37246_pl,([&]()->V{V _lhs40524=([&]()->V{V _lhs40526=([&]()->V{V _lhs40528=_v_37247_t;V _rhs40529=_v_37255_reach;return V(j::number(_lhs40528)-j::number(_rhs40529));})();V _rhs40527=V(1.0);return V(j::number(_lhs40526)-j::number(_rhs40527));})();V _rhs40525=(j::truth(j::get(_v_37246_pl,this->_literals[57]))?([&]()->V{V _lhs40530=V(1.0);V _rhs40531=j::get(_v_37246_pl,this->_literals[57]);return V(j::number(_lhs40530)/j::number(_rhs40531));})():V(0.0));return V(j::number(_lhs40524)-j::number(_rhs40525));})(),_v_37247_t});})());
}
(void)(([&]()->V{V _base40534=j::get(_v_37246_pl,this->_literals[119]);V _key40535=this->_literals[122];V _assign40533=V(0.0);return j::put(_base40534,_key40535,_assign40533);})());
_v_37256_L=(j::truth(([&]()->V{V _lhs40536=this->_literals[44];V _rhs40537=j::get(_v_37246_pl,this->_literals[56]);return j::binary("in",_lhs40536,_rhs40537);})())?j::get(j::get(_v_37246_pl,this->_literals[56]),this->_literals[44]):V::null());
if(j::truth(_v_37256_L)){
(void)(([&]()->V{V _base40539=_v_37250_wk;V _key40540=this->_literals[138];V _assign40538=([&]()->V{V _number40549=([&]()->V{V _lhs40550=j::get(_v_37249_box,this->_literals[116]);V _rhs40551=([&]()->V{V _lhs40552=j::get(j::get(this->_v_36720_SPOT.get(),j::get(_v_37256_L,this->_literals[32])),V(0.0));V _rhs40553=([&]()->V{V _lhs40554=([&]()->V{V _lhs40556=j::get(_v_37249_box,this->_literals[159]);V _rhs40557=j::get(_v_37249_box,this->_literals[116]);return V(j::number(_lhs40556)-j::number(_rhs40557));})();V _rhs40555=j::get(_v_37256_L,this->_literals[29]);return V(j::number(_lhs40554)-j::number(_rhs40555));})();return V(j::number(_lhs40552)*j::number(_rhs40553));})();return j::binary("+",_lhs40550,_rhs40551);})();return V(std::floor(j::number(_number40549)));})();return j::put(_base40539,_key40540,_assign40538);})());
(void)(([&]()->V{V _base40559=_v_37250_wk;V _key40560=this->_literals[139];V _assign40558=([&]()->V{V _number40569=([&]()->V{V _lhs40570=j::get(_v_37249_box,this->_literals[117]);V _rhs40571=([&]()->V{V _lhs40572=j::get(j::get(this->_v_36720_SPOT.get(),j::get(_v_37256_L,this->_literals[32])),V(1.0));V _rhs40573=([&]()->V{V _lhs40574=([&]()->V{V _lhs40576=j::get(_v_37249_box,this->_literals[157]);V _rhs40577=j::get(_v_37249_box,this->_literals[117]);return V(j::number(_lhs40576)-j::number(_rhs40577));})();V _rhs40575=j::get(_v_37256_L,this->_literals[31]);return V(j::number(_lhs40574)-j::number(_rhs40575));})();return V(j::number(_lhs40572)*j::number(_rhs40573));})();return j::binary("+",_lhs40570,_rhs40571);})();return V(std::floor(j::number(_number40569)));})();return j::put(_base40559,_key40560,_assign40558);})());

}

if(j::truth(j::get(_v_37246_pl,this->_literals[58]))){
V _v_37257_b;
V _v_37258_every;
V _v_37259_M;
V _v_37260_once;
V _v_37261_n0;
V _v_37262_n1;
_v_37257_b=j::get(_v_37246_pl,this->_literals[58]);
_v_37258_every=j::get(_v_37257_b,this->_literals[7]);
_v_37259_M=V(0.0);
if(j::truth(_v_37248_period)){(void)(((_v_37259_M=([&]()->V{V _receiver40590=j::builtin("Math");V _method40591=this->_literals[30];V _method=j::get(_receiver40590,_method40591);j::Args _params40592=j::Args{V(1.0),([&]()->V{V _number40583=([&]()->V{V _lhs40584=_v_37248_period;V _rhs40585=(j::truth(([&]()->V{V _lhs40586=_v_37258_every;V _rhs40587=j::builtin("Infinity");return V(j::equal(_lhs40586,_rhs40587,true));})())?_v_37248_period:_v_37258_every);return V(j::number(_lhs40584)/j::number(_rhs40585));})();return V(std::floor(j::number(_number40583)+.5));})()};return j::call(_method,_params40592,_receiver40590);})()),(_v_37258_every=([&]()->V{V _lhs40594=_v_37248_period;V _rhs40595=_v_37259_M;return V(j::number(_lhs40594)/j::number(_rhs40595));})())));
}
_v_37260_once=([&]()->V{V _lhs40596=_v_37258_every;V _rhs40597=j::builtin("Infinity");return V(j::equal(_lhs40596,_rhs40597,true));})();
_v_37261_n0=(j::truth(_v_37260_once)?V(0.0):([&]()->V{V _number40604=([&]()->V{V _lhs40605=([&]()->V{V _lhs40607=([&]()->V{V _lhs40609=_v_37247_t;V _rhs40610=_v_37255_reach;return V(j::number(_lhs40609)-j::number(_rhs40610));})();V _rhs40608=j::get(_v_37257_b,this->_literals[62]);return V(j::number(_lhs40607)-j::number(_rhs40608));})();V _rhs40606=_v_37258_every;return V(j::number(_lhs40605)/j::number(_rhs40606));})();return V(std::floor(j::number(_number40604)));})());
_v_37262_n1=(j::truth(_v_37260_once)?V(0.0):([&]()->V{V _number40617=([&]()->V{V _lhs40618=([&]()->V{V _lhs40620=([&]()->V{V _lhs40622=_v_37247_t;V _rhs40623=j::get(_v_37257_b,this->_literals[63]);return j::binary("+",_lhs40622,_rhs40623);})();V _rhs40621=j::get(_v_37257_b,this->_literals[62]);return V(j::number(_lhs40620)-j::number(_rhs40621));})();V _rhs40619=_v_37258_every;return V(j::number(_lhs40618)/j::number(_rhs40619));})();return V(std::floor(j::number(_number40617)));})());
{V _v_37263_n;
_v_37263_n=_v_37261_n0;
for(;j::truth(([&]()->V{V _lhs40624=_v_37263_n;V _rhs40625=_v_37262_n1;return j::binary("<=",_lhs40624,_rhs40625);})());(void)(j::increment(_v_37263_n,1,false))){
V _v_37264_tb;
V _v_37265_nm;
V _v_37266_fade;
V _v_37267_x0;
V _v_37268_y0;
V _v_37269_letters;
V _v_37270_away;
_v_37264_tb=([&]()->V{V _lhs40626=j::get(_v_37257_b,this->_literals[62]);V _rhs40627=(j::truth(_v_37260_once)?V(0.0):([&]()->V{V _lhs40628=_v_37263_n;V _rhs40629=_v_37258_every;return V(j::number(_lhs40628)*j::number(_rhs40629));})());return j::binary("+",_lhs40626,_rhs40627);})();
if(j::truth(([&]()->V{V _lhs40630=_v_37264_tb;V _rhs40631=j::get(_v_37246_pl,this->_literals[92]);return j::binary("<",_lhs40630,_rhs40631);})())){continue;
}
_v_37265_nm=(j::truth(_v_37259_M)?([&]()->V{V _callee40632=this->_v_36724_mod.get();return j::call(_callee40632,j::Args{_v_37263_n,_v_37259_M});})():_v_37263_n);
_v_37266_fade=(j::truth(j::get(j::get(_v_37246_pl,this->_literals[97]),this->_literals[1]))?([&]()->V{V _callee40633=this->_v_36724_mod.get();return j::call(_callee40633,j::Args{_v_37265_nm,j::get(j::get(_v_37246_pl,this->_literals[97]),this->_literals[1])});})():V(0.0));
(void)(([&]()->V{V _callee40636=this->_v_37119_birthplace.get();return j::call(_callee40636,j::Args{_v_37246_pl,([&]()->V{V _callee40634=this->_v_36701_hash.get();return j::call(_callee40634,j::Args{_v_37251_seed,_v_37265_nm,V(11.0)});})(),([&]()->V{V _callee40635=this->_v_36701_hash.get();return j::call(_callee40635,j::Args{_v_37251_seed,_v_37265_nm,V(12.0)});})(),_v_37264_tb,_v_37249_box});})());
_v_37267_x0=j::get(j::get(_v_37250_wk,this->_literals[54]),V(0.0));
_v_37268_y0=j::get(j::get(_v_37250_wk,this->_literals[54]),V(1.0));
if(j::truth(([&]()->V{V _lhs40637=_v_37264_tb;V _rhs40638=_v_37247_t;return j::binary(">",_lhs40637,_rhs40638);})())){
(void)(([&]()->V{V _callee40639=this->_v_37224_rising.get();return j::call(_callee40639,j::Args{_v_37246_pl,_v_37265_nm,_v_37264_tb,_v_37267_x0,_v_37268_y0,_v_37266_fade});})());
continue;

}

_v_37269_letters=(j::truth(_v_37256_L)?j::get(j::get(_v_37256_L,this->_literals[36]),this->_literals[1]):V(0.0));
_v_37270_away=([&]()->V{V _logical40640=([&]()->V{V _logical40641=j::unary("!",j::unary("!",_v_37256_L));return j::truth(_logical40641)?([&]()->V{V _lhs40642=j::get(j::get(_v_37246_pl,this->_literals[53]),V(0.0));V _rhs40643=V(0.0);return V(j::equal(_lhs40642,_rhs40643,true));})():_logical40641;})();return j::truth(_logical40640)?([&]()->V{V _lhs40644=j::get(j::get(_v_37246_pl,this->_literals[53]),V(1.0));V _rhs40645=this->_v_36697_TAU.get();return V(j::equal(_lhs40644,_rhs40645,true));})():_logical40640;})();
{V _v_37271_j;
_v_37271_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs40646=_v_37271_j;V _rhs40647=j::get(_v_37257_b,this->_literals[60]);return j::binary("<",_lhs40646,_rhs40647);})());(void)(j::increment(_v_37271_j,1,false))){
V _v_37272_m;
V _v_37273_even;
_v_37272_m=([&]()->V{V _lhs40648=([&]()->V{V _lhs40650=_v_37265_nm;V _rhs40651=j::get(_v_37257_b,this->_literals[60]);return V(j::number(_lhs40650)*j::number(_rhs40651));})();V _rhs40649=_v_37271_j;return j::binary("+",_lhs40648,_rhs40649);})();
_v_37273_even=([&]()->V{V _lhs40652=([&]()->V{V _lhs40654=([&]()->V{V _lhs40656=_v_37271_j;V _rhs40657=V(0.5);return j::binary("+",_lhs40656,_rhs40657);})();V _rhs40655=([&]()->V{V _lhs40658=([&]()->V{V _lhs40660=([&]()->V{V _callee40662=this->_v_36701_hash.get();return j::call(_callee40662,j::Args{_v_37251_seed,_v_37272_m,V(5.0)});})();V _rhs40661=V(0.5);return V(j::number(_lhs40660)-j::number(_rhs40661));})();V _rhs40659=V(0.8);return V(j::number(_lhs40658)*j::number(_rhs40659));})();return j::binary("+",_lhs40654,_rhs40655);})();V _rhs40653=j::get(_v_37257_b,this->_literals[60]);return V(j::number(_lhs40652)/j::number(_rhs40653));})();
if(j::truth(j::unary("!",j::get(_v_37257_b,this->_literals[64])))){(void)(([&]()->V{V _callee40663=this->_v_37175_particle.get();return j::call(_callee40663,j::Args{_v_37246_pl,_v_37272_m,_v_37264_tb,_v_37267_x0,_v_37268_y0,_v_37266_fade,_v_37273_even});})());
}else {
(void)(([&]()->V{V _callee40685=this->_v_37119_birthplace.get();return j::call(_callee40685,j::Args{_v_37246_pl,(j::truth(_v_37256_L)?([&]()->V{V _lhs40664=([&]()->V{V _lhs40666=([&]()->V{V _lhs40668=([&]()->V{V _number40676=([&]()->V{V _lhs40677=([&]()->V{V _lhs40679=([&]()->V{V _lhs40681=_v_37271_j;V _rhs40682=V(0.5);return j::binary("+",_lhs40681,_rhs40682);})();V _rhs40680=_v_37269_letters;return V(j::number(_lhs40679)*j::number(_rhs40680));})();V _rhs40678=j::get(_v_37257_b,this->_literals[60]);return V(j::number(_lhs40677)/j::number(_rhs40678));})();return V(std::floor(j::number(_number40676)));})();V _rhs40669=_v_37269_letters;return V(std::fmod(j::number(_lhs40668),j::number(_rhs40669)));})();V _rhs40667=V(0.5);return j::binary("+",_lhs40666,_rhs40667);})();V _rhs40665=_v_37269_letters;return V(j::number(_lhs40664)/j::number(_rhs40665));})():([&]()->V{V _callee40683=this->_v_36701_hash.get();return j::call(_callee40683,j::Args{_v_37251_seed,_v_37272_m,V(1.0)});})()),([&]()->V{V _callee40684=this->_v_36701_hash.get();return j::call(_callee40684,j::Args{_v_37251_seed,_v_37272_m,V(2.0)});})(),_v_37264_tb,_v_37249_box});})());
if(j::truth(_v_37256_L)){
V _v_37274_i;
_v_37274_i=j::get(_v_37250_wk,this->_literals[149]);
(void)((_v_37273_even=(j::truth(_v_37270_away)?([&]()->V{V _callee40726=this->_v_36724_mod.get();return j::call(_callee40726,j::Args{([&]()->V{V _lhs40687=([&]()->V{V _lhs40689=([&]()->V{V _number40705=([&]()->V{V _lhs40707=([&]()->V{V _lhs40709=([&]()->V{V _lhs40711=j::get(j::get(_v_37256_L,this->_literals[35]),_v_37274_i);V _rhs40712=V(0.5);return j::binary("+",_lhs40711,_rhs40712);})();V _rhs40710=([&]()->V{V _lhs40713=j::get(_v_37256_L,this->_literals[31]);V _rhs40714=V(2.0);return V(j::number(_lhs40713)/j::number(_rhs40714));})();return V(j::number(_lhs40709)-j::number(_rhs40710));})();V _rhs40708=_v_37252_A;return V(j::number(_lhs40707)*j::number(_rhs40708));})();V _number40706=([&]()->V{V _lhs40715=([&]()->V{V _lhs40717=j::get(j::get(_v_37256_L,this->_literals[34]),_v_37274_i);V _rhs40718=V(0.5);return j::binary("+",_lhs40717,_rhs40718);})();V _rhs40716=([&]()->V{V _lhs40719=j::get(_v_37256_L,this->_literals[29]);V _rhs40720=V(2.0);return V(j::number(_lhs40719)/j::number(_rhs40720));})();return V(j::number(_lhs40715)-j::number(_rhs40716));})();return V(std::atan2(j::number(_number40705),j::number(_number40706)));})();V _rhs40690=this->_v_36697_TAU.get();return V(j::number(_lhs40689)/j::number(_rhs40690));})();V _rhs40688=([&]()->V{V _lhs40721=([&]()->V{V _lhs40723=([&]()->V{V _callee40725=this->_v_36701_hash.get();return j::call(_callee40725,j::Args{_v_37251_seed,_v_37272_m,V(5.0)});})();V _rhs40724=V(0.5);return V(j::number(_lhs40723)-j::number(_rhs40724));})();V _rhs40722=V(0.05);return V(j::number(_lhs40721)*j::number(_rhs40722));})();return j::binary("+",_lhs40687,_rhs40688);})(),V(1.0)});})():j::unary("-",V(1.0)))));

}

(void)(([&]()->V{V _callee40727=this->_v_37175_particle.get();return j::call(_callee40727,j::Args{_v_37246_pl,_v_37272_m,_v_37264_tb,j::get(j::get(_v_37250_wk,this->_literals[54]),V(0.0)),j::get(j::get(_v_37250_wk,this->_literals[54]),V(1.0)),_v_37266_fade,_v_37273_even});})());

}


}
}

}
}

}
else {
V _v_37275_r;
V _v_37276_N;
V _v_37277_i0;
V _v_37278_i1;
_v_37275_r=j::get(_v_37246_pl,this->_literals[57]);
_v_37276_N=V(0.0);
if(j::truth(_v_37248_period)){(void)(((_v_37276_N=([&]()->V{V _receiver40736=j::builtin("Math");V _method40737=this->_literals[30];V _method=j::get(_receiver40736,_method40737);j::Args _params40738=j::Args{V(1.0),([&]()->V{V _number40731=([&]()->V{V _lhs40732=_v_37275_r;V _rhs40733=_v_37248_period;return V(j::number(_lhs40732)*j::number(_rhs40733));})();return V(std::floor(j::number(_number40731)+.5));})()};return j::call(_method,_params40738,_receiver40736);})()),(_v_37275_r=([&]()->V{V _lhs40740=_v_37276_N;V _rhs40741=_v_37248_period;return V(j::number(_lhs40740)/j::number(_rhs40741));})())));
}
_v_37277_i0=([&]()->V{V _lhs40742=([&]()->V{V _number40748=([&]()->V{V _lhs40749=([&]()->V{V _lhs40751=_v_37247_t;V _rhs40752=_v_37255_reach;return V(j::number(_lhs40751)-j::number(_rhs40752));})();V _rhs40750=_v_37275_r;return V(j::number(_lhs40749)*j::number(_rhs40750));})();return V(std::floor(j::number(_number40748)));})();V _rhs40743=V(1.0);return V(j::number(_lhs40742)-j::number(_rhs40743));})();
_v_37278_i1=([&]()->V{V _number40755=([&]()->V{V _lhs40756=_v_37247_t;V _rhs40757=_v_37275_r;return V(j::number(_lhs40756)*j::number(_rhs40757));})();return V(std::floor(j::number(_number40755)));})();
{V _v_37279_i;
_v_37279_i=_v_37277_i0;
for(;j::truth(([&]()->V{V _lhs40758=_v_37279_i;V _rhs40759=_v_37278_i1;return j::binary("<=",_lhs40758,_rhs40759);})());(void)(j::increment(_v_37279_i,1,false))){
V _v_37280_m;
V _v_37281_born;
_v_37280_m=(j::truth(_v_37276_N)?([&]()->V{V _callee40760=this->_v_36724_mod.get();return j::call(_callee40760,j::Args{_v_37279_i,_v_37276_N});})():_v_37279_i);
_v_37281_born=([&]()->V{V _lhs40761=([&]()->V{V _lhs40763=_v_37279_i;V _rhs40764=([&]()->V{V _lhs40765=V(0.999);V _rhs40766=([&]()->V{V _callee40767=this->_v_36701_hash.get();return j::call(_callee40767,j::Args{_v_37251_seed,_v_37280_m,V(0.0)});})();return V(j::number(_lhs40765)*j::number(_rhs40766));})();return j::binary("+",_lhs40763,_rhs40764);})();V _rhs40762=_v_37275_r;return V(j::number(_lhs40761)/j::number(_rhs40762));})();
if(j::truth(([&]()->V{V _logical40768=([&]()->V{V _lhs40769=_v_37281_born;V _rhs40770=_v_37247_t;return j::binary(">",_lhs40769,_rhs40770);})();return !j::truth(_logical40768)?([&]()->V{V _lhs40771=_v_37281_born;V _rhs40772=j::get(_v_37246_pl,this->_literals[92]);return j::binary("<",_lhs40771,_rhs40772);})():_logical40768;})())){continue;
}
(void)(([&]()->V{V _callee40775=this->_v_37119_birthplace.get();return j::call(_callee40775,j::Args{_v_37246_pl,([&]()->V{V _callee40773=this->_v_36701_hash.get();return j::call(_callee40773,j::Args{_v_37251_seed,_v_37280_m,V(1.0)});})(),([&]()->V{V _callee40774=this->_v_36701_hash.get();return j::call(_callee40774,j::Args{_v_37251_seed,_v_37280_m,V(2.0)});})(),_v_37281_born,_v_37249_box});})());
(void)(([&]()->V{V _callee40785=this->_v_37175_particle.get();return j::call(_callee40785,j::Args{_v_37246_pl,_v_37280_m,_v_37281_born,j::get(j::get(_v_37250_wk,this->_literals[54]),V(0.0)),j::get(j::get(_v_37250_wk,this->_literals[54]),V(1.0)),(j::truth(([&]()->V{V _lhs40776=j::get(j::get(_v_37246_pl,this->_literals[97]),this->_literals[1]);V _rhs40777=V(1.0);return j::binary(">",_lhs40776,_rhs40777);})())?([&]()->V{V _number40781=([&]()->V{V _lhs40782=([&]()->V{V _callee40784=this->_v_36701_hash.get();return j::call(_callee40784,j::Args{_v_37251_seed,_v_37280_m,V(13.0)});})();V _rhs40783=j::get(j::get(_v_37246_pl,this->_literals[97]),this->_literals[1]);return V(j::number(_lhs40782)*j::number(_rhs40783));})();return V(std::floor(j::number(_number40781)));})():V(0.0))});})());

}
}

}

_v_37282_h=j::get(_v_37246_pl,this->_literals[119]);
{V _v_37283_i;
_v_37283_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs40786=_v_37283_i;V _rhs40787=j::get(_v_37282_h,this->_literals[122]);return j::binary("<",_lhs40786,_rhs40787);})());(void)(j::increment(_v_37283_i,1,false))){(void)(([&]()->V{V _receiver40788=_v_37245_s;V _method40789=this->_literals[180];V _method=j::get(_receiver40788,_method40789);j::Args _params40790=j::Args{j::get(j::get(_v_37282_h,this->_literals[32]),_v_37283_i),j::get(j::get(_v_37282_h,this->_literals[120]),_v_37283_i),j::get(j::get(_v_37282_h,this->_literals[121]),_v_37283_i)};return j::call(_method,_params40790,_receiver40788);})());
}}
(void)(([&]()->V{V _base40792=_v_37250_wk;V _key40793=this->_literals[128];V _assign40791=V::null();return j::put(_base40792,_key40793,_assign40791);})());

}

return V{};
},5);
this->_v_37284_unlike.get()=j::function([=](const j::Args &_args_fn37285,const V &_receiver_fn37285,const V &_self_fn37285) mutable ->V{
V _v_37286_pl;
V _v_37287_period;
_v_37286_pl=_args_fn37285[0];
_v_37287_period=_args_fn37285[1];
{
V _v_37288_e;
if(j::truth(([&]()->V{V _lhs40794=j::get(_v_37286_pl,this->_literals[92]);V _rhs40795=j::unary("-",j::builtin("Infinity"));return j::binary(">",_lhs40794,_rhs40795);})())){return this->_literals[183];
}
_v_37288_e=j::get(_v_37286_pl,this->_literals[56]);
{for(const auto &_item40796:j::elements(([&]()->V{j::Args _array40797;_array40797.push_back(V(0.0));_array40797.push_back(V(1.37));return j::array(std::move(_array40797));})())){V _v_37289_t;
_v_37289_t=_item40796;
{
if(j::truth(([&]()->V{V _logical40798=([&]()->V{V _lhs40799=this->_literals[41];V _rhs40800=_v_37288_e;return j::binary("in",_lhs40799,_rhs40800);})();return j::truth(_logical40798)?([&]()->V{V _lhs40801=j::unary("typeof",j::get(_v_37288_e,this->_literals[41]));V _rhs40802=this->_literals[46];return V(j::equal(_lhs40801,_rhs40802,true));})():_logical40798;})())){
V _v_37290_a;
V _v_37291_b;
_v_37290_a=([&]()->V{V _receiver40803=_v_37288_e;V _method40804=this->_literals[41];V _method=j::get(_receiver40803,_method40804);j::Args _params40805=j::Args{_v_37289_t};return j::call(_method,_params40805,_receiver40803);})();
_v_37291_b=([&]()->V{V _receiver40808=_v_37288_e;V _method40809=this->_literals[41];V _method=j::get(_receiver40808,_method40809);j::Args _params40810=j::Args{([&]()->V{V _lhs40806=_v_37289_t;V _rhs40807=_v_37287_period;return j::binary("+",_lhs40806,_rhs40807);})()};return j::call(_method,_params40810,_receiver40808);})();
if(j::truth(([&]()->V{V _logical40811=([&]()->V{V _lhs40812=([&]()->V{V _number40816=([&]()->V{V _lhs40817=j::unary("+",j::get(_v_37290_a,V(0.0)));V _rhs40818=j::unary("+",j::get(_v_37291_b,V(0.0)));return V(j::number(_lhs40817)-j::number(_rhs40818));})();return V(std::fabs(j::number(_number40816)));})();V _rhs40813=V(0.01);return j::binary(">",_lhs40812,_rhs40813);})();return !j::truth(_logical40811)?([&]()->V{V _lhs40819=([&]()->V{V _number40823=([&]()->V{V _lhs40824=j::unary("+",j::get(_v_37290_a,V(1.0)));V _rhs40825=j::unary("+",j::get(_v_37291_b,V(1.0)));return V(j::number(_lhs40824)-j::number(_rhs40825));})();return V(std::fabs(j::number(_number40823)));})();V _rhs40820=V(0.01);return j::binary(">",_lhs40819,_rhs40820);})():_logical40811;})())){return ([&]()->V{std::u16string _text40826;_text40826+=u"its emitter.point is at ";_text40826+=j::string(([&]()->V{V _receiver40827=j::builtin("JSON");V _method40828=this->_literals[3];V _method=j::get(_receiver40827,_method40828);j::Args _params40829=j::Args{_v_37290_a};return j::call(_method,_params40829,_receiver40827);})());_text40826+=u" at ";_text40826+=j::string(_v_37289_t);_text40826+=u" s but ";_text40826+=j::string(([&]()->V{V _receiver40830=j::builtin("JSON");V _method40831=this->_literals[3];V _method=j::get(_receiver40830,_method40831);j::Args _params40832=j::Args{_v_37291_b};return j::call(_method,_params40832,_receiver40830);})());_text40826+=u" at ";_text40826+=j::string(([&]()->V{V _lhs40833=_v_37289_t;V _rhs40834=_v_37287_period;return j::binary("+",_lhs40833,_rhs40834);})());_text40826+=u" s";return V(std::move(_text40826));})();
}

}

if(j::truth(j::get(_v_37286_pl,this->_literals[95]))){
V _v_37292_a;
V _v_37293_b;
_v_37292_a=j::unary("+",([&]()->V{V _receiver40835=_v_37286_pl;V _method40836=this->_literals[95];V _method=j::get(_receiver40835,_method40836);j::Args _params40837=j::Args{_v_37289_t};return j::call(_method,_params40837,_receiver40835);})());
_v_37293_b=j::unary("+",([&]()->V{V _receiver40840=_v_37286_pl;V _method40841=this->_literals[95];V _method=j::get(_receiver40840,_method40841);j::Args _params40842=j::Args{([&]()->V{V _lhs40838=_v_37289_t;V _rhs40839=_v_37287_period;return j::binary("+",_lhs40838,_rhs40839);})()};return j::call(_method,_params40842,_receiver40840);})());
if(j::truth(([&]()->V{V _lhs40843=([&]()->V{V _number40847=([&]()->V{V _lhs40848=_v_37292_a;V _rhs40849=_v_37293_b;return V(j::number(_lhs40848)-j::number(_rhs40849));})();return V(std::fabs(j::number(_number40847)));})();V _rhs40844=V(0.000001);return j::binary(">",_lhs40843,_rhs40844);})())){return ([&]()->V{std::u16string _text40850;_text40850+=u"its wind is ";_text40850+=j::string(_v_37292_a);_text40850+=u" at ";_text40850+=j::string(_v_37289_t);_text40850+=u" s but ";_text40850+=j::string(_v_37293_b);_text40850+=u" at ";_text40850+=j::string(([&]()->V{V _lhs40851=_v_37289_t;V _rhs40852=_v_37287_period;return j::binary("+",_lhs40851,_rhs40852);})());_text40850+=u" s";return V(std::move(_text40850));})();
}

}


}
}}
return this->_literals[2];

}

return V{};
},2);
this->_v_37294_checkPeriod.get()=j::function([=](const j::Args &_args_fn37295,const V &_receiver_fn37295,const V &_self_fn37295) mutable ->V{
V _v_37296_v;
V _v_37297_what;
_v_37296_v=_args_fn37295[0];
_v_37297_what=_args_fn37295[1];
{
if(j::truth(([&]()->V{V _lhs40853=_v_37296_v;V _rhs40854=j::builtin("undefined");return V(j::equal(_lhs40853,_rhs40854,true));})())){return V(0.0);
}
if(j::truth(([&]()->V{V _logical40855=j::unary("!",([&]()->V{V _callee40856=this->_v_36728_num.get();return j::call(_callee40856,j::Args{_v_37296_v});})());return !j::truth(_logical40855)?([&]()->V{V _lhs40857=_v_37296_v;V _rhs40858=V(0.0);return j::binary("<",_lhs40857,_rhs40858);})():_logical40855;})())){(void)(([&]()->V{V _callee40861=this->_v_36700_fail.get();return j::call(_callee40861,j::Args{([&]()->V{std::u16string _text40859;_text40859+=u"";_text40859+=j::string(_v_37297_what);_text40859+=u"'s period takes a number of seconds, 0 for none, not ";_text40859+=j::string(([&]()->V{V _callee40860=j::builtin("String");return j::call(_callee40860,j::Args{_v_37296_v});})());_text40859+=u"";return V(std::move(_text40859));})()});})());
}
return _v_37296_v;

}

return V{};
},2);
this->_v_37298_drawParticles.get()=j::function([=](const j::Args &_args_fn37299,const V &_receiver_fn37299,const V &_self_fn37299) mutable ->V{
V _v_37300_s;
V _v_37301_systems;
V _v_37302_t;
V _v_37303_o;
_v_37300_s=_args_fn37299[0];
_v_37301_systems=_args_fn37299[1];
_v_37302_t=_args_fn37299[2];
V _default40862=_args_fn37299[3];if(_default40862.kind==V::Undefined||_default40862.kind==V::Hole)_default40862=([&]()->V{V _obj40863=j::object();return _obj40863;})();
_v_37303_o=_default40862;
{
V _v_37304_period;
V _v_37305_r;
V _v_37306_box;
V _v_37307_plans;
V _v_37308_marked;
V _v_37311_time;
if(j::truth(([&]()->V{V _logical40864=([&]()->V{V _logical40865=j::unary("!",_v_37300_s);return !j::truth(_logical40865)?([&]()->V{V _lhs40866=j::unary("typeof",_v_37300_s);V _rhs40867=this->_literals[6];return V(!j::equal(_lhs40866,_rhs40867,true));})():_logical40865;})();return !j::truth(_logical40864)?([&]()->V{V _lhs40868=j::unary("typeof",j::get(_v_37300_s,this->_literals[180]));V _rhs40869=this->_literals[46];return V(!j::equal(_lhs40868,_rhs40869,true));})():_logical40864;})())){(void)(([&]()->V{V _callee40870=this->_v_36700_fail.get();return j::call(_callee40870,j::Args{this->_literals[184]});})());
}
if(j::truth(([&]()->V{V _logical40871=j::unary("!",_v_37303_o);return !j::truth(_logical40871)?([&]()->V{V _lhs40872=j::unary("typeof",_v_37303_o);V _rhs40873=this->_literals[6];return V(!j::equal(_lhs40872,_rhs40873,true));})():_logical40871;})())){(void)(([&]()->V{V _callee40874=this->_v_36700_fail.get();return j::call(_callee40874,j::Args{this->_literals[185]});})());
}
_v_37304_period=([&]()->V{V _callee40875=this->_v_37294_checkPeriod.get();return j::call(_callee40875,j::Args{j::get(_v_37303_o,this->_literals[186]),this->_literals[187]});})();
_v_37305_r=j::get(_v_37303_o,this->_literals[188]);
if(j::truth(([&]()->V{V _logical40876=([&]()->V{V _lhs40877=_v_37305_r;V _rhs40878=j::builtin("undefined");return V(!j::equal(_lhs40877,_rhs40878,true));})();return j::truth(_logical40876)?([&]()->V{V _logical40879=([&]()->V{V _logical40880=j::unary("!",_v_37305_r);return !j::truth(_logical40880)?([&]()->V{V _lhs40881=j::unary("typeof",_v_37305_r);V _rhs40882=this->_literals[6];return V(!j::equal(_lhs40881,_rhs40882,true));})():_logical40880;})();return !j::truth(_logical40879)?j::unary("!",([&]()->V{V _receiver40883=([&]()->V{j::Args _array40886;_array40886.push_back(j::get(_v_37305_r,this->_literals[48]));_array40886.push_back(j::get(_v_37305_r,this->_literals[49]));_array40886.push_back(j::get(_v_37305_r,this->_literals[15]));_array40886.push_back(j::get(_v_37305_r,this->_literals[50]));return j::array(std::move(_array40886));})();V _method40884=this->_literals[7];V _method=j::get(_receiver40883,_method40884);j::Args _params40885=j::Args{this->_v_36728_num.get()};return j::call(_method,_params40885,_receiver40883);})()):_logical40879;})():_logical40876;})())){(void)(([&]()->V{V _callee40891=this->_v_36700_fail.get();return j::call(_callee40891,j::Args{([&]()->V{std::u16string _text40887;_text40887+=u"drawParticles()'s region takes { x, y, cols, rows }, not ";_text40887+=j::string(([&]()->V{V _receiver40888=j::builtin("JSON");V _method40889=this->_literals[3];V _method=j::get(_receiver40888,_method40889);j::Args _params40890=j::Args{_v_37305_r};return j::call(_method,_params40890,_receiver40888);})());_text40887+=u"";return V(std::move(_text40887));})()});})());
}
_v_37306_box=(j::truth(_v_37305_r)?([&]()->V{V _obj40892=j::object();j::put(_obj40892,this->_literals[116],([&]()->V{V _receiver40895=j::builtin("Math");V _method40896=this->_literals[30];V _method=j::get(_receiver40895,_method40896);j::Args _params40897=j::Args{V(0.0),j::get(_v_37305_r,this->_literals[48])};return j::call(_method,_params40897,_receiver40895);})());j::put(_obj40892,this->_literals[159],([&]()->V{V _receiver40902=j::builtin("Math");V _method40903=this->_literals[158];V _method=j::get(_receiver40902,_method40903);j::Args _params40904=j::Args{j::get(_v_37300_s,this->_literals[15]),([&]()->V{V _lhs40898=j::get(_v_37305_r,this->_literals[48]);V _rhs40899=j::get(_v_37305_r,this->_literals[15]);return j::binary("+",_lhs40898,_rhs40899);})()};return j::call(_method,_params40904,_receiver40902);})());j::put(_obj40892,this->_literals[117],([&]()->V{V _receiver40907=j::builtin("Math");V _method40908=this->_literals[30];V _method=j::get(_receiver40907,_method40908);j::Args _params40909=j::Args{V(0.0),j::get(_v_37305_r,this->_literals[49])};return j::call(_method,_params40909,_receiver40907);})());j::put(_obj40892,this->_literals[157],([&]()->V{V _receiver40914=j::builtin("Math");V _method40915=this->_literals[158];V _method=j::get(_receiver40914,_method40915);j::Args _params40916=j::Args{j::get(_v_37300_s,this->_literals[50]),([&]()->V{V _lhs40910=j::get(_v_37305_r,this->_literals[49]);V _rhs40911=j::get(_v_37305_r,this->_literals[50]);return j::binary("+",_lhs40910,_rhs40911);})()};return j::call(_method,_params40916,_receiver40914);})());return _obj40892;})():([&]()->V{V _obj40917=j::object();j::put(_obj40917,this->_literals[116],V(0.0));j::put(_obj40917,this->_literals[159],j::get(_v_37300_s,this->_literals[15]));j::put(_obj40917,this->_literals[117],V(0.0));j::put(_obj40917,this->_literals[157],j::get(_v_37300_s,this->_literals[50]));return _obj40917;})());
_v_37307_plans=([&]()->V{V _callee40918=this->_v_36904_plansOf.get();return j::call(_callee40918,j::Args{_v_37301_systems,this->_literals[187]});})();
_v_37308_marked=([&]()->V{V _receiver40921=_v_37307_plans;V _method40922=this->_literals[189];V _method=j::get(_receiver40921,_method40922);j::Args _params40923=j::Args{j::function([=](const j::Args &_args_fn37309,const V &_receiver_fn37309,const V &_self_fn37309) mutable ->V{
V _v_37310_pl;
_v_37310_pl=_args_fn37309[0];
return ([&]()->V{V _lhs40919=this->_literals[45];V _rhs40920=j::get(_v_37310_pl,this->_literals[56]);return j::binary("in",_lhs40919,_rhs40920);})();
return V{};
},1)};return j::call(_method,_params40923,_receiver40921);})();
if(j::truth(_v_37308_marked)){(void)(([&]()->V{V _callee40925=this->_v_36700_fail.get();return j::call(_callee40925,j::Args{([&]()->V{std::u16string _text40924;_text40924+=u"";_text40924+=j::string(j::get(_v_37308_marked,this->_literals[94]));_text40924+=u".emitter.mark finds its cells in particles()'s front or back art: give the system to particles() with the art, or use { point } here";return V(std::move(_text40924));})()});})());
}
if(j::truth(([&]()->V{V _logical40926=([&]()->V{V _lhs40927=j::get(_v_37306_box,this->_literals[159]);V _rhs40928=j::get(_v_37306_box,this->_literals[116]);return j::binary("<=",_lhs40927,_rhs40928);})();return !j::truth(_logical40926)?([&]()->V{V _lhs40929=j::get(_v_37306_box,this->_literals[157]);V _rhs40930=j::get(_v_37306_box,this->_literals[117]);return j::binary("<=",_lhs40929,_rhs40930);})():_logical40926;})())){return V{};
}
_v_37311_time=(j::truth(([&]()->V{V _receiver40931=j::builtin("Number");V _method40932=this->_literals[190];V _method=j::get(_receiver40931,_method40932);j::Args _params40933=j::Args{_v_37302_t};return j::call(_method,_params40933,_receiver40931);})())?_v_37302_t:V(0.0));
{for(const auto &_item40934:j::elements(_v_37307_plans)){V _v_37312_pl;
_v_37312_pl=_item40934;
(void)(([&]()->V{V _callee40935=this->_v_37243_drawPlan.get();return j::call(_callee40935,j::Args{_v_37300_s,_v_37312_pl,_v_37311_time,_v_37304_period,_v_37306_box});})());
}}

}

return V{};
},3);
this->_v_37313_distinct.get()=j::function([=](const j::Args &_args_fn37314,const V &_receiver_fn37314,const V &_self_fn37314) mutable ->V{
V _v_37315_pairs;
_v_37315_pairs=_args_fn37314[0];
{
j::Cell _v_37316_seen;
_v_37316_seen.get()=([&]()->V{V _callee40936=j::builtin("Set");return j::construct(_callee40936,j::Args{});})();
return ([&]()->V{V _receiver40949=_v_37315_pairs;V _method40950=this->_literals[43];V _method=j::get(_receiver40949,_method40950);j::Args _params40951=j::Args{j::function([=](const j::Args &_args_fn37317,const V &_receiver_fn37317,const V &_self_fn37317) mutable ->V{
V _v_37318_a;
V _v_37319_b;
V _pattern40937=_args_fn37317[0];
_v_37318_a=j::get(_pattern40937,V(0));
_v_37319_b=j::get(_pattern40937,V(1));
{
V _v_37320_key;
_v_37320_key=([&]()->V{V _receiver40938=([&]()->V{std::u16string _text40941;_text40941+=u"";_text40941+=j::string(_v_37318_a);_text40941+=u"|";_text40941+=j::string(_v_37319_b);_text40941+=u"";return V(std::move(_text40941));})();V _method40939=this->_literals[191];V _method=j::get(_receiver40938,_method40939);j::Args _params40940=j::Args{};return j::call(_method,_params40940,_receiver40938);})();
return ([&]()->V{V _logical40942=j::unary("!",([&]()->V{V _receiver40943=_v_37316_seen.get();V _method40944=this->_literals[192];V _method=j::get(_receiver40943,_method40944);j::Args _params40945=j::Args{_v_37320_key};return j::call(_method,_params40945,_receiver40943);})());return j::truth(_logical40942)?j::unary("!",j::unary("!",([&]()->V{V _receiver40946=_v_37316_seen.get();V _method40947=this->_literals[193];V _method=j::get(_receiver40946,_method40947);j::Args _params40948=j::Args{_v_37320_key};return j::call(_method,_params40948,_receiver40946);})())):_logical40942;})();

}

return V{};
},1)};return j::call(_method,_params40951,_receiver40949);})();

}

return V{};
},1);
this->_v_37330_paletteFrom.get()=j::function([=](const j::Args &_args_fn37331,const V &_receiver_fn37331,const V &_self_fn37331) mutable ->V{
V _v_37332_pairs;
V _v_37333_what;
_v_37332_pairs=_args_fn37331[0];
_v_37333_what=_args_fn37331[1];
{
V _v_37334_list;
V _v_37335_themed;
_v_37334_list=([&]()->V{V _callee40952=this->_v_37313_distinct.get();return j::call(_callee40952,j::Args{_v_37332_pairs});})();
if(j::truth(j::unary("!",j::get(_v_37334_list,this->_literals[1])))){return j::builtin("undefined");
}
_v_37335_themed=([&]()->V{V _callee40953=this->_v_37321_twoThemes.get();return j::call(_callee40953,j::Args{_v_37334_list});})();
if(j::truth(([&]()->V{V _lhs40954=([&]()->V{V _callee40956=this->_v_37327_total.get();return j::call(_callee40956,j::Args{_v_37334_list});})();V _rhs40955=V(64.0);return j::binary(">",_lhs40954,_rhs40955);})())){(void)(([&]()->V{V _callee40959=this->_v_36700_fail.get();return j::call(_callee40959,j::Args{([&]()->V{std::u16string _text40957;_text40957+=u"";_text40957+=j::string(_v_37333_what);_text40957+=u" have ";_text40957+=j::string(([&]()->V{V _callee40958=this->_v_37327_total.get();return j::call(_callee40958,j::Args{_v_37334_list});})());_text40957+=u" colours between them";_text40957+=j::string((j::truth(_v_37335_themed)?this->_literals[194]:this->_literals[2]));_text40957+=u", past the 64 a piece can have: lower steps, or use fewer fades";return V(std::move(_text40957));})()});})());
}
return (j::truth(_v_37335_themed)?([&]()->V{V _obj40960=j::object();j::put(_obj40960,this->_literals[8],([&]()->V{V _receiver40961=_v_37334_list;V _method40962=this->_literals[21];V _method=j::get(_receiver40961,_method40962);j::Args _params40963=j::Args{j::function([=](const j::Args &_args_fn37336,const V &_receiver_fn37336,const V &_self_fn37336) mutable ->V{
V _v_37337_p;
_v_37337_p=_args_fn37336[0];
return j::get(_v_37337_p,V(0.0));
return V{};
},1)};return j::call(_method,_params40963,_receiver40961);})());j::put(_obj40960,this->_literals[9],([&]()->V{V _receiver40964=_v_37334_list;V _method40965=this->_literals[21];V _method=j::get(_receiver40964,_method40965);j::Args _params40966=j::Args{j::function([=](const j::Args &_args_fn37338,const V &_receiver_fn37338,const V &_self_fn37338) mutable ->V{
V _v_37339_p;
_v_37339_p=_args_fn37338[0];
return j::get(_v_37339_p,V(1.0));
return V{};
},1)};return j::call(_method,_params40966,_receiver40964);})());return _obj40960;})():([&]()->V{V _receiver40967=_v_37334_list;V _method40968=this->_literals[21];V _method=j::get(_receiver40967,_method40968);j::Args _params40969=j::Args{j::function([=](const j::Args &_args_fn37340,const V &_receiver_fn37340,const V &_self_fn37340) mutable ->V{
V _v_37341_p;
_v_37341_p=_args_fn37340[0];
return j::get(_v_37341_p,V(0.0));
return V{};
},1)};return j::call(_method,_params40969,_receiver40967);})());

}

return V{};
},2);
this->_v_37342_pairsOf.get()=j::function([=](const j::Args &_args_fn37343,const V &_receiver_fn37343,const V &_self_fn37343) mutable ->V{
V _v_37344_spec;
V _v_37345_what;
_v_37344_spec=_args_fn37343[0];
_v_37345_what=_args_fn37343[1];
{
j::Cell _v_37346_f;
_v_37346_f.get()=([&]()->V{V _callee40977=this->_v_36751_fadeOf.get();return j::call(_callee40977,j::Args{_v_37344_spec,(j::truth(([&]()->V{V _receiver40970=j::builtin("Array");V _method40971=this->_literals[0];V _method=j::get(_receiver40970,_method40971);j::Args _params40972=j::Args{_v_37344_spec};return j::call(_method,_params40972,_receiver40970);})())?j::get(_v_37344_spec,this->_literals[1]):([&]()->V{V _logical40973=([&]()->V{V _chain40974=_v_37344_spec;V _chain40975=j::get(_chain40974,this->_literals[8]);if(j::nullish(_chain40975))return V{};V _chain40976=j::get(_chain40975,this->_literals[1]);return _chain40976;})();return j::nullish(_logical40973)?V(1.0):_logical40973;})()),_v_37345_what});})();
return ([&]()->V{V _receiver40979=j::get(_v_37346_f.get(),this->_literals[8]);V _method40980=this->_literals[21];V _method=j::get(_receiver40979,_method40980);j::Args _params40981=j::Args{j::function([=](const j::Args &_args_fn37347,const V &_receiver_fn37347,const V &_self_fn37347) mutable ->V{
V _v_37348_c;
V _v_37349_i;
_v_37348_c=_args_fn37347[0];
_v_37349_i=_args_fn37347[1];
return ([&]()->V{j::Args _array40978;_array40978.push_back(_v_37348_c);_array40978.push_back(j::get(j::get(_v_37346_f.get(),this->_literals[9]),_v_37349_i));return j::array(std::move(_array40978));})();
return V{};
},2)};return j::call(_method,_params40981,_receiver40979);})();

}

return V{};
},2);
this->_v_37350_pairsFor.get()=j::function([=](const j::Args &_args_fn37351,const V &_receiver_fn37351,const V &_self_fn37351) mutable ->V{
V _v_37352_list;
V _v_37353_own;
V _v_37354_extra;
V _v_37355_plain;
V _v_37356_what;
_v_37352_list=_args_fn37351[0];
_v_37353_own=_args_fn37351[1];
_v_37354_extra=_args_fn37351[2];
_v_37355_plain=_args_fn37351[3];
_v_37356_what=_args_fn37351[4];
{
V _v_37357_fades;
V _v_37360_coloured;
V _v_37361_bare;
j::Cell _v_37364_pairs;
_v_37357_fades=([&]()->V{V _receiver40985=_v_37352_list;V _method40986=this->_literals[195];V _method=j::get(_receiver40985,_method40986);j::Args _params40987=j::Args{j::function([=](const j::Args &_args_fn37358,const V &_receiver_fn37358,const V &_self_fn37358) mutable ->V{
V _v_37359_pl;
_v_37359_pl=_args_fn37358[0];
return ([&]()->V{j::Args _array40982;for(const auto &_value:j::elements(j::get(_v_37359_pl,this->_literals[97])))_array40982.push_back(_value);for(const auto &_value:j::elements((j::truth(j::get(_v_37359_pl,this->_literals[102]))?([&]()->V{j::Args _array40983;_array40983.push_back(j::get(_v_37359_pl,this->_literals[102]));return j::array(std::move(_array40983));})():([&]()->V{j::Args _array40984;return j::array(std::move(_array40984));})())))_array40982.push_back(_value);return j::array(std::move(_array40982));})();
return V{};
},1)};return j::call(_method,_params40987,_receiver40985);})();
_v_37360_coloured=([&]()->V{V _logical40988=([&]()->V{V _lhs40989=j::get(_v_37357_fades,this->_literals[1]);V _rhs40990=V(0.0);return j::binary(">",_lhs40989,_rhs40990);})();return !j::truth(_logical40988)?([&]()->V{V _lhs40991=j::get(_v_37354_extra,this->_literals[1]);V _rhs40992=V(0.0);return j::binary(">",_lhs40991,_rhs40992);})():_logical40988;})();
_v_37361_bare=([&]()->V{V _logical40993=_v_37355_plain;return !j::truth(_logical40993)?([&]()->V{V _receiver40995=_v_37352_list;V _method40996=this->_literals[196];V _method=j::get(_receiver40995,_method40996);j::Args _params40997=j::Args{j::function([=](const j::Args &_args_fn37362,const V &_receiver_fn37362,const V &_self_fn37362) mutable ->V{
V _v_37363_pl;
_v_37363_pl=_args_fn37362[0];
return ([&]()->V{V _logical40994=j::unary("!",j::get(j::get(_v_37363_pl,this->_literals[97]),this->_literals[1]));return j::truth(_logical40994)?j::unary("!",j::get(_v_37363_pl,this->_literals[102])):_logical40994;})();
return V{};
},1)};return j::call(_method,_params40997,_receiver40995);})():_logical40993;})();
_v_37364_pairs.get()=(j::truth(([&]()->V{V _lhs40998=_v_37353_own;V _rhs40999=j::builtin("undefined");return V(!j::equal(_lhs40998,_rhs40999,true));})())?([&]()->V{V _callee41001=this->_v_37342_pairsOf.get();return j::call(_callee41001,j::Args{_v_37353_own,([&]()->V{std::u16string _text41000;_text41000+=u"";_text41000+=j::string(_v_37356_what);_text41000+=u"'s palette";return V(std::move(_text41000));})()});})():(j::truth(([&]()->V{V _logical41002=_v_37360_coloured;return j::truth(_logical41002)?_v_37361_bare:_logical41002;})())?([&]()->V{j::Args _array41003;_array41003.push_back(([&]()->V{j::Args _array41004;_array41004.push_back(j::get(this->_v_36691_INK.get(),this->_literals[8]));_array41004.push_back(j::get(this->_v_36691_INK.get(),this->_literals[9]));return j::array(std::move(_array41004));})());return j::array(std::move(_array41003));})():([&]()->V{j::Args _array41005;return j::array(std::move(_array41005));})()));
(void)(([&]()->V{V _receiver41007=_v_37364_pairs.get();V _method41008=this->_literals[27];V _method=j::get(_receiver41007,_method41008);j::Args _params41009=([&](){j::Args _args41006;for(const auto &_v:j::elements(_v_37354_extra))_args41006.push_back(_v);return _args41006;})();return j::call(_method,_params41009,_receiver41007);})());
{for(const auto &_item41010:j::elements(_v_37357_fades)){j::Cell _v_37365_f;
_v_37365_f.get()=_item41010;
(void)(([&]()->V{V _receiver41015=j::get(_v_37365_f.get(),this->_literals[8]);V _method41016=this->_literals[28];V _method=j::get(_receiver41015,_method41016);j::Args _params41017=j::Args{j::function([=](const j::Args &_args_fn37366,const V &_receiver_fn37366,const V &_self_fn37366) mutable ->V{
V _v_37367_c;
V _v_37368_i;
_v_37367_c=_args_fn37366[0];
_v_37368_i=_args_fn37366[1];
return ([&]()->V{V _receiver41012=_v_37364_pairs.get();V _method41013=this->_literals[27];V _method=j::get(_receiver41012,_method41013);j::Args _params41014=j::Args{([&]()->V{j::Args _array41011;_array41011.push_back(_v_37367_c);_array41011.push_back(j::get(j::get(_v_37365_f.get(),this->_literals[9]),_v_37368_i));return j::array(std::move(_array41011));})()};return j::call(_method,_params41014,_receiver41012);})();
return V{};
},2)};return j::call(_method,_params41017,_receiver41015);})());
}}
return _v_37364_pairs.get();

}

return V{};
},5);
this->_v_37369_paletteFor.get()=j::function([=](const j::Args &_args_fn37370,const V &_receiver_fn37370,const V &_self_fn37370) mutable ->V{
V _v_37371_list;
V _v_37372_own;
V _v_37373_extra;
V _v_37374_plain;
V _v_37375_what;
_v_37371_list=_args_fn37370[0];
_v_37372_own=_args_fn37370[1];
_v_37373_extra=_args_fn37370[2];
_v_37374_plain=_args_fn37370[3];
_v_37375_what=_args_fn37370[4];
{
return ([&]()->V{V _callee41020=this->_v_37330_paletteFrom.get();return j::call(_callee41020,j::Args{([&]()->V{V _callee41018=this->_v_37350_pairsFor.get();return j::call(_callee41018,j::Args{_v_37371_list,_v_37372_own,_v_37373_extra,_v_37374_plain,_v_37375_what});})(),([&]()->V{std::u16string _text41019;_text41019+=u"";_text41019+=j::string(_v_37375_what);_text41019+=u": these particles";_text41019+=j::string((j::truth(j::get(_v_37373_extra,this->_literals[1]))?this->_literals[197]:this->_literals[2]));_text41019+=u"";return V(std::move(_text41019));})()});})();

}

return V{};
},5);
this->_v_37376_particlesPalette.get()=j::function([=](const j::Args &_args_fn37377,const V &_receiver_fn37377,const V &_self_fn37377) mutable ->V{
V _v_37378_systems;
V _v_37379_own;
_v_37378_systems=_args_fn37377[0];
_v_37379_own=_args_fn37377[1];
{
return ([&]()->V{V _callee41023=this->_v_37369_paletteFor.get();return j::call(_callee41023,j::Args{([&]()->V{V _callee41021=this->_v_36904_plansOf.get();return j::call(_callee41021,j::Args{_v_37378_systems,this->_literals[198]});})(),_v_37379_own,([&]()->V{j::Args _array41022;return j::array(std::move(_array41022));})(),V(false),this->_literals[198]});})();

}

return V{};
},2);
this->_v_37383_artOf.get()=j::function([=](const j::Args &_args_fn37384,const V &_receiver_fn37384,const V &_self_fn37384) mutable ->V{
V _v_37385_v;
j::Cell _v_37386_size;
V _v_37387_what;
_v_37385_v=_args_fn37384[0];
_v_37386_size.get()=_args_fn37384[1];
_v_37387_what=_args_fn37384[2];
{
V _v_37388_sc;
V _v_37389_at;
V _v_37390_color;
V _v_37391_given;
j::Cell _v_37392_paint;
j::Cell _v_37395_solid;
j::Cell _v_37396_pic;
V _v_37397_lines;
j::Cell _v_37398_w;
V _v_37401_h;
j::Cell _v_37402_x0;
j::Cell _v_37403_y0;
j::Cell _v_37404_pairs;
j::Cell _v_37405_pairIndex;
j::Cell _v_37414_base;
j::Cell _v_37415_at2;
j::Cell _v_37416_chs;
j::Cell _v_37417_ks;
j::Cell _v_37418_plain;
j::Cell _v_37419_roofed;
if(j::truth(([&]()->V{V _lhs41024=_v_37385_v;V _rhs41025=j::builtin("undefined");return V(j::equal(_lhs41024,_rhs41025,true));})())){return V::null();
}
_v_37388_sc=(j::truth(([&]()->V{V _callee41026=this->_v_36767_isSource.get();return j::call(_callee41026,j::Args{_v_37385_v});})())?([&]()->V{V _obj41027=j::object();j::put(_obj41027,this->_literals[199],_v_37385_v);return _obj41027;})():_v_37385_v);
if(j::truth(([&]()->V{V _logical41028=([&]()->V{V _logical41029=j::unary("!",_v_37388_sc);return !j::truth(_logical41029)?([&]()->V{V _lhs41030=j::unary("typeof",_v_37388_sc);V _rhs41031=this->_literals[6];return V(!j::equal(_lhs41030,_rhs41031,true));})():_logical41029;})();return !j::truth(_logical41028)?j::unary("!",([&]()->V{V _callee41032=this->_v_36767_isSource.get();return j::call(_callee41032,j::Args{j::get(_v_37388_sc,this->_literals[199])});})()):_logical41028;})())){(void)(([&]()->V{V _callee41037=this->_v_36700_fail.get();return j::call(_callee41037,j::Args{([&]()->V{std::u16string _text41033;_text41033+=u"";_text41033+=j::string(_v_37387_what);_text41033+=u" takes text, a piece, a Surface, or { art, at, color, paint, solid }, not ";_text41033+=j::string(([&]()->V{V _receiver41034=j::builtin("JSON");V _method41035=this->_literals[3];V _method=j::get(_receiver41034,_method41035);j::Args _params41036=j::Args{_v_37385_v};return j::call(_method,_params41036,_receiver41034);})());_text41033+=u"";return V(std::move(_text41033));})()});})());
}
_v_37389_at=([&]()->V{V _logical41038=j::get(_v_37388_sc,this->_literals[32]);return j::nullish(_logical41038)?(j::truth(([&]()->V{V _lhs41039=j::unary("typeof",j::get(_v_37388_sc,this->_literals[199]));V _rhs41040=this->_literals[4];return V(j::equal(_lhs41039,_rhs41040,true));})())?this->_literals[156]:this->_literals[33]):_logical41038;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver41041=this->_v_36719_PLACES.get();V _method41042=this->_literals[25];V _method=j::get(_receiver41041,_method41042);j::Args _params41043=j::Args{_v_37389_at};return j::call(_method,_params41043,_receiver41041);})()))){(void)(([&]()->V{V _callee41049=this->_v_36700_fail.get();return j::call(_callee41049,j::Args{([&]()->V{std::u16string _text41044;_text41044+=u"";_text41044+=j::string(_v_37387_what);_text41044+=u".at takes a place, ";_text41044+=j::string(([&]()->V{V _callee41045=this->_v_36731_quoted.get();return j::call(_callee41045,j::Args{this->_v_36719_PLACES.get()});})());_text41044+=u", not ";_text41044+=j::string(([&]()->V{V _receiver41046=j::builtin("JSON");V _method41047=this->_literals[3];V _method=j::get(_receiver41046,_method41047);j::Args _params41048=j::Args{j::get(_v_37388_sc,this->_literals[32])};return j::call(_method,_params41048,_receiver41046);})());_text41044+=u"";return V(std::move(_text41044));})()});})());
}
_v_37390_color=(j::truth(([&]()->V{V _lhs41050=j::get(_v_37388_sc,this->_literals[17]);V _rhs41051=j::builtin("undefined");return V(j::equal(_lhs41050,_rhs41051,true));})())?j::builtin("undefined"):(j::truth(([&]()->V{V _callee41052=this->_v_37380_isThemedHex.get();return j::call(_callee41052,j::Args{j::get(_v_37388_sc,this->_literals[17])});})())?j::get(_v_37388_sc,this->_literals[17]):([&]()->V{V _callee41054=this->_v_36694_colorOf.get();return j::call(_callee41054,j::Args{j::get(_v_37388_sc,this->_literals[17]),([&]()->V{std::u16string _text41053;_text41053+=u"";_text41053+=j::string(_v_37387_what);_text41053+=u".color";return V(std::move(_text41053));})()});})()));
_v_37391_given=([&]()->V{V _logical41055=j::get(_v_37388_sc,this->_literals[200]);return j::nullish(_logical41055)?([&]()->V{V _obj41056=j::object();return _obj41056;})():_logical41055;})();
if(j::truth(([&]()->V{V _logical41057=j::unary("!",_v_37391_given);return !j::truth(_logical41057)?([&]()->V{V _lhs41058=j::unary("typeof",_v_37391_given);V _rhs41059=this->_literals[6];return V(!j::equal(_lhs41058,_rhs41059,true));})():_logical41057;})())){(void)(([&]()->V{V _callee41064=this->_v_36700_fail.get();return j::call(_callee41064,j::Args{([&]()->V{std::u16string _text41060;_text41060+=u"";_text41060+=j::string(_v_37387_what);_text41060+=u".paint takes { character: colour }, such as { \"▪\": \"#fcd34d\" }, not ";_text41060+=j::string(([&]()->V{V _receiver41061=j::builtin("JSON");V _method41062=this->_literals[3];V _method=j::get(_receiver41061,_method41062);j::Args _params41063=j::Args{j::get(_v_37388_sc,this->_literals[200])};return j::call(_method,_params41063,_receiver41061);})());_text41060+=u"";return V(std::move(_text41060));})()});})());
}
_v_37392_paint.get()=([&]()->V{V _obj41065=j::object();return _obj41065;})();
{for(const auto &_item41066:j::elements(([&]()->V{V _receiver41067=j::builtin("Object");V _method41068=this->_literals[201];V _method=j::get(_receiver41067,_method41068);j::Args _params41069=j::Args{_v_37391_given};return j::call(_method,_params41069,_receiver41067);})())){V _v_37393_ch;
V _v_37394_c;
V _pattern41070=_item41066;
_v_37393_ch=j::get(_pattern41070,V(0));
_v_37394_c=j::get(_pattern41070,V(1));
{
if(j::truth(([&]()->V{V _lhs41071=j::get(_v_37393_ch,this->_literals[1]);V _rhs41072=V(1.0);return V(!j::equal(_lhs41071,_rhs41072,true));})())){(void)(([&]()->V{V _callee41077=this->_v_36700_fail.get();return j::call(_callee41077,j::Args{([&]()->V{std::u16string _text41073;_text41073+=u"";_text41073+=j::string(_v_37387_what);_text41073+=u".paint takes one character a key, not ";_text41073+=j::string(([&]()->V{V _receiver41074=j::builtin("JSON");V _method41075=this->_literals[3];V _method=j::get(_receiver41074,_method41075);j::Args _params41076=j::Args{_v_37393_ch};return j::call(_method,_params41076,_receiver41074);})());_text41073+=u"";return V(std::move(_text41073));})()});})());
}
(void)(([&]()->V{V _base41079=_v_37392_paint.get();V _key41080=_v_37393_ch;V _assign41078=(j::truth(([&]()->V{V _callee41081=this->_v_37380_isThemedHex.get();return j::call(_callee41081,j::Args{_v_37394_c});})())?_v_37394_c:([&]()->V{V _callee41083=this->_v_36694_colorOf.get();return j::call(_callee41083,j::Args{_v_37394_c,([&]()->V{std::u16string _text41082;_text41082+=u"";_text41082+=j::string(_v_37387_what);_text41082+=u".paint[\"";_text41082+=j::string(_v_37393_ch);_text41082+=u"\"]";return V(std::move(_text41082));})()});})());return j::put(_base41079,_key41080,_assign41078);})());

}
}}
if(j::truth(([&]()->V{V _logical41084=([&]()->V{V _lhs41085=j::get(_v_37388_sc,this->_literals[202]);V _rhs41086=j::builtin("undefined");return V(!j::equal(_lhs41085,_rhs41086,true));})();return j::truth(_logical41084)?([&]()->V{V _lhs41087=j::unary("typeof",j::get(_v_37388_sc,this->_literals[202]));V _rhs41088=this->_literals[203];return V(!j::equal(_lhs41087,_rhs41088,true));})():_logical41084;})())){(void)(([&]()->V{V _callee41093=this->_v_36700_fail.get();return j::call(_callee41093,j::Args{([&]()->V{std::u16string _text41089;_text41089+=u"";_text41089+=j::string(_v_37387_what);_text41089+=u".solid takes true or false, not ";_text41089+=j::string(([&]()->V{V _receiver41090=j::builtin("JSON");V _method41091=this->_literals[3];V _method=j::get(_receiver41090,_method41091);j::Args _params41092=j::Args{j::get(_v_37388_sc,this->_literals[202])};return j::call(_method,_params41092,_receiver41090);})());_text41089+=u"";return V(std::move(_text41089));})()});})());
}
_v_37395_solid.get()=([&]()->V{V _logical41094=j::get(_v_37388_sc,this->_literals[202]);return j::nullish(_logical41094)?V(true):_logical41094;})();
_v_37396_pic.get()=([&]()->V{V _callee41097=this->_v_36770_pictureOf.get();return j::call(_callee41097,j::Args{j::get(_v_37388_sc,this->_literals[199]),([&]()->V{V _lhs41095=_v_37390_color;V _rhs41096=j::builtin("undefined");return V(j::equal(_lhs41095,_rhs41096,true));})()});})();
V _pattern41098=_v_37396_pic.get();
_v_37397_lines=j::get(_pattern41098,this->_literals[22]);
_v_37398_w.get()=([&]()->V{V _receiver41103=j::builtin("Math");V _method41104=this->_literals[30];V _method=j::get(_receiver41103,_method41104);j::Args _params41105=([&](){j::Args _args41099;_args41099.push_back(V(0.0));for(const auto &_v:j::elements(([&]()->V{V _receiver41100=_v_37397_lines;V _method41101=this->_literals[21];V _method=j::get(_receiver41100,_method41101);j::Args _params41102=j::Args{j::function([=](const j::Args &_args_fn37399,const V &_receiver_fn37399,const V &_self_fn37399) mutable ->V{
V _v_37400_l;
_v_37400_l=_args_fn37399[0];
return j::get(_v_37400_l,this->_literals[1]);
return V{};
},1)};return j::call(_method,_params41102,_receiver41100);})()))_args41099.push_back(_v);return _args41099;})();return j::call(_method,_params41105,_receiver41103);})();
_v_37401_h=j::get(_v_37397_lines,this->_literals[1]);
_v_37402_x0.get()=([&]()->V{V _number41110=([&]()->V{V _lhs41111=j::get(j::get(this->_v_36720_SPOT.get(),_v_37389_at),V(0.0));V _rhs41112=([&]()->V{V _lhs41113=j::get(_v_37386_size.get(),this->_literals[15]);V _rhs41114=_v_37398_w.get();return V(j::number(_lhs41113)-j::number(_rhs41114));})();return V(j::number(_lhs41111)*j::number(_rhs41112));})();return V(std::floor(j::number(_number41110)));})();
_v_37403_y0.get()=([&]()->V{V _number41119=([&]()->V{V _lhs41120=j::get(j::get(this->_v_36720_SPOT.get(),_v_37389_at),V(1.0));V _rhs41121=([&]()->V{V _lhs41122=j::get(_v_37386_size.get(),this->_literals[50]);V _rhs41123=_v_37401_h;return V(j::number(_lhs41122)-j::number(_rhs41123));})();return V(j::number(_lhs41120)*j::number(_rhs41121));})();return V(std::floor(j::number(_number41119)));})();
_v_37404_pairs.get()=([&]()->V{j::Args _array41124;return j::array(std::move(_array41124));})();
_v_37405_pairIndex.get()=j::function([=](const j::Args &_args_fn37406,const V &_receiver_fn37406,const V &_self_fn37406) mutable ->V{
V _v_37407_c;
_v_37407_c=_args_fn37406[0];
{
j::Cell _v_37408_l;
j::Cell _v_37409_d;
V _v_37410_k;
V _pattern41129=(j::truth(([&]()->V{V _lhs41125=j::unary("typeof",_v_37407_c);V _rhs41126=this->_literals[4];return V(j::equal(_lhs41125,_rhs41126,true));})())?([&]()->V{j::Args _array41127;_array41127.push_back(_v_37407_c);_array41127.push_back(_v_37407_c);return j::array(std::move(_array41127));})():([&]()->V{j::Args _array41128;_array41128.push_back(j::get(_v_37407_c,this->_literals[8]));_array41128.push_back(j::get(_v_37407_c,this->_literals[9]));return j::array(std::move(_array41128));})());
_v_37408_l.get()=j::get(_pattern41129,V(0));
_v_37409_d.get()=j::get(_pattern41129,V(1));
_v_37410_k=([&]()->V{V _receiver41136=_v_37404_pairs.get();V _method41137=this->_literals[204];V _method=j::get(_receiver41136,_method41137);j::Args _params41138=j::Args{j::function([=](const j::Args &_args_fn37411,const V &_receiver_fn37411,const V &_self_fn37411) mutable ->V{
V _v_37412_a;
V _v_37413_b;
V _pattern41130=_args_fn37411[0];
_v_37412_a=j::get(_pattern41130,V(0));
_v_37413_b=j::get(_pattern41130,V(1));
return ([&]()->V{V _logical41131=([&]()->V{V _lhs41132=_v_37412_a;V _rhs41133=_v_37408_l.get();return V(j::equal(_lhs41132,_rhs41133,true));})();return j::truth(_logical41131)?([&]()->V{V _lhs41134=_v_37413_b;V _rhs41135=_v_37409_d.get();return V(j::equal(_lhs41134,_rhs41135,true));})():_logical41131;})();
return V{};
},1)};return j::call(_method,_params41138,_receiver41136);})();
return (j::truth(([&]()->V{V _lhs41139=_v_37410_k;V _rhs41140=V(0.0);return j::binary(">=",_lhs41139,_rhs41140);})())?_v_37410_k:([&]()->V{V _lhs41141=([&]()->V{V _receiver41144=_v_37404_pairs.get();V _method41145=this->_literals[27];V _method=j::get(_receiver41144,_method41145);j::Args _params41146=j::Args{([&]()->V{j::Args _array41143;_array41143.push_back(_v_37408_l.get());_array41143.push_back(_v_37409_d.get());return j::array(std::move(_array41143));})()};return j::call(_method,_params41146,_receiver41144);})();V _rhs41142=V(1.0);return V(j::number(_lhs41141)-j::number(_rhs41142));})());

}

return V{};
},1);
_v_37414_base.get()=(j::truth(([&]()->V{V _lhs41147=_v_37390_color;V _rhs41148=j::builtin("undefined");return V(j::equal(_lhs41147,_rhs41148,true));})())?j::unary("-",V(1.0)):([&]()->V{V _callee41149=_v_37405_pairIndex.get();return j::call(_callee41149,j::Args{_v_37390_color});})());
_v_37415_at2.get()=([&]()->V{j::Args _array41150;return j::array(std::move(_array41150));})();
_v_37416_chs.get()=([&]()->V{j::Args _array41151;return j::array(std::move(_array41151));})();
_v_37417_ks.get()=([&]()->V{j::Args _array41152;return j::array(std::move(_array41152));})();
_v_37418_plain.get()=V(false);
_v_37419_roofed.get()=([&]()->V{V _callee41153=j::builtin("Uint8Array");return j::construct(_callee41153,j::Args{_v_37398_w.get()});})();
(void)(([&]()->V{V _receiver41226=_v_37397_lines;V _method41227=this->_literals[28];V _method=j::get(_receiver41226,_method41227);j::Args _params41228=j::Args{j::function([=](const j::Args &_args_fn37420,const V &_receiver_fn37420,const V &_self_fn37420) mutable ->V{
V _v_37421_line;
V _v_37422_r;
_v_37421_line=_args_fn37420[0];
_v_37422_r=_args_fn37420[1];
{
{V _v_37423_c;
_v_37423_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs41154=_v_37423_c;V _rhs41155=_v_37398_w.get();return j::binary("<",_lhs41154,_rhs41155);})());(void)(j::increment(_v_37423_c,1,false))){
V _v_37424_ch;
V _v_37425_x;
V _v_37426_y;
V _v_37427_inside;
V _v_37428_cc;
V _v_37429_i;
V _v_37430_own;
V _v_37431_k;
_v_37424_ch=([&]()->V{V _logical41156=j::get(_v_37421_line,_v_37423_c);return j::nullish(_logical41156)?this->_literals[26]:_logical41156;})();
_v_37425_x=([&]()->V{V _lhs41157=_v_37402_x0.get();V _rhs41158=_v_37423_c;return j::binary("+",_lhs41157,_rhs41158);})();
_v_37426_y=([&]()->V{V _lhs41159=_v_37403_y0.get();V _rhs41160=_v_37422_r;return j::binary("+",_lhs41159,_rhs41160);})();
_v_37427_inside=([&]()->V{V _logical41161=([&]()->V{V _logical41162=([&]()->V{V _logical41163=([&]()->V{V _lhs41164=_v_37425_x;V _rhs41165=V(0.0);return j::binary(">=",_lhs41164,_rhs41165);})();return j::truth(_logical41163)?([&]()->V{V _lhs41166=_v_37425_x;V _rhs41167=j::get(_v_37386_size.get(),this->_literals[15]);return j::binary("<",_lhs41166,_rhs41167);})():_logical41163;})();return j::truth(_logical41162)?([&]()->V{V _lhs41168=_v_37426_y;V _rhs41169=V(0.0);return j::binary(">=",_lhs41168,_rhs41169);})():_logical41162;})();return j::truth(_logical41161)?([&]()->V{V _lhs41170=_v_37426_y;V _rhs41171=j::get(_v_37386_size.get(),this->_literals[50]);return j::binary("<",_lhs41170,_rhs41171);})():_logical41161;})();
if(j::truth(([&]()->V{V _lhs41172=_v_37424_ch;V _rhs41173=this->_literals[26];return V(j::equal(_lhs41172,_rhs41173,true));})())){
if(j::truth(([&]()->V{V _logical41174=([&]()->V{V _logical41175=([&]()->V{V _logical41176=_v_37395_solid.get();return j::truth(_logical41176)?j::get(_v_37419_roofed.get(),_v_37423_c):_logical41176;})();return j::truth(_logical41175)?([&]()->V{V _lhs41177=_v_37423_c;V _rhs41178=j::get(_v_37421_line,this->_literals[1]);return j::binary("<",_lhs41177,_rhs41178);})():_logical41175;})();return j::truth(_logical41174)?_v_37427_inside:_logical41174;})())){(void)((([&]()->V{V _receiver41183=_v_37415_at2.get();V _method41184=this->_literals[27];V _method=j::get(_receiver41183,_method41184);j::Args _params41185=j::Args{([&]()->V{V _lhs41179=([&]()->V{V _lhs41181=_v_37426_y;V _rhs41182=j::get(_v_37386_size.get(),this->_literals[15]);return V(j::number(_lhs41181)*j::number(_rhs41182));})();V _rhs41180=_v_37425_x;return j::binary("+",_lhs41179,_rhs41180);})()};return j::call(_method,_params41185,_receiver41183);})(),([&]()->V{V _receiver41186=_v_37416_chs.get();V _method41187=this->_literals[27];V _method=j::get(_receiver41186,_method41187);j::Args _params41188=j::Args{V(32.0)};return j::call(_method,_params41188,_receiver41186);})(),([&]()->V{V _receiver41189=_v_37417_ks.get();V _method41190=this->_literals[27];V _method=j::get(_receiver41189,_method41190);j::Args _params41191=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params41191,_receiver41189);})()));
}
continue;

}

_v_37428_cc=([&]()->V{V _callee41192=this->_v_36699_code.get();return j::call(_callee41192,j::Args{_v_37424_ch});})();
(void)(([&]()->V{V _base41194=_v_37419_roofed.get();V _key41195=_v_37423_c;V _assign41193=V(1.0);return j::put(_base41194,_key41195,_assign41193);})());
if(j::truth(j::unary("!",_v_37427_inside))){continue;
}
_v_37429_i=([&]()->V{V _lhs41196=([&]()->V{V _lhs41198=([&]()->V{V _lhs41200=_v_37422_r;V _rhs41201=j::get(_v_37396_pic.get(),this->_literals[24]);return j::binary("+",_lhs41200,_rhs41201);})();V _rhs41199=j::get(_v_37396_pic.get(),this->_literals[15]);return V(j::number(_lhs41198)*j::number(_rhs41199));})();V _rhs41197=_v_37423_c;return j::binary("+",_lhs41196,_rhs41197);})();
_v_37430_own=(j::truth(([&]()->V{V _logical41202=([&]()->V{V _logical41203=j::get(_v_37396_pic.get(),this->_literals[14]);return j::truth(_logical41203)?j::get(_v_37396_pic.get(),this->_literals[8]):_logical41203;})();return j::truth(_logical41202)?j::get(_v_37396_pic.get(),this->_literals[9]):_logical41202;})())?([&]()->V{V _callee41205=_v_37405_pairIndex.get();return j::call(_callee41205,j::Args{([&]()->V{V _obj41204=j::object();j::put(_obj41204,this->_literals[8],j::get(j::get(_v_37396_pic.get(),this->_literals[14]),j::get(j::get(_v_37396_pic.get(),this->_literals[8]),_v_37429_i)));j::put(_obj41204,this->_literals[9],j::get(j::get(_v_37396_pic.get(),this->_literals[14]),j::get(j::get(_v_37396_pic.get(),this->_literals[9]),_v_37429_i)));return _obj41204;})()});})():_v_37414_base.get());
_v_37431_k=(j::truth(([&]()->V{V _receiver41206=j::builtin("Object");V _method41207=this->_literals[205];V _method=j::get(_receiver41206,_method41207);j::Args _params41208=j::Args{_v_37392_paint.get(),_v_37424_ch};return j::call(_method,_params41208,_receiver41206);})())?([&]()->V{V _callee41209=_v_37405_pairIndex.get();return j::call(_callee41209,j::Args{j::get(_v_37392_paint.get(),_v_37424_ch)});})():_v_37430_own);
if(j::truth(([&]()->V{V _lhs41210=_v_37431_k;V _rhs41211=V(0.0);return j::binary("<",_lhs41210,_rhs41211);})())){(void)((_v_37418_plain.get()=V(true)));
}
(void)((([&]()->V{V _receiver41217=_v_37415_at2.get();V _method41218=this->_literals[27];V _method=j::get(_receiver41217,_method41218);j::Args _params41219=j::Args{([&]()->V{V _lhs41213=([&]()->V{V _lhs41215=_v_37426_y;V _rhs41216=j::get(_v_37386_size.get(),this->_literals[15]);return V(j::number(_lhs41215)*j::number(_rhs41216));})();V _rhs41214=_v_37425_x;return j::binary("+",_lhs41213,_rhs41214);})()};return j::call(_method,_params41219,_receiver41217);})(),([&]()->V{V _receiver41220=_v_37416_chs.get();V _method41221=this->_literals[27];V _method=j::get(_receiver41220,_method41221);j::Args _params41222=j::Args{_v_37428_cc};return j::call(_method,_params41222,_receiver41220);})(),([&]()->V{V _receiver41223=_v_37417_ks.get();V _method41224=this->_literals[27];V _method=j::get(_receiver41223,_method41224);j::Args _params41225=j::Args{_v_37431_k};return j::call(_method,_params41225,_receiver41223);})()));

}
}

}

return V{};
},2)};return j::call(_method,_params41228,_receiver41226);})());
return ([&]()->V{V _obj41229=j::object();j::put(_obj41229,this->_literals[32],([&]()->V{V _receiver41230=j::builtin("Int32Array");V _method41231=this->_literals[5];V _method=j::get(_receiver41230,_method41231);j::Args _params41232=j::Args{_v_37415_at2.get()};return j::call(_method,_params41232,_receiver41230);})());j::put(_obj41229,this->_literals[120],([&]()->V{V _receiver41233=j::builtin("Uint16Array");V _method41234=this->_literals[5];V _method=j::get(_receiver41233,_method41234);j::Args _params41235=j::Args{_v_37416_chs.get()};return j::call(_method,_params41235,_receiver41233);})());j::put(_obj41229,this->_literals[206],([&]()->V{V _receiver41236=j::builtin("Int16Array");V _method41237=this->_literals[5];V _method=j::get(_receiver41236,_method41237);j::Args _params41238=j::Args{_v_37417_ks.get()};return j::call(_method,_params41238,_receiver41236);})());j::put(_obj41229,this->_literals[207],_v_37404_pairs.get());j::put(_obj41229,this->_literals[208],_v_37418_plain.get());j::put(_obj41229,this->_literals[123],V::null());return _obj41229;})();

}

return V{};
},3);
this->_v_37432_thin.get()=j::function([=](const j::Args &_args_fn37433,const V &_receiver_fn37433,const V &_self_fn37433) mutable ->V{
j::Cell _v_37434_art;
j::Cell _v_37435_n;
_v_37434_art.get()=_args_fn37433[0];
_v_37435_n.get()=_args_fn37433[1];
{
j::Cell _v_37436_keep;
j::Cell _v_37440_far;
j::Cell _v_37448_to;
if(j::truth(([&]()->V{V _lhs41239=j::get(j::get(_v_37434_art.get(),this->_literals[207]),this->_literals[1]);V _rhs41240=_v_37435_n.get();return j::binary("<=",_lhs41239,_rhs41240);})())){return V{};
}
_v_37436_keep.get()=([&]()->V{V _receiver41259=j::builtin("Array");V _method41260=this->_literals[5];V _method=j::get(_receiver41259,_method41260);j::Args _params41261=j::Args{([&]()->V{V _obj41241=j::object();j::put(_obj41241,this->_literals[1],_v_37435_n.get());return _obj41241;})(),j::function([=](const j::Args &_args_fn37437,const V &_receiver_fn37437,const V &_self_fn37437) mutable ->V{
V _v_37438__;
V _v_37439_i;
_v_37438__=_args_fn37437[0];
_v_37439_i=_args_fn37437[1];
return j::get(j::get(_v_37434_art.get(),this->_literals[207]),([&]()->V{V _number41250=([&]()->V{V _lhs41251=([&]()->V{V _lhs41253=_v_37439_i;V _rhs41254=([&]()->V{V _lhs41255=j::get(j::get(_v_37434_art.get(),this->_literals[207]),this->_literals[1]);V _rhs41256=V(1.0);return V(j::number(_lhs41255)-j::number(_rhs41256));})();return V(j::number(_lhs41253)*j::number(_rhs41254));})();V _rhs41252=([&]()->V{V _lhs41257=_v_37435_n.get();V _rhs41258=V(1.0);return V(j::number(_lhs41257)-j::number(_rhs41258));})();return V(j::number(_lhs41251)/j::number(_rhs41252));})();return V(std::floor(j::number(_number41250)+.5));})());
return V{};
},2)};return j::call(_method,_params41261,_receiver41259);})();
_v_37440_far.get()=j::function([=](const j::Args &_args_fn37441,const V &_receiver_fn37441,const V &_self_fn37441) mutable ->V{
V _v_37442_a;
j::Cell _v_37443_b;
_v_37442_a=_args_fn37441[0];
_v_37443_b.get()=_args_fn37441[1];
return ([&]()->V{V _receiver41269=([&]()->V{V _callee41272=this->_v_36705_rgb.get();return j::call(_callee41272,j::Args{_v_37442_a});})();V _method41270=this->_literals[209];V _method=j::get(_receiver41269,_method41270);j::Args _params41271=j::Args{j::function([=](const j::Args &_args_fn37444,const V &_receiver_fn37444,const V &_self_fn37444) mutable ->V{
V _v_37445_sum;
V _v_37446_v;
V _v_37447_i;
_v_37445_sum=_args_fn37444[0];
_v_37446_v=_args_fn37444[1];
_v_37447_i=_args_fn37444[2];
return ([&]()->V{V _lhs41262=_v_37445_sum;V _rhs41263=([&]()->V{V _lhs41264=([&]()->V{V _lhs41266=_v_37446_v;V _rhs41267=j::get(([&]()->V{V _callee41268=this->_v_36705_rgb.get();return j::call(_callee41268,j::Args{_v_37443_b.get()});})(),_v_37447_i);return V(j::number(_lhs41266)-j::number(_rhs41267));})();V _rhs41265=V(2.0);return V(std::pow(j::number(_lhs41264),j::number(_rhs41265)));})();return j::binary("+",_lhs41262,_rhs41263);})();
return V{};
},3),V(0.0)};return j::call(_method,_params41271,_receiver41269);})();
return V{};
},2);
_v_37448_to.get()=([&]()->V{V _receiver41286=j::get(_v_37434_art.get(),this->_literals[207]);V _method41287=this->_literals[21];V _method=j::get(_receiver41286,_method41287);j::Args _params41288=j::Args{j::function([=](const j::Args &_args_fn37449,const V &_receiver_fn37449,const V &_self_fn37449) mutable ->V{
j::Cell _v_37450_l;
j::Cell _v_37451_d;
V _pattern41273=_args_fn37449[0];
_v_37450_l.get()=j::get(_pattern41273,V(0));
_v_37451_d.get()=j::get(_pattern41273,V(1));
{
j::Cell _v_37452_best;
j::Cell _v_37453_bd;
_v_37452_best.get()=V(0.0);
_v_37453_bd.get()=j::builtin("Infinity");
(void)(([&]()->V{V _receiver41283=_v_37436_keep.get();V _method41284=this->_literals[28];V _method=j::get(_receiver41283,_method41284);j::Args _params41285=j::Args{j::function([=](const j::Args &_args_fn37454,const V &_receiver_fn37454,const V &_self_fn37454) mutable ->V{
V _v_37455_kl;
V _v_37456_kd;
V _v_37457_k;
V _pattern41274=_args_fn37454[0];
_v_37455_kl=j::get(_pattern41274,V(0));
_v_37456_kd=j::get(_pattern41274,V(1));
_v_37457_k=_args_fn37454[1];
{
V _v_37458_dd;
_v_37458_dd=([&]()->V{V _lhs41275=([&]()->V{V _callee41277=_v_37440_far.get();return j::call(_callee41277,j::Args{_v_37450_l.get(),_v_37455_kl});})();V _rhs41276=([&]()->V{V _callee41278=_v_37440_far.get();return j::call(_callee41278,j::Args{_v_37451_d.get(),_v_37456_kd});})();return j::binary("+",_lhs41275,_rhs41276);})();
if(j::truth(([&]()->V{V _lhs41279=_v_37458_dd;V _rhs41280=_v_37453_bd.get();return j::binary("<",_lhs41279,_rhs41280);})())){(void)(((_v_37453_bd.get()=_v_37458_dd),(_v_37452_best.get()=_v_37457_k)));
}

}

return V{};
},2)};return j::call(_method,_params41285,_receiver41283);})());
return _v_37452_best.get();

}

return V{};
},1)};return j::call(_method,_params41288,_receiver41286);})();
(void)(([&]()->V{V _base41290=_v_37434_art.get();V _key41291=this->_literals[206];V _assign41289=([&]()->V{V _receiver41294=j::get(_v_37434_art.get(),this->_literals[206]);V _method41295=this->_literals[21];V _method=j::get(_receiver41294,_method41295);j::Args _params41296=j::Args{j::function([=](const j::Args &_args_fn37459,const V &_receiver_fn37459,const V &_self_fn37459) mutable ->V{
V _v_37460_k;
_v_37460_k=_args_fn37459[0];
return (j::truth(([&]()->V{V _lhs41292=_v_37460_k;V _rhs41293=V(0.0);return j::binary("<",_lhs41292,_rhs41293);})())?_v_37460_k:j::get(_v_37448_to.get(),_v_37460_k));
return V{};
},1)};return j::call(_method,_params41296,_receiver41294);})();return j::put(_base41290,_key41291,_assign41289);})());
(void)(([&]()->V{V _base41298=_v_37434_art.get();V _key41299=this->_literals[207];V _assign41297=_v_37436_keep.get();return j::put(_base41298,_key41299,_assign41297);})());
(void)(([&]()->V{V _base41301=_v_37434_art.get();V _key41302=this->_literals[123];V _assign41300=V::null();return j::put(_base41301,_key41302,_assign41300);})());

}

return V{};
},2);
this->_v_37461_drawArt.get()=j::function([=](const j::Args &_args_fn37462,const V &_receiver_fn37462,const V &_self_fn37462) mutable ->V{
V _v_37463_s;
V _v_37464_art;
_v_37463_s=_args_fn37462[0];
_v_37464_art=_args_fn37462[1];
{
V _v_37465_coloured;
V _v_37466_now;
_v_37465_coloured=([&]()->V{V _logical41303=j::unary("!",j::get(_v_37463_s,this->_literals[12]));return j::truth(_logical41303)?j::unary("!",j::unary("!",j::get(_v_37463_s,this->_literals[14]))):_logical41303;})();
_v_37466_now=V::null();
if(j::truth(([&]()->V{V _logical41304=_v_37465_coloured;return j::truth(_logical41304)?j::get(j::get(_v_37464_art,this->_literals[207]),this->_literals[1]):_logical41304;})())){
if(j::truth(([&]()->V{V _logical41305=j::unary("!",j::get(_v_37464_art,this->_literals[123]));return !j::truth(_logical41305)?([&]()->V{V _lhs41306=j::get(j::get(_v_37464_art,this->_literals[123]),this->_literals[14]);V _rhs41307=j::get(_v_37463_s,this->_literals[14]);return V(!j::equal(_lhs41306,_rhs41307,true));})():_logical41305;})())){
j::Cell _v_37467_pal;
_v_37467_pal.get()=j::get(_v_37463_s,this->_literals[14]);
(void)(([&]()->V{V _base41309=_v_37464_art;V _key41310=this->_literals[123];V _assign41308=([&]()->V{V _obj41311=j::object();j::put(_obj41311,this->_literals[14],_v_37467_pal.get());j::put(_obj41311,this->_literals[16],([&]()->V{V _receiver41316=j::builtin("Uint8Array");V _method41317=this->_literals[5];V _method=j::get(_receiver41316,_method41317);j::Args _params41318=j::Args{j::get(_v_37464_art,this->_literals[207]),j::function([=](const j::Args &_args_fn37468,const V &_receiver_fn37468,const V &_self_fn37468) mutable ->V{
V _v_37469_l;
V _pattern41312=_args_fn37468[0];
_v_37469_l=j::get(_pattern41312,V(0));
return ([&]()->V{V _receiver41313=_v_37467_pal.get();V _method41314=this->_literals[175];V _method=j::get(_receiver41313,_method41314);j::Args _params41315=j::Args{_v_37469_l,V(true)};return j::call(_method,_params41315,_receiver41313);})();
return V{};
},1)};return j::call(_method,_params41318,_receiver41316);})());j::put(_obj41311,this->_literals[9],([&]()->V{V _receiver41323=j::builtin("Uint8Array");V _method41324=this->_literals[5];V _method=j::get(_receiver41323,_method41324);j::Args _params41325=j::Args{j::get(_v_37464_art,this->_literals[207]),j::function([=](const j::Args &_args_fn37470,const V &_receiver_fn37470,const V &_self_fn37470) mutable ->V{
V _v_37471_d;
V _pattern41319=_args_fn37470[0];
_v_37471_d=j::get(_pattern41319,V(1));
return ([&]()->V{V _receiver41320=_v_37467_pal.get();V _method41321=this->_literals[175];V _method=j::get(_receiver41320,_method41321);j::Args _params41322=j::Args{_v_37471_d,V(false)};return j::call(_method,_params41322,_receiver41320);})();
return V{};
},1)};return j::call(_method,_params41325,_receiver41323);})());return _obj41311;})();return j::put(_base41309,_key41310,_assign41308);})());

}

(void)((_v_37466_now=(j::truth(j::get(_v_37463_s,this->_literals[16]))?j::get(j::get(_v_37464_art,this->_literals[123]),this->_literals[16]):j::get(j::get(_v_37464_art,this->_literals[123]),this->_literals[9]))));

}

{V _v_37472_i;
_v_37472_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs41327=_v_37472_i;V _rhs41328=j::get(j::get(_v_37464_art,this->_literals[32]),this->_literals[1]);return j::binary("<",_lhs41327,_rhs41328);})());(void)(j::increment(_v_37472_i,1,false))){
V _v_37473_k;
_v_37473_k=j::get(j::get(_v_37464_art,this->_literals[206]),_v_37472_i);
(void)(([&]()->V{V _receiver41332=_v_37463_s;V _method41333=this->_literals[180];V _method=j::get(_receiver41332,_method41333);j::Args _params41334=j::Args{j::get(j::get(_v_37464_art,this->_literals[32]),_v_37472_i),j::get(j::get(_v_37464_art,this->_literals[120]),_v_37472_i),(j::truth(([&]()->V{V _logical41329=_v_37466_now;return j::truth(_logical41329)?([&]()->V{V _lhs41330=_v_37473_k;V _rhs41331=V(0.0);return j::binary(">=",_lhs41330,_rhs41331);})():_logical41329;})())?j::get(_v_37466_now,_v_37473_k):this->_v_36692_NONE.get())};return j::call(_method,_params41334,_receiver41332);})());

}
}

}

return V{};
},2);
this->_v_37475_particles.get()=j::function([=](const j::Args &_args_fn37476,const V &_receiver_fn37476,const V &_self_fn37476) mutable ->V{
V _v_37477_spec;
V _v_37478_systems;
V _v_37479_options;
_v_37477_spec=_args_fn37476[0];
_v_37478_systems=_args_fn37476[1];
_v_37479_options=_args_fn37476[2];
{
j::Cell _v_37480_full;
j::Cell _v_37481_period;
V _v_37482_cols;
V _v_37483_rows;
V _v_37484_size;
j::Cell _v_37485_made;
j::Cell _v_37486_marked;
j::Cell _v_37491_back;
j::Cell _v_37492_front;
j::Cell _v_37493_arts;
j::Cell _v_37496_plans;
j::Cell _v_37509_plain;
V _v_37512_crowded;
V _v_37520_palette;
V _v_37523_blind;
V _v_37526__p;
V _v_37527__f;
V _v_37528__b;
V _v_37529_rest;
j::Cell _v_37530_o;
_v_37480_full.get()=([&]()->V{V _callee41335=this->_v_36707_specOf.get();return j::call(_callee41335,j::Args{_v_37477_spec,this->_literals[210]});})();
_v_37481_period.get()=(j::truth(([&]()->V{V _lhs41336=([&]()->V{V _chain41338=_v_37477_spec;if(j::nullish(_chain41338))return V{};V _chain41339=j::get(_chain41338,this->_literals[186]);return _chain41339;})();V _rhs41337=j::builtin("undefined");return V(j::equal(_lhs41336,_rhs41337,true));})())?this->_v_37474_PERIOD.get():([&]()->V{V _callee41340=this->_v_37294_checkPeriod.get();return j::call(_callee41340,j::Args{j::get(_v_37477_spec,this->_literals[186]),this->_literals[211]});})());
V _pattern41341=_v_37480_full.get();
_v_37482_cols=j::get(_pattern41341,this->_literals[15]);
_v_37483_rows=j::get(_pattern41341,this->_literals[50]);
if(j::truth(([&]()->V{V _logical41342=([&]()->V{V _logical41343=([&]()->V{V _logical41344=j::unary("!",([&]()->V{V _receiver41345=j::builtin("Number");V _method41346=this->_literals[61];V _method=j::get(_receiver41345,_method41346);j::Args _params41347=j::Args{_v_37482_cols};return j::call(_method,_params41347,_receiver41345);})());return !j::truth(_logical41344)?([&]()->V{V _lhs41348=_v_37482_cols;V _rhs41349=V(1.0);return j::binary("<",_lhs41348,_rhs41349);})():_logical41344;})();return !j::truth(_logical41343)?j::unary("!",([&]()->V{V _receiver41350=j::builtin("Number");V _method41351=this->_literals[61];V _method=j::get(_receiver41350,_method41351);j::Args _params41352=j::Args{_v_37483_rows};return j::call(_method,_params41352,_receiver41350);})()):_logical41343;})();return !j::truth(_logical41342)?([&]()->V{V _lhs41353=_v_37483_rows;V _rhs41354=V(1.0);return j::binary("<",_lhs41353,_rhs41354);})():_logical41342;})())){(void)(([&]()->V{V _callee41358=this->_v_36700_fail.get();return j::call(_callee41358,j::Args{([&]()->V{std::u16string _text41355;_text41355+=u"particles() takes whole numbers of columns and rows of 1 or more, not ";_text41355+=j::string(([&]()->V{V _callee41356=j::builtin("String");return j::call(_callee41356,j::Args{_v_37482_cols});})());_text41355+=u" by ";_text41355+=j::string(([&]()->V{V _callee41357=j::builtin("String");return j::call(_callee41357,j::Args{_v_37483_rows});})());_text41355+=u"";return V(std::move(_text41355));})()});})());
}
_v_37484_size=(j::truth(_v_37481_period.get())?([&]()->V{V _obj41359=j::object();j::put(_obj41359,this->_literals[15],_v_37482_cols);j::put(_obj41359,this->_literals[50],_v_37483_rows);j::put(_obj41359,this->_literals[186],_v_37481_period.get());return _obj41359;})():([&]()->V{V _obj41360=j::object();j::put(_obj41360,this->_literals[15],_v_37482_cols);j::put(_obj41360,this->_literals[50],_v_37483_rows);return _obj41360;})());
if(j::truth(([&]()->V{V _lhs41361=j::unary("typeof",_v_37478_systems);V _rhs41362=this->_literals[4];return V(j::equal(_lhs41361,_rhs41362,true));})())){
if(j::truth(j::unary("!",([&]()->V{V _receiver41363=j::builtin("Object");V _method41364=this->_literals[205];V _method=j::get(_receiver41363,_method41364);j::Args _params41365=j::Args{this->_v_37690_presets.get(),_v_37478_systems};return j::call(_method,_params41365,_receiver41363);})()))){(void)(([&]()->V{V _callee41374=this->_v_36700_fail.get();return j::call(_callee41374,j::Args{([&]()->V{std::u16string _text41366;_text41366+=u"particles() takes a preset by name, ";_text41366+=j::string(([&]()->V{V _callee41370=this->_v_36731_quoted.get();return j::call(_callee41370,j::Args{([&]()->V{V _receiver41367=j::builtin("Object");V _method41368=this->_literals[42];V _method=j::get(_receiver41367,_method41368);j::Args _params41369=j::Args{this->_v_37690_presets.get()};return j::call(_method,_params41369,_receiver41367);})()});})());_text41366+=u", or systems of your own, not ";_text41366+=j::string(([&]()->V{V _receiver41371=j::builtin("JSON");V _method41372=this->_literals[3];V _method=j::get(_receiver41371,_method41372);j::Args _params41373=j::Args{_v_37478_systems};return j::call(_method,_params41373,_receiver41371);})());_text41366+=u"";return V(std::move(_text41366));})()});})());
}
(void)((_v_37485_made.get()=([&]()->V{V _receiver41376=this->_v_37690_presets.get();V _method41377=_v_37478_systems;V _method=j::get(_receiver41376,_method41377);j::Args _params41378=j::Args{_v_37484_size,_v_37479_options};return j::call(_method,_params41378,_receiver41376);})()));

}
else {if(j::truth(([&]()->V{V _lhs41379=j::unary("typeof",_v_37478_systems);V _rhs41380=this->_literals[46];return V(j::equal(_lhs41379,_rhs41380,true));})())){(void)((_v_37485_made.get()=([&]()->V{V _callee41382=_v_37478_systems;return j::call(_callee41382,j::Args{_v_37484_size,_v_37479_options});})()));
}else {
if(j::truth(([&]()->V{V _lhs41383=_v_37479_options;V _rhs41384=j::builtin("undefined");return V(!j::equal(_lhs41383,_rhs41384,true));})())){(void)(([&]()->V{V _callee41385=this->_v_36700_fail.get();return j::call(_callee41385,j::Args{this->_literals[212]});})());
}
(void)((_v_37485_made.get()=_v_37478_systems));

}

}
_v_37486_marked.get()=j::function([=](const j::Args &_args_fn37487,const V &_receiver_fn37487,const V &_self_fn37487) mutable ->V{
V _v_37488_sys;
_v_37488_sys=_args_fn37487[0];
return ([&]()->V{V _logical41387=([&]()->V{V _logical41388=([&]()->V{V _logical41389=([&]()->V{V _logical41390=j::unary("!",j::unary("!",_v_37488_sys));return j::truth(_logical41390)?([&]()->V{V _lhs41391=j::unary("typeof",_v_37488_sys);V _rhs41392=this->_literals[6];return V(j::equal(_lhs41391,_rhs41392,true));})():_logical41390;})();return j::truth(_logical41389)?j::unary("!",j::unary("!",j::get(_v_37488_sys,this->_literals[56]))):_logical41389;})();return j::truth(_logical41388)?([&]()->V{V _lhs41393=j::unary("typeof",j::get(_v_37488_sys,this->_literals[56]));V _rhs41394=this->_literals[6];return V(j::equal(_lhs41393,_rhs41394,true));})():_logical41388;})();return j::truth(_logical41387)?([&]()->V{V _lhs41395=this->_literals[45];V _rhs41396=j::get(_v_37488_sys,this->_literals[56]);return j::binary("in",_lhs41395,_rhs41396);})():_logical41387;})();
return V{};
},1);
(void)((_v_37485_made.get()=(j::truth(([&]()->V{V _receiver41398=j::builtin("Array");V _method41399=this->_literals[0];V _method=j::get(_receiver41398,_method41399);j::Args _params41400=j::Args{_v_37485_made.get()};return j::call(_method,_params41400,_receiver41398);})())?([&]()->V{V _receiver41404=_v_37485_made.get();V _method41405=this->_literals[21];V _method=j::get(_receiver41404,_method41405);j::Args _params41406=j::Args{j::function([=](const j::Args &_args_fn37489,const V &_receiver_fn37489,const V &_self_fn37489) mutable ->V{
V _v_37490_sys;
_v_37490_sys=_args_fn37489[0];
return (j::truth(([&]()->V{V _callee41401=_v_37486_marked.get();return j::call(_callee41401,j::Args{_v_37490_sys});})())?([&]()->V{V _obj41402=j::object();V _spread41403=_v_37490_sys;for(const auto &_key:j::keys(_spread41403))j::put(_obj41402,_key,j::get(_spread41403,_key));return _obj41402;})():_v_37490_sys);
return V{};
},1)};return j::call(_method,_params41406,_receiver41404);})():(j::truth(([&]()->V{V _callee41407=_v_37486_marked.get();return j::call(_callee41407,j::Args{_v_37485_made.get()});})())?([&]()->V{V _obj41408=j::object();V _spread41409=_v_37485_made.get();for(const auto &_key:j::keys(_spread41409))j::put(_obj41408,_key,j::get(_spread41409,_key));return _obj41408;})():_v_37485_made.get()))));
_v_37491_back.get()=([&]()->V{V _callee41412=this->_v_37383_artOf.get();return j::call(_callee41412,j::Args{([&]()->V{V _chain41410=_v_37477_spec;if(j::nullish(_chain41410))return V{};V _chain41411=j::get(_chain41410,this->_literals[115]);return _chain41411;})(),_v_37484_size,this->_literals[213]});})();
_v_37492_front.get()=([&]()->V{V _callee41415=this->_v_37383_artOf.get();return j::call(_callee41415,j::Args{([&]()->V{V _chain41413=_v_37477_spec;if(j::nullish(_chain41413))return V{};V _chain41414=j::get(_chain41413,this->_literals[214]);return _chain41414;})(),_v_37484_size,this->_literals[215]});})();
_v_37493_arts.get()=([&]()->V{V _receiver41416=([&]()->V{j::Args _array41419;_array41419.push_back(_v_37491_back.get());_array41419.push_back(_v_37492_front.get());return j::array(std::move(_array41419));})();V _method41417=this->_literals[43];V _method=j::get(_receiver41416,_method41417);j::Args _params41418=j::Args{j::function([=](const j::Args &_args_fn37494,const V &_receiver_fn37494,const V &_self_fn37494) mutable ->V{
V _v_37495_a;
_v_37495_a=_args_fn37494[0];
return j::unary("!",j::unary("!",_v_37495_a));
return V{};
},1)};return j::call(_method,_params41418,_receiver41416);})();
_v_37496_plans.get()=([&]()->V{V _callee41420=this->_v_36904_plansOf.get();return j::call(_callee41420,j::Args{_v_37485_made.get(),this->_literals[211]});})();
{for(const auto &_item41421:j::elements(_v_37496_plans.get())){V _v_37497_pl;
_v_37497_pl=_item41421;
{
j::Cell _v_37498_mark;
V _v_37499_k;
V _v_37500_dx;
V _v_37501_dy;
if(j::truth(j::unary("!",([&]()->V{V _lhs41422=this->_literals[45];V _rhs41423=j::get(_v_37497_pl,this->_literals[56]);return j::binary("in",_lhs41422,_rhs41423);})()))){continue;
}
_v_37498_mark.get()=j::get(j::get(_v_37497_pl,this->_literals[56]),this->_literals[45]);
_v_37499_k=([&]()->V{V _receiver41424=_v_37498_mark.get();V _method41425=this->_literals[179];V _method=j::get(_receiver41424,_method41425);j::Args _params41426=j::Args{V(0.0)};return j::call(_method,_params41426,_receiver41424);})();
_v_37500_dx=([&]()->V{j::Args _array41427;return j::array(std::move(_array41427));})();
_v_37501_dy=([&]()->V{j::Args _array41428;return j::array(std::move(_array41428));})();
{for(const auto &_item41429:j::elements(_v_37493_arts.get())){V _v_37502_a;
_v_37502_a=_item41429;
{V _v_37503_j;
_v_37503_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs41430=_v_37503_j;V _rhs41431=j::get(j::get(_v_37502_a,this->_literals[32]),this->_literals[1]);return j::binary("<",_lhs41430,_rhs41431);})());(void)(j::increment(_v_37503_j,1,false))){if(j::truth(([&]()->V{V _lhs41432=j::get(j::get(_v_37502_a,this->_literals[120]),_v_37503_j);V _rhs41433=_v_37499_k;return V(j::equal(_lhs41432,_rhs41433,true));})())){
(void)((([&]()->V{V _receiver41436=_v_37500_dx;V _method41437=this->_literals[27];V _method=j::get(_receiver41436,_method41437);j::Args _params41438=j::Args{([&]()->V{V _lhs41434=j::get(j::get(_v_37502_a,this->_literals[32]),_v_37503_j);V _rhs41435=_v_37482_cols;return V(std::fmod(j::number(_lhs41434),j::number(_rhs41435)));})()};return j::call(_method,_params41438,_receiver41436);})(),([&]()->V{V _receiver41444=_v_37501_dy;V _method41445=this->_literals[27];V _method=j::get(_receiver41444,_method41445);j::Args _params41446=j::Args{([&]()->V{V _number41441=([&]()->V{V _lhs41442=j::get(j::get(_v_37502_a,this->_literals[32]),_v_37503_j);V _rhs41443=_v_37482_cols;return V(j::number(_lhs41442)/j::number(_rhs41443));})();return V(std::floor(j::number(_number41441)));})()};return j::call(_method,_params41446,_receiver41444);})()));
(void)(([&]()->V{V _base41448=j::get(_v_37502_a,this->_literals[120]);V _key41449=_v_37503_j;V _assign41447=V(32.0);return j::put(_base41448,_key41449,_assign41447);})());

}

}}
}}
if(j::truth(j::unary("!",j::get(_v_37500_dx,this->_literals[1])))){(void)(([&]()->V{V _callee41454=this->_v_36700_fail.get();return j::call(_callee41454,j::Args{([&]()->V{std::u16string _text41450;_text41450+=u"";_text41450+=j::string(j::get(_v_37497_pl,this->_literals[94]));_text41450+=u".emitter.mark is ";_text41450+=j::string(([&]()->V{V _receiver41451=j::builtin("JSON");V _method41452=this->_literals[3];V _method=j::get(_receiver41451,_method41452);j::Args _params41453=j::Args{_v_37498_mark.get()};return j::call(_method,_params41453,_receiver41451);})());_text41450+=u", and particles()'s front and back art have none: type it in the art where the particles come from";return V(std::move(_text41450));})()});})());
}
(void)(([&]()->V{V _base41456=_v_37497_pl;V _key41457=this->_literals[56];V _assign41455=([&]()->V{V _obj41458=j::object();j::put(_obj41458,this->_literals[44],([&]()->V{V _obj41459=j::object();j::put(_obj41459,this->_literals[29],_v_37482_cols);j::put(_obj41459,this->_literals[31],_v_37483_rows);j::put(_obj41459,this->_literals[32],this->_literals[216]);j::put(_obj41459,this->_literals[34],([&]()->V{V _receiver41460=j::builtin("Int32Array");V _method41461=this->_literals[5];V _method=j::get(_receiver41460,_method41461);j::Args _params41462=j::Args{_v_37500_dx};return j::call(_method,_params41462,_receiver41460);})());j::put(_obj41459,this->_literals[35],([&]()->V{V _receiver41463=j::builtin("Int32Array");V _method41464=this->_literals[5];V _method=j::get(_receiver41463,_method41464);j::Args _params41465=j::Args{_v_37501_dy};return j::call(_method,_params41465,_receiver41463);})());j::put(_obj41459,this->_literals[36],([&]()->V{V _receiver41466=([&]()->V{V _callee41469=j::builtin("Uint16Array");return j::construct(_callee41469,j::Args{j::get(_v_37500_dx,this->_literals[1])});})();V _method41467=this->_literals[217];V _method=j::get(_receiver41466,_method41467);j::Args _params41468=j::Args{_v_37499_k};return j::call(_method,_params41468,_receiver41466);})());j::put(_obj41459,this->_literals[37],([&]()->V{V _receiver41470=_v_37500_dx;V _method41471=this->_literals[21];V _method=j::get(_receiver41470,_method41471);j::Args _params41472=j::Args{j::function([=](const j::Args &_args_fn37504,const V &_receiver_fn37504,const V &_self_fn37504) mutable ->V{
return _v_37498_mark.get();
return V{};
},0)};return j::call(_method,_params41472,_receiver41470);})());return _obj41459;})());return _obj41458;})();return j::put(_base41456,_key41457,_assign41455);})());

}
}}
if(j::truth(_v_37481_period.get())){
V _v_37505_odd;
_v_37505_odd=([&]()->V{V _receiver41474=_v_37496_plans.get();V _method41475=this->_literals[189];V _method=j::get(_receiver41474,_method41475);j::Args _params41476=j::Args{j::function([=](const j::Args &_args_fn37506,const V &_receiver_fn37506,const V &_self_fn37506) mutable ->V{
V _v_37507_pl;
_v_37507_pl=_args_fn37506[0];
return ([&]()->V{V _callee41473=this->_v_37284_unlike.get();return j::call(_callee41473,j::Args{_v_37507_pl,_v_37481_period.get()});})();
return V{};
},1)};return j::call(_method,_params41476,_receiver41474);})();
if(j::truth(([&]()->V{V _logical41477=_v_37505_odd;return j::truth(_logical41477)?([&]()->V{V _lhs41478=([&]()->V{V _chain41480=_v_37477_spec;if(j::nullish(_chain41480))return V{};V _chain41481=j::get(_chain41480,this->_literals[186]);return _chain41481;})();V _rhs41479=j::builtin("undefined");return V(!j::equal(_lhs41478,_rhs41479,true));})():_logical41477;})())){(void)(([&]()->V{V _callee41484=this->_v_36700_fail.get();return j::call(_callee41484,j::Args{([&]()->V{std::u16string _text41482;_text41482+=u"";_text41482+=j::string(j::get(_v_37505_odd,this->_literals[94]));_text41482+=u" can't repeat every ";_text41482+=j::string(_v_37481_period.get());_text41482+=u" seconds as period asks: ";_text41482+=j::string(([&]()->V{V _callee41483=this->_v_37284_unlike.get();return j::call(_callee41483,j::Args{_v_37505_odd,_v_37481_period.get()});})());_text41482+=u". Change that, or give period: 0";return V(std::move(_text41482));})()});})());
}
if(j::truth(_v_37505_odd)){(void)((_v_37481_period.get()=V(0.0)));
}

}

{for(const auto &_item41486:j::elements(_v_37496_plans.get())){V _v_37508_pl;
_v_37508_pl=_item41486;
{
(void)(([&]()->V{V _callee41489=this->_v_36878_fit.get();return j::call(_callee41489,j::Args{_v_37508_pl,([&]()->V{V _obj41487=j::object();j::put(_obj41487,this->_literals[116],V(0.0));j::put(_obj41487,this->_literals[159],_v_37482_cols);j::put(_obj41487,this->_literals[117],V(0.0));j::put(_obj41487,this->_literals[157],_v_37483_rows);return _obj41487;})(),([&]()->V{V _logical41488=j::get(_v_37480_full.get(),this->_literals[149]);return j::nullish(_logical41488)?V(2.0):_logical41488;})()});})());
(void)(([&]()->V{V _callee41490=this->_v_36893_checkAlive.get();return j::call(_callee41490,j::Args{_v_37508_pl,_v_37481_period.get()});})());

}
}}
_v_37509_plain.get()=([&]()->V{V _receiver41491=_v_37493_arts.get();V _method41492=this->_literals[196];V _method=j::get(_receiver41491,_method41492);j::Args _params41493=j::Args{j::function([=](const j::Args &_args_fn37510,const V &_receiver_fn37510,const V &_self_fn37510) mutable ->V{
V _v_37511_a;
_v_37511_a=_args_fn37510[0];
return j::get(_v_37511_a,this->_literals[208]);
return V{};
},1)};return j::call(_method,_params41493,_receiver41491);})();
_v_37512_crowded=j::function([=](const j::Args &_args_fn37513,const V &_receiver_fn37513,const V &_self_fn37513) mutable ->V{
return ([&]()->V{V _lhs41494=([&]()->V{V _callee41501=this->_v_37327_total.get();return j::call(_callee41501,j::Args{([&]()->V{V _callee41500=this->_v_37313_distinct.get();return j::call(_callee41500,j::Args{([&]()->V{V _callee41499=this->_v_37350_pairsFor.get();return j::call(_callee41499,j::Args{_v_37496_plans.get(),j::get(_v_37480_full.get(),this->_literals[14]),([&]()->V{V _receiver41496=_v_37493_arts.get();V _method41497=this->_literals[195];V _method=j::get(_receiver41496,_method41497);j::Args _params41498=j::Args{j::function([=](const j::Args &_args_fn37514,const V &_receiver_fn37514,const V &_self_fn37514) mutable ->V{
V _v_37515_a;
_v_37515_a=_args_fn37514[0];
return j::get(_v_37515_a,this->_literals[207]);
return V{};
},1)};return j::call(_method,_params41498,_receiver41496);})(),_v_37509_plain.get(),this->_literals[211]});})()});})()});})();V _rhs41495=V(64.0);return j::binary(">",_lhs41494,_rhs41495);})();
return V{};
},0);
{V _v_37516_n;
_v_37516_n=([&]()->V{V _receiver41506=j::builtin("Math");V _method41507=this->_literals[30];V _method=j::get(_receiver41506,_method41507);j::Args _params41508=([&](){j::Args _args41502;_args41502.push_back(V(0.0));for(const auto &_v:j::elements(([&]()->V{V _receiver41503=_v_37493_arts.get();V _method41504=this->_literals[21];V _method=j::get(_receiver41503,_method41504);j::Args _params41505=j::Args{j::function([=](const j::Args &_args_fn37517,const V &_receiver_fn37517,const V &_self_fn37517) mutable ->V{
V _v_37518_a;
_v_37518_a=_args_fn37517[0];
return j::get(j::get(_v_37518_a,this->_literals[207]),this->_literals[1]);
return V{};
},1)};return j::call(_method,_params41505,_receiver41503);})()))_args41502.push_back(_v);return _args41502;})();return j::call(_method,_params41508,_receiver41506);})();
for(;j::truth(([&]()->V{V _logical41509=([&]()->V{V _lhs41510=_v_37516_n;V _rhs41511=V(2.0);return j::binary(">",_lhs41510,_rhs41511);})();return j::truth(_logical41509)?([&]()->V{V _callee41512=_v_37512_crowded;return j::call(_callee41512,j::Args{});})():_logical41509;})());(void)0){
(void)((_v_37516_n=([&]()->V{V _receiver41521=j::builtin("Math");V _method41522=this->_literals[30];V _method=j::get(_receiver41521,_method41522);j::Args _params41523=j::Args{V(2.0),([&]()->V{V _number41516=([&]()->V{V _lhs41517=_v_37516_n;V _rhs41518=V(0.75);return V(j::number(_lhs41517)*j::number(_rhs41518));})();return V(std::floor(j::number(_number41516)));})()};return j::call(_method,_params41523,_receiver41521);})()));
{for(const auto &_item41524:j::elements(_v_37493_arts.get())){V _v_37519_a;
_v_37519_a=_item41524;
(void)(([&]()->V{V _callee41525=this->_v_37432_thin.get();return j::call(_callee41525,j::Args{_v_37519_a,_v_37516_n});})());
}}

}
}
_v_37520_palette=([&]()->V{V _callee41529=this->_v_37369_paletteFor.get();return j::call(_callee41529,j::Args{_v_37496_plans.get(),j::get(_v_37480_full.get(),this->_literals[14]),([&]()->V{V _receiver41526=_v_37493_arts.get();V _method41527=this->_literals[195];V _method=j::get(_receiver41526,_method41527);j::Args _params41528=j::Args{j::function([=](const j::Args &_args_fn37521,const V &_receiver_fn37521,const V &_self_fn37521) mutable ->V{
V _v_37522_a;
_v_37522_a=_args_fn37521[0];
return j::get(_v_37522_a,this->_literals[207]);
return V{};
},1)};return j::call(_method,_params41528,_receiver41526);})(),_v_37509_plain.get(),this->_literals[211]});})();
_v_37523_blind=(j::truth(_v_37520_palette)?j::builtin("undefined"):([&]()->V{V _receiver41530=_v_37496_plans.get();V _method41531=this->_literals[189];V _method=j::get(_receiver41530,_method41531);j::Args _params41532=j::Args{j::function([=](const j::Args &_args_fn37524,const V &_receiver_fn37524,const V &_self_fn37524) mutable ->V{
V _v_37525_pl;
_v_37525_pl=_args_fn37524[0];
return j::get(_v_37525_pl,this->_literals[17]);
return V{};
},1)};return j::call(_method,_params41532,_receiver41530);})());
if(j::truth(_v_37523_blind)){(void)(([&]()->V{V _callee41534=this->_v_36700_fail.get();return j::call(_callee41534,j::Args{([&]()->V{std::u16string _text41533;_text41533+=u"";_text41533+=j::string(j::get(_v_37523_blind,this->_literals[94]));_text41533+=u".color picks each particle's colour from the piece's palette, and it has none: give particles() a palette, such as palette: [\"#f97316\", \"#facc15\"]";return V(std::move(_text41533));})()});})());
}
V _pattern41535=_v_37480_full.get();
_v_37526__p=j::get(_pattern41535,this->_literals[186]);
_v_37527__f=j::get(_pattern41535,this->_literals[214]);
_v_37528__b=j::get(_pattern41535,this->_literals[115]);
_v_37529_rest=j::object_rest(_pattern41535,{j::string(this->_literals[186]),j::string(this->_literals[214]),j::string(this->_literals[115])});
_v_37530_o.get()=(j::truth(_v_37481_period.get())?([&]()->V{V _obj41536=j::object();j::put(_obj41536,this->_literals[186],_v_37481_period.get());return _obj41536;})():([&]()->V{V _obj41537=j::object();return _obj41537;})());
return ([&]()->V{V _callee41549=this->_v_36704_piece.get();return j::call(_callee41549,j::Args{([&]()->V{V _obj41538=j::object();V _spread41539=_v_37529_rest;for(const auto &_key:j::keys(_spread41539))j::put(_obj41538,_key,j::get(_spread41539,_key));j::put(_obj41538,this->_literals[14],_v_37520_palette);V _spread41540=(j::truth(([&]()->V{V _logical41541=_v_37481_period.get();return j::truth(_logical41541)?([&]()->V{V _lhs41542=j::get(_v_37529_rest,this->_literals[218]);V _rhs41543=j::builtin("undefined");return V(j::equal(_lhs41542,_rhs41543,true));})():_logical41541;})())?([&]()->V{V _obj41544=j::object();j::put(_obj41544,this->_literals[218],_v_37481_period.get());return _obj41544;})():([&]()->V{V _obj41545=j::object();return _obj41545;})());for(const auto &_key:j::keys(_spread41540))j::put(_obj41538,_key,j::get(_spread41540,_key));return _obj41538;})(),j::function([=](const j::Args &_args_fn37531,const V &_receiver_fn37531,const V &_self_fn37531) mutable ->V{
V _v_37532_t;
V _v_37533_s;
_v_37532_t=_args_fn37531[0];
_v_37533_s=_args_fn37531[1];
{
if(j::truth(_v_37491_back.get())){(void)(([&]()->V{V _callee41546=this->_v_37461_drawArt.get();return j::call(_callee41546,j::Args{_v_37533_s,_v_37491_back.get()});})());
}
(void)(([&]()->V{V _callee41547=this->_v_37298_drawParticles.get();return j::call(_callee41547,j::Args{_v_37533_s,_v_37485_made.get(),_v_37532_t,_v_37530_o.get()});})());
if(j::truth(_v_37492_front.get())){(void)(([&]()->V{V _callee41548=this->_v_37461_drawArt.get();return j::call(_callee41548,j::Args{_v_37533_s,_v_37492_front.get()});})());
}

}

return V{};
},2)});})();

}

return V{};
},3);
this->_v_37534_sizeOf.get()=j::function([=](const j::Args &_args_fn37535,const V &_receiver_fn37535,const V &_self_fn37535) mutable ->V{
V _v_37536_size;
V _v_37537_what;
_v_37536_size=_args_fn37535[0];
_v_37537_what=_args_fn37535[1];
{
V _v_37538_s;
_v_37538_s=_v_37536_size;
if(j::truth(([&]()->V{V _logical41550=([&]()->V{V _logical41551=([&]()->V{V _logical41552=([&]()->V{V _logical41553=([&]()->V{V _logical41554=j::unary("!",_v_37538_s);return !j::truth(_logical41554)?([&]()->V{V _lhs41555=j::unary("typeof",_v_37538_s);V _rhs41556=this->_literals[6];return V(!j::equal(_lhs41555,_rhs41556,true));})():_logical41554;})();return !j::truth(_logical41553)?j::unary("!",([&]()->V{V _receiver41557=j::builtin("Number");V _method41558=this->_literals[61];V _method=j::get(_receiver41557,_method41558);j::Args _params41559=j::Args{j::get(_v_37538_s,this->_literals[15])};return j::call(_method,_params41559,_receiver41557);})()):_logical41553;})();return !j::truth(_logical41552)?([&]()->V{V _lhs41560=j::get(_v_37538_s,this->_literals[15]);V _rhs41561=V(1.0);return j::binary("<",_lhs41560,_rhs41561);})():_logical41552;})();return !j::truth(_logical41551)?j::unary("!",([&]()->V{V _receiver41562=j::builtin("Number");V _method41563=this->_literals[61];V _method=j::get(_receiver41562,_method41563);j::Args _params41564=j::Args{j::get(_v_37538_s,this->_literals[50])};return j::call(_method,_params41564,_receiver41562);})()):_logical41551;})();return !j::truth(_logical41550)?([&]()->V{V _lhs41565=j::get(_v_37538_s,this->_literals[50]);V _rhs41566=V(1.0);return j::binary("<",_lhs41565,_rhs41566);})():_logical41550;})())){(void)(([&]()->V{V _callee41571=this->_v_36700_fail.get();return j::call(_callee41571,j::Args{([&]()->V{std::u16string _text41567;_text41567+=u"";_text41567+=j::string(_v_37537_what);_text41567+=u" takes the piece's size, { cols, rows } in whole numbers of 1 or more, not ";_text41567+=j::string(([&]()->V{V _receiver41568=j::builtin("JSON");V _method41569=this->_literals[3];V _method=j::get(_receiver41568,_method41569);j::Args _params41570=j::Args{_v_37536_size};return j::call(_method,_params41570,_receiver41568);})());_text41567+=u"";return V(std::move(_text41567));})()});})());
}
return _v_37538_s;

}

return V{};
},2);
this->_v_37539_share.get()=j::function([=](const j::Args &_args_fn37540,const V &_receiver_fn37540,const V &_self_fn37540) mutable ->V{
V _v_37541_v;
V _v_37542_what;
V _v_37543_fallback;
_v_37541_v=_args_fn37540[0];
_v_37542_what=_args_fn37540[1];
_v_37543_fallback=_args_fn37540[2];
{
if(j::truth(([&]()->V{V _lhs41572=_v_37541_v;V _rhs41573=j::builtin("undefined");return V(j::equal(_lhs41572,_rhs41573,true));})())){return _v_37543_fallback;
}
if(j::truth(([&]()->V{V _logical41574=j::unary("!",([&]()->V{V _callee41575=this->_v_36728_num.get();return j::call(_callee41575,j::Args{_v_37541_v});})());return !j::truth(_logical41574)?([&]()->V{V _lhs41576=_v_37541_v;V _rhs41577=V(0.0);return j::binary("<=",_lhs41576,_rhs41577);})():_logical41574;})())){(void)(([&]()->V{V _callee41580=this->_v_36700_fail.get();return j::call(_callee41580,j::Args{([&]()->V{std::u16string _text41578;_text41578+=u"";_text41578+=j::string(_v_37542_what);_text41578+=u" takes a number above 0, not ";_text41578+=j::string(([&]()->V{V _callee41579=j::builtin("String");return j::call(_callee41579,j::Args{_v_37541_v});})());_text41578+=u"";return V(std::move(_text41578));})()});})());
}
return _v_37541_v;

}

return V{};
},3);
this->_v_37544_optionsOf.get()=j::function([=](const j::Args &_args_fn37545,const V &_receiver_fn37545,const V &_self_fn37545) mutable ->V{
V _v_37546_o;
V _v_37547_what;
_v_37546_o=_args_fn37545[0];
_v_37547_what=_args_fn37545[1];
{
if(j::truth(([&]()->V{V _lhs41581=_v_37546_o;V _rhs41582=j::builtin("undefined");return V(j::equal(_lhs41581,_rhs41582,true));})())){return ([&]()->V{V _obj41583=j::object();return _obj41583;})();
}
if(j::truth(([&]()->V{V _logical41584=j::unary("!",_v_37546_o);return !j::truth(_logical41584)?([&]()->V{V _lhs41585=j::unary("typeof",_v_37546_o);V _rhs41586=this->_literals[6];return V(!j::equal(_lhs41585,_rhs41586,true));})():_logical41584;})())){(void)(([&]()->V{V _callee41591=this->_v_36700_fail.get();return j::call(_callee41591,j::Args{([&]()->V{std::u16string _text41587;_text41587+=u"";_text41587+=j::string(_v_37547_what);_text41587+=u" takes its options as an object, not ";_text41587+=j::string(([&]()->V{V _receiver41588=j::builtin("JSON");V _method41589=this->_literals[3];V _method=j::get(_receiver41588,_method41589);j::Args _params41590=j::Args{_v_37546_o};return j::call(_method,_params41590,_receiver41588);})());_text41587+=u"";return V(std::move(_text41587));})()});})());
}
return _v_37546_o;

}

return V{};
},2);
this->_v_37552_tones.get()=j::function([=](const j::Args &_args_fn37553,const V &_receiver_fn37553,const V &_self_fn37553) mutable ->V{
V _v_37554_spec;
V _v_37555_n;
V _v_37556_what;
_v_37554_spec=_args_fn37553[0];
_v_37555_n=_args_fn37553[1];
_v_37556_what=_args_fn37553[2];
{
j::Cell _v_37557_f;
j::Cell _v_37558_pick;
_v_37557_f.get()=([&]()->V{V _callee41592=this->_v_36751_fadeOf.get();return j::call(_callee41592,j::Args{_v_37554_spec,_v_37555_n,_v_37556_what});})();
_v_37558_pick.get()=j::function([=](const j::Args &_args_fn37559,const V &_receiver_fn37559,const V &_self_fn37559) mutable ->V{
V _v_37560_list;
V _v_37561_i;
_v_37560_list=_args_fn37559[0];
_v_37561_i=_args_fn37559[1];
return j::get(_v_37560_list,([&]()->V{V _receiver41597=j::builtin("Math");V _method41598=this->_literals[158];V _method=j::get(_receiver41597,_method41598);j::Args _params41599=j::Args{([&]()->V{V _lhs41593=j::get(_v_37560_list,this->_literals[1]);V _rhs41594=V(1.0);return V(j::number(_lhs41593)-j::number(_rhs41594));})(),_v_37561_i};return j::call(_method,_params41599,_receiver41597);})());
return V{};
},2);
return ([&]()->V{V _receiver41609=j::builtin("Array");V _method41610=this->_literals[5];V _method=j::get(_receiver41609,_method41610);j::Args _params41611=j::Args{([&]()->V{V _obj41600=j::object();j::put(_obj41600,this->_literals[1],_v_37555_n);return _obj41600;})(),j::function([=](const j::Args &_args_fn37562,const V &_receiver_fn37562,const V &_self_fn37562) mutable ->V{
V _v_37563__;
V _v_37564_i;
_v_37563__=_args_fn37562[0];
_v_37564_i=_args_fn37562[1];
{
V _v_37565_l;
V _v_37566_d;
_v_37565_l=([&]()->V{V _callee41601=_v_37558_pick.get();return j::call(_callee41601,j::Args{j::get(_v_37557_f.get(),this->_literals[8]),_v_37564_i});})();
_v_37566_d=([&]()->V{V _callee41602=_v_37558_pick.get();return j::call(_callee41602,j::Args{j::get(_v_37557_f.get(),this->_literals[9]),_v_37564_i});})();
return (j::truth(([&]()->V{V _lhs41603=_v_37565_l;V _rhs41604=_v_37566_d;return V(j::equal(_lhs41603,_rhs41604,true));})())?([&]()->V{j::Args _array41605;_array41605.push_back(_v_37565_l);return j::array(std::move(_array41605));})():([&]()->V{V _obj41606=j::object();j::put(_obj41606,this->_literals[8],([&]()->V{j::Args _array41607;_array41607.push_back(_v_37565_l);return j::array(std::move(_array41607));})());j::put(_obj41606,this->_literals[9],([&]()->V{j::Args _array41608;_array41608.push_back(_v_37566_d);return j::array(std::move(_array41608));})());return _obj41606;})());

}

return V{};
},2)};return j::call(_method,_params41611,_receiver41609);})();

}

return V{};
},3);
this->_v_37567_snow.get()=j::function([=](const j::Args &_args_fn37568,const V &_receiver_fn37568,const V &_self_fn37568) mutable ->V{
V _v_37569_size;
V _v_37570_o;
_v_37569_size=_args_fn37568[0];
_v_37570_o=_args_fn37568[1];
{
j::Cell _v_37571_cols;
j::Cell _v_37572_rows;
j::Cell _v_37573_wind;
j::Cell _v_37574_gusts;
V _v_37575_density;
V _v_37576_layers;
V _v_37577_colors;
j::Cell _v_37578_d;
j::Cell _v_37579_every;
j::Cell _v_37580_blow;
V _v_37585_depths;
j::Cell _v_37586_tint;
V _pattern41613=([&]()->V{V _callee41612=this->_v_37534_sizeOf.get();return j::call(_callee41612,j::Args{_v_37569_size,this->_literals[219]});})();
_v_37571_cols.get()=j::get(_pattern41613,this->_literals[15]);
_v_37572_rows.get()=j::get(_pattern41613,this->_literals[50]);
V _pattern41615=([&]()->V{V _callee41614=this->_v_37544_optionsOf.get();return j::call(_callee41614,j::Args{_v_37570_o,this->_literals[219]});})();
V _default41616=j::get(_pattern41615,this->_literals[70]);if(_default41616.kind==V::Undefined||_default41616.kind==V::Hole)_default41616=V(1.0);
_v_37573_wind.get()=_default41616;
V _default41617=j::get(_pattern41615,this->_literals[95]);if(_default41617.kind==V::Undefined||_default41617.kind==V::Hole)_default41617=V(0.5);
_v_37574_gusts.get()=_default41617;
_v_37575_density=j::get(_pattern41615,this->_literals[220]);
V _default41618=j::get(_pattern41615,this->_literals[221]);if(_default41618.kind==V::Undefined||_default41618.kind==V::Hole)_default41618=V(3.0);
_v_37576_layers=_default41618;
_v_37577_colors=j::get(_pattern41615,this->_literals[78]);
if(j::truth(j::unary("!",([&]()->V{V _callee41619=this->_v_36728_num.get();return j::call(_callee41619,j::Args{_v_37573_wind.get()});})()))){(void)(([&]()->V{V _callee41622=this->_v_36700_fail.get();return j::call(_callee41622,j::Args{([&]()->V{std::u16string _text41620;_text41620+=u"presets.snow's wind takes a number of cells a second, not ";_text41620+=j::string(([&]()->V{V _callee41621=j::builtin("String");return j::call(_callee41621,j::Args{_v_37573_wind.get()});})());_text41620+=u"";return V(std::move(_text41620));})()});})());
}
if(j::truth(([&]()->V{V _logical41623=([&]()->V{V _logical41624=j::unary("!",([&]()->V{V _callee41625=this->_v_36728_num.get();return j::call(_callee41625,j::Args{_v_37574_gusts.get()});})());return !j::truth(_logical41624)?([&]()->V{V _lhs41626=_v_37574_gusts.get();V _rhs41627=V(0.0);return j::binary("<",_lhs41626,_rhs41627);})():_logical41624;})();return !j::truth(_logical41623)?([&]()->V{V _lhs41628=_v_37574_gusts.get();V _rhs41629=V(1.0);return j::binary(">",_lhs41628,_rhs41629);})():_logical41623;})())){(void)(([&]()->V{V _callee41632=this->_v_36700_fail.get();return j::call(_callee41632,j::Args{([&]()->V{std::u16string _text41630;_text41630+=u"presets.snow's gusts takes a share of the wind from 0 to 1, not ";_text41630+=j::string(([&]()->V{V _callee41631=j::builtin("String");return j::call(_callee41631,j::Args{_v_37574_gusts.get()});})());_text41630+=u"";return V(std::move(_text41630));})()});})());
}
_v_37578_d.get()=([&]()->V{V _callee41633=this->_v_37539_share.get();return j::call(_callee41633,j::Args{_v_37575_density,this->_literals[222],V(1.0)});})();
_v_37579_every.get()=([&]()->V{V _logical41634=j::get(_v_37569_size,this->_literals[186]);return !j::truth(_logical41634)?V(8.0):_logical41634;})();
_v_37580_blow.get()=j::function([=](const j::Args &_args_fn37581,const V &_receiver_fn37581,const V &_self_fn37581) mutable ->V{
j::Cell _v_37582_drift;
_v_37582_drift.get()=_args_fn37581[0];
return (j::truth(([&]()->V{V _logical41635=_v_37574_gusts.get();return j::truth(_logical41635)?_v_37573_wind.get():_logical41635;})())?j::function([=](const j::Args &_args_fn37583,const V &_receiver_fn37583,const V &_self_fn37583) mutable ->V{
V _v_37584_t;
_v_37584_t=_args_fn37583[0];
return ([&]()->V{V _lhs41636=([&]()->V{V _lhs41638=_v_37573_wind.get();V _rhs41639=_v_37582_drift.get();return V(j::number(_lhs41638)*j::number(_rhs41639));})();V _rhs41637=([&]()->V{V _lhs41640=V(1.0);V _rhs41641=([&]()->V{V _lhs41642=_v_37574_gusts.get();V _rhs41643=([&]()->V{V _number41648=([&]()->V{V _lhs41649=([&]()->V{V _lhs41651=this->_v_36697_TAU.get();V _rhs41652=_v_37584_t;return V(j::number(_lhs41651)*j::number(_rhs41652));})();V _rhs41650=_v_37579_every.get();return V(j::number(_lhs41649)/j::number(_rhs41650));})();return V(std::sin(j::number(_number41648)));})();return V(j::number(_lhs41642)*j::number(_rhs41643));})();return j::binary("+",_lhs41640,_rhs41641);})();return V(j::number(_lhs41636)*j::number(_rhs41637));})();
return V{};
},1):([&]()->V{V _lhs41653=_v_37573_wind.get();V _rhs41654=_v_37582_drift.get();return V(j::number(_lhs41653)*j::number(_rhs41654));})());
return V{};
},1);
if(j::truth(([&]()->V{V _logical41655=([&]()->V{V _logical41656=j::unary("!",([&]()->V{V _receiver41657=j::builtin("Number");V _method41658=this->_literals[61];V _method=j::get(_receiver41657,_method41658);j::Args _params41659=j::Args{_v_37576_layers};return j::call(_method,_params41659,_receiver41657);})());return !j::truth(_logical41656)?([&]()->V{V _lhs41660=_v_37576_layers;V _rhs41661=V(1.0);return j::binary("<",_lhs41660,_rhs41661);})():_logical41656;})();return !j::truth(_logical41655)?([&]()->V{V _lhs41662=_v_37576_layers;V _rhs41663=V(3.0);return j::binary(">",_lhs41662,_rhs41663);})():_logical41655;})())){(void)(([&]()->V{V _callee41666=this->_v_36700_fail.get();return j::call(_callee41666,j::Args{([&]()->V{std::u16string _text41664;_text41664+=u"presets.snow's layers takes 1, 2 or 3, not ";_text41664+=j::string(([&]()->V{V _callee41665=j::builtin("String");return j::call(_callee41665,j::Args{_v_37576_layers});})());_text41664+=u"";return V(std::move(_text41664));})()});})());
}
_v_37585_depths=([&]()->V{V _receiver41669=([&]()->V{j::Args _array41672;_array41672.push_back(([&]()->V{V _obj41673=j::object();j::put(_obj41673,this->_literals[122],V(46.0));j::put(_obj41673,this->_literals[170],V(2.4));j::put(_obj41673,this->_literals[223],V(0.55));j::put(_obj41673,this->_literals[72],V(0.5));j::put(_obj41673,this->_literals[74],this->_literals[181]);return _obj41673;})());_array41672.push_back(([&]()->V{V _obj41674=j::object();j::put(_obj41674,this->_literals[122],V(28.0));j::put(_obj41674,this->_literals[170],V(3.8));j::put(_obj41674,this->_literals[223],V(0.8));j::put(_obj41674,this->_literals[72],V(0.9));j::put(_obj41674,this->_literals[74],this->_literals[224]);return _obj41674;})());_array41672.push_back(([&]()->V{V _obj41675=j::object();j::put(_obj41675,this->_literals[122],V(12.0));j::put(_obj41675,this->_literals[170],V(5.6));j::put(_obj41675,this->_literals[223],V(1.0));j::put(_obj41675,this->_literals[72],V(1.4));j::put(_obj41675,this->_literals[74],this->_literals[225]);return _obj41675;})());return j::array(std::move(_array41672));})();V _method41670=this->_literals[23];V _method=j::get(_receiver41669,_method41670);j::Args _params41671=j::Args{([&]()->V{V _lhs41667=V(3.0);V _rhs41668=_v_37576_layers;return V(j::number(_lhs41667)-j::number(_rhs41668));})()};return j::call(_method,_params41671,_receiver41669);})();
_v_37586_tint.get()=(j::truth(([&]()->V{V _lhs41676=_v_37577_colors;V _rhs41677=j::builtin("undefined");return V(!j::equal(_lhs41676,_rhs41677,true));})())?([&]()->V{V _callee41678=this->_v_37552_tones.get();return j::call(_callee41678,j::Args{_v_37577_colors,_v_37576_layers,this->_literals[226]});})():([&]()->V{V _receiver41681=([&]()->V{V _callee41687=this->_v_37552_tones.get();return j::call(_callee41687,j::Args{([&]()->V{V _obj41684=j::object();j::put(_obj41684,this->_literals[8],([&]()->V{j::Args _array41685;_array41685.push_back(this->_literals[227]);_array41685.push_back(this->_literals[228]);_array41685.push_back(this->_literals[229]);return j::array(std::move(_array41685));})());j::put(_obj41684,this->_literals[9],([&]()->V{j::Args _array41686;_array41686.push_back(this->_literals[230]);_array41686.push_back(this->_literals[231]);_array41686.push_back(this->_literals[232]);return j::array(std::move(_array41686));})());return _obj41684;})(),V(3.0),this->_literals[233]});})();V _method41682=this->_literals[23];V _method=j::get(_receiver41681,_method41682);j::Args _params41683=j::Args{([&]()->V{V _lhs41679=V(3.0);V _rhs41680=_v_37576_layers;return V(j::number(_lhs41679)-j::number(_rhs41680));})()};return j::call(_method,_params41683,_receiver41681);})());
return ([&]()->V{V _receiver41714=_v_37585_depths;V _method41715=this->_literals[21];V _method=j::get(_receiver41714,_method41715);j::Args _params41716=j::Args{j::function([=](const j::Args &_args_fn37587,const V &_receiver_fn37587,const V &_self_fn37587) mutable ->V{
V _v_37588_L;
V _v_37589_i;
_v_37588_L=_args_fn37587[0];
_v_37589_i=_args_fn37587[1];
{
V _v_37590_cross;
_v_37590_cross=([&]()->V{V _lhs41688=([&]()->V{V _lhs41690=_v_37572_rows.get();V _rhs41691=V(2.0);return V(j::number(_lhs41690)*j::number(_rhs41691));})();V _rhs41689=j::get(_v_37588_L,this->_literals[170]);return V(j::number(_lhs41688)/j::number(_rhs41689));})();
return ([&]()->V{V _obj41692=j::object();j::put(_obj41692,this->_literals[56],([&]()->V{V _obj41693=j::object();j::put(_obj41693,this->_literals[38],this->_literals[24]);return _obj41693;})());j::put(_obj41692,this->_literals[57],([&]()->V{V _lhs41694=([&]()->V{V _lhs41696=([&]()->V{V _lhs41698=j::get(_v_37588_L,this->_literals[122]);V _rhs41699=_v_37578_d.get();return V(j::number(_lhs41698)*j::number(_rhs41699));})();V _rhs41697=([&]()->V{V _callee41701=this->_v_37548_scaleOf.get();return j::call(_callee41701,j::Args{([&]()->V{V _obj41700=j::object();j::put(_obj41700,this->_literals[15],_v_37571_cols.get());j::put(_obj41700,this->_literals[50],_v_37572_rows.get());return _obj41700;})()});})();return V(j::number(_lhs41696)*j::number(_rhs41697));})();V _rhs41695=_v_37590_cross;return V(j::number(_lhs41694)/j::number(_rhs41695));})());j::put(_obj41692,this->_literals[66],([&]()->V{V _lhs41702=_v_37590_cross;V _rhs41703=V(1.6);return V(j::number(_lhs41702)*j::number(_rhs41703));})());j::put(_obj41692,this->_literals[68],([&]()->V{j::Args _array41704;_array41704.push_back(([&]()->V{V _lhs41705=j::get(_v_37588_L,this->_literals[170]);V _rhs41706=V(0.8);return V(j::number(_lhs41705)*j::number(_rhs41706));})());_array41704.push_back(([&]()->V{V _lhs41707=j::get(_v_37588_L,this->_literals[170]);V _rhs41708=V(1.2);return V(j::number(_lhs41707)*j::number(_rhs41708));})());return j::array(std::move(_array41704));})());j::put(_obj41692,this->_literals[70],([&]()->V{V _callee41709=_v_37580_blow.get();return j::call(_callee41709,j::Args{j::get(_v_37588_L,this->_literals[223])});})());j::put(_obj41692,this->_literals[72],([&]()->V{V _obj41710=j::object();j::put(_obj41710,this->_literals[73],j::get(_v_37588_L,this->_literals[72]));j::put(_obj41710,this->_literals[68],V(0.18));return _obj41710;})());j::put(_obj41692,this->_literals[74],j::get(_v_37588_L,this->_literals[74]));j::put(_obj41692,this->_literals[78],j::get(_v_37586_tint.get(),_v_37589_i));j::put(_obj41692,this->_literals[81],([&]()->V{V _obj41711=j::object();j::put(_obj41711,this->_literals[48],this->_literals[164]);j::put(_obj41711,this->_literals[49],this->_literals[82]);return _obj41711;})());j::put(_obj41692,this->_literals[93],([&]()->V{V _lhs41712=V(101.0);V _rhs41713=_v_37589_i;return j::binary("+",_lhs41712,_rhs41713);})());return _obj41692;})();

}

return V{};
},2)};return j::call(_method,_params41716,_receiver41714);})();

}

return V{};
},2);
this->_v_37591_rain.get()=j::function([=](const j::Args &_args_fn37592,const V &_receiver_fn37592,const V &_self_fn37592) mutable ->V{
V _v_37593_size;
V _v_37594_o;
_v_37593_size=_args_fn37592[0];
_v_37594_o=_args_fn37592[1];
{
V _v_37595_cols;
V _v_37596_rows;
V _v_37597_wind;
V _v_37598_density;
V _v_37599_splash;
V _v_37600_colors;
V _v_37601_d;
V _v_37602_tint;
V _v_37603_scale;
V _v_37604_far;
V _v_37605_near;
V _pattern41718=([&]()->V{V _callee41717=this->_v_37534_sizeOf.get();return j::call(_callee41717,j::Args{_v_37593_size,this->_literals[234]});})();
_v_37595_cols=j::get(_pattern41718,this->_literals[15]);
_v_37596_rows=j::get(_pattern41718,this->_literals[50]);
V _pattern41720=([&]()->V{V _callee41719=this->_v_37544_optionsOf.get();return j::call(_callee41719,j::Args{_v_37594_o,this->_literals[234]});})();
V _default41721=j::get(_pattern41720,this->_literals[70]);if(_default41721.kind==V::Undefined||_default41721.kind==V::Hole)_default41721=V(3.0);
_v_37597_wind=_default41721;
_v_37598_density=j::get(_pattern41720,this->_literals[220]);
V _default41722=j::get(_pattern41720,this->_literals[88]);if(_default41722.kind==V::Undefined||_default41722.kind==V::Hole)_default41722=this->_literals[235];
_v_37599_splash=_default41722;
_v_37600_colors=j::get(_pattern41720,this->_literals[78]);
if(j::truth(j::unary("!",([&]()->V{V _callee41723=this->_v_36728_num.get();return j::call(_callee41723,j::Args{_v_37597_wind});})()))){(void)(([&]()->V{V _callee41726=this->_v_36700_fail.get();return j::call(_callee41726,j::Args{([&]()->V{std::u16string _text41724;_text41724+=u"presets.rain's wind takes a number of cells a second, not ";_text41724+=j::string(([&]()->V{V _callee41725=j::builtin("String");return j::call(_callee41725,j::Args{_v_37597_wind});})());_text41724+=u"";return V(std::move(_text41724));})()});})());
}
_v_37601_d=([&]()->V{V _callee41727=this->_v_37539_share.get();return j::call(_callee41727,j::Args{_v_37598_density,this->_literals[236],V(1.0)});})();
if(j::truth(([&]()->V{V _lhs41728=j::unary("typeof",_v_37599_splash);V _rhs41729=this->_literals[4];return V(!j::equal(_lhs41728,_rhs41729,true));})())){(void)(([&]()->V{V _callee41734=this->_v_36700_fail.get();return j::call(_callee41734,j::Args{([&]()->V{std::u16string _text41730;_text41730+=u"presets.rain's splash takes a string of characters, \"\" for none, not ";_text41730+=j::string(([&]()->V{V _receiver41731=j::builtin("JSON");V _method41732=this->_literals[3];V _method=j::get(_receiver41731,_method41732);j::Args _params41733=j::Args{_v_37599_splash};return j::call(_method,_params41733,_receiver41731);})());_text41730+=u"";return V(std::move(_text41730));})()});})());
}
_v_37602_tint=([&]()->V{V _callee41739=this->_v_37552_tones.get();return j::call(_callee41739,j::Args{([&]()->V{V _logical41735=_v_37600_colors;return j::nullish(_logical41735)?([&]()->V{V _obj41736=j::object();j::put(_obj41736,this->_literals[8],([&]()->V{j::Args _array41737;_array41737.push_back(this->_literals[237]);_array41737.push_back(this->_literals[238]);return j::array(std::move(_array41737));})());j::put(_obj41736,this->_literals[9],([&]()->V{j::Args _array41738;_array41738.push_back(this->_literals[238]);_array41738.push_back(this->_literals[239]);return j::array(std::move(_array41738));})());return _obj41736;})():_logical41735;})(),V(2.0),this->_literals[240]});})();
_v_37603_scale=([&]()->V{V _callee41741=this->_v_37548_scaleOf.get();return j::call(_callee41741,j::Args{([&]()->V{V _obj41740=j::object();j::put(_obj41740,this->_literals[15],_v_37595_cols);j::put(_obj41740,this->_literals[50],_v_37596_rows);return _obj41740;})()});})();
_v_37604_far=([&]()->V{V _lhs41742=([&]()->V{V _lhs41744=_v_37596_rows;V _rhs41745=V(2.0);return V(j::number(_lhs41744)*j::number(_rhs41745));})();V _rhs41743=V(26.0);return V(j::number(_lhs41742)/j::number(_rhs41743));})();
_v_37605_near=([&]()->V{V _lhs41746=([&]()->V{V _lhs41748=_v_37596_rows;V _rhs41749=V(2.0);return V(j::number(_lhs41748)*j::number(_rhs41749));})();V _rhs41747=V(40.0);return V(j::number(_lhs41746)/j::number(_rhs41747));})();
return ([&]()->V{j::Args _array41750;_array41750.push_back(([&]()->V{V _obj41751=j::object();j::put(_obj41751,this->_literals[56],([&]()->V{V _obj41752=j::object();j::put(_obj41752,this->_literals[38],this->_literals[24]);return _obj41752;})());j::put(_obj41751,this->_literals[57],([&]()->V{V _lhs41753=([&]()->V{V _lhs41755=([&]()->V{V _lhs41757=V(40.0);V _rhs41758=_v_37601_d;return V(j::number(_lhs41757)*j::number(_rhs41758));})();V _rhs41756=_v_37603_scale;return V(j::number(_lhs41755)*j::number(_rhs41756));})();V _rhs41754=_v_37604_far;return V(j::number(_lhs41753)/j::number(_rhs41754));})());j::put(_obj41751,this->_literals[66],([&]()->V{V _lhs41759=_v_37604_far;V _rhs41760=V(1.3);return V(j::number(_lhs41759)*j::number(_rhs41760));})());j::put(_obj41751,this->_literals[68],([&]()->V{j::Args _array41761;_array41761.push_back(V(22.0));_array41761.push_back(V(30.0));return j::array(std::move(_array41761));})());j::put(_obj41751,this->_literals[70],([&]()->V{V _lhs41762=_v_37597_wind;V _rhs41763=V(0.7);return V(j::number(_lhs41762)*j::number(_rhs41763));})());j::put(_obj41751,this->_literals[74],this->_literals[241]);j::put(_obj41751,this->_literals[89],V(0.04));j::put(_obj41751,this->_literals[90],this->_literals[241]);j::put(_obj41751,this->_literals[78],j::get(_v_37602_tint,V(0.0)));j::put(_obj41751,this->_literals[81],([&]()->V{V _obj41764=j::object();j::put(_obj41764,this->_literals[48],this->_literals[164]);j::put(_obj41764,this->_literals[49],this->_literals[82]);return _obj41764;})());j::put(_obj41751,this->_literals[93],V(201.0));return _obj41751;})());_array41750.push_back(([&]()->V{V _obj41765=j::object();j::put(_obj41765,this->_literals[56],([&]()->V{V _obj41766=j::object();j::put(_obj41766,this->_literals[38],this->_literals[24]);return _obj41766;})());j::put(_obj41765,this->_literals[57],([&]()->V{V _lhs41767=([&]()->V{V _lhs41769=([&]()->V{V _lhs41771=V(22.0);V _rhs41772=_v_37601_d;return V(j::number(_lhs41771)*j::number(_rhs41772));})();V _rhs41770=_v_37603_scale;return V(j::number(_lhs41769)*j::number(_rhs41770));})();V _rhs41768=_v_37605_near;return V(j::number(_lhs41767)/j::number(_rhs41768));})());j::put(_obj41765,this->_literals[66],([&]()->V{V _lhs41773=_v_37605_near;V _rhs41774=V(1.3);return V(j::number(_lhs41773)*j::number(_rhs41774));})());j::put(_obj41765,this->_literals[68],([&]()->V{j::Args _array41775;_array41775.push_back(V(36.0));_array41775.push_back(V(44.0));return j::array(std::move(_array41775));})());j::put(_obj41765,this->_literals[70],_v_37597_wind);j::put(_obj41765,this->_literals[76],this->_v_36961_streak.get());j::put(_obj41765,this->_literals[89],V(0.06));j::put(_obj41765,this->_literals[78],j::get(_v_37602_tint,V(1.0)));j::put(_obj41765,this->_literals[88],_v_37599_splash);j::put(_obj41765,this->_literals[81],([&]()->V{V _obj41776=j::object();j::put(_obj41776,this->_literals[48],this->_literals[164]);j::put(_obj41776,this->_literals[49],this->_literals[82]);return _obj41776;})());j::put(_obj41765,this->_literals[93],V(202.0));return _obj41765;})());return j::array(std::move(_array41750));})();

}

return V{};
},2);
this->_v_37606_stars.get()=j::function([=](const j::Args &_args_fn37607,const V &_receiver_fn37607,const V &_self_fn37607) mutable ->V{
V _v_37608_size;
V _v_37609_o;
_v_37608_size=_args_fn37607[0];
_v_37609_o=_args_fn37607[1];
{
V _v_37610_cols;
V _v_37611_rows;
V _v_37612_density;
V _v_37613_shooting;
V _v_37614_colors;
V _v_37615_d;
V _v_37616_field;
V _pattern41778=([&]()->V{V _callee41777=this->_v_37534_sizeOf.get();return j::call(_callee41777,j::Args{_v_37608_size,this->_literals[242]});})();
_v_37610_cols=j::get(_pattern41778,this->_literals[15]);
_v_37611_rows=j::get(_pattern41778,this->_literals[50]);
V _pattern41780=([&]()->V{V _callee41779=this->_v_37544_optionsOf.get();return j::call(_callee41779,j::Args{_v_37609_o,this->_literals[242]});})();
_v_37612_density=j::get(_pattern41780,this->_literals[220]);
V _default41781=j::get(_pattern41780,this->_literals[243]);if(_default41781.kind==V::Undefined||_default41781.kind==V::Hole)_default41781=V(7.0);
_v_37613_shooting=_default41781;
_v_37614_colors=j::get(_pattern41780,this->_literals[78]);
_v_37615_d=([&]()->V{V _callee41782=this->_v_37539_share.get();return j::call(_callee41782,j::Args{_v_37612_density,this->_literals[244],V(1.0)});})();
if(j::truth(([&]()->V{V _logical41783=j::unary("!",([&]()->V{V _callee41784=this->_v_36728_num.get();return j::call(_callee41784,j::Args{_v_37613_shooting});})());return !j::truth(_logical41783)?([&]()->V{V _lhs41785=_v_37613_shooting;V _rhs41786=V(0.0);return j::binary("<",_lhs41785,_rhs41786);})():_logical41783;})())){(void)(([&]()->V{V _callee41789=this->_v_36700_fail.get();return j::call(_callee41789,j::Args{([&]()->V{std::u16string _text41787;_text41787+=u"presets.stars' shooting takes seconds between shooting stars, 0 for none, not ";_text41787+=j::string(([&]()->V{V _callee41788=j::builtin("String");return j::call(_callee41788,j::Args{_v_37613_shooting});})());_text41787+=u"";return V(std::move(_text41787));})()});})());
}
_v_37616_field=([&]()->V{V _obj41790=j::object();j::put(_obj41790,this->_literals[56],([&]()->V{V _obj41791=j::object();j::put(_obj41791,this->_literals[40],([&]()->V{V _obj41792=j::object();j::put(_obj41792,this->_literals[48],V(0.0));j::put(_obj41792,this->_literals[49],V(0.0));j::put(_obj41792,this->_literals[15],_v_37610_cols);j::put(_obj41792,this->_literals[50],_v_37611_rows);return _obj41792;})());return _obj41791;})());j::put(_obj41790,this->_literals[57],([&]()->V{V _lhs41793=([&]()->V{V _lhs41795=([&]()->V{V _lhs41797=V(70.0);V _rhs41798=_v_37615_d;return V(j::number(_lhs41797)*j::number(_rhs41798));})();V _rhs41796=([&]()->V{V _callee41800=this->_v_37548_scaleOf.get();return j::call(_callee41800,j::Args{([&]()->V{V _obj41799=j::object();j::put(_obj41799,this->_literals[15],_v_37610_cols);j::put(_obj41799,this->_literals[50],_v_37611_rows);return _obj41799;})()});})();return V(j::number(_lhs41795)*j::number(_rhs41796));})();V _rhs41794=V(5.5);return V(j::number(_lhs41793)/j::number(_rhs41794));})());j::put(_obj41790,this->_literals[66],([&]()->V{j::Args _array41801;_array41801.push_back(V(3.0));_array41801.push_back(V(8.0));return j::array(std::move(_array41801));})());j::put(_obj41790,this->_literals[68],V(0.0));j::put(_obj41790,this->_literals[74],this->_literals[245]);j::put(_obj41790,this->_literals[78],([&]()->V{V _logical41802=_v_37614_colors;return j::nullish(_logical41802)?([&]()->V{V _obj41803=j::object();j::put(_obj41803,this->_literals[8],([&]()->V{j::Args _array41804;_array41804.push_back(this->_literals[246]);_array41804.push_back(this->_literals[238]);_array41804.push_back(this->_literals[247]);_array41804.push_back(this->_literals[238]);_array41804.push_back(this->_literals[246]);return j::array(std::move(_array41804));})());j::put(_obj41803,this->_literals[9],([&]()->V{j::Args _array41805;_array41805.push_back(this->_literals[248]);_array41805.push_back(this->_literals[246]);_array41805.push_back(this->_literals[249]);_array41805.push_back(this->_literals[246]);_array41805.push_back(this->_literals[248]);return j::array(std::move(_array41805));})());return _obj41803;})():_logical41802;})());j::put(_obj41790,this->_literals[80],V(0.08));j::put(_obj41790,this->_literals[81],this->_literals[163]);j::put(_obj41790,this->_literals[93],V(301.0));return _obj41790;})();
if(j::truth(j::unary("!",_v_37613_shooting))){return ([&]()->V{j::Args _array41806;_array41806.push_back(_v_37616_field);return j::array(std::move(_array41806));})();
}
return ([&]()->V{j::Args _array41807;_array41807.push_back(_v_37616_field);_array41807.push_back(([&]()->V{V _obj41808=j::object();j::put(_obj41808,this->_literals[56],([&]()->V{V _obj41809=j::object();j::put(_obj41809,this->_literals[40],([&]()->V{V _obj41810=j::object();j::put(_obj41810,this->_literals[48],([&]()->V{V _lhs41811=_v_37610_cols;V _rhs41812=V(0.35);return V(j::number(_lhs41811)*j::number(_rhs41812));})());j::put(_obj41810,this->_literals[49],V(0.0));j::put(_obj41810,this->_literals[15],([&]()->V{V _lhs41813=_v_37610_cols;V _rhs41814=V(0.6);return V(j::number(_lhs41813)*j::number(_rhs41814));})());j::put(_obj41810,this->_literals[50],([&]()->V{V _lhs41815=_v_37611_rows;V _rhs41816=V(0.3);return V(j::number(_lhs41815)*j::number(_rhs41816));})());return _obj41810;})());return _obj41809;})());j::put(_obj41808,this->_literals[58],([&]()->V{V _obj41817=j::object();j::put(_obj41817,this->_literals[7],_v_37613_shooting);j::put(_obj41817,this->_literals[60],V(1.0));j::put(_obj41817,this->_literals[62],([&]()->V{V _receiver41822=j::builtin("Math");V _method41823=this->_literals[158];V _method=j::get(_receiver41822,_method41823);j::Args _params41824=j::Args{V(1.5),([&]()->V{V _lhs41818=_v_37613_shooting;V _rhs41819=V(2.0);return V(j::number(_lhs41818)/j::number(_rhs41819));})()};return j::call(_method,_params41824,_receiver41822);})());return _obj41817;})());j::put(_obj41808,this->_literals[66],V(0.9));j::put(_obj41808,this->_literals[68],([&]()->V{j::Args _array41825;_array41825.push_back(V(42.0));_array41825.push_back(V(48.0));return j::array(std::move(_array41825));})());j::put(_obj41808,this->_literals[53],([&]()->V{j::Args _array41826;_array41826.push_back(([&]()->V{V _lhs41827=j::get(j::builtin("Math"),this->_literals[55]);V _rhs41828=V(0.86);return V(j::number(_lhs41827)*j::number(_rhs41828));})());_array41826.push_back(([&]()->V{V _lhs41829=j::get(j::builtin("Math"),this->_literals[55]);V _rhs41830=V(0.9);return V(j::number(_lhs41829)*j::number(_rhs41830));})());return j::array(std::move(_array41826));})());j::put(_obj41808,this->_literals[74],this->_literals[225]);j::put(_obj41808,this->_literals[89],V(0.22));j::put(_obj41808,this->_literals[78],([&]()->V{V _obj41831=j::object();j::put(_obj41831,this->_literals[8],([&]()->V{j::Args _array41832;_array41832.push_back(this->_literals[247]);return j::array(std::move(_array41832));})());j::put(_obj41831,this->_literals[9],([&]()->V{j::Args _array41833;_array41833.push_back(this->_literals[250]);return j::array(std::move(_array41833));})());return _obj41831;})());j::put(_obj41808,this->_literals[91],([&]()->V{V _obj41834=j::object();j::put(_obj41834,this->_literals[8],([&]()->V{j::Args _array41835;_array41835.push_back(this->_literals[238]);_array41835.push_back(this->_literals[246]);return j::array(std::move(_array41835));})());j::put(_obj41834,this->_literals[9],([&]()->V{j::Args _array41836;_array41836.push_back(this->_literals[251]);_array41836.push_back(this->_literals[238]);return j::array(std::move(_array41836));})());return _obj41834;})());j::put(_obj41808,this->_literals[81],this->_literals[163]);j::put(_obj41808,this->_literals[93],V(302.0));return _obj41808;})());return j::array(std::move(_array41807));})();

}

return V{};
},2);
this->_v_37617_sparks.get()=j::function([=](const j::Args &_args_fn37618,const V &_receiver_fn37618,const V &_self_fn37618) mutable ->V{
V _v_37619_size;
V _v_37620_o;
_v_37619_size=_args_fn37618[0];
_v_37620_o=_args_fn37618[1];
{
V _v_37621_cols;
V _v_37622_rows;
V _v_37623_at;
V _v_37624_height;
V _v_37625_density;
V _v_37626_colors;
V _v_37627_h;
V _v_37628_d;
V _v_37629_g;
V _v_37630_climb;
V _v_37631_v;
V _v_37632_fall;
V _v_37633_fan;
V _pattern41838=([&]()->V{V _callee41837=this->_v_37534_sizeOf.get();return j::call(_callee41837,j::Args{_v_37619_size,this->_literals[252]});})();
_v_37621_cols=j::get(_pattern41838,this->_literals[15]);
_v_37622_rows=j::get(_pattern41838,this->_literals[50]);
V _pattern41840=([&]()->V{V _callee41839=this->_v_37544_optionsOf.get();return j::call(_callee41839,j::Args{_v_37620_o,this->_literals[252]});})();
V _default41841=j::get(_pattern41840,this->_literals[32]);if(_default41841.kind==V::Undefined||_default41841.kind==V::Hole)_default41841=([&]()->V{j::Args _array41842;_array41842.push_back(([&]()->V{V _lhs41843=_v_37621_cols;V _rhs41844=V(2.0);return V(j::number(_lhs41843)/j::number(_rhs41844));})());_array41842.push_back(([&]()->V{V _lhs41845=_v_37622_rows;V _rhs41846=V(1.0);return V(j::number(_lhs41845)-j::number(_rhs41846));})());return j::array(std::move(_array41842));})();
_v_37623_at=_default41841;
_v_37624_height=j::get(_pattern41840,this->_literals[253]);
_v_37625_density=j::get(_pattern41840,this->_literals[220]);
_v_37626_colors=j::get(_pattern41840,this->_literals[78]);
if(j::truth(([&]()->V{V _logical41847=([&]()->V{V _logical41848=([&]()->V{V _logical41849=j::unary("!",([&]()->V{V _receiver41850=j::builtin("Array");V _method41851=this->_literals[0];V _method=j::get(_receiver41850,_method41851);j::Args _params41852=j::Args{_v_37623_at};return j::call(_method,_params41852,_receiver41850);})());return !j::truth(_logical41849)?([&]()->V{V _lhs41853=j::get(_v_37623_at,this->_literals[1]);V _rhs41854=V(2.0);return V(!j::equal(_lhs41853,_rhs41854,true));})():_logical41849;})();return !j::truth(_logical41848)?j::unary("!",([&]()->V{V _callee41855=this->_v_36728_num.get();return j::call(_callee41855,j::Args{j::get(_v_37623_at,V(0.0))});})()):_logical41848;})();return !j::truth(_logical41847)?j::unary("!",([&]()->V{V _callee41856=this->_v_36728_num.get();return j::call(_callee41856,j::Args{j::get(_v_37623_at,V(1.0))});})()):_logical41847;})())){(void)(([&]()->V{V _callee41861=this->_v_36700_fail.get();return j::call(_callee41861,j::Args{([&]()->V{std::u16string _text41857;_text41857+=u"presets.sparks' at takes [column, row], not ";_text41857+=j::string(([&]()->V{V _receiver41858=j::builtin("JSON");V _method41859=this->_literals[3];V _method=j::get(_receiver41858,_method41859);j::Args _params41860=j::Args{_v_37623_at};return j::call(_method,_params41860,_receiver41858);})());_text41857+=u"";return V(std::move(_text41857));})()});})());
}
_v_37627_h=([&]()->V{V _callee41862=this->_v_37539_share.get();return j::call(_callee41862,j::Args{_v_37624_height,this->_literals[254],V(0.8)});})();
_v_37628_d=([&]()->V{V _callee41863=this->_v_37539_share.get();return j::call(_callee41863,j::Args{_v_37625_density,this->_literals[255],V(1.0)});})();
_v_37629_g=V(26.0);
_v_37630_climb=([&]()->V{V _receiver41870=j::builtin("Math");V _method41871=this->_literals[30];V _method=j::get(_receiver41870,_method41871);j::Args _params41872=j::Args{V(1.0),([&]()->V{V _lhs41864=([&]()->V{V _lhs41866=j::get(_v_37623_at,V(1.0));V _rhs41867=V(2.0);return V(j::number(_lhs41866)*j::number(_rhs41867));})();V _rhs41865=_v_37627_h;return V(j::number(_lhs41864)*j::number(_rhs41865));})()};return j::call(_method,_params41872,_receiver41870);})();
_v_37631_v=([&]()->V{V _number41877=([&]()->V{V _lhs41878=([&]()->V{V _lhs41880=V(2.0);V _rhs41881=_v_37629_g;return V(j::number(_lhs41880)*j::number(_rhs41881));})();V _rhs41879=_v_37630_climb;return V(j::number(_lhs41878)*j::number(_rhs41879));})();return V(std::sqrt(j::number(_number41877)));})();
_v_37632_fall=([&]()->V{V _lhs41882=([&]()->V{V _lhs41884=V(2.0);V _rhs41885=_v_37631_v;return V(j::number(_lhs41884)*j::number(_rhs41885));})();V _rhs41883=_v_37629_g;return V(j::number(_lhs41882)/j::number(_rhs41883));})();
_v_37633_fan=([&]()->V{V _lhs41886=V(0.5);V _rhs41887=([&]()->V{V _number41899=([&]()->V{V _receiver41908=j::builtin("Math");V _method41909=this->_literals[158];V _method=j::get(_receiver41908,_method41909);j::Args _params41910=j::Args{V(1.0),([&]()->V{V _lhs41900=([&]()->V{V _lhs41902=V(0.7);V _rhs41903=_v_37621_cols;return V(j::number(_lhs41902)*j::number(_rhs41903));})();V _rhs41901=([&]()->V{V _lhs41904=V(2.0);V _rhs41905=_v_37630_climb;return V(j::number(_lhs41904)*j::number(_rhs41905));})();return V(j::number(_lhs41900)/j::number(_rhs41901));})()};return j::call(_method,_params41910,_receiver41908);})();return V(std::asin(j::number(_number41899)));})();return V(j::number(_lhs41886)*j::number(_rhs41887));})();
return ([&]()->V{j::Args _array41911;_array41911.push_back(([&]()->V{V _obj41912=j::object();j::put(_obj41912,this->_literals[56],([&]()->V{V _obj41913=j::object();j::put(_obj41913,this->_literals[41],([&]()->V{j::Args _array41914;_array41914.push_back(j::get(_v_37623_at,V(0.0)));_array41914.push_back(j::get(_v_37623_at,V(1.0)));return j::array(std::move(_array41914));})());return _obj41913;})());j::put(_obj41912,this->_literals[57],([&]()->V{V _lhs41915=([&]()->V{V _lhs41917=([&]()->V{V _lhs41919=([&]()->V{V _lhs41921=V(60.0);V _rhs41922=V(3.4);return V(j::number(_lhs41921)*j::number(_rhs41922));})();V _rhs41920=_v_37628_d;return V(j::number(_lhs41919)*j::number(_rhs41920));})();V _rhs41918=([&]()->V{V _callee41924=this->_v_37548_scaleOf.get();return j::call(_callee41924,j::Args{([&]()->V{V _obj41923=j::object();j::put(_obj41923,this->_literals[15],_v_37621_cols);j::put(_obj41923,this->_literals[50],_v_37622_rows);return _obj41923;})()});})();return V(j::number(_lhs41917)*j::number(_rhs41918));})();V _rhs41916=_v_37632_fall;return V(j::number(_lhs41915)/j::number(_rhs41916));})());j::put(_obj41912,this->_literals[66],([&]()->V{j::Args _array41925;_array41925.push_back(([&]()->V{V _lhs41926=_v_37632_fall;V _rhs41927=V(0.9);return V(j::number(_lhs41926)*j::number(_rhs41927));})());_array41925.push_back(([&]()->V{V _lhs41928=_v_37632_fall;V _rhs41929=V(1.2);return V(j::number(_lhs41928)*j::number(_rhs41929));})());return j::array(std::move(_array41925));})());j::put(_obj41912,this->_literals[68],([&]()->V{j::Args _array41930;_array41930.push_back(([&]()->V{V _lhs41931=_v_37631_v;V _rhs41932=V(0.92);return V(j::number(_lhs41931)*j::number(_rhs41932));})());_array41930.push_back(_v_37631_v);return j::array(std::move(_array41930));})());j::put(_obj41912,this->_literals[53],([&]()->V{j::Args _array41933;_array41933.push_back(([&]()->V{V _lhs41934=([&]()->V{V _lhs41936=j::unary("-",this->_v_36697_TAU.get());V _rhs41937=V(4.0);return V(j::number(_lhs41936)/j::number(_rhs41937));})();V _rhs41935=_v_37633_fan;return V(j::number(_lhs41934)-j::number(_rhs41935));})());_array41933.push_back(([&]()->V{V _lhs41938=([&]()->V{V _lhs41940=j::unary("-",this->_v_36697_TAU.get());V _rhs41941=V(4.0);return V(j::number(_lhs41940)/j::number(_rhs41941));})();V _rhs41939=_v_37633_fan;return j::binary("+",_lhs41938,_rhs41939);})());return j::array(std::move(_array41933));})());j::put(_obj41912,this->_literals[69],_v_37629_g);j::put(_obj41912,this->_literals[74],this->_literals[256]);j::put(_obj41912,this->_literals[78],([&]()->V{V _logical41942=_v_37626_colors;return j::nullish(_logical41942)?([&]()->V{V _obj41943=j::object();j::put(_obj41943,this->_literals[8],([&]()->V{j::Args _array41944;_array41944.push_back(this->_literals[257]);_array41944.push_back(this->_literals[258]);_array41944.push_back(this->_literals[259]);_array41944.push_back(this->_literals[260]);_array41944.push_back(this->_literals[261]);return j::array(std::move(_array41944));})());j::put(_obj41943,this->_literals[9],([&]()->V{j::Args _array41945;_array41945.push_back(this->_literals[262]);_array41945.push_back(this->_literals[263]);_array41945.push_back(this->_literals[264]);_array41945.push_back(this->_literals[265]);_array41945.push_back(this->_literals[266]);return j::array(std::move(_array41945));})());return _obj41943;})():_logical41942;})());j::put(_obj41912,this->_literals[81],([&]()->V{V _obj41946=j::object();j::put(_obj41946,this->_literals[48],this->_literals[163]);j::put(_obj41946,this->_literals[49],this->_literals[82]);return _obj41946;})());j::put(_obj41912,this->_literals[93],V(401.0));return _obj41912;})());return j::array(std::move(_array41911));})();

}

return V{};
},2);
this->_v_37634_fireworks.get()=j::function([=](const j::Args &_args_fn37635,const V &_receiver_fn37635,const V &_self_fn37635) mutable ->V{
V _v_37636_size;
V _v_37637_o;
_v_37636_size=_args_fn37635[0];
_v_37637_o=_args_fn37635[1];
{
V _v_37638_cols;
V _v_37639_rows;
V _v_37640_r;
V _v_37641_every;
V _v_37642_count;
V _v_37643_rise;
V _v_37644_colors;
V _pattern41948=([&]()->V{V _callee41947=this->_v_37534_sizeOf.get();return j::call(_callee41947,j::Args{_v_37636_size,this->_literals[267]});})();
_v_37638_cols=j::get(_pattern41948,this->_literals[15]);
_v_37639_rows=j::get(_pattern41948,this->_literals[50]);
_v_37640_r=([&]()->V{V _receiver41953=j::builtin("Math");V _method41954=this->_literals[158];V _method=j::get(_receiver41953,_method41954);j::Args _params41955=j::Args{_v_37638_cols,([&]()->V{V _lhs41949=_v_37639_rows;V _rhs41950=V(2.0);return V(j::number(_lhs41949)*j::number(_rhs41950));})()};return j::call(_method,_params41955,_receiver41953);})();
V _pattern41957=([&]()->V{V _callee41956=this->_v_37544_optionsOf.get();return j::call(_callee41956,j::Args{_v_37637_o,this->_literals[267]});})();
V _default41958=j::get(_pattern41957,this->_literals[7]);if(_default41958.kind==V::Undefined||_default41958.kind==V::Hole)_default41958=([&]()->V{V _lhs41959=V(1.4);V _rhs41960=([&]()->V{V _receiver41969=j::builtin("Math");V _method41970=this->_literals[158];V _method=j::get(_receiver41969,_method41970);j::Args _params41971=j::Args{V(1.0),([&]()->V{V _lhs41961=([&]()->V{V _lhs41963=V(4.0);V _rhs41964=V(3.0);return V(j::number(_lhs41963)/j::number(_rhs41964));})();V _rhs41962=([&]()->V{V _lhs41965=_v_37640_r;V _rhs41966=_v_37638_cols;return V(j::number(_lhs41965)/j::number(_rhs41966));})();return V(j::number(_lhs41961)*j::number(_rhs41962));})()};return j::call(_method,_params41971,_receiver41969);})();return V(j::number(_lhs41959)*j::number(_rhs41960));})();
_v_37641_every=_default41958;
V _default41972=j::get(_pattern41957,this->_literals[60]);if(_default41972.kind==V::Undefined||_default41972.kind==V::Hole)_default41972=([&]()->V{V _number41987=([&]()->V{V _lhs41988=V(40.0);V _rhs41989=([&]()->V{V _receiver41999=j::builtin("Math");V _method42000=this->_literals[158];V _method=j::get(_receiver41999,_method42000);j::Args _params42001=j::Args{V(2.0),([&]()->V{V _receiver41994=j::builtin("Math");V _method41995=this->_literals[30];V _method=j::get(_receiver41994,_method41995);j::Args _params41996=j::Args{V(1.0),([&]()->V{V _lhs41990=_v_37640_r;V _rhs41991=V(48.0);return V(j::number(_lhs41990)/j::number(_rhs41991));})()};return j::call(_method,_params41996,_receiver41994);})()};return j::call(_method,_params42001,_receiver41999);})();return V(j::number(_lhs41988)*j::number(_rhs41989));})();return V(std::floor(j::number(_number41987)+.5));})();
_v_37642_count=_default41972;
V _default42002=j::get(_pattern41957,this->_literals[63]);if(_default42002.kind==V::Undefined||_default42002.kind==V::Hole)_default42002=V(1.1);
_v_37643_rise=_default42002;
V _default42003=j::get(_pattern41957,this->_literals[78]);if(_default42003.kind==V::Undefined||_default42003.kind==V::Hole)_default42003=([&]()->V{j::Args _array42004;_array42004.push_back(this->_literals[268]);_array42004.push_back(this->_literals[269]);_array42004.push_back(this->_literals[270]);_array42004.push_back(this->_literals[271]);_array42004.push_back(this->_literals[272]);return j::array(std::move(_array42004));})();
_v_37644_colors=_default42003;
if(j::truth(([&]()->V{V _logical42005=j::unary("!",([&]()->V{V _callee42006=this->_v_36728_num.get();return j::call(_callee42006,j::Args{_v_37641_every});})());return !j::truth(_logical42005)?([&]()->V{V _lhs42007=_v_37641_every;V _rhs42008=V(0.0);return j::binary("<=",_lhs42007,_rhs42008);})():_logical42005;})())){(void)(([&]()->V{V _callee42011=this->_v_36700_fail.get();return j::call(_callee42011,j::Args{([&]()->V{std::u16string _text42009;_text42009+=u"presets.fireworks' every takes seconds between shells above 0, not ";_text42009+=j::string(([&]()->V{V _callee42010=j::builtin("String");return j::call(_callee42010,j::Args{_v_37641_every});})());_text42009+=u"";return V(std::move(_text42009));})()});})());
}
if(j::truth(([&]()->V{V _logical42012=j::unary("!",([&]()->V{V _receiver42013=j::builtin("Number");V _method42014=this->_literals[61];V _method=j::get(_receiver42013,_method42014);j::Args _params42015=j::Args{_v_37642_count};return j::call(_method,_params42015,_receiver42013);})());return !j::truth(_logical42012)?([&]()->V{V _lhs42016=_v_37642_count;V _rhs42017=V(1.0);return j::binary("<",_lhs42016,_rhs42017);})():_logical42012;})())){(void)(([&]()->V{V _callee42020=this->_v_36700_fail.get();return j::call(_callee42020,j::Args{([&]()->V{std::u16string _text42018;_text42018+=u"presets.fireworks' count takes a whole number of sparks of 1 or more, not ";_text42018+=j::string(([&]()->V{V _callee42019=j::builtin("String");return j::call(_callee42019,j::Args{_v_37642_count});})());_text42018+=u"";return V(std::move(_text42018));})()});})());
}
if(j::truth(([&]()->V{V _logical42021=j::unary("!",([&]()->V{V _callee42022=this->_v_36728_num.get();return j::call(_callee42022,j::Args{_v_37643_rise});})());return !j::truth(_logical42021)?([&]()->V{V _lhs42023=_v_37643_rise;V _rhs42024=V(0.0);return j::binary("<",_lhs42023,_rhs42024);})():_logical42021;})())){(void)(([&]()->V{V _callee42027=this->_v_36700_fail.get();return j::call(_callee42027,j::Args{([&]()->V{std::u16string _text42025;_text42025+=u"presets.fireworks' rise takes seconds of 0 or more, not ";_text42025+=j::string(([&]()->V{V _callee42026=j::builtin("String");return j::call(_callee42026,j::Args{_v_37643_rise});})());_text42025+=u"";return V(std::move(_text42025));})()});})());
}
if(j::truth(([&]()->V{V _logical42028=([&]()->V{V _logical42029=j::unary("!",([&]()->V{V _receiver42030=j::builtin("Array");V _method42031=this->_literals[0];V _method=j::get(_receiver42030,_method42031);j::Args _params42032=j::Args{_v_37644_colors};return j::call(_method,_params42032,_receiver42030);})());return !j::truth(_logical42029)?j::unary("!",j::get(_v_37644_colors,this->_literals[1])):_logical42029;})();return !j::truth(_logical42028)?j::unary("!",([&]()->V{V _receiver42033=_v_37644_colors;V _method42034=this->_literals[7];V _method=j::get(_receiver42033,_method42034);j::Args _params42035=j::Args{this->_v_36702_isHex.get()};return j::call(_method,_params42035,_receiver42033);})()):_logical42028;})())){(void)(([&]()->V{V _callee42040=this->_v_36700_fail.get();return j::call(_callee42040,j::Args{([&]()->V{std::u16string _text42036;_text42036+=u"presets.fireworks' colors takes a list of #rrggbb, one for each shell in turn, not ";_text42036+=j::string(([&]()->V{V _receiver42037=j::builtin("JSON");V _method42038=this->_literals[3];V _method=j::get(_receiver42037,_method42038);j::Args _params42039=j::Args{_v_37644_colors};return j::call(_method,_params42039,_receiver42037);})());_text42036+=u"";return V(std::move(_text42036));})()});})());
}
return ([&]()->V{j::Args _array42041;_array42041.push_back(([&]()->V{V _obj42042=j::object();j::put(_obj42042,this->_literals[56],([&]()->V{V _obj42043=j::object();j::put(_obj42043,this->_literals[40],([&]()->V{V _obj42044=j::object();j::put(_obj42044,this->_literals[48],([&]()->V{V _lhs42045=_v_37638_cols;V _rhs42046=V(0.2);return V(j::number(_lhs42045)*j::number(_rhs42046));})());j::put(_obj42044,this->_literals[49],([&]()->V{V _lhs42047=_v_37639_rows;V _rhs42048=V(0.24);return V(j::number(_lhs42047)*j::number(_rhs42048));})());j::put(_obj42044,this->_literals[15],([&]()->V{V _lhs42049=_v_37638_cols;V _rhs42050=V(0.6);return V(j::number(_lhs42049)*j::number(_rhs42050));})());j::put(_obj42044,this->_literals[50],([&]()->V{V _lhs42051=_v_37639_rows;V _rhs42052=V(0.22);return V(j::number(_lhs42051)*j::number(_rhs42052));})());return _obj42044;})());return _obj42043;})());j::put(_obj42042,this->_literals[58],([&]()->V{V _obj42053=j::object();j::put(_obj42053,this->_literals[7],_v_37641_every);j::put(_obj42053,this->_literals[60],_v_37642_count);j::put(_obj42053,this->_literals[62],V(0.4));j::put(_obj42053,this->_literals[63],_v_37643_rise);return _obj42053;})());j::put(_obj42042,this->_literals[66],([&]()->V{j::Args _array42054;_array42054.push_back(V(1.2));_array42054.push_back(V(2.0));return j::array(std::move(_array42054));})());j::put(_obj42042,this->_literals[68],([&]()->V{j::Args _array42055;_array42055.push_back(([&]()->V{V _lhs42056=_v_37640_r;V _rhs42057=V(0.33);return V(j::number(_lhs42056)*j::number(_rhs42057));})());_array42055.push_back(([&]()->V{V _lhs42058=_v_37640_r;V _rhs42059=V(0.4);return V(j::number(_lhs42058)*j::number(_rhs42059));})());return j::array(std::move(_array42055));})());j::put(_obj42042,this->_literals[71],V(1.5));j::put(_obj42042,this->_literals[69],V(6.0));j::put(_obj42042,this->_literals[74],this->_literals[273]);j::put(_obj42042,this->_literals[89],V(0.25));j::put(_obj42042,this->_literals[79],([&]()->V{V _receiver42068=_v_37644_colors;V _method42069=this->_literals[21];V _method=j::get(_receiver42068,_method42069);j::Args _params42070=j::Args{j::function([=](const j::Args &_args_fn37645,const V &_receiver_fn37645,const V &_self_fn37645) mutable ->V{
V _v_37646_c;
_v_37646_c=_args_fn37645[0];
return ([&]()->V{V _obj42060=j::object();j::put(_obj42060,this->_literals[8],([&]()->V{j::Args _array42061;_array42061.push_back(([&]()->V{V _callee42062=this->_v_36703_mix.get();return j::call(_callee42062,j::Args{_v_37646_c,this->_literals[274],V(0.55)});})());_array42061.push_back(([&]()->V{V _callee42063=this->_v_36703_mix.get();return j::call(_callee42063,j::Args{_v_37646_c,this->_literals[274],V(0.2)});})());_array42061.push_back(_v_37646_c);_array42061.push_back(([&]()->V{V _callee42064=this->_v_36703_mix.get();return j::call(_callee42064,j::Args{_v_37646_c,this->_literals[250],V(0.55)});})());return j::array(std::move(_array42061));})());j::put(_obj42060,this->_literals[9],([&]()->V{j::Args _array42065;_array42065.push_back(this->_literals[275]);_array42065.push_back(([&]()->V{V _callee42066=this->_v_36703_mix.get();return j::call(_callee42066,j::Args{_v_37646_c,this->_literals[250],V(0.35)});})());_array42065.push_back(_v_37646_c);_array42065.push_back(([&]()->V{V _callee42067=this->_v_36703_mix.get();return j::call(_callee42067,j::Args{_v_37646_c,this->_literals[274],V(0.55)});})());return j::array(std::move(_array42065));})());return _obj42060;})();
return V{};
},1)};return j::call(_method,_params42070,_receiver42068);})());j::put(_obj42042,this->_literals[77],V(4.0));j::put(_obj42042,this->_literals[81],this->_literals[163]);j::put(_obj42042,this->_literals[93],V(501.0));return _obj42042;})());return j::array(std::move(_array42041));})();

}

return V{};
},2);
this->_v_37647_fireflies.get()=j::function([=](const j::Args &_args_fn37648,const V &_receiver_fn37648,const V &_self_fn37648) mutable ->V{
V _v_37649_size;
V _v_37650_o;
_v_37649_size=_args_fn37648[0];
_v_37650_o=_args_fn37648[1];
{
V _v_37651_cols;
V _v_37652_rows;
V _v_37653_density;
V _v_37654_colors;
V _v_37655_d;
V _pattern42072=([&]()->V{V _callee42071=this->_v_37534_sizeOf.get();return j::call(_callee42071,j::Args{_v_37649_size,this->_literals[276]});})();
_v_37651_cols=j::get(_pattern42072,this->_literals[15]);
_v_37652_rows=j::get(_pattern42072,this->_literals[50]);
V _pattern42074=([&]()->V{V _callee42073=this->_v_37544_optionsOf.get();return j::call(_callee42073,j::Args{_v_37650_o,this->_literals[276]});})();
_v_37653_density=j::get(_pattern42074,this->_literals[220]);
_v_37654_colors=j::get(_pattern42074,this->_literals[78]);
_v_37655_d=([&]()->V{V _callee42075=this->_v_37539_share.get();return j::call(_callee42075,j::Args{_v_37653_density,this->_literals[277],V(1.0)});})();
return ([&]()->V{j::Args _array42076;_array42076.push_back(([&]()->V{V _obj42077=j::object();j::put(_obj42077,this->_literals[56],([&]()->V{V _obj42078=j::object();j::put(_obj42078,this->_literals[40],([&]()->V{V _obj42079=j::object();j::put(_obj42079,this->_literals[48],V(0.0));j::put(_obj42079,this->_literals[49],([&]()->V{V _lhs42080=_v_37652_rows;V _rhs42081=V(0.3);return V(j::number(_lhs42080)*j::number(_rhs42081));})());j::put(_obj42079,this->_literals[15],_v_37651_cols);j::put(_obj42079,this->_literals[50],([&]()->V{V _lhs42082=_v_37652_rows;V _rhs42083=V(0.7);return V(j::number(_lhs42082)*j::number(_rhs42083));})());return _obj42079;})());return _obj42078;})());j::put(_obj42077,this->_literals[57],([&]()->V{V _lhs42084=([&]()->V{V _lhs42086=([&]()->V{V _lhs42088=V(36.0);V _rhs42089=_v_37655_d;return V(j::number(_lhs42088)*j::number(_rhs42089));})();V _rhs42087=([&]()->V{V _callee42091=this->_v_37548_scaleOf.get();return j::call(_callee42091,j::Args{([&]()->V{V _obj42090=j::object();j::put(_obj42090,this->_literals[15],_v_37651_cols);j::put(_obj42090,this->_literals[50],_v_37652_rows);return _obj42090;})()});})();return V(j::number(_lhs42086)*j::number(_rhs42087));})();V _rhs42085=V(4.5);return V(j::number(_lhs42084)/j::number(_rhs42085));})());j::put(_obj42077,this->_literals[66],([&]()->V{j::Args _array42092;_array42092.push_back(V(3.0));_array42092.push_back(V(6.0));return j::array(std::move(_array42092));})());j::put(_obj42077,this->_literals[68],([&]()->V{j::Args _array42093;_array42093.push_back(V(0.6));_array42093.push_back(V(2.0));return j::array(std::move(_array42093));})());j::put(_obj42077,this->_literals[72],([&]()->V{V _obj42094=j::object();j::put(_obj42094,this->_literals[73],V(1.5));j::put(_obj42094,this->_literals[68],V(0.15));return _obj42094;})());j::put(_obj42077,this->_literals[74],this->_literals[278]);j::put(_obj42077,this->_literals[78],([&]()->V{V _logical42095=_v_37654_colors;return j::nullish(_logical42095)?([&]()->V{V _obj42096=j::object();j::put(_obj42096,this->_literals[8],([&]()->V{j::Args _array42097;_array42097.push_back(this->_literals[279]);_array42097.push_back(this->_literals[280]);_array42097.push_back(this->_literals[281]);_array42097.push_back(this->_literals[282]);_array42097.push_back(this->_literals[281]);_array42097.push_back(this->_literals[280]);_array42097.push_back(this->_literals[279]);return j::array(std::move(_array42097));})());j::put(_obj42096,this->_literals[9],([&]()->V{j::Args _array42098;_array42098.push_back(this->_literals[283]);_array42098.push_back(this->_literals[281]);_array42098.push_back(this->_literals[284]);_array42098.push_back(this->_literals[285]);_array42098.push_back(this->_literals[284]);_array42098.push_back(this->_literals[281]);_array42098.push_back(this->_literals[283]);return j::array(std::move(_array42098));})());return _obj42096;})():_logical42095;})());j::put(_obj42077,this->_literals[81],this->_literals[86]);j::put(_obj42077,this->_literals[93],V(601.0));return _obj42077;})());return j::array(std::move(_array42076));})();

}

return V{};
},2);
this->_v_37656_bubbles.get()=j::function([=](const j::Args &_args_fn37657,const V &_receiver_fn37657,const V &_self_fn37657) mutable ->V{
V _v_37658_size;
V _v_37659_o;
_v_37658_size=_args_fn37657[0];
_v_37659_o=_args_fn37657[1];
{
V _v_37660_cols;
V _v_37661_rows;
V _v_37662_density;
V _v_37663_colors;
V _v_37664_d;
V _v_37665_cross;
V _pattern42100=([&]()->V{V _callee42099=this->_v_37534_sizeOf.get();return j::call(_callee42099,j::Args{_v_37658_size,this->_literals[286]});})();
_v_37660_cols=j::get(_pattern42100,this->_literals[15]);
_v_37661_rows=j::get(_pattern42100,this->_literals[50]);
V _pattern42102=([&]()->V{V _callee42101=this->_v_37544_optionsOf.get();return j::call(_callee42101,j::Args{_v_37659_o,this->_literals[286]});})();
_v_37662_density=j::get(_pattern42102,this->_literals[220]);
_v_37663_colors=j::get(_pattern42102,this->_literals[78]);
_v_37664_d=([&]()->V{V _callee42103=this->_v_37539_share.get();return j::call(_callee42103,j::Args{_v_37662_density,this->_literals[287],V(1.0)});})();
_v_37665_cross=([&]()->V{V _lhs42104=([&]()->V{V _lhs42106=_v_37661_rows;V _rhs42107=V(2.0);return V(j::number(_lhs42106)*j::number(_rhs42107));})();V _rhs42105=V(6.0);return V(j::number(_lhs42104)/j::number(_rhs42105));})();
return ([&]()->V{j::Args _array42108;_array42108.push_back(([&]()->V{V _obj42109=j::object();j::put(_obj42109,this->_literals[56],([&]()->V{V _obj42110=j::object();j::put(_obj42110,this->_literals[38],this->_literals[156]);return _obj42110;})());j::put(_obj42109,this->_literals[57],([&]()->V{V _lhs42111=([&]()->V{V _lhs42113=([&]()->V{V _lhs42115=V(30.0);V _rhs42116=_v_37664_d;return V(j::number(_lhs42115)*j::number(_rhs42116));})();V _rhs42114=([&]()->V{V _callee42118=this->_v_37548_scaleOf.get();return j::call(_callee42118,j::Args{([&]()->V{V _obj42117=j::object();j::put(_obj42117,this->_literals[15],_v_37660_cols);j::put(_obj42117,this->_literals[50],_v_37661_rows);return _obj42117;})()});})();return V(j::number(_lhs42113)*j::number(_rhs42114));})();V _rhs42112=_v_37665_cross;return V(j::number(_lhs42111)/j::number(_rhs42112));})());j::put(_obj42109,this->_literals[66],([&]()->V{j::Args _array42119;_array42119.push_back(([&]()->V{V _lhs42120=_v_37665_cross;V _rhs42121=V(0.8);return V(j::number(_lhs42120)*j::number(_rhs42121));})());_array42119.push_back(([&]()->V{V _lhs42122=_v_37665_cross;V _rhs42123=V(1.2);return V(j::number(_lhs42122)*j::number(_rhs42123));})());return j::array(std::move(_array42119));})());j::put(_obj42109,this->_literals[68],([&]()->V{j::Args _array42124;_array42124.push_back(V(2.5));_array42124.push_back(V(5.0));return j::array(std::move(_array42124));})());j::put(_obj42109,this->_literals[69],j::unary("-",V(1.4)));j::put(_obj42109,this->_literals[72],([&]()->V{V _obj42125=j::object();j::put(_obj42125,this->_literals[73],V(0.9));j::put(_obj42125,this->_literals[68],V(0.4));return _obj42125;})());j::put(_obj42109,this->_literals[74],this->_literals[288]);j::put(_obj42109,this->_literals[78],([&]()->V{V _logical42126=_v_37663_colors;return j::nullish(_logical42126)?([&]()->V{V _obj42127=j::object();j::put(_obj42127,this->_literals[8],([&]()->V{j::Args _array42128;_array42128.push_back(this->_literals[289]);_array42128.push_back(this->_literals[290]);_array42128.push_back(this->_literals[291]);_array42128.push_back(this->_literals[292]);return j::array(std::move(_array42128));})());j::put(_obj42127,this->_literals[9],([&]()->V{j::Args _array42129;_array42129.push_back(this->_literals[293]);_array42129.push_back(this->_literals[290]);_array42129.push_back(this->_literals[289]);_array42129.push_back(this->_literals[294]);return j::array(std::move(_array42129));})());return _obj42127;})():_logical42126;})());j::put(_obj42109,this->_literals[81],([&]()->V{V _obj42130=j::object();j::put(_obj42130,this->_literals[48],this->_literals[164]);j::put(_obj42130,this->_literals[49],this->_literals[82]);return _obj42130;})());j::put(_obj42109,this->_literals[93],V(701.0));return _obj42109;})());return j::array(std::move(_array42108));})();

}

return V{};
},2);
this->_v_37668_matrix.get()=j::function([=](const j::Args &_args_fn37669,const V &_receiver_fn37669,const V &_self_fn37669) mutable ->V{
V _v_37670_size;
V _v_37671_o;
_v_37670_size=_args_fn37669[0];
_v_37671_o=_args_fn37669[1];
{
V _v_37672_cols;
V _v_37673_rows;
V _v_37674_density;
V _v_37675_speed;
V _v_37676_colors;
V _v_37677_d;
V _v_37678_v;
V _v_37679_lo;
V _v_37680_hi;
V _v_37681_trail;
V _v_37682_head;
V _v_37683_tail;
V _pattern42132=([&]()->V{V _callee42131=this->_v_37534_sizeOf.get();return j::call(_callee42131,j::Args{_v_37670_size,this->_literals[295]});})();
_v_37672_cols=j::get(_pattern42132,this->_literals[15]);
_v_37673_rows=j::get(_pattern42132,this->_literals[50]);
V _pattern42134=([&]()->V{V _callee42133=this->_v_37544_optionsOf.get();return j::call(_callee42133,j::Args{_v_37671_o,this->_literals[295]});})();
_v_37674_density=j::get(_pattern42134,this->_literals[220]);
_v_37675_speed=j::get(_pattern42134,this->_literals[68]);
_v_37676_colors=j::get(_pattern42134,this->_literals[78]);
_v_37677_d=([&]()->V{V _callee42135=this->_v_37539_share.get();return j::call(_callee42135,j::Args{_v_37674_density,this->_literals[296],V(1.0)});})();
_v_37678_v=([&]()->V{V _callee42136=this->_v_37539_share.get();return j::call(_callee42136,j::Args{_v_37675_speed,this->_literals[297],V(1.0)});})();
_v_37679_lo=([&]()->V{V _lhs42137=V(16.0);V _rhs42138=_v_37678_v;return V(j::number(_lhs42137)*j::number(_rhs42138));})();
_v_37680_hi=([&]()->V{V _lhs42139=V(36.0);V _rhs42140=_v_37678_v;return V(j::number(_lhs42139)*j::number(_rhs42140));})();
_v_37681_trail=([&]()->V{V _lhs42141=V(0.9);V _rhs42142=_v_37678_v;return V(j::number(_lhs42141)/j::number(_rhs42142));})();
_v_37682_head=([&]()->V{V _obj42143=j::object();j::put(_obj42143,this->_literals[8],([&]()->V{j::Args _array42144;_array42144.push_back(this->_literals[298]);return j::array(std::move(_array42144));})());j::put(_obj42143,this->_literals[9],([&]()->V{j::Args _array42145;_array42145.push_back(this->_literals[299]);return j::array(std::move(_array42145));})());return _obj42143;})();
_v_37683_tail=([&]()->V{V _obj42146=j::object();j::put(_obj42146,this->_literals[8],([&]()->V{j::Args _array42147;_array42147.push_back(this->_literals[300]);_array42147.push_back(this->_literals[301]);return j::array(std::move(_array42147));})());j::put(_obj42146,this->_literals[9],([&]()->V{j::Args _array42148;_array42148.push_back(this->_literals[302]);_array42148.push_back(this->_literals[303]);return j::array(std::move(_array42148));})());return _obj42146;})();
if(j::truth(([&]()->V{V _lhs42149=_v_37676_colors;V _rhs42150=j::builtin("undefined");return V(!j::equal(_lhs42149,_rhs42150,true));})())){
V _v_37684_given;
V _v_37685_f;
_v_37684_given=(j::truth(([&]()->V{V _lhs42151=j::unary("typeof",_v_37676_colors);V _rhs42152=this->_literals[4];return V(j::equal(_lhs42151,_rhs42152,true));})())?([&]()->V{V _callee42153=this->_v_36695_colorsOf.get();return j::call(_callee42153,j::Args{_v_37676_colors,this->_literals[304]});})():_v_37676_colors);
_v_37685_f=([&]()->V{V _callee42161=this->_v_36751_fadeOf.get();return j::call(_callee42161,j::Args{_v_37684_given,(j::truth(([&]()->V{V _receiver42154=j::builtin("Array");V _method42155=this->_literals[0];V _method=j::get(_receiver42154,_method42155);j::Args _params42156=j::Args{_v_37684_given};return j::call(_method,_params42156,_receiver42154);})())?j::get(_v_37684_given,this->_literals[1]):([&]()->V{V _logical42157=([&]()->V{V _chain42158=_v_37684_given;V _chain42159=j::get(_chain42158,this->_literals[8]);if(j::nullish(_chain42159))return V{};V _chain42160=j::get(_chain42159,this->_literals[1]);return _chain42160;})();return j::nullish(_logical42157)?V(1.0):_logical42157;})()),this->_literals[304]});})();
if(j::truth(([&]()->V{V _lhs42162=j::get(j::get(_v_37685_f,this->_literals[8]),this->_literals[1]);V _rhs42163=V(2.0);return j::binary("<",_lhs42162,_rhs42163);})())){(void)(([&]()->V{V _callee42164=this->_v_36700_fail.get();return j::call(_callee42164,j::Args{this->_literals[305]});})());
}
(void)((_v_37682_head=([&]()->V{V _obj42166=j::object();j::put(_obj42166,this->_literals[8],([&]()->V{j::Args _array42167;_array42167.push_back(j::get(j::get(_v_37685_f,this->_literals[8]),V(0.0)));return j::array(std::move(_array42167));})());j::put(_obj42166,this->_literals[9],([&]()->V{j::Args _array42168;_array42168.push_back(j::get(j::get(_v_37685_f,this->_literals[9]),V(0.0)));return j::array(std::move(_array42168));})());return _obj42166;})()));
(void)((_v_37683_tail=([&]()->V{V _obj42170=j::object();j::put(_obj42170,this->_literals[8],([&]()->V{V _receiver42171=j::get(_v_37685_f,this->_literals[8]);V _method42172=this->_literals[23];V _method=j::get(_receiver42171,_method42172);j::Args _params42173=j::Args{V(1.0)};return j::call(_method,_params42173,_receiver42171);})());j::put(_obj42170,this->_literals[9],([&]()->V{V _receiver42174=j::get(_v_37685_f,this->_literals[9]);V _method42175=this->_literals[23];V _method=j::get(_receiver42174,_method42175);j::Args _params42176=j::Args{V(1.0)};return j::call(_method,_params42176,_receiver42174);})());return _obj42170;})()));

}

return ([&]()->V{j::Args _array42177;_array42177.push_back(([&]()->V{V _obj42178=j::object();j::put(_obj42178,this->_literals[56],([&]()->V{V _obj42179=j::object();j::put(_obj42179,this->_literals[38],this->_literals[24]);return _obj42179;})());j::put(_obj42178,this->_literals[57],([&]()->V{V _lhs42180=([&]()->V{V _lhs42182=([&]()->V{V _lhs42184=_v_37672_cols;V _rhs42185=V(0.5);return V(j::number(_lhs42184)*j::number(_rhs42185));})();V _rhs42183=_v_37677_d;return V(j::number(_lhs42182)*j::number(_rhs42183));})();V _rhs42181=([&]()->V{V _lhs42186=([&]()->V{V _lhs42188=([&]()->V{V _lhs42190=_v_37673_rows;V _rhs42191=V(2.0);return V(j::number(_lhs42190)*j::number(_rhs42191));})();V _rhs42189=([&]()->V{V _lhs42192=([&]()->V{V _lhs42194=_v_37679_lo;V _rhs42195=_v_37680_hi;return j::binary("+",_lhs42194,_rhs42195);})();V _rhs42193=V(2.0);return V(j::number(_lhs42192)/j::number(_rhs42193));})();return V(j::number(_lhs42188)/j::number(_rhs42189));})();V _rhs42187=_v_37681_trail;return j::binary("+",_lhs42186,_rhs42187);})();return V(j::number(_lhs42180)/j::number(_rhs42181));})());j::put(_obj42178,this->_literals[66],([&]()->V{V _lhs42196=([&]()->V{V _lhs42198=([&]()->V{V _lhs42200=_v_37673_rows;V _rhs42201=V(2.0);return V(j::number(_lhs42200)*j::number(_rhs42201));})();V _rhs42199=_v_37679_lo;return V(j::number(_lhs42198)/j::number(_rhs42199));})();V _rhs42197=_v_37681_trail;return j::binary("+",_lhs42196,_rhs42197);})());j::put(_obj42178,this->_literals[68],([&]()->V{j::Args _array42202;_array42202.push_back(_v_37679_lo);_array42202.push_back(_v_37680_hi);return j::array(std::move(_array42202));})());j::put(_obj42178,this->_literals[89],_v_37681_trail);j::put(_obj42178,this->_literals[76],j::function([=](const j::Args &_args_fn37686,const V &_receiver_fn37686,const V &_self_fn37686) mutable ->V{
V _v_37687_p;
_v_37687_p=_args_fn37686[0];
{
V _v_37688_row;
V _v_37689_every;
_v_37688_row=([&]()->V{V _number42203=j::get(_v_37687_p,this->_literals[49]);return V(std::floor(j::number(_number42203)));})();
if(j::truth(([&]()->V{V _lhs42204=j::get(_v_37687_p,this->_literals[115]);V _rhs42205=V(0.0);return V(j::equal(_lhs42204,_rhs42205,true));})())){return j::get(this->_v_37666_HEAD.get(),([&]()->V{V _number42214=([&]()->V{V _lhs42215=([&]()->V{V _callee42222=this->_v_36701_hash.get();return j::call(_callee42222,j::Args{j::get(_v_37687_p,this->_literals[108]),([&]()->V{V _number42219=([&]()->V{V _lhs42220=j::get(_v_37687_p,this->_literals[109]);V _rhs42221=V(20.0);return V(j::number(_lhs42220)*j::number(_rhs42221));})();return V(std::floor(j::number(_number42219)));})(),V(1.0)});})();V _rhs42216=j::get(this->_v_37666_HEAD.get(),this->_literals[1]);return V(j::number(_lhs42215)*j::number(_rhs42216));})();return V(std::floor(j::number(_number42214)));})());
}
_v_37689_every=([&]()->V{V _lhs42223=V(0.4);V _rhs42224=([&]()->V{V _lhs42225=([&]()->V{V _callee42227=this->_v_36701_hash.get();return j::call(_callee42227,j::Args{j::get(_v_37687_p,this->_literals[108]),_v_37688_row,V(2.0)});})();V _rhs42226=V(1.6);return V(j::number(_lhs42225)*j::number(_rhs42226));})();return j::binary("+",_lhs42223,_rhs42224);})();
return j::get(this->_v_37667_BODY.get(),([&]()->V{V _number42246=([&]()->V{V _lhs42247=([&]()->V{V _callee42264=this->_v_36701_hash.get();return j::call(_callee42264,j::Args{j::get(_v_37687_p,this->_literals[108]),_v_37688_row,([&]()->V{V _number42256=([&]()->V{V _lhs42257=([&]()->V{V _lhs42259=j::get(_v_37687_p,this->_literals[109]);V _rhs42260=_v_37689_every;return V(j::number(_lhs42259)/j::number(_rhs42260));})();V _rhs42258=([&]()->V{V _lhs42261=([&]()->V{V _callee42263=this->_v_36701_hash.get();return j::call(_callee42263,j::Args{j::get(_v_37687_p,this->_literals[108]),_v_37688_row,V(3.0)});})();V _rhs42262=V(9.0);return V(j::number(_lhs42261)*j::number(_rhs42262));})();return j::binary("+",_lhs42257,_rhs42258);})();return V(std::floor(j::number(_number42256)));})()});})();V _rhs42248=j::get(this->_v_37667_BODY.get(),this->_literals[1]);return V(j::number(_lhs42247)*j::number(_rhs42248));})();return V(std::floor(j::number(_number42246)));})());

}

return V{};
},1));j::put(_obj42178,this->_literals[78],_v_37682_head);j::put(_obj42178,this->_literals[91],_v_37683_tail);j::put(_obj42178,this->_literals[81],this->_literals[163]);j::put(_obj42178,this->_literals[93],V(801.0));return _obj42178;})());return j::array(std::move(_array42177));})();

}

return V{};
},2);
auto &_import2255=j::module("kit/core");
this->_v_36690_EMPTY=_import2255.exported("EMPTY");
this->_v_36691_INK=_import2255.exported("INK");
this->_v_36692_NONE=_import2255.exported("NONE");
this->_v_36693_asPiece=_import2255.exported("asPiece");
this->_v_36694_colorOf=_import2255.exported("colorOf");
this->_v_36695_colorsOf=_import2255.exported("colorsOf");
this->_v_36696_Surface=_import2255.exported("Surface");
this->_v_36697_TAU=_import2255.exported("TAU");
this->_v_36698_and=_import2255.exported("and");
this->_v_36699_code=_import2255.exported("code");
this->_v_36700_fail=_import2255.exported("fail");
this->_v_36701_hash=_import2255.exported("hash");
this->_v_36702_isHex=_import2255.exported("isHex");
this->_v_36703_mix=_import2255.exported("mix");
this->_v_36704_piece=_import2255.exported("piece");
this->_v_36705_rgb=_import2255.exported("rgb");
this->_v_36706_snapshot=_import2255.exported("snapshot");
this->_v_36707_specOf=_import2255.exported("specOf");
this->_v_36708_spread=_import2255.exported("spread");
this->exports["system"]=this->_v_36709_system;
this->exports["streak"]=this->_v_36961_streak;
this->exports["drawParticles"]=this->_v_37298_drawParticles;
this->exports["particlesPalette"]=this->_v_37376_particlesPalette;
this->exports["particles"]=this->_v_37475_particles;
this->exports["presets"]=this->_v_37690_presets;
this->_v_36712_SPLASH.get()=V(0.1);
this->_v_36713_SWING.get()=V(0.3);
this->_v_36714_ALIVE.get()=V(20000.0);
this->_v_36715_IN.get()=V(0.000001);
this->_v_36716_GUST.get()=([&]()->V{V _lhs42265=V(1.0);V _rhs42266=V(30.0);return V(j::number(_lhs42265)/j::number(_rhs42266));})();
this->_v_36717_BOUNDS.get()=([&]()->V{j::Args _array42267;_array42267.push_back(this->_literals[82]);_array42267.push_back(this->_literals[164]);_array42267.push_back(this->_literals[86]);_array42267.push_back(this->_literals[163]);return j::array(std::move(_array42267));})();
this->_v_36718_EDGES.get()=([&]()->V{j::Args _array42268;_array42268.push_back(this->_literals[24]);_array42268.push_back(this->_literals[156]);_array42268.push_back(this->_literals[160]);_array42268.push_back(this->_literals[306]);return j::array(std::move(_array42268));})();
this->_v_36719_PLACES.get()=([&]()->V{j::Args _array42269;_array42269.push_back(this->_literals[33]);_array42269.push_back(this->_literals[24]);_array42269.push_back(this->_literals[156]);_array42269.push_back(this->_literals[160]);_array42269.push_back(this->_literals[306]);_array42269.push_back(this->_literals[216]);_array42269.push_back(this->_literals[307]);_array42269.push_back(this->_literals[308]);_array42269.push_back(this->_literals[309]);return j::array(std::move(_array42269));})();
this->_v_36720_SPOT.get()=([&]()->V{V _obj42270=j::object();j::put(_obj42270,this->_literals[33],([&]()->V{j::Args _array42271;_array42271.push_back(V(0.5));_array42271.push_back(V(0.5));return j::array(std::move(_array42271));})());j::put(_obj42270,this->_literals[24],([&]()->V{j::Args _array42272;_array42272.push_back(V(0.5));_array42272.push_back(V(0.0));return j::array(std::move(_array42272));})());j::put(_obj42270,this->_literals[156],([&]()->V{j::Args _array42273;_array42273.push_back(V(0.5));_array42273.push_back(V(1.0));return j::array(std::move(_array42273));})());j::put(_obj42270,this->_literals[160],([&]()->V{j::Args _array42274;_array42274.push_back(V(0.0));_array42274.push_back(V(0.5));return j::array(std::move(_array42274));})());j::put(_obj42270,this->_literals[306],([&]()->V{j::Args _array42275;_array42275.push_back(V(1.0));_array42275.push_back(V(0.5));return j::array(std::move(_array42275));})());j::put(_obj42270,this->_literals[216],([&]()->V{j::Args _array42276;_array42276.push_back(V(0.0));_array42276.push_back(V(0.0));return j::array(std::move(_array42276));})());j::put(_obj42270,this->_literals[307],([&]()->V{j::Args _array42277;_array42277.push_back(V(1.0));_array42277.push_back(V(0.0));return j::array(std::move(_array42277));})());j::put(_obj42270,this->_literals[308],([&]()->V{j::Args _array42278;_array42278.push_back(V(0.0));_array42278.push_back(V(1.0));return j::array(std::move(_array42278));})());j::put(_obj42270,this->_literals[309],([&]()->V{j::Args _array42279;_array42279.push_back(V(1.0));_array42279.push_back(V(1.0));return j::array(std::move(_array42279));})());return _obj42270;})();
this->_v_36721_HEADING.get()=([&]()->V{V _obj42280=j::object();j::put(_obj42280,this->_literals[306],V(0.0));j::put(_obj42280,this->_literals[310],([&]()->V{V _lhs42281=this->_v_36697_TAU.get();V _rhs42282=V(8.0);return V(j::number(_lhs42281)/j::number(_rhs42282));})());j::put(_obj42280,this->_literals[311],([&]()->V{V _lhs42283=this->_v_36697_TAU.get();V _rhs42284=V(4.0);return V(j::number(_lhs42283)/j::number(_rhs42284));})());j::put(_obj42280,this->_literals[312],([&]()->V{V _lhs42285=([&]()->V{V _lhs42287=V(3.0);V _rhs42288=this->_v_36697_TAU.get();return V(j::number(_lhs42287)*j::number(_rhs42288));})();V _rhs42286=V(8.0);return V(j::number(_lhs42285)/j::number(_rhs42286));})());j::put(_obj42280,this->_literals[160],([&]()->V{V _lhs42289=this->_v_36697_TAU.get();V _rhs42290=V(2.0);return V(j::number(_lhs42289)/j::number(_rhs42290));})());j::put(_obj42280,this->_literals[313],([&]()->V{V _lhs42291=([&]()->V{V _lhs42293=j::unary("-",V(3.0));V _rhs42294=this->_v_36697_TAU.get();return V(j::number(_lhs42293)*j::number(_rhs42294));})();V _rhs42292=V(8.0);return V(j::number(_lhs42291)/j::number(_rhs42292));})());j::put(_obj42280,this->_literals[314],([&]()->V{V _lhs42295=j::unary("-",this->_v_36697_TAU.get());V _rhs42296=V(4.0);return V(j::number(_lhs42295)/j::number(_rhs42296));})());j::put(_obj42280,this->_literals[315],([&]()->V{V _lhs42297=j::unary("-",this->_v_36697_TAU.get());V _rhs42298=V(8.0);return V(j::number(_lhs42297)/j::number(_rhs42298));})());return _obj42280;})();
this->_v_36722_DIRECTIONS.get()=([&]()->V{j::Args _array42299;for(const auto &_value:j::elements(([&]()->V{V _receiver42300=j::builtin("Object");V _method42301=this->_literals[42];V _method=j::get(_receiver42300,_method42301);j::Args _params42302=j::Args{this->_v_36721_HEADING.get()};return j::call(_method,_params42302,_receiver42300);})()))_array42299.push_back(_value);_array42299.push_back(this->_literals[54]);return j::array(std::move(_array42299));})();
this->_v_36723_INWARD.get()=([&]()->V{V _obj42303=j::object();j::put(_obj42303,this->_literals[24],([&]()->V{V _lhs42304=this->_v_36697_TAU.get();V _rhs42305=V(4.0);return V(j::number(_lhs42304)/j::number(_rhs42305));})());j::put(_obj42303,this->_literals[156],([&]()->V{V _lhs42306=j::unary("-",this->_v_36697_TAU.get());V _rhs42307=V(4.0);return V(j::number(_lhs42306)/j::number(_rhs42307));})());j::put(_obj42303,this->_literals[160],V(0.0));j::put(_obj42303,this->_literals[306],j::get(j::builtin("Math"),this->_literals[55]));return _obj42303;})();
this->_v_36724_mod.get()=j::function([=](const j::Args &_args_fn36725,const V &_receiver_fn36725,const V &_self_fn36725) mutable ->V{
V _v_36726_a;
V _v_36727_n;
_v_36726_a=_args_fn36725[0];
_v_36727_n=_args_fn36725[1];
return ([&]()->V{V _lhs42308=([&]()->V{V _lhs42310=([&]()->V{V _lhs42312=_v_36726_a;V _rhs42313=_v_36727_n;return V(std::fmod(j::number(_lhs42312),j::number(_rhs42313)));})();V _rhs42311=_v_36727_n;return j::binary("+",_lhs42310,_rhs42311);})();V _rhs42309=_v_36727_n;return V(std::fmod(j::number(_lhs42308),j::number(_rhs42309)));})();
return V{};
},2);
this->_v_36728_num.get()=j::function([=](const j::Args &_args_fn36729,const V &_receiver_fn36729,const V &_self_fn36729) mutable ->V{
V _v_36730_v;
_v_36730_v=_args_fn36729[0];
return ([&]()->V{V _logical42314=([&]()->V{V _lhs42315=j::unary("typeof",_v_36730_v);V _rhs42316=this->_literals[59];return V(j::equal(_lhs42315,_rhs42316,true));})();return j::truth(_logical42314)?([&]()->V{V _receiver42317=j::builtin("Number");V _method42318=this->_literals[190];V _method=j::get(_receiver42317,_method42318);j::Args _params42319=j::Args{_v_36730_v};return j::call(_method,_params42319,_receiver42317);})():_logical42314;})();
return V{};
},1);
this->_v_36731_quoted.get()=j::function([=](const j::Args &_args_fn36732,const V &_receiver_fn36732,const V &_self_fn36732) mutable ->V{
V _v_36733_list;
_v_36733_list=_args_fn36732[0];
return ([&]()->V{V _callee42324=this->_v_36698_and.get();return j::call(_callee42324,j::Args{([&]()->V{V _receiver42321=_v_36733_list;V _method42322=this->_literals[21];V _method=j::get(_receiver42321,_method42322);j::Args _params42323=j::Args{j::function([=](const j::Args &_args_fn36734,const V &_receiver_fn36734,const V &_self_fn36734) mutable ->V{
V _v_36735_x;
_v_36735_x=_args_fn36734[0];
return ([&]()->V{std::u16string _text42320;_text42320+=u"\"";_text42320+=j::string(_v_36735_x);_text42320+=u"\"";return V(std::move(_text42320));})();
return V{};
},1)};return j::call(_method,_params42323,_receiver42321);})()});})();
return V{};
},1);
this->_v_36762_WORDS.get()=([&]()->V{j::Args _array42325;for(const auto &_value:j::elements(this->_v_36718_EDGES.get()))_array42325.push_back(_value);_array42325.push_back(this->_literals[39]);_array42325.push_back(this->_literals[33]);return j::array(std::move(_array42325));})();
this->_v_36763_KINDS.get()=([&]()->V{j::Args _array42326;_array42326.push_back(this->_literals[41]);_array42326.push_back(this->_literals[47]);_array42326.push_back(this->_literals[40]);_array42326.push_back(this->_literals[38]);_array42326.push_back(this->_literals[13]);_array42326.push_back(this->_literals[45]);return j::array(std::move(_array42326));})();
this->_v_36764_isPiece.get()=j::function([=](const j::Args &_args_fn36765,const V &_receiver_fn36765,const V &_self_fn36765) mutable ->V{
V _v_36766_v;
_v_36766_v=_args_fn36765[0];
return ([&]()->V{V _logical42327=([&]()->V{V _logical42328=([&]()->V{V _logical42329=j::unary("!",j::unary("!",_v_36766_v));return j::truth(_logical42329)?([&]()->V{V _lhs42330=j::unary("typeof",_v_36766_v);V _rhs42331=this->_literals[6];return V(j::equal(_lhs42330,_rhs42331,true));})():_logical42329;})();return j::truth(_logical42328)?([&]()->V{V _lhs42332=this->_literals[10];V _rhs42333=_v_36766_v;return j::binary("in",_lhs42332,_rhs42333);})():_logical42328;})();return j::truth(_logical42327)?([&]()->V{V _lhs42334=j::unary("typeof",j::get(_v_36766_v,this->_literals[316]));V _rhs42335=this->_literals[46];return V(j::equal(_lhs42334,_rhs42335,true));})():_logical42327;})();
return V{};
},1);
this->_v_36767_isSource.get()=j::function([=](const j::Args &_args_fn36768,const V &_receiver_fn36768,const V &_self_fn36768) mutable ->V{
V _v_36769_v;
_v_36769_v=_args_fn36768[0];
return ([&]()->V{V _logical42336=([&]()->V{V _logical42337=([&]()->V{V _lhs42338=j::unary("typeof",_v_36769_v);V _rhs42339=this->_literals[4];return V(j::equal(_lhs42338,_rhs42339,true));})();return !j::truth(_logical42337)?([&]()->V{V _lhs42340=_v_36769_v;V _rhs42341=this->_v_36696_Surface.get();return j::binary("instanceof",_lhs42340,_rhs42341);})():_logical42337;})();return !j::truth(_logical42336)?([&]()->V{V _callee42342=this->_v_36764_isPiece.get();return j::call(_callee42342,j::Args{_v_36769_v});})():_logical42336;})();
return V{};
},1);
this->_v_36875_reachOf.get()=j::function([=](const j::Args &_args_fn36876,const V &_receiver_fn36876,const V &_self_fn36876) mutable ->V{
V _v_36877_pl;
_v_36877_pl=_args_fn36876[0];
return ([&]()->V{V _lhs42343=j::get(j::get(_v_36877_pl,this->_literals[66]),V(1.0));V _rhs42344=([&]()->V{V _lhs42345=j::get(j::get(_v_36877_pl,this->_literals[88]),this->_literals[1]);V _rhs42346=this->_v_36712_SPLASH.get();return V(j::number(_lhs42345)*j::number(_rhs42346));})();return j::binary("+",_lhs42343,_rhs42344);})();
return V{};
},1);
this->_v_36900_listOf.get()=j::function([=](const j::Args &_args_fn36901,const V &_receiver_fn36901,const V &_self_fn36901) mutable ->V{
V _v_36902_systems;
_v_36902_systems=_args_fn36901[0];
return (j::truth(([&]()->V{V _receiver42347=j::builtin("Array");V _method42348=this->_literals[0];V _method=j::get(_receiver42347,_method42348);j::Args _params42349=j::Args{_v_36902_systems};return j::call(_method,_params42349,_receiver42347);})())?_v_36902_systems:([&]()->V{j::Args _array42350;_array42350.push_back(_v_36902_systems);return j::array(std::move(_array42350));})());
return V{};
},1);
this->_v_36903_kept.get()=([&]()->V{V _callee42351=j::builtin("WeakMap");return j::construct(_callee42351,j::Args{});})();
this->_v_36914_carried.get()=j::function([=](const j::Args &_args_fn36915,const V &_receiver_fn36915,const V &_self_fn36915) mutable ->V{
V _v_36916_k;
V _v_36917_a;
_v_36916_k=_args_fn36915[0];
_v_36917_a=_args_fn36915[1];
{
V _v_36918_ka;
_v_36918_ka=([&]()->V{V _lhs42352=_v_36916_k;V _rhs42353=_v_36917_a;return V(j::number(_lhs42352)*j::number(_rhs42353));})();
return (j::truth(([&]()->V{V _lhs42354=([&]()->V{V _number42356=_v_36918_ka;return V(std::fabs(j::number(_number42356)));})();V _rhs42355=V(0.0001);return j::binary("<",_lhs42354,_rhs42355);})())?([&]()->V{V _lhs42357=_v_36917_a;V _rhs42358=([&]()->V{V _lhs42359=([&]()->V{V _lhs42361=V(1.0);V _rhs42362=([&]()->V{V _lhs42363=_v_36918_ka;V _rhs42364=V(2.0);return V(j::number(_lhs42363)/j::number(_rhs42364));})();return V(j::number(_lhs42361)-j::number(_rhs42362));})();V _rhs42360=([&]()->V{V _lhs42365=([&]()->V{V _lhs42367=_v_36918_ka;V _rhs42368=_v_36918_ka;return V(j::number(_lhs42367)*j::number(_rhs42368));})();V _rhs42366=V(6.0);return V(j::number(_lhs42365)/j::number(_rhs42366));})();return j::binary("+",_lhs42359,_rhs42360);})();return V(j::number(_lhs42357)*j::number(_rhs42358));})():([&]()->V{V _lhs42369=j::unary("-",([&]()->V{V _number42371=j::unary("-",_v_36918_ka);return V(std::expm1(j::number(_number42371)));})());V _rhs42370=_v_36916_k;return V(j::number(_lhs42369)/j::number(_rhs42370));})());

}

return V{};
},2);
this->_v_36919_pulled.get()=j::function([=](const j::Args &_args_fn36920,const V &_receiver_fn36920,const V &_self_fn36920) mutable ->V{
V _v_36921_k;
V _v_36922_a;
_v_36921_k=_args_fn36920[0];
_v_36922_a=_args_fn36920[1];
{
V _v_36923_ka;
_v_36923_ka=([&]()->V{V _lhs42372=_v_36921_k;V _rhs42373=_v_36922_a;return V(j::number(_lhs42372)*j::number(_rhs42373));})();
return (j::truth(([&]()->V{V _lhs42374=([&]()->V{V _number42376=_v_36923_ka;return V(std::fabs(j::number(_number42376)));})();V _rhs42375=V(0.0001);return j::binary("<",_lhs42374,_rhs42375);})())?([&]()->V{V _lhs42377=([&]()->V{V _lhs42379=_v_36922_a;V _rhs42380=_v_36922_a;return V(j::number(_lhs42379)*j::number(_rhs42380));})();V _rhs42378=([&]()->V{V _lhs42381=([&]()->V{V _lhs42383=V(0.5);V _rhs42384=([&]()->V{V _lhs42385=_v_36923_ka;V _rhs42386=V(6.0);return V(j::number(_lhs42385)/j::number(_rhs42386));})();return V(j::number(_lhs42383)-j::number(_rhs42384));})();V _rhs42382=([&]()->V{V _lhs42387=([&]()->V{V _lhs42389=_v_36923_ka;V _rhs42390=_v_36923_ka;return V(j::number(_lhs42389)*j::number(_rhs42390));})();V _rhs42388=V(24.0);return V(j::number(_lhs42387)/j::number(_rhs42388));})();return j::binary("+",_lhs42381,_rhs42382);})();return V(j::number(_lhs42377)*j::number(_rhs42378));})():([&]()->V{V _lhs42391=([&]()->V{V _lhs42393=_v_36922_a;V _rhs42394=([&]()->V{V _callee42395=this->_v_36914_carried.get();return j::call(_callee42395,j::Args{_v_36921_k,_v_36922_a});})();return V(j::number(_lhs42393)-j::number(_rhs42394));})();V _rhs42392=_v_36921_k;return V(j::number(_lhs42391)/j::number(_rhs42392));})());

}

return V{};
},2);
this->_v_37012_BOUNCES.get()=V(256.0);
this->_v_37013_newLog.get()=j::function([=](const j::Args &_args_fn37014,const V &_receiver_fn37014,const V &_self_fn37014) mutable ->V{
return ([&]()->V{V _obj42396=j::object();j::put(_obj42396,this->_literals[174],j::unary("-",V(1.0)));j::put(_obj42396,this->_literals[122],V(0.0));j::put(_obj42396,this->_literals[128],([&]()->V{V _callee42399=j::builtin("Float64Array");return j::construct(_callee42399,j::Args{([&]()->V{V _lhs42397=this->_v_37012_BOUNCES.get();V _rhs42398=V(1.0);return j::binary("+",_lhs42397,_rhs42398);})()});})());j::put(_obj42396,this->_literals[169],([&]()->V{V _callee42402=j::builtin("Float64Array");return j::construct(_callee42402,j::Args{([&]()->V{V _lhs42400=this->_v_37012_BOUNCES.get();V _rhs42401=V(1.0);return j::binary("+",_lhs42400,_rhs42401);})()});})());j::put(_obj42396,this->_literals[170],([&]()->V{V _callee42405=j::builtin("Float64Array");return j::construct(_callee42405,j::Args{([&]()->V{V _lhs42403=this->_v_37012_BOUNCES.get();V _rhs42404=V(1.0);return j::binary("+",_lhs42403,_rhs42404);})()});})());j::put(_obj42396,this->_literals[172],V(false));j::put(_obj42396,this->_literals[171],V(0.0));j::put(_obj42396,this->_literals[5],V(0.0));j::put(_obj42396,this->_literals[173],V(0.0));return _obj42396;})();
return V{};
},0);
this->_v_37079_MOMENT.get()=([&]()->V{V _lhs42406=V(1.0);V _rhs42407=V(120.0);return V(j::number(_lhs42406)/j::number(_rhs42407));})();
this->_v_37321_twoThemes.get()=j::function([=](const j::Args &_args_fn37322,const V &_receiver_fn37322,const V &_self_fn37322) mutable ->V{
V _v_37323_list;
_v_37323_list=_args_fn37322[0];
return ([&]()->V{V _receiver42417=_v_37323_list;V _method42418=this->_literals[196];V _method=j::get(_receiver42417,_method42418);j::Args _params42419=j::Args{j::function([=](const j::Args &_args_fn37324,const V &_receiver_fn37324,const V &_self_fn37324) mutable ->V{
V _v_37325_a;
V _v_37326_b;
V _pattern42408=_args_fn37324[0];
_v_37325_a=j::get(_pattern42408,V(0));
_v_37326_b=j::get(_pattern42408,V(1));
return ([&]()->V{V _lhs42409=([&]()->V{V _receiver42411=_v_37325_a;V _method42412=this->_literals[191];V _method=j::get(_receiver42411,_method42412);j::Args _params42413=j::Args{};return j::call(_method,_params42413,_receiver42411);})();V _rhs42410=([&]()->V{V _receiver42414=_v_37326_b;V _method42415=this->_literals[191];V _method=j::get(_receiver42414,_method42415);j::Args _params42416=j::Args{};return j::call(_method,_params42416,_receiver42414);})();return V(!j::equal(_lhs42409,_rhs42410,true));})();
return V{};
},1)};return j::call(_method,_params42419,_receiver42417);})();
return V{};
},1);
this->_v_37327_total.get()=j::function([=](const j::Args &_args_fn37328,const V &_receiver_fn37328,const V &_self_fn37328) mutable ->V{
V _v_37329_list;
_v_37329_list=_args_fn37328[0];
return (j::truth(([&]()->V{V _callee42420=this->_v_37321_twoThemes.get();return j::call(_callee42420,j::Args{_v_37329_list});})())?([&]()->V{V _lhs42421=j::get(_v_37329_list,this->_literals[1]);V _rhs42422=V(2.0);return V(j::number(_lhs42421)*j::number(_rhs42422));})():j::get(_v_37329_list,this->_literals[1]));
return V{};
},1);
this->_v_37380_isThemedHex.get()=j::function([=](const j::Args &_args_fn37381,const V &_receiver_fn37381,const V &_self_fn37381) mutable ->V{
V _v_37382_v;
_v_37382_v=_args_fn37381[0];
return ([&]()->V{V _logical42423=([&]()->V{V _callee42424=this->_v_36702_isHex.get();return j::call(_callee42424,j::Args{_v_37382_v});})();return !j::truth(_logical42423)?([&]()->V{V _logical42425=([&]()->V{V _logical42426=([&]()->V{V _logical42427=j::unary("!",j::unary("!",_v_37382_v));return j::truth(_logical42427)?([&]()->V{V _lhs42428=j::unary("typeof",_v_37382_v);V _rhs42429=this->_literals[6];return V(j::equal(_lhs42428,_rhs42429,true));})():_logical42427;})();return j::truth(_logical42426)?([&]()->V{V _callee42430=this->_v_36702_isHex.get();return j::call(_callee42430,j::Args{j::get(_v_37382_v,this->_literals[8])});})():_logical42426;})();return j::truth(_logical42425)?([&]()->V{V _callee42431=this->_v_36702_isHex.get();return j::call(_callee42431,j::Args{j::get(_v_37382_v,this->_literals[9])});})():_logical42425;})():_logical42423;})();
return V{};
},1);
this->_v_37474_PERIOD.get()=V(8.0);
this->_v_37548_scaleOf.get()=j::function([=](const j::Args &_args_fn37549,const V &_receiver_fn37549,const V &_self_fn37549) mutable ->V{
V _v_37550_cols;
V _v_37551_rows;
V _pattern42432=_args_fn37549[0];
_v_37550_cols=j::get(_pattern42432,this->_literals[15]);
_v_37551_rows=j::get(_pattern42432,this->_literals[50]);
return ([&]()->V{V _lhs42433=([&]()->V{V _lhs42435=_v_37550_cols;V _rhs42436=_v_37551_rows;return V(j::number(_lhs42435)*j::number(_rhs42436));})();V _rhs42434=([&]()->V{V _lhs42437=V(64.0);V _rhs42438=V(24.0);return V(j::number(_lhs42437)*j::number(_rhs42438));})();return V(j::number(_lhs42433)/j::number(_rhs42434));})();
return V{};
},1);
this->_v_37666_HEAD.get()=this->_literals[317];
this->_v_37667_BODY.get()=this->_literals[318];
this->_v_37690_presets.get()=([&]()->V{V _obj42439=j::object();j::put(_obj42439,this->_literals[233],this->_v_37567_snow.get());j::put(_obj42439,this->_literals[319],this->_v_37591_rain.get());j::put(_obj42439,this->_literals[320],this->_v_37606_stars.get());j::put(_obj42439,this->_literals[321],this->_v_37617_sparks.get());j::put(_obj42439,this->_literals[322],this->_v_37634_fireworks.get());j::put(_obj42439,this->_literals[323],this->_v_37647_fireflies.get());j::put(_obj42439,this->_literals[324],this->_v_37656_bubbles.get());j::put(_obj42439,this->_literals[325],this->_v_37668_matrix.get());return _obj42439;})();
}
};
}
std::unique_ptr<Module> new_kit_particles(){return std::make_unique<Generated_kit_particles>();}
}
