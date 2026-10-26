// Native source generated from src/svg.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_svg final:j::Module {
j::Cell _v_70035_banner;
j::Cell _v_70036_CW;
j::Cell _v_70037_FONT;
j::Cell _v_70038_MONO;
j::Cell _v_70039_FACES;
j::Cell _v_70040_esc;
j::Cell _v_70043_attr;
j::Cell _v_70046_xml;
j::Cell _v_70049_part;
j::Cell _v_70123_wrap;
j::Cell _v_70134_namespaced;
j::Cell _v_70142_inkOf;
j::Cell _v_70153_LOOPS;
j::Cell _v_70154_loopOf;
j::Cell _v_70162_INK;
j::Cell _v_70163_HEX;
j::Cell _v_70164_hex;
j::Cell _v_70168_num;
j::Cell _v_70172_isDark;
j::Cell _v_70178_fold;
j::Cell _v_70218_pieceLoop;
j::Cell _v_70237_warned;
j::Cell _v_70238_pieceArt;
j::Cell _v_70245_svg;
j::Cell _v_70263_QUIET;
j::Cell _v_70264_themed;
j::Cell _v_70268_darkColor;
j::Cell _v_70271_bannerSvg;
std::vector<V> _literals;
Generated_svg():_v_70035_banner(this->slot("banner")),_v_70036_CW(this->slot("CW")),_v_70037_FONT(this->slot("FONT")),_v_70038_MONO(this->slot("MONO")),_v_70039_FACES(this->slot("FACES")),_v_70040_esc(this->slot("esc")),_v_70043_attr(this->slot("attr")),_v_70046_xml(this->slot("xml")),_v_70049_part(this->slot("part")),_v_70123_wrap(this->slot("wrap")),_v_70134_namespaced(this->slot("namespaced")),_v_70142_inkOf(this->slot("inkOf")),_v_70153_LOOPS(this->slot("LOOPS")),_v_70154_loopOf(this->slot("loopOf")),_v_70162_INK(this->slot("INK")),_v_70163_HEX(this->slot("HEX")),_v_70164_hex(this->slot("hex")),_v_70168_num(this->slot("num")),_v_70172_isDark(this->slot("isDark")),_v_70178_fold(this->slot("fold")),_v_70218_pieceLoop(this->slot("pieceLoop")),_v_70237_warned(this->slot("warned")),_v_70238_pieceArt(this->slot("pieceArt")),_v_70245_svg(this->slot("svg")),_v_70263_QUIET(this->slot("QUIET")),_v_70264_themed(this->slot("themed")),_v_70268_darkColor(this->slot("darkColor")),_v_70271_bannerSvg(this->slot("bannerSvg")),_literals{V(u"cols"),
V(u"rows"),
V(u"palette"),
V(u"every"),
V(u"from"),
V(u"at"),
V(u"once"),
V(u"fps"),
V(u"cell"),
V(u""),
V(u"max"),
V(u"length"),
V(u"text"),
V(u"color"),
V(u"shot"),
V(u"find"),
V(u"slots"),
V(u"add"),
V(u"push"),
V(u"forEach"),
V(u"replace"),
V(u" "),
V(u"\n"),
V(u"split"),
V(u"map"),
V(u"join"),
V(u"sort"),
V(u"width"),
V(u"height"),
V(u"css"),
V(u"body"),
V(u"has"),
V(u"findIndex"),
V(u"toFixed"),
V(u"1 forwards"),
V(u"infinite"),
V(u"exec"),
V(u"startsWith"),
V(u"slice"),
V(u"index"),
V(u"</svg>"),
V(u"lastIndexOf"),
V(u"matchAll"),
V(u"get"),
V(u"set"),
V(u"meta"),
V(u"motion"),
V(u"seconds"),
V(u"loop"),
V(u"category"),
V(u"options"),
V(u"number"),
V(u"filter"),
V(u"ink"),
V(u"ground"),
V(u"dark"),
V(u"default"),
V(u"most"),
V(u"paper"),
V(u"light"),
V(u"label"),
V(u"name"),
V(u"scale"),
V(u"budget"),
V(u"warn"),
V(u"6 frames a second"),
V(u"16 colours"),
V(u" and "),
V(u"background"),
V(u"taglineSize"),
V(u"spacing"),
V(u"padding"),
V(u"radius"),
V(u"artSize"),
V(u"taglineColor"),
V(u"place"),
V(u"left"),
V(u"right"),
V(u"above"),
V(u"below"),
V(u"includes"),
V(u"stringify"),
V(u"align"),
V(u"start"),
V(u"center"),
V(u"end"),
V(u"art"),
V(u"svg"),
V(u"a"),
V(u"ascii.rest: art takes a piece, or { svg } of an SVG that ascii.rest/svg wrote"),
V(u"effect"),
V(u"still"),
V(u"shadowColor"),
V(u"isArray"),
V(u"fill"),
V(u"url(#g)"),
V(u"min"),
V(u"tagline"),
V(u"trim"),
V(u"glint"),
V(u"indexOf"),
V(u"&gt;"),
V(u"&lt;"),
V(u"&amp;"),
V(u"&quot;"),
V(u"logos"),
V(u"shine"),
V(u"companies"),
V(u"distros"),
V(u"scan"),
V(u"#1f2328"),
V(u"#f0f6fc"),
V(u"string"),
V(u"test"),
V(u"isFinite"),
V(u"#"),
V(u"match"),
V(u"#59636e"),
V(u"#9198a1"),
V(u"object")}{
this->exports["MONO"]=this->_v_70038_MONO;
this->exports["FACES"]=this->_v_70039_FACES;
this->exports["part"]=this->_v_70049_part;
this->exports["wrap"]=this->_v_70123_wrap;
this->exports["namespaced"]=this->_v_70134_namespaced;
this->exports["inkOf"]=this->_v_70142_inkOf;
this->exports["loopOf"]=this->_v_70154_loopOf;
this->exports["svg"]=this->_v_70245_svg;
this->exports["darkColor"]=this->_v_70268_darkColor;
this->exports["bannerSvg"]=this->_v_70271_bannerSvg;
}
void init() override{if(initialized)return;initialized=true;
this->_v_70049_part.get()=j::function([=](const j::Args &_args_fn70050,const V &_receiver_fn70050,const V &_self_fn70050) mutable ->V{
j::Cell _v_70051_cols;
V _v_70052_rows;
j::Cell _v_70053_palette;
j::Cell _v_70054_every;
j::Cell _v_70055_t0;
j::Cell _v_70056_at;
j::Cell _v_70057_once;
j::Cell _v_70058_fps;
V _v_70059_cell;
j::Cell _v_70060_prefix;
V _pattern70353=_args_fn70050[0];
_v_70051_cols.get()=j::get(_pattern70353,this->_literals[0]);
_v_70052_rows=j::get(_pattern70353,this->_literals[1]);
_v_70053_palette.get()=j::get(_pattern70353,this->_literals[2]);
_v_70054_every.get()=j::get(_pattern70353,this->_literals[3]);
_v_70055_t0.get()=j::get(_pattern70353,this->_literals[4]);
_v_70056_at.get()=j::get(_pattern70353,this->_literals[5]);
V _default70354=j::get(_pattern70353,this->_literals[6]);if(_default70354.kind==V::Undefined||_default70354.kind==V::Hole)_default70354=V(false);
_v_70057_once.get()=_default70354;
V _default70355=j::get(_pattern70353,this->_literals[7]);if(_default70355.kind==V::Undefined||_default70355.kind==V::Hole)_default70355=V(15.0);
_v_70058_fps.get()=_default70355;
V _default70356=j::get(_pattern70353,this->_literals[8]);if(_default70356.kind==V::Undefined||_default70356.kind==V::Hole)_default70356=V(2.0);
_v_70059_cell=_default70356;
V _default70357=_args_fn70050[1];if(_default70357.kind==V::Undefined||_default70357.kind==V::Hole)_default70357=this->_literals[9];
_v_70060_prefix.get()=_default70357;
{
j::Cell _v_70061_CH;
j::Cell _v_70062_n;
V _v_70063_shots;
j::Cell _v_70067_same;
j::Cell _v_70074_frames;
j::Cell _v_70081_used;
j::Cell _v_70082_body;
V _v_70096_width;
V _v_70097_height;
V _v_70098_inks;
j::Cell _v_70106_last;
j::Cell _v_70109_pct;
j::Cell _v_70112_keys;
j::Cell _v_70113_groups;
V _v_70121_still;
V _v_70122_css;
if(j::truth(j::unary("!",([&]()->V{V _logical70358=([&]()->V{V _lhs70359=_v_70058_fps.get();V _rhs70360=V(1.0);return j::binary(">=",_lhs70359,_rhs70360);})();return j::truth(_logical70358)?([&]()->V{V _lhs70361=_v_70058_fps.get();V _rhs70362=V(60.0);return j::binary("<=",_lhs70361,_rhs70362);})():_logical70358;})()))){j::raise(([&]()->V{V _callee70364=j::builtin("Error");return j::construct(_callee70364,j::Args{([&]()->V{std::u16string _text70363;_text70363+=u"ascii.rest: fps takes 1 to 60, not ";_text70363+=j::string(_v_70058_fps.get());_text70363+=u"";return V(std::move(_text70363));})()});})());
}
_v_70061_CH.get()=([&]()->V{V _lhs70365=this->_v_70036_CW.get();V _rhs70366=_v_70059_cell;return V(j::number(_lhs70365)*j::number(_rhs70366));})();
_v_70062_n.get()=([&]()->V{V _receiver70374=j::builtin("Math");V _method70375=this->_literals[10];V _method=j::get(_receiver70374,_method70375);j::Args _params70376=j::Args{V(1.0),([&]()->V{V _number70369=([&]()->V{V _lhs70370=_v_70054_every.get();V _rhs70371=_v_70058_fps.get();return V(j::number(_lhs70370)*j::number(_rhs70371));})();return V(std::floor(j::number(_number70369)+.5));})()};return j::call(_method,_params70376,_receiver70374);})();
_v_70063_shots=([&]()->V{V _receiver70390=j::builtin("Array");V _method70391=this->_literals[4];V _method=j::get(_receiver70390,_method70391);j::Args _params70392=j::Args{([&]()->V{V _obj70377=j::object();j::put(_obj70377,this->_literals[11],_v_70062_n.get());return _obj70377;})(),j::function([=](const j::Args &_args_fn70064,const V &_receiver_fn70064,const V &_self_fn70064) mutable ->V{
V _v_70065__;
V _v_70066_i;
_v_70065__=_args_fn70064[0];
_v_70066_i=_args_fn70064[1];
return ([&]()->V{V _callee70389=_v_70056_at.get();return j::call(_callee70389,j::Args{(j::truth(([&]()->V{V _logical70378=_v_70057_once.get();return j::truth(_logical70378)?([&]()->V{V _lhs70379=_v_70066_i;V _rhs70380=([&]()->V{V _lhs70381=_v_70062_n.get();V _rhs70382=V(1.0);return V(j::number(_lhs70381)-j::number(_rhs70382));})();return V(j::equal(_lhs70379,_rhs70380,true));})():_logical70378;})())?([&]()->V{V _lhs70383=_v_70055_t0.get();V _rhs70384=_v_70054_every.get();return j::binary("+",_lhs70383,_rhs70384);})():([&]()->V{V _lhs70385=_v_70055_t0.get();V _rhs70386=([&]()->V{V _lhs70387=_v_70066_i;V _rhs70388=_v_70058_fps.get();return V(j::number(_lhs70387)/j::number(_rhs70388));})();return j::binary("+",_lhs70385,_rhs70386);})())});})();
return V{};
},2)};return j::call(_method,_params70392,_receiver70390);})();
_v_70067_same.get()=j::function([=](const j::Args &_args_fn70068,const V &_receiver_fn70068,const V &_self_fn70068) mutable ->V{
V _v_70069_a;
j::Cell _v_70070_b;
_v_70069_a=_args_fn70068[0];
_v_70070_b.get()=_args_fn70068[1];
return ([&]()->V{V _logical70393=([&]()->V{V _lhs70394=j::get(_v_70069_a,this->_literals[12]);V _rhs70395=j::get(_v_70070_b.get(),this->_literals[12]);return V(j::equal(_lhs70394,_rhs70395,true));})();return j::truth(_logical70393)?([&]()->V{V _receiver70398=j::get(_v_70069_a,this->_literals[13]);V _method70399=this->_literals[3];V _method=j::get(_receiver70398,_method70399);j::Args _params70400=j::Args{j::function([=](const j::Args &_args_fn70071,const V &_receiver_fn70071,const V &_self_fn70071) mutable ->V{
V _v_70072_v;
V _v_70073_i;
_v_70072_v=_args_fn70071[0];
_v_70073_i=_args_fn70071[1];
return ([&]()->V{V _lhs70396=_v_70072_v;V _rhs70397=j::get(j::get(_v_70070_b.get(),this->_literals[13]),_v_70073_i);return V(j::equal(_lhs70396,_rhs70397,true));})();
return V{};
},2)};return j::call(_method,_params70400,_receiver70398);})():_logical70393;})();
return V{};
},2);
_v_70074_frames.get()=([&]()->V{j::Args _array70401;return j::array(std::move(_array70401));})();
(void)(([&]()->V{V _receiver70415=_v_70063_shots;V _method70416=this->_literals[19];V _method=j::get(_receiver70415,_method70416);j::Args _params70417=j::Args{j::function([=](const j::Args &_args_fn70075,const V &_receiver_fn70075,const V &_self_fn70075) mutable ->V{
j::Cell _v_70076_shot;
V _v_70077_i;
_v_70076_shot.get()=_args_fn70075[0];
_v_70077_i=_args_fn70075[1];
{
V _v_70078_f;
_v_70078_f=([&]()->V{V _receiver70403=_v_70074_frames.get();V _method70404=this->_literals[15];V _method=j::get(_receiver70403,_method70404);j::Args _params70405=j::Args{j::function([=](const j::Args &_args_fn70079,const V &_receiver_fn70079,const V &_self_fn70079) mutable ->V{
V _v_70080_f;
_v_70080_f=_args_fn70079[0];
return ([&]()->V{V _callee70402=_v_70067_same.get();return j::call(_callee70402,j::Args{j::get(_v_70080_f,this->_literals[14]),_v_70076_shot.get()});})();
return V{};
},1)};return j::call(_method,_params70405,_receiver70403);})();
if(j::truth(_v_70078_f)){(void)(([&]()->V{V _receiver70406=j::get(_v_70078_f,this->_literals[16]);V _method70407=this->_literals[17];V _method=j::get(_receiver70406,_method70407);j::Args _params70408=j::Args{_v_70077_i};return j::call(_method,_params70408,_receiver70406);})());
}else {(void)(([&]()->V{V _receiver70412=_v_70074_frames.get();V _method70413=this->_literals[18];V _method=j::get(_receiver70412,_method70413);j::Args _params70414=j::Args{([&]()->V{V _obj70409=j::object();j::put(_obj70409,this->_literals[14],_v_70076_shot.get());j::put(_obj70409,this->_literals[16],([&]()->V{V _callee70411=j::builtin("Set");return j::construct(_callee70411,j::Args{([&]()->V{j::Args _array70410;_array70410.push_back(_v_70077_i);return j::array(std::move(_array70410));})()});})());return _obj70409;})()};return j::call(_method,_params70414,_receiver70412);})());
}

}

return V{};
},2)};return j::call(_method,_params70417,_receiver70415);})());
_v_70081_used.get()=([&]()->V{V _callee70418=j::builtin("Set");return j::construct(_callee70418,j::Args{});})();
_v_70082_body.get()=j::function([=](const j::Args &_args_fn70083,const V &_receiver_fn70083,const V &_self_fn70083) mutable ->V{
j::Cell _v_70084_shot;
_v_70084_shot.get()=_args_fn70083[0];
return ([&]()->V{V _receiver70419=([&]()->V{V _receiver70458=([&]()->V{V _receiver70461=j::get(_v_70084_shot.get(),this->_literals[12]);V _method70462=this->_literals[23];V _method=j::get(_receiver70461,_method70462);j::Args _params70463=j::Args{this->_literals[22]};return j::call(_method,_params70463,_receiver70461);})();V _method70459=this->_literals[24];V _method=j::get(_receiver70458,_method70459);j::Args _params70460=j::Args{j::function([=](const j::Args &_args_fn70085,const V &_receiver_fn70085,const V &_self_fn70085) mutable ->V{
V _v_70086_line;
V _v_70087_y;
_v_70086_line=_args_fn70085[0];
_v_70087_y=_args_fn70085[1];
{
V _v_70088_t;
j::Cell _v_70089_out;
j::Cell _v_70090_run;
j::Cell _v_70091_cur;
V _v_70092_flush;
_v_70088_t=([&]()->V{V _receiver70422=_v_70086_line;V _method70423=this->_literals[20];V _method=j::get(_receiver70422,_method70423);j::Args _params70424=j::Args{j::regexp(u"\\s+$",""),this->_literals[9]};return j::call(_method,_params70424,_receiver70422);})();
if(j::truth(j::unary("!",_v_70088_t))){return this->_literals[9];
}
_v_70089_out.get()=this->_literals[9];
_v_70090_run.get()=this->_literals[9];
_v_70091_cur.get()=j::unary("-",V(1.0));
_v_70092_flush=j::function([=](const j::Args &_args_fn70093,const V &_receiver_fn70093,const V &_self_fn70093) mutable ->V{
{
if(j::truth(_v_70090_run.get())){(void)((_v_70089_out.get()=j::binary("+",_v_70089_out.get(),(j::truth(([&]()->V{V _lhs70426=_v_70091_cur.get();V _rhs70427=V(0.0);return j::binary("<",_lhs70426,_rhs70427);})())?([&]()->V{V _callee70428=this->_v_70040_esc.get();return j::call(_callee70428,j::Args{_v_70090_run.get()});})():([&]()->V{std::u16string _text70429;_text70429+=u"<tspan class=\"";_text70429+=j::string(_v_70060_prefix.get());_text70429+=u"c";_text70429+=j::string(_v_70091_cur.get());_text70429+=u"\">";_text70429+=j::string(([&]()->V{V _callee70430=this->_v_70040_esc.get();return j::call(_callee70430,j::Args{_v_70090_run.get()});})());_text70429+=u"</tspan>";return V(std::move(_text70429));})()))));
}
(void)((_v_70090_run.get()=this->_literals[9]));

}

return V{};
},0);
{V _v_70094_x;
_v_70094_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs70432=_v_70094_x;V _rhs70433=j::get(_v_70088_t,this->_literals[11]);return j::binary("<",_lhs70432,_rhs70433);})());(void)(j::increment(_v_70094_x,1,false))){
V _v_70095_c;
_v_70095_c=(j::truth(([&]()->V{V _lhs70434=j::get(_v_70088_t,_v_70094_x);V _rhs70435=this->_literals[21];return V(j::equal(_lhs70434,_rhs70435,true));})())?_v_70091_cur.get():j::get(j::get(_v_70084_shot.get(),this->_literals[13]),([&]()->V{V _lhs70436=([&]()->V{V _lhs70438=_v_70087_y;V _rhs70439=_v_70051_cols.get();return V(j::number(_lhs70438)*j::number(_rhs70439));})();V _rhs70437=_v_70094_x;return j::binary("+",_lhs70436,_rhs70437);})()));
if(j::truth(([&]()->V{V _lhs70440=_v_70095_c;V _rhs70441=_v_70091_cur.get();return V(!j::equal(_lhs70440,_rhs70441,true));})())){(void)(([&]()->V{V _callee70442=_v_70092_flush;return j::call(_callee70442,j::Args{});})());
}
if(j::truth(([&]()->V{V _lhs70443=_v_70095_c;V _rhs70444=V(0.0);return j::binary(">=",_lhs70443,_rhs70444);})())){(void)(([&]()->V{V _receiver70445=_v_70081_used.get();V _method70446=this->_literals[17];V _method=j::get(_receiver70445,_method70446);j::Args _params70447=j::Args{_v_70095_c};return j::call(_method,_params70447,_receiver70445);})());
}
(void)((_v_70091_cur.get()=_v_70095_c));
(void)((_v_70090_run.get()=j::binary("+",_v_70090_run.get(),j::get(_v_70088_t,_v_70094_x))));

}
}
(void)(([&]()->V{V _callee70450=_v_70092_flush;return j::call(_callee70450,j::Args{});})());
return ([&]()->V{std::u16string _text70451;_text70451+=u"<text y=\"";_text70451+=j::string(([&]()->V{V _lhs70452=([&]()->V{V _lhs70454=_v_70087_y;V _rhs70455=V(0.5);return j::binary("+",_lhs70454,_rhs70455);})();V _rhs70453=_v_70061_CH.get();return V(j::number(_lhs70452)*j::number(_rhs70453));})());_text70451+=u"\" textLength=\"";_text70451+=j::string(([&]()->V{V _lhs70456=j::get(_v_70088_t,this->_literals[11]);V _rhs70457=this->_v_70036_CW.get();return V(j::number(_lhs70456)*j::number(_rhs70457));})());_text70451+=u"\">";_text70451+=j::string(_v_70089_out.get());_text70451+=u"</text>";return V(std::move(_text70451));})();

}

return V{};
},2)};return j::call(_method,_params70460,_receiver70458);})();V _method70420=this->_literals[25];V _method=j::get(_receiver70419,_method70420);j::Args _params70421=j::Args{this->_literals[9]};return j::call(_method,_params70421,_receiver70419);})();
return V{};
},1);
_v_70096_width=([&]()->V{V _lhs70464=_v_70051_cols.get();V _rhs70465=this->_v_70036_CW.get();return V(j::number(_lhs70464)*j::number(_rhs70465));})();
_v_70097_height=([&]()->V{V _lhs70466=_v_70052_rows;V _rhs70467=_v_70061_CH.get();return V(j::number(_lhs70466)*j::number(_rhs70467));})();
_v_70098_inks=j::function([=](const j::Args &_args_fn70099,const V &_receiver_fn70099,const V &_self_fn70099) mutable ->V{
return ([&]()->V{V _receiver70468=([&]()->V{V _receiver70472=([&]()->V{V _receiver70477=([&]()->V{j::Args _array70480;for(const auto &_value:j::elements(_v_70081_used.get()))_array70480.push_back(_value);return j::array(std::move(_array70480));})();V _method70478=this->_literals[26];V _method=j::get(_receiver70477,_method70478);j::Args _params70479=j::Args{j::function([=](const j::Args &_args_fn70100,const V &_receiver_fn70100,const V &_self_fn70100) mutable ->V{
V _v_70101_a;
V _v_70102_b;
_v_70101_a=_args_fn70100[0];
_v_70102_b=_args_fn70100[1];
return ([&]()->V{V _lhs70475=_v_70101_a;V _rhs70476=_v_70102_b;return V(j::number(_lhs70475)-j::number(_rhs70476));})();
return V{};
},2)};return j::call(_method,_params70479,_receiver70477);})();V _method70473=this->_literals[24];V _method=j::get(_receiver70472,_method70473);j::Args _params70474=j::Args{j::function([=](const j::Args &_args_fn70103,const V &_receiver_fn70103,const V &_self_fn70103) mutable ->V{
V _v_70104_c;
_v_70104_c=_args_fn70103[0];
return ([&]()->V{std::u16string _text70471;_text70471+=u".";_text70471+=j::string(_v_70060_prefix.get());_text70471+=u"c";_text70471+=j::string(_v_70104_c);_text70471+=u"{fill:";_text70471+=j::string(j::get(_v_70053_palette.get(),_v_70104_c));_text70471+=u"}";return V(std::move(_text70471));})();
return V{};
},1)};return j::call(_method,_params70474,_receiver70472);})();V _method70469=this->_literals[25];V _method=j::get(_receiver70468,_method70469);j::Args _params70470=j::Args{this->_literals[9]};return j::call(_method,_params70470,_receiver70468);})();
return V{};
},0);
if(j::truth(([&]()->V{V _lhs70481=j::get(_v_70074_frames.get(),this->_literals[11]);V _rhs70482=V(1.0);return V(j::equal(_lhs70481,_rhs70482,true));})())){
V _v_70105_g;
_v_70105_g=([&]()->V{std::u16string _text70483;_text70483+=u"<g>";_text70483+=j::string(([&]()->V{V _callee70484=_v_70082_body.get();return j::call(_callee70484,j::Args{j::get(j::get(_v_70074_frames.get(),V(0.0)),this->_literals[14])});})());_text70483+=u"</g>";return V(std::move(_text70483));})();
return ([&]()->V{V _obj70485=j::object();j::put(_obj70485,this->_literals[27],_v_70096_width);j::put(_obj70485,this->_literals[28],_v_70097_height);j::put(_obj70485,this->_literals[29],([&]()->V{V _callee70486=_v_70098_inks;return j::call(_callee70486,j::Args{});})());j::put(_obj70485,this->_literals[30],_v_70105_g);return _obj70485;})();

}

