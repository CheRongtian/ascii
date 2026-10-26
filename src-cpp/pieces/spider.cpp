// Direct, statically typed C++ from src/pieces/spider.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29743;
struct _n_Record_29814;
struct _n_Record_29818;
struct _n_Record_29743{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_29743> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29743>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_29814{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29814> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29814>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29818{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
d::String _p_symbol_28{};
d::String _p_symbol_29{};
d::String _p_symbol_60{};
static std::shared_ptr<_n_Record_29818> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29818>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);out->_p_symbol_28=d::decode<d::String>(j["("]);out->_p_symbol_29=d::decode<d::String>(j[")"]);out->_p_symbol_60=d::decode<d::String>(j["`"]);return out;}
};
d::Array<d::String,false> _n_sprite_29752(double _a0,double _a1);
double _n_ease_29756(double _a0);
std::shared_ptr<_n_Record_29743> _n_meta_29742=[](){return ([&](){auto _n_object_29817=std::make_shared<_n_Record_29743>();_n_object_29817->_p_name=d::String(u"spider");_n_object_29817->_p_category=d::String(u"creatures");_n_object_29817->_p_note=d::String(u"a spider lowering itself on silk, then climbing back up");_n_object_29817->_p_cols=28.0;_n_object_29817->_p_rows=24.0;_n_object_29817->_p_fps=15.0;return _n_object_29817;})();}();
const double _n_LOOP_29744=[](){return 10.0;}();
d::Array<double,false> _n_HUB_29745=[](){return d::Array<double,false>{10.0,4.0};}();
d::Array<double,false> _n_RINGS_29746=[](){return d::Array<double,false>{3.0,6.0};}();
const double _n_TOP_29747=[](){return 3.0;}();
const double _n_LOW_29748=[](){return 15.6;}();
d::Array<d::Array<d::String,false>,false> _n_POSES_29749=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"  \\    .-"),d::String(u"   \\  (##"),d::String(u" ___\\_ `-"),d::String(u" |    \\(@"),d::String(u"   ___/ `"),d::String(u"  /   /  "),d::String(u"      |  ")},d::Array<d::String,false>{d::String(u"   |   .-"),d::String(u"   \\  (##"),d::String(u" ___\\_ `-"),d::String(u"/     \\(@"),d::String(u"   ___/ `"),d::String(u"   |  /  "),d::String(u"     /   ")}};}();
const d::String _n_MID_29750=[](){return d::String(u"|#-@V  ");}();
d::Dict<d::String,d::String> _n_FLIP_29751=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_29819;_n_dictionary_29819.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_29819.set(d::String(u"\\"),d::String(u"/"));_n_dictionary_29819.set(d::String(u"("),d::String(u")"));_n_dictionary_29819.set(d::String(u")"),d::String(u"("));_n_dictionary_29819.set(d::String(u"`"),d::String(u"'"));return _n_dictionary_29819;})();}();
d::Array<d::Array<d::String,false>,false> _n_SPRITES_29753=[](){return d::Array<d::Array<d::String,false>,false>{_n_sprite_29752(0.0,0.0),_n_sprite_29752(0.0,1.0),_n_sprite_29752(1.0,0.0)};}();
const double _n_W_29754=[](){return double(d::at(d::at(_n_SPRITES_29753,0.0),0.0).size());}();
const double _n_H_29755=[](){return double(d::at(_n_SPRITES_29753,0.0).size());}();
d::Array<d::String,false> _n_sprite_29752(double _a0,double _a1){double _n_l_29766=_a0;
double _n_r_29767=_a1;
return d::map(d::at(_n_POSES_29749,_n_l_29766),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_s_29768=_a0;
double _n_j_29769=_a1;
return (d::string((d::string(_n_s_29768)+d::string(d::at(_n_MID_29750,_n_j_29769))))+d::string(d::join(d::map(([&](){d::Array<d::String,false> _n_array_29820;for(const auto &_v:d::at(d::at(_n_POSES_29749,_n_r_29767),_n_j_29769))_n_array_29820.push(_v);return _n_array_29820;})().reverse(),[&]( d::String _a0) mutable ->d::String{d::String _n_c_29770=_a0;
return ([&]()->d::String{auto _n_logical_29821=_n_FLIP_29751.get(_n_c_29770);return d::truth(_n_logical_29821)?_n_logical_29821:_n_c_29770;})();}),d::String(u""))));});}

double _n_ease_29756(double _a0){double _n_x_29771=_a0;
return (d::truth((_n_x_29771<=0.0))?0.0:(d::truth((_n_x_29771>=1.0))?1.0:((_n_x_29771*_n_x_29771)*(3.0-(2.0*_n_x_29771)))));}

