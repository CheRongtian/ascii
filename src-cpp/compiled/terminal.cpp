// Native source generated from src/terminal.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_terminal final:j::Module {
j::Cell _v_71545_process;
j::Cell _v_71546_isPiece;
j::Cell _v_71547_load;
j::Cell _v_71548_ENTER;
j::Cell _v_71549_LEAVE;
j::Cell _v_71550_GAP;
j::Cell _v_71551_NEAR;
j::Cell _v_71552_INK;
j::Cell _v_71553_int;
j::Cell _v_71556_mix;
j::Cell _v_71564_sgr;
j::Cell _v_71568_dark;
j::Cell _v_71571_resolve;
j::Cell _v_71574_spans;
j::Cell _v_71586_painter;
j::Cell _v_71690_still;
j::Cell _v_71700_play;
std::vector<V> _literals;
Generated_terminal():_v_71545_process(this->slot("process")),_v_71546_isPiece(this->slot("isPiece")),_v_71547_load(this->slot("load")),_v_71548_ENTER(this->slot("ENTER")),_v_71549_LEAVE(this->slot("LEAVE")),_v_71550_GAP(this->slot("GAP")),_v_71551_NEAR(this->slot("NEAR")),_v_71552_INK(this->slot("INK")),_v_71553_int(this->slot("int")),_v_71556_mix(this->slot("mix")),_v_71564_sgr(this->slot("sgr")),_v_71568_dark(this->slot("dark")),_v_71571_resolve(this->slot("resolve")),_v_71574_spans(this->slot("spans")),_v_71586_painter(this->slot("painter")),_v_71690_still(this->slot("still")),_v_71700_play(this->slot("play")),_literals{V(u"string"),
V(u"length"),
V(u"min"),
V(u"max"),
V(u"push"),
V(u"from"),
V(u"cols"),
V(u"rows"),
V(u"palette"),
V(u"ground"),
V(u"cell"),
V(u"map"),
V(u" "),
V(u"charCodeAt"),
V(u"get"),
V(u"set"),
V(u" ·•●"),
V(u"indexOf"),
V(u"color"),
V(u"base"),
V(u"ch"),
V(u"fg"),
V(u"bg"),
V(u"fill"),
V(u"\n"),
V(u"split"),
V(u"▀"),
V(u"▄"),
V(u"size"),
V(u"paint"),
V(u"assign"),
V(u"light"),
V(u"options"),
V(u"meta"),
V(u"still"),
V(u"paper"),
V(u"default"),
V(u""),
V(u"slice"),
V(u"join"),
V(u"\x1b" u"[?1049h\x1b" u"[?25l\x1b" u"[?7l\x1b" u"[2J"),
V(u"\x1b" u"[0m\x1b" u"[?7h\x1b" u"[?25h\x1b" u"[?1049l"),
V(u"·"),
V(u"•"),
V(u"●"),
V(u"░"),
V(u"▒"),
V(u"▓"),
V(u"█"),
V(u"reduce")}{
this->exports["still"]=this->_v_71690_still;
this->exports["play"]=this->_v_71700_play;
}
void init() override{if(initialized)return;initialized=true;
this->_v_71571_resolve.get()=j::function([=](const j::Args &_args_fn71572,const V &_receiver_fn71572,const V &_self_fn71572) mutable ->V{
V _v_71573_piece;
_v_71573_piece=_args_fn71572[0];
{
if(j::truth(([&]()->V{V _lhs71792=j::unary("typeof",_v_71573_piece);V _rhs71793=this->_literals[0];return V(!j::equal(_lhs71792,_rhs71793,true));})())){return _v_71573_piece;
}
if(j::truth(j::unary("!",([&]()->V{V _callee71794=this->_v_71546_isPiece.get();return j::call(_callee71794,j::Args{_v_71573_piece});})()))){j::raise(([&]()->V{V _callee71796=j::builtin("Error");return j::construct(_callee71796,j::Args{([&]()->V{std::u16string _text71795;_text71795+=u"ascii.rest: no piece named \"";_text71795+=j::string(_v_71573_piece);_text71795+=u"\"";return V(std::move(_text71795));})()});})());
}
return ([&]()->V{V _receiver71797=this->_v_71547_load.get();V _method71798=_v_71573_piece;V _method=j::get(_receiver71797,_method71798);j::Args _params71799=j::Args{};return j::call(_method,_params71799,_receiver71797);})();

}

return V{};
},1);
this->_v_71574_spans.get()=j::function([=](const j::Args &_args_fn71575,const V &_receiver_fn71575,const V &_self_fn71575) mutable ->V{
j::Cell _v_71576_n;
j::Cell _v_71577_m;
_v_71576_n.get()=_args_fn71575[0];
_v_71577_m.get()=_args_fn71575[1];
{
return ([&]()->V{V _receiver71840=j::builtin("Array");V _method71841=this->_literals[5];V _method=j::get(_receiver71840,_method71841);j::Args _params71842=j::Args{([&]()->V{V _obj71800=j::object();j::put(_obj71800,this->_literals[1],_v_71577_m.get());return _obj71800;})(),j::function([=](const j::Args &_args_fn71578,const V &_receiver_fn71578,const V &_self_fn71578) mutable ->V{
V _v_71579__;
V _v_71580_i;
_v_71579__=_args_fn71578[0];
_v_71580_i=_args_fn71578[1];
{
V _v_71581_a;
V _v_71582_b;
V _v_71583_cover;
_v_71581_a=([&]()->V{V _lhs71801=([&]()->V{V _lhs71803=_v_71580_i;V _rhs71804=_v_71576_n.get();return V(j::number(_lhs71803)*j::number(_rhs71804));})();V _rhs71802=_v_71577_m.get();return V(j::number(_lhs71801)/j::number(_rhs71802));})();
_v_71582_b=([&]()->V{V _lhs71805=([&]()->V{V _lhs71807=([&]()->V{V _lhs71809=_v_71580_i;V _rhs71810=V(1.0);return j::binary("+",_lhs71809,_rhs71810);})();V _rhs71808=_v_71576_n.get();return V(j::number(_lhs71807)*j::number(_rhs71808));})();V _rhs71806=_v_71577_m.get();return V(j::number(_lhs71805)/j::number(_rhs71806));})();
_v_71583_cover=([&]()->V{j::Args _array71811;return j::array(std::move(_array71811));})();
{V _v_71584_j;
_v_71584_j=([&]()->V{V _number71812=_v_71581_a;return V(std::floor(j::number(_number71812)));})();
for(;j::truth(([&]()->V{V _lhs71813=_v_71584_j;V _rhs71814=([&]()->V{V _number71815=_v_71582_b;return V(std::ceil(j::number(_number71815)));})();return j::binary("<",_lhs71813,_rhs71814);})());(void)(j::increment(_v_71584_j,1,false))){
V _v_71585_w;
_v_71585_w=([&]()->V{V _lhs71816=([&]()->V{V _receiver71822=j::builtin("Math");V _method71823=this->_literals[2];V _method=j::get(_receiver71822,_method71823);j::Args _params71824=j::Args{([&]()->V{V _lhs71818=_v_71584_j;V _rhs71819=V(1.0);return j::binary("+",_lhs71818,_rhs71819);})(),_v_71582_b};return j::call(_method,_params71824,_receiver71822);})();V _rhs71817=([&]()->V{V _receiver71827=j::builtin("Math");V _method71828=this->_literals[3];V _method=j::get(_receiver71827,_method71828);j::Args _params71829=j::Args{_v_71584_j,_v_71581_a};return j::call(_method,_params71829,_receiver71827);})();return V(j::number(_lhs71816)-j::number(_rhs71817));})();
if(j::truth(([&]()->V{V _lhs71830=_v_71585_w;V _rhs71831=V(0.0);return j::binary(">",_lhs71830,_rhs71831);})())){(void)(([&]()->V{V _receiver71837=_v_71583_cover;V _method71838=this->_literals[4];V _method=j::get(_receiver71837,_method71838);j::Args _params71839=j::Args{([&]()->V{j::Args _array71832;_array71832.push_back(_v_71584_j);_array71832.push_back(([&]()->V{V _lhs71833=_v_71585_w;V _rhs71834=([&]()->V{V _lhs71835=_v_71582_b;V _rhs71836=_v_71581_a;return V(j::number(_lhs71835)-j::number(_rhs71836));})();return V(j::number(_lhs71833)/j::number(_rhs71834));})());return j::array(std::move(_array71832));})()};return j::call(_method,_params71839,_receiver71837);})());
}

}
}
return _v_71583_cover;

}

return V{};
},2)};return j::call(_method,_params71842,_receiver71840);})();

}

return V{};
},2);
this->_v_71586_painter.get()=j::function([=](const j::Args &_args_fn71587,const V &_receiver_fn71587,const V &_self_fn71587) mutable ->V{
j::Cell _v_71588_cols;
j::Cell _v_71589_rows;
V _v_71590_palette;
V _v_71591_ground;
V _v_71592_cell;
V _v_71593_colour;
V _pattern71843=_args_fn71587[0];
_v_71588_cols.get()=j::get(_pattern71843,this->_literals[6]);
_v_71589_rows.get()=j::get(_pattern71843,this->_literals[7]);
_v_71590_palette=j::get(_pattern71843,this->_literals[8]);
_v_71591_ground=j::get(_pattern71843,this->_literals[9]);
V _default71844=j::get(_pattern71843,this->_literals[10]);if(_default71844.kind==V::Undefined||_default71844.kind==V::Hole)_default71844=V(2.0);
_v_71592_cell=_default71844;
_v_71593_colour=_args_fn71587[1];
{
j::Cell _v_71594_square;
j::Cell _v_71595_color;
j::Cell _v_71596_inks;
j::Cell _v_71597_base;
j::Cell _v_71598_shades;
j::Cell _v_71599_shade;
j::Cell _v_71605_weight;
j::Cell _v_71608_tones;
j::Cell _v_71609_pic;
j::Cell _v_71610_soft;
j::Cell _v_71611_out;
j::Cell _v_71612_across;
j::Cell _v_71613_down;
j::Cell _v_71614_half;
j::Cell _v_71615_wide;
j::Cell _v_71616_small;
j::Cell _v_71617_room;
V _v_71621_size;
j::Cell _v_71627_blur;
V _v_71640_paint;
_v_71594_square.get()=([&]()->V{V _lhs71845=_v_71592_cell;V _rhs71846=V(1.0);return V(j::equal(_lhs71845,_rhs71846,true));})();
_v_71595_color.get()=(j::truth(([&]()->V{V _logical71847=_v_71593_colour;return j::truth(_logical71847)?_v_71590_palette:_logical71847;})())?([&]()->V{V _callee71850=j::builtin("Uint8Array");return j::construct(_callee71850,j::Args{([&]()->V{V _lhs71848=_v_71588_cols.get();V _rhs71849=_v_71589_rows.get();return V(j::number(_lhs71848)*j::number(_rhs71849));})()});})():j::builtin("undefined"));
_v_71596_inks.get()=([&]()->V{V _logical71851=([&]()->V{V _chain71852=_v_71590_palette;if(j::nullish(_chain71852))return V{};V _chain71853=j::get(_chain71852,this->_literals[11]);V _chain71854=j::call(_chain71853,j::Args{this->_v_71553_int.get()},_chain71852);return _chain71854;})();return j::nullish(_logical71851)?([&]()->V{j::Args _array71855;return j::array(std::move(_array71855));})():_logical71851;})();
_v_71597_base.get()=(j::truth(([&]()->V{V _logical71856=_v_71595_color.get();return j::truth(_logical71856)?_v_71591_ground:_logical71856;})())?([&]()->V{V _callee71857=this->_v_71553_int.get();return j::call(_callee71857,j::Args{_v_71591_ground});})():j::unary("-",V(1.0)));
_v_71598_shades.get()=([&]()->V{V _callee71858=j::builtin("Map");return j::construct(_callee71858,j::Args{});})();
_v_71599_shade.get()=j::function([=](const j::Args &_args_fn71600,const V &_receiver_fn71600,const V &_self_fn71600) mutable ->V{
V _v_71601_c;
V _v_71602_i;
_v_71601_c=_args_fn71600[0];
_v_71602_i=_args_fn71600[1];
{
V _v_71603_key;
V _v_71604_s;
if(j::truth(([&]()->V{V _lhs71859=_v_71601_c;V _rhs71860=this->_literals[12];return V(j::equal(_lhs71859,_rhs71860,true));})())){return _v_71597_base.get();
}
_v_71603_key=([&]()->V{V _lhs71861=([&]()->V{V _lhs71863=_v_71602_i;V _rhs71864=V(65536.0);return V(j::number(_lhs71863)*j::number(_rhs71864));})();V _rhs71862=([&]()->V{V _receiver71865=_v_71601_c;V _method71866=this->_literals[13];V _method=j::get(_receiver71865,_method71866);j::Args _params71867=j::Args{V(0.0)};return j::call(_method,_params71867,_receiver71865);})();return j::binary("+",_lhs71861,_rhs71862);})();
_v_71604_s=([&]()->V{V _receiver71868=_v_71598_shades.get();V _method71869=this->_literals[14];V _method=j::get(_receiver71868,_method71869);j::Args _params71870=j::Args{_v_71603_key};return j::call(_method,_params71870,_receiver71868);})();
if(j::truth(([&]()->V{V _lhs71871=_v_71604_s;V _rhs71872=j::builtin("undefined");return V(j::equal(_lhs71871,_rhs71872,true));})())){(void)(([&]()->V{V _receiver71880=_v_71598_shades.get();V _method71881=this->_literals[15];V _method=j::get(_receiver71880,_method71881);j::Args _params71882=j::Args{_v_71603_key,(_v_71604_s=(j::truth(([&]()->V{V _lhs71874=_v_71597_base.get();V _rhs71875=V(0.0);return j::binary("<",_lhs71874,_rhs71875);})())?([&]()->V{V _logical71876=j::get(_v_71596_inks.get(),_v_71602_i);return j::nullish(_logical71876)?j::get(_v_71596_inks.get(),V(0.0)):_logical71876;})():([&]()->V{V _callee71879=this->_v_71556_mix.get();return j::call(_callee71879,j::Args{_v_71597_base.get(),([&]()->V{V _logical71877=j::get(_v_71596_inks.get(),_v_71602_i);return j::nullish(_logical71877)?j::get(_v_71596_inks.get(),V(0.0)):_logical71877;})(),([&]()->V{V _logical71878=j::get(this->_v_71552_INK.get(),_v_71601_c);return j::nullish(_logical71878)?V(0.5):_logical71878;})()});})()))};return j::call(_method,_params71882,_receiver71880);})());
}
return _v_71604_s;

}

return V{};
},2);
_v_71605_weight.get()=j::function([=](const j::Args &_args_fn71606,const V &_receiver_fn71606,const V &_self_fn71606) mutable ->V{
V _v_71607_c;
_v_71607_c=_args_fn71606[0];
return ([&]()->V{V _logical71883=([&]()->V{V _lhs71884=([&]()->V{V _receiver71886=this->_literals[16];V _method71887=this->_literals[17];V _method=j::get(_receiver71886,_method71887);j::Args _params71888=j::Args{_v_71607_c};return j::call(_method,_params71888,_receiver71886);})();V _rhs71885=V(1.0);return j::binary("+",_lhs71884,_rhs71885);})();return !j::truth(_logical71883)?V(2.5):_logical71883;})();
return V{};
},1);
_v_71608_tones.get()=([&]()->V{V _logical71889=([&]()->V{V _logical71890=_v_71594_square.get();return j::truth(_logical71890)?([&]()->V{V _lhs71891=_v_71595_color.get();V _rhs71892=j::builtin("undefined");return V(!j::equal(_lhs71891,_rhs71892,true));})():_logical71890;})();return j::truth(_logical71889)?([&]()->V{V _lhs71893=_v_71597_base.get();V _rhs71894=V(0.0);return j::binary(">=",_lhs71893,_rhs71894);})():_logical71889;})();
_v_71609_pic.get()=(j::truth(_v_71608_tones.get())?([&]()->V{V _callee71899=j::builtin("Float32Array");return j::construct(_callee71899,j::Args{([&]()->V{V _lhs71895=([&]()->V{V _lhs71897=_v_71588_cols.get();V _rhs71898=_v_71589_rows.get();return V(j::number(_lhs71897)*j::number(_rhs71898));})();V _rhs71896=V(3.0);return V(j::number(_lhs71895)*j::number(_rhs71896));})()});})():([&]()->V{V _callee71900=j::builtin("Float32Array");return j::construct(_callee71900,j::Args{V(0.0)});})());
_v_71610_soft.get()=(j::truth(_v_71608_tones.get())?([&]()->V{V _callee71905=j::builtin("Float32Array");return j::construct(_callee71905,j::Args{([&]()->V{V _lhs71901=([&]()->V{V _lhs71903=_v_71588_cols.get();V _rhs71904=_v_71589_rows.get();return V(j::number(_lhs71903)*j::number(_rhs71904));})();V _rhs71902=V(3.0);return V(j::number(_lhs71901)*j::number(_rhs71902));})()});})():([&]()->V{V _callee71906=j::builtin("Float32Array");return j::construct(_callee71906,j::Args{V(0.0)});})());
_v_71611_out.get()=([&]()->V{V _obj71907=j::object();j::put(_obj71907,this->_literals[6],_v_71588_cols.get());j::put(_obj71907,this->_literals[7],(j::truth(_v_71594_square.get())?([&]()->V{V _number71910=([&]()->V{V _lhs71911=_v_71589_rows.get();V _rhs71912=V(2.0);return V(j::number(_lhs71911)/j::number(_rhs71912));})();return V(std::ceil(j::number(_number71910)));})():_v_71589_rows.get()));j::put(_obj71907,this->_literals[18],_v_71595_color.get());j::put(_obj71907,this->_literals[19],_v_71597_base.get());j::put(_obj71907,this->_literals[20],([&]()->V{j::Args _array71913;return j::array(std::move(_array71913));})());j::put(_obj71907,this->_literals[21],([&]()->V{V _callee71914=j::builtin("Int32Array");return j::construct(_callee71914,j::Args{V(0.0)});})());j::put(_obj71907,this->_literals[22],([&]()->V{V _callee71915=j::builtin("Int32Array");return j::construct(_callee71915,j::Args{V(0.0)});})());return _obj71907;})();
_v_71612_across.get()=([&]()->V{j::Args _array71916;return j::array(std::move(_array71916));})();
_v_71613_down.get()=([&]()->V{j::Args _array71917;return j::array(std::move(_array71917));})();
_v_71614_half.get()=_v_71589_rows.get();
_v_71615_wide.get()=([&]()->V{V _callee71918=j::builtin("Float32Array");return j::construct(_callee71918,j::Args{V(0.0)});})();
_v_71616_small.get()=([&]()->V{V _callee71919=j::builtin("Float32Array");return j::construct(_callee71919,j::Args{V(0.0)});})();
_v_71617_room.get()=j::function([=](const j::Args &_args_fn71618,const V &_receiver_fn71618,const V &_self_fn71618) mutable ->V{
V _v_71619_w;
V _v_71620_h;
_v_71619_w=_args_fn71618[0];
_v_71620_h=_args_fn71618[1];
{
(void)(([&]()->V{V _base71921=_v_71611_out.get();V _key71922=this->_literals[6];V _assign71920=_v_71619_w;return j::put(_base71921,_key71922,_assign71920);})());
(void)(([&]()->V{V _base71924=_v_71611_out.get();V _key71925=this->_literals[7];V _assign71923=_v_71620_h;return j::put(_base71924,_key71925,_assign71923);})());
(void)(([&]()->V{V _base71927=_v_71611_out.get();V _key71928=this->_literals[20];V _assign71926=([&]()->V{V _receiver71929=([&]()->V{V _callee71934=j::builtin("Array");return j::construct(_callee71934,j::Args{([&]()->V{V _lhs71932=_v_71619_w;V _rhs71933=_v_71620_h;return V(j::number(_lhs71932)*j::number(_rhs71933));})()});})();V _method71930=this->_literals[23];V _method=j::get(_receiver71929,_method71930);j::Args _params71931=j::Args{this->_literals[12]};return j::call(_method,_params71931,_receiver71929);})();return j::put(_base71927,_key71928,_assign71926);})());
(void)(([&]()->V{V _base71936=_v_71611_out.get();V _key71937=this->_literals[21];V _assign71935=([&]()->V{V _receiver71938=([&]()->V{V _callee71943=j::builtin("Int32Array");return j::construct(_callee71943,j::Args{([&]()->V{V _lhs71941=_v_71619_w;V _rhs71942=_v_71620_h;return V(j::number(_lhs71941)*j::number(_rhs71942));})()});})();V _method71939=this->_literals[23];V _method=j::get(_receiver71938,_method71939);j::Args _params71940=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params71940,_receiver71938);})();return j::put(_base71936,_key71937,_assign71935);})());
(void)(([&]()->V{V _base71945=_v_71611_out.get();V _key71946=this->_literals[22];V _assign71944=([&]()->V{V _receiver71947=([&]()->V{V _callee71952=j::builtin("Int32Array");return j::construct(_callee71952,j::Args{([&]()->V{V _lhs71950=_v_71619_w;V _rhs71951=_v_71620_h;return V(j::number(_lhs71950)*j::number(_rhs71951));})()});})();V _method71948=this->_literals[23];V _method=j::get(_receiver71947,_method71948);j::Args _params71949=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params71949,_receiver71947);})();return j::put(_base71945,_key71946,_assign71944);})());

}

return V{};
},2);
_v_71621_size=j::function([=](const j::Args &_args_fn71622,const V &_receiver_fn71622,const V &_self_fn71622) mutable ->V{
V _v_71623_W;
V _v_71624_H;
_v_71623_W=_args_fn71622[0];
_v_71624_H=_args_fn71622[1];
{
V _v_71625_s;
V _v_71626_w;
if(j::truth(([&]()->V{V _logical71953=j::unary("!",_v_71594_square.get());return !j::truth(_logical71953)?([&]()->V{V _logical71954=_v_71595_color.get();return j::truth(_logical71954)?j::unary("!",_v_71608_tones.get()):_logical71954;})():_logical71953;})())){return j::unary("void",([&]()->V{V _logical71955=j::get(j::get(_v_71611_out.get(),this->_literals[20]),this->_literals[1]);return !j::truth(_logical71955)?([&]()->V{V _callee71961=_v_71617_room.get();return j::call(_callee71961,j::Args{_v_71588_cols.get(),(j::truth(_v_71594_square.get())?([&]()->V{V _number71958=([&]()->V{V _lhs71959=_v_71589_rows.get();V _rhs71960=V(2.0);return V(j::number(_lhs71959)/j::number(_rhs71960));})();return V(std::ceil(j::number(_number71958)));})():_v_71589_rows.get())});})():_logical71955;})());
}
_v_71625_s=([&]()->V{V _receiver71971=j::builtin("Math");V _method71972=this->_literals[2];V _method=j::get(_receiver71971,_method71972);j::Args _params71973=j::Args{V(1.0),([&]()->V{V _lhs71962=_v_71623_W;V _rhs71963=_v_71588_cols.get();return V(j::number(_lhs71962)/j::number(_rhs71963));})(),([&]()->V{V _lhs71964=([&]()->V{V _lhs71966=V(2.0);V _rhs71967=_v_71624_H;return V(j::number(_lhs71966)*j::number(_rhs71967));})();V _rhs71965=_v_71589_rows.get();return V(j::number(_lhs71964)/j::number(_rhs71965));})()};return j::call(_method,_params71973,_receiver71971);})();
_v_71626_w=([&]()->V{V _receiver71981=j::builtin("Math");V _method71982=this->_literals[3];V _method=j::get(_receiver71981,_method71982);j::Args _params71983=j::Args{V(1.0),([&]()->V{V _number71976=([&]()->V{V _lhs71977=_v_71588_cols.get();V _rhs71978=_v_71625_s;return V(j::number(_lhs71977)*j::number(_rhs71978));})();return V(std::floor(j::number(_number71976)+.5));})()};return j::call(_method,_params71983,_receiver71981);})();
(void)((_v_71614_half.get()=([&]()->V{V _receiver71992=j::builtin("Math");V _method71993=this->_literals[3];V _method=j::get(_receiver71992,_method71993);j::Args _params71994=j::Args{V(2.0),([&]()->V{V _number71987=([&]()->V{V _lhs71988=_v_71589_rows.get();V _rhs71989=_v_71625_s;return V(j::number(_lhs71988)*j::number(_rhs71989));})();return V(std::floor(j::number(_number71987)+.5));})()};return j::call(_method,_params71994,_receiver71992);})()));
(void)((_v_71612_across.get()=([&]()->V{V _callee71996=this->_v_71574_spans.get();return j::call(_callee71996,j::Args{_v_71588_cols.get(),_v_71626_w});})()));
(void)((_v_71613_down.get()=([&]()->V{V _callee72003=this->_v_71574_spans.get();return j::call(_callee72003,j::Args{_v_71589_rows.get(),(j::truth(_v_71608_tones.get())?_v_71614_half.get():([&]()->V{V _number72000=([&]()->V{V _lhs72001=_v_71614_half.get();V _rhs72002=V(2.0);return V(j::number(_lhs72001)/j::number(_rhs72002));})();return V(std::ceil(j::number(_number72000)));})())});})()));
(void)((_v_71615_wide.get()=([&]()->V{V _callee72009=j::builtin("Float32Array");return j::construct(_callee72009,j::Args{([&]()->V{V _lhs72005=([&]()->V{V _lhs72007=_v_71626_w;V _rhs72008=_v_71589_rows.get();return V(j::number(_lhs72007)*j::number(_rhs72008));})();V _rhs72006=V(3.0);return V(j::number(_lhs72005)*j::number(_rhs72006));})()});})()));
(void)((_v_71616_small.get()=([&]()->V{V _callee72015=j::builtin("Float32Array");return j::construct(_callee72015,j::Args{([&]()->V{V _lhs72011=([&]()->V{V _lhs72013=_v_71626_w;V _rhs72014=_v_71614_half.get();return V(j::number(_lhs72013)*j::number(_rhs72014));})();V _rhs72012=V(3.0);return V(j::number(_lhs72011)*j::number(_rhs72012));})()});})()));
(void)(([&]()->V{V _callee72021=_v_71617_room.get();return j::call(_callee72021,j::Args{_v_71626_w,([&]()->V{V _number72018=([&]()->V{V _lhs72019=_v_71614_half.get();V _rhs72020=V(2.0);return V(j::number(_lhs72019)/j::number(_rhs72020));})();return V(std::ceil(j::number(_number72018)));})()});})());

}

return V{};
},2);
_v_71627_blur.get()=j::function([=](const j::Args &_args_fn71628,const V &_receiver_fn71628,const V &_self_fn71628) mutable ->V{
{
V _v_71635_stride;
{V _v_71629_y;
_v_71629_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs72022=_v_71629_y;V _rhs72023=_v_71589_rows.get();return j::binary("<",_lhs72022,_rhs72023);})());(void)(j::increment(_v_71629_y,1,false))){{V _v_71630_x;
_v_71630_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72024=_v_71630_x;V _rhs72025=_v_71588_cols.get();return j::binary("<",_lhs72024,_rhs72025);})());(void)(j::increment(_v_71630_x,1,false))){{V _v_71631_c;
V _v_71632_i;
_v_71631_c=V(0.0);
_v_71632_i=([&]()->V{V _lhs72026=([&]()->V{V _lhs72028=([&]()->V{V _lhs72030=_v_71629_y;V _rhs72031=_v_71588_cols.get();return V(j::number(_lhs72030)*j::number(_rhs72031));})();V _rhs72029=_v_71630_x;return j::binary("+",_lhs72028,_rhs72029);})();V _rhs72027=V(3.0);return V(j::number(_lhs72026)*j::number(_rhs72027));})();
for(;j::truth(([&]()->V{V _lhs72032=_v_71631_c;V _rhs72033=V(3.0);return j::binary("<",_lhs72032,_rhs72033);})());(void)((j::increment(_v_71631_c,1,false),j::increment(_v_71632_i,1,false)))){
V _v_71633_sum;
V _v_71634_n;
_v_71633_sum=([&]()->V{V _lhs72034=V(4.0);V _rhs72035=j::get(_v_71609_pic.get(),_v_71632_i);return V(j::number(_lhs72034)*j::number(_rhs72035));})();
_v_71634_n=V(4.0);
if(j::truth(([&]()->V{V _lhs72036=_v_71630_x;V _rhs72037=V(0.0);return j::binary(">",_lhs72036,_rhs72037);})())){(void)(((_v_71633_sum=j::binary("+",_v_71633_sum,j::get(_v_71609_pic.get(),([&]()->V{V _lhs72039=_v_71632_i;V _rhs72040=V(3.0);return V(j::number(_lhs72039)-j::number(_rhs72040));})()))),j::increment(_v_71634_n,1,false)));
}
if(j::truth(([&]()->V{V _lhs72041=_v_71630_x;V _rhs72042=([&]()->V{V _lhs72043=_v_71588_cols.get();V _rhs72044=V(1.0);return V(j::number(_lhs72043)-j::number(_rhs72044));})();return j::binary("<",_lhs72041,_rhs72042);})())){(void)(((_v_71633_sum=j::binary("+",_v_71633_sum,j::get(_v_71609_pic.get(),([&]()->V{V _lhs72046=_v_71632_i;V _rhs72047=V(3.0);return j::binary("+",_lhs72046,_rhs72047);})()))),j::increment(_v_71634_n,1,false)));
}
(void)(([&]()->V{V _base72049=_v_71610_soft.get();V _key72050=_v_71632_i;V _assign72048=([&]()->V{V _lhs72051=_v_71633_sum;V _rhs72052=_v_71634_n;return V(j::number(_lhs72051)/j::number(_rhs72052));})();return j::put(_base72049,_key72050,_assign72048);})());

}
}
}}
}}
_v_71635_stride=([&]()->V{V _lhs72053=_v_71588_cols.get();V _rhs72054=V(3.0);return V(j::number(_lhs72053)*j::number(_rhs72054));})();
{V _v_71636_y;
_v_71636_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs72055=_v_71636_y;V _rhs72056=_v_71589_rows.get();return j::binary("<",_lhs72055,_rhs72056);})());(void)(j::increment(_v_71636_y,1,false))){{V _v_71637_i;
_v_71637_i=([&]()->V{V _lhs72057=_v_71636_y;V _rhs72058=_v_71635_stride;return V(j::number(_lhs72057)*j::number(_rhs72058));})();
for(;j::truth(([&]()->V{V _lhs72059=_v_71637_i;V _rhs72060=([&]()->V{V _lhs72061=([&]()->V{V _lhs72063=_v_71636_y;V _rhs72064=V(1.0);return j::binary("+",_lhs72063,_rhs72064);})();V _rhs72062=_v_71635_stride;return V(j::number(_lhs72061)*j::number(_rhs72062));})();return j::binary("<",_lhs72059,_rhs72060);})());(void)(j::increment(_v_71637_i,1,false))){
V _v_71638_sum;
V _v_71639_n;
_v_71638_sum=([&]()->V{V _lhs72065=V(4.0);V _rhs72066=j::get(_v_71610_soft.get(),_v_71637_i);return V(j::number(_lhs72065)*j::number(_rhs72066));})();
_v_71639_n=V(4.0);
if(j::truth(([&]()->V{V _lhs72067=_v_71636_y;V _rhs72068=V(0.0);return j::binary(">",_lhs72067,_rhs72068);})())){(void)(((_v_71638_sum=j::binary("+",_v_71638_sum,j::get(_v_71610_soft.get(),([&]()->V{V _lhs72070=_v_71637_i;V _rhs72071=_v_71635_stride;return V(j::number(_lhs72070)-j::number(_rhs72071));})()))),j::increment(_v_71639_n,1,false)));
}
if(j::truth(([&]()->V{V _lhs72072=_v_71636_y;V _rhs72073=([&]()->V{V _lhs72074=_v_71589_rows.get();V _rhs72075=V(1.0);return V(j::number(_lhs72074)-j::number(_rhs72075));})();return j::binary("<",_lhs72072,_rhs72073);})())){(void)(((_v_71638_sum=j::binary("+",_v_71638_sum,j::get(_v_71610_soft.get(),([&]()->V{V _lhs72077=_v_71637_i;V _rhs72078=_v_71635_stride;return j::binary("+",_lhs72077,_rhs72078);})()))),j::increment(_v_71639_n,1,false)));
}
(void)(([&]()->V{V _base72080=_v_71609_pic.get();V _key72081=_v_71637_i;V _assign72079=([&]()->V{V _lhs72082=_v_71638_sum;V _rhs72083=_v_71639_n;return V(j::number(_lhs72082)/j::number(_rhs72083));})();return j::put(_base72080,_key72081,_assign72079);})());

}
}
}}

}