_v_70106_last.get()=([&]()->V{V _receiver70492=_v_70074_frames.get();V _method70493=this->_literals[32];V _method=j::get(_receiver70492,_method70493);j::Args _params70494=j::Args{j::function([=](const j::Args &_args_fn70107,const V &_receiver_fn70107,const V &_self_fn70107) mutable ->V{
V _v_70108_f;
_v_70108_f=_args_fn70107[0];
return ([&]()->V{V _receiver70489=j::get(_v_70108_f,this->_literals[16]);V _method70490=this->_literals[31];V _method=j::get(_receiver70489,_method70490);j::Args _params70491=j::Args{([&]()->V{V _lhs70487=_v_70062_n.get();V _rhs70488=V(1.0);return V(j::number(_lhs70487)-j::number(_rhs70488));})()};return j::call(_method,_params70491,_receiver70489);})();
return V{};
},1)};return j::call(_method,_params70494,_receiver70492);})();
_v_70109_pct.get()=j::function([=](const j::Args &_args_fn70110,const V &_receiver_fn70110,const V &_self_fn70110) mutable ->V{
V _v_70111_i;
_v_70111_i=_args_fn70110[0];
return ([&]()->V{std::u16string _text70495;_text70495+=u"";_text70495+=j::string(j::unary("+",([&]()->V{V _receiver70496=([&]()->V{V _lhs70499=([&]()->V{V _lhs70501=_v_70111_i;V _rhs70502=_v_70062_n.get();return V(j::number(_lhs70501)/j::number(_rhs70502));})();V _rhs70500=V(100.0);return V(j::number(_lhs70499)*j::number(_rhs70500));})();V _method70497=this->_literals[33];V _method=j::get(_receiver70496,_method70497);j::Args _params70498=j::Args{V(3.0)};return j::call(_method,_params70498,_receiver70496);})()));_text70495+=u"%";return V(std::move(_text70495));})();
return V{};
},1);
_v_70112_keys.get()=this->_literals[9];
_v_70113_groups.get()=this->_literals[9];
(void)(([&]()->V{V _receiver70528=_v_70074_frames.get();V _method70529=this->_literals[19];V _method=j::get(_receiver70528,_method70529);j::Args _params70530=j::Args{j::function([=](const j::Args &_args_fn70114,const V &_receiver_fn70114,const V &_self_fn70114) mutable ->V{
V _v_70115_f;
V _v_70116_j;
_v_70115_f=_args_fn70114[0];
_v_70116_j=_args_fn70114[1];
{
V _v_70117_kf;
V _v_70118_state;
_v_70117_kf=this->_literals[9];
_v_70118_state=j::unary("-",V(1.0));
{V _v_70119_i;
_v_70119_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs70503=_v_70119_i;V _rhs70504=_v_70062_n.get();return j::binary("<=",_lhs70503,_rhs70504);})());(void)(j::increment(_v_70119_i,1,false))){
V _v_70120_v;
_v_70120_v=(j::truth(([&]()->V{V _lhs70505=_v_70119_i;V _rhs70506=_v_70062_n.get();return j::binary("<",_lhs70505,_rhs70506);})())?(j::truth(([&]()->V{V _receiver70507=j::get(_v_70115_f,this->_literals[16]);V _method70508=this->_literals[31];V _method=j::get(_receiver70507,_method70508);j::Args _params70509=j::Args{_v_70119_i};return j::call(_method,_params70509,_receiver70507);})())?V(1.0):V(0.0)):(j::truth(([&]()->V{V _logical70510=_v_70057_once.get();return j::truth(_logical70510)?([&]()->V{V _lhs70511=_v_70116_j;V _rhs70512=_v_70106_last.get();return V(j::equal(_lhs70511,_rhs70512,true));})():_logical70510;})())?V(1.0):V(0.0)));
if(j::truth(([&]()->V{V _logical70513=([&]()->V{V _lhs70514=_v_70120_v;V _rhs70515=_v_70118_state;return V(!j::equal(_lhs70514,_rhs70515,true));})();return !j::truth(_logical70513)?([&]()->V{V _logical70516=_v_70057_once.get();return j::truth(_logical70516)?([&]()->V{V _lhs70517=_v_70119_i;V _rhs70518=_v_70062_n.get();return V(j::equal(_lhs70517,_rhs70518,true));})():_logical70516;})():_logical70513;})())){(void)(((_v_70117_kf=j::binary("+",_v_70117_kf,([&]()->V{std::u16string _text70520;_text70520+=u"";_text70520+=j::string(([&]()->V{V _callee70521=_v_70109_pct.get();return j::call(_callee70521,j::Args{_v_70119_i});})());_text70520+=u"{opacity:";_text70520+=j::string(_v_70120_v);_text70520+=u"}";return V(std::move(_text70520));})())),(_v_70118_state=_v_70120_v)));
}

}
}
(void)((_v_70112_keys.get()=j::binary("+",_v_70112_keys.get(),([&]()->V{std::u16string _text70524;_text70524+=u"@keyframes ";_text70524+=j::string(_v_70060_prefix.get());_text70524+=u"k";_text70524+=j::string(_v_70116_j);_text70524+=u"{";_text70524+=j::string(_v_70117_kf);_text70524+=u"}.";_text70524+=j::string(_v_70060_prefix.get());_text70524+=u"k";_text70524+=j::string(_v_70116_j);_text70524+=u"{animation-name:";_text70524+=j::string(_v_70060_prefix.get());_text70524+=u"k";_text70524+=j::string(_v_70116_j);_text70524+=u"}";return V(std::move(_text70524));})())));
(void)((_v_70113_groups.get()=j::binary("+",_v_70113_groups.get(),([&]()->V{std::u16string _text70526;_text70526+=u"<g class=\"";_text70526+=j::string(_v_70060_prefix.get());_text70526+=u"f ";_text70526+=j::string(_v_70060_prefix.get());_text70526+=u"k";_text70526+=j::string(_v_70116_j);_text70526+=u"\">";_text70526+=j::string(([&]()->V{V _callee70527=_v_70082_body.get();return j::call(_callee70527,j::Args{j::get(_v_70115_f,this->_literals[14])});})());_text70526+=u"</g>";return V(std::move(_text70526));})())));

}

return V{};
},2)};return j::call(_method,_params70530,_receiver70528);})());
_v_70121_still=(j::truth(_v_70057_once.get())?_v_70106_last.get():V(0.0));
_v_70122_css=([&]()->V{V _lhs70531=([&]()->V{V _lhs70533=([&]()->V{V _callee70535=_v_70098_inks;return j::call(_callee70535,j::Args{});})();V _rhs70534=([&]()->V{std::u16string _text70536;_text70536+=u".";_text70536+=j::string(_v_70060_prefix.get());_text70536+=u"f{opacity:0;animation:";_text70536+=j::string(_v_70054_every.get());_text70536+=u"s step-end ";_text70536+=j::string((j::truth(_v_70057_once.get())?this->_literals[34]:this->_literals[35]));_text70536+=u"}";_text70536+=j::string(_v_70112_keys.get());_text70536+=u"";return V(std::move(_text70536));})();return j::binary("+",_lhs70533,_rhs70534);})();V _rhs70532=([&]()->V{std::u16string _text70537;_text70537+=u"@media (prefers-reduced-motion:reduce){.";_text70537+=j::string(_v_70060_prefix.get());_text70537+=u"f{animation:none}.";_text70537+=j::string(_v_70060_prefix.get());_text70537+=u"k";_text70537+=j::string(_v_70121_still);_text70537+=u"{opacity:1}}";return V(std::move(_text70537));})();return j::binary("+",_lhs70531,_rhs70532);})();
return ([&]()->V{V _obj70538=j::object();j::put(_obj70538,this->_literals[27],_v_70096_width);j::put(_obj70538,this->_literals[28],_v_70097_height);j::put(_obj70538,this->_literals[29],_v_70122_css);j::put(_obj70538,this->_literals[30],_v_70113_groups.get());return _obj70538;})();

}

