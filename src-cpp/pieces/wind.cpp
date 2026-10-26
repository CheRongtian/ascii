// Direct, statically typed C++ from src/pieces/wind.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_37176;
struct _n_Record_37194;
struct _n_Record_37272;
struct _n_Record_37352;
struct _n_Record_37176{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_37176> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37176>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_37194{
d::Array<uint8_t,true> _p_mask{};
d::Array<d::Array<double,false>,false> _p_spans{};
d::Array<int16_t,true> _p_row{};
d::Array<double,false> _p_cells{};
static std::shared_ptr<_n_Record_37194> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37194>();out->_p_mask=d::decode<d::Array<uint8_t,true>>(j["mask"]);out->_p_spans=d::decode<d::Array<d::Array<double,false>,false>>(j["spans"]);out->_p_row=d::decode<d::Array<int16_t,true>>(j["row"]);out->_p_cells=d::decode<d::Array<double,false>>(j["cells"]);return out;}
};
struct _n_Record_37272{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_37272> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37272>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_37352{
d::Array<uint8_t,true> _p_mask{};
d::Array<d::Array<double,false>,false> _p_spans{};
d::Array<int16_t,true> _p_row{};
d::Array<d::Nil,false> _p_cells{};
static std::shared_ptr<_n_Record_37352> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37352>();out->_p_mask=d::decode<d::Array<uint8_t,true>>(j["mask"]);out->_p_spans=d::decode<d::Array<d::Array<double,false>,false>>(j["spans"]);out->_p_row=d::decode<d::Array<int16_t,true>>(j["row"]);out->_p_cells=d::decode<d::Array<d::Nil,false>>(j["cells"]);return out;}
};
double _n_hash_37185(double _a0,double _a1,double _a2);
double _n_ease_37186(double _a0);
double _n_mix_37187(double _a0,double _a1,double _a2);
double _n_noise_37188(double _a0,double _a1,double _a2);
double _n_psi_37189(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_37176> _n_meta_37175=[](){return ([&](){auto _n_object_37275=std::make_shared<_n_Record_37176>();_n_object_37275->_p_name=d::String(u"wind");_n_object_37275->_p_category=d::String(u"nature");_n_object_37275->_p_note=d::String(u"gusts streaming along bending lines, curling at the head");_n_object_37275->_p_cols=64.0;_n_object_37275->_p_rows=14.0;_n_object_37275->_p_fps=15.0;return _n_object_37275;})();}();
const double _n_GAP_37177=[](){return 2.0;}();
const d::String _n_BAR_37178=[](){return d::String(u"▔─▁");}();
const d::String _n_END_37179=[](){return d::String(u"'·.");}();
const double _n_MIN_37180=[](){return 8.0;}();
const double _n_TIP_37181=[](){return 14.0;}();
const double _n_CURL_37182=[](){return 16.0;}();
const double _n_MAX_CURLS_37183=[](){return 3.0;}();
const double _n_FLAT_37184=[](){return 4.0;}();
double _n_hash_37185(double _a0,double _a1,double _a2){double _n_x_37196=_a0;
double _n_y_37197=_a1;
double _n_z_37198=_a2;
{
double _n_h_37199=([&](){auto _n_left_37276=([&](){auto _n_left_37278=d::imul(_n_x_37196,668265261.0);auto _n_right_37279=d::imul(_n_y_37197,374761393.0);return double(d::i32(_n_left_37278)^d::i32(_n_right_37279));})();auto _n_right_37277=d::imul(_n_z_37198,625341585.0);return double(d::i32(_n_left_37276)^d::i32(_n_right_37277));})();
(void)((_n_h_37199=d::imul(double(d::i32(_n_h_37199)^d::i32(double(d::u32(_n_h_37199)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_37199=d::imul(double(d::i32(_n_h_37199)^d::i32(double(d::u32(_n_h_37199)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_37199)^d::i32(double(d::u32(_n_h_37199)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_37186(double _a0){double _n_t_37200=_a0;
return ((_n_t_37200*_n_t_37200)*(3.0-(2.0*_n_t_37200)));}

double _n_mix_37187(double _a0,double _a1,double _a2){double _n_a_37201=_a0;
double _n_b_37202=_a1;
double _n_t_37203=_a2;
return (_n_a_37201+((_n_b_37202-_n_a_37201)*_n_t_37203));}

double _n_noise_37188(double _a0,double _a1,double _a2){double _n_x_37204=_a0;
double _n_y_37205=_a1;
double _n_z_37206=_a2;
{
double _n_i_37207=std::floor(_n_x_37204);
double _n_j_37208=std::floor(_n_y_37205);
double _n_k_37209=std::floor(_n_z_37206);
double _n_u_37210=_n_ease_37186((_n_x_37204-_n_i_37207));
double _n_v_37211=_n_ease_37186((_n_y_37205-_n_j_37208));
double _n_w_37212=_n_ease_37186((_n_z_37206-_n_k_37209));
auto _n_n_37213=[&]( double _a0,double _a1,double _a2) mutable ->double{double _n_a_37214=_a0;
double _n_b_37215=_a1;
double _n_c_37216=_a2;
return _n_hash_37185((_n_i_37207+_n_a_37214),(_n_j_37208+_n_b_37215),(_n_k_37209+_n_c_37216));};
return ([&](){auto _n_argument_37280=([&](){auto _n_argument_37281=([&](){auto _n_argument_37282=_n_n_37213(0.0,0.0,0.0);auto _n_argument_37283=_n_n_37213(1.0,0.0,0.0);auto _n_argument_37284=_n_u_37210;return _n_mix_37187(_n_argument_37282,_n_argument_37283,_n_argument_37284);})();auto _n_argument_37285=([&](){auto _n_argument_37286=_n_n_37213(0.0,1.0,0.0);auto _n_argument_37287=_n_n_37213(1.0,1.0,0.0);auto _n_argument_37288=_n_u_37210;return _n_mix_37187(_n_argument_37286,_n_argument_37287,_n_argument_37288);})();auto _n_argument_37289=_n_v_37211;return _n_mix_37187(_n_argument_37281,_n_argument_37285,_n_argument_37289);})();auto _n_argument_37290=([&](){auto _n_argument_37291=([&](){auto _n_argument_37292=_n_n_37213(0.0,0.0,1.0);auto _n_argument_37293=_n_n_37213(1.0,0.0,1.0);auto _n_argument_37294=_n_u_37210;return _n_mix_37187(_n_argument_37292,_n_argument_37293,_n_argument_37294);})();auto _n_argument_37295=([&](){auto _n_argument_37296=_n_n_37213(0.0,1.0,1.0);auto _n_argument_37297=_n_n_37213(1.0,1.0,1.0);auto _n_argument_37298=_n_u_37210;return _n_mix_37187(_n_argument_37296,_n_argument_37297,_n_argument_37298);})();auto _n_argument_37299=_n_v_37211;return _n_mix_37187(_n_argument_37291,_n_argument_37295,_n_argument_37299);})();auto _n_argument_37300=_n_w_37212;return _n_mix_37187(_n_argument_37280,_n_argument_37290,_n_argument_37300);})();

}
}

double _n_psi_37189(double _a0,double _a1,double _a2){double _n_x_37217=_a0;
double _n_y_37218=_a1;
double _n_t_37219=_a2;
return (_n_y_37218+(5.0*([&](){auto _n_left_37301=_n_noise_37188(((_n_x_37217*0.04)-(_n_t_37219*0.05)),(_n_y_37218*0.18),(_n_t_37219*0.02));auto _n_right_37302=(0.35*_n_noise_37188(((_n_x_37217*0.07)+4.0),(_n_y_37218*0.4),(_n_t_37219*0.04)));return (_n_left_37301+_n_right_37302);})()));}

struct Native_wind final:ascii::Piece{
double _n_cols_37190{};
double _n_rows_37191{};
d::Array<d::Array<d::String,false>,false> _n_g_37192{};
std::function<d::String(double,std::shared_ptr<_n_Record_37272>)> _render;
std::shared_ptr<_n_Record_37194> _n_gusts_37193(double _a0,double _a1){double _n_k_37220=_a0;
double _n_t_37221=_a1;
{
d::Array<uint8_t,true> _n_mask_37222=d::Array<uint8_t,true>(size_t(this->_n_cols_37190));
d::Array<d::Array<double,false>,false> _n_spans_37223=d::Array<d::Array<double,false>,false>{};
{double _n_c_37224=0.0;
double _n_from_37225=(-d::number(1.0));
for(;d::truth((_n_c_37224<=this->_n_cols_37190));(void)((_n_c_37224++))){d::check_cancel();bool _n_on_37226=([&]()->bool{auto _n_logical_37346=(_n_c_37224<this->_n_cols_37190);return d::truth(_n_logical_37346)?(([&](){auto _n_left_37347=_n_noise_37188(((_n_c_37224*0.09)-(_n_t_37221*0.5)),(_n_k_37220*1.7),(_n_t_37221*0.05));auto _n_right_37348=d::minimum({1.0,((_n_c_37224+1.0)/8.0),((this->_n_cols_37190-_n_c_37224)/8.0)});return (_n_left_37347*_n_right_37348);})()>0.5):_n_logical_37346;})();
if((d::truth(_n_on_37226)&&d::truth((_n_from_37225<0.0)))){d::check_cancel();(void)((_n_from_37225=_n_c_37224));
}
if((d::truth((!d::truth(_n_on_37226)))&&d::truth((_n_from_37225>=0.0)))){d::check_cancel();if(d::truth(((_n_c_37224-_n_from_37225)>=_n_MIN_37180))){d::check_cancel();(void)(_n_mask_37222.fill(2.0,_n_from_37225,_n_c_37224));
if(d::truth(((_n_c_37224-_n_from_37225)>=_n_TIP_37181))){d::check_cancel();(void)(([&](){auto&& _n_array_37349=_n_mask_37222;auto _n_index_37350=_n_from_37225;auto _n_value_37351=1.0;d::put(_n_array_37349,_n_index_37350,_n_value_37351);return _n_value_37351;})());
}
(void)(_n_spans_37223.push(d::Array<double,false>{_n_from_37225,(_n_c_37224-1.0)}));
}
(void)((_n_from_37225=(-d::number(1.0))));
}
}}
return ([&](){auto _n_object_37353=std::make_shared<_n_Record_37194>();_n_object_37353->_p_mask=_n_mask_37222;_n_object_37353->_p_spans=_n_spans_37223;_n_object_37353->_p_row=d::Array<int16_t,true>(size_t(this->_n_cols_37190)).fill((-d::number(1.0)));_n_object_37353->_p_cells=d::Array<double,false>{};return _n_object_37353;})();

}
}

bool _n_free_37195(double _a0,double _a1){double _n_r_37227=_a0;
double _n_c_37228=_a1;
return ([&]()->bool{auto _n_logical_37354=([&]()->bool{auto _n_logical_37355=([&]()->bool{auto _n_logical_37356=([&]()->bool{auto _n_logical_37357=(_n_r_37227>=0.0);return d::truth(_n_logical_37357)?(_n_r_37227<this->_n_rows_37191):_n_logical_37357;})();return d::truth(_n_logical_37356)?(_n_c_37228>=0.0):_n_logical_37356;})();return d::truth(_n_logical_37355)?(_n_c_37228<this->_n_cols_37190):_n_logical_37355;})();return d::truth(_n_logical_37354)?(d::at(d::at(this->_n_g_37192,_n_r_37227),_n_c_37228)==d::String(u" ")):_n_logical_37354;})();}

explicit Native_wind(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_37303=_n_meta_37175;
this->_n_cols_37190=_n_binding_37303->_p_cols;
this->_n_rows_37191=_n_binding_37303->_p_rows;
this->_n_g_37192=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_37191,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_37190));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_37272> _a1) mutable ->d::String{double _n_t_37229=_a0;
{
for(auto &&_n_item_37304:this->_n_g_37192){d::check_cancel();d::Array<d::String,false> _n_row_37230=_n_item_37304;
(void)(_n_row_37230.fill(d::String(u" ")));
}
d::Array<std::shared_ptr<_n_Record_37194>,false> _n_lines_37231=d::Array<std::shared_ptr<_n_Record_37194>,false>{};
{double _n_c_37232=0.0;
for(;d::truth((_n_c_37232<this->_n_cols_37190));(void)((_n_c_37232++))){d::check_cancel();double _n_was_37233=std::floor((_n_psi_37189((_n_c_37232+0.5),0.0,_n_t_37229)/_n_GAP_37177));
{double _n_j_37234=0.0;
for(;d::truth((_n_j_37234<(this->_n_rows_37191*3.0)));(void)((_n_j_37234++))){d::check_cancel();double _n_now_37235=std::floor((_n_psi_37189((_n_c_37232+0.5),((_n_j_37234+1.0)/3.0),_n_t_37229)/_n_GAP_37177));
double _n_k_37236=d::maximum({_n_now_37235,_n_was_37233});
bool _n_same_37237=(_n_now_37235==_n_was_37233);
(void)((_n_was_37233=_n_now_37235));
if(d::truth(_n_same_37237)){d::check_cancel();continue;
}
std::shared_ptr<_n_Record_37194> _n_line_37238=([&]()->std::shared_ptr<_n_Record_37194>{auto&& _n_array_37305=_n_lines_37231;auto _n_index_37306=_n_k_37236;auto _n_old_37308=d::at(_n_array_37305,_n_index_37306);if(d::present(_n_old_37308))return _n_old_37308;auto _n_value_37307=this->_n_gusts_37193(_n_k_37236,_n_t_37229);d::put(_n_array_37305,_n_index_37306,_n_value_37307);return _n_value_37307;})();
if(d::truth((d::at(_n_line_37238->_p_row,_n_c_37232)<0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_37309=_n_line_37238->_p_row;auto _n_index_37310=_n_c_37232;auto _n_value_37311=std::floor((_n_j_37234/3.0));d::put(_n_array_37309,_n_index_37310,_n_value_37311);return _n_value_37311;})());
}
double _n_on_37239=d::at(_n_line_37238->_p_mask,_n_c_37232);
if(d::truth(_n_on_37239)){d::check_cancel();(void)((([&](){auto&& _n_array_37312=d::at(this->_n_g_37192,std::floor((_n_j_37234/3.0)));auto _n_index_37313=_n_c_37232;auto _n_value_37314=d::at((d::truth((_n_on_37239==1.0))?_n_END_37179:_n_BAR_37178),d::mod(_n_j_37234,3.0));d::put(_n_array_37312,_n_index_37313,_n_value_37314);return _n_value_37314;})(),([&](){auto _n_argument_37315=_n_c_37232;auto _n_argument_37316=std::floor((_n_j_37234/3.0));return _n_line_37238->_p_cells.push(_n_argument_37315,_n_argument_37316);})()));
}
}}
}}
for(auto &&_n_item_37317:_n_lines_37231){d::check_cancel();std::shared_ptr<_n_Record_37194> _n_line_37240=_n_item_37317;
{
if(d::truth((!d::truth(_n_line_37240)))){d::check_cancel();continue;
}
auto _n_binding_37318=_n_line_37240;
d::Array<double,false> _n_cells_37241=_n_binding_37318->_p_cells;
double _n_i_37242=0.0;
for(auto &&_n_item_37319:_n_line_37240->_p_spans){d::check_cancel();auto _n_binding_37320=_n_item_37319;
double _n_from_37243=d::at(_n_binding_37320,0.0);
double _n_to_37244=d::at(_n_binding_37320,1.0);
{
while((d::truth((_n_i_37242<double(_n_cells_37241.size())))&&d::truth((d::at(_n_cells_37241,_n_i_37242)<_n_from_37243)))){d::check_cancel();(void)((_n_i_37242=(_n_i_37242+2.0)));
}
double _n_n_37245=_n_i_37242;
while((d::truth((_n_n_37245<double(_n_cells_37241.size())))&&d::truth((d::at(_n_cells_37241,_n_n_37245)<=_n_to_37244)))){d::check_cancel();(void)((_n_n_37245=(_n_n_37245+2.0)));
}
if(d::truth(((_n_n_37245-_n_i_37242)<=10.0))){d::check_cancel();{double _n_k_37246=_n_i_37242;
for(;d::truth((_n_k_37246<_n_n_37245));(void)((_n_k_37246=(_n_k_37246+2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_37321=d::at(this->_n_g_37192,d::at(_n_cells_37241,(_n_k_37246+1.0)));auto _n_index_37322=d::at(_n_cells_37241,_n_k_37246);auto _n_value_37323=d::String(u" ");d::put(_n_array_37321,_n_index_37322,_n_value_37323);return _n_value_37323;})());
}}
}
(void)((_n_i_37242=_n_n_37245));

}
}

}
}
d::Array<d::Array<double,false>,false> _n_heads_37247=d::Array<d::Array<double,false>,false>{};
(void)(d::forEach(_n_lines_37231,[&]( std::shared_ptr<_n_Record_37194> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_37194> _n_line_37248=_a0;
double _n_k_37249=_a1;
{
for(auto &&_n_item_37324:_n_line_37248->_p_spans){d::check_cancel();auto _n_binding_37325=_n_item_37324;
double _n_from_37250=d::at(_n_binding_37325,0.0);
double _n_to_37251=d::at(_n_binding_37325,1.0);
if((d::truth((((_n_to_37251-_n_from_37250)+1.0)>=_n_CURL_37182))&&d::truth((d::at(_n_line_37248->_p_row,_n_to_37251)>=0.0)))){d::check_cancel();(void)(_n_heads_37247.push(d::Array<double,false>{(_n_to_37251-_n_from_37250),_n_k_37249,_n_to_37251}));
}
}

}
}));
(void)(_n_heads_37247.sort([=]( d::Array<double,false> _a0,d::Array<double,false> _a1) mutable ->double{d::Array<double,false> _n_a_37252=_a0;
d::Array<double,false> _n_b_37253=_a1;
return (d::at(_n_b_37253,0.0)-d::at(_n_a_37252,0.0));}));
d::Array<d::Array<double,false>,false> _n_curls_37254=d::Array<d::Array<double,false>,false>{};
auto _n_room_37255=[&]( double _a0,double _a1,double _a2) mutable ->bool{double _n_r_37256=_a0;
double _n_to_37257=_a1;
double _n_d_37258=_a2;
{
if((d::truth((!d::truth(this->_n_free_37195((_n_r_37256+_n_d_37258),(_n_to_37257-2.0)))))||d::truth((!d::truth(this->_n_free_37195(_n_r_37256,(_n_to_37257+1.0))))))){d::check_cancel();return false;
}
for(auto &&_n_item_37326:d::Array<double,false>{(_n_r_37256+_n_d_37258),(_n_r_37256+(2.0*_n_d_37258))}){d::check_cancel();double _n_rr_37259=_n_item_37326;
{double _n_c_37260=(_n_to_37257-5.0);
for(;d::truth((_n_c_37260<=(_n_to_37257+2.0)));(void)((_n_c_37260++))){d::check_cancel();if(((((d::truth((_n_rr_37259>=0.0))&&d::truth((_n_rr_37259<this->_n_rows_37191)))&&d::truth((_n_c_37260>=0.0)))&&d::truth((_n_c_37260<this->_n_cols_37190)))&&d::truth((d::at(d::at(this->_n_g_37192,_n_rr_37259),_n_c_37260)!=d::String(u" "))))){d::check_cancel();return false;
}
}}
}
return true;

}
};
for(auto &&_n_item_37327:_n_heads_37247){d::check_cancel();auto _n_binding_37328=_n_item_37327;
double _n_k_37261=d::at(_n_binding_37328,1.0);
double _n_to_37262=d::at(_n_binding_37328,2.0);
{
std::shared_ptr<_n_Record_37194> _n_line_37263=d::at(_n_lines_37231,_n_k_37261);
double _n_r_37264=d::at(_n_line_37263->_p_row,_n_to_37262);
double _n_d_37265=(d::truth(d::mod(_n_k_37261,2.0))?1.0:(-d::number(1.0)));
if((((d::truth((double(_n_curls_37254.size())>=_n_MAX_CURLS_37183))||d::truth((_n_to_37262<(_n_FLAT_37184+2.0))))||d::truth(((_n_r_37264+_n_d_37265)<0.0)))||d::truth(((_n_r_37264+_n_d_37265)>=this->_n_rows_37191)))){d::check_cancel();continue;
}
bool _n_level_37266=true;
{double _n_c_37267=(_n_to_37262-_n_FLAT_37184);
for(;d::truth((_n_c_37267<_n_to_37262));(void)((_n_c_37267++))){d::check_cancel();if((d::truth((d::at(_n_line_37263->_p_row,_n_c_37267)!=_n_r_37264))||d::truth((!d::truth(d::includes(_n_BAR_37178,d::at(d::at(this->_n_g_37192,_n_r_37264),_n_c_37267))))))){d::check_cancel();(void)((_n_level_37266=false));
}
}}
if((d::truth((!d::truth(_n_level_37266)))||d::truth((!d::truth(_n_room_37255(_n_r_37264,_n_to_37262,_n_d_37265)))))){d::check_cancel();continue;
}
if(d::truth(d::some(_n_curls_37254,[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_37329=_a0;
double _n_cr_37268=d::at(_n_binding_37329,0.0);
double _n_cc_37269=d::at(_n_binding_37329,1.0);
return ([&]()->bool{auto _n_logical_37330=(std::fabs((_n_cr_37268-_n_r_37264))<5.0);return d::truth(_n_logical_37330)?(std::fabs((_n_cc_37269-_n_to_37262))<16.0):_n_logical_37330;})();}))){d::check_cancel();continue;
}
(void)(_n_curls_37254.push(d::Array<double,false>{_n_r_37264,_n_to_37262}));
{double _n_c_37270=(_n_to_37262-_n_FLAT_37184);
for(;d::truth((_n_c_37270<_n_to_37262));(void)((_n_c_37270++))){d::check_cancel();(void)(([&](){auto&& _n_array_37331=d::at(this->_n_g_37192,_n_r_37264);auto _n_index_37332=_n_c_37270;auto _n_value_37333=d::String(u"─");d::put(_n_array_37331,_n_index_37332,_n_value_37333);return _n_value_37333;})());
}}
(void)(([&](){auto&& _n_array_37334=d::at(this->_n_g_37192,_n_r_37264);auto _n_index_37335=_n_to_37262;auto _n_value_37336=(d::truth((_n_d_37265>0.0))?d::String(u"╮"):d::String(u"╯"));d::put(_n_array_37334,_n_index_37335,_n_value_37336);return _n_value_37336;})());
(void)(([&](){auto&& _n_array_37337=d::at(this->_n_g_37192,(_n_r_37264+_n_d_37265));auto _n_index_37338=_n_to_37262;auto _n_value_37339=(d::truth((_n_d_37265>0.0))?d::String(u"╯"):d::String(u"╮"));d::put(_n_array_37337,_n_index_37338,_n_value_37339);return _n_value_37339;})());
(void)(([&](){auto&& _n_array_37340=d::at(this->_n_g_37192,(_n_r_37264+_n_d_37265));auto _n_index_37341=(_n_to_37262-1.0);auto _n_value_37342=d::String(u"─");d::put(_n_array_37340,_n_index_37341,_n_value_37342);return _n_value_37342;})());
(void)(([&](){auto&& _n_array_37343=d::at(this->_n_g_37192,(_n_r_37264+_n_d_37265));auto _n_index_37344=(_n_to_37262-2.0);auto _n_value_37345=(d::truth((_n_d_37265>0.0))?d::String(u"╰"):d::String(u"╭"));d::put(_n_array_37343,_n_index_37344,_n_value_37345);return _n_value_37345;})());

}
}
return d::join(d::map(this->_n_g_37192,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_37271=_a0;
return d::join(_n_row_37271,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("wind").cols)*ascii::catalog_meta("wind").rows);auto _env=std::make_shared<_n_Record_37272>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &wind_meta(){return catalog_meta("wind");}
std::unique_ptr<Piece> make_wind(const AsciiPieceOptions &o){return std::make_unique<Native_wind>(o);}
}
