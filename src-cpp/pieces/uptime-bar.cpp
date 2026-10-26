// Direct, statically typed C++ from src/pieces/uptime-bar.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35208;
struct _n_Record_35209;
struct _n_Record_35276;
struct _n_Record_35277;
struct _n_Record_35208{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_35209> _p_options{};
static std::shared_ptr<_n_Record_35208> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35208>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_35209>>(j["options"]);return out;}
};
struct _n_Record_35209{
d::Array<d::String,false> _p_services{};
static std::shared_ptr<_n_Record_35209> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35209>();out->_p_services=d::decode<d::Array<d::String,false>>(j["services"]);return out;}
};
struct _n_Record_35276{
std::optional<d::Array<d::String,false>> _p_services{};
static std::shared_ptr<_n_Record_35276> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35276>();out->_p_services=d::decode<std::optional<d::Array<d::String,false>>>(j["services"]);return out;}
};
struct _n_Record_35277{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35277> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35277>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_35218(double _a0);
double _n_hash_35219(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_35208> _n_meta_35207=[](){return ([&](){auto _n_object_35282=std::make_shared<_n_Record_35208>();_n_object_35282->_p_name=d::String(u"uptime bar");_n_object_35282->_p_category=d::String(u"data");_n_object_35282->_p_note=d::String(u"60-day uptime bars for three services, a new day slides in");_n_object_35282->_p_cols=64.0;_n_object_35282->_p_rows=15.0;_n_object_35282->_p_fps=8.0;_n_object_35282->_p_options=([&](){auto _n_object_35284=std::make_shared<_n_Record_35209>();_n_object_35284->_p_services=d::Array<d::String,false>{d::String(u"api"),d::String(u"website"),d::String(u"database")};return _n_object_35284;})();return _n_object_35282;})();}();
const double _n_DAYS_35210=[](){return 60.0;}();
const double _n_MAX_35211=[](){return 3.0;}();
const double _n_STEP_35212=[](){return 1.25;}();
const double _n_SLIDE_35213=[](){return 0.25;}();
const double _n_START_35214=[](){return 2646.0;}();
d::Array<d::String,false> _n_BAR_35215=[](){return d::Array<d::String,false>{d::String(u"▁"),d::String(u"▖"),d::String(u"▌")};}();
d::Array<d::String,false> _n_MID_35216=[](){return d::Array<d::String,false>{d::String(u"▁"),d::String(u"▗"),d::String(u"▐")};}();
d::Array<std::array<double,2>,false> _n_RATES_35217=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{0.03,0.01},std::array<double,2>{0.045,0.014},std::array<double,2>{0.025,0.008}};}();
std::function<double()> _n_mulberry32_35218(double _a0){double _n_a_35233=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_35233=double(d::i32((_n_a_35233+1831565813.0))|d::i32(0.0))));
double _n_t_35234=d::imul(double(d::i32(_n_a_35233)^d::i32(double(d::u32(_n_a_35233)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_35233)));
(void)((_n_t_35234=double(d::i32((_n_t_35234+d::imul(double(d::i32(_n_t_35234)^d::i32(double(d::u32(_n_t_35234)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_35234)))))^d::i32(_n_t_35234))));
return (double(d::u32(double(d::i32(_n_t_35234)^d::i32(double(d::u32(_n_t_35234)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_hash_35219(double _a0,double _a1,double _a2){double _n_s_35235=_a0;
double _n_d_35236=_a1;
double _n_k_35237=_a2;
return _n_mulberry32_35218((((_n_s_35235*7919.0)+(_n_d_35236*104729.0))+(_n_k_35237*15485863.0)))();}

struct Native_uptime_bar final:ascii::Piece{
d::Array<d::String,false> _n_services_35220{};
double _n_cols_35221{};
double _n_rows_35222{};
d::Array<d::String,false> _n_names_35223{};
double _n_left_35224{};
double _n_W_35225{};
double _n_top_35231{};
std::function<d::String(double,std::shared_ptr<_n_Record_35277>)> _render;
double _n_base_35226(double _a0,double _a1){double _n_s_35239=_a0;
double _n_d_35240=_a1;
{
auto _n_binding_35288=d::at(_n_RATES_35217,d::mod(_n_s_35239,double(_n_RATES_35217.size())));
double _n_deg_35241=d::at(_n_binding_35288,0.0);
double _n_down_35242=d::at(_n_binding_35288,1.0);
double _n_r_35243=_n_hash_35219(_n_s_35239,_n_d_35240,1.0);
return (d::truth((_n_r_35243<_n_down_35242))?0.0:(d::truth((_n_r_35243<(_n_down_35242+_n_deg_35241)))?1.0:2.0));

}
}

double _n_state_35227(double _a0,double _a1){double _n_s_35244=_a0;
double _n_d_35245=_a1;
{
double _n_b_35246=this->_n_base_35226(_n_s_35244,_n_d_35245);
if(d::truth((_n_b_35246<2.0))){d::check_cancel();return _n_b_35246;
}
return ((d::truth((this->_n_base_35226(_n_s_35244,(_n_d_35245-1.0))<2.0))&&d::truth((_n_hash_35219(_n_s_35244,_n_d_35245,2.0)<0.5)))?1.0:2.0);

}
}

double _n_uptime_35228(double _a0,double _a1){double _n_s_35247=_a0;
double _n_d_35248=_a1;
{
double _n_st_35249=this->_n_state_35227(_n_s_35247,_n_d_35248);
if(d::truth((_n_st_35249==2.0))){d::check_cancel();return 100.0;
}
return (d::truth((_n_st_35249==1.0))?(99.9-(_n_hash_35219(_n_s_35247,_n_d_35248,3.0)*0.6)):(96.0-(_n_hash_35219(_n_s_35247,_n_d_35248,4.0)*9.0)));

}
}

d::String _n_pad_35229(d::String _a0,std::optional<d::String> _a1){d::String _n_l_35250=_a0;
d::String _n_r_35251=(d::present(_a1)?d::read(_a1):d::String(u""));
return d::padEnd((d::string(([&](){auto _n_left_35289=(d::string(d::repeat(d::String(u" "),this->_n_left_35224))+d::string(_n_l_35250));auto _n_right_35290=d::repeat(d::String(u" "),d::maximum({1.0,((this->_n_W_35225-double(_n_l_35250.size()))-double(_n_r_35251.size()))}));return (d::string(_n_left_35289)+d::string(_n_right_35290));})())+d::string(_n_r_35251)),this->_n_cols_35221);}

d::String _n_footer_35230(double _a0){double _n_pct_35252=_a0;
{
d::String _n_a_35253=(d::String(u"")+d::string(_n_DAYS_35210)+d::String(u" days ago "));
d::String _n_b_35254=d::String(u" today");
d::String _n_mid_35255=(d::string((d::string(d::String(u" "))+d::string(d::fixed(_n_pct_35252,2.0))))+d::string(d::String(u"% uptime ")));
double _n_gap_35256=(((this->_n_W_35225-double(_n_a_35253.size()))-double(_n_b_35254.size()))-double(_n_mid_35255.size()));
double _n_l_35257=double(d::i32(_n_gap_35256)>>(d::u32(1.0)&31));
return this->_n_pad_35229((d::string(([&](){auto _n_left_35291=(d::string((d::string(_n_a_35253)+d::string(d::repeat(d::String(u"·"),_n_l_35257))))+d::string(_n_mid_35255));auto _n_right_35292=d::repeat(d::String(u"·"),(_n_gap_35256-_n_l_35257));return (d::string(_n_left_35291)+d::string(_n_right_35292));})())+d::string(_n_b_35254)),std::optional<d::String>{});

}
}

explicit Native_uptime_bar(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_35285=d::decode<std::shared_ptr<_n_Record_35276>>(_options.data);
this->_n_services_35220=(d::present(_n_binding_35285->_p_services)?d::read(_n_binding_35285->_p_services):_n_meta_35207->_p_options->_p_services);
auto _n_binding_35286=_n_meta_35207;
this->_n_cols_35221=_n_binding_35286->_p_cols;
this->_n_rows_35222=_n_binding_35286->_p_rows;
this->_n_names_35223=d::map(this->_n_services_35220.slice(0.0,_n_MAX_35211),[&]( d::String _a0) mutable ->d::String{d::String _n_n_35238=_a0;
return d::slice(d::string(_n_n_35238),0.0,24.0);});
this->_n_left_35224=2.0;
this->_n_W_35225=_n_DAYS_35210;
this->_n_top_35231=(1.0+((_n_MAX_35211-double(this->_n_names_35223.size()))*2.0));
_render=[=]( double _a0,std::shared_ptr<_n_Record_35277> _a1) mutable ->d::String{double _n_t_35258=_a0;
{
double _n_p_35259=((_n_t_35258+0.5)/_n_STEP_35212);
double _n_today_35260=(_n_START_35214+std::floor(_n_p_35259));
bool _n_half_35261=((_n_p_35259-std::floor(_n_p_35259))>(1.0-(_n_SLIDE_35213/_n_STEP_35212)));
d::Array<double,false> _n_now_35262=d::map(this->_n_names_35223,[&]( d::String _a0,double _a1) mutable ->double{d::String _n___35263=_a0;
double _n_s_35264=_a1;
return this->_n_state_35227(_n_s_35264,_n_today_35260);});
double _n_worst_35265=([&](){d::Array<double> _n_numbers_35287;_n_numbers_35287.push(2.0);for(auto _x:_n_now_35262)_n_numbers_35287.push(_x);return d::minimum(_n_numbers_35287);})();
d::Array<d::String,false> _n_lines_35266=d::Array<d::String,false>{};
while(d::truth((double(_n_lines_35266.size())<this->_n_top_35231))){d::check_cancel();(void)(_n_lines_35266.push(d::String(u"")));
}
(void)(_n_lines_35266.push(this->_n_pad_35229((d::truth((_n_worst_35265==2.0))?d::String(u"all systems operational"):(d::truth((_n_worst_35265==1.0))?d::String(u"degraded performance"):d::String(u"partial outage"))),std::optional<d::String>{})));
(void)(_n_lines_35266.push(d::String(u"")));
(void)(d::forEach(this->_n_names_35223,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_name_35267=_a0;
double _n_s_35268=_a1;
{
double _n_sum_35269=0.0;
d::String _n_bar_35270=d::String(u"");
{double _n_d_35271=((_n_today_35260-_n_DAYS_35210)+1.0);
for(;d::truth((_n_d_35271<=_n_today_35260));(void)((_n_d_35271++))){d::check_cancel();(void)((_n_sum_35269=(_n_sum_35269+this->_n_uptime_35228(_n_s_35268,_n_d_35271))));
}}
{double _n_j_35272=0.0;
for(;d::truth((_n_j_35272<this->_n_W_35225));(void)((_n_j_35272++))){d::check_cancel();double _n_d_35273=((((_n_today_35260-_n_DAYS_35210)+1.0)+_n_j_35272)+(d::truth(_n_half_35261)?1.0:0.0));
(void)((_n_bar_35270=(d::string(_n_bar_35270)+d::string(d::at((d::truth(_n_half_35261)?_n_MID_35216:_n_BAR_35215),this->_n_state_35227(_n_s_35268,_n_d_35273))))));
}}
d::String _n_word_35274=(d::truth((d::at(_n_now_35262,_n_s_35268)==2.0))?d::String(u"operational"):(d::truth((d::at(_n_now_35262,_n_s_35268)==1.0))?d::String(u"degraded"):d::String(u"outage")));
(void)(_n_lines_35266.push(this->_n_pad_35229(_n_name_35267,std::optional<d::String>(_n_word_35274))));
(void)(_n_lines_35266.push(this->_n_pad_35229(_n_bar_35270,std::optional<d::String>{})));
(void)(_n_lines_35266.push(this->_n_footer_35230((_n_sum_35269/_n_DAYS_35210))));
(void)(_n_lines_35266.push(d::String(u"")));

}
}));
while(d::truth((double(_n_lines_35266.size())<this->_n_rows_35222))){d::check_cancel();(void)(_n_lines_35266.push(d::String(u"")));
}
return d::join(d::map(_n_lines_35266.slice(0.0,this->_n_rows_35222),[&]( d::String _a0) mutable ->d::String{d::String _n_l_35275=_a0;
return d::padEnd(_n_l_35275,this->_n_cols_35221);}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("uptime-bar").cols)*ascii::catalog_meta("uptime-bar").rows);auto _env=std::make_shared<_n_Record_35277>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &uptime_bar_meta(){return catalog_meta("uptime-bar");}
std::unique_ptr<Piece> make_uptime_bar(const AsciiPieceOptions &o){return std::make_unique<Native_uptime_bar>(o);}
}
