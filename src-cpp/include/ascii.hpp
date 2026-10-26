#pragma once
#include "../value.hpp"

// Native library entry points. Values keep the toolkit's options and callbacks
// available to C++ callers; async browser I/O becomes synchronous native I/O.
namespace ascii {
using Value=native::Value;
using Arguments=native::Args;
inline Value load(const std::string &id){return native::library_piece(id);}
inline Value kit(const std::string &name,const Arguments &args={}){return native::call(native::module("kit/index").exported(name).get(),args);}
inline Value banner(const Value &text,const Value &options=native::object()){return native::call(native::module("banner").exported("banner").get(),{text,options});}
inline std::string svg(const Value &piece,const Value &options=native::object()){return utf8(native::string(native::call(native::module("svg").exported("svg").get(),{piece,options})));}
inline std::string banner_svg(const Value &text,const Value &options=native::object()){return utf8(native::string(native::call(native::module("svg").exported("bannerSvg").get(),{text,options})));}
inline std::string still(const Value &piece,const Value &options=native::object()){return utf8(native::string(native::call(native::module("terminal").exported("still").get(),{piece,options})));}
inline Value play(const Value &piece,const Value &options=native::object()){return native::terminal_play(piece,options);}
inline Value print_banner(const Value &text,const Value &options=native::object()){return native::terminal_banner(text,options);}
} // namespace ascii
