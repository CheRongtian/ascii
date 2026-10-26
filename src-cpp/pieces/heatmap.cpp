// Direct, statically typed C++ from src/pieces/heatmap.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13786;
struct _n_Record_13787;
struct _n_Record_13847;
struct _n_Record_13848;
struct _n_Record_13786{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_13787> _p_options{};
static std::shared_ptr<_n_Record_13786> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13786>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_13787>>(j["options"]);return out;}
};
struct _n_Record_13787{
d::String _p_unit{};
double _p_seed{};
static std::shared_ptr<_n_Record_13787> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13787>();out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_seed=d::decode<double>(j["seed"]);return out;}
};
struct _n_Record_13847{
std::optional<d::String> _p_unit{};
std::optional<double> _p_seed{};
static std::shared_ptr<_n_Record_13847> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13847>();out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);out->_p_seed=d::decode<std::optional<double>>(j["seed"]);return out;}
};
struct _n_Record_13848{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13848> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13848>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_13794(double _a0);
double _n_monthOf_13795(double _a0);
std::shared_ptr<_n_Record_13786> _n_meta_13785=[](){return ([&](){auto _n_object_13853=std::make_shared<_n_Record_13786>();_n_object_13853->_p_name=d::String(u"heatmap");_n_object_13853->_p_category=d::String(u"data");_n_object_13853->_p_note=d::String(u"contribution calendar, a day at a time, weeks scrolling left");_n_object_13853->_p_cols=66.0;_n_object_13853->_p_rows=12.0;_n_object_13853->_p_fps=10.0;_n_object_13853->_p_options=([&](){auto _n_object_13855=std::make_shared<_n_Record_13787>();_n_object_13855->_p_unit=d::String(u"contributions");_n_object_13855->_p_seed=7.0;return _n_object_13855;})();return _n_object_13853;})();}();
const double _n_WEEKS_13788=[](){return 30.0;}();
const double _n_STEP_13789=[](){return 0.5;}();
const double _n_START_13790=[](){return 20150.0;}();
const d::String _n_LEVELS_13791=[](){return d::String(u"·░▒▓█");}();
d::Array<d::String,false> _n_MONTHS_13792=[](){return d::Array<d::String,false>{d::String(u"jan"),d::String(u"feb"),d::String(u"mar"),d::String(u"apr"),d::String(u"may"),d::String(u"jun"),d::String(u"jul"),d::String(u"aug"),d::String(u"sep"),d::String(u"oct"),d::String(u"nov"),d::String(u"dec")};}();
d::Array<d::String,false> _n_DAYS_13793=[](){return d::Array<d::String,false>{d::String(u"mon"),d::String(u""),d::String(u"wed"),d::String(u""),d::String(u"fri"),d::String(u""),d::String(u"")};}();
std::function<double()> _n_mulberry32_13794(double _a0){double _n_a_13805=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_13805=double(d::i32((_n_a_13805+1831565813.0))|d::i32(0.0))));
double _n_t_13806=d::imul(double(d::i32(_n_a_13805)^d::i32(double(d::u32(_n_a_13805)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_13805)));
(void)((_n_t_13806=double(d::i32((_n_t_13806+d::imul(double(d::i32(_n_t_13806)^d::i32(double(d::u32(_n_t_13806)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_13806)))))^d::i32(_n_t_13806))));
return (double(d::u32(double(d::i32(_n_t_13806)^d::i32(double(d::u32(_n_t_13806)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_monthOf_13795(double _a0){double _n_z_13807=_a0;
{
double _n_doe_13808=d::mod((d::mod((_n_z_13807+719468.0),146097.0)+146097.0),146097.0);
double _n_yoe_13809=std::floor((([&](){auto _n_left_13856=([&](){auto _n_left_13858=(_n_doe_13808-std::floor((_n_doe_13808/1460.0)));auto _n_right_13859=std::floor((_n_doe_13808/36524.0));return (_n_left_13858+_n_right_13859);})();auto _n_right_13857=std::floor((_n_doe_13808/146096.0));return (_n_left_13856-_n_right_13857);})()/365.0));
double _n_doy_13810=(_n_doe_13808-([&](){auto _n_left_13860=((365.0*_n_yoe_13809)+std::floor((_n_yoe_13809/4.0)));auto _n_right_13861=std::floor((_n_yoe_13809/100.0));return (_n_left_13860-_n_right_13861);})());
double _n_mp_13811=std::floor((((5.0*_n_doy_13810)+2.0)/153.0));
return d::mod((_n_mp_13811+2.0),12.0);

}
}

struct Native_heatmap final:ascii::Piece{
d::String _n_unit_13796{};
double _n_seed_13797{};
double _n_cols_13798{};
double _n_left_13799{};
std::function<d::String(double,std::shared_ptr<_n_Record_13848>)> _render;
double _n_hash_13800(double _a0,double _a1){double _n_d_13812=_a0;
double _n_k_13813=_a1;
return _n_mulberry32_13794((((this->_n_seed_13797*7919.0)+(_n_d_13812*104729.0))+(_n_k_13813*15485863.0)))();}

double _n_busy_13801(double _a0){double _n_d_13814=_a0;
{
double _n_w_13815=((_n_d_13814/7.0)/3.0);
double _n_i_13816=std::floor(_n_w_13815);
double _n_f_13817=(_n_w_13815-_n_i_13816);
double _n_e_13818=((_n_f_13817*_n_f_13817)*(3.0-(2.0*_n_f_13817)));
return ([&](){auto _n_left_13870=(this->_n_hash_13800(_n_i_13816,9.0)*(1.0-_n_e_13818));auto _n_right_13871=(this->_n_hash_13800((_n_i_13816+1.0),9.0)*_n_e_13818);return (_n_left_13870+_n_right_13871);})();

}
}

double _n_count_13802(double _a0){double _n_d_13819=_a0;
{
bool _n_weekend_13820=(d::mod((_n_d_13819+3.0),7.0)>=5.0);
double _n_a_13821=((0.08+(1.05*std::pow(this->_n_busy_13801(_n_d_13819),1.4)))*(d::truth(_n_weekend_13820)?0.3:1.0));
if(d::truth((this->_n_hash_13800(_n_d_13819,1.0)>(_n_a_13821+0.08)))){d::check_cancel();return 0.0;
}
return ([&](){auto _n_argument_13872=1.0;auto _n_argument_13873=d::round((_n_a_13821*(3.0+(14.0*this->_n_hash_13800(_n_d_13819,2.0)))));return d::maximum({_n_argument_13872,_n_argument_13873});})();

}
}

double _n_level_13803(double _a0){double _n_n_13822=_a0;
return (d::truth((_n_n_13822==0.0))?0.0:(d::truth((_n_n_13822<4.0))?1.0:(d::truth((_n_n_13822<8.0))?2.0:(d::truth((_n_n_13822<12.0))?3.0:4.0))));}

explicit Native_heatmap(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13862=d::decode<std::shared_ptr<_n_Record_13847>>(_options.data);
this->_n_unit_13796=(d::present(_n_binding_13862->_p_unit)?d::read(_n_binding_13862->_p_unit):_n_meta_13785->_p_options->_p_unit);
this->_n_seed_13797=(d::present(_n_binding_13862->_p_seed)?d::read(_n_binding_13862->_p_seed):_n_meta_13785->_p_options->_p_seed);
auto _n_binding_13863=_n_meta_13785;
this->_n_cols_13798=_n_binding_13863->_p_cols;
this->_n_left_13799=6.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_13848> _a1) mutable ->d::String{double _n_t_13823=_a0;
{
double _n_today_13824=(_n_START_13790+std::floor((_n_t_13823/_n_STEP_13789)));
double _n_monday_13825=(_n_today_13824-d::mod((_n_today_13824+3.0),7.0));
double _n_first_13826=(_n_monday_13825-((_n_WEEKS_13788-1.0)*7.0));
d::Array<d::Array<d::String,false>,false> _n_grid_13827=d::Array<d::Array<d::String,false>,false>(d::from(7.0,[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_13829=_a1;
return d::split((d::string(d::padEnd(d::at(_n_DAYS_13793,_n_r_13829),(this->_n_left_13799-2.0)))+d::string(d::String(u"  "))),d::String(u""));}));
double _n_total_13830=0.0;
{double _n_w_13831=0.0;
for(;d::truth((_n_w_13831<_n_WEEKS_13788));(void)((_n_w_13831++))){d::check_cancel();{double _n_r_13832=0.0;
for(;d::truth((_n_r_13832<7.0));(void)((_n_r_13832++))){d::check_cancel();double _n_d_13833=((_n_first_13826+(_n_w_13831*7.0))+_n_r_13832);
d::String _n_ch_13834=d::String(u" ");
if(d::truth((_n_d_13833<=_n_today_13824))){d::check_cancel();double _n_n_13835=this->_n_count_13802(_n_d_13833);
(void)((_n_total_13830=(_n_total_13830+_n_n_13835)));
(void)((_n_ch_13834=d::at(_n_LEVELS_13791,this->_n_level_13803(_n_n_13835))));
}
(void)(d::at(_n_grid_13827,_n_r_13832).push(_n_ch_13834,d::String(u" ")));
}}
}}
d::Array<d::String,false> _n_head_13836=d::Array<d::String,false>(size_t(this->_n_cols_13798)).fill(d::String(u" "));
double _n_free_13837=0.0;
{double _n_w_13838=0.0;
for(;d::truth((_n_w_13838<_n_WEEKS_13788));(void)((_n_w_13838++))){d::check_cancel();double _n_m_13839=_n_monthOf_13795((_n_first_13826+(_n_w_13838*7.0)));
if((d::truth((_n_w_13838>0.0))&&d::truth((_n_m_13839==_n_monthOf_13795((_n_first_13826+((_n_w_13838-1.0)*7.0))))))){d::check_cancel();continue;
}
double _n_x_13840=(this->_n_left_13799+(_n_w_13838*2.0));
if((d::truth((_n_x_13840<_n_free_13837))||d::truth(((_n_x_13840+3.0)>this->_n_cols_13798)))){d::check_cancel();continue;
}
if((d::truth((_n_w_13838==0.0))&&d::truth((_n_monthOf_13795((_n_first_13826+14.0))!=_n_m_13839)))){d::check_cancel();continue;
}
{double _n_k_13841=0.0;
for(;d::truth((_n_k_13841<3.0));(void)((_n_k_13841++))){d::check_cancel();(void)(([&](){auto&& _n_array_13864=_n_head_13836;auto _n_index_13865=(_n_x_13840+_n_k_13841);auto _n_value_13866=d::at(d::at(_n_MONTHS_13792,_n_m_13839),_n_k_13841);d::put(_n_array_13864,_n_index_13865,_n_value_13866);return _n_value_13866;})());
}}
(void)((_n_free_13837=(_n_x_13840+5.0)));
}}
d::Array<d::String,false> _n_lines_13842=d::Array<d::String,false>{d::String(u""),d::join(_n_head_13836,d::String(u""))};
{double _n_r_13843=0.0;
for(;d::truth((_n_r_13843<7.0));(void)((_n_r_13843++))){d::check_cancel();(void)(_n_lines_13842.push(d::join(d::at(_n_grid_13827,_n_r_13843),d::String(u""))));
}}
(void)(_n_lines_13842.push(d::String(u"")));
d::String _n_sum_13844=(d::string((d::string((d::string((d::string((d::string(d::replace(d::string(_n_total_13830),d::Regex(u"\\B(?=(\\d{3})+$)",u"g"),d::String(u",")))+d::string(d::String(u" "))))+d::string(this->_n_unit_13796)))+d::string(d::String(u" in the last "))))+d::string(_n_WEEKS_13788)))+d::string(d::String(u" weeks")));
d::String _n_key_13845=(d::string((d::string(d::String(u"less "))+d::string(d::join(([&](){d::Array<d::String,false> _n_array_13867;for(const auto &_v:_n_LEVELS_13791)_n_array_13867.push(_v);return _n_array_13867;})(),d::String(u" ")))))+d::string(d::String(u" more")));
(void)(_n_lines_13842.push((d::string(([&](){auto _n_left_13868=d::repeat(d::String(u" "),this->_n_left_13799);auto _n_right_13869=d::padEnd(_n_sum_13844,(((this->_n_cols_13798-this->_n_left_13799)-double(_n_key_13845.size()))-1.0));return (d::string(_n_left_13868)+d::string(_n_right_13869));})())+d::string(_n_key_13845))));
(void)(_n_lines_13842.push(d::String(u"")));
return d::join(d::map(_n_lines_13842,[&]( d::String _a0) mutable ->d::String{d::String _n_l_13846=_a0;
return d::padEnd(d::slice(_n_l_13846,0.0,this->_n_cols_13798),this->_n_cols_13798);}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("heatmap").cols)*ascii::catalog_meta("heatmap").rows);auto _env=std::make_shared<_n_Record_13848>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &heatmap_meta(){return catalog_meta("heatmap");}
std::unique_ptr<Piece> make_heatmap(const AsciiPieceOptions &o){return std::make_unique<Native_heatmap>(o);}
}
