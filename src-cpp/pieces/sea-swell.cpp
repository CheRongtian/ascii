// Direct, statically typed C++ from src/pieces/sea-swell.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_27789;
struct _n_Record_27795;
struct _n_Record_27881;
struct _n_Record_27789{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_27789> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27789>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_27795{
d::Array<d::String,false> _p_level{};
d::Array<d::String,false> _p_right{};
d::Array<d::String,false> _p_left{};
static std::shared_ptr<_n_Record_27795> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27795>();out->_p_level=d::decode<d::Array<d::String,false>>(j["level"]);out->_p_right=d::decode<d::Array<d::String,false>>(j["right"]);out->_p_left=d::decode<d::Array<d::String,false>>(j["left"]);return out;}
};
struct _n_Record_27881{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_27881> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27881>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_trochoid_27803(double _a0,double _a1);
std::function<double()> _n_mulberry32_27804(double _a0);
std::shared_ptr<_n_Record_27789> _n_meta_27788=[](){return ([&](){auto _n_object_27884=std::make_shared<_n_Record_27789>();_n_object_27884->_p_name=d::String(u"sea swell");_n_object_27884->_p_category=d::String(u"nature");_n_object_27884->_p_note=d::String(u"a long swell lifting a small sailboat as it rolls under");_n_object_27884->_p_cols=64.0;_n_object_27884->_p_rows=14.0;_n_object_27884->_p_fps=20.0;return _n_object_27884;})();}();
const double _n_TAU_27790=[](){return (ascii::PI*2.0);}();
const double _n_HORIZON_27791=[](){return 4.0;}();
const double _n_MEAN_27792=[](){return 6.1;}();
const d::String _n_SURF_27793=[](){return d::String(u"_.-'");}();
std::shared_ptr<_n_Record_27795> _n_BOAT_27794=[](){return ([&](){auto _n_object_27886=std::make_shared<_n_Record_27795>();_n_object_27886->_p_level=d::Array<d::String,false>{d::String(u"   |\\"),d::String(u"   | \\"),d::String(u"   |__\\"),d::String(u"\\________/")};_n_object_27886->_p_right=d::Array<d::String,false>{d::String(u"   |\\"),d::String(u"   | \\"),d::String(u"   |__\\ _/"),d::String(u"\\____.-'")};_n_object_27886->_p_left=d::Array<d::String,false>{d::String(u"   |\\"),d::String(u"   | \\"),d::String(u"\\_ |__\\"),d::String(u"  '-.____/")};return _n_object_27886;})();}();
const double _n_HULL_27796=[](){return 10.0;}();
const double _n_PITCH_27797=[](){return 0.55;}();
const double _n_BOAT_X_27798=[](){return 18.0;}();
d::Array<d::Array<double,false>,false> _n_WAVES_27799=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{64.0,0.0625,3.8,0.5},d::Array<double,false>{32.0,(-d::number(0.0625)),0.9,0.3}};}();
const double _n_LEAN_27800=[](){return 2.0;}();
const double _n_START_27801=[](){return 2.5;}();
const double _n_K_27802=[](){return (_n_TAU_27790/32.0);}();
double _n_trochoid_27803(double _a0,double _a1){double _n_u_27813=_a0;
double _n_q_27814=_a1;
{
double _n_v_27815=_n_u_27813;
{double _n_i_27816=0.0;
for(;d::truth((_n_i_27816<4.0));(void)((_n_i_27816++))){d::check_cancel();(void)((_n_v_27815=(_n_u_27813+((_n_q_27814/_n_TAU_27790)*std::sin((_n_TAU_27790*_n_v_27815))))));
}}
return (0.5*std::cos((_n_TAU_27790*_n_v_27815)));

}
}

