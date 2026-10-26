// Direct, statically typed C++ from src/pieces/snake.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28399;
struct _n_Record_28480;
struct _n_Record_28399{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_28399> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28399>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_28480{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28480> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28480>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_ease_28412(double _a0);
double _n_trackY_28413(double _a0);
double _n_girth_28414(double _a0);
std::shared_ptr<_n_Record_28399> _n_meta_28398=[](){return ([&](){auto _n_object_28483=std::make_shared<_n_Record_28399>();_n_object_28483->_p_name=d::String(u"snake");_n_object_28483->_p_category=d::String(u"creatures");_n_object_28483->_p_note=d::String(u"a snake slithering along an s-curve, flicking its tongue");_n_object_28483->_p_cols=64.0;_n_object_28483->_p_rows=15.0;_n_object_28483->_p_fps=20.0;return _n_object_28483;})();}();
const d::String _n_RAMP_28400=[](){return d::String(u" .:-=+*#%@");}();
const double _n_W_28401=[](){return 64.0;}();
const double _n_LAMBDA_28402=[](){return 32.0;}();
const double _n_AMP_28403=[](){return 3.5;}();
const double _n_MID_28404=[](){return 7.0;}();
const double _n_LEN_28405=[](){return 44.0;}();
const double _n_SPEED_28406=[](){return 6.4;}();
const double _n_K_28407=[](){return ((2.0*ascii::PI)/_n_LAMBDA_28402);}();
d::Array<d::String,false> _n_HEAD_28408=[](){return d::Array<d::String,false>{d::String(u"  ___      "),d::String(u"-'  o`--._ "),d::String(u"==::=====:>"),d::String(u"-.__o.--'' ")};}();
const double _n_HL_28409=[](){return double(d::at(_n_HEAD_28408,0.0).size());}();
const double _n_NECK_28410=[](){return 9.0;}();
const double _n_TIP_28411=[](){return 6.0;}();
double _n_ease_28412(double _a0){double _n_x_28419=_a0;
return (d::truth((_n_x_28419<=0.0))?0.0:(d::truth((_n_x_28419>=1.0))?1.0:((_n_x_28419*_n_x_28419)*(3.0-(2.0*_n_x_28419)))));}

double _n_trackY_28413(double _a0){double _n_x_28420=_a0;
return (_n_MID_28404+(_n_AMP_28403*std::sin((_n_K_28407*_n_x_28420))));}

double _n_girth_28414(double _a0){double _n_d_28421=_a0;
{
if(d::truth((_n_d_28421<(_n_HL_28409+4.0)))){d::check_cancel();return 2.1;
}
double _n_f_28422=(_n_d_28421/_n_LEN_28405);
if(d::truth((_n_f_28422<0.45))){d::check_cancel();return (2.1+(0.9*std::sin(((((_n_d_28421-_n_HL_28409)-4.0)/(((0.45*_n_LEN_28405)-_n_HL_28409)-4.0))*(ascii::PI/2.0)))));
}
return (3.0*d::maximum({0.0,(1.0-std::pow(((_n_f_28422-0.45)/0.55),1.3))}));

}
}

struct Native_snake final:ascii::Piece{
double _n_cols_28415{};
double _n_rows_28416{};
d::Array<d::String,false> _n_out_28417{};
std::function<d::String(double,std::shared_ptr<_n_Record_28480>)> _render;
void _n_put_28418(double _a0,double _a1,d::String _a2){double _n_c_28423=_a0;
double _n_r_28424=_a1;
d::String _n_ch_28425=_a2;
{
if((d::truth((_n_r_28424>=0.0))&&d::truth((_n_r_28424<this->_n_rows_28416)))){d::check_cancel();(void)(([&](){auto&& _n_array_28518=this->_n_out_28417;auto _n_index_28519=((_n_r_28424*this->_n_cols_28415)+d::mod((d::mod(_n_c_28423,this->_n_cols_28415)+this->_n_cols_28415),this->_n_cols_28415));auto _n_value_28520=_n_ch_28425;d::put(_n_array_28518,_n_index_28519,_n_value_28520);return _n_value_28520;})());
}

}
}

explicit Native_snake(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_28484=_n_meta_28398;
this->_n_cols_28415=_n_binding_28484->_p_cols;
this->_n_rows_28416=_n_binding_28484->_p_rows;
this->_n_out_28417=d::Array<d::String,false>(size_t((this->_n_cols_28415*this->_n_rows_28416)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_28480> _a1) mutable ->d::String{double _n_t_28426=_a0;
auto _n_binding_28487=(d::present(_a1)?_a1:([&](){auto _n_object_28486=std::make_shared<_n_Record_28480>();return _n_object_28486;})());
bool _n_paper_28427=(d::present(_n_binding_28487->_p_paper)?d::read(_n_binding_28487->_p_paper):false);
{
double _n_head_28428=d::mod((d::mod(((_n_t_28426*_n_SPEED_28406)+50.0),_n_W_28401)+_n_W_28401),_n_W_28401);
double _n_tip_28429=std::floor(_n_head_28428);
double _n_R_28430=d::round((_n_trackY_28413(((_n_tip_28429-_n_HL_28409)+0.5))-0.5));
auto _n_midY_28431=[&]( double _a0) mutable ->double{double _n_d_28432=_a0;
{
double _n_x_28433=((_n_tip_28429+1.0)-_n_d_28432);
double _n_m_28434=_n_ease_28412(((_n_d_28432-_n_HL_28409)/_n_NECK_28410));
return ((_n_R_28430+0.5)+(((_n_trackY_28413(_n_x_28433)-_n_R_28430)-0.5)*_n_m_28434));

}
};
auto _n_across_28435=[&]( double _a0,double _a1) mutable ->double{double _n_x_28436=_a0;
double _n_y_28437=_a1;
{
double _n_d_28438=d::mod((d::mod(((_n_tip_28429+1.0)-_n_x_28436),_n_W_28401)+_n_W_28401),_n_W_28401);
if((d::truth((_n_d_28438<(_n_HL_28409-1.0)))||d::truth((_n_d_28438>=(_n_LEN_28405-_n_TIP_28411))))){d::check_cancel();return 2.0;
}
double _n_g_28439=_n_girth_28414(_n_d_28438);
if(d::truth((_n_g_28439<0.05))){d::check_cancel();return 2.0;
}
double _n_s_28440=(([&](){auto _n_left_28488=_n_midY_28431((_n_d_28438-0.5));auto _n_right_28489=_n_midY_28431((_n_d_28438+0.5));return (_n_left_28488-_n_right_28489);})()*2.0);
return (([&](){auto _n_left_28490=((_n_y_28437-_n_midY_28431(_n_d_28438))*2.0);auto _n_right_28491=d::hypot(std::initializer_list<double>{1.0,_n_s_28440});return (_n_left_28490/_n_right_28491);})()/_n_g_28439);

}
};
auto _n_ink_28441=[&]( double _a0) mutable ->d::String{double _n_v_28442=_a0;
return d::at(_n_RAMP_28400,(d::truth(_n_paper_28427)?(double(_n_RAMP_28400.size())-_n_v_28442):_n_v_28442));};
(void)(this->_n_out_28417.fill(d::String(u" ")));
{double _n_r_28443=0.0;
for(;d::truth((_n_r_28443<this->_n_rows_28416));(void)((_n_r_28443++))){d::check_cancel();{double _n_c_28444=0.0;
for(;d::truth((_n_c_28444<this->_n_cols_28415));(void)((_n_c_28444++))){d::check_cancel();double _n_n_28445=0.0;
double _n_sx_28446=0.0;
double _n_sy_28447=0.0;
{double _n_j_28448=0.0;
for(;d::truth((_n_j_28448<4.0));(void)((_n_j_28448++))){d::check_cancel();{double _n_i_28449=0.0;
for(;d::truth((_n_i_28449<3.0));(void)((_n_i_28449++))){d::check_cancel();if(d::truth((std::fabs(_n_across_28435((_n_c_28444+((_n_i_28449+0.5)/3.0)),(_n_r_28443+((_n_j_28448+0.5)/4.0))))<1.0))){d::check_cancel();(void)((((_n_n_28445++),(_n_sx_28446=(_n_sx_28446+(_n_i_28449-1.0)))),(_n_sy_28447=(_n_sy_28447+(1.5-_n_j_28448)))));
}
}}
}}
if(d::truth((!d::truth(_n_n_28445)))){d::check_cancel();continue;
}
double _n_k_28450=((_n_r_28443*this->_n_cols_28415)+_n_c_28444);
if(d::truth((_n_n_28445<7.0))){d::check_cancel();double _n_ux_28451=(_n_sx_28446/_n_n_28445);
double _n_uy_28452=(_n_sy_28447/_n_n_28445);
if(d::truth(([&](){auto _n_left_28492=std::fabs(_n_uy_28452);auto _n_right_28493=(std::fabs(_n_ux_28451)*1.2);return (_n_left_28492>_n_right_28493);})())){d::check_cancel();(void)(([&](){auto&& _n_array_28494=this->_n_out_28417;auto _n_index_28495=_n_k_28450;auto _n_value_28496=(d::truth((_n_uy_28452<0.0))?(d::truth((_n_n_28445<4.0))?d::String(u"_"):d::String(u"-")):(d::truth((_n_n_28445<4.0))?d::String(u"'"):d::String(u"-")));d::put(_n_array_28494,_n_index_28495,_n_value_28496);return _n_value_28496;})());
}else {d::check_cancel();if(d::truth(([&](){auto _n_left_28497=std::fabs(_n_ux_28451);auto _n_right_28498=(std::fabs(_n_uy_28452)*2.0);return (_n_left_28497>_n_right_28498);})())){d::check_cancel();(void)(([&](){auto&& _n_array_28499=this->_n_out_28417;auto _n_index_28500=_n_k_28450;auto _n_value_28501=(d::truth((_n_ux_28451>0.0))?d::String(u"("):d::String(u")"));d::put(_n_array_28499,_n_index_28500,_n_value_28501);return _n_value_28501;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_28502=this->_n_out_28417;auto _n_index_28503=_n_k_28450;auto _n_value_28504=(d::truth(((_n_ux_28451*_n_uy_28452)<0.0))?d::String(u"/"):d::String(u"\\"));d::put(_n_array_28502,_n_index_28503,_n_value_28504);return _n_value_28504;})());
}
}
continue;
}
double _n_x_28453=(_n_c_28444+0.5);
double _n_d_28454=d::mod((d::mod(((_n_tip_28429+1.0)-_n_x_28453),_n_W_28401)+_n_W_28401),_n_W_28401);
double _n_v_28455=std::fabs(_n_across_28435(_n_x_28453,(_n_r_28443+0.5)));
(void)(([&](){auto&& _n_array_28505=this->_n_out_28417;auto _n_index_28506=_n_k_28450;auto _n_value_28507=((d::truth((_n_v_28455<0.4))&&d::truth((_n_d_28454<(0.8*_n_LEN_28405))))?(d::truth(double(d::i32(std::floor(_n_d_28454))&d::i32(1.0)))?d::String(u"<"):d::String(u">")):_n_ink_28441(((d::truth((_n_v_28455>0.62))||d::truth((_n_d_28454>(0.88*_n_LEN_28405))))?2.0:4.0)));d::put(_n_array_28505,_n_index_28506,_n_value_28507);return _n_value_28507;})());
}}
}}
d::Map<d::String,std::shared_ptr<std::tuple<double,double,double,double,bool>>> _n_slot_28456=d::Map<d::String,std::shared_ptr<std::tuple<double,double,double,double,bool>>>();
{double _n_d_28457=(_n_LEN_28405-_n_TIP_28411);
for(;d::truth((_n_d_28457<_n_LEN_28405));(void)((_n_d_28457=(_n_d_28457+0.05)))){d::check_cancel();double _n_x_28458=((_n_tip_28429+1.0)-_n_d_28457);
double _n_y_28459=_n_midY_28431(_n_d_28457);
double _n_s_28460=(([&](){auto _n_left_28508=_n_midY_28431((_n_d_28457-0.05));auto _n_right_28509=_n_midY_28431((_n_d_28457+0.05));return (_n_left_28508-_n_right_28509);})()*20.0);
bool _n_steep_28461=(std::fabs(_n_s_28460)>1.2);
d::String _n_key_28462=(d::truth(_n_steep_28461)?(d::string(d::String(u"r"))+d::string(std::floor(_n_y_28459))):(d::string(d::String(u"c"))+d::string(std::floor(_n_x_28458))));
double _n_off_28463=(d::truth(_n_steep_28461)?std::fabs(((_n_y_28459-std::floor(_n_y_28459))-0.5)):std::fabs(((_n_x_28458-std::floor(_n_x_28458))-0.5)));
if((d::truth((!d::truth(_n_slot_28456.has(_n_key_28462))))||d::truth((_n_off_28463<std::get<0>(*d::read(_n_slot_28456.get(_n_key_28462))))))){d::check_cancel();(void)(_n_slot_28456.set(_n_key_28462,std::make_shared<std::tuple<double,double,double,double,bool>>(_n_off_28463,_n_x_28458,_n_y_28459,_n_s_28460,_n_steep_28461)));
}
}}
for(auto &&_n_item_28510:_n_slot_28456.values()){d::check_cancel();auto _n_binding_28511=_n_item_28510;
double _n_x_28464=std::get<1>(*_n_binding_28511);
double _n_y_28465=std::get<2>(*_n_binding_28511);
double _n_s_28466=std::get<3>(*_n_binding_28511);
bool _n_steep_28467=std::get<4>(*_n_binding_28511);
{
double _n_r_28468=std::floor(_n_y_28465);
double _n_f_28469=(_n_y_28465-_n_r_28468);
(void)(([&](){auto _n_argument_28512=std::floor(_n_x_28464);auto _n_argument_28513=_n_r_28468;auto _n_argument_28514=(d::truth(_n_steep_28467)?(d::truth((_n_s_28466>0.0))?d::String(u"\\"):d::String(u"/")):(d::truth((std::fabs(_n_s_28466)>0.5))?(d::truth((_n_f_28469<0.5))?(d::truth((_n_s_28466>0.0))?d::String(u"`"):d::String(u"'")):d::String(u".")):(d::truth((_n_f_28469<0.3))?d::String(u"'"):(d::truth((_n_f_28469>0.7))?d::String(u"_"):d::String(u"-")))));return this->_n_put_28418(_n_argument_28512,_n_argument_28513,_n_argument_28514);})());

}
}
(void)(d::forEach(_n_HEAD_28408,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_l_28470=_a0;
double _n_j_28471=_a1;
{
double _n_a_28472=d::search(_n_l_28470,d::Regex(u"\\S",u""));
double _n_b_28473=double(d::trim(_n_l_28470,false,true).size());
{double _n_i_28474=_n_a_28472;
for(;d::truth((_n_i_28474<_n_b_28473));(void)((_n_i_28474++))){d::check_cancel();(void)(([&](){auto _n_argument_28515=(((_n_tip_28429-_n_HL_28409)+1.0)+_n_i_28474);auto _n_argument_28516=((_n_R_28430-2.0)+_n_j_28471);auto _n_argument_28517=(d::truth((d::at(_n_l_28470,_n_i_28474)==d::String(u"=")))?_n_ink_28441(4.0):(d::truth((d::at(_n_l_28470,_n_i_28474)==d::String(u":")))?_n_ink_28441(2.0):d::at(_n_l_28470,_n_i_28474)));return this->_n_put_28418(_n_argument_28515,_n_argument_28516,_n_argument_28517);})());
}}

}
}));
double _n_fl_28475=d::mod(_n_t_28426,2.2);
double _n_len_28476=((d::truth((_n_fl_28475>0.2))&&d::truth((_n_fl_28475<0.55)))?3.0:((d::truth((_n_fl_28475>0.75))&&d::truth((_n_fl_28475<1.0)))?2.0:0.0));
{double _n_i_28477=1.0;
for(;d::truth((_n_i_28477<=_n_len_28476));(void)((_n_i_28477++))){d::check_cancel();(void)(this->_n_put_28418((_n_tip_28429+_n_i_28477),_n_R_28430,(d::truth((_n_i_28477==_n_len_28476))?d::String(u"<"):d::String(u"-"))));
}}
d::Array<d::String,false> _n_lines_28478=d::Array<d::String,false>{};
{double _n_r_28479=0.0;
for(;d::truth((_n_r_28479<this->_n_rows_28416));(void)((_n_r_28479++))){d::check_cancel();(void)(_n_lines_28478.push(d::join(this->_n_out_28417.slice((_n_r_28479*this->_n_cols_28415),((_n_r_28479+1.0)*this->_n_cols_28415)),d::String(u""))));
}}
return d::join(_n_lines_28478,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("snake").cols)*ascii::catalog_meta("snake").rows);auto _env=std::make_shared<_n_Record_28480>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &snake_meta(){return catalog_meta("snake");}
std::unique_ptr<Piece> make_snake(const AsciiPieceOptions &o){return std::make_unique<Native_snake>(o);}
}
