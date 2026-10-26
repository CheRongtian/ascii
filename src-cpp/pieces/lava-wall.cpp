// Direct, statically typed C++ from src/pieces/lava-wall.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_18942;
struct _n_Record_18962;
struct _n_Record_18994;
struct _n_Record_19222;
struct _n_Record_19226;
struct _n_Record_18942{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
double _p_loop{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_18942> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18942>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_loop=d::decode<double>(j["loop"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_18962{
double _p_s{};
double _p_top{};
static std::shared_ptr<_n_Record_18962> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18962>();out->_p_s=d::decode<double>(j["s"]);out->_p_top=d::decode<double>(j["top"]);return out;}
};
struct _n_Record_18994{
double _p_cx{};
double _p_bottom{};
double _p_s{};
d::Array<double,false> _p_wax{};
d::Array<double,false> _p_liq{};
d::Array<double,false> _p_glow{};
d::Array<d::Array<double,false>,false> _p_blobs{};
static std::shared_ptr<_n_Record_18994> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18994>();out->_p_cx=d::decode<double>(j["cx"]);out->_p_bottom=d::decode<double>(j["bottom"]);out->_p_s=d::decode<double>(j["s"]);out->_p_wax=d::decode<d::Array<double,false>>(j["wax"]);out->_p_liq=d::decode<d::Array<double,false>>(j["liq"]);out->_p_glow=d::decode<d::Array<double,false>>(j["glow"]);out->_p_blobs=d::decode<d::Array<d::Array<double,false>,false>>(j["blobs"]);return out;}
};
struct _n_Record_19222{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19222> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19222>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_19226{
d::Array<double,false> _p_8{};
d::Array<double,false> _p_b{};
d::Array<double,false> _p_d{};
d::Array<double,false> _p_p{};
d::Array<double,false> _p_q{};
d::Array<double,false> _p_P{};
d::Array<double,false> _p__{};
d::Array<double,false> _p_symbol_2c{};
d::Array<double,false> _p_symbol_2e{};
d::Array<double,false> _p_symbol_27{};
d::Array<double,false> _p_symbol_22{};
d::Array<double,false> _p_symbol_3a{};
static std::shared_ptr<_n_Record_19226> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19226>();out->_p_8=d::decode<d::Array<double,false>>(j["8"]);out->_p_b=d::decode<d::Array<double,false>>(j["b"]);out->_p_d=d::decode<d::Array<double,false>>(j["d"]);out->_p_p=d::decode<d::Array<double,false>>(j["p"]);out->_p_q=d::decode<d::Array<double,false>>(j["q"]);out->_p_P=d::decode<d::Array<double,false>>(j["P"]);out->_p__=d::decode<d::Array<double,false>>(j["_"]);out->_p_symbol_2c=d::decode<d::Array<double,false>>(j[","]);out->_p_symbol_2e=d::decode<d::Array<double,false>>(j["."]);out->_p_symbol_27=d::decode<d::Array<double,false>>(j["'"]);out->_p_symbol_22=d::decode<d::Array<double,false>>(j["\""]);out->_p_symbol_3a=d::decode<d::Array<double,false>>(j[":"]);return out;}
};
double _n_hash_18969(double _a0,double _a1);
double _n_clamp_18970(double _a0);
double _n_smooth_18971(double _a0,double _a1,double _a2);
double _n_mix_18972(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_18973(d::String _a0);
double _n_halfWidth_18974(double _a0);
void _n_blur_18975(d::Array<float,true> _a0,double _a1);
std::shared_ptr<_n_Record_18942> _n_meta_18941=[](){return ([&](){auto _n_object_19225=std::make_shared<_n_Record_18942>();_n_object_19225->_p_name=d::String(u"lava wall");_n_object_19225->_p_category=d::String(u"scenes");_n_object_19225->_p_note=d::String(u"a wall of lava lamps under the glowing orange cloud, watched by a camera");_n_object_19225->_p_cols=200.0;_n_object_19225->_p_rows=100.0;_n_object_19225->_p_cell=1.0;_n_object_19225->_p_fps=15.0;_n_object_19225->_p_loop=30.0;_n_object_19225->_p_ground=d::String(u"#08070a");_n_object_19225->_p_palette=d::Array<d::String,false>{d::String(u"#16121a"),d::String(u"#221c22"),d::String(u"#33282a"),d::String(u"#4a3a32"),d::String(u"#6e5442"),d::String(u"#9a7658"),d::String(u"#404041"),d::String(u"#707074"),d::String(u"#a9a9ae"),d::String(u"#e8e4de"),d::String(u"#5c1616"),d::String(u"#9e211d"),d::String(u"#dc362b"),d::String(u"#ff6a52"),d::String(u"#7c3510"),d::String(u"#c4570f"),d::String(u"#f38020"),d::String(u"#faae40"),d::String(u"#ffd27c"),d::String(u"#fff1c8"),d::String(u"#e6c02a"),d::String(u"#0f3a3c"),d::String(u"#18786f"),d::String(u"#43d6c0"),d::String(u"#2f1842"),d::String(u"#6b2f92"),d::String(u"#b45ddc"),d::String(u"#e2508c"),d::String(u"#1d3768"),d::String(u"#3f80d2")};return _n_object_19225;})();}();
const double _n_W_18943=[](){return 200.0;}();
const double _n_H_18944=[](){return 100.0;}();
const double _n_LOOP_18945=[](){return 30.0;}();
const d::String _n_DOTS_18946=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_18947=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_18948=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_19012=_a0;
return ((_n_v_19012/16.0)-0.47);});}();
const double _n_WALL_18949=[](){return 0.0;}();
const double _n_GLASS_18950=[](){return 1.0;}();
const double _n_METAL_18951=[](){return 2.0;}();
const double _n_SHELF_18952=[](){return 3.0;}();
const double _n_LIP_18953=[](){return 4.0;}();
const double _n_SIGN_18954=[](){return 5.0;}();
const double _n_CAM_18955=[](){return 6.0;}();
const double _n_LENS_18956=[](){return 7.0;}();
const d::String _n_LOGO_18957=[](){return d::String(u"\n\n                                  ._ppp8888888qqq_,\n                               _pp88888888888888888q_,\n                             _p88888888888888888888888q,\n                           .p888888888888888888888888888p\n                          _888888888888888888888888888888q,\n                __ppqqqq__88888888888888888888888888888888q,\n              _p8888888888888888888888888888888888888888888p\n             q888888888888888888888888888888888888888888888P pqqqq__\n            .888888888888888888888888888888888888888888888P q88888888q_,\n            :888888888888888888888888888888888888888888888'.888888888888q,\n        _pppq8888888888888888888888888888888888888888888P  '88888888888888_\n     _p88888888888888888888888888888888888888888888888\"'    \"88888888888888p\n   .p88888888888888888P\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"'          '\"\"\"\"\"\"\"888888,\n  .p8888888888888888888888888888888888888888888qqqqq_      _pppq888888888888b\n  q88888888888888888888888888888888888888888888888888p   _p888888888888888888\n  8888888888888888888888888888888888888888888888888888 .p88888888888888888888\n  888888888888888888888888888888888888888888888888888\" d88888888888888888888P\n\n");}();
d::Dict<d::String,d::Array<double,false>> _n_HALVES_18958=[](){return ([&](){d::Dict<d::String,d::Array<double,false>> _n_dictionary_19227;_n_dictionary_19227.set(d::String(u"8"),d::Array<double,false>{1.0,1.0});_n_dictionary_19227.set(d::String(u"b"),d::Array<double,false>{1.0,1.0});_n_dictionary_19227.set(d::String(u"d"),d::Array<double,false>{1.0,1.0});_n_dictionary_19227.set(d::String(u"p"),d::Array<double,false>{0.5,1.0});_n_dictionary_19227.set(d::String(u"q"),d::Array<double,false>{0.5,1.0});_n_dictionary_19227.set(d::String(u"P"),d::Array<double,false>{1.0,0.5});_n_dictionary_19227.set(d::String(u"_"),d::Array<double,false>{0.0,0.6});_n_dictionary_19227.set(d::String(u","),d::Array<double,false>{0.0,0.5});_n_dictionary_19227.set(d::String(u"."),d::Array<double,false>{0.0,0.5});_n_dictionary_19227.set(d::String(u"'"),d::Array<double,false>{0.7,0.0});_n_dictionary_19227.set(d::String(u"\""),d::Array<double,false>{1.0,0.0});_n_dictionary_19227.set(d::String(u":"),d::Array<double,false>{0.8,0.8});return _n_dictionary_19227;})();}();
d::Array<d::Array<d::Array<double,false>,false>,false> _n_KINDS_18959=[](){return d::Array<d::Array<d::Array<double,false>,false>,false>{d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.2,0.14},d::Array<double,false>{0.55,0.36,0.08}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.52,0.12},d::Array<double,false>{0.5,0.1,0.12}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.82,0.22},d::Array<double,false>{0.55,0.2,0.05}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.95,0.16,0.12},d::Array<double,false>{0.6,0.5,0.12}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.6,0.18},d::Array<double,false>{0.42,0.14,0.05}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.26,0.86,0.75},d::Array<double,false>{0.07,0.17,0.38}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.75,0.36,0.9},d::Array<double,false>{0.14,0.07,0.32}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.32,0.55},d::Array<double,false>{0.3,0.08,0.32}}};}();
d::Array<double,false> _n_WARM_18960=[](){return d::Array<double,false>{0.0,1.0,2.0,3.0,4.0,0.0,1.0,2.0,3.0,4.0};}();
d::Array<std::shared_ptr<_n_Record_18962>,false> _n_SHELVES_18961=[](){return d::Array<std::shared_ptr<_n_Record_18962>,false>{([&](){auto _n_object_19230=std::make_shared<_n_Record_18962>();_n_object_19230->_p_s=0.85;_n_object_19230->_p_top=9.0;return _n_object_19230;})(),([&](){auto _n_object_19232=std::make_shared<_n_Record_18962>();_n_object_19232->_p_s=1.0;_n_object_19232->_p_top=30.0;return _n_object_19232;})(),([&](){auto _n_object_19234=std::make_shared<_n_Record_18962>();_n_object_19234->_p_s=1.15;_n_object_19234->_p_top=50.5;return _n_object_19234;})(),([&](){auto _n_object_19236=std::make_shared<_n_Record_18962>();_n_object_19236->_p_s=1.3;_n_object_19236->_p_top=74.0;return _n_object_19236;})()};}();
const double _n_LAMP_H_18963=[](){return 16.0;}();
const double _n_GLASS_LO_18964=[](){return 4.0;}();
const double _n_GLASS_HI_18965=[](){return 14.0;}();
const double _n_SIGN_W_18966=[](){return 62.0;}();
const double _n_SIGN_X_18967=[](){return (100.0-(_n_SIGN_W_18966/2.0));}();
const double _n_SIGN_Y_18968=[](){return 1.0;}();
double _n_hash_18969(double _a0,double _a1){double _n_x_19013=_a0;
double _n_y_19014=_a1;
{
double _n_h_19015=([&](){auto _n_left_19237=d::imul(double(d::i32(_n_x_19013)|d::i32(0.0)),374761393.0);auto _n_right_19238=d::imul(double(d::i32(_n_y_19014)|d::i32(0.0)),668265263.0);return (_n_left_19237+_n_right_19238);})();
(void)((_n_h_19015=d::imul(double(d::i32(_n_h_19015)^d::i32(double(d::u32(_n_h_19015)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_19015)^d::i32(double(d::u32(_n_h_19015)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_clamp_18970(double _a0){double _n_v_19016=_a0;
return (d::truth((_n_v_19016<0.0))?0.0:(d::truth((_n_v_19016>1.0))?1.0:_n_v_19016));}

double _n_smooth_18971(double _a0,double _a1,double _a2){double _n_a_19017=_a0;
double _n_b_19018=_a1;
double _n_v_19019=_a2;
{
double _n_k_19020=_n_clamp_18970(((_n_v_19019-_n_a_19017)/(_n_b_19018-_n_a_19017)));
return ((_n_k_19020*_n_k_19020)*(3.0-(2.0*_n_k_19020)));

}
}

double _n_mix_18972(double _a0,double _a1,double _a2){double _n_a_19021=_a0;
double _n_b_19022=_a1;
double _n_k_19023=_a2;
return (_n_a_19021+((_n_b_19022-_n_a_19021)*_n_k_19023));}

d::Array<double,false> _n_hex_18973(d::String _a0){d::String _n_s_19024=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_19025=_a0;
return (([&](){auto _n_argument_19239=d::slice(_n_s_19024,_n_i_19025,(_n_i_19025+2.0));auto _n_argument_19240=16.0;return d::parseInt(_n_argument_19239,_n_argument_19240);})()/255.0);});}

double _n_halfWidth_18974(double _a0){double _n_v_19026=_a0;
{
if(d::truth((_n_v_19026<0.0))){d::check_cancel();return (-d::number(1.0));
}
if(d::truth((_n_v_19026<_n_GLASS_LO_18964))){d::check_cancel();return (d::truth((_n_v_19026<0.5))?3.2:(3.0-(1.1*(_n_v_19026/_n_GLASS_LO_18964))));
}
if(d::truth((_n_v_19026<_n_GLASS_HI_18965))){d::check_cancel();double _n_g_19027=((_n_v_19026-_n_GLASS_LO_18964)/(_n_GLASS_HI_18965-_n_GLASS_LO_18964));
return ([&](){auto _n_left_19241=(2.0+(0.9*_n_smooth_18971(0.0,0.3,_n_g_19027)));auto _n_right_19242=(1.55*_n_smooth_18971(0.3,1.0,_n_g_19027));return (_n_left_19241-_n_right_19242);})();
}
if(d::truth((_n_v_19026<_n_LAMP_H_18963))){d::check_cancel();return ((1.35-(0.55*((_n_v_19026-_n_GLASS_HI_18965)/(_n_LAMP_H_18963-_n_GLASS_HI_18965))))-(d::truth((_n_v_19026>(_n_LAMP_H_18963-0.6)))?0.3:0.0));
}
return (-d::number(1.0));

}
}

void _n_blur_18975(d::Array<float,true> _a0,double _a1){d::Array<float,true> _n_a_19028=_a0;
double _n_r_19029=_a1;
{
d::Array<float,true> _n_tmp_19030=d::Array<float,true>(size_t((_n_W_18943*_n_H_18944)));
{double _n_y_19031=0.0;
for(;d::truth((_n_y_19031<_n_H_18944));(void)((_n_y_19031++))){d::check_cancel();{double _n_x_19032=0.0;
for(;d::truth((_n_x_19032<_n_W_18943));(void)((_n_x_19032++))){d::check_cancel();double _n_s_19033=0.0;
{double _n_d_19034=(-d::number(_n_r_19029));
for(;d::truth((_n_d_19034<=_n_r_19029));(void)((_n_d_19034++))){d::check_cancel();(void)((_n_s_19033=(_n_s_19033+d::at(_n_a_19028,((_n_y_19031*_n_W_18943)+([&](){auto _n_argument_19243=(_n_W_18943-1.0);auto _n_argument_19244=d::maximum({0.0,(_n_x_19032+_n_d_19034)});return d::minimum({_n_argument_19243,_n_argument_19244});})())))));
}}
(void)(([&](){auto&& _n_array_19245=_n_tmp_19030;auto _n_index_19246=((_n_y_19031*_n_W_18943)+_n_x_19032);auto _n_value_19247=(_n_s_19033/((2.0*_n_r_19029)+1.0));d::put(_n_array_19245,_n_index_19246,_n_value_19247);return _n_value_19247;})());
}}
}}
{double _n_y_19035=0.0;
for(;d::truth((_n_y_19035<_n_H_18944));(void)((_n_y_19035++))){d::check_cancel();{double _n_x_19036=0.0;
for(;d::truth((_n_x_19036<_n_W_18943));(void)((_n_x_19036++))){d::check_cancel();double _n_s_19037=0.0;
{double _n_d_19038=(-d::number(_n_r_19029));
for(;d::truth((_n_d_19038<=_n_r_19029));(void)((_n_d_19038++))){d::check_cancel();(void)((_n_s_19037=(_n_s_19037+d::at(_n_tmp_19030,((([&](){auto _n_argument_19248=(_n_H_18944-1.0);auto _n_argument_19249=d::maximum({0.0,(_n_y_19035+_n_d_19038)});return d::minimum({_n_argument_19248,_n_argument_19249});})()*_n_W_18943)+_n_x_19036)))));
}}
(void)(([&](){auto&& _n_array_19250=_n_a_19028;auto _n_index_19251=((_n_y_19035*_n_W_18943)+_n_x_19036);auto _n_value_19252=(_n_s_19037/((2.0*_n_r_19029)+1.0));d::put(_n_array_19250,_n_index_19251,_n_value_19252);return _n_value_19252;})());
}}
}}

}
}

struct Native_lava_wall final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_18976{};
double _n_N_18977{};
d::Array<d::String,false> _n_out_18978{};
d::Array<uint8_t,true> _n_lut_18979{};
d::Array<d::String,false> _n_rows_18981{};
double _n_GW_18982{};
double _n_GH_18983{};
d::Array<float,true> _n_cov_18984{};
d::Array<uint8_t,true> _n_back_18985{};
d::Array<double,false> _n_seam_18986{};
double _n_LK_18988{};
d::Array<float,true> _n_signCov_18989{};
d::Array<uint8_t,true> _n_signBack_18990{};
d::Array<float,true> _n_haloNear_18991{};
d::Array<float,true> _n_haloFar_18992{};
d::Array<std::shared_ptr<_n_Record_18994>,false> _n_lamps_18993{};
d::Array<uint8_t,true> _n_mat_18995{};
d::Array<int16_t,true> _n_lampOf_18996{};
d::Array<float,true> _n_lu_18997{};
d::Array<float,true> _n_lv_18998{};
d::Array<int8_t,true> _n_shelfOf_18999{};
d::Array<float,true> _n_spill_19000{};
d::Array<float,true> _n_camRim_19001{};
d::Array<double,false> _n_SIGN_C_19003{};
d::Array<double,false> _n_BACK_C_19004{};
d::Array<float,true> _n_screen_19005{};
double _n_MINI_19006{};
double _n_NB_19007{};
d::Array<float,true> _n_blobX_19008{};
d::Array<float,true> _n_blobY_19009{};
d::Array<float,true> _n_blobR_19010{};
d::Array<float,true> _n_blobS_19011{};
std::function<d::String(double,std::shared_ptr<_n_Record_19222>)> _render;
double _n_nearest_18980(double _a0,double _a1,double _a2){double _n_r_19039=_a0;
double _n_g_19040=_a1;
double _n_b_19041=_a2;
{
double _n_k_19042=([&](){auto _n_left_19397=([&](){auto _n_left_19399=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_19039*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_19400=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_19040*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_19399)|d::i32(_n_right_19400));})();auto _n_right_19398=d::minimum({31.0,double(d::i32((_n_b_19041*31.99))|d::i32(0.0))});return double(d::i32(_n_left_19397)|d::i32(_n_right_19398));})();
if(d::truth((d::at(this->_n_lut_18979,_n_k_19042)!=255.0))){d::check_cancel();return d::at(this->_n_lut_18979,_n_k_19042);
}
double _n_best_19043=0.0;
double _n_bd_19044=1000000000.0;
{double _n_i_19045=0.0;
for(;d::truth((_n_i_19045<double(this->_n_P_18976.size())));(void)((_n_i_19045++))){d::check_cancel();double _n_dr_19046=(d::at(d::at(this->_n_P_18976,_n_i_19045),0.0)-_n_r_19039);
double _n_dg_19047=(d::at(d::at(this->_n_P_18976,_n_i_19045),1.0)-_n_g_19040);
double _n_db_19048=(d::at(d::at(this->_n_P_18976,_n_i_19045),2.0)-_n_b_19041);
double _n_d_19049=((((0.3*_n_dr_19046)*_n_dr_19046)+((0.5*_n_dg_19047)*_n_dg_19047))+((0.2*_n_db_19048)*_n_db_19048));
if(d::truth((_n_d_19049<_n_bd_19044))){d::check_cancel();(void)(((_n_bd_19044=_n_d_19049),(_n_best_19043=_n_i_19045)));
}
}}
return ([&](){auto&& _n_array_19401=this->_n_lut_18979;auto _n_index_19402=_n_k_19042;auto _n_value_19403=_n_best_19043;d::put(_n_array_19401,_n_index_19402,_n_value_19403);return _n_value_19403;})();

}
}

double _n_logoAt_18987(double _a0,double _a1){double _n_gx_19062=_a0;
double _n_gy_19063=_a1;
{
double _n_xi_19064=std::floor(_n_gx_19062);
double _n_yi_19065=std::floor(_n_gy_19063);
double _n_fx_19066=(_n_gx_19062-_n_xi_19064);
double _n_fy_19067=(_n_gy_19063-_n_yi_19065);
auto _n_at_19068=[&]( double _a0,double _a1) mutable ->double{double _n_x_19069=_a0;
double _n_y_19070=_a1;
return ((((d::truth((_n_x_19069<0.0))||d::truth((_n_y_19070<0.0)))||d::truth((_n_x_19069>=this->_n_GW_18982)))||d::truth((_n_y_19070>=this->_n_GH_18983)))?0.0:d::at(this->_n_cov_18984,((_n_y_19070*this->_n_GW_18982)+_n_x_19069)));};
return ([&](){auto _n_argument_19404=([&](){auto _n_argument_19405=_n_at_19068(_n_xi_19064,_n_yi_19065);auto _n_argument_19406=_n_at_19068((_n_xi_19064+1.0),_n_yi_19065);auto _n_argument_19407=_n_fx_19066;return _n_mix_18972(_n_argument_19405,_n_argument_19406,_n_argument_19407);})();auto _n_argument_19408=([&](){auto _n_argument_19409=_n_at_19068(_n_xi_19064,(_n_yi_19065+1.0));auto _n_argument_19410=_n_at_19068((_n_xi_19064+1.0),(_n_yi_19065+1.0));auto _n_argument_19411=_n_fx_19066;return _n_mix_18972(_n_argument_19409,_n_argument_19410,_n_argument_19411);})();auto _n_argument_19412=_n_fy_19067;return _n_mix_18972(_n_argument_19404,_n_argument_19408,_n_argument_19412);})();

}
}

double _n_inCam_19002(double _a0,double _a1){double _n_x_19124=_a0;
double _n_y_19125=_a1;
{
double _n_bx_19126=([&](){auto _n_argument_19413=0.0;auto _n_argument_19414=(std::fabs((_n_x_19124-168.0))-16.0);return d::maximum({_n_argument_19413,_n_argument_19414});})();
double _n_by_19127=([&](){auto _n_argument_19415=0.0;auto _n_argument_19416=(std::fabs((_n_y_19125-73.0))-6.5);return d::maximum({_n_argument_19415,_n_argument_19416});})();
if(d::truth((((_n_bx_19126*_n_bx_19126)+(_n_by_19127*_n_by_19127))<4.0))){d::check_cancel();return ((((d::truth((_n_x_19124>=154.0))&&d::truth((_n_x_19124<176.0)))&&d::truth((_n_y_19125>=67.5)))&&d::truth((_n_y_19125<79.0)))?_n_LENS_18956:_n_CAM_18955);
}
if(((d::truth((_n_y_19125>=59.5))&&d::truth((_n_y_19125<66.0)))&&d::truth((std::fabs((_n_x_19124-166.0))<(5.5+((_n_y_19125-59.5)*0.45)))))){d::check_cancel();return _n_CAM_18955;
}
if(((d::truth((_n_y_19125>=63.5))&&d::truth((_n_y_19125<66.0)))&&d::truth(([&]()->bool{auto _n_logical_19417=([&]()->bool{auto _n_logical_19419=(_n_x_19124>=153.0);return d::truth(_n_logical_19419)?(_n_x_19124<158.0):_n_logical_19419;})();return d::truth(_n_logical_19417)?_n_logical_19417:([&]()->bool{auto _n_logical_19418=(_n_x_19124>=177.0);return d::truth(_n_logical_19418)?(_n_x_19124<182.0):_n_logical_19418;})();})()))){d::check_cancel();return _n_CAM_18955;
}
if((((d::truth((_n_x_19124>=162.0))&&d::truth((_n_x_19124<174.0)))&&d::truth((_n_y_19125>=80.0)))&&d::truth((_n_y_19125<86.0)))){d::check_cancel();return _n_CAM_18955;
}
for(auto &&_n_item_19420:d::Array<double,false>{138.0,200.0}){d::check_cancel();double _n_fx_19128=_n_item_19420;
{
double _n_k_19129=((_n_y_19125-85.0)/15.0);
if(((d::truth((_n_k_19129>=0.0))&&d::truth((_n_k_19129<=1.1)))&&d::truth((std::fabs((_n_x_19124-_n_mix_18972(168.0,_n_fx_19128,_n_k_19129)))<(1.3+(0.5*_n_k_19129)))))){d::check_cancel();return _n_CAM_18955;
}

}
}
if((d::truth((_n_y_19125>=85.0))&&d::truth((std::fabs((_n_x_19124-168.0))<1.0)))){d::check_cancel();return _n_CAM_18955;
}
return 0.0;

}
}

explicit Native_lava_wall(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_18976=d::map(_n_meta_18941->_p_palette,_n_hex_18973);
this->_n_N_18977=(_n_W_18943*_n_H_18944);
this->_n_out_18978=d::Array<d::String,false>(size_t(this->_n_N_18977));
this->_n_lut_18979=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_rows_18981=d::split(d::slice(_n_LOGO_18957,1.0,(-d::number(1.0))),d::String(u"\n"));
this->_n_GW_18982=79.0;
this->_n_GH_18983=(double(this->_n_rows_18981.size())*2.0);
this->_n_cov_18984=d::Array<float,true>(size_t((this->_n_GW_18982*this->_n_GH_18983)));
this->_n_back_18985=d::Array<uint8_t,true>(size_t((this->_n_GW_18982*this->_n_GH_18983)));
this->_n_seam_18986=d::map(this->_n_rows_18981,[&]( d::String _a0) mutable ->double{d::String _n_line_19050=_a0;
{
double _n_first_19051=d::search(_n_line_19050,d::Regex(u"\\S",u""));
double _n_last_19052=(double(d::trim(_n_line_19050,false,true).size())-1.0);
double _n_at_19053=(-d::number(1.0));
{double _n_x_19054=(_n_first_19051+1.0);
for(;d::truth((_n_x_19054<_n_last_19052));(void)((_n_x_19054++))){d::check_cancel();if(d::truth((d::at(_n_line_19050,_n_x_19054)==d::String(u" ")))){d::check_cancel();(void)((_n_at_19053=_n_x_19054));
}
}}
return _n_at_19053;

}
});
{double _n_y_19055=0.0;
for(;d::truth((_n_y_19055<double(this->_n_rows_18981.size())));(void)((_n_y_19055++))){d::check_cancel();if((d::truth((d::at(this->_n_seam_18986,_n_y_19055)>=0.0))||d::truth((_n_y_19055<8.0)))){d::check_cancel();continue;
}
double _n_a_19056=(_n_y_19055-1.0);
double _n_b_19057=(_n_y_19055+1.0);
while((d::truth((_n_b_19057<double(this->_n_rows_18981.size())))&&d::truth((d::at(this->_n_seam_18986,_n_b_19057)<0.0)))){d::check_cancel();(void)((_n_b_19057++));
}
(void)(([&](){auto&& _n_array_19253=this->_n_seam_18986;auto _n_index_19254=_n_y_19055;auto _n_value_19255=(d::truth((_n_b_19057<double(this->_n_rows_18981.size())))?((d::at(this->_n_seam_18986,_n_a_19056)+d::at(this->_n_seam_18986,_n_b_19057))/2.0):d::at(this->_n_seam_18986,_n_a_19056));d::put(_n_array_19253,_n_index_19254,_n_value_19255);return _n_value_19255;})());
}}
{double _n_y_19058=0.0;
for(;d::truth((_n_y_19058<double(this->_n_rows_18981.size())));(void)((_n_y_19058++))){d::check_cancel();{double _n_x_19059=0.0;
for(;d::truth((_n_x_19059<this->_n_GW_18982));(void)((_n_x_19059++))){d::check_cancel();d::Array<double,false> _n_h_19060=([&]()->d::Array<double,false>{auto _n_logical_19256=_n_HALVES_18958.get(([&]()->d::String{auto _n_logical_19257=d::at(d::at(this->_n_rows_18981,_n_y_19058),_n_x_19059);return d::has(d::at(this->_n_rows_18981,_n_y_19058),_n_x_19059)?_n_logical_19257:d::String(u" ");})());return d::present(_n_logical_19256)?_n_logical_19256:d::Array<double,false>{0.0,0.0};})();
double _n_isBack_19061=(((d::truth((_n_y_19058>=8.0))&&d::truth((d::at(this->_n_seam_18986,_n_y_19058)>=0.0)))&&d::truth((_n_x_19059>d::at(this->_n_seam_18986,_n_y_19058))))?1.0:0.0);
(void)(([&](){auto&& _n_array_19258=this->_n_cov_18984;auto _n_index_19259=(((2.0*_n_y_19058)*this->_n_GW_18982)+_n_x_19059);auto _n_value_19260=d::at(_n_h_19060,0.0);d::put(_n_array_19258,_n_index_19259,_n_value_19260);return _n_value_19260;})());
(void)(([&](){auto&& _n_array_19261=this->_n_cov_18984;auto _n_index_19262=((((2.0*_n_y_19058)+1.0)*this->_n_GW_18982)+_n_x_19059);auto _n_value_19263=d::at(_n_h_19060,1.0);d::put(_n_array_19261,_n_index_19262,_n_value_19263);return _n_value_19263;})());
(void)(([&](){auto&& _n_array_19264=this->_n_back_18985;auto _n_index_19265=(((2.0*_n_y_19058)*this->_n_GW_18982)+_n_x_19059);auto _n_value_19266=([&](){auto&& _n_array_19267=this->_n_back_18985;auto _n_index_19268=((((2.0*_n_y_19058)+1.0)*this->_n_GW_18982)+_n_x_19059);auto _n_value_19269=_n_isBack_19061;d::put(_n_array_19267,_n_index_19268,_n_value_19269);return _n_value_19269;})();d::put(_n_array_19264,_n_index_19265,_n_value_19266);return _n_value_19266;})());
}}
}}
this->_n_LK_18988=(_n_SIGN_W_18966/76.0);
this->_n_signCov_18989=d::Array<float,true>(size_t(this->_n_N_18977));
this->_n_signBack_18990=d::Array<uint8_t,true>(size_t(this->_n_N_18977));
{double _n_r_19071=0.0;
for(;d::truth((_n_r_19071<_n_H_18944));(void)((_n_r_19071++))){d::check_cancel();{double _n_x_19072=0.0;
for(;d::truth((_n_x_19072<_n_W_18943));(void)((_n_x_19072++))){d::check_cancel();double _n_gx_19073=(1.5+(((_n_x_19072+0.5)-_n_SIGN_X_18967)/this->_n_LK_18988));
double _n_gy_19074=(2.0+(((_n_r_19071+0.5)-_n_SIGN_Y_18968)/this->_n_LK_18988));
if((((d::truth((_n_gx_19073<(-d::number(1.0))))||d::truth((_n_gy_19074<(-d::number(1.0)))))||d::truth((_n_gx_19073>this->_n_GW_18982)))||d::truth((_n_gy_19074>this->_n_GH_18983)))){d::check_cancel();continue;
}
double _n_c_19075=0.0;
for(auto &&_n_item_19270:d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(0.25)),(-d::number(0.25))},d::Array<double,false>{0.25,(-d::number(0.25))},d::Array<double,false>{(-d::number(0.25)),0.25},d::Array<double,false>{0.25,0.25}}){d::check_cancel();auto _n_binding_19271=_n_item_19270;
double _n_ox_19076=d::at(_n_binding_19271,0.0);
double _n_oy_19077=d::at(_n_binding_19271,1.0);
(void)((_n_c_19075=(_n_c_19075+this->_n_logoAt_18987(((_n_gx_19073-0.5)+(_n_ox_19076/this->_n_LK_18988)),((_n_gy_19074-0.5)+(_n_oy_19077/this->_n_LK_18988))))));
}
(void)(([&](){auto&& _n_array_19272=this->_n_signCov_18989;auto _n_index_19273=((_n_r_19071*_n_W_18943)+_n_x_19072);auto _n_value_19274=_n_smooth_18971(0.35,0.7,(_n_c_19075/4.0));d::put(_n_array_19272,_n_index_19273,_n_value_19274);return _n_value_19274;})());
double _n_bx_19078=d::round((_n_gx_19073-0.5));
double _n_by_19079=d::round((_n_gy_19074-0.5));
if((((d::truth((_n_bx_19078>=0.0))&&d::truth((_n_by_19079>=0.0)))&&d::truth((_n_bx_19078<this->_n_GW_18982)))&&d::truth((_n_by_19079<this->_n_GH_18983)))){d::check_cancel();(void)(([&](){auto&& _n_array_19275=this->_n_signBack_18990;auto _n_index_19276=((_n_r_19071*_n_W_18943)+_n_x_19072);auto _n_value_19277=d::at(this->_n_back_18985,((_n_by_19079*this->_n_GW_18982)+_n_bx_19078));d::put(_n_array_19275,_n_index_19276,_n_value_19277);return _n_value_19277;})());
}
}}
}}
this->_n_haloNear_18991=d::Array<float,true>(this->_n_signCov_18989);
this->_n_haloFar_18992=d::Array<float,true>(this->_n_signCov_18989);
(void)((_n_blur_18975(this->_n_haloNear_18991,2.0),_n_blur_18975(this->_n_haloNear_18991,2.0)));
(void)((_n_blur_18975(this->_n_haloFar_18992,7.0),_n_blur_18975(this->_n_haloFar_18992,7.0)));
this->_n_lamps_18993=d::Array<std::shared_ptr<_n_Record_18994>,false>{};
this->_n_mat_18995=d::Array<uint8_t,true>(size_t(this->_n_N_18977));
this->_n_lampOf_18996=d::Array<int16_t,true>(size_t(this->_n_N_18977)).fill((-d::number(1.0)));
this->_n_lu_18997=d::Array<float,true>(size_t(this->_n_N_18977));
this->_n_lv_18998=d::Array<float,true>(size_t(this->_n_N_18977));
this->_n_shelfOf_18999=d::Array<int8_t,true>(size_t(this->_n_N_18977)).fill((-d::number(1.0)));
(void)(d::forEach(_n_SHELVES_18961,[&]( std::shared_ptr<_n_Record_18962> _a0,double _a1) mutable ->void{auto _n_binding_19278=_a0;
double _n_s_19080=_n_binding_19278->_p_s;
double _n_top_19081=_n_binding_19278->_p_top;
double _n_j_19082=_a1;
{
double _n_bottom_19083=(_n_top_19081+(_n_LAMP_H_18963*_n_s_19080));
double _n_sp_19084=(10.5*_n_s_19080);
{double _n_i_19085=(-d::number(12.0));
for(;d::truth((_n_i_19085<=12.0));(void)((_n_i_19085++))){d::check_cancel();double _n_cx_19086=(100.0+(((_n_i_19085+(d::mod(_n_j_19082,2.0)*0.5))-0.25)*_n_sp_19084));
if((d::truth((_n_cx_19086<(-d::number(5.0))))||d::truth((_n_cx_19086>(_n_W_18943+5.0))))){d::check_cancel();continue;
}
if((d::truth((_n_j_19082==0.0))&&d::truth((std::fabs((_n_cx_19086-100.0))<((_n_SIGN_W_18966/2.0)+5.0))))){d::check_cancel();continue;
}
double _n_h_19087=_n_hash_18969((_n_i_19085+40.0),(_n_j_19082+7.0));
double _n_kind_19088=(d::truth((_n_h_19087<0.78))?d::at(_n_WARM_18960,std::floor((_n_hash_18969(_n_i_19085,(_n_j_19082*13.0))*double(_n_WARM_18960.size())))):(5.0+std::floor((_n_hash_18969(_n_j_19082,(_n_i_19085*5.0))*3.0))));
auto _n_binding_19279=d::at(_n_KINDS_18959,_n_kind_19088);
d::Array<double,false> _n_wax_19089=d::at(_n_binding_19279,0.0);
d::Array<double,false> _n_liq_19090=d::at(_n_binding_19279,1.0);
d::Array<d::Array<double,false>,false> _n_blobs_19091=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,4.5,2.0,0.5,0.0,0.0},d::Array<double,false>{0.0,13.7,1.0,0.6,0.0,0.0}};
{double _n_b_19092=0.0;
for(;d::truth((_n_b_19092<3.0));(void)((_n_b_19092++))){d::check_cancel();double _n_q_19093=_n_hash_18969(((_n_i_19085*31.0)+_n_b_19092),((_n_j_19082*17.0)+3.0));
(void)(_n_blobs_19091.push(d::Array<double,false>{(1.0+std::floor((_n_q_19093*3.0))),_n_hash_18969(_n_b_19092,((_n_i_19085*7.0)+_n_j_19082)),(0.8+(0.45*_n_hash_18969((_n_i_19085+(_n_b_19092*9.0)),_n_j_19082))),1.0,_n_hash_18969((_n_i_19085*3.0),(_n_b_19092+(_n_j_19082*11.0))),1.0}));
}}
d::Array<double,false> _n_glow_19094=d::map(_n_wax_19089,[&]( double _a0,double _a1) mutable ->double{double _n_w_19095=_a0;
double _n_c_19096=_a1;
return ((0.65*_n_w_19095)+(0.5*d::at(_n_liq_19090,_n_c_19096)));});
(void)(this->_n_lamps_18993.push(([&](){auto _n_object_19281=std::make_shared<_n_Record_18994>();_n_object_19281->_p_cx=_n_cx_19086;_n_object_19281->_p_bottom=_n_bottom_19083;_n_object_19281->_p_s=_n_s_19080;_n_object_19281->_p_wax=_n_wax_19089;_n_object_19281->_p_liq=_n_liq_19090;_n_object_19281->_p_glow=_n_glow_19094;_n_object_19281->_p_blobs=_n_blobs_19091;return _n_object_19281;})()));
}}
{double _n_r_19097=std::floor(_n_bottom_19083);
for(;d::truth((_n_r_19097<d::minimum({_n_H_18944,((_n_bottom_19083+(2.3*_n_s_19080))+1.0)})));(void)((_n_r_19097++))){d::check_cancel();{double _n_x_19098=0.0;
for(;d::truth((_n_x_19098<_n_W_18943));(void)((_n_x_19098++))){d::check_cancel();double _n_k_19099=((_n_r_19097*_n_W_18943)+_n_x_19098);
double _n_y_19100=(_n_r_19097+0.5);
if((d::truth((_n_y_19100>=_n_bottom_19083))&&d::truth((_n_y_19100<(_n_bottom_19083+(2.3*_n_s_19080)))))){d::check_cancel();(void)(([&](){auto&& _n_array_19282=this->_n_mat_18995;auto _n_index_19283=_n_k_19099;auto _n_value_19284=(d::truth((_n_y_19100<(_n_bottom_19083+0.7)))?_n_LIP_18953:_n_SHELF_18952);d::put(_n_array_19282,_n_index_19283,_n_value_19284);return _n_value_19284;})());
(void)(([&](){auto&& _n_array_19285=this->_n_shelfOf_18999;auto _n_index_19286=_n_k_19099;auto _n_value_19287=_n_j_19082;d::put(_n_array_19285,_n_index_19286,_n_value_19287);return _n_value_19287;})());
}
}}
}}

}
}));
(void)(d::forEach(this->_n_lamps_18993,[&]( std::shared_ptr<_n_Record_18994> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_18994> _n_L_19101=_a0;
double _n_id_19102=_a1;
{
auto _n_binding_19288=_n_L_19101;
double _n_cx_19103=_n_binding_19288->_p_cx;
double _n_bottom_19104=_n_binding_19288->_p_bottom;
double _n_s_19105=_n_binding_19288->_p_s;
{double _n_r_19106=std::floor((_n_bottom_19104-(_n_LAMP_H_18963*_n_s_19105)));
for(;d::truth((_n_r_19106<std::ceil(_n_bottom_19104)));(void)((_n_r_19106++))){d::check_cancel();{double _n_x_19107=std::floor((_n_cx_19103-(3.5*_n_s_19105)));
for(;d::truth((_n_x_19107<=std::ceil((_n_cx_19103+(3.5*_n_s_19105)))));(void)((_n_x_19107++))){d::check_cancel();if((((d::truth((_n_r_19106<0.0))||d::truth((_n_r_19106>=_n_H_18944)))||d::truth((_n_x_19107<0.0)))||d::truth((_n_x_19107>=_n_W_18943)))){d::check_cancel();continue;
}
double _n_k_19108=((_n_r_19106*_n_W_18943)+_n_x_19107);
double _n_v_19109=((_n_bottom_19104-(_n_r_19106+0.5))/_n_s_19105);
double _n_u_19110=(((_n_x_19107+0.5)-_n_cx_19103)/_n_s_19105);
double _n_hw_19111=_n_halfWidth_18974(_n_v_19109);
if((d::truth((_n_hw_19111<0.0))||d::truth((std::fabs(_n_u_19110)>_n_hw_19111)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_19289=this->_n_mat_18995;auto _n_index_19290=_n_k_19108;auto _n_value_19291=((d::truth((_n_v_19109>=_n_GLASS_LO_18964))&&d::truth((_n_v_19109<_n_GLASS_HI_18965)))?_n_GLASS_18950:_n_METAL_18951);d::put(_n_array_19289,_n_index_19290,_n_value_19291);return _n_value_19291;})());
(void)(([&](){auto&& _n_array_19292=this->_n_lampOf_18996;auto _n_index_19293=_n_k_19108;auto _n_value_19294=_n_id_19102;d::put(_n_array_19292,_n_index_19293,_n_value_19294);return _n_value_19294;})());
(void)(([&](){auto&& _n_array_19295=this->_n_lu_18997;auto _n_index_19296=_n_k_19108;auto _n_value_19297=(_n_u_19110/_n_hw_19111);d::put(_n_array_19295,_n_index_19296,_n_value_19297);return _n_value_19297;})());
(void)(([&](){auto&& _n_array_19298=this->_n_lv_18998;auto _n_index_19299=_n_k_19108;auto _n_value_19300=_n_v_19109;d::put(_n_array_19298,_n_index_19299,_n_value_19300);return _n_value_19300;})());
}}
}}

}
}));
this->_n_spill_19000=d::Array<float,true>(size_t((this->_n_N_18977*3.0)));
for(auto &&_n_item_19301:this->_n_lamps_18993){d::check_cancel();std::shared_ptr<_n_Record_18994> _n_L_19112=_n_item_19301;
{
double _n_y0_19113=(_n_L_19112->_p_bottom-(_n_GLASS_HI_18965*_n_L_19112->_p_s));
double _n_y1_19114=(_n_L_19112->_p_bottom-(_n_GLASS_LO_18964*_n_L_19112->_p_s));
double _n_reach_19115=(5.0*_n_L_19112->_p_s);
{double _n_r_19116=([&](){auto _n_argument_19302=0.0;auto _n_argument_19303=std::floor((_n_y0_19113-26.0));return d::maximum({_n_argument_19302,_n_argument_19303});})();
for(;d::truth((_n_r_19116<d::minimum({_n_H_18944,(_n_y1_19114+14.0)})));(void)((_n_r_19116++))){d::check_cancel();double _n_y_19117=(_n_r_19116+0.5);
double _n_dy_19118=(d::truth((_n_y_19117<_n_y0_19113))?(_n_y0_19113-_n_y_19117):(d::truth((_n_y_19117>_n_y1_19114))?(_n_y_19117-_n_y1_19114):0.0));
{double _n_x_19119=([&](){auto _n_argument_19304=0.0;auto _n_argument_19305=std::floor((_n_L_19112->_p_cx-26.0));return d::maximum({_n_argument_19304,_n_argument_19305});})();
for(;d::truth((_n_x_19119<d::minimum({_n_W_18943,(_n_L_19112->_p_cx+26.0)})));(void)((_n_x_19119++))){d::check_cancel();double _n_dx_19120=((_n_x_19119+0.5)-_n_L_19112->_p_cx);
double _n_d_19121=std::sqrt(((_n_dx_19120*_n_dx_19120)+((_n_dy_19118*_n_dy_19118)*1.6)));
double _n_e_19122=([&](){auto _n_left_19306=(std::exp(((-d::number(_n_d_19121))/_n_reach_19115))*0.6);auto _n_right_19307=(std::exp(((-d::number(_n_d_19121))/(_n_reach_19115*3.0)))*0.04);return (_n_left_19306+_n_right_19307);})();
double _n_k_19123=((_n_r_19116*_n_W_18943)+_n_x_19119);
(void)(([&](){auto&& _n_array_19308=this->_n_spill_19000;auto _n_index_19309=(_n_k_19123*3.0);auto _n_value_19310=(d::at(_n_array_19308,_n_index_19309)+(d::at(_n_L_19112->_p_glow,0.0)*_n_e_19122));d::put(_n_array_19308,_n_index_19309,_n_value_19310);return _n_value_19310;})());
(void)(([&](){auto&& _n_array_19311=this->_n_spill_19000;auto _n_index_19312=((_n_k_19123*3.0)+1.0);auto _n_value_19313=(d::at(_n_array_19311,_n_index_19312)+(d::at(_n_L_19112->_p_glow,1.0)*_n_e_19122));d::put(_n_array_19311,_n_index_19312,_n_value_19313);return _n_value_19313;})());
(void)(([&](){auto&& _n_array_19314=this->_n_spill_19000;auto _n_index_19315=((_n_k_19123*3.0)+2.0);auto _n_value_19316=(d::at(_n_array_19314,_n_index_19315)+(d::at(_n_L_19112->_p_glow,2.0)*_n_e_19122));d::put(_n_array_19314,_n_index_19315,_n_value_19316);return _n_value_19316;})());
}}
}}

}
}
this->_n_camRim_19001=d::Array<float,true>(size_t(this->_n_N_18977));
{double _n_r_19130=0.0;
for(;d::truth((_n_r_19130<_n_H_18944));(void)((_n_r_19130++))){d::check_cancel();{double _n_x_19131=0.0;
for(;d::truth((_n_x_19131<_n_W_18943));(void)((_n_x_19131++))){d::check_cancel();double _n_c_19132=this->_n_inCam_19002((_n_x_19131+0.5),(_n_r_19130+0.5));
if(d::truth((!d::truth(_n_c_19132)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_19317=this->_n_mat_18995;auto _n_index_19318=((_n_r_19130*_n_W_18943)+_n_x_19131);auto _n_value_19319=_n_c_19132;d::put(_n_array_19317,_n_index_19318,_n_value_19319);return _n_value_19319;})());
double _n_open_19133=([&](){auto _n_left_19320=([&](){auto _n_left_19322=([&](){auto _n_left_19324=(d::truth(this->_n_inCam_19002((_n_x_19131+0.5),(_n_r_19130-0.5)))?0.0:1.0);auto _n_right_19325=(d::truth(this->_n_inCam_19002((_n_x_19131-0.5),(_n_r_19130+0.5)))?0.0:0.7);return (_n_left_19324+_n_right_19325);})();auto _n_right_19323=(d::truth(this->_n_inCam_19002((_n_x_19131+1.5),(_n_r_19130+0.5)))?0.0:0.7);return (_n_left_19322+_n_right_19323);})();auto _n_right_19321=(d::truth(this->_n_inCam_19002((_n_x_19131+0.5),(_n_r_19130+1.5)))?0.0:0.4);return (_n_left_19320+_n_right_19321);})();
(void)(([&](){auto&& _n_array_19326=this->_n_camRim_19001;auto _n_index_19327=((_n_r_19130*_n_W_18943)+_n_x_19131);auto _n_value_19328=d::minimum({1.0,_n_open_19133});d::put(_n_array_19326,_n_index_19327,_n_value_19328);return _n_value_19328;})());
}}
}}
this->_n_SIGN_C_19003=d::Array<double,false>{0.953,0.502,0.125};
this->_n_BACK_C_19004=d::Array<double,false>{0.98,0.682,0.251};
this->_n_screen_19005=d::Array<float,true>(size_t((this->_n_N_18977*3.0)));
this->_n_MINI_19006=(10.0/76.0);
{double _n_r_19134=0.0;
for(;d::truth((_n_r_19134<_n_H_18944));(void)((_n_r_19134++))){d::check_cancel();{double _n_x_19135=0.0;
for(;d::truth((_n_x_19135<_n_W_18943));(void)((_n_x_19135++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_18995,((_n_r_19134*_n_W_18943)+_n_x_19135))!=_n_LENS_18956))){d::check_cancel();continue;
}
double _n_k_19136=((_n_r_19134*_n_W_18943)+_n_x_19135);
double _n_row_19137=(_n_r_19134-67.0);
double _n_col_19138=(_n_x_19135-154.0);
d::Array<double,false> _n_c_19139=d::Array<double,false>{0.025,0.035,0.07};
double _n_sc_19140=([&](){auto _n_argument_19329=0.3;auto _n_argument_19330=0.6;auto _n_argument_19331=this->_n_logoAt_18987(((1.5+(((_n_col_19138+0.5)-6.0)/this->_n_MINI_19006))-0.5),((2.0+(((_n_row_19137+0.5)-0.6)/this->_n_MINI_19006))-0.5));return _n_smooth_18971(_n_argument_19329,_n_argument_19330,_n_argument_19331);})();
if(d::truth((_n_sc_19140>0.0))){d::check_cancel();(void)((_n_c_19139=d::map(((d::truth((_n_row_19137>2.0))&&d::truth((_n_col_19138>11.0)))?this->_n_BACK_C_19004:this->_n_SIGN_C_19003),[&]( double _a0) mutable ->double{double _n_v_19141=_a0;
return ((_n_v_19141*_n_sc_19140)+0.02);})));
}
if(((d::truth((_n_row_19137>=6.0))&&d::truth((_n_row_19137<9.0)))&&d::truth((d::mod(_n_col_19138,3.0)!=2.0)))){d::check_cancel();std::shared_ptr<_n_Record_18994> _n_L_19142=d::at(this->_n_lamps_18993,std::floor((([&](){auto _n_argument_19332=std::floor((_n_col_19138/3.0));auto _n_argument_19333=3.0;return _n_hash_18969(_n_argument_19332,_n_argument_19333);})()*double(this->_n_lamps_18993.size()))));
double _n_g_19143=(d::truth((_n_row_19137==6.0))?0.5:1.0);
(void)((_n_c_19139=d::map(_n_L_19142->_p_glow,[&]( double _a0) mutable ->double{double _n_v_19144=_a0;
return (_n_v_19144*_n_g_19143);})));
}else {d::check_cancel();if(d::truth((_n_row_19137==9.0))){d::check_cancel();(void)((_n_c_19139=d::Array<double,false>{0.2,0.11,0.07}));
}
}
(void)(((([&](){auto&& _n_array_19334=this->_n_screen_19005;auto _n_index_19335=(_n_k_19136*3.0);auto _n_value_19336=d::at(_n_c_19139,0.0);d::put(_n_array_19334,_n_index_19335,_n_value_19336);return _n_value_19336;})(),([&](){auto&& _n_array_19337=this->_n_screen_19005;auto _n_index_19338=((_n_k_19136*3.0)+1.0);auto _n_value_19339=d::at(_n_c_19139,1.0);d::put(_n_array_19337,_n_index_19338,_n_value_19339);return _n_value_19339;})()),([&](){auto&& _n_array_19340=this->_n_screen_19005;auto _n_index_19341=((_n_k_19136*3.0)+2.0);auto _n_value_19342=d::at(_n_c_19139,2.0);d::put(_n_array_19340,_n_index_19341,_n_value_19342);return _n_value_19342;})()));
}}
}}
{double _n_k_19145=0.0;
for(;d::truth((_n_k_19145<this->_n_N_18977));(void)((_n_k_19145++))){d::check_cancel();if(((d::truth((d::at(this->_n_signCov_18989,_n_k_19145)>0.02))&&d::truth((d::at(this->_n_mat_18995,_n_k_19145)!=_n_CAM_18955)))&&d::truth((d::at(this->_n_mat_18995,_n_k_19145)!=_n_LENS_18956)))){d::check_cancel();(void)(([&](){auto&& _n_array_19343=this->_n_mat_18995;auto _n_index_19344=_n_k_19145;auto _n_value_19345=_n_SIGN_18954;d::put(_n_array_19343,_n_index_19344,_n_value_19345);return _n_value_19345;})());
}
}}
this->_n_NB_19007=5.0;
this->_n_blobX_19008=d::Array<float,true>(size_t((double(this->_n_lamps_18993.size())*this->_n_NB_19007)));
this->_n_blobY_19009=d::Array<float,true>(size_t((double(this->_n_lamps_18993.size())*this->_n_NB_19007)));
this->_n_blobR_19010=d::Array<float,true>(size_t((double(this->_n_lamps_18993.size())*this->_n_NB_19007)));
this->_n_blobS_19011=d::Array<float,true>(size_t((double(this->_n_lamps_18993.size())*this->_n_NB_19007)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_19222> _a1) mutable ->d::String{double _n_t_19146=_a0;
auto _n_binding_19348=(d::present(_a1)?_a1:([&](){auto _n_object_19347=std::make_shared<_n_Record_19222>();return _n_object_19347;})());
std::optional<d::Array<uint8_t,true>> _n_color_19147=_n_binding_19348->_p_color;
{
double _n_tt_19148=d::mod((d::mod(_n_t_19146,_n_LOOP_18945)+_n_LOOP_18945),_n_LOOP_18945);
double _n_glintAt_19149=((((d::mod(_n_tt_19148,10.0)/2.2)*(_n_SIGN_W_18966+40.0))+_n_SIGN_X_18967)-20.0);
double _n_hum_19150=(0.96+(0.04*std::sin(((((_n_tt_19148/_n_LOOP_18945)*ascii::PI)*2.0)*6.0))));
(void)(d::forEach(this->_n_lamps_18993,[&]( std::shared_ptr<_n_Record_18994> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_18994> _n_L_19151=_a0;
double _n_id_19152=_a1;
{
{double _n_b_19153=0.0;
for(;d::truth((_n_b_19153<this->_n_NB_19007));(void)((_n_b_19153++))){d::check_cancel();d::Array<double,false> _n_B_19154=d::at(_n_L_19151->_p_blobs,_n_b_19153);
double _n_i_19155=((_n_id_19152*this->_n_NB_19007)+_n_b_19153);
if(d::truth((d::at(_n_B_19154,5.0)==0.0))){d::check_cancel();(void)((((([&](){auto&& _n_array_19349=this->_n_blobX_19008;auto _n_index_19350=_n_i_19155;auto _n_value_19351=0.0;d::put(_n_array_19349,_n_index_19350,_n_value_19351);return _n_value_19351;})(),([&](){auto&& _n_array_19352=this->_n_blobY_19009;auto _n_index_19353=_n_i_19155;auto _n_value_19354=d::at(_n_B_19154,1.0);d::put(_n_array_19352,_n_index_19353,_n_value_19354);return _n_value_19354;})()),([&](){auto&& _n_array_19355=this->_n_blobR_19010;auto _n_index_19356=_n_i_19155;auto _n_value_19357=(d::at(_n_B_19154,2.0)*d::at(_n_B_19154,2.0));d::put(_n_array_19355,_n_index_19356,_n_value_19357);return _n_value_19357;})()),([&](){auto&& _n_array_19358=this->_n_blobS_19011;auto _n_index_19359=_n_i_19155;auto _n_value_19360=(1.0/d::at(_n_B_19154,3.0));d::put(_n_array_19358,_n_index_19359,_n_value_19360);return _n_value_19360;})()));
continue;
}
double _n_a_19156=(((((_n_tt_19148/_n_LOOP_18945)*d::at(_n_B_19154,0.0))+d::at(_n_B_19154,1.0))*ascii::PI)*2.0);
double _n_by_19157=(5.3+((0.5-(0.5*std::cos(_n_a_19156)))*7.2));
double _n_hw_19158=_n_halfWidth_18974(_n_by_19157);
double _n_br_19159=([&](){auto _n_left_19361=(d::at(_n_B_19154,2.0)*(0.8+(0.2*std::pow(std::sin(((_n_a_19156*0.5)+d::at(_n_B_19154,4.0))),2.0))));auto _n_right_19362=d::minimum({1.0,(_n_hw_19158/2.2)});return (_n_left_19361*_n_right_19362);})();
(void)(([&](){auto&& _n_array_19363=this->_n_blobX_19008;auto _n_index_19364=_n_i_19155;auto _n_value_19365=((0.45*_n_hw_19158)*std::sin(((_n_a_19156*2.0)+(d::at(_n_B_19154,4.0)*6.28))));d::put(_n_array_19363,_n_index_19364,_n_value_19365);return _n_value_19365;})());
(void)(([&](){auto&& _n_array_19366=this->_n_blobY_19009;auto _n_index_19367=_n_i_19155;auto _n_value_19368=_n_by_19157;d::put(_n_array_19366,_n_index_19367,_n_value_19368);return _n_value_19368;})());
(void)(([&](){auto&& _n_array_19369=this->_n_blobR_19010;auto _n_index_19370=_n_i_19155;auto _n_value_19371=(_n_br_19159*_n_br_19159);d::put(_n_array_19369,_n_index_19370,_n_value_19371);return _n_value_19371;})());
(void)(([&](){auto&& _n_array_19372=this->_n_blobS_19011;auto _n_index_19373=_n_i_19155;auto _n_value_19374=(1.0/(1.0+(0.75*std::fabs(std::sin(_n_a_19156)))));d::put(_n_array_19372,_n_index_19373,_n_value_19374);return _n_value_19374;})());
}}

}
}));
{double _n_r_19160=0.0;
for(;d::truth((_n_r_19160<_n_H_18944));(void)((_n_r_19160++))){d::check_cancel();{double _n_x_19161=0.0;
for(;d::truth((_n_x_19161<_n_W_18943));(void)((_n_x_19161++))){d::check_cancel();double _n_k_19162=((_n_r_19160*_n_W_18943)+_n_x_19161);
double _n_y_19163=(_n_r_19160+0.5);
double _n_m_19164=d::at(this->_n_mat_18995,_n_k_19162);
double _n_cr_19165=0.0;
double _n_cg_19166=0.0;
double _n_cb_19167=0.0;
double _n_floor_19168=0.0;
double _n_sr_19169=d::at(this->_n_spill_19000,(_n_k_19162*3.0));
double _n_sg_19170=d::at(this->_n_spill_19000,((_n_k_19162*3.0)+1.0));
double _n_sb_19171=d::at(this->_n_spill_19000,((_n_k_19162*3.0)+2.0));
double _n_hn_19172=d::at(this->_n_haloNear_18991,_n_k_19162);
double _n_hf_19173=d::at(this->_n_haloFar_18992,_n_k_19162);
double _n_halo_19174=(((_n_hf_19173*0.3)*(1.0-(0.85*_n_smooth_18971(0.15,0.6,_n_hn_19172))))*_n_hum_19150);
double _n_wr_19175=((0.006+(_n_sr_19169*0.075))+(_n_halo_19174*d::at(this->_n_SIGN_C_19003,0.0)));
double _n_wg_19176=((0.005+(_n_sg_19170*0.075))+(_n_halo_19174*d::at(this->_n_SIGN_C_19003,1.0)));
double _n_wb_19177=((0.008+(_n_sb_19171*0.075))+(_n_halo_19174*d::at(this->_n_SIGN_C_19003,2.0)));
if((d::truth((_n_m_19164==_n_WALL_18949))||d::truth((_n_m_19164==_n_SIGN_18954)))){d::check_cancel();double _n_seamV_19178=((d::truth((d::mod(_n_x_19161,25.0)==0.0))?0.6:1.0)*(0.92+(0.08*_n_hash_18969(double(d::i32(_n_x_19161)>>(d::u32(2.0)&31)),double(d::i32(_n_r_19160)>>(d::u32(3.0)&31))))));
(void)((((_n_cr_19165=(_n_wr_19175*_n_seamV_19178)),(_n_cg_19166=(_n_wg_19176*_n_seamV_19178))),(_n_cb_19167=(_n_wb_19177*_n_seamV_19178))));
if(d::truth((_n_m_19164==_n_SIGN_18954))){d::check_cancel();double _n_c_19179=d::at(this->_n_signCov_18989,_n_k_19162);
d::Array<double,false> _n_C_19180=(d::truth(d::at(this->_n_signBack_18990,_n_k_19162))?this->_n_BACK_C_19004:this->_n_SIGN_C_19003);
double _n_lum_19181=(1.3*_n_hum_19150);
double _n_g_19182=std::fabs((((_n_x_19161+0.5)+((_n_y_19163-_n_SIGN_Y_18968)*0.6))-_n_glintAt_19149));
double _n_glint_19183=(d::truth((_n_g_19182<5.0))?(1.0-_n_smooth_18971(0.0,5.0,_n_g_19182)):0.0);
(void)((_n_lum_19181=(_n_lum_19181+(0.35*_n_glint_19183))));
double _n_fr_19184=d::minimum({1.2,((d::at(_n_C_19180,0.0)*_n_lum_19181)+(_n_glint_19183*0.25))});
double _n_fg_19185=d::minimum({1.2,((d::at(_n_C_19180,1.0)*_n_lum_19181)+(_n_glint_19183*0.3))});
double _n_fb_19186=((d::at(_n_C_19180,2.0)*_n_lum_19181)+(_n_glint_19183*0.25));
(void)((((_n_cr_19165=_n_mix_18972(_n_cr_19165,_n_fr_19184,_n_c_19179)),(_n_cg_19166=_n_mix_18972(_n_cg_19166,_n_fg_19185,_n_c_19179))),(_n_cb_19167=_n_mix_18972(_n_cb_19167,_n_fb_19186,_n_c_19179))));
(void)((_n_floor_19168=(0.2*_n_c_19179)));
}
}else {d::check_cancel();if((d::truth((_n_m_19164==_n_GLASS_18950))||d::truth((_n_m_19164==_n_METAL_18951)))){d::check_cancel();double _n_id_19187=d::at(this->_n_lampOf_18996,_n_k_19162);
std::shared_ptr<_n_Record_18994> _n_L_19188=d::at(this->_n_lamps_18993,_n_id_19187);
double _n_u_19189=d::at(this->_n_lu_18997,_n_k_19162);
double _n_v_19190=d::at(this->_n_lv_18998,_n_k_19162);
if(d::truth((_n_m_19164==_n_GLASS_18950))){d::check_cancel();double _n_g_19191=((_n_v_19190-_n_GLASS_LO_18964)/(_n_GLASS_HI_18965-_n_GLASS_LO_18964));
double _n_px_19192=(_n_u_19189*_n_halfWidth_18974(_n_v_19190));
double _n_f_19193=0.0;
{double _n_i_19194=(_n_id_19187*this->_n_NB_19007);
for(;d::truth((_n_i_19194<((_n_id_19187*this->_n_NB_19007)+this->_n_NB_19007)));(void)((_n_i_19194++))){d::check_cancel();double _n_dx_19195=(_n_px_19192-d::at(this->_n_blobX_19008,_n_i_19194));
double _n_dy_19196=((_n_v_19190-d::at(this->_n_blobY_19009,_n_i_19194))*d::at(this->_n_blobS_19011,_n_i_19194));
(void)((_n_f_19193=(_n_f_19193+(d::at(this->_n_blobR_19010,_n_i_19194)/(((_n_dx_19195*_n_dx_19195)+(_n_dy_19196*_n_dy_19196))+0.05)))));
}}
double _n_bulb_19197=(0.3+(0.6*std::exp(((-d::number(_n_g_19191))*2.4))));
double _n_rim_19198=(1.0-(0.5*([&](){auto _n_argument_19375=0.55;auto _n_argument_19376=1.0;auto _n_argument_19377=std::fabs(_n_u_19189);return _n_smooth_18971(_n_argument_19375,_n_argument_19376,_n_argument_19377);})()));
(void)((((_n_cr_19165=((d::at(_n_L_19188->_p_liq,0.0)*_n_bulb_19197)*_n_rim_19198)),(_n_cg_19166=((d::at(_n_L_19188->_p_liq,1.0)*_n_bulb_19197)*_n_rim_19198))),(_n_cb_19167=((d::at(_n_L_19188->_p_liq,2.0)*_n_bulb_19197)*_n_rim_19198))));
double _n_wax_19199=_n_smooth_18971(0.8,1.25,_n_f_19193);
double _n_wl_19200=(([&](){auto _n_left_19378=(0.62+(0.45*std::exp(((-d::number(_n_g_19191))*1.6))));auto _n_right_19379=(0.2*_n_clamp_18970((_n_f_19193-1.4)));return (_n_left_19378+_n_right_19379);})()*(0.75+(0.25*_n_rim_19198)));
(void)((((_n_cr_19165=_n_mix_18972(_n_cr_19165,(d::at(_n_L_19188->_p_wax,0.0)*_n_wl_19200),_n_wax_19199)),(_n_cg_19166=_n_mix_18972(_n_cg_19166,(d::at(_n_L_19188->_p_wax,1.0)*_n_wl_19200),_n_wax_19199))),(_n_cb_19167=_n_mix_18972(_n_cb_19167,(d::at(_n_L_19188->_p_wax,2.0)*_n_wl_19200),_n_wax_19199))));
double _n_sheen_19201=([&](){auto _n_left_19380=(std::exp((-d::number(std::pow(((_n_u_19189+0.5)/0.14),2.0))))*0.28);auto _n_right_19381=_n_smooth_18971(0.95,0.1,_n_g_19191);return (_n_left_19380*_n_right_19381);})();
(void)((((_n_cr_19165=(_n_cr_19165+_n_sheen_19201)),(_n_cg_19166=(_n_cg_19166+_n_sheen_19201))),(_n_cb_19167=(_n_cb_19167+(_n_sheen_19201*1.05)))));
(void)((_n_floor_19168=0.3));
}else {d::check_cancel();double _n_hl_19202=std::exp((-d::number(std::pow(((_n_u_19189+0.3)/0.3),2.0))));
double _n_near_19203=(d::truth((_n_v_19190<_n_GLASS_LO_18964))?_n_smooth_18971((_n_GLASS_LO_18964-2.0),_n_GLASS_LO_18964,_n_v_19190):_n_smooth_18971((_n_GLASS_HI_18965+1.6),_n_GLASS_HI_18965,_n_v_19190));
double _n_base_19204=(((0.4+(0.3*(1.0-(_n_u_19189*_n_u_19189))))+(0.45*_n_hl_19202))+(0.35*_n_near_19203));
(void)((((_n_cr_19165=((0.12*_n_hl_19202)+((d::at(_n_L_19188->_p_glow,0.0)*_n_base_19204)*0.4))),(_n_cg_19166=((0.12*_n_hl_19202)+((d::at(_n_L_19188->_p_glow,1.0)*_n_base_19204)*0.4)))),(_n_cb_19167=((0.13*_n_hl_19202)+((d::at(_n_L_19188->_p_glow,2.0)*_n_base_19204)*0.4)))));
(void)((_n_floor_19168=0.25));
}
}else {d::check_cancel();if((d::truth((_n_m_19164==_n_LIP_18953))||d::truth((_n_m_19164==_n_SHELF_18952)))){d::check_cancel();double _n_j_19205=d::at(this->_n_shelfOf_18999,_n_k_19162);
double _n_lit_19206=(d::truth((_n_m_19164==_n_LIP_18953))?0.95:0.32);
double _n_grain_19207=(0.9+(0.1*_n_hash_18969(double(d::i32(_n_x_19161)>>(d::u32(1.0)&31)),((_n_r_19160*7.0)+_n_j_19205))));
(void)((_n_cr_19165=((0.07+(_n_sr_19169*_n_lit_19206))*_n_grain_19207)));
(void)((_n_cg_19166=((0.05+((_n_sg_19170*_n_lit_19206)*0.92))*_n_grain_19207)));
(void)((_n_cb_19167=((0.04+((_n_sb_19171*_n_lit_19206)*0.85))*_n_grain_19207)));
(void)((_n_floor_19168=0.08));
}else {d::check_cancel();if((d::truth((_n_m_19164==_n_CAM_18955))||d::truth((_n_m_19164==_n_LENS_18956)))){d::check_cancel();double _n_rim_19208=d::at(this->_n_camRim_19001,_n_k_19162);
double _n_e_19209=(_n_rim_19208*(0.9+(0.6*_n_smooth_18971(85.0,70.0,_n_y_19163))));
(void)((_n_cr_19165=(0.012+(((_n_sr_19169*0.5)+0.05)*_n_e_19209))));
(void)((_n_cg_19166=(0.012+(((_n_sg_19170*0.5)+0.05)*_n_e_19209))));
(void)((_n_cb_19167=(0.016+(((_n_sb_19171*0.5)+0.06)*_n_e_19209))));
if(((d::truth((_n_m_19164==_n_CAM_18955))&&d::truth(([&]()->bool{auto _n_logical_19382=(_n_x_19161==179.0);return d::truth(_n_logical_19382)?_n_logical_19382:(_n_x_19161==181.0);})()))&&d::truth(([&]()->bool{auto _n_logical_19383=(_n_r_19160==72.0);return d::truth(_n_logical_19383)?_n_logical_19383:(_n_r_19160==75.0);})()))){d::check_cancel();(void)((((_n_cr_19165=0.16),(_n_cg_19166=0.15)),(_n_cb_19167=0.15)));
}
if(d::truth((_n_m_19164==_n_LENS_18956))){d::check_cancel();double _n_s_19210=(0.9+(0.1*_n_hum_19150));
(void)((((_n_cr_19165=(d::at(this->_n_screen_19005,(_n_k_19162*3.0))*_n_s_19210)),(_n_cg_19166=(d::at(this->_n_screen_19005,((_n_k_19162*3.0)+1.0))*_n_s_19210))),(_n_cb_19167=(d::at(this->_n_screen_19005,((_n_k_19162*3.0)+2.0))*_n_s_19210))));
}
if((d::truth((_n_x_19161==180.0))&&d::truth((_n_r_19160==68.0)))){d::check_cancel();bool _n_on_19211=(std::sin(((_n_tt_19148*ascii::PI)*2.0))>(-d::number(0.2)));
(void)((((_n_cr_19165=(d::truth(_n_on_19211)?1.0:0.3)),(_n_cg_19166=(d::truth(_n_on_19211)?0.22:0.06))),(_n_cb_19167=(d::truth(_n_on_19211)?0.18:0.05))));
}
}
}
}
}
double _n_vx_19212=((_n_x_19161-100.0)/100.0);
double _n_vy_19213=((_n_y_19163-46.0)/62.0);
double _n_vig_19214=(1.0-(0.4*((_n_vx_19212*_n_vx_19212)+(_n_vy_19213*_n_vy_19213))));
if(((d::truth((_n_m_19164!=_n_CAM_18955))&&d::truth((_n_m_19164!=_n_LENS_18956)))&&d::truth((_n_m_19164!=_n_SIGN_18954)))){d::check_cancel();(void)((((_n_cr_19165=(_n_cr_19165*_n_vig_19214)),(_n_cg_19166=(_n_cg_19166*_n_vig_19214))),(_n_cb_19167=(_n_cb_19167*_n_vig_19214))));
}
double _n_peak_19215=d::maximum({_n_cr_19165,_n_cg_19166,_n_cb_19167,0.0001});
double _n_level_19216=_n_clamp_18970((_n_floor_19168+(((1.0-_n_floor_19168)*std::pow(_n_peak_19215,0.85))*0.95)));
double _n_step_19217=([&](){auto _n_argument_19384=0.0;auto _n_argument_19385=([&](){auto _n_argument_19386=3.0;auto _n_argument_19387=d::round(((_n_level_19216*3.0)+d::at(_n_BAYER_18948,((double(d::i32(_n_r_19160)&d::i32(3.0))*4.0)+double(d::i32(_n_x_19161)&d::i32(3.0))))));return d::minimum({_n_argument_19386,_n_argument_19387});})();return d::maximum({_n_argument_19384,_n_argument_19385});})();
(void)(([&](){auto&& _n_array_19388=this->_n_out_18978;auto _n_index_19389=_n_k_19162;auto _n_value_19390=d::at(_n_DOTS_18946,_n_step_19217);d::put(_n_array_19388,_n_index_19389,_n_value_19390);return _n_value_19390;})());
if(d::truth(_n_color_19147)){d::check_cancel();double _n_want_19218=(d::truth(_n_step_19217)?d::minimum({1.0,((_n_level_19216+0.06)/d::at(_n_COVER_18947,_n_step_19217))}):0.0);
double _n_s_19219=((0.3+(0.7*_n_want_19218))/_n_peak_19215);
(void)(([&](){auto&& _n_array_19391=d::read(_n_color_19147);auto _n_index_19392=_n_k_19162;auto _n_value_19393=([&](){auto _n_argument_19394=_n_clamp_18970((_n_cr_19165*_n_s_19219));auto _n_argument_19395=_n_clamp_18970((_n_cg_19166*_n_s_19219));auto _n_argument_19396=_n_clamp_18970((_n_cb_19167*_n_s_19219));return this->_n_nearest_18980(_n_argument_19394,_n_argument_19395,_n_argument_19396);})();d::put(_n_array_19391,_n_index_19392,_n_value_19393);return _n_value_19393;})());
}
}}
}}
d::Array<d::String,false> _n_lines_19220=d::Array<d::String,false>{};
{double _n_r_19221=0.0;
for(;d::truth((_n_r_19221<_n_H_18944));(void)((_n_r_19221++))){d::check_cancel();(void)(_n_lines_19220.push(d::join(this->_n_out_18978.slice((_n_r_19221*_n_W_18943),((_n_r_19221+1.0)*_n_W_18943)),d::String(u""))));
}}
return d::join(_n_lines_19220,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lava-wall").cols)*ascii::catalog_meta("lava-wall").rows);auto _env=std::make_shared<_n_Record_19222>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lava_wall_meta(){return catalog_meta("lava-wall");}
std::unique_ptr<Piece> make_lava_wall(const AsciiPieceOptions &o){return std::make_unique<Native_lava_wall>(o);}
}
