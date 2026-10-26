// Direct, statically typed C++ from src/pieces/fern.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_9754;
struct _n_Record_9847;
struct _n_Record_9754{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_9754> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9754>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_9847{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_9847> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9847>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_9761(double _a0);
std::shared_ptr<_n_Record_9754> _n_meta_9753=[](){return ([&](){auto _n_object_9850=std::make_shared<_n_Record_9754>();_n_object_9850->_p_name=d::String(u"fern");_n_object_9850->_p_category=d::String(u"nature");_n_object_9850->_p_note=d::String(u"barnsley's fern filling in point by point, then swaying");_n_object_9850->_p_cols=44.0;_n_object_9850->_p_rows=30.0;_n_object_9850->_p_fps=20.0;return _n_object_9850;})();}();
const double _n_N_9755=[](){return 36000.0;}();
const double _n_GROW_9756=[](){return 3.0;}();
const double _n_SLIM_9757=[](){return 0.55;}();
const double _n_TAU_9758=[](){return (ascii::PI*2.0);}();
d::Array<std::array<double,7>,false> _n_MAPS_9759=[](){return d::Array<std::array<double,7>,false>{std::array<double,7>{0.0,0.0,0.0,0.16,0.0,0.0,0.01},std::array<double,7>{0.85,0.04,(-d::number(0.04)),0.85,0.0,1.6,0.85},std::array<double,7>{(0.2*_n_SLIM_9757),(-d::number(0.26)),(0.23*_n_SLIM_9757),0.22,0.0,1.6,0.925},std::array<double,7>{((-d::number(0.15))*_n_SLIM_9757),0.28,(0.26*_n_SLIM_9757),0.24,0.0,0.44,1.0}};}();
const double _n_SHIFT_9760=[](){return (-d::number(0.25));}();
std::function<double()> _n_mulberry32_9761(double _a0){double _n_a_9781=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_9781=double(d::i32((_n_a_9781+1831565813.0))|d::i32(0.0))));
double _n_t_9782=d::imul(double(d::i32(_n_a_9781)^d::i32(double(d::u32(_n_a_9781)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_9781)));
(void)((_n_t_9782=double(d::i32((_n_t_9782+d::imul(double(d::i32(_n_t_9782)^d::i32(double(d::u32(_n_t_9782)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_9782)))))^d::i32(_n_t_9782))));
return (double(d::u32(double(d::i32(_n_t_9782)^d::i32(double(d::u32(_n_t_9782)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

struct Native_fern final:ascii::Piece{
double _n_cols_9762{};
double _n_rows_9763{};
std::function<double()> _n_rand_9764{};
d::Array<d::Array<double,false>,false> _n_lean_9766{};
d::Array<float,true> _n_px_9767{};
d::Array<float,true> _n_py_9768{};
d::Array<float,true> _n_pl_9769{};
double _n_x_9770{};
double _n_y_9771{};
double _n_k_9772{};
double _n_m_9773{};
d::Array<std::array<double,2>,false> _n_spine_9774{};
double _n_S_9775{};
double _n_ROOT_R_9776{};
double _n_ROOT_C_9777{};
d::Array<float,true> _n_n0_9778{};
d::Array<float,true> _n_sc_9779{};
d::Array<float,true> _n_ss_9780{};
std::function<d::String(double,std::shared_ptr<_n_Record_9847>)> _render;
double _n_axis_9765(double _a0,double _a1){double _n_k_9783=_a0;
double _n_m_9784=_a1;
{
auto _n_binding_9893=(d::truth((_n_m_9784==0.0))?d::Array<double,false>{0.0,1.0}:d::Array<double,false>{d::at(d::at(_n_MAPS_9759,_n_m_9784),1.0),d::at(d::at(_n_MAPS_9759,_n_m_9784),3.0)});
double _n_u_9785=d::at(_n_binding_9893,0.0);
double _n_v_9786=d::at(_n_binding_9893,1.0);
{double _n_s_9787=0.0;
for(;d::truth((_n_s_9787<_n_k_9783));(void)((_n_s_9787++))){d::check_cancel();(void)(([&](){auto _n_unpack_9894=d::Array<double,false>{((0.85*_n_u_9785)+(0.04*_n_v_9786)),(((-d::number(0.04))*_n_u_9785)+(0.85*_n_v_9786))};_n_u_9785=d::at(_n_unpack_9894,0.0);_n_v_9786=d::at(_n_unpack_9894,1.0);return _n_unpack_9894;})());
}}
return std::atan2(_n_u_9785,_n_v_9786);

}
}

explicit Native_fern(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_9851=_n_meta_9753;
this->_n_cols_9762=_n_binding_9851->_p_cols;
this->_n_rows_9763=_n_binding_9851->_p_rows;
this->_n_rand_9764=_n_mulberry32_9761(17.0);
this->_n_lean_9766=d::map(d::Array<double,false>{0.0,2.0,3.0},[&]( double _a0) mutable ->d::Array<double,false>{double _n_m_9788=_a0;
return d::Array<double,false>(d::from(61.0,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_k_9790=_a1;
return this->_n_axis_9765(_n_k_9790,_n_m_9788);}));});
this->_n_px_9767=d::Array<float,true>(size_t(_n_N_9755));
this->_n_py_9768=d::Array<float,true>(size_t(_n_N_9755));
this->_n_pl_9769=d::Array<float,true>(size_t(_n_N_9755));
this->_n_x_9770=0.0;
this->_n_y_9771=0.0;
this->_n_k_9772=0.0;
this->_n_m_9773=0.0;
{double _n_i_9791=(-d::number(20.0));
for(;d::truth((_n_i_9791<_n_N_9755));(void)((_n_i_9791++))){d::check_cancel();double _n_p_9792=this->_n_rand_9764();
double _n_j_9793=d::findIndex(_n_MAPS_9759,[&]( std::array<double,7> _a0) mutable ->bool{auto&& _n_q_9794=_a0;
return (_n_p_9792<d::at(_n_q_9794,6.0));});
auto _n_binding_9852=d::at(_n_MAPS_9759,_n_j_9793);
double _n_a_9795=d::at(_n_binding_9852,0.0);
double _n_b_9796=d::at(_n_binding_9852,1.0);
double _n_c_9797=d::at(_n_binding_9852,2.0);
double _n_d_9798=d::at(_n_binding_9852,3.0);
double _n_e_9799=d::at(_n_binding_9852,4.0);
double _n_f_9800=d::at(_n_binding_9852,5.0);
(void)(([&](){auto _n_unpack_9853=d::Array<double,false>{(((_n_a_9795*this->_n_x_9770)+(_n_b_9796*this->_n_y_9771))+_n_e_9799),(((_n_c_9797*this->_n_x_9770)+(_n_d_9798*this->_n_y_9771))+_n_f_9800)};this->_n_x_9770=d::at(_n_unpack_9853,0.0);this->_n_y_9771=d::at(_n_unpack_9853,1.0);return _n_unpack_9853;})());
if(d::truth((_n_j_9793==1.0))){d::check_cancel();(void)((this->_n_k_9772=d::minimum({60.0,(this->_n_k_9772+1.0)})));
}else {d::check_cancel();(void)(((this->_n_k_9772=0.0),(this->_n_m_9773=_n_j_9793)));
}
if(d::truth((_n_i_9791>=0.0))){d::check_cancel();(void)(((([&](){auto&& _n_array_9854=this->_n_px_9767;auto _n_index_9855=_n_i_9791;auto _n_value_9856=(this->_n_x_9770+_n_SHIFT_9760);d::put(_n_array_9854,_n_index_9855,_n_value_9856);return _n_value_9856;})(),([&](){auto&& _n_array_9857=this->_n_py_9768;auto _n_index_9858=_n_i_9791;auto _n_value_9859=this->_n_y_9771;d::put(_n_array_9857,_n_index_9858,_n_value_9859);return _n_value_9859;})()),([&](){auto&& _n_array_9860=this->_n_pl_9769;auto _n_index_9861=_n_i_9791;auto _n_value_9862=d::at(d::at(this->_n_lean_9766,(d::truth(this->_n_m_9773)?(this->_n_m_9773-1.0):0.0)),this->_n_k_9772);d::put(_n_array_9860,_n_index_9861,_n_value_9862);return _n_value_9862;})()));
}
}}
this->_n_spine_9774=d::Array<std::array<double,2>,false>{std::array<double,2>{_n_SHIFT_9760,0.0}};
{double _n_k_9801=0.0;
auto _n_binding_9863=d::Array<double,false>{0.0,0.0};
double _n_sx_9802=d::at(_n_binding_9863,0.0);
double _n_sy_9803=d::at(_n_binding_9863,1.0);
for(;d::truth((_n_k_9801<60.0));(void)((_n_k_9801++))){d::check_cancel();(void)(([&](){auto _n_unpack_9864=d::Array<double,false>{((0.85*_n_sx_9802)+(0.04*_n_sy_9803)),((((-d::number(0.04))*_n_sx_9802)+(0.85*_n_sy_9803))+1.6)};_n_sx_9802=d::at(_n_unpack_9864,0.0);_n_sy_9803=d::at(_n_unpack_9864,1.0);return _n_unpack_9864;})());
(void)(this->_n_spine_9774.push(std::array<double,2>{(_n_sx_9802+_n_SHIFT_9760),_n_sy_9803}));
}}
this->_n_S_9775=((this->_n_rows_9763-3.8)/10.0);
this->_n_ROOT_R_9776=(this->_n_rows_9763-1.5);
this->_n_ROOT_C_9777=(this->_n_cols_9762/2.0);
this->_n_n0_9778=d::Array<float,true>(size_t((this->_n_cols_9762*this->_n_rows_9763)));
this->_n_sc_9779=d::Array<float,true>(size_t((this->_n_cols_9762*this->_n_rows_9763)));
this->_n_ss_9780=d::Array<float,true>(size_t((this->_n_cols_9762*this->_n_rows_9763)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_9847> _a1) mutable ->d::String{double _n_t_9804=_a0;
{
double _n_g_9805=d::minimum({1.0,(_n_t_9804/_n_GROW_9756)});
double _n_e_9806=((_n_g_9805*_n_g_9805)*(3.0-(2.0*_n_g_9805)));
double _n_n_9807=std::floor((_n_N_9755*(0.05+(0.95*_n_e_9806))));
double _n_scale_9808=(this->_n_S_9775*(0.8+(0.2*_n_e_9806)));
double _n_calm_9809=([&](){auto _n_argument_9865=1.0;auto _n_argument_9866=d::maximum({0.0,((_n_t_9804-(_n_GROW_9756*0.5))/_n_GROW_9756)});return d::minimum({_n_argument_9865,_n_argument_9866});})();
double _n_sway_9810=(_n_calm_9809*([&](){auto _n_left_9867=(0.07*std::sin(((_n_TAU_9758*_n_t_9804)/5.0)));auto _n_right_9868=(0.02*std::sin((((_n_TAU_9758*_n_t_9804)/2.0)+1.0)));return (_n_left_9867+_n_right_9868);})());
auto _n_bend_9811=[&]( double _a0) mutable ->double{double _n_v0_9812=_a0;
{
double _n_h_9813=(_n_v0_9812/10.0);
return ([&](){auto _n_left_9869=(((_n_sway_9810*_n_h_9813)*std::sqrt(_n_h_9813))*1.6);auto _n_right_9870=(((0.012*_n_calm_9809)*_n_h_9813)*std::sin(((_n_t_9804*4.0)+(_n_v0_9812*3.0))));return (_n_left_9869+_n_right_9870);})();

}
};
auto _n_place_9814=[&]( double _a0,double _a1) mutable ->d::Array<double,false>{double _n_u0_9815=_a0;
double _n_v0_9816=_a1;
{
double _n_a_9817=_n_bend_9811(_n_v0_9816);
double _n_ca_9818=std::cos(_n_a_9817);
double _n_sa_9819=std::sin(_n_a_9817);
return d::Array<double,false>{(this->_n_ROOT_C_9777+((((_n_u0_9815*_n_ca_9818)+(_n_v0_9816*_n_sa_9819))*2.0)*_n_scale_9808)),(this->_n_ROOT_R_9776-((((-d::number(_n_u0_9815))*_n_sa_9819)+(_n_v0_9816*_n_ca_9818))*_n_scale_9808))};

}
};
(void)(((this->_n_n0_9778.fill(0.0),this->_n_sc_9779.fill(0.0)),this->_n_ss_9780.fill(0.0)));
{double _n_i_9820=0.0;
for(;d::truth((_n_i_9820<_n_n_9807));(void)((_n_i_9820++))){d::check_cancel();auto _n_binding_9871=_n_place_9814(d::at(this->_n_px_9767,_n_i_9820),d::at(this->_n_py_9768,_n_i_9820));
double _n_X_9821=d::at(_n_binding_9871,0.0);
double _n_Y_9822=d::at(_n_binding_9871,1.0);
double _n_c_9823=std::floor(_n_X_9821);
double _n_r_9824=std::floor(_n_Y_9822);
if((((d::truth((_n_c_9823<0.0))||d::truth((_n_c_9823>=this->_n_cols_9762)))||d::truth((_n_r_9824<0.0)))||d::truth((_n_r_9824>=this->_n_rows_9763)))){d::check_cancel();continue;
}
double _n_k_9825=(_n_c_9823+(_n_r_9824*this->_n_cols_9762));
double _n_a_9826=(2.0*(d::at(this->_n_pl_9769,_n_i_9820)+_n_bend_9811(d::at(this->_n_py_9768,_n_i_9820))));
(void)(((([&](){auto&& _n_array_9872=this->_n_n0_9778;auto _n_index_9873=_n_k_9825;double _n_old_9874=d::number(d::at(_n_array_9872,_n_index_9873));d::put(_n_array_9872,_n_index_9873,_n_old_9874+(1.0));return _n_old_9874;})(),([&](){auto&& _n_array_9875=this->_n_sc_9779;auto _n_index_9876=_n_k_9825;auto _n_value_9877=(d::at(_n_array_9875,_n_index_9876)+std::cos(_n_a_9826));d::put(_n_array_9875,_n_index_9876,_n_value_9877);return _n_value_9877;})()),([&](){auto&& _n_array_9878=this->_n_ss_9780;auto _n_index_9879=_n_k_9825;auto _n_value_9880=(d::at(_n_array_9878,_n_index_9879)+std::sin(_n_a_9826));d::put(_n_array_9878,_n_index_9879,_n_value_9880);return _n_value_9880;})()));
}}
double _n_full_9827=(0.6+(0.4*std::sqrt((_n_n_9807/_n_N_9755))));
d::Array<d::String,false> _n_out_9828=d::Array<d::String,false>(size_t((this->_n_cols_9762*this->_n_rows_9763))).fill(d::String(u" "));
{double _n_k_9829=0.0;
for(;d::truth((_n_k_9829<(this->_n_cols_9762*this->_n_rows_9763)));(void)((_n_k_9829++))){d::check_cancel();if(d::truth((d::at(this->_n_n0_9778,_n_k_9829)<(2.0*_n_full_9827)))){d::check_cancel();continue;
}
double _n_a_9830=(0.5*std::atan2(d::at(this->_n_ss_9780,_n_k_9829),d::at(this->_n_sc_9779,_n_k_9829)));
double _n_sure_9831=(d::hypot(std::initializer_list<double>{d::at(this->_n_ss_9780,_n_k_9829),d::at(this->_n_sc_9779,_n_k_9829)})/d::at(this->_n_n0_9778,_n_k_9829));
(void)(([&](){auto&& _n_array_9881=_n_out_9828;auto _n_index_9882=_n_k_9829;auto _n_value_9883=((d::truth((d::at(this->_n_n0_9778,_n_k_9829)<(6.0*_n_full_9827)))||d::truth((_n_sure_9831<0.5)))?d::String(u"."):(d::truth((std::fabs(_n_a_9830)<0.33))?d::String(u"|"):(d::truth((std::fabs(_n_a_9830)>1.25))?d::String(u"-"):(d::truth((_n_a_9830>0.0))?d::String(u"/"):d::String(u"\\")))));d::put(_n_array_9881,_n_index_9882,_n_value_9883);return _n_value_9883;})());
}}
d::Array<d::Array<double,false>,false> _n_pts_9832=d::map(this->_n_spine_9774,[&]( std::array<double,2> _a0) mutable ->d::Array<double,false>{auto _n_binding_9884=_a0;
double _n_u0_9833=d::at(_n_binding_9884,0.0);
double _n_v0_9834=d::at(_n_binding_9884,1.0);
return _n_place_9814(_n_u0_9833,_n_v0_9834);});
{double _n_i_9835=1.0;
for(;d::truth((_n_i_9835<double(_n_pts_9832.size())));(void)((_n_i_9835++))){d::check_cancel();auto _n_binding_9885=d::at(_n_pts_9832,(_n_i_9835-1.0));
double _n_x0_9836=d::at(_n_binding_9885,0.0);
double _n_y0_9837=d::at(_n_binding_9885,1.0);
auto _n_binding_9886=d::at(_n_pts_9832,_n_i_9835);
double _n_x1_9838=d::at(_n_binding_9886,0.0);
double _n_y1_9839=d::at(_n_binding_9886,1.0);
double _n_s_9840=((_n_x1_9838-_n_x0_9836)/((_n_y0_9837-_n_y1_9839)+1e-9));
{double _n_r_9841=std::ceil((_n_y1_9839-0.5));
for(;d::truth((_n_r_9841<=std::floor((_n_y0_9837-0.5))));(void)((_n_r_9841++))){d::check_cancel();double _n_c_9842=std::floor((_n_x0_9836+(_n_s_9840*((_n_y0_9837-_n_r_9841)-0.5))));
if((((d::truth((_n_c_9842>=0.0))&&d::truth((_n_c_9842<this->_n_cols_9762)))&&d::truth((_n_r_9841>=0.0)))&&d::truth((_n_r_9841<this->_n_rows_9763)))){d::check_cancel();(void)(([&](){auto&& _n_array_9887=_n_out_9828;auto _n_index_9888=(_n_c_9842+(_n_r_9841*this->_n_cols_9762));auto _n_value_9889=(d::truth((_n_s_9840<0.4))?d::String(u"|"):(d::truth((_n_s_9840<1.4))?d::String(u"("):d::String(u"/")));d::put(_n_array_9887,_n_index_9888,_n_value_9889);return _n_value_9889;})());
}
}}
}}
double _n_rc_9843=std::floor(d::at(d::at(_n_pts_9832,0.0),0.0));
{double _n_c_9844=(_n_rc_9843-6.0);
for(;d::truth((_n_c_9844<=(_n_rc_9843+6.0)));(void)((_n_c_9844++))){d::check_cancel();if(d::truth((d::at(_n_out_9828,(_n_c_9844+((this->_n_rows_9763-1.0)*this->_n_cols_9762)))==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_9890=_n_out_9828;auto _n_index_9891=(_n_c_9844+((this->_n_rows_9763-1.0)*this->_n_cols_9762));auto _n_value_9892=(d::truth((std::fabs((_n_c_9844-_n_rc_9843))>4.0))?d::String(u"."):d::String(u"_"));d::put(_n_array_9890,_n_index_9891,_n_value_9892);return _n_value_9892;})());
}
}}
d::Array<d::String,false> _n_lines_9845=d::Array<d::String,false>{};
{double _n_r_9846=0.0;
for(;d::truth((_n_r_9846<this->_n_rows_9763));(void)((_n_r_9846++))){d::check_cancel();(void)(_n_lines_9845.push(d::join(_n_out_9828.slice((_n_r_9846*this->_n_cols_9762),((_n_r_9846+1.0)*this->_n_cols_9762)),d::String(u""))));
}}
return d::join(_n_lines_9845,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fern").cols)*ascii::catalog_meta("fern").rows);auto _env=std::make_shared<_n_Record_9847>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fern_meta(){return catalog_meta("fern");}
std::unique_ptr<Piece> make_fern(const AsciiPieceOptions &o){return std::make_unique<Native_fern>(o);}
}
