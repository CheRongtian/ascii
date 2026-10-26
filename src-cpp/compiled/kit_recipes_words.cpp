// Native source generated from src/kit/recipes/words.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_recipes_words final:j::Module {
j::Cell _v_68749_Surface;
j::Cell _v_68750_asPiece;
j::Cell _v_68751_chained;
j::Cell _v_68752_checkMeta;
j::Cell _v_68753_fail;
j::Cell _v_68754_crop;
j::Cell _v_68755_picture;
j::Cell _v_68756_shape;
j::Cell _v_68757_scene;
j::Cell _v_68758_lcm;
j::Cell _v_68759_is3d;
j::Cell _v_68760_isArea;
j::Cell _v_68761_isPart;
j::Cell _v_68762_isPiece;
j::Cell _v_68763_show;
j::Cell _v_68764_isObject;
j::Cell _v_68767_ROOM;
j::Cell _v_68768_pieceOf;
j::Cell _v_68780_loopFor;
j::Cell _v_68785_withLoop;
std::vector<V> _literals;
Generated_kit_recipes_words():_v_68749_Surface(this->slot("Surface")),_v_68750_asPiece(this->slot("asPiece")),_v_68751_chained(this->slot("chained")),_v_68752_checkMeta(this->slot("checkMeta")),_v_68753_fail(this->slot("fail")),_v_68754_crop(this->slot("crop")),_v_68755_picture(this->slot("picture")),_v_68756_shape(this->slot("shape")),_v_68757_scene(this->slot("scene")),_v_68758_lcm(this->slot("lcm")),_v_68759_is3d(this->slot("is3d")),_v_68760_isArea(this->slot("isArea")),_v_68761_isPart(this->slot("isPart")),_v_68762_isPiece(this->slot("isPiece")),_v_68763_show(this->slot("show")),_v_68764_isObject(this->slot("isObject")),_v_68767_ROOM(this->slot("ROOM")),_v_68768_pieceOf(this->slot("pieceOf")),_v_68780_loopFor(this->slot("loopFor")),_v_68785_withLoop(this->slot("withLoop")),_literals{V(u"this"),
V(u"default"),
V(u"function"),
V(u"string"),
V(u"split"),
V(u"\n"),
V(u"map"),
V(u"trim"),
V(u"find"),
V(u"slice"),
V(u"text"),
V(u"isArray"),
V(u"length"),
V(u"every"),
V(u"cols"),
V(u"rows"),
V(u"place"),
V(u"x0"),
V(u"max"),
V(u"y0"),
V(u"x1"),
V(u"min"),
V(u"y1"),
V(u"name"),
V(u"shape"),
V(u"x"),
V(u"y"),
V(u"shapes"),
V(u"number"),
V(u"push"),
V(u"meta"),
V(u"fps"),
V(u"loop"),
V(u"motion"),
V(u"object")}{
this->exports["pieceOf"]=this->_v_68768_pieceOf;
this->exports["loopFor"]=this->_v_68780_loopFor;
this->exports["withLoop"]=this->_v_68785_withLoop;
}
void init() override{if(initialized)return;initialized=true;
this->_v_68768_pieceOf.get()=j::function([=](const j::Args &_args_fn68769,const V &_receiver_fn68769,const V &_self_fn68769) mutable ->V{
V _v_68770_thing;
V _v_68771_what;
_v_68770_thing=_args_fn68769[0];
V _default68793=_args_fn68769[1];if(_default68793.kind==V::Undefined||_default68793.kind==V::Hole)_default68793=this->_literals[0];
_v_68771_what=_default68793;
{
if(j::truth(([&]()->V{V _logical68794=([&]()->V{V _logical68795=([&]()->V{V _callee68796=this->_v_68764_isObject.get();return j::call(_callee68796,j::Args{_v_68770_thing});})();return j::truth(_logical68795)?j::unary("!",([&]()->V{V _callee68797=this->_v_68762_isPiece.get();return j::call(_callee68797,j::Args{_v_68770_thing});})()):_logical68795;})();return j::truth(_logical68794)?([&]()->V{V _callee68798=this->_v_68762_isPiece.get();return j::call(_callee68798,j::Args{j::get(_v_68770_thing,this->_literals[1])});})():_logical68794;})())){(void)((_v_68770_thing=j::get(_v_68770_thing,this->_literals[1])));
}
if(j::truth(([&]()->V{V _lhs68800=j::unary("typeof",_v_68770_thing);V _rhs68801=this->_literals[2];return V(j::equal(_lhs68800,_rhs68801,true));})())){(void)(([&]()->V{V _callee68804=this->_v_68753_fail.get();return j::call(_callee68804,j::Args{([&]()->V{std::u16string _text68802;_text68802+=u"";_text68802+=j::string(_v_68771_what);_text68802+=u" takes a thing to show, not ";_text68802+=j::string(([&]()->V{V _callee68803=this->_v_68763_show.get();return j::call(_callee68803,j::Args{_v_68770_thing});})());_text68802+=u"";return V(std::move(_text68802));})()});})());
}
if(j::truth(([&]()->V{V _lhs68805=j::unary("typeof",_v_68770_thing);V _rhs68806=this->_literals[3];return V(j::equal(_lhs68805,_rhs68806,true));})())){return ([&]()->V{V _callee68821=this->_v_68751_chained.get();return j::call(_callee68821,j::Args{([&]()->V{V _callee68820=this->_v_68750_asPiece.get();return j::call(_callee68820,j::Args{_v_68770_thing,([&]()->V{V _logical68807=([&]()->V{V _chain68808=_v_68770_thing;V _chain68809=j::get(_chain68808,this->_literals[4]);V _chain68810=j::call(_chain68809,j::Args{this->_literals[5]},_chain68808);V _chain68811=j::get(_chain68810,this->_literals[6]);V _chain68812=j::call(_chain68811,j::Args{j::function([=](const j::Args &_args_fn68772,const V &_receiver_fn68772,const V &_self_fn68772) mutable ->V{
V _v_68773_l;
_v_68773_l=_args_fn68772[0];
return ([&]()->V{V _receiver68813=_v_68773_l;V _method68814=this->_literals[7];V _method=j::get(_receiver68813,_method68814);j::Args _params68815=j::Args{};return j::call(_method,_params68815,_receiver68813);})();
return V{};
},1)},_chain68810);V _chain68816=j::get(_chain68812,this->_literals[8]);V _chain68817=j::call(_chain68816,j::Args{j::builtin("Boolean")},_chain68812);if(j::nullish(_chain68817))return V{};V _chain68818=j::get(_chain68817,this->_literals[9]);V _chain68819=j::call(_chain68818,j::Args{V(0.0),V(40.0)},_chain68817);return _chain68819;})();return j::nullish(_logical68807)?this->_literals[10]:_logical68807;})()});})()});})();
}
if(j::truth(([&]()->V{V _logical68822=([&]()->V{V _lhs68823=_v_68770_thing;V _rhs68824=this->_v_68749_Surface.get();return j::binary("instanceof",_lhs68823,_rhs68824);})();return !j::truth(_logical68822)?([&]()->V{V _callee68825=this->_v_68762_isPiece.get();return j::call(_callee68825,j::Args{_v_68770_thing});})():_logical68822;})())){return ([&]()->V{V _callee68827=this->_v_68751_chained.get();return j::call(_callee68827,j::Args{([&]()->V{V _callee68826=this->_v_68750_asPiece.get();return j::call(_callee68826,j::Args{_v_68770_thing});})()});})();
}
if(j::truth(([&]()->V{V _callee68828=this->_v_68761_isPart.get();return j::call(_callee68828,j::Args{_v_68770_thing});})())){return ([&]()->V{V _callee68830=this->_v_68755_picture.get();return j::call(_callee68830,j::Args{([&]()->V{j::Args _array68829;_array68829.push_back(_v_68770_thing);return j::array(std::move(_array68829));})()});})();
}
if(j::truth(([&]()->V{V _logical68831=([&]()->V{V _logical68832=([&]()->V{V _receiver68833=j::builtin("Array");V _method68834=this->_literals[11];V _method=j::get(_receiver68833,_method68834);j::Args _params68835=j::Args{_v_68770_thing};return j::call(_method,_params68835,_receiver68833);})();return j::truth(_logical68832)?j::get(_v_68770_thing,this->_literals[12]):_logical68832;})();return j::truth(_logical68831)?([&]()->V{V _receiver68836=_v_68770_thing;V _method68837=this->_literals[13];V _method=j::get(_receiver68836,_method68837);j::Args _params68838=j::Args{this->_v_68761_isPart.get()};return j::call(_method,_params68838,_receiver68836);})():_logical68831;})())){return ([&]()->V{V _callee68839=this->_v_68755_picture.get();return j::call(_callee68839,j::Args{_v_68770_thing});})();
}
if(j::truth(([&]()->V{V _callee68840=this->_v_68760_isArea.get();return j::call(_callee68840,j::Args{_v_68770_thing});})())){
V _v_68774_box;
V _v_68775_x0;
V _v_68776_y0;
V _v_68777_x1;
V _v_68778_y1;
V _v_68779_drawn;
_v_68774_box=([&]()->V{V _receiver68841=_v_68770_thing;V _method68842=this->_literals[16];V _method=j::get(_receiver68841,_method68842);j::Args _params68843=j::Args{j::get(this->_v_68767_ROOM.get(),this->_literals[14]),j::get(this->_v_68767_ROOM.get(),this->_literals[15])};return j::call(_method,_params68843,_receiver68841);})();
_v_68775_x0=([&]()->V{V _receiver68849=j::builtin("Math");V _method68850=this->_literals[18];V _method=j::get(_receiver68849,_method68850);j::Args _params68851=j::Args{V(0.0),([&]()->V{V _lhs68844=([&]()->V{V _number68846=j::get(_v_68774_box,this->_literals[17]);return V(std::floor(j::number(_number68846)));})();V _rhs68845=V(1.0);return V(j::number(_lhs68844)-j::number(_rhs68845));})()};return j::call(_method,_params68851,_receiver68849);})();
_v_68776_y0=([&]()->V{V _receiver68857=j::builtin("Math");V _method68858=this->_literals[18];V _method=j::get(_receiver68857,_method68858);j::Args _params68859=j::Args{V(0.0),([&]()->V{V _lhs68852=([&]()->V{V _number68854=j::get(_v_68774_box,this->_literals[19]);return V(std::floor(j::number(_number68854)));})();V _rhs68853=V(1.0);return V(j::number(_lhs68852)-j::number(_rhs68853));})()};return j::call(_method,_params68859,_receiver68857);})();
_v_68777_x1=([&]()->V{V _receiver68865=j::builtin("Math");V _method68866=this->_literals[21];V _method=j::get(_receiver68865,_method68866);j::Args _params68867=j::Args{j::get(this->_v_68767_ROOM.get(),this->_literals[14]),([&]()->V{V _lhs68860=([&]()->V{V _number68862=j::get(_v_68774_box,this->_literals[20]);return V(std::ceil(j::number(_number68862)));})();V _rhs68861=V(1.0);return j::binary("+",_lhs68860,_rhs68861);})()};return j::call(_method,_params68867,_receiver68865);})();
_v_68778_y1=([&]()->V{V _receiver68873=j::builtin("Math");V _method68874=this->_literals[21];V _method=j::get(_receiver68873,_method68874);j::Args _params68875=j::Args{j::get(this->_v_68767_ROOM.get(),this->_literals[15]),([&]()->V{V _lhs68868=([&]()->V{V _number68870=j::get(_v_68774_box,this->_literals[22]);return V(std::ceil(j::number(_number68870)));})();V _rhs68869=V(1.0);return j::binary("+",_lhs68868,_rhs68869);})()};return j::call(_method,_params68875,_receiver68873);})();
_v_68779_drawn=([&]()->V{V _callee68880=this->_v_68755_picture.get();return j::call(_callee68880,j::Args{([&]()->V{j::Args _array68876;_array68876.push_back(([&]()->V{V _callee68877=this->_v_68756_shape.get();return j::call(_callee68877,j::Args{_v_68770_thing});})());return j::array(std::move(_array68876));})(),([&]()->V{V _obj68878=j::object();j::put(_obj68878,this->_literals[23],this->_literals[24]);V _spread68879=this->_v_68767_ROOM.get();for(const auto &_key:j::keys(_spread68879))j::put(_obj68878,_key,j::get(_spread68879,_key));return _obj68878;})()});})();
return (j::truth(([&]()->V{V _logical68881=([&]()->V{V _lhs68882=_v_68777_x1;V _rhs68883=_v_68775_x0;return j::binary(">",_lhs68882,_rhs68883);})();return j::truth(_logical68881)?([&]()->V{V _lhs68884=_v_68778_y1;V _rhs68885=_v_68776_y0;return j::binary(">",_lhs68884,_rhs68885);})():_logical68881;})())?([&]()->V{V _callee68891=this->_v_68754_crop.get();return j::call(_callee68891,j::Args{_v_68779_drawn,([&]()->V{V _obj68886=j::object();j::put(_obj68886,this->_literals[25],_v_68775_x0);j::put(_obj68886,this->_literals[26],_v_68776_y0);j::put(_obj68886,this->_literals[14],([&]()->V{V _lhs68887=_v_68777_x1;V _rhs68888=_v_68775_x0;return V(j::number(_lhs68887)-j::number(_rhs68888));})());j::put(_obj68886,this->_literals[15],([&]()->V{V _lhs68889=_v_68778_y1;V _rhs68890=_v_68776_y0;return V(j::number(_lhs68889)-j::number(_rhs68890));})());return _obj68886;})()});})():_v_68779_drawn);

}

if(j::truth(([&]()->V{V _callee68892=this->_v_68759_is3d.get();return j::call(_callee68892,j::Args{_v_68770_thing});})())){return ([&]()->V{V _callee68894=this->_v_68757_scene.get();return j::call(_callee68894,j::Args{([&]()->V{V _obj68893=j::object();j::put(_obj68893,this->_literals[23],this->_literals[27]);return _obj68893;})(),_v_68770_thing});})();
}
return ([&]()->V{V _callee68897=this->_v_68753_fail.get();return j::call(_callee68897,j::Args{([&]()->V{std::u16string _text68895;_text68895+=u"";_text68895+=j::string(_v_68771_what);_text68895+=u" takes a piece, text, a grid, a 3D shape such as torus(), an area such as heart(), or parts, not ";_text68895+=j::string(([&]()->V{V _callee68896=this->_v_68763_show.get();return j::call(_callee68896,j::Args{_v_68770_thing});})());_text68895+=u"";return V(std::move(_text68895));})()});})();

}

return V{};
},1);
this->_v_68780_loopFor.get()=j::function([=](const j::Args &_args_fn68781,const V &_receiver_fn68781,const V &_self_fn68781) mutable ->V{
V _v_68782_parts;
_v_68782_parts=_args_fn68781[0];
{
V _v_68783_periods;
_v_68783_periods=([&]()->V{j::Args _array68898;return j::array(std::move(_array68898));})();
{for(const auto &_item68899:j::elements(_v_68782_parts)){V _v_68784_p;
_v_68784_p=_item68899;
{
if(j::truth(([&]()->V{V _lhs68900=j::unary("typeof",_v_68784_p);V _rhs68901=this->_literals[28];return V(j::equal(_lhs68900,_rhs68901,true));})())){(void)(([&]()->V{V _receiver68902=_v_68783_periods;V _method68903=this->_literals[29];V _method=j::get(_receiver68902,_method68903);j::Args _params68904=j::Args{_v_68784_p};return j::call(_method,_params68904,_receiver68902);})());
}else {if(j::truth(j::get(j::get(_v_68784_p,this->_literals[30]),this->_literals[31]))){
if(j::truth(([&]()->V{V _lhs68905=j::get(j::get(_v_68784_p,this->_literals[30]),this->_literals[32]);V _rhs68906=j::builtin("undefined");return V(j::equal(_lhs68905,_rhs68906,true));})())){return j::builtin("undefined");
}
(void)(([&]()->V{V _receiver68907=_v_68783_periods;V _method68908=this->_literals[29];V _method=j::get(_receiver68907,_method68908);j::Args _params68909=j::Args{j::get(j::get(_v_68784_p,this->_literals[30]),this->_literals[32])};return j::call(_method,_params68909,_receiver68907);})());

}

}

}
}}
return (j::truth(j::get(_v_68783_periods,this->_literals[12]))?([&]()->V{V _callee68910=this->_v_68758_lcm.get();return j::call(_callee68910,j::Args{_v_68783_periods});})():j::builtin("undefined"));

}

return V{};
},1);
this->_v_68785_withLoop.get()=j::function([=](const j::Args &_args_fn68786,const V &_receiver_fn68786,const V &_self_fn68786) mutable ->V{
V _v_68787_p;
V _v_68788_loop;
_v_68787_p=_args_fn68786[0];
_v_68788_loop=_args_fn68786[1];
{
V _v_68789__;
V _v_68790_meta;
V _v_68791___;
V _v_68792_rest;
V _pattern68911=j::get(_v_68787_p,this->_literals[30]);
_v_68789__=j::get(_pattern68911,this->_literals[32]);
_v_68790_meta=j::object_rest(_pattern68911,{j::string(this->_literals[32])});
V _pattern68912=_v_68787_p;
_v_68791___=j::get(_pattern68912,this->_literals[33]);
_v_68792_rest=j::object_rest(_pattern68912,{j::string(this->_literals[33])});
return ([&]()->V{V _callee68920=this->_v_68751_chained.get();return j::call(_callee68920,j::Args{([&]()->V{V _obj68913=j::object();V _spread68914=_v_68792_rest;for(const auto &_key:j::keys(_spread68914))j::put(_obj68913,_key,j::get(_spread68914,_key));j::put(_obj68913,this->_literals[30],([&]()->V{V _callee68919=this->_v_68752_checkMeta.get();return j::call(_callee68919,j::Args{(j::truth(([&]()->V{V _lhs68915=_v_68788_loop;V _rhs68916=j::builtin("undefined");return V(j::equal(_lhs68915,_rhs68916,true));})())?_v_68790_meta:([&]()->V{V _obj68917=j::object();V _spread68918=_v_68790_meta;for(const auto &_key:j::keys(_spread68918))j::put(_obj68917,_key,j::get(_spread68918,_key));j::put(_obj68917,this->_literals[32],_v_68788_loop);return _obj68917;})())});})());return _obj68913;})()});})();

}

return V{};
},2);
auto &_import809=j::module("kit/core");
this->_v_68749_Surface=_import809.exported("Surface");
this->_v_68750_asPiece=_import809.exported("asPiece");
this->_v_68751_chained=_import809.exported("chained");
this->_v_68752_checkMeta=_import809.exported("checkMeta");
this->_v_68753_fail=_import809.exported("fail");
auto &_import910=j::module("kit/compose");
this->_v_68754_crop=_import910.exported("crop");
auto &_import948=j::module("kit/materials");
this->_v_68755_picture=_import948.exported("picture");
this->_v_68756_shape=_import948.exported("shape");
auto &_import1020=j::module("kit/shapes3d");
this->_v_68757_scene=_import1020.exported("scene");
auto &_import1074=j::module("kit/math");
this->_v_68758_lcm=_import1074.exported("lcm");
auto &_import1108=j::module("kit/recipes/checks");
this->_v_68759_is3d=_import1108.exported("is3d");
this->_v_68760_isArea=_import1108.exported("isArea");
this->_v_68761_isPart=_import1108.exported("isPart");
this->_v_68762_isPiece=_import1108.exported("isPiece");
this->_v_68763_show=_import1108.exported("show");
{auto &_m=j::module("kit/recipes/checks");this->exports["easings"]=_m.exported("easings");}
this->exports["pieceOf"]=this->_v_68768_pieceOf;
this->exports["loopFor"]=this->_v_68780_loopFor;
this->exports["withLoop"]=this->_v_68785_withLoop;
this->_v_68764_isObject.get()=j::function([=](const j::Args &_args_fn68765,const V &_receiver_fn68765,const V &_self_fn68765) mutable ->V{
V _v_68766_v;
_v_68766_v=_args_fn68765[0];
return ([&]()->V{V _logical68921=([&]()->V{V _logical68922=([&]()->V{V _lhs68923=_v_68766_v;V _rhs68924=V::null();return V(!j::equal(_lhs68923,_rhs68924,true));})();return j::truth(_logical68922)?([&]()->V{V _lhs68925=j::unary("typeof",_v_68766_v);V _rhs68926=this->_literals[34];return V(j::equal(_lhs68925,_rhs68926,true));})():_logical68922;})();return j::truth(_logical68921)?j::unary("!",([&]()->V{V _receiver68927=j::builtin("Array");V _method68928=this->_literals[11];V _method=j::get(_receiver68927,_method68928);j::Args _params68929=j::Args{_v_68766_v};return j::call(_method,_params68929,_receiver68927);})()):_logical68921;})();
return V{};
},1);
this->_v_68767_ROOM.get()=([&]()->V{V _obj68930=j::object();j::put(_obj68930,this->_literals[14],V(64.0));j::put(_obj68930,this->_literals[15],V(24.0));return _obj68930;})();
}
};
}
std::unique_ptr<Module> new_kit_recipes_words(){return std::make_unique<Generated_kit_recipes_words>();}
}
