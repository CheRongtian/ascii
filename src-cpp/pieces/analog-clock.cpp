// Direct, statically typed C++ from src/pieces/analog-clock.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_1042;
struct _n_Record_1043;
struct _n_Record_1053;
struct _n_Record_1143;
struct _n_Record_1144;
struct _n_Record_1154;
struct _n_Record_1156;
struct _n_Record_1042{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_1043> _p_options{};
bool _p_clock{};
static std::shared_ptr<_n_Record_1042> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1042>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_1043>>(j["options"]);out->_p_clock=d::decode<bool>(j["clock"]);return out;}
};
struct _n_Record_1043{
bool _p_numerals{};
bool _p_seconds{};
static std::shared_ptr<_n_Record_1043> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1043>();out->_p_numerals=d::decode<bool>(j["numerals"]);out->_p_seconds=d::decode<bool>(j["seconds"]);return out;}
};
struct _n_Record_1053{
d::String _p_up{};
d::String _p_rise{};
d::String _p_fall{};
d::String _p_run{};
d::String _p_flat{};
std::optional<bool> _p_wide{};
double _p_span{};
static std::shared_ptr<_n_Record_1053> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1053>();out->_p_up=d::decode<d::String>(j["up"]);out->_p_rise=d::decode<d::String>(j["rise"]);out->_p_fall=d::decode<d::String>(j["fall"]);out->_p_run=d::decode<d::String>(j["run"]);out->_p_flat=d::decode<d::String>(j["flat"]);out->_p_wide=d::decode<std::optional<bool>>(j["wide"]);out->_p_span=d::decode<double>(j["span"]);return out;}
};
struct _n_Record_1143{
std::optional<bool> _p_numerals{};
std::optional<bool> _p_seconds{};
static std::shared_ptr<_n_Record_1143> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1143>();out->_p_numerals=d::decode<std::optional<bool>>(j["numerals"]);out->_p_seconds=d::decode<std::optional<bool>>(j["seconds"]);return out;}
};
struct _n_Record_1144{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_1144> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1144>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_1154{
d::String _p_up{};
d::String _p_rise{};
d::String _p_fall{};
d::String _p_run{};
d::String _p_flat{};
bool _p_wide{};
double _p_span{};
static std::shared_ptr<_n_Record_1154> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1154>();out->_p_up=d::decode<d::String>(j["up"]);out->_p_rise=d::decode<d::String>(j["rise"]);out->_p_fall=d::decode<d::String>(j["fall"]);out->_p_run=d::decode<d::String>(j["run"]);out->_p_flat=d::decode<d::String>(j["flat"]);out->_p_wide=d::decode<bool>(j["wide"]);out->_p_span=d::decode<double>(j["span"]);return out;}
};
struct _n_Record_1156{
d::String _p_up{};
d::String _p_rise{};
d::String _p_fall{};
d::String _p_run{};
d::String _p_flat{};
double _p_span{};
static std::shared_ptr<_n_Record_1156> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1156>();out->_p_up=d::decode<d::String>(j["up"]);out->_p_rise=d::decode<d::String>(j["rise"]);out->_p_fall=d::decode<d::String>(j["fall"]);out->_p_run=d::decode<d::String>(j["run"]);out->_p_flat=d::decode<d::String>(j["flat"]);out->_p_span=d::decode<double>(j["span"]);return out;}
};

