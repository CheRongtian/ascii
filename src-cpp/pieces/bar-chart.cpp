// Direct, statically typed C++ from src/pieces/bar-chart.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_2166;
struct _n_Record_2167;
struct _n_Record_2168;
struct _n_Record_2262;
struct _n_Record_2263;
struct _n_Record_2166{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_2167> _p_options{};
static std::shared_ptr<_n_Record_2166> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2166>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_2167>>(j["options"]);return out;}
};
struct _n_Record_2167{
d::String _p_title{};
d::Array<d::String,false> _p_labels{};
d::Array<std::shared_ptr<_n_Record_2168>,false> _p_datasets{};
static std::shared_ptr<_n_Record_2167> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2167>();out->_p_title=d::decode<d::String>(j["title"]);out->_p_labels=d::decode<d::Array<d::String,false>>(j["labels"]);out->_p_datasets=d::decode<d::Array<std::shared_ptr<_n_Record_2168>,false>>(j["datasets"]);return out;}
};
struct _n_Record_2168{
d::String _p_name{};
d::Array<double,false> _p_values{};
static std::shared_ptr<_n_Record_2168> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2168>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_values=d::decode<d::Array<double,false>>(j["values"]);return out;}
};
struct _n_Record_2262{
std::optional<d::String> _p_title{};
std::optional<d::Array<d::String,false>> _p_labels{};
std::optional<d::Array<std::shared_ptr<_n_Record_2168>,false>> _p_datasets{};
static std::shared_ptr<_n_Record_2262> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2262>();out->_p_title=d::decode<std::optional<d::String>>(j["title"]);out->_p_labels=d::decode<std::optional<d::Array<d::String,false>>>(j["labels"]);out->_p_datasets=d::decode<std::optional<d::Array<std::shared_ptr<_n_Record_2168>,false>>>(j["datasets"]);return out;}
};
struct _n_Record_2263{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_2263> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2263>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_niceStep_2175(double _a0);
std::shared_ptr<_n_Record_2166> _n_meta_2165=[](){return ([&](){auto _n_object_2270=std::make_shared<_n_Record_2166>();_n_object_2270->_p_name=d::String(u"bar chart");_n_object_2270->_p_category=d::String(u"data");_n_object_2270->_p_note=d::String(u"bars easing between three datasets, values riding on top");_n_object_2270->_p_cols=60.0;_n_object_2270->_p_rows=19.0;_n_object_2270->_p_fps=24.0;_n_object_2270->_p_options=([&](){auto _n_object_2273=std::make_shared<_n_Record_2167>();_n_object_2273->_p_title=d::String(u"visits by day");_n_object_2273->_p_labels=d::Array<d::String,false>{d::String(u"mon"),d::String(u"tue"),d::String(u"wed"),d::String(u"thu"),d::String(u"fri"),d::String(u"sat"),d::String(u"sun")};_n_object_2273->_p_datasets=d::Array<std::shared_ptr<_n_Record_2168>,false>{([&](){auto _n_object_2276=std::make_shared<_n_Record_2168>();_n_object_2276->_p_name=d::String(u"week 1");_n_object_2276->_p_values=d::Array<double,false>{320.0,410.0,380.0,460.0,540.0,240.0,180.0};return _n_object_2276;})(),([&](){auto _n_object_2278=std::make_shared<_n_Record_2168>();_n_object_2278->_p_name=d::String(u"week 2");_n_object_2278->_p_values=d::Array<double,false>{210.0,480.0,300.0,560.0,390.0,340.0,150.0};return _n_object_2278;})(),([&](){auto _n_object_2280=std::make_shared<_n_Record_2168>();_n_object_2280->_p_name=d::String(u"week 3");_n_object_2280->_p_values=d::Array<double,false>{450.0,290.0,520.0,380.0,580.0,160.0,270.0};return _n_object_2280;})()};return _n_object_2273;})();return _n_object_2270;})();}();
const d::String _n_EIGHTHS_2169=[](){return d::String(u"▁▂▃▄▅▆▇");}();
const double _n_PH_2170=[](){return 12.0;}();
const double _n_BW_2171=[](){return 4.0;}();
const double _n_HOLD_2172=[](){return 1.4;}();
const double _n_MOVE_2173=[](){return 1.0;}();
const double _n_START_2174=[](){return 0.8;}();
double _n_niceStep_2175(double _a0){double _n_max_2201=_a0;
{
double _n_raw_2202=(_n_max_2201/4.0);
double _n_mag_2203=std::pow(10.0,std::floor(std::log10(_n_raw_2202)));
for(auto &&_n_item_2281:d::Array<double,false>{1.0,2.0,2.5,5.0,10.0}){d::check_cancel();double _n_m_2204=_n_item_2281;
if(d::truth(((_n_m_2204*_n_mag_2203)>=_n_raw_2202))){d::check_cancel();return (_n_m_2204*_n_mag_2203);
}
}
return (10.0*_n_mag_2203);

}
}

struct Native_bar_chart final:ascii::Piece{
d::String _n_title_2176{};
d::Array<d::String,false> _n_labels_2177{};
d::Array<std::shared_ptr<_n_Record_2168>,false> _n_datasets_2178{};
double _n_cols_2180{};
double _n_rows_2181{};
double _n_n_2182{};
double _n_peak_2183{};
double _n_step_2184{};
double _n_top_2185{};
double _n_ticks_2186{};
d::Array<d::String,false> _n_tickLabels_2187{};
double _n_LW_2188{};
double _n_gap_2189{};
double _n_PW_2190{};
double _n_X0_2191{};
double _n_AX_2192{};
d::Array<double,false> _n_bx_2193{};
double _n_AY_2194{};
d::Array<double,false> _n_gridRows_2195{};
d::Array<d::Array<d::String,false>,false> _n_base_2196{};
d::Array<d::Array<d::String,false>,false> _n_grid_2199{};
std::function<d::String(double,std::shared_ptr<_n_Record_2263>)> _render;
void _n_put_2197(double _a0,double _a1,d::String _a2){double _n_r_2211=_a0;
double _n_c_2212=_a1;
d::String _n_s_2213=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_2334;for(const auto &_v:_n_s_2213)_n_array_2334.push(_v);return _n_array_2334;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_2214=_a0;
double _n_i_2215=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_2335=((_n_c_2212+_n_i_2215)<this->_n_cols_2180);return d::truth(_n_logical_2335)?std::variant<d::String,bool>(([&](){auto&& _n_array_2336=d::at(this->_n_base_2196,_n_r_2211);auto _n_index_2337=(_n_c_2212+_n_i_2215);auto _n_value_2338=_n_ch_2214;d::put(_n_array_2336,_n_index_2337,_n_value_2338);return _n_value_2338;})()):std::variant<d::String,bool>(_n_logical_2335);})();});}

