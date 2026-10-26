// Direct, statically typed C++ from src/pieces/glxgears.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12528;
struct _n_Record_12537;
struct _n_Record_12623;
struct _n_Record_12627;
struct _n_Record_12628;
struct _n_Record_12629;
struct _n_Record_12528{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_12528> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12528>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_12537{
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
static std::shared_ptr<_n_Record_12537> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12537>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_off=d::decode<double>(j["off"]);out->_p_face=d::decode<double>(j["face"]);out->_p_r1=d::decode<double>(j["r1"]);out->_p_r2=d::decode<double>(j["r2"]);return out;}
};
struct _n_Record_12623{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12623> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12623>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_12627{
double _p_r0{};
double _p_r{};
double _p_w{};
double _p_n{};
double _p_x{};
double _p_y{};
double _p_k{};
double _p_off{};
double _p_face{};
static std::shared_ptr<_n_Record_12627> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12627>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_off=d::decode<double>(j["off"]);out->_p_face=d::decode<double>(j["face"]);return out;}
};
struct _n_Record_12628{
double _p_r0{};
double _p_r{};
double _p_w{};
double _p_n{};
double _p_x{};
double _p_y{};
double _p_k{};
double _p_face{};
static std::shared_ptr<_n_Record_12628> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12628>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_face=d::decode<double>(j["face"]);return out;}
};
struct _n_Record_12629{
double _p_r0{};
double _p_r{};
double _p_w{};
double _p_n{};
double _p_x{};
double _p_y{};
double _p_k{};
std::optional<double> _p_off{};
double _p_face{};
static std::shared_ptr<_n_Record_12629> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12629>();out->_p_r0=d::decode<double>(j["r0"]);out->_p_r=d::decode<double>(j["r"]);out->_p_w=d::decode<double>(j["w"]);out->_p_n=d::decode<double>(j["n"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_k=d::decode<double>(j["k"]);out->_p_off=d::decode<std::optional<double>>(j["off"]);out->_p_face=d::decode<double>(j["face"]);return out;}
};
double _n_across_12543(double _a0,double _a1);
double _n_up_12544(double _a0,double _a1,double _a2);
double _n_radius_12545(std::shared_ptr<_n_Record_12537> _a0,double _a1);
std::shared_ptr<_n_Record_12528> _n_meta_12527=[](){return ([&](){auto _n_object_12626=std::make_shared<_n_Record_12528>();_n_object_12626->_p_name=d::String(u"glxgears");_n_object_12626->_p_category=d::String(u"shapes");_n_object_12626->_p_note=d::String(u"three meshing gears turning, after glxgears");_n_object_12626->_p_cols=56.0;_n_object_12626->_p_rows=31.0;_n_object_12626->_p_fps=24.0;return _n_object_12626;})();}();
const double _n_TAU_12529=[](){return (ascii::PI*2.0);}();
const double _n_RAD_12530=[](){return (ascii::PI/180.0);}();
const double _n_SCALE_12531=[](){return 4.2;}();
const double _n_DS_12532=[](){return 0.05;}();
const double _n_SPEED_12533=[](){return 17.0;}();
const d::String _n_SHADE_12534=[](){return d::String(u" ░▒▓█");}();
const double _n_DEPTH_12535=[](){return 0.8;}();
d::Array<std::shared_ptr<_n_Record_12537>,false> _n_GEARS_12536=[](){return d::Array<std::shared_ptr<_n_Record_12537>,false>{([&](){auto _n_object_12631=std::make_shared<_n_Record_12537>();_n_object_12631->_p_r0=1.0;_n_object_12631->_p_r=4.0;_n_object_12631->_p_w=1.0;_n_object_12631->_p_n=12.0;_n_object_12631->_p_x=(-d::number(3.0));_n_object_12631->_p_y=(-d::number(2.0));_n_object_12631->_p_k=1.0;_n_object_12631->_p_off=0.0;_n_object_12631->_p_face=3.0;return _n_object_12631;})(),([&](){auto _n_object_12633=std::make_shared<_n_Record_12537>();_n_object_12633->_p_r0=0.5;_n_object_12633->_p_r=2.0;_n_object_12633->_p_w=2.0;_n_object_12633->_p_n=6.0;_n_object_12633->_p_x=3.1;_n_object_12633->_p_y=(-d::number(2.0));_n_object_12633->_p_k=(-d::number(2.0));_n_object_12633->_p_face=2.0;return _n_object_12633;})(),([&](){auto _n_object_12635=std::make_shared<_n_Record_12537>();_n_object_12635->_p_r0=1.3;_n_object_12635->_p_r=2.0;_n_object_12635->_p_w=0.5;_n_object_12635->_p_n=6.0;_n_object_12635->_p_x=(-d::number(3.1));_n_object_12635->_p_y=4.2;_n_object_12635->_p_k=(-d::number(2.0));_n_object_12635->_p_face=2.0;return _n_object_12635;})()};}();
const double _n_cY_12538=[](){return std::cos((30.0*_n_RAD_12530));}();
const double _n_sY_12539=[](){return std::sin((30.0*_n_RAD_12530));}();
const double _n_cX_12540=[](){return std::cos((20.0*_n_RAD_12530));}();
const double _n_sX_12541=[](){return std::sin((20.0*_n_RAD_12530));}();
d::Array<double,false> _n_LIGHT_12542=[](){return d::map(d::Array<double,false>{5.0,5.0,10.0},[&]( double _a0) mutable ->double{double _n_c_12563=_a0;
return (_n_c_12563/d::hypot(std::initializer_list<double>{5.0,5.0,10.0}));});}();
const bool _n_init_12636=[](){for(auto &&_n_item_12637:_n_GEARS_12536){d::check_cancel();std::shared_ptr<_n_Record_12537> _n_g_12560=_n_item_12637;
{
(void)((_n_g_12560->_p_r1=(_n_g_12560->_p_r-(_n_DEPTH_12535/2.0))));
(void)((_n_g_12560->_p_r2=(_n_g_12560->_p_r+(_n_DEPTH_12535/2.0))));
if(d::truth((_n_g_12560->_p_k==1.0))){d::check_cancel();continue;
}
std::shared_ptr<_n_Record_12537> _n_big_12561=d::at(_n_GEARS_12536,0.0);
double _n_dir_12562=std::atan2((_n_g_12560->_p_y-_n_big_12561->_p_y),(_n_g_12560->_p_x-_n_big_12561->_p_x));
(void)((_n_g_12560->_p_off=(((_n_dir_12562+ascii::PI)-((((0.875-((_n_dir_12562*_n_big_12561->_p_n)/_n_TAU_12529))+0.375)*_n_TAU_12529)/_n_g_12560->_p_n))/_n_RAD_12530)));

}
}
return true;}();
double _n_across_12543(double _a0,double _a1){double _n_x_12564=_a0;
double _n_z_12565=_a1;
return ((_n_x_12564*_n_cY_12538)+(_n_z_12565*_n_sY_12539));}

double _n_up_12544(double _a0,double _a1,double _a2){double _n_x_12566=_a0;
double _n_y_12567=_a1;
double _n_z_12568=_a2;
return ((_n_y_12567*_n_cX_12540)+(((_n_x_12566*_n_sY_12539)-(_n_z_12568*_n_cY_12538))*_n_sX_12541));}

double _n_radius_12545(std::shared_ptr<_n_Record_12537> _a0,double _a1){std::shared_ptr<_n_Record_12537> _n_g_12569=_a0;
double _n_th_12570=_a1;
{
double _n_u_12571=(((_n_th_12570*_n_g_12569->_p_n)/_n_TAU_12529)-std::floor(((_n_th_12570*_n_g_12569->_p_n)/_n_TAU_12529)));
double _n_rise_12572=(d::truth((_n_u_12571<0.25))?(_n_u_12571*4.0):(d::truth((_n_u_12571<0.5))?1.0:(d::truth((_n_u_12571<0.75))?((0.75-_n_u_12571)*4.0):0.0)));
return (_n_g_12569->_p_r1+((_n_g_12569->_p_r2-_n_g_12569->_p_r1)*_n_rise_12572));

}
}

struct Native_glxgears final:ascii::Piece{
double _n_cols_12546{};
double _n_rows_12547{};
double _n_W_12548{};
double _n_H_12549{};
d::Array<float,true> _n_depth_12550{};
d::Array<int8_t,true> _n_tone_12551{};
d::Array<int8_t,true> _n_who_12552{};
d::Array<d::String,false> _n_lines_12553{};
double _n_left_12554{};
double _n_right_12555{};
double _n_high_12556{};
double _n_low_12557{};
double _n_LEFT_12558{};
double _n_HIGH_12559{};
std::function<d::String(double,std::shared_ptr<_n_Record_12623>)> _render;

explicit Native_glxgears(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12638=_n_meta_12527;
this->_n_cols_12546=_n_binding_12638->_p_cols;
this->_n_rows_12547=_n_binding_12638->_p_rows;
this->_n_W_12548=(this->_n_cols_12546*2.0);
this->_n_H_12549=(this->_n_rows_12547*2.0);
this->_n_depth_12550=d::Array<float,true>(size_t((this->_n_W_12548*this->_n_H_12549)));
this->_n_tone_12551=d::Array<int8_t,true>(size_t((this->_n_W_12548*this->_n_H_12549)));
this->_n_who_12552=d::Array<int8_t,true>(size_t((this->_n_W_12548*this->_n_H_12549)));
this->_n_lines_12553=d::Array<d::String,false>(size_t(this->_n_rows_12547));
this->_n_left_12554=INFINITY;
this->_n_right_12555=(-d::number(INFINITY));
this->_n_high_12556=(-d::number(INFINITY));
this->_n_low_12557=INFINITY;
for(auto &&_n_item_12639:_n_GEARS_12536){d::check_cancel();std::shared_ptr<_n_Record_12537> _n_g_12573=_n_item_12639;
{
{double _n_th_12574=0.0;
for(;d::truth((_n_th_12574<_n_TAU_12529));(void)((_n_th_12574=(_n_th_12574+0.02)))){d::check_cancel();for(auto &&_n_item_12640:d::Array<double,false>{((-d::number(_n_g_12573->_p_w))/2.0),(_n_g_12573->_p_w/2.0)}){d::check_cancel();double _n_z_12575=_n_item_12640;
{
double _n_x_12576=(_n_g_12573->_p_x+(_n_g_12573->_p_r2*std::cos(_n_th_12574)));
double _n_y_12577=(_n_g_12573->_p_y+(_n_g_12573->_p_r2*std::sin(_n_th_12574)));
(void)(((this->_n_left_12554=([&](){auto _n_argument_12641=this->_n_left_12554;auto _n_argument_12642=_n_across_12543(_n_x_12576,_n_z_12575);return d::minimum({_n_argument_12641,_n_argument_12642});})()),(this->_n_right_12555=([&](){auto _n_argument_12643=this->_n_right_12555;auto _n_argument_12644=_n_across_12543(_n_x_12576,_n_z_12575);return d::maximum({_n_argument_12643,_n_argument_12644});})())));
(void)(((this->_n_high_12556=([&](){auto _n_argument_12645=this->_n_high_12556;auto _n_argument_12646=_n_up_12544(_n_x_12576,_n_y_12577,_n_z_12575);return d::maximum({_n_argument_12645,_n_argument_12646});})()),(this->_n_low_12557=([&](){auto _n_argument_12647=this->_n_low_12557;auto _n_argument_12648=_n_up_12544(_n_x_12576,_n_y_12577,_n_z_12575);return d::minimum({_n_argument_12647,_n_argument_12648});})())));

}
}
}}

}
}
this->_n_LEFT_12558=(this->_n_left_12554-(((this->_n_cols_12546/_n_SCALE_12531)-(this->_n_right_12555-this->_n_left_12554))/2.0));
this->_n_HIGH_12559=(this->_n_high_12556+((((2.0*this->_n_rows_12547)/_n_SCALE_12531)-(this->_n_high_12556-this->_n_low_12557))/2.0));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12623> _a1) mutable ->d::String{double _n_t_12578=_a0;
auto _n_binding_12651=(d::present(_a1)?_a1:([&](){auto _n_object_12650=std::make_shared<_n_Record_12623>();return _n_object_12650;})());
bool _n_paper_12579=(d::present(_n_binding_12651->_p_paper)?d::read(_n_binding_12651->_p_paper):false);
{
double _n_a_12580=(_n_SPEED_12533*_n_t_12578);
(void)(this->_n_depth_12550.fill((-d::number(INFINITY))));
(void)(this->_n_who_12552.fill((-d::number(1.0))));
std::function<void(double,double,double,double,double,double,std::optional<bool>)> _n_plot_12581;_n_plot_12581=[&]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::optional<bool> _a6) mutable ->void{double _n_i_12582=_a0;
double _n_x_12583=_a1;
double _n_y_12584=_a2;
double _n_z_12585=_a3;
double _n_nx_12586=_a4;
double _n_ny_12587=_a5;
std::optional<bool> _n_face_12588=_a6;
{
double _n_col_12589=std::floor((((_n_across_12543(_n_x_12583,_n_z_12585)-this->_n_LEFT_12558)*_n_SCALE_12531)*2.0));
double _n_row_12590=std::floor(((this->_n_HIGH_12559-_n_up_12544(_n_x_12583,_n_y_12584,_n_z_12585))*_n_SCALE_12531));
if((((d::truth((_n_col_12589<0.0))||d::truth((_n_col_12589>=this->_n_W_12548)))||d::truth((_n_row_12590<0.0)))||d::truth((_n_row_12590>=this->_n_H_12549)))){d::check_cancel();return;
}
double _n_k_12591=((_n_row_12590*this->_n_W_12548)+_n_col_12589);
double _n_d_12592=((_n_y_12584*_n_sX_12541)+(((_n_z_12585*_n_cY_12538)-(_n_x_12583*_n_sY_12539))*_n_cX_12540));
if(d::truth((_n_d_12592<=d::at(this->_n_depth_12550,_n_k_12591)))){d::check_cancel();return;
}
double _n_vx_12593=(_n_nx_12586*_n_cY_12538);
double _n_vy_12594=((_n_ny_12587*_n_cX_12540)+((_n_nx_12586*_n_sY_12539)*_n_sX_12541));
double _n_vz_12595=((_n_ny_12587*_n_sX_12541)-((_n_nx_12586*_n_sY_12539)*_n_cX_12540));
if((d::truth((!d::truth(_n_face_12588)))&&d::truth((_n_vz_12595<0.0)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_12652=this->_n_depth_12550;auto _n_index_12653=_n_k_12591;auto _n_value_12654=_n_d_12592;d::put(_n_array_12652,_n_index_12653,_n_value_12654);return _n_value_12654;})());
(void)(([&](){auto&& _n_array_12655=this->_n_who_12552;auto _n_index_12656=_n_k_12591;auto _n_value_12657=_n_i_12582;d::put(_n_array_12655,_n_index_12656,_n_value_12657);return _n_value_12657;})());
(void)(([&](){auto&& _n_array_12658=this->_n_tone_12551;auto _n_index_12659=_n_k_12591;auto _n_value_12660=(d::truth(_n_face_12588)?d::at(_n_GEARS_12536,_n_i_12582)->_p_face:(d::truth(((((_n_vx_12593*d::at(_n_LIGHT_12542,0.0))+(_n_vy_12594*d::at(_n_LIGHT_12542,1.0)))+(_n_vz_12595*d::at(_n_LIGHT_12542,2.0)))>0.42))?4.0:1.0));d::put(_n_array_12658,_n_index_12659,_n_value_12660);return _n_value_12660;})());

}
};
(void)(d::forEach(_n_GEARS_12536,[&]( std::shared_ptr<_n_Record_12537> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_12537> _n_g_12596=_a0;
double _n_i_12597=_a1;
{
double _n_spin_12598=(((_n_g_12596->_p_k*_n_a_12580)+_n_g_12596->_p_off)*_n_RAD_12530);
double _n_h_12599=(_n_g_12596->_p_w/2.0);
{double _n_r_12600=_n_g_12596->_p_r0;
for(;d::truth((_n_r_12600<_n_g_12596->_p_r2));(void)((_n_r_12600=(_n_r_12600+_n_DS_12532)))){d::check_cancel();{double _n_th_12601=0.0;
for(;d::truth((_n_th_12601<_n_TAU_12529));(void)((_n_th_12601=(_n_th_12601+(_n_DS_12532/_n_r_12600))))){d::check_cancel();if(d::truth((_n_r_12600<=_n_radius_12545(_n_g_12596,_n_th_12601)))){d::check_cancel();(void)(([&](){auto _n_argument_12661=_n_i_12597;auto _n_argument_12662=(_n_g_12596->_p_x+(_n_r_12600*std::cos((_n_th_12601+_n_spin_12598))));auto _n_argument_12663=(_n_g_12596->_p_y+(_n_r_12600*std::sin((_n_th_12601+_n_spin_12598))));auto _n_argument_12664=_n_h_12599;auto _n_argument_12665=0.0;auto _n_argument_12666=0.0;auto _n_argument_12667=true;return _n_plot_12581(_n_argument_12661,_n_argument_12662,_n_argument_12663,_n_argument_12664,_n_argument_12665,_n_argument_12666,std::optional<bool>(_n_argument_12667));})());
}
}}
}}
{double _n_th_12602=0.0;
for(;d::truth((_n_th_12602<_n_TAU_12529));){d::check_cancel();double _n_r_12603=_n_radius_12545(_n_g_12596,_n_th_12602);
double _n_dr_12604=(([&](){auto _n_left_12668=_n_radius_12545(_n_g_12596,(_n_th_12602+0.0001));auto _n_right_12669=_n_radius_12545(_n_g_12596,(_n_th_12602-0.0001));return (_n_left_12668-_n_right_12669);})()/0.0002);
double _n_l_12605=d::hypot(std::initializer_list<double>{_n_r_12603,_n_dr_12604});
double _n_c_12606=std::cos((_n_th_12602+_n_spin_12598));
double _n_s_12607=std::sin((_n_th_12602+_n_spin_12598));
{double _n_z_12608=(-d::number(_n_h_12599));
for(;d::truth((_n_z_12608<=_n_h_12599));(void)((_n_z_12608=(_n_z_12608+_n_DS_12532)))){d::check_cancel();(void)(_n_plot_12581(_n_i_12597,(_n_g_12596->_p_x+(_n_r_12603*_n_c_12606)),(_n_g_12596->_p_y+(_n_r_12603*_n_s_12607)),_n_z_12608,(((_n_r_12603*_n_c_12606)+(_n_dr_12604*_n_s_12607))/_n_l_12605),(((_n_r_12603*_n_s_12607)-(_n_dr_12604*_n_c_12606))/_n_l_12605),std::optional<bool>{}));
}}
(void)((_n_th_12602=(_n_th_12602+(_n_DS_12532/_n_l_12605))));
}}
{double _n_th_12609=0.0;
for(;d::truth((_n_th_12609<_n_TAU_12529));(void)((_n_th_12609=(_n_th_12609+(_n_DS_12532/_n_g_12596->_p_r0))))){d::check_cancel();double _n_c_12610=std::cos(_n_th_12609);
double _n_s_12611=std::sin(_n_th_12609);
{double _n_z_12612=(-d::number(_n_h_12599));
for(;d::truth((_n_z_12612<=_n_h_12599));(void)((_n_z_12612=(_n_z_12612+_n_DS_12532)))){d::check_cancel();(void)(_n_plot_12581(_n_i_12597,(_n_g_12596->_p_x+(_n_g_12596->_p_r0*_n_c_12610)),(_n_g_12596->_p_y+(_n_g_12596->_p_r0*_n_s_12611)),_n_z_12612,(-d::number(_n_c_12610)),(-d::number(_n_s_12611)),std::optional<bool>{}));
}}
}}

}
}));
d::Array<double,false> _n_count_12613=d::Array<double,false>(size_t(15.0));
d::Array<double,false> _n_near_12614=d::Array<double,false>(size_t(15.0));
{double _n_row_12615=0.0;
for(;d::truth((_n_row_12615<this->_n_rows_12547));(void)((_n_row_12615++))){d::check_cancel();d::String _n_line_12616=d::String(u"");
{double _n_col_12617=0.0;
for(;d::truth((_n_col_12617<this->_n_cols_12546));(void)((_n_col_12617++))){d::check_cancel();(void)((_n_count_12613.fill(0.0),_n_near_12614.fill((-d::number(INFINITY)))));
double _n_covered_12618=0.0;
double _n_best_12619=(-d::number(1.0));
for(auto &&_n_item_12670:d::Array<double,false>{(((2.0*_n_row_12615)*this->_n_W_12548)+(2.0*_n_col_12617)),((((2.0*_n_row_12615)*this->_n_W_12548)+(2.0*_n_col_12617))+1.0),((((2.0*_n_row_12615)+1.0)*this->_n_W_12548)+(2.0*_n_col_12617)),(((((2.0*_n_row_12615)+1.0)*this->_n_W_12548)+(2.0*_n_col_12617))+1.0)}){d::check_cancel();double _n_k_12620=_n_item_12670;
{
if(d::truth((d::at(this->_n_who_12552,_n_k_12620)<0.0))){d::check_cancel();continue;
}
double _n_c_12621=((d::at(this->_n_who_12552,_n_k_12620)*5.0)+d::at(this->_n_tone_12551,_n_k_12620));
(void)((((_n_covered_12618++),([&](){auto&& _n_array_12671=_n_count_12613;auto _n_index_12672=_n_c_12621;double _n_old_12673=d::number(d::at(_n_array_12671,_n_index_12672));d::put(_n_array_12671,_n_index_12672,_n_old_12673+(1.0));return _n_old_12673;})()),([&](){auto&& _n_array_12674=_n_near_12614;auto _n_index_12675=_n_c_12621;auto _n_value_12676=d::maximum({d::at(_n_near_12614,_n_c_12621),d::at(this->_n_depth_12550,_n_k_12620)});d::put(_n_array_12674,_n_index_12675,_n_value_12676);return _n_value_12676;})()));
if(((d::truth((_n_best_12619<0.0))||d::truth((d::at(_n_count_12613,_n_c_12621)>d::at(_n_count_12613,_n_best_12619))))||d::truth(([&]()->bool{auto _n_logical_12677=(d::at(_n_count_12613,_n_c_12621)==d::at(_n_count_12613,_n_best_12619));return d::truth(_n_logical_12677)?(d::at(_n_near_12614,_n_c_12621)>d::at(_n_near_12614,_n_best_12619)):_n_logical_12677;})()))){d::check_cancel();(void)((_n_best_12619=_n_c_12621));
}

}
}
double _n_v_12622=d::mod(_n_best_12619,5.0);
(void)((_n_line_12616=(d::string(_n_line_12616)+d::string((d::truth((_n_covered_12618<2.0))?d::String(u" "):d::at(_n_SHADE_12534,(d::truth(_n_paper_12579)?(5.0-_n_v_12622):_n_v_12622)))))));
}}
(void)(([&](){auto&& _n_array_12678=this->_n_lines_12553;auto _n_index_12679=_n_row_12615;auto _n_value_12680=_n_line_12616;d::put(_n_array_12678,_n_index_12679,_n_value_12680);return _n_value_12680;})());
}}
return d::join(this->_n_lines_12553,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("glxgears").cols)*ascii::catalog_meta("glxgears").rows);auto _env=std::make_shared<_n_Record_12623>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &glxgears_meta(){return catalog_meta("glxgears");}
std::unique_ptr<Piece> make_glxgears(const AsciiPieceOptions &o){return std::make_unique<Native_glxgears>(o);}
}
