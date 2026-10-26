// Direct, statically typed C++ from src/pieces/uptime-bar.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35207;
struct _n_Record_35208;
struct _n_Record_35275;
struct _n_Record_35276;
struct _n_Record_35207{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_35208> _p_options{};
static std::shared_ptr<_n_Record_35207> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35207>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_35208>>(j["options"]);return out;}
};
struct _n_Record_35208{
d::Array<d::String,false> _p_services{};
static std::shared_ptr<_n_Record_35208> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35208>();out->_p_services=d::decode<d::Array<d::String,false>>(j["services"]);return out;}
};
struct _n_Record_35275{
std::optional<d::Array<d::String,false>> _p_services{};
static std::shared_ptr<_n_Record_35275> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35275>();out->_p_services=d::decode<std::optional<d::Array<d::String,false>>>(j["services"]);return out;}
};
struct _n_Record_35276{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35276> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35276>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_35217(double _a0);
double _n_hash_35218(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_35207> _n_meta_35206=[](){return ([&](){auto _n_object_35281=std::make_shared<_n_Record_35207>();_n_object_35281->_p_name=d::String(u"uptime bar");_n_object_35281->_p_category=d::String(u"data");_n_object_35281->_p_note=d::String(u"60-day uptime bars for three services, a new day slides in");_n_object_35281->_p_cols=64.0;_n_object_35281->_p_rows=15.0;_n_object_35281->_p_fps=8.0;_n_object_35281->_p_options=([&](){auto _n_object_35283=std::make_shared<_n_Record_35208>();_n_object_35283->_p_services=d::Array<d::String,false>{d::String(u"api"),d::String(u"website"),d::String(u"database")};return _n_object_35283;})();return _n_object_35281;})();}();
const double _n_DAYS_35209=[](){return 60.0;}();
const double _n_MAX_35210=[](){return 3.0;}();
const double _n_STEP_35211=[](){return 1.25;}();
const double _n_SLIDE_35212=[](){return 0.25;}();
const double _n_START_35213=[](){return 2646.0;}();
d::Array<d::String,false> _n_BAR_35214=[](){return d::Array<d::String,false>{d::String(u"▁"),d::String(u"▖"),d::String(u"▌")};}();
d::Array<d::String,false> _n_MID_35215=[](){return d::Array<d::String,false>{d::String(u"▁"),d::String(u"▗"),d::String(u"▐")};}();
d::Array<d::Array<double,false>,false> _n_RATES_35216=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.03,0.01},d::Array<double,false>{0.045,0.014},d::Array<double,false>{0.025,0.008}};}();
std::function<double()> _n_mulberry32_35217(double _a0){double _n_a_35232=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_35232=double(d::i32((_n_a_35232+1831565813.0))|d::i32(0.0))));
double _n_t_35233=d::imul(double(d::i32(_n_a_35232)^d::i32(double(d::u32(_n_a_35232)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_35232)));
(void)((_n_t_35233=double(d::i32((_n_t_35233+d::imul(double(d::i32(_n_t_35233)^d::i32(double(d::u32(_n_t_35233)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_35233)))))^d::i32(_n_t_35233))));
return (double(d::u32(double(d::i32(_n_t_35233)^d::i32(double(d::u32(_n_t_35233)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_hash_35218(double _a0,double _a1,double _a2){double _n_s_35234=_a0;
double _n_d_35235=_a1;
double _n_k_35236=_a2;
return _n_mulberry32_35217((((_n_s_35234*7919.0)+(_n_d_35235*104729.0))+(_n_k_35236*15485863.0)))();}

struct Native_uptime_bar final:ascii::Piece{
d::Array<d::String,false> _n_services_35219{};
double _n_cols_35220{};
double _n_rows_35221{};
d::Array<d::String,false> _n_names_35222{};
double _n_left_35223{};
double _n_W_35224{};
double _n_top_35230{};
std::function<d::String(double,std::shared_ptr<_n_Record_35276>)> _render;
double _n_base_35225(double _a0,double _a1){double _n_s_35238=_a0;
double _n_d_35239=_a1;
{
auto _n_binding_35287=d::at(_n_RATES_35216,d::mod(_n_s_35238,double(_n_RATES_35216.size())));
double _n_deg_35240=d::at(_n_binding_35287,0.0);
double _n_down_35241=d::at(_n_binding_35287,1.0);
double _n_r_35242=_n_hash_35218(_n_s_35238,_n_d_35239,1.0);
return (d::truth((_n_r_35242<_n_down_35241))?0.0:(d::truth((_n_r_35242<(_n_down_35241+_n_deg_35240)))?1.0:2.0));

}
}

double _n_state_35226(double _a0,double _a1){double _n_s_35243=_a0;
double _n_d_35244=_a1;
{
double _n_b_35245=this->_n_base_35225(_n_s_35243,_n_d_35244);
if(d::truth((_n_b_35245<2.0))){d::check_cancel();return _n_b_35245;
}
return ((d::truth((this->_n_base_35225(_n_s_35243,(_n_d_35244-1.0))<2.0))&&d::truth((_n_hash_35218(_n_s_35243,_n_d_35244,2.0)<0.5)))?1.0:2.0);

}
}

double _n_uptime_35227(double _a0,double _a1){double _n_s_35246=_a0;
double _n_d_35247=_a1;
{
double _n_st_35248=this->_n_state_35226(_n_s_35246,_n_d_35247);
if(d::truth((_n_st_35248==2.0))){d::check_cancel();return 100.0;
}
return (d::truth((_n_st_35248==1.0))?(99.9-(_n_hash_35218(_n_s_35246,_n_d_35247,3.0)*0.6)):(96.0-(_n_hash_35218(_n_s_35246,_n_d_35247,4.0)*9.0)));

}
}

d::String _n_pad_35228(d::String _a0,std::optional<d::String> _a1){d::String _n_l_35249=_a0;
d::String _n_r_35250=(d::present(_a1)?d::read(_a1):d::String(u""));
return d::padEnd((d::string(([&](){auto _n_left_35288=(d::string(d::repeat(d::String(u" "),this->_n_left_35223))+d::string(_n_l_35249));auto _n_right_35289=d::repeat(d::String(u" "),d::maximum({1.0,((this->_n_W_35224-double(_n_l_35249.size()))-double(_n_r_35250.size()))}));return (d::string(_n_left_35288)+d::string(_n_right_35289));})())+d::string(_n_r_35250)),this->_n_cols_35220);}

d::String _n_footer_35229(double _a0){double _n_pct_35251=_a0;
{
d::String _n_a_35252=(d::String(u"")+d::string(_n_DAYS_35209)+d::String(u" days ago "));
d::String _n_b_35253=d::String(u" today");
d::String _n_mid_35254=(d::string((d::string(d::String(u" "))+d::string(d::fixed(_n_pct_35251,2.0))))+d::string(d::String(u"% uptime ")));
double _n_gap_35255=(((this->_n_W_35224-double(_n_a_35252.size()))-double(_n_b_35253.size()))-double(_n_mid_35254.size()));
double _n_l_35256=double(d::i32(_n_gap_35255)>>(d::u32(1.0)&31));
return this->_n_pad_35228((d::string(([&](){auto _n_left_35290=(d::string((d::string(_n_a_35252)+d::string(d::repeat(d::String(u"·"),_n_l_35256))))+d::string(_n_mid_35254));auto _n_right_35291=d::repeat(d::String(u"·"),(_n_gap_35255-_n_l_35256));return (d::string(_n_left_35290)+d::string(_n_right_35291));})())+d::string(_n_b_35253)),std::optional<d::String>{});

}
}

explicit Native_uptime_bar(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_35284=d::decode<std::shared_ptr<_n_Record_35275>>(_options.data);
this->_n_services_35219=(d::present(_n_binding_35284->_p_services)?d::read(_n_binding_35284->_p_services):_n_meta_35206->_p_options->_p_services);
auto _n_binding_35285=_n_meta_35206;
this->_n_cols_35220=_n_binding_35285->_p_cols;
this->_n_rows_35221=_n_binding_35285->_p_rows;
this->_n_names_35222=d::map(this->_n_services_35219.slice(0.0,_n_MAX_35210),[&]( d::String _a0) mutable ->d::String{d::String _n_n_35237=_a0;
return d::slice(d::string(_n_n_35237),0.0,24.0);});
this->_n_left_35223=2.0;
this->_n_W_35224=_n_DAYS_35209;
this->_n_top_35230=(1.0+((_n_MAX_35210-double(this->_n_names_35222.size()))*2.0));
_render=[=]( double _a0,std::shared_ptr<_n_Record_35276> _a1) mutable ->d::String{double _n_t_35257=_a0;
{
double _n_p_35258=((_n_t_35257+0.5)/_n_STEP_35211);
double _n_today_35259=(_n_START_35213+std::floor(_n_p_35258));
bool _n_half_35260=((_n_p_35258-std::floor(_n_p_35258))>(1.0-(_n_SLIDE_35212/_n_STEP_35211)));
d::Array<double,false> _n_now_35261=d::map(this->_n_names_35222,[&]( d::String _a0,double _a1) mutable ->double{d::String _n___35262=_a0;
double _n_s_35263=_a1;
return this->_n_state_35226(_n_s_35263,_n_today_35259);});
double _n_worst_35264=([&](){d::Array<double> _n_numbers_35286;_n_numbers_35286.push(2.0);for(auto _x:_n_now_35261)_n_numbers_35286.push(_x);return d::minimum(_n_numbers_35286);})();
d::Array<d::String,false> _n_lines_35265=d::Array<d::String,false>{};
while(d::truth((double(_n_lines_35265.size())<this->_n_top_35230))){d::check_cancel();(void)(_n_lines_35265.push(d::String(u"")));
}
(void)(_n_lines_35265.push(this->_n_pad_35228((d::truth((_n_worst_35264==2.0))?d::String(u"all systems operational"):(d::truth((_n_worst_35264==1.0))?d::String(u"degraded performance"):d::String(u"partial outage"))),std::optional<d::String>{})));
(void)(_n_lines_35265.push(d::String(u"")));
(void)(d::forEach(this->_n_names_35222,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_name_35266=_a0;
double _n_s_35267=_a1;
{
double _n_sum_35268=0.0;
d::String _n_bar_35269=d::String(u"");
{double _n_d_35270=((_n_today_35259-_n_DAYS_35209)+1.0);
for(;d::truth((_n_d_35270<=_n_today_35259));(void)((_n_d_35270++))){d::check_cancel();(void)((_n_sum_35268=(_n_sum_35268+this->_n_uptime_35227(_n_s_35267,_n_d_35270))));
}}
{double _n_j_35271=0.0;
for(;d::truth((_n_j_35271<this->_n_W_35224));(void)((_n_j_35271++))){d::check_cancel();double _n_d_35272=((((_n_today_35259-_n_DAYS_35209)+1.0)+_n_j_35271)+(d::truth(_n_half_35260)?1.0:0.0));
(void)((_n_bar_35269=(d::string(_n_bar_35269)+d::string(d::at((d::truth(_n_half_35260)?_n_MID_35215:_n_BAR_35214),this->_n_state_35226(_n_s_35267,_n_d_35272))))));
}}
d::String _n_word_35273=(d::truth((d::at(_n_now_35261,_n_s_35267)==2.0))?d::String(u"operational"):(d::truth((d::at(_n_now_35261,_n_s_35267)==1.0))?d::String(u"degraded"):d::String(u"outage")));
(void)(_n_lines_35265.push(this->_n_pad_35228(_n_name_35266,std::optional<d::String>(_n_word_35273))));
(void)(_n_lines_35265.push(this->_n_pad_35228(_n_bar_35269,std::optional<d::String>{})));
(void)(_n_lines_35265.push(this->_n_footer_35229((_n_sum_35268/_n_DAYS_35209))));
(void)(_n_lines_35265.push(d::String(u"")));

}
}));
while(d::truth((double(_n_lines_35265.size())<this->_n_rows_35221))){d::check_cancel();(void)(_n_lines_35265.push(d::String(u"")));
}
return d::join(d::map(_n_lines_35265.slice(0.0,this->_n_rows_35221),[&]( d::String _a0) mutable ->d::String{d::String _n_l_35274=_a0;
return d::padEnd(_n_l_35274,this->_n_cols_35220);}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("uptime-bar").cols)*ascii::catalog_meta("uptime-bar").rows);auto _env=std::make_shared<_n_Record_35276>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &uptime_bar_meta(){return catalog_meta("uptime-bar");}
std::unique_ptr<Piece> make_uptime_bar(const AsciiPieceOptions &o){return std::make_unique<Native_uptime_bar>(o);}
}
