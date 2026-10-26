// Direct, statically typed C++ from src/pieces/black-prism.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_2566;
struct _n_Record_2816;
struct _n_Record_2566{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_2566> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2566>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_2816{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_2816> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2816>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_2580(double _a0,double _a1);
double _n_noise_2581(double _a0,double _a1);
double _n_clamp_2582(double _a0);
double _n_smooth_2583(double _a0,double _a1,double _a2);
double _n_mix_2584(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_2585(d::String _a0);
d::Array<double,false> _n_seg_2586(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
d::Array<double,false> _n_spectrum_2588(double _a0);
std::shared_ptr<_n_Record_2566> _n_meta_2565=[](){return ([&](){auto _n_object_2819=std::make_shared<_n_Record_2566>();_n_object_2819->_p_name=d::String(u"black prism");_n_object_2819->_p_category=d::String(u"scenes");_n_object_2819->_p_note=d::String(u"the vercel triangle as a glass prism, splitting white light to a rainbow");_n_object_2819->_p_cols=200.0;_n_object_2819->_p_rows=100.0;_n_object_2819->_p_cell=1.0;_n_object_2819->_p_fps=15.0;_n_object_2819->_p_ground=d::String(u"#000000");_n_object_2819->_p_palette=d::Array<d::String,false>{d::String(u"#161616"),d::String(u"#242424"),d::String(u"#363636"),d::String(u"#4a4a4a"),d::String(u"#636363"),d::String(u"#7e7e7e"),d::String(u"#9c9c9c"),d::String(u"#bcbcbc"),d::String(u"#dcdcdc"),d::String(u"#ffffff"),d::String(u"#ff2a3c"),d::String(u"#9a1c28"),d::String(u"#ff7417"),d::String(u"#a04a10"),d::String(u"#ffdf2e"),d::String(u"#a08c1c"),d::String(u"#38f56a"),d::String(u"#1f9a42"),d::String(u"#24dcff"),d::String(u"#16879e"),d::String(u"#3a64ff"),d::String(u"#233f9e"),d::String(u"#9a4cff"),d::String(u"#5f2f9e"),d::String(u"#fff4c8"),d::String(u"#d4f6ff"),d::String(u"#ffd2d6")};return _n_object_2819;})();}();
const d::String _n_INK_2567=[](){return d::String(u"\n                               00\n                             000000\n                            00000000\n                           0000000000\n                          000000000000\n                         00000000000000\n                        0000000000000000\n                       000000000000000000\n                     0000000000000000000000\n                    000000000000000000000000\n                   00000000000000000000000000\n                  0000000000000000000000000000\n                 000000000000000000000000000000\n                00000000000000000000000000000000\n              000000000000000000000000000000000000\n             00000000000000000000000000000000000000\n            0000000000000000000000000000000000000000\n           000000000000000000000000000000000000000000\n          00000000000000000000000000000000000000000000\n         0000000000000000000000000000000000000000000000\n        000000000000000000000000000000000000000000000000\n      0000000000000000000000000000000000000000000000000000\n     000000000000000000000000000000000000000000000000000000\n    00000000000000000000000000000000000000000000000000000000\n   0000000000000000000000000000000000000000000000000000000000\n  000000000000000000000000000000000000000000000000000000000000\n");}();
const double _n_W_2568=[](){return 200.0;}();
const double _n_H_2569=[](){return 100.0;}();
const double _n_SCALE_2570=[](){return 1.36;}();
const double _n_TOP_2571=[](){return 12.0;}();
const d::String _n_DOTS_2572=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_2573=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_2574=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_2633=_a0;
return ((_n_v_2633/16.0)-0.47);});}();
const double _n_ENTER_2575=[](){return 0.46;}();
const double _n_LEAVE_2576=[](){return 0.5;}();
const double _n_RED_2577=[](){return 0.05;}();
const double _n_VIOLET_2578=[](){return 0.4;}();
const double _n_DUST_2579=[](){return 700.0;}();
d::Array<d::Array<double,false>,false> _n_BANDS_2587=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.08,0.14},d::Array<double,false>{1.0,0.42,0.04},d::Array<double,false>{1.0,0.88,0.12},d::Array<double,false>{0.2,1.0,0.38},d::Array<double,false>{0.12,0.84,1.0},d::Array<double,false>{0.2,0.36,1.0},d::Array<double,false>{0.6,0.28,1.0}};}();
double _n_hash_2580(double _a0,double _a1){double _n_x_2634=_a0;
double _n_y_2635=_a1;
{
double _n_h_2636=([&](){auto _n_left_2820=d::imul(double(d::i32(_n_x_2634)|d::i32(0.0)),374761393.0);auto _n_right_2821=d::imul(double(d::i32(_n_y_2635)|d::i32(0.0)),668265263.0);return (_n_left_2820+_n_right_2821);})();
(void)((_n_h_2636=d::imul(double(d::i32(_n_h_2636)^d::i32(double(d::u32(_n_h_2636)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_2636)^d::i32(double(d::u32(_n_h_2636)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_2581(double _a0,double _a1){double _n_x_2637=_a0;
double _n_y_2638=_a1;
{
double _n_xi_2639=std::floor(_n_x_2637);
double _n_yi_2640=std::floor(_n_y_2638);
double _n_fx_2641=(_n_x_2637-_n_xi_2639);
double _n_fy_2642=(_n_y_2638-_n_yi_2640);
double _n_u_2643=((_n_fx_2641*_n_fx_2641)*(3.0-(2.0*_n_fx_2641)));
double _n_v_2644=((_n_fy_2642*_n_fy_2642)*(3.0-(2.0*_n_fy_2642)));
double _n_a_2645=_n_hash_2580(_n_xi_2639,_n_yi_2640);
double _n_b_2646=_n_hash_2580((_n_xi_2639+1.0),_n_yi_2640);
double _n_c_2647=_n_hash_2580(_n_xi_2639,(_n_yi_2640+1.0));
double _n_d_2648=_n_hash_2580((_n_xi_2639+1.0),(_n_yi_2640+1.0));
return (((_n_a_2645+((_n_b_2646-_n_a_2645)*_n_u_2643))+((_n_c_2647-_n_a_2645)*_n_v_2644))+(((((_n_a_2645-_n_b_2646)-_n_c_2647)+_n_d_2648)*_n_u_2643)*_n_v_2644));

}
}

double _n_clamp_2582(double _a0){double _n_v_2649=_a0;
return (d::truth((_n_v_2649<0.0))?0.0:(d::truth((_n_v_2649>1.0))?1.0:_n_v_2649));}

double _n_smooth_2583(double _a0,double _a1,double _a2){double _n_a_2650=_a0;
double _n_b_2651=_a1;
double _n_v_2652=_a2;
{
double _n_k_2653=_n_clamp_2582(((_n_v_2652-_n_a_2650)/(_n_b_2651-_n_a_2650)));
return ((_n_k_2653*_n_k_2653)*(3.0-(2.0*_n_k_2653)));

}
}

double _n_mix_2584(double _a0,double _a1,double _a2){double _n_a_2654=_a0;
double _n_b_2655=_a1;
double _n_k_2656=_a2;
return (_n_a_2654+((_n_b_2655-_n_a_2654)*_n_k_2656));}

d::Array<double,false> _n_hex_2585(d::String _a0){d::String _n_s_2657=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_2658=_a0;
return (([&](){auto _n_argument_2822=d::slice(_n_s_2657,_n_i_2658,(_n_i_2658+2.0));auto _n_argument_2823=16.0;return d::parseInt(_n_argument_2822,_n_argument_2823);})()/255.0);});}

d::Array<double,false> _n_seg_2586(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_px_2659=_a0;
double _n_py_2660=_a1;
double _n_ax_2661=_a2;
double _n_ay_2662=_a3;
double _n_bx_2663=_a4;
double _n_by_2664=_a5;
{
double _n_dx_2665=(_n_bx_2663-_n_ax_2661);
double _n_dy_2666=(_n_by_2664-_n_ay_2662);
double _n_s_2667=_n_clamp_2582(((((_n_px_2659-_n_ax_2661)*_n_dx_2665)+((_n_py_2660-_n_ay_2662)*_n_dy_2666))/((_n_dx_2665*_n_dx_2665)+(_n_dy_2666*_n_dy_2666))));
double _n_ex_2668=((_n_ax_2661+(_n_dx_2665*_n_s_2667))-_n_px_2659);
double _n_ey_2669=((_n_ay_2662+(_n_dy_2666*_n_s_2667))-_n_py_2660);
return d::Array<double,false>{std::sqrt(((_n_ex_2668*_n_ex_2668)+(_n_ey_2669*_n_ey_2669))),_n_s_2667};

}
}

d::Array<double,false> _n_spectrum_2588(double _a0){double _n_u_2670=_a0;
{
double _n_f_2671=(_n_clamp_2582(_n_u_2670)*(double(_n_BANDS_2587.size())-1.0));
double _n_i_2672=([&](){auto _n_argument_2824=(double(_n_BANDS_2587.size())-2.0);auto _n_argument_2825=std::floor(_n_f_2671);return d::minimum({_n_argument_2824,_n_argument_2825});})();
double _n_k_2673=(_n_f_2671-_n_i_2672);
d::Array<double,false> _n_a_2674=d::at(_n_BANDS_2587,_n_i_2672);
d::Array<double,false> _n_b_2675=d::at(_n_BANDS_2587,(_n_i_2672+1.0));
return d::Array<double,false>{_n_mix_2584(d::at(_n_a_2674,0.0),d::at(_n_b_2675,0.0),_n_k_2673),_n_mix_2584(d::at(_n_a_2674,1.0),d::at(_n_b_2675,1.0),_n_k_2673),_n_mix_2584(d::at(_n_a_2674,2.0),d::at(_n_b_2675,2.0),_n_k_2673)};

}
}

struct Native_black_prism final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_2589{};
double _n_N_2590{};
d::Array<d::String,false> _n_out_2591{};
d::Array<uint8_t,true> _n_lut_2592{};
d::Array<d::String,false> _n_ink_2594{};
double _n_gw_2595{};
double _n_gh_2596{};
double _n_c0_2597{};
double _n_c1_2598{};
double _n_left_2601{};
double _n_base_2602{};
double _n_FLOOR_2603{};
d::Array<float,true> _n_cov_2606{};
d::Array<float,true> _n_rim_2607{};
double _n_AX_2608{};
double _n_AY_2609{};
double _n_LX_2610{};
double _n_RX_2611{};
double _n_BY_2612{};
double _n_EX_2613{};
double _n_EY_2614{};
double _n_XX_2615{};
double _n_XY_2616{};
double _n_SX_2617{};
double _n_SY_2618{};
double _n_BX_2619{};
double _n_BBY_2620{};
d::Array<float,true> _n_beamD_2621{};
d::Array<float,true> _n_beamS_2622{};
d::Array<float,true> _n_inner_2623{};
d::Array<float,true> _n_ghost_2624{};
d::Array<float,true> _n_fanU_2625{};
d::Array<float,true> _n_fanR_2626{};
d::Array<float,true> _n_sheen_2627{};
d::Array<d::Array<double,false>,false> _n_motes_2628{};
d::Array<float,true> _n_spark_2629{};
d::Array<float,true> _n_R_2630{};
d::Array<float,true> _n_G_2631{};
d::Array<float,true> _n_B_2632{};
std::function<d::String(double,std::shared_ptr<_n_Record_2816>)> _render;
double _n_nearest_2593(double _a0,double _a1,double _a2){double _n_r_2676=_a0;
double _n_g_2677=_a1;
double _n_b_2678=_a2;
{
double _n_k_2679=([&](){auto _n_left_2923=([&](){auto _n_left_2925=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_2676*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_2926=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_2677*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_2925)|d::i32(_n_right_2926));})();auto _n_right_2924=d::minimum({31.0,double(d::i32((_n_b_2678*31.99))|d::i32(0.0))});return double(d::i32(_n_left_2923)|d::i32(_n_right_2924));})();
if(d::truth((d::at(this->_n_lut_2592,_n_k_2679)!=255.0))){d::check_cancel();return d::at(this->_n_lut_2592,_n_k_2679);
}
double _n_best_2680=0.0;
double _n_bd_2681=1000000000.0;
{double _n_i_2682=0.0;
for(;d::truth((_n_i_2682<double(this->_n_P_2589.size())));(void)((_n_i_2682++))){d::check_cancel();double _n_dr_2683=(d::at(d::at(this->_n_P_2589,_n_i_2682),0.0)-_n_r_2676);
double _n_dg_2684=(d::at(d::at(this->_n_P_2589,_n_i_2682),1.0)-_n_g_2677);
double _n_db_2685=(d::at(d::at(this->_n_P_2589,_n_i_2682),2.0)-_n_b_2678);
double _n_d_2686=((((0.3*_n_dr_2683)*_n_dr_2683)+((0.5*_n_dg_2684)*_n_dg_2684))+((0.2*_n_db_2685)*_n_db_2685));
if(d::truth((_n_d_2686<_n_bd_2681))){d::check_cancel();(void)(((_n_bd_2681=_n_d_2686),(_n_best_2680=_n_i_2682)));
}
}}
return ([&](){auto&& _n_array_2927=this->_n_lut_2592;auto _n_index_2928=_n_k_2679;auto _n_value_2929=_n_best_2680;d::put(_n_array_2927,_n_index_2928,_n_value_2929);return _n_value_2929;})();

}
}

double _n_at_2599(double _a0,double _a1){double _n_c_2690=_a0;
double _n_r_2691=_a1;
return ((((((d::truth((_n_r_2691>=0.0))&&d::truth((_n_r_2691<this->_n_gh_2596)))&&d::truth((_n_c_2690>=0.0)))&&d::truth((_n_c_2690<this->_n_gw_2595)))&&d::truth(d::at(d::at(this->_n_ink_2594,_n_r_2691),_n_c_2690)))&&d::truth((d::at(d::at(this->_n_ink_2594,_n_r_2691),_n_c_2690)!=d::String(u" "))))?1.0:0.0);}

double _n_bilinear_2600(double _a0,double _a1){double _n_gx_2692=_a0;
double _n_gy_2693=_a1;
{
double _n_x_2694=(_n_gx_2692-0.5);
double _n_y_2695=(_n_gy_2693-0.5);
double _n_xi_2696=std::floor(_n_x_2694);
double _n_yi_2697=std::floor(_n_y_2695);
double _n_fx_2698=(_n_x_2694-_n_xi_2696);
double _n_fy_2699=(_n_y_2695-_n_yi_2697);
double _n_a_2700=this->_n_at_2599(_n_xi_2696,_n_yi_2697);
double _n_b_2701=this->_n_at_2599((_n_xi_2696+1.0),_n_yi_2697);
double _n_c_2702=this->_n_at_2599(_n_xi_2696,(_n_yi_2697+1.0));
double _n_d_2703=this->_n_at_2599((_n_xi_2696+1.0),(_n_yi_2697+1.0));
return (((_n_a_2700+((_n_b_2701-_n_a_2700)*_n_fx_2698))+((_n_c_2702-_n_a_2700)*_n_fy_2699))+(((((_n_a_2700-_n_b_2701)-_n_c_2702)+_n_d_2703)*_n_fx_2698)*_n_fy_2699));

}
}

d::Array<double,false> _n_toGrid_2604(double _a0,double _a1){double _n_x_2704=_a0;
double _n_y_2705=_a1;
return d::Array<double,false>{(this->_n_c0_2597+((_n_x_2704-this->_n_left_2601)/_n_SCALE_2570)),((_n_y_2705-_n_TOP_2571)/(2.0*_n_SCALE_2570))};}

double _n_coverAt_2605(double _a0,double _a1){double _n_x_2706=_a0;
double _n_y_2707=_a1;
{
double _n_s_2708=0.0;
{double _n_j_2709=(-d::number(1.0));
for(;d::truth((_n_j_2709<=1.0));(void)((_n_j_2709++))){d::check_cancel();{double _n_i_2710=(-d::number(1.0));
for(;d::truth((_n_i_2710<=1.0));(void)((_n_i_2710++))){d::check_cancel();auto _n_binding_2930=this->_n_toGrid_2604((_n_x_2706+(_n_i_2710*0.9)),(_n_y_2707+(_n_j_2709*1.1)));
double _n_gx_2711=d::at(_n_binding_2930,0.0);
double _n_gy_2712=d::at(_n_binding_2930,1.0);
(void)((_n_s_2708=(_n_s_2708+this->_n_bilinear_2600(_n_gx_2711,_n_gy_2712))));
}}
}}
return (_n_s_2708/9.0);

}
}

explicit Native_black_prism(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_2589=d::map(_n_meta_2565->_p_palette,_n_hex_2585);
this->_n_N_2590=(_n_W_2568*_n_H_2569);
this->_n_out_2591=d::Array<d::String,false>(size_t(this->_n_N_2590));
this->_n_lut_2592=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_ink_2594=d::split(d::slice(_n_INK_2567,1.0,(-d::number(1.0))),d::String(u"\n"));
this->_n_gw_2595=([&](){d::Array<double> _n_numbers_2826;for(auto _x:d::map(this->_n_ink_2594,[&]( d::String _a0) mutable ->double{d::String _n_l_2687=_a0;
return double(_n_l_2687.size());}))_n_numbers_2826.push(_x);return d::maximum(_n_numbers_2826);})();
this->_n_gh_2596=double(this->_n_ink_2594.size());
this->_n_c0_2597=this->_n_gw_2595;
this->_n_c1_2598=0.0;
for(auto &&_n_item_2827:this->_n_ink_2594){d::check_cancel();d::String _n_l_2688=_n_item_2827;
{double _n_c_2689=0.0;
for(;d::truth((_n_c_2689<double(_n_l_2688.size())));(void)((_n_c_2689++))){d::check_cancel();if(d::truth((d::at(_n_l_2688,_n_c_2689)!=d::String(u" ")))){d::check_cancel();(void)(((this->_n_c0_2597=d::minimum({this->_n_c0_2597,_n_c_2689})),(this->_n_c1_2598=d::maximum({this->_n_c1_2598,_n_c_2689}))));
}
}}
}
this->_n_left_2601=((_n_W_2568/2.0)-((((this->_n_c1_2598+1.0)-this->_n_c0_2597)*_n_SCALE_2570)/2.0));
this->_n_base_2602=(_n_TOP_2571+((this->_n_gh_2596*2.0)*_n_SCALE_2570));
this->_n_FLOOR_2603=d::round(this->_n_base_2602);
this->_n_cov_2606=d::Array<float,true>(size_t(this->_n_N_2590));
{double _n_r_2713=0.0;
for(;d::truth((_n_r_2713<_n_H_2569));(void)((_n_r_2713++))){d::check_cancel();{double _n_x_2714=0.0;
for(;d::truth((_n_x_2714<_n_W_2568));(void)((_n_x_2714++))){d::check_cancel();(void)(([&](){auto&& _n_array_2828=this->_n_cov_2606;auto _n_index_2829=((_n_r_2713*_n_W_2568)+_n_x_2714);auto _n_value_2830=([&](){auto _n_argument_2831=0.38;auto _n_argument_2832=0.62;auto _n_argument_2833=this->_n_coverAt_2605((_n_x_2714+0.5),(_n_r_2713+0.5));return _n_smooth_2583(_n_argument_2831,_n_argument_2832,_n_argument_2833);})();d::put(_n_array_2828,_n_index_2829,_n_value_2830);return _n_value_2830;})());
}}
}}
this->_n_rim_2607=d::Array<float,true>(size_t(this->_n_N_2590));
{double _n_r_2715=1.0;
for(;d::truth((_n_r_2715<(_n_H_2569-1.0)));(void)((_n_r_2715++))){d::check_cancel();{double _n_x_2716=1.0;
for(;d::truth((_n_x_2716<(_n_W_2568-1.0)));(void)((_n_x_2716++))){d::check_cancel();double _n_k_2717=((_n_r_2715*_n_W_2568)+_n_x_2716);
double _n_gx_2718=(d::at(this->_n_cov_2606,(_n_k_2717+1.0))-d::at(this->_n_cov_2606,(_n_k_2717-1.0)));
double _n_gy_2719=(d::at(this->_n_cov_2606,(_n_k_2717+_n_W_2568))-d::at(this->_n_cov_2606,(_n_k_2717-_n_W_2568)));
(void)(([&](){auto&& _n_array_2834=this->_n_rim_2607;auto _n_index_2835=_n_k_2717;auto _n_value_2836=_n_clamp_2582((std::sqrt(((_n_gx_2718*_n_gx_2718)+(_n_gy_2719*_n_gy_2719)))*1.25));d::put(_n_array_2834,_n_index_2835,_n_value_2836);return _n_value_2836;})());
}}
}}
this->_n_AX_2608=(_n_W_2568/2.0);
this->_n_AY_2609=_n_TOP_2571;
this->_n_LX_2610=this->_n_left_2601;
this->_n_RX_2611=(_n_W_2568-this->_n_left_2601);
this->_n_BY_2612=this->_n_base_2602;
this->_n_EX_2613=_n_mix_2584(this->_n_AX_2608,this->_n_LX_2610,_n_ENTER_2575);
this->_n_EY_2614=_n_mix_2584(this->_n_AY_2609,this->_n_BY_2612,_n_ENTER_2575);
this->_n_XX_2615=_n_mix_2584(this->_n_AX_2608,this->_n_RX_2611,_n_LEAVE_2576);
this->_n_XY_2616=_n_mix_2584(this->_n_AY_2609,this->_n_BY_2612,_n_LEAVE_2576);
this->_n_SX_2617=(-d::number(4.0));
this->_n_SY_2618=(this->_n_EY_2614+21.0);
this->_n_BX_2619=_n_mix_2584(this->_n_EX_2613,this->_n_XX_2615,0.62);
this->_n_BBY_2620=(this->_n_BY_2612-1.0);
this->_n_beamD_2621=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_beamS_2622=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_inner_2623=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_ghost_2624=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_fanU_2625=d::Array<float,true>(size_t(this->_n_N_2590)).fill((-d::number(1.0)));
this->_n_fanR_2626=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_sheen_2627=d::Array<float,true>(size_t(this->_n_N_2590));
{double _n_r_2720=0.0;
for(;d::truth((_n_r_2720<_n_H_2569));(void)((_n_r_2720++))){d::check_cancel();{double _n_x_2721=0.0;
for(;d::truth((_n_x_2721<_n_W_2568));(void)((_n_x_2721++))){d::check_cancel();double _n_k_2722=((_n_r_2720*_n_W_2568)+_n_x_2721);
double _n_px_2723=(_n_x_2721+0.5);
double _n_py_2724=(_n_r_2720+0.5);
auto _n_binding_2837=_n_seg_2586(_n_px_2723,_n_py_2724,this->_n_SX_2617,this->_n_SY_2618,this->_n_EX_2613,this->_n_EY_2614);
double _n_d_2725=d::at(_n_binding_2837,0.0);
double _n_s_2726=d::at(_n_binding_2837,1.0);
(void)(([&](){auto&& _n_array_2838=this->_n_beamD_2621;auto _n_index_2839=_n_k_2722;auto _n_value_2840=_n_d_2725;d::put(_n_array_2838,_n_index_2839,_n_value_2840);return _n_value_2840;})());
(void)(([&](){auto&& _n_array_2841=this->_n_beamS_2622;auto _n_index_2842=_n_k_2722;auto _n_value_2843=(_n_s_2726*d::hypot(std::initializer_list<double>{(this->_n_EX_2613-this->_n_SX_2617),(this->_n_EY_2614-this->_n_SY_2618)}));d::put(_n_array_2841,_n_index_2842,_n_value_2843);return _n_value_2843;})());
auto _n_binding_2844=_n_seg_2586(_n_px_2723,_n_py_2724,this->_n_EX_2613,this->_n_EY_2614,this->_n_XX_2615,this->_n_XY_2616);
double _n_di_2727=d::at(_n_binding_2844,0.0);
double _n_si_2728=d::at(_n_binding_2844,1.0);
(void)(([&](){auto&& _n_array_2845=this->_n_inner_2623;auto _n_index_2846=_n_k_2722;auto _n_value_2847=std::exp((-d::number(std::pow((_n_di_2727/(1.0+(_n_si_2728*0.8))),2.0))));d::put(_n_array_2845,_n_index_2846,_n_value_2847);return _n_value_2847;})());
auto _n_binding_2848=_n_seg_2586(_n_px_2723,_n_py_2724,this->_n_EX_2613,this->_n_EY_2614,this->_n_BX_2619,this->_n_BBY_2620);
double _n_d1_2729=d::at(_n_binding_2848,0.0);
auto _n_binding_2849=_n_seg_2586(_n_px_2723,_n_py_2724,this->_n_BX_2619,this->_n_BBY_2620,(this->_n_XX_2615+2.0),(this->_n_XY_2616+9.0));
double _n_d2_2730=d::at(_n_binding_2849,0.0);
(void)(([&](){auto&& _n_array_2850=this->_n_ghost_2624;auto _n_index_2851=_n_k_2722;auto _n_value_2852=std::exp((-d::number(std::pow((d::minimum({_n_d1_2729,_n_d2_2730})/0.8),2.0))));d::put(_n_array_2850,_n_index_2851,_n_value_2852);return _n_value_2852;})());
double _n_dL_2731=((((_n_px_2723-this->_n_AX_2608)*(this->_n_BY_2612-this->_n_AY_2609))+((_n_py_2724-this->_n_AY_2609)*(this->_n_AX_2608-this->_n_LX_2610)))/d::hypot(std::initializer_list<double>{(this->_n_BY_2612-this->_n_AY_2609),(this->_n_AX_2608-this->_n_LX_2610)}));
double _n_dR_2732=((((this->_n_RX_2611-this->_n_AX_2608)*(_n_py_2724-this->_n_AY_2609))-((_n_px_2723-this->_n_AX_2608)*(this->_n_BY_2612-this->_n_AY_2609)))/d::hypot(std::initializer_list<double>{(this->_n_BY_2612-this->_n_AY_2609),(this->_n_RX_2611-this->_n_AX_2608)}));
double _n_dB_2733=(this->_n_BY_2612-_n_py_2724);
double _n_edge_2734=d::minimum({_n_dL_2731,_n_dR_2732,_n_dB_2733});
double _n_up_2735=_n_smooth_2583(this->_n_BY_2612,(this->_n_AY_2609+10.0),_n_py_2724);
double _n_echo_2736=([&](){auto _n_left_2853=std::exp((-d::number(std::pow(((_n_dL_2731-6.0)/0.8),2.0))));auto _n_right_2854=(0.6*std::exp((-d::number(std::pow(((_n_dR_2732-6.0)/0.8),2.0)))));return (_n_left_2853+_n_right_2854);})();
(void)(([&](){auto&& _n_array_2855=this->_n_sheen_2627;auto _n_index_2856=_n_k_2722;auto _n_value_2857=([&](){auto _n_left_2858=((std::exp(((-d::number(_n_edge_2734))/1.4))*0.07)+((_n_echo_2736*_n_up_2735)*0.16));auto _n_right_2859=(std::exp((-d::number(std::pow(((_n_dB_2733-5.0)/0.8),2.0))))*0.06);return (_n_left_2858+_n_right_2859);})();d::put(_n_array_2855,_n_index_2856,_n_value_2857);return _n_value_2857;})());
double _n_fx_2737=(_n_px_2723-this->_n_XX_2615);
double _n_fy_2738=(_n_py_2724-this->_n_XY_2616);
if((d::truth((_n_fx_2737>(-d::number(2.0))))&&d::truth((_n_py_2724<this->_n_FLOOR_2603)))){d::check_cancel();double _n_a_2739=std::atan2(_n_fy_2738,_n_fx_2737);
(void)(([&](){auto&& _n_array_2860=this->_n_fanU_2625;auto _n_index_2861=_n_k_2722;auto _n_value_2862=((_n_a_2739-_n_RED_2577)/(_n_VIOLET_2578-_n_RED_2577));d::put(_n_array_2860,_n_index_2861,_n_value_2862);return _n_value_2862;})());
(void)(([&](){auto&& _n_array_2863=this->_n_fanR_2626;auto _n_index_2864=_n_k_2722;auto _n_value_2865=std::sqrt(((_n_fx_2737*_n_fx_2737)+(_n_fy_2738*_n_fy_2738)));d::put(_n_array_2863,_n_index_2864,_n_value_2865);return _n_value_2865;})());
}
}}
}}
this->_n_motes_2628=d::Array<d::Array<double,false>,false>{};
{double _n_i_2740=0.0;
for(;d::truth((_n_i_2740<_n_DUST_2579));(void)((_n_i_2740++))){d::check_cancel();(void)(this->_n_motes_2628.push(d::Array<double,false>{(_n_hash_2580(_n_i_2740,1.0)*_n_W_2568),(_n_hash_2580(_n_i_2740,2.0)*this->_n_FLOOR_2603),(0.6+(_n_hash_2580(_n_i_2740,3.0)*2.4)),((_n_hash_2580(_n_i_2740,4.0)-0.5)*1.2),(_n_hash_2580(_n_i_2740,5.0)*6.28),(1.0+(_n_hash_2580(_n_i_2740,6.0)*3.0))}));
}}
this->_n_spark_2629=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_R_2630=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_G_2631=d::Array<float,true>(size_t(this->_n_N_2590));
this->_n_B_2632=d::Array<float,true>(size_t(this->_n_N_2590));
_render=[=]( double _a0,std::shared_ptr<_n_Record_2816> _a1) mutable ->d::String{double _n_t_2741=_a0;
auto _n_binding_2868=(d::present(_a1)?_a1:([&](){auto _n_object_2867=std::make_shared<_n_Record_2816>();return _n_object_2867;})());
std::optional<d::Array<uint8_t,true>> _n_color_2742=_n_binding_2868->_p_color;
{
double _n_pulse_2743=(0.84+(0.16*std::sin((_n_t_2741*1.6))));
(void)(this->_n_spark_2629.fill(0.0));
for(auto &&_n_item_2869:this->_n_motes_2628){d::check_cancel();auto _n_binding_2870=_n_item_2869;
double _n_mx_2744=d::at(_n_binding_2870,0.0);
double _n_my_2745=d::at(_n_binding_2870,1.0);
double _n_vx_2746=d::at(_n_binding_2870,2.0);
double _n_vy_2747=d::at(_n_binding_2870,3.0);
double _n_ph_2748=d::at(_n_binding_2870,4.0);
double _n_tw_2749=d::at(_n_binding_2870,5.0);
{
double _n_x_2750=d::mod((d::mod(((_n_mx_2744+(_n_vx_2746*_n_t_2741))+(2.0*std::sin(((_n_t_2741*0.4)+_n_ph_2748)))),_n_W_2568)+_n_W_2568),_n_W_2568);
double _n_y_2751=d::mod((d::mod(((_n_my_2745+(_n_vy_2747*_n_t_2741))+(1.5*std::sin(((_n_t_2741*0.3)+(_n_ph_2748*2.0))))),this->_n_FLOOR_2603)+this->_n_FLOOR_2603),this->_n_FLOOR_2603);
double _n_k_2752=([&](){auto _n_left_2871=(std::floor(_n_y_2751)*_n_W_2568);auto _n_right_2872=std::floor(_n_x_2750);return (_n_left_2871+_n_right_2872);})();
(void)(([&](){auto&& _n_array_2873=this->_n_spark_2629;auto _n_index_2874=_n_k_2752;auto _n_value_2875=([&](){auto _n_argument_2876=d::at(this->_n_spark_2629,_n_k_2752);auto _n_argument_2877=([&](){auto _n_argument_2878=(0.5+(0.5*std::sin(((_n_t_2741*_n_tw_2749)+_n_ph_2748))));auto _n_argument_2879=3.0;return std::pow(_n_argument_2878,_n_argument_2879);})();return d::maximum({_n_argument_2876,_n_argument_2877});})();d::put(_n_array_2873,_n_index_2874,_n_value_2875);return _n_value_2875;})());

}
}
{double _n_r_2753=0.0;
for(;d::truth((_n_r_2753<_n_H_2569));(void)((_n_r_2753++))){d::check_cancel();{double _n_x_2754=0.0;
for(;d::truth((_n_x_2754<_n_W_2568));(void)((_n_x_2754++))){d::check_cancel();double _n_k_2755=((_n_r_2753*_n_W_2568)+_n_x_2754);
double _n_cr_2756=0.0;
double _n_cg_2757=0.0;
double _n_cbl_2758=0.0;
double _n_floor_2759=0.0;
if(d::truth((_n_r_2753>=this->_n_FLOOR_2603))){d::check_cancel();double _n_below_2760=(_n_r_2753-this->_n_FLOOR_2603);
double _n_m_2761=(((this->_n_FLOOR_2603-1.0)-_n_below_2760)*_n_W_2568);
double _n_wob_2762=d::round((0.7*std::sin(((_n_r_2753*1.7)+(_n_t_2741*2.0)))));
double _n_x0_2763=d::maximum({0.0,((_n_x_2754-1.0)+_n_wob_2762)});
double _n_x1_2764=d::minimum({(_n_W_2568-1.0),((_n_x_2754+1.0)+_n_wob_2762)});
double _n_xc_2765=([&](){auto _n_argument_2880=0.0;auto _n_argument_2881=d::minimum({(_n_W_2568-1.0),(_n_x_2754+_n_wob_2762)});return d::maximum({_n_argument_2880,_n_argument_2881});})();
double _n_fall_2766=(0.6*std::exp(((-d::number(_n_below_2760))/10.0)));
(void)((_n_cr_2756=((((d::at(this->_n_R_2630,(_n_m_2761+_n_x0_2763))+(2.0*d::at(this->_n_R_2630,(_n_m_2761+_n_xc_2765))))+d::at(this->_n_R_2630,(_n_m_2761+_n_x1_2764)))*0.25)*_n_fall_2766)));
(void)((_n_cg_2757=((((d::at(this->_n_G_2631,(_n_m_2761+_n_x0_2763))+(2.0*d::at(this->_n_G_2631,(_n_m_2761+_n_xc_2765))))+d::at(this->_n_G_2631,(_n_m_2761+_n_x1_2764)))*0.25)*_n_fall_2766)));
(void)((_n_cbl_2758=((((d::at(this->_n_B_2632,(_n_m_2761+_n_x0_2763))+(2.0*d::at(this->_n_B_2632,(_n_m_2761+_n_xc_2765))))+d::at(this->_n_B_2632,(_n_m_2761+_n_x1_2764)))*0.25)*_n_fall_2766)));
if(d::truth((_n_below_2760==0.0))){d::check_cancel();double _n_h_2767=(0.1+(0.25*std::exp((-d::number(std::pow((((_n_x_2754+0.5)-this->_n_AX_2608)/60.0),2.0))))));
(void)((((_n_cr_2756=(_n_cr_2756+_n_h_2767)),(_n_cg_2757=(_n_cg_2757+_n_h_2767))),(_n_cbl_2758=(_n_cbl_2758+_n_h_2767))));
}
if(d::truth((_n_x_2754>this->_n_XX_2615))){d::check_cancel();double _n_u_2768=_n_clamp_2582(((_n_x_2754-this->_n_XX_2615)/(_n_W_2568-this->_n_XX_2615)));
auto _n_binding_2882=_n_spectrum_2588((0.55+(0.45*_n_u_2768)));
double _n_sr_2769=d::at(_n_binding_2882,0.0);
double _n_sg_2770=d::at(_n_binding_2882,1.0);
double _n_sb_2771=d::at(_n_binding_2882,2.0);
double _n_spill_2772=(([&](){auto _n_left_2883=(0.13*_n_smooth_2583(0.0,0.25,_n_u_2768));auto _n_right_2884=std::exp(((-d::number(_n_below_2760))/4.0));return (_n_left_2883*_n_right_2884);})()*_n_pulse_2743);
(void)((((_n_cr_2756=(_n_cr_2756+(_n_sr_2769*_n_spill_2772))),(_n_cg_2757=(_n_cg_2757+(_n_sg_2770*_n_spill_2772)))),(_n_cbl_2758=(_n_cbl_2758+(_n_sb_2771*_n_spill_2772)))));
}
(void)((_n_floor_2759=0.0));
}else {d::check_cancel();double _n_c_2773=d::at(this->_n_cov_2606,_n_k_2755);
double _n_lr_2774=0.0;
double _n_lg_2775=0.0;
double _n_lb_2776=0.0;
double _n_bd_2777=d::at(this->_n_beamD_2621,_n_k_2755);
if(d::truth((_n_bd_2777<30.0))){d::check_cancel();double _n_wave_2778=(0.85+(0.15*std::sin(((d::at(this->_n_beamS_2622,_n_k_2755)*0.16)-(_n_t_2741*7.0)))));
double _n_core_2779=(((std::exp((-d::number(std::pow((_n_bd_2777/1.45),2.0))))*1.3)*_n_pulse_2743)*_n_wave_2778);
double _n_halo_2780=((std::exp(((-d::number(_n_bd_2777))/2.2))*0.3)*_n_pulse_2743);
double _n_v_2781=(((_n_core_2779+_n_halo_2780)*_n_smooth_2583(0.0,6.0,d::at(this->_n_beamS_2622,_n_k_2755)))*(1.0-(_n_c_2773*0.9)));
(void)((((_n_lr_2774=(_n_lr_2774+_n_v_2781)),(_n_lg_2775=(_n_lg_2775+_n_v_2781))),(_n_lb_2776=(_n_lb_2776+(_n_v_2781*1.02)))));
}
double _n_u_2782=d::at(this->_n_fanU_2625,_n_k_2755);
if(((d::truth((_n_u_2782>(-d::number(0.3))))&&d::truth((_n_u_2782<1.3)))&&d::truth((_n_c_2773<0.9)))){d::check_cancel();double _n_d_2783=d::at(this->_n_fanR_2626,_n_k_2755);
double _n_band_2784=([&](){auto _n_left_2885=_n_smooth_2583((-d::number(0.05)),0.04,_n_u_2782);auto _n_right_2886=_n_smooth_2583(1.05,0.96,_n_u_2782);return (_n_left_2885*_n_right_2886);})();
if(d::truth((_n_band_2784>0.0))){d::check_cancel();auto _n_binding_2887=_n_spectrum_2588(_n_u_2782);
double _n_sr_2785=d::at(_n_binding_2887,0.0);
double _n_sg_2786=d::at(_n_binding_2887,1.0);
double _n_sb_2787=d::at(_n_binding_2887,2.0);
double _n_shimmer_2788=([&](){auto _n_left_2888=(0.82+(0.18*_n_noise_2581(((_n_u_2782*16.0)+(_n_t_2741*0.5)),((_n_d_2783*0.05)-(_n_t_2741*0.9)))));auto _n_right_2889=(0.08*std::sin((((_n_d_2783*0.32)-(_n_t_2741*5.0))+(_n_u_2782*4.0))));return (_n_left_2888+_n_right_2889);})();
double _n_v_2789=(([&](){auto _n_left_2890=(((_n_band_2784*_n_shimmer_2788)*_n_pulse_2743)*(0.75+(0.35*std::exp(((-d::number(_n_d_2783))/30.0)))));auto _n_right_2891=_n_smooth_2583(0.0,4.0,_n_d_2783);return (_n_left_2890*_n_right_2891);})()*(1.0-_n_c_2773));
(void)((((_n_lr_2774=(_n_lr_2774+(_n_sr_2785*_n_v_2789))),(_n_lg_2775=(_n_lg_2775+(_n_sg_2786*_n_v_2789)))),(_n_lb_2776=(_n_lb_2776+(_n_sb_2787*_n_v_2789)))));
}
double _n_edge_2790=(([&](){auto _n_left_2892=((std::exp(((-d::number(d::maximum({0.0,(-d::number(_n_u_2782)),(_n_u_2782-1.0)})))*12.0))*(1.0-_n_band_2784))*0.12);auto _n_right_2893=_n_smooth_2583(0.0,10.0,d::at(this->_n_fanR_2626,_n_k_2755));return (_n_left_2892*_n_right_2893);})()*(1.0-_n_c_2773));
auto _n_binding_2894=_n_spectrum_2588(_n_u_2782);
double _n_er_2791=d::at(_n_binding_2894,0.0);
double _n_eg_2792=d::at(_n_binding_2894,1.0);
double _n_eb_2793=d::at(_n_binding_2894,2.0);
(void)((((_n_lr_2774=(_n_lr_2774+(_n_er_2791*_n_edge_2790))),(_n_lg_2775=(_n_lg_2775+(_n_eg_2792*_n_edge_2790)))),(_n_lb_2776=(_n_lb_2776+(_n_eb_2793*_n_edge_2790)))));
}
double _n_de_2794=d::hypot(std::initializer_list<double>{((_n_x_2754+0.5)-this->_n_EX_2613),((_n_r_2753+0.5)-this->_n_EY_2614)});
double _n_dx_2795=d::hypot(std::initializer_list<double>{((_n_x_2754+0.5)-this->_n_XX_2615),((_n_r_2753+0.5)-this->_n_XY_2616)});
double _n_spot_2796=(([&](){auto _n_left_2895=(std::exp(((-d::number(_n_de_2794))/2.2))*1.1);auto _n_right_2896=(std::exp(((-d::number(_n_de_2794))/7.0))*0.08);return (_n_left_2895+_n_right_2896);})()*_n_pulse_2743);
(void)((((_n_lr_2774=(_n_lr_2774+_n_spot_2796)),(_n_lg_2775=(_n_lg_2775+_n_spot_2796))),(_n_lb_2776=(_n_lb_2776+_n_spot_2796))));
double _n_exit_2797=(([&](){auto _n_left_2897=(std::exp(((-d::number(_n_dx_2795))/2.0))*0.7);auto _n_right_2898=(std::exp(((-d::number(_n_dx_2795))/7.0))*0.08);return (_n_left_2897+_n_right_2898);})()*_n_pulse_2743);
(void)((((_n_lr_2774=(_n_lr_2774+_n_exit_2797)),(_n_lg_2775=(_n_lg_2775+(_n_exit_2797*0.97)))),(_n_lb_2776=(_n_lb_2776+(_n_exit_2797*0.95)))));
double _n_lp_2798=d::maximum({_n_lr_2774,_n_lg_2775,_n_lb_2776});
if((d::truth((d::at(this->_n_spark_2629,_n_k_2755)>0.0))&&d::truth((_n_lp_2798>0.02)))){d::check_cancel();double _n_s_2799=((d::at(this->_n_spark_2629,_n_k_2755)*d::minimum({1.0,(_n_lp_2798*4.0)}))*1.4);
double _n_n_2800=(1.0/d::maximum({_n_lp_2798,0.001}));
(void)((((_n_cr_2756=(_n_cr_2756+(_n_s_2799*(0.5+((0.5*_n_lr_2774)*_n_n_2800))))),(_n_cg_2757=(_n_cg_2757+(_n_s_2799*(0.5+((0.5*_n_lg_2775)*_n_n_2800)))))),(_n_cbl_2758=(_n_cbl_2758+(_n_s_2799*(0.5+((0.5*_n_lb_2776)*_n_n_2800)))))));
}
(void)((((_n_cr_2756=(_n_cr_2756+_n_lr_2774)),(_n_cg_2757=(_n_cg_2757+_n_lg_2775))),(_n_cbl_2758=(_n_cbl_2758+_n_lb_2776))));
if(d::truth((_n_c_2773>0.01))){d::check_cancel();double _n_py_2801=(((_n_r_2753+0.5)-this->_n_AY_2609)/(this->_n_BY_2612-this->_n_AY_2609));
double _n_drift_2802=(0.5+(0.5*std::sin(((_n_t_2741*0.5)+((_n_x_2754-_n_r_2753)*0.04)))));
double _n_g_2803=((0.012*_n_py_2801)+(d::at(this->_n_sheen_2627,_n_k_2755)*(0.5+(0.5*_n_drift_2802))));
(void)((_n_g_2803=(_n_g_2803+(((d::at(this->_n_inner_2623,_n_k_2755)*0.55)*_n_pulse_2743)+(d::at(this->_n_ghost_2624,_n_k_2755)*0.08)))));
double _n_tint_2804=((_n_smooth_2583(0.4,1.0,(((_n_x_2754+0.5)-this->_n_EX_2613)/(this->_n_XX_2615-this->_n_EX_2613)))*d::at(this->_n_inner_2623,_n_k_2755))*0.25);
(void)((((_n_cr_2756=(_n_cr_2756+(_n_c_2773*(_n_g_2803+(_n_tint_2804*0.3))))),(_n_cg_2757=(_n_cg_2757+(_n_c_2773*(_n_g_2803+(_n_tint_2804*0.15)))))),(_n_cbl_2758=(_n_cbl_2758+(_n_c_2773*(_n_g_2803+(_n_tint_2804*0.45)))))));
}
double _n_e_2805=d::at(this->_n_rim_2607,_n_k_2755);
if(d::truth((_n_e_2805>0.02))){d::check_cancel();double _n_near_2806=([&](){auto _n_left_2899=(std::exp(((-d::number(_n_de_2794))/16.0))*0.5);auto _n_right_2900=(std::exp(((-d::number(_n_dx_2795))/16.0))*0.35);return (_n_left_2899+_n_right_2900);})();
double _n_top_2807=(std::exp(((-d::number(d::hypot(std::initializer_list<double>{((_n_x_2754+0.5)-this->_n_AX_2608),((_n_r_2753+0.5)-this->_n_AY_2609)})))/10.0))*0.25);
double _n_v_2808=(_n_e_2805*((0.62+(_n_near_2806*_n_pulse_2743))+_n_top_2807));
(void)((((_n_cr_2756=(_n_cr_2756+_n_v_2808)),(_n_cg_2757=(_n_cg_2757+_n_v_2808))),(_n_cbl_2758=(_n_cbl_2758+_n_v_2808))));
}
}
(void)(((([&](){auto&& _n_array_2901=this->_n_R_2630;auto _n_index_2902=_n_k_2755;auto _n_value_2903=_n_cr_2756;d::put(_n_array_2901,_n_index_2902,_n_value_2903);return _n_value_2903;})(),([&](){auto&& _n_array_2904=this->_n_G_2631;auto _n_index_2905=_n_k_2755;auto _n_value_2906=_n_cg_2757;d::put(_n_array_2904,_n_index_2905,_n_value_2906);return _n_value_2906;})()),([&](){auto&& _n_array_2907=this->_n_B_2632;auto _n_index_2908=_n_k_2755;auto _n_value_2909=_n_cbl_2758;d::put(_n_array_2907,_n_index_2908,_n_value_2909);return _n_value_2909;})()));
double _n_peak_2809=d::maximum({_n_cr_2756,_n_cg_2757,_n_cbl_2758,0.0001});
double _n_level_2810=_n_clamp_2582((_n_floor_2759+(((1.0-_n_floor_2759)*std::pow(_n_peak_2809,0.85))*0.95)));
double _n_step_2811=([&](){auto _n_argument_2910=0.0;auto _n_argument_2911=([&](){auto _n_argument_2912=3.0;auto _n_argument_2913=d::round(((_n_level_2810*3.0)+d::at(_n_BAYER_2574,((double(d::i32(_n_r_2753)&d::i32(3.0))*4.0)+double(d::i32(_n_x_2754)&d::i32(3.0))))));return d::minimum({_n_argument_2912,_n_argument_2913});})();return d::maximum({_n_argument_2910,_n_argument_2911});})();
(void)(([&](){auto&& _n_array_2914=this->_n_out_2591;auto _n_index_2915=_n_k_2755;auto _n_value_2916=d::at(_n_DOTS_2572,_n_step_2811);d::put(_n_array_2914,_n_index_2915,_n_value_2916);return _n_value_2916;})());
if(d::truth(_n_color_2742)){d::check_cancel();double _n_want_2812=(d::truth(_n_step_2811)?d::minimum({1.0,((_n_level_2810+0.06)/d::at(_n_COVER_2573,_n_step_2811))}):0.0);
double _n_s_2813=((0.3+(0.7*_n_want_2812))/_n_peak_2809);
(void)(([&](){auto&& _n_array_2917=d::read(_n_color_2742);auto _n_index_2918=_n_k_2755;auto _n_value_2919=([&](){auto _n_argument_2920=_n_clamp_2582((_n_cr_2756*_n_s_2813));auto _n_argument_2921=_n_clamp_2582((_n_cg_2757*_n_s_2813));auto _n_argument_2922=_n_clamp_2582((_n_cbl_2758*_n_s_2813));return this->_n_nearest_2593(_n_argument_2920,_n_argument_2921,_n_argument_2922);})();d::put(_n_array_2917,_n_index_2918,_n_value_2919);return _n_value_2919;})());
}
}}
}}
d::Array<d::String,false> _n_lines_2814=d::Array<d::String,false>{};
{double _n_r_2815=0.0;
for(;d::truth((_n_r_2815<_n_H_2569));(void)((_n_r_2815++))){d::check_cancel();(void)(_n_lines_2814.push(d::join(this->_n_out_2591.slice((_n_r_2815*_n_W_2568),((_n_r_2815+1.0)*_n_W_2568)),d::String(u""))));
}}
return d::join(_n_lines_2814,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("black-prism").cols)*ascii::catalog_meta("black-prism").rows);auto _env=std::make_shared<_n_Record_2816>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &black_prism_meta(){return catalog_meta("black-prism");}
std::unique_ptr<Piece> make_black_prism(const AsciiPieceOptions &o){return std::make_unique<Native_black_prism>(o);}
}
