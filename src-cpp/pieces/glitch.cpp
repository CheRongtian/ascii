// Direct, statically typed C++ from src/pieces/glitch.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12360;
struct _n_Record_12361;
struct _n_Record_12467;
struct _n_Record_12468;
struct _n_Record_12360{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_12361> _p_options{};
static std::shared_ptr<_n_Record_12360> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12360>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_12361>>(j["options"]);return out;}
};
struct _n_Record_12361{
d::String _p_text{};
static std::shared_ptr<_n_Record_12361> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12361>();out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_12467{
std::optional<d::String> _p_text{};
static std::shared_ptr<_n_Record_12467> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12467>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);return out;}
};
struct _n_Record_12468{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12468> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12468>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_12368(double _a0);
d::Array<d::Array<double,false>,false> _n_bitmap_12369(d::String _a0);
d::String _n_join_12370(d::Array<d::String,false> _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_12360> _n_meta_12359=[](){return ([&](){auto _n_object_12473=std::make_shared<_n_Record_12360>();_n_object_12473->_p_name=d::String(u"glitch");_n_object_12473->_p_category=d::String(u"type");_n_object_12473->_p_note=d::String(u"a pixel word that tears into sliding slices in short bursts");_n_object_12473->_p_cols=64.0;_n_object_12473->_p_rows=13.0;_n_object_12473->_p_fps=15.0;_n_object_12473->_p_options=([&](){auto _n_object_12475=std::make_shared<_n_Record_12361>();_n_object_12475->_p_text=d::String(u"noise");return _n_object_12475;})();return _n_object_12473;})();}();
const d::String _n_PACKED_12362=[](){return (d::string((d::string((d::string((d::string((d::string(d::String(u"0ehjlphe14c4444e2eh1248v3v2421he426aiv225vgu11he668guhhe7v1248888ehhehhe9ehhf12c"))+d::string(d::String(u"AehhvhhhBuhhuhhuCehgggheDuhhhhhuEvgguggvFvggugggGehgnhhfHhhhvhhhIe44444eJ72222ic"))))+d::string(d::String(u"KhikokihLggggggvMhrllhhhNhhpljhhOehhhhhePuhhugggQehhhlidRuhhukihSfgge11uTv444444"))))+d::string(d::String(u"UhhhhhheVhhhhha4WhhhlllaXhha4ahhYhha4444Zv1248gv.0000004,0000048:0040040!4444404"))))+d::string(d::String(u"?eh12404-000e000'4400000\"aa00000/11248gg&cik8lid+044v440·0004000*04lel40#aavavaa"))))+d::string(d::String(u"(2488842)8422248@ehnlngf%op248j3=00v0v00_000000v 0000000")));}();
d::Dict<d::String,d::Array<double,false>> _n_FONT_12363=[](){return ([&](){d::Dict<d::String,d::Array<double,false>> _n_dictionary_12477;return _n_dictionary_12477;})();}();
const double _n_PERIOD_12364=[](){return 7.0;}();
const double _n_STEPS_12365=[](){return 15.0;}();
d::Array<std::array<double,3>,false> _n_BURSTS_12366=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{0.8,1.2,0.55},std::array<double,3>{2.75,3.3,1.0},std::array<double,3>{4.85,5.3,0.75}};}();
const d::String _n_NOISE_12367=[](){return d::String(u"▓▒░▚▞▙▟▛▜#%=+");}();
const bool _n_init_12478=[](){{double _n_i_12385=0.0;
for(;d::truth((_n_i_12385<double(_n_PACKED_12362.size())));(void)((_n_i_12385=(_n_i_12385+8.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_12479=_n_FONT_12363;auto _n_index_12480=d::at(_n_PACKED_12362,_n_i_12385);auto _n_value_12481=d::map(([&](){d::Array<d::String,false> _n_array_12482;for(const auto &_v:d::slice(_n_PACKED_12362,(_n_i_12385+1.0),(_n_i_12385+8.0)))_n_array_12482.push(_v);return _n_array_12482;})(),[&]( d::String _a0) mutable ->double{d::String _n_d_12386=_a0;
return d::parseInt(_n_d_12386,32.0);});_n_array_12479.set(_n_index_12480,_n_value_12481);return _n_value_12481;})());
}}
return true;}();
std::function<double()> _n_mulberry32_12368(double _a0){double _n_a_12387=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_12387=double(d::i32((_n_a_12387+1831565813.0))|d::i32(0.0))));
double _n_t_12388=d::imul(double(d::i32(_n_a_12387)^d::i32(double(d::u32(_n_a_12387)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_12387)));
(void)((_n_t_12388=double(d::i32((_n_t_12388+d::imul(double(d::i32(_n_t_12388)^d::i32(double(d::u32(_n_t_12388)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_12388)))))^d::i32(_n_t_12388))));
return (double(d::u32(double(d::i32(_n_t_12388)^d::i32(double(d::u32(_n_t_12388)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

d::Array<d::Array<double,false>,false> _n_bitmap_12369(d::String _a0){d::String _n_text_12389=_a0;
{
d::Array<d::Array<double,false>,false> _n_px_12390=d::Array<d::Array<double,false>,false>{d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{},d::Array<double,false>{}};
for(auto &&_n_item_12483:d::chars(d::upper(_n_text_12389))){d::check_cancel();d::String _n_ch_12391=_n_item_12483;
{
d::Array<double,false> _n_g_12392=([&]()->d::Array<double,false>{auto _n_logical_12484=_n_FONT_12363.get(_n_ch_12391);return d::truth(_n_logical_12484)?_n_logical_12484:_n_FONT_12363.get(d::String(u"?"));})();
double _n_lo_12393=4.0;
double _n_hi_12394=0.0;
{double _n_x_12395=0.0;
for(;d::truth((_n_x_12395<5.0));(void)((_n_x_12395++))){d::check_cancel();if(d::truth(d::some(_n_g_12392,[&]( double _a0) mutable ->double{double _n_b_12396=_a0;
return double(d::i32(_n_b_12396)&d::i32(double(d::i32(16.0)>>(d::u32(_n_x_12395)&31))));}))){d::check_cancel();(void)(((_n_lo_12393=d::minimum({_n_lo_12393,_n_x_12395})),(_n_hi_12394=d::maximum({_n_hi_12394,_n_x_12395}))));
}
}}
if(d::truth((_n_ch_12391==d::String(u" ")))){d::check_cancel();(void)(((_n_lo_12393=0.0),(_n_hi_12394=2.0)));
}
if(d::truth(double(d::at(_n_px_12390,0.0).size()))){d::check_cancel();(void)(d::forEach(_n_px_12390,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_row_12397=_a0;
return _n_row_12397.push(0.0);}));
}
{double _n_y_12398=0.0;
for(;d::truth((_n_y_12398<7.0));(void)((_n_y_12398++))){d::check_cancel();{double _n_x_12399=_n_lo_12393;
for(;d::truth((_n_x_12399<=_n_hi_12394));(void)((_n_x_12399++))){d::check_cancel();(void)(d::at(_n_px_12390,_n_y_12398).push((d::truth(double(d::i32(d::at(_n_g_12392,_n_y_12398))&d::i32(double(d::i32(16.0)>>(d::u32(_n_x_12399)&31)))))?1.0:0.0)));
}}
}}

}
}
return _n_px_12390;

}
}

d::String _n_join_12370(d::Array<d::String,false> _a0,double _a1,double _a2){d::Array<d::String,false> _n_out_12462=_a0;
double _n_cols_12463=_a1;
double _n_rows_12464=_a2;
{
d::Array<d::String,false> _n_lines_12465=d::Array<d::String,false>{};
{double _n_r_12466=0.0;
for(;d::truth((_n_r_12466<_n_rows_12464));(void)((_n_r_12466++))){d::check_cancel();(void)(_n_lines_12465.push(d::join(_n_out_12462.slice((_n_r_12466*_n_cols_12463),((_n_r_12466+1.0)*_n_cols_12463)),d::String(u""))));
}}
return d::join(_n_lines_12465,d::String(u"\n"));

}
}

struct Native_glitch final:ascii::Piece{
d::String _n_text_12371{};
double _n_cols_12372{};
double _n_rows_12373{};
d::Array<d::Array<double,false>,false> _n_px_12374{};
double _n_w_12375{};
double _n_sx_12376{};
double _n_x0_12377{};
double _n_y0_12378{};
d::Array<uint8_t,true> _n_clean_12379{};
d::Array<d::String,false> _n_out_12381{};
d::Array<int8_t,true> _n_shift_12382{};
std::function<d::String(double,std::shared_ptr<_n_Record_12468>)> _render;
bool _n_ink_12380(double _a0,double _a1){double _n_r_12403=_a0;
double _n_c_12404=_a1;
return ([&]()->bool{auto _n_logical_12520=([&]()->bool{auto _n_logical_12521=([&]()->bool{auto _n_logical_12522=([&]()->bool{auto _n_logical_12523=(_n_r_12403>=0.0);return d::truth(_n_logical_12523)?(_n_r_12403<this->_n_rows_12373):_n_logical_12523;})();return d::truth(_n_logical_12522)?(_n_c_12404>=0.0):_n_logical_12522;})();return d::truth(_n_logical_12521)?(_n_c_12404<this->_n_cols_12372):_n_logical_12521;})();return d::truth(_n_logical_12520)?(d::at(this->_n_clean_12379,((_n_r_12403*this->_n_cols_12372)+_n_c_12404))==1.0):_n_logical_12520;})();}

double _n_strength_12383(double _a0){double _n_u_12405=_a0;
{
for(auto &&_n_item_12524:_n_BURSTS_12366){d::check_cancel();auto _n_binding_12525=_n_item_12524;
double _n_s_12406=d::at(_n_binding_12525,0.0);
double _n_e_12407=d::at(_n_binding_12525,1.0);
double _n_peak_12408=d::at(_n_binding_12525,2.0);
{
if((d::truth((_n_u_12405>=_n_s_12406))&&d::truth((_n_u_12405<_n_e_12407)))){d::check_cancel();return (_n_peak_12408*(0.35+(0.65*std::sin(((ascii::PI*(_n_u_12405-_n_s_12406))/(_n_e_12407-_n_s_12406))))));
}

}
}
return 0.0;

}
}

explicit Native_glitch(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12485=d::decode<std::shared_ptr<_n_Record_12467>>(_options.data);
this->_n_text_12371=(d::present(_n_binding_12485->_p_text)?d::read(_n_binding_12485->_p_text):_n_meta_12359->_p_options->_p_text);
auto _n_binding_12486=_n_meta_12359;
this->_n_cols_12372=_n_binding_12486->_p_cols;
this->_n_rows_12373=_n_binding_12486->_p_rows;
this->_n_px_12374=_n_bitmap_12369(d::string(this->_n_text_12371));
this->_n_w_12375=double(d::at(this->_n_px_12374,0.0).size());
this->_n_sx_12376=(d::truth(((this->_n_w_12375*2.0)<=(this->_n_cols_12372-8.0)))?2.0:1.0);
this->_n_x0_12377=d::maximum({0.0,double(d::i32((this->_n_cols_12372-(this->_n_w_12375*this->_n_sx_12376)))>>(d::u32(1.0)&31))});
this->_n_y0_12378=double(d::i32((this->_n_rows_12373-7.0))>>(d::u32(1.0)&31));
this->_n_clean_12379=d::Array<uint8_t,true>(size_t((this->_n_cols_12372*this->_n_rows_12373)));
{double _n_y_12400=0.0;
for(;d::truth((_n_y_12400<7.0));(void)((_n_y_12400++))){d::check_cancel();{double _n_c_12401=0.0;
for(;d::truth((_n_c_12401<this->_n_cols_12372));(void)((_n_c_12401++))){d::check_cancel();double _n_x_12402=std::floor(((_n_c_12401-this->_n_x0_12377)/this->_n_sx_12376));
if(((d::truth((_n_c_12401>=this->_n_x0_12377))&&d::truth((_n_x_12402<this->_n_w_12375)))&&d::truth(d::at(d::at(this->_n_px_12374,_n_y_12400),_n_x_12402)))){d::check_cancel();(void)(([&](){auto&& _n_array_12487=this->_n_clean_12379;auto _n_index_12488=(((this->_n_y0_12378+_n_y_12400)*this->_n_cols_12372)+_n_c_12401);auto _n_value_12489=1.0;d::put(_n_array_12487,_n_index_12488,_n_value_12489);return _n_value_12489;})());
}
}}
}}
this->_n_out_12381=d::Array<d::String,false>(size_t((this->_n_cols_12372*this->_n_rows_12373)));
this->_n_shift_12382=d::Array<int8_t,true>(size_t(this->_n_rows_12373));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12468> _a1) mutable ->d::String{double _n_t_12409=_a0;
{
double _n_u_12410=d::mod((d::mod(_n_t_12409,_n_PERIOD_12364)+_n_PERIOD_12364),_n_PERIOD_12364);
double _n_step_12411=std::floor(((_n_u_12410*_n_STEPS_12365)+0.000001));
std::function<double()> _n_rand_12412=_n_mulberry32_12368(((_n_step_12411*7919.0)+17.0));
double _n_s_12413=this->_n_strength_12383((_n_step_12411/_n_STEPS_12365));
if((d::truth((_n_s_12413>0.0))&&d::truth((_n_rand_12412()<0.12)))){d::check_cancel();(void)((_n_s_12413=0.0));
}
(void)(this->_n_out_12381.fill(d::String(u" ")));
(void)(this->_n_shift_12382.fill(0.0));
if(d::truth((!d::truth(_n_s_12413)))){d::check_cancel();{double _n_k_12414=0.0;
for(;d::truth((_n_k_12414<double(this->_n_out_12381.size())));(void)((_n_k_12414++))){d::check_cancel();if(d::truth(d::at(this->_n_clean_12379,_n_k_12414))){d::check_cancel();(void)(([&](){auto&& _n_array_12490=this->_n_out_12381;auto _n_index_12491=_n_k_12414;auto _n_value_12492=d::String(u"█");d::put(_n_array_12490,_n_index_12491,_n_value_12492);return _n_value_12492;})());
}
}}
return _n_join_12370(this->_n_out_12381,this->_n_cols_12372,this->_n_rows_12373);
}
double _n_bands_12415=(1.0+std::floor((_n_rand_12412()*(1.0+(2.0*_n_s_12413)))));
{double _n_b_12416=0.0;
for(;d::truth((_n_b_12416<_n_bands_12415));(void)((_n_b_12416++))){d::check_cancel();double _n_top_12417=((this->_n_y0_12378-1.0)+std::floor((_n_rand_12412()*8.0)));
double _n_h_12418=(1.0+std::floor((_n_rand_12412()*3.0)));
double _n_dx_12419=([&](){auto _n_left_12493=(d::truth((_n_rand_12412()<0.5))?(-d::number(1.0)):1.0);auto _n_right_12494=(3.0+std::floor((_n_rand_12412()*(2.0+(8.0*_n_s_12413)))));return (_n_left_12493*_n_right_12494);})();
{double _n_r_12420=_n_top_12417;
for(;(d::truth((_n_r_12420<(_n_top_12417+_n_h_12418)))&&d::truth((_n_r_12420<this->_n_rows_12373)));(void)((_n_r_12420++))){d::check_cancel();(void)(([&](){auto&& _n_array_12495=this->_n_shift_12382;auto _n_index_12496=_n_r_12420;auto _n_value_12497=(d::at(_n_array_12495,_n_index_12496)+_n_dx_12419);d::put(_n_array_12495,_n_index_12496,_n_value_12497);return _n_value_12497;})());
}}
}}
bool _n_split_12421=(_n_rand_12412()<(0.4+(0.5*_n_s_12413)));
double _n_sub_12422=(0.02+((0.08*_n_s_12413)*_n_rand_12412()));
double _n_holes_12423=(0.01+(0.04*_n_s_12413));
{double _n_r_12424=0.0;
for(;d::truth((_n_r_12424<this->_n_rows_12373));(void)((_n_r_12424++))){d::check_cancel();{double _n_c_12425=0.0;
for(;d::truth((_n_c_12425<this->_n_cols_12372));(void)((_n_c_12425++))){d::check_cancel();double _n_k_12426=((_n_r_12424*this->_n_cols_12372)+_n_c_12425);
if(d::truth(this->_n_ink_12380(_n_r_12424,(_n_c_12425-d::at(this->_n_shift_12382,_n_r_12424))))){d::check_cancel();double _n_v_12427=_n_rand_12412();
(void)(([&](){auto&& _n_array_12498=this->_n_out_12381;auto _n_index_12499=_n_k_12426;auto _n_value_12500=(d::truth((_n_v_12427<_n_sub_12422))?d::at(_n_NOISE_12367,std::floor((_n_rand_12412()*double(_n_NOISE_12367.size())))):(d::truth((_n_v_12427<(_n_sub_12422+_n_holes_12423)))?d::String(u" "):d::String(u"█")));d::put(_n_array_12498,_n_index_12499,_n_value_12500);return _n_value_12500;})());
}
}}
}}
d::Array<d::String,false> _n_main_12428=this->_n_out_12381.slice();
auto _n_bare_12429=[&]( double _a0,double _a1) mutable ->bool{double _n_k_12430=_a0;
double _n_c_12431=_a1;
return ([&]()->bool{auto _n_logical_12501=([&]()->bool{auto _n_logical_12503=(d::at(_n_main_12428,_n_k_12430)==d::String(u" "));return d::truth(_n_logical_12503)?([&]()->bool{auto _n_logical_12504=(_n_c_12431==0.0);return d::truth(_n_logical_12504)?_n_logical_12504:(d::at(_n_main_12428,(_n_k_12430-1.0))==d::String(u" "));})():_n_logical_12503;})();return d::truth(_n_logical_12501)?([&]()->bool{auto _n_logical_12502=(_n_c_12431==(this->_n_cols_12372-1.0));return d::truth(_n_logical_12502)?_n_logical_12502:(d::at(_n_main_12428,(_n_k_12430+1.0))==d::String(u" "));})():_n_logical_12501;})();};
{double _n_r_12432=0.0;
for(;(d::truth(_n_split_12421)&&d::truth((_n_r_12432<this->_n_rows_12373)));(void)((_n_r_12432++))){d::check_cancel();{double _n_c_12433=0.0;
for(;(d::truth((std::fabs(d::at(this->_n_shift_12382,_n_r_12432))>=5.0))&&d::truth((_n_c_12433<this->_n_cols_12372)));(void)((_n_c_12433++))){d::check_cancel();double _n_k_12434=((_n_r_12432*this->_n_cols_12372)+_n_c_12433);
if((d::truth(_n_bare_12429(_n_k_12434,_n_c_12433))&&d::truth(this->_n_ink_12380(_n_r_12432,_n_c_12433)))){d::check_cancel();(void)(([&](){auto&& _n_array_12505=this->_n_out_12381;auto _n_index_12506=_n_k_12434;auto _n_value_12507=d::String(u"▒");d::put(_n_array_12505,_n_index_12506,_n_value_12507);return _n_value_12507;})());
}
}}
}}
double _n_smears_12435=(d::truth((_n_rand_12412()<(0.45*_n_s_12413)))?(1.0+std::floor((_n_rand_12412()*2.0))):0.0);
{double _n_i_12436=0.0;
for(;d::truth((_n_i_12436<_n_smears_12435));(void)((_n_i_12436++))){d::check_cancel();double _n_r_12437=(this->_n_y0_12378+std::floor((_n_rand_12412()*7.0)));
double _n_c_12438=std::floor((_n_rand_12412()*this->_n_cols_12372));
while((d::truth((_n_c_12438<(this->_n_cols_12372-1.0)))&&d::truth((d::at(this->_n_out_12381,((_n_r_12437*this->_n_cols_12372)+_n_c_12438))!=d::String(u"█"))))){d::check_cancel();(void)((_n_c_12438++));
}
double _n_len_12439=(4.0+std::floor(((_n_rand_12412()*14.0)*_n_s_12413)));
{double _n_j_12440=1.0;
for(;(d::truth((_n_j_12440<=_n_len_12439))&&d::truth(((_n_c_12438+_n_j_12440)<this->_n_cols_12372)));(void)((_n_j_12440++))){d::check_cancel();(void)(([&](){auto&& _n_array_12508=this->_n_out_12381;auto _n_index_12509=(((_n_r_12437*this->_n_cols_12372)+_n_c_12438)+_n_j_12440);auto _n_value_12510=(d::truth((_n_j_12440>(_n_len_12439-2.0)))?d::String(u"░"):(d::truth((_n_j_12440>(_n_len_12439-5.0)))?d::String(u"▒"):d::String(u"▓")));d::put(_n_array_12508,_n_index_12509,_n_value_12510);return _n_value_12510;})());
}}
}}
double _n_blocks_12441=(d::truth((_n_rand_12412()<(0.5*_n_s_12413)))?(1.0+std::floor((_n_rand_12412()*2.0))):0.0);
{double _n_i_12442=0.0;
for(;d::truth((_n_i_12442<_n_blocks_12441));(void)((_n_i_12442++))){d::check_cancel();double _n_bw_12443=(3.0+std::floor((_n_rand_12412()*10.0)));
double _n_bh_12444=(1.0+std::floor((_n_rand_12412()*2.0)));
double _n_br_12445=(this->_n_y0_12378+std::floor((_n_rand_12412()*7.0)));
double _n_bc_12446=std::floor((_n_rand_12412()*(this->_n_cols_12372-_n_bw_12443)));
double _n_dr_12447=(std::floor((_n_rand_12412()*5.0))-2.0);
double _n_dc_12448=(std::floor((_n_rand_12412()*21.0))-10.0);
{double _n_r_12449=_n_br_12445;
for(;(d::truth((_n_r_12449<(_n_br_12445+_n_bh_12444)))&&d::truth((_n_r_12449<this->_n_rows_12373)));(void)((_n_r_12449++))){d::check_cancel();{double _n_c_12450=_n_bc_12446;
for(;d::truth((_n_c_12450<(_n_bc_12446+_n_bw_12443)));(void)((_n_c_12450++))){d::check_cancel();bool _n_from_12451=this->_n_ink_12380((_n_r_12449+_n_dr_12447),(_n_c_12450+_n_dc_12448));
(void)(([&](){auto&& _n_array_12511=this->_n_out_12381;auto _n_index_12512=((_n_r_12449*this->_n_cols_12372)+_n_c_12450);auto _n_value_12513=(d::truth(_n_from_12451)?(d::truth((_n_rand_12412()<0.3))?d::String(u"▓"):d::String(u"█")):(d::truth((_n_rand_12412()<(0.15*_n_s_12413)))?d::String(u"░"):d::String(u" ")));d::put(_n_array_12511,_n_index_12512,_n_value_12513);return _n_value_12513;})());
}}
}}
}}
if(d::truth((_n_rand_12412()<(0.5*_n_s_12413)))){d::check_cancel();double _n_r_12452=((this->_n_y0_12378-1.0)+std::floor((_n_rand_12412()*9.0)));
double _n_a_12453=std::floor(((_n_rand_12412()*this->_n_cols_12372)*0.6));
double _n_len_12454=(6.0+std::floor(((_n_rand_12412()*this->_n_cols_12372)*0.5)));
d::String _n_g_12455=d::at(d::String(u"▀▄─═"),std::floor((_n_rand_12412()*4.0)));
{double _n_c_12456=_n_a_12453;
for(;d::truth((_n_c_12456<d::minimum({this->_n_cols_12372,(_n_a_12453+_n_len_12454)})));(void)((_n_c_12456++))){d::check_cancel();if((d::truth((d::at(this->_n_out_12381,((_n_r_12452*this->_n_cols_12372)+_n_c_12456))==d::String(u" ")))||d::truth((_n_rand_12412()<0.5)))){d::check_cancel();(void)(([&](){auto&& _n_array_12514=this->_n_out_12381;auto _n_index_12515=((_n_r_12452*this->_n_cols_12372)+_n_c_12456);auto _n_value_12516=_n_g_12455;d::put(_n_array_12514,_n_index_12515,_n_value_12516);return _n_value_12516;})());
}
}}
}
if((d::truth((_n_s_12413>0.7))&&d::truth((_n_rand_12412()<0.25)))){d::check_cancel();double _n_dir_12457=(d::truth((_n_rand_12412()<0.5))?1.0:(-d::number(1.0)));
d::Array<d::String,false> _n_copy_12458=this->_n_out_12381.slice();
{double _n_r_12459=0.0;
for(;d::truth((_n_r_12459<this->_n_rows_12373));(void)((_n_r_12459++))){d::check_cancel();double _n_from_12460=(_n_r_12459-_n_dir_12457);
{double _n_c_12461=0.0;
for(;d::truth((_n_c_12461<this->_n_cols_12372));(void)((_n_c_12461++))){d::check_cancel();(void)(([&](){auto&& _n_array_12517=this->_n_out_12381;auto _n_index_12518=((_n_r_12459*this->_n_cols_12372)+_n_c_12461);auto _n_value_12519=((d::truth((_n_from_12460>=0.0))&&d::truth((_n_from_12460<this->_n_rows_12373)))?d::at(_n_copy_12458,((_n_from_12460*this->_n_cols_12372)+_n_c_12461)):d::String(u" "));d::put(_n_array_12517,_n_index_12518,_n_value_12519);return _n_value_12519;})());
}}
}}
}
return _n_join_12370(this->_n_out_12381,this->_n_cols_12372,this->_n_rows_12373);

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("glitch").cols)*ascii::catalog_meta("glitch").rows);auto _env=std::make_shared<_n_Record_12468>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &glitch_meta(){return catalog_meta("glitch");}
std::unique_ptr<Piece> make_glitch(const AsciiPieceOptions &o){return std::make_unique<Native_glitch>(o);}
}
