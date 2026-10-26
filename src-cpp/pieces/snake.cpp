// Direct, statically typed C++ from src/pieces/snake.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28398;
struct _n_Record_28479;
struct _n_Record_28398{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_28398> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28398>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_28479{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28479> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28479>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_ease_28411(double _a0);
double _n_trackY_28412(double _a0);
double _n_girth_28413(double _a0);
std::shared_ptr<_n_Record_28398> _n_meta_28397=[](){return ([&](){auto _n_object_28482=std::make_shared<_n_Record_28398>();_n_object_28482->_p_name=d::String(u"snake");_n_object_28482->_p_category=d::String(u"creatures");_n_object_28482->_p_note=d::String(u"a snake slithering along an s-curve, flicking its tongue");_n_object_28482->_p_cols=64.0;_n_object_28482->_p_rows=15.0;_n_object_28482->_p_fps=20.0;return _n_object_28482;})();}();
const d::String _n_RAMP_28399=[](){return d::String(u" .:-=+*#%@");}();
const double _n_W_28400=[](){return 64.0;}();
const double _n_LAMBDA_28401=[](){return 32.0;}();
const double _n_AMP_28402=[](){return 3.5;}();
const double _n_MID_28403=[](){return 7.0;}();
const double _n_LEN_28404=[](){return 44.0;}();
const double _n_SPEED_28405=[](){return 6.4;}();
const double _n_K_28406=[](){return ((2.0*ascii::PI)/_n_LAMBDA_28401);}();
d::Array<d::String,false> _n_HEAD_28407=[](){return d::Array<d::String,false>{d::String(u"  ___      "),d::String(u"-'  o`--._ "),d::String(u"==::=====:>"),d::String(u"-.__o.--'' ")};}();
const double _n_HL_28408=[](){return double(d::at(_n_HEAD_28407,0.0).size());}();
const double _n_NECK_28409=[](){return 9.0;}();
const double _n_TIP_28410=[](){return 6.0;}();
double _n_ease_28411(double _a0){double _n_x_28418=_a0;
return (d::truth((_n_x_28418<=0.0))?0.0:(d::truth((_n_x_28418>=1.0))?1.0:((_n_x_28418*_n_x_28418)*(3.0-(2.0*_n_x_28418)))));}

double _n_trackY_28412(double _a0){double _n_x_28419=_a0;
return (_n_MID_28403+(_n_AMP_28402*std::sin((_n_K_28406*_n_x_28419))));}

double _n_girth_28413(double _a0){double _n_d_28420=_a0;
{
if(d::truth((_n_d_28420<(_n_HL_28408+4.0)))){d::check_cancel();return 2.1;
}
double _n_f_28421=(_n_d_28420/_n_LEN_28404);
if(d::truth((_n_f_28421<0.45))){d::check_cancel();return (2.1+(0.9*std::sin(((((_n_d_28420-_n_HL_28408)-4.0)/(((0.45*_n_LEN_28404)-_n_HL_28408)-4.0))*(ascii::PI/2.0)))));
}
return (3.0*d::maximum({0.0,(1.0-std::pow(((_n_f_28421-0.45)/0.55),1.3))}));

}
}

struct Native_snake final:ascii::Piece{
double _n_cols_28414{};
double _n_rows_28415{};
d::Array<d::String,false> _n_out_28416{};
std::function<d::String(double,std::shared_ptr<_n_Record_28479>)> _render;
void _n_put_28417(double _a0,double _a1,d::String _a2){double _n_c_28422=_a0;
double _n_r_28423=_a1;
d::String _n_ch_28424=_a2;
{
if((d::truth((_n_r_28423>=0.0))&&d::truth((_n_r_28423<this->_n_rows_28415)))){d::check_cancel();(void)(([&](){auto&& _n_array_28517=this->_n_out_28416;auto _n_index_28518=((_n_r_28423*this->_n_cols_28414)+d::mod((d::mod(_n_c_28422,this->_n_cols_28414)+this->_n_cols_28414),this->_n_cols_28414));auto _n_value_28519=_n_ch_28424;d::put(_n_array_28517,_n_index_28518,_n_value_28519);return _n_value_28519;})());
}

}
}

explicit Native_snake(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_28483=_n_meta_28397;
this->_n_cols_28414=_n_binding_28483->_p_cols;
this->_n_rows_28415=_n_binding_28483->_p_rows;
this->_n_out_28416=d::Array<d::String,false>(size_t((this->_n_cols_28414*this->_n_rows_28415)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_28479> _a1) mutable ->d::String{double _n_t_28425=_a0;
auto _n_binding_28486=(d::present(_a1)?_a1:([&](){auto _n_object_28485=std::make_shared<_n_Record_28479>();return _n_object_28485;})());
bool _n_paper_28426=(d::present(_n_binding_28486->_p_paper)?d::read(_n_binding_28486->_p_paper):false);
{
double _n_head_28427=d::mod((d::mod(((_n_t_28425*_n_SPEED_28405)+50.0),_n_W_28400)+_n_W_28400),_n_W_28400);
double _n_tip_28428=std::floor(_n_head_28427);
double _n_R_28429=d::round((_n_trackY_28412(((_n_tip_28428-_n_HL_28408)+0.5))-0.5));
auto _n_midY_28430=[&]( double _a0) mutable ->double{double _n_d_28431=_a0;
{
double _n_x_28432=((_n_tip_28428+1.0)-_n_d_28431);
double _n_m_28433=_n_ease_28411(((_n_d_28431-_n_HL_28408)/_n_NECK_28409));
return ((_n_R_28429+0.5)+(((_n_trackY_28412(_n_x_28432)-_n_R_28429)-0.5)*_n_m_28433));

}
};
auto _n_across_28434=[&]( double _a0,double _a1) mutable ->double{double _n_x_28435=_a0;
double _n_y_28436=_a1;
{
double _n_d_28437=d::mod((d::mod(((_n_tip_28428+1.0)-_n_x_28435),_n_W_28400)+_n_W_28400),_n_W_28400);
if((d::truth((_n_d_28437<(_n_HL_28408-1.0)))||d::truth((_n_d_28437>=(_n_LEN_28404-_n_TIP_28410))))){d::check_cancel();return 2.0;
}
double _n_g_28438=_n_girth_28413(_n_d_28437);
if(d::truth((_n_g_28438<0.05))){d::check_cancel();return 2.0;
}
double _n_s_28439=(([&](){auto _n_left_28487=_n_midY_28430((_n_d_28437-0.5));auto _n_right_28488=_n_midY_28430((_n_d_28437+0.5));return (_n_left_28487-_n_right_28488);})()*2.0);
return (([&](){auto _n_left_28489=((_n_y_28436-_n_midY_28430(_n_d_28437))*2.0);auto _n_right_28490=d::hypot(std::initializer_list<double>{1.0,_n_s_28439});return (_n_left_28489/_n_right_28490);})()/_n_g_28438);

}
};
auto _n_ink_28440=[&]( double _a0) mutable ->d::String{double _n_v_28441=_a0;
return d::at(_n_RAMP_28399,(d::truth(_n_paper_28426)?(double(_n_RAMP_28399.size())-_n_v_28441):_n_v_28441));};
(void)(this->_n_out_28416.fill(d::String(u" ")));
{double _n_r_28442=0.0;
for(;d::truth((_n_r_28442<this->_n_rows_28415));(void)((_n_r_28442++))){d::check_cancel();{double _n_c_28443=0.0;
for(;d::truth((_n_c_28443<this->_n_cols_28414));(void)((_n_c_28443++))){d::check_cancel();double _n_n_28444=0.0;
double _n_sx_28445=0.0;
double _n_sy_28446=0.0;
{double _n_j_28447=0.0;
for(;d::truth((_n_j_28447<4.0));(void)((_n_j_28447++))){d::check_cancel();{double _n_i_28448=0.0;
for(;d::truth((_n_i_28448<3.0));(void)((_n_i_28448++))){d::check_cancel();if(d::truth((std::fabs(_n_across_28434((_n_c_28443+((_n_i_28448+0.5)/3.0)),(_n_r_28442+((_n_j_28447+0.5)/4.0))))<1.0))){d::check_cancel();(void)((((_n_n_28444++),(_n_sx_28445=(_n_sx_28445+(_n_i_28448-1.0)))),(_n_sy_28446=(_n_sy_28446+(1.5-_n_j_28447)))));
}
}}
}}
if(d::truth((!d::truth(_n_n_28444)))){d::check_cancel();continue;
}
double _n_k_28449=((_n_r_28442*this->_n_cols_28414)+_n_c_28443);
if(d::truth((_n_n_28444<7.0))){d::check_cancel();double _n_ux_28450=(_n_sx_28445/_n_n_28444);
double _n_uy_28451=(_n_sy_28446/_n_n_28444);
if(d::truth(([&](){auto _n_left_28491=std::fabs(_n_uy_28451);auto _n_right_28492=(std::fabs(_n_ux_28450)*1.2);return (_n_left_28491>_n_right_28492);})())){d::check_cancel();(void)(([&](){auto&& _n_array_28493=this->_n_out_28416;auto _n_index_28494=_n_k_28449;auto _n_value_28495=(d::truth((_n_uy_28451<0.0))?(d::truth((_n_n_28444<4.0))?d::String(u"_"):d::String(u"-")):(d::truth((_n_n_28444<4.0))?d::String(u"'"):d::String(u"-")));d::put(_n_array_28493,_n_index_28494,_n_value_28495);return _n_value_28495;})());
}else {d::check_cancel();if(d::truth(([&](){auto _n_left_28496=std::fabs(_n_ux_28450);auto _n_right_28497=(std::fabs(_n_uy_28451)*2.0);return (_n_left_28496>_n_right_28497);})())){d::check_cancel();(void)(([&](){auto&& _n_array_28498=this->_n_out_28416;auto _n_index_28499=_n_k_28449;auto _n_value_28500=(d::truth((_n_ux_28450>0.0))?d::String(u"("):d::String(u")"));d::put(_n_array_28498,_n_index_28499,_n_value_28500);return _n_value_28500;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_28501=this->_n_out_28416;auto _n_index_28502=_n_k_28449;auto _n_value_28503=(d::truth(((_n_ux_28450*_n_uy_28451)<0.0))?d::String(u"/"):d::String(u"\\"));d::put(_n_array_28501,_n_index_28502,_n_value_28503);return _n_value_28503;})());
}
}
continue;
}
double _n_x_28452=(_n_c_28443+0.5);
double _n_d_28453=d::mod((d::mod(((_n_tip_28428+1.0)-_n_x_28452),_n_W_28400)+_n_W_28400),_n_W_28400);
double _n_v_28454=std::fabs(_n_across_28434(_n_x_28452,(_n_r_28442+0.5)));
(void)(([&](){auto&& _n_array_28504=this->_n_out_28416;auto _n_index_28505=_n_k_28449;auto _n_value_28506=((d::truth((_n_v_28454<0.4))&&d::truth((_n_d_28453<(0.8*_n_LEN_28404))))?(d::truth(double(d::i32(std::floor(_n_d_28453))&d::i32(1.0)))?d::String(u"<"):d::String(u">")):_n_ink_28440(((d::truth((_n_v_28454>0.62))||d::truth((_n_d_28453>(0.88*_n_LEN_28404))))?2.0:4.0)));d::put(_n_array_28504,_n_index_28505,_n_value_28506);return _n_value_28506;})());
}}
}}
d::Map<d::String,std::shared_ptr<std::tuple<double,double,double,double,bool>>> _n_slot_28455=d::Map<d::String,std::shared_ptr<std::tuple<double,double,double,double,bool>>>();
{double _n_d_28456=(_n_LEN_28404-_n_TIP_28410);
for(;d::truth((_n_d_28456<_n_LEN_28404));(void)((_n_d_28456=(_n_d_28456+0.05)))){d::check_cancel();double _n_x_28457=((_n_tip_28428+1.0)-_n_d_28456);
double _n_y_28458=_n_midY_28430(_n_d_28456);
double _n_s_28459=(([&](){auto _n_left_28507=_n_midY_28430((_n_d_28456-0.05));auto _n_right_28508=_n_midY_28430((_n_d_28456+0.05));return (_n_left_28507-_n_right_28508);})()*20.0);
bool _n_steep_28460=(std::fabs(_n_s_28459)>1.2);
d::String _n_key_28461=(d::truth(_n_steep_28460)?(d::string(d::String(u"r"))+d::string(std::floor(_n_y_28458))):(d::string(d::String(u"c"))+d::string(std::floor(_n_x_28457))));
double _n_off_28462=(d::truth(_n_steep_28460)?std::fabs(((_n_y_28458-std::floor(_n_y_28458))-0.5)):std::fabs(((_n_x_28457-std::floor(_n_x_28457))-0.5)));
if((d::truth((!d::truth(_n_slot_28455.has(_n_key_28461))))||d::truth((_n_off_28462<std::get<0>(*d::read(_n_slot_28455.get(_n_key_28461))))))){d::check_cancel();(void)(_n_slot_28455.set(_n_key_28461,std::make_shared<std::tuple<double,double,double,double,bool>>(_n_off_28462,_n_x_28457,_n_y_28458,_n_s_28459,_n_steep_28460)));
}
}}
for(auto &&_n_item_28509:_n_slot_28455.values()){d::check_cancel();auto _n_binding_28510=_n_item_28509;
double _n_x_28463=std::get<1>(*_n_binding_28510);
double _n_y_28464=std::get<2>(*_n_binding_28510);
double _n_s_28465=std::get<3>(*_n_binding_28510);
bool _n_steep_28466=std::get<4>(*_n_binding_28510);
{
double _n_r_28467=std::floor(_n_y_28464);
double _n_f_28468=(_n_y_28464-_n_r_28467);
(void)(([&](){auto _n_argument_28511=std::floor(_n_x_28463);auto _n_argument_28512=_n_r_28467;auto _n_argument_28513=(d::truth(_n_steep_28466)?(d::truth((_n_s_28465>0.0))?d::String(u"\\"):d::String(u"/")):(d::truth((std::fabs(_n_s_28465)>0.5))?(d::truth((_n_f_28468<0.5))?(d::truth((_n_s_28465>0.0))?d::String(u"`"):d::String(u"'")):d::String(u".")):(d::truth((_n_f_28468<0.3))?d::String(u"'"):(d::truth((_n_f_28468>0.7))?d::String(u"_"):d::String(u"-")))));return this->_n_put_28417(_n_argument_28511,_n_argument_28512,_n_argument_28513);})());

}
}
(void)(d::forEach(_n_HEAD_28407,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_l_28469=_a0;
double _n_j_28470=_a1;
{
double _n_a_28471=d::search(_n_l_28469,d::Regex(u"\\S",u""));
double _n_b_28472=double(d::trim(_n_l_28469,false,true).size());
{double _n_i_28473=_n_a_28471;
for(;d::truth((_n_i_28473<_n_b_28472));(void)((_n_i_28473++))){d::check_cancel();(void)(([&](){auto _n_argument_28514=(((_n_tip_28428-_n_HL_28408)+1.0)+_n_i_28473);auto _n_argument_28515=((_n_R_28429-2.0)+_n_j_28470);auto _n_argument_28516=(d::truth((d::at(_n_l_28469,_n_i_28473)==d::String(u"=")))?_n_ink_28440(4.0):(d::truth((d::at(_n_l_28469,_n_i_28473)==d::String(u":")))?_n_ink_28440(2.0):d::at(_n_l_28469,_n_i_28473)));return this->_n_put_28417(_n_argument_28514,_n_argument_28515,_n_argument_28516);})());
}}

}
}));
double _n_fl_28474=d::mod(_n_t_28425,2.2);
double _n_len_28475=((d::truth((_n_fl_28474>0.2))&&d::truth((_n_fl_28474<0.55)))?3.0:((d::truth((_n_fl_28474>0.75))&&d::truth((_n_fl_28474<1.0)))?2.0:0.0));
{double _n_i_28476=1.0;
for(;d::truth((_n_i_28476<=_n_len_28475));(void)((_n_i_28476++))){d::check_cancel();(void)(this->_n_put_28417((_n_tip_28428+_n_i_28476),_n_R_28429,(d::truth((_n_i_28476==_n_len_28475))?d::String(u"<"):d::String(u"-"))));
}}
d::Array<d::String,false> _n_lines_28477=d::Array<d::String,false>{};
{double _n_r_28478=0.0;
for(;d::truth((_n_r_28478<this->_n_rows_28415));(void)((_n_r_28478++))){d::check_cancel();(void)(_n_lines_28477.push(d::join(this->_n_out_28416.slice((_n_r_28478*this->_n_cols_28414),((_n_r_28478+1.0)*this->_n_cols_28414)),d::String(u""))));
}}
return d::join(_n_lines_28477,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("snake").cols)*ascii::catalog_meta("snake").rows);auto _env=std::make_shared<_n_Record_28479>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &snake_meta(){return catalog_meta("snake");}
std::unique_ptr<Piece> make_snake(const AsciiPieceOptions &o){return std::make_unique<Native_snake>(o);}
}
