// Direct, statically typed C++ from src/pieces/windmill.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_37360;
struct _n_Record_37438;
struct _n_Record_37474;
struct _n_Record_37360{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_37360> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37360>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_37438{
double _p_ax{};
double _p_ay{};
double _p_reachV{};
double _p_reachU{};
d::String _p_edge{};
d::String _p_lath{};
static std::shared_ptr<_n_Record_37438> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37438>();out->_p_ax=d::decode<double>(j["ax"]);out->_p_ay=d::decode<double>(j["ay"]);out->_p_reachV=d::decode<double>(j["reachV"]);out->_p_reachU=d::decode<double>(j["reachU"]);out->_p_edge=d::decode<d::String>(j["edge"]);out->_p_lath=d::decode<d::String>(j["lath"]);return out;}
};
struct _n_Record_37474{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_37474> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37474>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_37375(double _a0,double _a1);
d::String _n_stroke_37376(double _a0);
std::shared_ptr<_n_Record_37360> _n_meta_37359=[](){return ([&](){auto _n_object_37477=std::make_shared<_n_Record_37360>();_n_object_37477->_p_name=d::String(u"windmill");_n_object_37477->_p_category=d::String(u"objects");_n_object_37477->_p_note=d::String(u"four lattice sails turning on a dutch mill, clouds passing");_n_object_37477->_p_cols=64.0;_n_object_37477->_p_rows=28.0;_n_object_37477->_p_fps=20.0;return _n_object_37477;})();}();
const d::String _n_RAMP_37361=[](){return d::String(u" .:-=+*#%@");}();
const double _n_HX_37362=[](){return 32.0;}();
const double _n_HY_37363=[](){return 11.5;}();
const double _n_SAIL_37364=[](){return 10.8;}();
const double _n_WIDTH_37365=[](){return 3.0;}();
const double _n_LATH_37366=[](){return 2.25;}();
const double _n_FOOT_37367=[](){return 1.8;}();
const double _n_PERIOD_37368=[](){return 9.0;}();
const double _n_TOP_37369=[](){return 12.0;}();
const double _n_GROUND_37370=[](){return 24.5;}();
const double _n_WT_37371=[](){return 3.6;}();
const double _n_WB_37372=[](){return 5.6;}();
const double _n_STAGE_37373=[](){return 18.0;}();
d::Array<std::shared_ptr<std::tuple<d::Array<std::array<double,3>,false>,double,double,double>>,false> _n_CLOUDS_37374=[](){return d::Array<std::shared_ptr<std::tuple<d::Array<std::array<double,3>,false>,double,double,double>>,false>{std::make_shared<std::tuple<d::Array<std::array<double,3>,false>,double,double,double>>(d::Array<std::array<double,3>,false>{std::array<double,3>{0.0,0.0,1.6},std::array<double,3>{2.2,(-d::number(0.9)),2.3},std::array<double,3>{4.7,(-d::number(0.4)),2.0},std::array<double,3>{6.7,0.2,1.4}},4.4,1.1,26.0),std::make_shared<std::tuple<d::Array<std::array<double,3>,false>,double,double,double>>(d::Array<std::array<double,3>,false>{std::array<double,3>{0.0,0.0,1.3},std::array<double,3>{1.8,(-d::number(0.6)),1.7},std::array<double,3>{3.5,0.0,1.3}},2.4,0.7,64.0),std::make_shared<std::tuple<d::Array<std::array<double,3>,false>,double,double,double>>(d::Array<std::array<double,3>,false>{std::array<double,3>{0.0,0.0,1.4},std::array<double,3>{2.0,(-d::number(0.8)),2.0},std::array<double,3>{4.1,(-d::number(0.5)),1.7},std::array<double,3>{5.8,0.2,1.2}},17.4,1.5,84.0)};}();
double _n_hash_37375(double _a0,double _a1){double _n_x_37385=_a0;
double _n_y_37386=_a1;
{
double _n_h_37387=([&](){auto _n_left_37478=d::imul(_n_x_37385,668265261.0);auto _n_right_37479=d::imul(_n_y_37386,374761393.0);return double(d::i32(_n_left_37478)^d::i32(_n_right_37479));})();
(void)((_n_h_37387=d::imul(double(d::i32(_n_h_37387)^d::i32(double(d::u32(_n_h_37387)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_37387)^d::i32(double(d::u32(_n_h_37387)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

d::String _n_stroke_37376(double _a0){double _n_a_37388=_a0;
{
double _n_d_37389=d::mod((d::mod(((_n_a_37388*180.0)/ascii::PI),180.0)+180.0),180.0);
return ((d::truth((_n_d_37389<40.0))||d::truth((_n_d_37389>=140.0)))?d::String(u"-"):(d::truth((_n_d_37389<76.7))?d::String(u"/"):(d::truth((_n_d_37389<103.3))?d::String(u"|"):d::String(u"\\"))));

}
}

struct Native_windmill final:ascii::Piece{
double _n_cols_37377{};
double _n_rows_37378{};
double _n_N_37379{};
d::Array<std::optional<std::variant<d::String,double>>,false> _n_still_37380{};
double _n_sw_37381{};
d::Array<float,true> _n_cover_37382{};
d::Array<float,true> _n_shade_37383{};
std::function<d::String(double,std::shared_ptr<_n_Record_37474>)> _render;
void _n_clouds_37384(double _a0){double _n_t_37406=_a0;
{
(void)(this->_n_cover_37382.fill(0.0));
(void)(this->_n_shade_37383.fill(0.0));
for(auto &&_n_item_37546:_n_CLOUDS_37374){d::check_cancel();auto _n_binding_37547=_n_item_37546;
d::Array<std::array<double,3>,false> _n_puffs_37407=std::get<0>(*_n_binding_37547);
double _n_row_37408=std::get<1>(*_n_binding_37547);
double _n_speed_37409=std::get<2>(*_n_binding_37547);
double _n_start_37410=std::get<3>(*_n_binding_37547);
{
double _n_span_37411=(this->_n_cols_37377+36.0);
double _n_ox_37412=(d::mod((d::mod((_n_start_37410+(_n_speed_37409*_n_t_37406)),_n_span_37411)+_n_span_37411),_n_span_37411)-22.0);
{double _n_r_37413=std::floor((_n_row_37408-4.0));
for(;d::truth((_n_r_37413<=(_n_row_37408+1.0)));(void)((_n_r_37413++))){d::check_cancel();{double _n_c_37414=std::floor((_n_ox_37412-6.0));
for(;d::truth((_n_c_37414<(_n_ox_37412+22.0)));(void)((_n_c_37414++))){d::check_cancel();if((((d::truth((_n_r_37413<0.0))||d::truth((_n_r_37413>=this->_n_rows_37378)))||d::truth((_n_c_37414<0.0)))||d::truth((_n_c_37414>=this->_n_cols_37377)))){d::check_cancel();continue;
}
double _n_k_37415=((_n_r_37413*this->_n_cols_37377)+_n_c_37414);
{double _n_j_37416=0.0;
for(;d::truth((_n_j_37416<4.0));(void)((_n_j_37416++))){d::check_cancel();{double _n_i_37417=0.0;
for(;d::truth((_n_i_37417<2.0));(void)((_n_i_37417++))){d::check_cancel();double _n_px_37418=((((_n_c_37414+0.25)+(_n_i_37417*0.5))-_n_ox_37412)/2.0);
double _n_py_37419=(((_n_r_37413+0.125)+(_n_j_37416*0.25))-_n_row_37408);
if(d::truth((_n_py_37419>0.8))){d::check_cancel();continue;
}
double _n_lit_37420=(-d::number(1.0));
for(auto &&_n_item_37548:_n_puffs_37407){d::check_cancel();auto _n_binding_37549=_n_item_37548;
double _n_a_37421=d::at(_n_binding_37549,0.0);
double _n_b_37422=d::at(_n_binding_37549,1.0);
double _n_rad_37423=d::at(_n_binding_37549,2.0);
{
double _n_nx_37424=((_n_px_37418-_n_a_37421)/_n_rad_37423);
double _n_ny_37425=((_n_py_37419-_n_b_37422)/_n_rad_37423);
double _n_q_37426=((_n_nx_37424*_n_nx_37424)+(_n_ny_37425*_n_ny_37425));
if(d::truth((_n_q_37426<1.0))){d::check_cancel();(void)((_n_lit_37420=([&](){auto _n_argument_37550=_n_lit_37420;auto _n_argument_37551=((((-d::number(0.3))*_n_nx_37424)-(0.8*_n_ny_37425))+(0.5*std::sqrt((1.0-_n_q_37426))));return d::maximum({_n_argument_37550,_n_argument_37551});})()));
}

}
}
if(d::truth((_n_lit_37420<(-d::number(0.5))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_37552=this->_n_cover_37382;auto _n_index_37553=_n_k_37415;auto _n_value_37554=(d::at(_n_array_37552,_n_index_37553)+(1.0/8.0));d::put(_n_array_37552,_n_index_37553,_n_value_37554);return _n_value_37554;})());
(void)(([&](){auto&& _n_array_37555=this->_n_shade_37383;auto _n_index_37556=_n_k_37415;auto _n_value_37557=d::maximum({d::at(this->_n_shade_37383,_n_k_37415),_n_lit_37420});d::put(_n_array_37555,_n_index_37556,_n_value_37557);return _n_value_37557;})());
}}
}}
}}
}}

}
}

}
}

explicit Native_windmill(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_37480=_n_meta_37359;
this->_n_cols_37377=_n_binding_37480->_p_cols;
this->_n_rows_37378=_n_binding_37480->_p_rows;
this->_n_N_37379=(this->_n_cols_37377*this->_n_rows_37378);
this->_n_still_37380=d::Array<std::optional<std::variant<d::String,double>>,false>(size_t(this->_n_N_37379)).fill(std::optional<std::variant<d::String,double>>{});
{double _n_r_37390=0.0;
for(;d::truth((_n_r_37390<this->_n_rows_37378));(void)((_n_r_37390++))){d::check_cancel();{double _n_c_37391=0.0;
for(;d::truth((_n_c_37391<this->_n_cols_37377));(void)((_n_c_37391++))){d::check_cancel();double _n_k_37392=((_n_r_37390*this->_n_cols_37377)+_n_c_37391);
double _n_x_37393=(((_n_c_37391+0.5)-_n_HX_37362)/2.0);
double _n_y_37394=(_n_r_37390+0.5);
double _n_g_37395=_n_GROUND_37370;
if(d::truth((_n_r_37390==std::floor(_n_g_37395)))){d::check_cancel();(void)(([&](){auto&& _n_array_37481=this->_n_still_37380;auto _n_index_37482=_n_k_37392;auto _n_value_37483=(d::truth((_n_hash_37375(_n_c_37391,9.0)<0.12))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u","))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"_"))));d::put(_n_array_37481,_n_index_37482,_n_value_37483);return _n_value_37483;})());
continue;
}
if(d::truth((_n_r_37390>_n_g_37395))){d::check_cancel();double _n_h_37396=_n_hash_37375(_n_c_37391,_n_r_37390);
double _n_d_37397=((_n_r_37390-_n_g_37395)+0.5);
(void)(([&](){auto&& _n_array_37484=this->_n_still_37380;auto _n_index_37485=_n_k_37392;auto _n_value_37486=(d::truth((_n_h_37396<(0.2/_n_d_37397)))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u","))):(d::truth((_n_h_37396<(0.32/_n_d_37397)))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"'"))):(d::truth((_n_h_37396<(0.4/_n_d_37397)))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"."))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u" "))))));d::put(_n_array_37484,_n_index_37485,_n_value_37486);return _n_value_37486;})());
continue;
}
if((d::truth((_n_y_37394>_n_TOP_37369))&&d::truth((_n_y_37394<_n_g_37395)))){d::check_cancel();double _n_w_37398=(_n_WT_37371+(((_n_WB_37372-_n_WT_37371)*(_n_y_37394-_n_TOP_37369))/(_n_GROUND_37370-_n_TOP_37369)));
if(d::truth((std::fabs(_n_x_37393)<_n_w_37398))){d::check_cancel();double _n_u_37399=(_n_x_37393/_n_w_37398);
double _n_v_37400=(d::truth((_n_u_37399<(-d::number(0.4))))?0.8:(d::truth((_n_u_37399<0.4))?0.55:0.3));
if(d::truth(d::mod(_n_r_37390,2.0))){d::check_cancel();(void)((_n_v_37400=(_n_v_37400-0.08)));
}
if((d::truth((std::fabs(_n_x_37393)<0.8))&&d::truth((_n_y_37394>(_n_GROUND_37370-2.2))))){d::check_cancel();(void)((_n_v_37400=0.08));
}
if((d::truth((std::fabs((_n_x_37393+0.2))<0.4))&&d::truth(([&]()->bool{auto _n_logical_37487=(_n_r_37390==(_n_TOP_37369+2.0));return d::truth(_n_logical_37487)?_n_logical_37487:(_n_r_37390==(_n_STAGE_37373+2.0));})()))){d::check_cancel();(void)((_n_v_37400=0.08));
}
(void)(([&](){auto&& _n_array_37488=this->_n_still_37380;auto _n_index_37489=_n_k_37392;auto _n_value_37490=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(_n_v_37400));d::put(_n_array_37488,_n_index_37489,_n_value_37490);return _n_value_37490;})());
continue;
}
}
double _n_q_37401=d::hypot(std::initializer_list<double>{(_n_x_37393/(_n_WT_37371+0.6)),(((_n_y_37394-_n_TOP_37369)-0.2)/3.8)});
if((d::truth((_n_y_37394<=(_n_TOP_37369+0.5)))&&d::truth((_n_q_37401<1.0)))){d::check_cancel();double _n_nx_37402=(_n_x_37393/(_n_WT_37371+0.6));
double _n_ny_37403=(((_n_TOP_37369+0.2)-_n_y_37394)/3.8);
double _n_nz_37404=std::sqrt(d::maximum({0.0,(1.0-(_n_q_37401*_n_q_37401))}));
(void)(([&](){auto&& _n_array_37491=this->_n_still_37380;auto _n_index_37492=_n_k_37392;auto _n_value_37493=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>((0.15+(0.75*d::maximum({0.0,((((-d::number(0.5))*_n_nx_37402)+(0.5*_n_ny_37403))+(0.7*_n_nz_37404))})))));d::put(_n_array_37491,_n_index_37492,_n_value_37493);return _n_value_37493;})());
}
}}
}}
this->_n_sw_37381=((_n_WT_37371+(((_n_WB_37372-_n_WT_37371)*(_n_STAGE_37373-_n_TOP_37369))/(_n_GROUND_37370-_n_TOP_37369)))+1.8);
{double _n_c_37405=d::round((_n_HX_37362-(2.0*this->_n_sw_37381)));
for(;d::truth((_n_c_37405<=d::round((_n_HX_37362+(2.0*this->_n_sw_37381)))));(void)((_n_c_37405++))){d::check_cancel();(void)(([&](){auto&& _n_array_37494=this->_n_still_37380;auto _n_index_37495=((_n_STAGE_37373*this->_n_cols_37377)+_n_c_37405);auto _n_value_37496=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"=")));d::put(_n_array_37494,_n_index_37495,_n_value_37496);return _n_value_37496;})());
(void)(([&](){auto&& _n_array_37497=this->_n_still_37380;auto _n_index_37498=(((_n_STAGE_37373-1.0)*this->_n_cols_37377)+_n_c_37405);auto _n_value_37499=(d::truth((d::mod((_n_c_37405-_n_HX_37362),2.0)==0.0))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"|"))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"_"))));d::put(_n_array_37497,_n_index_37498,_n_value_37499);return _n_value_37499;})());
}}
(void)(([&](){auto&& _n_array_37500=this->_n_still_37380;auto _n_index_37501=((((_n_STAGE_37373+1.0)*this->_n_cols_37377)+d::round((_n_HX_37362-(2.0*this->_n_sw_37381))))+1.0);auto _n_value_37502=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"\\")));d::put(_n_array_37500,_n_index_37501,_n_value_37502);return _n_value_37502;})());
(void)(([&](){auto&& _n_array_37503=this->_n_still_37380;auto _n_index_37504=((((_n_STAGE_37373+1.0)*this->_n_cols_37377)+d::round((_n_HX_37362+(2.0*this->_n_sw_37381))))-1.0);auto _n_value_37505=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"/")));d::put(_n_array_37503,_n_index_37504,_n_value_37505);return _n_value_37505;})());
this->_n_cover_37382=d::Array<float,true>(size_t(this->_n_N_37379));
this->_n_shade_37383=d::Array<float,true>(size_t(this->_n_N_37379));
_render=[=]( double _a0,std::shared_ptr<_n_Record_37474> _a1) mutable ->d::String{double _n_t_37427=_a0;
auto _n_binding_37508=(d::present(_a1)?_a1:([&](){auto _n_object_37507=std::make_shared<_n_Record_37474>();return _n_object_37507;})());
bool _n_paper_37428=(d::present(_n_binding_37508->_p_paper)?d::read(_n_binding_37508->_p_paper):false);
{
d::Array<d::String,false> _n_out_37429=d::Array<d::String,false>(size_t(this->_n_N_37379)).fill(d::String(u" "));
(void)(this->_n_clouds_37384(_n_t_37427));
{double _n_k_37430=0.0;
for(;d::truth((_n_k_37430<this->_n_N_37379));(void)((_n_k_37430++))){d::check_cancel();double _n_f_37431=d::at(this->_n_cover_37382,_n_k_37430);
if(d::truth((_n_f_37431<0.2))){d::check_cancel();continue;
}
double _n_v_37432=(_n_f_37431*(0.3+(0.4*d::at(this->_n_shade_37383,_n_k_37430))));
(void)(([&](){auto&& _n_array_37509=_n_out_37429;auto _n_index_37510=_n_k_37430;auto _n_value_37511=d::at(d::String(u" .·:-"),([&](){auto _n_argument_37512=1.0;auto _n_argument_37513=([&](){auto _n_argument_37514=4.0;auto _n_argument_37515=d::round((_n_v_37432*5.5));return d::minimum({_n_argument_37514,_n_argument_37515});})();return d::maximum({_n_argument_37512,_n_argument_37513});})());d::put(_n_array_37509,_n_index_37510,_n_value_37511);return _n_value_37511;})());
}}
{double _n_k_37433=0.0;
for(;d::truth((_n_k_37433<this->_n_N_37379));(void)((_n_k_37433++))){d::check_cancel();std::optional<std::variant<d::String,double>> _n_v_37434=d::at(this->_n_still_37380,_n_k_37433);
if(d::truth((!d::present(_n_v_37434)))){d::check_cancel();continue;
}
if(d::truth((d::typeOf(d::read(_n_v_37434))==d::String(u"string")))){d::check_cancel();(void)(([&](){auto&& _n_array_37516=_n_out_37429;auto _n_index_37517=_n_k_37433;auto _n_value_37518=std::get<d::String>(d::read(_n_v_37434));d::put(_n_array_37516,_n_index_37517,_n_value_37518);return _n_value_37518;})());
}else {d::check_cancel();double _n_i_37435=([&](){auto _n_argument_37519=1.0;auto _n_argument_37520=([&](){auto _n_argument_37521=9.0;auto _n_argument_37522=d::round((std::get<double>(d::read(_n_v_37434))*9.0));return d::minimum({_n_argument_37521,_n_argument_37522});})();return d::maximum({_n_argument_37519,_n_argument_37520});})();
(void)(([&](){auto&& _n_array_37523=_n_out_37429;auto _n_index_37524=_n_k_37433;auto _n_value_37525=d::at(_n_RAMP_37361,(d::truth(_n_paper_37428)?(10.0-_n_i_37435):_n_i_37435));d::put(_n_array_37523,_n_index_37524,_n_value_37525);return _n_value_37525;})());
}
}}
double _n_turn_37436=(((2.0*ascii::PI)*_n_t_37427)/_n_PERIOD_37368);
d::Array<std::shared_ptr<_n_Record_37438>,false> _n_sails_37437=d::map(d::Array<double,false>{0.0,1.0,2.0,3.0},[&]( double _a0) mutable ->std::shared_ptr<_n_Record_37438>{double _n_i_37439=_a0;
{
double _n_a_37440=(_n_turn_37436+((_n_i_37439*ascii::PI)/2.0));
double _n_ax_37441=std::cos(_n_a_37440);
double _n_ay_37442=std::sin(_n_a_37440);
double _n_reachV_37443=(d::truth(([&](){auto _n_left_37526=std::fabs(_n_ay_37442);auto _n_right_37527=(2.0*std::fabs(_n_ax_37441));return (_n_left_37526>_n_right_37527);})())?(0.25*std::fabs(_n_ay_37442)):(0.5*std::fabs(_n_ax_37441)));
double _n_reachU_37444=(d::truth(([&](){auto _n_left_37528=std::fabs(_n_ax_37441);auto _n_right_37529=(2.0*std::fabs(_n_ay_37442));return (_n_left_37528>_n_right_37529);})())?(0.25*std::fabs(_n_ax_37441)):(0.5*std::fabs(_n_ay_37442)));
return ([&](){auto _n_object_37531=std::make_shared<_n_Record_37438>();_n_object_37531->_p_ax=_n_ax_37441;_n_object_37531->_p_ay=_n_ay_37442;_n_object_37531->_p_reachV=_n_reachV_37443;_n_object_37531->_p_reachU=_n_reachU_37444;_n_object_37531->_p_edge=_n_stroke_37376(_n_a_37440);_n_object_37531->_p_lath=_n_stroke_37376((_n_a_37440+(ascii::PI/2.0)));return _n_object_37531;})();

}
});
auto _n_on_37445=[&]( double _a0,double _a1) mutable ->bool{double _n_d_37446=_a0;
double _n_reach_37447=_a1;
return (std::fabs((_n_d_37446+0.013))<=_n_reach_37447);};
{double _n_r_37448=0.0;
for(;d::truth((_n_r_37448<this->_n_rows_37378));(void)((_n_r_37448++))){d::check_cancel();{double _n_c_37449=0.0;
for(;d::truth((_n_c_37449<this->_n_cols_37377));(void)((_n_c_37449++))){d::check_cancel();double _n_x_37450=((_n_c_37449-_n_HX_37362)/2.0);
double _n_y_37451=(_n_HY_37363-(_n_r_37448+0.5));
if(d::truth((((_n_x_37450*_n_x_37450)+(_n_y_37451*_n_y_37451))>std::pow((_n_SAIL_37364+1.0),2.0)))){d::check_cancel();continue;
}
std::optional<d::String> _n_hit_37452=std::optional<d::String>{};
double _n_rank_37453=0.0;
for(auto &&_n_item_37532:_n_sails_37437){d::check_cancel();auto _n_binding_37533=_n_item_37532;
double _n_ax_37454=_n_binding_37533->_p_ax;
double _n_ay_37455=_n_binding_37533->_p_ay;
double _n_reachV_37456=_n_binding_37533->_p_reachV;
double _n_reachU_37457=_n_binding_37533->_p_reachU;
d::String _n_edge_37458=_n_binding_37533->_p_edge;
d::String _n_lath_37459=_n_binding_37533->_p_lath;
{
double _n_u_37460=((_n_x_37450*_n_ax_37454)+(_n_y_37451*_n_ay_37455));
double _n_v_37461=((_n_x_37450*_n_ay_37455)-(_n_y_37451*_n_ax_37454));
if((((d::truth((_n_u_37460<0.6))||d::truth((_n_u_37460>(_n_SAIL_37364+0.6))))||d::truth((_n_v_37461<(-d::number(0.8)))))||d::truth((_n_v_37461>(_n_WIDTH_37365+0.8))))){d::check_cancel();continue;
}
std::optional<d::String> _n_ch_37462=std::optional<d::String>{};
double _n_k_37463=0.0;
if((d::truth(_n_on_37445(_n_v_37461,_n_reachV_37456))&&d::truth((_n_u_37460<(_n_SAIL_37364+0.3))))){d::check_cancel();(void)((d::read((_n_ch_37462=std::optional<d::String>(d::String(u"#")))),(_n_k_37463=4.0)));
}else {d::check_cancel();if(((d::truth((_n_u_37460>(_n_FOOT_37367-0.2)))&&d::truth((_n_u_37460<(_n_SAIL_37364+0.3))))&&d::truth(_n_on_37445((_n_v_37461-_n_WIDTH_37365),_n_reachV_37456)))){d::check_cancel();(void)((d::read((_n_ch_37462=std::optional<d::String>(_n_edge_37458))),(_n_k_37463=3.0)));
}else {d::check_cancel();if((((d::truth((_n_v_37461>0.45))&&d::truth((_n_v_37461<(_n_WIDTH_37365-0.45))))&&d::truth((_n_u_37460>(_n_FOOT_37367-0.5))))&&d::truth((_n_u_37460<(_n_SAIL_37364+0.3))))){d::check_cancel();double _n_off_37464=(d::mod(((_n_u_37460-_n_FOOT_37367)+(_n_LATH_37366/2.0)),_n_LATH_37366)-(_n_LATH_37366/2.0));
if(d::truth(_n_on_37445(_n_off_37464,_n_reachU_37457))){d::check_cancel();(void)((d::read((_n_ch_37462=std::optional<d::String>(_n_lath_37459))),(_n_k_37463=2.0)));
}
}
}
}
if(d::truth((!d::truth(_n_ch_37462)))){d::check_cancel();double _n_n_37465=0.0;
{double _n_j_37466=0.0;
for(;d::truth((_n_j_37466<4.0));(void)((_n_j_37466++))){d::check_cancel();{double _n_i_37467=0.0;
for(;d::truth((_n_i_37467<2.0));(void)((_n_i_37467++))){d::check_cancel();double _n_px_37468=(_n_x_37450+((_n_i_37467-0.5)*0.25));
double _n_py_37469=(_n_y_37451-((_n_j_37466-1.5)*0.25));
double _n_uu_37470=((_n_px_37468*_n_ax_37454)+(_n_py_37469*_n_ay_37455));
double _n_vv_37471=((_n_px_37468*_n_ay_37455)-(_n_py_37469*_n_ax_37454));
if((((d::truth((_n_uu_37470>_n_FOOT_37367))&&d::truth((_n_uu_37470<_n_SAIL_37364)))&&d::truth((_n_vv_37471>0.0)))&&d::truth((_n_vv_37471<_n_WIDTH_37365)))){d::check_cancel();(void)((_n_n_37465++));
}
}}
}}
if(d::truth((_n_n_37465>=4.0))){d::check_cancel();(void)((d::read((_n_ch_37462=std::optional<d::String>(d::String(u".")))),(_n_k_37463=1.0)));
}
}
if(d::truth((_n_k_37463>_n_rank_37453))){d::check_cancel();(void)(((_n_hit_37452=_n_ch_37462),(_n_rank_37453=_n_k_37463)));
}

}
}
if(d::truth(_n_hit_37452)){d::check_cancel();(void)(([&](){auto&& _n_array_37534=_n_out_37429;auto _n_index_37535=((_n_r_37448*this->_n_cols_37377)+_n_c_37449);auto _n_value_37536=d::read(_n_hit_37452);d::put(_n_array_37534,_n_index_37535,_n_value_37536);return _n_value_37536;})());
}
}}
}}
(void)(([&](){auto&& _n_array_37537=_n_out_37429;auto _n_index_37538=(((std::floor(_n_HY_37363)*this->_n_cols_37377)+_n_HX_37362)-1.0);auto _n_value_37539=d::String(u"(");d::put(_n_array_37537,_n_index_37538,_n_value_37539);return _n_value_37539;})());
(void)(([&](){auto&& _n_array_37540=_n_out_37429;auto _n_index_37541=((std::floor(_n_HY_37363)*this->_n_cols_37377)+_n_HX_37362);auto _n_value_37542=d::String(u"@");d::put(_n_array_37540,_n_index_37541,_n_value_37542);return _n_value_37542;})());
(void)(([&](){auto&& _n_array_37543=_n_out_37429;auto _n_index_37544=(((std::floor(_n_HY_37363)*this->_n_cols_37377)+_n_HX_37362)+1.0);auto _n_value_37545=d::String(u")");d::put(_n_array_37543,_n_index_37544,_n_value_37545);return _n_value_37545;})());
d::Array<d::String,false> _n_lines_37472=d::Array<d::String,false>{};
{double _n_r_37473=0.0;
for(;d::truth((_n_r_37473<this->_n_rows_37378));(void)((_n_r_37473++))){d::check_cancel();(void)(_n_lines_37472.push(d::join(_n_out_37429.slice((_n_r_37473*this->_n_cols_37377),((_n_r_37473+1.0)*this->_n_cols_37377)),d::String(u""))));
}}
return d::join(_n_lines_37472,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("windmill").cols)*ascii::catalog_meta("windmill").rows);auto _env=std::make_shared<_n_Record_37474>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &windmill_meta(){return catalog_meta("windmill");}
std::unique_ptr<Piece> make_windmill(const AsciiPieceOptions &o){return std::make_unique<Native_windmill>(o);}
}
