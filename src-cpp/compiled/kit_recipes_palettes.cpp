// Native source generated from src/kit/recipes/palettes.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_recipes_palettes final:j::Module {
j::Cell _v_66309_colorsOf;
j::Cell _v_66310_fail;
j::Cell _v_66311_materialColors;
j::Cell _v_66312_schemes;
j::Cell _v_66313_palette;
j::Cell _v_66316_schemeOf;
std::vector<V> _literals;
Generated_kit_recipes_palettes():_v_66309_colorsOf(this->slot("colorsOf")),_v_66310_fail(this->slot("fail")),_v_66311_materialColors(this->slot("materialColors")),_v_66312_schemes(this->slot("schemes")),_v_66313_palette(this->slot("palette")),_v_66316_schemeOf(this->slot("schemeOf")),_literals{V(u"string"),
V(u"hasOwn"),
V(u", "),
V(u"keys"),
V(u"join"),
V(u"stringify"),
V(u"palette()"),
V(u"isArray"),
V(u"light"),
V(u"dark"),
V(u"length")}{
this->exports["palette"]=this->_v_66313_palette;
this->exports["schemeOf"]=this->_v_66316_schemeOf;
}
void init() override{if(initialized)return;initialized=true;
this->_v_66313_palette.get()=j::function([=](const j::Args &_args_fn66314,const V &_receiver_fn66314,const V &_self_fn66314) mutable ->V{
V _v_66315_name;
_v_66315_name=_args_fn66314[0];
{
if(j::truth(([&]()->V{V _logical66323=([&]()->V{V _lhs66324=j::unary("typeof",_v_66315_name);V _rhs66325=this->_literals[0];return V(!j::equal(_lhs66324,_rhs66325,true));})();return !j::truth(_logical66323)?([&]()->V{V _logical66326=j::unary("!",([&]()->V{V _receiver66327=j::builtin("Object");V _method66328=this->_literals[1];V _method=j::get(_receiver66327,_method66328);j::Args _params66329=j::Args{this->_v_66312_schemes.get(),_v_66315_name};return j::call(_method,_params66329,_receiver66327);})());return j::truth(_logical66326)?j::unary("!",([&]()->V{V _receiver66330=j::builtin("Object");V _method66331=this->_literals[1];V _method=j::get(_receiver66330,_method66331);j::Args _params66332=j::Args{this->_v_66311_materialColors.get(),_v_66315_name};return j::call(_method,_params66332,_receiver66330);})()):_logical66326;})():_logical66323;})())){(void)(([&]()->V{V _callee66343=this->_v_66310_fail.get();return j::call(_callee66343,j::Args{([&]()->V{std::u16string _text66333;_text66333+=u"palette() takes a palette's name, one of ";_text66333+=j::string(([&]()->V{V _receiver66334=([&]()->V{V _receiver66337=j::builtin("Object");V _method66338=this->_literals[3];V _method=j::get(_receiver66337,_method66338);j::Args _params66339=j::Args{this->_v_66312_schemes.get()};return j::call(_method,_params66339,_receiver66337);})();V _method66335=this->_literals[4];V _method=j::get(_receiver66334,_method66335);j::Args _params66336=j::Args{this->_literals[2]};return j::call(_method,_params66336,_receiver66334);})());_text66333+=u", or a material's, not ";_text66333+=j::string(([&]()->V{V _receiver66340=j::builtin("JSON");V _method66341=this->_literals[5];V _method=j::get(_receiver66340,_method66341);j::Args _params66342=j::Args{_v_66315_name};return j::call(_method,_params66342,_receiver66340);})());_text66333+=u"";return V(std::move(_text66333));})()});})());
}
return ([&]()->V{V _callee66344=this->_v_66309_colorsOf.get();return j::call(_callee66344,j::Args{_v_66315_name,this->_literals[6]});})();

}

return V{};
},1);
this->_v_66316_schemeOf.get()=j::function([=](const j::Args &_args_fn66317,const V &_receiver_fn66317,const V &_self_fn66317) mutable ->V{
V _v_66318_what;
V _v_66319_v;
_v_66318_what=_args_fn66317[0];
_v_66319_v=_args_fn66317[1];
{
V _v_66320_spec;
V _v_66321_s;
_v_66320_spec=([&]()->V{V _callee66345=this->_v_66309_colorsOf.get();return j::call(_callee66345,j::Args{_v_66319_v,_v_66318_what});})();
_v_66321_s=(j::truth(([&]()->V{V _receiver66346=j::builtin("Array");V _method66347=this->_literals[7];V _method=j::get(_receiver66346,_method66347);j::Args _params66348=j::Args{_v_66320_spec};return j::call(_method,_params66348,_receiver66346);})())?([&]()->V{V _obj66349=j::object();j::put(_obj66349,this->_literals[8],_v_66320_spec);j::put(_obj66349,this->_literals[9],_v_66320_spec);return _obj66349;})():_v_66320_spec);
{for(const auto &_item66350:j::elements(([&]()->V{j::Args _array66351;_array66351.push_back(j::get(_v_66321_s,this->_literals[8]));_array66351.push_back(j::get(_v_66321_s,this->_literals[9]));return j::array(std::move(_array66351));})())){V _v_66322_list;
_v_66322_list=_item66350;
if(j::truth(([&]()->V{V _lhs66352=j::get(_v_66322_list,this->_literals[10]);V _rhs66353=V(32.0);return j::binary(">",_lhs66352,_rhs66353);})())){(void)(([&]()->V{V _callee66355=this->_v_66310_fail.get();return j::call(_callee66355,j::Args{([&]()->V{std::u16string _text66354;_text66354+=u"";_text66354+=j::string(_v_66318_what);_text66354+=u" takes 1 to 32 colours for each page, not ";_text66354+=j::string(j::get(_v_66322_list,this->_literals[10]));_text66354+=u"";return V(std::move(_text66354));})()});})());
}
}}
return _v_66321_s;

}

return V{};
},2);
auto &_import1023=j::module("kit/core");
this->_v_66309_colorsOf=_import1023.exported("colorsOf");
this->_v_66310_fail=_import1023.exported("fail");
this->_v_66311_materialColors=_import1023.exported("materialColors");
this->_v_66312_schemes=_import1023.exported("schemes");
{auto &_m=j::module("kit/core");this->exports["schemes"]=_m.exported("schemes");}
this->exports["palette"]=this->_v_66313_palette;
this->exports["schemeOf"]=this->_v_66316_schemeOf;
}
};
}
std::unique_ptr<Module> new_kit_recipes_palettes(){return std::make_unique<Generated_kit_recipes_palettes>();}
}
