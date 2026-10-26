// Direct, statically typed C++ from src/pieces/glxgears.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12527;
struct _n_Record_12536;
struct _n_Record_12622;
struct _n_Record_12626;
struct _n_Record_12627;
struct _n_Record_12628;
struct _n_Record_12527{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_12527> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12527>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_12536{
double _p_r0{};
double _p_r{};
double _p_w{};
double _p_n{};
double _p_x{};
double _p_y{};
double _p_k{};
double _p_off{};
double _p_face{};
double _p_r1{};
double _p_r2{};
static std::shared_ptr<_n_Record_12536> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12536>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_off=d::decode<double>(j["off"]);out->_p_face=d::decode<double>(j["face"]);out->_p_r1=d::decode<double>(j["r1"]);out->_p_r2=d::decode<double>(j["r2"]);return out;}
};
struct _n_Record_12622{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12622> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12622>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_12626{
double _p_r0{};
double _p_r{};
double _p_w{};
double _p_n{};
double _p_x{};
double _p_y{};
double _p_k{};
double _p_off{};
double _p_face{};
static std::shared_ptr<_n_Record_12626> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12626>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_off=d::decode<double>(j["off"]);out->_p_face=d::decode<double>(j["face"]);return out;}
};
struct _n_Record_12627{
double _p_r0{};
double _p_r{};
double _p_w{};
double _p_n{};
double _p_x{};
double _p_y{};
double _p_k{};
double _p_face{};
static std::shared_ptr<_n_Record_12627> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12627>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_face=d::decode<double>(j["face"]);return out;}
};
struct _n_Record_12628{
double _p_r0{};
double _p_r{};
double _p_w{};
double _p_n{};
double _p_x{};
double _p_y{};
double _p_k{};
std::optional<double> _p_off{};
double _p_face{};
static std::shared_ptr<_n_Record_12628> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12628>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_off=d::decode<std::optional<double>>(j["off"]);out->_p_face=d::decode<double>(j["face"]);return out;}
};
double _n_across_12542(double _a0,double _a1);
double _n_up_12543(double _a0,double _a1,double _a2);
double _n_radius_12544(std::shared_ptr<_n_Record_12536> _a0,double _a1);
std::shared_ptr<_n_Record_12527> _n_meta_12526=[](){return ([&](){auto _n_object_12625=std::make_shared<_n_Record_12527>();_n_object_12625->_p_name=d::String(u"glxgears");_n_object_12625->_p_category=d::String(u"shapes");_n_object_12625->_p_note=d::String(u"three meshing gears turning, after glxgears");_n_object_12625->_p_cols=56.0;_n_object_12625->_p_rows=31.0;_n_object_12625->_p_fps=24.0;return _n_object_12625;})();}();
const double _n_TAU_12528=[](){return (ascii::PI*2.0);}();
const double _n_RAD_12529=[](){return (ascii::PI/180.0);}();
const double _n_SCALE_12530=[](){return 4.2;}();
const double _n_DS_12531=[](){return 0.05;}();
const double _n_SPEED_12532=[](){return 17.0;}();
const d::String _n_SHADE_12533=[](){return d::String(u" ░▒▓█");}();
const double _n_DEPTH_12534=[](){return 0.8;}();
d::Array<std::shared_ptr<_n_Record_12536>,false> _n_GEARS_12535=[](){return d::Array<std::shared_ptr<_n_Record_12536>,false>{([&](){auto _n_object_12630=std::make_shared<_n_Record_12536>();_n_object_12630->_p_r0=1.0;_n_object_12630->_p_r=4.0;_n_object_12630->_p_w=1.0;_n_object_12630->_p_n=12.0;_n_object_12630->_p_x=(-d::number(3.0));_n_object_12630->_p_y=(-d::number(2.0));_n_object_12630->_p_k=1.0;_n_object_12630->_p_off=0.0;_n_object_12630->_p_face=3.0;return _n_object_12630;})(),([&](){auto _n_object_12632=std::make_shared<_n_Record_12536>();_n_object_12632->_p_r0=0.5;_n_object_12632->_p_r=2.0;_n_object_12632->_p_w=2.0;_n_object_12632->_p_n=6.0;_n_object_12632->_p_x=3.1;_n_object_12632->_p_y=(-d::number(2.0));_n_object_12632->_p_k=(-d::number(2.0));_n_object_12632->_p_face=2.0;return _n_object_12632;})(),([&](){auto _n_object_12634=std::make_shared<_n_Record_12536>();_n_object_12634->_p_r0=1.3;_n_object_12634->_p_r=2.0;_n_object_12634->_p_w=0.5;_n_object_12634->_p_n=6.0;_n_object_12634->_p_x=(-d::number(3.1));_n_object_12634->_p_y=4.2;_n_object_12634->_p_k=(-d::number(2.0));_n_object_12634->_p_face=2.0;return _n_object_12634;})()};}();
const double _n_cY_12537=[](){return std::cos((30.0*_n_RAD_12529));}();
const double _n_sY_12538=[](){return std::sin((30.0*_n_RAD_12529));}();
const double _n_cX_12539=[](){return std::cos((20.0*_n_RAD_12529));}();
const double _n_sX_12540=[](){return std::sin((20.0*_n_RAD_12529));}();
d::Array<double,false> _n_LIGHT_12541=[](){return d::map(d::Array<double,false>{5.0,5.0,10.0},[&]( double _a0) mutable ->double{double _n_c_12562=_a0;
return (_n_c_12562/d::hypot(std::initializer_list<double>{5.0,5.0,10.0}));});}();
const bool _n_init_12635=[](){for(auto &&_n_item_12636:_n_GEARS_12535){d::check_cancel();std::shared_ptr<_n_Record_12536> _n_g_12559=_n_item_12636;
{
(void)((_n_g_12559->_p_r1=(_n_g_12559->_p_r-(_n_DEPTH_12534/2.0))));
(void)((_n_g_12559->_p_r2=(_n_g_12559->_p_r+(_n_DEPTH_12534/2.0))));
if(d::truth((_n_g_12559->_p_k==1.0))){d::check_cancel();continue;
}
std::shared_ptr<_n_Record_12536> _n_big_12560=d::at(_n_GEARS_12535,0.0);
double _n_dir_12561=std::atan2((_n_g_12559->_p_y-_n_big_12560->_p_y),(_n_g_12559->_p_x-_n_big_12560->_p_x));
(void)((_n_g_12559->_p_off=(((_n_dir_12561+ascii::PI)-((((0.875-((_n_dir_12561*_n_big_12560->_p_n)/_n_TAU_12528))+0.375)*_n_TAU_12528)/_n_g_12559->_p_n))/_n_RAD_12529)));

}
}
return true;}();
double _n_across_12542(double _a0,double _a1){double _n_x_12563=_a0;
double _n_z_12564=_a1;
return ((_n_x_12563*_n_cY_12537)+(_n_z_12564*_n_sY_12538));}

