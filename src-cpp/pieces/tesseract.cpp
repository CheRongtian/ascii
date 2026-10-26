// Direct, statically typed C++ from src/pieces/tesseract.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_32566;
struct _n_Record_32671;
struct _n_Record_32566{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_32566> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32566>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_32671{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_32671> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32671>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_stroke_32568(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5);
std::shared_ptr<_n_Record_32566> _n_meta_32565=[](){return ([&](){auto _n_object_32674=std::make_shared<_n_Record_32566>();_n_object_32674->_p_name=d::String(u"tesseract");_n_object_32674->_p_category=d::String(u"shapes");_n_object_32674->_p_note=d::String(u"a 4d hypercube turning, its cubes passing through each other");_n_object_32674->_p_cols=54.0;_n_object_32674->_p_rows=28.0;_n_object_32674->_p_fps=30.0;return _n_object_32674;})();}();
d::Array<double,false> _n_LIMITS_32567=[](){return d::Array<double,false>{0.2,0.38,1.0,2.1};}();
double _n_stroke_32568(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5){double _n_ax_32593=_a0;
double _n_ay_32594=_a1;
double _n_bx_32595=_a2;
double _n_by_32596=_a3;
double _n_mode_32597=_a4;
std::function<void(double,double,d::String,double)> _n_put_32598=_a5;
{
if(d::truth((_n_bx_32595<_n_ax_32593))){d::check_cancel();(void)(([&](){auto _n_unpack_32675=d::Array<double,false>{_n_bx_32595,_n_by_32596,_n_ax_32593,_n_ay_32594};_n_ax_32593=d::at(_n_unpack_32675,0.0);_n_ay_32594=d::at(_n_unpack_32675,1.0);_n_bx_32595=d::at(_n_unpack_32675,2.0);_n_by_32596=d::at(_n_unpack_32675,3.0);return _n_unpack_32675;})());
}
double _n_dx_32603=(_n_bx_32595-_n_ax_32593);
double _n_dy_32604=(_n_by_32596-_n_ay_32594);
if((d::truth((_n_dx_32603<0.000001))&&d::truth((std::fabs(_n_dy_32604)<0.000001)))){d::check_cancel();return _n_mode_32597;
}
double _n_q_32605=([&](){auto _n_left_32676=std::fabs(_n_dy_32604);auto _n_right_32677=d::maximum({_n_dx_32603,0.000001});return (_n_left_32676/_n_right_32677);})();
if(d::truth((!d::truth(([&]()->bool{auto _n_logical_32678=([&]()->bool{auto _n_logical_32680=(_n_mode_32597>=0.0);return d::truth(_n_logical_32680)?(_n_q_32605>(([&]()->double{auto _n_logical_32681=d::at(_n_LIMITS_32567,(_n_mode_32597-1.0));return d::truth(_n_logical_32681)?_n_logical_32681:0.0;})()/1.1)):_n_logical_32680;})();return d::truth(_n_logical_32678)?(_n_q_32605<(([&]()->double{auto _n_logical_32679=d::at(_n_LIMITS_32567,_n_mode_32597);return d::truth(_n_logical_32679)?_n_logical_32679:INFINITY;})()*1.1)):_n_logical_32678;})())))){d::check_cancel();(void)((_n_mode_32597=0.0));
while((d::truth((_n_mode_32597<4.0))&&d::truth((_n_q_32605>=d::at(_n_LIMITS_32567,_n_mode_32597))))){d::check_cancel();(void)((_n_mode_32597++));
}
}
if(d::truth((_n_mode_32597<2.0))){d::check_cancel();double _n_n_32606=(d::truth(_n_mode_32597)?4.0:2.0);
d::Array<d::String,false> _n_g_32607=(d::truth(_n_mode_32597)?d::Array<d::String,false>{d::String(u"_"),(d::truth((_n_dy_32604>0.0))?d::String(u"`"):d::String(u"'")),d::String(u"-"),d::String(u"."),d::String(u"_")}:d::Array<d::String,false>{d::String(u"_"),d::String(u"-"),d::String(u"_")});
{double _n_c_32608=std::ceil((_n_ax_32593-0.5));
for(;d::truth((_n_c_32608<=std::floor((_n_bx_32595-0.5))));(void)((_n_c_32608++))){d::check_cancel();double _n_y_32609=(_n_ay_32594+((_n_dy_32604*((_n_c_32608+0.5)-_n_ax_32593))/_n_dx_32603));
double _n_r_32610=std::floor(_n_y_32609);
double _n_i_32611=d::round(((_n_y_32609-_n_r_32610)*_n_n_32606));
(void)(_n_put_32598(_n_c_32608,(d::truth(_n_i_32611)?_n_r_32610:(_n_r_32610-1.0)),d::at(_n_g_32607,_n_i_32611),_n_c_32608));
}}
}else {d::check_cancel();if(d::truth((_n_mode_32597==2.0))){d::check_cancel();{double _n_X_32612=d::round(_n_ax_32593);
for(;d::truth((_n_X_32612<d::round(_n_bx_32595)));(void)((_n_X_32612++))){d::check_cancel();double _n_ya_32613=d::round((_n_ay_32594+((_n_dy_32604*(_n_X_32612-_n_ax_32593))/_n_dx_32603)));
double _n_yb_32614=d::round((_n_ay_32594+((_n_dy_32604*((_n_X_32612+1.0)-_n_ax_32593))/_n_dx_32603)));
if(d::truth((_n_yb_32614>_n_ya_32613))){d::check_cancel();(void)(_n_put_32598(_n_X_32612,_n_ya_32613,d::String(u"\\"),_n_X_32612));
}else {d::check_cancel();(void)(_n_put_32598(_n_X_32612,(_n_ya_32613-1.0),(d::truth((_n_yb_32614<_n_ya_32613))?d::String(u"/"):d::String(u"_")),_n_X_32612));
}
}}
}else {d::check_cancel();d::String _n_ch_32615=(d::truth((_n_mode_32597==4.0))?d::String(u"|"):(d::truth((_n_dy_32604<0.0))?d::String(u"/"):d::String(u"\\")));
{double _n_r_32616=std::ceil((d::minimum({_n_ay_32594,_n_by_32596})-0.5));
for(;d::truth((_n_r_32616<=std::floor((d::maximum({_n_ay_32594,_n_by_32596})-0.5))));(void)((_n_r_32616++))){d::check_cancel();(void)(([&](){auto _n_argument_32682=std::floor((_n_ax_32593+((_n_dx_32603*((_n_r_32616+0.5)-_n_ay_32594))/_n_dy_32604)));auto _n_argument_32683=_n_r_32616;auto _n_argument_32684=_n_ch_32615;auto _n_argument_32685=_n_r_32616;return _n_put_32598(_n_argument_32682,_n_argument_32683,_n_argument_32684,_n_argument_32685);})());
}}
}
}
return _n_mode_32597;

}
}

struct Native_tesseract final:ascii::Piece{
double _n_cols_32569{};
double _n_rows_32570{};
d::Array<d::Array<double,false>,false> _n_V_32571{};
d::Array<d::Array<double,false>,false> _n_E_32572{};
double _n_W_32573{};
double _n_D_32574{};
double _n_ASPECT_32575{};
d::Array<double,false> _n_tilt_32576{};
double _n_YZ_32577{};
double _n_LOOP_32578{};
d::Array<d::Array<double,false>,false> _n_R_32581{};
d::Array<d::Array<double,false>,false> _n_P_32582{};
double _n_ex_32584{};
double _n_ey_32585{};
double _n_K_32586{};
d::Array<d::String,false> _n_out_32587{};
d::Array<d::Array<double,false>,false> _n_S_32588{};
d::Array<int8_t,true> _n_style_32589{};
d::Array<uint8_t,true> _n_solid_32590{};
std::function<d::String(double,std::shared_ptr<_n_Record_32671>)> _render;
d::Array<double,false> _n_angles_32579(double _a0){double _n_t_32620=_a0;
return d::Array<double,false>{(0.4+((_n_t_32620*4.0)*this->_n_YZ_32577)),(0.2+(_n_t_32620*this->_n_YZ_32577))};}

void _n_place_32580(d::Array<double,false> _a0,double _a1,double _a2,double _a3,double _a4,d::Array<double,false> _a5){d::Array<double,false> _n_p_32621=_a0;
double _n_ca_32622=_a1;
double _n_sa_32623=_a2;
double _n_cb_32624=_a3;
double _n_sb_32625=_a4;
d::Array<double,false> _n_o_32626=_a5;
{
double _n_x_32627=((d::at(_n_p_32621,0.0)*_n_ca_32622)-(d::at(_n_p_32621,3.0)*_n_sa_32623));
double _n_w_32628=((d::at(_n_p_32621,0.0)*_n_sa_32623)+(d::at(_n_p_32621,3.0)*_n_ca_32622));
double _n_y_32629=((d::at(_n_p_32621,1.0)*_n_cb_32624)-(d::at(_n_p_32621,2.0)*_n_sb_32625));
double _n_z_32630=((d::at(_n_p_32621,1.0)*_n_sb_32625)+(d::at(_n_p_32621,2.0)*_n_cb_32624));
double _n_f_32631=(this->_n_W_32573/(this->_n_W_32573-_n_w_32628));
double _n_X_32632=(_n_x_32627*_n_f_32631);
double _n_Y_32633=(_n_y_32629*_n_f_32631);
double _n_Z_32634=(_n_z_32630*_n_f_32631);
double _n_X1_32635=((_n_X_32632*d::at(this->_n_tilt_32576,0.0))+(_n_Z_32634*d::at(this->_n_tilt_32576,1.0)));
double _n_Z1_32636=(((-d::number(_n_X_32632))*d::at(this->_n_tilt_32576,1.0))+(_n_Z_32634*d::at(this->_n_tilt_32576,0.0)));
(void)(([&](){auto&& _n_array_32710=_n_o_32626;auto _n_index_32711=0.0;auto _n_value_32712=_n_X1_32635;d::put(_n_array_32710,_n_index_32711,_n_value_32712);return _n_value_32712;})());
(void)(([&](){auto&& _n_array_32713=_n_o_32626;auto _n_index_32714=1.0;auto _n_value_32715=((_n_Y_32633*d::at(this->_n_tilt_32576,2.0))-(_n_Z1_32636*d::at(this->_n_tilt_32576,3.0)));d::put(_n_array_32713,_n_index_32714,_n_value_32715);return _n_value_32715;})());
(void)(([&](){auto&& _n_array_32716=_n_o_32626;auto _n_index_32717=2.0;auto _n_value_32718=((_n_Y_32633*d::at(this->_n_tilt_32576,3.0))+(_n_Z1_32636*d::at(this->_n_tilt_32576,2.0)));d::put(_n_array_32716,_n_index_32717,_n_value_32718);return _n_value_32718;})());
(void)(([&](){auto&& _n_array_32719=_n_o_32626;auto _n_index_32720=3.0;auto _n_value_32721=_n_w_32628;d::put(_n_array_32719,_n_index_32720,_n_value_32721);return _n_value_32721;})());

}
}

void _n_view_32583(double _a0){double _n_t_32637=_a0;
{
auto _n_binding_32722=this->_n_angles_32579(_n_t_32637);
double _n_a_32638=d::at(_n_binding_32722,0.0);
double _n_b_32639=d::at(_n_binding_32722,1.0);
double _n_ca_32640=std::cos(_n_a_32638);
double _n_sa_32641=std::sin(_n_a_32638);
double _n_cb_32642=std::cos(_n_b_32639);
double _n_sb_32643=std::sin(_n_b_32639);
double _n_mx_32644=0.0;
double _n_my_32645=0.0;
{double _n_i_32646=0.0;
for(;d::truth((_n_i_32646<16.0));(void)((_n_i_32646++))){d::check_cancel();(void)(this->_n_place_32580(d::at(this->_n_V_32571,_n_i_32646),_n_ca_32640,_n_sa_32641,_n_cb_32642,_n_sb_32643,d::at(this->_n_R_32581,_n_i_32646)));
(void)((_n_mx_32644=(_n_mx_32644+(([&](){auto&& _n_array_32723=d::at(this->_n_P_32582,_n_i_32646);auto _n_index_32724=0.0;auto _n_value_32725=(d::at(d::at(this->_n_R_32581,_n_i_32646),0.0)/(this->_n_D_32574-d::at(d::at(this->_n_R_32581,_n_i_32646),2.0)));d::put(_n_array_32723,_n_index_32724,_n_value_32725);return _n_value_32725;})()/16.0))));
(void)((_n_my_32645=(_n_my_32645+(([&](){auto&& _n_array_32726=d::at(this->_n_P_32582,_n_i_32646);auto _n_index_32727=1.0;auto _n_value_32728=(d::at(d::at(this->_n_R_32581,_n_i_32646),1.0)/(this->_n_D_32574-d::at(d::at(this->_n_R_32581,_n_i_32646),2.0)));d::put(_n_array_32726,_n_index_32727,_n_value_32728);return _n_value_32728;})()/16.0))));
}}
for(auto &&_n_item_32729:this->_n_P_32582){d::check_cancel();d::Array<double,false> _n_p_32647=_n_item_32729;
{
(void)(([&](){auto&& _n_array_32730=_n_p_32647;auto _n_index_32731=0.0;auto _n_value_32732=(d::at(_n_array_32730,_n_index_32731)-_n_mx_32644);d::put(_n_array_32730,_n_index_32731,_n_value_32732);return _n_value_32732;})());
(void)(([&](){auto&& _n_array_32733=_n_p_32647;auto _n_index_32734=1.0;auto _n_value_32735=(d::at(_n_array_32733,_n_index_32734)-_n_my_32645);d::put(_n_array_32733,_n_index_32734,_n_value_32735);return _n_value_32735;})());

}
}

}
}

double _n_weigh_32591(double _a0,double _a1){double _n_k_32650=_a0;
double _n_w_32651=_a1;
{
if((d::truth((d::at(this->_n_solid_32590,_n_k_32650)==2.0))||d::truth((std::fabs(_n_w_32651)>0.12)))){d::check_cancel();(void)(([&](){auto&& _n_array_32736=this->_n_solid_32590;auto _n_index_32737=_n_k_32650;auto _n_value_32738=(d::truth((_n_w_32651>=0.0))?1.0:0.0);d::put(_n_array_32736,_n_index_32737,_n_value_32738);return _n_value_32738;})());
}
return d::at(this->_n_solid_32590,_n_k_32650);

}
}

bool _n_clear_32592(double _a0,double _a1){double _n_c_32652=_a0;
double _n_r_32653=_a1;
return ([&]()->bool{auto _n_logical_32739=([&]()->bool{auto _n_logical_32741=(d::at(this->_n_out_32587,(_n_c_32652+(_n_r_32653*this->_n_cols_32569)))==d::String(u" "));return d::truth(_n_logical_32741)?([&]()->bool{auto _n_logical_32742=(_n_c_32652==0.0);return d::truth(_n_logical_32742)?_n_logical_32742:(d::at(this->_n_out_32587,((_n_c_32652-1.0)+(_n_r_32653*this->_n_cols_32569)))==d::String(u" "));})():_n_logical_32741;})();return d::truth(_n_logical_32739)?([&]()->bool{auto _n_logical_32740=(_n_c_32652==(this->_n_cols_32569-1.0));return d::truth(_n_logical_32740)?_n_logical_32740:(d::at(this->_n_out_32587,((_n_c_32652+1.0)+(_n_r_32653*this->_n_cols_32569)))==d::String(u" "));})():_n_logical_32739;})();}

explicit Native_tesseract(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_32686=_n_meta_32565;
this->_n_cols_32569=_n_binding_32686->_p_cols;
this->_n_rows_32570=_n_binding_32686->_p_rows;
this->_n_V_32571=d::Array<d::Array<double,false>,false>{};
{double _n_i_32617=0.0;
for(;d::truth((_n_i_32617<16.0));(void)((_n_i_32617++))){d::check_cancel();(void)(this->_n_V_32571.push(d::Array<double,false>{(d::truth(double(d::i32(_n_i_32617)&d::i32(1.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_32617)&d::i32(2.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_32617)&d::i32(4.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_32617)&d::i32(8.0)))?1.0:(-d::number(1.0)))}));
}}
this->_n_E_32572=d::Array<d::Array<double,false>,false>{};
{double _n_i_32618=0.0;
for(;d::truth((_n_i_32618<16.0));(void)((_n_i_32618++))){d::check_cancel();{double _n_b_32619=1.0;
for(;d::truth((_n_b_32619<16.0));(void)((_n_b_32619=double(int32_t(d::u32(_n_b_32619)<<(d::u32(1.0)&31)))))){d::check_cancel();if(d::truth((!d::truth(double(d::i32(_n_i_32618)&d::i32(_n_b_32619)))))){d::check_cancel();(void)(this->_n_E_32572.push(d::Array<double,false>{_n_i_32618,double(d::i32(_n_i_32618)|d::i32(_n_b_32619))}));
}
}}
}}
this->_n_W_32573=3.0;
this->_n_D_32574=7.0;
this->_n_ASPECT_32575=0.5;
this->_n_tilt_32576=d::Array<double,false>{std::cos(0.5),std::sin(0.5),std::cos(0.32),std::sin(0.32)};
this->_n_YZ_32577=0.0875;
this->_n_LOOP_32578=((ascii::PI/2.0)/this->_n_YZ_32577);
this->_n_R_32581=d::map(this->_n_V_32571,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{0.0,0.0,0.0,0.0};});
this->_n_P_32582=d::map(this->_n_V_32571,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{0.0,0.0};});
this->_n_ex_32584=0.0;
this->_n_ey_32585=0.0;
{double _n_t_32648=0.0;
for(;d::truth((_n_t_32648<this->_n_LOOP_32578));(void)((_n_t_32648=(_n_t_32648+0.03)))){d::check_cancel();(void)(this->_n_view_32583(_n_t_32648));
for(auto &&_n_item_32687:this->_n_P_32582){d::check_cancel();d::Array<double,false> _n_p_32649=_n_item_32687;
{
(void)((this->_n_ex_32584=([&](){auto _n_argument_32688=this->_n_ex_32584;auto _n_argument_32689=std::fabs(d::at(_n_p_32649,0.0));return d::maximum({_n_argument_32688,_n_argument_32689});})()));
(void)((this->_n_ey_32585=([&](){auto _n_argument_32690=this->_n_ey_32585;auto _n_argument_32691=std::fabs(d::at(_n_p_32649,1.0));return d::maximum({_n_argument_32690,_n_argument_32691});})()));

}
}
}}
this->_n_K_32586=d::minimum({(((this->_n_cols_32569-2.0)/2.0)/this->_n_ex_32584),((((this->_n_rows_32570-1.0)/2.0)/this->_n_ASPECT_32575)/this->_n_ey_32585)});
this->_n_out_32587=d::Array<d::String,false>(size_t((this->_n_cols_32569*this->_n_rows_32570)));
this->_n_S_32588=d::map(this->_n_V_32571,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{0.0,0.0};});
this->_n_style_32589=d::Array<int8_t,true>(size_t(double(this->_n_E_32572.size()))).fill((-d::number(1.0)));
this->_n_solid_32590=d::Array<uint8_t,true>(size_t((double(this->_n_E_32572.size())+16.0))).fill(2.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_32671> _a1) mutable ->d::String{double _n_t_32654=_a0;
{
(void)(this->_n_view_32583(_n_t_32654));
(void)(this->_n_out_32587.fill(d::String(u" ")));
{double _n_i_32655=0.0;
for(;d::truth((_n_i_32655<16.0));(void)((_n_i_32655++))){d::check_cancel();double _n_x_32656=((this->_n_cols_32569/2.0)+(this->_n_K_32586*d::at(d::at(this->_n_P_32582,_n_i_32655),0.0)));
double _n_y_32657=((this->_n_rows_32570/2.0)-((this->_n_K_32586*this->_n_ASPECT_32575)*d::at(d::at(this->_n_P_32582,_n_i_32655),1.0)));
(void)(([&](){auto&& _n_array_32692=d::at(this->_n_S_32588,_n_i_32655);auto _n_index_32693=0.0;auto _n_value_32694=(((_n_x_32656+std::floor(_n_x_32656))+0.5)/2.0);d::put(_n_array_32692,_n_index_32693,_n_value_32694);return _n_value_32694;})());
(void)(([&](){auto&& _n_array_32695=d::at(this->_n_S_32588,_n_i_32655);auto _n_index_32696=1.0;auto _n_value_32697=(((_n_y_32657+std::floor(_n_y_32657))+0.5)/2.0);d::put(_n_array_32695,_n_index_32696,_n_value_32697);return _n_value_32697;})());
}}
for(auto &&_n_item_32698:d::Array<double,false>{1.0,0.0}){d::check_cancel();double _n_pass_32658=_n_item_32698;
{
{double _n_i_32659=0.0;
for(;d::truth((_n_i_32659<16.0));(void)((_n_i_32659++))){d::check_cancel();if(d::truth((this->_n_weigh_32591((double(this->_n_E_32572.size())+_n_i_32659),d::at(d::at(this->_n_R_32581,_n_i_32659),3.0))!=_n_pass_32658))){d::check_cancel();continue;
}
double _n_c_32660=std::floor(d::at(d::at(this->_n_S_32588,_n_i_32659),0.0));
double _n_r_32661=std::floor(d::at(d::at(this->_n_S_32588,_n_i_32659),1.0));
if(((((d::truth((_n_c_32660>=0.0))&&d::truth((_n_c_32660<this->_n_cols_32569)))&&d::truth((_n_r_32661>=0.0)))&&d::truth((_n_r_32661<this->_n_rows_32570)))&&d::truth(([&]()->std::variant<double,bool>{auto _n_logical_32699=_n_pass_32658;return d::truth(_n_logical_32699)?std::variant<double,bool>(_n_logical_32699):std::variant<double,bool>(this->_n_clear_32592(_n_c_32660,_n_r_32661));})()))){d::check_cancel();(void)(([&](){auto&& _n_array_32700=this->_n_out_32587;auto _n_index_32701=(_n_c_32660+(_n_r_32661*this->_n_cols_32569));auto _n_value_32702=(d::truth(_n_pass_32658)?d::String(u"o"):d::String(u"+"));d::put(_n_array_32700,_n_index_32701,_n_value_32702);return _n_value_32702;})());
}
}}
(void)(d::forEach(this->_n_E_32572,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_32703=_a0;
double _n_i_32662=d::at(_n_binding_32703,0.0);
double _n_j_32663=d::at(_n_binding_32703,1.0);
double _n_e_32664=_a1;
{
if(d::truth((this->_n_weigh_32591(_n_e_32664,((d::at(d::at(this->_n_R_32581,_n_i_32662),3.0)+d::at(d::at(this->_n_R_32581,_n_j_32663),3.0))/2.0))!=_n_pass_32658))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_32704=this->_n_style_32589;auto _n_index_32705=_n_e_32664;auto _n_value_32706=_n_stroke_32568(d::at(d::at(this->_n_S_32588,_n_i_32662),0.0),d::at(d::at(this->_n_S_32588,_n_i_32662),1.0),d::at(d::at(this->_n_S_32588,_n_j_32663),0.0),d::at(d::at(this->_n_S_32588,_n_j_32663),1.0),d::at(this->_n_style_32589,_n_e_32664),[&]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_32665=_a0;
double _n_r_32666=_a1;
d::String _n_ch_32667=_a2;
double _n_k_32668=_a3;
{
if(((((d::truth((_n_c_32665<0.0))||d::truth((_n_c_32665>=this->_n_cols_32569)))||d::truth((_n_r_32666<0.0)))||d::truth((_n_r_32666>=this->_n_rows_32570)))||d::truth((d::at(this->_n_out_32587,(_n_c_32665+(_n_r_32666*this->_n_cols_32569)))!=d::String(u" "))))){d::check_cancel();return;
}
if((d::truth(_n_pass_32658)||d::truth((d::mod(_n_k_32668,3.0)!=2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_32707=this->_n_out_32587;auto _n_index_32708=(_n_c_32665+(_n_r_32666*this->_n_cols_32569));auto _n_value_32709=_n_ch_32667;d::put(_n_array_32707,_n_index_32708,_n_value_32709);return _n_value_32709;})());
}

}
});d::put(_n_array_32704,_n_index_32705,_n_value_32706);return _n_value_32706;})());

}
}));

}
}
d::Array<d::String,false> _n_lines_32669=d::Array<d::String,false>{};
{double _n_r_32670=0.0;
for(;d::truth((_n_r_32670<this->_n_rows_32570));(void)((_n_r_32670++))){d::check_cancel();(void)(_n_lines_32669.push(d::join(this->_n_out_32587.slice((_n_r_32670*this->_n_cols_32569),((_n_r_32670+1.0)*this->_n_cols_32569)),d::String(u""))));
}}
return d::join(_n_lines_32669,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tesseract").cols)*ascii::catalog_meta("tesseract").rows);auto _env=std::make_shared<_n_Record_32671>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tesseract_meta(){return catalog_meta("tesseract");}
std::unique_ptr<Piece> make_tesseract(const AsciiPieceOptions &o){return std::make_unique<Native_tesseract>(o);}
}
