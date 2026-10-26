// Direct, statically typed C++ from src/pieces/fractal-tree.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11205;
struct _n_Record_11206;
struct _n_Record_11223;
struct _n_Record_11226;
struct _n_Record_11297;
struct _n_Record_11335;
struct _n_Record_11336;
struct _n_Record_11205{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_11206> _p_options{};
static std::shared_ptr<_n_Record_11205> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11205>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_11206>>(j["options"]);return out;}
};
struct _n_Record_11206{
double _p_seed{};
static std::shared_ptr<_n_Record_11206> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11206>();out->_p_seed=d::decode<double>(j["seed"]);return out;}
};
struct _n_Record_11223{
double _p_parent{};
double _p_depth{};
double _p_turn{};
double _p_len{};
static std::shared_ptr<_n_Record_11223> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11223>();out->_p_parent=d::decode<double>(j["parent"]);out->_p_depth=d::decode<double>(j["depth"]);out->_p_turn=d::decode<double>(j["turn"]);out->_p_len=d::decode<double>(j["len"]);return out;}
};
struct _n_Record_11226{
d::Array<double,false> _p_twigs{};
double _p_ph{};
double _p_bump{};
static std::shared_ptr<_n_Record_11226> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11226>();out->_p_twigs=d::decode<d::Array<double,false>>(j["twigs"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_bump=d::decode<double>(j["bump"]);return out;}
};
struct _n_Record_11297{
std::shared_ptr<_n_Record_11226> _p_b{};
double _p_cx{};
double _p_cy{};
double _p_rx{};
double _p_ry{};
static std::shared_ptr<_n_Record_11297> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11297>();out->_p_b=d::decode<std::shared_ptr<_n_Record_11226>>(j["b"]);out->_p_cx=d::decode<double>(j["cx"]);out->_p_cy=d::decode<double>(j["cy"]);out->_p_rx=d::decode<double>(j["rx"]);out->_p_ry=d::decode<double>(j["ry"]);return out;}
};
struct _n_Record_11335{
std::optional<double> _p_seed{};
static std::shared_ptr<_n_Record_11335> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11335>();out->_p_seed=d::decode<std::optional<double>>(j["seed"]);return out;}
};
struct _n_Record_11336{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11336> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11336>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_11213(double _a0);
double _n_hash_11214(double _a0,double _a1);
std::shared_ptr<_n_Record_11205> _n_meta_11204=[](){return ([&](){auto _n_object_11341=std::make_shared<_n_Record_11205>();_n_object_11341->_p_name=d::String(u"fractal tree");_n_object_11341->_p_category=d::String(u"nature");_n_object_11341->_p_note=d::String(u"a recursive branching tree swaying in the wind");_n_object_11341->_p_cols=60.0;_n_object_11341->_p_rows=24.0;_n_object_11341->_p_fps=15.0;_n_object_11341->_p_options=([&](){auto _n_object_11343=std::make_shared<_n_Record_11206>();_n_object_11343->_p_seed=4.0;return _n_object_11343;})();return _n_object_11341;})();}();
const double _n_DEPTH_11207=[](){return 7.0;}();
const double _n_LOBE_11208=[](){return 6.0;}();
const d::String _n_LEAF_11209=[](){return d::String(u" .:oO");}();
const double _n_LOOP_11210=[](){return 12.0;}();
const double _n_TAU_11211=[](){return (ascii::PI*2.0);}();
const double _n_MAX_LEAN_11212=[](){return 1.1;}();
std::function<double()> _n_mulberry32_11213(double _a0){double _n_a_11237=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_11237=double(d::i32((_n_a_11237+1831565813.0))|d::i32(0.0))));
double _n_t_11238=d::imul(double(d::i32(_n_a_11237)^d::i32(double(d::u32(_n_a_11237)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_11237)));
(void)((_n_t_11238=double(d::i32((_n_t_11238+d::imul(double(d::i32(_n_t_11238)^d::i32(double(d::u32(_n_t_11238)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_11238)))))^d::i32(_n_t_11238))));
return (double(d::u32(double(d::i32(_n_t_11238)^d::i32(double(d::u32(_n_t_11238)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

double _n_hash_11214(double _a0,double _a1){double _n_x_11239=_a0;
double _n_y_11240=_a1;
{
double _n_h_11241=([&](){auto _n_left_11344=d::imul(_n_x_11239,668265261.0);auto _n_right_11345=d::imul(_n_y_11240,374761393.0);return double(d::i32(_n_left_11344)^d::i32(_n_right_11345));})();
(void)((_n_h_11241=d::imul(double(d::i32(_n_h_11241)^d::i32(double(d::u32(_n_h_11241)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_11241)^d::i32(double(d::u32(_n_h_11241)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_fractal_tree final:ascii::Piece{
double _n_seed_11215{};
double _n_cols_11216{};
double _n_rows_11217{};
std::function<double()> _n_rand_11218{};
double _n_GROUND_11219{};
double _n_FORK_11220{};
double _n_X0_11221{};
d::Array<std::shared_ptr<_n_Record_11223>,false> _n_limbs_11222{};
d::Array<std::shared_ptr<_n_Record_11226>,false> _n_lobes_11225{};
d::Array<d::String,false> _n_ink_11227{};
d::Array<uint8_t,true> _n_depthAt_11228{};
d::Array<float,true> _n_shade_11229{};
d::Array<float,true> _n_inner_11230{};
d::Array<float,true> _n_px_11231{};
d::Array<float,true> _n_py_11232{};
d::Array<float,true> _n_pa_11233{};
std::function<d::String(double,std::shared_ptr<_n_Record_11336>)> _render;
void _n_grow_11224(double _a0,double _a1,double _a2){double _n_parent_11242=_a0;
double _n_depth_11243=_a1;
double _n_len_11244=_a2;
{
for(auto &&_n_item_11402:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_11245=_n_item_11402;
{
double _n_spread_11246=([&](){auto _n_left_11403=((d::truth((_n_depth_11243==1.0))?0.58:(d::truth((_n_depth_11243==2.0))?0.48:(0.4+(this->_n_rand_11218()*0.14))))*_n_side_11245);auto _n_right_11404=((this->_n_rand_11218()-0.5)*0.12);return (_n_left_11403+_n_right_11404);})();
double _n_i_11247=(this->_n_limbs_11222.push(([&](){auto _n_object_11406=std::make_shared<_n_Record_11223>();_n_object_11406->_p_parent=_n_parent_11242;_n_object_11406->_p_depth=_n_depth_11243;_n_object_11406->_p_turn=_n_spread_11246;_n_object_11406->_p_len=(_n_len_11244*(0.92+(this->_n_rand_11218()*0.16)));return _n_object_11406;})())-1.0);
if(d::truth((_n_depth_11243<_n_DEPTH_11207))){d::check_cancel();(void)(this->_n_grow_11224(_n_i_11247,(_n_depth_11243+1.0),(_n_len_11244*0.84)));
}

}
}

}
}

void _n_put_11234(double _a0,double _a1,d::String _a2,double _a3){double _n_c_11252=_a0;
double _n_r_11253=_a1;
d::String _n_ch_11254=_a2;
double _n_d_11255=_a3;
{
if((((d::truth((_n_c_11252<0.0))||d::truth((_n_c_11252>=this->_n_cols_11216)))||d::truth((_n_r_11253<0.0)))||d::truth((_n_r_11253>=this->_n_rows_11217)))){d::check_cancel();return;
}
double _n_k_11256=(_n_c_11252+(_n_r_11253*this->_n_cols_11216));
if((d::truth(d::at(this->_n_depthAt_11228,_n_k_11256))&&d::truth((d::at(this->_n_depthAt_11228,_n_k_11256)<=_n_d_11255)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_11407=this->_n_depthAt_11228;auto _n_index_11408=_n_k_11256;auto _n_value_11409=_n_d_11255;d::put(_n_array_11407,_n_index_11408,_n_value_11409);return _n_value_11409;})());
(void)(([&](){auto&& _n_array_11410=this->_n_ink_11227;auto _n_index_11411=_n_k_11256;auto _n_value_11412=_n_ch_11254;d::put(_n_array_11410,_n_index_11411,_n_value_11412);return _n_value_11412;})());

}
}

void _n_stroke_11235(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_x0_11257=_a0;
double _n_y0_11258=_a1;
double _n_x1_11259=_a2;
double _n_y1_11260=_a3;
double _n_depth_11261=_a4;
{
double _n_s_11262=((_n_x1_11259-_n_x0_11257)/(_n_y0_11258-_n_y1_11260));
d::String _n_ch_11263=(d::truth((std::fabs(_n_s_11262)<0.42))?d::String(u"|"):(d::truth((_n_s_11262>0.0))?d::String(u"/"):d::String(u"\\")));
double _n_rTop_11264=d::round(_n_y1_11260);
double _n_rBot_11265=(d::round(_n_y0_11258)-1.0);
std::optional<double> _n_last_11266=std::optional<double>{};
{double _n_r_11267=_n_rBot_11265;
for(;d::truth((_n_r_11267>=_n_rTop_11264));(void)((_n_r_11267--))){d::check_cancel();double _n_c_11268=std::floor((_n_x0_11257+(_n_s_11262*(_n_y0_11258-(_n_r_11267+0.5)))));
(void)(this->_n_put_11234(_n_c_11268,_n_r_11267,_n_ch_11263,(_n_depth_11261+1.0)));
if(d::truth((_n_depth_11261==1.0))){d::check_cancel();(void)(([&](){auto _n_argument_11413=(_n_c_11268-d::sign(([&]()->double{auto _n_logical_11414=_n_s_11262;return d::truth(_n_logical_11414)?_n_logical_11414:1.0;})()));auto _n_argument_11415=_n_r_11267;auto _n_argument_11416=d::String(u"#");auto _n_argument_11417=(_n_depth_11261+1.0);return this->_n_put_11234(_n_argument_11413,_n_argument_11415,_n_argument_11416,_n_argument_11417);})());
}
if(d::truth((d::present(_n_last_11266)))){d::check_cancel();{double _n_b_11269=(d::minimum({_n_c_11268,d::read(_n_last_11266)})+1.0);
for(;d::truth((_n_b_11269<d::maximum({_n_c_11268,d::read(_n_last_11266)})));(void)((_n_b_11269++))){d::check_cancel();(void)(this->_n_put_11234((d::truth((_n_s_11262>0.0))?(_n_b_11269-1.0):(_n_b_11269+1.0)),(_n_r_11267+1.0),d::String(u"_"),(_n_depth_11261+1.0)));
}}
}
(void)((_n_last_11266=std::optional<double>(_n_c_11268)));
}}

}
}

explicit Native_fractal_tree(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11346=d::decode<std::shared_ptr<_n_Record_11335>>(_options.data);
this->_n_seed_11215=(d::present(_n_binding_11346->_p_seed)?d::read(_n_binding_11346->_p_seed):4.0);
auto _n_binding_11347=_n_meta_11204;
this->_n_cols_11216=_n_binding_11347->_p_cols;
this->_n_rows_11217=_n_binding_11347->_p_rows;
this->_n_rand_11218=_n_mulberry32_11213(this->_n_seed_11215);
this->_n_GROUND_11219=(this->_n_rows_11217-1.0);
this->_n_FORK_11220=15.0;
this->_n_X0_11221=((this->_n_cols_11216/2.0)-0.5);
this->_n_limbs_11222=d::Array<std::shared_ptr<_n_Record_11223>,false>{};
(void)(this->_n_grow_11224((-d::number(1.0)),1.0,6.0));
this->_n_lobes_11225=d::Array<std::shared_ptr<_n_Record_11226>,false>{};
(void)(d::forEach(this->_n_limbs_11222,[&]( std::shared_ptr<_n_Record_11223> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_11223> _n_l_11248=_a0;
double _n_i_11249=_a1;
{
if(d::truth((_n_l_11248->_p_depth!=_n_LOBE_11208))){d::check_cancel();return;
}
d::Array<double,false> _n_twigs_11250=d::Array<double,false>{_n_i_11249};
{double _n_j_11251=(_n_i_11249+1.0);
for(;(d::truth((_n_j_11251<double(this->_n_limbs_11222.size())))&&d::truth((d::at(this->_n_limbs_11222,_n_j_11251)->_p_depth>_n_LOBE_11208)));(void)((_n_j_11251++))){d::check_cancel();(void)(_n_twigs_11250.push(_n_j_11251));
}}
(void)(this->_n_lobes_11225.push(([&](){auto _n_object_11349=std::make_shared<_n_Record_11226>();_n_object_11349->_p_twigs=_n_twigs_11250;_n_object_11349->_p_ph=(this->_n_rand_11218()*_n_TAU_11211);_n_object_11349->_p_bump=(0.12+(this->_n_rand_11218()*0.1));return _n_object_11349;})()));

}
}));
this->_n_ink_11227=d::Array<d::String,false>(size_t((this->_n_cols_11216*this->_n_rows_11217)));
this->_n_depthAt_11228=d::Array<uint8_t,true>(size_t((this->_n_cols_11216*this->_n_rows_11217)));
this->_n_shade_11229=d::Array<float,true>(size_t((this->_n_cols_11216*this->_n_rows_11217)));
this->_n_inner_11230=d::Array<float,true>(size_t((this->_n_cols_11216*this->_n_rows_11217)));
this->_n_px_11231=d::Array<float,true>(size_t(double(this->_n_limbs_11222.size())));
this->_n_py_11232=d::Array<float,true>(size_t(double(this->_n_limbs_11222.size())));
this->_n_pa_11233=d::Array<float,true>(size_t(double(this->_n_limbs_11222.size())));
_render=[=]( double _a0,std::shared_ptr<_n_Record_11336> _a1) mutable ->d::String{double _n_t_11270=_a0;
auto _n_binding_11352=(d::present(_a1)?_a1:([&](){auto _n_object_11351=std::make_shared<_n_Record_11336>();return _n_object_11351;})());
bool _n_paper_11271=(d::present(_n_binding_11352->_p_paper)?d::read(_n_binding_11352->_p_paper):false);
{
(void)(this->_n_ink_11227.fill(d::String(u" ")));
(void)(this->_n_depthAt_11228.fill(0.0));
(void)(this->_n_shade_11229.fill((-d::number(1.0))));
(void)(this->_n_inner_11230.fill(0.0));
auto _n_wind_11272=[&]( double _a0) mutable ->double{double _n_u_11273=_a0;
return ([&](){auto _n_left_11353=([&](){auto _n_left_11355=(0.65*std::sin(((_n_TAU_11211*_n_u_11273)/6.0)));auto _n_right_11356=(0.25*std::sin((((_n_TAU_11211*_n_u_11273)/2.4)+1.0)));return (_n_left_11355+_n_right_11356);})();auto _n_right_11354=(0.2*std::pow(std::sin(((_n_TAU_11211*_n_u_11273)/_n_LOOP_11210)),3.0));return (_n_left_11353+_n_right_11354);})();};
{double _n_r_11274=this->_n_FORK_11220;
for(;d::truth((_n_r_11274<=this->_n_GROUND_11219));(void)((_n_r_11274++))){d::check_cancel();double _n_c_11275=d::round((this->_n_X0_11221-1.0));
double _n_flare_11276=d::maximum({0.0,((_n_r_11274-this->_n_GROUND_11219)+2.0)});
{double _n_i_11277=(-d::number(_n_flare_11276));
for(;d::truth((_n_i_11277<(2.0+_n_flare_11276)));(void)((_n_i_11277++))){d::check_cancel();(void)(this->_n_put_11234((_n_c_11275+_n_i_11277),_n_r_11274,d::String(u"#"),1.0));
}}
(void)(this->_n_put_11234(((_n_c_11275-1.0)-_n_flare_11276),_n_r_11274,(d::truth(_n_flare_11276)?d::String(u"/"):d::String(u"|")),1.0));
(void)(this->_n_put_11234(((_n_c_11275+2.0)+_n_flare_11276),_n_r_11274,(d::truth(_n_flare_11276)?d::String(u"\\"):d::String(u"|")),1.0));
}}
{double _n_i_11278=0.0;
for(;d::truth((_n_i_11278<double(this->_n_limbs_11222.size())));(void)((_n_i_11278++))){d::check_cancel();std::shared_ptr<_n_Record_11223> _n_l_11279=d::at(this->_n_limbs_11222,_n_i_11278);
double _n_bend_11280=((0.02+(0.035*_n_l_11279->_p_depth))*(0.25+_n_wind_11272((_n_t_11270-(_n_l_11279->_p_depth*0.12)))));
double _n_x_11281{};
double _n_y_11282{};
double _n_a_11283{};
if(d::truth((_n_l_11279->_p_parent<0.0))){d::check_cancel();(void)(([&](){auto _n_unpack_11357=d::Array<double,false>{(this->_n_X0_11221+0.5),(this->_n_FORK_11220+0.5),0.0};_n_x_11281=d::at(_n_unpack_11357,0.0);_n_y_11282=d::at(_n_unpack_11357,1.0);_n_a_11283=d::at(_n_unpack_11357,2.0);return _n_unpack_11357;})());
}else {d::check_cancel();(void)(([&](){auto _n_unpack_11358=d::Array<double,false>{d::at(this->_n_px_11231,_n_l_11279->_p_parent),d::at(this->_n_py_11232,_n_l_11279->_p_parent),d::at(this->_n_pa_11233,_n_l_11279->_p_parent)};_n_x_11281=d::at(_n_unpack_11358,0.0);_n_y_11282=d::at(_n_unpack_11358,1.0);_n_a_11283=d::at(_n_unpack_11358,2.0);return _n_unpack_11358;})());
}
(void)((_n_a_11283=([&](){auto _n_argument_11359=(-d::number(_n_MAX_LEAN_11212));auto _n_argument_11360=d::minimum({_n_MAX_LEAN_11212,(((_n_a_11283*(d::truth((_n_l_11279->_p_depth>2.0))?0.85:1.0))+_n_l_11279->_p_turn)+_n_bend_11280)});return d::maximum({_n_argument_11359,_n_argument_11360});})()));
double _n_x1_11284=(_n_x_11281+(std::sin(_n_a_11283)*_n_l_11279->_p_len));
double _n_y1_11285=(_n_y_11282-((std::cos(_n_a_11283)*_n_l_11279->_p_len)/2.0));
if(d::truth((_n_l_11279->_p_depth<(_n_LOBE_11208+1.0)))){d::check_cancel();(void)(this->_n_stroke_11235(_n_x_11281,_n_y_11282,_n_x1_11284,_n_y1_11285,_n_l_11279->_p_depth));
}
(void)(([&](){auto&& _n_array_11361=this->_n_px_11231;auto _n_index_11362=_n_i_11278;auto _n_value_11363=_n_x1_11284;d::put(_n_array_11361,_n_index_11362,_n_value_11363);return _n_value_11363;})());
(void)(([&](){auto&& _n_array_11364=this->_n_py_11232;auto _n_index_11365=_n_i_11278;auto _n_value_11366=_n_y1_11285;d::put(_n_array_11364,_n_index_11365,_n_value_11366);return _n_value_11366;})());
(void)(([&](){auto&& _n_array_11367=this->_n_pa_11233;auto _n_index_11368=_n_i_11278;auto _n_value_11369=_n_a_11283;d::put(_n_array_11367,_n_index_11368,_n_value_11369);return _n_value_11369;})());
}}
double _n_x0_11286=this->_n_cols_11216;
double _n_x1_11287=0.0;
double _n_y0_11288=this->_n_rows_11217;
double _n_y1_11289=0.0;
for(auto &&_n_item_11370:this->_n_lobes_11225){d::check_cancel();std::shared_ptr<_n_Record_11226> _n_b_11290=_n_item_11370;
for(auto &&_n_item_11371:_n_b_11290->_p_twigs){d::check_cancel();double _n_j_11291=_n_item_11371;
(void)(((((_n_x0_11286=d::minimum({_n_x0_11286,d::at(this->_n_px_11231,_n_j_11291)})),(_n_x1_11287=d::maximum({_n_x1_11287,d::at(this->_n_px_11231,_n_j_11291)}))),(_n_y0_11288=d::minimum({_n_y0_11288,d::at(this->_n_py_11232,_n_j_11291)}))),(_n_y1_11289=d::maximum({_n_y1_11289,d::at(this->_n_py_11232,_n_j_11291)}))));
}
}
double _n_gx_11292=((_n_x0_11286+_n_x1_11287)/2.0);
double _n_gy_11293=((_n_y0_11288+_n_y1_11289)/2.0);
double _n_grx_11294=(((_n_x1_11287-_n_x0_11286)/2.0)+3.0);
double _n_gry_11295=(((_n_y1_11289-_n_y0_11288)/2.0)+1.5);
d::Array<std::shared_ptr<_n_Record_11297>,false> _n_order_11296=d::map(this->_n_lobes_11225,[&]( std::shared_ptr<_n_Record_11226> _a0) mutable ->std::shared_ptr<_n_Record_11297>{std::shared_ptr<_n_Record_11226> _n_b_11298=_a0;
{
double _n_p_11299=d::at(this->_n_limbs_11222,d::at(_n_b_11298->_p_twigs,0.0))->_p_parent;
d::Array<d::Array<double,false>,false> _n_ends_11300=d::map(_n_b_11298->_p_twigs,[&]( double _a0) mutable ->d::Array<double,false>{double _n_j_11301=_a0;
return d::Array<double,false>{d::at(this->_n_px_11231,_n_j_11301),d::at(this->_n_py_11232,_n_j_11301)};}).concat(d::Array<d::Array<double,false>,false>{d::Array<double,false>{d::at(this->_n_px_11231,_n_p_11299),d::at(this->_n_py_11232,_n_p_11299)}});
double _n_sx_11302=0.0;
double _n_sy_11303=0.0;
double _n_wx_11304=0.0;
double _n_wy_11305=0.0;
for(auto &&_n_item_11372:_n_ends_11300){d::check_cancel();auto _n_binding_11373=_n_item_11372;
double _n_x_11306=d::at(_n_binding_11373,0.0);
double _n_y_11307=d::at(_n_binding_11373,1.0);
(void)(((_n_sx_11302=(_n_sx_11302+_n_x_11306)),(_n_sy_11303=(_n_sy_11303+_n_y_11307))));
}
double _n_cx_11308=(_n_sx_11302/double(_n_ends_11300.size()));
double _n_cy_11309=(_n_sy_11303/double(_n_ends_11300.size()));
for(auto &&_n_item_11374:_n_ends_11300){d::check_cancel();auto _n_binding_11375=_n_item_11374;
double _n_x_11310=d::at(_n_binding_11375,0.0);
double _n_y_11311=d::at(_n_binding_11375,1.0);
(void)(((_n_wx_11304=([&](){auto _n_argument_11376=_n_wx_11304;auto _n_argument_11377=std::fabs((_n_x_11310-_n_cx_11308));return d::maximum({_n_argument_11376,_n_argument_11377});})()),(_n_wy_11305=([&](){auto _n_argument_11378=_n_wy_11305;auto _n_argument_11379=std::fabs((_n_y_11311-_n_cy_11309));return d::maximum({_n_argument_11378,_n_argument_11379});})())));
}
return ([&](){auto _n_object_11381=std::make_shared<_n_Record_11297>();_n_object_11381->_p_b=_n_b_11298;_n_object_11381->_p_cx=_n_cx_11308;_n_object_11381->_p_cy=(_n_cy_11309-0.4);_n_object_11381->_p_rx=(1.8+(_n_wx_11304*0.9));_n_object_11381->_p_ry=(1.0+(_n_wy_11305*0.9));return _n_object_11381;})();

}
}).sort([=]( std::shared_ptr<_n_Record_11297> _a0,std::shared_ptr<_n_Record_11297> _a1) mutable ->double{std::shared_ptr<_n_Record_11297> _n_p_11312=_a0;
std::shared_ptr<_n_Record_11297> _n_q_11313=_a1;
return (_n_p_11312->_p_cy-_n_q_11313->_p_cy);});
for(auto &&_n_item_11382:_n_order_11296){d::check_cancel();auto _n_binding_11383=_n_item_11382;
std::shared_ptr<_n_Record_11226> _n_b_11314=_n_binding_11383->_p_b;
double _n_cx_11315=_n_binding_11383->_p_cx;
double _n_cy_11316=_n_binding_11383->_p_cy;
double _n_rx_11317=_n_binding_11383->_p_rx;
double _n_ry_11318=_n_binding_11383->_p_ry;
{double _n_r_11319=std::floor(((_n_cy_11316-_n_ry_11318)-1.0));
for(;d::truth((_n_r_11319<=((_n_cy_11316+_n_ry_11318)+1.0)));(void)((_n_r_11319++))){d::check_cancel();{double _n_c_11320=std::floor(((_n_cx_11315-_n_rx_11317)-1.0));
for(;d::truth((_n_c_11320<=((_n_cx_11315+_n_rx_11317)+1.0)));(void)((_n_c_11320++))){d::check_cancel();if((((d::truth((_n_c_11320<0.0))||d::truth((_n_c_11320>=this->_n_cols_11216)))||d::truth((_n_r_11319<0.0)))||d::truth((_n_r_11319>=this->_n_rows_11217)))){d::check_cancel();continue;
}
double _n_nx_11321=(((_n_c_11320+0.5)-_n_cx_11315)/_n_rx_11317);
double _n_ny_11322=(((_n_r_11319+0.5)-_n_cy_11316)/_n_ry_11318);
double _n_edge_11323=(1.0+(_n_b_11314->_p_bump*std::sin((((std::atan2(_n_ny_11322,_n_nx_11321)*3.0)+_n_b_11314->_p_ph)+((_n_TAU_11211*_n_t_11270)/_n_LOOP_11210)))));
double _n_d2_11324=(((_n_nx_11321*_n_nx_11321)+(_n_ny_11322*_n_ny_11322))/(_n_edge_11323*_n_edge_11323));
if(d::truth((_n_d2_11324>=1.0))){d::check_cancel();continue;
}
double _n_gnx_11325=(((_n_c_11320+0.5)-_n_gx_11292)/_n_grx_11294);
double _n_gny_11326=(((_n_r_11319+0.5)-_n_gy_11293)/_n_gry_11295);
double _n_k_11327=(_n_c_11320+(_n_r_11319*this->_n_cols_11216));
double _n_v_11328=(((((0.36-(0.12*_n_gnx_11325))-(0.16*_n_gny_11326))-(0.24*_n_nx_11321))-(0.4*_n_ny_11322))+(0.16*(_n_hash_11214(_n_c_11320,_n_r_11319)-0.5)));
(void)(([&](){auto&& _n_array_11384=this->_n_shade_11229;auto _n_index_11385=_n_k_11327;auto _n_value_11386=([&](){auto _n_argument_11387=0.0;auto _n_argument_11388=d::minimum({1.0,_n_v_11328});return d::maximum({_n_argument_11387,_n_argument_11388});})();d::put(_n_array_11384,_n_index_11385,_n_value_11386);return _n_value_11386;})());
(void)(([&](){auto&& _n_array_11389=this->_n_inner_11230;auto _n_index_11390=_n_k_11327;auto _n_value_11391=d::maximum({d::at(this->_n_inner_11230,_n_k_11327),(1.0-_n_d2_11324)});d::put(_n_array_11389,_n_index_11390,_n_value_11391);return _n_value_11391;})());
}}
}}
}
{double _n_k_11329=0.0;
for(;d::truth((_n_k_11329<(this->_n_cols_11216*this->_n_rows_11217)));(void)((_n_k_11329++))){d::check_cancel();double _n_v_11330=d::at(this->_n_shade_11229,_n_k_11329);
if(((d::truth((_n_v_11330<0.0))||d::truth(([&]()->std::variant<bool,double>{auto _n_logical_11392=d::at(this->_n_depthAt_11228,_n_k_11329);return d::truth(_n_logical_11392)?std::variant<bool,double>((d::at(this->_n_depthAt_11228,_n_k_11329)<=3.0)):std::variant<bool,double>(_n_logical_11392);})()))||d::truth(([&]()->bool{auto _n_logical_11393=(d::at(this->_n_depthAt_11228,_n_k_11329)==4.0);return d::truth(_n_logical_11393)?(_n_v_11330<0.45):_n_logical_11393;})()))){d::check_cancel();continue;
}
double _n_i_11331=([&](){auto _n_argument_11394=2.0;auto _n_argument_11395=std::floor((_n_v_11330*3.0));return d::minimum({_n_argument_11394,_n_argument_11395});})();
(void)(([&](){auto&& _n_array_11396=this->_n_ink_11227;auto _n_index_11397=_n_k_11329;auto _n_value_11398=d::at(_n_LEAF_11209,(d::truth((d::at(this->_n_inner_11230,_n_k_11329)<0.22))?(d::truth((_n_v_11330<0.4))?1.0:2.0):(d::truth(_n_paper_11271)?(4.0-_n_i_11331):(2.0+_n_i_11331))));d::put(_n_array_11396,_n_index_11397,_n_value_11398);return _n_value_11398;})());
}}
{double _n_c_11332=3.0;
for(;d::truth((_n_c_11332<(this->_n_cols_11216-3.0)));(void)((_n_c_11332++))){d::check_cancel();if(d::truth((d::at(this->_n_ink_11227,(_n_c_11332+(this->_n_GROUND_11219*this->_n_cols_11216)))==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_11399=this->_n_ink_11227;auto _n_index_11400=(_n_c_11332+(this->_n_GROUND_11219*this->_n_cols_11216));auto _n_value_11401=((d::truth((_n_c_11332<6.0))||d::truth((_n_c_11332>(this->_n_cols_11216-7.0))))?d::String(u"."):d::String(u"_"));d::put(_n_array_11399,_n_index_11400,_n_value_11401);return _n_value_11401;})());
}
}}
d::Array<d::String,false> _n_lines_11333=d::Array<d::String,false>{};
{double _n_r_11334=0.0;
for(;d::truth((_n_r_11334<this->_n_rows_11217));(void)((_n_r_11334++))){d::check_cancel();(void)(_n_lines_11333.push(d::join(this->_n_ink_11227.slice((_n_r_11334*this->_n_cols_11216),((_n_r_11334+1.0)*this->_n_cols_11216)),d::String(u""))));
}}
return d::join(_n_lines_11333,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fractal-tree").cols)*ascii::catalog_meta("fractal-tree").rows);auto _env=std::make_shared<_n_Record_11336>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fractal_tree_meta(){return catalog_meta("fractal-tree");}
std::unique_ptr<Piece> make_fractal_tree(const AsciiPieceOptions &o){return std::make_unique<Native_fractal_tree>(o);}
}
