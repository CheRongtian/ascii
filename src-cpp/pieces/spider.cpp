// Direct, statically typed C++ from src/pieces/spider.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29744;
struct _n_Record_29815;
struct _n_Record_29819;
struct _n_Record_29744{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_29744> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29744>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_29815{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29815> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29815>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29819{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
d::String _p_symbol_28{};
d::String _p_symbol_29{};
d::String _p_symbol_60{};
static std::shared_ptr<_n_Record_29819> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29819>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);out->_p_symbol_28=d::decode<d::String>(j["("]);out->_p_symbol_29=d::decode<d::String>(j[")"]);out->_p_symbol_60=d::decode<d::String>(j["`"]);return out;}
};
d::Array<d::String,false> _n_sprite_29753(double _a0,double _a1);
double _n_ease_29757(double _a0);
std::shared_ptr<_n_Record_29744> _n_meta_29743=[](){return ([&](){auto _n_object_29818=std::make_shared<_n_Record_29744>();_n_object_29818->_p_name=d::String(u"spider");_n_object_29818->_p_category=d::String(u"creatures");_n_object_29818->_p_note=d::String(u"a spider lowering itself on silk, then climbing back up");_n_object_29818->_p_cols=28.0;_n_object_29818->_p_rows=24.0;_n_object_29818->_p_fps=15.0;return _n_object_29818;})();}();
const double _n_LOOP_29745=[](){return 10.0;}();
d::Array<double,false> _n_HUB_29746=[](){return d::Array<double,false>{10.0,4.0};}();
d::Array<double,false> _n_RINGS_29747=[](){return d::Array<double,false>{3.0,6.0};}();
const double _n_TOP_29748=[](){return 3.0;}();
const double _n_LOW_29749=[](){return 15.6;}();
d::Array<d::Array<d::String,false>,false> _n_POSES_29750=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"  \\    .-"),d::String(u"   \\  (##"),d::String(u" ___\\_ `-"),d::String(u" |    \\(@"),d::String(u"   ___/ `"),d::String(u"  /   /  "),d::String(u"      |  ")},d::Array<d::String,false>{d::String(u"   |   .-"),d::String(u"   \\  (##"),d::String(u" ___\\_ `-"),d::String(u"/     \\(@"),d::String(u"   ___/ `"),d::String(u"   |  /  "),d::String(u"     /   ")}};}();
const d::String _n_MID_29751=[](){return d::String(u"|#-@V  ");}();
d::Dict<d::String,d::String> _n_FLIP_29752=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_29820;_n_dictionary_29820.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_29820.set(d::String(u"\\"),d::String(u"/"));_n_dictionary_29820.set(d::String(u"("),d::String(u")"));_n_dictionary_29820.set(d::String(u")"),d::String(u"("));_n_dictionary_29820.set(d::String(u"`"),d::String(u"'"));return _n_dictionary_29820;})();}();
d::Array<d::Array<d::String,false>,false> _n_SPRITES_29754=[](){return d::Array<d::Array<d::String,false>,false>{_n_sprite_29753(0.0,0.0),_n_sprite_29753(0.0,1.0),_n_sprite_29753(1.0,0.0)};}();
const double _n_W_29755=[](){return double(d::at(d::at(_n_SPRITES_29754,0.0),0.0).size());}();
const double _n_H_29756=[](){return double(d::at(_n_SPRITES_29754,0.0).size());}();
d::Array<d::String,false> _n_sprite_29753(double _a0,double _a1){double _n_l_29767=_a0;
double _n_r_29768=_a1;
return d::map(d::at(_n_POSES_29750,_n_l_29767),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_s_29769=_a0;
double _n_j_29770=_a1;
return (d::string((d::string(_n_s_29769)+d::string(d::at(_n_MID_29751,_n_j_29770))))+d::string(d::join(d::map(([&](){d::Array<d::String,false> _n_array_29821;for(const auto &_v:d::at(d::at(_n_POSES_29750,_n_r_29768),_n_j_29770))_n_array_29821.push(_v);return _n_array_29821;})().reverse(),[&]( d::String _a0) mutable ->d::String{d::String _n_c_29771=_a0;
return ([&]()->d::String{auto _n_logical_29822=_n_FLIP_29752.get(_n_c_29771);return d::truth(_n_logical_29822)?_n_logical_29822:_n_c_29771;})();}),d::String(u""))));});}

double _n_ease_29757(double _a0){double _n_x_29772=_a0;
return (d::truth((_n_x_29772<=0.0))?0.0:(d::truth((_n_x_29772>=1.0))?1.0:((_n_x_29772*_n_x_29772)*(3.0-(2.0*_n_x_29772)))));}