return V{};
},0);
_v_71640_paint=j::function([=](const j::Args &_args_fn71641,const V &_receiver_fn71641,const V &_self_fn71641) mutable ->V{
V _v_71642_text;
_v_71642_text=_args_fn71641[0];
{
V _v_71643_lines;
V _v_71644_ch;
V _v_71645_fg;
V _v_71646_bg;
j::Cell _v_71647_w;
_v_71643_lines=([&]()->V{V _receiver72084=_v_71642_text;V _method72085=this->_literals[25];V _method=j::get(_receiver72084,_method72085);j::Args _params72086=j::Args{this->_literals[24]};return j::call(_method,_params72086,_receiver72084);})();
V _pattern72087=_v_71611_out.get();
_v_71644_ch=j::get(_pattern72087,this->_literals[20]);
_v_71645_fg=j::get(_pattern72087,this->_literals[21]);
_v_71646_bg=j::get(_pattern72087,this->_literals[22]);
_v_71647_w.get()=j::get(_v_71611_out.get(),this->_literals[6]);
if(j::truth(_v_71608_tones.get())){
V _v_71664_at;
{V _v_71648_y;
_v_71648_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs72088=_v_71648_y;V _rhs72089=_v_71589_rows.get();return j::binary("<",_lhs72088,_rhs72089);})());(void)(j::increment(_v_71648_y,1,false))){{V _v_71649_x;
_v_71649_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72090=_v_71649_x;V _rhs72091=_v_71588_cols.get();return j::binary("<",_lhs72090,_rhs72091);})());(void)(j::increment(_v_71649_x,1,false))){
V _v_71650_s;
V _v_71651_i;
_v_71650_s=([&]()->V{V _callee72100=_v_71599_shade.get();return j::call(_callee72100,j::Args{([&]()->V{V _logical72092=([&]()->V{V _chain72093=_v_71643_lines;V _chain72094=j::get(_chain72093,_v_71648_y);if(j::nullish(_chain72094))return V{};V _chain72095=j::get(_chain72094,_v_71649_x);return _chain72095;})();return j::nullish(_logical72092)?this->_literals[12]:_logical72092;})(),j::get(_v_71595_color.get(),([&]()->V{V _lhs72096=([&]()->V{V _lhs72098=_v_71648_y;V _rhs72099=_v_71588_cols.get();return V(j::number(_lhs72098)*j::number(_rhs72099));})();V _rhs72097=_v_71649_x;return j::binary("+",_lhs72096,_rhs72097);})())});})();
_v_71651_i=([&]()->V{V _lhs72101=([&]()->V{V _lhs72103=([&]()->V{V _lhs72105=_v_71648_y;V _rhs72106=_v_71588_cols.get();return V(j::number(_lhs72105)*j::number(_rhs72106));})();V _rhs72104=_v_71649_x;return j::binary("+",_lhs72103,_rhs72104);})();V _rhs72102=V(3.0);return V(j::number(_lhs72101)*j::number(_rhs72102));})();
(void)(([&]()->V{V _base72108=_v_71609_pic.get();V _key72109=_v_71651_i;V _assign72107=([&]()->V{V _lhs72110=([&]()->V{V _lhs72112=_v_71650_s;V _rhs72113=V(16.0);return V(int(j::i32(_lhs72112)>>(j::u32(_rhs72113)&31)));})();V _rhs72111=V(255.0);return V(int(j::i32(_lhs72110)&j::i32(_rhs72111)));})();return j::put(_base72108,_key72109,_assign72107);})());
(void)(([&]()->V{V _base72115=_v_71609_pic.get();V _key72116=([&]()->V{V _lhs72117=_v_71651_i;V _rhs72118=V(1.0);return j::binary("+",_lhs72117,_rhs72118);})();V _assign72114=([&]()->V{V _lhs72119=([&]()->V{V _lhs72121=_v_71650_s;V _rhs72122=V(8.0);return V(int(j::i32(_lhs72121)>>(j::u32(_rhs72122)&31)));})();V _rhs72120=V(255.0);return V(int(j::i32(_lhs72119)&j::i32(_rhs72120)));})();return j::put(_base72115,_key72116,_assign72114);})());
(void)(([&]()->V{V _base72124=_v_71609_pic.get();V _key72125=([&]()->V{V _lhs72126=_v_71651_i;V _rhs72127=V(2.0);return j::binary("+",_lhs72126,_rhs72127);})();V _assign72123=([&]()->V{V _lhs72128=_v_71650_s;V _rhs72129=V(255.0);return V(int(j::i32(_lhs72128)&j::i32(_rhs72129)));})();return j::put(_base72124,_key72125,_assign72123);})());

}
}
}}
(void)(([&]()->V{V _callee72130=_v_71627_blur.get();return j::call(_callee72130,j::Args{});})());
{V _v_71652_y;
_v_71652_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs72131=_v_71652_y;V _rhs72132=_v_71589_rows.get();return j::binary("<",_lhs72131,_rhs72132);})());(void)(j::increment(_v_71652_y,1,false))){{V _v_71653_x;
_v_71653_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72133=_v_71653_x;V _rhs72134=_v_71647_w.get();return j::binary("<",_lhs72133,_rhs72134);})());(void)(j::increment(_v_71653_x,1,false))){{V _v_71654_c;
_v_71654_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs72135=_v_71654_c;V _rhs72136=V(3.0);return j::binary("<",_lhs72135,_rhs72136);})());(void)(j::increment(_v_71654_c,1,false))){
V _v_71655_sum;
_v_71655_sum=V(0.0);
{for(const auto &_item72137:j::elements(j::get(_v_71612_across.get(),_v_71653_x))){V _v_71656_j;
V _v_71657_k;
V _pattern72138=_item72137;
_v_71656_j=j::get(_pattern72138,V(0));
_v_71657_k=j::get(_pattern72138,V(1));
(void)((_v_71655_sum=j::binary("+",_v_71655_sum,([&]()->V{V _lhs72140=j::get(_v_71609_pic.get(),([&]()->V{V _lhs72142=([&]()->V{V _lhs72144=([&]()->V{V _lhs72146=([&]()->V{V _lhs72148=_v_71652_y;V _rhs72149=_v_71588_cols.get();return V(j::number(_lhs72148)*j::number(_rhs72149));})();V _rhs72147=_v_71656_j;return j::binary("+",_lhs72146,_rhs72147);})();V _rhs72145=V(3.0);return V(j::number(_lhs72144)*j::number(_rhs72145));})();V _rhs72143=_v_71654_c;return j::binary("+",_lhs72142,_rhs72143);})());V _rhs72141=_v_71657_k;return V(j::number(_lhs72140)*j::number(_rhs72141));})())));
}}
(void)(([&]()->V{V _base72151=_v_71615_wide.get();V _key72152=([&]()->V{V _lhs72153=([&]()->V{V _lhs72155=([&]()->V{V _lhs72157=([&]()->V{V _lhs72159=_v_71652_y;V _rhs72160=_v_71647_w.get();return V(j::number(_lhs72159)*j::number(_rhs72160));})();V _rhs72158=_v_71653_x;return j::binary("+",_lhs72157,_rhs72158);})();V _rhs72156=V(3.0);return V(j::number(_lhs72155)*j::number(_rhs72156));})();V _rhs72154=_v_71654_c;return j::binary("+",_lhs72153,_rhs72154);})();V _assign72150=_v_71655_sum;return j::put(_base72151,_key72152,_assign72150);})());

}
}
}}
}}
{V _v_71658_y;
_v_71658_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs72161=_v_71658_y;V _rhs72162=_v_71614_half.get();return j::binary("<",_lhs72161,_rhs72162);})());(void)(j::increment(_v_71658_y,1,false))){{V _v_71659_x;
_v_71659_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72163=_v_71659_x;V _rhs72164=_v_71647_w.get();return j::binary("<",_lhs72163,_rhs72164);})());(void)(j::increment(_v_71659_x,1,false))){{V _v_71660_c;
_v_71660_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs72165=_v_71660_c;V _rhs72166=V(3.0);return j::binary("<",_lhs72165,_rhs72166);})());(void)(j::increment(_v_71660_c,1,false))){
V _v_71661_sum;
_v_71661_sum=V(0.0);
{for(const auto &_item72167:j::elements(j::get(_v_71613_down.get(),_v_71658_y))){V _v_71662_j;
V _v_71663_k;
V _pattern72168=_item72167;
_v_71662_j=j::get(_pattern72168,V(0));
_v_71663_k=j::get(_pattern72168,V(1));
(void)((_v_71661_sum=j::binary("+",_v_71661_sum,([&]()->V{V _lhs72170=j::get(_v_71615_wide.get(),([&]()->V{V _lhs72172=([&]()->V{V _lhs72174=([&]()->V{V _lhs72176=([&]()->V{V _lhs72178=_v_71662_j;V _rhs72179=_v_71647_w.get();return V(j::number(_lhs72178)*j::number(_rhs72179));})();V _rhs72177=_v_71659_x;return j::binary("+",_lhs72176,_rhs72177);})();V _rhs72175=V(3.0);return V(j::number(_lhs72174)*j::number(_rhs72175));})();V _rhs72173=_v_71660_c;return j::binary("+",_lhs72172,_rhs72173);})());V _rhs72171=_v_71663_k;return V(j::number(_lhs72170)*j::number(_rhs72171));})())));
}}
(void)(([&]()->V{V _base72181=_v_71616_small.get();V _key72182=([&]()->V{V _lhs72183=([&]()->V{V _lhs72185=([&]()->V{V _lhs72187=([&]()->V{V _lhs72189=_v_71658_y;V _rhs72190=_v_71647_w.get();return V(j::number(_lhs72189)*j::number(_rhs72190));})();V _rhs72188=_v_71659_x;return j::binary("+",_lhs72187,_rhs72188);})();V _rhs72186=V(3.0);return V(j::number(_lhs72185)*j::number(_rhs72186));})();V _rhs72184=_v_71660_c;return j::binary("+",_lhs72183,_rhs72184);})();V _assign72180=_v_71661_sum;return j::put(_base72181,_key72182,_assign72180);})());

}
}
}}
}}
_v_71664_at=j::function([=](const j::Args &_args_fn71665,const V &_receiver_fn71665,const V &_self_fn71665) mutable ->V{
V _v_71666_x;
V _v_71667_y;
_v_71666_x=_args_fn71665[0];
_v_71667_y=_args_fn71665[1];
{
V _v_71668_i;
if(j::truth(([&]()->V{V _lhs72191=_v_71667_y;V _rhs72192=_v_71614_half.get();return j::binary(">=",_lhs72191,_rhs72192);})())){return _v_71597_base.get();
}
_v_71668_i=([&]()->V{V _lhs72193=([&]()->V{V _lhs72195=([&]()->V{V _lhs72197=_v_71667_y;V _rhs72198=_v_71647_w.get();return V(j::number(_lhs72197)*j::number(_rhs72198));})();V _rhs72196=_v_71666_x;return j::binary("+",_lhs72195,_rhs72196);})();V _rhs72194=V(3.0);return V(j::number(_lhs72193)*j::number(_rhs72194));})();
return ([&]()->V{V _lhs72199=([&]()->V{V _lhs72201=([&]()->V{V _lhs72203=([&]()->V{V _number72205=j::get(_v_71616_small.get(),_v_71668_i);return V(std::floor(j::number(_number72205)+.5));})();V _rhs72204=V(16.0);return V(double(int32_t(j::u32(_lhs72203)<<(j::u32(_rhs72204)&31))));})();V _rhs72202=([&]()->V{V _lhs72206=([&]()->V{V _number72210=j::get(_v_71616_small.get(),([&]()->V{V _lhs72211=_v_71668_i;V _rhs72212=V(1.0);return j::binary("+",_lhs72211,_rhs72212);})());return V(std::floor(j::number(_number72210)+.5));})();V _rhs72207=V(8.0);return V(double(int32_t(j::u32(_lhs72206)<<(j::u32(_rhs72207)&31))));})();return V(int(j::i32(_lhs72201)|j::i32(_rhs72202)));})();V _rhs72200=([&]()->V{V _number72215=j::get(_v_71616_small.get(),([&]()->V{V _lhs72216=_v_71668_i;V _rhs72217=V(2.0);return j::binary("+",_lhs72216,_rhs72217);})());return V(std::floor(j::number(_number72215)+.5));})();return V(int(j::i32(_lhs72199)|j::i32(_rhs72200)));})();

}

return V{};
},2);
{V _v_71669_y;
V _v_71670_k;
_v_71669_y=V(0.0);
_v_71670_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs72218=_v_71669_y;V _rhs72219=j::get(_v_71611_out.get(),this->_literals[7]);return j::binary("<",_lhs72218,_rhs72219);})());(void)(j::increment(_v_71669_y,1,false))){{V _v_71671_x;
_v_71671_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72220=_v_71671_x;V _rhs72221=_v_71647_w.get();return j::binary("<",_lhs72220,_rhs72221);})());(void)((j::increment(_v_71671_x,1,false),j::increment(_v_71670_k,1,false)))){
V _v_71672_top;
V _v_71673_bottom;
_v_71672_top=([&]()->V{V _callee72224=_v_71664_at;return j::call(_callee72224,j::Args{_v_71671_x,([&]()->V{V _lhs72222=V(2.0);V _rhs72223=_v_71669_y;return V(j::number(_lhs72222)*j::number(_rhs72223));})()});})();
_v_71673_bottom=([&]()->V{V _callee72229=_v_71664_at;return j::call(_callee72229,j::Args{_v_71671_x,([&]()->V{V _lhs72225=([&]()->V{V _lhs72227=V(2.0);V _rhs72228=_v_71669_y;return V(j::number(_lhs72227)*j::number(_rhs72228));})();V _rhs72226=V(1.0);return j::binary("+",_lhs72225,_rhs72226);})()});})();
if(j::truth(([&]()->V{V _lhs72230=_v_71672_top;V _rhs72231=_v_71673_bottom;return V(j::equal(_lhs72230,_rhs72231,true));})())){(void)((([&]()->V{V _base72233=_v_71644_ch;V _key72234=_v_71670_k;V _assign72232=this->_literals[12];return j::put(_base72233,_key72234,_assign72232);})(),([&]()->V{V _base72236=_v_71645_fg;V _key72237=_v_71670_k;V _assign72235=j::unary("-",V(1.0));return j::put(_base72236,_key72237,_assign72235);})(),([&]()->V{V _base72239=_v_71646_bg;V _key72240=_v_71670_k;V _assign72238=_v_71672_top;return j::put(_base72239,_key72240,_assign72238);})()));
}else {(void)((([&]()->V{V _base72242=_v_71644_ch;V _key72243=_v_71670_k;V _assign72241=this->_literals[26];return j::put(_base72242,_key72243,_assign72241);})(),([&]()->V{V _base72245=_v_71645_fg;V _key72246=_v_71670_k;V _assign72244=_v_71672_top;return j::put(_base72245,_key72246,_assign72244);})(),([&]()->V{V _base72248=_v_71646_bg;V _key72249=_v_71670_k;V _assign72247=_v_71673_bottom;return j::put(_base72248,_key72249,_assign72247);})()));
}

}
}
}}

}
else {if(j::truth(([&]()->V{V _logical72250=_v_71594_square.get();return j::truth(_logical72250)?_v_71595_color.get():_logical72250;})())){
{V _v_71674_y;
V _v_71675_k;
_v_71674_y=V(0.0);
_v_71675_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs72251=_v_71674_y;V _rhs72252=j::get(_v_71611_out.get(),this->_literals[7]);return j::binary("<",_lhs72251,_rhs72252);})());(void)(j::increment(_v_71674_y,1,false))){{V _v_71676_x;
_v_71676_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72253=_v_71676_x;V _rhs72254=_v_71647_w.get();return j::binary("<",_lhs72253,_rhs72254);})());(void)((j::increment(_v_71676_x,1,false),j::increment(_v_71675_k,1,false)))){
V _v_71677_top;
V _v_71678_bottom;
_v_71677_top=([&]()->V{V _callee72267=_v_71599_shade.get();return j::call(_callee72267,j::Args{([&]()->V{V _logical72255=([&]()->V{V _chain72256=_v_71643_lines;V _chain72257=j::get(_chain72256,([&]()->V{V _lhs72258=V(2.0);V _rhs72259=_v_71674_y;return V(j::number(_lhs72258)*j::number(_rhs72259));})());if(j::nullish(_chain72257))return V{};V _chain72260=j::get(_chain72257,_v_71676_x);return _chain72260;})();return j::nullish(_logical72255)?this->_literals[12]:_logical72255;})(),j::get(_v_71595_color.get(),([&]()->V{V _lhs72261=([&]()->V{V _lhs72263=([&]()->V{V _lhs72265=V(2.0);V _rhs72266=_v_71674_y;return V(j::number(_lhs72265)*j::number(_rhs72266));})();V _rhs72264=_v_71588_cols.get();return V(j::number(_lhs72263)*j::number(_rhs72264));})();V _rhs72262=_v_71676_x;return j::binary("+",_lhs72261,_rhs72262);})())});})();
_v_71678_bottom=(j::truth(([&]()->V{V _lhs72268=([&]()->V{V _lhs72270=([&]()->V{V _lhs72272=V(2.0);V _rhs72273=_v_71674_y;return V(j::number(_lhs72272)*j::number(_rhs72273));})();V _rhs72271=V(1.0);return j::binary("+",_lhs72270,_rhs72271);})();V _rhs72269=_v_71589_rows.get();return j::binary("<",_lhs72268,_rhs72269);})())?([&]()->V{V _callee72290=_v_71599_shade.get();return j::call(_callee72290,j::Args{([&]()->V{V _logical72274=([&]()->V{V _chain72275=_v_71643_lines;V _chain72276=j::get(_chain72275,([&]()->V{V _lhs72277=([&]()->V{V _lhs72279=V(2.0);V _rhs72280=_v_71674_y;return V(j::number(_lhs72279)*j::number(_rhs72280));})();V _rhs72278=V(1.0);return j::binary("+",_lhs72277,_rhs72278);})());if(j::nullish(_chain72276))return V{};V _chain72281=j::get(_chain72276,_v_71676_x);return _chain72281;})();return j::nullish(_logical72274)?this->_literals[12]:_logical72274;})(),j::get(_v_71595_color.get(),([&]()->V{V _lhs72282=([&]()->V{V _lhs72284=([&]()->V{V _lhs72286=([&]()->V{V _lhs72288=V(2.0);V _rhs72289=_v_71674_y;return V(j::number(_lhs72288)*j::number(_rhs72289));})();V _rhs72287=V(1.0);return j::binary("+",_lhs72286,_rhs72287);})();V _rhs72285=_v_71588_cols.get();return V(j::number(_lhs72284)*j::number(_rhs72285));})();V _rhs72283=_v_71676_x;return j::binary("+",_lhs72282,_rhs72283);})())});})():_v_71597_base.get());
if(j::truth(([&]()->V{V _lhs72291=_v_71677_top;V _rhs72292=_v_71678_bottom;return V(j::equal(_lhs72291,_rhs72292,true));})())){(void)((([&]()->V{V _base72294=_v_71644_ch;V _key72295=_v_71675_k;V _assign72293=this->_literals[12];return j::put(_base72294,_key72295,_assign72293);})(),([&]()->V{V _base72297=_v_71645_fg;V _key72298=_v_71675_k;V _assign72296=j::unary("-",V(1.0));return j::put(_base72297,_key72298,_assign72296);})(),([&]()->V{V _base72300=_v_71646_bg;V _key72301=_v_71675_k;V _assign72299=_v_71677_top;return j::put(_base72300,_key72301,_assign72299);})()));
}else {if(j::truth(([&]()->V{V _lhs72302=_v_71677_top;V _rhs72303=V(0.0);return j::binary("<",_lhs72302,_rhs72303);})())){(void)((([&]()->V{V _base72305=_v_71644_ch;V _key72306=_v_71675_k;V _assign72304=this->_literals[27];return j::put(_base72305,_key72306,_assign72304);})(),([&]()->V{V _base72308=_v_71645_fg;V _key72309=_v_71675_k;V _assign72307=_v_71678_bottom;return j::put(_base72308,_key72309,_assign72307);})(),([&]()->V{V _base72311=_v_71646_bg;V _key72312=_v_71675_k;V _assign72310=j::unary("-",V(1.0));return j::put(_base72311,_key72312,_assign72310);})()));
}else {(void)((([&]()->V{V _base72314=_v_71644_ch;V _key72315=_v_71675_k;V _assign72313=this->_literals[26];return j::put(_base72314,_key72315,_assign72313);})(),([&]()->V{V _base72317=_v_71645_fg;V _key72318=_v_71675_k;V _assign72316=_v_71677_top;return j::put(_base72317,_key72318,_assign72316);})(),([&]()->V{V _base72320=_v_71646_bg;V _key72321=_v_71675_k;V _assign72319=_v_71678_bottom;return j::put(_base72320,_key72321,_assign72319);})()));
}
}

}
}
}}

}
else {if(j::truth(_v_71594_square.get())){
{V _v_71679_y;
V _v_71680_k;
_v_71679_y=V(0.0);
_v_71680_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs72322=_v_71679_y;V _rhs72323=j::get(_v_71611_out.get(),this->_literals[7]);return j::binary("<",_lhs72322,_rhs72323);})());(void)(j::increment(_v_71679_y,1,false))){{V _v_71681_x;
_v_71681_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72324=_v_71681_x;V _rhs72325=_v_71647_w.get();return j::binary("<",_lhs72324,_rhs72325);})());(void)((j::increment(_v_71681_x,1,false),j::increment(_v_71680_k,1,false)))){
V _v_71682_best;
_v_71682_best=this->_literals[12];
{for(const auto &_item72326:j::elements(j::get(_v_71613_down.get(),_v_71679_y))){V _v_71683_j;
V _pattern72327=_item72326;
_v_71683_j=j::get(_pattern72327,V(0));
{for(const auto &_item72328:j::elements(j::get(_v_71612_across.get(),_v_71681_x))){V _v_71684_i;
V _pattern72329=_item72328;
_v_71684_i=j::get(_pattern72329,V(0));
{
V _v_71685_c;
_v_71685_c=([&]()->V{V _logical72330=([&]()->V{V _chain72331=_v_71643_lines;V _chain72332=j::get(_chain72331,_v_71683_j);if(j::nullish(_chain72332))return V{};V _chain72333=j::get(_chain72332,_v_71684_i);return _chain72333;})();return j::nullish(_logical72330)?this->_literals[12]:_logical72330;})();
if(j::truth(([&]()->V{V _lhs72334=([&]()->V{V _callee72336=_v_71605_weight.get();return j::call(_callee72336,j::Args{_v_71685_c});})();V _rhs72335=([&]()->V{V _callee72337=_v_71605_weight.get();return j::call(_callee72337,j::Args{_v_71682_best});})();return j::binary(">",_lhs72334,_rhs72335);})())){(void)((_v_71682_best=_v_71685_c));
}

}
}}
}}
(void)(([&]()->V{V _base72340=_v_71644_ch;V _key72341=_v_71680_k;V _assign72339=_v_71682_best;return j::put(_base72340,_key72341,_assign72339);})());

}
}
}}

}
else {
{V _v_71686_y;
V _v_71687_k;
_v_71686_y=V(0.0);
_v_71687_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs72342=_v_71686_y;V _rhs72343=_v_71589_rows.get();return j::binary("<",_lhs72342,_rhs72343);})());(void)(j::increment(_v_71686_y,1,false))){{V _v_71688_x;
_v_71688_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs72344=_v_71688_x;V _rhs72345=_v_71588_cols.get();return j::binary("<",_lhs72344,_rhs72345);})());(void)((j::increment(_v_71688_x,1,false),j::increment(_v_71687_k,1,false)))){
V _v_71689_c;
_v_71689_c=([&]()->V{V _base72347=_v_71644_ch;V _key72348=_v_71687_k;V _assign72346=([&]()->V{V _logical72349=([&]()->V{V _chain72350=_v_71643_lines;V _chain72351=j::get(_chain72350,_v_71686_y);if(j::nullish(_chain72351))return V{};V _chain72352=j::get(_chain72351,_v_71688_x);return _chain72352;})();return j::nullish(_logical72349)?this->_literals[12]:_logical72349;})();return j::put(_base72347,_key72348,_assign72346);})();
(void)(([&]()->V{V _base72354=_v_71645_fg;V _key72355=_v_71687_k;V _assign72353=(j::truth(([&]()->V{V _logical72356=_v_71595_color.get();return j::truth(_logical72356)?([&]()->V{V _lhs72357=_v_71689_c;V _rhs72358=this->_literals[12];return V(!j::equal(_lhs72357,_rhs72358,true));})():_logical72356;})())?([&]()->V{V _logical72359=j::get(_v_71596_inks.get(),j::get(_v_71595_color.get(),_v_71687_k));return j::nullish(_logical72359)?j::get(_v_71596_inks.get(),V(0.0)):_logical72359;})():j::unary("-",V(1.0)));return j::put(_base72354,_key72355,_assign72353);})());
(void)(([&]()->V{V _base72361=_v_71646_bg;V _key72362=_v_71687_k;V _assign72360=_v_71597_base.get();return j::put(_base72361,_key72362,_assign72360);})());

}
}
}}

}

}
}

}

