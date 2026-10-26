// Direct, statically typed C++ from src/pieces/wind.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_37177;
struct _n_Record_37195;
struct _n_Record_37273;
struct _n_Record_37353;
struct _n_Record_37177{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_37177> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37177>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_37195{
d::Array<uint8_t,true> _p_mask{};
d::Array<std::array<double,2>,false> _p_spans{};
d::Array<int16_t,true> _p_row{};
d::Array<double,false> _p_cells{};
static std::shared_ptr<_n_Record_37195> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37195>();out->_p_mask=d::decode<d::Array<uint8_t,true>>(j["mask"]);out->_p_spans=d::decode<d::Array<std::array<double,2>,false>>(j["spans"]);out->_p_row=d::decode<d::Array<int16_t,true>>(j["row"]);out->_p_cells=d::decode<d::Array<double,false>>(j["cells"]);return out;}
};
struct _n_Record_37273{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_37273> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37273>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_37353{
d::Array<uint8_t,true> _p_mask{};
d::Array<std::array<double,2>,false> _p_spans{};
d::Array<int16_t,true> _p_row{};
d::Array<d::Nil,false> _p_cells{};
static std::shared_ptr<_n_Record_37353> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37353>();out->_p_mask=d::decode<d::Array<uint8_t,true>>(j["mask"]);out->_p_spans=d::decode<d::Array<std::array<double,2>,false>>(j["spans"]);out->_p_row=d::decode<d::Array<int16_t,true>>(j["row"]);out->_p_cells=d::decode<d::Array<d::Nil,false>>(j["cells"]);return out;}
};
double _n_hash_37186(double _a0,double _a1,double _a2);
double _n_ease_37187(double _a0);
double _n_mix_37188(double _a0,double _a1,double _a2);
double _n_noise_37189(double _a0,double _a1,double _a2);
double _n_psi_37190(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_37177> _n_meta_37176=[](){return ([&](){auto _n_object_37276=std::make_shared<_n_Record_37177>();_n_object_37276->_p_name=d::String(u"wind");_n_object_37276->_p_category=d::String(u"nature");_n_object_37276->_p_note=d::String(u"gusts streaming along bending lines, curling at the head");_n_object_37276->_p_cols=64.0;_n_object_37276->_p_rows=14.0;_n_object_37276->_p_fps=15.0;return _n_object_37276;})();}();
const double _n_GAP_37178=[](){return 2.0;}();
const d::String _n_BAR_37179=[](){return d::String(u"▔─▁");}();
const d::String _n_END_37180=[](){return d::String(u"'·.");}();
const double _n_MIN_37181=[](){return 8.0;}();
const double _n_TIP_37182=[](){return 14.0;}();
const double _n_CURL_37183=[](){return 16.0;}();
const double _n_MAX_CURLS_37184=[](){return 3.0;}();
const double _n_FLAT_37185=[](){return 4.0;}();
double _n_hash_37186(double _a0,double _a1,double _a2){double _n_x_37197=_a0;
double _n_y_37198=_a1;
double _n_z_37199=_a2;
{
double _n_h_37200=([&](){auto _n_left_37277=([&](){auto _n_left_37279=d::imul(_n_x_37197,668265261.0);auto _n_right_37280=d::imul(_n_y_37198,374761393.0);return double(d::i32(_n_left_37279)^d::i32(_n_right_37280));})();auto _n_right_37278=d::imul(_n_z_37199,625341585.0);return double(d::i32(_n_left_37277)^d::i32(_n_right_37278));})();
(void)((_n_h_37200=d::imul(double(d::i32(_n_h_37200)^d::i32(double(d::u32(_n_h_37200)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_37200=d::imul(double(d::i32(_n_h_37200)^d::i32(double(d::u32(_n_h_37200)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_37200)^d::i32(double(d::u32(_n_h_37200)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_37187(double _a0){double _n_t_37201=_a0;
return ((_n_t_37201*_n_t_37201)*(3.0-(2.0*_n_t_37201)));}

double _n_mix_37188(double _a0,double _a1,double _a2){double _n_a_37202=_a0;
double _n_b_37203=_a1;
double _n_t_37204=_a2;
return (_n_a_37202+((_n_b_37203-_n_a_37202)*_n_t_37204));}

double _n_noise_37189(double _a0,double _a1,double _a2){double _n_x_37205=_a0;
double _n_y_37206=_a1;
double _n_z_37207=_a2;
{
double _n_i_37208=std::floor(_n_x_37205);
double _n_j_37209=std::floor(_n_y_37206);
double _n_k_37210=std::floor(_n_z_37207);
double _n_u_37211=_n_ease_37187((_n_x_37205-_n_i_37208));
double _n_v_37212=_n_ease_37187((_n_y_37206-_n_j_37209));
double _n_w_37213=_n_ease_37187((_n_z_37207-_n_k_37210));
auto _n_n_37214=[&]( double _a0,double _a1,double _a2) mutable ->double{double _n_a_37215=_a0;
double _n_b_37216=_a1;
double _n_c_37217=_a2;
return _n_hash_37186((_n_i_37208+_n_a_37215),(_n_j_37209+_n_b_37216),(_n_k_37210+_n_c_37217));};
return ([&](){auto _n_argument_37281=([&](){auto _n_argument_37282=([&](){auto _n_argument_37283=_n_n_37214(0.0,0.0,0.0);auto _n_argument_37284=_n_n_37214(1.0,0.0,0.0);auto _n_argument_37285=_n_u_37211;return _n_mix_37188(_n_argument_37283,_n_argument_37284,_n_argument_37285);})();auto _n_argument_37286=([&](){auto _n_argument_37287=_n_n_37214(0.0,1.0,0.0);auto _n_argument_37288=_n_n_37214(1.0,1.0,0.0);auto _n_argument_37289=_n_u_37211;return _n_mix_37188(_n_argument_37287,_n_argument_37288,_n_argument_37289);})();auto _n_argument_37290=_n_v_37212;return _n_mix_37188(_n_argument_37282,_n_argument_37286,_n_argument_37290);})();auto _n_argument_37291=([&](){auto _n_argument_37292=([&](){auto _n_argument_37293=_n_n_37214(0.0,0.0,1.0);auto _n_argument_37294=_n_n_37214(1.0,0.0,1.0);auto _n_argument_37295=_n_u_37211;return _n_mix_37188(_n_argument_37293,_n_argument_37294,_n_argument_37295);})();auto _n_argument_37296=([&](){auto _n_argument_37297=_n_n_37214(0.0,1.0,1.0);auto _n_argument_37298=_n_n_37214(1.0,1.0,1.0);auto _n_argument_37299=_n_u_37211;return _n_mix_37188(_n_argument_37297,_n_argument_37298,_n_argument_37299);})();auto _n_argument_37300=_n_v_37212;return _n_mix_37188(_n_argument_37292,_n_argument_37296,_n_argument_37300);})();auto _n_argument_37301=_n_w_37213;return _n_mix_37188(_n_argument_37281,_n_argument_37291,_n_argument_37301);})();

}
}

double _n_psi_37190(double _a0,double _a1,double _a2){double _n_x_37218=_a0;
double _n_y_37219=_a1;
double _n_t_37220=_a2;
return (_n_y_37219+(5.0*([&](){auto _n_left_37302=_n_noise_37189(((_n_x_37218*0.04)-(_n_t_37220*0.05)),(_n_y_37219*0.18),(_n_t_37220*0.02));auto _n_right_37303=(0.35*_n_noise_37189(((_n_x_37218*0.07)+4.0),(_n_y_37219*0.4),(_n_t_37220*0.04)));return (_n_left_37302+_n_right_37303);})()));}

struct Native_wind final:ascii::Piece{
double _n_cols_37191{};
double _n_rows_37192{};
d::Array<d::Array<d::String,false>,false> _n_g_37193{};
std::function<d::String(double,std::shared_ptr<_n_Record_37273>)> _render;
std::shared_ptr<_n_Record_37195> _n_gusts_37194(double _a0,double _a1){double _n_k_37221=_a0;
double _n_t_37222=_a1;
{
d::Array<uint8_t,true> _n_mask_37223=d::Array<uint8_t,true>(size_t(this->_n_cols_37191));
d::Array<std::array<double,2>,false> _n_spans_37224=d::Array<std::array<double,2>,false>{};
{double _n_c_37225=0.0;
double _n_from_37226=(-d::number(1.0));
for(;d::truth((_n_c_37225<=this->_n_cols_37191));(void)((_n_c_37225++))){d::check_cancel();bool _n_on_37227=([&]()->bool{auto _n_logical_37347=(_n_c_37225<this->_n_cols_37191);return d::truth(_n_logical_37347)?(([&](){auto _n_left_37348=_n_noise_37189(((_n_c_37225*0.09)-(_n_t_37222*0.5)),(_n_k_37221*1.7),(_n_t_37222*0.05));auto _n_right_37349=d::minimum({1.0,((_n_c_37225+1.0)/8.0),((this->_n_cols_37191-_n_c_37225)/8.0)});return (_n_left_37348*_n_right_37349);})()>0.5):_n_logical_37347;})();
if((d::truth(_n_on_37227)&&d::truth((_n_from_37226<0.0)))){d::check_cancel();(void)((_n_from_37226=_n_c_37225));
}
if((d::truth((!d::truth(_n_on_37227)))&&d::truth((_n_from_37226>=0.0)))){d::check_cancel();if(d::truth(((_n_c_37225-_n_from_37226)>=_n_MIN_37181))){d::check_cancel();(void)(_n_mask_37223.fill(2.0,_n_from_37226,_n_c_37225));
if(d::truth(((_n_c_37225-_n_from_37226)>=_n_TIP_37182))){d::check_cancel();(void)(([&](){auto&& _n_array_37350=_n_mask_37223;auto _n_index_37351=_n_from_37226;auto _n_value_37352=1.0;d::put(_n_array_37350,_n_index_37351,_n_value_37352);return _n_value_37352;})());
}
(void)(_n_spans_37224.push(std::array<double,2>{_n_from_37226,(_n_c_37225-1.0)}));
}
(void)((_n_from_37226=(-d::number(1.0))));
}
}}
return ([&](){auto _n_object_37354=std::make_shared<_n_Record_37195>();_n_object_37354->_p_mask=_n_mask_37223;_n_object_37354->_p_spans=_n_spans_37224;_n_object_37354->_p_row=d::Array<int16_t,true>(size_t(this->_n_cols_37191)).fill((-d::number(1.0)));_n_object_37354->_p_cells=d::Array<double,false>{};return _n_object_37354;})();

}
}

bool _n_free_37196(double _a0,double _a1){double _n_r_37228=_a0;
double _n_c_37229=_a1;
return ([&]()->bool{auto _n_logical_37355=([&]()->bool{auto _n_logical_37356=([&]()->bool{auto _n_logical_37357=([&]()->bool{auto _n_logical_37358=(_n_r_37228>=0.0);return d::truth(_n_logical_37358)?(_n_r_37228<this->_n_rows_37192):_n_logical_37358;})();return d::truth(_n_logical_37357)?(_n_c_37229>=0.0):_n_logical_37357;})();return d::truth(_n_logical_37356)?(_n_c_37229<this->_n_cols_37191):_n_logical_37356;})();return d::truth(_n_logical_37355)?(d::at(d::at(this->_n_g_37193,_n_r_37228),_n_c_37229)==d::String(u" ")):_n_logical_37355;})();}

explicit Native_wind(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_37304=_n_meta_37176;
this->_n_cols_37191=_n_binding_37304->_p_cols;
this->_n_rows_37192=_n_binding_37304->_p_rows;
this->_n_g_37193=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_37192,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_37191));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_37273> _a1) mutable ->d::String{double _n_t_37230=_a0;
{
for(auto &&_n_item_37305:this->_n_g_37193){d::check_cancel();d::Array<d::String,false> _n_row_37231=_n_item_37305;
(void)(_n_row_37231.fill(d::String(u" ")));
}
d::Array<std::shared_ptr<_n_Record_37195>,false> _n_lines_37232=d::Array<std::shared_ptr<_n_Record_37195>,false>{};
{double _n_c_37233=0.0;
for(;d::truth((_n_c_37233<this->_n_cols_37191));(void)((_n_c_37233++))){d::check_cancel();double _n_was_37234=std::floor((_n_psi_37190((_n_c_37233+0.5),0.0,_n_t_37230)/_n_GAP_37178));
{double _n_j_37235=0.0;
for(;d::truth((_n_j_37235<(this->_n_rows_37192*3.0)));(void)((_n_j_37235++))){d::check_cancel();double _n_now_37236=std::floor((_n_psi_37190((_n_c_37233+0.5),((_n_j_37235+1.0)/3.0),_n_t_37230)/_n_GAP_37178));
double _n_k_37237=d::maximum({_n_now_37236,_n_was_37234});
bool _n_same_37238=(_n_now_37236==_n_was_37234);
(void)((_n_was_37234=_n_now_37236));
if(d::truth(_n_same_37238)){d::check_cancel();continue;
}
std::shared_ptr<_n_Record_37195> _n_line_37239=([&]()->std::shared_ptr<_n_Record_37195>{auto&& _n_array_37306=_n_lines_37232;auto _n_index_37307=_n_k_37237;auto _n_old_37309=d::at(_n_array_37306,_n_index_37307);if(d::present(_n_old_37309))return _n_old_37309;auto _n_value_37308=this->_n_gusts_37194(_n_k_37237,_n_t_37230);d::put(_n_array_37306,_n_index_37307,_n_value_37308);return _n_value_37308;})();
if(d::truth((d::at(_n_line_37239->_p_row,_n_c_37233)<0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_37310=_n_line_37239->_p_row;auto _n_index_37311=_n_c_37233;auto _n_value_37312=std::floor((_n_j_37235/3.0));d::put(_n_array_37310,_n_index_37311,_n_value_37312);return _n_value_37312;})());
}
double _n_on_37240=d::at(_n_line_37239->_p_mask,_n_c_37233);
if(d::truth(_n_on_37240)){d::check_cancel();(void)((([&](){auto&& _n_array_37313=d::at(this->_n_g_37193,std::floor((_n_j_37235/3.0)));auto _n_index_37314=_n_c_37233;auto _n_value_37315=d::at((d::truth((_n_on_37240==1.0))?_n_END_37180:_n_BAR_37179),d::mod(_n_j_37235,3.0));d::put(_n_array_37313,_n_index_37314,_n_value_37315);return _n_value_37315;})(),([&](){auto _n_argument_37316=_n_c_37233;auto _n_argument_37317=std::floor((_n_j_37235/3.0));return _n_line_37239->_p_cells.push(_n_argument_37316,_n_argument_37317);})()));
}
}}
}}
for(auto &&_n_item_37318:_n_lines_37232){d::check_cancel();std::shared_ptr<_n_Record_37195> _n_line_37241=_n_item_37318;
{
if(d::truth((!d::truth(_n_line_37241)))){d::check_cancel();continue;
}
auto _n_binding_37319=_n_line_37241;
d::Array<double,false> _n_cells_37242=_n_binding_37319->_p_cells;
double _n_i_37243=0.0;
for(auto &&_n_item_37320:_n_line_37241->_p_spans){d::check_cancel();auto _n_binding_37321=_n_item_37320;
double _n_from_37244=d::at(_n_binding_37321,0.0);
double _n_to_37245=d::at(_n_binding_37321,1.0);
{
while((d::truth((_n_i_37243<double(_n_cells_37242.size())))&&d::truth((d::at(_n_cells_37242,_n_i_37243)<_n_from_37244)))){d::check_cancel();(void)((_n_i_37243=(_n_i_37243+2.0)));
}
double _n_n_37246=_n_i_37243;
while((d::truth((_n_n_37246<double(_n_cells_37242.size())))&&d::truth((d::at(_n_cells_37242,_n_n_37246)<=_n_to_37245)))){d::check_cancel();(void)((_n_n_37246=(_n_n_37246+2.0)));
}
if(d::truth(((_n_n_37246-_n_i_37243)<=10.0))){d::check_cancel();{double _n_k_37247=_n_i_37243;
for(;d::truth((_n_k_37247<_n_n_37246));(void)((_n_k_37247=(_n_k_37247+2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_37322=d::at(this->_n_g_37193,d::at(_n_cells_37242,(_n_k_37247+1.0)));auto _n_index_37323=d::at(_n_cells_37242,_n_k_37247);auto _n_value_37324=d::String(u" ");d::put(_n_array_37322,_n_index_37323,_n_value_37324);return _n_value_37324;})());
}}
}
(void)((_n_i_37243=_n_n_37246));

}
}

}
}
d::Array<std::array<double,3>,false> _n_heads_37248=d::Array<std::array<double,3>,false>{};
(void)(d::forEach(_n_lines_37232,[&]( std::shared_ptr<_n_Record_37195> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_37195> _n_line_37249=_a0;
double _n_k_37250=_a1;
{
for(auto &&_n_item_37325:_n_line_37249->_p_spans){d::check_cancel();auto _n_binding_37326=_n_item_37325;
double _n_from_37251=d::at(_n_binding_37326,0.0);
double _n_to_37252=d::at(_n_binding_37326,1.0);
if((d::truth((((_n_to_37252-_n_from_37251)+1.0)>=_n_CURL_37183))&&d::truth((d::at(_n_line_37249->_p_row,_n_to_37252)>=0.0)))){d::check_cancel();(void)(_n_heads_37248.push(std::array<double,3>{(_n_to_37252-_n_from_37251),_n_k_37250,_n_to_37252}));
}
}

}
}));
(void)(_n_heads_37248.sort([=]( std::array<double,3> _a0,std::array<double,3> _a1) mutable ->double{auto&& _n_a_37253=_a0;
auto&& _n_b_37254=_a1;
return (d::at(_n_b_37254,0.0)-d::at(_n_a_37253,0.0));}));
d::Array<std::array<double,2>,false> _n_curls_37255=d::Array<std::array<double,2>,false>{};
auto _n_room_37256=[&]( double _a0,double _a1,double _a2) mutable ->bool{double _n_r_37257=_a0;
double _n_to_37258=_a1;
double _n_d_37259=_a2;
{
if((d::truth((!d::truth(this->_n_free_37196((_n_r_37257+_n_d_37259),(_n_to_37258-2.0)))))||d::truth((!d::truth(this->_n_free_37196(_n_r_37257,(_n_to_37258+1.0))))))){d::check_cancel();return false;
}
for(auto &&_n_item_37327:d::Array<double,false>{(_n_r_37257+_n_d_37259),(_n_r_37257+(2.0*_n_d_37259))}){d::check_cancel();double _n_rr_37260=_n_item_37327;
{double _n_c_37261=(_n_to_37258-5.0);
for(;d::truth((_n_c_37261<=(_n_to_37258+2.0)));(void)((_n_c_37261++))){d::check_cancel();if(((((d::truth((_n_rr_37260>=0.0))&&d::truth((_n_rr_37260<this->_n_rows_37192)))&&d::truth((_n_c_37261>=0.0)))&&d::truth((_n_c_37261<this->_n_cols_37191)))&&d::truth((d::at(d::at(this->_n_g_37193,_n_rr_37260),_n_c_37261)!=d::String(u" "))))){d::check_cancel();return false;
}
}}
}
return true;

}
};
for(auto &&_n_item_37328:_n_heads_37248){d::check_cancel();auto _n_binding_37329=_n_item_37328;
double _n_k_37262=d::at(_n_binding_37329,1.0);
double _n_to_37263=d::at(_n_binding_37329,2.0);
{
std::shared_ptr<_n_Record_37195> _n_line_37264=d::at(_n_lines_37232,_n_k_37262);
double _n_r_37265=d::at(_n_line_37264->_p_row,_n_to_37263);
double _n_d_37266=(d::truth(d::mod(_n_k_37262,2.0))?1.0:(-d::number(1.0)));
if((((d::truth((double(_n_curls_37255.size())>=_n_MAX_CURLS_37184))||d::truth((_n_to_37263<(_n_FLAT_37185+2.0))))||d::truth(((_n_r_37265+_n_d_37266)<0.0)))||d::truth(((_n_r_37265+_n_d_37266)>=this->_n_rows_37192)))){d::check_cancel();continue;
}
bool _n_level_37267=true;
{double _n_c_37268=(_n_to_37263-_n_FLAT_37185);
for(;d::truth((_n_c_37268<_n_to_37263));(void)((_n_c_37268++))){d::check_cancel();if((d::truth((d::at(_n_line_37264->_p_row,_n_c_37268)!=_n_r_37265))||d::truth((!d::truth(d::includes(_n_BAR_37179,d::at(d::at(this->_n_g_37193,_n_r_37265),_n_c_37268))))))){d::check_cancel();(void)((_n_level_37267=false));
}
}}
if((d::truth((!d::truth(_n_level_37267)))||d::truth((!d::truth(_n_room_37256(_n_r_37265,_n_to_37263,_n_d_37266)))))){d::check_cancel();continue;
}
if(d::truth(d::some(_n_curls_37255,[&]( std::array<double,2> _a0) mutable ->bool{auto _n_binding_37330=_a0;
double _n_cr_37269=d::at(_n_binding_37330,0.0);
double _n_cc_37270=d::at(_n_binding_37330,1.0);
return ([&]()->bool{auto _n_logical_37331=(std::fabs((_n_cr_37269-_n_r_37265))<5.0);return d::truth(_n_logical_37331)?(std::fabs((_n_cc_37270-_n_to_37263))<16.0):_n_logical_37331;})();}))){d::check_cancel();continue;
}
(void)(_n_curls_37255.push(std::array<double,2>{_n_r_37265,_n_to_37263}));
{double _n_c_37271=(_n_to_37263-_n_FLAT_37185);
for(;d::truth((_n_c_37271<_n_to_37263));(void)((_n_c_37271++))){d::check_cancel();(void)(([&](){auto&& _n_array_37332=d::at(this->_n_g_37193,_n_r_37265);auto _n_index_37333=_n_c_37271;auto _n_value_37334=d::String(u"─");d::put(_n_array_37332,_n_index_37333,_n_value_37334);return _n_value_37334;})());
}}
(void)(([&](){auto&& _n_array_37335=d::at(this->_n_g_37193,_n_r_37265);auto _n_index_37336=_n_to_37263;auto _n_value_37337=(d::truth((_n_d_37266>0.0))?d::String(u"╮"):d::String(u"╯"));d::put(_n_array_37335,_n_index_37336,_n_value_37337);return _n_value_37337;})());
(void)(([&](){auto&& _n_array_37338=d::at(this->_n_g_37193,(_n_r_37265+_n_d_37266));auto _n_index_37339=_n_to_37263;auto _n_value_37340=(d::truth((_n_d_37266>0.0))?d::String(u"╯"):d::String(u"╮"));d::put(_n_array_37338,_n_index_37339,_n_value_37340);return _n_value_37340;})());
(void)(([&](){auto&& _n_array_37341=d::at(this->_n_g_37193,(_n_r_37265+_n_d_37266));auto _n_index_37342=(_n_to_37263-1.0);auto _n_value_37343=d::String(u"─");d::put(_n_array_37341,_n_index_37342,_n_value_37343);return _n_value_37343;})());
(void)(([&](){auto&& _n_array_37344=d::at(this->_n_g_37193,(_n_r_37265+_n_d_37266));auto _n_index_37345=(_n_to_37263-2.0);auto _n_value_37346=(d::truth((_n_d_37266>0.0))?d::String(u"╰"):d::String(u"╭"));d::put(_n_array_37344,_n_index_37345,_n_value_37346);return _n_value_37346;})());

}
}
return d::join(d::map(this->_n_g_37193,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_37272=_a0;
return d::join(_n_row_37272,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("wind").cols)*ascii::catalog_meta("wind").rows);auto _env=std::make_shared<_n_Record_37273>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &wind_meta(){return catalog_meta("wind");}
std::unique_ptr<Piece> make_wind(const AsciiPieceOptions &o){return std::make_unique<Native_wind>(o);}
}