struct Native_spider final:ascii::Piece{
double _n_cols_29758{};
double _n_rows_29759{};
d::Array<d::String,false> _n_out_29760{};
double _n_hc_29762{};
double _n_hr_29763{};
double _n_K_29764{};
d::Array<d::String,false> _n_web_29765{};
std::function<d::String(double,std::shared_ptr<_n_Record_29815>)> _render;
void _n_set_29761(double _a0,double _a1,d::String _a2){double _n_c_29773=_a0;
double _n_r_29774=_a1;
d::String _n_ch_29775=_a2;
{
if((((d::truth((_n_c_29773>=0.0))&&d::truth((_n_c_29773<this->_n_cols_29758)))&&d::truth((_n_r_29774>=0.0)))&&d::truth((_n_r_29774<this->_n_rows_29759)))){d::check_cancel();(void)(([&](){auto&& _n_array_29843=this->_n_out_29760;auto _n_index_29844=((_n_r_29774*this->_n_cols_29758)+_n_c_29773);auto _n_value_29845=_n_ch_29775;d::put(_n_array_29843,_n_index_29844,_n_value_29845);return _n_value_29845;})());
}

}
}

void _n_silk_29766(double _a0,double _a1,double _a2,double _a3){double _n_x0_29784=_a0;
double _n_y0_29785=_a1;
double _n_x1_29786=_a2;
double _n_y1_29787=_a3;
{
double _n_k_29788=((_n_x1_29786-_n_x0_29784)/(_n_y1_29787-_n_y0_29785));
d::String _n_g_29789=(d::truth((std::fabs(_n_k_29788)<0.3))?d::String(u"|"):(d::truth((_n_k_29788>0.0))?d::String(u"\\"):d::String(u"/")));
{double _n_r_29790=d::round(_n_y0_29785);
for(;d::truth((_n_r_29790<d::round(_n_y1_29787)));(void)((_n_r_29790++))){d::check_cancel();(void)(([&](){auto _n_argument_29846=std::floor((_n_x0_29784+(_n_k_29788*((_n_r_29790+0.5)-_n_y0_29785))));auto _n_argument_29847=_n_r_29790;auto _n_argument_29848=_n_g_29789;return this->_n_set_29761(_n_argument_29846,_n_argument_29847,_n_argument_29848);})());
}}

}
}

explicit Native_spider(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29823=_n_meta_29743;
this->_n_cols_29758=_n_binding_29823->_p_cols;
this->_n_rows_29759=_n_binding_29823->_p_rows;
this->_n_out_29760=d::Array<d::String,false>(size_t((this->_n_cols_29758*this->_n_rows_29759)));
(void)(this->_n_out_29760.fill(d::String(u" ")));
auto _n_binding_29824=_n_HUB_29746;
this->_n_hc_29762=d::at(_n_binding_29824,0.0);
this->_n_hr_29763=d::at(_n_binding_29824,1.0);
this->_n_K_29764=d::at(_n_RINGS_29747,(double(_n_RINGS_29747.size())-1.0));
for(auto &&_n_item_29825:_n_RINGS_29747){d::check_cancel();double _n_k_29776=_n_item_29825;
{
{double _n_c_29777=((this->_n_hc_29762-_n_k_29776)+1.0);
for(;d::truth((_n_c_29777<(this->_n_hc_29762+_n_k_29776)));(void)((_n_c_29777++))){d::check_cancel();(void)((this->_n_set_29761(_n_c_29777,(this->_n_hr_29763-_n_k_29776),d::String(u"_")),this->_n_set_29761(_n_c_29777,((this->_n_hr_29763+_n_k_29776)-1.0),d::String(u"_"))));
}}
for(auto &&_n_item_29826:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_29778=_n_item_29826;
{
{double _n_i_29779=1.0;
for(;d::truth((_n_i_29779<=_n_k_29776));(void)((_n_i_29779++))){d::check_cancel();(void)(this->_n_set_29761((this->_n_hc_29762+(_n_s_29778*((_n_k_29776+_n_i_29779)-1.0))),((this->_n_hr_29763-_n_k_29776)+_n_i_29779),(d::truth((_n_s_29778>0.0))?d::String(u"\\"):d::String(u"/"))));
}}
{double _n_i_29780=1.0;
for(;d::truth((_n_i_29780<_n_k_29776));(void)((_n_i_29780++))){d::check_cancel();(void)(this->_n_set_29761((this->_n_hc_29762+(_n_s_29778*((2.0*_n_k_29776)-_n_i_29780))),(this->_n_hr_29763+_n_i_29780),(d::truth((_n_s_29778>0.0))?d::String(u"/"):d::String(u"\\"))));
}}

}
}

}
}
{double _n_j_29781=1.0;
for(;d::truth((_n_j_29781<this->_n_cols_29758));(void)((_n_j_29781++))){d::check_cancel();(void)(this->_n_set_29761(this->_n_hc_29762,(this->_n_hr_29763-_n_j_29781),d::String(u"|")));
if(d::truth((_n_j_29781<=this->_n_K_29764))){d::check_cancel();(void)(this->_n_set_29761(this->_n_hc_29762,(this->_n_hr_29763+_n_j_29781),d::String(u"|")));
}
for(auto &&_n_item_29827:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_29782=_n_item_29827;
{
(void)(this->_n_set_29761((this->_n_hc_29762+(_n_s_29782*_n_j_29781)),(this->_n_hr_29763-_n_j_29781),(d::truth((_n_s_29782>0.0))?d::String(u"/"):d::String(u"\\"))));
if(d::truth((_n_j_29781<=this->_n_K_29764))){d::check_cancel();(void)(this->_n_set_29761((this->_n_hc_29762+(_n_s_29782*_n_j_29781)),(this->_n_hr_29763+_n_j_29781),(d::truth((_n_s_29782>0.0))?d::String(u"\\"):d::String(u"/"))));
}
double _n_k_29783=(((this->_n_hr_29763*this->_n_cols_29758)+this->_n_hc_29762)+(_n_s_29782*_n_j_29781));
if((d::truth((d::truth((_n_s_29782<0.0))?((this->_n_hc_29762-_n_j_29781)>=0.0):(_n_j_29781<=(2.0*this->_n_K_29764))))&&d::truth((d::at(this->_n_out_29760,_n_k_29783)==d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_29828=this->_n_out_29760;auto _n_index_29829=_n_k_29783;auto _n_value_29830=d::String(u"_");d::put(_n_array_29828,_n_index_29829,_n_value_29830);return _n_value_29830;})());
}

}
}
}}
(void)(this->_n_set_29761(this->_n_hc_29762,this->_n_hr_29763,d::String(u"*")));
this->_n_web_29765=this->_n_out_29760.slice();
_render=[=]( double _a0,std::shared_ptr<_n_Record_29815> _a1) mutable ->d::String{double _n_t_29791=_a0;
{
double _n_u_29792=d::mod((d::mod((_n_t_29791+2.4),_n_LOOP_29745)+_n_LOOP_29745),_n_LOOP_29745);
double _n_y_29793=_n_TOP_29748;
double _n_rate_29794=0.0;
double _n_climb_29795=(-d::number(1.0));
if((d::truth((_n_u_29792>=1.0))&&d::truth((_n_u_29792<3.4)))){d::check_cancel();(void)(((_n_y_29793=(_n_TOP_29748+((_n_LOW_29749-_n_TOP_29748)*std::pow(((_n_u_29792-1.0)/2.4),2.0)))),(_n_rate_29794=3.0)));
}else {d::check_cancel();if((d::truth((_n_u_29792>=3.4))&&d::truth((_n_u_29792<6.0)))){d::check_cancel();double _n_s_29796=(_n_u_29792-3.4);
double _n_w_29797=6.0;
double _n_v_29798=((2.0*(_n_LOW_29749-_n_TOP_29748))/2.4);
(void)(((_n_y_29793=(_n_LOW_29749+([&](){auto _n_left_29831=((_n_v_29798/_n_w_29797)*std::exp(((-d::number(_n_s_29796))*1.3)));auto _n_right_29832=std::sin((_n_s_29796*_n_w_29797));return (_n_left_29831*_n_right_29832);})())),(_n_rate_29794=(d::truth((_n_s_29796<1.8))?6.0:0.0))));
}else {d::check_cancel();if((d::truth((_n_u_29792>=6.0))&&d::truth((_n_u_29792<9.4)))){d::check_cancel();double _n_pull_29799=(((_n_u_29792-6.0)/3.4)*8.0);
(void)((_n_y_29793=(_n_LOW_29749-((_n_LOW_29749-_n_TOP_29748)*(([&](){auto _n_left_29833=std::floor(_n_pull_29799);auto _n_right_29834=_n_ease_29757((d::mod(_n_pull_29799,1.0)*1.6));return (_n_left_29833+_n_right_29834);})()/8.0)))));
(void)((_n_climb_29795=double(d::i32(std::floor(_n_pull_29799))&d::i32(1.0))));
}
}
}
double _n_sway_29800=((d::truth((_n_u_29792>3.0))&&d::truth((_n_u_29792<7.0)))?([&](){auto _n_left_29835=(0.8*std::sin(((_n_u_29792-3.0)*2.1)));auto _n_right_29836=std::exp(((-d::number((_n_u_29792-3.0)))*0.6));return (_n_left_29835*_n_right_29836);})():0.0);
double _n_r0_29801=d::round(_n_y_29793);
double _n_c0_29802=((this->_n_hc_29762-double(d::i32(_n_W_29755)>>(d::u32(1.0)&31)))+d::round(_n_sway_29800));
double _n_pose_29803=(d::truth((_n_climb_29795>=0.0))?(1.0+_n_climb_29795):(d::truth(_n_rate_29794)?(1.0+double(d::i32(std::floor((_n_u_29792*_n_rate_29794)))&d::i32(1.0))):((d::truth((_n_u_29792>0.3))&&d::truth((_n_u_29792<0.55)))?1.0:0.0)));
d::Array<d::String,false> _n_spr_29804=d::at(_n_SPRITES_29754,_n_pose_29803);
{double _n_i_29805=0.0;
for(;d::truth((_n_i_29805<double(this->_n_out_29760.size())));(void)((_n_i_29805++))){d::check_cancel();(void)(([&](){auto&& _n_array_29837=this->_n_out_29760;auto _n_index_29838=_n_i_29805;auto _n_value_29839=d::at(this->_n_web_29765,_n_i_29805);d::put(_n_array_29837,_n_index_29838,_n_value_29839);return _n_value_29839;})());
}}
{double _n_j_29806=0.0;
for(;d::truth((_n_j_29806<_n_H_29756));(void)((_n_j_29806++))){d::check_cancel();{double _n_i_29807=0.0;
for(;d::truth((_n_i_29807<_n_W_29755));(void)((_n_i_29807++))){d::check_cancel();if(d::truth((d::at(d::at(_n_spr_29804,_n_j_29806),_n_i_29807)!=d::String(u" ")))){d::check_cancel();{double _n_dj_29808=(-d::number(1.0));
for(;d::truth((_n_dj_29808<=1.0));(void)((_n_dj_29808++))){d::check_cancel();{double _n_di_29809=(-d::number(1.0));
for(;d::truth((_n_di_29809<=1.0));(void)((_n_di_29809++))){d::check_cancel();(void)(this->_n_set_29761(((_n_c0_29802+_n_i_29807)+_n_di_29809),((_n_r0_29801+_n_j_29806)+_n_dj_29808),d::String(u" ")));
}}
}}
}
}}
}}
if(d::truth((_n_r0_29801>this->_n_hr_29763))){d::check_cancel();{double _n_j_29810=1.0;
for(;d::truth((_n_j_29810<=this->_n_K_29764));(void)((_n_j_29810++))){d::check_cancel();if(d::truth((d::at(this->_n_out_29760,(((this->_n_hr_29763+_n_j_29810)*this->_n_cols_29758)+this->_n_hc_29762))==d::String(u"|")))){d::check_cancel();(void)(([&](){auto&& _n_array_29840=this->_n_out_29760;auto _n_index_29841=(((this->_n_hr_29763+_n_j_29810)*this->_n_cols_29758)+this->_n_hc_29762);auto _n_value_29842=d::String(u" ");d::put(_n_array_29840,_n_index_29841,_n_value_29842);return _n_value_29842;})());
}
}}
(void)(this->_n_silk_29766((this->_n_hc_29762+0.5),(this->_n_hr_29763+1.0),((_n_c0_29802+double(d::i32(_n_W_29755)>>(d::u32(1.0)&31)))+0.5),_n_r0_29801));
}
{double _n_j_29811=0.0;
for(;d::truth((_n_j_29811<_n_H_29756));(void)((_n_j_29811++))){d::check_cancel();{double _n_i_29812=0.0;
for(;d::truth((_n_i_29812<_n_W_29755));(void)((_n_i_29812++))){d::check_cancel();if(d::truth((d::at(d::at(_n_spr_29804,_n_j_29811),_n_i_29812)!=d::String(u" ")))){d::check_cancel();(void)(this->_n_set_29761((_n_c0_29802+_n_i_29812),(_n_r0_29801+_n_j_29811),d::at(d::at(_n_spr_29804,_n_j_29811),_n_i_29812)));
}
}}
}}
d::Array<d::String,false> _n_lines_29813=d::Array<d::String,false>{};
{double _n_i_29814=0.0;
for(;d::truth((_n_i_29814<this->_n_rows_29759));(void)((_n_i_29814++))){d::check_cancel();(void)(_n_lines_29813.push(d::join(this->_n_out_29760.slice((_n_i_29814*this->_n_cols_29758),((_n_i_29814+1.0)*this->_n_cols_29758)),d::String(u""))));
}}
return d::join(_n_lines_29813,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("spider").cols)*ascii::catalog_meta("spider").rows);auto _env=std::make_shared<_n_Record_29815>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &spider_meta(){return catalog_meta("spider");}
std::unique_ptr<Piece> make_spider(const AsciiPieceOptions &o){return std::make_unique<Native_spider>(o);}
}