return V{};
},1);
return ([&]()->V{V _receiver72364=j::builtin("Object");V _method72365=this->_literals[30];V _method=j::get(_receiver72364,_method72365);j::Args _params72366=j::Args{_v_71611_out.get(),([&]()->V{V _obj72363=j::object();j::put(_obj72363,this->_literals[28],_v_71621_size);j::put(_obj72363,this->_literals[29],_v_71640_paint);return _obj72363;})()};return j::call(_method,_params72366,_receiver72364);})();

}

return V{};
},2);
this->_v_71690_still.get()=j::function([=](const j::Args &_args_fn71691,const V &_receiver_fn71691,const V &_self_fn71691) mutable ->V{
V _v_71692_piece;
V _v_71693_light;
V _v_71694_options;
_v_71692_piece=_args_fn71691[0];
V _default72367=_args_fn71691[1];if(_default72367.kind==V::Undefined||_default72367.kind==V::Hole)_default72367=([&]()->V{V _obj72368=j::object();return _obj72368;})();
V _pattern72369=_default72367;
V _default72370=j::get(_pattern72369,this->_literals[31]);if(_default72370.kind==V::Undefined||_default72370.kind==V::Hole)_default72370=V(false);
_v_71693_light=_default72370;
V _default72371=j::get(_pattern72369,this->_literals[32]);if(_default72371.kind==V::Undefined||_default72371.kind==V::Hole)_default72371=([&]()->V{V _obj72372=j::object();return _obj72372;})();
_v_71694_options=_default72371;
{
V _v_71695_mod;
j::Cell _v_71696_cells;
_v_71695_mod=([&]()->V{V _callee72373=this->_v_71571_resolve.get();return j::call(_callee72373,j::Args{_v_71692_piece});})();
_v_71696_cells.get()=([&]()->V{V _callee72374=this->_v_71586_painter.get();return j::call(_callee72374,j::Args{j::get(_v_71695_mod,this->_literals[33]),V(false)});})();
(void)(([&]()->V{V _receiver72380=_v_71696_cells.get();V _method72381=this->_literals[28];V _method=j::get(_receiver72380,_method72381);j::Args _params72382=j::Args{j::get(j::get(_v_71695_mod,this->_literals[33]),this->_literals[6]),([&]()->V{V _number72377=([&]()->V{V _lhs72378=j::get(j::get(_v_71695_mod,this->_literals[33]),this->_literals[7]);V _rhs72379=V(2.0);return V(j::number(_lhs72378)/j::number(_rhs72379));})();return V(std::ceil(j::number(_number72377)));})()};return j::call(_method,_params72382,_receiver72380);})());
(void)(([&]()->V{V _receiver72392=_v_71696_cells.get();V _method72393=this->_literals[29];V _method=j::get(_receiver72392,_method72393);j::Args _params72394=j::Args{([&]()->V{V _callee72385=([&]()->V{V _receiver72389=_v_71695_mod;V _method72390=this->_literals[36];V _method=j::get(_receiver72389,_method72390);j::Args _params72391=j::Args{([&]()->V{V _obj72386=j::object();V _spread72387=j::get(j::get(_v_71695_mod,this->_literals[33]),this->_literals[32]);for(const auto &_key:j::keys(_spread72387))j::put(_obj72386,_key,j::get(_spread72387,_key));V _spread72388=_v_71694_options;for(const auto &_key:j::keys(_spread72388))j::put(_obj72386,_key,j::get(_spread72388,_key));return _obj72386;})()};return j::call(_method,_params72391,_receiver72389);})();return j::call(_callee72385,j::Args{([&]()->V{V _logical72383=j::get(j::get(_v_71695_mod,this->_literals[33]),this->_literals[34]);return j::nullish(_logical72383)?V(0.0):_logical72383;})(),([&]()->V{V _obj72384=j::object();j::put(_obj72384,this->_literals[35],_v_71693_light);return _obj72384;})()});})()};return j::call(_method,_params72394,_receiver72392);})());
return ([&]()->V{V _receiver72395=([&]()->V{V _receiver72411=j::builtin("Array");V _method72412=this->_literals[5];V _method=j::get(_receiver72411,_method72412);j::Args _params72413=j::Args{([&]()->V{V _obj72398=j::object();j::put(_obj72398,this->_literals[1],j::get(_v_71696_cells.get(),this->_literals[7]));return _obj72398;})(),j::function([=](const j::Args &_args_fn71697,const V &_receiver_fn71697,const V &_self_fn71697) mutable ->V{
V _v_71698__;
V _v_71699_y;
_v_71698__=_args_fn71697[0];
_v_71699_y=_args_fn71697[1];
return ([&]()->V{V _receiver72399=([&]()->V{V _receiver72408=j::get(_v_71696_cells.get(),this->_literals[20]);V _method72409=this->_literals[38];V _method=j::get(_receiver72408,_method72409);j::Args _params72410=j::Args{([&]()->V{V _lhs72402=_v_71699_y;V _rhs72403=j::get(_v_71696_cells.get(),this->_literals[6]);return V(j::number(_lhs72402)*j::number(_rhs72403));})(),([&]()->V{V _lhs72404=([&]()->V{V _lhs72406=_v_71699_y;V _rhs72407=V(1.0);return j::binary("+",_lhs72406,_rhs72407);})();V _rhs72405=j::get(_v_71696_cells.get(),this->_literals[6]);return V(j::number(_lhs72404)*j::number(_rhs72405));})()};return j::call(_method,_params72410,_receiver72408);})();V _method72400=this->_literals[39];V _method=j::get(_receiver72399,_method72400);j::Args _params72401=j::Args{this->_literals[37]};return j::call(_method,_params72401,_receiver72399);})();
return V{};
},2)};return j::call(_method,_params72413,_receiver72411);})();V _method72396=this->_literals[39];V _method=j::get(_receiver72395,_method72396);j::Args _params72397=j::Args{this->_literals[24]};return j::call(_method,_params72397,_receiver72395);})();

}

return V{};
},1);
this->_v_71700_play.get()=j::function([](const j::Args &_a,const V &,const V &)->V{return j::terminal_play(_a[0],j::defaulted(_a[1],j::object()));});
auto &_import826=j::module("node:process");
this->_v_71545_process=_import826.exported("default");
auto &_import862=j::module("library");
this->_v_71546_isPiece=_import862.exported("isPiece");
this->_v_71547_load=_import862.exported("load");
{auto &_m=j::module("print");this->exports["banner"]=_m.exported("banner");}
this->exports["still"]=this->_v_71690_still;
this->exports["play"]=this->_v_71700_play;
this->_v_71548_ENTER.get()=this->_literals[40];
this->_v_71549_LEAVE.get()=this->_literals[41];
this->_v_71550_GAP.get()=V(4.0);
this->_v_71551_NEAR.get()=V(6.0);
this->_v_71552_INK.get()=([&]()->V{V _obj72414=j::object();j::put(_obj72414,this->_literals[12],V(0.0));j::put(_obj72414,this->_literals[42],V(0.15));j::put(_obj72414,this->_literals[43],V(0.45));j::put(_obj72414,this->_literals[44],V(0.9));j::put(_obj72414,this->_literals[45],V(0.25));j::put(_obj72414,this->_literals[46],V(0.5));j::put(_obj72414,this->_literals[47],V(0.75));j::put(_obj72414,this->_literals[48],V(1.0));return _obj72414;})();
this->_v_71553_int.get()=j::function([=](const j::Args &_args_fn71554,const V &_receiver_fn71554,const V &_self_fn71554) mutable ->V{
V _v_71555_hex;
_v_71555_hex=_args_fn71554[0];
return ([&]()->V{V _callee72418=j::builtin("parseInt");return j::call(_callee72418,j::Args{([&]()->V{V _receiver72415=_v_71555_hex;V _method72416=this->_literals[38];V _method=j::get(_receiver72415,_method72416);j::Args _params72417=j::Args{V(1.0),V(7.0)};return j::call(_method,_params72417,_receiver72415);})(),V(16.0)});})();
return V{};
},1);
this->_v_71556_mix.get()=j::function([=](const j::Args &_args_fn71557,const V &_receiver_fn71557,const V &_self_fn71557) mutable ->V{
j::Cell _v_71558_a;
j::Cell _v_71559_b;
j::Cell _v_71560_k;
_v_71558_a.get()=_args_fn71557[0];
_v_71559_b.get()=_args_fn71557[1];
_v_71560_k.get()=_args_fn71557[2];
return ([&]()->V{V _receiver72460=([&]()->V{j::Args _array72463;_array72463.push_back(V(16.0));_array72463.push_back(V(8.0));_array72463.push_back(V(0.0));return j::array(std::move(_array72463));})();V _method72461=this->_literals[49];V _method=j::get(_receiver72460,_method72461);j::Args _params72462=j::Args{j::function([=](const j::Args &_args_fn71561,const V &_receiver_fn71561,const V &_self_fn71561) mutable ->V{
V _v_71562_out;
V _v_71563_s;
_v_71562_out=_args_fn71561[0];
_v_71563_s=_args_fn71561[1];
return ([&]()->V{V _lhs72419=_v_71562_out;V _rhs72420=([&]()->V{V _lhs72421=([&]()->V{V _number72441=([&]()->V{V _lhs72442=([&]()->V{V _lhs72444=([&]()->V{V _lhs72446=_v_71558_a.get();V _rhs72447=_v_71563_s;return V(int(j::i32(_lhs72446)>>(j::u32(_rhs72447)&31)));})();V _rhs72445=V(255.0);return V(int(j::i32(_lhs72444)&j::i32(_rhs72445)));})();V _rhs72443=([&]()->V{V _lhs72448=([&]()->V{V _lhs72450=([&]()->V{V _lhs72452=([&]()->V{V _lhs72454=_v_71559_b.get();V _rhs72455=_v_71563_s;return V(int(j::i32(_lhs72454)>>(j::u32(_rhs72455)&31)));})();V _rhs72453=V(255.0);return V(int(j::i32(_lhs72452)&j::i32(_rhs72453)));})();V _rhs72451=([&]()->V{V _lhs72456=([&]()->V{V _lhs72458=_v_71558_a.get();V _rhs72459=_v_71563_s;return V(int(j::i32(_lhs72458)>>(j::u32(_rhs72459)&31)));})();V _rhs72457=V(255.0);return V(int(j::i32(_lhs72456)&j::i32(_rhs72457)));})();return V(j::number(_lhs72450)-j::number(_rhs72451));})();V _rhs72449=_v_71560_k.get();return V(j::number(_lhs72448)*j::number(_rhs72449));})();return j::binary("+",_lhs72442,_rhs72443);})();return V(std::floor(j::number(_number72441)+.5));})();V _rhs72422=_v_71563_s;return V(double(int32_t(j::u32(_lhs72421)<<(j::u32(_rhs72422)&31))));})();return V(int(j::i32(_lhs72419)|j::i32(_rhs72420)));})();
return V{};
},2),V(0.0)};return j::call(_method,_params72462,_receiver72460);})();
return V{};
},3);
this->_v_71564_sgr.get()=j::function([=](const j::Args &_args_fn71565,const V &_receiver_fn71565,const V &_self_fn71565) mutable ->V{
V _v_71566_layer;
V _v_71567_c;
_v_71566_layer=_args_fn71565[0];
_v_71567_c=_args_fn71565[1];
return ([&]()->V{std::u16string _text72464;_text72464+=u"\x1b" u"[";_text72464+=j::string(_v_71566_layer);_text72464+=u";2;";_text72464+=j::string(([&]()->V{V _lhs72465=([&]()->V{V _lhs72467=_v_71567_c;V _rhs72468=V(16.0);return V(int(j::i32(_lhs72467)>>(j::u32(_rhs72468)&31)));})();V _rhs72466=V(255.0);return V(int(j::i32(_lhs72465)&j::i32(_rhs72466)));})());_text72464+=u";";_text72464+=j::string(([&]()->V{V _lhs72469=([&]()->V{V _lhs72471=_v_71567_c;V _rhs72472=V(8.0);return V(int(j::i32(_lhs72471)>>(j::u32(_rhs72472)&31)));})();V _rhs72470=V(255.0);return V(int(j::i32(_lhs72469)&j::i32(_rhs72470)));})());_text72464+=u";";_text72464+=j::string(([&]()->V{V _lhs72473=_v_71567_c;V _rhs72474=V(255.0);return V(int(j::i32(_lhs72473)&j::i32(_rhs72474)));})());_text72464+=u"m";return V(std::move(_text72464));})();
return V{};
},2);
this->_v_71568_dark.get()=j::function([=](const j::Args &_args_fn71569,const V &_receiver_fn71569,const V &_self_fn71569) mutable ->V{
V _v_71570_c;
_v_71570_c=_args_fn71569[0];
return ([&]()->V{V _lhs72475=([&]()->V{V _lhs72477=([&]()->V{V _lhs72479=([&]()->V{V _lhs72481=V(0.2126);V _rhs72482=([&]()->V{V _lhs72483=([&]()->V{V _lhs72485=_v_71570_c;V _rhs72486=V(16.0);return V(int(j::i32(_lhs72485)>>(j::u32(_rhs72486)&31)));})();V _rhs72484=V(255.0);return V(int(j::i32(_lhs72483)&j::i32(_rhs72484)));})();return V(j::number(_lhs72481)*j::number(_rhs72482));})();V _rhs72480=([&]()->V{V _lhs72487=V(0.7152);V _rhs72488=([&]()->V{V _lhs72489=([&]()->V{V _lhs72491=_v_71570_c;V _rhs72492=V(8.0);return V(int(j::i32(_lhs72491)>>(j::u32(_rhs72492)&31)));})();V _rhs72490=V(255.0);return V(int(j::i32(_lhs72489)&j::i32(_rhs72490)));})();return V(j::number(_lhs72487)*j::number(_rhs72488));})();return j::binary("+",_lhs72479,_rhs72480);})();V _rhs72478=([&]()->V{V _lhs72493=V(0.0722);V _rhs72494=([&]()->V{V _lhs72495=_v_71570_c;V _rhs72496=V(255.0);return V(int(j::i32(_lhs72495)&j::i32(_rhs72496)));})();return V(j::number(_lhs72493)*j::number(_rhs72494));})();return j::binary("+",_lhs72477,_rhs72478);})();V _rhs72476=V(128.0);return j::binary("<",_lhs72475,_rhs72476);})();
return V{};
},1);
}
};
}
std::unique_ptr<Module> new_terminal(){return std::make_unique<Generated_terminal>();}
}
