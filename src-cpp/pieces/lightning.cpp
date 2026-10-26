// Direct, statically typed C++ from src/pieces/lightning.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19683;
struct _n_Record_19701;
struct _n_Record_19706;
struct _n_Record_19708;
struct _n_Record_19803;
struct _n_Record_19683{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19683> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19683>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_19701{
double _p_x{};
double _p_w{};
double _p_d{};
static std::shared_ptr<_n_Record_19701> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19701>();out->_p_x=d::decode<double>(j["x"]);out->_p_w=d::decode<double>(j["w"]);out->_p_d=d::decode<double>(j["d"]);return out;}
};
struct _n_Record_19706{
double _p_start{};
double _p_x0{};
double _p_x1{};
double _p_ground{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _p_main{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _p_forks{};
static std::shared_ptr<_n_Record_19706> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19706>();out->_p_start=d::decode<double>(j["start"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_ground=d::decode<double>(j["ground"]);out->_p_main=d::decode<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>>(j["main"]);out->_p_forks=d::decode<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>>(j["forks"]);return out;}
};
struct _n_Record_19708{
double _p_x{};
double _p_y{};
double _p_speed{};
double _p_len{};
static std::shared_ptr<_n_Record_19708> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19708>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_len=d::decode<double>(j["len"]);return out;}
};
struct _n_Record_19803{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19803> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19803>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_19691(double _a0);
double _n_hash_19692(double _a0,double _a1);
double _n_ease_19693(double _a0);
double _n_noise_19694(double _a0,double _a1);
double _n_flash_19695(double _a0);
std::shared_ptr<_n_Record_19683> _n_meta_19682=[](){return ([&](){auto _n_object_19806=std::make_shared<_n_Record_19683>();_n_object_19806->_p_name=d::String(u"lightning");_n_object_19806->_p_category=d::String(u"nature");_n_object_19806->_p_note=d::String(u"a forked bolt striking out of a storm cloud in the rain");_n_object_19806->_p_cols=64.0;_n_object_19806->_p_rows=22.0;_n_object_19806->_p_fps=20.0;return _n_object_19806;})();}();
const d::String _n_CLOUD_19684=[](){return d::String(u" .:-=+*#%@");}();
const d::String _n_EDGE_19685=[](){return d::String(u"'-._");}();
const double _n_LOOP_19686=[](){return 12.0;}();
d::Array<d::Array<double,false>,false> _n_STRIKES_19687=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{11.94,27.0},d::Array<double,false>{2.44,44.0},d::Array<double,false>{4.62,17.0},d::Array<double,false>{7.6,51.0},d::Array<double,false>{9.9,34.0}};}();
const double _n_DECK_19688=[](){return 2.6;}();
const double _n_DRIFT_19689=[](){return 0.35;}();
const double _n_DROPS_19690=[](){return 130.0;}();
std::function<double()> _n_mulberry32_19691(double _a0){double _n_a_19710=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_19710=double(d::i32((_n_a_19710+1831565813.0))|d::i32(0.0))));
double _n_t_19711=d::imul(double(d::i32(_n_a_19710)^d::i32(double(d::u32(_n_a_19710)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_19710)));
(void)((_n_t_19711=double(d::i32((_n_t_19711+d::imul(double(d::i32(_n_t_19711)^d::i32(double(d::u32(_n_t_19711)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_19711)))))^d::i32(_n_t_19711))));
return (double(d::u32(double(d::i32(_n_t_19711)^d::i32(double(d::u32(_n_t_19711)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

double _n_hash_19692(double _a0,double _a1){double _n_x_19712=_a0;
double _n_y_19713=_a1;
{
double _n_h_19714=([&](){auto _n_left_19807=d::imul(_n_x_19712,668265261.0);auto _n_right_19808=d::imul(_n_y_19713,374761393.0);return double(d::i32(_n_left_19807)^d::i32(_n_right_19808));})();
(void)((_n_h_19714=d::imul(double(d::i32(_n_h_19714)^d::i32(double(d::u32(_n_h_19714)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_19714=d::imul(double(d::i32(_n_h_19714)^d::i32(double(d::u32(_n_h_19714)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_19714)^d::i32(double(d::u32(_n_h_19714)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_19693(double _a0){double _n_t_19715=_a0;
return ((_n_t_19715*_n_t_19715)*(3.0-(2.0*_n_t_19715)));}

double _n_noise_19694(double _a0,double _a1){double _n_x_19716=_a0;
double _n_y_19717=_a1;
{
double _n_i_19718=std::floor(_n_x_19716);
double _n_j_19719=std::floor(_n_y_19717);
double _n_u_19720=_n_ease_19693((_n_x_19716-_n_i_19718));
double _n_v_19721=_n_ease_19693((_n_y_19717-_n_j_19719));
double _n_a_19722=_n_hash_19692(_n_i_19718,_n_j_19719);
double _n_b_19723=_n_hash_19692((_n_i_19718+1.0),_n_j_19719);
double _n_c_19724=_n_hash_19692(_n_i_19718,(_n_j_19719+1.0));
double _n_d_19725=_n_hash_19692((_n_i_19718+1.0),(_n_j_19719+1.0));
return (((_n_a_19722+((_n_b_19723-_n_a_19722)*_n_u_19720))+((_n_c_19724-_n_a_19722)*_n_v_19721))+(((((_n_a_19722-_n_b_19723)-_n_c_19724)+_n_d_19725)*_n_u_19720)*_n_v_19721));

}
}

double _n_flash_19695(double _a0){double _n_a_19726=_a0;
return ((d::truth((_n_a_19726<0.0))||d::truth((_n_a_19726>1.0)))?0.0:(d::truth((_n_a_19726<0.05))?0.3:(d::truth((_n_a_19726<0.15))?1.0:(d::truth((_n_a_19726<0.2))?0.15:(d::truth((_n_a_19726<0.3))?0.9:(0.9*std::exp(((-d::number((_n_a_19726-0.3)))/0.18))))))));}

struct Native_lightning final:ascii::Piece{
double _n_cols_19696{};
double _n_rows_19697{};
std::function<double()> _n_rand_19698{};
d::Array<std::shared_ptr<_n_Record_19701>,false> _n_billows_19700{};
double _n_WRAP_19702{};
d::Array<std::shared_ptr<_n_Record_19706>,false> _n_bolts_19705{};
d::Array<std::shared_ptr<_n_Record_19708>,false> _n_drops_19707{};
d::Array<d::String,false> _n_out_19709{};
std::function<d::String(double,std::shared_ptr<_n_Record_19803>)> _render;
double _n_hill_19699(double _a0){double _n_c_19727=_a0;
return ([&](){auto _n_left_19876=((this->_n_rows_19697-3.6)-(1.2*std::sin(((_n_c_19727*0.07)+0.8))));auto _n_right_19877=(0.5*std::sin(((_n_c_19727*0.19)+2.1)));return (_n_left_19876-_n_right_19877);})();}

double _n_side_19703(double _a0){double _n_c_19729=_a0;
return ([&](){auto _n_argument_19878=1.0;auto _n_argument_19879=(d::minimum({(_n_c_19729+1.0),(this->_n_cols_19696-_n_c_19729)})/16.0);return d::minimum({_n_argument_19878,_n_argument_19879});})();}

double _n_bottom_19704(double _a0,double _a1){double _n_c_19730=_a0;
double _n_t_19731=_a1;
{
double _n_y_19732=(_n_DECK_19688-(1.2*(1.0-this->_n_side_19703(_n_c_19730))));
for(auto &&_n_item_19880:this->_n_billows_19700){d::check_cancel();std::shared_ptr<_n_Record_19701> _n_b_19733=_n_item_19880;
{
double _n_x_19734=(d::mod((d::mod((((_n_c_19730+0.5)-_n_b_19733->_p_x)+(_n_t_19731*_n_DRIFT_19689)),this->_n_WRAP_19702)+this->_n_WRAP_19702),this->_n_WRAP_19702)-12.0);
if(d::truth((std::fabs(_n_x_19734)<_n_b_19733->_p_w))){d::check_cancel();(void)((_n_y_19732=([&](){auto _n_argument_19881=_n_y_19732;auto _n_argument_19882=(_n_DECK_19688+([&](){auto _n_left_19883=(_n_b_19733->_p_d*this->_n_side_19703(_n_c_19730));auto _n_right_19884=std::sqrt((1.0-std::pow((_n_x_19734/_n_b_19733->_p_w),2.0)));return (_n_left_19883*_n_right_19884);})());return d::maximum({_n_argument_19881,_n_argument_19882});})()));
}

}
}
return _n_y_19732;

}
}

explicit Native_lightning(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_19809=_n_meta_19682;
this->_n_cols_19696=_n_binding_19809->_p_cols;
this->_n_rows_19697=_n_binding_19809->_p_rows;
this->_n_rand_19698=_n_mulberry32_19691(7.0);
this->_n_billows_19700=d::Array<std::shared_ptr<_n_Record_19701>,false>{};
this->_n_WRAP_19702=(this->_n_cols_19696+24.0);
{double _n_x_19728=0.0;
for(;d::truth((_n_x_19728<(this->_n_WRAP_19702-4.0)));(void)((_n_x_19728=(_n_x_19728+(6.0+(this->_n_rand_19698()*5.0)))))){d::check_cancel();(void)(this->_n_billows_19700.push(([&](){auto _n_object_19811=std::make_shared<_n_Record_19701>();_n_object_19811->_p_x=_n_x_19728;_n_object_19811->_p_w=(3.5+(this->_n_rand_19698()*3.5));_n_object_19811->_p_d=(1.0+(this->_n_rand_19698()*2.6));return _n_object_19811;})()));
}}
this->_n_bolts_19705=d::map(_n_STRIKES_19687,[&]( d::Array<double,false> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_19706>{auto _n_binding_19812=_a0;
double _n_start_19735=d::at(_n_binding_19812,0.0);
double _n_x0_19736=d::at(_n_binding_19812,1.0);
double _n_n_19737=_a1;
{
std::function<double()> _n_rand_19738=_n_mulberry32_19691((31.0+(_n_n_19737*17.0)));
double _n_r0_19739=(std::floor(this->_n_bottom_19704(_n_x0_19736,_n_start_19735))+1.0);
double _n_ground_19740=std::floor(this->_n_hill_19699((_n_x0_19736+0.5)));
auto _n_walk_19741=[&]( double _a0,double _a1,double _a2,double _a3,d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _a4,bool _a5) mutable ->double{double _n_c_19742=_a0;
double _n_from_19743=_a1;
double _n_to_19744=_a2;
double _n_lean_19745=_a3;
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_cells_19746=_a4;
bool _n_main_19747=_a5;
{
double _n_dir_19748=_n_lean_19745;
double _n_run_19749=0.0;
{double _n_r_19750=_n_from_19743;
for(;d::truth((_n_r_19750<_n_to_19744));(void)((_n_r_19750++))){d::check_cancel();if(d::truth(((_n_run_19749--)<=0.0))){d::check_cancel();(void)((_n_dir_19748=(d::truth(_n_main_19747)?([&]()->double{auto _n_logical_19813=(d::truth((_n_rand_19738()<0.5))?(-d::number(_n_dir_19748)):_n_dir_19748);return d::truth(_n_logical_19813)?_n_logical_19813:1.0;})():_n_lean_19745)));
(void)((_n_run_19749=(1.0+std::floor((_n_rand_19738()*3.0)))));
}
double _n_dx_19751=(d::truth((_n_rand_19738()<(d::truth(_n_main_19747)?0.22:0.15)))?0.0:(_n_dir_19748*(d::truth((_n_rand_19738()<0.3))?2.0:1.0)));
if((d::truth((_n_c_19742>=0.0))&&d::truth((_n_c_19742<this->_n_cols_19696)))){d::check_cancel();(void)(_n_cells_19746.push(std::make_shared<std::tuple<double,double,d::String>>(_n_c_19742,_n_r_19750,(d::truth((_n_dx_19751<0.0))?d::String(u"/"):(d::truth((_n_dx_19751>0.0))?d::String(u"\\"):d::String(u"|"))))));
}
(void)((_n_c_19742=(_n_c_19742+_n_dx_19751)));
}}
return _n_c_19742;

}
};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_main_19752=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_forks_19753=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
double _n_x1_19754=([&](){auto _n_argument_19814=_n_x0_19736;auto _n_argument_19815=_n_r0_19739;auto _n_argument_19816=_n_ground_19740;auto _n_argument_19817=(d::truth((_n_rand_19738()<0.5))?(-d::number(1.0)):1.0);auto _n_argument_19818=_n_main_19752;auto _n_argument_19819=true;return _n_walk_19741(_n_argument_19814,_n_argument_19815,_n_argument_19816,_n_argument_19817,_n_argument_19818,_n_argument_19819);})();
{double _n_f_19755=0.0;
double _n_n_19756=(2.0+std::floor((_n_rand_19738()*2.0)));
for(;d::truth((_n_f_19755<_n_n_19756));(void)((_n_f_19755++))){d::check_cancel();auto _n_binding_19820=d::at(_n_main_19752,std::floor((double(_n_main_19752.size())*(0.2+(0.5*_n_rand_19738())))));
double _n_c_19757=std::get<0>(*_n_binding_19820);
double _n_r_19758=std::get<1>(*_n_binding_19820);
d::String _n_ch_19759=std::get<2>(*_n_binding_19820);
double _n_lean_19760=(d::truth((_n_ch_19759==d::String(u"/")))?1.0:(d::truth((_n_ch_19759==d::String(u"\\")))?(-d::number(1.0)):(d::truth(d::mod(_n_f_19755,2.0))?1.0:(-d::number(1.0)))));
(void)(([&](){auto _n_argument_19821=(_n_c_19757+_n_lean_19760);auto _n_argument_19822=(_n_r_19758+1.0);auto _n_argument_19823=([&](){auto _n_argument_19824=(_n_ground_19740-2.0);auto _n_argument_19825=((_n_r_19758+3.0)+std::floor((_n_rand_19738()*4.0)));return d::minimum({_n_argument_19824,_n_argument_19825});})();auto _n_argument_19826=_n_lean_19760;auto _n_argument_19827=_n_forks_19753;auto _n_argument_19828=false;return _n_walk_19741(_n_argument_19821,_n_argument_19822,_n_argument_19823,_n_argument_19826,_n_argument_19827,_n_argument_19828);})());
}}
return ([&](){auto _n_object_19830=std::make_shared<_n_Record_19706>();_n_object_19830->_p_start=_n_start_19735;_n_object_19830->_p_x0=_n_x0_19736;_n_object_19830->_p_x1=_n_x1_19754;_n_object_19830->_p_ground=_n_ground_19740;_n_object_19830->_p_main=_n_main_19752;_n_object_19830->_p_forks=_n_forks_19753;return _n_object_19830;})();

}
});
this->_n_drops_19707=d::Array<std::shared_ptr<_n_Record_19708>,false>(d::from(_n_DROPS_19690,[&]( ) mutable ->std::shared_ptr<_n_Record_19708>{{
double _n_near_19761=this->_n_rand_19698();
return ([&](){auto _n_object_19832=std::make_shared<_n_Record_19708>();_n_object_19832->_p_x=(this->_n_rand_19698()*(this->_n_cols_19696+20.0));_n_object_19832->_p_y=this->_n_rand_19698();_n_object_19832->_p_speed=(0.9+(_n_near_19761*0.9));_n_object_19832->_p_len=(d::truth((_n_near_19761<0.25))?1.0:(d::truth((_n_near_19761<0.7))?2.0:3.0));return _n_object_19832;})();

}
}));
this->_n_out_19709=d::Array<d::String,false>(size_t((this->_n_cols_19696*this->_n_rows_19697)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_19803> _a1) mutable ->d::String{double _n_t_19762=_a0;
{
double _n_u_19763=d::mod((d::mod(_n_t_19762,_n_LOOP_19686)+_n_LOOP_19686),_n_LOOP_19686);
double _n_lit_19764=0.0;
std::shared_ptr<_n_Record_19706> _n_bolt_19765=std::shared_ptr<_n_Record_19706>{};
double _n_age_19766=0.0;
for(auto &&_n_item_19833:this->_n_bolts_19705){d::check_cancel();std::shared_ptr<_n_Record_19706> _n_b_19767=_n_item_19833;
for(auto &&_n_item_19834:d::Array<double,false>{(_n_u_19763-_n_b_19767->_p_start),((_n_u_19763-_n_b_19767->_p_start)+_n_LOOP_19686)}){d::check_cancel();double _n_a_19768=_n_item_19834;
{
double _n_f_19769=_n_flash_19695(_n_a_19768);
if(d::truth((_n_f_19769>_n_lit_19764))){d::check_cancel();(void)(([&](){auto _n_unpack_19835=std::make_shared<std::tuple<double,std::shared_ptr<_n_Record_19706>,double>>(_n_f_19769,_n_b_19767,_n_a_19768);_n_lit_19764=std::get<0>(*_n_unpack_19835);_n_bolt_19765=std::get<1>(*_n_unpack_19835);_n_age_19766=std::get<2>(*_n_unpack_19835);return _n_unpack_19835;})());
}

}
}
}
(void)(this->_n_out_19709.fill(d::String(u" ")));
double _n_fall_19770=(this->_n_rows_19697-3.0);
for(auto &&_n_item_19836:this->_n_drops_19707){d::check_cancel();std::shared_ptr<_n_Record_19708> _n_d_19771=_n_item_19836;
{
double _n_y_19772=(3.0+(d::mod((_n_d_19771->_p_y+((_n_t_19762*_n_d_19771->_p_speed)*0.8)),1.0)*_n_fall_19770));
{double _n_i_19773=0.0;
for(;d::truth((_n_i_19773<_n_d_19771->_p_len));(void)((_n_i_19773++))){d::check_cancel();double _n_r_19774=(std::floor(_n_y_19772)-_n_i_19773);
double _n_c_19775=std::floor((d::mod(((d::mod(((_n_d_19771->_p_x-(_n_y_19772-3.0))+_n_i_19773),(this->_n_cols_19696+20.0))+this->_n_cols_19696)+20.0),(this->_n_cols_19696+20.0))-10.0));
if((((d::truth((_n_c_19775>=0.0))&&d::truth((_n_c_19775<this->_n_cols_19696)))&&d::truth((_n_r_19774>=0.0)))&&d::truth((_n_r_19774<(this->_n_hill_19699((_n_c_19775+0.5))-0.6))))){d::check_cancel();(void)(([&](){auto&& _n_array_19837=this->_n_out_19709;auto _n_index_19838=(_n_c_19775+(_n_r_19774*this->_n_cols_19696));auto _n_value_19839=(d::truth((_n_d_19771->_p_len>1.0))?d::String(u","):d::String(u"."));d::put(_n_array_19837,_n_index_19838,_n_value_19839);return _n_value_19839;})());
}
}}

}
}
{double _n_c_19776=0.0;
for(;d::truth((_n_c_19776<this->_n_cols_19696));(void)((_n_c_19776++))){d::check_cancel();double _n_y_19777=this->_n_bottom_19704(_n_c_19776,_n_t_19762);
double _n_near_19778=(d::truth(_n_bolt_19765)?std::exp((-d::number(std::pow(((_n_c_19776-_n_bolt_19765->_p_x0)/12.0),2.0)))):0.0);
double _n_light_19779=((0.5+(0.35*_n_lit_19764))+((0.6*_n_lit_19764)*_n_near_19778));
{double _n_r_19780=0.0;
for(;d::truth((_n_r_19780<=_n_y_19777));(void)((_n_r_19780++))){d::check_cancel();double _n_k_19781=(_n_c_19776+(_n_r_19780*this->_n_cols_19696));
if(d::truth(((_n_r_19780+1.0)>_n_y_19777))){d::check_cancel();(void)(([&](){auto&& _n_array_19840=this->_n_out_19709;auto _n_index_19841=_n_k_19781;auto _n_value_19842=d::at(_n_EDGE_19685,([&](){auto _n_argument_19843=3.0;auto _n_argument_19844=std::floor(((_n_y_19777-_n_r_19780)*4.0));return d::minimum({_n_argument_19843,_n_argument_19844});})());d::put(_n_array_19840,_n_index_19841,_n_value_19842);return _n_value_19842;})());
continue;
}
double _n_n_19782=_n_noise_19694(((_n_c_19776*0.2)+((_n_t_19762*_n_DRIFT_19689)*0.2)),((_n_r_19780*0.8)+3.0));
if(d::truth((_n_n_19782<((0.45-(0.2*_n_r_19780))+(0.5*(1.0-this->_n_side_19703(_n_c_19776))))))){d::check_cancel();continue;
}
double _n_v_19783=([&](){auto _n_left_19845=(((0.3+(0.3*d::maximum({0.0,(1.0-(((_n_y_19777-_n_r_19780)-1.0)/2.5))})))+(0.6*(_n_n_19782-0.5)))*_n_light_19779);auto _n_right_19846=(0.5+(0.5*this->_n_side_19703(_n_c_19776)));return (_n_left_19845*_n_right_19846);})();
(void)(([&](){auto&& _n_array_19847=this->_n_out_19709;auto _n_index_19848=_n_k_19781;auto _n_value_19849=d::at(_n_CLOUD_19684,([&](){auto _n_argument_19850=1.0;auto _n_argument_19851=([&](){auto _n_argument_19852=(double(_n_CLOUD_19684.size())-1.0);auto _n_argument_19853=d::round((_n_v_19783*(double(_n_CLOUD_19684.size())-1.0)));return d::minimum({_n_argument_19852,_n_argument_19853});})();return d::maximum({_n_argument_19850,_n_argument_19851});})());d::put(_n_array_19847,_n_index_19848,_n_value_19849);return _n_value_19849;})());
}}
}}
{double _n_c_19784=0.0;
for(;d::truth((_n_c_19784<this->_n_cols_19696));(void)((_n_c_19784++))){d::check_cancel();double _n_y_19785=this->_n_hill_19699((_n_c_19784+0.5));
double _n_r_19786=std::floor(_n_y_19785);
(void)(([&](){auto&& _n_array_19854=this->_n_out_19709;auto _n_index_19855=(_n_c_19784+(_n_r_19786*this->_n_cols_19696));auto _n_value_19856=d::at(d::String(u"_.-'"),([&](){auto _n_argument_19857=3.0;auto _n_argument_19858=std::floor(((1.0-(_n_y_19785-_n_r_19786))*4.0));return d::minimum({_n_argument_19857,_n_argument_19858});})());d::put(_n_array_19854,_n_index_19855,_n_value_19856);return _n_value_19856;})());
{double _n_rr_19787=(_n_r_19786+1.0);
for(;d::truth((_n_rr_19787<this->_n_rows_19697));(void)((_n_rr_19787++))){d::check_cancel();double _n_g_19788=((_n_lit_19764*(1.1-((_n_rr_19787-_n_y_19785)/4.0)))-0.2);
(void)(([&](){auto&& _n_array_19859=this->_n_out_19709;auto _n_index_19860=(_n_c_19784+(_n_rr_19787*this->_n_cols_19696));auto _n_value_19861=(d::truth((_n_g_19788>0.55))?d::String(u"="):(d::truth((_n_g_19788>0.3))?d::String(u"-"):(d::truth((_n_g_19788>0.08))?d::String(u"."):d::String(u" "))));d::put(_n_array_19859,_n_index_19860,_n_value_19861);return _n_value_19861;})());
}}
}}
if((d::truth(_n_bolt_19765)&&d::truth((_n_lit_19764>0.12)))){d::check_cancel();double _n_reach_19789=(d::truth((_n_age_19766<0.05))?((double(_n_bolt_19765->_p_main.size())*(_n_age_19766/0.05))*0.8):double(_n_bolt_19765->_p_main.size()));
(void)(d::forEach(_n_bolt_19765->_p_main,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0,double _a1) mutable ->void{auto _n_binding_19862=_a0;
double _n_c_19790=std::get<0>(*_n_binding_19862);
double _n_r_19791=std::get<1>(*_n_binding_19862);
d::String _n_ch_19792=std::get<2>(*_n_binding_19862);
double _n_i_19793=_a1;
{
if(d::truth((_n_i_19793<_n_reach_19789))){d::check_cancel();(void)(([&](){auto&& _n_array_19863=this->_n_out_19709;auto _n_index_19864=(_n_c_19790+(_n_r_19791*this->_n_cols_19696));auto _n_value_19865=(d::truth((_n_lit_19764>0.4))?_n_ch_19792:d::String(u":"));d::put(_n_array_19863,_n_index_19864,_n_value_19865);return _n_value_19865;})());
}

}
}));
if(d::truth((_n_lit_19764>0.6))){d::check_cancel();for(auto &&_n_item_19866:_n_bolt_19765->_p_forks){d::check_cancel();auto _n_binding_19867=_n_item_19866;
double _n_c_19794=std::get<0>(*_n_binding_19867);
double _n_r_19795=std::get<1>(*_n_binding_19867);
d::String _n_ch_19796=std::get<2>(*_n_binding_19867);
(void)(([&](){auto&& _n_array_19868=this->_n_out_19709;auto _n_index_19869=(_n_c_19794+(_n_r_19795*this->_n_cols_19696));auto _n_value_19870=_n_ch_19796;d::put(_n_array_19868,_n_index_19869,_n_value_19870);return _n_value_19870;})());
}
}
if((d::truth((_n_lit_19764>0.4))&&d::truth((_n_age_19766>=0.05)))){d::check_cancel();double _n_c_19797=_n_bolt_19765->_p_x1;
double _n_r_19798=_n_bolt_19765->_p_ground;
for(auto &&_n_item_19871:d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{std::make_shared<std::tuple<double,d::String>>((-d::number(2.0)),d::String(u"-")),std::make_shared<std::tuple<double,d::String>>((-d::number(1.0)),d::String(u"\\")),std::make_shared<std::tuple<double,d::String>>(0.0,d::String(u"*")),std::make_shared<std::tuple<double,d::String>>(1.0,d::String(u"/")),std::make_shared<std::tuple<double,d::String>>(2.0,d::String(u"-"))}){d::check_cancel();auto _n_binding_19872=_n_item_19871;
double _n_dc_19799=std::get<0>(*_n_binding_19872);
d::String _n_ch_19800=std::get<1>(*_n_binding_19872);
if((d::truth(((_n_c_19797+_n_dc_19799)>=0.0))&&d::truth(((_n_c_19797+_n_dc_19799)<this->_n_cols_19696)))){d::check_cancel();(void)(([&](){auto&& _n_array_19873=this->_n_out_19709;auto _n_index_19874=((_n_c_19797+_n_dc_19799)+(_n_r_19798*this->_n_cols_19696));auto _n_value_19875=_n_ch_19800;d::put(_n_array_19873,_n_index_19874,_n_value_19875);return _n_value_19875;})());
}
}
}
}
d::Array<d::String,false> _n_lines_19801=d::Array<d::String,false>{};
{double _n_r_19802=0.0;
for(;d::truth((_n_r_19802<this->_n_rows_19697));(void)((_n_r_19802++))){d::check_cancel();(void)(_n_lines_19801.push(d::join(this->_n_out_19709.slice((_n_r_19802*this->_n_cols_19696),((_n_r_19802+1.0)*this->_n_cols_19696)),d::String(u""))));
}}
return d::join(_n_lines_19801,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lightning").cols)*ascii::catalog_meta("lightning").rows);auto _env=std::make_shared<_n_Record_19803>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lightning_meta(){return catalog_meta("lightning");}
std::unique_ptr<Piece> make_lightning(const AsciiPieceOptions &o){return std::make_unique<Native_lightning>(o);}
}
