// Direct, statically typed C++ from src/pieces/big-text.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_2340;
struct _n_Record_2341;
struct _n_Record_2393;
struct _n_Record_2394;
struct _n_Record_2402;
struct _n_Record_2340{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_2341> _p_options{};
static std::shared_ptr<_n_Record_2340> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2340>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_2341>>(j["options"]);return out;}
};
struct _n_Record_2341{
d::String _p_text{};
static std::shared_ptr<_n_Record_2341> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2341>();out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_2393{
std::optional<d::String> _p_text{};
static std::shared_ptr<_n_Record_2393> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2393>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);return out;}
};
struct _n_Record_2394{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_2394> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2394>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_2402{
d::String _p_A{};
d::String _p_B{};
d::String _p_C{};
d::String _p_D{};
d::String _p_E{};
d::String _p_F{};
d::String _p_G{};
d::String _p_H{};
d::String _p_I{};
d::String _p_J{};
d::String _p_K{};
d::String _p_L{};
d::String _p_M{};
d::String _p_N{};
d::String _p_O{};
d::String _p_P{};
d::String _p_Q{};
d::String _p_R{};
d::String _p_S{};
d::String _p_T{};
d::String _p_U{};
d::String _p_V{};
d::String _p_W{};
d::String _p_X{};
d::String _p_Y{};
d::String _p_Z{};
d::String _p_0{};
d::String _p_1{};
d::String _p_2{};
d::String _p_3{};
d::String _p_4{};
d::String _p_5{};
d::String _p_6{};
d::String _p_7{};
d::String _p_8{};
d::String _p_9{};
d::String _p_symbol_2e{};
d::String _p_symbol_2c{};
d::String _p_symbol_21{};
d::String _p_symbol_3f{};
d::String _p_symbol_27{};
d::String _p_symbol_3a{};
d::String _p_symbol_2d{};
d::String _p_symbol_2b{};
d::String _p_symbol_3d{};
d::String _p_symbol_2f{};
d::String _p__{};
d::String _p_symbol_20{};
static std::shared_ptr<_n_Record_2402> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2402>();out->_p_A=d::decode<d::String>(j["A"]);out->_p_B=d::decode<d::String>(j["B"]);out->_p_C=d::decode<d::String>(j["C"]);out->_p_D=d::decode<d::String>(j["D"]);out->_p_E=d::decode<d::String>(j["E"]);out->_p_F=d::decode<d::String>(j["F"]);out->_p_G=d::decode<d::String>(j["G"]);out->_p_H=d::decode<d::String>(j["H"]);out->_p_I=d::decode<d::String>(j["I"]);out->_p_J=d::decode<d::String>(j["J"]);out->_p_K=d::decode<d::String>(j["K"]);out->_p_L=d::decode<d::String>(j["L"]);out->_p_M=d::decode<d::String>(j["M"]);out->_p_N=d::decode<d::String>(j["N"]);out->_p_O=d::decode<d::String>(j["O"]);out->_p_P=d::decode<d::String>(j["P"]);out->_p_Q=d::decode<d::String>(j["Q"]);out->_p_R=d::decode<d::String>(j["R"]);out->_p_S=d::decode<d::String>(j["S"]);out->_p_T=d::decode<d::String>(j["T"]);out->_p_U=d::decode<d::String>(j["U"]);out->_p_V=d::decode<d::String>(j["V"]);out->_p_W=d::decode<d::String>(j["W"]);out->_p_X=d::decode<d::String>(j["X"]);out->_p_Y=d::decode<d::String>(j["Y"]);out->_p_Z=d::decode<d::String>(j["Z"]);out->_p_0=d::decode<d::String>(j["0"]);out->_p_1=d::decode<d::String>(j["1"]);out->_p_2=d::decode<d::String>(j["2"]);out->_p_3=d::decode<d::String>(j["3"]);out->_p_4=d::decode<d::String>(j["4"]);out->_p_5=d::decode<d::String>(j["5"]);out->_p_6=d::decode<d::String>(j["6"]);out->_p_7=d::decode<d::String>(j["7"]);out->_p_8=d::decode<d::String>(j["8"]);out->_p_9=d::decode<d::String>(j["9"]);out->_p_symbol_2e=d::decode<d::String>(j["."]);out->_p_symbol_2c=d::decode<d::String>(j[","]);out->_p_symbol_21=d::decode<d::String>(j["!"]);out->_p_symbol_3f=d::decode<d::String>(j["?"]);out->_p_symbol_27=d::decode<d::String>(j["'"]);out->_p_symbol_3a=d::decode<d::String>(j[":"]);out->_p_symbol_2d=d::decode<d::String>(j["-"]);out->_p_symbol_2b=d::decode<d::String>(j["+"]);out->_p_symbol_3d=d::decode<d::String>(j["="]);out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p__=d::decode<d::String>(j["_"]);out->_p_symbol_20=d::decode<d::String>(j[" "]);return out;}
};

