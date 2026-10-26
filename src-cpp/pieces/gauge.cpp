// Direct, statically typed C++ from src/pieces/gauge.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12066;
struct _n_Record_12067;
struct _n_Record_12163;
struct _n_Record_12164;
struct _n_Record_12066{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_12067> _p_options{};
static std::shared_ptr<_n_Record_12066> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12066>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_12067>>(j["options"]);return out;}
};
struct _n_Record_12067{
d::String _p_label{};
d::String _p_unit{};
double _p_min{};
double _p_max{};
static std::shared_ptr<_n_Record_12067> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12067>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_min=d::decode<double>(j["min"]);out->_p_max=d::decode<double>(j["max"]);return out;}
};
struct _n_Record_12163{
std::optional<d::String> _p_label{};
std::optional<d::String> _p_unit{};
std::optional<double> _p_min{};
std::optional<double> _p_max{};
static std::shared_ptr<_n_Record_12163> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12163>();out->_p_label=d::decode<std::optional<d::String>>(j["label"]);out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);out->_p_min=d::decode<std::optional<double>>(j["min"]);out->_p_max=d::decode<std::optional<double>>(j["max"]);return out;}
};
struct _n_Record_12164{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12164> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12164>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_12073(double _a0);
std::shared_ptr<_n_Record_12066> _n_meta_12065=[](){return ([&](){auto _n_object_12169=std::make_shared<_n_Record_12066>();_n_object_12169->_p_name=d::String(u"gauge");_n_object_12169->_p_category=d::String(u"data");_n_object_12169->_p_note=d::String(u"semicircle dial, the needle overshoots each new reading");_n_object_12169->_p_cols=55.0;_n_object_12169->_p_rows=18.0;_n_object_12169->_p_fps=30.0;_n_object_12169->_p_options=([&](){auto _n_object_12171=std::make_shared<_n_Record_12067>();_n_object_12171->_p_label=d::String(u"load");_n_object_12171->_p_unit=d::String(u"%");_n_object_12171->_p_min=0.0;_n_object_12171->_p_max=100.0;return _n_object_12171;})();return _n_object_12169;})();}();
const double _n_HOLD_12068=[](){return 2.6;}();
const double _n_ZETA_12069=[](){return 0.38;}();
const double _n_W0_12070=[](){return 5.2;}();
d::Array<d::String,false> _n_HALF_12071=[](){return d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};}();
const double _n_R_12072=[](){return 22.0;}();
std::function<double()> _n_mulberry32_12073(double _a0){double _n_a_12101=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_12101=double(d::i32((_n_a_12101+1831565813.0))|d::i32(0.0))));
double _n_t_12102=d::imul(double(d::i32(_n_a_12101)^d::i32(double(d::u32(_n_a_12101)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_12101)));
(void)((_n_t_12102=double(d::i32((_n_t_12102+d::imul(double(d::i32(_n_t_12102)^d::i32(double(d::u32(_n_t_12102)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_12102)))))^d::i32(_n_t_12102))));
return (double(d::u32(double(d::i32(_n_t_12102)^d::i32(double(d::u32(_n_t_12102)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_gauge final:ascii::Piece{
d::String _n_label_12074{};
d::String _n_unit_12075{};
double _n_min_12076{};
double _n_max_12077{};
double _n_cols_12078{};
double _n_rows_12079{};
double _n_H_12080{};
double _n_CX_12081{};
double _n_CY_12082{};
d::Array<uint8_t,true> _n_fixed_12085{};
d::Array<d::String,false> _n_text_12086{};
d::Array<d::String,false> _n_dots_12088{};
d::Array<float,true> _n_band_12089{};
std::function<double()> _n_rand_12090{};
d::Array<double,false> _n_targets_12091{};
d::Array<std::array<double,2>,false> _n_states_12092{};
double _n_a_12093{};
double _n_w_12094{};
d::Array<uint8_t,true> _n_px_12097{};
d::Array<d::String,false> _n_out_12098{};
std::function<d::String(double,std::shared_ptr<_n_Record_12164>)> _render;
double _n_angleOf_12083(double _a0){double _n_v_12103=_a0;
return (ascii::PI*(1.0-(_n_v_12103/100.0)));}

void _n_plot_12084(d::Array<uint8_t,true> _a0,double _a1,double _a2){d::Array<uint8_t,true> _n_buf_12104=_a0;
double _n_x_12105=_a1;
double _n_y_12106=_a2;
{
double _n_c_12107=d::round(_n_x_12105);
double _n_r_12108=d::round(_n_y_12106);
if((((d::truth((_n_c_12107>=0.0))&&d::truth((_n_c_12107<this->_n_cols_12078)))&&d::truth((_n_r_12108>=0.0)))&&d::truth((_n_r_12108<this->_n_H_12080)))){d::check_cancel();(void)(([&](){auto&& _n_array_12214=_n_buf_12104;auto _n_index_12215=(_n_c_12107+(_n_r_12108*this->_n_cols_12078));auto _n_value_12216=1.0;d::put(_n_array_12214,_n_index_12215,_n_value_12216);return _n_value_12216;})());
}

}
}

void _n_put_12087(d::String _a0,double _a1,double _a2){d::String _n_s_12117=_a0;
double _n_c0_12118=_a1;
double _n_r_12119=_a2;
{
{double _n_i_12120=0.0;
for(;d::truth((_n_i_12120<double(_n_s_12117.size())));(void)((_n_i_12120++))){d::check_cancel();if((d::truth(((_n_c0_12118+_n_i_12120)>=0.0))&&d::truth(((_n_c0_12118+_n_i_12120)<this->_n_cols_12078)))){d::check_cancel();(void)(([&](){auto&& _n_array_12217=this->_n_text_12086;auto _n_index_12218=((_n_c0_12118+_n_i_12120)+(_n_r_12119*this->_n_cols_12078));auto _n_value_12219=d::at(_n_s_12117,_n_i_12120);d::put(_n_array_12217,_n_index_12218,_n_value_12219);return _n_value_12219;})());
}
}}

}
}

std::array<double,2> _n_spring_12095(double _a0,double _a1,double _a2,double _a3){double _n_x0_12134=_a0;
double _n_v0_12135=_a1;
double _n_T_12136=_a2;
double _n_s_12137=_a3;
{
double _n_A_12138=(_n_x0_12134-_n_T_12136);
double _n_B_12139=((_n_v0_12135+(this->_n_a_12093*_n_A_12138))/this->_n_w_12094);
double _n_e_12140=std::exp(((-d::number(this->_n_a_12093))*_n_s_12137));
double _n_c_12141=std::cos((this->_n_w_12094*_n_s_12137));
double _n_n_12142=std::sin((this->_n_w_12094*_n_s_12137));
return std::array<double,2>{(_n_T_12136+(_n_e_12140*((_n_A_12138*_n_c_12141)+(_n_B_12139*_n_n_12142)))),(_n_e_12140*(((-d::number(this->_n_a_12093))*((_n_A_12138*_n_c_12141)+(_n_B_12139*_n_n_12142)))+(this->_n_w_12094*(((-d::number(_n_A_12138))*_n_n_12142)+(_n_B_12139*_n_c_12141)))))};

}
}

double _n_value_12096(double _a0){double _n_t_12143=_a0;
{
double _n_k_12144=std::floor((_n_t_12143/_n_HOLD_12068));
while(d::truth((double(this->_n_targets_12091.size())<=_n_k_12144))){d::check_cancel();double _n_last_12145=d::at(this->_n_targets_12091,(double(this->_n_targets_12091.size())-1.0));
double _n_next_12146{};
do {d::check_cancel();(void)((_n_next_12146=(12.0+(this->_n_rand_12090()*76.0))));
}while(d::truth((std::fabs((_n_next_12146-_n_last_12145))<22.0)));
(void)(this->_n_states_12092.push(([&](){auto _n_arguments_12220=d::at(this->_n_states_12092,(double(this->_n_states_12092.size())-1.0));return this->_n_spring_12095(d::at(_n_arguments_12220,0.0),d::at(_n_arguments_12220,1.0),_n_last_12145,_n_HOLD_12068);})()));
(void)(this->_n_targets_12091.push(_n_next_12146));
}
return d::at(([&](){auto _n_arguments_12221=d::at(this->_n_states_12092,_n_k_12144);return this->_n_spring_12095(d::at(_n_arguments_12221,0.0),d::at(_n_arguments_12221,1.0),d::at(this->_n_targets_12091,_n_k_12144),(_n_t_12143-(_n_k_12144*_n_HOLD_12068)));})(),0.0);

}
}

void _n_centre_12099(d::String _a0,double _a1){d::String _n_s_12147=_a0;
double _n_r_12148=_a1;
{
(void)((_n_s_12147=d::slice(_n_s_12147,0.0,this->_n_cols_12078)));
double _n_c0_12149=d::round(((this->_n_CX_12081+0.5)-(double(_n_s_12147.size())/2.0)));
{double _n_j_12150=0.0;
for(;d::truth((_n_j_12150<double(_n_s_12147.size())));(void)((_n_j_12150++))){d::check_cancel();if((d::truth(((_n_c0_12149+_n_j_12150)>=0.0))&&d::truth(((_n_c0_12149+_n_j_12150)<this->_n_cols_12078)))){d::check_cancel();(void)(([&](){auto&& _n_array_12222=this->_n_out_12098;auto _n_index_12223=((_n_c0_12149+_n_j_12150)+(_n_r_12148*this->_n_cols_12078));auto _n_value_12224=d::at(_n_s_12147,_n_j_12150);d::put(_n_array_12222,_n_index_12223,_n_value_12224);return _n_value_12224;})());
}
}}

}
}

explicit Native_gauge(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12172=d::decode<std::shared_ptr<_n_Record_12163>>(_options.data);
this->_n_label_12074=(d::present(_n_binding_12172->_p_label)?d::read(_n_binding_12172->_p_label):d::String(u"load"));
this->_n_unit_12075=(d::present(_n_binding_12172->_p_unit)?d::read(_n_binding_12172->_p_unit):d::String(u"%"));
this->_n_min_12076=(d::present(_n_binding_12172->_p_min)?d::read(_n_binding_12172->_p_min):0.0);
this->_n_max_12077=(d::present(_n_binding_12172->_p_max)?d::read(_n_binding_12172->_p_max):100.0);
auto _n_binding_12173=_n_meta_12065;
this->_n_cols_12078=_n_binding_12173->_p_cols;
this->_n_rows_12079=_n_binding_12173->_p_rows;
this->_n_H_12080=(this->_n_rows_12079*2.0);
this->_n_CX_12081=27.0;
this->_n_CY_12082=27.0;
this->_n_fixed_12085=d::Array<uint8_t,true>(size_t((this->_n_cols_12078*this->_n_H_12080)));
{double _n_x_12109=(-d::number(_n_R_12072));
for(;d::truth((_n_x_12109<=_n_R_12072));(void)((_n_x_12109++))){d::check_cancel();(void)(([&](){auto _n_argument_12174=this->_n_fixed_12085;auto _n_argument_12175=(this->_n_CX_12081+_n_x_12109);auto _n_argument_12176=(this->_n_CY_12082-std::sqrt(((_n_R_12072*_n_R_12072)-(_n_x_12109*_n_x_12109))));return this->_n_plot_12084(_n_argument_12174,_n_argument_12175,_n_argument_12176);})());
}}
{double _n_y_12110=0.0;
for(;d::truth((_n_y_12110<=_n_R_12072));(void)((_n_y_12110++))){d::check_cancel();double _n_x_12111=std::sqrt(((_n_R_12072*_n_R_12072)-(_n_y_12110*_n_y_12110)));
(void)(this->_n_plot_12084(this->_n_fixed_12085,(this->_n_CX_12081-_n_x_12111),(this->_n_CY_12082-_n_y_12110)));
(void)(this->_n_plot_12084(this->_n_fixed_12085,(this->_n_CX_12081+_n_x_12111),(this->_n_CY_12082-_n_y_12110)));
}}
{double _n_v_12112=0.0;
for(;d::truth((_n_v_12112<=100.0));(void)((_n_v_12112=(_n_v_12112+10.0)))){d::check_cancel();double _n_a_12113=this->_n_angleOf_12083(_n_v_12112);
for(auto &&_n_item_12177:d::Array<double,false>{(_n_R_12072-8.0),(_n_R_12072-7.0)}){d::check_cancel();double _n_r_12114=_n_item_12177;
(void)(([&](){auto _n_argument_12178=this->_n_fixed_12085;auto _n_argument_12179=(this->_n_CX_12081+(_n_r_12114*std::cos(_n_a_12113)));auto _n_argument_12180=(this->_n_CY_12082-(_n_r_12114*std::sin(_n_a_12113)));return this->_n_plot_12084(_n_argument_12178,_n_argument_12179,_n_argument_12180);})());
}
}}
{double _n_y_12115=(-d::number(2.0));
for(;d::truth((_n_y_12115<=2.0));(void)((_n_y_12115++))){d::check_cancel();{double _n_x_12116=(-d::number(2.0));
for(;d::truth((_n_x_12116<=2.0));(void)((_n_x_12116++))){d::check_cancel();if(d::truth((((_n_x_12116*_n_x_12116)+(_n_y_12115*_n_y_12115))<=5.0))){d::check_cancel();(void)(this->_n_plot_12084(this->_n_fixed_12085,(this->_n_CX_12081+_n_x_12116),(this->_n_CY_12082+_n_y_12115)));
}
}}
}}
this->_n_text_12086=d::Array<d::String,false>(size_t((this->_n_cols_12078*this->_n_rows_12079))).fill(d::String(u""));
this->_n_dots_12088=d::Array<d::String,false>(size_t((this->_n_cols_12078*this->_n_rows_12079))).fill(d::String(u""));
{double _n_v_12121=5.0;
for(;d::truth((_n_v_12121<100.0));(void)((_n_v_12121=(_n_v_12121+10.0)))){d::check_cancel();double _n_a_12122=this->_n_angleOf_12083(_n_v_12121);
(void)(([&](){auto&& _n_array_12181=this->_n_dots_12088;auto _n_index_12182=([&](){auto _n_left_12184=d::round((this->_n_CX_12081+((_n_R_12072-7.5)*std::cos(_n_a_12122))));auto _n_right_12185=(std::floor((((this->_n_CY_12082-((_n_R_12072-7.5)*std::sin(_n_a_12122)))+0.5)/2.0))*this->_n_cols_12078);return (_n_left_12184+_n_right_12185);})();auto _n_value_12183=d::String(u"·");d::put(_n_array_12181,_n_index_12182,_n_value_12183);return _n_value_12183;})());
}}
this->_n_band_12089=d::Array<float,true>(size_t((this->_n_cols_12078*this->_n_rows_12079))).fill(d::nan);
{double _n_r_12123=0.0;
for(;d::truth((_n_r_12123<this->_n_rows_12079));(void)((_n_r_12123++))){d::check_cancel();{double _n_c_12124=0.0;
for(;d::truth((_n_c_12124<this->_n_cols_12078));(void)((_n_c_12124++))){d::check_cancel();double _n_dx_12125=(_n_c_12124-this->_n_CX_12081);
double _n_dy_12126=(this->_n_CY_12082-((2.0*_n_r_12123)+0.5));
double _n_d_12127=d::hypot(std::initializer_list<double>{_n_dx_12125,_n_dy_12126});
if(((d::truth((_n_dy_12126>(-d::number(0.6))))&&d::truth((_n_d_12127>(_n_R_12072-4.1))))&&d::truth((_n_d_12127<(_n_R_12072-2.1))))){d::check_cancel();(void)(([&](){auto&& _n_array_12186=this->_n_band_12089;auto _n_index_12187=(_n_c_12124+(_n_r_12123*this->_n_cols_12078));auto _n_value_12188=([&](){auto _n_argument_12189=d::maximum({0.0,_n_dy_12126});auto _n_argument_12190=_n_dx_12125;return std::atan2(_n_argument_12189,_n_argument_12190);})();d::put(_n_array_12186,_n_index_12187,_n_value_12188);return _n_value_12188;})());
}
}}
}}
{double _n_v_12128=0.0;
for(;d::truth((_n_v_12128<=100.0));(void)((_n_v_12128=(_n_v_12128+20.0)))){d::check_cancel();double _n_a_12129=this->_n_angleOf_12083(_n_v_12128);
d::String _n_s_12130=d::string(d::round((this->_n_min_12076+(((this->_n_max_12077-this->_n_min_12076)*_n_v_12128)/100.0))));
double _n_rr_12131=(d::truth(d::mod(_n_v_12128,100.0))?(_n_R_12072+2.5):_n_R_12072);
double _n_x_12132=([&](){auto _n_left_12191=(this->_n_CX_12081+(_n_rr_12131*std::cos(_n_a_12129)));auto _n_right_12192=(d::truth(d::mod(_n_v_12128,100.0))?((double(_n_s_12130.size())/2.0)*std::cos(_n_a_12129)):0.0);return (_n_left_12191+_n_right_12192);})();
double _n_y_12133=(d::truth(d::mod(_n_v_12128,100.0))?(this->_n_CY_12082-((_n_rr_12131+1.0)*std::sin(_n_a_12129))):(this->_n_CY_12082+3.0));
(void)(([&](){auto _n_argument_12193=_n_s_12130;auto _n_argument_12194=d::round((_n_x_12132-((double(_n_s_12130.size())-1.0)/2.0)));auto _n_argument_12195=std::floor(((_n_y_12133+0.5)/2.0));return this->_n_put_12087(_n_argument_12193,_n_argument_12194,_n_argument_12195);})());
}}
this->_n_rand_12090=_n_mulberry32_12073(42.0);
this->_n_targets_12091=d::Array<double,false>{55.0};
this->_n_states_12092=d::Array<std::array<double,2>,false>{std::array<double,2>{30.0,0.0}};
this->_n_a_12093=(_n_ZETA_12069*_n_W0_12070);
this->_n_w_12094=(_n_W0_12070*std::sqrt((1.0-(_n_ZETA_12069*_n_ZETA_12069))));
this->_n_px_12097=d::Array<uint8_t,true>(size_t((this->_n_cols_12078*this->_n_H_12080)));
this->_n_out_12098=d::Array<d::String,false>(size_t((this->_n_cols_12078*this->_n_rows_12079)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12164> _a1) mutable ->d::String{double _n_t_12151=_a0;
{
double _n_v_12152=([&](){auto _n_argument_12196=(-d::number(1.0));auto _n_argument_12197=([&](){auto _n_argument_12198=101.0;auto _n_argument_12199=this->_n_value_12096(((_n_t_12151+_n_HOLD_12068)-0.4));return d::minimum({_n_argument_12198,_n_argument_12199});})();return d::maximum({_n_argument_12196,_n_argument_12197});})();
double _n_an_12153=this->_n_angleOf_12083(_n_v_12152);
(void)(this->_n_px_12097.set(this->_n_fixed_12085));
{double _n_r_12154=2.0;
for(;d::truth((_n_r_12154<=(_n_R_12072-6.0)));(void)((_n_r_12154=(_n_r_12154+0.25)))){d::check_cancel();(void)(([&](){auto _n_argument_12200=this->_n_px_12097;auto _n_argument_12201=(this->_n_CX_12081+(_n_r_12154*std::cos(_n_an_12153)));auto _n_argument_12202=(this->_n_CY_12082-(_n_r_12154*std::sin(_n_an_12153)));return this->_n_plot_12084(_n_argument_12200,_n_argument_12201,_n_argument_12202);})());
}}
{double _n_i_12155=0.0;
for(;d::truth((_n_i_12155<(this->_n_cols_12078*this->_n_rows_12079)));(void)((_n_i_12155++))){d::check_cancel();double _n_c_12156=d::mod(_n_i_12155,this->_n_cols_12078);
double _n_y_12157=(2.0*std::floor((_n_i_12155/this->_n_cols_12078)));
double _n_k_12158=double(d::i32(d::at(this->_n_px_12097,(_n_c_12156+(_n_y_12157*this->_n_cols_12078))))|d::i32(double(int32_t(d::u32(d::at(this->_n_px_12097,(_n_c_12156+((_n_y_12157+1.0)*this->_n_cols_12078))))<<(d::u32(1.0)&31)))));
double _n_b_12159=d::at(this->_n_band_12089,_n_i_12155);
(void)(([&](){auto&& _n_array_12203=this->_n_out_12098;auto _n_index_12204=_n_i_12155;auto _n_value_12205=([&]()->d::String{auto _n_logical_12206=d::at(this->_n_text_12086,_n_i_12155);return d::truth(_n_logical_12206)?_n_logical_12206:(d::truth(_n_k_12158)?d::at(_n_HALF_12071,_n_k_12158):([&]()->d::String{auto _n_logical_12207=d::at(this->_n_dots_12088,_n_i_12155);return d::truth(_n_logical_12207)?_n_logical_12207:(d::truth((_n_b_12159==_n_b_12159))?(d::truth((_n_b_12159>=(_n_an_12153-0.02)))?d::String(u"▓"):d::String(u"░")):d::String(u" "));})());})();d::put(_n_array_12203,_n_index_12204,_n_value_12205);return _n_value_12205;})());
}}
double _n_shown_12160=d::round((this->_n_min_12076+(((this->_n_max_12077-this->_n_min_12076)*([&](){auto _n_argument_12208=0.0;auto _n_argument_12209=d::minimum({100.0,_n_v_12152});return d::maximum({_n_argument_12208,_n_argument_12209});})())/100.0)));
(void)(([&](){auto _n_argument_12210=(d::string(_n_shown_12160)+d::string(((d::truth(d::Regex(u"^[%°]",u"").test(this->_n_unit_12075))||d::truth((!d::truth(this->_n_unit_12075))))?this->_n_unit_12075:(d::string(d::String(u" "))+d::string(this->_n_unit_12075)))));auto _n_argument_12211=(double(d::i32(this->_n_CY_12082)>>(d::u32(1.0)&31))+2.0);return this->_n_centre_12099(_n_argument_12210,_n_argument_12211);})());
(void)(([&](){auto _n_argument_12212=d::string(this->_n_label_12074);auto _n_argument_12213=(double(d::i32(this->_n_CY_12082)>>(d::u32(1.0)&31))+3.0);return this->_n_centre_12099(_n_argument_12212,_n_argument_12213);})());
d::Array<d::String,false> _n_lines_12161=d::Array<d::String,false>{};
{double _n_r_12162=0.0;
for(;d::truth((_n_r_12162<this->_n_rows_12079));(void)((_n_r_12162++))){d::check_cancel();(void)(_n_lines_12161.push(d::join(this->_n_out_12098.slice((_n_r_12162*this->_n_cols_12078),((_n_r_12162+1.0)*this->_n_cols_12078)),d::String(u""))));
}}
return d::join(_n_lines_12161,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("gauge").cols)*ascii::catalog_meta("gauge").rows);auto _env=std::make_shared<_n_Record_12164>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &gauge_meta(){return catalog_meta("gauge");}
std::unique_ptr<Piece> make_gauge(const AsciiPieceOptions &o){return std::make_unique<Native_gauge>(o);}
}