return V{};
},1);
this->_v_70123_wrap.get()=j::function([=](const j::Args &_args_fn70124,const V &_receiver_fn70124,const V &_self_fn70124) mutable ->V{
V _v_70125_w;
V _v_70126_h;
V _v_70127_css;
V _v_70128_body;
V _v_70129_label;
j::Cell _v_70130_scale;
V _pattern70539=_args_fn70124[0];
_v_70125_w=j::get(_pattern70539,this->_literals[27]);
_v_70126_h=j::get(_pattern70539,this->_literals[28]);
_v_70127_css=j::get(_pattern70539,this->_literals[29]);
_v_70128_body=j::get(_pattern70539,this->_literals[30]);
_v_70129_label=_args_fn70124[1];
V _default70540=_args_fn70124[2];if(_default70540.kind==V::Undefined||_default70540.kind==V::Hole)_default70540=this->_v_70036_CW.get();
_v_70130_scale.get()=_default70540;
{
V _v_70131_px;
_v_70131_px=j::function([=](const j::Args &_args_fn70132,const V &_receiver_fn70132,const V &_self_fn70132) mutable ->V{
V _v_70133_u;
_v_70133_u=_args_fn70132[0];
return j::unary("+",([&]()->V{V _receiver70541=([&]()->V{V _lhs70544=([&]()->V{V _lhs70546=_v_70133_u;V _rhs70547=_v_70130_scale.get();return V(j::number(_lhs70546)*j::number(_rhs70547));})();V _rhs70545=this->_v_70036_CW.get();return V(j::number(_lhs70544)/j::number(_rhs70545));})();V _method70542=this->_literals[33];V _method=j::get(_receiver70541,_method70542);j::Args _params70543=j::Args{V(2.0)};return j::call(_method,_params70543,_receiver70541);})());
return V{};
},1);
return ([&]()->V{V _lhs70548=([&]()->V{std::u16string _text70550;_text70550+=u"<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 ";_text70550+=j::string(_v_70125_w);_text70550+=u" ";_text70550+=j::string(_v_70126_h);_text70550+=u"\" width=\"";_text70550+=j::string(([&]()->V{V _callee70551=_v_70131_px;return j::call(_callee70551,j::Args{_v_70125_w});})());_text70550+=u"\" height=\"";_text70550+=j::string(([&]()->V{V _callee70552=_v_70131_px;return j::call(_callee70552,j::Args{_v_70126_h});})());_text70550+=u"\" role=\"img\" aria-label=\"";_text70550+=j::string(([&]()->V{V _callee70554=this->_v_70043_attr.get();return j::call(_callee70554,j::Args{([&]()->V{V _callee70553=this->_v_70046_xml.get();return j::call(_callee70553,j::Args{_v_70129_label});})()});})());_text70550+=u"\" xml:space=\"preserve\">";return V(std::move(_text70550));})();V _rhs70549=([&]()->V{std::u16string _text70555;_text70555+=u"<title>";_text70555+=j::string(([&]()->V{V _callee70557=this->_v_70040_esc.get();return j::call(_callee70557,j::Args{([&]()->V{V _callee70556=this->_v_70046_xml.get();return j::call(_callee70556,j::Args{_v_70129_label});})()});})());_text70555+=u"</title><style>";_text70555+=j::string(this->_v_70038_MONO.get());_text70555+=u"";_text70555+=j::string(_v_70127_css);_text70555+=u"</style>";_text70555+=j::string(_v_70128_body);_text70555+=u"</svg>";return V(std::move(_text70555));})();return j::binary("+",_lhs70548,_rhs70549);})();

}

return V{};
},2);
this->_v_70134_namespaced.get()=j::function([=](const j::Args &_args_fn70135,const V &_receiver_fn70135,const V &_self_fn70135) mutable ->V{
V _v_70136_svg;
V _v_70137_prefix;
_v_70136_svg=_args_fn70135[0];
_v_70137_prefix=_args_fn70135[1];
{
V _v_70138_box;
V _v_70139_style;
V _v_70140_css;
V _v_70141_body;
_v_70138_box=([&]()->V{V _receiver70558=j::regexp(u"viewBox=\"0 0 ([\\d.]+) ([\\d.]+)\"","");V _method70559=this->_literals[36];V _method=j::get(_receiver70558,_method70559);j::Args _params70560=j::Args{_v_70136_svg};return j::call(_method,_params70560,_receiver70558);})();
_v_70139_style=([&]()->V{V _receiver70561=j::regexp(u"<style>([\\s\\S]*?)<\\/style>","");V _method70562=this->_literals[36];V _method=j::get(_receiver70561,_method70562);j::Args _params70563=j::Args{_v_70136_svg};return j::call(_method,_params70563,_receiver70561);})();
if(j::truth(([&]()->V{V _logical70564=([&]()->V{V _logical70565=j::unary("!",_v_70138_box);return !j::truth(_logical70565)?j::unary("!",_v_70139_style):_logical70565;})();return !j::truth(_logical70564)?j::unary("!",([&]()->V{V _receiver70566=j::get(_v_70139_style,V(1.0));V _method70567=this->_literals[37];V _method=j::get(_receiver70566,_method70567);j::Args _params70568=j::Args{this->_v_70038_MONO.get()};return j::call(_method,_params70568,_receiver70566);})()):_logical70564;})())){return V::null();
}
_v_70140_css=([&]()->V{V _receiver70570=([&]()->V{V _receiver70574=([&]()->V{V _receiver70578=([&]()->V{V _receiver70582=([&]()->V{V _receiver70585=j::get(_v_70139_style,V(1.0));V _method70586=this->_literals[38];V _method=j::get(_receiver70585,_method70586);j::Args _params70587=j::Args{j::get(this->_v_70038_MONO.get(),this->_literals[11])};return j::call(_method,_params70587,_receiver70585);})();V _method70583=this->_literals[20];V _method=j::get(_receiver70582,_method70583);j::Args _params70584=j::Args{j::regexp(u"\\.([ck]\\d+|f)\\{","g"),([&]()->V{std::u16string _text70581;_text70581+=u".";_text70581+=j::string(_v_70137_prefix);_text70581+=u"$1{";return V(std::move(_text70581));})()};return j::call(_method,_params70584,_receiver70582);})();V _method70579=this->_literals[20];V _method=j::get(_receiver70578,_method70579);j::Args _params70580=j::Args{j::regexp(u"@keyframes k(\\d+)","g"),([&]()->V{std::u16string _text70577;_text70577+=u"@keyframes ";_text70577+=j::string(_v_70137_prefix);_text70577+=u"k$1";return V(std::move(_text70577));})()};return j::call(_method,_params70580,_receiver70578);})();V _method70575=this->_literals[20];V _method=j::get(_receiver70574,_method70575);j::Args _params70576=j::Args{j::regexp(u"animation-name:k(\\d+)","g"),([&]()->V{std::u16string _text70573;_text70573+=u"animation-name:";_text70573+=j::string(_v_70137_prefix);_text70573+=u"k$1";return V(std::move(_text70573));})()};return j::call(_method,_params70576,_receiver70574);})();V _method70571=this->_literals[20];V _method=j::get(_receiver70570,_method70571);j::Args _params70572=j::Args{j::regexp(u"url\\(#g\\)","g"),([&]()->V{std::u16string _text70569;_text70569+=u"url(#";_text70569+=j::string(_v_70137_prefix);_text70569+=u"g)";return V(std::move(_text70569));})()};return j::call(_method,_params70572,_receiver70570);})();
_v_70141_body=([&]()->V{V _receiver70589=([&]()->V{V _receiver70593=([&]()->V{V _receiver70597=([&]()->V{V _receiver70605=_v_70136_svg;V _method70606=this->_literals[38];V _method=j::get(_receiver70605,_method70606);j::Args _params70607=j::Args{([&]()->V{V _lhs70600=j::get(_v_70139_style,this->_literals[39]);V _rhs70601=j::get(j::get(_v_70139_style,V(0.0)),this->_literals[11]);return j::binary("+",_lhs70600,_rhs70601);})(),([&]()->V{V _receiver70602=_v_70136_svg;V _method70603=this->_literals[41];V _method=j::get(_receiver70602,_method70603);j::Args _params70604=j::Args{this->_literals[40]};return j::call(_method,_params70604,_receiver70602);})()};return j::call(_method,_params70607,_receiver70605);})();V _method70598=this->_literals[20];V _method=j::get(_receiver70597,_method70598);j::Args _params70599=j::Args{j::regexp(u"class=\"f k(\\d+)\"","g"),([&]()->V{std::u16string _text70596;_text70596+=u"class=\"";_text70596+=j::string(_v_70137_prefix);_text70596+=u"f ";_text70596+=j::string(_v_70137_prefix);_text70596+=u"k$1\"";return V(std::move(_text70596));})()};return j::call(_method,_params70599,_receiver70597);})();V _method70594=this->_literals[20];V _method=j::get(_receiver70593,_method70594);j::Args _params70595=j::Args{j::regexp(u"class=\"c(\\d+)\"","g"),([&]()->V{std::u16string _text70592;_text70592+=u"class=\"";_text70592+=j::string(_v_70137_prefix);_text70592+=u"c$1\"";return V(std::move(_text70592));})()};return j::call(_method,_params70595,_receiver70593);})();V _method70590=this->_literals[20];V _method=j::get(_receiver70589,_method70590);j::Args _params70591=j::Args{j::regexp(u"<linearGradient id=\"g\"","g"),([&]()->V{std::u16string _text70588;_text70588+=u"<linearGradient id=\"";_text70588+=j::string(_v_70137_prefix);_text70588+=u"g\"";return V(std::move(_text70588));})()};return j::call(_method,_params70591,_receiver70589);})();
return ([&]()->V{V _obj70608=j::object();j::put(_obj70608,this->_literals[27],j::unary("+",j::get(_v_70138_box,V(1.0))));j::put(_obj70608,this->_literals[28],j::unary("+",j::get(_v_70138_box,V(2.0))));j::put(_obj70608,this->_literals[29],_v_70140_css);j::put(_obj70608,this->_literals[30],_v_70141_body);return _obj70608;})();

}

return V{};
},2);
this->_v_70142_inkOf.get()=j::function([=](const j::Args &_args_fn70143,const V &_receiver_fn70143,const V &_self_fn70143) mutable ->V{
V _v_70144_css;
V _v_70145_body;
V _pattern70609=_args_fn70143[0];
_v_70144_css=j::get(_pattern70609,this->_literals[29]);
_v_70145_body=j::get(_pattern70609,this->_literals[30]);
{
V _v_70146_first;
V _v_70147_count;
V _v_70149_top;
_v_70146_first=([&]()->V{V _logical70610=([&]()->V{V _chain70611=j::regexp(u"<g[^>]*>([\\s\\S]*?)<\\/g>","");V _chain70612=j::get(_chain70611,this->_literals[36]);V _chain70613=j::call(_chain70612,j::Args{_v_70145_body},_chain70611);if(j::nullish(_chain70613))return V{};V _chain70614=j::get(_chain70613,V(1.0));return _chain70614;})();return j::nullish(_logical70610)?this->_literals[9]:_logical70610;})();
_v_70147_count=([&]()->V{V _callee70615=j::builtin("Map");return j::construct(_callee70615,j::Args{});})();
{for(const auto &_item70616:j::elements(([&]()->V{V _receiver70617=_v_70146_first;V _method70618=this->_literals[42];V _method=j::get(_receiver70617,_method70618);j::Args _params70619=j::Args{j::regexp(u"<tspan class=\"([^\"]+)\">([^<]*)<\\/tspan>","g")};return j::call(_method,_params70619,_receiver70617);})())){V _v_70148_m;
_v_70148_m=_item70616;
(void)(([&]()->V{V _receiver70629=_v_70147_count;V _method70630=this->_literals[44];V _method=j::get(_receiver70629,_method70630);j::Args _params70631=j::Args{j::get(_v_70148_m,V(1.0)),([&]()->V{V _lhs70620=([&]()->V{V _logical70622=([&]()->V{V _receiver70623=_v_70147_count;V _method70624=this->_literals[43];V _method=j::get(_receiver70623,_method70624);j::Args _params70625=j::Args{j::get(_v_70148_m,V(1.0))};return j::call(_method,_params70625,_receiver70623);})();return j::nullish(_logical70622)?V(0.0):_logical70622;})();V _rhs70621=j::get(([&]()->V{V _receiver70626=j::get(_v_70148_m,V(2.0));V _method70627=this->_literals[20];V _method=j::get(_receiver70626,_method70627);j::Args _params70628=j::Args{j::regexp(u"\\s","g"),this->_literals[9]};return j::call(_method,_params70628,_receiver70626);})(),this->_literals[11]);return j::binary("+",_lhs70620,_rhs70621);})()};return j::call(_method,_params70631,_receiver70629);})());
}}
_v_70149_top=([&]()->V{V _chain70632=([&]()->V{j::Args _array70633;for(const auto &_value:j::elements(_v_70147_count))_array70633.push_back(_value);return j::array(std::move(_array70633));})();V _chain70634=j::get(_chain70632,this->_literals[26]);V _chain70635=j::call(_chain70634,j::Args{j::function([=](const j::Args &_args_fn70150,const V &_receiver_fn70150,const V &_self_fn70150) mutable ->V{
V _v_70151_a;
V _v_70152_b;
_v_70151_a=_args_fn70150[0];
_v_70152_b=_args_fn70150[1];
return ([&]()->V{V _lhs70636=j::get(_v_70152_b,V(1.0));V _rhs70637=j::get(_v_70151_a,V(1.0));return V(j::number(_lhs70636)-j::number(_rhs70637));})();
return V{};
},2)},_chain70632);V _chain70638=j::get(_chain70635,V(0.0));if(j::nullish(_chain70638))return V{};V _chain70639=j::get(_chain70638,V(0.0));return _chain70639;})();
return (j::truth(_v_70149_top)?([&]()->V{V _logical70640=([&]()->V{V _chain70641=([&]()->V{V _callee70643=j::builtin("RegExp");return j::construct(_callee70643,j::Args{([&]()->V{std::u16string _text70642;_text70642+=u"\\.";_text70642+=j::string(_v_70149_top);_text70642+=u"\\{fill:(#[0-9a-fA-F]{6})\\}";return V(std::move(_text70642));})()});})();V _chain70644=j::get(_chain70641,this->_literals[36]);V _chain70645=j::call(_chain70644,j::Args{_v_70144_css},_chain70641);if(j::nullish(_chain70645))return V{};V _chain70646=j::get(_chain70645,V(1.0));return _chain70646;})();return j::nullish(_logical70640)?V::null():_logical70640;})():V::null());

}

return V{};
},1);
this->_v_70154_loopOf.get()=j::function([=](const j::Args &_args_fn70155,const V &_receiver_fn70155,const V &_self_fn70155) mutable ->V{
V _v_70156_piece;
V _v_70157_options;
_v_70156_piece=_args_fn70155[0];
V _default70647=_args_fn70155[1];if(_default70647.kind==V::Undefined||_default70647.kind==V::Hole)_default70647=([&]()->V{V _obj70648=j::object();return _obj70648;})();
_v_70157_options=_default70647;
{
V _v_70158_meta;
V _v_70159_motion;
V _v_70160_key;
V _v_70161_every;
V _pattern70649=_v_70156_piece;
_v_70158_meta=j::get(_pattern70649,this->_literals[45]);
_v_70159_motion=j::get(_v_70156_piece,this->_literals[46]);
if(j::truth(_v_70159_motion)){return ([&]()->V{V _obj70650=j::object();j::put(_obj70650,this->_literals[3],j::get(_v_70159_motion,this->_literals[47]));j::put(_obj70650,this->_literals[4],j::get(_v_70159_motion,this->_literals[4]));j::put(_obj70650,this->_literals[6],j::get(_v_70159_motion,this->_literals[6]));return _obj70650;})();
}
if(j::truth(j::unary("!",j::get(_v_70158_meta,this->_literals[7])))){return ([&]()->V{V _obj70651=j::object();j::put(_obj70651,this->_literals[3],V(0.0));j::put(_obj70651,this->_literals[4],V(0.0));return _obj70651;})();
}
if(j::truth(j::get(_v_70158_meta,this->_literals[48]))){return ([&]()->V{V _obj70652=j::object();j::put(_obj70652,this->_literals[3],j::get(_v_70158_meta,this->_literals[48]));j::put(_obj70652,this->_literals[4],V(0.0));return _obj70652;})();
}
_v_70160_key=j::get(this->_v_70153_LOOPS.get(),j::get(_v_70158_meta,this->_literals[49]));
_v_70161_every=(j::truth(_v_70160_key)?j::get(([&]()->V{V _obj70653=j::object();V _spread70654=j::get(_v_70158_meta,this->_literals[50]);for(const auto &_key:j::keys(_spread70654))j::put(_obj70653,_key,j::get(_spread70654,_key));V _spread70655=_v_70157_options;for(const auto &_key:j::keys(_spread70655))j::put(_obj70653,_key,j::get(_spread70655,_key));return _obj70653;})(),_v_70160_key):j::builtin("undefined"));
if(j::truth(([&]()->V{V _logical70656=([&]()->V{V _lhs70657=j::unary("typeof",_v_70161_every);V _rhs70658=this->_literals[51];return V(j::equal(_lhs70657,_rhs70658,true));})();return j::truth(_logical70656)?([&]()->V{V _lhs70659=_v_70161_every;V _rhs70660=V(0.0);return j::binary(">",_lhs70659,_rhs70660);})():_logical70656;})())){return ([&]()->V{V _obj70661=j::object();j::put(_obj70661,this->_literals[3],_v_70161_every);j::put(_obj70661,this->_literals[4],([&]()->V{V _lhs70662=([&]()->V{V _lhs70664=V(0.5);V _rhs70665=_v_70161_every;return j::binary("+",_lhs70664,_rhs70665);})();V _rhs70663=V(1.0);return V(j::number(_lhs70662)-j::number(_rhs70663));})());return _obj70661;})();
}
return ([&]()->V{V _obj70666=j::object();j::put(_obj70666,this->_literals[3],V(4.0));j::put(_obj70666,this->_literals[4],V(0.0));return _obj70666;})();

}

return V{};
},1);
this->_v_70178_fold.get()=j::function([=](const j::Args &_args_fn70179,const V &_receiver_fn70179,const V &_self_fn70179) mutable ->V{
j::Cell _v_70180_palette;
V _v_70181_most;
_v_70180_palette.get()=_args_fn70179[0];
_v_70181_most=_args_fn70179[1];
{
V _v_70182_rgb;
V _v_70187_into;
j::Cell _v_70191_alive;
V _v_70193_apart;
V _v_70204_kept;
j::Cell _v_70210_at;
_v_70182_rgb=([&]()->V{V _receiver70677=_v_70180_palette.get();V _method70678=this->_literals[24];V _method=j::get(_receiver70677,_method70678);j::Args _params70679=j::Args{j::function([=](const j::Args &_args_fn70183,const V &_receiver_fn70183,const V &_self_fn70183) mutable ->V{
j::Cell _v_70184_c;
_v_70184_c.get()=_args_fn70183[0];
return ([&]()->V{V _receiver70673=([&]()->V{j::Args _array70676;_array70676.push_back(V(1.0));_array70676.push_back(V(3.0));_array70676.push_back(V(5.0));return j::array(std::move(_array70676));})();V _method70674=this->_literals[24];V _method=j::get(_receiver70673,_method70674);j::Args _params70675=j::Args{j::function([=](const j::Args &_args_fn70185,const V &_receiver_fn70185,const V &_self_fn70185) mutable ->V{
V _v_70186_i;
_v_70186_i=_args_fn70185[0];
return ([&]()->V{V _callee70672=j::builtin("parseInt");return j::call(_callee70672,j::Args{([&]()->V{V _receiver70669=_v_70184_c.get();V _method70670=this->_literals[38];V _method=j::get(_receiver70669,_method70670);j::Args _params70671=j::Args{_v_70186_i,([&]()->V{V _lhs70667=_v_70186_i;V _rhs70668=V(2.0);return j::binary("+",_lhs70667,_rhs70668);})()};return j::call(_method,_params70671,_receiver70669);})(),V(16.0)});})();
return V{};
},1)};return j::call(_method,_params70675,_receiver70673);})();
return V{};
},1)};return j::call(_method,_params70679,_receiver70677);})();
_v_70187_into=([&]()->V{V _receiver70680=_v_70180_palette.get();V _method70681=this->_literals[24];V _method=j::get(_receiver70680,_method70681);j::Args _params70682=j::Args{j::function([=](const j::Args &_args_fn70188,const V &_receiver_fn70188,const V &_self_fn70188) mutable ->V{
V _v_70189__;
V _v_70190_i;
_v_70189__=_args_fn70188[0];
_v_70190_i=_args_fn70188[1];
return _v_70190_i;
return V{};
},2)};return j::call(_method,_params70682,_receiver70680);})();
_v_70191_alive.get()=([&]()->V{V _receiver70683=_v_70180_palette.get();V _method70684=this->_literals[24];V _method=j::get(_receiver70683,_method70684);j::Args _params70685=j::Args{j::function([=](const j::Args &_args_fn70192,const V &_receiver_fn70192,const V &_self_fn70192) mutable ->V{
return V(true);
return V{};
},0)};return j::call(_method,_params70685,_receiver70683);})();
_v_70193_apart=j::function([=](const j::Args &_args_fn70194,const V &_receiver_fn70194,const V &_self_fn70194) mutable ->V{
V _v_70195_a;
V _v_70196_b;
_v_70195_a=_args_fn70194[0];
_v_70196_b=_args_fn70194[1];
return ([&]()->V{V _lhs70686=([&]()->V{V _lhs70688=([&]()->V{V _lhs70690=V(0.3);V _rhs70691=([&]()->V{V _lhs70692=([&]()->V{V _lhs70694=j::get(_v_70195_a,V(0.0));V _rhs70695=j::get(_v_70196_b,V(0.0));return V(j::number(_lhs70694)-j::number(_rhs70695));})();V _rhs70693=V(2.0);return V(std::pow(j::number(_lhs70692),j::number(_rhs70693)));})();return V(j::number(_lhs70690)*j::number(_rhs70691));})();V _rhs70689=([&]()->V{V _lhs70696=V(0.59);V _rhs70697=([&]()->V{V _lhs70698=([&]()->V{V _lhs70700=j::get(_v_70195_a,V(1.0));V _rhs70701=j::get(_v_70196_b,V(1.0));return V(j::number(_lhs70700)-j::number(_rhs70701));})();V _rhs70699=V(2.0);return V(std::pow(j::number(_lhs70698),j::number(_rhs70699)));})();return V(j::number(_lhs70696)*j::number(_rhs70697));})();return j::binary("+",_lhs70688,_rhs70689);})();V _rhs70687=([&]()->V{V _lhs70702=V(0.11);V _rhs70703=([&]()->V{V _lhs70704=([&]()->V{V _lhs70706=j::get(_v_70195_a,V(2.0));V _rhs70707=j::get(_v_70196_b,V(2.0));return V(j::number(_lhs70706)-j::number(_rhs70707));})();V _rhs70705=V(2.0);return V(std::pow(j::number(_lhs70704),j::number(_rhs70705)));})();return V(j::number(_lhs70702)*j::number(_rhs70703));})();return j::binary("+",_lhs70686,_rhs70687);})();
return V{};
},2);
{V _v_70197_left;
_v_70197_left=j::get(_v_70180_palette.get(),this->_literals[11]);
for(;j::truth(([&]()->V{V _lhs70708=_v_70197_left;V _rhs70709=_v_70181_most;return j::binary(">",_lhs70708,_rhs70709);})());(void)(j::increment(_v_70197_left,-1,false))){
V _v_70198_best;
V _v_70199_keep;
V _v_70200_drop;
_v_70198_best=j::builtin("Infinity");
_v_70199_keep=j::unary("-",V(1.0));
_v_70200_drop=j::unary("-",V(1.0));
{V _v_70201_i;
_v_70201_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs70710=_v_70201_i;V _rhs70711=j::get(_v_70180_palette.get(),this->_literals[11]);return j::binary("<",_lhs70710,_rhs70711);})());(void)(j::increment(_v_70201_i,1,false))){{V _v_70202_j;
_v_70202_j=([&]()->V{V _lhs70712=_v_70201_i;V _rhs70713=V(1.0);return j::binary("+",_lhs70712,_rhs70713);})();
for(;j::truth(([&]()->V{V _lhs70714=_v_70202_j;V _rhs70715=j::get(_v_70180_palette.get(),this->_literals[11]);return j::binary("<",_lhs70714,_rhs70715);})());(void)(j::increment(_v_70202_j,1,false))){if(j::truth(([&]()->V{V _logical70716=([&]()->V{V _logical70717=j::get(_v_70191_alive.get(),_v_70201_i);return j::truth(_logical70717)?j::get(_v_70191_alive.get(),_v_70202_j):_logical70717;})();return j::truth(_logical70716)?([&]()->V{V _lhs70718=([&]()->V{V _callee70720=_v_70193_apart;return j::call(_callee70720,j::Args{j::get(_v_70182_rgb,_v_70201_i),j::get(_v_70182_rgb,_v_70202_j)});})();V _rhs70719=_v_70198_best;return j::binary("<",_lhs70718,_rhs70719);})():_logical70716;})())){(void)(((_v_70198_best=([&]()->V{V _callee70722=_v_70193_apart;return j::call(_callee70722,j::Args{j::get(_v_70182_rgb,_v_70201_i),j::get(_v_70182_rgb,_v_70202_j)});})()),(_v_70199_keep=_v_70201_i),(_v_70200_drop=_v_70202_j)));
}
}}
}}
(void)(([&]()->V{V _base70726=_v_70191_alive.get();V _key70727=_v_70200_drop;V _assign70725=V(false);return j::put(_base70726,_key70727,_assign70725);})());
{V _v_70203_i;
_v_70203_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs70728=_v_70203_i;V _rhs70729=j::get(_v_70187_into,this->_literals[11]);return j::binary("<",_lhs70728,_rhs70729);})());(void)(j::increment(_v_70203_i,1,false))){if(j::truth(([&]()->V{V _lhs70730=j::get(_v_70187_into,_v_70203_i);V _rhs70731=_v_70200_drop;return V(j::equal(_lhs70730,_rhs70731,true));})())){(void)(([&]()->V{V _base70733=_v_70187_into;V _key70734=_v_70203_i;V _assign70732=_v_70199_keep;return j::put(_base70733,_key70734,_assign70732);})());
}
}}

}
}
_v_70204_kept=([&]()->V{V _receiver70735=([&]()->V{V _receiver70738=_v_70180_palette.get();V _method70739=this->_literals[24];V _method=j::get(_receiver70738,_method70739);j::Args _params70740=j::Args{j::function([=](const j::Args &_args_fn70205,const V &_receiver_fn70205,const V &_self_fn70205) mutable ->V{
V _v_70206__;
V _v_70207_i;
_v_70206__=_args_fn70205[0];
_v_70207_i=_args_fn70205[1];
return _v_70207_i;
return V{};
},2)};return j::call(_method,_params70740,_receiver70738);})();V _method70736=this->_literals[52];V _method=j::get(_receiver70735,_method70736);j::Args _params70737=j::Args{j::function([=](const j::Args &_args_fn70208,const V &_receiver_fn70208,const V &_self_fn70208) mutable ->V{
V _v_70209_i;
_v_70209_i=_args_fn70208[0];
return j::get(_v_70191_alive.get(),_v_70209_i);
return V{};
},1)};return j::call(_method,_params70737,_receiver70735);})();
_v_70210_at.get()=([&]()->V{V _callee70745=j::builtin("Map");return j::construct(_callee70745,j::Args{([&]()->V{V _receiver70742=_v_70204_kept;V _method70743=this->_literals[24];V _method=j::get(_receiver70742,_method70743);j::Args _params70744=j::Args{j::function([=](const j::Args &_args_fn70211,const V &_receiver_fn70211,const V &_self_fn70211) mutable ->V{
V _v_70212_c;
V _v_70213_k;
_v_70212_c=_args_fn70211[0];
_v_70213_k=_args_fn70211[1];
return ([&]()->V{j::Args _array70741;_array70741.push_back(_v_70212_c);_array70741.push_back(_v_70213_k);return j::array(std::move(_array70741));})();
return V{};
},2)};return j::call(_method,_params70744,_receiver70742);})()});})();
return ([&]()->V{V _obj70746=j::object();j::put(_obj70746,this->_literals[2],([&]()->V{V _receiver70747=_v_70204_kept;V _method70748=this->_literals[24];V _method=j::get(_receiver70747,_method70748);j::Args _params70749=j::Args{j::function([=](const j::Args &_args_fn70214,const V &_receiver_fn70214,const V &_self_fn70214) mutable ->V{
V _v_70215_i;
_v_70215_i=_args_fn70214[0];
return j::get(_v_70180_palette.get(),_v_70215_i);
return V{};
},1)};return j::call(_method,_params70749,_receiver70747);})());j::put(_obj70746,this->_literals[24],([&]()->V{V _receiver70753=j::builtin("Uint8Array");V _method70754=this->_literals[4];V _method=j::get(_receiver70753,_method70754);j::Args _params70755=j::Args{_v_70187_into,j::function([=](const j::Args &_args_fn70216,const V &_receiver_fn70216,const V &_self_fn70216) mutable ->V{
V _v_70217_i;
_v_70217_i=_args_fn70216[0];
return ([&]()->V{V _receiver70750=_v_70210_at.get();V _method70751=this->_literals[43];V _method=j::get(_receiver70750,_method70751);j::Args _params70752=j::Args{_v_70217_i};return j::call(_method,_params70752,_receiver70750);})();
return V{};
},1)};return j::call(_method,_params70755,_receiver70753);})());return _obj70746;})();

}