double _n_ease_2198(double _a0){double _n_x_2223=_a0;
return (d::truth((_n_x_2223<0.5))?(((4.0*_n_x_2223)*_n_x_2223)*_n_x_2223):(1.0-(std::pow((((-d::number(2.0))*_n_x_2223)+2.0),3.0)/2.0)));}

explicit Native_bar_chart(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_2282=d::decode<std::shared_ptr<_n_Record_2262>>(_options.data);
this->_n_title_2176=(d::present(_n_binding_2282->_p_title)?d::read(_n_binding_2282->_p_title):_n_meta_2165->_p_options->_p_title);
this->_n_labels_2177=(d::present(_n_binding_2282->_p_labels)?d::read(_n_binding_2282->_p_labels):_n_meta_2165->_p_options->_p_labels);
this->_n_datasets_2178=(d::present(_n_binding_2282->_p_datasets)?d::read(_n_binding_2282->_p_datasets):_n_meta_2165->_p_options->_p_datasets);
auto _n_binding_2283=_n_meta_2165;
this->_n_cols_2180=_n_binding_2283->_p_cols;
this->_n_rows_2181=_n_binding_2283->_p_rows;
this->_n_n_2182=double(this->_n_labels_2177.size());
this->_n_peak_2183=([&](){d::Array<double> _n_numbers_2284;_n_numbers_2284.push(1.0);for(auto _x:d::flatMap(this->_n_datasets_2178,[&]( std::shared_ptr<_n_Record_2168> _a0) mutable ->d::Array<double,false>{std::shared_ptr<_n_Record_2168> _n_d_2205=_a0;
return _n_d_2205->_p_values;}))_n_numbers_2284.push(_x);return d::maximum(_n_numbers_2284);})();
this->_n_step_2184=_n_niceStep_2175(this->_n_peak_2183);
this->_n_top_2185=(std::ceil((this->_n_peak_2183/this->_n_step_2184))*this->_n_step_2184);
this->_n_ticks_2186=(this->_n_top_2185/this->_n_step_2184);
this->_n_tickLabels_2187=d::Array<d::String,false>(d::from((this->_n_ticks_2186+1.0),[&]( d::Nil _a0,double _a1) mutable ->d::String{double _n_i_2207=_a1;
return d::string((_n_i_2207*this->_n_step_2184));}));
this->_n_LW_2188=([&](){d::Array<double> _n_numbers_2285;for(auto _x:d::map(this->_n_tickLabels_2187,[&]( d::String _a0) mutable ->double{d::String _n_s_2208=_a0;
return double(_n_s_2208.size());}))_n_numbers_2285.push(_x);return d::maximum(_n_numbers_2285);})();
this->_n_gap_2189=([&](){auto _n_argument_2286=1.0;auto _n_argument_2287=([&](){auto _n_argument_2288=3.0;auto _n_argument_2289=std::floor(((((this->_n_cols_2180-4.0)-this->_n_LW_2188)-(this->_n_n_2182*_n_BW_2171))/(this->_n_n_2182+1.0)));return d::minimum({_n_argument_2288,_n_argument_2289});})();return d::maximum({_n_argument_2286,_n_argument_2287});})();
this->_n_PW_2190=((this->_n_n_2182*_n_BW_2171)+((this->_n_n_2182+1.0)*this->_n_gap_2189));
this->_n_X0_2191=std::floor(((this->_n_cols_2180-((this->_n_LW_2188+1.0)+this->_n_PW_2190))/2.0));
this->_n_AX_2192=(this->_n_X0_2191+this->_n_LW_2188);
this->_n_bx_2193=d::Array<double,false>(d::from(this->_n_n_2182,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_i_2210=_a1;
return (((this->_n_AX_2192+1.0)+this->_n_gap_2189)+(_n_i_2210*(_n_BW_2171+this->_n_gap_2189)));}));
this->_n_AY_2194=(4.0+_n_PH_2170);
this->_n_gridRows_2195=d::Array<double,false>{};
this->_n_base_2196=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_2181,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_2180)).fill(d::String(u" "));}));
(void)(([&](){auto _n_argument_2290=1.0;auto _n_argument_2291=this->_n_X0_2191;auto _n_argument_2292=d::string(this->_n_title_2176);return this->_n_put_2197(_n_argument_2290,_n_argument_2291,_n_argument_2292);})());
{double _n_r_2216=4.0;
for(;d::truth((_n_r_2216<this->_n_AY_2194));(void)((_n_r_2216++))){d::check_cancel();(void)(([&](){auto&& _n_array_2293=d::at(this->_n_base_2196,_n_r_2216);auto _n_index_2294=this->_n_AX_2192;auto _n_value_2295=d::String(u"│");d::put(_n_array_2293,_n_index_2294,_n_value_2295);return _n_value_2295;})());
}}
(void)(d::forEach(this->_n_tickLabels_2187,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_2217=_a0;
double _n_i_2218=_a1;
{
double _n_r_2219=(this->_n_AY_2194-d::round(((_n_i_2218*_n_PH_2170)/this->_n_ticks_2186)));
(void)(this->_n_put_2197(_n_r_2219,((this->_n_AX_2192-1.0)-double(_n_s_2217.size())),_n_s_2217));
if(d::truth((_n_i_2218==0.0))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_2296=d::at(this->_n_base_2196,_n_r_2219);auto _n_index_2297=this->_n_AX_2192;auto _n_value_2298=d::String(u"┤");d::put(_n_array_2296,_n_index_2297,_n_value_2298);return _n_value_2298;})());
(void)(this->_n_gridRows_2195.push(_n_r_2219));

}
}));
(void)(([&](){auto&& _n_array_2299=d::at(this->_n_base_2196,this->_n_AY_2194);auto _n_index_2300=this->_n_AX_2192;auto _n_value_2301=d::String(u"└");d::put(_n_array_2299,_n_index_2300,_n_value_2301);return _n_value_2301;})());
{double _n_c_2220=(this->_n_AX_2192+1.0);
for(;d::truth((_n_c_2220<=(this->_n_AX_2192+this->_n_PW_2190)));(void)((_n_c_2220++))){d::check_cancel();(void)(([&](){auto&& _n_array_2302=d::at(this->_n_base_2196,this->_n_AY_2194);auto _n_index_2303=_n_c_2220;auto _n_value_2304=d::String(u"─");d::put(_n_array_2302,_n_index_2303,_n_value_2304);return _n_value_2304;})());
}}
(void)(d::forEach(this->_n_labels_2177,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_2221=_a0;
double _n_i_2222=_a1;
([&](){auto _n_argument_2305=(this->_n_AY_2194+1.0);auto _n_argument_2306=(d::at(this->_n_bx_2193,_n_i_2222)+std::floor(((_n_BW_2171-double(d::string(_n_s_2221).size()))/2.0)));auto _n_argument_2307=d::slice(d::string(_n_s_2221),0.0,(_n_BW_2171+this->_n_gap_2189));return this->_n_put_2197(_n_argument_2305,_n_argument_2306,_n_argument_2307);})();}));
this->_n_grid_2199=d::map(this->_n_base_2196,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_2224=_a0;
return _n_row_2224.slice();});
_render=[=]( double _a0,std::shared_ptr<_n_Record_2263> _a1) mutable ->d::String{double _n_t_2225=_a0;
{
double _n_cycle_2226=(_n_HOLD_2172+_n_MOVE_2173);
double _n_tt_2227=(_n_t_2225+_n_START_2174);
double _n_k_2228=std::floor((_n_tt_2227/_n_cycle_2226));
double _n_u_2229=d::maximum({0.0,(((_n_tt_2227-(_n_k_2228*_n_cycle_2226))-_n_HOLD_2172)/_n_MOVE_2173)});
std::shared_ptr<_n_Record_2168> _n_a_2230=d::at(this->_n_datasets_2178,d::mod(_n_k_2228,double(this->_n_datasets_2178.size())));
std::shared_ptr<_n_Record_2168> _n_b_2231=d::at(this->_n_datasets_2178,d::mod((_n_k_2228+1.0),double(this->_n_datasets_2178.size())));
double _n_e_2232=this->_n_ease_2198(_n_u_2229);
double _n_live_2233=(d::truth((_n_e_2232<0.5))?d::mod(_n_k_2228,double(this->_n_datasets_2178.size())):d::mod((_n_k_2228+1.0),double(this->_n_datasets_2178.size())));
{double _n_r_2234=0.0;
for(;d::truth((_n_r_2234<this->_n_rows_2181));(void)((_n_r_2234++))){d::check_cancel();{double _n_c_2235=0.0;
for(;d::truth((_n_c_2235<this->_n_cols_2180));(void)((_n_c_2235++))){d::check_cancel();(void)(([&](){auto&& _n_array_2308=d::at(this->_n_grid_2199,_n_r_2234);auto _n_index_2309=_n_c_2235;auto _n_value_2310=d::at(d::at(this->_n_base_2196,_n_r_2234),_n_c_2235);d::put(_n_array_2308,_n_index_2309,_n_value_2310);return _n_value_2310;})());
}}
}}
d::String _n_tabs_2236=d::join(d::map(this->_n_datasets_2178,[&]( std::shared_ptr<_n_Record_2168> _a0,double _a1) mutable ->d::String{std::shared_ptr<_n_Record_2168> _n_d_2237=_a0;
double _n_i_2238=_a1;
return (d::truth((_n_i_2238==_n_live_2233))?(d::string((d::string(d::String(u"["))+d::string(_n_d_2237->_p_name)))+d::string(d::String(u"]"))):(d::string((d::string(d::String(u" "))+d::string(_n_d_2237->_p_name)))+d::string(d::String(u" "))));}),d::String(u" "));
(void)(d::forEach(([&](){d::Array<d::String,false> _n_array_2311;for(const auto &_v:_n_tabs_2236)_n_array_2311.push(_v);return _n_array_2311;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_2239=_a0;
double _n_i_2240=_a1;
return ([&](){auto&& _n_array_2312=d::at(this->_n_grid_2199,1.0);auto _n_index_2313=((((this->_n_AX_2192+this->_n_PW_2190)+1.0)-double(_n_tabs_2236.size()))+_n_i_2240);auto _n_value_2314=_n_ch_2239;d::put(_n_array_2312,_n_index_2313,_n_value_2314);return _n_value_2314;})();}));
d::Array<d::Array<double,false>,false> _n_tops_2241=d::Array<d::Array<double,false>,false>{};
{double _n_i_2242=0.0;
for(;d::truth((_n_i_2242<this->_n_n_2182));(void)((_n_i_2242++))){d::check_cancel();double _n_v_2243=((([&]()->double{auto _n_logical_2315=d::at(_n_a_2230->_p_values,_n_i_2242);return d::has(_n_a_2230->_p_values,_n_i_2242)?_n_logical_2315:0.0;})()*(1.0-_n_e_2232))+(([&]()->double{auto _n_logical_2316=d::at(_n_b_2231->_p_values,_n_i_2242);return d::has(_n_b_2231->_p_values,_n_i_2242)?_n_logical_2316:0.0;})()*_n_e_2232));
double _n_h_2244=d::round((((_n_v_2243/this->_n_top_2185)*_n_PH_2170)*8.0));
double _n_full_2245=double(d::i32(_n_h_2244)>>(d::u32(3.0)&31));
double _n_part_2246=double(d::i32(_n_h_2244)&d::i32(7.0));
{double _n_r_2247=0.0;
for(;d::truth((_n_r_2247<_n_full_2245));(void)((_n_r_2247++))){d::check_cancel();{double _n_c_2248=0.0;
for(;d::truth((_n_c_2248<_n_BW_2171));(void)((_n_c_2248++))){d::check_cancel();(void)(([&](){auto&& _n_array_2317=d::at(this->_n_grid_2199,((this->_n_AY_2194-1.0)-_n_r_2247));auto _n_index_2318=(d::at(this->_n_bx_2193,_n_i_2242)+_n_c_2248);auto _n_value_2319=d::String(u"█");d::put(_n_array_2317,_n_index_2318,_n_value_2319);return _n_value_2319;})());
}}
}}
if(d::truth(_n_part_2246)){d::check_cancel();{double _n_c_2249=0.0;
for(;d::truth((_n_c_2249<_n_BW_2171));(void)((_n_c_2249++))){d::check_cancel();(void)(([&](){auto&& _n_array_2320=d::at(this->_n_grid_2199,((this->_n_AY_2194-1.0)-_n_full_2245));auto _n_index_2321=(d::at(this->_n_bx_2193,_n_i_2242)+_n_c_2249);auto _n_value_2322=d::at(_n_EIGHTHS_2169,(_n_part_2246-1.0));d::put(_n_array_2320,_n_index_2321,_n_value_2322);return _n_value_2322;})());
}}
}
(void)(_n_tops_2241.push(d::Array<double,false>{_n_v_2243,(((this->_n_AY_2194-1.0)-_n_full_2245)-(d::truth(_n_part_2246)?1.0:0.0))}));
}}
for(auto &&_n_item_2323:this->_n_gridRows_2195){d::check_cancel();double _n_r_2250=_n_item_2323;
{double _n_c_2251=(this->_n_AX_2192+1.0);
for(;d::truth((_n_c_2251<=(this->_n_AX_2192+this->_n_PW_2190)));(void)((_n_c_2251++))){d::check_cancel();bool _n_near_2252=d::some(this->_n_bx_2193,[&]( double _a0,double _a1) mutable ->bool{double _n_x_2253=_a0;
double _n_i_2254=_a1;
return ([&]()->bool{auto _n_logical_2324=([&]()->bool{auto _n_logical_2325=(_n_c_2251>=(_n_x_2253-1.0));return d::truth(_n_logical_2325)?(_n_c_2251<=(_n_x_2253+_n_BW_2171)):_n_logical_2325;})();return d::truth(_n_logical_2324)?(_n_r_2250>=d::at(d::at(_n_tops_2241,_n_i_2254),1.0)):_n_logical_2324;})();});
if(d::truth((!d::truth(_n_near_2252)))){d::check_cancel();(void)(([&](){auto&& _n_array_2326=d::at(this->_n_grid_2199,_n_r_2250);auto _n_index_2327=_n_c_2251;auto _n_value_2328=d::String(u"┈");d::put(_n_array_2326,_n_index_2327,_n_value_2328);return _n_value_2328;})());
}
}}
}
(void)(d::forEach(_n_tops_2241,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_2329=_a0;
double _n_v_2255=d::at(_n_binding_2329,0.0);
double _n_lr_2256=d::at(_n_binding_2329,1.0);
double _n_i_2257=_a1;
{
d::String _n_label_2258=d::string(d::round(_n_v_2255));
(void)(d::forEach(([&](){d::Array<d::String,false> _n_array_2330;for(const auto &_v:_n_label_2258)_n_array_2330.push(_v);return _n_array_2330;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_2259=_a0;
double _n_j_2260=_a1;
return ([&](){auto&& _n_array_2331=d::at(this->_n_grid_2199,_n_lr_2256);auto _n_index_2332=((d::at(this->_n_bx_2193,_n_i_2257)+std::floor(((_n_BW_2171-double(_n_label_2258.size()))/2.0)))+_n_j_2260);auto _n_value_2333=_n_ch_2259;d::put(_n_array_2331,_n_index_2332,_n_value_2333);return _n_value_2333;})();}));

}
}));
return d::join(d::map(this->_n_grid_2199,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_2261=_a0;
return d::join(_n_row_2261,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("bar-chart").cols)*ascii::catalog_meta("bar-chart").rows);auto _env=std::make_shared<_n_Record_2263>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &bar_chart_meta(){return catalog_meta("bar-chart");}
std::unique_ptr<Piece> make_bar_chart(const AsciiPieceOptions &o){return std::make_unique<Native_bar_chart>(o);}
}
