// Direct, statically typed C++ from src/pieces/sundial.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31390;
struct _n_Record_31514;
struct _n_Record_31390{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
bool _p_clock{};
static std::shared_ptr<_n_Record_31390> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31390>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_clock=d::decode<bool>(j["clock"]);return out;}
};
struct _n_Record_31514{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31514> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31514>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_31400(double _a0);
std::shared_ptr<_n_Record_31390> _n_meta_31389=[](){return ([&](){auto _n_object_31517=std::make_shared<_n_Record_31390>();_n_object_31517->_p_name=d::String(u"sundial");_n_object_31517->_p_category=d::String(u"objects");_n_object_31517->_p_note=d::String(u"jaipur's samrat yantra, its shadow set by your local time");_n_object_31517->_p_cols=65.0;_n_object_31517->_p_rows=23.0;_n_object_31517->_p_fps=10.0;_n_object_31517->_p_clock=true;return _n_object_31517;})();}();
const double _n_LAT_31391=[](){return ((26.92*ascii::PI)/180.0);}();
const double _n_CX_31392=[](){return 32.5;}();
const double _n_YC_31393=[](){return 9.5;}();
const double _n_RX_31394=[](){return 26.0;}();
const double _n_RY_31395=[](){return 11.6;}();
const double _n_INNER_31396=[](){return 0.77;}();
const double _n_GROUND_31397=[](){return 22.0;}();
const double _n_APEX_31398=[](){return 4.0;}();
const double _n_FOOT_31399=[](){return 2.9;}();
std::function<double()> _n_mulberry32_31400(double _a0){double _n_seed_31420=_a0;
{
double _n_s_31421=double(d::i32(_n_seed_31420)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_31421=double(d::i32((_n_s_31421+1831565813.0))|d::i32(0.0))));
double _n_t_31422=d::imul(double(d::i32(_n_s_31421)^d::i32(double(d::u32(_n_s_31421)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_31421)));
(void)((_n_t_31422=double(d::i32((_n_t_31422+d::imul(double(d::i32(_n_t_31422)^d::i32(double(d::u32(_n_t_31422)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_31422)))))^d::i32(_n_t_31422))));
return (double(d::u32(double(d::i32(_n_t_31422)^d::i32(double(d::u32(_n_t_31422)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_sundial final:ascii::Piece{
double _n_cols_31401{};
double _n_rows_31402{};
d::Array<d::String,false> _n_grid_31403{};
d::Array<std::shared_ptr<std::tuple<double,double,double,double,bool>>,false> _n_face_31407{};
double _n_hidden_31409{};
d::Map<double,d::String> _n_rim_31410{};
double _n_UP_31411{};
d::Map<double,std::shared_ptr<std::tuple<double,double,double,bool>>> _n_acc_31412{};
d::Map<double,double> _n_most_31413{};
d::Array<d::String,false> _n_base_31414{};
std::function<double()> _n_rand_31416{};
d::Array<d::Array<double,false>,false> _n_stars_31417{};
double _n_key_31418{};
std::optional<double> _n_H_31419{};
std::function<d::String(double,std::shared_ptr<_n_Record_31514>)> _render;
void _n_put_31404(double _a0,double _a1,d::String _a2){double _n_c_31423=_a0;
double _n_r_31424=_a1;
d::String _n_g_31425=_a2;
{
(void)(((_n_c_31423=std::floor(_n_c_31423)),(_n_r_31424=std::floor(_n_r_31424))));
if((((d::truth((_n_c_31423>=0.0))&&d::truth((_n_c_31423<this->_n_cols_31401)))&&d::truth((_n_r_31424>=0.0)))&&d::truth((_n_r_31424<this->_n_rows_31402)))){d::check_cancel();(void)(([&](){auto&& _n_array_31570=this->_n_grid_31403;auto _n_index_31571=((_n_r_31424*this->_n_cols_31401)+_n_c_31423);auto _n_value_31572=_n_g_31425;d::put(_n_array_31570,_n_index_31571,_n_value_31572);return _n_value_31572;})());
}

}
}

void _n_text_31405(double _a0,double _a1,d::String _a2){double _n_c_31426=_a0;
double _n_r_31427=_a1;
d::String _n_s_31428=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_31573;for(const auto &_v:_n_s_31428)_n_array_31573.push(_v);return _n_array_31573;})(),[&]( d::String _a0,double _a1) mutable ->std::optional<bool>{d::String _n_g_31429=_a0;
double _n_i_31430=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_31574=(_n_g_31429!=d::String(u" "));return d::truth(_n_logical_31574)?(this->_n_put_31404((_n_c_31426+_n_i_31430),_n_r_31427,_n_g_31429),std::optional<bool>{}):std::optional<bool>(_n_logical_31574);})();});}

double _n_angle_31406(double _a0,double _a1){double _n_c_31431=_a0;
double _n_r_31432=_a1;
return std::atan2(((_n_c_31431-_n_CX_31392)/_n_RX_31394),((_n_r_31432-_n_YC_31393)/_n_RY_31395));}

double _n_half_31408(double _a0){double _n_r_31442=_a0;
return (0.6+(((_n_FOOT_31399-0.6)*(_n_r_31442-_n_APEX_31398))/((_n_GROUND_31397-1.0)-_n_APEX_31398)));}

void _n_draw_31415(std::optional<double> _a0){std::optional<double> _n_H_31466=_a0;
{
(void)(this->_n_grid_31403.fill(d::String(u" ")));
std::optional<double> _n_edge_31467=(d::truth((!d::present(_n_H_31466)))?std::optional<double>{}:std::optional<double>(([&](){auto _n_left_31575=d::sign(([&]()->double{auto _n_logical_31577=d::read(_n_H_31466);return d::truth(_n_logical_31577)?_n_logical_31577:(-d::number(1.0));})());auto _n_right_31576=([&](){auto _n_argument_31578=std::fabs(d::read(_n_H_31466));auto _n_argument_31579=this->_n_hidden_31409;return d::maximum({_n_argument_31578,_n_argument_31579});})();return (_n_left_31575*_n_right_31576);})()));
for(auto &&_n_item_31580:this->_n_face_31407){d::check_cancel();auto _n_binding_31581=_n_item_31580;
double _n_k_31468=std::get<0>(*_n_binding_31581);
double _n_psi_31469=std::get<1>(*_n_binding_31581);
double _n_lo_31470=std::get<2>(*_n_binding_31581);
double _n_hi_31471=std::get<3>(*_n_binding_31581);
bool _n_hour_31472=std::get<4>(*_n_binding_31581);
{
d::String _n_g_31473=(d::truth(_n_hour_31472)?d::String(u":"):d::String(u"·"));
if(d::truth((d::present(_n_H_31466)))){d::check_cancel();double _n_d_31474=((_n_hi_31471-_n_lo_31470)/2.0);
if((d::truth((_n_lo_31470<=d::read(_n_edge_31467)))&&d::truth((d::read(_n_edge_31467)<=_n_hi_31471)))){d::check_cancel();(void)((_n_g_31473=d::String(u"█")));
}else {d::check_cancel();if((d::truth(((_n_lo_31470-_n_d_31474)<=d::read(_n_edge_31467)))&&d::truth((d::read(_n_edge_31467)<=(_n_hi_31471+_n_d_31474))))){d::check_cancel();(void)((_n_g_31473=d::String(u"▓")));
}else {d::check_cancel();if((d::truth(((_n_psi_31469*d::read(_n_H_31466))>=0.0))&&d::truth(([&](){auto _n_left_31582=std::fabs(_n_psi_31469);auto _n_right_31583=std::fabs(d::read(_n_H_31466));return (_n_left_31582<=_n_right_31583);})()))){d::check_cancel();(void)((_n_g_31473=d::String(u"▒")));
}
}
}
}
(void)(([&](){auto&& _n_array_31584=this->_n_grid_31403;auto _n_index_31585=_n_k_31468;auto _n_value_31586=_n_g_31473;d::put(_n_array_31584,_n_index_31585,_n_value_31586);return _n_value_31586;})());

}
}
for(auto &&_n_item_31587:this->_n_rim_31410.entries()){d::check_cancel();auto _n_binding_31588=_n_item_31587;
double _n_k_31475=std::get<0>(*_n_binding_31588);
d::String _n_g_31476=std::get<1>(*_n_binding_31588);
(void)(([&](){auto&& _n_array_31589=this->_n_grid_31403;auto _n_index_31590=_n_k_31475;auto _n_value_31591=_n_g_31476;d::put(_n_array_31589,_n_index_31590,_n_value_31591);return _n_value_31591;})());
}
{double _n_h_31477=(-d::number(6.0));
for(;d::truth((_n_h_31477<=6.0));(void)((_n_h_31477++))){d::check_cancel();if(d::truth((!d::truth(_n_h_31477)))){d::check_cancel();continue;
}
double _n_p_31478=((_n_h_31477*ascii::PI)/12.0);
d::String _n_s_31479=d::string((d::truth((_n_h_31477<0.0))?(12.0+_n_h_31477):_n_h_31477));
(void)(([&](){auto _n_argument_31592=d::round(((_n_CX_31392+((_n_RX_31394*(_n_INNER_31396-0.09))*std::sin(_n_p_31478)))-(double(_n_s_31479.size())/2.0)));auto _n_argument_31593=(_n_YC_31393+((_n_RY_31395*(_n_INNER_31396-0.12))*std::cos(_n_p_31478)));auto _n_argument_31594=_n_s_31479;return this->_n_text_31405(_n_argument_31592,_n_argument_31593,_n_argument_31594);})());
}}
for(auto &&_n_item_31595:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_31480=_n_item_31595;
{
double _n_wall_31481=std::floor((_n_CX_31392+(_n_s_31480*_n_RX_31394)));
{double _n_r_31482=std::floor(_n_YC_31393);
for(;d::truth((_n_r_31482<_n_GROUND_31397));(void)((_n_r_31482++))){d::check_cancel();(void)(this->_n_put_31404(_n_wall_31481,_n_r_31482,d::String(u"|")));
}}
(void)(([&](){auto _n_argument_31596=_n_wall_31481;auto _n_argument_31597=(std::floor(_n_YC_31393)-1.0);auto _n_argument_31598=d::String(u"_");return this->_n_put_31404(_n_argument_31596,_n_argument_31597,_n_argument_31598);})());
{double _n_c_31483=1.0;
for(;d::truth((_n_c_31483<((_n_RX_31394*(1.0-_n_INNER_31396))-0.5)));(void)((_n_c_31483++))){d::check_cancel();(void)(([&](){auto _n_argument_31599=(_n_wall_31481-(_n_s_31480*_n_c_31483));auto _n_argument_31600=(std::floor(_n_YC_31393)-1.0);auto _n_argument_31601=d::String(u"_");return this->_n_put_31404(_n_argument_31599,_n_argument_31600,_n_argument_31601);})());
}}
for(auto &&_n_item_31602:d::Array<double,false>{16.0,21.0}){d::check_cancel();double _n_dx_31484=_n_item_31602;
(void)((([&](){auto _n_argument_31603=(std::floor((_n_CX_31392+(_n_s_31480*_n_dx_31484)))-1.0);auto _n_argument_31604=(_n_GROUND_31397-2.0);auto _n_argument_31605=d::String(u"╭─╮");return this->_n_text_31405(_n_argument_31603,_n_argument_31604,_n_argument_31605);})(),([&](){auto _n_argument_31606=(std::floor((_n_CX_31392+(_n_s_31480*_n_dx_31484)))-1.0);auto _n_argument_31607=(_n_GROUND_31397-1.0);auto _n_argument_31608=d::String(u"│ │");return this->_n_text_31405(_n_argument_31606,_n_argument_31607,_n_argument_31608);})()));
}

}
}
{double _n_c_31485=0.0;
for(;d::truth((_n_c_31485<this->_n_cols_31401));(void)((_n_c_31485++))){d::check_cancel();(void)(this->_n_put_31404(_n_c_31485,_n_GROUND_31397,d::String(u"▀")));
}}
{double _n_r_31486=_n_APEX_31398;
for(;d::truth((_n_r_31486<_n_GROUND_31397));(void)((_n_r_31486++))){d::check_cancel();double _n_w_31487=this->_n_half_31408(_n_r_31486);
{double _n_c_31488=std::ceil((_n_CX_31392-_n_w_31487));
for(;d::truth((_n_c_31488<(_n_CX_31392+_n_w_31487)));(void)((_n_c_31488++))){d::check_cancel();(void)(this->_n_put_31404(_n_c_31488,_n_r_31486,d::String(u"=")));
}}
(void)((this->_n_put_31404((_n_CX_31392-_n_w_31487),_n_r_31486,d::String(u"/")),this->_n_put_31404((_n_CX_31392+_n_w_31487),_n_r_31486,d::String(u"\\"))));
if(d::truth((_n_w_31487>2.0))){d::check_cancel();(void)((this->_n_put_31404(((_n_CX_31392-_n_w_31487)+1.0),_n_r_31486,d::String(u"|")),this->_n_put_31404(((_n_CX_31392+_n_w_31487)-1.0),_n_r_31486,d::String(u"|"))));
}
}}
(void)(([&](){auto _n_argument_31609=(std::floor(_n_CX_31392)-1.0);auto _n_argument_31610=(_n_APEX_31398-2.0);auto _n_argument_31611=d::String(u"▗█▖");return this->_n_text_31405(_n_argument_31609,_n_argument_31610,_n_argument_31611);})());
(void)(([&](){auto _n_argument_31612=(std::floor(_n_CX_31392)-1.0);auto _n_argument_31613=(_n_APEX_31398-1.0);auto _n_argument_31614=d::String(u"│ │");return this->_n_text_31405(_n_argument_31612,_n_argument_31613,_n_argument_31614);})());
(void)(([&](){auto _n_splice_31615=this->_n_base_31414;auto _n_removed_31616=_n_splice_31615.splice(0.0,double(this->_n_base_31414.size()));for(const auto &_v:this->_n_grid_31403)_n_splice_31615.push(_v);return _n_removed_31616;})());

}
}

explicit Native_sundial(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_31518=_n_meta_31389;
this->_n_cols_31401=_n_binding_31518->_p_cols;
this->_n_rows_31402=_n_binding_31518->_p_rows;
this->_n_grid_31403=d::Array<d::String,false>(size_t((this->_n_cols_31401*this->_n_rows_31402)));
this->_n_face_31407=d::Array<std::shared_ptr<std::tuple<double,double,double,double,bool>>,false>{};
{double _n_r_31433=std::floor(_n_YC_31393);
for(;d::truth((_n_r_31433<this->_n_rows_31402));(void)((_n_r_31433++))){d::check_cancel();{double _n_c_31434=0.0;
for(;d::truth((_n_c_31434<this->_n_cols_31401));(void)((_n_c_31434++))){d::check_cancel();double _n_e_31435=d::hypot(std::initializer_list<double>{(((_n_c_31434+0.5)-_n_CX_31392)/_n_RX_31394),(((_n_r_31433+0.5)-_n_YC_31393)/_n_RY_31395)});
if((d::truth((_n_e_31435>=1.0))||d::truth((_n_e_31435<=_n_INNER_31396)))){d::check_cancel();continue;
}
d::Array<double,false> _n_corners_31436=d::map(d::Array<d::Array<double,false>,false>{d::Array<double,false>{_n_c_31434,_n_r_31433},d::Array<double,false>{(_n_c_31434+1.0),_n_r_31433},d::Array<double,false>{_n_c_31434,(_n_r_31433+1.0)},d::Array<double,false>{(_n_c_31434+1.0),(_n_r_31433+1.0)}},[&]( d::Array<double,false> _a0) mutable ->double{auto _n_binding_31519=_a0;
double _n_x_31437=d::at(_n_binding_31519,0.0);
double _n_y_31438=d::at(_n_binding_31519,1.0);
return this->_n_angle_31406(_n_x_31437,_n_y_31438);});
double _n_lo_31439=([&](){d::Array<double> _n_numbers_31520;for(auto _x:_n_corners_31436)_n_numbers_31520.push(_x);return d::minimum(_n_numbers_31520);})();
double _n_hi_31440=([&](){d::Array<double> _n_numbers_31521;for(auto _x:_n_corners_31436)_n_numbers_31521.push(_x);return d::maximum(_n_numbers_31521);})();
bool _n_hour_31441=([&](){auto _n_left_31522=std::floor((_n_hi_31440/(ascii::PI/12.0)));auto _n_right_31523=std::floor((_n_lo_31439/(ascii::PI/12.0)));return (_n_left_31522!=_n_right_31523);})();
(void)(this->_n_face_31407.push(std::make_shared<std::tuple<double,double,double,double,bool>>(((_n_r_31433*this->_n_cols_31401)+_n_c_31434),this->_n_angle_31406((_n_c_31434+0.5),(_n_r_31433+0.5)),_n_lo_31439,_n_hi_31440,_n_hour_31441)));
}}
}}
this->_n_hidden_31409=(ascii::PI/2.0);
for(auto &&_n_item_31524:this->_n_face_31407){d::check_cancel();auto _n_binding_31525=_n_item_31524;
double _n_k_31443=std::get<0>(*_n_binding_31525);
double _n_psi_31444=std::get<1>(*_n_binding_31525);
{
double _n_r_31445=std::floor((_n_k_31443/this->_n_cols_31401));
double _n_c_31446=d::mod(_n_k_31443,this->_n_cols_31401);
if((d::truth((_n_c_31446<std::floor((_n_CX_31392-this->_n_half_31408(_n_r_31445)))))||d::truth((_n_c_31446>std::floor((_n_CX_31392+this->_n_half_31408(_n_r_31445))))))){d::check_cancel();(void)((this->_n_hidden_31409=([&](){auto _n_argument_31526=this->_n_hidden_31409;auto _n_argument_31527=std::fabs(_n_psi_31444);return d::minimum({_n_argument_31526,_n_argument_31527});})()));
}

}
}
this->_n_rim_31410=d::Map<double,d::String>();
this->_n_UP_31411=0.22;
{double _n_r_31447=std::ceil((_n_YC_31393-0.5));
for(;d::truth(((((_n_r_31447+0.5)-_n_YC_31393)/_n_RY_31395)<this->_n_UP_31411));(void)((_n_r_31447++))){d::check_cancel();double _n_w_31448=(_n_RX_31394*std::sqrt((1.0-std::pow((((_n_r_31447+0.5)-_n_YC_31393)/_n_RY_31395),2.0))));
(void)((([&](){auto _n_argument_31528=((_n_r_31447*this->_n_cols_31401)+std::floor((_n_CX_31392-_n_w_31448)));auto _n_argument_31529=d::String(u"|");return this->_n_rim_31410.set(_n_argument_31528,_n_argument_31529);})(),([&](){auto _n_argument_31530=((_n_r_31447*this->_n_cols_31401)+std::floor((_n_CX_31392+_n_w_31448)));auto _n_argument_31531=d::String(u"|");return this->_n_rim_31410.set(_n_argument_31530,_n_argument_31531);})()));
}}
this->_n_acc_31412=d::Map<double,std::shared_ptr<std::tuple<double,double,double,bool>>>();
{double _n_i_31449=0.0;
for(;d::truth((_n_i_31449<=1200.0));(void)((_n_i_31449++))){d::check_cancel();double _n_p_31450=((((_n_i_31449/1200.0)*2.0)-1.0)*(ascii::PI/2.0));
double _n_x_31451=(_n_CX_31392+(_n_RX_31394*std::sin(_n_p_31450)));
double _n_y_31452=(_n_YC_31393+(_n_RY_31395*std::cos(_n_p_31450)));
if(d::truth(((((std::floor(_n_y_31452)+0.5)-_n_YC_31393)/_n_RY_31395)<this->_n_UP_31411))){d::check_cancel();continue;
}
double _n_k_31453=([&](){auto _n_left_31532=(std::floor(_n_y_31452)*this->_n_cols_31401);auto _n_right_31533=std::floor(_n_x_31451);return (_n_left_31532+_n_right_31533);})();
std::shared_ptr<std::tuple<double,double,double,bool>> _n_e_31454=([&]()->std::shared_ptr<std::tuple<double,double,double,bool>>{auto _n_logical_31534=d::read(this->_n_acc_31412.get(_n_k_31453));return d::truth(_n_logical_31534)?_n_logical_31534:std::make_shared<std::tuple<double,double,double,bool>>(0.0,0.0,0.0,(_n_p_31450<0.0));})();
(void)((((std::get<0>(*_n_e_31454)=(std::get<0>(*_n_e_31454)+1.0)),(std::get<1>(*_n_e_31454)=(std::get<1>(*_n_e_31454)+(_n_y_31452-std::floor(_n_y_31452))))),(std::get<2>(*_n_e_31454)=(std::get<2>(*_n_e_31454)+([&](){auto _n_argument_31535=((2.0*_n_RY_31395)*std::fabs(std::sin(_n_p_31450)));auto _n_argument_31536=(_n_RX_31394*std::cos(_n_p_31450));return std::atan2(_n_argument_31535,_n_argument_31536);})()))));
(void)(this->_n_acc_31412.set(_n_k_31453,_n_e_31454));
}}
this->_n_most_31413=d::Map<double,double>();
for(auto &&_n_item_31537:this->_n_acc_31412.entries()){d::check_cancel();auto _n_binding_31538=_n_item_31537;
double _n_k_31455=std::get<0>(*_n_binding_31538);
auto _n_binding_31539=std::get<1>(*_n_binding_31538);
double _n_n_31456=std::get<0>(*_n_binding_31539);
double _n_phi_31457=std::get<2>(*_n_binding_31539);
bool _n_west_31458=std::get<3>(*_n_binding_31539);
{
double _n_id_31459=((std::floor((_n_k_31455/this->_n_cols_31401))*2.0)+(d::truth(_n_west_31458)?0.0:1.0));
if((d::truth(((_n_phi_31457/_n_n_31456)>1.08))&&d::truth((_n_n_31456>([&]()->double{auto _n_logical_31540=([&]()->std::optional<double>{auto _n_optional_31541=d::read(this->_n_acc_31412.get(d::read(this->_n_most_31413.get(_n_id_31459))));if(!d::present(_n_optional_31541))return {};return std::optional<double>(std::get<0>(*d::read(_n_optional_31541)));})();return d::present(_n_logical_31540)?d::read(_n_logical_31540):0.0;})())))){d::check_cancel();(void)(this->_n_most_31413.set(_n_id_31459,_n_k_31455));
}

}
}
for(auto &&_n_item_31542:this->_n_acc_31412.entries()){d::check_cancel();auto _n_binding_31543=_n_item_31542;
double _n_k_31460=std::get<0>(*_n_binding_31543);
auto _n_binding_31544=std::get<1>(*_n_binding_31543);
double _n_n_31461=std::get<0>(*_n_binding_31544);
double _n_fy_31462=std::get<1>(*_n_binding_31544);
double _n_phi_31463=std::get<2>(*_n_binding_31544);
bool _n_west_31464=std::get<3>(*_n_binding_31544);
{
std::optional<double> _n_s_31465=this->_n_most_31413.get(((std::floor((_n_k_31460/this->_n_cols_31401))*2.0)+(d::truth(_n_west_31464)?0.0:1.0)));
if(d::truth((d::equal(_n_s_31465,_n_k_31460)))){d::check_cancel();(void)(this->_n_rim_31410.set(_n_k_31460,(d::truth(_n_west_31464)?d::String(u"\\"):d::String(u"/"))));
}else {d::check_cancel();if((d::truth((!d::present(_n_s_31465)))||d::truth((_n_n_31461>(std::get<0>(*d::read(this->_n_acc_31412.get(d::read(_n_s_31465))))*0.7))))){d::check_cancel();(void)(this->_n_rim_31410.set(_n_k_31460,(d::truth(((_n_fy_31462/_n_n_31461)<0.4))?d::String(u"'"):(d::truth(((_n_fy_31462/_n_n_31461)>0.6))?(d::truth(((_n_phi_31463/_n_n_31461)>0.2))?d::String(u"."):d::String(u"_")):d::String(u"-")))));
}
}

}
}
this->_n_base_31414=d::Array<d::String,false>(size_t((this->_n_cols_31401*this->_n_rows_31402)));
this->_n_rand_31416=_n_mulberry32_31400(5.0);
this->_n_stars_31417=d::Array<d::Array<double,false>,false>(d::from(22.0,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{double(d::i32((this->_n_rand_31416()*this->_n_cols_31401))|d::i32(0.0)),double(d::i32((this->_n_rand_31416()*8.0))|d::i32(0.0)),(this->_n_rand_31416()*6.0)};}));
this->_n_key_31418=(-d::number(1.0));
this->_n_H_31419=std::optional<double>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_31514> _a1) mutable ->d::String{double _n_t_31489=_a0;
{
d::Date _n_now_31490=d::Date();
double _n_hours_31491=([&](){auto _n_left_31545=_n_now_31490.getHours();auto _n_right_31546=(_n_now_31490.getMinutes()/60.0);return (_n_left_31545+_n_right_31546);})();
double _n_day_31492=(([&](){auto _n_left_31547=_n_now_31490.getTime();auto _n_right_31548=d::Date(_n_now_31490.getFullYear(),0.0,1.0).getTime();return (_n_left_31547-_n_right_31548);})()/86400000.0);
double _n_minute_31493=std::floor((_n_hours_31491*60.0));
if(d::truth((_n_minute_31493!=this->_n_key_31418))){d::check_cancel();(void)((this->_n_key_31418=_n_minute_31493));
double _n_h_31494=((((_n_hours_31491-12.0)*15.0)*ascii::PI)/180.0);
double _n_dec_31495=((((-d::number(23.44))*ascii::PI)*std::cos((((2.0*ascii::PI)*(_n_day_31492+10.0))/365.0)))/180.0);
bool _n_up_31496=(([&](){auto _n_left_31549=([&](){auto _n_left_31551=([&](){auto _n_left_31553=std::cos(_n_dec_31495);auto _n_right_31554=std::cos(_n_h_31494);return (_n_left_31553*_n_right_31554);})();auto _n_right_31552=std::cos(_n_LAT_31391);return (_n_left_31551*_n_right_31552);})();auto _n_right_31550=([&](){auto _n_left_31555=std::sin(_n_dec_31495);auto _n_right_31556=std::sin(_n_LAT_31391);return (_n_left_31555*_n_right_31556);})();return (_n_left_31549+_n_right_31550);})()>0.0);
(void)((this->_n_H_31419=(d::truth(_n_up_31496)?std::optional<double>(([&](){auto _n_argument_31557=((-d::number(ascii::PI))/2.0);auto _n_argument_31558=d::minimum({(ascii::PI/2.0),_n_h_31494});return d::maximum({_n_argument_31557,_n_argument_31558});})()):std::optional<double>{})));
(void)(this->_n_draw_31415(this->_n_H_31419));
}
d::Array<d::String,false> _n_out_31497=this->_n_base_31414.slice();
auto _n_sky_31498=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_31499=_a0;
double _n_r_31500=_a1;
d::String _n_g_31501=_a2;
{
(void)(((_n_c_31499=std::floor(_n_c_31499)),(_n_r_31500=std::floor(_n_r_31500))));
if(((((d::truth((_n_c_31499>=0.0))&&d::truth((_n_c_31499<this->_n_cols_31401)))&&d::truth((_n_r_31500>=0.0)))&&d::truth((_n_r_31500<this->_n_rows_31402)))&&d::truth((d::at(_n_out_31497,((_n_r_31500*this->_n_cols_31401)+_n_c_31499))==d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_31559=_n_out_31497;auto _n_index_31560=((_n_r_31500*this->_n_cols_31401)+_n_c_31499);auto _n_value_31561=_n_g_31501;d::put(_n_array_31559,_n_index_31560,_n_value_31561);return _n_value_31561;})());
}

}
};
if(d::truth((!d::present(this->_n_H_31419)))){d::check_cancel();for(auto &&_n_item_31562:this->_n_stars_31417){d::check_cancel();auto _n_binding_31563=_n_item_31562;
double _n_c_31502=d::at(_n_binding_31563,0.0);
double _n_r_31503=d::at(_n_binding_31563,1.0);
double _n_ph_31504=d::at(_n_binding_31563,2.0);
(void)(([&](){auto _n_argument_31564=_n_c_31502;auto _n_argument_31565=_n_r_31503;auto _n_argument_31566=(d::truth((std::sin(((_n_t_31489*1.4)+_n_ph_31504))>0.5))?d::String(u"+"):d::String(u"·"));return _n_sky_31498(_n_argument_31564,_n_argument_31565,_n_argument_31566);})());
}
}else {d::check_cancel();double _n_x_31505=(_n_CX_31392-(24.0*std::sin(d::read(this->_n_H_31419))));
double _n_y_31506=(1.5+(4.0*(1.0-std::cos(d::read(this->_n_H_31419)))));
(void)(((_n_sky_31498(_n_x_31505,_n_y_31506,d::String(u"O")),_n_sky_31498((_n_x_31505-1.0),_n_y_31506,d::String(u"("))),_n_sky_31498((_n_x_31505+1.0),_n_y_31506,d::String(u")"))));
double _n_step_31507=d::mod(std::floor((_n_t_31489/0.45)),4.0);
d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false> _n_rays_31508=d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false>{d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(0.0,(-d::number(1.0)),d::String(u"|")),std::make_shared<std::tuple<double,double,d::String>>(0.0,1.0,d::String(u"|")),std::make_shared<std::tuple<double,double,d::String>>((-d::number(3.0)),0.0,d::String(u"-")),std::make_shared<std::tuple<double,double,d::String>>(3.0,0.0,d::String(u"-"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>((-d::number(2.0)),(-d::number(1.0)),d::String(u"\\")),std::make_shared<std::tuple<double,double,d::String>>(2.0,(-d::number(1.0)),d::String(u"/")),std::make_shared<std::tuple<double,double,d::String>>((-d::number(2.0)),1.0,d::String(u"/")),std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,d::String(u"\\"))}};
for(auto &&_n_item_31567:(d::truth((_n_step_31507==0.0))?d::at(_n_rays_31508,0.0):(d::truth((_n_step_31507==2.0))?d::at(_n_rays_31508,1.0):([&](){d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_array_31568;for(const auto &_v:d::at(_n_rays_31508,0.0))_n_array_31568.push(_v);for(const auto &_v:d::at(_n_rays_31508,1.0))_n_array_31568.push(_v);return _n_array_31568;})()))){d::check_cancel();auto _n_binding_31569=_n_item_31567;
double _n_dx_31509=std::get<0>(*_n_binding_31569);
double _n_dy_31510=std::get<1>(*_n_binding_31569);
d::String _n_g_31511=std::get<2>(*_n_binding_31569);
(void)(_n_sky_31498((_n_x_31505+_n_dx_31509),(_n_y_31506+_n_dy_31510),_n_g_31511));
}
}
d::Array<d::String,false> _n_lines_31512=d::Array<d::String,false>{};
{double _n_r_31513=0.0;
for(;d::truth((_n_r_31513<this->_n_rows_31402));(void)((_n_r_31513++))){d::check_cancel();(void)(_n_lines_31512.push(d::join(_n_out_31497.slice((_n_r_31513*this->_n_cols_31401),((_n_r_31513+1.0)*this->_n_cols_31401)),d::String(u""))));
}}
return d::join(_n_lines_31512,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sundial").cols)*ascii::catalog_meta("sundial").rows);auto _env=std::make_shared<_n_Record_31514>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sundial_meta(){return catalog_meta("sundial");}
std::unique_ptr<Piece> make_sundial(const AsciiPieceOptions &o){return std::make_unique<Native_sundial>(o);}
}
