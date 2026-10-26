// Direct, statically typed C++ from src/pieces/gauge.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12067;
struct _n_Record_12068;
struct _n_Record_12164;
struct _n_Record_12165;
struct _n_Record_12067{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_12068> _p_options{};
static std::shared_ptr<_n_Record_12067> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12067>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_12068>>(j["options"]);return out;}
};
struct _n_Record_12068{
d::String _p_label{};
d::String _p_unit{};
double _p_min{};
double _p_max{};
static std::shared_ptr<_n_Record_12068> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12068>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_min=d::decode<double>(j["min"]);out->_p_max=d::decode<double>(j["max"]);return out;}
};
struct _n_Record_12164{
std::optional<d::String> _p_label{};
std::optional<d::String> _p_unit{};
std::optional<double> _p_min{};
std::optional<double> _p_max{};
static std::shared_ptr<_n_Record_12164> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12164>();out->_p_label=d::decode<std::optional<d::String>>(j["label"]);out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);out->_p_min=d::decode<std::optional<double>>(j["min"]);out->_p_max=d::decode<std::optional<double>>(j["max"]);return out;}
};
struct _n_Record_12165{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12165> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12165>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_12074(double _a0);
std::shared_ptr<_n_Record_12067> _n_meta_12066=[](){return ([&](){auto _n_object_12170=std::make_shared<_n_Record_12067>();_n_object_12170->_p_name=d::String(u"gauge");_n_object_12170->_p_category=d::String(u"data");_n_object_12170->_p_note=d::String(u"semicircle dial, the needle overshoots each new reading");_n_object_12170->_p_cols=55.0;_n_object_12170->_p_rows=18.0;_n_object_12170->_p_fps=30.0;_n_object_12170->_p_options=([&](){auto _n_object_12172=std::make_shared<_n_Record_12068>();_n_object_12172->_p_label=d::String(u"load");_n_object_12172->_p_unit=d::String(u"%");_n_object_12172->_p_min=0.0;_n_object_12172->_p_max=100.0;return _n_object_12172;})();return _n_object_12170;})();}();
const double _n_HOLD_12069=[](){return 2.6;}();
const double _n_ZETA_12070=[](){return 0.38;}();
const double _n_W0_12071=[](){return 5.2;}();
d::Array<d::String,false> _n_HALF_12072=[](){return d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};}();
const double _n_R_12073=[](){return 22.0;}();
std::function<double()> _n_mulberry32_12074(double _a0){double _n_a_12102=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_12102=double(d::i32((_n_a_12102+1831565813.0))|d::i32(0.0))));
double _n_t_12103=d::imul(double(d::i32(_n_a_12102)^d::i32(double(d::u32(_n_a_12102)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_12102)));
(void)((_n_t_12103=double(d::i32((_n_t_12103+d::imul(double(d::i32(_n_t_12103)^d::i32(double(d::u32(_n_t_12103)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_12103)))))^d::i32(_n_t_12103))));
return (double(d::u32(double(d::i32(_n_t_12103)^d::i32(double(d::u32(_n_t_12103)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_gauge final:ascii::Piece{
d::String _n_label_12075{};
d::String _n_unit_12076{};
double _n_min_12077{};
double _n_max_12078{};
double _n_cols_12079{};
double _n_rows_12080{};
double _n_H_12081{};
double _n_CX_12082{};
double _n_CY_12083{};
d::Array<uint8_t,true> _n_fixed_12086{};
d::Array<d::String,false> _n_text_12087{};
d::Array<d::String,false> _n_dots_12089{};
d::Array<float,true> _n_band_12090{};
std::function<double()> _n_rand_12091{};
d::Array<double,false> _n_targets_12092{};
d::Array<d::Array<double,false>,false> _n_states_12093{};
double _n_a_12094{};
double _n_w_12095{};
d::Array<uint8_t,true> _n_px_12098{};
d::Array<d::String,false> _n_out_12099{};
std::function<d::String(double,std::shared_ptr<_n_Record_12165>)> _render;
double _n_angleOf_12084(double _a0){double _n_v_12104=_a0;
return (ascii::PI*(1.0-(_n_v_12104/100.0)));}

void _n_plot_12085(d::Array<uint8_t,true> _a0,double _a1,double _a2){d::Array<uint8_t,true> _n_buf_12105=_a0;
double _n_x_12106=_a1;
double _n_y_12107=_a2;
{
double _n_c_12108=d::round(_n_x_12106);
double _n_r_12109=d::round(_n_y_12107);
if((((d::truth((_n_c_12108>=0.0))&&d::truth((_n_c_12108<this->_n_cols_12079)))&&d::truth((_n_r_12109>=0.0)))&&d::truth((_n_r_12109<this->_n_H_12081)))){d::check_cancel();(void)(([&](){auto&& _n_array_12215=_n_buf_12105;auto _n_index_12216=(_n_c_12108+(_n_r_12109*this->_n_cols_12079));auto _n_value_12217=1.0;d::put(_n_array_12215,_n_index_12216,_n_value_12217);return _n_value_12217;})());
}

}
}

void _n_put_12088(d::String _a0,double _a1,double _a2){d::String _n_s_12118=_a0;
double _n_c0_12119=_a1;
double _n_r_12120=_a2;
{
{double _n_i_12121=0.0;
for(;d::truth((_n_i_12121<double(_n_s_12118.size())));(void)((_n_i_12121++))){d::check_cancel();if((d::truth(((_n_c0_12119+_n_i_12121)>=0.0))&&d::truth(((_n_c0_12119+_n_i_12121)<this->_n_cols_12079)))){d::check_cancel();(void)(([&](){auto&& _n_array_12218=this->_n_text_12087;auto _n_index_12219=((_n_c0_12119+_n_i_12121)+(_n_r_12120*this->_n_cols_12079));auto _n_value_12220=d::at(_n_s_12118,_n_i_12121);d::put(_n_array_12218,_n_index_12219,_n_value_12220);return _n_value_12220;})());
}
}}

}
}

d::Array<double,false> _n_spring_12096(double _a0,double _a1,double _a2,double _a3){double _n_x0_12135=_a0;
double _n_v0_12136=_a1;
double _n_T_12137=_a2;
double _n_s_12138=_a3;
{
double _n_A_12139=(_n_x0_12135-_n_T_12137);
double _n_B_12140=((_n_v0_12136+(this->_n_a_12094*_n_A_12139))/this->_n_w_12095);
double _n_e_12141=std::exp(((-d::number(this->_n_a_12094))*_n_s_12138));
double _n_c_12142=std::cos((this->_n_w_12095*_n_s_12138));
double _n_n_12143=std::sin((this->_n_w_12095*_n_s_12138));
return d::Array<double,false>{(_n_T_12137+(_n_e_12141*((_n_A_12139*_n_c_12142)+(_n_B_12140*_n_n_12143)))),(_n_e_12141*(((-d::number(this->_n_a_12094))*((_n_A_12139*_n_c_12142)+(_n_B_12140*_n_n_12143)))+(this->_n_w_12095*(((-d::number(_n_A_12139))*_n_n_12143)+(_n_B_12140*_n_c_12142)))))};

}
}

double _n_value_12097(double _a0){double _n_t_12144=_a0;
{
double _n_k_12145=std::floor((_n_t_12144/_n_HOLD_12069));
while(d::truth((double(this->_n_targets_12092.size())<=_n_k_12145))){d::check_cancel();double _n_last_12146=d::at(this->_n_targets_12092,(double(this->_n_targets_12092.size())-1.0));
double _n_next_12147{};
do {d::check_cancel();(void)((_n_next_12147=(12.0+(this->_n_rand_12091()*76.0))));
}while(d::truth((std::fabs((_n_next_12147-_n_last_12146))<22.0)));
(void)(this->_n_states_12093.push(([&](){auto _n_arguments_12221=d::at(this->_n_states_12093,(double(this->_n_states_12093.size())-1.0));return this->_n_spring_12096(d::at(_n_arguments_12221,0.0),d::at(_n_arguments_12221,1.0),_n_last_12146,_n_HOLD_12069);})()));
(void)(this->_n_targets_12092.push(_n_next_12147));
}
return d::at(([&](){auto _n_arguments_12222=d::at(this->_n_states_12093,_n_k_12145);return this->_n_spring_12096(d::at(_n_arguments_12222,0.0),d::at(_n_arguments_12222,1.0),d::at(this->_n_targets_12092,_n_k_12145),(_n_t_12144-(_n_k_12145*_n_HOLD_12069)));})(),0.0);

}
}

void _n_centre_12100(d::String _a0,double _a1){d::String _n_s_12148=_a0;
double _n_r_12149=_a1;
{
(void)((_n_s_12148=d::slice(_n_s_12148,0.0,this->_n_cols_12079)));
double _n_c0_12150=d::round(((this->_n_CX_12082+0.5)-(double(_n_s_12148.size())/2.0)));
{double _n_j_12151=0.0;
for(;d::truth((_n_j_12151<double(_n_s_12148.size())));(void)((_n_j_12151++))){d::check_cancel();if((d::truth(((_n_c0_12150+_n_j_12151)>=0.0))&&d::truth(((_n_c0_12150+_n_j_12151)<this->_n_cols_12079)))){d::check_cancel();(void)(([&](){auto&& _n_array_12223=this->_n_out_12099;auto _n_index_12224=((_n_c0_12150+_n_j_12151)+(_n_r_12149*this->_n_cols_12079));auto _n_value_12225=d::at(_n_s_12148,_n_j_12151);d::put(_n_array_12223,_n_index_12224,_n_value_12225);return _n_value_12225;})());
}
}}

}
}

explicit Native_gauge(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12173=d::decode<std::shared_ptr<_n_Record_12164>>(_options.data);
this->_n_label_12075=(d::present(_n_binding_12173->_p_label)?d::read(_n_binding_12173->_p_label):d::String(u"load"));
this->_n_unit_12076=(d::present(_n_binding_12173->_p_unit)?d::read(_n_binding_12173->_p_unit):d::String(u"%"));
this->_n_min_12077=(d::present(_n_binding_12173->_p_min)?d::read(_n_binding_12173->_p_min):0.0);
this->_n_max_12078=(d::present(_n_binding_12173->_p_max)?d::read(_n_binding_12173->_p_max):100.0);
auto _n_binding_12174=_n_meta_12066;
this->_n_cols_12079=_n_binding_12174->_p_cols;
this->_n_rows_12080=_n_binding_12174->_p_rows;
this->_n_H_12081=(this->_n_rows_12080*2.0);
this->_n_CX_12082=27.0;
this->_n_CY_12083=27.0;
this->_n_fixed_12086=d::Array<uint8_t,true>(size_t((this->_n_cols_12079*this->_n_H_12081)));
{double _n_x_12110=(-d::number(_n_R_12073));
for(;d::truth((_n_x_12110<=_n_R_12073));(void)((_n_x_12110++))){d::check_cancel();(void)(([&](){auto _n_argument_12175=this->_n_fixed_12086;auto _n_argument_12176=(this->_n_CX_12082+_n_x_12110);auto _n_argument_12177=(this->_n_CY_12083-std::sqrt(((_n_R_12073*_n_R_12073)-(_n_x_12110*_n_x_12110))));return this->_n_plot_12085(_n_argument_12175,_n_argument_12176,_n_argument_12177);})());
}}
{double _n_y_12111=0.0;
for(;d::truth((_n_y_12111<=_n_R_12073));(void)((_n_y_12111++))){d::check_cancel();double _n_x_12112=std::sqrt(((_n_R_12073*_n_R_12073)-(_n_y_12111*_n_y_12111)));
(void)(this->_n_plot_12085(this->_n_fixed_12086,(this->_n_CX_12082-_n_x_12112),(this->_n_CY_12083-_n_y_12111)));
(void)(this->_n_plot_12085(this->_n_fixed_12086,(this->_n_CX_12082+_n_x_12112),(this->_n_CY_12083-_n_y_12111)));
}}
{double _n_v_12113=0.0;
for(;d::truth((_n_v_12113<=100.0));(void)((_n_v_12113=(_n_v_12113+10.0)))){d::check_cancel();double _n_a_12114=this->_n_angleOf_12084(_n_v_12113);
for(auto &&_n_item_12178:d::Array<double,false>{(_n_R_12073-8.0),(_n_R_12073-7.0)}){d::check_cancel();double _n_r_12115=_n_item_12178;
(void)(([&](){auto _n_argument_12179=this->_n_fixed_12086;auto _n_argument_12180=(this->_n_CX_12082+(_n_r_12115*std::cos(_n_a_12114)));auto _n_argument_12181=(this->_n_CY_12083-(_n_r_12115*std::sin(_n_a_12114)));return this->_n_plot_12085(_n_argument_12179,_n_argument_12180,_n_argument_12181);})());
}
}}
{double _n_y_12116=(-d::number(2.0));
for(;d::truth((_n_y_12116<=2.0));(void)((_n_y_12116++))){d::check_cancel();{double _n_x_12117=(-d::number(2.0));
for(;d::truth((_n_x_12117<=2.0));(void)((_n_x_12117++))){d::check_cancel();if(d::truth((((_n_x_12117*_n_x_12117)+(_n_y_12116*_n_y_12116))<=5.0))){d::check_cancel();(void)(this->_n_plot_12085(this->_n_fixed_12086,(this->_n_CX_12082+_n_x_12117),(this->_n_CY_12083+_n_y_12116)));
}
}}
}}
this->_n_text_12087=d::Array<d::String,false>(size_t((this->_n_cols_12079*this->_n_rows_12080))).fill(d::String(u""));
this->_n_dots_12089=d::Array<d::String,false>(size_t((this->_n_cols_12079*this->_n_rows_12080))).fill(d::String(u""));
{double _n_v_12122=5.0;
for(;d::truth((_n_v_12122<100.0));(void)((_n_v_12122=(_n_v_12122+10.0)))){d::check_cancel();double _n_a_12123=this->_n_angleOf_12084(_n_v_12122);
(void)(([&](){auto&& _n_array_12182=this->_n_dots_12089;auto _n_index_12183=([&](){auto _n_left_12185=d::round((this->_n_CX_12082+((_n_R_12073-7.5)*std::cos(_n_a_12123))));auto _n_right_12186=(std::floor((((this->_n_CY_12083-((_n_R_12073-7.5)*std::sin(_n_a_12123)))+0.5)/2.0))*this->_n_cols_12079);return (_n_left_12185+_n_right_12186);})();auto _n_value_12184=d::String(u"·");d::put(_n_array_12182,_n_index_12183,_n_value_12184);return _n_value_12184;})());
}}
this->_n_band_12090=d::Array<float,true>(size_t((this->_n_cols_12079*this->_n_rows_12080))).fill(d::nan);
{double _n_r_12124=0.0;
for(;d::truth((_n_r_12124<this->_n_rows_12080));(void)((_n_r_12124++))){d::check_cancel();{double _n_c_12125=0.0;
for(;d::truth((_n_c_12125<this->_n_cols_12079));(void)((_n_c_12125++))){d::check_cancel();double _n_dx_12126=(_n_c_12125-this->_n_CX_12082);
double _n_dy_12127=(this->_n_CY_12083-((2.0*_n_r_12124)+0.5));
double _n_d_12128=d::hypot(std::initializer_list<double>{_n_dx_12126,_n_dy_12127});
if(((d::truth((_n_dy_12127>(-d::number(0.6))))&&d::truth((_n_d_12128>(_n_R_12073-4.1))))&&d::truth((_n_d_12128<(_n_R_12073-2.1))))){d::check_cancel();(void)(([&](){auto&& _n_array_12187=this->_n_band_12090;auto _n_index_12188=(_n_c_12125+(_n_r_12124*this->_n_cols_12079));auto _n_value_12189=([&](){auto _n_argument_12190=d::maximum({0.0,_n_dy_12127});auto _n_argument_12191=_n_dx_12126;return std::atan2(_n_argument_12190,_n_argument_12191);})();d::put(_n_array_12187,_n_index_12188,_n_value_12189);return _n_value_12189;})());
}
}}
}}
{double _n_v_12129=0.0;
for(;d::truth((_n_v_12129<=100.0));(void)((_n_v_12129=(_n_v_12129+20.0)))){d::check_cancel();double _n_a_12130=this->_n_angleOf_12084(_n_v_12129);
d::String _n_s_12131=d::string(d::round((this->_n_min_12077+(((this->_n_max_12078-this->_n_min_12077)*_n_v_12129)/100.0))));
double _n_rr_12132=(d::truth(d::mod(_n_v_12129,100.0))?(_n_R_12073+2.5):_n_R_12073);
double _n_x_12133=([&](){auto _n_left_12192=(this->_n_CX_12082+(_n_rr_12132*std::cos(_n_a_12130)));auto _n_right_12193=(d::truth(d::mod(_n_v_12129,100.0))?((double(_n_s_12131.size())/2.0)*std::cos(_n_a_12130)):0.0);return (_n_left_12192+_n_right_12193);})();
double _n_y_12134=(d::truth(d::mod(_n_v_12129,100.0))?(this->_n_CY_12083-((_n_rr_12132+1.0)*std::sin(_n_a_12130))):(this->_n_CY_12083+3.0));
(void)(([&](){auto _n_argument_12194=_n_s_12131;auto _n_argument_12195=d::round((_n_x_12133-((double(_n_s_12131.size())-1.0)/2.0)));auto _n_argument_12196=std::floor(((_n_y_12134+0.5)/2.0));return this->_n_put_12088(_n_argument_12194,_n_argument_12195,_n_argument_12196);})());
}}
this->_n_rand_12091=_n_mulberry32_12074(42.0);
this->_n_targets_12092=d::Array<double,false>{55.0};
this->_n_states_12093=d::Array<d::Array<double,false>,false>{d::Array<double,false>{30.0,0.0}};
this->_n_a_12094=(_n_ZETA_12070*_n_W0_12071);
this->_n_w_12095=(_n_W0_12071*std::sqrt((1.0-(_n_ZETA_12070*_n_ZETA_12070))));
this->_n_px_12098=d::Array<uint8_t,true>(size_t((this->_n_cols_12079*this->_n_H_12081)));
this->_n_out_12099=d::Array<d::String,false>(size_t((this->_n_cols_12079*this->_n_rows_12080)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12165> _a1) mutable ->d::String{double _n_t_12152=_a0;
{
double _n_v_12153=([&](){auto _n_argument_12197=(-d::number(1.0));auto _n_argument_12198=([&](){auto _n_argument_12199=101.0;auto _n_argument_12200=this->_n_value_12097(((_n_t_12152+_n_HOLD_12069)-0.4));return d::minimum({_n_argument_12199,_n_argument_12200});})();return d::maximum({_n_argument_12197,_n_argument_12198});})();
double _n_an_12154=this->_n_angleOf_12084(_n_v_12153);
(void)(this->_n_px_12098.set(this->_n_fixed_12086));
{double _n_r_12155=2.0;
for(;d::truth((_n_r_12155<=(_n_R_12073-6.0)));(void)((_n_r_12155=(_n_r_12155+0.25)))){d::check_cancel();(void)(([&](){auto _n_argument_12201=this->_n_px_12098;auto _n_argument_12202=(this->_n_CX_12082+(_n_r_12155*std::cos(_n_an_12154)));auto _n_argument_12203=(this->_n_CY_12083-(_n_r_12155*std::sin(_n_an_12154)));return this->_n_plot_12085(_n_argument_12201,_n_argument_12202,_n_argument_12203);})());
}}
{double _n_i_12156=0.0;
for(;d::truth((_n_i_12156<(this->_n_cols_12079*this->_n_rows_12080)));(void)((_n_i_12156++))){d::check_cancel();double _n_c_12157=d::mod(_n_i_12156,this->_n_cols_12079);
double _n_y_12158=(2.0*std::floor((_n_i_12156/this->_n_cols_12079)));
double _n_k_12159=double(d::i32(d::at(this->_n_px_12098,(_n_c_12157+(_n_y_12158*this->_n_cols_12079))))|d::i32(double(int32_t(d::u32(d::at(this->_n_px_12098,(_n_c_12157+((_n_y_12158+1.0)*this->_n_cols_12079))))<<(d::u32(1.0)&31)))));
double _n_b_12160=d::at(this->_n_band_12090,_n_i_12156);
(void)(([&](){auto&& _n_array_12204=this->_n_out_12099;auto _n_index_12205=_n_i_12156;auto _n_value_12206=([&]()->d::String{auto _n_logical_12207=d::at(this->_n_text_12087,_n_i_12156);return d::truth(_n_logical_12207)?_n_logical_12207:(d::truth(_n_k_12159)?d::at(_n_HALF_12072,_n_k_12159):([&]()->d::String{auto _n_logical_12208=d::at(this->_n_dots_12089,_n_i_12156);return d::truth(_n_logical_12208)?_n_logical_12208:(d::truth((_n_b_12160==_n_b_12160))?(d::truth((_n_b_12160>=(_n_an_12154-0.02)))?d::String(u"▓"):d::String(u"░")):d::String(u" "));})());})();d::put(_n_array_12204,_n_index_12205,_n_value_12206);return _n_value_12206;})());
}}
double _n_shown_12161=d::round((this->_n_min_12077+(((this->_n_max_12078-this->_n_min_12077)*([&](){auto _n_argument_12209=0.0;auto _n_argument_12210=d::minimum({100.0,_n_v_12153});return d::maximum({_n_argument_12209,_n_argument_12210});})())/100.0)));
(void)(([&](){auto _n_argument_12211=(d::string(_n_shown_12161)+d::string(((d::truth(d::Regex(u"^[%°]",u"").test(this->_n_unit_12076))||d::truth((!d::truth(this->_n_unit_12076))))?this->_n_unit_12076:(d::string(d::String(u" "))+d::string(this->_n_unit_12076)))));auto _n_argument_12212=(double(d::i32(this->_n_CY_12083)>>(d::u32(1.0)&31))+2.0);return this->_n_centre_12100(_n_argument_12211,_n_argument_12212);})());
(void)(([&](){auto _n_argument_12213=d::string(this->_n_label_12075);auto _n_argument_12214=(double(d::i32(this->_n_CY_12083)>>(d::u32(1.0)&31))+3.0);return this->_n_centre_12100(_n_argument_12213,_n_argument_12214);})());
d::Array<d::String,false> _n_lines_12162=d::Array<d::String,false>{};
{double _n_r_12163=0.0;
for(;d::truth((_n_r_12163<this->_n_rows_12080));(void)((_n_r_12163++))){d::check_cancel();(void)(_n_lines_12162.push(d::join(this->_n_out_12099.slice((_n_r_12163*this->_n_cols_12079),((_n_r_12163+1.0)*this->_n_cols_12079)),d::String(u""))));
}}
return d::join(_n_lines_12162,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("gauge").cols)*ascii::catalog_meta("gauge").rows);auto _env=std::make_shared<_n_Record_12165>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &gauge_meta(){return catalog_meta("gauge");}
std::unique_ptr<Piece> make_gauge(const AsciiPieceOptions &o){return std::make_unique<Native_gauge>(o);}
}