std::shared_ptr<_n_Record_2340> _n_meta_2339=[](){return ([&](){auto _n_object_2399=std::make_shared<_n_Record_2340>();_n_object_2399->_p_name=d::String(u"big text");_n_object_2399->_p_category=d::String(u"type");_n_object_2399->_p_note=d::String(u"a block-letter banner with a line shadow and a passing glint");_n_object_2399->_p_cols=66.0;_n_object_2399->_p_rows=8.0;_n_object_2399->_p_fps=24.0;_n_object_2399->_p_options=([&](){auto _n_object_2401=std::make_shared<_n_Record_2341>();_n_object_2401->_p_text=d::String(u"hello");return _n_object_2401;})();return _n_object_2399;})();}();
d::Dict<d::String,d::String> _n_FONT_2342=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_2403;_n_dictionary_2403.set(d::String(u"A"),d::String(u".##.|#..#|####|#..#|#..#"));_n_dictionary_2403.set(d::String(u"B"),d::String(u"###.|#..#|###.|#..#|###."));_n_dictionary_2403.set(d::String(u"C"),d::String(u".###|#...|#...|#...|.###"));_n_dictionary_2403.set(d::String(u"D"),d::String(u"###.|#..#|#..#|#..#|###."));_n_dictionary_2403.set(d::String(u"E"),d::String(u"####|#...|###.|#...|####"));_n_dictionary_2403.set(d::String(u"F"),d::String(u"####|#...|###.|#...|#..."));_n_dictionary_2403.set(d::String(u"G"),d::String(u".###|#...|#.##|#..#|.###"));_n_dictionary_2403.set(d::String(u"H"),d::String(u"#..#|#..#|####|#..#|#..#"));_n_dictionary_2403.set(d::String(u"I"),d::String(u"#|#|#|#|#"));_n_dictionary_2403.set(d::String(u"J"),d::String(u"...#|...#|...#|#..#|.##."));_n_dictionary_2403.set(d::String(u"K"),d::String(u"#..#|#.#.|##..|#.#.|#..#"));_n_dictionary_2403.set(d::String(u"L"),d::String(u"#...|#...|#...|#...|####"));_n_dictionary_2403.set(d::String(u"M"),d::String(u"#...#|##.##|#.#.#|#...#|#...#"));_n_dictionary_2403.set(d::String(u"N"),d::String(u"#...#|##..#|#.#.#|#..##|#...#"));_n_dictionary_2403.set(d::String(u"O"),d::String(u".##.|#..#|#..#|#..#|.##."));_n_dictionary_2403.set(d::String(u"P"),d::String(u"###.|#..#|###.|#...|#..."));_n_dictionary_2403.set(d::String(u"Q"),d::String(u".##.|#..#|#..#|#.#.|.#.#"));_n_dictionary_2403.set(d::String(u"R"),d::String(u"###.|#..#|###.|#.#.|#..#"));_n_dictionary_2403.set(d::String(u"S"),d::String(u".###|#...|.##.|...#|###."));_n_dictionary_2403.set(d::String(u"T"),d::String(u"#####|..#..|..#..|..#..|..#.."));_n_dictionary_2403.set(d::String(u"U"),d::String(u"#..#|#..#|#..#|#..#|.##."));_n_dictionary_2403.set(d::String(u"V"),d::String(u"#...#|#...#|#...#|.#.#.|..#.."));_n_dictionary_2403.set(d::String(u"W"),d::String(u"#...#|#...#|#.#.#|##.##|#...#"));_n_dictionary_2403.set(d::String(u"X"),d::String(u"#...#|.#.#.|..#..|.#.#.|#...#"));_n_dictionary_2403.set(d::String(u"Y"),d::String(u"#...#|.#.#.|..#..|..#..|..#.."));_n_dictionary_2403.set(d::String(u"Z"),d::String(u"####|...#|..#.|.#..|####"));_n_dictionary_2403.set(d::String(u"0"),d::String(u"###|#.#|#.#|#.#|###"));_n_dictionary_2403.set(d::String(u"1"),d::String(u".#.|##.|.#.|.#.|###"));_n_dictionary_2403.set(d::String(u"2"),d::String(u"###|..#|###|#..|###"));_n_dictionary_2403.set(d::String(u"3"),d::String(u"###|..#|.##|..#|###"));_n_dictionary_2403.set(d::String(u"4"),d::String(u"#.#|#.#|###|..#|..#"));_n_dictionary_2403.set(d::String(u"5"),d::String(u"###|#..|###|..#|###"));_n_dictionary_2403.set(d::String(u"6"),d::String(u"###|#..|###|#.#|###"));_n_dictionary_2403.set(d::String(u"7"),d::String(u"###|..#|..#|..#|..#"));_n_dictionary_2403.set(d::String(u"8"),d::String(u"###|#.#|###|#.#|###"));_n_dictionary_2403.set(d::String(u"9"),d::String(u"###|#.#|###|..#|###"));_n_dictionary_2403.set(d::String(u"."),d::String(u".|.|.|.|#"));_n_dictionary_2403.set(d::String(u","),d::String(u".|.|.|#|#"));_n_dictionary_2403.set(d::String(u"!"),d::String(u"#|#|#|.|#"));_n_dictionary_2403.set(d::String(u"?"),d::String(u"###|..#|.##|...|.#."));_n_dictionary_2403.set(d::String(u"'"),d::String(u"#|#|.|.|."));_n_dictionary_2403.set(d::String(u":"),d::String(u".|#|.|#|."));_n_dictionary_2403.set(d::String(u"-"),d::String(u"...|...|###|...|..."));_n_dictionary_2403.set(d::String(u"+"),d::String(u"...|.#.|###|.#.|..."));_n_dictionary_2403.set(d::String(u"="),d::String(u"...|###|...|###|..."));_n_dictionary_2403.set(d::String(u"/"),d::String(u"..#|..#|.#.|#..|#.."));_n_dictionary_2403.set(d::String(u"_"),d::String(u"...|...|...|...|###"));_n_dictionary_2403.set(d::String(u" "),d::String(u".."));return _n_dictionary_2403;})();}();
const d::String _n_JOIN_2343=[](){return d::String(u" ║║║═╝╗╣═╚╔╠═╩╦╬");}();
const double _n_U_2344=[](){return 1.0;}();
const double _n_D_2345=[](){return 2.0;}();
const double _n_L_2346=[](){return 4.0;}();
const double _n_R_2347=[](){return 8.0;}();

