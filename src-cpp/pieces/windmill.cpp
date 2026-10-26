// Direct, statically typed C++ from src/pieces/windmill.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_37359;
struct _n_Record_37437;
struct _n_Record_37473;
struct _n_Record_37359{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_37359> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37359>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_37437{
double _p_ax{};
double _p_ay{};
double _p_reachV{};
double _p_reachU{};
d::String _p_edge{};
d::String _p_lath{};
static std::shared_ptr<_n_Record_37437> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37437>();out->_p_ax=d::decode<double>(j["ax"]);out->_p_ay=d::decode<double>(j["ay"]);out->_p_reachV=d::decode<double>(j["reachV"]);out->_p_reachU=d::decode<double>(j["reachU"]);out->_p_edge=d::decode<d::String>(j["edge"]);out->_p_lath=d::decode<d::String>(j["lath"]);return out;}
};
struct _n_Record_37473{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_37473> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37473>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_37374(double _a0,double _a1);
d::String _n_stroke_37375(double _a0);
std::shared_ptr<_n_Record_37359> _n_meta_37358=[](){return ([&](){auto _n_object_37476=std::make_shared<_n_Record_37359>();_n_object_37476->_p_name=d::String(u"windmill");_n_object_37476->_p_category=d::String(u"objects");_n_object_37476->_p_note=d::String(u"four lattice sails turning on a dutch mill, clouds passing");_n_object_37476->_p_cols=64.0;_n_object_37476->_p_rows=28.0;_n_object_37476->_p_fps=20.0;return _n_object_37476;})();}();
const d::String _n_RAMP_37360=[](){return d::String(u" .:-=+*#%@");}();
const double _n_HX_37361=[](){return 32.0;}();
const double _n_HY_37362=[](){return 11.5;}();
const double _n_SAIL_37363=[](){return 10.8;}();
const double _n_WIDTH_37364=[](){return 3.0;}();
const double _n_LATH_37365=[](){return 2.25;}();
const double _n_FOOT_37366=[](){return 1.8;}();
const double _n_PERIOD_37367=[](){return 9.0;}();
const double _n_TOP_37368=[](){return 12.0;}();
const double _n_GROUND_37369=[](){return 24.5;}();
const double _n_WT_37370=[](){return 3.6;}();
const double _n_WB_37371=[](){return 5.6;}();
const double _n_STAGE_37372=[](){return 18.0;}();
d::Array<std::shared_ptr<std::tuple<d::Array<d::Array<double,false>,false>,double,double,double>>,false> _n_CLOUDS_37373=[](){return d::Array<std::shared_ptr<std::tuple<d::Array<d::Array<double,false>,false>,double,double,double>>,false>{std::make_shared<std::tuple<d::Array<d::Array<double,false>,false>,double,double,double>>(d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,1.6},d::Array<double,false>{2.2,(-d::number(0.9)),2.3},d::Array<double,false>{4.7,(-d::number(0.4)),2.0},d::Array<double,false>{6.7,0.2,1.4}},4.4,1.1,26.0),std::make_shared<std::tuple<d::Array<d::Array<double,false>,false>,double,double,double>>(d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,1.3},d::Array<double,false>{1.8,(-d::number(0.6)),1.7},d::Array<double,false>{3.5,0.0,1.3}},2.4,0.7,64.0),std::make_shared<std::tuple<d::Array<d::Array<double,false>,false>,double,double,double>>(d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,1.4},d::Array<double,false>{2.0,(-d::number(0.8)),2.0},d::Array<double,false>{4.1,(-d::number(0.5)),1.7},d::Array<double,false>{5.8,0.2,1.2}},17.4,1.5,84.0)};}();
double _n_hash_37374(double _a0,double _a1){double _n_x_37384=_a0;
double _n_y_37385=_a1;
{
double _n_h_37386=([&](){auto _n_left_37477=d::imul(_n_x_37384,668265261.0);auto _n_right_37478=d::imul(_n_y_37385,374761393.0);return double(d::i32(_n_left_37477)^d::i32(_n_right_37478));})();
(void)((_n_h_37386=d::imul(double(d::i32(_n_h_37386)^d::i32(double(d::u32(_n_h_37386)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_37386)^d::i32(double(d::u32(_n_h_37386)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

d::String _n_stroke_37375(double _a0){double _n_a_37387=_a0;
{
double _n_d_37388=d::mod((d::mod(((_n_a_37387*180.0)/ascii::PI),180.0)+180.0),180.0);
return ((d::truth((_n_d_37388<40.0))||d::truth((_n_d_37388>=140.0)))?d::String(u"-"):(d::truth((_n_d_37388<76.7))?d::String(u"/"):(d::truth((_n_d_37388<103.3))?d::String(u"|"):d::String(u"\\"))));

}
}

struct Native_windmill final:ascii::Piece{
double _n_cols_37376{};
double _n_rows_37377{};
double _n_N_37378{};
d::Array<std::optional<std::variant<d::String,double>>,false> _n_still_37379{};
double _n_sw_37380{};
d::Array<float,true> _n_cover_37381{};
d::Array<float,true> _n_shade_37382{};
std::function<d::String(double,std::shared_ptr<_n_Record_37473>)> _render;
void _n_clouds_37383(double _a0){double _n_t_37405=_a0;
{
(void)(this->_n_cover_37381.fill(0.0));
(void)(this->_n_shade_37382.fill(0.0));
for(auto &&_n_item_37545:_n_CLOUDS_37373){d::check_cancel();auto _n_binding_37546=_n_item_37545;
d::Array<d::Array<double,false>,false> _n_puffs_37406=std::get<0>(*_n_binding_37546);
double _n_row_37407=std::get<1>(*_n_binding_37546);
double _n_speed_37408=std::get<2>(*_n_binding_37546);
double _n_start_37409=std::get<3>(*_n_binding_37546);
{
double _n_span_37410=(this->_n_cols_37376+36.0);
double _n_ox_37411=(d::mod((d::mod((_n_start_37409+(_n_speed_37408*_n_t_37405)),_n_span_37410)+_n_span_37410),_n_span_37410)-22.0);
{double _n_r_37412=std::floor((_n_row_37407-4.0));
for(;d::truth((_n_r_37412<=(_n_row_37407+1.0)));(void)((_n_r_37412++))){d::check_cancel();{double _n_c_37413=std::floor((_n_ox_37411-6.0));
for(;d::truth((_n_c_37413<(_n_ox_37411+22.0)));(void)((_n_c_37413++))){d::check_cancel();if((((d::truth((_n_r_37412<0.0))||d::truth((_n_r_37412>=this->_n_rows_37377)))||d::truth((_n_c_37413<0.0)))||d::truth((_n_c_37413>=this->_n_cols_37376)))){d::check_cancel();continue;
}
double _n_k_37414=((_n_r_37412*this->_n_cols_37376)+_n_c_37413);
{double _n_j_37415=0.0;
for(;d::truth((_n_j_37415<4.0));(void)((_n_j_37415++))){d::check_cancel();{double _n_i_37416=0.0;
for(;d::truth((_n_i_37416<2.0));(void)((_n_i_37416++))){d::check_cancel();double _n_px_37417=((((_n_c_37413+0.25)+(_n_i_37416*0.5))-_n_ox_37411)/2.0);
double _n_py_37418=(((_n_r_37412+0.125)+(_n_j_37415*0.25))-_n_row_37407);
if(d::truth((_n_py_37418>0.8))){d::check_cancel();continue;
}
double _n_lit_37419=(-d::number(1.0));
for(auto &&_n_item_37547:_n_puffs_37406){d::check_cancel();auto _n_binding_37548=_n_item_37547;
double _n_a_37420=d::at(_n_binding_37548,0.0);
double _n_b_37421=d::at(_n_binding_37548,1.0);
double _n_rad_37422=d::at(_n_binding_37548,2.0);
{
double _n_nx_37423=((_n_px_37417-_n_a_37420)/_n_rad_37422);
double _n_ny_37424=((_n_py_37418-_n_b_37421)/_n_rad_37422);
double _n_q_37425=((_n_nx_37423*_n_nx_37423)+(_n_ny_37424*_n_ny_37424));
if(d::truth((_n_q_37425<1.0))){d::check_cancel();(void)((_n_lit_37419=([&](){auto _n_argument_37549=_n_lit_37419;auto _n_argument_37550=((((-d::number(0.3))*_n_nx_37423)-(0.8*_n_ny_37424))+(0.5*std::sqrt((1.0-_n_q_37425))));return d::maximum({_n_argument_37549,_n_argument_37550});})()));
}

}
}
if(d::truth((_n_lit_37419<(-d::number(0.5))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_37551=this->_n_cover_37381;auto _n_index_37552=_n_k_37414;auto _n_value_37553=(d::at(_n_array_37551,_n_index_37552)+(1.0/8.0));d::put(_n_array_37551,_n_index_37552,_n_value_37553);return _n_value_37553;})());
(void)(([&](){auto&& _n_array_37554=this->_n_shade_37382;auto _n_index_37555=_n_k_37414;auto _n_value_37556=d::maximum({d::at(this->_n_shade_37382,_n_k_37414),_n_lit_37419});d::put(_n_array_37554,_n_index_37555,_n_value_37556);return _n_value_37556;})());
}}
}}
}}
}}

}
}

}
}

explicit Native_windmill(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_37479=_n_meta_37358;
this->_n_cols_37376=_n_binding_37479->_p_cols;
this->_n_rows_37377=_n_binding_37479->_p_rows;
this->_n_N_37378=(this->_n_cols_37376*this->_n_rows_37377);
this->_n_still_37379=d::Array<std::optional<std::variant<d::String,double>>,false>(size_t(this->_n_N_37378)).fill(std::optional<std::variant<d::String,double>>{});
{double _n_r_37389=0.0;
for(;d::truth((_n_r_37389<this->_n_rows_37377));(void)((_n_r_37389++))){d::check_cancel();{double _n_c_37390=0.0;
for(;d::truth((_n_c_37390<this->_n_cols_37376));(void)((_n_c_37390++))){d::check_cancel();double _n_k_37391=((_n_r_37389*this->_n_cols_37376)+_n_c_37390);
double _n_x_37392=(((_n_c_37390+0.5)-_n_HX_37361)/2.0);
double _n_y_37393=(_n_r_37389+0.5);
double _n_g_37394=_n_GROUND_37369;
if(d::truth((_n_r_37389==std::floor(_n_g_37394)))){d::check_cancel();(void)(([&](){auto&& _n_array_37480=this->_n_still_37379;auto _n_index_37481=_n_k_37391;auto _n_value_37482=(d::truth((_n_hash_37374(_n_c_37390,9.0)<0.12))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u","))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"_"))));d::put(_n_array_37480,_n_index_37481,_n_value_37482);return _n_value_37482;})());
continue;
}
if(d::truth((_n_r_37389>_n_g_37394))){d::check_cancel();double _n_h_37395=_n_hash_37374(_n_c_37390,_n_r_37389);
double _n_d_37396=((_n_r_37389-_n_g_37394)+0.5);
(void)(([&](){auto&& _n_array_37483=this->_n_still_37379;auto _n_index_37484=_n_k_37391;auto _n_value_37485=(d::truth((_n_h_37395<(0.2/_n_d_37396)))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u","))):(d::truth((_n_h_37395<(0.32/_n_d_37396)))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"'"))):(d::truth((_n_h_37395<(0.4/_n_d_37396)))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"."))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u" "))))));d::put(_n_array_37483,_n_index_37484,_n_value_37485);return _n_value_37485;})());
continue;
}
if((d::truth((_n_y_37393>_n_TOP_37368))&&d::truth((_n_y_37393<_n_g_37394)))){d::check_cancel();double _n_w_37397=(_n_WT_37370+(((_n_WB_37371-_n_WT_37370)*(_n_y_37393-_n_TOP_37368))/(_n_GROUND_37369-_n_TOP_37368)));
if(d::truth((std::fabs(_n_x_37392)<_n_w_37397))){d::check_cancel();double _n_u_37398=(_n_x_37392/_n_w_37397);
double _n_v_37399=(d::truth((_n_u_37398<(-d::number(0.4))))?0.8:(d::truth((_n_u_37398<0.4))?0.55:0.3));
if(d::truth(d::mod(_n_r_37389,2.0))){d::check_cancel();(void)((_n_v_37399=(_n_v_37399-0.08)));
}
if((d::truth((std::fabs(_n_x_37392)<0.8))&&d::truth((_n_y_37393>(_n_GROUND_37369-2.2))))){d::check_cancel();(void)((_n_v_37399=0.08));
}
if((d::truth((std::fabs((_n_x_37392+0.2))<0.4))&&d::truth(([&]()->bool{auto _n_logical_37486=(_n_r_37389==(_n_TOP_37368+2.0));return d::truth(_n_logical_37486)?_n_logical_37486:(_n_r_37389==(_n_STAGE_37372+2.0));})()))){d::check_cancel();(void)((_n_v_37399=0.08));
}
(void)(([&](){auto&& _n_array_37487=this->_n_still_37379;auto _n_index_37488=_n_k_37391;auto _n_value_37489=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(_n_v_37399));d::put(_n_array_37487,_n_index_37488,_n_value_37489);return _n_value_37489;})());
continue;
}
}
double _n_q_37400=d::hypot(std::initializer_list<double>{(_n_x_37392/(_n_WT_37370+0.6)),(((_n_y_37393-_n_TOP_37368)-0.2)/3.8)});
if((d::truth((_n_y_37393<=(_n_TOP_37368+0.5)))&&d::truth((_n_q_37400<1.0)))){d::check_cancel();double _n_nx_37401=(_n_x_37392/(_n_WT_37370+0.6));
double _n_ny_37402=(((_n_TOP_37368+0.2)-_n_y_37393)/3.8);
double _n_nz_37403=std::sqrt(d::maximum({0.0,(1.0-(_n_q_37400*_n_q_37400))}));
(void)(([&](){auto&& _n_array_37490=this->_n_still_37379;auto _n_index_37491=_n_k_37391;auto _n_value_37492=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>((0.15+(0.75*d::maximum({0.0,((((-d::number(0.5))*_n_nx_37401)+(0.5*_n_ny_37402))+(0.7*_n_nz_37403))})))));d::put(_n_array_37490,_n_index_37491,_n_value_37492);return _n_value_37492;})());
}
}}
}}
this->_n_sw_37380=((_n_WT_37370+(((_n_WB_37371-_n_WT_37370)*(_n_STAGE_37372-_n_TOP_37368))/(_n_GROUND_37369-_n_TOP_37368)))+1.8);
{double _n_c_37404=d::round((_n_HX_37361-(2.0*this->_n_sw_37380)));
for(;d::truth((_n_c_37404<=d::round((_n_HX_37361+(2.0*this->_n_sw_37380)))));(void)((_n_c_37404++))){d::check_cancel();(void)(([&](){auto&& _n_array_37493=this->_n_still_37379;auto _n_index_37494=((_n_STAGE_37372*this->_n_cols_37376)+_n_c_37404);auto _n_value_37495=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"=")));d::put(_n_array_37493,_n_index_37494,_n_value_37495);return _n_value_37495;})());
(void)(([&](){auto&& _n_array_37496=this->_n_still_37379;auto _n_index_37497=(((_n_STAGE_37372-1.0)*this->_n_cols_37376)+_n_c_37404);auto _n_value_37498=(d::truth((d::mod((_n_c_37404-_n_HX_37361),2.0)==0.0))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"|"))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"_"))));d::put(_n_array_37496,_n_index_37497,_n_value_37498);return _n_value_37498;})());
}}
(void)(([&](){auto&& _n_array_37499=this->_n_still_37379;auto _n_index_37500=((((_n_STAGE_37372+1.0)*this->_n_cols_37376)+d::round((_n_HX_37361-(2.0*this->_n_sw_37380))))+1.0);auto _n_value_37501=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"\\")));d::put(_n_array_37499,_n_index_37500,_n_value_37501);return _n_value_37501;})());
(void)(([&](){auto&& _n_array_37502=this->_n_still_37379;auto _n_index_37503=((((_n_STAGE_37372+1.0)*this->_n_cols_37376)+d::round((_n_HX_37361+(2.0*this->_n_sw_37380))))-1.0);auto _n_value_37504=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"/")));d::put(_n_array_37502,_n_index_37503,_n_value_37504);return _n_value_37504;})());
this->_n_cover_37381=d::Array<float,true>(size_t(this->_n_N_37378));
this->_n_shade_37382=d::Array<float,true>(size_t(this->_n_N_37378));
_render=[=]( double _a0,std::shared_ptr<_n_Record_37473> _a1) mutable ->d::String{double _n_t_37426=_a0;
auto _n_binding_37507=(d::present(_a1)?_a1:([&](){auto _n_object_37506=std::make_shared<_n_Record_37473>();return _n_object_37506;})());
bool _n_paper_37427=(d::present(_n_binding_37507->_p_paper)?d::read(_n_binding_37507->_p_paper):false);
{
d::Array<d::String,false> _n_out_37428=d::Array<d::String,false>(size_t(this->_n_N_37378)).fill(d::String(u" "));
(void)(this->_n_clouds_37383(_n_t_37426));
{double _n_k_37429=0.0;
for(;d::truth((_n_k_37429<this->_n_N_37378));(void)((_n_k_37429++))){d::check_cancel();double _n_f_37430=d::at(this->_n_cover_37381,_n_k_37429);
if(d::truth((_n_f_37430<0.2))){d::check_cancel();continue;
}
double _n_v_37431=(_n_f_37430*(0.3+(0.4*d::at(this->_n_shade_37382,_n_k_37429))));
(void)(([&](){auto&& _n_array_37508=_n_out_37428;auto _n_index_37509=_n_k_37429;auto _n_value_37510=d::at(d::String(u" .·:-"),([&](){auto _n_argument_37511=1.0;auto _n_argument_37512=([&](){auto _n_argument_37513=4.0;auto _n_argument_37514=d::round((_n_v_37431*5.5));return d::minimum({_n_argument_37513,_n_argument_37514});})();return d::maximum({_n_argument_37511,_n_argument_37512});})());d::put(_n_array_37508,_n_index_37509,_n_value_37510);return _n_value_37510;})());
}}
{double _n_k_37432=0.0;
for(;d::truth((_n_k_37432<this->_n_N_37378));(void)((_n_k_37432++))){d::check_cancel();std::optional<std::variant<d::String,double>> _n_v_37433=d::at(this->_n_still_37379,_n_k_37432);
if(d::truth((!d::present(_n_v_37433)))){d::check_cancel();continue;
}
if(d::truth((d::typeOf(d::read(_n_v_37433))==d::String(u"string")))){d::check_cancel();(void)(([&](){auto&& _n_array_37515=_n_out_37428;auto _n_index_37516=_n_k_37432;auto _n_value_37517=std::get<d::String>(d::read(_n_v_37433));d::put(_n_array_37515,_n_index_37516,_n_value_37517);return _n_value_37517;})());
}else {d::check_cancel();double _n_i_37434=([&](){auto _n_argument_37518=1.0;auto _n_argument_37519=([&](){auto _n_argument_37520=9.0;auto _n_argument_37521=d::round((std::get<double>(d::read(_n_v_37433))*9.0));return d::minimum({_n_argument_37520,_n_argument_37521});})();return d::maximum({_n_argument_37518,_n_argument_37519});})();
(void)(([&](){auto&& _n_array_37522=_n_out_37428;auto _n_index_37523=_n_k_37432;auto _n_value_37524=d::at(_n_RAMP_37360,(d::truth(_n_paper_37427)?(10.0-_n_i_37434):_n_i_37434));d::put(_n_array_37522,_n_index_37523,_n_value_37524);return _n_value_37524;})());
}
}}
double _n_turn_37435=(((2.0*ascii::PI)*_n_t_37426)/_n_PERIOD_37367);
d::Array<std::shared_ptr<_n_Record_37437>,false> _n_sails_37436=d::map(d::Array<double,false>{0.0,1.0,2.0,3.0},[&]( double _a0) mutable ->std::shared_ptr<_n_Record_37437>{double _n_i_37438=_a0;
{
double _n_a_37439=(_n_turn_37435+((_n_i_37438*ascii::PI)/2.0));
double _n_ax_37440=std::cos(_n_a_37439);
double _n_ay_37441=std::sin(_n_a_37439);
double _n_reachV_37442=(d::truth(([&](){auto _n_left_37525=std::fabs(_n_ay_37441);auto _n_right_37526=(2.0*std::fabs(_n_ax_37440));return (_n_left_37525>_n_right_37526);})())?(0.25*std::fabs(_n_ay_37441)):(0.5*std::fabs(_n_ax_37440)));
double _n_reachU_37443=(d::truth(([&](){auto _n_left_37527=std::fabs(_n_ax_37440);auto _n_right_37528=(2.0*std::fabs(_n_ay_37441));return (_n_left_37527>_n_right_37528);})())?(0.25*std::fabs(_n_ax_37440)):(0.5*std::fabs(_n_ay_37441)));
return ([&](){auto _n_object_37530=std::make_shared<_n_Record_37437>();_n_object_37530->_p_ax=_n_ax_37440;_n_object_37530->_p_ay=_n_ay_37441;_n_object_37530->_p_reachV=_n_reachV_37442;_n_object_37530->_p_reachU=_n_reachU_37443;_n_object_37530->_p_edge=_n_stroke_37375(_n_a_37439);_n_object_37530->_p_lath=_n_stroke_37375((_n_a_37439+(ascii::PI/2.0)));return _n_object_37530;})();

}
});
auto _n_on_37444=[&]( double _a0,double _a1) mutable ->bool{double _n_d_37445=_a0;
double _n_reach_37446=_a1;
return (std::fabs((_n_d_37445+0.013))<=_n_reach_37446);};
{double _n_r_37447=0.0;
for(;d::truth((_n_r_37447<this->_n_rows_37377));(void)((_n_r_37447++))){d::check_cancel();{double _n_c_37448=0.0;
for(;d::truth((_n_c_37448<this->_n_cols_37376));(void)((_n_c_37448++))){d::check_cancel();double _n_x_37449=((_n_c_37448-_n_HX_37361)/2.0);
double _n_y_37450=(_n_HY_37362-(_n_r_37447+0.5));
if(d::truth((((_n_x_37449*_n_x_37449)+(_n_y_37450*_n_y_37450))>std::pow((_n_SAIL_37363+1.0),2.0)))){d::check_cancel();continue;
}
std::optional<d::String> _n_hit_37451=std::optional<d::String>{};
double _n_rank_37452=0.0;
for(auto &&_n_item_37531:_n_sails_37436){d::check_cancel();auto _n_binding_37532=_n_item_37531;
double _n_ax_37453=_n_binding_37532->_p_ax;
double _n_ay_37454=_n_binding_37532->_p_ay;
double _n_reachV_37455=_n_binding_37532->_p_reachV;
double _n_reachU_37456=_n_binding_37532->_p_reachU;
d::String _n_edge_37457=_n_binding_37532->_p_edge;
d::String _n_lath_37458=_n_binding_37532->_p_lath;
{
double _n_u_37459=((_n_x_37449*_n_ax_37453)+(_n_y_37450*_n_ay_37454));
double _n_v_37460=((_n_x_37449*_n_ay_37454)-(_n_y_37450*_n_ax_37453));
if((((d::truth((_n_u_37459<0.6))||d::truth((_n_u_37459>(_n_SAIL_37363+0.6))))||d::truth((_n_v_37460<(-d::number(0.8)))))||d::truth((_n_v_37460>(_n_WIDTH_37364+0.8))))){d::check_cancel();continue;
}
std::optional<d::String> _n_ch_37461=std::optional<d::String>{};
double _n_k_37462=0.0;
if((d::truth(_n_on_37444(_n_v_37460,_n_reachV_37455))&&d::truth((_n_u_37459<(_n_SAIL_37363+0.3))))){d::check_cancel();(void)((d::read((_n_ch_37461=std::optional<d::String>(d::String(u"#")))),(_n_k_37462=4.0)));
}else {d::check_cancel();if(((d::truth((_n_u_37459>(_n_FOOT_37366-0.2)))&&d::truth((_n_u_37459<(_n_SAIL_37363+0.3))))&&d::truth(_n_on_37444((_n_v_37460-_n_WIDTH_37364),_n_reachV_37455)))){d::check_cancel();(void)((d::read((_n_ch_37461=std::optional<d::String>(_n_edge_37457))),(_n_k_37462=3.0)));
}else {d::check_cancel();if((((d::truth((_n_v_37460>0.45))&&d::truth((_n_v_37460<(_n_WIDTH_37364-0.45))))&&d::truth((_n_u_37459>(_n_FOOT_37366-0.5))))&&d::truth((_n_u_37459<(_n_SAIL_37363+0.3))))){d::check_cancel();double _n_off_37463=(d::mod(((_n_u_37459-_n_FOOT_37366)+(_n_LATH_37365/2.0)),_n_LATH_37365)-(_n_LATH_37365/2.0));
if(d::truth(_n_on_37444(_n_off_37463,_n_reachU_37456))){d::check_cancel();(void)((d::read((_n_ch_37461=std::optional<d::String>(_n_lath_37458))),(_n_k_37462=2.0)));
}
}
}
}
if(d::truth((!d::truth(_n_ch_37461)))){d::check_cancel();double _n_n_37464=0.0;
{double _n_j_37465=0.0;
for(;d::truth((_n_j_37465<4.0));(void)((_n_j_37465++))){d::check_cancel();{double _n_i_37466=0.0;
for(;d::truth((_n_i_37466<2.0));(void)((_n_i_37466++))){d::check_cancel();double _n_px_37467=(_n_x_37449+((_n_i_37466-0.5)*0.25));
double _n_py_37468=(_n_y_37450-((_n_j_37465-1.5)*0.25));
double _n_uu_37469=((_n_px_37467*_n_ax_37453)+(_n_py_37468*_n_ay_37454));
double _n_vv_37470=((_n_px_37467*_n_ay_37454)-(_n_py_37468*_n_ax_37453));
if((((d::truth((_n_uu_37469>_n_FOOT_37366))&&d::truth((_n_uu_37469<_n_SAIL_37363)))&&d::truth((_n_vv_37470>0.0)))&&d::truth((_n_vv_37470<_n_WIDTH_37364)))){d::check_cancel();(void)((_n_n_37464++));
}
}}
}}
if(d::truth((_n_n_37464>=4.0))){d::check_cancel();(void)((d::read((_n_ch_37461=std::optional<d::String>(d::String(u".")))),(_n_k_37462=1.0)));
}
}
if(d::truth((_n_k_37462>_n_rank_37452))){d::check_cancel();(void)(((_n_hit_37451=_n_ch_37461),(_n_rank_37452=_n_k_37462)));
}

}
}
if(d::truth(_n_hit_37451)){d::check_cancel();(void)(([&](){auto&& _n_array_37533=_n_out_37428;auto _n_index_37534=((_n_r_37447*this->_n_cols_37376)+_n_c_37448);auto _n_value_37535=d::read(_n_hit_37451);d::put(_n_array_37533,_n_index_37534,_n_value_37535);return _n_value_37535;})());
}
}}
}}
(void)(([&](){auto&& _n_array_37536=_n_out_37428;auto _n_index_37537=(((std::floor(_n_HY_37362)*this->_n_cols_37376)+_n_HX_37361)-1.0);auto _n_value_37538=d::String(u"(");d::put(_n_array_37536,_n_index_37537,_n_value_37538);return _n_value_37538;})());
(void)(([&](){auto&& _n_array_37539=_n_out_37428;auto _n_index_37540=((std::floor(_n_HY_37362)*this->_n_cols_37376)+_n_HX_37361);auto _n_value_37541=d::String(u"@");d::put(_n_array_37539,_n_index_37540,_n_value_37541);return _n_value_37541;})());
(void)(([&](){auto&& _n_array_37542=_n_out_37428;auto _n_index_37543=(((std::floor(_n_HY_37362)*this->_n_cols_37376)+_n_HX_37361)+1.0);auto _n_value_37544=d::String(u")");d::put(_n_array_37542,_n_index_37543,_n_value_37544);return _n_value_37544;})());
d::Array<d::String,false> _n_lines_37471=d::Array<d::String,false>{};
{double _n_r_37472=0.0;
for(;d::truth((_n_r_37472<this->_n_rows_37377));(void)((_n_r_37472++))){d::check_cancel();(void)(_n_lines_37471.push(d::join(_n_out_37428.slice((_n_r_37472*this->_n_cols_37376),((_n_r_37472+1.0)*this->_n_cols_37376)),d::String(u""))));
}}
return d::join(_n_lines_37471,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("windmill").cols)*ascii::catalog_meta("windmill").rows);auto _env=std::make_shared<_n_Record_37473>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &windmill_meta(){return catalog_meta("windmill");}
std::unique_ptr<Piece> make_windmill(const AsciiPieceOptions &o){return std::make_unique<Native_windmill>(o);}
}
