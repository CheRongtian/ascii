// Direct, statically typed C++ from src/pieces/cloud-sea.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_4665;
struct _n_Record_4882;
struct _n_Record_4665{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_4665> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4665>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_4882{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_4882> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4882>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_4676(double _a0,double _a1);
double _n_noise_4677(double _a0,double _a1,double _a2);
double _n_fbm_4678(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_4679(double _a0);
double _n_smooth_4680(double _a0,double _a1,double _a2);
double _n_mix_4681(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_4682(d::String _a0);
void _n_ramp_4683(d::Array<d::Array<double,false>,false> _a0,double _a1,d::Array<double,false> _a2);
std::shared_ptr<_n_Record_4665> _n_meta_4664=[](){return ([&](){auto _n_object_4885=std::make_shared<_n_Record_4665>();_n_object_4885->_p_name=d::String(u"cloud sea");_n_object_4885->_p_category=d::String(u"scenes");_n_object_4885->_p_note=d::String(u"the sun sinks into a drifting sea of orange cloud at dusk");_n_object_4885->_p_cols=200.0;_n_object_4885->_p_rows=100.0;_n_object_4885->_p_cell=1.0;_n_object_4885->_p_fps=15.0;_n_object_4885->_p_ground=d::String(u"#0e0e0f");_n_object_4885->_p_palette=d::Array<d::String,false>{d::String(u"#0e0e0f"),d::String(u"#161617"),d::String(u"#1f1f20"),d::String(u"#2a2a2b"),d::String(u"#353536"),d::String(u"#404041"),d::String(u"#545456"),d::String(u"#6c6c6e"),d::String(u"#8a8a8c"),d::String(u"#a39a94"),d::String(u"#2c211c"),d::String(u"#43302a"),d::String(u"#5e3c2a"),d::String(u"#7c4826"),d::String(u"#9c521f"),d::String(u"#c2601c"),d::String(u"#dc6f1e"),d::String(u"#f38020"),d::String(u"#f6922e"),d::String(u"#faae40"),d::String(u"#fbbd5c"),d::String(u"#fccb7c"),d::String(u"#fdda9e"),d::String(u"#feeac4"),d::String(u"#fff6e6")};return _n_object_4885;})();}();
const double _n_W_4666=[](){return 200.0;}();
const double _n_H_4667=[](){return 100.0;}();
const double _n_HZ_4668=[](){return 40.0;}();
d::Array<double,false> _n_SUN_4669=[](){return d::Array<double,false>{150.0,(_n_HZ_4668+1.5)};}();
const double _n_SR_4670=[](){return 10.0;}();
const d::String _n_DOTS_4671=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_4672=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_4673=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_4713=_a0;
return ((_n_v_4713/16.0)-0.47);});}();
const double _n_SKY_4674=[](){return 0.0;}();
const double _n_SEA_4675=[](){return 1.0;}();
d::Array<d::Array<double,false>,false> _n_SKY_STOPS_4684=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.035,0.035,0.04},d::Array<double,false>{0.4,0.075,0.075,0.08},d::Array<double,false>{0.72,0.16,0.155,0.16},d::Array<double,false>{0.9,0.2,0.185,0.18},d::Array<double,false>{1.0,0.25,0.2,0.18}};}();
d::Array<d::Array<double,false>,false> _n_SEA_STOPS_4685=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.06,0.06,0.065},d::Array<double,false>{0.2,0.13,0.125,0.13},d::Array<double,false>{0.38,0.3,0.2,0.15},d::Array<double,false>{0.55,0.62,0.3,0.1},d::Array<double,false>{0.7,0.953,0.502,0.125},d::Array<double,false>{0.84,0.98,0.682,0.251},d::Array<double,false>{0.94,1.0,0.84,0.55},d::Array<double,false>{1.0,1.0,0.94,0.8}};}();
d::Array<double,false> _n_DY_4686=[](){return d::Array<double,false>{};}();
const double _n_NL_4687=[](){return double(_n_DY_4686.size());}();
const double _n_WB_4688=[](){return 1.7;}();
const double _n_PU_4689=[](){return 50.0;}();
const double _n_RES_4690=[](){return 16.0;}();
const double _n_US_4691=[](){return (_n_PU_4689*_n_RES_4690);}();
const bool _n_init_4886=[](){{double _n_d_4758=0.7;
for(;d::truth((_n_d_4758<120.0));(void)((_n_d_4758=(_n_d_4758*1.1)))){d::check_cancel();(void)(_n_DY_4686.push(_n_d_4758));
}}
return true;}();
double _n_hash_4676(double _a0,double _a1){double _n_x_4714=_a0;
double _n_y_4715=_a1;
{
double _n_h_4716=([&](){auto _n_left_4887=d::imul(double(d::i32(_n_x_4714)|d::i32(0.0)),374761393.0);auto _n_right_4888=d::imul(double(d::i32(_n_y_4715)|d::i32(0.0)),668265263.0);return (_n_left_4887+_n_right_4888);})();
(void)((_n_h_4716=d::imul(double(d::i32(_n_h_4716)^d::i32(double(d::u32(_n_h_4716)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_4716)^d::i32(double(d::u32(_n_h_4716)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_4677(double _a0,double _a1,double _a2){double _n_x_4717=_a0;
double _n_y_4718=_a1;
double _n_period_4719=_a2;
{
double _n_xi_4720=std::floor(_n_x_4717);
double _n_yi_4721=std::floor(_n_y_4718);
double _n_fx_4722=(_n_x_4717-_n_xi_4720);
double _n_fy_4723=(_n_y_4718-_n_yi_4721);
double _n_u_4724=((_n_fx_4722*_n_fx_4722)*(3.0-(2.0*_n_fx_4722)));
double _n_v_4725=((_n_fy_4723*_n_fy_4723)*(3.0-(2.0*_n_fy_4723)));
double _n_x0_4726=_n_xi_4720;
double _n_x1_4727=(_n_xi_4720+1.0);
if(d::truth(_n_period_4719)){d::check_cancel();(void)((_n_x0_4726=d::mod((d::mod(_n_xi_4720,_n_period_4719)+_n_period_4719),_n_period_4719)));
(void)((_n_x1_4727=d::mod((_n_x0_4726+1.0),_n_period_4719)));
}
double _n_a_4728=_n_hash_4676(_n_x0_4726,_n_yi_4721);
double _n_b_4729=_n_hash_4676(_n_x1_4727,_n_yi_4721);
double _n_c_4730=_n_hash_4676(_n_x0_4726,(_n_yi_4721+1.0));
double _n_d_4731=_n_hash_4676(_n_x1_4727,(_n_yi_4721+1.0));
return (((_n_a_4728+((_n_b_4729-_n_a_4728)*_n_u_4724))+((_n_c_4730-_n_a_4728)*_n_v_4725))+(((((_n_a_4728-_n_b_4729)-_n_c_4730)+_n_d_4731)*_n_u_4724)*_n_v_4725));

}
}

double _n_fbm_4678(double _a0,double _a1,double _a2,double _a3){double _n_x_4732=_a0;
double _n_y_4733=_a1;
double _n_octaves_4734=_a2;
double _n_period_4735=_a3;
{
double _n_s_4736=0.0;
double _n_n_4737=0.0;
double _n_amp_4738=0.5;
double _n_f_4739=1.0;
{double _n_i_4740=0.0;
for(;d::truth((_n_i_4740<_n_octaves_4734));(void)((_n_i_4740++))){d::check_cancel();(void)((_n_s_4736=(_n_s_4736+(_n_amp_4738*_n_noise_4677((_n_x_4732*_n_f_4739),(_n_y_4733*_n_f_4739),(_n_period_4735*_n_f_4739))))));
(void)((_n_n_4737=(_n_n_4737+_n_amp_4738)));
(void)((_n_amp_4738=(_n_amp_4738*0.5)));
(void)((_n_f_4739=(_n_f_4739*2.0)));
}}
return (_n_s_4736/_n_n_4737);

}
}

double _n_clamp_4679(double _a0){double _n_v_4741=_a0;
return (d::truth((_n_v_4741<0.0))?0.0:(d::truth((_n_v_4741>1.0))?1.0:_n_v_4741));}

double _n_smooth_4680(double _a0,double _a1,double _a2){double _n_a_4742=_a0;
double _n_b_4743=_a1;
double _n_v_4744=_a2;
{
double _n_k_4745=_n_clamp_4679(((_n_v_4744-_n_a_4742)/(_n_b_4743-_n_a_4742)));
return ((_n_k_4745*_n_k_4745)*(3.0-(2.0*_n_k_4745)));

}
}

double _n_mix_4681(double _a0,double _a1,double _a2){double _n_a_4746=_a0;
double _n_b_4747=_a1;
double _n_k_4748=_a2;
return (_n_a_4746+((_n_b_4747-_n_a_4746)*_n_k_4748));}

d::Array<double,false> _n_hex_4682(d::String _a0){d::String _n_s_4749=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_4750=_a0;
return (([&](){auto _n_argument_4889=d::slice(_n_s_4749,_n_i_4750,(_n_i_4750+2.0));auto _n_argument_4890=16.0;return d::parseInt(_n_argument_4889,_n_argument_4890);})()/255.0);});}

void _n_ramp_4683(d::Array<d::Array<double,false>,false> _a0,double _a1,d::Array<double,false> _a2){d::Array<d::Array<double,false>,false> _n_stops_4751=_a0;
double _n_v_4752=_a1;
d::Array<double,false> _n_out_4753=_a2;
{
double _n_i_4754=1.0;
while((d::truth((_n_i_4754<(double(_n_stops_4751.size())-1.0)))&&d::truth((_n_v_4752>d::at(d::at(_n_stops_4751,_n_i_4754),0.0))))){d::check_cancel();(void)((_n_i_4754++));
}
d::Array<double,false> _n_a_4755=d::at(_n_stops_4751,(_n_i_4754-1.0));
d::Array<double,false> _n_b_4756=d::at(_n_stops_4751,_n_i_4754);
double _n_k_4757=_n_clamp_4679(((_n_v_4752-d::at(_n_a_4755,0.0))/(d::at(_n_b_4756,0.0)-d::at(_n_a_4755,0.0))));
(void)(((([&](){auto&& _n_array_4891=_n_out_4753;auto _n_index_4892=0.0;auto _n_value_4893=_n_mix_4681(d::at(_n_a_4755,1.0),d::at(_n_b_4756,1.0),_n_k_4757);d::put(_n_array_4891,_n_index_4892,_n_value_4893);return _n_value_4893;})(),([&](){auto&& _n_array_4894=_n_out_4753;auto _n_index_4895=1.0;auto _n_value_4896=_n_mix_4681(d::at(_n_a_4755,2.0),d::at(_n_b_4756,2.0),_n_k_4757);d::put(_n_array_4894,_n_index_4895,_n_value_4896);return _n_value_4896;})()),([&](){auto&& _n_array_4897=_n_out_4753;auto _n_index_4898=2.0;auto _n_value_4899=_n_mix_4681(d::at(_n_a_4755,3.0),d::at(_n_b_4756,3.0),_n_k_4757);d::put(_n_array_4897,_n_index_4898,_n_value_4899);return _n_value_4899;})()));

}
}

struct Native_cloud_sea final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_4692{};
double _n_N_4693{};
d::Array<d::String,false> _n_out_4694{};
d::Array<uint8_t,true> _n_lut_4695{};
d::Array<double,false> _n_g_4698{};
d::Array<float,true> _n_SEAT_4699{};
d::Array<float,true> _n_sky_4700{};
d::Array<float,true> _n_HT_4701{};
d::Array<float,true> _n_SL_4702{};
d::Array<uint8_t,true> _n_mat_4704{};
d::Array<uint8_t,true> _n_lay_4705{};
d::Array<float,true> _n_sv_4706{};
d::Array<float,true> _n_sl_4707{};
d::Array<float,true> _n_uu_4708{};
d::Array<float,true> _n_dtop_4709{};
d::Array<float,true> _n_FR_4710{};
d::Array<float,true> _n_FG_4711{};
d::Array<float,true> _n_FB_4712{};
std::function<d::String(double,std::shared_ptr<_n_Record_4882>)> _render;
double _n_nearest_4696(double _a0,double _a1,double _a2){double _n_r_4759=_a0;
double _n_g_4760=_a1;
double _n_b_4761=_a2;
{
double _n_k_4762=([&](){auto _n_left_4994=([&](){auto _n_left_4996=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_4759*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_4997=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_4760*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_4996)|d::i32(_n_right_4997));})();auto _n_right_4995=d::minimum({31.0,double(d::i32((_n_b_4761*31.99))|d::i32(0.0))});return double(d::i32(_n_left_4994)|d::i32(_n_right_4995));})();
if(d::truth((d::at(this->_n_lut_4695,_n_k_4762)!=255.0))){d::check_cancel();return d::at(this->_n_lut_4695,_n_k_4762);
}
double _n_best_4763=0.0;
double _n_bd_4764=1000000000.0;
{double _n_i_4765=0.0;
for(;d::truth((_n_i_4765<double(this->_n_P_4692.size())));(void)((_n_i_4765++))){d::check_cancel();double _n_dr_4766=(d::at(d::at(this->_n_P_4692,_n_i_4765),0.0)-_n_r_4759);
double _n_dg_4767=(d::at(d::at(this->_n_P_4692,_n_i_4765),1.0)-_n_g_4760);
double _n_db_4768=(d::at(d::at(this->_n_P_4692,_n_i_4765),2.0)-_n_b_4761);
double _n_d_4769=((((0.3*_n_dr_4766)*_n_dr_4766)+((0.5*_n_dg_4767)*_n_dg_4767))+((0.2*_n_db_4768)*_n_db_4768));
if(d::truth((_n_d_4769<_n_bd_4764))){d::check_cancel();(void)(((_n_bd_4764=_n_d_4769),(_n_best_4763=_n_i_4765)));
}
}}
return ([&](){auto&& _n_array_4998=this->_n_lut_4695;auto _n_index_4999=_n_k_4762;auto _n_value_5000=_n_best_4763;d::put(_n_array_4998,_n_index_4999,_n_value_5000);return _n_value_5000;})();

}
}

void _n_halftone_4697(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,std::optional<d::Array<uint8_t,true>> _a8){double _n_k_4770=_a0;
double _n_r_4771=_a1;
double _n_x_4772=_a2;
double _n_cr_4773=_a3;
double _n_cg_4774=_a4;
double _n_cb_4775=_a5;
double _n_floor_4776=_a6;
double _n_fade_4777=_a7;
std::optional<d::Array<uint8_t,true>> _n_color_4778=_a8;
{
double _n_peak_4779=d::maximum({_n_cr_4773,_n_cg_4774,_n_cb_4775,0.0001});
double _n_level_4780=(_n_clamp_4679((_n_floor_4776+(((1.0-_n_floor_4776)*std::pow(_n_peak_4779,0.85))*0.95)))*_n_fade_4777);
double _n_step_4781=([&](){auto _n_argument_5001=0.0;auto _n_argument_5002=([&](){auto _n_argument_5003=3.0;auto _n_argument_5004=d::round(((_n_level_4780*3.0)+d::at(_n_BAYER_4673,((double(d::i32(_n_r_4771)&d::i32(3.0))*4.0)+double(d::i32(_n_x_4772)&d::i32(3.0))))));return d::minimum({_n_argument_5003,_n_argument_5004});})();return d::maximum({_n_argument_5001,_n_argument_5002});})();
(void)(([&](){auto&& _n_array_5005=this->_n_out_4694;auto _n_index_5006=_n_k_4770;auto _n_value_5007=d::at(_n_DOTS_4671,_n_step_4781);d::put(_n_array_5005,_n_index_5006,_n_value_5007);return _n_value_5007;})());
if(d::truth(_n_color_4778)){d::check_cancel();double _n_want_4782=(d::truth(_n_step_4781)?d::minimum({1.0,((_n_level_4780+0.06)/d::at(_n_COVER_4672,_n_step_4781))}):0.0);
double _n_s_4783=(((0.3+(0.7*_n_want_4782))*(0.4+(0.6*_n_smooth_4680(0.14,0.5,_n_level_4780))))/_n_peak_4779);
(void)(([&](){auto&& _n_array_5008=d::read(_n_color_4778);auto _n_index_5009=_n_k_4770;auto _n_value_5010=([&](){auto _n_argument_5011=_n_clamp_4679((_n_cr_4773*_n_s_4783));auto _n_argument_5012=_n_clamp_4679((_n_cg_4774*_n_s_4783));auto _n_argument_5013=_n_clamp_4679((_n_cb_4775*_n_s_4783));return this->_n_nearest_4696(_n_argument_5011,_n_argument_5012,_n_argument_5013);})();d::put(_n_array_5008,_n_index_5009,_n_value_5010);return _n_value_5010;})());
}

}
}

double _n_prof_4703(double _a0,double _a1){double _n_j_4796=_a0;
double _n_u_4797=_a1;
{
double _n_n_4798=_n_fbm_4678((_n_u_4797*0.9),(_n_j_4796*4.7),4.0,(_n_PU_4689*0.9));
return (0.05+(0.36*([&](){auto _n_argument_5014=_n_smooth_4680(0.28,0.74,_n_n_4798);auto _n_argument_5015=0.85;return std::pow(_n_argument_5014,_n_argument_5015);})()));

}
}

explicit Native_cloud_sea(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_4692=d::map(_n_meta_4664->_p_palette,_n_hex_4682);
this->_n_N_4693=(_n_W_4666*_n_H_4667);
this->_n_out_4694=d::Array<d::String,false>(size_t(this->_n_N_4693));
this->_n_lut_4695=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_g_4698=d::Array<double,false>{0.0,0.0,0.0};
this->_n_SEAT_4699=d::Array<float,true>(size_t((256.0*3.0)));
{double _n_i_4784=0.0;
for(;d::truth((_n_i_4784<256.0));(void)((_n_i_4784++))){d::check_cancel();(void)(_n_ramp_4683(_n_SEA_STOPS_4685,(_n_i_4784/255.0),this->_n_g_4698));
(void)(((([&](){auto&& _n_array_4900=this->_n_SEAT_4699;auto _n_index_4901=(_n_i_4784*3.0);auto _n_value_4902=d::at(this->_n_g_4698,0.0);d::put(_n_array_4900,_n_index_4901,_n_value_4902);return _n_value_4902;})(),([&](){auto&& _n_array_4903=this->_n_SEAT_4699;auto _n_index_4904=((_n_i_4784*3.0)+1.0);auto _n_value_4905=d::at(this->_n_g_4698,1.0);d::put(_n_array_4903,_n_index_4904,_n_value_4905);return _n_value_4905;})()),([&](){auto&& _n_array_4906=this->_n_SEAT_4699;auto _n_index_4907=((_n_i_4784*3.0)+2.0);auto _n_value_4908=d::at(this->_n_g_4698,2.0);d::put(_n_array_4906,_n_index_4907,_n_value_4908);return _n_value_4908;})()));
}}
this->_n_sky_4700=d::Array<float,true>(size_t((this->_n_N_4693*3.0)));
{double _n_r_4785=0.0;
for(;d::truth((_n_r_4785<_n_H_4667));(void)((_n_r_4785++))){d::check_cancel();{double _n_x_4786=0.0;
for(;d::truth((_n_x_4786<_n_W_4666));(void)((_n_x_4786++))){d::check_cancel();double _n_y_4787=(_n_r_4785+0.5);
double _n_dx_4788=((_n_x_4786+0.5)-d::at(_n_SUN_4669,0.0));
double _n_v_4789=d::minimum({1.0,(_n_y_4787/_n_HZ_4668)});
double _n_near_4790=std::exp(((-d::number(std::fabs(_n_dx_4788)))/60.0));
(void)(([&](){auto _n_argument_4909=_n_SKY_STOPS_4684;auto _n_argument_4910=std::pow(_n_v_4789,(1.15-(0.2*_n_near_4790)));auto _n_argument_4911=this->_n_g_4698;return _n_ramp_4683(_n_argument_4909,_n_argument_4910,_n_argument_4911);})());
double _n_haze_4791=(0.9+(0.2*_n_fbm_4678((_n_x_4786*0.025),(_n_y_4787*0.14),3.0,0.0)));
double _n_hot_4792=(([&](){auto _n_argument_4912=_n_smooth_4680(0.6,1.0,_n_v_4789);auto _n_argument_4913=1.6;return std::pow(_n_argument_4912,_n_argument_4913);})()*(0.08+(0.92*_n_near_4790)));
double _n_k_4793=(((_n_r_4785*_n_W_4666)+_n_x_4786)*3.0);
(void)(([&](){auto&& _n_array_4914=this->_n_sky_4700;auto _n_index_4915=_n_k_4793;auto _n_value_4916=((d::at(this->_n_g_4698,0.0)+(0.75*_n_hot_4792))*_n_haze_4791);d::put(_n_array_4914,_n_index_4915,_n_value_4916);return _n_value_4916;})());
(void)(([&](){auto&& _n_array_4917=this->_n_sky_4700;auto _n_index_4918=(_n_k_4793+1.0);auto _n_value_4919=((d::at(this->_n_g_4698,1.0)+(0.33*_n_hot_4792))*_n_haze_4791);d::put(_n_array_4917,_n_index_4918,_n_value_4919);return _n_value_4919;})());
(void)(([&](){auto&& _n_array_4920=this->_n_sky_4700;auto _n_index_4921=(_n_k_4793+2.0);auto _n_value_4922=(((d::at(this->_n_g_4698,2.0)*(1.0-(0.3*_n_hot_4792)))+(0.03*_n_hot_4792))*_n_haze_4791);d::put(_n_array_4920,_n_index_4921,_n_value_4922);return _n_value_4922;})());
double _n_ci_4794=([&](){auto _n_left_4923=([&](){auto _n_left_4925=([&](){auto _n_argument_4927=0.6;auto _n_argument_4928=0.78;auto _n_argument_4929=_n_fbm_4678(((_n_x_4786*0.011)+(_n_y_4787*0.02)),(_n_y_4787*0.42),4.0,0.0);return _n_smooth_4680(_n_argument_4927,_n_argument_4928,_n_argument_4929);})();auto _n_right_4926=_n_smooth_4680(4.0,14.0,_n_y_4787);return (_n_left_4925*_n_right_4926);})();auto _n_right_4924=_n_smooth_4680(34.0,20.0,_n_y_4787);return (_n_left_4923*_n_right_4924);})();
double _n_lit_4795=((_n_ci_4794*0.5)*_n_near_4790);
(void)(((([&](){auto&& _n_array_4930=this->_n_sky_4700;auto _n_index_4931=_n_k_4793;auto _n_value_4932=_n_mix_4681(d::at(this->_n_sky_4700,_n_k_4793),0.95,_n_lit_4795);d::put(_n_array_4930,_n_index_4931,_n_value_4932);return _n_value_4932;})(),([&](){auto&& _n_array_4933=this->_n_sky_4700;auto _n_index_4934=(_n_k_4793+1.0);auto _n_value_4935=_n_mix_4681(d::at(this->_n_sky_4700,(_n_k_4793+1.0)),0.5,_n_lit_4795);d::put(_n_array_4933,_n_index_4934,_n_value_4935);return _n_value_4935;})()),([&](){auto&& _n_array_4936=this->_n_sky_4700;auto _n_index_4937=(_n_k_4793+2.0);auto _n_value_4938=_n_mix_4681(d::at(this->_n_sky_4700,(_n_k_4793+2.0)),0.18,_n_lit_4795);d::put(_n_array_4936,_n_index_4937,_n_value_4938);return _n_value_4938;})()));
}}
}}
this->_n_HT_4701=d::Array<float,true>(size_t((_n_NL_4687*_n_US_4691)));
this->_n_SL_4702=d::Array<float,true>(size_t((_n_NL_4687*_n_US_4691)));
{double _n_j_4799=0.0;
for(;d::truth((_n_j_4799<_n_NL_4687));(void)((_n_j_4799++))){d::check_cancel();{double _n_i_4800=0.0;
for(;d::truth((_n_i_4800<_n_US_4691));(void)((_n_i_4800++))){d::check_cancel();double _n_u_4801=(_n_i_4800/_n_RES_4690);
(void)(([&](){auto&& _n_array_4939=this->_n_HT_4701;auto _n_index_4940=((_n_j_4799*_n_US_4691)+_n_i_4800);auto _n_value_4941=this->_n_prof_4703(_n_j_4799,_n_u_4801);d::put(_n_array_4939,_n_index_4940,_n_value_4941);return _n_value_4941;})());
(void)(([&](){auto&& _n_array_4942=this->_n_SL_4702;auto _n_index_4943=((_n_j_4799*_n_US_4691)+_n_i_4800);auto _n_value_4944=(([&](){auto _n_left_4945=this->_n_prof_4703(_n_j_4799,(_n_u_4801+0.05));auto _n_right_4946=this->_n_prof_4703(_n_j_4799,(_n_u_4801-0.05));return (_n_left_4945-_n_right_4946);})()*10.0);d::put(_n_array_4942,_n_index_4943,_n_value_4944);return _n_value_4944;})());
}}
}}
this->_n_mat_4704=d::Array<uint8_t,true>(size_t(this->_n_N_4693));
this->_n_lay_4705=d::Array<uint8_t,true>(size_t(this->_n_N_4693));
this->_n_sv_4706=d::Array<float,true>(size_t(this->_n_N_4693));
this->_n_sl_4707=d::Array<float,true>(size_t(this->_n_N_4693));
this->_n_uu_4708=d::Array<float,true>(size_t(this->_n_N_4693));
this->_n_dtop_4709=d::Array<float,true>(size_t(this->_n_N_4693));
this->_n_FR_4710=d::Array<float,true>(size_t(this->_n_N_4693));
this->_n_FG_4711=d::Array<float,true>(size_t(this->_n_N_4693));
this->_n_FB_4712=d::Array<float,true>(size_t(this->_n_N_4693));
_render=[=]( double _a0,std::shared_ptr<_n_Record_4882> _a1) mutable ->d::String{double _n_t_4802=_a0;
auto _n_binding_4949=(d::present(_a1)?_a1:([&](){auto _n_object_4948=std::make_shared<_n_Record_4882>();return _n_object_4948;})());
std::optional<d::Array<uint8_t,true>> _n_color_4803=_n_binding_4949->_p_color;
{
double _n_drift_4804=(_n_t_4802*0.12);
double _n_pulse_4805=std::sin((((_n_t_4802/4.0)*ascii::PI)*2.0));
(void)(this->_n_mat_4704.fill(_n_SKY_4674));
{double _n_x_4806=0.0;
for(;d::truth((_n_x_4806<_n_W_4666));(void)((_n_x_4806++))){d::check_cancel();double _n_xc_4807=(_n_x_4806+0.5);
double _n_ub_4808=_n_H_4667;
{double _n_j_4809=(_n_NL_4687-1.0);
for(;(d::truth((_n_j_4809>=0.0))&&d::truth((_n_ub_4808>0.0)));(void)((_n_j_4809--))){d::check_cancel();double _n_dy_4810=d::at(_n_DY_4686,_n_j_4809);
double _n_base_4811=(_n_HZ_4668+_n_dy_4810);
double _n_u_4812=(((((_n_xc_4807-100.0)/_n_dy_4810)*_n_WB_4688)+_n_drift_4804)+(_n_j_4809*13.7));
double _n_su_4813=(_n_u_4812*_n_RES_4690);
(void)((_n_su_4813=d::mod((d::mod(_n_su_4813,_n_US_4691)+_n_US_4691),_n_US_4691)));
double _n_i0_4814=double(d::i32(_n_su_4813)|d::i32(0.0));
double _n_f_4815=(_n_su_4813-_n_i0_4814);
double _n_i1_4816=d::mod((_n_i0_4814+1.0),_n_US_4691);
double _n_o_4817=(_n_j_4809*_n_US_4691);
double _n_ht_4818=(d::at(this->_n_HT_4701,(_n_o_4817+_n_i0_4814))+((d::at(this->_n_HT_4701,(_n_o_4817+_n_i1_4816))-d::at(this->_n_HT_4701,(_n_o_4817+_n_i0_4814)))*_n_f_4815));
double _n_h_4819=(_n_ht_4818*_n_dy_4810);
double _n_top_4820=(_n_base_4811-_n_h_4819);
double _n_r0_4821=([&](){auto _n_argument_4950=0.0;auto _n_argument_4951=std::ceil((_n_top_4820-0.5));return d::maximum({_n_argument_4950,_n_argument_4951});})();
if(d::truth((_n_r0_4821>=_n_ub_4808))){d::check_cancel();continue;
}
double _n_slope_4822=(d::at(this->_n_SL_4702,(_n_o_4817+_n_i0_4814))+((d::at(this->_n_SL_4702,(_n_o_4817+_n_i1_4816))-d::at(this->_n_SL_4702,(_n_o_4817+_n_i0_4814)))*_n_f_4815));
{double _n_r_4823=_n_r0_4821;
for(;d::truth((_n_r_4823<_n_ub_4808));(void)((_n_r_4823++))){d::check_cancel();double _n_k_4824=((_n_r_4823*_n_W_4666)+_n_x_4806);
(void)((((((([&](){auto&& _n_array_4952=this->_n_mat_4704;auto _n_index_4953=_n_k_4824;auto _n_value_4954=_n_SEA_4675;d::put(_n_array_4952,_n_index_4953,_n_value_4954);return _n_value_4954;})(),([&](){auto&& _n_array_4955=this->_n_lay_4705;auto _n_index_4956=_n_k_4824;auto _n_value_4957=_n_j_4809;d::put(_n_array_4955,_n_index_4956,_n_value_4957);return _n_value_4957;})()),([&](){auto&& _n_array_4958=this->_n_sv_4706;auto _n_index_4959=_n_k_4824;auto _n_value_4960=(((_n_base_4811-_n_r_4823)-0.5)/_n_h_4819);d::put(_n_array_4958,_n_index_4959,_n_value_4960);return _n_value_4960;})()),([&](){auto&& _n_array_4961=this->_n_sl_4707;auto _n_index_4962=_n_k_4824;auto _n_value_4963=_n_slope_4822;d::put(_n_array_4961,_n_index_4962,_n_value_4963);return _n_value_4963;})()),([&](){auto&& _n_array_4964=this->_n_uu_4708;auto _n_index_4965=_n_k_4824;auto _n_value_4966=_n_u_4812;d::put(_n_array_4964,_n_index_4965,_n_value_4966);return _n_value_4966;})()),([&](){auto&& _n_array_4967=this->_n_dtop_4709;auto _n_index_4968=_n_k_4824;auto _n_value_4969=((_n_r_4823+0.5)-_n_top_4820);d::put(_n_array_4967,_n_index_4968,_n_value_4969);return _n_value_4969;})()));
}}
(void)((_n_ub_4808=_n_r0_4821));
}}
}}
double _n_sr_4825=(_n_SR_4670+(0.35*_n_pulse_4805));
double _n_glowK_4826=(1.0+(0.12*_n_pulse_4805));
{double _n_r_4827=0.0;
for(;d::truth((_n_r_4827<_n_H_4667));(void)((_n_r_4827++))){d::check_cancel();double _n_y_4828=(_n_r_4827+0.5);
{double _n_x_4829=0.0;
for(;d::truth((_n_x_4829<_n_W_4666));(void)((_n_x_4829++))){d::check_cancel();double _n_k_4830=((_n_r_4827*_n_W_4666)+_n_x_4829);
double _n_m_4831=d::at(this->_n_mat_4704,_n_k_4830);
double _n_dx_4832=((_n_x_4829+0.5)-d::at(_n_SUN_4669,0.0));
double _n_dsy_4833=(_n_y_4828-d::at(_n_SUN_4669,1.0));
double _n_ds_4834=std::sqrt(((_n_dx_4832*_n_dx_4832)+((_n_dsy_4833*_n_dsy_4833)*2.2)));
double _n_near_4835=std::exp(((-d::number(std::fabs(_n_dx_4832)))/55.0));
double _n_cr_4836=0.0;
double _n_cg_4837=0.0;
double _n_cb_4838=0.0;
if(d::truth((_n_m_4831==_n_SKY_4674))){d::check_cancel();double _n_s_4839=(_n_k_4830*3.0);
(void)((((_n_cr_4836=d::at(this->_n_sky_4700,_n_s_4839)),(_n_cg_4837=d::at(this->_n_sky_4700,(_n_s_4839+1.0)))),(_n_cb_4838=d::at(this->_n_sky_4700,(_n_s_4839+2.0)))));
double _n_glow_4840=(([&](){auto _n_left_4970=(std::exp(((-d::number(_n_ds_4834))/30.0))*0.3);auto _n_right_4971=(std::exp(((-d::number(_n_ds_4834))/11.0))*0.35);return (_n_left_4970+_n_right_4971);})()*_n_glowK_4826);
(void)((((_n_cr_4836=(_n_cr_4836+_n_glow_4840)),(_n_cg_4837=(_n_cg_4837+(_n_glow_4840*0.55)))),(_n_cb_4838=(_n_cb_4838+(_n_glow_4840*0.18)))));
double _n_dd_4841=std::sqrt(((_n_dx_4832*_n_dx_4832)+(_n_dsy_4833*_n_dsy_4833)));
if(d::truth((_n_dd_4841<(_n_sr_4825+0.6)))){d::check_cancel();double _n_e_4842=(_n_dd_4841/_n_sr_4825);
double _n_a_4843=_n_smooth_4680((_n_sr_4825+0.45),(_n_sr_4825-0.45),_n_dd_4841);
(void)((((_n_cr_4836=_n_mix_4681(_n_cr_4836,1.0,_n_a_4843)),(_n_cg_4837=_n_mix_4681(_n_cg_4837,(0.94-(((0.3*_n_e_4842)*_n_e_4842)*_n_e_4842)),_n_a_4843))),(_n_cb_4838=_n_mix_4681(_n_cb_4838,(0.78-((0.5*_n_e_4842)*_n_e_4842)),_n_a_4843))));
}
if((d::truth((_n_r_4827<16.0))&&d::truth((_n_hash_4676(_n_x_4829,((_n_r_4827*5.0)+3.0))>0.992)))){d::check_cancel();double _n_tw_4844=(0.55+(0.45*std::sin(([&](){auto _n_left_4972=(_n_t_4802*(0.8+(_n_hash_4676(_n_r_4827,_n_x_4829)*1.6)));auto _n_right_4973=(_n_hash_4676(_n_x_4829,_n_r_4827)*6.28);return (_n_left_4972+_n_right_4973);})())));
double _n_st_4845=((_n_tw_4844*_n_smooth_4680(16.0,2.0,_n_r_4827))*0.7);
(void)((((_n_cr_4836=d::maximum({_n_cr_4836,(_n_st_4845*0.95)})),(_n_cg_4837=d::maximum({_n_cg_4837,(_n_st_4845*0.92)}))),(_n_cb_4838=d::maximum({_n_cb_4838,(_n_st_4845*0.86)}))));
}
}else {d::check_cancel();double _n_j_4846=d::at(this->_n_lay_4705,_n_k_4830);
double _n_dy_4847=d::at(_n_DY_4686,_n_j_4846);
double _n_s_4848=d::at(this->_n_sv_4706,_n_k_4830);
double _n_u_4849=d::at(this->_n_uu_4708,_n_k_4830);
double _n_dt_4850=d::at(this->_n_dtop_4709,_n_k_4830);
double _n_rim_4851=std::exp(((-d::number(_n_dt_4850))/(0.7+(0.06*_n_dy_4847))));
double _n_face_4852=_n_clamp_4679(_n_s_4848);
double _n_side_4853=_n_clamp_4679((0.5-((d::at(this->_n_sl_4707,_n_k_4830)*(d::truth((_n_dx_4832<0.0))?(-d::number(1.0)):1.0))*0.9)));
double _n_close_4854=_n_smooth_4680(3.0,14.0,_n_dy_4847);
double _n_tex_4855=(((_n_noise_4677((_n_u_4849*3.2),((_n_s_4848*2.5)+(_n_j_4846*5.3)),0.0)-0.5)*0.18)*_n_close_4854);
double _n_sh_4856=_n_noise_4677(((_n_u_4849*2.2)-(_n_t_4802*0.35)),((_n_j_4846*1.7)+(_n_t_4802*0.25)),0.0);
double _n_shimmer_4857=((_n_smooth_4680(0.55,0.85,_n_sh_4856)*_n_rim_4851)*(0.1+(0.45*_n_near_4835)));
double _n_az_4858=(0.25+(0.9*_n_near_4835));
double _n_b_4859=((((((0.07+(0.17*_n_face_4852))+((0.22*(_n_side_4853-0.5))*_n_face_4852))+_n_tex_4855)*_n_az_4858)+(_n_rim_4851*(0.22+(0.55*_n_near_4835))))+_n_shimmer_4857);
(void)((_n_b_4859=(_n_b_4859-(0.2*_n_smooth_4680(0.0,(-d::number(0.6)),_n_s_4848)))));
(void)((_n_b_4859=_n_clamp_4679((_n_b_4859*(0.9+(0.12*_n_smooth_4680(30.0,4.0,_n_dy_4847)))))));
double _n_ci_4860=(double(d::i32((_n_b_4859*255.0))|d::i32(0.0))*3.0);
(void)((((_n_cr_4836=d::at(this->_n_SEAT_4699,_n_ci_4860)),(_n_cg_4837=d::at(this->_n_SEAT_4699,(_n_ci_4860+1.0)))),(_n_cb_4838=d::at(this->_n_SEAT_4699,(_n_ci_4860+2.0)))));
double _n_cool_4861=(((1.0-_n_near_4835)*(1.0-_n_rim_4851))*0.7);
(void)((((_n_cr_4836=_n_mix_4681(_n_cr_4836,(0.07*_n_az_4858),_n_cool_4861)),(_n_cg_4837=_n_mix_4681(_n_cg_4837,(0.068*_n_az_4858),_n_cool_4861))),(_n_cb_4838=_n_mix_4681(_n_cb_4838,(0.072*_n_az_4858),_n_cool_4861))));
double _n_haze_4862=(std::exp(((-d::number(_n_dy_4847))/5.0))*0.85);
double _n_hg_4863=(((std::exp(((-d::number(_n_ds_4834))/26.0))*0.5)+(0.5*_n_near_4835))*_n_glowK_4826);
(void)((_n_cr_4836=_n_mix_4681(_n_cr_4836,(0.17+(0.83*_n_hg_4863)),_n_haze_4862)));
(void)((_n_cg_4837=_n_mix_4681(_n_cg_4837,(0.16+(0.48*_n_hg_4863)),_n_haze_4862)));
(void)((_n_cb_4838=_n_mix_4681(_n_cb_4838,0.17,_n_haze_4862)));
double _n_bloom_4864=(((std::exp(((-d::number(_n_ds_4834))/13.0))*0.5)*_n_glowK_4826)*(0.4+_n_rim_4851));
(void)((((_n_cr_4836=(_n_cr_4836+_n_bloom_4864)),(_n_cg_4837=(_n_cg_4837+(_n_bloom_4864*0.62)))),(_n_cb_4838=(_n_cb_4838+(_n_bloom_4864*0.25)))));
}
(void)(((([&](){auto&& _n_array_4974=this->_n_FR_4710;auto _n_index_4975=_n_k_4830;auto _n_value_4976=_n_cr_4836;d::put(_n_array_4974,_n_index_4975,_n_value_4976);return _n_value_4976;})(),([&](){auto&& _n_array_4977=this->_n_FG_4711;auto _n_index_4978=_n_k_4830;auto _n_value_4979=_n_cg_4837;d::put(_n_array_4977,_n_index_4978,_n_value_4979);return _n_value_4979;})()),([&](){auto&& _n_array_4980=this->_n_FB_4712;auto _n_index_4981=_n_k_4830;auto _n_value_4982=_n_cb_4838;d::put(_n_array_4980,_n_index_4981,_n_value_4982);return _n_value_4982;})()));
}}
}}
{double _n_i_4865=0.0;
for(;d::truth((_n_i_4865<3.0));(void)((_n_i_4865++))){d::check_cancel();double _n_bx_4866=std::floor((d::mod((((_n_t_4802*(4.5+(_n_i_4865*0.4)))+(_n_i_4865*11.0))+30.0),(_n_W_4666+40.0))-20.0));
double _n_by_4867=d::round(((16.0+(_n_i_4865*2.6))+(0.8*std::sin(((_n_t_4802*0.9)+(_n_i_4865*2.0))))));
bool _n_up_4868=(std::sin(((_n_t_4802*7.0)+(_n_i_4865*1.9)))>0.0);
d::Array<d::Array<double,false>,false> _n_cells_4869=(d::truth(_n_up_4868)?d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{(-d::number(1.0)),(-d::number(1.0))},d::Array<double,false>{1.0,(-d::number(1.0))},d::Array<double,false>{(-d::number(2.0)),(-d::number(1.0))},d::Array<double,false>{2.0,(-d::number(1.0))}}:d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(2.0)),1.0},d::Array<double,false>{2.0,1.0}});
for(auto &&_n_item_4983:_n_cells_4869){d::check_cancel();auto _n_binding_4984=_n_item_4983;
double _n_ox_4870=d::at(_n_binding_4984,0.0);
double _n_oy_4871=d::at(_n_binding_4984,1.0);
{
double _n_x_4872=(_n_bx_4866+_n_ox_4870);
double _n_r_4873=(_n_by_4867+_n_oy_4871);
if((((d::truth((_n_x_4872<0.0))||d::truth((_n_x_4872>=_n_W_4666)))||d::truth((_n_r_4873<0.0)))||d::truth((_n_r_4873>=_n_H_4667)))){d::check_cancel();continue;
}
double _n_k_4874=((_n_r_4873*_n_W_4666)+_n_x_4872);
if(d::truth((d::at(this->_n_mat_4704,_n_k_4874)!=_n_SKY_4674))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_4985=this->_n_FR_4710;auto _n_index_4986=_n_k_4874;auto _n_value_4987=0.3;d::put(_n_array_4985,_n_index_4986,_n_value_4987);return _n_value_4987;})(),([&](){auto&& _n_array_4988=this->_n_FG_4711;auto _n_index_4989=_n_k_4874;auto _n_value_4990=0.18;d::put(_n_array_4988,_n_index_4989,_n_value_4990);return _n_value_4990;})()),([&](){auto&& _n_array_4991=this->_n_FB_4712;auto _n_index_4992=_n_k_4874;auto _n_value_4993=0.12;d::put(_n_array_4991,_n_index_4992,_n_value_4993);return _n_value_4993;})()));

}
}
}}
{double _n_r_4875=0.0;
for(;d::truth((_n_r_4875<_n_H_4667));(void)((_n_r_4875++))){d::check_cancel();double _n_fade_4876=_n_smooth_4680((_n_H_4667+4.0),(_n_H_4667-6.0),(_n_r_4875+0.5));
{double _n_x_4877=0.0;
for(;d::truth((_n_x_4877<_n_W_4666));(void)((_n_x_4877++))){d::check_cancel();double _n_k_4878=((_n_r_4875*_n_W_4666)+_n_x_4877);
double _n_m_4879=d::at(this->_n_mat_4704,_n_k_4878);
(void)(this->_n_halftone_4697(_n_k_4878,_n_r_4875,_n_x_4877,d::at(this->_n_FR_4710,_n_k_4878),d::at(this->_n_FG_4711,_n_k_4878),d::at(this->_n_FB_4712,_n_k_4878),(d::truth((_n_m_4879==_n_SKY_4674))?0.04:0.06),(d::truth((_n_m_4879==_n_SEA_4675))?_n_fade_4876:1.0),_n_color_4803));
}}
}}
d::Array<d::String,false> _n_lines_4880=d::Array<d::String,false>{};
{double _n_r_4881=0.0;
for(;d::truth((_n_r_4881<_n_H_4667));(void)((_n_r_4881++))){d::check_cancel();(void)(_n_lines_4880.push(d::join(this->_n_out_4694.slice((_n_r_4881*_n_W_4666),((_n_r_4881+1.0)*_n_W_4666)),d::String(u""))));
}}
return d::join(_n_lines_4880,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("cloud-sea").cols)*ascii::catalog_meta("cloud-sea").rows);auto _env=std::make_shared<_n_Record_4882>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &cloud_sea_meta(){return catalog_meta("cloud-sea");}
std::unique_ptr<Piece> make_cloud_sea(const AsciiPieceOptions &o){return std::make_unique<Native_cloud_sea>(o);}
}
