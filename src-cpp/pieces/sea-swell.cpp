// Direct, statically typed C++ from src/pieces/sea-swell.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_27788;
struct _n_Record_27794;
struct _n_Record_27880;
struct _n_Record_27788{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_27788> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27788>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_27794{
d::Array<d::String,false> _p_level{};
d::Array<d::String,false> _p_right{};
d::Array<d::String,false> _p_left{};
static std::shared_ptr<_n_Record_27794> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27794>();out->_p_level=d::decode<d::Array<d::String,false>>(j["level"]);out->_p_right=d::decode<d::Array<d::String,false>>(j["right"]);out->_p_left=d::decode<d::Array<d::String,false>>(j["left"]);return out;}
};
struct _n_Record_27880{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_27880> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27880>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_trochoid_27802(double _a0,double _a1);
std::function<double()> _n_mulberry32_27803(double _a0);
std::shared_ptr<_n_Record_27788> _n_meta_27787=[](){return ([&](){auto _n_object_27883=std::make_shared<_n_Record_27788>();_n_object_27883->_p_name=d::String(u"sea swell");_n_object_27883->_p_category=d::String(u"nature");_n_object_27883->_p_note=d::String(u"a long swell lifting a small sailboat as it rolls under");_n_object_27883->_p_cols=64.0;_n_object_27883->_p_rows=14.0;_n_object_27883->_p_fps=20.0;return _n_object_27883;})();}();
const double _n_TAU_27789=[](){return (ascii::PI*2.0);}();
const double _n_HORIZON_27790=[](){return 4.0;}();
const double _n_MEAN_27791=[](){return 6.1;}();
const d::String _n_SURF_27792=[](){return d::String(u"_.-'");}();
std::shared_ptr<_n_Record_27794> _n_BOAT_27793=[](){return ([&](){auto _n_object_27885=std::make_shared<_n_Record_27794>();_n_object_27885->_p_level=d::Array<d::String,false>{d::String(u"   |\\"),d::String(u"   | \\"),d::String(u"   |__\\"),d::String(u"\\________/")};_n_object_27885->_p_right=d::Array<d::String,false>{d::String(u"   |\\"),d::String(u"   | \\"),d::String(u"   |__\\ _/"),d::String(u"\\____.-'")};_n_object_27885->_p_left=d::Array<d::String,false>{d::String(u"   |\\"),d::String(u"   | \\"),d::String(u"\\_ |__\\"),d::String(u"  '-.____/")};return _n_object_27885;})();}();
const double _n_HULL_27795=[](){return 10.0;}();
const double _n_PITCH_27796=[](){return 0.55;}();
const double _n_BOAT_X_27797=[](){return 18.0;}();
d::Array<d::Array<double,false>,false> _n_WAVES_27798=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{64.0,0.0625,3.8,0.5},d::Array<double,false>{32.0,(-d::number(0.0625)),0.9,0.3}};}();
const double _n_LEAN_27799=[](){return 2.0;}();
const double _n_START_27800=[](){return 2.5;}();
const double _n_K_27801=[](){return (_n_TAU_27789/32.0);}();
double _n_trochoid_27802(double _a0,double _a1){double _n_u_27812=_a0;
double _n_q_27813=_a1;
{
double _n_v_27814=_n_u_27812;
{double _n_i_27815=0.0;
for(;d::truth((_n_i_27815<4.0));(void)((_n_i_27815++))){d::check_cancel();(void)((_n_v_27814=(_n_u_27812+((_n_q_27813/_n_TAU_27789)*std::sin((_n_TAU_27789*_n_v_27814))))));
}}
return (0.5*std::cos((_n_TAU_27789*_n_v_27814)));

}
}

