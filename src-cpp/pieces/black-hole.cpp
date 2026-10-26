// Direct, statically typed C++ from src/pieces/black-hole.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_2418;
struct _n_Record_2446;
struct _n_Record_2524;
struct _n_Record_2418{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_2418> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2418>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_2446{
d::Array<float,true> _p_tab{};
double _p_turns{};
static std::shared_ptr<_n_Record_2446> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2446>();out->_p_tab=d::decode<d::Array<float,true>>(j["tab"]);out->_p_turns=d::decode<double>(j["turns"]);return out;}
};
struct _n_Record_2524{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_2524> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2524>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_2435(double _a0);
d::Array<d::Array<float,true>,false> _n_paths_2436();
std::shared_ptr<_n_Record_2418> _n_meta_2417=[](){return ([&](){auto _n_object_2527=std::make_shared<_n_Record_2418>();_n_object_2527->_p_name=d::String(u"black hole");_n_object_2527->_p_category=d::String(u"space");_n_object_2527->_p_note=d::String(u"a black hole, its lensed disk turning, one side brighter");_n_object_2527->_p_cols=64.0;_n_object_2527->_p_rows=20.0;_n_object_2527->_p_fps=15.0;return _n_object_2527;})();}();
const d::String _n_RAMP_2419=[](){return d::String(u" .:-=+*#%@");}();
const double _n_SX_2420=[](){return 3.0;}();
const double _n_SY_2421=[](){return 4.0;}();
const double _n_D_2422=[](){return 30.0;}();
const double _n_IN_2423=[](){return 3.0;}();
const double _n_OUT_2424=[](){return 9.0;}();
const double _n_TILT_2425=[](){return 0.15;}();
const double _n_SPAN_2426=[](){return 0.34;}();
const double _n_GAIN_2427=[](){return 1.6;}();
const double _n_FLOOR_2428=[](){return 0.03;}();
const double _n_LOOP_2429=[](){return 60.0;}();
const double _n_BANDS_2430=[](){return 12.0;}();
const double _n_SPIN_2431=[](){return 7.0;}();
const double _n_BMAX_2432=[](){return 12.0;}();
const double _n_NB_2433=[](){return 1500.0;}();
const double _n_H_2434=[](){return 0.02;}();
std::function<double()> _n_mulberry32_2435(double _a0){double _n_a_2451=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_2451=double(d::i32((_n_a_2451+1831565813.0))|d::i32(0.0))));
double _n_t_2452=d::imul(double(d::i32(_n_a_2451)^d::i32(double(d::u32(_n_a_2451)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_2451)));
(void)((_n_t_2452=double(d::i32((_n_t_2452+d::imul(double(d::i32(_n_t_2452)^d::i32(double(d::u32(_n_t_2452)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_2452)))))^d::i32(_n_t_2452))));
return (double(d::u32(double(d::i32(_n_t_2452)^d::i32(double(d::u32(_n_t_2452)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

d::Array<d::Array<float,true>,false> _n_paths_2436(){{
auto _n_f_2453=[&]( double _a0) mutable ->double{double _n_u_2454=_a0;
return (((1.5*_n_u_2454)*_n_u_2454)-_n_u_2454);};
d::Array<d::Array<float,true>,false> _n_table_2455=d::Array<d::Array<float,true>,false>{};
{double _n_n_2456=0.0;
for(;d::truth((_n_n_2456<_n_NB_2433));(void)((_n_n_2456++))){d::check_cancel();double _n_b_2457=(((_n_n_2456+0.5)/_n_NB_2433)*_n_BMAX_2432);
double _n_u_2458=(1.0/_n_D_2422);
double _n_w_2459=(std::sqrt((1.0-std::pow((_n_b_2457/_n_D_2422),2.0)))/_n_b_2457);
d::Array<double,false> _n_us_2460=d::Array<double,false>{_n_u_2458};
while((d::truth((_n_u_2458<1.0))&&d::truth(([&]()->bool{auto _n_logical_2528=(_n_u_2458>(1.0/(_n_OUT_2424+1.0)));return d::truth(_n_logical_2528)?_n_logical_2528:(_n_w_2459>0.0);})()))){d::check_cancel();double _n_k1_2461=_n_w_2459;
double _n_l1_2462=_n_f_2453(_n_u_2458);
double _n_k2_2463=(_n_w_2459+((_n_H_2434/2.0)*_n_l1_2462));
double _n_l2_2464=_n_f_2453((_n_u_2458+((_n_H_2434/2.0)*_n_k1_2461)));
double _n_k3_2465=(_n_w_2459+((_n_H_2434/2.0)*_n_l2_2464));
double _n_l3_2466=_n_f_2453((_n_u_2458+((_n_H_2434/2.0)*_n_k2_2463)));
double _n_k4_2467=(_n_w_2459+(_n_H_2434*_n_l3_2466));
double _n_l4_2468=_n_f_2453((_n_u_2458+(_n_H_2434*_n_k3_2465)));
(void)((_n_u_2458=(_n_u_2458+((_n_H_2434/6.0)*(((_n_k1_2461+(2.0*_n_k2_2463))+(2.0*_n_k3_2465))+_n_k4_2467)))));
(void)((_n_w_2459=(_n_w_2459+((_n_H_2434/6.0)*(((_n_l1_2462+(2.0*_n_l2_2464))+(2.0*_n_l3_2466))+_n_l4_2468)))));
(void)(_n_us_2460.push(_n_u_2458));
}
(void)(_n_table_2455.push(d::Array<float,true>(_n_us_2460)));
}}
return _n_table_2455;

}
}

struct Native_black_hole final:ascii::Piece{
double _n_cols_2437{};
double _n_rows_2438{};
double _n_cw_2439{};
double _n_s_2440{};
double _n_c_2441{};
d::Array<d::Array<float,true>,false> _n_table_2442{};
std::function<double()> _n_rand_2443{};
double _n_TAB_2444{};
d::Array<std::shared_ptr<_n_Record_2446>,false> _n_band_2445{};
d::Array<d::Array<double,false>,false> _n_cells_2447{};
d::Array<uint8_t,true> _n_empty_2448{};
d::Array<uint8_t,true> _n_stars_2449{};
std::function<d::String(double,std::shared_ptr<_n_Record_2524>)> _render;
double _n_at_2450(double _a0,double _a1){double _n_b_2505=_a0;
double _n_a_2506=_a1;
{
double _n_i_2507=d::mod(std::floor(((_n_a_2506/(2.0*ascii::PI))*this->_n_TAB_2444)),this->_n_TAB_2444);
return d::at(d::at(this->_n_band_2445,_n_b_2505)->_p_tab,(d::truth((_n_i_2507<0.0))?(_n_i_2507+this->_n_TAB_2444):_n_i_2507));

}
}

explicit Native_black_hole(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_2529=_n_meta_2417;
this->_n_cols_2437=_n_binding_2529->_p_cols;
this->_n_rows_2438=_n_binding_2529->_p_rows;
this->_n_cw_2439=((2.0*_n_SPAN_2426)/this->_n_cols_2437);
this->_n_s_2440=std::sin(_n_TILT_2425);
this->_n_c_2441=std::cos(_n_TILT_2425);
this->_n_table_2442=_n_paths_2436();
this->_n_rand_2443=_n_mulberry32_2435(17.0);
this->_n_TAB_2444=256.0;
this->_n_band_2445=d::Array<std::shared_ptr<_n_Record_2446>,false>{};
{double _n_b_2469=0.0;
for(;d::truth((_n_b_2469<_n_BANDS_2430));(void)((_n_b_2469++))){d::check_cancel();double _n_r_2470=(_n_IN_2423+(((_n_OUT_2424-_n_IN_2423)*_n_b_2469)/(_n_BANDS_2430-1.0)));
double _n_turns_2471=([&](){auto _n_argument_2530=1.0;auto _n_argument_2531=d::round((_n_SPIN_2431*std::pow((_n_IN_2423/_n_r_2470),1.5)));return d::maximum({_n_argument_2530,_n_argument_2531});})();
d::Array<d::Array<double,false>,false> _n_waves_2472=d::map(d::Array<double,false>{2.0,3.0,5.0,8.0,13.0},[&]( double _a0) mutable ->d::Array<double,false>{double _n_k_2473=_a0;
return d::Array<double,false>{_n_k_2473,(this->_n_rand_2443()*6.283),([&](){auto _n_left_2532=(0.5+this->_n_rand_2443());auto _n_right_2533=std::sqrt(_n_k_2473);return (_n_left_2532/_n_right_2533);})()};});
d::Array<float,true> _n_tab_2474=d::Array<float,true>(size_t(this->_n_TAB_2444));
double _n_lo_2475=INFINITY;
double _n_hi_2476=(-d::number(INFINITY));
{double _n_i_2477=0.0;
for(;d::truth((_n_i_2477<this->_n_TAB_2444));(void)((_n_i_2477++))){d::check_cancel();for(auto &&_n_item_2534:_n_waves_2472){d::check_cancel();auto _n_binding_2535=_n_item_2534;
double _n_k_2478=d::at(_n_binding_2535,0.0);
double _n_p_2479=d::at(_n_binding_2535,1.0);
double _n_a_2480=d::at(_n_binding_2535,2.0);
(void)(([&](){auto&& _n_array_2536=_n_tab_2474;auto _n_index_2537=_n_i_2477;auto _n_value_2538=(d::at(_n_array_2536,_n_index_2537)+(_n_a_2480*std::sin((((((_n_k_2478*2.0)*ascii::PI)*_n_i_2477)/this->_n_TAB_2444)+_n_p_2479))));d::put(_n_array_2536,_n_index_2537,_n_value_2538);return _n_value_2538;})());
}
(void)((_n_lo_2475=d::minimum({_n_lo_2475,d::at(_n_tab_2474,_n_i_2477)})));
(void)((_n_hi_2476=d::maximum({_n_hi_2476,d::at(_n_tab_2474,_n_i_2477)})));
}}
{double _n_i_2481=0.0;
for(;d::truth((_n_i_2481<this->_n_TAB_2444));(void)((_n_i_2481++))){d::check_cancel();(void)(([&](){auto&& _n_array_2539=_n_tab_2474;auto _n_index_2540=_n_i_2481;auto _n_value_2541=(0.45+((0.55*(d::at(_n_tab_2474,_n_i_2481)-_n_lo_2475))/(_n_hi_2476-_n_lo_2475)));d::put(_n_array_2539,_n_index_2540,_n_value_2541);return _n_value_2541;})());
}}
(void)(this->_n_band_2445.push(([&](){auto _n_object_2543=std::make_shared<_n_Record_2446>();_n_object_2543->_p_tab=_n_tab_2474;_n_object_2543->_p_turns=_n_turns_2471;return _n_object_2543;})()));
}}
this->_n_cells_2447=d::Array<d::Array<double,false>,false>(d::from((this->_n_cols_2437*this->_n_rows_2438),[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{};}));
this->_n_empty_2448=d::Array<uint8_t,true>(size_t((this->_n_cols_2437*this->_n_rows_2438))).fill(1.0);
{double _n_j_2482=0.0;
for(;d::truth((_n_j_2482<(this->_n_rows_2438*_n_SY_2421)));(void)((_n_j_2482++))){d::check_cancel();double _n_y_2483=(((((this->_n_rows_2438/2.0)+0.5)-((_n_j_2482+0.5)/_n_SY_2421))*2.0)*this->_n_cw_2439);
{double _n_i_2484=0.0;
for(;d::truth((_n_i_2484<(this->_n_cols_2437*_n_SX_2420)));(void)((_n_i_2484++))){d::check_cancel();double _n_x_2485=((((_n_i_2484+0.5)/_n_SX_2420)-(this->_n_cols_2437/2.0))*this->_n_cw_2439);
double _n_k_2486=([&](){auto _n_left_2544=(std::floor((_n_j_2482/_n_SY_2421))*this->_n_cols_2437);auto _n_right_2545=std::floor((_n_i_2484/_n_SX_2420));return (_n_left_2544+_n_right_2545);})();
double _n_n_2487=d::hypot(std::initializer_list<double>{_n_x_2485,_n_y_2483,1.0});
d::Array<double,false> _n_d_2488=d::Array<double,false>{(_n_x_2485/_n_n_2487),(((_n_y_2483*this->_n_c_2441)-this->_n_s_2440)/_n_n_2487),(((_n_y_2483*this->_n_s_2440)+this->_n_c_2441)/_n_n_2487)};
double _n_out_2489=((d::at(_n_d_2488,1.0)*this->_n_s_2440)-(d::at(_n_d_2488,2.0)*this->_n_c_2441));
double _n_side_2490=std::sqrt((1.0-(_n_out_2489*_n_out_2489)));
d::Array<double,false> _n_e2_2491=d::Array<double,false>{(d::at(_n_d_2488,0.0)/_n_side_2490),((d::at(_n_d_2488,1.0)-(_n_out_2489*this->_n_s_2440))/_n_side_2490),((d::at(_n_d_2488,2.0)+(_n_out_2489*this->_n_c_2441))/_n_side_2490)};
d::Array<float,true> _n_us_2492=d::at(this->_n_table_2442,([&](){auto _n_argument_2546=(_n_NB_2433-1.0);auto _n_argument_2547=std::floor((((_n_D_2422*_n_side_2490)*_n_NB_2433)/_n_BMAX_2432));return d::minimum({_n_argument_2546,_n_argument_2547});})());
if(d::truth((d::at(_n_us_2492,(double(_n_us_2492.size())-1.0))>=1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_2548=this->_n_empty_2448;auto _n_index_2549=_n_k_2486;auto _n_value_2550=0.0;d::put(_n_array_2548,_n_index_2549,_n_value_2550);return _n_value_2550;})());
}
double _n_end_2493=d::minimum({((double(_n_us_2492.size())-1.0)*_n_H_2434),5.6});
double _n_light_2494=1.0;
{double _n_a_2495=d::mod((std::atan2((-d::number(this->_n_s_2440)),d::at(_n_e2_2491,1.0))+(2.0*ascii::PI)),ascii::PI);
for(;d::truth((_n_a_2495<_n_end_2493));(void)((_n_a_2495=(_n_a_2495+ascii::PI)))){d::check_cancel();double _n_p_2496=(_n_a_2495/_n_H_2434);
double _n_q_2497=std::floor(_n_p_2496);
double _n_r_2498=(1.0/(d::at(_n_us_2492,_n_q_2497)+((d::at(_n_us_2492,(_n_q_2497+1.0))-d::at(_n_us_2492,_n_q_2497))*(_n_p_2496-_n_q_2497))));
if((d::truth((_n_r_2498<=_n_IN_2423))||d::truth((_n_r_2498>=_n_OUT_2424)))){d::check_cancel();continue;
}
double _n_phi_2499=([&](){auto _n_argument_2551=([&](){auto _n_left_2552=(std::sin(_n_a_2495)*d::at(_n_e2_2491,2.0));auto _n_right_2553=(std::cos(_n_a_2495)*this->_n_c_2441);return (_n_left_2552-_n_right_2553);})();auto _n_argument_2554=(std::sin(_n_a_2495)*d::at(_n_e2_2491,0.0));return std::atan2(_n_argument_2551,_n_argument_2554);})();
double _n_edge_2500=(d::minimum({1.0,((_n_r_2498-_n_IN_2423)/0.7)})*(1.0-std::pow(((_n_r_2498-_n_IN_2423)/(_n_OUT_2424-_n_IN_2423)),2.0)));
double _n_doppler_2501=(1.0-(0.5*std::cos(_n_phi_2499)));
double _n_pos_2502=(((_n_r_2498-_n_IN_2423)/(_n_OUT_2424-_n_IN_2423))*(_n_BANDS_2430-1.0));
double _n_b0_2503=([&](){auto _n_argument_2555=(_n_BANDS_2430-2.0);auto _n_argument_2556=std::floor(_n_pos_2502);return d::minimum({_n_argument_2555,_n_argument_2556});})();
(void)(([&](){auto&& _n_array_2557=this->_n_empty_2448;auto _n_index_2558=_n_k_2486;auto _n_value_2559=0.0;d::put(_n_array_2557,_n_index_2558,_n_value_2559);return _n_value_2559;})());
(void)(d::at(this->_n_cells_2447,_n_k_2486).push(_n_b0_2503,(_n_pos_2502-_n_b0_2503),_n_phi_2499,((((_n_light_2494*_n_edge_2500)*_n_doppler_2501)*std::pow((_n_IN_2423/_n_r_2498),1.5))/(_n_SX_2420*_n_SY_2421))));
(void)((_n_light_2494=(_n_light_2494*0.45)));
}}
}}
}}
this->_n_stars_2449=d::Array<uint8_t,true>(size_t((this->_n_cols_2437*this->_n_rows_2438)));
{double _n_k_2504=0.0;
for(;d::truth((_n_k_2504<(this->_n_cols_2437*this->_n_rows_2438)));(void)((_n_k_2504++))){d::check_cancel();(void)(([&](){auto&& _n_array_2560=this->_n_stars_2449;auto _n_index_2561=_n_k_2504;auto _n_value_2562=((d::truth(d::at(this->_n_empty_2448,_n_k_2504))&&d::truth((this->_n_rand_2443()<0.03)))?1.0:0.0);d::put(_n_array_2560,_n_index_2561,_n_value_2562);return _n_value_2562;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_2524> _a1) mutable ->d::String{double _n_t_2508=_a0;
{
double _n_turn_2509=(((2.0*ascii::PI)*d::mod(_n_t_2508,_n_LOOP_2429))/_n_LOOP_2429);
d::String _n_out_2510=d::String(u"");
{double _n_r_2511=0.0;
for(;d::truth((_n_r_2511<this->_n_rows_2438));(void)((_n_r_2511++))){d::check_cancel();if(d::truth(_n_r_2511)){d::check_cancel();(void)((_n_out_2510=(d::string(_n_out_2510)+d::string(d::String(u"\n")))));
}
{double _n_q_2512=0.0;
for(;d::truth((_n_q_2512<this->_n_cols_2437));(void)((_n_q_2512++))){d::check_cancel();double _n_k_2513=((_n_r_2511*this->_n_cols_2437)+_n_q_2512);
d::Array<double,false> _n_h_2514=d::at(this->_n_cells_2447,_n_k_2513);
double _n_sum_2515=0.0;
{double _n_i_2516=0.0;
for(;d::truth((_n_i_2516<double(_n_h_2514.size())));(void)((_n_i_2516=(_n_i_2516+4.0)))){d::check_cancel();double _n_b_2517=d::at(_n_h_2514,_n_i_2516);
double _n_fr_2518=d::at(_n_h_2514,(_n_i_2516+1.0));
double _n_phi_2519=d::at(_n_h_2514,(_n_i_2516+2.0));
double _n_g0_2520=this->_n_at_2450(_n_b_2517,(_n_phi_2519-(d::at(this->_n_band_2445,_n_b_2517)->_p_turns*_n_turn_2509)));
double _n_g1_2521=this->_n_at_2450((_n_b_2517+1.0),(_n_phi_2519-(d::at(this->_n_band_2445,(_n_b_2517+1.0))->_p_turns*_n_turn_2509)));
(void)((_n_sum_2515=(_n_sum_2515+(d::at(_n_h_2514,(_n_i_2516+3.0))*(_n_g0_2520+((_n_g1_2521-_n_g0_2520)*_n_fr_2518))))));
}}
double _n_v_2522=std::pow(([&](){auto _n_argument_2563=1.0;auto _n_argument_2564=(d::maximum({0.0,((_n_sum_2515*_n_GAIN_2427)-_n_FLOOR_2428)})/(1.0-_n_FLOOR_2428));return d::minimum({_n_argument_2563,_n_argument_2564});})(),0.75);
d::String _n_ch_2523=d::at(_n_RAMP_2419,d::round((_n_v_2522*(double(_n_RAMP_2419.size())-1.0))));
(void)((_n_out_2510=(d::string(_n_out_2510)+d::string(((d::truth((_n_ch_2523==d::String(u" ")))&&d::truth(d::at(this->_n_stars_2449,_n_k_2513)))?d::String(u"."):_n_ch_2523)))));
}}
}}
return _n_out_2510;

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("black-hole").cols)*ascii::catalog_meta("black-hole").rows);auto _env=std::make_shared<_n_Record_2524>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &black_hole_meta(){return catalog_meta("black-hole");}
std::unique_ptr<Piece> make_black_hole(const AsciiPieceOptions &o){return std::make_unique<Native_black_hole>(o);}
}
