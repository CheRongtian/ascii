// Direct, statically typed C++ from src/pieces/lighthouse.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19421;
struct _n_Record_19559;
struct _n_Record_19421{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19421> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19421>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_19559{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19559> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19559>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_19436(double _a0,double _a1);
std::shared_ptr<_n_Record_19421> _n_meta_19420=[](){return ([&](){auto _n_object_19562=std::make_shared<_n_Record_19421>();_n_object_19562->_p_name=d::String(u"lighthouse");_n_object_19562->_p_category=d::String(u"objects");_n_object_19562->_p_note=d::String(u"a beam sweeping over night sea from a lighthouse on rocks");_n_object_19562->_p_cols=64.0;_n_object_19562->_p_rows=30.0;_n_object_19562->_p_fps=20.0;return _n_object_19562;})();}();
const d::String _n_RAMP_19422=[](){return d::String(u" .:-=+*#%@");}();
const double _n_TC_19423=[](){return 32.0;}();
const double _n_LAMP_19424=[](){return 5.0;}();
const double _n_HORIZON_19425=[](){return 19.0;}();
const double _n_PERIOD_19426=[](){return 8.0;}();
const double _n_TOP_19427=[](){return 9.0;}();
const double _n_FOOT_19428=[](){return 24.0;}();
const double _n_WT_19429=[](){return 2.1;}();
const double _n_WB_19430=[](){return 3.1;}();
const double _n_BAND_19431=[](){return 3.0;}();
d::Array<std::array<double,5>,false> _n_ROCKS_19432=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{(-d::number(3.9)),21.1,2.3,1.7,99.0},std::array<double,5>{3.9,20.9,2.4,1.8,99.0},std::array<double,5>{(-d::number(6.6)),22.9,2.3,1.6,23.9},std::array<double,5>{6.7,22.7,2.2,1.5,23.6},std::array<double,5>{(-d::number(1.7)),23.5,2.7,1.8,24.8},std::array<double,5>{3.1,23.8,2.5,1.7,25.1},std::array<double,5>{(-d::number(9.3)),24.5,1.5,0.9,25.0},std::array<double,5>{9.2,24.2,1.3,0.8,24.7}};}();
const double _n_BEHIND_19433=[](){return 2.0;}();
d::Array<std::array<double,3>,false> _n_SURF_19434=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{6.0,(-d::number(1.0)),0.0},std::array<double,3>{7.0,1.0,0.45},std::array<double,3>{3.0,1.0,0.8},std::array<double,3>{2.0,(-d::number(1.0)),0.3},std::array<double,3>{4.0,0.0,0.62},std::array<double,3>{5.0,0.0,0.15}};}();
const double _n_SWELL_19435=[](){return 3.2;}();
double _n_hash_19436(double _a0,double _a1){double _n_x_19447=_a0;
double _n_y_19448=_a1;
{
double _n_h_19449=([&](){auto _n_left_19563=d::imul(_n_x_19447,668265261.0);auto _n_right_19564=d::imul(_n_y_19448,374761393.0);return double(d::i32(_n_left_19563)^d::i32(_n_right_19564));})();
(void)((_n_h_19449=d::imul(double(d::i32(_n_h_19449)^d::i32(double(d::u32(_n_h_19449)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_19449)^d::i32(double(d::u32(_n_h_19449)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_lighthouse final:ascii::Piece{
double _n_cols_19437{};
double _n_rows_19438{};
double _n_N_19439{};
d::Array<float,true> _n_still_19440{};
d::Array<int8_t,true> _n_rockAt_19441{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_stars_19443{};
d::Array<std::array<double,4>,false> _n_surf_19444{};
d::Array<d::String,false> _n_BEAM_19446{};
std::function<d::String(double,std::shared_ptr<_n_Record_19559>)> _render;
double _n_moon_19442(double _a0,double _a1,double _a2){double _n_u_19450=_a0;
double _n_v_19451=_a1;
double _n_nz_19452=_a2;
return d::maximum({0.0,((((-d::number(0.5))*_n_u_19450)-(0.45*_n_v_19451))+(0.75*_n_nz_19452))});}

double _n_beamAt_19445(double _a0,double _a1,double _a2,double _a3){double _n_dx_19487=_a0;
double _n_dy_19488=_a1;
double _n_c_19489=_a2;
double _n_s_19490=_a3;
{
double _n_fore_19491=([&](){auto _n_argument_19674=std::fabs(_n_c_19489);auto _n_argument_19675=0.1;return d::maximum({_n_argument_19674,_n_argument_19675});})();
double _n_ax_19492=([&]()->double{auto _n_logical_19676=d::sign(_n_c_19489);return d::truth(_n_logical_19676)?_n_logical_19676:1.0;})();
double _n_ay_19493=d::minimum({0.35,(0.02/_n_fore_19491)});
double _n_m_19494=d::hypot(std::initializer_list<double>{_n_ax_19492,_n_ay_19493});
double _n_a_19495=(((_n_dx_19487*_n_ax_19492)+(_n_dy_19488*_n_ay_19493))/_n_m_19494);
if(d::truth((_n_a_19495<=0.0))){d::check_cancel();return 0.0;
}
double _n_across_19496=(std::fabs(((_n_dx_19487*_n_ay_19493)-(_n_dy_19488*_n_ax_19492)))/_n_m_19494);
double _n_half_19497=(0.5+(_n_a_19495*(0.11/_n_fore_19491)));
return (([&](){auto _n_left_19677=([&](){auto _n_left_19679=std::exp((-d::number(std::pow((_n_across_19496/_n_half_19497),4.0))));auto _n_right_19680=std::exp(((-d::number(_n_a_19495))/(22.0*_n_fore_19491)));return (_n_left_19679*_n_right_19680);})();auto _n_right_19678=d::minimum({1.6,(1.0/std::pow(_n_fore_19491,0.3))});return (_n_left_19677*_n_right_19678);})()*(d::truth((_n_s_19490<0.0))?0.75:1.0));

}
}

explicit Native_lighthouse(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_19565=_n_meta_19420;
this->_n_cols_19437=_n_binding_19565->_p_cols;
this->_n_rows_19438=_n_binding_19565->_p_rows;
this->_n_N_19439=(this->_n_cols_19437*this->_n_rows_19438);
this->_n_still_19440=d::Array<float,true>(size_t(this->_n_N_19439)).fill((-d::number(1.0)));
this->_n_rockAt_19441=d::Array<int8_t,true>(size_t(this->_n_N_19439)).fill((-d::number(1.0)));
{double _n_r_19453=0.0;
for(;d::truth((_n_r_19453<this->_n_rows_19438));(void)((_n_r_19453++))){d::check_cancel();{double _n_c_19454=0.0;
for(;d::truth((_n_c_19454<this->_n_cols_19437));(void)((_n_c_19454++))){d::check_cancel();double _n_k_19455=((_n_r_19453*this->_n_cols_19437)+_n_c_19454);
double _n_x_19456=((_n_c_19454-_n_TC_19423)/2.0);
double _n_y_19457=(_n_r_19453+0.5);
auto _n_boulder_19458=[&]( double _a0) mutable ->bool{double _n_i_19459=_a0;
{
auto _n_binding_19566=d::at(_n_ROCKS_19432,_n_i_19459);
double _n_bx_19460=d::at(_n_binding_19566,0.0);
double _n_by_19461=d::at(_n_binding_19566,1.0);
double _n_rx_19462=d::at(_n_binding_19566,2.0);
double _n_ry_19463=d::at(_n_binding_19566,3.0);
double _n_wl_19464=d::at(_n_binding_19566,4.0);
double _n_u_19465=((_n_x_19456-_n_bx_19460)/_n_rx_19462);
double _n_v_19466=((_n_y_19457-_n_by_19461)/_n_ry_19463);
double _n_q_19467=((_n_u_19465*_n_u_19465)+(_n_v_19466*_n_v_19466));
if((d::truth((_n_q_19467>=1.0))||d::truth((_n_y_19457>(_n_wl_19464+0.5))))){d::check_cancel();return false;
}
double _n_nz_19468=std::sqrt((1.0-_n_q_19467));
(void)(([&](){auto&& _n_array_19567=this->_n_still_19440;auto _n_index_19568=_n_k_19455;auto _n_value_19569=([&](){auto _n_left_19570=([&](){auto _n_left_19572=(0.06+(0.86*this->_n_moon_19442(_n_u_19465,_n_v_19466,_n_nz_19468)));auto _n_right_19573=d::minimum({1.0,(0.15+(_n_nz_19468*1.8))});return (_n_left_19572*_n_right_19573);})();auto _n_right_19571=(0.06*(_n_hash_19436(_n_c_19454,_n_r_19453)-0.5));return (_n_left_19570+_n_right_19571);})();d::put(_n_array_19567,_n_index_19568,_n_value_19569);return _n_value_19569;})());
(void)(([&](){auto&& _n_array_19574=this->_n_rockAt_19441;auto _n_index_19575=_n_k_19455;auto _n_value_19576=_n_i_19459;d::put(_n_array_19574,_n_index_19575,_n_value_19576);return _n_value_19576;})());
return true;

}
};
{double _n_i_19469=0.0;
for(;d::truth((_n_i_19469<_n_BEHIND_19433));(void)((_n_i_19469++))){d::check_cancel();(void)(_n_boulder_19458(_n_i_19469));
}}
if((d::truth((_n_r_19453>=_n_TOP_19427))&&d::truth((_n_r_19453<=_n_FOOT_19428)))){d::check_cancel();double _n_w_19470=(_n_WT_19429+(((_n_WB_19430-_n_WT_19429)*(_n_r_19453-_n_TOP_19427))/(_n_FOOT_19428-_n_TOP_19427)));
if(d::truth((std::fabs(_n_x_19456)<=_n_w_19470))){d::check_cancel();double _n_u_19471=(_n_x_19456/(_n_w_19470+0.25));
double _n_nz_19472=std::sqrt((1.0-(_n_u_19471*_n_u_19471)));
bool _n_dark_19473=(d::mod(std::floor(((_n_r_19453-_n_TOP_19427)/_n_BAND_19431)),2.0)==1.0);
double _n_v_19474=((d::truth(_n_dark_19473)?0.24:0.92)*(0.2+(0.8*this->_n_moon_19442(_n_u_19471,0.0,_n_nz_19472))));
if(((d::truth((_n_r_19453>=(_n_FOOT_19428-3.0)))&&d::truth((_n_r_19453<_n_FOOT_19428)))&&d::truth((std::fabs(_n_x_19456)<0.6)))){d::check_cancel();(void)((_n_v_19474=0.03));
}
if((d::truth((_n_r_19453==((_n_TOP_19427+_n_BAND_19431)+1.0)))&&d::truth((_n_x_19456==0.0)))){d::check_cancel();(void)((_n_v_19474=0.03));
}
(void)(([&](){auto&& _n_array_19577=this->_n_still_19440;auto _n_index_19578=_n_k_19455;auto _n_value_19579=_n_v_19474;d::put(_n_array_19577,_n_index_19578,_n_value_19579);return _n_value_19579;})());
(void)(([&](){auto&& _n_array_19580=this->_n_rockAt_19441;auto _n_index_19581=_n_k_19455;auto _n_value_19582=(-d::number(1.0));d::put(_n_array_19580,_n_index_19581,_n_value_19582);return _n_value_19582;})());
}
}
if((d::truth((_n_r_19453==(_n_TOP_19427-2.0)))&&d::truth((std::fabs(_n_x_19456)<=2.9)))){d::check_cancel();(void)(([&](){auto&& _n_array_19583=this->_n_still_19440;auto _n_index_19584=_n_k_19455;auto _n_value_19585=(d::truth((std::fabs(_n_x_19456)>2.6))?0.55:(d::truth(d::mod((_n_c_19454-_n_TC_19423),2.0))?0.2:(0.6-(0.25*(_n_x_19456/3.0)))));d::put(_n_array_19583,_n_index_19584,_n_value_19585);return _n_value_19585;})());
}
if((d::truth((_n_r_19453==(_n_TOP_19427-1.0)))&&d::truth((std::fabs(_n_x_19456)<=3.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_19586=this->_n_still_19440;auto _n_index_19587=_n_k_19455;auto _n_value_19588=(0.45*(0.25+(0.75*([&](){auto _n_argument_19589=(_n_x_19456/3.2);auto _n_argument_19590=0.3;auto _n_argument_19591=std::sqrt((1.0-std::pow((_n_x_19456/3.2),2.0)));return this->_n_moon_19442(_n_argument_19589,_n_argument_19590,_n_argument_19591);})())));d::put(_n_array_19586,_n_index_19587,_n_value_19588);return _n_value_19588;})());
}
if((d::truth((_n_r_19453>=(_n_LAMP_19424-3.0)))&&d::truth((_n_r_19453<=(_n_LAMP_19424-2.0))))){d::check_cancel();double _n_rw_19475=(d::truth((_n_r_19453==(_n_LAMP_19424-2.0)))?1.85:1.15);
if(d::truth((std::fabs(_n_x_19456)<=_n_rw_19475))){d::check_cancel();double _n_u_19476=(_n_x_19456/(_n_rw_19475+0.3));
(void)(([&](){auto&& _n_array_19592=this->_n_still_19440;auto _n_index_19593=_n_k_19455;auto _n_value_19594=(0.12+(0.6*([&](){auto _n_argument_19595=_n_u_19476;auto _n_argument_19596=(-d::number(0.4));auto _n_argument_19597=std::sqrt((1.0-(_n_u_19476*_n_u_19476)));return this->_n_moon_19442(_n_argument_19595,_n_argument_19596,_n_argument_19597);})()));d::put(_n_array_19592,_n_index_19593,_n_value_19594);return _n_value_19594;})());
}
}
if((d::truth((_n_r_19453==(_n_LAMP_19424-4.0)))&&d::truth((_n_x_19456==0.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_19598=this->_n_still_19440;auto _n_index_19599=_n_k_19455;auto _n_value_19600=0.5;d::put(_n_array_19598,_n_index_19599,_n_value_19600);return _n_value_19600;})());
}
{double _n_i_19477=_n_BEHIND_19433;
for(;d::truth((_n_i_19477<double(_n_ROCKS_19432.size())));(void)((_n_i_19477++))){d::check_cancel();(void)(_n_boulder_19458(_n_i_19477));
}}
}}
}}
this->_n_stars_19443=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
{double _n_i_19478=0.0;
for(;d::truth((_n_i_19478<24.0));(void)((_n_i_19478++))){d::check_cancel();double _n_c_19479=std::floor((_n_hash_19436(_n_i_19478,1.0)*this->_n_cols_19437));
double _n_r_19480=std::floor((_n_hash_19436(_n_i_19478,2.0)*(_n_HORIZON_19425-2.0)));
if((d::truth((d::at(this->_n_still_19440,((_n_r_19480*this->_n_cols_19437)+_n_c_19479))<0.0))&&d::truth((std::fabs((_n_c_19479-_n_TC_19423))>4.0)))){d::check_cancel();(void)(this->_n_stars_19443.push(std::make_shared<std::tuple<double,d::String>>(((_n_r_19480*this->_n_cols_19437)+_n_c_19479),(d::truth((_n_hash_19436(_n_i_19478,3.0)<0.2))?d::String(u"*"):(d::truth((_n_hash_19436(_n_i_19478,3.0)<0.6))?d::String(u"."):d::String(u"·"))))));
}
}}
this->_n_surf_19444=d::map(_n_SURF_19434,[&]( std::array<double,3> _a0) mutable ->std::array<double,4>{auto _n_binding_19601=_a0;
double _n_i_19481=d::at(_n_binding_19601,0.0);
double _n_side_19482=d::at(_n_binding_19601,1.0);
double _n_ph_19483=d::at(_n_binding_19601,2.0);
{
auto _n_binding_19602=d::at(_n_ROCKS_19432,_n_i_19481);
double _n_bx_19484=d::at(_n_binding_19602,0.0);
double _n_rx_19485=d::at(_n_binding_19602,2.0);
double _n_wl_19486=d::at(_n_binding_19602,4.0);
return std::array<double,4>{(_n_TC_19423+(2.0*(_n_bx_19484+((_n_rx_19485*_n_side_19482)*0.95)))),(_n_wl_19486-0.2),_n_side_19482,_n_ph_19483};

}
});
this->_n_BEAM_19446=d::Array<d::String,false>{d::String(u" .:-=+*#"),d::String(u" ..::--=")};
_render=[=]( double _a0,std::shared_ptr<_n_Record_19559> _a1) mutable ->d::String{double _n_t_19498=_a0;
auto _n_binding_19605=(d::present(_a1)?_a1:([&](){auto _n_object_19604=std::make_shared<_n_Record_19559>();return _n_object_19604;})());
bool _n_paper_19499=(d::present(_n_binding_19605->_p_paper)?d::read(_n_binding_19605->_p_paper):false);
{
double _n_th_19500=((-d::number(0.35))+(((2.0*ascii::PI)*_n_t_19498)/_n_PERIOD_19426));
double _n_c_19501=std::cos(_n_th_19500);
double _n_s_19502=std::sin(_n_th_19500);
double _n_face_19503=std::pow(d::maximum({0.0,_n_s_19502}),10.0);
d::Array<d::String,false> _n_out_19504=d::Array<d::String,false>(size_t(this->_n_N_19439)).fill(d::String(u" "));
d::Array<float,true> _n_light_19505=d::Array<float,true>(size_t(this->_n_cols_19437));
d::String _n_ramp_19506=d::at(this->_n_BEAM_19446,(d::truth(_n_paper_19499)?1.0:0.0));
{double _n_r_19507=0.0;
for(;d::truth((_n_r_19507<this->_n_rows_19438));(void)((_n_r_19507++))){d::check_cancel();{double _n_cc_19508=0.0;
for(;d::truth((_n_cc_19508<this->_n_cols_19437));(void)((_n_cc_19508++))){d::check_cancel();double _n_k_19509=((_n_r_19507*this->_n_cols_19437)+_n_cc_19508);
double _n_dx_19510=((_n_cc_19508-_n_TC_19423)/2.0);
double _n_dy_19511=((_n_r_19507+0.5)-(_n_LAMP_19424+0.5));
double _n_glare_19512=(std::exp((-d::number(std::pow((d::hypot(std::initializer_list<double>{_n_dx_19510,_n_dy_19511})/(1.2+(2.2*_n_face_19503))),2.0))))*(0.5+(1.2*_n_face_19503)));
if(d::truth((_n_r_19507<_n_HORIZON_19425))){d::check_cancel();double _n_b_19513=(this->_n_beamAt_19445(_n_dx_19510,_n_dy_19511,_n_c_19501,_n_s_19502)+_n_glare_19512);
if(d::truth((_n_r_19507==_n_LAMP_19424))){d::check_cancel();(void)(([&](){auto&& _n_array_19606=_n_light_19505;auto _n_index_19607=_n_cc_19508;auto _n_value_19608=_n_b_19513;d::put(_n_array_19606,_n_index_19607,_n_value_19608);return _n_value_19608;})());
}
if(d::truth((d::at(this->_n_still_19440,_n_k_19509)>=0.0))){d::check_cancel();continue;
}
double _n_i_19514=([&](){auto _n_argument_19609=7.0;auto _n_argument_19610=std::floor(((_n_b_19513*6.0)+(0.35*_n_hash_19436(_n_cc_19508,_n_r_19507))));return d::minimum({_n_argument_19609,_n_argument_19610});})();
if(d::truth((_n_i_19514>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_19611=_n_out_19504;auto _n_index_19612=_n_k_19509;auto _n_value_19613=d::at(_n_ramp_19506,_n_i_19514);d::put(_n_array_19611,_n_index_19612,_n_value_19613);return _n_value_19613;})());
}
continue;
}
double _n_d_19515=((_n_r_19507-_n_HORIZON_19425)+1.0);
double _n_x_19516=(_n_cc_19508/((3.2/_n_d_19515)+0.6));
double _n_wave_19517=([&](){auto _n_left_19614=std::sin(((((_n_x_19516*0.9)+(_n_d_19515*1.7))-(_n_t_19498*2.2))+(std::sin(((_n_x_19516*0.31)+_n_d_19515))*1.5)));auto _n_right_19615=(0.6*std::sin((((_n_x_19516*0.43)-(_n_d_19515*0.9))+(_n_t_19498*1.3))));return (_n_left_19614+_n_right_19615);})();
double _n_lit_19518=([&](){auto _n_left_19616=d::minimum({1.0,((([&]()->double{auto _n_logical_19618=d::at(_n_light_19505,_n_cc_19508);return d::truth(_n_logical_19618)?_n_logical_19618:0.0;})()*0.9)+(_n_glare_19512*0.5))});auto _n_right_19617=std::exp(((-d::number((_n_d_19515-1.0)))/6.0));return (_n_left_19616*_n_right_19617);})();
if(d::truth((_n_wave_19517>(0.9-(0.5*_n_lit_19518))))){d::check_cancel();(void)(([&](){auto&& _n_array_19619=_n_out_19504;auto _n_index_19620=_n_k_19509;auto _n_value_19621=(d::truth((_n_lit_19518>0.5))?d::String(u"="):(d::truth((_n_lit_19518>0.2))?d::String(u"~"):(d::truth((_n_d_19515<3.0))?d::String(u"-"):d::String(u"~"))));d::put(_n_array_19619,_n_index_19620,_n_value_19621);return _n_value_19621;})());
}else {d::check_cancel();if((d::truth((_n_wave_19517>(0.4-(0.4*_n_lit_19518))))&&d::truth(([&]()->bool{auto _n_logical_19622=(_n_d_19515<3.0);return d::truth(_n_logical_19622)?_n_logical_19622:(_n_lit_19518>0.15);})()))){d::check_cancel();(void)(([&](){auto&& _n_array_19623=_n_out_19504;auto _n_index_19624=_n_k_19509;auto _n_value_19625=(d::truth((_n_d_19515<3.0))?d::String(u"."):d::String(u"-"));d::put(_n_array_19623,_n_index_19624,_n_value_19625);return _n_value_19625;})());
}else {d::check_cancel();if(d::truth((_n_d_19515==1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_19626=_n_out_19504;auto _n_index_19627=_n_k_19509;auto _n_value_19628=d::String(u"_");d::put(_n_array_19626,_n_index_19627,_n_value_19628);return _n_value_19628;})());
}
}
}
}}
}}
for(auto &&_n_item_19629:this->_n_stars_19443){d::check_cancel();auto _n_binding_19630=_n_item_19629;
double _n_k_19519=std::get<0>(*_n_binding_19630);
d::String _n_ch_19520=std::get<1>(*_n_binding_19630);
if(d::truth((d::at(_n_out_19504,_n_k_19519)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_19631=_n_out_19504;auto _n_index_19632=_n_k_19519;auto _n_value_19633=_n_ch_19520;d::put(_n_array_19631,_n_index_19632,_n_value_19633);return _n_value_19633;})());
}
}
d::Array<double,false> _n_swell_19521=d::map(_n_ROCKS_19432,[&]( std::array<double,5> _a0,double _a1) mutable ->double{auto&& _n_b_19522=_a0;
double _n_i_19523=_a1;
return ([&](){auto _n_left_19634=(d::at(_n_b_19522,4.0)+(0.45*std::sin(((((2.0*ascii::PI)*_n_t_19498)/_n_SWELL_19435)+(_n_i_19523*1.9)))));auto _n_right_19635=(0.25*std::sin(((_n_t_19498*1.3)+_n_i_19523)));return (_n_left_19634+_n_right_19635);})();});
{double _n_k_19524=0.0;
for(;d::truth((_n_k_19524<this->_n_N_19439));(void)((_n_k_19524++))){d::check_cancel();double _n_v_19525=d::at(this->_n_still_19440,_n_k_19524);
if(d::truth((_n_v_19525<0.0))){d::check_cancel();continue;
}
if((d::truth((d::at(this->_n_rockAt_19441,_n_k_19524)>=0.0))&&d::truth(((std::floor((_n_k_19524/this->_n_cols_19437))+0.5)>d::at(_n_swell_19521,d::at(this->_n_rockAt_19441,_n_k_19524)))))){d::check_cancel();continue;
}
double _n_i_19526=([&](){auto _n_argument_19636=1.0;auto _n_argument_19637=([&](){auto _n_argument_19638=9.0;auto _n_argument_19639=d::round((_n_v_19525*9.0));return d::minimum({_n_argument_19638,_n_argument_19639});})();return d::maximum({_n_argument_19636,_n_argument_19637});})();
(void)(([&](){auto&& _n_array_19640=_n_out_19504;auto _n_index_19641=_n_k_19524;auto _n_value_19642=d::at(_n_RAMP_19422,(d::truth(_n_paper_19499)?(10.0-_n_i_19526):_n_i_19526));d::put(_n_array_19640,_n_index_19641,_n_value_19642);return _n_value_19642;})());
}}
double _n_glow_19527=(0.75+(0.25*_n_face_19503));
{double _n_r_19528=(_n_LAMP_19424-1.0);
for(;d::truth((_n_r_19528<=(_n_LAMP_19424+1.0)));(void)((_n_r_19528++))){d::check_cancel();{double _n_x_19529=(-d::number(3.0));
for(;d::truth((_n_x_19529<=3.0));(void)((_n_x_19529++))){d::check_cancel();bool _n_edge_19530=(std::fabs(_n_x_19529)==3.0);
bool _n_bar_19531=(std::fabs(_n_x_19529)==2.0);
double _n_v_19532=(d::truth(_n_edge_19530)?0.34:(d::truth(_n_bar_19531)?0.2:((_n_glow_19527*(1.0-(0.1*std::fabs(_n_x_19529))))*(d::truth((_n_r_19528==_n_LAMP_19424))?1.0:0.85))));
double _n_i_19533=([&](){auto _n_argument_19643=1.0;auto _n_argument_19644=([&](){auto _n_argument_19645=9.0;auto _n_argument_19646=d::round((_n_v_19532*9.0));return d::minimum({_n_argument_19645,_n_argument_19646});})();return d::maximum({_n_argument_19643,_n_argument_19644});})();
(void)(([&](){auto&& _n_array_19647=_n_out_19504;auto _n_index_19648=(((_n_r_19528*this->_n_cols_19437)+_n_TC_19423)+_n_x_19529);auto _n_value_19649=(((d::truth(_n_paper_19499)&&d::truth((!d::truth(_n_edge_19530))))&&d::truth((!d::truth(_n_bar_19531))))?d::at(_n_ramp_19506,([&](){auto _n_argument_19650=7.0;auto _n_argument_19651=d::round((_n_v_19532*7.0));return d::minimum({_n_argument_19650,_n_argument_19651});})()):d::at(_n_RAMP_19422,(d::truth(_n_paper_19499)?(10.0-_n_i_19533):_n_i_19533)));d::put(_n_array_19647,_n_index_19648,_n_value_19649);return _n_value_19649;})());
}}
}}
double _n_L_19534=((_n_LAMP_19424*this->_n_cols_19437)+_n_TC_19423);
(void)(([&](){auto&& _n_array_19652=_n_out_19504;auto _n_index_19653=_n_L_19534;auto _n_value_19654=(d::truth((_n_face_19503>0.3))?d::String(u"@"):(d::truth((_n_s_19502>(-d::number(0.2))))?d::String(u"*"):d::String(u"o")));d::put(_n_array_19652,_n_index_19653,_n_value_19654);return _n_value_19654;})());
if(d::truth((_n_face_19503>0.5))){d::check_cancel();(void)(([&](){auto&& _n_array_19655=_n_out_19504;auto _n_index_19656=(_n_L_19534-this->_n_cols_19437);auto _n_value_19657=([&](){auto&& _n_array_19658=_n_out_19504;auto _n_index_19659=(_n_L_19534+this->_n_cols_19437);auto _n_value_19660=d::String(u"|");d::put(_n_array_19658,_n_index_19659,_n_value_19660);return _n_value_19660;})();d::put(_n_array_19655,_n_index_19656,_n_value_19657);return _n_value_19657;})());
(void)(([&](){auto&& _n_array_19661=_n_out_19504;auto _n_index_19662=(_n_L_19534-1.0);auto _n_value_19663=([&](){auto&& _n_array_19664=_n_out_19504;auto _n_index_19665=(_n_L_19534+1.0);auto _n_value_19666=d::String(u"=");d::put(_n_array_19664,_n_index_19665,_n_value_19666);return _n_value_19666;})();d::put(_n_array_19661,_n_index_19662,_n_value_19663);return _n_value_19663;})());
}
(void)(d::forEach(this->_n_surf_19444,[&]( std::array<double,4> _a0,double _a1) mutable ->void{auto _n_binding_19667=_a0;
double _n_x0_19535=d::at(_n_binding_19667,0.0);
double _n_y0_19536=d::at(_n_binding_19667,1.0);
double _n_side_19537=d::at(_n_binding_19667,2.0);
double _n_ph_19538=d::at(_n_binding_19667,3.0);
double _n_n_19539=_a1;
{
double _n_u_19540=d::mod((d::mod(((_n_t_19498/_n_SWELL_19435)+_n_ph_19538),1.0)+1.0),1.0);
double _n_tt_19541=(_n_u_19540*_n_SWELL_19435);
if(d::truth((_n_tt_19541>1.6))){d::check_cancel();return;
}
double _n_fr_19542=std::floor((_n_y0_19536+0.7));
{double _n_j_19543=(-d::number(4.0));
for(;d::truth((_n_j_19543<=4.0));(void)((_n_j_19543++))){d::check_cancel();double _n_cx_19544=(d::round(_n_x0_19535)+_n_j_19543);
if(((((d::truth((_n_tt_19541<1.3))&&d::truth((std::fabs(_n_j_19543)<=(1.0+(_n_tt_19541*3.0)))))&&d::truth((_n_cx_19544>=0.0)))&&d::truth((_n_cx_19544<this->_n_cols_19437)))&&d::truth((_n_fr_19542<this->_n_rows_19438)))){d::check_cancel();(void)(([&](){auto&& _n_array_19668=_n_out_19504;auto _n_index_19669=((_n_fr_19542*this->_n_cols_19437)+_n_cx_19544);auto _n_value_19670=((d::truth((_n_tt_19541<0.5))&&d::truth((std::fabs(_n_j_19543)<2.0)))?d::String(u"="):d::String(u"~"));d::put(_n_array_19668,_n_index_19669,_n_value_19670);return _n_value_19670;})());
}
}}
if(d::truth((!d::truth(_n_side_19537)))){d::check_cancel();return;
}
{double _n_j_19545=0.0;
for(;d::truth((_n_j_19545<18.0));(void)((_n_j_19545++))){d::check_cancel();double _n_f_19546=(_n_j_19545/17.0);
double _n_h1_19547=_n_hash_19436(_n_j_19545,(_n_n_19539+7.0));
double _n_h2_19548=_n_hash_19436(_n_j_19545,(_n_n_19539+19.0));
double _n_vx_19549=((_n_side_19537*(1.0+((13.0*_n_f_19546)*_n_f_19546)))+((_n_h1_19547-0.5)*3.0));
double _n_vy_19550=((11.0-(6.0*_n_f_19546))*(0.8+(0.4*_n_h2_19548)));
bool _n_up_19551=((_n_vy_19550-(18.0*_n_tt_19541))>0.0);
{double _n_back_19552=0.0;
for(;d::truth((_n_back_19552<=(d::truth(_n_up_19551)?1.0:0.0)));(void)((_n_back_19552++))){d::check_cancel();double _n_ts_19553=(_n_tt_19541-(_n_back_19552*0.06));
double _n_cx_19554=d::round((_n_x0_19535+(_n_vx_19549*_n_ts_19553)));
double _n_cy_19555=d::round(((_n_y0_19536-(_n_vy_19550*_n_ts_19553))+((9.0*_n_ts_19553)*_n_ts_19553)));
if((((((d::truth((_n_ts_19553<0.0))||d::truth((_n_cy_19555<0.0)))||d::truth((_n_cy_19555>=this->_n_rows_19438)))||d::truth((_n_cx_19554<0.0)))||d::truth((_n_cx_19554>=this->_n_cols_19437)))||d::truth((_n_cy_19555>(_n_y0_19536+0.3))))){d::check_cancel();continue;
}
double _n_k_19556=((_n_cy_19555*this->_n_cols_19437)+_n_cx_19554);
if((d::truth((d::at(this->_n_rockAt_19441,_n_k_19556)>=0.0))&&d::truth((_n_tt_19541>0.2)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_19671=_n_out_19504;auto _n_index_19672=_n_k_19556;auto _n_value_19673=(d::truth(_n_back_19552)?((d::truth((d::at(_n_out_19504,_n_k_19556)==d::String(u" ")))||d::truth((d::at(_n_out_19504,_n_k_19556)==d::String(u"~"))))?d::String(u"'"):d::at(_n_out_19504,_n_k_19556)):(d::truth((_n_tt_19541<0.22))?(d::truth((_n_f_19546<0.4))?d::String(u"#"):d::String(u"*")):(d::truth(_n_up_19551)?d::String(u"*"):(d::truth((_n_tt_19541<1.15))?d::String(u":"):d::String(u".")))));d::put(_n_array_19671,_n_index_19672,_n_value_19673);return _n_value_19673;})());
}}
}}

}
}));
d::Array<d::String,false> _n_lines_19557=d::Array<d::String,false>{};
{double _n_r_19558=0.0;
for(;d::truth((_n_r_19558<this->_n_rows_19438));(void)((_n_r_19558++))){d::check_cancel();(void)(_n_lines_19557.push(d::join(_n_out_19504.slice((_n_r_19558*this->_n_cols_19437),((_n_r_19558+1.0)*this->_n_cols_19437)),d::String(u""))));
}}
return d::join(_n_lines_19557,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lighthouse").cols)*ascii::catalog_meta("lighthouse").rows);auto _env=std::make_shared<_n_Record_19559>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lighthouse_meta(){return catalog_meta("lighthouse");}
std::unique_ptr<Piece> make_lighthouse(const AsciiPieceOptions &o){return std::make_unique<Native_lighthouse>(o);}
}
