// Direct, statically typed C++ from src/pieces/ruled-mountains.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26239;
struct _n_Record_26304;
struct _n_Record_26239{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_26239> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26239>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_26304{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26304> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26304>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_26239> _n_meta_26238=[](){return ([&](){auto _n_object_26307=std::make_shared<_n_Record_26239>();_n_object_26307->_p_name=d::String(u"ruled mountains");_n_object_26307->_p_category=d::String(u"nature");_n_object_26307->_p_note=d::String(u"ruled lines with a range rising from them, drifting forward");_n_object_26307->_p_cols=64.0;_n_object_26307->_p_rows=20.0;_n_object_26307->_p_fps=10.0;return _n_object_26307;})();}();
const double _n_N_26240=[](){return 6.0;}();
const double _n_GAP_26241=[](){return 3.0;}();
d::Array<double,false> _n_AMP_26242=[](){return d::Array<double,false>{5.0,5.5,6.0,6.6,7.2,8.0};}();
const double _n_SPEED_26243=[](){return 0.2;}();
const double _n_START_26244=[](){return 30.0;}();
const double _n_SLIVER_26245=[](){return 3.0;}();
d::Array<std::array<double,10>,false> _n_PEAKS_26246=[](){return d::Array<std::array<double,10>,false>{std::array<double,10>{(-d::number(16.0)),3.0,0.55,2.0,1.0,0.0,0.71,0.4,0.93,1.9},std::array<double,10>{(-d::number(5.0)),3.0,0.85,3.0,2.0,(-d::number(4.0)),0.53,2.6,1.21,4.1},std::array<double,10>{6.0,3.0,1.0,2.0,4.0,5.0,0.97,4.4,0.67,0.3},std::array<double,10>{18.0,3.0,0.6,3.0,2.0,0.0,0.61,1.2,1.07,5.2}};}();

struct Native_ruled_mountains final:ascii::Piece{
double _n_cols_26247{};
double _n_rows_26248{};
double _n_mid_26249{};
d::Array<double,false> _n_base_26250{};
d::Array<double,true> _n_f_26251{};
d::Array<int16_t,true> _n_e_26252{};
d::Array<d::Array<d::String,false>,false> _n_g_26253{};
d::Array<d::Array<int8_t,true>,false> _n_owner_26254{};
d::Array<int16_t,true> _n_horizon_26255{};
d::Array<int16_t,true> _n_seen_26256{};
std::function<d::String(double,std::shared_ptr<_n_Record_26304>)> _render;
double _n_tent_26257(double _a0,double _a1,double _a2){double _n_h_26261=_a0;
double _n_d_26262=_a1;
double _n_steep_26263=_a2;
return (_n_h_26261-(d::truth((_n_d_26262<_n_steep_26263))?_n_d_26262:(_n_steep_26263+((_n_d_26262-_n_steep_26263)/2.0))));}

void _n_profile_26258(double _a0,double _a1){double _n_s_26264=_a0;
double _n_amp_26265=_a1;
{
(void)(this->_n_f_26251.fill(0.0));
for(auto &&_n_item_26331:_n_PEAKS_26246){d::check_cancel();auto _n_binding_26332=_n_item_26331;
double _n_lane_26266=d::at(_n_binding_26332,0.0);
double _n_wander_26267=d::at(_n_binding_26332,1.0);
double _n_tall_26268=d::at(_n_binding_26332,2.0);
double _n_west_26269=d::at(_n_binding_26332,3.0);
double _n_east_26270=d::at(_n_binding_26332,4.0);
double _n_sub_26271=d::at(_n_binding_26332,5.0);
double _n_fm_26272=d::at(_n_binding_26332,6.0);
double _n_pm_26273=d::at(_n_binding_26332,7.0);
double _n_fa_26274=d::at(_n_binding_26332,8.0);
double _n_pa_26275=d::at(_n_binding_26332,9.0);
{
double _n_m_26276=((this->_n_mid_26249+_n_lane_26266)+(_n_wander_26267*std::sin(((_n_fm_26272*_n_s_26264)+_n_pm_26273))));
double _n_h_26277=((_n_amp_26265*_n_tall_26268)*(0.55+(0.45*std::sin(((_n_fa_26274*_n_s_26264)+_n_pa_26275)))));
{double _n_x_26278=0.0;
for(;d::truth((_n_x_26278<=this->_n_cols_26247));(void)((_n_x_26278++))){d::check_cancel();double _n_d_26279=(_n_x_26278-_n_m_26276);
double _n_y_26280=([&](){auto _n_argument_26333=_n_h_26277;auto _n_argument_26334=std::fabs(_n_d_26279);auto _n_argument_26335=(d::truth((_n_d_26279<0.0))?_n_west_26269:_n_east_26270);return this->_n_tent_26257(_n_argument_26333,_n_argument_26334,_n_argument_26335);})();
if(d::truth(_n_sub_26271)){d::check_cancel();(void)((_n_y_26280=([&](){auto _n_argument_26336=_n_y_26280;auto _n_argument_26337=([&](){auto _n_argument_26338=(_n_h_26277-2.0);auto _n_argument_26339=std::fabs((_n_d_26279-_n_sub_26271));auto _n_argument_26340=1.5;return this->_n_tent_26257(_n_argument_26338,_n_argument_26339,_n_argument_26340);})();return d::maximum({_n_argument_26336,_n_argument_26337});})()));
}
if(d::truth((_n_y_26280>d::at(this->_n_f_26251,_n_x_26278)))){d::check_cancel();(void)(([&](){auto&& _n_array_26341=this->_n_f_26251;auto _n_index_26342=_n_x_26278;auto _n_value_26343=_n_y_26280;d::put(_n_array_26341,_n_index_26342,_n_value_26343);return _n_value_26343;})());
}
}}

}
}
{double _n_x_26281=0.0;
for(;d::truth((_n_x_26281<=this->_n_cols_26247));(void)((_n_x_26281++))){d::check_cancel();(void)(([&](){auto&& _n_array_26344=this->_n_e_26252;auto _n_index_26345=_n_x_26281;auto _n_value_26346=([&](){auto _n_argument_26347=0.0;auto _n_argument_26348=d::round(d::at(this->_n_f_26251,_n_x_26281));return d::maximum({_n_argument_26347,_n_argument_26348});})();d::put(_n_array_26344,_n_index_26345,_n_value_26346);return _n_value_26346;})());
}}

}
}

explicit Native_ruled_mountains(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26308=_n_meta_26238;
this->_n_cols_26247=_n_binding_26308->_p_cols;
this->_n_rows_26248=_n_binding_26308->_p_rows;
this->_n_mid_26249=(this->_n_cols_26247/2.0);
this->_n_base_26250=d::Array<double,false>(d::from(_n_N_26240,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_i_26260=_a1;
return ((this->_n_rows_26248-1.0)-(((_n_N_26240-1.0)-_n_i_26260)*_n_GAP_26241));}));
this->_n_f_26251=d::Array<double,true>(size_t((this->_n_cols_26247+1.0)));
this->_n_e_26252=d::Array<int16_t,true>(size_t((this->_n_cols_26247+1.0)));
this->_n_g_26253=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_26248,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_26247));}));
this->_n_owner_26254=d::Array<d::Array<int8_t,true>,false>(d::from(this->_n_rows_26248,[&]( ) mutable ->d::Array<int8_t,true>{return d::Array<int8_t,true>(size_t(this->_n_cols_26247));}));
this->_n_horizon_26255=d::Array<int16_t,true>(size_t(this->_n_cols_26247));
this->_n_seen_26256=d::Array<int16_t,true>(size_t(this->_n_cols_26247));
_render=[=]( double _a0,std::shared_ptr<_n_Record_26304> _a1) mutable ->d::String{double _n_t_26282=_a0;
auto _n_binding_26311=(d::present(_a1)?_a1:([&](){auto _n_object_26310=std::make_shared<_n_Record_26304>();return _n_object_26310;})());
bool _n_paper_26283=(d::present(_n_binding_26311->_p_paper)?d::read(_n_binding_26311->_p_paper):false);
{
double _n_shade_26284=(d::truth(_n_paper_26283)?(-d::number(1.0)):1.0);
for(auto &&_n_item_26312:this->_n_g_26253){d::check_cancel();d::Array<d::String,false> _n_row_26285=_n_item_26312;
(void)(_n_row_26285.fill(d::String(u" ")));
}
for(auto &&_n_item_26313:this->_n_owner_26254){d::check_cancel();d::Array<int8_t,true> _n_row_26286=_n_item_26313;
(void)(_n_row_26286.fill((-d::number(1.0))));
}
(void)(this->_n_horizon_26255.fill(this->_n_rows_26248));
{double _n_i_26287=(_n_N_26240-1.0);
for(;d::truth((_n_i_26287>=0.0));(void)((_n_i_26287--))){d::check_cancel();double _n_R_26288=d::at(this->_n_base_26250,_n_i_26287);
(void)(this->_n_profile_26258(((_n_i_26287-((_n_START_26244+_n_t_26282)*_n_SPEED_26243))*0.9),d::at(_n_AMP_26242,_n_i_26287)));
{double _n_c_26289=0.0;
for(;d::truth((_n_c_26289<this->_n_cols_26247));(void)((_n_c_26289++))){d::check_cancel();double _n_a_26290=d::at(this->_n_e_26252,_n_c_26289);
double _n_b_26291=d::at(this->_n_e_26252,(_n_c_26289+1.0));
double _n_r_26292=((_n_R_26288-d::maximum({_n_a_26290,_n_b_26291}))+(d::truth((_n_a_26290==_n_b_26291))?0.0:1.0));
(void)(([&](){auto&& _n_array_26314=this->_n_seen_26256;auto _n_index_26315=_n_c_26289;auto _n_value_26316=((d::truth((_n_r_26292>=0.0))&&d::truth((_n_r_26292<d::at(this->_n_horizon_26255,_n_c_26289))))?_n_r_26292:(-d::number(1.0)));d::put(_n_array_26314,_n_index_26315,_n_value_26316);return _n_value_26316;})());
}}
{double _n_c_26293=0.0;
for(;d::truth((_n_c_26293<this->_n_cols_26247));(void)((_n_c_26293++))){d::check_cancel();double _n_r_26294=d::at(this->_n_seen_26256,_n_c_26293);
if(d::truth((_n_r_26294<0.0))){d::check_cancel();continue;
}
double _n_n_26295=_n_c_26293;
double _n_m_26296=_n_c_26293;
while((d::truth((_n_n_26295>0.0))&&d::truth((d::at(this->_n_seen_26256,(_n_n_26295-1.0))>=0.0)))){d::check_cancel();(void)((_n_n_26295--));
}
while((d::truth((_n_m_26296<(this->_n_cols_26247-1.0)))&&d::truth((d::at(this->_n_seen_26256,(_n_m_26296+1.0))>=0.0)))){d::check_cancel();(void)((_n_m_26296++));
}
double _n_a_26297=d::at(this->_n_e_26252,_n_c_26293);
double _n_b_26298=d::at(this->_n_e_26252,(_n_c_26293+1.0));
double _n_below_26299=d::at(this->_n_horizon_26255,_n_c_26293);
d::String _n_ch_26300=(d::truth((_n_b_26298>_n_a_26297))?d::String(u"/"):(d::truth((_n_b_26298<_n_a_26297))?d::String(u"\\"):d::String(u"_")));
(void)(([&](){auto&& _n_array_26317=this->_n_horizon_26255;auto _n_index_26318=_n_c_26293;auto _n_value_26319=_n_r_26294;d::put(_n_array_26317,_n_index_26318,_n_value_26319);return _n_value_26319;})());
if(((d::truth((((_n_m_26296-_n_n_26295)+1.0)<_n_SLIVER_26245))&&d::truth((_n_n_26295>0.0)))&&d::truth((_n_m_26296<(this->_n_cols_26247-1.0))))){d::check_cancel();continue;
}
if((d::truth((_n_ch_26300!=d::String(u"_")))&&d::truth(([&]()->bool{auto _n_logical_26320=(d::at(d::at(this->_n_owner_26254,_n_r_26294),(_n_c_26293-1.0))>_n_i_26287);return d::truth(_n_logical_26320)?_n_logical_26320:(d::at(d::at(this->_n_owner_26254,_n_r_26294),(_n_c_26293+1.0))>_n_i_26287);})()))){d::check_cancel();continue;
}
if((d::truth((_n_ch_26300!=d::String(u"_")))&&d::truth(d::some(d::Array<double,false>{(_n_c_26293-2.0),(_n_c_26293+2.0)},[&]( double _a0) mutable ->bool{double _n_k_26301=_a0;
return ([&]()->bool{auto _n_logical_26321=(d::at(d::at(this->_n_owner_26254,_n_r_26294),_n_k_26301)>_n_i_26287);return d::truth(_n_logical_26321)?(d::at(d::at(this->_n_g_26253,_n_r_26294),_n_k_26301)==_n_ch_26300):_n_logical_26321;})();})))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_26322=d::at(this->_n_g_26253,_n_r_26294);auto _n_index_26323=_n_c_26293;auto _n_value_26324=_n_ch_26300;d::put(_n_array_26322,_n_index_26323,_n_value_26324);return _n_value_26324;})());
(void)(([&](){auto&& _n_array_26325=d::at(this->_n_owner_26254,_n_r_26294);auto _n_index_26326=_n_c_26293;auto _n_value_26327=_n_i_26287;d::put(_n_array_26325,_n_index_26326,_n_value_26327);return _n_value_26327;})());
if(d::truth((d::sign((_n_b_26298-_n_a_26297))==_n_shade_26284))){d::check_cancel();{double _n_k_26302=(_n_r_26294+1.0);
for(;(d::truth((_n_k_26302<=_n_R_26288))&&d::truth((_n_k_26302<_n_below_26299)));(void)((_n_k_26302++))){d::check_cancel();(void)(([&](){auto&& _n_array_26328=d::at(this->_n_g_26253,_n_k_26302);auto _n_index_26329=_n_c_26293;auto _n_value_26330=d::String(u".");d::put(_n_array_26328,_n_index_26329,_n_value_26330);return _n_value_26330;})());
}}
}
}}
}}
return d::join(d::map(this->_n_g_26253,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_26303=_a0;
return d::join(_n_row_26303,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("ruled-mountains").cols)*ascii::catalog_meta("ruled-mountains").rows);auto _env=std::make_shared<_n_Record_26304>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &ruled_mountains_meta(){return catalog_meta("ruled-mountains");}
std::unique_ptr<Piece> make_ruled_mountains(const AsciiPieceOptions &o){return std::make_unique<Native_ruled_mountains>(o);}
}
