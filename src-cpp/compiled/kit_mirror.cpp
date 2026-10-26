// Native source generated from src/kit/mirror.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_mirror final:j::Module {
j::Cell _v_36607_MIRROR_X;
j::Cell _v_36608_MIRROR_Y;
j::Cell _v_36609_DOTS_X;
j::Cell _v_36610_DOTS_Y;
j::Cell _v_36611_mirrors;
j::Cell _v_36612_mirror;
std::vector<V> _literals;
Generated_kit_mirror():_v_36607_MIRROR_X(this->slot("MIRROR_X")),_v_36608_MIRROR_Y(this->slot("MIRROR_Y")),_v_36609_DOTS_X(this->slot("DOTS_X")),_v_36610_DOTS_Y(this->slot("DOTS_Y")),_v_36611_mirrors(this->slot("mirrors")),_v_36612_mirror(this->slot("mirror")),_literals{V(u"length"),
V(u"charCodeAt"),
V(u"reduce"),
V(u"x"),
V(u"y"),
V(u"/\\"),
V(u"()"),
V(u"<>"),
V(u"[]"),
V(u"{}"),
V(u"┌┐"),
V(u"└┘"),
V(u"├┤"),
V(u"╭╮"),
V(u"╰╯"),
V(u"┏┓"),
V(u"┗┛"),
V(u"┣┫"),
V(u"╔╗"),
V(u"╚╝"),
V(u"╠╣"),
V(u"╒╕"),
V(u"╓╖"),
V(u"╘╛"),
V(u"╙╜"),
V(u"╞╡"),
V(u"╟╢"),
V(u"┍┑"),
V(u"┎┒"),
V(u"┕┙"),
V(u"┖┚"),
V(u"┝┥"),
V(u"┠┨"),
V(u"▌▐"),
V(u"▖▗"),
V(u"▘▝"),
V(u"▙▟"),
V(u"▛▜"),
V(u"▚▞"),
V(u"▏▕"),
V(u"◀▶"),
V(u"◄►"),
V(u"◁▷"),
V(u"◢◣"),
V(u"◤◥"),
V(u"╱╲"),
V(u"⌐¬"),
V(u"«»"),
V(u"‹›"),
V(u"bd"),
V(u"pq"),
V(u"↖↗"),
V(u"↙↘"),
V(u"←→"),
V(u"⇐⇒"),
V(u"╴╶"),
V(u"╸╺"),
V(u"◜◝"),
V(u"◟◞"),
V(u"⊂⊃"),
V(u"▀▄"),
V(u"┌└"),
V(u"┐┘"),
V(u"┬┴"),
V(u"╭╰"),
V(u"╮╯"),
V(u"┏┗"),
V(u"┓┛"),
V(u"┳┻"),
V(u"╔╚"),
V(u"╗╝"),
V(u"╦╩"),
V(u"╒╘"),
V(u"╕╛"),
V(u"╓╙"),
V(u"╖╜"),
V(u"╤╧"),
V(u"╥╨"),
V(u"┍┕"),
V(u"┎┖"),
V(u"┑┙"),
V(u"┒┚"),
V(u"┯┷"),
V(u"┰┸"),
V(u"▖▘"),
V(u"▗▝"),
V(u"▙▛"),
V(u"▟▜"),
V(u"▁▔"),
V(u"▲▼"),
V(u"△▽"),
V(u"◢◥"),
V(u"◣◤"),
V(u"^v"),
V(u"‾_"),
V(u".'"),
V(u",`"),
V(u"∩∪"),
V(u"bp"),
V(u"dq"),
V(u"MW"),
V(u"nu"),
V(u"↑↓"),
V(u"⇑⇓"),
V(u"↖↙"),
V(u"↗↘"),
V(u"∧∨"),
V(u"╵╷"),
V(u"╹╻"),
V(u"◠◡"),
V(u"◜◟"),
V(u"◝◞"),
V(u"⊓⊔"),
V(u"⊤⊥")}{
this->exports["mirror"]=this->_v_36612_mirror;
}
void init() override{if(initialized)return;initialized=true;
this->_v_36612_mirror.get()=j::function([=](const j::Args &_args_fn36613,const V &_receiver_fn36613,const V &_self_fn36613) mutable ->V{
{
V _v_36614_make;
_v_36614_make=j::function([=](const j::Args &_args_fn36615,const V &_receiver_fn36615,const V &_self_fn36615) mutable ->V{
V _v_36616_pairs;
V _v_36617_dots;
_v_36616_pairs=_args_fn36615[0];
_v_36617_dots=_args_fn36615[1];
{
V _v_36618_m;
_v_36618_m=([&]()->V{V _callee36627=j::builtin("Uint16Array");return j::construct(_callee36627,j::Args{V(65536.0)});})();
{V _v_36619_i;
_v_36619_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs36628=_v_36619_i;V _rhs36629=j::get(_v_36618_m,this->_literals[0]);return j::binary("<",_lhs36628,_rhs36629);})());(void)(j::increment(_v_36619_i,1,false))){(void)(([&]()->V{V _base36631=_v_36618_m;V _key36632=_v_36619_i;V _assign36630=_v_36619_i;return j::put(_base36631,_key36632,_assign36630);})());
}}
{for(const auto &_item36633:j::elements(_v_36616_pairs)){V _v_36620_a;
V _v_36621_b;
V _pattern36634=_item36633;
_v_36620_a=j::get(_pattern36634,V(0));
_v_36621_b=j::get(_pattern36634,V(1));
(void)((([&]()->V{V _base36636=_v_36618_m;V _key36637=([&]()->V{V _receiver36638=_v_36620_a;V _method36639=this->_literals[1];V _method=j::get(_receiver36638,_method36639);j::Args _params36640=j::Args{V(0.0)};return j::call(_method,_params36640,_receiver36638);})();V _assign36635=([&]()->V{V _receiver36641=_v_36621_b;V _method36642=this->_literals[1];V _method=j::get(_receiver36641,_method36642);j::Args _params36643=j::Args{V(0.0)};return j::call(_method,_params36643,_receiver36641);})();return j::put(_base36636,_key36637,_assign36635);})(),([&]()->V{V _base36645=_v_36618_m;V _key36646=([&]()->V{V _receiver36647=_v_36621_b;V _method36648=this->_literals[1];V _method=j::get(_receiver36647,_method36648);j::Args _params36649=j::Args{V(0.0)};return j::call(_method,_params36649,_receiver36647);})();V _assign36644=([&]()->V{V _receiver36650=_v_36620_a;V _method36651=this->_literals[1];V _method=j::get(_receiver36650,_method36651);j::Args _params36652=j::Args{V(0.0)};return j::call(_method,_params36652,_receiver36650);})();return j::put(_base36645,_key36646,_assign36644);})()));
}}
{j::Cell _v_36622_k;
_v_36622_k.get()=V(0.0);
for(;j::truth(([&]()->V{V _lhs36653=_v_36622_k.get();V _rhs36654=V(256.0);return j::binary("<",_lhs36653,_rhs36654);})());_v_36622_k=j::Cell(_v_36622_k.get()),(void)(j::increment(_v_36622_k.get(),1,false))){(void)(([&]()->V{V _base36656=_v_36618_m;V _key36657=([&]()->V{V _lhs36658=V(10240.0);V _rhs36659=_v_36622_k.get();return j::binary("+",_lhs36658,_rhs36659);})();V _assign36655=([&]()->V{V _lhs36660=V(10240.0);V _rhs36661=([&]()->V{V _receiver36671=_v_36617_dots;V _method36672=this->_literals[2];V _method=j::get(_receiver36671,_method36672);j::Args _params36673=j::Args{j::function([=](const j::Args &_args_fn36623,const V &_receiver_fn36623,const V &_self_fn36623) mutable ->V{
V _v_36624_v;
V _v_36625_a;
V _v_36626_b;
_v_36624_v=_args_fn36623[0];
V _pattern36662=_args_fn36623[1];
_v_36625_a=j::get(_pattern36662,V(0));
_v_36626_b=j::get(_pattern36662,V(1));
return ([&]()->V{V _lhs36663=([&]()->V{V _lhs36665=_v_36624_v;V _rhs36666=(j::truth(([&]()->V{V _lhs36667=_v_36622_k.get();V _rhs36668=_v_36625_a;return V(int(j::i32(_lhs36667)&j::i32(_rhs36668)));})())?_v_36626_b:V(0.0));return V(int(j::i32(_lhs36665)|j::i32(_rhs36666)));})();V _rhs36664=(j::truth(([&]()->V{V _lhs36669=_v_36622_k.get();V _rhs36670=_v_36626_b;return V(int(j::i32(_lhs36669)&j::i32(_rhs36670)));})())?_v_36625_a:V(0.0));return V(int(j::i32(_lhs36663)|j::i32(_rhs36664)));})();
return V{};
},2),V(0.0)};return j::call(_method,_params36673,_receiver36671);})();return j::binary("+",_lhs36660,_rhs36661);})();return j::put(_base36656,_key36657,_assign36655);})());
}}
return _v_36618_m;

}

return V{};
},2);
return (j::nullish(this->_v_36611_mirrors.get())?(this->_v_36611_mirrors.get()=([&]()->V{V _obj36675=j::object();j::put(_obj36675,this->_literals[3],([&]()->V{V _callee36676=_v_36614_make;return j::call(_callee36676,j::Args{this->_v_36607_MIRROR_X.get(),this->_v_36609_DOTS_X.get()});})());j::put(_obj36675,this->_literals[4],([&]()->V{V _callee36677=_v_36614_make;return j::call(_callee36677,j::Args{this->_v_36608_MIRROR_Y.get(),this->_v_36610_DOTS_Y.get()});})());return _obj36675;})()):this->_v_36611_mirrors.get());

}