std::shared_ptr<_n_Record_1042> _n_meta_1041=[](){return ([&](){auto _n_object_1149=std::make_shared<_n_Record_1042>();_n_object_1149->_p_name=d::String(u"analog clock");_n_object_1149->_p_category=d::String(u"objects");_n_object_1149->_p_note=d::String(u"a round clock face showing the local time, seconds ticking");_n_object_1149->_p_cols=47.0;_n_object_1149->_p_rows=23.0;_n_object_1149->_p_fps=8.0;_n_object_1149->_p_options=([&](){auto _n_object_1151=std::make_shared<_n_Record_1043>();_n_object_1151->_p_numerals=true;_n_object_1151->_p_seconds=true;return _n_object_1151;})();_n_object_1149->_p_clock=true;return _n_object_1149;})();}();
const d::String _n_RAMP_1044=[](){return d::String(u".,-~:;=!*#$@");}();
const double _n_LO_1045=[](){return 3.0;}();
const double _n_HI_1046=[](){return 10.0;}();
const double _n_R_1047=[](){return 21.0;}();
const double _n_LM_1048=[](){return d::hypot(std::initializer_list<double>{(-d::number(0.5)),0.6,0.62});}();
double _n_LX_1049{};
double _n_LY_1050{};
double _n_LZ_1051{};
const bool _n_unpack_init_1152=[](){auto _n_binding_1153=d::Array<double,false>{((-d::number(0.5))/_n_LM_1048),(0.6/_n_LM_1048),(0.62/_n_LM_1048)};
_n_LX_1049=d::at(_n_binding_1153,0.0);
_n_LY_1050=d::at(_n_binding_1153,1.0);
_n_LZ_1051=d::at(_n_binding_1153,2.0);
return true;}();
std::shared_ptr<_n_Record_1053> _n_HOUR_1052=[](){return ([&](){auto _n_object_1155=std::make_shared<_n_Record_1053>();_n_object_1155->_p_up=d::String(u"║");_n_object_1155->_p_rise=d::String(u"/");_n_object_1155->_p_fall=d::String(u"\\");_n_object_1155->_p_run=d::String(u"=");_n_object_1155->_p_flat=d::String(u"=");_n_object_1155->_p_wide=std::optional<bool>(true);_n_object_1155->_p_span=2.4;return _n_object_1155;})();}();
std::shared_ptr<_n_Record_1053> _n_MINUTE_1054=[](){return ([&](){auto _n_object_1157=std::make_shared<_n_Record_1053>();_n_object_1157->_p_up=d::String(u"|");_n_object_1157->_p_rise=d::String(u"/");_n_object_1157->_p_fall=d::String(u"\\");_n_object_1157->_p_run=d::String(u"_");_n_object_1157->_p_flat=d::String(u"-");_n_object_1157->_p_span=1.3;return _n_object_1157;})();}();
std::shared_ptr<_n_Record_1053> _n_SECOND_1055=[](){return ([&](){auto _n_object_1159=std::make_shared<_n_Record_1053>();_n_object_1159->_p_up=d::String(u"│");_n_object_1159->_p_rise=d::String(u"╱");_n_object_1159->_p_fall=d::String(u"╲");_n_object_1159->_p_run=d::String(u"─");_n_object_1159->_p_flat=d::String(u"─");_n_object_1159->_p_span=1.3;return _n_object_1159;})();}();