std::function<double()> _n_mulberry32_27803(double _a0){double _n_a_27816=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_27816=double(d::i32((_n_a_27816+1831565813.0))|d::i32(0.0))));
double _n_t_27817=d::imul(double(d::i32(_n_a_27816)^d::i32(double(d::u32(_n_a_27816)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_27816)));
(void)((_n_t_27817=double(d::i32((_n_t_27817+d::imul(double(d::i32(_n_t_27817)^d::i32(double(d::u32(_n_t_27817)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_27817)))))^d::i32(_n_t_27817))));
return (double(d::u32(double(d::i32(_n_t_27817)^d::i32(double(d::u32(_n_t_27817)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_sea_swell final:ascii::Piece{
double _n_cols_27804{};
double _n_rows_27805{};
d::Array<d::Array<d::String,false>,false> _n_g_27806{};
d::Array<double,true> _n_sy_27807{};
std::function<double()> _n_rand_27808{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_flecks_27809{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_far_27810{};
std::function<d::String(double,std::shared_ptr<_n_Record_27880>)> _render;
double _n_surface_27811(double _a0,double _a1){double _n_x_27828=_a0;
double _n_t_27829=_a1;
{
auto _n_binding_27925=d::at(_n_WAVES_27798,0.0);
double _n_l_27830=d::at(_n_binding_27925,0.0);
double _n_v_27831=d::at(_n_binding_27925,1.0);
double _n_a_27832=d::at(_n_binding_27925,2.0);
double _n_q_27833=d::at(_n_binding_27925,3.0);
double _n_h_27834=_n_trochoid_27802(((_n_x_27828/_n_l_27830)-(_n_t_27829*_n_v_27831)),_n_q_27833);
{double _n_i_27835=0.0;
for(;d::truth((_n_i_27835<3.0));(void)((_n_i_27835++))){d::check_cancel();(void)((_n_h_27834=_n_trochoid_27802((((_n_x_27828-(_n_LEAN_27799*(_n_h_27834+0.5)))/_n_l_27830)-(_n_t_27829*_n_v_27831)),_n_q_27833)));
}}
double _n_y_27836=(_n_MEAN_27791-(_n_a_27832*_n_h_27834));
{double _n_i_27837=1.0;
for(;d::truth((_n_i_27837<double(_n_WAVES_27798.size())));(void)((_n_i_27837++))){d::check_cancel();auto _n_binding_27926=d::at(_n_WAVES_27798,_n_i_27837);
double _n_l_27838=d::at(_n_binding_27926,0.0);
double _n_v_27839=d::at(_n_binding_27926,1.0);
double _n_a_27840=d::at(_n_binding_27926,2.0);
double _n_q_27841=d::at(_n_binding_27926,3.0);
(void)((_n_y_27836=(_n_y_27836-(_n_a_27840*_n_trochoid_27802(((_n_x_27828/_n_l_27838)-(_n_t_27829*_n_v_27839)),_n_q_27841)))));
}}
return _n_y_27836;

}
}

explicit Native_sea_swell(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_27886=_n_meta_27787;
this->_n_cols_27804=_n_binding_27886->_p_cols;
this->_n_rows_27805=_n_binding_27886->_p_rows;
this->_n_g_27806=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_27805,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_27804));}));
this->_n_sy_27807=d::Array<double,true>(size_t((this->_n_cols_27804+1.0)));
this->_n_rand_27808=_n_mulberry32_27803(21.0);
this->_n_flecks_27809=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_d_27818=1.5;
for(;d::truth((_n_d_27818<10.0));(void)((_n_d_27818=(_n_d_27818+1.0)))){d::check_cancel();d::String _n_glyph_27819=(d::truth((_n_d_27818<3.0))?d::String(u"~"):(d::truth((_n_d_27818<5.5))?d::String(u"-"):d::String(u"·")));
double _n_gap_27820=(3.0+(_n_d_27818*2.0));
double _n_run_27821=(d::truth((_n_d_27818<3.0))?3.0:(d::truth((_n_d_27818<5.5))?2.0:1.0));
double _n_from_27822=std::floor((this->_n_rand_27808()*this->_n_cols_27804));
{double _n_i_27823=0.0;
for(;d::truth((_n_i_27823<(this->_n_cols_27804-_n_run_27821)));(void)((_n_i_27823=(_n_i_27823+std::floor((_n_gap_27820*(0.6+this->_n_rand_27808()))))))){d::check_cancel();double _n_n_27824=(1.0+std::floor((this->_n_rand_27808()*_n_run_27821)));
{double _n_k_27825=0.0;
for(;d::truth((_n_k_27825<_n_n_27824));(void)(((_n_k_27825++),(_n_i_27823++)))){d::check_cancel();(void)(this->_n_flecks_27809.push(std::make_shared<std::tuple<double,double,d::String>>(d::mod((_n_from_27822+_n_i_27823),this->_n_cols_27804),_n_d_27818,_n_glyph_27819)));
}}
}}
}}
this->_n_far_27810=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_r_27826=(_n_HORIZON_27790+1.0);
for(;d::truth((_n_r_27826<(_n_HORIZON_27790+4.0)));(void)((_n_r_27826++))){d::check_cancel();{double _n_c_27827=std::floor((this->_n_rand_27808()*12.0));
for(;d::truth((_n_c_27827<this->_n_cols_27804));(void)((_n_c_27827=(_n_c_27827+(11.0+std::floor((this->_n_rand_27808()*14.0))))))){d::check_cancel();(void)(this->_n_far_27810.push(std::make_shared<std::tuple<double,double,d::String>>(_n_r_27826,_n_c_27827,(d::truth((this->_n_rand_27808()<0.5))?d::String(u"-"):d::String(u"--")))));
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_27880> _a1) mutable ->d::String{double _n_time_27842=_a0;
{
double _n_t_27843=(_n_time_27842+_n_START_27800);
for(auto &&_n_item_27887:this->_n_g_27806){d::check_cancel();d::Array<d::String,false> _n_row_27844=_n_item_27887;
(void)(_n_row_27844.fill(d::String(u" ")));
}
{double _n_x_27845=0.0;
for(;d::truth((_n_x_27845<=this->_n_cols_27804));(void)((_n_x_27845++))){d::check_cancel();(void)(([&](){auto&& _n_array_27888=this->_n_sy_27807;auto _n_index_27889=_n_x_27845;auto _n_value_27890=this->_n_surface_27811(_n_x_27845,_n_t_27843);d::put(_n_array_27888,_n_index_27889,_n_value_27890);return _n_value_27890;})());
}}
auto _n_top_27846=[&]( double _a0) mutable ->double{double _n_c_27847=_a0;
return std::floor(((d::at(this->_n_sy_27807,_n_c_27847)+d::at(this->_n_sy_27807,(_n_c_27847+1.0)))/2.0));};
auto _n_clear_27848=[&]( double _a0) mutable ->bool{double _n_c_27849=_a0;
return ([&]()->bool{auto _n_logical_27891=([&]()->bool{auto _n_logical_27892=(_n_c_27849<0.0);return d::truth(_n_logical_27892)?_n_logical_27892:(_n_c_27849>=this->_n_cols_27804);})();return d::truth(_n_logical_27891)?_n_logical_27891:(_n_HORIZON_27790<(d::minimum({d::at(this->_n_sy_27807,_n_c_27849),d::at(this->_n_sy_27807,(_n_c_27849+1.0))})-0.9));})();};
{double _n_c_27850=0.0;
for(;d::truth((_n_c_27850<this->_n_cols_27804));(void)((_n_c_27850++))){d::check_cancel();if(((d::truth(_n_clear_27848((_n_c_27850-1.0)))&&d::truth(_n_clear_27848(_n_c_27850)))&&d::truth(_n_clear_27848((_n_c_27850+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_27893=d::at(this->_n_g_27806,_n_HORIZON_27790);auto _n_index_27894=_n_c_27850;auto _n_value_27895=d::String(u"_");d::put(_n_array_27893,_n_index_27894,_n_value_27895);return _n_value_27895;})());
}
}}
for(auto &&_n_item_27896:this->_n_far_27810){d::check_cancel();auto _n_binding_27897=_n_item_27896;
double _n_r_27851=std::get<0>(*_n_binding_27897);
double _n_c_27852=std::get<1>(*_n_binding_27897);
d::String _n_s_27853=std::get<2>(*_n_binding_27897);
{double _n_k_27854=0.0;
for(;d::truth((_n_k_27854<double(_n_s_27853.size())));(void)((_n_k_27854++))){d::check_cancel();if(((d::truth(((_n_c_27852+_n_k_27854)<this->_n_cols_27804))&&d::truth((d::at(d::at(this->_n_g_27806,_n_HORIZON_27790),(_n_c_27852+_n_k_27854))==d::String(u"_"))))&&d::truth((_n_r_27851<(_n_top_27846((_n_c_27852+_n_k_27854))-1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_27898=d::at(this->_n_g_27806,_n_r_27851);auto _n_index_27899=(_n_c_27852+_n_k_27854);auto _n_value_27900=d::String(u"-");d::put(_n_array_27898,_n_index_27899,_n_value_27900);return _n_value_27900;})());
}
}}
}
for(auto &&_n_item_27901:this->_n_flecks_27809){d::check_cancel();auto _n_binding_27902=_n_item_27901;
double _n_c_27855=std::get<0>(*_n_binding_27902);
double _n_d_27856=std::get<1>(*_n_binding_27902);
d::String _n_ch_27857=std::get<2>(*_n_binding_27902);
{
double _n_y_27858=((d::at(this->_n_sy_27807,_n_c_27855)*0.5)+(d::at(this->_n_sy_27807,(_n_c_27855+1.0))*0.5));
double _n_r_27859=std::floor(((_n_MEAN_27791+((_n_y_27858-_n_MEAN_27791)*std::exp(((-d::number(_n_K_27801))*_n_d_27856))))+_n_d_27856));
if((d::truth((_n_r_27859>_n_top_27846(_n_c_27855)))&&d::truth((_n_r_27859<this->_n_rows_27805)))){d::check_cancel();(void)(([&](){auto&& _n_array_27903=d::at(this->_n_g_27806,_n_r_27859);auto _n_index_27904=_n_c_27855;auto _n_value_27905=_n_ch_27857;d::put(_n_array_27903,_n_index_27904,_n_value_27905);return _n_value_27905;})());
}

}
}
{double _n_c_27860=0.0;
for(;d::truth((_n_c_27860<this->_n_cols_27804));(void)((_n_c_27860++))){d::check_cancel();double _n_a_27861=d::at(this->_n_sy_27807,_n_c_27860);
double _n_b_27862=d::at(this->_n_sy_27807,(_n_c_27860+1.0));
double _n_y_27863=((_n_a_27861+_n_b_27862)/2.0);
double _n_r_27864=std::floor(_n_y_27863);
(void)(([&](){auto&& _n_array_27906=d::at(this->_n_g_27806,_n_r_27864);auto _n_index_27907=_n_c_27860;auto _n_value_27908=(d::truth((std::fabs((_n_b_27862-_n_a_27861))>0.8))?(d::truth((_n_b_27862<_n_a_27861))?d::String(u"/"):d::String(u"\\")):d::at(_n_SURF_27792,([&](){auto _n_argument_27909=3.0;auto _n_argument_27910=std::floor(((1.0-(_n_y_27863-_n_r_27864))*4.0));return d::minimum({_n_argument_27909,_n_argument_27910});})()));d::put(_n_array_27906,_n_index_27907,_n_value_27908);return _n_value_27908;})());
}}
auto _n_binding_27911=d::at(_n_WAVES_27798,0.0);
double _n_l_27865=d::at(_n_binding_27911,0.0);
double _n_v_27866=d::at(_n_binding_27911,1.0);
double _n_c0_27867=d::round((_n_BOAT_X_27797-(1.5*std::sin((_n_TAU_27789*(((_n_BOAT_X_27797+(_n_HULL_27795/2.0))/_n_l_27865)-(_n_t_27843*_n_v_27866)))))));
double _n_rise_27868=([&](){auto _n_left_27912=this->_n_surface_27811((_n_c0_27867+1.0),_n_t_27843);auto _n_right_27913=this->_n_surface_27811(((_n_c0_27867+_n_HULL_27795)-1.0),_n_t_27843);return (_n_left_27912-_n_right_27913);})();
double _n_tilt_27869=(d::truth((_n_rise_27868>_n_PITCH_27796))?1.0:(d::truth((_n_rise_27868<(-d::number(_n_PITCH_27796))))?(-d::number(1.0)):0.0));
d::Array<d::String,false> _n_shape_27870=(d::truth((_n_tilt_27869>0.0))?_n_BOAT_27793->_p_right:(d::truth((_n_tilt_27869<0.0))?_n_BOAT_27793->_p_left:_n_BOAT_27793->_p_level));
double _n_at_27871=(d::truth((_n_tilt_27869>0.0))?(_n_c0_27867+2.5):(d::truth((_n_tilt_27869<0.0))?((_n_c0_27867+_n_HULL_27795)-2.5):(_n_c0_27867+(_n_HULL_27795/2.0))));
double _n_water_27872=std::floor(this->_n_surface_27811(_n_at_27871,_n_t_27843));
{double _n_c_27873=(_n_c0_27867-3.0);
for(;d::truth((_n_c_27873<=((_n_c0_27867+_n_HULL_27795)+2.0)));(void)((_n_c_27873++))){d::check_cancel();if((d::truth((_n_c_27873<0.0))||d::truth((_n_c_27873>=this->_n_cols_27804)))){d::check_cancel();continue;
}
if((d::truth((_n_top_27846(_n_c_27873)!=_n_HORIZON_27790))&&d::truth(((_n_water_27872-_n_HORIZON_27790)<=4.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_27914=d::at(this->_n_g_27806,_n_HORIZON_27790);auto _n_index_27915=_n_c_27873;auto _n_value_27916=d::String(u" ");d::put(_n_array_27914,_n_index_27915,_n_value_27916);return _n_value_27916;})());
}
if((d::truth((_n_c_27873>=(_n_c0_27867-1.0)))&&d::truth((_n_c_27873<=(_n_c0_27867+_n_HULL_27795))))){d::check_cancel();{double _n_r_27874=(_n_water_27872-4.0);
for(;d::truth((_n_r_27874<=([&](){auto _n_argument_27917=_n_water_27872;auto _n_argument_27918=_n_top_27846(_n_c_27873);return d::maximum({_n_argument_27917,_n_argument_27918});})()));(void)((_n_r_27874++))){d::check_cancel();if(d::truth((_n_r_27874>=0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_27919=d::at(this->_n_g_27806,_n_r_27874);auto _n_index_27920=_n_c_27873;auto _n_value_27921=d::String(u" ");d::put(_n_array_27919,_n_index_27920,_n_value_27921);return _n_value_27921;})());
}
}}
}
}}
(void)(d::forEach(_n_shape_27870,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_27875=_a0;
double _n_i_27876=_a1;
{
double _n_r_27877=(((_n_water_27872-double(_n_shape_27870.size()))+1.0)+_n_i_27876);
if(d::truth((_n_r_27877<0.0))){d::check_cancel();return;
}
{double _n_k_27878=0.0;
for(;d::truth((_n_k_27878<double(_n_line_27875.size())));(void)((_n_k_27878++))){d::check_cancel();if(d::truth((d::at(_n_line_27875,_n_k_27878)!=d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_27922=d::at(this->_n_g_27806,_n_r_27877);auto _n_index_27923=(_n_c0_27867+_n_k_27878);auto _n_value_27924=d::at(_n_line_27875,_n_k_27878);d::put(_n_array_27922,_n_index_27923,_n_value_27924);return _n_value_27924;})());
}
}}

}
}));
return d::join(d::map(this->_n_g_27806,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_27879=_a0;
return d::join(_n_row_27879,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sea-swell").cols)*ascii::catalog_meta("sea-swell").rows);auto _env=std::make_shared<_n_Record_27880>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sea_swell_meta(){return catalog_meta("sea-swell");}
std::unique_ptr<Piece> make_sea_swell(const AsciiPieceOptions &o){return std::make_unique<Native_sea_swell>(o);}
}
