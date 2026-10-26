// Direct, statically typed C++ from src/pieces/dna-helix.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_8051;
struct _n_Record_8114;
struct _n_Record_8051{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_8051> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8051>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_8114{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_8114> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8114>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_8051> _n_meta_8050=[](){return ([&](){auto _n_object_8117=std::make_shared<_n_Record_8051>();_n_object_8117->_p_name=d::String(u"dna helix");_n_object_8117->_p_category=d::String(u"shapes");_n_object_8117->_p_note=d::String(u"a double helix with base pairs, turning about its axis");_n_object_8117->_p_cols=64.0;_n_object_8117->_p_rows=15.0;_n_object_8117->_p_fps=20.0;return _n_object_8117;})();}();
const double _n_A_8052=[](){return 5.0;}();
const double _n_PITCH_8053=[](){return 42.0;}();
const double _n_K_8054=[](){return ((2.0*ascii::PI)/_n_PITCH_8053);}();
const double _n_GROOVE_8055=[](){return (0.64*ascii::PI);}();
const double _n_PAIR_8056=[](){return 4.0;}();
const double _n_SPEED_8057=[](){return 0.5;}();
const double _n_A0_8058=[](){return 2.2;}();
const double _n_END_8059=[](){return 3.0;}();

struct Native_dna_helix final:ascii::Piece{
double _n_cols_8060{};
double _n_rows_8061{};
d::Array<d::String,false> _n_g_8062{};
d::Array<double,true> _n_depth_8063{};
d::Array<int8_t,true> _n_who_8064{};
double _n_lo_8065{};
double _n_hi_8066{};
d::Array<int16_t,true> _n_row_8067{};
d::Array<int8_t,true> _n_steep_8068{};
std::function<d::String(double,std::shared_ptr<_n_Record_8114>)> _render;
std::array<double,3> _n_at_8069(double _a0,double _a1,double _a2){double _n_x_8070=_a0;
double _n_s_8071=_a1;
double _n_a_8072=_a2;
{
double _n_th_8073=(((_n_K_8054*(_n_x_8070-(this->_n_cols_8060/2.0)))-_n_a_8072)-(_n_s_8071*_n_GROOVE_8055));
double _n_c_8074=std::cos(_n_th_8073);
return std::array<double,3>{((this->_n_rows_8061/2.0)+(_n_A_8052*_n_c_8074)),(-d::number(std::sin(_n_th_8073))),((this->_n_rows_8061/2.0)+(d::truth((_n_c_8074>0.0))?_n_A_8052:(-d::number(_n_A_8052))))};

}
}

explicit Native_dna_helix(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_8118=_n_meta_8050;
this->_n_cols_8060=_n_binding_8118->_p_cols;
this->_n_rows_8061=_n_binding_8118->_p_rows;
this->_n_g_8062=d::Array<d::String,false>(size_t((this->_n_cols_8060*this->_n_rows_8061)));
this->_n_depth_8063=d::Array<double,true>(size_t((this->_n_cols_8060*this->_n_rows_8061)));
this->_n_who_8064=d::Array<int8_t,true>(size_t((this->_n_cols_8060*this->_n_rows_8061)));
this->_n_lo_8065=_n_END_8059;
this->_n_hi_8066=((this->_n_cols_8060-1.0)-_n_END_8059);
this->_n_row_8067=d::Array<int16_t,true>(size_t(this->_n_cols_8060));
this->_n_steep_8068=d::Array<int8_t,true>(size_t(this->_n_cols_8060));
_render=[=]( double _a0,std::shared_ptr<_n_Record_8114> _a1) mutable ->d::String{double _n_t_8075=_a0;
{
double _n_a_8076=(_n_A0_8058+(_n_SPEED_8057*_n_t_8075));
(void)(this->_n_g_8062.fill(d::String(u" ")));
(void)(this->_n_depth_8063.fill((-d::number(INFINITY))));
(void)(this->_n_who_8064.fill((-d::number(1.0))));
auto _n_put_8077=[&]( double _a0,double _a1,double _a2,d::String _a3,double _a4) mutable ->void{double _n_col_8078=_a0;
double _n_r_8079=_a1;
double _n_z_8080=_a2;
d::String _n_ch_8081=_a3;
double _n_k_8082=_a4;
{
if((((d::truth((_n_r_8079<0.0))||d::truth((_n_r_8079>=this->_n_rows_8061)))||d::truth((_n_col_8078<this->_n_lo_8065)))||d::truth((_n_col_8078>this->_n_hi_8066)))){d::check_cancel();return;
}
double _n_i_8083=((_n_r_8079*this->_n_cols_8060)+_n_col_8078);
if(d::truth((_n_z_8080<=d::at(this->_n_depth_8063,_n_i_8083)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_8119=this->_n_g_8062;auto _n_index_8120=_n_i_8083;auto _n_value_8121=_n_ch_8081;d::put(_n_array_8119,_n_index_8120,_n_value_8121);return _n_value_8121;})());
(void)(([&](){auto&& _n_array_8122=this->_n_depth_8063;auto _n_index_8123=_n_i_8083;auto _n_value_8124=_n_z_8080;d::put(_n_array_8122,_n_index_8123,_n_value_8124);return _n_value_8124;})());
(void)(([&](){auto&& _n_array_8125=this->_n_who_8064;auto _n_index_8126=_n_i_8083;auto _n_value_8127=_n_k_8082;d::put(_n_array_8125,_n_index_8126,_n_value_8127);return _n_value_8127;})());

}
};
{double _n_col_8084=((this->_n_lo_8065+3.0)+double(d::i32(d::mod(((this->_n_hi_8066-this->_n_lo_8065)-6.0),_n_PAIR_8056))>>(d::u32(1.0)&31)));
for(;d::truth((_n_col_8084<=(this->_n_hi_8066-3.0)));(void)((_n_col_8084=(_n_col_8084+_n_PAIR_8056)))){d::check_cancel();auto _n_binding_8128=this->_n_at_8069((_n_col_8084+0.5),0.0,_n_a_8076);
double _n_y0_8085=d::at(_n_binding_8128,0.0);
double _n_z0_8086=d::at(_n_binding_8128,1.0);
auto _n_binding_8129=this->_n_at_8069((_n_col_8084+0.5),1.0,_n_a_8076);
double _n_y1_8087=d::at(_n_binding_8129,0.0);
double _n_z1_8088=d::at(_n_binding_8129,1.0);
double _n_r0_8089=std::floor(d::minimum({_n_y0_8085,_n_y1_8087}));
double _n_r1_8090=std::floor(d::maximum({_n_y0_8085,_n_y1_8087}));
{double _n_r_8091=(_n_r0_8089+1.0);
for(;d::truth((_n_r_8091<_n_r1_8090));(void)((_n_r_8091++))){d::check_cancel();double _n_u_8092=(((_n_r_8091+0.5)-_n_y0_8085)/(_n_y1_8087-_n_y0_8085));
double _n_z_8093=(_n_z0_8086+(_n_u_8092*(_n_z1_8088-_n_z0_8086)));
(void)(_n_put_8077(_n_col_8084,_n_r_8091,_n_z_8093,(d::truth((_n_z_8093>0.0))?d::String(u"|"):d::String(u":")),2.0));
}}
}}
{double _n_s_8094=0.0;
for(;d::truth((_n_s_8094<2.0));(void)((_n_s_8094++))){d::check_cancel();(void)(this->_n_row_8067.fill((-d::number(1.0))));
{double _n_col_8095=this->_n_lo_8065;
for(;d::truth((_n_col_8095<=this->_n_hi_8066));(void)((_n_col_8095++))){d::check_cancel();auto _n_binding_8130=this->_n_at_8069((_n_col_8095+0.5),_n_s_8094,_n_a_8076);
double _n_y_8096=d::at(_n_binding_8130,0.0);
double _n_z_8097=d::at(_n_binding_8130,1.0);
double _n_crest_8098=d::at(_n_binding_8130,2.0);
double _n_dy_8099=([&](){auto _n_left_8131=d::at(this->_n_at_8069((_n_col_8095+1.0),_n_s_8094,_n_a_8076),0.0);auto _n_right_8132=d::at(this->_n_at_8069(_n_col_8095,_n_s_8094,_n_a_8076),0.0);return (_n_left_8131-_n_right_8132);})();
(void)(([&](){auto&& _n_array_8133=this->_n_row_8067;auto _n_index_8134=_n_col_8095;auto _n_value_8135=std::floor(_n_y_8096);d::put(_n_array_8133,_n_index_8134,_n_value_8135);return _n_value_8135;})());
(void)(([&](){auto&& _n_array_8136=this->_n_steep_8068;auto _n_index_8137=_n_col_8095;auto _n_value_8138=0.0;d::put(_n_array_8136,_n_index_8137,_n_value_8138);return _n_value_8138;})());
double _n_cap_8100=std::floor((_n_crest_8098-0.25));
if(d::truth((_n_z_8097<(-d::number(0.2))))){d::check_cancel();(void)(_n_put_8077(_n_col_8095,d::at(this->_n_row_8067,_n_col_8095),_n_z_8097,d::String(u"·"),1.0));
}else {d::check_cancel();if((d::truth((std::fabs(_n_dy_8099)>=0.3))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_8139=(_n_crest_8098<_n_y_8096);return d::truth(_n_logical_8139)?(d::at(this->_n_row_8067,_n_col_8095)==_n_cap_8100):_n_logical_8139;})()))))){d::check_cancel();(void)(([&](){auto&& _n_array_8140=this->_n_steep_8068;auto _n_index_8141=_n_col_8095;auto _n_value_8142=(d::truth((_n_dy_8099>0.0))?1.0:(-d::number(1.0)));d::put(_n_array_8140,_n_index_8141,_n_value_8142);return _n_value_8142;})());
(void)(_n_put_8077(_n_col_8095,d::at(this->_n_row_8067,_n_col_8095),(_n_z_8097+0.5),(d::truth((_n_dy_8099>0.0))?d::String(u"\\"):d::String(u"/")),0.0));
}else {d::check_cancel();(void)(_n_put_8077(_n_col_8095,_n_cap_8100,(_n_z_8097+0.5),d::String(u"_"),0.0));
}
}
}}
{double _n_col_8101=this->_n_lo_8065;
for(;d::truth((_n_col_8101<=this->_n_hi_8066));(void)((_n_col_8101++))){d::check_cancel();if(((d::truth((!d::truth(d::at(this->_n_steep_8068,_n_col_8101))))||d::truth((d::at(this->_n_row_8067,(_n_col_8101-1.0))==d::at(this->_n_row_8067,_n_col_8101))))||d::truth((d::at(this->_n_row_8067,(_n_col_8101+1.0))==d::at(this->_n_row_8067,_n_col_8101))))){d::check_cancel();continue;
}
auto _n_binding_8143=this->_n_at_8069((_n_col_8101+0.5),_n_s_8094,_n_a_8076);
double _n_y_8102=d::at(_n_binding_8143,0.0);
double _n_z_8103=d::at(_n_binding_8143,1.0);
if(d::truth((_n_z_8103<0.3))){d::check_cancel();continue;
}
double _n_side_8104=(d::truth(((((d::at(this->_n_row_8067,_n_col_8101)+0.5)-_n_y_8102)*d::at(this->_n_steep_8068,_n_col_8101))>0.0))?1.0:(-d::number(1.0)));
(void)(_n_put_8077((_n_col_8101+_n_side_8104),d::at(this->_n_row_8067,_n_col_8101),(_n_z_8103+0.5),(d::truth((d::at(this->_n_steep_8068,_n_col_8101)>0.0))?d::String(u"\\"):d::String(u"/")),0.0));
}}
}}
d::String _n_out_8105=d::String(u"");
{double _n_r_8106=0.0;
for(;d::truth((_n_r_8106<this->_n_rows_8061));(void)((_n_r_8106++))){d::check_cancel();d::String _n_line_8107=d::String(u"");
{double _n_col_8108=0.0;
for(;d::truth((_n_col_8108<this->_n_cols_8060));(void)((_n_col_8108++))){d::check_cancel();double _n_i_8109=((_n_r_8106*this->_n_cols_8060)+_n_col_8108);
d::String _n_ch_8110=d::at(this->_n_g_8062,_n_i_8109);
if(d::truth((d::at(this->_n_who_8064,_n_i_8109)==1.0))){d::check_cancel();{double _n_dc_8111=(-d::number(1.0));
for(;(d::truth((_n_dc_8111<=1.0))&&d::truth((_n_ch_8110!=d::String(u" "))));(void)((_n_dc_8111++))){d::check_cancel();{double _n_dr_8112=(-d::number(1.0));
for(;d::truth((_n_dr_8112<=1.0));(void)((_n_dr_8112++))){d::check_cancel();double _n_j_8113=((((_n_r_8106+_n_dr_8112)*this->_n_cols_8060)+_n_col_8108)+_n_dc_8111);
if((((d::truth(((_n_r_8106+_n_dr_8112)>=0.0))&&d::truth(((_n_r_8106+_n_dr_8112)<this->_n_rows_8061)))&&d::truth((d::at(this->_n_who_8064,_n_j_8113)==0.0)))&&d::truth((d::at(this->_n_depth_8063,_n_j_8113)>0.6)))){d::check_cancel();(void)((_n_ch_8110=d::String(u" ")));
}
}}
}}
}
(void)((_n_line_8107=(d::string(_n_line_8107)+d::string(_n_ch_8110))));
}}
(void)((_n_out_8105=(d::string(_n_out_8105)+d::string((d::string(_n_line_8107)+d::string((d::truth((_n_r_8106<(this->_n_rows_8061-1.0)))?d::String(u"\n"):d::String(u""))))))));
}}
return _n_out_8105;

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("dna-helix").cols)*ascii::catalog_meta("dna-helix").rows);auto _env=std::make_shared<_n_Record_8114>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &dna_helix_meta(){return catalog_meta("dna-helix");}
std::unique_ptr<Piece> make_dna_helix(const AsciiPieceOptions &o){return std::make_unique<Native_dna_helix>(o);}
}
