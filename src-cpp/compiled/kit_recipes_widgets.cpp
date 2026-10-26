// Native source generated from src/kit/recipes/widgets.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_recipes_widgets final:j::Module {
j::Cell _v_66356_banner;
j::Cell _v_66357_INK;
j::Cell _v_66358_Palette;
j::Cell _v_66359_Surface;
j::Cell _v_66360_TAU;
j::Cell _v_66361_fail;
j::Cell _v_66362_piece;
j::Cell _v_66363_arc;
j::Cell _v_66364_braille;
j::Cell _v_66365_circle;
j::Cell _v_66366_label;
j::Cell _v_66367_line;
j::Cell _v_66368_ray;
j::Cell _v_66369_rect;
j::Cell _v_66370_text;
j::Cell _v_66371_border;
j::Cell _v_66372_layer;
j::Cell _v_66373_sequence;
j::Cell _v_66374_typeIn;
j::Cell _v_66375_ease;
j::Cell _v_66376_loopNoise;
j::Cell _v_66377_NAMING;
j::Cell _v_66378_boolOf;
j::Cell _v_66379_colorOf;
j::Cell _v_66380_loopOf;
j::Cell _v_66381_numberOf;
j::Cell _v_66382_optionsOf;
j::Cell _v_66383_secondsOf;
j::Cell _v_66384_show;
j::Cell _v_66385_speedOf;
j::Cell _v_66386_textOf;
j::Cell _v_66387_titled;
j::Cell _v_66388_wholeOf;
j::Cell _v_66389_wordOf;
j::Cell _v_66390_drifting;
j::Cell _v_66391_palette;
j::Cell _v_66392_pieceOf;
j::Cell _v_66393_ANCHORS;
j::Cell _v_66394_roomOf;
j::Cell _v_66401_anchorOf;
j::Cell _v_66406_at;
j::Cell _v_66416_textAt;
j::Cell _v_66427_ring;
j::Cell _v_66444_inset;
j::Cell _v_66451_share;
j::Cell _v_66471_across;
j::Cell _v_66481_down;
j::Cell _v_66491_tiles;
j::Cell _v_66502_slot;
j::Cell _v_66515_TONES;
j::Cell _v_66516_ACCENT;
j::Cell _v_66517_MUTED;
j::Cell _v_66518_GOOD;
j::Cell _v_66519_WARN;
j::Cell _v_66520_BAD;
j::Cell _v_66521_themed;
j::Cell _v_66522_tones;
j::Cell _v_66531_inked;
j::Cell _v_66544_WIDGET;
j::Cell _v_66545_naming;
j::Cell _v_66550_framing;
j::Cell _v_66554_amountOf;
j::Cell _v_66565_clockFace;
j::Cell _v_66595_EIGHTHS;
j::Cell _v_66596_progressBar;
j::Cell _v_66631_spinners;
j::Cell _v_66632_spinner;
j::Cell _v_66646_gauge;
j::Cell _v_66669_sparkline;
j::Cell _v_66711_BARS;
j::Cell _v_66712_RISE;
j::Cell _v_66713_barChart;
j::Cell _v_66785_panel;
j::Cell _v_66800_card;
j::Cell _v_66822_typewriter;
j::Cell _v_66838_marquee;
j::Cell _v_66852_countdown;
std::vector<V> _literals;
Generated_kit_recipes_widgets():_v_66356_banner(this->slot("banner")),_v_66357_INK(this->slot("INK")),_v_66358_Palette(this->slot("Palette")),_v_66359_Surface(this->slot("Surface")),_v_66360_TAU(this->slot("TAU")),_v_66361_fail(this->slot("fail")),_v_66362_piece(this->slot("piece")),_v_66363_arc(this->slot("arc")),_v_66364_braille(this->slot("braille")),_v_66365_circle(this->slot("circle")),_v_66366_label(this->slot("label")),_v_66367_line(this->slot("line")),_v_66368_ray(this->slot("ray")),_v_66369_rect(this->slot("rect")),_v_66370_text(this->slot("text")),_v_66371_border(this->slot("border")),_v_66372_layer(this->slot("layer")),_v_66373_sequence(this->slot("sequence")),_v_66374_typeIn(this->slot("typeIn")),_v_66375_ease(this->slot("ease")),_v_66376_loopNoise(this->slot("loopNoise")),_v_66377_NAMING(this->slot("NAMING")),_v_66378_boolOf(this->slot("boolOf")),_v_66379_colorOf(this->slot("colorOf")),_v_66380_loopOf(this->slot("loopOf")),_v_66381_numberOf(this->slot("numberOf")),_v_66382_optionsOf(this->slot("optionsOf")),_v_66383_secondsOf(this->slot("secondsOf")),_v_66384_show(this->slot("show")),_v_66385_speedOf(this->slot("speedOf")),_v_66386_textOf(this->slot("textOf")),_v_66387_titled(this->slot("titled")),_v_66388_wholeOf(this->slot("wholeOf")),_v_66389_wordOf(this->slot("wordOf")),_v_66390_drifting(this->slot("drifting")),_v_66391_palette(this->slot("palette")),_v_66392_pieceOf(this->slot("pieceOf")),_v_66393_ANCHORS(this->slot("ANCHORS")),_v_66394_roomOf(this->slot("roomOf")),_v_66401_anchorOf(this->slot("anchorOf")),_v_66406_at(this->slot("at")),_v_66416_textAt(this->slot("textAt")),_v_66427_ring(this->slot("ring")),_v_66444_inset(this->slot("inset")),_v_66451_share(this->slot("share")),_v_66471_across(this->slot("across")),_v_66481_down(this->slot("down")),_v_66491_tiles(this->slot("tiles")),_v_66502_slot(this->slot("slot")),_v_66515_TONES(this->slot("TONES")),_v_66516_ACCENT(this->slot("ACCENT")),_v_66517_MUTED(this->slot("MUTED")),_v_66518_GOOD(this->slot("GOOD")),_v_66519_WARN(this->slot("WARN")),_v_66520_BAD(this->slot("BAD")),_v_66521_themed(this->slot("themed")),_v_66522_tones(this->slot("tones")),_v_66531_inked(this->slot("inked")),_v_66544_WIDGET(this->slot("WIDGET")),_v_66545_naming(this->slot("naming")),_v_66550_framing(this->slot("framing")),_v_66554_amountOf(this->slot("amountOf")),_v_66565_clockFace(this->slot("clockFace")),_v_66595_EIGHTHS(this->slot("EIGHTHS")),_v_66596_progressBar(this->slot("progressBar")),_v_66631_spinners(this->slot("spinners")),_v_66632_spinner(this->slot("spinner")),_v_66646_gauge(this->slot("gauge")),_v_66669_sparkline(this->slot("sparkline")),_v_66711_BARS(this->slot("BARS")),_v_66712_RISE(this->slot("RISE")),_v_66713_barChart(this->slot("barChart")),_v_66785_panel(this->slot("panel")),_v_66800_card(this->slot("card")),_v_66822_typewriter(this->slot("typewriter")),_v_66838_marquee(this->slot("marquee")),_v_66852_countdown(this->slot("countdown")),_literals{V(u"object"),
V(u"cols"),
V(u"number"),
V(u"rows"),
V(u"x"),
V(u"y"),
V(u"center"),
V(u"at()"),
V(u"at()'s anchor"),
V(u"at()'s margin"),
V(u"margin"),
V(u"left"),
V(u"endsWith"),
V(u"right"),
V(u"top"),
V(u"startsWith"),
V(u"bottom"),
V(u"textAt()"),
V(u"color"),
V(u"within"),
V(u"textAt()'s anchor"),
V(u"textAt()'s margin"),
V(u"middle"),
V(u"align"),
V(u"valign"),
V(u"ring()"),
V(u"radius"),
V(u"at"),
V(u"ring()'s count"),
V(u"aspect"),
V(u"isArray"),
V(u"ring()'s at"),
V(u"min"),
V(u"max"),
V(u"ring()'s radius"),
V(u"length"),
V(u"from"),
V(u"inset()"),
V(u"inset()'s margin"),
V(u"fill"),
V(u"reduce"),
V(u"map"),
V(u"across()"),
V(u"across()'s gap"),
V(u"gap"),
V(u"down()"),
V(u"down()'s gap"),
V(u"tiles()"),
V(u"columns"),
V(u"tiles()'s columns"),
V(u"tiles()'s rows"),
V(u"flatMap"),
V(u"slot()"),
V(u"slot()'s anchor"),
V(u"slot()'s cols"),
V(u"slot()'s rows"),
V(u"slot()'s margin"),
V(u"ink"),
V(u"accent"),
V(u"muted"),
V(u"good"),
V(u"warn"),
V(u"bad"),
V(u"light"),
V(u"dark"),
V(u"\n"),
V(u"replace"),
V(u"split"),
V(u"width"),
V(u""),
V(u" or more width"),
V(u"palette"),
V(u"function"),
V(u"isFinite"),
V(u"string"),
V(u"exec"),
V(u"toFixed"),
V(u"clockFace()"),
V(u"time"),
V(u"real"),
V(u"size"),
V(u"numbers"),
V(u"frame"),
V(u"title"),
V(u"clockFace's size"),
V(u"small"),
V(u"medium"),
V(u"large"),
V(u"clockFace's numbers"),
V(u"all"),
V(u"quarters"),
V(u"none"),
V(u"clockFace's real"),
V(u"clockFace's frame"),
V(u"clockFace's title"),
V(u"10:10"),
V(u"clockFace's color"),
V(u"clock"),
V(u"a clock face showing the time"),
V(u"category"),
V(u"objects"),
V(u"fps"),
V(u"loop"),
V(u"style"),
V(u"rounded"),
V(u"char"),
V(u"auto"),
V(u"getSeconds"),
V(u"getMinutes"),
V(u"getHours"),
V(u"o"),
V(u"set"),
V(u"forEach"),
V(u"progressBar()"),
V(u"value"),
V(u"label"),
V(u"percent"),
V(u"seconds"),
V(u"progressBar's min"),
V(u"progressBar's max"),
V(u"progressBar"),
V(u"progressBar's label"),
V(u"progressBar's width"),
V(u"progressBar's style"),
V(u"blocks"),
V(u"ascii"),
V(u"dots"),
V(u"progressBar's percent"),
V(u"progressBar's seconds"),
V(u"inOutSine"),
V(u"still"),
V(u"a progress bar, live"),
V(u"a progress bar filling"),
V(u"trim"),
V(u"progress"),
V(u"ui"),
V(u"progressBar's color"),
V(u"write"),
V(u"["),
V(u"#"),
V(u"-"),
V(u"]"),
V(u"●"),
V(u"○"),
V(u"█"),
V(u"░"),
V(u"padStart"),
V(u"spinner()"),
V(u"keys"),
V(u"speed"),
V(u"period"),
V(u"spinner's label"),
V(u"spinner's color"),
V(u"gauge()"),
V(u"unit"),
V(u"gauge's min"),
V(u"gauge's max"),
V(u"gauge"),
V(u"gauge's label"),
V(u"%"),
V(u"gauge's unit"),
V(u"gauge's frame"),
V(u"gauge's color"),
V(u"a gauge, live"),
V(u"a gauge, its reading rising and falling"),
V(u"data"),
V(u"sparkline() takes numbers then options, or options alone for a live reading, not two lots of options"),
V(u"sparkline()"),
V(u"height"),
V(u"every"),
V(u"sparkline's label"),
V(u"sparkline's width"),
V(u"sparkline's height"),
V(u"sparkline's fill"),
V(u"100000"),
V(u"100"),
V(u"a sparkline of live data"),
V(u"a sparkline drawing itself in"),
V(u"a sparkline of a wandering reading"),
V(u"sparkline"),
V(u"sparkline's color"),
V(u"y0"),
V(u"y1"),
V(u"plot"),
V(u"draw"),
V(u"x0"),
V(u"x1"),
V(u"clear"),
V(u"barChart()"),
V(u"horizontal"),
V(u"values"),
V(u"hold"),
V(u"entries"),
V(u"barChart's names"),
V(u"barChart's horizontal"),
V(u"barChart's size"),
V(u"barChart's max"),
V(u"barChart's values"),
V(u"barChart's seconds"),
V(u"barChart's hold"),
V(u"barChart's color"),
V(u"outBack"),
V(u"bar chart"),
V(u", growing in"),
V(u"panel()"),
V(u"panel's title"),
V(u"panel's style"),
V(u"single"),
V(u"double"),
V(u"heavy"),
V(u"panel's cols"),
V(u"meta"),
V(u"panel's rows"),
V(u"name"),
V(u"src"),
V(u"anchor"),
V(u"panel's color"),
V(u"pad"),
V(u"panel"),
V(u"note"),
V(u"card()"),
V(u"text"),
V(u"footer"),
V(u"card's title"),
V(u"card's text"),
V(u"lines"),
V(u"card's footer"),
V(u"card() takes a title, text or a footer, such as { title: \"hello\", text: \"...\" }"),
V(u"card's style"),
V(u"card's frame"),
V(u"card's width"),
V(u"card"),
V(u"a card"),
V(u"card's color"),
V(u"wrap"),
V(u"typewriter()"),
V(u"cursor"),
V(u"typewriter's width"),
V(u"typewriter's cursor"),
V(u"forever"),
V(u"typewriter's hold"),
V(u"typewriter's color"),
V(u"slice"),
V(u"▌"),
V(u" "),
V(u"marquee()"),
V(u"to"),
V(u"big"),
V(u"marquee's width"),
V(u"marquee's to"),
V(u"marquee's color"),
V(u"marquee's big"),
V(u"effect"),
V(u"countdown()"),
V(u"then"),
V(u"font"),
V(u"transition"),
V(u"countdown's from"),
V(u"countdown's to"),
V(u"go!"),
V(u"countdown's then"),
V(u"countdown's seconds"),
V(u"countdown's transition"),
V(u"cut"),
V(u"fade"),
V(u"dissolve"),
V(u"wipe"),
V(u"overlap"),
V(u"countdown"),
V(u"top-left"),
V(u"top-right"),
V(u"bottom-left"),
V(u"bottom-right"),
V(u"#0969da"),
V(u"#58a6ff"),
V(u"#8c959f"),
V(u"#6e7681"),
V(u"#1a7f37"),
V(u"#3fb950"),
V(u"#9a6700"),
V(u"#d29922"),
V(u"#cf222e"),
V(u"#f85149"),
V(u"frames"),
V(u"assign"),
V(u"▏▎▍▌▋▊▉█"),
V(u"⠋⠙⠹⠸⠼⠴⠦⠧⠇⠏"),
V(u"line"),
V(u"-\\|/"),
V(u"arc"),
V(u"◜◠◝◞◡◟"),
V(u"circle"),
V(u"◐◓◑◒"),
V(u"bounce"),
V(u"⠁⠂⠄⡀⢀⠠⠐⠈"),
V(u"▖▘▝▗"),
V(u"grow"),
V(u"▁▂▃▄▅▆▇█▇▆▅▄▃▂"),
V(u"arrows"),
V(u"←↖↑↗→↘↓↙"),
V(u"pulse"),
V(u"·•●•"),
V(u"#8250df"),
V(u"#bc8cff"),
V(u"#bf3989"),
V(u"#ff80c8"),
V(u"▁▂▃▄▅▆▇█")}{
this->exports["at"]=this->_v_66406_at;
this->exports["textAt"]=this->_v_66416_textAt;
this->exports["ring"]=this->_v_66427_ring;
this->exports["inset"]=this->_v_66444_inset;
this->exports["across"]=this->_v_66471_across;
this->exports["down"]=this->_v_66481_down;
this->exports["tiles"]=this->_v_66491_tiles;
this->exports["slot"]=this->_v_66502_slot;
this->exports["clockFace"]=this->_v_66565_clockFace;
this->exports["progressBar"]=this->_v_66596_progressBar;
this->exports["spinners"]=this->_v_66631_spinners;
this->exports["spinner"]=this->_v_66632_spinner;
this->exports["gauge"]=this->_v_66646_gauge;
this->exports["sparkline"]=this->_v_66669_sparkline;
this->exports["barChart"]=this->_v_66713_barChart;
this->exports["panel"]=this->_v_66785_panel;
this->exports["card"]=this->_v_66800_card;
this->exports["typewriter"]=this->_v_66822_typewriter;
this->exports["marquee"]=this->_v_66838_marquee;
this->exports["countdown"]=this->_v_66852_countdown;
}
void init() override{if(initialized)return;initialized=true;
this->_v_66394_roomOf.get()=j::function([=](const j::Args &_args_fn66395,const V &_receiver_fn66395,const V &_self_fn66395) mutable ->V{
V _v_66396_r;
V _v_66397_what;
_v_66396_r=_args_fn66395[0];
_v_66397_what=_args_fn66395[1];
{
V _v_66398_g;
V _v_66399_x;
V _v_66400_y;
_v_66398_g=_v_66396_r;
if(j::truth(([&]()->V{V _logical66869=([&]()->V{V _logical66870=([&]()->V{V _logical66871=j::unary("!",_v_66396_r);return !j::truth(_logical66871)?([&]()->V{V _lhs66872=j::unary("typeof",_v_66396_r);V _rhs66873=this->_literals[0];return V(!j::equal(_lhs66872,_rhs66873,true));})():_logical66871;})();return !j::truth(_logical66870)?([&]()->V{V _lhs66874=j::unary("typeof",j::get(_v_66398_g,this->_literals[1]));V _rhs66875=this->_literals[2];return V(!j::equal(_lhs66874,_rhs66875,true));})():_logical66870;})();return !j::truth(_logical66869)?([&]()->V{V _lhs66876=j::unary("typeof",j::get(_v_66398_g,this->_literals[3]));V _rhs66877=this->_literals[2];return V(!j::equal(_lhs66876,_rhs66877,true));})():_logical66869;})())){(void)(([&]()->V{V _callee66880=this->_v_66361_fail.get();return j::call(_callee66880,j::Args{([&]()->V{std::u16string _text66878;_text66878+=u"";_text66878+=j::string(_v_66397_what);_text66878+=u" takes the grid, or a region { x, y, cols, rows }, to place in, not ";_text66878+=j::string(([&]()->V{V _callee66879=this->_v_66384_show.get();return j::call(_callee66879,j::Args{_v_66396_r});})());_text66878+=u"";return V(std::move(_text66878));})()});})());
}
_v_66399_x=(j::truth(([&]()->V{V _lhs66881=_v_66396_r;V _rhs66882=this->_v_66359_Surface.get();return j::binary("instanceof",_lhs66881,_rhs66882);})())?V(0.0):([&]()->V{V _logical66883=j::get(_v_66398_g,this->_literals[4]);return j::nullish(_logical66883)?V(0.0):_logical66883;})());
_v_66400_y=(j::truth(([&]()->V{V _lhs66884=_v_66396_r;V _rhs66885=this->_v_66359_Surface.get();return j::binary("instanceof",_lhs66884,_rhs66885);})())?V(0.0):([&]()->V{V _logical66886=j::get(_v_66398_g,this->_literals[5]);return j::nullish(_logical66886)?V(0.0):_logical66886;})());
return ([&]()->V{V _obj66887=j::object();j::put(_obj66887,this->_literals[4],_v_66399_x);j::put(_obj66887,this->_literals[5],_v_66400_y);j::put(_obj66887,this->_literals[1],j::get(_v_66398_g,this->_literals[1]));j::put(_obj66887,this->_literals[3],j::get(_v_66398_g,this->_literals[3]));return _obj66887;})();

}

return V{};
},2);
this->_v_66406_at.get()=j::function([=](const j::Args &_args_fn66407,const V &_receiver_fn66407,const V &_self_fn66407) mutable ->V{
V _v_66408_room;
V _v_66409_anchor;
V _v_66410_o;
_v_66408_room=_args_fn66407[0];
V _default66888=_args_fn66407[1];if(_default66888.kind==V::Undefined||_default66888.kind==V::Hole)_default66888=this->_literals[6];
_v_66409_anchor=_default66888;
_v_66410_o=_args_fn66407[2];
{
V _v_66411_r;
V _v_66412_a;
V _v_66413_m;
V _v_66414_x;
V _v_66415_y;
_v_66411_r=([&]()->V{V _callee66889=this->_v_66394_roomOf.get();return j::call(_callee66889,j::Args{_v_66408_room,this->_literals[7]});})();
_v_66412_a=([&]()->V{V _callee66890=this->_v_66401_anchorOf.get();return j::call(_callee66890,j::Args{this->_literals[8],_v_66409_anchor,this->_literals[6]});})();
_v_66413_m=([&]()->V{V _callee66893=this->_v_66381_numberOf.get();return j::call(_callee66893,j::Args{this->_literals[9],j::get(([&]()->V{V _callee66892=this->_v_66382_optionsOf.get();return j::call(_callee66892,j::Args{this->_literals[7],_v_66410_o,([&]()->V{j::Args _array66891;_array66891.push_back(this->_literals[10]);return j::array(std::move(_array66891));})()});})(),this->_literals[10]),V(0.0),V(0.0)});})();
_v_66414_x=(j::truth(([&]()->V{V _receiver66894=_v_66412_a;V _method66895=this->_literals[12];V _method=j::get(_receiver66894,_method66895);j::Args _params66896=j::Args{this->_literals[11]};return j::call(_method,_params66896,_receiver66894);})())?([&]()->V{V _lhs66897=([&]()->V{V _lhs66899=j::get(_v_66411_r,this->_literals[4]);V _rhs66900=_v_66413_m;return j::binary("+",_lhs66899,_rhs66900);})();V _rhs66898=V(0.5);return j::binary("+",_lhs66897,_rhs66898);})():(j::truth(([&]()->V{V _receiver66901=_v_66412_a;V _method66902=this->_literals[12];V _method=j::get(_receiver66901,_method66902);j::Args _params66903=j::Args{this->_literals[13]};return j::call(_method,_params66903,_receiver66901);})())?([&]()->V{V _lhs66904=([&]()->V{V _lhs66906=([&]()->V{V _lhs66908=j::get(_v_66411_r,this->_literals[4]);V _rhs66909=j::get(_v_66411_r,this->_literals[1]);return j::binary("+",_lhs66908,_rhs66909);})();V _rhs66907=_v_66413_m;return V(j::number(_lhs66906)-j::number(_rhs66907));})();V _rhs66905=V(0.5);return V(j::number(_lhs66904)-j::number(_rhs66905));})():([&]()->V{V _lhs66910=j::get(_v_66411_r,this->_literals[4]);V _rhs66911=([&]()->V{V _lhs66912=j::get(_v_66411_r,this->_literals[1]);V _rhs66913=V(2.0);return V(j::number(_lhs66912)/j::number(_rhs66913));})();return j::binary("+",_lhs66910,_rhs66911);})()));
_v_66415_y=(j::truth(([&]()->V{V _receiver66914=_v_66412_a;V _method66915=this->_literals[15];V _method=j::get(_receiver66914,_method66915);j::Args _params66916=j::Args{this->_literals[14]};return j::call(_method,_params66916,_receiver66914);})())?([&]()->V{V _lhs66917=([&]()->V{V _lhs66919=j::get(_v_66411_r,this->_literals[5]);V _rhs66920=_v_66413_m;return j::binary("+",_lhs66919,_rhs66920);})();V _rhs66918=V(0.5);return j::binary("+",_lhs66917,_rhs66918);})():(j::truth(([&]()->V{V _receiver66921=_v_66412_a;V _method66922=this->_literals[15];V _method=j::get(_receiver66921,_method66922);j::Args _params66923=j::Args{this->_literals[16]};return j::call(_method,_params66923,_receiver66921);})())?([&]()->V{V _lhs66924=([&]()->V{V _lhs66926=([&]()->V{V _lhs66928=j::get(_v_66411_r,this->_literals[5]);V _rhs66929=j::get(_v_66411_r,this->_literals[3]);return j::binary("+",_lhs66928,_rhs66929);})();V _rhs66927=_v_66413_m;return V(j::number(_lhs66926)-j::number(_rhs66927));})();V _rhs66925=V(0.5);return V(j::number(_lhs66924)-j::number(_rhs66925));})():([&]()->V{V _lhs66930=j::get(_v_66411_r,this->_literals[5]);V _rhs66931=([&]()->V{V _lhs66932=j::get(_v_66411_r,this->_literals[3]);V _rhs66933=V(2.0);return V(j::number(_lhs66932)/j::number(_rhs66933));})();return j::binary("+",_lhs66930,_rhs66931);})()));
return ([&]()->V{j::Args _array66934;_array66934.push_back(_v_66414_x);_array66934.push_back(_v_66415_y);return j::array(std::move(_array66934));})();

}

return V{};
},1);
this->_v_66416_textAt.get()=j::function([=](const j::Args &_args_fn66417,const V &_receiver_fn66417,const V &_self_fn66417) mutable ->V{
V _v_66418_s;
V _v_66419_str;
V _v_66420_anchor;
V _v_66421_o;
_v_66418_s=_args_fn66417[0];
_v_66419_str=_args_fn66417[1];
V _default66935=_args_fn66417[2];if(_default66935.kind==V::Undefined||_default66935.kind==V::Hole)_default66935=this->_literals[6];
_v_66420_anchor=_default66935;
_v_66421_o=_args_fn66417[3];
{
V _v_66422_p;
V _v_66423_a;
V _v_66424_box;
V _v_66425_align;
V _v_66426_valign;
_v_66422_p=([&]()->V{V _callee66937=this->_v_66382_optionsOf.get();return j::call(_callee66937,j::Args{this->_literals[17],_v_66421_o,([&]()->V{j::Args _array66936;_array66936.push_back(this->_literals[10]);_array66936.push_back(this->_literals[18]);_array66936.push_back(this->_literals[19]);return j::array(std::move(_array66936));})()});})();
_v_66423_a=([&]()->V{V _callee66938=this->_v_66401_anchorOf.get();return j::call(_callee66938,j::Args{this->_literals[20],_v_66420_anchor,this->_literals[6]});})();
_v_66424_box=([&]()->V{V _callee66941=this->_v_66444_inset.get();return j::call(_callee66941,j::Args{([&]()->V{V _logical66939=j::get(_v_66422_p,this->_literals[19]);return j::nullish(_logical66939)?_v_66418_s:_logical66939;})(),([&]()->V{V _callee66940=this->_v_66381_numberOf.get();return j::call(_callee66940,j::Args{this->_literals[21],j::get(_v_66422_p,this->_literals[10]),V(0.0),V(0.0)});})()});})();
_v_66425_align=(j::truth(([&]()->V{V _receiver66942=_v_66423_a;V _method66943=this->_literals[12];V _method=j::get(_receiver66942,_method66943);j::Args _params66944=j::Args{this->_literals[11]};return j::call(_method,_params66944,_receiver66942);})())?this->_literals[11]:(j::truth(([&]()->V{V _receiver66945=_v_66423_a;V _method66946=this->_literals[12];V _method=j::get(_receiver66945,_method66946);j::Args _params66947=j::Args{this->_literals[13]};return j::call(_method,_params66947,_receiver66945);})())?this->_literals[13]:this->_literals[6]));
_v_66426_valign=(j::truth(([&]()->V{V _receiver66948=_v_66423_a;V _method66949=this->_literals[15];V _method=j::get(_receiver66948,_method66949);j::Args _params66950=j::Args{this->_literals[14]};return j::call(_method,_params66950,_receiver66948);})())?this->_literals[14]:(j::truth(([&]()->V{V _receiver66951=_v_66423_a;V _method66952=this->_literals[15];V _method=j::get(_receiver66951,_method66952);j::Args _params66953=j::Args{this->_literals[16]};return j::call(_method,_params66953,_receiver66951);})())?this->_literals[16]:this->_literals[22]));
return ([&]()->V{V _callee66955=this->_v_66370_text.get();return j::call(_callee66955,j::Args{_v_66418_s,_v_66424_box,_v_66419_str,([&]()->V{V _obj66954=j::object();j::put(_obj66954,this->_literals[23],_v_66425_align);j::put(_obj66954,this->_literals[24],_v_66426_valign);j::put(_obj66954,this->_literals[18],j::get(_v_66422_p,this->_literals[18]));return _obj66954;})()});})();

}

return V{};
},2);
this->_v_66427_ring.get()=j::function([=](const j::Args &_args_fn66428,const V &_receiver_fn66428,const V &_self_fn66428) mutable ->V{
V _v_66429_room;
V _v_66430_count;
V _v_66431_o;
_v_66429_room=_args_fn66428[0];
_v_66430_count=_args_fn66428[1];
_v_66431_o=_args_fn66428[2];
{
V _v_66432_r;
V _v_66433_p;
j::Cell _v_66434_n;
j::Cell _v_66435_aspect;
j::Cell _v_66436_cx;
j::Cell _v_66437_cy;
V _v_66438_fits;
V _v_66439_radius;
j::Cell _v_66440_k;
_v_66432_r=([&]()->V{V _callee66956=this->_v_66394_roomOf.get();return j::call(_callee66956,j::Args{_v_66429_room,this->_literals[25]});})();
_v_66433_p=([&]()->V{V _callee66958=this->_v_66382_optionsOf.get();return j::call(_callee66958,j::Args{this->_literals[25],_v_66431_o,([&]()->V{j::Args _array66957;_array66957.push_back(this->_literals[26]);_array66957.push_back(this->_literals[27]);return j::array(std::move(_array66957));})()});})();
_v_66434_n.get()=([&]()->V{V _callee66959=this->_v_66388_wholeOf.get();return j::call(_callee66959,j::Args{this->_literals[28],_v_66430_count,V(12.0),V(1.0),V(10000.0)});})();
_v_66435_aspect.get()=(j::truth(([&]()->V{V _lhs66960=_v_66429_room;V _rhs66961=this->_v_66359_Surface.get();return j::binary("instanceof",_lhs66960,_rhs66961);})())?j::get(_v_66429_room,this->_literals[29]):V(2.0));
V _pattern66967=(j::truth(([&]()->V{V _receiver66962=j::builtin("Array");V _method66963=this->_literals[30];V _method=j::get(_receiver66962,_method66963);j::Args _params66964=j::Args{j::get(_v_66433_p,this->_literals[27])};return j::call(_method,_params66964,_receiver66962);})())?j::get(_v_66433_p,this->_literals[27]):([&]()->V{V _callee66966=this->_v_66406_at.get();return j::call(_callee66966,j::Args{_v_66432_r,([&]()->V{V _callee66965=this->_v_66401_anchorOf.get();return j::call(_callee66965,j::Args{this->_literals[31],j::get(_v_66433_p,this->_literals[27]),this->_literals[6]});})()});})());
_v_66436_cx.get()=j::get(_pattern66967,V(0));
_v_66437_cy.get()=j::get(_pattern66967,V(1));
_v_66438_fits=([&]()->V{V _receiver66985=j::builtin("Math");V _method66986=this->_literals[33];V _method=j::get(_receiver66985,_method66986);j::Args _params66987=j::Args{V(0.5),([&]()->V{V _receiver66980=j::builtin("Math");V _method66981=this->_literals[32];V _method=j::get(_receiver66980,_method66981);j::Args _params66982=j::Args{([&]()->V{V _lhs66968=([&]()->V{V _lhs66970=j::get(_v_66432_r,this->_literals[1]);V _rhs66971=V(2.0);return V(j::number(_lhs66970)/j::number(_rhs66971));})();V _rhs66969=V(1.0);return V(j::number(_lhs66968)-j::number(_rhs66969));})(),([&]()->V{V _lhs66972=([&]()->V{V _lhs66974=([&]()->V{V _lhs66976=j::get(_v_66432_r,this->_literals[3]);V _rhs66977=V(2.0);return V(j::number(_lhs66976)/j::number(_rhs66977));})();V _rhs66975=V(1.0);return V(j::number(_lhs66974)-j::number(_rhs66975));})();V _rhs66973=_v_66435_aspect.get();return V(j::number(_lhs66972)*j::number(_rhs66973));})()};return j::call(_method,_params66982,_receiver66980);})()};return j::call(_method,_params66987,_receiver66985);})();
_v_66439_radius=([&]()->V{V _callee66988=this->_v_66381_numberOf.get();return j::call(_callee66988,j::Args{this->_literals[34],j::get(_v_66433_p,this->_literals[26]),_v_66438_fits,V(0.0)});})();
_v_66440_k.get()=([&]()->V{V _lhs66989=_v_66439_radius;V _rhs66990=([&]()->V{V _lhs66991=V(1.0);V _rhs66992=V(1e-9);return V(j::number(_lhs66991)-j::number(_rhs66992));})();return V(j::number(_lhs66989)*j::number(_rhs66990));})();
return ([&]()->V{V _receiver67023=j::builtin("Array");V _method67024=this->_literals[36];V _method=j::get(_receiver67023,_method67024);j::Args _params67025=j::Args{([&]()->V{V _obj66993=j::object();j::put(_obj66993,this->_literals[35],_v_66434_n.get());return _obj66993;})(),j::function([=](const j::Args &_args_fn66441,const V &_receiver_fn66441,const V &_self_fn66441) mutable ->V{
V _v_66442__;
V _v_66443_i;
_v_66442__=_args_fn66441[0];
_v_66443_i=_args_fn66441[1];
return ([&]()->V{j::Args _array66994;_array66994.push_back(([&]()->V{V _lhs66995=_v_66436_cx.get();V _rhs66996=([&]()->V{V _lhs66997=([&]()->V{V _number67003=([&]()->V{V _lhs67004=([&]()->V{V _lhs67006=this->_v_66360_TAU.get();V _rhs67007=_v_66443_i;return V(j::number(_lhs67006)*j::number(_rhs67007));})();V _rhs67005=_v_66434_n.get();return V(j::number(_lhs67004)/j::number(_rhs67005));})();return V(std::sin(j::number(_number67003)));})();V _rhs66998=_v_66440_k.get();return V(j::number(_lhs66997)*j::number(_rhs66998));})();return j::binary("+",_lhs66995,_rhs66996);})());_array66994.push_back(([&]()->V{V _lhs67008=_v_66437_cy.get();V _rhs67009=([&]()->V{V _lhs67010=([&]()->V{V _lhs67012=([&]()->V{V _number67018=([&]()->V{V _lhs67019=([&]()->V{V _lhs67021=this->_v_66360_TAU.get();V _rhs67022=_v_66443_i;return V(j::number(_lhs67021)*j::number(_rhs67022));})();V _rhs67020=_v_66434_n.get();return V(j::number(_lhs67019)/j::number(_rhs67020));})();return V(std::cos(j::number(_number67018)));})();V _rhs67013=_v_66440_k.get();return V(j::number(_lhs67012)*j::number(_rhs67013));})();V _rhs67011=_v_66435_aspect.get();return V(j::number(_lhs67010)/j::number(_rhs67011));})();return V(j::number(_lhs67008)-j::number(_rhs67009));})());return j::array(std::move(_array66994));})();
return V{};
},2)};return j::call(_method,_params67025,_receiver67023);})();

}

return V{};
},3);
this->_v_66444_inset.get()=j::function([=](const j::Args &_args_fn66445,const V &_receiver_fn66445,const V &_self_fn66445) mutable ->V{
V _v_66446_room;
V _v_66447_margin;
_v_66446_room=_args_fn66445[0];
_v_66447_margin=_args_fn66445[1];
{
V _v_66448_r;
V _v_66449_my;
V _v_66450_mx;
_v_66448_r=([&]()->V{V _callee67026=this->_v_66394_roomOf.get();return j::call(_callee67026,j::Args{_v_66446_room,this->_literals[37]});})();
V _pattern67039=(j::truth(([&]()->V{V _lhs67027=j::unary("typeof",_v_66447_margin);V _rhs67028=this->_literals[2];return V(j::equal(_lhs67027,_rhs67028,true));})())?([&]()->V{j::Args _array67029;_array67029.push_back(_v_66447_margin);_array67029.push_back(_v_66447_margin);return j::array(std::move(_array67029));})():(j::truth(([&]()->V{V _logical67030=([&]()->V{V _receiver67031=j::builtin("Array");V _method67032=this->_literals[30];V _method=j::get(_receiver67031,_method67032);j::Args _params67033=j::Args{_v_66447_margin};return j::call(_method,_params67033,_receiver67031);})();return j::truth(_logical67030)?([&]()->V{V _lhs67034=j::get(_v_66447_margin,this->_literals[35]);V _rhs67035=V(2.0);return V(j::equal(_lhs67034,_rhs67035,true));})():_logical67030;})())?_v_66447_margin:([&]()->V{V _callee67038=this->_v_66361_fail.get();return j::call(_callee67038,j::Args{([&]()->V{std::u16string _text67036;_text67036+=u"inset() takes a margin in cells, or [rows, columns], not ";_text67036+=j::string(([&]()->V{V _callee67037=this->_v_66384_show.get();return j::call(_callee67037,j::Args{_v_66447_margin});})());_text67036+=u"";return V(std::move(_text67036));})()});})()));
_v_66449_my=j::get(_pattern67039,V(0));
_v_66450_mx=j::get(_pattern67039,V(1));
(void)(([&]()->V{V _callee67040=this->_v_66381_numberOf.get();return j::call(_callee67040,j::Args{this->_literals[38],_v_66449_my,V(0.0),V(0.0)});})());
(void)(([&]()->V{V _callee67041=this->_v_66381_numberOf.get();return j::call(_callee67041,j::Args{this->_literals[38],_v_66450_mx,V(0.0),V(0.0)});})());
return ([&]()->V{V _obj67042=j::object();j::put(_obj67042,this->_literals[4],([&]()->V{V _lhs67043=j::get(_v_66448_r,this->_literals[4]);V _rhs67044=_v_66450_mx;return j::binary("+",_lhs67043,_rhs67044);})());j::put(_obj67042,this->_literals[5],([&]()->V{V _lhs67045=j::get(_v_66448_r,this->_literals[5]);V _rhs67046=_v_66449_my;return j::binary("+",_lhs67045,_rhs67046);})());j::put(_obj67042,this->_literals[1],([&]()->V{V _receiver67053=j::builtin("Math");V _method67054=this->_literals[33];V _method=j::get(_receiver67053,_method67054);j::Args _params67055=j::Args{V(0.0),([&]()->V{V _lhs67047=j::get(_v_66448_r,this->_literals[1]);V _rhs67048=([&]()->V{V _lhs67049=V(2.0);V _rhs67050=_v_66450_mx;return V(j::number(_lhs67049)*j::number(_rhs67050));})();return V(j::number(_lhs67047)-j::number(_rhs67048));})()};return j::call(_method,_params67055,_receiver67053);})());j::put(_obj67042,this->_literals[3],([&]()->V{V _receiver67062=j::builtin("Math");V _method67063=this->_literals[33];V _method=j::get(_receiver67062,_method67063);j::Args _params67064=j::Args{V(0.0),([&]()->V{V _lhs67056=j::get(_v_66448_r,this->_literals[3]);V _rhs67057=([&]()->V{V _lhs67058=V(2.0);V _rhs67059=_v_66449_my;return V(j::number(_lhs67058)*j::number(_rhs67059));})();return V(j::number(_lhs67056)-j::number(_rhs67057));})()};return j::call(_method,_params67064,_receiver67062);})());return _obj67042;})();

}

return V{};
},2);
this->_v_66451_share.get()=j::function([=](const j::Args &_args_fn66452,const V &_receiver_fn66452,const V &_self_fn66452) mutable ->V{
V _v_66453_total;
V _v_66454_parts;
j::Cell _v_66455_gap;
V _v_66456_what;
_v_66453_total=_args_fn66452[0];
_v_66454_parts=_args_fn66452[1];
_v_66455_gap.get()=_args_fn66452[2];
_v_66456_what=_args_fn66452[3];
{
V _v_66457_weights;
j::Cell _v_66459_sum;
j::Cell _v_66463_room;
j::Cell _v_66464_at;
j::Cell _v_66465_used;
_v_66457_weights=(j::truth(([&]()->V{V _lhs67065=j::unary("typeof",_v_66454_parts);V _rhs67066=this->_literals[2];return V(j::equal(_lhs67065,_rhs67066,true));})())?([&]()->V{V _receiver67067=([&]()->V{V _callee67071=j::builtin("Array");return j::call(_callee67071,j::Args{([&]()->V{V _callee67070=this->_v_66388_wholeOf.get();return j::call(_callee67070,j::Args{_v_66456_what,_v_66454_parts,V(1.0),V(1.0),V(1000.0)});})()});})();V _method67068=this->_literals[39];V _method=j::get(_receiver67067,_method67068);j::Args _params67069=j::Args{V(1.0)};return j::call(_method,_params67069,_receiver67067);})():(j::truth(([&]()->V{V _logical67072=([&]()->V{V _receiver67073=j::builtin("Array");V _method67074=this->_literals[30];V _method=j::get(_receiver67073,_method67074);j::Args _params67075=j::Args{_v_66454_parts};return j::call(_method,_params67075,_receiver67073);})();return j::truth(_logical67072)?j::get(_v_66454_parts,this->_literals[35]):_logical67072;})())?_v_66454_parts:([&]()->V{V _callee67078=this->_v_66361_fail.get();return j::call(_callee67078,j::Args{([&]()->V{std::u16string _text67076;_text67076+=u"";_text67076+=j::string(_v_66456_what);_text67076+=u" takes a number of parts, or their weights such as [1, 2], not ";_text67076+=j::string(([&]()->V{V _callee67077=this->_v_66384_show.get();return j::call(_callee67077,j::Args{_v_66454_parts});})());_text67076+=u"";return V(std::move(_text67076));})()});})()));
{for(const auto &_item67079:j::elements(_v_66457_weights)){V _v_66458_w;
_v_66458_w=_item67079;
(void)(([&]()->V{V _callee67081=this->_v_66381_numberOf.get();return j::call(_callee67081,j::Args{([&]()->V{std::u16string _text67080;_text67080+=u"";_text67080+=j::string(_v_66456_what);_text67080+=u"'s weights";return V(std::move(_text67080));})(),_v_66458_w,V(1.0),V(0.0)});})());
}}
_v_66459_sum.get()=([&]()->V{V _logical67082=([&]()->V{V _receiver67085=_v_66457_weights;V _method67086=this->_literals[40];V _method=j::get(_receiver67085,_method67086);j::Args _params67087=j::Args{j::function([=](const j::Args &_args_fn66460,const V &_receiver_fn66460,const V &_self_fn66460) mutable ->V{
V _v_66461_a;
V _v_66462_b;
_v_66461_a=_args_fn66460[0];
_v_66462_b=_args_fn66460[1];
return ([&]()->V{V _lhs67083=_v_66461_a;V _rhs67084=_v_66462_b;return j::binary("+",_lhs67083,_rhs67084);})();
return V{};
},2),V(0.0)};return j::call(_method,_params67087,_receiver67085);})();return !j::truth(_logical67082)?V(1.0):_logical67082;})();
_v_66463_room.get()=([&]()->V{V _receiver67096=j::builtin("Math");V _method67097=this->_literals[33];V _method=j::get(_receiver67096,_method67097);j::Args _params67098=j::Args{V(0.0),([&]()->V{V _lhs67088=_v_66453_total;V _rhs67089=([&]()->V{V _lhs67090=_v_66455_gap.get();V _rhs67091=([&]()->V{V _lhs67092=j::get(_v_66457_weights,this->_literals[35]);V _rhs67093=V(1.0);return V(j::number(_lhs67092)-j::number(_rhs67093));})();return V(j::number(_lhs67090)*j::number(_rhs67091));})();return V(j::number(_lhs67088)-j::number(_rhs67089));})()};return j::call(_method,_params67098,_receiver67096);})();
_v_66464_at.get()=V(0.0);
_v_66465_used.get()=V(0.0);
return ([&]()->V{V _receiver67117=_v_66457_weights;V _method67118=this->_literals[41];V _method=j::get(_receiver67117,_method67118);j::Args _params67119=j::Args{j::function([=](const j::Args &_args_fn66466,const V &_receiver_fn66466,const V &_self_fn66466) mutable ->V{
V _v_66467_w;
V _v_66468_i;
_v_66467_w=_args_fn66466[0];
_v_66468_i=_args_fn66466[1];
{
V _v_66469_end;
V _v_66470_span;
(void)((_v_66465_used.get()=j::binary("+",_v_66465_used.get(),_v_66467_w)));
_v_66469_end=([&]()->V{V _number67104=([&]()->V{V _lhs67105=([&]()->V{V _lhs67107=_v_66463_room.get();V _rhs67108=_v_66465_used.get();return V(j::number(_lhs67107)*j::number(_rhs67108));})();V _rhs67106=_v_66459_sum.get();return V(j::number(_lhs67105)/j::number(_rhs67106));})();return V(std::floor(j::number(_number67104)+.5));})();
_v_66470_span=([&]()->V{j::Args _array67109;_array67109.push_back(([&]()->V{V _lhs67110=_v_66464_at.get();V _rhs67111=([&]()->V{V _lhs67112=_v_66468_i;V _rhs67113=_v_66455_gap.get();return V(j::number(_lhs67112)*j::number(_rhs67113));})();return j::binary("+",_lhs67110,_rhs67111);})());_array67109.push_back(([&]()->V{V _lhs67114=_v_66469_end;V _rhs67115=_v_66464_at.get();return V(j::number(_lhs67114)-j::number(_rhs67115));})());return j::array(std::move(_array67109));})();
(void)((_v_66464_at.get()=_v_66469_end));
return _v_66470_span;

}

return V{};
},2)};return j::call(_method,_params67119,_receiver67117);})();

}

return V{};
},4);
this->_v_66471_across.get()=j::function([=](const j::Args &_args_fn66472,const V &_receiver_fn66472,const V &_self_fn66472) mutable ->V{
V _v_66473_room;
V _v_66474_parts;
V _v_66475_o;
_v_66473_room=_args_fn66472[0];
_v_66474_parts=_args_fn66472[1];
_v_66475_o=_args_fn66472[2];
{
j::Cell _v_66476_r;
V _v_66477_gap;
_v_66476_r.get()=([&]()->V{V _callee67120=this->_v_66394_roomOf.get();return j::call(_callee67120,j::Args{_v_66473_room,this->_literals[42]});})();
_v_66477_gap=([&]()->V{V _callee67123=this->_v_66388_wholeOf.get();return j::call(_callee67123,j::Args{this->_literals[43],j::get(([&]()->V{V _callee67122=this->_v_66382_optionsOf.get();return j::call(_callee67122,j::Args{this->_literals[42],_v_66475_o,([&]()->V{j::Args _array67121;_array67121.push_back(this->_literals[44]);return j::array(std::move(_array67121));})()});})(),this->_literals[44]),V(0.0),V(0.0)});})();
return ([&]()->V{V _receiver67128=([&]()->V{V _callee67131=this->_v_66451_share.get();return j::call(_callee67131,j::Args{j::get(_v_66476_r.get(),this->_literals[1]),_v_66474_parts,_v_66477_gap,this->_literals[42]});})();V _method67129=this->_literals[41];V _method=j::get(_receiver67128,_method67129);j::Args _params67130=j::Args{j::function([=](const j::Args &_args_fn66478,const V &_receiver_fn66478,const V &_self_fn66478) mutable ->V{
V _v_66479_x;
V _v_66480_cols;
V _pattern67124=_args_fn66478[0];
_v_66479_x=j::get(_pattern67124,V(0));
_v_66480_cols=j::get(_pattern67124,V(1));
return ([&]()->V{V _obj67125=j::object();j::put(_obj67125,this->_literals[4],([&]()->V{V _lhs67126=j::get(_v_66476_r.get(),this->_literals[4]);V _rhs67127=_v_66479_x;return j::binary("+",_lhs67126,_rhs67127);})());j::put(_obj67125,this->_literals[5],j::get(_v_66476_r.get(),this->_literals[5]));j::put(_obj67125,this->_literals[1],_v_66480_cols);j::put(_obj67125,this->_literals[3],j::get(_v_66476_r.get(),this->_literals[3]));return _obj67125;})();
return V{};
},1)};return j::call(_method,_params67130,_receiver67128);})();

}

return V{};
},3);
this->_v_66481_down.get()=j::function([=](const j::Args &_args_fn66482,const V &_receiver_fn66482,const V &_self_fn66482) mutable ->V{
V _v_66483_room;
V _v_66484_parts;
V _v_66485_o;
_v_66483_room=_args_fn66482[0];
_v_66484_parts=_args_fn66482[1];
_v_66485_o=_args_fn66482[2];
{
j::Cell _v_66486_r;
V _v_66487_gap;
_v_66486_r.get()=([&]()->V{V _callee67132=this->_v_66394_roomOf.get();return j::call(_callee67132,j::Args{_v_66483_room,this->_literals[45]});})();
_v_66487_gap=([&]()->V{V _callee67135=this->_v_66388_wholeOf.get();return j::call(_callee67135,j::Args{this->_literals[46],j::get(([&]()->V{V _callee67134=this->_v_66382_optionsOf.get();return j::call(_callee67134,j::Args{this->_literals[45],_v_66485_o,([&]()->V{j::Args _array67133;_array67133.push_back(this->_literals[44]);return j::array(std::move(_array67133));})()});})(),this->_literals[44]),V(0.0),V(0.0)});})();
return ([&]()->V{V _receiver67140=([&]()->V{V _callee67143=this->_v_66451_share.get();return j::call(_callee67143,j::Args{j::get(_v_66486_r.get(),this->_literals[3]),_v_66484_parts,_v_66487_gap,this->_literals[45]});})();V _method67141=this->_literals[41];V _method=j::get(_receiver67140,_method67141);j::Args _params67142=j::Args{j::function([=](const j::Args &_args_fn66488,const V &_receiver_fn66488,const V &_self_fn66488) mutable ->V{
V _v_66489_y;
V _v_66490_rows;
V _pattern67136=_args_fn66488[0];
_v_66489_y=j::get(_pattern67136,V(0));
_v_66490_rows=j::get(_pattern67136,V(1));
return ([&]()->V{V _obj67137=j::object();j::put(_obj67137,this->_literals[4],j::get(_v_66486_r.get(),this->_literals[4]));j::put(_obj67137,this->_literals[5],([&]()->V{V _lhs67138=j::get(_v_66486_r.get(),this->_literals[5]);V _rhs67139=_v_66489_y;return j::binary("+",_lhs67138,_rhs67139);})());j::put(_obj67137,this->_literals[1],j::get(_v_66486_r.get(),this->_literals[1]));j::put(_obj67137,this->_literals[3],_v_66490_rows);return _obj67137;})();
return V{};
},1)};return j::call(_method,_params67142,_receiver67140);})();

}

return V{};
},3);
this->_v_66491_tiles.get()=j::function([=](const j::Args &_args_fn66492,const V &_receiver_fn66492,const V &_self_fn66492) mutable ->V{
V _v_66493_room;
V _v_66494_o;
_v_66493_room=_args_fn66492[0];
_v_66494_o=_args_fn66492[1];
{
V _v_66495_p;
j::Cell _v_66496_columns;
V _v_66497_rows;
V _v_66498_gy;
j::Cell _v_66499_gx;
_v_66495_p=([&]()->V{V _callee67145=this->_v_66382_optionsOf.get();return j::call(_callee67145,j::Args{this->_literals[47],_v_66494_o,([&]()->V{j::Args _array67144;_array67144.push_back(this->_literals[48]);_array67144.push_back(this->_literals[3]);_array67144.push_back(this->_literals[44]);return j::array(std::move(_array67144));})()});})();
_v_66496_columns.get()=([&]()->V{V _callee67146=this->_v_66388_wholeOf.get();return j::call(_callee67146,j::Args{this->_literals[49],j::get(_v_66495_p,this->_literals[48]),V(2.0),V(1.0),V(1000.0)});})();
_v_66497_rows=([&]()->V{V _callee67147=this->_v_66388_wholeOf.get();return j::call(_callee67147,j::Args{this->_literals[50],j::get(_v_66495_p,this->_literals[3]),_v_66496_columns.get(),V(1.0),V(1000.0)});})();
V _pattern67154=(j::truth(([&]()->V{V _lhs67148=j::get(_v_66495_p,this->_literals[44]);V _rhs67149=j::builtin("undefined");return V(j::equal(_lhs67148,_rhs67149,true));})())?([&]()->V{j::Args _array67150;_array67150.push_back(V(0.0));_array67150.push_back(V(0.0));return j::array(std::move(_array67150));})():(j::truth(([&]()->V{V _lhs67151=j::unary("typeof",j::get(_v_66495_p,this->_literals[44]));V _rhs67152=this->_literals[2];return V(j::equal(_lhs67151,_rhs67152,true));})())?([&]()->V{j::Args _array67153;_array67153.push_back(j::get(_v_66495_p,this->_literals[44]));_array67153.push_back(j::get(_v_66495_p,this->_literals[44]));return j::array(std::move(_array67153));})():j::get(_v_66495_p,this->_literals[44])));
_v_66498_gy=j::get(_pattern67154,V(0));
_v_66499_gx.get()=j::get(_pattern67154,V(1));
return ([&]()->V{V _receiver67157=([&]()->V{V _callee67161=this->_v_66481_down.get();return j::call(_callee67161,j::Args{_v_66493_room,_v_66497_rows,([&]()->V{V _obj67160=j::object();j::put(_obj67160,this->_literals[44],_v_66498_gy);return _obj67160;})()});})();V _method67158=this->_literals[51];V _method=j::get(_receiver67157,_method67158);j::Args _params67159=j::Args{j::function([=](const j::Args &_args_fn66500,const V &_receiver_fn66500,const V &_self_fn66500) mutable ->V{
V _v_66501_band;
_v_66501_band=_args_fn66500[0];
return ([&]()->V{V _callee67156=this->_v_66471_across.get();return j::call(_callee67156,j::Args{_v_66501_band,_v_66496_columns.get(),([&]()->V{V _obj67155=j::object();j::put(_obj67155,this->_literals[44],_v_66499_gx.get());return _obj67155;})()});})();
return V{};
},1)};return j::call(_method,_params67159,_receiver67157);})();

}

return V{};
},2);
this->_v_66502_slot.get()=j::function([=](const j::Args &_args_fn66503,const V &_receiver_fn66503,const V &_self_fn66503) mutable ->V{
V _v_66504_room;
V _v_66505_anchor;
V _v_66506_o;
_v_66504_room=_args_fn66503[0];
_v_66505_anchor=_args_fn66503[1];
_v_66506_o=_args_fn66503[2];
{
V _v_66507_r;
V _v_66508_a;
V _v_66509_p;
V _v_66510_w;
V _v_66511_h;
V _v_66512_m;
V _v_66513_x;
V _v_66514_y;
_v_66507_r=([&]()->V{V _callee67162=this->_v_66394_roomOf.get();return j::call(_callee67162,j::Args{_v_66504_room,this->_literals[52]});})();
_v_66508_a=([&]()->V{V _callee67163=this->_v_66401_anchorOf.get();return j::call(_callee67163,j::Args{this->_literals[53],_v_66505_anchor,this->_literals[6]});})();
_v_66509_p=([&]()->V{V _callee67165=this->_v_66382_optionsOf.get();return j::call(_callee67165,j::Args{this->_literals[52],_v_66506_o,([&]()->V{j::Args _array67164;_array67164.push_back(this->_literals[1]);_array67164.push_back(this->_literals[3]);_array67164.push_back(this->_literals[10]);return j::array(std::move(_array67164));})()});})();
_v_66510_w=([&]()->V{V _callee67166=this->_v_66388_wholeOf.get();return j::call(_callee67166,j::Args{this->_literals[54],j::get(_v_66509_p,this->_literals[1]),V(1.0),V(1.0)});})();
_v_66511_h=([&]()->V{V _callee67167=this->_v_66388_wholeOf.get();return j::call(_callee67167,j::Args{this->_literals[55],j::get(_v_66509_p,this->_literals[3]),V(1.0),V(1.0)});})();
_v_66512_m=([&]()->V{V _callee67168=this->_v_66388_wholeOf.get();return j::call(_callee67168,j::Args{this->_literals[56],j::get(_v_66509_p,this->_literals[10]),V(0.0),V(0.0)});})();
_v_66513_x=(j::truth(([&]()->V{V _receiver67169=_v_66508_a;V _method67170=this->_literals[12];V _method=j::get(_receiver67169,_method67170);j::Args _params67171=j::Args{this->_literals[11]};return j::call(_method,_params67171,_receiver67169);})())?([&]()->V{V _lhs67172=j::get(_v_66507_r,this->_literals[4]);V _rhs67173=_v_66512_m;return j::binary("+",_lhs67172,_rhs67173);})():(j::truth(([&]()->V{V _receiver67174=_v_66508_a;V _method67175=this->_literals[12];V _method=j::get(_receiver67174,_method67175);j::Args _params67176=j::Args{this->_literals[13]};return j::call(_method,_params67176,_receiver67174);})())?([&]()->V{V _lhs67177=([&]()->V{V _lhs67179=([&]()->V{V _lhs67181=j::get(_v_66507_r,this->_literals[4]);V _rhs67182=j::get(_v_66507_r,this->_literals[1]);return j::binary("+",_lhs67181,_rhs67182);})();V _rhs67180=_v_66510_w;return V(j::number(_lhs67179)-j::number(_rhs67180));})();V _rhs67178=_v_66512_m;return V(j::number(_lhs67177)-j::number(_rhs67178));})():([&]()->V{V _lhs67183=j::get(_v_66507_r,this->_literals[4]);V _rhs67184=([&]()->V{V _number67189=([&]()->V{V _lhs67190=([&]()->V{V _lhs67192=j::get(_v_66507_r,this->_literals[1]);V _rhs67193=_v_66510_w;return V(j::number(_lhs67192)-j::number(_rhs67193));})();V _rhs67191=V(2.0);return V(j::number(_lhs67190)/j::number(_rhs67191));})();return V(std::floor(j::number(_number67189)));})();return j::binary("+",_lhs67183,_rhs67184);})()));
_v_66514_y=(j::truth(([&]()->V{V _receiver67194=_v_66508_a;V _method67195=this->_literals[15];V _method=j::get(_receiver67194,_method67195);j::Args _params67196=j::Args{this->_literals[14]};return j::call(_method,_params67196,_receiver67194);})())?([&]()->V{V _lhs67197=j::get(_v_66507_r,this->_literals[5]);V _rhs67198=_v_66512_m;return j::binary("+",_lhs67197,_rhs67198);})():(j::truth(([&]()->V{V _receiver67199=_v_66508_a;V _method67200=this->_literals[15];V _method=j::get(_receiver67199,_method67200);j::Args _params67201=j::Args{this->_literals[16]};return j::call(_method,_params67201,_receiver67199);})())?([&]()->V{V _lhs67202=([&]()->V{V _lhs67204=([&]()->V{V _lhs67206=j::get(_v_66507_r,this->_literals[5]);V _rhs67207=j::get(_v_66507_r,this->_literals[3]);return j::binary("+",_lhs67206,_rhs67207);})();V _rhs67205=_v_66511_h;return V(j::number(_lhs67204)-j::number(_rhs67205));})();V _rhs67203=_v_66512_m;return V(j::number(_lhs67202)-j::number(_rhs67203));})():([&]()->V{V _lhs67208=j::get(_v_66507_r,this->_literals[5]);V _rhs67209=([&]()->V{V _number67214=([&]()->V{V _lhs67215=([&]()->V{V _lhs67217=j::get(_v_66507_r,this->_literals[3]);V _rhs67218=_v_66511_h;return V(j::number(_lhs67217)-j::number(_rhs67218));})();V _rhs67216=V(2.0);return V(j::number(_lhs67215)/j::number(_rhs67216));})();return V(std::floor(j::number(_number67214)));})();return j::binary("+",_lhs67208,_rhs67209);})()));
return ([&]()->V{V _obj67219=j::object();j::put(_obj67219,this->_literals[4],_v_66513_x);j::put(_obj67219,this->_literals[5],_v_66514_y);j::put(_obj67219,this->_literals[1],_v_66510_w);j::put(_obj67219,this->_literals[3],_v_66511_h);return _obj67219;})();

}

return V{};
},3);
this->_v_66522_tones.get()=j::function([=](const j::Args &_args_fn66523,const V &_receiver_fn66523,const V &_self_fn66523) mutable ->V{
V _v_66524_accent;
V _v_66525_more;
_v_66524_accent=_args_fn66523[0];
V _default67220=_args_fn66523[1];if(_default67220.kind==V::Undefined||_default67220.kind==V::Hole)_default67220=([&]()->V{j::Args _array67221;return j::array(std::move(_array67221));})();
_v_66525_more=_default67220;
{
V _v_66526_list;
_v_66526_list=([&]()->V{j::Args _array67222;_array67222.push_back(j::get(this->_v_66515_TONES.get(),this->_literals[57]));_array67222.push_back(([&]()->V{V _logical67223=_v_66524_accent;return j::nullish(_logical67223)?j::get(this->_v_66515_TONES.get(),this->_literals[58]):_logical67223;})());_array67222.push_back(j::get(this->_v_66515_TONES.get(),this->_literals[59]));_array67222.push_back(j::get(this->_v_66515_TONES.get(),this->_literals[60]));_array67222.push_back(j::get(this->_v_66515_TONES.get(),this->_literals[61]));_array67222.push_back(j::get(this->_v_66515_TONES.get(),this->_literals[62]));for(const auto &_value:j::elements(_v_66525_more))_array67222.push_back(_value);return j::array(std::move(_array67222));})();
return ([&]()->V{V _obj67224=j::object();j::put(_obj67224,this->_literals[63],([&]()->V{V _receiver67225=_v_66526_list;V _method67226=this->_literals[41];V _method=j::get(_receiver67225,_method67226);j::Args _params67227=j::Args{j::function([=](const j::Args &_args_fn66527,const V &_receiver_fn66527,const V &_self_fn66527) mutable ->V{
V _v_66528_c;
_v_66528_c=_args_fn66527[0];
return j::get(_v_66528_c,this->_literals[63]);
return V{};
},1)};return j::call(_method,_params67227,_receiver67225);})());j::put(_obj67224,this->_literals[64],([&]()->V{V _receiver67228=_v_66526_list;V _method67229=this->_literals[41];V _method=j::get(_receiver67228,_method67229);j::Args _params67230=j::Args{j::function([=](const j::Args &_args_fn66529,const V &_receiver_fn66529,const V &_self_fn66529) mutable ->V{
V _v_66530_c;
_v_66530_c=_args_fn66529[0];
return j::get(_v_66530_c,this->_literals[64]);
return V{};
},1)};return j::call(_method,_params67230,_receiver67228);})());return _obj67224;})();

}

return V{};
},1);
this->_v_66531_inked.get()=j::function([=](const j::Args &_args_fn66532,const V &_receiver_fn66532,const V &_self_fn66532) mutable ->V{
V _v_66533_what;
V _v_66534_str;
V _v_66535_color;
V _v_66536_width;
V _v_66537_cols;
_v_66533_what=_args_fn66532[0];
_v_66534_str=_args_fn66532[1];
_v_66535_color=_args_fn66532[2];
_v_66536_width=_args_fn66532[3];
V _default67231=_args_fn66532[4];if(_default67231.kind==V::Undefined||_default67231.kind==V::Hole)_default67231=_v_66536_width;
_v_66537_cols=_default67231;
{
V _v_66538_lines;
V _v_66539_scratch;
V _v_66542_box;
V _v_66543_s;
_v_66538_lines=([&]()->V{V _receiver67232=_v_66534_str;V _method67233=this->_literals[66];V _method=j::get(_receiver67232,_method67233);j::Args _params67234=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[65]};return j::call(_method,_params67234,_receiver67232);})();
_v_66539_scratch=([&]()->V{V _callee67246=this->_v_66359_Surface.get();return j::construct(_callee67246,j::Args{([&]()->V{V _logical67235=_v_66536_width;return j::nullish(_logical67235)?([&]()->V{V _receiver67243=j::builtin("Math");V _method67244=this->_literals[33];V _method=j::get(_receiver67243,_method67244);j::Args _params67245=([&](){j::Args _args67236;_args67236.push_back(V(1.0));for(const auto &_v:j::elements(([&]()->V{V _receiver67237=([&]()->V{V _receiver67240=_v_66538_lines;V _method67241=this->_literals[67];V _method=j::get(_receiver67240,_method67241);j::Args _params67242=j::Args{this->_literals[65]};return j::call(_method,_params67242,_receiver67240);})();V _method67238=this->_literals[41];V _method=j::get(_receiver67237,_method67238);j::Args _params67239=j::Args{j::function([=](const j::Args &_args_fn66540,const V &_receiver_fn66540,const V &_self_fn66540) mutable ->V{
V _v_66541_l;
_v_66541_l=_args_fn66540[0];
return j::get(_v_66541_l,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params67239,_receiver67237);})()))_args67236.push_back(_v);return _args67236;})();return j::call(_method,_params67245,_receiver67243);})():_logical67235;})(),V(121.0)});})();
_v_66542_box=([&]()->V{V _callee67249=this->_v_66370_text.get();return j::call(_callee67249,j::Args{_v_66539_scratch,V(0.0),V(0.0),_v_66538_lines,(j::truth(_v_66536_width)?([&]()->V{V _obj67247=j::object();j::put(_obj67247,this->_literals[68],_v_66536_width);return _obj67247;})():([&]()->V{V _obj67248=j::object();return _obj67248;})())});})();
if(j::truth(([&]()->V{V _lhs67250=j::get(_v_66542_box,this->_literals[3]);V _rhs67251=V(120.0);return j::binary(">",_lhs67250,_rhs67251);})())){(void)(([&]()->V{V _callee67254=this->_v_66361_fail.get();return j::call(_callee67254,j::Args{([&]()->V{std::u16string _text67252;_text67252+=u"";_text67252+=j::string(_v_66533_what);_text67252+=u"'s words wrap past the 120 rows a piece can have";_text67252+=j::string((j::truth(_v_66536_width)?([&]()->V{std::u16string _text67253;_text67253+=u" at ";_text67253+=j::string(_v_66536_width);_text67253+=u" columns";return V(std::move(_text67253));})():this->_literals[69]));_text67252+=u": give it fewer words";_text67252+=j::string((j::truth(_v_66536_width)?this->_literals[70]:this->_literals[69]));_text67252+=u"";return V(std::move(_text67252));})()});})());
}
_v_66543_s=([&]()->V{V _callee67271=this->_v_66359_Surface.get();return j::construct(_callee67271,j::Args{([&]()->V{V _receiver67258=j::builtin("Math");V _method67259=this->_literals[33];V _method=j::get(_receiver67258,_method67259);j::Args _params67260=j::Args{V(1.0),([&]()->V{V _logical67255=_v_66537_cols;return j::nullish(_logical67255)?j::get(_v_66542_box,this->_literals[1]):_logical67255;})()};return j::call(_method,_params67260,_receiver67258);})(),([&]()->V{V _receiver67263=j::builtin("Math");V _method67264=this->_literals[33];V _method=j::get(_receiver67263,_method67264);j::Args _params67265=j::Args{V(1.0),j::get(_v_66542_box,this->_literals[3])};return j::call(_method,_params67265,_receiver67263);})(),([&]()->V{V _obj67266=j::object();j::put(_obj67266,this->_literals[71],(j::truth(_v_66535_color)?([&]()->V{V _callee67270=this->_v_66358_Palette.get();return j::construct(_callee67270,j::Args{([&]()->V{V _obj67267=j::object();j::put(_obj67267,this->_literals[63],([&]()->V{j::Args _array67268;_array67268.push_back(j::get(_v_66535_color,this->_literals[63]));return j::array(std::move(_array67268));})());j::put(_obj67267,this->_literals[64],([&]()->V{j::Args _array67269;_array67269.push_back(j::get(_v_66535_color,this->_literals[64]));return j::array(std::move(_array67269));})());return _obj67267;})()});})():V::null()));return _obj67266;})()});})();
(void)(([&]()->V{V _callee67279=this->_v_66370_text.get();return j::call(_callee67279,j::Args{_v_66543_s,V(0.0),V(0.0),_v_66538_lines,([&]()->V{V _obj67272=j::object();V _spread67273=(j::truth(_v_66536_width)?([&]()->V{V _obj67274=j::object();j::put(_obj67274,this->_literals[68],_v_66536_width);return _obj67274;})():([&]()->V{V _obj67275=j::object();return _obj67275;})());for(const auto &_key:j::keys(_spread67273))j::put(_obj67272,_key,j::get(_spread67273,_key));V _spread67276=(j::truth(_v_66535_color)?([&]()->V{V _obj67277=j::object();j::put(_obj67277,this->_literals[18],V(0.0));return _obj67277;})():([&]()->V{V _obj67278=j::object();return _obj67278;})());for(const auto &_key:j::keys(_spread67276))j::put(_obj67272,_key,j::get(_spread67276,_key));return _obj67272;})()});})());
return _v_66543_s;

}

return V{};
},4);
this->_v_66554_amountOf.get()=j::function([=](const j::Args &_args_fn66555,const V &_receiver_fn66555,const V &_self_fn66555) mutable ->V{
V _v_66556_what;
j::Cell _v_66557_v;
j::Cell _v_66558_min;
j::Cell _v_66559_max;
V _v_66560_share;
_v_66556_what=_args_fn66555[0];
_v_66557_v.get()=_args_fn66555[1];
_v_66558_min.get()=_args_fn66555[2];
_v_66559_max.get()=_args_fn66555[3];
_v_66560_share=_args_fn66555[4];
{
if(j::truth(([&]()->V{V _lhs67280=_v_66557_v.get();V _rhs67281=j::builtin("undefined");return V(j::equal(_lhs67280,_rhs67281,true));})())){return j::builtin("undefined");
}
if(j::truth(([&]()->V{V _lhs67282=j::unary("typeof",_v_66557_v.get());V _rhs67283=this->_literals[72];return V(j::equal(_lhs67282,_rhs67283,true));})())){
return j::function([=](const j::Args &_args_fn66561,const V &_receiver_fn66561,const V &_self_fn66561) mutable ->V{
{
V _v_66562_got;
_v_66562_got=([&]()->V{V _callee67284=_v_66557_v.get();return j::call(_callee67284,j::Args{});})();
return (j::truth(([&]()->V{V _logical67285=([&]()->V{V _lhs67286=j::unary("typeof",_v_66562_got);V _rhs67287=this->_literals[2];return V(j::equal(_lhs67286,_rhs67287,true));})();return j::truth(_logical67285)?([&]()->V{V _receiver67288=j::builtin("Number");V _method67289=this->_literals[73];V _method=j::get(_receiver67288,_method67289);j::Args _params67290=j::Args{_v_66562_got};return j::call(_method,_params67290,_receiver67288);})():_logical67285;})())?([&]()->V{V _receiver67298=j::builtin("Math");V _method67299=this->_literals[33];V _method=j::get(_receiver67298,_method67299);j::Args _params67300=j::Args{_v_66558_min.get(),([&]()->V{V _receiver67293=j::builtin("Math");V _method67294=this->_literals[32];V _method=j::get(_receiver67293,_method67294);j::Args _params67295=j::Args{_v_66559_max.get(),_v_66562_got};return j::call(_method,_params67295,_receiver67293);})()};return j::call(_method,_params67300,_receiver67298);})():_v_66558_min.get());

}

return V{};
},0);

}

if(j::truth(([&]()->V{V _lhs67301=j::unary("typeof",_v_66557_v.get());V _rhs67302=this->_literals[74];return V(j::equal(_lhs67301,_rhs67302,true));})())){
V _v_66563_m;
_v_66563_m=([&]()->V{V _receiver67303=j::regexp(u"^\\s*(\\d+(?:\\.\\d+)?)\\s*%\\s*$","");V _method67304=this->_literals[75];V _method=j::get(_receiver67303,_method67304);j::Args _params67305=j::Args{_v_66557_v.get()};return j::call(_method,_params67305,_receiver67303);})();
if(j::truth(([&]()->V{V _logical67306=j::unary("!",_v_66563_m);return !j::truth(_logical67306)?([&]()->V{V _lhs67307=j::unary("+",j::get(_v_66563_m,V(1.0)));V _rhs67308=V(100.0);return j::binary(">",_lhs67307,_rhs67308);})():_logical67306;})())){(void)(([&]()->V{V _callee67311=this->_v_66361_fail.get();return j::call(_callee67311,j::Args{([&]()->V{std::u16string _text67309;_text67309+=u"";_text67309+=j::string(_v_66556_what);_text67309+=u"'s value takes a percentage from \"0%\" to \"100%\", or a number, not ";_text67309+=j::string(([&]()->V{V _callee67310=this->_v_66384_show.get();return j::call(_callee67310,j::Args{_v_66557_v.get()});})());_text67309+=u"";return V(std::move(_text67309));})()});})());
}
return ([&]()->V{V _lhs67312=_v_66558_min.get();V _rhs67313=([&]()->V{V _lhs67314=([&]()->V{V _lhs67316=j::unary("+",j::get(_v_66563_m,V(1.0)));V _rhs67317=V(100.0);return V(j::number(_lhs67316)/j::number(_rhs67317));})();V _rhs67315=([&]()->V{V _lhs67318=_v_66559_max.get();V _rhs67319=_v_66558_min.get();return V(j::number(_lhs67318)-j::number(_rhs67319));})();return V(j::number(_lhs67314)*j::number(_rhs67315));})();return j::binary("+",_lhs67312,_rhs67313);})();

}

if(j::truth(([&]()->V{V _logical67320=([&]()->V{V _logical67321=([&]()->V{V _logical67322=([&]()->V{V _lhs67323=j::unary("typeof",_v_66557_v.get());V _rhs67324=this->_literals[2];return V(!j::equal(_lhs67323,_rhs67324,true));})();return !j::truth(_logical67322)?j::unary("!",([&]()->V{V _receiver67325=j::builtin("Number");V _method67326=this->_literals[73];V _method=j::get(_receiver67325,_method67326);j::Args _params67327=j::Args{_v_66557_v.get()};return j::call(_method,_params67327,_receiver67325);})()):_logical67322;})();return !j::truth(_logical67321)?([&]()->V{V _lhs67328=_v_66557_v.get();V _rhs67329=_v_66558_min.get();return j::binary("<",_lhs67328,_rhs67329);})():_logical67321;})();return !j::truth(_logical67320)?([&]()->V{V _lhs67330=_v_66557_v.get();V _rhs67331=_v_66559_max.get();return j::binary(">",_lhs67330,_rhs67331);})():_logical67320;})())){
V _v_66564_hint;
_v_66564_hint=(j::truth(([&]()->V{V _logical67332=([&]()->V{V _logical67333=([&]()->V{V _logical67334=_v_66560_share;return j::truth(_logical67334)?([&]()->V{V _lhs67335=j::unary("typeof",_v_66557_v.get());V _rhs67336=this->_literals[2];return V(j::equal(_lhs67335,_rhs67336,true));})():_logical67334;})();return j::truth(_logical67333)?([&]()->V{V _lhs67337=_v_66557_v.get();V _rhs67338=V(1.0);return j::binary(">",_lhs67337,_rhs67338);})():_logical67333;})();return j::truth(_logical67332)?([&]()->V{V _lhs67339=_v_66557_v.get();V _rhs67340=V(100.0);return j::binary("<=",_lhs67339,_rhs67340);})():_logical67332;})())?([&]()->V{std::u16string _text67341;_text67341+=u": did you mean ";_text67341+=j::string(j::unary("+",([&]()->V{V _receiver67342=([&]()->V{V _lhs67345=_v_66557_v.get();V _rhs67346=V(100.0);return V(j::number(_lhs67345)/j::number(_rhs67346));})();V _method67343=this->_literals[76];V _method=j::get(_receiver67342,_method67343);j::Args _params67344=j::Args{V(4.0)};return j::call(_method,_params67344,_receiver67342);})()));_text67341+=u", or \"";_text67341+=j::string(_v_66557_v.get());_text67341+=u"%\"?";return V(std::move(_text67341));})():this->_literals[69]);
(void)(([&]()->V{V _callee67349=this->_v_66361_fail.get();return j::call(_callee67349,j::Args{([&]()->V{std::u16string _text67347;_text67347+=u"";_text67347+=j::string(_v_66556_what);_text67347+=u"'s value takes a number from ";_text67347+=j::string(_v_66558_min.get());_text67347+=u" to ";_text67347+=j::string(_v_66559_max.get());_text67347+=u", a percentage such as \"64%\", or a function that reads one, not ";_text67347+=j::string(([&]()->V{V _callee67348=this->_v_66384_show.get();return j::call(_callee67348,j::Args{_v_66557_v.get()});})());_text67347+=u"";_text67347+=j::string(_v_66564_hint);_text67347+=u"";return V(std::move(_text67347));})()});})());

}

if(j::truth(([&]()->V{V _logical67350=([&]()->V{V _logical67351=([&]()->V{V _logical67352=([&]()->V{V _logical67353=j::unary("!",_v_66560_share);return j::truth(_logical67353)?([&]()->V{V _lhs67354=_v_66558_min.get();V _rhs67355=V(0.0);return V(j::equal(_lhs67354,_rhs67355,true));})():_logical67353;})();return j::truth(_logical67352)?([&]()->V{V _lhs67356=_v_66559_max.get();V _rhs67357=V(100.0);return V(j::equal(_lhs67356,_rhs67357,true));})():_logical67352;})();return j::truth(_logical67351)?([&]()->V{V _lhs67358=_v_66557_v.get();V _rhs67359=V(0.0);return j::binary(">",_lhs67358,_rhs67359);})():_logical67351;})();return j::truth(_logical67350)?([&]()->V{V _lhs67360=_v_66557_v.get();V _rhs67361=V(1.0);return j::binary("<",_lhs67360,_rhs67361);})():_logical67350;})())){(void)(([&]()->V{V _callee67373=this->_v_66361_fail.get();return j::call(_callee67373,j::Args{([&]()->V{std::u16string _text67362;_text67362+=u"";_text67362+=j::string(_v_66556_what);_text67362+=u"'s value is a reading from 0 to 100, and ";_text67362+=j::string(_v_66557_v.get());_text67362+=u" is less than 1: did you mean ";_text67362+=j::string(j::unary("+",([&]()->V{V _receiver67363=([&]()->V{V _lhs67366=_v_66557_v.get();V _rhs67367=V(100.0);return V(j::number(_lhs67366)*j::number(_rhs67367));})();V _method67364=this->_literals[76];V _method=j::get(_receiver67363,_method67364);j::Args _params67365=j::Args{V(2.0)};return j::call(_method,_params67365,_receiver67363);})()));_text67362+=u", or \"";_text67362+=j::string(j::unary("+",([&]()->V{V _receiver67368=([&]()->V{V _lhs67371=_v_66557_v.get();V _rhs67372=V(100.0);return V(j::number(_lhs67371)*j::number(_rhs67372));})();V _method67369=this->_literals[76];V _method=j::get(_receiver67368,_method67369);j::Args _params67370=j::Args{V(2.0)};return j::call(_method,_params67370,_receiver67368);})()));_text67362+=u"%\"? Give it max: 1 for a reading from 0 to 1";return V(std::move(_text67362));})()});})());
}
return _v_66557_v.get();

}

return V{};
},5);
this->_v_66565_clockFace.get()=j::function([=](const j::Args &_args_fn66566,const V &_receiver_fn66566,const V &_self_fn66566) mutable ->V{
V _v_66567_o;
_v_66567_o=_args_fn66566[0];
{
V _v_66568_p;
V _v_66569_size;
j::Cell _v_66570_numbers;
j::Cell _v_66571_real;
j::Cell _v_66572_framed;
j::Cell _v_66573_title;
V _v_66574_time;
V _v_66575_hm;
j::Cell _v_66576_h0;
j::Cell _v_66577_m0;
j::Cell _v_66578_cols;
j::Cell _v_66579_rows;
V _v_66580_second;
V _v_66581_made;
_v_66568_p=([&]()->V{V _callee67375=this->_v_66382_optionsOf.get();return j::call(_callee67375,j::Args{this->_literals[77],_v_66567_o,([&]()->V{j::Args _array67374;_array67374.push_back(this->_literals[78]);_array67374.push_back(this->_literals[79]);_array67374.push_back(this->_literals[80]);_array67374.push_back(this->_literals[81]);_array67374.push_back(this->_literals[82]);_array67374.push_back(this->_literals[83]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array67374.push_back(_value);return j::array(std::move(_array67374));})()});})();
_v_66569_size=([&]()->V{V _callee67377=this->_v_66389_wordOf.get();return j::call(_callee67377,j::Args{this->_literals[84],j::get(_v_66568_p,this->_literals[80]),([&]()->V{j::Args _array67376;_array67376.push_back(this->_literals[85]);_array67376.push_back(this->_literals[86]);_array67376.push_back(this->_literals[87]);return j::array(std::move(_array67376));})(),this->_literals[86]});})();
_v_66570_numbers.get()=([&]()->V{V _callee67381=this->_v_66389_wordOf.get();return j::call(_callee67381,j::Args{this->_literals[88],j::get(_v_66568_p,this->_literals[81]),([&]()->V{j::Args _array67378;_array67378.push_back(this->_literals[89]);_array67378.push_back(this->_literals[90]);_array67378.push_back(this->_literals[91]);return j::array(std::move(_array67378));})(),(j::truth(([&]()->V{V _lhs67379=_v_66569_size;V _rhs67380=this->_literals[85];return V(j::equal(_lhs67379,_rhs67380,true));})())?this->_literals[90]:this->_literals[89])});})();
_v_66571_real.get()=([&]()->V{V _callee67382=this->_v_66378_boolOf.get();return j::call(_callee67382,j::Args{this->_literals[92],j::get(_v_66568_p,this->_literals[79]),V(false)});})();
_v_66572_framed.get()=([&]()->V{V _callee67383=this->_v_66378_boolOf.get();return j::call(_callee67383,j::Args{this->_literals[93],j::get(_v_66568_p,this->_literals[82]),V(true)});})();
_v_66573_title.get()=([&]()->V{V _callee67384=this->_v_66386_textOf.get();return j::call(_callee67384,j::Args{this->_literals[94],j::get(_v_66568_p,this->_literals[83])});})();
_v_66574_time=([&]()->V{V _logical67385=j::get(_v_66568_p,this->_literals[78]);return j::nullish(_logical67385)?this->_literals[95]:_logical67385;})();
_v_66575_hm=([&]()->V{V _receiver67387=j::regexp(u"^(\\d{1,2}):(\\d{2})$","");V _method67388=this->_literals[75];V _method=j::get(_receiver67387,_method67388);j::Args _params67389=j::Args{([&]()->V{V _callee67386=j::builtin("String");return j::call(_callee67386,j::Args{_v_66574_time});})()};return j::call(_method,_params67389,_receiver67387);})();
if(j::truth(([&]()->V{V _logical67390=([&]()->V{V _logical67391=j::unary("!",_v_66575_hm);return !j::truth(_logical67391)?([&]()->V{V _lhs67392=j::unary("+",j::get(_v_66575_hm,V(1.0)));V _rhs67393=V(23.0);return j::binary(">",_lhs67392,_rhs67393);})():_logical67391;})();return !j::truth(_logical67390)?([&]()->V{V _lhs67394=j::unary("+",j::get(_v_66575_hm,V(2.0)));V _rhs67395=V(59.0);return j::binary(">",_lhs67394,_rhs67395);})():_logical67390;})())){(void)(([&]()->V{V _callee67398=this->_v_66361_fail.get();return j::call(_callee67398,j::Args{([&]()->V{std::u16string _text67396;_text67396+=u"clockFace's time takes \"h:mm\", such as \"10:10\", not ";_text67396+=j::string(([&]()->V{V _callee67397=this->_v_66384_show.get();return j::call(_callee67397,j::Args{_v_66574_time});})());_text67396+=u"";return V(std::move(_text67396));})()});})());
}
V _pattern67402=([&]()->V{j::Args _array67399;_array67399.push_back(([&]()->V{V _lhs67400=j::unary("+",j::get(_v_66575_hm,V(1.0)));V _rhs67401=V(12.0);return V(std::fmod(j::number(_lhs67400),j::number(_rhs67401)));})());_array67399.push_back(j::unary("+",j::get(_v_66575_hm,V(2.0))));return j::array(std::move(_array67399));})();
_v_66576_h0.get()=j::get(_pattern67402,V(0));
_v_66577_m0.get()=j::get(_pattern67402,V(1));
V _pattern67407=j::get(([&]()->V{V _obj67403=j::object();j::put(_obj67403,this->_literals[85],([&]()->V{V _obj67404=j::object();j::put(_obj67404,this->_literals[1],V(25.0));j::put(_obj67404,this->_literals[3],V(13.0));return _obj67404;})());j::put(_obj67403,this->_literals[86],([&]()->V{V _obj67405=j::object();j::put(_obj67405,this->_literals[1],V(41.0));j::put(_obj67405,this->_literals[3],V(21.0));return _obj67405;})());j::put(_obj67403,this->_literals[87],([&]()->V{V _obj67406=j::object();j::put(_obj67406,this->_literals[1],V(61.0));j::put(_obj67406,this->_literals[3],V(29.0));return _obj67406;})());return _obj67403;})(),_v_66569_size);
_v_66578_cols.get()=j::get(_pattern67407,this->_literals[1]);
_v_66579_rows.get()=j::get(_pattern67407,this->_literals[3]);
_v_66580_second=([&]()->V{V _logical67408=([&]()->V{V _callee67409=this->_v_66521_themed.get();return j::call(_callee67409,j::Args{this->_literals[96],j::get(_v_66568_p,this->_literals[18])});})();return j::nullish(_logical67408)?j::get(this->_v_66515_TONES.get(),this->_literals[62]):_logical67408;})();
_v_66581_made=([&]()->V{V _callee67488=this->_v_66362_piece.get();return j::call(_callee67488,j::Args{([&]()->V{V _obj67410=j::object();V _spread67411=([&]()->V{V _callee67413=this->_v_66545_naming.get();return j::call(_callee67413,j::Args{_v_66568_p,this->_literals[97],(j::truth(_v_66571_real.get())?this->_literals[98]:([&]()->V{std::u16string _text67412;_text67412+=u"a clock face at ";_text67412+=j::string(_v_66574_time);_text67412+=u", its second hand going round";return V(std::move(_text67412));})())});})();for(const auto &_key:j::keys(_spread67411))j::put(_obj67410,_key,j::get(_spread67411,_key));j::put(_obj67410,this->_literals[99],this->_literals[100]);j::put(_obj67410,this->_literals[1],_v_66578_cols.get());j::put(_obj67410,this->_literals[3],_v_66579_rows.get());j::put(_obj67410,this->_literals[101],V(4.0));j::put(_obj67410,this->_literals[71],([&]()->V{V _callee67414=this->_v_66522_tones.get();return j::call(_callee67414,j::Args{_v_66580_second});})());V _spread67415=(j::truth(_v_66571_real.get())?([&]()->V{V _obj67416=j::object();j::put(_obj67416,this->_literals[97],V(true));return _obj67416;})():([&]()->V{V _obj67417=j::object();j::put(_obj67417,this->_literals[102],V(60.0));return _obj67417;})());for(const auto &_key:j::keys(_spread67415))j::put(_obj67410,_key,j::get(_spread67415,_key));return _obj67410;})(),j::function([=](const j::Args &_args_fn66582,const V &_receiver_fn66582,const V &_self_fn66582) mutable ->V{
V _v_66583_t;
j::Cell _v_66584_s;
_v_66583_t=_args_fn66582[0];
_v_66584_s.get()=_args_fn66582[1];
{
V _v_66585_x;
V _v_66586_y;
V _v_66587_r;
V _v_66588_now;
V _v_66589_sec;
V _v_66590_min;
V _v_66591_hr;
V _pattern67419=([&]()->V{V _callee67418=this->_v_66406_at.get();return j::call(_callee67418,j::Args{_v_66584_s.get()});})();
_v_66585_x=j::get(_pattern67419,V(0));
_v_66586_y=j::get(_pattern67419,V(1));
if(j::truth(_v_66572_framed.get())){(void)(([&]()->V{V _callee67421=this->_v_66369_rect.get();return j::call(_callee67421,j::Args{_v_66584_s.get(),V(0.0),V(0.0),_v_66578_cols.get(),_v_66579_rows.get(),([&]()->V{V _obj67420=j::object();j::put(_obj67420,this->_literals[103],this->_literals[104]);j::put(_obj67420,this->_literals[83],_v_66573_title.get());j::put(_obj67420,this->_literals[18],this->_v_66517_MUTED.get());return _obj67420;})()});})());
}
_v_66587_r=([&]()->V{V _lhs67422=([&]()->V{V _lhs67424=([&]()->V{V _lhs67426=_v_66579_rows.get();V _rhs67427=V(2.0);return V(j::number(_lhs67426)/j::number(_rhs67427));})();V _rhs67425=(j::truth(_v_66572_framed.get())?V(1.5):V(0.5));return V(j::number(_lhs67424)-j::number(_rhs67425));})();V _rhs67423=j::get(_v_66584_s.get(),this->_literals[29]);return V(j::number(_lhs67422)*j::number(_rhs67423));})();
(void)(([&]()->V{V _callee67429=this->_v_66365_circle.get();return j::call(_callee67429,j::Args{_v_66584_s.get(),_v_66585_x,_v_66586_y,_v_66587_r,([&]()->V{V _obj67428=j::object();j::put(_obj67428,this->_literals[105],this->_literals[106]);j::put(_obj67428,this->_literals[18],this->_v_66517_MUTED.get());return _obj67428;})()});})());
_v_66588_now=(j::truth(_v_66571_real.get())?([&]()->V{V _callee67430=j::builtin("Date");return j::construct(_callee67430,j::Args{});})():V::null());
_v_66589_sec=(j::truth(_v_66588_now)?([&]()->V{V _receiver67431=_v_66588_now;V _method67432=this->_literals[107];V _method=j::get(_receiver67431,_method67432);j::Args _params67433=j::Args{};return j::call(_method,_params67433,_receiver67431);})():([&]()->V{V _lhs67434=([&]()->V{V _number67436=_v_66583_t;return V(std::floor(j::number(_number67436)));})();V _rhs67435=V(60.0);return V(std::fmod(j::number(_lhs67434),j::number(_rhs67435)));})());
_v_66590_min=(j::truth(_v_66588_now)?([&]()->V{V _receiver67437=_v_66588_now;V _method67438=this->_literals[108];V _method=j::get(_receiver67437,_method67438);j::Args _params67439=j::Args{};return j::call(_method,_params67439,_receiver67437);})():_v_66577_m0.get());
_v_66591_hr=(j::truth(_v_66588_now)?([&]()->V{V _lhs67440=([&]()->V{V _receiver67442=_v_66588_now;V _method67443=this->_literals[109];V _method=j::get(_receiver67442,_method67443);j::Args _params67444=j::Args{};return j::call(_method,_params67444,_receiver67442);})();V _rhs67441=V(12.0);return V(std::fmod(j::number(_lhs67440),j::number(_rhs67441)));})():_v_66576_h0.get());
(void)(([&]()->V{V _callee67453=this->_v_66368_ray.get();return j::call(_callee67453,j::Args{_v_66584_s.get(),_v_66585_x,_v_66586_y,([&]()->V{V _lhs67445=_v_66587_r;V _rhs67446=V(0.4);return V(j::number(_lhs67445)*j::number(_rhs67446));})(),([&]()->V{V _lhs67447=([&]()->V{V _lhs67449=_v_66591_hr;V _rhs67450=([&]()->V{V _lhs67451=_v_66590_min;V _rhs67452=V(60.0);return V(j::number(_lhs67451)/j::number(_rhs67452));})();return j::binary("+",_lhs67449,_rhs67450);})();V _rhs67448=V(12.0);return V(j::number(_lhs67447)/j::number(_rhs67448));})()});})());
(void)(([&]()->V{V _callee67458=this->_v_66368_ray.get();return j::call(_callee67458,j::Args{_v_66584_s.get(),_v_66585_x,_v_66586_y,([&]()->V{V _lhs67454=_v_66587_r;V _rhs67455=V(0.62);return V(j::number(_lhs67454)*j::number(_rhs67455));})(),([&]()->V{V _lhs67456=_v_66590_min;V _rhs67457=V(60.0);return V(j::number(_lhs67456)/j::number(_rhs67457));})()});})());
(void)(([&]()->V{V _callee67464=this->_v_66368_ray.get();return j::call(_callee67464,j::Args{_v_66584_s.get(),_v_66585_x,_v_66586_y,([&]()->V{V _lhs67459=_v_66587_r;V _rhs67460=V(0.72);return V(j::number(_lhs67459)*j::number(_rhs67460));})(),([&]()->V{V _lhs67461=_v_66589_sec;V _rhs67462=V(60.0);return V(j::number(_lhs67461)/j::number(_rhs67462));})(),([&]()->V{V _obj67463=j::object();j::put(_obj67463,this->_literals[18],this->_v_66516_ACCENT.get());return _obj67463;})()});})());
(void)(([&]()->V{V _receiver67465=_v_66584_s.get();V _method67466=this->_literals[111];V _method=j::get(_receiver67465,_method67466);j::Args _params67467=j::Args{_v_66585_x,_v_66586_y,this->_literals[110],this->_v_66516_ACCENT.get()};return j::call(_method,_params67467,_receiver67465);})());
(void)(([&]()->V{V _receiver67481=([&]()->V{V _callee67487=this->_v_66427_ring.get();return j::call(_callee67487,j::Args{_v_66584_s.get(),V(12.0),([&]()->V{V _obj67484=j::object();j::put(_obj67484,this->_literals[26],([&]()->V{V _lhs67485=_v_66587_r;V _rhs67486=V(3.0);return V(j::number(_lhs67485)-j::number(_rhs67486));})());return _obj67484;})()});})();V _method67482=this->_literals[112];V _method=j::get(_receiver67481,_method67482);j::Args _params67483=j::Args{j::function([=](const j::Args &_args_fn66592,const V &_receiver_fn66592,const V &_self_fn66592) mutable ->V{
V _v_66593_point;
V _v_66594_hour;
_v_66593_point=_args_fn66592[0];
_v_66594_hour=_args_fn66592[1];
{
if(j::truth(([&]()->V{V _logical67468=([&]()->V{V _lhs67469=_v_66570_numbers.get();V _rhs67470=this->_literals[89];return V(j::equal(_lhs67469,_rhs67470,true));})();return !j::truth(_logical67468)?([&]()->V{V _logical67471=([&]()->V{V _lhs67472=_v_66570_numbers.get();V _rhs67473=this->_literals[90];return V(j::equal(_lhs67472,_rhs67473,true));})();return j::truth(_logical67471)?([&]()->V{V _lhs67474=([&]()->V{V _lhs67476=_v_66594_hour;V _rhs67477=V(3.0);return V(std::fmod(j::number(_lhs67476),j::number(_rhs67477)));})();V _rhs67475=V(0.0);return V(j::equal(_lhs67474,_rhs67475,true));})():_logical67471;})():_logical67468;})())){(void)(([&]()->V{V _callee67480=this->_v_66366_label.get();return j::call(_callee67480,([&](){j::Args _args67478;_args67478.push_back(_v_66584_s.get());for(const auto &_v:j::elements(_v_66593_point))_args67478.push_back(_v);_args67478.push_back(([&]()->V{V _logical67479=_v_66594_hour;return !j::truth(_logical67479)?V(12.0):_logical67479;})());return _args67478;})());})());
}

}

return V{};
},2)};return j::call(_method,_params67483,_receiver67481);})());

}

return V{};
},2)});})();
return ([&]()->V{V _callee67489=this->_v_66550_framing.get();return j::call(_callee67489,j::Args{_v_66581_made,_v_66572_framed.get()});})();

}

return V{};
},1);
this->_v_66596_progressBar.get()=j::function([=](const j::Args &_args_fn66597,const V &_receiver_fn66597,const V &_self_fn66597) mutable ->V{
V _v_66598_o;
_v_66598_o=_args_fn66597[0];
{
V _v_66599_p;
j::Cell _v_66600_min;
j::Cell _v_66601_max;
j::Cell _v_66602_value;
V _v_66603_live;
V _v_66604_words;
j::Cell _v_66605_label;
j::Cell _v_66606_width;
j::Cell _v_66607_style;
j::Cell _v_66608_percent;
j::Cell _v_66609_fill;
j::Cell _v_66610_smooth;
j::Cell _v_66611_loop;
V _v_66612_cols;
j::Cell _v_66613_share;
V _v_66616_timing;
V _v_66617_note;
_v_66599_p=([&]()->V{V _callee67491=this->_v_66382_optionsOf.get();return j::call(_callee67491,j::Args{this->_literals[113],_v_66598_o,([&]()->V{j::Args _array67490;_array67490.push_back(this->_literals[114]);_array67490.push_back(this->_literals[32]);_array67490.push_back(this->_literals[33]);_array67490.push_back(this->_literals[115]);_array67490.push_back(this->_literals[68]);_array67490.push_back(this->_literals[103]);_array67490.push_back(this->_literals[116]);_array67490.push_back(this->_literals[117]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array67490.push_back(_value);return j::array(std::move(_array67490));})()});})();
_v_66600_min.get()=([&]()->V{V _callee67492=this->_v_66381_numberOf.get();return j::call(_callee67492,j::Args{this->_literals[118],j::get(_v_66599_p,this->_literals[32]),V(0.0)});})();
_v_66601_max.get()=([&]()->V{V _callee67493=this->_v_66381_numberOf.get();return j::call(_callee67493,j::Args{this->_literals[119],j::get(_v_66599_p,this->_literals[33]),V(1.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _lhs67494=_v_66601_max.get();V _rhs67495=_v_66600_min.get();return j::binary(">",_lhs67494,_rhs67495);})()))){(void)(([&]()->V{V _callee67498=this->_v_66361_fail.get();return j::call(_callee67498,j::Args{([&]()->V{std::u16string _text67496;_text67496+=u"progressBar's max takes a number above its min, ";_text67496+=j::string(_v_66600_min.get());_text67496+=u", not ";_text67496+=j::string(([&]()->V{V _callee67497=this->_v_66384_show.get();return j::call(_callee67497,j::Args{j::get(_v_66599_p,this->_literals[33])});})());_text67496+=u"";return V(std::move(_text67496));})()});})());
}
_v_66602_value.get()=([&]()->V{V _callee67504=this->_v_66554_amountOf.get();return j::call(_callee67504,j::Args{this->_literals[120],j::get(_v_66599_p,this->_literals[114]),_v_66600_min.get(),_v_66601_max.get(),([&]()->V{V _logical67499=([&]()->V{V _lhs67500=_v_66600_min.get();V _rhs67501=V(0.0);return V(j::equal(_lhs67500,_rhs67501,true));})();return j::truth(_logical67499)?([&]()->V{V _lhs67502=_v_66601_max.get();V _rhs67503=V(1.0);return V(j::equal(_lhs67502,_rhs67503,true));})():_logical67499;})()});})();
_v_66603_live=([&]()->V{V _lhs67505=j::unary("typeof",_v_66602_value.get());V _rhs67506=this->_literals[72];return V(j::equal(_lhs67505,_rhs67506,true));})();
_v_66604_words=([&]()->V{V _callee67507=this->_v_66386_textOf.get();return j::call(_callee67507,j::Args{this->_literals[121],j::get(_v_66599_p,this->_literals[115])});})();
_v_66605_label.get()=(j::truth(_v_66604_words)?([&]()->V{std::u16string _text67508;_text67508+=u"";_text67508+=j::string(_v_66604_words);_text67508+=u" ";return V(std::move(_text67508));})():this->_literals[69]);
_v_66606_width.get()=([&]()->V{V _callee67509=this->_v_66388_wholeOf.get();return j::call(_callee67509,j::Args{this->_literals[122],j::get(_v_66599_p,this->_literals[68]),V(30.0),V(3.0),V(300.0)});})();
_v_66607_style.get()=([&]()->V{V _callee67511=this->_v_66389_wordOf.get();return j::call(_callee67511,j::Args{this->_literals[123],j::get(_v_66599_p,this->_literals[103]),([&]()->V{j::Args _array67510;_array67510.push_back(this->_literals[124]);_array67510.push_back(this->_literals[125]);_array67510.push_back(this->_literals[126]);return j::array(std::move(_array67510));})(),this->_literals[124]});})();
_v_66608_percent.get()=([&]()->V{V _callee67512=this->_v_66378_boolOf.get();return j::call(_callee67512,j::Args{this->_literals[127],j::get(_v_66599_p,this->_literals[116]),V(true)});})();
_v_66609_fill.get()=([&]()->V{V _callee67513=this->_v_66381_numberOf.get();return j::call(_callee67513,j::Args{this->_literals[128],j::get(_v_66599_p,this->_literals[117]),V(4.0),V(0.1),V(59.0)});})();
_v_66610_smooth.get()=j::get(this->_v_66375_ease.get(),this->_literals[129]);
_v_66611_loop.get()=([&]()->V{V _callee67516=this->_v_66380_loopOf.get();return j::call(_callee67516,j::Args{([&]()->V{V _lhs67514=_v_66609_fill.get();V _rhs67515=V(1.0);return j::binary("+",_lhs67514,_rhs67515);})(),V(true)});})();
_v_66612_cols=([&]()->V{V _lhs67517=([&]()->V{V _lhs67519=j::get(_v_66605_label.get(),this->_literals[35]);V _rhs67520=_v_66606_width.get();return j::binary("+",_lhs67519,_rhs67520);})();V _rhs67518=(j::truth(_v_66608_percent.get())?V(5.0):V(0.0));return j::binary("+",_lhs67517,_rhs67518);})();
_v_66613_share.get()=j::function([=](const j::Args &_args_fn66614,const V &_receiver_fn66614,const V &_self_fn66614) mutable ->V{
V _v_66615_v;
_v_66615_v=_args_fn66614[0];
return ([&]()->V{V _lhs67521=([&]()->V{V _lhs67523=_v_66615_v;V _rhs67524=_v_66600_min.get();return V(j::number(_lhs67523)-j::number(_rhs67524));})();V _rhs67522=([&]()->V{V _lhs67525=_v_66601_max.get();V _rhs67526=_v_66600_min.get();return V(j::number(_lhs67525)-j::number(_rhs67526));})();return V(j::number(_lhs67521)/j::number(_rhs67522));})();
return V{};
},1);
_v_66616_timing=(j::truth(_v_66603_live)?([&]()->V{V _obj67527=j::object();j::put(_obj67527,this->_literals[101],V(4.0));j::put(_obj67527,this->_literals[97],V(true));return _obj67527;})():(j::truth(([&]()->V{V _lhs67528=_v_66602_value.get();V _rhs67529=j::builtin("undefined");return V(j::equal(_lhs67528,_rhs67529,true));})())?([&]()->V{V _obj67530=j::object();j::put(_obj67530,this->_literals[101],V(24.0));j::put(_obj67530,this->_literals[102],_v_66611_loop.get());j::put(_obj67530,this->_literals[130],_v_66609_fill.get());return _obj67530;})():([&]()->V{V _obj67531=j::object();j::put(_obj67531,this->_literals[101],V(0.0));return _obj67531;})()));
_v_66617_note=(j::truth(_v_66603_live)?this->_literals[131]:(j::truth(([&]()->V{V _lhs67532=_v_66602_value.get();V _rhs67533=j::builtin("undefined");return V(j::equal(_lhs67532,_rhs67533,true));})())?this->_literals[132]:([&]()->V{std::u16string _text67534;_text67534+=u"a progress bar at ";_text67534+=j::string(([&]()->V{V _number67538=([&]()->V{V _lhs67539=([&]()->V{V _callee67541=_v_66613_share.get();return j::call(_callee67541,j::Args{_v_66602_value.get()});})();V _rhs67540=V(100.0);return V(j::number(_lhs67539)*j::number(_rhs67540));})();return V(std::floor(j::number(_number67538)+.5));})());_text67534+=u"%";return V(std::move(_text67534));})()));
return ([&]()->V{V _callee67674=this->_v_66362_piece.get();return j::call(_callee67674,j::Args{([&]()->V{V _obj67542=j::object();V _spread67543=([&]()->V{V _callee67548=this->_v_66545_naming.get();return j::call(_callee67548,j::Args{_v_66599_p,([&]()->V{V _logical67544=([&]()->V{V _receiver67545=_v_66605_label.get();V _method67546=this->_literals[133];V _method=j::get(_receiver67545,_method67546);j::Args _params67547=j::Args{};return j::call(_method,_params67547,_receiver67545);})();return !j::truth(_logical67544)?this->_literals[134]:_logical67544;})(),_v_66617_note});})();for(const auto &_key:j::keys(_spread67543))j::put(_obj67542,_key,j::get(_spread67543,_key));j::put(_obj67542,this->_literals[99],this->_literals[135]);j::put(_obj67542,this->_literals[1],_v_66612_cols);j::put(_obj67542,this->_literals[3],V(1.0));V _spread67549=_v_66616_timing;for(const auto &_key:j::keys(_spread67549))j::put(_obj67542,_key,j::get(_spread67549,_key));j::put(_obj67542,this->_literals[71],([&]()->V{V _callee67551=this->_v_66522_tones.get();return j::call(_callee67551,j::Args{([&]()->V{V _callee67550=this->_v_66521_themed.get();return j::call(_callee67550,j::Args{this->_literals[136],j::get(_v_66599_p,this->_literals[18])});})()});})());return _obj67542;})(),j::function([=](const j::Args &_args_fn66618,const V &_receiver_fn66618,const V &_self_fn66618) mutable ->V{
V _v_66619_t;
V _v_66620_s;
_v_66619_t=_args_fn66618[0];
_v_66620_s=_args_fn66618[1];
{
V _v_66621_k;
V _v_66622_color;
V _v_66623_x;
_v_66621_k=(j::truth(([&]()->V{V _lhs67552=j::unary("typeof",_v_66602_value.get());V _rhs67553=this->_literals[72];return V(j::equal(_lhs67552,_rhs67553,true));})())?([&]()->V{V _callee67555=_v_66613_share.get();return j::call(_callee67555,j::Args{([&]()->V{V _callee67554=_v_66602_value.get();return j::call(_callee67554,j::Args{});})()});})():(j::truth(([&]()->V{V _lhs67556=_v_66602_value.get();V _rhs67557=j::builtin("undefined");return V(!j::equal(_lhs67556,_rhs67557,true));})())?([&]()->V{V _callee67558=_v_66613_share.get();return j::call(_callee67558,j::Args{_v_66602_value.get()});})():([&]()->V{V _callee67572=_v_66610_smooth.get();return j::call(_callee67572,j::Args{([&]()->V{V _receiver67569=j::builtin("Math");V _method67570=this->_literals[32];V _method=j::get(_receiver67569,_method67570);j::Args _params67571=j::Args{V(1.0),([&]()->V{V _lhs67559=([&]()->V{V _lhs67561=([&]()->V{V _lhs67563=([&]()->V{V _lhs67565=_v_66619_t;V _rhs67566=_v_66611_loop.get();return V(std::fmod(j::number(_lhs67565),j::number(_rhs67566)));})();V _rhs67564=_v_66611_loop.get();return j::binary("+",_lhs67563,_rhs67564);})();V _rhs67562=_v_66611_loop.get();return V(std::fmod(j::number(_lhs67561),j::number(_rhs67562)));})();V _rhs67560=_v_66609_fill.get();return V(j::number(_lhs67559)/j::number(_rhs67560));})()};return j::call(_method,_params67571,_receiver67569);})()});})()));
_v_66622_color=(j::truth(([&]()->V{V _lhs67573=_v_66621_k;V _rhs67574=V(1.0);return j::binary(">=",_lhs67573,_rhs67574);})())?this->_v_66518_GOOD.get():this->_v_66516_ACCENT.get());
(void)(([&]()->V{V _receiver67575=_v_66620_s;V _method67576=this->_literals[137];V _method=j::get(_receiver67575,_method67576);j::Args _params67577=j::Args{V(0.0),V(0.0),_v_66605_label.get()};return j::call(_method,_params67577,_receiver67575);})());
_v_66623_x=j::get(_v_66605_label.get(),this->_literals[35]);
if(j::truth(([&]()->V{V _lhs67578=_v_66607_style.get();V _rhs67579=this->_literals[125];return V(j::equal(_lhs67578,_rhs67579,true));})())){
V _v_66624_n;
_v_66624_n=([&]()->V{V _number67584=([&]()->V{V _lhs67585=_v_66621_k;V _rhs67586=([&]()->V{V _lhs67587=_v_66606_width.get();V _rhs67588=V(2.0);return V(j::number(_lhs67587)-j::number(_rhs67588));})();return V(j::number(_lhs67585)*j::number(_rhs67586));})();return V(std::floor(j::number(_number67584)+.5));})();
(void)(([&]()->V{V _receiver67589=_v_66620_s;V _method67590=this->_literals[137];V _method=j::get(_receiver67589,_method67590);j::Args _params67591=j::Args{_v_66623_x,V(0.0),this->_literals[138],this->_v_66517_MUTED.get()};return j::call(_method,_params67591,_receiver67589);})());
{V _v_66625_i;
_v_66625_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs67592=_v_66625_i;V _rhs67593=([&]()->V{V _lhs67594=_v_66606_width.get();V _rhs67595=V(2.0);return V(j::number(_lhs67594)-j::number(_rhs67595));})();return j::binary("<",_lhs67592,_rhs67593);})());(void)(j::increment(_v_66625_i,1,false))){(void)(([&]()->V{V _receiver67604=_v_66620_s;V _method67605=this->_literals[111];V _method=j::get(_receiver67604,_method67605);j::Args _params67606=j::Args{([&]()->V{V _lhs67596=([&]()->V{V _lhs67598=_v_66623_x;V _rhs67599=V(1.0);return j::binary("+",_lhs67598,_rhs67599);})();V _rhs67597=_v_66625_i;return j::binary("+",_lhs67596,_rhs67597);})(),V(0.0),(j::truth(([&]()->V{V _lhs67600=_v_66625_i;V _rhs67601=_v_66624_n;return j::binary("<",_lhs67600,_rhs67601);})())?this->_literals[139]:this->_literals[140]),(j::truth(([&]()->V{V _lhs67602=_v_66625_i;V _rhs67603=_v_66624_n;return j::binary("<",_lhs67602,_rhs67603);})())?_v_66622_color:this->_v_66517_MUTED.get())};return j::call(_method,_params67606,_receiver67604);})());
}}
(void)(([&]()->V{V _receiver67611=_v_66620_s;V _method67612=this->_literals[137];V _method=j::get(_receiver67611,_method67612);j::Args _params67613=j::Args{([&]()->V{V _lhs67607=([&]()->V{V _lhs67609=_v_66623_x;V _rhs67610=_v_66606_width.get();return j::binary("+",_lhs67609,_rhs67610);})();V _rhs67608=V(1.0);return V(j::number(_lhs67607)-j::number(_rhs67608));})(),V(0.0),this->_literals[141],this->_v_66517_MUTED.get()};return j::call(_method,_params67613,_receiver67611);})());

}
else {if(j::truth(([&]()->V{V _lhs67614=_v_66607_style.get();V _rhs67615=this->_literals[126];return V(j::equal(_lhs67614,_rhs67615,true));})())){
V _v_66626_n;
_v_66626_n=([&]()->V{V _number67618=([&]()->V{V _lhs67619=_v_66621_k;V _rhs67620=_v_66606_width.get();return V(j::number(_lhs67619)*j::number(_rhs67620));})();return V(std::floor(j::number(_number67618)+.5));})();
{V _v_66627_i;
_v_66627_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs67621=_v_66627_i;V _rhs67622=_v_66606_width.get();return j::binary("<",_lhs67621,_rhs67622);})());(void)(j::increment(_v_66627_i,1,false))){(void)(([&]()->V{V _receiver67629=_v_66620_s;V _method67630=this->_literals[111];V _method=j::get(_receiver67629,_method67630);j::Args _params67631=j::Args{([&]()->V{V _lhs67623=_v_66623_x;V _rhs67624=_v_66627_i;return j::binary("+",_lhs67623,_rhs67624);})(),V(0.0),(j::truth(([&]()->V{V _lhs67625=_v_66627_i;V _rhs67626=_v_66626_n;return j::binary("<",_lhs67625,_rhs67626);})())?this->_literals[142]:this->_literals[143]),(j::truth(([&]()->V{V _lhs67627=_v_66627_i;V _rhs67628=_v_66626_n;return j::binary("<",_lhs67627,_rhs67628);})())?_v_66622_color:this->_v_66517_MUTED.get())};return j::call(_method,_params67631,_receiver67629);})());
}}

}
else {
V _v_66628_eighths;
_v_66628_eighths=([&]()->V{V _number67636=([&]()->V{V _lhs67637=([&]()->V{V _lhs67639=_v_66621_k;V _rhs67640=_v_66606_width.get();return V(j::number(_lhs67639)*j::number(_rhs67640));})();V _rhs67638=V(8.0);return V(j::number(_lhs67637)*j::number(_rhs67638));})();return V(std::floor(j::number(_number67636)+.5));})();
{V _v_66629_i;
_v_66629_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs67641=_v_66629_i;V _rhs67642=_v_66606_width.get();return j::binary("<",_lhs67641,_rhs67642);})());(void)(j::increment(_v_66629_i,1,false))){
V _v_66630_e;
_v_66630_e=([&]()->V{V _lhs67643=_v_66628_eighths;V _rhs67644=([&]()->V{V _lhs67645=_v_66629_i;V _rhs67646=V(8.0);return V(j::number(_lhs67645)*j::number(_rhs67646));})();return V(j::number(_lhs67643)-j::number(_rhs67644));})();
(void)(([&]()->V{V _receiver67657=_v_66620_s;V _method67658=this->_literals[111];V _method=j::get(_receiver67657,_method67658);j::Args _params67659=j::Args{([&]()->V{V _lhs67647=_v_66623_x;V _rhs67648=_v_66629_i;return j::binary("+",_lhs67647,_rhs67648);})(),V(0.0),(j::truth(([&]()->V{V _lhs67649=_v_66630_e;V _rhs67650=V(8.0);return j::binary(">=",_lhs67649,_rhs67650);})())?this->_literals[144]:(j::truth(([&]()->V{V _lhs67651=_v_66630_e;V _rhs67652=V(0.0);return j::binary(">",_lhs67651,_rhs67652);})())?j::get(this->_v_66595_EIGHTHS.get(),([&]()->V{V _lhs67653=_v_66630_e;V _rhs67654=V(1.0);return V(j::number(_lhs67653)-j::number(_rhs67654));})()):this->_literals[145])),(j::truth(([&]()->V{V _lhs67655=_v_66630_e;V _rhs67656=V(0.0);return j::binary(">",_lhs67655,_rhs67656);})())?_v_66622_color:this->_v_66517_MUTED.get())};return j::call(_method,_params67659,_receiver67657);})());

}
}

}

}
if(j::truth(_v_66608_percent.get())){(void)(([&]()->V{V _receiver67671=_v_66620_s;V _method67672=this->_literals[137];V _method=j::get(_receiver67671,_method67672);j::Args _params67673=j::Args{([&]()->V{V _lhs67660=_v_66623_x;V _rhs67661=_v_66606_width.get();return j::binary("+",_lhs67660,_rhs67661);})(),V(0.0),([&]()->V{V _receiver67662=([&]()->V{std::u16string _text67665;_text67665+=u"";_text67665+=j::string(([&]()->V{V _number67668=([&]()->V{V _lhs67669=_v_66621_k;V _rhs67670=V(100.0);return V(j::number(_lhs67669)*j::number(_rhs67670));})();return V(std::floor(j::number(_number67668)+.5));})());_text67665+=u"%";return V(std::move(_text67665));})();V _method67663=this->_literals[146];V _method=j::get(_receiver67662,_method67663);j::Args _params67664=j::Args{V(5.0)};return j::call(_method,_params67664,_receiver67662);})()};return j::call(_method,_params67673,_receiver67671);})());
}

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_66632_spinner.get()=j::function([=](const j::Args &_args_fn66633,const V &_receiver_fn66633,const V &_self_fn66633) mutable ->V{
V _v_66634_kind;
V _v_66635_o;
V _default67675=_args_fn66633[0];if(_default67675.kind==V::Undefined||_default67675.kind==V::Hole)_default67675=this->_literals[126];
_v_66634_kind=_default67675;
_v_66635_o=_args_fn66633[1];
{
V _v_66636_name;
V _v_66637_p;
V _v_66638_label;
j::Cell _v_66639_frames;
j::Cell _v_66640_loop;
j::Cell _v_66641_words;
_v_66636_name=([&]()->V{V _callee67679=this->_v_66389_wordOf.get();return j::call(_callee67679,j::Args{this->_literals[147],_v_66634_kind,([&]()->V{V _receiver67676=j::builtin("Object");V _method67677=this->_literals[148];V _method=j::get(_receiver67676,_method67677);j::Args _params67678=j::Args{this->_v_66631_spinners.get()};return j::call(_method,_params67678,_receiver67676);})(),this->_literals[126]});})();
_v_66637_p=([&]()->V{V _callee67681=this->_v_66382_optionsOf.get();return j::call(_callee67681,j::Args{this->_literals[147],_v_66635_o,([&]()->V{j::Args _array67680;_array67680.push_back(this->_literals[115]);_array67680.push_back(this->_literals[149]);_array67680.push_back(this->_literals[150]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array67680.push_back(_value);return j::array(std::move(_array67680));})()});})();
_v_66638_label=([&]()->V{V _callee67682=this->_v_66386_textOf.get();return j::call(_callee67682,j::Args{this->_literals[151],j::get(_v_66637_p,this->_literals[115])});})();
_v_66639_frames.get()=j::get(this->_v_66631_spinners.get(),_v_66636_name);
_v_66640_loop.get()=(j::truth(([&]()->V{V _lhs67683=j::get(_v_66637_p,this->_literals[150]);V _rhs67684=j::builtin("undefined");return V(!j::equal(_lhs67683,_rhs67684,true));})())?([&]()->V{V _callee67685=this->_v_66383_secondsOf.get();return j::call(_callee67685,j::Args{this->_literals[147],_v_66637_p,V(1.0)});})():([&]()->V{V _callee67689=this->_v_66380_loopOf.get();return j::call(_callee67689,j::Args{([&]()->V{V _callee67688=this->_v_66383_secondsOf.get();return j::call(_callee67688,j::Args{this->_literals[147],_v_66637_p,([&]()->V{V _lhs67686=j::get(_v_66639_frames.get(),this->_literals[35]);V _rhs67687=V(10.0);return V(j::number(_lhs67686)/j::number(_rhs67687));})()});})()});})());
_v_66641_words.get()=(j::truth(_v_66638_label)?([&]()->V{std::u16string _text67690;_text67690+=u" ";_text67690+=j::string(_v_66638_label);_text67690+=u"";return V(std::move(_text67690));})():this->_literals[69]);
return ([&]()->V{V _callee67740=this->_v_66362_piece.get();return j::call(_callee67740,j::Args{([&]()->V{V _obj67691=j::object();V _spread67692=([&]()->V{V _callee67697=this->_v_66545_naming.get();return j::call(_callee67697,j::Args{_v_66637_p,([&]()->V{V _logical67693=_v_66638_label;return !j::truth(_logical67693)?([&]()->V{std::u16string _text67694;_text67694+=u"";_text67694+=j::string(_v_66636_name);_text67694+=u" spinner";return V(std::move(_text67694));})():_logical67693;})(),([&]()->V{std::u16string _text67695;_text67695+=u"a ";_text67695+=j::string(_v_66636_name);_text67695+=u" spinner";_text67695+=j::string((j::truth(_v_66641_words.get())?([&]()->V{std::u16string _text67696;_text67696+=u",";_text67696+=j::string(_v_66641_words.get());_text67696+=u"";return V(std::move(_text67696));})():this->_literals[69]));_text67695+=u"";return V(std::move(_text67695));})()});})();for(const auto &_key:j::keys(_spread67692))j::put(_obj67691,_key,j::get(_spread67692,_key));j::put(_obj67691,this->_literals[99],this->_literals[135]);j::put(_obj67691,this->_literals[1],([&]()->V{V _lhs67698=V(1.0);V _rhs67699=j::get(_v_66641_words.get(),this->_literals[35]);return j::binary("+",_lhs67698,_rhs67699);})());j::put(_obj67691,this->_literals[3],V(1.0));j::put(_obj67691,this->_literals[101],V(30.0));j::put(_obj67691,this->_literals[71],([&]()->V{V _callee67701=this->_v_66522_tones.get();return j::call(_callee67701,j::Args{([&]()->V{V _callee67700=this->_v_66521_themed.get();return j::call(_callee67700,j::Args{this->_literals[152],j::get(_v_66637_p,this->_literals[18])});})()});})());j::put(_obj67691,this->_literals[102],_v_66640_loop.get());return _obj67691;})(),j::function([=](const j::Args &_args_fn66642,const V &_receiver_fn66642,const V &_self_fn66642) mutable ->V{
V _v_66643_t;
V _v_66644_s;
_v_66643_t=_args_fn66642[0];
_v_66644_s=_args_fn66642[1];
{
V _v_66645_k;
_v_66645_k=([&]()->V{V _number67714=([&]()->V{V _lhs67715=([&]()->V{V _lhs67717=([&]()->V{V _lhs67719=([&]()->V{V _lhs67721=([&]()->V{V _lhs67723=([&]()->V{V _lhs67725=_v_66643_t;V _rhs67726=_v_66640_loop.get();return V(std::fmod(j::number(_lhs67725),j::number(_rhs67726)));})();V _rhs67724=_v_66640_loop.get();return j::binary("+",_lhs67723,_rhs67724);})();V _rhs67722=_v_66640_loop.get();return V(std::fmod(j::number(_lhs67721),j::number(_rhs67722)));})();V _rhs67720=j::get(_v_66639_frames.get(),this->_literals[35]);return V(j::number(_lhs67719)*j::number(_rhs67720));})();V _rhs67718=_v_66640_loop.get();return V(j::number(_lhs67717)/j::number(_rhs67718));})();V _rhs67716=V(1e-9);return j::binary("+",_lhs67715,_rhs67716);})();return V(std::floor(j::number(_number67714)));})();
(void)(([&]()->V{V _receiver67734=_v_66644_s;V _method67735=this->_literals[111];V _method=j::get(_receiver67734,_method67735);j::Args _params67736=j::Args{V(0.0),V(0.0),j::get(_v_66639_frames.get(),([&]()->V{V _receiver67731=j::builtin("Math");V _method67732=this->_literals[32];V _method=j::get(_receiver67731,_method67732);j::Args _params67733=j::Args{([&]()->V{V _lhs67727=j::get(_v_66639_frames.get(),this->_literals[35]);V _rhs67728=V(1.0);return V(j::number(_lhs67727)-j::number(_rhs67728));})(),_v_66645_k};return j::call(_method,_params67733,_receiver67731);})()),this->_v_66516_ACCENT.get()};return j::call(_method,_params67736,_receiver67734);})());
(void)(([&]()->V{V _receiver67737=_v_66644_s;V _method67738=this->_literals[137];V _method=j::get(_receiver67737,_method67738);j::Args _params67739=j::Args{V(1.0),V(0.0),_v_66641_words.get()};return j::call(_method,_params67739,_receiver67737);})());

}

return V{};
},2)});})();

}

return V{};
},0);
this->_v_66646_gauge.get()=j::function([=](const j::Args &_args_fn66647,const V &_receiver_fn66647,const V &_self_fn66647) mutable ->V{
V _v_66648_o;
_v_66648_o=_args_fn66647[0];
{
V _v_66649_p;
j::Cell _v_66650_min;
j::Cell _v_66651_max;
j::Cell _v_66652_value;
j::Cell _v_66653_title;
j::Cell _v_66654_unit;
j::Cell _v_66655_framed;
j::Cell _v_66656_own;
j::Cell _v_66657_loop;
j::Cell _v_66658_wander;
V _v_66661_timing;
V _v_66662_note;
V _v_66663_made;
_v_66649_p=([&]()->V{V _callee67742=this->_v_66382_optionsOf.get();return j::call(_callee67742,j::Args{this->_literals[153],_v_66648_o,([&]()->V{j::Args _array67741;_array67741.push_back(this->_literals[114]);_array67741.push_back(this->_literals[115]);_array67741.push_back(this->_literals[82]);_array67741.push_back(this->_literals[32]);_array67741.push_back(this->_literals[33]);_array67741.push_back(this->_literals[154]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array67741.push_back(_value);return j::array(std::move(_array67741));})()});})();
_v_66650_min.get()=([&]()->V{V _callee67743=this->_v_66381_numberOf.get();return j::call(_callee67743,j::Args{this->_literals[155],j::get(_v_66649_p,this->_literals[32]),V(0.0)});})();
_v_66651_max.get()=([&]()->V{V _callee67744=this->_v_66381_numberOf.get();return j::call(_callee67744,j::Args{this->_literals[156],j::get(_v_66649_p,this->_literals[33]),V(100.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _lhs67745=_v_66651_max.get();V _rhs67746=_v_66650_min.get();return j::binary(">",_lhs67745,_rhs67746);})()))){(void)(([&]()->V{V _callee67749=this->_v_66361_fail.get();return j::call(_callee67749,j::Args{([&]()->V{std::u16string _text67747;_text67747+=u"gauge's max takes a number above its min, ";_text67747+=j::string(_v_66650_min.get());_text67747+=u", not ";_text67747+=j::string(([&]()->V{V _callee67748=this->_v_66384_show.get();return j::call(_callee67748,j::Args{j::get(_v_66649_p,this->_literals[33])});})());_text67747+=u"";return V(std::move(_text67747));})()});})());
}
_v_66652_value.get()=([&]()->V{V _callee67750=this->_v_66554_amountOf.get();return j::call(_callee67750,j::Args{this->_literals[157],j::get(_v_66649_p,this->_literals[114]),_v_66650_min.get(),_v_66651_max.get(),V(false)});})();
_v_66653_title.get()=([&]()->V{V _callee67751=this->_v_66386_textOf.get();return j::call(_callee67751,j::Args{this->_literals[158],j::get(_v_66649_p,this->_literals[115])});})();
_v_66654_unit.get()=(j::truth(([&]()->V{V _lhs67752=j::get(_v_66649_p,this->_literals[154]);V _rhs67753=j::builtin("undefined");return V(j::equal(_lhs67752,_rhs67753,true));})())?this->_literals[159]:([&]()->V{V _callee67754=this->_v_66386_textOf.get();return j::call(_callee67754,j::Args{this->_literals[160],j::get(_v_66649_p,this->_literals[154])});})());
_v_66655_framed.get()=([&]()->V{V _callee67755=this->_v_66378_boolOf.get();return j::call(_callee67755,j::Args{this->_literals[161],j::get(_v_66649_p,this->_literals[82]),V(true)});})();
_v_66656_own.get()=([&]()->V{V _callee67756=this->_v_66521_themed.get();return j::call(_callee67756,j::Args{this->_literals[162],j::get(_v_66649_p,this->_literals[18])});})();
_v_66657_loop.get()=V(12.0);
_v_66658_wander.get()=j::function([=](const j::Args &_args_fn66659,const V &_receiver_fn66659,const V &_self_fn66659) mutable ->V{
V _v_66660_t;
_v_66660_t=_args_fn66659[0];
return ([&]()->V{V _lhs67757=V(0.15);V _rhs67758=([&]()->V{V _lhs67759=V(0.8);V _rhs67760=([&]()->V{V _callee67762=this->_v_66376_loopNoise.get();return j::call(_callee67762,j::Args{V(0.3),V(0.7),_v_66660_t,_v_66657_loop.get(),([&]()->V{V _obj67761=j::object();j::put(_obj67761,this->_literals[26],V(0.9));return _obj67761;})()});})();return V(j::number(_lhs67759)*j::number(_rhs67760));})();return j::binary("+",_lhs67757,_rhs67758);})();
return V{};
},1);
_v_66661_timing=(j::truth(([&]()->V{V _lhs67763=j::unary("typeof",_v_66652_value.get());V _rhs67764=this->_literals[72];return V(j::equal(_lhs67763,_rhs67764,true));})())?([&]()->V{V _obj67765=j::object();j::put(_obj67765,this->_literals[101],V(4.0));j::put(_obj67765,this->_literals[97],V(true));return _obj67765;})():(j::truth(([&]()->V{V _lhs67766=_v_66652_value.get();V _rhs67767=j::builtin("undefined");return V(j::equal(_lhs67766,_rhs67767,true));})())?([&]()->V{V _obj67768=j::object();j::put(_obj67768,this->_literals[101],V(24.0));j::put(_obj67768,this->_literals[102],_v_66657_loop.get());return _obj67768;})():([&]()->V{V _obj67769=j::object();j::put(_obj67769,this->_literals[101],V(0.0));return _obj67769;})()));
_v_66662_note=(j::truth(([&]()->V{V _lhs67770=j::unary("typeof",_v_66652_value.get());V _rhs67771=this->_literals[72];return V(j::equal(_lhs67770,_rhs67771,true));})())?this->_literals[163]:(j::truth(([&]()->V{V _lhs67772=_v_66652_value.get();V _rhs67773=j::builtin("undefined");return V(j::equal(_lhs67772,_rhs67773,true));})())?this->_literals[164]:([&]()->V{std::u16string _text67774;_text67774+=u"a gauge reading ";_text67774+=j::string(j::unary("+",([&]()->V{V _receiver67775=_v_66652_value.get();V _method67776=this->_literals[76];V _method=j::get(_receiver67775,_method67776);j::Args _params67777=j::Args{V(2.0)};return j::call(_method,_params67777,_receiver67775);})()));_text67774+=u"";_text67774+=j::string(_v_66654_unit.get());_text67774+=u"";return V(std::move(_text67774));})()));
_v_66663_made=([&]()->V{V _callee67832=this->_v_66362_piece.get();return j::call(_callee67832,j::Args{([&]()->V{V _obj67778=j::object();V _spread67779=([&]()->V{V _callee67781=this->_v_66545_naming.get();return j::call(_callee67781,j::Args{_v_66649_p,([&]()->V{V _logical67780=_v_66653_title.get();return !j::truth(_logical67780)?this->_literals[157]:_logical67780;})(),_v_66662_note});})();for(const auto &_key:j::keys(_spread67779))j::put(_obj67778,_key,j::get(_spread67779,_key));j::put(_obj67778,this->_literals[99],this->_literals[165]);j::put(_obj67778,this->_literals[1],V(25.0));j::put(_obj67778,this->_literals[3],V(12.0));V _spread67782=_v_66661_timing;for(const auto &_key:j::keys(_spread67782))j::put(_obj67778,_key,j::get(_spread67782,_key));j::put(_obj67778,this->_literals[71],([&]()->V{V _callee67783=this->_v_66522_tones.get();return j::call(_callee67783,j::Args{_v_66656_own.get()});})());return _obj67778;})(),j::function([=](const j::Args &_args_fn66664,const V &_receiver_fn66664,const V &_self_fn66664) mutable ->V{
V _v_66665_t;
V _v_66666_s;
_v_66665_t=_args_fn66664[0];
_v_66666_s=_args_fn66664[1];
{
V _v_66667_k;
V _v_66668_color;
_v_66667_k=(j::truth(([&]()->V{V _lhs67784=j::unary("typeof",_v_66652_value.get());V _rhs67785=this->_literals[72];return V(j::equal(_lhs67784,_rhs67785,true));})())?([&]()->V{V _lhs67786=([&]()->V{V _lhs67788=([&]()->V{V _callee67790=_v_66652_value.get();return j::call(_callee67790,j::Args{});})();V _rhs67789=_v_66650_min.get();return V(j::number(_lhs67788)-j::number(_rhs67789));})();V _rhs67787=([&]()->V{V _lhs67791=_v_66651_max.get();V _rhs67792=_v_66650_min.get();return V(j::number(_lhs67791)-j::number(_rhs67792));})();return V(j::number(_lhs67786)/j::number(_rhs67787));})():(j::truth(([&]()->V{V _lhs67793=_v_66652_value.get();V _rhs67794=j::builtin("undefined");return V(j::equal(_lhs67793,_rhs67794,true));})())?([&]()->V{V _callee67795=_v_66658_wander.get();return j::call(_callee67795,j::Args{_v_66665_t});})():([&]()->V{V _lhs67796=([&]()->V{V _lhs67798=_v_66652_value.get();V _rhs67799=_v_66650_min.get();return V(j::number(_lhs67798)-j::number(_rhs67799));})();V _rhs67797=([&]()->V{V _lhs67800=_v_66651_max.get();V _rhs67801=_v_66650_min.get();return V(j::number(_lhs67800)-j::number(_rhs67801));})();return V(j::number(_lhs67796)/j::number(_rhs67797));})()));
_v_66668_color=(j::truth(_v_66656_own.get())?this->_v_66516_ACCENT.get():(j::truth(([&]()->V{V _lhs67802=_v_66667_k;V _rhs67803=V(0.85);return j::binary(">",_lhs67802,_rhs67803);})())?this->_v_66520_BAD.get():(j::truth(([&]()->V{V _lhs67804=_v_66667_k;V _rhs67805=V(0.6);return j::binary(">",_lhs67804,_rhs67805);})())?this->_v_66519_WARN.get():this->_v_66518_GOOD.get())));
if(j::truth(_v_66655_framed.get())){(void)(([&]()->V{V _callee67807=this->_v_66369_rect.get();return j::call(_callee67807,j::Args{_v_66666_s,V(0.0),V(0.0),j::get(_v_66666_s,this->_literals[1]),j::get(_v_66666_s,this->_literals[3]),([&]()->V{V _obj67806=j::object();j::put(_obj67806,this->_literals[103],this->_literals[104]);j::put(_obj67806,this->_literals[83],_v_66653_title.get());j::put(_obj67806,this->_literals[18],this->_v_66517_MUTED.get());return _obj67806;})()});})());
}else {if(j::truth(_v_66653_title.get())){(void)(([&]()->V{V _callee67808=this->_v_66416_textAt.get();return j::call(_callee67808,j::Args{_v_66666_s,_v_66653_title.get(),this->_literals[14]});})());
}
}
(void)(([&]()->V{V _callee67810=this->_v_66363_arc.get();return j::call(_callee67810,j::Args{_v_66666_s,V(12.5),V(7.0),V(9.0),j::unary("-",V(0.375)),V(0.375),([&]()->V{V _obj67809=j::object();j::put(_obj67809,this->_literals[105],this->_literals[145]);j::put(_obj67809,this->_literals[18],this->_v_66517_MUTED.get());return _obj67809;})()});})());
(void)(([&]()->V{V _callee67816=this->_v_66363_arc.get();return j::call(_callee67816,j::Args{_v_66666_s,V(12.5),V(7.0),V(9.0),j::unary("-",V(0.375)),([&]()->V{V _lhs67811=j::unary("-",V(0.375));V _rhs67812=([&]()->V{V _lhs67813=V(0.75);V _rhs67814=_v_66667_k;return V(j::number(_lhs67813)*j::number(_rhs67814));})();return j::binary("+",_lhs67811,_rhs67812);})(),([&]()->V{V _obj67815=j::object();j::put(_obj67815,this->_literals[105],this->_literals[144]);j::put(_obj67815,this->_literals[18],_v_66668_color);return _obj67815;})()});})());
(void)(([&]()->V{V _callee67831=this->_v_66366_label.get();return j::call(_callee67831,j::Args{_v_66666_s,V(12.5),V(7.0),([&]()->V{std::u16string _text67817;_text67817+=u"";_text67817+=j::string(([&]()->V{V _number67824=([&]()->V{V _lhs67825=_v_66650_min.get();V _rhs67826=([&]()->V{V _lhs67827=_v_66667_k;V _rhs67828=([&]()->V{V _lhs67829=_v_66651_max.get();V _rhs67830=_v_66650_min.get();return V(j::number(_lhs67829)-j::number(_rhs67830));})();return V(j::number(_lhs67827)*j::number(_rhs67828));})();return j::binary("+",_lhs67825,_rhs67826);})();return V(std::floor(j::number(_number67824)+.5));})());_text67817+=u"";_text67817+=j::string(_v_66654_unit.get());_text67817+=u"";return V(std::move(_text67817));})()});})());

}

return V{};
},2)});})();
return ([&]()->V{V _callee67833=this->_v_66550_framing.get();return j::call(_callee67833,j::Args{_v_66663_made,_v_66655_framed.get()});})();

}

return V{};
},1);
this->_v_66669_sparkline.get()=j::function([=](const j::Args &_args_fn66670,const V &_receiver_fn66670,const V &_self_fn66670) mutable ->V{
V _v_66671_data;
V _v_66672_o;
_v_66671_data=_args_fn66670[0];
_v_66672_o=_args_fn66670[1];
{
V _v_66673_p;
j::Cell _v_66674_numbers;
j::Cell _v_66679_live;
V _v_66680_label;
j::Cell _v_66681_words;
j::Cell _v_66682_width;
j::Cell _v_66683_height;
j::Cell _v_66684_fill;
j::Cell _v_66685_list;
j::Cell _v_66686_range;
j::Cell _v_66691_lo;
j::Cell _v_66692_hi;
j::Cell _v_66693_loop;
j::Cell _v_66694_reading;
j::Cell _v_66697_last;
V _v_66698_cols;
V _v_66699_timing;
V _v_66700_note;
if(j::truth(([&]()->V{V _logical67834=([&]()->V{V _logical67835=([&]()->V{V _logical67836=([&]()->V{V _lhs67837=_v_66671_data;V _rhs67838=j::builtin("undefined");return V(!j::equal(_lhs67837,_rhs67838,true));})();return j::truth(_logical67836)?([&]()->V{V _lhs67839=_v_66671_data;V _rhs67840=V::null();return V(!j::equal(_lhs67839,_rhs67840,true));})():_logical67836;})();return j::truth(_logical67835)?([&]()->V{V _lhs67841=j::unary("typeof",_v_66671_data);V _rhs67842=this->_literals[0];return V(j::equal(_lhs67841,_rhs67842,true));})():_logical67835;})();return j::truth(_logical67834)?j::unary("!",([&]()->V{V _receiver67843=j::builtin("Array");V _method67844=this->_literals[30];V _method=j::get(_receiver67843,_method67844);j::Args _params67845=j::Args{_v_66671_data};return j::call(_method,_params67845,_receiver67843);})()):_logical67834;})())){
if(j::truth(([&]()->V{V _lhs67846=_v_66672_o;V _rhs67847=j::builtin("undefined");return V(!j::equal(_lhs67846,_rhs67847,true));})())){(void)(([&]()->V{V _callee67848=this->_v_66361_fail.get();return j::call(_callee67848,j::Args{this->_literals[166]});})());
}
(void)(([&]()->V{V _assign67849=([&]()->V{j::Args _array67850;_array67850.push_back(j::builtin("undefined"));_array67850.push_back(_v_66671_data);return j::array(std::move(_array67850));})();V _pattern67851=_assign67849;
_v_66671_data=j::get(_pattern67851,V(0));
_v_66672_o=j::get(_pattern67851,V(1));
return _assign67849;})());

}

_v_66673_p=([&]()->V{V _callee67853=this->_v_66382_optionsOf.get();return j::call(_callee67853,j::Args{this->_literals[167],_v_66672_o,([&]()->V{j::Args _array67852;_array67852.push_back(this->_literals[115]);_array67852.push_back(this->_literals[68]);_array67852.push_back(this->_literals[168]);_array67852.push_back(this->_literals[39]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array67852.push_back(_value);return j::array(std::move(_array67852));})()});})();
_v_66674_numbers.get()=j::function([=](const j::Args &_args_fn66675,const V &_receiver_fn66675,const V &_self_fn66675) mutable ->V{
V _v_66676_v;
_v_66676_v=_args_fn66675[0];
return ([&]()->V{V _logical67854=([&]()->V{V _logical67855=([&]()->V{V _receiver67856=j::builtin("Array");V _method67857=this->_literals[30];V _method=j::get(_receiver67856,_method67857);j::Args _params67858=j::Args{_v_66676_v};return j::call(_method,_params67858,_receiver67856);})();return j::truth(_logical67855)?([&]()->V{V _lhs67859=j::get(_v_66676_v,this->_literals[35]);V _rhs67860=V(2.0);return j::binary(">=",_lhs67859,_rhs67860);})():_logical67855;})();return j::truth(_logical67854)?([&]()->V{V _receiver67867=_v_66676_v;V _method67868=this->_literals[169];V _method=j::get(_receiver67867,_method67868);j::Args _params67869=j::Args{j::function([=](const j::Args &_args_fn66677,const V &_receiver_fn66677,const V &_self_fn66677) mutable ->V{
V _v_66678_n;
_v_66678_n=_args_fn66677[0];
return ([&]()->V{V _logical67861=([&]()->V{V _lhs67862=j::unary("typeof",_v_66678_n);V _rhs67863=this->_literals[2];return V(j::equal(_lhs67862,_rhs67863,true));})();return j::truth(_logical67861)?([&]()->V{V _receiver67864=j::builtin("Number");V _method67865=this->_literals[73];V _method=j::get(_receiver67864,_method67865);j::Args _params67866=j::Args{_v_66678_n};return j::call(_method,_params67866,_receiver67864);})():_logical67861;})();
return V{};
},1)};return j::call(_method,_params67869,_receiver67867);})():_logical67854;})();
return V{};
},1);
_v_66679_live.get()=(j::truth(([&]()->V{V _lhs67870=j::unary("typeof",_v_66671_data);V _rhs67871=this->_literals[72];return V(j::equal(_lhs67870,_rhs67871,true));})())?_v_66671_data:V::null());
if(j::truth(([&]()->V{V _logical67872=([&]()->V{V _logical67873=([&]()->V{V _lhs67874=_v_66671_data;V _rhs67875=j::builtin("undefined");return V(!j::equal(_lhs67874,_rhs67875,true));})();return j::truth(_logical67873)?j::unary("!",_v_66679_live.get()):_logical67873;})();return j::truth(_logical67872)?j::unary("!",([&]()->V{V _callee67876=_v_66674_numbers.get();return j::call(_callee67876,j::Args{_v_66671_data});})()):_logical67872;})())){(void)(([&]()->V{V _callee67879=this->_v_66361_fail.get();return j::call(_callee67879,j::Args{([&]()->V{std::u16string _text67877;_text67877+=u"sparkline() takes a list of two or more numbers, such as [3, 5, 2, 8], or a function that returns one, not ";_text67877+=j::string(([&]()->V{V _callee67878=this->_v_66384_show.get();return j::call(_callee67878,j::Args{_v_66671_data});})());_text67877+=u"";return V(std::move(_text67877));})()});})());
}
_v_66680_label=([&]()->V{V _callee67880=this->_v_66386_textOf.get();return j::call(_callee67880,j::Args{this->_literals[170],j::get(_v_66673_p,this->_literals[115])});})();
_v_66681_words.get()=(j::truth(_v_66680_label)?([&]()->V{std::u16string _text67881;_text67881+=u"";_text67881+=j::string(_v_66680_label);_text67881+=u" ";return V(std::move(_text67881));})():this->_literals[69]);
_v_66682_width.get()=([&]()->V{V _callee67882=this->_v_66388_wholeOf.get();return j::call(_callee67882,j::Args{this->_literals[171],j::get(_v_66673_p,this->_literals[68]),V(32.0),V(2.0),V(300.0)});})();
_v_66683_height.get()=([&]()->V{V _callee67883=this->_v_66388_wholeOf.get();return j::call(_callee67883,j::Args{this->_literals[172],j::get(_v_66673_p,this->_literals[168]),V(3.0),V(1.0),V(100.0)});})();
_v_66684_fill.get()=([&]()->V{V _callee67884=this->_v_66378_boolOf.get();return j::call(_callee67884,j::Args{this->_literals[173],j::get(_v_66673_p,this->_literals[39]),V(true)});})();
_v_66685_list.get()=(j::truth(([&]()->V{V _logical67885=_v_66671_data;return j::truth(_logical67885)?j::unary("!",_v_66679_live.get()):_logical67885;})())?([&]()->V{j::Args _array67886;for(const auto &_value:j::elements(_v_66671_data))_array67886.push_back(_value);return j::array(std::move(_array67886));})():V::null());
_v_66686_range.get()=j::function([=](const j::Args &_args_fn66687,const V &_receiver_fn66687,const V &_self_fn66687) mutable ->V{
V _v_66688_l;
_v_66688_l=_args_fn66687[0];
{
V _v_66689_lo;
V _v_66690_hi;
_v_66689_lo=([&]()->V{V _receiver67888=j::builtin("Math");V _method67889=this->_literals[32];V _method=j::get(_receiver67888,_method67889);j::Args _params67890=([&](){j::Args _args67887;for(const auto &_v:j::elements(_v_66688_l))_args67887.push_back(_v);return _args67887;})();return j::call(_method,_params67890,_receiver67888);})();
_v_66690_hi=([&]()->V{V _receiver67892=j::builtin("Math");V _method67893=this->_literals[33];V _method=j::get(_receiver67892,_method67893);j::Args _params67894=([&](){j::Args _args67891;for(const auto &_v:j::elements(_v_66688_l))_args67891.push_back(_v);return _args67891;})();return j::call(_method,_params67894,_receiver67892);})();
return (j::truth(([&]()->V{V _lhs67895=_v_66689_lo;V _rhs67896=_v_66690_hi;return V(j::equal(_lhs67895,_rhs67896,true));})())?([&]()->V{j::Args _array67897;_array67897.push_back(([&]()->V{V _lhs67898=_v_66689_lo;V _rhs67899=V(1.0);return V(j::number(_lhs67898)-j::number(_rhs67899));})());_array67897.push_back(([&]()->V{V _lhs67900=_v_66690_hi;V _rhs67901=V(1.0);return j::binary("+",_lhs67900,_rhs67901);})());return j::array(std::move(_array67897));})():([&]()->V{j::Args _array67902;_array67902.push_back(_v_66689_lo);_array67902.push_back(_v_66690_hi);return j::array(std::move(_array67902));})());

}

return V{};
},1);
V _pattern67905=(j::truth(_v_66685_list.get())?([&]()->V{V _callee67903=_v_66686_range.get();return j::call(_callee67903,j::Args{_v_66685_list.get()});})():([&]()->V{j::Args _array67904;_array67904.push_back(V(0.0));_array67904.push_back(V(1.0));return j::array(std::move(_array67904));})());
_v_66691_lo.get()=j::get(_pattern67905,V(0));
_v_66692_hi.get()=j::get(_pattern67905,V(1));
_v_66693_loop.get()=(j::truth(_v_66685_list.get())?([&]()->V{V _callee67908=this->_v_66380_loopOf.get();return j::call(_callee67908,j::Args{([&]()->V{V _lhs67906=V(1.5);V _rhs67907=V(3.0);return j::binary("+",_lhs67906,_rhs67907);})(),V(true)});})():V(12.0));
_v_66694_reading.get()=j::function([=](const j::Args &_args_fn66695,const V &_receiver_fn66695,const V &_self_fn66695) mutable ->V{
V _v_66696_x;
_v_66696_x=_args_fn66695[0];
return ([&]()->V{V _lhs67909=V(0.1);V _rhs67910=([&]()->V{V _lhs67911=V(0.8);V _rhs67912=([&]()->V{V _callee67914=this->_v_66376_loopNoise.get();return j::call(_callee67914,j::Args{V(0.4),V(0.2),_v_66696_x,_v_66693_loop.get(),([&]()->V{V _obj67913=j::object();j::put(_obj67913,this->_literals[26],V(1.4));return _obj67913;})()});})();return V(j::number(_lhs67911)*j::number(_rhs67912));})();return j::binary("+",_lhs67909,_rhs67910);})();
return V{};
},1);
_v_66697_last.get()=(j::truth(_v_66685_list.get())?([&]()->V{V _callee67920=j::builtin("String");return j::call(_callee67920,j::Args{j::unary("+",([&]()->V{V _receiver67915=j::get(_v_66685_list.get(),([&]()->V{V _lhs67918=j::get(_v_66685_list.get(),this->_literals[35]);V _rhs67919=V(1.0);return V(j::number(_lhs67918)-j::number(_rhs67919));})());V _method67916=this->_literals[76];V _method=j::get(_receiver67915,_method67916);j::Args _params67917=j::Args{V(2.0)};return j::call(_method,_params67917,_receiver67915);})())});})():(j::truth(_v_66679_live.get())?this->_literals[174]:this->_literals[175]));
_v_66698_cols=([&]()->V{V _lhs67921=([&]()->V{V _lhs67923=([&]()->V{V _lhs67925=j::get(_v_66681_words.get(),this->_literals[35]);V _rhs67926=_v_66682_width.get();return j::binary("+",_lhs67925,_rhs67926);})();V _rhs67924=V(1.0);return j::binary("+",_lhs67923,_rhs67924);})();V _rhs67922=j::get(_v_66697_last.get(),this->_literals[35]);return j::binary("+",_lhs67921,_rhs67922);})();
_v_66699_timing=(j::truth(_v_66679_live.get())?([&]()->V{V _obj67927=j::object();j::put(_obj67927,this->_literals[101],V(4.0));j::put(_obj67927,this->_literals[97],V(true));return _obj67927;})():([&]()->V{V _obj67928=j::object();j::put(_obj67928,this->_literals[101],V(24.0));j::put(_obj67928,this->_literals[102],_v_66693_loop.get());V _spread67929=(j::truth(_v_66685_list.get())?([&]()->V{V _obj67930=j::object();j::put(_obj67930,this->_literals[130],V(1.5));return _obj67930;})():([&]()->V{V _obj67931=j::object();return _obj67931;})());for(const auto &_key:j::keys(_spread67929))j::put(_obj67928,_key,j::get(_spread67929,_key));return _obj67928;})());
_v_66700_note=(j::truth(_v_66679_live.get())?this->_literals[176]:(j::truth(_v_66685_list.get())?this->_literals[177]:this->_literals[178]));
return ([&]()->V{V _callee68020=this->_v_66362_piece.get();return j::call(_callee68020,j::Args{([&]()->V{V _obj67932=j::object();V _spread67933=([&]()->V{V _callee67935=this->_v_66545_naming.get();return j::call(_callee67935,j::Args{_v_66673_p,([&]()->V{V _logical67934=_v_66680_label;return !j::truth(_logical67934)?this->_literals[179]:_logical67934;})(),_v_66700_note});})();for(const auto &_key:j::keys(_spread67933))j::put(_obj67932,_key,j::get(_spread67933,_key));j::put(_obj67932,this->_literals[99],this->_literals[165]);j::put(_obj67932,this->_literals[1],_v_66698_cols);j::put(_obj67932,this->_literals[3],_v_66683_height.get());V _spread67936=_v_66699_timing;for(const auto &_key:j::keys(_spread67936))j::put(_obj67932,_key,j::get(_spread67936,_key));j::put(_obj67932,this->_literals[71],([&]()->V{V _callee67938=this->_v_66522_tones.get();return j::call(_callee67938,j::Args{([&]()->V{V _callee67937=this->_v_66521_themed.get();return j::call(_callee67937,j::Args{this->_literals[180],j::get(_v_66673_p,this->_literals[18])});})()});})());return _obj67932;})(),j::function([=](const j::Args &_args_fn66701,const V &_receiver_fn66701,const V &_self_fn66701) mutable ->V{
V _v_66702_t;
V _v_66703_s;
_v_66702_t=_args_fn66701[0];
_v_66703_s=_args_fn66701[1];
{
V _v_66704_u;
V _v_66705_area;
V _v_66706_b;
_v_66704_u=([&]()->V{V _lhs67939=([&]()->V{V _lhs67941=([&]()->V{V _lhs67943=_v_66702_t;V _rhs67944=_v_66693_loop.get();return V(std::fmod(j::number(_lhs67943),j::number(_rhs67944)));})();V _rhs67942=_v_66693_loop.get();return j::binary("+",_lhs67941,_rhs67942);})();V _rhs67940=_v_66693_loop.get();return V(std::fmod(j::number(_lhs67939),j::number(_rhs67940)));})();
(void)(([&]()->V{V _callee67945=this->_v_66416_textAt.get();return j::call(_callee67945,j::Args{_v_66703_s,_v_66681_words.get(),this->_literals[11]});})());
_v_66705_area=([&]()->V{V _obj67946=j::object();j::put(_obj67946,this->_literals[4],j::get(_v_66681_words.get(),this->_literals[35]));j::put(_obj67946,this->_literals[5],V(0.0));j::put(_obj67946,this->_literals[1],_v_66682_width.get());j::put(_obj67946,this->_literals[3],_v_66683_height.get());return _obj67946;})();
_v_66706_b=([&]()->V{V _callee67947=this->_v_66364_braille.get();return j::call(_callee67947,j::Args{_v_66703_s,_v_66705_area});})();
if(j::truth(_v_66679_live.get())){
V _v_66707_now;
V _v_66708_a;
V _v_66709_z;
_v_66707_now=([&]()->V{V _callee67948=_v_66679_live.get();return j::call(_callee67948,j::Args{});})();
if(j::truth(j::unary("!",([&]()->V{V _callee67949=_v_66674_numbers.get();return j::call(_callee67949,j::Args{_v_66707_now});})()))){return V{};
}
V _pattern67951=([&]()->V{V _callee67950=_v_66686_range.get();return j::call(_callee67950,j::Args{_v_66707_now});})();
_v_66708_a=j::get(_pattern67951,V(0));
_v_66709_z=j::get(_pattern67951,V(1));
(void)(([&]()->V{V _receiver67953=_v_66706_b;V _method67954=this->_literals[183];V _method=j::get(_receiver67953,_method67954);j::Args _params67955=j::Args{_v_66707_now,([&]()->V{V _obj67952=j::object();j::put(_obj67952,this->_literals[181],_v_66708_a);j::put(_obj67952,this->_literals[182],_v_66709_z);j::put(_obj67952,this->_literals[39],_v_66684_fill.get());j::put(_obj67952,this->_literals[18],this->_v_66516_ACCENT.get());return _obj67952;})()};return j::call(_method,_params67955,_receiver67953);})());
(void)(([&]()->V{V _receiver67956=_v_66706_b;V _method67957=this->_literals[184];V _method=j::get(_receiver67956,_method67957);j::Args _params67958=j::Args{};return j::call(_method,_params67958,_receiver67956);})());
(void)(([&]()->V{V _callee67965=this->_v_66416_textAt.get();return j::call(_callee67965,j::Args{_v_66703_s,([&]()->V{V _callee67964=j::builtin("String");return j::call(_callee67964,j::Args{j::unary("+",([&]()->V{V _receiver67959=j::get(_v_66707_now,([&]()->V{V _lhs67962=j::get(_v_66707_now,this->_literals[35]);V _rhs67963=V(1.0);return V(j::number(_lhs67962)-j::number(_rhs67963));})());V _method67960=this->_literals[76];V _method=j::get(_receiver67959,_method67960);j::Args _params67961=j::Args{V(2.0)};return j::call(_method,_params67961,_receiver67959);})())});})(),this->_literals[13]});})());
return V{};

}

if(j::truth(_v_66685_list.get())){(void)(([&]()->V{V _receiver67967=_v_66706_b;V _method67968=this->_literals[183];V _method=j::get(_receiver67967,_method67968);j::Args _params67969=j::Args{_v_66685_list.get(),([&]()->V{V _obj67966=j::object();j::put(_obj67966,this->_literals[181],_v_66691_lo.get());j::put(_obj67966,this->_literals[182],_v_66692_hi.get());j::put(_obj67966,this->_literals[39],_v_66684_fill.get());j::put(_obj67966,this->_literals[18],this->_v_66516_ACCENT.get());return _obj67966;})()};return j::call(_method,_params67969,_receiver67967);})());
}else {(void)(([&]()->V{V _receiver67975=_v_66706_b;V _method67976=this->_literals[183];V _method=j::get(_receiver67975,_method67976);j::Args _params67977=j::Args{_v_66694_reading.get(),([&]()->V{V _obj67970=j::object();j::put(_obj67970,this->_literals[185],([&]()->V{V _lhs67971=_v_66702_t;V _rhs67972=([&]()->V{V _lhs67973=_v_66682_width.get();V _rhs67974=V(4.0);return V(j::number(_lhs67973)/j::number(_rhs67974));})();return V(j::number(_lhs67971)-j::number(_rhs67972));})());j::put(_obj67970,this->_literals[186],_v_66702_t);j::put(_obj67970,this->_literals[181],V(0.0));j::put(_obj67970,this->_literals[182],V(1.0));j::put(_obj67970,this->_literals[39],_v_66684_fill.get());j::put(_obj67970,this->_literals[18],this->_v_66516_ACCENT.get());return _obj67970;})()};return j::call(_method,_params67977,_receiver67975);})());
}
(void)(([&]()->V{V _receiver67978=_v_66706_b;V _method67979=this->_literals[184];V _method=j::get(_receiver67978,_method67979);j::Args _params67980=j::Args{};return j::call(_method,_params67980,_receiver67978);})());
if(j::truth(_v_66685_list.get())){
V _v_66710_edge;
_v_66710_edge=([&]()->V{V _number67990=([&]()->V{V _lhs67991=_v_66682_width.get();V _rhs67992=([&]()->V{V _receiver67997=j::builtin("Math");V _method67998=this->_literals[32];V _method=j::get(_receiver67997,_method67998);j::Args _params67999=j::Args{V(1.0),([&]()->V{V _lhs67993=_v_66704_u;V _rhs67994=V(1.5);return V(j::number(_lhs67993)/j::number(_rhs67994));})()};return j::call(_method,_params67999,_receiver67997);})();return V(j::number(_lhs67991)*j::number(_rhs67992));})();return V(std::floor(j::number(_number67990)+.5));})();
(void)(([&]()->V{V _receiver68005=_v_66703_s;V _method68006=this->_literals[187];V _method=j::get(_receiver68005,_method68006);j::Args _params68007=j::Args{([&]()->V{V _obj68000=j::object();j::put(_obj68000,this->_literals[4],([&]()->V{V _lhs68001=j::get(_v_66705_area,this->_literals[4]);V _rhs68002=_v_66710_edge;return j::binary("+",_lhs68001,_rhs68002);})());j::put(_obj68000,this->_literals[5],V(0.0));j::put(_obj68000,this->_literals[1],([&]()->V{V _lhs68003=_v_66682_width.get();V _rhs68004=_v_66710_edge;return V(j::number(_lhs68003)-j::number(_rhs68004));})());j::put(_obj68000,this->_literals[3],_v_66683_height.get());return _obj68000;})()};return j::call(_method,_params68007,_receiver68005);})());
if(j::truth(([&]()->V{V _lhs68008=_v_66710_edge;V _rhs68009=_v_66682_width.get();return j::binary(">=",_lhs68008,_rhs68009);})())){(void)(([&]()->V{V _callee68010=this->_v_66416_textAt.get();return j::call(_callee68010,j::Args{_v_66703_s,_v_66697_last.get(),this->_literals[13]});})());
}

}
else {(void)(([&]()->V{V _callee68019=this->_v_66416_textAt.get();return j::call(_callee68019,j::Args{_v_66703_s,([&]()->V{V _callee68018=j::builtin("String");return j::call(_callee68018,j::Args{([&]()->V{V _number68014=([&]()->V{V _lhs68015=([&]()->V{V _callee68017=_v_66694_reading.get();return j::call(_callee68017,j::Args{_v_66702_t});})();V _rhs68016=V(100.0);return V(j::number(_lhs68015)*j::number(_rhs68016));})();return V(std::floor(j::number(_number68014)+.5));})()});})(),this->_literals[13]});})());
}

}

return V{};
},2)});})();

}

return V{};
},2);
this->_v_66713_barChart.get()=j::function([=](const j::Args &_args_fn66714,const V &_receiver_fn66714,const V &_self_fn66714) mutable ->V{
V _v_66715_data;
V _v_66716_o;
_v_66715_data=_args_fn66714[0];
_v_66716_o=_args_fn66714[1];
{
V _v_66717_p;
j::Cell _v_66718_entries;
V _v_66725_horizontal;
j::Cell _v_66726_size;
j::Cell _v_66727_top;
j::Cell _v_66730_values;
j::Cell _v_66731_grow;
V _v_66732_hold;
j::Cell _v_66733_own;
j::Cell _v_66734_snappy;
j::Cell _v_66735_shown;
j::Cell _v_66738_names;
V _v_66741_grown;
j::Cell _v_66742_loop;
j::Cell _v_66743_lengthAt;
j::Cell _v_66749_colorOf;
V _v_66752_palette;
V _v_66753_spec;
j::Cell _v_66768_bar;
j::Cell _v_66773_gap;
_v_66717_p=([&]()->V{V _callee68022=this->_v_66382_optionsOf.get();return j::call(_callee68022,j::Args{this->_literals[188],_v_66716_o,([&]()->V{j::Args _array68021;_array68021.push_back(this->_literals[189]);_array68021.push_back(this->_literals[80]);_array68021.push_back(this->_literals[33]);_array68021.push_back(this->_literals[190]);_array68021.push_back(this->_literals[117]);_array68021.push_back(this->_literals[191]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array68021.push_back(_value);return j::array(std::move(_array68021));})()});})();
_v_66718_entries.get()=(j::truth(([&]()->V{V _receiver68023=j::builtin("Array");V _method68024=this->_literals[30];V _method=j::get(_receiver68023,_method68024);j::Args _params68025=j::Args{_v_66715_data};return j::call(_method,_params68025,_receiver68023);})())?([&]()->V{V _receiver68030=_v_66715_data;V _method68031=this->_literals[41];V _method=j::get(_receiver68030,_method68031);j::Args _params68032=j::Args{j::function([=](const j::Args &_args_fn66719,const V &_receiver_fn66719,const V &_self_fn66719) mutable ->V{
V _v_66720_v;
V _v_66721_i;
_v_66720_v=_args_fn66719[0];
_v_66721_i=_args_fn66719[1];
return ([&]()->V{j::Args _array68026;_array68026.push_back(([&]()->V{V _callee68029=j::builtin("String");return j::call(_callee68029,j::Args{([&]()->V{V _lhs68027=_v_66721_i;V _rhs68028=V(1.0);return j::binary("+",_lhs68027,_rhs68028);})()});})());_array68026.push_back(_v_66720_v);return j::array(std::move(_array68026));})();
return V{};
},2)};return j::call(_method,_params68032,_receiver68030);})():(j::truth(([&]()->V{V _logical68033=_v_66715_data;return j::truth(_logical68033)?([&]()->V{V _lhs68034=j::unary("typeof",_v_66715_data);V _rhs68035=this->_literals[0];return V(j::equal(_lhs68034,_rhs68035,true));})():_logical68033;})())?([&]()->V{V _receiver68036=j::builtin("Object");V _method68037=this->_literals[192];V _method=j::get(_receiver68036,_method68037);j::Args _params68038=j::Args{_v_66715_data};return j::call(_method,_params68038,_receiver68036);})():([&]()->V{j::Args _array68039;return j::array(std::move(_array68039));})()));
if(j::truth(([&]()->V{V _logical68040=([&]()->V{V _logical68041=j::unary("!",j::get(_v_66718_entries.get(),this->_literals[35]));return !j::truth(_logical68041)?([&]()->V{V _lhs68042=j::get(_v_66718_entries.get(),this->_literals[35]);V _rhs68043=V(64.0);return j::binary(">",_lhs68042,_rhs68043);})():_logical68041;})();return !j::truth(_logical68040)?j::unary("!",([&]()->V{V _receiver68054=_v_66718_entries.get();V _method68055=this->_literals[169];V _method=j::get(_receiver68054,_method68055);j::Args _params68056=j::Args{j::function([=](const j::Args &_args_fn66722,const V &_receiver_fn66722,const V &_self_fn66722) mutable ->V{
V _v_66723_v;
V _pattern68044=_args_fn66722[0];
_v_66723_v=j::get(_pattern68044,V(1));
return ([&]()->V{V _logical68045=([&]()->V{V _logical68046=([&]()->V{V _lhs68047=j::unary("typeof",_v_66723_v);V _rhs68048=this->_literals[2];return V(j::equal(_lhs68047,_rhs68048,true));})();return j::truth(_logical68046)?([&]()->V{V _receiver68049=j::builtin("Number");V _method68050=this->_literals[73];V _method=j::get(_receiver68049,_method68050);j::Args _params68051=j::Args{_v_66723_v};return j::call(_method,_params68051,_receiver68049);})():_logical68046;})();return j::truth(_logical68045)?([&]()->V{V _lhs68052=_v_66723_v;V _rhs68053=V(0.0);return j::binary(">=",_lhs68052,_rhs68053);})():_logical68045;})();
return V{};
},1)};return j::call(_method,_params68056,_receiver68054);})()):_logical68040;})())){(void)(([&]()->V{V _callee68059=this->_v_66361_fail.get();return j::call(_callee68059,j::Args{([&]()->V{std::u16string _text68057;_text68057+=u"barChart() takes names and values, such as { mon: 3, tue: 5 }, or a list of values, 1 to 64 of them, each 0 or more, not ";_text68057+=j::string(([&]()->V{V _callee68058=this->_v_66384_show.get();return j::call(_callee68058,j::Args{_v_66715_data});})());_text68057+=u"";return V(std::move(_text68057));})()});})());
}
{for(const auto &_item68060:j::elements(_v_66718_entries.get())){V _v_66724_k;
V _pattern68061=_item68060;
_v_66724_k=j::get(_pattern68061,V(0));
(void)(([&]()->V{V _callee68062=this->_v_66386_textOf.get();return j::call(_callee68062,j::Args{this->_literals[193],_v_66724_k});})());
}}
_v_66725_horizontal=([&]()->V{V _callee68063=this->_v_66378_boolOf.get();return j::call(_callee68063,j::Args{this->_literals[194],j::get(_v_66717_p,this->_literals[189]),V(false)});})();
_v_66726_size.get()=([&]()->V{V _callee68064=this->_v_66388_wholeOf.get();return j::call(_callee68064,j::Args{this->_literals[195],j::get(_v_66717_p,this->_literals[80]),(j::truth(_v_66725_horizontal)?V(30.0):V(10.0)),V(1.0),V(300.0)});})();
_v_66727_top.get()=([&]()->V{V _callee68074=this->_v_66381_numberOf.get();return j::call(_callee68074,j::Args{this->_literals[196],j::get(_v_66717_p,this->_literals[33]),([&]()->V{V _logical68065=([&]()->V{V _receiver68071=j::builtin("Math");V _method68072=this->_literals[33];V _method=j::get(_receiver68071,_method68072);j::Args _params68073=([&](){j::Args _args68066;for(const auto &_v:j::elements(([&]()->V{V _receiver68068=_v_66718_entries.get();V _method68069=this->_literals[41];V _method=j::get(_receiver68068,_method68069);j::Args _params68070=j::Args{j::function([=](const j::Args &_args_fn66728,const V &_receiver_fn66728,const V &_self_fn66728) mutable ->V{
V _v_66729_v;
V _pattern68067=_args_fn66728[0];
_v_66729_v=j::get(_pattern68067,V(1));
return _v_66729_v;
return V{};
},1)};return j::call(_method,_params68070,_receiver68068);})()))_args68066.push_back(_v);return _args68066;})();return j::call(_method,_params68073,_receiver68071);})();return !j::truth(_logical68065)?V(1.0):_logical68065;})(),V(0.0)});})();
_v_66730_values.get()=([&]()->V{V _callee68075=this->_v_66378_boolOf.get();return j::call(_callee68075,j::Args{this->_literals[197],j::get(_v_66717_p,this->_literals[190]),V(true)});})();
_v_66731_grow.get()=([&]()->V{V _callee68076=this->_v_66381_numberOf.get();return j::call(_callee68076,j::Args{this->_literals[198],j::get(_v_66717_p,this->_literals[117]),V(0.8),V(0.0),V(30.0)});})();
_v_66732_hold=([&]()->V{V _callee68077=this->_v_66381_numberOf.get();return j::call(_callee68077,j::Args{this->_literals[199],j::get(_v_66717_p,this->_literals[191]),V(3.0),V(0.0),V(60.0)});})();
_v_66733_own.get()=([&]()->V{V _callee68078=this->_v_66521_themed.get();return j::call(_callee68078,j::Args{this->_literals[200],j::get(_v_66717_p,this->_literals[18])});})();
_v_66734_snappy.get()=j::get(this->_v_66375_ease.get(),this->_literals[201]);
_v_66735_shown.get()=([&]()->V{V _receiver68084=_v_66718_entries.get();V _method68085=this->_literals[41];V _method=j::get(_receiver68084,_method68085);j::Args _params68086=j::Args{j::function([=](const j::Args &_args_fn66736,const V &_receiver_fn66736,const V &_self_fn66736) mutable ->V{
V _v_66737_v;
V _pattern68079=_args_fn66736[0];
_v_66737_v=j::get(_pattern68079,V(1));
return ([&]()->V{V _callee68083=j::builtin("String");return j::call(_callee68083,j::Args{j::unary("+",([&]()->V{V _receiver68080=_v_66737_v;V _method68081=this->_literals[76];V _method=j::get(_receiver68080,_method68081);j::Args _params68082=j::Args{V(2.0)};return j::call(_method,_params68082,_receiver68080);})())});})();
return V{};
},1)};return j::call(_method,_params68086,_receiver68084);})();
_v_66738_names.get()=([&]()->V{V _receiver68088=_v_66718_entries.get();V _method68089=this->_literals[41];V _method=j::get(_receiver68088,_method68089);j::Args _params68090=j::Args{j::function([=](const j::Args &_args_fn66739,const V &_receiver_fn66739,const V &_self_fn66739) mutable ->V{
V _v_66740_k;
V _pattern68087=_args_fn66739[0];
_v_66740_k=j::get(_pattern68087,V(0));
return _v_66740_k;
return V{};
},1)};return j::call(_method,_params68090,_receiver68088);})();
_v_66741_grown=([&]()->V{V _lhs68091=_v_66731_grow.get();V _rhs68092=([&]()->V{V _lhs68093=V(0.1);V _rhs68094=([&]()->V{V _lhs68095=j::get(_v_66718_entries.get(),this->_literals[35]);V _rhs68096=V(1.0);return V(j::number(_lhs68095)-j::number(_rhs68096));})();return V(j::number(_lhs68093)*j::number(_rhs68094));})();return j::binary("+",_lhs68091,_rhs68092);})();
_v_66742_loop.get()=(j::truth(_v_66731_grow.get())?([&]()->V{V _callee68099=this->_v_66380_loopOf.get();return j::call(_callee68099,j::Args{([&]()->V{V _lhs68097=_v_66741_grown;V _rhs68098=_v_66732_hold;return j::binary("+",_lhs68097,_rhs68098);})(),V(true)});})():j::builtin("undefined"));
_v_66743_lengthAt.get()=j::function([=](const j::Args &_args_fn66744,const V &_receiver_fn66744,const V &_self_fn66744) mutable ->V{
V _v_66745_i;
V _v_66746_t;
_v_66745_i=_args_fn66744[0];
_v_66746_t=_args_fn66744[1];
{
V _v_66747_full;
V _v_66748_u;
_v_66747_full=([&]()->V{V _receiver68104=j::builtin("Math");V _method68105=this->_literals[32];V _method=j::get(_receiver68104,_method68105);j::Args _params68106=j::Args{V(1.0),([&]()->V{V _lhs68100=j::get(j::get(_v_66718_entries.get(),_v_66745_i),V(1.0));V _rhs68101=_v_66727_top.get();return V(j::number(_lhs68100)/j::number(_rhs68101));})()};return j::call(_method,_params68106,_receiver68104);})();
if(j::truth(j::unary("!",_v_66742_loop.get()))){return _v_66747_full;
}
_v_66748_u=([&]()->V{V _lhs68107=([&]()->V{V _lhs68109=([&]()->V{V _lhs68111=([&]()->V{V _lhs68113=_v_66746_t;V _rhs68114=_v_66742_loop.get();return V(std::fmod(j::number(_lhs68113),j::number(_rhs68114)));})();V _rhs68112=_v_66742_loop.get();return j::binary("+",_lhs68111,_rhs68112);})();V _rhs68110=_v_66742_loop.get();return V(std::fmod(j::number(_lhs68109),j::number(_rhs68110)));})();V _rhs68108=([&]()->V{V _lhs68115=V(0.1);V _rhs68116=_v_66745_i;return V(j::number(_lhs68115)*j::number(_rhs68116));})();return V(j::number(_lhs68107)-j::number(_rhs68108));})();
return ([&]()->V{V _lhs68117=_v_66747_full;V _rhs68118=([&]()->V{V _receiver68134=j::builtin("Math");V _method68135=this->_literals[32];V _method=j::get(_receiver68134,_method68135);j::Args _params68136=j::Args{V(1.08),([&]()->V{V _callee68131=_v_66734_snappy.get();return j::call(_callee68131,j::Args{([&]()->V{V _receiver68128=j::builtin("Math");V _method68129=this->_literals[33];V _method=j::get(_receiver68128,_method68129);j::Args _params68130=j::Args{V(0.0),([&]()->V{V _receiver68123=j::builtin("Math");V _method68124=this->_literals[32];V _method=j::get(_receiver68123,_method68124);j::Args _params68125=j::Args{V(1.0),([&]()->V{V _lhs68119=_v_66748_u;V _rhs68120=_v_66731_grow.get();return V(j::number(_lhs68119)/j::number(_rhs68120));})()};return j::call(_method,_params68125,_receiver68123);})()};return j::call(_method,_params68130,_receiver68128);})()});})()};return j::call(_method,_params68136,_receiver68134);})();return V(j::number(_lhs68117)*j::number(_rhs68118));})();

}

return V{};
},2);
_v_66749_colorOf.get()=j::function([=](const j::Args &_args_fn66750,const V &_receiver_fn66750,const V &_self_fn66750) mutable ->V{
V _v_66751_i;
_v_66751_i=_args_fn66750[0];
return (j::truth(_v_66733_own.get())?this->_v_66516_ACCENT.get():([&]()->V{V _lhs68137=V(6.0);V _rhs68138=([&]()->V{V _lhs68139=_v_66751_i;V _rhs68140=j::get(this->_v_66711_BARS.get(),this->_literals[35]);return V(std::fmod(j::number(_lhs68139),j::number(_rhs68140)));})();return j::binary("+",_lhs68137,_rhs68138);})());
return V{};
},1);
_v_66752_palette=([&]()->V{V _callee68142=this->_v_66522_tones.get();return j::call(_callee68142,j::Args{_v_66733_own.get(),(j::truth(_v_66733_own.get())?([&]()->V{j::Args _array68141;return j::array(std::move(_array68141));})():this->_v_66711_BARS.get())});})();
_v_66753_spec=([&]()->V{V _obj68143=j::object();V _spread68144=([&]()->V{V _callee68146=this->_v_66545_naming.get();return j::call(_callee68146,j::Args{_v_66717_p,this->_literals[202],([&]()->V{std::u16string _text68145;_text68145+=u"a bar chart of ";_text68145+=j::string(j::get(_v_66718_entries.get(),this->_literals[35]));_text68145+=u" bars";_text68145+=j::string((j::truth(_v_66742_loop.get())?this->_literals[203]:this->_literals[69]));_text68145+=u"";return V(std::move(_text68145));})()});})();for(const auto &_key:j::keys(_spread68144))j::put(_obj68143,_key,j::get(_spread68144,_key));j::put(_obj68143,this->_literals[99],this->_literals[165]);j::put(_obj68143,this->_literals[101],(j::truth(_v_66742_loop.get())?V(24.0):V(0.0)));j::put(_obj68143,this->_literals[71],_v_66752_palette);V _spread68147=(j::truth(_v_66742_loop.get())?([&]()->V{V _obj68148=j::object();j::put(_obj68148,this->_literals[102],_v_66742_loop.get());j::put(_obj68148,this->_literals[130],([&]()->V{V _receiver68155=j::builtin("Math");V _method68156=this->_literals[32];V _method=j::get(_receiver68155,_method68156);j::Args _params68157=j::Args{([&]()->V{V _lhs68149=_v_66742_loop.get();V _rhs68150=V(0.01);return V(j::number(_lhs68149)-j::number(_rhs68150));})(),([&]()->V{V _lhs68151=_v_66741_grown;V _rhs68152=V(0.05);return j::binary("+",_lhs68151,_rhs68152);})()};return j::call(_method,_params68157,_receiver68155);})());return _obj68148;})():([&]()->V{V _obj68158=j::object();return _obj68158;})());for(const auto &_key:j::keys(_spread68147))j::put(_obj68143,_key,j::get(_spread68147,_key));return _obj68143;})();
if(j::truth(_v_66725_horizontal)){
j::Cell _v_66754_nameW;
V _v_66757_valueW;
_v_66754_nameW.get()=([&]()->V{V _receiver68163=j::builtin("Math");V _method68164=this->_literals[33];V _method=j::get(_receiver68163,_method68164);j::Args _params68165=([&](){j::Args _args68159;for(const auto &_v:j::elements(([&]()->V{V _receiver68160=_v_66738_names.get();V _method68161=this->_literals[41];V _method=j::get(_receiver68160,_method68161);j::Args _params68162=j::Args{j::function([=](const j::Args &_args_fn66755,const V &_receiver_fn66755,const V &_self_fn66755) mutable ->V{
V _v_66756_n;
_v_66756_n=_args_fn66755[0];
return j::get(_v_66756_n,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params68162,_receiver68160);})()))_args68159.push_back(_v);return _args68159;})();return j::call(_method,_params68165,_receiver68163);})();
_v_66757_valueW=(j::truth(_v_66730_values.get())?([&]()->V{V _lhs68166=([&]()->V{V _receiver68172=j::builtin("Math");V _method68173=this->_literals[33];V _method=j::get(_receiver68172,_method68173);j::Args _params68174=([&](){j::Args _args68168;for(const auto &_v:j::elements(([&]()->V{V _receiver68169=_v_66735_shown.get();V _method68170=this->_literals[41];V _method=j::get(_receiver68169,_method68170);j::Args _params68171=j::Args{j::function([=](const j::Args &_args_fn66758,const V &_receiver_fn66758,const V &_self_fn66758) mutable ->V{
V _v_66759_v;
_v_66759_v=_args_fn66758[0];
return j::get(_v_66759_v,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params68171,_receiver68169);})()))_args68168.push_back(_v);return _args68168;})();return j::call(_method,_params68174,_receiver68172);})();V _rhs68167=V(1.0);return j::binary("+",_lhs68166,_rhs68167);})():V(0.0));
return ([&]()->V{V _callee68245=this->_v_66362_piece.get();return j::call(_callee68245,j::Args{([&]()->V{V _obj68175=j::object();V _spread68176=_v_66753_spec;for(const auto &_key:j::keys(_spread68176))j::put(_obj68175,_key,j::get(_spread68176,_key));j::put(_obj68175,this->_literals[1],([&]()->V{V _lhs68177=([&]()->V{V _lhs68179=([&]()->V{V _lhs68181=_v_66754_nameW.get();V _rhs68182=V(1.0);return j::binary("+",_lhs68181,_rhs68182);})();V _rhs68180=_v_66726_size.get();return j::binary("+",_lhs68179,_rhs68180);})();V _rhs68178=_v_66757_valueW;return j::binary("+",_lhs68177,_rhs68178);})());j::put(_obj68175,this->_literals[3],j::get(_v_66718_entries.get(),this->_literals[35]));return _obj68175;})(),j::function([=](const j::Args &_args_fn66760,const V &_receiver_fn66760,const V &_self_fn66760) mutable ->V{
j::Cell _v_66761_t;
j::Cell _v_66762_s;
_v_66761_t.get()=_args_fn66760[0];
_v_66762_s.get()=_args_fn66760[1];
{
(void)(([&]()->V{V _receiver68242=_v_66718_entries.get();V _method68243=this->_literals[112];V _method=j::get(_receiver68242,_method68243);j::Args _params68244=j::Args{j::function([=](const j::Args &_args_fn66763,const V &_receiver_fn66763,const V &_self_fn66763) mutable ->V{
V _v_66764__;
V _v_66765_i;
_v_66764__=_args_fn66763[0];
_v_66765_i=_args_fn66763[1];
{
V _v_66766_eighths;
(void)(([&]()->V{V _receiver68185=_v_66762_s.get();V _method68186=this->_literals[137];V _method=j::get(_receiver68185,_method68186);j::Args _params68187=j::Args{([&]()->V{V _lhs68183=_v_66754_nameW.get();V _rhs68184=j::get(j::get(_v_66738_names.get(),_v_66765_i),this->_literals[35]);return V(j::number(_lhs68183)-j::number(_rhs68184));})(),_v_66765_i,j::get(_v_66738_names.get(),_v_66765_i)};return j::call(_method,_params68187,_receiver68185);})());
_v_66766_eighths=([&]()->V{V _receiver68203=j::builtin("Math");V _method68204=this->_literals[32];V _method=j::get(_receiver68203,_method68204);j::Args _params68205=j::Args{([&]()->V{V _lhs68188=_v_66726_size.get();V _rhs68189=V(8.0);return V(j::number(_lhs68188)*j::number(_rhs68189));})(),([&]()->V{V _number68195=([&]()->V{V _lhs68196=([&]()->V{V _lhs68198=([&]()->V{V _callee68200=_v_66743_lengthAt.get();return j::call(_callee68200,j::Args{_v_66765_i,_v_66761_t.get()});})();V _rhs68199=_v_66726_size.get();return V(j::number(_lhs68198)*j::number(_rhs68199));})();V _rhs68197=V(8.0);return V(j::number(_lhs68196)*j::number(_rhs68197));})();return V(std::floor(j::number(_number68195)+.5));})()};return j::call(_method,_params68205,_receiver68203);})();
{V _v_66767_x;
_v_66767_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs68206=([&]()->V{V _lhs68208=_v_66767_x;V _rhs68209=V(8.0);return V(j::number(_lhs68208)*j::number(_rhs68209));})();V _rhs68207=_v_66766_eighths;return j::binary("<",_lhs68206,_rhs68207);})());(void)(j::increment(_v_66767_x,1,false))){(void)(([&]()->V{V _receiver68227=_v_66762_s.get();V _method68228=this->_literals[111];V _method=j::get(_receiver68227,_method68228);j::Args _params68229=j::Args{([&]()->V{V _lhs68210=([&]()->V{V _lhs68212=_v_66754_nameW.get();V _rhs68213=V(1.0);return j::binary("+",_lhs68212,_rhs68213);})();V _rhs68211=_v_66767_x;return j::binary("+",_lhs68210,_rhs68211);})(),_v_66765_i,(j::truth(([&]()->V{V _lhs68214=([&]()->V{V _lhs68216=_v_66766_eighths;V _rhs68217=([&]()->V{V _lhs68218=_v_66767_x;V _rhs68219=V(8.0);return V(j::number(_lhs68218)*j::number(_rhs68219));})();return V(j::number(_lhs68216)-j::number(_rhs68217));})();V _rhs68215=V(8.0);return j::binary(">=",_lhs68214,_rhs68215);})())?this->_literals[144]:j::get(this->_v_66595_EIGHTHS.get(),([&]()->V{V _lhs68220=([&]()->V{V _lhs68222=_v_66766_eighths;V _rhs68223=([&]()->V{V _lhs68224=_v_66767_x;V _rhs68225=V(8.0);return V(j::number(_lhs68224)*j::number(_rhs68225));})();return V(j::number(_lhs68222)-j::number(_rhs68223));})();V _rhs68221=V(1.0);return V(j::number(_lhs68220)-j::number(_rhs68221));})())),([&]()->V{V _callee68226=_v_66749_colorOf.get();return j::call(_callee68226,j::Args{_v_66765_i});})()};return j::call(_method,_params68229,_receiver68227);})());
}}
if(j::truth(_v_66730_values.get())){(void)(([&]()->V{V _receiver68239=_v_66762_s.get();V _method68240=this->_literals[137];V _method=j::get(_receiver68239,_method68240);j::Args _params68241=j::Args{([&]()->V{V _lhs68230=([&]()->V{V _lhs68232=_v_66754_nameW.get();V _rhs68233=V(2.0);return j::binary("+",_lhs68232,_rhs68233);})();V _rhs68231=([&]()->V{V _number68236=([&]()->V{V _lhs68237=_v_66766_eighths;V _rhs68238=V(8.0);return V(j::number(_lhs68237)/j::number(_rhs68238));})();return V(std::ceil(j::number(_number68236)));})();return j::binary("+",_lhs68230,_rhs68231);})(),_v_66765_i,j::get(_v_66735_shown.get(),_v_66765_i),this->_v_66517_MUTED.get()};return j::call(_method,_params68241,_receiver68239);})());
}

}

return V{};
},2)};return j::call(_method,_params68244,_receiver68242);})());

}

return V{};
},2)});})();

}

_v_66768_bar.get()=([&]()->V{V _receiver68254=j::builtin("Math");V _method68255=this->_literals[33];V _method=j::get(_receiver68254,_method68255);j::Args _params68256=([&](){j::Args _args68246;_args68246.push_back(V(3.0));for(const auto &_v:j::elements(([&]()->V{V _receiver68247=_v_66738_names.get();V _method68248=this->_literals[41];V _method=j::get(_receiver68247,_method68248);j::Args _params68249=j::Args{j::function([=](const j::Args &_args_fn66769,const V &_receiver_fn66769,const V &_self_fn66769) mutable ->V{
V _v_66770_n;
_v_66770_n=_args_fn66769[0];
return j::get(_v_66770_n,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params68249,_receiver68247);})()))_args68246.push_back(_v);for(const auto &_v:j::elements((j::truth(_v_66730_values.get())?([&]()->V{V _receiver68250=_v_66735_shown.get();V _method68251=this->_literals[41];V _method=j::get(_receiver68250,_method68251);j::Args _params68252=j::Args{j::function([=](const j::Args &_args_fn66771,const V &_receiver_fn66771,const V &_self_fn66771) mutable ->V{
V _v_66772_v;
_v_66772_v=_args_fn66771[0];
return j::get(_v_66772_v,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params68252,_receiver68250);})():([&]()->V{j::Args _array68253;return j::array(std::move(_array68253));})())))_args68246.push_back(_v);return _args68246;})();return j::call(_method,_params68256,_receiver68254);})();
_v_66773_gap.get()=V(2.0);
return ([&]()->V{V _callee68328=this->_v_66362_piece.get();return j::call(_callee68328,j::Args{([&]()->V{V _obj68257=j::object();V _spread68258=_v_66753_spec;for(const auto &_key:j::keys(_spread68258))j::put(_obj68257,_key,j::get(_spread68258,_key));j::put(_obj68257,this->_literals[1],([&]()->V{V _lhs68259=([&]()->V{V _lhs68261=j::get(_v_66718_entries.get(),this->_literals[35]);V _rhs68262=([&]()->V{V _lhs68263=_v_66768_bar.get();V _rhs68264=_v_66773_gap.get();return j::binary("+",_lhs68263,_rhs68264);})();return V(j::number(_lhs68261)*j::number(_rhs68262));})();V _rhs68260=_v_66773_gap.get();return V(j::number(_lhs68259)-j::number(_rhs68260));})());j::put(_obj68257,this->_literals[3],([&]()->V{V _lhs68265=_v_66726_size.get();V _rhs68266=V(2.0);return j::binary("+",_lhs68265,_rhs68266);})());return _obj68257;})(),j::function([=](const j::Args &_args_fn66774,const V &_receiver_fn66774,const V &_self_fn66774) mutable ->V{
j::Cell _v_66775_t;
j::Cell _v_66776_s;
_v_66775_t.get()=_args_fn66774[0];
_v_66776_s.get()=_args_fn66774[1];
{
(void)(([&]()->V{V _receiver68325=_v_66718_entries.get();V _method68326=this->_literals[112];V _method=j::get(_receiver68325,_method68326);j::Args _params68327=j::Args{j::function([=](const j::Args &_args_fn66777,const V &_receiver_fn66777,const V &_self_fn66777) mutable ->V{
V _v_66778__;
V _v_66779_i;
_v_66778__=_args_fn66777[0];
_v_66779_i=_args_fn66777[1];
{
V _v_66780_x;
V _v_66781_eighths;
_v_66780_x=([&]()->V{V _lhs68267=_v_66779_i;V _rhs68268=([&]()->V{V _lhs68269=_v_66768_bar.get();V _rhs68270=_v_66773_gap.get();return j::binary("+",_lhs68269,_rhs68270);})();return V(j::number(_lhs68267)*j::number(_rhs68268));})();
_v_66781_eighths=([&]()->V{V _receiver68286=j::builtin("Math");V _method68287=this->_literals[32];V _method=j::get(_receiver68286,_method68287);j::Args _params68288=j::Args{([&]()->V{V _lhs68271=_v_66726_size.get();V _rhs68272=V(8.0);return V(j::number(_lhs68271)*j::number(_rhs68272));})(),([&]()->V{V _number68278=([&]()->V{V _lhs68279=([&]()->V{V _lhs68281=([&]()->V{V _callee68283=_v_66743_lengthAt.get();return j::call(_callee68283,j::Args{_v_66779_i,_v_66775_t.get()});})();V _rhs68282=_v_66726_size.get();return V(j::number(_lhs68281)*j::number(_rhs68282));})();V _rhs68280=V(8.0);return V(j::number(_lhs68279)*j::number(_rhs68280));})();return V(std::floor(j::number(_number68278)+.5));})()};return j::call(_method,_params68288,_receiver68286);})();
{V _v_66782_y;
_v_66782_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs68289=([&]()->V{V _lhs68291=_v_66782_y;V _rhs68292=V(8.0);return V(j::number(_lhs68291)*j::number(_rhs68292));})();V _rhs68290=_v_66781_eighths;return j::binary("<",_lhs68289,_rhs68290);})());(void)(j::increment(_v_66782_y,1,false))){
V _v_66783_e;
_v_66783_e=([&]()->V{V _lhs68293=_v_66781_eighths;V _rhs68294=([&]()->V{V _lhs68295=_v_66782_y;V _rhs68296=V(8.0);return V(j::number(_lhs68295)*j::number(_rhs68296));})();return V(j::number(_lhs68293)-j::number(_rhs68294));})();
{V _v_66784_c;
_v_66784_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs68297=_v_66784_c;V _rhs68298=_v_66768_bar.get();return j::binary("<",_lhs68297,_rhs68298);})());(void)(j::increment(_v_66784_c,1,false))){(void)(([&]()->V{V _receiver68308=_v_66776_s.get();V _method68309=this->_literals[111];V _method=j::get(_receiver68308,_method68309);j::Args _params68310=j::Args{([&]()->V{V _lhs68299=_v_66780_x;V _rhs68300=_v_66784_c;return j::binary("+",_lhs68299,_rhs68300);})(),([&]()->V{V _lhs68301=_v_66726_size.get();V _rhs68302=_v_66782_y;return V(j::number(_lhs68301)-j::number(_rhs68302));})(),(j::truth(([&]()->V{V _lhs68303=_v_66783_e;V _rhs68304=V(8.0);return j::binary(">=",_lhs68303,_rhs68304);})())?this->_literals[144]:j::get(this->_v_66712_RISE.get(),([&]()->V{V _lhs68305=_v_66783_e;V _rhs68306=V(1.0);return V(j::number(_lhs68305)-j::number(_rhs68306));})())),([&]()->V{V _callee68307=_v_66749_colorOf.get();return j::call(_callee68307,j::Args{_v_66779_i});})()};return j::call(_method,_params68310,_receiver68308);})());
}}

}
}
if(j::truth(([&]()->V{V _logical68311=_v_66730_values.get();return j::truth(_logical68311)?_v_66781_eighths:_logical68311;})())){(void)(([&]()->V{V _callee68320=this->_v_66370_text.get();return j::call(_callee68320,j::Args{_v_66776_s.get(),_v_66780_x,([&]()->V{V _lhs68312=_v_66726_size.get();V _rhs68313=([&]()->V{V _number68316=([&]()->V{V _lhs68317=_v_66781_eighths;V _rhs68318=V(8.0);return V(j::number(_lhs68317)/j::number(_rhs68318));})();return V(std::ceil(j::number(_number68316)));})();return V(j::number(_lhs68312)-j::number(_rhs68313));})(),j::get(_v_66735_shown.get(),_v_66779_i),([&]()->V{V _obj68319=j::object();j::put(_obj68319,this->_literals[68],_v_66768_bar.get());j::put(_obj68319,this->_literals[23],this->_literals[6]);j::put(_obj68319,this->_literals[18],this->_v_66517_MUTED.get());return _obj68319;})()});})());
}
(void)(([&]()->V{V _callee68324=this->_v_66370_text.get();return j::call(_callee68324,j::Args{_v_66776_s.get(),_v_66780_x,([&]()->V{V _lhs68321=_v_66726_size.get();V _rhs68322=V(1.0);return j::binary("+",_lhs68321,_rhs68322);})(),j::get(_v_66738_names.get(),_v_66779_i),([&]()->V{V _obj68323=j::object();j::put(_obj68323,this->_literals[68],_v_66768_bar.get());j::put(_obj68323,this->_literals[23],this->_literals[6]);return _obj68323;})()});})());

}

return V{};
},2)};return j::call(_method,_params68327,_receiver68325);})());

}

return V{};
},2)});})();

}

return V{};
},2);
this->_v_66785_panel.get()=j::function([=](const j::Args &_args_fn66786,const V &_receiver_fn66786,const V &_self_fn66786) mutable ->V{
V _v_66787_content;
V _v_66788_o;
_v_66787_content=_args_fn66786[0];
_v_66788_o=_args_fn66786[1];
{
V _v_66789_p;
V _v_66790_title;
V _v_66791_style;
V _v_66792_inner;
V _v_66793_cols;
V _v_66794_rows;
V _v_66795_room;
V _v_66796_filled;
V _v_66797_color;
V _v_66798_boxed;
V _v_66799_name;
_v_66789_p=([&]()->V{V _callee68330=this->_v_66382_optionsOf.get();return j::call(_callee68330,j::Args{this->_literals[204],_v_66788_o,([&]()->V{j::Args _array68329;_array68329.push_back(this->_literals[83]);_array68329.push_back(this->_literals[103]);_array68329.push_back(this->_literals[1]);_array68329.push_back(this->_literals[3]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array68329.push_back(_value);return j::array(std::move(_array68329));})()});})();
_v_66790_title=([&]()->V{V _callee68331=this->_v_66386_textOf.get();return j::call(_callee68331,j::Args{this->_literals[205],j::get(_v_66789_p,this->_literals[83])});})();
_v_66791_style=([&]()->V{V _callee68333=this->_v_66389_wordOf.get();return j::call(_callee68333,j::Args{this->_literals[206],j::get(_v_66789_p,this->_literals[103]),([&]()->V{j::Args _array68332;_array68332.push_back(this->_literals[104]);_array68332.push_back(this->_literals[207]);_array68332.push_back(this->_literals[208]);_array68332.push_back(this->_literals[209]);_array68332.push_back(this->_literals[125]);return j::array(std::move(_array68332));})(),this->_literals[104]});})();
_v_66792_inner=(j::truth(([&]()->V{V _lhs68334=_v_66787_content;V _rhs68335=j::builtin("undefined");return V(j::equal(_lhs68334,_rhs68335,true));})())?V::null():([&]()->V{V _callee68336=this->_v_66392_pieceOf.get();return j::call(_callee68336,j::Args{_v_66787_content,this->_literals[204]});})());
_v_66793_cols=([&]()->V{V _callee68343=this->_v_66388_wholeOf.get();return j::call(_callee68343,j::Args{this->_literals[210],j::get(_v_66789_p,this->_literals[1]),([&]()->V{V _lhs68337=([&]()->V{V _logical68339=([&]()->V{V _chain68340=_v_66792_inner;if(j::nullish(_chain68340))return V{};V _chain68341=j::get(_chain68340,this->_literals[211]);V _chain68342=j::get(_chain68341,this->_literals[1]);return _chain68342;})();return j::nullish(_logical68339)?V(20.0):_logical68339;})();V _rhs68338=V(4.0);return j::binary("+",_lhs68337,_rhs68338);})(),V(3.0),V(320.0)});})();
_v_66794_rows=([&]()->V{V _callee68350=this->_v_66388_wholeOf.get();return j::call(_callee68350,j::Args{this->_literals[212],j::get(_v_66789_p,this->_literals[3]),([&]()->V{V _lhs68344=([&]()->V{V _logical68346=([&]()->V{V _chain68347=_v_66792_inner;if(j::nullish(_chain68347))return V{};V _chain68348=j::get(_chain68347,this->_literals[211]);V _chain68349=j::get(_chain68348,this->_literals[3]);return _chain68349;})();return j::nullish(_logical68346)?V(4.0):_logical68346;})();V _rhs68345=V(2.0);return j::binary("+",_lhs68344,_rhs68345);})(),V(3.0),V(120.0)});})();
if(j::truth(([&]()->V{V _logical68351=_v_66792_inner;return j::truth(_logical68351)?([&]()->V{V _logical68352=([&]()->V{V _lhs68353=j::get(j::get(_v_66792_inner,this->_literals[211]),this->_literals[1]);V _rhs68354=([&]()->V{V _lhs68355=_v_66793_cols;V _rhs68356=V(4.0);return V(j::number(_lhs68355)-j::number(_rhs68356));})();return j::binary(">",_lhs68353,_rhs68354);})();return !j::truth(_logical68352)?([&]()->V{V _lhs68357=j::get(j::get(_v_66792_inner,this->_literals[211]),this->_literals[3]);V _rhs68358=([&]()->V{V _lhs68359=_v_66794_rows;V _rhs68360=V(2.0);return V(j::number(_lhs68359)-j::number(_rhs68360));})();return j::binary(">",_lhs68357,_rhs68358);})():_logical68352;})():_logical68351;})())){(void)(([&]()->V{V _callee68370=this->_v_66361_fail.get();return j::call(_callee68370,j::Args{([&]()->V{std::u16string _text68361;_text68361+=u"panel's room inside is ";_text68361+=j::string(([&]()->V{V _lhs68362=_v_66793_cols;V _rhs68363=V(4.0);return V(j::number(_lhs68362)-j::number(_rhs68363));})());_text68361+=u" by ";_text68361+=j::string(([&]()->V{V _lhs68364=_v_66794_rows;V _rhs68365=V(2.0);return V(j::number(_lhs68364)-j::number(_rhs68365));})());_text68361+=u", and ";_text68361+=j::string(j::get(j::get(_v_66792_inner,this->_literals[211]),this->_literals[213]));_text68361+=u" is ";_text68361+=j::string(j::get(j::get(_v_66792_inner,this->_literals[211]),this->_literals[1]));_text68361+=u" by ";_text68361+=j::string(j::get(j::get(_v_66792_inner,this->_literals[211]),this->_literals[3]));_text68361+=u": give the panel cols ";_text68361+=j::string(([&]()->V{V _lhs68366=j::get(j::get(_v_66792_inner,this->_literals[211]),this->_literals[1]);V _rhs68367=V(4.0);return j::binary("+",_lhs68366,_rhs68367);})());_text68361+=u" and rows ";_text68361+=j::string(([&]()->V{V _lhs68368=j::get(j::get(_v_66792_inner,this->_literals[211]),this->_literals[3]);V _rhs68369=V(2.0);return j::binary("+",_lhs68368,_rhs68369);})());_text68361+=u" or more, or leave them out";return V(std::move(_text68361));})()});})());
}
_v_66795_room=([&]()->V{V _callee68385=this->_v_66359_Surface.get();return j::construct(_callee68385,j::Args{([&]()->V{V _receiver68375=j::builtin("Math");V _method68376=this->_literals[33];V _method=j::get(_receiver68375,_method68376);j::Args _params68377=j::Args{V(1.0),([&]()->V{V _lhs68371=_v_66793_cols;V _rhs68372=V(4.0);return V(j::number(_lhs68371)-j::number(_rhs68372));})()};return j::call(_method,_params68377,_receiver68375);})(),([&]()->V{V _receiver68382=j::builtin("Math");V _method68383=this->_literals[33];V _method=j::get(_receiver68382,_method68383);j::Args _params68384=j::Args{V(1.0),([&]()->V{V _lhs68378=_v_66794_rows;V _rhs68379=V(2.0);return V(j::number(_lhs68378)-j::number(_rhs68379));})()};return j::call(_method,_params68384,_receiver68382);})()});})();
_v_66796_filled=(j::truth(_v_66792_inner)?([&]()->V{V _callee68387=this->_v_66372_layer.get();return j::call(_callee68387,j::Args{_v_66795_room,([&]()->V{V _obj68386=j::object();j::put(_obj68386,this->_literals[214],_v_66792_inner);j::put(_obj68386,this->_literals[215],this->_literals[6]);return _obj68386;})()});})():_v_66795_room);
_v_66797_color=([&]()->V{V _callee68388=this->_v_66521_themed.get();return j::call(_callee68388,j::Args{this->_literals[216],j::get(_v_66789_p,this->_literals[18])});})();
_v_66798_boxed=([&]()->V{V _callee68397=this->_v_66371_border.get();return j::call(_callee68397,j::Args{_v_66796_filled,([&]()->V{V _obj68389=j::object();j::put(_obj68389,this->_literals[103],_v_66791_style);j::put(_obj68389,this->_literals[217],([&]()->V{j::Args _array68390;_array68390.push_back(V(0.0));_array68390.push_back(V(1.0));return j::array(std::move(_array68390));})());V _spread68391=(j::truth(_v_66790_title)?([&]()->V{V _obj68392=j::object();j::put(_obj68392,this->_literals[83],_v_66790_title);return _obj68392;})():([&]()->V{V _obj68393=j::object();return _obj68393;})());for(const auto &_key:j::keys(_spread68391))j::put(_obj68389,_key,j::get(_spread68391,_key));V _spread68394=(j::truth(_v_66797_color)?([&]()->V{V _obj68395=j::object();j::put(_obj68395,this->_literals[18],_v_66797_color);return _obj68395;})():([&]()->V{V _obj68396=j::object();return _obj68396;})());for(const auto &_key:j::keys(_spread68394))j::put(_obj68389,_key,j::get(_spread68394,_key));return _obj68389;})()});})();
_v_66799_name=([&]()->V{V _logical68398=([&]()->V{V _logical68399=([&]()->V{V _logical68400=j::get(_v_66789_p,this->_literals[213]);return j::nullish(_logical68400)?_v_66790_title:_logical68400;})();return j::nullish(_logical68399)?([&]()->V{V _chain68401=_v_66792_inner;if(j::nullish(_chain68401))return V{};V _chain68402=j::get(_chain68401,this->_literals[211]);V _chain68403=j::get(_chain68402,this->_literals[213]);return _chain68403;})():_logical68399;})();return j::nullish(_logical68398)?this->_literals[218]:_logical68398;})();
return ([&]()->V{V _callee68407=this->_v_66550_framing.get();return j::call(_callee68407,j::Args{([&]()->V{V _callee68406=this->_v_66387_titled.get();return j::call(_callee68406,j::Args{_v_66798_boxed,_v_66799_name,([&]()->V{V _logical68404=j::get(_v_66789_p,this->_literals[219]);return j::nullish(_logical68404)?([&]()->V{std::u16string _text68405;_text68405+=u"";_text68405+=j::string(_v_66799_name);_text68405+=u", in a box";return V(std::move(_text68405));})():_logical68404;})()});})(),V(true)});})();

}

return V{};
},2);
this->_v_66800_card.get()=j::function([=](const j::Args &_args_fn66801,const V &_receiver_fn66801,const V &_self_fn66801) mutable ->V{
V _v_66802_o;
_v_66802_o=_args_fn66801[0];
{
V _v_66803_p;
j::Cell _v_66804_title;
j::Cell _v_66805_words;
j::Cell _v_66806_footer;
j::Cell _v_66807_style;
j::Cell _v_66808_framed;
j::Cell _v_66809_width;
j::Cell _v_66810_edge;
j::Cell _v_66811_room;
V _v_66812_body;
V _v_66813_head;
V _v_66814_foot;
j::Cell _v_66815_rows;
V _v_66816_made;
_v_66803_p=([&]()->V{V _callee68409=this->_v_66382_optionsOf.get();return j::call(_callee68409,j::Args{this->_literals[220],_v_66802_o,([&]()->V{j::Args _array68408;_array68408.push_back(this->_literals[83]);_array68408.push_back(this->_literals[221]);_array68408.push_back(this->_literals[222]);_array68408.push_back(this->_literals[68]);_array68408.push_back(this->_literals[103]);_array68408.push_back(this->_literals[82]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array68408.push_back(_value);return j::array(std::move(_array68408));})()});})();
_v_66804_title.get()=([&]()->V{V _callee68410=this->_v_66386_textOf.get();return j::call(_callee68410,j::Args{this->_literals[223],j::get(_v_66803_p,this->_literals[83])});})();
_v_66805_words.get()=([&]()->V{V _callee68412=this->_v_66386_textOf.get();return j::call(_callee68412,j::Args{this->_literals[224],j::get(_v_66803_p,this->_literals[221]),([&]()->V{V _obj68411=j::object();j::put(_obj68411,this->_literals[225],V(true));return _obj68411;})()});})();
_v_66806_footer.get()=([&]()->V{V _callee68413=this->_v_66386_textOf.get();return j::call(_callee68413,j::Args{this->_literals[226],j::get(_v_66803_p,this->_literals[222])});})();
if(j::truth(([&]()->V{V _logical68414=([&]()->V{V _logical68415=j::unary("!",_v_66804_title.get());return j::truth(_logical68415)?j::unary("!",_v_66805_words.get()):_logical68415;})();return j::truth(_logical68414)?j::unary("!",_v_66806_footer.get()):_logical68414;})())){(void)(([&]()->V{V _callee68416=this->_v_66361_fail.get();return j::call(_callee68416,j::Args{this->_literals[227]});})());
}
_v_66807_style.get()=([&]()->V{V _callee68418=this->_v_66389_wordOf.get();return j::call(_callee68418,j::Args{this->_literals[228],j::get(_v_66803_p,this->_literals[103]),([&]()->V{j::Args _array68417;_array68417.push_back(this->_literals[104]);_array68417.push_back(this->_literals[207]);_array68417.push_back(this->_literals[208]);_array68417.push_back(this->_literals[209]);_array68417.push_back(this->_literals[125]);return j::array(std::move(_array68417));})(),this->_literals[104]});})();
_v_66808_framed.get()=([&]()->V{V _callee68419=this->_v_66378_boolOf.get();return j::call(_callee68419,j::Args{this->_literals[229],j::get(_v_66803_p,this->_literals[82]),V(true)});})();
_v_66809_width.get()=([&]()->V{V _callee68420=this->_v_66388_wholeOf.get();return j::call(_callee68420,j::Args{this->_literals[230],j::get(_v_66803_p,this->_literals[68]),V(36.0),V(8.0),V(320.0)});})();
_v_66810_edge.get()=(j::truth(_v_66808_framed.get())?V(1.0):V(0.0));
_v_66811_room.get()=([&]()->V{V _lhs68421=([&]()->V{V _lhs68423=_v_66809_width.get();V _rhs68424=V(2.0);return V(j::number(_lhs68423)-j::number(_rhs68424));})();V _rhs68422=([&]()->V{V _lhs68425=V(2.0);V _rhs68426=_v_66810_edge.get();return V(j::number(_lhs68425)*j::number(_rhs68426));})();return V(j::number(_lhs68421)-j::number(_rhs68422));})();
_v_66812_body=(j::truth(_v_66805_words.get())?j::get(([&]()->V{V _callee68429=this->_v_66370_text.get();return j::call(_callee68429,j::Args{([&]()->V{V _callee68427=this->_v_66359_Surface.get();return j::construct(_callee68427,j::Args{_v_66811_room.get(),V(120.0)});})(),V(0.0),V(0.0),_v_66805_words.get(),([&]()->V{V _obj68428=j::object();j::put(_obj68428,this->_literals[68],_v_66811_room.get());return _obj68428;})()});})(),this->_literals[3]):V(0.0));
if(j::truth(([&]()->V{V _lhs68430=_v_66812_body;V _rhs68431=V(100.0);return j::binary(">",_lhs68430,_rhs68431);})())){(void)(([&]()->V{V _callee68433=this->_v_66361_fail.get();return j::call(_callee68433,j::Args{([&]()->V{std::u16string _text68432;_text68432+=u"card's text wraps to ";_text68432+=j::string(_v_66812_body);_text68432+=u" rows at this width, past the 100 a card can hold: give it fewer words or more width";return V(std::move(_text68432));})()});})());
}
_v_66813_head=(j::truth(_v_66804_title.get())?V(2.0):V(0.0));
_v_66814_foot=(j::truth(_v_66806_footer.get())?(j::truth(_v_66812_body)?V(2.0):V(1.0)):V(0.0));
_v_66815_rows.get()=([&]()->V{V _lhs68434=([&]()->V{V _lhs68436=([&]()->V{V _lhs68438=([&]()->V{V _lhs68440=V(2.0);V _rhs68441=_v_66810_edge.get();return V(j::number(_lhs68440)*j::number(_rhs68441));})();V _rhs68439=_v_66813_head;return j::binary("+",_lhs68438,_rhs68439);})();V _rhs68437=_v_66812_body;return j::binary("+",_lhs68436,_rhs68437);})();V _rhs68435=_v_66814_foot;return j::binary("+",_lhs68434,_rhs68435);})();
_v_66816_made=([&]()->V{V _callee68475=this->_v_66362_piece.get();return j::call(_callee68475,j::Args{([&]()->V{V _obj68442=j::object();V _spread68443=([&]()->V{V _callee68446=this->_v_66545_naming.get();return j::call(_callee68446,j::Args{_v_66803_p,([&]()->V{V _logical68444=_v_66804_title.get();return !j::truth(_logical68444)?this->_literals[231]:_logical68444;})(),(j::truth(_v_66804_title.get())?([&]()->V{std::u16string _text68445;_text68445+=u"a card: ";_text68445+=j::string(_v_66804_title.get());_text68445+=u"";return V(std::move(_text68445));})():this->_literals[232])});})();for(const auto &_key:j::keys(_spread68443))j::put(_obj68442,_key,j::get(_spread68443,_key));j::put(_obj68442,this->_literals[99],this->_literals[135]);j::put(_obj68442,this->_literals[1],_v_66809_width.get());j::put(_obj68442,this->_literals[3],_v_66815_rows.get());j::put(_obj68442,this->_literals[101],V(0.0));j::put(_obj68442,this->_literals[71],([&]()->V{V _callee68448=this->_v_66522_tones.get();return j::call(_callee68448,j::Args{([&]()->V{V _callee68447=this->_v_66521_themed.get();return j::call(_callee68447,j::Args{this->_literals[233],j::get(_v_66803_p,this->_literals[18])});})()});})());return _obj68442;})(),j::function([=](const j::Args &_args_fn66817,const V &_receiver_fn66817,const V &_self_fn66817) mutable ->V{
V _v_66818__;
V _v_66819_s;
_v_66818__=_args_fn66817[0];
_v_66819_s=_args_fn66817[1];
{
V _v_66820_x;
V _v_66821_y;
if(j::truth(_v_66808_framed.get())){(void)(([&]()->V{V _callee68450=this->_v_66369_rect.get();return j::call(_callee68450,j::Args{_v_66819_s,V(0.0),V(0.0),_v_66809_width.get(),_v_66815_rows.get(),([&]()->V{V _obj68449=j::object();j::put(_obj68449,this->_literals[103],_v_66807_style.get());j::put(_obj68449,this->_literals[18],this->_v_66517_MUTED.get());return _obj68449;})()});})());
}
_v_66820_x=([&]()->V{V _lhs68451=_v_66810_edge.get();V _rhs68452=V(1.0);return j::binary("+",_lhs68451,_rhs68452);})();
_v_66821_y=_v_66810_edge.get();
if(j::truth(_v_66804_title.get())){
(void)(([&]()->V{V _callee68454=this->_v_66370_text.get();return j::call(_callee68454,j::Args{_v_66819_s,_v_66820_x,_v_66821_y,_v_66804_title.get(),([&]()->V{V _obj68453=j::object();j::put(_obj68453,this->_literals[68],_v_66811_room.get());j::put(_obj68453,this->_literals[234],V(false));j::put(_obj68453,this->_literals[18],this->_v_66516_ACCENT.get());return _obj68453;})()});})());
(void)(([&]()->V{V _callee68464=this->_v_66367_line.get();return j::call(_callee68464,j::Args{_v_66819_s,V(0.0),([&]()->V{V _lhs68455=_v_66821_y;V _rhs68456=V(1.0);return j::binary("+",_lhs68455,_rhs68456);})(),([&]()->V{V _lhs68457=_v_66809_width.get();V _rhs68458=V(1.0);return V(j::number(_lhs68457)-j::number(_rhs68458));})(),([&]()->V{V _lhs68459=_v_66821_y;V _rhs68460=V(1.0);return j::binary("+",_lhs68459,_rhs68460);})(),([&]()->V{V _obj68461=j::object();j::put(_obj68461,this->_literals[103],(j::truth(([&]()->V{V _lhs68462=_v_66807_style.get();V _rhs68463=this->_literals[104];return V(j::equal(_lhs68462,_rhs68463,true));})())?this->_literals[207]:_v_66807_style.get()));j::put(_obj68461,this->_literals[18],this->_v_66517_MUTED.get());return _obj68461;})()});})());
(void)((_v_66821_y=j::binary("+",_v_66821_y,V(2.0))));

}

if(j::truth(_v_66805_words.get())){(void)((_v_66821_y=j::binary("+",_v_66821_y,j::get(([&]()->V{V _callee68468=this->_v_66370_text.get();return j::call(_callee68468,j::Args{_v_66819_s,_v_66820_x,_v_66821_y,_v_66805_words.get(),([&]()->V{V _obj68467=j::object();j::put(_obj68467,this->_literals[68],_v_66811_room.get());return _obj68467;})()});})(),this->_literals[3]))));
}
if(j::truth(_v_66806_footer.get())){(void)(([&]()->V{V _callee68474=this->_v_66370_text.get();return j::call(_callee68474,j::Args{_v_66819_s,_v_66820_x,([&]()->V{V _lhs68469=([&]()->V{V _lhs68471=_v_66815_rows.get();V _rhs68472=V(1.0);return V(j::number(_lhs68471)-j::number(_rhs68472));})();V _rhs68470=_v_66810_edge.get();return V(j::number(_lhs68469)-j::number(_rhs68470));})(),_v_66806_footer.get(),([&]()->V{V _obj68473=j::object();j::put(_obj68473,this->_literals[68],_v_66811_room.get());j::put(_obj68473,this->_literals[23],this->_literals[13]);j::put(_obj68473,this->_literals[234],V(false));j::put(_obj68473,this->_literals[18],this->_v_66517_MUTED.get());return _obj68473;})()});})());
}

}

return V{};
},2)});})();
return ([&]()->V{V _callee68476=this->_v_66550_framing.get();return j::call(_callee68476,j::Args{_v_66816_made,_v_66808_framed.get()});})();

}

return V{};
},1);
this->_v_66822_typewriter.get()=j::function([=](const j::Args &_args_fn66823,const V &_receiver_fn66823,const V &_self_fn66823) mutable ->V{
V _v_66824_words;
V _v_66825_o;
_v_66824_words=_args_fn66823[0];
_v_66825_o=_args_fn66823[1];
{
V _v_66826_p;
V _v_66827_longest;
V _v_66830_width;
V _v_66831_cursor;
V _v_66832_asked;
V _v_66833_speed;
V _v_66834_typing;
V _v_66835_hold;
V _v_66836_page;
V _v_66837_first;
if(j::truth(([&]()->V{V _logical68477=([&]()->V{V _lhs68478=j::unary("typeof",_v_66824_words);V _rhs68479=this->_literals[74];return V(!j::equal(_lhs68478,_rhs68479,true));})();return !j::truth(_logical68477)?j::unary("!",([&]()->V{V _receiver68480=_v_66824_words;V _method68481=this->_literals[133];V _method=j::get(_receiver68480,_method68481);j::Args _params68482=j::Args{};return j::call(_method,_params68482,_receiver68480);})()):_logical68477;})())){(void)(([&]()->V{V _callee68485=this->_v_66361_fail.get();return j::call(_callee68485,j::Args{([&]()->V{std::u16string _text68483;_text68483+=u"typewriter() takes words to type, not ";_text68483+=j::string(([&]()->V{V _callee68484=this->_v_66384_show.get();return j::call(_callee68484,j::Args{_v_66824_words});})());_text68483+=u"";return V(std::move(_text68483));})()});})());
}
(void)((_v_66824_words=([&]()->V{V _callee68488=this->_v_66386_textOf.get();return j::call(_callee68488,j::Args{this->_literals[235],_v_66824_words,([&]()->V{V _obj68487=j::object();j::put(_obj68487,this->_literals[225],V(true));return _obj68487;})()});})()));
_v_66826_p=([&]()->V{V _callee68490=this->_v_66382_optionsOf.get();return j::call(_callee68490,j::Args{this->_literals[235],_v_66825_o,([&]()->V{j::Args _array68489;_array68489.push_back(this->_literals[149]);_array68489.push_back(this->_literals[68]);_array68489.push_back(this->_literals[236]);_array68489.push_back(this->_literals[191]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array68489.push_back(_value);return j::array(std::move(_array68489));})()});})();
_v_66827_longest=([&]()->V{V _receiver68498=j::builtin("Math");V _method68499=this->_literals[33];V _method=j::get(_receiver68498,_method68499);j::Args _params68500=([&](){j::Args _args68491;for(const auto &_v:j::elements(([&]()->V{V _receiver68492=([&]()->V{V _receiver68495=_v_66824_words;V _method68496=this->_literals[67];V _method=j::get(_receiver68495,_method68496);j::Args _params68497=j::Args{this->_literals[65]};return j::call(_method,_params68497,_receiver68495);})();V _method68493=this->_literals[41];V _method=j::get(_receiver68492,_method68493);j::Args _params68494=j::Args{j::function([=](const j::Args &_args_fn66828,const V &_receiver_fn66828,const V &_self_fn66828) mutable ->V{
V _v_66829_l;
_v_66829_l=_args_fn66828[0];
return j::get(_v_66829_l,this->_literals[35]);
return V{};
},1)};return j::call(_method,_params68494,_receiver68492);})()))_args68491.push_back(_v);return _args68491;})();return j::call(_method,_params68500,_receiver68498);})();
_v_66830_width=([&]()->V{V _receiver68504=j::builtin("Math");V _method68505=this->_literals[32];V _method=j::get(_receiver68504,_method68505);j::Args _params68506=j::Args{_v_66827_longest,([&]()->V{V _callee68501=this->_v_66388_wholeOf.get();return j::call(_callee68501,j::Args{this->_literals[237],j::get(_v_66826_p,this->_literals[68]),V(40.0),V(4.0),V(300.0)});})()};return j::call(_method,_params68506,_receiver68504);})();
_v_66831_cursor=([&]()->V{V _callee68507=this->_v_66378_boolOf.get();return j::call(_callee68507,j::Args{this->_literals[238],j::get(_v_66826_p,this->_literals[236]),V(true)});})();
_v_66832_asked=(j::truth(([&]()->V{V _lhs68508=j::get(_v_66826_p,this->_literals[191]);V _rhs68509=this->_literals[239];return V(j::equal(_lhs68508,_rhs68509,true));})())?j::builtin("undefined"):([&]()->V{V _callee68510=this->_v_66381_numberOf.get();return j::call(_callee68510,j::Args{this->_literals[240],j::get(_v_66826_p,this->_literals[191]),V(3.0),V(0.0),V(60.0)});})());
_v_66833_speed=([&]()->V{V _lhs68511=V(14.0);V _rhs68512=([&]()->V{V _callee68513=this->_v_66385_speedOf.get();return j::call(_callee68513,j::Args{this->_literals[235],j::get(_v_66826_p,this->_literals[149])});})();return V(j::number(_lhs68511)*j::number(_rhs68512));})();
_v_66834_typing=([&]()->V{V _lhs68514=j::get(([&]()->V{V _receiver68516=_v_66824_words;V _method68517=this->_literals[66];V _method=j::get(_receiver68516,_method68517);j::Args _params68518=j::Args{j::regexp(u"\\s","g"),this->_literals[69]};return j::call(_method,_params68518,_receiver68516);})(),this->_literals[35]);V _rhs68515=_v_66833_speed;return V(j::number(_lhs68514)/j::number(_rhs68515));})();
if(j::truth(([&]()->V{V _logical68519=([&]()->V{V _lhs68520=_v_66832_asked;V _rhs68521=j::builtin("undefined");return V(!j::equal(_lhs68520,_rhs68521,true));})();return j::truth(_logical68519)?([&]()->V{V _lhs68522=([&]()->V{V _lhs68524=_v_66834_typing;V _rhs68525=_v_66832_asked;return j::binary("+",_lhs68524,_rhs68525);})();V _rhs68523=V(60.0);return j::binary(">",_lhs68522,_rhs68523);})():_logical68519;})())){(void)(([&]()->V{V _callee68530=this->_v_66361_fail.get();return j::call(_callee68530,j::Args{([&]()->V{std::u16string _text68526;_text68526+=u"typewriter() takes ";_text68526+=j::string(j::unary("+",([&]()->V{V _receiver68527=_v_66834_typing;V _method68528=this->_literals[76];V _method=j::get(_receiver68527,_method68528);j::Args _params68529=j::Args{V(1.0)};return j::call(_method,_params68529,_receiver68527);})()));_text68526+=u" seconds to type these words at this speed, past the minute a loop can be: give it fewer words, more speed, or hold: \"forever\"";return V(std::move(_text68526));})()});})());
}
_v_66835_hold=(j::truth(([&]()->V{V _lhs68531=_v_66832_asked;V _rhs68532=j::builtin("undefined");return V(j::equal(_lhs68531,_rhs68532,true));})())?j::builtin("undefined"):([&]()->V{V _lhs68533=([&]()->V{V _callee68537=this->_v_66380_loopOf.get();return j::call(_callee68537,j::Args{([&]()->V{V _lhs68535=_v_66834_typing;V _rhs68536=_v_66832_asked;return j::binary("+",_lhs68535,_rhs68536);})(),V(true)});})();V _rhs68534=_v_66834_typing;return V(j::number(_lhs68533)-j::number(_rhs68534));})());
_v_66836_page=([&]()->V{V _callee68541=this->_v_66531_inked.get();return j::call(_callee68541,j::Args{this->_literals[235],_v_66824_words,([&]()->V{V _callee68538=this->_v_66521_themed.get();return j::call(_callee68538,j::Args{this->_literals[241],j::get(_v_66826_p,this->_literals[18])});})(),_v_66830_width,([&]()->V{V _lhs68539=_v_66830_width;V _rhs68540=(j::truth(_v_66831_cursor)?V(1.0):V(0.0));return j::binary("+",_lhs68539,_rhs68540);})()});})();
_v_66837_first=([&]()->V{V _receiver68542=j::get(([&]()->V{V _receiver68545=([&]()->V{V _receiver68548=_v_66824_words;V _method68549=this->_literals[133];V _method=j::get(_receiver68548,_method68549);j::Args _params68550=j::Args{};return j::call(_method,_params68550,_receiver68548);})();V _method68546=this->_literals[67];V _method=j::get(_receiver68545,_method68546);j::Args _params68547=j::Args{this->_literals[65]};return j::call(_method,_params68547,_receiver68545);})(),V(0.0));V _method68543=this->_literals[242];V _method=j::get(_receiver68542,_method68543);j::Args _params68544=j::Args{V(0.0),V(40.0)};return j::call(_method,_params68544,_receiver68542);})();
return ([&]()->V{V _callee68560=this->_v_66374_typeIn.get();return j::call(_callee68560,j::Args{_v_66836_page,([&]()->V{V _obj68551=j::object();j::put(_obj68551,this->_literals[149],_v_66833_speed);j::put(_obj68551,this->_literals[236],(j::truth(_v_66831_cursor)?this->_literals[243]:V(false)));V _spread68552=(j::truth(([&]()->V{V _lhs68553=_v_66835_hold;V _rhs68554=j::builtin("undefined");return V(!j::equal(_lhs68553,_rhs68554,true));})())?([&]()->V{V _obj68555=j::object();j::put(_obj68555,this->_literals[191],_v_66835_hold);return _obj68555;})():([&]()->V{V _obj68556=j::object();return _obj68556;})());for(const auto &_key:j::keys(_spread68552))j::put(_obj68551,_key,j::get(_spread68552,_key));V _spread68557=([&]()->V{V _callee68559=this->_v_66545_naming.get();return j::call(_callee68559,j::Args{_v_66826_p,_v_66837_first,([&]()->V{std::u16string _text68558;_text68558+=u"";_text68558+=j::string(_v_66837_first);_text68558+=u", typed out";return V(std::move(_text68558));})()});})();for(const auto &_key:j::keys(_spread68557))j::put(_obj68551,_key,j::get(_spread68557,_key));return _obj68551;})()});})();

}

return V{};
},2);
this->_v_66838_marquee.get()=j::function([=](const j::Args &_args_fn66839,const V &_receiver_fn66839,const V &_self_fn66839) mutable ->V{
V _v_66840_words;
V _v_66841_o;
_v_66840_words=_args_fn66839[0];
_v_66841_o=_args_fn66839[1];
{
V _v_66842_p;
V _v_66843_width;
V _v_66844_to;
V _v_66845_color;
V _v_66846_big;
V _v_66847_speed;
V _v_66848_src;
V _v_66849_length;
V _v_66850_crossing;
if(j::truth(([&]()->V{V _logical68561=([&]()->V{V _lhs68562=j::unary("typeof",_v_66840_words);V _rhs68563=this->_literals[74];return V(!j::equal(_lhs68562,_rhs68563,true));})();return !j::truth(_logical68561)?j::unary("!",([&]()->V{V _receiver68564=_v_66840_words;V _method68565=this->_literals[133];V _method=j::get(_receiver68564,_method68565);j::Args _params68566=j::Args{};return j::call(_method,_params68566,_receiver68564);})()):_logical68561;})())){(void)(([&]()->V{V _callee68569=this->_v_66361_fail.get();return j::call(_callee68569,j::Args{([&]()->V{std::u16string _text68567;_text68567+=u"marquee() takes words to scroll, not ";_text68567+=j::string(([&]()->V{V _callee68568=this->_v_66384_show.get();return j::call(_callee68568,j::Args{_v_66840_words});})());_text68567+=u"";return V(std::move(_text68567));})()});})());
}
(void)((_v_66840_words=([&]()->V{V _receiver68571=([&]()->V{V _callee68575=this->_v_66386_textOf.get();return j::call(_callee68575,j::Args{this->_literals[245],_v_66840_words,([&]()->V{V _obj68574=j::object();j::put(_obj68574,this->_literals[225],V(true));return _obj68574;})()});})();V _method68572=this->_literals[66];V _method=j::get(_receiver68571,_method68572);j::Args _params68573=j::Args{j::regexp(u"\\n","g"),this->_literals[244]};return j::call(_method,_params68573,_receiver68571);})()));
_v_66842_p=([&]()->V{V _callee68577=this->_v_66382_optionsOf.get();return j::call(_callee68577,j::Args{this->_literals[245],_v_66841_o,([&]()->V{j::Args _array68576;_array68576.push_back(this->_literals[68]);_array68576.push_back(this->_literals[149]);_array68576.push_back(this->_literals[246]);_array68576.push_back(this->_literals[247]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array68576.push_back(_value);return j::array(std::move(_array68576));})()});})();
_v_66843_width=([&]()->V{V _callee68578=this->_v_66388_wholeOf.get();return j::call(_callee68578,j::Args{this->_literals[248],j::get(_v_66842_p,this->_literals[68]),V(40.0),V(4.0),V(320.0)});})();
_v_66844_to=([&]()->V{V _callee68580=this->_v_66389_wordOf.get();return j::call(_callee68580,j::Args{this->_literals[249],j::get(_v_66842_p,this->_literals[246]),([&]()->V{j::Args _array68579;_array68579.push_back(this->_literals[11]);_array68579.push_back(this->_literals[13]);return j::array(std::move(_array68579));})(),this->_literals[11]});})();
_v_66845_color=([&]()->V{V _callee68581=this->_v_66521_themed.get();return j::call(_callee68581,j::Args{this->_literals[250],j::get(_v_66842_p,this->_literals[18])});})();
_v_66846_big=([&]()->V{V _callee68582=this->_v_66378_boolOf.get();return j::call(_callee68582,j::Args{this->_literals[251],j::get(_v_66842_p,this->_literals[247]),V(false)});})();
_v_66847_speed=([&]()->V{V _callee68583=this->_v_66385_speedOf.get();return j::call(_callee68583,j::Args{this->_literals[245],j::get(_v_66842_p,this->_literals[149])});})();
if(j::truth(([&]()->V{V _logical68584=j::unary("!",_v_66846_big);return j::truth(_logical68584)?([&]()->V{V _lhs68585=([&]()->V{V _lhs68587=j::get(_v_66840_words,this->_literals[35]);V _rhs68588=V(2.0);return j::binary("+",_lhs68587,_rhs68588);})();V _rhs68586=V(320.0);return j::binary(">",_lhs68585,_rhs68586);})():_logical68584;})())){(void)(([&]()->V{V _callee68590=this->_v_66361_fail.get();return j::call(_callee68590,j::Args{([&]()->V{std::u16string _text68589;_text68589+=u"marquee() scrolls up to 318 characters, and these words are ";_text68589+=j::string(j::get(_v_66840_words,this->_literals[35]));_text68589+=u": split them into two marquees";return V(std::move(_text68589));})()});})());
}
_v_66848_src=(j::truth(_v_66846_big)?([&]()->V{V _callee68595=this->_v_66356_banner.get();return j::call(_callee68595,j::Args{_v_66840_words,([&]()->V{V _obj68591=j::object();j::put(_obj68591,this->_literals[252],this->_literals[130]);V _spread68592=(j::truth(_v_66845_color)?([&]()->V{V _obj68593=j::object();j::put(_obj68593,this->_literals[18],_v_66845_color);return _obj68593;})():([&]()->V{V _obj68594=j::object();return _obj68594;})());for(const auto &_key:j::keys(_spread68592))j::put(_obj68591,_key,j::get(_spread68592,_key));return _obj68591;})()});})():([&]()->V{V _callee68597=this->_v_66531_inked.get();return j::call(_callee68597,j::Args{this->_literals[245],([&]()->V{std::u16string _text68596;_text68596+=u" ";_text68596+=j::string(_v_66840_words);_text68596+=u" ";return V(std::move(_text68596));})(),_v_66845_color});})());
_v_66849_length=(j::truth(([&]()->V{V _lhs68598=_v_66848_src;V _rhs68599=this->_v_66359_Surface.get();return j::binary("instanceof",_lhs68598,_rhs68599);})())?j::get(_v_66848_src,this->_literals[1]):j::get(j::get(_v_66848_src,this->_literals[211]),this->_literals[1]));
_v_66850_crossing=([&]()->V{V _lhs68600=([&]()->V{V _lhs68602=([&]()->V{V _lhs68604=_v_66843_width;V _rhs68605=_v_66849_length;return j::binary("+",_lhs68604,_rhs68605);})();V _rhs68603=V(10.0);return V(j::number(_lhs68602)/j::number(_rhs68603));})();V _rhs68601=_v_66847_speed;return V(j::number(_lhs68600)/j::number(_rhs68601));})();
if(j::truth(([&]()->V{V _lhs68606=_v_66850_crossing;V _rhs68607=V(60.0);return j::binary(">",_lhs68606,_rhs68607);})())){
V _v_66851_most;
_v_66851_most=([&]()->V{V _number68612=([&]()->V{V _lhs68613=([&]()->V{V _lhs68615=V(600.0);V _rhs68616=_v_66847_speed;return V(j::number(_lhs68615)*j::number(_rhs68616));})();V _rhs68614=_v_66843_width;return V(j::number(_lhs68613)-j::number(_rhs68614));})();return V(std::floor(j::number(_number68612)));})();
(void)(([&]()->V{V _callee68619=this->_v_66361_fail.get();return j::call(_callee68619,j::Args{([&]()->V{std::u16string _text68617;_text68617+=u"marquee() takes ";_text68617+=j::string(([&]()->V{V _number68618=_v_66850_crossing;return V(std::floor(j::number(_number68618)+.5));})());_text68617+=u" seconds to cross at this speed, past the minute a loop can be: at this width and speed it scrolls up to ";_text68617+=j::string(_v_66851_most);_text68617+=u" columns of words, so give it fewer, a narrower width, or more speed";return V(std::move(_text68617));})()});})());

}

return ([&]()->V{V _callee68631=this->_v_66390_drifting.get();return j::call(_callee68631,j::Args{_v_66848_src,([&]()->V{V _obj68620=j::object();j::put(_obj68620,this->_literals[246],_v_66844_to);j::put(_obj68620,this->_literals[150],([&]()->V{V _callee68621=this->_v_66380_loopOf.get();return j::call(_callee68621,j::Args{_v_66850_crossing});})());j::put(_obj68620,this->_literals[1],_v_66843_width);V _spread68622=([&]()->V{V _callee68630=this->_v_66545_naming.get();return j::call(_callee68630,j::Args{_v_66842_p,([&]()->V{V _receiver68623=_v_66840_words;V _method68624=this->_literals[242];V _method=j::get(_receiver68623,_method68624);j::Args _params68625=j::Args{V(0.0),V(40.0)};return j::call(_method,_params68625,_receiver68623);})(),([&]()->V{std::u16string _text68626;_text68626+=u"";_text68626+=j::string(([&]()->V{V _receiver68627=_v_66840_words;V _method68628=this->_literals[242];V _method=j::get(_receiver68627,_method68628);j::Args _params68629=j::Args{V(0.0),V(40.0)};return j::call(_method,_params68629,_receiver68627);})());_text68626+=u", scrolling ";_text68626+=j::string(_v_66844_to);_text68626+=u"";return V(std::move(_text68626));})()});})();for(const auto &_key:j::keys(_spread68622))j::put(_obj68620,_key,j::get(_spread68622,_key));return _obj68620;})()});})();

}

return V{};
},2);
this->_v_66852_countdown.get()=j::function([=](const j::Args &_args_fn66853,const V &_receiver_fn66853,const V &_self_fn66853) mutable ->V{
V _v_66854_o;
_v_66854_o=_args_fn66853[0];
{
V _v_66855_p;
j::Cell _v_66856_from;
V _v_66857_to;
V _v_66858_then;
j::Cell _v_66859_seconds;
V _v_66860_transition;
V _v_66861_color;
j::Cell _v_66862_look;
V _v_66863_steps;
V _v_66867_all;
V _v_66868_counted;
_v_66855_p=([&]()->V{V _callee68633=this->_v_66382_optionsOf.get();return j::call(_callee68633,j::Args{this->_literals[253],_v_66854_o,([&]()->V{j::Args _array68632;_array68632.push_back(this->_literals[36]);_array68632.push_back(this->_literals[246]);_array68632.push_back(this->_literals[254]);_array68632.push_back(this->_literals[117]);_array68632.push_back(this->_literals[255]);_array68632.push_back(this->_literals[256]);for(const auto &_value:j::elements(this->_v_66544_WIDGET.get()))_array68632.push_back(_value);return j::array(std::move(_array68632));})()});})();
_v_66856_from.get()=([&]()->V{V _callee68634=this->_v_66388_wholeOf.get();return j::call(_callee68634,j::Args{this->_literals[257],j::get(_v_66855_p,this->_literals[36]),V(10.0),V(0.0),V(999.0)});})();
_v_66857_to=([&]()->V{V _callee68635=this->_v_66388_wholeOf.get();return j::call(_callee68635,j::Args{this->_literals[258],j::get(_v_66855_p,this->_literals[246]),V(1.0),V(0.0),V(999.0)});})();
if(j::truth(([&]()->V{V _lhs68636=_v_66857_to;V _rhs68637=_v_66856_from.get();return j::binary(">",_lhs68636,_rhs68637);})())){(void)(([&]()->V{V _callee68639=this->_v_66361_fail.get();return j::call(_callee68639,j::Args{([&]()->V{std::u16string _text68638;_text68638+=u"countdown's to takes a number no more than its from, ";_text68638+=j::string(_v_66856_from.get());_text68638+=u", not ";_text68638+=j::string(_v_66857_to);_text68638+=u"";return V(std::move(_text68638));})()});})());
}
if(j::truth(([&]()->V{V _lhs68640=([&]()->V{V _lhs68642=_v_66856_from.get();V _rhs68643=_v_66857_to;return V(j::number(_lhs68642)-j::number(_rhs68643));})();V _rhs68641=V(99.0);return j::binary(">",_lhs68640,_rhs68641);})())){(void)(([&]()->V{V _callee68649=this->_v_66361_fail.get();return j::call(_callee68649,j::Args{([&]()->V{std::u16string _text68644;_text68644+=u"countdown() counts up to 100 numbers: from ";_text68644+=j::string(_v_66856_from.get());_text68644+=u" to ";_text68644+=j::string(_v_66857_to);_text68644+=u" is ";_text68644+=j::string(([&]()->V{V _lhs68645=([&]()->V{V _lhs68647=_v_66856_from.get();V _rhs68648=_v_66857_to;return V(j::number(_lhs68647)-j::number(_rhs68648));})();V _rhs68646=V(1.0);return j::binary("+",_lhs68645,_rhs68646);})());_text68644+=u"";return V(std::move(_text68644));})()});})());
}
_v_66858_then=(j::truth(([&]()->V{V _lhs68650=j::get(_v_66855_p,this->_literals[254]);V _rhs68651=j::builtin("undefined");return V(j::equal(_lhs68650,_rhs68651,true));})())?this->_literals[259]:(j::truth(([&]()->V{V _lhs68652=j::get(_v_66855_p,this->_literals[254]);V _rhs68653=V(false);return V(j::equal(_lhs68652,_rhs68653,true));})())?V(false):([&]()->V{V _callee68654=this->_v_66386_textOf.get();return j::call(_callee68654,j::Args{this->_literals[260],j::get(_v_66855_p,this->_literals[254])});})()));
if(j::truth(([&]()->V{V _logical68655=([&]()->V{V _lhs68656=_v_66858_then;V _rhs68657=V(false);return V(!j::equal(_lhs68656,_rhs68657,true));})();return j::truth(_logical68655)?j::unary("!",([&]()->V{V _receiver68658=_v_66858_then;V _method68659=this->_literals[133];V _method=j::get(_receiver68658,_method68659);j::Args _params68660=j::Args{};return j::call(_method,_params68660,_receiver68658);})()):_logical68655;})())){(void)(([&]()->V{V _callee68663=this->_v_66361_fail.get();return j::call(_callee68663,j::Args{([&]()->V{std::u16string _text68661;_text68661+=u"countdown's then takes words, or false for none, not ";_text68661+=j::string(([&]()->V{V _callee68662=this->_v_66384_show.get();return j::call(_callee68662,j::Args{_v_66858_then});})());_text68661+=u"";return V(std::move(_text68661));})()});})());
}
_v_66859_seconds.get()=([&]()->V{V _callee68664=this->_v_66381_numberOf.get();return j::call(_callee68664,j::Args{this->_literals[261],j::get(_v_66855_p,this->_literals[117]),V(1.0),V(0.2),V(60.0)});})();
_v_66860_transition=([&]()->V{V _callee68666=this->_v_66389_wordOf.get();return j::call(_callee68666,j::Args{this->_literals[262],j::get(_v_66855_p,this->_literals[256]),([&]()->V{j::Args _array68665;_array68665.push_back(this->_literals[263]);_array68665.push_back(this->_literals[264]);_array68665.push_back(this->_literals[265]);_array68665.push_back(this->_literals[266]);return j::array(std::move(_array68665));})(),this->_literals[263]});})();
_v_66861_color=(j::truth(([&]()->V{V _logical68667=([&]()->V{V _lhs68668=j::unary("typeof",j::get(_v_66855_p,this->_literals[18]));V _rhs68669=this->_literals[74];return V(j::equal(_lhs68668,_rhs68669,true));})();return j::truth(_logical68667)?j::unary("!",([&]()->V{V _receiver68670=j::get(_v_66855_p,this->_literals[18]);V _method68671=this->_literals[15];V _method=j::get(_receiver68670,_method68671);j::Args _params68672=j::Args{this->_literals[139]};return j::call(_method,_params68672,_receiver68670);})()):_logical68667;})())?([&]()->V{V _callee68673=this->_v_66391_palette.get();return j::call(_callee68673,j::Args{j::get(_v_66855_p,this->_literals[18])});})():j::get(_v_66855_p,this->_literals[18]));
_v_66862_look.get()=([&]()->V{V _obj68674=j::object();j::put(_obj68674,this->_literals[252],this->_literals[130]);V _spread68675=(j::truth(j::get(_v_66855_p,this->_literals[255]))?([&]()->V{V _obj68676=j::object();j::put(_obj68676,this->_literals[255],j::get(_v_66855_p,this->_literals[255]));return _obj68676;})():([&]()->V{V _obj68677=j::object();return _obj68677;})());for(const auto &_key:j::keys(_spread68675))j::put(_obj68674,_key,j::get(_spread68675,_key));V _spread68678=(j::truth(([&]()->V{V _lhs68679=_v_66861_color;V _rhs68680=j::builtin("undefined");return V(!j::equal(_lhs68679,_rhs68680,true));})())?([&]()->V{V _obj68681=j::object();j::put(_obj68681,this->_literals[18],_v_66861_color);return _obj68681;})():([&]()->V{V _obj68682=j::object();return _obj68682;})());for(const auto &_key:j::keys(_spread68678))j::put(_obj68674,_key,j::get(_spread68678,_key));return _obj68674;})();
_v_66863_steps=([&]()->V{V _receiver68693=j::builtin("Array");V _method68694=this->_literals[36];V _method=j::get(_receiver68693,_method68694);j::Args _params68695=j::Args{([&]()->V{V _obj68683=j::object();j::put(_obj68683,this->_literals[35],([&]()->V{V _lhs68684=([&]()->V{V _lhs68686=_v_66856_from.get();V _rhs68687=_v_66857_to;return V(j::number(_lhs68686)-j::number(_rhs68687));})();V _rhs68685=V(1.0);return j::binary("+",_lhs68684,_rhs68685);})());return _obj68683;})(),j::function([=](const j::Args &_args_fn66864,const V &_receiver_fn66864,const V &_self_fn66864) mutable ->V{
V _v_66865__;
V _v_66866_i;
_v_66865__=_args_fn66864[0];
_v_66866_i=_args_fn66864[1];
return ([&]()->V{V _obj68688=j::object();j::put(_obj68688,this->_literals[214],([&]()->V{V _callee68692=this->_v_66356_banner.get();return j::call(_callee68692,j::Args{([&]()->V{V _callee68691=j::builtin("String");return j::call(_callee68691,j::Args{([&]()->V{V _lhs68689=_v_66856_from.get();V _rhs68690=_v_66866_i;return V(j::number(_lhs68689)-j::number(_rhs68690));})()});})(),_v_66862_look.get()});})());j::put(_obj68688,this->_literals[117],_v_66859_seconds.get());return _obj68688;})();
return V{};
},2)};return j::call(_method,_params68695,_receiver68693);})();
_v_66867_all=(j::truth(([&]()->V{V _lhs68696=_v_66858_then;V _rhs68697=V(false);return V(j::equal(_lhs68696,_rhs68697,true));})())?_v_66863_steps:([&]()->V{j::Args _array68698;for(const auto &_value:j::elements(_v_66863_steps))_array68698.push_back(_value);_array68698.push_back(([&]()->V{V _obj68699=j::object();j::put(_obj68699,this->_literals[214],([&]()->V{V _callee68700=this->_v_66356_banner.get();return j::call(_callee68700,j::Args{_v_66858_then,_v_66862_look.get()});})());j::put(_obj68699,this->_literals[117],([&]()->V{V _receiver68703=j::builtin("Math");V _method68704=this->_literals[33];V _method=j::get(_receiver68703,_method68704);j::Args _params68705=j::Args{V(2.0),_v_66859_seconds.get()};return j::call(_method,_params68705,_receiver68703);})());return _obj68699;})());return j::array(std::move(_array68698));})());
_v_66868_counted=([&]()->V{V _callee68716=this->_v_66373_sequence.get();return j::call(_callee68716,j::Args{_v_66867_all,([&]()->V{V _obj68706=j::object();j::put(_obj68706,this->_literals[256],_v_66860_transition);j::put(_obj68706,this->_literals[267],(j::truth(([&]()->V{V _lhs68707=_v_66860_transition;V _rhs68708=this->_literals[263];return V(j::equal(_lhs68707,_rhs68708,true));})())?V(0.0):([&]()->V{V _receiver68713=j::builtin("Math");V _method68714=this->_literals[32];V _method=j::get(_receiver68713,_method68714);j::Args _params68715=j::Args{V(0.3),([&]()->V{V _lhs68709=_v_66859_seconds.get();V _rhs68710=V(2.0);return V(j::number(_lhs68709)/j::number(_rhs68710));})()};return j::call(_method,_params68715,_receiver68713);})()));return _obj68706;})()});})();
return ([&]()->V{V _callee68721=this->_v_66387_titled.get();return j::call(_callee68721,j::Args{_v_66868_counted,([&]()->V{V _logical68717=j::get(_v_66855_p,this->_literals[213]);return j::nullish(_logical68717)?this->_literals[268]:_logical68717;})(),([&]()->V{V _logical68718=j::get(_v_66855_p,this->_literals[219]);return j::nullish(_logical68718)?([&]()->V{std::u16string _text68719;_text68719+=u"counting down from ";_text68719+=j::string(_v_66856_from.get());_text68719+=u"";_text68719+=j::string((j::truth(_v_66858_then)?([&]()->V{std::u16string _text68720;_text68720+=u", then ";_text68720+=j::string(_v_66858_then);_text68720+=u"";return V(std::move(_text68720));})():this->_literals[69]));_text68719+=u"";return V(std::move(_text68719));})():_logical68718;})()});})();

}

return V{};
},1);
auto &_import1184=j::module("banner");
this->_v_66356_banner=_import1184.exported("banner");
auto &_import1241=j::module("kit/core");
this->_v_66357_INK=_import1241.exported("INK");
this->_v_66358_Palette=_import1241.exported("Palette");
this->_v_66359_Surface=_import1241.exported("Surface");
this->_v_66360_TAU=_import1241.exported("TAU");
this->_v_66361_fail=_import1241.exported("fail");
this->_v_66362_piece=_import1241.exported("piece");
auto &_import1369=j::module("kit/draw");
this->_v_66363_arc=_import1369.exported("arc");
this->_v_66364_braille=_import1369.exported("braille");
this->_v_66365_circle=_import1369.exported("circle");
this->_v_66366_label=_import1369.exported("label");
this->_v_66367_line=_import1369.exported("line");
this->_v_66368_ray=_import1369.exported("ray");
this->_v_66369_rect=_import1369.exported("rect");
this->_v_66370_text=_import1369.exported("text");
auto &_import1477=j::module("kit/compose");
this->_v_66371_border=_import1477.exported("border");
this->_v_66372_layer=_import1477.exported("layer");
this->_v_66373_sequence=_import1477.exported("sequence");
auto &_import1547=j::module("kit/fx");
this->_v_66374_typeIn=_import1547.exported("typeIn");
auto &_import1582=j::module("kit/math");
this->_v_66375_ease=_import1582.exported("ease");
this->_v_66376_loopNoise=_import1582.exported("loopNoise");
auto &_import1628=j::module("kit/recipes/checks");
this->_v_66377_NAMING=_import1628.exported("NAMING");
this->_v_66378_boolOf=_import1628.exported("boolOf");
this->_v_66379_colorOf=_import1628.exported("colorOf");
this->_v_66380_loopOf=_import1628.exported("loopOf");
this->_v_66381_numberOf=_import1628.exported("numberOf");
this->_v_66382_optionsOf=_import1628.exported("optionsOf");
this->_v_66383_secondsOf=_import1628.exported("secondsOf");
this->_v_66384_show=_import1628.exported("show");
this->_v_66385_speedOf=_import1628.exported("speedOf");
this->_v_66386_textOf=_import1628.exported("textOf");
this->_v_66387_titled=_import1628.exported("titled");
this->_v_66388_wholeOf=_import1628.exported("wholeOf");
this->_v_66389_wordOf=_import1628.exported("wordOf");
auto &_import1783=j::module("kit/recipes/motion");
this->_v_66390_drifting=_import1783.exported("drifting");
auto &_import1823=j::module("kit/recipes/palettes");
this->_v_66391_palette=_import1823.exported("palette");
auto &_import1898=j::module("kit/recipes/words");
this->_v_66392_pieceOf=_import1898.exported("pieceOf");
this->exports["at"]=this->_v_66406_at;
this->exports["textAt"]=this->_v_66416_textAt;
this->exports["ring"]=this->_v_66427_ring;
this->exports["inset"]=this->_v_66444_inset;
this->exports["across"]=this->_v_66471_across;
this->exports["down"]=this->_v_66481_down;
this->exports["tiles"]=this->_v_66491_tiles;
this->exports["slot"]=this->_v_66502_slot;
this->exports["clockFace"]=this->_v_66565_clockFace;
this->exports["progressBar"]=this->_v_66596_progressBar;
this->exports["spinners"]=this->_v_66631_spinners;
this->exports["spinner"]=this->_v_66632_spinner;
this->exports["gauge"]=this->_v_66646_gauge;
this->exports["sparkline"]=this->_v_66669_sparkline;
this->exports["barChart"]=this->_v_66713_barChart;
this->exports["panel"]=this->_v_66785_panel;
this->exports["card"]=this->_v_66800_card;
this->exports["typewriter"]=this->_v_66822_typewriter;
this->exports["marquee"]=this->_v_66838_marquee;
this->exports["countdown"]=this->_v_66852_countdown;
this->_v_66393_ANCHORS.get()=([&]()->V{j::Args _array68722;_array68722.push_back(this->_literals[269]);_array68722.push_back(this->_literals[14]);_array68722.push_back(this->_literals[270]);_array68722.push_back(this->_literals[11]);_array68722.push_back(this->_literals[6]);_array68722.push_back(this->_literals[13]);_array68722.push_back(this->_literals[271]);_array68722.push_back(this->_literals[16]);_array68722.push_back(this->_literals[272]);return j::array(std::move(_array68722));})();
this->_v_66401_anchorOf.get()=j::function([=](const j::Args &_args_fn66402,const V &_receiver_fn66402,const V &_self_fn66402) mutable ->V{
V _v_66403_what;
V _v_66404_v;
V _v_66405_def;
_v_66403_what=_args_fn66402[0];
_v_66404_v=_args_fn66402[1];
_v_66405_def=_args_fn66402[2];
return ([&]()->V{V _callee68723=this->_v_66389_wordOf.get();return j::call(_callee68723,j::Args{_v_66403_what,_v_66404_v,this->_v_66393_ANCHORS.get(),_v_66405_def});})();
return V{};
},3);
this->_v_66515_TONES.get()=([&]()->V{V _obj68724=j::object();j::put(_obj68724,this->_literals[57],this->_v_66357_INK.get());j::put(_obj68724,this->_literals[58],([&]()->V{V _obj68725=j::object();j::put(_obj68725,this->_literals[63],this->_literals[273]);j::put(_obj68725,this->_literals[64],this->_literals[274]);return _obj68725;})());j::put(_obj68724,this->_literals[59],([&]()->V{V _obj68726=j::object();j::put(_obj68726,this->_literals[63],this->_literals[275]);j::put(_obj68726,this->_literals[64],this->_literals[276]);return _obj68726;})());j::put(_obj68724,this->_literals[60],([&]()->V{V _obj68727=j::object();j::put(_obj68727,this->_literals[63],this->_literals[277]);j::put(_obj68727,this->_literals[64],this->_literals[278]);return _obj68727;})());j::put(_obj68724,this->_literals[61],([&]()->V{V _obj68728=j::object();j::put(_obj68728,this->_literals[63],this->_literals[279]);j::put(_obj68728,this->_literals[64],this->_literals[280]);return _obj68728;})());j::put(_obj68724,this->_literals[62],([&]()->V{V _obj68729=j::object();j::put(_obj68729,this->_literals[63],this->_literals[281]);j::put(_obj68729,this->_literals[64],this->_literals[282]);return _obj68729;})());return _obj68724;})();
this->_v_66516_ACCENT.get()=V(1.0);
this->_v_66517_MUTED.get()=V(2.0);
this->_v_66518_GOOD.get()=V(3.0);
this->_v_66519_WARN.get()=V(4.0);
this->_v_66520_BAD.get()=V(5.0);
this->_v_66521_themed.get()=this->_v_66379_colorOf.get();
this->_v_66544_WIDGET.get()=([&]()->V{j::Args _array68730;_array68730.push_back(this->_literals[18]);for(const auto &_value:j::elements(this->_v_66377_NAMING.get()))_array68730.push_back(_value);return j::array(std::move(_array68730));})();
this->_v_66545_naming.get()=j::function([=](const j::Args &_args_fn66546,const V &_receiver_fn66546,const V &_self_fn66546) mutable ->V{
V _v_66547_o;
V _v_66548_name;
V _v_66549_note;
_v_66547_o=_args_fn66546[0];
_v_66548_name=_args_fn66546[1];
_v_66549_note=_args_fn66546[2];
return ([&]()->V{V _obj68731=j::object();j::put(_obj68731,this->_literals[213],([&]()->V{V _logical68732=j::get(_v_66547_o,this->_literals[213]);return j::nullish(_logical68732)?_v_66548_name:_logical68732;})());j::put(_obj68731,this->_literals[219],([&]()->V{V _receiver68733=([&]()->V{V _logical68736=j::get(_v_66547_o,this->_literals[219]);return j::nullish(_logical68736)?_v_66549_note:_logical68736;})();V _method68734=this->_literals[242];V _method=j::get(_receiver68733,_method68734);j::Args _params68735=j::Args{V(0.0),V(72.0)};return j::call(_method,_params68735,_receiver68733);})());return _obj68731;})();
return V{};
},3);
this->_v_66550_framing.get()=j::function([=](const j::Args &_args_fn66551,const V &_receiver_fn66551,const V &_self_fn66551) mutable ->V{
V _v_66552_p;
V _v_66553_framed;
_v_66552_p=_args_fn66551[0];
_v_66553_framed=_args_fn66551[1];
return (j::truth(_v_66553_framed)?([&]()->V{V _receiver68738=j::builtin("Object");V _method68739=this->_literals[284];V _method=j::get(_receiver68738,_method68739);j::Args _params68740=j::Args{_v_66552_p,([&]()->V{V _obj68737=j::object();j::put(_obj68737,this->_literals[283],V(true));return _obj68737;})()};return j::call(_method,_params68740,_receiver68738);})():_v_66552_p);
return V{};
},2);
this->_v_66595_EIGHTHS.get()=this->_literals[285];
this->_v_66631_spinners.get()=([&]()->V{V _obj68741=j::object();j::put(_obj68741,this->_literals[126],this->_literals[286]);j::put(_obj68741,this->_literals[287],this->_literals[288]);j::put(_obj68741,this->_literals[289],this->_literals[290]);j::put(_obj68741,this->_literals[291],this->_literals[292]);j::put(_obj68741,this->_literals[293],this->_literals[294]);j::put(_obj68741,this->_literals[124],this->_literals[295]);j::put(_obj68741,this->_literals[296],this->_literals[297]);j::put(_obj68741,this->_literals[298],this->_literals[299]);j::put(_obj68741,this->_literals[300],this->_literals[301]);return _obj68741;})();
this->_v_66711_BARS.get()=([&]()->V{j::Args _array68742;_array68742.push_back(([&]()->V{V _obj68743=j::object();j::put(_obj68743,this->_literals[63],this->_literals[273]);j::put(_obj68743,this->_literals[64],this->_literals[274]);return _obj68743;})());_array68742.push_back(([&]()->V{V _obj68744=j::object();j::put(_obj68744,this->_literals[63],this->_literals[277]);j::put(_obj68744,this->_literals[64],this->_literals[278]);return _obj68744;})());_array68742.push_back(([&]()->V{V _obj68745=j::object();j::put(_obj68745,this->_literals[63],this->_literals[279]);j::put(_obj68745,this->_literals[64],this->_literals[280]);return _obj68745;})());_array68742.push_back(([&]()->V{V _obj68746=j::object();j::put(_obj68746,this->_literals[63],this->_literals[281]);j::put(_obj68746,this->_literals[64],this->_literals[282]);return _obj68746;})());_array68742.push_back(([&]()->V{V _obj68747=j::object();j::put(_obj68747,this->_literals[63],this->_literals[302]);j::put(_obj68747,this->_literals[64],this->_literals[303]);return _obj68747;})());_array68742.push_back(([&]()->V{V _obj68748=j::object();j::put(_obj68748,this->_literals[63],this->_literals[304]);j::put(_obj68748,this->_literals[64],this->_literals[305]);return _obj68748;})());return j::array(std::move(_array68742));})();
this->_v_66712_RISE.get()=this->_literals[306];
}
};
}
std::unique_ptr<Module> new_kit_recipes_widgets(){return std::make_unique<Generated_kit_recipes_widgets>();}
}