return V{};
},2);
this->_v_70218_pieceLoop.get()=j::function([=](const j::Args &_args_fn70219,const V &_receiver_fn70219,const V &_self_fn70219) mutable ->V{
V _v_70220_piece;
j::Cell _v_70221_o;
_v_70220_piece=_args_fn70219[0];
_v_70221_o.get()=_args_fn70219[1];
{
j::Cell _v_70222_meta;
j::Cell _v_70223_dark;
V _v_70224_options;
j::Cell _v_70225_frame;
j::Cell _v_70226_color;
j::Cell _v_70227_folded;
j::Cell _v_70228_at;
V _v_70234_loop;
V _v_70235_every;
V _pattern70756=_v_70220_piece;
_v_70222_meta.get()=j::get(_pattern70756,this->_literals[45]);
(void)(([&]()->V{V _callee70757=this->_v_70164_hex.get();return j::call(_callee70757,j::Args{j::get(_v_70221_o.get(),this->_literals[53]),this->_literals[53]});})());
_v_70223_dark.get()=(j::truth(j::get(_v_70222_meta.get(),this->_literals[54]))?([&]()->V{V _callee70758=this->_v_70172_isDark.get();return j::call(_callee70758,j::Args{j::get(_v_70222_meta.get(),this->_literals[54])});})():j::unary("!",j::unary("!",j::get(_v_70221_o.get(),this->_literals[55]))));
_v_70224_options=([&]()->V{V _obj70759=j::object();V _spread70760=j::get(_v_70222_meta.get(),this->_literals[50]);for(const auto &_key:j::keys(_spread70760))j::put(_obj70759,_key,j::get(_spread70760,_key));V _spread70761=j::get(_v_70221_o.get(),this->_literals[50]);for(const auto &_key:j::keys(_spread70761))j::put(_obj70759,_key,j::get(_spread70761,_key));return _obj70759;})();
_v_70225_frame.get()=([&]()->V{V _receiver70762=_v_70220_piece;V _method70763=this->_literals[56];V _method=j::get(_receiver70762,_method70763);j::Args _params70764=j::Args{_v_70224_options};return j::call(_method,_params70764,_receiver70762);})();
_v_70226_color.get()=([&]()->V{V _callee70767=j::builtin("Uint8Array");return j::construct(_callee70767,j::Args{([&]()->V{V _lhs70765=j::get(_v_70222_meta.get(),this->_literals[0]);V _rhs70766=j::get(_v_70222_meta.get(),this->_literals[1]);return V(j::number(_lhs70765)*j::number(_rhs70766));})()});})();
_v_70227_folded.get()=(j::truth(([&]()->V{V _logical70768=([&]()->V{V _logical70769=j::get(_v_70222_meta.get(),this->_literals[2]);return j::truth(_logical70769)?([&]()->V{V _lhs70770=j::get(_v_70221_o.get(),this->_literals[57]);V _rhs70771=j::builtin("undefined");return V(!j::equal(_lhs70770,_rhs70771,true));})():_logical70769;})();return j::truth(_logical70768)?([&]()->V{V _lhs70772=j::get(j::get(_v_70222_meta.get(),this->_literals[2]),this->_literals[11]);V _rhs70773=j::get(_v_70221_o.get(),this->_literals[57]);return j::binary(">",_lhs70772,_rhs70773);})():_logical70768;})())?([&]()->V{V _callee70774=this->_v_70178_fold.get();return j::call(_callee70774,j::Args{j::get(_v_70222_meta.get(),this->_literals[2]),j::get(_v_70221_o.get(),this->_literals[57])});})():V::null());
_v_70228_at.get()=j::function([=](const j::Args &_args_fn70229,const V &_receiver_fn70229,const V &_self_fn70229) mutable ->V{
V _v_70230_t;
_v_70230_t=_args_fn70229[0];
{
V _v_70231_text;
_v_70231_text=([&]()->V{V _callee70776=_v_70225_frame.get();return j::call(_callee70776,j::Args{_v_70230_t,([&]()->V{V _obj70775=j::object();j::put(_obj70775,this->_literals[58],j::unary("!",_v_70223_dark.get()));j::put(_obj70775,this->_literals[13],(j::truth(j::get(_v_70222_meta.get(),this->_literals[2]))?_v_70226_color.get():j::builtin("undefined")));return _obj70775;})()});})();
return ([&]()->V{V _obj70777=j::object();j::put(_obj70777,this->_literals[12],_v_70231_text);j::put(_obj70777,this->_literals[13],(j::truth(_v_70227_folded.get())?([&]()->V{V _receiver70779=j::builtin("Uint8Array");V _method70780=this->_literals[4];V _method=j::get(_receiver70779,_method70780);j::Args _params70781=j::Args{_v_70226_color.get(),j::function([=](const j::Args &_args_fn70232,const V &_receiver_fn70232,const V &_self_fn70232) mutable ->V{
V _v_70233_c;
_v_70233_c=_args_fn70232[0];
return ([&]()->V{V _logical70778=j::get(j::get(_v_70227_folded.get(),this->_literals[24]),_v_70233_c);return j::nullish(_logical70778)?_v_70233_c:_logical70778;})();
return V{};
},1)};return j::call(_method,_params70781,_receiver70779);})():([&]()->V{V _receiver70782=_v_70226_color.get();V _method70783=this->_literals[38];V _method=j::get(_receiver70782,_method70783);j::Args _params70784=j::Args{};return j::call(_method,_params70784,_receiver70782);})()));return _obj70777;})();

}

return V{};
},1);
_v_70234_loop=([&]()->V{V _callee70785=this->_v_70154_loopOf.get();return j::call(_callee70785,j::Args{_v_70220_piece,_v_70224_options});})();
_v_70235_every=([&]()->V{V _logical70786=j::get(_v_70221_o.get(),this->_literals[47]);return j::nullish(_logical70786)?j::get(_v_70234_loop,this->_literals[3]):_logical70786;})();
return ([&]()->V{V _obj70787=j::object();j::put(_obj70787,this->_literals[0],j::get(_v_70222_meta.get(),this->_literals[0]));j::put(_obj70787,this->_literals[1],j::get(_v_70222_meta.get(),this->_literals[1]));j::put(_obj70787,this->_literals[2],([&]()->V{V _logical70788=([&]()->V{V _logical70789=([&]()->V{V _chain70790=_v_70227_folded.get();if(j::nullish(_chain70790))return V{};V _chain70791=j::get(_chain70790,this->_literals[2]);return _chain70791;})();return j::nullish(_logical70789)?j::get(_v_70222_meta.get(),this->_literals[2]):_logical70789;})();return j::nullish(_logical70788)?([&]()->V{j::Args _array70792;_array70792.push_back(([&]()->V{V _logical70793=j::get(_v_70221_o.get(),this->_literals[53]);return j::nullish(_logical70793)?j::get(this->_v_70162_INK.get(),(j::truth(_v_70223_dark.get())?this->_literals[55]:this->_literals[59])):_logical70793;})());return j::array(std::move(_array70792));})():_logical70788;})());j::put(_obj70787,this->_literals[3],(j::truth(([&]()->V{V _lhs70794=_v_70235_every;V _rhs70795=V(0.0);return j::binary(">",_lhs70794,_rhs70795);})())?_v_70235_every:V(1.0)));j::put(_obj70787,this->_literals[4],([&]()->V{V _logical70796=j::get(_v_70221_o.get(),this->_literals[4]);return j::nullish(_logical70796)?j::get(_v_70234_loop,this->_literals[4]):_logical70796;})());j::put(_obj70787,this->_literals[5],(j::truth(([&]()->V{V _lhs70797=_v_70235_every;V _rhs70798=V(0.0);return j::binary(">",_lhs70797,_rhs70798);})())?_v_70228_at.get():j::function([=](const j::Args &_args_fn70236,const V &_receiver_fn70236,const V &_self_fn70236) mutable ->V{
return ([&]()->V{V _callee70800=_v_70228_at.get();return j::call(_callee70800,j::Args{([&]()->V{V _logical70799=j::get(_v_70221_o.get(),this->_literals[4]);return j::nullish(_logical70799)?V(0.0):_logical70799;})()});})();
return V{};
},0)));j::put(_obj70787,this->_literals[6],([&]()->V{V _logical70801=j::get(_v_70221_o.get(),this->_literals[6]);return j::nullish(_logical70801)?j::get(_v_70234_loop,this->_literals[6]):_logical70801;})());j::put(_obj70787,this->_literals[7],j::get(_v_70221_o.get(),this->_literals[7]));return _obj70787;})();

}

return V{};
},2);
this->_v_70245_svg.get()=j::function([=](const j::Args &_args_fn70246,const V &_receiver_fn70246,const V &_self_fn70246) mutable ->V{
j::Cell _v_70247_piece;
V _v_70248_options;
_v_70247_piece.get()=_args_fn70246[0];
V _default70802=_args_fn70246[1];if(_default70802.kind==V::Undefined||_default70802.kind==V::Hole)_default70802=([&]()->V{V _obj70803=j::object();return _obj70803;})();
_v_70248_options=_default70802;
{
j::Cell _v_70249_label;
j::Cell _v_70250_scale;
V _v_70251_budget;
V _v_70252_meta;
V _v_70253_key;
V _v_70254_guessed;
V _v_70255_make;
V _v_70258_out;
V _v_70259_tried;
V _v_70261_colours;
V _v_70262_loop;
_v_70249_label.get()=([&]()->V{V _logical70804=j::get(_v_70248_options,this->_literals[60]);return j::nullish(_logical70804)?([&]()->V{std::u16string _text70805;_text70805+=u"";_text70805+=j::string(j::get(j::get(_v_70247_piece.get(),this->_literals[45]),this->_literals[61]));_text70805+=u", in ascii, from ascii.rest";return V(std::move(_text70805));})():_logical70804;})();
_v_70250_scale.get()=([&]()->V{V _callee70806=this->_v_70168_num.get();return j::call(_callee70806,j::Args{j::get(_v_70248_options,this->_literals[62]),this->_literals[62]});})();
_v_70251_budget=(j::truth(([&]()->V{V _lhs70807=j::get(_v_70248_options,this->_literals[63]);V _rhs70808=V(false);return V(j::equal(_lhs70807,_rhs70808,true));})())?j::builtin("Infinity"):([&]()->V{V _logical70809=([&]()->V{V _callee70810=this->_v_70168_num.get();return j::call(_callee70810,j::Args{j::get(_v_70248_options,this->_literals[63]),this->_literals[63]});})();return j::nullish(_logical70809)?V(1000000.0):_logical70809;})());
V _pattern70811=_v_70247_piece.get();
_v_70252_meta=j::get(_pattern70811,this->_literals[45]);
_v_70253_key=j::get(this->_v_70153_LOOPS.get(),j::get(_v_70252_meta,this->_literals[49]));
_v_70254_guessed=([&]()->V{V _logical70812=([&]()->V{V _logical70813=([&]()->V{V _logical70814=([&]()->V{V _lhs70815=j::get(_v_70252_meta,this->_literals[7]);V _rhs70816=V(0.0);return j::binary(">",_lhs70815,_rhs70816);})();return j::truth(_logical70814)?j::unary("!",j::get(_v_70252_meta,this->_literals[48])):_logical70814;})();return j::truth(_logical70813)?j::unary("!",j::get(_v_70247_piece.get(),this->_literals[46])):_logical70813;})();return j::truth(_logical70812)?j::unary("!",([&]()->V{V _logical70817=_v_70253_key;return j::truth(_logical70817)?([&]()->V{V _lhs70818=j::unary("typeof",j::get(([&]()->V{V _obj70820=j::object();V _spread70821=j::get(_v_70252_meta,this->_literals[50]);for(const auto &_key:j::keys(_spread70821))j::put(_obj70820,_key,j::get(_spread70821,_key));V _spread70822=j::get(_v_70248_options,this->_literals[50]);for(const auto &_key:j::keys(_spread70822))j::put(_obj70820,_key,j::get(_spread70822,_key));return _obj70820;})(),_v_70253_key));V _rhs70819=this->_literals[51];return V(j::equal(_lhs70818,_rhs70819,true));})():_logical70817;})()):_logical70812;})();
if(j::truth(([&]()->V{V _logical70823=([&]()->V{V _logical70824=_v_70254_guessed;return j::truth(_logical70824)?([&]()->V{V _lhs70825=j::get(_v_70248_options,this->_literals[47]);V _rhs70826=j::builtin("undefined");return V(j::equal(_lhs70825,_rhs70826,true));})():_logical70824;})();return j::truth(_logical70823)?j::unary("!",([&]()->V{V _receiver70827=this->_v_70237_warned.get();V _method70828=this->_literals[31];V _method=j::get(_receiver70827,_method70828);j::Args _params70829=j::Args{j::get(_v_70252_meta,this->_literals[61])};return j::call(_method,_params70829,_receiver70827);})()):_logical70823;})())){
(void)(([&]()->V{V _receiver70830=this->_v_70237_warned.get();V _method70831=this->_literals[17];V _method=j::get(_receiver70830,_method70831);j::Args _params70832=j::Args{j::get(_v_70252_meta,this->_literals[61])};return j::call(_method,_params70832,_receiver70830);})());
(void)(([&]()->V{V _receiver70834=j::builtin("console");V _method70835=this->_literals[64];V _method=j::get(_receiver70834,_method70835);j::Args _params70836=j::Args{([&]()->V{std::u16string _text70833;_text70833+=u"ascii.rest: ";_text70833+=j::string(j::get(_v_70252_meta,this->_literals[61]));_text70833+=u" moves but has no loop, so its SVG plays its first 4 seconds and jumps back: give it one (a recipe's period, row(), column() or grid()'s loop, or repeat()), or svg's seconds";return V(std::move(_text70833));})()};return j::call(_method,_params70836,_receiver70834);})());

}

_v_70255_make=j::function([=](const j::Args &_args_fn70256,const V &_receiver_fn70256,const V &_self_fn70256) mutable ->V{
V _v_70257_o;
_v_70257_o=_args_fn70256[0];
return ([&]()->V{V _callee70838=this->_v_70123_wrap.get();return j::call(_callee70838,j::Args{([&]()->V{V _callee70837=this->_v_70238_pieceArt.get();return j::call(_callee70837,j::Args{_v_70247_piece.get(),_v_70257_o});})(),_v_70249_label.get(),_v_70250_scale.get()});})();
return V{};
},1);
_v_70258_out=([&]()->V{V _callee70839=_v_70255_make;return j::call(_callee70839,j::Args{_v_70248_options});})();
if(j::truth(([&]()->V{V _lhs70840=j::get(_v_70258_out,this->_literals[11]);V _rhs70841=_v_70251_budget;return j::binary("<=",_lhs70840,_rhs70841);})())){return _v_70258_out;
}
_v_70259_tried=([&]()->V{j::Args _array70842;return j::array(std::move(_array70842));})();
if(j::truth(([&]()->V{V _lhs70843=j::get(_v_70248_options,this->_literals[7]);V _rhs70844=j::builtin("undefined");return V(j::equal(_lhs70843,_rhs70844,true));})())){{for(const auto &_item70845:j::elements(([&]()->V{j::Args _array70846;_array70846.push_back(V(10.0));_array70846.push_back(V(8.0));_array70846.push_back(V(6.0));return j::array(std::move(_array70846));})())){V _v_70260_fps;
_v_70260_fps=_item70845;
{
(void)((_v_70258_out=([&]()->V{V _callee70850=_v_70255_make;return j::call(_callee70850,j::Args{([&]()->V{V _obj70848=j::object();V _spread70849=_v_70248_options;for(const auto &_key:j::keys(_spread70849))j::put(_obj70848,_key,j::get(_spread70849,_key));j::put(_obj70848,this->_literals[7],_v_70260_fps);return _obj70848;})()});})()));
if(j::truth(([&]()->V{V _lhs70851=j::get(_v_70258_out,this->_literals[11]);V _rhs70852=_v_70251_budget;return j::binary("<=",_lhs70851,_rhs70852);})())){return _v_70258_out;
}

}
}}
}
if(j::truth(([&]()->V{V _lhs70853=j::get(_v_70248_options,this->_literals[7]);V _rhs70854=j::builtin("undefined");return V(j::equal(_lhs70853,_rhs70854,true));})())){(void)(([&]()->V{V _receiver70855=_v_70259_tried;V _method70856=this->_literals[18];V _method=j::get(_receiver70855,_method70856);j::Args _params70857=j::Args{this->_literals[65]};return j::call(_method,_params70857,_receiver70855);})());
}
_v_70261_colours=([&]()->V{V _logical70858=([&]()->V{V _chain70859=_v_70247_piece.get();V _chain70860=j::get(_chain70859,this->_literals[45]);V _chain70861=j::get(_chain70860,this->_literals[2]);if(j::nullish(_chain70861))return V{};V _chain70862=j::get(_chain70861,this->_literals[11]);return _chain70862;})();return j::nullish(_logical70858)?V(0.0):_logical70858;})();
if(j::truth(([&]()->V{V _lhs70863=_v_70261_colours;V _rhs70864=V(16.0);return j::binary(">",_lhs70863,_rhs70864);})())){
(void)((_v_70258_out=([&]()->V{V _callee70873=_v_70255_make;return j::call(_callee70873,j::Args{([&]()->V{V _obj70866=j::object();V _spread70867=_v_70248_options;for(const auto &_key:j::keys(_spread70867))j::put(_obj70866,_key,j::get(_spread70867,_key));V _spread70868=(j::truth(([&]()->V{V _lhs70869=j::get(_v_70248_options,this->_literals[7]);V _rhs70870=j::builtin("undefined");return V(j::equal(_lhs70869,_rhs70870,true));})())?([&]()->V{V _obj70871=j::object();j::put(_obj70871,this->_literals[7],V(6.0));return _obj70871;})():([&]()->V{V _obj70872=j::object();return _obj70872;})());for(const auto &_key:j::keys(_spread70868))j::put(_obj70866,_key,j::get(_spread70868,_key));j::put(_obj70866,this->_literals[57],V(16.0));return _obj70866;})()});})()));
if(j::truth(([&]()->V{V _lhs70874=j::get(_v_70258_out,this->_literals[11]);V _rhs70875=_v_70251_budget;return j::binary("<=",_lhs70874,_rhs70875);})())){return _v_70258_out;
}
(void)(([&]()->V{V _receiver70876=_v_70259_tried;V _method70877=this->_literals[18];V _method=j::get(_receiver70876,_method70877);j::Args _params70878=j::Args{this->_literals[66]};return j::call(_method,_params70878,_receiver70876);})());

}

_v_70262_loop=([&]()->V{V _logical70879=j::get(_v_70248_options,this->_literals[47]);return j::nullish(_logical70879)?j::get(([&]()->V{V _callee70883=this->_v_70154_loopOf.get();return j::call(_callee70883,j::Args{_v_70247_piece.get(),([&]()->V{V _obj70880=j::object();V _spread70881=j::get(j::get(_v_70247_piece.get(),this->_literals[45]),this->_literals[50]);for(const auto &_key:j::keys(_spread70881))j::put(_obj70880,_key,j::get(_spread70881,_key));V _spread70882=j::get(_v_70248_options,this->_literals[50]);for(const auto &_key:j::keys(_spread70882))j::put(_obj70880,_key,j::get(_spread70882,_key));return _obj70880;})()});})(),this->_literals[3]):_logical70879;})();
(void)(([&]()->V{V _receiver70909=j::builtin("console");V _method70910=this->_literals[64];V _method=j::get(_receiver70909,_method70910);j::Args _params70911=j::Args{([&]()->V{V _lhs70884=([&]()->V{V _lhs70886=([&]()->V{std::u16string _text70888;_text70888+=u"ascii.rest: the SVG of ";_text70888+=j::string(j::get(j::get(_v_70247_piece.get(),this->_literals[45]),this->_literals[61]));_text70888+=u" is ";_text70888+=j::string(([&]()->V{V _receiver70889=([&]()->V{V _lhs70892=j::get(_v_70258_out,this->_literals[11]);V _rhs70893=V(1000000.0);return V(j::number(_lhs70892)/j::number(_rhs70893));})();V _method70890=this->_literals[33];V _method=j::get(_receiver70889,_method70890);j::Args _params70891=j::Args{V(1.0)};return j::call(_method,_params70891,_receiver70889);})());_text70888+=u" MB, over its budget of ";_text70888+=j::string(([&]()->V{V _receiver70894=([&]()->V{V _lhs70897=_v_70251_budget;V _rhs70898=V(1000000.0);return V(j::number(_lhs70897)/j::number(_rhs70898));})();V _method70895=this->_literals[33];V _method=j::get(_receiver70894,_method70895);j::Args _params70896=j::Args{V(1.0)};return j::call(_method,_params70896,_receiver70894);})());_text70888+=u" MB";return V(std::move(_text70888));})();V _rhs70887=([&]()->V{std::u16string _text70899;_text70899+=u"";_text70899+=j::string((j::truth(j::get(_v_70259_tried,this->_literals[11]))?([&]()->V{std::u16string _text70900;_text70900+=u" even at ";_text70900+=j::string(([&]()->V{V _receiver70901=_v_70259_tried;V _method70902=this->_literals[25];V _method=j::get(_receiver70901,_method70902);j::Args _params70903=j::Args{this->_literals[67]};return j::call(_method,_params70903,_receiver70901);})());_text70900+=u"";return V(std::move(_text70900));})():this->_literals[9]));_text70899+=u": its loop is ";_text70899+=j::string(j::unary("+",([&]()->V{V _receiver70904=_v_70262_loop;V _method70905=this->_literals[33];V _method=j::get(_receiver70904,_method70905);j::Args _params70906=j::Args{V(2.0)};return j::call(_method,_params70906,_receiver70904);})()));_text70899+=u" s, it is ";_text70899+=j::string(j::get(j::get(_v_70247_piece.get(),this->_literals[45]),this->_literals[0]));_text70899+=u" by ";_text70899+=j::string(j::get(j::get(_v_70247_piece.get(),this->_literals[45]),this->_literals[1]));_text70899+=u"";return V(std::move(_text70899));})();return j::binary("+",_lhs70886,_rhs70887);})();V _rhs70885=([&]()->V{std::u16string _text70907;_text70907+=u"";_text70907+=j::string((j::truth(_v_70261_colours)?([&]()->V{std::u16string _text70908;_text70908+=u" in ";_text70908+=j::string(_v_70261_colours);_text70908+=u" colours";return V(std::move(_text70908));})():this->_literals[9]));_text70907+=u". A shorter loop (period, or svg's seconds) or a smaller piece makes it smaller; { budget: false } keeps it as it is.";return V(std::move(_text70907));})();return j::binary("+",_lhs70884,_rhs70885);})()};return j::call(_method,_params70911,_receiver70909);})());
return _v_70258_out;

}

return V{};
},1);
this->_v_70271_bannerSvg.get()=j::function([=](const j::Args &_args_fn70272,const V &_receiver_fn70272,const V &_self_fn70272) mutable ->V{
V _v_70273_text;
V _v_70274_options;
_v_70273_text=_args_fn70272[0];
V _default70912=_args_fn70272[1];if(_default70912.kind==V::Undefined||_default70912.kind==V::Hole)_default70912=([&]()->V{V _obj70913=j::object();return _obj70913;})();
_v_70274_options=_default70912;
{
V _v_70275_ground;
j::Cell _v_70276_dark;
V _v_70277_theme;
j::Cell _v_70281_art;
V _v_70282_asked;
V _v_70283_quiet;
V _v_70284_piece;
j::Cell _v_70285_meta;
V _v_70286_motion;
j::Cell _v_70287_fade;
j::Cell _v_70288_frame;
j::Cell _v_70289_color;
V _v_70290_at;
V _v_70297_palette;
j::Cell _v_70298_letters;
V _v_70299_lo;
V _v_70300_hi;
j::Cell _v_70306_line;
V _v_70307_tagline;
V _v_70321_place;
V _v_70322_across;
j::Cell _v_70323_align;
j::Cell _v_70324_gapUnder;
V _v_70325_blockW;
V _v_70326_blockH;
j::Cell _v_70327_shift;
V _v_70331_block;
V _v_70337_spacing;
V _v_70338_width;
j::Cell _v_70339_height;
V _v_70340_body;
V _v_70352_label;
_v_70275_ground=([&]()->V{V _callee70916=this->_v_70164_hex.get();return j::call(_callee70916,j::Args{([&]()->V{V _callee70915=this->_v_70264_themed.get();return j::call(_callee70915,j::Args{j::get(_v_70274_options,this->_literals[68]),([&]()->V{V _logical70914=j::get(_v_70274_options,this->_literals[55]);return j::nullish(_logical70914)?V(false):_logical70914;})()});})(),this->_literals[68]});})();
_v_70276_dark.get()=(j::truth(_v_70275_ground)?([&]()->V{V _callee70917=this->_v_70268_darkColor.get();return j::call(_callee70917,j::Args{_v_70275_ground});})():([&]()->V{V _logical70918=j::get(_v_70274_options,this->_literals[55]);return j::nullish(_logical70918)?V(false):_logical70918;})());
_v_70277_theme=(j::truth(_v_70276_dark.get())?this->_literals[55]:this->_literals[59]);
{for(const auto &_item70919:j::elements(([&]()->V{j::Args _array70920;_array70920.push_back(this->_literals[69]);_array70920.push_back(this->_literals[70]);_array70920.push_back(this->_literals[71]);_array70920.push_back(this->_literals[72]);_array70920.push_back(this->_literals[73]);_array70920.push_back(this->_literals[62]);return j::array(std::move(_array70920));})())){V _v_70278_k;
_v_70278_k=_item70919;
(void)(([&]()->V{V _callee70921=this->_v_70168_num.get();return j::call(_callee70921,j::Args{j::get(_v_70274_options,_v_70278_k),_v_70278_k});})());
}}
{for(const auto &_item70922:j::elements(([&]()->V{j::Args _array70923;_array70923.push_back(this->_literals[74]);_array70923.push_back(this->_literals[68]);return j::array(std::move(_array70923));})())){V _v_70279_k;
_v_70279_k=_item70922;
{for(const auto &_item70924:j::elements(([&]()->V{j::Args _array70925;_array70925.push_back(V(false));_array70925.push_back(V(true));return j::array(std::move(_array70925));})())){V _v_70280_d;
_v_70280_d=_item70924;
(void)(([&]()->V{V _callee70927=this->_v_70164_hex.get();return j::call(_callee70927,j::Args{([&]()->V{V _callee70926=this->_v_70264_themed.get();return j::call(_callee70926,j::Args{j::get(_v_70274_options,_v_70279_k),_v_70280_d});})(),_v_70279_k});})());
}}
}}
if(j::truth(([&]()->V{V _logical70928=([&]()->V{V _lhs70929=j::get(_v_70274_options,this->_literals[75]);V _rhs70930=j::builtin("undefined");return V(!j::equal(_lhs70929,_rhs70930,true));})();return j::truth(_logical70928)?j::unary("!",([&]()->V{V _receiver70931=([&]()->V{j::Args _array70934;_array70934.push_back(this->_literals[76]);_array70934.push_back(this->_literals[77]);_array70934.push_back(this->_literals[78]);_array70934.push_back(this->_literals[79]);return j::array(std::move(_array70934));})();V _method70932=this->_literals[80];V _method=j::get(_receiver70931,_method70932);j::Args _params70933=j::Args{j::get(_v_70274_options,this->_literals[75])};return j::call(_method,_params70933,_receiver70931);})()):_logical70928;})())){j::raise(([&]()->V{V _callee70939=j::builtin("Error");return j::construct(_callee70939,j::Args{([&]()->V{std::u16string _text70935;_text70935+=u"ascii.rest: place takes \"left\", \"right\", \"above\" or \"below\", not ";_text70935+=j::string(([&]()->V{V _receiver70936=j::builtin("JSON");V _method70937=this->_literals[81];V _method=j::get(_receiver70936,_method70937);j::Args _params70938=j::Args{j::get(_v_70274_options,this->_literals[75])};return j::call(_method,_params70938,_receiver70936);})());_text70935+=u"";return V(std::move(_text70935));})()});})());
}
if(j::truth(([&]()->V{V _logical70940=([&]()->V{V _lhs70941=j::get(_v_70274_options,this->_literals[82]);V _rhs70942=j::builtin("undefined");return V(!j::equal(_lhs70941,_rhs70942,true));})();return j::truth(_logical70940)?j::unary("!",([&]()->V{V _receiver70943=([&]()->V{j::Args _array70946;_array70946.push_back(this->_literals[83]);_array70946.push_back(this->_literals[84]);_array70946.push_back(this->_literals[85]);return j::array(std::move(_array70946));})();V _method70944=this->_literals[80];V _method=j::get(_receiver70943,_method70944);j::Args _params70945=j::Args{j::get(_v_70274_options,this->_literals[82])};return j::call(_method,_params70945,_receiver70943);})()):_logical70940;})())){j::raise(([&]()->V{V _callee70951=j::builtin("Error");return j::construct(_callee70951,j::Args{([&]()->V{std::u16string _text70947;_text70947+=u"ascii.rest: align takes \"start\", \"center\" or \"end\", not ";_text70947+=j::string(([&]()->V{V _receiver70948=j::builtin("JSON");V _method70949=this->_literals[81];V _method=j::get(_receiver70948,_method70949);j::Args _params70950=j::Args{j::get(_v_70274_options,this->_literals[82])};return j::call(_method,_params70950,_receiver70948);})());_text70947+=u"";return V(std::move(_text70947));})()});})());
}
_v_70281_art.get()=V::null();
if(j::truth(([&]()->V{V _logical70952=j::get(_v_70274_options,this->_literals[86]);return j::truth(_logical70952)?([&]()->V{V _lhs70953=this->_literals[87];V _rhs70954=j::get(_v_70274_options,this->_literals[86]);return j::binary("in",_lhs70953,_rhs70954);})():_logical70952;})())){
(void)((_v_70281_art.get()=([&]()->V{V _callee70956=this->_v_70134_namespaced.get();return j::call(_callee70956,j::Args{j::get(j::get(_v_70274_options,this->_literals[86]),this->_literals[87]),this->_literals[88]});})()));
if(j::truth(j::unary("!",_v_70281_art.get()))){j::raise(([&]()->V{V _callee70957=j::builtin("Error");return j::construct(_callee70957,j::Args{this->_literals[89]});})());
}

}
else {if(j::truth(j::get(_v_70274_options,this->_literals[86]))){(void)((_v_70281_art.get()=([&]()->V{V _callee70960=this->_v_70238_pieceArt.get();return j::call(_callee70960,j::Args{j::get(_v_70274_options,this->_literals[86]),([&]()->V{V _obj70959=j::object();j::put(_obj70959,this->_literals[55],_v_70276_dark.get());return _obj70959;})(),this->_literals[88]});})()));
}
}
if(j::truth(([&]()->V{V _logical70961=_v_70281_art.get();return j::truth(_logical70961)?([&]()->V{V _lhs70962=j::get(_v_70274_options,this->_literals[90]);V _rhs70963=this->_literals[91];return V(j::equal(_lhs70962,_rhs70963,true));})():_logical70961;})())){(void)(([&]()->V{V _base70965=_v_70281_art.get();V _key70966=this->_literals[29];V _assign70964=([&]()->V{std::u16string _text70967;_text70967+=u".af{animation:none;opacity:0}.af.ak0{opacity:1}";return V(std::move(_text70967));})();return j::update(_base70965,_key70966,"+",_assign70964);})());
}
_v_70282_asked=(j::truth(([&]()->V{V _lhs70968=j::get(_v_70274_options,this->_literals[13]);V _rhs70969=this->_literals[86];return V(j::equal(_lhs70968,_rhs70969,true));})())?([&]()->V{V _logical70970=([&]()->V{V _logical70971=_v_70281_art.get();return j::truth(_logical70971)?([&]()->V{V _callee70972=this->_v_70142_inkOf.get();return j::call(_callee70972,j::Args{_v_70281_art.get()});})():_logical70971;})();return j::nullish(_logical70970)?j::get(this->_v_70162_INK.get(),_v_70277_theme):_logical70970;})():([&]()->V{V _logical70973=([&]()->V{V _callee70974=this->_v_70264_themed.get();return j::call(_callee70974,j::Args{j::get(_v_70274_options,this->_literals[13]),_v_70276_dark.get()});})();return j::nullish(_logical70973)?j::get(this->_v_70162_INK.get(),_v_70277_theme):_logical70973;})());
_v_70283_quiet=([&]()->V{V _logical70975=([&]()->V{V _callee70976=this->_v_70264_themed.get();return j::call(_callee70976,j::Args{j::get(_v_70274_options,this->_literals[92]),_v_70276_dark.get()});})();return j::nullish(_logical70975)?j::get(this->_v_70263_QUIET.get(),_v_70277_theme):_logical70975;})();
_v_70284_piece=([&]()->V{V _callee70979=this->_v_70035_banner.get();return j::call(_callee70979,j::Args{_v_70273_text,([&]()->V{V _obj70977=j::object();V _spread70978=_v_70274_options;for(const auto &_key:j::keys(_spread70978))j::put(_obj70977,_key,j::get(_spread70978,_key));j::put(_obj70977,this->_literals[13],_v_70282_asked);j::put(_obj70977,this->_literals[92],_v_70283_quiet);return _obj70977;})()});})();
V _pattern70980=_v_70284_piece;
_v_70285_meta.get()=j::get(_pattern70980,this->_literals[45]);
_v_70286_motion=j::get(_pattern70980,this->_literals[46]);
_v_70287_fade.get()=(j::truth(([&]()->V{V _logical70981=([&]()->V{V _receiver70982=j::builtin("Array");V _method70983=this->_literals[93];V _method=j::get(_receiver70982,_method70983);j::Args _params70984=j::Args{_v_70282_asked};return j::call(_method,_params70984,_receiver70982);})();return j::truth(_logical70981)?([&]()->V{V _lhs70985=j::get(_v_70282_asked,this->_literals[11]);V _rhs70986=V(1.0);return j::binary(">",_lhs70985,_rhs70986);})():_logical70981;})())?_v_70282_asked:V::null());
_v_70288_frame.get()=([&]()->V{V _receiver70987=_v_70284_piece;V _method70988=this->_literals[56];V _method=j::get(_receiver70987,_method70988);j::Args _params70989=j::Args{};return j::call(_method,_params70989,_receiver70987);})();
_v_70289_color.get()=([&]()->V{V _callee70992=j::builtin("Uint8Array");return j::construct(_callee70992,j::Args{([&]()->V{V _lhs70990=j::get(_v_70285_meta.get(),this->_literals[0]);V _rhs70991=j::get(_v_70285_meta.get(),this->_literals[1]);return V(j::number(_lhs70990)*j::number(_rhs70991));})()});})();
_v_70290_at=j::function([=](const j::Args &_args_fn70291,const V &_receiver_fn70291,const V &_self_fn70291) mutable ->V{
V _v_70292_t;
_v_70292_t=_args_fn70291[0];
{
V _v_70293_text;
V _v_70294_c;
V _v_70295_base;
(void)(([&]()->V{V _receiver70993=_v_70289_color.get();V _method70994=this->_literals[94];V _method=j::get(_receiver70993,_method70994);j::Args _params70995=j::Args{V(0.0)};return j::call(_method,_params70995,_receiver70993);})());
_v_70293_text=([&]()->V{V _callee70997=_v_70288_frame.get();return j::call(_callee70997,j::Args{_v_70292_t,([&]()->V{V _obj70996=j::object();j::put(_obj70996,this->_literals[58],j::unary("!",_v_70276_dark.get()));j::put(_obj70996,this->_literals[13],_v_70289_color.get());return _obj70996;})()});})();
_v_70294_c=([&]()->V{V _receiver70998=_v_70289_color.get();V _method70999=this->_literals[38];V _method=j::get(_receiver70998,_method70999);j::Args _params71000=j::Args{};return j::call(_method,_params71000,_receiver70998);})();
_v_70295_base=(j::truth(_v_70276_dark.get())?([&]()->V{V _lhs71001=j::get(j::get(_v_70285_meta.get(),this->_literals[2]),this->_literals[11]);V _rhs71002=V(2.0);return V(j::number(_lhs71001)/j::number(_rhs71002));})():V(0.0));
{V _v_70296_i;
_v_70296_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs71003=_v_70296_i;V _rhs71004=j::get(_v_70294_c,this->_literals[11]);return j::binary("<",_lhs71003,_rhs71004);})());(void)(j::increment(_v_70296_i,1,false))){(void)(([&]()->V{V _base71006=_v_70294_c;V _key71007=_v_70296_i;V _assign71005=(j::truth(([&]()->V{V _lhs71008=([&]()->V{V _lhs71010=j::get(_v_70294_c,_v_70296_i);V _rhs71011=_v_70295_base;return V(j::number(_lhs71010)-j::number(_rhs71011));})();V _rhs71009=V(0.0);return j::binary(">",_lhs71008,_rhs71009);})())?(j::truth(_v_70287_fade.get())?V(1.0):([&]()->V{V _lhs71012=j::get(_v_70294_c,_v_70296_i);V _rhs71013=_v_70295_base;return V(j::number(_lhs71012)-j::number(_rhs71013));})()):V(0.0));return j::put(_base71006,_key71007,_assign71005);})());
}}
return ([&]()->V{V _obj71014=j::object();j::put(_obj71014,this->_literals[12],_v_70293_text);j::put(_obj71014,this->_literals[13],_v_70294_c);return _obj71014;})();

}

return V{};
},1);
_v_70297_palette=([&]()->V{V _receiver71017=j::get(_v_70285_meta.get(),this->_literals[2]);V _method71018=this->_literals[38];V _method=j::get(_receiver71017,_method71018);j::Args _params71019=j::Args{(j::truth(_v_70276_dark.get())?([&]()->V{V _lhs71015=j::get(j::get(_v_70285_meta.get(),this->_literals[2]),this->_literals[11]);V _rhs71016=V(2.0);return V(j::number(_lhs71015)/j::number(_rhs71016));})():V(0.0))};return j::call(_method,_params71019,_receiver71017);})();
if(j::truth(_v_70287_fade.get())){(void)(([&]()->V{V _base71021=_v_70297_palette;V _key71022=V(1.0);V _assign71020=this->_literals[95];return j::put(_base71021,_key71022,_assign71020);})());
}
_v_70298_letters.get()=([&]()->V{V _callee71025=this->_v_70049_part.get();return j::call(_callee71025,j::Args{([&]()->V{V _obj71023=j::object();j::put(_obj71023,this->_literals[0],j::get(_v_70285_meta.get(),this->_literals[0]));j::put(_obj71023,this->_literals[1],j::get(_v_70285_meta.get(),this->_literals[1]));j::put(_obj71023,this->_literals[2],_v_70297_palette);j::put(_obj71023,this->_literals[3],([&]()->V{V _logical71024=j::get(_v_70286_motion,this->_literals[47]);return !j::truth(_logical71024)?V(1.0):_logical71024;})());j::put(_obj71023,this->_literals[4],j::get(_v_70286_motion,this->_literals[4]));j::put(_obj71023,this->_literals[5],_v_70290_at);j::put(_obj71023,this->_literals[6],j::get(_v_70286_motion,this->_literals[6]));j::put(_obj71023,this->_literals[7],j::get(_v_70274_options,this->_literals[7]));return _obj71023;})()});})();
_v_70299_lo=j::get(_v_70285_meta.get(),this->_literals[0]);
_v_70300_hi=V(0.0);
if(j::truth(_v_70287_fade.get())){
V _v_70301_all;
_v_70301_all=([&]()->V{V _callee71027=_v_70290_at;return j::call(_callee71027,j::Args{([&]()->V{V _logical71026=j::get(_v_70285_meta.get(),this->_literals[91]);return j::nullish(_logical71026)?j::get(_v_70286_motion,this->_literals[4]):_logical71026;})()});})();
{V _v_70302_i;
_v_70302_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs71028=_v_70302_i;V _rhs71029=j::get(j::get(_v_70301_all,this->_literals[13]),this->_literals[11]);return j::binary("<",_lhs71028,_rhs71029);})());(void)(j::increment(_v_70302_i,1,false))){if(j::truth(j::get(j::get(_v_70301_all,this->_literals[13]),_v_70302_i))){(void)(((_v_70299_lo=([&]()->V{V _receiver71035=j::builtin("Math");V _method71036=this->_literals[96];V _method=j::get(_receiver71035,_method71036);j::Args _params71037=j::Args{_v_70299_lo,([&]()->V{V _lhs71031=_v_70302_i;V _rhs71032=j::get(_v_70285_meta.get(),this->_literals[0]);return V(std::fmod(j::number(_lhs71031),j::number(_rhs71032)));})()};return j::call(_method,_params71037,_receiver71035);})()),(_v_70300_hi=([&]()->V{V _receiver71043=j::builtin("Math");V _method71044=this->_literals[10];V _method=j::get(_receiver71043,_method71044);j::Args _params71045=j::Args{_v_70300_hi,([&]()->V{V _lhs71039=_v_70302_i;V _rhs71040=j::get(_v_70285_meta.get(),this->_literals[0]);return V(std::fmod(j::number(_lhs71039),j::number(_rhs71040)));})()};return j::call(_method,_params71045,_receiver71043);})())));
}
}}

}

