// Direct, statically typed C++ from src/pieces/heatmap.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13787;
struct _n_Record_13788;
struct _n_Record_13848;
struct _n_Record_13849;
struct _n_Record_13787{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_13788> _p_options{};
static std::shared_ptr<_n_Record_13787> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13787>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_13788>>(j["options"]);return out;}
};
struct _n_Record_13788{
d::String _p_unit{};
double _p_seed{};
static std::shared_ptr<_n_Record_13788> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13788>();out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_seed=d::decode<double>(j["seed"]);return out;}
};
struct _n_Record_13848{
std::optional<d::String> _p_unit{};
std::optional<double> _p_seed{};
static std::shared_ptr<_n_Record_13848> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13848>();out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);out->_p_seed=d::decode<std::optional<double>>(j["seed"]);return out;}
};
struct _n_Record_13849{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13849> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13849>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_13795(double _a0);
double _n_monthOf_13796(double _a0);
std::shared_ptr<_n_Record_13787> _n_meta_13786=[](){return ([&](){auto _n_object_13854=std::make_shared<_n_Record_13787>();_n_object_13854->_p_name=d::String(u"heatmap");_n_object_13854->_p_category=d::String(u"data");_n_object_13854->_p_note=d::String(u"contribution calendar, a day at a time, weeks scrolling left");_n_object_13854->_p_cols=66.0;_n_object_13854->_p_rows=12.0;_n_object_13854->_p_fps=10.0;_n_object_13854->_p_options=([&](){auto _n_object_13856=std::make_shared<_n_Record_13788>();_n_object_13856->_p_unit=d::String(u"contributions");_n_object_13856->_p_seed=7.0;return _n_object_13856;})();return _n_object_13854;})();}();
const double _n_WEEKS_13789=[](){return 30.0;}();
const double _n_STEP_13790=[](){return 0.5;}();
const double _n_START_13791=[](){return 20150.0;}();
const d::String _n_LEVELS_13792=[](){return d::String(u"·░▒▓█");}();
d::Array<d::String,false> _n_MONTHS_13793=[](){return d::Array<d::String,false>{d::String(u"jan"),d::String(u"feb"),d::String(u"mar"),d::String(u"apr"),d::String(u"may"),d::String(u"jun"),d::String(u"jul"),d::String(u"aug"),d::String(u"sep"),d::String(u"oct"),d::String(u"nov"),d::String(u"dec")};}();
d::Array<d::String,false> _n_DAYS_13794=[](){return d::Array<d::String,false>{d::String(u"mon"),d::String(u""),d::String(u"wed"),d::String(u""),d::String(u"fri"),d::String(u""),d::String(u"")};}();
std::function<double()> _n_mulberry32_13795(double _a0){double _n_a_13806=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_13806=double(d::i32((_n_a_13806+1831565813.0))|d::i32(0.0))));
double _n_t_13807=d::imul(double(d::i32(_n_a_13806)^d::i32(double(d::u32(_n_a_13806)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_13806)));
(void)((_n_t_13807=double(d::i32((_n_t_13807+d::imul(double(d::i32(_n_t_13807)^d::i32(double(d::u32(_n_t_13807)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_13807)))))^d::i32(_n_t_13807))));
return (double(d::u32(double(d::i32(_n_t_13807)^d::i32(double(d::u32(_n_t_13807)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_monthOf_13796(double _a0){double _n_z_13808=_a0;
{
double _n_doe_13809=d::mod((d::mod((_n_z_13808+719468.0),146097.0)+146097.0),146097.0);
double _n_yoe_13810=std::floor((([&](){auto _n_left_13857=([&](){auto _n_left_13859=(_n_doe_13809-std::floor((_n_doe_13809/1460.0)));auto _n_right_13860=std::floor((_n_doe_13809/36524.0));return (_n_left_13859+_n_right_13860);})();auto _n_right_13858=std::floor((_n_doe_13809/146096.0));return (_n_left_13857-_n_right_13858);})()/365.0));
double _n_doy_13811=(_n_doe_13809-([&](){auto _n_left_13861=((365.0*_n_yoe_13810)+std::floor((_n_yoe_13810/4.0)));auto _n_right_13862=std::floor((_n_yoe_13810/100.0));return (_n_left_13861-_n_right_13862);})());
double _n_mp_13812=std::floor((((5.0*_n_doy_13811)+2.0)/153.0));
return d::mod((_n_mp_13812+2.0),12.0);

}
}

struct Native_heatmap final:ascii::Piece{
d::String _n_unit_13797{};
double _n_seed_13798{};
double _n_cols_13799{};
double _n_left_13800{};
std::function<d::String(double,std::shared_ptr<_n_Record_13849>)> _render;
double _n_hash_13801(double _a0,double _a1){double _n_d_13813=_a0;
double _n_k_13814=_a1;
return _n_mulberry32_13795((((this->_n_seed_13798*7919.0)+(_n_d_13813*104729.0))+(_n_k_13814*15485863.0)))();}

double _n_busy_13802(double _a0){double _n_d_13815=_a0;
{
double _n_w_13816=((_n_d_13815/7.0)/3.0);
double _n_i_13817=std::floor(_n_w_13816);
double _n_f_13818=(_n_w_13816-_n_i_13817);
double _n_e_13819=((_n_f_13818*_n_f_13818)*(3.0-(2.0*_n_f_13818)));
return ([&](){auto _n_left_13871=(this->_n_hash_13801(_n_i_13817,9.0)*(1.0-_n_e_13819));auto _n_right_13872=(this->_n_hash_13801((_n_i_13817+1.0),9.0)*_n_e_13819);return (_n_left_13871+_n_right_13872);})();

}
}

double _n_count_13803(double _a0){double _n_d_13820=_a0;
{
bool _n_weekend_13821=(d::mod((_n_d_13820+3.0),7.0)>=5.0);
double _n_a_13822=((0.08+(1.05*std::pow(this->_n_busy_13802(_n_d_13820),1.4)))*(d::truth(_n_weekend_13821)?0.3:1.0));
if(d::truth((this->_n_hash_13801(_n_d_13820,1.0)>(_n_a_13822+0.08)))){d::check_cancel();return 0.0;
}
return ([&](){auto _n_argument_13873=1.0;auto _n_argument_13874=d::round((_n_a_13822*(3.0+(14.0*this->_n_hash_13801(_n_d_13820,2.0)))));return d::maximum({_n_argument_13873,_n_argument_13874});})();

}
}

double _n_level_13804(double _a0){double _n_n_13823=_a0;
return (d::truth((_n_n_13823==0.0))?0.0:(d::truth((_n_n_13823<4.0))?1.0:(d::truth((_n_n_13823<8.0))?2.0:(d::truth((_n_n_13823<12.0))?3.0:4.0))));}

explicit Native_heatmap(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13863=d::decode<std::shared_ptr<_n_Record_13848>>(_options.data);
this->_n_unit_13797=(d::present(_n_binding_13863->_p_unit)?d::read(_n_binding_13863->_p_unit):_n_meta_13786->_p_options->_p_unit);
this->_n_seed_13798=(d::present(_n_binding_13863->_p_seed)?d::read(_n_binding_13863->_p_seed):_n_meta_13786->_p_options->_p_seed);
auto _n_binding_13864=_n_meta_13786;
this->_n_cols_13799=_n_binding_13864->_p_cols;
this->_n_left_13800=6.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_13849> _a1) mutable ->d::String{double _n_t_13824=_a0;
{
double _n_today_13825=(_n_START_13791+std::floor((_n_t_13824/_n_STEP_13790)));
double _n_monday_13826=(_n_today_13825-d::mod((_n_today_13825+3.0),7.0));
double _n_first_13827=(_n_monday_13826-((_n_WEEKS_13789-1.0)*7.0));
d::Array<d::Array<d::String,false>,false> _n_grid_13828=d::Array<d::Array<d::String,false>,false>(d::from(7.0,[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_13830=_a1;
return d::split((d::string(d::padEnd(d::at(_n_DAYS_13794,_n_r_13830),(this->_n_left_13800-2.0)))+d::string(d::String(u"  "))),d::String(u""));}));
double _n_total_13831=0.0;
{double _n_w_13832=0.0;
for(;d::truth((_n_w_13832<_n_WEEKS_13789));(void)((_n_w_13832++))){d::check_cancel();{double _n_r_13833=0.0;
for(;d::truth((_n_r_13833<7.0));(void)((_n_r_13833++))){d::check_cancel();double _n_d_13834=((_n_first_13827+(_n_w_13832*7.0))+_n_r_13833);
d::String _n_ch_13835=d::String(u" ");
if(d::truth((_n_d_13834<=_n_today_13825))){d::check_cancel();double _n_n_13836=this->_n_count_13803(_n_d_13834);
(void)((_n_total_13831=(_n_total_13831+_n_n_13836)));
(void)((_n_ch_13835=d::at(_n_LEVELS_13792,this->_n_level_13804(_n_n_13836))));
}
(void)(d::at(_n_grid_13828,_n_r_13833).push(_n_ch_13835,d::String(u" ")));
}}
}}
d::Array<d::String,false> _n_head_13837=d::Array<d::String,false>(size_t(this->_n_cols_13799)).fill(d::String(u" "));
double _n_free_13838=0.0;
{double _n_w_13839=0.0;
for(;d::truth((_n_w_13839<_n_WEEKS_13789));(void)((_n_w_13839++))){d::check_cancel();double _n_m_13840=_n_monthOf_13796((_n_first_13827+(_n_w_13839*7.0)));
if((d::truth((_n_w_13839>0.0))&&d::truth((_n_m_13840==_n_monthOf_13796((_n_first_13827+((_n_w_13839-1.0)*7.0))))))){d::check_cancel();continue;
}
double _n_x_13841=(this->_n_left_13800+(_n_w_13839*2.0));
if((d::truth((_n_x_13841<_n_free_13838))||d::truth(((_n_x_13841+3.0)>this->_n_cols_13799)))){d::check_cancel();continue;
}
if((d::truth((_n_w_13839==0.0))&&d::truth((_n_monthOf_13796((_n_first_13827+14.0))!=_n_m_13840)))){d::check_cancel();continue;
}
{double _n_k_13842=0.0;
for(;d::truth((_n_k_13842<3.0));(void)((_n_k_13842++))){d::check_cancel();(void)(([&](){auto&& _n_array_13865=_n_head_13837;auto _n_index_13866=(_n_x_13841+_n_k_13842);auto _n_value_13867=d::at(d::at(_n_MONTHS_13793,_n_m_13840),_n_k_13842);d::put(_n_array_13865,_n_index_13866,_n_value_13867);return _n_value_13867;})());
}}
(void)((_n_free_13838=(_n_x_13841+5.0)));
}}
d::Array<d::String,false> _n_lines_13843=d::Array<d::String,false>{d::String(u""),d::join(_n_head_13837,d::String(u""))};
{double _n_r_13844=0.0;
for(;d::truth((_n_r_13844<7.0));(void)((_n_r_13844++))){d::check_cancel();(void)(_n_lines_13843.push(d::join(d::at(_n_grid_13828,_n_r_13844),d::String(u""))));
}}
(void)(_n_lines_13843.push(d::String(u"")));
d::String _n_sum_13845=(d::string((d::string((d::string((d::string((d::string(d::replace(d::string(_n_total_13831),d::Regex(u"\\B(?=(\\d{3})+$)",u"g"),d::String(u",")))+d::string(d::String(u" "))))+d::string(this->_n_unit_13797)))+d::string(d::String(u" in the last "))))+d::string(_n_WEEKS_13789)))+d::string(d::String(u" weeks")));
d::String _n_key_13846=(d::string((d::string(d::String(u"less "))+d::string(d::join(([&](){d::Array<d::String,false> _n_array_13868;for(const auto &_v:_n_LEVELS_13792)_n_array_13868.push(_v);return _n_array_13868;})(),d::String(u" ")))))+d::string(d::String(u" more")));
(void)(_n_lines_13843.push((d::string(([&](){auto _n_left_13869=d::repeat(d::String(u" "),this->_n_left_13800);auto _n_right_13870=d::padEnd(_n_sum_13845,(((this->_n_cols_13799-this->_n_left_13800)-double(_n_key_13846.size()))-1.0));return (d::string(_n_left_13869)+d::string(_n_right_13870));})())+d::string(_n_key_13846))));
(void)(_n_lines_13843.push(d::String(u"")));
return d::join(d::map(_n_lines_13843,[&]( d::String _a0) mutable ->d::String{d::String _n_l_13847=_a0;
return d::padEnd(d::slice(_n_l_13847,0.0,this->_n_cols_13799),this->_n_cols_13799);}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("heatmap").cols)*ascii::catalog_meta("heatmap").rows);auto _env=std::make_shared<_n_Record_13849>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &heatmap_meta(){return catalog_meta("heatmap");}
std::unique_ptr<Piece> make_heatmap(const AsciiPieceOptions &o){return std::make_unique<Native_heatmap>(o);}
}
