// Direct, statically typed C++ from src/pieces/fractal-tree.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11204;
struct _n_Record_11205;
struct _n_Record_11222;
struct _n_Record_11225;
struct _n_Record_11296;
struct _n_Record_11334;
struct _n_Record_11335;
struct _n_Record_11204{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_11205> _p_options{};
static std::shared_ptr<_n_Record_11204> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11204>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_11205>>(j["options"]);return out;}
};
struct _n_Record_11205{
double _p_seed{};
static std::shared_ptr<_n_Record_11205> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11205>();out->_p_seed=d::decode<double>(j["seed"]);return out;}
};
struct _n_Record_11222{
double _p_parent{};
double _p_depth{};
double _p_turn{};
double _p_len{};
static std::shared_ptr<_n_Record_11222> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11222>();out->_p_parent=d::decode<double>(j["parent"]);out->_p_depth=d::decode<double>(j["depth"]);out->_p_turn=d::decode<double>(j["turn"]);out->_p_len=d::decode<double>(j["len"]);return out;}
};
struct _n_Record_11225{
d::Array<double,false> _p_twigs{};
double _p_ph{};
double _p_bump{};
static std::shared_ptr<_n_Record_11225> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11225>();out->_p_twigs=d::decode<d::Array<double,false>>(j["twigs"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_bump=d::decode<double>(j["bump"]);return out;}
};
struct _n_Record_11296{
std::shared_ptr<_n_Record_11225> _p_b{};
double _p_cx{};
double _p_cy{};
double _p_rx{};
double _p_ry{};
static std::shared_ptr<_n_Record_11296> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11296>();out->_p_b=d::decode<std::shared_ptr<_n_Record_11225>>(j["b"]);out->_p_cx=d::decode<double>(j["cx"]);out->_p_cy=d::decode<double>(j["cy"]);out->_p_rx=d::decode<double>(j["rx"]);out->_p_ry=d::decode<double>(j["ry"]);return out;}
};
struct _n_Record_11334{
std::optional<double> _p_seed{};
static std::shared_ptr<_n_Record_11334> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11334>();out->_p_seed=d::decode<std::optional<double>>(j["seed"]);return out;}
};
struct _n_Record_11335{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11335> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11335>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_11212(double _a0);
double _n_hash_11213(double _a0,double _a1);
std::shared_ptr<_n_Record_11204> _n_meta_11203=[](){return ([&](){auto _n_object_11340=std::make_shared<_n_Record_11204>();_n_object_11340->_p_name=d::String(u"fractal tree");_n_object_11340->_p_category=d::String(u"nature");_n_object_11340->_p_note=d::String(u"a recursive branching tree swaying in the wind");_n_object_11340->_p_cols=60.0;_n_object_11340->_p_rows=24.0;_n_object_11340->_p_fps=15.0;_n_object_11340->_p_options=([&](){auto _n_object_11342=std::make_shared<_n_Record_11205>();_n_object_11342->_p_seed=4.0;return _n_object_11342;})();return _n_object_11340;})();}();
const double _n_DEPTH_11206=[](){return 7.0;}();
const double _n_LOBE_11207=[](){return 6.0;}();
const d::String _n_LEAF_11208=[](){return d::String(u" .:oO");}();
const double _n_LOOP_11209=[](){return 12.0;}();
const double _n_TAU_11210=[](){return (ascii::PI*2.0);}();
const double _n_MAX_LEAN_11211=[](){return 1.1;}();
std::function<double()> _n_mulberry32_11212(double _a0){double _n_a_11236=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_11236=double(d::i32((_n_a_11236+1831565813.0))|d::i32(0.0))));
double _n_t_11237=d::imul(double(d::i32(_n_a_11236)^d::i32(double(d::u32(_n_a_11236)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_11236)));
(void)((_n_t_11237=double(d::i32((_n_t_11237+d::imul(double(d::i32(_n_t_11237)^d::i32(double(d::u32(_n_t_11237)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_11237)))))^d::i32(_n_t_11237))));
return (double(d::u32(double(d::i32(_n_t_11237)^d::i32(double(d::u32(_n_t_11237)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

double _n_hash_11213(double _a0,double _a1){double _n_x_11238=_a0;
double _n_y_11239=_a1;
{
double _n_h_11240=([&](){auto _n_left_11343=d::imul(_n_x_11238,668265261.0);auto _n_right_11344=d::imul(_n_y_11239,374761393.0);return double(d::i32(_n_left_11343)^d::i32(_n_right_11344));})();
(void)((_n_h_11240=d::imul(double(d::i32(_n_h_11240)^d::i32(double(d::u32(_n_h_11240)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_11240)^d::i32(double(d::u32(_n_h_11240)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_fractal_tree final:ascii::Piece{
double _n_seed_11214{};
double _n_cols_11215{};
double _n_rows_11216{};
std::function<double()> _n_rand_11217{};
double _n_GROUND_11218{};
double _n_FORK_11219{};
double _n_X0_11220{};
d::Array<std::shared_ptr<_n_Record_11222>,false> _n_limbs_11221{};
d::Array<std::shared_ptr<_n_Record_11225>,false> _n_lobes_11224{};
d::Array<d::String,false> _n_ink_11226{};
d::Array<uint8_t,true> _n_depthAt_11227{};
d::Array<float,true> _n_shade_11228{};
d::Array<float,true> _n_inner_11229{};
d::Array<float,true> _n_px_11230{};
d::Array<float,true> _n_py_11231{};
d::Array<float,true> _n_pa_11232{};
std::function<d::String(double,std::shared_ptr<_n_Record_11335>)> _render;
void _n_grow_11223(double _a0,double _a1,double _a2){double _n_parent_11241=_a0;
double _n_depth_11242=_a1;
double _n_len_11243=_a2;
{
for(auto &&_n_item_11401:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_11244=_n_item_11401;
{
double _n_spread_11245=([&](){auto _n_left_11402=((d::truth((_n_depth_11242==1.0))?0.58:(d::truth((_n_depth_11242==2.0))?0.48:(0.4+(this->_n_rand_11217()*0.14))))*_n_side_11244);auto _n_right_11403=((this->_n_rand_11217()-0.5)*0.12);return (_n_left_11402+_n_right_11403);})();
double _n_i_11246=(this->_n_limbs_11221.push(([&](){auto _n_object_11405=std::make_shared<_n_Record_11222>();_n_object_11405->_p_parent=_n_parent_11241;_n_object_11405->_p_depth=_n_depth_11242;_n_object_11405->_p_turn=_n_spread_11245;_n_object_11405->_p_len=(_n_len_11243*(0.92+(this->_n_rand_11217()*0.16)));return _n_object_11405;})())-1.0);
if(d::truth((_n_depth_11242<_n_DEPTH_11206))){d::check_cancel();(void)(this->_n_grow_11223(_n_i_11246,(_n_depth_11242+1.0),(_n_len_11243*0.84)));
}

}
}

}
}

void _n_put_11233(double _a0,double _a1,d::String _a2,double _a3){double _n_c_11251=_a0;
double _n_r_11252=_a1;
d::String _n_ch_11253=_a2;
double _n_d_11254=_a3;
{
if((((d::truth((_n_c_11251<0.0))||d::truth((_n_c_11251>=this->_n_cols_11215)))||d::truth((_n_r_11252<0.0)))||d::truth((_n_r_11252>=this->_n_rows_11216)))){d::check_cancel();return;
}
double _n_k_11255=(_n_c_11251+(_n_r_11252*this->_n_cols_11215));
if((d::truth(d::at(this->_n_depthAt_11227,_n_k_11255))&&d::truth((d::at(this->_n_depthAt_11227,_n_k_11255)<=_n_d_11254)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_11406=this->_n_depthAt_11227;auto _n_index_11407=_n_k_11255;auto _n_value_11408=_n_d_11254;d::put(_n_array_11406,_n_index_11407,_n_value_11408);return _n_value_11408;})());
(void)(([&](){auto&& _n_array_11409=this->_n_ink_11226;auto _n_index_11410=_n_k_11255;auto _n_value_11411=_n_ch_11253;d::put(_n_array_11409,_n_index_11410,_n_value_11411);return _n_value_11411;})());

}
}

void _n_stroke_11234(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_x0_11256=_a0;
double _n_y0_11257=_a1;
double _n_x1_11258=_a2;
double _n_y1_11259=_a3;
double _n_depth_11260=_a4;
{
double _n_s_11261=((_n_x1_11258-_n_x0_11256)/(_n_y0_11257-_n_y1_11259));
d::String _n_ch_11262=(d::truth((std::fabs(_n_s_11261)<0.42))?d::String(u"|"):(d::truth((_n_s_11261>0.0))?d::String(u"/"):d::String(u"\\")));
double _n_rTop_11263=d::round(_n_y1_11259);
double _n_rBot_11264=(d::round(_n_y0_11257)-1.0);
std::optional<double> _n_last_11265=std::optional<double>{};
{double _n_r_11266=_n_rBot_11264;
for(;d::truth((_n_r_11266>=_n_rTop_11263));(void)((_n_r_11266--))){d::check_cancel();double _n_c_11267=std::floor((_n_x0_11256+(_n_s_11261*(_n_y0_11257-(_n_r_11266+0.5)))));
(void)(this->_n_put_11233(_n_c_11267,_n_r_11266,_n_ch_11262,(_n_depth_11260+1.0)));
if(d::truth((_n_depth_11260==1.0))){d::check_cancel();(void)(([&](){auto _n_argument_11412=(_n_c_11267-d::sign(([&]()->double{auto _n_logical_11413=_n_s_11261;return d::truth(_n_logical_11413)?_n_logical_11413:1.0;})()));auto _n_argument_11414=_n_r_11266;auto _n_argument_11415=d::String(u"#");auto _n_argument_11416=(_n_depth_11260+1.0);return this->_n_put_11233(_n_argument_11412,_n_argument_11414,_n_argument_11415,_n_argument_11416);})());
}
if(d::truth((d::present(_n_last_11265)))){d::check_cancel();{double _n_b_11268=(d::minimum({_n_c_11267,d::read(_n_last_11265)})+1.0);
for(;d::truth((_n_b_11268<d::maximum({_n_c_11267,d::read(_n_last_11265)})));(void)((_n_b_11268++))){d::check_cancel();(void)(this->_n_put_11233((d::truth((_n_s_11261>0.0))?(_n_b_11268-1.0):(_n_b_11268+1.0)),(_n_r_11266+1.0),d::String(u"_"),(_n_depth_11260+1.0)));
}}
}
(void)((_n_last_11265=std::optional<double>(_n_c_11267)));
}}

}
}

explicit Native_fractal_tree(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11345=d::decode<std::shared_ptr<_n_Record_11334>>(_options.data);
this->_n_seed_11214=(d::present(_n_binding_11345->_p_seed)?d::read(_n_binding_11345->_p_seed):4.0);
auto _n_binding_11346=_n_meta_11203;
this->_n_cols_11215=_n_binding_11346->_p_cols;
this->_n_rows_11216=_n_binding_11346->_p_rows;
this->_n_rand_11217=_n_mulberry32_11212(this->_n_seed_11214);
this->_n_GROUND_11218=(this->_n_rows_11216-1.0);
this->_n_FORK_11219=15.0;
this->_n_X0_11220=((this->_n_cols_11215/2.0)-0.5);
this->_n_limbs_11221=d::Array<std::shared_ptr<_n_Record_11222>,false>{};
(void)(this->_n_grow_11223((-d::number(1.0)),1.0,6.0));
this->_n_lobes_11224=d::Array<std::shared_ptr<_n_Record_11225>,false>{};
(void)(d::forEach(this->_n_limbs_11221,[&]( std::shared_ptr<_n_Record_11222> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_11222> _n_l_11247=_a0;
double _n_i_11248=_a1;
{
if(d::truth((_n_l_11247->_p_depth!=_n_LOBE_11207))){d::check_cancel();return;
}
d::Array<double,false> _n_twigs_11249=d::Array<double,false>{_n_i_11248};
{double _n_j_11250=(_n_i_11248+1.0);
for(;(d::truth((_n_j_11250<double(this->_n_limbs_11221.size())))&&d::truth((d::at(this->_n_limbs_11221,_n_j_11250)->_p_depth>_n_LOBE_11207)));(void)((_n_j_11250++))){d::check_cancel();(void)(_n_twigs_11249.push(_n_j_11250));
}}
(void)(this->_n_lobes_11224.push(([&](){auto _n_object_11348=std::make_shared<_n_Record_11225>();_n_object_11348->_p_twigs=_n_twigs_11249;_n_object_11348->_p_ph=(this->_n_rand_11217()*_n_TAU_11210);_n_object_11348->_p_bump=(0.12+(this->_n_rand_11217()*0.1));return _n_object_11348;})()));

}
}));
this->_n_ink_11226=d::Array<d::String,false>(size_t((this->_n_cols_11215*this->_n_rows_11216)));
this->_n_depthAt_11227=d::Array<uint8_t,true>(size_t((this->_n_cols_11215*this->_n_rows_11216)));
this->_n_shade_11228=d::Array<float,true>(size_t((this->_n_cols_11215*this->_n_rows_11216)));
this->_n_inner_11229=d::Array<float,true>(size_t((this->_n_cols_11215*this->_n_rows_11216)));
this->_n_px_11230=d::Array<float,true>(size_t(double(this->_n_limbs_11221.size())));
this->_n_py_11231=d::Array<float,true>(size_t(double(this->_n_limbs_11221.size())));
this->_n_pa_11232=d::Array<float,true>(size_t(double(this->_n_limbs_11221.size())));
_render=[=]( double _a0,std::shared_ptr<_n_Record_11335> _a1) mutable ->d::String{double _n_t_11269=_a0;
auto _n_binding_11351=(d::present(_a1)?_a1:([&](){auto _n_object_11350=std::make_shared<_n_Record_11335>();return _n_object_11350;})());
bool _n_paper_11270=(d::present(_n_binding_11351->_p_paper)?d::read(_n_binding_11351->_p_paper):false);
{
(void)(this->_n_ink_11226.fill(d::String(u" ")));
(void)(this->_n_depthAt_11227.fill(0.0));
(void)(this->_n_shade_11228.fill((-d::number(1.0))));
(void)(this->_n_inner_11229.fill(0.0));
auto _n_wind_11271=[&]( double _a0) mutable ->double{double _n_u_11272=_a0;
return ([&](){auto _n_left_11352=([&](){auto _n_left_11354=(0.65*std::sin(((_n_TAU_11210*_n_u_11272)/6.0)));auto _n_right_11355=(0.25*std::sin((((_n_TAU_11210*_n_u_11272)/2.4)+1.0)));return (_n_left_11354+_n_right_11355);})();auto _n_right_11353=(0.2*std::pow(std::sin(((_n_TAU_11210*_n_u_11272)/_n_LOOP_11209)),3.0));return (_n_left_11352+_n_right_11353);})();};
{double _n_r_11273=this->_n_FORK_11219;
for(;d::truth((_n_r_11273<=this->_n_GROUND_11218));(void)((_n_r_11273++))){d::check_cancel();double _n_c_11274=d::round((this->_n_X0_11220-1.0));
double _n_flare_11275=d::maximum({0.0,((_n_r_11273-this->_n_GROUND_11218)+2.0)});
{double _n_i_11276=(-d::number(_n_flare_11275));
for(;d::truth((_n_i_11276<(2.0+_n_flare_11275)));(void)((_n_i_11276++))){d::check_cancel();(void)(this->_n_put_11233((_n_c_11274+_n_i_11276),_n_r_11273,d::String(u"#"),1.0));
}}
(void)(this->_n_put_11233(((_n_c_11274-1.0)-_n_flare_11275),_n_r_11273,(d::truth(_n_flare_11275)?d::String(u"/"):d::String(u"|")),1.0));
(void)(this->_n_put_11233(((_n_c_11274+2.0)+_n_flare_11275),_n_r_11273,(d::truth(_n_flare_11275)?d::String(u"\\"):d::String(u"|")),1.0));
}}
{double _n_i_11277=0.0;
for(;d::truth((_n_i_11277<double(this->_n_limbs_11221.size())));(void)((_n_i_11277++))){d::check_cancel();std::shared_ptr<_n_Record_11222> _n_l_11278=d::at(this->_n_limbs_11221,_n_i_11277);
double _n_bend_11279=((0.02+(0.035*_n_l_11278->_p_depth))*(0.25+_n_wind_11271((_n_t_11269-(_n_l_11278->_p_depth*0.12)))));
double _n_x_11280{};
double _n_y_11281{};
double _n_a_11282{};
if(d::truth((_n_l_11278->_p_parent<0.0))){d::check_cancel();(void)(([&](){auto _n_unpack_11356=std::array<double,3>{(this->_n_X0_11220+0.5),(this->_n_FORK_11219+0.5),0.0};_n_x_11280=d::at(_n_unpack_11356,0.0);_n_y_11281=d::at(_n_unpack_11356,1.0);_n_a_11282=d::at(_n_unpack_11356,2.0);return _n_unpack_11356;})());
}else {d::check_cancel();(void)(([&](){auto _n_unpack_11357=std::array<double,3>{d::at(this->_n_px_11230,_n_l_11278->_p_parent),d::at(this->_n_py_11231,_n_l_11278->_p_parent),d::at(this->_n_pa_11232,_n_l_11278->_p_parent)};_n_x_11280=d::at(_n_unpack_11357,0.0);_n_y_11281=d::at(_n_unpack_11357,1.0);_n_a_11282=d::at(_n_unpack_11357,2.0);return _n_unpack_11357;})());
}
(void)((_n_a_11282=([&](){auto _n_argument_11358=(-d::number(_n_MAX_LEAN_11211));auto _n_argument_11359=d::minimum({_n_MAX_LEAN_11211,(((_n_a_11282*(d::truth((_n_l_11278->_p_depth>2.0))?0.85:1.0))+_n_l_11278->_p_turn)+_n_bend_11279)});return d::maximum({_n_argument_11358,_n_argument_11359});})()));
double _n_x1_11283=(_n_x_11280+(std::sin(_n_a_11282)*_n_l_11278->_p_len));
double _n_y1_11284=(_n_y_11281-((std::cos(_n_a_11282)*_n_l_11278->_p_len)/2.0));
if(d::truth((_n_l_11278->_p_depth<(_n_LOBE_11207+1.0)))){d::check_cancel();(void)(this->_n_stroke_11234(_n_x_11280,_n_y_11281,_n_x1_11283,_n_y1_11284,_n_l_11278->_p_depth));
}
(void)(([&](){auto&& _n_array_11360=this->_n_px_11230;auto _n_index_11361=_n_i_11277;auto _n_value_11362=_n_x1_11283;d::put(_n_array_11360,_n_index_11361,_n_value_11362);return _n_value_11362;})());
(void)(([&](){auto&& _n_array_11363=this->_n_py_11231;auto _n_index_11364=_n_i_11277;auto _n_value_11365=_n_y1_11284;d::put(_n_array_11363,_n_index_11364,_n_value_11365);return _n_value_11365;})());
(void)(([&](){auto&& _n_array_11366=this->_n_pa_11232;auto _n_index_11367=_n_i_11277;auto _n_value_11368=_n_a_11282;d::put(_n_array_11366,_n_index_11367,_n_value_11368);return _n_value_11368;})());
}}
double _n_x0_11285=this->_n_cols_11215;
double _n_x1_11286=0.0;
double _n_y0_11287=this->_n_rows_11216;
double _n_y1_11288=0.0;
for(auto &&_n_item_11369:this->_n_lobes_11224){d::check_cancel();std::shared_ptr<_n_Record_11225> _n_b_11289=_n_item_11369;
for(auto &&_n_item_11370:_n_b_11289->_p_twigs){d::check_cancel();double _n_j_11290=_n_item_11370;
(void)(((((_n_x0_11285=d::minimum({_n_x0_11285,d::at(this->_n_px_11230,_n_j_11290)})),(_n_x1_11286=d::maximum({_n_x1_11286,d::at(this->_n_px_11230,_n_j_11290)}))),(_n_y0_11287=d::minimum({_n_y0_11287,d::at(this->_n_py_11231,_n_j_11290)}))),(_n_y1_11288=d::maximum({_n_y1_11288,d::at(this->_n_py_11231,_n_j_11290)}))));
}
}
double _n_gx_11291=((_n_x0_11285+_n_x1_11286)/2.0);
double _n_gy_11292=((_n_y0_11287+_n_y1_11288)/2.0);
double _n_grx_11293=(((_n_x1_11286-_n_x0_11285)/2.0)+3.0);
double _n_gry_11294=(((_n_y1_11288-_n_y0_11287)/2.0)+1.5);
d::Array<std::shared_ptr<_n_Record_11296>,false> _n_order_11295=d::map(this->_n_lobes_11224,[&]( std::shared_ptr<_n_Record_11225> _a0) mutable ->std::shared_ptr<_n_Record_11296>{std::shared_ptr<_n_Record_11225> _n_b_11297=_a0;
{
double _n_p_11298=d::at(this->_n_limbs_11221,d::at(_n_b_11297->_p_twigs,0.0))->_p_parent;
d::Array<std::array<double,2>,false> _n_ends_11299=d::map(_n_b_11297->_p_twigs,[&]( double _a0) mutable ->std::array<double,2>{double _n_j_11300=_a0;
return std::array<double,2>{d::at(this->_n_px_11230,_n_j_11300),d::at(this->_n_py_11231,_n_j_11300)};}).concat(d::Array<std::array<double,2>,false>{std::array<double,2>{d::at(this->_n_px_11230,_n_p_11298),d::at(this->_n_py_11231,_n_p_11298)}});
double _n_sx_11301=0.0;
double _n_sy_11302=0.0;
double _n_wx_11303=0.0;
double _n_wy_11304=0.0;
for(auto &&_n_item_11371:_n_ends_11299){d::check_cancel();auto _n_binding_11372=_n_item_11371;
double _n_x_11305=d::at(_n_binding_11372,0.0);
double _n_y_11306=d::at(_n_binding_11372,1.0);
(void)(((_n_sx_11301=(_n_sx_11301+_n_x_11305)),(_n_sy_11302=(_n_sy_11302+_n_y_11306))));
}
double _n_cx_11307=(_n_sx_11301/double(_n_ends_11299.size()));
double _n_cy_11308=(_n_sy_11302/double(_n_ends_11299.size()));
for(auto &&_n_item_11373:_n_ends_11299){d::check_cancel();auto _n_binding_11374=_n_item_11373;
double _n_x_11309=d::at(_n_binding_11374,0.0);
double _n_y_11310=d::at(_n_binding_11374,1.0);
(void)(((_n_wx_11303=([&](){auto _n_argument_11375=_n_wx_11303;auto _n_argument_11376=std::fabs((_n_x_11309-_n_cx_11307));return d::maximum({_n_argument_11375,_n_argument_11376});})()),(_n_wy_11304=([&](){auto _n_argument_11377=_n_wy_11304;auto _n_argument_11378=std::fabs((_n_y_11310-_n_cy_11308));return d::maximum({_n_argument_11377,_n_argument_11378});})())));
}
return ([&](){auto _n_object_11380=std::make_shared<_n_Record_11296>();_n_object_11380->_p_b=_n_b_11297;_n_object_11380->_p_cx=_n_cx_11307;_n_object_11380->_p_cy=(_n_cy_11308-0.4);_n_object_11380->_p_rx=(1.8+(_n_wx_11303*0.9));_n_object_11380->_p_ry=(1.0+(_n_wy_11304*0.9));return _n_object_11380;})();

}
}).sort([=]( std::shared_ptr<_n_Record_11296> _a0,std::shared_ptr<_n_Record_11296> _a1) mutable ->double{std::shared_ptr<_n_Record_11296> _n_p_11311=_a0;
std::shared_ptr<_n_Record_11296> _n_q_11312=_a1;
return (_n_p_11311->_p_cy-_n_q_11312->_p_cy);});
for(auto &&_n_item_11381:_n_order_11295){d::check_cancel();auto _n_binding_11382=_n_item_11381;
std::shared_ptr<_n_Record_11225> _n_b_11313=_n_binding_11382->_p_b;
double _n_cx_11314=_n_binding_11382->_p_cx;
double _n_cy_11315=_n_binding_11382->_p_cy;
double _n_rx_11316=_n_binding_11382->_p_rx;
double _n_ry_11317=_n_binding_11382->_p_ry;
{double _n_r_11318=std::floor(((_n_cy_11315-_n_ry_11317)-1.0));
for(;d::truth((_n_r_11318<=((_n_cy_11315+_n_ry_11317)+1.0)));(void)((_n_r_11318++))){d::check_cancel();{double _n_c_11319=std::floor(((_n_cx_11314-_n_rx_11316)-1.0));
for(;d::truth((_n_c_11319<=((_n_cx_11314+_n_rx_11316)+1.0)));(void)((_n_c_11319++))){d::check_cancel();if((((d::truth((_n_c_11319<0.0))||d::truth((_n_c_11319>=this->_n_cols_11215)))||d::truth((_n_r_11318<0.0)))||d::truth((_n_r_11318>=this->_n_rows_11216)))){d::check_cancel();continue;
}
double _n_nx_11320=(((_n_c_11319+0.5)-_n_cx_11314)/_n_rx_11316);
double _n_ny_11321=(((_n_r_11318+0.5)-_n_cy_11315)/_n_ry_11317);
double _n_edge_11322=(1.0+(_n_b_11313->_p_bump*std::sin((((std::atan2(_n_ny_11321,_n_nx_11320)*3.0)+_n_b_11313->_p_ph)+((_n_TAU_11210*_n_t_11269)/_n_LOOP_11209)))));
double _n_d2_11323=(((_n_nx_11320*_n_nx_11320)+(_n_ny_11321*_n_ny_11321))/(_n_edge_11322*_n_edge_11322));
if(d::truth((_n_d2_11323>=1.0))){d::check_cancel();continue;
}
double _n_gnx_11324=(((_n_c_11319+0.5)-_n_gx_11291)/_n_grx_11293);
double _n_gny_11325=(((_n_r_11318+0.5)-_n_gy_11292)/_n_gry_11294);
double _n_k_11326=(_n_c_11319+(_n_r_11318*this->_n_cols_11215));
double _n_v_11327=(((((0.36-(0.12*_n_gnx_11324))-(0.16*_n_gny_11325))-(0.24*_n_nx_11320))-(0.4*_n_ny_11321))+(0.16*(_n_hash_11213(_n_c_11319,_n_r_11318)-0.5)));
(void)(([&](){auto&& _n_array_11383=this->_n_shade_11228;auto _n_index_11384=_n_k_11326;auto _n_value_11385=([&](){auto _n_argument_11386=0.0;auto _n_argument_11387=d::minimum({1.0,_n_v_11327});return d::maximum({_n_argument_11386,_n_argument_11387});})();d::put(_n_array_11383,_n_index_11384,_n_value_11385);return _n_value_11385;})());
(void)(([&](){auto&& _n_array_11388=this->_n_inner_11229;auto _n_index_11389=_n_k_11326;auto _n_value_11390=d::maximum({d::at(this->_n_inner_11229,_n_k_11326),(1.0-_n_d2_11323)});d::put(_n_array_11388,_n_index_11389,_n_value_11390);return _n_value_11390;})());
}}
}}
}
{double _n_k_11328=0.0;
for(;d::truth((_n_k_11328<(this->_n_cols_11215*this->_n_rows_11216)));(void)((_n_k_11328++))){d::check_cancel();double _n_v_11329=d::at(this->_n_shade_11228,_n_k_11328);
if(((d::truth((_n_v_11329<0.0))||d::truth(([&]()->std::variant<bool,double>{auto _n_logical_11391=d::at(this->_n_depthAt_11227,_n_k_11328);return d::truth(_n_logical_11391)?std::variant<bool,double>((d::at(this->_n_depthAt_11227,_n_k_11328)<=3.0)):std::variant<bool,double>(_n_logical_11391);})()))||d::truth(([&]()->bool{auto _n_logical_11392=(d::at(this->_n_depthAt_11227,_n_k_11328)==4.0);return d::truth(_n_logical_11392)?(_n_v_11329<0.45):_n_logical_11392;})()))){d::check_cancel();continue;
}
double _n_i_11330=([&](){auto _n_argument_11393=2.0;auto _n_argument_11394=std::floor((_n_v_11329*3.0));return d::minimum({_n_argument_11393,_n_argument_11394});})();
(void)(([&](){auto&& _n_array_11395=this->_n_ink_11226;auto _n_index_11396=_n_k_11328;auto _n_value_11397=d::at(_n_LEAF_11208,(d::truth((d::at(this->_n_inner_11229,_n_k_11328)<0.22))?(d::truth((_n_v_11329<0.4))?1.0:2.0):(d::truth(_n_paper_11270)?(4.0-_n_i_11330):(2.0+_n_i_11330))));d::put(_n_array_11395,_n_index_11396,_n_value_11397);return _n_value_11397;})());
}}
{double _n_c_11331=3.0;
for(;d::truth((_n_c_11331<(this->_n_cols_11215-3.0)));(void)((_n_c_11331++))){d::check_cancel();if(d::truth((d::at(this->_n_ink_11226,(_n_c_11331+(this->_n_GROUND_11218*this->_n_cols_11215)))==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_11398=this->_n_ink_11226;auto _n_index_11399=(_n_c_11331+(this->_n_GROUND_11218*this->_n_cols_11215));auto _n_value_11400=((d::truth((_n_c_11331<6.0))||d::truth((_n_c_11331>(this->_n_cols_11215-7.0))))?d::String(u"."):d::String(u"_"));d::put(_n_array_11398,_n_index_11399,_n_value_11400);return _n_value_11400;})());
}
}}
d::Array<d::String,false> _n_lines_11332=d::Array<d::String,false>{};
{double _n_r_11333=0.0;
for(;d::truth((_n_r_11333<this->_n_rows_11216));(void)((_n_r_11333++))){d::check_cancel();(void)(_n_lines_11332.push(d::join(this->_n_ink_11226.slice((_n_r_11333*this->_n_cols_11215),((_n_r_11333+1.0)*this->_n_cols_11215)),d::String(u""))));
}}
return d::join(_n_lines_11332,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fractal-tree").cols)*ascii::catalog_meta("fractal-tree").rows);auto _env=std::make_shared<_n_Record_11335>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fractal_tree_meta(){return catalog_meta("fractal-tree");}
std::unique_ptr<Piece> make_fractal_tree(const AsciiPieceOptions &o){return std::make_unique<Native_fractal_tree>(o);}
}