if(j::truth(_v_70287_fade.get())){(void)(([&]()->V{V _base71047=_v_70298_letters.get();V _key71048=this->_literals[30];V _assign71046=([&]()->V{V _lhs71049=([&]()->V{V _lhs71051=([&]()->V{std::u16string _text71053;_text71053+=u"<defs><linearGradient id=\"g\" gradientUnits=\"userSpaceOnUse\" x1=\"";_text71053+=j::string(([&]()->V{V _lhs71054=([&]()->V{V _lhs71056=_v_70299_lo;V _rhs71057=V(0.5);return j::binary("+",_lhs71056,_rhs71057);})();V _rhs71055=this->_v_70036_CW.get();return V(j::number(_lhs71054)*j::number(_rhs71055));})());_text71053+=u"\" y1=\"0\" x2=\"";_text71053+=j::string(([&]()->V{V _lhs71058=([&]()->V{V _lhs71060=_v_70300_hi;V _rhs71061=V(0.5);return j::binary("+",_lhs71060,_rhs71061);})();V _rhs71059=this->_v_70036_CW.get();return V(j::number(_lhs71058)*j::number(_rhs71059));})());_text71053+=u"\" y2=\"0\">";return V(std::move(_text71053));})();V _rhs71052=([&]()->V{V _receiver71062=([&]()->V{V _receiver71073=_v_70287_fade.get();V _method71074=this->_literals[24];V _method=j::get(_receiver71073,_method71074);j::Args _params71075=j::Args{j::function([=](const j::Args &_args_fn70303,const V &_receiver_fn70303,const V &_self_fn70303) mutable ->V{
V _v_70304_c;
V _v_70305_i;
_v_70304_c=_args_fn70303[0];
_v_70305_i=_args_fn70303[1];
return ([&]()->V{std::u16string _text71065;_text71065+=u"<stop offset=\"";_text71065+=j::string(j::unary("+",([&]()->V{V _receiver71066=([&]()->V{V _lhs71069=_v_70305_i;V _rhs71070=([&]()->V{V _lhs71071=j::get(_v_70287_fade.get(),this->_literals[11]);V _rhs71072=V(1.0);return V(j::number(_lhs71071)-j::number(_rhs71072));})();return V(j::number(_lhs71069)/j::number(_rhs71070));})();V _method71067=this->_literals[33];V _method=j::get(_receiver71066,_method71067);j::Args _params71068=j::Args{V(3.0)};return j::call(_method,_params71068,_receiver71066);})()));_text71065+=u"\" stop-color=\"";_text71065+=j::string(_v_70304_c);_text71065+=u"\"/>";return V(std::move(_text71065));})();
return V{};
},2)};return j::call(_method,_params71075,_receiver71073);})();V _method71063=this->_literals[25];V _method=j::get(_receiver71062,_method71063);j::Args _params71064=j::Args{this->_literals[9]};return j::call(_method,_params71064,_receiver71062);})();return j::binary("+",_lhs71051,_rhs71052);})();V _rhs71050=([&]()->V{std::u16string _text71076;_text71076+=u"</linearGradient></defs>";_text71076+=j::string(j::get(_v_70298_letters.get(),this->_literals[30]));_text71076+=u"";return V(std::move(_text71076));})();return j::binary("+",_lhs71049,_rhs71050);})();return j::put(_base71047,_key71048,_assign71046);})());
}
_v_70306_line.get()=V::null();
_v_70307_tagline=([&]()->V{V _receiver71077=([&]()->V{V _callee71081=this->_v_70046_xml.get();return j::call(_callee71081,j::Args{([&]()->V{V _logical71080=j::get(_v_70274_options,this->_literals[97]);return j::nullish(_logical71080)?this->_literals[9]:_logical71080;})()});})();V _method71078=this->_literals[98];V _method=j::get(_receiver71077,_method71078);j::Args _params71079=j::Args{};return j::call(_method,_params71079,_receiver71077);})();
if(j::truth(_v_70307_tagline)){
V _v_70308_size;
V _v_70309_chars;
j::Cell _v_70310_moves;
j::Cell _v_70311_start;
j::Cell _v_70312_at;
V _v_70315_spans;
V _v_70319_cursor;
V _v_70320_tall;
_v_70308_size=([&]()->V{V _logical71082=j::get(_v_70274_options,this->_literals[69]);return j::nullish(_logical71082)?V(28.0):_logical71082;})();
_v_70309_chars=([&]()->V{j::Args _array71083;for(const auto &_value:j::elements(_v_70307_tagline))_array71083.push_back(_value);return j::array(std::move(_array71083));})();
_v_70310_moves.get()=([&]()->V{V _lhs71084=([&]()->V{V _logical71086=j::get(_v_70274_options,this->_literals[90]);return j::nullish(_logical71086)?this->_literals[99]:_logical71086;})();V _rhs71085=this->_literals[91];return V(!j::equal(_lhs71084,_rhs71085,true));})();
_v_70311_start.get()=(j::truth(j::get(_v_70286_motion,this->_literals[6]))?j::get(_v_70286_motion,this->_literals[47]):V(0.4));
_v_70312_at.get()=j::function([=](const j::Args &_args_fn70313,const V &_receiver_fn70313,const V &_self_fn70313) mutable ->V{
V _v_70314_i;
_v_70314_i=_args_fn70313[0];
return j::unary("+",([&]()->V{V _receiver71087=([&]()->V{V _lhs71090=_v_70311_start.get();V _rhs71091=([&]()->V{V _lhs71092=_v_70314_i;V _rhs71093=V(0.045);return V(j::number(_lhs71092)*j::number(_rhs71093));})();return j::binary("+",_lhs71090,_rhs71091);})();V _method71088=this->_literals[33];V _method=j::get(_receiver71087,_method71088);j::Args _params71089=j::Args{V(3.0)};return j::call(_method,_params71089,_receiver71087);})());
return V{};
},1);
_v_70315_spans=([&]()->V{V _receiver71094=([&]()->V{V _receiver71101=_v_70309_chars;V _method71102=this->_literals[24];V _method=j::get(_receiver71101,_method71102);j::Args _params71103=j::Args{j::function([=](const j::Args &_args_fn70316,const V &_receiver_fn70316,const V &_self_fn70316) mutable ->V{
V _v_70317_c;
V _v_70318_i;
_v_70317_c=_args_fn70316[0];
_v_70318_i=_args_fn70316[1];
return (j::truth(_v_70310_moves.get())?([&]()->V{std::u16string _text71097;_text71097+=u"<tspan style=\"animation-delay:";_text71097+=j::string(([&]()->V{V _callee71098=_v_70312_at.get();return j::call(_callee71098,j::Args{_v_70318_i});})());_text71097+=u"s\">";_text71097+=j::string(([&]()->V{V _callee71099=this->_v_70040_esc.get();return j::call(_callee71099,j::Args{_v_70317_c});})());_text71097+=u"</tspan>";return V(std::move(_text71097));})():([&]()->V{V _callee71100=this->_v_70040_esc.get();return j::call(_callee71100,j::Args{_v_70317_c});})());
return V{};
},2)};return j::call(_method,_params71103,_receiver71101);})();V _method71095=this->_literals[25];V _method=j::get(_receiver71094,_method71095);j::Args _params71096=j::Args{this->_literals[9]};return j::call(_method,_params71096,_receiver71094);})();
_v_70319_cursor=(j::truth(_v_70310_moves.get())?([&]()->V{std::u16string _text71104;_text71104+=u"<tspan class=\"sc\" style=\"animation-delay:";_text71104+=j::string(([&]()->V{V _callee71105=_v_70312_at.get();return j::call(_callee71105,j::Args{j::get(_v_70309_chars,this->_literals[11])});})());_text71104+=u"s\">▍</tspan>";return V(std::move(_text71104));})():this->_literals[9]);
_v_70320_tall=([&]()->V{V _number71108=([&]()->V{V _lhs71109=_v_70308_size;V _rhs71110=V(1.43);return V(j::number(_lhs71109)*j::number(_rhs71110));})();return V(std::floor(j::number(_number71108)+.5));})();
(void)((_v_70306_line.get()=([&]()->V{V _obj71112=j::object();j::put(_obj71112,this->_literals[27],([&]()->V{V _lhs71113=([&]()->V{V _lhs71115=([&]()->V{V _lhs71117=j::get(_v_70309_chars,this->_literals[11]);V _rhs71118=(j::truth(_v_70310_moves.get())?V(1.0):V(0.0));return j::binary("+",_lhs71117,_rhs71118);})();V _rhs71116=_v_70308_size;return V(j::number(_lhs71115)*j::number(_rhs71116));})();V _rhs71114=V(0.6);return V(j::number(_lhs71113)*j::number(_rhs71114));})());j::put(_obj71112,this->_literals[28],_v_70320_tall);j::put(_obj71112,this->_literals[29],([&]()->V{V _lhs71119=([&]()->V{std::u16string _text71121;_text71121+=u".st{font:";_text71121+=j::string(_v_70308_size);_text71121+=u"px ";_text71121+=j::string(this->_v_70039_FACES.get());_text71121+=u";fill:";_text71121+=j::string(([&]()->V{V _logical71122=([&]()->V{V _callee71124=this->_v_70164_hex.get();return j::call(_callee71124,j::Args{([&]()->V{V _callee71123=this->_v_70264_themed.get();return j::call(_callee71123,j::Args{j::get(_v_70274_options,this->_literals[74]),_v_70276_dark.get()});})(),this->_literals[74]});})();return j::nullish(_logical71122)?_v_70283_quiet:_logical71122;})());_text71121+=u"}";return V(std::move(_text71121));})();V _rhs71120=(j::truth(_v_70310_moves.get())?([&]()->V{V _lhs71125=([&]()->V{std::u16string _text71127;_text71127+=u".st tspan{opacity:0;animation:si 1ms forwards}.st .sc{animation:sb 1.06s step-end infinite}@keyframes si{to{opacity:1}}@keyframes sb{0%{opacity:1}50%{opacity:0}}";return V(std::move(_text71127));})();V _rhs71126=([&]()->V{std::u16string _text71128;_text71128+=u"@media (prefers-reduced-motion:reduce){.st tspan{animation:none;opacity:1}.st .sc{display:none}}";return V(std::move(_text71128));})();return j::binary("+",_lhs71125,_rhs71126);})():this->_literals[9]);return j::binary("+",_lhs71119,_rhs71120);})());j::put(_obj71112,this->_literals[30],([&]()->V{std::u16string _text71129;_text71129+=u"<text class=\"st\" y=\"";_text71129+=j::string(([&]()->V{V _lhs71130=_v_70320_tall;V _rhs71131=V(2.0);return V(j::number(_lhs71130)/j::number(_rhs71131));})());_text71129+=u"\">";_text71129+=j::string(_v_70315_spans);_text71129+=u"";_text71129+=j::string(_v_70319_cursor);_text71129+=u"</text>";return V(std::move(_text71129));})());return _obj71112;})()));

}