return V{};
},0);
this->exports["mirror"]=this->_v_36612_mirror;
this->_v_36607_MIRROR_X.get()=([&]()->V{j::Args _array36678;_array36678.push_back(this->_literals[5]);_array36678.push_back(this->_literals[6]);_array36678.push_back(this->_literals[7]);_array36678.push_back(this->_literals[8]);_array36678.push_back(this->_literals[9]);_array36678.push_back(this->_literals[10]);_array36678.push_back(this->_literals[11]);_array36678.push_back(this->_literals[12]);_array36678.push_back(this->_literals[13]);_array36678.push_back(this->_literals[14]);_array36678.push_back(this->_literals[15]);_array36678.push_back(this->_literals[16]);_array36678.push_back(this->_literals[17]);_array36678.push_back(this->_literals[18]);_array36678.push_back(this->_literals[19]);_array36678.push_back(this->_literals[20]);_array36678.push_back(this->_literals[21]);_array36678.push_back(this->_literals[22]);_array36678.push_back(this->_literals[23]);_array36678.push_back(this->_literals[24]);_array36678.push_back(this->_literals[25]);_array36678.push_back(this->_literals[26]);_array36678.push_back(this->_literals[27]);_array36678.push_back(this->_literals[28]);_array36678.push_back(this->_literals[29]);_array36678.push_back(this->_literals[30]);_array36678.push_back(this->_literals[31]);_array36678.push_back(this->_literals[32]);_array36678.push_back(this->_literals[33]);_array36678.push_back(this->_literals[34]);_array36678.push_back(this->_literals[35]);_array36678.push_back(this->_literals[36]);_array36678.push_back(this->_literals[37]);_array36678.push_back(this->_literals[38]);_array36678.push_back(this->_literals[39]);_array36678.push_back(this->_literals[40]);_array36678.push_back(this->_literals[41]);_array36678.push_back(this->_literals[42]);_array36678.push_back(this->_literals[43]);_array36678.push_back(this->_literals[44]);_array36678.push_back(this->_literals[45]);_array36678.push_back(this->_literals[46]);_array36678.push_back(this->_literals[47]);_array36678.push_back(this->_literals[48]);_array36678.push_back(this->_literals[49]);_array36678.push_back(this->_literals[50]);_array36678.push_back(this->_literals[51]);_array36678.push_back(this->_literals[52]);_array36678.push_back(this->_literals[53]);_array36678.push_back(this->_literals[54]);_array36678.push_back(this->_literals[55]);_array36678.push_back(this->_literals[56]);_array36678.push_back(this->_literals[57]);_array36678.push_back(this->_literals[58]);_array36678.push_back(this->_literals[59]);return j::array(std::move(_array36678));})();
this->_v_36608_MIRROR_Y.get()=([&]()->V{j::Args _array36679;_array36679.push_back(this->_literals[5]);_array36679.push_back(this->_literals[60]);_array36679.push_back(this->_literals[61]);_array36679.push_back(this->_literals[62]);_array36679.push_back(this->_literals[63]);_array36679.push_back(this->_literals[64]);_array36679.push_back(this->_literals[65]);_array36679.push_back(this->_literals[66]);_array36679.push_back(this->_literals[67]);_array36679.push_back(this->_literals[68]);_array36679.push_back(this->_literals[69]);_array36679.push_back(this->_literals[70]);_array36679.push_back(this->_literals[71]);_array36679.push_back(this->_literals[72]);_array36679.push_back(this->_literals[73]);_array36679.push_back(this->_literals[74]);_array36679.push_back(this->_literals[75]);_array36679.push_back(this->_literals[76]);_array36679.push_back(this->_literals[77]);_array36679.push_back(this->_literals[78]);_array36679.push_back(this->_literals[79]);_array36679.push_back(this->_literals[80]);_array36679.push_back(this->_literals[81]);_array36679.push_back(this->_literals[82]);_array36679.push_back(this->_literals[83]);_array36679.push_back(this->_literals[84]);_array36679.push_back(this->_literals[85]);_array36679.push_back(this->_literals[86]);_array36679.push_back(this->_literals[87]);_array36679.push_back(this->_literals[38]);_array36679.push_back(this->_literals[88]);_array36679.push_back(this->_literals[89]);_array36679.push_back(this->_literals[90]);_array36679.push_back(this->_literals[91]);_array36679.push_back(this->_literals[92]);_array36679.push_back(this->_literals[45]);_array36679.push_back(this->_literals[93]);_array36679.push_back(this->_literals[94]);_array36679.push_back(this->_literals[95]);_array36679.push_back(this->_literals[96]);_array36679.push_back(this->_literals[97]);_array36679.push_back(this->_literals[98]);_array36679.push_back(this->_literals[99]);_array36679.push_back(this->_literals[100]);_array36679.push_back(this->_literals[101]);_array36679.push_back(this->_literals[102]);_array36679.push_back(this->_literals[103]);_array36679.push_back(this->_literals[104]);_array36679.push_back(this->_literals[105]);_array36679.push_back(this->_literals[106]);_array36679.push_back(this->_literals[107]);_array36679.push_back(this->_literals[108]);_array36679.push_back(this->_literals[109]);_array36679.push_back(this->_literals[110]);_array36679.push_back(this->_literals[111]);_array36679.push_back(this->_literals[112]);_array36679.push_back(this->_literals[113]);return j::array(std::move(_array36679));})();
this->_v_36609_DOTS_X.get()=([&]()->V{j::Args _array36680;_array36680.push_back(([&]()->V{j::Args _array36681;_array36681.push_back(V(1.0));_array36681.push_back(V(8.0));return j::array(std::move(_array36681));})());_array36680.push_back(([&]()->V{j::Args _array36682;_array36682.push_back(V(2.0));_array36682.push_back(V(16.0));return j::array(std::move(_array36682));})());_array36680.push_back(([&]()->V{j::Args _array36683;_array36683.push_back(V(4.0));_array36683.push_back(V(32.0));return j::array(std::move(_array36683));})());_array36680.push_back(([&]()->V{j::Args _array36684;_array36684.push_back(V(64.0));_array36684.push_back(V(128.0));return j::array(std::move(_array36684));})());return j::array(std::move(_array36680));})();
this->_v_36610_DOTS_Y.get()=([&]()->V{j::Args _array36685;_array36685.push_back(([&]()->V{j::Args _array36686;_array36686.push_back(V(1.0));_array36686.push_back(V(64.0));return j::array(std::move(_array36686));})());_array36685.push_back(([&]()->V{j::Args _array36687;_array36687.push_back(V(2.0));_array36687.push_back(V(4.0));return j::array(std::move(_array36687));})());_array36685.push_back(([&]()->V{j::Args _array36688;_array36688.push_back(V(8.0));_array36688.push_back(V(128.0));return j::array(std::move(_array36688));})());_array36685.push_back(([&]()->V{j::Args _array36689;_array36689.push_back(V(16.0));_array36689.push_back(V(32.0));return j::array(std::move(_array36689));})());return j::array(std::move(_array36685));})();
this->_v_36611_mirrors.get()=V::null();
}
};
}
std::unique_ptr<Module> new_kit_mirror(){return std::make_unique<Generated_kit_mirror>();}
}
