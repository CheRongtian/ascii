// Native source generated from src/print.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_print final:j::Module {
j::Cell _v_71436_process;
j::Cell _v_71437_make;
j::Cell _v_71438_drawable;
j::Cell _v_71439_HIDE;
j::Cell _v_71440_SHOW;
j::Cell _v_71441_sgr;
j::Cell _v_71444_banner;
std::vector<V> _literals;
Generated_print():_v_71436_process(this->slot("process")),_v_71437_make(this->slot("make")),_v_71438_drawable(this->slot("drawable")),_v_71439_HIDE(this->slot("HIDE")),_v_71440_SHOW(this->slot("SHOW")),_v_71441_sgr(this->slot("sgr")),_v_71444_banner(this->slot("banner")),_literals{V(u"\x1b" u"[?25l"),
V(u"\x1b" u"[?25h"),
V(u"slice")}{
this->exports["banner"]=this->_v_71444_banner;
}
void init() override{if(initialized)return;initialized=true;
this->_v_71444_banner.get()=j::function([](const j::Args &_a,const V &,const V &)->V{return j::terminal_banner(_a[0],j::defaulted(_a[1],j::object()));});
auto &_import616=j::module("node:process");
this->_v_71436_process=_import616.exported("default");
auto &_import652=j::module("banner");
this->_v_71437_make=_import652.exported("banner");
this->_v_71438_drawable=_import652.exported("drawable");
this->exports["banner"]=this->_v_71444_banner;
this->_v_71439_HIDE.get()=this->_literals[0];
this->_v_71440_SHOW.get()=this->_literals[1];
this->_v_71441_sgr.get()=j::function([=](const j::Args &_args_fn71442,const V &_receiver_fn71442,const V &_self_fn71442) mutable ->V{
V _v_71443_hex;
_v_71443_hex=_args_fn71442[0];
return ([&]()->V{std::u16string _text71532;_text71532+=u"\x1b" u"[38;2;";_text71532+=j::string(([&]()->V{V _callee71536=j::builtin("parseInt");return j::call(_callee71536,j::Args{([&]()->V{V _receiver71533=_v_71443_hex;V _method71534=this->_literals[2];V _method=j::get(_receiver71533,_method71534);j::Args _params71535=j::Args{V(1.0),V(3.0)};return j::call(_method,_params71535,_receiver71533);})(),V(16.0)});})());_text71532+=u";";_text71532+=j::string(([&]()->V{V _callee71540=j::builtin("parseInt");return j::call(_callee71540,j::Args{([&]()->V{V _receiver71537=_v_71443_hex;V _method71538=this->_literals[2];V _method=j::get(_receiver71537,_method71538);j::Args _params71539=j::Args{V(3.0),V(5.0)};return j::call(_method,_params71539,_receiver71537);})(),V(16.0)});})());_text71532+=u";";_text71532+=j::string(([&]()->V{V _callee71544=j::builtin("parseInt");return j::call(_callee71544,j::Args{([&]()->V{V _receiver71541=_v_71443_hex;V _method71542=this->_literals[2];V _method=j::get(_receiver71541,_method71542);j::Args _params71543=j::Args{V(5.0),V(7.0)};return j::call(_method,_params71543,_receiver71541);})(),V(16.0)});})());_text71532+=u"m";return V(std::move(_text71532));})();
return V{};
},1);
}
};
}
std::unique_ptr<Module> new_print(){return std::make_unique<Generated_print>();}
}