_v_70321_place=([&]()->V{V _logical71132=j::get(_v_70274_options,this->_literals[75]);return j::nullish(_logical71132)?this->_literals[76]:_logical71132;})();
_v_70322_across=([&]()->V{V _logical71133=([&]()->V{V _lhs71134=_v_70321_place;V _rhs71135=this->_literals[78];return V(j::equal(_lhs71134,_rhs71135,true));})();return !j::truth(_logical71133)?([&]()->V{V _lhs71136=_v_70321_place;V _rhs71137=this->_literals[79];return V(j::equal(_lhs71136,_rhs71137,true));})():_logical71133;})();
_v_70323_align.get()=([&]()->V{V _logical71138=j::get(_v_70274_options,this->_literals[82]);return j::nullish(_logical71138)?(j::truth(([&]()->V{V _logical71139=_v_70281_art.get();return j::truth(_logical71139)?_v_70322_across:_logical71139;})())?this->_literals[84]:this->_literals[83]):_logical71138;})();
_v_70324_gapUnder.get()=V(16.0);
_v_70325_blockW=([&]()->V{V _receiver71145=j::builtin("Math");V _method71146=this->_literals[10];V _method=j::get(_receiver71145,_method71146);j::Args _params71147=j::Args{j::get(_v_70298_letters.get(),this->_literals[27]),([&]()->V{V _logical71140=([&]()->V{V _chain71141=_v_70306_line.get();if(j::nullish(_chain71141))return V{};V _chain71142=j::get(_chain71141,this->_literals[27]);return _chain71142;})();return j::nullish(_logical71140)?V(0.0):_logical71140;})()};return j::call(_method,_params71147,_receiver71145);})();
_v_70326_blockH=([&]()->V{V _lhs71148=j::get(_v_70298_letters.get(),this->_literals[28]);V _rhs71149=(j::truth(_v_70306_line.get())?([&]()->V{V _lhs71150=_v_70324_gapUnder.get();V _rhs71151=j::get(_v_70306_line.get(),this->_literals[28]);return j::binary("+",_lhs71150,_rhs71151);})():V(0.0));return j::binary("+",_lhs71148,_rhs71149);})();
_v_70327_shift.get()=j::function([=](const j::Args &_args_fn70328,const V &_receiver_fn70328,const V &_self_fn70328) mutable ->V{
V _v_70329_w;
V _v_70330_room;
_v_70329_w=_args_fn70328[0];
_v_70330_room=_args_fn70328[1];
return (j::truth(([&]()->V{V _lhs71152=_v_70323_align.get();V _rhs71153=this->_literals[84];return V(j::equal(_lhs71152,_rhs71153,true));})())?([&]()->V{V _lhs71154=([&]()->V{V _lhs71156=_v_70330_room;V _rhs71157=_v_70329_w;return V(j::number(_lhs71156)-j::number(_rhs71157));})();V _rhs71155=V(2.0);return V(j::number(_lhs71154)/j::number(_rhs71155));})():(j::truth(([&]()->V{V _lhs71158=_v_70323_align.get();V _rhs71159=this->_literals[85];return V(j::equal(_lhs71158,_rhs71159,true));})())?([&]()->V{V _lhs71160=_v_70330_room;V _rhs71161=_v_70329_w;return V(j::number(_lhs71160)-j::number(_rhs71161));})():V(0.0)));
return V{};
},2);
_v_70331_block=j::function([=](const j::Args &_args_fn70332,const V &_receiver_fn70332,const V &_self_fn70332) mutable ->V{
V _v_70333_x;
V _v_70334_y;
V _v_70335_room;
_v_70333_x=_args_fn70332[0];
_v_70334_y=_args_fn70332[1];
_v_70335_room=_args_fn70332[2];
{
V _v_70336_s;
_v_70336_s=([&]()->V{std::u16string _text71162;_text71162+=u"<g transform=\"translate(";_text71162+=j::string(j::unary("+",([&]()->V{V _receiver71163=([&]()->V{V _lhs71166=_v_70333_x;V _rhs71167=([&]()->V{V _callee71168=_v_70327_shift.get();return j::call(_callee71168,j::Args{j::get(_v_70298_letters.get(),this->_literals[27]),_v_70335_room});})();return j::binary("+",_lhs71166,_rhs71167);})();V _method71164=this->_literals[33];V _method=j::get(_receiver71163,_method71164);j::Args _params71165=j::Args{V(2.0)};return j::call(_method,_params71165,_receiver71163);})()));_text71162+=u",";_text71162+=j::string(_v_70334_y);_text71162+=u")\">";_text71162+=j::string(j::get(_v_70298_letters.get(),this->_literals[30]));_text71162+=u"</g>";return V(std::move(_text71162));})();
if(j::truth(_v_70306_line.get())){(void)((_v_70336_s=j::binary("+",_v_70336_s,([&]()->V{std::u16string _text71170;_text71170+=u"<g transform=\"translate(";_text71170+=j::string(j::unary("+",([&]()->V{V _receiver71171=([&]()->V{V _lhs71174=_v_70333_x;V _rhs71175=([&]()->V{V _callee71176=_v_70327_shift.get();return j::call(_callee71176,j::Args{j::get(_v_70306_line.get(),this->_literals[27]),_v_70335_room});})();return j::binary("+",_lhs71174,_rhs71175);})();V _method71172=this->_literals[33];V _method=j::get(_receiver71171,_method71172);j::Args _params71173=j::Args{V(2.0)};return j::call(_method,_params71173,_receiver71171);})()));_text71170+=u",";_text71170+=j::string(([&]()->V{V _lhs71177=([&]()->V{V _lhs71179=_v_70334_y;V _rhs71180=j::get(_v_70298_letters.get(),this->_literals[28]);return j::binary("+",_lhs71179,_rhs71180);})();V _rhs71178=_v_70324_gapUnder.get();return j::binary("+",_lhs71177,_rhs71178);})());_text71170+=u")\">";_text71170+=j::string(j::get(_v_70306_line.get(),this->_literals[30]));_text71170+=u"</g>";return V(std::move(_text71170));})())));
}
return _v_70336_s;

}

return V{};
},3);
_v_70337_spacing=([&]()->V{V _logical71181=j::get(_v_70274_options,this->_literals[70]);return j::nullish(_logical71181)?V(32.0):_logical71181;})();
_v_70338_width=_v_70325_blockW;
_v_70339_height.get()=_v_70326_blockH;
_v_70340_body=this->_literals[9];
if(j::truth(j::unary("!",_v_70281_art.get()))){(void)((_v_70340_body=([&]()->V{V _callee71183=_v_70331_block;return j::call(_callee71183,j::Args{V(0.0),V(0.0),_v_70325_blockW});})()));
}else {
j::Cell _v_70341_h;
j::Cell _v_70342_w;
V _v_70343_nest;
_v_70341_h.get()=j::unary("+",([&]()->V{V _receiver71184=([&]()->V{V _lhs71187=_v_70326_blockH;V _rhs71188=([&]()->V{V _logical71189=j::get(_v_70274_options,this->_literals[73]);return j::nullish(_logical71189)?(j::truth(_v_70322_across)?V(2.4):V(1.0)):_logical71189;})();return V(j::number(_lhs71187)*j::number(_rhs71188));})();V _method71185=this->_literals[33];V _method=j::get(_receiver71184,_method71185);j::Args _params71186=j::Args{V(2.0)};return j::call(_method,_params71186,_receiver71184);})());
_v_70342_w.get()=j::unary("+",([&]()->V{V _receiver71190=([&]()->V{V _lhs71193=([&]()->V{V _lhs71195=j::get(_v_70281_art.get(),this->_literals[27]);V _rhs71196=_v_70341_h.get();return V(j::number(_lhs71195)*j::number(_rhs71196));})();V _rhs71194=j::get(_v_70281_art.get(),this->_literals[28]);return V(j::number(_lhs71193)/j::number(_rhs71194));})();V _method71191=this->_literals[33];V _method=j::get(_receiver71190,_method71191);j::Args _params71192=j::Args{V(2.0)};return j::call(_method,_params71192,_receiver71190);})());
_v_70343_nest=j::function([=](const j::Args &_args_fn70344,const V &_receiver_fn70344,const V &_self_fn70344) mutable ->V{
V _v_70345_x;
V _v_70346_y;
_v_70345_x=_args_fn70344[0];
_v_70346_y=_args_fn70344[1];
return ([&]()->V{std::u16string _text71197;_text71197+=u"<svg x=\"";_text71197+=j::string(j::unary("+",([&]()->V{V _receiver71198=_v_70345_x;V _method71199=this->_literals[33];V _method=j::get(_receiver71198,_method71199);j::Args _params71200=j::Args{V(2.0)};return j::call(_method,_params71200,_receiver71198);})()));_text71197+=u"\" y=\"";_text71197+=j::string(j::unary("+",([&]()->V{V _receiver71201=_v_70346_y;V _method71202=this->_literals[33];V _method=j::get(_receiver71201,_method71202);j::Args _params71203=j::Args{V(2.0)};return j::call(_method,_params71203,_receiver71201);})()));_text71197+=u"\" width=\"";_text71197+=j::string(_v_70342_w.get());_text71197+=u"\" height=\"";_text71197+=j::string(_v_70341_h.get());_text71197+=u"\" viewBox=\"0 0 ";_text71197+=j::string(j::get(_v_70281_art.get(),this->_literals[27]));_text71197+=u" ";_text71197+=j::string(j::get(_v_70281_art.get(),this->_literals[28]));_text71197+=u"\">";_text71197+=j::string(j::get(_v_70281_art.get(),this->_literals[30]));_text71197+=u"</svg>";return V(std::move(_text71197));})();
return V{};
},2);
if(j::truth(_v_70322_across)){
V _v_70347_artX;
(void)((_v_70338_width=([&]()->V{V _receiver71207=j::builtin("Math");V _method71208=this->_literals[10];V _method=j::get(_receiver71207,_method71208);j::Args _params71209=j::Args{_v_70342_w.get(),_v_70325_blockW};return j::call(_method,_params71209,_receiver71207);})()));
(void)((_v_70339_height.get()=([&]()->V{V _lhs71211=([&]()->V{V _lhs71213=_v_70341_h.get();V _rhs71214=_v_70337_spacing;return j::binary("+",_lhs71213,_rhs71214);})();V _rhs71212=_v_70326_blockH;return j::binary("+",_lhs71211,_rhs71212);})()));
_v_70347_artX=([&]()->V{V _callee71215=_v_70327_shift.get();return j::call(_callee71215,j::Args{_v_70342_w.get(),_v_70338_width});})();
(void)((_v_70340_body=(j::truth(([&]()->V{V _lhs71217=_v_70321_place;V _rhs71218=this->_literals[78];return V(j::equal(_lhs71217,_rhs71218,true));})())?([&]()->V{V _lhs71219=([&]()->V{V _callee71221=_v_70343_nest;return j::call(_callee71221,j::Args{_v_70347_artX,V(0.0)});})();V _rhs71220=([&]()->V{V _callee71224=_v_70331_block;return j::call(_callee71224,j::Args{V(0.0),([&]()->V{V _lhs71222=_v_70341_h.get();V _rhs71223=_v_70337_spacing;return j::binary("+",_lhs71222,_rhs71223);})(),_v_70338_width});})();return j::binary("+",_lhs71219,_rhs71220);})():([&]()->V{V _lhs71225=([&]()->V{V _callee71227=_v_70331_block;return j::call(_callee71227,j::Args{V(0.0),V(0.0),_v_70338_width});})();V _rhs71226=([&]()->V{V _callee71230=_v_70343_nest;return j::call(_callee71230,j::Args{_v_70347_artX,([&]()->V{V _lhs71228=_v_70326_blockH;V _rhs71229=_v_70337_spacing;return j::binary("+",_lhs71228,_rhs71229);})()});})();return j::binary("+",_lhs71225,_rhs71226);})())));

}
else {
V _v_70348_top;
(void)((_v_70338_width=([&]()->V{V _lhs71232=([&]()->V{V _lhs71234=_v_70342_w.get();V _rhs71235=_v_70337_spacing;return j::binary("+",_lhs71234,_rhs71235);})();V _rhs71233=_v_70325_blockW;return j::binary("+",_lhs71232,_rhs71233);})()));
(void)((_v_70339_height.get()=([&]()->V{V _receiver71239=j::builtin("Math");V _method71240=this->_literals[10];V _method=j::get(_receiver71239,_method71240);j::Args _params71241=j::Args{_v_70341_h.get(),_v_70326_blockH};return j::call(_method,_params71241,_receiver71239);})()));
_v_70348_top=j::function([=](const j::Args &_args_fn70349,const V &_receiver_fn70349,const V &_self_fn70349) mutable ->V{
V _v_70350_u;
_v_70350_u=_args_fn70349[0];
return ([&]()->V{V _lhs71242=([&]()->V{V _lhs71244=_v_70339_height.get();V _rhs71245=_v_70350_u;return V(j::number(_lhs71244)-j::number(_rhs71245));})();V _rhs71243=V(2.0);return V(j::number(_lhs71242)/j::number(_rhs71243));})();
return V{};
},1);
(void)((_v_70340_body=(j::truth(([&]()->V{V _lhs71247=_v_70321_place;V _rhs71248=this->_literals[76];return V(j::equal(_lhs71247,_rhs71248,true));})())?([&]()->V{V _lhs71249=([&]()->V{V _callee71252=_v_70343_nest;return j::call(_callee71252,j::Args{V(0.0),([&]()->V{V _callee71251=_v_70348_top;return j::call(_callee71251,j::Args{_v_70341_h.get()});})()});})();V _rhs71250=([&]()->V{V _callee71256=_v_70331_block;return j::call(_callee71256,j::Args{([&]()->V{V _lhs71253=_v_70342_w.get();V _rhs71254=_v_70337_spacing;return j::binary("+",_lhs71253,_rhs71254);})(),([&]()->V{V _callee71255=_v_70348_top;return j::call(_callee71255,j::Args{_v_70326_blockH});})(),_v_70325_blockW});})();return j::binary("+",_lhs71249,_rhs71250);})():([&]()->V{V _lhs71257=([&]()->V{V _callee71260=_v_70331_block;return j::call(_callee71260,j::Args{V(0.0),([&]()->V{V _callee71259=_v_70348_top;return j::call(_callee71259,j::Args{_v_70326_blockH});})(),_v_70325_blockW});})();V _rhs71258=([&]()->V{V _callee71264=_v_70343_nest;return j::call(_callee71264,j::Args{([&]()->V{V _lhs71261=_v_70325_blockW;V _rhs71262=_v_70337_spacing;return j::binary("+",_lhs71261,_rhs71262);})(),([&]()->V{V _callee71263=_v_70348_top;return j::call(_callee71263,j::Args{_v_70341_h.get()});})()});})();return j::binary("+",_lhs71257,_rhs71258);})())));

}


}

