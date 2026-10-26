// Direct, statically typed C++ from src/pieces/twisted-ring.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34953;
struct _n_Record_35051;
struct _n_Record_34953{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34953> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34953>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_35051{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35051> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35051>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_unit_34967(d::Array<double,false> _a0);
std::shared_ptr<_n_Record_34953> _n_meta_34952=[](){return ([&](){auto _n_object_35054=std::make_shared<_n_Record_34953>();_n_object_35054->_p_name=d::String(u"twisted ring");_n_object_35054->_p_category=d::String(u"shapes");_n_object_35054->_p_note=d::String(u"a square ring twisted three quarters, so it has one face");_n_object_35054->_p_cols=46.0;_n_object_35054->_p_rows=21.0;_n_object_35054->_p_fps=30.0;return _n_object_35054;})();}();
const d::String _n_FACE_34954=[](){return d::String(u".:+*#@");}();
const double _n_ASPECT_34955=[](){return 0.5;}();
const double _n_R_34956=[](){return 0.75;}();
const double _n_AP_34957=[](){return 0.22;}();
const double _n_TWIST_34958=[](){return 3.0;}();
const double _n_TILT_34959=[](){return 0.92;}();
const double _n_EYE_34960=[](){return 6.0;}();
const double _n_SCALE_34961=[](){return 9.2;}();
const double _n_LIFT_34962=[](){return 0.5;}();
const double _n_SPIN_34963=[](){return 0.32;}();
const double _n_P0_34964=[](){return 0.4;}();
const double _n_LAPS_34965=[](){return 720.0;}();
const double _n_ACROSS_34966=[](){return 14.0;}();
d::Array<double,false> _n_LIGHT_34968=[](){return _n_unit_34967(d::Array<double,false>{(-d::number(0.5)),0.75,0.6});}();
d::Array<double,false> _n_HALF_34969=[](){return _n_unit_34967(d::Array<double,false>{d::at(_n_LIGHT_34968,0.0),d::at(_n_LIGHT_34968,1.0),(d::at(_n_LIGHT_34968,2.0)+1.0)});}();
d::Array<double,false> _n_unit_34967(d::Array<double,false> _a0){d::Array<double,false> _n_v_34983=_a0;
return d::map(_n_v_34983,[&]( double _a0) mutable ->double{double _n_c_34984=_a0;
return (_n_c_34984/d::hypot(_n_v_34983));});}

struct Native_twisted_ring final:ascii::Piece{
double _n_cols_34970{};
double _n_rows_34971{};
double _n_W_34972{};
double _n_H_34973{};
d::Array<float,true> _n_depth_34974{};
d::Array<uint8_t,true> _n_tone_34975{};
d::Array<d::String,false> _n_ink_34976{};
d::Array<float,true> _n_near_34977{};
double _n_ct_34978{};
double _n_st_34979{};
d::Array<d::String,false> _n_lines_34980{};
d::Array<double,false> _n_P_34981{};
d::Array<double,false> _n_Q_34982{};
std::function<d::String(double,std::shared_ptr<_n_Record_35051>)> _render;

explicit Native_twisted_ring(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_35055=_n_meta_34952;
this->_n_cols_34970=_n_binding_35055->_p_cols;
this->_n_rows_34971=_n_binding_35055->_p_rows;
this->_n_W_34972=(this->_n_cols_34970*2.0);
this->_n_H_34973=(this->_n_rows_34971*2.0);
this->_n_depth_34974=d::Array<float,true>(size_t((this->_n_W_34972*this->_n_H_34973)));
this->_n_tone_34975=d::Array<uint8_t,true>(size_t((this->_n_W_34972*this->_n_H_34973)));
this->_n_ink_34976=d::Array<d::String,false>(size_t((this->_n_cols_34970*this->_n_rows_34971)));
this->_n_near_34977=d::Array<float,true>(size_t((this->_n_cols_34970*this->_n_rows_34971)));
this->_n_ct_34978=std::cos(_n_TILT_34959);
this->_n_st_34979=std::sin(_n_TILT_34959);
this->_n_lines_34980=d::Array<d::String,false>(size_t(this->_n_rows_34971));
this->_n_P_34981=d::Array<double,false>{0.0,0.0,0.0,0.0,0.0,0.0};
this->_n_Q_34982=d::Array<double,false>{0.0,0.0,0.0};
_render=[=]( double _a0,std::shared_ptr<_n_Record_35051> _a1) mutable ->d::String{double _n_t_34985=_a0;
auto _n_binding_35058=(d::present(_a1)?_a1:([&](){auto _n_object_35057=std::make_shared<_n_Record_35051>();return _n_object_35057;})());
bool _n_paper_34986=(d::present(_n_binding_35058->_p_paper)?d::read(_n_binding_35058->_p_paper):false);
{
double _n_p_34987=(_n_P0_34964+(_n_SPIN_34963*_n_t_34985));
double _n_cs_34988=std::cos(_n_p_34987);
double _n_ss_34989=std::sin(_n_p_34987);
auto _n_place_34990=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_ca_34991=_a0;
double _n_sa_34992=_a1;
double _n_qr_34993=_a2;
double _n_qy_34994=_a3;
{
double _n_x_34995=((_n_R_34956+_n_qr_34993)*_n_ca_34991);
double _n_z_34996=((_n_R_34956+_n_qr_34993)*_n_sa_34992);
double _n_wx_34997=((_n_cs_34988*_n_x_34995)+(_n_ss_34989*_n_z_34996));
double _n_z1_34998=(((-d::number(_n_ss_34989))*_n_x_34995)+(_n_cs_34988*_n_z_34996));
double _n_wy_34999=((this->_n_ct_34978*_n_qy_34994)-(this->_n_st_34979*_n_z1_34998));
double _n_wz_35000=((this->_n_st_34979*_n_qy_34994)+(this->_n_ct_34978*_n_z1_34998));
double _n_ooz_35001=(1.0/(_n_EYE_34960-_n_wz_35000));
double _n_k_35002=((_n_SCALE_34961*_n_EYE_34960)*_n_ooz_35001);
(void)(([&](){auto&& _n_array_35059=this->_n_P_34981;auto _n_index_35060=0.0;auto _n_value_35061=(2.0*((this->_n_cols_34970/2.0)+((_n_k_35002*_n_wx_34997)/_n_ASPECT_34955)));d::put(_n_array_35059,_n_index_35060,_n_value_35061);return _n_value_35061;})());
(void)(([&](){auto&& _n_array_35062=this->_n_P_34981;auto _n_index_35063=1.0;auto _n_value_35064=(2.0*(((this->_n_rows_34971/2.0)-_n_LIFT_34962)-(_n_k_35002*_n_wy_34999)));d::put(_n_array_35062,_n_index_35063,_n_value_35064);return _n_value_35064;})());
(void)((((([&](){auto&& _n_array_35065=this->_n_P_34981;auto _n_index_35066=2.0;auto _n_value_35067=_n_ooz_35001;d::put(_n_array_35065,_n_index_35066,_n_value_35067);return _n_value_35067;})(),([&](){auto&& _n_array_35068=this->_n_P_34981;auto _n_index_35069=3.0;auto _n_value_35070=_n_wx_34997;d::put(_n_array_35068,_n_index_35069,_n_value_35070);return _n_value_35070;})()),([&](){auto&& _n_array_35071=this->_n_P_34981;auto _n_index_35072=4.0;auto _n_value_35073=_n_wy_34999;d::put(_n_array_35071,_n_index_35072,_n_value_35073);return _n_value_35073;})()),([&](){auto&& _n_array_35074=this->_n_P_34981;auto _n_index_35075=5.0;auto _n_value_35076=_n_wz_35000;d::put(_n_array_35074,_n_index_35075,_n_value_35076);return _n_value_35076;})()));

}
};
auto _n_normal_35003=[&]( double _a0,double _a1,double _a2) mutable ->void{double _n_ca_35004=_a0;
double _n_sa_35005=_a1;
double _n_n_35006=_a2;
{
double _n_ox_35007=(std::cos(_n_n_35006)*_n_ca_35004);
double _n_oz_35008=(std::cos(_n_n_35006)*_n_sa_35005);
double _n_z1_35009=(((-d::number(_n_ss_34989))*_n_ox_35007)+(_n_cs_34988*_n_oz_35008));
(void)(((([&](){auto&& _n_array_35077=this->_n_Q_34982;auto _n_index_35078=0.0;auto _n_value_35079=((_n_cs_34988*_n_ox_35007)+(_n_ss_34989*_n_oz_35008));d::put(_n_array_35077,_n_index_35078,_n_value_35079);return _n_value_35079;})(),([&](){auto&& _n_array_35080=this->_n_Q_34982;auto _n_index_35081=1.0;auto _n_value_35082=((this->_n_ct_34978*std::sin(_n_n_35006))-(this->_n_st_34979*_n_z1_35009));d::put(_n_array_35080,_n_index_35081,_n_value_35082);return _n_value_35082;})()),([&](){auto&& _n_array_35083=this->_n_Q_34982;auto _n_index_35084=2.0;auto _n_value_35085=((this->_n_st_34979*std::sin(_n_n_35006))+(this->_n_ct_34978*_n_z1_35009));d::put(_n_array_35083,_n_index_35084,_n_value_35085);return _n_value_35085;})()));

}
};
auto _n_toward_35010=[&]( ) mutable ->bool{return (((((-d::number(d::at(this->_n_Q_34982,0.0)))*d::at(this->_n_P_34981,3.0))-(d::at(this->_n_Q_34982,1.0)*d::at(this->_n_P_34981,4.0)))+(d::at(this->_n_Q_34982,2.0)*(_n_EYE_34960-d::at(this->_n_P_34981,5.0))))>0.0);};
(void)(this->_n_depth_34974.fill(0.0));
{double _n_i_35011=0.0;
for(;d::truth((_n_i_35011<_n_LAPS_34965));(void)((_n_i_35011++))){d::check_cancel();double _n_a_35012=((((_n_i_35011/_n_LAPS_34965)*2.0)*ascii::PI)-ascii::PI);
double _n_ca_35013=std::cos(_n_a_35012);
double _n_sa_35014=std::sin(_n_a_35012);
{double _n_f_35015=0.0;
for(;d::truth((_n_f_35015<4.0));(void)((_n_f_35015++))){d::check_cancel();double _n_n_35016=(((_n_TWIST_34958*_n_a_35012)/4.0)+((((2.0*_n_f_35015)+1.0)*ascii::PI)/4.0));
double _n_cn_35017=std::cos(_n_n_35016);
double _n_sn_35018=std::sin(_n_n_35016);
(void)(_n_normal_35003(_n_ca_35013,_n_sa_35014,_n_n_35016));
double _n_d_35019=d::maximum({0.0,(((d::at(this->_n_Q_34982,0.0)*d::at(_n_LIGHT_34968,0.0))+(d::at(this->_n_Q_34982,1.0)*d::at(_n_LIGHT_34968,1.0)))+(d::at(this->_n_Q_34982,2.0)*d::at(_n_LIGHT_34968,2.0)))});
double _n_h_35020=(((d::at(this->_n_Q_34982,0.0)*d::at(_n_HALF_34969,0.0))+(d::at(this->_n_Q_34982,1.0)*d::at(_n_HALF_34969,1.0)))+(d::at(this->_n_Q_34982,2.0)*d::at(_n_HALF_34969,2.0)));
double _n_k_35021=(d::truth((_n_h_35020>0.998))?5.0:(d::truth((_n_d_35019<0.2))?0.0:(d::truth((_n_d_35019<0.45))?1.0:(d::truth((_n_d_35019<0.7))?2.0:(d::truth((_n_d_35019<0.9))?3.0:4.0)))));
{double _n_j_35022=0.0;
for(;d::truth((_n_j_35022<=_n_ACROSS_34966));(void)((_n_j_35022++))){d::check_cancel();double _n_s_35023=(((2.0*_n_j_35022)/_n_ACROSS_34966)-1.0);
(void)(_n_place_34990(_n_ca_35013,_n_sa_35014,(_n_AP_34957*(_n_cn_35017-(_n_s_35023*_n_sn_35018))),(_n_AP_34957*(_n_sn_35018+(_n_s_35023*_n_cn_35017)))));
if(d::truth((!d::truth(_n_toward_35010())))){d::check_cancel();continue;
}
double _n_c_35024=std::floor(d::at(this->_n_P_34981,0.0));
double _n_r_35025=std::floor(d::at(this->_n_P_34981,1.0));
if((((d::truth((_n_c_35024<0.0))||d::truth((_n_c_35024>=this->_n_W_34972)))||d::truth((_n_r_35025<0.0)))||d::truth((_n_r_35025>=this->_n_H_34973)))){d::check_cancel();continue;
}
double _n_o_35026=((_n_r_35025*this->_n_W_34972)+_n_c_35024);
if(d::truth((d::at(this->_n_P_34981,2.0)>d::at(this->_n_depth_34974,_n_o_35026)))){d::check_cancel();(void)((([&](){auto&& _n_array_35086=this->_n_depth_34974;auto _n_index_35087=_n_o_35026;auto _n_value_35088=d::at(this->_n_P_34981,2.0);d::put(_n_array_35086,_n_index_35087,_n_value_35088);return _n_value_35088;})(),([&](){auto&& _n_array_35089=this->_n_tone_34975;auto _n_index_35090=_n_o_35026;auto _n_value_35091=_n_k_35021;d::put(_n_array_35089,_n_index_35090,_n_value_35091);return _n_value_35091;})()));
}
}}
}}
}}
(void)(this->_n_ink_34976.fill(d::String(u"")));
(void)(this->_n_near_34977.fill(0.0));
double _n_D_35027=(_n_AP_34957*std::sqrt(2.));
double _n_N_35028=(_n_LAPS_34965*2.0);
{double _n_f_35029=0.0;
for(;d::truth((_n_f_35029<4.0));(void)((_n_f_35029++))){d::check_cancel();double _n_px_35030=0.0;
double _n_py_35031=0.0;
{double _n_i_35032=0.0;
for(;d::truth((_n_i_35032<=_n_N_35028));(void)((_n_i_35032++))){d::check_cancel();double _n_a_35033=((((_n_i_35032/_n_N_35028)*2.0)*ascii::PI)-ascii::PI);
double _n_m_35034=(((_n_TWIST_34958*_n_a_35033)/4.0)+((_n_f_35029*ascii::PI)/2.0));
double _n_ca_35035=std::cos(_n_a_35033);
double _n_sa_35036=std::sin(_n_a_35033);
(void)(([&](){auto _n_argument_35092=_n_ca_35035;auto _n_argument_35093=_n_sa_35036;auto _n_argument_35094=(_n_D_35027*std::cos(_n_m_35034));auto _n_argument_35095=(_n_D_35027*std::sin(_n_m_35034));return _n_place_34990(_n_argument_35092,_n_argument_35093,_n_argument_35094,_n_argument_35095);})());
double _n_dx_35037=(d::at(this->_n_P_34981,0.0)-_n_px_35030);
double _n_dy_35038=(d::at(this->_n_P_34981,1.0)-_n_py_35031);
(void)(((_n_px_35030=d::at(this->_n_P_34981,0.0)),(_n_py_35031=d::at(this->_n_P_34981,1.0))));
if(d::truth((!d::truth(_n_i_35032)))){d::check_cancel();continue;
}
(void)(_n_normal_35003(_n_ca_35035,_n_sa_35036,(_n_m_35034-(ascii::PI/4.0))));
if(d::truth((!d::truth(_n_toward_35010())))){d::check_cancel();continue;
}
(void)(_n_normal_35003(_n_ca_35035,_n_sa_35036,(_n_m_35034+(ascii::PI/4.0))));
if(d::truth((!d::truth(_n_toward_35010())))){d::check_cancel();continue;
}
double _n_c_35039=std::floor(_n_px_35030);
double _n_r_35040=std::floor(_n_py_35031);
double _n_o_35041=((_n_r_35040*this->_n_W_34972)+_n_c_35039);
if((((((d::truth((_n_c_35039<0.0))||d::truth((_n_c_35039>=this->_n_W_34972)))||d::truth((_n_r_35040<0.0)))||d::truth((_n_r_35040>=this->_n_H_34973)))||d::truth((!d::truth(d::at(this->_n_depth_34974,_n_o_35041)))))||d::truth((d::at(this->_n_P_34981,2.0)<(d::at(this->_n_depth_34974,_n_o_35041)-0.0025))))){d::check_cancel();continue;
}
double _n_cell_35042=((double(d::i32(_n_r_35040)>>(d::u32(1.0)&31))*this->_n_cols_34970)+double(d::i32(_n_c_35039)>>(d::u32(1.0)&31)));
if(d::truth((d::at(this->_n_P_34981,2.0)<=d::at(this->_n_near_34977,_n_cell_35042)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_35096=this->_n_near_34977;auto _n_index_35097=_n_cell_35042;auto _n_value_35098=d::at(this->_n_P_34981,2.0);d::put(_n_array_35096,_n_index_35097,_n_value_35098);return _n_value_35098;})());
double _n_ang_35043=([&](){auto _n_argument_35099=std::fabs(_n_dy_35038);auto _n_argument_35100=(std::fabs(_n_dx_35037)*_n_ASPECT_34955);return std::atan2(_n_argument_35099,_n_argument_35100);})();
(void)(([&](){auto&& _n_array_35101=this->_n_ink_34976;auto _n_index_35102=_n_cell_35042;auto _n_value_35103=(d::truth((_n_ang_35043<0.42))?d::String(u"-"):(d::truth((_n_ang_35043>1.2))?d::String(u"|"):(d::truth(((_n_dx_35037*_n_dy_35038)<0.0))?d::String(u"/"):d::String(u"\\"))));d::put(_n_array_35101,_n_index_35102,_n_value_35103);return _n_value_35103;})());
}}
}}
{double _n_r_35044=0.0;
for(;d::truth((_n_r_35044<this->_n_rows_34971));(void)((_n_r_35044++))){d::check_cancel();d::String _n_line_35045=d::String(u"");
{double _n_c_35046=0.0;
for(;d::truth((_n_c_35046<this->_n_cols_34970));(void)((_n_c_35046++))){d::check_cancel();if(d::truth(d::at(this->_n_ink_34976,((_n_r_35044*this->_n_cols_34970)+_n_c_35046)))){d::check_cancel();(void)((_n_line_35045=(d::string(_n_line_35045)+d::string(d::at(this->_n_ink_34976,((_n_r_35044*this->_n_cols_34970)+_n_c_35046))))));
continue;
}
double _n_o_35047=(((2.0*_n_r_35044)*this->_n_W_34972)+(2.0*_n_c_35046));
double _n_hits_35048=0.0;
double _n_best_35049=(-d::number(1.0));
for(auto &&_n_item_35104:d::Array<double,false>{_n_o_35047,(_n_o_35047+1.0),(_n_o_35047+this->_n_W_34972),((_n_o_35047+this->_n_W_34972)+1.0)}){d::check_cancel();double _n_q_35050=_n_item_35104;
{
if(d::truth((!d::truth(d::at(this->_n_depth_34974,_n_q_35050))))){d::check_cancel();continue;
}
(void)((_n_hits_35048++));
if((d::truth((_n_best_35049<0.0))||d::truth((d::at(this->_n_depth_34974,_n_q_35050)>d::at(this->_n_depth_34974,_n_best_35049))))){d::check_cancel();(void)((_n_best_35049=_n_q_35050));
}

}
}
(void)((_n_line_35045=(d::string(_n_line_35045)+d::string((d::truth((_n_hits_35048<2.0))?d::String(u" "):d::at(_n_FACE_34954,(d::truth(_n_paper_34986)?((double(_n_FACE_34954.size())-1.0)-d::at(this->_n_tone_34975,_n_best_35049)):d::at(this->_n_tone_34975,_n_best_35049))))))));
}}
(void)(([&](){auto&& _n_array_35105=this->_n_lines_34980;auto _n_index_35106=_n_r_35044;auto _n_value_35107=_n_line_35045;d::put(_n_array_35105,_n_index_35106,_n_value_35107);return _n_value_35107;})());
}}
return d::join(this->_n_lines_34980,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("twisted-ring").cols)*ascii::catalog_meta("twisted-ring").rows);auto _env=std::make_shared<_n_Record_35051>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &twisted_ring_meta(){return catalog_meta("twisted-ring");}
std::unique_ptr<Piece> make_twisted_ring(const AsciiPieceOptions &o){return std::make_unique<Native_twisted_ring>(o);}
}