std::function<double()> _n_mulberry32_27804(double _a0){double _n_a_27817=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_27817=double(d::i32((_n_a_27817+1831565813.0))|d::i32(0.0))));
double _n_t_27818=d::imul(double(d::i32(_n_a_27817)^d::i32(double(d::u32(_n_a_27817)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_27817)));
(void)((_n_t_27818=double(d::i32((_n_t_27818+d::imul(double(d::i32(_n_t_27818)^d::i32(double(d::u32(_n_t_27818)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_27818)))))^d::i32(_n_t_27818))));
return (double(d::u32(double(d::i32(_n_t_27818)^d::i32(double(d::u32(_n_t_27818)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_sea_swell final:ascii::Piece{
double _n_cols_27805{};
double _n_rows_27806{};
d::Array<d::Array<d::String,false>,false> _n_g_27807{};
d::Array<double,true> _n_sy_27808{};
std::function<double()> _n_rand_27809{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_flecks_27810{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_far_27811{};
std::function<d::String(double,std::shared_ptr<_n_Record_27881>)> _render;
double _n_surface_27812(double _a0,double _a1){double _n_x_27829=_a0;
double _n_t_27830=_a1;
{
auto _n_binding_27926=d::at(_n_WAVES_27799,0.0);
double _n_l_27831=d::at(_n_binding_27926,0.0);
double _n_v_27832=d::at(_n_binding_27926,1.0);
double _n_a_27833=d::at(_n_binding_27926,2.0);
double _n_q_27834=d::at(_n_binding_27926,3.0);
double _n_h_27835=_n_trochoid_27803(((_n_x_27829/_n_l_27831)-(_n_t_27830*_n_v_27832)),_n_q_27834);
{double _n_i_27836=0.0;
for(;d::truth((_n_i_27836<3.0));(void)((_n_i_27836++))){d::check_cancel();(void)((_n_h_27835=_n_trochoid_27803((((_n_x_27829-(_n_LEAN_27800*(_n_h_27835+0.5)))/_n_l_27831)-(_n_t_27830*_n_v_27832)),_n_q_27834)));
}}
double _n_y_27837=(_n_MEAN_27792-(_n_a_27833*_n_h_27835));
{double _n_i_27838=1.0;
for(;d::truth((_n_i_27838<double(_n_WAVES_27799.size())));(void)((_n_i_27838++))){d::check_cancel();auto _n_binding_27927=d::at(_n_WAVES_27799,_n_i_27838);
double _n_l_27839=d::at(_n_binding_27927,0.0);
double _n_v_27840=d::at(_n_binding_27927,1.0);
double _n_a_27841=d::at(_n_binding_27927,2.0);
double _n_q_27842=d::at(_n_binding_27927,3.0);
(void)((_n_y_27837=(_n_y_27837-(_n_a_27841*_n_trochoid_27803(((_n_x_27829/_n_l_27839)-(_n_t_27830*_n_v_27840)),_n_q_27842)))));
}}
return _n_y_27837;

}
}

explicit Native_sea_swell(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_27887=_n_meta_27788;
this->_n_cols_27805=_n_binding_27887->_p_cols;
this->_n_rows_27806=_n_binding_27887->_p_rows;
this->_n_g_27807=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_27806,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_27805));}));
this->_n_sy_27808=d::Array<double,true>(size_t((this->_n_cols_27805+1.0)));
this->_n_rand_27809=_n_mulberry32_27804(21.0);
this->_n_flecks_27810=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_d_27819=1.5;
for(;d::truth((_n_d_27819<10.0));(void)((_n_d_27819=(_n_d_27819+1.0)))){d::check_cancel();d::String _n_glyph_27820=(d::truth((_n_d_27819<3.0))?d::String(u"~"):(d::truth((_n_d_27819<5.5))?d::String(u"-"):d::String(u"·")));
double _n_gap_27821=(3.0+(_n_d_27819*2.0));
double _n_run_27822=(d::truth((_n_d_27819<3.0))?3.0:(d::truth((_n_d_27819<5.5))?2.0:1.0));
double _n_from_27823=std::floor((this->_n_rand_27809()*this->_n_cols_27805));
{double _n_i_27824=0.0;
for(;d::truth((_n_i_27824<(this->_n_cols_27805-_n_run_27822)));(void)((_n_i_27824=(_n_i_27824+std::floor((_n_gap_27821*(0.6+this->_n_rand_27809()))))))){d::check_cancel();double _n_n_27825=(1.0+std::floor((this->_n_rand_27809()*_n_run_27822)));
{double _n_k_27826=0.0;
for(;d::truth((_n_k_27826<_n_n_27825));(void)(((_n_k_27826++),(_n_i_27824++)))){d::check_cancel();(void)(this->_n_flecks_27810.push(std::make_shared<std::tuple<double,double,d::String>>(d::mod((_n_from_27823+_n_i_27824),this->_n_cols_27805),_n_d_27819,_n_glyph_27820)));
}}
}}
}}
this->_n_far_27811=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_r_27827=(_n_HORIZON_27791+1.0);
for(;d::truth((_n_r_27827<(_n_HORIZON_27791+4.0)));(void)((_n_r_27827++))){d::check_cancel();{double _n_c_27828=std::floor((this->_n_rand_27809()*12.0));
for(;d::truth((_n_c_27828<this->_n_cols_27805));(void)((_n_c_27828=(_n_c_27828+(11.0+std::floor((this->_n_rand_27809()*14.0))))))){d::check_cancel();(void)(this->_n_far_27811.push(std::make_shared<std::tuple<double,double,d::String>>(_n_r_27827,_n_c_27828,(d::truth((this->_n_rand_27809()<0.5))?d::String(u"-"):d::String(u"--")))));
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_27881> _a1) mutable ->d::String{double _n_time_27843=_a0;
{
double _n_t_27844=(_n_time_27843+_n_START_27801);
for(auto &&_n_item_27888:this->_n_g_27807){d::check_cancel();d::Array<d::String,false> _n_row_27845=_n_item_27888;
(void)(_n_row_27845.fill(d::String(u" ")));
}
{double _n_x_27846=0.0;
for(;d::truth((_n_x_27846<=this->_n_cols_27805));(void)((_n_x_27846++))){d::check_cancel();(void)(([&](){auto&& _n_array_27889=this->_n_sy_27808;auto _n_index_27890=_n_x_27846;auto _n_value_27891=this->_n_surface_27812(_n_x_27846,_n_t_27844);d::put(_n_array_27889,_n_index_27890,_n_value_27891);return _n_value_27891;})());
}}
auto _n_top_27847=[&]( double _a0) mutable ->double{double _n_c_27848=_a0;
return std::floor(((d::at(this->_n_sy_27808,_n_c_27848)+d::at(this->_n_sy_27808,(_n_c_27848+1.0)))/2.0));};
auto _n_clear_27849=[&]( double _a0) mutable ->bool{double _n_c_27850=_a0;
return ([&]()->bool{auto _n_logical_27892=([&]()->bool{auto _n_logical_27893=(_n_c_27850<0.0);return d::truth(_n_logical_27893)?_n_logical_27893:(_n_c_27850>=this->_n_cols_27805);})();return d::truth(_n_logical_27892)?_n_logical_27892:(_n_HORIZON_27791<(d::minimum({d::at(this->_n_sy_27808,_n_c_27850),d::at(this->_n_sy_27808,(_n_c_27850+1.0))})-0.9));})();};
{double _n_c_27851=0.0;
for(;d::truth((_n_c_27851<this->_n_cols_27805));(void)((_n_c_27851++))){d::check_cancel();if(((d::truth(_n_clear_27849((_n_c_27851-1.0)))&&d::truth(_n_clear_27849(_n_c_27851)))&&d::truth(_n_clear_27849((_n_c_27851+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_27894=d::at(this->_n_g_27807,_n_HORIZON_27791);auto _n_index_27895=_n_c_27851;auto _n_value_27896=d::String(u"_");d::put(_n_array_27894,_n_index_27895,_n_value_27896);return _n_value_27896;})());
}
}}
for(auto &&_n_item_27897:this->_n_far_27811){d::check_cancel();auto _n_binding_27898=_n_item_27897;
double _n_r_27852=std::get<0>(*_n_binding_27898);
double _n_c_27853=std::get<1>(*_n_binding_27898);
d::String _n_s_27854=std::get<2>(*_n_binding_27898);
{double _n_k_27855=0.0;
for(;d::truth((_n_k_27855<double(_n_s_27854.size())));(void)((_n_k_27855++))){d::check_cancel();if(((d::truth(((_n_c_27853+_n_k_27855)<this->_n_cols_27805))&&d::truth((d::at(d::at(this->_n_g_27807,_n_HORIZON_27791),(_n_c_27853+_n_k_27855))==d::String(u"_"))))&&d::truth((_n_r_27852<(_n_top_27847((_n_c_27853+_n_k_27855))-1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_27899=d::at(this->_n_g_27807,_n_r_27852);auto _n_index_27900=(_n_c_27853+_n_k_27855);auto _n_value_27901=d::String(u"-");d::put(_n_array_27899,_n_index_27900,_n_value_27901);return _n_value_27901;})());
}
}}
}
for(auto &&_n_item_27902:this->_n_flecks_27810){d::check_cancel();auto _n_binding_27903=_n_item_27902;
double _n_c_27856=std::get<0>(*_n_binding_27903);
double _n_d_27857=std::get<1>(*_n_binding_27903);
d::String _n_ch_27858=std::get<2>(*_n_binding_27903);
{
double _n_y_27859=((d::at(this->_n_sy_27808,_n_c_27856)*0.5)+(d::at(this->_n_sy_27808,(_n_c_27856+1.0))*0.5));
double _n_r_27860=std::floor(((_n_MEAN_27792+((_n_y_27859-_n_MEAN_27792)*std::exp(((-d::number(_n_K_27802))*_n_d_27857))))+_n_d_27857));
if((d::truth((_n_r_27860>_n_top_27847(_n_c_27856)))&&d::truth((_n_r_27860<this->_n_rows_27806)))){d::check_cancel();(void)(([&](){auto&& _n_array_27904=d::at(this->_n_g_27807,_n_r_27860);auto _n_index_27905=_n_c_27856;auto _n_value_27906=_n_ch_27858;d::put(_n_array_27904,_n_index_27905,_n_value_27906);return _n_value_27906;})());
}

}
}
{double _n_c_27861=0.0;
for(;d::truth((_n_c_27861<this->_n_cols_27805));(void)((_n_c_27861++))){d::check_cancel();double _n_a_27862=d::at(this->_n_sy_27808,_n_c_27861);
double _n_b_27863=d::at(this->_n_sy_27808,(_n_c_27861+1.0));
double _n_y_27864=((_n_a_27862+_n_b_27863)/2.0);
double _n_r_27865=std::floor(_n_y_27864);
(void)(([&](){auto&& _n_array_27907=d::at(this->_n_g_27807,_n_r_27865);auto _n_index_27908=_n_c_27861;auto _n_value_27909=(d::truth((std::fabs((_n_b_27863-_n_a_27862))>0.8))?(d::truth((_n_b_27863<_n_a_27862))?d::String(u"/"):d::String(u"\\")):d::at(_n_SURF_27793,([&](){auto _n_argument_27910=3.0;auto _n_argument_27911=std::floor(((1.0-(_n_y_27864-_n_r_27865))*4.0));return d::minimum({_n_argument_27910,_n_argument_27911});})()));d::put(_n_array_27907,_n_index_27908,_n_value_27909);return _n_value_27909;})());
}}
auto _n_binding_27912=d::at(_n_WAVES_27799,0.0);
double _n_l_27866=d::at(_n_binding_27912,0.0);
double _n_v_27867=d::at(_n_binding_27912,1.0);
double _n_c0_27868=d::round((_n_BOAT_X_27798-(1.5*std::sin((_n_TAU_27790*(((_n_BOAT_X_27798+(_n_HULL_27796/2.0))/_n_l_27866)-(_n_t_27844*_n_v_27867)))))));
double _n_rise_27869=([&](){auto _n_left_27913=this->_n_surface_27812((_n_c0_27868+1.0),_n_t_27844);auto _n_right_27914=this->_n_surface_27812(((_n_c0_27868+_n_HULL_27796)-1.0),_n_t_27844);return (_n_left_27913-_n_right_27914);})();
double _n_tilt_27870=(d::truth((_n_rise_27869>_n_PITCH_27797))?1.0:(d::truth((_n_rise_27869<(-d::number(_n_PITCH_27797))))?(-d::number(1.0)):0.0));
d::Array<d::String,false> _n_shape_27871=(d::truth((_n_tilt_27870>0.0))?_n_BOAT_27794->_p_right:(d::truth((_n_tilt_27870<0.0))?_n_BOAT_27794->_p_left:_n_BOAT_27794->_p_level));
double _n_at_27872=(d::truth((_n_tilt_27870>0.0))?(_n_c0_27868+2.5):(d::truth((_n_tilt_27870<0.0))?((_n_c0_27868+_n_HULL_27796)-2.5):(_n_c0_27868+(_n_HULL_27796/2.0))));
double _n_water_27873=std::floor(this->_n_surface_27812(_n_at_27872,_n_t_27844));
{double _n_c_27874=(_n_c0_27868-3.0);
for(;d::truth((_n_c_27874<=((_n_c0_27868+_n_HULL_27796)+2.0)));(void)((_n_c_27874++))){d::check_cancel();if((d::truth((_n_c_27874<0.0))||d::truth((_n_c_27874>=this->_n_cols_27805)))){d::check_cancel();continue;
}
if((d::truth((_n_top_27847(_n_c_27874)!=_n_HORIZON_27791))&&d::truth(((_n_water_27873-_n_HORIZON_27791)<=4.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_27915=d::at(this->_n_g_27807,_n_HORIZON_27791);auto _n_index_27916=_n_c_27874;auto _n_value_27917=d::String(u" ");d::put(_n_array_27915,_n_index_27916,_n_value_27917);return _n_value_27917;})());
}
if((d::truth((_n_c_27874>=(_n_c0_27868-1.0)))&&d::truth((_n_c_27874<=(_n_c0_27868+_n_HULL_27796))))){d::check_cancel();{double _n_r_27875=(_n_water_27873-4.0);
for(;d::truth((_n_r_27875<=([&](){auto _n_argument_27918=_n_water_27873;auto _n_argument_27919=_n_top_27847(_n_c_27874);return d::maximum({_n_argument_27918,_n_argument_27919});})()));(void)((_n_r_27875++))){d::check_cancel();if(d::truth((_n_r_27875>=0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_27920=d::at(this->_n_g_27807,_n_r_27875);auto _n_index_27921=_n_c_27874;auto _n_value_27922=d::String(u" ");d::put(_n_array_27920,_n_index_27921,_n_value_27922);return _n_value_27922;})());
}
}}
}
}}
(void)(d::forEach(_n_shape_27871,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_27876=_a0;
double _n_i_27877=_a1;
{
double _n_r_27878=(((_n_water_27873-double(_n_shape_27871.size()))+1.0)+_n_i_27877);
if(d::truth((_n_r_27878<0.0))){d::check_cancel();return;
}
{double _n_k_27879=0.0;
for(;d::truth((_n_k_27879<double(_n_line_27876.size())));(void)((_n_k_27879++))){d::check_cancel();if(d::truth((d::at(_n_line_27876,_n_k_27879)!=d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_27923=d::at(this->_n_g_27807,_n_r_27878);auto _n_index_27924=(_n_c0_27868+_n_k_27879);auto _n_value_27925=d::at(_n_line_27876,_n_k_27879);d::put(_n_array_27923,_n_index_27924,_n_value_27925);return _n_value_27925;})());
}
}}

}
}));
return d::join(d::map(this->_n_g_27807,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_27880=_a0;
return d::join(_n_row_27880,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sea-swell").cols)*ascii::catalog_meta("sea-swell").rows);auto _env=std::make_shared<_n_Record_27881>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sea_swell_meta(){return catalog_meta("sea-swell");}
std::unique_ptr<Piece> make_sea_swell(const AsciiPieceOptions &o){return std::make_unique<Native_sea_swell>(o);}
}