if(j::truth(_v_70275_ground)){
V _v_70351_pad;
_v_70351_pad=([&]()->V{V _logical71265=j::get(_v_70274_options,this->_literals[71]);return j::nullish(_logical71265)?V(24.0):_logical71265;})();
(void)((_v_70340_body=([&]()->V{std::u16string _text71267;_text71267+=u"<rect width=\"";_text71267+=j::string(([&]()->V{V _lhs71268=_v_70338_width;V _rhs71269=([&]()->V{V _lhs71270=V(2.0);V _rhs71271=_v_70351_pad;return V(j::number(_lhs71270)*j::number(_rhs71271));})();return j::binary("+",_lhs71268,_rhs71269);})());_text71267+=u"\" height=\"";_text71267+=j::string(([&]()->V{V _lhs71272=_v_70339_height.get();V _rhs71273=([&]()->V{V _lhs71274=V(2.0);V _rhs71275=_v_70351_pad;return V(j::number(_lhs71274)*j::number(_rhs71275));})();return j::binary("+",_lhs71272,_rhs71273);})());_text71267+=u"\" rx=\"";_text71267+=j::string(([&]()->V{V _logical71276=j::get(_v_70274_options,this->_literals[72]);return j::nullish(_logical71276)?V(12.0):_logical71276;})());_text71267+=u"\" fill=\"";_text71267+=j::string(([&]()->V{V _callee71277=this->_v_70043_attr.get();return j::call(_callee71277,j::Args{_v_70275_ground});})());_text71267+=u"\"/><g transform=\"translate(";_text71267+=j::string(_v_70351_pad);_text71267+=u",";_text71267+=j::string(_v_70351_pad);_text71267+=u")\">";_text71267+=j::string(_v_70340_body);_text71267+=u"</g>";return V(std::move(_text71267));})()));
(void)((_v_70338_width=j::binary("+",_v_70338_width,([&]()->V{V _lhs71279=V(2.0);V _rhs71280=_v_70351_pad;return V(j::number(_lhs71279)*j::number(_rhs71280));})())));
(void)((_v_70339_height.get()=j::binary("+",_v_70339_height.get(),([&]()->V{V _lhs71282=V(2.0);V _rhs71283=_v_70351_pad;return V(j::number(_lhs71282)*j::number(_rhs71283));})())));

}

_v_70352_label=([&]()->V{V _logical71284=j::get(_v_70274_options,this->_literals[60]);return j::nullish(_logical71284)?([&]()->V{std::u16string _text71285;_text71285+=u"";_text71285+=j::string(j::get(_v_70284_piece,this->_literals[12]));_text71285+=u"";_text71285+=j::string((j::truth(_v_70307_tagline)?([&]()->V{std::u16string _text71286;_text71286+=u": ";_text71286+=j::string(_v_70307_tagline);_text71286+=u"";return V(std::move(_text71286));})():this->_literals[9]));_text71285+=u", in ascii, from ascii.rest";return V(std::move(_text71285));})():_logical71284;})();
return ([&]()->V{V _callee71299=this->_v_70123_wrap.get();return j::call(_callee71299,j::Args{([&]()->V{V _obj71287=j::object();j::put(_obj71287,this->_literals[27],_v_70338_width);j::put(_obj71287,this->_literals[28],_v_70339_height.get());j::put(_obj71287,this->_literals[29],([&]()->V{V _lhs71288=([&]()->V{V _lhs71290=j::get(_v_70298_letters.get(),this->_literals[29]);V _rhs71291=([&]()->V{V _logical71292=([&]()->V{V _chain71293=_v_70306_line.get();if(j::nullish(_chain71293))return V{};V _chain71294=j::get(_chain71293,this->_literals[29]);return _chain71294;})();return j::nullish(_logical71292)?this->_literals[9]:_logical71292;})();return j::binary("+",_lhs71290,_rhs71291);})();V _rhs71289=([&]()->V{V _logical71295=([&]()->V{V _chain71296=_v_70281_art.get();if(j::nullish(_chain71296))return V{};V _chain71297=j::get(_chain71296,this->_literals[29]);return _chain71297;})();return j::nullish(_logical71295)?this->_literals[9]:_logical71295;})();return j::binary("+",_lhs71288,_rhs71289);})());j::put(_obj71287,this->_literals[30],_v_70340_body);return _obj71287;})(),_v_70352_label,([&]()->V{V _logical71298=j::get(_v_70274_options,this->_literals[62]);return j::nullish(_logical71298)?V(5.0):_logical71298;})()});})();

}

