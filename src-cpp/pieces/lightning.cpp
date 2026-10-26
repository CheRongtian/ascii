// Direct, statically typed C++ from src/pieces/lightning.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19682;
struct _n_Record_19700;
struct _n_Record_19705;
struct _n_Record_19707;
struct _n_Record_19802;
struct _n_Record_19682{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19682> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19682>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_19700{
double _p_x{};
double _p_w{};
double _p_d{};
static std::shared_ptr<_n_Record_19700> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19700>();out->_p_x=d::decode<double>(j["x"]);out->_p_w=d::decode<double>(j["w"]);out->_p_d=d::decode<double>(j["d"]);return out;}
};
struct _n_Record_19705{
double _p_start{};
double _p_x0{};
double _p_x1{};
double _p_ground{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _p_main{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _p_forks{};
static std::shared_ptr<_n_Record_19705> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19705>();out->_p_start=d::decode<double>(j["start"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_ground=d::decode<double>(j["ground"]);out->_p_main=d::decode<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>>(j["main"]);out->_p_forks=d::decode<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>>(j["forks"]);return out;}
};
struct _n_Record_19707{
double _p_x{};
double _p_y{};
double _p_speed{};
double _p_len{};
static std::shared_ptr<_n_Record_19707> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19707>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_len=d::decode<double>(j["len"]);return out;}
};
struct _n_Record_19802{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19802> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19802>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_19690(double _a0);
double _n_hash_19691(double _a0,double _a1);
double _n_ease_19692(double _a0);
double _n_noise_19693(double _a0,double _a1);
double _n_flash_19694(double _a0);
std::shared_ptr<_n_Record_19682> _n_meta_19681=[](){return ([&](){auto _n_object_19805=std::make_shared<_n_Record_19682>();_n_object_19805->_p_name=d::String(u"lightning");_n_object_19805->_p_category=d::String(u"nature");_n_object_19805->_p_note=d::String(u"a forked bolt striking out of a storm cloud in the rain");_n_object_19805->_p_cols=64.0;_n_object_19805->_p_rows=22.0;_n_object_19805->_p_fps=20.0;return _n_object_19805;})();}();
const d::String _n_CLOUD_19683=[](){return d::String(u" .:-=+*#%@");}();
const d::String _n_EDGE_19684=[](){return d::String(u"'-._");}();
const double _n_LOOP_19685=[](){return 12.0;}();
d::Array<std::array<double,2>,false> _n_STRIKES_19686=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{11.94,27.0},std::array<double,2>{2.44,44.0},std::array<double,2>{4.62,17.0},std::array<double,2>{7.6,51.0},std::array<double,2>{9.9,34.0}};}();
const double _n_DECK_19687=[](){return 2.6;}();
const double _n_DRIFT_19688=[](){return 0.35;}();
const double _n_DROPS_19689=[](){return 130.0;}();
std::function<double()> _n_mulberry32_19690(double _a0){double _n_a_19709=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_19709=double(d::i32((_n_a_19709+1831565813.0))|d::i32(0.0))));
double _n_t_19710=d::imul(double(d::i32(_n_a_19709)^d::i32(double(d::u32(_n_a_19709)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_19709)));
(void)((_n_t_19710=double(d::i32((_n_t_19710+d::imul(double(d::i32(_n_t_19710)^d::i32(double(d::u32(_n_t_19710)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_19710)))))^d::i32(_n_t_19710))));
return (double(d::u32(double(d::i32(_n_t_19710)^d::i32(double(d::u32(_n_t_19710)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

double _n_hash_19691(double _a0,double _a1){double _n_x_19711=_a0;
double _n_y_19712=_a1;
{
double _n_h_19713=([&](){auto _n_left_19806=d::imul(_n_x_19711,668265261.0);auto _n_right_19807=d::imul(_n_y_19712,374761393.0);return double(d::i32(_n_left_19806)^d::i32(_n_right_19807));})();
(void)((_n_h_19713=d::imul(double(d::i32(_n_h_19713)^d::i32(double(d::u32(_n_h_19713)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_19713=d::imul(double(d::i32(_n_h_19713)^d::i32(double(d::u32(_n_h_19713)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_19713)^d::i32(double(d::u32(_n_h_19713)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_19692(double _a0){double _n_t_19714=_a0;
return ((_n_t_19714*_n_t_19714)*(3.0-(2.0*_n_t_19714)));}

double _n_noise_19693(double _a0,double _a1){double _n_x_19715=_a0;
double _n_y_19716=_a1;
{
double _n_i_19717=std::floor(_n_x_19715);
double _n_j_19718=std::floor(_n_y_19716);
double _n_u_19719=_n_ease_19692((_n_x_19715-_n_i_19717));
double _n_v_19720=_n_ease_19692((_n_y_19716-_n_j_19718));
double _n_a_19721=_n_hash_19691(_n_i_19717,_n_j_19718);
double _n_b_19722=_n_hash_19691((_n_i_19717+1.0),_n_j_19718);
double _n_c_19723=_n_hash_19691(_n_i_19717,(_n_j_19718+1.0));
double _n_d_19724=_n_hash_19691((_n_i_19717+1.0),(_n_j_19718+1.0));
return (((_n_a_19721+((_n_b_19722-_n_a_19721)*_n_u_19719))+((_n_c_19723-_n_a_19721)*_n_v_19720))+(((((_n_a_19721-_n_b_19722)-_n_c_19723)+_n_d_19724)*_n_u_19719)*_n_v_19720));

}
}

double _n_flash_19694(double _a0){double _n_a_19725=_a0;
return ((d::truth((_n_a_19725<0.0))||d::truth((_n_a_19725>1.0)))?0.0:(d::truth((_n_a_19725<0.05))?0.3:(d::truth((_n_a_19725<0.15))?1.0:(d::truth((_n_a_19725<0.2))?0.15:(d::truth((_n_a_19725<0.3))?0.9:(0.9*std::exp(((-d::number((_n_a_19725-0.3)))/0.18))))))));}

struct Native_lightning final:ascii::Piece{
double _n_cols_19695{};
double _n_rows_19696{};
std::function<double()> _n_rand_19697{};
d::Array<std::shared_ptr<_n_Record_19700>,false> _n_billows_19699{};
double _n_WRAP_19701{};
d::Array<std::shared_ptr<_n_Record_19705>,false> _n_bolts_19704{};
d::Array<std::shared_ptr<_n_Record_19707>,false> _n_drops_19706{};
d::Array<d::String,false> _n_out_19708{};
std::function<d::String(double,std::shared_ptr<_n_Record_19802>)> _render;
double _n_hill_19698(double _a0){double _n_c_19726=_a0;
return ([&](){auto _n_left_19875=((this->_n_rows_19696-3.6)-(1.2*std::sin(((_n_c_19726*0.07)+0.8))));auto _n_right_19876=(0.5*std::sin(((_n_c_19726*0.19)+2.1)));return (_n_left_19875-_n_right_19876);})();}

double _n_side_19702(double _a0){double _n_c_19728=_a0;
return ([&](){auto _n_argument_19877=1.0;auto _n_argument_19878=(d::minimum({(_n_c_19728+1.0),(this->_n_cols_19695-_n_c_19728)})/16.0);return d::minimum({_n_argument_19877,_n_argument_19878});})();}

double _n_bottom_19703(double _a0,double _a1){double _n_c_19729=_a0;
double _n_t_19730=_a1;
{
double _n_y_19731=(_n_DECK_19687-(1.2*(1.0-this->_n_side_19702(_n_c_19729))));
for(auto &&_n_item_19879:this->_n_billows_19699){d::check_cancel();std::shared_ptr<_n_Record_19700> _n_b_19732=_n_item_19879;
{
double _n_x_19733=(d::mod((d::mod((((_n_c_19729+0.5)-_n_b_19732->_p_x)+(_n_t_19730*_n_DRIFT_19688)),this->_n_WRAP_19701)+this->_n_WRAP_19701),this->_n_WRAP_19701)-12.0);
if(d::truth((std::fabs(_n_x_19733)<_n_b_19732->_p_w))){d::check_cancel();(void)((_n_y_19731=([&](){auto _n_argument_19880=_n_y_19731;auto _n_argument_19881=(_n_DECK_19687+([&](){auto _n_left_19882=(_n_b_19732->_p_d*this->_n_side_19702(_n_c_19729));auto _n_right_19883=std::sqrt((1.0-std::pow((_n_x_19733/_n_b_19732->_p_w),2.0)));return (_n_left_19882*_n_right_19883);})());return d::maximum({_n_argument_19880,_n_argument_19881});})()));
}

}
}
return _n_y_19731;

}
}

explicit Native_lightning(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_19808=_n_meta_19681;
this->_n_cols_19695=_n_binding_19808->_p_cols;
this->_n_rows_19696=_n_binding_19808->_p_rows;
this->_n_rand_19697=_n_mulberry32_19690(7.0);
this->_n_billows_19699=d::Array<std::shared_ptr<_n_Record_19700>,false>{};
this->_n_WRAP_19701=(this->_n_cols_19695+24.0);
{double _n_x_19727=0.0;
for(;d::truth((_n_x_19727<(this->_n_WRAP_19701-4.0)));(void)((_n_x_19727=(_n_x_19727+(6.0+(this->_n_rand_19697()*5.0)))))){d::check_cancel();(void)(this->_n_billows_19699.push(([&](){auto _n_object_19810=std::make_shared<_n_Record_19700>();_n_object_19810->_p_x=_n_x_19727;_n_object_19810->_p_w=(3.5+(this->_n_rand_19697()*3.5));_n_object_19810->_p_d=(1.0+(this->_n_rand_19697()*2.6));return _n_object_19810;})()));
}}
this->_n_bolts_19704=d::map(_n_STRIKES_19686,[&]( std::array<double,2> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_19705>{auto _n_binding_19811=_a0;
double _n_start_19734=d::at(_n_binding_19811,0.0);
double _n_x0_19735=d::at(_n_binding_19811,1.0);
double _n_n_19736=_a1;
{
std::function<double()> _n_rand_19737=_n_mulberry32_19690((31.0+(_n_n_19736*17.0)));
double _n_r0_19738=(std::floor(this->_n_bottom_19703(_n_x0_19735,_n_start_19734))+1.0);
double _n_ground_19739=std::floor(this->_n_hill_19698((_n_x0_19735+0.5)));
auto _n_walk_19740=[&]( double _a0,double _a1,double _a2,double _a3,d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _a4,bool _a5) mutable ->double{double _n_c_19741=_a0;
double _n_from_19742=_a1;
double _n_to_19743=_a2;
double _n_lean_19744=_a3;
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_cells_19745=_a4;
bool _n_main_19746=_a5;
{
double _n_dir_19747=_n_lean_19744;
double _n_run_19748=0.0;
{double _n_r_19749=_n_from_19742;
for(;d::truth((_n_r_19749<_n_to_19743));(void)((_n_r_19749++))){d::check_cancel();if(d::truth(((_n_run_19748--)<=0.0))){d::check_cancel();(void)((_n_dir_19747=(d::truth(_n_main_19746)?([&]()->double{auto _n_logical_19812=(d::truth((_n_rand_19737()<0.5))?(-d::number(_n_dir_19747)):_n_dir_19747);return d::truth(_n_logical_19812)?_n_logical_19812:1.0;})():_n_lean_19744)));
(void)((_n_run_19748=(1.0+std::floor((_n_rand_19737()*3.0)))));
}
double _n_dx_19750=(d::truth((_n_rand_19737()<(d::truth(_n_main_19746)?0.22:0.15)))?0.0:(_n_dir_19747*(d::truth((_n_rand_19737()<0.3))?2.0:1.0)));
if((d::truth((_n_c_19741>=0.0))&&d::truth((_n_c_19741<this->_n_cols_19695)))){d::check_cancel();(void)(_n_cells_19745.push(std::make_shared<std::tuple<double,double,d::String>>(_n_c_19741,_n_r_19749,(d::truth((_n_dx_19750<0.0))?d::String(u"/"):(d::truth((_n_dx_19750>0.0))?d::String(u"\\"):d::String(u"|"))))));
}
(void)((_n_c_19741=(_n_c_19741+_n_dx_19750)));
}}
return _n_c_19741;

}
};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_main_19751=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_forks_19752=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
double _n_x1_19753=([&](){auto _n_argument_19813=_n_x0_19735;auto _n_argument_19814=_n_r0_19738;auto _n_argument_19815=_n_ground_19739;auto _n_argument_19816=(d::truth((_n_rand_19737()<0.5))?(-d::number(1.0)):1.0);auto _n_argument_19817=_n_main_19751;auto _n_argument_19818=true;return _n_walk_19740(_n_argument_19813,_n_argument_19814,_n_argument_19815,_n_argument_19816,_n_argument_19817,_n_argument_19818);})();
{double _n_f_19754=0.0;
double _n_n_19755=(2.0+std::floor((_n_rand_19737()*2.0)));
for(;d::truth((_n_f_19754<_n_n_19755));(void)((_n_f_19754++))){d::check_cancel();auto _n_binding_19819=d::at(_n_main_19751,std::floor((double(_n_main_19751.size())*(0.2+(0.5*_n_rand_19737())))));
double _n_c_19756=std::get<0>(*_n_binding_19819);
double _n_r_19757=std::get<1>(*_n_binding_19819);
d::String _n_ch_19758=std::get<2>(*_n_binding_19819);
double _n_lean_19759=(d::truth((_n_ch_19758==d::String(u"/")))?1.0:(d::truth((_n_ch_19758==d::String(u"\\")))?(-d::number(1.0)):(d::truth(d::mod(_n_f_19754,2.0))?1.0:(-d::number(1.0)))));
(void)(([&](){auto _n_argument_19820=(_n_c_19756+_n_lean_19759);auto _n_argument_19821=(_n_r_19757+1.0);auto _n_argument_19822=([&](){auto _n_argument_19823=(_n_ground_19739-2.0);auto _n_argument_19824=((_n_r_19757+3.0)+std::floor((_n_rand_19737()*4.0)));return d::minimum({_n_argument_19823,_n_argument_19824});})();auto _n_argument_19825=_n_lean_19759;auto _n_argument_19826=_n_forks_19752;auto _n_argument_19827=false;return _n_walk_19740(_n_argument_19820,_n_argument_19821,_n_argument_19822,_n_argument_19825,_n_argument_19826,_n_argument_19827);})());
}}
return ([&](){auto _n_object_19829=std::make_shared<_n_Record_19705>();_n_object_19829->_p_start=_n_start_19734;_n_object_19829->_p_x0=_n_x0_19735;_n_object_19829->_p_x1=_n_x1_19753;_n_object_19829->_p_ground=_n_ground_19739;_n_object_19829->_p_main=_n_main_19751;_n_object_19829->_p_forks=_n_forks_19752;return _n_object_19829;})();

}
});
this->_n_drops_19706=d::Array<std::shared_ptr<_n_Record_19707>,false>(d::from(_n_DROPS_19689,[&]( ) mutable ->std::shared_ptr<_n_Record_19707>{{
double _n_near_19760=this->_n_rand_19697();
return ([&](){auto _n_object_19831=std::make_shared<_n_Record_19707>();_n_object_19831->_p_x=(this->_n_rand_19697()*(this->_n_cols_19695+20.0));_n_object_19831->_p_y=this->_n_rand_19697();_n_object_19831->_p_speed=(0.9+(_n_near_19760*0.9));_n_object_19831->_p_len=(d::truth((_n_near_19760<0.25))?1.0:(d::truth((_n_near_19760<0.7))?2.0:3.0));return _n_object_19831;})();

}
}));
this->_n_out_19708=d::Array<d::String,false>(size_t((this->_n_cols_19695*this->_n_rows_19696)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_19802> _a1) mutable ->d::String{double _n_t_19761=_a0;
{
double _n_u_19762=d::mod((d::mod(_n_t_19761,_n_LOOP_19685)+_n_LOOP_19685),_n_LOOP_19685);
double _n_lit_19763=0.0;
std::shared_ptr<_n_Record_19705> _n_bolt_19764=std::shared_ptr<_n_Record_19705>{};
double _n_age_19765=0.0;
for(auto &&_n_item_19832:this->_n_bolts_19704){d::check_cancel();std::shared_ptr<_n_Record_19705> _n_b_19766=_n_item_19832;
for(auto &&_n_item_19833:d::Array<double,false>{(_n_u_19762-_n_b_19766->_p_start),((_n_u_19762-_n_b_19766->_p_start)+_n_LOOP_19685)}){d::check_cancel();double _n_a_19767=_n_item_19833;
{
double _n_f_19768=_n_flash_19694(_n_a_19767);
if(d::truth((_n_f_19768>_n_lit_19763))){d::check_cancel();(void)(([&](){auto _n_unpack_19834=std::make_shared<std::tuple<double,std::shared_ptr<_n_Record_19705>,double>>(_n_f_19768,_n_b_19766,_n_a_19767);_n_lit_19763=std::get<0>(*_n_unpack_19834);_n_bolt_19764=std::get<1>(*_n_unpack_19834);_n_age_19765=std::get<2>(*_n_unpack_19834);return _n_unpack_19834;})());
}

}
}
}
(void)(this->_n_out_19708.fill(d::String(u" ")));
double _n_fall_19769=(this->_n_rows_19696-3.0);
for(auto &&_n_item_19835:this->_n_drops_19706){d::check_cancel();std::shared_ptr<_n_Record_19707> _n_d_19770=_n_item_19835;
{
double _n_y_19771=(3.0+(d::mod((_n_d_19770->_p_y+((_n_t_19761*_n_d_19770->_p_speed)*0.8)),1.0)*_n_fall_19769));
{double _n_i_19772=0.0;
for(;d::truth((_n_i_19772<_n_d_19770->_p_len));(void)((_n_i_19772++))){d::check_cancel();double _n_r_19773=(std::floor(_n_y_19771)-_n_i_19772);
double _n_c_19774=std::floor((d::mod(((d::mod(((_n_d_19770->_p_x-(_n_y_19771-3.0))+_n_i_19772),(this->_n_cols_19695+20.0))+this->_n_cols_19695)+20.0),(this->_n_cols_19695+20.0))-10.0));
if((((d::truth((_n_c_19774>=0.0))&&d::truth((_n_c_19774<this->_n_cols_19695)))&&d::truth((_n_r_19773>=0.0)))&&d::truth((_n_r_19773<(this->_n_hill_19698((_n_c_19774+0.5))-0.6))))){d::check_cancel();(void)(([&](){auto&& _n_array_19836=this->_n_out_19708;auto _n_index_19837=(_n_c_19774+(_n_r_19773*this->_n_cols_19695));auto _n_value_19838=(d::truth((_n_d_19770->_p_len>1.0))?d::String(u","):d::String(u"."));d::put(_n_array_19836,_n_index_19837,_n_value_19838);return _n_value_19838;})());
}
}}

}
}
{double _n_c_19775=0.0;
for(;d::truth((_n_c_19775<this->_n_cols_19695));(void)((_n_c_19775++))){d::check_cancel();double _n_y_19776=this->_n_bottom_19703(_n_c_19775,_n_t_19761);
double _n_near_19777=(d::truth(_n_bolt_19764)?std::exp((-d::number(std::pow(((_n_c_19775-_n_bolt_19764->_p_x0)/12.0),2.0)))):0.0);
double _n_light_19778=((0.5+(0.35*_n_lit_19763))+((0.6*_n_lit_19763)*_n_near_19777));
{double _n_r_19779=0.0;
for(;d::truth((_n_r_19779<=_n_y_19776));(void)((_n_r_19779++))){d::check_cancel();double _n_k_19780=(_n_c_19775+(_n_r_19779*this->_n_cols_19695));
if(d::truth(((_n_r_19779+1.0)>_n_y_19776))){d::check_cancel();(void)(([&](){auto&& _n_array_19839=this->_n_out_19708;auto _n_index_19840=_n_k_19780;auto _n_value_19841=d::at(_n_EDGE_19684,([&](){auto _n_argument_19842=3.0;auto _n_argument_19843=std::floor(((_n_y_19776-_n_r_19779)*4.0));return d::minimum({_n_argument_19842,_n_argument_19843});})());d::put(_n_array_19839,_n_index_19840,_n_value_19841);return _n_value_19841;})());
continue;
}
double _n_n_19781=_n_noise_19693(((_n_c_19775*0.2)+((_n_t_19761*_n_DRIFT_19688)*0.2)),((_n_r_19779*0.8)+3.0));
if(d::truth((_n_n_19781<((0.45-(0.2*_n_r_19779))+(0.5*(1.0-this->_n_side_19702(_n_c_19775))))))){d::check_cancel();continue;
}
double _n_v_19782=([&](){auto _n_left_19844=(((0.3+(0.3*d::maximum({0.0,(1.0-(((_n_y_19776-_n_r_19779)-1.0)/2.5))})))+(0.6*(_n_n_19781-0.5)))*_n_light_19778);auto _n_right_19845=(0.5+(0.5*this->_n_side_19702(_n_c_19775)));return (_n_left_19844*_n_right_19845);})();
(void)(([&](){auto&& _n_array_19846=this->_n_out_19708;auto _n_index_19847=_n_k_19780;auto _n_value_19848=d::at(_n_CLOUD_19683,([&](){auto _n_argument_19849=1.0;auto _n_argument_19850=([&](){auto _n_argument_19851=(double(_n_CLOUD_19683.size())-1.0);auto _n_argument_19852=d::round((_n_v_19782*(double(_n_CLOUD_19683.size())-1.0)));return d::minimum({_n_argument_19851,_n_argument_19852});})();return d::maximum({_n_argument_19849,_n_argument_19850});})());d::put(_n_array_19846,_n_index_19847,_n_value_19848);return _n_value_19848;})());
}}
}}
{double _n_c_19783=0.0;
for(;d::truth((_n_c_19783<this->_n_cols_19695));(void)((_n_c_19783++))){d::check_cancel();double _n_y_19784=this->_n_hill_19698((_n_c_19783+0.5));
double _n_r_19785=std::floor(_n_y_19784);
(void)(([&](){auto&& _n_array_19853=this->_n_out_19708;auto _n_index_19854=(_n_c_19783+(_n_r_19785*this->_n_cols_19695));auto _n_value_19855=d::at(d::String(u"_.-'"),([&](){auto _n_argument_19856=3.0;auto _n_argument_19857=std::floor(((1.0-(_n_y_19784-_n_r_19785))*4.0));return d::minimum({_n_argument_19856,_n_argument_19857});})());d::put(_n_array_19853,_n_index_19854,_n_value_19855);return _n_value_19855;})());
{double _n_rr_19786=(_n_r_19785+1.0);
for(;d::truth((_n_rr_19786<this->_n_rows_19696));(void)((_n_rr_19786++))){d::check_cancel();double _n_g_19787=((_n_lit_19763*(1.1-((_n_rr_19786-_n_y_19784)/4.0)))-0.2);
(void)(([&](){auto&& _n_array_19858=this->_n_out_19708;auto _n_index_19859=(_n_c_19783+(_n_rr_19786*this->_n_cols_19695));auto _n_value_19860=(d::truth((_n_g_19787>0.55))?d::String(u"="):(d::truth((_n_g_19787>0.3))?d::String(u"-"):(d::truth((_n_g_19787>0.08))?d::String(u"."):d::String(u" "))));d::put(_n_array_19858,_n_index_19859,_n_value_19860);return _n_value_19860;})());
}}
}}
if((d::truth(_n_bolt_19764)&&d::truth((_n_lit_19763>0.12)))){d::check_cancel();double _n_reach_19788=(d::truth((_n_age_19765<0.05))?((double(_n_bolt_19764->_p_main.size())*(_n_age_19765/0.05))*0.8):double(_n_bolt_19764->_p_main.size()));
(void)(d::forEach(_n_bolt_19764->_p_main,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0,double _a1) mutable ->void{auto _n_binding_19861=_a0;
double _n_c_19789=std::get<0>(*_n_binding_19861);
double _n_r_19790=std::get<1>(*_n_binding_19861);
d::String _n_ch_19791=std::get<2>(*_n_binding_19861);
double _n_i_19792=_a1;
{
if(d::truth((_n_i_19792<_n_reach_19788))){d::check_cancel();(void)(([&](){auto&& _n_array_19862=this->_n_out_19708;auto _n_index_19863=(_n_c_19789+(_n_r_19790*this->_n_cols_19695));auto _n_value_19864=(d::truth((_n_lit_19763>0.4))?_n_ch_19791:d::String(u":"));d::put(_n_array_19862,_n_index_19863,_n_value_19864);return _n_value_19864;})());
}

}
}));
if(d::truth((_n_lit_19763>0.6))){d::check_cancel();for(auto &&_n_item_19865:_n_bolt_19764->_p_forks){d::check_cancel();auto _n_binding_19866=_n_item_19865;
double _n_c_19793=std::get<0>(*_n_binding_19866);
double _n_r_19794=std::get<1>(*_n_binding_19866);
d::String _n_ch_19795=std::get<2>(*_n_binding_19866);
(void)(([&](){auto&& _n_array_19867=this->_n_out_19708;auto _n_index_19868=(_n_c_19793+(_n_r_19794*this->_n_cols_19695));auto _n_value_19869=_n_ch_19795;d::put(_n_array_19867,_n_index_19868,_n_value_19869);return _n_value_19869;})());
}
}
if((d::truth((_n_lit_19763>0.4))&&d::truth((_n_age_19765>=0.05)))){d::check_cancel();double _n_c_19796=_n_bolt_19764->_p_x1;
double _n_r_19797=_n_bolt_19764->_p_ground;
for(auto &&_n_item_19870:d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{std::make_shared<std::tuple<double,d::String>>((-d::number(2.0)),d::String(u"-")),std::make_shared<std::tuple<double,d::String>>((-d::number(1.0)),d::String(u"\\")),std::make_shared<std::tuple<double,d::String>>(0.0,d::String(u"*")),std::make_shared<std::tuple<double,d::String>>(1.0,d::String(u"/")),std::make_shared<std::tuple<double,d::String>>(2.0,d::String(u"-"))}){d::check_cancel();auto _n_binding_19871=_n_item_19870;
double _n_dc_19798=std::get<0>(*_n_binding_19871);
d::String _n_ch_19799=std::get<1>(*_n_binding_19871);
if((d::truth(((_n_c_19796+_n_dc_19798)>=0.0))&&d::truth(((_n_c_19796+_n_dc_19798)<this->_n_cols_19695)))){d::check_cancel();(void)(([&](){auto&& _n_array_19872=this->_n_out_19708;auto _n_index_19873=((_n_c_19796+_n_dc_19798)+(_n_r_19797*this->_n_cols_19695));auto _n_value_19874=_n_ch_19799;d::put(_n_array_19872,_n_index_19873,_n_value_19874);return _n_value_19874;})());
}
}
}
}
d::Array<d::String,false> _n_lines_19800=d::Array<d::String,false>{};
{double _n_r_19801=0.0;
for(;d::truth((_n_r_19801<this->_n_rows_19696));(void)((_n_r_19801++))){d::check_cancel();(void)(_n_lines_19800.push(d::join(this->_n_out_19708.slice((_n_r_19801*this->_n_cols_19695),((_n_r_19801+1.0)*this->_n_cols_19695)),d::String(u""))));
}}
return d::join(_n_lines_19800,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lightning").cols)*ascii::catalog_meta("lightning").rows);auto _env=std::make_shared<_n_Record_19802>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lightning_meta(){return catalog_meta("lightning");}
std::unique_ptr<Piece> make_lightning(const AsciiPieceOptions &o){return std::make_unique<Native_lightning>(o);}
}
