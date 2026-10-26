// Native source generated from src/kit/recipes/checks.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_recipes_checks final:j::Module {
j::Cell _v_60673_chained;
j::Cell _v_60674_checkMeta;
j::Cell _v_60675_inkOf;
j::Cell _v_60676_fail;
j::Cell _v_60677_suggest;
j::Cell _v_60678_eases;
j::Cell _v_60679_easings;
j::Cell _v_60680_SPEEDS;
j::Cell _v_60681_SCALES;
j::Cell _v_60682_AMOUNTS;
j::Cell _v_60683_DENSITIES;
j::Cell _v_60684_HEADINGS;
j::Cell _v_60685_show;
j::Cell _v_60688_or;
j::Cell _v_60691_quoted;
j::Cell _v_60696_and;
j::Cell _v_60699_isObject;
j::Cell _v_60702_optionsOf;
j::Cell _v_60709_numberOf;
j::Cell _v_60716_wholeOf;
j::Cell _v_60723_wordOf;
j::Cell _v_60729_textOf;
j::Cell _v_60737_boolOf;
j::Cell _v_60742_sizeOf;
j::Cell _v_60750_seedOf;
j::Cell _v_60754_speedOf;
j::Cell _v_60759_secondsOf;
j::Cell _v_60764_LOOPS;
j::Cell _v_60765_loopOf;
j::Cell _v_60773_easeOf;
j::Cell _v_60779_colorOf;
j::Cell _v_60783_isArea;
j::Cell _v_60786_isPart;
j::Cell _v_60789_isPiece;
j::Cell _v_60792_isShape3d;
j::Cell _v_60795_is3d;
j::Cell _v_60798_titled;
j::Cell _v_60804_NAMING;
std::vector<V> _literals;
Generated_kit_recipes_checks():_v_60673_chained(this->slot("chained")),_v_60674_checkMeta(this->slot("checkMeta")),_v_60675_inkOf(this->slot("inkOf")),_v_60676_fail(this->slot("fail")),_v_60677_suggest(this->slot("suggest")),_v_60678_eases(this->slot("eases")),_v_60679_easings(this->slot("easings")),_v_60680_SPEEDS(this->slot("SPEEDS")),_v_60681_SCALES(this->slot("SCALES")),_v_60682_AMOUNTS(this->slot("AMOUNTS")),_v_60683_DENSITIES(this->slot("DENSITIES")),_v_60684_HEADINGS(this->slot("HEADINGS")),_v_60685_show(this->slot("show")),_v_60688_or(this->slot("or")),_v_60691_quoted(this->slot("quoted")),_v_60696_and(this->slot("and")),_v_60699_isObject(this->slot("isObject")),_v_60702_optionsOf(this->slot("optionsOf")),_v_60709_numberOf(this->slot("numberOf")),_v_60716_wholeOf(this->slot("wholeOf")),_v_60723_wordOf(this->slot("wordOf")),_v_60729_textOf(this->slot("textOf")),_v_60737_boolOf(this->slot("boolOf")),_v_60742_sizeOf(this->slot("sizeOf")),_v_60750_seedOf(this->slot("seedOf")),_v_60754_speedOf(this->slot("speedOf")),_v_60759_secondsOf(this->slot("secondsOf")),_v_60764_LOOPS(this->slot("LOOPS")),_v_60765_loopOf(this->slot("loopOf")),_v_60773_easeOf(this->slot("easeOf")),_v_60779_colorOf(this->slot("colorOf")),_v_60783_isArea(this->slot("isArea")),_v_60786_isPart(this->slot("isPart")),_v_60789_isPiece(this->slot("isPiece")),_v_60792_isShape3d(this->slot("isShape3d")),_v_60795_is3d(this->slot("is3d")),_v_60798_titled(this->slot("titled")),_v_60804_NAMING(this->slot("NAMING")),_literals{V(u"function"),
V(u"name"),
V(u"a function"),
V(u"string"),
V(u"stringify"),
V(u"isArray"),
V(u", "),
V(u"map"),
V(u"join"),
V(u"object"),
V(u"an object"),
V(u"entries"),
V(u"includes"),
V(u"number"),
V(u"isFinite"),
V(u""),
V(u"isInteger"),
V(u"\n"),
V(u"replace"),
V(u"lines"),
V(u"charCodeAt"),
V(u"length"),
V(u" on one line"),
V(u"slice"),
V(u"..."),
V(u"boolean"),
V(u"hasOwn"),
V(u"keys"),
V(u"still"),
V(u"normal"),
V(u"period"),
V(u"max"),
V(u"speed"),
V(u"find"),
V(u"trim"),
V(u"meta"),
V(u"note"),
V(u"steady"),
V(u"linear"),
V(u"smooth"),
V(u"inOutSine"),
V(u"snappy"),
V(u"outBack"),
V(u"springy"),
V(u"outElastic"),
V(u"bouncy"),
V(u"outBounce"),
V(u"freeze"),
V(u"slow"),
V(u"fast"),
V(u"small"),
V(u"medium"),
V(u"large"),
V(u"huge"),
V(u"subtle"),
V(u"strong"),
V(u"sparse"),
V(u"dense"),
V(u"left"),
V(u"right"),
V(u"up"),
V(u"down"),
V(u"up-left"),
V(u"SQRT1_2"),
V(u"up-right"),
V(u"down-left"),
V(u"down-right"),
V(u"at"),
V(u"kind"),
V(u"area"),
V(u"place"),
V(u"part"),
V(u"setup"),
V(u"default"),
V(u"mask"),
V(u"src"),
V(u"every")}{
this->exports["easings"]=this->_v_60679_easings;
this->exports["SPEEDS"]=this->_v_60680_SPEEDS;
this->exports["SCALES"]=this->_v_60681_SCALES;
this->exports["AMOUNTS"]=this->_v_60682_AMOUNTS;
this->exports["DENSITIES"]=this->_v_60683_DENSITIES;
this->exports["HEADINGS"]=this->_v_60684_HEADINGS;
this->exports["show"]=this->_v_60685_show;
this->exports["or"]=this->_v_60688_or;
this->exports["optionsOf"]=this->_v_60702_optionsOf;
this->exports["numberOf"]=this->_v_60709_numberOf;
this->exports["wholeOf"]=this->_v_60716_wholeOf;
this->exports["wordOf"]=this->_v_60723_wordOf;
this->exports["textOf"]=this->_v_60729_textOf;
this->exports["boolOf"]=this->_v_60737_boolOf;
this->exports["sizeOf"]=this->_v_60742_sizeOf;
this->exports["seedOf"]=this->_v_60750_seedOf;
this->exports["speedOf"]=this->_v_60754_speedOf;
this->exports["secondsOf"]=this->_v_60759_secondsOf;
this->exports["LOOPS"]=this->_v_60764_LOOPS;
this->exports["loopOf"]=this->_v_60765_loopOf;
this->exports["easeOf"]=this->_v_60773_easeOf;
this->exports["colorOf"]=this->_v_60779_colorOf;
this->exports["isArea"]=this->_v_60783_isArea;
this->exports["isPart"]=this->_v_60786_isPart;
this->exports["isPiece"]=this->_v_60789_isPiece;
this->exports["isShape3d"]=this->_v_60792_isShape3d;
this->exports["is3d"]=this->_v_60795_is3d;
this->exports["titled"]=this->_v_60798_titled;
this->exports["NAMING"]=this->_v_60804_NAMING;
}
void init() override{if(initialized)return;initialized=true;
this->_v_60685_show.get()=j::function([=](const j::Args &_args_fn60686,const V &_receiver_fn60686,const V &_self_fn60686) mutable ->V{
V _v_60687_v;
_v_60687_v=_args_fn60686[0];
{
if(j::truth(([&]()->V{V _lhs60805=j::unary("typeof",_v_60687_v);V _rhs60806=this->_literals[0];return V(j::equal(_lhs60805,_rhs60806,true));})())){return (j::truth(j::get(_v_60687_v,this->_literals[1]))?([&]()->V{std::u16string _text60807;_text60807+=u"";_text60807+=j::string(j::get(_v_60687_v,this->_literals[1]));_text60807+=u", a function: call it, ";_text60807+=j::string(j::get(_v_60687_v,this->_literals[1]));_text60807+=u"()";return V(std::move(_text60807));})():this->_literals[2]);
}
if(j::truth(([&]()->V{V _lhs60808=j::unary("typeof",_v_60687_v);V _rhs60809=this->_literals[3];return V(j::equal(_lhs60808,_rhs60809,true));})())){return ([&]()->V{V _receiver60810=j::builtin("JSON");V _method60811=this->_literals[4];V _method=j::get(_receiver60810,_method60811);j::Args _params60812=j::Args{_v_60687_v};return j::call(_method,_params60812,_receiver60810);})();
}
if(j::truth(([&]()->V{V _receiver60813=j::builtin("Array");V _method60814=this->_literals[5];V _method=j::get(_receiver60813,_method60814);j::Args _params60815=j::Args{_v_60687_v};return j::call(_method,_params60815,_receiver60813);})())){return ([&]()->V{std::u16string _text60816;_text60816+=u"[";_text60816+=j::string(([&]()->V{V _receiver60817=([&]()->V{V _receiver60820=_v_60687_v;V _method60821=this->_literals[7];V _method=j::get(_receiver60820,_method60821);j::Args _params60822=j::Args{_self_fn60686};return j::call(_method,_params60822,_receiver60820);})();V _method60818=this->_literals[8];V _method=j::get(_receiver60817,_method60818);j::Args _params60819=j::Args{this->_literals[6]};return j::call(_method,_params60819,_receiver60817);})());_text60816+=u"]";return V(std::move(_text60816));})();
}
if(j::truth(([&]()->V{V _logical60823=([&]()->V{V _lhs60824=_v_60687_v;V _rhs60825=V::null();return V(!j::equal(_lhs60824,_rhs60825,true));})();return j::truth(_logical60823)?([&]()->V{V _lhs60826=j::unary("typeof",_v_60687_v);V _rhs60827=this->_literals[9];return V(j::equal(_lhs60826,_rhs60827,true));})():_logical60823;})())){
{try {
return ([&]()->V{V _logical60828=([&]()->V{V _receiver60829=j::builtin("JSON");V _method60830=this->_literals[4];V _method=j::get(_receiver60829,_method60830);j::Args _params60831=j::Args{_v_60687_v};return j::call(_method,_params60831,_receiver60829);})();return j::nullish(_logical60828)?([&]()->V{V _callee60832=j::builtin("String");return j::call(_callee60832,j::Args{_v_60687_v});})():_logical60828;})();

}
catch(const std::exception &_error60833){{
return this->_literals[10];

}
}}

}

return ([&]()->V{V _callee60834=j::builtin("String");return j::call(_callee60834,j::Args{_v_60687_v});})();

}

return V{};
},1);
this->_v_60702_optionsOf.get()=j::function([=](const j::Args &_args_fn60703,const V &_receiver_fn60703,const V &_self_fn60703) mutable ->V{
V _v_60704_what;
V _v_60705_o;
V _v_60706_keys;
_v_60704_what=_args_fn60703[0];
_v_60705_o=_args_fn60703[1];
_v_60706_keys=_args_fn60703[2];
{
if(j::truth(([&]()->V{V _lhs60835=_v_60705_o;V _rhs60836=j::builtin("undefined");return V(j::equal(_lhs60835,_rhs60836,true));})())){return ([&]()->V{V _obj60837=j::object();return _obj60837;})();
}
if(j::truth(j::unary("!",([&]()->V{V _callee60838=this->_v_60699_isObject.get();return j::call(_callee60838,j::Args{_v_60705_o});})()))){(void)(([&]()->V{V _callee60841=this->_v_60676_fail.get();return j::call(_callee60841,j::Args{([&]()->V{std::u16string _text60839;_text60839+=u"";_text60839+=j::string(_v_60704_what);_text60839+=u" takes its options as an object, such as { ";_text60839+=j::string(j::get(_v_60706_keys,V(0.0)));_text60839+=u": ... }, not ";_text60839+=j::string(([&]()->V{V _callee60840=this->_v_60685_show.get();return j::call(_callee60840,j::Args{_v_60705_o});})());_text60839+=u"";return V(std::move(_text60839));})()});})());
}
{for(const auto &_item60842:j::elements(([&]()->V{V _receiver60843=j::builtin("Object");V _method60844=this->_literals[11];V _method=j::get(_receiver60843,_method60844);j::Args _params60845=j::Args{_v_60705_o};return j::call(_method,_params60845,_receiver60843);})())){V _v_60707_k;
V _v_60708_v;
V _pattern60846=_item60842;
_v_60707_k=j::get(_pattern60846,V(0));
_v_60708_v=j::get(_pattern60846,V(1));
if(j::truth(([&]()->V{V _logical60847=([&]()->V{V _lhs60848=_v_60708_v;V _rhs60849=j::builtin("undefined");return V(!j::equal(_lhs60848,_rhs60849,true));})();return j::truth(_logical60847)?j::unary("!",([&]()->V{V _receiver60850=_v_60706_keys;V _method60851=this->_literals[12];V _method=j::get(_receiver60850,_method60851);j::Args _params60852=j::Args{_v_60707_k};return j::call(_method,_params60852,_receiver60850);})()):_logical60847;})())){(void)(([&]()->V{V _callee60859=this->_v_60676_fail.get();return j::call(_callee60859,j::Args{([&]()->V{std::u16string _text60853;_text60853+=u"";_text60853+=j::string(_v_60704_what);_text60853+=u" has no option ";_text60853+=j::string(([&]()->V{V _receiver60854=j::builtin("JSON");V _method60855=this->_literals[4];V _method=j::get(_receiver60854,_method60855);j::Args _params60856=j::Args{_v_60707_k};return j::call(_method,_params60856,_receiver60854);})());_text60853+=u"";_text60853+=j::string(([&]()->V{V _callee60857=this->_v_60677_suggest.get();return j::call(_callee60857,j::Args{_v_60707_k,_v_60706_keys});})());_text60853+=u": it takes ";_text60853+=j::string(([&]()->V{V _callee60858=this->_v_60696_and.get();return j::call(_callee60858,j::Args{_v_60706_keys});})());_text60853+=u"";return V(std::move(_text60853));})()});})());
}
}}
return _v_60705_o;

}

return V{};
},3);
this->_v_60709_numberOf.get()=j::function([=](const j::Args &_args_fn60710,const V &_receiver_fn60710,const V &_self_fn60710) mutable ->V{
V _v_60711_what;
V _v_60712_v;
V _v_60713_def;
V _v_60714_lo;
V _v_60715_hi;
_v_60711_what=_args_fn60710[0];
_v_60712_v=_args_fn60710[1];
_v_60713_def=_args_fn60710[2];
V _default60860=_args_fn60710[3];if(_default60860.kind==V::Undefined||_default60860.kind==V::Hole)_default60860=j::unary("-",j::builtin("Infinity"));
_v_60714_lo=_default60860;
V _default60861=_args_fn60710[4];if(_default60861.kind==V::Undefined||_default60861.kind==V::Hole)_default60861=j::builtin("Infinity");
_v_60715_hi=_default60861;
{
if(j::truth(([&]()->V{V _lhs60862=_v_60712_v;V _rhs60863=j::builtin("undefined");return V(j::equal(_lhs60862,_rhs60863,true));})())){return _v_60713_def;
}
if(j::truth(([&]()->V{V _logical60864=([&]()->V{V _logical60865=([&]()->V{V _logical60866=([&]()->V{V _lhs60867=j::unary("typeof",_v_60712_v);V _rhs60868=this->_literals[13];return V(!j::equal(_lhs60867,_rhs60868,true));})();return !j::truth(_logical60866)?j::unary("!",([&]()->V{V _receiver60869=j::builtin("Number");V _method60870=this->_literals[14];V _method=j::get(_receiver60869,_method60870);j::Args _params60871=j::Args{_v_60712_v};return j::call(_method,_params60871,_receiver60869);})()):_logical60866;})();return !j::truth(_logical60865)?([&]()->V{V _lhs60872=_v_60712_v;V _rhs60873=_v_60714_lo;return j::binary("<",_lhs60872,_rhs60873);})():_logical60865;})();return !j::truth(_logical60864)?([&]()->V{V _lhs60874=_v_60712_v;V _rhs60875=_v_60715_hi;return j::binary(">",_lhs60874,_rhs60875);})():_logical60864;})())){(void)(([&]()->V{V _callee60884=this->_v_60676_fail.get();return j::call(_callee60884,j::Args{([&]()->V{std::u16string _text60876;_text60876+=u"";_text60876+=j::string(_v_60711_what);_text60876+=u" takes a number";_text60876+=j::string((j::truth(([&]()->V{V _lhs60877=_v_60715_hi;V _rhs60878=j::builtin("Infinity");return V(j::equal(_lhs60877,_rhs60878,true));})())?(j::truth(([&]()->V{V _lhs60879=_v_60714_lo;V _rhs60880=j::unary("-",j::builtin("Infinity"));return V(j::equal(_lhs60879,_rhs60880,true));})())?this->_literals[15]:([&]()->V{std::u16string _text60881;_text60881+=u" of ";_text60881+=j::string(_v_60714_lo);_text60881+=u" or more";return V(std::move(_text60881));})()):([&]()->V{std::u16string _text60882;_text60882+=u" from ";_text60882+=j::string(_v_60714_lo);_text60882+=u" to ";_text60882+=j::string(_v_60715_hi);_text60882+=u"";return V(std::move(_text60882));})()));_text60876+=u", not ";_text60876+=j::string(([&]()->V{V _callee60883=this->_v_60685_show.get();return j::call(_callee60883,j::Args{_v_60712_v});})());_text60876+=u"";return V(std::move(_text60876));})()});})());
}
return _v_60712_v;

}

return V{};
},3);
this->_v_60716_wholeOf.get()=j::function([=](const j::Args &_args_fn60717,const V &_receiver_fn60717,const V &_self_fn60717) mutable ->V{
V _v_60718_what;
V _v_60719_v;
V _v_60720_def;
V _v_60721_lo;
V _v_60722_hi;
_v_60718_what=_args_fn60717[0];
_v_60719_v=_args_fn60717[1];
_v_60720_def=_args_fn60717[2];
_v_60721_lo=_args_fn60717[3];
V _default60885=_args_fn60717[4];if(_default60885.kind==V::Undefined||_default60885.kind==V::Hole)_default60885=j::builtin("Infinity");
_v_60722_hi=_default60885;
{
if(j::truth(([&]()->V{V _lhs60886=_v_60719_v;V _rhs60887=j::builtin("undefined");return V(j::equal(_lhs60886,_rhs60887,true));})())){return _v_60720_def;
}
if(j::truth(([&]()->V{V _logical60888=([&]()->V{V _logical60889=j::unary("!",([&]()->V{V _receiver60890=j::builtin("Number");V _method60891=this->_literals[16];V _method=j::get(_receiver60890,_method60891);j::Args _params60892=j::Args{_v_60719_v};return j::call(_method,_params60892,_receiver60890);})());return !j::truth(_logical60889)?([&]()->V{V _lhs60893=_v_60719_v;V _rhs60894=_v_60721_lo;return j::binary("<",_lhs60893,_rhs60894);})():_logical60889;})();return !j::truth(_logical60888)?([&]()->V{V _lhs60895=_v_60719_v;V _rhs60896=_v_60722_hi;return j::binary(">",_lhs60895,_rhs60896);})():_logical60888;})())){(void)(([&]()->V{V _callee60903=this->_v_60676_fail.get();return j::call(_callee60903,j::Args{([&]()->V{std::u16string _text60897;_text60897+=u"";_text60897+=j::string(_v_60718_what);_text60897+=u" takes a whole number ";_text60897+=j::string((j::truth(([&]()->V{V _lhs60898=_v_60722_hi;V _rhs60899=j::builtin("Infinity");return V(j::equal(_lhs60898,_rhs60899,true));})())?([&]()->V{std::u16string _text60900;_text60900+=u"of ";_text60900+=j::string(_v_60721_lo);_text60900+=u" or more";return V(std::move(_text60900));})():([&]()->V{std::u16string _text60901;_text60901+=u"from ";_text60901+=j::string(_v_60721_lo);_text60901+=u" to ";_text60901+=j::string(_v_60722_hi);_text60901+=u"";return V(std::move(_text60901));})()));_text60897+=u", not ";_text60897+=j::string(([&]()->V{V _callee60902=this->_v_60685_show.get();return j::call(_callee60902,j::Args{_v_60719_v});})());_text60897+=u"";return V(std::move(_text60897));})()});})());
}
return _v_60719_v;

}

return V{};
},4);
this->_v_60723_wordOf.get()=j::function([=](const j::Args &_args_fn60724,const V &_receiver_fn60724,const V &_self_fn60724) mutable ->V{
V _v_60725_what;
V _v_60726_v;
V _v_60727_words;
V _v_60728_def;
_v_60725_what=_args_fn60724[0];
_v_60726_v=_args_fn60724[1];
_v_60727_words=_args_fn60724[2];
_v_60728_def=_args_fn60724[3];
{
if(j::truth(([&]()->V{V _lhs60904=_v_60726_v;V _rhs60905=j::builtin("undefined");return V(j::equal(_lhs60904,_rhs60905,true));})())){return _v_60728_def;
}
if(j::truth(j::unary("!",([&]()->V{V _receiver60906=_v_60727_words;V _method60907=this->_literals[12];V _method=j::get(_receiver60906,_method60907);j::Args _params60908=j::Args{_v_60726_v};return j::call(_method,_params60908,_receiver60906);})()))){(void)(([&]()->V{V _callee60913=this->_v_60676_fail.get();return j::call(_callee60913,j::Args{([&]()->V{std::u16string _text60909;_text60909+=u"";_text60909+=j::string(_v_60725_what);_text60909+=u" takes ";_text60909+=j::string(([&]()->V{V _callee60910=this->_v_60691_quoted.get();return j::call(_callee60910,j::Args{_v_60727_words});})());_text60909+=u", not ";_text60909+=j::string(([&]()->V{V _callee60911=this->_v_60685_show.get();return j::call(_callee60911,j::Args{_v_60726_v});})());_text60909+=u"";_text60909+=j::string(([&]()->V{V _callee60912=this->_v_60677_suggest.get();return j::call(_callee60912,j::Args{_v_60726_v,_v_60727_words});})());_text60909+=u"";return V(std::move(_text60909));})()});})());
}
return _v_60726_v;

}

return V{};
},4);
this->_v_60729_textOf.get()=j::function([=](const j::Args &_args_fn60730,const V &_receiver_fn60730,const V &_self_fn60730) mutable ->V{
V _v_60731_what;
V _v_60732_v;
V _v_60733_o;
_v_60731_what=_args_fn60730[0];
_v_60732_v=_args_fn60730[1];
V _default60914=_args_fn60730[2];if(_default60914.kind==V::Undefined||_default60914.kind==V::Hole)_default60914=([&]()->V{V _obj60915=j::object();return _obj60915;})();
_v_60733_o=_default60914;
{
V _v_60734_text;
if(j::truth(([&]()->V{V _lhs60916=_v_60732_v;V _rhs60917=j::builtin("undefined");return V(j::equal(_lhs60916,_rhs60917,true));})())){return j::builtin("undefined");
}
if(j::truth(([&]()->V{V _lhs60918=j::unary("typeof",_v_60732_v);V _rhs60919=this->_literals[3];return V(!j::equal(_lhs60918,_rhs60919,true));})())){(void)(([&]()->V{V _callee60922=this->_v_60676_fail.get();return j::call(_callee60922,j::Args{([&]()->V{std::u16string _text60920;_text60920+=u"";_text60920+=j::string(_v_60731_what);_text60920+=u" takes words, not ";_text60920+=j::string(([&]()->V{V _callee60921=this->_v_60685_show.get();return j::call(_callee60921,j::Args{_v_60732_v});})());_text60920+=u"";return V(std::move(_text60920));})()});})());
}
_v_60734_text=([&]()->V{V _receiver60923=_v_60732_v;V _method60924=this->_literals[18];V _method=j::get(_receiver60923,_method60924);j::Args _params60925=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[17]};return j::call(_method,_params60925,_receiver60923);})();
{for(const auto &_item60926:j::elements(_v_60734_text)){V _v_60735_ch;
_v_60735_ch=_item60926;
{
V _v_60736_c;
if(j::truth(([&]()->V{V _logical60927=([&]()->V{V _lhs60928=_v_60735_ch;V _rhs60929=this->_literals[17];return V(j::equal(_lhs60928,_rhs60929,true));})();return j::truth(_logical60927)?j::get(_v_60733_o,this->_literals[19]):_logical60927;})())){continue;
}
_v_60736_c=([&]()->V{V _receiver60930=_v_60735_ch;V _method60931=this->_literals[20];V _method=j::get(_receiver60930,_method60931);j::Args _params60932=j::Args{V(0.0)};return j::call(_method,_params60932,_receiver60930);})();
if(j::truth(([&]()->V{V _logical60933=([&]()->V{V _logical60934=([&]()->V{V _logical60935=([&]()->V{V _lhs60936=j::get(_v_60735_ch,this->_literals[21]);V _rhs60937=V(1.0);return j::binary(">",_lhs60936,_rhs60937);})();return !j::truth(_logical60935)?([&]()->V{V _lhs60938=_v_60736_c;V _rhs60939=V(32.0);return j::binary("<",_lhs60938,_rhs60939);})():_logical60935;})();return !j::truth(_logical60934)?([&]()->V{V _logical60940=([&]()->V{V _lhs60941=_v_60736_c;V _rhs60942=V(127.0);return j::binary(">=",_lhs60941,_rhs60942);})();return j::truth(_logical60940)?([&]()->V{V _lhs60943=_v_60736_c;V _rhs60944=V(159.0);return j::binary("<=",_lhs60943,_rhs60944);})():_logical60940;})():_logical60934;})();return !j::truth(_logical60933)?([&]()->V{V _logical60945=([&]()->V{V _lhs60946=_v_60736_c;V _rhs60947=V(55296.0);return j::binary(">=",_lhs60946,_rhs60947);})();return j::truth(_logical60945)?([&]()->V{V _lhs60948=_v_60736_c;V _rhs60949=V(57343.0);return j::binary("<=",_lhs60948,_rhs60949);})():_logical60945;})():_logical60933;})())){(void)(([&]()->V{V _callee60962=this->_v_60676_fail.get();return j::call(_callee60962,j::Args{([&]()->V{std::u16string _text60950;_text60950+=u"";_text60950+=j::string(_v_60731_what);_text60950+=u" takes words a cell can hold, one character each from the Basic Multilingual Plane";_text60950+=j::string((j::truth(j::get(_v_60733_o,this->_literals[19]))?this->_literals[15]:this->_literals[22]));_text60950+=u": not ";_text60950+=j::string(([&]()->V{V _receiver60951=j::builtin("JSON");V _method60952=this->_literals[4];V _method=j::get(_receiver60951,_method60952);j::Args _params60953=j::Args{_v_60735_ch};return j::call(_method,_params60953,_receiver60951);})());_text60950+=u" in ";_text60950+=j::string(([&]()->V{V _callee60961=this->_v_60685_show.get();return j::call(_callee60961,j::Args{(j::truth(([&]()->V{V _lhs60954=j::get(_v_60732_v,this->_literals[21]);V _rhs60955=V(40.0);return j::binary(">",_lhs60954,_rhs60955);})())?([&]()->V{V _lhs60956=([&]()->V{V _receiver60958=_v_60732_v;V _method60959=this->_literals[23];V _method=j::get(_receiver60958,_method60959);j::Args _params60960=j::Args{V(0.0),V(40.0)};return j::call(_method,_params60960,_receiver60958);})();V _rhs60957=this->_literals[24];return j::binary("+",_lhs60956,_rhs60957);})():_v_60732_v)});})());_text60950+=u"";return V(std::move(_text60950));})()});})());
}

}
}}
return _v_60734_text;

}

return V{};
},2);
this->_v_60737_boolOf.get()=j::function([=](const j::Args &_args_fn60738,const V &_receiver_fn60738,const V &_self_fn60738) mutable ->V{
V _v_60739_what;
V _v_60740_v;
V _v_60741_def;
_v_60739_what=_args_fn60738[0];
_v_60740_v=_args_fn60738[1];
_v_60741_def=_args_fn60738[2];
{
if(j::truth(([&]()->V{V _lhs60963=_v_60740_v;V _rhs60964=j::builtin("undefined");return V(j::equal(_lhs60963,_rhs60964,true));})())){return _v_60741_def;
}
if(j::truth(([&]()->V{V _lhs60965=j::unary("typeof",_v_60740_v);V _rhs60966=this->_literals[25];return V(!j::equal(_lhs60965,_rhs60966,true));})())){(void)(([&]()->V{V _callee60969=this->_v_60676_fail.get();return j::call(_callee60969,j::Args{([&]()->V{std::u16string _text60967;_text60967+=u"";_text60967+=j::string(_v_60739_what);_text60967+=u" takes true or false, not ";_text60967+=j::string(([&]()->V{V _callee60968=this->_v_60685_show.get();return j::call(_callee60968,j::Args{_v_60740_v});})());_text60967+=u"";return V(std::move(_text60967));})()});})());
}
return _v_60740_v;

}

return V{};
},3);
this->_v_60742_sizeOf.get()=j::function([=](const j::Args &_args_fn60743,const V &_receiver_fn60743,const V &_self_fn60743) mutable ->V{
V _v_60744_what;
V _v_60745_v;
V _v_60746_words;
V _v_60747_def;
V _v_60748_lo;
V _v_60749_hi;
_v_60744_what=_args_fn60743[0];
_v_60745_v=_args_fn60743[1];
_v_60746_words=_args_fn60743[2];
_v_60747_def=_args_fn60743[3];
V _default60970=_args_fn60743[4];if(_default60970.kind==V::Undefined||_default60970.kind==V::Hole)_default60970=V(0.0);
_v_60748_lo=_default60970;
V _default60971=_args_fn60743[5];if(_default60971.kind==V::Undefined||_default60971.kind==V::Hole)_default60971=j::builtin("Infinity");
_v_60749_hi=_default60971;
{
if(j::truth(([&]()->V{V _lhs60972=_v_60745_v;V _rhs60973=j::builtin("undefined");return V(j::equal(_lhs60972,_rhs60973,true));})())){return (j::truth(([&]()->V{V _lhs60974=j::unary("typeof",_v_60747_def);V _rhs60975=this->_literals[13];return V(j::equal(_lhs60974,_rhs60975,true));})())?_v_60747_def:j::get(_v_60746_words,_v_60747_def));
}
if(j::truth(([&]()->V{V _logical60976=([&]()->V{V _lhs60977=j::unary("typeof",_v_60745_v);V _rhs60978=this->_literals[3];return V(j::equal(_lhs60977,_rhs60978,true));})();return j::truth(_logical60976)?([&]()->V{V _receiver60979=j::builtin("Object");V _method60980=this->_literals[26];V _method=j::get(_receiver60979,_method60980);j::Args _params60981=j::Args{_v_60746_words,_v_60745_v};return j::call(_method,_params60981,_receiver60979);})():_logical60976;})())){return j::get(_v_60746_words,_v_60745_v);
}
if(j::truth(([&]()->V{V _logical60982=([&]()->V{V _logical60983=([&]()->V{V _logical60984=([&]()->V{V _lhs60985=j::unary("typeof",_v_60745_v);V _rhs60986=this->_literals[13];return V(!j::equal(_lhs60985,_rhs60986,true));})();return !j::truth(_logical60984)?j::unary("!",([&]()->V{V _receiver60987=j::builtin("Number");V _method60988=this->_literals[14];V _method=j::get(_receiver60987,_method60988);j::Args _params60989=j::Args{_v_60745_v};return j::call(_method,_params60989,_receiver60987);})()):_logical60984;})();return !j::truth(_logical60983)?([&]()->V{V _lhs60990=_v_60745_v;V _rhs60991=_v_60748_lo;return j::binary("<",_lhs60990,_rhs60991);})():_logical60983;})();return !j::truth(_logical60982)?([&]()->V{V _lhs60992=_v_60745_v;V _rhs60993=_v_60749_hi;return j::binary(">",_lhs60992,_rhs60993);})():_logical60982;})())){(void)(([&]()->V{V _callee61008=this->_v_60676_fail.get();return j::call(_callee61008,j::Args{([&]()->V{std::u16string _text60994;_text60994+=u"";_text60994+=j::string(_v_60744_what);_text60994+=u" takes ";_text60994+=j::string(([&]()->V{V _callee60998=this->_v_60691_quoted.get();return j::call(_callee60998,j::Args{([&]()->V{V _receiver60995=j::builtin("Object");V _method60996=this->_literals[27];V _method=j::get(_receiver60995,_method60996);j::Args _params60997=j::Args{_v_60746_words};return j::call(_method,_params60997,_receiver60995);})()});})());_text60994+=u", or a number";_text60994+=j::string((j::truth(([&]()->V{V _lhs60999=_v_60749_hi;V _rhs61000=j::builtin("Infinity");return V(j::equal(_lhs60999,_rhs61000,true));})())?([&]()->V{std::u16string _text61001;_text61001+=u" of ";_text61001+=j::string(_v_60748_lo);_text61001+=u" or more";return V(std::move(_text61001));})():([&]()->V{std::u16string _text61002;_text61002+=u" from ";_text61002+=j::string(_v_60748_lo);_text61002+=u" to ";_text61002+=j::string(_v_60749_hi);_text61002+=u"";return V(std::move(_text61002));})()));_text60994+=u", not ";_text60994+=j::string(([&]()->V{V _callee61003=this->_v_60685_show.get();return j::call(_callee61003,j::Args{_v_60745_v});})());_text60994+=u"";_text60994+=j::string(([&]()->V{V _callee61007=this->_v_60677_suggest.get();return j::call(_callee61007,j::Args{_v_60745_v,([&]()->V{V _receiver61004=j::builtin("Object");V _method61005=this->_literals[27];V _method=j::get(_receiver61004,_method61005);j::Args _params61006=j::Args{_v_60746_words};return j::call(_method,_params61006,_receiver61004);})()});})());_text60994+=u"";return V(std::move(_text60994));})()});})());
}
return _v_60745_v;

}

return V{};
},4);
this->_v_60750_seedOf.get()=j::function([=](const j::Args &_args_fn60751,const V &_receiver_fn60751,const V &_self_fn60751) mutable ->V{
V _v_60752_what;
V _v_60753_v;
_v_60752_what=_args_fn60751[0];
_v_60753_v=_args_fn60751[1];
{
if(j::truth(([&]()->V{V _lhs61009=_v_60753_v;V _rhs61010=j::builtin("undefined");return V(j::equal(_lhs61009,_rhs61010,true));})())){return V(1.0);
}
if(j::truth(j::unary("!",([&]()->V{V _receiver61011=j::builtin("Number");V _method61012=this->_literals[16];V _method=j::get(_receiver61011,_method61012);j::Args _params61013=j::Args{_v_60753_v};return j::call(_method,_params61013,_receiver61011);})()))){(void)(([&]()->V{V _callee61016=this->_v_60676_fail.get();return j::call(_callee61016,j::Args{([&]()->V{std::u16string _text61014;_text61014+=u"";_text61014+=j::string(_v_60752_what);_text61014+=u"'s seed takes a whole number, such as 7, not ";_text61014+=j::string(([&]()->V{V _callee61015=this->_v_60685_show.get();return j::call(_callee61015,j::Args{_v_60753_v});})());_text61014+=u"";return V(std::move(_text61014));})()});})());
}
return _v_60753_v;

}

return V{};
},2);
this->_v_60754_speedOf.get()=j::function([=](const j::Args &_args_fn60755,const V &_receiver_fn60755,const V &_self_fn60755) mutable ->V{
V _v_60756_what;
V _v_60757_v;
V _v_60758_o;
_v_60756_what=_args_fn60755[0];
_v_60757_v=_args_fn60755[1];
V _default61017=_args_fn60755[2];if(_default61017.kind==V::Undefined||_default61017.kind==V::Hole)_default61017=([&]()->V{V _obj61018=j::object();return _obj61018;})();
_v_60758_o=_default61017;
{
if(j::truth(j::get(_v_60758_o,this->_literals[28]))){return ([&]()->V{V _callee61022=this->_v_60742_sizeOf.get();return j::call(_callee61022,j::Args{([&]()->V{std::u16string _text61019;_text61019+=u"";_text61019+=j::string(_v_60756_what);_text61019+=u"'s speed";return V(std::move(_text61019));})(),_v_60757_v,([&]()->V{V _obj61020=j::object();j::put(_obj61020,this->_literals[28],V(0.0));V _spread61021=this->_v_60680_SPEEDS.get();for(const auto &_key:j::keys(_spread61021))j::put(_obj61020,_key,j::get(_spread61021,_key));return _obj61020;})(),this->_literals[29],V(0.0),V(100.0)});})();
}
return ([&]()->V{V _callee61024=this->_v_60742_sizeOf.get();return j::call(_callee61024,j::Args{([&]()->V{std::u16string _text61023;_text61023+=u"";_text61023+=j::string(_v_60756_what);_text61023+=u"'s speed";return V(std::move(_text61023));})(),_v_60757_v,this->_v_60680_SPEEDS.get(),this->_literals[29],V(0.01),V(100.0)});})();

}

return V{};
},2);
this->_v_60759_secondsOf.get()=j::function([=](const j::Args &_args_fn60760,const V &_receiver_fn60760,const V &_self_fn60760) mutable ->V{
V _v_60761_what;
V _v_60762_o;
V _v_60763_normal;
_v_60761_what=_args_fn60760[0];
_v_60762_o=_args_fn60760[1];
_v_60763_normal=_args_fn60760[2];
{
if(j::truth(([&]()->V{V _lhs61025=j::get(_v_60762_o,this->_literals[30]);V _rhs61026=j::builtin("undefined");return V(!j::equal(_lhs61025,_rhs61026,true));})())){return ([&]()->V{V _receiver61040=j::builtin("Math");V _method61041=this->_literals[31];V _method=j::get(_receiver61040,_method61041);j::Args _params61042=j::Args{V(0.05),([&]()->V{V _lhs61027=([&]()->V{V _number61033=([&]()->V{V _lhs61034=([&]()->V{V _callee61037=this->_v_60709_numberOf.get();return j::call(_callee61037,j::Args{([&]()->V{std::u16string _text61036;_text61036+=u"";_text61036+=j::string(_v_60761_what);_text61036+=u"'s period";return V(std::move(_text61036));})(),j::get(_v_60762_o,this->_literals[30]),_v_60763_normal,V(0.05),V(60.0)});})();V _rhs61035=V(100.0);return V(j::number(_lhs61034)*j::number(_rhs61035));})();return V(std::floor(j::number(_number61033)+.5));})();V _rhs61028=V(100.0);return V(j::number(_lhs61027)/j::number(_rhs61028));})()};return j::call(_method,_params61042,_receiver61040);})();
}
return ([&]()->V{V _receiver61058=j::builtin("Math");V _method61059=this->_literals[31];V _method=j::get(_receiver61058,_method61059);j::Args _params61060=j::Args{V(0.05),([&]()->V{V _lhs61043=([&]()->V{V _number61050=([&]()->V{V _lhs61051=([&]()->V{V _lhs61053=_v_60763_normal;V _rhs61054=([&]()->V{V _callee61055=this->_v_60754_speedOf.get();return j::call(_callee61055,j::Args{_v_60761_what,j::get(_v_60762_o,this->_literals[32])});})();return V(j::number(_lhs61053)/j::number(_rhs61054));})();V _rhs61052=V(100.0);return V(j::number(_lhs61051)*j::number(_rhs61052));})();return V(std::floor(j::number(_number61050)+.5));})();V _rhs61044=V(100.0);return V(j::number(_lhs61043)/j::number(_rhs61044));})()};return j::call(_method,_params61060,_receiver61058);})();

}

return V{};
},3);
this->_v_60765_loopOf.get()=j::function([=](const j::Args &_args_fn60766,const V &_receiver_fn60766,const V &_self_fn60766) mutable ->V{
j::Cell _v_60767_seconds;
V _v_60768_up;
_v_60767_seconds.get()=_args_fn60766[0];
V _default61061=_args_fn60766[1];if(_default61061.kind==V::Undefined||_default61061.kind==V::Hole)_default61061=V(false);
_v_60768_up=_default61061;
{
V _v_60771_best;
if(j::truth(_v_60768_up)){return ([&]()->V{V _logical61062=([&]()->V{V _receiver61067=this->_v_60764_LOOPS.get();V _method61068=this->_literals[33];V _method=j::get(_receiver61067,_method61068);j::Args _params61069=j::Args{j::function([=](const j::Args &_args_fn60769,const V &_receiver_fn60769,const V &_self_fn60769) mutable ->V{
V _v_60770_l;
_v_60770_l=_args_fn60769[0];
return ([&]()->V{V _lhs61063=_v_60770_l;V _rhs61064=([&]()->V{V _lhs61065=_v_60767_seconds.get();V _rhs61066=V(1e-9);return V(j::number(_lhs61065)-j::number(_rhs61066));})();return j::binary(">=",_lhs61063,_rhs61064);})();
return V{};
},1)};return j::call(_method,_params61069,_receiver61067);})();return j::nullish(_logical61062)?V(60.0):_logical61062;})();
}
_v_60771_best=j::get(this->_v_60764_LOOPS.get(),V(0.0));
{for(const auto &_item61070:j::elements(this->_v_60764_LOOPS.get())){V _v_60772_l;
_v_60772_l=_item61070;
if(j::truth(([&]()->V{V _lhs61071=([&]()->V{V _number61078=([&]()->V{V _number61081=([&]()->V{V _lhs61082=_v_60772_l;V _rhs61083=_v_60767_seconds.get();return V(j::number(_lhs61082)/j::number(_rhs61083));})();return V(std::log(j::number(_number61081)));})();return V(std::fabs(j::number(_number61078)));})();V _rhs61072=([&]()->V{V _number61089=([&]()->V{V _number61092=([&]()->V{V _lhs61093=_v_60771_best;V _rhs61094=_v_60767_seconds.get();return V(j::number(_lhs61093)/j::number(_rhs61094));})();return V(std::log(j::number(_number61092)));})();return V(std::fabs(j::number(_number61089)));})();return j::binary("<",_lhs61071,_rhs61072);})())){(void)((_v_60771_best=_v_60772_l));
}
}}
return _v_60771_best;

}

return V{};
},1);
this->_v_60773_easeOf.get()=j::function([=](const j::Args &_args_fn60774,const V &_receiver_fn60774,const V &_self_fn60774) mutable ->V{
V _v_60775_what;
V _v_60776_v;
V _v_60777_def;
_v_60775_what=_args_fn60774[0];
_v_60776_v=_args_fn60774[1];
_v_60777_def=_args_fn60774[2];
{
V _v_60778_name;
_v_60778_name=(j::truth(([&]()->V{V _lhs61096=_v_60776_v;V _rhs61097=j::builtin("undefined");return V(j::equal(_lhs61096,_rhs61097,true));})())?_v_60777_def:_v_60776_v);
if(j::truth(([&]()->V{V _logical61098=([&]()->V{V _lhs61099=j::unary("typeof",_v_60778_name);V _rhs61100=this->_literals[3];return V(j::equal(_lhs61099,_rhs61100,true));})();return j::truth(_logical61098)?([&]()->V{V _receiver61101=j::builtin("Object");V _method61102=this->_literals[26];V _method=j::get(_receiver61101,_method61102);j::Args _params61103=j::Args{this->_v_60679_easings.get(),_v_60778_name};return j::call(_method,_params61103,_receiver61101);})():_logical61098;})())){return j::get(this->_v_60678_eases.get(),j::get(this->_v_60679_easings.get(),_v_60778_name));
}
if(j::truth(([&]()->V{V _logical61104=([&]()->V{V _lhs61105=j::unary("typeof",_v_60778_name);V _rhs61106=this->_literals[3];return V(j::equal(_lhs61105,_rhs61106,true));})();return j::truth(_logical61104)?([&]()->V{V _receiver61107=j::builtin("Object");V _method61108=this->_literals[26];V _method=j::get(_receiver61107,_method61108);j::Args _params61109=j::Args{this->_v_60678_eases.get(),_v_60778_name};return j::call(_method,_params61109,_receiver61107);})():_logical61104;})())){return j::get(this->_v_60678_eases.get(),_v_60778_name);
}
return ([&]()->V{V _callee61116=this->_v_60676_fail.get();return j::call(_callee61116,j::Args{([&]()->V{std::u16string _text61110;_text61110+=u"";_text61110+=j::string(_v_60775_what);_text61110+=u" takes ";_text61110+=j::string(([&]()->V{V _callee61114=this->_v_60691_quoted.get();return j::call(_callee61114,j::Args{([&]()->V{V _receiver61111=j::builtin("Object");V _method61112=this->_literals[27];V _method=j::get(_receiver61111,_method61112);j::Args _params61113=j::Args{this->_v_60679_easings.get()};return j::call(_method,_params61113,_receiver61111);})()});})());_text61110+=u", or an easing's name from math such as \"outCubic\", not ";_text61110+=j::string(([&]()->V{V _callee61115=this->_v_60685_show.get();return j::call(_callee61115,j::Args{_v_60776_v});})());_text61110+=u"";return V(std::move(_text61110));})()});})();

}

return V{};
},3);
this->_v_60779_colorOf.get()=j::function([=](const j::Args &_args_fn60780,const V &_receiver_fn60780,const V &_self_fn60780) mutable ->V{
V _v_60781_what;
V _v_60782_v;
_v_60781_what=_args_fn60780[0];
_v_60782_v=_args_fn60780[1];
{
return (j::truth(([&]()->V{V _lhs61117=_v_60782_v;V _rhs61118=j::builtin("undefined");return V(j::equal(_lhs61117,_rhs61118,true));})())?j::builtin("undefined"):([&]()->V{V _callee61119=this->_v_60675_inkOf.get();return j::call(_callee61119,j::Args{_v_60782_v,_v_60781_what});})());

}

return V{};
},2);
this->_v_60798_titled.get()=j::function([=](const j::Args &_args_fn60799,const V &_receiver_fn60799,const V &_self_fn60799) mutable ->V{
V _v_60800_p;
V _v_60801_name;
V _v_60802_note;
_v_60800_p=_args_fn60799[0];
_v_60801_name=_args_fn60799[1];
_v_60802_note=_args_fn60799[2];
{
V _v_60803_n;
if(j::truth(([&]()->V{V _logical61120=([&]()->V{V _lhs61121=_v_60801_name;V _rhs61122=j::builtin("undefined");return V(j::equal(_lhs61121,_rhs61122,true));})();return j::truth(_logical61120)?([&]()->V{V _lhs61123=_v_60802_note;V _rhs61124=j::builtin("undefined");return V(j::equal(_lhs61123,_rhs61124,true));})():_logical61120;})())){return _v_60800_p;
}
if(j::truth(([&]()->V{V _logical61125=([&]()->V{V _lhs61126=_v_60801_name;V _rhs61127=j::builtin("undefined");return V(!j::equal(_lhs61126,_rhs61127,true));})();return j::truth(_logical61125)?([&]()->V{V _logical61128=([&]()->V{V _lhs61129=j::unary("typeof",_v_60801_name);V _rhs61130=this->_literals[3];return V(!j::equal(_lhs61129,_rhs61130,true));})();return !j::truth(_logical61128)?j::unary("!",([&]()->V{V _receiver61131=_v_60801_name;V _method61132=this->_literals[34];V _method=j::get(_receiver61131,_method61132);j::Args _params61133=j::Args{};return j::call(_method,_params61133,_receiver61131);})()):_logical61128;})():_logical61125;})())){(void)(([&]()->V{V _callee61136=this->_v_60676_fail.get();return j::call(_callee61136,j::Args{([&]()->V{std::u16string _text61134;_text61134+=u"a name takes one line of words, such as \"hello\", not ";_text61134+=j::string(([&]()->V{V _callee61135=this->_v_60685_show.get();return j::call(_callee61135,j::Args{_v_60801_name});})());_text61134+=u"";return V(std::move(_text61134));})()});})());
}
_v_60803_n=([&]()->V{V _logical61137=([&]()->V{V _chain61138=_v_60801_name;if(j::nullish(_chain61138))return V{};V _chain61139=j::get(_chain61138,this->_literals[34]);V _chain61140=j::call(_chain61139,j::Args{},_chain61138);return _chain61140;})();return j::nullish(_logical61137)?j::get(j::get(_v_60800_p,this->_literals[35]),this->_literals[1]):_logical61137;})();
return ([&]()->V{V _callee61150=this->_v_60673_chained.get();return j::call(_callee61150,j::Args{([&]()->V{V _obj61141=j::object();V _spread61142=_v_60800_p;for(const auto &_key:j::keys(_spread61142))j::put(_obj61141,_key,j::get(_spread61142,_key));j::put(_obj61141,this->_literals[35],([&]()->V{V _callee61149=this->_v_60674_checkMeta.get();return j::call(_callee61149,j::Args{([&]()->V{V _obj61143=j::object();V _spread61144=j::get(_v_60800_p,this->_literals[35]);for(const auto &_key:j::keys(_spread61144))j::put(_obj61143,_key,j::get(_spread61144,_key));j::put(_obj61143,this->_literals[1],_v_60803_n);j::put(_obj61143,this->_literals[36],([&]()->V{V _receiver61145=([&]()->V{V _logical61148=_v_60802_note;return j::nullish(_logical61148)?_v_60803_n:_logical61148;})();V _method61146=this->_literals[23];V _method=j::get(_receiver61145,_method61146);j::Args _params61147=j::Args{V(0.0),V(72.0)};return j::call(_method,_params61147,_receiver61145);})());return _obj61143;})()});})());return _obj61141;})()});})();

}

return V{};
},3);
auto &_import515=j::module("kit/core");
this->_v_60673_chained=_import515.exported("chained");
this->_v_60674_checkMeta=_import515.exported("checkMeta");
this->_v_60675_inkOf=_import515.exported("colorOf");
this->_v_60676_fail=_import515.exported("fail");
this->_v_60677_suggest=_import515.exported("suggest");
auto &_import642=j::module("kit/math");
this->_v_60678_eases=_import642.exported("ease");
this->exports["easings"]=this->_v_60679_easings;
this->exports["SPEEDS"]=this->_v_60680_SPEEDS;
this->exports["SCALES"]=this->_v_60681_SCALES;
this->exports["AMOUNTS"]=this->_v_60682_AMOUNTS;
this->exports["DENSITIES"]=this->_v_60683_DENSITIES;
this->exports["HEADINGS"]=this->_v_60684_HEADINGS;
this->exports["show"]=this->_v_60685_show;
this->exports["or"]=this->_v_60688_or;
this->exports["optionsOf"]=this->_v_60702_optionsOf;
this->exports["numberOf"]=this->_v_60709_numberOf;
this->exports["wholeOf"]=this->_v_60716_wholeOf;
this->exports["wordOf"]=this->_v_60723_wordOf;
this->exports["textOf"]=this->_v_60729_textOf;
this->exports["boolOf"]=this->_v_60737_boolOf;
this->exports["sizeOf"]=this->_v_60742_sizeOf;
this->exports["seedOf"]=this->_v_60750_seedOf;
this->exports["speedOf"]=this->_v_60754_speedOf;
this->exports["secondsOf"]=this->_v_60759_secondsOf;
this->exports["LOOPS"]=this->_v_60764_LOOPS;
this->exports["loopOf"]=this->_v_60765_loopOf;
this->exports["easeOf"]=this->_v_60773_easeOf;
this->exports["colorOf"]=this->_v_60779_colorOf;
this->exports["isArea"]=this->_v_60783_isArea;
this->exports["isPart"]=this->_v_60786_isPart;
this->exports["isPiece"]=this->_v_60789_isPiece;
this->exports["isShape3d"]=this->_v_60792_isShape3d;
this->exports["is3d"]=this->_v_60795_is3d;
this->exports["titled"]=this->_v_60798_titled;
this->exports["NAMING"]=this->_v_60804_NAMING;
this->_v_60679_easings.get()=([&]()->V{V _receiver61152=j::builtin("Object");V _method61153=this->_literals[47];V _method=j::get(_receiver61152,_method61153);j::Args _params61154=j::Args{([&]()->V{V _obj61151=j::object();j::put(_obj61151,this->_literals[37],this->_literals[38]);j::put(_obj61151,this->_literals[39],this->_literals[40]);j::put(_obj61151,this->_literals[41],this->_literals[42]);j::put(_obj61151,this->_literals[43],this->_literals[44]);j::put(_obj61151,this->_literals[45],this->_literals[46]);return _obj61151;})()};return j::call(_method,_params61154,_receiver61152);})();
this->_v_60680_SPEEDS.get()=([&]()->V{V _obj61155=j::object();j::put(_obj61155,this->_literals[48],V(0.5));j::put(_obj61155,this->_literals[29],V(1.0));j::put(_obj61155,this->_literals[49],V(2.0));return _obj61155;})();
this->_v_60681_SCALES.get()=([&]()->V{V _obj61156=j::object();j::put(_obj61156,this->_literals[50],V(0.6));j::put(_obj61156,this->_literals[51],V(1.0));j::put(_obj61156,this->_literals[52],V(1.6));j::put(_obj61156,this->_literals[53],V(2.5));return _obj61156;})();
this->_v_60682_AMOUNTS.get()=([&]()->V{V _obj61157=j::object();j::put(_obj61157,this->_literals[54],V(0.5));j::put(_obj61157,this->_literals[51],V(1.0));j::put(_obj61157,this->_literals[55],V(1.8));return _obj61157;})();
this->_v_60683_DENSITIES.get()=([&]()->V{V _obj61158=j::object();j::put(_obj61158,this->_literals[56],V(0.45));j::put(_obj61158,this->_literals[29],V(1.0));j::put(_obj61158,this->_literals[57],V(2.0));return _obj61158;})();
this->_v_60684_HEADINGS.get()=([&]()->V{V _obj61159=j::object();j::put(_obj61159,this->_literals[58],([&]()->V{j::Args _array61160;_array61160.push_back(j::unary("-",V(1.0)));_array61160.push_back(V(0.0));return j::array(std::move(_array61160));})());j::put(_obj61159,this->_literals[59],([&]()->V{j::Args _array61161;_array61161.push_back(V(1.0));_array61161.push_back(V(0.0));return j::array(std::move(_array61161));})());j::put(_obj61159,this->_literals[60],([&]()->V{j::Args _array61162;_array61162.push_back(V(0.0));_array61162.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array61162));})());j::put(_obj61159,this->_literals[61],([&]()->V{j::Args _array61163;_array61163.push_back(V(0.0));_array61163.push_back(V(1.0));return j::array(std::move(_array61163));})());j::put(_obj61159,this->_literals[62],([&]()->V{j::Args _array61164;_array61164.push_back(j::unary("-",j::get(j::builtin("Math"),this->_literals[63])));_array61164.push_back(j::unary("-",j::get(j::builtin("Math"),this->_literals[63])));return j::array(std::move(_array61164));})());j::put(_obj61159,this->_literals[64],([&]()->V{j::Args _array61165;_array61165.push_back(j::get(j::builtin("Math"),this->_literals[63]));_array61165.push_back(j::unary("-",j::get(j::builtin("Math"),this->_literals[63])));return j::array(std::move(_array61165));})());j::put(_obj61159,this->_literals[65],([&]()->V{j::Args _array61166;_array61166.push_back(j::unary("-",j::get(j::builtin("Math"),this->_literals[63])));_array61166.push_back(j::get(j::builtin("Math"),this->_literals[63]));return j::array(std::move(_array61166));})());j::put(_obj61159,this->_literals[66],([&]()->V{j::Args _array61167;_array61167.push_back(j::get(j::builtin("Math"),this->_literals[63]));_array61167.push_back(j::get(j::builtin("Math"),this->_literals[63]));return j::array(std::move(_array61167));})());return _obj61159;})();
this->_v_60688_or.get()=j::function([=](const j::Args &_args_fn60689,const V &_receiver_fn60689,const V &_self_fn60689) mutable ->V{
V _v_60690_words;
_v_60690_words=_args_fn60689[0];
return (j::truth(([&]()->V{V _lhs61168=j::get(_v_60690_words,this->_literals[21]);V _rhs61169=V(1.0);return j::binary(">",_lhs61168,_rhs61169);})())?([&]()->V{std::u16string _text61170;_text61170+=u"";_text61170+=j::string(([&]()->V{V _receiver61171=([&]()->V{V _receiver61174=_v_60690_words;V _method61175=this->_literals[23];V _method=j::get(_receiver61174,_method61175);j::Args _params61176=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params61176,_receiver61174);})();V _method61172=this->_literals[8];V _method=j::get(_receiver61171,_method61172);j::Args _params61173=j::Args{this->_literals[6]};return j::call(_method,_params61173,_receiver61171);})());_text61170+=u" or ";_text61170+=j::string(([&]()->V{V _receiver61177=_v_60690_words;V _method61178=this->_literals[67];V _method=j::get(_receiver61177,_method61178);j::Args _params61179=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params61179,_receiver61177);})());_text61170+=u"";return V(std::move(_text61170));})():([&]()->V{V _logical61180=j::get(_v_60690_words,V(0.0));return j::nullish(_logical61180)?this->_literals[15]:_logical61180;})());
return V{};
},1);
this->_v_60691_quoted.get()=j::function([=](const j::Args &_args_fn60692,const V &_receiver_fn60692,const V &_self_fn60692) mutable ->V{
V _v_60693_words;
_v_60693_words=_args_fn60692[0];
return ([&]()->V{V _callee61187=this->_v_60688_or.get();return j::call(_callee61187,j::Args{([&]()->V{V _receiver61184=_v_60693_words;V _method61185=this->_literals[7];V _method=j::get(_receiver61184,_method61185);j::Args _params61186=j::Args{j::function([=](const j::Args &_args_fn60694,const V &_receiver_fn60694,const V &_self_fn60694) mutable ->V{
V _v_60695_w;
_v_60695_w=_args_fn60694[0];
return ([&]()->V{V _receiver61181=j::builtin("JSON");V _method61182=this->_literals[4];V _method=j::get(_receiver61181,_method61182);j::Args _params61183=j::Args{_v_60695_w};return j::call(_method,_params61183,_receiver61181);})();
return V{};
},1)};return j::call(_method,_params61186,_receiver61184);})()});})();
return V{};
},1);
this->_v_60696_and.get()=j::function([=](const j::Args &_args_fn60697,const V &_receiver_fn60697,const V &_self_fn60697) mutable ->V{
V _v_60698_words;
_v_60698_words=_args_fn60697[0];
return (j::truth(([&]()->V{V _lhs61188=j::get(_v_60698_words,this->_literals[21]);V _rhs61189=V(1.0);return j::binary(">",_lhs61188,_rhs61189);})())?([&]()->V{std::u16string _text61190;_text61190+=u"";_text61190+=j::string(([&]()->V{V _receiver61191=([&]()->V{V _receiver61194=_v_60698_words;V _method61195=this->_literals[23];V _method=j::get(_receiver61194,_method61195);j::Args _params61196=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params61196,_receiver61194);})();V _method61192=this->_literals[8];V _method=j::get(_receiver61191,_method61192);j::Args _params61193=j::Args{this->_literals[6]};return j::call(_method,_params61193,_receiver61191);})());_text61190+=u" and ";_text61190+=j::string(([&]()->V{V _receiver61197=_v_60698_words;V _method61198=this->_literals[67];V _method=j::get(_receiver61197,_method61198);j::Args _params61199=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params61199,_receiver61197);})());_text61190+=u"";return V(std::move(_text61190));})():([&]()->V{V _logical61200=j::get(_v_60698_words,V(0.0));return j::nullish(_logical61200)?this->_literals[15]:_logical61200;})());
return V{};
},1);
this->_v_60699_isObject.get()=j::function([=](const j::Args &_args_fn60700,const V &_receiver_fn60700,const V &_self_fn60700) mutable ->V{
V _v_60701_v;
_v_60701_v=_args_fn60700[0];
return ([&]()->V{V _logical61201=([&]()->V{V _logical61202=([&]()->V{V _lhs61203=_v_60701_v;V _rhs61204=V::null();return V(!j::equal(_lhs61203,_rhs61204,true));})();return j::truth(_logical61202)?([&]()->V{V _lhs61205=j::unary("typeof",_v_60701_v);V _rhs61206=this->_literals[9];return V(j::equal(_lhs61205,_rhs61206,true));})():_logical61202;})();return j::truth(_logical61201)?j::unary("!",([&]()->V{V _receiver61207=j::builtin("Array");V _method61208=this->_literals[5];V _method=j::get(_receiver61207,_method61208);j::Args _params61209=j::Args{_v_60701_v};return j::call(_method,_params61209,_receiver61207);})()):_logical61201;})();
return V{};
},1);
this->_v_60764_LOOPS.get()=([&]()->V{j::Args _array61210;_array61210.push_back(V(0.25));_array61210.push_back(V(0.5));_array61210.push_back(V(1.0));_array61210.push_back(V(2.0));_array61210.push_back(V(3.0));_array61210.push_back(V(4.0));_array61210.push_back(V(5.0));_array61210.push_back(V(6.0));_array61210.push_back(V(10.0));_array61210.push_back(V(12.0));_array61210.push_back(V(15.0));_array61210.push_back(V(20.0));_array61210.push_back(V(30.0));_array61210.push_back(V(60.0));return j::array(std::move(_array61210));})();
this->_v_60783_isArea.get()=j::function([=](const j::Args &_args_fn60784,const V &_receiver_fn60784,const V &_self_fn60784) mutable ->V{
V _v_60785_v;
_v_60785_v=_args_fn60784[0];
return ([&]()->V{V _logical61211=([&]()->V{V _logical61212=([&]()->V{V _callee61213=this->_v_60699_isObject.get();return j::call(_callee61213,j::Args{_v_60785_v});})();return j::truth(_logical61212)?([&]()->V{V _lhs61214=j::get(_v_60785_v,this->_literals[68]);V _rhs61215=this->_literals[69];return V(j::equal(_lhs61214,_rhs61215,true));})():_logical61212;})();return j::truth(_logical61211)?([&]()->V{V _lhs61216=j::unary("typeof",j::get(_v_60785_v,this->_literals[70]));V _rhs61217=this->_literals[0];return V(j::equal(_lhs61216,_rhs61217,true));})():_logical61211;})();
return V{};
},1);
this->_v_60786_isPart.get()=j::function([=](const j::Args &_args_fn60787,const V &_receiver_fn60787,const V &_self_fn60787) mutable ->V{
V _v_60788_v;
_v_60788_v=_args_fn60787[0];
return ([&]()->V{V _logical61218=([&]()->V{V _logical61219=([&]()->V{V _callee61220=this->_v_60699_isObject.get();return j::call(_callee61220,j::Args{_v_60788_v});})();return j::truth(_logical61219)?([&]()->V{V _lhs61221=j::get(_v_60788_v,this->_literals[68]);V _rhs61222=this->_literals[71];return V(j::equal(_lhs61221,_rhs61222,true));})():_logical61219;})();return j::truth(_logical61218)?([&]()->V{V _lhs61223=j::unary("typeof",j::get(_v_60788_v,this->_literals[72]));V _rhs61224=this->_literals[0];return V(j::equal(_lhs61223,_rhs61224,true));})():_logical61218;})();
return V{};
},1);
this->_v_60789_isPiece.get()=j::function([=](const j::Args &_args_fn60790,const V &_receiver_fn60790,const V &_self_fn60790) mutable ->V{
V _v_60791_v;
_v_60791_v=_args_fn60790[0];
return ([&]()->V{V _logical61225=([&]()->V{V _logical61226=([&]()->V{V _callee61227=this->_v_60699_isObject.get();return j::call(_callee61227,j::Args{_v_60791_v});})();return j::truth(_logical61226)?([&]()->V{V _callee61228=this->_v_60699_isObject.get();return j::call(_callee61228,j::Args{j::get(_v_60791_v,this->_literals[35])});})():_logical61226;})();return j::truth(_logical61225)?([&]()->V{V _lhs61229=j::unary("typeof",j::get(_v_60791_v,this->_literals[73]));V _rhs61230=this->_literals[0];return V(j::equal(_lhs61229,_rhs61230,true));})():_logical61225;})();
return V{};
},1);
this->_v_60792_isShape3d.get()=j::function([=](const j::Args &_args_fn60793,const V &_receiver_fn60793,const V &_self_fn60793) mutable ->V{
V _v_60794_v;
_v_60794_v=_args_fn60793[0];
return ([&]()->V{V _logical61231=([&]()->V{V _logical61232=([&]()->V{V _logical61233=([&]()->V{V _logical61234=([&]()->V{V _logical61235=([&]()->V{V _logical61236=([&]()->V{V _callee61237=this->_v_60699_isObject.get();return j::call(_callee61237,j::Args{_v_60794_v});})();return j::truth(_logical61236)?([&]()->V{V _lhs61238=j::unary("typeof",j::get(_v_60794_v,this->_literals[68]));V _rhs61239=this->_literals[3];return V(j::equal(_lhs61238,_rhs61239,true));})():_logical61236;})();return j::truth(_logical61235)?([&]()->V{V _lhs61240=j::get(_v_60794_v,this->_literals[68]);V _rhs61241=this->_literals[69];return V(!j::equal(_lhs61240,_rhs61241,true));})():_logical61235;})();return j::truth(_logical61234)?([&]()->V{V _lhs61242=j::get(_v_60794_v,this->_literals[68]);V _rhs61243=this->_literals[71];return V(!j::equal(_lhs61242,_rhs61243,true));})():_logical61234;})();return j::truth(_logical61233)?([&]()->V{V _lhs61244=j::get(_v_60794_v,this->_literals[68]);V _rhs61245=this->_literals[74];return V(!j::equal(_lhs61244,_rhs61245,true));})():_logical61233;})();return j::truth(_logical61232)?j::unary("!",([&]()->V{V _lhs61246=this->_literals[35];V _rhs61247=_v_60794_v;return j::binary("in",_lhs61246,_rhs61247);})()):_logical61232;})();return j::truth(_logical61231)?j::unary("!",([&]()->V{V _lhs61248=this->_literals[75];V _rhs61249=_v_60794_v;return j::binary("in",_lhs61248,_rhs61249);})()):_logical61231;})();
return V{};
},1);
this->_v_60795_is3d.get()=j::function([=](const j::Args &_args_fn60796,const V &_receiver_fn60796,const V &_self_fn60796) mutable ->V{
V _v_60797_v;
_v_60797_v=_args_fn60796[0];
return ([&]()->V{V _logical61250=([&]()->V{V _callee61251=this->_v_60792_isShape3d.get();return j::call(_callee61251,j::Args{_v_60797_v});})();return !j::truth(_logical61250)?([&]()->V{V _logical61252=([&]()->V{V _logical61253=([&]()->V{V _receiver61254=j::builtin("Array");V _method61255=this->_literals[5];V _method=j::get(_receiver61254,_method61255);j::Args _params61256=j::Args{_v_60797_v};return j::call(_method,_params61256,_receiver61254);})();return j::truth(_logical61253)?([&]()->V{V _lhs61257=j::get(_v_60797_v,this->_literals[21]);V _rhs61258=V(0.0);return j::binary(">",_lhs61257,_rhs61258);})():_logical61253;})();return j::truth(_logical61252)?([&]()->V{V _receiver61259=_v_60797_v;V _method61260=this->_literals[76];V _method=j::get(_receiver61259,_method61260);j::Args _params61261=j::Args{this->_v_60792_isShape3d.get()};return j::call(_method,_params61261,_receiver61259);})():_logical61252;})():_logical61250;})();
return V{};
},1);
this->_v_60804_NAMING.get()=([&]()->V{j::Args _array61262;_array61262.push_back(this->_literals[1]);_array61262.push_back(this->_literals[36]);return j::array(std::move(_array61262));})();
}
};
}
std::unique_ptr<Module> new_kit_recipes_checks(){return std::make_unique<Generated_kit_recipes_checks>();}
}