return V{};
},1);
auto &_import875=j::module("banner");
this->_v_70035_banner=_import875.exported("banner");
this->exports["MONO"]=this->_v_70038_MONO;
this->exports["FACES"]=this->_v_70039_FACES;
this->exports["part"]=this->_v_70049_part;
this->exports["wrap"]=this->_v_70123_wrap;
this->exports["namespaced"]=this->_v_70134_namespaced;
this->exports["inkOf"]=this->_v_70142_inkOf;
this->exports["loopOf"]=this->_v_70154_loopOf;
this->exports["svg"]=this->_v_70245_svg;
this->exports["darkColor"]=this->_v_70268_darkColor;
this->exports["bannerSvg"]=this->_v_70271_bannerSvg;
this->_v_70036_CW.get()=V(10.0);
this->_v_70037_FONT.get()=([&]()->V{std::u16string _text71300;_text71300+=u"";_text71300+=j::string(([&]()->V{V _receiver71301=([&]()->V{V _lhs71304=this->_v_70036_CW.get();V _rhs71305=V(0.6);return V(j::number(_lhs71304)/j::number(_rhs71305));})();V _method71302=this->_literals[33];V _method=j::get(_receiver71301,_method71302);j::Args _params71303=j::Args{V(2.0)};return j::call(_method,_params71303,_receiver71301);})());_text71300+=u"px ui-monospace,SFMono-Regular,Menlo,Consolas,\"Liberation Mono\",monospace";return V(std::move(_text71300));})();
this->_v_70038_MONO.get()=([&]()->V{std::u16string _text71306;_text71306+=u"text{font:";_text71306+=j::string(this->_v_70037_FONT.get());_text71306+=u";white-space:pre;dominant-baseline:central}";return V(std::move(_text71306));})();
this->_v_70039_FACES.get()=([&]()->V{V _receiver71312=this->_v_70037_FONT.get();V _method71313=this->_literals[38];V _method=j::get(_receiver71312,_method71313);j::Args _params71314=j::Args{([&]()->V{V _lhs71307=([&]()->V{V _receiver71309=this->_v_70037_FONT.get();V _method71310=this->_literals[100];V _method=j::get(_receiver71309,_method71310);j::Args _params71311=j::Args{this->_literals[21]};return j::call(_method,_params71311,_receiver71309);})();V _rhs71308=V(1.0);return j::binary("+",_lhs71307,_rhs71308);})()};return j::call(_method,_params71314,_receiver71312);})();
this->_v_70040_esc.get()=j::function([=](const j::Args &_args_fn70041,const V &_receiver_fn70041,const V &_self_fn70041) mutable ->V{
V _v_70042_s;
_v_70042_s=_args_fn70041[0];
return ([&]()->V{V _receiver71315=([&]()->V{V _receiver71318=([&]()->V{V _receiver71321=_v_70042_s;V _method71322=this->_literals[20];V _method=j::get(_receiver71321,_method71322);j::Args _params71323=j::Args{j::regexp(u"&","g"),this->_literals[103]};return j::call(_method,_params71323,_receiver71321);})();V _method71319=this->_literals[20];V _method=j::get(_receiver71318,_method71319);j::Args _params71320=j::Args{j::regexp(u"<","g"),this->_literals[102]};return j::call(_method,_params71320,_receiver71318);})();V _method71316=this->_literals[20];V _method=j::get(_receiver71315,_method71316);j::Args _params71317=j::Args{j::regexp(u">","g"),this->_literals[101]};return j::call(_method,_params71317,_receiver71315);})();
return V{};
},1);
this->_v_70043_attr.get()=j::function([=](const j::Args &_args_fn70044,const V &_receiver_fn70044,const V &_self_fn70044) mutable ->V{
V _v_70045_s;
_v_70045_s=_args_fn70044[0];
return ([&]()->V{V _receiver71324=([&]()->V{V _callee71327=this->_v_70040_esc.get();return j::call(_callee71327,j::Args{_v_70045_s});})();V _method71325=this->_literals[20];V _method=j::get(_receiver71324,_method71325);j::Args _params71326=j::Args{j::regexp(u"\"","g"),this->_literals[104]};return j::call(_method,_params71326,_receiver71324);})();
return V{};
},1);
this->_v_70046_xml.get()=j::function([](const j::Args &_a,const V &,const V &)->V{return j::clean_xml(_a[0]);});
this->_v_70153_LOOPS.get()=([&]()->V{V _obj71328=j::object();j::put(_obj71328,this->_literals[105],this->_literals[106]);j::put(_obj71328,this->_literals[107],this->_literals[106]);j::put(_obj71328,this->_literals[108],this->_literals[109]);return _obj71328;})();
this->_v_70162_INK.get()=([&]()->V{V _obj71329=j::object();j::put(_obj71329,this->_literals[59],this->_literals[110]);j::put(_obj71329,this->_literals[55],this->_literals[111]);return _obj71329;})();
this->_v_70163_HEX.get()=j::regexp(u"^#[0-9a-f]{6}$","i");
this->_v_70164_hex.get()=j::function([=](const j::Args &_args_fn70165,const V &_receiver_fn70165,const V &_self_fn70165) mutable ->V{
V _v_70166_v;
V _v_70167_name;
_v_70166_v=_args_fn70165[0];
_v_70167_name=_args_fn70165[1];
{
if(j::truth(([&]()->V{V _logical71330=([&]()->V{V _lhs71331=_v_70166_v;V _rhs71332=j::builtin("undefined");return V(!j::equal(_lhs71331,_rhs71332,true));})();return j::truth(_logical71330)?([&]()->V{V _logical71333=([&]()->V{V _lhs71334=j::unary("typeof",_v_70166_v);V _rhs71335=this->_literals[112];return V(!j::equal(_lhs71334,_rhs71335,true));})();return !j::truth(_logical71333)?j::unary("!",([&]()->V{V _receiver71336=this->_v_70163_HEX.get();V _method71337=this->_literals[113];V _method=j::get(_receiver71336,_method71337);j::Args _params71338=j::Args{_v_70166_v};return j::call(_method,_params71338,_receiver71336);})()):_logical71333;})():_logical71330;})())){j::raise(([&]()->V{V _callee71343=j::builtin("Error");return j::construct(_callee71343,j::Args{([&]()->V{std::u16string _text71339;_text71339+=u"ascii.rest: ";_text71339+=j::string(_v_70167_name);_text71339+=u" takes a colour as #rrggbb, not ";_text71339+=j::string(([&]()->V{V _receiver71340=j::builtin("JSON");V _method71341=this->_literals[81];V _method=j::get(_receiver71340,_method71341);j::Args _params71342=j::Args{_v_70166_v};return j::call(_method,_params71342,_receiver71340);})());_text71339+=u"";return V(std::move(_text71339));})()});})());
}
return _v_70166_v;

}

return V{};
},2);
this->_v_70168_num.get()=j::function([=](const j::Args &_args_fn70169,const V &_receiver_fn70169,const V &_self_fn70169) mutable ->V{
V _v_70170_v;
V _v_70171_name;
_v_70170_v=_args_fn70169[0];
_v_70171_name=_args_fn70169[1];
{
if(j::truth(([&]()->V{V _logical71344=([&]()->V{V _lhs71345=_v_70170_v;V _rhs71346=j::builtin("undefined");return V(!j::equal(_lhs71345,_rhs71346,true));})();return j::truth(_logical71344)?([&]()->V{V _logical71347=([&]()->V{V _logical71348=([&]()->V{V _lhs71349=j::unary("typeof",_v_70170_v);V _rhs71350=this->_literals[51];return V(!j::equal(_lhs71349,_rhs71350,true));})();return !j::truth(_logical71348)?j::unary("!",([&]()->V{V _receiver71351=j::builtin("Number");V _method71352=this->_literals[114];V _method=j::get(_receiver71351,_method71352);j::Args _params71353=j::Args{_v_70170_v};return j::call(_method,_params71353,_receiver71351);})()):_logical71348;})();return !j::truth(_logical71347)?([&]()->V{V _lhs71354=_v_70170_v;V _rhs71355=V(0.0);return j::binary("<",_lhs71354,_rhs71355);})():_logical71347;})():_logical71344;})())){j::raise(([&]()->V{V _callee71358=j::builtin("Error");return j::construct(_callee71358,j::Args{([&]()->V{std::u16string _text71356;_text71356+=u"ascii.rest: ";_text71356+=j::string(_v_70171_name);_text71356+=u" takes a number of 0 or more, not ";_text71356+=j::string(([&]()->V{V _callee71357=j::builtin("String");return j::call(_callee71357,j::Args{_v_70170_v});})());_text71356+=u"";return V(std::move(_text71356));})()});})());
}
return _v_70170_v;

}

return V{};
},2);
this->_v_70172_isDark.get()=j::function([=](const j::Args &_args_fn70173,const V &_receiver_fn70173,const V &_self_fn70173) mutable ->V{
j::Cell _v_70174_css;
_v_70174_css.get()=_args_fn70173[0];
{
V _v_70175_c;
_v_70175_c=(j::truth(([&]()->V{V _lhs71359=j::get(_v_70174_css.get(),V(0.0));V _rhs71360=this->_literals[115];return V(j::equal(_lhs71359,_rhs71360,true));})())?([&]()->V{V _receiver71367=([&]()->V{j::Args _array71370;_array71370.push_back(V(1.0));_array71370.push_back(V(3.0));_array71370.push_back(V(5.0));return j::array(std::move(_array71370));})();V _method71368=this->_literals[24];V _method=j::get(_receiver71367,_method71368);j::Args _params71369=j::Args{j::function([=](const j::Args &_args_fn70176,const V &_receiver_fn70176,const V &_self_fn70176) mutable ->V{
V _v_70177_i;
_v_70177_i=_args_fn70176[0];
return ([&]()->V{V _callee71366=j::builtin("parseInt");return j::call(_callee71366,j::Args{([&]()->V{V _receiver71363=_v_70174_css.get();V _method71364=this->_literals[38];V _method=j::get(_receiver71363,_method71364);j::Args _params71365=j::Args{_v_70177_i,([&]()->V{V _lhs71361=_v_70177_i;V _rhs71362=V(2.0);return j::binary("+",_lhs71361,_rhs71362);})()};return j::call(_method,_params71365,_receiver71363);})(),V(16.0)});})();
return V{};
},1)};return j::call(_method,_params71369,_receiver71367);})():([&]()->V{V _receiver71371=([&]()->V{V _logical71374=([&]()->V{V _receiver71375=_v_70174_css.get();V _method71376=this->_literals[116];V _method=j::get(_receiver71375,_method71376);j::Args _params71377=j::Args{j::regexp(u"[\\d.]+","g")};return j::call(_method,_params71377,_receiver71375);})();return !j::truth(_logical71374)?([&]()->V{j::Args _array71378;return j::array(std::move(_array71378));})():_logical71374;})();V _method71372=this->_literals[24];V _method=j::get(_receiver71371,_method71372);j::Args _params71373=j::Args{j::builtin("Number")};return j::call(_method,_params71373,_receiver71371);})());
return ([&]()->V{V _lhs71379=([&]()->V{V _lhs71381=([&]()->V{V _lhs71383=([&]()->V{V _lhs71385=V(0.2126);V _rhs71386=j::get(_v_70175_c,V(0.0));return V(j::number(_lhs71385)*j::number(_rhs71386));})();V _rhs71384=([&]()->V{V _lhs71387=V(0.7152);V _rhs71388=j::get(_v_70175_c,V(1.0));return V(j::number(_lhs71387)*j::number(_rhs71388));})();return j::binary("+",_lhs71383,_rhs71384);})();V _rhs71382=([&]()->V{V _lhs71389=V(0.0722);V _rhs71390=j::get(_v_70175_c,V(2.0));return V(j::number(_lhs71389)*j::number(_rhs71390));})();return j::binary("+",_lhs71381,_rhs71382);})();V _rhs71380=V(128.0);return j::binary("<",_lhs71379,_rhs71380);})();

}

return V{};
},1);
this->_v_70237_warned.get()=([&]()->V{V _callee71391=j::builtin("Set");return j::construct(_callee71391,j::Args{});})();
this->_v_70238_pieceArt.get()=j::function([=](const j::Args &_args_fn70239,const V &_receiver_fn70239,const V &_self_fn70239) mutable ->V{
V _v_70240_piece;
V _v_70241_o;
V _v_70242_prefix;
_v_70240_piece=_args_fn70239[0];
_v_70241_o=_args_fn70239[1];
V _default71392=_args_fn70239[2];if(_default71392.kind==V::Undefined||_default71392.kind==V::Hole)_default71392=this->_literals[9];
_v_70242_prefix=_default71392;
{
V _v_70243_p;
V _v_70244_ground;
_v_70243_p=([&]()->V{V _callee71397=this->_v_70049_part.get();return j::call(_callee71397,j::Args{([&]()->V{V _obj71393=j::object();V _spread71394=([&]()->V{V _callee71395=this->_v_70218_pieceLoop.get();return j::call(_callee71395,j::Args{_v_70240_piece,_v_70241_o});})();for(const auto &_key:j::keys(_spread71394))j::put(_obj71393,_key,j::get(_spread71394,_key));j::put(_obj71393,this->_literals[8],([&]()->V{V _logical71396=j::get(j::get(_v_70240_piece,this->_literals[45]),this->_literals[8]);return j::nullish(_logical71396)?V(2.0):_logical71396;})());return _obj71393;})(),_v_70242_prefix});})();
_v_70244_ground=j::get(j::get(_v_70240_piece,this->_literals[45]),this->_literals[54]);
return (j::truth(_v_70244_ground)?([&]()->V{V _obj71398=j::object();V _spread71399=_v_70243_p;for(const auto &_key:j::keys(_spread71399))j::put(_obj71398,_key,j::get(_spread71399,_key));j::put(_obj71398,this->_literals[30],([&]()->V{std::u16string _text71400;_text71400+=u"<rect width=\"";_text71400+=j::string(j::get(_v_70243_p,this->_literals[27]));_text71400+=u"\" height=\"";_text71400+=j::string(j::get(_v_70243_p,this->_literals[28]));_text71400+=u"\" fill=\"";_text71400+=j::string(([&]()->V{V _callee71401=this->_v_70043_attr.get();return j::call(_callee71401,j::Args{_v_70244_ground});})());_text71400+=u"\"/>";_text71400+=j::string(j::get(_v_70243_p,this->_literals[30]));_text71400+=u"";return V(std::move(_text71400));})());return _obj71398;})():_v_70243_p);

}

return V{};
},2);
this->_v_70263_QUIET.get()=([&]()->V{V _obj71402=j::object();j::put(_obj71402,this->_literals[59],this->_literals[117]);j::put(_obj71402,this->_literals[55],this->_literals[118]);return _obj71402;})();
this->_v_70264_themed.get()=j::function([=](const j::Args &_args_fn70265,const V &_receiver_fn70265,const V &_self_fn70265) mutable ->V{
V _v_70266_v;
V _v_70267_dark;
_v_70266_v=_args_fn70265[0];
_v_70267_dark=_args_fn70265[1];
return (j::truth(([&]()->V{V _logical71403=([&]()->V{V _logical71404=([&]()->V{V _lhs71405=_v_70266_v;V _rhs71406=V::null();return V(!j::equal(_lhs71405,_rhs71406,true));})();return j::truth(_logical71404)?([&]()->V{V _lhs71407=j::unary("typeof",_v_70266_v);V _rhs71408=this->_literals[119];return V(j::equal(_lhs71407,_rhs71408,true));})():_logical71404;})();return j::truth(_logical71403)?j::unary("!",([&]()->V{V _receiver71409=j::builtin("Array");V _method71410=this->_literals[93];V _method=j::get(_receiver71409,_method71410);j::Args _params71411=j::Args{_v_70266_v};return j::call(_method,_params71411,_receiver71409);})()):_logical71403;})())?j::get(_v_70266_v,(j::truth(_v_70267_dark)?this->_literals[55]:this->_literals[59])):_v_70266_v);
return V{};
},2);
this->_v_70268_darkColor.get()=j::function([=](const j::Args &_args_fn70269,const V &_receiver_fn70269,const V &_self_fn70269) mutable ->V{
V _v_70270_hex;
_v_70270_hex=_args_fn70269[0];
return ([&]()->V{V _lhs71412=([&]()->V{V _lhs71414=([&]()->V{V _lhs71416=([&]()->V{V _lhs71418=V(0.2126);V _rhs71419=([&]()->V{V _callee71423=j::builtin("parseInt");return j::call(_callee71423,j::Args{([&]()->V{V _receiver71420=_v_70270_hex;V _method71421=this->_literals[38];V _method=j::get(_receiver71420,_method71421);j::Args _params71422=j::Args{V(1.0),V(3.0)};return j::call(_method,_params71422,_receiver71420);})(),V(16.0)});})();return V(j::number(_lhs71418)*j::number(_rhs71419));})();V _rhs71417=([&]()->V{V _lhs71424=V(0.7152);V _rhs71425=([&]()->V{V _callee71429=j::builtin("parseInt");return j::call(_callee71429,j::Args{([&]()->V{V _receiver71426=_v_70270_hex;V _method71427=this->_literals[38];V _method=j::get(_receiver71426,_method71427);j::Args _params71428=j::Args{V(3.0),V(5.0)};return j::call(_method,_params71428,_receiver71426);})(),V(16.0)});})();return V(j::number(_lhs71424)*j::number(_rhs71425));})();return j::binary("+",_lhs71416,_rhs71417);})();V _rhs71415=([&]()->V{V _lhs71430=V(0.0722);V _rhs71431=([&]()->V{V _callee71435=j::builtin("parseInt");return j::call(_callee71435,j::Args{([&]()->V{V _receiver71432=_v_70270_hex;V _method71433=this->_literals[38];V _method=j::get(_receiver71432,_method71433);j::Args _params71434=j::Args{V(5.0),V(7.0)};return j::call(_method,_params71434,_receiver71432);})(),V(16.0)});})();return V(j::number(_lhs71430)*j::number(_rhs71431));})();return j::binary("+",_lhs71414,_rhs71415);})();V _rhs71413=V(128.0);return j::binary("<",_lhs71412,_rhs71413);})();
return V{};
},1);
}
};
}
std::unique_ptr<Module> new_svg(){return std::make_unique<Generated_svg>();}
}
