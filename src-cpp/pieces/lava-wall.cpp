// Direct, statically typed C++ from src/pieces/lava-wall.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_18941;
struct _n_Record_18961;
struct _n_Record_18993;
struct _n_Record_19221;
struct _n_Record_19225;
struct _n_Record_18941{
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
static std::shared_ptr<_n_Record_18941> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18941>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_loop=d::decode<double>(j["loop"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_18961{
double _p_s{};
double _p_top{};
static std::shared_ptr<_n_Record_18961> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18961>();out->_p_s=d::decode<double>(j["s"]);out->_p_top=d::decode<double>(j["top"]);return out;}
};
struct _n_Record_18993{
double _p_cx{};
double _p_bottom{};
double _p_s{};
d::Array<double,false> _p_wax{};
d::Array<double,false> _p_liq{};
d::Array<double,false> _p_glow{};
d::Array<d::Array<double,false>,false> _p_blobs{};
static std::shared_ptr<_n_Record_18993> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18993>();out->_p_cx=d::decode<double>(j["cx"]);out->_p_bottom=d::decode<double>(j["bottom"]);out->_p_s=d::decode<double>(j["s"]);out->_p_wax=d::decode<d::Array<double,false>>(j["wax"]);out->_p_liq=d::decode<d::Array<double,false>>(j["liq"]);out->_p_glow=d::decode<d::Array<double,false>>(j["glow"]);out->_p_blobs=d::decode<d::Array<d::Array<double,false>,false>>(j["blobs"]);return out;}
};
struct _n_Record_19221{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19221> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19221>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_19225{
std::array<double,2> _p_8{};
std::array<double,2> _p_b{};
std::array<double,2> _p_d{};
std::array<double,2> _p_p{};
std::array<double,2> _p_q{};
std::array<double,2> _p_P{};
std::array<double,2> _p__{};
std::array<double,2> _p_symbol_2c{};
std::array<double,2> _p_symbol_2e{};
std::array<double,2> _p_symbol_27{};
std::array<double,2> _p_symbol_22{};
std::array<double,2> _p_symbol_3a{};
static std::shared_ptr<_n_Record_19225> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19225>();out->_p_8=d::decode<std::array<double,2>>(j["8"]);out->_p_b=d::decode<std::array<double,2>>(j["b"]);out->_p_d=d::decode<std::array<double,2>>(j["d"]);out->_p_p=d::decode<std::array<double,2>>(j["p"]);out->_p_q=d::decode<std::array<double,2>>(j["q"]);out->_p_P=d::decode<std::array<double,2>>(j["P"]);out->_p__=d::decode<std::array<double,2>>(j["_"]);out->_p_symbol_2c=d::decode<std::array<double,2>>(j[","]);out->_p_symbol_2e=d::decode<std::array<double,2>>(j["."]);out->_p_symbol_27=d::decode<std::array<double,2>>(j["'"]);out->_p_symbol_22=d::decode<std::array<double,2>>(j["\""]);out->_p_symbol_3a=d::decode<std::array<double,2>>(j[":"]);return out;}
};
double _n_hash_18968(double _a0,double _a1);
double _n_clamp_18969(double _a0);
double _n_smooth_18970(double _a0,double _a1,double _a2);
double _n_mix_18971(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_18972(d::String _a0);
double _n_halfWidth_18973(double _a0);
void _n_blur_18974(d::Array<float,true> _a0,double _a1);
std::shared_ptr<_n_Record_18941> _n_meta_18940=[](){return ([&](){auto _n_object_19224=std::make_shared<_n_Record_18941>();_n_object_19224->_p_name=d::String(u"lava wall");_n_object_19224->_p_category=d::String(u"scenes");_n_object_19224->_p_note=d::String(u"a wall of lava lamps under the glowing orange cloud, watched by a camera");_n_object_19224->_p_cols=200.0;_n_object_19224->_p_rows=100.0;_n_object_19224->_p_cell=1.0;_n_object_19224->_p_fps=15.0;_n_object_19224->_p_loop=30.0;_n_object_19224->_p_ground=d::String(u"#08070a");_n_object_19224->_p_palette=d::Array<d::String,false>{d::String(u"#16121a"),d::String(u"#221c22"),d::String(u"#33282a"),d::String(u"#4a3a32"),d::String(u"#6e5442"),d::String(u"#9a7658"),d::String(u"#404041"),d::String(u"#707074"),d::String(u"#a9a9ae"),d::String(u"#e8e4de"),d::String(u"#5c1616"),d::String(u"#9e211d"),d::String(u"#dc362b"),d::String(u"#ff6a52"),d::String(u"#7c3510"),d::String(u"#c4570f"),d::String(u"#f38020"),d::String(u"#faae40"),d::String(u"#ffd27c"),d::String(u"#fff1c8"),d::String(u"#e6c02a"),d::String(u"#0f3a3c"),d::String(u"#18786f"),d::String(u"#43d6c0"),d::String(u"#2f1842"),d::String(u"#6b2f92"),d::String(u"#b45ddc"),d::String(u"#e2508c"),d::String(u"#1d3768"),d::String(u"#3f80d2")};return _n_object_19224;})();}();
const double _n_W_18942=[](){return 200.0;}();
const double _n_H_18943=[](){return 100.0;}();
const double _n_LOOP_18944=[](){return 30.0;}();
const d::String _n_DOTS_18945=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_18946=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_18947=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_19011=_a0;
return ((_n_v_19011/16.0)-0.47);});}();
const double _n_WALL_18948=[](){return 0.0;}();
const double _n_GLASS_18949=[](){return 1.0;}();
const double _n_METAL_18950=[](){return 2.0;}();
const double _n_SHELF_18951=[](){return 3.0;}();
const double _n_LIP_18952=[](){return 4.0;}();
const double _n_SIGN_18953=[](){return 5.0;}();
const double _n_CAM_18954=[](){return 6.0;}();
const double _n_LENS_18955=[](){return 7.0;}();
const d::String _n_LOGO_18956=[](){return d::String(u"\n\n                                  ._ppp8888888qqq_,\n                               _pp88888888888888888q_,\n                             _p88888888888888888888888q,\n                           .p888888888888888888888888888p\n                          _888888888888888888888888888888q,\n                __ppqqqq__88888888888888888888888888888888q,\n              _p8888888888888888888888888888888888888888888p\n             q888888888888888888888888888888888888888888888P pqqqq__\n            .888888888888888888888888888888888888888888888P q88888888q_,\n            :888888888888888888888888888888888888888888888'.888888888888q,\n        _pppq8888888888888888888888888888888888888888888P  '88888888888888_\n     _p88888888888888888888888888888888888888888888888\"'    \"88888888888888p\n   .p88888888888888888P\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"'          '\"\"\"\"\"\"\"888888,\n  .p8888888888888888888888888888888888888888888qqqqq_      _pppq888888888888b\n  q88888888888888888888888888888888888888888888888888p   _p888888888888888888\n  8888888888888888888888888888888888888888888888888888 .p88888888888888888888\n  888888888888888888888888888888888888888888888888888\" d88888888888888888888P\n\n");}();
d::Dict<d::String,std::array<double,2>> _n_HALVES_18957=[](){return ([&](){d::Dict<d::String,std::array<double,2>> _n_dictionary_19226;_n_dictionary_19226.set(d::String(u"8"),std::array<double,2>{1.0,1.0});_n_dictionary_19226.set(d::String(u"b"),std::array<double,2>{1.0,1.0});_n_dictionary_19226.set(d::String(u"d"),std::array<double,2>{1.0,1.0});_n_dictionary_19226.set(d::String(u"p"),std::array<double,2>{0.5,1.0});_n_dictionary_19226.set(d::String(u"q"),std::array<double,2>{0.5,1.0});_n_dictionary_19226.set(d::String(u"P"),std::array<double,2>{1.0,0.5});_n_dictionary_19226.set(d::String(u"_"),std::array<double,2>{0.0,0.6});_n_dictionary_19226.set(d::String(u","),std::array<double,2>{0.0,0.5});_n_dictionary_19226.set(d::String(u"."),std::array<double,2>{0.0,0.5});_n_dictionary_19226.set(d::String(u"'"),std::array<double,2>{0.7,0.0});_n_dictionary_19226.set(d::String(u"\""),std::array<double,2>{1.0,0.0});_n_dictionary_19226.set(d::String(u":"),std::array<double,2>{0.8,0.8});return _n_dictionary_19226;})();}();
d::Array<d::Array<d::Array<double,false>,false>,false> _n_KINDS_18958=[](){return d::Array<d::Array<d::Array<double,false>,false>,false>{d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.2,0.14},d::Array<double,false>{0.55,0.36,0.08}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.52,0.12},d::Array<double,false>{0.5,0.1,0.12}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.82,0.22},d::Array<double,false>{0.55,0.2,0.05}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.95,0.16,0.12},d::Array<double,false>{0.6,0.5,0.12}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.6,0.18},d::Array<double,false>{0.42,0.14,0.05}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.26,0.86,0.75},d::Array<double,false>{0.07,0.17,0.38}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.75,0.36,0.9},d::Array<double,false>{0.14,0.07,0.32}},d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.32,0.55},d::Array<double,false>{0.3,0.08,0.32}}};}();
d::Array<double,false> _n_WARM_18959=[](){return d::Array<double,false>{0.0,1.0,2.0,3.0,4.0,0.0,1.0,2.0,3.0,4.0};}();
d::Array<std::shared_ptr<_n_Record_18961>,false> _n_SHELVES_18960=[](){return d::Array<std::shared_ptr<_n_Record_18961>,false>{([&](){auto _n_object_19229=std::make_shared<_n_Record_18961>();_n_object_19229->_p_s=0.85;_n_object_19229->_p_top=9.0;return _n_object_19229;})(),([&](){auto _n_object_19231=std::make_shared<_n_Record_18961>();_n_object_19231->_p_s=1.0;_n_object_19231->_p_top=30.0;return _n_object_19231;})(),([&](){auto _n_object_19233=std::make_shared<_n_Record_18961>();_n_object_19233->_p_s=1.15;_n_object_19233->_p_top=50.5;return _n_object_19233;})(),([&](){auto _n_object_19235=std::make_shared<_n_Record_18961>();_n_object_19235->_p_s=1.3;_n_object_19235->_p_top=74.0;return _n_object_19235;})()};}();
const double _n_LAMP_H_18962=[](){return 16.0;}();
const double _n_GLASS_LO_18963=[](){return 4.0;}();
const double _n_GLASS_HI_18964=[](){return 14.0;}();
const double _n_SIGN_W_18965=[](){return 62.0;}();
const double _n_SIGN_X_18966=[](){return (100.0-(_n_SIGN_W_18965/2.0));}();
const double _n_SIGN_Y_18967=[](){return 1.0;}();
double _n_hash_18968(double _a0,double _a1){double _n_x_19012=_a0;
double _n_y_19013=_a1;
{
double _n_h_19014=([&](){auto _n_left_19236=d::imul(double(d::i32(_n_x_19012)|d::i32(0.0)),374761393.0);auto _n_right_19237=d::imul(double(d::i32(_n_y_19013)|d::i32(0.0)),668265263.0);return (_n_left_19236+_n_right_19237);})();
(void)((_n_h_19014=d::imul(double(d::i32(_n_h_19014)^d::i32(double(d::u32(_n_h_19014)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_19014)^d::i32(double(d::u32(_n_h_19014)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_clamp_18969(double _a0){double _n_v_19015=_a0;
return (d::truth((_n_v_19015<0.0))?0.0:(d::truth((_n_v_19015>1.0))?1.0:_n_v_19015));}

double _n_smooth_18970(double _a0,double _a1,double _a2){double _n_a_19016=_a0;
double _n_b_19017=_a1;
double _n_v_19018=_a2;
{
double _n_k_19019=_n_clamp_18969(((_n_v_19018-_n_a_19016)/(_n_b_19017-_n_a_19016)));
return ((_n_k_19019*_n_k_19019)*(3.0-(2.0*_n_k_19019)));

}
}

double _n_mix_18971(double _a0,double _a1,double _a2){double _n_a_19020=_a0;
double _n_b_19021=_a1;
double _n_k_19022=_a2;
return (_n_a_19020+((_n_b_19021-_n_a_19020)*_n_k_19022));}

d::Array<double,false> _n_hex_18972(d::String _a0){d::String _n_s_19023=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_19024=_a0;
return (([&](){auto _n_argument_19238=d::slice(_n_s_19023,_n_i_19024,(_n_i_19024+2.0));auto _n_argument_19239=16.0;return d::parseInt(_n_argument_19238,_n_argument_19239);})()/255.0);});}

double _n_halfWidth_18973(double _a0){double _n_v_19025=_a0;
{
if(d::truth((_n_v_19025<0.0))){d::check_cancel();return (-d::number(1.0));
}
if(d::truth((_n_v_19025<_n_GLASS_LO_18963))){d::check_cancel();return (d::truth((_n_v_19025<0.5))?3.2:(3.0-(1.1*(_n_v_19025/_n_GLASS_LO_18963))));
}
if(d::truth((_n_v_19025<_n_GLASS_HI_18964))){d::check_cancel();double _n_g_19026=((_n_v_19025-_n_GLASS_LO_18963)/(_n_GLASS_HI_18964-_n_GLASS_LO_18963));
return ([&](){auto _n_left_19240=(2.0+(0.9*_n_smooth_18970(0.0,0.3,_n_g_19026)));auto _n_right_19241=(1.55*_n_smooth_18970(0.3,1.0,_n_g_19026));return (_n_left_19240-_n_right_19241);})();
}
if(d::truth((_n_v_19025<_n_LAMP_H_18962))){d::check_cancel();return ((1.35-(0.55*((_n_v_19025-_n_GLASS_HI_18964)/(_n_LAMP_H_18962-_n_GLASS_HI_18964))))-(d::truth((_n_v_19025>(_n_LAMP_H_18962-0.6)))?0.3:0.0));
}
return (-d::number(1.0));

}
}

void _n_blur_18974(d::Array<float,true> _a0,double _a1){d::Array<float,true> _n_a_19027=_a0;
double _n_r_19028=_a1;
{
d::Array<float,true> _n_tmp_19029=d::Array<float,true>(size_t((_n_W_18942*_n_H_18943)));
{double _n_y_19030=0.0;
for(;d::truth((_n_y_19030<_n_H_18943));(void)((_n_y_19030++))){d::check_cancel();{double _n_x_19031=0.0;
for(;d::truth((_n_x_19031<_n_W_18942));(void)((_n_x_19031++))){d::check_cancel();double _n_s_19032=0.0;
{double _n_d_19033=(-d::number(_n_r_19028));
for(;d::truth((_n_d_19033<=_n_r_19028));(void)((_n_d_19033++))){d::check_cancel();(void)((_n_s_19032=(_n_s_19032+d::at(_n_a_19027,((_n_y_19030*_n_W_18942)+([&](){auto _n_argument_19242=(_n_W_18942-1.0);auto _n_argument_19243=d::maximum({0.0,(_n_x_19031+_n_d_19033)});return d::minimum({_n_argument_19242,_n_argument_19243});})())))));
}}
(void)(([&](){auto&& _n_array_19244=_n_tmp_19029;auto _n_index_19245=((_n_y_19030*_n_W_18942)+_n_x_19031);auto _n_value_19246=(_n_s_19032/((2.0*_n_r_19028)+1.0));d::put(_n_array_19244,_n_index_19245,_n_value_19246);return _n_value_19246;})());
}}
}}
{double _n_y_19034=0.0;
for(;d::truth((_n_y_19034<_n_H_18943));(void)((_n_y_19034++))){d::check_cancel();{double _n_x_19035=0.0;
for(;d::truth((_n_x_19035<_n_W_18942));(void)((_n_x_19035++))){d::check_cancel();double _n_s_19036=0.0;
{double _n_d_19037=(-d::number(_n_r_19028));
for(;d::truth((_n_d_19037<=_n_r_19028));(void)((_n_d_19037++))){d::check_cancel();(void)((_n_s_19036=(_n_s_19036+d::at(_n_tmp_19029,((([&](){auto _n_argument_19247=(_n_H_18943-1.0);auto _n_argument_19248=d::maximum({0.0,(_n_y_19034+_n_d_19037)});return d::minimum({_n_argument_19247,_n_argument_19248});})()*_n_W_18942)+_n_x_19035)))));
}}
(void)(([&](){auto&& _n_array_19249=_n_a_19027;auto _n_index_19250=((_n_y_19034*_n_W_18942)+_n_x_19035);auto _n_value_19251=(_n_s_19036/((2.0*_n_r_19028)+1.0));d::put(_n_array_19249,_n_index_19250,_n_value_19251);return _n_value_19251;})());
}}
}}

}
}

struct Native_lava_wall final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_18975{};
double _n_N_18976{};
d::Array<d::String,false> _n_out_18977{};
d::Array<uint8_t,true> _n_lut_18978{};
d::Array<d::String,false> _n_rows_18980{};
double _n_GW_18981{};
double _n_GH_18982{};
d::Array<float,true> _n_cov_18983{};
d::Array<uint8_t,true> _n_back_18984{};
d::Array<double,false> _n_seam_18985{};
double _n_LK_18987{};
d::Array<float,true> _n_signCov_18988{};
d::Array<uint8_t,true> _n_signBack_18989{};
d::Array<float,true> _n_haloNear_18990{};
d::Array<float,true> _n_haloFar_18991{};
d::Array<std::shared_ptr<_n_Record_18993>,false> _n_lamps_18992{};
d::Array<uint8_t,true> _n_mat_18994{};
d::Array<int16_t,true> _n_lampOf_18995{};
d::Array<float,true> _n_lu_18996{};
d::Array<float,true> _n_lv_18997{};
d::Array<int8_t,true> _n_shelfOf_18998{};
d::Array<float,true> _n_spill_18999{};
d::Array<float,true> _n_camRim_19000{};
d::Array<double,false> _n_SIGN_C_19002{};
d::Array<double,false> _n_BACK_C_19003{};
d::Array<float,true> _n_screen_19004{};
double _n_MINI_19005{};
double _n_NB_19006{};
d::Array<float,true> _n_blobX_19007{};
d::Array<float,true> _n_blobY_19008{};
d::Array<float,true> _n_blobR_19009{};
d::Array<float,true> _n_blobS_19010{};
std::function<d::String(double,std::shared_ptr<_n_Record_19221>)> _render;
double _n_nearest_18979(double _a0,double _a1,double _a2){double _n_r_19038=_a0;
double _n_g_19039=_a1;
double _n_b_19040=_a2;
{
double _n_k_19041=([&](){auto _n_left_19396=([&](){auto _n_left_19398=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_19038*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_19399=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_19039*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_19398)|d::i32(_n_right_19399));})();auto _n_right_19397=d::minimum({31.0,double(d::i32((_n_b_19040*31.99))|d::i32(0.0))});return double(d::i32(_n_left_19396)|d::i32(_n_right_19397));})();
if(d::truth((d::at(this->_n_lut_18978,_n_k_19041)!=255.0))){d::check_cancel();return d::at(this->_n_lut_18978,_n_k_19041);
}
double _n_best_19042=0.0;
double _n_bd_19043=1000000000.0;
{double _n_i_19044=0.0;
for(;d::truth((_n_i_19044<double(this->_n_P_18975.size())));(void)((_n_i_19044++))){d::check_cancel();double _n_dr_19045=(d::at(d::at(this->_n_P_18975,_n_i_19044),0.0)-_n_r_19038);
double _n_dg_19046=(d::at(d::at(this->_n_P_18975,_n_i_19044),1.0)-_n_g_19039);
double _n_db_19047=(d::at(d::at(this->_n_P_18975,_n_i_19044),2.0)-_n_b_19040);
double _n_d_19048=((((0.3*_n_dr_19045)*_n_dr_19045)+((0.5*_n_dg_19046)*_n_dg_19046))+((0.2*_n_db_19047)*_n_db_19047));
if(d::truth((_n_d_19048<_n_bd_19043))){d::check_cancel();(void)(((_n_bd_19043=_n_d_19048),(_n_best_19042=_n_i_19044)));
}
}}
return ([&](){auto&& _n_array_19400=this->_n_lut_18978;auto _n_index_19401=_n_k_19041;auto _n_value_19402=_n_best_19042;d::put(_n_array_19400,_n_index_19401,_n_value_19402);return _n_value_19402;})();

}
}

double _n_logoAt_18986(double _a0,double _a1){double _n_gx_19061=_a0;
double _n_gy_19062=_a1;
{
double _n_xi_19063=std::floor(_n_gx_19061);
double _n_yi_19064=std::floor(_n_gy_19062);
double _n_fx_19065=(_n_gx_19061-_n_xi_19063);
double _n_fy_19066=(_n_gy_19062-_n_yi_19064);
auto _n_at_19067=[&]( double _a0,double _a1) mutable ->double{double _n_x_19068=_a0;
double _n_y_19069=_a1;
return ((((d::truth((_n_x_19068<0.0))||d::truth((_n_y_19069<0.0)))||d::truth((_n_x_19068>=this->_n_GW_18981)))||d::truth((_n_y_19069>=this->_n_GH_18982)))?0.0:d::at(this->_n_cov_18983,((_n_y_19069*this->_n_GW_18981)+_n_x_19068)));};
return ([&](){auto _n_argument_19403=([&](){auto _n_argument_19404=_n_at_19067(_n_xi_19063,_n_yi_19064);auto _n_argument_19405=_n_at_19067((_n_xi_19063+1.0),_n_yi_19064);auto _n_argument_19406=_n_fx_19065;return _n_mix_18971(_n_argument_19404,_n_argument_19405,_n_argument_19406);})();auto _n_argument_19407=([&](){auto _n_argument_19408=_n_at_19067(_n_xi_19063,(_n_yi_19064+1.0));auto _n_argument_19409=_n_at_19067((_n_xi_19063+1.0),(_n_yi_19064+1.0));auto _n_argument_19410=_n_fx_19065;return _n_mix_18971(_n_argument_19408,_n_argument_19409,_n_argument_19410);})();auto _n_argument_19411=_n_fy_19066;return _n_mix_18971(_n_argument_19403,_n_argument_19407,_n_argument_19411);})();

}
}

double _n_inCam_19001(double _a0,double _a1){double _n_x_19123=_a0;
double _n_y_19124=_a1;
{
double _n_bx_19125=([&](){auto _n_argument_19412=0.0;auto _n_argument_19413=(std::fabs((_n_x_19123-168.0))-16.0);return d::maximum({_n_argument_19412,_n_argument_19413});})();
double _n_by_19126=([&](){auto _n_argument_19414=0.0;auto _n_argument_19415=(std::fabs((_n_y_19124-73.0))-6.5);return d::maximum({_n_argument_19414,_n_argument_19415});})();
if(d::truth((((_n_bx_19125*_n_bx_19125)+(_n_by_19126*_n_by_19126))<4.0))){d::check_cancel();return ((((d::truth((_n_x_19123>=154.0))&&d::truth((_n_x_19123<176.0)))&&d::truth((_n_y_19124>=67.5)))&&d::truth((_n_y_19124<79.0)))?_n_LENS_18955:_n_CAM_18954);
}
if(((d::truth((_n_y_19124>=59.5))&&d::truth((_n_y_19124<66.0)))&&d::truth((std::fabs((_n_x_19123-166.0))<(5.5+((_n_y_19124-59.5)*0.45)))))){d::check_cancel();return _n_CAM_18954;
}
if(((d::truth((_n_y_19124>=63.5))&&d::truth((_n_y_19124<66.0)))&&d::truth(([&]()->bool{auto _n_logical_19416=([&]()->bool{auto _n_logical_19418=(_n_x_19123>=153.0);return d::truth(_n_logical_19418)?(_n_x_19123<158.0):_n_logical_19418;})();return d::truth(_n_logical_19416)?_n_logical_19416:([&]()->bool{auto _n_logical_19417=(_n_x_19123>=177.0);return d::truth(_n_logical_19417)?(_n_x_19123<182.0):_n_logical_19417;})();})()))){d::check_cancel();return _n_CAM_18954;
}
if((((d::truth((_n_x_19123>=162.0))&&d::truth((_n_x_19123<174.0)))&&d::truth((_n_y_19124>=80.0)))&&d::truth((_n_y_19124<86.0)))){d::check_cancel();return _n_CAM_18954;
}
for(auto &&_n_item_19419:d::Array<double,false>{138.0,200.0}){d::check_cancel();double _n_fx_19127=_n_item_19419;
{
double _n_k_19128=((_n_y_19124-85.0)/15.0);
if(((d::truth((_n_k_19128>=0.0))&&d::truth((_n_k_19128<=1.1)))&&d::truth((std::fabs((_n_x_19123-_n_mix_18971(168.0,_n_fx_19127,_n_k_19128)))<(1.3+(0.5*_n_k_19128)))))){d::check_cancel();return _n_CAM_18954;
}

}
}
if((d::truth((_n_y_19124>=85.0))&&d::truth((std::fabs((_n_x_19123-168.0))<1.0)))){d::check_cancel();return _n_CAM_18954;
}
return 0.0;

}
}

explicit Native_lava_wall(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_18975=d::map(_n_meta_18940->_p_palette,_n_hex_18972);
this->_n_N_18976=(_n_W_18942*_n_H_18943);
this->_n_out_18977=d::Array<d::String,false>(size_t(this->_n_N_18976));
this->_n_lut_18978=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_rows_18980=d::split(d::slice(_n_LOGO_18956,1.0,(-d::number(1.0))),d::String(u"\n"));
this->_n_GW_18981=79.0;
this->_n_GH_18982=(double(this->_n_rows_18980.size())*2.0);
this->_n_cov_18983=d::Array<float,true>(size_t((this->_n_GW_18981*this->_n_GH_18982)));
this->_n_back_18984=d::Array<uint8_t,true>(size_t((this->_n_GW_18981*this->_n_GH_18982)));
this->_n_seam_18985=d::map(this->_n_rows_18980,[&]( d::String _a0) mutable ->double{d::String _n_line_19049=_a0;
{
double _n_first_19050=d::search(_n_line_19049,d::Regex(u"\\S",u""));
double _n_last_19051=(double(d::trim(_n_line_19049,false,true).size())-1.0);
double _n_at_19052=(-d::number(1.0));
{double _n_x_19053=(_n_first_19050+1.0);
for(;d::truth((_n_x_19053<_n_last_19051));(void)((_n_x_19053++))){d::check_cancel();if(d::truth((d::at(_n_line_19049,_n_x_19053)==d::String(u" ")))){d::check_cancel();(void)((_n_at_19052=_n_x_19053));
}
}}
return _n_at_19052;

}
});
{double _n_y_19054=0.0;
for(;d::truth((_n_y_19054<double(this->_n_rows_18980.size())));(void)((_n_y_19054++))){d::check_cancel();if((d::truth((d::at(this->_n_seam_18985,_n_y_19054)>=0.0))||d::truth((_n_y_19054<8.0)))){d::check_cancel();continue;
}
double _n_a_19055=(_n_y_19054-1.0);
double _n_b_19056=(_n_y_19054+1.0);
while((d::truth((_n_b_19056<double(this->_n_rows_18980.size())))&&d::truth((d::at(this->_n_seam_18985,_n_b_19056)<0.0)))){d::check_cancel();(void)((_n_b_19056++));
}
(void)(([&](){auto&& _n_array_19252=this->_n_seam_18985;auto _n_index_19253=_n_y_19054;auto _n_value_19254=(d::truth((_n_b_19056<double(this->_n_rows_18980.size())))?((d::at(this->_n_seam_18985,_n_a_19055)+d::at(this->_n_seam_18985,_n_b_19056))/2.0):d::at(this->_n_seam_18985,_n_a_19055));d::put(_n_array_19252,_n_index_19253,_n_value_19254);return _n_value_19254;})());
}}
{double _n_y_19057=0.0;
for(;d::truth((_n_y_19057<double(this->_n_rows_18980.size())));(void)((_n_y_19057++))){d::check_cancel();{double _n_x_19058=0.0;
for(;d::truth((_n_x_19058<this->_n_GW_18981));(void)((_n_x_19058++))){d::check_cancel();auto&& _n_h_19059=([&]()->std::array<double,2>{auto _n_logical_19255=_n_HALVES_18957.get(([&]()->d::String{auto _n_logical_19256=d::at(d::at(this->_n_rows_18980,_n_y_19057),_n_x_19058);return d::has(d::at(this->_n_rows_18980,_n_y_19057),_n_x_19058)?_n_logical_19256:d::String(u" ");})());return d::present(_n_logical_19255)?_n_logical_19255:std::array<double,2>{0.0,0.0};})();
double _n_isBack_19060=(((d::truth((_n_y_19057>=8.0))&&d::truth((d::at(this->_n_seam_18985,_n_y_19057)>=0.0)))&&d::truth((_n_x_19058>d::at(this->_n_seam_18985,_n_y_19057))))?1.0:0.0);
(void)(([&](){auto&& _n_array_19257=this->_n_cov_18983;auto _n_index_19258=(((2.0*_n_y_19057)*this->_n_GW_18981)+_n_x_19058);auto _n_value_19259=d::at(_n_h_19059,0.0);d::put(_n_array_19257,_n_index_19258,_n_value_19259);return _n_value_19259;})());
(void)(([&](){auto&& _n_array_19260=this->_n_cov_18983;auto _n_index_19261=((((2.0*_n_y_19057)+1.0)*this->_n_GW_18981)+_n_x_19058);auto _n_value_19262=d::at(_n_h_19059,1.0);d::put(_n_array_19260,_n_index_19261,_n_value_19262);return _n_value_19262;})());
(void)(([&](){auto&& _n_array_19263=this->_n_back_18984;auto _n_index_19264=(((2.0*_n_y_19057)*this->_n_GW_18981)+_n_x_19058);auto _n_value_19265=([&](){auto&& _n_array_19266=this->_n_back_18984;auto _n_index_19267=((((2.0*_n_y_19057)+1.0)*this->_n_GW_18981)+_n_x_19058);auto _n_value_19268=_n_isBack_19060;d::put(_n_array_19266,_n_index_19267,_n_value_19268);return _n_value_19268;})();d::put(_n_array_19263,_n_index_19264,_n_value_19265);return _n_value_19265;})());
}}
}}
this->_n_LK_18987=(_n_SIGN_W_18965/76.0);
this->_n_signCov_18988=d::Array<float,true>(size_t(this->_n_N_18976));
this->_n_signBack_18989=d::Array<uint8_t,true>(size_t(this->_n_N_18976));
{double _n_r_19070=0.0;
for(;d::truth((_n_r_19070<_n_H_18943));(void)((_n_r_19070++))){d::check_cancel();{double _n_x_19071=0.0;
for(;d::truth((_n_x_19071<_n_W_18942));(void)((_n_x_19071++))){d::check_cancel();double _n_gx_19072=(1.5+(((_n_x_19071+0.5)-_n_SIGN_X_18966)/this->_n_LK_18987));
double _n_gy_19073=(2.0+(((_n_r_19070+0.5)-_n_SIGN_Y_18967)/this->_n_LK_18987));
if((((d::truth((_n_gx_19072<(-d::number(1.0))))||d::truth((_n_gy_19073<(-d::number(1.0)))))||d::truth((_n_gx_19072>this->_n_GW_18981)))||d::truth((_n_gy_19073>this->_n_GH_18982)))){d::check_cancel();continue;
}
double _n_c_19074=0.0;
for(auto &&_n_item_19269:d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(0.25)),(-d::number(0.25))},d::Array<double,false>{0.25,(-d::number(0.25))},d::Array<double,false>{(-d::number(0.25)),0.25},d::Array<double,false>{0.25,0.25}}){d::check_cancel();auto _n_binding_19270=_n_item_19269;
double _n_ox_19075=d::at(_n_binding_19270,0.0);
double _n_oy_19076=d::at(_n_binding_19270,1.0);
(void)((_n_c_19074=(_n_c_19074+this->_n_logoAt_18986(((_n_gx_19072-0.5)+(_n_ox_19075/this->_n_LK_18987)),((_n_gy_19073-0.5)+(_n_oy_19076/this->_n_LK_18987))))));
}
(void)(([&](){auto&& _n_array_19271=this->_n_signCov_18988;auto _n_index_19272=((_n_r_19070*_n_W_18942)+_n_x_19071);auto _n_value_19273=_n_smooth_18970(0.35,0.7,(_n_c_19074/4.0));d::put(_n_array_19271,_n_index_19272,_n_value_19273);return _n_value_19273;})());
double _n_bx_19077=d::round((_n_gx_19072-0.5));
double _n_by_19078=d::round((_n_gy_19073-0.5));
if((((d::truth((_n_bx_19077>=0.0))&&d::truth((_n_by_19078>=0.0)))&&d::truth((_n_bx_19077<this->_n_GW_18981)))&&d::truth((_n_by_19078<this->_n_GH_18982)))){d::check_cancel();(void)(([&](){auto&& _n_array_19274=this->_n_signBack_18989;auto _n_index_19275=((_n_r_19070*_n_W_18942)+_n_x_19071);auto _n_value_19276=d::at(this->_n_back_18984,((_n_by_19078*this->_n_GW_18981)+_n_bx_19077));d::put(_n_array_19274,_n_index_19275,_n_value_19276);return _n_value_19276;})());
}
}}
}}
this->_n_haloNear_18990=d::Array<float,true>(this->_n_signCov_18988);
this->_n_haloFar_18991=d::Array<float,true>(this->_n_signCov_18988);
(void)((_n_blur_18974(this->_n_haloNear_18990,2.0),_n_blur_18974(this->_n_haloNear_18990,2.0)));
(void)((_n_blur_18974(this->_n_haloFar_18991,7.0),_n_blur_18974(this->_n_haloFar_18991,7.0)));
this->_n_lamps_18992=d::Array<std::shared_ptr<_n_Record_18993>,false>{};
this->_n_mat_18994=d::Array<uint8_t,true>(size_t(this->_n_N_18976));
this->_n_lampOf_18995=d::Array<int16_t,true>(size_t(this->_n_N_18976)).fill((-d::number(1.0)));
this->_n_lu_18996=d::Array<float,true>(size_t(this->_n_N_18976));
this->_n_lv_18997=d::Array<float,true>(size_t(this->_n_N_18976));
this->_n_shelfOf_18998=d::Array<int8_t,true>(size_t(this->_n_N_18976)).fill((-d::number(1.0)));
(void)(d::forEach(_n_SHELVES_18960,[&]( std::shared_ptr<_n_Record_18961> _a0,double _a1) mutable ->void{auto _n_binding_19277=_a0;
double _n_s_19079=_n_binding_19277->_p_s;
double _n_top_19080=_n_binding_19277->_p_top;
double _n_j_19081=_a1;
{
double _n_bottom_19082=(_n_top_19080+(_n_LAMP_H_18962*_n_s_19079));
double _n_sp_19083=(10.5*_n_s_19079);
{double _n_i_19084=(-d::number(12.0));
for(;d::truth((_n_i_19084<=12.0));(void)((_n_i_19084++))){d::check_cancel();double _n_cx_19085=(100.0+(((_n_i_19084+(d::mod(_n_j_19081,2.0)*0.5))-0.25)*_n_sp_19083));
if((d::truth((_n_cx_19085<(-d::number(5.0))))||d::truth((_n_cx_19085>(_n_W_18942+5.0))))){d::check_cancel();continue;
}
if((d::truth((_n_j_19081==0.0))&&d::truth((std::fabs((_n_cx_19085-100.0))<((_n_SIGN_W_18965/2.0)+5.0))))){d::check_cancel();continue;
}
double _n_h_19086=_n_hash_18968((_n_i_19084+40.0),(_n_j_19081+7.0));
double _n_kind_19087=(d::truth((_n_h_19086<0.78))?d::at(_n_WARM_18959,std::floor((_n_hash_18968(_n_i_19084,(_n_j_19081*13.0))*double(_n_WARM_18959.size())))):(5.0+std::floor((_n_hash_18968(_n_j_19081,(_n_i_19084*5.0))*3.0))));
auto _n_binding_19278=d::at(_n_KINDS_18958,_n_kind_19087);
d::Array<double,false> _n_wax_19088=d::at(_n_binding_19278,0.0);
d::Array<double,false> _n_liq_19089=d::at(_n_binding_19278,1.0);
d::Array<d::Array<double,false>,false> _n_blobs_19090=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,4.5,2.0,0.5,0.0,0.0},d::Array<double,false>{0.0,13.7,1.0,0.6,0.0,0.0}};
{double _n_b_19091=0.0;
for(;d::truth((_n_b_19091<3.0));(void)((_n_b_19091++))){d::check_cancel();double _n_q_19092=_n_hash_18968(((_n_i_19084*31.0)+_n_b_19091),((_n_j_19081*17.0)+3.0));
(void)(_n_blobs_19090.push(d::Array<double,false>{(1.0+std::floor((_n_q_19092*3.0))),_n_hash_18968(_n_b_19091,((_n_i_19084*7.0)+_n_j_19081)),(0.8+(0.45*_n_hash_18968((_n_i_19084+(_n_b_19091*9.0)),_n_j_19081))),1.0,_n_hash_18968((_n_i_19084*3.0),(_n_b_19091+(_n_j_19081*11.0))),1.0}));
}}
d::Array<double,false> _n_glow_19093=d::map(_n_wax_19088,[&]( double _a0,double _a1) mutable ->double{double _n_w_19094=_a0;
double _n_c_19095=_a1;
return ((0.65*_n_w_19094)+(0.5*d::at(_n_liq_19089,_n_c_19095)));});
(void)(this->_n_lamps_18992.push(([&](){auto _n_object_19280=std::make_shared<_n_Record_18993>();_n_object_19280->_p_cx=_n_cx_19085;_n_object_19280->_p_bottom=_n_bottom_19082;_n_object_19280->_p_s=_n_s_19079;_n_object_19280->_p_wax=_n_wax_19088;_n_object_19280->_p_liq=_n_liq_19089;_n_object_19280->_p_glow=_n_glow_19093;_n_object_19280->_p_blobs=_n_blobs_19090;return _n_object_19280;})()));
}}
{double _n_r_19096=std::floor(_n_bottom_19082);
for(;d::truth((_n_r_19096<d::minimum({_n_H_18943,((_n_bottom_19082+(2.3*_n_s_19079))+1.0)})));(void)((_n_r_19096++))){d::check_cancel();{double _n_x_19097=0.0;
for(;d::truth((_n_x_19097<_n_W_18942));(void)((_n_x_19097++))){d::check_cancel();double _n_k_19098=((_n_r_19096*_n_W_18942)+_n_x_19097);
double _n_y_19099=(_n_r_19096+0.5);
if((d::truth((_n_y_19099>=_n_bottom_19082))&&d::truth((_n_y_19099<(_n_bottom_19082+(2.3*_n_s_19079)))))){d::check_cancel();(void)(([&](){auto&& _n_array_19281=this->_n_mat_18994;auto _n_index_19282=_n_k_19098;auto _n_value_19283=(d::truth((_n_y_19099<(_n_bottom_19082+0.7)))?_n_LIP_18952:_n_SHELF_18951);d::put(_n_array_19281,_n_index_19282,_n_value_19283);return _n_value_19283;})());
(void)(([&](){auto&& _n_array_19284=this->_n_shelfOf_18998;auto _n_index_19285=_n_k_19098;auto _n_value_19286=_n_j_19081;d::put(_n_array_19284,_n_index_19285,_n_value_19286);return _n_value_19286;})());
}
}}
}}

}
}));
(void)(d::forEach(this->_n_lamps_18992,[&]( std::shared_ptr<_n_Record_18993> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_18993> _n_L_19100=_a0;
double _n_id_19101=_a1;
{
auto _n_binding_19287=_n_L_19100;
double _n_cx_19102=_n_binding_19287->_p_cx;
double _n_bottom_19103=_n_binding_19287->_p_bottom;
double _n_s_19104=_n_binding_19287->_p_s;
{double _n_r_19105=std::floor((_n_bottom_19103-(_n_LAMP_H_18962*_n_s_19104)));
for(;d::truth((_n_r_19105<std::ceil(_n_bottom_19103)));(void)((_n_r_19105++))){d::check_cancel();{double _n_x_19106=std::floor((_n_cx_19102-(3.5*_n_s_19104)));
for(;d::truth((_n_x_19106<=std::ceil((_n_cx_19102+(3.5*_n_s_19104)))));(void)((_n_x_19106++))){d::check_cancel();if((((d::truth((_n_r_19105<0.0))||d::truth((_n_r_19105>=_n_H_18943)))||d::truth((_n_x_19106<0.0)))||d::truth((_n_x_19106>=_n_W_18942)))){d::check_cancel();continue;
}
double _n_k_19107=((_n_r_19105*_n_W_18942)+_n_x_19106);
double _n_v_19108=((_n_bottom_19103-(_n_r_19105+0.5))/_n_s_19104);
double _n_u_19109=(((_n_x_19106+0.5)-_n_cx_19102)/_n_s_19104);
double _n_hw_19110=_n_halfWidth_18973(_n_v_19108);
if((d::truth((_n_hw_19110<0.0))||d::truth((std::fabs(_n_u_19109)>_n_hw_19110)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_19288=this->_n_mat_18994;auto _n_index_19289=_n_k_19107;auto _n_value_19290=((d::truth((_n_v_19108>=_n_GLASS_LO_18963))&&d::truth((_n_v_19108<_n_GLASS_HI_18964)))?_n_GLASS_18949:_n_METAL_18950);d::put(_n_array_19288,_n_index_19289,_n_value_19290);return _n_value_19290;})());
(void)(([&](){auto&& _n_array_19291=this->_n_lampOf_18995;auto _n_index_19292=_n_k_19107;auto _n_value_19293=_n_id_19101;d::put(_n_array_19291,_n_index_19292,_n_value_19293);return _n_value_19293;})());
(void)(([&](){auto&& _n_array_19294=this->_n_lu_18996;auto _n_index_19295=_n_k_19107;auto _n_value_19296=(_n_u_19109/_n_hw_19110);d::put(_n_array_19294,_n_index_19295,_n_value_19296);return _n_value_19296;})());
(void)(([&](){auto&& _n_array_19297=this->_n_lv_18997;auto _n_index_19298=_n_k_19107;auto _n_value_19299=_n_v_19108;d::put(_n_array_19297,_n_index_19298,_n_value_19299);return _n_value_19299;})());
}}
}}

}
}));
this->_n_spill_18999=d::Array<float,true>(size_t((this->_n_N_18976*3.0)));
for(auto &&_n_item_19300:this->_n_lamps_18992){d::check_cancel();std::shared_ptr<_n_Record_18993> _n_L_19111=_n_item_19300;
{
double _n_y0_19112=(_n_L_19111->_p_bottom-(_n_GLASS_HI_18964*_n_L_19111->_p_s));
double _n_y1_19113=(_n_L_19111->_p_bottom-(_n_GLASS_LO_18963*_n_L_19111->_p_s));
double _n_reach_19114=(5.0*_n_L_19111->_p_s);
{double _n_r_19115=([&](){auto _n_argument_19301=0.0;auto _n_argument_19302=std::floor((_n_y0_19112-26.0));return d::maximum({_n_argument_19301,_n_argument_19302});})();
for(;d::truth((_n_r_19115<d::minimum({_n_H_18943,(_n_y1_19113+14.0)})));(void)((_n_r_19115++))){d::check_cancel();double _n_y_19116=(_n_r_19115+0.5);
double _n_dy_19117=(d::truth((_n_y_19116<_n_y0_19112))?(_n_y0_19112-_n_y_19116):(d::truth((_n_y_19116>_n_y1_19113))?(_n_y_19116-_n_y1_19113):0.0));
{double _n_x_19118=([&](){auto _n_argument_19303=0.0;auto _n_argument_19304=std::floor((_n_L_19111->_p_cx-26.0));return d::maximum({_n_argument_19303,_n_argument_19304});})();
for(;d::truth((_n_x_19118<d::minimum({_n_W_18942,(_n_L_19111->_p_cx+26.0)})));(void)((_n_x_19118++))){d::check_cancel();double _n_dx_19119=((_n_x_19118+0.5)-_n_L_19111->_p_cx);
double _n_d_19120=std::sqrt(((_n_dx_19119*_n_dx_19119)+((_n_dy_19117*_n_dy_19117)*1.6)));
double _n_e_19121=([&](){auto _n_left_19305=(std::exp(((-d::number(_n_d_19120))/_n_reach_19114))*0.6);auto _n_right_19306=(std::exp(((-d::number(_n_d_19120))/(_n_reach_19114*3.0)))*0.04);return (_n_left_19305+_n_right_19306);})();
double _n_k_19122=((_n_r_19115*_n_W_18942)+_n_x_19118);
(void)(([&](){auto&& _n_array_19307=this->_n_spill_18999;auto _n_index_19308=(_n_k_19122*3.0);auto _n_value_19309=(d::at(_n_array_19307,_n_index_19308)+(d::at(_n_L_19111->_p_glow,0.0)*_n_e_19121));d::put(_n_array_19307,_n_index_19308,_n_value_19309);return _n_value_19309;})());
(void)(([&](){auto&& _n_array_19310=this->_n_spill_18999;auto _n_index_19311=((_n_k_19122*3.0)+1.0);auto _n_value_19312=(d::at(_n_array_19310,_n_index_19311)+(d::at(_n_L_19111->_p_glow,1.0)*_n_e_19121));d::put(_n_array_19310,_n_index_19311,_n_value_19312);return _n_value_19312;})());
(void)(([&](){auto&& _n_array_19313=this->_n_spill_18999;auto _n_index_19314=((_n_k_19122*3.0)+2.0);auto _n_value_19315=(d::at(_n_array_19313,_n_index_19314)+(d::at(_n_L_19111->_p_glow,2.0)*_n_e_19121));d::put(_n_array_19313,_n_index_19314,_n_value_19315);return _n_value_19315;})());
}}
}}

}
}
this->_n_camRim_19000=d::Array<float,true>(size_t(this->_n_N_18976));
{double _n_r_19129=0.0;
for(;d::truth((_n_r_19129<_n_H_18943));(void)((_n_r_19129++))){d::check_cancel();{double _n_x_19130=0.0;
for(;d::truth((_n_x_19130<_n_W_18942));(void)((_n_x_19130++))){d::check_cancel();double _n_c_19131=this->_n_inCam_19001((_n_x_19130+0.5),(_n_r_19129+0.5));
if(d::truth((!d::truth(_n_c_19131)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_19316=this->_n_mat_18994;auto _n_index_19317=((_n_r_19129*_n_W_18942)+_n_x_19130);auto _n_value_19318=_n_c_19131;d::put(_n_array_19316,_n_index_19317,_n_value_19318);return _n_value_19318;})());
double _n_open_19132=([&](){auto _n_left_19319=([&](){auto _n_left_19321=([&](){auto _n_left_19323=(d::truth(this->_n_inCam_19001((_n_x_19130+0.5),(_n_r_19129-0.5)))?0.0:1.0);auto _n_right_19324=(d::truth(this->_n_inCam_19001((_n_x_19130-0.5),(_n_r_19129+0.5)))?0.0:0.7);return (_n_left_19323+_n_right_19324);})();auto _n_right_19322=(d::truth(this->_n_inCam_19001((_n_x_19130+1.5),(_n_r_19129+0.5)))?0.0:0.7);return (_n_left_19321+_n_right_19322);})();auto _n_right_19320=(d::truth(this->_n_inCam_19001((_n_x_19130+0.5),(_n_r_19129+1.5)))?0.0:0.4);return (_n_left_19319+_n_right_19320);})();
(void)(([&](){auto&& _n_array_19325=this->_n_camRim_19000;auto _n_index_19326=((_n_r_19129*_n_W_18942)+_n_x_19130);auto _n_value_19327=d::minimum({1.0,_n_open_19132});d::put(_n_array_19325,_n_index_19326,_n_value_19327);return _n_value_19327;})());
}}
}}
this->_n_SIGN_C_19002=d::Array<double,false>{0.953,0.502,0.125};
this->_n_BACK_C_19003=d::Array<double,false>{0.98,0.682,0.251};
this->_n_screen_19004=d::Array<float,true>(size_t((this->_n_N_18976*3.0)));
this->_n_MINI_19005=(10.0/76.0);
{double _n_r_19133=0.0;
for(;d::truth((_n_r_19133<_n_H_18943));(void)((_n_r_19133++))){d::check_cancel();{double _n_x_19134=0.0;
for(;d::truth((_n_x_19134<_n_W_18942));(void)((_n_x_19134++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_18994,((_n_r_19133*_n_W_18942)+_n_x_19134))!=_n_LENS_18955))){d::check_cancel();continue;
}
double _n_k_19135=((_n_r_19133*_n_W_18942)+_n_x_19134);
double _n_row_19136=(_n_r_19133-67.0);
double _n_col_19137=(_n_x_19134-154.0);
d::Array<double,false> _n_c_19138=d::Array<double,false>{0.025,0.035,0.07};
double _n_sc_19139=([&](){auto _n_argument_19328=0.3;auto _n_argument_19329=0.6;auto _n_argument_19330=this->_n_logoAt_18986(((1.5+(((_n_col_19137+0.5)-6.0)/this->_n_MINI_19005))-0.5),((2.0+(((_n_row_19136+0.5)-0.6)/this->_n_MINI_19005))-0.5));return _n_smooth_18970(_n_argument_19328,_n_argument_19329,_n_argument_19330);})();
if(d::truth((_n_sc_19139>0.0))){d::check_cancel();(void)((_n_c_19138=d::map(((d::truth((_n_row_19136>2.0))&&d::truth((_n_col_19137>11.0)))?this->_n_BACK_C_19003:this->_n_SIGN_C_19002),[&]( double _a0) mutable ->double{double _n_v_19140=_a0;
return ((_n_v_19140*_n_sc_19139)+0.02);})));
}
if(((d::truth((_n_row_19136>=6.0))&&d::truth((_n_row_19136<9.0)))&&d::truth((d::mod(_n_col_19137,3.0)!=2.0)))){d::check_cancel();std::shared_ptr<_n_Record_18993> _n_L_19141=d::at(this->_n_lamps_18992,std::floor((([&](){auto _n_argument_19331=std::floor((_n_col_19137/3.0));auto _n_argument_19332=3.0;return _n_hash_18968(_n_argument_19331,_n_argument_19332);})()*double(this->_n_lamps_18992.size()))));
double _n_g_19142=(d::truth((_n_row_19136==6.0))?0.5:1.0);
(void)((_n_c_19138=d::map(_n_L_19141->_p_glow,[&]( double _a0) mutable ->double{double _n_v_19143=_a0;
return (_n_v_19143*_n_g_19142);})));
}else {d::check_cancel();if(d::truth((_n_row_19136==9.0))){d::check_cancel();(void)((_n_c_19138=d::Array<double,false>{0.2,0.11,0.07}));
}
}
(void)(((([&](){auto&& _n_array_19333=this->_n_screen_19004;auto _n_index_19334=(_n_k_19135*3.0);auto _n_value_19335=d::at(_n_c_19138,0.0);d::put(_n_array_19333,_n_index_19334,_n_value_19335);return _n_value_19335;})(),([&](){auto&& _n_array_19336=this->_n_screen_19004;auto _n_index_19337=((_n_k_19135*3.0)+1.0);auto _n_value_19338=d::at(_n_c_19138,1.0);d::put(_n_array_19336,_n_index_19337,_n_value_19338);return _n_value_19338;})()),([&](){auto&& _n_array_19339=this->_n_screen_19004;auto _n_index_19340=((_n_k_19135*3.0)+2.0);auto _n_value_19341=d::at(_n_c_19138,2.0);d::put(_n_array_19339,_n_index_19340,_n_value_19341);return _n_value_19341;})()));
}}
}}
{double _n_k_19144=0.0;
for(;d::truth((_n_k_19144<this->_n_N_18976));(void)((_n_k_19144++))){d::check_cancel();if(((d::truth((d::at(this->_n_signCov_18988,_n_k_19144)>0.02))&&d::truth((d::at(this->_n_mat_18994,_n_k_19144)!=_n_CAM_18954)))&&d::truth((d::at(this->_n_mat_18994,_n_k_19144)!=_n_LENS_18955)))){d::check_cancel();(void)(([&](){auto&& _n_array_19342=this->_n_mat_18994;auto _n_index_19343=_n_k_19144;auto _n_value_19344=_n_SIGN_18953;d::put(_n_array_19342,_n_index_19343,_n_value_19344);return _n_value_19344;})());
}
}}
this->_n_NB_19006=5.0;
this->_n_blobX_19007=d::Array<float,true>(size_t((double(this->_n_lamps_18992.size())*this->_n_NB_19006)));
this->_n_blobY_19008=d::Array<float,true>(size_t((double(this->_n_lamps_18992.size())*this->_n_NB_19006)));
this->_n_blobR_19009=d::Array<float,true>(size_t((double(this->_n_lamps_18992.size())*this->_n_NB_19006)));
this->_n_blobS_19010=d::Array<float,true>(size_t((double(this->_n_lamps_18992.size())*this->_n_NB_19006)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_19221> _a1) mutable ->d::String{double _n_t_19145=_a0;
auto _n_binding_19347=(d::present(_a1)?_a1:([&](){auto _n_object_19346=std::make_shared<_n_Record_19221>();return _n_object_19346;})());
std::optional<d::Array<uint8_t,true>> _n_color_19146=_n_binding_19347->_p_color;
{
double _n_tt_19147=d::mod((d::mod(_n_t_19145,_n_LOOP_18944)+_n_LOOP_18944),_n_LOOP_18944);
double _n_glintAt_19148=((((d::mod(_n_tt_19147,10.0)/2.2)*(_n_SIGN_W_18965+40.0))+_n_SIGN_X_18966)-20.0);
double _n_hum_19149=(0.96+(0.04*std::sin(((((_n_tt_19147/_n_LOOP_18944)*ascii::PI)*2.0)*6.0))));
(void)(d::forEach(this->_n_lamps_18992,[&]( std::shared_ptr<_n_Record_18993> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_18993> _n_L_19150=_a0;
double _n_id_19151=_a1;
{
{double _n_b_19152=0.0;
for(;d::truth((_n_b_19152<this->_n_NB_19006));(void)((_n_b_19152++))){d::check_cancel();d::Array<double,false> _n_B_19153=d::at(_n_L_19150->_p_blobs,_n_b_19152);
double _n_i_19154=((_n_id_19151*this->_n_NB_19006)+_n_b_19152);
if(d::truth((d::at(_n_B_19153,5.0)==0.0))){d::check_cancel();(void)((((([&](){auto&& _n_array_19348=this->_n_blobX_19007;auto _n_index_19349=_n_i_19154;auto _n_value_19350=0.0;d::put(_n_array_19348,_n_index_19349,_n_value_19350);return _n_value_19350;})(),([&](){auto&& _n_array_19351=this->_n_blobY_19008;auto _n_index_19352=_n_i_19154;auto _n_value_19353=d::at(_n_B_19153,1.0);d::put(_n_array_19351,_n_index_19352,_n_value_19353);return _n_value_19353;})()),([&](){auto&& _n_array_19354=this->_n_blobR_19009;auto _n_index_19355=_n_i_19154;auto _n_value_19356=(d::at(_n_B_19153,2.0)*d::at(_n_B_19153,2.0));d::put(_n_array_19354,_n_index_19355,_n_value_19356);return _n_value_19356;})()),([&](){auto&& _n_array_19357=this->_n_blobS_19010;auto _n_index_19358=_n_i_19154;auto _n_value_19359=(1.0/d::at(_n_B_19153,3.0));d::put(_n_array_19357,_n_index_19358,_n_value_19359);return _n_value_19359;})()));
continue;
}
double _n_a_19155=(((((_n_tt_19147/_n_LOOP_18944)*d::at(_n_B_19153,0.0))+d::at(_n_B_19153,1.0))*ascii::PI)*2.0);
double _n_by_19156=(5.3+((0.5-(0.5*std::cos(_n_a_19155)))*7.2));
double _n_hw_19157=_n_halfWidth_18973(_n_by_19156);
double _n_br_19158=([&](){auto _n_left_19360=(d::at(_n_B_19153,2.0)*(0.8+(0.2*std::pow(std::sin(((_n_a_19155*0.5)+d::at(_n_B_19153,4.0))),2.0))));auto _n_right_19361=d::minimum({1.0,(_n_hw_19157/2.2)});return (_n_left_19360*_n_right_19361);})();
(void)(([&](){auto&& _n_array_19362=this->_n_blobX_19007;auto _n_index_19363=_n_i_19154;auto _n_value_19364=((0.45*_n_hw_19157)*std::sin(((_n_a_19155*2.0)+(d::at(_n_B_19153,4.0)*6.28))));d::put(_n_array_19362,_n_index_19363,_n_value_19364);return _n_value_19364;})());
(void)(([&](){auto&& _n_array_19365=this->_n_blobY_19008;auto _n_index_19366=_n_i_19154;auto _n_value_19367=_n_by_19156;d::put(_n_array_19365,_n_index_19366,_n_value_19367);return _n_value_19367;})());
(void)(([&](){auto&& _n_array_19368=this->_n_blobR_19009;auto _n_index_19369=_n_i_19154;auto _n_value_19370=(_n_br_19158*_n_br_19158);d::put(_n_array_19368,_n_index_19369,_n_value_19370);return _n_value_19370;})());
(void)(([&](){auto&& _n_array_19371=this->_n_blobS_19010;auto _n_index_19372=_n_i_19154;auto _n_value_19373=(1.0/(1.0+(0.75*std::fabs(std::sin(_n_a_19155)))));d::put(_n_array_19371,_n_index_19372,_n_value_19373);return _n_value_19373;})());
}}

}
}));
{double _n_r_19159=0.0;
for(;d::truth((_n_r_19159<_n_H_18943));(void)((_n_r_19159++))){d::check_cancel();{double _n_x_19160=0.0;
for(;d::truth((_n_x_19160<_n_W_18942));(void)((_n_x_19160++))){d::check_cancel();double _n_k_19161=((_n_r_19159*_n_W_18942)+_n_x_19160);
double _n_y_19162=(_n_r_19159+0.5);
double _n_m_19163=d::at(this->_n_mat_18994,_n_k_19161);
double _n_cr_19164=0.0;
double _n_cg_19165=0.0;
double _n_cb_19166=0.0;
double _n_floor_19167=0.0;
double _n_sr_19168=d::at(this->_n_spill_18999,(_n_k_19161*3.0));
double _n_sg_19169=d::at(this->_n_spill_18999,((_n_k_19161*3.0)+1.0));
double _n_sb_19170=d::at(this->_n_spill_18999,((_n_k_19161*3.0)+2.0));
double _n_hn_19171=d::at(this->_n_haloNear_18990,_n_k_19161);
double _n_hf_19172=d::at(this->_n_haloFar_18991,_n_k_19161);
double _n_halo_19173=(((_n_hf_19172*0.3)*(1.0-(0.85*_n_smooth_18970(0.15,0.6,_n_hn_19171))))*_n_hum_19149);
double _n_wr_19174=((0.006+(_n_sr_19168*0.075))+(_n_halo_19173*d::at(this->_n_SIGN_C_19002,0.0)));
double _n_wg_19175=((0.005+(_n_sg_19169*0.075))+(_n_halo_19173*d::at(this->_n_SIGN_C_19002,1.0)));
double _n_wb_19176=((0.008+(_n_sb_19170*0.075))+(_n_halo_19173*d::at(this->_n_SIGN_C_19002,2.0)));
if((d::truth((_n_m_19163==_n_WALL_18948))||d::truth((_n_m_19163==_n_SIGN_18953)))){d::check_cancel();double _n_seamV_19177=((d::truth((d::mod(_n_x_19160,25.0)==0.0))?0.6:1.0)*(0.92+(0.08*_n_hash_18968(double(d::i32(_n_x_19160)>>(d::u32(2.0)&31)),double(d::i32(_n_r_19159)>>(d::u32(3.0)&31))))));
(void)((((_n_cr_19164=(_n_wr_19174*_n_seamV_19177)),(_n_cg_19165=(_n_wg_19175*_n_seamV_19177))),(_n_cb_19166=(_n_wb_19176*_n_seamV_19177))));
if(d::truth((_n_m_19163==_n_SIGN_18953))){d::check_cancel();double _n_c_19178=d::at(this->_n_signCov_18988,_n_k_19161);
d::Array<double,false> _n_C_19179=(d::truth(d::at(this->_n_signBack_18989,_n_k_19161))?this->_n_BACK_C_19003:this->_n_SIGN_C_19002);
double _n_lum_19180=(1.3*_n_hum_19149);
double _n_g_19181=std::fabs((((_n_x_19160+0.5)+((_n_y_19162-_n_SIGN_Y_18967)*0.6))-_n_glintAt_19148));
double _n_glint_19182=(d::truth((_n_g_19181<5.0))?(1.0-_n_smooth_18970(0.0,5.0,_n_g_19181)):0.0);
(void)((_n_lum_19180=(_n_lum_19180+(0.35*_n_glint_19182))));
double _n_fr_19183=d::minimum({1.2,((d::at(_n_C_19179,0.0)*_n_lum_19180)+(_n_glint_19182*0.25))});
double _n_fg_19184=d::minimum({1.2,((d::at(_n_C_19179,1.0)*_n_lum_19180)+(_n_glint_19182*0.3))});
double _n_fb_19185=((d::at(_n_C_19179,2.0)*_n_lum_19180)+(_n_glint_19182*0.25));
(void)((((_n_cr_19164=_n_mix_18971(_n_cr_19164,_n_fr_19183,_n_c_19178)),(_n_cg_19165=_n_mix_18971(_n_cg_19165,_n_fg_19184,_n_c_19178))),(_n_cb_19166=_n_mix_18971(_n_cb_19166,_n_fb_19185,_n_c_19178))));
(void)((_n_floor_19167=(0.2*_n_c_19178)));
}
}else {d::check_cancel();if((d::truth((_n_m_19163==_n_GLASS_18949))||d::truth((_n_m_19163==_n_METAL_18950)))){d::check_cancel();double _n_id_19186=d::at(this->_n_lampOf_18995,_n_k_19161);
std::shared_ptr<_n_Record_18993> _n_L_19187=d::at(this->_n_lamps_18992,_n_id_19186);
double _n_u_19188=d::at(this->_n_lu_18996,_n_k_19161);
double _n_v_19189=d::at(this->_n_lv_18997,_n_k_19161);
if(d::truth((_n_m_19163==_n_GLASS_18949))){d::check_cancel();double _n_g_19190=((_n_v_19189-_n_GLASS_LO_18963)/(_n_GLASS_HI_18964-_n_GLASS_LO_18963));
double _n_px_19191=(_n_u_19188*_n_halfWidth_18973(_n_v_19189));
double _n_f_19192=0.0;
{double _n_i_19193=(_n_id_19186*this->_n_NB_19006);
for(;d::truth((_n_i_19193<((_n_id_19186*this->_n_NB_19006)+this->_n_NB_19006)));(void)((_n_i_19193++))){d::check_cancel();double _n_dx_19194=(_n_px_19191-d::at(this->_n_blobX_19007,_n_i_19193));
double _n_dy_19195=((_n_v_19189-d::at(this->_n_blobY_19008,_n_i_19193))*d::at(this->_n_blobS_19010,_n_i_19193));
(void)((_n_f_19192=(_n_f_19192+(d::at(this->_n_blobR_19009,_n_i_19193)/(((_n_dx_19194*_n_dx_19194)+(_n_dy_19195*_n_dy_19195))+0.05)))));
}}
double _n_bulb_19196=(0.3+(0.6*std::exp(((-d::number(_n_g_19190))*2.4))));
double _n_rim_19197=(1.0-(0.5*([&](){auto _n_argument_19374=0.55;auto _n_argument_19375=1.0;auto _n_argument_19376=std::fabs(_n_u_19188);return _n_smooth_18970(_n_argument_19374,_n_argument_19375,_n_argument_19376);})()));
(void)((((_n_cr_19164=((d::at(_n_L_19187->_p_liq,0.0)*_n_bulb_19196)*_n_rim_19197)),(_n_cg_19165=((d::at(_n_L_19187->_p_liq,1.0)*_n_bulb_19196)*_n_rim_19197))),(_n_cb_19166=((d::at(_n_L_19187->_p_liq,2.0)*_n_bulb_19196)*_n_rim_19197))));
double _n_wax_19198=_n_smooth_18970(0.8,1.25,_n_f_19192);
double _n_wl_19199=(([&](){auto _n_left_19377=(0.62+(0.45*std::exp(((-d::number(_n_g_19190))*1.6))));auto _n_right_19378=(0.2*_n_clamp_18969((_n_f_19192-1.4)));return (_n_left_19377+_n_right_19378);})()*(0.75+(0.25*_n_rim_19197)));
(void)((((_n_cr_19164=_n_mix_18971(_n_cr_19164,(d::at(_n_L_19187->_p_wax,0.0)*_n_wl_19199),_n_wax_19198)),(_n_cg_19165=_n_mix_18971(_n_cg_19165,(d::at(_n_L_19187->_p_wax,1.0)*_n_wl_19199),_n_wax_19198))),(_n_cb_19166=_n_mix_18971(_n_cb_19166,(d::at(_n_L_19187->_p_wax,2.0)*_n_wl_19199),_n_wax_19198))));
double _n_sheen_19200=([&](){auto _n_left_19379=(std::exp((-d::number(std::pow(((_n_u_19188+0.5)/0.14),2.0))))*0.28);auto _n_right_19380=_n_smooth_18970(0.95,0.1,_n_g_19190);return (_n_left_19379*_n_right_19380);})();
(void)((((_n_cr_19164=(_n_cr_19164+_n_sheen_19200)),(_n_cg_19165=(_n_cg_19165+_n_sheen_19200))),(_n_cb_19166=(_n_cb_19166+(_n_sheen_19200*1.05)))));
(void)((_n_floor_19167=0.3));
}else {d::check_cancel();double _n_hl_19201=std::exp((-d::number(std::pow(((_n_u_19188+0.3)/0.3),2.0))));
double _n_near_19202=(d::truth((_n_v_19189<_n_GLASS_LO_18963))?_n_smooth_18970((_n_GLASS_LO_18963-2.0),_n_GLASS_LO_18963,_n_v_19189):_n_smooth_18970((_n_GLASS_HI_18964+1.6),_n_GLASS_HI_18964,_n_v_19189));
double _n_base_19203=(((0.4+(0.3*(1.0-(_n_u_19188*_n_u_19188))))+(0.45*_n_hl_19201))+(0.35*_n_near_19202));
(void)((((_n_cr_19164=((0.12*_n_hl_19201)+((d::at(_n_L_19187->_p_glow,0.0)*_n_base_19203)*0.4))),(_n_cg_19165=((0.12*_n_hl_19201)+((d::at(_n_L_19187->_p_glow,1.0)*_n_base_19203)*0.4)))),(_n_cb_19166=((0.13*_n_hl_19201)+((d::at(_n_L_19187->_p_glow,2.0)*_n_base_19203)*0.4)))));
(void)((_n_floor_19167=0.25));
}
}else {d::check_cancel();if((d::truth((_n_m_19163==_n_LIP_18952))||d::truth((_n_m_19163==_n_SHELF_18951)))){d::check_cancel();double _n_j_19204=d::at(this->_n_shelfOf_18998,_n_k_19161);
double _n_lit_19205=(d::truth((_n_m_19163==_n_LIP_18952))?0.95:0.32);
double _n_grain_19206=(0.9+(0.1*_n_hash_18968(double(d::i32(_n_x_19160)>>(d::u32(1.0)&31)),((_n_r_19159*7.0)+_n_j_19204))));
(void)((_n_cr_19164=((0.07+(_n_sr_19168*_n_lit_19205))*_n_grain_19206)));
(void)((_n_cg_19165=((0.05+((_n_sg_19169*_n_lit_19205)*0.92))*_n_grain_19206)));
(void)((_n_cb_19166=((0.04+((_n_sb_19170*_n_lit_19205)*0.85))*_n_grain_19206)));
(void)((_n_floor_19167=0.08));
}else {d::check_cancel();if((d::truth((_n_m_19163==_n_CAM_18954))||d::truth((_n_m_19163==_n_LENS_18955)))){d::check_cancel();double _n_rim_19207=d::at(this->_n_camRim_19000,_n_k_19161);
double _n_e_19208=(_n_rim_19207*(0.9+(0.6*_n_smooth_18970(85.0,70.0,_n_y_19162))));
(void)((_n_cr_19164=(0.012+(((_n_sr_19168*0.5)+0.05)*_n_e_19208))));
(void)((_n_cg_19165=(0.012+(((_n_sg_19169*0.5)+0.05)*_n_e_19208))));
(void)((_n_cb_19166=(0.016+(((_n_sb_19170*0.5)+0.06)*_n_e_19208))));
if(((d::truth((_n_m_19163==_n_CAM_18954))&&d::truth(([&]()->bool{auto _n_logical_19381=(_n_x_19160==179.0);return d::truth(_n_logical_19381)?_n_logical_19381:(_n_x_19160==181.0);})()))&&d::truth(([&]()->bool{auto _n_logical_19382=(_n_r_19159==72.0);return d::truth(_n_logical_19382)?_n_logical_19382:(_n_r_19159==75.0);})()))){d::check_cancel();(void)((((_n_cr_19164=0.16),(_n_cg_19165=0.15)),(_n_cb_19166=0.15)));
}
if(d::truth((_n_m_19163==_n_LENS_18955))){d::check_cancel();double _n_s_19209=(0.9+(0.1*_n_hum_19149));
(void)((((_n_cr_19164=(d::at(this->_n_screen_19004,(_n_k_19161*3.0))*_n_s_19209)),(_n_cg_19165=(d::at(this->_n_screen_19004,((_n_k_19161*3.0)+1.0))*_n_s_19209))),(_n_cb_19166=(d::at(this->_n_screen_19004,((_n_k_19161*3.0)+2.0))*_n_s_19209))));
}
if((d::truth((_n_x_19160==180.0))&&d::truth((_n_r_19159==68.0)))){d::check_cancel();bool _n_on_19210=(std::sin(((_n_tt_19147*ascii::PI)*2.0))>(-d::number(0.2)));
(void)((((_n_cr_19164=(d::truth(_n_on_19210)?1.0:0.3)),(_n_cg_19165=(d::truth(_n_on_19210)?0.22:0.06))),(_n_cb_19166=(d::truth(_n_on_19210)?0.18:0.05))));
}
}
}
}
}
double _n_vx_19211=((_n_x_19160-100.0)/100.0);
double _n_vy_19212=((_n_y_19162-46.0)/62.0);
double _n_vig_19213=(1.0-(0.4*((_n_vx_19211*_n_vx_19211)+(_n_vy_19212*_n_vy_19212))));
if(((d::truth((_n_m_19163!=_n_CAM_18954))&&d::truth((_n_m_19163!=_n_LENS_18955)))&&d::truth((_n_m_19163!=_n_SIGN_18953)))){d::check_cancel();(void)((((_n_cr_19164=(_n_cr_19164*_n_vig_19213)),(_n_cg_19165=(_n_cg_19165*_n_vig_19213))),(_n_cb_19166=(_n_cb_19166*_n_vig_19213))));
}
double _n_peak_19214=d::maximum({_n_cr_19164,_n_cg_19165,_n_cb_19166,0.0001});
double _n_level_19215=_n_clamp_18969((_n_floor_19167+(((1.0-_n_floor_19167)*std::pow(_n_peak_19214,0.85))*0.95)));
double _n_step_19216=([&](){auto _n_argument_19383=0.0;auto _n_argument_19384=([&](){auto _n_argument_19385=3.0;auto _n_argument_19386=d::round(((_n_level_19215*3.0)+d::at(_n_BAYER_18947,((double(d::i32(_n_r_19159)&d::i32(3.0))*4.0)+double(d::i32(_n_x_19160)&d::i32(3.0))))));return d::minimum({_n_argument_19385,_n_argument_19386});})();return d::maximum({_n_argument_19383,_n_argument_19384});})();
(void)(([&](){auto&& _n_array_19387=this->_n_out_18977;auto _n_index_19388=_n_k_19161;auto _n_value_19389=d::at(_n_DOTS_18945,_n_step_19216);d::put(_n_array_19387,_n_index_19388,_n_value_19389);return _n_value_19389;})());
if(d::truth(_n_color_19146)){d::check_cancel();double _n_want_19217=(d::truth(_n_step_19216)?d::minimum({1.0,((_n_level_19215+0.06)/d::at(_n_COVER_18946,_n_step_19216))}):0.0);
double _n_s_19218=((0.3+(0.7*_n_want_19217))/_n_peak_19214);
(void)(([&](){auto&& _n_array_19390=d::read(_n_color_19146);auto _n_index_19391=_n_k_19161;auto _n_value_19392=([&](){auto _n_argument_19393=_n_clamp_18969((_n_cr_19164*_n_s_19218));auto _n_argument_19394=_n_clamp_18969((_n_cg_19165*_n_s_19218));auto _n_argument_19395=_n_clamp_18969((_n_cb_19166*_n_s_19218));return this->_n_nearest_18979(_n_argument_19393,_n_argument_19394,_n_argument_19395);})();d::put(_n_array_19390,_n_index_19391,_n_value_19392);return _n_value_19392;})());
}
}}
}}
d::Array<d::String,false> _n_lines_19219=d::Array<d::String,false>{};
{double _n_r_19220=0.0;
for(;d::truth((_n_r_19220<_n_H_18943));(void)((_n_r_19220++))){d::check_cancel();(void)(_n_lines_19219.push(d::join(this->_n_out_18977.slice((_n_r_19220*_n_W_18942),((_n_r_19220+1.0)*_n_W_18942)),d::String(u""))));
}}
return d::join(_n_lines_19219,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lava-wall").cols)*ascii::catalog_meta("lava-wall").rows);auto _env=std::make_shared<_n_Record_19221>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lava_wall_meta(){return catalog_meta("lava-wall");}
std::unique_ptr<Piece> make_lava_wall(const AsciiPieceOptions &o){return std::make_unique<Native_lava_wall>(o);}
}
