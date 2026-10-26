// Native source generated from src/kit/recipes/looks.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_recipes_looks final:j::Module {
j::Cell _v_61263_overOf;
j::Cell _v_61264_Chainable;
j::Cell _v_61265_EMPTY;
j::Cell _v_61266_Surface;
j::Cell _v_61267_TAU;
j::Cell _v_61268_clamp;
j::Cell _v_61269_fail;
j::Cell _v_61270_fract;
j::Cell _v_61271_hash;
j::Cell _v_61272_rampOf;
j::Cell _v_61273_sample;
j::Cell _v_61274_smoothstep;
j::Cell _v_61275_field;
j::Cell _v_61276_area;
j::Cell _v_61277_lcm;
j::Cell _v_61278_noise;
j::Cell _v_61279_twinkle;
j::Cell _v_61280_AMOUNTS;
j::Cell _v_61281_DENSITIES;
j::Cell _v_61282_HEADINGS;
j::Cell _v_61283_SCALES;
j::Cell _v_61284_isArea;
j::Cell _v_61285_isPiece;
j::Cell _v_61286_numberOf;
j::Cell _v_61287_optionsOf;
j::Cell _v_61288_seedOf;
j::Cell _v_61289_show;
j::Cell _v_61290_wordsOr;
j::Cell _v_61291_speedIn;
j::Cell _v_61292_wordOf;
j::Cell _v_61293_schemeOf;
j::Cell _v_61294_wordOr;
j::Cell _v_61302_speedOf;
j::Cell _v_61306_scaleOf;
j::Cell _v_61311_densityOf;
j::Cell _v_61315_DIRECTIONS;
j::Cell _v_61316_hundredths;
j::Cell _v_61319_Look;
j::Cell _v_61528_isMask;
j::Cell _v_61531_perSize;
j::Cell _v_61539_colAt;
j::Cell _v_61543_rowAt;
j::Cell _v_61547_maskOf;
j::Cell _v_61576_below;
j::Cell _v_61585_above;
j::Cell _v_61594_outside;
j::Cell _v_61603_letters;
j::Cell _v_61620_COMMON;
j::Cell _v_61621_sizeOf;
j::Cell _v_61628_NOISE_SIZES;
j::Cell _v_61629_TRAVELS;
j::Cell _v_61630_CHANGES;
j::Cell _v_61631_look;
j::Cell _v_61678_waves;
j::Cell _v_61693_sea;
j::Cell _v_61710_plasma;
j::Cell _v_61723_aurora;
j::Cell _v_61738_flames;
j::Cell _v_61752_clouds;
j::Cell _v_61764_plume;
j::Cell _v_61780_ripple;
j::Cell _v_61801_rings;
j::Cell _v_61812_tunnel;
j::Cell _v_61825_spiral;
j::Cell _v_61836_vortex;
j::Cell _v_61850_stripes;
j::Cell _v_61862_checker;
j::Cell _v_61873_sweep;
j::Cell _v_61886_turbulence;
j::Cell _v_61898_marble;
j::Cell _v_61910_lavaLamp;
j::Cell _v_61934_STAR;
j::Cell _v_61935_stars;
j::Cell _v_61954_rainfall;
j::Cell _v_61977_snowfall;
j::Cell _v_62000_GLYPHS;
j::Cell _v_62001_matrix;
j::Cell _v_62023_galaxy;
j::Cell _v_62045_sun;
std::vector<V> _literals;
Generated_kit_recipes_looks():_v_61263_overOf(this->slot("overOf")),_v_61264_Chainable(this->slot("Chainable")),_v_61265_EMPTY(this->slot("EMPTY")),_v_61266_Surface(this->slot("Surface")),_v_61267_TAU(this->slot("TAU")),_v_61268_clamp(this->slot("clamp")),_v_61269_fail(this->slot("fail")),_v_61270_fract(this->slot("fract")),_v_61271_hash(this->slot("hash")),_v_61272_rampOf(this->slot("rampOf")),_v_61273_sample(this->slot("sample")),_v_61274_smoothstep(this->slot("smoothstep")),_v_61275_field(this->slot("field")),_v_61276_area(this->slot("area")),_v_61277_lcm(this->slot("lcm")),_v_61278_noise(this->slot("noise")),_v_61279_twinkle(this->slot("twinkle")),_v_61280_AMOUNTS(this->slot("AMOUNTS")),_v_61281_DENSITIES(this->slot("DENSITIES")),_v_61282_HEADINGS(this->slot("HEADINGS")),_v_61283_SCALES(this->slot("SCALES")),_v_61284_isArea(this->slot("isArea")),_v_61285_isPiece(this->slot("isPiece")),_v_61286_numberOf(this->slot("numberOf")),_v_61287_optionsOf(this->slot("optionsOf")),_v_61288_seedOf(this->slot("seedOf")),_v_61289_show(this->slot("show")),_v_61290_wordsOr(this->slot("wordsOr")),_v_61291_speedIn(this->slot("speedIn")),_v_61292_wordOf(this->slot("wordOf")),_v_61293_schemeOf(this->slot("schemeOf")),_v_61294_wordOr(this->slot("wordOr")),_v_61302_speedOf(this->slot("speedOf")),_v_61306_scaleOf(this->slot("scaleOf")),_v_61311_densityOf(this->slot("densityOf")),_v_61315_DIRECTIONS(this->slot("DIRECTIONS")),_v_61316_hundredths(this->slot("hundredths")),_v_61319_Look(this->slot("Look")),_v_61528_isMask(this->slot("isMask")),_v_61531_perSize(this->slot("perSize")),_v_61539_colAt(this->slot("colAt")),_v_61543_rowAt(this->slot("rowAt")),_v_61547_maskOf(this->slot("maskOf")),_v_61576_below(this->slot("below")),_v_61585_above(this->slot("above")),_v_61594_outside(this->slot("outside")),_v_61603_letters(this->slot("letters")),_v_61620_COMMON(this->slot("COMMON")),_v_61621_sizeOf(this->slot("sizeOf")),_v_61628_NOISE_SIZES(this->slot("NOISE_SIZES")),_v_61629_TRAVELS(this->slot("TRAVELS")),_v_61630_CHANGES(this->slot("CHANGES")),_v_61631_look(this->slot("look")),_v_61678_waves(this->slot("waves")),_v_61693_sea(this->slot("sea")),_v_61710_plasma(this->slot("plasma")),_v_61723_aurora(this->slot("aurora")),_v_61738_flames(this->slot("flames")),_v_61752_clouds(this->slot("clouds")),_v_61764_plume(this->slot("plume")),_v_61780_ripple(this->slot("ripple")),_v_61801_rings(this->slot("rings")),_v_61812_tunnel(this->slot("tunnel")),_v_61825_spiral(this->slot("spiral")),_v_61836_vortex(this->slot("vortex")),_v_61850_stripes(this->slot("stripes")),_v_61862_checker(this->slot("checker")),_v_61873_sweep(this->slot("sweep")),_v_61886_turbulence(this->slot("turbulence")),_v_61898_marble(this->slot("marble")),_v_61910_lavaLamp(this->slot("lavaLamp")),_v_61934_STAR(this->slot("STAR")),_v_61935_stars(this->slot("stars")),_v_61954_rainfall(this->slot("rainfall")),_v_61977_snowfall(this->slot("snowfall")),_v_62000_GLYPHS(this->slot("GLYPHS")),_v_62001_matrix(this->slot("matrix")),_v_62023_galaxy(this->slot("galaxy")),_v_62045_sun(this->slot("sun")),_literals{V(u"cols"),
V(u"rows"),
V(u"string"),
V(u"place"),
V(u"kind"),
V(u"mask"),
V(u"periods"),
V(u"fills"),
V(u"test"),
V(u"function"),
V(u"meta"),
V(u"fps"),
V(u"loop"),
V(u"loopless"),
V(u"mono"),
V(u"at"),
V(u"chars"),
V(u"below()"),
V(u"third"),
V(u"half"),
V(u"above()"),
V(u"outside()"),
V(u"trim"),
V(u"\n"),
V(u"includes"),
V(u"letters()"),
V(u"big"),
V(u"isInteger"),
V(u"text"),
V(u"x1"),
V(u"x0"),
V(u"y1"),
V(u"y0"),
V(u"object"),
V(u"isArray"),
V(u"name"),
V(u"body"),
V(u"options"),
V(u"scale"),
V(u"period"),
V(u"number"),
V(u"isFinite"),
V(u"speed"),
V(u"dither"),
V(u"boolean"),
V(u"note"),
V(u"length"),
V(u"phase"),
V(u"noise"),
V(u"travel"),
V(u"change"),
V(u"size"),
V(u"hasOwn"),
V(u", "),
V(u"stringify"),
V(u"keys"),
V(u"map"),
V(u"join"),
V(u"morph"),
V(u"drift"),
V(u"column"),
V(u"width"),
V(u"row"),
V(u"height"),
V(u"slice"),
V(u"scheme"),
V(u"palette"),
V(u"ramp"),
V(u"standard"),
V(u"light"),
V(u"fn"),
V(u"waves"),
V(u"to"),
V(u"rolling rows of waves"),
V(u"ocean"),
V(u" .-~≈"),
V(u"waves()'s to"),
V(u"left"),
V(u"right"),
V(u"sea"),
V(u"horizon"),
V(u"the open sea to the horizon"),
V(u" .-~=≈"),
V(u"high"),
V(u"middle"),
V(u"low"),
V(u"sea()'s horizon"),
V(u"detail"),
V(u"plasma"),
V(u"soft interference blobs"),
V(u"sunset"),
V(u"aurora"),
V(u"curtains of northern lights"),
V(u" .:|!I"),
V(u"seed"),
V(u"min"),
V(u"flames"),
V(u"flames rising from the bottom"),
V(u"fire"),
V(u" .:-=+*#%@"),
V(u"clouds"),
V(u"clouds drifting across"),
V(u" .:-=+*#"),
V(u"clouds()'s to"),
V(u"plume"),
V(u"a plume of smoke curling up"),
V(u" .:-=+*"),
V(u"ripple"),
V(u"drops"),
V(u"rings spreading over water"),
V(u" .-~="),
V(u"ripple()"),
V(u"from"),
V(u"max"),
V(u"rings"),
V(u"rings flowing out from the middle"),
V(u"candy"),
V(u"rings()'s to"),
V(u"in"),
V(u"out"),
V(u"tunnel"),
V(u"flying down an endless tunnel"),
V(u"neon"),
V(u"spiral"),
V(u"arms"),
V(u"a spiral turning"),
V(u"vortex"),
V(u"clouds swirling into a whirlpool"),
V(u"space"),
V(u"stripes"),
V(u"stripes sliding along"),
V(u" ░▒▓█"),
V(u"stripes()'s to"),
V(u"checker"),
V(u"a checkerboard rolling by"),
V(u"sweep"),
V(u"way"),
V(u"colours sweeping across"),
V(u"sweep()'s way"),
V(u"across"),
V(u"down"),
V(u"diagonal"),
V(u"round"),
V(u"PI"),
V(u"turbulence"),
V(u"noise, slowly changing"),
V(u"turbulence()'s kind"),
V(u"smooth"),
V(u"ridged"),
V(u"cells"),
V(u"marble"),
V(u"veined marble, slowly flowing"),
V(u"paper"),
V(u"lava lamp"),
V(u"blobs"),
V(u"blobs rising and sinking in a lamp"),
V(u"lava"),
V(u"lavaLamp()"),
V(u"x"),
V(u"sway"),
V(u"r"),
V(u"beat"),
V(u"stars"),
V(u"density"),
V(u"stars twinkling"),
V(u"night"),
V(u"stars()"),
V(u"char"),
V(u"rainfall"),
V(u"wind"),
V(u"rain falling in streaks"),
V(u" .:|"),
V(u"none"),
V(u"rainfall()'s wind"),
V(u"rainfall()"),
V(u"\\"),
V(u"/"),
V(u"|"),
V(u"snowfall"),
V(u"snow falling and swaying"),
V(u"ice"),
V(u" .·+*"),
V(u"snowfall()"),
V(u"."),
V(u"·"),
V(u"+"),
V(u"*"),
V(u"matrix"),
V(u"the digital rain"),
V(u" .:+*"),
V(u"matrix()"),
V(u"galaxy"),
V(u"a spiral galaxy turning"),
V(u" .·:-=+*#@"),
V(u"galaxy()"),
V(u"sun"),
V(u"rays"),
V(u"a sun with turning rays"),
V(u"gold"),
V(u"still"),
V(u"medium"),
V(u"normal"),
V(u"default"),
V(u"#def"),
V(u"reverse"),
V(u"dark"),
V(u"category"),
V(u"generative"),
V(u"colors"),
V(u"steps"),
V(u"invert"),
V(u"auto"),
V(u"#with"),
V(u"#of"),
V(u"mix"),
V(u"mix()"),
V(u"mix()'s amount"),
V(u"a little"),
V(u"mostly"),
V(u"add"),
V(u"add()"),
V(u"add()'s amount"),
V(u"multiply"),
V(u"multiply()"),
V(u"mask()"),
V(u""),
V(u"replace"),
V(u"move"),
V(u"move()"),
V(u"zoom"),
V(u"zoom()"),
V(u"rotate"),
V(u"slow"),
V(u"eighth"),
V(u"quarter"),
V(u"rotate()"),
V(u"fast"),
V(u"sign"),
V(u"warp"),
V(u"warp()"),
V(u"blur"),
V(u"blur()"),
V(u"subtle"),
V(u"strong"),
V(u"clear"),
V(u"get"),
V(u"set"),
V(u"threshold"),
V(u"threshold()"),
V(u"posterize"),
V(u"palette()"),
V(u"size()"),
V(u"named"),
V(u"over"),
V(u"behind"),
V(u"fine"),
V(u"small"),
V(u"large"),
V(u"huge"),
V(u"up"),
V(u"slowly"),
V(u"steadily"),
V(u"quickly"),
V(u" .·+*✦"),
V(u"ｱｲｳｴｵｶｷｸｹｺｻｼｽｾｿﾀﾁﾂﾃﾄﾅﾆﾇﾈﾉﾊﾋﾌﾍﾎﾏﾐﾑﾒﾓﾔﾕﾖﾗﾘﾙﾚﾛﾜﾝ0123456789")}{
this->exports["Look"]=this->_v_61319_Look;
this->exports["below"]=this->_v_61576_below;
this->exports["above"]=this->_v_61585_above;
this->exports["outside"]=this->_v_61594_outside;
this->exports["letters"]=this->_v_61603_letters;
this->exports["look"]=this->_v_61631_look;
this->exports["waves"]=this->_v_61678_waves;
this->exports["sea"]=this->_v_61693_sea;
this->exports["plasma"]=this->_v_61710_plasma;
this->exports["aurora"]=this->_v_61723_aurora;
this->exports["flames"]=this->_v_61738_flames;
this->exports["clouds"]=this->_v_61752_clouds;
this->exports["plume"]=this->_v_61764_plume;
this->exports["ripple"]=this->_v_61780_ripple;
this->exports["rings"]=this->_v_61801_rings;
this->exports["tunnel"]=this->_v_61812_tunnel;
this->exports["spiral"]=this->_v_61825_spiral;
this->exports["vortex"]=this->_v_61836_vortex;
this->exports["stripes"]=this->_v_61850_stripes;
this->exports["checker"]=this->_v_61862_checker;
this->exports["sweep"]=this->_v_61873_sweep;
this->exports["turbulence"]=this->_v_61886_turbulence;
this->exports["marble"]=this->_v_61898_marble;
this->exports["lavaLamp"]=this->_v_61910_lavaLamp;
this->exports["stars"]=this->_v_61935_stars;
this->exports["rainfall"]=this->_v_61954_rainfall;
this->exports["snowfall"]=this->_v_61977_snowfall;
this->exports["matrix"]=this->_v_62001_matrix;
this->exports["galaxy"]=this->_v_62023_galaxy;
this->exports["sun"]=this->_v_62045_sun;
}
void init() override{if(initialized)return;initialized=true;
this->_v_61531_perSize.get()=j::function([=](const j::Args &_args_fn61532,const V &_receiver_fn61532,const V &_self_fn61532) mutable ->V{
j::Cell _v_61533_make;
_v_61533_make.get()=_args_fn61532[0];
{
j::Cell _v_61534_key;
j::Cell _v_61535_last;
_v_61534_key.get()=j::unary("-",V(1.0));
return j::function([=](const j::Args &_args_fn61536,const V &_receiver_fn61536,const V &_self_fn61536) mutable ->V{
V _v_61537_at;
_v_61537_at=_args_fn61536[0];
{
V _v_61538_k;
_v_61538_k=([&]()->V{V _lhs62061=([&]()->V{V _lhs62063=j::get(_v_61537_at,this->_literals[0]);V _rhs62064=V(1000.0);return V(j::number(_lhs62063)*j::number(_rhs62064));})();V _rhs62062=j::get(_v_61537_at,this->_literals[1]);return j::binary("+",_lhs62061,_rhs62062);})();
if(j::truth(([&]()->V{V _logical62065=([&]()->V{V _lhs62066=_v_61538_k;V _rhs62067=_v_61534_key.get();return V(!j::equal(_lhs62066,_rhs62067,true));})();return !j::truth(_logical62065)?([&]()->V{V _lhs62068=_v_61535_last.get();V _rhs62069=j::builtin("undefined");return V(j::equal(_lhs62068,_rhs62069,true));})():_logical62065;})())){(void)(((_v_61535_last.get()=([&]()->V{V _callee62071=_v_61533_make.get();return j::call(_callee62071,j::Args{j::get(_v_61537_at,this->_literals[0]),j::get(_v_61537_at,this->_literals[1])});})()),(_v_61534_key.get()=_v_61538_k)));
}
return _v_61535_last.get();

}

return V{};
},1);

}

return V{};
},1);
this->_v_61547_maskOf.get()=j::function([=](const j::Args &_args_fn61548,const V &_receiver_fn61548,const V &_self_fn61548) mutable ->V{
V _v_61549_what;
j::Cell _v_61550_v;
_v_61549_what=_args_fn61548[0];
_v_61550_v.get()=_args_fn61548[1];
{
if(j::truth(([&]()->V{V _callee62073=this->_v_61528_isMask.get();return j::call(_callee62073,j::Args{_v_61550_v.get()});})())){return _v_61550_v.get();
}
if(j::truth(([&]()->V{V _lhs62074=j::unary("typeof",_v_61550_v.get());V _rhs62075=this->_literals[2];return V(j::equal(_lhs62074,_rhs62075,true));})())){return ([&]()->V{V _callee62076=this->_v_61603_letters.get();return j::call(_callee62076,j::Args{_v_61550_v.get()});})();
}
if(j::truth(([&]()->V{V _callee62077=this->_v_61284_isArea.get();return j::call(_callee62077,j::Args{_v_61550_v.get()});})())){
j::Cell _v_61551_placed;
_v_61551_placed.get()=([&]()->V{V _callee62081=this->_v_61531_perSize.get();return j::call(_callee62081,j::Args{j::function([=](const j::Args &_args_fn61552,const V &_receiver_fn61552,const V &_self_fn61552) mutable ->V{
V _v_61553_cols;
V _v_61554_rows;
_v_61553_cols=_args_fn61552[0];
_v_61554_rows=_args_fn61552[1];
return ([&]()->V{V _receiver62078=_v_61550_v.get();V _method62079=this->_literals[3];V _method=j::get(_receiver62078,_method62079);j::Args _params62080=j::Args{_v_61553_cols,_v_61554_rows};return j::call(_method,_params62080,_receiver62078);})();
return V{};
},2)});})();
return ([&]()->V{V _obj62082=j::object();j::put(_obj62082,this->_literals[4],this->_literals[5]);j::put(_obj62082,this->_literals[6],([&]()->V{j::Args _array62083;return j::array(std::move(_array62083));})());j::put(_obj62082,this->_literals[7],V(true));j::put(_obj62082,this->_literals[8],j::function([=](const j::Args &_args_fn61555,const V &_receiver_fn61555,const V &_self_fn61555) mutable ->V{
V _v_61556_x;
V _v_61557_y;
V _v_61558__t;
V _v_61559_at;
_v_61556_x=_args_fn61555[0];
_v_61557_y=_args_fn61555[1];
_v_61558__t=_args_fn61555[2];
_v_61559_at=_args_fn61555[3];
return ([&]()->V{V _receiver62086=([&]()->V{V _callee62089=_v_61551_placed.get();return j::call(_callee62089,j::Args{_v_61559_at});})();V _method62087=this->_literals[8];V _method=j::get(_receiver62086,_method62087);j::Args _params62088=j::Args{([&]()->V{V _callee62084=this->_v_61539_colAt.get();return j::call(_callee62084,j::Args{_v_61556_x,_v_61559_at});})(),([&]()->V{V _callee62085=this->_v_61543_rowAt.get();return j::call(_callee62085,j::Args{_v_61557_y,_v_61559_at});})()};return j::call(_method,_params62088,_receiver62086);})();
return V{};
},4));return _obj62082;})();

}

if(j::truth(([&]()->V{V _lhs62090=j::unary("typeof",_v_61550_v.get());V _rhs62091=this->_literals[9];return V(j::equal(_lhs62090,_rhs62091,true));})())){return ([&]()->V{V _obj62092=j::object();j::put(_obj62092,this->_literals[4],this->_literals[5]);j::put(_obj62092,this->_literals[6],([&]()->V{j::Args _array62093;return j::array(std::move(_array62093));})());j::put(_obj62092,this->_literals[8],j::function([=](const j::Args &_args_fn61560,const V &_receiver_fn61560,const V &_self_fn61560) mutable ->V{
V _v_61561_x;
V _v_61562_y;
V _v_61563_t;
V _v_61564_at;
_v_61561_x=_args_fn61560[0];
_v_61562_y=_args_fn61560[1];
_v_61563_t=_args_fn61560[2];
_v_61564_at=_args_fn61560[3];
return j::unary("!",j::unary("!",([&]()->V{V _callee62094=_v_61550_v.get();return j::call(_callee62094,j::Args{_v_61561_x,_v_61562_y,_v_61563_t,_v_61564_at});})()));
return V{};
},4));return _obj62092;})();
}
if(j::truth(([&]()->V{V _logical62095=([&]()->V{V _lhs62096=_v_61550_v.get();V _rhs62097=this->_v_61266_Surface.get();return j::binary("instanceof",_lhs62096,_rhs62097);})();return !j::truth(_logical62095)?([&]()->V{V _callee62098=this->_v_61285_isPiece.get();return j::call(_callee62098,j::Args{_v_61550_v.get()});})():_logical62095;})())){
j::Cell _v_61565_player;
V _v_61566_loop;
j::Cell _v_61567_when;
j::Cell _v_61568_grid;
_v_61565_player.get()=([&]()->V{V _callee62099=this->_v_61273_sample.get();return j::call(_callee62099,j::Args{_v_61550_v.get()});})();
_v_61566_loop=(j::truth(([&]()->V{V _lhs62100=j::get(j::get(_v_61565_player.get(),this->_literals[10]),this->_literals[11]);V _rhs62101=V(0.0);return j::binary(">",_lhs62100,_rhs62101);})())?j::get(j::get(_v_61565_player.get(),this->_literals[10]),this->_literals[12]):j::builtin("undefined"));
_v_61567_when.get()=j::builtin("NaN");
_v_61568_grid.get()=V::null();
return ([&]()->V{V _obj62102=j::object();j::put(_obj62102,this->_literals[4],this->_literals[5]);j::put(_obj62102,this->_literals[6],(j::truth(_v_61566_loop)?([&]()->V{j::Args _array62103;_array62103.push_back(_v_61566_loop);return j::array(std::move(_array62103));})():([&]()->V{j::Args _array62104;return j::array(std::move(_array62104));})()));j::put(_obj62102,this->_literals[13],([&]()->V{V _logical62105=([&]()->V{V _lhs62106=j::get(j::get(_v_61565_player.get(),this->_literals[10]),this->_literals[11]);V _rhs62107=V(0.0);return j::binary(">",_lhs62106,_rhs62107);})();return j::truth(_logical62105)?j::unary("!",_v_61566_loop):_logical62105;})());j::put(_obj62102,this->_literals[8],j::function([=](const j::Args &_args_fn61569,const V &_receiver_fn61569,const V &_self_fn61569) mutable ->V{
V _v_61570_x;
V _v_61571_y;
V _v_61572_t;
V _v_61573_at;
_v_61570_x=_args_fn61569[0];
_v_61571_y=_args_fn61569[1];
_v_61572_t=_args_fn61569[2];
_v_61573_at=_args_fn61569[3];
{
V _v_61574_c;
V _v_61575_r;
if(j::truth(([&]()->V{V _logical62108=([&]()->V{V _lhs62109=_v_61572_t;V _rhs62110=_v_61567_when.get();return V(!j::equal(_lhs62109,_rhs62110,true));})();return !j::truth(_logical62108)?j::unary("!",_v_61568_grid.get()):_logical62108;})())){(void)(((_v_61568_grid.get()=([&]()->V{V _receiver62113=_v_61565_player.get();V _method62114=this->_literals[15];V _method=j::get(_receiver62113,_method62114);j::Args _params62115=j::Args{_v_61572_t,([&]()->V{V _obj62112=j::object();j::put(_obj62112,this->_literals[14],V(true));return _obj62112;})()};return j::call(_method,_params62115,_receiver62113);})()),(_v_61567_when.get()=_v_61572_t)));
}
_v_61574_c=([&]()->V{V _lhs62117=([&]()->V{V _number62120=([&]()->V{V _callee62121=this->_v_61539_colAt.get();return j::call(_callee62121,j::Args{_v_61570_x,_v_61573_at});})();return V(std::floor(j::number(_number62120)));})();V _rhs62118=([&]()->V{V _lhs62122=([&]()->V{V _lhs62124=j::get(_v_61573_at,this->_literals[0]);V _rhs62125=j::get(_v_61568_grid.get(),this->_literals[0]);return V(j::number(_lhs62124)-j::number(_rhs62125));})();V _rhs62123=V(1.0);return V(int(j::i32(_lhs62122)>>(j::u32(_rhs62123)&31)));})();return V(j::number(_lhs62117)-j::number(_rhs62118));})();
_v_61575_r=([&]()->V{V _lhs62126=([&]()->V{V _number62129=([&]()->V{V _callee62130=this->_v_61543_rowAt.get();return j::call(_callee62130,j::Args{_v_61571_y,_v_61573_at});})();return V(std::floor(j::number(_number62129)));})();V _rhs62127=([&]()->V{V _lhs62131=([&]()->V{V _lhs62133=j::get(_v_61573_at,this->_literals[1]);V _rhs62134=j::get(_v_61568_grid.get(),this->_literals[1]);return V(j::number(_lhs62133)-j::number(_rhs62134));})();V _rhs62132=V(1.0);return V(int(j::i32(_lhs62131)>>(j::u32(_rhs62132)&31)));})();return V(j::number(_lhs62126)-j::number(_rhs62127));})();
return ([&]()->V{V _logical62135=([&]()->V{V _logical62136=([&]()->V{V _logical62137=([&]()->V{V _logical62138=([&]()->V{V _lhs62139=_v_61574_c;V _rhs62140=V(0.0);return j::binary(">=",_lhs62139,_rhs62140);})();return j::truth(_logical62138)?([&]()->V{V _lhs62141=_v_61575_r;V _rhs62142=V(0.0);return j::binary(">=",_lhs62141,_rhs62142);})():_logical62138;})();return j::truth(_logical62137)?([&]()->V{V _lhs62143=_v_61574_c;V _rhs62144=j::get(_v_61568_grid.get(),this->_literals[0]);return j::binary("<",_lhs62143,_rhs62144);})():_logical62137;})();return j::truth(_logical62136)?([&]()->V{V _lhs62145=_v_61575_r;V _rhs62146=j::get(_v_61568_grid.get(),this->_literals[1]);return j::binary("<",_lhs62145,_rhs62146);})():_logical62136;})();return j::truth(_logical62135)?([&]()->V{V _lhs62147=j::get(j::get(_v_61568_grid.get(),this->_literals[16]),([&]()->V{V _lhs62149=([&]()->V{V _lhs62151=_v_61575_r;V _rhs62152=j::get(_v_61568_grid.get(),this->_literals[0]);return V(j::number(_lhs62151)*j::number(_rhs62152));})();V _rhs62150=_v_61574_c;return j::binary("+",_lhs62149,_rhs62150);})());V _rhs62148=this->_v_61265_EMPTY.get();return V(!j::equal(_lhs62147,_rhs62148,true));})():_logical62135;})();

}

return V{};
},4));return _obj62102;})();

}

return ([&]()->V{V _callee62155=this->_v_61269_fail.get();return j::call(_callee62155,j::Args{([&]()->V{std::u16string _text62153;_text62153+=u"";_text62153+=j::string(_v_61549_what);_text62153+=u" takes a shape: below(0.4), above(0.3), a word such as \"HI\", a material's shape such as heart(), a piece, outside(...) of one of these, or a function (x, y, t) => true where to draw, not ";_text62153+=j::string(([&]()->V{V _callee62154=this->_v_61289_show.get();return j::call(_callee62154,j::Args{_v_61550_v.get()});})());_text62153+=u"";return V(std::move(_text62153));})()});})();

}

return V{};
},2);
this->_v_61576_below.get()=j::function([=](const j::Args &_args_fn61577,const V &_receiver_fn61577,const V &_self_fn61577) mutable ->V{
V _v_61578_share;
_v_61578_share=_args_fn61577[0];
{
j::Cell _v_61579_k;
_v_61579_k.get()=([&]()->V{V _callee62161=this->_v_61294_wordOr.get();return j::call(_callee62161,j::Args{this->_literals[17],_v_61578_share,([&]()->V{V _obj62156=j::object();j::put(_obj62156,this->_literals[18],([&]()->V{V _lhs62157=V(1.0);V _rhs62158=V(3.0);return V(j::number(_lhs62157)/j::number(_rhs62158));})());j::put(_obj62156,this->_literals[19],([&]()->V{V _lhs62159=V(1.0);V _rhs62160=V(2.0);return V(j::number(_lhs62159)/j::number(_rhs62160));})());return _obj62156;})(),this->_literals[19],V(0.0),V(1.0)});})();
return ([&]()->V{V _obj62162=j::object();j::put(_obj62162,this->_literals[4],this->_literals[5]);j::put(_obj62162,this->_literals[6],([&]()->V{j::Args _array62163;return j::array(std::move(_array62163));})());j::put(_obj62162,this->_literals[8],j::function([=](const j::Args &_args_fn61580,const V &_receiver_fn61580,const V &_self_fn61580) mutable ->V{
V _v_61581__x;
V _v_61582_y;
V _v_61583__t;
V _v_61584_at;
_v_61581__x=_args_fn61580[0];
_v_61582_y=_args_fn61580[1];
_v_61583__t=_args_fn61580[2];
_v_61584_at=_args_fn61580[3];
return ([&]()->V{V _lhs62164=([&]()->V{V _lhs62166=([&]()->V{V _callee62168=this->_v_61543_rowAt.get();return j::call(_callee62168,j::Args{_v_61582_y,_v_61584_at});})();V _rhs62167=j::get(_v_61584_at,this->_literals[1]);return V(j::number(_lhs62166)/j::number(_rhs62167));})();V _rhs62165=([&]()->V{V _lhs62169=V(1.0);V _rhs62170=_v_61579_k.get();return V(j::number(_lhs62169)-j::number(_rhs62170));})();return j::binary(">=",_lhs62164,_rhs62165);})();
return V{};
},4));return _obj62162;})();

}

return V{};
},1);
this->_v_61585_above.get()=j::function([=](const j::Args &_args_fn61586,const V &_receiver_fn61586,const V &_self_fn61586) mutable ->V{
V _v_61587_share;
_v_61587_share=_args_fn61586[0];
{
j::Cell _v_61588_k;
_v_61588_k.get()=([&]()->V{V _callee62176=this->_v_61294_wordOr.get();return j::call(_callee62176,j::Args{this->_literals[20],_v_61587_share,([&]()->V{V _obj62171=j::object();j::put(_obj62171,this->_literals[18],([&]()->V{V _lhs62172=V(1.0);V _rhs62173=V(3.0);return V(j::number(_lhs62172)/j::number(_rhs62173));})());j::put(_obj62171,this->_literals[19],([&]()->V{V _lhs62174=V(1.0);V _rhs62175=V(2.0);return V(j::number(_lhs62174)/j::number(_rhs62175));})());return _obj62171;})(),this->_literals[19],V(0.0),V(1.0)});})();
return ([&]()->V{V _obj62177=j::object();j::put(_obj62177,this->_literals[4],this->_literals[5]);j::put(_obj62177,this->_literals[6],([&]()->V{j::Args _array62178;return j::array(std::move(_array62178));})());j::put(_obj62177,this->_literals[8],j::function([=](const j::Args &_args_fn61589,const V &_receiver_fn61589,const V &_self_fn61589) mutable ->V{
V _v_61590__x;
V _v_61591_y;
V _v_61592__t;
V _v_61593_at;
_v_61590__x=_args_fn61589[0];
_v_61591_y=_args_fn61589[1];
_v_61592__t=_args_fn61589[2];
_v_61593_at=_args_fn61589[3];
return ([&]()->V{V _lhs62179=([&]()->V{V _lhs62181=([&]()->V{V _callee62183=this->_v_61543_rowAt.get();return j::call(_callee62183,j::Args{_v_61591_y,_v_61593_at});})();V _rhs62182=j::get(_v_61593_at,this->_literals[1]);return V(j::number(_lhs62181)/j::number(_rhs62182));})();V _rhs62180=_v_61588_k.get();return j::binary("<",_lhs62179,_rhs62180);})();
return V{};
},4));return _obj62177;})();

}

return V{};
},1);
this->_v_61594_outside.get()=j::function([=](const j::Args &_args_fn61595,const V &_receiver_fn61595,const V &_self_fn61595) mutable ->V{
V _v_61596_shape;
_v_61596_shape=_args_fn61595[0];
{
j::Cell _v_61597_m;
_v_61597_m.get()=([&]()->V{V _callee62184=this->_v_61547_maskOf.get();return j::call(_callee62184,j::Args{this->_literals[21],_v_61596_shape});})();
return ([&]()->V{V _obj62185=j::object();j::put(_obj62185,this->_literals[4],this->_literals[5]);j::put(_obj62185,this->_literals[6],j::get(_v_61597_m.get(),this->_literals[6]));j::put(_obj62185,this->_literals[13],j::get(_v_61597_m.get(),this->_literals[13]));j::put(_obj62185,this->_literals[8],j::function([=](const j::Args &_args_fn61598,const V &_receiver_fn61598,const V &_self_fn61598) mutable ->V{
V _v_61599_x;
V _v_61600_y;
V _v_61601_t;
V _v_61602_at;
_v_61599_x=_args_fn61598[0];
_v_61600_y=_args_fn61598[1];
_v_61601_t=_args_fn61598[2];
_v_61602_at=_args_fn61598[3];
return j::unary("!",([&]()->V{V _receiver62186=_v_61597_m.get();V _method62187=this->_literals[8];V _method=j::get(_receiver62186,_method62187);j::Args _params62188=j::Args{_v_61599_x,_v_61600_y,_v_61601_t,_v_61602_at};return j::call(_method,_params62188,_receiver62186);})());
return V{};
},4));return _obj62185;})();

}

return V{};
},1);
this->_v_61603_letters.get()=j::function([=](const j::Args &_args_fn61604,const V &_receiver_fn61604,const V &_self_fn61604) mutable ->V{
j::Cell _v_61605_text;
V _v_61606_o;
_v_61605_text.get()=_args_fn61604[0];
_v_61606_o=_args_fn61604[1];
{
j::Cell _v_61607_opts;
j::Cell _v_61608_placed;
if(j::truth(([&]()->V{V _logical62189=([&]()->V{V _logical62190=([&]()->V{V _lhs62191=j::unary("typeof",_v_61605_text.get());V _rhs62192=this->_literals[2];return V(!j::equal(_lhs62191,_rhs62192,true));})();return !j::truth(_logical62190)?j::unary("!",([&]()->V{V _receiver62193=_v_61605_text.get();V _method62194=this->_literals[22];V _method=j::get(_receiver62193,_method62194);j::Args _params62195=j::Args{};return j::call(_method,_params62195,_receiver62193);})()):_logical62190;})();return !j::truth(_logical62189)?([&]()->V{V _receiver62196=_v_61605_text.get();V _method62197=this->_literals[24];V _method=j::get(_receiver62196,_method62197);j::Args _params62198=j::Args{this->_literals[23]};return j::call(_method,_params62198,_receiver62196);})():_logical62189;})())){(void)(([&]()->V{V _callee62201=this->_v_61269_fail.get();return j::call(_callee62201,j::Args{([&]()->V{std::u16string _text62199;_text62199+=u"letters() takes a word or a few on one line, such as \"HELLO\", not ";_text62199+=j::string(([&]()->V{V _callee62200=this->_v_61289_show.get();return j::call(_callee62200,j::Args{_v_61605_text.get()});})());_text62199+=u"";return V(std::move(_text62199));})()});})());
}
_v_61607_opts.get()=([&]()->V{V _callee62203=this->_v_61287_optionsOf.get();return j::call(_callee62203,j::Args{this->_literals[25],_v_61606_o,([&]()->V{j::Args _array62202;_array62202.push_back(this->_literals[26]);return j::array(std::move(_array62202));})()});})();
if(j::truth(([&]()->V{V _logical62204=([&]()->V{V _lhs62205=j::get(_v_61607_opts.get(),this->_literals[26]);V _rhs62206=j::builtin("undefined");return V(!j::equal(_lhs62205,_rhs62206,true));})();return j::truth(_logical62204)?j::unary("!",([&]()->V{V _logical62207=([&]()->V{V _logical62208=([&]()->V{V _receiver62209=j::builtin("Number");V _method62210=this->_literals[27];V _method=j::get(_receiver62209,_method62210);j::Args _params62211=j::Args{j::get(_v_61607_opts.get(),this->_literals[26])};return j::call(_method,_params62211,_receiver62209);})();return j::truth(_logical62208)?([&]()->V{V _lhs62212=j::get(_v_61607_opts.get(),this->_literals[26]);V _rhs62213=V(1.0);return j::binary(">=",_lhs62212,_rhs62213);})():_logical62208;})();return j::truth(_logical62207)?([&]()->V{V _lhs62214=j::get(_v_61607_opts.get(),this->_literals[26]);V _rhs62215=V(8.0);return j::binary("<=",_lhs62214,_rhs62215);})():_logical62207;})()):_logical62204;})())){(void)(([&]()->V{V _callee62218=this->_v_61269_fail.get();return j::call(_callee62218,j::Args{([&]()->V{std::u16string _text62216;_text62216+=u"letters()'s big takes a whole number from 1 to 8, not ";_text62216+=j::string(([&]()->V{V _callee62217=this->_v_61289_show.get();return j::call(_callee62217,j::Args{j::get(_v_61607_opts.get(),this->_literals[26])});})());_text62216+=u"";return V(std::move(_text62216));})()});})());
}
(void)(([&]()->V{V _receiver62220=this->_v_61276_area.get();V _method62221=this->_literals[28];V _method=j::get(_receiver62220,_method62221);j::Args _params62222=j::Args{_v_61605_text.get(),([&]()->V{V _obj62219=j::object();j::put(_obj62219,this->_literals[26],V(1.0));return _obj62219;})()};return j::call(_method,_params62222,_receiver62220);})());
_v_61608_placed.get()=([&]()->V{V _callee62256=this->_v_61531_perSize.get();return j::call(_callee62256,j::Args{j::function([=](const j::Args &_args_fn61609,const V &_receiver_fn61609,const V &_self_fn61609) mutable ->V{
V _v_61610_cols;
V _v_61611_rows;
_v_61610_cols=_args_fn61609[0];
_v_61611_rows=_args_fn61609[1];
{
V _v_61612_big;
_v_61612_big=([&]()->V{V _logical62223=j::get(_v_61607_opts.get(),this->_literals[26]);return j::nullish(_logical62223)?V(1.0):_logical62223;})();
if(j::truth(([&]()->V{V _lhs62224=j::get(_v_61607_opts.get(),this->_literals[26]);V _rhs62225=j::builtin("undefined");return V(j::equal(_lhs62224,_rhs62225,true));})())){{V _v_61613_b;
_v_61613_b=V(8.0);
for(;j::truth(([&]()->V{V _lhs62226=_v_61613_b;V _rhs62227=V(1.0);return j::binary(">=",_lhs62226,_rhs62227);})());(void)(j::increment(_v_61613_b,-1,false))){
V _v_61614_p;
_v_61614_p=([&]()->V{V _receiver62228=([&]()->V{V _receiver62232=this->_v_61276_area.get();V _method62233=this->_literals[28];V _method=j::get(_receiver62232,_method62233);j::Args _params62234=j::Args{_v_61605_text.get(),([&]()->V{V _obj62231=j::object();j::put(_obj62231,this->_literals[26],_v_61613_b);return _obj62231;})()};return j::call(_method,_params62234,_receiver62232);})();V _method62229=this->_literals[3];V _method=j::get(_receiver62228,_method62229);j::Args _params62230=j::Args{_v_61610_cols,_v_61611_rows};return j::call(_method,_params62230,_receiver62228);})();
if(j::truth(([&]()->V{V _logical62235=([&]()->V{V _lhs62236=([&]()->V{V _lhs62238=j::get(_v_61614_p,this->_literals[29]);V _rhs62239=j::get(_v_61614_p,this->_literals[30]);return V(j::number(_lhs62238)-j::number(_rhs62239));})();V _rhs62237=([&]()->V{V _lhs62240=_v_61610_cols;V _rhs62241=V(2.0);return V(j::number(_lhs62240)-j::number(_rhs62241));})();return j::binary("<=",_lhs62236,_rhs62237);})();return j::truth(_logical62235)?([&]()->V{V _lhs62242=([&]()->V{V _lhs62244=j::get(_v_61614_p,this->_literals[31]);V _rhs62245=j::get(_v_61614_p,this->_literals[32]);return V(j::number(_lhs62244)-j::number(_rhs62245));})();V _rhs62243=([&]()->V{V _lhs62246=_v_61611_rows;V _rhs62247=V(2.0);return V(j::number(_lhs62246)-j::number(_rhs62247));})();return j::binary("<=",_lhs62242,_rhs62243);})():_logical62235;})())){
(void)((_v_61612_big=_v_61613_b));
break;

}


}
}
}
return ([&]()->V{V _receiver62249=([&]()->V{V _receiver62253=this->_v_61276_area.get();V _method62254=this->_literals[28];V _method=j::get(_receiver62253,_method62254);j::Args _params62255=j::Args{_v_61605_text.get(),([&]()->V{V _obj62252=j::object();j::put(_obj62252,this->_literals[26],_v_61612_big);return _obj62252;})()};return j::call(_method,_params62255,_receiver62253);})();V _method62250=this->_literals[3];V _method=j::get(_receiver62249,_method62250);j::Args _params62251=j::Args{_v_61610_cols,_v_61611_rows};return j::call(_method,_params62251,_receiver62249);})();

}

return V{};
},2)});})();
return ([&]()->V{V _obj62257=j::object();j::put(_obj62257,this->_literals[4],this->_literals[5]);j::put(_obj62257,this->_literals[6],([&]()->V{j::Args _array62258;return j::array(std::move(_array62258));})());j::put(_obj62257,this->_literals[7],V(true));j::put(_obj62257,this->_literals[8],j::function([=](const j::Args &_args_fn61615,const V &_receiver_fn61615,const V &_self_fn61615) mutable ->V{
V _v_61616_x;
V _v_61617_y;
V _v_61618__t;
V _v_61619_at;
_v_61616_x=_args_fn61615[0];
_v_61617_y=_args_fn61615[1];
_v_61618__t=_args_fn61615[2];
_v_61619_at=_args_fn61615[3];
return ([&]()->V{V _receiver62261=([&]()->V{V _callee62264=_v_61608_placed.get();return j::call(_callee62264,j::Args{_v_61619_at});})();V _method62262=this->_literals[8];V _method=j::get(_receiver62261,_method62262);j::Args _params62263=j::Args{([&]()->V{V _callee62259=this->_v_61539_colAt.get();return j::call(_callee62259,j::Args{_v_61616_x,_v_61619_at});})(),([&]()->V{V _callee62260=this->_v_61543_rowAt.get();return j::call(_callee62260,j::Args{_v_61617_y,_v_61619_at});})()};return j::call(_method,_params62263,_receiver62261);})();
return V{};
},4));return _obj62257;})();

}

return V{};
},2);
this->_v_61621_sizeOf.get()=j::function([=](const j::Args &_args_fn61622,const V &_receiver_fn61622,const V &_self_fn61622) mutable ->V{
V _v_61623_what;
V _v_61624_o;
V _v_61625_def;
_v_61623_what=_args_fn61622[0];
_v_61624_o=_args_fn61622[1];
_v_61625_def=_args_fn61622[2];
{
V _v_61626_cols;
V _v_61627_rows;
_v_61626_cols=([&]()->V{V _logical62265=j::get(_v_61624_o,this->_literals[0]);return j::nullish(_logical62265)?j::get(_v_61625_def,this->_literals[0]):_logical62265;})();
_v_61627_rows=([&]()->V{V _logical62266=j::get(_v_61624_o,this->_literals[1]);return j::nullish(_logical62266)?j::get(_v_61625_def,this->_literals[1]):_logical62266;})();
if(j::truth(([&]()->V{V _logical62267=([&]()->V{V _logical62268=j::unary("!",([&]()->V{V _receiver62269=j::builtin("Number");V _method62270=this->_literals[27];V _method=j::get(_receiver62269,_method62270);j::Args _params62271=j::Args{_v_61626_cols};return j::call(_method,_params62271,_receiver62269);})());return !j::truth(_logical62268)?([&]()->V{V _lhs62272=_v_61626_cols;V _rhs62273=V(1.0);return j::binary("<",_lhs62272,_rhs62273);})():_logical62268;})();return !j::truth(_logical62267)?([&]()->V{V _lhs62274=_v_61626_cols;V _rhs62275=V(320.0);return j::binary(">",_lhs62274,_rhs62275);})():_logical62267;})())){(void)(([&]()->V{V _callee62278=this->_v_61269_fail.get();return j::call(_callee62278,j::Args{([&]()->V{std::u16string _text62276;_text62276+=u"";_text62276+=j::string(_v_61623_what);_text62276+=u" takes cols as a whole number from 1 to 320, not ";_text62276+=j::string(([&]()->V{V _callee62277=this->_v_61289_show.get();return j::call(_callee62277,j::Args{_v_61626_cols});})());_text62276+=u"";return V(std::move(_text62276));})()});})());
}
if(j::truth(([&]()->V{V _logical62279=([&]()->V{V _logical62280=j::unary("!",([&]()->V{V _receiver62281=j::builtin("Number");V _method62282=this->_literals[27];V _method=j::get(_receiver62281,_method62282);j::Args _params62283=j::Args{_v_61627_rows};return j::call(_method,_params62283,_receiver62281);})());return !j::truth(_logical62280)?([&]()->V{V _lhs62284=_v_61627_rows;V _rhs62285=V(1.0);return j::binary("<",_lhs62284,_rhs62285);})():_logical62280;})();return !j::truth(_logical62279)?([&]()->V{V _lhs62286=_v_61627_rows;V _rhs62287=V(120.0);return j::binary(">",_lhs62286,_rhs62287);})():_logical62279;})())){(void)(([&]()->V{V _callee62290=this->_v_61269_fail.get();return j::call(_callee62290,j::Args{([&]()->V{std::u16string _text62288;_text62288+=u"";_text62288+=j::string(_v_61623_what);_text62288+=u" takes rows as a whole number from 1 to 120, not ";_text62288+=j::string(([&]()->V{V _callee62289=this->_v_61289_show.get();return j::call(_callee62289,j::Args{_v_61627_rows});})());_text62288+=u"";return V(std::move(_text62288));})()});})());
}
return ([&]()->V{V _obj62291=j::object();j::put(_obj62291,this->_literals[0],_v_61626_cols);j::put(_obj62291,this->_literals[1],_v_61627_rows);return _obj62291;})();

}

return V{};
},3);
this->_v_61631_look.get()=j::function([=](const j::Args &_args_fn61632,const V &_receiver_fn61632,const V &_self_fn61632) mutable ->V{
V _v_61633_first;
V _v_61634_o;
V _v_61635_recipe;
V _v_61636_maker;
_v_61633_first=_args_fn61632[0];
_v_61634_o=_args_fn61632[1];
_v_61635_recipe=_args_fn61632[2];
_v_61636_maker=_args_fn61632[3];
{
V _v_61640_name;
V _v_61641_how;
V _v_61642_body;
j::Cell _v_61643_what;
V _v_61644_opts;
V _v_61645_scale;
V _v_61646_base;
V _v_61647_own;
V _v_61648_speed;
j::Cell _v_61649_period;
V _v_61650_kit;
V _v_61677_fn;
if(j::truth(([&]()->V{V _logical62292=([&]()->V{V _logical62293=([&]()->V{V _lhs62294=_v_61633_first;V _rhs62295=V::null();return V(!j::equal(_lhs62294,_rhs62295,true));})();return j::truth(_logical62293)?([&]()->V{V _lhs62296=j::unary("typeof",_v_61633_first);V _rhs62297=this->_literals[33];return V(j::equal(_lhs62296,_rhs62297,true));})():_logical62293;})();return j::truth(_logical62292)?j::unary("!",([&]()->V{V _receiver62298=j::builtin("Array");V _method62299=this->_literals[34];V _method=j::get(_receiver62298,_method62299);j::Args _params62300=j::Args{_v_61633_first};return j::call(_method,_params62300,_receiver62298);})()):_logical62292;})())){
V _v_61637_given;
V _v_61638_drawn;
V _v_61639_rest;
V _pattern62301=_v_61633_first;
_v_61637_given=j::get(_pattern62301,this->_literals[35]);
_v_61638_drawn=j::get(_pattern62301,this->_literals[36]);
_v_61639_rest=j::object_rest(_pattern62301,{j::string(this->_literals[35]),j::string(this->_literals[36])});
return ([&]()->V{V _callee62302=_self_fn61632;return j::call(_callee62302,j::Args{_v_61637_given,_v_61634_o,_v_61639_rest,_v_61638_drawn});})();

}

_v_61640_name=_v_61633_first;
_v_61641_how=_v_61635_recipe;
_v_61642_body=_v_61636_maker;
if(j::truth(([&]()->V{V _logical62303=([&]()->V{V _lhs62304=j::unary("typeof",_v_61640_name);V _rhs62305=this->_literals[2];return V(!j::equal(_lhs62304,_rhs62305,true));})();return !j::truth(_logical62303)?j::unary("!",([&]()->V{V _receiver62306=_v_61640_name;V _method62307=this->_literals[22];V _method=j::get(_receiver62306,_method62307);j::Args _params62308=j::Args{};return j::call(_method,_params62308,_receiver62306);})()):_logical62303;})())){(void)(([&]()->V{V _callee62311=this->_v_61269_fail.get();return j::call(_callee62311,j::Args{([&]()->V{std::u16string _text62309;_text62309+=u"look() takes a name first, such as \"embers\", or { name, body }, not ";_text62309+=j::string(([&]()->V{V _callee62310=this->_v_61289_show.get();return j::call(_callee62310,j::Args{_v_61640_name});})());_text62309+=u"";return V(std::move(_text62309));})()});})());
}
if(j::truth(([&]()->V{V _logical62312=([&]()->V{V _logical62313=([&]()->V{V _lhs62314=_v_61641_how;V _rhs62315=V::null();return V(j::equal(_lhs62314,_rhs62315,true));})();return !j::truth(_logical62313)?([&]()->V{V _lhs62316=j::unary("typeof",_v_61641_how);V _rhs62317=this->_literals[33];return V(!j::equal(_lhs62316,_rhs62317,true));})():_logical62313;})();return !j::truth(_logical62312)?([&]()->V{V _receiver62318=j::builtin("Array");V _method62319=this->_literals[34];V _method=j::get(_receiver62318,_method62319);j::Args _params62320=j::Args{_v_61641_how};return j::call(_method,_params62320,_receiver62318);})():_logical62312;})())){(void)(([&]()->V{V _callee62323=this->_v_61269_fail.get();return j::call(_callee62323,j::Args{([&]()->V{std::u16string _text62321;_text62321+=u"look() takes how it looks third, such as { palette: \"fire\", period: 4 }, not ";_text62321+=j::string(([&]()->V{V _callee62322=this->_v_61289_show.get();return j::call(_callee62322,j::Args{_v_61641_how});})());_text62321+=u"";return V(std::move(_text62321));})()});})());
}
if(j::truth(([&]()->V{V _lhs62324=j::unary("typeof",_v_61642_body);V _rhs62325=this->_literals[9];return V(!j::equal(_lhs62324,_rhs62325,true));})())){(void)(([&]()->V{V _callee62328=this->_v_61269_fail.get();return j::call(_callee62328,j::Args{([&]()->V{std::u16string _text62326;_text62326+=u"look() takes a body last: (k, options) => (x, y, t) => a value 0 to 1, not ";_text62326+=j::string(([&]()->V{V _callee62327=this->_v_61289_show.get();return j::call(_callee62327,j::Args{_v_61642_body});})());_text62326+=u"";return V(std::move(_text62326));})()});})());
}
_v_61643_what.get()=([&]()->V{std::u16string _text62329;_text62329+=u"";_text62329+=j::string(_v_61640_name);_text62329+=u"()";return V(std::move(_text62329));})();
_v_61644_opts=([&]()->V{V _callee62333=this->_v_61287_optionsOf.get();return j::call(_callee62333,j::Args{_v_61643_what.get(),_v_61634_o,([&]()->V{j::Args _array62330;for(const auto &_value:j::elements(this->_v_61620_COMMON.get()))_array62330.push_back(_value);for(const auto &_value:j::elements(([&]()->V{V _logical62331=j::get(_v_61641_how,this->_literals[37]);return j::nullish(_logical62331)?([&]()->V{j::Args _array62332;return j::array(std::move(_array62332));})():_logical62331;})()))_array62330.push_back(_value);return j::array(std::move(_array62330));})()});})();
_v_61645_scale=([&]()->V{V _callee62334=this->_v_61306_scaleOf.get();return j::call(_callee62334,j::Args{_v_61643_what.get(),j::get(_v_61644_opts,this->_literals[38])});})();
_v_61646_base=([&]()->V{V _logical62335=j::get(_v_61641_how,this->_literals[39]);return j::nullish(_logical62335)?V(8.0):_logical62335;})();
if(j::truth(j::unary("!",([&]()->V{V _logical62336=([&]()->V{V _logical62337=([&]()->V{V _logical62338=([&]()->V{V _lhs62339=j::unary("typeof",_v_61646_base);V _rhs62340=this->_literals[40];return V(j::equal(_lhs62339,_rhs62340,true));})();return j::truth(_logical62338)?([&]()->V{V _receiver62341=j::builtin("Number");V _method62342=this->_literals[41];V _method=j::get(_receiver62341,_method62342);j::Args _params62343=j::Args{_v_61646_base};return j::call(_method,_params62343,_receiver62341);})():_logical62338;})();return j::truth(_logical62337)?([&]()->V{V _lhs62344=_v_61646_base;V _rhs62345=V(0.0);return j::binary(">",_lhs62344,_rhs62345);})():_logical62337;})();return j::truth(_logical62336)?([&]()->V{V _lhs62346=_v_61646_base;V _rhs62347=V(60.0);return j::binary("<=",_lhs62346,_rhs62347);})():_logical62336;})()))){(void)(([&]()->V{V _callee62350=this->_v_61269_fail.get();return j::call(_callee62350,j::Args{([&]()->V{std::u16string _text62348;_text62348+=u"look()'s period takes seconds above 0, up to 60, not ";_text62348+=j::string(([&]()->V{V _callee62349=this->_v_61289_show.get();return j::call(_callee62349,j::Args{_v_61646_base});})());_text62348+=u"";return V(std::move(_text62348));})()});})());
}
_v_61647_own=(j::truth(([&]()->V{V _lhs62351=j::get(_v_61644_opts,this->_literals[39]);V _rhs62352=j::builtin("undefined");return V(j::equal(_lhs62351,_rhs62352,true));})())?j::builtin("undefined"):([&]()->V{V _callee62355=this->_v_61316_hundredths.get();return j::call(_callee62355,j::Args{([&]()->V{V _callee62354=this->_v_61286_numberOf.get();return j::call(_callee62354,j::Args{([&]()->V{std::u16string _text62353;_text62353+=u"";_text62353+=j::string(_v_61643_what.get());_text62353+=u"'s period";return V(std::move(_text62353));})(),j::get(_v_61644_opts,this->_literals[39]),_v_61646_base,V(0.05),V(60.0)});})()});})());
_v_61648_speed=(j::truth(([&]()->V{V _lhs62356=_v_61647_own;V _rhs62357=j::builtin("undefined");return V(j::equal(_lhs62356,_rhs62357,true));})())?([&]()->V{V _callee62358=this->_v_61302_speedOf.get();return j::call(_callee62358,j::Args{_v_61643_what.get(),j::get(_v_61644_opts,this->_literals[42])});})():([&]()->V{V _lhs62359=_v_61646_base;V _rhs62360=_v_61647_own;return V(j::number(_lhs62359)/j::number(_rhs62360));})());
_v_61649_period.get()=([&]()->V{V _logical62361=_v_61647_own;return j::nullish(_logical62361)?(j::truth(([&]()->V{V _lhs62362=_v_61648_speed;V _rhs62363=V(0.0);return j::binary(">",_lhs62362,_rhs62363);})())?([&]()->V{V _callee62366=this->_v_61316_hundredths.get();return j::call(_callee62366,j::Args{([&]()->V{V _lhs62364=_v_61646_base;V _rhs62365=_v_61648_speed;return V(j::number(_lhs62364)/j::number(_rhs62365));})()});})():V(0.0)):_logical62361;})();
if(j::truth(([&]()->V{V _lhs62367=_v_61649_period.get();V _rhs62368=V(60.0);return j::binary(">",_lhs62367,_rhs62368);})())){(void)(([&]()->V{V _callee62381=this->_v_61269_fail.get();return j::call(_callee62381,j::Args{([&]()->V{std::u16string _text62369;_text62369+=u"";_text62369+=j::string(_v_61643_what.get());_text62369+=u"'s speed is too slow to loop within a minute: use ";_text62369+=j::string(([&]()->V{V _lhs62370=([&]()->V{V _number62376=([&]()->V{V _lhs62377=([&]()->V{V _lhs62379=_v_61646_base;V _rhs62380=V(60.0);return V(j::number(_lhs62379)/j::number(_rhs62380));})();V _rhs62378=V(1000.0);return V(j::number(_lhs62377)*j::number(_rhs62378));})();return V(std::ceil(j::number(_number62376)));})();V _rhs62371=V(1000.0);return V(j::number(_lhs62370)/j::number(_rhs62371));})());_text62369+=u" or more, or \"still\"";return V(std::move(_text62369));})()});})());
}
if(j::truth(([&]()->V{V _logical62382=([&]()->V{V _lhs62383=j::get(_v_61644_opts,this->_literals[43]);V _rhs62384=j::builtin("undefined");return V(!j::equal(_lhs62383,_rhs62384,true));})();return j::truth(_logical62382)?([&]()->V{V _lhs62385=j::unary("typeof",j::get(_v_61644_opts,this->_literals[43]));V _rhs62386=this->_literals[44];return V(!j::equal(_lhs62385,_rhs62386,true));})():_logical62382;})())){(void)(([&]()->V{V _callee62389=this->_v_61269_fail.get();return j::call(_callee62389,j::Args{([&]()->V{std::u16string _text62387;_text62387+=u"";_text62387+=j::string(_v_61643_what.get());_text62387+=u"'s dither takes true or false, not ";_text62387+=j::string(([&]()->V{V _callee62388=this->_v_61289_show.get();return j::call(_callee62388,j::Args{j::get(_v_61644_opts,this->_literals[43])});})());_text62387+=u"";return V(std::move(_text62387));})()});})());
}
if(j::truth(([&]()->V{V _logical62390=([&]()->V{V _lhs62391=j::get(_v_61644_opts,this->_literals[35]);V _rhs62392=j::builtin("undefined");return V(!j::equal(_lhs62391,_rhs62392,true));})();return j::truth(_logical62390)?([&]()->V{V _logical62393=([&]()->V{V _lhs62394=j::unary("typeof",j::get(_v_61644_opts,this->_literals[35]));V _rhs62395=this->_literals[2];return V(!j::equal(_lhs62394,_rhs62395,true));})();return !j::truth(_logical62393)?j::unary("!",([&]()->V{V _receiver62396=j::get(_v_61644_opts,this->_literals[35]);V _method62397=this->_literals[22];V _method=j::get(_receiver62396,_method62397);j::Args _params62398=j::Args{};return j::call(_method,_params62398,_receiver62396);})()):_logical62393;})():_logical62390;})())){(void)(([&]()->V{V _callee62401=this->_v_61269_fail.get();return j::call(_callee62401,j::Args{([&]()->V{std::u16string _text62399;_text62399+=u"";_text62399+=j::string(_v_61643_what.get());_text62399+=u"'s name takes a line of text, not ";_text62399+=j::string(([&]()->V{V _callee62400=this->_v_61289_show.get();return j::call(_callee62400,j::Args{j::get(_v_61644_opts,this->_literals[35])});})());_text62399+=u"";return V(std::move(_text62399));})()});})());
}
if(j::truth(([&]()->V{V _logical62402=([&]()->V{V _lhs62403=j::get(_v_61644_opts,this->_literals[45]);V _rhs62404=j::builtin("undefined");return V(!j::equal(_lhs62403,_rhs62404,true));})();return j::truth(_logical62402)?([&]()->V{V _logical62405=([&]()->V{V _logical62406=([&]()->V{V _lhs62407=j::unary("typeof",j::get(_v_61644_opts,this->_literals[45]));V _rhs62408=this->_literals[2];return V(!j::equal(_lhs62407,_rhs62408,true));})();return !j::truth(_logical62406)?j::unary("!",([&]()->V{V _receiver62409=j::get(_v_61644_opts,this->_literals[45]);V _method62410=this->_literals[22];V _method=j::get(_receiver62409,_method62410);j::Args _params62411=j::Args{};return j::call(_method,_params62411,_receiver62409);})()):_logical62406;})();return !j::truth(_logical62405)?([&]()->V{V _lhs62412=j::get(j::get(_v_61644_opts,this->_literals[45]),this->_literals[46]);V _rhs62413=V(72.0);return j::binary(">",_lhs62412,_rhs62413);})():_logical62405;})():_logical62402;})())){(void)(([&]()->V{V _callee62416=this->_v_61269_fail.get();return j::call(_callee62416,j::Args{([&]()->V{std::u16string _text62414;_text62414+=u"";_text62414+=j::string(_v_61643_what.get());_text62414+=u"'s note takes one line of 1 to 72 characters, not ";_text62414+=j::string(([&]()->V{V _callee62415=this->_v_61289_show.get();return j::call(_callee62415,j::Args{j::get(_v_61644_opts,this->_literals[45])});})());_text62414+=u"";return V(std::move(_text62414));})()});})());
}
_v_61650_kit=([&]()->V{V _obj62417=j::object();j::put(_obj62417,this->_literals[38],_v_61645_scale);j::put(_obj62417,this->_literals[42],_v_61648_speed);j::put(_obj62417,this->_literals[39],_v_61649_period.get());j::put(_obj62417,this->_literals[47],(j::truth(_v_61649_period.get())?j::function([=](const j::Args &_args_fn61651,const V &_receiver_fn61651,const V &_self_fn61651) mutable ->V{
V _v_61652_t;
_v_61652_t=_args_fn61651[0];
return ([&]()->V{V _callee62420=this->_v_61270_fract.get();return j::call(_callee62420,j::Args{([&]()->V{V _lhs62418=_v_61652_t;V _rhs62419=_v_61649_period.get();return V(j::number(_lhs62418)/j::number(_rhs62419));})()});})();
return V{};
},1):j::function([=](const j::Args &_args_fn61653,const V &_receiver_fn61653,const V &_self_fn61653) mutable ->V{
return V(0.0);
return V{};
},0)));j::put(_obj62417,this->_literals[48],j::function([=](const j::Args &_args_fn61654,const V &_receiver_fn61654,const V &_self_fn61654) mutable ->V{
V _v_61655_n;
V _default62421=_args_fn61654[0];if(_default62421.kind==V::Undefined||_default62421.kind==V::Hole)_default62421=([&]()->V{V _obj62422=j::object();return _obj62422;})();
_v_61655_n=_default62421;
{
V _v_61656_way;
V _v_61657_often;
V _v_61658_big;
V _v_61659_more;
V _v_61660_size;
V _v_61663_travel;
V _v_61664_change;
V _v_61665_rest;
V _pattern62423=_v_61655_n;
_v_61656_way=j::get(_pattern62423,this->_literals[49]);
_v_61657_often=j::get(_pattern62423,this->_literals[50]);
_v_61658_big=j::get(_pattern62423,this->_literals[51]);
_v_61659_more=j::object_rest(_pattern62423,{j::string(this->_literals[49]),j::string(this->_literals[50]),j::string(this->_literals[51])});
_v_61660_size=(j::truth(([&]()->V{V _lhs62424=j::unary("typeof",_v_61658_big);V _rhs62425=this->_literals[2];return V(j::equal(_lhs62424,_rhs62425,true));})())?(j::truth(([&]()->V{V _receiver62426=j::builtin("Object");V _method62427=this->_literals[52];V _method=j::get(_receiver62426,_method62427);j::Args _params62428=j::Args{this->_v_61628_NOISE_SIZES.get(),_v_61658_big};return j::call(_method,_params62428,_receiver62426);})())?([&]()->V{j::Args _array62429;_array62429.push_back(j::get(this->_v_61628_NOISE_SIZES.get(),_v_61658_big));_array62429.push_back(j::get(this->_v_61628_NOISE_SIZES.get(),_v_61658_big));return j::array(std::move(_array62429));})():([&]()->V{V _callee62444=this->_v_61269_fail.get();return j::call(_callee62444,j::Args{([&]()->V{std::u16string _text62430;_text62430+=u"";_text62430+=j::string(_v_61643_what.get());_text62430+=u"'s noise size takes ";_text62430+=j::string(([&]()->V{V _receiver62431=([&]()->V{V _receiver62437=([&]()->V{V _receiver62440=j::builtin("Object");V _method62441=this->_literals[55];V _method=j::get(_receiver62440,_method62441);j::Args _params62442=j::Args{this->_v_61628_NOISE_SIZES.get()};return j::call(_method,_params62442,_receiver62440);})();V _method62438=this->_literals[56];V _method=j::get(_receiver62437,_method62438);j::Args _params62439=j::Args{j::function([=](const j::Args &_args_fn61661,const V &_receiver_fn61661,const V &_self_fn61661) mutable ->V{
V _v_61662_w;
_v_61662_w=_args_fn61661[0];
return ([&]()->V{V _receiver62434=j::builtin("JSON");V _method62435=this->_literals[54];V _method=j::get(_receiver62434,_method62435);j::Args _params62436=j::Args{_v_61662_w};return j::call(_method,_params62436,_receiver62434);})();
return V{};
},1)};return j::call(_method,_params62439,_receiver62437);})();V _method62432=this->_literals[57];V _method=j::get(_receiver62431,_method62432);j::Args _params62433=j::Args{this->_literals[53]};return j::call(_method,_params62433,_receiver62431);})());_text62430+=u", or a number, not ";_text62430+=j::string(([&]()->V{V _callee62443=this->_v_61289_show.get();return j::call(_callee62443,j::Args{_v_61658_big});})());_text62430+=u"";return V(std::move(_text62430));})()});})()):_v_61658_big);
_v_61663_travel=(j::truth(([&]()->V{V _lhs62445=j::unary("typeof",_v_61656_way);V _rhs62446=this->_literals[2];return V(j::equal(_lhs62445,_rhs62446,true));})())?(j::truth(([&]()->V{V _receiver62447=j::builtin("Object");V _method62448=this->_literals[52];V _method=j::get(_receiver62447,_method62448);j::Args _params62449=j::Args{this->_v_61629_TRAVELS.get(),_v_61656_way};return j::call(_method,_params62449,_receiver62447);})())?j::get(this->_v_61629_TRAVELS.get(),_v_61656_way):([&]()->V{V _callee62452=this->_v_61269_fail.get();return j::call(_callee62452,j::Args{([&]()->V{std::u16string _text62450;_text62450+=u"";_text62450+=j::string(_v_61643_what.get());_text62450+=u"'s noise travel takes \"up\", \"down\", \"left\" or \"right\", or [x, y], not ";_text62450+=j::string(([&]()->V{V _callee62451=this->_v_61289_show.get();return j::call(_callee62451,j::Args{_v_61656_way});})());_text62450+=u"";return V(std::move(_text62450));})()});})()):_v_61656_way);
_v_61664_change=(j::truth(([&]()->V{V _lhs62453=j::unary("typeof",_v_61657_often);V _rhs62454=this->_literals[2];return V(j::equal(_lhs62453,_rhs62454,true));})())?(j::truth(([&]()->V{V _receiver62455=j::builtin("Object");V _method62456=this->_literals[52];V _method=j::get(_receiver62455,_method62456);j::Args _params62457=j::Args{this->_v_61630_CHANGES.get(),_v_61657_often};return j::call(_method,_params62457,_receiver62455);})())?j::get(this->_v_61630_CHANGES.get(),_v_61657_often):([&]()->V{V _callee62460=this->_v_61269_fail.get();return j::call(_callee62460,j::Args{([&]()->V{std::u16string _text62458;_text62458+=u"";_text62458+=j::string(_v_61643_what.get());_text62458+=u"'s noise change takes \"slowly\", \"steadily\" or \"quickly\", or times a loop, not ";_text62458+=j::string(([&]()->V{V _callee62459=this->_v_61289_show.get();return j::call(_callee62459,j::Args{_v_61657_often});})());_text62458+=u"";return V(std::move(_text62458));})()});})()):_v_61657_often);
_v_61665_rest=([&]()->V{V _obj62461=j::object();V _spread62462=_v_61659_more;for(const auto &_key:j::keys(_spread62462))j::put(_obj62461,_key,j::get(_spread62462,_key));V _spread62463=(j::truth(([&]()->V{V _lhs62464=_v_61660_size;V _rhs62465=j::builtin("undefined");return V(!j::equal(_lhs62464,_rhs62465,true));})())?([&]()->V{V _obj62466=j::object();j::put(_obj62466,this->_literals[51],_v_61660_size);return _obj62466;})():([&]()->V{V _obj62467=j::object();return _obj62467;})());for(const auto &_key:j::keys(_spread62463))j::put(_obj62461,_key,j::get(_spread62463,_key));return _obj62461;})();
if(j::truth(j::unary("!",_v_61649_period.get()))){return ([&]()->V{V _callee62470=this->_v_61278_noise.get();return j::call(_callee62470,j::Args{([&]()->V{V _obj62468=j::object();V _spread62469=_v_61665_rest;for(const auto &_key:j::keys(_spread62469))j::put(_obj62468,_key,j::get(_spread62469,_key));j::put(_obj62468,this->_literals[58],V(0.0));return _obj62468;})()});})();
}
if(j::truth(_v_61663_travel)){
V _v_61666_s;
V _v_61667_sx;
V _v_61668_sy;
V _v_61669_features;
V _v_61670_k;
_v_61666_s=([&]()->V{V _logical62471=j::get(_v_61665_rest,this->_literals[51]);return j::nullish(_logical62471)?V(12.0):_logical62471;})();
V _pattern62477=(j::truth(([&]()->V{V _lhs62472=j::unary("typeof",_v_61666_s);V _rhs62473=this->_literals[40];return V(j::equal(_lhs62472,_rhs62473,true));})())?([&]()->V{j::Args _array62474;_array62474.push_back(_v_61666_s);_array62474.push_back(([&]()->V{V _lhs62475=_v_61666_s;V _rhs62476=V(2.0);return V(j::number(_lhs62475)/j::number(_rhs62476));})());return j::array(std::move(_array62474));})():_v_61666_s);
_v_61667_sx=j::get(_pattern62477,V(0));
_v_61668_sy=j::get(_pattern62477,V(1));
_v_61669_features=([&]()->V{V _number62482=([&]()->V{V _lhs62484=j::get(_v_61663_travel,V(0.0));V _rhs62485=_v_61667_sx;return V(j::number(_lhs62484)/j::number(_rhs62485));})();V _number62483=([&]()->V{V _lhs62486=j::get(_v_61663_travel,V(1.0));V _rhs62487=_v_61668_sy;return V(j::number(_lhs62486)/j::number(_rhs62487));})();return V(std::hypot(j::number(_number62482),j::number(_number62483)));})();
_v_61670_k=(j::truth(([&]()->V{V _logical62488=([&]()->V{V _lhs62489=_v_61669_features;V _rhs62490=V(0.0);return j::binary(">",_lhs62489,_rhs62490);})();return j::truth(_logical62488)?([&]()->V{V _lhs62491=_v_61669_features;V _rhs62492=V(1.0);return j::binary("<",_lhs62491,_rhs62492);})():_logical62488;})())?([&]()->V{V _lhs62493=V(1.0001);V _rhs62494=_v_61669_features;return V(j::number(_lhs62493)/j::number(_rhs62494));})():V(1.0));
return ([&]()->V{V _callee62506=this->_v_61278_noise.get();return j::call(_callee62506,j::Args{([&]()->V{V _obj62495=j::object();V _spread62496=_v_61665_rest;for(const auto &_key:j::keys(_spread62496))j::put(_obj62495,_key,j::get(_spread62496,_key));j::put(_obj62495,this->_literals[59],([&]()->V{j::Args _array62497;_array62497.push_back(([&]()->V{V _lhs62498=([&]()->V{V _lhs62500=j::get(_v_61663_travel,V(0.0));V _rhs62501=_v_61670_k;return V(j::number(_lhs62500)*j::number(_rhs62501));})();V _rhs62499=_v_61649_period.get();return V(j::number(_lhs62498)/j::number(_rhs62499));})());_array62497.push_back(([&]()->V{V _lhs62502=([&]()->V{V _lhs62504=j::get(_v_61663_travel,V(1.0));V _rhs62505=_v_61670_k;return V(j::number(_lhs62504)*j::number(_rhs62505));})();V _rhs62503=_v_61649_period.get();return V(j::number(_lhs62502)/j::number(_rhs62503));})());return j::array(std::move(_array62497));})());j::put(_obj62495,this->_literals[39],_v_61649_period.get());return _obj62495;})()});})();

}

return ([&]()->V{V _callee62512=this->_v_61278_noise.get();return j::call(_callee62512,j::Args{([&]()->V{V _obj62507=j::object();V _spread62508=_v_61665_rest;for(const auto &_key:j::keys(_spread62508))j::put(_obj62507,_key,j::get(_spread62508,_key));j::put(_obj62507,this->_literals[58],([&]()->V{V _lhs62509=([&]()->V{V _logical62511=_v_61664_change;return j::nullish(_logical62511)?V(1.0):_logical62511;})();V _rhs62510=_v_61649_period.get();return V(j::number(_lhs62509)/j::number(_rhs62510));})());j::put(_obj62507,this->_literals[39],_v_61649_period.get());return _obj62507;})()});})();

}

return V{};
},0));j::put(_obj62417,this->_literals[60],j::function([=](const j::Args &_args_fn61671,const V &_receiver_fn61671,const V &_self_fn61671) mutable ->V{
V _v_61672_x;
V _v_61673_at;
_v_61672_x=_args_fn61671[0];
_v_61673_at=_args_fn61671[1];
return ([&]()->V{V _lhs62513=([&]()->V{V _lhs62515=([&]()->V{V _lhs62517=_v_61672_x;V _rhs62518=([&]()->V{V _lhs62519=j::get(_v_61673_at,this->_literals[61]);V _rhs62520=V(2.0);return V(j::number(_lhs62519)/j::number(_rhs62520));})();return j::binary("+",_lhs62517,_rhs62518);})();V _rhs62516=j::get(_v_61673_at,this->_literals[61]);return V(j::number(_lhs62515)/j::number(_rhs62516));})();V _rhs62514=j::get(_v_61673_at,this->_literals[0]);return V(j::number(_lhs62513)*j::number(_rhs62514));})();
return V{};
},2));j::put(_obj62417,this->_literals[62],j::function([=](const j::Args &_args_fn61674,const V &_receiver_fn61674,const V &_self_fn61674) mutable ->V{
V _v_61675_y;
V _v_61676_at;
_v_61675_y=_args_fn61674[0];
_v_61676_at=_args_fn61674[1];
return ([&]()->V{V _lhs62521=([&]()->V{V _lhs62523=([&]()->V{V _lhs62525=_v_61675_y;V _rhs62526=([&]()->V{V _lhs62527=j::get(_v_61676_at,this->_literals[63]);V _rhs62528=V(2.0);return V(j::number(_lhs62527)/j::number(_rhs62528));})();return j::binary("+",_lhs62525,_rhs62526);})();V _rhs62524=j::get(_v_61676_at,this->_literals[63]);return V(j::number(_lhs62523)/j::number(_rhs62524));})();V _rhs62522=j::get(_v_61676_at,this->_literals[1]);return V(j::number(_lhs62521)*j::number(_rhs62522));})();
return V{};
},2));return _obj62417;})();
_v_61677_fn=([&]()->V{V _callee62529=_v_61642_body;return j::call(_callee62529,j::Args{_v_61650_kit,_v_61644_opts});})();
if(j::truth(([&]()->V{V _lhs62530=j::unary("typeof",_v_61677_fn);V _rhs62531=this->_literals[9];return V(!j::equal(_lhs62530,_rhs62531,true));})())){(void)(([&]()->V{V _callee62534=this->_v_61269_fail.get();return j::call(_callee62534,j::Args{([&]()->V{std::u16string _text62532;_text62532+=u"";_text62532+=j::string(_v_61643_what.get());_text62532+=u"'s body returns what each cell is, (x, y, t) => a value 0 to 1, not ";_text62532+=j::string(([&]()->V{V _callee62533=this->_v_61289_show.get();return j::call(_callee62533,j::Args{_v_61677_fn});})());_text62532+=u"";return V(std::move(_text62532));})()});})());
}
return ([&]()->V{V _callee62557=this->_v_61319_Look.get();return j::construct(_callee62557,j::Args{([&]()->V{V _obj62535=j::object();j::put(_obj62535,this->_literals[35],([&]()->V{V _logical62536=j::get(_v_61644_opts,this->_literals[35]);return j::nullish(_logical62536)?_v_61640_name:_logical62536;})());j::put(_obj62535,this->_literals[45],([&]()->V{V _logical62537=([&]()->V{V _logical62538=j::get(_v_61644_opts,this->_literals[45]);return j::nullish(_logical62538)?j::get(_v_61641_how,this->_literals[45]):_logical62538;})();return j::nullish(_logical62537)?([&]()->V{V _receiver62539=_v_61640_name;V _method62540=this->_literals[64];V _method=j::get(_receiver62539,_method62540);j::Args _params62541=j::Args{V(0.0),V(72.0)};return j::call(_method,_params62541,_receiver62539);})():_logical62537;})());V _spread62542=([&]()->V{V _callee62544=this->_v_61621_sizeOf.get();return j::call(_callee62544,j::Args{_v_61643_what.get(),_v_61644_opts,([&]()->V{V _obj62543=j::object();j::put(_obj62543,this->_literals[0],V(64.0));j::put(_obj62543,this->_literals[1],V(24.0));return _obj62543;})()});})();for(const auto &_key:j::keys(_spread62542))j::put(_obj62535,_key,j::get(_spread62542,_key));j::put(_obj62535,this->_literals[65],([&]()->V{V _callee62548=this->_v_61293_schemeOf.get();return j::call(_callee62548,j::Args{([&]()->V{std::u16string _text62545;_text62545+=u"";_text62545+=j::string(_v_61643_what.get());_text62545+=u"'s palette";return V(std::move(_text62545));})(),([&]()->V{V _logical62546=([&]()->V{V _logical62547=j::get(_v_61644_opts,this->_literals[66]);return j::nullish(_logical62547)?j::get(_v_61641_how,this->_literals[66]):_logical62547;})();return j::nullish(_logical62546)?this->_literals[14]:_logical62546;})()});})());j::put(_obj62535,this->_literals[67],([&]()->V{V _callee62551=this->_v_61272_rampOf.get();return j::call(_callee62551,j::Args{([&]()->V{V _logical62549=([&]()->V{V _logical62550=j::get(_v_61644_opts,this->_literals[67]);return j::nullish(_logical62550)?j::get(_v_61641_how,this->_literals[67]):_logical62550;})();return j::nullish(_logical62549)?this->_literals[68]:_logical62549;})()});})());j::put(_obj62535,this->_literals[69],([&]()->V{V _logical62552=j::get(_v_61641_how,this->_literals[69]);return j::nullish(_logical62552)?V(false):_logical62552;})());j::put(_obj62535,this->_literals[43],([&]()->V{V _logical62553=([&]()->V{V _logical62554=j::get(_v_61644_opts,this->_literals[43]);return j::nullish(_logical62554)?j::get(_v_61641_how,this->_literals[43]):_logical62554;})();return j::nullish(_logical62553)?V(false):_logical62553;})());j::put(_obj62535,this->_literals[6],(j::truth(_v_61649_period.get())?([&]()->V{j::Args _array62555;_array62555.push_back(_v_61649_period.get());return j::array(std::move(_array62555));})():([&]()->V{j::Args _array62556;return j::array(std::move(_array62556));})()));j::put(_obj62535,this->_literals[70],_v_61677_fn);return _obj62535;})()});})();

}

return V{};
},4);
this->_v_61678_waves.get()=j::function([=](const j::Args &_args_fn61679,const V &_receiver_fn61679,const V &_self_fn61679) mutable ->V{
V _v_61680_o;
_v_61680_o=_args_fn61679[0];
{
return ([&]()->V{V _callee62702=this->_v_61631_look.get();return j::call(_callee62702,j::Args{this->_literals[71],_v_61680_o,([&]()->V{V _obj62558=j::object();j::put(_obj62558,this->_literals[37],([&]()->V{j::Args _array62559;_array62559.push_back(this->_literals[72]);return j::array(std::move(_array62559));})());j::put(_obj62558,this->_literals[45],this->_literals[73]);j::put(_obj62558,this->_literals[66],this->_literals[74]);j::put(_obj62558,this->_literals[67],this->_literals[75]);j::put(_obj62558,this->_literals[69],V(false));j::put(_obj62558,this->_literals[39],V(4.0));return _obj62558;})(),j::function([=](const j::Args &_args_fn61681,const V &_receiver_fn61681,const V &_self_fn61681) mutable ->V{
j::Cell _v_61682_k;
V _v_61683_opts;
_v_61682_k.get()=_args_fn61681[0];
_v_61683_opts=_args_fn61681[1];
{
j::Cell _v_61684_d;
_v_61684_d.get()=(j::truth(([&]()->V{V _lhs62560=([&]()->V{V _callee62563=this->_v_61292_wordOf.get();return j::call(_callee62563,j::Args{this->_literals[76],j::get(_v_61683_opts,this->_literals[72]),([&]()->V{j::Args _array62562;_array62562.push_back(this->_literals[77]);_array62562.push_back(this->_literals[78]);return j::array(std::move(_array62562));})(),this->_literals[78]});})();V _rhs62561=this->_literals[78];return V(j::equal(_lhs62560,_rhs62561,true));})())?V(1.0):j::unary("-",V(1.0)));
return j::function([=](const j::Args &_args_fn61685,const V &_receiver_fn61685,const V &_self_fn61685) mutable ->V{
V _v_61686_x;
V _v_61687_y;
V _v_61688_t;
_v_61686_x=_args_fn61685[0];
_v_61687_y=_args_fn61685[1];
_v_61688_t=_args_fn61685[2];
{
V _v_61689_a;
V _v_61690_X;
V _v_61691_Y;
V _v_61692_v;
_v_61689_a=([&]()->V{V _lhs62564=this->_v_61267_TAU.get();V _rhs62565=([&]()->V{V _receiver62566=_v_61682_k.get();V _method62567=this->_literals[47];V _method=j::get(_receiver62566,_method62567);j::Args _params62568=j::Args{_v_61688_t};return j::call(_method,_params62568,_receiver62566);})();return V(j::number(_lhs62564)*j::number(_rhs62565));})();
_v_61690_X=([&]()->V{V _lhs62569=_v_61686_x;V _rhs62570=j::get(_v_61682_k.get(),this->_literals[38]);return V(j::number(_lhs62569)/j::number(_rhs62570));})();
_v_61691_Y=([&]()->V{V _lhs62571=_v_61687_y;V _rhs62572=j::get(_v_61682_k.get(),this->_literals[38]);return V(j::number(_lhs62571)/j::number(_rhs62572));})();
_v_61692_v=([&]()->V{V _lhs62573=V(0.5);V _rhs62574=([&]()->V{V _lhs62575=V(0.5);V _rhs62576=([&]()->V{V _number62635=([&]()->V{V _lhs62636=([&]()->V{V _lhs62638=([&]()->V{V _lhs62640=([&]()->V{V _lhs62642=_v_61691_Y;V _rhs62643=V(11.0);return V(j::number(_lhs62642)*j::number(_rhs62643));})();V _rhs62641=_v_61689_a;return V(j::number(_lhs62640)-j::number(_rhs62641));})();V _rhs62639=([&]()->V{V _lhs62644=V(1.1);V _rhs62645=([&]()->V{V _number62656=([&]()->V{V _lhs62657=([&]()->V{V _lhs62659=([&]()->V{V _lhs62661=_v_61690_X;V _rhs62662=V(3.0);return V(j::number(_lhs62661)*j::number(_rhs62662));})();V _rhs62660=([&]()->V{V _lhs62663=_v_61684_d.get();V _rhs62664=_v_61689_a;return V(j::number(_lhs62663)*j::number(_rhs62664));})();return V(j::number(_lhs62659)-j::number(_rhs62660));})();V _rhs62658=([&]()->V{V _lhs62665=_v_61691_Y;V _rhs62666=V(2.0);return V(j::number(_lhs62665)*j::number(_rhs62666));})();return j::binary("+",_lhs62657,_rhs62658);})();return V(std::sin(j::number(_number62656)));})();return V(j::number(_lhs62644)*j::number(_rhs62645));})();return j::binary("+",_lhs62638,_rhs62639);})();V _rhs62637=([&]()->V{V _lhs62667=V(0.45);V _rhs62668=([&]()->V{V _number62681=([&]()->V{V _lhs62682=([&]()->V{V _lhs62684=([&]()->V{V _lhs62686=_v_61690_X;V _rhs62687=V(7.0);return V(j::number(_lhs62686)*j::number(_rhs62687));})();V _rhs62685=([&]()->V{V _lhs62688=_v_61691_Y;V _rhs62689=V(3.0);return V(j::number(_lhs62688)*j::number(_rhs62689));})();return V(j::number(_lhs62684)-j::number(_rhs62685));})();V _rhs62683=([&]()->V{V _lhs62690=([&]()->V{V _lhs62692=V(2.0);V _rhs62693=_v_61684_d.get();return V(j::number(_lhs62692)*j::number(_rhs62693));})();V _rhs62691=_v_61689_a;return V(j::number(_lhs62690)*j::number(_rhs62691));})();return V(j::number(_lhs62682)-j::number(_rhs62683));})();return V(std::sin(j::number(_number62681)));})();return V(j::number(_lhs62667)*j::number(_rhs62668));})();return j::binary("+",_lhs62636,_rhs62637);})();return V(std::sin(j::number(_number62635)));})();return V(j::number(_lhs62575)*j::number(_rhs62576));})();return j::binary("+",_lhs62573,_rhs62574);})();
return ([&]()->V{V _lhs62694=([&]()->V{V _lhs62696=_v_61692_v;V _rhs62697=_v_61692_v;return V(j::number(_lhs62696)*j::number(_rhs62697));})();V _rhs62695=([&]()->V{V _lhs62698=V(0.55);V _rhs62699=([&]()->V{V _lhs62700=V(0.45);V _rhs62701=_v_61692_v;return V(j::number(_lhs62700)*j::number(_rhs62701));})();return j::binary("+",_lhs62698,_rhs62699);})();return V(j::number(_lhs62694)*j::number(_rhs62695));})();

}

return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61693_sea.get()=j::function([=](const j::Args &_args_fn61694,const V &_receiver_fn61694,const V &_self_fn61694) mutable ->V{
V _v_61695_o;
_v_61695_o=_args_fn61694[0];
{
return ([&]()->V{V _callee62756=this->_v_61631_look.get();return j::call(_callee62756,j::Args{this->_literals[79],_v_61695_o,([&]()->V{V _obj62703=j::object();j::put(_obj62703,this->_literals[37],([&]()->V{j::Args _array62704;_array62704.push_back(this->_literals[80]);return j::array(std::move(_array62704));})());j::put(_obj62703,this->_literals[45],this->_literals[81]);j::put(_obj62703,this->_literals[66],this->_literals[74]);j::put(_obj62703,this->_literals[67],this->_literals[82]);j::put(_obj62703,this->_literals[69],V(false));j::put(_obj62703,this->_literals[39],V(8.0));return _obj62703;})(),j::function([=](const j::Args &_args_fn61696,const V &_receiver_fn61696,const V &_self_fn61696) mutable ->V{
V _v_61697_k;
V _v_61698_opts;
_v_61697_k=_args_fn61696[0];
_v_61698_opts=_args_fn61696[1];
{
j::Cell _v_61699_share;
j::Cell _v_61700_swell;
_v_61699_share.get()=j::get(([&]()->V{V _obj62705=j::object();j::put(_obj62705,this->_literals[83],([&]()->V{V _lhs62706=V(1.0);V _rhs62707=V(3.0);return V(j::number(_lhs62706)/j::number(_rhs62707));})());j::put(_obj62705,this->_literals[84],([&]()->V{V _lhs62708=V(1.0);V _rhs62709=V(2.0);return V(j::number(_lhs62708)/j::number(_rhs62709));})());j::put(_obj62705,this->_literals[85],([&]()->V{V _lhs62710=V(2.0);V _rhs62711=V(3.0);return V(j::number(_lhs62710)/j::number(_rhs62711));})());return _obj62705;})(),([&]()->V{V _callee62713=this->_v_61292_wordOf.get();return j::call(_callee62713,j::Args{this->_literals[86],j::get(_v_61698_opts,this->_literals[80]),([&]()->V{j::Args _array62712;_array62712.push_back(this->_literals[83]);_array62712.push_back(this->_literals[84]);_array62712.push_back(this->_literals[85]);return j::array(std::move(_array62712));})(),this->_literals[84]});})());
_v_61700_swell.get()=([&]()->V{V _receiver62721=_v_61697_k;V _method62722=this->_literals[48];V _method=j::get(_receiver62721,_method62722);j::Args _params62723=j::Args{([&]()->V{V _obj62714=j::object();j::put(_obj62714,this->_literals[51],([&]()->V{j::Args _array62715;_array62715.push_back(([&]()->V{V _lhs62716=V(1.1);V _rhs62717=j::get(_v_61697_k,this->_literals[38]);return V(j::number(_lhs62716)*j::number(_rhs62717));})());_array62715.push_back(([&]()->V{V _lhs62718=V(0.22);V _rhs62719=j::get(_v_61697_k,this->_literals[38]);return V(j::number(_lhs62718)*j::number(_rhs62719));})());return j::array(std::move(_array62715));})());j::put(_obj62714,this->_literals[87],V(3.0));j::put(_obj62714,this->_literals[49],([&]()->V{j::Args _array62720;_array62720.push_back(V(0.0));_array62720.push_back(j::unary("-",V(2.2)));return j::array(std::move(_array62720));})());return _obj62714;})()};return j::call(_method,_params62723,_receiver62721);})();
return j::function([=](const j::Args &_args_fn61701,const V &_receiver_fn61701,const V &_self_fn61701) mutable ->V{
V _v_61702_x;
V _v_61703_y;
V _v_61704_t;
V _v_61705_at;
_v_61702_x=_args_fn61701[0];
_v_61703_y=_args_fn61701[1];
_v_61704_t=_args_fn61701[2];
_v_61705_at=_args_fn61701[3];
{
V _v_61706_h;
V _v_61707_z;
V _v_61708_n;
V _v_61709_near;
_v_61706_h=([&]()->V{V _lhs62724=([&]()->V{V _lhs62726=_v_61699_share.get();V _rhs62727=V(0.5);return V(j::number(_lhs62726)-j::number(_rhs62727));})();V _rhs62725=j::get(_v_61705_at,this->_literals[63]);return V(j::number(_lhs62724)*j::number(_rhs62725));})();
if(j::truth(([&]()->V{V _lhs62728=_v_61703_y;V _rhs62729=_v_61706_h;return j::binary("<",_lhs62728,_rhs62729);})())){return V::null();
}
_v_61707_z=([&]()->V{V _lhs62730=V(0.5);V _rhs62731=([&]()->V{V _lhs62732=([&]()->V{V _lhs62734=_v_61703_y;V _rhs62735=_v_61706_h;return V(j::number(_lhs62734)-j::number(_rhs62735));})();V _rhs62733=V(0.05);return j::binary("+",_lhs62732,_rhs62733);})();return V(j::number(_lhs62730)/j::number(_rhs62731));})();
_v_61708_n=([&]()->V{V _callee62738=_v_61700_swell.get();return j::call(_callee62738,j::Args{([&]()->V{V _lhs62736=_v_61702_x;V _rhs62737=_v_61707_z;return V(j::number(_lhs62736)*j::number(_rhs62737));})(),_v_61707_z,_v_61704_t});})();
_v_61709_near=([&]()->V{V _callee62743=this->_v_61268_clamp.get();return j::call(_callee62743,j::Args{([&]()->V{V _lhs62739=V(1.1);V _rhs62740=([&]()->V{V _lhs62741=_v_61707_z;V _rhs62742=V(8.0);return V(j::number(_lhs62741)/j::number(_rhs62742));})();return V(j::number(_lhs62739)-j::number(_rhs62740));})()});})();
return ([&]()->V{V _callee62755=this->_v_61268_clamp.get();return j::call(_callee62755,j::Args{([&]()->V{V _lhs62744=([&]()->V{V _lhs62746=([&]()->V{V _callee62748=this->_v_61274_smoothstep.get();return j::call(_callee62748,j::Args{V(0.3),V(0.85),_v_61708_n});})();V _rhs62747=([&]()->V{V _lhs62749=V(0.45);V _rhs62750=([&]()->V{V _lhs62751=V(0.55);V _rhs62752=_v_61709_near;return V(j::number(_lhs62751)*j::number(_rhs62752));})();return j::binary("+",_lhs62749,_rhs62750);})();return V(j::number(_lhs62746)*j::number(_rhs62747));})();V _rhs62745=([&]()->V{V _lhs62753=V(0.12);V _rhs62754=_v_61709_near;return V(j::number(_lhs62753)*j::number(_rhs62754));})();return j::binary("+",_lhs62744,_rhs62745);})()});})();

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61710_plasma.get()=j::function([=](const j::Args &_args_fn61711,const V &_receiver_fn61711,const V &_self_fn61711) mutable ->V{
V _v_61712_o;
_v_61712_o=_args_fn61711[0];
{
return ([&]()->V{V _callee62886=this->_v_61631_look.get();return j::call(_callee62886,j::Args{this->_literals[88],_v_61712_o,([&]()->V{V _obj62757=j::object();j::put(_obj62757,this->_literals[45],this->_literals[89]);j::put(_obj62757,this->_literals[66],this->_literals[90]);j::put(_obj62757,this->_literals[67],this->_literals[68]);j::put(_obj62757,this->_literals[69],V(true));j::put(_obj62757,this->_literals[39],V(8.0));return _obj62757;})(),j::function([=](const j::Args &_args_fn61713,const V &_receiver_fn61713,const V &_self_fn61713) mutable ->V{
j::Cell _v_61714_k;
_v_61714_k.get()=_args_fn61713[0];
return j::function([=](const j::Args &_args_fn61715,const V &_receiver_fn61715,const V &_self_fn61715) mutable ->V{
V _v_61716_x;
V _v_61717_y;
V _v_61718_t;
_v_61716_x=_args_fn61715[0];
_v_61717_y=_args_fn61715[1];
_v_61718_t=_args_fn61715[2];
{
V _v_61719_a;
V _v_61720_X;
V _v_61721_Y;
V _v_61722_v;
_v_61719_a=([&]()->V{V _lhs62758=this->_v_61267_TAU.get();V _rhs62759=([&]()->V{V _receiver62760=_v_61714_k.get();V _method62761=this->_literals[47];V _method=j::get(_receiver62760,_method62761);j::Args _params62762=j::Args{_v_61718_t};return j::call(_method,_params62762,_receiver62760);})();return V(j::number(_lhs62758)*j::number(_rhs62759));})();
_v_61720_X=([&]()->V{V _lhs62763=_v_61716_x;V _rhs62764=j::get(_v_61714_k.get(),this->_literals[38]);return V(j::number(_lhs62763)/j::number(_rhs62764));})();
_v_61721_Y=([&]()->V{V _lhs62765=_v_61717_y;V _rhs62766=j::get(_v_61714_k.get(),this->_literals[38]);return V(j::number(_lhs62765)/j::number(_rhs62766));})();
_v_61722_v=([&]()->V{V _lhs62767=([&]()->V{V _lhs62769=([&]()->V{V _lhs62771=([&]()->V{V _number62777=([&]()->V{V _lhs62778=([&]()->V{V _lhs62780=_v_61720_X;V _rhs62781=V(3.0);return V(j::number(_lhs62780)*j::number(_rhs62781));})();V _rhs62779=_v_61719_a;return j::binary("+",_lhs62778,_rhs62779);})();return V(std::sin(j::number(_number62777)));})();V _rhs62772=([&]()->V{V _number62788=([&]()->V{V _lhs62789=([&]()->V{V _lhs62791=_v_61721_Y;V _rhs62792=V(4.0);return V(j::number(_lhs62791)*j::number(_rhs62792));})();V _rhs62790=([&]()->V{V _lhs62793=V(2.0);V _rhs62794=_v_61719_a;return V(j::number(_lhs62793)*j::number(_rhs62794));})();return V(j::number(_lhs62789)-j::number(_rhs62790));})();return V(std::sin(j::number(_number62788)));})();return j::binary("+",_lhs62771,_rhs62772);})();V _rhs62770=([&]()->V{V _number62803=([&]()->V{V _lhs62804=([&]()->V{V _lhs62806=([&]()->V{V _lhs62808=_v_61720_X;V _rhs62809=_v_61721_Y;return j::binary("+",_lhs62808,_rhs62809);})();V _rhs62807=V(2.5);return V(j::number(_lhs62806)*j::number(_rhs62807));})();V _rhs62805=([&]()->V{V _lhs62810=V(3.0);V _rhs62811=_v_61719_a;return V(j::number(_lhs62810)*j::number(_rhs62811));})();return j::binary("+",_lhs62804,_rhs62805);})();return V(std::sin(j::number(_number62803)));})();return j::binary("+",_lhs62769,_rhs62770);})();V _rhs62768=([&]()->V{V _number62844=([&]()->V{V _lhs62845=([&]()->V{V _lhs62847=([&]()->V{V _number62861=([&]()->V{V _lhs62863=_v_61720_X;V _rhs62864=([&]()->V{V _number62865=_v_61719_a;return V(std::sin(j::number(_number62865)));})();return V(j::number(_lhs62863)-j::number(_rhs62864));})();V _number62862=([&]()->V{V _lhs62866=_v_61721_Y;V _rhs62867=([&]()->V{V _lhs62868=V(0.5);V _rhs62869=([&]()->V{V _number62872=([&]()->V{V _lhs62873=V(2.0);V _rhs62874=_v_61719_a;return V(j::number(_lhs62873)*j::number(_rhs62874));})();return V(std::cos(j::number(_number62872)));})();return V(j::number(_lhs62868)*j::number(_rhs62869));})();return V(j::number(_lhs62866)-j::number(_rhs62867));})();return V(std::hypot(j::number(_number62861),j::number(_number62862)));})();V _rhs62848=V(6.0);return V(j::number(_lhs62847)*j::number(_rhs62848));})();V _rhs62846=([&]()->V{V _lhs62875=V(4.0);V _rhs62876=_v_61719_a;return V(j::number(_lhs62875)*j::number(_rhs62876));})();return V(j::number(_lhs62845)-j::number(_rhs62846));})();return V(std::sin(j::number(_number62844)));})();return j::binary("+",_lhs62767,_rhs62768);})();
return ([&]()->V{V _lhs62877=V(0.5);V _rhs62878=([&]()->V{V _lhs62879=V(0.5);V _rhs62880=([&]()->V{V _number62883=([&]()->V{V _lhs62884=_v_61722_v;V _rhs62885=V(1.3);return V(j::number(_lhs62884)*j::number(_rhs62885));})();return V(std::sin(j::number(_number62883)));})();return V(j::number(_lhs62879)*j::number(_rhs62880));})();return j::binary("+",_lhs62877,_rhs62878);})();

}

return V{};
},3);
return V{};
},1)});})();

}

return V{};
},1);
this->_v_61723_aurora.get()=j::function([=](const j::Args &_args_fn61724,const V &_receiver_fn61724,const V &_self_fn61724) mutable ->V{
V _v_61725_o;
_v_61725_o=_args_fn61724[0];
{
return ([&]()->V{V _callee62953=this->_v_61631_look.get();return j::call(_callee62953,j::Args{this->_literals[91],_v_61725_o,([&]()->V{V _obj62887=j::object();j::put(_obj62887,this->_literals[45],this->_literals[92]);j::put(_obj62887,this->_literals[66],this->_literals[91]);j::put(_obj62887,this->_literals[67],this->_literals[93]);j::put(_obj62887,this->_literals[69],V(false));j::put(_obj62887,this->_literals[39],V(8.0));return _obj62887;})(),j::function([=](const j::Args &_args_fn61726,const V &_receiver_fn61726,const V &_self_fn61726) mutable ->V{
V _v_61727_k;
_v_61727_k=_args_fn61726[0];
{
j::Cell _v_61728_edge;
j::Cell _v_61729_rays;
j::Cell _v_61730_length;
_v_61728_edge.get()=([&]()->V{V _receiver62892=_v_61727_k;V _method62893=this->_literals[48];V _method=j::get(_receiver62892,_method62893);j::Args _params62894=j::Args{([&]()->V{V _obj62888=j::object();j::put(_obj62888,this->_literals[51],([&]()->V{j::Args _array62889;_array62889.push_back(([&]()->V{V _lhs62890=V(1.6);V _rhs62891=j::get(_v_61727_k,this->_literals[38]);return V(j::number(_lhs62890)*j::number(_rhs62891));})());_array62889.push_back(V(1.0));return j::array(std::move(_array62889));})());j::put(_obj62888,this->_literals[87],V(2.0));j::put(_obj62888,this->_literals[50],V(1.5));return _obj62888;})()};return j::call(_method,_params62894,_receiver62892);})();
_v_61729_rays.get()=([&]()->V{V _receiver62900=_v_61727_k;V _method62901=this->_literals[48];V _method=j::get(_receiver62900,_method62901);j::Args _params62902=j::Args{([&]()->V{V _obj62895=j::object();j::put(_obj62895,this->_literals[51],([&]()->V{j::Args _array62896;_array62896.push_back(([&]()->V{V _lhs62897=V(0.07);V _rhs62898=j::get(_v_61727_k,this->_literals[38]);return V(j::number(_lhs62897)*j::number(_rhs62898));})());_array62896.push_back(V(3.0));return j::array(std::move(_array62896));})());j::put(_obj62895,this->_literals[87],V(2.0));j::put(_obj62895,this->_literals[49],([&]()->V{j::Args _array62899;_array62899.push_back(V(1.2));_array62899.push_back(V(0.0));return j::array(std::move(_array62899));})());return _obj62895;})()};return j::call(_method,_params62902,_receiver62900);})();
_v_61730_length.get()=([&]()->V{V _receiver62907=_v_61727_k;V _method62908=this->_literals[48];V _method=j::get(_receiver62907,_method62908);j::Args _params62909=j::Args{([&]()->V{V _obj62903=j::object();j::put(_obj62903,this->_literals[51],([&]()->V{j::Args _array62904;_array62904.push_back(([&]()->V{V _lhs62905=V(0.8);V _rhs62906=j::get(_v_61727_k,this->_literals[38]);return V(j::number(_lhs62905)*j::number(_rhs62906));})());_array62904.push_back(V(1.0));return j::array(std::move(_array62904));})());j::put(_obj62903,this->_literals[87],V(1.0));j::put(_obj62903,this->_literals[50],V(1.0));j::put(_obj62903,this->_literals[94],V(5.0));return _obj62903;})()};return j::call(_method,_params62909,_receiver62907);})();
return j::function([=](const j::Args &_args_fn61731,const V &_receiver_fn61731,const V &_self_fn61731) mutable ->V{
V _v_61732_x;
V _v_61733_y;
V _v_61734_t;
_v_61732_x=_args_fn61731[0];
_v_61733_y=_args_fn61731[1];
_v_61734_t=_args_fn61731[2];
{
V _v_61735_top;
V _v_61736_d;
V _v_61737_fall;
_v_61735_top=([&]()->V{V _lhs62910=j::unary("-",V(0.85));V _rhs62911=([&]()->V{V _lhs62912=V(0.75);V _rhs62913=([&]()->V{V _callee62914=_v_61728_edge.get();return j::call(_callee62914,j::Args{_v_61732_x,V(0.0),_v_61734_t});})();return V(j::number(_lhs62912)*j::number(_rhs62913));})();return j::binary("+",_lhs62910,_rhs62911);})();
_v_61736_d=([&]()->V{V _lhs62915=([&]()->V{V _lhs62917=_v_61733_y;V _rhs62918=_v_61735_top;return V(j::number(_lhs62917)-j::number(_rhs62918));})();V _rhs62916=([&]()->V{V _lhs62919=V(0.5);V _rhs62920=([&]()->V{V _lhs62921=V(0.9);V _rhs62922=([&]()->V{V _callee62923=_v_61730_length.get();return j::call(_callee62923,j::Args{_v_61732_x,V(0.0),_v_61734_t});})();return V(j::number(_lhs62921)*j::number(_rhs62922));})();return j::binary("+",_lhs62919,_rhs62920);})();return V(j::number(_lhs62915)/j::number(_rhs62916));})();
if(j::truth(([&]()->V{V _lhs62924=_v_61736_d;V _rhs62925=j::unary("-",V(0.15));return j::binary("<",_lhs62924,_rhs62925);})())){return V(0.0);
}
if(j::truth(([&]()->V{V _lhs62926=_v_61736_d;V _rhs62927=V(0.0);return j::binary("<",_lhs62926,_rhs62927);})())){return ([&]()->V{V _lhs62928=V(0.35);V _rhs62929=([&]()->V{V _lhs62930=V(1.0);V _rhs62931=([&]()->V{V _lhs62932=_v_61736_d;V _rhs62933=V(0.15);return V(j::number(_lhs62932)/j::number(_rhs62933));})();return j::binary("+",_lhs62930,_rhs62931);})();return V(j::number(_lhs62928)*j::number(_rhs62929));})();
}
_v_61737_fall=([&]()->V{V _lhs62934=([&]()->V{V _lhs62936=V(1.0);V _rhs62937=([&]()->V{V _receiver62940=j::builtin("Math");V _method62941=this->_literals[95];V _method=j::get(_receiver62940,_method62941);j::Args _params62942=j::Args{V(1.0),_v_61736_d};return j::call(_method,_params62942,_receiver62940);})();return V(j::number(_lhs62936)-j::number(_rhs62937));})();V _rhs62935=V(1.6);return V(std::pow(j::number(_lhs62934),j::number(_rhs62935)));})();
return ([&]()->V{V _callee62952=this->_v_61268_clamp.get();return j::call(_callee62952,j::Args{([&]()->V{V _lhs62943=_v_61737_fall;V _rhs62944=([&]()->V{V _lhs62945=V(0.35);V _rhs62946=([&]()->V{V _lhs62947=V(0.85);V _rhs62948=([&]()->V{V _callee62951=_v_61729_rays.get();return j::call(_callee62951,j::Args{_v_61732_x,([&]()->V{V _lhs62949=_v_61733_y;V _rhs62950=V(0.1);return V(j::number(_lhs62949)*j::number(_rhs62950));})(),_v_61734_t});})();return V(j::number(_lhs62947)*j::number(_rhs62948));})();return j::binary("+",_lhs62945,_rhs62946);})();return V(j::number(_lhs62943)*j::number(_rhs62944));})()});})();

}

return V{};
},3);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_61738_flames.get()=j::function([=](const j::Args &_args_fn61739,const V &_receiver_fn61739,const V &_self_fn61739) mutable ->V{
V _v_61740_o;
_v_61740_o=_args_fn61739[0];
{
return ([&]()->V{V _callee62998=this->_v_61631_look.get();return j::call(_callee62998,j::Args{this->_literals[96],_v_61740_o,([&]()->V{V _obj62954=j::object();j::put(_obj62954,this->_literals[45],this->_literals[97]);j::put(_obj62954,this->_literals[66],this->_literals[98]);j::put(_obj62954,this->_literals[67],this->_literals[99]);j::put(_obj62954,this->_literals[69],V(false));j::put(_obj62954,this->_literals[39],V(4.0));return _obj62954;})(),j::function([=](const j::Args &_args_fn61741,const V &_receiver_fn61741,const V &_self_fn61741) mutable ->V{
V _v_61742_k;
_v_61742_k=_args_fn61741[0];
{
j::Cell _v_61743_n;
j::Cell _v_61744_tongues;
_v_61743_n.get()=([&]()->V{V _receiver62962=_v_61742_k;V _method62963=this->_literals[48];V _method=j::get(_receiver62962,_method62963);j::Args _params62964=j::Args{([&]()->V{V _obj62955=j::object();j::put(_obj62955,this->_literals[51],([&]()->V{j::Args _array62956;_array62956.push_back(([&]()->V{V _lhs62957=V(0.3);V _rhs62958=j::get(_v_61742_k,this->_literals[38]);return V(j::number(_lhs62957)*j::number(_rhs62958));})());_array62956.push_back(([&]()->V{V _lhs62959=V(0.55);V _rhs62960=j::get(_v_61742_k,this->_literals[38]);return V(j::number(_lhs62959)*j::number(_rhs62960));})());return j::array(std::move(_array62956));})());j::put(_obj62955,this->_literals[87],V(3.0));j::put(_obj62955,this->_literals[49],([&]()->V{j::Args _array62961;_array62961.push_back(V(0.0));_array62961.push_back(j::unary("-",V(4.4)));return j::array(std::move(_array62961));})());return _obj62955;})()};return j::call(_method,_params62964,_receiver62962);})();
_v_61744_tongues.get()=([&]()->V{V _receiver62970=_v_61742_k;V _method62971=this->_literals[48];V _method=j::get(_receiver62970,_method62971);j::Args _params62972=j::Args{([&]()->V{V _obj62965=j::object();j::put(_obj62965,this->_literals[51],([&]()->V{j::Args _array62966;_array62966.push_back(([&]()->V{V _lhs62967=V(0.45);V _rhs62968=j::get(_v_61742_k,this->_literals[38]);return V(j::number(_lhs62967)*j::number(_rhs62968));})());_array62966.push_back(V(1.2));return j::array(std::move(_array62966));})());j::put(_obj62965,this->_literals[87],V(1.0));j::put(_obj62965,this->_literals[49],([&]()->V{j::Args _array62969;_array62969.push_back(V(0.0));_array62969.push_back(j::unary("-",V(1.6)));return j::array(std::move(_array62969));})());j::put(_obj62965,this->_literals[94],V(2.0));return _obj62965;})()};return j::call(_method,_params62972,_receiver62970);})();
return j::function([=](const j::Args &_args_fn61745,const V &_receiver_fn61745,const V &_self_fn61745) mutable ->V{
V _v_61746_x;
V _v_61747_y;
V _v_61748_t;
V _v_61749_at;
_v_61746_x=_args_fn61745[0];
_v_61747_y=_args_fn61745[1];
_v_61748_t=_args_fn61745[2];
_v_61749_at=_args_fn61745[3];
{
V _v_61750_up;
V _v_61751_reach;
_v_61750_up=([&]()->V{V _lhs62973=([&]()->V{V _lhs62975=([&]()->V{V _lhs62977=j::get(_v_61749_at,this->_literals[63]);V _rhs62978=V(2.0);return V(j::number(_lhs62977)/j::number(_rhs62978));})();V _rhs62976=_v_61747_y;return V(j::number(_lhs62975)-j::number(_rhs62976));})();V _rhs62974=j::get(_v_61749_at,this->_literals[63]);return V(j::number(_lhs62973)/j::number(_rhs62974));})();
_v_61751_reach=([&]()->V{V _lhs62979=V(0.35);V _rhs62980=([&]()->V{V _lhs62981=V(0.6);V _rhs62982=([&]()->V{V _callee62983=_v_61744_tongues.get();return j::call(_callee62983,j::Args{_v_61746_x,V(0.0),_v_61748_t});})();return V(j::number(_lhs62981)*j::number(_rhs62982));})();return j::binary("+",_lhs62979,_rhs62980);})();
return ([&]()->V{V _callee62997=this->_v_61268_clamp.get();return j::call(_callee62997,j::Args{([&]()->V{V _lhs62984=([&]()->V{V _lhs62986=([&]()->V{V _lhs62988=([&]()->V{V _lhs62990=([&]()->V{V _callee62992=_v_61743_n.get();return j::call(_callee62992,j::Args{_v_61746_x,_v_61747_y,_v_61748_t});})();V _rhs62991=V(0.7);return V(j::number(_lhs62990)*j::number(_rhs62991));})();V _rhs62989=V(0.55);return j::binary("+",_lhs62988,_rhs62989);})();V _rhs62987=([&]()->V{V _lhs62993=V(1.0);V _rhs62994=([&]()->V{V _lhs62995=_v_61750_up;V _rhs62996=_v_61751_reach;return V(j::number(_lhs62995)/j::number(_rhs62996));})();return V(j::number(_lhs62993)-j::number(_rhs62994));})();return V(j::number(_lhs62986)*j::number(_rhs62987));})();V _rhs62985=V(1.25);return V(j::number(_lhs62984)*j::number(_rhs62985));})()});})();

}

return V{};
},4);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_61752_clouds.get()=j::function([=](const j::Args &_args_fn61753,const V &_receiver_fn61753,const V &_self_fn61753) mutable ->V{
V _v_61754_o;
_v_61754_o=_args_fn61753[0];
{
return ([&]()->V{V _callee63019=this->_v_61631_look.get();return j::call(_callee63019,j::Args{this->_literals[100],_v_61754_o,([&]()->V{V _obj62999=j::object();j::put(_obj62999,this->_literals[37],([&]()->V{j::Args _array63000;_array63000.push_back(this->_literals[72]);return j::array(std::move(_array63000));})());j::put(_obj62999,this->_literals[45],this->_literals[101]);j::put(_obj62999,this->_literals[66],this->_literals[14]);j::put(_obj62999,this->_literals[67],this->_literals[102]);j::put(_obj62999,this->_literals[69],V(false));j::put(_obj62999,this->_literals[39],V(16.0));return _obj62999;})(),j::function([=](const j::Args &_args_fn61755,const V &_receiver_fn61755,const V &_self_fn61755) mutable ->V{
V _v_61756_k;
V _v_61757_opts;
_v_61756_k=_args_fn61755[0];
_v_61757_opts=_args_fn61755[1];
{
V _v_61758_d;
j::Cell _v_61759_n;
_v_61758_d=(j::truth(([&]()->V{V _lhs63001=([&]()->V{V _callee63004=this->_v_61292_wordOf.get();return j::call(_callee63004,j::Args{this->_literals[103],j::get(_v_61757_opts,this->_literals[72]),([&]()->V{j::Args _array63003;_array63003.push_back(this->_literals[77]);_array63003.push_back(this->_literals[78]);return j::array(std::move(_array63003));})(),this->_literals[78]});})();V _rhs63002=this->_literals[78];return V(j::equal(_lhs63001,_rhs63002,true));})())?V(1.0):j::unary("-",V(1.0)));
_v_61759_n.get()=([&]()->V{V _receiver63014=_v_61756_k;V _method63015=this->_literals[48];V _method=j::get(_receiver63014,_method63015);j::Args _params63016=j::Args{([&]()->V{V _obj63005=j::object();j::put(_obj63005,this->_literals[51],([&]()->V{j::Args _array63006;_array63006.push_back(([&]()->V{V _lhs63007=V(1.1);V _rhs63008=j::get(_v_61756_k,this->_literals[38]);return V(j::number(_lhs63007)*j::number(_rhs63008));})());_array63006.push_back(([&]()->V{V _lhs63009=V(0.75);V _rhs63010=j::get(_v_61756_k,this->_literals[38]);return V(j::number(_lhs63009)*j::number(_rhs63010));})());return j::array(std::move(_array63006));})());j::put(_obj63005,this->_literals[87],V(3.0));j::put(_obj63005,this->_literals[49],([&]()->V{j::Args _array63011;_array63011.push_back(([&]()->V{V _lhs63012=V(3.0);V _rhs63013=_v_61758_d;return V(j::number(_lhs63012)*j::number(_rhs63013));})());_array63011.push_back(V(0.0));return j::array(std::move(_array63011));})());return _obj63005;})()};return j::call(_method,_params63016,_receiver63014);})();
return j::function([=](const j::Args &_args_fn61760,const V &_receiver_fn61760,const V &_self_fn61760) mutable ->V{
V _v_61761_x;
V _v_61762_y;
V _v_61763_t;
_v_61761_x=_args_fn61760[0];
_v_61762_y=_args_fn61760[1];
_v_61763_t=_args_fn61760[2];
return ([&]()->V{V _callee63018=this->_v_61274_smoothstep.get();return j::call(_callee63018,j::Args{V(0.5),V(0.88),([&]()->V{V _callee63017=_v_61759_n.get();return j::call(_callee63017,j::Args{_v_61761_x,_v_61762_y,_v_61763_t});})()});})();
return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61764_plume.get()=j::function([=](const j::Args &_args_fn61765,const V &_receiver_fn61765,const V &_self_fn61765) mutable ->V{
V _v_61766_o;
_v_61766_o=_args_fn61765[0];
{
return ([&]()->V{V _callee63080=this->_v_61631_look.get();return j::call(_callee63080,j::Args{this->_literals[104],_v_61766_o,([&]()->V{V _obj63020=j::object();j::put(_obj63020,this->_literals[45],this->_literals[105]);j::put(_obj63020,this->_literals[66],this->_literals[14]);j::put(_obj63020,this->_literals[67],this->_literals[106]);j::put(_obj63020,this->_literals[69],V(false));j::put(_obj63020,this->_literals[39],V(8.0));return _obj63020;})(),j::function([=](const j::Args &_args_fn61767,const V &_receiver_fn61767,const V &_self_fn61767) mutable ->V{
j::Cell _v_61768_k;
_v_61768_k.get()=_args_fn61767[0];
{
j::Cell _v_61769_n;
j::Cell _v_61770_sway;
_v_61769_n.get()=([&]()->V{V _receiver63028=_v_61768_k.get();V _method63029=this->_literals[48];V _method=j::get(_receiver63028,_method63029);j::Args _params63030=j::Args{([&]()->V{V _obj63021=j::object();j::put(_obj63021,this->_literals[51],([&]()->V{j::Args _array63022;_array63022.push_back(([&]()->V{V _lhs63023=V(0.4);V _rhs63024=j::get(_v_61768_k.get(),this->_literals[38]);return V(j::number(_lhs63023)*j::number(_rhs63024));})());_array63022.push_back(([&]()->V{V _lhs63025=V(0.4);V _rhs63026=j::get(_v_61768_k.get(),this->_literals[38]);return V(j::number(_lhs63025)*j::number(_rhs63026));})());return j::array(std::move(_array63022));})());j::put(_obj63021,this->_literals[87],V(2.0));j::put(_obj63021,this->_literals[49],([&]()->V{j::Args _array63027;_array63027.push_back(V(0.0));_array63027.push_back(j::unary("-",V(2.6)));return j::array(std::move(_array63027));})());return _obj63021;})()};return j::call(_method,_params63030,_receiver63028);})();
_v_61770_sway.get()=([&]()->V{V _receiver63034=_v_61768_k.get();V _method63035=this->_literals[48];V _method=j::get(_receiver63034,_method63035);j::Args _params63036=j::Args{([&]()->V{V _obj63031=j::object();j::put(_obj63031,this->_literals[51],([&]()->V{j::Args _array63032;_array63032.push_back(V(1.0));_array63032.push_back(V(0.9));return j::array(std::move(_array63032));})());j::put(_obj63031,this->_literals[87],V(1.0));j::put(_obj63031,this->_literals[49],([&]()->V{j::Args _array63033;_array63033.push_back(V(0.0));_array63033.push_back(j::unary("-",V(2.6)));return j::array(std::move(_array63033));})());j::put(_obj63031,this->_literals[94],V(3.0));return _obj63031;})()};return j::call(_method,_params63036,_receiver63034);})();
return j::function([=](const j::Args &_args_fn61771,const V &_receiver_fn61771,const V &_self_fn61771) mutable ->V{
V _v_61772_x;
V _v_61773_y;
V _v_61774_t;
V _v_61775_at;
_v_61772_x=_args_fn61771[0];
_v_61773_y=_args_fn61771[1];
_v_61774_t=_args_fn61771[2];
_v_61775_at=_args_fn61771[3];
{
V _v_61776_up;
V _v_61777_width;
V _v_61778_cx;
V _v_61779_body;
_v_61776_up=([&]()->V{V _lhs63037=([&]()->V{V _lhs63039=([&]()->V{V _lhs63041=j::get(_v_61775_at,this->_literals[63]);V _rhs63042=V(2.0);return V(j::number(_lhs63041)/j::number(_rhs63042));})();V _rhs63040=_v_61773_y;return V(j::number(_lhs63039)-j::number(_rhs63040));})();V _rhs63038=j::get(_v_61775_at,this->_literals[63]);return V(j::number(_lhs63037)/j::number(_rhs63038));})();
_v_61777_width=([&]()->V{V _lhs63043=([&]()->V{V _lhs63045=V(0.1);V _rhs63046=([&]()->V{V _lhs63047=V(0.6);V _rhs63048=_v_61776_up;return V(j::number(_lhs63047)*j::number(_rhs63048));})();return j::binary("+",_lhs63045,_rhs63046);})();V _rhs63044=j::get(_v_61768_k.get(),this->_literals[38]);return V(j::number(_lhs63043)*j::number(_rhs63044));})();
_v_61778_cx=([&]()->V{V _lhs63049=([&]()->V{V _lhs63051=([&]()->V{V _lhs63053=([&]()->V{V _callee63055=_v_61770_sway.get();return j::call(_callee63055,j::Args{V(0.0),_v_61773_y,_v_61774_t});})();V _rhs63054=V(0.5);return V(j::number(_lhs63053)-j::number(_rhs63054));})();V _rhs63052=V(1.4);return V(j::number(_lhs63051)*j::number(_rhs63052));})();V _rhs63050=_v_61776_up;return V(j::number(_lhs63049)*j::number(_rhs63050));})();
_v_61779_body=([&]()->V{V _number63062=j::unary("-",([&]()->V{V _lhs63063=([&]()->V{V _lhs63065=([&]()->V{V _lhs63067=_v_61772_x;V _rhs63068=_v_61778_cx;return V(j::number(_lhs63067)-j::number(_rhs63068));})();V _rhs63066=_v_61777_width;return V(j::number(_lhs63065)/j::number(_rhs63066));})();V _rhs63064=V(2.0);return V(std::pow(j::number(_lhs63063),j::number(_rhs63064)));})());return V(std::exp(j::number(_number63062)));})();
return ([&]()->V{V _callee63079=this->_v_61268_clamp.get();return j::call(_callee63079,j::Args{([&]()->V{V _lhs63069=([&]()->V{V _lhs63071=_v_61779_body;V _rhs63072=([&]()->V{V _callee63074=this->_v_61274_smoothstep.get();return j::call(_callee63074,j::Args{V(0.2),V(0.75),([&]()->V{V _callee63073=_v_61769_n.get();return j::call(_callee63073,j::Args{_v_61772_x,_v_61773_y,_v_61774_t});})()});})();return V(j::number(_lhs63071)*j::number(_rhs63072));})();V _rhs63070=([&]()->V{V _lhs63075=V(1.2);V _rhs63076=([&]()->V{V _lhs63077=_v_61776_up;V _rhs63078=V(0.8);return V(j::number(_lhs63077)*j::number(_rhs63078));})();return V(j::number(_lhs63075)-j::number(_rhs63076));})();return V(j::number(_lhs63069)*j::number(_rhs63070));})()});})();

}

return V{};
},4);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_61780_ripple.get()=j::function([=](const j::Args &_args_fn61781,const V &_receiver_fn61781,const V &_self_fn61781) mutable ->V{
V _v_61782_o;
_v_61782_o=_args_fn61781[0];
{
return ([&]()->V{V _callee63166=this->_v_61631_look.get();return j::call(_callee63166,j::Args{this->_literals[107],_v_61782_o,([&]()->V{V _obj63081=j::object();j::put(_obj63081,this->_literals[37],([&]()->V{j::Args _array63082;_array63082.push_back(this->_literals[108]);_array63082.push_back(this->_literals[94]);return j::array(std::move(_array63082));})());j::put(_obj63081,this->_literals[45],this->_literals[109]);j::put(_obj63081,this->_literals[66],this->_literals[74]);j::put(_obj63081,this->_literals[67],this->_literals[110]);j::put(_obj63081,this->_literals[69],V(false));j::put(_obj63081,this->_literals[39],V(4.0));return _obj63081;})(),j::function([=](const j::Args &_args_fn61783,const V &_receiver_fn61783,const V &_self_fn61783) mutable ->V{
j::Cell _v_61784_k;
V _v_61785_opts;
_v_61784_k.get()=_args_fn61783[0];
_v_61785_opts=_args_fn61783[1];
{
j::Cell _v_61786_drops;
j::Cell _v_61787_seed;
j::Cell _v_61788_at;
_v_61786_drops.get()=([&]()->V{V _logical63083=j::get(_v_61785_opts,this->_literals[108]);return j::nullish(_logical63083)?V(1.0):_logical63083;})();
if(j::truth(([&]()->V{V _logical63084=([&]()->V{V _logical63085=j::unary("!",([&]()->V{V _receiver63086=j::builtin("Number");V _method63087=this->_literals[27];V _method=j::get(_receiver63086,_method63087);j::Args _params63088=j::Args{_v_61786_drops.get()};return j::call(_method,_params63088,_receiver63086);})());return !j::truth(_logical63085)?([&]()->V{V _lhs63089=_v_61786_drops.get();V _rhs63090=V(1.0);return j::binary("<",_lhs63089,_rhs63090);})():_logical63085;})();return !j::truth(_logical63084)?([&]()->V{V _lhs63091=_v_61786_drops.get();V _rhs63092=V(8.0);return j::binary(">",_lhs63091,_rhs63092);})():_logical63084;})())){(void)(([&]()->V{V _callee63095=this->_v_61269_fail.get();return j::call(_callee63095,j::Args{([&]()->V{std::u16string _text63093;_text63093+=u"ripple()'s drops takes a whole number from 1 to 8, not ";_text63093+=j::string(([&]()->V{V _callee63094=this->_v_61289_show.get();return j::call(_callee63094,j::Args{_v_61786_drops.get()});})());_text63093+=u"";return V(std::move(_text63093));})()});})());
}
_v_61787_seed.get()=([&]()->V{V _callee63096=this->_v_61288_seedOf.get();return j::call(_callee63096,j::Args{this->_literals[111],j::get(_v_61785_opts,this->_literals[94])});})();
_v_61788_at.get()=([&]()->V{V _receiver63112=j::builtin("Array");V _method63113=this->_literals[112];V _method=j::get(_receiver63112,_method63113);j::Args _params63114=j::Args{([&]()->V{V _obj63097=j::object();j::put(_obj63097,this->_literals[46],_v_61786_drops.get());return _obj63097;})(),j::function([=](const j::Args &_args_fn61789,const V &_receiver_fn61789,const V &_self_fn61789) mutable ->V{
V _v_61790__;
V _v_61791_i;
_v_61790__=_args_fn61789[0];
_v_61791_i=_args_fn61789[1];
return (j::truth(([&]()->V{V _lhs63098=_v_61786_drops.get();V _rhs63099=V(1.0);return V(j::equal(_lhs63098,_rhs63099,true));})())?([&]()->V{j::Args _array63100;_array63100.push_back(V(0.0));_array63100.push_back(V(0.0));return j::array(std::move(_array63100));})():([&]()->V{j::Args _array63101;_array63101.push_back(([&]()->V{V _lhs63102=([&]()->V{V _lhs63104=([&]()->V{V _callee63106=this->_v_61271_hash.get();return j::call(_callee63106,j::Args{_v_61787_seed.get(),_v_61791_i,V(1.0)});})();V _rhs63105=V(0.5);return V(j::number(_lhs63104)-j::number(_rhs63105));})();V _rhs63103=V(2.0);return V(j::number(_lhs63102)*j::number(_rhs63103));})());_array63101.push_back(([&]()->V{V _lhs63107=([&]()->V{V _lhs63109=([&]()->V{V _callee63111=this->_v_61271_hash.get();return j::call(_callee63111,j::Args{_v_61787_seed.get(),_v_61791_i,V(2.0)});})();V _rhs63110=V(0.5);return V(j::number(_lhs63109)-j::number(_rhs63110));})();V _rhs63108=V(1.4);return V(j::number(_lhs63107)*j::number(_rhs63108));})());return j::array(std::move(_array63101));})());
return V{};
},2)};return j::call(_method,_params63114,_receiver63112);})();
return j::function([=](const j::Args &_args_fn61792,const V &_receiver_fn61792,const V &_self_fn61792) mutable ->V{
V _v_61793_x;
V _v_61794_y;
V _v_61795_t;
_v_61793_x=_args_fn61792[0];
_v_61794_y=_args_fn61792[1];
_v_61795_t=_args_fn61792[2];
{
V _v_61796_a;
V _v_61797_v;
_v_61796_a=([&]()->V{V _lhs63115=this->_v_61267_TAU.get();V _rhs63116=([&]()->V{V _receiver63117=_v_61784_k.get();V _method63118=this->_literals[47];V _method=j::get(_receiver63117,_method63118);j::Args _params63119=j::Args{_v_61795_t};return j::call(_method,_params63119,_receiver63117);})();return V(j::number(_lhs63115)*j::number(_rhs63116));})();
_v_61797_v=V(0.0);
{for(const auto &_item63120:j::elements(_v_61788_at.get())){V _v_61798_cx;
V _v_61799_cy;
V _pattern63121=_item63120;
_v_61798_cx=j::get(_pattern63121,V(0));
_v_61799_cy=j::get(_pattern63121,V(1));
{
V _v_61800_r;
_v_61800_r=([&]()->V{V _lhs63122=([&]()->V{V _number63128=([&]()->V{V _lhs63130=_v_61793_x;V _rhs63131=_v_61798_cx;return V(j::number(_lhs63130)-j::number(_rhs63131));})();V _number63129=([&]()->V{V _lhs63132=_v_61794_y;V _rhs63133=_v_61799_cy;return V(j::number(_lhs63132)-j::number(_rhs63133));})();return V(std::hypot(j::number(_number63128),j::number(_number63129)));})();V _rhs63123=j::get(_v_61784_k.get(),this->_literals[38]);return V(j::number(_lhs63122)/j::number(_rhs63123));})();
(void)((_v_61797_v=j::binary("+",_v_61797_v,([&]()->V{V _lhs63135=([&]()->V{V _lhs63137=([&]()->V{V _receiver63154=j::builtin("Math");V _method63155=this->_literals[113];V _method=j::get(_receiver63154,_method63155);j::Args _params63156=j::Args{V(0.0),([&]()->V{V _number63145=([&]()->V{V _lhs63146=([&]()->V{V _lhs63148=_v_61800_r;V _rhs63149=V(16.0);return V(j::number(_lhs63148)*j::number(_rhs63149));})();V _rhs63147=([&]()->V{V _lhs63150=V(2.0);V _rhs63151=_v_61796_a;return V(j::number(_lhs63150)*j::number(_rhs63151));})();return V(j::number(_lhs63146)-j::number(_rhs63147));})();return V(std::cos(j::number(_number63145)));})()};return j::call(_method,_params63156,_receiver63154);})();V _rhs63138=V(2.0);return V(std::pow(j::number(_lhs63137),j::number(_rhs63138)));})();V _rhs63136=([&]()->V{V _number63159=([&]()->V{V _lhs63160=j::unary("-",_v_61800_r);V _rhs63161=V(1.1);return V(j::number(_lhs63160)*j::number(_rhs63161));})();return V(std::exp(j::number(_number63159)));})();return V(j::number(_lhs63135)*j::number(_rhs63136));})())));

}
}}
return ([&]()->V{V _callee63165=this->_v_61268_clamp.get();return j::call(_callee63165,j::Args{([&]()->V{V _lhs63162=_v_61797_v;V _rhs63163=([&]()->V{V _number63164=_v_61786_drops.get();return V(std::sqrt(j::number(_number63164)));})();return V(j::number(_lhs63162)/j::number(_rhs63163));})()});})();

}

return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61801_rings.get()=j::function([=](const j::Args &_args_fn61802,const V &_receiver_fn61802,const V &_self_fn61802) mutable ->V{
V _v_61803_o;
_v_61803_o=_args_fn61802[0];
{
return ([&]()->V{V _callee63212=this->_v_61631_look.get();return j::call(_callee63212,j::Args{this->_literals[114],_v_61803_o,([&]()->V{V _obj63167=j::object();j::put(_obj63167,this->_literals[37],([&]()->V{j::Args _array63168;_array63168.push_back(this->_literals[72]);return j::array(std::move(_array63168));})());j::put(_obj63167,this->_literals[45],this->_literals[115]);j::put(_obj63167,this->_literals[66],this->_literals[116]);j::put(_obj63167,this->_literals[67],this->_literals[68]);j::put(_obj63167,this->_literals[69],V(true));j::put(_obj63167,this->_literals[39],V(4.0));return _obj63167;})(),j::function([=](const j::Args &_args_fn61804,const V &_receiver_fn61804,const V &_self_fn61804) mutable ->V{
j::Cell _v_61805_k;
V _v_61806_opts;
_v_61805_k.get()=_args_fn61804[0];
_v_61806_opts=_args_fn61804[1];
{
j::Cell _v_61807_d;
_v_61807_d.get()=(j::truth(([&]()->V{V _lhs63169=([&]()->V{V _callee63172=this->_v_61292_wordOf.get();return j::call(_callee63172,j::Args{this->_literals[117],j::get(_v_61806_opts,this->_literals[72]),([&]()->V{j::Args _array63171;_array63171.push_back(this->_literals[118]);_array63171.push_back(this->_literals[119]);return j::array(std::move(_array63171));})(),this->_literals[119]});})();V _rhs63170=this->_literals[119];return V(j::equal(_lhs63169,_rhs63170,true));})())?V(1.0):j::unary("-",V(1.0)));
return j::function([=](const j::Args &_args_fn61808,const V &_receiver_fn61808,const V &_self_fn61808) mutable ->V{
V _v_61809_x;
V _v_61810_y;
V _v_61811_t;
_v_61809_x=_args_fn61808[0];
_v_61810_y=_args_fn61808[1];
_v_61811_t=_args_fn61808[2];
return ([&]()->V{V _lhs63173=V(0.5);V _rhs63174=([&]()->V{V _lhs63175=V(0.5);V _rhs63176=([&]()->V{V _number63194=([&]()->V{V _lhs63195=([&]()->V{V _lhs63197=([&]()->V{V _lhs63199=([&]()->V{V _number63201=_v_61809_x;V _number63202=_v_61810_y;return V(std::hypot(j::number(_number63201),j::number(_number63202)));})();V _rhs63200=j::get(_v_61805_k.get(),this->_literals[38]);return V(j::number(_lhs63199)/j::number(_rhs63200));})();V _rhs63198=V(12.0);return V(j::number(_lhs63197)*j::number(_rhs63198));})();V _rhs63196=([&]()->V{V _lhs63203=([&]()->V{V _lhs63205=([&]()->V{V _lhs63207=_v_61807_d.get();V _rhs63208=V(2.0);return V(j::number(_lhs63207)*j::number(_rhs63208));})();V _rhs63206=this->_v_61267_TAU.get();return V(j::number(_lhs63205)*j::number(_rhs63206));})();V _rhs63204=([&]()->V{V _receiver63209=_v_61805_k.get();V _method63210=this->_literals[47];V _method=j::get(_receiver63209,_method63210);j::Args _params63211=j::Args{_v_61811_t};return j::call(_method,_params63211,_receiver63209);})();return V(j::number(_lhs63203)*j::number(_rhs63204));})();return V(j::number(_lhs63195)-j::number(_rhs63196));})();return V(std::sin(j::number(_number63194)));})();return V(j::number(_lhs63175)*j::number(_rhs63176));})();return j::binary("+",_lhs63173,_rhs63174);})();
return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61812_tunnel.get()=j::function([=](const j::Args &_args_fn61813,const V &_receiver_fn61813,const V &_self_fn61813) mutable ->V{
V _v_61814_o;
_v_61814_o=_args_fn61813[0];
{
return ([&]()->V{V _callee63262=this->_v_61631_look.get();return j::call(_callee63262,j::Args{this->_literals[120],_v_61814_o,([&]()->V{V _obj63213=j::object();j::put(_obj63213,this->_literals[45],this->_literals[121]);j::put(_obj63213,this->_literals[66],this->_literals[122]);j::put(_obj63213,this->_literals[67],this->_literals[68]);j::put(_obj63213,this->_literals[69],V(true));j::put(_obj63213,this->_literals[39],V(2.0));return _obj63213;})(),j::function([=](const j::Args &_args_fn61815,const V &_receiver_fn61815,const V &_self_fn61815) mutable ->V{
j::Cell _v_61816_k;
_v_61816_k.get()=_args_fn61815[0];
return j::function([=](const j::Args &_args_fn61817,const V &_receiver_fn61817,const V &_self_fn61817) mutable ->V{
V _v_61818_x;
V _v_61819_y;
V _v_61820_t;
_v_61818_x=_args_fn61817[0];
_v_61819_y=_args_fn61817[1];
_v_61820_t=_args_fn61817[2];
{
V _v_61821_r;
V _v_61822_depth;
V _v_61823_hoops;
V _v_61824_ribs;
_v_61821_r=([&]()->V{V _lhs63214=([&]()->V{V _number63216=_v_61818_x;V _number63217=_v_61819_y;return V(std::hypot(j::number(_number63216),j::number(_number63217)));})();V _rhs63215=V(0.000001);return j::binary("+",_lhs63214,_rhs63215);})();
_v_61822_depth=([&]()->V{V _lhs63218=([&]()->V{V _lhs63220=V(0.6);V _rhs63221=j::get(_v_61816_k.get(),this->_literals[38]);return V(j::number(_lhs63220)*j::number(_rhs63221));})();V _rhs63219=_v_61821_r;return V(j::number(_lhs63218)/j::number(_rhs63219));})();
_v_61823_hoops=([&]()->V{V _lhs63222=V(0.5);V _rhs63223=([&]()->V{V _lhs63224=V(0.5);V _rhs63225=([&]()->V{V _number63233=([&]()->V{V _lhs63234=this->_v_61267_TAU.get();V _rhs63235=([&]()->V{V _lhs63236=_v_61822_depth;V _rhs63237=([&]()->V{V _receiver63238=_v_61816_k.get();V _method63239=this->_literals[47];V _method=j::get(_receiver63238,_method63239);j::Args _params63240=j::Args{_v_61820_t};return j::call(_method,_params63240,_receiver63238);})();return V(j::number(_lhs63236)-j::number(_rhs63237));})();return V(j::number(_lhs63234)*j::number(_rhs63235));})();return V(std::cos(j::number(_number63233)));})();return V(j::number(_lhs63224)*j::number(_rhs63225));})();return j::binary("+",_lhs63222,_rhs63223);})();
_v_61824_ribs=([&]()->V{V _lhs63241=V(0.65);V _rhs63242=([&]()->V{V _lhs63243=V(0.35);V _rhs63244=([&]()->V{V _number63249=([&]()->V{V _lhs63250=([&]()->V{V _number63252=_v_61819_y;V _number63253=_v_61818_x;return V(std::atan2(j::number(_number63252),j::number(_number63253)));})();V _rhs63251=V(10.0);return V(j::number(_lhs63250)*j::number(_rhs63251));})();return V(std::cos(j::number(_number63249)));})();return V(j::number(_lhs63243)*j::number(_rhs63244));})();return j::binary("+",_lhs63241,_rhs63242);})();
return ([&]()->V{V _callee63261=this->_v_61268_clamp.get();return j::call(_callee63261,j::Args{([&]()->V{V _lhs63254=([&]()->V{V _lhs63256=([&]()->V{V _lhs63258=_v_61823_hoops;V _rhs63259=V(1.5);return V(std::pow(j::number(_lhs63258),j::number(_rhs63259)));})();V _rhs63257=_v_61824_ribs;return V(j::number(_lhs63256)*j::number(_rhs63257));})();V _rhs63255=([&]()->V{V _callee63260=this->_v_61274_smoothstep.get();return j::call(_callee63260,j::Args{V(0.08),V(0.9),_v_61821_r});})();return V(j::number(_lhs63254)*j::number(_rhs63255));})()});})();

}

return V{};
},3);
return V{};
},1)});})();

}

return V{};
},1);
this->_v_61825_spiral.get()=j::function([=](const j::Args &_args_fn61826,const V &_receiver_fn61826,const V &_self_fn61826) mutable ->V{
V _v_61827_o;
_v_61827_o=_args_fn61826[0];
{
return ([&]()->V{V _callee63321=this->_v_61631_look.get();return j::call(_callee63321,j::Args{this->_literals[123],_v_61827_o,([&]()->V{V _obj63263=j::object();j::put(_obj63263,this->_literals[37],([&]()->V{j::Args _array63264;_array63264.push_back(this->_literals[124]);return j::array(std::move(_array63264));})());j::put(_obj63263,this->_literals[45],this->_literals[125]);j::put(_obj63263,this->_literals[66],this->_literals[116]);j::put(_obj63263,this->_literals[67],this->_literals[68]);j::put(_obj63263,this->_literals[69],V(true));j::put(_obj63263,this->_literals[39],V(8.0));return _obj63263;})(),j::function([=](const j::Args &_args_fn61828,const V &_receiver_fn61828,const V &_self_fn61828) mutable ->V{
j::Cell _v_61829_k;
V _v_61830_opts;
_v_61829_k.get()=_args_fn61828[0];
_v_61830_opts=_args_fn61828[1];
{
j::Cell _v_61831_arms;
_v_61831_arms.get()=([&]()->V{V _logical63265=j::get(_v_61830_opts,this->_literals[124]);return j::nullish(_logical63265)?V(2.0):_logical63265;})();
if(j::truth(([&]()->V{V _logical63266=([&]()->V{V _logical63267=j::unary("!",([&]()->V{V _receiver63268=j::builtin("Number");V _method63269=this->_literals[27];V _method=j::get(_receiver63268,_method63269);j::Args _params63270=j::Args{_v_61831_arms.get()};return j::call(_method,_params63270,_receiver63268);})());return !j::truth(_logical63267)?([&]()->V{V _lhs63271=_v_61831_arms.get();V _rhs63272=V(1.0);return j::binary("<",_lhs63271,_rhs63272);})():_logical63267;})();return !j::truth(_logical63266)?([&]()->V{V _lhs63273=_v_61831_arms.get();V _rhs63274=V(12.0);return j::binary(">",_lhs63273,_rhs63274);})():_logical63266;})())){(void)(([&]()->V{V _callee63277=this->_v_61269_fail.get();return j::call(_callee63277,j::Args{([&]()->V{std::u16string _text63275;_text63275+=u"spiral()'s arms takes a whole number from 1 to 12, not ";_text63275+=j::string(([&]()->V{V _callee63276=this->_v_61289_show.get();return j::call(_callee63276,j::Args{_v_61831_arms.get()});})());_text63275+=u"";return V(std::move(_text63275));})()});})());
}
return j::function([=](const j::Args &_args_fn61832,const V &_receiver_fn61832,const V &_self_fn61832) mutable ->V{
V _v_61833_x;
V _v_61834_y;
V _v_61835_t;
_v_61833_x=_args_fn61832[0];
_v_61834_y=_args_fn61832[1];
_v_61835_t=_args_fn61832[2];
return ([&]()->V{V _lhs63278=V(0.5);V _rhs63279=([&]()->V{V _lhs63280=V(0.5);V _rhs63281=([&]()->V{V _number63301=([&]()->V{V _lhs63302=([&]()->V{V _lhs63304=_v_61831_arms.get();V _rhs63305=([&]()->V{V _lhs63306=([&]()->V{V _number63308=_v_61834_y;V _number63309=_v_61833_x;return V(std::atan2(j::number(_number63308),j::number(_number63309)));})();V _rhs63307=([&]()->V{V _lhs63310=this->_v_61267_TAU.get();V _rhs63311=([&]()->V{V _receiver63312=_v_61829_k.get();V _method63313=this->_literals[47];V _method=j::get(_receiver63312,_method63313);j::Args _params63314=j::Args{_v_61835_t};return j::call(_method,_params63314,_receiver63312);})();return V(j::number(_lhs63310)*j::number(_rhs63311));})();return V(j::number(_lhs63306)-j::number(_rhs63307));})();return V(j::number(_lhs63304)*j::number(_rhs63305));})();V _rhs63303=([&]()->V{V _lhs63315=([&]()->V{V _lhs63317=([&]()->V{V _number63319=_v_61833_x;V _number63320=_v_61834_y;return V(std::hypot(j::number(_number63319),j::number(_number63320)));})();V _rhs63318=j::get(_v_61829_k.get(),this->_literals[38]);return V(j::number(_lhs63317)/j::number(_rhs63318));})();V _rhs63316=V(9.0);return V(j::number(_lhs63315)*j::number(_rhs63316));})();return j::binary("+",_lhs63302,_rhs63303);})();return V(std::sin(j::number(_number63301)));})();return V(j::number(_lhs63280)*j::number(_rhs63281));})();return j::binary("+",_lhs63278,_rhs63279);})();
return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61836_vortex.get()=j::function([=](const j::Args &_args_fn61837,const V &_receiver_fn61837,const V &_self_fn61837) mutable ->V{
V _v_61838_o;
_v_61838_o=_args_fn61837[0];
{
return ([&]()->V{V _callee63366=this->_v_61631_look.get();return j::call(_callee63366,j::Args{this->_literals[126],_v_61838_o,([&]()->V{V _obj63322=j::object();j::put(_obj63322,this->_literals[45],this->_literals[127]);j::put(_obj63322,this->_literals[66],this->_literals[128]);j::put(_obj63322,this->_literals[67],this->_literals[68]);j::put(_obj63322,this->_literals[69],V(true));j::put(_obj63322,this->_literals[39],V(16.0));return _obj63322;})(),j::function([=](const j::Args &_args_fn61839,const V &_receiver_fn61839,const V &_self_fn61839) mutable ->V{
j::Cell _v_61840_k;
_v_61840_k.get()=_args_fn61839[0];
{
j::Cell _v_61841_n;
_v_61841_n.get()=([&]()->V{V _callee63329=this->_v_61278_noise.get();return j::call(_callee63329,j::Args{([&]()->V{V _obj63323=j::object();j::put(_obj63323,this->_literals[51],([&]()->V{j::Args _array63324;_array63324.push_back(([&]()->V{V _lhs63325=V(0.7);V _rhs63326=j::get(_v_61840_k.get(),this->_literals[38]);return V(j::number(_lhs63325)*j::number(_rhs63326));})());_array63324.push_back(([&]()->V{V _lhs63327=V(0.7);V _rhs63328=j::get(_v_61840_k.get(),this->_literals[38]);return V(j::number(_lhs63327)*j::number(_rhs63328));})());return j::array(std::move(_array63324));})());j::put(_obj63323,this->_literals[87],V(2.0));j::put(_obj63323,this->_literals[94],V(4.0));return _obj63323;})()});})();
return j::function([=](const j::Args &_args_fn61842,const V &_receiver_fn61842,const V &_self_fn61842) mutable ->V{
V _v_61843_x;
V _v_61844_y;
V _v_61845_t;
_v_61843_x=_args_fn61842[0];
_v_61844_y=_args_fn61842[1];
_v_61845_t=_args_fn61842[2];
{
V _v_61846_r;
V _v_61847_a;
V _v_61848_c;
V _v_61849_s;
_v_61846_r=([&]()->V{V _number63330=_v_61843_x;V _number63331=_v_61844_y;return V(std::hypot(j::number(_number63330),j::number(_number63331)));})();
_v_61847_a=([&]()->V{V _lhs63332=([&]()->V{V _lhs63334=V(4.0);V _rhs63335=([&]()->V{V _number63338=([&]()->V{V _lhs63339=j::unary("-",_v_61846_r);V _rhs63340=V(1.1);return V(j::number(_lhs63339)*j::number(_rhs63340));})();return V(std::exp(j::number(_number63338)));})();return V(j::number(_lhs63334)*j::number(_rhs63335));})();V _rhs63333=([&]()->V{V _lhs63341=this->_v_61267_TAU.get();V _rhs63342=([&]()->V{V _receiver63343=_v_61840_k.get();V _method63344=this->_literals[47];V _method=j::get(_receiver63343,_method63344);j::Args _params63345=j::Args{_v_61845_t};return j::call(_method,_params63345,_receiver63343);})();return V(j::number(_lhs63341)*j::number(_rhs63342));})();return j::binary("+",_lhs63332,_rhs63333);})();
_v_61848_c=([&]()->V{V _number63346=_v_61847_a;return V(std::cos(j::number(_number63346)));})();
_v_61849_s=([&]()->V{V _number63347=_v_61847_a;return V(std::sin(j::number(_number63347)));})();
return ([&]()->V{V _callee63365=this->_v_61268_clamp.get();return j::call(_callee63365,j::Args{([&]()->V{V _lhs63348=([&]()->V{V _callee63363=this->_v_61274_smoothstep.get();return j::call(_callee63363,j::Args{V(0.25),V(0.8),([&]()->V{V _callee63362=_v_61841_n.get();return j::call(_callee63362,j::Args{([&]()->V{V _lhs63350=([&]()->V{V _lhs63352=_v_61848_c;V _rhs63353=_v_61843_x;return V(j::number(_lhs63352)*j::number(_rhs63353));})();V _rhs63351=([&]()->V{V _lhs63354=_v_61849_s;V _rhs63355=_v_61844_y;return V(j::number(_lhs63354)*j::number(_rhs63355));})();return V(j::number(_lhs63350)-j::number(_rhs63351));})(),([&]()->V{V _lhs63356=([&]()->V{V _lhs63358=_v_61849_s;V _rhs63359=_v_61843_x;return V(j::number(_lhs63358)*j::number(_rhs63359));})();V _rhs63357=([&]()->V{V _lhs63360=_v_61848_c;V _rhs63361=_v_61844_y;return V(j::number(_lhs63360)*j::number(_rhs63361));})();return j::binary("+",_lhs63356,_rhs63357);})()});})()});})();V _rhs63349=([&]()->V{V _callee63364=this->_v_61274_smoothstep.get();return j::call(_callee63364,j::Args{V(0.05),V(0.6),_v_61846_r});})();return V(j::number(_lhs63348)*j::number(_rhs63349));})()});})();

}

return V{};
},3);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_61850_stripes.get()=j::function([=](const j::Args &_args_fn61851,const V &_receiver_fn61851,const V &_self_fn61851) mutable ->V{
V _v_61852_o;
_v_61852_o=_args_fn61851[0];
{
return ([&]()->V{V _callee63414=this->_v_61631_look.get();return j::call(_callee63414,j::Args{this->_literals[129],_v_61852_o,([&]()->V{V _obj63367=j::object();j::put(_obj63367,this->_literals[37],([&]()->V{j::Args _array63368;_array63368.push_back(this->_literals[72]);return j::array(std::move(_array63368));})());j::put(_obj63367,this->_literals[45],this->_literals[130]);j::put(_obj63367,this->_literals[66],this->_literals[122]);j::put(_obj63367,this->_literals[67],this->_literals[131]);j::put(_obj63367,this->_literals[69],V(true));j::put(_obj63367,this->_literals[39],V(2.0));return _obj63367;})(),j::function([=](const j::Args &_args_fn61853,const V &_receiver_fn61853,const V &_self_fn61853) mutable ->V{
j::Cell _v_61854_k;
V _v_61855_opts;
_v_61854_k.get()=_args_fn61853[0];
_v_61855_opts=_args_fn61853[1];
{
j::Cell _v_61856_dx;
j::Cell _v_61857_dy;
V _pattern63373=j::get(this->_v_61315_DIRECTIONS.get(),([&]()->V{V _callee63372=this->_v_61292_wordOf.get();return j::call(_callee63372,j::Args{this->_literals[132],j::get(_v_61855_opts,this->_literals[72]),([&]()->V{V _receiver63369=j::builtin("Object");V _method63370=this->_literals[55];V _method=j::get(_receiver63369,_method63370);j::Args _params63371=j::Args{this->_v_61315_DIRECTIONS.get()};return j::call(_method,_params63371,_receiver63369);})(),this->_literals[78]});})());
_v_61856_dx.get()=j::get(_pattern63373,V(0));
_v_61857_dy.get()=j::get(_pattern63373,V(1));
return j::function([=](const j::Args &_args_fn61858,const V &_receiver_fn61858,const V &_self_fn61858) mutable ->V{
V _v_61859_x;
V _v_61860_y;
V _v_61861_t;
_v_61859_x=_args_fn61858[0];
_v_61860_y=_args_fn61858[1];
_v_61861_t=_args_fn61858[2];
return ([&]()->V{V _callee63413=this->_v_61274_smoothstep.get();return j::call(_callee63413,j::Args{j::unary("-",V(0.35)),V(0.35),([&]()->V{V _number63393=([&]()->V{V _lhs63394=([&]()->V{V _lhs63396=([&]()->V{V _lhs63398=([&]()->V{V _lhs63400=([&]()->V{V _lhs63402=_v_61859_x;V _rhs63403=_v_61856_dx.get();return V(j::number(_lhs63402)*j::number(_rhs63403));})();V _rhs63401=([&]()->V{V _lhs63404=([&]()->V{V _lhs63406=_v_61860_y;V _rhs63407=_v_61857_dy.get();return V(j::number(_lhs63406)*j::number(_rhs63407));})();V _rhs63405=V(2.0);return V(j::number(_lhs63404)*j::number(_rhs63405));})();return j::binary("+",_lhs63400,_rhs63401);})();V _rhs63399=j::get(_v_61854_k.get(),this->_literals[38]);return V(j::number(_lhs63398)/j::number(_rhs63399));})();V _rhs63397=V(6.0);return V(j::number(_lhs63396)*j::number(_rhs63397));})();V _rhs63395=([&]()->V{V _lhs63408=this->_v_61267_TAU.get();V _rhs63409=([&]()->V{V _receiver63410=_v_61854_k.get();V _method63411=this->_literals[47];V _method=j::get(_receiver63410,_method63411);j::Args _params63412=j::Args{_v_61861_t};return j::call(_method,_params63412,_receiver63410);})();return V(j::number(_lhs63408)*j::number(_rhs63409));})();return V(j::number(_lhs63394)-j::number(_rhs63395));})();return V(std::sin(j::number(_number63393)));})()});})();
return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61862_checker.get()=j::function([=](const j::Args &_args_fn61863,const V &_receiver_fn61863,const V &_self_fn61863) mutable ->V{
V _v_61864_o;
_v_61864_o=_args_fn61863[0];
{
return ([&]()->V{V _callee63445=this->_v_61631_look.get();return j::call(_callee63445,j::Args{this->_literals[133],_v_61864_o,([&]()->V{V _obj63415=j::object();j::put(_obj63415,this->_literals[45],this->_literals[134]);j::put(_obj63415,this->_literals[66],this->_literals[14]);j::put(_obj63415,this->_literals[67],this->_literals[131]);j::put(_obj63415,this->_literals[69],V(true));j::put(_obj63415,this->_literals[39],V(2.0));return _obj63415;})(),j::function([=](const j::Args &_args_fn61865,const V &_receiver_fn61865,const V &_self_fn61865) mutable ->V{
j::Cell _v_61866_k;
_v_61866_k.get()=_args_fn61865[0];
return j::function([=](const j::Args &_args_fn61867,const V &_receiver_fn61867,const V &_self_fn61867) mutable ->V{
V _v_61868_x;
V _v_61869_y;
V _v_61870_t;
_v_61868_x=_args_fn61867[0];
_v_61869_y=_args_fn61867[1];
_v_61870_t=_args_fn61867[2];
{
V _v_61871_q;
V _v_61872_p;
_v_61871_q=([&]()->V{V _lhs63416=V(3.0);V _rhs63417=j::get(_v_61866_k.get(),this->_literals[38]);return V(j::number(_lhs63416)/j::number(_rhs63417));})();
_v_61872_p=([&]()->V{V _lhs63418=V(2.0);V _rhs63419=([&]()->V{V _receiver63420=_v_61866_k.get();V _method63421=this->_literals[47];V _method=j::get(_receiver63420,_method63421);j::Args _params63422=j::Args{_v_61870_t};return j::call(_method,_params63422,_receiver63420);})();return V(j::number(_lhs63418)*j::number(_rhs63419));})();
return (j::truth(([&]()->V{V _lhs63423=([&]()->V{V _lhs63425=([&]()->V{V _number63431=([&]()->V{V _lhs63432=([&]()->V{V _lhs63434=_v_61868_x;V _rhs63435=_v_61871_q;return V(j::number(_lhs63434)*j::number(_rhs63435));})();V _rhs63433=_v_61872_p;return j::binary("+",_lhs63432,_rhs63433);})();return V(std::floor(j::number(_number63431)));})();V _rhs63426=([&]()->V{V _number63440=([&]()->V{V _lhs63441=([&]()->V{V _lhs63443=_v_61869_y;V _rhs63444=_v_61871_q;return V(j::number(_lhs63443)*j::number(_rhs63444));})();V _rhs63442=_v_61872_p;return j::binary("+",_lhs63441,_rhs63442);})();return V(std::floor(j::number(_number63440)));})();return j::binary("+",_lhs63425,_rhs63426);})();V _rhs63424=V(1.0);return V(int(j::i32(_lhs63423)&j::i32(_rhs63424)));})())?V(0.9):V(0.15));

}

return V{};
},3);
return V{};
},1)});})();

}

return V{};
},1);
this->_v_61873_sweep.get()=j::function([=](const j::Args &_args_fn61874,const V &_receiver_fn61874,const V &_self_fn61874) mutable ->V{
V _v_61875_o;
_v_61875_o=_args_fn61874[0];
{
return ([&]()->V{V _callee63509=this->_v_61631_look.get();return j::call(_callee63509,j::Args{this->_literals[135],_v_61875_o,([&]()->V{V _obj63446=j::object();j::put(_obj63446,this->_literals[37],([&]()->V{j::Args _array63447;_array63447.push_back(this->_literals[136]);return j::array(std::move(_array63447));})());j::put(_obj63446,this->_literals[45],this->_literals[137]);j::put(_obj63446,this->_literals[66],this->_literals[90]);j::put(_obj63446,this->_literals[67],this->_literals[131]);j::put(_obj63446,this->_literals[69],V(true));j::put(_obj63446,this->_literals[39],V(8.0));j::put(_obj63446,this->_literals[43],V(true));return _obj63446;})(),j::function([=](const j::Args &_args_fn61876,const V &_receiver_fn61876,const V &_self_fn61876) mutable ->V{
j::Cell _v_61877_k;
V _v_61878_opts;
_v_61877_k.get()=_args_fn61876[0];
_v_61878_opts=_args_fn61876[1];
{
j::Cell _v_61879_dir;
_v_61879_dir.get()=([&]()->V{V _callee63449=this->_v_61292_wordOf.get();return j::call(_callee63449,j::Args{this->_literals[138],j::get(_v_61878_opts,this->_literals[136]),([&]()->V{j::Args _array63448;_array63448.push_back(this->_literals[139]);_array63448.push_back(this->_literals[140]);_array63448.push_back(this->_literals[141]);_array63448.push_back(this->_literals[142]);return j::array(std::move(_array63448));})(),this->_literals[139]});})();
return j::function([=](const j::Args &_args_fn61880,const V &_receiver_fn61880,const V &_self_fn61880) mutable ->V{
V _v_61881_x;
V _v_61882_y;
V _v_61883_t;
V _v_61884_at;
_v_61881_x=_args_fn61880[0];
_v_61882_y=_args_fn61880[1];
_v_61883_t=_args_fn61880[2];
_v_61884_at=_args_fn61880[3];
{
V _v_61885_p;
_v_61885_p=(j::truth(([&]()->V{V _lhs63450=_v_61879_dir.get();V _rhs63451=this->_literals[139];return V(j::equal(_lhs63450,_rhs63451,true));})())?([&]()->V{V _lhs63452=([&]()->V{V _lhs63454=_v_61881_x;V _rhs63455=j::get(_v_61884_at,this->_literals[61]);return V(j::number(_lhs63454)/j::number(_rhs63455));})();V _rhs63453=V(0.5);return j::binary("+",_lhs63452,_rhs63453);})():(j::truth(([&]()->V{V _lhs63456=_v_61879_dir.get();V _rhs63457=this->_literals[140];return V(j::equal(_lhs63456,_rhs63457,true));})())?([&]()->V{V _lhs63458=([&]()->V{V _lhs63460=_v_61882_y;V _rhs63461=j::get(_v_61884_at,this->_literals[63]);return V(j::number(_lhs63460)/j::number(_rhs63461));})();V _rhs63459=V(0.5);return j::binary("+",_lhs63458,_rhs63459);})():(j::truth(([&]()->V{V _lhs63462=_v_61879_dir.get();V _rhs63463=this->_literals[141];return V(j::equal(_lhs63462,_rhs63463,true));})())?([&]()->V{V _lhs63464=([&]()->V{V _lhs63466=([&]()->V{V _lhs63468=([&]()->V{V _lhs63470=_v_61881_x;V _rhs63471=j::get(_v_61884_at,this->_literals[61]);return V(j::number(_lhs63470)/j::number(_rhs63471));})();V _rhs63469=([&]()->V{V _lhs63472=_v_61882_y;V _rhs63473=j::get(_v_61884_at,this->_literals[63]);return V(j::number(_lhs63472)/j::number(_rhs63473));})();return j::binary("+",_lhs63468,_rhs63469);})();V _rhs63467=V(2.0);return V(j::number(_lhs63466)/j::number(_rhs63467));})();V _rhs63465=V(0.5);return j::binary("+",_lhs63464,_rhs63465);})():([&]()->V{V _lhs63474=([&]()->V{V _lhs63476=([&]()->V{V _number63478=_v_61881_x;V _number63479=_v_61882_y;return V(std::hypot(j::number(_number63478),j::number(_number63479)));})();V _rhs63477=([&]()->V{V _number63480=j::get(_v_61884_at,this->_literals[61]);V _number63481=j::get(_v_61884_at,this->_literals[63]);return V(std::hypot(j::number(_number63480),j::number(_number63481)));})();return V(j::number(_lhs63476)/j::number(_rhs63477));})();V _rhs63475=V(2.0);return V(j::number(_lhs63474)*j::number(_rhs63475));})())));
return ([&]()->V{V _lhs63482=V(0.5);V _rhs63483=([&]()->V{V _lhs63484=V(0.5);V _rhs63485=([&]()->V{V _number63497=([&]()->V{V _lhs63498=([&]()->V{V _lhs63500=j::get(j::builtin("Math"),this->_literals[143]);V _rhs63501=([&]()->V{V _lhs63502=_v_61885_p;V _rhs63503=j::get(_v_61877_k.get(),this->_literals[38]);return V(j::number(_lhs63502)/j::number(_rhs63503));})();return V(j::number(_lhs63500)*j::number(_rhs63501));})();V _rhs63499=([&]()->V{V _lhs63504=this->_v_61267_TAU.get();V _rhs63505=([&]()->V{V _receiver63506=_v_61877_k.get();V _method63507=this->_literals[47];V _method=j::get(_receiver63506,_method63507);j::Args _params63508=j::Args{_v_61883_t};return j::call(_method,_params63508,_receiver63506);})();return V(j::number(_lhs63504)*j::number(_rhs63505));})();return V(j::number(_lhs63498)-j::number(_rhs63499));})();return V(std::cos(j::number(_number63497)));})();return V(j::number(_lhs63484)*j::number(_rhs63485));})();return V(j::number(_lhs63482)-j::number(_rhs63483));})();

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61886_turbulence.get()=j::function([=](const j::Args &_args_fn61887,const V &_receiver_fn61887,const V &_self_fn61887) mutable ->V{
V _v_61888_o;
_v_61888_o=_args_fn61887[0];
{
return ([&]()->V{V _callee63526=this->_v_61631_look.get();return j::call(_callee63526,j::Args{this->_literals[144],_v_61888_o,([&]()->V{V _obj63510=j::object();j::put(_obj63510,this->_literals[37],([&]()->V{j::Args _array63511;_array63511.push_back(this->_literals[4]);return j::array(std::move(_array63511));})());j::put(_obj63510,this->_literals[45],this->_literals[145]);j::put(_obj63510,this->_literals[66],this->_literals[14]);j::put(_obj63510,this->_literals[67],this->_literals[68]);j::put(_obj63510,this->_literals[69],V(true));j::put(_obj63510,this->_literals[39],V(8.0));return _obj63510;})(),j::function([=](const j::Args &_args_fn61889,const V &_receiver_fn61889,const V &_self_fn61889) mutable ->V{
V _v_61890_k;
V _v_61891_opts;
_v_61890_k=_args_fn61889[0];
_v_61891_opts=_args_fn61889[1];
{
V _v_61892_kind;
j::Cell _v_61893_n;
_v_61892_kind=([&]()->V{V _callee63513=this->_v_61292_wordOf.get();return j::call(_callee63513,j::Args{this->_literals[146],j::get(_v_61891_opts,this->_literals[4]),([&]()->V{j::Args _array63512;_array63512.push_back(this->_literals[147]);_array63512.push_back(this->_literals[148]);_array63512.push_back(this->_literals[149]);return j::array(std::move(_array63512));})(),this->_literals[147]});})();
_v_61893_n.get()=([&]()->V{V _receiver63522=_v_61890_k;V _method63523=this->_literals[48];V _method=j::get(_receiver63522,_method63523);j::Args _params63524=j::Args{([&]()->V{V _obj63514=j::object();j::put(_obj63514,this->_literals[51],([&]()->V{j::Args _array63515;_array63515.push_back(([&]()->V{V _lhs63516=V(0.8);V _rhs63517=j::get(_v_61890_k,this->_literals[38]);return V(j::number(_lhs63516)*j::number(_rhs63517));})());_array63515.push_back(([&]()->V{V _lhs63518=V(0.8);V _rhs63519=j::get(_v_61890_k,this->_literals[38]);return V(j::number(_lhs63518)*j::number(_rhs63519));})());return j::array(std::move(_array63515));})());j::put(_obj63514,this->_literals[4],_v_61892_kind);j::put(_obj63514,this->_literals[87],(j::truth(([&]()->V{V _lhs63520=_v_61892_kind;V _rhs63521=this->_literals[149];return V(j::equal(_lhs63520,_rhs63521,true));})())?V(1.0):V(3.0)));j::put(_obj63514,this->_literals[50],V(1.5));return _obj63514;})()};return j::call(_method,_params63524,_receiver63522);})();
return j::function([=](const j::Args &_args_fn61894,const V &_receiver_fn61894,const V &_self_fn61894) mutable ->V{
V _v_61895_x;
V _v_61896_y;
V _v_61897_t;
_v_61895_x=_args_fn61894[0];
_v_61896_y=_args_fn61894[1];
_v_61897_t=_args_fn61894[2];
return ([&]()->V{V _callee63525=_v_61893_n.get();return j::call(_callee63525,j::Args{_v_61895_x,_v_61896_y,_v_61897_t});})();
return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61898_marble.get()=j::function([=](const j::Args &_args_fn61899,const V &_receiver_fn61899,const V &_self_fn61899) mutable ->V{
V _v_61900_o;
_v_61900_o=_args_fn61899[0];
{
return ([&]()->V{V _callee63578=this->_v_61631_look.get();return j::call(_callee63578,j::Args{this->_literals[150],_v_61900_o,([&]()->V{V _obj63527=j::object();j::put(_obj63527,this->_literals[45],this->_literals[151]);j::put(_obj63527,this->_literals[66],this->_literals[152]);j::put(_obj63527,this->_literals[67],this->_literals[68]);j::put(_obj63527,this->_literals[69],V(true));j::put(_obj63527,this->_literals[39],V(16.0));return _obj63527;})(),j::function([=](const j::Args &_args_fn61901,const V &_receiver_fn61901,const V &_self_fn61901) mutable ->V{
j::Cell _v_61902_k;
_v_61902_k.get()=_args_fn61901[0];
{
j::Cell _v_61903_n;
_v_61903_n.get()=([&]()->V{V _receiver63534=_v_61902_k.get();V _method63535=this->_literals[48];V _method=j::get(_receiver63534,_method63535);j::Args _params63536=j::Args{([&]()->V{V _obj63528=j::object();j::put(_obj63528,this->_literals[51],([&]()->V{j::Args _array63529;_array63529.push_back(([&]()->V{V _lhs63530=V(0.9);V _rhs63531=j::get(_v_61902_k.get(),this->_literals[38]);return V(j::number(_lhs63530)*j::number(_rhs63531));})());_array63529.push_back(([&]()->V{V _lhs63532=V(0.9);V _rhs63533=j::get(_v_61902_k.get(),this->_literals[38]);return V(j::number(_lhs63532)*j::number(_rhs63533));})());return j::array(std::move(_array63529));})());j::put(_obj63528,this->_literals[87],V(4.0));j::put(_obj63528,this->_literals[50],V(1.0));return _obj63528;})()};return j::call(_method,_params63536,_receiver63534);})();
return j::function([=](const j::Args &_args_fn61904,const V &_receiver_fn61904,const V &_self_fn61904) mutable ->V{
V _v_61905_x;
V _v_61906_y;
V _v_61907_t;
_v_61905_x=_args_fn61904[0];
_v_61906_y=_args_fn61904[1];
_v_61907_t=_args_fn61904[2];
{
V _v_61908_m;
V _v_61909_band;
_v_61908_m=([&]()->V{V _callee63537=_v_61903_n.get();return j::call(_callee63537,j::Args{_v_61905_x,_v_61906_y,_v_61907_t});})();
_v_61909_band=([&]()->V{V _lhs63538=V(0.5);V _rhs63539=([&]()->V{V _lhs63540=V(0.5);V _rhs63541=([&]()->V{V _number63554=([&]()->V{V _lhs63555=([&]()->V{V _lhs63557=([&]()->V{V _lhs63559=([&]()->V{V _lhs63561=_v_61905_x;V _rhs63562=([&]()->V{V _lhs63563=_v_61906_y;V _rhs63564=V(0.6);return V(j::number(_lhs63563)*j::number(_rhs63564));})();return j::binary("+",_lhs63561,_rhs63562);})();V _rhs63560=j::get(_v_61902_k.get(),this->_literals[38]);return V(j::number(_lhs63559)/j::number(_rhs63560));})();V _rhs63558=V(3.0);return V(j::number(_lhs63557)*j::number(_rhs63558));})();V _rhs63556=([&]()->V{V _lhs63565=V(4.5);V _rhs63566=_v_61908_m;return V(j::number(_lhs63565)*j::number(_rhs63566));})();return j::binary("+",_lhs63555,_rhs63556);})();return V(std::sin(j::number(_number63554)));})();return V(j::number(_lhs63540)*j::number(_rhs63541));})();return j::binary("+",_lhs63538,_rhs63539);})();
return ([&]()->V{V _lhs63567=([&]()->V{V _lhs63569=V(0.05);V _rhs63570=([&]()->V{V _lhs63571=V(0.4);V _rhs63572=([&]()->V{V _callee63573=this->_v_61274_smoothstep.get();return j::call(_callee63573,j::Args{V(0.0),V(0.22),_v_61909_band});})();return V(j::number(_lhs63571)*j::number(_rhs63572));})();return j::binary("+",_lhs63569,_rhs63570);})();V _rhs63568=([&]()->V{V _lhs63574=([&]()->V{V _lhs63576=V(0.4);V _rhs63577=_v_61908_m;return V(j::number(_lhs63576)*j::number(_rhs63577));})();V _rhs63575=_v_61908_m;return V(j::number(_lhs63574)*j::number(_rhs63575));})();return j::binary("+",_lhs63567,_rhs63568);})();

}

return V{};
},3);

}

return V{};
},1)});})();

}

return V{};
},1);
this->_v_61910_lavaLamp.get()=j::function([=](const j::Args &_args_fn61911,const V &_receiver_fn61911,const V &_self_fn61911) mutable ->V{
V _v_61912_o;
_v_61912_o=_args_fn61911[0];
{
return ([&]()->V{V _callee63673=this->_v_61631_look.get();return j::call(_callee63673,j::Args{this->_literals[153],_v_61912_o,([&]()->V{V _obj63579=j::object();j::put(_obj63579,this->_literals[37],([&]()->V{j::Args _array63580;_array63580.push_back(this->_literals[154]);_array63580.push_back(this->_literals[94]);return j::array(std::move(_array63580));})());j::put(_obj63579,this->_literals[45],this->_literals[155]);j::put(_obj63579,this->_literals[66],this->_literals[156]);j::put(_obj63579,this->_literals[67],this->_literals[99]);j::put(_obj63579,this->_literals[69],V(false));j::put(_obj63579,this->_literals[39],V(16.0));return _obj63579;})(),j::function([=](const j::Args &_args_fn61913,const V &_receiver_fn61913,const V &_self_fn61913) mutable ->V{
j::Cell _v_61914_k;
V _v_61915_opts;
_v_61914_k.get()=_args_fn61913[0];
_v_61915_opts=_args_fn61913[1];
{
V _v_61916_count;
j::Cell _v_61917_seed;
j::Cell _v_61918_blobs;
_v_61916_count=([&]()->V{V _logical63581=j::get(_v_61915_opts,this->_literals[154]);return j::nullish(_logical63581)?V(7.0):_logical63581;})();
if(j::truth(([&]()->V{V _logical63582=([&]()->V{V _logical63583=j::unary("!",([&]()->V{V _receiver63584=j::builtin("Number");V _method63585=this->_literals[27];V _method=j::get(_receiver63584,_method63585);j::Args _params63586=j::Args{_v_61916_count};return j::call(_method,_params63586,_receiver63584);})());return !j::truth(_logical63583)?([&]()->V{V _lhs63587=_v_61916_count;V _rhs63588=V(1.0);return j::binary("<",_lhs63587,_rhs63588);})():_logical63583;})();return !j::truth(_logical63582)?([&]()->V{V _lhs63589=_v_61916_count;V _rhs63590=V(16.0);return j::binary(">",_lhs63589,_rhs63590);})():_logical63582;})())){(void)(([&]()->V{V _callee63593=this->_v_61269_fail.get();return j::call(_callee63593,j::Args{([&]()->V{std::u16string _text63591;_text63591+=u"lavaLamp()'s blobs takes a whole number from 1 to 16, not ";_text63591+=j::string(([&]()->V{V _callee63592=this->_v_61289_show.get();return j::call(_callee63592,j::Args{_v_61916_count});})());_text63591+=u"";return V(std::move(_text63591));})()});})());
}
_v_61917_seed.get()=([&]()->V{V _callee63594=this->_v_61288_seedOf.get();return j::call(_callee63594,j::Args{this->_literals[157],j::get(_v_61915_opts,this->_literals[94])});})();
_v_61918_blobs.get()=([&]()->V{V _receiver63624=j::builtin("Array");V _method63625=this->_literals[112];V _method=j::get(_receiver63624,_method63625);j::Args _params63626=j::Args{([&]()->V{V _obj63595=j::object();j::put(_obj63595,this->_literals[46],_v_61916_count);return _obj63595;})(),j::function([=](const j::Args &_args_fn61919,const V &_receiver_fn61919,const V &_self_fn61919) mutable ->V{
V _v_61920__;
V _v_61921_i;
_v_61920__=_args_fn61919[0];
_v_61921_i=_args_fn61919[1];
return ([&]()->V{V _obj63596=j::object();j::put(_obj63596,this->_literals[158],([&]()->V{V _lhs63597=([&]()->V{V _lhs63599=([&]()->V{V _callee63601=this->_v_61271_hash.get();return j::call(_callee63601,j::Args{_v_61917_seed.get(),_v_61921_i,V(1.0)});})();V _rhs63600=V(0.5);return V(j::number(_lhs63599)-j::number(_rhs63600));})();V _rhs63598=V(1.6);return V(j::number(_lhs63597)*j::number(_rhs63598));})());j::put(_obj63596,this->_literals[159],([&]()->V{V _lhs63602=V(0.15);V _rhs63603=([&]()->V{V _lhs63604=V(0.2);V _rhs63605=([&]()->V{V _callee63606=this->_v_61271_hash.get();return j::call(_callee63606,j::Args{_v_61917_seed.get(),_v_61921_i,V(2.0)});})();return V(j::number(_lhs63604)*j::number(_rhs63605));})();return j::binary("+",_lhs63602,_rhs63603);})());j::put(_obj63596,this->_literals[160],([&]()->V{V _lhs63607=([&]()->V{V _lhs63609=V(0.16);V _rhs63610=([&]()->V{V _lhs63611=V(0.14);V _rhs63612=([&]()->V{V _callee63613=this->_v_61271_hash.get();return j::call(_callee63613,j::Args{_v_61917_seed.get(),_v_61921_i,V(3.0)});})();return V(j::number(_lhs63611)*j::number(_rhs63612));})();return j::binary("+",_lhs63609,_rhs63610);})();V _rhs63608=j::get(_v_61914_k.get(),this->_literals[38]);return V(j::number(_lhs63607)*j::number(_rhs63608));})());j::put(_obj63596,this->_literals[161],([&]()->V{V _lhs63614=V(1.0);V _rhs63615=([&]()->V{V _number63619=([&]()->V{V _lhs63620=([&]()->V{V _callee63622=this->_v_61271_hash.get();return j::call(_callee63622,j::Args{_v_61917_seed.get(),_v_61921_i,V(4.0)});})();V _rhs63621=V(2.0);return V(j::number(_lhs63620)*j::number(_rhs63621));})();return V(std::floor(j::number(_number63619)));})();return j::binary("+",_lhs63614,_rhs63615);})());j::put(_obj63596,this->_literals[15],([&]()->V{V _callee63623=this->_v_61271_hash.get();return j::call(_callee63623,j::Args{_v_61917_seed.get(),_v_61921_i,V(5.0)});})());return _obj63596;})();
return V{};
},2)};return j::call(_method,_params63626,_receiver63624);})();
return j::function([=](const j::Args &_args_fn61922,const V &_receiver_fn61922,const V &_self_fn61922) mutable ->V{
V _v_61923_x;
V _v_61924_y;
V _v_61925_t;
V _v_61926_at;
_v_61923_x=_args_fn61922[0];
_v_61924_y=_args_fn61922[1];
_v_61925_t=_args_fn61922[2];
_v_61926_at=_args_fn61922[3];
{
V _v_61927_p;
V _v_61928_half;
V _v_61929_sum;
_v_61927_p=([&]()->V{V _receiver63627=_v_61914_k.get();V _method63628=this->_literals[47];V _method=j::get(_receiver63627,_method63628);j::Args _params63629=j::Args{_v_61925_t};return j::call(_method,_params63629,_receiver63627);})();
_v_61928_half=([&]()->V{V _lhs63630=j::get(_v_61926_at,this->_literals[63]);V _rhs63631=V(2.0);return V(j::number(_lhs63630)/j::number(_rhs63631));})();
_v_61929_sum=V(0.0);
{for(const auto &_item63632:j::elements(_v_61918_blobs.get())){V _v_61930_b;
_v_61930_b=_item63632;
{
V _v_61931_a;
V _v_61932_dx;
V _v_61933_dy;
_v_61931_a=([&]()->V{V _lhs63633=this->_v_61267_TAU.get();V _rhs63634=([&]()->V{V _lhs63635=([&]()->V{V _lhs63637=j::get(_v_61930_b,this->_literals[161]);V _rhs63638=_v_61927_p;return V(j::number(_lhs63637)*j::number(_rhs63638));})();V _rhs63636=j::get(_v_61930_b,this->_literals[15]);return j::binary("+",_lhs63635,_rhs63636);})();return V(j::number(_lhs63633)*j::number(_rhs63634));})();
_v_61932_dx=([&]()->V{V _lhs63639=_v_61923_x;V _rhs63640=([&]()->V{V _lhs63641=j::get(_v_61930_b,this->_literals[158]);V _rhs63642=([&]()->V{V _lhs63643=j::get(_v_61930_b,this->_literals[159]);V _rhs63644=([&]()->V{V _number63647=([&]()->V{V _lhs63648=_v_61931_a;V _rhs63649=V(2.0);return V(j::number(_lhs63648)*j::number(_rhs63649));})();return V(std::sin(j::number(_number63647)));})();return V(j::number(_lhs63643)*j::number(_rhs63644));})();return j::binary("+",_lhs63641,_rhs63642);})();return V(j::number(_lhs63639)-j::number(_rhs63640));})();
_v_61933_dy=([&]()->V{V _lhs63650=([&]()->V{V _lhs63652=_v_61924_y;V _rhs63653=([&]()->V{V _lhs63654=([&]()->V{V _lhs63656=_v_61928_half;V _rhs63657=V(0.85);return V(j::number(_lhs63656)*j::number(_rhs63657));})();V _rhs63655=([&]()->V{V _number63658=_v_61931_a;return V(std::sin(j::number(_number63658)));})();return V(j::number(_lhs63654)*j::number(_rhs63655));})();return V(j::number(_lhs63652)-j::number(_rhs63653));})();V _rhs63651=V(0.8);return V(j::number(_lhs63650)*j::number(_rhs63651));})();
(void)((_v_61929_sum=j::binary("+",_v_61929_sum,([&]()->V{V _lhs63660=([&]()->V{V _lhs63662=j::get(_v_61930_b,this->_literals[160]);V _rhs63663=j::get(_v_61930_b,this->_literals[160]);return V(j::number(_lhs63662)*j::number(_rhs63663));})();V _rhs63661=([&]()->V{V _lhs63664=([&]()->V{V _lhs63666=([&]()->V{V _lhs63668=_v_61932_dx;V _rhs63669=_v_61932_dx;return V(j::number(_lhs63668)*j::number(_rhs63669));})();V _rhs63667=([&]()->V{V _lhs63670=_v_61933_dy;V _rhs63671=_v_61933_dy;return V(j::number(_lhs63670)*j::number(_rhs63671));})();return j::binary("+",_lhs63666,_rhs63667);})();V _rhs63665=V(0.0001);return j::binary("+",_lhs63664,_rhs63665);})();return V(j::number(_lhs63660)/j::number(_rhs63661));})())));

}
}}
return ([&]()->V{V _callee63672=this->_v_61274_smoothstep.get();return j::call(_callee63672,j::Args{V(0.7),V(2.2),_v_61929_sum});})();

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61935_stars.get()=j::function([=](const j::Args &_args_fn61936,const V &_receiver_fn61936,const V &_self_fn61936) mutable ->V{
V _v_61937_o;
_v_61937_o=_args_fn61936[0];
{
return ([&]()->V{V _callee63744=this->_v_61631_look.get();return j::call(_callee63744,j::Args{this->_literals[162],_v_61937_o,([&]()->V{V _obj63674=j::object();j::put(_obj63674,this->_literals[37],([&]()->V{j::Args _array63675;_array63675.push_back(this->_literals[163]);_array63675.push_back(this->_literals[94]);return j::array(std::move(_array63675));})());j::put(_obj63674,this->_literals[45],this->_literals[164]);j::put(_obj63674,this->_literals[66],this->_literals[165]);j::put(_obj63674,this->_literals[67],this->_v_61934_STAR.get());j::put(_obj63674,this->_literals[69],V(false));j::put(_obj63674,this->_literals[39],V(4.0));return _obj63674;})(),j::function([=](const j::Args &_args_fn61938,const V &_receiver_fn61938,const V &_self_fn61938) mutable ->V{
j::Cell _v_61939_k;
V _v_61940_opts;
_v_61939_k.get()=_args_fn61938[0];
_v_61940_opts=_args_fn61938[1];
{
j::Cell _v_61941_share;
j::Cell _v_61942_seed;
_v_61941_share.get()=([&]()->V{V _lhs63676=V(0.05);V _rhs63677=([&]()->V{V _callee63678=this->_v_61311_densityOf.get();return j::call(_callee63678,j::Args{this->_literals[166],j::get(_v_61940_opts,this->_literals[163])});})();return V(j::number(_lhs63676)*j::number(_rhs63677));})();
_v_61942_seed.get()=([&]()->V{V _callee63679=this->_v_61288_seedOf.get();return j::call(_callee63679,j::Args{this->_literals[166],j::get(_v_61940_opts,this->_literals[94])});})();
return j::function([=](const j::Args &_args_fn61943,const V &_receiver_fn61943,const V &_self_fn61943) mutable ->V{
V _v_61944_x;
V _v_61945_y;
V _v_61946_t;
V _v_61947_at;
_v_61944_x=_args_fn61943[0];
_v_61945_y=_args_fn61943[1];
_v_61946_t=_args_fn61943[2];
_v_61947_at=_args_fn61943[3];
{
V _v_61948_c;
V _v_61949_r;
V _v_61950_h;
V _v_61951_size;
V _v_61952_glow;
V _v_61953_v;
_v_61948_c=([&]()->V{V _number63685=([&]()->V{V _receiver63688=_v_61939_k.get();V _method63689=this->_literals[60];V _method=j::get(_receiver63688,_method63689);j::Args _params63690=j::Args{([&]()->V{V _lhs63686=_v_61944_x;V _rhs63687=j::get(_v_61939_k.get(),this->_literals[38]);return V(j::number(_lhs63686)/j::number(_rhs63687));})(),_v_61947_at};return j::call(_method,_params63690,_receiver63688);})();return V(std::floor(j::number(_number63685)));})();
_v_61949_r=([&]()->V{V _number63696=([&]()->V{V _receiver63699=_v_61939_k.get();V _method63700=this->_literals[62];V _method=j::get(_receiver63699,_method63700);j::Args _params63701=j::Args{([&]()->V{V _lhs63697=_v_61945_y;V _rhs63698=j::get(_v_61939_k.get(),this->_literals[38]);return V(j::number(_lhs63697)/j::number(_rhs63698));})(),_v_61947_at};return j::call(_method,_params63701,_receiver63699);})();return V(std::floor(j::number(_number63696)));})();
_v_61950_h=([&]()->V{V _callee63702=this->_v_61271_hash.get();return j::call(_callee63702,j::Args{_v_61948_c,_v_61949_r,_v_61942_seed.get()});})();
if(j::truth(([&]()->V{V _lhs63703=_v_61950_h;V _rhs63704=_v_61941_share.get();return j::binary(">=",_lhs63703,_rhs63704);})())){return V(0.0);
}
_v_61951_size=([&]()->V{V _callee63705=this->_v_61271_hash.get();return j::call(_callee63705,j::Args{_v_61948_c,_v_61949_r,_v_61942_seed.get(),V(1.0)});})();
_v_61952_glow=(j::truth(j::get(_v_61939_k.get(),this->_literals[39]))?([&]()->V{V _callee63711=this->_v_61279_twinkle.get();return j::call(_callee63711,j::Args{_v_61946_t,([&]()->V{V _lhs63706=([&]()->V{V _lhs63708=_v_61948_c;V _rhs63709=V(977.0);return V(j::number(_lhs63708)*j::number(_rhs63709));})();V _rhs63707=_v_61949_r;return j::binary("+",_lhs63706,_rhs63707);})(),([&]()->V{V _obj63710=j::object();j::put(_obj63710,this->_literals[39],j::get(_v_61939_k.get(),this->_literals[39]));j::put(_obj63710,this->_literals[95],V(0.15));return _obj63710;})()});})():V(0.8));
_v_61953_v=([&]()->V{V _callee63722=this->_v_61268_clamp.get();return j::call(_callee63722,j::Args{([&]()->V{V _lhs63712=([&]()->V{V _lhs63714=([&]()->V{V _lhs63716=V(0.35);V _rhs63717=([&]()->V{V _lhs63718=([&]()->V{V _lhs63720=V(0.65);V _rhs63721=_v_61951_size;return V(j::number(_lhs63720)*j::number(_rhs63721));})();V _rhs63719=_v_61951_size;return V(j::number(_lhs63718)*j::number(_rhs63719));})();return j::binary("+",_lhs63716,_rhs63717);})();V _rhs63715=_v_61952_glow;return V(j::number(_lhs63714)*j::number(_rhs63715));})();V _rhs63713=V(0.05);return j::binary("+",_lhs63712,_rhs63713);})()});})();
(void)(([&]()->V{V _base63724=_v_61947_at;V _key63725=this->_literals[167];V _assign63723=j::get(this->_v_61934_STAR.get(),([&]()->V{V _lhs63726=V(1.0);V _rhs63727=([&]()->V{V _receiver63741=j::builtin("Math");V _method63742=this->_literals[95];V _method=j::get(_receiver63741,_method63742);j::Args _params63743=j::Args{([&]()->V{V _lhs63728=j::get(this->_v_61934_STAR.get(),this->_literals[46]);V _rhs63729=V(2.0);return V(j::number(_lhs63728)-j::number(_rhs63729));})(),([&]()->V{V _number63734=([&]()->V{V _lhs63735=_v_61953_v;V _rhs63736=([&]()->V{V _lhs63737=j::get(this->_v_61934_STAR.get(),this->_literals[46]);V _rhs63738=V(1.0);return V(j::number(_lhs63737)-j::number(_rhs63738));})();return V(j::number(_lhs63735)*j::number(_rhs63736));})();return V(std::floor(j::number(_number63734)));})()};return j::call(_method,_params63743,_receiver63741);})();return j::binary("+",_lhs63726,_rhs63727);})());return j::put(_base63724,_key63725,_assign63723);})());
return _v_61953_v;

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61954_rainfall.get()=j::function([=](const j::Args &_args_fn61955,const V &_receiver_fn61955,const V &_self_fn61955) mutable ->V{
V _v_61956_o;
_v_61956_o=_args_fn61955[0];
{
return ([&]()->V{V _callee63839=this->_v_61631_look.get();return j::call(_callee63839,j::Args{this->_literals[168],_v_61956_o,([&]()->V{V _obj63745=j::object();j::put(_obj63745,this->_literals[37],([&]()->V{j::Args _array63746;_array63746.push_back(this->_literals[169]);_array63746.push_back(this->_literals[163]);_array63746.push_back(this->_literals[94]);return j::array(std::move(_array63746));})());j::put(_obj63745,this->_literals[45],this->_literals[170]);j::put(_obj63745,this->_literals[66],this->_literals[165]);j::put(_obj63745,this->_literals[67],this->_literals[171]);j::put(_obj63745,this->_literals[69],V(false));j::put(_obj63745,this->_literals[39],V(4.0));return _obj63745;})(),j::function([=](const j::Args &_args_fn61957,const V &_receiver_fn61957,const V &_self_fn61957) mutable ->V{
j::Cell _v_61958_k;
V _v_61959_opts;
_v_61958_k.get()=_args_fn61957[0];
_v_61959_opts=_args_fn61957[1];
{
j::Cell _v_61960_lean;
j::Cell _v_61961_share;
j::Cell _v_61962_seed;
j::Cell _v_61963_streak;
_v_61960_lean.get()=j::get(([&]()->V{V _obj63747=j::object();j::put(_obj63747,this->_literals[172],V(0.0));j::put(_obj63747,this->_literals[77],j::unary("-",V(0.7)));j::put(_obj63747,this->_literals[78],V(0.7));return _obj63747;})(),([&]()->V{V _callee63749=this->_v_61292_wordOf.get();return j::call(_callee63749,j::Args{this->_literals[173],j::get(_v_61959_opts,this->_literals[169]),([&]()->V{j::Args _array63748;_array63748.push_back(this->_literals[172]);_array63748.push_back(this->_literals[77]);_array63748.push_back(this->_literals[78]);return j::array(std::move(_array63748));})(),this->_literals[172]});})());
_v_61961_share.get()=([&]()->V{V _receiver63755=j::builtin("Math");V _method63756=this->_literals[95];V _method=j::get(_receiver63755,_method63756);j::Args _params63757=j::Args{V(1.0),([&]()->V{V _lhs63750=V(0.35);V _rhs63751=([&]()->V{V _callee63752=this->_v_61311_densityOf.get();return j::call(_callee63752,j::Args{this->_literals[174],j::get(_v_61959_opts,this->_literals[163])});})();return V(j::number(_lhs63750)*j::number(_rhs63751));})()};return j::call(_method,_params63757,_receiver63755);})();
_v_61962_seed.get()=([&]()->V{V _callee63758=this->_v_61288_seedOf.get();return j::call(_callee63758,j::Args{this->_literals[174],j::get(_v_61959_opts,this->_literals[94])});})();
_v_61963_streak.get()=(j::truth(([&]()->V{V _lhs63759=_v_61960_lean.get();V _rhs63760=V(0.0);return j::binary(">",_lhs63759,_rhs63760);})())?this->_literals[175]:(j::truth(([&]()->V{V _lhs63761=_v_61960_lean.get();V _rhs63762=V(0.0);return j::binary("<",_lhs63761,_rhs63762);})())?this->_literals[176]:this->_literals[177]));
return j::function([=](const j::Args &_args_fn61964,const V &_receiver_fn61964,const V &_self_fn61964) mutable ->V{
V _v_61965_x;
V _v_61966_y;
V _v_61967_t;
V _v_61968_at;
_v_61965_x=_args_fn61964[0];
_v_61966_y=_args_fn61964[1];
_v_61967_t=_args_fn61964[2];
_v_61968_at=_args_fn61964[3];
{
V _v_61969_row;
V _v_61970_col;
V _v_61971_best;
_v_61969_row=([&]()->V{V _receiver63763=_v_61958_k.get();V _method63764=this->_literals[62];V _method=j::get(_receiver63763,_method63764);j::Args _params63765=j::Args{_v_61966_y,_v_61968_at};return j::call(_method,_params63765,_receiver63763);})();
_v_61970_col=([&]()->V{V _number63773=([&]()->V{V _lhs63774=([&]()->V{V _receiver63776=_v_61958_k.get();V _method63777=this->_literals[60];V _method=j::get(_receiver63776,_method63777);j::Args _params63778=j::Args{_v_61965_x,_v_61968_at};return j::call(_method,_params63778,_receiver63776);})();V _rhs63775=([&]()->V{V _lhs63779=_v_61960_lean.get();V _rhs63780=_v_61969_row;return V(j::number(_lhs63779)*j::number(_rhs63780));})();return V(j::number(_lhs63774)-j::number(_rhs63775));})();return V(std::floor(j::number(_number63773)));})();
_v_61971_best=V(0.0);
{V _v_61972_i;
_v_61972_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs63781=_v_61972_i;V _rhs63782=V(2.0);return j::binary("<",_lhs63781,_rhs63782);})());(void)(j::increment(_v_61972_i,1,false))){
V _v_61973_falls;
V _v_61974_len;
V _v_61975_head;
V _v_61976_d;
if(j::truth(([&]()->V{V _lhs63783=([&]()->V{V _callee63785=this->_v_61271_hash.get();return j::call(_callee63785,j::Args{_v_61970_col,_v_61972_i,_v_61962_seed.get()});})();V _rhs63784=_v_61961_share.get();return j::binary(">=",_lhs63783,_rhs63784);})())){continue;
}
_v_61973_falls=(j::truth(j::get(_v_61958_k.get(),this->_literals[39]))?([&]()->V{V _lhs63786=V(4.0);V _rhs63787=([&]()->V{V _number63791=([&]()->V{V _lhs63792=([&]()->V{V _callee63794=this->_v_61271_hash.get();return j::call(_callee63794,j::Args{_v_61970_col,_v_61972_i,_v_61962_seed.get(),V(1.0)});})();V _rhs63793=V(3.0);return V(j::number(_lhs63792)*j::number(_rhs63793));})();return V(std::floor(j::number(_number63791)));})();return j::binary("+",_lhs63786,_rhs63787);})():V(0.0));
_v_61974_len=([&]()->V{V _lhs63795=V(2.0);V _rhs63796=([&]()->V{V _lhs63797=([&]()->V{V _callee63799=this->_v_61271_hash.get();return j::call(_callee63799,j::Args{_v_61970_col,_v_61972_i,_v_61962_seed.get(),V(2.0)});})();V _rhs63798=V(4.0);return V(j::number(_lhs63797)*j::number(_rhs63798));})();return j::binary("+",_lhs63795,_rhs63796);})();
_v_61975_head=([&]()->V{V _lhs63800=([&]()->V{V _lhs63802=([&]()->V{V _callee63812=this->_v_61270_fract.get();return j::call(_callee63812,j::Args{([&]()->V{V _lhs63804=([&]()->V{V _callee63806=this->_v_61271_hash.get();return j::call(_callee63806,j::Args{_v_61970_col,_v_61972_i,_v_61962_seed.get(),V(3.0)});})();V _rhs63805=([&]()->V{V _lhs63807=_v_61973_falls;V _rhs63808=([&]()->V{V _receiver63809=_v_61958_k.get();V _method63810=this->_literals[47];V _method=j::get(_receiver63809,_method63810);j::Args _params63811=j::Args{_v_61967_t};return j::call(_method,_params63811,_receiver63809);})();return V(j::number(_lhs63807)*j::number(_rhs63808));})();return j::binary("+",_lhs63804,_rhs63805);})()});})();V _rhs63803=([&]()->V{V _lhs63813=j::get(_v_61968_at,this->_literals[1]);V _rhs63814=([&]()->V{V _lhs63815=_v_61974_len;V _rhs63816=V(2.0);return V(j::number(_lhs63815)*j::number(_rhs63816));})();return j::binary("+",_lhs63813,_rhs63814);})();return V(j::number(_lhs63802)*j::number(_rhs63803));})();V _rhs63801=_v_61974_len;return V(j::number(_lhs63800)-j::number(_rhs63801));})();
_v_61976_d=([&]()->V{V _lhs63817=_v_61975_head;V _rhs63818=_v_61969_row;return V(j::number(_lhs63817)-j::number(_rhs63818));})();
if(j::truth(([&]()->V{V _logical63819=([&]()->V{V _lhs63820=_v_61976_d;V _rhs63821=V(0.0);return j::binary(">=",_lhs63820,_rhs63821);})();return j::truth(_logical63819)?([&]()->V{V _lhs63822=_v_61976_d;V _rhs63823=_v_61974_len;return j::binary("<",_lhs63822,_rhs63823);})():_logical63819;})())){(void)((_v_61971_best=([&]()->V{V _receiver63831=j::builtin("Math");V _method63832=this->_literals[113];V _method=j::get(_receiver63831,_method63832);j::Args _params63833=j::Args{_v_61971_best,([&]()->V{V _lhs63825=V(1.0);V _rhs63826=([&]()->V{V _lhs63827=_v_61976_d;V _rhs63828=_v_61974_len;return V(j::number(_lhs63827)/j::number(_rhs63828));})();return V(j::number(_lhs63825)-j::number(_rhs63826));})()};return j::call(_method,_params63833,_receiver63831);})()));
}

}
}
if(j::truth(([&]()->V{V _lhs63834=_v_61971_best;V _rhs63835=V(0.0);return j::binary(">",_lhs63834,_rhs63835);})())){(void)(([&]()->V{V _base63837=_v_61968_at;V _key63838=this->_literals[167];V _assign63836=_v_61963_streak.get();return j::put(_base63837,_key63838,_assign63836);})());
}
return _v_61971_best;

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_61977_snowfall.get()=j::function([=](const j::Args &_args_fn61978,const V &_receiver_fn61978,const V &_self_fn61978) mutable ->V{
V _v_61979_o;
_v_61979_o=_args_fn61978[0];
{
return ([&]()->V{V _callee63964=this->_v_61631_look.get();return j::call(_callee63964,j::Args{this->_literals[178],_v_61979_o,([&]()->V{V _obj63840=j::object();j::put(_obj63840,this->_literals[37],([&]()->V{j::Args _array63841;_array63841.push_back(this->_literals[163]);_array63841.push_back(this->_literals[94]);return j::array(std::move(_array63841));})());j::put(_obj63840,this->_literals[45],this->_literals[179]);j::put(_obj63840,this->_literals[66],this->_literals[180]);j::put(_obj63840,this->_literals[67],this->_literals[181]);j::put(_obj63840,this->_literals[69],V(false));j::put(_obj63840,this->_literals[39],V(16.0));return _obj63840;})(),j::function([=](const j::Args &_args_fn61980,const V &_receiver_fn61980,const V &_self_fn61980) mutable ->V{
j::Cell _v_61981_k;
V _v_61982_opts;
_v_61981_k.get()=_args_fn61980[0];
_v_61982_opts=_args_fn61980[1];
{
j::Cell _v_61983_share;
j::Cell _v_61984_seed;
_v_61983_share.get()=([&]()->V{V _receiver63847=j::builtin("Math");V _method63848=this->_literals[95];V _method=j::get(_receiver63847,_method63848);j::Args _params63849=j::Args{V(1.0),([&]()->V{V _lhs63842=V(0.3);V _rhs63843=([&]()->V{V _callee63844=this->_v_61311_densityOf.get();return j::call(_callee63844,j::Args{this->_literals[182],j::get(_v_61982_opts,this->_literals[163])});})();return V(j::number(_lhs63842)*j::number(_rhs63843));})()};return j::call(_method,_params63849,_receiver63847);})();
_v_61984_seed.get()=([&]()->V{V _callee63850=this->_v_61288_seedOf.get();return j::call(_callee63850,j::Args{this->_literals[182],j::get(_v_61982_opts,this->_literals[94])});})();
return j::function([=](const j::Args &_args_fn61985,const V &_receiver_fn61985,const V &_self_fn61985) mutable ->V{
V _v_61986_x;
V _v_61987_y;
V _v_61988_t;
V _v_61989_at;
_v_61986_x=_args_fn61985[0];
_v_61987_y=_args_fn61985[1];
_v_61988_t=_args_fn61985[2];
_v_61989_at=_args_fn61985[3];
{
V _v_61990_cx;
V _v_61991_cy;
V _v_61992_p;
V _v_61993_best;
_v_61990_cx=([&]()->V{V _receiver63851=_v_61981_k.get();V _method63852=this->_literals[60];V _method=j::get(_receiver63851,_method63852);j::Args _params63853=j::Args{_v_61986_x,_v_61989_at};return j::call(_method,_params63853,_receiver63851);})();
_v_61991_cy=([&]()->V{V _receiver63854=_v_61981_k.get();V _method63855=this->_literals[62];V _method=j::get(_receiver63854,_method63855);j::Args _params63856=j::Args{_v_61987_y,_v_61989_at};return j::call(_method,_params63856,_receiver63854);})();
_v_61992_p=([&]()->V{V _receiver63857=_v_61981_k.get();V _method63858=this->_literals[47];V _method=j::get(_receiver63857,_method63858);j::Args _params63859=j::Args{_v_61988_t};return j::call(_method,_params63859,_receiver63857);})();
_v_61993_best=V(0.0);
{V _v_61994_lane;
_v_61994_lane=([&]()->V{V _lhs63860=([&]()->V{V _number63862=_v_61990_cx;return V(std::floor(j::number(_number63862)));})();V _rhs63861=V(1.0);return V(j::number(_lhs63860)-j::number(_rhs63861));})();
for(;j::truth(([&]()->V{V _lhs63863=_v_61994_lane;V _rhs63864=([&]()->V{V _lhs63865=([&]()->V{V _number63867=_v_61990_cx;return V(std::floor(j::number(_number63867)));})();V _rhs63866=V(1.0);return j::binary("+",_lhs63865,_rhs63866);})();return j::binary("<=",_lhs63863,_rhs63864);})());(void)(j::increment(_v_61994_lane,1,false))){{V _v_61995_i;
_v_61995_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs63868=_v_61995_i;V _rhs63869=V(2.0);return j::binary("<",_lhs63868,_rhs63869);})());(void)(j::increment(_v_61995_i,1,false))){
V _v_61996_depth;
V _v_61997_falls;
V _v_61998_fy;
V _v_61999_fx;
if(j::truth(([&]()->V{V _lhs63870=([&]()->V{V _callee63872=this->_v_61271_hash.get();return j::call(_callee63872,j::Args{_v_61994_lane,_v_61995_i,_v_61984_seed.get()});})();V _rhs63871=_v_61983_share.get();return j::binary(">=",_lhs63870,_rhs63871);})())){continue;
}
_v_61996_depth=([&]()->V{V _callee63873=this->_v_61271_hash.get();return j::call(_callee63873,j::Args{_v_61994_lane,_v_61995_i,_v_61984_seed.get(),V(1.0)});})();
_v_61997_falls=(j::truth(j::get(_v_61981_k.get(),this->_literals[39]))?([&]()->V{V _lhs63874=V(1.0);V _rhs63875=([&]()->V{V _number63878=([&]()->V{V _lhs63879=_v_61996_depth;V _rhs63880=V(3.99);return V(j::number(_lhs63879)*j::number(_rhs63880));})();return V(std::floor(j::number(_number63878)));})();return j::binary("+",_lhs63874,_rhs63875);})():V(0.0));
_v_61998_fy=([&]()->V{V _lhs63881=([&]()->V{V _lhs63883=([&]()->V{V _callee63890=this->_v_61270_fract.get();return j::call(_callee63890,j::Args{([&]()->V{V _lhs63885=([&]()->V{V _callee63887=this->_v_61271_hash.get();return j::call(_callee63887,j::Args{_v_61994_lane,_v_61995_i,_v_61984_seed.get(),V(2.0)});})();V _rhs63886=([&]()->V{V _lhs63888=_v_61997_falls;V _rhs63889=_v_61992_p;return V(j::number(_lhs63888)*j::number(_rhs63889));})();return j::binary("+",_lhs63885,_rhs63886);})()});})();V _rhs63884=([&]()->V{V _lhs63891=j::get(_v_61989_at,this->_literals[1]);V _rhs63892=V(2.0);return j::binary("+",_lhs63891,_rhs63892);})();return V(j::number(_lhs63883)*j::number(_rhs63884));})();V _rhs63882=V(1.0);return V(j::number(_lhs63881)-j::number(_rhs63882));})();
_v_61999_fx=([&]()->V{V _lhs63893=([&]()->V{V _lhs63895=_v_61994_lane;V _rhs63896=V(0.5);return j::binary("+",_lhs63895,_rhs63896);})();V _rhs63894=([&]()->V{V _lhs63897=V(0.9);V _rhs63898=([&]()->V{V _number63913=([&]()->V{V _lhs63914=this->_v_61267_TAU.get();V _rhs63915=([&]()->V{V _lhs63916=([&]()->V{V _lhs63918=_v_61992_p;V _rhs63919=([&]()->V{V _lhs63920=V(1.0);V _rhs63921=([&]()->V{V _number63924=([&]()->V{V _lhs63925=_v_61996_depth;V _rhs63926=V(2.0);return V(j::number(_lhs63925)*j::number(_rhs63926));})();return V(std::floor(j::number(_number63924)));})();return j::binary("+",_lhs63920,_rhs63921);})();return V(j::number(_lhs63918)*j::number(_rhs63919));})();V _rhs63917=([&]()->V{V _callee63927=this->_v_61271_hash.get();return j::call(_callee63927,j::Args{_v_61994_lane,_v_61995_i,_v_61984_seed.get(),V(3.0)});})();return j::binary("+",_lhs63916,_rhs63917);})();return V(j::number(_lhs63914)*j::number(_rhs63915));})();return V(std::sin(j::number(_number63913)));})();return V(j::number(_lhs63897)*j::number(_rhs63898));})();return j::binary("+",_lhs63893,_rhs63894);})();
if(j::truth(([&]()->V{V _logical63928=([&]()->V{V _lhs63929=([&]()->V{V _number63933=([&]()->V{V _lhs63934=_v_61999_fx;V _rhs63935=_v_61990_cx;return V(j::number(_lhs63934)-j::number(_rhs63935));})();return V(std::fabs(j::number(_number63933)));})();V _rhs63930=V(0.5);return j::binary("<",_lhs63929,_rhs63930);})();return j::truth(_logical63928)?([&]()->V{V _lhs63936=([&]()->V{V _number63940=([&]()->V{V _lhs63941=_v_61998_fy;V _rhs63942=_v_61991_cy;return V(j::number(_lhs63941)-j::number(_rhs63942));})();return V(std::fabs(j::number(_number63940)));})();V _rhs63937=V(0.5);return j::binary("<",_lhs63936,_rhs63937);})():_logical63928;})())){(void)((_v_61993_best=([&]()->V{V _receiver63950=j::builtin("Math");V _method63951=this->_literals[113];V _method=j::get(_receiver63950,_method63951);j::Args _params63952=j::Args{_v_61993_best,([&]()->V{V _lhs63944=V(0.3);V _rhs63945=([&]()->V{V _lhs63946=V(0.7);V _rhs63947=_v_61996_depth;return V(j::number(_lhs63946)*j::number(_rhs63947));})();return j::binary("+",_lhs63944,_rhs63945);})()};return j::call(_method,_params63952,_receiver63950);})()));
}

}
}
}}
if(j::truth(([&]()->V{V _lhs63953=_v_61993_best;V _rhs63954=V(0.0);return j::binary(">",_lhs63953,_rhs63954);})())){(void)(([&]()->V{V _base63956=_v_61989_at;V _key63957=this->_literals[167];V _assign63955=(j::truth(([&]()->V{V _lhs63958=_v_61993_best;V _rhs63959=V(0.5);return j::binary("<",_lhs63958,_rhs63959);})())?this->_literals[183]:(j::truth(([&]()->V{V _lhs63960=_v_61993_best;V _rhs63961=V(0.7);return j::binary("<",_lhs63960,_rhs63961);})())?this->_literals[184]:(j::truth(([&]()->V{V _lhs63962=_v_61993_best;V _rhs63963=V(0.85);return j::binary("<",_lhs63962,_rhs63963);})())?this->_literals[185]:this->_literals[186])));return j::put(_base63956,_key63957,_assign63955);})());
}
return _v_61993_best;

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_62001_matrix.get()=j::function([=](const j::Args &_args_fn62002,const V &_receiver_fn62002,const V &_self_fn62002) mutable ->V{
V _v_62003_o;
_v_62003_o=_args_fn62002[0];
{
return ([&]()->V{V _callee64079=this->_v_61631_look.get();return j::call(_callee64079,j::Args{this->_literals[187],_v_62003_o,([&]()->V{V _obj63965=j::object();j::put(_obj63965,this->_literals[37],([&]()->V{j::Args _array63966;_array63966.push_back(this->_literals[163]);_array63966.push_back(this->_literals[94]);return j::array(std::move(_array63966));})());j::put(_obj63965,this->_literals[45],this->_literals[188]);j::put(_obj63965,this->_literals[66],this->_literals[187]);j::put(_obj63965,this->_literals[67],this->_literals[189]);j::put(_obj63965,this->_literals[69],V(false));j::put(_obj63965,this->_literals[39],V(8.0));return _obj63965;})(),j::function([=](const j::Args &_args_fn62004,const V &_receiver_fn62004,const V &_self_fn62004) mutable ->V{
j::Cell _v_62005_k;
V _v_62006_opts;
_v_62005_k.get()=_args_fn62004[0];
_v_62006_opts=_args_fn62004[1];
{
j::Cell _v_62007_share;
j::Cell _v_62008_seed;
j::Cell _v_62009_ticks;
_v_62007_share.get()=([&]()->V{V _receiver63972=j::builtin("Math");V _method63973=this->_literals[95];V _method=j::get(_receiver63972,_method63973);j::Args _params63974=j::Args{V(1.0),([&]()->V{V _lhs63967=V(0.55);V _rhs63968=([&]()->V{V _callee63969=this->_v_61311_densityOf.get();return j::call(_callee63969,j::Args{this->_literals[190],j::get(_v_62006_opts,this->_literals[163])});})();return V(j::number(_lhs63967)*j::number(_rhs63968));})()};return j::call(_method,_params63974,_receiver63972);})();
_v_62008_seed.get()=([&]()->V{V _callee63975=this->_v_61288_seedOf.get();return j::call(_callee63975,j::Args{this->_literals[190],j::get(_v_62006_opts,this->_literals[94])});})();
_v_62009_ticks.get()=(j::truth(j::get(_v_62005_k.get(),this->_literals[39]))?([&]()->V{V _receiver63983=j::builtin("Math");V _method63984=this->_literals[113];V _method=j::get(_receiver63983,_method63984);j::Args _params63985=j::Args{V(1.0),([&]()->V{V _number63978=([&]()->V{V _lhs63979=j::get(_v_62005_k.get(),this->_literals[39]);V _rhs63980=V(8.0);return V(j::number(_lhs63979)*j::number(_rhs63980));})();return V(std::floor(j::number(_number63978)+.5));})()};return j::call(_method,_params63985,_receiver63983);})():V(0.0));
return j::function([=](const j::Args &_args_fn62010,const V &_receiver_fn62010,const V &_self_fn62010) mutable ->V{
V _v_62011_x;
V _v_62012_y;
V _v_62013_t;
V _v_62014_at;
_v_62011_x=_args_fn62010[0];
_v_62012_y=_args_fn62010[1];
_v_62013_t=_args_fn62010[2];
_v_62014_at=_args_fn62010[3];
{
V _v_62015_col;
V _v_62016_row;
V _v_62017_falls;
V _v_62018_len;
V _v_62019_p;
V _v_62020_head;
V _v_62021_d;
V _v_62022_tick;
_v_62015_col=([&]()->V{V _number63989=([&]()->V{V _receiver63990=_v_62005_k.get();V _method63991=this->_literals[60];V _method=j::get(_receiver63990,_method63991);j::Args _params63992=j::Args{_v_62011_x,_v_62014_at};return j::call(_method,_params63992,_receiver63990);})();return V(std::floor(j::number(_number63989)));})();
_v_62016_row=([&]()->V{V _number63996=([&]()->V{V _receiver63997=_v_62005_k.get();V _method63998=this->_literals[62];V _method=j::get(_receiver63997,_method63998);j::Args _params63999=j::Args{_v_62012_y,_v_62014_at};return j::call(_method,_params63999,_receiver63997);})();return V(std::floor(j::number(_number63996)));})();
if(j::truth(([&]()->V{V _lhs64000=([&]()->V{V _callee64002=this->_v_61271_hash.get();return j::call(_callee64002,j::Args{_v_62015_col,_v_62008_seed.get()});})();V _rhs64001=_v_62007_share.get();return j::binary(">=",_lhs64000,_rhs64001);})())){return V(0.0);
}
_v_62017_falls=(j::truth(j::get(_v_62005_k.get(),this->_literals[39]))?([&]()->V{V _lhs64003=V(1.0);V _rhs64004=([&]()->V{V _number64008=([&]()->V{V _lhs64009=([&]()->V{V _callee64011=this->_v_61271_hash.get();return j::call(_callee64011,j::Args{_v_62015_col,_v_62008_seed.get(),V(1.0)});})();V _rhs64010=V(3.99);return V(j::number(_lhs64009)*j::number(_rhs64010));})();return V(std::floor(j::number(_number64008)));})();return j::binary("+",_lhs64003,_rhs64004);})():V(0.0));
_v_62018_len=([&]()->V{V _lhs64012=V(6.0);V _rhs64013=([&]()->V{V _lhs64014=([&]()->V{V _callee64016=this->_v_61271_hash.get();return j::call(_callee64016,j::Args{_v_62015_col,_v_62008_seed.get(),V(2.0)});})();V _rhs64015=V(12.0);return V(j::number(_lhs64014)*j::number(_rhs64015));})();return j::binary("+",_lhs64012,_rhs64013);})();
_v_62019_p=([&]()->V{V _receiver64017=_v_62005_k.get();V _method64018=this->_literals[47];V _method=j::get(_receiver64017,_method64018);j::Args _params64019=j::Args{_v_62013_t};return j::call(_method,_params64019,_receiver64017);})();
_v_62020_head=([&]()->V{V _lhs64020=([&]()->V{V _number64032=([&]()->V{V _lhs64033=([&]()->V{V _callee64040=this->_v_61270_fract.get();return j::call(_callee64040,j::Args{([&]()->V{V _lhs64035=([&]()->V{V _callee64037=this->_v_61271_hash.get();return j::call(_callee64037,j::Args{_v_62015_col,_v_62008_seed.get(),V(3.0)});})();V _rhs64036=([&]()->V{V _lhs64038=_v_62017_falls;V _rhs64039=_v_62019_p;return V(j::number(_lhs64038)*j::number(_rhs64039));})();return j::binary("+",_lhs64035,_rhs64036);})()});})();V _rhs64034=([&]()->V{V _lhs64041=j::get(_v_62014_at,this->_literals[1]);V _rhs64042=_v_62018_len;return j::binary("+",_lhs64041,_rhs64042);})();return V(j::number(_lhs64033)*j::number(_rhs64034));})();return V(std::floor(j::number(_number64032)));})();V _rhs64021=V(1.0);return V(j::number(_lhs64020)-j::number(_rhs64021));})();
_v_62021_d=([&]()->V{V _lhs64043=_v_62020_head;V _rhs64044=_v_62016_row;return V(j::number(_lhs64043)-j::number(_rhs64044));})();
if(j::truth(([&]()->V{V _logical64045=([&]()->V{V _lhs64046=_v_62021_d;V _rhs64047=V(0.0);return j::binary("<",_lhs64046,_rhs64047);})();return !j::truth(_logical64045)?([&]()->V{V _lhs64048=_v_62021_d;V _rhs64049=_v_62018_len;return j::binary(">=",_lhs64048,_rhs64049);})():_logical64045;})())){return V(0.0);
}
_v_62022_tick=([&]()->V{V _number64052=([&]()->V{V _lhs64053=_v_62019_p;V _rhs64054=_v_62009_ticks.get();return V(j::number(_lhs64053)*j::number(_rhs64054));})();return V(std::floor(j::number(_number64052)));})();
(void)(([&]()->V{V _base64056=_v_62014_at;V _key64057=this->_literals[167];V _assign64055=j::get(this->_v_62000_GLYPHS.get(),([&]()->V{V _number64063=([&]()->V{V _lhs64064=([&]()->V{V _callee64068=this->_v_61271_hash.get();return j::call(_callee64068,j::Args{_v_62015_col,_v_62016_row,([&]()->V{V _lhs64066=_v_62008_seed.get();V _rhs64067=_v_62022_tick;return j::binary("+",_lhs64066,_rhs64067);})()});})();V _rhs64065=j::get(this->_v_62000_GLYPHS.get(),this->_literals[46]);return V(j::number(_lhs64064)*j::number(_rhs64065));})();return V(std::floor(j::number(_number64063)));})());return j::put(_base64056,_key64057,_assign64055);})());
return (j::truth(([&]()->V{V _lhs64069=_v_62021_d;V _rhs64070=V(0.0);return V(j::equal(_lhs64069,_rhs64070,true));})())?V(1.0):([&]()->V{V _lhs64071=([&]()->V{V _lhs64073=V(0.85);V _rhs64074=([&]()->V{V _lhs64075=V(1.0);V _rhs64076=([&]()->V{V _lhs64077=_v_62021_d;V _rhs64078=_v_62018_len;return V(j::number(_lhs64077)/j::number(_rhs64078));})();return V(j::number(_lhs64075)-j::number(_rhs64076));})();return V(j::number(_lhs64073)*j::number(_rhs64074));})();V _rhs64072=V(0.1);return j::binary("+",_lhs64071,_rhs64072);})());

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_62023_galaxy.get()=j::function([=](const j::Args &_args_fn62024,const V &_receiver_fn62024,const V &_self_fn62024) mutable ->V{
V _v_62025_o;
_v_62025_o=_args_fn62024[0];
{
return ([&]()->V{V _callee64194=this->_v_61631_look.get();return j::call(_callee64194,j::Args{this->_literals[191],_v_62025_o,([&]()->V{V _obj64080=j::object();j::put(_obj64080,this->_literals[37],([&]()->V{j::Args _array64081;_array64081.push_back(this->_literals[124]);_array64081.push_back(this->_literals[94]);return j::array(std::move(_array64081));})());j::put(_obj64080,this->_literals[45],this->_literals[192]);j::put(_obj64080,this->_literals[66],this->_literals[128]);j::put(_obj64080,this->_literals[67],this->_literals[193]);j::put(_obj64080,this->_literals[69],V(false));j::put(_obj64080,this->_literals[39],V(16.0));return _obj64080;})(),j::function([=](const j::Args &_args_fn62026,const V &_receiver_fn62026,const V &_self_fn62026) mutable ->V{
j::Cell _v_62027_k;
V _v_62028_opts;
_v_62027_k.get()=_args_fn62026[0];
_v_62028_opts=_args_fn62026[1];
{
j::Cell _v_62029_arms;
j::Cell _v_62030_seed;
j::Cell _v_62031_dust;
_v_62029_arms.get()=([&]()->V{V _logical64082=j::get(_v_62028_opts,this->_literals[124]);return j::nullish(_logical64082)?V(2.0):_logical64082;})();
if(j::truth(([&]()->V{V _logical64083=([&]()->V{V _logical64084=j::unary("!",([&]()->V{V _receiver64085=j::builtin("Number");V _method64086=this->_literals[27];V _method=j::get(_receiver64085,_method64086);j::Args _params64087=j::Args{_v_62029_arms.get()};return j::call(_method,_params64087,_receiver64085);})());return !j::truth(_logical64084)?([&]()->V{V _lhs64088=_v_62029_arms.get();V _rhs64089=V(1.0);return j::binary("<",_lhs64088,_rhs64089);})():_logical64084;})();return !j::truth(_logical64083)?([&]()->V{V _lhs64090=_v_62029_arms.get();V _rhs64091=V(8.0);return j::binary(">",_lhs64090,_rhs64091);})():_logical64083;})())){(void)(([&]()->V{V _callee64094=this->_v_61269_fail.get();return j::call(_callee64094,j::Args{([&]()->V{std::u16string _text64092;_text64092+=u"galaxy()'s arms takes a whole number from 1 to 8, not ";_text64092+=j::string(([&]()->V{V _callee64093=this->_v_61289_show.get();return j::call(_callee64093,j::Args{_v_62029_arms.get()});})());_text64092+=u"";return V(std::move(_text64092));})()});})());
}
_v_62030_seed.get()=([&]()->V{V _callee64095=this->_v_61288_seedOf.get();return j::call(_callee64095,j::Args{this->_literals[194],j::get(_v_62028_opts,this->_literals[94])});})();
_v_62031_dust.get()=([&]()->V{V _callee64098=this->_v_61278_noise.get();return j::call(_callee64098,j::Args{([&]()->V{V _obj64096=j::object();j::put(_obj64096,this->_literals[51],([&]()->V{j::Args _array64097;_array64097.push_back(V(0.25));_array64097.push_back(V(0.25));return j::array(std::move(_array64097));})());j::put(_obj64096,this->_literals[87],V(3.0));j::put(_obj64096,this->_literals[94],_v_62030_seed.get());return _obj64096;})()});})();
return j::function([=](const j::Args &_args_fn62032,const V &_receiver_fn62032,const V &_self_fn62032) mutable ->V{
V _v_62033_x;
V _v_62034_y;
V _v_62035_t;
V _v_62036_at;
_v_62033_x=_args_fn62032[0];
_v_62034_y=_args_fn62032[1];
_v_62035_t=_args_fn62032[2];
_v_62036_at=_args_fn62032[3];
{
V _v_62037_X;
V _v_62038_Y;
V _v_62039_r;
V _v_62040_a;
V _v_62041_arm;
V _v_62042_disc;
V _v_62043_core;
V _v_62044_star;
_v_62037_X=([&]()->V{V _lhs64099=_v_62033_x;V _rhs64100=j::get(_v_62027_k.get(),this->_literals[38]);return V(j::number(_lhs64099)/j::number(_rhs64100));})();
_v_62038_Y=([&]()->V{V _lhs64101=([&]()->V{V _lhs64103=_v_62034_y;V _rhs64104=j::get(_v_62027_k.get(),this->_literals[38]);return V(j::number(_lhs64103)/j::number(_rhs64104));})();V _rhs64102=V(1.8);return V(j::number(_lhs64101)*j::number(_rhs64102));})();
_v_62039_r=([&]()->V{V _lhs64105=([&]()->V{V _number64107=_v_62037_X;V _number64108=_v_62038_Y;return V(std::hypot(j::number(_number64107),j::number(_number64108)));})();V _rhs64106=V(0.000001);return j::binary("+",_lhs64105,_rhs64106);})();
_v_62040_a=([&]()->V{V _lhs64109=([&]()->V{V _number64111=_v_62038_Y;V _number64112=_v_62037_X;return V(std::atan2(j::number(_number64111),j::number(_number64112)));})();V _rhs64110=([&]()->V{V _lhs64113=([&]()->V{V _lhs64115=this->_v_61267_TAU.get();V _rhs64116=([&]()->V{V _receiver64117=_v_62027_k.get();V _method64118=this->_literals[47];V _method=j::get(_receiver64117,_method64118);j::Args _params64119=j::Args{_v_62035_t};return j::call(_method,_params64119,_receiver64117);})();return V(j::number(_lhs64115)*j::number(_rhs64116));})();V _rhs64114=_v_62029_arms.get();return V(j::number(_lhs64113)/j::number(_rhs64114));})();return V(j::number(_lhs64109)-j::number(_rhs64110));})();
_v_62041_arm=([&]()->V{V _lhs64120=V(0.5);V _rhs64121=([&]()->V{V _lhs64122=V(0.5);V _rhs64123=([&]()->V{V _number64131=([&]()->V{V _lhs64132=([&]()->V{V _lhs64134=_v_62029_arms.get();V _rhs64135=_v_62040_a;return V(j::number(_lhs64134)*j::number(_rhs64135));})();V _rhs64133=([&]()->V{V _lhs64136=([&]()->V{V _number64138=_v_62039_r;return V(std::log(j::number(_number64138)));})();V _rhs64137=V(3.2);return V(j::number(_lhs64136)*j::number(_rhs64137));})();return j::binary("+",_lhs64132,_rhs64133);})();return V(std::cos(j::number(_number64131)));})();return V(j::number(_lhs64122)*j::number(_rhs64123));})();return j::binary("+",_lhs64120,_rhs64121);})();
_v_62042_disc=([&]()->V{V _number64141=([&]()->V{V _lhs64142=j::unary("-",_v_62039_r);V _rhs64143=V(2.1);return V(j::number(_lhs64142)*j::number(_rhs64143));})();return V(std::exp(j::number(_number64141)));})();
_v_62043_core=([&]()->V{V _lhs64144=V(1.1);V _rhs64145=([&]()->V{V _number64150=([&]()->V{V _lhs64151=([&]()->V{V _lhs64153=j::unary("-",_v_62039_r);V _rhs64154=_v_62039_r;return V(j::number(_lhs64153)*j::number(_rhs64154));})();V _rhs64152=V(16.0);return V(j::number(_lhs64151)*j::number(_rhs64152));})();return V(std::exp(j::number(_number64150)));})();return V(j::number(_lhs64144)*j::number(_rhs64145));})();
_v_62044_star=(j::truth(([&]()->V{V _lhs64155=([&]()->V{V _callee64171=this->_v_61271_hash.get();return j::call(_callee64171,j::Args{([&]()->V{V _number64160=([&]()->V{V _receiver64161=_v_62027_k.get();V _method64162=this->_literals[60];V _method=j::get(_receiver64161,_method64162);j::Args _params64163=j::Args{_v_62033_x,_v_62036_at};return j::call(_method,_params64163,_receiver64161);})();return V(std::floor(j::number(_number64160)));})(),([&]()->V{V _number64167=([&]()->V{V _receiver64168=_v_62027_k.get();V _method64169=this->_literals[62];V _method=j::get(_receiver64168,_method64169);j::Args _params64170=j::Args{_v_62034_y,_v_62036_at};return j::call(_method,_params64170,_receiver64168);})();return V(std::floor(j::number(_number64167)));})(),_v_62030_seed.get()});})();V _rhs64156=V(0.012);return j::binary("<",_lhs64155,_rhs64156);})())?V(0.2):V(0.0));
return ([&]()->V{V _callee64193=this->_v_61268_clamp.get();return j::call(_callee64193,j::Args{([&]()->V{V _lhs64172=([&]()->V{V _lhs64174=([&]()->V{V _lhs64176=([&]()->V{V _lhs64178=([&]()->V{V _lhs64180=_v_62042_disc;V _rhs64181=([&]()->V{V _lhs64182=V(0.15);V _rhs64183=([&]()->V{V _lhs64184=V(0.85);V _rhs64185=([&]()->V{V _lhs64186=_v_62041_arm;V _rhs64187=V(3.0);return V(std::pow(j::number(_lhs64186),j::number(_rhs64187)));})();return V(j::number(_lhs64184)*j::number(_rhs64185));})();return j::binary("+",_lhs64182,_rhs64183);})();return V(j::number(_lhs64180)*j::number(_rhs64181));})();V _rhs64179=([&]()->V{V _lhs64188=V(0.55);V _rhs64189=([&]()->V{V _lhs64190=V(0.9);V _rhs64191=([&]()->V{V _callee64192=_v_62031_dust.get();return j::call(_callee64192,j::Args{_v_62037_X,_v_62038_Y});})();return V(j::number(_lhs64190)*j::number(_rhs64191));})();return j::binary("+",_lhs64188,_rhs64189);})();return V(j::number(_lhs64178)*j::number(_rhs64179));})();V _rhs64177=V(1.5);return V(j::number(_lhs64176)*j::number(_rhs64177));})();V _rhs64175=_v_62043_core;return j::binary("+",_lhs64174,_rhs64175);})();V _rhs64173=_v_62044_star;return j::binary("+",_lhs64172,_rhs64173);})()});})();

}

return V{};
},4);

}

return V{};
},2)});})();

}

return V{};
},1);
this->_v_62045_sun.get()=j::function([=](const j::Args &_args_fn62046,const V &_receiver_fn62046,const V &_self_fn62046) mutable ->V{
V _v_62047_o;
_v_62047_o=_args_fn62046[0];
{
return ([&]()->V{V _callee64286=this->_v_61631_look.get();return j::call(_callee64286,j::Args{this->_literals[195],_v_62047_o,([&]()->V{V _obj64195=j::object();j::put(_obj64195,this->_literals[37],([&]()->V{j::Args _array64196;_array64196.push_back(this->_literals[196]);return j::array(std::move(_array64196));})());j::put(_obj64195,this->_literals[45],this->_literals[197]);j::put(_obj64195,this->_literals[66],this->_literals[198]);j::put(_obj64195,this->_literals[67],this->_literals[99]);j::put(_obj64195,this->_literals[69],V(false));j::put(_obj64195,this->_literals[39],V(8.0));return _obj64195;})(),j::function([=](const j::Args &_args_fn62048,const V &_receiver_fn62048,const V &_self_fn62048) mutable ->V{
j::Cell _v_62049_k;
V _v_62050_opts;
_v_62049_k.get()=_args_fn62048[0];
_v_62050_opts=_args_fn62048[1];
{
j::Cell _v_62051_count;
j::Cell _v_62052_surface;
_v_62051_count.get()=([&]()->V{V _logical64197=j::get(_v_62050_opts,this->_literals[196]);return j::nullish(_logical64197)?V(12.0):_logical64197;})();
if(j::truth(([&]()->V{V _logical64198=([&]()->V{V _logical64199=j::unary("!",([&]()->V{V _receiver64200=j::builtin("Number");V _method64201=this->_literals[27];V _method=j::get(_receiver64200,_method64201);j::Args _params64202=j::Args{_v_62051_count.get()};return j::call(_method,_params64202,_receiver64200);})());return !j::truth(_logical64199)?([&]()->V{V _lhs64203=_v_62051_count.get();V _rhs64204=V(0.0);return j::binary("<",_lhs64203,_rhs64204);})():_logical64199;})();return !j::truth(_logical64198)?([&]()->V{V _lhs64205=_v_62051_count.get();V _rhs64206=V(48.0);return j::binary(">",_lhs64205,_rhs64206);})():_logical64198;})())){(void)(([&]()->V{V _callee64209=this->_v_61269_fail.get();return j::call(_callee64209,j::Args{([&]()->V{std::u16string _text64207;_text64207+=u"sun()'s rays takes a whole number from 0 to 48, not ";_text64207+=j::string(([&]()->V{V _callee64208=this->_v_61289_show.get();return j::call(_callee64208,j::Args{_v_62051_count.get()});})());_text64207+=u"";return V(std::move(_text64207));})()});})());
}
_v_62052_surface.get()=([&]()->V{V _receiver64212=_v_62049_k.get();V _method64213=this->_literals[48];V _method=j::get(_receiver64212,_method64213);j::Args _params64214=j::Args{([&]()->V{V _obj64210=j::object();j::put(_obj64210,this->_literals[51],([&]()->V{j::Args _array64211;_array64211.push_back(V(0.12));_array64211.push_back(V(0.12));return j::array(std::move(_array64211));})());j::put(_obj64210,this->_literals[87],V(2.0));j::put(_obj64210,this->_literals[50],V(1.0));return _obj64210;})()};return j::call(_method,_params64214,_receiver64212);})();
return j::function([=](const j::Args &_args_fn62053,const V &_receiver_fn62053,const V &_self_fn62053) mutable ->V{
V _v_62054_x;
V _v_62055_y;
V _v_62056_t;
_v_62054_x=_args_fn62053[0];
_v_62055_y=_args_fn62053[1];
_v_62056_t=_args_fn62053[2];
{
V _v_62057_R;
V _v_62058_r;
V _v_62059_out;
V _v_62060_ray;
_v_62057_R=([&]()->V{V _lhs64215=V(0.42);V _rhs64216=j::get(_v_62049_k.get(),this->_literals[38]);return V(j::number(_lhs64215)*j::number(_rhs64216));})();
_v_62058_r=([&]()->V{V _number64217=_v_62054_x;V _number64218=_v_62055_y;return V(std::hypot(j::number(_number64217),j::number(_number64218)));})();
if(j::truth(([&]()->V{V _lhs64219=_v_62058_r;V _rhs64220=_v_62057_R;return j::binary("<",_lhs64219,_rhs64220);})())){return ([&]()->V{V _callee64234=this->_v_61268_clamp.get();return j::call(_callee64234,j::Args{([&]()->V{V _lhs64221=([&]()->V{V _lhs64223=V(0.93);V _rhs64224=([&]()->V{V _lhs64225=V(0.1);V _rhs64226=([&]()->V{V _callee64227=_v_62052_surface.get();return j::call(_callee64227,j::Args{_v_62054_x,_v_62055_y,_v_62056_t});})();return V(j::number(_lhs64225)*j::number(_rhs64226));})();return j::binary("+",_lhs64223,_rhs64224);})();V _rhs64222=([&]()->V{V _lhs64228=V(0.12);V _rhs64229=([&]()->V{V _lhs64230=([&]()->V{V _lhs64232=_v_62058_r;V _rhs64233=_v_62057_R;return V(j::number(_lhs64232)/j::number(_rhs64233));})();V _rhs64231=V(4.0);return V(std::pow(j::number(_lhs64230),j::number(_rhs64231)));})();return V(j::number(_lhs64228)*j::number(_rhs64229));})();return V(j::number(_lhs64221)-j::number(_rhs64222));})()});})();
}
_v_62059_out=([&]()->V{V _lhs64235=_v_62058_r;V _rhs64236=_v_62057_R;return V(j::number(_lhs64235)-j::number(_rhs64236));})();
_v_62060_ray=(j::truth(_v_62051_count.get())?([&]()->V{V _lhs64237=([&]()->V{V _receiver64264=j::builtin("Math");V _method64265=this->_literals[113];V _method=j::get(_receiver64264,_method64265);j::Args _params64266=j::Args{V(0.0),([&]()->V{V _number64250=([&]()->V{V _lhs64251=([&]()->V{V _lhs64253=_v_62051_count.get();V _rhs64254=([&]()->V{V _number64255=_v_62055_y;V _number64256=_v_62054_x;return V(std::atan2(j::number(_number64255),j::number(_number64256)));})();return V(j::number(_lhs64253)*j::number(_rhs64254));})();V _rhs64252=([&]()->V{V _lhs64257=this->_v_61267_TAU.get();V _rhs64258=([&]()->V{V _receiver64259=_v_62049_k.get();V _method64260=this->_literals[47];V _method=j::get(_receiver64259,_method64260);j::Args _params64261=j::Args{_v_62056_t};return j::call(_method,_params64261,_receiver64259);})();return V(j::number(_lhs64257)*j::number(_rhs64258));})();return V(j::number(_lhs64251)-j::number(_rhs64252));})();return V(std::cos(j::number(_number64250)));})()};return j::call(_method,_params64266,_receiver64264);})();V _rhs64238=V(6.0);return V(std::pow(j::number(_lhs64237),j::number(_rhs64238)));})():V(0.0));
return ([&]()->V{V _callee64285=this->_v_61268_clamp.get();return j::call(_callee64285,j::Args{([&]()->V{V _lhs64267=([&]()->V{V _lhs64269=([&]()->V{V _number64273=([&]()->V{V _lhs64274=j::unary("-",_v_62059_out);V _rhs64275=V(9.0);return V(j::number(_lhs64274)*j::number(_rhs64275));})();return V(std::exp(j::number(_number64273)));})();V _rhs64270=V(0.75);return V(j::number(_lhs64269)*j::number(_rhs64270));})();V _rhs64268=([&]()->V{V _lhs64276=([&]()->V{V _lhs64278=_v_62060_ray;V _rhs64279=([&]()->V{V _number64282=([&]()->V{V _lhs64283=j::unary("-",_v_62059_out);V _rhs64284=V(2.6);return V(j::number(_lhs64283)*j::number(_rhs64284));})();return V(std::exp(j::number(_number64282)));})();return V(j::number(_lhs64278)*j::number(_rhs64279));})();V _rhs64277=V(0.75);return V(j::number(_lhs64276)*j::number(_rhs64277));})();return j::binary("+",_lhs64267,_rhs64268);})()});})();

}

return V{};
},3);

}

return V{};
},2)});})();

}

return V{};
},1);
auto &_import1198=j::module("kit/compose");
this->_v_61263_overOf=_import1198.exported("over");
auto &_import1246=j::module("kit/core");
this->_v_61264_Chainable=_import1246.exported("Chainable");
this->_v_61265_EMPTY=_import1246.exported("EMPTY");
this->_v_61266_Surface=_import1246.exported("Surface");
this->_v_61267_TAU=_import1246.exported("TAU");
this->_v_61268_clamp=_import1246.exported("clamp");
this->_v_61269_fail=_import1246.exported("fail");
this->_v_61270_fract=_import1246.exported("fract");
this->_v_61271_hash=_import1246.exported("hash");
this->_v_61272_rampOf=_import1246.exported("ramp");
this->_v_61273_sample=_import1246.exported("sample");
this->_v_61274_smoothstep=_import1246.exported("smoothstep");
auto &_import1411=j::module("kit/field");
this->_v_61275_field=_import1411.exported("field");
auto &_import1464=j::module("kit/materials");
this->_v_61276_area=_import1464.exported("area");
auto &_import1515=j::module("kit/math");
this->_v_61277_lcm=_import1515.exported("lcm");
this->_v_61278_noise=_import1515.exported("noise");
this->_v_61279_twinkle=_import1515.exported("twinkle");
auto &_import1584=j::module("kit/recipes/checks");
this->_v_61280_AMOUNTS=_import1584.exported("AMOUNTS");
this->_v_61281_DENSITIES=_import1584.exported("DENSITIES");
this->_v_61282_HEADINGS=_import1584.exported("HEADINGS");
this->_v_61283_SCALES=_import1584.exported("SCALES");
this->_v_61284_isArea=_import1584.exported("isArea");
this->_v_61285_isPiece=_import1584.exported("isPiece");
this->_v_61286_numberOf=_import1584.exported("numberOf");
this->_v_61287_optionsOf=_import1584.exported("optionsOf");
this->_v_61288_seedOf=_import1584.exported("seedOf");
this->_v_61289_show=_import1584.exported("show");
this->_v_61290_wordsOr=_import1584.exported("sizeOf");
this->_v_61291_speedIn=_import1584.exported("speedOf");
this->_v_61292_wordOf=_import1584.exported("wordOf");
auto &_import1853=j::module("kit/recipes/palettes");
this->_v_61293_schemeOf=_import1853.exported("schemeOf");
this->exports["Look"]=this->_v_61319_Look;
this->exports["below"]=this->_v_61576_below;
this->exports["above"]=this->_v_61585_above;
this->exports["outside"]=this->_v_61594_outside;
this->exports["letters"]=this->_v_61603_letters;
this->exports["look"]=this->_v_61631_look;
this->exports["waves"]=this->_v_61678_waves;
this->exports["sea"]=this->_v_61693_sea;
this->exports["plasma"]=this->_v_61710_plasma;
this->exports["aurora"]=this->_v_61723_aurora;
this->exports["flames"]=this->_v_61738_flames;
this->exports["clouds"]=this->_v_61752_clouds;
this->exports["plume"]=this->_v_61764_plume;
this->exports["ripple"]=this->_v_61780_ripple;
this->exports["rings"]=this->_v_61801_rings;
this->exports["tunnel"]=this->_v_61812_tunnel;
this->exports["spiral"]=this->_v_61825_spiral;
this->exports["vortex"]=this->_v_61836_vortex;
this->exports["stripes"]=this->_v_61850_stripes;
this->exports["checker"]=this->_v_61862_checker;
this->exports["sweep"]=this->_v_61873_sweep;
this->exports["turbulence"]=this->_v_61886_turbulence;
this->exports["marble"]=this->_v_61898_marble;
this->exports["lavaLamp"]=this->_v_61910_lavaLamp;
this->exports["stars"]=this->_v_61935_stars;
this->exports["rainfall"]=this->_v_61954_rainfall;
this->exports["snowfall"]=this->_v_61977_snowfall;
this->exports["matrix"]=this->_v_62001_matrix;
this->exports["galaxy"]=this->_v_62023_galaxy;
this->exports["sun"]=this->_v_62045_sun;
this->_v_61294_wordOr.get()=j::function([=](const j::Args &_args_fn61295,const V &_receiver_fn61295,const V &_self_fn61295) mutable ->V{
V _v_61296_what;
V _v_61297_v;
V _v_61298_words;
V _v_61299_def;
V _v_61300_lo;
V _v_61301_hi;
_v_61296_what=_args_fn61295[0];
_v_61297_v=_args_fn61295[1];
_v_61298_words=_args_fn61295[2];
_v_61299_def=_args_fn61295[3];
_v_61300_lo=_args_fn61295[4];
_v_61301_hi=_args_fn61295[5];
return ([&]()->V{V _callee64287=this->_v_61290_wordsOr.get();return j::call(_callee64287,j::Args{_v_61296_what,_v_61297_v,_v_61298_words,_v_61299_def,_v_61300_lo,_v_61301_hi});})();
return V{};
},6);
this->_v_61302_speedOf.get()=j::function([=](const j::Args &_args_fn61303,const V &_receiver_fn61303,const V &_self_fn61303) mutable ->V{
V _v_61304_what;
V _v_61305_v;
_v_61304_what=_args_fn61303[0];
_v_61305_v=_args_fn61303[1];
return ([&]()->V{V _callee64289=this->_v_61291_speedIn.get();return j::call(_callee64289,j::Args{_v_61304_what,_v_61305_v,([&]()->V{V _obj64288=j::object();j::put(_obj64288,this->_literals[199],V(true));return _obj64288;})()});})();
return V{};
},2);
this->_v_61306_scaleOf.get()=j::function([=](const j::Args &_args_fn61307,const V &_receiver_fn61307,const V &_self_fn61307) mutable ->V{
V _v_61308_what;
V _v_61309_v;
_v_61308_what=_args_fn61307[0];
_v_61309_v=_args_fn61307[1];
{
V _v_61310_s;
_v_61310_s=([&]()->V{V _callee64291=this->_v_61294_wordOr.get();return j::call(_callee64291,j::Args{([&]()->V{std::u16string _text64290;_text64290+=u"";_text64290+=j::string(_v_61308_what);_text64290+=u"'s scale";return V(std::move(_text64290));})(),_v_61309_v,this->_v_61283_SCALES.get(),this->_literals[200],V(0.0),V(10.0)});})();
if(j::truth(([&]()->V{V _lhs64292=_v_61310_s;V _rhs64293=V(0.0);return j::binary("<=",_lhs64292,_rhs64293);})())){(void)(([&]()->V{V _callee64295=this->_v_61269_fail.get();return j::call(_callee64295,j::Args{([&]()->V{std::u16string _text64294;_text64294+=u"";_text64294+=j::string(_v_61308_what);_text64294+=u"'s scale takes a number above 0, not ";_text64294+=j::string(_v_61310_s);_text64294+=u"";return V(std::move(_text64294));})()});})());
}
return _v_61310_s;

}

return V{};
},2);
this->_v_61311_densityOf.get()=j::function([=](const j::Args &_args_fn61312,const V &_receiver_fn61312,const V &_self_fn61312) mutable ->V{
V _v_61313_what;
V _v_61314_v;
_v_61313_what=_args_fn61312[0];
_v_61314_v=_args_fn61312[1];
return ([&]()->V{V _callee64297=this->_v_61294_wordOr.get();return j::call(_callee64297,j::Args{([&]()->V{std::u16string _text64296;_text64296+=u"";_text64296+=j::string(_v_61313_what);_text64296+=u"'s density";return V(std::move(_text64296));})(),_v_61314_v,this->_v_61281_DENSITIES.get(),this->_literals[201],V(0.0),V(10.0)});})();
return V{};
},2);
this->_v_61315_DIRECTIONS.get()=this->_v_61282_HEADINGS.get();
this->_v_61316_hundredths.get()=j::function([=](const j::Args &_args_fn61317,const V &_receiver_fn61317,const V &_self_fn61317) mutable ->V{
V _v_61318_s;
_v_61318_s=_args_fn61317[0];
return ([&]()->V{V _receiver64307=j::builtin("Math");V _method64308=this->_literals[113];V _method=j::get(_receiver64307,_method64308);j::Args _params64309=j::Args{V(0.05),([&]()->V{V _lhs64298=([&]()->V{V _number64302=([&]()->V{V _lhs64303=_v_61318_s;V _rhs64304=V(100.0);return V(j::number(_lhs64303)*j::number(_rhs64304));})();return V(std::floor(j::number(_number64302)+.5));})();V _rhs64299=V(100.0);return V(j::number(_lhs64298)/j::number(_rhs64299));})()};return j::call(_method,_params64309,_receiver64307);})();
return V{};
},1);
{V _base64310=this->_v_61264_Chainable.get();V _class64311=j::make_class("Look",_base64310,j::function([=](const j::Args &_args_fn61320,const V &_receiver_fn61320,const V &_self_fn61320) mutable ->V{
V _v_61321_def;
_v_61321_def=_args_fn61320[0];
{
V _v_61322_loop;
V _v_61323_light;
V _v_61324_one;
j::Cell _v_61325_fn;
V _v_61326_drawn;
V _v_61333_made;
(void)(j::construct(_base64310,j::Args{},_receiver_fn61320));
j::put(_receiver_fn61320,this->_literals[10],V{});j::put(_receiver_fn61320,this->_literals[202],V{});j::put(_receiver_fn61320,this->_literals[203],V{});_receiver_fn61320.data->hidden.insert(j::string(this->_literals[203]));(void)(([&]()->V{V _base64313=_receiver_fn61320;V _key64314=this->_literals[203];V _assign64312=_v_61321_def;return j::put(_base64313,_key64314,_assign64312);})());
_v_61322_loop=(j::truth(([&]()->V{V _logical64315=j::get(j::get(_v_61321_def,this->_literals[6]),this->_literals[46]);return j::truth(_logical64315)?j::unary("!",j::get(_v_61321_def,this->_literals[13])):_logical64315;})())?([&]()->V{V _callee64316=this->_v_61277_lcm.get();return j::call(_callee64316,j::Args{j::get(_v_61321_def,this->_literals[6])});})():j::builtin("undefined"));
_v_61323_light=(j::truth(j::get(_v_61321_def,this->_literals[69]))?([&]()->V{V _receiver64317=([&]()->V{j::Args _array64320;for(const auto &_value:j::elements(j::get(j::get(_v_61321_def,this->_literals[65]),this->_literals[69])))_array64320.push_back(_value);return j::array(std::move(_array64320));})();V _method64318=this->_literals[204];V _method=j::get(_receiver64317,_method64318);j::Args _params64319=j::Args{};return j::call(_method,_params64319,_receiver64317);})():j::get(j::get(_v_61321_def,this->_literals[65]),this->_literals[69]));
_v_61324_one=([&]()->V{V _logical64321=([&]()->V{V _lhs64322=j::get(j::get(j::get(_v_61321_def,this->_literals[65]),this->_literals[69]),this->_literals[46]);V _rhs64323=V(1.0);return V(j::equal(_lhs64322,_rhs64323,true));})();return j::truth(_logical64321)?([&]()->V{V _lhs64324=j::get(j::get(j::get(_v_61321_def,this->_literals[65]),this->_literals[205]),this->_literals[46]);V _rhs64325=V(1.0);return V(j::equal(_lhs64324,_rhs64325,true));})():_logical64321;})();
_v_61325_fn.get()=j::get(_v_61321_def,this->_literals[70]);
_v_61326_drawn=j::function([=](const j::Args &_args_fn61327,const V &_receiver_fn61327,const V &_self_fn61327) mutable ->V{
V _v_61328_x;
V _v_61329_y;
V _v_61330_t;
V _v_61331_at;
_v_61328_x=_args_fn61327[0];
_v_61329_y=_args_fn61327[1];
_v_61330_t=_args_fn61327[2];
_v_61331_at=_args_fn61327[3];
{
V _v_61332_v;
_v_61332_v=([&]()->V{V _callee64326=_v_61325_fn.get();return j::call(_callee64326,j::Args{_v_61328_x,_v_61329_y,_v_61330_t,_v_61331_at});})();
if(j::truth(([&]()->V{V _logical64327=([&]()->V{V _lhs64328=j::get(_v_61331_at,this->_literals[167]);V _rhs64329=j::builtin("undefined");return V(!j::equal(_lhs64328,_rhs64329,true));})();return j::truth(_logical64327)?j::unary("!",([&]()->V{V _logical64330=([&]()->V{V _lhs64331=_v_61332_v;V _rhs64332=V::null();return V(!j::equal(_lhs64331,_rhs64332,true));})();return j::truth(_logical64330)?([&]()->V{V _lhs64333=_v_61332_v;V _rhs64334=V(0.0);return j::binary(">",_lhs64333,_rhs64334);})():_logical64330;})()):_logical64327;})())){(void)(([&]()->V{V _base64336=_v_61331_at;V _key64337=this->_literals[167];V _assign64335=j::builtin("undefined");return j::put(_base64336,_key64337,_assign64335);})());
}
return _v_61332_v;

}

return V{};
},4);
_v_61333_made=([&]()->V{V _callee64344=this->_v_61275_field.get();return j::call(_callee64344,j::Args{([&]()->V{V _obj64338=j::object();j::put(_obj64338,this->_literals[35],j::get(_v_61321_def,this->_literals[35]));j::put(_obj64338,this->_literals[45],j::get(_v_61321_def,this->_literals[45]));j::put(_obj64338,this->_literals[206],this->_literals[207]);j::put(_obj64338,this->_literals[0],j::get(_v_61321_def,this->_literals[0]));j::put(_obj64338,this->_literals[1],j::get(_v_61321_def,this->_literals[1]));j::put(_obj64338,this->_literals[11],(j::truth(([&]()->V{V _logical64339=j::get(j::get(_v_61321_def,this->_literals[6]),this->_literals[46]);return !j::truth(_logical64339)?j::get(_v_61321_def,this->_literals[13]):_logical64339;})())?V(24.0):V(0.0)));j::put(_obj64338,this->_literals[67],j::get(_v_61321_def,this->_literals[67]));j::put(_obj64338,this->_literals[208],([&]()->V{V _obj64340=j::object();j::put(_obj64340,this->_literals[69],_v_61323_light);j::put(_obj64340,this->_literals[205],j::get(j::get(_v_61321_def,this->_literals[65]),this->_literals[205]));return _obj64340;})());j::put(_obj64338,this->_literals[209],(j::truth(_v_61324_one)?V(1.0):V(16.0)));j::put(_obj64338,this->_literals[210],(j::truth(j::get(_v_61321_def,this->_literals[69]))?this->_literals[211]:V(false)));j::put(_obj64338,this->_literals[43],j::get(_v_61321_def,this->_literals[43]));V _spread64341=(j::truth(_v_61322_loop)?([&]()->V{V _obj64342=j::object();j::put(_obj64342,this->_literals[12],_v_61322_loop);return _obj64342;})():([&]()->V{V _obj64343=j::object();return _obj64343;})());for(const auto &_key:j::keys(_spread64341))j::put(_obj64338,_key,j::get(_spread64341,_key));return _obj64338;})(),_v_61326_drawn});})();
(void)(([&]()->V{V _base64346=_receiver_fn61320;V _key64347=this->_literals[10];V _assign64345=j::get(_v_61333_made,this->_literals[10]);return j::put(_base64346,_key64347,_assign64345);})());
(void)(([&]()->V{V _base64349=_receiver_fn61320;V _key64350=this->_literals[202];V _assign64348=j::get(_v_61333_made,this->_literals[202]);return j::put(_base64349,_key64350,_assign64348);})());

}

return V{};
},1));this->_v_61319_Look.get()=_class64311;j::class_method(_class64311,this->_literals[212],j::function([=](const j::Args &_args_fn61334,const V &_receiver_fn61334,const V &_self_fn61334) mutable ->V{
V _v_61335_change;
_v_61335_change=_args_fn61334[0];
{
return ([&]()->V{V _callee64354=this->_v_61319_Look.get();return j::construct(_callee64354,j::Args{([&]()->V{V _obj64351=j::object();V _spread64352=j::get(_receiver_fn61334,this->_literals[203]);for(const auto &_key:j::keys(_spread64352))j::put(_obj64351,_key,j::get(_spread64352,_key));V _spread64353=_v_61335_change;for(const auto &_key:j::keys(_spread64353))j::put(_obj64351,_key,j::get(_spread64353,_key));return _obj64351;})()});})();

}

return V{};
},1),false,"method");j::class_method(_class64311,this->_literals[213],j::function([=](const j::Args &_args_fn61336,const V &_receiver_fn61336,const V &_self_fn61336) mutable ->V{
V _v_61337_what;
V _v_61338_v;
_v_61337_what=_args_fn61336[0];
_v_61338_v=_args_fn61336[1];
{
if(j::truth(j::unary("!",([&]()->V{V _lhs64355=_v_61338_v;V _rhs64356=this->_v_61319_Look.get();return j::binary("instanceof",_lhs64355,_rhs64356);})()))){(void)(([&]()->V{V _callee64359=this->_v_61269_fail.get();return j::call(_callee64359,j::Args{([&]()->V{std::u16string _text64357;_text64357+=u"";_text64357+=j::string(_v_61337_what);_text64357+=u" takes another look, such as waves() or clouds(), not ";_text64357+=j::string(([&]()->V{V _callee64358=this->_v_61289_show.get();return j::call(_callee64358,j::Args{_v_61338_v});})());_text64357+=u"";return V(std::move(_text64357));})()});})());
}
return j::get(_v_61338_v,this->_literals[203]);

}

return V{};
},2),true,"method");j::class_method(_class64311,this->_literals[214],j::function([=](const j::Args &_args_fn61339,const V &_receiver_fn61339,const V &_self_fn61339) mutable ->V{
V _v_61340_other;
V _v_61341_amount;
_v_61340_other=_args_fn61339[0];
V _default64360=_args_fn61339[1];if(_default64360.kind==V::Undefined||_default64360.kind==V::Hole)_default64360=this->_literals[19];
_v_61341_amount=_default64360;
{
V _v_61342_b;
j::Cell _v_61343_k;
j::Cell _v_61344_fa;
j::Cell _v_61345_fb;
_v_61342_b=([&]()->V{V _receiver64361=this->_v_61319_Look.get();V _method64362=this->_literals[213];V _method=j::get(_receiver64361,_method64362);j::Args _params64363=j::Args{this->_literals[215],_v_61340_other};return j::call(_method,_params64363,_receiver64361);})();
_v_61343_k.get()=([&]()->V{V _callee64365=this->_v_61294_wordOr.get();return j::call(_callee64365,j::Args{this->_literals[216],_v_61341_amount,([&]()->V{V _obj64364=j::object();j::put(_obj64364,this->_literals[217],V(0.25));j::put(_obj64364,this->_literals[19],V(0.5));j::put(_obj64364,this->_literals[218],V(0.75));return _obj64364;})(),this->_literals[19],V(0.0),V(1.0)});})();
_v_61344_fa.get()=j::get(j::get(_receiver_fn61339,this->_literals[203]),this->_literals[70]);
_v_61345_fb.get()=j::get(_v_61342_b,this->_literals[70]);
return ([&]()->V{V _receiver64386=_receiver_fn61339;V _method64387=this->_literals[212];V _method=j::get(_receiver64386,_method64387);j::Args _params64388=j::Args{([&]()->V{V _obj64366=j::object();j::put(_obj64366,this->_literals[6],([&]()->V{j::Args _array64367;for(const auto &_value:j::elements(j::get(j::get(_receiver_fn61339,this->_literals[203]),this->_literals[6])))_array64367.push_back(_value);for(const auto &_value:j::elements(j::get(_v_61342_b,this->_literals[6])))_array64367.push_back(_value);return j::array(std::move(_array64367));})());j::put(_obj64366,this->_literals[13],([&]()->V{V _logical64368=j::get(j::get(_receiver_fn61339,this->_literals[203]),this->_literals[13]);return !j::truth(_logical64368)?j::get(_v_61342_b,this->_literals[13]):_logical64368;})());j::put(_obj64366,this->_literals[70],j::function([=](const j::Args &_args_fn61346,const V &_receiver_fn61346,const V &_self_fn61346) mutable ->V{
V _v_61347_x;
V _v_61348_y;
V _v_61349_t;
V _v_61350_at;
_v_61347_x=_args_fn61346[0];
_v_61348_y=_args_fn61346[1];
_v_61349_t=_args_fn61346[2];
_v_61350_at=_args_fn61346[3];
{
V _v_61351_va;
V _v_61352_vb;
_v_61351_va=([&]()->V{V _callee64369=_v_61344_fa.get();return j::call(_callee64369,j::Args{_v_61347_x,_v_61348_y,_v_61349_t,_v_61350_at});})();
_v_61352_vb=([&]()->V{V _callee64370=_v_61345_fb.get();return j::call(_callee64370,j::Args{_v_61347_x,_v_61348_y,_v_61349_t,_v_61350_at});})();
if(j::truth(([&]()->V{V _logical64371=([&]()->V{V _lhs64372=_v_61351_va;V _rhs64373=V::null();return V(j::equal(_lhs64372,_rhs64373,true));})();return j::truth(_logical64371)?([&]()->V{V _lhs64374=_v_61352_vb;V _rhs64375=V::null();return V(j::equal(_lhs64374,_rhs64375,true));})():_logical64371;})())){return V::null();
}
return ([&]()->V{V _lhs64376=([&]()->V{V _lhs64378=([&]()->V{V _logical64380=_v_61351_va;return j::nullish(_logical64380)?V(0.0):_logical64380;})();V _rhs64379=([&]()->V{V _lhs64381=V(1.0);V _rhs64382=_v_61343_k.get();return V(j::number(_lhs64381)-j::number(_rhs64382));})();return V(j::number(_lhs64378)*j::number(_rhs64379));})();V _rhs64377=([&]()->V{V _lhs64383=([&]()->V{V _logical64385=_v_61352_vb;return j::nullish(_logical64385)?V(0.0):_logical64385;})();V _rhs64384=_v_61343_k.get();return V(j::number(_lhs64383)*j::number(_rhs64384));})();return j::binary("+",_lhs64376,_rhs64377);})();

}

return V{};
},4));return _obj64366;})()};return j::call(_method,_params64388,_receiver64386);})();

}

return V{};
},1),false,"method");j::class_method(_class64311,this->_literals[219],j::function([=](const j::Args &_args_fn61353,const V &_receiver_fn61353,const V &_self_fn61353) mutable ->V{
V _v_61354_other;
V _v_61355_amount;
_v_61354_other=_args_fn61353[0];
V _default64389=_args_fn61353[1];if(_default64389.kind==V::Undefined||_default64389.kind==V::Hole)_default64389=V(1.0);
_v_61355_amount=_default64389;
{
V _v_61356_b;
j::Cell _v_61357_k;
j::Cell _v_61358_fa;
j::Cell _v_61359_fb;
_v_61356_b=([&]()->V{V _receiver64390=this->_v_61319_Look.get();V _method64391=this->_literals[213];V _method=j::get(_receiver64390,_method64391);j::Args _params64392=j::Args{this->_literals[220],_v_61354_other};return j::call(_method,_params64392,_receiver64390);})();
_v_61357_k.get()=([&]()->V{V _callee64393=this->_v_61294_wordOr.get();return j::call(_callee64393,j::Args{this->_literals[221],_v_61355_amount,this->_v_61280_AMOUNTS.get(),V(1.0),V(0.0),V(4.0)});})();
_v_61358_fa.get()=j::get(j::get(_receiver_fn61353,this->_literals[203]),this->_literals[70]);
_v_61359_fb.get()=j::get(_v_61356_b,this->_literals[70]);
return ([&]()->V{V _receiver64412=_receiver_fn61353;V _method64413=this->_literals[212];V _method=j::get(_receiver64412,_method64413);j::Args _params64414=j::Args{([&]()->V{V _obj64394=j::object();j::put(_obj64394,this->_literals[6],([&]()->V{j::Args _array64395;for(const auto &_value:j::elements(j::get(j::get(_receiver_fn61353,this->_literals[203]),this->_literals[6])))_array64395.push_back(_value);for(const auto &_value:j::elements(j::get(_v_61356_b,this->_literals[6])))_array64395.push_back(_value);return j::array(std::move(_array64395));})());j::put(_obj64394,this->_literals[13],([&]()->V{V _logical64396=j::get(j::get(_receiver_fn61353,this->_literals[203]),this->_literals[13]);return !j::truth(_logical64396)?j::get(_v_61356_b,this->_literals[13]):_logical64396;})());j::put(_obj64394,this->_literals[70],j::function([=](const j::Args &_args_fn61360,const V &_receiver_fn61360,const V &_self_fn61360) mutable ->V{
V _v_61361_x;
V _v_61362_y;
V _v_61363_t;
V _v_61364_at;
_v_61361_x=_args_fn61360[0];
_v_61362_y=_args_fn61360[1];
_v_61363_t=_args_fn61360[2];
_v_61364_at=_args_fn61360[3];
{
V _v_61365_va;
V _v_61366_vb;
V _v_61367_v;
_v_61365_va=([&]()->V{V _callee64397=_v_61358_fa.get();return j::call(_callee64397,j::Args{_v_61361_x,_v_61362_y,_v_61363_t,_v_61364_at});})();
_v_61366_vb=([&]()->V{V _callee64398=_v_61359_fb.get();return j::call(_callee64398,j::Args{_v_61361_x,_v_61362_y,_v_61363_t,_v_61364_at});})();
if(j::truth(([&]()->V{V _logical64399=([&]()->V{V _lhs64400=_v_61365_va;V _rhs64401=V::null();return V(j::equal(_lhs64400,_rhs64401,true));})();return j::truth(_logical64399)?([&]()->V{V _lhs64402=_v_61366_vb;V _rhs64403=V::null();return V(j::equal(_lhs64402,_rhs64403,true));})():_logical64399;})())){return V::null();
}
_v_61367_v=([&]()->V{V _lhs64404=([&]()->V{V _logical64406=_v_61365_va;return j::nullish(_logical64406)?V(0.0):_logical64406;})();V _rhs64405=([&]()->V{V _lhs64407=([&]()->V{V _logical64409=_v_61366_vb;return j::nullish(_logical64409)?V(0.0):_logical64409;})();V _rhs64408=_v_61357_k.get();return V(j::number(_lhs64407)*j::number(_rhs64408));})();return j::binary("+",_lhs64404,_rhs64405);})();
return (j::truth(([&]()->V{V _lhs64410=_v_61367_v;V _rhs64411=V(1.0);return j::binary(">",_lhs64410,_rhs64411);})())?V(1.0):_v_61367_v);

}

return V{};
},4));return _obj64394;})()};return j::call(_method,_params64414,_receiver64412);})();

}

return V{};
},1),false,"method");j::class_method(_class64311,this->_literals[222],j::function([=](const j::Args &_args_fn61368,const V &_receiver_fn61368,const V &_self_fn61368) mutable ->V{
V _v_61369_other;
_v_61369_other=_args_fn61368[0];
{
V _v_61370_b;
j::Cell _v_61371_fa;
j::Cell _v_61372_fb;
_v_61370_b=([&]()->V{V _receiver64415=this->_v_61319_Look.get();V _method64416=this->_literals[213];V _method=j::get(_receiver64415,_method64416);j::Args _params64417=j::Args{this->_literals[223],_v_61369_other};return j::call(_method,_params64417,_receiver64415);})();
_v_61371_fa.get()=j::get(j::get(_receiver_fn61368,this->_literals[203]),this->_literals[70]);
_v_61372_fb.get()=j::get(_v_61370_b,this->_literals[70]);
return ([&]()->V{V _receiver64430=_receiver_fn61368;V _method64431=this->_literals[212];V _method=j::get(_receiver64430,_method64431);j::Args _params64432=j::Args{([&]()->V{V _obj64418=j::object();j::put(_obj64418,this->_literals[6],([&]()->V{j::Args _array64419;for(const auto &_value:j::elements(j::get(j::get(_receiver_fn61368,this->_literals[203]),this->_literals[6])))_array64419.push_back(_value);for(const auto &_value:j::elements(j::get(_v_61370_b,this->_literals[6])))_array64419.push_back(_value);return j::array(std::move(_array64419));})());j::put(_obj64418,this->_literals[13],([&]()->V{V _logical64420=j::get(j::get(_receiver_fn61368,this->_literals[203]),this->_literals[13]);return !j::truth(_logical64420)?j::get(_v_61370_b,this->_literals[13]):_logical64420;})());j::put(_obj64418,this->_literals[70],j::function([=](const j::Args &_args_fn61373,const V &_receiver_fn61373,const V &_self_fn61373) mutable ->V{
V _v_61374_x;
V _v_61375_y;
V _v_61376_t;
V _v_61377_at;
_v_61374_x=_args_fn61373[0];
_v_61375_y=_args_fn61373[1];
_v_61376_t=_args_fn61373[2];
_v_61377_at=_args_fn61373[3];
{
V _v_61378_va;
V _v_61379_vb;
_v_61378_va=([&]()->V{V _callee64421=_v_61371_fa.get();return j::call(_callee64421,j::Args{_v_61374_x,_v_61375_y,_v_61376_t,_v_61377_at});})();
_v_61379_vb=([&]()->V{V _callee64422=_v_61372_fb.get();return j::call(_callee64422,j::Args{_v_61374_x,_v_61375_y,_v_61376_t,_v_61377_at});})();
if(j::truth(([&]()->V{V _logical64423=([&]()->V{V _lhs64424=_v_61378_va;V _rhs64425=V::null();return V(j::equal(_lhs64424,_rhs64425,true));})();return !j::truth(_logical64423)?([&]()->V{V _lhs64426=_v_61379_vb;V _rhs64427=V::null();return V(j::equal(_lhs64426,_rhs64427,true));})():_logical64423;})())){return V::null();
}
return ([&]()->V{V _lhs64428=_v_61378_va;V _rhs64429=_v_61379_vb;return V(j::number(_lhs64428)*j::number(_rhs64429));})();

}

return V{};
},4));return _obj64418;})()};return j::call(_method,_params64432,_receiver64430);})();

}

return V{};
},1),false,"method");j::class_method(_class64311,this->_literals[5],j::function([=](const j::Args &_args_fn61380,const V &_receiver_fn61380,const V &_self_fn61380) mutable ->V{
V _v_61381_shape;
_v_61381_shape=_args_fn61380[0];
{
j::Cell _v_61382_m;
j::Cell _v_61383_f;
V _v_61384_solid;
_v_61382_m.get()=([&]()->V{V _callee64433=this->_v_61547_maskOf.get();return j::call(_callee64433,j::Args{this->_literals[224],_v_61381_shape});})();
_v_61383_f.get()=j::get(j::get(_receiver_fn61380,this->_literals[203]),this->_literals[70]);
_v_61384_solid=(j::truth(j::get(_v_61382_m.get(),this->_literals[7]))?([&]()->V{V _receiver64434=j::get(j::get(_receiver_fn61380,this->_literals[203]),this->_literals[67]);V _method64435=this->_literals[226];V _method=j::get(_receiver64434,_method64435);j::Args _params64436=j::Args{j::regexp(u"^ +",""),this->_literals[225]};return j::call(_method,_params64436,_receiver64434);})():j::get(j::get(_receiver_fn61380,this->_literals[203]),this->_literals[67]));
return ([&]()->V{V _receiver64446=_receiver_fn61380;V _method64447=this->_literals[212];V _method=j::get(_receiver64446,_method64447);j::Args _params64448=j::Args{([&]()->V{V _obj64437=j::object();j::put(_obj64437,this->_literals[6],([&]()->V{j::Args _array64438;for(const auto &_value:j::elements(j::get(j::get(_receiver_fn61380,this->_literals[203]),this->_literals[6])))_array64438.push_back(_value);for(const auto &_value:j::elements(j::get(_v_61382_m.get(),this->_literals[6])))_array64438.push_back(_value);return j::array(std::move(_array64438));})());j::put(_obj64437,this->_literals[13],([&]()->V{V _logical64439=j::get(j::get(_receiver_fn61380,this->_literals[203]),this->_literals[13]);return !j::truth(_logical64439)?j::get(_v_61382_m.get(),this->_literals[13]):_logical64439;})());j::put(_obj64437,this->_literals[67],(j::truth(([&]()->V{V _lhs64440=j::get(_v_61384_solid,this->_literals[46]);V _rhs64441=V(2.0);return j::binary(">=",_lhs64440,_rhs64441);})())?_v_61384_solid:j::get(j::get(_receiver_fn61380,this->_literals[203]),this->_literals[67])));j::put(_obj64437,this->_literals[70],j::function([=](const j::Args &_args_fn61385,const V &_receiver_fn61385,const V &_self_fn61385) mutable ->V{
V _v_61386_x;
V _v_61387_y;
V _v_61388_t;
V _v_61389_at;
_v_61386_x=_args_fn61385[0];
_v_61387_y=_args_fn61385[1];
_v_61388_t=_args_fn61385[2];
_v_61389_at=_args_fn61385[3];
return (j::truth(([&]()->V{V _receiver64442=_v_61382_m.get();V _method64443=this->_literals[8];V _method=j::get(_receiver64442,_method64443);j::Args _params64444=j::Args{_v_61386_x,_v_61387_y,_v_61388_t,_v_61389_at};return j::call(_method,_params64444,_receiver64442);})())?([&]()->V{V _callee64445=_v_61383_f.get();return j::call(_callee64445,j::Args{_v_61386_x,_v_61387_y,_v_61388_t,_v_61389_at});})():V::null());
return V{};
},4));return _obj64437;})()};return j::call(_method,_params64448,_receiver64446);})();

}

return V{};
},1),false,"method");j::class_method(_class64311,this->_literals[227],j::function([=](const j::Args &_args_fn61390,const V &_receiver_fn61390,const V &_self_fn61390) mutable ->V{
V _v_61391_direction;
V _v_61392_speed;
V _default64449=_args_fn61390[0];if(_default64449.kind==V::Undefined||_default64449.kind==V::Hole)_default64449=this->_literals[77];
_v_61391_direction=_default64449;
V _default64450=_args_fn61390[1];if(_default64450.kind==V::Undefined||_default64450.kind==V::Hole)_default64450=this->_literals[201];
_v_61392_speed=_default64450;
{
V _v_61393_s;
j::Cell _v_61394_dx;
j::Cell _v_61395_dy;
j::Cell _v_61396_P;
j::Cell _v_61397_D;
j::Cell _v_61398_f;
(void)(([&]()->V{V _callee64454=this->_v_61292_wordOf.get();return j::call(_callee64454,j::Args{this->_literals[228],_v_61391_direction,([&]()->V{V _receiver64451=j::builtin("Object");V _method64452=this->_literals[55];V _method=j::get(_receiver64451,_method64452);j::Args _params64453=j::Args{this->_v_61315_DIRECTIONS.get()};return j::call(_method,_params64453,_receiver64451);})(),this->_literals[77]});})());
_v_61393_s=([&]()->V{V _callee64455=this->_v_61302_speedOf.get();return j::call(_callee64455,j::Args{this->_literals[228],_v_61392_speed});})();
if(j::truth(([&]()->V{V _lhs64456=_v_61393_s;V _rhs64457=V(0.0);return V(j::equal(_lhs64456,_rhs64457,true));})())){return _receiver_fn61390;
}
V _pattern64458=j::get(this->_v_61315_DIRECTIONS.get(),_v_61391_direction);
_v_61394_dx.get()=j::get(_pattern64458,V(0));
_v_61395_dy.get()=j::get(_pattern64458,V(1));
_v_61396_P.get()=([&]()->V{V _callee64461=this->_v_61316_hundredths.get();return j::call(_callee64461,j::Args{([&]()->V{V _lhs64459=V(8.0);V _rhs64460=_v_61393_s;return V(j::number(_lhs64459)/j::number(_rhs64460));})()});})();
_v_61397_D.get()=V(2.0);
if(j::truth(([&]()->V{V _lhs64462=_v_61396_P.get();V _rhs64463=V(60.0);return j::binary(">",_lhs64462,_rhs64463);})())){(void)(([&]()->V{V _callee64465=this->_v_61269_fail.get();return j::call(_callee64465,j::Args{([&]()->V{std::u16string _text64464;_text64464+=u"move()'s speed is too slow to loop within a minute: use 0.134 or more, or \"still\"";return V(std::move(_text64464));})()});})());
}
_v_61398_f.get()=j::get(j::get(_receiver_fn61390,this->_literals[203]),this->_literals[70]);
return ([&]()->V{V _receiver64554=_receiver_fn61390;V _method64555=this->_literals[212];V _method=j::get(_receiver64554,_method64555);j::Args _params64556=j::Args{([&]()->V{V _obj64466=j::object();j::put(_obj64466,this->_literals[6],([&]()->V{j::Args _array64467;for(const auto &_value:j::elements(j::get(j::get(_receiver_fn61390,this->_literals[203]),this->_literals[6])))_array64467.push_back(_value);_array64467.push_back(_v_61396_P.get());return j::array(std::move(_array64467));})());j::put(_obj64466,this->_literals[70],j::function([=](const j::Args &_args_fn61399,const V &_receiver_fn61399,const V &_self_fn61399) mutable ->V{
V _v_61400_x;
V _v_61401_y;
V _v_61402_t;
V _v_61403_at;
_v_61400_x=_args_fn61399[0];
_v_61401_y=_args_fn61399[1];
_v_61402_t=_args_fn61399[2];
_v_61403_at=_args_fn61399[3];
{
V _v_61404_k;
V _v_61405_w;
V _v_61406_a;
V _v_61407_b;
V _v_61408_v;
V _v_61409_lift;
_v_61404_k=([&]()->V{V _callee64470=this->_v_61270_fract.get();return j::call(_callee64470,j::Args{([&]()->V{V _lhs64468=_v_61402_t;V _rhs64469=_v_61396_P.get();return V(j::number(_lhs64468)/j::number(_rhs64469));})()});})();
_v_61405_w=([&]()->V{V _lhs64471=([&]()->V{V _lhs64473=_v_61404_k;V _rhs64474=_v_61404_k;return V(j::number(_lhs64473)*j::number(_rhs64474));})();V _rhs64472=([&]()->V{V _lhs64475=V(3.0);V _rhs64476=([&]()->V{V _lhs64477=V(2.0);V _rhs64478=_v_61404_k;return V(j::number(_lhs64477)*j::number(_rhs64478));})();return V(j::number(_lhs64475)-j::number(_rhs64476));})();return V(j::number(_lhs64471)*j::number(_rhs64472));})();
_v_61406_a=([&]()->V{V _callee64491=_v_61398_f.get();return j::call(_callee64491,j::Args{([&]()->V{V _lhs64479=_v_61400_x;V _rhs64480=([&]()->V{V _lhs64481=([&]()->V{V _lhs64483=_v_61394_dx.get();V _rhs64484=_v_61397_D.get();return V(j::number(_lhs64483)*j::number(_rhs64484));})();V _rhs64482=_v_61404_k;return V(j::number(_lhs64481)*j::number(_rhs64482));})();return V(j::number(_lhs64479)-j::number(_rhs64480));})(),([&]()->V{V _lhs64485=_v_61401_y;V _rhs64486=([&]()->V{V _lhs64487=([&]()->V{V _lhs64489=_v_61395_dy.get();V _rhs64490=_v_61397_D.get();return V(j::number(_lhs64489)*j::number(_rhs64490));})();V _rhs64488=_v_61404_k;return V(j::number(_lhs64487)*j::number(_rhs64488));})();return V(j::number(_lhs64485)-j::number(_rhs64486));})(),_v_61402_t,_v_61403_at});})();
_v_61407_b=([&]()->V{V _callee64508=_v_61398_f.get();return j::call(_callee64508,j::Args{([&]()->V{V _lhs64492=_v_61400_x;V _rhs64493=([&]()->V{V _lhs64494=([&]()->V{V _lhs64496=_v_61394_dx.get();V _rhs64497=_v_61397_D.get();return V(j::number(_lhs64496)*j::number(_rhs64497));})();V _rhs64495=([&]()->V{V _lhs64498=_v_61404_k;V _rhs64499=V(1.0);return V(j::number(_lhs64498)-j::number(_rhs64499));})();return V(j::number(_lhs64494)*j::number(_rhs64495));})();return V(j::number(_lhs64492)-j::number(_rhs64493));})(),([&]()->V{V _lhs64500=_v_61401_y;V _rhs64501=([&]()->V{V _lhs64502=([&]()->V{V _lhs64504=_v_61395_dy.get();V _rhs64505=_v_61397_D.get();return V(j::number(_lhs64504)*j::number(_rhs64505));})();V _rhs64503=([&]()->V{V _lhs64506=_v_61404_k;V _rhs64507=V(1.0);return V(j::number(_lhs64506)-j::number(_rhs64507));})();return V(j::number(_lhs64502)*j::number(_rhs64503));})();return V(j::number(_lhs64500)-j::number(_rhs64501));})(),_v_61402_t,_v_61403_at});})();
if(j::truth(([&]()->V{V _logical64509=([&]()->V{V _lhs64510=_v_61406_a;V _rhs64511=V::null();return V(j::equal(_lhs64510,_rhs64511,true));})();return j::truth(_logical64509)?([&]()->V{V _lhs64512=_v_61407_b;V _rhs64513=V::null();return V(j::equal(_lhs64512,_rhs64513,true));})():_logical64509;})())){return V::null();
}
_v_61408_v=([&]()->V{V _lhs64514=([&]()->V{V _lhs64516=([&]()->V{V _logical64518=_v_61406_a;return j::nullish(_logical64518)?V(0.0):_logical64518;})();V _rhs64517=([&]()->V{V _lhs64519=V(1.0);V _rhs64520=_v_61405_w;return V(j::number(_lhs64519)-j::number(_rhs64520));})();return V(j::number(_lhs64516)*j::number(_rhs64517));})();V _rhs64515=([&]()->V{V _lhs64521=([&]()->V{V _logical64523=_v_61407_b;return j::nullish(_logical64523)?V(0.0):_logical64523;})();V _rhs64522=_v_61405_w;return V(j::number(_lhs64521)*j::number(_rhs64522));})();return j::binary("+",_lhs64514,_rhs64515);})();
_v_61409_lift=([&]()->V{V _lhs64524=V(1.0);V _rhs64525=([&]()->V{V _number64536=([&]()->V{V _lhs64537=([&]()->V{V _lhs64539=_v_61405_w;V _rhs64540=_v_61405_w;return V(j::number(_lhs64539)*j::number(_rhs64540));})();V _rhs64538=([&]()->V{V _lhs64541=([&]()->V{V _lhs64543=V(1.0);V _rhs64544=_v_61405_w;return V(j::number(_lhs64543)-j::number(_rhs64544));})();V _rhs64542=([&]()->V{V _lhs64545=V(1.0);V _rhs64546=_v_61405_w;return V(j::number(_lhs64545)-j::number(_rhs64546));})();return V(j::number(_lhs64541)*j::number(_rhs64542));})();return j::binary("+",_lhs64537,_rhs64538);})();return V(std::sqrt(j::number(_number64536)));})();return V(j::number(_lhs64524)/j::number(_rhs64525));})();
return ([&]()->V{V _callee64553=this->_v_61268_clamp.get();return j::call(_callee64553,j::Args{([&]()->V{V _lhs64547=V(0.5);V _rhs64548=([&]()->V{V _lhs64549=([&]()->V{V _lhs64551=_v_61408_v;V _rhs64552=V(0.5);return V(j::number(_lhs64551)-j::number(_rhs64552));})();V _rhs64550=_v_61409_lift;return V(j::number(_lhs64549)*j::number(_rhs64550));})();return j::binary("+",_lhs64547,_rhs64548);})()});})();

}

return V{};
},4));return _obj64466;})()};return j::call(_method,_params64556,_receiver64554);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[229],j::function([=](const j::Args &_args_fn61410,const V &_receiver_fn61410,const V &_self_fn61410) mutable ->V{
V _v_61411_amount;
V _default64557=_args_fn61410[0];if(_default64557.kind==V::Undefined||_default64557.kind==V::Hole)_default64557=this->_literals[118];
_v_61411_amount=_default64557;
{
j::Cell _v_61412_k;
j::Cell _v_61413_f;
_v_61412_k.get()=([&]()->V{V _callee64559=this->_v_61294_wordOr.get();return j::call(_callee64559,j::Args{this->_literals[230],_v_61411_amount,([&]()->V{V _obj64558=j::object();j::put(_obj64558,this->_literals[118],V(2.0));j::put(_obj64558,this->_literals[119],V(0.5));return _obj64558;})(),this->_literals[118],V(0.05),V(20.0)});})();
if(j::truth(([&]()->V{V _logical64560=([&]()->V{V _lhs64561=_v_61412_k.get();V _rhs64562=V(0.05);return j::binary("<=",_lhs64561,_rhs64562);})();return j::truth(_logical64560)?([&]()->V{V _lhs64563=_v_61412_k.get();V _rhs64564=V(0.05);return V(!j::equal(_lhs64563,_rhs64564,true));})():_logical64560;})())){(void)(([&]()->V{V _callee64566=this->_v_61269_fail.get();return j::call(_callee64566,j::Args{([&]()->V{std::u16string _text64565;_text64565+=u"zoom() takes a number above 0, not ";_text64565+=j::string(_v_61412_k.get());_text64565+=u"";return V(std::move(_text64565));})()});})());
}
_v_61413_f.get()=j::get(j::get(_receiver_fn61410,this->_literals[203]),this->_literals[70]);
return ([&]()->V{V _receiver64573=_receiver_fn61410;V _method64574=this->_literals[212];V _method=j::get(_receiver64573,_method64574);j::Args _params64575=j::Args{([&]()->V{V _obj64567=j::object();j::put(_obj64567,this->_literals[70],j::function([=](const j::Args &_args_fn61414,const V &_receiver_fn61414,const V &_self_fn61414) mutable ->V{
V _v_61415_x;
V _v_61416_y;
V _v_61417_t;
V _v_61418_at;
_v_61415_x=_args_fn61414[0];
_v_61416_y=_args_fn61414[1];
_v_61417_t=_args_fn61414[2];
_v_61418_at=_args_fn61414[3];
return ([&]()->V{V _callee64572=_v_61413_f.get();return j::call(_callee64572,j::Args{([&]()->V{V _lhs64568=_v_61415_x;V _rhs64569=_v_61412_k.get();return V(j::number(_lhs64568)/j::number(_rhs64569));})(),([&]()->V{V _lhs64570=_v_61416_y;V _rhs64571=_v_61412_k.get();return V(j::number(_lhs64570)/j::number(_rhs64571));})(),_v_61417_t,_v_61418_at});})();
return V{};
},4));return _obj64567;})()};return j::call(_method,_params64575,_receiver64573);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[231],j::function([=](const j::Args &_args_fn61419,const V &_receiver_fn61419,const V &_self_fn61419) mutable ->V{
V _v_61420_by;
V _default64576=_args_fn61419[0];if(_default64576.kind==V::Undefined||_default64576.kind==V::Hole)_default64576=this->_literals[232];
_v_61420_by=_default64576;
{
j::Cell _v_61421_f;
V _v_61422_fixed;
V _v_61431_v;
j::Cell _v_61432_P;
j::Cell _v_61433_sign;
_v_61421_f.get()=j::get(j::get(_receiver_fn61419,this->_literals[203]),this->_literals[70]);
_v_61422_fixed=([&]()->V{V _obj64577=j::object();j::put(_obj64577,this->_literals[233],([&]()->V{V _lhs64578=V(1.0);V _rhs64579=V(8.0);return V(j::number(_lhs64578)/j::number(_rhs64579));})());j::put(_obj64577,this->_literals[234],([&]()->V{V _lhs64580=V(1.0);V _rhs64581=V(4.0);return V(j::number(_lhs64580)/j::number(_rhs64581));})());j::put(_obj64577,this->_literals[19],([&]()->V{V _lhs64582=V(1.0);V _rhs64583=V(2.0);return V(j::number(_lhs64582)/j::number(_rhs64583));})());return _obj64577;})();
if(j::truth(([&]()->V{V _logical64584=([&]()->V{V _lhs64585=j::unary("typeof",_v_61420_by);V _rhs64586=this->_literals[2];return V(j::equal(_lhs64585,_rhs64586,true));})();return j::truth(_logical64584)?([&]()->V{V _receiver64587=j::builtin("Object");V _method64588=this->_literals[52];V _method=j::get(_receiver64587,_method64588);j::Args _params64589=j::Args{_v_61422_fixed,_v_61420_by};return j::call(_method,_params64589,_receiver64587);})():_logical64584;})())){
V _v_61423_a;
j::Cell _v_61424_c;
j::Cell _v_61425_s;
_v_61423_a=([&]()->V{V _lhs64590=this->_v_61267_TAU.get();V _rhs64591=j::get(_v_61422_fixed,_v_61420_by);return V(j::number(_lhs64590)*j::number(_rhs64591));})();
_v_61424_c.get()=([&]()->V{V _number64592=_v_61423_a;return V(std::cos(j::number(_number64592)));})();
_v_61425_s.get()=([&]()->V{V _number64593=_v_61423_a;return V(std::sin(j::number(_number64593)));})();
return ([&]()->V{V _receiver64608=_receiver_fn61419;V _method64609=this->_literals[212];V _method=j::get(_receiver64608,_method64609);j::Args _params64610=j::Args{([&]()->V{V _obj64594=j::object();j::put(_obj64594,this->_literals[70],j::function([=](const j::Args &_args_fn61426,const V &_receiver_fn61426,const V &_self_fn61426) mutable ->V{
V _v_61427_x;
V _v_61428_y;
V _v_61429_t;
V _v_61430_at;
_v_61427_x=_args_fn61426[0];
_v_61428_y=_args_fn61426[1];
_v_61429_t=_args_fn61426[2];
_v_61430_at=_args_fn61426[3];
return ([&]()->V{V _callee64607=_v_61421_f.get();return j::call(_callee64607,j::Args{([&]()->V{V _lhs64595=([&]()->V{V _lhs64597=_v_61424_c.get();V _rhs64598=_v_61427_x;return V(j::number(_lhs64597)*j::number(_rhs64598));})();V _rhs64596=([&]()->V{V _lhs64599=_v_61425_s.get();V _rhs64600=_v_61428_y;return V(j::number(_lhs64599)*j::number(_rhs64600));})();return j::binary("+",_lhs64595,_rhs64596);})(),([&]()->V{V _lhs64601=([&]()->V{V _lhs64603=j::unary("-",_v_61425_s.get());V _rhs64604=_v_61427_x;return V(j::number(_lhs64603)*j::number(_rhs64604));})();V _rhs64602=([&]()->V{V _lhs64605=_v_61424_c.get();V _rhs64606=_v_61428_y;return V(j::number(_lhs64605)*j::number(_rhs64606));})();return j::binary("+",_lhs64601,_rhs64602);})(),_v_61429_t,_v_61430_at});})();
return V{};
},4));return _obj64594;})()};return j::call(_method,_params64610,_receiver64608);})();

}

_v_61431_v=(j::truth(([&]()->V{V _lhs64611=j::unary("typeof",_v_61420_by);V _rhs64612=this->_literals[40];return V(j::equal(_lhs64611,_rhs64612,true));})())?_v_61420_by:([&]()->V{V _callee64614=this->_v_61294_wordOr.get();return j::call(_callee64614,j::Args{this->_literals[235],_v_61420_by,([&]()->V{V _obj64613=j::object();j::put(_obj64613,this->_literals[232],V(0.5));j::put(_obj64613,this->_literals[201],V(1.0));j::put(_obj64613,this->_literals[236],V(2.0));return _obj64613;})(),this->_literals[232],j::unary("-",V(10.0)),V(10.0)});})());
if(j::truth(([&]()->V{V _logical64615=([&]()->V{V _logical64616=j::unary("!",([&]()->V{V _receiver64617=j::builtin("Number");V _method64618=this->_literals[41];V _method=j::get(_receiver64617,_method64618);j::Args _params64619=j::Args{_v_61431_v};return j::call(_method,_params64619,_receiver64617);})());return !j::truth(_logical64616)?([&]()->V{V _lhs64620=_v_61431_v;V _rhs64621=j::unary("-",V(10.0));return j::binary("<",_lhs64620,_rhs64621);})():_logical64616;})();return !j::truth(_logical64615)?([&]()->V{V _lhs64622=_v_61431_v;V _rhs64623=V(10.0);return j::binary(">",_lhs64622,_rhs64623);})():_logical64615;})())){(void)(([&]()->V{V _callee64626=this->_v_61269_fail.get();return j::call(_callee64626,j::Args{([&]()->V{std::u16string _text64624;_text64624+=u"rotate() takes \"slow\", \"normal\", \"fast\", \"eighth\", \"quarter\", \"half\", or a speed from -10 to 10, not ";_text64624+=j::string(([&]()->V{V _callee64625=this->_v_61289_show.get();return j::call(_callee64625,j::Args{_v_61420_by});})());_text64624+=u"";return V(std::move(_text64624));})()});})());
}
if(j::truth(([&]()->V{V _lhs64627=_v_61431_v;V _rhs64628=V(0.0);return V(j::equal(_lhs64627,_rhs64628,true));})())){return _receiver_fn61419;
}
_v_61432_P.get()=([&]()->V{V _callee64632=this->_v_61316_hundredths.get();return j::call(_callee64632,j::Args{([&]()->V{V _lhs64629=V(8.0);V _rhs64630=([&]()->V{V _number64631=_v_61431_v;return V(std::fabs(j::number(_number64631)));})();return V(j::number(_lhs64629)/j::number(_rhs64630));})()});})();
_v_61433_sign.get()=([&]()->V{V _receiver64634=j::builtin("Math");V _method64635=this->_literals[237];V _method=j::get(_receiver64634,_method64635);j::Args _params64636=j::Args{_v_61431_v};return j::call(_method,_params64636,_receiver64634);})();
if(j::truth(([&]()->V{V _lhs64637=_v_61432_P.get();V _rhs64638=V(60.0);return j::binary(">",_lhs64637,_rhs64638);})())){(void)(([&]()->V{V _callee64640=this->_v_61269_fail.get();return j::call(_callee64640,j::Args{([&]()->V{std::u16string _text64639;_text64639+=u"rotate()'s speed is too slow to loop within a minute: use 0.134 or more (or -0.134 or less)";return V(std::move(_text64639));})()});})());
}
return ([&]()->V{V _receiver64665=_receiver_fn61419;V _method64666=this->_literals[212];V _method=j::get(_receiver64665,_method64666);j::Args _params64667=j::Args{([&]()->V{V _obj64641=j::object();j::put(_obj64641,this->_literals[6],([&]()->V{j::Args _array64642;for(const auto &_value:j::elements(j::get(j::get(_receiver_fn61419,this->_literals[203]),this->_literals[6])))_array64642.push_back(_value);_array64642.push_back(_v_61432_P.get());return j::array(std::move(_array64642));})());j::put(_obj64641,this->_literals[70],j::function([=](const j::Args &_args_fn61434,const V &_receiver_fn61434,const V &_self_fn61434) mutable ->V{
V _v_61435_x;
V _v_61436_y;
V _v_61437_t;
V _v_61438_at;
_v_61435_x=_args_fn61434[0];
_v_61436_y=_args_fn61434[1];
_v_61437_t=_args_fn61434[2];
_v_61438_at=_args_fn61434[3];
{
V _v_61439_a;
V _v_61440_c;
V _v_61441_s;
_v_61439_a=([&]()->V{V _lhs64643=([&]()->V{V _lhs64645=_v_61433_sign.get();V _rhs64646=this->_v_61267_TAU.get();return V(j::number(_lhs64645)*j::number(_rhs64646));})();V _rhs64644=([&]()->V{V _callee64649=this->_v_61270_fract.get();return j::call(_callee64649,j::Args{([&]()->V{V _lhs64647=_v_61437_t;V _rhs64648=_v_61432_P.get();return V(j::number(_lhs64647)/j::number(_rhs64648));})()});})();return V(j::number(_lhs64643)*j::number(_rhs64644));})();
_v_61440_c=([&]()->V{V _number64650=_v_61439_a;return V(std::cos(j::number(_number64650)));})();
_v_61441_s=([&]()->V{V _number64651=_v_61439_a;return V(std::sin(j::number(_number64651)));})();
return ([&]()->V{V _callee64664=_v_61421_f.get();return j::call(_callee64664,j::Args{([&]()->V{V _lhs64652=([&]()->V{V _lhs64654=_v_61440_c;V _rhs64655=_v_61435_x;return V(j::number(_lhs64654)*j::number(_rhs64655));})();V _rhs64653=([&]()->V{V _lhs64656=_v_61441_s;V _rhs64657=_v_61436_y;return V(j::number(_lhs64656)*j::number(_rhs64657));})();return j::binary("+",_lhs64652,_rhs64653);})(),([&]()->V{V _lhs64658=([&]()->V{V _lhs64660=j::unary("-",_v_61441_s);V _rhs64661=_v_61435_x;return V(j::number(_lhs64660)*j::number(_rhs64661));})();V _rhs64659=([&]()->V{V _lhs64662=_v_61440_c;V _rhs64663=_v_61436_y;return V(j::number(_lhs64662)*j::number(_rhs64663));})();return j::binary("+",_lhs64658,_rhs64659);})(),_v_61437_t,_v_61438_at});})();

}

return V{};
},4));return _obj64641;})()};return j::call(_method,_params64667,_receiver64665);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[238],j::function([=](const j::Args &_args_fn61442,const V &_receiver_fn61442,const V &_self_fn61442) mutable ->V{
V _v_61443_amount;
V _default64668=_args_fn61442[0];if(_default64668.kind==V::Undefined||_default64668.kind==V::Hole)_default64668=this->_literals[200];
_v_61443_amount=_default64668;
{
j::Cell _v_61444_k;
V _v_61445_P;
j::Cell _v_61446_nx;
j::Cell _v_61447_ny;
j::Cell _v_61448_f;
_v_61444_k.get()=([&]()->V{V _lhs64669=V(0.18);V _rhs64670=([&]()->V{V _callee64671=this->_v_61294_wordOr.get();return j::call(_callee64671,j::Args{this->_literals[239],_v_61443_amount,this->_v_61280_AMOUNTS.get(),this->_literals[200],V(0.0),V(5.0)});})();return V(j::number(_lhs64669)*j::number(_rhs64670));})();
_v_61445_P=V(8.0);
_v_61446_nx.get()=([&]()->V{V _callee64676=this->_v_61278_noise.get();return j::call(_callee64676,j::Args{([&]()->V{V _obj64672=j::object();j::put(_obj64672,this->_literals[51],([&]()->V{j::Args _array64673;_array64673.push_back(V(0.7));_array64673.push_back(V(0.7));return j::array(std::move(_array64673));})());j::put(_obj64672,this->_literals[87],V(2.0));j::put(_obj64672,this->_literals[39],_v_61445_P);j::put(_obj64672,this->_literals[58],([&]()->V{V _lhs64674=V(1.0);V _rhs64675=V(4.0);return V(j::number(_lhs64674)/j::number(_rhs64675));})());return _obj64672;})()});})();
_v_61447_ny.get()=([&]()->V{V _callee64681=this->_v_61278_noise.get();return j::call(_callee64681,j::Args{([&]()->V{V _obj64677=j::object();j::put(_obj64677,this->_literals[51],([&]()->V{j::Args _array64678;_array64678.push_back(V(0.7));_array64678.push_back(V(0.7));return j::array(std::move(_array64678));})());j::put(_obj64677,this->_literals[87],V(2.0));j::put(_obj64677,this->_literals[39],_v_61445_P);j::put(_obj64677,this->_literals[58],([&]()->V{V _lhs64679=V(1.0);V _rhs64680=V(4.0);return V(j::number(_lhs64679)/j::number(_rhs64680));})());j::put(_obj64677,this->_literals[94],V(9.0));return _obj64677;})()});})();
_v_61448_f.get()=j::get(j::get(_receiver_fn61442,this->_literals[203]),this->_literals[70]);
return ([&]()->V{V _receiver64703=_receiver_fn61442;V _method64704=this->_literals[212];V _method=j::get(_receiver64703,_method64704);j::Args _params64705=j::Args{([&]()->V{V _obj64682=j::object();j::put(_obj64682,this->_literals[6],([&]()->V{j::Args _array64683;for(const auto &_value:j::elements(j::get(j::get(_receiver_fn61442,this->_literals[203]),this->_literals[6])))_array64683.push_back(_value);_array64683.push_back(_v_61445_P);return j::array(std::move(_array64683));})());j::put(_obj64682,this->_literals[70],j::function([=](const j::Args &_args_fn61449,const V &_receiver_fn61449,const V &_self_fn61449) mutable ->V{
V _v_61450_x;
V _v_61451_y;
V _v_61452_t;
V _v_61453_at;
_v_61450_x=_args_fn61449[0];
_v_61451_y=_args_fn61449[1];
_v_61452_t=_args_fn61449[2];
_v_61453_at=_args_fn61449[3];
return ([&]()->V{V _callee64702=_v_61448_f.get();return j::call(_callee64702,j::Args{([&]()->V{V _lhs64684=_v_61450_x;V _rhs64685=([&]()->V{V _lhs64686=([&]()->V{V _lhs64688=_v_61444_k.get();V _rhs64689=([&]()->V{V _lhs64690=([&]()->V{V _callee64692=_v_61446_nx.get();return j::call(_callee64692,j::Args{_v_61450_x,_v_61451_y,_v_61452_t});})();V _rhs64691=V(0.5);return V(j::number(_lhs64690)-j::number(_rhs64691));})();return V(j::number(_lhs64688)*j::number(_rhs64689));})();V _rhs64687=V(2.0);return V(j::number(_lhs64686)*j::number(_rhs64687));})();return j::binary("+",_lhs64684,_rhs64685);})(),([&]()->V{V _lhs64693=_v_61451_y;V _rhs64694=([&]()->V{V _lhs64695=([&]()->V{V _lhs64697=_v_61444_k.get();V _rhs64698=([&]()->V{V _lhs64699=([&]()->V{V _callee64701=_v_61447_ny.get();return j::call(_callee64701,j::Args{_v_61450_x,_v_61451_y,_v_61452_t});})();V _rhs64700=V(0.5);return V(j::number(_lhs64699)-j::number(_rhs64700));})();return V(j::number(_lhs64697)*j::number(_rhs64698));})();V _rhs64696=V(2.0);return V(j::number(_lhs64695)*j::number(_rhs64696));})();return j::binary("+",_lhs64693,_rhs64694);})(),_v_61452_t,_v_61453_at});})();
return V{};
},4));return _obj64682;})()};return j::call(_method,_params64705,_receiver64703);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[240],j::function([=](const j::Args &_args_fn61454,const V &_receiver_fn61454,const V &_self_fn61454) mutable ->V{
V _v_61455_amount;
V _default64706=_args_fn61454[0];if(_default64706.kind==V::Undefined||_default64706.kind==V::Hole)_default64706=this->_literals[200];
_v_61455_amount=_default64706;
{
j::Cell _v_61456_r;
j::Cell _v_61457_f;
V _v_61458_middle;
j::Cell _v_61459_taps;
j::Cell _v_61460_kept;
j::Cell _v_61461_when;
j::Cell _v_61462_size;
j::Cell _v_61463_at1;
_v_61456_r.get()=([&]()->V{V _number64709=([&]()->V{V _callee64711=this->_v_61294_wordOr.get();return j::call(_callee64711,j::Args{this->_literals[241],_v_61455_amount,([&]()->V{V _obj64710=j::object();j::put(_obj64710,this->_literals[242],V(1.0));j::put(_obj64710,this->_literals[200],V(1.0));j::put(_obj64710,this->_literals[243],V(2.0));return _obj64710;})(),this->_literals[200],V(0.0),V(8.0)});})();return V(std::floor(j::number(_number64709)+.5));})();
if(j::truth(([&]()->V{V _lhs64712=_v_61456_r.get();V _rhs64713=V(0.0);return V(j::equal(_lhs64712,_rhs64713,true));})())){return _receiver_fn61454;
}
_v_61457_f.get()=j::get(j::get(_receiver_fn61454,this->_literals[203]),this->_literals[70]);
_v_61458_middle=(j::truth(([&]()->V{V _lhs64714=_v_61455_amount;V _rhs64715=this->_literals[242];return V(j::equal(_lhs64714,_rhs64715,true));})())?V(12.0):V(4.0));
_v_61459_taps.get()=([&]()->V{j::Args _array64716;_array64716.push_back(([&]()->V{j::Args _array64717;_array64717.push_back(V(0.0));_array64717.push_back(V(0.0));_array64717.push_back(_v_61458_middle);return j::array(std::move(_array64717));})());_array64716.push_back(([&]()->V{j::Args _array64718;_array64718.push_back(V(1.0));_array64718.push_back(V(0.0));_array64718.push_back(V(2.0));return j::array(std::move(_array64718));})());_array64716.push_back(([&]()->V{j::Args _array64719;_array64719.push_back(j::unary("-",V(1.0)));_array64719.push_back(V(0.0));_array64719.push_back(V(2.0));return j::array(std::move(_array64719));})());_array64716.push_back(([&]()->V{j::Args _array64720;_array64720.push_back(V(0.0));_array64720.push_back(V(1.0));_array64720.push_back(V(2.0));return j::array(std::move(_array64720));})());_array64716.push_back(([&]()->V{j::Args _array64721;_array64721.push_back(V(0.0));_array64721.push_back(j::unary("-",V(1.0)));_array64721.push_back(V(2.0));return j::array(std::move(_array64721));})());_array64716.push_back(([&]()->V{j::Args _array64722;_array64722.push_back(V(1.0));_array64722.push_back(V(1.0));_array64722.push_back(V(1.0));return j::array(std::move(_array64722));})());_array64716.push_back(([&]()->V{j::Args _array64723;_array64723.push_back(j::unary("-",V(1.0)));_array64723.push_back(V(1.0));_array64723.push_back(V(1.0));return j::array(std::move(_array64723));})());_array64716.push_back(([&]()->V{j::Args _array64724;_array64724.push_back(V(1.0));_array64724.push_back(j::unary("-",V(1.0)));_array64724.push_back(V(1.0));return j::array(std::move(_array64724));})());_array64716.push_back(([&]()->V{j::Args _array64725;_array64725.push_back(j::unary("-",V(1.0)));_array64725.push_back(j::unary("-",V(1.0)));_array64725.push_back(V(1.0));return j::array(std::move(_array64725));})());return j::array(std::move(_array64716));})();
_v_61460_kept.get()=([&]()->V{V _callee64726=j::builtin("Map");return j::construct(_callee64726,j::Args{});})();
_v_61461_when.get()=j::builtin("NaN");
_v_61462_size.get()=j::unary("-",V(1.0));
_v_61463_at1.get()=j::function([=](const j::Args &_args_fn61464,const V &_receiver_fn61464,const V &_self_fn61464) mutable ->V{
V _v_61465_x;
V _v_61466_y;
V _v_61467_t;
V _v_61468_at;
_v_61465_x=_args_fn61464[0];
_v_61466_y=_args_fn61464[1];
_v_61467_t=_args_fn61464[2];
_v_61468_at=_args_fn61464[3];
{
V _v_61469_key;
V _v_61470_v;
if(j::truth(([&]()->V{V _logical64727=([&]()->V{V _lhs64728=_v_61467_t;V _rhs64729=_v_61461_when.get();return V(!j::equal(_lhs64728,_rhs64729,true));})();return !j::truth(_logical64727)?([&]()->V{V _lhs64730=([&]()->V{V _lhs64732=([&]()->V{V _lhs64734=j::get(_v_61468_at,this->_literals[0]);V _rhs64735=V(4096.0);return V(j::number(_lhs64734)*j::number(_rhs64735));})();V _rhs64733=j::get(_v_61468_at,this->_literals[1]);return j::binary("+",_lhs64732,_rhs64733);})();V _rhs64731=_v_61462_size.get();return V(!j::equal(_lhs64730,_rhs64731,true));})():_logical64727;})())){(void)((([&]()->V{V _receiver64736=_v_61460_kept.get();V _method64737=this->_literals[244];V _method=j::get(_receiver64736,_method64737);j::Args _params64738=j::Args{};return j::call(_method,_params64738,_receiver64736);})(),(_v_61461_when.get()=_v_61467_t),(_v_61462_size.get()=([&]()->V{V _lhs64741=([&]()->V{V _lhs64743=j::get(_v_61468_at,this->_literals[0]);V _rhs64744=V(4096.0);return V(j::number(_lhs64743)*j::number(_rhs64744));})();V _rhs64742=j::get(_v_61468_at,this->_literals[1]);return j::binary("+",_lhs64741,_rhs64742);})())));
}
_v_61469_key=([&]()->V{V _lhs64745=([&]()->V{V _lhs64747=([&]()->V{V _lhs64749=([&]()->V{V _lhs64751=([&]()->V{V _number64755=([&]()->V{V _lhs64756=_v_61465_x;V _rhs64757=V(4096.0);return V(j::number(_lhs64756)*j::number(_rhs64757));})();return V(std::floor(j::number(_number64755)+.5));})();V _rhs64752=V(4000000.0);return j::binary("+",_lhs64751,_rhs64752);})();V _rhs64750=V(8000000.0);return V(j::number(_lhs64749)*j::number(_rhs64750));})();V _rhs64748=([&]()->V{V _number64760=([&]()->V{V _lhs64761=_v_61466_y;V _rhs64762=V(4096.0);return V(j::number(_lhs64761)*j::number(_rhs64762));})();return V(std::floor(j::number(_number64760)+.5));})();return j::binary("+",_lhs64747,_rhs64748);})();V _rhs64746=V(4000000.0);return j::binary("+",_lhs64745,_rhs64746);})();
_v_61470_v=([&]()->V{V _receiver64763=_v_61460_kept.get();V _method64764=this->_literals[245];V _method=j::get(_receiver64763,_method64764);j::Args _params64765=j::Args{_v_61469_key};return j::call(_method,_params64765,_receiver64763);})();
if(j::truth(([&]()->V{V _lhs64766=_v_61470_v;V _rhs64767=j::builtin("undefined");return V(j::equal(_lhs64766,_rhs64767,true));})())){(void)(([&]()->V{V _receiver64770=_v_61460_kept.get();V _method64771=this->_literals[246];V _method=j::get(_receiver64770,_method64771);j::Args _params64772=j::Args{_v_61469_key,(_v_61470_v=([&]()->V{V _callee64769=_v_61457_f.get();return j::call(_callee64769,j::Args{_v_61465_x,_v_61466_y,_v_61467_t,_v_61468_at});})())};return j::call(_method,_params64772,_receiver64770);})());
}
return _v_61470_v;

}

return V{};
},4);
return ([&]()->V{V _receiver64806=_receiver_fn61454;V _method64807=this->_literals[212];V _method=j::get(_receiver64806,_method64807);j::Args _params64808=j::Args{([&]()->V{V _obj64773=j::object();j::put(_obj64773,this->_literals[70],j::function([=](const j::Args &_args_fn61471,const V &_receiver_fn61471,const V &_self_fn61471) mutable ->V{
V _v_61472_x;
V _v_61473_y;
V _v_61474_t;
V _v_61475_at;
_v_61472_x=_args_fn61471[0];
_v_61473_y=_args_fn61471[1];
_v_61474_t=_args_fn61471[2];
_v_61475_at=_args_fn61471[3];
{
V _v_61476_cw;
V _v_61477_rh;
V _v_61478_sum;
V _v_61479_weight;
V _v_61480_any;
_v_61476_cw=([&]()->V{V _lhs64774=([&]()->V{V _lhs64776=j::get(_v_61475_at,this->_literals[61]);V _rhs64777=j::get(_v_61475_at,this->_literals[0]);return V(j::number(_lhs64776)/j::number(_rhs64777));})();V _rhs64775=_v_61456_r.get();return V(j::number(_lhs64774)*j::number(_rhs64775));})();
_v_61477_rh=([&]()->V{V _lhs64778=([&]()->V{V _lhs64780=j::get(_v_61475_at,this->_literals[63]);V _rhs64781=j::get(_v_61475_at,this->_literals[1]);return V(j::number(_lhs64780)/j::number(_rhs64781));})();V _rhs64779=_v_61456_r.get();return V(j::number(_lhs64778)*j::number(_rhs64779));})();
_v_61478_sum=V(0.0);
_v_61479_weight=V(0.0);
_v_61480_any=V(false);
{for(const auto &_item64782:j::elements(_v_61459_taps.get())){V _v_61481_i;
V _v_61482_j;
V _v_61483_w;
V _pattern64783=_item64782;
_v_61481_i=j::get(_pattern64783,V(0));
_v_61482_j=j::get(_pattern64783,V(1));
_v_61483_w=j::get(_pattern64783,V(2));
{
V _v_61484_v;
_v_61484_v=([&]()->V{V _callee64792=_v_61463_at1.get();return j::call(_callee64792,j::Args{([&]()->V{V _lhs64784=_v_61472_x;V _rhs64785=([&]()->V{V _lhs64786=_v_61481_i;V _rhs64787=_v_61476_cw;return V(j::number(_lhs64786)*j::number(_rhs64787));})();return j::binary("+",_lhs64784,_rhs64785);})(),([&]()->V{V _lhs64788=_v_61473_y;V _rhs64789=([&]()->V{V _lhs64790=_v_61482_j;V _rhs64791=_v_61477_rh;return V(j::number(_lhs64790)*j::number(_rhs64791));})();return j::binary("+",_lhs64788,_rhs64789);})(),_v_61474_t,_v_61475_at});})();
if(j::truth(([&]()->V{V _lhs64793=_v_61484_v;V _rhs64794=V::null();return V(!j::equal(_lhs64793,_rhs64794,true));})())){(void)((_v_61480_any=V(true)));
}
(void)((_v_61478_sum=j::binary("+",_v_61478_sum,([&]()->V{V _lhs64797=([&]()->V{V _logical64799=_v_61484_v;return j::nullish(_logical64799)?V(0.0):_logical64799;})();V _rhs64798=_v_61483_w;return V(j::number(_lhs64797)*j::number(_rhs64798));})())));
(void)((_v_61479_weight=j::binary("+",_v_61479_weight,_v_61483_w)));

}
}}
(void)(([&]()->V{V _base64802=_v_61475_at;V _key64803=this->_literals[167];V _assign64801=j::builtin("undefined");return j::put(_base64802,_key64803,_assign64801);})());
return (j::truth(_v_61480_any)?([&]()->V{V _lhs64804=_v_61478_sum;V _rhs64805=_v_61479_weight;return V(j::number(_lhs64804)/j::number(_rhs64805));})():V::null());

}

return V{};
},4));return _obj64773;})()};return j::call(_method,_params64808,_receiver64806);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[247],j::function([=](const j::Args &_args_fn61485,const V &_receiver_fn61485,const V &_self_fn61485) mutable ->V{
V _v_61486_level;
V _default64809=_args_fn61485[0];if(_default64809.kind==V::Undefined||_default64809.kind==V::Hole)_default64809=this->_literals[19];
_v_61486_level=_default64809;
{
j::Cell _v_61487_k;
j::Cell _v_61488_f;
_v_61487_k.get()=([&]()->V{V _callee64811=this->_v_61294_wordOr.get();return j::call(_callee64811,j::Args{this->_literals[248],_v_61486_level,([&]()->V{V _obj64810=j::object();j::put(_obj64810,this->_literals[85],V(0.3));j::put(_obj64810,this->_literals[19],V(0.5));j::put(_obj64810,this->_literals[83],V(0.7));return _obj64810;})(),this->_literals[19],V(0.0),V(1.0)});})();
_v_61488_f.get()=j::get(j::get(_receiver_fn61485,this->_literals[203]),this->_literals[70]);
return ([&]()->V{V _receiver64818=_receiver_fn61485;V _method64819=this->_literals[212];V _method=j::get(_receiver64818,_method64819);j::Args _params64820=j::Args{([&]()->V{V _obj64812=j::object();j::put(_obj64812,this->_literals[70],j::function([=](const j::Args &_args_fn61489,const V &_receiver_fn61489,const V &_self_fn61489) mutable ->V{
V _v_61490_x;
V _v_61491_y;
V _v_61492_t;
V _v_61493_at;
_v_61490_x=_args_fn61489[0];
_v_61491_y=_args_fn61489[1];
_v_61492_t=_args_fn61489[2];
_v_61493_at=_args_fn61489[3];
{
V _v_61494_v;
_v_61494_v=([&]()->V{V _callee64813=_v_61488_f.get();return j::call(_callee64813,j::Args{_v_61490_x,_v_61491_y,_v_61492_t,_v_61493_at});})();
return (j::truth(([&]()->V{V _lhs64814=_v_61494_v;V _rhs64815=V::null();return V(j::equal(_lhs64814,_rhs64815,true));})())?V::null():(j::truth(([&]()->V{V _lhs64816=_v_61494_v;V _rhs64817=_v_61487_k.get();return j::binary(">=",_lhs64816,_rhs64817);})())?V(1.0):V(0.0)));

}

return V{};
},4));return _obj64812;})()};return j::call(_method,_params64820,_receiver64818);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[210],j::function([=](const j::Args &_args_fn61495,const V &_receiver_fn61495,const V &_self_fn61495) mutable ->V{
{
j::Cell _v_61496_f;
_v_61496_f.get()=j::get(j::get(_receiver_fn61495,this->_literals[203]),this->_literals[70]);
return ([&]()->V{V _receiver64827=_receiver_fn61495;V _method64828=this->_literals[212];V _method=j::get(_receiver64827,_method64828);j::Args _params64829=j::Args{([&]()->V{V _obj64821=j::object();j::put(_obj64821,this->_literals[70],j::function([=](const j::Args &_args_fn61497,const V &_receiver_fn61497,const V &_self_fn61497) mutable ->V{
V _v_61498_x;
V _v_61499_y;
V _v_61500_t;
V _v_61501_at;
_v_61498_x=_args_fn61497[0];
_v_61499_y=_args_fn61497[1];
_v_61500_t=_args_fn61497[2];
_v_61501_at=_args_fn61497[3];
{
V _v_61502_v;
_v_61502_v=([&]()->V{V _callee64822=_v_61496_f.get();return j::call(_callee64822,j::Args{_v_61498_x,_v_61499_y,_v_61500_t,_v_61501_at});})();
return (j::truth(([&]()->V{V _lhs64823=_v_61502_v;V _rhs64824=V::null();return V(j::equal(_lhs64823,_rhs64824,true));})())?V::null():([&]()->V{V _lhs64825=V(1.0);V _rhs64826=_v_61502_v;return V(j::number(_lhs64825)-j::number(_rhs64826));})());

}

return V{};
},4));return _obj64821;})()};return j::call(_method,_params64829,_receiver64827);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[249],j::function([=](const j::Args &_args_fn61503,const V &_receiver_fn61503,const V &_self_fn61503) mutable ->V{
j::Cell _v_61504_levels;
V _default64830=_args_fn61503[0];if(_default64830.kind==V::Undefined||_default64830.kind==V::Hole)_default64830=V(4.0);
_v_61504_levels.get()=_default64830;
{
j::Cell _v_61505_f;
if(j::truth(([&]()->V{V _logical64831=([&]()->V{V _logical64832=j::unary("!",([&]()->V{V _receiver64833=j::builtin("Number");V _method64834=this->_literals[27];V _method=j::get(_receiver64833,_method64834);j::Args _params64835=j::Args{_v_61504_levels.get()};return j::call(_method,_params64835,_receiver64833);})());return !j::truth(_logical64832)?([&]()->V{V _lhs64836=_v_61504_levels.get();V _rhs64837=V(2.0);return j::binary("<",_lhs64836,_rhs64837);})():_logical64832;})();return !j::truth(_logical64831)?([&]()->V{V _lhs64838=_v_61504_levels.get();V _rhs64839=V(16.0);return j::binary(">",_lhs64838,_rhs64839);})():_logical64831;})())){(void)(([&]()->V{V _callee64842=this->_v_61269_fail.get();return j::call(_callee64842,j::Args{([&]()->V{std::u16string _text64840;_text64840+=u"posterize() takes a whole number of levels from 2 to 16, not ";_text64840+=j::string(([&]()->V{V _callee64841=this->_v_61289_show.get();return j::call(_callee64841,j::Args{_v_61504_levels.get()});})());_text64840+=u"";return V(std::move(_text64840));})()});})());
}
_v_61505_f.get()=j::get(j::get(_receiver_fn61503,this->_literals[203]),this->_literals[70]);
return ([&]()->V{V _receiver64863=_receiver_fn61503;V _method64864=this->_literals[212];V _method=j::get(_receiver64863,_method64864);j::Args _params64865=j::Args{([&]()->V{V _obj64843=j::object();j::put(_obj64843,this->_literals[70],j::function([=](const j::Args &_args_fn61506,const V &_receiver_fn61506,const V &_self_fn61506) mutable ->V{
V _v_61507_x;
V _v_61508_y;
V _v_61509_t;
V _v_61510_at;
_v_61507_x=_args_fn61506[0];
_v_61508_y=_args_fn61506[1];
_v_61509_t=_args_fn61506[2];
_v_61510_at=_args_fn61506[3];
{
V _v_61511_v;
_v_61511_v=([&]()->V{V _callee64844=_v_61505_f.get();return j::call(_callee64844,j::Args{_v_61507_x,_v_61508_y,_v_61509_t,_v_61510_at});})();
return (j::truth(([&]()->V{V _lhs64845=_v_61511_v;V _rhs64846=V::null();return V(j::equal(_lhs64845,_rhs64846,true));})())?V::null():([&]()->V{V _lhs64847=([&]()->V{V _receiver64858=j::builtin("Math");V _method64859=this->_literals[95];V _method=j::get(_receiver64858,_method64859);j::Args _params64860=j::Args{([&]()->V{V _lhs64849=_v_61504_levels.get();V _rhs64850=V(1.0);return V(j::number(_lhs64849)-j::number(_rhs64850));})(),([&]()->V{V _number64853=([&]()->V{V _lhs64854=_v_61511_v;V _rhs64855=_v_61504_levels.get();return V(j::number(_lhs64854)*j::number(_rhs64855));})();return V(std::floor(j::number(_number64853)));})()};return j::call(_method,_params64860,_receiver64858);})();V _rhs64848=([&]()->V{V _lhs64861=_v_61504_levels.get();V _rhs64862=V(1.0);return V(j::number(_lhs64861)-j::number(_rhs64862));})();return V(j::number(_lhs64847)/j::number(_rhs64848));})());

}

return V{};
},4));return _obj64843;})()};return j::call(_method,_params64865,_receiver64863);})();

}

return V{};
},0),false,"method");j::class_method(_class64311,this->_literals[66],j::function([=](const j::Args &_args_fn61512,const V &_receiver_fn61512,const V &_self_fn61512) mutable ->V{
V _v_61513_colors;
_v_61513_colors=_args_fn61512[0];
{
return ([&]()->V{V _receiver64868=_receiver_fn61512;V _method64869=this->_literals[212];V _method=j::get(_receiver64868,_method64869);j::Args _params64870=j::Args{([&]()->V{V _obj64866=j::object();j::put(_obj64866,this->_literals[65],([&]()->V{V _callee64867=this->_v_61293_schemeOf.get();return j::call(_callee64867,j::Args{this->_literals[250],_v_61513_colors});})());return _obj64866;})()};return j::call(_method,_params64870,_receiver64868);})();

}

return V{};
},1),false,"method");j::class_method(_class64311,this->_literals[67],j::function([=](const j::Args &_args_fn61514,const V &_receiver_fn61514,const V &_self_fn61514) mutable ->V{
V _v_61515_chars;
_v_61515_chars=_args_fn61514[0];
{
return ([&]()->V{V _receiver64873=_receiver_fn61514;V _method64874=this->_literals[212];V _method=j::get(_receiver64873,_method64874);j::Args _params64875=j::Args{([&]()->V{V _obj64871=j::object();j::put(_obj64871,this->_literals[67],([&]()->V{V _callee64872=this->_v_61272_rampOf.get();return j::call(_callee64872,j::Args{_v_61515_chars});})());return _obj64871;})()};return j::call(_method,_params64875,_receiver64873);})();

}

return V{};
},1),false,"method");j::class_method(_class64311,this->_literals[51],j::function([=](const j::Args &_args_fn61516,const V &_receiver_fn61516,const V &_self_fn61516) mutable ->V{
V _v_61517_cols;
V _v_61518_rows;
_v_61517_cols=_args_fn61516[0];
_v_61518_rows=_args_fn61516[1];
{
return ([&]()->V{V _receiver64878=_receiver_fn61516;V _method64879=this->_literals[212];V _method=j::get(_receiver64878,_method64879);j::Args _params64880=j::Args{([&]()->V{V _callee64877=this->_v_61621_sizeOf.get();return j::call(_callee64877,j::Args{this->_literals[251],([&]()->V{V _obj64876=j::object();j::put(_obj64876,this->_literals[0],_v_61517_cols);j::put(_obj64876,this->_literals[1],_v_61518_rows);return _obj64876;})(),j::get(_receiver_fn61516,this->_literals[203])});})()};return j::call(_method,_params64880,_receiver64878);})();

}

return V{};
},2),false,"method");j::class_method(_class64311,this->_literals[252],j::function([=](const j::Args &_args_fn61519,const V &_receiver_fn61519,const V &_self_fn61519) mutable ->V{
V _v_61520_name;
V _v_61521_note;
_v_61520_name=_args_fn61519[0];
_v_61521_note=_args_fn61519[1];
{
if(j::truth(([&]()->V{V _logical64881=([&]()->V{V _lhs64882=j::unary("typeof",_v_61520_name);V _rhs64883=this->_literals[2];return V(!j::equal(_lhs64882,_rhs64883,true));})();return !j::truth(_logical64881)?j::unary("!",([&]()->V{V _receiver64884=_v_61520_name;V _method64885=this->_literals[22];V _method=j::get(_receiver64884,_method64885);j::Args _params64886=j::Args{};return j::call(_method,_params64886,_receiver64884);})()):_logical64881;})())){(void)(([&]()->V{V _callee64889=this->_v_61269_fail.get();return j::call(_callee64889,j::Args{([&]()->V{std::u16string _text64887;_text64887+=u"named() takes a name, such as \"harbour\", not ";_text64887+=j::string(([&]()->V{V _callee64888=this->_v_61289_show.get();return j::call(_callee64888,j::Args{_v_61520_name});})());_text64887+=u"";return V(std::move(_text64887));})()});})());
}
return ([&]()->V{V _receiver64892=_receiver_fn61519;V _method64893=this->_literals[212];V _method=j::get(_receiver64892,_method64893);j::Args _params64894=j::Args{([&]()->V{V _obj64890=j::object();j::put(_obj64890,this->_literals[35],_v_61520_name);j::put(_obj64890,this->_literals[45],([&]()->V{V _logical64891=_v_61521_note;return j::nullish(_logical64891)?_v_61520_name:_logical64891;})());return _obj64890;})()};return j::call(_method,_params64894,_receiver64892);})();

}

return V{};
},2),false,"method");j::class_method(_class64311,this->_literals[253],j::function([=](const j::Args &_args_fn61522,const V &_receiver_fn61522,const V &_self_fn61522) mutable ->V{
V _v_61523_bottom;
V _v_61524_o;
_v_61523_bottom=_args_fn61522[0];
_v_61524_o=_args_fn61522[1];
{
return ([&]()->V{V _callee64895=this->_v_61263_overOf.get();return j::call(_callee64895,j::Args{_receiver_fn61522,_v_61523_bottom,_v_61524_o});})();

}

return V{};
},2),false,"method");j::class_method(_class64311,this->_literals[254],j::function([=](const j::Args &_args_fn61525,const V &_receiver_fn61525,const V &_self_fn61525) mutable ->V{
V _v_61526_top;
V _v_61527_o;
_v_61526_top=_args_fn61525[0];
_v_61527_o=_args_fn61525[1];
{
return ([&]()->V{V _callee64896=this->_v_61263_overOf.get();return j::call(_callee64896,j::Args{_v_61526_top,_receiver_fn61525,_v_61527_o});})();

}

return V{};
},2),false,"method");}
this->_v_61528_isMask.get()=j::function([=](const j::Args &_args_fn61529,const V &_receiver_fn61529,const V &_self_fn61529) mutable ->V{
V _v_61530_v;
_v_61530_v=_args_fn61529[0];
return ([&]()->V{V _logical64897=([&]()->V{V _logical64898=([&]()->V{V _logical64899=([&]()->V{V _lhs64900=_v_61530_v;V _rhs64901=V::null();return V(!j::equal(_lhs64900,_rhs64901,true));})();return j::truth(_logical64899)?([&]()->V{V _lhs64902=j::unary("typeof",_v_61530_v);V _rhs64903=this->_literals[33];return V(j::equal(_lhs64902,_rhs64903,true));})():_logical64899;})();return j::truth(_logical64898)?([&]()->V{V _lhs64904=j::get(_v_61530_v,this->_literals[4]);V _rhs64905=this->_literals[5];return V(j::equal(_lhs64904,_rhs64905,true));})():_logical64898;})();return j::truth(_logical64897)?([&]()->V{V _lhs64906=j::unary("typeof",j::get(_v_61530_v,this->_literals[8]));V _rhs64907=this->_literals[9];return V(j::equal(_lhs64906,_rhs64907,true));})():_logical64897;})();
return V{};
},1);
this->_v_61539_colAt.get()=j::function([=](const j::Args &_args_fn61540,const V &_receiver_fn61540,const V &_self_fn61540) mutable ->V{
V _v_61541_x;
V _v_61542_at;
_v_61541_x=_args_fn61540[0];
_v_61542_at=_args_fn61540[1];
return ([&]()->V{V _lhs64908=([&]()->V{V _lhs64910=([&]()->V{V _lhs64912=_v_61541_x;V _rhs64913=([&]()->V{V _lhs64914=j::get(_v_61542_at,this->_literals[61]);V _rhs64915=V(2.0);return V(j::number(_lhs64914)/j::number(_rhs64915));})();return j::binary("+",_lhs64912,_rhs64913);})();V _rhs64911=j::get(_v_61542_at,this->_literals[61]);return V(j::number(_lhs64910)/j::number(_rhs64911));})();V _rhs64909=j::get(_v_61542_at,this->_literals[0]);return V(j::number(_lhs64908)*j::number(_rhs64909));})();
return V{};
},2);
this->_v_61543_rowAt.get()=j::function([=](const j::Args &_args_fn61544,const V &_receiver_fn61544,const V &_self_fn61544) mutable ->V{
V _v_61545_y;
V _v_61546_at;
_v_61545_y=_args_fn61544[0];
_v_61546_at=_args_fn61544[1];
return ([&]()->V{V _lhs64916=([&]()->V{V _lhs64918=([&]()->V{V _lhs64920=_v_61545_y;V _rhs64921=([&]()->V{V _lhs64922=j::get(_v_61546_at,this->_literals[63]);V _rhs64923=V(2.0);return V(j::number(_lhs64922)/j::number(_rhs64923));})();return j::binary("+",_lhs64920,_rhs64921);})();V _rhs64919=j::get(_v_61546_at,this->_literals[63]);return V(j::number(_lhs64918)/j::number(_rhs64919));})();V _rhs64917=j::get(_v_61546_at,this->_literals[1]);return V(j::number(_lhs64916)*j::number(_rhs64917));})();
return V{};
},2);
this->_v_61620_COMMON.get()=([&]()->V{j::Args _array64924;_array64924.push_back(this->_literals[66]);_array64924.push_back(this->_literals[42]);_array64924.push_back(this->_literals[39]);_array64924.push_back(this->_literals[38]);_array64924.push_back(this->_literals[67]);_array64924.push_back(this->_literals[43]);_array64924.push_back(this->_literals[0]);_array64924.push_back(this->_literals[1]);_array64924.push_back(this->_literals[35]);_array64924.push_back(this->_literals[45]);return j::array(std::move(_array64924));})();
this->_v_61628_NOISE_SIZES.get()=([&]()->V{V _obj64925=j::object();j::put(_obj64925,this->_literals[255],V(0.15));j::put(_obj64925,this->_literals[256],V(0.3));j::put(_obj64925,this->_literals[200],V(0.6));j::put(_obj64925,this->_literals[257],V(1.0));j::put(_obj64925,this->_literals[258],V(1.6));return _obj64925;})();
this->_v_61629_TRAVELS.get()=([&]()->V{V _obj64926=j::object();j::put(_obj64926,this->_literals[259],([&]()->V{j::Args _array64927;_array64927.push_back(V(0.0));_array64927.push_back(j::unary("-",V(2.0)));return j::array(std::move(_array64927));})());j::put(_obj64926,this->_literals[140],([&]()->V{j::Args _array64928;_array64928.push_back(V(0.0));_array64928.push_back(V(2.0));return j::array(std::move(_array64928));})());j::put(_obj64926,this->_literals[77],([&]()->V{j::Args _array64929;_array64929.push_back(j::unary("-",V(2.0)));_array64929.push_back(V(0.0));return j::array(std::move(_array64929));})());j::put(_obj64926,this->_literals[78],([&]()->V{j::Args _array64930;_array64930.push_back(V(2.0));_array64930.push_back(V(0.0));return j::array(std::move(_array64930));})());return _obj64926;})();
this->_v_61630_CHANGES.get()=([&]()->V{V _obj64931=j::object();j::put(_obj64931,this->_literals[260],V(0.5));j::put(_obj64931,this->_literals[261],V(1.0));j::put(_obj64931,this->_literals[262],V(2.0));return _obj64931;})();
this->_v_61934_STAR.get()=this->_literals[263];
this->_v_62000_GLYPHS.get()=this->_literals[264];
}
};
}
std::unique_ptr<Module> new_kit_recipes_looks(){return std::make_unique<Generated_kit_recipes_looks>();}
}
