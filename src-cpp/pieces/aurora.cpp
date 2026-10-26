// Direct, statically typed C++ from src/pieces/aurora.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_2045;
struct _n_Record_2059;
struct _n_Record_2109;
struct _n_Record_2045{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_2045> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2045>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_2059{
double _p_k{};
bool _p_bright{};
double _p_rate{};
double _p_ph{};
static std::shared_ptr<_n_Record_2059> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2059>();out->_p_k=d::decode<double>(j["k"]);out->_p_bright=d::decode<bool>(j["bright"]);out->_p_rate=d::decode<double>(j["rate"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_2109{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_2109> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2109>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_2050(double _a0);
double _n_hash_2051(double _a0,double _a1);
double _n_ease_2052(double _a0);
double _n_noise_2053(double _a0,double _a1);
std::shared_ptr<_n_Record_2045> _n_meta_2044=[](){return ([&](){auto _n_object_2112=std::make_shared<_n_Record_2045>();_n_object_2112->_p_name=d::String(u"aurora");_n_object_2112->_p_category=d::String(u"nature");_n_object_2112->_p_note=d::String(u"an aurora curtain rippling over a treeline under stars");_n_object_2112->_p_cols=64.0;_n_object_2112->_p_rows=20.0;_n_object_2112->_p_fps=20.0;return _n_object_2112;})();}();
const d::String _n_RAMP_2046=[](){return d::String(u" .:!|I");}();
const double _n_TAU_2047=[](){return (ascii::PI*2.0);}();
const double _n_HEM_2048=[](){return 12.0;}();
const double _n_RIDGE_2049=[](){return 18.0;}();
std::function<double()> _n_mulberry32_2050(double _a0){double _n_a_2062=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_2062=double(d::i32((_n_a_2062+1831565813.0))|d::i32(0.0))));
double _n_t_2063=d::imul(double(d::i32(_n_a_2062)^d::i32(double(d::u32(_n_a_2062)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_2062)));
(void)((_n_t_2063=double(d::i32((_n_t_2063+d::imul(double(d::i32(_n_t_2063)^d::i32(double(d::u32(_n_t_2063)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_2063)))))^d::i32(_n_t_2063))));
return (double(d::u32(double(d::i32(_n_t_2063)^d::i32(double(d::u32(_n_t_2063)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

double _n_hash_2051(double _a0,double _a1){double _n_x_2064=_a0;
double _n_y_2065=_a1;
{
double _n_h_2066=([&](){auto _n_left_2113=d::imul(_n_x_2064,668265261.0);auto _n_right_2114=d::imul(_n_y_2065,374761393.0);return double(d::i32(_n_left_2113)^d::i32(_n_right_2114));})();
(void)((_n_h_2066=d::imul(double(d::i32(_n_h_2066)^d::i32(double(d::u32(_n_h_2066)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_2066=d::imul(double(d::i32(_n_h_2066)^d::i32(double(d::u32(_n_h_2066)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_2066)^d::i32(double(d::u32(_n_h_2066)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_2052(double _a0){double _n_t_2067=_a0;
return ((_n_t_2067*_n_t_2067)*(3.0-(2.0*_n_t_2067)));}

double _n_noise_2053(double _a0,double _a1){double _n_x_2068=_a0;
double _n_y_2069=_a1;
{
double _n_i_2070=std::floor(_n_x_2068);
double _n_j_2071=std::floor(_n_y_2069);
double _n_u_2072=_n_ease_2052((_n_x_2068-_n_i_2070));
double _n_v_2073=_n_ease_2052((_n_y_2069-_n_j_2071));
double _n_a_2074=_n_hash_2051(_n_i_2070,_n_j_2071);
double _n_b_2075=_n_hash_2051((_n_i_2070+1.0),_n_j_2071);
double _n_c_2076=_n_hash_2051(_n_i_2070,(_n_j_2071+1.0));
double _n_d_2077=_n_hash_2051((_n_i_2070+1.0),(_n_j_2071+1.0));
return (((_n_a_2074+((_n_b_2075-_n_a_2074)*_n_u_2072))+((_n_c_2076-_n_a_2074)*_n_v_2073))+(((((_n_a_2074-_n_b_2075)-_n_c_2076)+_n_d_2077)*_n_u_2072)*_n_v_2073));

}
}

struct Native_aurora final:ascii::Piece{
double _n_cols_2054{};
double _n_rows_2055{};
std::function<double()> _n_rand_2056{};
d::Array<std::optional<d::String>,false> _n_land_2057{};
d::Array<std::shared_ptr<_n_Record_2059>,false> _n_stars_2058{};
d::Array<float,true> _n_field_2060{};
d::Array<d::String,false> _n_out_2061{};
std::function<d::String(double,std::shared_ptr<_n_Record_2109>)> _render;

explicit Native_aurora(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_2115=_n_meta_2044;
this->_n_cols_2054=_n_binding_2115->_p_cols;
this->_n_rows_2055=_n_binding_2115->_p_rows;
this->_n_rand_2056=_n_mulberry32_2050(5.0);
this->_n_land_2057=d::Array<std::optional<d::String>,false>(size_t((this->_n_cols_2054*this->_n_rows_2055))).fill(std::optional<d::String>{});
{double _n_c_2078=0.0;
for(;d::truth((_n_c_2078<this->_n_cols_2054));(void)((_n_c_2078++))){d::check_cancel();(void)(([&](){auto&& _n_array_2116=this->_n_land_2057;auto _n_index_2117=(_n_c_2078+(_n_RIDGE_2049*this->_n_cols_2054));auto _n_value_2118=(d::truth((std::sin(((_n_c_2078*0.13)+1.0))>0.3))?std::optional<d::String>(d::String(u"█")):std::optional<d::String>(d::String(u"▄")));d::put(_n_array_2116,_n_index_2117,_n_value_2118);return _n_value_2118;})());
{double _n_r_2079=(_n_RIDGE_2049+1.0);
for(;d::truth((_n_r_2079<this->_n_rows_2055));(void)((_n_r_2079++))){d::check_cancel();(void)(([&](){auto&& _n_array_2119=this->_n_land_2057;auto _n_index_2120=(_n_c_2078+(_n_r_2079*this->_n_cols_2054));auto _n_value_2121=std::optional<d::String>(d::String(u"█"));d::put(_n_array_2119,_n_index_2120,_n_value_2121);return _n_value_2121;})());
}}
}}
{double _n_x_2080=(1.0+std::floor((this->_n_rand_2056()*2.0)));
for(;d::truth((_n_x_2080<(this->_n_cols_2054-1.0)));){d::check_cancel();double _n_tall_2081=(2.0+std::floor(([&](){auto _n_left_2122=(this->_n_rand_2056()*2.2);auto _n_right_2123=(([&](){auto _n_left_2124=this->_n_rand_2056();auto _n_right_2125=this->_n_rand_2056();return (_n_left_2124*_n_right_2125);})()*2.5);return (_n_left_2122+_n_right_2123);})()));
{double _n_k_2082=0.0;
for(;d::truth((_n_k_2082<_n_tall_2081));(void)((_n_k_2082++))){d::check_cancel();double _n_r_2083=((_n_RIDGE_2049-_n_tall_2081)+_n_k_2082);
double _n_half_2084=(1.0+double(d::i32(_n_k_2082)>>(d::u32(1.0)&31)));
{double _n_c_2085=((_n_x_2080-_n_half_2084)+1.0);
for(;d::truth((_n_c_2085<=(_n_x_2080+_n_half_2084)));(void)((_n_c_2085++))){d::check_cancel();if((d::truth((_n_c_2085<0.0))||d::truth((_n_c_2085>=this->_n_cols_2054)))){d::check_cancel();continue;
}
bool _n_left_2086=(_n_c_2085==((_n_x_2080-_n_half_2084)+1.0));
bool _n_right_2087=(_n_c_2085==(_n_x_2080+_n_half_2084));
(void)(([&](){auto&& _n_array_2126=this->_n_land_2057;auto _n_index_2127=(_n_c_2085+(_n_r_2083*this->_n_cols_2054));auto _n_value_2128=(d::truth(_n_left_2086)?(d::truth(double(d::i32(_n_k_2082)&d::i32(1.0)))?std::optional<d::String>(d::String(u"▟")):std::optional<d::String>(d::String(u"▗"))):(d::truth(_n_right_2087)?(d::truth(double(d::i32(_n_k_2082)&d::i32(1.0)))?std::optional<d::String>(d::String(u"▙")):std::optional<d::String>(d::String(u"▖"))):std::optional<d::String>(d::String(u"█"))));d::put(_n_array_2126,_n_index_2127,_n_value_2128);return _n_value_2128;})());
}}
}}
{double _n_c_2088=(_n_x_2080-double(d::i32(_n_tall_2081)>>(d::u32(1.0)&31)));
for(;d::truth((_n_c_2088<=((_n_x_2080+1.0)+double(d::i32(_n_tall_2081)>>(d::u32(1.0)&31)))));(void)((_n_c_2088++))){d::check_cancel();if((d::truth((_n_c_2088>=0.0))&&d::truth((_n_c_2088<this->_n_cols_2054)))){d::check_cancel();(void)(([&](){auto&& _n_array_2129=this->_n_land_2057;auto _n_index_2130=(_n_c_2088+(_n_RIDGE_2049*this->_n_cols_2054));auto _n_value_2131=std::optional<d::String>(d::String(u"█"));d::put(_n_array_2129,_n_index_2130,_n_value_2131);return _n_value_2131;})());
}
}}
(void)((_n_x_2080=(_n_x_2080+(((2.0+(2.0*double(d::i32(_n_tall_2081)>>(d::u32(1.0)&31))))+1.0)+std::floor((this->_n_rand_2056()*3.0))))));
}}
this->_n_stars_2058=d::Array<std::shared_ptr<_n_Record_2059>,false>{};
while(d::truth((double(this->_n_stars_2058.size())<40.0))){d::check_cancel();double _n_c_2089=std::floor((this->_n_rand_2056()*this->_n_cols_2054));
double _n_r_2090=std::floor((([&](){auto _n_left_2132=this->_n_rand_2056();auto _n_right_2133=this->_n_rand_2056();return (_n_left_2132*_n_right_2133);})()*(_n_HEM_2048+2.0)));
(void)(this->_n_stars_2058.push(([&](){auto _n_object_2135=std::make_shared<_n_Record_2059>();_n_object_2135->_p_k=(_n_c_2089+(_n_r_2090*this->_n_cols_2054));_n_object_2135->_p_bright=(this->_n_rand_2056()<0.2);_n_object_2135->_p_rate=(0.3+(this->_n_rand_2056()*1.1));_n_object_2135->_p_ph=(this->_n_rand_2056()*_n_TAU_2047);return _n_object_2135;})()));
}
this->_n_field_2060=d::Array<float,true>(size_t((this->_n_cols_2054*this->_n_rows_2055)));
this->_n_out_2061=d::Array<d::String,false>(size_t((this->_n_cols_2054*this->_n_rows_2055)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_2109> _a1) mutable ->d::String{double _n_t_2091=_a0;
{
(void)(this->_n_field_2060.fill(0.0));
{double _n_c_2092=0.0;
for(;d::truth((_n_c_2092<this->_n_cols_2054));(void)((_n_c_2092++))){d::check_cancel();double _n_x_2093=(_n_c_2092+0.5);
double _n_y0_2094=([&](){auto _n_left_2136=(_n_HEM_2048+(1.2*std::sin(((_n_x_2093*0.12)+(_n_t_2091*0.35)))));auto _n_right_2137=(0.55*std::sin((((_n_x_2093*0.31)-(_n_t_2091*0.7))+1.0)));return (_n_left_2136+_n_right_2137);})();
double _n_slope_2095=([&](){auto _n_left_2138=((1.2*0.12)*std::cos(((_n_x_2093*0.12)+(_n_t_2091*0.35))));auto _n_right_2139=((0.55*0.31)*std::cos((((_n_x_2093*0.31)-(_n_t_2091*0.7))+1.0)));return (_n_left_2138+_n_right_2139);})();
double _n_lit_2096=([&](){auto _n_left_2140=(0.62+(0.4*_n_ease_2052(_n_noise_2053(((_n_x_2093*0.07)-(_n_t_2091*0.25)),3.3))));auto _n_right_2141=(1.0+(0.9*([&](){auto _n_argument_2142=1.0;auto _n_argument_2143=(std::fabs(_n_slope_2095)*2.0);return d::minimum({_n_argument_2142,_n_argument_2143});})()));return (_n_left_2140*_n_right_2141);})();
double _n_ray_2097=_n_ease_2052(([&](){auto _n_argument_2144=1.0;auto _n_argument_2145=([&](){auto _n_argument_2146=0.0;auto _n_argument_2147=((_n_noise_2053(((_n_x_2093*0.9)-(_n_t_2091*1.4)),(7.0+(_n_t_2091*0.3)))-0.3)/0.45);return d::maximum({_n_argument_2146,_n_argument_2147});})();return d::minimum({_n_argument_2144,_n_argument_2145});})());
double _n_height_2098=(1.5+((6.5*_n_ray_2097)*(0.6+(0.6*_n_noise_2053(((_n_x_2093*0.12)+(_n_t_2091*0.15)),11.0)))));
{double _n_r_2099=0.0;
for(;d::truth((_n_r_2099<this->_n_rows_2055));(void)((_n_r_2099++))){d::check_cancel();double _n_d_2100=(_n_y0_2094-(_n_r_2099+0.5));
double _n_hem_2101=std::exp((-d::number(std::pow((([&](){auto _n_argument_2148=0.0;auto _n_argument_2149=(std::fabs(_n_d_2100)-0.5);return d::maximum({_n_argument_2148,_n_argument_2149});})()/(d::truth((_n_d_2100>0.0))?0.6:0.35)),2.0))));
double _n_v_2102=([&](){auto _n_argument_2150=_n_hem_2101;auto _n_argument_2151=(d::truth((_n_d_2100>=0.0))?((0.3+(0.7*_n_ray_2097))*std::pow(d::maximum({0.0,(1.0-(_n_d_2100/_n_height_2098))}),1.4)):(std::exp((_n_d_2100/1.5))*(0.4+(0.4*_n_ray_2097))));return d::maximum({_n_argument_2150,_n_argument_2151});})();
(void)(([&](){auto&& _n_array_2152=this->_n_field_2060;auto _n_index_2153=(_n_c_2092+(_n_r_2099*this->_n_cols_2054));auto _n_value_2154=(_n_lit_2096*_n_v_2102);d::put(_n_array_2152,_n_index_2153,_n_value_2154);return _n_value_2154;})());
}}
}}
{double _n_k_2103=0.0;
for(;d::truth((_n_k_2103<(this->_n_cols_2054*this->_n_rows_2055)));(void)((_n_k_2103++))){d::check_cancel();double _n_b_2104=(d::at(this->_n_field_2060,_n_k_2103)-0.12);
(void)(([&](){auto&& _n_array_2155=this->_n_out_2061;auto _n_index_2156=_n_k_2103;auto _n_value_2157=([&]()->d::String{auto _n_logical_2158=d::at(this->_n_land_2057,_n_k_2103);return d::truth(_n_logical_2158)?d::read(_n_logical_2158):(d::truth((_n_b_2104>0.0))?d::at(_n_RAMP_2046,([&](){auto _n_argument_2159=(double(_n_RAMP_2046.size())-1.0);auto _n_argument_2160=(1.0+std::floor((_n_b_2104*5.0)));return d::minimum({_n_argument_2159,_n_argument_2160});})()):d::String(u" "));})();d::put(_n_array_2155,_n_index_2156,_n_value_2157);return _n_value_2157;})());
}}
for(auto &&_n_item_2161:this->_n_stars_2058){d::check_cancel();std::shared_ptr<_n_Record_2059> _n_s_2105=_n_item_2161;
{
if(d::truth((d::at(this->_n_out_2061,_n_s_2105->_p_k)!=d::String(u" ")))){d::check_cancel();continue;
}
double _n_tw_2106=std::sin((((_n_t_2091*_n_s_2105->_p_rate)*_n_TAU_2047)+_n_s_2105->_p_ph));
(void)(([&](){auto&& _n_array_2162=this->_n_out_2061;auto _n_index_2163=_n_s_2105->_p_k;auto _n_value_2164=(d::truth(_n_s_2105->_p_bright)?(d::truth((_n_tw_2106>0.3))?d::String(u"+"):d::String(u"*")):(d::truth((_n_tw_2106>(-d::number(0.6))))?d::String(u"."):d::String(u" ")));d::put(_n_array_2162,_n_index_2163,_n_value_2164);return _n_value_2164;})());

}
}
d::Array<d::String,false> _n_lines_2107=d::Array<d::String,false>{};
{double _n_r_2108=0.0;
for(;d::truth((_n_r_2108<this->_n_rows_2055));(void)((_n_r_2108++))){d::check_cancel();(void)(_n_lines_2107.push(d::join(this->_n_out_2061.slice((_n_r_2108*this->_n_cols_2054),((_n_r_2108+1.0)*this->_n_cols_2054)),d::String(u""))));
}}
return d::join(_n_lines_2107,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("aurora").cols)*ascii::catalog_meta("aurora").rows);auto _env=std::make_shared<_n_Record_2109>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &aurora_meta(){return catalog_meta("aurora");}
std::unique_ptr<Piece> make_aurora(const AsciiPieceOptions &o){return std::make_unique<Native_aurora>(o);}
}