double _n_up_12543(double _a0,double _a1,double _a2){double _n_x_12565=_a0;
double _n_y_12566=_a1;
double _n_z_12567=_a2;
return ((_n_y_12566*_n_cX_12539)+(((_n_x_12565*_n_sY_12538)-(_n_z_12567*_n_cY_12537))*_n_sX_12540));}

double _n_radius_12544(std::shared_ptr<_n_Record_12536> _a0,double _a1){std::shared_ptr<_n_Record_12536> _n_g_12568=_a0;
double _n_th_12569=_a1;
{
double _n_u_12570=(((_n_th_12569*_n_g_12568->_p_n)/_n_TAU_12528)-std::floor(((_n_th_12569*_n_g_12568->_p_n)/_n_TAU_12528)));
double _n_rise_12571=(d::truth((_n_u_12570<0.25))?(_n_u_12570*4.0):(d::truth((_n_u_12570<0.5))?1.0:(d::truth((_n_u_12570<0.75))?((0.75-_n_u_12570)*4.0):0.0)));
return (_n_g_12568->_p_r1+((_n_g_12568->_p_r2-_n_g_12568->_p_r1)*_n_rise_12571));

}
}

struct Native_glxgears final:ascii::Piece{
double _n_cols_12545{};
double _n_rows_12546{};
double _n_W_12547{};
double _n_H_12548{};
d::Array<float,true> _n_depth_12549{};
d::Array<int8_t,true> _n_tone_12550{};
d::Array<int8_t,true> _n_who_12551{};
d::Array<d::String,false> _n_lines_12552{};
double _n_left_12553{};
double _n_right_12554{};
double _n_high_12555{};
double _n_low_12556{};
double _n_LEFT_12557{};
double _n_HIGH_12558{};
std::function<d::String(double,std::shared_ptr<_n_Record_12622>)> _render;

explicit Native_glxgears(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12637=_n_meta_12526;
this->_n_cols_12545=_n_binding_12637->_p_cols;
this->_n_rows_12546=_n_binding_12637->_p_rows;
this->_n_W_12547=(this->_n_cols_12545*2.0);
this->_n_H_12548=(this->_n_rows_12546*2.0);
this->_n_depth_12549=d::Array<float,true>(size_t((this->_n_W_12547*this->_n_H_12548)));
this->_n_tone_12550=d::Array<int8_t,true>(size_t((this->_n_W_12547*this->_n_H_12548)));
this->_n_who_12551=d::Array<int8_t,true>(size_t((this->_n_W_12547*this->_n_H_12548)));
this->_n_lines_12552=d::Array<d::String,false>(size_t(this->_n_rows_12546));
this->_n_left_12553=INFINITY;
this->_n_right_12554=(-d::number(INFINITY));
this->_n_high_12555=(-d::number(INFINITY));
this->_n_low_12556=INFINITY;
for(auto &&_n_item_12638:_n_GEARS_12535){d::check_cancel();std::shared_ptr<_n_Record_12536> _n_g_12572=_n_item_12638;
{
{double _n_th_12573=0.0;
for(;d::truth((_n_th_12573<_n_TAU_12528));(void)((_n_th_12573=(_n_th_12573+0.02)))){d::check_cancel();for(auto &&_n_item_12639:d::Array<double,false>{((-d::number(_n_g_12572->_p_w))/2.0),(_n_g_12572->_p_w/2.0)}){d::check_cancel();double _n_z_12574=_n_item_12639;
{
double _n_x_12575=(_n_g_12572->_p_x+(_n_g_12572->_p_r2*std::cos(_n_th_12573)));
double _n_y_12576=(_n_g_12572->_p_y+(_n_g_12572->_p_r2*std::sin(_n_th_12573)));
(void)(((this->_n_left_12553=([&](){auto _n_argument_12640=this->_n_left_12553;auto _n_argument_12641=_n_across_12542(_n_x_12575,_n_z_12574);return d::minimum({_n_argument_12640,_n_argument_12641});})()),(this->_n_right_12554=([&](){auto _n_argument_12642=this->_n_right_12554;auto _n_argument_12643=_n_across_12542(_n_x_12575,_n_z_12574);return d::maximum({_n_argument_12642,_n_argument_12643});})())));
(void)(((this->_n_high_12555=([&](){auto _n_argument_12644=this->_n_high_12555;auto _n_argument_12645=_n_up_12543(_n_x_12575,_n_y_12576,_n_z_12574);return d::maximum({_n_argument_12644,_n_argument_12645});})()),(this->_n_low_12556=([&](){auto _n_argument_12646=this->_n_low_12556;auto _n_argument_12647=_n_up_12543(_n_x_12575,_n_y_12576,_n_z_12574);return d::minimum({_n_argument_12646,_n_argument_12647});})())));

}
}
}}

}
}
this->_n_LEFT_12557=(this->_n_left_12553-(((this->_n_cols_12545/_n_SCALE_12530)-(this->_n_right_12554-this->_n_left_12553))/2.0));
this->_n_HIGH_12558=(this->_n_high_12555+((((2.0*this->_n_rows_12546)/_n_SCALE_12530)-(this->_n_high_12555-this->_n_low_12556))/2.0));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12622> _a1) mutable ->d::String{double _n_t_12577=_a0;
auto _n_binding_12650=(d::present(_a1)?_a1:([&](){auto _n_object_12649=std::make_shared<_n_Record_12622>();return _n_object_12649;})());
bool _n_paper_12578=(d::present(_n_binding_12650->_p_paper)?d::read(_n_binding_12650->_p_paper):false);
{
double _n_a_12579=(_n_SPEED_12532*_n_t_12577);
(void)(this->_n_depth_12549.fill((-d::number(INFINITY))));
(void)(this->_n_who_12551.fill((-d::number(1.0))));
std::function<void(double,double,double,double,double,double,std::optional<bool>)> _n_plot_12580;_n_plot_12580=[&]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::optional<bool> _a6) mutable ->void{double _n_i_12581=_a0;
double _n_x_12582=_a1;
double _n_y_12583=_a2;
double _n_z_12584=_a3;
double _n_nx_12585=_a4;
double _n_ny_12586=_a5;
std::optional<bool> _n_face_12587=_a6;
{
double _n_col_12588=std::floor((((_n_across_12542(_n_x_12582,_n_z_12584)-this->_n_LEFT_12557)*_n_SCALE_12530)*2.0));
double _n_row_12589=std::floor(((this->_n_HIGH_12558-_n_up_12543(_n_x_12582,_n_y_12583,_n_z_12584))*_n_SCALE_12530));
if((((d::truth((_n_col_12588<0.0))||d::truth((_n_col_12588>=this->_n_W_12547)))||d::truth((_n_row_12589<0.0)))||d::truth((_n_row_12589>=this->_n_H_12548)))){d::check_cancel();return;
}
double _n_k_12590=((_n_row_12589*this->_n_W_12547)+_n_col_12588);
double _n_d_12591=((_n_y_12583*_n_sX_12540)+(((_n_z_12584*_n_cY_12537)-(_n_x_12582*_n_sY_12538))*_n_cX_12539));
if(d::truth((_n_d_12591<=d::at(this->_n_depth_12549,_n_k_12590)))){d::check_cancel();return;
}
double _n_vx_12592=(_n_nx_12585*_n_cY_12537);
double _n_vy_12593=((_n_ny_12586*_n_cX_12539)+((_n_nx_12585*_n_sY_12538)*_n_sX_12540));
double _n_vz_12594=((_n_ny_12586*_n_sX_12540)-((_n_nx_12585*_n_sY_12538)*_n_cX_12539));
if((d::truth((!d::truth(_n_face_12587)))&&d::truth((_n_vz_12594<0.0)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_12651=this->_n_depth_12549;auto _n_index_12652=_n_k_12590;auto _n_value_12653=_n_d_12591;d::put(_n_array_12651,_n_index_12652,_n_value_12653);return _n_value_12653;})());
(void)(([&](){auto&& _n_array_12654=this->_n_who_12551;auto _n_index_12655=_n_k_12590;auto _n_value_12656=_n_i_12581;d::put(_n_array_12654,_n_index_12655,_n_value_12656);return _n_value_12656;})());
(void)(([&](){auto&& _n_array_12657=this->_n_tone_12550;auto _n_index_12658=_n_k_12590;auto _n_value_12659=(d::truth(_n_face_12587)?d::at(_n_GEARS_12535,_n_i_12581)->_p_face:(d::truth(((((_n_vx_12592*d::at(_n_LIGHT_12541,0.0))+(_n_vy_12593*d::at(_n_LIGHT_12541,1.0)))+(_n_vz_12594*d::at(_n_LIGHT_12541,2.0)))>0.42))?4.0:1.0));d::put(_n_array_12657,_n_index_12658,_n_value_12659);return _n_value_12659;})());

}
};
(void)(d::forEach(_n_GEARS_12535,[&]( std::shared_ptr<_n_Record_12536> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_12536> _n_g_12595=_a0;
double _n_i_12596=_a1;
{
double _n_spin_12597=(((_n_g_12595->_p_k*_n_a_12579)+_n_g_12595->_p_off)*_n_RAD_12529);
double _n_h_12598=(_n_g_12595->_p_w/2.0);
{double _n_r_12599=_n_g_12595->_p_r0;
for(;d::truth((_n_r_12599<_n_g_12595->_p_r2));(void)((_n_r_12599=(_n_r_12599+_n_DS_12531)))){d::check_cancel();{double _n_th_12600=0.0;
for(;d::truth((_n_th_12600<_n_TAU_12528));(void)((_n_th_12600=(_n_th_12600+(_n_DS_12531/_n_r_12599))))){d::check_cancel();if(d::truth((_n_r_12599<=_n_radius_12544(_n_g_12595,_n_th_12600)))){d::check_cancel();(void)(([&](){auto _n_argument_12660=_n_i_12596;auto _n_argument_12661=(_n_g_12595->_p_x+(_n_r_12599*std::cos((_n_th_12600+_n_spin_12597))));auto _n_argument_12662=(_n_g_12595->_p_y+(_n_r_12599*std::sin((_n_th_12600+_n_spin_12597))));auto _n_argument_12663=_n_h_12598;auto _n_argument_12664=0.0;auto _n_argument_12665=0.0;auto _n_argument_12666=true;return _n_plot_12580(_n_argument_12660,_n_argument_12661,_n_argument_12662,_n_argument_12663,_n_argument_12664,_n_argument_12665,std::optional<bool>(_n_argument_12666));})());
}
}}
}}
{double _n_th_12601=0.0;
for(;d::truth((_n_th_12601<_n_TAU_12528));){d::check_cancel();double _n_r_12602=_n_radius_12544(_n_g_12595,_n_th_12601);
double _n_dr_12603=(([&](){auto _n_left_12667=_n_radius_12544(_n_g_12595,(_n_th_12601+0.0001));auto _n_right_12668=_n_radius_12544(_n_g_12595,(_n_th_12601-0.0001));return (_n_left_12667-_n_right_12668);})()/0.0002);
double _n_l_12604=d::hypot(std::initializer_list<double>{_n_r_12602,_n_dr_12603});
double _n_c_12605=std::cos((_n_th_12601+_n_spin_12597));
double _n_s_12606=std::sin((_n_th_12601+_n_spin_12597));
{double _n_z_12607=(-d::number(_n_h_12598));
for(;d::truth((_n_z_12607<=_n_h_12598));(void)((_n_z_12607=(_n_z_12607+_n_DS_12531)))){d::check_cancel();(void)(_n_plot_12580(_n_i_12596,(_n_g_12595->_p_x+(_n_r_12602*_n_c_12605)),(_n_g_12595->_p_y+(_n_r_12602*_n_s_12606)),_n_z_12607,(((_n_r_12602*_n_c_12605)+(_n_dr_12603*_n_s_12606))/_n_l_12604),(((_n_r_12602*_n_s_12606)-(_n_dr_12603*_n_c_12605))/_n_l_12604),std::optional<bool>{}));
}}
(void)((_n_th_12601=(_n_th_12601+(_n_DS_12531/_n_l_12604))));
}}
{double _n_th_12608=0.0;
for(;d::truth((_n_th_12608<_n_TAU_12528));(void)((_n_th_12608=(_n_th_12608+(_n_DS_12531/_n_g_12595->_p_r0))))){d::check_cancel();double _n_c_12609=std::cos(_n_th_12608);
double _n_s_12610=std::sin(_n_th_12608);
{double _n_z_12611=(-d::number(_n_h_12598));
for(;d::truth((_n_z_12611<=_n_h_12598));(void)((_n_z_12611=(_n_z_12611+_n_DS_12531)))){d::check_cancel();(void)(_n_plot_12580(_n_i_12596,(_n_g_12595->_p_x+(_n_g_12595->_p_r0*_n_c_12609)),(_n_g_12595->_p_y+(_n_g_12595->_p_r0*_n_s_12610)),_n_z_12611,(-d::number(_n_c_12609)),(-d::number(_n_s_12610)),std::optional<bool>{}));
}}
}}

}
}));
d::Array<double,false> _n_count_12612=d::Array<double,false>(size_t(15.0));
d::Array<double,false> _n_near_12613=d::Array<double,false>(size_t(15.0));
{double _n_row_12614=0.0;
for(;d::truth((_n_row_12614<this->_n_rows_12546));(void)((_n_row_12614++))){d::check_cancel();d::String _n_line_12615=d::String(u"");
{double _n_col_12616=0.0;
for(;d::truth((_n_col_12616<this->_n_cols_12545));(void)((_n_col_12616++))){d::check_cancel();(void)((_n_count_12612.fill(0.0),_n_near_12613.fill((-d::number(INFINITY)))));
double _n_covered_12617=0.0;
double _n_best_12618=(-d::number(1.0));
for(auto &&_n_item_12669:d::Array<double,false>{(((2.0*_n_row_12614)*this->_n_W_12547)+(2.0*_n_col_12616)),((((2.0*_n_row_12614)*this->_n_W_12547)+(2.0*_n_col_12616))+1.0),((((2.0*_n_row_12614)+1.0)*this->_n_W_12547)+(2.0*_n_col_12616)),(((((2.0*_n_row_12614)+1.0)*this->_n_W_12547)+(2.0*_n_col_12616))+1.0)}){d::check_cancel();double _n_k_12619=_n_item_12669;
{
if(d::truth((d::at(this->_n_who_12551,_n_k_12619)<0.0))){d::check_cancel();continue;
}
double _n_c_12620=((d::at(this->_n_who_12551,_n_k_12619)*5.0)+d::at(this->_n_tone_12550,_n_k_12619));
(void)((((_n_covered_12617++),([&](){auto&& _n_array_12670=_n_count_12612;auto _n_index_12671=_n_c_12620;double _n_old_12672=d::number(d::at(_n_array_12670,_n_index_12671));d::put(_n_array_12670,_n_index_12671,_n_old_12672+(1.0));return _n_old_12672;})()),([&](){auto&& _n_array_12673=_n_near_12613;auto _n_index_12674=_n_c_12620;auto _n_value_12675=d::maximum({d::at(_n_near_12613,_n_c_12620),d::at(this->_n_depth_12549,_n_k_12619)});d::put(_n_array_12673,_n_index_12674,_n_value_12675);return _n_value_12675;})()));
if(((d::truth((_n_best_12618<0.0))||d::truth((d::at(_n_count_12612,_n_c_12620)>d::at(_n_count_12612,_n_best_12618))))||d::truth(([&]()->bool{auto _n_logical_12676=(d::at(_n_count_12612,_n_c_12620)==d::at(_n_count_12612,_n_best_12618));return d::truth(_n_logical_12676)?(d::at(_n_near_12613,_n_c_12620)>d::at(_n_near_12613,_n_best_12618)):_n_logical_12676;})()))){d::check_cancel();(void)((_n_best_12618=_n_c_12620));
}

}
}
double _n_v_12621=d::mod(_n_best_12618,5.0);
(void)((_n_line_12615=(d::string(_n_line_12615)+d::string((d::truth((_n_covered_12617<2.0))?d::String(u" "):d::at(_n_SHADE_12533,(d::truth(_n_paper_12578)?(5.0-_n_v_12621):_n_v_12621)))))));
}}
(void)(([&](){auto&& _n_array_12677=this->_n_lines_12552;auto _n_index_12678=_n_row_12614;auto _n_value_12679=_n_line_12615;d::put(_n_array_12677,_n_index_12678,_n_value_12679);return _n_value_12679;})());
}}
return d::join(this->_n_lines_12552,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("glxgears").cols)*ascii::catalog_meta("glxgears").rows);auto _env=std::make_shared<_n_Record_12622>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &glxgears_meta(){return catalog_meta("glxgears");}
std::unique_ptr<Piece> make_glxgears(const AsciiPieceOptions &o){return std::make_unique<Native_glxgears>(o);}
}