struct Native_spider final:ascii::Piece{
double _n_cols_29757{};
double _n_rows_29758{};
d::Array<d::String,false> _n_out_29759{};
double _n_hc_29761{};
double _n_hr_29762{};
double _n_K_29763{};
d::Array<d::String,false> _n_web_29764{};
std::function<d::String(double,std::shared_ptr<_n_Record_29814>)> _render;
void _n_set_29760(double _a0,double _a1,d::String _a2){double _n_c_29772=_a0;
double _n_r_29773=_a1;
d::String _n_ch_29774=_a2;
{
if((((d::truth((_n_c_29772>=0.0))&&d::truth((_n_c_29772<this->_n_cols_29757)))&&d::truth((_n_r_29773>=0.0)))&&d::truth((_n_r_29773<this->_n_rows_29758)))){d::check_cancel();(void)(([&](){auto&& _n_array_29842=this->_n_out_29759;auto _n_index_29843=((_n_r_29773*this->_n_cols_29757)+_n_c_29772);auto _n_value_29844=_n_ch_29774;d::put(_n_array_29842,_n_index_29843,_n_value_29844);return _n_value_29844;})());
}

}
}

void _n_silk_29765(double _a0,double _a1,double _a2,double _a3){double _n_x0_29783=_a0;
double _n_y0_29784=_a1;
double _n_x1_29785=_a2;
double _n_y1_29786=_a3;
{
double _n_k_29787=((_n_x1_29785-_n_x0_29783)/(_n_y1_29786-_n_y0_29784));
d::String _n_g_29788=(d::truth((std::fabs(_n_k_29787)<0.3))?d::String(u"|"):(d::truth((_n_k_29787>0.0))?d::String(u"\\"):d::String(u"/")));
{double _n_r_29789=d::round(_n_y0_29784);
for(;d::truth((_n_r_29789<d::round(_n_y1_29786)));(void)((_n_r_29789++))){d::check_cancel();(void)(([&](){auto _n_argument_29845=std::floor((_n_x0_29783+(_n_k_29787*((_n_r_29789+0.5)-_n_y0_29784))));auto _n_argument_29846=_n_r_29789;auto _n_argument_29847=_n_g_29788;return this->_n_set_29760(_n_argument_29845,_n_argument_29846,_n_argument_29847);})());
}}

}
}

explicit Native_spider(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29822=_n_meta_29742;
this->_n_cols_29757=_n_binding_29822->_p_cols;
this->_n_rows_29758=_n_binding_29822->_p_rows;
this->_n_out_29759=d::Array<d::String,false>(size_t((this->_n_cols_29757*this->_n_rows_29758)));
(void)(this->_n_out_29759.fill(d::String(u" ")));
auto _n_binding_29823=_n_HUB_29745;
this->_n_hc_29761=d::at(_n_binding_29823,0.0);
this->_n_hr_29762=d::at(_n_binding_29823,1.0);
this->_n_K_29763=d::at(_n_RINGS_29746,(double(_n_RINGS_29746.size())-1.0));
for(auto &&_n_item_29824:_n_RINGS_29746){d::check_cancel();double _n_k_29775=_n_item_29824;
{
{double _n_c_29776=((this->_n_hc_29761-_n_k_29775)+1.0);
for(;d::truth((_n_c_29776<(this->_n_hc_29761+_n_k_29775)));(void)((_n_c_29776++))){d::check_cancel();(void)((this->_n_set_29760(_n_c_29776,(this->_n_hr_29762-_n_k_29775),d::String(u"_")),this->_n_set_29760(_n_c_29776,((this->_n_hr_29762+_n_k_29775)-1.0),d::String(u"_"))));
}}
for(auto &&_n_item_29825:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_29777=_n_item_29825;
{
{double _n_i_29778=1.0;
for(;d::truth((_n_i_29778<=_n_k_29775));(void)((_n_i_29778++))){d::check_cancel();(void)(this->_n_set_29760((this->_n_hc_29761+(_n_s_29777*((_n_k_29775+_n_i_29778)-1.0))),((this->_n_hr_29762-_n_k_29775)+_n_i_29778),(d::truth((_n_s_29777>0.0))?d::String(u"\\"):d::String(u"/"))));
}}
{double _n_i_29779=1.0;
for(;d::truth((_n_i_29779<_n_k_29775));(void)((_n_i_29779++))){d::check_cancel();(void)(this->_n_set_29760((this->_n_hc_29761+(_n_s_29777*((2.0*_n_k_29775)-_n_i_29779))),(this->_n_hr_29762+_n_i_29779),(d::truth((_n_s_29777>0.0))?d::String(u"/"):d::String(u"\\"))));
}}

}
}

}
}
{double _n_j_29780=1.0;
for(;d::truth((_n_j_29780<this->_n_cols_29757));(void)((_n_j_29780++))){d::check_cancel();(void)(this->_n_set_29760(this->_n_hc_29761,(this->_n_hr_29762-_n_j_29780),d::String(u"|")));
if(d::truth((_n_j_29780<=this->_n_K_29763))){d::check_cancel();(void)(this->_n_set_29760(this->_n_hc_29761,(this->_n_hr_29762+_n_j_29780),d::String(u"|")));
}
for(auto &&_n_item_29826:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_29781=_n_item_29826;
{
(void)(this->_n_set_29760((this->_n_hc_29761+(_n_s_29781*_n_j_29780)),(this->_n_hr_29762-_n_j_29780),(d::truth((_n_s_29781>0.0))?d::String(u"/"):d::String(u"\\"))));
if(d::truth((_n_j_29780<=this->_n_K_29763))){d::check_cancel();(void)(this->_n_set_29760((this->_n_hc_29761+(_n_s_29781*_n_j_29780)),(this->_n_hr_29762+_n_j_29780),(d::truth((_n_s_29781>0.0))?d::String(u"\\"):d::String(u"/"))));
}
double _n_k_29782=(((this->_n_hr_29762*this->_n_cols_29757)+this->_n_hc_29761)+(_n_s_29781*_n_j_29780));
if((d::truth((d::truth((_n_s_29781<0.0))?((this->_n_hc_29761-_n_j_29780)>=0.0):(_n_j_29780<=(2.0*this->_n_K_29763))))&&d::truth((d::at(this->_n_out_29759,_n_k_29782)==d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_29827=this->_n_out_29759;auto _n_index_29828=_n_k_29782;auto _n_value_29829=d::String(u"_");d::put(_n_array_29827,_n_index_29828,_n_value_29829);return _n_value_29829;})());
}

}
}
}}
(void)(this->_n_set_29760(this->_n_hc_29761,this->_n_hr_29762,d::String(u"*")));
this->_n_web_29764=this->_n_out_29759.slice();
_render=[=]( double _a0,std::shared_ptr<_n_Record_29814> _a1) mutable ->d::String{double _n_t_29790=_a0;
{
double _n_u_29791=d::mod((d::mod((_n_t_29790+2.4),_n_LOOP_29744)+_n_LOOP_29744),_n_LOOP_29744);
double _n_y_29792=_n_TOP_29747;
double _n_rate_29793=0.0;
double _n_climb_29794=(-d::number(1.0));
if((d::truth((_n_u_29791>=1.0))&&d::truth((_n_u_29791<3.4)))){d::check_cancel();(void)(((_n_y_29792=(_n_TOP_29747+((_n_LOW_29748-_n_TOP_29747)*std::pow(((_n_u_29791-1.0)/2.4),2.0)))),(_n_rate_29793=3.0)));
}else {d::check_cancel();if((d::truth((_n_u_29791>=3.4))&&d::truth((_n_u_29791<6.0)))){d::check_cancel();double _n_s_29795=(_n_u_29791-3.4);
double _n_w_29796=6.0;
double _n_v_29797=((2.0*(_n_LOW_29748-_n_TOP_29747))/2.4);
(void)(((_n_y_29792=(_n_LOW_29748+([&](){auto _n_left_29830=((_n_v_29797/_n_w_29796)*std::exp(((-d::number(_n_s_29795))*1.3)));auto _n_right_29831=std::sin((_n_s_29795*_n_w_29796));return (_n_left_29830*_n_right_29831);})())),(_n_rate_29793=(d::truth((_n_s_29795<1.8))?6.0:0.0))));
}else {d::check_cancel();if((d::truth((_n_u_29791>=6.0))&&d::truth((_n_u_29791<9.4)))){d::check_cancel();double _n_pull_29798=(((_n_u_29791-6.0)/3.4)*8.0);
(void)((_n_y_29792=(_n_LOW_29748-((_n_LOW_29748-_n_TOP_29747)*(([&](){auto _n_left_29832=std::floor(_n_pull_29798);auto _n_right_29833=_n_ease_29756((d::mod(_n_pull_29798,1.0)*1.6));return (_n_left_29832+_n_right_29833);})()/8.0)))));
(void)((_n_climb_29794=double(d::i32(std::floor(_n_pull_29798))&d::i32(1.0))));
}
}
}
double _n_sway_29799=((d::truth((_n_u_29791>3.0))&&d::truth((_n_u_29791<7.0)))?([&](){auto _n_left_29834=(0.8*std::sin(((_n_u_29791-3.0)*2.1)));auto _n_right_29835=std::exp(((-d::number((_n_u_29791-3.0)))*0.6));return (_n_left_29834*_n_right_29835);})():0.0);
double _n_r0_29800=d::round(_n_y_29792);
double _n_c0_29801=((this->_n_hc_29761-double(d::i32(_n_W_29754)>>(d::u32(1.0)&31)))+d::round(_n_sway_29799));
double _n_pose_29802=(d::truth((_n_climb_29794>=0.0))?(1.0+_n_climb_29794):(d::truth(_n_rate_29793)?(1.0+double(d::i32(std::floor((_n_u_29791*_n_rate_29793)))&d::i32(1.0))):((d::truth((_n_u_29791>0.3))&&d::truth((_n_u_29791<0.55)))?1.0:0.0)));
d::Array<d::String,false> _n_spr_29803=d::at(_n_SPRITES_29753,_n_pose_29802);
{double _n_i_29804=0.0;
for(;d::truth((_n_i_29804<double(this->_n_out_29759.size())));(void)((_n_i_29804++))){d::check_cancel();(void)(([&](){auto&& _n_array_29836=this->_n_out_29759;auto _n_index_29837=_n_i_29804;auto _n_value_29838=d::at(this->_n_web_29764,_n_i_29804);d::put(_n_array_29836,_n_index_29837,_n_value_29838);return _n_value_29838;})());
}}
{double _n_j_29805=0.0;
for(;d::truth((_n_j_29805<_n_H_29755));(void)((_n_j_29805++))){d::check_cancel();{double _n_i_29806=0.0;
for(;d::truth((_n_i_29806<_n_W_29754));(void)((_n_i_29806++))){d::check_cancel();if(d::truth((d::at(d::at(_n_spr_29803,_n_j_29805),_n_i_29806)!=d::String(u" ")))){d::check_cancel();{double _n_dj_29807=(-d::number(1.0));
for(;d::truth((_n_dj_29807<=1.0));(void)((_n_dj_29807++))){d::check_cancel();{double _n_di_29808=(-d::number(1.0));
for(;d::truth((_n_di_29808<=1.0));(void)((_n_di_29808++))){d::check_cancel();(void)(this->_n_set_29760(((_n_c0_29801+_n_i_29806)+_n_di_29808),((_n_r0_29800+_n_j_29805)+_n_dj_29807),d::String(u" ")));
}}
}}
}
}}
}}
if(d::truth((_n_r0_29800>this->_n_hr_29762))){d::check_cancel();{double _n_j_29809=1.0;
for(;d::truth((_n_j_29809<=this->_n_K_29763));(void)((_n_j_29809++))){d::check_cancel();if(d::truth((d::at(this->_n_out_29759,(((this->_n_hr_29762+_n_j_29809)*this->_n_cols_29757)+this->_n_hc_29761))==d::String(u"|")))){d::check_cancel();(void)(([&](){auto&& _n_array_29839=this->_n_out_29759;auto _n_index_29840=(((this->_n_hr_29762+_n_j_29809)*this->_n_cols_29757)+this->_n_hc_29761);auto _n_value_29841=d::String(u" ");d::put(_n_array_29839,_n_index_29840,_n_value_29841);return _n_value_29841;})());
}
}}
(void)(this->_n_silk_29765((this->_n_hc_29761+0.5),(this->_n_hr_29762+1.0),((_n_c0_29801+double(d::i32(_n_W_29754)>>(d::u32(1.0)&31)))+0.5),_n_r0_29800));
}
{double _n_j_29810=0.0;
for(;d::truth((_n_j_29810<_n_H_29755));(void)((_n_j_29810++))){d::check_cancel();{double _n_i_29811=0.0;
for(;d::truth((_n_i_29811<_n_W_29754));(void)((_n_i_29811++))){d::check_cancel();if(d::truth((d::at(d::at(_n_spr_29803,_n_j_29810),_n_i_29811)!=d::String(u" ")))){d::check_cancel();(void)(this->_n_set_29760((_n_c0_29801+_n_i_29811),(_n_r0_29800+_n_j_29810),d::at(d::at(_n_spr_29803,_n_j_29810),_n_i_29811)));
}
}}
}}
d::Array<d::String,false> _n_lines_29812=d::Array<d::String,false>{};
{double _n_i_29813=0.0;
for(;d::truth((_n_i_29813<this->_n_rows_29758));(void)((_n_i_29813++))){d::check_cancel();(void)(_n_lines_29812.push(d::join(this->_n_out_29759.slice((_n_i_29813*this->_n_cols_29757),((_n_i_29813+1.0)*this->_n_cols_29757)),d::String(u""))));
}}
return d::join(_n_lines_29812,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("spider").cols)*ascii::catalog_meta("spider").rows);auto _env=std::make_shared<_n_Record_29814>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &spider_meta(){return catalog_meta("spider");}
std::unique_ptr<Piece> make_spider(const AsciiPieceOptions &o){return std::make_unique<Native_spider>(o);}
}
