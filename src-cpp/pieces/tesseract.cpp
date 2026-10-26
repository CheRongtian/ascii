// Direct, statically typed C++ from src/pieces/tesseract.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_32567;
struct _n_Record_32672;
struct _n_Record_32567{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_32567> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32567>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_32672{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_32672> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32672>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_stroke_32569(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5);
std::shared_ptr<_n_Record_32567> _n_meta_32566=[](){return ([&](){auto _n_object_32675=std::make_shared<_n_Record_32567>();_n_object_32675->_p_name=d::String(u"tesseract");_n_object_32675->_p_category=d::String(u"shapes");_n_object_32675->_p_note=d::String(u"a 4d hypercube turning, its cubes passing through each other");_n_object_32675->_p_cols=54.0;_n_object_32675->_p_rows=28.0;_n_object_32675->_p_fps=30.0;return _n_object_32675;})();}();
d::Array<double,false> _n_LIMITS_32568=[](){return d::Array<double,false>{0.2,0.38,1.0,2.1};}();
double _n_stroke_32569(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5){double _n_ax_32594=_a0;
double _n_ay_32595=_a1;
double _n_bx_32596=_a2;
double _n_by_32597=_a3;
double _n_mode_32598=_a4;
std::function<void(double,double,d::String,double)> _n_put_32599=_a5;
{
if(d::truth((_n_bx_32596<_n_ax_32594))){d::check_cancel();(void)(([&](){auto _n_unpack_32676=std::array<double,4>{_n_bx_32596,_n_by_32597,_n_ax_32594,_n_ay_32595};_n_ax_32594=d::at(_n_unpack_32676,0.0);_n_ay_32595=d::at(_n_unpack_32676,1.0);_n_bx_32596=d::at(_n_unpack_32676,2.0);_n_by_32597=d::at(_n_unpack_32676,3.0);return _n_unpack_32676;})());
}
double _n_dx_32604=(_n_bx_32596-_n_ax_32594);
double _n_dy_32605=(_n_by_32597-_n_ay_32595);
if((d::truth((_n_dx_32604<0.000001))&&d::truth((std::fabs(_n_dy_32605)<0.000001)))){d::check_cancel();return _n_mode_32598;
}
double _n_q_32606=([&](){auto _n_left_32677=std::fabs(_n_dy_32605);auto _n_right_32678=d::maximum({_n_dx_32604,0.000001});return (_n_left_32677/_n_right_32678);})();
if(d::truth((!d::truth(([&]()->bool{auto _n_logical_32679=([&]()->bool{auto _n_logical_32681=(_n_mode_32598>=0.0);return d::truth(_n_logical_32681)?(_n_q_32606>(([&]()->double{auto _n_logical_32682=d::at(_n_LIMITS_32568,(_n_mode_32598-1.0));return d::truth(_n_logical_32682)?_n_logical_32682:0.0;})()/1.1)):_n_logical_32681;})();return d::truth(_n_logical_32679)?(_n_q_32606<(([&]()->double{auto _n_logical_32680=d::at(_n_LIMITS_32568,_n_mode_32598);return d::truth(_n_logical_32680)?_n_logical_32680:INFINITY;})()*1.1)):_n_logical_32679;})())))){d::check_cancel();(void)((_n_mode_32598=0.0));
while((d::truth((_n_mode_32598<4.0))&&d::truth((_n_q_32606>=d::at(_n_LIMITS_32568,_n_mode_32598))))){d::check_cancel();(void)((_n_mode_32598++));
}
}
if(d::truth((_n_mode_32598<2.0))){d::check_cancel();double _n_n_32607=(d::truth(_n_mode_32598)?4.0:2.0);
d::Array<d::String,false> _n_g_32608=(d::truth(_n_mode_32598)?d::Array<d::String,false>{d::String(u"_"),(d::truth((_n_dy_32605>0.0))?d::String(u"`"):d::String(u"'")),d::String(u"-"),d::String(u"."),d::String(u"_")}:d::Array<d::String,false>{d::String(u"_"),d::String(u"-"),d::String(u"_")});
{double _n_c_32609=std::ceil((_n_ax_32594-0.5));
for(;d::truth((_n_c_32609<=std::floor((_n_bx_32596-0.5))));(void)((_n_c_32609++))){d::check_cancel();double _n_y_32610=(_n_ay_32595+((_n_dy_32605*((_n_c_32609+0.5)-_n_ax_32594))/_n_dx_32604));
double _n_r_32611=std::floor(_n_y_32610);
double _n_i_32612=d::round(((_n_y_32610-_n_r_32611)*_n_n_32607));
(void)(_n_put_32599(_n_c_32609,(d::truth(_n_i_32612)?_n_r_32611:(_n_r_32611-1.0)),d::at(_n_g_32608,_n_i_32612),_n_c_32609));
}}
}else {d::check_cancel();if(d::truth((_n_mode_32598==2.0))){d::check_cancel();{double _n_X_32613=d::round(_n_ax_32594);
for(;d::truth((_n_X_32613<d::round(_n_bx_32596)));(void)((_n_X_32613++))){d::check_cancel();double _n_ya_32614=d::round((_n_ay_32595+((_n_dy_32605*(_n_X_32613-_n_ax_32594))/_n_dx_32604)));
double _n_yb_32615=d::round((_n_ay_32595+((_n_dy_32605*((_n_X_32613+1.0)-_n_ax_32594))/_n_dx_32604)));
if(d::truth((_n_yb_32615>_n_ya_32614))){d::check_cancel();(void)(_n_put_32599(_n_X_32613,_n_ya_32614,d::String(u"\\"),_n_X_32613));
}else {d::check_cancel();(void)(_n_put_32599(_n_X_32613,(_n_ya_32614-1.0),(d::truth((_n_yb_32615<_n_ya_32614))?d::String(u"/"):d::String(u"_")),_n_X_32613));
}
}}
}else {d::check_cancel();d::String _n_ch_32616=(d::truth((_n_mode_32598==4.0))?d::String(u"|"):(d::truth((_n_dy_32605<0.0))?d::String(u"/"):d::String(u"\\")));
{double _n_r_32617=std::ceil((d::minimum({_n_ay_32595,_n_by_32597})-0.5));
for(;d::truth((_n_r_32617<=std::floor((d::maximum({_n_ay_32595,_n_by_32597})-0.5))));(void)((_n_r_32617++))){d::check_cancel();(void)(([&](){auto _n_argument_32683=std::floor((_n_ax_32594+((_n_dx_32604*((_n_r_32617+0.5)-_n_ay_32595))/_n_dy_32605)));auto _n_argument_32684=_n_r_32617;auto _n_argument_32685=_n_ch_32616;auto _n_argument_32686=_n_r_32617;return _n_put_32599(_n_argument_32683,_n_argument_32684,_n_argument_32685,_n_argument_32686);})());
}}
}
}
return _n_mode_32598;

}
}

struct Native_tesseract final:ascii::Piece{
double _n_cols_32570{};
double _n_rows_32571{};
d::Array<d::Array<double,false>,false> _n_V_32572{};
d::Array<std::array<double,2>,false> _n_E_32573{};
double _n_W_32574{};
double _n_D_32575{};
double _n_ASPECT_32576{};
d::Array<double,false> _n_tilt_32577{};
double _n_YZ_32578{};
double _n_LOOP_32579{};
d::Array<std::array<double,4>,false> _n_R_32582{};
d::Array<std::array<double,2>,false> _n_P_32583{};
double _n_ex_32585{};
double _n_ey_32586{};
double _n_K_32587{};
d::Array<d::String,false> _n_out_32588{};
d::Array<std::array<double,2>,false> _n_S_32589{};
d::Array<int8_t,true> _n_style_32590{};
d::Array<uint8_t,true> _n_solid_32591{};
std::function<d::String(double,std::shared_ptr<_n_Record_32672>)> _render;
std::array<double,2> _n_angles_32580(double _a0){double _n_t_32621=_a0;
return std::array<double,2>{(0.4+((_n_t_32621*4.0)*this->_n_YZ_32578)),(0.2+(_n_t_32621*this->_n_YZ_32578))};}

void _n_place_32581(d::Array<double,false> _a0,double _a1,double _a2,double _a3,double _a4,d::Array<double,false> _a5){d::Array<double,false> _n_p_32622=_a0;
double _n_ca_32623=_a1;
double _n_sa_32624=_a2;
double _n_cb_32625=_a3;
double _n_sb_32626=_a4;
d::Array<double,false> _n_o_32627=_a5;
{
double _n_x_32628=((d::at(_n_p_32622,0.0)*_n_ca_32623)-(d::at(_n_p_32622,3.0)*_n_sa_32624));
double _n_w_32629=((d::at(_n_p_32622,0.0)*_n_sa_32624)+(d::at(_n_p_32622,3.0)*_n_ca_32623));
double _n_y_32630=((d::at(_n_p_32622,1.0)*_n_cb_32625)-(d::at(_n_p_32622,2.0)*_n_sb_32626));
double _n_z_32631=((d::at(_n_p_32622,1.0)*_n_sb_32626)+(d::at(_n_p_32622,2.0)*_n_cb_32625));
double _n_f_32632=(this->_n_W_32574/(this->_n_W_32574-_n_w_32629));
double _n_X_32633=(_n_x_32628*_n_f_32632);
double _n_Y_32634=(_n_y_32630*_n_f_32632);
double _n_Z_32635=(_n_z_32631*_n_f_32632);
double _n_X1_32636=((_n_X_32633*d::at(this->_n_tilt_32577,0.0))+(_n_Z_32635*d::at(this->_n_tilt_32577,1.0)));
double _n_Z1_32637=(((-d::number(_n_X_32633))*d::at(this->_n_tilt_32577,1.0))+(_n_Z_32635*d::at(this->_n_tilt_32577,0.0)));
(void)(([&](){auto&& _n_array_32711=_n_o_32627;auto _n_index_32712=0.0;auto _n_value_32713=_n_X1_32636;d::put(_n_array_32711,_n_index_32712,_n_value_32713);return _n_value_32713;})());
(void)(([&](){auto&& _n_array_32714=_n_o_32627;auto _n_index_32715=1.0;auto _n_value_32716=((_n_Y_32634*d::at(this->_n_tilt_32577,2.0))-(_n_Z1_32637*d::at(this->_n_tilt_32577,3.0)));d::put(_n_array_32714,_n_index_32715,_n_value_32716);return _n_value_32716;})());
(void)(([&](){auto&& _n_array_32717=_n_o_32627;auto _n_index_32718=2.0;auto _n_value_32719=((_n_Y_32634*d::at(this->_n_tilt_32577,3.0))+(_n_Z1_32637*d::at(this->_n_tilt_32577,2.0)));d::put(_n_array_32717,_n_index_32718,_n_value_32719);return _n_value_32719;})());
(void)(([&](){auto&& _n_array_32720=_n_o_32627;auto _n_index_32721=3.0;auto _n_value_32722=_n_w_32629;d::put(_n_array_32720,_n_index_32721,_n_value_32722);return _n_value_32722;})());

}
}

void _n_view_32584(double _a0){double _n_t_32638=_a0;
{
auto _n_binding_32723=this->_n_angles_32580(_n_t_32638);
double _n_a_32639=d::at(_n_binding_32723,0.0);
double _n_b_32640=d::at(_n_binding_32723,1.0);
double _n_ca_32641=std::cos(_n_a_32639);
double _n_sa_32642=std::sin(_n_a_32639);
double _n_cb_32643=std::cos(_n_b_32640);
double _n_sb_32644=std::sin(_n_b_32640);
double _n_mx_32645=0.0;
double _n_my_32646=0.0;
{double _n_i_32647=0.0;
for(;d::truth((_n_i_32647<16.0));(void)((_n_i_32647++))){d::check_cancel();(void)(this->_n_place_32581(d::at(this->_n_V_32572,_n_i_32647),_n_ca_32641,_n_sa_32642,_n_cb_32643,_n_sb_32644,d::Array<double,false>(d::at(this->_n_R_32582,_n_i_32647))));
(void)((_n_mx_32645=(_n_mx_32645+(([&](){auto&& _n_array_32724=d::at(this->_n_P_32583,_n_i_32647);auto _n_index_32725=0.0;auto _n_value_32726=(d::at(d::at(this->_n_R_32582,_n_i_32647),0.0)/(this->_n_D_32575-d::at(d::at(this->_n_R_32582,_n_i_32647),2.0)));d::put(_n_array_32724,_n_index_32725,_n_value_32726);return _n_value_32726;})()/16.0))));
(void)((_n_my_32646=(_n_my_32646+(([&](){auto&& _n_array_32727=d::at(this->_n_P_32583,_n_i_32647);auto _n_index_32728=1.0;auto _n_value_32729=(d::at(d::at(this->_n_R_32582,_n_i_32647),1.0)/(this->_n_D_32575-d::at(d::at(this->_n_R_32582,_n_i_32647),2.0)));d::put(_n_array_32727,_n_index_32728,_n_value_32729);return _n_value_32729;})()/16.0))));
}}
for(auto &&_n_item_32730:this->_n_P_32583){d::check_cancel();auto&& _n_p_32648=_n_item_32730;
{
(void)(([&](){auto&& _n_array_32731=_n_p_32648;auto _n_index_32732=0.0;auto _n_value_32733=(d::at(_n_array_32731,_n_index_32732)-_n_mx_32645);d::put(_n_array_32731,_n_index_32732,_n_value_32733);return _n_value_32733;})());
(void)(([&](){auto&& _n_array_32734=_n_p_32648;auto _n_index_32735=1.0;auto _n_value_32736=(d::at(_n_array_32734,_n_index_32735)-_n_my_32646);d::put(_n_array_32734,_n_index_32735,_n_value_32736);return _n_value_32736;})());

}
}

}
}

double _n_weigh_32592(double _a0,double _a1){double _n_k_32651=_a0;
double _n_w_32652=_a1;
{
if((d::truth((d::at(this->_n_solid_32591,_n_k_32651)==2.0))||d::truth((std::fabs(_n_w_32652)>0.12)))){d::check_cancel();(void)(([&](){auto&& _n_array_32737=this->_n_solid_32591;auto _n_index_32738=_n_k_32651;auto _n_value_32739=(d::truth((_n_w_32652>=0.0))?1.0:0.0);d::put(_n_array_32737,_n_index_32738,_n_value_32739);return _n_value_32739;})());
}
return d::at(this->_n_solid_32591,_n_k_32651);

}
}

bool _n_clear_32593(double _a0,double _a1){double _n_c_32653=_a0;
double _n_r_32654=_a1;
return ([&]()->bool{auto _n_logical_32740=([&]()->bool{auto _n_logical_32742=(d::at(this->_n_out_32588,(_n_c_32653+(_n_r_32654*this->_n_cols_32570)))==d::String(u" "));return d::truth(_n_logical_32742)?([&]()->bool{auto _n_logical_32743=(_n_c_32653==0.0);return d::truth(_n_logical_32743)?_n_logical_32743:(d::at(this->_n_out_32588,((_n_c_32653-1.0)+(_n_r_32654*this->_n_cols_32570)))==d::String(u" "));})():_n_logical_32742;})();return d::truth(_n_logical_32740)?([&]()->bool{auto _n_logical_32741=(_n_c_32653==(this->_n_cols_32570-1.0));return d::truth(_n_logical_32741)?_n_logical_32741:(d::at(this->_n_out_32588,((_n_c_32653+1.0)+(_n_r_32654*this->_n_cols_32570)))==d::String(u" "));})():_n_logical_32740;})();}

explicit Native_tesseract(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_32687=_n_meta_32566;
this->_n_cols_32570=_n_binding_32687->_p_cols;
this->_n_rows_32571=_n_binding_32687->_p_rows;
this->_n_V_32572=d::Array<d::Array<double,false>,false>{};
{double _n_i_32618=0.0;
for(;d::truth((_n_i_32618<16.0));(void)((_n_i_32618++))){d::check_cancel();(void)(this->_n_V_32572.push(d::Array<double,false>{(d::truth(double(d::i32(_n_i_32618)&d::i32(1.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_32618)&d::i32(2.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_32618)&d::i32(4.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_32618)&d::i32(8.0)))?1.0:(-d::number(1.0)))}));
}}
this->_n_E_32573=d::Array<std::array<double,2>,false>{};
{double _n_i_32619=0.0;
for(;d::truth((_n_i_32619<16.0));(void)((_n_i_32619++))){d::check_cancel();{double _n_b_32620=1.0;
for(;d::truth((_n_b_32620<16.0));(void)((_n_b_32620=double(int32_t(d::u32(_n_b_32620)<<(d::u32(1.0)&31)))))){d::check_cancel();if(d::truth((!d::truth(double(d::i32(_n_i_32619)&d::i32(_n_b_32620)))))){d::check_cancel();(void)(this->_n_E_32573.push(std::array<double,2>{_n_i_32619,double(d::i32(_n_i_32619)|d::i32(_n_b_32620))}));
}
}}
}}
this->_n_W_32574=3.0;
this->_n_D_32575=7.0;
this->_n_ASPECT_32576=0.5;
this->_n_tilt_32577=d::Array<double,false>{std::cos(0.5),std::sin(0.5),std::cos(0.32),std::sin(0.32)};
this->_n_YZ_32578=0.0875;
this->_n_LOOP_32579=((ascii::PI/2.0)/this->_n_YZ_32578);
this->_n_R_32582=d::map(this->_n_V_32572,[&]( ) mutable ->std::array<double,4>{return std::array<double,4>{0.0,0.0,0.0,0.0};});
this->_n_P_32583=d::map(this->_n_V_32572,[&]( ) mutable ->std::array<double,2>{return std::array<double,2>{0.0,0.0};});
this->_n_ex_32585=0.0;
this->_n_ey_32586=0.0;
{double _n_t_32649=0.0;
for(;d::truth((_n_t_32649<this->_n_LOOP_32579));(void)((_n_t_32649=(_n_t_32649+0.03)))){d::check_cancel();(void)(this->_n_view_32584(_n_t_32649));
for(auto &&_n_item_32688:this->_n_P_32583){d::check_cancel();auto&& _n_p_32650=_n_item_32688;
{
(void)((this->_n_ex_32585=([&](){auto _n_argument_32689=this->_n_ex_32585;auto _n_argument_32690=std::fabs(d::at(_n_p_32650,0.0));return d::maximum({_n_argument_32689,_n_argument_32690});})()));
(void)((this->_n_ey_32586=([&](){auto _n_argument_32691=this->_n_ey_32586;auto _n_argument_32692=std::fabs(d::at(_n_p_32650,1.0));return d::maximum({_n_argument_32691,_n_argument_32692});})()));

}
}
}}
this->_n_K_32587=d::minimum({(((this->_n_cols_32570-2.0)/2.0)/this->_n_ex_32585),((((this->_n_rows_32571-1.0)/2.0)/this->_n_ASPECT_32576)/this->_n_ey_32586)});
this->_n_out_32588=d::Array<d::String,false>(size_t((this->_n_cols_32570*this->_n_rows_32571)));
this->_n_S_32589=d::map(this->_n_V_32572,[&]( ) mutable ->std::array<double,2>{return std::array<double,2>{0.0,0.0};});
this->_n_style_32590=d::Array<int8_t,true>(size_t(double(this->_n_E_32573.size()))).fill((-d::number(1.0)));
this->_n_solid_32591=d::Array<uint8_t,true>(size_t((double(this->_n_E_32573.size())+16.0))).fill(2.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_32672> _a1) mutable ->d::String{double _n_t_32655=_a0;
{
(void)(this->_n_view_32584(_n_t_32655));
(void)(this->_n_out_32588.fill(d::String(u" ")));
{double _n_i_32656=0.0;
for(;d::truth((_n_i_32656<16.0));(void)((_n_i_32656++))){d::check_cancel();double _n_x_32657=((this->_n_cols_32570/2.0)+(this->_n_K_32587*d::at(d::at(this->_n_P_32583,_n_i_32656),0.0)));
double _n_y_32658=((this->_n_rows_32571/2.0)-((this->_n_K_32587*this->_n_ASPECT_32576)*d::at(d::at(this->_n_P_32583,_n_i_32656),1.0)));
(void)(([&](){auto&& _n_array_32693=d::at(this->_n_S_32589,_n_i_32656);auto _n_index_32694=0.0;auto _n_value_32695=(((_n_x_32657+std::floor(_n_x_32657))+0.5)/2.0);d::put(_n_array_32693,_n_index_32694,_n_value_32695);return _n_value_32695;})());
(void)(([&](){auto&& _n_array_32696=d::at(this->_n_S_32589,_n_i_32656);auto _n_index_32697=1.0;auto _n_value_32698=(((_n_y_32658+std::floor(_n_y_32658))+0.5)/2.0);d::put(_n_array_32696,_n_index_32697,_n_value_32698);return _n_value_32698;})());
}}
for(auto &&_n_item_32699:d::Array<double,false>{1.0,0.0}){d::check_cancel();double _n_pass_32659=_n_item_32699;
{
{double _n_i_32660=0.0;
for(;d::truth((_n_i_32660<16.0));(void)((_n_i_32660++))){d::check_cancel();if(d::truth((this->_n_weigh_32592((double(this->_n_E_32573.size())+_n_i_32660),d::at(d::at(this->_n_R_32582,_n_i_32660),3.0))!=_n_pass_32659))){d::check_cancel();continue;
}
double _n_c_32661=std::floor(d::at(d::at(this->_n_S_32589,_n_i_32660),0.0));
double _n_r_32662=std::floor(d::at(d::at(this->_n_S_32589,_n_i_32660),1.0));
if(((((d::truth((_n_c_32661>=0.0))&&d::truth((_n_c_32661<this->_n_cols_32570)))&&d::truth((_n_r_32662>=0.0)))&&d::truth((_n_r_32662<this->_n_rows_32571)))&&d::truth(([&]()->std::variant<double,bool>{auto _n_logical_32700=_n_pass_32659;return d::truth(_n_logical_32700)?std::variant<double,bool>(_n_logical_32700):std::variant<double,bool>(this->_n_clear_32593(_n_c_32661,_n_r_32662));})()))){d::check_cancel();(void)(([&](){auto&& _n_array_32701=this->_n_out_32588;auto _n_index_32702=(_n_c_32661+(_n_r_32662*this->_n_cols_32570));auto _n_value_32703=(d::truth(_n_pass_32659)?d::String(u"o"):d::String(u"+"));d::put(_n_array_32701,_n_index_32702,_n_value_32703);return _n_value_32703;})());
}
}}
(void)(d::forEach(this->_n_E_32573,[&]( std::array<double,2> _a0,double _a1) mutable ->void{auto _n_binding_32704=_a0;
double _n_i_32663=d::at(_n_binding_32704,0.0);
double _n_j_32664=d::at(_n_binding_32704,1.0);
double _n_e_32665=_a1;
{
if(d::truth((this->_n_weigh_32592(_n_e_32665,((d::at(d::at(this->_n_R_32582,_n_i_32663),3.0)+d::at(d::at(this->_n_R_32582,_n_j_32664),3.0))/2.0))!=_n_pass_32659))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_32705=this->_n_style_32590;auto _n_index_32706=_n_e_32665;auto _n_value_32707=_n_stroke_32569(d::at(d::at(this->_n_S_32589,_n_i_32663),0.0),d::at(d::at(this->_n_S_32589,_n_i_32663),1.0),d::at(d::at(this->_n_S_32589,_n_j_32664),0.0),d::at(d::at(this->_n_S_32589,_n_j_32664),1.0),d::at(this->_n_style_32590,_n_e_32665),[&]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_32666=_a0;
double _n_r_32667=_a1;
d::String _n_ch_32668=_a2;
double _n_k_32669=_a3;
{
if(((((d::truth((_n_c_32666<0.0))||d::truth((_n_c_32666>=this->_n_cols_32570)))||d::truth((_n_r_32667<0.0)))||d::truth((_n_r_32667>=this->_n_rows_32571)))||d::truth((d::at(this->_n_out_32588,(_n_c_32666+(_n_r_32667*this->_n_cols_32570)))!=d::String(u" "))))){d::check_cancel();return;
}
if((d::truth(_n_pass_32659)||d::truth((d::mod(_n_k_32669,3.0)!=2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_32708=this->_n_out_32588;auto _n_index_32709=(_n_c_32666+(_n_r_32667*this->_n_cols_32570));auto _n_value_32710=_n_ch_32668;d::put(_n_array_32708,_n_index_32709,_n_value_32710);return _n_value_32710;})());
}

}
});d::put(_n_array_32705,_n_index_32706,_n_value_32707);return _n_value_32707;})());

}
}));

}
}
d::Array<d::String,false> _n_lines_32670=d::Array<d::String,false>{};
{double _n_r_32671=0.0;
for(;d::truth((_n_r_32671<this->_n_rows_32571));(void)((_n_r_32671++))){d::check_cancel();(void)(_n_lines_32670.push(d::join(this->_n_out_32588.slice((_n_r_32671*this->_n_cols_32570),((_n_r_32671+1.0)*this->_n_cols_32570)),d::String(u""))));
}}
return d::join(_n_lines_32670,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tesseract").cols)*ascii::catalog_meta("tesseract").rows);auto _env=std::make_shared<_n_Record_32672>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tesseract_meta(){return catalog_meta("tesseract");}
std::unique_ptr<Piece> make_tesseract(const AsciiPieceOptions &o){return std::make_unique<Native_tesseract>(o);}
}
