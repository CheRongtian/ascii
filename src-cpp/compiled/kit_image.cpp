// Native source generated from src/kit/image.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_image final:j::Module {
j::Cell _v_15262_MAX;
j::Cell _v_15263_NONE;
j::Cell _v_15264_and;
j::Cell _v_15265_checkMeta;
j::Cell _v_15266_colorOf;
j::Cell _v_15267_colorsOf;
j::Cell _v_15268_fail;
j::Cell _v_15269_hex;
j::Cell _v_15270_isHex;
j::Cell _v_15271_piece;
j::Cell _v_15272_rampOf;
j::Cell _v_15273_CH;
j::Cell _v_15274_CW;
j::Cell _v_15275_FILL;
j::Cell _v_15276_GLYPHS;
j::Cell _v_15277_GX;
j::Cell _v_15278_GY;
j::Cell _v_15279_MARGIN;
j::Cell _v_15280_RAMP;
j::Cell _v_15281_SUB;
j::Cell _v_15282_NEAR;
j::Cell _v_15283_SHARE;
j::Cell _v_15284_SIDE;
j::Cell _v_15285_LARGEST;
j::Cell _v_15286_START;
j::Cell _v_15287_PASS;
j::Cell _v_15288_HALF;
j::Cell _v_15289_LEAN;
j::Cell _v_15290_SOLID;
j::Cell _v_15291_SLASH;
j::Cell _v_15292_whole;
j::Cell _v_15297_CONTROL;
j::Cell _v_15298_shown;
j::Cell _v_15302_NEAR_NAMES;
j::Cell _v_15303_known;
j::Cell _v_15310_OPTIONS;
j::Cell _v_15311_glintEvery;
j::Cell _v_15315_checkInvert;
j::Cell _v_15318_settings;
j::Cell _v_15333_checkPixels;
j::Cell _v_15338_drawing;
j::Cell _v_15344_draw;
j::Cell _v_15465_crisp;
j::Cell _v_15475_pixelArt;
j::Cell _v_15543_size;
j::Cell _v_15552_taps;
j::Cell _v_15575_trim;
j::Cell _v_15586_photo;
j::Cell _v_15595_textured;
j::Cell _v_15626_clearGround;
j::Cell _v_15668_white;
j::Cell _v_15673_pick;
j::Cell _v_15688_d2;
j::Cell _v_15692_quantize;
j::Cell _v_15751_PAGE;
j::Cell _v_15752_PAPER;
j::Cell _v_15753_LIGHT;
j::Cell _v_15754_lum;
j::Cell _v_15760_contrast;
j::Cell _v_15764_hsl;
j::Cell _v_15778_fromHsl;
j::Cell _v_15790_grey;
j::Cell _v_15793_black;
j::Cell _v_15796_lift;
j::Cell _v_15807_sink;
j::Cell _v_15817_tint;
j::Cell _v_15823_palette;
j::Cell _v_15839_checkDrawing;
j::Cell _v_15862_prepared;
j::Cell _v_15863_drawingOf;
j::Cell _v_15867_prepare;
j::Cell _v_15899_paint;
j::Cell _v_15926_fromDrawing;
j::Cell _v_15930_pieceOf;
j::Cell _v_15951_drawImage;
j::Cell _v_15968_imagePalette;
j::Cell _v_15979_fromPixels;
j::Cell _v_15990_pixelsFromText;
j::Cell _v_16018_SVG_NS;
j::Cell _v_16019_isMarkup;
j::Cell _v_16031_fromImage;
j::Cell _v_16039_SOURCES;
j::Cell _v_16040_pixelsOf;
j::Cell _v_16044_where;
j::Cell _v_16047_load;
j::Cell _v_16052_blob;
j::Cell _v_16064_image;
j::Cell _v_16070_svg;
j::Cell _v_16091_drawn;
j::Cell _v_16101_format;
j::Cell _v_16105_shrink;
j::Cell _v_16130_files;
j::Cell _v_16133_file;
j::Cell _v_16139_PNG;
j::Cell _v_16140_ADAM7;
j::Cell _v_16141_CHANNELS;
j::Cell _v_16142_MOST_SIDE;
j::Cell _v_16143_MOST_PIXELS;
j::Cell _v_16144_readPng;
j::Cell _v_16225_inflate;
std::vector<V> _literals;
Generated_kit_image():_v_15262_MAX(this->slot("MAX")),_v_15263_NONE(this->slot("NONE")),_v_15264_and(this->slot("and")),_v_15265_checkMeta(this->slot("checkMeta")),_v_15266_colorOf(this->slot("colorOf")),_v_15267_colorsOf(this->slot("colorsOf")),_v_15268_fail(this->slot("fail")),_v_15269_hex(this->slot("hex")),_v_15270_isHex(this->slot("isHex")),_v_15271_piece(this->slot("piece")),_v_15272_rampOf(this->slot("rampOf")),_v_15273_CH(this->slot("CH")),_v_15274_CW(this->slot("CW")),_v_15275_FILL(this->slot("FILL")),_v_15276_GLYPHS(this->slot("GLYPHS")),_v_15277_GX(this->slot("GX")),_v_15278_GY(this->slot("GY")),_v_15279_MARGIN(this->slot("MARGIN")),_v_15280_RAMP(this->slot("RAMP")),_v_15281_SUB(this->slot("SUB")),_v_15282_NEAR(this->slot("NEAR")),_v_15283_SHARE(this->slot("SHARE")),_v_15284_SIDE(this->slot("SIDE")),_v_15285_LARGEST(this->slot("LARGEST")),_v_15286_START(this->slot("START")),_v_15287_PASS(this->slot("PASS")),_v_15288_HALF(this->slot("HALF")),_v_15289_LEAN(this->slot("LEAN")),_v_15290_SOLID(this->slot("SOLID")),_v_15291_SLASH(this->slot("SLASH")),_v_15292_whole(this->slot("whole")),_v_15297_CONTROL(this->slot("CONTROL")),_v_15298_shown(this->slot("shown")),_v_15302_NEAR_NAMES(this->slot("NEAR_NAMES")),_v_15303_known(this->slot("known")),_v_15310_OPTIONS(this->slot("OPTIONS")),_v_15311_glintEvery(this->slot("glintEvery")),_v_15315_checkInvert(this->slot("checkInvert")),_v_15318_settings(this->slot("settings")),_v_15333_checkPixels(this->slot("checkPixels")),_v_15338_drawing(this->slot("drawing")),_v_15344_draw(this->slot("draw")),_v_15465_crisp(this->slot("crisp")),_v_15475_pixelArt(this->slot("pixelArt")),_v_15543_size(this->slot("size")),_v_15552_taps(this->slot("taps")),_v_15575_trim(this->slot("trim")),_v_15586_photo(this->slot("photo")),_v_15595_textured(this->slot("textured")),_v_15626_clearGround(this->slot("clearGround")),_v_15668_white(this->slot("white")),_v_15673_pick(this->slot("pick")),_v_15688_d2(this->slot("d2")),_v_15692_quantize(this->slot("quantize")),_v_15751_PAGE(this->slot("PAGE")),_v_15752_PAPER(this->slot("PAPER")),_v_15753_LIGHT(this->slot("LIGHT")),_v_15754_lum(this->slot("lum")),_v_15760_contrast(this->slot("contrast")),_v_15764_hsl(this->slot("hsl")),_v_15778_fromHsl(this->slot("fromHsl")),_v_15790_grey(this->slot("grey")),_v_15793_black(this->slot("black")),_v_15796_lift(this->slot("lift")),_v_15807_sink(this->slot("sink")),_v_15817_tint(this->slot("tint")),_v_15823_palette(this->slot("palette")),_v_15839_checkDrawing(this->slot("checkDrawing")),_v_15862_prepared(this->slot("prepared")),_v_15863_drawingOf(this->slot("drawingOf")),_v_15867_prepare(this->slot("prepare")),_v_15899_paint(this->slot("paint")),_v_15926_fromDrawing(this->slot("fromDrawing")),_v_15930_pieceOf(this->slot("pieceOf")),_v_15951_drawImage(this->slot("drawImage")),_v_15968_imagePalette(this->slot("imagePalette")),_v_15979_fromPixels(this->slot("fromPixels")),_v_15990_pixelsFromText(this->slot("pixelsFromText")),_v_16018_SVG_NS(this->slot("SVG_NS")),_v_16019_isMarkup(this->slot("isMarkup")),_v_16031_fromImage(this->slot("fromImage")),_v_16039_SOURCES(this->slot("SOURCES")),_v_16040_pixelsOf(this->slot("pixelsOf")),_v_16044_where(this->slot("where")),_v_16047_load(this->slot("load")),_v_16052_blob(this->slot("blob")),_v_16064_image(this->slot("image")),_v_16070_svg(this->slot("svg")),_v_16091_drawn(this->slot("drawn")),_v_16101_format(this->slot("format")),_v_16105_shrink(this->slot("shrink")),_v_16130_files(this->slot("files")),_v_16133_file(this->slot("file")),_v_16139_PNG(this->slot("PNG")),_v_16140_ADAM7(this->slot("ADAM7")),_v_16141_CHANNELS(this->slot("CHANNELS")),_v_16142_MOST_SIDE(this->slot("MOST_SIDE")),_v_16143_MOST_PIXELS(this->slot("MOST_PIXELS")),_v_16144_readPng(this->slot("readPng")),_v_16225_inflate(this->slot("inflate")),_literals{V(u"string"),
V(u"length"),
V(u"slice"),
V(u"stringify"),
V(u"object"),
V(u"function"),
V(u"a function"),
V(u"constructor"),
V(u"name"),
V(u"isArray"),
V(u"Object"),
V(u"an object"),
V(u"keys"),
V(u"includes"),
V(u""),
V(u"every"),
V(u"glint"),
V(u"number"),
V(u"isFinite"),
V(u"an image"),
V(u"width"),
V(u"height"),
V(u"rows"),
V(u"style"),
V(u"background"),
V(u"remove"),
V(u"color"),
V(u"ramp"),
V(u"invert"),
V(u"auto"),
V(u"image"),
V(u"note"),
V(u"category"),
V(u"logos"),
V(u"cols"),
V(u"logo"),
V(u"shade"),
V(u"pixels"),
V(u"keep"),
V(u"boolean"),
V(u"trim"),
V(u"test"),
V(u"fps"),
V(u"an image's pixels take a Uint8Array or Uint8ClampedArray of RGBA, 4 bytes a pixel, row by row, as ImageData.data holds them"),
V(u"isInteger"),
V(u"data"),
V(u"w"),
V(u"x"),
V(u"h"),
V(u"y"),
V(u"ground"),
V(u" "),
V(u"repeat"),
V(u"from"),
V(u"colors"),
V(u"art"),
V(u"ink"),
V(u"mono"),
V(u"knocked"),
V(u"min"),
V(u"max"),
V(u"at"),
V(u"get"),
V(u"set"),
V(u"some"),
V(u"fill"),
V(u"filter"),
V(u"sort"),
V(u"toString"),
V(u"push"),
V(u"add"),
V(u"size"),
V(u"map"),
V(u"forEach"),
V(u"█"),
V(u"▀"),
V(u"▄"),
V(u"opaque"),
V(u"plain"),
V(u"values"),
V(u"reduce"),
V(u"subarray"),
V(u"v"),
V(u"ch"),
V(u"splice"),
V(u"round"),
V(u"light"),
V(u"dark"),
V(u"a drawing's colors take 1 to 10 colours, each [r, g, b] of whole numbers 0 to 255"),
V(u"meta"),
V(u"drawing"),
V(u"replace"),
V(u"indexOf"),
V(u"charCodeAt"),
V(u"n"),
V(u"turned"),
V(u"hard"),
V(u"pos"),
V(u"lo"),
V(u"hi"),
V(u"index"),
V(u"has"),
V(u"paper"),
V(u"put"),
V(u"fromDrawing"),
V(u"shaded"),
V(u"drawn"),
V(u", glinting now and then"),
V(u"loop"),
V(u"palette"),
V(u"setup"),
V(u"assign"),
V(u"t"),
V(u"drawImage()"),
V(u"drawImage"),
V(u"imagePalette"),
V(u"imagePalette()'s colours"),
V(u"rgba"),
V(u"fromPixels"),
V(u"\n"),
V(u"split"),
V(u"shift"),
V(u"pop"),
V(u"trimStart"),
V(u"fromPixels takes rows of characters with at least one pixel in them"),
V(u"entries"),
V(u"."),
V(u"toLowerCase"),
V(u"<?xml"),
V(u">"),
V(u"<!--"),
V(u"-->"),
V(u"<!doctype"),
V(u"<svg"),
V(u"fromImage"),
V(u"check the address and the network"),
V(u"from another site, it must allow it (CORS); or pass a Blob or an <img>"),
V(u"ok"),
V(u"status"),
V(u"statusText"),
V(u"blob"),
V(u"type"),
V(u"image/svg+xml"),
V(u"arrayBuffer"),
V(u"text"),
V(u"this is not a PNG, nor any image it knows"),
V(u"fromImage() could not read that image: try an svg, png, jpg, webp or gif"),
V(u"close"),
V(u"complete"),
V(u"naturalWidth"),
V(u"decode"),
V(u"currentSrc"),
V(u"src"),
V(u"naturalHeight"),
V(u"undefined"),
V(u"fromImage() draws SVG on a page, so not in Node or a worker: pass a PNG of it instead (sharp makes one), or draw it on a page"),
V(u"parseFromString"),
V(u"documentElement"),
V(u"parsererror"),
V(u"getElementsByTagName"),
V(u"localName"),
V(u"svg"),
V(u"namespaceURI"),
V(u"fromImage() could not read that svg"),
V(u"viewBox"),
V(u"getAttribute"),
V(u"that svg has no size: give it a viewBox"),
V(u"join"),
V(u"setAttribute"),
V(u"serializeToString"),
V(u"createObjectURL"),
V(u"revokeObjectURL"),
V(u"onload"),
V(u"onerror"),
V(u"ascii.rest: fromImage() could not draw that svg"),
V(u"fromImage() was given an image with no pixels: wait for it to load, or check it has a size"),
V(u"canvas"),
V(u"createElement"),
V(u"fromImage() needs a canvas, an OffscreenCanvas or a page's, to read an image's pixels"),
V(u"2d"),
V(u"willReadFrequently"),
V(u"getContext"),
V(u"fromImage() could not get a 2d canvas to read the image's pixels"),
V(u"imageSmoothingEnabled"),
V(u"imageSmoothingQuality"),
V(u"high"),
V(u"getImageData"),
V(u"fromImage() could not read that image's pixels: it comes from another site that doesn't allow it (CORS). Serve it from your own, or pass a Blob"),
V(u"fromCharCode"),
V(u"a JPEG"),
V(u"GIF8"),
V(u"startsWith"),
V(u"a GIF"),
V(u"RIFF"),
V(u"WEBP"),
V(u"a WebP"),
V(u"an AVIF"),
V(u"BM"),
V(u"a BMP"),
V(u"readFile"),
V(u"code"),
V(u"ENOENT"),
V(u"there is no such file"),
V(u"message"),
V(u"readPng() takes a PNG file's bytes, as a Uint8Array (a Buffer is one) or an ArrayBuffer"),
V(u"it is not a PNG"),
V(u"buffer"),
V(u"byteOffset"),
V(u"byteLength"),
V(u"getUint32"),
V(u"it is cut short"),
V(u"IHDR"),
V(u"PLTE"),
V(u"tRNS"),
V(u"IDAT"),
V(u"IEND"),
V(u"it has no size"),
V(u"it has a palette's indices but no palette"),
V(u"it has no image data"),
V(u"its image data is cut short"),
V(u".:-=+*#%@"),
V(u"8dbqpPYOo0"),
V(u"colour"),
V(u"colours"),
V(u"columns"),
V(u"http://www.w3.org/2000/svg"),
V(u"a URL, a path, SVG markup, a file's bytes, a Blob, an <img>, an ImageBitmap or a canvas"),
V(u"process"),
V(u"getBuiltinModule"),
V(u"node:fs/promises")}{
this->exports["drawing"]=this->_v_15338_drawing;
this->exports["fromDrawing"]=this->_v_15926_fromDrawing;
this->exports["drawImage"]=this->_v_15951_drawImage;
this->exports["imagePalette"]=this->_v_15968_imagePalette;
this->exports["fromPixels"]=this->_v_15979_fromPixels;
this->exports["fromImage"]=this->_v_16031_fromImage;
this->exports["readPng"]=this->_v_16144_readPng;
}
void init() override{if(initialized)return;initialized=true;
this->_v_15298_shown.get()=j::function([=](const j::Args &_args_fn15299,const V &_receiver_fn15299,const V &_self_fn15299) mutable ->V{
V _v_15300_v;
_v_15300_v=_args_fn15299[0];
{
V _v_15301_name;
if(j::truth(([&]()->V{V _lhs16240=j::unary("typeof",_v_15300_v);V _rhs16241=this->_literals[0];return V(j::equal(_lhs16240,_rhs16241,true));})())){return ([&]()->V{V _receiver16248=j::builtin("JSON");V _method16249=this->_literals[3];V _method=j::get(_receiver16248,_method16249);j::Args _params16250=j::Args{(j::truth(([&]()->V{V _lhs16242=j::get(_v_15300_v,this->_literals[1]);V _rhs16243=V(40.0);return j::binary(">",_lhs16242,_rhs16243);})())?([&]()->V{std::u16string _text16244;_text16244+=u"";_text16244+=j::string(([&]()->V{V _receiver16245=_v_15300_v;V _method16246=this->_literals[2];V _method=j::get(_receiver16245,_method16246);j::Args _params16247=j::Args{V(0.0),V(40.0)};return j::call(_method,_params16247,_receiver16245);})());_text16244+=u"...";return V(std::move(_text16244));})():_v_15300_v)};return j::call(_method,_params16250,_receiver16248);})();
}
if(j::truth(([&]()->V{V _logical16251=([&]()->V{V _lhs16252=_v_15300_v;V _rhs16253=V::null();return V(j::equal(_lhs16252,_rhs16253,true));})();return !j::truth(_logical16251)?([&]()->V{V _lhs16254=j::unary("typeof",_v_15300_v);V _rhs16255=this->_literals[4];return V(!j::equal(_lhs16254,_rhs16255,true));})():_logical16251;})())){return (j::truth(([&]()->V{V _lhs16256=j::unary("typeof",_v_15300_v);V _rhs16257=this->_literals[5];return V(j::equal(_lhs16256,_rhs16257,true));})())?this->_literals[6]:([&]()->V{V _callee16258=j::builtin("String");return j::call(_callee16258,j::Args{_v_15300_v});})());
}
_v_15301_name=([&]()->V{V _chain16259=_v_15300_v;V _chain16260=j::get(_chain16259,this->_literals[7]);if(j::nullish(_chain16260))return V{};V _chain16261=j::get(_chain16260,this->_literals[8]);return _chain16261;})();
return (j::truth(([&]()->V{V _receiver16262=j::builtin("Array");V _method16263=this->_literals[9];V _method=j::get(_receiver16262,_method16263);j::Args _params16264=j::Args{_v_15300_v};return j::call(_method,_params16264,_receiver16262);})())?([&]()->V{std::u16string _text16265;_text16265+=u"an array of ";_text16265+=j::string(j::get(_v_15300_v,this->_literals[1]));_text16265+=u"";return V(std::move(_text16265));})():(j::truth(([&]()->V{V _logical16266=_v_15301_name;return j::truth(_logical16266)?([&]()->V{V _lhs16267=_v_15301_name;V _rhs16268=this->_literals[10];return V(!j::equal(_lhs16267,_rhs16268,true));})():_logical16266;})())?([&]()->V{std::u16string _text16269;_text16269+=u"a ";_text16269+=j::string(_v_15301_name);_text16269+=u"";return V(std::move(_text16269));})():this->_literals[11]));

}

return V{};
},1);
this->_v_15303_known.get()=j::function([=](const j::Args &_args_fn15304,const V &_receiver_fn15304,const V &_self_fn15304) mutable ->V{
V _v_15305_o;
V _v_15306_keys;
V _v_15307_what;
_v_15305_o=_args_fn15304[0];
_v_15306_keys=_args_fn15304[1];
_v_15307_what=_args_fn15304[2];
{
{for(const auto &_item16270:j::elements(([&]()->V{V _receiver16271=j::builtin("Object");V _method16272=this->_literals[12];V _method=j::get(_receiver16271,_method16272);j::Args _params16273=j::Args{_v_15305_o};return j::call(_method,_params16273,_receiver16271);})())){V _v_15308_k;
_v_15308_k=_item16270;
if(j::truth(j::unary("!",([&]()->V{V _receiver16274=_v_15306_keys;V _method16275=this->_literals[13];V _method=j::get(_receiver16274,_method16275);j::Args _params16276=j::Args{_v_15308_k};return j::call(_method,_params16276,_receiver16274);})()))){
V _v_15309_near;
_v_15309_near=(j::truth(([&]()->V{V _logical16277=j::get(this->_v_15302_NEAR_NAMES.get(),_v_15308_k);return j::truth(_logical16277)?([&]()->V{V _receiver16278=_v_15306_keys;V _method16279=this->_literals[13];V _method=j::get(_receiver16278,_method16279);j::Args _params16280=j::Args{j::get(this->_v_15302_NEAR_NAMES.get(),_v_15308_k)};return j::call(_method,_params16280,_receiver16278);})():_logical16277;})())?([&]()->V{std::u16string _text16281;_text16281+=u" (did you mean ";_text16281+=j::string(j::get(this->_v_15302_NEAR_NAMES.get(),_v_15308_k));_text16281+=u"?)";return V(std::move(_text16281));})():this->_literals[14]);
(void)(([&]()->V{V _callee16287=this->_v_15268_fail.get();return j::call(_callee16287,j::Args{([&]()->V{std::u16string _text16282;_text16282+=u"";_text16282+=j::string(_v_15307_what);_text16282+=u" has no option ";_text16282+=j::string(([&]()->V{V _receiver16283=j::builtin("JSON");V _method16284=this->_literals[3];V _method=j::get(_receiver16283,_method16284);j::Args _params16285=j::Args{_v_15308_k};return j::call(_method,_params16285,_receiver16283);})());_text16282+=u"";_text16282+=j::string(_v_15309_near);_text16282+=u": it takes ";_text16282+=j::string(([&]()->V{V _callee16286=this->_v_15264_and.get();return j::call(_callee16286,j::Args{_v_15306_keys});})());_text16282+=u"";return V(std::move(_text16282));})()});})());

}

}}

}

return V{};
},3);
this->_v_15311_glintEvery.get()=j::function([=](const j::Args &_args_fn15312,const V &_receiver_fn15312,const V &_self_fn15312) mutable ->V{
V _v_15313_glint;
_v_15313_glint=_args_fn15312[0];
{
V _v_15314_every;
if(j::truth(([&]()->V{V _logical16288=([&]()->V{V _lhs16289=_v_15313_glint;V _rhs16290=j::builtin("undefined");return V(j::equal(_lhs16289,_rhs16290,true));})();return !j::truth(_logical16288)?([&]()->V{V _lhs16291=_v_15313_glint;V _rhs16292=V(false);return V(j::equal(_lhs16291,_rhs16292,true));})():_logical16288;})())){return V(0.0);
}
if(j::truth(([&]()->V{V _lhs16293=_v_15313_glint;V _rhs16294=V(true);return V(j::equal(_lhs16293,_rhs16294,true));})())){return V(5.0);
}
if(j::truth(([&]()->V{V _logical16295=j::unary("!",_v_15313_glint);return !j::truth(_logical16295)?([&]()->V{V _lhs16296=j::unary("typeof",_v_15313_glint);V _rhs16297=this->_literals[4];return V(!j::equal(_lhs16296,_rhs16297,true));})():_logical16295;})())){(void)(([&]()->V{V _callee16300=this->_v_15268_fail.get();return j::call(_callee16300,j::Args{([&]()->V{std::u16string _text16298;_text16298+=u"glint takes true, false or { every: seconds }, not ";_text16298+=j::string(([&]()->V{V _callee16299=this->_v_15298_shown.get();return j::call(_callee16299,j::Args{_v_15313_glint});})());_text16298+=u"";return V(std::move(_text16298));})()});})());
}
(void)(([&]()->V{V _callee16302=this->_v_15303_known.get();return j::call(_callee16302,j::Args{_v_15313_glint,([&]()->V{j::Args _array16301;_array16301.push_back(this->_literals[15]);return j::array(std::move(_array16301));})(),this->_literals[16]});})());
_v_15314_every=([&]()->V{V _logical16303=j::get(_v_15313_glint,this->_literals[15]);return j::nullish(_logical16303)?V(5.0):_logical16303;})();
if(j::truth(([&]()->V{V _logical16304=([&]()->V{V _logical16305=([&]()->V{V _lhs16306=j::unary("typeof",_v_15314_every);V _rhs16307=this->_literals[17];return V(!j::equal(_lhs16306,_rhs16307,true));})();return !j::truth(_logical16305)?j::unary("!",([&]()->V{V _receiver16308=j::builtin("Number");V _method16309=this->_literals[18];V _method=j::get(_receiver16308,_method16309);j::Args _params16310=j::Args{_v_15314_every};return j::call(_method,_params16310,_receiver16308);})()):_logical16305;})();return !j::truth(_logical16304)?([&]()->V{V _lhs16311=_v_15314_every;V _rhs16312=([&]()->V{V _lhs16313=this->_v_15287_PASS.get();V _rhs16314=V(0.5);return j::binary("+",_lhs16313,_rhs16314);})();return j::binary("<",_lhs16311,_rhs16312);})():_logical16304;})())){(void)(([&]()->V{V _callee16319=this->_v_15268_fail.get();return j::call(_callee16319,j::Args{([&]()->V{std::u16string _text16315;_text16315+=u"glint.every takes a number of seconds of ";_text16315+=j::string(([&]()->V{V _lhs16316=this->_v_15287_PASS.get();V _rhs16317=V(0.5);return j::binary("+",_lhs16316,_rhs16317);})());_text16315+=u" or more (a glint takes ";_text16315+=j::string(this->_v_15287_PASS.get());_text16315+=u" to cross), not ";_text16315+=j::string(([&]()->V{V _callee16318=j::builtin("String");return j::call(_callee16318,j::Args{_v_15314_every});})());_text16315+=u"";return V(std::move(_text16315));})()});})());
}
return _v_15314_every;

}

return V{};
},1);
this->_v_15318_settings.get()=j::function([=](const j::Args &_args_fn15319,const V &_receiver_fn15319,const V &_self_fn15319) mutable ->V{
V _v_15320_o;
_v_15320_o=_args_fn15319[0];
{
V _v_15321_width;
V _v_15322_height;
V _v_15323_style;
V _v_15324_background;
V _v_15325_color;
V _v_15326_glint;
V _v_15327_ramp;
V _v_15328_invert;
V _v_15329_name;
V _v_15330_note;
V _v_15331_category;
V _v_15332_every;
if(j::truth(([&]()->V{V _logical16320=([&]()->V{V _lhs16321=_v_15320_o;V _rhs16322=j::builtin("undefined");return V(j::equal(_lhs16321,_rhs16322,true));})();return !j::truth(_logical16320)?([&]()->V{V _lhs16323=_v_15320_o;V _rhs16324=V::null();return V(j::equal(_lhs16323,_rhs16324,true));})():_logical16320;})())){(void)((_v_15320_o=([&]()->V{V _obj16326=j::object();return _obj16326;})()));
}
if(j::truth(([&]()->V{V _logical16327=([&]()->V{V _lhs16328=j::unary("typeof",_v_15320_o);V _rhs16329=this->_literals[4];return V(!j::equal(_lhs16328,_rhs16329,true));})();return !j::truth(_logical16327)?([&]()->V{V _receiver16330=j::builtin("Array");V _method16331=this->_literals[9];V _method=j::get(_receiver16330,_method16331);j::Args _params16332=j::Args{_v_15320_o};return j::call(_method,_params16332,_receiver16330);})():_logical16327;})())){(void)(([&]()->V{V _callee16335=this->_v_15268_fail.get();return j::call(_callee16335,j::Args{([&]()->V{std::u16string _text16333;_text16333+=u"an image takes an options object, such as { width: 48 }, not ";_text16333+=j::string(([&]()->V{V _callee16334=this->_v_15298_shown.get();return j::call(_callee16334,j::Args{_v_15320_o});})());_text16333+=u"";return V(std::move(_text16333));})()});})());
}
(void)(([&]()->V{V _callee16336=this->_v_15303_known.get();return j::call(_callee16336,j::Args{_v_15320_o,this->_v_15310_OPTIONS.get(),this->_literals[19]});})());
V _pattern16337=_v_15320_o;
V _default16338=j::get(_pattern16337,this->_literals[20]);if(_default16338.kind==V::Undefined||_default16338.kind==V::Hole)_default16338=V(48.0);
_v_15321_width=_default16338;
V _default16339=j::get(_pattern16337,this->_literals[21]);if(_default16339.kind==V::Undefined||_default16339.kind==V::Hole)_default16339=j::get(this->_v_15262_MAX.get(),this->_literals[22]);
_v_15322_height=_default16339;
_v_15323_style=j::get(_pattern16337,this->_literals[23]);
V _default16340=j::get(_pattern16337,this->_literals[24]);if(_default16340.kind==V::Undefined||_default16340.kind==V::Hole)_default16340=this->_literals[25];
_v_15324_background=_default16340;
V _default16341=j::get(_pattern16337,this->_literals[26]);if(_default16341.kind==V::Undefined||_default16341.kind==V::Hole)_default16341=V(true);
_v_15325_color=_default16341;
V _default16342=j::get(_pattern16337,this->_literals[16]);if(_default16342.kind==V::Undefined||_default16342.kind==V::Hole)_default16342=V(false);
_v_15326_glint=_default16342;
V _default16343=j::get(_pattern16337,this->_literals[27]);if(_default16343.kind==V::Undefined||_default16343.kind==V::Hole)_default16343=this->_v_15280_RAMP.get();
_v_15327_ramp=_default16343;
V _default16344=j::get(_pattern16337,this->_literals[28]);if(_default16344.kind==V::Undefined||_default16344.kind==V::Hole)_default16344=this->_literals[29];
_v_15328_invert=_default16344;
V _default16345=j::get(_pattern16337,this->_literals[8]);if(_default16345.kind==V::Undefined||_default16345.kind==V::Hole)_default16345=this->_literals[30];
_v_15329_name=_default16345;
_v_15330_note=j::get(_pattern16337,this->_literals[31]);
V _default16346=j::get(_pattern16337,this->_literals[32]);if(_default16346.kind==V::Undefined||_default16346.kind==V::Hole)_default16346=this->_literals[33];
_v_15331_category=_default16346;
if(j::truth(j::unary("!",([&]()->V{V _callee16347=this->_v_15292_whole.get();return j::call(_callee16347,j::Args{_v_15321_width,V(8.0),j::get(this->_v_15262_MAX.get(),this->_literals[34])});})()))){(void)(([&]()->V{V _callee16350=this->_v_15268_fail.get();return j::call(_callee16350,j::Args{([&]()->V{std::u16string _text16348;_text16348+=u"width takes a whole number of columns from 8 to ";_text16348+=j::string(j::get(this->_v_15262_MAX.get(),this->_literals[34]));_text16348+=u", not ";_text16348+=j::string(([&]()->V{V _callee16349=j::builtin("String");return j::call(_callee16349,j::Args{_v_15321_width});})());_text16348+=u"";return V(std::move(_text16348));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _callee16351=this->_v_15292_whole.get();return j::call(_callee16351,j::Args{_v_15322_height,V(3.0),j::get(this->_v_15262_MAX.get(),this->_literals[22])});})()))){(void)(([&]()->V{V _callee16354=this->_v_15268_fail.get();return j::call(_callee16354,j::Args{([&]()->V{std::u16string _text16352;_text16352+=u"height takes a whole number of rows from 3 to ";_text16352+=j::string(j::get(this->_v_15262_MAX.get(),this->_literals[22]));_text16352+=u", not ";_text16352+=j::string(([&]()->V{V _callee16353=j::builtin("String");return j::call(_callee16353,j::Args{_v_15322_height});})());_text16352+=u"";return V(std::move(_text16352));})()});})());
}
if(j::truth(([&]()->V{V _logical16355=([&]()->V{V _logical16356=([&]()->V{V _logical16357=([&]()->V{V _lhs16358=_v_15323_style;V _rhs16359=j::builtin("undefined");return V(!j::equal(_lhs16358,_rhs16359,true));})();return j::truth(_logical16357)?([&]()->V{V _lhs16360=_v_15323_style;V _rhs16361=this->_literals[35];return V(!j::equal(_lhs16360,_rhs16361,true));})():_logical16357;})();return j::truth(_logical16356)?([&]()->V{V _lhs16362=_v_15323_style;V _rhs16363=this->_literals[36];return V(!j::equal(_lhs16362,_rhs16363,true));})():_logical16356;})();return j::truth(_logical16355)?([&]()->V{V _lhs16364=_v_15323_style;V _rhs16365=this->_literals[37];return V(!j::equal(_lhs16364,_rhs16365,true));})():_logical16355;})())){(void)(([&]()->V{V _callee16370=this->_v_15268_fail.get();return j::call(_callee16370,j::Args{([&]()->V{std::u16string _text16366;_text16366+=u"style takes \"logo\", \"shade\" or \"pixels\", not ";_text16366+=j::string(([&]()->V{V _receiver16367=j::builtin("JSON");V _method16368=this->_literals[3];V _method=j::get(_receiver16367,_method16368);j::Args _params16369=j::Args{_v_15323_style};return j::call(_method,_params16369,_receiver16367);})());_text16366+=u"";return V(std::move(_text16366));})()});})());
}
if(j::truth(([&]()->V{V _logical16371=([&]()->V{V _lhs16372=_v_15324_background;V _rhs16373=this->_literals[25];return V(!j::equal(_lhs16372,_rhs16373,true));})();return j::truth(_logical16371)?([&]()->V{V _lhs16374=_v_15324_background;V _rhs16375=this->_literals[38];return V(!j::equal(_lhs16374,_rhs16375,true));})():_logical16371;})())){(void)(([&]()->V{V _callee16380=this->_v_15268_fail.get();return j::call(_callee16380,j::Args{([&]()->V{std::u16string _text16376;_text16376+=u"background takes \"remove\" or \"keep\", not ";_text16376+=j::string(([&]()->V{V _receiver16377=j::builtin("JSON");V _method16378=this->_literals[3];V _method=j::get(_receiver16377,_method16378);j::Args _params16379=j::Args{_v_15324_background};return j::call(_method,_params16379,_receiver16377);})());_text16376+=u"";return V(std::move(_text16376));})()});})());
}
if(j::truth(([&]()->V{V _lhs16381=j::unary("typeof",_v_15325_color);V _rhs16382=this->_literals[39];return V(!j::equal(_lhs16381,_rhs16382,true));})())){(void)(([&]()->V{V _callee16387=this->_v_15268_fail.get();return j::call(_callee16387,j::Args{([&]()->V{std::u16string _text16383;_text16383+=u"color takes true (the image's colours) or false (one ink), not ";_text16383+=j::string(([&]()->V{V _receiver16384=j::builtin("JSON");V _method16385=this->_literals[3];V _method=j::get(_receiver16384,_method16385);j::Args _params16386=j::Args{_v_15325_color};return j::call(_method,_params16386,_receiver16384);})());_text16383+=u"";return V(std::move(_text16383));})()});})());
}
_v_15332_every=([&]()->V{V _callee16388=this->_v_15311_glintEvery.get();return j::call(_callee16388,j::Args{_v_15326_glint});})();
(void)(([&]()->V{V _callee16389=this->_v_15315_checkInvert.get();return j::call(_callee16389,j::Args{_v_15328_invert});})());
if(j::truth(([&]()->V{V _logical16390=([&]()->V{V _logical16391=([&]()->V{V _lhs16392=j::unary("typeof",_v_15329_name);V _rhs16393=this->_literals[0];return V(!j::equal(_lhs16392,_rhs16393,true));})();return !j::truth(_logical16391)?j::unary("!",([&]()->V{V _receiver16394=_v_15329_name;V _method16395=this->_literals[40];V _method=j::get(_receiver16394,_method16395);j::Args _params16396=j::Args{};return j::call(_method,_params16396,_receiver16394);})()):_logical16391;})();return !j::truth(_logical16390)?([&]()->V{V _receiver16397=this->_v_15297_CONTROL.get();V _method16398=this->_literals[41];V _method=j::get(_receiver16397,_method16398);j::Args _params16399=j::Args{_v_15329_name};return j::call(_method,_params16399,_receiver16397);})():_logical16390;})())){(void)(([&]()->V{V _callee16404=this->_v_15268_fail.get();return j::call(_callee16404,j::Args{([&]()->V{std::u16string _text16400;_text16400+=u"name takes a line of text, such as \"my logo\", not ";_text16400+=j::string(([&]()->V{V _receiver16401=j::builtin("JSON");V _method16402=this->_literals[3];V _method=j::get(_receiver16401,_method16402);j::Args _params16403=j::Args{_v_15329_name};return j::call(_method,_params16403,_receiver16401);})());_text16400+=u"";return V(std::move(_text16400));})()});})());
}
if(j::truth(([&]()->V{V _logical16405=([&]()->V{V _lhs16406=_v_15330_note;V _rhs16407=j::builtin("undefined");return V(!j::equal(_lhs16406,_rhs16407,true));})();return j::truth(_logical16405)?([&]()->V{V _logical16408=([&]()->V{V _logical16409=([&]()->V{V _logical16410=([&]()->V{V _lhs16411=j::unary("typeof",_v_15330_note);V _rhs16412=this->_literals[0];return V(!j::equal(_lhs16411,_rhs16412,true));})();return !j::truth(_logical16410)?j::unary("!",_v_15330_note):_logical16410;})();return !j::truth(_logical16409)?([&]()->V{V _lhs16413=j::get(_v_15330_note,this->_literals[1]);V _rhs16414=V(72.0);return j::binary(">",_lhs16413,_rhs16414);})():_logical16409;})();return !j::truth(_logical16408)?([&]()->V{V _receiver16415=this->_v_15297_CONTROL.get();V _method16416=this->_literals[41];V _method=j::get(_receiver16415,_method16416);j::Args _params16417=j::Args{_v_15330_note};return j::call(_method,_params16417,_receiver16415);})():_logical16408;})():_logical16405;})())){(void)(([&]()->V{V _callee16422=this->_v_15268_fail.get();return j::call(_callee16422,j::Args{([&]()->V{std::u16string _text16418;_text16418+=u"note takes one line of 1 to 72 characters, not ";_text16418+=j::string(([&]()->V{V _receiver16419=j::builtin("JSON");V _method16420=this->_literals[3];V _method=j::get(_receiver16419,_method16420);j::Args _params16421=j::Args{_v_15330_note};return j::call(_method,_params16421,_receiver16419);})());_text16418+=u"";return V(std::move(_text16418));})()});})());
}
(void)(([&]()->V{V _callee16427=this->_v_15265_checkMeta.get();return j::call(_callee16427,j::Args{([&]()->V{V _obj16423=j::object();j::put(_obj16423,this->_literals[8],_v_15329_name);j::put(_obj16423,this->_literals[32],_v_15331_category);j::put(_obj16423,this->_literals[31],([&]()->V{V _receiver16424=_v_15329_name;V _method16425=this->_literals[2];V _method=j::get(_receiver16424,_method16425);j::Args _params16426=j::Args{V(0.0),V(72.0)};return j::call(_method,_params16426,_receiver16424);})());j::put(_obj16423,this->_literals[34],V(1.0));j::put(_obj16423,this->_literals[22],V(1.0));j::put(_obj16423,this->_literals[42],V(0.0));return _obj16423;})()});})());
return ([&]()->V{V _obj16428=j::object();j::put(_obj16428,this->_literals[20],_v_15321_width);j::put(_obj16428,this->_literals[21],_v_15322_height);j::put(_obj16428,this->_literals[23],_v_15323_style);j::put(_obj16428,this->_literals[38],([&]()->V{V _lhs16429=_v_15324_background;V _rhs16430=this->_literals[38];return V(j::equal(_lhs16429,_rhs16430,true));})());j::put(_obj16428,this->_literals[26],_v_15325_color);j::put(_obj16428,this->_literals[15],_v_15332_every);j::put(_obj16428,this->_literals[27],([&]()->V{V _callee16431=this->_v_15272_rampOf.get();return j::call(_callee16431,j::Args{_v_15327_ramp});})());j::put(_obj16428,this->_literals[28],_v_15328_invert);j::put(_obj16428,this->_literals[8],([&]()->V{V _receiver16432=_v_15329_name;V _method16433=this->_literals[40];V _method=j::get(_receiver16432,_method16433);j::Args _params16434=j::Args{};return j::call(_method,_params16434,_receiver16432);})());j::put(_obj16428,this->_literals[31],_v_15330_note);j::put(_obj16428,this->_literals[32],_v_15331_category);return _obj16428;})();

}

return V{};
},1);
this->_v_15333_checkPixels.get()=j::function([=](const j::Args &_args_fn15334,const V &_receiver_fn15334,const V &_self_fn15334) mutable ->V{
V _v_15335_rgba;
V _v_15336_width;
V _v_15337_height;
_v_15335_rgba=_args_fn15334[0];
_v_15336_width=_args_fn15334[1];
_v_15337_height=_args_fn15334[2];
{
if(j::truth(j::unary("!",([&]()->V{V _logical16435=([&]()->V{V _lhs16436=_v_15335_rgba;V _rhs16437=j::builtin("Uint8Array");return j::binary("instanceof",_lhs16436,_rhs16437);})();return !j::truth(_logical16435)?([&]()->V{V _lhs16438=_v_15335_rgba;V _rhs16439=j::builtin("Uint8ClampedArray");return j::binary("instanceof",_lhs16438,_rhs16439);})():_logical16435;})()))){(void)(([&]()->V{V _callee16440=this->_v_15268_fail.get();return j::call(_callee16440,j::Args{this->_literals[43]});})());
}
if(j::truth(([&]()->V{V _logical16441=([&]()->V{V _logical16442=([&]()->V{V _logical16443=j::unary("!",([&]()->V{V _receiver16444=j::builtin("Number");V _method16445=this->_literals[44];V _method=j::get(_receiver16444,_method16445);j::Args _params16446=j::Args{_v_15336_width};return j::call(_method,_params16446,_receiver16444);})());return !j::truth(_logical16443)?j::unary("!",([&]()->V{V _receiver16447=j::builtin("Number");V _method16448=this->_literals[44];V _method=j::get(_receiver16447,_method16448);j::Args _params16449=j::Args{_v_15337_height};return j::call(_method,_params16449,_receiver16447);})()):_logical16443;})();return !j::truth(_logical16442)?([&]()->V{V _lhs16450=_v_15336_width;V _rhs16451=V(1.0);return j::binary("<",_lhs16450,_rhs16451);})():_logical16442;})();return !j::truth(_logical16441)?([&]()->V{V _lhs16452=_v_15337_height;V _rhs16453=V(1.0);return j::binary("<",_lhs16452,_rhs16453);})():_logical16441;})())){(void)(([&]()->V{V _callee16457=this->_v_15268_fail.get();return j::call(_callee16457,j::Args{([&]()->V{std::u16string _text16454;_text16454+=u"an image takes a width and height in whole pixels of 1 or more, not ";_text16454+=j::string(([&]()->V{V _callee16455=j::builtin("String");return j::call(_callee16455,j::Args{_v_15336_width});})());_text16454+=u" by ";_text16454+=j::string(([&]()->V{V _callee16456=j::builtin("String");return j::call(_callee16456,j::Args{_v_15337_height});})());_text16454+=u"";return V(std::move(_text16454));})()});})());
}
if(j::truth(([&]()->V{V _lhs16458=j::get(_v_15335_rgba,this->_literals[1]);V _rhs16459=([&]()->V{V _lhs16460=([&]()->V{V _lhs16462=_v_15336_width;V _rhs16463=_v_15337_height;return V(j::number(_lhs16462)*j::number(_rhs16463));})();V _rhs16461=V(4.0);return V(j::number(_lhs16460)*j::number(_rhs16461));})();return j::binary("<",_lhs16458,_rhs16459);})())){(void)(([&]()->V{V _callee16469=this->_v_15268_fail.get();return j::call(_callee16469,j::Args{([&]()->V{std::u16string _text16464;_text16464+=u"an image of ";_text16464+=j::string(_v_15336_width);_text16464+=u" by ";_text16464+=j::string(_v_15337_height);_text16464+=u" pixels takes ";_text16464+=j::string(([&]()->V{V _lhs16465=([&]()->V{V _lhs16467=_v_15336_width;V _rhs16468=_v_15337_height;return V(j::number(_lhs16467)*j::number(_rhs16468));})();V _rhs16466=V(4.0);return V(j::number(_lhs16465)*j::number(_rhs16466));})());_text16464+=u" bytes of RGBA, 4 a pixel, not ";_text16464+=j::string(j::get(_v_15335_rgba,this->_literals[1]));_text16464+=u"";return V(std::move(_text16464));})()});})());
}

}

return V{};
},3);
this->_v_15338_drawing.get()=j::function([=](const j::Args &_args_fn15339,const V &_receiver_fn15339,const V &_self_fn15339) mutable ->V{
V _v_15340_rgba;
V _v_15341_width;
V _v_15342_height;
V _v_15343_o;
_v_15340_rgba=_args_fn15339[0];
_v_15341_width=_args_fn15339[1];
_v_15342_height=_args_fn15339[2];
_v_15343_o=_args_fn15339[3];
{
return ([&]()->V{V _callee16471=this->_v_15344_draw.get();return j::call(_callee16471,j::Args{_v_15340_rgba,_v_15341_width,_v_15342_height,([&]()->V{V _callee16470=this->_v_15318_settings.get();return j::call(_callee16470,j::Args{_v_15343_o});})()});})();

}

return V{};
},4);
this->_v_15344_draw.get()=j::function([=](const j::Args &_args_fn15345,const V &_receiver_fn15345,const V &_self_fn15345) mutable ->V{
V _v_15346_rgba;
V _v_15347_W;
V _v_15348_H;
V _v_15349_set;
_v_15346_rgba=_args_fn15345[0];
_v_15347_W=_args_fn15345[1];
_v_15348_H=_args_fn15345[2];
_v_15349_set=_args_fn15345[3];
{
V _v_15350_found;
V _v_15351_data;
V _v_15352_box;
V _v_15353_sprite;
V _v_15354_style;
V _v_15355_ground;
V _v_15360_cols;
V _v_15361_rows;
V _v_15362_iw;
V _v_15363_ih;
V _v_15364_k;
V _v_15365_dw;
V _v_15366_dh;
V _v_15367_ox;
V _v_15368_oy;
V _v_15369_SX;
V _v_15370_SY;
V _v_15371_tx;
V _v_15372_ty;
j::Cell _v_15373_A;
j::Cell _v_15374_R;
j::Cell _v_15375_G;
j::Cell _v_15376_B;
j::Cell _v_15390_red;
j::Cell _v_15393_green;
j::Cell _v_15396_blue;
j::Cell _v_15399_colors;
j::Cell _v_15400_near;
V _v_15401_nearest;
V _v_15413_knocked;
V _v_15418_n;
V _v_15419_per;
V _v_15420_best;
j::Cell _v_15421_cover;
j::Cell _v_15422_light;
V _v_15423_blocks;
V _v_15424_inked;
V _v_15425_votes;
V _v_15426_area;
j::Cell _v_15442_shades;
V _v_15443_lit;
j::Cell _v_15450_lo;
j::Cell _v_15451_hi;
V _v_15452_shade;
V _v_15455_art;
V _v_15456_ink;
V _v_15457_mono;
(void)(([&]()->V{V _callee16472=this->_v_15333_checkPixels.get();return j::call(_callee16472,j::Args{_v_15346_rgba,_v_15347_W,_v_15348_H});})());
_v_15350_found=([&]()->V{V _callee16473=this->_v_15626_clearGround.get();return j::call(_callee16473,j::Args{_v_15346_rgba,_v_15347_W,_v_15348_H,j::unary("!",j::get(_v_15349_set,this->_literals[38]))});})();
_v_15351_data=j::get(_v_15350_found,this->_literals[45]);
_v_15352_box=([&]()->V{V _callee16474=this->_v_15575_trim.get();return j::call(_callee16474,j::Args{_v_15351_data,_v_15347_W,_v_15348_H});})();
_v_15353_sprite=([&]()->V{V _logical16475=([&]()->V{V _logical16476=([&]()->V{V _logical16477=j::unary("!",j::unary("!",_v_15352_box));return j::truth(_logical16477)?([&]()->V{V _lhs16478=([&]()->V{V _lhs16480=V(2.0);V _rhs16481=j::get(_v_15352_box,this->_literals[46]);return V(j::number(_lhs16480)*j::number(_rhs16481));})();V _rhs16479=([&]()->V{V _lhs16482=j::get(_v_15349_set,this->_literals[20]);V _rhs16483=([&]()->V{V _lhs16484=V(2.0);V _rhs16485=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);return V(j::number(_lhs16484)*j::number(_rhs16485));})();return V(j::number(_lhs16482)-j::number(_rhs16483));})();return j::binary("<=",_lhs16478,_rhs16479);})():_logical16477;})();return j::truth(_logical16476)?([&]()->V{V _lhs16486=j::get(_v_15352_box,this->_literals[48]);V _rhs16487=([&]()->V{V _lhs16488=j::get(_v_15349_set,this->_literals[21]);V _rhs16489=([&]()->V{V _lhs16490=V(2.0);V _rhs16491=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);return V(j::number(_lhs16490)*j::number(_rhs16491));})();return V(j::number(_lhs16488)-j::number(_rhs16489));})();return j::binary("<=",_lhs16486,_rhs16487);})():_logical16476;})();return j::truth(_logical16475)?([&]()->V{V _callee16492=this->_v_15465_crisp.get();return j::call(_callee16492,j::Args{_v_15351_data,_v_15347_W,_v_15352_box});})():_logical16475;})();
_v_15354_style=([&]()->V{V _logical16493=j::get(_v_15349_set,this->_literals[23]);return j::nullish(_logical16493)?(j::truth(_v_15353_sprite)?this->_literals[37]:(j::truth(([&]()->V{V _logical16494=_v_15352_box;return j::truth(_logical16494)?([&]()->V{V _callee16495=this->_v_15586_photo.get();return j::call(_callee16495,j::Args{_v_15346_rgba,_v_15347_W,_v_15348_H,_v_15350_found,_v_15352_box});})():_logical16494;})())?this->_literals[36]:this->_literals[35])):_logical16493;})();
_v_15355_ground=([&]()->V{V _logical16496=j::get(_v_15350_found,this->_literals[50]);return j::nullish(_logical16496)?V::null():_logical16496;})();
if(j::truth(([&]()->V{V _logical16497=_v_15352_box;return j::truth(_logical16497)?([&]()->V{V _lhs16498=_v_15354_style;V _rhs16499=this->_literals[37];return V(j::equal(_lhs16498,_rhs16499,true));})():_logical16497;})())){return ([&]()->V{V _callee16500=this->_v_15475_pixelArt.get();return j::call(_callee16500,j::Args{_v_15351_data,_v_15347_W,_v_15352_box,_v_15349_set,_v_15355_ground});})();
}
if(j::truth(j::unary("!",_v_15352_box))){
j::Cell _v_15356_cols;
V _v_15357_rows;
V _v_15358_blank;
V _pattern16504=([&]()->V{V _callee16503=this->_v_15543_size.get();return j::call(_callee16503,j::Args{([&]()->V{V _lhs16501=_v_15347_W;V _rhs16502=_v_15348_H;return V(j::number(_lhs16501)/j::number(_rhs16502));})(),j::get(_v_15349_set,this->_literals[20]),j::get(_v_15349_set,this->_literals[21])});})();
_v_15356_cols.get()=j::get(_pattern16504,this->_literals[34]);
_v_15357_rows=j::get(_pattern16504,this->_literals[22]);
_v_15358_blank=([&]()->V{V _receiver16509=j::builtin("Array");V _method16510=this->_literals[53];V _method=j::get(_receiver16509,_method16510);j::Args _params16511=j::Args{([&]()->V{V _obj16505=j::object();j::put(_obj16505,this->_literals[1],_v_15357_rows);return _obj16505;})(),j::function([=](const j::Args &_args_fn15359,const V &_receiver_fn15359,const V &_self_fn15359) mutable ->V{
return ([&]()->V{V _receiver16506=this->_literals[51];V _method16507=this->_literals[52];V _method=j::get(_receiver16506,_method16507);j::Args _params16508=j::Args{_v_15356_cols.get()};return j::call(_method,_params16508,_receiver16506);})();
return V{};
},0)};return j::call(_method,_params16511,_receiver16509);})();
return ([&]()->V{V _obj16512=j::object();j::put(_obj16512,this->_literals[23],_v_15354_style);j::put(_obj16512,this->_literals[34],_v_15356_cols.get());j::put(_obj16512,this->_literals[22],_v_15357_rows);j::put(_obj16512,this->_literals[54],([&]()->V{j::Args _array16513;_array16513.push_back(([&]()->V{j::Args _array16514;_array16514.push_back(V(0.0));_array16514.push_back(V(0.0));_array16514.push_back(V(0.0));return j::array(std::move(_array16514));})());return j::array(std::move(_array16513));})());j::put(_obj16512,this->_literals[55],_v_15358_blank);j::put(_obj16512,this->_literals[56],([&]()->V{V _receiver16515=_v_15358_blank;V _method16516=this->_literals[2];V _method=j::get(_receiver16515,_method16516);j::Args _params16517=j::Args{};return j::call(_method,_params16517,_receiver16515);})());j::put(_obj16512,this->_literals[57],([&]()->V{V _receiver16518=_v_15358_blank;V _method16519=this->_literals[2];V _method=j::get(_receiver16518,_method16519);j::Args _params16520=j::Args{};return j::call(_method,_params16520,_receiver16518);})());j::put(_obj16512,this->_literals[58],V(false));j::put(_obj16512,this->_literals[50],_v_15355_ground);j::put(_obj16512,this->_literals[27],j::get(_v_15349_set,this->_literals[27]));return _obj16512;})();

}

V _pattern16524=([&]()->V{V _callee16523=this->_v_15543_size.get();return j::call(_callee16523,j::Args{([&]()->V{V _lhs16521=j::get(_v_15352_box,this->_literals[46]);V _rhs16522=j::get(_v_15352_box,this->_literals[48]);return V(j::number(_lhs16521)/j::number(_rhs16522));})(),j::get(_v_15349_set,this->_literals[20]),j::get(_v_15349_set,this->_literals[21])});})();
_v_15360_cols=j::get(_pattern16524,this->_literals[34]);
_v_15361_rows=j::get(_pattern16524,this->_literals[22]);
_v_15362_iw=([&]()->V{V _lhs16525=([&]()->V{V _lhs16527=_v_15360_cols;V _rhs16528=([&]()->V{V _lhs16529=V(2.0);V _rhs16530=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);return V(j::number(_lhs16529)*j::number(_rhs16530));})();return V(j::number(_lhs16527)-j::number(_rhs16528));})();V _rhs16526=this->_v_15274_CW.get();return V(j::number(_lhs16525)*j::number(_rhs16526));})();
_v_15363_ih=([&]()->V{V _lhs16531=([&]()->V{V _lhs16533=_v_15361_rows;V _rhs16534=([&]()->V{V _lhs16535=V(2.0);V _rhs16536=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);return V(j::number(_lhs16535)*j::number(_rhs16536));})();return V(j::number(_lhs16533)-j::number(_rhs16534));})();V _rhs16532=this->_v_15273_CH.get();return V(j::number(_lhs16531)*j::number(_rhs16532));})();
_v_15364_k=([&]()->V{V _receiver16543=j::builtin("Math");V _method16544=this->_literals[59];V _method=j::get(_receiver16543,_method16544);j::Args _params16545=j::Args{([&]()->V{V _lhs16537=_v_15362_iw;V _rhs16538=j::get(_v_15352_box,this->_literals[46]);return V(j::number(_lhs16537)/j::number(_rhs16538));})(),([&]()->V{V _lhs16539=_v_15363_ih;V _rhs16540=j::get(_v_15352_box,this->_literals[48]);return V(j::number(_lhs16539)/j::number(_rhs16540));})()};return j::call(_method,_params16545,_receiver16543);})();
_v_15365_dw=([&]()->V{V _receiver16553=j::builtin("Math");V _method16554=this->_literals[60];V _method=j::get(_receiver16553,_method16554);j::Args _params16555=j::Args{V(1.0),([&]()->V{V _number16548=([&]()->V{V _lhs16549=j::get(_v_15352_box,this->_literals[46]);V _rhs16550=_v_15364_k;return V(j::number(_lhs16549)*j::number(_rhs16550));})();return V(std::floor(j::number(_number16548)+.5));})()};return j::call(_method,_params16555,_receiver16553);})();
_v_15366_dh=([&]()->V{V _receiver16563=j::builtin("Math");V _method16564=this->_literals[60];V _method=j::get(_receiver16563,_method16564);j::Args _params16565=j::Args{V(1.0),([&]()->V{V _number16558=([&]()->V{V _lhs16559=j::get(_v_15352_box,this->_literals[48]);V _rhs16560=_v_15364_k;return V(j::number(_lhs16559)*j::number(_rhs16560));})();return V(std::floor(j::number(_number16558)+.5));})()};return j::call(_method,_params16565,_receiver16563);})();
_v_15367_ox=([&]()->V{V _lhs16566=([&]()->V{V _lhs16568=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);V _rhs16569=this->_v_15274_CW.get();return V(j::number(_lhs16568)*j::number(_rhs16569));})();V _rhs16567=([&]()->V{V _number16574=([&]()->V{V _lhs16575=([&]()->V{V _lhs16577=_v_15362_iw;V _rhs16578=_v_15365_dw;return V(j::number(_lhs16577)-j::number(_rhs16578));})();V _rhs16576=V(2.0);return V(j::number(_lhs16575)/j::number(_rhs16576));})();return V(std::floor(j::number(_number16574)));})();return j::binary("+",_lhs16566,_rhs16567);})();
_v_15368_oy=([&]()->V{V _lhs16579=([&]()->V{V _lhs16581=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);V _rhs16582=this->_v_15273_CH.get();return V(j::number(_lhs16581)*j::number(_rhs16582));})();V _rhs16580=([&]()->V{V _number16587=([&]()->V{V _lhs16588=([&]()->V{V _lhs16590=_v_15363_ih;V _rhs16591=_v_15366_dh;return V(j::number(_lhs16590)-j::number(_rhs16591));})();V _rhs16589=V(2.0);return V(j::number(_lhs16588)/j::number(_rhs16589));})();return V(std::floor(j::number(_number16587)));})();return j::binary("+",_lhs16579,_rhs16580);})();
_v_15369_SX=([&]()->V{V _lhs16592=([&]()->V{V _lhs16594=_v_15360_cols;V _rhs16595=this->_v_15277_GX.get();return V(j::number(_lhs16594)*j::number(_rhs16595));})();V _rhs16593=this->_v_15281_SUB.get();return V(j::number(_lhs16592)*j::number(_rhs16593));})();
_v_15370_SY=([&]()->V{V _lhs16596=([&]()->V{V _lhs16598=_v_15361_rows;V _rhs16599=this->_v_15278_GY.get();return V(j::number(_lhs16598)*j::number(_rhs16599));})();V _rhs16597=this->_v_15281_SUB.get();return V(j::number(_lhs16596)*j::number(_rhs16597));})();
_v_15371_tx=([&]()->V{V _callee16604=this->_v_15552_taps.get();return j::call(_callee16604,j::Args{_v_15369_SX,([&]()->V{V _lhs16600=this->_v_15274_CW.get();V _rhs16601=([&]()->V{V _lhs16602=this->_v_15277_GX.get();V _rhs16603=this->_v_15281_SUB.get();return V(j::number(_lhs16602)*j::number(_rhs16603));})();return V(j::number(_lhs16600)/j::number(_rhs16601));})(),_v_15367_ox,_v_15365_dw,j::get(_v_15352_box,this->_literals[46])});})();
_v_15372_ty=([&]()->V{V _callee16609=this->_v_15552_taps.get();return j::call(_callee16609,j::Args{_v_15370_SY,([&]()->V{V _lhs16605=this->_v_15273_CH.get();V _rhs16606=([&]()->V{V _lhs16607=this->_v_15278_GY.get();V _rhs16608=this->_v_15281_SUB.get();return V(j::number(_lhs16607)*j::number(_rhs16608));})();return V(j::number(_lhs16605)/j::number(_rhs16606));})(),_v_15368_oy,_v_15366_dh,j::get(_v_15352_box,this->_literals[48])});})();
_v_15373_A.get()=([&]()->V{V _callee16612=j::builtin("Float32Array");return j::construct(_callee16612,j::Args{([&]()->V{V _lhs16610=_v_15369_SX;V _rhs16611=_v_15370_SY;return V(j::number(_lhs16610)*j::number(_rhs16611));})()});})();
_v_15374_R.get()=([&]()->V{V _callee16615=j::builtin("Float32Array");return j::construct(_callee16615,j::Args{([&]()->V{V _lhs16613=_v_15369_SX;V _rhs16614=_v_15370_SY;return V(j::number(_lhs16613)*j::number(_rhs16614));})()});})();
_v_15375_G.get()=([&]()->V{V _callee16618=j::builtin("Float32Array");return j::construct(_callee16618,j::Args{([&]()->V{V _lhs16616=_v_15369_SX;V _rhs16617=_v_15370_SY;return V(j::number(_lhs16616)*j::number(_rhs16617));})()});})();
_v_15376_B.get()=([&]()->V{V _callee16621=j::builtin("Float32Array");return j::construct(_callee16621,j::Args{([&]()->V{V _lhs16619=_v_15369_SX;V _rhs16620=_v_15370_SY;return V(j::number(_lhs16619)*j::number(_rhs16620));})()});})();
{V _v_15377_j;
_v_15377_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs16622=_v_15377_j;V _rhs16623=_v_15370_SY;return j::binary("<",_lhs16622,_rhs16623);})());(void)(j::increment(_v_15377_j,1,false))){{V _v_15378_p;
_v_15378_p=j::get(j::get(_v_15372_ty,this->_literals[53]),_v_15377_j);
for(;j::truth(([&]()->V{V _lhs16624=_v_15378_p;V _rhs16625=j::get(j::get(_v_15372_ty,this->_literals[53]),([&]()->V{V _lhs16626=_v_15377_j;V _rhs16627=V(1.0);return j::binary("+",_lhs16626,_rhs16627);})());return j::binary("<",_lhs16624,_rhs16625);})());(void)(j::increment(_v_15378_p,1,false))){
V _v_15379_wy;
V _v_15380_row;
_v_15379_wy=([&]()->V{V _lhs16628=j::get(j::get(_v_15372_ty,this->_literals[46]),_v_15378_p);V _rhs16629=V(255.0);return V(j::number(_lhs16628)/j::number(_rhs16629));})();
_v_15380_row=([&]()->V{V _lhs16630=([&]()->V{V _lhs16632=([&]()->V{V _lhs16634=j::get(_v_15352_box,this->_literals[49]);V _rhs16635=j::get(j::get(_v_15372_ty,this->_literals[61]),_v_15378_p);return j::binary("+",_lhs16634,_rhs16635);})();V _rhs16633=_v_15347_W;return V(j::number(_lhs16632)*j::number(_rhs16633));})();V _rhs16631=j::get(_v_15352_box,this->_literals[47]);return j::binary("+",_lhs16630,_rhs16631);})();
{V _v_15381_i;
_v_15381_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs16636=_v_15381_i;V _rhs16637=_v_15369_SX;return j::binary("<",_lhs16636,_rhs16637);})());(void)(j::increment(_v_15381_i,1,false))){
V _v_15382_a;
V _v_15383_r;
V _v_15384_g;
V _v_15385_b;
V _v_15389_s;
_v_15382_a=V(0.0);
_v_15383_r=V(0.0);
_v_15384_g=V(0.0);
_v_15385_b=V(0.0);
{V _v_15386_q;
_v_15386_q=j::get(j::get(_v_15371_tx,this->_literals[53]),_v_15381_i);
for(;j::truth(([&]()->V{V _lhs16638=_v_15386_q;V _rhs16639=j::get(j::get(_v_15371_tx,this->_literals[53]),([&]()->V{V _lhs16640=_v_15381_i;V _rhs16641=V(1.0);return j::binary("+",_lhs16640,_rhs16641);})());return j::binary("<",_lhs16638,_rhs16639);})());(void)(j::increment(_v_15386_q,1,false))){
V _v_15387_o;
V _v_15388_al;
_v_15387_o=([&]()->V{V _lhs16642=([&]()->V{V _lhs16644=_v_15380_row;V _rhs16645=j::get(j::get(_v_15371_tx,this->_literals[61]),_v_15386_q);return j::binary("+",_lhs16644,_rhs16645);})();V _rhs16643=V(4.0);return V(j::number(_lhs16642)*j::number(_rhs16643));})();
_v_15388_al=([&]()->V{V _lhs16646=j::get(_v_15351_data,([&]()->V{V _lhs16648=_v_15387_o;V _rhs16649=V(3.0);return j::binary("+",_lhs16648,_rhs16649);})());V _rhs16647=j::get(j::get(_v_15371_tx,this->_literals[46]),_v_15386_q);return V(j::number(_lhs16646)*j::number(_rhs16647));})();
(void)((_v_15382_a=j::binary("+",_v_15382_a,_v_15388_al)));
(void)((_v_15383_r=j::binary("+",_v_15383_r,([&]()->V{V _lhs16652=_v_15388_al;V _rhs16653=j::get(_v_15351_data,_v_15387_o);return V(j::number(_lhs16652)*j::number(_rhs16653));})())));
(void)((_v_15384_g=j::binary("+",_v_15384_g,([&]()->V{V _lhs16655=_v_15388_al;V _rhs16656=j::get(_v_15351_data,([&]()->V{V _lhs16657=_v_15387_o;V _rhs16658=V(1.0);return j::binary("+",_lhs16657,_rhs16658);})());return V(j::number(_lhs16655)*j::number(_rhs16656));})())));
(void)((_v_15385_b=j::binary("+",_v_15385_b,([&]()->V{V _lhs16660=_v_15388_al;V _rhs16661=j::get(_v_15351_data,([&]()->V{V _lhs16662=_v_15387_o;V _rhs16663=V(2.0);return j::binary("+",_lhs16662,_rhs16663);})());return V(j::number(_lhs16660)*j::number(_rhs16661));})())));

}
}
if(j::truth(j::unary("!",_v_15382_a))){continue;
}
_v_15389_s=([&]()->V{V _lhs16664=([&]()->V{V _lhs16666=_v_15377_j;V _rhs16667=_v_15369_SX;return V(j::number(_lhs16666)*j::number(_rhs16667));})();V _rhs16665=_v_15381_i;return j::binary("+",_lhs16664,_rhs16665);})();
(void)(([&]()->V{V _base16669=_v_15373_A.get();V _key16670=_v_15389_s;V _assign16668=([&]()->V{V _lhs16671=_v_15382_a;V _rhs16672=_v_15379_wy;return V(j::number(_lhs16671)*j::number(_rhs16672));})();return j::update(_base16669,_key16670,"+",_assign16668);})());
(void)(([&]()->V{V _base16674=_v_15374_R.get();V _key16675=_v_15389_s;V _assign16673=([&]()->V{V _lhs16676=_v_15383_r;V _rhs16677=_v_15379_wy;return V(j::number(_lhs16676)*j::number(_rhs16677));})();return j::update(_base16674,_key16675,"+",_assign16673);})());
(void)(([&]()->V{V _base16679=_v_15375_G.get();V _key16680=_v_15389_s;V _assign16678=([&]()->V{V _lhs16681=_v_15384_g;V _rhs16682=_v_15379_wy;return V(j::number(_lhs16681)*j::number(_rhs16682));})();return j::update(_base16679,_key16680,"+",_assign16678);})());
(void)(([&]()->V{V _base16684=_v_15376_B.get();V _key16685=_v_15389_s;V _assign16683=([&]()->V{V _lhs16686=_v_15385_b;V _rhs16687=_v_15379_wy;return V(j::number(_lhs16686)*j::number(_rhs16687));})();return j::update(_base16684,_key16685,"+",_assign16683);})());

}
}

}
}
}}
_v_15390_red.get()=j::function([=](const j::Args &_args_fn15391,const V &_receiver_fn15391,const V &_self_fn15391) mutable ->V{
V _v_15392_s;
_v_15392_s=_args_fn15391[0];
return ([&]()->V{V _lhs16688=j::get(_v_15374_R.get(),_v_15392_s);V _rhs16689=j::get(_v_15373_A.get(),_v_15392_s);return V(j::number(_lhs16688)/j::number(_rhs16689));})();
return V{};
},1);
_v_15393_green.get()=j::function([=](const j::Args &_args_fn15394,const V &_receiver_fn15394,const V &_self_fn15394) mutable ->V{
V _v_15395_s;
_v_15395_s=_args_fn15394[0];
return ([&]()->V{V _lhs16690=j::get(_v_15375_G.get(),_v_15395_s);V _rhs16691=j::get(_v_15373_A.get(),_v_15395_s);return V(j::number(_lhs16690)/j::number(_rhs16691));})();
return V{};
},1);
_v_15396_blue.get()=j::function([=](const j::Args &_args_fn15397,const V &_receiver_fn15397,const V &_self_fn15397) mutable ->V{
V _v_15398_s;
_v_15398_s=_args_fn15397[0];
return ([&]()->V{V _lhs16692=j::get(_v_15376_B.get(),_v_15398_s);V _rhs16693=j::get(_v_15373_A.get(),_v_15398_s);return V(j::number(_lhs16692)/j::number(_rhs16693));})();
return V{};
},1);
_v_15399_colors.get()=([&]()->V{V _callee16694=this->_v_15692_quantize.get();return j::call(_callee16694,j::Args{_v_15351_data,_v_15347_W,_v_15352_box});})();
_v_15400_near.get()=([&]()->V{V _callee16695=j::builtin("Map");return j::construct(_callee16695,j::Args{});})();
_v_15401_nearest=j::function([=](const j::Args &_args_fn15402,const V &_receiver_fn15402,const V &_self_fn15402) mutable ->V{
V _v_15403_s;
_v_15403_s=_args_fn15402[0];
{
V _v_15404_r;
V _v_15405_g;
V _v_15406_b;
V _v_15407_key;
V _v_15408_q;
_v_15404_r=([&]()->V{V _number16697=([&]()->V{V _callee16698=_v_15390_red.get();return j::call(_callee16698,j::Args{_v_15403_s});})();return V(std::floor(j::number(_number16697)+.5));})();
_v_15405_g=([&]()->V{V _number16700=([&]()->V{V _callee16701=_v_15393_green.get();return j::call(_callee16701,j::Args{_v_15403_s});})();return V(std::floor(j::number(_number16700)+.5));})();
_v_15406_b=([&]()->V{V _number16703=([&]()->V{V _callee16704=_v_15396_blue.get();return j::call(_callee16704,j::Args{_v_15403_s});})();return V(std::floor(j::number(_number16703)+.5));})();
_v_15407_key=([&]()->V{V _lhs16705=([&]()->V{V _lhs16707=([&]()->V{V _lhs16709=_v_15404_r;V _rhs16710=V(16.0);return V(double(int32_t(j::u32(_lhs16709)<<(j::u32(_rhs16710)&31))));})();V _rhs16708=([&]()->V{V _lhs16711=_v_15405_g;V _rhs16712=V(8.0);return V(double(int32_t(j::u32(_lhs16711)<<(j::u32(_rhs16712)&31))));})();return V(int(j::i32(_lhs16707)|j::i32(_rhs16708)));})();V _rhs16706=_v_15406_b;return V(int(j::i32(_lhs16705)|j::i32(_rhs16706)));})();
_v_15408_q=([&]()->V{V _receiver16713=_v_15400_near.get();V _method16714=this->_literals[62];V _method=j::get(_receiver16713,_method16714);j::Args _params16715=j::Args{_v_15407_key};return j::call(_method,_params16715,_receiver16713);})();
if(j::truth(([&]()->V{V _lhs16716=_v_15408_q;V _rhs16717=j::builtin("undefined");return V(j::equal(_lhs16716,_rhs16717,true));})())){
V _v_15409_bd;
(void)((_v_15408_q=V(0.0)));
_v_15409_bd=j::builtin("Infinity");
{V _v_15410_j;
_v_15410_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs16719=_v_15410_j;V _rhs16720=j::get(_v_15399_colors.get(),this->_literals[1]);return j::binary("<",_lhs16719,_rhs16720);})());(void)(j::increment(_v_15410_j,1,false))){
V _v_15411_c;
V _v_15412_d;
_v_15411_c=j::get(_v_15399_colors.get(),_v_15410_j);
_v_15412_d=([&]()->V{V _lhs16721=([&]()->V{V _lhs16723=([&]()->V{V _lhs16725=V(0.3);V _rhs16726=([&]()->V{V _lhs16727=([&]()->V{V _lhs16729=j::get(_v_15411_c,V(0.0));V _rhs16730=_v_15404_r;return V(j::number(_lhs16729)-j::number(_rhs16730));})();V _rhs16728=V(2.0);return V(std::pow(j::number(_lhs16727),j::number(_rhs16728)));})();return V(j::number(_lhs16725)*j::number(_rhs16726));})();V _rhs16724=([&]()->V{V _lhs16731=V(0.59);V _rhs16732=([&]()->V{V _lhs16733=([&]()->V{V _lhs16735=j::get(_v_15411_c,V(1.0));V _rhs16736=_v_15405_g;return V(j::number(_lhs16735)-j::number(_rhs16736));})();V _rhs16734=V(2.0);return V(std::pow(j::number(_lhs16733),j::number(_rhs16734)));})();return V(j::number(_lhs16731)*j::number(_rhs16732));})();return j::binary("+",_lhs16723,_rhs16724);})();V _rhs16722=([&]()->V{V _lhs16737=V(0.11);V _rhs16738=([&]()->V{V _lhs16739=([&]()->V{V _lhs16741=j::get(_v_15411_c,V(2.0));V _rhs16742=_v_15406_b;return V(j::number(_lhs16741)-j::number(_rhs16742));})();V _rhs16740=V(2.0);return V(std::pow(j::number(_lhs16739),j::number(_rhs16740)));})();return V(j::number(_lhs16737)*j::number(_rhs16738));})();return j::binary("+",_lhs16721,_rhs16722);})();
if(j::truth(([&]()->V{V _lhs16743=_v_15412_d;V _rhs16744=_v_15409_bd;return j::binary("<",_lhs16743,_rhs16744);})())){(void)(((_v_15409_bd=_v_15412_d),(_v_15408_q=_v_15410_j)));
}

}
}
(void)(([&]()->V{V _receiver16747=_v_15400_near.get();V _method16748=this->_literals[63];V _method=j::get(_receiver16747,_method16748);j::Args _params16749=j::Args{_v_15407_key,_v_15408_q};return j::call(_method,_params16749,_receiver16747);})());

}

return _v_15408_q;

}

return V{};
},1);
_v_15413_knocked=([&]()->V{V _logical16750=([&]()->V{V _logical16751=([&]()->V{V _lhs16752=_v_15354_style;V _rhs16753=this->_literals[35];return V(j::equal(_lhs16752,_rhs16753,true));})();return j::truth(_logical16751)?([&]()->V{V _receiver16756=_v_15399_colors.get();V _method16757=this->_literals[64];V _method=j::get(_receiver16756,_method16757);j::Args _params16758=j::Args{j::function([=](const j::Args &_args_fn15414,const V &_receiver_fn15414,const V &_self_fn15414) mutable ->V{
V _v_15415_c;
_v_15415_c=_args_fn15414[0];
return ([&]()->V{V _callee16755=this->_v_15668_white.get();return j::call(_callee16755,([&](){j::Args _args16754;for(const auto &_v:j::elements(_v_15415_c))_args16754.push_back(_v);return _args16754;})());})();
return V{};
},1)};return j::call(_method,_params16758,_receiver16756);})():_logical16751;})();return j::truth(_logical16750)?j::unary("!",([&]()->V{V _receiver16761=_v_15399_colors.get();V _method16762=this->_literals[15];V _method=j::get(_receiver16761,_method16762);j::Args _params16763=j::Args{j::function([=](const j::Args &_args_fn15416,const V &_receiver_fn15416,const V &_self_fn15416) mutable ->V{
V _v_15417_c;
_v_15417_c=_args_fn15416[0];
return ([&]()->V{V _callee16760=this->_v_15668_white.get();return j::call(_callee16760,([&](){j::Args _args16759;for(const auto &_v:j::elements(_v_15417_c))_args16759.push_back(_v);return _args16759;})());})();
return V{};
},1)};return j::call(_method,_params16763,_receiver16761);})()):_logical16750;})();
_v_15418_n=([&]()->V{V _lhs16764=_v_15360_cols;V _rhs16765=_v_15361_rows;return V(j::number(_lhs16764)*j::number(_rhs16765));})();
_v_15419_per=([&]()->V{V _lhs16766=this->_v_15277_GX.get();V _rhs16767=this->_v_15278_GY.get();return V(j::number(_lhs16766)*j::number(_rhs16767));})();
_v_15420_best=([&]()->V{V _callee16768=j::builtin("Uint8Array");return j::construct(_callee16768,j::Args{_v_15418_n});})();
_v_15421_cover.get()=([&]()->V{V _callee16769=j::builtin("Float32Array");return j::construct(_callee16769,j::Args{_v_15418_n});})();
_v_15422_light.get()=([&]()->V{V _callee16770=j::builtin("Float32Array");return j::construct(_callee16770,j::Args{_v_15418_n});})();
_v_15423_blocks=([&]()->V{V _callee16773=j::builtin("Float32Array");return j::construct(_callee16773,j::Args{([&]()->V{V _lhs16771=_v_15418_n;V _rhs16772=_v_15419_per;return V(j::number(_lhs16771)*j::number(_rhs16772));})()});})();
_v_15424_inked=([&]()->V{V _callee16776=j::builtin("Float32Array");return j::construct(_callee16776,j::Args{([&]()->V{V _lhs16774=_v_15418_n;V _rhs16775=_v_15419_per;return V(j::number(_lhs16774)*j::number(_rhs16775));})()});})();
_v_15425_votes=([&]()->V{V _callee16777=j::builtin("Uint32Array");return j::construct(_callee16777,j::Args{j::get(_v_15399_colors.get(),this->_literals[1])});})();
_v_15426_area=([&]()->V{V _lhs16778=this->_v_15281_SUB.get();V _rhs16779=this->_v_15281_SUB.get();return V(j::number(_lhs16778)*j::number(_rhs16779));})();
{V _v_15427_y;
_v_15427_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs16780=_v_15427_y;V _rhs16781=_v_15361_rows;return j::binary("<",_lhs16780,_rhs16781);})());(void)(j::increment(_v_15427_y,1,false))){{V _v_15428_x;
_v_15428_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs16782=_v_15428_x;V _rhs16783=_v_15360_cols;return j::binary("<",_lhs16782,_rhs16783);})());(void)(j::increment(_v_15428_x,1,false))){
V _v_15429_c;
V _v_15430_sa;
V _v_15431_sl;
V _v_15440_b;
_v_15429_c=([&]()->V{V _lhs16784=([&]()->V{V _lhs16786=_v_15427_y;V _rhs16787=_v_15360_cols;return V(j::number(_lhs16786)*j::number(_rhs16787));})();V _rhs16785=_v_15428_x;return j::binary("+",_lhs16784,_rhs16785);})();
(void)(([&]()->V{V _receiver16788=_v_15425_votes;V _method16789=this->_literals[65];V _method=j::get(_receiver16788,_method16789);j::Args _params16790=j::Args{V(0.0)};return j::call(_method,_params16790,_receiver16788);})());
_v_15430_sa=V(0.0);
_v_15431_sl=V(0.0);
{V _v_15432_by;
_v_15432_by=V(0.0);
for(;j::truth(([&]()->V{V _lhs16791=_v_15432_by;V _rhs16792=this->_v_15278_GY.get();return j::binary("<",_lhs16791,_rhs16792);})());(void)(j::increment(_v_15432_by,1,false))){{V _v_15433_bx;
_v_15433_bx=V(0.0);
for(;j::truth(([&]()->V{V _lhs16793=_v_15433_bx;V _rhs16794=this->_v_15277_GX.get();return j::binary("<",_lhs16793,_rhs16794);})());(void)(j::increment(_v_15433_bx,1,false))){
V _v_15434_v;
V _v_15435_w;
_v_15434_v=V(0.0);
_v_15435_w=V(0.0);
{V _v_15436_sy;
_v_15436_sy=V(0.0);
for(;j::truth(([&]()->V{V _lhs16795=_v_15436_sy;V _rhs16796=this->_v_15281_SUB.get();return j::binary("<",_lhs16795,_rhs16796);})());(void)(j::increment(_v_15436_sy,1,false))){{V _v_15437_sx;
_v_15437_sx=V(0.0);
for(;j::truth(([&]()->V{V _lhs16797=_v_15437_sx;V _rhs16798=this->_v_15281_SUB.get();return j::binary("<",_lhs16797,_rhs16798);})());(void)(j::increment(_v_15437_sx,1,false))){
V _v_15438_s;
V _v_15439_a;
_v_15438_s=([&]()->V{V _lhs16799=([&]()->V{V _lhs16801=([&]()->V{V _lhs16803=([&]()->V{V _lhs16805=([&]()->V{V _lhs16807=([&]()->V{V _lhs16809=([&]()->V{V _lhs16811=_v_15427_y;V _rhs16812=this->_v_15278_GY.get();return V(j::number(_lhs16811)*j::number(_rhs16812));})();V _rhs16810=_v_15432_by;return j::binary("+",_lhs16809,_rhs16810);})();V _rhs16808=this->_v_15281_SUB.get();return V(j::number(_lhs16807)*j::number(_rhs16808));})();V _rhs16806=_v_15436_sy;return j::binary("+",_lhs16805,_rhs16806);})();V _rhs16804=_v_15369_SX;return V(j::number(_lhs16803)*j::number(_rhs16804));})();V _rhs16802=([&]()->V{V _lhs16813=([&]()->V{V _lhs16815=([&]()->V{V _lhs16817=_v_15428_x;V _rhs16818=this->_v_15277_GX.get();return V(j::number(_lhs16817)*j::number(_rhs16818));})();V _rhs16816=_v_15433_bx;return j::binary("+",_lhs16815,_rhs16816);})();V _rhs16814=this->_v_15281_SUB.get();return V(j::number(_lhs16813)*j::number(_rhs16814));})();return j::binary("+",_lhs16801,_rhs16802);})();V _rhs16800=_v_15437_sx;return j::binary("+",_lhs16799,_rhs16800);})();
_v_15439_a=j::get(_v_15373_A.get(),_v_15438_s);
if(j::truth(j::unary("!",_v_15439_a))){continue;
}
if(j::truth(([&]()->V{V _lhs16819=([&]()->V{V _lhs16821=_v_15439_a;V _rhs16822=V(255.0);return V(j::number(_lhs16821)*j::number(_rhs16822));})();V _rhs16820=V(128.0);return j::binary(">=",_lhs16819,_rhs16820);})())){(void)(j::increment(_v_15425_votes,([&]()->V{V _callee16823=_v_15401_nearest;return j::call(_callee16823,j::Args{_v_15438_s});})(),1,false));
}
(void)((_v_15430_sa=j::binary("+",_v_15430_sa,_v_15439_a)));
(void)((_v_15431_sl=j::binary("+",_v_15431_sl,([&]()->V{V _lhs16826=([&]()->V{V _lhs16828=([&]()->V{V _lhs16830=([&]()->V{V _lhs16832=V(0.2126);V _rhs16833=j::get(_v_15374_R.get(),_v_15438_s);return V(j::number(_lhs16832)*j::number(_rhs16833));})();V _rhs16831=([&]()->V{V _lhs16834=V(0.7152);V _rhs16835=j::get(_v_15375_G.get(),_v_15438_s);return V(j::number(_lhs16834)*j::number(_rhs16835));})();return j::binary("+",_lhs16830,_rhs16831);})();V _rhs16829=([&]()->V{V _lhs16836=V(0.0722);V _rhs16837=j::get(_v_15376_B.get(),_v_15438_s);return V(j::number(_lhs16836)*j::number(_rhs16837));})();return j::binary("+",_lhs16828,_rhs16829);})();V _rhs16827=V(255.0);return V(j::number(_lhs16826)/j::number(_rhs16827));})())));
(void)((_v_15434_v=j::binary("+",_v_15434_v,_v_15439_a)));
if(j::truth(j::unary("!",([&]()->V{V _logical16839=_v_15413_knocked;return j::truth(_logical16839)?([&]()->V{V _callee16843=this->_v_15668_white.get();return j::call(_callee16843,j::Args{([&]()->V{V _callee16840=_v_15390_red.get();return j::call(_callee16840,j::Args{_v_15438_s});})(),([&]()->V{V _callee16841=_v_15393_green.get();return j::call(_callee16841,j::Args{_v_15438_s});})(),([&]()->V{V _callee16842=_v_15396_blue.get();return j::call(_callee16842,j::Args{_v_15438_s});})()});})():_logical16839;})()))){(void)((_v_15435_w=j::binary("+",_v_15435_w,_v_15439_a)));
}

}
}
}}
(void)(([&]()->V{V _base16846=_v_15423_blocks;V _key16847=([&]()->V{V _lhs16848=([&]()->V{V _lhs16850=([&]()->V{V _lhs16852=_v_15429_c;V _rhs16853=_v_15419_per;return V(j::number(_lhs16852)*j::number(_rhs16853));})();V _rhs16851=([&]()->V{V _lhs16854=_v_15432_by;V _rhs16855=this->_v_15277_GX.get();return V(j::number(_lhs16854)*j::number(_rhs16855));})();return j::binary("+",_lhs16850,_rhs16851);})();V _rhs16849=_v_15433_bx;return j::binary("+",_lhs16848,_rhs16849);})();V _assign16845=([&]()->V{V _lhs16856=_v_15434_v;V _rhs16857=_v_15426_area;return V(j::number(_lhs16856)/j::number(_rhs16857));})();return j::put(_base16846,_key16847,_assign16845);})());
(void)(([&]()->V{V _base16859=_v_15424_inked;V _key16860=([&]()->V{V _lhs16861=([&]()->V{V _lhs16863=([&]()->V{V _lhs16865=_v_15429_c;V _rhs16866=_v_15419_per;return V(j::number(_lhs16865)*j::number(_rhs16866));})();V _rhs16864=([&]()->V{V _lhs16867=_v_15432_by;V _rhs16868=this->_v_15277_GX.get();return V(j::number(_lhs16867)*j::number(_rhs16868));})();return j::binary("+",_lhs16863,_rhs16864);})();V _rhs16862=_v_15433_bx;return j::binary("+",_lhs16861,_rhs16862);})();V _assign16858=([&]()->V{V _lhs16869=_v_15435_w;V _rhs16870=_v_15426_area;return V(j::number(_lhs16869)/j::number(_rhs16870));})();return j::put(_base16859,_key16860,_assign16858);})());

}
}
}}
_v_15440_b=V(0.0);
{V _v_15441_q;
_v_15441_q=V(1.0);
for(;j::truth(([&]()->V{V _lhs16871=_v_15441_q;V _rhs16872=j::get(_v_15425_votes,this->_literals[1]);return j::binary("<",_lhs16871,_rhs16872);})());(void)(j::increment(_v_15441_q,1,false))){if(j::truth(([&]()->V{V _lhs16873=j::get(_v_15425_votes,_v_15441_q);V _rhs16874=j::get(_v_15425_votes,_v_15440_b);return j::binary(">",_lhs16873,_rhs16874);})())){(void)((_v_15440_b=_v_15441_q));
}
}}
(void)(([&]()->V{V _base16877=_v_15420_best;V _key16878=_v_15429_c;V _assign16876=_v_15440_b;return j::put(_base16877,_key16878,_assign16876);})());
(void)(([&]()->V{V _base16880=_v_15421_cover.get();V _key16881=_v_15429_c;V _assign16879=([&]()->V{V _lhs16882=_v_15430_sa;V _rhs16883=([&]()->V{V _lhs16884=_v_15419_per;V _rhs16885=_v_15426_area;return V(j::number(_lhs16884)*j::number(_rhs16885));})();return V(j::number(_lhs16882)/j::number(_rhs16883));})();return j::put(_base16880,_key16881,_assign16879);})());
(void)(([&]()->V{V _base16887=_v_15422_light.get();V _key16888=_v_15429_c;V _assign16886=(j::truth(_v_15430_sa)?([&]()->V{V _lhs16889=_v_15431_sl;V _rhs16890=_v_15430_sa;return V(j::number(_lhs16889)/j::number(_rhs16890));})():V(0.0));return j::put(_base16887,_key16888,_assign16886);})());

}
}
}}
_v_15442_shades.get()=j::get(_v_15349_set,this->_literals[27]);
_v_15443_lit=([&]()->V{V _receiver16893=([&]()->V{V _receiver16898=([&]()->V{j::Args _array16901;for(const auto &_value:j::elements(_v_15422_light.get()))_array16901.push_back(_value);return j::array(std::move(_array16901));})();V _method16899=this->_literals[66];V _method=j::get(_receiver16898,_method16899);j::Args _params16900=j::Args{j::function([=](const j::Args &_args_fn15444,const V &_receiver_fn15444,const V &_self_fn15444) mutable ->V{
V _v_15445__;
V _v_15446_c;
_v_15445__=_args_fn15444[0];
_v_15446_c=_args_fn15444[1];
return ([&]()->V{V _lhs16896=j::get(_v_15421_cover.get(),_v_15446_c);V _rhs16897=V(0.1);return j::binary(">=",_lhs16896,_rhs16897);})();
return V{};
},2)};return j::call(_method,_params16900,_receiver16898);})();V _method16894=this->_literals[67];V _method=j::get(_receiver16893,_method16894);j::Args _params16895=j::Args{j::function([=](const j::Args &_args_fn15447,const V &_receiver_fn15447,const V &_self_fn15447) mutable ->V{
V _v_15448_a;
V _v_15449_b;
_v_15448_a=_args_fn15447[0];
_v_15449_b=_args_fn15447[1];
return ([&]()->V{V _lhs16891=_v_15448_a;V _rhs16892=_v_15449_b;return V(j::number(_lhs16891)-j::number(_rhs16892));})();
return V{};
},2)};return j::call(_method,_params16895,_receiver16893);})();
_v_15450_lo.get()=([&]()->V{V _logical16902=j::get(_v_15443_lit,([&]()->V{V _number16905=([&]()->V{V _lhs16906=j::get(_v_15443_lit,this->_literals[1]);V _rhs16907=V(0.02);return V(j::number(_lhs16906)*j::number(_rhs16907));})();return V(std::floor(j::number(_number16905)));})());return j::nullish(_logical16902)?V(0.0):_logical16902;})();
_v_15451_hi.get()=([&]()->V{V _logical16908=j::get(_v_15443_lit,([&]()->V{V _number16911=([&]()->V{V _lhs16912=j::get(_v_15443_lit,this->_literals[1]);V _rhs16913=V(0.98);return V(j::number(_lhs16912)*j::number(_rhs16913));})();return V(std::floor(j::number(_number16911)));})());return j::nullish(_logical16908)?V(1.0):_logical16908;})();
if(j::truth(([&]()->V{V _lhs16914=([&]()->V{V _lhs16916=_v_15451_hi.get();V _rhs16917=_v_15450_lo.get();return V(j::number(_lhs16916)-j::number(_rhs16917));})();V _rhs16915=V(0.02);return j::binary("<",_lhs16914,_rhs16915);})())){(void)(((_v_15450_lo.get()=V(0.0)),(_v_15451_hi.get()=V(1.0))));
}
_v_15452_shade=j::function([=](const j::Args &_args_fn15453,const V &_receiver_fn15453,const V &_self_fn15453) mutable ->V{
V _v_15454_c;
_v_15454_c=_args_fn15453[0];
return j::get(_v_15442_shades.get(),([&]()->V{V _receiver16956=j::builtin("Math");V _method16957=this->_literals[60];V _method=j::get(_receiver16956,_method16957);j::Args _params16958=j::Args{V(0.0),([&]()->V{V _receiver16951=j::builtin("Math");V _method16952=this->_literals[59];V _method=j::get(_receiver16951,_method16952);j::Args _params16953=j::Args{([&]()->V{V _lhs16920=j::get(_v_15442_shades.get(),this->_literals[1]);V _rhs16921=V(1.0);return V(j::number(_lhs16920)-j::number(_rhs16921));})(),([&]()->V{V _number16935=([&]()->V{V _lhs16936=([&]()->V{V _lhs16938=([&]()->V{V _lhs16940=j::get(_v_15422_light.get(),_v_15454_c);V _rhs16941=_v_15450_lo.get();return V(j::number(_lhs16940)-j::number(_rhs16941));})();V _rhs16939=([&]()->V{V _receiver16946=j::builtin("Math");V _method16947=this->_literals[60];V _method=j::get(_receiver16946,_method16947);j::Args _params16948=j::Args{V(0.000001),([&]()->V{V _lhs16942=_v_15451_hi.get();V _rhs16943=_v_15450_lo.get();return V(j::number(_lhs16942)-j::number(_rhs16943));})()};return j::call(_method,_params16948,_receiver16946);})();return V(j::number(_lhs16938)/j::number(_rhs16939));})();V _rhs16937=j::get(_v_15442_shades.get(),this->_literals[1]);return V(j::number(_lhs16936)*j::number(_rhs16937));})();return V(std::floor(j::number(_number16935)));})()};return j::call(_method,_params16953,_receiver16951);})()};return j::call(_method,_params16958,_receiver16956);})());
return V{};
},1);
_v_15455_art=([&]()->V{j::Args _array16959;return j::array(std::move(_array16959));})();
_v_15456_ink=([&]()->V{j::Args _array16960;return j::array(std::move(_array16960));})();
_v_15457_mono=([&]()->V{j::Args _array16961;return j::array(std::move(_array16961));})();
{V _v_15458_y;
_v_15458_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs16962=_v_15458_y;V _rhs16963=_v_15361_rows;return j::binary("<",_lhs16962,_rhs16963);})());(void)(j::increment(_v_15458_y,1,false))){
V _v_15459_a;
V _v_15460_i;
V _v_15461_m;
_v_15459_a=this->_literals[14];
_v_15460_i=this->_literals[14];
_v_15461_m=this->_literals[14];
{V _v_15462_x;
_v_15462_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs16964=_v_15462_x;V _rhs16965=_v_15360_cols;return j::binary("<",_lhs16964,_rhs16965);})());(void)(j::increment(_v_15462_x,1,false))){
V _v_15463_c;
V _v_15464_ch;
_v_15463_c=([&]()->V{V _lhs16966=([&]()->V{V _lhs16968=_v_15458_y;V _rhs16969=_v_15360_cols;return V(j::number(_lhs16968)*j::number(_rhs16969));})();V _rhs16967=_v_15462_x;return j::binary("+",_lhs16966,_rhs16967);})();
if(j::truth(([&]()->V{V _lhs16970=_v_15354_style;V _rhs16971=this->_literals[36];return V(j::equal(_lhs16970,_rhs16971,true));})())){
(void)((_v_15464_ch=(j::truth(([&]()->V{V _lhs16973=j::get(_v_15421_cover.get(),_v_15463_c);V _rhs16974=V(0.1);return j::binary("<",_lhs16973,_rhs16974);})())?this->_literals[51]:([&]()->V{V _callee16975=_v_15452_shade;return j::call(_callee16975,j::Args{_v_15463_c});})())));
(void)((_v_15461_m=j::binary("+",_v_15461_m,_v_15464_ch)));

}
else {
(void)((_v_15464_ch=([&]()->V{V _callee16980=this->_v_15673_pick.get();return j::call(_callee16980,j::Args{_v_15423_blocks,([&]()->V{V _lhs16978=_v_15463_c;V _rhs16979=_v_15419_per;return V(j::number(_lhs16978)*j::number(_rhs16979));})()});})()));
(void)((_v_15461_m=j::binary("+",_v_15461_m,(j::truth(_v_15413_knocked)?([&]()->V{V _callee16984=this->_v_15673_pick.get();return j::call(_callee16984,j::Args{_v_15424_inked,([&]()->V{V _lhs16982=_v_15463_c;V _rhs16983=_v_15419_per;return V(j::number(_lhs16982)*j::number(_rhs16983));})()});})():_v_15464_ch))));

}

(void)((_v_15459_a=j::binary("+",_v_15459_a,_v_15464_ch)));
(void)((_v_15460_i=j::binary("+",_v_15460_i,(j::truth((j::truth(([&]()->V{V _lhs16987=_v_15354_style;V _rhs16988=this->_literals[36];return V(j::equal(_lhs16987,_rhs16988,true));})())?([&]()->V{V _lhs16989=j::get(_v_15421_cover.get(),_v_15463_c);V _rhs16990=V(0.1);return j::binary("<",_lhs16989,_rhs16990);})():([&]()->V{V _lhs16991=_v_15464_ch;V _rhs16992=this->_literals[51];return V(j::equal(_lhs16991,_rhs16992,true));})()))?this->_literals[51]:([&]()->V{V _receiver16993=j::get(_v_15420_best,_v_15463_c);V _method16994=this->_literals[68];V _method=j::get(_receiver16993,_method16994);j::Args _params16995=j::Args{V(36.0)};return j::call(_method,_params16995,_receiver16993);})()))));

}
}
(void)(([&]()->V{V _receiver16996=_v_15455_art;V _method16997=this->_literals[69];V _method=j::get(_receiver16996,_method16997);j::Args _params16998=j::Args{_v_15459_a};return j::call(_method,_params16998,_receiver16996);})());
(void)(([&]()->V{V _receiver16999=_v_15456_ink;V _method17000=this->_literals[69];V _method=j::get(_receiver16999,_method17000);j::Args _params17001=j::Args{_v_15460_i};return j::call(_method,_params17001,_receiver16999);})());
(void)(([&]()->V{V _receiver17002=_v_15457_mono;V _method17003=this->_literals[69];V _method=j::get(_receiver17002,_method17003);j::Args _params17004=j::Args{_v_15461_m};return j::call(_method,_params17004,_receiver17002);})());

}
}
return ([&]()->V{V _obj17005=j::object();j::put(_obj17005,this->_literals[23],_v_15354_style);j::put(_obj17005,this->_literals[34],_v_15360_cols);j::put(_obj17005,this->_literals[22],_v_15361_rows);j::put(_obj17005,this->_literals[54],_v_15399_colors.get());j::put(_obj17005,this->_literals[55],_v_15455_art);j::put(_obj17005,this->_literals[56],_v_15456_ink);j::put(_obj17005,this->_literals[57],_v_15457_mono);j::put(_obj17005,this->_literals[58],_v_15413_knocked);j::put(_obj17005,this->_literals[50],_v_15355_ground);j::put(_obj17005,this->_literals[27],_v_15442_shades.get());return _obj17005;})();

}

return V{};
},4);
this->_v_15465_crisp.get()=j::function([=](const j::Args &_args_fn15466,const V &_receiver_fn15466,const V &_self_fn15466) mutable ->V{
V _v_15467_data;
V _v_15468_W;
V _v_15469_box;
_v_15467_data=_args_fn15466[0];
_v_15468_W=_args_fn15466[1];
_v_15469_box=_args_fn15466[2];
{
V _v_15470_seen;
_v_15470_seen=([&]()->V{V _callee17006=j::builtin("Set");return j::construct(_callee17006,j::Args{});})();
{V _v_15471_y;
_v_15471_y=j::get(_v_15469_box,this->_literals[49]);
for(;j::truth(([&]()->V{V _lhs17007=_v_15471_y;V _rhs17008=([&]()->V{V _lhs17009=j::get(_v_15469_box,this->_literals[49]);V _rhs17010=j::get(_v_15469_box,this->_literals[48]);return j::binary("+",_lhs17009,_rhs17010);})();return j::binary("<",_lhs17007,_rhs17008);})());(void)(j::increment(_v_15471_y,1,false))){{V _v_15472_x;
_v_15472_x=j::get(_v_15469_box,this->_literals[47]);
for(;j::truth(([&]()->V{V _lhs17011=_v_15472_x;V _rhs17012=([&]()->V{V _lhs17013=j::get(_v_15469_box,this->_literals[47]);V _rhs17014=j::get(_v_15469_box,this->_literals[46]);return j::binary("+",_lhs17013,_rhs17014);})();return j::binary("<",_lhs17011,_rhs17012);})());(void)(j::increment(_v_15472_x,1,false))){
V _v_15473_o;
V _v_15474_a;
_v_15473_o=([&]()->V{V _lhs17015=([&]()->V{V _lhs17017=([&]()->V{V _lhs17019=_v_15471_y;V _rhs17020=_v_15468_W;return V(j::number(_lhs17019)*j::number(_rhs17020));})();V _rhs17018=_v_15472_x;return j::binary("+",_lhs17017,_rhs17018);})();V _rhs17016=V(4.0);return V(j::number(_lhs17015)*j::number(_rhs17016));})();
_v_15474_a=j::get(_v_15467_data,([&]()->V{V _lhs17021=_v_15473_o;V _rhs17022=V(3.0);return j::binary("+",_lhs17021,_rhs17022);})());
if(j::truth(([&]()->V{V _logical17023=([&]()->V{V _lhs17024=_v_15474_a;V _rhs17025=V(0.0);return V(!j::equal(_lhs17024,_rhs17025,true));})();return j::truth(_logical17023)?([&]()->V{V _lhs17026=_v_15474_a;V _rhs17027=V(255.0);return V(!j::equal(_lhs17026,_rhs17027,true));})():_logical17023;})())){return V(false);
}
if(j::truth(([&]()->V{V _logical17028=_v_15474_a;return j::truth(_logical17028)?([&]()->V{V _lhs17029=j::get(([&]()->V{V _receiver17043=_v_15470_seen;V _method17044=this->_literals[70];V _method=j::get(_receiver17043,_method17044);j::Args _params17045=j::Args{([&]()->V{V _lhs17031=([&]()->V{V _lhs17033=([&]()->V{V _lhs17035=j::get(_v_15467_data,_v_15473_o);V _rhs17036=V(16.0);return V(double(int32_t(j::u32(_lhs17035)<<(j::u32(_rhs17036)&31))));})();V _rhs17034=([&]()->V{V _lhs17037=j::get(_v_15467_data,([&]()->V{V _lhs17039=_v_15473_o;V _rhs17040=V(1.0);return j::binary("+",_lhs17039,_rhs17040);})());V _rhs17038=V(8.0);return V(double(int32_t(j::u32(_lhs17037)<<(j::u32(_rhs17038)&31))));})();return V(int(j::i32(_lhs17033)|j::i32(_rhs17034)));})();V _rhs17032=j::get(_v_15467_data,([&]()->V{V _lhs17041=_v_15473_o;V _rhs17042=V(2.0);return j::binary("+",_lhs17041,_rhs17042);})());return V(int(j::i32(_lhs17031)|j::i32(_rhs17032)));})()};return j::call(_method,_params17045,_receiver17043);})(),this->_literals[71]);V _rhs17030=V(16.0);return j::binary(">",_lhs17029,_rhs17030);})():_logical17028;})())){return V(false);
}

}
}
}}
return V(true);

}

return V{};
},3);
this->_v_15475_pixelArt.get()=j::function([=](const j::Args &_args_fn15476,const V &_receiver_fn15476,const V &_self_fn15476) mutable ->V{
j::Cell _v_15477_data;
j::Cell _v_15478_W;
j::Cell _v_15479_box;
V _v_15480_set;
V _v_15481_ground;
_v_15477_data.get()=_args_fn15476[0];
_v_15478_W.get()=_args_fn15476[1];
_v_15479_box.get()=_args_fn15476[2];
_v_15480_set=_args_fn15476[3];
_v_15481_ground=_args_fn15476[4];
{
V _v_15482_roomC;
V _v_15483_roomR;
j::Cell _v_15484_up;
j::Cell _v_15485_down;
j::Cell _v_15486_w;
j::Cell _v_15487_h;
j::Cell _v_15488_from;
j::Cell _v_15492_opaque;
j::Cell _v_15496_key;
V _v_15501_counts;
V _v_15504_kept;
j::Cell _v_15510_colors;
j::Cell _v_15511_near;
j::Cell _v_15512_index;
V _v_15524_at;
V _v_15530_cols;
V _v_15531_rows;
V _v_15532_art;
V _v_15533_ink;
_v_15482_roomC=([&]()->V{V _receiver17052=j::builtin("Math");V _method17053=this->_literals[60];V _method=j::get(_receiver17052,_method17053);j::Args _params17054=j::Args{V(1.0),([&]()->V{V _lhs17046=j::get(_v_15480_set,this->_literals[20]);V _rhs17047=([&]()->V{V _lhs17048=V(2.0);V _rhs17049=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);return V(j::number(_lhs17048)*j::number(_rhs17049));})();return V(j::number(_lhs17046)-j::number(_rhs17047));})()};return j::call(_method,_params17054,_receiver17052);})();
_v_15483_roomR=([&]()->V{V _receiver17061=j::builtin("Math");V _method17062=this->_literals[60];V _method=j::get(_receiver17061,_method17062);j::Args _params17063=j::Args{V(1.0),([&]()->V{V _lhs17055=j::get(_v_15480_set,this->_literals[21]);V _rhs17056=([&]()->V{V _lhs17057=V(2.0);V _rhs17058=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);return V(j::number(_lhs17057)*j::number(_rhs17058));})();return V(j::number(_lhs17055)-j::number(_rhs17056));})()};return j::call(_method,_params17063,_receiver17061);})();
_v_15484_up.get()=([&]()->V{V _receiver17089=j::builtin("Math");V _method17090=this->_literals[60];V _method=j::get(_receiver17089,_method17090);j::Args _params17091=j::Args{V(1.0),([&]()->V{V _number17075=([&]()->V{V _receiver17084=j::builtin("Math");V _method17085=this->_literals[59];V _method=j::get(_receiver17084,_method17085);j::Args _params17086=j::Args{([&]()->V{V _lhs17076=_v_15482_roomC;V _rhs17077=j::get(_v_15479_box.get(),this->_literals[46]);return V(j::number(_lhs17076)/j::number(_rhs17077));})(),([&]()->V{V _lhs17078=([&]()->V{V _lhs17080=V(2.0);V _rhs17081=_v_15483_roomR;return V(j::number(_lhs17080)*j::number(_rhs17081));})();V _rhs17079=j::get(_v_15479_box.get(),this->_literals[48]);return V(j::number(_lhs17078)/j::number(_rhs17079));})()};return j::call(_method,_params17086,_receiver17084);})();return V(std::floor(j::number(_number17075)));})()};return j::call(_method,_params17091,_receiver17089);})();
_v_15485_down.get()=([&]()->V{V _receiver17117=j::builtin("Math");V _method17118=this->_literals[60];V _method=j::get(_receiver17117,_method17118);j::Args _params17119=j::Args{V(1.0),([&]()->V{V _number17103=([&]()->V{V _receiver17112=j::builtin("Math");V _method17113=this->_literals[60];V _method=j::get(_receiver17112,_method17113);j::Args _params17114=j::Args{([&]()->V{V _lhs17104=j::get(_v_15479_box.get(),this->_literals[46]);V _rhs17105=_v_15482_roomC;return V(j::number(_lhs17104)/j::number(_rhs17105));})(),([&]()->V{V _lhs17106=j::get(_v_15479_box.get(),this->_literals[48]);V _rhs17107=([&]()->V{V _lhs17108=V(2.0);V _rhs17109=_v_15483_roomR;return V(j::number(_lhs17108)*j::number(_rhs17109));})();return V(j::number(_lhs17106)/j::number(_rhs17107));})()};return j::call(_method,_params17114,_receiver17112);})();return V(std::ceil(j::number(_number17103)));})()};return j::call(_method,_params17119,_receiver17117);})();
_v_15486_w.get()=(j::truth(([&]()->V{V _lhs17120=_v_15485_down.get();V _rhs17121=V(1.0);return j::binary(">",_lhs17120,_rhs17121);})())?([&]()->V{V _number17124=([&]()->V{V _lhs17125=j::get(_v_15479_box.get(),this->_literals[46]);V _rhs17126=_v_15485_down.get();return V(j::number(_lhs17125)/j::number(_rhs17126));})();return V(std::ceil(j::number(_number17124)));})():([&]()->V{V _lhs17127=j::get(_v_15479_box.get(),this->_literals[46]);V _rhs17128=_v_15484_up.get();return V(j::number(_lhs17127)*j::number(_rhs17128));})());
_v_15487_h.get()=(j::truth(([&]()->V{V _lhs17129=_v_15485_down.get();V _rhs17130=V(1.0);return j::binary(">",_lhs17129,_rhs17130);})())?([&]()->V{V _number17133=([&]()->V{V _lhs17134=j::get(_v_15479_box.get(),this->_literals[48]);V _rhs17135=_v_15485_down.get();return V(j::number(_lhs17134)/j::number(_rhs17135));})();return V(std::ceil(j::number(_number17133)));})():([&]()->V{V _lhs17136=j::get(_v_15479_box.get(),this->_literals[48]);V _rhs17137=_v_15484_up.get();return V(j::number(_lhs17136)*j::number(_rhs17137));})());
_v_15488_from.get()=j::function([=](const j::Args &_args_fn15489,const V &_receiver_fn15489,const V &_self_fn15489) mutable ->V{
V _v_15490_i;
V _v_15491_n;
_v_15490_i=_args_fn15489[0];
_v_15491_n=_args_fn15489[1];
return (j::truth(([&]()->V{V _lhs17138=_v_15485_down.get();V _rhs17139=V(1.0);return j::binary(">",_lhs17138,_rhs17139);})())?([&]()->V{V _receiver17146=j::builtin("Math");V _method17147=this->_literals[59];V _method=j::get(_receiver17146,_method17147);j::Args _params17148=j::Args{([&]()->V{V _lhs17140=_v_15491_n;V _rhs17141=V(1.0);return V(j::number(_lhs17140)-j::number(_rhs17141));})(),([&]()->V{V _lhs17142=_v_15490_i;V _rhs17143=_v_15485_down.get();return V(j::number(_lhs17142)*j::number(_rhs17143));})()};return j::call(_method,_params17148,_receiver17146);})():([&]()->V{V _number17151=([&]()->V{V _lhs17152=_v_15490_i;V _rhs17153=_v_15484_up.get();return V(j::number(_lhs17152)/j::number(_rhs17153));})();return V(std::floor(j::number(_number17151)));})());
return V{};
},2);
_v_15492_opaque.get()=j::function([=](const j::Args &_args_fn15493,const V &_receiver_fn15493,const V &_self_fn15493) mutable ->V{
V _v_15494_x;
V _v_15495_y;
_v_15494_x=_args_fn15493[0];
_v_15495_y=_args_fn15493[1];
return ([&]()->V{V _lhs17154=j::get(_v_15477_data.get(),([&]()->V{V _lhs17156=([&]()->V{V _lhs17158=([&]()->V{V _lhs17160=([&]()->V{V _lhs17162=_v_15495_y;V _rhs17163=_v_15478_W.get();return V(j::number(_lhs17162)*j::number(_rhs17163));})();V _rhs17161=_v_15494_x;return j::binary("+",_lhs17160,_rhs17161);})();V _rhs17159=V(4.0);return V(j::number(_lhs17158)*j::number(_rhs17159));})();V _rhs17157=V(3.0);return j::binary("+",_lhs17156,_rhs17157);})());V _rhs17155=V(128.0);return j::binary(">=",_lhs17154,_rhs17155);})();
return V{};
},2);
_v_15496_key.get()=j::function([=](const j::Args &_args_fn15497,const V &_receiver_fn15497,const V &_self_fn15497) mutable ->V{
V _v_15498_x;
V _v_15499_y;
_v_15498_x=_args_fn15497[0];
_v_15499_y=_args_fn15497[1];
{
V _v_15500_o;
_v_15500_o=([&]()->V{V _lhs17164=([&]()->V{V _lhs17166=([&]()->V{V _lhs17168=_v_15499_y;V _rhs17169=_v_15478_W.get();return V(j::number(_lhs17168)*j::number(_rhs17169));})();V _rhs17167=_v_15498_x;return j::binary("+",_lhs17166,_rhs17167);})();V _rhs17165=V(4.0);return V(j::number(_lhs17164)*j::number(_rhs17165));})();
return ([&]()->V{V _lhs17170=([&]()->V{V _lhs17172=([&]()->V{V _lhs17174=j::get(_v_15477_data.get(),_v_15500_o);V _rhs17175=V(16.0);return V(double(int32_t(j::u32(_lhs17174)<<(j::u32(_rhs17175)&31))));})();V _rhs17173=([&]()->V{V _lhs17176=j::get(_v_15477_data.get(),([&]()->V{V _lhs17178=_v_15500_o;V _rhs17179=V(1.0);return j::binary("+",_lhs17178,_rhs17179);})());V _rhs17177=V(8.0);return V(double(int32_t(j::u32(_lhs17176)<<(j::u32(_rhs17177)&31))));})();return V(int(j::i32(_lhs17172)|j::i32(_rhs17173)));})();V _rhs17171=j::get(_v_15477_data.get(),([&]()->V{V _lhs17180=_v_15500_o;V _rhs17181=V(2.0);return j::binary("+",_lhs17180,_rhs17181);})());return V(int(j::i32(_lhs17170)|j::i32(_rhs17171)));})();

}

return V{};
},2);
_v_15501_counts=([&]()->V{V _callee17182=j::builtin("Map");return j::construct(_callee17182,j::Args{});})();
{V _v_15502_y;
_v_15502_y=j::get(_v_15479_box.get(),this->_literals[49]);
for(;j::truth(([&]()->V{V _lhs17183=_v_15502_y;V _rhs17184=([&]()->V{V _lhs17185=j::get(_v_15479_box.get(),this->_literals[49]);V _rhs17186=j::get(_v_15479_box.get(),this->_literals[48]);return j::binary("+",_lhs17185,_rhs17186);})();return j::binary("<",_lhs17183,_rhs17184);})());(void)(j::increment(_v_15502_y,1,false))){{V _v_15503_x;
_v_15503_x=j::get(_v_15479_box.get(),this->_literals[47]);
for(;j::truth(([&]()->V{V _lhs17187=_v_15503_x;V _rhs17188=([&]()->V{V _lhs17189=j::get(_v_15479_box.get(),this->_literals[47]);V _rhs17190=j::get(_v_15479_box.get(),this->_literals[46]);return j::binary("+",_lhs17189,_rhs17190);})();return j::binary("<",_lhs17187,_rhs17188);})());(void)(j::increment(_v_15503_x,1,false))){if(j::truth(([&]()->V{V _callee17191=_v_15492_opaque.get();return j::call(_callee17191,j::Args{_v_15503_x,_v_15502_y});})())){(void)(([&]()->V{V _receiver17200=_v_15501_counts;V _method17201=this->_literals[63];V _method=j::get(_receiver17200,_method17201);j::Args _params17202=j::Args{([&]()->V{V _callee17192=_v_15496_key.get();return j::call(_callee17192,j::Args{_v_15503_x,_v_15502_y});})(),([&]()->V{V _lhs17193=([&]()->V{V _logical17195=([&]()->V{V _receiver17197=_v_15501_counts;V _method17198=this->_literals[62];V _method=j::get(_receiver17197,_method17198);j::Args _params17199=j::Args{([&]()->V{V _callee17196=_v_15496_key.get();return j::call(_callee17196,j::Args{_v_15503_x,_v_15502_y});})()};return j::call(_method,_params17199,_receiver17197);})();return j::nullish(_logical17195)?V(0.0):_logical17195;})();V _rhs17194=V(1.0);return j::binary("+",_lhs17193,_rhs17194);})()};return j::call(_method,_params17202,_receiver17200);})());
}
}}
}}
_v_15504_kept=([&]()->V{V _receiver17215=([&]()->V{V _receiver17218=([&]()->V{V _receiver17223=([&]()->V{j::Args _array17226;for(const auto &_value:j::elements(_v_15501_counts))_array17226.push_back(_value);return j::array(std::move(_array17226));})();V _method17224=this->_literals[67];V _method=j::get(_receiver17223,_method17224);j::Args _params17225=j::Args{j::function([=](const j::Args &_args_fn15505,const V &_receiver_fn15505,const V &_self_fn15505) mutable ->V{
V _v_15506_a;
V _v_15507_b;
_v_15506_a=_args_fn15505[0];
_v_15507_b=_args_fn15505[1];
return ([&]()->V{V _lhs17221=j::get(_v_15507_b,V(1.0));V _rhs17222=j::get(_v_15506_a,V(1.0));return V(j::number(_lhs17221)-j::number(_rhs17222));})();
return V{};
},2)};return j::call(_method,_params17225,_receiver17223);})();V _method17219=this->_literals[2];V _method=j::get(_receiver17218,_method17219);j::Args _params17220=j::Args{V(0.0),V(8.0)};return j::call(_method,_params17220,_receiver17218);})();V _method17216=this->_literals[72];V _method=j::get(_receiver17215,_method17216);j::Args _params17217=j::Args{j::function([=](const j::Args &_args_fn15508,const V &_receiver_fn15508,const V &_self_fn15508) mutable ->V{
V _v_15509_k;
V _pattern17203=_args_fn15508[0];
_v_15509_k=j::get(_pattern17203,V(0));
return ([&]()->V{j::Args _array17204;_array17204.push_back(([&]()->V{V _lhs17205=([&]()->V{V _lhs17207=_v_15509_k;V _rhs17208=V(16.0);return V(int(j::i32(_lhs17207)>>(j::u32(_rhs17208)&31)));})();V _rhs17206=V(255.0);return V(int(j::i32(_lhs17205)&j::i32(_rhs17206)));})());_array17204.push_back(([&]()->V{V _lhs17209=([&]()->V{V _lhs17211=_v_15509_k;V _rhs17212=V(8.0);return V(int(j::i32(_lhs17211)>>(j::u32(_rhs17212)&31)));})();V _rhs17210=V(255.0);return V(int(j::i32(_lhs17209)&j::i32(_rhs17210)));})());_array17204.push_back(([&]()->V{V _lhs17213=_v_15509_k;V _rhs17214=V(255.0);return V(int(j::i32(_lhs17213)&j::i32(_rhs17214)));})());return j::array(std::move(_array17204));})();
return V{};
},1)};return j::call(_method,_params17217,_receiver17215);})();
_v_15510_colors.get()=(j::truth(j::get(_v_15504_kept,this->_literals[1]))?_v_15504_kept:([&]()->V{j::Args _array17227;_array17227.push_back(([&]()->V{j::Args _array17228;_array17228.push_back(V(0.0));_array17228.push_back(V(0.0));_array17228.push_back(V(0.0));return j::array(std::move(_array17228));})());return j::array(std::move(_array17227));})());
_v_15511_near.get()=([&]()->V{V _callee17229=j::builtin("Map");return j::construct(_callee17229,j::Args{});})();
_v_15512_index.get()=j::function([=](const j::Args &_args_fn15513,const V &_receiver_fn15513,const V &_self_fn15513) mutable ->V{
V _v_15514_k;
_v_15514_k=_args_fn15513[0];
{
j::Cell _v_15515_q;
_v_15515_q.get()=([&]()->V{V _receiver17230=_v_15511_near.get();V _method17231=this->_literals[62];V _method=j::get(_receiver17230,_method17231);j::Args _params17232=j::Args{_v_15514_k};return j::call(_method,_params17232,_receiver17230);})();
if(j::truth(([&]()->V{V _lhs17233=_v_15515_q.get();V _rhs17234=j::builtin("undefined");return V(j::equal(_lhs17233,_rhs17234,true));})())){
j::Cell _v_15516_r;
j::Cell _v_15517_g;
j::Cell _v_15518_b;
j::Cell _v_15519_bd;
_v_15516_r.get()=([&]()->V{V _lhs17235=([&]()->V{V _lhs17237=_v_15514_k;V _rhs17238=V(16.0);return V(int(j::i32(_lhs17237)>>(j::u32(_rhs17238)&31)));})();V _rhs17236=V(255.0);return V(int(j::i32(_lhs17235)&j::i32(_rhs17236)));})();
_v_15517_g.get()=([&]()->V{V _lhs17239=([&]()->V{V _lhs17241=_v_15514_k;V _rhs17242=V(8.0);return V(int(j::i32(_lhs17241)>>(j::u32(_rhs17242)&31)));})();V _rhs17240=V(255.0);return V(int(j::i32(_lhs17239)&j::i32(_rhs17240)));})();
_v_15518_b.get()=([&]()->V{V _lhs17243=_v_15514_k;V _rhs17244=V(255.0);return V(int(j::i32(_lhs17243)&j::i32(_rhs17244)));})();
_v_15519_bd.get()=j::builtin("Infinity");
(void)((_v_15515_q.get()=V(0.0)));
(void)(([&]()->V{V _receiver17272=_v_15510_colors.get();V _method17273=this->_literals[73];V _method=j::get(_receiver17272,_method17273);j::Args _params17274=j::Args{j::function([=](const j::Args &_args_fn15520,const V &_receiver_fn15520,const V &_self_fn15520) mutable ->V{
V _v_15521_c;
V _v_15522_j;
_v_15521_c=_args_fn15520[0];
_v_15522_j=_args_fn15520[1];
{
V _v_15523_d;
_v_15523_d=([&]()->V{V _lhs17246=([&]()->V{V _lhs17248=([&]()->V{V _lhs17250=V(0.3);V _rhs17251=([&]()->V{V _lhs17252=([&]()->V{V _lhs17254=j::get(_v_15521_c,V(0.0));V _rhs17255=_v_15516_r.get();return V(j::number(_lhs17254)-j::number(_rhs17255));})();V _rhs17253=V(2.0);return V(std::pow(j::number(_lhs17252),j::number(_rhs17253)));})();return V(j::number(_lhs17250)*j::number(_rhs17251));})();V _rhs17249=([&]()->V{V _lhs17256=V(0.59);V _rhs17257=([&]()->V{V _lhs17258=([&]()->V{V _lhs17260=j::get(_v_15521_c,V(1.0));V _rhs17261=_v_15517_g.get();return V(j::number(_lhs17260)-j::number(_rhs17261));})();V _rhs17259=V(2.0);return V(std::pow(j::number(_lhs17258),j::number(_rhs17259)));})();return V(j::number(_lhs17256)*j::number(_rhs17257));})();return j::binary("+",_lhs17248,_rhs17249);})();V _rhs17247=([&]()->V{V _lhs17262=V(0.11);V _rhs17263=([&]()->V{V _lhs17264=([&]()->V{V _lhs17266=j::get(_v_15521_c,V(2.0));V _rhs17267=_v_15518_b.get();return V(j::number(_lhs17266)-j::number(_rhs17267));})();V _rhs17265=V(2.0);return V(std::pow(j::number(_lhs17264),j::number(_rhs17265)));})();return V(j::number(_lhs17262)*j::number(_rhs17263));})();return j::binary("+",_lhs17246,_rhs17247);})();
if(j::truth(([&]()->V{V _lhs17268=_v_15523_d;V _rhs17269=_v_15519_bd.get();return j::binary("<",_lhs17268,_rhs17269);})())){(void)(((_v_15519_bd.get()=_v_15523_d),(_v_15515_q.get()=_v_15522_j)));
}

}

return V{};
},2)};return j::call(_method,_params17274,_receiver17272);})());
(void)(([&]()->V{V _receiver17275=_v_15511_near.get();V _method17276=this->_literals[63];V _method=j::get(_receiver17275,_method17276);j::Args _params17277=j::Args{_v_15514_k,_v_15515_q.get()};return j::call(_method,_params17277,_receiver17275);})());

}

return _v_15515_q.get();

}

return V{};
},1);
_v_15524_at=j::function([=](const j::Args &_args_fn15525,const V &_receiver_fn15525,const V &_self_fn15525) mutable ->V{
V _v_15526_px;
V _v_15527_py;
_v_15526_px=_args_fn15525[0];
_v_15527_py=_args_fn15525[1];
{
V _v_15528_x;
V _v_15529_y;
if(j::truth(([&]()->V{V _logical17278=([&]()->V{V _logical17279=([&]()->V{V _logical17280=([&]()->V{V _lhs17281=_v_15526_px;V _rhs17282=V(0.0);return j::binary("<",_lhs17281,_rhs17282);})();return !j::truth(_logical17280)?([&]()->V{V _lhs17283=_v_15526_px;V _rhs17284=_v_15486_w.get();return j::binary(">=",_lhs17283,_rhs17284);})():_logical17280;})();return !j::truth(_logical17279)?([&]()->V{V _lhs17285=_v_15527_py;V _rhs17286=V(0.0);return j::binary("<",_lhs17285,_rhs17286);})():_logical17279;})();return !j::truth(_logical17278)?([&]()->V{V _lhs17287=_v_15527_py;V _rhs17288=_v_15487_h.get();return j::binary(">=",_lhs17287,_rhs17288);})():_logical17278;})())){return j::unary("-",V(1.0));
}
_v_15528_x=([&]()->V{V _lhs17289=j::get(_v_15479_box.get(),this->_literals[47]);V _rhs17290=([&]()->V{V _callee17291=_v_15488_from.get();return j::call(_callee17291,j::Args{_v_15526_px,j::get(_v_15479_box.get(),this->_literals[46])});})();return j::binary("+",_lhs17289,_rhs17290);})();
_v_15529_y=([&]()->V{V _lhs17292=j::get(_v_15479_box.get(),this->_literals[49]);V _rhs17293=([&]()->V{V _callee17294=_v_15488_from.get();return j::call(_callee17294,j::Args{_v_15527_py,j::get(_v_15479_box.get(),this->_literals[48])});})();return j::binary("+",_lhs17292,_rhs17293);})();
return (j::truth(([&]()->V{V _callee17295=_v_15492_opaque.get();return j::call(_callee17295,j::Args{_v_15528_x,_v_15529_y});})())?([&]()->V{V _callee17297=_v_15512_index.get();return j::call(_callee17297,j::Args{([&]()->V{V _callee17296=_v_15496_key.get();return j::call(_callee17296,j::Args{_v_15528_x,_v_15529_y});})()});})():j::unary("-",V(1.0)));

}

return V{};
},2);
_v_15530_cols=([&]()->V{V _lhs17298=_v_15486_w.get();V _rhs17299=([&]()->V{V _lhs17300=V(2.0);V _rhs17301=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);return V(j::number(_lhs17300)*j::number(_rhs17301));})();return j::binary("+",_lhs17298,_rhs17299);})();
_v_15531_rows=([&]()->V{V _lhs17302=([&]()->V{V _number17306=([&]()->V{V _lhs17307=_v_15487_h.get();V _rhs17308=V(2.0);return V(j::number(_lhs17307)/j::number(_rhs17308));})();return V(std::ceil(j::number(_number17306)));})();V _rhs17303=([&]()->V{V _lhs17309=V(2.0);V _rhs17310=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);return V(j::number(_lhs17309)*j::number(_rhs17310));})();return j::binary("+",_lhs17302,_rhs17303);})();
_v_15532_art=([&]()->V{j::Args _array17311;return j::array(std::move(_array17311));})();
_v_15533_ink=([&]()->V{j::Args _array17312;return j::array(std::move(_array17312));})();
{V _v_15534_y;
_v_15534_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs17313=_v_15534_y;V _rhs17314=_v_15531_rows;return j::binary("<",_lhs17313,_rhs17314);})());(void)(j::increment(_v_15534_y,1,false))){
V _v_15535_a;
V _v_15536_i;
_v_15535_a=this->_literals[14];
_v_15536_i=this->_literals[14];
{V _v_15537_x;
_v_15537_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs17315=_v_15537_x;V _rhs17316=_v_15530_cols;return j::binary("<",_lhs17315,_rhs17316);})());(void)(j::increment(_v_15537_x,1,false))){
V _v_15538_px;
V _v_15539_py;
V _v_15540_top;
V _v_15541_bottom;
V _v_15542_ch;
_v_15538_px=([&]()->V{V _lhs17317=_v_15537_x;V _rhs17318=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);return V(j::number(_lhs17317)-j::number(_rhs17318));})();
_v_15539_py=([&]()->V{V _lhs17319=V(2.0);V _rhs17320=([&]()->V{V _lhs17321=_v_15534_y;V _rhs17322=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);return V(j::number(_lhs17321)-j::number(_rhs17322));})();return V(j::number(_lhs17319)*j::number(_rhs17320));})();
_v_15540_top=([&]()->V{V _callee17323=_v_15524_at;return j::call(_callee17323,j::Args{_v_15538_px,_v_15539_py});})();
_v_15541_bottom=([&]()->V{V _callee17326=_v_15524_at;return j::call(_callee17326,j::Args{_v_15538_px,([&]()->V{V _lhs17324=_v_15539_py;V _rhs17325=V(1.0);return j::binary("+",_lhs17324,_rhs17325);})()});})();
_v_15542_ch=(j::truth(([&]()->V{V _lhs17327=_v_15540_top;V _rhs17328=V(0.0);return j::binary(">=",_lhs17327,_rhs17328);})())?(j::truth(([&]()->V{V _lhs17329=_v_15541_bottom;V _rhs17330=V(0.0);return j::binary(">=",_lhs17329,_rhs17330);})())?this->_literals[74]:this->_literals[75]):(j::truth(([&]()->V{V _lhs17331=_v_15541_bottom;V _rhs17332=V(0.0);return j::binary(">=",_lhs17331,_rhs17332);})())?this->_literals[76]:this->_literals[51]));
(void)((_v_15535_a=j::binary("+",_v_15535_a,_v_15542_ch)));
(void)((_v_15536_i=j::binary("+",_v_15536_i,(j::truth(([&]()->V{V _lhs17335=_v_15542_ch;V _rhs17336=this->_literals[51];return V(j::equal(_lhs17335,_rhs17336,true));})())?this->_literals[51]:([&]()->V{V _receiver17337=(j::truth(([&]()->V{V _lhs17340=_v_15540_top;V _rhs17341=V(0.0);return j::binary(">=",_lhs17340,_rhs17341);})())?_v_15540_top:_v_15541_bottom);V _method17338=this->_literals[68];V _method=j::get(_receiver17337,_method17338);j::Args _params17339=j::Args{V(36.0)};return j::call(_method,_params17339,_receiver17337);})()))));

}
}
(void)(([&]()->V{V _receiver17342=_v_15532_art;V _method17343=this->_literals[69];V _method=j::get(_receiver17342,_method17343);j::Args _params17344=j::Args{_v_15535_a};return j::call(_method,_params17344,_receiver17342);})());
(void)(([&]()->V{V _receiver17345=_v_15533_ink;V _method17346=this->_literals[69];V _method=j::get(_receiver17345,_method17346);j::Args _params17347=j::Args{_v_15536_i};return j::call(_method,_params17347,_receiver17345);})());

}
}
return ([&]()->V{V _obj17348=j::object();j::put(_obj17348,this->_literals[23],this->_literals[37]);j::put(_obj17348,this->_literals[34],_v_15530_cols);j::put(_obj17348,this->_literals[22],_v_15531_rows);j::put(_obj17348,this->_literals[54],_v_15510_colors.get());j::put(_obj17348,this->_literals[55],_v_15532_art);j::put(_obj17348,this->_literals[56],_v_15533_ink);j::put(_obj17348,this->_literals[57],([&]()->V{V _receiver17349=_v_15532_art;V _method17350=this->_literals[2];V _method=j::get(_receiver17349,_method17350);j::Args _params17351=j::Args{};return j::call(_method,_params17351,_receiver17349);})());j::put(_obj17348,this->_literals[58],V(false));j::put(_obj17348,this->_literals[50],_v_15481_ground);return _obj17348;})();

}

return V{};
},5);
this->_v_15543_size.get()=j::function([=](const j::Args &_args_fn15544,const V &_receiver_fn15544,const V &_self_fn15544) mutable ->V{
V _v_15545_aspect;
V _v_15546_width;
V _v_15547_height;
_v_15545_aspect=_args_fn15544[0];
_v_15546_width=_args_fn15544[1];
_v_15547_height=_args_fn15544[2];
{
V _v_15548_maxC;
V _v_15549_maxR;
V _v_15550_rIn;
V _v_15551_cIn;
_v_15548_maxC=([&]()->V{V _receiver17358=j::builtin("Math");V _method17359=this->_literals[60];V _method=j::get(_receiver17358,_method17359);j::Args _params17360=j::Args{V(1.0),([&]()->V{V _lhs17352=_v_15546_width;V _rhs17353=([&]()->V{V _lhs17354=V(2.0);V _rhs17355=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);return V(j::number(_lhs17354)*j::number(_rhs17355));})();return V(j::number(_lhs17352)-j::number(_rhs17353));})()};return j::call(_method,_params17360,_receiver17358);})();
_v_15549_maxR=([&]()->V{V _receiver17367=j::builtin("Math");V _method17368=this->_literals[60];V _method=j::get(_receiver17367,_method17368);j::Args _params17369=j::Args{V(1.0),([&]()->V{V _lhs17361=_v_15547_height;V _rhs17362=([&]()->V{V _lhs17363=V(2.0);V _rhs17364=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);return V(j::number(_lhs17363)*j::number(_rhs17364));})();return V(j::number(_lhs17361)-j::number(_rhs17362));})()};return j::call(_method,_params17369,_receiver17367);})();
_v_15550_rIn=([&]()->V{V _receiver17386=j::builtin("Math");V _method17387=this->_literals[60];V _method=j::get(_receiver17386,_method17387);j::Args _params17388=j::Args{V(1.0),([&]()->V{V _receiver17381=j::builtin("Math");V _method17382=this->_literals[59];V _method=j::get(_receiver17381,_method17382);j::Args _params17383=j::Args{_v_15549_maxR,([&]()->V{V _number17374=([&]()->V{V _lhs17375=_v_15548_maxC;V _rhs17376=([&]()->V{V _lhs17377=V(2.0);V _rhs17378=_v_15545_aspect;return V(j::number(_lhs17377)*j::number(_rhs17378));})();return V(j::number(_lhs17375)/j::number(_rhs17376));})();return V(std::floor(j::number(_number17374)+.5));})()};return j::call(_method,_params17383,_receiver17381);})()};return j::call(_method,_params17388,_receiver17386);})();
_v_15551_cIn=([&]()->V{V _receiver17405=j::builtin("Math");V _method17406=this->_literals[60];V _method=j::get(_receiver17405,_method17406);j::Args _params17407=j::Args{V(1.0),([&]()->V{V _receiver17400=j::builtin("Math");V _method17401=this->_literals[59];V _method=j::get(_receiver17400,_method17401);j::Args _params17402=j::Args{_v_15548_maxC,([&]()->V{V _number17393=([&]()->V{V _lhs17394=([&]()->V{V _lhs17396=V(2.0);V _rhs17397=_v_15545_aspect;return V(j::number(_lhs17396)*j::number(_rhs17397));})();V _rhs17395=_v_15550_rIn;return V(j::number(_lhs17394)*j::number(_rhs17395));})();return V(std::floor(j::number(_number17393)+.5));})()};return j::call(_method,_params17402,_receiver17400);})()};return j::call(_method,_params17407,_receiver17405);})();
return ([&]()->V{V _obj17408=j::object();j::put(_obj17408,this->_literals[34],([&]()->V{V _lhs17409=_v_15551_cIn;V _rhs17410=([&]()->V{V _lhs17411=V(2.0);V _rhs17412=j::get(this->_v_15279_MARGIN.get(),this->_literals[47]);return V(j::number(_lhs17411)*j::number(_rhs17412));})();return j::binary("+",_lhs17409,_rhs17410);})());j::put(_obj17408,this->_literals[22],([&]()->V{V _lhs17413=_v_15550_rIn;V _rhs17414=([&]()->V{V _lhs17415=V(2.0);V _rhs17416=j::get(this->_v_15279_MARGIN.get(),this->_literals[49]);return V(j::number(_lhs17415)*j::number(_rhs17416));})();return j::binary("+",_lhs17413,_rhs17414);})());return _obj17408;})();

}

return V{};
},3);
this->_v_15552_taps.get()=j::function([=](const j::Args &_args_fn15553,const V &_receiver_fn15553,const V &_self_fn15553) mutable ->V{
V _v_15554_n;
V _v_15555_step;
V _v_15556_off;
V _v_15557_drawn;
V _v_15558_length;
_v_15554_n=_args_fn15553[0];
_v_15555_step=_args_fn15553[1];
_v_15556_off=_args_fn15553[2];
_v_15557_drawn=_args_fn15553[3];
_v_15558_length=_args_fn15553[4];
{
V _v_15559_scale;
V _v_15560_from;
V _v_15561_at;
V _v_15562_w;
_v_15559_scale=([&]()->V{V _lhs17417=_v_15558_length;V _rhs17418=_v_15557_drawn;return V(j::number(_lhs17417)/j::number(_rhs17418));})();
_v_15560_from=([&]()->V{V _callee17421=j::builtin("Int32Array");return j::construct(_callee17421,j::Args{([&]()->V{V _lhs17419=_v_15554_n;V _rhs17420=V(1.0);return j::binary("+",_lhs17419,_rhs17420);})()});})();
_v_15561_at=([&]()->V{j::Args _array17422;return j::array(std::move(_array17422));})();
_v_15562_w=([&]()->V{j::Args _array17423;return j::array(std::move(_array17423));})();
{V _v_15563_j;
_v_15563_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs17424=_v_15563_j;V _rhs17425=_v_15554_n;return j::binary("<",_lhs17424,_rhs17425);})());(void)(j::increment(_v_15563_j,1,false))){
V _v_15564_a;
V _v_15565_b;
V _v_15566_lo;
V _v_15567_hi;
V _v_15568_span;
(void)(([&]()->V{V _base17427=_v_15560_from;V _key17428=_v_15563_j;V _assign17426=j::get(_v_15561_at,this->_literals[1]);return j::put(_base17427,_key17428,_assign17426);})());
_v_15564_a=([&]()->V{V _lhs17429=([&]()->V{V _lhs17431=([&]()->V{V _lhs17433=_v_15563_j;V _rhs17434=_v_15555_step;return V(j::number(_lhs17433)*j::number(_rhs17434));})();V _rhs17432=_v_15556_off;return V(j::number(_lhs17431)-j::number(_rhs17432));})();V _rhs17430=_v_15559_scale;return V(j::number(_lhs17429)*j::number(_rhs17430));})();
_v_15565_b=([&]()->V{V _lhs17435=([&]()->V{V _lhs17437=([&]()->V{V _lhs17439=([&]()->V{V _lhs17441=_v_15563_j;V _rhs17442=V(1.0);return j::binary("+",_lhs17441,_rhs17442);})();V _rhs17440=_v_15555_step;return V(j::number(_lhs17439)*j::number(_rhs17440));})();V _rhs17438=_v_15556_off;return V(j::number(_lhs17437)-j::number(_rhs17438));})();V _rhs17436=_v_15559_scale;return V(j::number(_lhs17435)*j::number(_rhs17436));})();
_v_15566_lo=([&]()->V{V _receiver17445=j::builtin("Math");V _method17446=this->_literals[60];V _method=j::get(_receiver17445,_method17446);j::Args _params17447=j::Args{_v_15564_a,V(0.0)};return j::call(_method,_params17447,_receiver17445);})();
_v_15567_hi=([&]()->V{V _receiver17450=j::builtin("Math");V _method17451=this->_literals[59];V _method=j::get(_receiver17450,_method17451);j::Args _params17452=j::Args{_v_15565_b,_v_15558_length};return j::call(_method,_params17452,_receiver17450);})();
if(j::truth(([&]()->V{V _lhs17453=_v_15567_hi;V _rhs17454=_v_15566_lo;return j::binary("<=",_lhs17453,_rhs17454);})())){continue;
}
_v_15568_span=([&]()->V{V _lhs17455=_v_15565_b;V _rhs17456=_v_15564_a;return V(j::number(_lhs17455)-j::number(_rhs17456));})();
if(j::truth(([&]()->V{V _lhs17457=_v_15568_span;V _rhs17458=V(1.0);return j::binary(">=",_lhs17457,_rhs17458);})())){
{V _v_15569_p;
_v_15569_p=([&]()->V{V _number17459=_v_15566_lo;return V(std::floor(j::number(_number17459)));})();
for(;j::truth(([&]()->V{V _lhs17460=_v_15569_p;V _rhs17461=_v_15567_hi;return j::binary("<",_lhs17460,_rhs17461);})());(void)(j::increment(_v_15569_p,1,false))){
V _v_15570_k;
_v_15570_k=([&]()->V{V _lhs17462=([&]()->V{V _lhs17464=([&]()->V{V _receiver17470=j::builtin("Math");V _method17471=this->_literals[59];V _method=j::get(_receiver17470,_method17471);j::Args _params17472=j::Args{_v_15567_hi,([&]()->V{V _lhs17466=_v_15569_p;V _rhs17467=V(1.0);return j::binary("+",_lhs17466,_rhs17467);})()};return j::call(_method,_params17472,_receiver17470);})();V _rhs17465=([&]()->V{V _receiver17475=j::builtin("Math");V _method17476=this->_literals[60];V _method=j::get(_receiver17475,_method17476);j::Args _params17477=j::Args{_v_15566_lo,_v_15569_p};return j::call(_method,_params17477,_receiver17475);})();return V(j::number(_lhs17464)-j::number(_rhs17465));})();V _rhs17463=_v_15568_span;return V(j::number(_lhs17462)/j::number(_rhs17463));})();
if(j::truth(([&]()->V{V _lhs17478=_v_15570_k;V _rhs17479=V(0.0);return j::binary(">",_lhs17478,_rhs17479);})())){(void)((([&]()->V{V _receiver17480=_v_15561_at;V _method17481=this->_literals[69];V _method=j::get(_receiver17480,_method17481);j::Args _params17482=j::Args{_v_15569_p};return j::call(_method,_params17482,_receiver17480);})(),([&]()->V{V _receiver17483=_v_15562_w;V _method17484=this->_literals[69];V _method=j::get(_receiver17483,_method17484);j::Args _params17485=j::Args{_v_15570_k};return j::call(_method,_params17485,_receiver17483);})()));
}

}
}

}
else {
V _v_15571_f;
V _v_15572_m;
V _v_15573_p;
V _v_15574_k;
_v_15571_f=([&]()->V{V _lhs17486=([&]()->V{V _lhs17488=_v_15567_hi;V _rhs17489=_v_15566_lo;return V(j::number(_lhs17488)-j::number(_rhs17489));})();V _rhs17487=_v_15568_span;return V(j::number(_lhs17486)/j::number(_rhs17487));})();
_v_15572_m=([&]()->V{V _receiver17505=j::builtin("Math");V _method17506=this->_literals[59];V _method=j::get(_receiver17505,_method17506);j::Args _params17507=j::Args{([&]()->V{V _lhs17490=_v_15558_length;V _rhs17491=V(1.0);return V(j::number(_lhs17490)-j::number(_rhs17491));})(),([&]()->V{V _receiver17500=j::builtin("Math");V _method17501=this->_literals[60];V _method=j::get(_receiver17500,_method17501);j::Args _params17502=j::Args{V(0.0),([&]()->V{V _lhs17492=([&]()->V{V _lhs17494=([&]()->V{V _lhs17496=_v_15566_lo;V _rhs17497=_v_15567_hi;return j::binary("+",_lhs17496,_rhs17497);})();V _rhs17495=V(2.0);return V(j::number(_lhs17494)/j::number(_rhs17495));})();V _rhs17493=V(0.5);return V(j::number(_lhs17492)-j::number(_rhs17493));})()};return j::call(_method,_params17502,_receiver17500);})()};return j::call(_method,_params17507,_receiver17505);})();
_v_15573_p=([&]()->V{V _number17508=_v_15572_m;return V(std::floor(j::number(_number17508)));})();
_v_15574_k=([&]()->V{V _lhs17509=_v_15572_m;V _rhs17510=_v_15573_p;return V(j::number(_lhs17509)-j::number(_rhs17510));})();
(void)((([&]()->V{V _receiver17511=_v_15561_at;V _method17512=this->_literals[69];V _method=j::get(_receiver17511,_method17512);j::Args _params17513=j::Args{_v_15573_p};return j::call(_method,_params17513,_receiver17511);})(),([&]()->V{V _receiver17518=_v_15562_w;V _method17519=this->_literals[69];V _method=j::get(_receiver17518,_method17519);j::Args _params17520=j::Args{([&]()->V{V _lhs17514=_v_15571_f;V _rhs17515=([&]()->V{V _lhs17516=V(1.0);V _rhs17517=_v_15574_k;return V(j::number(_lhs17516)-j::number(_rhs17517));})();return V(j::number(_lhs17514)*j::number(_rhs17515));})()};return j::call(_method,_params17520,_receiver17518);})()));
if(j::truth(([&]()->V{V _lhs17521=_v_15574_k;V _rhs17522=V(0.0);return j::binary(">",_lhs17521,_rhs17522);})())){(void)((([&]()->V{V _receiver17532=_v_15561_at;V _method17533=this->_literals[69];V _method=j::get(_receiver17532,_method17533);j::Args _params17534=j::Args{([&]()->V{V _receiver17529=j::builtin("Math");V _method17530=this->_literals[59];V _method=j::get(_receiver17529,_method17530);j::Args _params17531=j::Args{([&]()->V{V _lhs17523=_v_15558_length;V _rhs17524=V(1.0);return V(j::number(_lhs17523)-j::number(_rhs17524));})(),([&]()->V{V _lhs17525=_v_15573_p;V _rhs17526=V(1.0);return j::binary("+",_lhs17525,_rhs17526);})()};return j::call(_method,_params17531,_receiver17529);})()};return j::call(_method,_params17534,_receiver17532);})(),([&]()->V{V _receiver17537=_v_15562_w;V _method17538=this->_literals[69];V _method=j::get(_receiver17537,_method17538);j::Args _params17539=j::Args{([&]()->V{V _lhs17535=_v_15571_f;V _rhs17536=_v_15574_k;return V(j::number(_lhs17535)*j::number(_rhs17536));})()};return j::call(_method,_params17539,_receiver17537);})()));
}

}


}
}
(void)(([&]()->V{V _base17541=_v_15560_from;V _key17542=_v_15554_n;V _assign17540=j::get(_v_15561_at,this->_literals[1]);return j::put(_base17541,_key17542,_assign17540);})());
return ([&]()->V{V _obj17543=j::object();j::put(_obj17543,this->_literals[53],_v_15560_from);j::put(_obj17543,this->_literals[61],([&]()->V{V _receiver17544=j::builtin("Int32Array");V _method17545=this->_literals[53];V _method=j::get(_receiver17544,_method17545);j::Args _params17546=j::Args{_v_15561_at};return j::call(_method,_params17546,_receiver17544);})());j::put(_obj17543,this->_literals[46],([&]()->V{V _receiver17547=j::builtin("Float64Array");V _method17548=this->_literals[53];V _method=j::get(_receiver17547,_method17548);j::Args _params17549=j::Args{_v_15562_w};return j::call(_method,_params17549,_receiver17547);})());return _obj17543;})();

}

return V{};
},5);
this->_v_15575_trim.get()=j::function([=](const j::Args &_args_fn15576,const V &_receiver_fn15576,const V &_self_fn15576) mutable ->V{
V _v_15577_data;
V _v_15578_W;
V _v_15579_H;
_v_15577_data=_args_fn15576[0];
_v_15578_W=_args_fn15576[1];
_v_15579_H=_args_fn15576[2];
{
V _v_15580_x0;
V _v_15581_y0;
V _v_15582_x1;
V _v_15583_y1;
_v_15580_x0=_v_15578_W;
_v_15581_y0=_v_15579_H;
_v_15582_x1=j::unary("-",V(1.0));
_v_15583_y1=j::unary("-",V(1.0));
{V _v_15584_y;
_v_15584_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs17550=_v_15584_y;V _rhs17551=_v_15579_H;return j::binary("<",_lhs17550,_rhs17551);})());(void)(j::increment(_v_15584_y,1,false))){{V _v_15585_x;
_v_15585_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs17552=_v_15585_x;V _rhs17553=_v_15578_W;return j::binary("<",_lhs17552,_rhs17553);})());(void)(j::increment(_v_15585_x,1,false))){if(j::truth(([&]()->V{V _lhs17554=j::get(_v_15577_data,([&]()->V{V _lhs17556=([&]()->V{V _lhs17558=([&]()->V{V _lhs17560=([&]()->V{V _lhs17562=_v_15584_y;V _rhs17563=_v_15578_W;return V(j::number(_lhs17562)*j::number(_rhs17563));})();V _rhs17561=_v_15585_x;return j::binary("+",_lhs17560,_rhs17561);})();V _rhs17559=V(4.0);return V(j::number(_lhs17558)*j::number(_rhs17559));})();V _rhs17557=V(3.0);return j::binary("+",_lhs17556,_rhs17557);})());V _rhs17555=V(1.0);return j::binary(">",_lhs17554,_rhs17555);})())){
if(j::truth(([&]()->V{V _lhs17564=_v_15585_x;V _rhs17565=_v_15580_x0;return j::binary("<",_lhs17564,_rhs17565);})())){(void)((_v_15580_x0=_v_15585_x));
}
if(j::truth(([&]()->V{V _lhs17567=_v_15585_x;V _rhs17568=_v_15582_x1;return j::binary(">",_lhs17567,_rhs17568);})())){(void)((_v_15582_x1=_v_15585_x));
}
if(j::truth(([&]()->V{V _lhs17570=_v_15584_y;V _rhs17571=_v_15581_y0;return j::binary("<",_lhs17570,_rhs17571);})())){(void)((_v_15581_y0=_v_15584_y));
}
(void)((_v_15583_y1=_v_15584_y));

}

}}
}}
return (j::truth(([&]()->V{V _lhs17574=_v_15582_x1;V _rhs17575=V(0.0);return j::binary("<",_lhs17574,_rhs17575);})())?V::null():([&]()->V{V _obj17576=j::object();j::put(_obj17576,this->_literals[47],_v_15580_x0);j::put(_obj17576,this->_literals[49],_v_15581_y0);j::put(_obj17576,this->_literals[46],([&]()->V{V _lhs17577=([&]()->V{V _lhs17579=_v_15582_x1;V _rhs17580=_v_15580_x0;return V(j::number(_lhs17579)-j::number(_rhs17580));})();V _rhs17578=V(1.0);return j::binary("+",_lhs17577,_rhs17578);})());j::put(_obj17576,this->_literals[48],([&]()->V{V _lhs17581=([&]()->V{V _lhs17583=_v_15583_y1;V _rhs17584=_v_15581_y0;return V(j::number(_lhs17583)-j::number(_rhs17584));})();V _rhs17582=V(1.0);return j::binary("+",_lhs17581,_rhs17582);})());return _obj17576;})());

}

return V{};
},3);
this->_v_15586_photo.get()=j::function([=](const j::Args &_args_fn15587,const V &_receiver_fn15587,const V &_self_fn15587) mutable ->V{
V _v_15588_src;
V _v_15589_W;
V _v_15590_H;
V _v_15591_found;
V _v_15592_box;
_v_15588_src=_args_fn15587[0];
_v_15589_W=_args_fn15587[1];
_v_15590_H=_args_fn15587[2];
_v_15591_found=_args_fn15587[3];
_v_15592_box=_args_fn15587[4];
{
V _v_15593_bare;
V _v_15594_inked;
if(j::truth(([&]()->V{V _logical17585=j::get(_v_15591_found,this->_literals[77]);return j::truth(_logical17585)?j::unary("!",j::get(_v_15591_found,this->_literals[78])):_logical17585;})())){return V(true);
}
if(j::truth(([&]()->V{V _logical17586=j::unary("!",j::get(_v_15591_found,this->_literals[78]));return !j::truth(_logical17586)?j::get(_v_15591_found,this->_literals[50]):_logical17586;})())){return ([&]()->V{V _callee17587=this->_v_15595_textured.get();return j::call(_callee17587,j::Args{j::get(_v_15591_found,this->_literals[45]),_v_15589_W,_v_15592_box});})();
}
_v_15593_bare=j::get(([&]()->V{V _callee17588=this->_v_15626_clearGround.get();return j::call(_callee17588,j::Args{_v_15588_src,_v_15589_W,_v_15590_H,V(true)});})(),this->_literals[45]);
_v_15594_inked=([&]()->V{V _callee17589=this->_v_15575_trim.get();return j::call(_callee17589,j::Args{_v_15593_bare,_v_15589_W,_v_15590_H});})();
return ([&]()->V{V _logical17590=j::unary("!",j::unary("!",_v_15594_inked));return j::truth(_logical17590)?([&]()->V{V _callee17591=this->_v_15595_textured.get();return j::call(_callee17591,j::Args{_v_15593_bare,_v_15589_W,_v_15594_inked});})():_logical17590;})();

}

return V{};
},5);
this->_v_15595_textured.get()=j::function([=](const j::Args &_args_fn15596,const V &_receiver_fn15596,const V &_self_fn15596) mutable ->V{
V _v_15597_data;
V _v_15598_W;
V _v_15599_box;
_v_15597_data=_args_fn15596[0];
_v_15598_W=_args_fn15596[1];
_v_15599_box=_args_fn15596[2];
{
V _v_15600_side;
V _v_15601_step;
V _v_15602_gw;
V _v_15603_gh;
V _v_15604_lum;
j::Cell _v_15616_pairs;
j::Cell _v_15617_some;
V _v_15618_compare;
_v_15600_side=([&]()->V{V _receiver17609=j::builtin("Math");V _method17610=this->_literals[60];V _method=j::get(_receiver17609,_method17610);j::Args _params17611=j::Args{V(1.0),([&]()->V{V _number17599=([&]()->V{V _lhs17600=([&]()->V{V _receiver17604=j::builtin("Math");V _method17605=this->_literals[60];V _method=j::get(_receiver17604,_method17605);j::Args _params17606=j::Args{j::get(_v_15599_box,this->_literals[46]),j::get(_v_15599_box,this->_literals[48])};return j::call(_method,_params17606,_receiver17604);})();V _rhs17601=V(128.0);return V(j::number(_lhs17600)/j::number(_rhs17601));})();return V(std::ceil(j::number(_number17599)));})()};return j::call(_method,_params17611,_receiver17609);})();
_v_15601_step=([&]()->V{V _receiver17619=j::builtin("Math");V _method17620=this->_literals[60];V _method=j::get(_receiver17619,_method17620);j::Args _params17621=j::Args{V(1.0),([&]()->V{V _number17614=([&]()->V{V _lhs17615=_v_15600_side;V _rhs17616=V(4.0);return V(j::number(_lhs17615)/j::number(_rhs17616));})();return V(std::floor(j::number(_number17614)));})()};return j::call(_method,_params17621,_receiver17619);})();
_v_15602_gw=([&]()->V{V _number17624=([&]()->V{V _lhs17625=j::get(_v_15599_box,this->_literals[46]);V _rhs17626=_v_15600_side;return V(j::number(_lhs17625)/j::number(_rhs17626));})();return V(std::ceil(j::number(_number17624)));})();
_v_15603_gh=([&]()->V{V _number17629=([&]()->V{V _lhs17630=j::get(_v_15599_box,this->_literals[48]);V _rhs17631=_v_15600_side;return V(j::number(_lhs17630)/j::number(_rhs17631));})();return V(std::ceil(j::number(_number17629)));})();
_v_15604_lum=([&]()->V{V _callee17634=j::builtin("Float32Array");return j::construct(_callee17634,j::Args{([&]()->V{V _lhs17632=_v_15602_gw;V _rhs17633=_v_15603_gh;return V(j::number(_lhs17632)*j::number(_rhs17633));})()});})();
{V _v_15605_gy;
_v_15605_gy=V(0.0);
for(;j::truth(([&]()->V{V _lhs17635=_v_15605_gy;V _rhs17636=_v_15603_gh;return j::binary("<",_lhs17635,_rhs17636);})());(void)(j::increment(_v_15605_gy,1,false))){{V _v_15606_gx;
_v_15606_gx=V(0.0);
for(;j::truth(([&]()->V{V _lhs17637=_v_15606_gx;V _rhs17638=_v_15602_gw;return j::binary("<",_lhs17637,_rhs17638);})());(void)(j::increment(_v_15606_gx,1,false))){
V _v_15607_a;
V _v_15608_l;
V _v_15609_n;
V _v_15610_y1;
V _v_15611_x1;
_v_15607_a=V(0.0);
_v_15608_l=V(0.0);
_v_15609_n=V(0.0);
_v_15610_y1=([&]()->V{V _receiver17645=j::builtin("Math");V _method17646=this->_literals[59];V _method=j::get(_receiver17645,_method17646);j::Args _params17647=j::Args{j::get(_v_15599_box,this->_literals[48]),([&]()->V{V _lhs17639=([&]()->V{V _lhs17641=_v_15605_gy;V _rhs17642=V(1.0);return j::binary("+",_lhs17641,_rhs17642);})();V _rhs17640=_v_15600_side;return V(j::number(_lhs17639)*j::number(_rhs17640));})()};return j::call(_method,_params17647,_receiver17645);})();
_v_15611_x1=([&]()->V{V _receiver17654=j::builtin("Math");V _method17655=this->_literals[59];V _method=j::get(_receiver17654,_method17655);j::Args _params17656=j::Args{j::get(_v_15599_box,this->_literals[46]),([&]()->V{V _lhs17648=([&]()->V{V _lhs17650=_v_15606_gx;V _rhs17651=V(1.0);return j::binary("+",_lhs17650,_rhs17651);})();V _rhs17649=_v_15600_side;return V(j::number(_lhs17648)*j::number(_rhs17649));})()};return j::call(_method,_params17656,_receiver17654);})();
{V _v_15612_y;
_v_15612_y=([&]()->V{V _lhs17657=_v_15605_gy;V _rhs17658=_v_15600_side;return V(j::number(_lhs17657)*j::number(_rhs17658));})();
for(;j::truth(([&]()->V{V _lhs17659=_v_15612_y;V _rhs17660=_v_15610_y1;return j::binary("<",_lhs17659,_rhs17660);})());(void)((_v_15612_y=j::binary("+",_v_15612_y,_v_15601_step)))){{V _v_15613_x;
_v_15613_x=([&]()->V{V _lhs17662=_v_15606_gx;V _rhs17663=_v_15600_side;return V(j::number(_lhs17662)*j::number(_rhs17663));})();
for(;j::truth(([&]()->V{V _lhs17664=_v_15613_x;V _rhs17665=_v_15611_x1;return j::binary("<",_lhs17664,_rhs17665);})());(void)((_v_15613_x=j::binary("+",_v_15613_x,_v_15601_step)))){
V _v_15614_o;
V _v_15615_al;
_v_15614_o=([&]()->V{V _lhs17667=([&]()->V{V _lhs17669=([&]()->V{V _lhs17671=([&]()->V{V _lhs17673=([&]()->V{V _lhs17675=j::get(_v_15599_box,this->_literals[49]);V _rhs17676=_v_15612_y;return j::binary("+",_lhs17675,_rhs17676);})();V _rhs17674=_v_15598_W;return V(j::number(_lhs17673)*j::number(_rhs17674));})();V _rhs17672=j::get(_v_15599_box,this->_literals[47]);return j::binary("+",_lhs17671,_rhs17672);})();V _rhs17670=_v_15613_x;return j::binary("+",_lhs17669,_rhs17670);})();V _rhs17668=V(4.0);return V(j::number(_lhs17667)*j::number(_rhs17668));})();
_v_15615_al=j::get(_v_15597_data,([&]()->V{V _lhs17677=_v_15614_o;V _rhs17678=V(3.0);return j::binary("+",_lhs17677,_rhs17678);})());
(void)((_v_15607_a=j::binary("+",_v_15607_a,_v_15615_al)));
(void)((_v_15608_l=j::binary("+",_v_15608_l,([&]()->V{V _lhs17681=_v_15615_al;V _rhs17682=([&]()->V{V _lhs17683=([&]()->V{V _lhs17685=([&]()->V{V _lhs17687=V(0.2126);V _rhs17688=j::get(_v_15597_data,_v_15614_o);return V(j::number(_lhs17687)*j::number(_rhs17688));})();V _rhs17686=([&]()->V{V _lhs17689=V(0.7152);V _rhs17690=j::get(_v_15597_data,([&]()->V{V _lhs17691=_v_15614_o;V _rhs17692=V(1.0);return j::binary("+",_lhs17691,_rhs17692);})());return V(j::number(_lhs17689)*j::number(_rhs17690));})();return j::binary("+",_lhs17685,_rhs17686);})();V _rhs17684=([&]()->V{V _lhs17693=V(0.0722);V _rhs17694=j::get(_v_15597_data,([&]()->V{V _lhs17695=_v_15614_o;V _rhs17696=V(2.0);return j::binary("+",_lhs17695,_rhs17696);})());return V(j::number(_lhs17693)*j::number(_rhs17694));})();return j::binary("+",_lhs17683,_rhs17684);})();return V(j::number(_lhs17681)*j::number(_rhs17682));})())));
(void)(j::increment(_v_15609_n,1,false));

}
}
}}
(void)(([&]()->V{V _base17698=_v_15604_lum;V _key17699=([&]()->V{V _lhs17700=([&]()->V{V _lhs17702=_v_15605_gy;V _rhs17703=_v_15602_gw;return V(j::number(_lhs17702)*j::number(_rhs17703));})();V _rhs17701=_v_15606_gx;return j::binary("+",_lhs17700,_rhs17701);})();V _assign17697=(j::truth(([&]()->V{V _lhs17704=_v_15607_a;V _rhs17705=([&]()->V{V _lhs17706=([&]()->V{V _lhs17708=V(0.99);V _rhs17709=V(255.0);return V(j::number(_lhs17708)*j::number(_rhs17709));})();V _rhs17707=_v_15609_n;return V(j::number(_lhs17706)*j::number(_rhs17707));})();return j::binary(">",_lhs17704,_rhs17705);})())?([&]()->V{V _lhs17710=_v_15608_l;V _rhs17711=([&]()->V{V _lhs17712=_v_15607_a;V _rhs17713=V(255.0);return V(j::number(_lhs17712)*j::number(_rhs17713));})();return V(j::number(_lhs17710)/j::number(_rhs17711));})():j::unary("-",V(1.0)));return j::put(_base17698,_key17699,_assign17697);})());

}
}
}}
_v_15616_pairs.get()=V(0.0);
_v_15617_some.get()=V(0.0);
_v_15618_compare=j::function([=](const j::Args &_args_fn15619,const V &_receiver_fn15619,const V &_self_fn15619) mutable ->V{
V _v_15620_a;
V _v_15621_b;
_v_15620_a=_args_fn15619[0];
_v_15621_b=_args_fn15619[1];
{
V _v_15622_d;
if(j::truth(([&]()->V{V _logical17714=([&]()->V{V _lhs17715=_v_15620_a;V _rhs17716=V(0.0);return j::binary("<",_lhs17715,_rhs17716);})();return !j::truth(_logical17714)?([&]()->V{V _lhs17717=_v_15621_b;V _rhs17718=V(0.0);return j::binary("<",_lhs17717,_rhs17718);})():_logical17714;})())){return V{};
}
(void)(j::increment(_v_15616_pairs.get(),1,false));
_v_15622_d=([&]()->V{V _number17721=([&]()->V{V _lhs17722=_v_15620_a;V _rhs17723=_v_15621_b;return V(j::number(_lhs17722)-j::number(_rhs17723));})();return V(std::fabs(j::number(_number17721)));})();
if(j::truth(([&]()->V{V _logical17724=([&]()->V{V _lhs17725=_v_15622_d;V _rhs17726=V(0.02);return j::binary(">",_lhs17725,_rhs17726);})();return j::truth(_logical17724)?([&]()->V{V _lhs17727=_v_15622_d;V _rhs17728=V(0.16);return j::binary("<=",_lhs17727,_rhs17728);})():_logical17724;})())){(void)(j::increment(_v_15617_some.get(),1,false));
}

}

return V{};
},2);
{V _v_15623_gy;
_v_15623_gy=V(0.0);
for(;j::truth(([&]()->V{V _lhs17729=_v_15623_gy;V _rhs17730=_v_15603_gh;return j::binary("<",_lhs17729,_rhs17730);})());(void)(j::increment(_v_15623_gy,1,false))){{V _v_15624_gx;
_v_15624_gx=V(0.0);
for(;j::truth(([&]()->V{V _lhs17731=_v_15624_gx;V _rhs17732=_v_15602_gw;return j::binary("<",_lhs17731,_rhs17732);})());(void)(j::increment(_v_15624_gx,1,false))){
V _v_15625_i;
_v_15625_i=([&]()->V{V _lhs17733=([&]()->V{V _lhs17735=_v_15623_gy;V _rhs17736=_v_15602_gw;return V(j::number(_lhs17735)*j::number(_rhs17736));})();V _rhs17734=_v_15624_gx;return j::binary("+",_lhs17733,_rhs17734);})();
if(j::truth(([&]()->V{V _lhs17737=([&]()->V{V _lhs17739=_v_15624_gx;V _rhs17740=V(1.0);return j::binary("+",_lhs17739,_rhs17740);})();V _rhs17738=_v_15602_gw;return j::binary("<",_lhs17737,_rhs17738);})())){(void)(([&]()->V{V _callee17743=_v_15618_compare;return j::call(_callee17743,j::Args{j::get(_v_15604_lum,_v_15625_i),j::get(_v_15604_lum,([&]()->V{V _lhs17741=_v_15625_i;V _rhs17742=V(1.0);return j::binary("+",_lhs17741,_rhs17742);})())});})());
}
if(j::truth(([&]()->V{V _lhs17744=([&]()->V{V _lhs17746=_v_15623_gy;V _rhs17747=V(1.0);return j::binary("+",_lhs17746,_rhs17747);})();V _rhs17745=_v_15603_gh;return j::binary("<",_lhs17744,_rhs17745);})())){(void)(([&]()->V{V _callee17750=_v_15618_compare;return j::call(_callee17750,j::Args{j::get(_v_15604_lum,_v_15625_i),j::get(_v_15604_lum,([&]()->V{V _lhs17748=_v_15625_i;V _rhs17749=_v_15602_gw;return j::binary("+",_lhs17748,_rhs17749);})())});})());
}

}
}
}}
return ([&]()->V{V _logical17751=([&]()->V{V _lhs17752=_v_15616_pairs.get();V _rhs17753=V(200.0);return j::binary(">=",_lhs17752,_rhs17753);})();return j::truth(_logical17751)?([&]()->V{V _lhs17754=_v_15617_some.get();V _rhs17755=([&]()->V{V _lhs17756=V(0.2);V _rhs17757=_v_15616_pairs.get();return V(j::number(_lhs17756)*j::number(_rhs17757));})();return j::binary(">",_lhs17754,_rhs17755);})():_logical17751;})();

}

return V{};
},3);
this->_v_15626_clearGround.get()=j::function([=](const j::Args &_args_fn15627,const V &_receiver_fn15627,const V &_self_fn15627) mutable ->V{
j::Cell _v_15628_src;
V _v_15629_W;
V _v_15630_H;
V _v_15631_take;
_v_15628_src.get()=_args_fn15627[0];
_v_15629_W=_args_fn15627[1];
_v_15630_H=_args_fn15627[2];
_v_15631_take=_args_fn15627[3];
{
V _v_15632_border;
V _v_15637_buckets;
j::Cell _v_15641_top;
j::Cell _v_15645_g;
j::Cell _v_15651_data;
j::Cell _v_15652_far;
j::Cell _v_15655_out;
j::Cell _v_15656_queue;
V _v_15657_head;
j::Cell _v_15658_tail;
V _v_15660_spread;
_v_15632_border=([&]()->V{j::Args _array17758;return j::array(std::move(_array17758));})();
{V _v_15633_x;
_v_15633_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs17759=_v_15633_x;V _rhs17760=_v_15629_W;return j::binary("<",_lhs17759,_rhs17760);})());(void)(j::increment(_v_15633_x,1,false))){(void)(([&]()->V{V _receiver17767=_v_15632_border;V _method17768=this->_literals[69];V _method=j::get(_receiver17767,_method17768);j::Args _params17769=j::Args{_v_15633_x,([&]()->V{V _lhs17761=([&]()->V{V _lhs17763=([&]()->V{V _lhs17765=_v_15630_H;V _rhs17766=V(1.0);return V(j::number(_lhs17765)-j::number(_rhs17766));})();V _rhs17764=_v_15629_W;return V(j::number(_lhs17763)*j::number(_rhs17764));})();V _rhs17762=_v_15633_x;return j::binary("+",_lhs17761,_rhs17762);})()};return j::call(_method,_params17769,_receiver17767);})());
}}
{V _v_15634_y;
_v_15634_y=V(1.0);
for(;j::truth(([&]()->V{V _lhs17770=_v_15634_y;V _rhs17771=([&]()->V{V _lhs17772=_v_15630_H;V _rhs17773=V(1.0);return V(j::number(_lhs17772)-j::number(_rhs17773));})();return j::binary("<",_lhs17770,_rhs17771);})());(void)(j::increment(_v_15634_y,1,false))){(void)(([&]()->V{V _receiver17782=_v_15632_border;V _method17783=this->_literals[69];V _method=j::get(_receiver17782,_method17783);j::Args _params17784=j::Args{([&]()->V{V _lhs17774=_v_15634_y;V _rhs17775=_v_15629_W;return V(j::number(_lhs17774)*j::number(_rhs17775));})(),([&]()->V{V _lhs17776=([&]()->V{V _lhs17778=([&]()->V{V _lhs17780=_v_15634_y;V _rhs17781=_v_15629_W;return V(j::number(_lhs17780)*j::number(_rhs17781));})();V _rhs17779=_v_15629_W;return j::binary("+",_lhs17778,_rhs17779);})();V _rhs17777=V(1.0);return V(j::number(_lhs17776)-j::number(_rhs17777));})()};return j::call(_method,_params17784,_receiver17782);})());
}}
if(j::truth(([&]()->V{V _lhs17785=j::get(([&]()->V{V _receiver17793=_v_15632_border;V _method17794=this->_literals[66];V _method=j::get(_receiver17793,_method17794);j::Args _params17795=j::Args{j::function([=](const j::Args &_args_fn15635,const V &_receiver_fn15635,const V &_self_fn15635) mutable ->V{
V _v_15636_p;
_v_15636_p=_args_fn15635[0];
return ([&]()->V{V _lhs17787=j::get(_v_15628_src.get(),([&]()->V{V _lhs17789=([&]()->V{V _lhs17791=_v_15636_p;V _rhs17792=V(4.0);return V(j::number(_lhs17791)*j::number(_rhs17792));})();V _rhs17790=V(3.0);return j::binary("+",_lhs17789,_rhs17790);})());V _rhs17788=V(128.0);return j::binary("<",_lhs17787,_rhs17788);})();
return V{};
},1)};return j::call(_method,_params17795,_receiver17793);})(),this->_literals[1]);V _rhs17786=([&]()->V{V _lhs17796=j::get(_v_15632_border,this->_literals[1]);V _rhs17797=V(2.0);return V(j::number(_lhs17796)/j::number(_rhs17797));})();return j::binary(">",_lhs17785,_rhs17786);})())){return ([&]()->V{V _obj17798=j::object();j::put(_obj17798,this->_literals[45],_v_15628_src.get());j::put(_obj17798,this->_literals[77],V(false));j::put(_obj17798,this->_literals[78],V(false));return _obj17798;})();
}
_v_15637_buckets=([&]()->V{V _callee17799=j::builtin("Map");return j::construct(_callee17799,j::Args{});})();
{for(const auto &_item17800:j::elements(_v_15632_border)){V _v_15638_p;
_v_15638_p=_item17800;
{
V _v_15639_i;
V _v_15640_key;
_v_15639_i=([&]()->V{V _lhs17801=_v_15638_p;V _rhs17802=V(4.0);return V(j::number(_lhs17801)*j::number(_rhs17802));})();
_v_15640_key=([&]()->V{V _lhs17803=([&]()->V{V _lhs17805=([&]()->V{V _lhs17807=([&]()->V{V _lhs17809=j::get(_v_15628_src.get(),_v_15639_i);V _rhs17810=V(4.0);return V(int(j::i32(_lhs17809)>>(j::u32(_rhs17810)&31)));})();V _rhs17808=V(8.0);return V(double(int32_t(j::u32(_lhs17807)<<(j::u32(_rhs17808)&31))));})();V _rhs17806=([&]()->V{V _lhs17811=([&]()->V{V _lhs17813=j::get(_v_15628_src.get(),([&]()->V{V _lhs17815=_v_15639_i;V _rhs17816=V(1.0);return j::binary("+",_lhs17815,_rhs17816);})());V _rhs17814=V(4.0);return V(int(j::i32(_lhs17813)>>(j::u32(_rhs17814)&31)));})();V _rhs17812=V(4.0);return V(double(int32_t(j::u32(_lhs17811)<<(j::u32(_rhs17812)&31))));})();return V(int(j::i32(_lhs17805)|j::i32(_rhs17806)));})();V _rhs17804=([&]()->V{V _lhs17817=j::get(_v_15628_src.get(),([&]()->V{V _lhs17819=_v_15639_i;V _rhs17820=V(2.0);return j::binary("+",_lhs17819,_rhs17820);})());V _rhs17818=V(4.0);return V(int(j::i32(_lhs17817)>>(j::u32(_rhs17818)&31)));})();return V(int(j::i32(_lhs17803)|j::i32(_rhs17804)));})();
(void)(([&]()->V{V _receiver17821=([&]()->V{V _logical17824=([&]()->V{V _receiver17825=_v_15637_buckets;V _method17826=this->_literals[62];V _method=j::get(_receiver17825,_method17826);j::Args _params17827=j::Args{_v_15640_key};return j::call(_method,_params17827,_receiver17825);})();return j::nullish(_logical17824)?([&]()->V{V _receiver17828=([&]()->V{V _receiver17832=_v_15637_buckets;V _method17833=this->_literals[63];V _method=j::get(_receiver17832,_method17833);j::Args _params17834=j::Args{_v_15640_key,([&]()->V{j::Args _array17831;return j::array(std::move(_array17831));})()};return j::call(_method,_params17834,_receiver17832);})();V _method17829=this->_literals[62];V _method=j::get(_receiver17828,_method17829);j::Args _params17830=j::Args{_v_15640_key};return j::call(_method,_params17830,_receiver17828);})():_logical17824;})();V _method17822=this->_literals[69];V _method=j::get(_receiver17821,_method17822);j::Args _params17823=j::Args{_v_15638_p};return j::call(_method,_params17823,_receiver17821);})());

}
}}
_v_15641_top.get()=j::get(([&]()->V{V _receiver17837=([&]()->V{j::Args _array17840;for(const auto &_value:j::elements(([&]()->V{V _receiver17841=_v_15637_buckets;V _method17842=this->_literals[79];V _method=j::get(_receiver17841,_method17842);j::Args _params17843=j::Args{};return j::call(_method,_params17843,_receiver17841);})()))_array17840.push_back(_value);return j::array(std::move(_array17840));})();V _method17838=this->_literals[67];V _method=j::get(_receiver17837,_method17838);j::Args _params17839=j::Args{j::function([=](const j::Args &_args_fn15642,const V &_receiver_fn15642,const V &_self_fn15642) mutable ->V{
V _v_15643_a;
V _v_15644_b;
_v_15643_a=_args_fn15642[0];
_v_15644_b=_args_fn15642[1];
return ([&]()->V{V _lhs17835=j::get(_v_15644_b,this->_literals[1]);V _rhs17836=j::get(_v_15643_a,this->_literals[1]);return V(j::number(_lhs17835)-j::number(_rhs17836));})();
return V{};
},2)};return j::call(_method,_params17839,_receiver17837);})(),V(0.0));
if(j::truth(([&]()->V{V _lhs17844=j::get(_v_15641_top.get(),this->_literals[1]);V _rhs17845=([&]()->V{V _lhs17846=j::get(_v_15632_border,this->_literals[1]);V _rhs17847=this->_v_15283_SHARE.get();return V(j::number(_lhs17846)*j::number(_rhs17847));})();return j::binary("<",_lhs17844,_rhs17845);})())){return ([&]()->V{V _obj17848=j::object();j::put(_obj17848,this->_literals[45],_v_15628_src.get());j::put(_obj17848,this->_literals[77],V(true));j::put(_obj17848,this->_literals[78],V(false));return _obj17848;})();
}
if(j::truth(j::unary("!",_v_15631_take))){return ([&]()->V{V _obj17849=j::object();j::put(_obj17849,this->_literals[45],_v_15628_src.get());j::put(_obj17849,this->_literals[77],V(true));j::put(_obj17849,this->_literals[78],V(true));return _obj17849;})();
}
_v_15645_g.get()=([&]()->V{V _receiver17873=([&]()->V{j::Args _array17876;_array17876.push_back(V(0.0));_array17876.push_back(V(1.0));_array17876.push_back(V(2.0));return j::array(std::move(_array17876));})();V _method17874=this->_literals[72];V _method=j::get(_receiver17873,_method17874);j::Args _params17875=j::Args{j::function([=](const j::Args &_args_fn15646,const V &_receiver_fn15646,const V &_self_fn15646) mutable ->V{
j::Cell _v_15647_c;
_v_15647_c.get()=_args_fn15646[0];
return ([&]()->V{V _number17861=([&]()->V{V _lhs17862=([&]()->V{V _receiver17870=_v_15641_top.get();V _method17871=this->_literals[80];V _method=j::get(_receiver17870,_method17871);j::Args _params17872=j::Args{j::function([=](const j::Args &_args_fn15648,const V &_receiver_fn15648,const V &_self_fn15648) mutable ->V{
V _v_15649_s;
V _v_15650_p;
_v_15649_s=_args_fn15648[0];
_v_15650_p=_args_fn15648[1];
return ([&]()->V{V _lhs17864=_v_15649_s;V _rhs17865=j::get(_v_15628_src.get(),([&]()->V{V _lhs17866=([&]()->V{V _lhs17868=_v_15650_p;V _rhs17869=V(4.0);return V(j::number(_lhs17868)*j::number(_rhs17869));})();V _rhs17867=_v_15647_c.get();return j::binary("+",_lhs17866,_rhs17867);})());return j::binary("+",_lhs17864,_rhs17865);})();
return V{};
},2),V(0.0)};return j::call(_method,_params17872,_receiver17870);})();V _rhs17863=j::get(_v_15641_top.get(),this->_literals[1]);return V(j::number(_lhs17862)/j::number(_rhs17863));})();return V(std::floor(j::number(_number17861)+.5));})();
return V{};
},1)};return j::call(_method,_params17875,_receiver17873);})();
_v_15651_data.get()=([&]()->V{V _callee17884=j::builtin("Uint8ClampedArray");return j::construct(_callee17884,j::Args{([&]()->V{V _receiver17881=_v_15628_src.get();V _method17882=this->_literals[81];V _method=j::get(_receiver17881,_method17882);j::Args _params17883=j::Args{V(0.0),([&]()->V{V _lhs17877=([&]()->V{V _lhs17879=_v_15629_W;V _rhs17880=_v_15630_H;return V(j::number(_lhs17879)*j::number(_rhs17880));})();V _rhs17878=V(4.0);return V(j::number(_lhs17877)*j::number(_rhs17878));})()};return j::call(_method,_params17883,_receiver17881);})()});})();
_v_15652_far.get()=j::function([=](const j::Args &_args_fn15653,const V &_receiver_fn15653,const V &_self_fn15653) mutable ->V{
V _v_15654_p;
_v_15654_p=_args_fn15653[0];
return ([&]()->V{V _number17901=([&]()->V{V _lhs17904=j::get(_v_15651_data.get(),([&]()->V{V _lhs17906=_v_15654_p;V _rhs17907=V(4.0);return V(j::number(_lhs17906)*j::number(_rhs17907));})());V _rhs17905=j::get(_v_15645_g.get(),V(0.0));return V(j::number(_lhs17904)-j::number(_rhs17905));})();V _number17902=([&]()->V{V _lhs17908=j::get(_v_15651_data.get(),([&]()->V{V _lhs17910=([&]()->V{V _lhs17912=_v_15654_p;V _rhs17913=V(4.0);return V(j::number(_lhs17912)*j::number(_rhs17913));})();V _rhs17911=V(1.0);return j::binary("+",_lhs17910,_rhs17911);})());V _rhs17909=j::get(_v_15645_g.get(),V(1.0));return V(j::number(_lhs17908)-j::number(_rhs17909));})();V _number17903=([&]()->V{V _lhs17914=j::get(_v_15651_data.get(),([&]()->V{V _lhs17916=([&]()->V{V _lhs17918=_v_15654_p;V _rhs17919=V(4.0);return V(j::number(_lhs17918)*j::number(_rhs17919));})();V _rhs17917=V(2.0);return j::binary("+",_lhs17916,_rhs17917);})());V _rhs17915=j::get(_v_15645_g.get(),V(2.0));return V(j::number(_lhs17914)-j::number(_rhs17915));})();return V(std::hypot(j::number(_number17901),j::number(_number17902),j::number(_number17903)));})();
return V{};
},1);
_v_15655_out.get()=([&]()->V{V _callee17922=j::builtin("Uint8Array");return j::construct(_callee17922,j::Args{([&]()->V{V _lhs17920=_v_15629_W;V _rhs17921=_v_15630_H;return V(j::number(_lhs17920)*j::number(_rhs17921));})()});})();
_v_15656_queue.get()=([&]()->V{V _callee17925=j::builtin("Int32Array");return j::construct(_callee17925,j::Args{([&]()->V{V _lhs17923=_v_15629_W;V _rhs17924=_v_15630_H;return V(j::number(_lhs17923)*j::number(_rhs17924));})()});})();
_v_15657_head=V(0.0);
_v_15658_tail.get()=V(0.0);
{for(const auto &_item17926:j::elements(_v_15632_border)){V _v_15659_p;
_v_15659_p=_item17926;
if(j::truth(([&]()->V{V _logical17927=j::unary("!",j::get(_v_15655_out.get(),_v_15659_p));return j::truth(_logical17927)?([&]()->V{V _lhs17928=([&]()->V{V _callee17930=_v_15652_far.get();return j::call(_callee17930,j::Args{_v_15659_p});})();V _rhs17929=this->_v_15282_NEAR.get();return j::binary("<",_lhs17928,_rhs17929);})():_logical17927;})())){(void)((([&]()->V{V _base17932=_v_15655_out.get();V _key17933=_v_15659_p;V _assign17931=V(1.0);return j::put(_base17932,_key17933,_assign17931);})(),([&]()->V{V _base17935=_v_15656_queue.get();V _key17936=j::increment(_v_15658_tail.get(),1,false);V _assign17934=_v_15659_p;return j::put(_base17935,_key17936,_assign17934);})()));
}
}}
_v_15660_spread=j::function([=](const j::Args &_args_fn15661,const V &_receiver_fn15661,const V &_self_fn15661) mutable ->V{
V _v_15662_q;
_v_15662_q=_args_fn15661[0];
{
if(j::truth(([&]()->V{V _logical17937=j::unary("!",j::get(_v_15655_out.get(),_v_15662_q));return j::truth(_logical17937)?([&]()->V{V _lhs17938=([&]()->V{V _callee17940=_v_15652_far.get();return j::call(_callee17940,j::Args{_v_15662_q});})();V _rhs17939=this->_v_15282_NEAR.get();return j::binary("<",_lhs17938,_rhs17939);})():_logical17937;})())){(void)((([&]()->V{V _base17942=_v_15655_out.get();V _key17943=_v_15662_q;V _assign17941=V(1.0);return j::put(_base17942,_key17943,_assign17941);})(),([&]()->V{V _base17945=_v_15656_queue.get();V _key17946=j::increment(_v_15658_tail.get(),1,false);V _assign17944=_v_15662_q;return j::put(_base17945,_key17946,_assign17944);})()));
}

}

return V{};
},1);
while(j::truth(([&]()->V{V _lhs17947=_v_15657_head;V _rhs17948=_v_15658_tail.get();return j::binary("<",_lhs17947,_rhs17948);})())){
V _v_15663_p;
V _v_15664_x;
_v_15663_p=j::get(_v_15656_queue.get(),j::increment(_v_15657_head,1,false));
_v_15664_x=([&]()->V{V _lhs17949=_v_15663_p;V _rhs17950=_v_15629_W;return V(std::fmod(j::number(_lhs17949),j::number(_rhs17950)));})();
if(j::truth(([&]()->V{V _lhs17951=_v_15664_x;V _rhs17952=V(0.0);return j::binary(">",_lhs17951,_rhs17952);})())){(void)(([&]()->V{V _callee17955=_v_15660_spread;return j::call(_callee17955,j::Args{([&]()->V{V _lhs17953=_v_15663_p;V _rhs17954=V(1.0);return V(j::number(_lhs17953)-j::number(_rhs17954));})()});})());
}
if(j::truth(([&]()->V{V _lhs17956=_v_15664_x;V _rhs17957=([&]()->V{V _lhs17958=_v_15629_W;V _rhs17959=V(1.0);return V(j::number(_lhs17958)-j::number(_rhs17959));})();return j::binary("<",_lhs17956,_rhs17957);})())){(void)(([&]()->V{V _callee17962=_v_15660_spread;return j::call(_callee17962,j::Args{([&]()->V{V _lhs17960=_v_15663_p;V _rhs17961=V(1.0);return j::binary("+",_lhs17960,_rhs17961);})()});})());
}
if(j::truth(([&]()->V{V _lhs17963=_v_15663_p;V _rhs17964=_v_15629_W;return j::binary(">=",_lhs17963,_rhs17964);})())){(void)(([&]()->V{V _callee17967=_v_15660_spread;return j::call(_callee17967,j::Args{([&]()->V{V _lhs17965=_v_15663_p;V _rhs17966=_v_15629_W;return V(j::number(_lhs17965)-j::number(_rhs17966));})()});})());
}
if(j::truth(([&]()->V{V _lhs17968=([&]()->V{V _lhs17970=_v_15663_p;V _rhs17971=_v_15629_W;return j::binary("+",_lhs17970,_rhs17971);})();V _rhs17969=([&]()->V{V _lhs17972=_v_15629_W;V _rhs17973=_v_15630_H;return V(j::number(_lhs17972)*j::number(_rhs17973));})();return j::binary("<",_lhs17968,_rhs17969);})())){(void)(([&]()->V{V _callee17976=_v_15660_spread;return j::call(_callee17976,j::Args{([&]()->V{V _lhs17974=_v_15663_p;V _rhs17975=_v_15629_W;return j::binary("+",_lhs17974,_rhs17975);})()});})());
}

}

{V _v_15665_p;
_v_15665_p=V(0.0);
for(;j::truth(([&]()->V{V _lhs17977=_v_15665_p;V _rhs17978=([&]()->V{V _lhs17979=_v_15629_W;V _rhs17980=_v_15630_H;return V(j::number(_lhs17979)*j::number(_rhs17980));})();return j::binary("<",_lhs17977,_rhs17978);})());(void)(j::increment(_v_15665_p,1,false))){
V _v_15666_x;
V _v_15667_beside;
if(j::truth(j::get(_v_15655_out.get(),_v_15665_p))){
(void)(([&]()->V{V _base17982=_v_15651_data.get();V _key17983=([&]()->V{V _lhs17984=([&]()->V{V _lhs17986=_v_15665_p;V _rhs17987=V(4.0);return V(j::number(_lhs17986)*j::number(_rhs17987));})();V _rhs17985=V(3.0);return j::binary("+",_lhs17984,_rhs17985);})();V _assign17981=V(0.0);return j::put(_base17982,_key17983,_assign17981);})());
continue;

}

_v_15666_x=([&]()->V{V _lhs17988=_v_15665_p;V _rhs17989=_v_15629_W;return V(std::fmod(j::number(_lhs17988),j::number(_rhs17989)));})();
_v_15667_beside=([&]()->V{V _logical17990=([&]()->V{V _logical17991=([&]()->V{V _logical17992=([&]()->V{V _logical17993=([&]()->V{V _lhs17994=_v_15666_x;V _rhs17995=V(0.0);return j::binary(">",_lhs17994,_rhs17995);})();return j::truth(_logical17993)?j::get(_v_15655_out.get(),([&]()->V{V _lhs17996=_v_15665_p;V _rhs17997=V(1.0);return V(j::number(_lhs17996)-j::number(_rhs17997));})()):_logical17993;})();return !j::truth(_logical17992)?([&]()->V{V _logical17998=([&]()->V{V _lhs17999=_v_15666_x;V _rhs18000=([&]()->V{V _lhs18001=_v_15629_W;V _rhs18002=V(1.0);return V(j::number(_lhs18001)-j::number(_rhs18002));})();return j::binary("<",_lhs17999,_rhs18000);})();return j::truth(_logical17998)?j::get(_v_15655_out.get(),([&]()->V{V _lhs18003=_v_15665_p;V _rhs18004=V(1.0);return j::binary("+",_lhs18003,_rhs18004);})()):_logical17998;})():_logical17992;})();return !j::truth(_logical17991)?([&]()->V{V _logical18005=([&]()->V{V _lhs18006=_v_15665_p;V _rhs18007=_v_15629_W;return j::binary(">=",_lhs18006,_rhs18007);})();return j::truth(_logical18005)?j::get(_v_15655_out.get(),([&]()->V{V _lhs18008=_v_15665_p;V _rhs18009=_v_15629_W;return V(j::number(_lhs18008)-j::number(_rhs18009));})()):_logical18005;})():_logical17991;})();return !j::truth(_logical17990)?([&]()->V{V _logical18010=([&]()->V{V _lhs18011=([&]()->V{V _lhs18013=_v_15665_p;V _rhs18014=_v_15629_W;return j::binary("+",_lhs18013,_rhs18014);})();V _rhs18012=([&]()->V{V _lhs18015=_v_15629_W;V _rhs18016=_v_15630_H;return V(j::number(_lhs18015)*j::number(_rhs18016));})();return j::binary("<",_lhs18011,_rhs18012);})();return j::truth(_logical18010)?j::get(_v_15655_out.get(),([&]()->V{V _lhs18017=_v_15665_p;V _rhs18018=_v_15629_W;return j::binary("+",_lhs18017,_rhs18018);})()):_logical18010;})():_logical17990;})();
if(j::truth(_v_15667_beside)){(void)(([&]()->V{V _base18020=_v_15651_data.get();V _key18021=([&]()->V{V _lhs18022=([&]()->V{V _lhs18024=_v_15665_p;V _rhs18025=V(4.0);return V(j::number(_lhs18024)*j::number(_rhs18025));})();V _rhs18023=V(3.0);return j::binary("+",_lhs18022,_rhs18023);})();V _assign18019=([&]()->V{V _number18043=([&]()->V{V _lhs18044=V(255.0);V _rhs18045=([&]()->V{V _receiver18058=j::builtin("Math");V _method18059=this->_literals[60];V _method=j::get(_receiver18058,_method18059);j::Args _params18060=j::Args{V(0.0),([&]()->V{V _receiver18053=j::builtin("Math");V _method18054=this->_literals[59];V _method=j::get(_receiver18053,_method18054);j::Args _params18055=j::Args{V(1.0),([&]()->V{V _lhs18046=([&]()->V{V _lhs18048=([&]()->V{V _callee18050=_v_15652_far.get();return j::call(_callee18050,j::Args{_v_15665_p});})();V _rhs18049=this->_v_15282_NEAR.get();return V(j::number(_lhs18048)-j::number(_rhs18049));})();V _rhs18047=this->_v_15282_NEAR.get();return V(j::number(_lhs18046)/j::number(_rhs18047));})()};return j::call(_method,_params18055,_receiver18053);})()};return j::call(_method,_params18060,_receiver18058);})();return V(j::number(_lhs18044)*j::number(_rhs18045));})();return V(std::floor(j::number(_number18043)+.5));})();return j::put(_base18020,_key18021,_assign18019);})());
}

}
}
return ([&]()->V{V _obj18061=j::object();j::put(_obj18061,this->_literals[45],_v_15651_data.get());j::put(_obj18061,this->_literals[77],V(true));j::put(_obj18061,this->_literals[78],V(true));j::put(_obj18061,this->_literals[50],([&]()->V{V _callee18062=this->_v_15269_hex.get();return j::call(_callee18062,j::Args{_v_15645_g.get()});})());return _obj18061;})();

}

return V{};
},4);
this->_v_15668_white.get()=j::function([=](const j::Args &_args_fn15669,const V &_receiver_fn15669,const V &_self_fn15669) mutable ->V{
V _v_15670_r;
V _v_15671_g;
V _v_15672_b;
_v_15670_r=_args_fn15669[0];
_v_15671_g=_args_fn15669[1];
_v_15672_b=_args_fn15669[2];
{
return ([&]()->V{V _logical18063=([&]()->V{V _logical18064=([&]()->V{V _lhs18065=_v_15670_r;V _rhs18066=V(215.0);return j::binary(">",_lhs18065,_rhs18066);})();return j::truth(_logical18064)?([&]()->V{V _lhs18067=_v_15671_g;V _rhs18068=V(215.0);return j::binary(">",_lhs18067,_rhs18068);})():_logical18064;})();return j::truth(_logical18063)?([&]()->V{V _lhs18069=_v_15672_b;V _rhs18070=V(215.0);return j::binary(">",_lhs18069,_rhs18070);})():_logical18063;})();

}

return V{};
},3);
this->_v_15673_pick.get()=j::function([=](const j::Args &_args_fn15674,const V &_receiver_fn15674,const V &_self_fn15674) mutable ->V{
V _v_15675_v;
V _v_15676_at;
_v_15675_v=_args_fn15674[0];
_v_15676_at=_args_fn15674[1];
{
V _v_15677_len;
V _v_15678_min;
V _v_15679_max;
V _v_15681_best;
V _v_15682_bd;
V _v_15686_e;
_v_15677_len=([&]()->V{V _lhs18071=this->_v_15277_GX.get();V _rhs18072=this->_v_15278_GY.get();return V(j::number(_lhs18071)*j::number(_rhs18072));})();
_v_15678_min=V(1.0);
_v_15679_max=V(0.0);
{V _v_15680_i;
_v_15680_i=_v_15676_at;
for(;j::truth(([&]()->V{V _lhs18073=_v_15680_i;V _rhs18074=([&]()->V{V _lhs18075=_v_15676_at;V _rhs18076=_v_15677_len;return j::binary("+",_lhs18075,_rhs18076);})();return j::binary("<",_lhs18073,_rhs18074);})());(void)(j::increment(_v_15680_i,1,false))){(void)(((_v_15678_min=([&]()->V{V _receiver18080=j::builtin("Math");V _method18081=this->_literals[59];V _method=j::get(_receiver18080,_method18081);j::Args _params18082=j::Args{_v_15678_min,j::get(_v_15675_v,_v_15680_i)};return j::call(_method,_params18082,_receiver18080);})()),(_v_15679_max=([&]()->V{V _receiver18086=j::builtin("Math");V _method18087=this->_literals[60];V _method=j::get(_receiver18086,_method18087);j::Args _params18088=j::Args{_v_15679_max,j::get(_v_15675_v,_v_15680_i)};return j::call(_method,_params18088,_receiver18086);})())));
}}
if(j::truth(([&]()->V{V _lhs18089=_v_15679_max;V _rhs18090=V(0.1);return j::binary("<",_lhs18089,_rhs18090);})())){return this->_literals[51];
}
if(j::truth(([&]()->V{V _lhs18091=_v_15678_min;V _rhs18092=V(0.8);return j::binary(">",_lhs18091,_rhs18092);})())){return this->_v_15275_FILL.get();
}
_v_15681_best=this->_literals[51];
_v_15682_bd=j::builtin("Infinity");
{for(const auto &_item18093:j::elements(this->_v_15276_GLYPHS.get())){V _v_15683_g;
_v_15683_g=_item18093;
{
V _v_15684_d;
_v_15684_d=V(0.0);
{V _v_15685_i;
_v_15685_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs18094=_v_15685_i;V _rhs18095=_v_15677_len;return j::binary("<",_lhs18094,_rhs18095);})());(void)(j::increment(_v_15685_i,1,false))){(void)((_v_15684_d=j::binary("+",_v_15684_d,([&]()->V{V _lhs18097=([&]()->V{V _lhs18099=j::get(_v_15675_v,([&]()->V{V _lhs18101=_v_15676_at;V _rhs18102=_v_15685_i;return j::binary("+",_lhs18101,_rhs18102);})());V _rhs18100=j::get(j::get(_v_15683_g,this->_literals[82]),_v_15685_i);return V(j::number(_lhs18099)-j::number(_rhs18100));})();V _rhs18098=V(2.0);return V(std::pow(j::number(_lhs18097),j::number(_rhs18098)));})())));
}}
if(j::truth(([&]()->V{V _lhs18103=_v_15684_d;V _rhs18104=_v_15682_bd;return j::binary("<",_lhs18103,_rhs18104);})())){(void)(((_v_15682_bd=_v_15684_d),(_v_15681_best=j::get(_v_15683_g,this->_literals[83]))));
}

}
}}
_v_15686_e=V(0.0);
{V _v_15687_i;
_v_15687_i=_v_15676_at;
for(;j::truth(([&]()->V{V _lhs18107=_v_15687_i;V _rhs18108=([&]()->V{V _lhs18109=_v_15676_at;V _rhs18110=_v_15677_len;return j::binary("+",_lhs18109,_rhs18110);})();return j::binary("<",_lhs18107,_rhs18108);})());(void)(j::increment(_v_15687_i,1,false))){(void)((_v_15686_e=j::binary("+",_v_15686_e,([&]()->V{V _lhs18112=j::get(_v_15675_v,_v_15687_i);V _rhs18113=j::get(_v_15675_v,_v_15687_i);return V(j::number(_lhs18112)*j::number(_rhs18113));})())));
}}
return (j::truth(([&]()->V{V _lhs18114=_v_15686_e;V _rhs18115=_v_15682_bd;return j::binary("<",_lhs18114,_rhs18115);})())?this->_literals[51]:_v_15681_best);

}

return V{};
},2);
this->_v_15692_quantize.get()=j::function([=](const j::Args &_args_fn15693,const V &_receiver_fn15693,const V &_self_fn15693) mutable ->V{
V _v_15694_data;
V _v_15695_W;
V _v_15696_box;
V _v_15697_k;
_v_15694_data=_args_fn15693[0];
_v_15695_W=_args_fn15693[1];
_v_15696_box=_args_fn15693[2];
V _default18116=_args_fn15693[3];if(_default18116.kind==V::Undefined||_default18116.kind==V::Hole)_default18116=V(8.0);
_v_15697_k=_default18116;
{
V _v_15698_px;
V _v_15699_counts;
V _v_15700_total;
V _v_15701_step;
V _v_15706_m;
V _v_15707_pr;
V _v_15708_pg;
V _v_15709_pb;
V _v_15710_pw;
V _v_15711_j;
j::Cell _v_15714_C;
_v_15698_px=([&]()->V{j::Args _array18117;return j::array(std::move(_array18117));})();
_v_15699_counts=([&]()->V{V _callee18118=j::builtin("Map");return j::construct(_callee18118,j::Args{});})();
_v_15700_total=V(0.0);
_v_15701_step=([&]()->V{V _receiver18140=j::builtin("Math");V _method18141=this->_literals[60];V _method=j::get(_receiver18140,_method18141);j::Args _params18142=j::Args{V(1.0),([&]()->V{V _number18128=([&]()->V{V _number18133=([&]()->V{V _lhs18134=([&]()->V{V _lhs18136=j::get(_v_15696_box,this->_literals[46]);V _rhs18137=j::get(_v_15696_box,this->_literals[48]);return V(j::number(_lhs18136)*j::number(_rhs18137));})();V _rhs18135=V(500000.0);return V(j::number(_lhs18134)/j::number(_rhs18135));})();return V(std::sqrt(j::number(_number18133)));})();return V(std::ceil(j::number(_number18128)));})()};return j::call(_method,_params18142,_receiver18140);})();
{V _v_15702_y;
_v_15702_y=j::get(_v_15696_box,this->_literals[49]);
for(;j::truth(([&]()->V{V _lhs18143=_v_15702_y;V _rhs18144=([&]()->V{V _lhs18145=j::get(_v_15696_box,this->_literals[49]);V _rhs18146=j::get(_v_15696_box,this->_literals[48]);return j::binary("+",_lhs18145,_rhs18146);})();return j::binary("<",_lhs18143,_rhs18144);})());(void)((_v_15702_y=j::binary("+",_v_15702_y,_v_15701_step)))){{V _v_15703_x;
_v_15703_x=j::get(_v_15696_box,this->_literals[47]);
for(;j::truth(([&]()->V{V _lhs18148=_v_15703_x;V _rhs18149=([&]()->V{V _lhs18150=j::get(_v_15696_box,this->_literals[47]);V _rhs18151=j::get(_v_15696_box,this->_literals[46]);return j::binary("+",_lhs18150,_rhs18151);})();return j::binary("<",_lhs18148,_rhs18149);})());(void)((_v_15703_x=j::binary("+",_v_15703_x,_v_15701_step)))){
V _v_15704_i;
V _v_15705_key;
_v_15704_i=([&]()->V{V _lhs18153=([&]()->V{V _lhs18155=([&]()->V{V _lhs18157=_v_15702_y;V _rhs18158=_v_15695_W;return V(j::number(_lhs18157)*j::number(_rhs18158));})();V _rhs18156=_v_15703_x;return j::binary("+",_lhs18155,_rhs18156);})();V _rhs18154=V(4.0);return V(j::number(_lhs18153)*j::number(_rhs18154));})();
if(j::truth(([&]()->V{V _lhs18159=j::get(_v_15694_data,([&]()->V{V _lhs18161=_v_15704_i;V _rhs18162=V(3.0);return j::binary("+",_lhs18161,_rhs18162);})());V _rhs18160=V(200.0);return j::binary("<=",_lhs18159,_rhs18160);})())){continue;
}
if(j::truth(([&]()->V{V _lhs18163=([&]()->V{V _lhs18165=j::increment(_v_15700_total,1,false);V _rhs18166=V(7.0);return V(std::fmod(j::number(_lhs18165),j::number(_rhs18166)));})();V _rhs18164=V(0.0);return V(j::equal(_lhs18163,_rhs18164,true));})())){(void)(([&]()->V{V _receiver18172=_v_15698_px;V _method18173=this->_literals[69];V _method=j::get(_receiver18172,_method18173);j::Args _params18174=j::Args{([&]()->V{j::Args _array18167;_array18167.push_back(j::get(_v_15694_data,_v_15704_i));_array18167.push_back(j::get(_v_15694_data,([&]()->V{V _lhs18168=_v_15704_i;V _rhs18169=V(1.0);return j::binary("+",_lhs18168,_rhs18169);})()));_array18167.push_back(j::get(_v_15694_data,([&]()->V{V _lhs18170=_v_15704_i;V _rhs18171=V(2.0);return j::binary("+",_lhs18170,_rhs18171);})()));return j::array(std::move(_array18167));})()};return j::call(_method,_params18174,_receiver18172);})());
}
_v_15705_key=([&]()->V{V _lhs18175=([&]()->V{V _lhs18177=([&]()->V{V _lhs18179=j::get(_v_15694_data,_v_15704_i);V _rhs18180=V(16.0);return V(double(int32_t(j::u32(_lhs18179)<<(j::u32(_rhs18180)&31))));})();V _rhs18178=([&]()->V{V _lhs18181=j::get(_v_15694_data,([&]()->V{V _lhs18183=_v_15704_i;V _rhs18184=V(1.0);return j::binary("+",_lhs18183,_rhs18184);})());V _rhs18182=V(8.0);return V(double(int32_t(j::u32(_lhs18181)<<(j::u32(_rhs18182)&31))));})();return V(int(j::i32(_lhs18177)|j::i32(_rhs18178)));})();V _rhs18176=j::get(_v_15694_data,([&]()->V{V _lhs18185=_v_15704_i;V _rhs18186=V(2.0);return j::binary("+",_lhs18185,_rhs18186);})());return V(int(j::i32(_lhs18175)|j::i32(_rhs18176)));})();
(void)(([&]()->V{V _receiver18193=_v_15699_counts;V _method18194=this->_literals[63];V _method=j::get(_receiver18193,_method18194);j::Args _params18195=j::Args{_v_15705_key,([&]()->V{V _lhs18187=([&]()->V{V _logical18189=([&]()->V{V _receiver18190=_v_15699_counts;V _method18191=this->_literals[62];V _method=j::get(_receiver18190,_method18191);j::Args _params18192=j::Args{_v_15705_key};return j::call(_method,_params18192,_receiver18190);})();return j::nullish(_logical18189)?V(0.0):_logical18189;})();V _rhs18188=V(1.0);return j::binary("+",_lhs18187,_rhs18188);})()};return j::call(_method,_params18195,_receiver18193);})());

}
}
}}
if(j::truth(j::unary("!",_v_15700_total))){return ([&]()->V{j::Args _array18196;_array18196.push_back(([&]()->V{j::Args _array18197;_array18197.push_back(V(0.0));_array18197.push_back(V(0.0));_array18197.push_back(V(0.0));return j::array(std::move(_array18197));})());return j::array(std::move(_array18196));})();
}
_v_15706_m=j::get(_v_15699_counts,this->_literals[71]);
_v_15707_pr=([&]()->V{V _callee18198=j::builtin("Float64Array");return j::construct(_callee18198,j::Args{_v_15706_m});})();
_v_15708_pg=([&]()->V{V _callee18199=j::builtin("Float64Array");return j::construct(_callee18199,j::Args{_v_15706_m});})();
_v_15709_pb=([&]()->V{V _callee18200=j::builtin("Float64Array");return j::construct(_callee18200,j::Args{_v_15706_m});})();
_v_15710_pw=([&]()->V{V _callee18201=j::builtin("Float64Array");return j::construct(_callee18201,j::Args{_v_15706_m});})();
_v_15711_j=V(0.0);
{for(const auto &_item18202:j::elements(_v_15699_counts)){V _v_15712_key;
V _v_15713_w;
V _pattern18203=_item18202;
_v_15712_key=j::get(_pattern18203,V(0));
_v_15713_w=j::get(_pattern18203,V(1));
(void)((([&]()->V{V _base18205=_v_15707_pr;V _key18206=_v_15711_j;V _assign18204=([&]()->V{V _lhs18207=_v_15712_key;V _rhs18208=V(16.0);return V(int(j::i32(_lhs18207)>>(j::u32(_rhs18208)&31)));})();return j::put(_base18205,_key18206,_assign18204);})(),([&]()->V{V _base18210=_v_15708_pg;V _key18211=_v_15711_j;V _assign18209=([&]()->V{V _lhs18212=([&]()->V{V _lhs18214=_v_15712_key;V _rhs18215=V(8.0);return V(int(j::i32(_lhs18214)>>(j::u32(_rhs18215)&31)));})();V _rhs18213=V(255.0);return V(int(j::i32(_lhs18212)&j::i32(_rhs18213)));})();return j::put(_base18210,_key18211,_assign18209);})(),([&]()->V{V _base18217=_v_15709_pb;V _key18218=_v_15711_j;V _assign18216=([&]()->V{V _lhs18219=_v_15712_key;V _rhs18220=V(255.0);return V(int(j::i32(_lhs18219)&j::i32(_rhs18220)));})();return j::put(_base18217,_key18218,_assign18216);})(),([&]()->V{V _base18222=_v_15710_pw;V _key18223=j::increment(_v_15711_j,1,false);V _assign18221=_v_15713_w;return j::put(_base18222,_key18223,_assign18221);})()));
}}
_v_15714_C.get()=([&]()->V{j::Args _array18224;_array18224.push_back(j::get(_v_15698_px,V(0.0)));return j::array(std::move(_array18224));})();
while(j::truth(([&]()->V{V _lhs18225=j::get(_v_15714_C.get(),this->_literals[1]);V _rhs18226=_v_15697_k;return j::binary("<",_lhs18225,_rhs18226);})())){
V _v_15715_far;
V _v_15716_fd;
_v_15715_far=j::get(_v_15698_px,V(0.0));
_v_15716_fd=j::unary("-",V(1.0));
{for(const auto &_item18227:j::elements(_v_15698_px)){V _v_15717_p;
_v_15717_p=_item18227;
{
V _v_15718_d;
_v_15718_d=j::builtin("Infinity");
{for(const auto &_item18228:j::elements(_v_15714_C.get())){V _v_15719_c;
_v_15719_c=_item18228;
(void)((_v_15718_d=([&]()->V{V _receiver18233=j::builtin("Math");V _method18234=this->_literals[59];V _method=j::get(_receiver18233,_method18234);j::Args _params18235=j::Args{_v_15718_d,([&]()->V{V _callee18230=this->_v_15688_d2.get();return j::call(_callee18230,j::Args{_v_15719_c,_v_15717_p});})()};return j::call(_method,_params18235,_receiver18233);})()));
}}
if(j::truth(([&]()->V{V _lhs18236=_v_15718_d;V _rhs18237=_v_15716_fd;return j::binary(">",_lhs18236,_rhs18237);})())){(void)(((_v_15716_fd=_v_15718_d),(_v_15715_far=_v_15717_p)));
}

}
}}
if(j::truth(([&]()->V{V _lhs18240=_v_15716_fd;V _rhs18241=V(40.0);return j::binary("<",_lhs18240,_rhs18241);})())){break;
}
(void)(([&]()->V{V _receiver18242=_v_15714_C.get();V _method18243=this->_literals[69];V _method=j::get(_receiver18242,_method18243);j::Args _params18244=j::Args{_v_15715_far};return j::call(_method,_params18244,_receiver18242);})());

}

{V _v_15720_it;
_v_15720_it=V(0.0);
for(;j::truth(([&]()->V{V _lhs18245=_v_15720_it;V _rhs18246=V(12.0);return j::binary("<",_lhs18245,_rhs18246);})());(void)(j::increment(_v_15720_it,1,false))){
V _v_15721_n;
V _v_15722_cr;
V _v_15725_cg;
V _v_15728_cb;
V _v_15731_sum;
_v_15721_n=j::get(_v_15714_C.get(),this->_literals[1]);
_v_15722_cr=([&]()->V{V _receiver18247=j::builtin("Float64Array");V _method18248=this->_literals[53];V _method=j::get(_receiver18247,_method18248);j::Args _params18249=j::Args{_v_15714_C.get(),j::function([=](const j::Args &_args_fn15723,const V &_receiver_fn15723,const V &_self_fn15723) mutable ->V{
V _v_15724_c;
_v_15724_c=_args_fn15723[0];
return j::get(_v_15724_c,V(0.0));
return V{};
},1)};return j::call(_method,_params18249,_receiver18247);})();
_v_15725_cg=([&]()->V{V _receiver18250=j::builtin("Float64Array");V _method18251=this->_literals[53];V _method=j::get(_receiver18250,_method18251);j::Args _params18252=j::Args{_v_15714_C.get(),j::function([=](const j::Args &_args_fn15726,const V &_receiver_fn15726,const V &_self_fn15726) mutable ->V{
V _v_15727_c;
_v_15727_c=_args_fn15726[0];
return j::get(_v_15727_c,V(1.0));
return V{};
},1)};return j::call(_method,_params18252,_receiver18250);})();
_v_15728_cb=([&]()->V{V _receiver18253=j::builtin("Float64Array");V _method18254=this->_literals[53];V _method=j::get(_receiver18253,_method18254);j::Args _params18255=j::Args{_v_15714_C.get(),j::function([=](const j::Args &_args_fn15729,const V &_receiver_fn15729,const V &_self_fn15729) mutable ->V{
V _v_15730_c;
_v_15730_c=_args_fn15729[0];
return j::get(_v_15730_c,V(2.0));
return V{};
},1)};return j::call(_method,_params18255,_receiver18253);})();
_v_15731_sum=([&]()->V{V _callee18258=j::builtin("Float64Array");return j::construct(_callee18258,j::Args{([&]()->V{V _lhs18256=_v_15721_n;V _rhs18257=V(4.0);return V(j::number(_lhs18256)*j::number(_rhs18257));})()});})();
{V _v_15732_q;
_v_15732_q=V(0.0);
for(;j::truth(([&]()->V{V _lhs18259=_v_15732_q;V _rhs18260=_v_15706_m;return j::binary("<",_lhs18259,_rhs18260);})());(void)(j::increment(_v_15732_q,1,false))){
V _v_15733_r;
V _v_15734_g;
V _v_15735_b;
V _v_15736_bi;
V _v_15737_bd;
V _v_15740_w;
_v_15733_r=j::get(_v_15707_pr,_v_15732_q);
_v_15734_g=j::get(_v_15708_pg,_v_15732_q);
_v_15735_b=j::get(_v_15709_pb,_v_15732_q);
_v_15736_bi=V(0.0);
_v_15737_bd=j::builtin("Infinity");
{V _v_15738_i;
_v_15738_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs18261=_v_15738_i;V _rhs18262=_v_15721_n;return j::binary("<",_lhs18261,_rhs18262);})());(void)(j::increment(_v_15738_i,1,false))){
V _v_15739_d;
_v_15739_d=([&]()->V{V _lhs18263=([&]()->V{V _lhs18265=([&]()->V{V _lhs18267=V(0.3);V _rhs18268=([&]()->V{V _lhs18269=([&]()->V{V _lhs18271=j::get(_v_15722_cr,_v_15738_i);V _rhs18272=_v_15733_r;return V(j::number(_lhs18271)-j::number(_rhs18272));})();V _rhs18270=V(2.0);return V(std::pow(j::number(_lhs18269),j::number(_rhs18270)));})();return V(j::number(_lhs18267)*j::number(_rhs18268));})();V _rhs18266=([&]()->V{V _lhs18273=V(0.59);V _rhs18274=([&]()->V{V _lhs18275=([&]()->V{V _lhs18277=j::get(_v_15725_cg,_v_15738_i);V _rhs18278=_v_15734_g;return V(j::number(_lhs18277)-j::number(_rhs18278));})();V _rhs18276=V(2.0);return V(std::pow(j::number(_lhs18275),j::number(_rhs18276)));})();return V(j::number(_lhs18273)*j::number(_rhs18274));})();return j::binary("+",_lhs18265,_rhs18266);})();V _rhs18264=([&]()->V{V _lhs18279=V(0.11);V _rhs18280=([&]()->V{V _lhs18281=([&]()->V{V _lhs18283=j::get(_v_15728_cb,_v_15738_i);V _rhs18284=_v_15735_b;return V(j::number(_lhs18283)-j::number(_rhs18284));})();V _rhs18282=V(2.0);return V(std::pow(j::number(_lhs18281),j::number(_rhs18282)));})();return V(j::number(_lhs18279)*j::number(_rhs18280));})();return j::binary("+",_lhs18263,_rhs18264);})();
if(j::truth(([&]()->V{V _lhs18285=_v_15739_d;V _rhs18286=_v_15737_bd;return j::binary("<",_lhs18285,_rhs18286);})())){(void)(((_v_15737_bd=_v_15739_d),(_v_15736_bi=_v_15738_i)));
}

}
}
_v_15740_w=j::get(_v_15710_pw,_v_15732_q);
(void)(([&]()->V{V _base18290=_v_15731_sum;V _key18291=([&]()->V{V _lhs18292=_v_15736_bi;V _rhs18293=V(4.0);return V(j::number(_lhs18292)*j::number(_rhs18293));})();V _assign18289=([&]()->V{V _lhs18294=_v_15733_r;V _rhs18295=_v_15740_w;return V(j::number(_lhs18294)*j::number(_rhs18295));})();return j::update(_base18290,_key18291,"+",_assign18289);})());
(void)(([&]()->V{V _base18297=_v_15731_sum;V _key18298=([&]()->V{V _lhs18299=([&]()->V{V _lhs18301=_v_15736_bi;V _rhs18302=V(4.0);return V(j::number(_lhs18301)*j::number(_rhs18302));})();V _rhs18300=V(1.0);return j::binary("+",_lhs18299,_rhs18300);})();V _assign18296=([&]()->V{V _lhs18303=_v_15734_g;V _rhs18304=_v_15740_w;return V(j::number(_lhs18303)*j::number(_rhs18304));})();return j::update(_base18297,_key18298,"+",_assign18296);})());
(void)(([&]()->V{V _base18306=_v_15731_sum;V _key18307=([&]()->V{V _lhs18308=([&]()->V{V _lhs18310=_v_15736_bi;V _rhs18311=V(4.0);return V(j::number(_lhs18310)*j::number(_rhs18311));})();V _rhs18309=V(2.0);return j::binary("+",_lhs18308,_rhs18309);})();V _assign18305=([&]()->V{V _lhs18312=_v_15735_b;V _rhs18313=_v_15740_w;return V(j::number(_lhs18312)*j::number(_rhs18313));})();return j::update(_base18306,_key18307,"+",_assign18305);})());
(void)(([&]()->V{V _base18315=_v_15731_sum;V _key18316=([&]()->V{V _lhs18317=([&]()->V{V _lhs18319=_v_15736_bi;V _rhs18320=V(4.0);return V(j::number(_lhs18319)*j::number(_rhs18320));})();V _rhs18318=V(3.0);return j::binary("+",_lhs18317,_rhs18318);})();V _assign18314=_v_15740_w;return j::update(_base18315,_key18316,"+",_assign18314);})());

}
}
(void)((_v_15714_C.get()=([&]()->V{j::Args _array18322;return j::array(std::move(_array18322));})()));
{V _v_15741_i;
_v_15741_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs18323=_v_15741_i;V _rhs18324=_v_15721_n;return j::binary("<",_lhs18323,_rhs18324);})());(void)(j::increment(_v_15741_i,1,false))){
V _v_15742_w;
_v_15742_w=j::get(_v_15731_sum,([&]()->V{V _lhs18325=([&]()->V{V _lhs18327=_v_15741_i;V _rhs18328=V(4.0);return V(j::number(_lhs18327)*j::number(_rhs18328));})();V _rhs18326=V(3.0);return j::binary("+",_lhs18325,_rhs18326);})());
if(j::truth(([&]()->V{V _lhs18329=_v_15742_w;V _rhs18330=([&]()->V{V _lhs18331=_v_15700_total;V _rhs18332=V(0.004);return V(j::number(_lhs18331)*j::number(_rhs18332));})();return j::binary(">",_lhs18329,_rhs18330);})())){(void)(([&]()->V{V _receiver18350=_v_15714_C.get();V _method18351=this->_literals[69];V _method=j::get(_receiver18350,_method18351);j::Args _params18352=j::Args{([&]()->V{j::Args _array18333;_array18333.push_back(([&]()->V{V _lhs18334=j::get(_v_15731_sum,([&]()->V{V _lhs18336=_v_15741_i;V _rhs18337=V(4.0);return V(j::number(_lhs18336)*j::number(_rhs18337));})());V _rhs18335=_v_15742_w;return V(j::number(_lhs18334)/j::number(_rhs18335));})());_array18333.push_back(([&]()->V{V _lhs18338=j::get(_v_15731_sum,([&]()->V{V _lhs18340=([&]()->V{V _lhs18342=_v_15741_i;V _rhs18343=V(4.0);return V(j::number(_lhs18342)*j::number(_rhs18343));})();V _rhs18341=V(1.0);return j::binary("+",_lhs18340,_rhs18341);})());V _rhs18339=_v_15742_w;return V(j::number(_lhs18338)/j::number(_rhs18339));})());_array18333.push_back(([&]()->V{V _lhs18344=j::get(_v_15731_sum,([&]()->V{V _lhs18346=([&]()->V{V _lhs18348=_v_15741_i;V _rhs18349=V(4.0);return V(j::number(_lhs18348)*j::number(_rhs18349));})();V _rhs18347=V(2.0);return j::binary("+",_lhs18346,_rhs18347);})());V _rhs18345=_v_15742_w;return V(j::number(_lhs18344)/j::number(_rhs18345));})());return j::array(std::move(_array18333));})()};return j::call(_method,_params18352,_receiver18350);})());
}

}
}

}
}
{V _v_15743_merged;
_v_15743_merged=V(true);
for(;j::truth(_v_15743_merged);(void)0){
(void)((_v_15743_merged=V(false)));
{V _v_15744_i;
_v_15744_i=V(0.0);
for(;j::truth(([&]()->V{V _logical18354=([&]()->V{V _lhs18355=_v_15744_i;V _rhs18356=j::get(_v_15714_C.get(),this->_literals[1]);return j::binary("<",_lhs18355,_rhs18356);})();return j::truth(_logical18354)?j::unary("!",_v_15743_merged):_logical18354;})());(void)(j::increment(_v_15744_i,1,false))){{j::Cell _v_15745_j;
_v_15745_j.get()=([&]()->V{V _lhs18357=_v_15744_i;V _rhs18358=V(1.0);return j::binary("+",_lhs18357,_rhs18358);})();
for(;j::truth(([&]()->V{V _logical18359=([&]()->V{V _lhs18360=_v_15745_j.get();V _rhs18361=j::get(_v_15714_C.get(),this->_literals[1]);return j::binary("<",_lhs18360,_rhs18361);})();return j::truth(_logical18359)?j::unary("!",_v_15743_merged):_logical18359;})());_v_15745_j=j::Cell(_v_15745_j.get()),(void)(j::increment(_v_15745_j.get(),1,false))){if(j::truth(([&]()->V{V _lhs18362=([&]()->V{V _callee18364=this->_v_15688_d2.get();return j::call(_callee18364,j::Args{j::get(_v_15714_C.get(),_v_15744_i),j::get(_v_15714_C.get(),_v_15745_j.get())});})();V _rhs18363=V(260.0);return j::binary("<",_lhs18362,_rhs18363);})())){
(void)(([&]()->V{V _base18366=_v_15714_C.get();V _key18367=_v_15744_i;V _assign18365=([&]()->V{V _receiver18372=j::get(_v_15714_C.get(),_v_15744_i);V _method18373=this->_literals[72];V _method=j::get(_receiver18372,_method18373);j::Args _params18374=j::Args{j::function([=](const j::Args &_args_fn15746,const V &_receiver_fn15746,const V &_self_fn15746) mutable ->V{
V _v_15747_v;
V _v_15748_q;
_v_15747_v=_args_fn15746[0];
_v_15748_q=_args_fn15746[1];
return ([&]()->V{V _lhs18368=([&]()->V{V _lhs18370=_v_15747_v;V _rhs18371=j::get(j::get(_v_15714_C.get(),_v_15745_j.get()),_v_15748_q);return j::binary("+",_lhs18370,_rhs18371);})();V _rhs18369=V(2.0);return V(j::number(_lhs18368)/j::number(_rhs18369));})();
return V{};
},2)};return j::call(_method,_params18374,_receiver18372);})();return j::put(_base18366,_key18367,_assign18365);})());
(void)(([&]()->V{V _receiver18375=_v_15714_C.get();V _method18376=this->_literals[84];V _method=j::get(_receiver18375,_method18376);j::Args _params18377=j::Args{_v_15745_j.get(),V(1.0)};return j::call(_method,_params18377,_receiver18375);})());
(void)((_v_15743_merged=V(true)));

}

}}
}}

}
}
return ([&]()->V{V _receiver18382=_v_15714_C.get();V _method18383=this->_literals[72];V _method=j::get(_receiver18382,_method18383);j::Args _params18384=j::Args{j::function([=](const j::Args &_args_fn15749,const V &_receiver_fn15749,const V &_self_fn15749) mutable ->V{
V _v_15750_c;
_v_15750_c=_args_fn15749[0];
return ([&]()->V{V _receiver18379=_v_15750_c;V _method18380=this->_literals[72];V _method=j::get(_receiver18379,_method18380);j::Args _params18381=j::Args{j::get(j::builtin("Math"),this->_literals[85])};return j::call(_method,_params18381,_receiver18379);})();
return V{};
},1)};return j::call(_method,_params18384,_receiver18382);})();

}

return V{};
},3);
this->_v_15764_hsl.get()=j::function([=](const j::Args &_args_fn15765,const V &_receiver_fn15765,const V &_self_fn15765) mutable ->V{
V _v_15766_c;
_v_15766_c=_args_fn15765[0];
{
V _v_15767_r;
V _v_15768_g;
V _v_15769_b;
V _v_15772_max;
V _v_15773_min;
V _v_15774_l;
V _v_15775_d;
V _v_15776_s;
V _v_15777_h;
V _pattern18390=([&]()->V{V _receiver18387=_v_15766_c;V _method18388=this->_literals[72];V _method=j::get(_receiver18387,_method18388);j::Args _params18389=j::Args{j::function([=](const j::Args &_args_fn15770,const V &_receiver_fn15770,const V &_self_fn15770) mutable ->V{
V _v_15771_v;
_v_15771_v=_args_fn15770[0];
return ([&]()->V{V _lhs18385=_v_15771_v;V _rhs18386=V(255.0);return V(j::number(_lhs18385)/j::number(_rhs18386));})();
return V{};
},1)};return j::call(_method,_params18389,_receiver18387);})();
_v_15767_r=j::get(_pattern18390,V(0));
_v_15768_g=j::get(_pattern18390,V(1));
_v_15769_b=j::get(_pattern18390,V(2));
_v_15772_max=([&]()->V{V _receiver18394=j::builtin("Math");V _method18395=this->_literals[60];V _method=j::get(_receiver18394,_method18395);j::Args _params18396=j::Args{_v_15767_r,_v_15768_g,_v_15769_b};return j::call(_method,_params18396,_receiver18394);})();
_v_15773_min=([&]()->V{V _receiver18400=j::builtin("Math");V _method18401=this->_literals[59];V _method=j::get(_receiver18400,_method18401);j::Args _params18402=j::Args{_v_15767_r,_v_15768_g,_v_15769_b};return j::call(_method,_params18402,_receiver18400);})();
_v_15774_l=([&]()->V{V _lhs18403=([&]()->V{V _lhs18405=_v_15772_max;V _rhs18406=_v_15773_min;return j::binary("+",_lhs18405,_rhs18406);})();V _rhs18404=V(2.0);return V(j::number(_lhs18403)/j::number(_rhs18404));})();
if(j::truth(([&]()->V{V _lhs18407=_v_15772_max;V _rhs18408=_v_15773_min;return V(j::equal(_lhs18407,_rhs18408,true));})())){return ([&]()->V{j::Args _array18409;_array18409.push_back(V(0.0));_array18409.push_back(V(0.0));_array18409.push_back(_v_15774_l);return j::array(std::move(_array18409));})();
}
_v_15775_d=([&]()->V{V _lhs18410=_v_15772_max;V _rhs18411=_v_15773_min;return V(j::number(_lhs18410)-j::number(_rhs18411));})();
_v_15776_s=(j::truth(([&]()->V{V _lhs18412=_v_15774_l;V _rhs18413=V(0.5);return j::binary(">",_lhs18412,_rhs18413);})())?([&]()->V{V _lhs18414=_v_15775_d;V _rhs18415=([&]()->V{V _lhs18416=([&]()->V{V _lhs18418=V(2.0);V _rhs18419=_v_15772_max;return V(j::number(_lhs18418)-j::number(_rhs18419));})();V _rhs18417=_v_15773_min;return V(j::number(_lhs18416)-j::number(_rhs18417));})();return V(j::number(_lhs18414)/j::number(_rhs18415));})():([&]()->V{V _lhs18420=_v_15775_d;V _rhs18421=([&]()->V{V _lhs18422=_v_15772_max;V _rhs18423=_v_15773_min;return j::binary("+",_lhs18422,_rhs18423);})();return V(j::number(_lhs18420)/j::number(_rhs18421));})());
_v_15777_h=(j::truth(([&]()->V{V _lhs18424=_v_15772_max;V _rhs18425=_v_15767_r;return V(j::equal(_lhs18424,_rhs18425,true));})())?([&]()->V{V _lhs18426=([&]()->V{V _lhs18428=([&]()->V{V _lhs18430=_v_15768_g;V _rhs18431=_v_15769_b;return V(j::number(_lhs18430)-j::number(_rhs18431));})();V _rhs18429=_v_15775_d;return V(j::number(_lhs18428)/j::number(_rhs18429));})();V _rhs18427=(j::truth(([&]()->V{V _lhs18432=_v_15768_g;V _rhs18433=_v_15769_b;return j::binary("<",_lhs18432,_rhs18433);})())?V(6.0):V(0.0));return j::binary("+",_lhs18426,_rhs18427);})():(j::truth(([&]()->V{V _lhs18434=_v_15772_max;V _rhs18435=_v_15768_g;return V(j::equal(_lhs18434,_rhs18435,true));})())?([&]()->V{V _lhs18436=([&]()->V{V _lhs18438=([&]()->V{V _lhs18440=_v_15769_b;V _rhs18441=_v_15767_r;return V(j::number(_lhs18440)-j::number(_rhs18441));})();V _rhs18439=_v_15775_d;return V(j::number(_lhs18438)/j::number(_rhs18439));})();V _rhs18437=V(2.0);return j::binary("+",_lhs18436,_rhs18437);})():([&]()->V{V _lhs18442=([&]()->V{V _lhs18444=([&]()->V{V _lhs18446=_v_15767_r;V _rhs18447=_v_15768_g;return V(j::number(_lhs18446)-j::number(_rhs18447));})();V _rhs18445=_v_15775_d;return V(j::number(_lhs18444)/j::number(_rhs18445));})();V _rhs18443=V(4.0);return j::binary("+",_lhs18442,_rhs18443);})()));
return ([&]()->V{j::Args _array18448;_array18448.push_back(([&]()->V{V _lhs18449=_v_15777_h;V _rhs18450=V(6.0);return V(j::number(_lhs18449)/j::number(_rhs18450));})());_array18448.push_back(_v_15776_s);_array18448.push_back(_v_15774_l);return j::array(std::move(_array18448));})();

}

return V{};
},1);
this->_v_15778_fromHsl.get()=j::function([=](const j::Args &_args_fn15779,const V &_receiver_fn15779,const V &_self_fn15779) mutable ->V{
V _v_15780_h;
V _v_15781_s;
V _v_15782_l;
V _pattern18451=_args_fn15779[0];
_v_15780_h=j::get(_pattern18451,V(0));
_v_15781_s=j::get(_pattern18451,V(1));
_v_15782_l=j::get(_pattern18451,V(2));
{
j::Cell _v_15783_q;
j::Cell _v_15784_p;
V _v_15785_f;
_v_15783_q.get()=(j::truth(([&]()->V{V _lhs18452=_v_15782_l;V _rhs18453=V(0.5);return j::binary("<",_lhs18452,_rhs18453);})())?([&]()->V{V _lhs18454=_v_15782_l;V _rhs18455=([&]()->V{V _lhs18456=V(1.0);V _rhs18457=_v_15781_s;return j::binary("+",_lhs18456,_rhs18457);})();return V(j::number(_lhs18454)*j::number(_rhs18455));})():([&]()->V{V _lhs18458=([&]()->V{V _lhs18460=_v_15782_l;V _rhs18461=_v_15781_s;return j::binary("+",_lhs18460,_rhs18461);})();V _rhs18459=([&]()->V{V _lhs18462=_v_15782_l;V _rhs18463=_v_15781_s;return V(j::number(_lhs18462)*j::number(_rhs18463));})();return V(j::number(_lhs18458)-j::number(_rhs18459));})());
_v_15784_p.get()=([&]()->V{V _lhs18464=([&]()->V{V _lhs18466=V(2.0);V _rhs18467=_v_15782_l;return V(j::number(_lhs18466)*j::number(_rhs18467));})();V _rhs18465=_v_15783_q.get();return V(j::number(_lhs18464)-j::number(_rhs18465));})();
_v_15785_f=j::function([=](const j::Args &_args_fn15786,const V &_receiver_fn15786,const V &_self_fn15786) mutable ->V{
V _v_15787_t;
_v_15787_t=_args_fn15786[0];
return (j::truth(([&]()->V{V _lhs18468=(_v_15787_t=([&]()->V{V _lhs18471=([&]()->V{V _lhs18473=_v_15787_t;V _rhs18474=V(1.0);return j::binary("+",_lhs18473,_rhs18474);})();V _rhs18472=V(1.0);return V(std::fmod(j::number(_lhs18471),j::number(_rhs18472)));})());V _rhs18469=([&]()->V{V _lhs18475=V(1.0);V _rhs18476=V(6.0);return V(j::number(_lhs18475)/j::number(_rhs18476));})();return j::binary("<",_lhs18468,_rhs18469);})())?([&]()->V{V _lhs18477=_v_15784_p.get();V _rhs18478=([&]()->V{V _lhs18479=([&]()->V{V _lhs18481=([&]()->V{V _lhs18483=_v_15783_q.get();V _rhs18484=_v_15784_p.get();return V(j::number(_lhs18483)-j::number(_rhs18484));})();V _rhs18482=V(6.0);return V(j::number(_lhs18481)*j::number(_rhs18482));})();V _rhs18480=_v_15787_t;return V(j::number(_lhs18479)*j::number(_rhs18480));})();return j::binary("+",_lhs18477,_rhs18478);})():(j::truth(([&]()->V{V _lhs18485=_v_15787_t;V _rhs18486=([&]()->V{V _lhs18487=V(1.0);V _rhs18488=V(2.0);return V(j::number(_lhs18487)/j::number(_rhs18488));})();return j::binary("<",_lhs18485,_rhs18486);})())?_v_15783_q.get():(j::truth(([&]()->V{V _lhs18489=_v_15787_t;V _rhs18490=([&]()->V{V _lhs18491=V(2.0);V _rhs18492=V(3.0);return V(j::number(_lhs18491)/j::number(_rhs18492));})();return j::binary("<",_lhs18489,_rhs18490);})())?([&]()->V{V _lhs18493=_v_15784_p.get();V _rhs18494=([&]()->V{V _lhs18495=([&]()->V{V _lhs18497=([&]()->V{V _lhs18499=_v_15783_q.get();V _rhs18500=_v_15784_p.get();return V(j::number(_lhs18499)-j::number(_rhs18500));})();V _rhs18498=([&]()->V{V _lhs18501=([&]()->V{V _lhs18503=V(2.0);V _rhs18504=V(3.0);return V(j::number(_lhs18503)/j::number(_rhs18504));})();V _rhs18502=_v_15787_t;return V(j::number(_lhs18501)-j::number(_rhs18502));})();return V(j::number(_lhs18497)*j::number(_rhs18498));})();V _rhs18496=V(6.0);return V(j::number(_lhs18495)*j::number(_rhs18496));})();return j::binary("+",_lhs18493,_rhs18494);})():_v_15784_p.get())));
return V{};
},1);
return ([&]()->V{V _receiver18510=([&]()->V{j::Args _array18513;_array18513.push_back(([&]()->V{V _callee18518=_v_15785_f;return j::call(_callee18518,j::Args{([&]()->V{V _lhs18514=_v_15780_h;V _rhs18515=([&]()->V{V _lhs18516=V(1.0);V _rhs18517=V(3.0);return V(j::number(_lhs18516)/j::number(_rhs18517));})();return j::binary("+",_lhs18514,_rhs18515);})()});})());_array18513.push_back(([&]()->V{V _callee18519=_v_15785_f;return j::call(_callee18519,j::Args{_v_15780_h});})());_array18513.push_back(([&]()->V{V _callee18524=_v_15785_f;return j::call(_callee18524,j::Args{([&]()->V{V _lhs18520=_v_15780_h;V _rhs18521=([&]()->V{V _lhs18522=V(1.0);V _rhs18523=V(3.0);return V(j::number(_lhs18522)/j::number(_rhs18523));})();return V(j::number(_lhs18520)-j::number(_rhs18521));})()});})());return j::array(std::move(_array18513));})();V _method18511=this->_literals[72];V _method=j::get(_receiver18510,_method18511);j::Args _params18512=j::Args{j::function([=](const j::Args &_args_fn15788,const V &_receiver_fn15788,const V &_self_fn15788) mutable ->V{
V _v_15789_v;
_v_15789_v=_args_fn15788[0];
return ([&]()->V{V _number18507=([&]()->V{V _lhs18508=_v_15789_v;V _rhs18509=V(255.0);return V(j::number(_lhs18508)*j::number(_rhs18509));})();return V(std::floor(j::number(_number18507)+.5));})();
return V{};
},1)};return j::call(_method,_params18512,_receiver18510);})();

}

return V{};
},1);
this->_v_15796_lift.get()=j::function([=](const j::Args &_args_fn15797,const V &_receiver_fn15797,const V &_self_fn15797) mutable ->V{
V _v_15798_c;
V _v_15799_dim;
_v_15798_c=_args_fn15797[0];
V _default18525=_args_fn15797[1];if(_default18525.kind==V::Undefined||_default18525.kind==V::Hole)_default18525=V(false);
_v_15799_dim=_default18525;
{
V _v_15800_h;
V _v_15801_s;
V _v_15802_l;
V _v_15803_g;
V _v_15804_want;
V _v_15805_k;
V _v_15806_out;
if(j::truth(([&]()->V{V _logical18526=([&]()->V{V _callee18527=this->_v_15793_black.get();return j::call(_callee18527,j::Args{_v_15798_c});})();return j::truth(_logical18526)?j::unary("!",_v_15799_dim):_logical18526;})())){return this->_v_15753_LIGHT.get();
}
V _pattern18529=([&]()->V{V _callee18528=this->_v_15764_hsl.get();return j::call(_callee18528,j::Args{_v_15798_c});})();
_v_15800_h=j::get(_pattern18529,V(0));
_v_15801_s=j::get(_pattern18529,V(1));
_v_15802_l=j::get(_pattern18529,V(2));
_v_15803_g=([&]()->V{V _callee18530=this->_v_15790_grey.get();return j::call(_callee18530,j::Args{_v_15798_c});})();
_v_15804_want=(j::truth(_v_15803_g)?V(2.4):V(2.8));
_v_15805_k=_v_15802_l;
_v_15806_out=_v_15798_c;
while(j::truth(([&]()->V{V _logical18531=([&]()->V{V _lhs18532=([&]()->V{V _callee18534=this->_v_15760_contrast.get();return j::call(_callee18534,j::Args{_v_15806_out,this->_v_15751_PAGE.get()});})();V _rhs18533=_v_15804_want;return j::binary("<",_lhs18532,_rhs18533);})();return j::truth(_logical18531)?([&]()->V{V _lhs18535=_v_15805_k;V _rhs18536=V(0.8);return j::binary("<",_lhs18535,_rhs18536);})():_logical18531;})())){(void)((_v_15806_out=([&]()->V{V _callee18540=this->_v_15778_fromHsl.get();return j::call(_callee18540,j::Args{([&]()->V{j::Args _array18538;_array18538.push_back(_v_15800_h);_array18538.push_back((j::truth(_v_15803_g)?V(0.0):_v_15801_s));_array18538.push_back((_v_15805_k=j::binary("+",_v_15805_k,V(0.01))));return j::array(std::move(_array18538));})()});})()));
}
return _v_15806_out;

}

return V{};
},1);
this->_v_15807_sink.get()=j::function([=](const j::Args &_args_fn15808,const V &_receiver_fn15808,const V &_self_fn15808) mutable ->V{
V _v_15809_c;
_v_15809_c=_args_fn15808[0];
{
V _v_15810_h;
V _v_15811_s;
V _v_15812_l;
V _v_15813_g;
V _v_15814_want;
V _v_15815_k;
V _v_15816_out;
V _pattern18542=([&]()->V{V _callee18541=this->_v_15764_hsl.get();return j::call(_callee18541,j::Args{_v_15809_c});})();
_v_15810_h=j::get(_pattern18542,V(0));
_v_15811_s=j::get(_pattern18542,V(1));
_v_15812_l=j::get(_pattern18542,V(2));
_v_15813_g=([&]()->V{V _callee18543=this->_v_15790_grey.get();return j::call(_callee18543,j::Args{_v_15809_c});})();
_v_15814_want=(j::truth(_v_15813_g)?V(2.4):V(2.8));
_v_15815_k=_v_15812_l;
_v_15816_out=_v_15809_c;
while(j::truth(([&]()->V{V _logical18544=([&]()->V{V _lhs18545=([&]()->V{V _callee18547=this->_v_15760_contrast.get();return j::call(_callee18547,j::Args{_v_15816_out,this->_v_15752_PAPER.get()});})();V _rhs18546=_v_15814_want;return j::binary("<",_lhs18545,_rhs18546);})();return j::truth(_logical18544)?([&]()->V{V _lhs18548=_v_15815_k;V _rhs18549=V(0.2);return j::binary(">",_lhs18548,_rhs18549);})():_logical18544;})())){(void)((_v_15816_out=([&]()->V{V _callee18553=this->_v_15778_fromHsl.get();return j::call(_callee18553,j::Args{([&]()->V{j::Args _array18551;_array18551.push_back(_v_15810_h);_array18551.push_back((j::truth(_v_15813_g)?V(0.0):_v_15811_s));_array18551.push_back((_v_15815_k=j::binary("-",_v_15815_k,V(0.01))));return j::array(std::move(_array18551));})()});})()));
}
return _v_15816_out;

}

return V{};
},1);
this->_v_15823_palette.get()=j::function([=](const j::Args &_args_fn15824,const V &_receiver_fn15824,const V &_self_fn15824) mutable ->V{
V _v_15825_colors;
V _v_15826_style;
_v_15825_colors=_args_fn15824[0];
_v_15826_style=_args_fn15824[1];
{
V _v_15827_runs;
j::Cell _v_15834_dim;
_v_15827_runs=j::function([=](const j::Args &_args_fn15828,const V &_receiver_fn15828,const V &_self_fn15828) mutable ->V{
V _v_15829_cs;
_v_15829_cs=_args_fn15828[0];
return ([&]()->V{V _receiver18554=([&]()->V{j::Args _array18557;for(const auto &_value:j::elements(_v_15829_cs))_array18557.push_back(_value);for(const auto &_value:j::elements(([&]()->V{V _receiver18559=_v_15829_cs;V _method18560=this->_literals[72];V _method=j::get(_receiver18559,_method18560);j::Args _params18561=j::Args{j::function([=](const j::Args &_args_fn15830,const V &_receiver_fn15830,const V &_self_fn15830) mutable ->V{
V _v_15831_c;
_v_15831_c=_args_fn15830[0];
return ([&]()->V{V _callee18558=this->_v_15817_tint.get();return j::call(_callee18558,j::Args{_v_15831_c,V(0.35)});})();
return V{};
},1)};return j::call(_method,_params18561,_receiver18559);})()))_array18557.push_back(_value);for(const auto &_value:j::elements(([&]()->V{V _receiver18563=_v_15829_cs;V _method18564=this->_literals[72];V _method=j::get(_receiver18563,_method18564);j::Args _params18565=j::Args{j::function([=](const j::Args &_args_fn15832,const V &_receiver_fn15832,const V &_self_fn15832) mutable ->V{
V _v_15833_c;
_v_15833_c=_args_fn15832[0];
return ([&]()->V{V _callee18562=this->_v_15817_tint.get();return j::call(_callee18562,j::Args{_v_15833_c,V(0.7)});})();
return V{};
},1)};return j::call(_method,_params18565,_receiver18563);})()))_array18557.push_back(_value);return j::array(std::move(_array18557));})();V _method18555=this->_literals[72];V _method=j::get(_receiver18554,_method18555);j::Args _params18556=j::Args{this->_v_15269_hex.get()};return j::call(_method,_params18556,_receiver18554);})();
return V{};
},1);
_v_15834_dim.get()=([&]()->V{V _logical18566=([&]()->V{V _lhs18567=_v_15826_style;V _rhs18568=this->_literals[36];return V(j::equal(_lhs18567,_rhs18568,true));})();return !j::truth(_logical18566)?([&]()->V{V _receiver18571=_v_15825_colors;V _method18572=this->_literals[64];V _method=j::get(_receiver18571,_method18572);j::Args _params18573=j::Args{j::function([=](const j::Args &_args_fn15835,const V &_receiver_fn15835,const V &_self_fn15835) mutable ->V{
V _v_15836_c;
_v_15836_c=_args_fn15835[0];
return ([&]()->V{V _callee18570=this->_v_15668_white.get();return j::call(_callee18570,([&](){j::Args _args18569;for(const auto &_v:j::elements(_v_15836_c))_args18569.push_back(_v);return _args18569;})());})();
return V{};
},1)};return j::call(_method,_params18573,_receiver18571);})():_logical18566;})();
return ([&]()->V{V _obj18574=j::object();j::put(_obj18574,this->_literals[86],([&]()->V{V _callee18580=_v_15827_runs;return j::call(_callee18580,j::Args{(j::truth(([&]()->V{V _lhs18575=_v_15826_style;V _rhs18576=this->_literals[36];return V(j::equal(_lhs18575,_rhs18576,true));})())?([&]()->V{V _receiver18577=_v_15825_colors;V _method18578=this->_literals[72];V _method=j::get(_receiver18577,_method18578);j::Args _params18579=j::Args{this->_v_15807_sink.get()};return j::call(_method,_params18579,_receiver18577);})():_v_15825_colors)});})());j::put(_obj18574,this->_literals[87],([&]()->V{V _callee18585=_v_15827_runs;return j::call(_callee18585,j::Args{([&]()->V{V _receiver18582=_v_15825_colors;V _method18583=this->_literals[72];V _method=j::get(_receiver18582,_method18583);j::Args _params18584=j::Args{j::function([=](const j::Args &_args_fn15837,const V &_receiver_fn15837,const V &_self_fn15837) mutable ->V{
V _v_15838_c;
_v_15838_c=_args_fn15837[0];
return ([&]()->V{V _callee18581=this->_v_15796_lift.get();return j::call(_callee18581,j::Args{_v_15838_c,_v_15834_dim.get()});})();
return V{};
},1)};return j::call(_method,_params18584,_receiver18582);})()});})());return _obj18574;})();

}

return V{};
},2);
this->_v_15839_checkDrawing.get()=j::function([=](const j::Args &_args_fn15840,const V &_receiver_fn15840,const V &_self_fn15840) mutable ->V{
V _v_15841_d;
V _v_15842_fn;
_v_15841_d=_args_fn15840[0];
_v_15842_fn=_args_fn15840[1];
{
j::Cell _v_15843_cols;
V _v_15844_rows;
j::Cell _v_15845_colors;
j::Cell _v_15846_art;
V _v_15847_ink;
V _v_15848_mono;
if(j::truth(([&]()->V{V _logical18586=j::unary("!",_v_15841_d);return !j::truth(_logical18586)?([&]()->V{V _lhs18587=j::unary("typeof",_v_15841_d);V _rhs18588=this->_literals[4];return V(!j::equal(_lhs18587,_rhs18588,true));})():_logical18586;})())){(void)(([&]()->V{V _callee18591=this->_v_15268_fail.get();return j::call(_callee18591,j::Args{([&]()->V{std::u16string _text18589;_text18589+=u"";_text18589+=j::string(_v_15842_fn);_text18589+=u"() takes a drawing, as drawing() returns it, or a piece fromImage() made, not ";_text18589+=j::string(([&]()->V{V _callee18590=this->_v_15298_shown.get();return j::call(_callee18590,j::Args{_v_15841_d});})());_text18589+=u"";return V(std::move(_text18589));})()});})());
}
V _pattern18592=_v_15841_d;
_v_15843_cols.get()=j::get(_pattern18592,this->_literals[34]);
_v_15844_rows=j::get(_pattern18592,this->_literals[22]);
_v_15845_colors.get()=j::get(_pattern18592,this->_literals[54]);
_v_15846_art.get()=j::get(_pattern18592,this->_literals[55]);
_v_15847_ink=j::get(_pattern18592,this->_literals[56]);
_v_15848_mono=j::get(_pattern18592,this->_literals[57]);
if(j::truth(([&]()->V{V _lhs18593=j::get(_v_15841_d,this->_literals[27]);V _rhs18594=j::builtin("undefined");return V(!j::equal(_lhs18593,_rhs18594,true));})())){(void)(([&]()->V{V _callee18595=this->_v_15272_rampOf.get();return j::call(_callee18595,j::Args{j::get(_v_15841_d,this->_literals[27])});})());
}
if(j::truth(([&]()->V{V _logical18596=j::unary("!",([&]()->V{V _callee18597=this->_v_15292_whole.get();return j::call(_callee18597,j::Args{_v_15843_cols.get(),V(1.0),j::get(this->_v_15262_MAX.get(),this->_literals[34])});})());return !j::truth(_logical18596)?j::unary("!",([&]()->V{V _callee18598=this->_v_15292_whole.get();return j::call(_callee18598,j::Args{_v_15844_rows,V(1.0),j::get(this->_v_15262_MAX.get(),this->_literals[22])});})()):_logical18596;})())){(void)(([&]()->V{V _callee18602=this->_v_15268_fail.get();return j::call(_callee18602,j::Args{([&]()->V{std::u16string _text18599;_text18599+=u"a drawing takes whole numbers of columns from 1 to ";_text18599+=j::string(j::get(this->_v_15262_MAX.get(),this->_literals[34]));_text18599+=u" and rows from 1 to ";_text18599+=j::string(j::get(this->_v_15262_MAX.get(),this->_literals[22]));_text18599+=u", not ";_text18599+=j::string(([&]()->V{V _callee18600=j::builtin("String");return j::call(_callee18600,j::Args{_v_15843_cols.get()});})());_text18599+=u" by ";_text18599+=j::string(([&]()->V{V _callee18601=j::builtin("String");return j::call(_callee18601,j::Args{_v_15844_rows});})());_text18599+=u"";return V(std::move(_text18599));})()});})());
}
if(j::truth(([&]()->V{V _logical18603=([&]()->V{V _logical18604=([&]()->V{V _lhs18605=j::get(_v_15841_d,this->_literals[23]);V _rhs18606=this->_literals[35];return V(!j::equal(_lhs18605,_rhs18606,true));})();return j::truth(_logical18604)?([&]()->V{V _lhs18607=j::get(_v_15841_d,this->_literals[23]);V _rhs18608=this->_literals[36];return V(!j::equal(_lhs18607,_rhs18608,true));})():_logical18604;})();return j::truth(_logical18603)?([&]()->V{V _lhs18609=j::get(_v_15841_d,this->_literals[23]);V _rhs18610=this->_literals[37];return V(!j::equal(_lhs18609,_rhs18610,true));})():_logical18603;})())){(void)(([&]()->V{V _callee18615=this->_v_15268_fail.get();return j::call(_callee18615,j::Args{([&]()->V{std::u16string _text18611;_text18611+=u"a drawing's style takes \"logo\", \"shade\" or \"pixels\", not ";_text18611+=j::string(([&]()->V{V _receiver18612=j::builtin("JSON");V _method18613=this->_literals[3];V _method=j::get(_receiver18612,_method18613);j::Args _params18614=j::Args{j::get(_v_15841_d,this->_literals[23])};return j::call(_method,_params18614,_receiver18612);})());_text18611+=u"";return V(std::move(_text18611));})()});})());
}
if(j::truth(([&]()->V{V _logical18616=([&]()->V{V _logical18617=([&]()->V{V _logical18618=j::unary("!",([&]()->V{V _receiver18619=j::builtin("Array");V _method18620=this->_literals[9];V _method=j::get(_receiver18619,_method18620);j::Args _params18621=j::Args{_v_15845_colors.get()};return j::call(_method,_params18621,_receiver18619);})());return !j::truth(_logical18618)?j::unary("!",j::get(_v_15845_colors.get(),this->_literals[1])):_logical18618;})();return !j::truth(_logical18617)?([&]()->V{V _lhs18622=j::get(_v_15845_colors.get(),this->_literals[1]);V _rhs18623=V(10.0);return j::binary(">",_lhs18622,_rhs18623);})():_logical18617;})();return !j::truth(_logical18616)?j::unary("!",([&]()->V{V _receiver18635=_v_15845_colors.get();V _method18636=this->_literals[15];V _method=j::get(_receiver18635,_method18636);j::Args _params18637=j::Args{j::function([=](const j::Args &_args_fn15849,const V &_receiver_fn15849,const V &_self_fn15849) mutable ->V{
V _v_15850_c;
_v_15850_c=_args_fn15849[0];
return ([&]()->V{V _logical18624=([&]()->V{V _logical18625=([&]()->V{V _receiver18626=j::builtin("Array");V _method18627=this->_literals[9];V _method=j::get(_receiver18626,_method18627);j::Args _params18628=j::Args{_v_15850_c};return j::call(_method,_params18628,_receiver18626);})();return j::truth(_logical18625)?([&]()->V{V _lhs18629=j::get(_v_15850_c,this->_literals[1]);V _rhs18630=V(3.0);return V(j::equal(_lhs18629,_rhs18630,true));})():_logical18625;})();return j::truth(_logical18624)?([&]()->V{V _receiver18632=_v_15850_c;V _method18633=this->_literals[15];V _method=j::get(_receiver18632,_method18633);j::Args _params18634=j::Args{j::function([=](const j::Args &_args_fn15851,const V &_receiver_fn15851,const V &_self_fn15851) mutable ->V{
V _v_15852_v;
_v_15852_v=_args_fn15851[0];
return ([&]()->V{V _callee18631=this->_v_15292_whole.get();return j::call(_callee18631,j::Args{_v_15852_v,V(0.0),V(255.0)});})();
return V{};
},1)};return j::call(_method,_params18634,_receiver18632);})():_logical18624;})();
return V{};
},1)};return j::call(_method,_params18637,_receiver18635);})()):_logical18616;})())){(void)(([&]()->V{V _callee18638=this->_v_15268_fail.get();return j::call(_callee18638,j::Args{this->_literals[88]});})());
}
{for(const auto &_item18639:j::elements(([&]()->V{j::Args _array18640;_array18640.push_back(([&]()->V{j::Args _array18641;_array18641.push_back(this->_literals[55]);_array18641.push_back(_v_15846_art.get());return j::array(std::move(_array18641));})());_array18640.push_back(([&]()->V{j::Args _array18642;_array18642.push_back(this->_literals[56]);_array18642.push_back(_v_15847_ink);return j::array(std::move(_array18642));})());_array18640.push_back(([&]()->V{j::Args _array18643;_array18643.push_back(this->_literals[57]);_array18643.push_back(_v_15848_mono);return j::array(std::move(_array18643));})());return j::array(std::move(_array18640));})())){j::Cell _v_15853_what;
V _v_15854_lines;
V _pattern18644=_item18639;
_v_15853_what.get()=j::get(_pattern18644,V(0));
_v_15854_lines=j::get(_pattern18644,V(1));
{
if(j::truth(([&]()->V{V _logical18645=j::unary("!",([&]()->V{V _receiver18646=j::builtin("Array");V _method18647=this->_literals[9];V _method=j::get(_receiver18646,_method18647);j::Args _params18648=j::Args{_v_15854_lines};return j::call(_method,_params18648,_receiver18646);})());return !j::truth(_logical18645)?([&]()->V{V _lhs18649=j::get(_v_15854_lines,this->_literals[1]);V _rhs18650=_v_15844_rows;return V(!j::equal(_lhs18649,_rhs18650,true));})():_logical18645;})())){(void)(([&]()->V{V _callee18656=this->_v_15268_fail.get();return j::call(_callee18656,j::Args{([&]()->V{std::u16string _text18651;_text18651+=u"a drawing's ";_text18651+=j::string(_v_15853_what.get());_text18651+=u" takes ";_text18651+=j::string(_v_15844_rows);_text18651+=u" rows, one a line, not ";_text18651+=j::string((j::truth(([&]()->V{V _receiver18652=j::builtin("Array");V _method18653=this->_literals[9];V _method=j::get(_receiver18652,_method18653);j::Args _params18654=j::Args{_v_15854_lines};return j::call(_method,_params18654,_receiver18652);})())?j::get(_v_15854_lines,this->_literals[1]):([&]()->V{V _callee18655=j::builtin("String");return j::call(_callee18655,j::Args{_v_15854_lines});})()));_text18651+=u"";return V(std::move(_text18651));})()});})());
}
(void)(([&]()->V{V _receiver18672=_v_15854_lines;V _method18673=this->_literals[73];V _method=j::get(_receiver18672,_method18673);j::Args _params18674=j::Args{j::function([=](const j::Args &_args_fn15855,const V &_receiver_fn15855,const V &_self_fn15855) mutable ->V{
V _v_15856_l;
V _v_15857_y;
_v_15856_l=_args_fn15855[0];
_v_15857_y=_args_fn15855[1];
{
if(j::truth(([&]()->V{V _logical18657=([&]()->V{V _lhs18658=j::unary("typeof",_v_15856_l);V _rhs18659=this->_literals[0];return V(!j::equal(_lhs18658,_rhs18659,true));})();return !j::truth(_logical18657)?([&]()->V{V _lhs18660=j::get(_v_15856_l,this->_literals[1]);V _rhs18661=_v_15843_cols.get();return V(!j::equal(_lhs18660,_rhs18661,true));})():_logical18657;})())){(void)(([&]()->V{V _callee18666=this->_v_15268_fail.get();return j::call(_callee18666,j::Args{([&]()->V{std::u16string _text18662;_text18662+=u"a drawing's ";_text18662+=j::string(_v_15853_what.get());_text18662+=u" takes rows of ";_text18662+=j::string(_v_15843_cols.get());_text18662+=u" characters: row ";_text18662+=j::string(_v_15857_y);_text18662+=u" is ";_text18662+=j::string((j::truth(([&]()->V{V _lhs18663=j::unary("typeof",_v_15856_l);V _rhs18664=this->_literals[0];return V(j::equal(_lhs18663,_rhs18664,true));})())?j::get(_v_15856_l,this->_literals[1]):([&]()->V{V _callee18665=j::builtin("String");return j::call(_callee18665,j::Args{_v_15856_l});})()));_text18662+=u"";return V(std::move(_text18662));})()});})());
}
if(j::truth(([&]()->V{V _receiver18667=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f\\ud800-\\udfff]","");V _method18668=this->_literals[41];V _method=j::get(_receiver18667,_method18668);j::Args _params18669=j::Args{_v_15856_l};return j::call(_method,_params18669,_receiver18667);})())){(void)(([&]()->V{V _callee18671=this->_v_15268_fail.get();return j::call(_callee18671,j::Args{([&]()->V{std::u16string _text18670;_text18670+=u"a drawing's ";_text18670+=j::string(_v_15853_what.get());_text18670+=u" takes printable characters from the Basic Multilingual Plane: row ";_text18670+=j::string(_v_15857_y);_text18670+=u" has another";return V(std::move(_text18670));})()});})());
}

}

return V{};
},2)};return j::call(_method,_params18674,_receiver18672);})());

}
}}
(void)(([&]()->V{V _receiver18691=_v_15847_ink;V _method18692=this->_literals[73];V _method=j::get(_receiver18691,_method18692);j::Args _params18693=j::Args{j::function([=](const j::Args &_args_fn15858,const V &_receiver_fn15858,const V &_self_fn15858) mutable ->V{
V _v_15859_l;
V _v_15860_y;
_v_15859_l=_args_fn15858[0];
_v_15860_y=_args_fn15858[1];
{
{V _v_15861_x;
_v_15861_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs18675=_v_15861_x;V _rhs18676=_v_15843_cols.get();return j::binary("<",_lhs18675,_rhs18676);})());(void)(j::increment(_v_15861_x,1,false))){if(j::truth(([&]()->V{V _logical18677=([&]()->V{V _logical18678=([&]()->V{V _lhs18679=j::get(j::get(_v_15846_art.get(),_v_15860_y),_v_15861_x);V _rhs18680=this->_literals[51];return V(!j::equal(_lhs18679,_rhs18680,true));})();return !j::truth(_logical18678)?([&]()->V{V _lhs18681=j::get(_v_15859_l,_v_15861_x);V _rhs18682=this->_literals[51];return V(!j::equal(_lhs18681,_rhs18682,true));})():_logical18678;})();return j::truth(_logical18677)?j::unary("!",([&]()->V{V _lhs18683=([&]()->V{V _callee18685=j::builtin("parseInt");return j::call(_callee18685,j::Args{j::get(_v_15859_l,_v_15861_x),V(36.0)});})();V _rhs18684=j::get(_v_15845_colors.get(),this->_literals[1]);return j::binary("<",_lhs18683,_rhs18684);})()):_logical18677;})())){(void)(([&]()->V{V _callee18690=this->_v_15268_fail.get();return j::call(_callee18690,j::Args{([&]()->V{std::u16string _text18686;_text18686+=u"a drawing's ink takes, for each drawn cell, a digit for one of its ";_text18686+=j::string(j::get(_v_15845_colors.get(),this->_literals[1]));_text18686+=u" colours: row ";_text18686+=j::string(_v_15860_y);_text18686+=u", column ";_text18686+=j::string(_v_15861_x);_text18686+=u" is ";_text18686+=j::string(([&]()->V{V _receiver18687=j::builtin("JSON");V _method18688=this->_literals[3];V _method=j::get(_receiver18687,_method18688);j::Args _params18689=j::Args{j::get(_v_15859_l,_v_15861_x)};return j::call(_method,_params18689,_receiver18687);})());_text18686+=u"";return V(std::move(_text18686));})()});})());
}
}}

}

return V{};
},2)};return j::call(_method,_params18693,_receiver18691);})());

}

return V{};
},2);
this->_v_15863_drawingOf.get()=j::function([=](const j::Args &_args_fn15864,const V &_receiver_fn15864,const V &_self_fn15864) mutable ->V{
V _v_15865_img;
V _v_15866_fn;
_v_15865_img=_args_fn15864[0];
_v_15866_fn=_args_fn15864[1];
{
if(j::truth(([&]()->V{V _logical18694=([&]()->V{V _logical18695=_v_15865_img;return j::truth(_logical18695)?([&]()->V{V _lhs18696=j::unary("typeof",_v_15865_img);V _rhs18697=this->_literals[4];return V(j::equal(_lhs18696,_rhs18697,true));})():_logical18695;})();return j::truth(_logical18694)?([&]()->V{V _lhs18698=this->_literals[89];V _rhs18699=_v_15865_img;return j::binary("in",_lhs18698,_rhs18699);})():_logical18694;})())){
if(j::truth(([&]()->V{V _lhs18700=this->_literals[90];V _rhs18701=_v_15865_img;return j::binary("in",_lhs18700,_rhs18701);})())){return j::get(_v_15865_img,this->_literals[90]);
}
(void)(([&]()->V{V _callee18703=this->_v_15268_fail.get();return j::call(_callee18703,j::Args{([&]()->V{std::u16string _text18702;_text18702+=u"";_text18702+=j::string(_v_15866_fn);_text18702+=u"() takes a drawing or a piece fromImage() made, not another piece: lay that one over with compose's layer() or over()";return V(std::move(_text18702));})()});})());

}

return _v_15865_img;

}

return V{};
},2);
this->_v_15867_prepare.get()=j::function([=](const j::Args &_args_fn15868,const V &_receiver_fn15868,const V &_self_fn15868) mutable ->V{
V _v_15869_d;
V _v_15870_ramp;
V _v_15871_fn;
_v_15869_d=_args_fn15868[0];
_v_15870_ramp=_args_fn15868[1];
_v_15871_fn=_args_fn15868[2];
{
V _v_15872_asked;
V _v_15873_had;
V _v_15874_cols;
V _v_15875_rows;
V _v_15876_style;
V _v_15877_cells;
V _v_15878_shades;
V _v_15879_solid;
V _v_15880_art;
V _v_15881_mono;
V _v_15882_turned;
V _v_15883_ink;
V _v_15884_hard;
V _v_15885_pos;
V _v_15886_lo;
V _v_15887_hi;
V _v_15896_light;
V _v_15897_dark;
V _v_15898_p;
_v_15872_asked=(j::truth(([&]()->V{V _logical18704=([&]()->V{V _logical18705=_v_15869_d;return j::truth(_logical18705)?([&]()->V{V _lhs18706=j::unary("typeof",_v_15869_d);V _rhs18707=this->_literals[4];return V(j::equal(_lhs18706,_rhs18707,true));})():_logical18705;})();return j::truth(_logical18704)?([&]()->V{V _lhs18708=j::get(_v_15869_d,this->_literals[27]);V _rhs18709=j::builtin("undefined");return V(!j::equal(_lhs18708,_rhs18709,true));})():_logical18704;})())?j::get(_v_15869_d,this->_literals[27]):_v_15870_ramp);
_v_15873_had=(j::truth(([&]()->V{V _logical18710=_v_15869_d;return j::truth(_logical18710)?([&]()->V{V _lhs18711=j::unary("typeof",_v_15869_d);V _rhs18712=this->_literals[4];return V(j::equal(_lhs18711,_rhs18712,true));})():_logical18710;})())?([&]()->V{V _chain18713=this->_v_15862_prepared.get();V _chain18714=j::get(_chain18713,this->_literals[62]);V _chain18715=j::call(_chain18714,j::Args{_v_15869_d},_chain18713);if(j::nullish(_chain18715))return V{};V _chain18716=j::get(_chain18715,this->_literals[62]);V _chain18717=j::call(_chain18716,j::Args{_v_15872_asked},_chain18715);return _chain18717;})():j::builtin("undefined"));
if(j::truth(_v_15873_had)){return _v_15873_had;
}
(void)(([&]()->V{V _callee18718=this->_v_15839_checkDrawing.get();return j::call(_callee18718,j::Args{_v_15869_d,_v_15871_fn});})());
V _pattern18719=_v_15869_d;
_v_15874_cols=j::get(_pattern18719,this->_literals[34]);
_v_15875_rows=j::get(_pattern18719,this->_literals[22]);
_v_15876_style=j::get(_pattern18719,this->_literals[23]);
_v_15877_cells=([&]()->V{V _lhs18720=_v_15874_cols;V _rhs18721=_v_15875_rows;return V(j::number(_lhs18720)*j::number(_rhs18721));})();
_v_15878_shades=([&]()->V{V _callee18722=this->_v_15272_rampOf.get();return j::call(_callee18722,j::Args{_v_15872_asked});})();
_v_15879_solid=(j::truth(([&]()->V{V _lhs18723=_v_15876_style;V _rhs18724=this->_literals[36];return V(j::equal(_lhs18723,_rhs18724,true));})())?([&]()->V{V _receiver18725=([&]()->V{V _receiver18728=_v_15878_shades;V _method18729=this->_literals[2];V _method=j::get(_receiver18728,_method18729);j::Args _params18730=j::Args{V(2.0)};return j::call(_method,_params18730,_receiver18728);})();V _method18726=this->_literals[91];V _method=j::get(_receiver18725,_method18726);j::Args _params18727=j::Args{j::regexp(u" ","g"),this->_literals[14]};return j::call(_method,_params18727,_receiver18725);})():this->_v_15290_SOLID.get());
_v_15880_art=([&]()->V{V _callee18731=j::builtin("Uint16Array");return j::construct(_callee18731,j::Args{_v_15877_cells});})();
_v_15881_mono=([&]()->V{V _callee18732=j::builtin("Uint16Array");return j::construct(_callee18732,j::Args{_v_15877_cells});})();
_v_15882_turned=([&]()->V{V _callee18733=j::builtin("Uint16Array");return j::construct(_callee18733,j::Args{_v_15877_cells});})();
_v_15883_ink=([&]()->V{V _callee18734=j::builtin("Uint8Array");return j::construct(_callee18734,j::Args{_v_15877_cells});})();
_v_15884_hard=([&]()->V{j::Args _array18735;_array18735.push_back(([&]()->V{V _callee18736=j::builtin("Uint8Array");return j::construct(_callee18736,j::Args{_v_15877_cells});})());_array18735.push_back(([&]()->V{V _callee18737=j::builtin("Uint8Array");return j::construct(_callee18737,j::Args{_v_15877_cells});})());_array18735.push_back(([&]()->V{V _callee18738=j::builtin("Uint8Array");return j::construct(_callee18738,j::Args{_v_15877_cells});})());return j::array(std::move(_array18735));})();
_v_15885_pos=([&]()->V{V _callee18739=j::builtin("Float32Array");return j::construct(_callee18739,j::Args{_v_15877_cells});})();
_v_15886_lo=j::builtin("Infinity");
_v_15887_hi=j::unary("-",j::builtin("Infinity"));
{V _v_15888_y;
_v_15888_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs18740=_v_15888_y;V _rhs18741=_v_15875_rows;return j::binary("<",_lhs18740,_rhs18741);})());(void)(j::increment(_v_15888_y,1,false))){{V _v_15889_x;
_v_15889_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs18742=_v_15889_x;V _rhs18743=_v_15874_cols;return j::binary("<",_lhs18742,_rhs18743);})());(void)(j::increment(_v_15889_x,1,false))){
V _v_15890_i;
V _v_15891_a;
V _v_15892_m;
V _v_15893_inked;
V _v_15894_at;
V _v_15895_p;
_v_15890_i=([&]()->V{V _lhs18744=([&]()->V{V _lhs18746=_v_15888_y;V _rhs18747=_v_15874_cols;return V(j::number(_lhs18746)*j::number(_rhs18747));})();V _rhs18745=_v_15889_x;return j::binary("+",_lhs18744,_rhs18745);})();
_v_15891_a=j::get(j::get(j::get(_v_15869_d,this->_literals[55]),_v_15888_y),_v_15889_x);
_v_15892_m=j::get(j::get(j::get(_v_15869_d,this->_literals[57]),_v_15888_y),_v_15889_x);
_v_15893_inked=([&]()->V{V _lhs18748=j::get(j::get(j::get(_v_15869_d,this->_literals[56]),_v_15888_y),_v_15889_x);V _rhs18749=this->_literals[51];return V(!j::equal(_lhs18748,_rhs18749,true));})();
_v_15894_at=(j::truth(([&]()->V{V _logical18750=([&]()->V{V _lhs18751=_v_15876_style;V _rhs18752=this->_literals[36];return V(j::equal(_lhs18751,_rhs18752,true));})();return j::truth(_logical18750)?_v_15893_inked:_logical18750;})())?([&]()->V{V _receiver18753=_v_15878_shades;V _method18754=this->_literals[92];V _method=j::get(_receiver18753,_method18754);j::Args _params18755=j::Args{_v_15892_m};return j::call(_method,_params18755,_receiver18753);})():j::unary("-",V(1.0)));
_v_15895_p=(j::truth(([&]()->V{V _lhs18756=_v_15894_at;V _rhs18757=V(0.0);return j::binary(">=",_lhs18756,_rhs18757);})())?j::get(_v_15878_shades,([&]()->V{V _lhs18758=([&]()->V{V _lhs18760=j::get(_v_15878_shades,this->_literals[1]);V _rhs18761=V(1.0);return V(j::number(_lhs18760)-j::number(_rhs18761));})();V _rhs18759=_v_15894_at;return V(j::number(_lhs18758)-j::number(_rhs18759));})()):_v_15892_m);
(void)(([&]()->V{V _base18763=_v_15880_art;V _key18764=_v_15890_i;V _assign18762=([&]()->V{V _receiver18765=_v_15891_a;V _method18766=this->_literals[93];V _method=j::get(_receiver18765,_method18766);j::Args _params18767=j::Args{V(0.0)};return j::call(_method,_params18767,_receiver18765);})();return j::put(_base18763,_key18764,_assign18762);})());
(void)(([&]()->V{V _base18769=_v_15881_mono;V _key18770=_v_15890_i;V _assign18768=([&]()->V{V _receiver18771=_v_15892_m;V _method18772=this->_literals[93];V _method=j::get(_receiver18771,_method18772);j::Args _params18773=j::Args{V(0.0)};return j::call(_method,_params18773,_receiver18771);})();return j::put(_base18769,_key18770,_assign18768);})());
(void)(([&]()->V{V _base18775=_v_15882_turned;V _key18776=_v_15890_i;V _assign18774=([&]()->V{V _receiver18777=_v_15895_p;V _method18778=this->_literals[93];V _method=j::get(_receiver18777,_method18778);j::Args _params18779=j::Args{V(0.0)};return j::call(_method,_params18779,_receiver18777);})();return j::put(_base18775,_key18776,_assign18774);})());
(void)(([&]()->V{V _base18781=_v_15883_ink;V _key18782=_v_15890_i;V _assign18780=(j::truth(_v_15893_inked)?([&]()->V{V _callee18783=j::builtin("parseInt");return j::call(_callee18783,j::Args{j::get(j::get(j::get(_v_15869_d,this->_literals[56]),_v_15888_y),_v_15889_x),V(36.0)});})():V(0.0));return j::put(_base18781,_key18782,_assign18780);})());
(void)(([&]()->V{V _base18785=j::get(_v_15884_hard,V(0.0));V _key18786=_v_15890_i;V _assign18784=j::unary("+",([&]()->V{V _receiver18787=_v_15879_solid;V _method18788=this->_literals[13];V _method=j::get(_receiver18787,_method18788);j::Args _params18789=j::Args{_v_15891_a};return j::call(_method,_params18789,_receiver18787);})());return j::put(_base18785,_key18786,_assign18784);})());
(void)(([&]()->V{V _base18791=j::get(_v_15884_hard,V(1.0));V _key18792=_v_15890_i;V _assign18790=j::unary("+",([&]()->V{V _receiver18793=_v_15879_solid;V _method18794=this->_literals[13];V _method=j::get(_receiver18793,_method18794);j::Args _params18795=j::Args{_v_15892_m};return j::call(_method,_params18795,_receiver18793);})());return j::put(_base18791,_key18792,_assign18790);})());
(void)(([&]()->V{V _base18797=j::get(_v_15884_hard,V(2.0));V _key18798=_v_15890_i;V _assign18796=j::unary("+",([&]()->V{V _receiver18799=_v_15879_solid;V _method18800=this->_literals[13];V _method=j::get(_receiver18799,_method18800);j::Args _params18801=j::Args{_v_15895_p};return j::call(_method,_params18801,_receiver18799);})());return j::put(_base18797,_key18798,_assign18796);})());
(void)(([&]()->V{V _base18803=_v_15885_pos;V _key18804=_v_15890_i;V _assign18802=([&]()->V{V _lhs18805=_v_15889_x;V _rhs18806=([&]()->V{V _lhs18807=this->_v_15289_LEAN.get();V _rhs18808=_v_15888_y;return V(j::number(_lhs18807)*j::number(_rhs18808));})();return j::binary("+",_lhs18805,_rhs18806);})();return j::put(_base18803,_key18804,_assign18802);})());
if(j::truth(([&]()->V{V _logical18809=([&]()->V{V _logical18810=_v_15893_inked;return !j::truth(_logical18810)?([&]()->V{V _lhs18811=_v_15891_a;V _rhs18812=this->_literals[51];return V(!j::equal(_lhs18811,_rhs18812,true));})():_logical18810;})();return !j::truth(_logical18809)?([&]()->V{V _lhs18813=_v_15892_m;V _rhs18814=this->_literals[51];return V(!j::equal(_lhs18813,_rhs18814,true));})():_logical18809;})())){(void)(((_v_15886_lo=([&]()->V{V _receiver18818=j::builtin("Math");V _method18819=this->_literals[59];V _method=j::get(_receiver18818,_method18819);j::Args _params18820=j::Args{_v_15886_lo,j::get(_v_15885_pos,_v_15890_i)};return j::call(_method,_params18820,_receiver18818);})()),(_v_15887_hi=([&]()->V{V _receiver18824=j::builtin("Math");V _method18825=this->_literals[60];V _method=j::get(_receiver18824,_method18825);j::Args _params18826=j::Args{_v_15887_hi,j::get(_v_15885_pos,_v_15890_i)};return j::call(_method,_params18826,_receiver18824);})())));
}

}
}
}}
V _pattern18828=([&]()->V{V _callee18827=this->_v_15823_palette.get();return j::call(_callee18827,j::Args{j::get(_v_15869_d,this->_literals[54]),_v_15876_style});})();
_v_15896_light=j::get(_pattern18828,this->_literals[86]);
_v_15897_dark=j::get(_pattern18828,this->_literals[87]);
_v_15898_p=([&]()->V{V _obj18829=j::object();j::put(_obj18829,this->_literals[34],_v_15874_cols);j::put(_obj18829,this->_literals[22],_v_15875_rows);j::put(_obj18829,this->_literals[94],j::get(j::get(_v_15869_d,this->_literals[54]),this->_literals[1]));j::put(_obj18829,this->_literals[36],([&]()->V{V _lhs18830=_v_15876_style;V _rhs18831=this->_literals[36];return V(j::equal(_lhs18830,_rhs18831,true));})());j::put(_obj18829,this->_literals[55],_v_15880_art);j::put(_obj18829,this->_literals[57],_v_15881_mono);j::put(_obj18829,this->_literals[95],_v_15882_turned);j::put(_obj18829,this->_literals[56],_v_15883_ink);j::put(_obj18829,this->_literals[96],_v_15884_hard);j::put(_obj18829,this->_literals[97],_v_15885_pos);j::put(_obj18829,this->_literals[98],_v_15886_lo);j::put(_obj18829,this->_literals[99],_v_15887_hi);j::put(_obj18829,this->_literals[86],_v_15896_light);j::put(_obj18829,this->_literals[87],_v_15897_dark);j::put(_obj18829,this->_literals[100],([&]()->V{V _callee18832=j::builtin("WeakMap");return j::construct(_callee18832,j::Args{});})());return _obj18829;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver18833=this->_v_15862_prepared.get();V _method18834=this->_literals[101];V _method=j::get(_receiver18833,_method18834);j::Args _params18835=j::Args{_v_15869_d};return j::call(_method,_params18835,_receiver18833);})()))){(void)(([&]()->V{V _receiver18837=this->_v_15862_prepared.get();V _method18838=this->_literals[63];V _method=j::get(_receiver18837,_method18838);j::Args _params18839=j::Args{_v_15869_d,([&]()->V{V _callee18836=j::builtin("Map");return j::construct(_callee18836,j::Args{});})()};return j::call(_method,_params18839,_receiver18837);})());
}
(void)(([&]()->V{V _receiver18840=([&]()->V{V _receiver18843=this->_v_15862_prepared.get();V _method18844=this->_literals[62];V _method=j::get(_receiver18843,_method18844);j::Args _params18845=j::Args{_v_15869_d};return j::call(_method,_params18845,_receiver18843);})();V _method18841=this->_literals[63];V _method=j::get(_receiver18840,_method18841);j::Args _params18842=j::Args{_v_15872_asked,_v_15898_p};return j::call(_method,_params18842,_receiver18840);})());
return _v_15898_p;

}

return V{};
},3);
this->_v_15899_paint.get()=j::function([=](const j::Args &_args_fn15900,const V &_receiver_fn15900,const V &_self_fn15900) mutable ->V{
V _v_15901_s;
V _v_15902_p;
V _v_15903_x;
V _v_15904_y;
V _v_15905_t;
V _v_15906_every;
V _v_15907_invert;
V _v_15908_idx;
_v_15901_s=_args_fn15900[0];
_v_15902_p=_args_fn15900[1];
_v_15903_x=_args_fn15900[2];
_v_15904_y=_args_fn15900[3];
_v_15905_t=_args_fn15900[4];
_v_15906_every=_args_fn15900[5];
_v_15907_invert=_args_fn15900[6];
_v_15908_idx=_args_fn15900[7];
{
V _v_15909_turn;
V _v_15910_chars;
V _v_15911_solidAt;
V _v_15912_cols;
V _v_15913_n;
V _v_15914_pos;
V _v_15915_ink;
V _v_15916_at;
V _v_15917_c0;
V _v_15918_c1;
V _v_15919_r1;
_v_15909_turn=([&]()->V{V _logical18846=j::get(_v_15902_p,this->_literals[36]);return j::truth(_logical18846)?([&]()->V{V _logical18847=([&]()->V{V _lhs18848=_v_15907_invert;V _rhs18849=V(true);return V(j::equal(_lhs18848,_rhs18849,true));})();return !j::truth(_logical18847)?([&]()->V{V _logical18850=([&]()->V{V _lhs18851=_v_15907_invert;V _rhs18852=this->_literals[29];return V(j::equal(_lhs18851,_rhs18852,true));})();return j::truth(_logical18850)?j::get(_v_15901_s,this->_literals[102]):_logical18850;})():_logical18847;})():_logical18846;})();
_v_15910_chars=(j::truth(_v_15909_turn)?j::get(_v_15902_p,this->_literals[95]):(j::truth(_v_15908_idx)?j::get(_v_15902_p,this->_literals[55]):j::get(_v_15902_p,this->_literals[57])));
_v_15911_solidAt=j::get(j::get(_v_15902_p,this->_literals[96]),(j::truth(_v_15909_turn)?V(2.0):(j::truth(_v_15908_idx)?V(0.0):V(1.0))));
V _pattern18853=_v_15902_p;
_v_15912_cols=j::get(_pattern18853,this->_literals[34]);
_v_15913_n=j::get(_pattern18853,this->_literals[94]);
_v_15914_pos=j::get(_pattern18853,this->_literals[97]);
_v_15915_ink=j::get(_pattern18853,this->_literals[56]);
_v_15916_at=(j::truth(([&]()->V{V _logical18854=([&]()->V{V _logical18855=_v_15906_every;return j::truth(_logical18855)?([&]()->V{V _lhs18856=j::get(_v_15902_p,this->_literals[98]);V _rhs18857=j::get(_v_15902_p,this->_literals[99]);return j::binary("<=",_lhs18856,_rhs18857);})():_logical18855;})();return j::truth(_logical18854)?([&]()->V{V _lhs18858=_v_15905_t;V _rhs18859=this->_v_15286_START.get();return j::binary(">=",_lhs18858,_rhs18859);})():_logical18854;})())?([&]()->V{V _lhs18860=([&]()->V{V _lhs18862=j::get(_v_15902_p,this->_literals[98]);V _rhs18863=this->_v_15288_HALF.get();return V(j::number(_lhs18862)-j::number(_rhs18863));})();V _rhs18861=([&]()->V{V _lhs18864=([&]()->V{V _lhs18866=([&]()->V{V _lhs18868=([&]()->V{V _lhs18870=j::get(_v_15902_p,this->_literals[99]);V _rhs18871=j::get(_v_15902_p,this->_literals[98]);return V(j::number(_lhs18870)-j::number(_rhs18871));})();V _rhs18869=([&]()->V{V _lhs18872=V(2.0);V _rhs18873=this->_v_15288_HALF.get();return V(j::number(_lhs18872)*j::number(_rhs18873));})();return j::binary("+",_lhs18868,_rhs18869);})();V _rhs18867=([&]()->V{V _lhs18874=([&]()->V{V _lhs18876=_v_15905_t;V _rhs18877=this->_v_15286_START.get();return V(j::number(_lhs18876)-j::number(_rhs18877));})();V _rhs18875=_v_15906_every;return V(std::fmod(j::number(_lhs18874),j::number(_rhs18875)));})();return V(j::number(_lhs18866)*j::number(_rhs18867));})();V _rhs18865=this->_v_15287_PASS.get();return V(j::number(_lhs18864)/j::number(_rhs18865));})();return j::binary("+",_lhs18860,_rhs18861);})():j::unary("-",j::builtin("Infinity")));
(void)((_v_15903_x=([&]()->V{V _number18879=_v_15903_x;return V(std::floor(j::number(_number18879)));})()));
(void)((_v_15904_y=([&]()->V{V _number18881=_v_15904_y;return V(std::floor(j::number(_number18881)));})()));
_v_15917_c0=([&]()->V{V _receiver18884=j::builtin("Math");V _method18885=this->_literals[60];V _method=j::get(_receiver18884,_method18885);j::Args _params18886=j::Args{V(0.0),j::unary("-",_v_15903_x)};return j::call(_method,_params18886,_receiver18884);})();
_v_15918_c1=([&]()->V{V _receiver18891=j::builtin("Math");V _method18892=this->_literals[59];V _method=j::get(_receiver18891,_method18892);j::Args _params18893=j::Args{_v_15912_cols,([&]()->V{V _lhs18887=j::get(_v_15901_s,this->_literals[34]);V _rhs18888=_v_15903_x;return V(j::number(_lhs18887)-j::number(_rhs18888));})()};return j::call(_method,_params18893,_receiver18891);})();
_v_15919_r1=([&]()->V{V _receiver18898=j::builtin("Math");V _method18899=this->_literals[59];V _method=j::get(_receiver18898,_method18899);j::Args _params18900=j::Args{j::get(_v_15902_p,this->_literals[22]),([&]()->V{V _lhs18894=j::get(_v_15901_s,this->_literals[22]);V _rhs18895=_v_15904_y;return V(j::number(_lhs18894)-j::number(_rhs18895));})()};return j::call(_method,_params18900,_receiver18898);})();
{V _v_15920_r;
_v_15920_r=([&]()->V{V _receiver18903=j::builtin("Math");V _method18904=this->_literals[60];V _method=j::get(_receiver18903,_method18904);j::Args _params18905=j::Args{V(0.0),j::unary("-",_v_15904_y)};return j::call(_method,_params18905,_receiver18903);})();
for(;j::truth(([&]()->V{V _lhs18906=_v_15920_r;V _rhs18907=_v_15919_r1;return j::binary("<",_lhs18906,_rhs18907);})());(void)(j::increment(_v_15920_r,1,false))){{V _v_15921_c;
V _v_15922_i;
_v_15921_c=_v_15917_c0;
_v_15922_i=([&]()->V{V _lhs18908=([&]()->V{V _lhs18910=_v_15920_r;V _rhs18911=_v_15912_cols;return V(j::number(_lhs18910)*j::number(_rhs18911));})();V _rhs18909=_v_15917_c0;return j::binary("+",_lhs18908,_rhs18909);})();
for(;j::truth(([&]()->V{V _lhs18912=_v_15921_c;V _rhs18913=_v_15918_c1;return j::binary("<",_lhs18912,_rhs18913);})());(void)((j::increment(_v_15921_c,1,false),j::increment(_v_15922_i,1,false)))){
V _v_15923_ch;
V _v_15924_k;
V _v_15925_dist;
_v_15923_ch=j::get(_v_15910_chars,_v_15922_i);
if(j::truth(([&]()->V{V _lhs18914=_v_15923_ch;V _rhs18915=V(32.0);return V(j::equal(_lhs18914,_rhs18915,true));})())){continue;
}
_v_15924_k=V(0.0);
_v_15925_dist=([&]()->V{V _number18918=([&]()->V{V _lhs18919=j::get(_v_15914_pos,_v_15922_i);V _rhs18920=_v_15916_at;return V(j::number(_lhs18919)-j::number(_rhs18920));})();return V(std::fabs(j::number(_number18918)));})();
if(j::truth(([&]()->V{V _lhs18921=_v_15925_dist;V _rhs18922=this->_v_15288_HALF.get();return j::binary("<",_lhs18921,_rhs18922);})())){
(void)((_v_15924_k=([&]()->V{V _lhs18924=V(1.0);V _rhs18925=([&]()->V{V _lhs18926=_v_15925_dist;V _rhs18927=this->_v_15288_HALF.get();return V(j::number(_lhs18926)/j::number(_rhs18927));})();return V(j::number(_lhs18924)-j::number(_rhs18925));})()));
(void)((_v_15924_k=([&]()->V{V _lhs18929=([&]()->V{V _lhs18931=_v_15924_k;V _rhs18932=_v_15924_k;return V(j::number(_lhs18931)*j::number(_rhs18932));})();V _rhs18930=([&]()->V{V _lhs18933=V(3.0);V _rhs18934=([&]()->V{V _lhs18935=V(2.0);V _rhs18936=_v_15924_k;return V(j::number(_lhs18935)*j::number(_rhs18936));})();return V(j::number(_lhs18933)-j::number(_rhs18934));})();return V(j::number(_lhs18929)*j::number(_rhs18930));})()));

}

if(j::truth(([&]()->V{V _logical18937=([&]()->V{V _lhs18938=_v_15924_k;V _rhs18939=V(0.55);return j::binary(">",_lhs18938,_rhs18939);})();return j::truth(_logical18937)?j::get(_v_15911_solidAt,_v_15922_i):_logical18937;})())){(void)((_v_15923_ch=this->_v_15291_SLASH.get()));
}
(void)(([&]()->V{V _receiver18957=_v_15901_s;V _method18958=this->_literals[103];V _method=j::get(_receiver18957,_method18958);j::Args _params18959=j::Args{([&]()->V{V _lhs18941=([&]()->V{V _lhs18943=([&]()->V{V _lhs18945=([&]()->V{V _lhs18947=_v_15920_r;V _rhs18948=_v_15904_y;return j::binary("+",_lhs18947,_rhs18948);})();V _rhs18946=j::get(_v_15901_s,this->_literals[34]);return V(j::number(_lhs18945)*j::number(_rhs18946));})();V _rhs18944=_v_15921_c;return j::binary("+",_lhs18943,_rhs18944);})();V _rhs18942=_v_15903_x;return j::binary("+",_lhs18941,_rhs18942);})(),_v_15923_ch,(j::truth(_v_15908_idx)?j::get(_v_15908_idx,([&]()->V{V _lhs18949=([&]()->V{V _lhs18951=(j::truth(([&]()->V{V _lhs18953=_v_15924_k;V _rhs18954=V(0.6);return j::binary(">",_lhs18953,_rhs18954);})())?V(2.0):(j::truth(([&]()->V{V _lhs18955=_v_15924_k;V _rhs18956=V(0.25);return j::binary(">",_lhs18955,_rhs18956);})())?V(1.0):V(0.0)));V _rhs18952=_v_15913_n;return V(j::number(_lhs18951)*j::number(_rhs18952));})();V _rhs18950=j::get(_v_15915_ink,_v_15922_i);return j::binary("+",_lhs18949,_rhs18950);})()):this->_v_15263_NONE.get())};return j::call(_method,_params18959,_receiver18957);})());

}
}
}}

}

return V{};
},8);
this->_v_15926_fromDrawing.get()=j::function([=](const j::Args &_args_fn15927,const V &_receiver_fn15927,const V &_self_fn15927) mutable ->V{
V _v_15928_d;
V _v_15929_o;
_v_15928_d=_args_fn15927[0];
_v_15929_o=_args_fn15927[1];
{
return ([&]()->V{V _callee18961=this->_v_15930_pieceOf.get();return j::call(_callee18961,j::Args{_v_15928_d,([&]()->V{V _callee18960=this->_v_15318_settings.get();return j::call(_callee18960,j::Args{_v_15929_o});})(),this->_literals[104]});})();

}

return V{};
},2);
this->_v_15930_pieceOf.get()=j::function([=](const j::Args &_args_fn15931,const V &_receiver_fn15931,const V &_self_fn15931) mutable ->V{
V _v_15932_d;
j::Cell _v_15933_set;
V _v_15934_fn;
_v_15932_d=_args_fn15931[0];
_v_15933_set.get()=_args_fn15931[1];
_v_15934_fn=_args_fn15931[2];
{
j::Cell _v_15935_p;
j::Cell _v_15936_every;
V _v_15937_kind;
V _v_15938_note;
V _v_15939_spec;
V _v_15940_made;
_v_15935_p.get()=([&]()->V{V _callee18962=this->_v_15867_prepare.get();return j::call(_callee18962,j::Args{_v_15932_d,j::get(_v_15933_set.get(),this->_literals[27]),_v_15934_fn});})();
_v_15936_every.get()=(j::truth(([&]()->V{V _lhs18963=j::get(_v_15935_p.get(),this->_literals[98]);V _rhs18964=j::get(_v_15935_p.get(),this->_literals[99]);return j::binary("<=",_lhs18963,_rhs18964);})())?j::get(_v_15933_set.get(),this->_literals[15]):V(0.0));
_v_15937_kind=(j::truth(j::get(_v_15935_p.get(),this->_literals[36]))?this->_literals[105]:this->_literals[106]);
_v_15938_note=([&]()->V{V _logical18965=j::get(_v_15933_set.get(),this->_literals[31]);return j::nullish(_logical18965)?([&]()->V{V _receiver18966=([&]()->V{std::u16string _text18969;_text18969+=u"";_text18969+=j::string(j::get(_v_15933_set.get(),this->_literals[8]));_text18969+=u", ";_text18969+=j::string(_v_15937_kind);_text18969+=u" in ascii";_text18969+=j::string((j::truth(_v_15936_every.get())?this->_literals[107]:this->_literals[14]));_text18969+=u"";return V(std::move(_text18969));})();V _method18967=this->_literals[2];V _method=j::get(_receiver18966,_method18967);j::Args _params18968=j::Args{V(0.0),V(72.0)};return j::call(_method,_params18968,_receiver18966);})():_logical18965;})();
_v_15939_spec=([&]()->V{V _obj18970=j::object();j::put(_obj18970,this->_literals[8],j::get(_v_15933_set.get(),this->_literals[8]));j::put(_obj18970,this->_literals[31],_v_15938_note);j::put(_obj18970,this->_literals[32],j::get(_v_15933_set.get(),this->_literals[32]));j::put(_obj18970,this->_literals[34],j::get(_v_15935_p.get(),this->_literals[34]));j::put(_obj18970,this->_literals[22],j::get(_v_15935_p.get(),this->_literals[22]));j::put(_obj18970,this->_literals[42],(j::truth(_v_15936_every.get())?V(30.0):V(0.0)));V _spread18971=(j::truth(_v_15936_every.get())?([&]()->V{V _obj18972=j::object();j::put(_obj18972,this->_literals[108],_v_15936_every.get());return _obj18972;})():([&]()->V{V _obj18973=j::object();return _obj18973;})());for(const auto &_key:j::keys(_spread18971))j::put(_obj18970,_key,j::get(_spread18971,_key));return _obj18970;})();
_v_15940_made=([&]()->V{V _callee18994=this->_v_15271_piece.get();return j::call(_callee18994,j::Args{(j::truth(j::get(_v_15933_set.get(),this->_literals[26]))?([&]()->V{V _obj18974=j::object();V _spread18975=_v_15939_spec;for(const auto &_key:j::keys(_spread18975))j::put(_obj18974,_key,j::get(_spread18975,_key));j::put(_obj18974,this->_literals[109],([&]()->V{V _obj18976=j::object();j::put(_obj18976,this->_literals[86],j::get(_v_15935_p.get(),this->_literals[86]));j::put(_obj18976,this->_literals[87],j::get(_v_15935_p.get(),this->_literals[87]));return _obj18976;})());return _obj18974;})():_v_15939_spec),([&]()->V{V _obj18977=j::object();j::put(_obj18977,this->_literals[110],j::function([=](const j::Args &_args_fn15941,const V &_receiver_fn15941,const V &_self_fn15941) mutable ->V{
{
j::Cell _v_15942_index;
_v_15942_index.get()=([&]()->V{j::Args _array18978;_array18978.push_back(j::builtin("undefined"));_array18978.push_back(j::builtin("undefined"));return j::array(std::move(_array18978));})();
return j::function([=](const j::Args &_args_fn15943,const V &_receiver_fn15943,const V &_self_fn15943) mutable ->V{
V _v_15944_t;
j::Cell _v_15945_s;
j::Cell _v_15946_ctx;
_v_15944_t=_args_fn15943[0];
_v_15945_s.get()=_args_fn15943[1];
_v_15946_ctx.get()=_args_fn15943[2];
{
V _v_15947_idx;
_v_15947_idx=(j::truth(([&]()->V{V _logical18979=j::get(_v_15945_s.get(),this->_literals[109]);return j::truth(_logical18979)?j::unary("!",j::get(_v_15946_ctx.get(),this->_literals[57])):_logical18979;})())?([&]()->V{V _base18981=_v_15942_index.get();V _key18982=j::unary("+",j::get(_v_15946_ctx.get(),this->_literals[102]));V _old18983=j::get(_base18981,_key18982);return j::nullish(_old18983)?j::put(_base18981,_key18982,([&]()->V{V _receiver18990=j::builtin("Uint8Array");V _method18991=this->_literals[53];V _method=j::get(_receiver18990,_method18991);j::Args _params18992=j::Args{([&]()->V{V _obj18984=j::object();j::put(_obj18984,this->_literals[1],([&]()->V{V _lhs18985=V(3.0);V _rhs18986=j::get(_v_15935_p.get(),this->_literals[94]);return V(j::number(_lhs18985)*j::number(_rhs18986));})());return _obj18984;})(),j::function([=](const j::Args &_args_fn15948,const V &_receiver_fn15948,const V &_self_fn15948) mutable ->V{
V _v_15949__;
V _v_15950_j;
_v_15949__=_args_fn15948[0];
_v_15950_j=_args_fn15948[1];
return ([&]()->V{V _receiver18987=j::get(_v_15945_s.get(),this->_literals[109]);V _method18988=this->_literals[100];V _method=j::get(_receiver18987,_method18988);j::Args _params18989=j::Args{_v_15950_j,j::get(_v_15946_ctx.get(),this->_literals[102])};return j::call(_method,_params18989,_receiver18987);})();
return V{};
},2)};return j::call(_method,_params18992,_receiver18990);})()):_old18983;})():V::null());
(void)(([&]()->V{V _callee18993=this->_v_15899_paint.get();return j::call(_callee18993,j::Args{_v_15945_s.get(),_v_15935_p.get(),V(0.0),V(0.0),_v_15944_t,_v_15936_every.get(),j::get(_v_15933_set.get(),this->_literals[28]),_v_15947_idx});})());

}

return V{};
},3);

}

return V{};
},0));return _obj18977;})()});})();
return ([&]()->V{V _receiver18996=j::builtin("Object");V _method18997=this->_literals[111];V _method=j::get(_receiver18996,_method18997);j::Args _params18998=j::Args{_v_15940_made,([&]()->V{V _obj18995=j::object();j::put(_obj18995,this->_literals[90],_v_15932_d);return _obj18995;})()};return j::call(_method,_params18998,_receiver18996);})();

}

return V{};
},3);
this->_v_15951_drawImage.get()=j::function([=](const j::Args &_args_fn15952,const V &_receiver_fn15952,const V &_self_fn15952) mutable ->V{
V _v_15953_s;
V _v_15954_img;
V _v_15955_x;
V _v_15956_y;
V _v_15957_o;
_v_15953_s=_args_fn15952[0];
_v_15954_img=_args_fn15952[1];
V _default18999=_args_fn15952[2];if(_default18999.kind==V::Undefined||_default18999.kind==V::Hole)_default18999=V(0.0);
_v_15955_x=_default18999;
V _default19000=_args_fn15952[3];if(_default19000.kind==V::Undefined||_default19000.kind==V::Hole)_default19000=V(0.0);
_v_15956_y=_default19000;
_v_15957_o=_args_fn15952[4];
{
V _v_15958_t;
V _v_15959_every;
V _v_15960_invert;
V _v_15961_p;
V _v_15962_idx;
j::Cell _v_15963_pal;
if(j::truth(([&]()->V{V _logical19001=([&]()->V{V _logical19002=([&]()->V{V _logical19003=([&]()->V{V _logical19004=j::unary("!",_v_15953_s);return !j::truth(_logical19004)?([&]()->V{V _lhs19005=j::unary("typeof",_v_15953_s);V _rhs19006=this->_literals[4];return V(!j::equal(_lhs19005,_rhs19006,true));})():_logical19004;})();return !j::truth(_logical19003)?([&]()->V{V _lhs19007=j::unary("typeof",j::get(_v_15953_s,this->_literals[103]));V _rhs19008=this->_literals[5];return V(!j::equal(_lhs19007,_rhs19008,true));})():_logical19003;})();return !j::truth(_logical19002)?j::unary("!",([&]()->V{V _receiver19009=j::builtin("Number");V _method19010=this->_literals[44];V _method=j::get(_receiver19009,_method19010);j::Args _params19011=j::Args{j::get(_v_15953_s,this->_literals[34])};return j::call(_method,_params19011,_receiver19009);})()):_logical19002;})();return !j::truth(_logical19001)?j::unary("!",([&]()->V{V _receiver19012=j::builtin("Number");V _method19013=this->_literals[44];V _method=j::get(_receiver19012,_method19013);j::Args _params19014=j::Args{j::get(_v_15953_s,this->_literals[22])};return j::call(_method,_params19014,_receiver19012);})()):_logical19001;})())){(void)(([&]()->V{V _callee19017=this->_v_15268_fail.get();return j::call(_callee19017,j::Args{([&]()->V{std::u16string _text19015;_text19015+=u"drawImage() takes the surface to draw on first, as a piece's drawing is given it: (t, s) => drawImage(s, logo), not ";_text19015+=j::string(([&]()->V{V _callee19016=this->_v_15298_shown.get();return j::call(_callee19016,j::Args{_v_15953_s});})());_text19015+=u"";return V(std::move(_text19015));})()});})());
}
if(j::truth(([&]()->V{V _logical19018=j::unary("!",([&]()->V{V _receiver19019=j::builtin("Number");V _method19020=this->_literals[18];V _method=j::get(_receiver19019,_method19020);j::Args _params19021=j::Args{_v_15955_x};return j::call(_method,_params19021,_receiver19019);})());return !j::truth(_logical19018)?j::unary("!",([&]()->V{V _receiver19022=j::builtin("Number");V _method19023=this->_literals[18];V _method=j::get(_receiver19022,_method19023);j::Args _params19024=j::Args{_v_15956_y};return j::call(_method,_params19024,_receiver19022);})()):_logical19018;})())){(void)(([&]()->V{V _callee19028=this->_v_15268_fail.get();return j::call(_callee19028,j::Args{([&]()->V{std::u16string _text19025;_text19025+=u"drawImage() takes the column and row of the image's top left as numbers, not ";_text19025+=j::string(([&]()->V{V _callee19026=this->_v_15298_shown.get();return j::call(_callee19026,j::Args{_v_15955_x});})());_text19025+=u" and ";_text19025+=j::string(([&]()->V{V _callee19027=this->_v_15298_shown.get();return j::call(_callee19027,j::Args{_v_15956_y});})());_text19025+=u"";return V(std::move(_text19025));})()});})());
}
_v_15958_t=V(0.0);
_v_15959_every=V(0.0);
_v_15960_invert=this->_literals[29];
if(j::truth(([&]()->V{V _lhs19029=_v_15957_o;V _rhs19030=j::builtin("undefined");return V(!j::equal(_lhs19029,_rhs19030,true));})())){
if(j::truth(([&]()->V{V _logical19031=j::unary("!",_v_15957_o);return !j::truth(_logical19031)?([&]()->V{V _lhs19032=j::unary("typeof",_v_15957_o);V _rhs19033=this->_literals[4];return V(!j::equal(_lhs19032,_rhs19033,true));})():_logical19031;})())){(void)(([&]()->V{V _callee19036=this->_v_15268_fail.get();return j::call(_callee19036,j::Args{([&]()->V{std::u16string _text19034;_text19034+=u"drawImage() takes its options as an object, such as { t, glint: true }, not ";_text19034+=j::string(([&]()->V{V _callee19035=this->_v_15298_shown.get();return j::call(_callee19035,j::Args{_v_15957_o});})());_text19034+=u"";return V(std::move(_text19034));})()});})());
}
(void)(([&]()->V{V _callee19038=this->_v_15303_known.get();return j::call(_callee19038,j::Args{_v_15957_o,([&]()->V{j::Args _array19037;_array19037.push_back(this->_literals[112]);_array19037.push_back(this->_literals[16]);_array19037.push_back(this->_literals[28]);return j::array(std::move(_array19037));})(),this->_literals[113]});})());
if(j::truth(([&]()->V{V _logical19039=([&]()->V{V _lhs19040=j::get(_v_15957_o,this->_literals[112]);V _rhs19041=j::builtin("undefined");return V(!j::equal(_lhs19040,_rhs19041,true));})();return j::truth(_logical19039)?([&]()->V{V _lhs19042=j::unary("typeof",j::get(_v_15957_o,this->_literals[112]));V _rhs19043=this->_literals[17];return V(!j::equal(_lhs19042,_rhs19043,true));})():_logical19039;})())){(void)(([&]()->V{V _callee19046=this->_v_15268_fail.get();return j::call(_callee19046,j::Args{([&]()->V{std::u16string _text19044;_text19044+=u"drawImage()'s t takes the frame's time in seconds, not ";_text19044+=j::string(([&]()->V{V _callee19045=this->_v_15298_shown.get();return j::call(_callee19045,j::Args{j::get(_v_15957_o,this->_literals[112])});})());_text19044+=u"";return V(std::move(_text19044));})()});})());
}
(void)((_v_15958_t=(j::truth(([&]()->V{V _receiver19048=j::builtin("Number");V _method19049=this->_literals[18];V _method=j::get(_receiver19048,_method19049);j::Args _params19050=j::Args{j::get(_v_15957_o,this->_literals[112])};return j::call(_method,_params19050,_receiver19048);})())?j::get(_v_15957_o,this->_literals[112]):V(0.0))));
(void)((_v_15959_every=([&]()->V{V _callee19052=this->_v_15311_glintEvery.get();return j::call(_callee19052,j::Args{j::get(_v_15957_o,this->_literals[16])});})()));
if(j::truth(([&]()->V{V _lhs19053=j::get(_v_15957_o,this->_literals[28]);V _rhs19054=j::builtin("undefined");return V(!j::equal(_lhs19053,_rhs19054,true));})())){(void)(([&]()->V{V _callee19056=this->_v_15315_checkInvert.get();return j::call(_callee19056,j::Args{(_v_15960_invert=j::get(_v_15957_o,this->_literals[28]))});})());
}

}

_v_15961_p=([&]()->V{V _callee19058=this->_v_15867_prepare.get();return j::call(_callee19058,j::Args{([&]()->V{V _callee19057=this->_v_15863_drawingOf.get();return j::call(_callee19057,j::Args{_v_15954_img,this->_literals[114]});})(),this->_v_15280_RAMP.get(),this->_literals[114]});})();
_v_15962_idx=V::null();
_v_15963_pal.get()=j::get(_v_15953_s,this->_literals[109]);
if(j::truth(([&]()->V{V _logical19059=_v_15963_pal.get();return j::truth(_logical19059)?j::unary("!",j::get(_v_15953_s,this->_literals[57])):_logical19059;})())){
V _v_15964_themes;
j::Cell _v_15965_paper;
_v_15964_themes=([&]()->V{V _receiver19060=j::get(_v_15961_p,this->_literals[100]);V _method19061=this->_literals[62];V _method=j::get(_receiver19060,_method19061);j::Args _params19062=j::Args{_v_15963_pal.get()};return j::call(_method,_params19062,_receiver19060);})();
if(j::truth(j::unary("!",_v_15964_themes))){(void)(([&]()->V{V _receiver19065=j::get(_v_15961_p,this->_literals[100]);V _method19066=this->_literals[63];V _method=j::get(_receiver19065,_method19066);j::Args _params19067=j::Args{_v_15963_pal.get(),(_v_15964_themes=([&]()->V{j::Args _array19064;_array19064.push_back(j::builtin("undefined"));_array19064.push_back(j::builtin("undefined"));return j::array(std::move(_array19064));})())};return j::call(_method,_params19067,_receiver19065);})());
}
_v_15965_paper.get()=j::get(_v_15953_s,this->_literals[102]);
(void)((_v_15962_idx=([&]()->V{V _base19070=_v_15964_themes;V _key19071=j::unary("+",_v_15965_paper.get());V _old19072=j::get(_base19070,_key19071);return j::nullish(_old19072)?j::put(_base19070,_key19071,([&]()->V{V _receiver19076=j::builtin("Uint8Array");V _method19077=this->_literals[53];V _method=j::get(_receiver19076,_method19077);j::Args _params19078=j::Args{(j::truth(_v_15965_paper.get())?j::get(_v_15961_p,this->_literals[86]):j::get(_v_15961_p,this->_literals[87])),j::function([=](const j::Args &_args_fn15966,const V &_receiver_fn15966,const V &_self_fn15966) mutable ->V{
V _v_15967_c;
_v_15967_c=_args_fn15966[0];
return ([&]()->V{V _receiver19073=_v_15963_pal.get();V _method19074=this->_literals[100];V _method=j::get(_receiver19073,_method19074);j::Args _params19075=j::Args{_v_15967_c,_v_15965_paper.get()};return j::call(_method,_params19075,_receiver19073);})();
return V{};
},1)};return j::call(_method,_params19078,_receiver19076);})()):_old19072;})()));

}

(void)(([&]()->V{V _callee19079=this->_v_15899_paint.get();return j::call(_callee19079,j::Args{_v_15953_s,_v_15961_p,_v_15955_x,_v_15956_y,_v_15958_t,_v_15959_every,_v_15960_invert,_v_15962_idx});})());

}

return V{};
},2);
this->_v_15968_imagePalette.get()=j::function([=](const j::Args &_args_fn15969,const V &_receiver_fn15969,const V &_self_fn15969) mutable ->V{
V _v_15970_img;
V _v_15971_given;
_v_15970_img=_args_fn15969[0];
_v_15971_given=_args_fn15969[1];
{
V _v_15972_p;
V _v_15973_colors;
V _v_15974_mine;
V _v_15975_list;
V _v_15978_room;
_v_15972_p=([&]()->V{V _callee19081=this->_v_15867_prepare.get();return j::call(_callee19081,j::Args{([&]()->V{V _callee19080=this->_v_15863_drawingOf.get();return j::call(_callee19080,j::Args{_v_15970_img,this->_literals[115]});})(),this->_v_15280_RAMP.get(),this->_literals[115]});})();
if(j::truth(([&]()->V{V _lhs19082=_v_15971_given;V _rhs19083=j::builtin("undefined");return V(j::equal(_lhs19082,_rhs19083,true));})())){return ([&]()->V{V _obj19084=j::object();j::put(_obj19084,this->_literals[86],([&]()->V{j::Args _array19085;for(const auto &_value:j::elements(j::get(_v_15972_p,this->_literals[86])))_array19085.push_back(_value);return j::array(std::move(_array19085));})());j::put(_obj19084,this->_literals[87],([&]()->V{j::Args _array19086;for(const auto &_value:j::elements(j::get(_v_15972_p,this->_literals[87])))_array19086.push_back(_value);return j::array(std::move(_array19086));})());return _obj19084;})();
}
_v_15973_colors=(j::truth(([&]()->V{V _lhs19087=j::unary("typeof",_v_15971_given);V _rhs19088=this->_literals[0];return V(j::equal(_lhs19087,_rhs19088,true));})())?([&]()->V{V _callee19089=this->_v_15267_colorsOf.get();return j::call(_callee19089,j::Args{_v_15971_given,this->_literals[116]});})():_v_15971_given);
_v_15974_mine=(j::truth(([&]()->V{V _receiver19090=j::builtin("Array");V _method19091=this->_literals[9];V _method=j::get(_receiver19090,_method19091);j::Args _params19092=j::Args{_v_15973_colors};return j::call(_method,_params19092,_receiver19090);})())?([&]()->V{V _obj19093=j::object();j::put(_obj19093,this->_literals[86],_v_15973_colors);j::put(_obj19093,this->_literals[87],_v_15973_colors);return _obj19093;})():_v_15973_colors);
_v_15975_list=j::function([=](const j::Args &_args_fn15976,const V &_receiver_fn15976,const V &_self_fn15976) mutable ->V{
V _v_15977_l;
_v_15977_l=_args_fn15976[0];
return ([&]()->V{V _logical19094=([&]()->V{V _receiver19095=j::builtin("Array");V _method19096=this->_literals[9];V _method=j::get(_receiver19095,_method19096);j::Args _params19097=j::Args{_v_15977_l};return j::call(_method,_params19097,_receiver19095);})();return j::truth(_logical19094)?([&]()->V{V _receiver19098=_v_15977_l;V _method19099=this->_literals[15];V _method=j::get(_receiver19098,_method19099);j::Args _params19100=j::Args{this->_v_15270_isHex.get()};return j::call(_method,_params19100,_receiver19098);})():_logical19094;})();
return V{};
},1);
if(j::truth(([&]()->V{V _logical19101=([&]()->V{V _logical19102=([&]()->V{V _logical19103=([&]()->V{V _logical19104=j::unary("!",_v_15974_mine);return !j::truth(_logical19104)?([&]()->V{V _lhs19105=j::unary("typeof",_v_15974_mine);V _rhs19106=this->_literals[4];return V(!j::equal(_lhs19105,_rhs19106,true));})():_logical19104;})();return !j::truth(_logical19103)?j::unary("!",([&]()->V{V _callee19107=_v_15975_list;return j::call(_callee19107,j::Args{j::get(_v_15974_mine,this->_literals[86])});})()):_logical19103;})();return !j::truth(_logical19102)?j::unary("!",([&]()->V{V _callee19108=_v_15975_list;return j::call(_callee19108,j::Args{j::get(_v_15974_mine,this->_literals[87])});})()):_logical19102;})();return !j::truth(_logical19101)?([&]()->V{V _lhs19109=j::get(j::get(_v_15974_mine,this->_literals[86]),this->_literals[1]);V _rhs19110=j::get(j::get(_v_15974_mine,this->_literals[87]),this->_literals[1]);return V(!j::equal(_lhs19109,_rhs19110,true));})():_logical19101;})())){(void)(([&]()->V{V _callee19113=this->_v_15268_fail.get();return j::call(_callee19113,j::Args{([&]()->V{std::u16string _text19111;_text19111+=u"imagePalette() takes colours of your own as a list of #rrggbb, or { light, dark } lists of the same length, not ";_text19111+=j::string(([&]()->V{V _callee19112=this->_v_15298_shown.get();return j::call(_callee19112,j::Args{_v_15973_colors});})());_text19111+=u"";return V(std::move(_text19111));})()});})());
}
_v_15978_room=([&]()->V{V _lhs19114=V(32.0);V _rhs19115=j::get(j::get(_v_15972_p,this->_literals[86]),this->_literals[1]);return V(j::number(_lhs19114)-j::number(_rhs19115));})();
if(j::truth(([&]()->V{V _lhs19116=j::get(j::get(_v_15974_mine,this->_literals[86]),this->_literals[1]);V _rhs19117=_v_15978_room;return j::binary(">",_lhs19116,_rhs19117);})())){(void)(([&]()->V{V _callee19121=this->_v_15268_fail.get();return j::call(_callee19121,j::Args{([&]()->V{std::u16string _text19118;_text19118+=u"this image's ";_text19118+=j::string(j::get(_v_15972_p,this->_literals[94]));_text19118+=u" colours and their glint take ";_text19118+=j::string(([&]()->V{V _lhs19119=V(2.0);V _rhs19120=j::get(j::get(_v_15972_p,this->_literals[86]),this->_literals[1]);return V(j::number(_lhs19119)*j::number(_rhs19120));})());_text19118+=u" of the 64 a piece can have, which leaves room for ";_text19118+=j::string(_v_15978_room);_text19118+=u" of your own, not ";_text19118+=j::string(j::get(j::get(_v_15974_mine,this->_literals[86]),this->_literals[1]));_text19118+=u"";return V(std::move(_text19118));})()});})());
}
return ([&]()->V{V _obj19122=j::object();j::put(_obj19122,this->_literals[86],([&]()->V{j::Args _array19123;for(const auto &_value:j::elements(j::get(_v_15974_mine,this->_literals[86])))_array19123.push_back(_value);for(const auto &_value:j::elements(j::get(_v_15972_p,this->_literals[86])))_array19123.push_back(_value);return j::array(std::move(_array19123));})());j::put(_obj19122,this->_literals[87],([&]()->V{j::Args _array19124;for(const auto &_value:j::elements(j::get(_v_15974_mine,this->_literals[87])))_array19124.push_back(_value);for(const auto &_value:j::elements(j::get(_v_15972_p,this->_literals[87])))_array19124.push_back(_value);return j::array(std::move(_array19124));})());return _obj19122;})();

}

return V{};
},2);
this->_v_15979_fromPixels.get()=j::function([=](const j::Args &_args_fn15980,const V &_receiver_fn15980,const V &_self_fn15980) mutable ->V{
V _v_15981_a;
V _v_15982_b;
V _v_15983_c;
V _v_15984_d;
_v_15981_a=_args_fn15980[0];
_v_15982_b=_args_fn15980[1];
_v_15983_c=_args_fn15980[2];
_v_15984_d=_args_fn15980[3];
{
V _v_15989_set;
if(j::truth(([&]()->V{V _logical19125=([&]()->V{V _lhs19126=j::unary("typeof",_v_15981_a);V _rhs19127=this->_literals[0];return V(j::equal(_lhs19126,_rhs19127,true));})();return !j::truth(_logical19125)?([&]()->V{V _receiver19128=j::builtin("Array");V _method19129=this->_literals[9];V _method=j::get(_receiver19128,_method19129);j::Args _params19130=j::Args{_v_15981_a};return j::call(_method,_params19130,_receiver19128);})():_logical19125;})())){
V _v_15985_set;
V _v_15986_rgba;
V _v_15987_width;
V _v_15988_height;
_v_15985_set=([&]()->V{V _callee19131=this->_v_15318_settings.get();return j::call(_callee19131,j::Args{_v_15983_c});})();
V _pattern19133=([&]()->V{V _callee19132=this->_v_15990_pixelsFromText.get();return j::call(_callee19132,j::Args{_v_15981_a,_v_15982_b});})();
_v_15986_rgba=j::get(_pattern19133,this->_literals[117]);
_v_15987_width=j::get(_pattern19133,this->_literals[20]);
_v_15988_height=j::get(_pattern19133,this->_literals[21]);
return ([&]()->V{V _callee19138=this->_v_15930_pieceOf.get();return j::call(_callee19138,j::Args{([&]()->V{V _callee19137=this->_v_15344_draw.get();return j::call(_callee19137,j::Args{_v_15986_rgba,_v_15987_width,_v_15988_height,([&]()->V{V _obj19134=j::object();V _spread19135=_v_15985_set;for(const auto &_key:j::keys(_spread19135))j::put(_obj19134,_key,j::get(_spread19135,_key));j::put(_obj19134,this->_literals[23],([&]()->V{V _logical19136=j::get(_v_15985_set,this->_literals[23]);return j::nullish(_logical19136)?this->_literals[37]:_logical19136;})());return _obj19134;})()});})(),_v_15985_set,this->_literals[118]});})();

}

_v_15989_set=([&]()->V{V _callee19139=this->_v_15318_settings.get();return j::call(_callee19139,j::Args{_v_15984_d});})();
return ([&]()->V{V _callee19141=this->_v_15930_pieceOf.get();return j::call(_callee19141,j::Args{([&]()->V{V _callee19140=this->_v_15344_draw.get();return j::call(_callee19140,j::Args{_v_15981_a,_v_15982_b,_v_15983_c,_v_15989_set});})(),_v_15989_set,this->_literals[118]});})();

}

return V{};
},4);
this->_v_15990_pixelsFromText.get()=j::function([=](const j::Args &_args_fn15991,const V &_receiver_fn15991,const V &_self_fn15991) mutable ->V{
V _v_15992_art;
V _v_15993_colors;
_v_15992_art=_args_fn15991[0];
_v_15993_colors=_args_fn15991[1];
{
V _v_15994_lines;
j::Cell _v_16003_width;
V _v_16006_height;
j::Cell _v_16007_rgb;
j::Cell _v_16011_rgba;
_v_15994_lines=(j::truth(([&]()->V{V _lhs19142=j::unary("typeof",_v_15992_art);V _rhs19143=this->_literals[0];return V(j::equal(_lhs19142,_rhs19143,true));})())?([&]()->V{V _receiver19144=([&]()->V{V _receiver19147=_v_15992_art;V _method19148=this->_literals[91];V _method=j::get(_receiver19147,_method19148);j::Args _params19149=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[119]};return j::call(_method,_params19149,_receiver19147);})();V _method19145=this->_literals[120];V _method=j::get(_receiver19144,_method19145);j::Args _params19146=j::Args{this->_literals[119]};return j::call(_method,_params19146,_receiver19144);})():([&]()->V{j::Args _array19150;for(const auto &_value:j::elements(_v_15992_art))_array19150.push_back(_value);return j::array(std::move(_array19150));})());
if(j::truth(j::unary("!",([&]()->V{V _receiver19153=_v_15994_lines;V _method19154=this->_literals[15];V _method=j::get(_receiver19153,_method19154);j::Args _params19155=j::Args{j::function([=](const j::Args &_args_fn15995,const V &_receiver_fn15995,const V &_self_fn15995) mutable ->V{
V _v_15996_l;
_v_15996_l=_args_fn15995[0];
return ([&]()->V{V _lhs19151=j::unary("typeof",_v_15996_l);V _rhs19152=this->_literals[0];return V(j::equal(_lhs19151,_rhs19152,true));})();
return V{};
},1)};return j::call(_method,_params19155,_receiver19153);})()))){(void)(([&]()->V{V _callee19158=this->_v_15268_fail.get();return j::call(_callee19158,j::Args{([&]()->V{std::u16string _text19156;_text19156+=u"fromPixels takes rows of characters, one a pixel, not ";_text19156+=j::string(([&]()->V{V _callee19157=this->_v_15298_shown.get();return j::call(_callee19157,j::Args{_v_15992_art});})());_text19156+=u"";return V(std::move(_text19156));})()});})());
}
if(j::truth(([&]()->V{V _logical19159=([&]()->V{V _logical19160=([&]()->V{V _lhs19161=j::unary("typeof",_v_15992_art);V _rhs19162=this->_literals[0];return V(j::equal(_lhs19161,_rhs19162,true));})();return j::truth(_logical19160)?([&]()->V{V _lhs19163=j::get(_v_15994_lines,this->_literals[1]);V _rhs19164=V(1.0);return j::binary(">",_lhs19163,_rhs19164);})():_logical19160;})();return j::truth(_logical19159)?([&]()->V{V _lhs19165=j::get(_v_15994_lines,V(0.0));V _rhs19166=this->_literals[14];return V(j::equal(_lhs19165,_rhs19166,true));})():_logical19159;})())){
j::Cell _v_15997_indent;
while(j::truth(([&]()->V{V _logical19167=j::get(_v_15994_lines,this->_literals[1]);return j::truth(_logical19167)?j::unary("!",([&]()->V{V _receiver19168=j::get(_v_15994_lines,V(0.0));V _method19169=this->_literals[40];V _method=j::get(_receiver19168,_method19169);j::Args _params19170=j::Args{};return j::call(_method,_params19170,_receiver19168);})()):_logical19167;})())){(void)(([&]()->V{V _receiver19171=_v_15994_lines;V _method19172=this->_literals[121];V _method=j::get(_receiver19171,_method19172);j::Args _params19173=j::Args{};return j::call(_method,_params19173,_receiver19171);})());
}
while(j::truth(([&]()->V{V _logical19174=j::get(_v_15994_lines,this->_literals[1]);return j::truth(_logical19174)?j::unary("!",([&]()->V{V _receiver19175=j::get(_v_15994_lines,([&]()->V{V _lhs19178=j::get(_v_15994_lines,this->_literals[1]);V _rhs19179=V(1.0);return V(j::number(_lhs19178)-j::number(_rhs19179));})());V _method19176=this->_literals[40];V _method=j::get(_receiver19175,_method19176);j::Args _params19177=j::Args{};return j::call(_method,_params19177,_receiver19175);})()):_logical19174;})())){(void)(([&]()->V{V _receiver19180=_v_15994_lines;V _method19181=this->_literals[122];V _method=j::get(_receiver19180,_method19181);j::Args _params19182=j::Args{};return j::call(_method,_params19182,_receiver19180);})());
}
_v_15997_indent.get()=([&]()->V{V _receiver19196=_v_15994_lines;V _method19197=this->_literals[80];V _method=j::get(_receiver19196,_method19197);j::Args _params19198=j::Args{j::function([=](const j::Args &_args_fn15998,const V &_receiver_fn15998,const V &_self_fn15998) mutable ->V{
V _v_15999_n;
V _v_16000_l;
_v_15999_n=_args_fn15998[0];
_v_16000_l=_args_fn15998[1];
return (j::truth(([&]()->V{V _receiver19183=_v_16000_l;V _method19184=this->_literals[40];V _method=j::get(_receiver19183,_method19184);j::Args _params19185=j::Args{};return j::call(_method,_params19185,_receiver19183);})())?([&]()->V{V _receiver19193=j::builtin("Math");V _method19194=this->_literals[59];V _method=j::get(_receiver19193,_method19194);j::Args _params19195=j::Args{_v_15999_n,([&]()->V{V _lhs19186=j::get(_v_16000_l,this->_literals[1]);V _rhs19187=j::get(([&]()->V{V _receiver19188=_v_16000_l;V _method19189=this->_literals[123];V _method=j::get(_receiver19188,_method19189);j::Args _params19190=j::Args{};return j::call(_method,_params19190,_receiver19188);})(),this->_literals[1]);return V(j::number(_lhs19186)-j::number(_rhs19187));})()};return j::call(_method,_params19195,_receiver19193);})():_v_15999_n);
return V{};
},2),j::builtin("Infinity")};return j::call(_method,_params19198,_receiver19196);})();
if(j::truth(([&]()->V{V _receiver19199=j::builtin("Number");V _method19200=this->_literals[18];V _method=j::get(_receiver19199,_method19200);j::Args _params19201=j::Args{_v_15997_indent.get()};return j::call(_method,_params19201,_receiver19199);})())){(void)((_v_15994_lines=([&]()->V{V _receiver19206=_v_15994_lines;V _method19207=this->_literals[72];V _method=j::get(_receiver19206,_method19207);j::Args _params19208=j::Args{j::function([=](const j::Args &_args_fn16001,const V &_receiver_fn16001,const V &_self_fn16001) mutable ->V{
V _v_16002_l;
_v_16002_l=_args_fn16001[0];
return ([&]()->V{V _receiver19203=_v_16002_l;V _method19204=this->_literals[2];V _method=j::get(_receiver19203,_method19204);j::Args _params19205=j::Args{_v_15997_indent.get()};return j::call(_method,_params19205,_receiver19203);})();
return V{};
},1)};return j::call(_method,_params19208,_receiver19206);})()));
}

}

_v_16003_width.get()=([&]()->V{V _receiver19213=j::builtin("Math");V _method19214=this->_literals[60];V _method=j::get(_receiver19213,_method19214);j::Args _params19215=([&](){j::Args _args19209;_args19209.push_back(V(0.0));for(const auto &_v:j::elements(([&]()->V{V _receiver19210=_v_15994_lines;V _method19211=this->_literals[72];V _method=j::get(_receiver19210,_method19211);j::Args _params19212=j::Args{j::function([=](const j::Args &_args_fn16004,const V &_receiver_fn16004,const V &_self_fn16004) mutable ->V{
V _v_16005_l;
_v_16005_l=_args_fn16004[0];
return j::get(_v_16005_l,this->_literals[1]);
return V{};
},1)};return j::call(_method,_params19212,_receiver19210);})()))_args19209.push_back(_v);return _args19209;})();return j::call(_method,_params19215,_receiver19213);})();
_v_16006_height=j::get(_v_15994_lines,this->_literals[1]);
if(j::truth(([&]()->V{V _logical19216=j::unary("!",_v_16003_width.get());return !j::truth(_logical19216)?j::unary("!",_v_16006_height):_logical19216;})())){(void)(([&]()->V{V _callee19217=this->_v_15268_fail.get();return j::call(_callee19217,j::Args{this->_literals[124]});})());
}
if(j::truth(([&]()->V{V _logical19218=([&]()->V{V _lhs19219=_v_16003_width.get();V _rhs19220=V(4096.0);return j::binary(">",_lhs19219,_rhs19220);})();return !j::truth(_logical19218)?([&]()->V{V _lhs19221=_v_16006_height;V _rhs19222=V(4096.0);return j::binary(">",_lhs19221,_rhs19222);})():_logical19218;})())){(void)(([&]()->V{V _callee19224=this->_v_15268_fail.get();return j::call(_callee19224,j::Args{([&]()->V{std::u16string _text19223;_text19223+=u"fromPixels' rows of text can be up to 4096 pixels a side, not ";_text19223+=j::string(_v_16003_width.get());_text19223+=u" by ";_text19223+=j::string(_v_16006_height);_text19223+=u"";return V(std::move(_text19223));})()});})());
}
if(j::truth(([&]()->V{V _logical19225=([&]()->V{V _logical19226=j::unary("!",_v_15993_colors);return !j::truth(_logical19226)?([&]()->V{V _lhs19227=j::unary("typeof",_v_15993_colors);V _rhs19228=this->_literals[4];return V(!j::equal(_lhs19227,_rhs19228,true));})():_logical19226;})();return !j::truth(_logical19225)?([&]()->V{V _receiver19229=j::builtin("Array");V _method19230=this->_literals[9];V _method=j::get(_receiver19229,_method19230);j::Args _params19231=j::Args{_v_15993_colors};return j::call(_method,_params19231,_receiver19229);})():_logical19225;})())){(void)(([&]()->V{V _callee19234=this->_v_15268_fail.get();return j::call(_callee19234,j::Args{([&]()->V{std::u16string _text19232;_text19232+=u"fromPixels takes a colour for each character second, such as { g: \"#3fb950\" }, not ";_text19232+=j::string(([&]()->V{V _callee19233=this->_v_15298_shown.get();return j::call(_callee19233,j::Args{_v_15993_colors});})());_text19232+=u"";return V(std::move(_text19232));})()});})());
}
_v_16007_rgb.get()=([&]()->V{V _callee19235=j::builtin("Map");return j::construct(_callee19235,j::Args{});})();
{for(const auto &_item19236:j::elements(([&]()->V{V _receiver19237=j::builtin("Object");V _method19238=this->_literals[125];V _method=j::get(_receiver19237,_method19238);j::Args _params19239=j::Args{_v_15993_colors};return j::call(_method,_params19239,_receiver19237);})())){V _v_16008_ch;
V _v_16009_c;
V _pattern19240=_item19236;
_v_16008_ch=j::get(_pattern19240,V(0));
_v_16009_c=j::get(_pattern19240,V(1));
{
V _v_16010_given;
if(j::truth(([&]()->V{V _lhs19241=j::get(_v_16008_ch,this->_literals[1]);V _rhs19242=V(1.0);return V(!j::equal(_lhs19241,_rhs19242,true));})())){(void)(([&]()->V{V _callee19247=this->_v_15268_fail.get();return j::call(_callee19247,j::Args{([&]()->V{std::u16string _text19243;_text19243+=u"fromPixels' colors take one character a key, not ";_text19243+=j::string(([&]()->V{V _receiver19244=j::builtin("JSON");V _method19245=this->_literals[3];V _method=j::get(_receiver19244,_method19245);j::Args _params19246=j::Args{_v_16008_ch};return j::call(_method,_params19246,_receiver19244);})());_text19243+=u"";return V(std::move(_text19243));})()});})());
}
_v_16010_given=(j::truth(([&]()->V{V _callee19248=this->_v_15270_isHex.get();return j::call(_callee19248,j::Args{_v_16009_c});})())?_v_16009_c:(j::truth(([&]()->V{V _lhs19249=j::unary("typeof",_v_16009_c);V _rhs19250=this->_literals[0];return V(j::equal(_lhs19249,_rhs19250,true));})())?j::get(([&]()->V{V _callee19252=this->_v_15266_colorOf.get();return j::call(_callee19252,j::Args{_v_16009_c,([&]()->V{std::u16string _text19251;_text19251+=u"fromPixels' colors[\"";_text19251+=j::string(_v_16008_ch);_text19251+=u"\"]";return V(std::move(_text19251));})()});})(),this->_literals[87]):([&]()->V{V _callee19255=this->_v_15268_fail.get();return j::call(_callee19255,j::Args{([&]()->V{std::u16string _text19253;_text19253+=u"fromPixels' colors[\"";_text19253+=j::string(_v_16008_ch);_text19253+=u"\"] takes #rrggbb or a palette's name, not ";_text19253+=j::string(([&]()->V{V _callee19254=this->_v_15298_shown.get();return j::call(_callee19254,j::Args{_v_16009_c});})());_text19253+=u"";return V(std::move(_text19253));})()});})()));
(void)(([&]()->V{V _receiver19269=_v_16007_rgb.get();V _method19270=this->_literals[63];V _method=j::get(_receiver19269,_method19270);j::Args _params19271=j::Args{_v_16008_ch,([&]()->V{j::Args _array19256;_array19256.push_back(([&]()->V{V _callee19260=j::builtin("parseInt");return j::call(_callee19260,j::Args{([&]()->V{V _receiver19257=_v_16010_given;V _method19258=this->_literals[2];V _method=j::get(_receiver19257,_method19258);j::Args _params19259=j::Args{V(1.0),V(3.0)};return j::call(_method,_params19259,_receiver19257);})(),V(16.0)});})());_array19256.push_back(([&]()->V{V _callee19264=j::builtin("parseInt");return j::call(_callee19264,j::Args{([&]()->V{V _receiver19261=_v_16010_given;V _method19262=this->_literals[2];V _method=j::get(_receiver19261,_method19262);j::Args _params19263=j::Args{V(3.0),V(5.0)};return j::call(_method,_params19263,_receiver19261);})(),V(16.0)});})());_array19256.push_back(([&]()->V{V _callee19268=j::builtin("parseInt");return j::call(_callee19268,j::Args{([&]()->V{V _receiver19265=_v_16010_given;V _method19266=this->_literals[2];V _method=j::get(_receiver19265,_method19266);j::Args _params19267=j::Args{V(5.0),V(7.0)};return j::call(_method,_params19267,_receiver19265);})(),V(16.0)});})());return j::array(std::move(_array19256));})()};return j::call(_method,_params19271,_receiver19269);})());

}
}}
_v_16011_rgba.get()=([&]()->V{V _callee19276=j::builtin("Uint8ClampedArray");return j::construct(_callee19276,j::Args{([&]()->V{V _lhs19272=([&]()->V{V _lhs19274=_v_16003_width.get();V _rhs19275=_v_16006_height;return V(j::number(_lhs19274)*j::number(_rhs19275));})();V _rhs19273=V(4.0);return V(j::number(_lhs19272)*j::number(_rhs19273));})()});})();
(void)(([&]()->V{V _receiver19305=_v_15994_lines;V _method19306=this->_literals[73];V _method=j::get(_receiver19305,_method19306);j::Args _params19307=j::Args{j::function([=](const j::Args &_args_fn16012,const V &_receiver_fn16012,const V &_self_fn16012) mutable ->V{
V _v_16013_l;
V _v_16014_y;
_v_16013_l=_args_fn16012[0];
_v_16014_y=_args_fn16012[1];
{
{V _v_16015_x;
_v_16015_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs19277=_v_16015_x;V _rhs19278=j::get(_v_16013_l,this->_literals[1]);return j::binary("<",_lhs19277,_rhs19278);})());(void)(j::increment(_v_16015_x,1,false))){
V _v_16016_ch;
V _v_16017_c;
_v_16016_ch=j::get(_v_16013_l,_v_16015_x);
if(j::truth(([&]()->V{V _logical19279=([&]()->V{V _lhs19280=_v_16016_ch;V _rhs19281=this->_literals[126];return V(j::equal(_lhs19280,_rhs19281,true));})();return !j::truth(_logical19279)?([&]()->V{V _lhs19282=_v_16016_ch;V _rhs19283=this->_literals[51];return V(j::equal(_lhs19282,_rhs19283,true));})():_logical19279;})())){continue;
}
_v_16017_c=([&]()->V{V _receiver19284=_v_16007_rgb.get();V _method19285=this->_literals[62];V _method=j::get(_receiver19284,_method19285);j::Args _params19286=j::Args{_v_16016_ch};return j::call(_method,_params19286,_receiver19284);})();
if(j::truth(j::unary("!",_v_16017_c))){(void)(([&]()->V{V _callee19294=this->_v_15268_fail.get();return j::call(_callee19294,j::Args{([&]()->V{std::u16string _text19287;_text19287+=u"fromPixels' colors has no colour for ";_text19287+=j::string(([&]()->V{V _receiver19288=j::builtin("JSON");V _method19289=this->_literals[3];V _method=j::get(_receiver19288,_method19289);j::Args _params19290=j::Args{_v_16016_ch};return j::call(_method,_params19290,_receiver19288);})());_text19287+=u", in row ";_text19287+=j::string(_v_16014_y);_text19287+=u": give it one, such as { ";_text19287+=j::string(([&]()->V{V _receiver19291=j::builtin("JSON");V _method19292=this->_literals[3];V _method=j::get(_receiver19291,_method19292);j::Args _params19293=j::Args{_v_16016_ch};return j::call(_method,_params19293,_receiver19291);})());_text19287+=u": \"#3fb950\" }, or type \".\" for a clear pixel";return V(std::move(_text19287));})()});})());
}
(void)(([&]()->V{V _receiver19302=_v_16011_rgba.get();V _method19303=this->_literals[63];V _method=j::get(_receiver19302,_method19303);j::Args _params19304=j::Args{([&]()->V{j::Args _array19295;for(const auto &_value:j::elements(_v_16017_c))_array19295.push_back(_value);_array19295.push_back(V(255.0));return j::array(std::move(_array19295));})(),([&]()->V{V _lhs19296=([&]()->V{V _lhs19298=([&]()->V{V _lhs19300=_v_16014_y;V _rhs19301=_v_16003_width.get();return V(j::number(_lhs19300)*j::number(_rhs19301));})();V _rhs19299=_v_16015_x;return j::binary("+",_lhs19298,_rhs19299);})();V _rhs19297=V(4.0);return V(j::number(_lhs19296)*j::number(_rhs19297));})()};return j::call(_method,_params19304,_receiver19302);})());

}
}

}

return V{};
},2)};return j::call(_method,_params19307,_receiver19305);})());
return ([&]()->V{V _obj19308=j::object();j::put(_obj19308,this->_literals[117],_v_16011_rgba.get());j::put(_obj19308,this->_literals[20],_v_16003_width.get());j::put(_obj19308,this->_literals[21],_v_16006_height);return _obj19308;})();

}

return V{};
},2);
this->_v_16019_isMarkup.get()=j::function([=](const j::Args &_args_fn16020,const V &_receiver_fn16020,const V &_self_fn16020) mutable ->V{
V _v_16021_text;
_v_16021_text=_args_fn16020[0];
{
j::Cell _v_16022_head;
j::Cell _v_16023_at;
V _v_16024_space;
V _v_16026_skip;
_v_16022_head.get()=([&]()->V{V _receiver19309=_v_16021_text;V _method19310=this->_literals[2];V _method=j::get(_receiver19309,_method19310);j::Args _params19311=j::Args{V(0.0),V(4096.0)};return j::call(_method,_params19311,_receiver19309);})();
_v_16023_at.get()=V(0.0);
_v_16024_space=j::function([=](const j::Args &_args_fn16025,const V &_receiver_fn16025,const V &_self_fn16025) mutable ->V{
{
while(j::truth(([&]()->V{V _logical19312=([&]()->V{V _lhs19313=_v_16023_at.get();V _rhs19314=j::get(_v_16022_head.get(),this->_literals[1]);return j::binary("<",_lhs19313,_rhs19314);})();return j::truth(_logical19312)?([&]()->V{V _receiver19315=j::regexp(u"\\s","");V _method19316=this->_literals[41];V _method=j::get(_receiver19315,_method19316);j::Args _params19317=j::Args{j::get(_v_16022_head.get(),_v_16023_at.get())};return j::call(_method,_params19317,_receiver19315);})():_logical19312;})())){(void)(j::increment(_v_16023_at.get(),1,false));
}

}

return V{};
},0);
_v_16026_skip=j::function([=](const j::Args &_args_fn16027,const V &_receiver_fn16027,const V &_self_fn16027) mutable ->V{
V _v_16028_open;
V _v_16029_close;
_v_16028_open=_args_fn16027[0];
_v_16029_close=_args_fn16027[1];
{
V _v_16030_end;
if(j::truth(([&]()->V{V _lhs19318=([&]()->V{V _receiver19320=([&]()->V{V _receiver19325=_v_16022_head.get();V _method19326=this->_literals[2];V _method=j::get(_receiver19325,_method19326);j::Args _params19327=j::Args{_v_16023_at.get(),([&]()->V{V _lhs19323=_v_16023_at.get();V _rhs19324=j::get(_v_16028_open,this->_literals[1]);return j::binary("+",_lhs19323,_rhs19324);})()};return j::call(_method,_params19327,_receiver19325);})();V _method19321=this->_literals[127];V _method=j::get(_receiver19320,_method19321);j::Args _params19322=j::Args{};return j::call(_method,_params19322,_receiver19320);})();V _rhs19319=_v_16028_open;return V(!j::equal(_lhs19318,_rhs19319,true));})())){return V(false);
}
_v_16030_end=([&]()->V{V _receiver19330=_v_16022_head.get();V _method19331=this->_literals[92];V _method=j::get(_receiver19330,_method19331);j::Args _params19332=j::Args{_v_16029_close,([&]()->V{V _lhs19328=_v_16023_at.get();V _rhs19329=j::get(_v_16028_open,this->_literals[1]);return j::binary("+",_lhs19328,_rhs19329);})()};return j::call(_method,_params19332,_receiver19330);})();
if(j::truth(([&]()->V{V _lhs19333=_v_16030_end;V _rhs19334=V(0.0);return j::binary("<",_lhs19333,_rhs19334);})())){return V(false);
}
(void)((_v_16023_at.get()=([&]()->V{V _lhs19336=_v_16030_end;V _rhs19337=j::get(_v_16029_close,this->_literals[1]);return j::binary("+",_lhs19336,_rhs19337);})()));
return V(true);

}

return V{};
},2);
(void)(([&]()->V{V _callee19338=_v_16024_space;return j::call(_callee19338,j::Args{});})());
if(j::truth(([&]()->V{V _callee19339=_v_16026_skip;return j::call(_callee19339,j::Args{this->_literals[128],this->_literals[129]});})())){(void)(([&]()->V{V _callee19340=_v_16024_space;return j::call(_callee19340,j::Args{});})());
}
while(j::truth(([&]()->V{V _callee19341=_v_16026_skip;return j::call(_callee19341,j::Args{this->_literals[130],this->_literals[131]});})())){(void)(([&]()->V{V _callee19342=_v_16024_space;return j::call(_callee19342,j::Args{});})());
}
if(j::truth(([&]()->V{V _callee19343=_v_16026_skip;return j::call(_callee19343,j::Args{this->_literals[132],this->_literals[129]});})())){(void)(([&]()->V{V _callee19344=_v_16024_space;return j::call(_callee19344,j::Args{});})());
}
while(j::truth(([&]()->V{V _callee19345=_v_16026_skip;return j::call(_callee19345,j::Args{this->_literals[130],this->_literals[131]});})())){(void)(([&]()->V{V _callee19346=_v_16024_space;return j::call(_callee19346,j::Args{});})());
}
return ([&]()->V{V _logical19347=([&]()->V{V _lhs19348=([&]()->V{V _receiver19350=([&]()->V{V _receiver19355=_v_16022_head.get();V _method19356=this->_literals[2];V _method=j::get(_receiver19355,_method19356);j::Args _params19357=j::Args{_v_16023_at.get(),([&]()->V{V _lhs19353=_v_16023_at.get();V _rhs19354=V(4.0);return j::binary("+",_lhs19353,_rhs19354);})()};return j::call(_method,_params19357,_receiver19355);})();V _method19351=this->_literals[127];V _method=j::get(_receiver19350,_method19351);j::Args _params19352=j::Args{};return j::call(_method,_params19352,_receiver19350);})();V _rhs19349=this->_literals[133];return V(j::equal(_lhs19348,_rhs19349,true));})();return j::truth(_logical19347)?([&]()->V{V _receiver19361=j::regexp(u"[\\s>]","");V _method19362=this->_literals[41];V _method=j::get(_receiver19361,_method19362);j::Args _params19363=j::Args{([&]()->V{V _logical19358=j::get(_v_16022_head.get(),([&]()->V{V _lhs19359=_v_16023_at.get();V _rhs19360=V(4.0);return j::binary("+",_lhs19359,_rhs19360);})());return j::nullish(_logical19358)?this->_literals[14]:_logical19358;})()};return j::call(_method,_params19363,_receiver19361);})():_logical19347;})();

}

return V{};
},1);
this->_v_16031_fromImage.get()=j::function([=](const j::Args &_args_fn16032,const V &_receiver_fn16032,const V &_self_fn16032) mutable ->V{
V _v_16033_src;
V _v_16034_o;
_v_16033_src=_args_fn16032[0];
_v_16034_o=_args_fn16032[1];
{
V _v_16035_set;
V _v_16036_data;
V _v_16037_width;
V _v_16038_height;
_v_16035_set=([&]()->V{V _callee19364=this->_v_15318_settings.get();return j::call(_callee19364,j::Args{_v_16034_o});})();
V _pattern19366=([&]()->V{V _callee19365=this->_v_16040_pixelsOf.get();return j::call(_callee19365,j::Args{_v_16033_src});})();
_v_16036_data=j::get(_pattern19366,this->_literals[45]);
_v_16037_width=j::get(_pattern19366,this->_literals[20]);
_v_16038_height=j::get(_pattern19366,this->_literals[21]);
return ([&]()->V{V _callee19368=this->_v_15930_pieceOf.get();return j::call(_callee19368,j::Args{([&]()->V{V _callee19367=this->_v_15344_draw.get();return j::call(_callee19367,j::Args{_v_16036_data,_v_16037_width,_v_16038_height,_v_16035_set});})(),_v_16035_set,this->_literals[134]});})();

}

return V{};
},2);
this->_v_16040_pixelsOf.get()=j::function([](const j::Args &_a,const V &,const V &)->V{return j::image_pixels(_a[0]);});
this->_v_16047_load.get()=j::function([=](const j::Args &_args_fn16048,const V &_receiver_fn16048,const V &_self_fn16048) mutable ->V{
V _v_16049_url;
_v_16049_url=_args_fn16048[0];
{
V _v_16050_res;
V _v_16051_b;
{try {
(void)((_v_16050_res=([&]()->V{V _callee19370=j::builtin("fetch");return j::call(_callee19370,j::Args{_v_16049_url});})()));

}
catch(const std::exception &_error19371){{
(void)(([&]()->V{V _callee19375=this->_v_15268_fail.get();return j::call(_callee19375,j::Args{([&]()->V{std::u16string _text19372;_text19372+=u"fromImage() could not load ";_text19372+=j::string(([&]()->V{V _callee19373=this->_v_16044_where.get();return j::call(_callee19373,j::Args{_v_16049_url});})());_text19372+=u": ";_text19372+=j::string((j::truth(([&]()->V{V _callee19374=this->_v_16130_files.get();return j::call(_callee19374,j::Args{});})())?this->_literals[135]:this->_literals[136]));_text19372+=u"";return V(std::move(_text19372));})()});})());

}
}}
if(j::truth(j::unary("!",j::get(_v_16050_res,this->_literals[137])))){(void)(([&]()->V{V _callee19381=this->_v_15268_fail.get();return j::call(_callee19381,j::Args{([&]()->V{V _receiver19376=([&]()->V{std::u16string _text19379;_text19379+=u"fromImage() could not load ";_text19379+=j::string(([&]()->V{V _callee19380=this->_v_16044_where.get();return j::call(_callee19380,j::Args{_v_16049_url});})());_text19379+=u": ";_text19379+=j::string(j::get(_v_16050_res,this->_literals[138]));_text19379+=u" ";_text19379+=j::string(j::get(_v_16050_res,this->_literals[139]));_text19379+=u"";return V(std::move(_text19379));})();V _method19377=this->_literals[40];V _method=j::get(_receiver19376,_method19377);j::Args _params19378=j::Args{};return j::call(_method,_params19378,_receiver19376);})()});})());
}
_v_16051_b=([&]()->V{V _receiver19382=_v_16050_res;V _method19383=this->_literals[140];V _method=j::get(_receiver19382,_method19383);j::Args _params19384=j::Args{};return j::call(_method,_params19384,_receiver19382);})();
return (j::truth(([&]()->V{V _logical19385=j::unary("!",j::get(_v_16051_b,this->_literals[141]));return j::truth(_logical19385)?([&]()->V{V _receiver19386=j::regexp(u"\\.svg(?:[?#]|$)","i");V _method19387=this->_literals[41];V _method=j::get(_receiver19386,_method19387);j::Args _params19388=j::Args{_v_16049_url};return j::call(_method,_params19388,_receiver19386);})():_logical19385;})())?([&]()->V{V _callee19391=j::builtin("Blob");return j::construct(_callee19391,j::Args{([&]()->V{j::Args _array19389;_array19389.push_back(_v_16051_b);return j::array(std::move(_array19389));})(),([&]()->V{V _obj19390=j::object();j::put(_obj19390,this->_literals[141],this->_literals[142]);return _obj19390;})()});})():_v_16051_b);

}

return V{};
},1);
this->_v_16052_blob.get()=j::function([=](const j::Args &_args_fn16053,const V &_receiver_fn16053,const V &_self_fn16053) mutable ->V{
V _v_16054_b;
_v_16054_b=_args_fn16053[0];
{
V _v_16055_named;
j::Cell _v_16056_head;
V _v_16057_png;
V _v_16061_isSvg;
V _v_16063_bitmap;
_v_16055_named=j::get(_v_16054_b,this->_literals[8]);
_v_16056_head.get()=([&]()->V{V _callee19398=j::builtin("Uint8Array");return j::construct(_callee19398,j::Args{([&]()->V{V _receiver19392=([&]()->V{V _receiver19395=_v_16054_b;V _method19396=this->_literals[2];V _method=j::get(_receiver19395,_method19396);j::Args _params19397=j::Args{V(0.0),V(12.0)};return j::call(_method,_params19397,_receiver19395);})();V _method19393=this->_literals[143];V _method=j::get(_receiver19392,_method19393);j::Args _params19394=j::Args{};return j::call(_method,_params19394,_receiver19392);})()});})();
_v_16057_png=([&]()->V{V _receiver19401=this->_v_16139_PNG.get();V _method19402=this->_literals[15];V _method=j::get(_receiver19401,_method19402);j::Args _params19403=j::Args{j::function([=](const j::Args &_args_fn16058,const V &_receiver_fn16058,const V &_self_fn16058) mutable ->V{
V _v_16059_v;
V _v_16060_i;
_v_16059_v=_args_fn16058[0];
_v_16060_i=_args_fn16058[1];
return ([&]()->V{V _lhs19399=j::get(_v_16056_head.get(),_v_16060_i);V _rhs19400=_v_16059_v;return V(j::equal(_lhs19399,_rhs19400,true));})();
return V{};
},2)};return j::call(_method,_params19403,_receiver19401);})();
_v_16061_isSvg=([&]()->V{V _logical19404=j::unary("!",_v_16057_png);return j::truth(_logical19404)?([&]()->V{V _logical19405=([&]()->V{V _logical19406=([&]()->V{V _lhs19407=j::get(_v_16054_b,this->_literals[141]);V _rhs19408=this->_literals[142];return V(j::equal(_lhs19407,_rhs19408,true));})();return !j::truth(_logical19406)?([&]()->V{V _logical19409=([&]()->V{V _lhs19410=j::unary("typeof",_v_16055_named);V _rhs19411=this->_literals[0];return V(j::equal(_lhs19410,_rhs19411,true));})();return j::truth(_logical19409)?([&]()->V{V _receiver19412=j::regexp(u"\\.svg$","i");V _method19413=this->_literals[41];V _method=j::get(_receiver19412,_method19413);j::Args _params19414=j::Args{_v_16055_named};return j::call(_method,_params19414,_receiver19412);})():_logical19409;})():_logical19406;})();return !j::truth(_logical19405)?([&]()->V{V _logical19415=j::unary("!",j::get(_v_16054_b,this->_literals[141]));return j::truth(_logical19415)?([&]()->V{V _callee19422=this->_v_16019_isMarkup.get();return j::call(_callee19422,j::Args{([&]()->V{V _receiver19416=([&]()->V{V _receiver19419=_v_16054_b;V _method19420=this->_literals[2];V _method=j::get(_receiver19419,_method19420);j::Args _params19421=j::Args{V(0.0),V(512.0)};return j::call(_method,_params19421,_receiver19419);})();V _method19417=this->_literals[144];V _method=j::get(_receiver19416,_method19417);j::Args _params19418=j::Args{};return j::call(_method,_params19418,_receiver19416);})()});})():_logical19415;})():_logical19405;})():_logical19404;})();
if(j::truth(_v_16061_isSvg)){return ([&]()->V{V _callee19426=this->_v_16070_svg.get();return j::call(_callee19426,j::Args{([&]()->V{V _receiver19423=_v_16054_b;V _method19424=this->_literals[144];V _method=j::get(_receiver19423,_method19424);j::Args _params19425=j::Args{};return j::call(_method,_params19425,_receiver19423);})()});})();
}
if(j::truth(([&]()->V{V _lhs19427=j::unary("typeof",j::builtin("createImageBitmap"));V _rhs19428=this->_literals[5];return V(!j::equal(_lhs19427,_rhs19428,true));})())){
V _v_16062_kind;
if(j::truth(_v_16057_png)){return ([&]()->V{V _callee19434=this->_v_16105_shrink.get();return j::call(_callee19434,j::Args{([&]()->V{V _callee19433=this->_v_16144_readPng.get();return j::call(_callee19433,j::Args{([&]()->V{V _callee19432=j::builtin("Uint8Array");return j::construct(_callee19432,j::Args{([&]()->V{V _receiver19429=_v_16054_b;V _method19430=this->_literals[143];V _method=j::get(_receiver19429,_method19430);j::Args _params19431=j::Args{};return j::call(_method,_params19431,_receiver19429);})()});})()});})(),this->_v_15285_LARGEST.get()});})();
}
_v_16062_kind=([&]()->V{V _callee19435=this->_v_16101_format.get();return j::call(_callee19435,j::Args{_v_16056_head.get()});})();
(void)(([&]()->V{V _callee19438=this->_v_15268_fail.get();return j::call(_callee19438,j::Args{([&]()->V{std::u16string _text19436;_text19436+=u"fromImage() reads only PNG where there is no browser to decode an image, as in Node, and ";_text19436+=j::string((j::truth(_v_16062_kind)?([&]()->V{std::u16string _text19437;_text19437+=u"this is ";_text19437+=j::string(_v_16062_kind);_text19437+=u": decode it yourself (sharp does) and pass its pixels to fromPixels()";return V(std::move(_text19437));})():this->_literals[145]));_text19436+=u"";return V(std::move(_text19436));})()});})());

}

{try {
(void)((_v_16063_bitmap=([&]()->V{V _callee19440=j::builtin("createImageBitmap");return j::call(_callee19440,j::Args{_v_16054_b});})()));

}
catch(const std::exception &_error19441){{
(void)(([&]()->V{V _callee19442=this->_v_15268_fail.get();return j::call(_callee19442,j::Args{this->_literals[146]});})());

}
}}
{struct _Guard{std::function<void()> f;~_Guard(){f();}} _guard{[&](){{
(void)(([&]()->V{V _receiver19443=_v_16063_bitmap;V _method19444=this->_literals[147];V _method=j::get(_receiver19443,_method19444);j::Args _params19445=j::Args{};return j::call(_method,_params19445,_receiver19443);})());

}
}};try {
return ([&]()->V{V _callee19446=this->_v_16091_drawn.get();return j::call(_callee19446,j::Args{_v_16063_bitmap,j::get(_v_16063_bitmap,this->_literals[20]),j::get(_v_16063_bitmap,this->_literals[21])});})();

}
catch(...){throw;}}

}

return V{};
},1);
this->_v_16064_image.get()=j::function([=](const j::Args &_args_fn16065,const V &_receiver_fn16065,const V &_self_fn16065) mutable ->V{
V _v_16066_img;
_v_16066_img=_args_fn16065[0];
{
V _v_16067_w;
V _v_16068_h;
if(j::truth(([&]()->V{V _logical19447=j::unary("!",j::get(_v_16066_img,this->_literals[148]));return !j::truth(_logical19447)?j::unary("!",j::get(_v_16066_img,this->_literals[149])):_logical19447;})())){
{try {
(void)(([&]()->V{V _receiver19448=_v_16066_img;V _method19449=this->_literals[150];V _method=j::get(_receiver19448,_method19449);j::Args _params19450=j::Args{};return j::call(_method,_params19450,_receiver19448);})());

}
catch(const std::exception &_error19451){{
(void)(([&]()->V{V _callee19454=this->_v_15268_fail.get();return j::call(_callee19454,j::Args{([&]()->V{std::u16string _text19452;_text19452+=u"fromImage() could not load the <img> ";_text19452+=j::string(([&]()->V{V _logical19453=j::get(_v_16066_img,this->_literals[151]);return !j::truth(_logical19453)?j::get(_v_16066_img,this->_literals[152]):_logical19453;})());_text19452+=u"";return V(std::move(_text19452));})()});})());

}
}}

}

_v_16067_w=([&]()->V{V _logical19455=j::get(_v_16066_img,this->_literals[149]);return !j::truth(_logical19455)?j::get(_v_16066_img,this->_literals[20]):_logical19455;})();
_v_16068_h=([&]()->V{V _logical19456=j::get(_v_16066_img,this->_literals[153]);return !j::truth(_logical19456)?j::get(_v_16066_img,this->_literals[21]):_logical19456;})();
if(j::truth(([&]()->V{V _logical19457=([&]()->V{V _logical19458=([&]()->V{V _receiver19460=j::regexp(u"\\.svg(?:[?#]|$)|^data:image\\/svg","i");V _method19461=this->_literals[41];V _method=j::get(_receiver19460,_method19461);j::Args _params19462=j::Args{([&]()->V{V _logical19459=j::get(_v_16066_img,this->_literals[151]);return !j::truth(_logical19459)?j::get(_v_16066_img,this->_literals[152]):_logical19459;})()};return j::call(_method,_params19462,_receiver19460);})();return j::truth(_logical19458)?_v_16067_w:_logical19458;})();return j::truth(_logical19457)?_v_16068_h:_logical19457;})())){
V _v_16069_k;
_v_16069_k=([&]()->V{V _lhs19463=this->_v_15284_SIDE.get();V _rhs19464=([&]()->V{V _receiver19467=j::builtin("Math");V _method19468=this->_literals[60];V _method=j::get(_receiver19467,_method19468);j::Args _params19469=j::Args{_v_16067_w,_v_16068_h};return j::call(_method,_params19469,_receiver19467);})();return V(j::number(_lhs19463)/j::number(_rhs19464));})();
(void)(((_v_16067_w=([&]()->V{V _number19473=([&]()->V{V _lhs19474=_v_16067_w;V _rhs19475=_v_16069_k;return V(j::number(_lhs19474)*j::number(_rhs19475));})();return V(std::floor(j::number(_number19473)+.5));})()),(_v_16068_h=([&]()->V{V _number19479=([&]()->V{V _lhs19480=_v_16068_h;V _rhs19481=_v_16069_k;return V(j::number(_lhs19480)*j::number(_rhs19481));})();return V(std::floor(j::number(_number19479)+.5));})())));

}

return ([&]()->V{V _callee19482=this->_v_16091_drawn.get();return j::call(_callee19482,j::Args{_v_16066_img,_v_16067_w,_v_16068_h});})();

}

return V{};
},1);
this->_v_16070_svg.get()=j::function([=](const j::Args &_args_fn16071,const V &_receiver_fn16071,const V &_self_fn16071) mutable ->V{
V _v_16072_markup;
_v_16072_markup=_args_fn16071[0];
{
V _v_16073_text;
V _v_16074_doc;
V _v_16075_root;
V _v_16076_vb;
V _v_16081_k;
V _v_16082_W;
V _v_16083_H;
j::Cell _v_16084_url;
if(j::truth(([&]()->V{V _logical19483=([&]()->V{V _lhs19484=j::unary("typeof",j::builtin("DOMParser"));V _rhs19485=this->_literals[154];return V(j::equal(_lhs19484,_rhs19485,true));})();return !j::truth(_logical19483)?([&]()->V{V _lhs19486=j::unary("typeof",j::builtin("Image"));V _rhs19487=this->_literals[154];return V(j::equal(_lhs19486,_rhs19487,true));})():_logical19483;})())){(void)(([&]()->V{V _callee19488=this->_v_15268_fail.get();return j::call(_callee19488,j::Args{this->_literals[155]});})());
}
_v_16073_text=([&]()->V{V _receiver19489=_v_16072_markup;V _method19490=this->_literals[40];V _method=j::get(_receiver19489,_method19490);j::Args _params19491=j::Args{};return j::call(_method,_params19491,_receiver19489);})();
if(j::truth(j::unary("!",([&]()->V{V _receiver19492=j::regexp(u"<svg[^>]*\\sxmlns\\s*=","i");V _method19493=this->_literals[41];V _method=j::get(_receiver19492,_method19493);j::Args _params19494=j::Args{_v_16073_text};return j::call(_method,_params19494,_receiver19492);})()))){(void)((_v_16073_text=([&]()->V{V _receiver19497=_v_16073_text;V _method19498=this->_literals[91];V _method=j::get(_receiver19497,_method19498);j::Args _params19499=j::Args{j::regexp(u"<svg(?=[\\s>])","i"),([&]()->V{std::u16string _text19496;_text19496+=u"<svg xmlns=\"";_text19496+=j::string(this->_v_16018_SVG_NS.get());_text19496+=u"\"";return V(std::move(_text19496));})()};return j::call(_method,_params19499,_receiver19497);})()));
}
if(j::truth(([&]()->V{V _logical19500=([&]()->V{V _receiver19501=j::regexp(u"\\sxlink:","");V _method19502=this->_literals[41];V _method=j::get(_receiver19501,_method19502);j::Args _params19503=j::Args{_v_16073_text};return j::call(_method,_params19503,_receiver19501);})();return j::truth(_logical19500)?j::unary("!",([&]()->V{V _receiver19504=j::regexp(u"xmlns:xlink\\s*=","");V _method19505=this->_literals[41];V _method=j::get(_receiver19504,_method19505);j::Args _params19506=j::Args{_v_16073_text};return j::call(_method,_params19506,_receiver19504);})()):_logical19500;})())){(void)((_v_16073_text=([&]()->V{V _receiver19509=_v_16073_text;V _method19510=this->_literals[91];V _method=j::get(_receiver19509,_method19510);j::Args _params19511=j::Args{j::regexp(u"<svg(?=[\\s>])","i"),([&]()->V{std::u16string _text19508;_text19508+=u"<svg xmlns:xlink=\"http://www.w3.org/1999/xlink\"";return V(std::move(_text19508));})()};return j::call(_method,_params19511,_receiver19509);})()));
}
_v_16074_doc=([&]()->V{V _receiver19512=([&]()->V{V _callee19515=j::builtin("DOMParser");return j::construct(_callee19515,j::Args{});})();V _method19513=this->_literals[156];V _method=j::get(_receiver19512,_method19513);j::Args _params19514=j::Args{_v_16073_text,this->_literals[142]};return j::call(_method,_params19514,_receiver19512);})();
_v_16075_root=j::get(_v_16074_doc,this->_literals[157]);
if(j::truth(([&]()->V{V _logical19516=([&]()->V{V _logical19517=j::get(([&]()->V{V _receiver19518=_v_16074_doc;V _method19519=this->_literals[159];V _method=j::get(_receiver19518,_method19519);j::Args _params19520=j::Args{this->_literals[158]};return j::call(_method,_params19520,_receiver19518);})(),this->_literals[1]);return !j::truth(_logical19517)?([&]()->V{V _lhs19521=j::get(_v_16075_root,this->_literals[160]);V _rhs19522=this->_literals[161];return V(!j::equal(_lhs19521,_rhs19522,true));})():_logical19517;})();return !j::truth(_logical19516)?([&]()->V{V _lhs19523=j::get(_v_16075_root,this->_literals[162]);V _rhs19524=this->_v_16018_SVG_NS.get();return V(!j::equal(_lhs19523,_rhs19524,true));})():_logical19516;})())){(void)(([&]()->V{V _callee19525=this->_v_15268_fail.get();return j::call(_callee19525,j::Args{this->_literals[163]});})());
}
_v_16076_vb=([&]()->V{V _receiver19526=([&]()->V{V _receiver19529=([&]()->V{V _receiver19532=([&]()->V{V _logical19535=([&]()->V{V _receiver19536=_v_16075_root;V _method19537=this->_literals[165];V _method=j::get(_receiver19536,_method19537);j::Args _params19538=j::Args{this->_literals[164]};return j::call(_method,_params19538,_receiver19536);})();return j::nullish(_logical19535)?this->_literals[14]:_logical19535;})();V _method19533=this->_literals[40];V _method=j::get(_receiver19532,_method19533);j::Args _params19534=j::Args{};return j::call(_method,_params19534,_receiver19532);})();V _method19530=this->_literals[120];V _method=j::get(_receiver19529,_method19530);j::Args _params19531=j::Args{j::regexp(u"[\\s,]+","")};return j::call(_method,_params19531,_receiver19529);})();V _method19527=this->_literals[72];V _method=j::get(_receiver19526,_method19527);j::Args _params19528=j::Args{j::builtin("Number")};return j::call(_method,_params19528,_receiver19526);})();
if(j::truth(([&]()->V{V _logical19539=([&]()->V{V _logical19540=([&]()->V{V _logical19541=([&]()->V{V _lhs19542=j::get(_v_16076_vb,this->_literals[1]);V _rhs19543=V(4.0);return V(!j::equal(_lhs19542,_rhs19543,true));})();return !j::truth(_logical19541)?([&]()->V{V _receiver19547=_v_16076_vb;V _method19548=this->_literals[64];V _method=j::get(_receiver19547,_method19548);j::Args _params19549=j::Args{j::function([=](const j::Args &_args_fn16077,const V &_receiver_fn16077,const V &_self_fn16077) mutable ->V{
V _v_16078_v;
_v_16078_v=_args_fn16077[0];
return j::unary("!",([&]()->V{V _receiver19544=j::builtin("Number");V _method19545=this->_literals[18];V _method=j::get(_receiver19544,_method19545);j::Args _params19546=j::Args{_v_16078_v};return j::call(_method,_params19546,_receiver19544);})());
return V{};
},1)};return j::call(_method,_params19549,_receiver19547);})():_logical19541;})();return !j::truth(_logical19540)?([&]()->V{V _lhs19550=j::get(_v_16076_vb,V(2.0));V _rhs19551=V(0.0);return j::binary("<=",_lhs19550,_rhs19551);})():_logical19540;})();return !j::truth(_logical19539)?([&]()->V{V _lhs19552=j::get(_v_16076_vb,V(3.0));V _rhs19553=V(0.0);return j::binary("<=",_lhs19552,_rhs19553);})():_logical19539;})())){
V _v_16079_w;
V _v_16080_h;
_v_16079_w=([&]()->V{V _callee19558=j::builtin("parseFloat");return j::call(_callee19558,j::Args{([&]()->V{V _logical19554=([&]()->V{V _receiver19555=_v_16075_root;V _method19556=this->_literals[165];V _method=j::get(_receiver19555,_method19556);j::Args _params19557=j::Args{this->_literals[20]};return j::call(_method,_params19557,_receiver19555);})();return j::nullish(_logical19554)?this->_literals[14]:_logical19554;})()});})();
_v_16080_h=([&]()->V{V _callee19563=j::builtin("parseFloat");return j::call(_callee19563,j::Args{([&]()->V{V _logical19559=([&]()->V{V _receiver19560=_v_16075_root;V _method19561=this->_literals[165];V _method=j::get(_receiver19560,_method19561);j::Args _params19562=j::Args{this->_literals[21]};return j::call(_method,_params19562,_receiver19560);})();return j::nullish(_logical19559)?this->_literals[14]:_logical19559;})()});})();
if(j::truth(j::unary("!",([&]()->V{V _logical19564=([&]()->V{V _lhs19565=_v_16079_w;V _rhs19566=V(0.0);return j::binary(">",_lhs19565,_rhs19566);})();return j::truth(_logical19564)?([&]()->V{V _lhs19567=_v_16080_h;V _rhs19568=V(0.0);return j::binary(">",_lhs19567,_rhs19568);})():_logical19564;})()))){(void)(([&]()->V{V _callee19569=this->_v_15268_fail.get();return j::call(_callee19569,j::Args{this->_literals[166]});})());
}
(void)((_v_16076_vb=([&]()->V{j::Args _array19571;_array19571.push_back(V(0.0));_array19571.push_back(V(0.0));_array19571.push_back(_v_16079_w);_array19571.push_back(_v_16080_h);return j::array(std::move(_array19571));})()));
(void)(([&]()->V{V _receiver19575=_v_16075_root;V _method19576=this->_literals[168];V _method=j::get(_receiver19575,_method19576);j::Args _params19577=j::Args{this->_literals[164],([&]()->V{V _receiver19572=_v_16076_vb;V _method19573=this->_literals[167];V _method=j::get(_receiver19572,_method19573);j::Args _params19574=j::Args{this->_literals[51]};return j::call(_method,_params19574,_receiver19572);})()};return j::call(_method,_params19577,_receiver19575);})());

}

_v_16081_k=([&]()->V{V _lhs19578=this->_v_15284_SIDE.get();V _rhs19579=([&]()->V{V _receiver19582=j::builtin("Math");V _method19583=this->_literals[60];V _method=j::get(_receiver19582,_method19583);j::Args _params19584=j::Args{j::get(_v_16076_vb,V(2.0)),j::get(_v_16076_vb,V(3.0))};return j::call(_method,_params19584,_receiver19582);})();return V(j::number(_lhs19578)/j::number(_rhs19579));})();
_v_16082_W=([&]()->V{V _receiver19592=j::builtin("Math");V _method19593=this->_literals[60];V _method=j::get(_receiver19592,_method19593);j::Args _params19594=j::Args{V(1.0),([&]()->V{V _number19587=([&]()->V{V _lhs19588=j::get(_v_16076_vb,V(2.0));V _rhs19589=_v_16081_k;return V(j::number(_lhs19588)*j::number(_rhs19589));})();return V(std::floor(j::number(_number19587)+.5));})()};return j::call(_method,_params19594,_receiver19592);})();
_v_16083_H=([&]()->V{V _receiver19602=j::builtin("Math");V _method19603=this->_literals[60];V _method=j::get(_receiver19602,_method19603);j::Args _params19604=j::Args{V(1.0),([&]()->V{V _number19597=([&]()->V{V _lhs19598=j::get(_v_16076_vb,V(3.0));V _rhs19599=_v_16081_k;return V(j::number(_lhs19598)*j::number(_rhs19599));})();return V(std::floor(j::number(_number19597)+.5));})()};return j::call(_method,_params19604,_receiver19602);})();
(void)(([&]()->V{V _receiver19606=_v_16075_root;V _method19607=this->_literals[168];V _method=j::get(_receiver19606,_method19607);j::Args _params19608=j::Args{this->_literals[20],([&]()->V{V _callee19605=j::builtin("String");return j::call(_callee19605,j::Args{_v_16082_W});})()};return j::call(_method,_params19608,_receiver19606);})());
(void)(([&]()->V{V _receiver19610=_v_16075_root;V _method19611=this->_literals[168];V _method=j::get(_receiver19610,_method19611);j::Args _params19612=j::Args{this->_literals[21],([&]()->V{V _callee19609=j::builtin("String");return j::call(_callee19609,j::Args{_v_16083_H});})()};return j::call(_method,_params19612,_receiver19610);})());
_v_16084_url.get()=([&]()->V{V _receiver19620=j::builtin("URL");V _method19621=this->_literals[170];V _method=j::get(_receiver19620,_method19621);j::Args _params19622=j::Args{([&]()->V{V _callee19619=j::builtin("Blob");return j::construct(_callee19619,j::Args{([&]()->V{j::Args _array19613;_array19613.push_back(([&]()->V{V _receiver19614=([&]()->V{V _callee19617=j::builtin("XMLSerializer");return j::construct(_callee19617,j::Args{});})();V _method19615=this->_literals[169];V _method=j::get(_receiver19614,_method19615);j::Args _params19616=j::Args{_v_16074_doc};return j::call(_method,_params19616,_receiver19614);})());return j::array(std::move(_array19613));})(),([&]()->V{V _obj19618=j::object();j::put(_obj19618,this->_literals[141],this->_literals[142]);return _obj19618;})()});})()};return j::call(_method,_params19622,_receiver19620);})();
{struct _Guard{std::function<void()> f;~_Guard(){f();}} _guard{[&](){{
(void)(([&]()->V{V _receiver19623=j::builtin("URL");V _method19624=this->_literals[171];V _method=j::get(_receiver19623,_method19624);j::Args _params19625=j::Args{_v_16084_url.get()};return j::call(_method,_params19625,_receiver19623);})());

}
}};try {
j::Cell _v_16085_img;
_v_16085_img.get()=([&]()->V{V _callee19626=j::builtin("Image");return j::construct(_callee19626,j::Args{});})();
(void)(([&]()->V{V _callee19639=j::builtin("Promise");return j::construct(_callee19639,j::Args{j::function([=](const j::Args &_args_fn16086,const V &_receiver_fn16086,const V &_self_fn16086) mutable ->V{
j::Cell _v_16087_resolve;
j::Cell _v_16088_reject;
_v_16087_resolve.get()=_args_fn16086[0];
_v_16088_reject.get()=_args_fn16086[1];
{
(void)(([&]()->V{V _base19628=_v_16085_img.get();V _key19629=this->_literals[172];V _assign19627=j::function([=](const j::Args &_args_fn16089,const V &_receiver_fn16089,const V &_self_fn16089) mutable ->V{
return ([&]()->V{V _callee19630=_v_16087_resolve.get();return j::call(_callee19630,j::Args{});})();
return V{};
},0);return j::put(_base19628,_key19629,_assign19627);})());
(void)(([&]()->V{V _base19632=_v_16085_img.get();V _key19633=this->_literals[173];V _assign19631=j::function([=](const j::Args &_args_fn16090,const V &_receiver_fn16090,const V &_self_fn16090) mutable ->V{
return ([&]()->V{V _callee19635=_v_16088_reject.get();return j::call(_callee19635,j::Args{([&]()->V{V _callee19634=j::builtin("Error");return j::construct(_callee19634,j::Args{this->_literals[174]});})()});})();
return V{};
},0);return j::put(_base19632,_key19633,_assign19631);})());
(void)(([&]()->V{V _base19637=_v_16085_img.get();V _key19638=this->_literals[152];V _assign19636=_v_16084_url.get();return j::put(_base19637,_key19638,_assign19636);})());

}

return V{};
},2)});})());
return ([&]()->V{V _callee19640=this->_v_16091_drawn.get();return j::call(_callee19640,j::Args{_v_16085_img.get(),_v_16082_W,_v_16083_H});})();

}
catch(...){throw;}}

}

return V{};
},1);
this->_v_16091_drawn.get()=j::function([=](const j::Args &_args_fn16092,const V &_receiver_fn16092,const V &_self_fn16092) mutable ->V{
V _v_16093_src;
V _v_16094_w;
V _v_16095_h;
_v_16093_src=_args_fn16092[0];
_v_16094_w=_args_fn16092[1];
_v_16095_h=_args_fn16092[2];
{
V _v_16096_k;
V _v_16097_W;
V _v_16098_H;
V _v_16099_canvas;
V _v_16100_ctx;
if(j::truth(j::unary("!",([&]()->V{V _logical19641=([&]()->V{V _lhs19642=_v_16094_w;V _rhs19643=V(0.0);return j::binary(">",_lhs19642,_rhs19643);})();return j::truth(_logical19641)?([&]()->V{V _lhs19644=_v_16095_h;V _rhs19645=V(0.0);return j::binary(">",_lhs19644,_rhs19645);})():_logical19641;})()))){(void)(([&]()->V{V _callee19646=this->_v_15268_fail.get();return j::call(_callee19646,j::Args{this->_literals[175]});})());
}
_v_16096_k=([&]()->V{V _receiver19656=j::builtin("Math");V _method19657=this->_literals[59];V _method=j::get(_receiver19656,_method19657);j::Args _params19658=j::Args{V(1.0),([&]()->V{V _lhs19647=this->_v_15285_LARGEST.get();V _rhs19648=([&]()->V{V _receiver19651=j::builtin("Math");V _method19652=this->_literals[60];V _method=j::get(_receiver19651,_method19652);j::Args _params19653=j::Args{_v_16094_w,_v_16095_h};return j::call(_method,_params19653,_receiver19651);})();return V(j::number(_lhs19647)/j::number(_rhs19648));})()};return j::call(_method,_params19658,_receiver19656);})();
_v_16097_W=([&]()->V{V _receiver19666=j::builtin("Math");V _method19667=this->_literals[60];V _method=j::get(_receiver19666,_method19667);j::Args _params19668=j::Args{V(1.0),([&]()->V{V _number19661=([&]()->V{V _lhs19662=_v_16094_w;V _rhs19663=_v_16096_k;return V(j::number(_lhs19662)*j::number(_rhs19663));})();return V(std::floor(j::number(_number19661)+.5));})()};return j::call(_method,_params19668,_receiver19666);})();
_v_16098_H=([&]()->V{V _receiver19676=j::builtin("Math");V _method19677=this->_literals[60];V _method=j::get(_receiver19676,_method19677);j::Args _params19678=j::Args{V(1.0),([&]()->V{V _number19671=([&]()->V{V _lhs19672=_v_16095_h;V _rhs19673=_v_16096_k;return V(j::number(_lhs19672)*j::number(_rhs19673));})();return V(std::floor(j::number(_number19671)+.5));})()};return j::call(_method,_params19678,_receiver19676);})();
_v_16099_canvas=(j::truth(([&]()->V{V _lhs19679=j::unary("typeof",j::builtin("OffscreenCanvas"));V _rhs19680=this->_literals[5];return V(j::equal(_lhs19679,_rhs19680,true));})())?([&]()->V{V _callee19681=j::builtin("OffscreenCanvas");return j::construct(_callee19681,j::Args{_v_16097_W,_v_16098_H});})():(j::truth(([&]()->V{V _lhs19682=j::unary("typeof",j::builtin("document"));V _rhs19683=this->_literals[154];return V(!j::equal(_lhs19682,_rhs19683,true));})())?([&]()->V{V _receiver19688=j::builtin("Object");V _method19689=this->_literals[111];V _method=j::get(_receiver19688,_method19689);j::Args _params19690=j::Args{([&]()->V{V _receiver19684=j::builtin("document");V _method19685=this->_literals[177];V _method=j::get(_receiver19684,_method19685);j::Args _params19686=j::Args{this->_literals[176]};return j::call(_method,_params19686,_receiver19684);})(),([&]()->V{V _obj19687=j::object();j::put(_obj19687,this->_literals[20],_v_16097_W);j::put(_obj19687,this->_literals[21],_v_16098_H);return _obj19687;})()};return j::call(_method,_params19690,_receiver19688);})():([&]()->V{V _callee19691=this->_v_15268_fail.get();return j::call(_callee19691,j::Args{this->_literals[178]});})()));
_v_16100_ctx=([&]()->V{V _receiver19693=_v_16099_canvas;V _method19694=this->_literals[181];V _method=j::get(_receiver19693,_method19694);j::Args _params19695=j::Args{this->_literals[179],([&]()->V{V _obj19692=j::object();j::put(_obj19692,this->_literals[180],V(true));return _obj19692;})()};return j::call(_method,_params19695,_receiver19693);})();
if(j::truth(j::unary("!",_v_16100_ctx))){(void)(([&]()->V{V _callee19696=this->_v_15268_fail.get();return j::call(_callee19696,j::Args{this->_literals[182]});})());
}
(void)(([&]()->V{V _base19698=_v_16100_ctx;V _key19699=this->_literals[183];V _assign19697=V(true);return j::put(_base19698,_key19699,_assign19697);})());
(void)(([&]()->V{V _base19701=_v_16100_ctx;V _key19702=this->_literals[184];V _assign19700=this->_literals[185];return j::put(_base19701,_key19702,_assign19700);})());
(void)(([&]()->V{V _receiver19703=_v_16100_ctx;V _method19704=this->_literals[114];V _method=j::get(_receiver19703,_method19704);j::Args _params19705=j::Args{_v_16093_src,V(0.0),V(0.0),_v_16097_W,_v_16098_H};return j::call(_method,_params19705,_receiver19703);})());
{try {
return ([&]()->V{V _obj19706=j::object();j::put(_obj19706,this->_literals[45],j::get(([&]()->V{V _receiver19707=_v_16100_ctx;V _method19708=this->_literals[186];V _method=j::get(_receiver19707,_method19708);j::Args _params19709=j::Args{V(0.0),V(0.0),_v_16097_W,_v_16098_H};return j::call(_method,_params19709,_receiver19707);})(),this->_literals[45]));j::put(_obj19706,this->_literals[20],_v_16097_W);j::put(_obj19706,this->_literals[21],_v_16098_H);return _obj19706;})();

}
catch(const std::exception &_error19710){{
(void)(([&]()->V{V _callee19711=this->_v_15268_fail.get();return j::call(_callee19711,j::Args{this->_literals[187]});})());

}
}}

}

return V{};
},3);
this->_v_16101_format.get()=j::function([=](const j::Args &_args_fn16102,const V &_receiver_fn16102,const V &_self_fn16102) mutable ->V{
V _v_16103_head;
_v_16103_head=_args_fn16102[0];
{
V _v_16104_text;
_v_16104_text=([&]()->V{V _receiver19713=j::builtin("String");V _method19714=this->_literals[188];V _method=j::get(_receiver19713,_method19714);j::Args _params19715=([&](){j::Args _args19712;for(const auto &_v:j::elements(_v_16103_head))_args19712.push_back(_v);return _args19712;})();return j::call(_method,_params19715,_receiver19713);})();
if(j::truth(([&]()->V{V _logical19716=([&]()->V{V _logical19717=([&]()->V{V _lhs19718=j::get(_v_16103_head,V(0.0));V _rhs19719=V(255.0);return V(j::equal(_lhs19718,_rhs19719,true));})();return j::truth(_logical19717)?([&]()->V{V _lhs19720=j::get(_v_16103_head,V(1.0));V _rhs19721=V(216.0);return V(j::equal(_lhs19720,_rhs19721,true));})():_logical19717;})();return j::truth(_logical19716)?([&]()->V{V _lhs19722=j::get(_v_16103_head,V(2.0));V _rhs19723=V(255.0);return V(j::equal(_lhs19722,_rhs19723,true));})():_logical19716;})())){return this->_literals[189];
}
if(j::truth(([&]()->V{V _receiver19724=_v_16104_text;V _method19725=this->_literals[191];V _method=j::get(_receiver19724,_method19725);j::Args _params19726=j::Args{this->_literals[190]};return j::call(_method,_params19726,_receiver19724);})())){return this->_literals[192];
}
if(j::truth(([&]()->V{V _logical19727=([&]()->V{V _receiver19728=_v_16104_text;V _method19729=this->_literals[191];V _method=j::get(_receiver19728,_method19729);j::Args _params19730=j::Args{this->_literals[193]};return j::call(_method,_params19730,_receiver19728);})();return j::truth(_logical19727)?([&]()->V{V _lhs19731=([&]()->V{V _receiver19733=_v_16104_text;V _method19734=this->_literals[2];V _method=j::get(_receiver19733,_method19734);j::Args _params19735=j::Args{V(8.0)};return j::call(_method,_params19735,_receiver19733);})();V _rhs19732=this->_literals[194];return V(j::equal(_lhs19731,_rhs19732,true));})():_logical19727;})())){return this->_literals[195];
}
if(j::truth(([&]()->V{V _receiver19736=j::regexp(u"^....ftypavi[fs]","");V _method19737=this->_literals[41];V _method=j::get(_receiver19736,_method19737);j::Args _params19738=j::Args{_v_16104_text};return j::call(_method,_params19738,_receiver19736);})())){return this->_literals[196];
}
if(j::truth(([&]()->V{V _receiver19739=_v_16104_text;V _method19740=this->_literals[191];V _method=j::get(_receiver19739,_method19740);j::Args _params19741=j::Args{this->_literals[197]};return j::call(_method,_params19741,_receiver19739);})())){return this->_literals[198];
}
return V::null();

}

return V{};
},1);
this->_v_16105_shrink.get()=j::function([=](const j::Args &_args_fn16106,const V &_receiver_fn16106,const V &_self_fn16106) mutable ->V{
V _v_16107_px;
V _v_16108_side;
_v_16107_px=_args_fn16106[0];
_v_16108_side=_args_fn16106[1];
{
V _v_16109_data;
V _v_16110_W;
V _v_16111_H;
V _v_16112_k;
V _v_16113_w;
V _v_16114_h;
V _v_16115_tx;
V _v_16116_ty;
V _v_16117_out;
V _v_16118_sum;
V _pattern19742=_v_16107_px;
_v_16109_data=j::get(_pattern19742,this->_literals[45]);
_v_16110_W=j::get(_pattern19742,this->_literals[20]);
_v_16111_H=j::get(_pattern19742,this->_literals[21]);
_v_16112_k=([&]()->V{V _lhs19743=_v_16108_side;V _rhs19744=([&]()->V{V _receiver19747=j::builtin("Math");V _method19748=this->_literals[60];V _method=j::get(_receiver19747,_method19748);j::Args _params19749=j::Args{_v_16110_W,_v_16111_H};return j::call(_method,_params19749,_receiver19747);})();return V(j::number(_lhs19743)/j::number(_rhs19744));})();
if(j::truth(([&]()->V{V _lhs19750=_v_16112_k;V _rhs19751=V(1.0);return j::binary(">=",_lhs19750,_rhs19751);})())){return _v_16107_px;
}
_v_16113_w=([&]()->V{V _receiver19759=j::builtin("Math");V _method19760=this->_literals[60];V _method=j::get(_receiver19759,_method19760);j::Args _params19761=j::Args{V(1.0),([&]()->V{V _number19754=([&]()->V{V _lhs19755=_v_16110_W;V _rhs19756=_v_16112_k;return V(j::number(_lhs19755)*j::number(_rhs19756));})();return V(std::floor(j::number(_number19754)+.5));})()};return j::call(_method,_params19761,_receiver19759);})();
_v_16114_h=([&]()->V{V _receiver19769=j::builtin("Math");V _method19770=this->_literals[60];V _method=j::get(_receiver19769,_method19770);j::Args _params19771=j::Args{V(1.0),([&]()->V{V _number19764=([&]()->V{V _lhs19765=_v_16111_H;V _rhs19766=_v_16112_k;return V(j::number(_lhs19765)*j::number(_rhs19766));})();return V(std::floor(j::number(_number19764)+.5));})()};return j::call(_method,_params19771,_receiver19769);})();
_v_16115_tx=([&]()->V{V _callee19772=this->_v_15552_taps.get();return j::call(_callee19772,j::Args{_v_16113_w,V(1.0),V(0.0),_v_16113_w,_v_16110_W});})();
_v_16116_ty=([&]()->V{V _callee19773=this->_v_15552_taps.get();return j::call(_callee19773,j::Args{_v_16114_h,V(1.0),V(0.0),_v_16114_h,_v_16111_H});})();
_v_16117_out=([&]()->V{V _callee19778=j::builtin("Uint8ClampedArray");return j::construct(_callee19778,j::Args{([&]()->V{V _lhs19774=([&]()->V{V _lhs19776=_v_16113_w;V _rhs19777=_v_16114_h;return V(j::number(_lhs19776)*j::number(_rhs19777));})();V _rhs19775=V(4.0);return V(j::number(_lhs19774)*j::number(_rhs19775));})()});})();
_v_16118_sum=([&]()->V{V _callee19781=j::builtin("Float64Array");return j::construct(_callee19781,j::Args{([&]()->V{V _lhs19779=_v_16113_w;V _rhs19780=V(4.0);return V(j::number(_lhs19779)*j::number(_rhs19780));})()});})();
{V _v_16119_j;
_v_16119_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs19782=_v_16119_j;V _rhs19783=_v_16114_h;return j::binary("<",_lhs19782,_rhs19783);})());(void)(j::increment(_v_16119_j,1,false))){
(void)(([&]()->V{V _receiver19784=_v_16118_sum;V _method19785=this->_literals[65];V _method=j::get(_receiver19784,_method19785);j::Args _params19786=j::Args{V(0.0)};return j::call(_method,_params19786,_receiver19784);})());
{V _v_16120_p;
_v_16120_p=j::get(j::get(_v_16116_ty,this->_literals[53]),_v_16119_j);
for(;j::truth(([&]()->V{V _lhs19787=_v_16120_p;V _rhs19788=j::get(j::get(_v_16116_ty,this->_literals[53]),([&]()->V{V _lhs19789=_v_16119_j;V _rhs19790=V(1.0);return j::binary("+",_lhs19789,_rhs19790);})());return j::binary("<",_lhs19787,_rhs19788);})());(void)(j::increment(_v_16120_p,1,false))){
V _v_16121_wy;
V _v_16122_row;
_v_16121_wy=j::get(j::get(_v_16116_ty,this->_literals[46]),_v_16120_p);
_v_16122_row=([&]()->V{V _lhs19791=j::get(j::get(_v_16116_ty,this->_literals[61]),_v_16120_p);V _rhs19792=_v_16110_W;return V(j::number(_lhs19791)*j::number(_rhs19792));})();
{V _v_16123_i;
_v_16123_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs19793=_v_16123_i;V _rhs19794=_v_16113_w;return j::binary("<",_lhs19793,_rhs19794);})());(void)(j::increment(_v_16123_i,1,false))){{V _v_16124_q;
_v_16124_q=j::get(j::get(_v_16115_tx,this->_literals[53]),_v_16123_i);
for(;j::truth(([&]()->V{V _lhs19795=_v_16124_q;V _rhs19796=j::get(j::get(_v_16115_tx,this->_literals[53]),([&]()->V{V _lhs19797=_v_16123_i;V _rhs19798=V(1.0);return j::binary("+",_lhs19797,_rhs19798);})());return j::binary("<",_lhs19795,_rhs19796);})());(void)(j::increment(_v_16124_q,1,false))){
V _v_16125_o;
V _v_16126_a;
_v_16125_o=([&]()->V{V _lhs19799=([&]()->V{V _lhs19801=_v_16122_row;V _rhs19802=j::get(j::get(_v_16115_tx,this->_literals[61]),_v_16124_q);return j::binary("+",_lhs19801,_rhs19802);})();V _rhs19800=V(4.0);return V(j::number(_lhs19799)*j::number(_rhs19800));})();
_v_16126_a=([&]()->V{V _lhs19803=([&]()->V{V _lhs19805=j::get(_v_16109_data,([&]()->V{V _lhs19807=_v_16125_o;V _rhs19808=V(3.0);return j::binary("+",_lhs19807,_rhs19808);})());V _rhs19806=j::get(j::get(_v_16115_tx,this->_literals[46]),_v_16124_q);return V(j::number(_lhs19805)*j::number(_rhs19806));})();V _rhs19804=_v_16121_wy;return V(j::number(_lhs19803)*j::number(_rhs19804));})();
(void)(([&]()->V{V _base19810=_v_16118_sum;V _key19811=([&]()->V{V _lhs19812=_v_16123_i;V _rhs19813=V(4.0);return V(j::number(_lhs19812)*j::number(_rhs19813));})();V _assign19809=([&]()->V{V _lhs19814=_v_16126_a;V _rhs19815=j::get(_v_16109_data,_v_16125_o);return V(j::number(_lhs19814)*j::number(_rhs19815));})();return j::update(_base19810,_key19811,"+",_assign19809);})());
(void)(([&]()->V{V _base19817=_v_16118_sum;V _key19818=([&]()->V{V _lhs19819=([&]()->V{V _lhs19821=_v_16123_i;V _rhs19822=V(4.0);return V(j::number(_lhs19821)*j::number(_rhs19822));})();V _rhs19820=V(1.0);return j::binary("+",_lhs19819,_rhs19820);})();V _assign19816=([&]()->V{V _lhs19823=_v_16126_a;V _rhs19824=j::get(_v_16109_data,([&]()->V{V _lhs19825=_v_16125_o;V _rhs19826=V(1.0);return j::binary("+",_lhs19825,_rhs19826);})());return V(j::number(_lhs19823)*j::number(_rhs19824));})();return j::update(_base19817,_key19818,"+",_assign19816);})());
(void)(([&]()->V{V _base19828=_v_16118_sum;V _key19829=([&]()->V{V _lhs19830=([&]()->V{V _lhs19832=_v_16123_i;V _rhs19833=V(4.0);return V(j::number(_lhs19832)*j::number(_rhs19833));})();V _rhs19831=V(2.0);return j::binary("+",_lhs19830,_rhs19831);})();V _assign19827=([&]()->V{V _lhs19834=_v_16126_a;V _rhs19835=j::get(_v_16109_data,([&]()->V{V _lhs19836=_v_16125_o;V _rhs19837=V(2.0);return j::binary("+",_lhs19836,_rhs19837);})());return V(j::number(_lhs19834)*j::number(_rhs19835));})();return j::update(_base19828,_key19829,"+",_assign19827);})());
(void)(([&]()->V{V _base19839=_v_16118_sum;V _key19840=([&]()->V{V _lhs19841=([&]()->V{V _lhs19843=_v_16123_i;V _rhs19844=V(4.0);return V(j::number(_lhs19843)*j::number(_rhs19844));})();V _rhs19842=V(3.0);return j::binary("+",_lhs19841,_rhs19842);})();V _assign19838=_v_16126_a;return j::update(_base19839,_key19840,"+",_assign19838);})());

}
}
}}

}
}
{V _v_16127_i;
V _v_16128_o;
_v_16127_i=V(0.0);
_v_16128_o=([&]()->V{V _lhs19845=([&]()->V{V _lhs19847=_v_16119_j;V _rhs19848=_v_16113_w;return V(j::number(_lhs19847)*j::number(_rhs19848));})();V _rhs19846=V(4.0);return V(j::number(_lhs19845)*j::number(_rhs19846));})();
for(;j::truth(([&]()->V{V _lhs19849=_v_16127_i;V _rhs19850=_v_16113_w;return j::binary("<",_lhs19849,_rhs19850);})());(void)((j::increment(_v_16127_i,1,false),(_v_16128_o=j::binary("+",_v_16128_o,V(4.0)))))){
V _v_16129_a;
_v_16129_a=j::get(_v_16118_sum,([&]()->V{V _lhs19852=([&]()->V{V _lhs19854=_v_16127_i;V _rhs19855=V(4.0);return V(j::number(_lhs19854)*j::number(_rhs19855));})();V _rhs19853=V(3.0);return j::binary("+",_lhs19852,_rhs19853);})());
if(j::truth(j::unary("!",_v_16129_a))){continue;
}
(void)(([&]()->V{V _base19857=_v_16117_out;V _key19858=_v_16128_o;V _assign19856=([&]()->V{V _lhs19859=j::get(_v_16118_sum,([&]()->V{V _lhs19861=_v_16127_i;V _rhs19862=V(4.0);return V(j::number(_lhs19861)*j::number(_rhs19862));})());V _rhs19860=_v_16129_a;return V(j::number(_lhs19859)/j::number(_rhs19860));})();return j::put(_base19857,_key19858,_assign19856);})());
(void)(([&]()->V{V _base19864=_v_16117_out;V _key19865=([&]()->V{V _lhs19866=_v_16128_o;V _rhs19867=V(1.0);return j::binary("+",_lhs19866,_rhs19867);})();V _assign19863=([&]()->V{V _lhs19868=j::get(_v_16118_sum,([&]()->V{V _lhs19870=([&]()->V{V _lhs19872=_v_16127_i;V _rhs19873=V(4.0);return V(j::number(_lhs19872)*j::number(_rhs19873));})();V _rhs19871=V(1.0);return j::binary("+",_lhs19870,_rhs19871);})());V _rhs19869=_v_16129_a;return V(j::number(_lhs19868)/j::number(_rhs19869));})();return j::put(_base19864,_key19865,_assign19863);})());
(void)(([&]()->V{V _base19875=_v_16117_out;V _key19876=([&]()->V{V _lhs19877=_v_16128_o;V _rhs19878=V(2.0);return j::binary("+",_lhs19877,_rhs19878);})();V _assign19874=([&]()->V{V _lhs19879=j::get(_v_16118_sum,([&]()->V{V _lhs19881=([&]()->V{V _lhs19883=_v_16127_i;V _rhs19884=V(4.0);return V(j::number(_lhs19883)*j::number(_rhs19884));})();V _rhs19882=V(2.0);return j::binary("+",_lhs19881,_rhs19882);})());V _rhs19880=_v_16129_a;return V(j::number(_lhs19879)/j::number(_rhs19880));})();return j::put(_base19875,_key19876,_assign19874);})());
(void)(([&]()->V{V _base19886=_v_16117_out;V _key19887=([&]()->V{V _lhs19888=_v_16128_o;V _rhs19889=V(3.0);return j::binary("+",_lhs19888,_rhs19889);})();V _assign19885=_v_16129_a;return j::put(_base19886,_key19887,_assign19885);})());

}
}

}
}
return ([&]()->V{V _obj19890=j::object();j::put(_obj19890,this->_literals[45],_v_16117_out);j::put(_obj19890,this->_literals[20],_v_16113_w);j::put(_obj19890,this->_literals[21],_v_16114_h);return _obj19890;})();

}

return V{};
},2);
this->_v_16133_file.get()=j::function([=](const j::Args &_args_fn16134,const V &_receiver_fn16134,const V &_self_fn16134) mutable ->V{
V _v_16135_path;
_v_16135_path=_args_fn16134[0];
{
V _v_16136_fs;
V _v_16137_bytes;
_v_16136_fs=([&]()->V{V _callee19891=this->_v_16130_files.get();return j::call(_callee19891,j::Args{});})();
if(j::truth(j::unary("!",_v_16136_fs))){(void)(([&]()->V{V _callee19894=this->_v_15268_fail.get();return j::call(_callee19894,j::Args{([&]()->V{std::u16string _text19892;_text19892+=u"fromImage() could not read ";_text19892+=j::string(([&]()->V{V _callee19893=j::builtin("String");return j::call(_callee19893,j::Args{_v_16135_path});})());_text19892+=u": there is no file system here";return V(std::move(_text19892));})()});})());
}
{try {
(void)((_v_16137_bytes=([&]()->V{V _receiver19896=_v_16136_fs;V _method19897=this->_literals[199];V _method=j::get(_receiver19896,_method19897);j::Args _params19898=j::Args{_v_16135_path};return j::call(_method,_params19898,_receiver19896);})()));

}
catch(const std::exception &_error19899){V _v_16138_e;
_v_16138_e=j::object({{V(u"message"),V(ascii::utf16(_error19899.what()))}});
{
(void)(([&]()->V{V _callee19905=this->_v_15268_fail.get();return j::call(_callee19905,j::Args{([&]()->V{std::u16string _text19900;_text19900+=u"fromImage() could not read ";_text19900+=j::string(([&]()->V{V _callee19901=j::builtin("String");return j::call(_callee19901,j::Args{_v_16135_path});})());_text19900+=u": ";_text19900+=j::string((j::truth(([&]()->V{V _lhs19902=j::get(_v_16138_e,this->_literals[200]);V _rhs19903=this->_literals[201];return V(j::equal(_lhs19902,_rhs19903,true));})())?this->_literals[202]:([&]()->V{V _callee19904=j::builtin("String");return j::call(_callee19904,j::Args{j::get(_v_16138_e,this->_literals[203])});})()));_text19900+=u"";return V(std::move(_text19900));})()});})());

}
}}
return ([&]()->V{V _callee19915=j::builtin("File");return j::construct(_callee19915,j::Args{([&]()->V{j::Args _array19906;_array19906.push_back(_v_16137_bytes);return j::array(std::move(_array19906));})(),([&]()->V{V _logical19907=([&]()->V{V _receiver19908=([&]()->V{V _receiver19911=([&]()->V{V _callee19914=j::builtin("String");return j::call(_callee19914,j::Args{_v_16135_path});})();V _method19912=this->_literals[120];V _method=j::get(_receiver19911,_method19912);j::Args _params19913=j::Args{j::regexp(u"[\\\\/]","")};return j::call(_method,_params19913,_receiver19911);})();V _method19909=this->_literals[122];V _method=j::get(_receiver19908,_method19909);j::Args _params19910=j::Args{};return j::call(_method,_params19910,_receiver19908);})();return j::nullish(_logical19907)?this->_literals[14]:_logical19907;})()});})();

}

return V{};
},1);
this->_v_16144_readPng.get()=j::function([=](const j::Args &_args_fn16145,const V &_receiver_fn16145,const V &_self_fn16145) mutable ->V{
j::Cell _v_16146_bytes;
_v_16146_bytes.get()=_args_fn16145[0];
{
V _v_16147_bad;
V _v_16153_view;
V _v_16154_width;
V _v_16155_height;
j::Cell _v_16156_depth;
V _v_16157_type;
V _v_16158_interlace;
V _v_16159_plte;
j::Cell _v_16160_trns;
V _v_16161_idat;
V _v_16166_channels;
j::Cell _v_16167_all;
V _v_16174_need;
V _v_16181_raw;
V _v_16182_sample;
j::Cell _v_16186_max;
V _v_16187_eight;
V _v_16190_key;
V _v_16194_out;
V _v_16195_bits;
V _v_16196_back;
V _v_16197_at;
if(j::truth(([&]()->V{V _lhs19916=_v_16146_bytes.get();V _rhs19917=j::builtin("ArrayBuffer");return j::binary("instanceof",_lhs19916,_rhs19917);})())){(void)((_v_16146_bytes.get()=([&]()->V{V _callee19919=j::builtin("Uint8Array");return j::construct(_callee19919,j::Args{_v_16146_bytes.get()});})()));
}
if(j::truth(j::unary("!",([&]()->V{V _lhs19920=_v_16146_bytes.get();V _rhs19921=j::builtin("Uint8Array");return j::binary("instanceof",_lhs19920,_rhs19921);})()))){(void)(([&]()->V{V _callee19922=this->_v_15268_fail.get();return j::call(_callee19922,j::Args{this->_literals[204]});})());
}
_v_16147_bad=j::function([=](const j::Args &_args_fn16148,const V &_receiver_fn16148,const V &_self_fn16148) mutable ->V{
V _v_16149_why;
_v_16149_why=_args_fn16148[0];
return ([&]()->V{V _callee19924=this->_v_15268_fail.get();return j::call(_callee19924,j::Args{([&]()->V{std::u16string _text19923;_text19923+=u"could not read that PNG: ";_text19923+=j::string(_v_16149_why);_text19923+=u"";return V(std::move(_text19923));})()});})();
return V{};
},1);
if(j::truth(([&]()->V{V _logical19925=([&]()->V{V _lhs19926=j::get(_v_16146_bytes.get(),this->_literals[1]);V _rhs19927=V(8.0);return j::binary("<",_lhs19926,_rhs19927);})();return !j::truth(_logical19925)?([&]()->V{V _receiver19930=this->_v_16139_PNG.get();V _method19931=this->_literals[64];V _method=j::get(_receiver19930,_method19931);j::Args _params19932=j::Args{j::function([=](const j::Args &_args_fn16150,const V &_receiver_fn16150,const V &_self_fn16150) mutable ->V{
V _v_16151_v;
V _v_16152_i;
_v_16151_v=_args_fn16150[0];
_v_16152_i=_args_fn16150[1];
return ([&]()->V{V _lhs19928=j::get(_v_16146_bytes.get(),_v_16152_i);V _rhs19929=_v_16151_v;return V(!j::equal(_lhs19928,_rhs19929,true));})();
return V{};
},2)};return j::call(_method,_params19932,_receiver19930);})():_logical19925;})())){(void)(([&]()->V{V _callee19933=_v_16147_bad;return j::call(_callee19933,j::Args{this->_literals[205]});})());
}
_v_16153_view=([&]()->V{V _callee19934=j::builtin("DataView");return j::construct(_callee19934,j::Args{j::get(_v_16146_bytes.get(),this->_literals[206]),j::get(_v_16146_bytes.get(),this->_literals[207]),j::get(_v_16146_bytes.get(),this->_literals[208])});})();
_v_16154_width=V(0.0);
_v_16155_height=V(0.0);
_v_16156_depth.get()=V(0.0);
_v_16157_type=j::unary("-",V(1.0));
_v_16158_interlace=V(0.0);
_v_16159_plte=V::null();
_v_16160_trns.get()=V::null();
_v_16161_idat=([&]()->V{j::Args _array19935;return j::array(std::move(_array19935));})();
{V _v_16162_p;
_v_16162_p=V(8.0);
for(;j::truth(([&]()->V{V _lhs19936=([&]()->V{V _lhs19938=_v_16162_p;V _rhs19939=V(8.0);return j::binary("+",_lhs19938,_rhs19939);})();V _rhs19937=j::get(_v_16146_bytes.get(),this->_literals[1]);return j::binary("<=",_lhs19936,_rhs19937);})());(void)0){
V _v_16163_length;
V _v_16164_kind;
V _v_16165_body;
_v_16163_length=([&]()->V{V _receiver19940=_v_16153_view;V _method19941=this->_literals[209];V _method=j::get(_receiver19940,_method19941);j::Args _params19942=j::Args{_v_16162_p};return j::call(_method,_params19942,_receiver19940);})();
_v_16164_kind=([&]()->V{V _receiver19951=j::builtin("String");V _method19952=this->_literals[188];V _method=j::get(_receiver19951,_method19952);j::Args _params19953=j::Args{j::get(_v_16146_bytes.get(),([&]()->V{V _lhs19943=_v_16162_p;V _rhs19944=V(4.0);return j::binary("+",_lhs19943,_rhs19944);})()),j::get(_v_16146_bytes.get(),([&]()->V{V _lhs19945=_v_16162_p;V _rhs19946=V(5.0);return j::binary("+",_lhs19945,_rhs19946);})()),j::get(_v_16146_bytes.get(),([&]()->V{V _lhs19947=_v_16162_p;V _rhs19948=V(6.0);return j::binary("+",_lhs19947,_rhs19948);})()),j::get(_v_16146_bytes.get(),([&]()->V{V _lhs19949=_v_16162_p;V _rhs19950=V(7.0);return j::binary("+",_lhs19949,_rhs19950);})())};return j::call(_method,_params19953,_receiver19951);})();
_v_16165_body=([&]()->V{V _receiver19960=_v_16146_bytes.get();V _method19961=this->_literals[81];V _method=j::get(_receiver19960,_method19961);j::Args _params19962=j::Args{([&]()->V{V _lhs19954=_v_16162_p;V _rhs19955=V(8.0);return j::binary("+",_lhs19954,_rhs19955);})(),([&]()->V{V _lhs19956=([&]()->V{V _lhs19958=_v_16162_p;V _rhs19959=V(8.0);return j::binary("+",_lhs19958,_rhs19959);})();V _rhs19957=_v_16163_length;return j::binary("+",_lhs19956,_rhs19957);})()};return j::call(_method,_params19962,_receiver19960);})();
if(j::truth(([&]()->V{V _lhs19963=j::get(_v_16165_body,this->_literals[1]);V _rhs19964=_v_16163_length;return j::binary("<",_lhs19963,_rhs19964);})())){(void)(([&]()->V{V _callee19965=_v_16147_bad;return j::call(_callee19965,j::Args{this->_literals[210]});})());
}
if(j::truth(([&]()->V{V _logical19966=([&]()->V{V _lhs19967=_v_16164_kind;V _rhs19968=this->_literals[211];return V(j::equal(_lhs19967,_rhs19968,true));})();return j::truth(_logical19966)?([&]()->V{V _lhs19969=_v_16163_length;V _rhs19970=V(13.0);return j::binary(">=",_lhs19969,_rhs19970);})():_logical19966;})())){(void)(((_v_16154_width=([&]()->V{V _receiver19974=_v_16153_view;V _method19975=this->_literals[209];V _method=j::get(_receiver19974,_method19975);j::Args _params19976=j::Args{([&]()->V{V _lhs19972=_v_16162_p;V _rhs19973=V(8.0);return j::binary("+",_lhs19972,_rhs19973);})()};return j::call(_method,_params19976,_receiver19974);})()),(_v_16155_height=([&]()->V{V _receiver19980=_v_16153_view;V _method19981=this->_literals[209];V _method=j::get(_receiver19980,_method19981);j::Args _params19982=j::Args{([&]()->V{V _lhs19978=_v_16162_p;V _rhs19979=V(12.0);return j::binary("+",_lhs19978,_rhs19979);})()};return j::call(_method,_params19982,_receiver19980);})()),(_v_16156_depth.get()=j::get(_v_16165_body,V(8.0))),(_v_16157_type=j::get(_v_16165_body,V(9.0))),(_v_16158_interlace=j::get(_v_16165_body,V(12.0)))));
}else {if(j::truth(([&]()->V{V _lhs19986=_v_16164_kind;V _rhs19987=this->_literals[212];return V(j::equal(_lhs19986,_rhs19987,true));})())){(void)((_v_16159_plte=_v_16165_body));
}else {if(j::truth(([&]()->V{V _lhs19989=_v_16164_kind;V _rhs19990=this->_literals[213];return V(j::equal(_lhs19989,_rhs19990,true));})())){(void)((_v_16160_trns.get()=_v_16165_body));
}else {if(j::truth(([&]()->V{V _lhs19992=_v_16164_kind;V _rhs19993=this->_literals[214];return V(j::equal(_lhs19992,_rhs19993,true));})())){(void)(([&]()->V{V _receiver19994=_v_16161_idat;V _method19995=this->_literals[69];V _method=j::get(_receiver19994,_method19995);j::Args _params19996=j::Args{_v_16165_body};return j::call(_method,_params19996,_receiver19994);})());
}else {if(j::truth(([&]()->V{V _lhs19997=_v_16164_kind;V _rhs19998=this->_literals[215];return V(j::equal(_lhs19997,_rhs19998,true));})())){break;
}
}
}
}
}
(void)((_v_16162_p=j::binary("+",_v_16162_p,([&]()->V{V _lhs20000=V(12.0);V _rhs20001=_v_16163_length;return j::binary("+",_lhs20000,_rhs20001);})())));

}
}
_v_16166_channels=([&]()->V{V _logical20002=j::get(this->_v_16141_CHANNELS.get(),_v_16157_type);return j::nullish(_logical20002)?V(0.0):_logical20002;})();
if(j::truth(([&]()->V{V _logical20003=j::unary("!",_v_16154_width);return !j::truth(_logical20003)?j::unary("!",_v_16155_height):_logical20003;})())){(void)(([&]()->V{V _callee20004=_v_16147_bad;return j::call(_callee20004,j::Args{this->_literals[216]});})());
}
if(j::truth(([&]()->V{V _logical20005=j::unary("!",_v_16166_channels);return !j::truth(_logical20005)?j::unary("!",([&]()->V{V _receiver20006=(j::truth(([&]()->V{V _lhs20009=_v_16157_type;V _rhs20010=V(0.0);return V(j::equal(_lhs20009,_rhs20010,true));})())?([&]()->V{j::Args _array20011;_array20011.push_back(V(1.0));_array20011.push_back(V(2.0));_array20011.push_back(V(4.0));_array20011.push_back(V(8.0));_array20011.push_back(V(16.0));return j::array(std::move(_array20011));})():(j::truth(([&]()->V{V _lhs20012=_v_16157_type;V _rhs20013=V(3.0);return V(j::equal(_lhs20012,_rhs20013,true));})())?([&]()->V{j::Args _array20014;_array20014.push_back(V(1.0));_array20014.push_back(V(2.0));_array20014.push_back(V(4.0));_array20014.push_back(V(8.0));return j::array(std::move(_array20014));})():([&]()->V{j::Args _array20015;_array20015.push_back(V(8.0));_array20015.push_back(V(16.0));return j::array(std::move(_array20015));})()));V _method20007=this->_literals[13];V _method=j::get(_receiver20006,_method20007);j::Args _params20008=j::Args{_v_16156_depth.get()};return j::call(_method,_params20008,_receiver20006);})()):_logical20005;})())){(void)(([&]()->V{V _callee20017=_v_16147_bad;return j::call(_callee20017,j::Args{([&]()->V{std::u16string _text20016;_text20016+=u"colour type ";_text20016+=j::string(_v_16157_type);_text20016+=u" at ";_text20016+=j::string(_v_16156_depth.get());_text20016+=u" bits is not a kind of PNG";return V(std::move(_text20016));})()});})());
}
if(j::truth(([&]()->V{V _lhs20018=_v_16158_interlace;V _rhs20019=V(1.0);return j::binary(">",_lhs20018,_rhs20019);})())){(void)(([&]()->V{V _callee20021=_v_16147_bad;return j::call(_callee20021,j::Args{([&]()->V{std::u16string _text20020;_text20020+=u"interlace method ";_text20020+=j::string(_v_16158_interlace);_text20020+=u" is not a PNG one";return V(std::move(_text20020));})()});})());
}
if(j::truth(([&]()->V{V _logical20022=([&]()->V{V _lhs20023=_v_16157_type;V _rhs20024=V(3.0);return V(j::equal(_lhs20023,_rhs20024,true));})();return j::truth(_logical20022)?j::unary("!",_v_16159_plte):_logical20022;})())){(void)(([&]()->V{V _callee20025=_v_16147_bad;return j::call(_callee20025,j::Args{this->_literals[217]});})());
}
if(j::truth(j::unary("!",j::get(_v_16161_idat,this->_literals[1])))){(void)(([&]()->V{V _callee20026=_v_16147_bad;return j::call(_callee20026,j::Args{this->_literals[218]});})());
}
if(j::truth(([&]()->V{V _logical20027=([&]()->V{V _logical20028=([&]()->V{V _lhs20029=_v_16154_width;V _rhs20030=this->_v_16142_MOST_SIDE.get();return j::binary(">",_lhs20029,_rhs20030);})();return !j::truth(_logical20028)?([&]()->V{V _lhs20031=_v_16155_height;V _rhs20032=this->_v_16142_MOST_SIDE.get();return j::binary(">",_lhs20031,_rhs20032);})():_logical20028;})();return !j::truth(_logical20027)?([&]()->V{V _lhs20033=([&]()->V{V _lhs20035=_v_16154_width;V _rhs20036=_v_16155_height;return V(j::number(_lhs20035)*j::number(_rhs20036));})();V _rhs20034=this->_v_16143_MOST_PIXELS.get();return j::binary(">",_lhs20033,_rhs20034);})():_logical20027;})())){(void)(([&]()->V{V _callee20040=_v_16147_bad;return j::call(_callee20040,j::Args{([&]()->V{std::u16string _text20037;_text20037+=u"it is too large, ";_text20037+=j::string(_v_16154_width);_text20037+=u" by ";_text20037+=j::string(_v_16155_height);_text20037+=u" pixels: it can be up to ";_text20037+=j::string(this->_v_16142_MOST_SIDE.get());_text20037+=u" pixels a side and ";_text20037+=j::string(([&]()->V{V _lhs20038=this->_v_16143_MOST_PIXELS.get();V _rhs20039=V(1000000.0);return V(j::number(_lhs20038)/j::number(_rhs20039));})());_text20037+=u" million in all, so make it smaller first";return V(std::move(_text20037));})()});})());
}
_v_16167_all.get()=([&]()->V{V _callee20046=j::builtin("Uint8Array");return j::construct(_callee20046,j::Args{([&]()->V{V _receiver20043=_v_16161_idat;V _method20044=this->_literals[80];V _method=j::get(_receiver20043,_method20044);j::Args _params20045=j::Args{j::function([=](const j::Args &_args_fn16168,const V &_receiver_fn16168,const V &_self_fn16168) mutable ->V{
V _v_16169_n;
V _v_16170_c;
_v_16169_n=_args_fn16168[0];
_v_16170_c=_args_fn16168[1];
return ([&]()->V{V _lhs20041=_v_16169_n;V _rhs20042=j::get(_v_16170_c,this->_literals[1]);return j::binary("+",_lhs20041,_rhs20042);})();
return V{};
},2),V(0.0)};return j::call(_method,_params20045,_receiver20043);})()});})();
(void)(([&]()->V{V _receiver20052=_v_16161_idat;V _method20053=this->_literals[80];V _method=j::get(_receiver20052,_method20053);j::Args _params20054=j::Args{j::function([=](const j::Args &_args_fn16171,const V &_receiver_fn16171,const V &_self_fn16171) mutable ->V{
V _v_16172_at;
V _v_16173_c;
_v_16172_at=_args_fn16171[0];
_v_16173_c=_args_fn16171[1];
return (([&]()->V{V _receiver20047=_v_16167_all.get();V _method20048=this->_literals[63];V _method=j::get(_receiver20047,_method20048);j::Args _params20049=j::Args{_v_16173_c,_v_16172_at};return j::call(_method,_params20049,_receiver20047);})(),([&]()->V{V _lhs20050=_v_16172_at;V _rhs20051=j::get(_v_16173_c,this->_literals[1]);return j::binary("+",_lhs20050,_rhs20051);})());
return V{};
},2),V(0.0)};return j::call(_method,_params20054,_receiver20052);})());
_v_16174_need=V(0.0);
{for(const auto &_item20055:j::elements((j::truth(_v_16158_interlace)?this->_v_16140_ADAM7.get():([&]()->V{j::Args _array20056;_array20056.push_back(([&]()->V{j::Args _array20057;_array20057.push_back(V(0.0));_array20057.push_back(V(0.0));_array20057.push_back(V(1.0));_array20057.push_back(V(1.0));return j::array(std::move(_array20057));})());return j::array(std::move(_array20056));})()))){V _v_16175_x0;
V _v_16176_y0;
V _v_16177_dx;
V _v_16178_dy;
V _pattern20058=_item20055;
_v_16175_x0=j::get(_pattern20058,V(0));
_v_16176_y0=j::get(_pattern20058,V(1));
_v_16177_dx=j::get(_pattern20058,V(2));
_v_16178_dy=j::get(_pattern20058,V(3));
{
V _v_16179_w;
V _v_16180_h;
_v_16179_w=([&]()->V{V _number20063=([&]()->V{V _lhs20064=([&]()->V{V _lhs20066=_v_16154_width;V _rhs20067=_v_16175_x0;return V(j::number(_lhs20066)-j::number(_rhs20067));})();V _rhs20065=_v_16177_dx;return V(j::number(_lhs20064)/j::number(_rhs20065));})();return V(std::ceil(j::number(_number20063)));})();
_v_16180_h=([&]()->V{V _number20072=([&]()->V{V _lhs20073=([&]()->V{V _lhs20075=_v_16155_height;V _rhs20076=_v_16176_y0;return V(j::number(_lhs20075)-j::number(_rhs20076));})();V _rhs20074=_v_16178_dy;return V(j::number(_lhs20073)/j::number(_rhs20074));})();return V(std::ceil(j::number(_number20072)));})();
if(j::truth(([&]()->V{V _logical20077=([&]()->V{V _lhs20078=_v_16179_w;V _rhs20079=V(0.0);return j::binary(">",_lhs20078,_rhs20079);})();return j::truth(_logical20077)?([&]()->V{V _lhs20080=_v_16180_h;V _rhs20081=V(0.0);return j::binary(">",_lhs20080,_rhs20081);})():_logical20077;})())){(void)((_v_16174_need=j::binary("+",_v_16174_need,([&]()->V{V _lhs20083=_v_16180_h;V _rhs20084=([&]()->V{V _lhs20085=V(1.0);V _rhs20086=([&]()->V{V _number20093=([&]()->V{V _lhs20094=([&]()->V{V _lhs20096=([&]()->V{V _lhs20098=_v_16179_w;V _rhs20099=_v_16166_channels;return V(j::number(_lhs20098)*j::number(_rhs20099));})();V _rhs20097=_v_16156_depth.get();return V(j::number(_lhs20096)*j::number(_rhs20097));})();V _rhs20095=V(8.0);return V(j::number(_lhs20094)/j::number(_rhs20095));})();return V(std::ceil(j::number(_number20093)));})();return j::binary("+",_lhs20085,_rhs20086);})();return V(j::number(_lhs20083)*j::number(_rhs20084));})())));
}

}
}}
_v_16181_raw=([&]()->V{V _callee20100=this->_v_16225_inflate.get();return j::call(_callee20100,j::Args{_v_16167_all.get(),_v_16174_need});})();
_v_16182_sample=j::function([=](const j::Args &_args_fn16183,const V &_receiver_fn16183,const V &_self_fn16183) mutable ->V{
V _v_16184_line;
V _v_16185_k;
_v_16184_line=_args_fn16183[0];
_v_16185_k=_args_fn16183[1];
return (j::truth(([&]()->V{V _lhs20101=_v_16156_depth.get();V _rhs20102=V(16.0);return V(j::equal(_lhs20101,_rhs20102,true));})())?([&]()->V{V _lhs20103=([&]()->V{V _lhs20105=j::get(_v_16184_line,([&]()->V{V _lhs20107=V(2.0);V _rhs20108=_v_16185_k;return V(j::number(_lhs20107)*j::number(_rhs20108));})());V _rhs20106=V(8.0);return V(double(int32_t(j::u32(_lhs20105)<<(j::u32(_rhs20106)&31))));})();V _rhs20104=j::get(_v_16184_line,([&]()->V{V _lhs20109=([&]()->V{V _lhs20111=V(2.0);V _rhs20112=_v_16185_k;return V(j::number(_lhs20111)*j::number(_rhs20112));})();V _rhs20110=V(1.0);return j::binary("+",_lhs20109,_rhs20110);})());return V(int(j::i32(_lhs20103)|j::i32(_rhs20104)));})():(j::truth(([&]()->V{V _lhs20113=_v_16156_depth.get();V _rhs20114=V(8.0);return V(j::equal(_lhs20113,_rhs20114,true));})())?j::get(_v_16184_line,_v_16185_k):([&]()->V{V _lhs20115=([&]()->V{V _lhs20117=j::get(_v_16184_line,([&]()->V{V _lhs20119=([&]()->V{V _lhs20121=_v_16185_k;V _rhs20122=_v_16156_depth.get();return V(j::number(_lhs20121)*j::number(_rhs20122));})();V _rhs20120=V(3.0);return V(int(j::i32(_lhs20119)>>(j::u32(_rhs20120)&31)));})());V _rhs20118=([&]()->V{V _lhs20123=([&]()->V{V _lhs20125=V(8.0);V _rhs20126=_v_16156_depth.get();return V(j::number(_lhs20125)-j::number(_rhs20126));})();V _rhs20124=([&]()->V{V _lhs20127=([&]()->V{V _lhs20129=_v_16185_k;V _rhs20130=_v_16156_depth.get();return V(j::number(_lhs20129)*j::number(_rhs20130));})();V _rhs20128=V(7.0);return V(int(j::i32(_lhs20127)&j::i32(_rhs20128)));})();return V(j::number(_lhs20123)-j::number(_rhs20124));})();return V(int(j::i32(_lhs20117)>>(j::u32(_rhs20118)&31)));})();V _rhs20116=([&]()->V{V _lhs20131=([&]()->V{V _lhs20133=V(1.0);V _rhs20134=_v_16156_depth.get();return V(double(int32_t(j::u32(_lhs20133)<<(j::u32(_rhs20134)&31))));})();V _rhs20132=V(1.0);return V(j::number(_lhs20131)-j::number(_rhs20132));})();return V(int(j::i32(_lhs20115)&j::i32(_rhs20116)));})()));
return V{};
},2);
_v_16186_max.get()=([&]()->V{V _lhs20135=([&]()->V{V _lhs20137=V(1.0);V _rhs20138=_v_16156_depth.get();return V(double(int32_t(j::u32(_lhs20137)<<(j::u32(_rhs20138)&31))));})();V _rhs20136=V(1.0);return V(j::number(_lhs20135)-j::number(_rhs20136));})();
_v_16187_eight=j::function([=](const j::Args &_args_fn16188,const V &_receiver_fn16188,const V &_self_fn16188) mutable ->V{
V _v_16189_v;
_v_16189_v=_args_fn16188[0];
return (j::truth(([&]()->V{V _lhs20139=_v_16156_depth.get();V _rhs20140=V(16.0);return V(j::equal(_lhs20139,_rhs20140,true));})())?([&]()->V{V _lhs20141=_v_16189_v;V _rhs20142=V(8.0);return V(int(j::i32(_lhs20141)>>(j::u32(_rhs20142)&31)));})():(j::truth(([&]()->V{V _lhs20143=_v_16156_depth.get();V _rhs20144=V(8.0);return V(j::equal(_lhs20143,_rhs20144,true));})())?_v_16189_v:([&]()->V{V _lhs20145=([&]()->V{V _lhs20147=_v_16189_v;V _rhs20148=V(255.0);return V(j::number(_lhs20147)*j::number(_rhs20148));})();V _rhs20146=_v_16186_max.get();return V(j::number(_lhs20145)/j::number(_rhs20146));})()));
return V{};
},1);
_v_16190_key=(j::truth(([&]()->V{V _logical20149=_v_16160_trns.get();return j::truth(_logical20149)?([&]()->V{V _logical20150=([&]()->V{V _lhs20151=_v_16157_type;V _rhs20152=V(0.0);return V(j::equal(_lhs20151,_rhs20152,true));})();return !j::truth(_logical20150)?([&]()->V{V _lhs20153=_v_16157_type;V _rhs20154=V(2.0);return V(j::equal(_lhs20153,_rhs20154,true));})():_logical20150;})():_logical20149;})())?([&]()->V{V _receiver20168=j::builtin("Array");V _method20169=this->_literals[53];V _method=j::get(_receiver20168,_method20169);j::Args _params20170=j::Args{([&]()->V{V _obj20155=j::object();j::put(_obj20155,this->_literals[1],_v_16166_channels);return _obj20155;})(),j::function([=](const j::Args &_args_fn16191,const V &_receiver_fn16191,const V &_self_fn16191) mutable ->V{
V _v_16192__;
V _v_16193_i;
_v_16192__=_args_fn16191[0];
_v_16193_i=_args_fn16191[1];
return ([&]()->V{V _lhs20156=([&]()->V{V _lhs20158=([&]()->V{V _lhs20160=j::get(_v_16160_trns.get(),([&]()->V{V _lhs20162=V(2.0);V _rhs20163=_v_16193_i;return V(j::number(_lhs20162)*j::number(_rhs20163));})());V _rhs20161=V(8.0);return V(double(int32_t(j::u32(_lhs20160)<<(j::u32(_rhs20161)&31))));})();V _rhs20159=j::get(_v_16160_trns.get(),([&]()->V{V _lhs20164=([&]()->V{V _lhs20166=V(2.0);V _rhs20167=_v_16193_i;return V(j::number(_lhs20166)*j::number(_rhs20167));})();V _rhs20165=V(1.0);return j::binary("+",_lhs20164,_rhs20165);})());return V(int(j::i32(_lhs20158)|j::i32(_rhs20159)));})();V _rhs20157=_v_16186_max.get();return V(int(j::i32(_lhs20156)&j::i32(_rhs20157)));})();
return V{};
},2)};return j::call(_method,_params20170,_receiver20168);})():V::null());
_v_16194_out=([&]()->V{V _callee20175=j::builtin("Uint8ClampedArray");return j::construct(_callee20175,j::Args{([&]()->V{V _lhs20171=([&]()->V{V _lhs20173=_v_16154_width;V _rhs20174=_v_16155_height;return V(j::number(_lhs20173)*j::number(_rhs20174));})();V _rhs20172=V(4.0);return V(j::number(_lhs20171)*j::number(_rhs20172));})()});})();
_v_16195_bits=([&]()->V{V _lhs20176=_v_16166_channels;V _rhs20177=_v_16156_depth.get();return V(j::number(_lhs20176)*j::number(_rhs20177));})();
_v_16196_back=([&]()->V{V _receiver20182=j::builtin("Math");V _method20183=this->_literals[60];V _method=j::get(_receiver20182,_method20183);j::Args _params20184=j::Args{V(1.0),([&]()->V{V _lhs20178=_v_16195_bits;V _rhs20179=V(3.0);return V(int(j::i32(_lhs20178)>>(j::u32(_rhs20179)&31)));})()};return j::call(_method,_params20184,_receiver20182);})();
_v_16197_at=V(0.0);
{for(const auto &_item20185:j::elements((j::truth(_v_16158_interlace)?this->_v_16140_ADAM7.get():([&]()->V{j::Args _array20186;_array20186.push_back(([&]()->V{j::Args _array20187;_array20187.push_back(V(0.0));_array20187.push_back(V(0.0));_array20187.push_back(V(1.0));_array20187.push_back(V(1.0));return j::array(std::move(_array20187));})());return j::array(std::move(_array20186));})()))){V _v_16198_x0;
V _v_16199_y0;
V _v_16200_dx;
V _v_16201_dy;
V _pattern20188=_item20185;
_v_16198_x0=j::get(_pattern20188,V(0));
_v_16199_y0=j::get(_pattern20188,V(1));
_v_16200_dx=j::get(_pattern20188,V(2));
_v_16201_dy=j::get(_pattern20188,V(3));
{
V _v_16202_w;
V _v_16203_h;
V _v_16204_stride;
V _v_16205_above;
V _v_16206_line;
_v_16202_w=([&]()->V{V _number20193=([&]()->V{V _lhs20194=([&]()->V{V _lhs20196=_v_16154_width;V _rhs20197=_v_16198_x0;return V(j::number(_lhs20196)-j::number(_rhs20197));})();V _rhs20195=_v_16200_dx;return V(j::number(_lhs20194)/j::number(_rhs20195));})();return V(std::ceil(j::number(_number20193)));})();
_v_16203_h=([&]()->V{V _number20202=([&]()->V{V _lhs20203=([&]()->V{V _lhs20205=_v_16155_height;V _rhs20206=_v_16199_y0;return V(j::number(_lhs20205)-j::number(_rhs20206));})();V _rhs20204=_v_16201_dy;return V(j::number(_lhs20203)/j::number(_rhs20204));})();return V(std::ceil(j::number(_number20202)));})();
if(j::truth(([&]()->V{V _logical20207=([&]()->V{V _lhs20208=_v_16202_w;V _rhs20209=V(0.0);return j::binary("<=",_lhs20208,_rhs20209);})();return !j::truth(_logical20207)?([&]()->V{V _lhs20210=_v_16203_h;V _rhs20211=V(0.0);return j::binary("<=",_lhs20210,_rhs20211);})():_logical20207;})())){continue;
}
_v_16204_stride=([&]()->V{V _number20216=([&]()->V{V _lhs20217=([&]()->V{V _lhs20219=_v_16202_w;V _rhs20220=_v_16195_bits;return V(j::number(_lhs20219)*j::number(_rhs20220));})();V _rhs20218=V(8.0);return V(j::number(_lhs20217)/j::number(_rhs20218));})();return V(std::ceil(j::number(_number20216)));})();
_v_16205_above=([&]()->V{V _callee20221=j::builtin("Uint8Array");return j::construct(_callee20221,j::Args{_v_16204_stride});})();
_v_16206_line=([&]()->V{V _callee20222=j::builtin("Uint8Array");return j::construct(_callee20222,j::Args{_v_16204_stride});})();
{V _v_16207_y;
_v_16207_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs20223=_v_16207_y;V _rhs20224=_v_16203_h;return j::binary("<",_lhs20223,_rhs20224);})());(void)(j::increment(_v_16207_y,1,false))){
V _v_16208_filter;
if(j::truth(([&]()->V{V _lhs20225=([&]()->V{V _lhs20227=([&]()->V{V _lhs20229=_v_16197_at;V _rhs20230=V(1.0);return j::binary("+",_lhs20229,_rhs20230);})();V _rhs20228=_v_16204_stride;return j::binary("+",_lhs20227,_rhs20228);})();V _rhs20226=j::get(_v_16181_raw,this->_literals[1]);return j::binary(">",_lhs20225,_rhs20226);})())){(void)(([&]()->V{V _callee20231=_v_16147_bad;return j::call(_callee20231,j::Args{this->_literals[219]});})());
}
_v_16208_filter=j::get(_v_16181_raw,j::increment(_v_16197_at,1,false));
if(j::truth(([&]()->V{V _lhs20232=_v_16208_filter;V _rhs20233=V(4.0);return j::binary(">",_lhs20232,_rhs20233);})())){(void)(([&]()->V{V _callee20235=_v_16147_bad;return j::call(_callee20235,j::Args{([&]()->V{std::u16string _text20234;_text20234+=u"a row has filter ";_text20234+=j::string(_v_16208_filter);_text20234+=u", which PNG has none of";return V(std::move(_text20234));})()});})());
}
{V _v_16209_i;
_v_16209_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs20236=_v_16209_i;V _rhs20237=_v_16204_stride;return j::binary("<",_lhs20236,_rhs20237);})());(void)(j::increment(_v_16209_i,1,false))){
V _v_16210_a;
V _v_16211_b;
V _v_16212_c;
V _v_16213_v;
_v_16210_a=(j::truth(([&]()->V{V _lhs20238=_v_16209_i;V _rhs20239=_v_16196_back;return j::binary(">=",_lhs20238,_rhs20239);})())?j::get(_v_16206_line,([&]()->V{V _lhs20240=_v_16209_i;V _rhs20241=_v_16196_back;return V(j::number(_lhs20240)-j::number(_rhs20241));})()):V(0.0));
_v_16211_b=j::get(_v_16205_above,_v_16209_i);
_v_16212_c=(j::truth(([&]()->V{V _lhs20242=_v_16209_i;V _rhs20243=_v_16196_back;return j::binary(">=",_lhs20242,_rhs20243);})())?j::get(_v_16205_above,([&]()->V{V _lhs20244=_v_16209_i;V _rhs20245=_v_16196_back;return V(j::number(_lhs20244)-j::number(_rhs20245));})()):V(0.0));
_v_16213_v=j::get(_v_16181_raw,([&]()->V{V _lhs20246=_v_16197_at;V _rhs20247=_v_16209_i;return j::binary("+",_lhs20246,_rhs20247);})());
if(j::truth(([&]()->V{V _lhs20248=_v_16208_filter;V _rhs20249=V(1.0);return V(j::equal(_lhs20248,_rhs20249,true));})())){(void)((_v_16213_v=j::binary("+",_v_16213_v,_v_16210_a)));
}else {if(j::truth(([&]()->V{V _lhs20251=_v_16208_filter;V _rhs20252=V(2.0);return V(j::equal(_lhs20251,_rhs20252,true));})())){(void)((_v_16213_v=j::binary("+",_v_16213_v,_v_16211_b)));
}else {if(j::truth(([&]()->V{V _lhs20254=_v_16208_filter;V _rhs20255=V(3.0);return V(j::equal(_lhs20254,_rhs20255,true));})())){(void)((_v_16213_v=j::binary("+",_v_16213_v,([&]()->V{V _lhs20257=([&]()->V{V _lhs20259=_v_16210_a;V _rhs20260=_v_16211_b;return j::binary("+",_lhs20259,_rhs20260);})();V _rhs20258=V(1.0);return V(int(j::i32(_lhs20257)>>(j::u32(_rhs20258)&31)));})())));
}else {if(j::truth(([&]()->V{V _lhs20261=_v_16208_filter;V _rhs20262=V(4.0);return V(j::equal(_lhs20261,_rhs20262,true));})())){
V _v_16214_pa;
V _v_16215_pb;
V _v_16216_pc;
_v_16214_pa=([&]()->V{V _number20265=([&]()->V{V _lhs20266=_v_16211_b;V _rhs20267=_v_16212_c;return V(j::number(_lhs20266)-j::number(_rhs20267));})();return V(std::fabs(j::number(_number20265)));})();
_v_16215_pb=([&]()->V{V _number20270=([&]()->V{V _lhs20271=_v_16210_a;V _rhs20272=_v_16212_c;return V(j::number(_lhs20271)-j::number(_rhs20272));})();return V(std::fabs(j::number(_number20270)));})();
_v_16216_pc=([&]()->V{V _number20279=([&]()->V{V _lhs20280=([&]()->V{V _lhs20282=_v_16210_a;V _rhs20283=_v_16211_b;return j::binary("+",_lhs20282,_rhs20283);})();V _rhs20281=([&]()->V{V _lhs20284=V(2.0);V _rhs20285=_v_16212_c;return V(j::number(_lhs20284)*j::number(_rhs20285));})();return V(j::number(_lhs20280)-j::number(_rhs20281));})();return V(std::fabs(j::number(_number20279)));})();
(void)((_v_16213_v=j::binary("+",_v_16213_v,(j::truth(([&]()->V{V _logical20287=([&]()->V{V _lhs20288=_v_16214_pa;V _rhs20289=_v_16215_pb;return j::binary("<=",_lhs20288,_rhs20289);})();return j::truth(_logical20287)?([&]()->V{V _lhs20290=_v_16214_pa;V _rhs20291=_v_16216_pc;return j::binary("<=",_lhs20290,_rhs20291);})():_logical20287;})())?_v_16210_a:(j::truth(([&]()->V{V _lhs20292=_v_16215_pb;V _rhs20293=_v_16216_pc;return j::binary("<=",_lhs20292,_rhs20293);})())?_v_16211_b:_v_16212_c)))));

}

}
}
}
(void)(([&]()->V{V _base20295=_v_16206_line;V _key20296=_v_16209_i;V _assign20294=_v_16213_v;return j::put(_base20295,_key20296,_assign20294);})());

}
}
(void)((_v_16197_at=j::binary("+",_v_16197_at,_v_16204_stride)));
{V _v_16217_x;
_v_16217_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs20298=_v_16217_x;V _rhs20299=_v_16202_w;return j::binary("<",_lhs20298,_rhs20299);})());(void)(j::increment(_v_16217_x,1,false))){
V _v_16218_o;
V _v_16219_k;
_v_16218_o=([&]()->V{V _lhs20300=([&]()->V{V _lhs20302=([&]()->V{V _lhs20304=([&]()->V{V _lhs20306=([&]()->V{V _lhs20308=_v_16199_y0;V _rhs20309=([&]()->V{V _lhs20310=_v_16207_y;V _rhs20311=_v_16201_dy;return V(j::number(_lhs20310)*j::number(_rhs20311));})();return j::binary("+",_lhs20308,_rhs20309);})();V _rhs20307=_v_16154_width;return V(j::number(_lhs20306)*j::number(_rhs20307));})();V _rhs20305=_v_16198_x0;return j::binary("+",_lhs20304,_rhs20305);})();V _rhs20303=([&]()->V{V _lhs20312=_v_16217_x;V _rhs20313=_v_16200_dx;return V(j::number(_lhs20312)*j::number(_rhs20313));})();return j::binary("+",_lhs20302,_rhs20303);})();V _rhs20301=V(4.0);return V(j::number(_lhs20300)*j::number(_rhs20301));})();
_v_16219_k=([&]()->V{V _lhs20314=_v_16217_x;V _rhs20315=_v_16166_channels;return V(j::number(_lhs20314)*j::number(_rhs20315));})();
if(j::truth(([&]()->V{V _lhs20316=_v_16157_type;V _rhs20317=V(3.0);return V(j::equal(_lhs20316,_rhs20317,true));})())){
V _v_16220_i;
_v_16220_i=([&]()->V{V _callee20318=_v_16182_sample;return j::call(_callee20318,j::Args{_v_16206_line,_v_16217_x});})();
(void)((([&]()->V{V _base20320=_v_16194_out;V _key20321=_v_16218_o;V _assign20319=([&]()->V{V _logical20322=j::get(_v_16159_plte,([&]()->V{V _lhs20323=V(3.0);V _rhs20324=_v_16220_i;return V(j::number(_lhs20323)*j::number(_rhs20324));})());return j::nullish(_logical20322)?V(0.0):_logical20322;})();return j::put(_base20320,_key20321,_assign20319);})(),([&]()->V{V _base20326=_v_16194_out;V _key20327=([&]()->V{V _lhs20328=_v_16218_o;V _rhs20329=V(1.0);return j::binary("+",_lhs20328,_rhs20329);})();V _assign20325=([&]()->V{V _logical20330=j::get(_v_16159_plte,([&]()->V{V _lhs20331=([&]()->V{V _lhs20333=V(3.0);V _rhs20334=_v_16220_i;return V(j::number(_lhs20333)*j::number(_rhs20334));})();V _rhs20332=V(1.0);return j::binary("+",_lhs20331,_rhs20332);})());return j::nullish(_logical20330)?V(0.0):_logical20330;})();return j::put(_base20326,_key20327,_assign20325);})(),([&]()->V{V _base20336=_v_16194_out;V _key20337=([&]()->V{V _lhs20338=_v_16218_o;V _rhs20339=V(2.0);return j::binary("+",_lhs20338,_rhs20339);})();V _assign20335=([&]()->V{V _logical20340=j::get(_v_16159_plte,([&]()->V{V _lhs20341=([&]()->V{V _lhs20343=V(3.0);V _rhs20344=_v_16220_i;return V(j::number(_lhs20343)*j::number(_rhs20344));})();V _rhs20342=V(2.0);return j::binary("+",_lhs20341,_rhs20342);})());return j::nullish(_logical20340)?V(0.0):_logical20340;})();return j::put(_base20336,_key20337,_assign20335);})(),([&]()->V{V _base20346=_v_16194_out;V _key20347=([&]()->V{V _lhs20348=_v_16218_o;V _rhs20349=V(3.0);return j::binary("+",_lhs20348,_rhs20349);})();V _assign20345=([&]()->V{V _logical20350=([&]()->V{V _chain20351=_v_16160_trns.get();if(j::nullish(_chain20351))return V{};V _chain20352=j::get(_chain20351,_v_16220_i);return _chain20352;})();return j::nullish(_logical20350)?V(255.0):_logical20350;})();return j::put(_base20346,_key20347,_assign20345);})()));

}
else {if(j::truth(([&]()->V{V _logical20353=([&]()->V{V _lhs20354=_v_16157_type;V _rhs20355=V(0.0);return V(j::equal(_lhs20354,_rhs20355,true));})();return !j::truth(_logical20353)?([&]()->V{V _lhs20356=_v_16157_type;V _rhs20357=V(4.0);return V(j::equal(_lhs20356,_rhs20357,true));})():_logical20353;})())){
V _v_16221_g;
_v_16221_g=([&]()->V{V _callee20358=_v_16182_sample;return j::call(_callee20358,j::Args{_v_16206_line,_v_16219_k});})();
(void)(([&]()->V{V _base20360=_v_16194_out;V _key20361=_v_16218_o;V _assign20359=([&]()->V{V _base20363=_v_16194_out;V _key20364=([&]()->V{V _lhs20365=_v_16218_o;V _rhs20366=V(1.0);return j::binary("+",_lhs20365,_rhs20366);})();V _assign20362=([&]()->V{V _base20368=_v_16194_out;V _key20369=([&]()->V{V _lhs20370=_v_16218_o;V _rhs20371=V(2.0);return j::binary("+",_lhs20370,_rhs20371);})();V _assign20367=([&]()->V{V _callee20372=_v_16187_eight;return j::call(_callee20372,j::Args{_v_16221_g});})();return j::put(_base20368,_key20369,_assign20367);})();return j::put(_base20363,_key20364,_assign20362);})();return j::put(_base20360,_key20361,_assign20359);})());
(void)(([&]()->V{V _base20374=_v_16194_out;V _key20375=([&]()->V{V _lhs20376=_v_16218_o;V _rhs20377=V(3.0);return j::binary("+",_lhs20376,_rhs20377);})();V _assign20373=(j::truth(([&]()->V{V _lhs20378=_v_16157_type;V _rhs20379=V(4.0);return V(j::equal(_lhs20378,_rhs20379,true));})())?([&]()->V{V _callee20383=_v_16187_eight;return j::call(_callee20383,j::Args{([&]()->V{V _callee20382=_v_16182_sample;return j::call(_callee20382,j::Args{_v_16206_line,([&]()->V{V _lhs20380=_v_16219_k;V _rhs20381=V(1.0);return j::binary("+",_lhs20380,_rhs20381);})()});})()});})():(j::truth(([&]()->V{V _logical20384=_v_16190_key;return j::truth(_logical20384)?([&]()->V{V _lhs20385=_v_16221_g;V _rhs20386=j::get(_v_16190_key,V(0.0));return V(j::equal(_lhs20385,_rhs20386,true));})():_logical20384;})())?V(0.0):V(255.0)));return j::put(_base20374,_key20375,_assign20373);})());

}
else {
V _v_16222_r;
V _v_16223_g;
V _v_16224_b;
_v_16222_r=([&]()->V{V _callee20387=_v_16182_sample;return j::call(_callee20387,j::Args{_v_16206_line,_v_16219_k});})();
_v_16223_g=([&]()->V{V _callee20390=_v_16182_sample;return j::call(_callee20390,j::Args{_v_16206_line,([&]()->V{V _lhs20388=_v_16219_k;V _rhs20389=V(1.0);return j::binary("+",_lhs20388,_rhs20389);})()});})();
_v_16224_b=([&]()->V{V _callee20393=_v_16182_sample;return j::call(_callee20393,j::Args{_v_16206_line,([&]()->V{V _lhs20391=_v_16219_k;V _rhs20392=V(2.0);return j::binary("+",_lhs20391,_rhs20392);})()});})();
(void)((([&]()->V{V _base20395=_v_16194_out;V _key20396=_v_16218_o;V _assign20394=([&]()->V{V _callee20397=_v_16187_eight;return j::call(_callee20397,j::Args{_v_16222_r});})();return j::put(_base20395,_key20396,_assign20394);})(),([&]()->V{V _base20399=_v_16194_out;V _key20400=([&]()->V{V _lhs20401=_v_16218_o;V _rhs20402=V(1.0);return j::binary("+",_lhs20401,_rhs20402);})();V _assign20398=([&]()->V{V _callee20403=_v_16187_eight;return j::call(_callee20403,j::Args{_v_16223_g});})();return j::put(_base20399,_key20400,_assign20398);})(),([&]()->V{V _base20405=_v_16194_out;V _key20406=([&]()->V{V _lhs20407=_v_16218_o;V _rhs20408=V(2.0);return j::binary("+",_lhs20407,_rhs20408);})();V _assign20404=([&]()->V{V _callee20409=_v_16187_eight;return j::call(_callee20409,j::Args{_v_16224_b});})();return j::put(_base20405,_key20406,_assign20404);})()));
(void)(([&]()->V{V _base20411=_v_16194_out;V _key20412=([&]()->V{V _lhs20413=_v_16218_o;V _rhs20414=V(3.0);return j::binary("+",_lhs20413,_rhs20414);})();V _assign20410=(j::truth(([&]()->V{V _lhs20415=_v_16157_type;V _rhs20416=V(6.0);return V(j::equal(_lhs20415,_rhs20416,true));})())?([&]()->V{V _callee20420=_v_16187_eight;return j::call(_callee20420,j::Args{([&]()->V{V _callee20419=_v_16182_sample;return j::call(_callee20419,j::Args{_v_16206_line,([&]()->V{V _lhs20417=_v_16219_k;V _rhs20418=V(3.0);return j::binary("+",_lhs20417,_rhs20418);})()});})()});})():(j::truth(([&]()->V{V _logical20421=([&]()->V{V _logical20422=([&]()->V{V _logical20423=_v_16190_key;return j::truth(_logical20423)?([&]()->V{V _lhs20424=_v_16222_r;V _rhs20425=j::get(_v_16190_key,V(0.0));return V(j::equal(_lhs20424,_rhs20425,true));})():_logical20423;})();return j::truth(_logical20422)?([&]()->V{V _lhs20426=_v_16223_g;V _rhs20427=j::get(_v_16190_key,V(1.0));return V(j::equal(_lhs20426,_rhs20427,true));})():_logical20422;})();return j::truth(_logical20421)?([&]()->V{V _lhs20428=_v_16224_b;V _rhs20429=j::get(_v_16190_key,V(2.0));return V(j::equal(_lhs20428,_rhs20429,true));})():_logical20421;})())?V(0.0):V(255.0)));return j::put(_base20411,_key20412,_assign20410);})());

}

}

}
}
(void)(([&]()->V{V _assign20430=([&]()->V{j::Args _array20431;_array20431.push_back(_v_16206_line);_array20431.push_back(_v_16205_above);return j::array(std::move(_array20431));})();V _pattern20432=_assign20430;
_v_16205_above=j::get(_pattern20432,V(0));
_v_16206_line=j::get(_pattern20432,V(1));
return _assign20430;})());

}
}

}
}}
return ([&]()->V{V _obj20433=j::object();j::put(_obj20433,this->_literals[45],_v_16194_out);j::put(_obj20433,this->_literals[20],_v_16154_width);j::put(_obj20433,this->_literals[21],_v_16155_height);return _obj20433;})();

}

return V{};
},1);
this->_v_16225_inflate.get()=j::function([](const j::Args &_a,const V &,const V &)->V{return j::inflate_bytes(_a[0],size_t(j::number(_a[1])));});
auto &_import1129=j::module("kit/core");
this->_v_15262_MAX=_import1129.exported("MAX");
this->_v_15263_NONE=_import1129.exported("NONE");
this->_v_15264_and=_import1129.exported("and");
this->_v_15265_checkMeta=_import1129.exported("checkMeta");
this->_v_15266_colorOf=_import1129.exported("colorOf");
this->_v_15267_colorsOf=_import1129.exported("colorsOf");
this->_v_15268_fail=_import1129.exported("fail");
this->_v_15269_hex=_import1129.exported("hex");
this->_v_15270_isHex=_import1129.exported("isHex");
this->_v_15271_piece=_import1129.exported("piece");
this->_v_15272_rampOf=_import1129.exported("ramp");
auto &_import1336=j::module("kit/glyphs");
this->_v_15273_CH=_import1336.exported("CH");
this->_v_15274_CW=_import1336.exported("CW");
this->_v_15275_FILL=_import1336.exported("FILL");
this->_v_15276_GLYPHS=_import1336.exported("GLYPHS");
this->_v_15277_GX=_import1336.exported("GX");
this->_v_15278_GY=_import1336.exported("GY");
this->exports["drawing"]=this->_v_15338_drawing;
this->exports["fromDrawing"]=this->_v_15926_fromDrawing;
this->exports["drawImage"]=this->_v_15951_drawImage;
this->exports["imagePalette"]=this->_v_15968_imagePalette;
this->exports["fromPixels"]=this->_v_15979_fromPixels;
this->exports["fromImage"]=this->_v_16031_fromImage;
this->exports["readPng"]=this->_v_16144_readPng;
this->_v_15279_MARGIN.get()=([&]()->V{V _obj20434=j::object();j::put(_obj20434,this->_literals[47],V(2.0));j::put(_obj20434,this->_literals[49],V(1.0));return _obj20434;})();
this->_v_15280_RAMP.get()=this->_literals[220];
this->_v_15281_SUB.get()=V(2.0);
this->_v_15282_NEAR.get()=V(42.0);
this->_v_15283_SHARE.get()=V(0.6);
this->_v_15284_SIDE.get()=V(2400.0);
this->_v_15285_LARGEST.get()=V(4096.0);
this->_v_15286_START.get()=V(0.5);
this->_v_15287_PASS.get()=V(2.0);
this->_v_15288_HALF.get()=V(5.0);
this->_v_15289_LEAN.get()=V(0.9);
this->_v_15290_SOLID.get()=this->_literals[221];
this->_v_15291_SLASH.get()=V(47.0);
this->_v_15292_whole.get()=j::function([=](const j::Args &_args_fn15293,const V &_receiver_fn15293,const V &_self_fn15293) mutable ->V{
V _v_15294_v;
V _v_15295_lo;
V _v_15296_hi;
_v_15294_v=_args_fn15293[0];
_v_15295_lo=_args_fn15293[1];
_v_15296_hi=_args_fn15293[2];
return ([&]()->V{V _logical20435=([&]()->V{V _logical20436=([&]()->V{V _logical20437=([&]()->V{V _lhs20438=j::unary("typeof",_v_15294_v);V _rhs20439=this->_literals[17];return V(j::equal(_lhs20438,_rhs20439,true));})();return j::truth(_logical20437)?([&]()->V{V _receiver20440=j::builtin("Number");V _method20441=this->_literals[44];V _method=j::get(_receiver20440,_method20441);j::Args _params20442=j::Args{_v_15294_v};return j::call(_method,_params20442,_receiver20440);})():_logical20437;})();return j::truth(_logical20436)?([&]()->V{V _lhs20443=_v_15294_v;V _rhs20444=_v_15295_lo;return j::binary(">=",_lhs20443,_rhs20444);})():_logical20436;})();return j::truth(_logical20435)?([&]()->V{V _lhs20445=_v_15294_v;V _rhs20446=_v_15296_hi;return j::binary("<=",_lhs20445,_rhs20446);})():_logical20435;})();
return V{};
},3);
this->_v_15297_CONTROL.get()=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f]","");
this->_v_15302_NEAR_NAMES.get()=([&]()->V{V _obj20447=j::object();j::put(_obj20447,this->_literals[222],this->_literals[26]);j::put(_obj20447,this->_literals[223],this->_literals[26]);j::put(_obj20447,this->_literals[54],this->_literals[26]);j::put(_obj20447,this->_literals[34],this->_literals[20]);j::put(_obj20447,this->_literals[224],this->_literals[20]);j::put(_obj20447,this->_literals[22],this->_literals[21]);j::put(_obj20447,this->_literals[42],this->_literals[16]);j::put(_obj20447,this->_literals[108],this->_literals[16]);j::put(_obj20447,this->_literals[15],this->_literals[16]);return _obj20447;})();
this->_v_15310_OPTIONS.get()=([&]()->V{j::Args _array20448;_array20448.push_back(this->_literals[20]);_array20448.push_back(this->_literals[21]);_array20448.push_back(this->_literals[23]);_array20448.push_back(this->_literals[24]);_array20448.push_back(this->_literals[26]);_array20448.push_back(this->_literals[16]);_array20448.push_back(this->_literals[27]);_array20448.push_back(this->_literals[28]);_array20448.push_back(this->_literals[8]);_array20448.push_back(this->_literals[31]);_array20448.push_back(this->_literals[32]);return j::array(std::move(_array20448));})();
this->_v_15315_checkInvert.get()=j::function([=](const j::Args &_args_fn15316,const V &_receiver_fn15316,const V &_self_fn15316) mutable ->V{
V _v_15317_invert;
_v_15317_invert=_args_fn15316[0];
{
if(j::truth(([&]()->V{V _logical20449=([&]()->V{V _logical20450=([&]()->V{V _lhs20451=_v_15317_invert;V _rhs20452=V(true);return V(!j::equal(_lhs20451,_rhs20452,true));})();return j::truth(_logical20450)?([&]()->V{V _lhs20453=_v_15317_invert;V _rhs20454=V(false);return V(!j::equal(_lhs20453,_rhs20454,true));})():_logical20450;})();return j::truth(_logical20449)?([&]()->V{V _lhs20455=_v_15317_invert;V _rhs20456=this->_literals[29];return V(!j::equal(_lhs20455,_rhs20456,true));})():_logical20449;})())){(void)(([&]()->V{V _callee20459=this->_v_15268_fail.get();return j::call(_callee20459,j::Args{([&]()->V{std::u16string _text20457;_text20457+=u"invert takes true, false or \"auto\", not ";_text20457+=j::string(([&]()->V{V _callee20458=this->_v_15298_shown.get();return j::call(_callee20458,j::Args{_v_15317_invert});})());_text20457+=u"";return V(std::move(_text20457));})()});})());
}

}

return V{};
},1);
this->_v_15688_d2.get()=j::function([=](const j::Args &_args_fn15689,const V &_receiver_fn15689,const V &_self_fn15689) mutable ->V{
V _v_15690_a;
V _v_15691_b;
_v_15690_a=_args_fn15689[0];
_v_15691_b=_args_fn15689[1];
return ([&]()->V{V _lhs20460=([&]()->V{V _lhs20462=([&]()->V{V _lhs20464=V(0.3);V _rhs20465=([&]()->V{V _lhs20466=([&]()->V{V _lhs20468=j::get(_v_15690_a,V(0.0));V _rhs20469=j::get(_v_15691_b,V(0.0));return V(j::number(_lhs20468)-j::number(_rhs20469));})();V _rhs20467=V(2.0);return V(std::pow(j::number(_lhs20466),j::number(_rhs20467)));})();return V(j::number(_lhs20464)*j::number(_rhs20465));})();V _rhs20463=([&]()->V{V _lhs20470=V(0.59);V _rhs20471=([&]()->V{V _lhs20472=([&]()->V{V _lhs20474=j::get(_v_15690_a,V(1.0));V _rhs20475=j::get(_v_15691_b,V(1.0));return V(j::number(_lhs20474)-j::number(_rhs20475));})();V _rhs20473=V(2.0);return V(std::pow(j::number(_lhs20472),j::number(_rhs20473)));})();return V(j::number(_lhs20470)*j::number(_rhs20471));})();return j::binary("+",_lhs20462,_rhs20463);})();V _rhs20461=([&]()->V{V _lhs20476=V(0.11);V _rhs20477=([&]()->V{V _lhs20478=([&]()->V{V _lhs20480=j::get(_v_15690_a,V(2.0));V _rhs20481=j::get(_v_15691_b,V(2.0));return V(j::number(_lhs20480)-j::number(_rhs20481));})();V _rhs20479=V(2.0);return V(std::pow(j::number(_lhs20478),j::number(_rhs20479)));})();return V(j::number(_lhs20476)*j::number(_rhs20477));})();return j::binary("+",_lhs20460,_rhs20461);})();
return V{};
},2);
this->_v_15751_PAGE.get()=([&]()->V{j::Args _array20482;_array20482.push_back(V(19.0));_array20482.push_back(V(21.0));_array20482.push_back(V(24.0));return j::array(std::move(_array20482));})();
this->_v_15752_PAPER.get()=([&]()->V{j::Args _array20483;_array20483.push_back(V(255.0));_array20483.push_back(V(255.0));_array20483.push_back(V(255.0));return j::array(std::move(_array20483));})();
this->_v_15753_LIGHT.get()=([&]()->V{j::Args _array20484;_array20484.push_back(V(232.0));_array20484.push_back(V(235.0));_array20484.push_back(V(239.0));return j::array(std::move(_array20484));})();
this->_v_15754_lum.get()=j::function([=](const j::Args &_args_fn15755,const V &_receiver_fn15755,const V &_self_fn15755) mutable ->V{
V _v_15756_c;
_v_15756_c=_args_fn15755[0];
{
V _v_15757_f;
_v_15757_f=j::function([=](const j::Args &_args_fn15758,const V &_receiver_fn15758,const V &_self_fn15758) mutable ->V{
V _v_15759_v;
_v_15759_v=_args_fn15758[0];
return (j::truth(([&]()->V{V _lhs20485=(_v_15759_v=j::binary("/",_v_15759_v,V(255.0)));V _rhs20486=V(0.03928);return j::binary("<=",_lhs20485,_rhs20486);})())?([&]()->V{V _lhs20488=_v_15759_v;V _rhs20489=V(12.92);return V(j::number(_lhs20488)/j::number(_rhs20489));})():([&]()->V{V _lhs20490=([&]()->V{V _lhs20492=([&]()->V{V _lhs20494=_v_15759_v;V _rhs20495=V(0.055);return j::binary("+",_lhs20494,_rhs20495);})();V _rhs20493=V(1.055);return V(j::number(_lhs20492)/j::number(_rhs20493));})();V _rhs20491=V(2.4);return V(std::pow(j::number(_lhs20490),j::number(_rhs20491)));})());
return V{};
},1);
return ([&]()->V{V _lhs20496=([&]()->V{V _lhs20498=([&]()->V{V _lhs20500=V(0.2126);V _rhs20501=([&]()->V{V _callee20502=_v_15757_f;return j::call(_callee20502,j::Args{j::get(_v_15756_c,V(0.0))});})();return V(j::number(_lhs20500)*j::number(_rhs20501));})();V _rhs20499=([&]()->V{V _lhs20503=V(0.7152);V _rhs20504=([&]()->V{V _callee20505=_v_15757_f;return j::call(_callee20505,j::Args{j::get(_v_15756_c,V(1.0))});})();return V(j::number(_lhs20503)*j::number(_rhs20504));})();return j::binary("+",_lhs20498,_rhs20499);})();V _rhs20497=([&]()->V{V _lhs20506=V(0.0722);V _rhs20507=([&]()->V{V _callee20508=_v_15757_f;return j::call(_callee20508,j::Args{j::get(_v_15756_c,V(2.0))});})();return V(j::number(_lhs20506)*j::number(_rhs20507));})();return j::binary("+",_lhs20496,_rhs20497);})();

}

return V{};
},1);
this->_v_15760_contrast.get()=j::function([=](const j::Args &_args_fn15761,const V &_receiver_fn15761,const V &_self_fn15761) mutable ->V{
V _v_15762_a;
V _v_15763_b;
_v_15762_a=_args_fn15761[0];
_v_15763_b=_args_fn15761[1];
return ([&]()->V{V _lhs20509=([&]()->V{V _lhs20511=([&]()->V{V _receiver20517=j::builtin("Math");V _method20518=this->_literals[60];V _method=j::get(_receiver20517,_method20518);j::Args _params20519=j::Args{([&]()->V{V _callee20513=this->_v_15754_lum.get();return j::call(_callee20513,j::Args{_v_15762_a});})(),([&]()->V{V _callee20514=this->_v_15754_lum.get();return j::call(_callee20514,j::Args{_v_15763_b});})()};return j::call(_method,_params20519,_receiver20517);})();V _rhs20512=V(0.05);return j::binary("+",_lhs20511,_rhs20512);})();V _rhs20510=([&]()->V{V _lhs20520=([&]()->V{V _receiver20526=j::builtin("Math");V _method20527=this->_literals[59];V _method=j::get(_receiver20526,_method20527);j::Args _params20528=j::Args{([&]()->V{V _callee20522=this->_v_15754_lum.get();return j::call(_callee20522,j::Args{_v_15762_a});})(),([&]()->V{V _callee20523=this->_v_15754_lum.get();return j::call(_callee20523,j::Args{_v_15763_b});})()};return j::call(_method,_params20528,_receiver20526);})();V _rhs20521=V(0.05);return j::binary("+",_lhs20520,_rhs20521);})();return V(j::number(_lhs20509)/j::number(_rhs20510));})();
return V{};
},2);
this->_v_15790_grey.get()=j::function([=](const j::Args &_args_fn15791,const V &_receiver_fn15791,const V &_self_fn15791) mutable ->V{
V _v_15792_c;
_v_15792_c=_args_fn15791[0];
return ([&]()->V{V _logical20529=([&]()->V{V _lhs20530=([&]()->V{V _lhs20532=([&]()->V{V _receiver20535=j::builtin("Math");V _method20536=this->_literals[60];V _method=j::get(_receiver20535,_method20536);j::Args _params20537=([&](){j::Args _args20534;for(const auto &_v:j::elements(_v_15792_c))_args20534.push_back(_v);return _args20534;})();return j::call(_method,_params20537,_receiver20535);})();V _rhs20533=([&]()->V{V _receiver20539=j::builtin("Math");V _method20540=this->_literals[59];V _method=j::get(_receiver20539,_method20540);j::Args _params20541=([&](){j::Args _args20538;for(const auto &_v:j::elements(_v_15792_c))_args20538.push_back(_v);return _args20538;})();return j::call(_method,_params20541,_receiver20539);})();return V(j::number(_lhs20532)-j::number(_rhs20533));})();V _rhs20531=V(24.0);return j::binary("<",_lhs20530,_rhs20531);})();return !j::truth(_logical20529)?([&]()->V{V _lhs20542=([&]()->V{V _lhs20544=([&]()->V{V _lhs20546=([&]()->V{V _receiver20549=j::builtin("Math");V _method20550=this->_literals[60];V _method=j::get(_receiver20549,_method20550);j::Args _params20551=([&](){j::Args _args20548;for(const auto &_v:j::elements(_v_15792_c))_args20548.push_back(_v);return _args20548;})();return j::call(_method,_params20551,_receiver20549);})();V _rhs20547=([&]()->V{V _receiver20553=j::builtin("Math");V _method20554=this->_literals[59];V _method=j::get(_receiver20553,_method20554);j::Args _params20555=([&](){j::Args _args20552;for(const auto &_v:j::elements(_v_15792_c))_args20552.push_back(_v);return _args20552;})();return j::call(_method,_params20555,_receiver20553);})();return V(j::number(_lhs20546)-j::number(_rhs20547));})();V _rhs20545=([&]()->V{V _receiver20557=j::builtin("Math");V _method20558=this->_literals[60];V _method=j::get(_receiver20557,_method20558);j::Args _params20559=([&](){j::Args _args20556;for(const auto &_v:j::elements(_v_15792_c))_args20556.push_back(_v);return _args20556;})();return j::call(_method,_params20559,_receiver20557);})();return V(j::number(_lhs20544)/j::number(_rhs20545));})();V _rhs20543=V(0.3);return j::binary("<",_lhs20542,_rhs20543);})():_logical20529;})();
return V{};
},1);
this->_v_15793_black.get()=j::function([=](const j::Args &_args_fn15794,const V &_receiver_fn15794,const V &_self_fn15794) mutable ->V{
V _v_15795_c;
_v_15795_c=_args_fn15794[0];
return ([&]()->V{V _logical20560=([&]()->V{V _lhs20561=([&]()->V{V _receiver20564=j::builtin("Math");V _method20565=this->_literals[60];V _method=j::get(_receiver20564,_method20565);j::Args _params20566=([&](){j::Args _args20563;for(const auto &_v:j::elements(_v_15795_c))_args20563.push_back(_v);return _args20563;})();return j::call(_method,_params20566,_receiver20564);})();V _rhs20562=V(64.0);return j::binary("<",_lhs20561,_rhs20562);})();return j::truth(_logical20560)?([&]()->V{V _lhs20567=([&]()->V{V _lhs20569=([&]()->V{V _receiver20572=j::builtin("Math");V _method20573=this->_literals[60];V _method=j::get(_receiver20572,_method20573);j::Args _params20574=([&](){j::Args _args20571;for(const auto &_v:j::elements(_v_15795_c))_args20571.push_back(_v);return _args20571;})();return j::call(_method,_params20574,_receiver20572);})();V _rhs20570=([&]()->V{V _receiver20576=j::builtin("Math");V _method20577=this->_literals[59];V _method=j::get(_receiver20576,_method20577);j::Args _params20578=([&](){j::Args _args20575;for(const auto &_v:j::elements(_v_15795_c))_args20575.push_back(_v);return _args20575;})();return j::call(_method,_params20578,_receiver20576);})();return V(j::number(_lhs20569)-j::number(_rhs20570));})();V _rhs20568=V(24.0);return j::binary("<",_lhs20567,_rhs20568);})():_logical20560;})();
return V{};
},1);
this->_v_15817_tint.get()=j::function([=](const j::Args &_args_fn15818,const V &_receiver_fn15818,const V &_self_fn15818) mutable ->V{
V _v_15819_c;
j::Cell _v_15820_k;
_v_15819_c=_args_fn15818[0];
_v_15820_k.get()=_args_fn15818[1];
return ([&]()->V{V _receiver20592=_v_15819_c;V _method20593=this->_literals[72];V _method=j::get(_receiver20592,_method20593);j::Args _params20594=j::Args{j::function([=](const j::Args &_args_fn15821,const V &_receiver_fn15821,const V &_self_fn15821) mutable ->V{
V _v_15822_v;
_v_15822_v=_args_fn15821[0];
return ([&]()->V{V _number20585=([&]()->V{V _lhs20586=_v_15822_v;V _rhs20587=([&]()->V{V _lhs20588=([&]()->V{V _lhs20590=V(255.0);V _rhs20591=_v_15822_v;return V(j::number(_lhs20590)-j::number(_rhs20591));})();V _rhs20589=_v_15820_k.get();return V(j::number(_lhs20588)*j::number(_rhs20589));})();return j::binary("+",_lhs20586,_rhs20587);})();return V(std::floor(j::number(_number20585)+.5));})();
return V{};
},1)};return j::call(_method,_params20594,_receiver20592);})();
return V{};
},2);
this->_v_15862_prepared.get()=([&]()->V{V _callee20595=j::builtin("WeakMap");return j::construct(_callee20595,j::Args{});})();
this->_v_16018_SVG_NS.get()=this->_literals[225];
this->_v_16039_SOURCES.get()=this->_literals[226];
this->_v_16044_where.get()=j::function([=](const j::Args &_args_fn16045,const V &_receiver_fn16045,const V &_self_fn16045) mutable ->V{
V _v_16046_url;
_v_16046_url=_args_fn16045[0];
return (j::truth(([&]()->V{V _lhs20596=j::get(_v_16046_url,this->_literals[1]);V _rhs20597=V(80.0);return j::binary(">",_lhs20596,_rhs20597);})())?([&]()->V{std::u16string _text20598;_text20598+=u"";_text20598+=j::string(([&]()->V{V _receiver20599=_v_16046_url;V _method20600=this->_literals[2];V _method=j::get(_receiver20599,_method20600);j::Args _params20601=j::Args{V(0.0),V(60.0)};return j::call(_method,_params20601,_receiver20599);})());_text20598+=u"...";return V(std::move(_text20598));})():_v_16046_url);
return V{};
},1);
this->_v_16130_files.get()=j::function([=](const j::Args &_args_fn16131,const V &_receiver_fn16131,const V &_self_fn16131) mutable ->V{
{
V _v_16132_proc;
_v_16132_proc=j::get(j::builtin("globalThis"),this->_literals[227]);
return (j::truth(([&]()->V{V _logical20602=([&]()->V{V _lhs20603=j::unary("typeof",j::builtin("document"));V _rhs20604=this->_literals[154];return V(j::equal(_lhs20603,_rhs20604,true));})();return j::truth(_logical20602)?([&]()->V{V _lhs20605=j::unary("typeof",([&]()->V{V _chain20607=_v_16132_proc;if(j::nullish(_chain20607))return V{};V _chain20608=j::get(_chain20607,this->_literals[228]);return _chain20608;})());V _rhs20606=this->_literals[5];return V(j::equal(_lhs20605,_rhs20606,true));})():_logical20602;})())?([&]()->V{V _logical20609=([&]()->V{V _receiver20610=_v_16132_proc;V _method20611=this->_literals[228];V _method=j::get(_receiver20610,_method20611);j::Args _params20612=j::Args{this->_literals[229]};return j::call(_method,_params20612,_receiver20610);})();return j::nullish(_logical20609)?V::null():_logical20609;})():V::null());

}

return V{};
},0);
this->_v_16139_PNG.get()=([&]()->V{j::Args _array20613;_array20613.push_back(V(137.0));_array20613.push_back(V(80.0));_array20613.push_back(V(78.0));_array20613.push_back(V(71.0));_array20613.push_back(V(13.0));_array20613.push_back(V(10.0));_array20613.push_back(V(26.0));_array20613.push_back(V(10.0));return j::array(std::move(_array20613));})();
this->_v_16140_ADAM7.get()=([&]()->V{j::Args _array20614;_array20614.push_back(([&]()->V{j::Args _array20615;_array20615.push_back(V(0.0));_array20615.push_back(V(0.0));_array20615.push_back(V(8.0));_array20615.push_back(V(8.0));return j::array(std::move(_array20615));})());_array20614.push_back(([&]()->V{j::Args _array20616;_array20616.push_back(V(4.0));_array20616.push_back(V(0.0));_array20616.push_back(V(8.0));_array20616.push_back(V(8.0));return j::array(std::move(_array20616));})());_array20614.push_back(([&]()->V{j::Args _array20617;_array20617.push_back(V(0.0));_array20617.push_back(V(4.0));_array20617.push_back(V(4.0));_array20617.push_back(V(8.0));return j::array(std::move(_array20617));})());_array20614.push_back(([&]()->V{j::Args _array20618;_array20618.push_back(V(2.0));_array20618.push_back(V(0.0));_array20618.push_back(V(4.0));_array20618.push_back(V(4.0));return j::array(std::move(_array20618));})());_array20614.push_back(([&]()->V{j::Args _array20619;_array20619.push_back(V(0.0));_array20619.push_back(V(2.0));_array20619.push_back(V(2.0));_array20619.push_back(V(4.0));return j::array(std::move(_array20619));})());_array20614.push_back(([&]()->V{j::Args _array20620;_array20620.push_back(V(1.0));_array20620.push_back(V(0.0));_array20620.push_back(V(2.0));_array20620.push_back(V(2.0));return j::array(std::move(_array20620));})());_array20614.push_back(([&]()->V{j::Args _array20621;_array20621.push_back(V(0.0));_array20621.push_back(V(1.0));_array20621.push_back(V(1.0));_array20621.push_back(V(2.0));return j::array(std::move(_array20621));})());return j::array(std::move(_array20614));})();
this->_v_16141_CHANNELS.get()=([&]()->V{j::Args _array20622;_array20622.push_back(V(1.0));_array20622.push_back(V(0.0));_array20622.push_back(V(3.0));_array20622.push_back(V(1.0));_array20622.push_back(V(2.0));_array20622.push_back(V(0.0));_array20622.push_back(V(4.0));return j::array(std::move(_array20622));})();
this->_v_16142_MOST_SIDE.get()=V(16384.0);
this->_v_16143_MOST_PIXELS.get()=V(40000000.0);
}
};
}
std::unique_ptr<Module> new_kit_image(){return std::make_unique<Generated_kit_image>();}
}
