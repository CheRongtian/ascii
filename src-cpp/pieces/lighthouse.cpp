// Direct, statically typed C++ from src/pieces/lighthouse.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19422;
struct _n_Record_19560;
struct _n_Record_19422{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19422> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19422>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_19560{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19560> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19560>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_19437(double _a0,double _a1);
std::shared_ptr<_n_Record_19422> _n_meta_19421=[](){return ([&](){auto _n_object_19563=std::make_shared<_n_Record_19422>();_n_object_19563->_p_name=d::String(u"lighthouse");_n_object_19563->_p_category=d::String(u"objects");_n_object_19563->_p_note=d::String(u"a beam sweeping over night sea from a lighthouse on rocks");_n_object_19563->_p_cols=64.0;_n_object_19563->_p_rows=30.0;_n_object_19563->_p_fps=20.0;return _n_object_19563;})();}();
const d::String _n_RAMP_19423=[](){return d::String(u" .:-=+*#%@");}();
const double _n_TC_19424=[](){return 32.0;}();
const double _n_LAMP_19425=[](){return 5.0;}();
const double _n_HORIZON_19426=[](){return 19.0;}();
const double _n_PERIOD_19427=[](){return 8.0;}();
const double _n_TOP_19428=[](){return 9.0;}();
const double _n_FOOT_19429=[](){return 24.0;}();
const double _n_WT_19430=[](){return 2.1;}();
const double _n_WB_19431=[](){return 3.1;}();
const double _n_BAND_19432=[](){return 3.0;}();
d::Array<std::array<double,5>,false> _n_ROCKS_19433=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{(-d::number(3.9)),21.1,2.3,1.7,99.0},std::array<double,5>{3.9,20.9,2.4,1.8,99.0},std::array<double,5>{(-d::number(6.6)),22.9,2.3,1.6,23.9},std::array<double,5>{6.7,22.7,2.2,1.5,23.6},std::array<double,5>{(-d::number(1.7)),23.5,2.7,1.8,24.8},std::array<double,5>{3.1,23.8,2.5,1.7,25.1},std::array<double,5>{(-d::number(9.3)),24.5,1.5,0.9,25.0},std::array<double,5>{9.2,24.2,1.3,0.8,24.7}};}();
const double _n_BEHIND_19434=[](){return 2.0;}();
d::Array<d::Array<double,false>,false> _n_SURF_19435=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{6.0,(-d::number(1.0)),0.0},d::Array<double,false>{7.0,1.0,0.45},d::Array<double,false>{3.0,1.0,0.8},d::Array<double,false>{2.0,(-d::number(1.0)),0.3},d::Array<double,false>{4.0,0.0,0.62},d::Array<double,false>{5.0,0.0,0.15}};}();
const double _n_SWELL_19436=[](){return 3.2;}();
double _n_hash_19437(double _a0,double _a1){double _n_x_19448=_a0;
double _n_y_19449=_a1;
{
double _n_h_19450=([&](){auto _n_left_19564=d::imul(_n_x_19448,668265261.0);auto _n_right_19565=d::imul(_n_y_19449,374761393.0);return double(d::i32(_n_left_19564)^d::i32(_n_right_19565));})();
(void)((_n_h_19450=d::imul(double(d::i32(_n_h_19450)^d::i32(double(d::u32(_n_h_19450)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_19450)^d::i32(double(d::u32(_n_h_19450)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_lighthouse final:ascii::Piece{
double _n_cols_19438{};
double _n_rows_19439{};
double _n_N_19440{};
d::Array<float,true> _n_still_19441{};
d::Array<int8_t,true> _n_rockAt_19442{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_stars_19444{};
d::Array<d::Array<double,false>,false> _n_surf_19445{};
d::Array<d::String,false> _n_BEAM_19447{};
std::function<d::String(double,std::shared_ptr<_n_Record_19560>)> _render;
double _n_moon_19443(double _a0,double _a1,double _a2){double _n_u_19451=_a0;
double _n_v_19452=_a1;
double _n_nz_19453=_a2;
return d::maximum({0.0,((((-d::number(0.5))*_n_u_19451)-(0.45*_n_v_19452))+(0.75*_n_nz_19453))});}

double _n_beamAt_19446(double _a0,double _a1,double _a2,double _a3){double _n_dx_19488=_a0;
double _n_dy_19489=_a1;
double _n_c_19490=_a2;
double _n_s_19491=_a3;
{
double _n_fore_19492=([&](){auto _n_argument_19675=std::fabs(_n_c_19490);auto _n_argument_19676=0.1;return d::maximum({_n_argument_19675,_n_argument_19676});})();
double _n_ax_19493=([&]()->double{auto _n_logical_19677=d::sign(_n_c_19490);return d::truth(_n_logical_19677)?_n_logical_19677:1.0;})();
double _n_ay_19494=d::minimum({0.35,(0.02/_n_fore_19492)});
double _n_m_19495=d::hypot(std::initializer_list<double>{_n_ax_19493,_n_ay_19494});
double _n_a_19496=(((_n_dx_19488*_n_ax_19493)+(_n_dy_19489*_n_ay_19494))/_n_m_19495);
if(d::truth((_n_a_19496<=0.0))){d::check_cancel();return 0.0;
}
double _n_across_19497=(std::fabs(((_n_dx_19488*_n_ay_19494)-(_n_dy_19489*_n_ax_19493)))/_n_m_19495);
double _n_half_19498=(0.5+(_n_a_19496*(0.11/_n_fore_19492)));
return (([&](){auto _n_left_19678=([&](){auto _n_left_19680=std::exp((-d::number(std::pow((_n_across_19497/_n_half_19498),4.0))));auto _n_right_19681=std::exp(((-d::number(_n_a_19496))/(22.0*_n_fore_19492)));return (_n_left_19680*_n_right_19681);})();auto _n_right_19679=d::minimum({1.6,(1.0/std::pow(_n_fore_19492,0.3))});return (_n_left_19678*_n_right_19679);})()*(d::truth((_n_s_19491<0.0))?0.75:1.0));

}
}

explicit Native_lighthouse(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_19566=_n_meta_19421;
this->_n_cols_19438=_n_binding_19566->_p_cols;
this->_n_rows_19439=_n_binding_19566->_p_rows;
this->_n_N_19440=(this->_n_cols_19438*this->_n_rows_19439);
this->_n_still_19441=d::Array<float,true>(size_t(this->_n_N_19440)).fill((-d::number(1.0)));
this->_n_rockAt_19442=d::Array<int8_t,true>(size_t(this->_n_N_19440)).fill((-d::number(1.0)));
{double _n_r_19454=0.0;
for(;d::truth((_n_r_19454<this->_n_rows_19439));(void)((_n_r_19454++))){d::check_cancel();{double _n_c_19455=0.0;
for(;d::truth((_n_c_19455<this->_n_cols_19438));(void)((_n_c_19455++))){d::check_cancel();double _n_k_19456=((_n_r_19454*this->_n_cols_19438)+_n_c_19455);
double _n_x_19457=((_n_c_19455-_n_TC_19424)/2.0);
double _n_y_19458=(_n_r_19454+0.5);
auto _n_boulder_19459=[&]( double _a0) mutable ->bool{double _n_i_19460=_a0;
{
auto _n_binding_19567=d::at(_n_ROCKS_19433,_n_i_19460);
double _n_bx_19461=d::at(_n_binding_19567,0.0);
double _n_by_19462=d::at(_n_binding_19567,1.0);
double _n_rx_19463=d::at(_n_binding_19567,2.0);
double _n_ry_19464=d::at(_n_binding_19567,3.0);
double _n_wl_19465=d::at(_n_binding_19567,4.0);
double _n_u_19466=((_n_x_19457-_n_bx_19461)/_n_rx_19463);
double _n_v_19467=((_n_y_19458-_n_by_19462)/_n_ry_19464);
double _n_q_19468=((_n_u_19466*_n_u_19466)+(_n_v_19467*_n_v_19467));
if((d::truth((_n_q_19468>=1.0))||d::truth((_n_y_19458>(_n_wl_19465+0.5))))){d::check_cancel();return false;
}
double _n_nz_19469=std::sqrt((1.0-_n_q_19468));
(void)(([&](){auto&& _n_array_19568=this->_n_still_19441;auto _n_index_19569=_n_k_19456;auto _n_value_19570=([&](){auto _n_left_19571=([&](){auto _n_left_19573=(0.06+(0.86*this->_n_moon_19443(_n_u_19466,_n_v_19467,_n_nz_19469)));auto _n_right_19574=d::minimum({1.0,(0.15+(_n_nz_19469*1.8))});return (_n_left_19573*_n_right_19574);})();auto _n_right_19572=(0.06*(_n_hash_19437(_n_c_19455,_n_r_19454)-0.5));return (_n_left_19571+_n_right_19572);})();d::put(_n_array_19568,_n_index_19569,_n_value_19570);return _n_value_19570;})());
(void)(([&](){auto&& _n_array_19575=this->_n_rockAt_19442;auto _n_index_19576=_n_k_19456;auto _n_value_19577=_n_i_19460;d::put(_n_array_19575,_n_index_19576,_n_value_19577);return _n_value_19577;})());
return true;

}
};
{double _n_i_19470=0.0;
for(;d::truth((_n_i_19470<_n_BEHIND_19434));(void)((_n_i_19470++))){d::check_cancel();(void)(_n_boulder_19459(_n_i_19470));
}}
if((d::truth((_n_r_19454>=_n_TOP_19428))&&d::truth((_n_r_19454<=_n_FOOT_19429)))){d::check_cancel();double _n_w_19471=(_n_WT_19430+(((_n_WB_19431-_n_WT_19430)*(_n_r_19454-_n_TOP_19428))/(_n_FOOT_19429-_n_TOP_19428)));
if(d::truth((std::fabs(_n_x_19457)<=_n_w_19471))){d::check_cancel();double _n_u_19472=(_n_x_19457/(_n_w_19471+0.25));
double _n_nz_19473=std::sqrt((1.0-(_n_u_19472*_n_u_19472)));
bool _n_dark_19474=(d::mod(std::floor(((_n_r_19454-_n_TOP_19428)/_n_BAND_19432)),2.0)==1.0);
double _n_v_19475=((d::truth(_n_dark_19474)?0.24:0.92)*(0.2+(0.8*this->_n_moon_19443(_n_u_19472,0.0,_n_nz_19473))));
if(((d::truth((_n_r_19454>=(_n_FOOT_19429-3.0)))&&d::truth((_n_r_19454<_n_FOOT_19429)))&&d::truth((std::fabs(_n_x_19457)<0.6)))){d::check_cancel();(void)((_n_v_19475=0.03));
}
if((d::truth((_n_r_19454==((_n_TOP_19428+_n_BAND_19432)+1.0)))&&d::truth((_n_x_19457==0.0)))){d::check_cancel();(void)((_n_v_19475=0.03));
}
(void)(([&](){auto&& _n_array_19578=this->_n_still_19441;auto _n_index_19579=_n_k_19456;auto _n_value_19580=_n_v_19475;d::put(_n_array_19578,_n_index_19579,_n_value_19580);return _n_value_19580;})());
(void)(([&](){auto&& _n_array_19581=this->_n_rockAt_19442;auto _n_index_19582=_n_k_19456;auto _n_value_19583=(-d::number(1.0));d::put(_n_array_19581,_n_index_19582,_n_value_19583);return _n_value_19583;})());
}
}
if((d::truth((_n_r_19454==(_n_TOP_19428-2.0)))&&d::truth((std::fabs(_n_x_19457)<=2.9)))){d::check_cancel();(void)(([&](){auto&& _n_array_19584=this->_n_still_19441;auto _n_index_19585=_n_k_19456;auto _n_value_19586=(d::truth((std::fabs(_n_x_19457)>2.6))?0.55:(d::truth(d::mod((_n_c_19455-_n_TC_19424),2.0))?0.2:(0.6-(0.25*(_n_x_19457/3.0)))));d::put(_n_array_19584,_n_index_19585,_n_value_19586);return _n_value_19586;})());
}
if((d::truth((_n_r_19454==(_n_TOP_19428-1.0)))&&d::truth((std::fabs(_n_x_19457)<=3.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_19587=this->_n_still_19441;auto _n_index_19588=_n_k_19456;auto _n_value_19589=(0.45*(0.25+(0.75*([&](){auto _n_argument_19590=(_n_x_19457/3.2);auto _n_argument_19591=0.3;auto _n_argument_19592=std::sqrt((1.0-std::pow((_n_x_19457/3.2),2.0)));return this->_n_moon_19443(_n_argument_19590,_n_argument_19591,_n_argument_19592);})())));d::put(_n_array_19587,_n_index_19588,_n_value_19589);return _n_value_19589;})());
}
if((d::truth((_n_r_19454>=(_n_LAMP_19425-3.0)))&&d::truth((_n_r_19454<=(_n_LAMP_19425-2.0))))){d::check_cancel();double _n_rw_19476=(d::truth((_n_r_19454==(_n_LAMP_19425-2.0)))?1.85:1.15);
if(d::truth((std::fabs(_n_x_19457)<=_n_rw_19476))){d::check_cancel();double _n_u_19477=(_n_x_19457/(_n_rw_19476+0.3));
(void)(([&](){auto&& _n_array_19593=this->_n_still_19441;auto _n_index_19594=_n_k_19456;auto _n_value_19595=(0.12+(0.6*([&](){auto _n_argument_19596=_n_u_19477;auto _n_argument_19597=(-d::number(0.4));auto _n_argument_19598=std::sqrt((1.0-(_n_u_19477*_n_u_19477)));return this->_n_moon_19443(_n_argument_19596,_n_argument_19597,_n_argument_19598);})()));d::put(_n_array_19593,_n_index_19594,_n_value_19595);return _n_value_19595;})());
}
}
if((d::truth((_n_r_19454==(_n_LAMP_19425-4.0)))&&d::truth((_n_x_19457==0.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_19599=this->_n_still_19441;auto _n_index_19600=_n_k_19456;auto _n_value_19601=0.5;d::put(_n_array_19599,_n_index_19600,_n_value_19601);return _n_value_19601;})());
}
{double _n_i_19478=_n_BEHIND_19434;
for(;d::truth((_n_i_19478<double(_n_ROCKS_19433.size())));(void)((_n_i_19478++))){d::check_cancel();(void)(_n_boulder_19459(_n_i_19478));
}}
}}
}}
this->_n_stars_19444=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
{double _n_i_19479=0.0;
for(;d::truth((_n_i_19479<24.0));(void)((_n_i_19479++))){d::check_cancel();double _n_c_19480=std::floor((_n_hash_19437(_n_i_19479,1.0)*this->_n_cols_19438));
double _n_r_19481=std::floor((_n_hash_19437(_n_i_19479,2.0)*(_n_HORIZON_19426-2.0)));
if((d::truth((d::at(this->_n_still_19441,((_n_r_19481*this->_n_cols_19438)+_n_c_19480))<0.0))&&d::truth((std::fabs((_n_c_19480-_n_TC_19424))>4.0)))){d::check_cancel();(void)(this->_n_stars_19444.push(std::make_shared<std::tuple<double,d::String>>(((_n_r_19481*this->_n_cols_19438)+_n_c_19480),(d::truth((_n_hash_19437(_n_i_19479,3.0)<0.2))?d::String(u"*"):(d::truth((_n_hash_19437(_n_i_19479,3.0)<0.6))?d::String(u"."):d::String(u"·"))))));
}
}}
this->_n_surf_19445=d::map(_n_SURF_19435,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{auto _n_binding_19602=_a0;
double _n_i_19482=d::at(_n_binding_19602,0.0);
double _n_side_19483=d::at(_n_binding_19602,1.0);
double _n_ph_19484=d::at(_n_binding_19602,2.0);
{
auto _n_binding_19603=d::at(_n_ROCKS_19433,_n_i_19482);
double _n_bx_19485=d::at(_n_binding_19603,0.0);
double _n_rx_19486=d::at(_n_binding_19603,2.0);
double _n_wl_19487=d::at(_n_binding_19603,4.0);
return d::Array<double,false>{(_n_TC_19424+(2.0*(_n_bx_19485+((_n_rx_19486*_n_side_19483)*0.95)))),(_n_wl_19487-0.2),_n_side_19483,_n_ph_19484};

}
});
this->_n_BEAM_19447=d::Array<d::String,false>{d::String(u" .:-=+*#"),d::String(u" ..::--=")};
_render=[=]( double _a0,std::shared_ptr<_n_Record_19560> _a1) mutable ->d::String{double _n_t_19499=_a0;
auto _n_binding_19606=(d::present(_a1)?_a1:([&](){auto _n_object_19605=std::make_shared<_n_Record_19560>();return _n_object_19605;})());
bool _n_paper_19500=(d::present(_n_binding_19606->_p_paper)?d::read(_n_binding_19606->_p_paper):false);
{
double _n_th_19501=((-d::number(0.35))+(((2.0*ascii::PI)*_n_t_19499)/_n_PERIOD_19427));
double _n_c_19502=std::cos(_n_th_19501);
double _n_s_19503=std::sin(_n_th_19501);
double _n_face_19504=std::pow(d::maximum({0.0,_n_s_19503}),10.0);
d::Array<d::String,false> _n_out_19505=d::Array<d::String,false>(size_t(this->_n_N_19440)).fill(d::String(u" "));
d::Array<float,true> _n_light_19506=d::Array<float,true>(size_t(this->_n_cols_19438));
d::String _n_ramp_19507=d::at(this->_n_BEAM_19447,(d::truth(_n_paper_19500)?1.0:0.0));
{double _n_r_19508=0.0;
for(;d::truth((_n_r_19508<this->_n_rows_19439));(void)((_n_r_19508++))){d::check_cancel();{double _n_cc_19509=0.0;
for(;d::truth((_n_cc_19509<this->_n_cols_19438));(void)((_n_cc_19509++))){d::check_cancel();double _n_k_19510=((_n_r_19508*this->_n_cols_19438)+_n_cc_19509);
double _n_dx_19511=((_n_cc_19509-_n_TC_19424)/2.0);
double _n_dy_19512=((_n_r_19508+0.5)-(_n_LAMP_19425+0.5));
double _n_glare_19513=(std::exp((-d::number(std::pow((d::hypot(std::initializer_list<double>{_n_dx_19511,_n_dy_19512})/(1.2+(2.2*_n_face_19504))),2.0))))*(0.5+(1.2*_n_face_19504)));
if(d::truth((_n_r_19508<_n_HORIZON_19426))){d::check_cancel();double _n_b_19514=(this->_n_beamAt_19446(_n_dx_19511,_n_dy_19512,_n_c_19502,_n_s_19503)+_n_glare_19513);
if(d::truth((_n_r_19508==_n_LAMP_19425))){d::check_cancel();(void)(([&](){auto&& _n_array_19607=_n_light_19506;auto _n_index_19608=_n_cc_19509;auto _n_value_19609=_n_b_19514;d::put(_n_array_19607,_n_index_19608,_n_value_19609);return _n_value_19609;})());
}
if(d::truth((d::at(this->_n_still_19441,_n_k_19510)>=0.0))){d::check_cancel();continue;
}
double _n_i_19515=([&](){auto _n_argument_19610=7.0;auto _n_argument_19611=std::floor(((_n_b_19514*6.0)+(0.35*_n_hash_19437(_n_cc_19509,_n_r_19508))));return d::minimum({_n_argument_19610,_n_argument_19611});})();
if(d::truth((_n_i_19515>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_19612=_n_out_19505;auto _n_index_19613=_n_k_19510;auto _n_value_19614=d::at(_n_ramp_19507,_n_i_19515);d::put(_n_array_19612,_n_index_19613,_n_value_19614);return _n_value_19614;})());
}
continue;
}
double _n_d_19516=((_n_r_19508-_n_HORIZON_19426)+1.0);
double _n_x_19517=(_n_cc_19509/((3.2/_n_d_19516)+0.6));
double _n_wave_19518=([&](){auto _n_left_19615=std::sin(((((_n_x_19517*0.9)+(_n_d_19516*1.7))-(_n_t_19499*2.2))+(std::sin(((_n_x_19517*0.31)+_n_d_19516))*1.5)));auto _n_right_19616=(0.6*std::sin((((_n_x_19517*0.43)-(_n_d_19516*0.9))+(_n_t_19499*1.3))));return (_n_left_19615+_n_right_19616);})();
double _n_lit_19519=([&](){auto _n_left_19617=d::minimum({1.0,((([&]()->double{auto _n_logical_19619=d::at(_n_light_19506,_n_cc_19509);return d::truth(_n_logical_19619)?_n_logical_19619:0.0;})()*0.9)+(_n_glare_19513*0.5))});auto _n_right_19618=std::exp(((-d::number((_n_d_19516-1.0)))/6.0));return (_n_left_19617*_n_right_19618);})();
if(d::truth((_n_wave_19518>(0.9-(0.5*_n_lit_19519))))){d::check_cancel();(void)(([&](){auto&& _n_array_19620=_n_out_19505;auto _n_index_19621=_n_k_19510;auto _n_value_19622=(d::truth((_n_lit_19519>0.5))?d::String(u"="):(d::truth((_n_lit_19519>0.2))?d::String(u"~"):(d::truth((_n_d_19516<3.0))?d::String(u"-"):d::String(u"~"))));d::put(_n_array_19620,_n_index_19621,_n_value_19622);return _n_value_19622;})());
}else {d::check_cancel();if((d::truth((_n_wave_19518>(0.4-(0.4*_n_lit_19519))))&&d::truth(([&]()->bool{auto _n_logical_19623=(_n_d_19516<3.0);return d::truth(_n_logical_19623)?_n_logical_19623:(_n_lit_19519>0.15);})()))){d::check_cancel();(void)(([&](){auto&& _n_array_19624=_n_out_19505;auto _n_index_19625=_n_k_19510;auto _n_value_19626=(d::truth((_n_d_19516<3.0))?d::String(u"."):d::String(u"-"));d::put(_n_array_19624,_n_index_19625,_n_value_19626);return _n_value_19626;})());
}else {d::check_cancel();if(d::truth((_n_d_19516==1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_19627=_n_out_19505;auto _n_index_19628=_n_k_19510;auto _n_value_19629=d::String(u"_");d::put(_n_array_19627,_n_index_19628,_n_value_19629);return _n_value_19629;})());
}
}
}
}}
}}
for(auto &&_n_item_19630:this->_n_stars_19444){d::check_cancel();auto _n_binding_19631=_n_item_19630;
double _n_k_19520=std::get<0>(*_n_binding_19631);
d::String _n_ch_19521=std::get<1>(*_n_binding_19631);
if(d::truth((d::at(_n_out_19505,_n_k_19520)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_19632=_n_out_19505;auto _n_index_19633=_n_k_19520;auto _n_value_19634=_n_ch_19521;d::put(_n_array_19632,_n_index_19633,_n_value_19634);return _n_value_19634;})());
}
}
d::Array<double,false> _n_swell_19522=d::map(_n_ROCKS_19433,[&]( std::array<double,5> _a0,double _a1) mutable ->double{auto&& _n_b_19523=_a0;
double _n_i_19524=_a1;
return ([&](){auto _n_left_19635=(d::at(_n_b_19523,4.0)+(0.45*std::sin(((((2.0*ascii::PI)*_n_t_19499)/_n_SWELL_19436)+(_n_i_19524*1.9)))));auto _n_right_19636=(0.25*std::sin(((_n_t_19499*1.3)+_n_i_19524)));return (_n_left_19635+_n_right_19636);})();});
{double _n_k_19525=0.0;
for(;d::truth((_n_k_19525<this->_n_N_19440));(void)((_n_k_19525++))){d::check_cancel();double _n_v_19526=d::at(this->_n_still_19441,_n_k_19525);
if(d::truth((_n_v_19526<0.0))){d::check_cancel();continue;
}
if((d::truth((d::at(this->_n_rockAt_19442,_n_k_19525)>=0.0))&&d::truth(((std::floor((_n_k_19525/this->_n_cols_19438))+0.5)>d::at(_n_swell_19522,d::at(this->_n_rockAt_19442,_n_k_19525)))))){d::check_cancel();continue;
}
double _n_i_19527=([&](){auto _n_argument_19637=1.0;auto _n_argument_19638=([&](){auto _n_argument_19639=9.0;auto _n_argument_19640=d::round((_n_v_19526*9.0));return d::minimum({_n_argument_19639,_n_argument_19640});})();return d::maximum({_n_argument_19637,_n_argument_19638});})();
(void)(([&](){auto&& _n_array_19641=_n_out_19505;auto _n_index_19642=_n_k_19525;auto _n_value_19643=d::at(_n_RAMP_19423,(d::truth(_n_paper_19500)?(10.0-_n_i_19527):_n_i_19527));d::put(_n_array_19641,_n_index_19642,_n_value_19643);return _n_value_19643;})());
}}
double _n_glow_19528=(0.75+(0.25*_n_face_19504));
{double _n_r_19529=(_n_LAMP_19425-1.0);
for(;d::truth((_n_r_19529<=(_n_LAMP_19425+1.0)));(void)((_n_r_19529++))){d::check_cancel();{double _n_x_19530=(-d::number(3.0));
for(;d::truth((_n_x_19530<=3.0));(void)((_n_x_19530++))){d::check_cancel();bool _n_edge_19531=(std::fabs(_n_x_19530)==3.0);
bool _n_bar_19532=(std::fabs(_n_x_19530)==2.0);
double _n_v_19533=(d::truth(_n_edge_19531)?0.34:(d::truth(_n_bar_19532)?0.2:((_n_glow_19528*(1.0-(0.1*std::fabs(_n_x_19530))))*(d::truth((_n_r_19529==_n_LAMP_19425))?1.0:0.85))));
double _n_i_19534=([&](){auto _n_argument_19644=1.0;auto _n_argument_19645=([&](){auto _n_argument_19646=9.0;auto _n_argument_19647=d::round((_n_v_19533*9.0));return d::minimum({_n_argument_19646,_n_argument_19647});})();return d::maximum({_n_argument_19644,_n_argument_19645});})();
(void)(([&](){auto&& _n_array_19648=_n_out_19505;auto _n_index_19649=(((_n_r_19529*this->_n_cols_19438)+_n_TC_19424)+_n_x_19530);auto _n_value_19650=(((d::truth(_n_paper_19500)&&d::truth((!d::truth(_n_edge_19531))))&&d::truth((!d::truth(_n_bar_19532))))?d::at(_n_ramp_19507,([&](){auto _n_argument_19651=7.0;auto _n_argument_19652=d::round((_n_v_19533*7.0));return d::minimum({_n_argument_19651,_n_argument_19652});})()):d::at(_n_RAMP_19423,(d::truth(_n_paper_19500)?(10.0-_n_i_19534):_n_i_19534)));d::put(_n_array_19648,_n_index_19649,_n_value_19650);return _n_value_19650;})());
}}
}}
double _n_L_19535=((_n_LAMP_19425*this->_n_cols_19438)+_n_TC_19424);
(void)(([&](){auto&& _n_array_19653=_n_out_19505;auto _n_index_19654=_n_L_19535;auto _n_value_19655=(d::truth((_n_face_19504>0.3))?d::String(u"@"):(d::truth((_n_s_19503>(-d::number(0.2))))?d::String(u"*"):d::String(u"o")));d::put(_n_array_19653,_n_index_19654,_n_value_19655);return _n_value_19655;})());
if(d::truth((_n_face_19504>0.5))){d::check_cancel();(void)(([&](){auto&& _n_array_19656=_n_out_19505;auto _n_index_19657=(_n_L_19535-this->_n_cols_19438);auto _n_value_19658=([&](){auto&& _n_array_19659=_n_out_19505;auto _n_index_19660=(_n_L_19535+this->_n_cols_19438);auto _n_value_19661=d::String(u"|");d::put(_n_array_19659,_n_index_19660,_n_value_19661);return _n_value_19661;})();d::put(_n_array_19656,_n_index_19657,_n_value_19658);return _n_value_19658;})());
(void)(([&](){auto&& _n_array_19662=_n_out_19505;auto _n_index_19663=(_n_L_19535-1.0);auto _n_value_19664=([&](){auto&& _n_array_19665=_n_out_19505;auto _n_index_19666=(_n_L_19535+1.0);auto _n_value_19667=d::String(u"=");d::put(_n_array_19665,_n_index_19666,_n_value_19667);return _n_value_19667;})();d::put(_n_array_19662,_n_index_19663,_n_value_19664);return _n_value_19664;})());
}
(void)(d::forEach(this->_n_surf_19445,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_19668=_a0;
double _n_x0_19536=d::at(_n_binding_19668,0.0);
double _n_y0_19537=d::at(_n_binding_19668,1.0);
double _n_side_19538=d::at(_n_binding_19668,2.0);
double _n_ph_19539=d::at(_n_binding_19668,3.0);
double _n_n_19540=_a1;
{
double _n_u_19541=d::mod((d::mod(((_n_t_19499/_n_SWELL_19436)+_n_ph_19539),1.0)+1.0),1.0);
double _n_tt_19542=(_n_u_19541*_n_SWELL_19436);
if(d::truth((_n_tt_19542>1.6))){d::check_cancel();return;
}
double _n_fr_19543=std::floor((_n_y0_19537+0.7));
{double _n_j_19544=(-d::number(4.0));
for(;d::truth((_n_j_19544<=4.0));(void)((_n_j_19544++))){d::check_cancel();double _n_cx_19545=(d::round(_n_x0_19536)+_n_j_19544);
if(((((d::truth((_n_tt_19542<1.3))&&d::truth((std::fabs(_n_j_19544)<=(1.0+(_n_tt_19542*3.0)))))&&d::truth((_n_cx_19545>=0.0)))&&d::truth((_n_cx_19545<this->_n_cols_19438)))&&d::truth((_n_fr_19543<this->_n_rows_19439)))){d::check_cancel();(void)(([&](){auto&& _n_array_19669=_n_out_19505;auto _n_index_19670=((_n_fr_19543*this->_n_cols_19438)+_n_cx_19545);auto _n_value_19671=((d::truth((_n_tt_19542<0.5))&&d::truth((std::fabs(_n_j_19544)<2.0)))?d::String(u"="):d::String(u"~"));d::put(_n_array_19669,_n_index_19670,_n_value_19671);return _n_value_19671;})());
}
}}
if(d::truth((!d::truth(_n_side_19538)))){d::check_cancel();return;
}
{double _n_j_19546=0.0;
for(;d::truth((_n_j_19546<18.0));(void)((_n_j_19546++))){d::check_cancel();double _n_f_19547=(_n_j_19546/17.0);
double _n_h1_19548=_n_hash_19437(_n_j_19546,(_n_n_19540+7.0));
double _n_h2_19549=_n_hash_19437(_n_j_19546,(_n_n_19540+19.0));
double _n_vx_19550=((_n_side_19538*(1.0+((13.0*_n_f_19547)*_n_f_19547)))+((_n_h1_19548-0.5)*3.0));
double _n_vy_19551=((11.0-(6.0*_n_f_19547))*(0.8+(0.4*_n_h2_19549)));
bool _n_up_19552=((_n_vy_19551-(18.0*_n_tt_19542))>0.0);
{double _n_back_19553=0.0;
for(;d::truth((_n_back_19553<=(d::truth(_n_up_19552)?1.0:0.0)));(void)((_n_back_19553++))){d::check_cancel();double _n_ts_19554=(_n_tt_19542-(_n_back_19553*0.06));
double _n_cx_19555=d::round((_n_x0_19536+(_n_vx_19550*_n_ts_19554)));
double _n_cy_19556=d::round(((_n_y0_19537-(_n_vy_19551*_n_ts_19554))+((9.0*_n_ts_19554)*_n_ts_19554)));
if((((((d::truth((_n_ts_19554<0.0))||d::truth((_n_cy_19556<0.0)))||d::truth((_n_cy_19556>=this->_n_rows_19439)))||d::truth((_n_cx_19555<0.0)))||d::truth((_n_cx_19555>=this->_n_cols_19438)))||d::truth((_n_cy_19556>(_n_y0_19537+0.3))))){d::check_cancel();continue;
}
double _n_k_19557=((_n_cy_19556*this->_n_cols_19438)+_n_cx_19555);
if((d::truth((d::at(this->_n_rockAt_19442,_n_k_19557)>=0.0))&&d::truth((_n_tt_19542>0.2)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_19672=_n_out_19505;auto _n_index_19673=_n_k_19557;auto _n_value_19674=(d::truth(_n_back_19553)?((d::truth((d::at(_n_out_19505,_n_k_19557)==d::String(u" ")))||d::truth((d::at(_n_out_19505,_n_k_19557)==d::String(u"~"))))?d::String(u"'"):d::at(_n_out_19505,_n_k_19557)):(d::truth((_n_tt_19542<0.22))?(d::truth((_n_f_19547<0.4))?d::String(u"#"):d::String(u"*")):(d::truth(_n_up_19552)?d::String(u"*"):(d::truth((_n_tt_19542<1.15))?d::String(u":"):d::String(u".")))));d::put(_n_array_19672,_n_index_19673,_n_value_19674);return _n_value_19674;})());
}}
}}

}
}));
d::Array<d::String,false> _n_lines_19558=d::Array<d::String,false>{};
{double _n_r_19559=0.0;
for(;d::truth((_n_r_19559<this->_n_rows_19439));(void)((_n_r_19559++))){d::check_cancel();(void)(_n_lines_19558.push(d::join(_n_out_19505.slice((_n_r_19559*this->_n_cols_19438),((_n_r_19559+1.0)*this->_n_cols_19438)),d::String(u""))));
}}
return d::join(_n_lines_19558,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lighthouse").cols)*ascii::catalog_meta("lighthouse").rows);auto _env=std::make_shared<_n_Record_19560>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lighthouse_meta(){return catalog_meta("lighthouse");}
std::unique_ptr<Piece> make_lighthouse(const AsciiPieceOptions &o){return std::make_unique<Native_lighthouse>(o);}
}
