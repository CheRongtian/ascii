// Direct, statically typed C++ from src/pieces/ruled-mountains.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26240;
struct _n_Record_26305;
struct _n_Record_26240{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_26240> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26240>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_26305{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26305> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26305>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_26240> _n_meta_26239=[](){return ([&](){auto _n_object_26308=std::make_shared<_n_Record_26240>();_n_object_26308->_p_name=d::String(u"ruled mountains");_n_object_26308->_p_category=d::String(u"nature");_n_object_26308->_p_note=d::String(u"ruled lines with a range rising from them, drifting forward");_n_object_26308->_p_cols=64.0;_n_object_26308->_p_rows=20.0;_n_object_26308->_p_fps=10.0;return _n_object_26308;})();}();
const double _n_N_26241=[](){return 6.0;}();
const double _n_GAP_26242=[](){return 3.0;}();
d::Array<double,false> _n_AMP_26243=[](){return d::Array<double,false>{5.0,5.5,6.0,6.6,7.2,8.0};}();
const double _n_SPEED_26244=[](){return 0.2;}();
const double _n_START_26245=[](){return 30.0;}();
const double _n_SLIVER_26246=[](){return 3.0;}();
d::Array<std::array<double,10>,false> _n_PEAKS_26247=[](){return d::Array<std::array<double,10>,false>{std::array<double,10>{(-d::number(16.0)),3.0,0.55,2.0,1.0,0.0,0.71,0.4,0.93,1.9},std::array<double,10>{(-d::number(5.0)),3.0,0.85,3.0,2.0,(-d::number(4.0)),0.53,2.6,1.21,4.1},std::array<double,10>{6.0,3.0,1.0,2.0,4.0,5.0,0.97,4.4,0.67,0.3},std::array<double,10>{18.0,3.0,0.6,3.0,2.0,0.0,0.61,1.2,1.07,5.2}};}();

struct Native_ruled_mountains final:ascii::Piece{
double _n_cols_26248{};
double _n_rows_26249{};
double _n_mid_26250{};
d::Array<double,false> _n_base_26251{};
d::Array<double,true> _n_f_26252{};
d::Array<int16_t,true> _n_e_26253{};
d::Array<d::Array<d::String,false>,false> _n_g_26254{};
d::Array<d::Array<int8_t,true>,false> _n_owner_26255{};
d::Array<int16_t,true> _n_horizon_26256{};
d::Array<int16_t,true> _n_seen_26257{};
std::function<d::String(double,std::shared_ptr<_n_Record_26305>)> _render;
double _n_tent_26258(double _a0,double _a1,double _a2){double _n_h_26262=_a0;
double _n_d_26263=_a1;
double _n_steep_26264=_a2;
return (_n_h_26262-(d::truth((_n_d_26263<_n_steep_26264))?_n_d_26263:(_n_steep_26264+((_n_d_26263-_n_steep_26264)/2.0))));}

void _n_profile_26259(double _a0,double _a1){double _n_s_26265=_a0;
double _n_amp_26266=_a1;
{
(void)(this->_n_f_26252.fill(0.0));
for(auto &&_n_item_26332:_n_PEAKS_26247){d::check_cancel();auto _n_binding_26333=_n_item_26332;
double _n_lane_26267=d::at(_n_binding_26333,0.0);
double _n_wander_26268=d::at(_n_binding_26333,1.0);
double _n_tall_26269=d::at(_n_binding_26333,2.0);
double _n_west_26270=d::at(_n_binding_26333,3.0);
double _n_east_26271=d::at(_n_binding_26333,4.0);
double _n_sub_26272=d::at(_n_binding_26333,5.0);
double _n_fm_26273=d::at(_n_binding_26333,6.0);
double _n_pm_26274=d::at(_n_binding_26333,7.0);
double _n_fa_26275=d::at(_n_binding_26333,8.0);
double _n_pa_26276=d::at(_n_binding_26333,9.0);
{
double _n_m_26277=((this->_n_mid_26250+_n_lane_26267)+(_n_wander_26268*std::sin(((_n_fm_26273*_n_s_26265)+_n_pm_26274))));
double _n_h_26278=((_n_amp_26266*_n_tall_26269)*(0.55+(0.45*std::sin(((_n_fa_26275*_n_s_26265)+_n_pa_26276)))));
{double _n_x_26279=0.0;
for(;d::truth((_n_x_26279<=this->_n_cols_26248));(void)((_n_x_26279++))){d::check_cancel();double _n_d_26280=(_n_x_26279-_n_m_26277);
double _n_y_26281=([&](){auto _n_argument_26334=_n_h_26278;auto _n_argument_26335=std::fabs(_n_d_26280);auto _n_argument_26336=(d::truth((_n_d_26280<0.0))?_n_west_26270:_n_east_26271);return this->_n_tent_26258(_n_argument_26334,_n_argument_26335,_n_argument_26336);})();
if(d::truth(_n_sub_26272)){d::check_cancel();(void)((_n_y_26281=([&](){auto _n_argument_26337=_n_y_26281;auto _n_argument_26338=([&](){auto _n_argument_26339=(_n_h_26278-2.0);auto _n_argument_26340=std::fabs((_n_d_26280-_n_sub_26272));auto _n_argument_26341=1.5;return this->_n_tent_26258(_n_argument_26339,_n_argument_26340,_n_argument_26341);})();return d::maximum({_n_argument_26337,_n_argument_26338});})()));
}
if(d::truth((_n_y_26281>d::at(this->_n_f_26252,_n_x_26279)))){d::check_cancel();(void)(([&](){auto&& _n_array_26342=this->_n_f_26252;auto _n_index_26343=_n_x_26279;auto _n_value_26344=_n_y_26281;d::put(_n_array_26342,_n_index_26343,_n_value_26344);return _n_value_26344;})());
}
}}

}
}
{double _n_x_26282=0.0;
for(;d::truth((_n_x_26282<=this->_n_cols_26248));(void)((_n_x_26282++))){d::check_cancel();(void)(([&](){auto&& _n_array_26345=this->_n_e_26253;auto _n_index_26346=_n_x_26282;auto _n_value_26347=([&](){auto _n_argument_26348=0.0;auto _n_argument_26349=d::round(d::at(this->_n_f_26252,_n_x_26282));return d::maximum({_n_argument_26348,_n_argument_26349});})();d::put(_n_array_26345,_n_index_26346,_n_value_26347);return _n_value_26347;})());
}}

}
}

explicit Native_ruled_mountains(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26309=_n_meta_26239;
this->_n_cols_26248=_n_binding_26309->_p_cols;
this->_n_rows_26249=_n_binding_26309->_p_rows;
this->_n_mid_26250=(this->_n_cols_26248/2.0);
this->_n_base_26251=d::Array<double,false>(d::from(_n_N_26241,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_i_26261=_a1;
return ((this->_n_rows_26249-1.0)-(((_n_N_26241-1.0)-_n_i_26261)*_n_GAP_26242));}));
this->_n_f_26252=d::Array<double,true>(size_t((this->_n_cols_26248+1.0)));
this->_n_e_26253=d::Array<int16_t,true>(size_t((this->_n_cols_26248+1.0)));
this->_n_g_26254=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_26249,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_26248));}));
this->_n_owner_26255=d::Array<d::Array<int8_t,true>,false>(d::from(this->_n_rows_26249,[&]( ) mutable ->d::Array<int8_t,true>{return d::Array<int8_t,true>(size_t(this->_n_cols_26248));}));
this->_n_horizon_26256=d::Array<int16_t,true>(size_t(this->_n_cols_26248));
this->_n_seen_26257=d::Array<int16_t,true>(size_t(this->_n_cols_26248));
_render=[=]( double _a0,std::shared_ptr<_n_Record_26305> _a1) mutable ->d::String{double _n_t_26283=_a0;
auto _n_binding_26312=(d::present(_a1)?_a1:([&](){auto _n_object_26311=std::make_shared<_n_Record_26305>();return _n_object_26311;})());
bool _n_paper_26284=(d::present(_n_binding_26312->_p_paper)?d::read(_n_binding_26312->_p_paper):false);
{
double _n_shade_26285=(d::truth(_n_paper_26284)?(-d::number(1.0)):1.0);
for(auto &&_n_item_26313:this->_n_g_26254){d::check_cancel();d::Array<d::String,false> _n_row_26286=_n_item_26313;
(void)(_n_row_26286.fill(d::String(u" ")));
}
for(auto &&_n_item_26314:this->_n_owner_26255){d::check_cancel();d::Array<int8_t,true> _n_row_26287=_n_item_26314;
(void)(_n_row_26287.fill((-d::number(1.0))));
}
(void)(this->_n_horizon_26256.fill(this->_n_rows_26249));
{double _n_i_26288=(_n_N_26241-1.0);
for(;d::truth((_n_i_26288>=0.0));(void)((_n_i_26288--))){d::check_cancel();double _n_R_26289=d::at(this->_n_base_26251,_n_i_26288);
(void)(this->_n_profile_26259(((_n_i_26288-((_n_START_26245+_n_t_26283)*_n_SPEED_26244))*0.9),d::at(_n_AMP_26243,_n_i_26288)));
{double _n_c_26290=0.0;
for(;d::truth((_n_c_26290<this->_n_cols_26248));(void)((_n_c_26290++))){d::check_cancel();double _n_a_26291=d::at(this->_n_e_26253,_n_c_26290);
double _n_b_26292=d::at(this->_n_e_26253,(_n_c_26290+1.0));
double _n_r_26293=((_n_R_26289-d::maximum({_n_a_26291,_n_b_26292}))+(d::truth((_n_a_26291==_n_b_26292))?0.0:1.0));
(void)(([&](){auto&& _n_array_26315=this->_n_seen_26257;auto _n_index_26316=_n_c_26290;auto _n_value_26317=((d::truth((_n_r_26293>=0.0))&&d::truth((_n_r_26293<d::at(this->_n_horizon_26256,_n_c_26290))))?_n_r_26293:(-d::number(1.0)));d::put(_n_array_26315,_n_index_26316,_n_value_26317);return _n_value_26317;})());
}}
{double _n_c_26294=0.0;
for(;d::truth((_n_c_26294<this->_n_cols_26248));(void)((_n_c_26294++))){d::check_cancel();double _n_r_26295=d::at(this->_n_seen_26257,_n_c_26294);
if(d::truth((_n_r_26295<0.0))){d::check_cancel();continue;
}
double _n_n_26296=_n_c_26294;
double _n_m_26297=_n_c_26294;
while((d::truth((_n_n_26296>0.0))&&d::truth((d::at(this->_n_seen_26257,(_n_n_26296-1.0))>=0.0)))){d::check_cancel();(void)((_n_n_26296--));
}
while((d::truth((_n_m_26297<(this->_n_cols_26248-1.0)))&&d::truth((d::at(this->_n_seen_26257,(_n_m_26297+1.0))>=0.0)))){d::check_cancel();(void)((_n_m_26297++));
}
double _n_a_26298=d::at(this->_n_e_26253,_n_c_26294);
double _n_b_26299=d::at(this->_n_e_26253,(_n_c_26294+1.0));
double _n_below_26300=d::at(this->_n_horizon_26256,_n_c_26294);
d::String _n_ch_26301=(d::truth((_n_b_26299>_n_a_26298))?d::String(u"/"):(d::truth((_n_b_26299<_n_a_26298))?d::String(u"\\"):d::String(u"_")));
(void)(([&](){auto&& _n_array_26318=this->_n_horizon_26256;auto _n_index_26319=_n_c_26294;auto _n_value_26320=_n_r_26295;d::put(_n_array_26318,_n_index_26319,_n_value_26320);return _n_value_26320;})());
if(((d::truth((((_n_m_26297-_n_n_26296)+1.0)<_n_SLIVER_26246))&&d::truth((_n_n_26296>0.0)))&&d::truth((_n_m_26297<(this->_n_cols_26248-1.0))))){d::check_cancel();continue;
}
if((d::truth((_n_ch_26301!=d::String(u"_")))&&d::truth(([&]()->bool{auto _n_logical_26321=(d::at(d::at(this->_n_owner_26255,_n_r_26295),(_n_c_26294-1.0))>_n_i_26288);return d::truth(_n_logical_26321)?_n_logical_26321:(d::at(d::at(this->_n_owner_26255,_n_r_26295),(_n_c_26294+1.0))>_n_i_26288);})()))){d::check_cancel();continue;
}
if((d::truth((_n_ch_26301!=d::String(u"_")))&&d::truth(d::some(d::Array<double,false>{(_n_c_26294-2.0),(_n_c_26294+2.0)},[&]( double _a0) mutable ->bool{double _n_k_26302=_a0;
return ([&]()->bool{auto _n_logical_26322=(d::at(d::at(this->_n_owner_26255,_n_r_26295),_n_k_26302)>_n_i_26288);return d::truth(_n_logical_26322)?(d::at(d::at(this->_n_g_26254,_n_r_26295),_n_k_26302)==_n_ch_26301):_n_logical_26322;})();})))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_26323=d::at(this->_n_g_26254,_n_r_26295);auto _n_index_26324=_n_c_26294;auto _n_value_26325=_n_ch_26301;d::put(_n_array_26323,_n_index_26324,_n_value_26325);return _n_value_26325;})());
(void)(([&](){auto&& _n_array_26326=d::at(this->_n_owner_26255,_n_r_26295);auto _n_index_26327=_n_c_26294;auto _n_value_26328=_n_i_26288;d::put(_n_array_26326,_n_index_26327,_n_value_26328);return _n_value_26328;})());
if(d::truth((d::sign((_n_b_26299-_n_a_26298))==_n_shade_26285))){d::check_cancel();{double _n_k_26303=(_n_r_26295+1.0);
for(;(d::truth((_n_k_26303<=_n_R_26289))&&d::truth((_n_k_26303<_n_below_26300)));(void)((_n_k_26303++))){d::check_cancel();(void)(([&](){auto&& _n_array_26329=d::at(this->_n_g_26254,_n_k_26303);auto _n_index_26330=_n_c_26294;auto _n_value_26331=d::String(u".");d::put(_n_array_26329,_n_index_26330,_n_value_26331);return _n_value_26331;})());
}}
}
}}
}}
return d::join(d::map(this->_n_g_26254,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_26304=_a0;
return d::join(_n_row_26304,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("ruled-mountains").cols)*ascii::catalog_meta("ruled-mountains").rows);auto _env=std::make_shared<_n_Record_26305>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &ruled_mountains_meta(){return catalog_meta("ruled-mountains");}
std::unique_ptr<Piece> make_ruled_mountains(const AsciiPieceOptions &o){return std::make_unique<Native_ruled_mountains>(o);}
}
