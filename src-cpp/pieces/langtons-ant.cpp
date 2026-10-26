// Direct, statically typed C++ from src/pieces/langtons-ant.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_17816;
struct _n_Record_17866;
struct _n_Record_17816{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_17816> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17816>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_17866{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_17866> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17866>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_17823(double _a0);
std::shared_ptr<_n_Record_17816> _n_meta_17815=[](){return ([&](){auto _n_object_17869=std::make_shared<_n_Record_17816>();_n_object_17869->_p_name=d::String(u"langton's ant");_n_object_17869->_p_category=d::String(u"generative");_n_object_17869->_p_note=d::String(u"order, then chaos, then the ant builds its highway");_n_object_17869->_p_cols=72.0;_n_object_17869->_p_rows=25.0;_n_object_17869->_p_fps=30.0;return _n_object_17869;})();}();
const double _n_N_17817=[](){return 200.0;}();
const double _n_X0_17818=[](){return 31.0;}();
const double _n_Y0_17819=[](){return (-d::number(24.0));}();
d::Array<d::Array<double,false>,false> _n_KEYS_17820=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,10350.0},d::Array<double,false>{2.0,11330.0},d::Array<double,false>{3.2,11330.0},d::Array<double,false>{3.2,0.0},d::Array<double,false>{4.3,100.0},d::Array<double,false>{5.6,520.0},d::Array<double,false>{12.4,9977.0},d::Array<double,false>{13.2,10350.0}};}();
const double _n_PERIOD_17821=[](){return 13.2;}();
d::Array<double,false> _n_FADE_17822=[](){return d::Array<double,false>{2.4,3.2};}();
std::function<double()> _n_mulberry32_17823(double _a0){double _n_a_17840=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_17840=double(d::i32((_n_a_17840+1831565813.0))|d::i32(0.0))));
double _n_t_17841=d::imul(double(d::i32(_n_a_17840)^d::i32(double(d::u32(_n_a_17840)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_17840)));
(void)((_n_t_17841=double(d::i32((_n_t_17841+d::imul(double(d::i32(_n_t_17841)^d::i32(double(d::u32(_n_t_17841)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_17841)))))^d::i32(_n_t_17841))));
return (double(d::u32(double(d::i32(_n_t_17841)^d::i32(double(d::u32(_n_t_17841)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_langtons_ant final:ascii::Piece{
double _n_cols_17824{};
double _n_rows_17825{};
d::Array<uint8_t,true> _n_board_17826{};
d::Array<double,false> _n_DX_17827{};
d::Array<double,false> _n_DY_17828{};
double _n_x_17829{};
double _n_y_17830{};
double _n_dir_17831{};
double _n_steps_17832{};
std::function<double()> _n_rand_17835{};
d::Array<float,true> _n_fadeAt_17836{};
d::Array<d::String,false> _n_GLYPH_17838{};
std::function<d::String(double,std::shared_ptr<_n_Record_17866>)> _render;
void _n_reset_17833(){{
(void)(this->_n_board_17826.fill(0.0));
(void)((this->_n_x_17829=(this->_n_y_17830=(_n_N_17817/2.0))));
(void)((this->_n_dir_17831=0.0));
(void)((this->_n_steps_17832=0.0));

}
}

void _n_step_17834(){{
double _n_i_17842=((this->_n_y_17830*_n_N_17817)+this->_n_x_17829);
(void)((this->_n_dir_17831=double(d::i32((this->_n_dir_17831+(d::truth(d::at(this->_n_board_17826,_n_i_17842))?3.0:1.0)))&d::i32(3.0))));
(void)(([&](){auto&& _n_array_17871=this->_n_board_17826;auto _n_index_17872=_n_i_17842;auto _n_value_17873=double(d::i32(d::at(_n_array_17871,_n_index_17872))^d::i32(1.0));d::put(_n_array_17871,_n_index_17872,_n_value_17873);return _n_value_17873;})());
(void)((this->_n_x_17829=(this->_n_x_17829+d::at(this->_n_DX_17827,this->_n_dir_17831))));
(void)((this->_n_y_17830=(this->_n_y_17830+d::at(this->_n_DY_17828,this->_n_dir_17831))));
(void)((this->_n_steps_17832++));

}
}

double _n_target_17837(double _a0){double _n_p_17843=_a0;
{
double _n_k_17844=1.0;
while(d::truth((d::at(d::at(_n_KEYS_17820,_n_k_17844),0.0)<_n_p_17843))){d::check_cancel();(void)((_n_k_17844++));
}
auto _n_binding_17874=d::at(_n_KEYS_17820,(_n_k_17844-1.0));
double _n_p0_17845=d::at(_n_binding_17874,0.0);
double _n_s0_17846=d::at(_n_binding_17874,1.0);
auto _n_binding_17875=d::at(_n_KEYS_17820,_n_k_17844);
double _n_p1_17847=d::at(_n_binding_17875,0.0);
double _n_s1_17848=d::at(_n_binding_17875,1.0);
return d::round((_n_s0_17846+(((_n_s1_17848-_n_s0_17846)*(_n_p_17843-_n_p0_17845))/(_n_p1_17847-_n_p0_17845))));

}
}

double _n_at_17839(double _a0,double _a1){double _n_c_17849=_a0;
double _n_r_17850=_a1;
{
double _n_bx_17851=(((_n_N_17817/2.0)+_n_X0_17818)-_n_c_17849);
double _n_by_17852=(((_n_N_17817/2.0)+_n_Y0_17819)+_n_r_17850);
return d::at(this->_n_board_17826,((_n_by_17852*_n_N_17817)+_n_bx_17851));

}
}

explicit Native_langtons_ant(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_17870=_n_meta_17815;
this->_n_cols_17824=_n_binding_17870->_p_cols;
this->_n_rows_17825=_n_binding_17870->_p_rows;
this->_n_board_17826=d::Array<uint8_t,true>(size_t((_n_N_17817*_n_N_17817)));
this->_n_DX_17827=d::Array<double,false>{0.0,1.0,0.0,(-d::number(1.0))};
this->_n_DY_17828=d::Array<double,false>{(-d::number(1.0)),0.0,1.0,0.0};
this->_n_rand_17835=_n_mulberry32_17823(7.0);
this->_n_fadeAt_17836=d::map(d::Array<float,true>(size_t(((this->_n_cols_17824*this->_n_rows_17825)*2.0))),[&]( ) mutable ->double{return this->_n_rand_17835();});
this->_n_GLYPH_17838=d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};
(void)(this->_n_reset_17833());
_render=[=]( double _a0,std::shared_ptr<_n_Record_17866> _a1) mutable ->d::String{double _n_t_17853=_a0;
{
double _n_p_17854=d::mod(_n_t_17853,_n_PERIOD_17821);
double _n_want_17855=this->_n_target_17837(_n_p_17854);
if(d::truth((_n_want_17855<this->_n_steps_17832))){d::check_cancel();(void)(this->_n_reset_17833());
}
while(d::truth((this->_n_steps_17832<_n_want_17855))){d::check_cancel();(void)(this->_n_step_17834());
}
double _n_fade_17856=((d::truth((_n_p_17854>d::at(_n_FADE_17822,0.0)))&&d::truth((_n_p_17854<=d::at(_n_FADE_17822,1.0))))?((_n_p_17854-d::at(_n_FADE_17822,0.0))/(d::at(_n_FADE_17822,1.0)-d::at(_n_FADE_17822,0.0))):0.0);
double _n_ac_17857=(((_n_N_17817/2.0)+_n_X0_17818)-this->_n_x_17829);
double _n_ar_17858=std::floor((((this->_n_y_17830-(_n_N_17817/2.0))-_n_Y0_17819)/2.0));
d::Array<d::String,false> _n_lines_17859=d::Array<d::String,false>{};
{double _n_r_17860=0.0;
for(;d::truth((_n_r_17860<this->_n_rows_17825));(void)((_n_r_17860++))){d::check_cancel();d::String _n_line_17861=d::String(u"");
{double _n_c_17862=0.0;
for(;d::truth((_n_c_17862<this->_n_cols_17824));(void)((_n_c_17862++))){d::check_cancel();if(((d::truth((_n_c_17862==_n_ac_17857))&&d::truth((_n_r_17860==_n_ar_17858)))&&d::truth((_n_fade_17856==0.0)))){d::check_cancel();(void)((_n_line_17861=(d::string(_n_line_17861)+d::string(d::String(u"@")))));
continue;
}
double _n_k_17863=(((_n_r_17860*this->_n_cols_17824)+_n_c_17862)*2.0);
double _n_top_17864=((d::truth(this->_n_at_17839(_n_c_17862,(2.0*_n_r_17860)))&&d::truth((d::at(this->_n_fadeAt_17836,_n_k_17863)>=_n_fade_17856)))?1.0:0.0);
double _n_bottom_17865=((d::truth(this->_n_at_17839(_n_c_17862,((2.0*_n_r_17860)+1.0)))&&d::truth((d::at(this->_n_fadeAt_17836,(_n_k_17863+1.0))>=_n_fade_17856)))?2.0:0.0);
(void)((_n_line_17861=(d::string(_n_line_17861)+d::string(d::at(this->_n_GLYPH_17838,(_n_top_17864+_n_bottom_17865))))));
}}
(void)(_n_lines_17859.push(_n_line_17861));
}}
return d::join(_n_lines_17859,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("langtons-ant").cols)*ascii::catalog_meta("langtons-ant").rows);auto _env=std::make_shared<_n_Record_17866>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &langtons_ant_meta(){return catalog_meta("langtons-ant");}
std::unique_ptr<Piece> make_langtons_ant(const AsciiPieceOptions &o){return std::make_unique<Native_langtons_ant>(o);}
}