struct Native_analog_clock final:ascii::Piece{
bool _n_numerals_1056{};
bool _n_seconds_1057{};
double _n_cols_1058{};
double _n_rows_1059{};
double _n_cx_1060{};
double _n_cy_1061{};
double _n_start_1062{};
d::Array<d::Array<d::String,false>,false> _n_g_1063{};
d::Array<d::Array<d::Array<std::optional<d::String>,false>,false>,false> _n_bezel_1067{};
std::function<d::String(double,std::shared_ptr<_n_Record_1144>)> _render;
void _n_set_1064(double _a0,double _a1,d::String _a2){double _n_c_1069=_a0;
double _n_r_1070=_a1;
d::String _n_ch_1071=_a2;
{
if((((d::truth((_n_c_1069>=0.0))&&d::truth((_n_c_1069<this->_n_cols_1058)))&&d::truth((_n_r_1070>=0.0)))&&d::truth((_n_r_1070<this->_n_rows_1059)))){d::check_cancel();(void)(([&](){auto&& _n_array_1186=d::at(this->_n_g_1063,_n_r_1070);auto _n_index_1187=_n_c_1069;auto _n_value_1188=_n_ch_1071;d::put(_n_array_1186,_n_index_1187,_n_value_1188);return _n_value_1188;})());
}

}
}

void _n_put_1065(double _a0,double _a1,d::String _a2){double _n_x_1072=_a0;
double _n_y_1073=_a1;
d::String _n_ch_1074=_a2;
return ([&](){auto _n_argument_1189=std::floor((this->_n_cx_1060+_n_x_1072));auto _n_argument_1190=std::floor((this->_n_cy_1061-(_n_y_1073/2.0)));auto _n_argument_1191=_n_ch_1074;return this->_n_set_1064(_n_argument_1189,_n_argument_1190,_n_argument_1191);})();}

std::optional<d::Array<double,false>> _n_hand_1066(double _a0,double _a1,double _a2,std::shared_ptr<_n_Record_1053> _a3){double _n_a_1075=_a0;
double _n_r0_1076=_a1;
double _n_r1_1077=_a2;
std::shared_ptr<_n_Record_1053> _n_st_1078=_a3;
{
std::optional<d::Array<double,false>> _n_end_1079=std::optional<d::Array<double,false>>{};
double _n_sx_1080=std::sin(_n_a_1075);
double _n_sy_1081=std::cos(_n_a_1075);
bool _n_steep_1082=([&](){auto _n_left_1192=std::fabs(_n_sy_1081);auto _n_right_1193=(4.0*std::fabs(_n_sx_1080));return (_n_left_1192>_n_right_1193);})();
bool _n_rise_1083=((_n_sx_1080*_n_sy_1081)>0.0);
bool _n_runs_1084=([&](){auto _n_left_1194=(2.0*std::fabs(_n_sx_1080));auto _n_right_1195=(_n_st_1078->_p_span*std::fabs(_n_sy_1081));return (_n_left_1194>_n_right_1195);})();
auto _n_yAt_1085=[&]( double _a0) mutable ->double{double _n_s_1086=_a0;
return (this->_n_cy_1061-((_n_sy_1081*_n_s_1086)/2.0));};
auto _n_xAt_1087=[&]( double _a0) mutable ->double{double _n_s_1088=_a0;
return (this->_n_cx_1060+(_n_sx_1080*_n_s_1088));};
double _n_ya_1089=_n_yAt_1085(_n_r0_1076);
double _n_yb_1090=_n_yAt_1085(_n_r1_1077);
{double _n_r_1091=std::floor(d::minimum({_n_ya_1089,_n_yb_1090}));
for(;d::truth((_n_r_1091<=std::floor(d::maximum({_n_ya_1089,_n_yb_1090}))));(void)((_n_r_1091++))){d::check_cancel();double _n_s0_1092=_n_r0_1076;
double _n_s1_1093=_n_r1_1077;
if(d::truth((std::fabs(_n_sy_1081)>0.000001))){d::check_cancel();double _n_p_1094=(((this->_n_cy_1061-_n_r_1091)*2.0)/_n_sy_1081);
double _n_q_1095=((((this->_n_cy_1061-_n_r_1091)-1.0)*2.0)/_n_sy_1081);
(void)((_n_s0_1092=([&](){auto _n_argument_1196=_n_r0_1076;auto _n_argument_1197=d::minimum({_n_p_1094,_n_q_1095});return d::maximum({_n_argument_1196,_n_argument_1197});})()));
(void)((_n_s1_1093=([&](){auto _n_argument_1198=_n_r1_1077;auto _n_argument_1199=d::maximum({_n_p_1094,_n_q_1095});return d::minimum({_n_argument_1198,_n_argument_1199});})()));
if(d::truth(((_n_s1_1093-_n_s0_1092)<0.000001))){d::check_cancel();continue;
}
}
double _n_xa_1096=_n_xAt_1087(_n_s0_1092);
double _n_xb_1097=_n_xAt_1087(_n_s1_1093);
double _n_lo_1098=d::minimum({_n_xa_1096,_n_xb_1097});
double _n_hi_1099=d::maximum({_n_xa_1096,_n_xb_1097});
double _n_mid_1100=((_n_lo_1098+_n_hi_1099)/2.0);
bool _n_last_1101=(_n_s1_1093>(_n_r1_1077-0.000001));
if(d::truth((!d::truth(_n_runs_1084)))){d::check_cancel();double _n_c_1102=std::floor(_n_mid_1100);
(void)(this->_n_set_1064(_n_c_1102,_n_r_1091,(d::truth(_n_steep_1082)?_n_st_1078->_p_up:(d::truth(_n_rise_1083)?_n_st_1078->_p_rise:_n_st_1078->_p_fall))));
if((d::truth(_n_st_1078->_p_wide)&&d::truth((!d::truth(_n_steep_1082))))){d::check_cancel();(void)(this->_n_set_1064((d::truth(((_n_mid_1100-_n_c_1102)<0.5))?(_n_c_1102-1.0):(_n_c_1102+1.0)),_n_r_1091,(d::truth(_n_rise_1083)?_n_st_1078->_p_rise:_n_st_1078->_p_fall)));
}
if(d::truth(_n_last_1101)){d::check_cancel();(void)((_n_end_1079=d::Array<double,false>{_n_c_1102,_n_r_1091}));
}
continue;
}
bool _n_edgeLo_1103=([&]()->bool{auto _n_logical_1200=((d::truth((_n_xa_1096<_n_xb_1097))?_n_s0_1092:_n_s1_1093)>(_n_r0_1076+0.000001));return d::truth(_n_logical_1200)?((d::truth((_n_xa_1096<_n_xb_1097))?_n_s0_1092:_n_s1_1093)<(_n_r1_1077-0.000001)):_n_logical_1200;})();
bool _n_edgeHi_1104=([&]()->bool{auto _n_logical_1201=((d::truth((_n_xa_1096<_n_xb_1097))?_n_s1_1093:_n_s0_1092)>(_n_r0_1076+0.000001));return d::truth(_n_logical_1201)?((d::truth((_n_xa_1096<_n_xb_1097))?_n_s1_1093:_n_s0_1092)<(_n_r1_1077-0.000001)):_n_logical_1201;})();
d::String _n_ch_1105=((d::truth(_n_edgeLo_1103)||d::truth(_n_edgeHi_1104))?_n_st_1078->_p_run:_n_st_1078->_p_flat);
double _n_c0_1106=std::floor(_n_lo_1098);
double _n_c1_1107=std::floor((_n_hi_1099-0.000001));
{double _n_c_1108=_n_c0_1106;
for(;d::truth((_n_c_1108<=_n_c1_1107));(void)((_n_c_1108++))){d::check_cancel();(void)(this->_n_set_1064(_n_c_1108,_n_r_1091,_n_ch_1105));
}}
if(d::truth(_n_last_1101)){d::check_cancel();(void)((_n_end_1079=d::Array<double,false>{([&](){auto _n_argument_1202=_n_c0_1106;auto _n_argument_1203=([&](){auto _n_argument_1204=_n_c1_1107;auto _n_argument_1205=std::floor(_n_xAt_1087(_n_r1_1077));return d::minimum({_n_argument_1204,_n_argument_1205});})();return d::maximum({_n_argument_1202,_n_argument_1203});})(),_n_r_1091}));
}
if(d::truth(_n_st_1078->_p_wide)){d::check_cancel();continue;
}
if((d::truth(_n_rise_1083)&&d::truth(_n_edgeHi_1104))){d::check_cancel();(void)(this->_n_set_1064(_n_c1_1107,_n_r_1091,_n_st_1078->_p_rise));
}
if((d::truth((!d::truth(_n_rise_1083)))&&d::truth(_n_edgeLo_1103))){d::check_cancel();(void)(this->_n_set_1064(_n_c0_1106,_n_r_1091,_n_st_1078->_p_fall));
}
}}
return _n_end_1079;

}
}

explicit Native_analog_clock(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_1160=d::decode<std::shared_ptr<_n_Record_1143>>(_options.data);
this->_n_numerals_1056=(d::present(_n_binding_1160->_p_numerals)?d::read(_n_binding_1160->_p_numerals):true);
this->_n_seconds_1057=(d::present(_n_binding_1160->_p_seconds)?d::read(_n_binding_1160->_p_seconds):true);
auto _n_binding_1161=_n_meta_1041;
this->_n_cols_1058=_n_binding_1161->_p_cols;
this->_n_rows_1059=_n_binding_1161->_p_rows;
this->_n_cx_1060=(this->_n_cols_1058/2.0);
this->_n_cy_1061=(this->_n_rows_1059/2.0);
this->_n_start_1062=d::now();
this->_n_g_1063=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_1059,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_1058));}));
this->_n_bezel_1067=d::map(d::Array<bool,false>{false,true},[&]( bool _a0) mutable ->d::Array<d::Array<std::optional<d::String>,false>,false>{bool _n_paper_1109=_a0;
{
d::Array<d::Array<std::optional<d::String>,false>,false> _n_b_1110=d::Array<d::Array<std::optional<d::String>,false>,false>(d::map(d::Array<d::Array<d::Nil,false>,false>(d::from(this->_n_rows_1059,[&]( ) mutable ->d::Array<d::Nil,false>{return d::Array<d::Nil,false>(size_t(this->_n_cols_1058)).fill(d::Nil{});})),[&](const auto &_n_element_1162){return d::Array<std::optional<d::String>,false>(d::map(_n_element_1162,[&](const auto &_n_element_1163){return std::optional<d::String>{};}));}));
{double _n_r_1111=0.0;
for(;d::truth((_n_r_1111<this->_n_rows_1059));(void)((_n_r_1111++))){d::check_cancel();{double _n_c_1112=0.0;
for(;d::truth((_n_c_1112<this->_n_cols_1058));(void)((_n_c_1112++))){d::check_cancel();double _n_sum_1113=0.0;
double _n_hit_1114=0.0;
for(auto &&_n_item_1164:d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.25,0.25},d::Array<double,false>{0.75,0.25},d::Array<double,false>{0.25,0.75},d::Array<double,false>{0.75,0.75}}){d::check_cancel();auto _n_binding_1165=_n_item_1164;
double _n_ox_1115=d::at(_n_binding_1165,0.0);
double _n_oy_1116=d::at(_n_binding_1165,1.0);
{
double _n_x_1117=((_n_c_1112+_n_ox_1115)-this->_n_cx_1060);
double _n_y_1118=((this->_n_cy_1061-(_n_r_1111+_n_oy_1116))*2.0);
double _n_d_1119=d::hypot(std::initializer_list<double>{_n_x_1117,_n_y_1118});
double _n_s_1120=((_n_d_1119-_n_R_1047)/1.3);
if(d::truth((std::fabs(_n_s_1120)>=1.0))){d::check_cancel();continue;
}
double _n_z_1121=std::sqrt((1.0-(_n_s_1120*_n_s_1120)));
(void)((_n_sum_1113=(_n_sum_1113+d::maximum({0.0,(((((_n_s_1120*_n_x_1117)/_n_d_1119)*_n_LX_1049)+(((_n_s_1120*_n_y_1118)/_n_d_1119)*_n_LY_1050))+(_n_z_1121*_n_LZ_1051))}))));
(void)((_n_hit_1114++));

}
}
if(d::truth((_n_hit_1114<2.0))){d::check_cancel();continue;
}
double _n_i_1122=d::round((_n_LO_1045+((_n_sum_1113/_n_hit_1114)*(_n_HI_1046-_n_LO_1045))));
(void)(([&](){auto&& _n_array_1166=d::at(_n_b_1110,_n_r_1111);auto _n_index_1167=_n_c_1112;auto _n_value_1168=std::optional<d::String>(d::at(_n_RAMP_1044,(d::truth(_n_paper_1109)?((double(_n_RAMP_1044.size())-1.0)-_n_i_1122):_n_i_1122)));d::put(_n_array_1166,_n_index_1167,_n_value_1168);return _n_value_1168;})());
}}
}}
return _n_b_1110;

}
});
_render=[=]( double _a0,std::shared_ptr<_n_Record_1144> _a1) mutable ->d::String{double _n_t_1123=_a0;
auto _n_binding_1171=(d::present(_a1)?_a1:([&](){auto _n_object_1170=std::make_shared<_n_Record_1144>();return _n_object_1170;})());
bool _n_paper_1124=(d::present(_n_binding_1171->_p_paper)?d::read(_n_binding_1171->_p_paper):false);
{
d::Date _n_now_1125=d::Date(([&](){auto _n_argument_1172=d::now();auto _n_argument_1173=(this->_n_start_1062+(_n_t_1123*1000.0));return d::maximum({_n_argument_1172,_n_argument_1173});})());
double _n_sec_1126=_n_now_1125.getSeconds();
double _n_min_1127=(_n_now_1125.getMinutes()+(_n_sec_1126/60.0));
double _n_hr_1128=(d::mod(_n_now_1125.getHours(),12.0)+(_n_min_1127/60.0));
d::Array<d::Array<std::optional<d::String>,false>,false> _n_face_1129=d::at(this->_n_bezel_1067,(d::truth(_n_paper_1124)?1.0:0.0));
{double _n_r_1130=0.0;
for(;d::truth((_n_r_1130<this->_n_rows_1059));(void)((_n_r_1130++))){d::check_cancel();{double _n_c_1131=0.0;
for(;d::truth((_n_c_1131<this->_n_cols_1058));(void)((_n_c_1131++))){d::check_cancel();(void)(([&](){auto&& _n_array_1174=d::at(this->_n_g_1063,_n_r_1130);auto _n_index_1175=_n_c_1131;auto _n_value_1176=([&]()->d::String{auto _n_logical_1177=d::at(d::at(_n_face_1129,_n_r_1130),_n_c_1131);return (d::has(d::at(_n_face_1129,_n_r_1130),_n_c_1131)&&d::present(_n_logical_1177))?d::read(_n_logical_1177):d::String(u" ");})();d::put(_n_array_1174,_n_index_1175,_n_value_1176);return _n_value_1176;})());
}}
}}
{double _n_i_1132=0.0;
for(;d::truth((_n_i_1132<60.0));(void)((_n_i_1132++))){d::check_cancel();double _n_a_1133=((_n_i_1132*ascii::PI)/30.0);
double _n_sx_1134=std::sin(_n_a_1133);
double _n_sy_1135=std::cos(_n_a_1133);
if(d::truth(d::mod(_n_i_1132,5.0))){d::check_cancel();(void)(this->_n_put_1065((_n_sx_1134*18.0),(_n_sy_1135*18.0),d::String(u"·")));
}else {d::check_cancel();if((d::truth((!d::truth(this->_n_numerals_1056)))||d::truth(d::mod(_n_i_1132,15.0)))){d::check_cancel();(void)(([&](){auto _n_argument_1178=(_n_sx_1134*17.4);auto _n_argument_1179=(_n_sy_1135*17.4);auto _n_argument_1180=(d::truth((std::fabs(_n_sy_1135)>0.9))?d::String(u"|"):(d::truth((std::fabs(_n_sy_1135)<0.1))?d::String(u"-"):(d::truth(((_n_sx_1134*_n_sy_1135)>0.0))?d::String(u"/"):d::String(u"\\"))));return this->_n_put_1065(_n_argument_1178,_n_argument_1179,_n_argument_1180);})());
}
}
}}
double _n_ah_1136=((_n_hr_1128*ascii::PI)/6.0);
double _n_am_1137=((_n_min_1127*ascii::PI)/30.0);
double _n_as_1138=((_n_sec_1126*ascii::PI)/30.0);
(void)(this->_n_hand_1066(_n_ah_1136,1.5,9.5,_n_HOUR_1052));
(void)(this->_n_hand_1066(_n_am_1137,1.5,15.5,_n_MINUTE_1054));
std::optional<std::variant<bool,d::Array<double,false>>> _n_tip_1139=([&]()->std::optional<std::variant<bool,d::Array<double,false>>>{auto _n_logical_1181=this->_n_seconds_1057;return d::truth(_n_logical_1181)?([&]()->std::optional<std::variant<bool,d::Array<double,false>>>{auto _n_nullable_1182=this->_n_hand_1066(_n_as_1138,1.5,14.8,_n_SECOND_1055);if(!d::present(_n_nullable_1182))return {};return std::variant<bool,d::Array<double,false>>(d::read(_n_nullable_1182));})():std::optional<std::variant<bool,d::Array<double,false>>>(std::variant<bool,d::Array<double,false>>(_n_logical_1181));})();
if(d::truth(this->_n_seconds_1057)){d::check_cancel();std::optional<d::Array<double,false>> _n_w_1140=this->_n_hand_1066((_n_as_1138+ascii::PI),1.5,4.4,_n_SECOND_1055);
double _n_f_1141=(this->_n_cy_1061+(std::cos(_n_as_1138)*2.2));
if(d::truth(_n_w_1140)){d::check_cancel();(void)(([&](){auto _n_argument_1183=d::at(d::read(_n_w_1140),0.0);auto _n_argument_1184=d::at(d::read(_n_w_1140),1.0);auto _n_argument_1185=(d::truth(((_n_f_1141-std::floor(_n_f_1141))<0.5))?d::String(u"▀"):d::String(u"▄"));return this->_n_set_1064(_n_argument_1183,_n_argument_1184,_n_argument_1185);})());
}
}
if(d::truth(this->_n_numerals_1056)){d::check_cancel();(void)(this->_n_put_1065((-d::number(1.0)),15.6,d::String(u"1")));
(void)(this->_n_put_1065(0.0,15.6,d::String(u"2")));
(void)(this->_n_put_1065(15.2,0.0,d::String(u"3")));
(void)(this->_n_put_1065(0.0,(-d::number(15.6)),d::String(u"6")));
(void)(this->_n_put_1065((-d::number(15.2)),0.0,d::String(u"9")));
}
if(d::truth(_n_tip_1139)){d::check_cancel();(void)(this->_n_set_1064(d::at(std::get<d::Array<double,false>>(d::read(_n_tip_1139)),0.0),d::at(std::get<d::Array<double,false>>(d::read(_n_tip_1139)),1.0),d::String(u"o")));
}
(void)(this->_n_put_1065(0.0,0.0,d::String(u"@")));
return d::join(d::map(this->_n_g_1063,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_1142=_a0;
return d::join(_n_row_1142,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("analog-clock").cols)*ascii::catalog_meta("analog-clock").rows);auto _env=std::make_shared<_n_Record_1144>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &analog_clock_meta(){return catalog_meta("analog-clock");}
std::unique_ptr<Piece> make_analog_clock(const AsciiPieceOptions &o){return std::make_unique<Native_analog_clock>(o);}
}