struct Native_big_text final:ascii::Piece{
d::String _n_text_2348{};
double _n_cols_2349{};
double _n_rows_2350{};
d::Array<d::Array<d::String,false>,false> _n_glyphs_2351{};
double _n_s_2353{};
double _n_x0_2354{};
double _n_y0_2355{};
d::Array<uint8_t,true> _n_ink_2356{};
double _n_x_2357{};
d::Array<std::optional<d::String>,false> _n_grid_2359{};
double _n_SWEEP_2360{};
double _n_PERIOD_2361{};
double _n_left_2362{};
double _n_right_2363{};
std::function<d::String(double,std::shared_ptr<_n_Record_2394>)> _render;
double _n_span_2352(double _a0){double _n_s_2367=_a0;
return d::reduce(this->_n_glyphs_2351,[&]( double _a0,d::Array<d::String,false> _a1) mutable ->double{double _n_w_2368=_a0;
d::Array<d::String,false> _n_g_2369=_a1;
return ((_n_w_2368+(double(d::at(_n_g_2369,0.0).size())*_n_s_2367))+2.0);},(-d::number(1.0)));}

double _n_at_2358(double _a0,double _a1){double _n_c_2375=_a0;
double _n_r_2376=_a1;
return ((((d::truth((_n_c_2375>=0.0))&&d::truth((_n_c_2375<this->_n_cols_2349)))&&d::truth((_n_r_2376>=0.0)))&&d::truth((_n_r_2376<this->_n_rows_2350)))?d::at(this->_n_ink_2356,((_n_r_2376*this->_n_cols_2349)+_n_c_2375)):0.0);}

explicit Native_big_text(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_2404=d::decode<std::shared_ptr<_n_Record_2393>>(_options.data);
this->_n_text_2348=(d::present(_n_binding_2404->_p_text)?d::read(_n_binding_2404->_p_text):_n_meta_2339->_p_options->_p_text);
auto _n_binding_2405=_n_meta_2339;
this->_n_cols_2349=_n_binding_2405->_p_cols;
this->_n_rows_2350=_n_binding_2405->_p_rows;
this->_n_glyphs_2351=d::map(d::filter(d::map(([&](){d::Array<d::String,false> _n_array_2406;for(const auto &_v:d::upper(d::string(this->_n_text_2348)))_n_array_2406.push(_v);return _n_array_2406;})(),[&]( d::String _a0) mutable ->d::String{d::String _n_ch_2365=_a0;
return _n_FONT_2342.get(_n_ch_2365);}),d::ToBoolean{}),[&]( d::String _a0) mutable ->d::Array<d::String,false>{d::String _n_g_2366=_a0;
return d::split(_n_g_2366,d::String(u"|"));});
this->_n_s_2353=(d::truth((this->_n_span_2352(2.0)<=(this->_n_cols_2349-2.0)))?2.0:1.0);
this->_n_x0_2354=([&](){auto _n_argument_2408=0.0;auto _n_argument_2409=std::floor(((this->_n_cols_2349-this->_n_span_2352(this->_n_s_2353))/2.0));return d::maximum({_n_argument_2408,_n_argument_2409});})();
this->_n_y0_2355=std::floor(((this->_n_rows_2350-6.0)/2.0));
this->_n_ink_2356=d::Array<uint8_t,true>(size_t((this->_n_cols_2349*this->_n_rows_2350)));
this->_n_x_2357=this->_n_x0_2354;
for(auto &&_n_item_2410:this->_n_glyphs_2351){d::check_cancel();d::Array<d::String,false> _n_g_2370=_n_item_2410;
{
(void)(d::forEach(_n_g_2370,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_2371=_a0;
double _n_y_2372=_a1;
{
{double _n_i_2373=0.0;
for(;d::truth((_n_i_2373<double(_n_line_2371.size())));(void)((_n_i_2373++))){d::check_cancel();if(d::truth((d::at(_n_line_2371,_n_i_2373)==d::String(u"#")))){d::check_cancel();{double _n_k_2374=0.0;
for(;d::truth((_n_k_2374<this->_n_s_2353));(void)((_n_k_2374++))){d::check_cancel();if(d::truth((((this->_n_x_2357+(_n_i_2373*this->_n_s_2353))+_n_k_2374)<this->_n_cols_2349))){d::check_cancel();(void)(([&](){auto&& _n_array_2411=this->_n_ink_2356;auto _n_index_2412=(((((this->_n_y0_2355+_n_y_2372)*this->_n_cols_2349)+this->_n_x_2357)+(_n_i_2373*this->_n_s_2353))+_n_k_2374);auto _n_value_2413=1.0;d::put(_n_array_2411,_n_index_2412,_n_value_2413);return _n_value_2413;})());
}
}}
}
}}

}
}));
(void)((this->_n_x_2357=(this->_n_x_2357+((double(d::at(_n_g_2370,0.0).size())*this->_n_s_2353)+2.0))));

}
}
this->_n_grid_2359=d::Array<std::optional<d::String>,false>{};
{double _n_r_2377=0.0;
for(;d::truth((_n_r_2377<this->_n_rows_2350));(void)((_n_r_2377++))){d::check_cancel();{double _n_c_2378=0.0;
for(;d::truth((_n_c_2378<this->_n_cols_2349));(void)((_n_c_2378++))){d::check_cancel();if(d::truth(this->_n_at_2358(_n_c_2378,_n_r_2377))){d::check_cancel();(void)(this->_n_grid_2359.push(std::optional<d::String>{}));
continue;
}
double _n_a_2379=this->_n_at_2358((_n_c_2378-1.0),(_n_r_2377-1.0));
double _n_b_2380=this->_n_at_2358(_n_c_2378,(_n_r_2377-1.0));
double _n_d_2381=this->_n_at_2358((_n_c_2378-1.0),_n_r_2377);
double _n_edges_2382=double(d::i32(double(d::i32(double(d::i32((d::truth((_n_a_2379!=_n_b_2380))?_n_U_2344:0.0))|d::i32((d::truth(_n_d_2381)?_n_D_2345:0.0))))|d::i32((d::truth((_n_a_2379!=_n_d_2381))?_n_L_2346:0.0))))|d::i32((d::truth(_n_b_2380)?_n_R_2347:0.0)));
(void)(this->_n_grid_2359.push(std::optional<d::String>(d::at(_n_JOIN_2343,(d::truth((_n_edges_2382==15.0))?double(d::i32(_n_D_2345)|d::i32(_n_R_2347)):_n_edges_2382)))));
}}
}}
this->_n_SWEEP_2360=2.4;
this->_n_PERIOD_2361=3.2;
this->_n_left_2362=(this->_n_x0_2354-2.0);
this->_n_right_2363=((this->_n_x0_2354+this->_n_span_2352(this->_n_s_2353))+9.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_2394> _a1) mutable ->d::String{double _n_t_2383=_a0;
auto _n_binding_2416=(d::present(_a1)?_a1:([&](){auto _n_object_2415=std::make_shared<_n_Record_2394>();return _n_object_2415;})());
bool _n_paper_2384=(d::present(_n_binding_2416->_p_paper)?d::read(_n_binding_2416->_p_paper):false);
{
double _n_u_2385=(d::mod((d::mod((_n_t_2383-0.5),this->_n_PERIOD_2361)+this->_n_PERIOD_2361),this->_n_PERIOD_2361)/this->_n_SWEEP_2360);
double _n_p_2386=(d::truth((_n_u_2385<1.0))?(this->_n_left_2362+((this->_n_right_2363-this->_n_left_2362)*_n_u_2385)):(-d::number(99.0)));
d::Array<d::String,false> _n_lines_2387=d::Array<d::String,false>{};
{double _n_r_2388=0.0;
for(;d::truth((_n_r_2388<this->_n_rows_2350));(void)((_n_r_2388++))){d::check_cancel();d::String _n_line_2389=d::String(u"");
{double _n_c_2390=0.0;
for(;d::truth((_n_c_2390<this->_n_cols_2349));(void)((_n_c_2390++))){d::check_cancel();std::optional<d::String> _n_g_2391=d::at(this->_n_grid_2359,((_n_r_2388*this->_n_cols_2349)+_n_c_2390));
if(d::truth((d::present(_n_g_2391)))){d::check_cancel();(void)((_n_line_2389=(d::string(_n_line_2389)+d::string(d::read(_n_g_2391)))));
continue;
}
double _n_d_2392=std::fabs(((_n_c_2390+(1.2*_n_r_2388))-_n_p_2386));
if(d::truth(_n_paper_2384)){d::check_cancel();(void)((_n_line_2389=(d::string(_n_line_2389)+d::string((d::truth((_n_d_2392<1.2))?d::String(u"▒"):(d::truth((_n_d_2392<2.4))?d::String(u"▓"):d::String(u"█")))))));
}else {d::check_cancel();(void)((_n_line_2389=(d::string(_n_line_2389)+d::string((d::truth((_n_d_2392<2.4))?d::String(u"█"):d::String(u"▓"))))));
}
}}
(void)(_n_lines_2387.push(_n_line_2389));
}}
return d::join(_n_lines_2387,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("big-text").cols)*ascii::catalog_meta("big-text").rows);auto _env=std::make_shared<_n_Record_2394>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &big_text_meta(){return catalog_meta("big-text");}
std::unique_ptr<Piece> make_big_text(const AsciiPieceOptions &o){return std::make_unique<Native_big_text>(o);}
}
