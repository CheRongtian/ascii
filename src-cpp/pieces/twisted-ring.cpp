// Direct, statically typed C++ from src/pieces/twisted-ring.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34954;
struct _n_Record_35052;
struct _n_Record_34954{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34954> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34954>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_35052{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35052> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35052>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_unit_34968(d::Array<double,false> _a0);
std::shared_ptr<_n_Record_34954> _n_meta_34953=[](){return ([&](){auto _n_object_35055=std::make_shared<_n_Record_34954>();_n_object_35055->_p_name=d::String(u"twisted ring");_n_object_35055->_p_category=d::String(u"shapes");_n_object_35055->_p_note=d::String(u"a square ring twisted three quarters, so it has one face");_n_object_35055->_p_cols=46.0;_n_object_35055->_p_rows=21.0;_n_object_35055->_p_fps=30.0;return _n_object_35055;})();}();
const d::String _n_FACE_34955=[](){return d::String(u".:+*#@");}();
const double _n_ASPECT_34956=[](){return 0.5;}();
const double _n_R_34957=[](){return 0.75;}();
const double _n_AP_34958=[](){return 0.22;}();
const double _n_TWIST_34959=[](){return 3.0;}();
const double _n_TILT_34960=[](){return 0.92;}();
const double _n_EYE_34961=[](){return 6.0;}();
const double _n_SCALE_34962=[](){return 9.2;}();
const double _n_LIFT_34963=[](){return 0.5;}();
const double _n_SPIN_34964=[](){return 0.32;}();
const double _n_P0_34965=[](){return 0.4;}();
const double _n_LAPS_34966=[](){return 720.0;}();
const double _n_ACROSS_34967=[](){return 14.0;}();
d::Array<double,false> _n_LIGHT_34969=[](){return _n_unit_34968(d::Array<double,false>{(-d::number(0.5)),0.75,0.6});}();
d::Array<double,false> _n_HALF_34970=[](){return _n_unit_34968(d::Array<double,false>{d::at(_n_LIGHT_34969,0.0),d::at(_n_LIGHT_34969,1.0),(d::at(_n_LIGHT_34969,2.0)+1.0)});}();
d::Array<double,false> _n_unit_34968(d::Array<double,false> _a0){d::Array<double,false> _n_v_34984=_a0;
return d::map(_n_v_34984,[&]( double _a0) mutable ->double{double _n_c_34985=_a0;
return (_n_c_34985/d::hypot(_n_v_34984));});}

struct Native_twisted_ring final:ascii::Piece{
double _n_cols_34971{};
double _n_rows_34972{};
double _n_W_34973{};
double _n_H_34974{};
d::Array<float,true> _n_depth_34975{};
d::Array<uint8_t,true> _n_tone_34976{};
d::Array<d::String,false> _n_ink_34977{};
d::Array<float,true> _n_near_34978{};
double _n_ct_34979{};
double _n_st_34980{};
d::Array<d::String,false> _n_lines_34981{};
d::Array<double,false> _n_P_34982{};
d::Array<double,false> _n_Q_34983{};
std::function<d::String(double,std::shared_ptr<_n_Record_35052>)> _render;

explicit Native_twisted_ring(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_35056=_n_meta_34953;
this->_n_cols_34971=_n_binding_35056->_p_cols;
this->_n_rows_34972=_n_binding_35056->_p_rows;
this->_n_W_34973=(this->_n_cols_34971*2.0);
this->_n_H_34974=(this->_n_rows_34972*2.0);
this->_n_depth_34975=d::Array<float,true>(size_t((this->_n_W_34973*this->_n_H_34974)));
this->_n_tone_34976=d::Array<uint8_t,true>(size_t((this->_n_W_34973*this->_n_H_34974)));
this->_n_ink_34977=d::Array<d::String,false>(size_t((this->_n_cols_34971*this->_n_rows_34972)));
this->_n_near_34978=d::Array<float,true>(size_t((this->_n_cols_34971*this->_n_rows_34972)));
this->_n_ct_34979=std::cos(_n_TILT_34960);
this->_n_st_34980=std::sin(_n_TILT_34960);
this->_n_lines_34981=d::Array<d::String,false>(size_t(this->_n_rows_34972));
this->_n_P_34982=d::Array<double,false>{0.0,0.0,0.0,0.0,0.0,0.0};
this->_n_Q_34983=d::Array<double,false>{0.0,0.0,0.0};
_render=[=]( double _a0,std::shared_ptr<_n_Record_35052> _a1) mutable ->d::String{double _n_t_34986=_a0;
auto _n_binding_35059=(d::present(_a1)?_a1:([&](){auto _n_object_35058=std::make_shared<_n_Record_35052>();return _n_object_35058;})());
bool _n_paper_34987=(d::present(_n_binding_35059->_p_paper)?d::read(_n_binding_35059->_p_paper):false);
{
double _n_p_34988=(_n_P0_34965+(_n_SPIN_34964*_n_t_34986));
double _n_cs_34989=std::cos(_n_p_34988);
double _n_ss_34990=std::sin(_n_p_34988);
auto _n_place_34991=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_ca_34992=_a0;
double _n_sa_34993=_a1;
double _n_qr_34994=_a2;
double _n_qy_34995=_a3;
{
double _n_x_34996=((_n_R_34957+_n_qr_34994)*_n_ca_34992);
double _n_z_34997=((_n_R_34957+_n_qr_34994)*_n_sa_34993);
double _n_wx_34998=((_n_cs_34989*_n_x_34996)+(_n_ss_34990*_n_z_34997));
double _n_z1_34999=(((-d::number(_n_ss_34990))*_n_x_34996)+(_n_cs_34989*_n_z_34997));
double _n_wy_35000=((this->_n_ct_34979*_n_qy_34995)-(this->_n_st_34980*_n_z1_34999));
double _n_wz_35001=((this->_n_st_34980*_n_qy_34995)+(this->_n_ct_34979*_n_z1_34999));
double _n_ooz_35002=(1.0/(_n_EYE_34961-_n_wz_35001));
double _n_k_35003=((_n_SCALE_34962*_n_EYE_34961)*_n_ooz_35002);
(void)(([&](){auto&& _n_array_35060=this->_n_P_34982;auto _n_index_35061=0.0;auto _n_value_35062=(2.0*((this->_n_cols_34971/2.0)+((_n_k_35003*_n_wx_34998)/_n_ASPECT_34956)));d::put(_n_array_35060,_n_index_35061,_n_value_35062);return _n_value_35062;})());
(void)(([&](){auto&& _n_array_35063=this->_n_P_34982;auto _n_index_35064=1.0;auto _n_value_35065=(2.0*(((this->_n_rows_34972/2.0)-_n_LIFT_34963)-(_n_k_35003*_n_wy_35000)));d::put(_n_array_35063,_n_index_35064,_n_value_35065);return _n_value_35065;})());
(void)((((([&](){auto&& _n_array_35066=this->_n_P_34982;auto _n_index_35067=2.0;auto _n_value_35068=_n_ooz_35002;d::put(_n_array_35066,_n_index_35067,_n_value_35068);return _n_value_35068;})(),([&](){auto&& _n_array_35069=this->_n_P_34982;auto _n_index_35070=3.0;auto _n_value_35071=_n_wx_34998;d::put(_n_array_35069,_n_index_35070,_n_value_35071);return _n_value_35071;})()),([&](){auto&& _n_array_35072=this->_n_P_34982;auto _n_index_35073=4.0;auto _n_value_35074=_n_wy_35000;d::put(_n_array_35072,_n_index_35073,_n_value_35074);return _n_value_35074;})()),([&](){auto&& _n_array_35075=this->_n_P_34982;auto _n_index_35076=5.0;auto _n_value_35077=_n_wz_35001;d::put(_n_array_35075,_n_index_35076,_n_value_35077);return _n_value_35077;})()));

}
};
auto _n_normal_35004=[&]( double _a0,double _a1,double _a2) mutable ->void{double _n_ca_35005=_a0;
double _n_sa_35006=_a1;
double _n_n_35007=_a2;
{
double _n_ox_35008=(std::cos(_n_n_35007)*_n_ca_35005);
double _n_oz_35009=(std::cos(_n_n_35007)*_n_sa_35006);
double _n_z1_35010=(((-d::number(_n_ss_34990))*_n_ox_35008)+(_n_cs_34989*_n_oz_35009));
(void)(((([&](){auto&& _n_array_35078=this->_n_Q_34983;auto _n_index_35079=0.0;auto _n_value_35080=((_n_cs_34989*_n_ox_35008)+(_n_ss_34990*_n_oz_35009));d::put(_n_array_35078,_n_index_35079,_n_value_35080);return _n_value_35080;})(),([&](){auto&& _n_array_35081=this->_n_Q_34983;auto _n_index_35082=1.0;auto _n_value_35083=((this->_n_ct_34979*std::sin(_n_n_35007))-(this->_n_st_34980*_n_z1_35010));d::put(_n_array_35081,_n_index_35082,_n_value_35083);return _n_value_35083;})()),([&](){auto&& _n_array_35084=this->_n_Q_34983;auto _n_index_35085=2.0;auto _n_value_35086=((this->_n_st_34980*std::sin(_n_n_35007))+(this->_n_ct_34979*_n_z1_35010));d::put(_n_array_35084,_n_index_35085,_n_value_35086);return _n_value_35086;})()));

}
};
auto _n_toward_35011=[&]( ) mutable ->bool{return (((((-d::number(d::at(this->_n_Q_34983,0.0)))*d::at(this->_n_P_34982,3.0))-(d::at(this->_n_Q_34983,1.0)*d::at(this->_n_P_34982,4.0)))+(d::at(this->_n_Q_34983,2.0)*(_n_EYE_34961-d::at(this->_n_P_34982,5.0))))>0.0);};
(void)(this->_n_depth_34975.fill(0.0));
{double _n_i_35012=0.0;
for(;d::truth((_n_i_35012<_n_LAPS_34966));(void)((_n_i_35012++))){d::check_cancel();double _n_a_35013=((((_n_i_35012/_n_LAPS_34966)*2.0)*ascii::PI)-ascii::PI);
double _n_ca_35014=std::cos(_n_a_35013);
double _n_sa_35015=std::sin(_n_a_35013);
{double _n_f_35016=0.0;
for(;d::truth((_n_f_35016<4.0));(void)((_n_f_35016++))){d::check_cancel();double _n_n_35017=(((_n_TWIST_34959*_n_a_35013)/4.0)+((((2.0*_n_f_35016)+1.0)*ascii::PI)/4.0));
double _n_cn_35018=std::cos(_n_n_35017);
double _n_sn_35019=std::sin(_n_n_35017);
(void)(_n_normal_35004(_n_ca_35014,_n_sa_35015,_n_n_35017));
double _n_d_35020=d::maximum({0.0,(((d::at(this->_n_Q_34983,0.0)*d::at(_n_LIGHT_34969,0.0))+(d::at(this->_n_Q_34983,1.0)*d::at(_n_LIGHT_34969,1.0)))+(d::at(this->_n_Q_34983,2.0)*d::at(_n_LIGHT_34969,2.0)))});
double _n_h_35021=(((d::at(this->_n_Q_34983,0.0)*d::at(_n_HALF_34970,0.0))+(d::at(this->_n_Q_34983,1.0)*d::at(_n_HALF_34970,1.0)))+(d::at(this->_n_Q_34983,2.0)*d::at(_n_HALF_34970,2.0)));
double _n_k_35022=(d::truth((_n_h_35021>0.998))?5.0:(d::truth((_n_d_35020<0.2))?0.0:(d::truth((_n_d_35020<0.45))?1.0:(d::truth((_n_d_35020<0.7))?2.0:(d::truth((_n_d_35020<0.9))?3.0:4.0)))));
{double _n_j_35023=0.0;
for(;d::truth((_n_j_35023<=_n_ACROSS_34967));(void)((_n_j_35023++))){d::check_cancel();double _n_s_35024=(((2.0*_n_j_35023)/_n_ACROSS_34967)-1.0);
(void)(_n_place_34991(_n_ca_35014,_n_sa_35015,(_n_AP_34958*(_n_cn_35018-(_n_s_35024*_n_sn_35019))),(_n_AP_34958*(_n_sn_35019+(_n_s_35024*_n_cn_35018)))));
if(d::truth((!d::truth(_n_toward_35011())))){d::check_cancel();continue;
}
double _n_c_35025=std::floor(d::at(this->_n_P_34982,0.0));
double _n_r_35026=std::floor(d::at(this->_n_P_34982,1.0));
if((((d::truth((_n_c_35025<0.0))||d::truth((_n_c_35025>=this->_n_W_34973)))||d::truth((_n_r_35026<0.0)))||d::truth((_n_r_35026>=this->_n_H_34974)))){d::check_cancel();continue;
}
double _n_o_35027=((_n_r_35026*this->_n_W_34973)+_n_c_35025);
if(d::truth((d::at(this->_n_P_34982,2.0)>d::at(this->_n_depth_34975,_n_o_35027)))){d::check_cancel();(void)((([&](){auto&& _n_array_35087=this->_n_depth_34975;auto _n_index_35088=_n_o_35027;auto _n_value_35089=d::at(this->_n_P_34982,2.0);d::put(_n_array_35087,_n_index_35088,_n_value_35089);return _n_value_35089;})(),([&](){auto&& _n_array_35090=this->_n_tone_34976;auto _n_index_35091=_n_o_35027;auto _n_value_35092=_n_k_35022;d::put(_n_array_35090,_n_index_35091,_n_value_35092);return _n_value_35092;})()));
}
}}
}}
}}
(void)(this->_n_ink_34977.fill(d::String(u"")));
(void)(this->_n_near_34978.fill(0.0));
double _n_D_35028=(_n_AP_34958*std::sqrt(2.));
double _n_N_35029=(_n_LAPS_34966*2.0);
{double _n_f_35030=0.0;
for(;d::truth((_n_f_35030<4.0));(void)((_n_f_35030++))){d::check_cancel();double _n_px_35031=0.0;
double _n_py_35032=0.0;
{double _n_i_35033=0.0;
for(;d::truth((_n_i_35033<=_n_N_35029));(void)((_n_i_35033++))){d::check_cancel();double _n_a_35034=((((_n_i_35033/_n_N_35029)*2.0)*ascii::PI)-ascii::PI);
double _n_m_35035=(((_n_TWIST_34959*_n_a_35034)/4.0)+((_n_f_35030*ascii::PI)/2.0));
double _n_ca_35036=std::cos(_n_a_35034);
double _n_sa_35037=std::sin(_n_a_35034);
(void)(([&](){auto _n_argument_35093=_n_ca_35036;auto _n_argument_35094=_n_sa_35037;auto _n_argument_35095=(_n_D_35028*std::cos(_n_m_35035));auto _n_argument_35096=(_n_D_35028*std::sin(_n_m_35035));return _n_place_34991(_n_argument_35093,_n_argument_35094,_n_argument_35095,_n_argument_35096);})());
double _n_dx_35038=(d::at(this->_n_P_34982,0.0)-_n_px_35031);
double _n_dy_35039=(d::at(this->_n_P_34982,1.0)-_n_py_35032);
(void)(((_n_px_35031=d::at(this->_n_P_34982,0.0)),(_n_py_35032=d::at(this->_n_P_34982,1.0))));
if(d::truth((!d::truth(_n_i_35033)))){d::check_cancel();continue;
}
(void)(_n_normal_35004(_n_ca_35036,_n_sa_35037,(_n_m_35035-(ascii::PI/4.0))));
if(d::truth((!d::truth(_n_toward_35011())))){d::check_cancel();continue;
}
(void)(_n_normal_35004(_n_ca_35036,_n_sa_35037,(_n_m_35035+(ascii::PI/4.0))));
if(d::truth((!d::truth(_n_toward_35011())))){d::check_cancel();continue;
}
double _n_c_35040=std::floor(_n_px_35031);
double _n_r_35041=std::floor(_n_py_35032);
double _n_o_35042=((_n_r_35041*this->_n_W_34973)+_n_c_35040);
if((((((d::truth((_n_c_35040<0.0))||d::truth((_n_c_35040>=this->_n_W_34973)))||d::truth((_n_r_35041<0.0)))||d::truth((_n_r_35041>=this->_n_H_34974)))||d::truth((!d::truth(d::at(this->_n_depth_34975,_n_o_35042)))))||d::truth((d::at(this->_n_P_34982,2.0)<(d::at(this->_n_depth_34975,_n_o_35042)-0.0025))))){d::check_cancel();continue;
}
double _n_cell_35043=((double(d::i32(_n_r_35041)>>(d::u32(1.0)&31))*this->_n_cols_34971)+double(d::i32(_n_c_35040)>>(d::u32(1.0)&31)));
if(d::truth((d::at(this->_n_P_34982,2.0)<=d::at(this->_n_near_34978,_n_cell_35043)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_35097=this->_n_near_34978;auto _n_index_35098=_n_cell_35043;auto _n_value_35099=d::at(this->_n_P_34982,2.0);d::put(_n_array_35097,_n_index_35098,_n_value_35099);return _n_value_35099;})());
double _n_ang_35044=([&](){auto _n_argument_35100=std::fabs(_n_dy_35039);auto _n_argument_35101=(std::fabs(_n_dx_35038)*_n_ASPECT_34956);return std::atan2(_n_argument_35100,_n_argument_35101);})();
(void)(([&](){auto&& _n_array_35102=this->_n_ink_34977;auto _n_index_35103=_n_cell_35043;auto _n_value_35104=(d::truth((_n_ang_35044<0.42))?d::String(u"-"):(d::truth((_n_ang_35044>1.2))?d::String(u"|"):(d::truth(((_n_dx_35038*_n_dy_35039)<0.0))?d::String(u"/"):d::String(u"\\"))));d::put(_n_array_35102,_n_index_35103,_n_value_35104);return _n_value_35104;})());
}}
}}
{double _n_r_35045=0.0;
for(;d::truth((_n_r_35045<this->_n_rows_34972));(void)((_n_r_35045++))){d::check_cancel();d::String _n_line_35046=d::String(u"");
{double _n_c_35047=0.0;
for(;d::truth((_n_c_35047<this->_n_cols_34971));(void)((_n_c_35047++))){d::check_cancel();if(d::truth(d::at(this->_n_ink_34977,((_n_r_35045*this->_n_cols_34971)+_n_c_35047)))){d::check_cancel();(void)((_n_line_35046=(d::string(_n_line_35046)+d::string(d::at(this->_n_ink_34977,((_n_r_35045*this->_n_cols_34971)+_n_c_35047))))));
continue;
}
double _n_o_35048=(((2.0*_n_r_35045)*this->_n_W_34973)+(2.0*_n_c_35047));
double _n_hits_35049=0.0;
double _n_best_35050=(-d::number(1.0));
for(auto &&_n_item_35105:d::Array<double,false>{_n_o_35048,(_n_o_35048+1.0),(_n_o_35048+this->_n_W_34973),((_n_o_35048+this->_n_W_34973)+1.0)}){d::check_cancel();double _n_q_35051=_n_item_35105;
{
if(d::truth((!d::truth(d::at(this->_n_depth_34975,_n_q_35051))))){d::check_cancel();continue;
}
(void)((_n_hits_35049++));
if((d::truth((_n_best_35050<0.0))||d::truth((d::at(this->_n_depth_34975,_n_q_35051)>d::at(this->_n_depth_34975,_n_best_35050))))){d::check_cancel();(void)((_n_best_35050=_n_q_35051));
}

}
}
(void)((_n_line_35046=(d::string(_n_line_35046)+d::string((d::truth((_n_hits_35049<2.0))?d::String(u" "):d::at(_n_FACE_34955,(d::truth(_n_paper_34987)?((double(_n_FACE_34955.size())-1.0)-d::at(this->_n_tone_34976,_n_best_35050)):d::at(this->_n_tone_34976,_n_best_35050))))))));
}}
(void)(([&](){auto&& _n_array_35106=this->_n_lines_34981;auto _n_index_35107=_n_r_35045;auto _n_value_35108=_n_line_35046;d::put(_n_array_35106,_n_index_35107,_n_value_35108);return _n_value_35108;})());
}}
return d::join(this->_n_lines_34981,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("twisted-ring").cols)*ascii::catalog_meta("twisted-ring").rows);auto _env=std::make_shared<_n_Record_35052>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &twisted_ring_meta(){return catalog_meta("twisted-ring");}
std::unique_ptr<Piece> make_twisted_ring(const AsciiPieceOptions &o){return std::make_unique<Native_twisted_ring>(o);}
}
