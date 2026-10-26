// Direct, statically typed C++ from src/pieces/glitch.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12361;
struct _n_Record_12362;
struct _n_Record_12468;
struct _n_Record_12469;
struct _n_Record_12361{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_12362> _p_options{};
static std::shared_ptr<_n_Record_12361> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12361>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_12362>>(j["options"]);return out;}
};
struct _n_Record_12362{
d::String _p_text{};
static std::shared_ptr<_n_Record_12362> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12362>();out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_12468{
std::optional<d::String> _p_text{};
static std::shared_ptr<_n_Record_12468> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12468>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);return out;}
};
struct _n_Record_12469{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12469> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12469>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_12369(double _a0);
d::Array<d::Array<double,false>,false> _n_bitmap_12370(d::String _a0);
d::String _n_join_12371(d::Array<d::String,false> _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_12361> _n_meta_12360=[](){return ([&](){auto _n_object_12474=std::make_shared<_n_Record_12361>();_n_object_12474->_p_name=d::String(u"glitch");_n_object_12474->_p_category=d::String(u"type");_n_object_12474->_p_note=d::String(u"a pixel word that tears into sliding slices in short bursts");_n_object_12474->_p_cols=64.0;_n_object_12474->_p_rows=13.0;_n_object_12474->_p_fps=15.0;_n_object_12474->_p_options=([&](){auto _n_object_12476=std::make_shared<_n_Record_12362>();_n_object_12476->_p_text=d::String(u"noise");return _n_object_12476;})();return _n_object_12474;})();}();
const d::String _n_PACKED_12363=[](){return (d::string((d::string((d::string((d::string((d::string(d::String(u"0ehjlphe14c4444e2eh1248v3v2421he426aiv225vgu11he668guhhe7v1248888ehhehhe9ehhf12c"))+d::string(d::String(u"AehhvhhhBuhhuhhuCehgggheDuhhhhhuEvgguggvFvggugggGehgnhhfHhhhvhhhIe44444eJ72222ic"))))+d::string(d::String(u"KhikokihLggggggvMhrllhhhNhhpljhhOehhhhhePuhhugggQehhhlidRuhhukihSfgge11uTv444444"))))+d::string(d::String(u"UhhhhhheVhhhhha4WhhhlllaXhha4ahhYhha4444Zv1248gv.0000004,0000048:0040040!4444404"))))+d::string(d::String(u"?eh12404-000e000'4400000\"aa00000/11248gg&cik8lid+044v440·0004000*04lel40#aavavaa"))))+d::string(d::String(u"(2488842)8422248@ehnlngf%op248j3=00v0v00_000000v 0000000")));}();
d::Dict<d::String,d::Array<double,false>> _n_FONT_12364=[](){return ([&](){d::Dict<d::String,d::Array<double,false>> _n_dictionary_12478;return _n_dictionary_12478;})();}();
const double _n_PERIOD_12365=[](){return 7.0;}();
const double _n_STEPS_12366=[](){return 15.0;}();
d::Array<d::Array<double,false>,false> _n_BURSTS_12367=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.8,1.2,0.55},d::Array<double,false>{2.75,3.3,1.0},d::Array<double,false>{4.85,5.3,0.75}};}();
const d::String _n_NOISE_12368=[](){return d::String(u"▓▒░▚▞▙▟▛▜#%=+");}();
const bool _n_init_12479=[](){{double _n_i_12386=0.0;
for(;d::truth((_n_i_12386<double(_n_PACKED_12363.size())));(void)((_n_i_12386=(_n_i_12386+8.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_12480=_n_FONT_12364;auto _n_index_12481=d::at(_n_PACKED_12363,_n_i_12386);auto _n_value_12482=d::map(([&](){d::Array<d::String,false> _n_array_12483;for(const auto &_v:d::slice(_n_PACKED_12363,(_n_i_12386+1.0),(_n_i_12386+8.0)))_n_array_12483.push(_v);return _n_array_12483;})(),[&]( d::String _a0) mutable ->double{d::String _n_d_12387=_a0;
return d::parseInt(_n_d_12387,32.0);});_n_array_12480.set(_n_index_12481,_n_value_12482);return _n_value_12482;})());
}}
return true;}();
std::function<double()> _n_mulberry32_12369(double _a0){double _n_a_12388=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_12388=double(d::i32((_n_a_12388+1831565813.0))|d::i32(0.0))));
double _n_t_12389=d::imul(double(d::i32(_n_a_12388)^d::i32(double(d::u32(_n_a_12388)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_12388)));
(void)((_n_t_12389=double(d::i32((_n_t_12389+d::imul(double(d::i32(_n_t_12389)^d::i32(double(d::u32(_n_t_12389)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_12389)))))^d::i32(_n_t_12389))));
return (double(d::u32(double(d::i32(_n_t_12389)^d::i32(double(d::u32(_n_t_12389)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

d::Array<d::Array<double,false>,false> _n_bitmap_12370(d::String _a0){d::String _n_text_12390=_a0;
{
d::Array<d::Array<double,false>,false> _n_px_12391=d::Array<d::Array<double,false>,false>{d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{}};
for(auto &&_n_item_12484:d::chars(d::upper(_n_text_12390))){d::check_cancel();d::String _n_ch_12392=_n_item_12484;
{
d::Array<double,false> _n_g_12393=([&]()->d::Array<double,false>{auto _n_logical_12485=_n_FONT_12364.get(_n_ch_12392);return d::truth(_n_logical_12485)?_n_logical_12485:_n_FONT_12364.get(d::String(u"?"));})();
double _n_lo_12394=4.0;
double _n_hi_12395=0.0;
{double _n_x_12396=0.0;
for(;d::truth((_n_x_12396<5.0));(void)((_n_x_12396++))){d::check_cancel();if(d::truth(d::some(_n_g_12393,[&]( double _a0) mutable ->double{double _n_b_12397=_a0;
return double(d::i32(_n_b_12397)&d::i32(double(d::i32(16.0)>>(d::u32(_n_x_12396)&31))));}))){d::check_cancel();(void)(((_n_lo_12394=d::minimum({_n_lo_12394,_n_x_12396})),(_n_hi_12395=d::maximum({_n_hi_12395,_n_x_12396}))));
}
}}
if(d::truth((_n_ch_12392==d::String(u" ")))){d::check_cancel();(void)(((_n_lo_12394=0.0),(_n_hi_12395=2.0)));
}
if(d::truth(double(d::at(_n_px_12391,0.0).size()))){d::check_cancel();(void)(d::forEach(_n_px_12391,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_row_12398=_a0;
return _n_row_12398.push(0.0);}));
}
{double _n_y_12399=0.0;
for(;d::truth((_n_y_12399<7.0));(void)((_n_y_12399++))){d::check_cancel();{double _n_x_12400=_n_lo_12394;
for(;d::truth((_n_x_12400<=_n_hi_12395));(void)((_n_x_12400++))){d::check_cancel();(void)(d::at(_n_px_12391,_n_y_12399).push((d::truth(double(d::i32(d::at(_n_g_12393,_n_y_12399))&d::i32(double(d::i32(16.0)>>(d::u32(_n_x_12400)&31)))))?1.0:0.0)));
}}
}}

}
}
return _n_px_12391;

}
}

d::String _n_join_12371(d::Array<d::String,false> _a0,double _a1,double _a2){d::Array<d::String,false> _n_out_12463=_a0;
double _n_cols_12464=_a1;
double _n_rows_12465=_a2;
{
d::Array<d::String,false> _n_lines_12466=d::Array<d::String,false>{};
{double _n_r_12467=0.0;
for(;d::truth((_n_r_12467<_n_rows_12465));(void)((_n_r_12467++))){d::check_cancel();(void)(_n_lines_12466.push(d::join(_n_out_12463.slice((_n_r_12467*_n_cols_12464),((_n_r_12467+1.0)*_n_cols_12464)),d::String(u""))));
}}
return d::join(_n_lines_12466,d::String(u"\n"));

}
}

struct Native_glitch final:ascii::Piece{
d::String _n_text_12372{};
double _n_cols_12373{};
double _n_rows_12374{};
d::Array<d::Array<double,false>,false> _n_px_12375{};
double _n_w_12376{};
double _n_sx_12377{};
double _n_x0_12378{};
double _n_y0_12379{};
d::Array<uint8_t,true> _n_clean_12380{};
d::Array<d::String,false> _n_out_12382{};
d::Array<int8_t,true> _n_shift_12383{};
std::function<d::String(double,std::shared_ptr<_n_Record_12469>)> _render;
bool _n_ink_12381(double _a0,double _a1){double _n_r_12404=_a0;
double _n_c_12405=_a1;
return ([&]()->bool{auto _n_logical_12521=([&]()->bool{auto _n_logical_12522=([&]()->bool{auto _n_logical_12523=([&]()->bool{auto _n_logical_12524=(_n_r_12404>=0.0);return d::truth(_n_logical_12524)?(_n_r_12404<this->_n_rows_12374):_n_logical_12524;})();return d::truth(_n_logical_12523)?(_n_c_12405>=0.0):_n_logical_12523;})();return d::truth(_n_logical_12522)?(_n_c_12405<this->_n_cols_12373):_n_logical_12522;})();return d::truth(_n_logical_12521)?(d::at(this->_n_clean_12380,((_n_r_12404*this->_n_cols_12373)+_n_c_12405))==1.0):_n_logical_12521;})();}

double _n_strength_12384(double _a0){double _n_u_12406=_a0;
{
for(auto &&_n_item_12525:_n_BURSTS_12367){d::check_cancel();auto _n_binding_12526=_n_item_12525;
double _n_s_12407=d::at(_n_binding_12526,0.0);
double _n_e_12408=d::at(_n_binding_12526,1.0);
double _n_peak_12409=d::at(_n_binding_12526,2.0);
{
if((d::truth((_n_u_12406>=_n_s_12407))&&d::truth((_n_u_12406<_n_e_12408)))){d::check_cancel();return (_n_peak_12409*(0.35+(0.65*std::sin(((ascii::PI*(_n_u_12406-_n_s_12407))/(_n_e_12408-_n_s_12407))))));
}

}
}
return 0.0;

}
}

explicit Native_glitch(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12486=d::decode<std::shared_ptr<_n_Record_12468>>(_options.data);
this->_n_text_12372=(d::present(_n_binding_12486->_p_text)?d::read(_n_binding_12486->_p_text):_n_meta_12360->_p_options->_p_text);
auto _n_binding_12487=_n_meta_12360;
this->_n_cols_12373=_n_binding_12487->_p_cols;
this->_n_rows_12374=_n_binding_12487->_p_rows;
this->_n_px_12375=_n_bitmap_12370(d::string(this->_n_text_12372));
this->_n_w_12376=double(d::at(this->_n_px_12375,0.0).size());
this->_n_sx_12377=(d::truth(((this->_n_w_12376*2.0)<=(this->_n_cols_12373-8.0)))?2.0:1.0);
this->_n_x0_12378=d::maximum({0.0,double(d::i32((this->_n_cols_12373-(this->_n_w_12376*this->_n_sx_12377)))>>(d::u32(1.0)&31))});
this->_n_y0_12379=double(d::i32((this->_n_rows_12374-7.0))>>(d::u32(1.0)&31));
this->_n_clean_12380=d::Array<uint8_t,true>(size_t((this->_n_cols_12373*this->_n_rows_12374)));
{double _n_y_12401=0.0;
for(;d::truth((_n_y_12401<7.0));(void)((_n_y_12401++))){d::check_cancel();{double _n_c_12402=0.0;
for(;d::truth((_n_c_12402<this->_n_cols_12373));(void)((_n_c_12402++))){d::check_cancel();double _n_x_12403=std::floor(((_n_c_12402-this->_n_x0_12378)/this->_n_sx_12377));
if(((d::truth((_n_c_12402>=this->_n_x0_12378))&&d::truth((_n_x_12403<this->_n_w_12376)))&&d::truth(d::at(d::at(this->_n_px_12375,_n_y_12401),_n_x_12403)))){d::check_cancel();(void)(([&](){auto&& _n_array_12488=this->_n_clean_12380;auto _n_index_12489=(((this->_n_y0_12379+_n_y_12401)*this->_n_cols_12373)+_n_c_12402);auto _n_value_12490=1.0;d::put(_n_array_12488,_n_index_12489,_n_value_12490);return _n_value_12490;})());
}
}}
}}
this->_n_out_12382=d::Array<d::String,false>(size_t((this->_n_cols_12373*this->_n_rows_12374)));
this->_n_shift_12383=d::Array<int8_t,true>(size_t(this->_n_rows_12374));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12469> _a1) mutable ->d::String{double _n_t_12410=_a0;
{
double _n_u_12411=d::mod((d::mod(_n_t_12410,_n_PERIOD_12365)+_n_PERIOD_12365),_n_PERIOD_12365);
double _n_step_12412=std::floor(((_n_u_12411*_n_STEPS_12366)+0.000001));
std::function<double()> _n_rand_12413=_n_mulberry32_12369(((_n_step_12412*7919.0)+17.0));
double _n_s_12414=this->_n_strength_12384((_n_step_12412/_n_STEPS_12366));
if((d::truth((_n_s_12414>0.0))&&d::truth((_n_rand_12413()<0.12)))){d::check_cancel();(void)((_n_s_12414=0.0));
}
(void)(this->_n_out_12382.fill(d::String(u" ")));
(void)(this->_n_shift_12383.fill(0.0));
if(d::truth((!d::truth(_n_s_12414)))){d::check_cancel();{double _n_k_12415=0.0;
for(;d::truth((_n_k_12415<double(this->_n_out_12382.size())));(void)((_n_k_12415++))){d::check_cancel();if(d::truth(d::at(this->_n_clean_12380,_n_k_12415))){d::check_cancel();(void)(([&](){auto&& _n_array_12491=this->_n_out_12382;auto _n_index_12492=_n_k_12415;auto _n_value_12493=d::String(u"█");d::put(_n_array_12491,_n_index_12492,_n_value_12493);return _n_value_12493;})());
}
}}
return _n_join_12371(this->_n_out_12382,this->_n_cols_12373,this->_n_rows_12374);
}
double _n_bands_12416=(1.0+std::floor((_n_rand_12413()*(1.0+(2.0*_n_s_12414)))));
{double _n_b_12417=0.0;
for(;d::truth((_n_b_12417<_n_bands_12416));(void)((_n_b_12417++))){d::check_cancel();double _n_top_12418=((this->_n_y0_12379-1.0)+std::floor((_n_rand_12413()*8.0)));
double _n_h_12419=(1.0+std::floor((_n_rand_12413()*3.0)));
double _n_dx_12420=([&](){auto _n_left_12494=(d::truth((_n_rand_12413()<0.5))?(-d::number(1.0)):1.0);auto _n_right_12495=(3.0+std::floor((_n_rand_12413()*(2.0+(8.0*_n_s_12414)))));return (_n_left_12494*_n_right_12495);})();
{double _n_r_12421=_n_top_12418;
for(;(d::truth((_n_r_12421<(_n_top_12418+_n_h_12419)))&&d::truth((_n_r_12421<this->_n_rows_12374)));(void)((_n_r_12421++))){d::check_cancel();(void)(([&](){auto&& _n_array_12496=this->_n_shift_12383;auto _n_index_12497=_n_r_12421;auto _n_value_12498=(d::at(_n_array_12496,_n_index_12497)+_n_dx_12420);d::put(_n_array_12496,_n_index_12497,_n_value_12498);return _n_value_12498;})());
}}
}}
bool _n_split_12422=(_n_rand_12413()<(0.4+(0.5*_n_s_12414)));
double _n_sub_12423=(0.02+((0.08*_n_s_12414)*_n_rand_12413()));
double _n_holes_12424=(0.01+(0.04*_n_s_12414));
{double _n_r_12425=0.0;
for(;d::truth((_n_r_12425<this->_n_rows_12374));(void)((_n_r_12425++))){d::check_cancel();{double _n_c_12426=0.0;
for(;d::truth((_n_c_12426<this->_n_cols_12373));(void)((_n_c_12426++))){d::check_cancel();double _n_k_12427=((_n_r_12425*this->_n_cols_12373)+_n_c_12426);
if(d::truth(this->_n_ink_12381(_n_r_12425,(_n_c_12426-d::at(this->_n_shift_12383,_n_r_12425))))){d::check_cancel();double _n_v_12428=_n_rand_12413();
(void)(([&](){auto&& _n_array_12499=this->_n_out_12382;auto _n_index_12500=_n_k_12427;auto _n_value_12501=(d::truth((_n_v_12428<_n_sub_12423))?d::at(_n_NOISE_12368,std::floor((_n_rand_12413()*double(_n_NOISE_12368.size())))):(d::truth((_n_v_12428<(_n_sub_12423+_n_holes_12424)))?d::String(u" "):d::String(u"█")));d::put(_n_array_12499,_n_index_12500,_n_value_12501);return _n_value_12501;})());
}
}}
}}
d::Array<d::String,false> _n_main_12429=this->_n_out_12382.slice();
auto _n_bare_12430=[&]( double _a0,double _a1) mutable ->bool{double _n_k_12431=_a0;
double _n_c_12432=_a1;
return ([&]()->bool{auto _n_logical_12502=([&]()->bool{auto _n_logical_12504=(d::at(_n_main_12429,_n_k_12431)==d::String(u" "));return d::truth(_n_logical_12504)?([&]()->bool{auto _n_logical_12505=(_n_c_12432==0.0);return d::truth(_n_logical_12505)?_n_logical_12505:(d::at(_n_main_12429,(_n_k_12431-1.0))==d::String(u" "));})():_n_logical_12504;})();return d::truth(_n_logical_12502)?([&]()->bool{auto _n_logical_12503=(_n_c_12432==(this->_n_cols_12373-1.0));return d::truth(_n_logical_12503)?_n_logical_12503:(d::at(_n_main_12429,(_n_k_12431+1.0))==d::String(u" "));})():_n_logical_12502;})();};
{double _n_r_12433=0.0;
for(;(d::truth(_n_split_12422)&&d::truth((_n_r_12433<this->_n_rows_12374)));(void)((_n_r_12433++))){d::check_cancel();{double _n_c_12434=0.0;
for(;(d::truth((std::fabs(d::at(this->_n_shift_12383,_n_r_12433))>=5.0))&&d::truth((_n_c_12434<this->_n_cols_12373)));(void)((_n_c_12434++))){d::check_cancel();double _n_k_12435=((_n_r_12433*this->_n_cols_12373)+_n_c_12434);
if((d::truth(_n_bare_12430(_n_k_12435,_n_c_12434))&&d::truth(this->_n_ink_12381(_n_r_12433,_n_c_12434)))){d::check_cancel();(void)(([&](){auto&& _n_array_12506=this->_n_out_12382;auto _n_index_12507=_n_k_12435;auto _n_value_12508=d::String(u"▒");d::put(_n_array_12506,_n_index_12507,_n_value_12508);return _n_value_12508;})());
}
}}
}}
double _n_smears_12436=(d::truth((_n_rand_12413()<(0.45*_n_s_12414)))?(1.0+std::floor((_n_rand_12413()*2.0))):0.0);
{double _n_i_12437=0.0;
for(;d::truth((_n_i_12437<_n_smears_12436));(void)((_n_i_12437++))){d::check_cancel();double _n_r_12438=(this->_n_y0_12379+std::floor((_n_rand_12413()*7.0)));
double _n_c_12439=std::floor((_n_rand_12413()*this->_n_cols_12373));
while((d::truth((_n_c_12439<(this->_n_cols_12373-1.0)))&&d::truth((d::at(this->_n_out_12382,((_n_r_12438*this->_n_cols_12373)+_n_c_12439))!=d::String(u"█"))))){d::check_cancel();(void)((_n_c_12439++));
}
double _n_len_12440=(4.0+std::floor(((_n_rand_12413()*14.0)*_n_s_12414)));
{double _n_j_12441=1.0;
for(;(d::truth((_n_j_12441<=_n_len_12440))&&d::truth(((_n_c_12439+_n_j_12441)<this->_n_cols_12373)));(void)((_n_j_12441++))){d::check_cancel();(void)(([&](){auto&& _n_array_12509=this->_n_out_12382;auto _n_index_12510=(((_n_r_12438*this->_n_cols_12373)+_n_c_12439)+_n_j_12441);auto _n_value_12511=(d::truth((_n_j_12441>(_n_len_12440-2.0)))?d::String(u"░"):(d::truth((_n_j_12441>(_n_len_12440-5.0)))?d::String(u"▒"):d::String(u"▓")));d::put(_n_array_12509,_n_index_12510,_n_value_12511);return _n_value_12511;})());
}}
}}
double _n_blocks_12442=(d::truth((_n_rand_12413()<(0.5*_n_s_12414)))?(1.0+std::floor((_n_rand_12413()*2.0))):0.0);
{double _n_i_12443=0.0;
for(;d::truth((_n_i_12443<_n_blocks_12442));(void)((_n_i_12443++))){d::check_cancel();double _n_bw_12444=(3.0+std::floor((_n_rand_12413()*10.0)));
double _n_bh_12445=(1.0+std::floor((_n_rand_12413()*2.0)));
double _n_br_12446=(this->_n_y0_12379+std::floor((_n_rand_12413()*7.0)));
double _n_bc_12447=std::floor((_n_rand_12413()*(this->_n_cols_12373-_n_bw_12444)));
double _n_dr_12448=(std::floor((_n_rand_12413()*5.0))-2.0);
double _n_dc_12449=(std::floor((_n_rand_12413()*21.0))-10.0);
{double _n_r_12450=_n_br_12446;
for(;(d::truth((_n_r_12450<(_n_br_12446+_n_bh_12445)))&&d::truth((_n_r_12450<this->_n_rows_12374)));(void)((_n_r_12450++))){d::check_cancel();{double _n_c_12451=_n_bc_12447;
for(;d::truth((_n_c_12451<(_n_bc_12447+_n_bw_12444)));(void)((_n_c_12451++))){d::check_cancel();bool _n_from_12452=this->_n_ink_12381((_n_r_12450+_n_dr_12448),(_n_c_12451+_n_dc_12449));
(void)(([&](){auto&& _n_array_12512=this->_n_out_12382;auto _n_index_12513=((_n_r_12450*this->_n_cols_12373)+_n_c_12451);auto _n_value_12514=(d::truth(_n_from_12452)?(d::truth((_n_rand_12413()<0.3))?d::String(u"▓"):d::String(u"█")):(d::truth((_n_rand_12413()<(0.15*_n_s_12414)))?d::String(u"░"):d::String(u" ")));d::put(_n_array_12512,_n_index_12513,_n_value_12514);return _n_value_12514;})());
}}
}}
}}
if(d::truth((_n_rand_12413()<(0.5*_n_s_12414)))){d::check_cancel();double _n_r_12453=((this->_n_y0_12379-1.0)+std::floor((_n_rand_12413()*9.0)));
double _n_a_12454=std::floor(((_n_rand_12413()*this->_n_cols_12373)*0.6));
double _n_len_12455=(6.0+std::floor(((_n_rand_12413()*this->_n_cols_12373)*0.5)));
d::String _n_g_12456=d::at(d::String(u"▀▄─═"),std::floor((_n_rand_12413()*4.0)));
{double _n_c_12457=_n_a_12454;
for(;d::truth((_n_c_12457<d::minimum({this->_n_cols_12373,(_n_a_12454+_n_len_12455)})));(void)((_n_c_12457++))){d::check_cancel();if((d::truth((d::at(this->_n_out_12382,((_n_r_12453*this->_n_cols_12373)+_n_c_12457))==d::String(u" ")))||d::truth((_n_rand_12413()<0.5)))){d::check_cancel();(void)(([&](){auto&& _n_array_12515=this->_n_out_12382;auto _n_index_12516=((_n_r_12453*this->_n_cols_12373)+_n_c_12457);auto _n_value_12517=_n_g_12456;d::put(_n_array_12515,_n_index_12516,_n_value_12517);return _n_value_12517;})());
}
}}
}
if((d::truth((_n_s_12414>0.7))&&d::truth((_n_rand_12413()<0.25)))){d::check_cancel();double _n_dir_12458=(d::truth((_n_rand_12413()<0.5))?1.0:(-d::number(1.0)));
d::Array<d::String,false> _n_copy_12459=this->_n_out_12382.slice();
{double _n_r_12460=0.0;
for(;d::truth((_n_r_12460<this->_n_rows_12374));(void)((_n_r_12460++))){d::check_cancel();double _n_from_12461=(_n_r_12460-_n_dir_12458);
{double _n_c_12462=0.0;
for(;d::truth((_n_c_12462<this->_n_cols_12373));(void)((_n_c_12462++))){d::check_cancel();(void)(([&](){auto&& _n_array_12518=this->_n_out_12382;auto _n_index_12519=((_n_r_12460*this->_n_cols_12373)+_n_c_12462);auto _n_value_12520=((d::truth((_n_from_12461>=0.0))&&d::truth((_n_from_12461<this->_n_rows_12374)))?d::at(_n_copy_12459,((_n_from_12461*this->_n_cols_12373)+_n_c_12462)):d::String(u" "));d::put(_n_array_12518,_n_index_12519,_n_value_12520);return _n_value_12520;})());
}}
}}
}
return _n_join_12371(this->_n_out_12382,this->_n_cols_12373,this->_n_rows_12374);

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("glitch").cols)*ascii::catalog_meta("glitch").rows);auto _env=std::make_shared<_n_Record_12469>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &glitch_meta(){return catalog_meta("glitch");}
std::unique_ptr<Piece> make_glitch(const AsciiPieceOptions &o){return std::make_unique<Native_glitch>(o);}
}
