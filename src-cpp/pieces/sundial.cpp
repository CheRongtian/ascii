// Direct, statically typed C++ from src/pieces/sundial.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31391;
struct _n_Record_31515;
struct _n_Record_31391{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
bool _p_clock{};
static std::shared_ptr<_n_Record_31391> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31391>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_clock=d::decode<bool>(j["clock"]);return out;}
};
struct _n_Record_31515{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31515> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31515>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_31401(double _a0);
std::shared_ptr<_n_Record_31391> _n_meta_31390=[](){return ([&](){auto _n_object_31518=std::make_shared<_n_Record_31391>();_n_object_31518->_p_name=d::String(u"sundial");_n_object_31518->_p_category=d::String(u"objects");_n_object_31518->_p_note=d::String(u"jaipur's samrat yantra, its shadow set by your local time");_n_object_31518->_p_cols=65.0;_n_object_31518->_p_rows=23.0;_n_object_31518->_p_fps=10.0;_n_object_31518->_p_clock=true;return _n_object_31518;})();}();
const double _n_LAT_31392=[](){return ((26.92*ascii::PI)/180.0);}();
const double _n_CX_31393=[](){return 32.5;}();
const double _n_YC_31394=[](){return 9.5;}();
const double _n_RX_31395=[](){return 26.0;}();
const double _n_RY_31396=[](){return 11.6;}();
const double _n_INNER_31397=[](){return 0.77;}();
const double _n_GROUND_31398=[](){return 22.0;}();
const double _n_APEX_31399=[](){return 4.0;}();
const double _n_FOOT_31400=[](){return 2.9;}();
std::function<double()> _n_mulberry32_31401(double _a0){double _n_seed_31421=_a0;
{
double _n_s_31422=double(d::i32(_n_seed_31421)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_31422=double(d::i32((_n_s_31422+1831565813.0))|d::i32(0.0))));
double _n_t_31423=d::imul(double(d::i32(_n_s_31422)^d::i32(double(d::u32(_n_s_31422)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_31422)));
(void)((_n_t_31423=double(d::i32((_n_t_31423+d::imul(double(d::i32(_n_t_31423)^d::i32(double(d::u32(_n_t_31423)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_31423)))))^d::i32(_n_t_31423))));
return (double(d::u32(double(d::i32(_n_t_31423)^d::i32(double(d::u32(_n_t_31423)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_sundial final:ascii::Piece{
double _n_cols_31402{};
double _n_rows_31403{};
d::Array<d::String,false> _n_grid_31404{};
d::Array<std::shared_ptr<std::tuple<double,double,double,double,bool>>,false> _n_face_31408{};
double _n_hidden_31410{};
d::Map<double,d::String> _n_rim_31411{};
double _n_UP_31412{};
d::Map<double,std::shared_ptr<std::tuple<double,double,double,bool>>> _n_acc_31413{};
d::Map<double,double> _n_most_31414{};
d::Array<d::String,false> _n_base_31415{};
std::function<double()> _n_rand_31417{};
d::Array<std::array<double,3>,false> _n_stars_31418{};
double _n_key_31419{};
std::optional<double> _n_H_31420{};
std::function<d::String(double,std::shared_ptr<_n_Record_31515>)> _render;
void _n_put_31405(double _a0,double _a1,d::String _a2){double _n_c_31424=_a0;
double _n_r_31425=_a1;
d::String _n_g_31426=_a2;
{
(void)(((_n_c_31424=std::floor(_n_c_31424)),(_n_r_31425=std::floor(_n_r_31425))));
if((((d::truth((_n_c_31424>=0.0))&&d::truth((_n_c_31424<this->_n_cols_31402)))&&d::truth((_n_r_31425>=0.0)))&&d::truth((_n_r_31425<this->_n_rows_31403)))){d::check_cancel();(void)(([&](){auto&& _n_array_31571=this->_n_grid_31404;auto _n_index_31572=((_n_r_31425*this->_n_cols_31402)+_n_c_31424);auto _n_value_31573=_n_g_31426;d::put(_n_array_31571,_n_index_31572,_n_value_31573);return _n_value_31573;})());
}

}
}

void _n_text_31406(double _a0,double _a1,d::String _a2){double _n_c_31427=_a0;
double _n_r_31428=_a1;
d::String _n_s_31429=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_31574;for(const auto &_v:_n_s_31429)_n_array_31574.push(_v);return _n_array_31574;})(),[&]( d::String _a0,double _a1) mutable ->std::optional<bool>{d::String _n_g_31430=_a0;
double _n_i_31431=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_31575=(_n_g_31430!=d::String(u" "));return d::truth(_n_logical_31575)?(this->_n_put_31405((_n_c_31427+_n_i_31431),_n_r_31428,_n_g_31430),std::optional<bool>{}):std::optional<bool>(_n_logical_31575);})();});}

double _n_angle_31407(double _a0,double _a1){double _n_c_31432=_a0;
double _n_r_31433=_a1;
return std::atan2(((_n_c_31432-_n_CX_31393)/_n_RX_31395),((_n_r_31433-_n_YC_31394)/_n_RY_31396));}

double _n_half_31409(double _a0){double _n_r_31443=_a0;
return (0.6+(((_n_FOOT_31400-0.6)*(_n_r_31443-_n_APEX_31399))/((_n_GROUND_31398-1.0)-_n_APEX_31399)));}

void _n_draw_31416(std::optional<double> _a0){std::optional<double> _n_H_31467=_a0;
{
(void)(this->_n_grid_31404.fill(d::String(u" ")));
std::optional<double> _n_edge_31468=(d::truth((!d::present(_n_H_31467)))?std::optional<double>{}:std::optional<double>(([&](){auto _n_left_31576=d::sign(([&]()->double{auto _n_logical_31578=d::read(_n_H_31467);return d::truth(_n_logical_31578)?_n_logical_31578:(-d::number(1.0));})());auto _n_right_31577=([&](){auto _n_argument_31579=std::fabs(d::read(_n_H_31467));auto _n_argument_31580=this->_n_hidden_31410;return d::maximum({_n_argument_31579,_n_argument_31580});})();return (_n_left_31576*_n_right_31577);})()));
for(auto &&_n_item_31581:this->_n_face_31408){d::check_cancel();auto _n_binding_31582=_n_item_31581;
double _n_k_31469=std::get<0>(*_n_binding_31582);
double _n_psi_31470=std::get<1>(*_n_binding_31582);
double _n_lo_31471=std::get<2>(*_n_binding_31582);
double _n_hi_31472=std::get<3>(*_n_binding_31582);
bool _n_hour_31473=std::get<4>(*_n_binding_31582);
{
d::String _n_g_31474=(d::truth(_n_hour_31473)?d::String(u":"):d::String(u"·"));
if(d::truth((d::present(_n_H_31467)))){d::check_cancel();double _n_d_31475=((_n_hi_31472-_n_lo_31471)/2.0);
if((d::truth((_n_lo_31471<=d::read(_n_edge_31468)))&&d::truth((d::read(_n_edge_31468)<=_n_hi_31472)))){d::check_cancel();(void)((_n_g_31474=d::String(u"█")));
}else {d::check_cancel();if((d::truth(((_n_lo_31471-_n_d_31475)<=d::read(_n_edge_31468)))&&d::truth((d::read(_n_edge_31468)<=(_n_hi_31472+_n_d_31475))))){d::check_cancel();(void)((_n_g_31474=d::String(u"▓")));
}else {d::check_cancel();if((d::truth(((_n_psi_31470*d::read(_n_H_31467))>=0.0))&&d::truth(([&](){auto _n_left_31583=std::fabs(_n_psi_31470);auto _n_right_31584=std::fabs(d::read(_n_H_31467));return (_n_left_31583<=_n_right_31584);})()))){d::check_cancel();(void)((_n_g_31474=d::String(u"▒")));
}
}
}
}
(void)(([&](){auto&& _n_array_31585=this->_n_grid_31404;auto _n_index_31586=_n_k_31469;auto _n_value_31587=_n_g_31474;d::put(_n_array_31585,_n_index_31586,_n_value_31587);return _n_value_31587;})());

}
}
for(auto &&_n_item_31588:this->_n_rim_31411.entries()){d::check_cancel();auto _n_binding_31589=_n_item_31588;
double _n_k_31476=std::get<0>(*_n_binding_31589);
d::String _n_g_31477=std::get<1>(*_n_binding_31589);
(void)(([&](){auto&& _n_array_31590=this->_n_grid_31404;auto _n_index_31591=_n_k_31476;auto _n_value_31592=_n_g_31477;d::put(_n_array_31590,_n_index_31591,_n_value_31592);return _n_value_31592;})());
}
{double _n_h_31478=(-d::number(6.0));
for(;d::truth((_n_h_31478<=6.0));(void)((_n_h_31478++))){d::check_cancel();if(d::truth((!d::truth(_n_h_31478)))){d::check_cancel();continue;
}
double _n_p_31479=((_n_h_31478*ascii::PI)/12.0);
d::String _n_s_31480=d::string((d::truth((_n_h_31478<0.0))?(12.0+_n_h_31478):_n_h_31478));
(void)(([&](){auto _n_argument_31593=d::round(((_n_CX_31393+((_n_RX_31395*(_n_INNER_31397-0.09))*std::sin(_n_p_31479)))-(double(_n_s_31480.size())/2.0)));auto _n_argument_31594=(_n_YC_31394+((_n_RY_31396*(_n_INNER_31397-0.12))*std::cos(_n_p_31479)));auto _n_argument_31595=_n_s_31480;return this->_n_text_31406(_n_argument_31593,_n_argument_31594,_n_argument_31595);})());
}}
for(auto &&_n_item_31596:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_31481=_n_item_31596;
{
double _n_wall_31482=std::floor((_n_CX_31393+(_n_s_31481*_n_RX_31395)));
{double _n_r_31483=std::floor(_n_YC_31394);
for(;d::truth((_n_r_31483<_n_GROUND_31398));(void)((_n_r_31483++))){d::check_cancel();(void)(this->_n_put_31405(_n_wall_31482,_n_r_31483,d::String(u"|")));
}}
(void)(([&](){auto _n_argument_31597=_n_wall_31482;auto _n_argument_31598=(std::floor(_n_YC_31394)-1.0);auto _n_argument_31599=d::String(u"_");return this->_n_put_31405(_n_argument_31597,_n_argument_31598,_n_argument_31599);})());
{double _n_c_31484=1.0;
for(;d::truth((_n_c_31484<((_n_RX_31395*(1.0-_n_INNER_31397))-0.5)));(void)((_n_c_31484++))){d::check_cancel();(void)(([&](){auto _n_argument_31600=(_n_wall_31482-(_n_s_31481*_n_c_31484));auto _n_argument_31601=(std::floor(_n_YC_31394)-1.0);auto _n_argument_31602=d::String(u"_");return this->_n_put_31405(_n_argument_31600,_n_argument_31601,_n_argument_31602);})());
}}
for(auto &&_n_item_31603:d::Array<double,false>{16.0,21.0}){d::check_cancel();double _n_dx_31485=_n_item_31603;
(void)((([&](){auto _n_argument_31604=(std::floor((_n_CX_31393+(_n_s_31481*_n_dx_31485)))-1.0);auto _n_argument_31605=(_n_GROUND_31398-2.0);auto _n_argument_31606=d::String(u"╭─╮");return this->_n_text_31406(_n_argument_31604,_n_argument_31605,_n_argument_31606);})(),([&](){auto _n_argument_31607=(std::floor((_n_CX_31393+(_n_s_31481*_n_dx_31485)))-1.0);auto _n_argument_31608=(_n_GROUND_31398-1.0);auto _n_argument_31609=d::String(u"│ │");return this->_n_text_31406(_n_argument_31607,_n_argument_31608,_n_argument_31609);})()));
}

}
}
{double _n_c_31486=0.0;
for(;d::truth((_n_c_31486<this->_n_cols_31402));(void)((_n_c_31486++))){d::check_cancel();(void)(this->_n_put_31405(_n_c_31486,_n_GROUND_31398,d::String(u"▀")));
}}
{double _n_r_31487=_n_APEX_31399;
for(;d::truth((_n_r_31487<_n_GROUND_31398));(void)((_n_r_31487++))){d::check_cancel();double _n_w_31488=this->_n_half_31409(_n_r_31487);
{double _n_c_31489=std::ceil((_n_CX_31393-_n_w_31488));
for(;d::truth((_n_c_31489<(_n_CX_31393+_n_w_31488)));(void)((_n_c_31489++))){d::check_cancel();(void)(this->_n_put_31405(_n_c_31489,_n_r_31487,d::String(u"=")));
}}
(void)((this->_n_put_31405((_n_CX_31393-_n_w_31488),_n_r_31487,d::String(u"/")),this->_n_put_31405((_n_CX_31393+_n_w_31488),_n_r_31487,d::String(u"\\"))));
if(d::truth((_n_w_31488>2.0))){d::check_cancel();(void)((this->_n_put_31405(((_n_CX_31393-_n_w_31488)+1.0),_n_r_31487,d::String(u"|")),this->_n_put_31405(((_n_CX_31393+_n_w_31488)-1.0),_n_r_31487,d::String(u"|"))));
}
}}
(void)(([&](){auto _n_argument_31610=(std::floor(_n_CX_31393)-1.0);auto _n_argument_31611=(_n_APEX_31399-2.0);auto _n_argument_31612=d::String(u"▗█▖");return this->_n_text_31406(_n_argument_31610,_n_argument_31611,_n_argument_31612);})());
(void)(([&](){auto _n_argument_31613=(std::floor(_n_CX_31393)-1.0);auto _n_argument_31614=(_n_APEX_31399-1.0);auto _n_argument_31615=d::String(u"│ │");return this->_n_text_31406(_n_argument_31613,_n_argument_31614,_n_argument_31615);})());
(void)(([&](){auto _n_splice_31616=this->_n_base_31415;auto _n_removed_31617=_n_splice_31616.splice(0.0,double(this->_n_base_31415.size()));for(const auto &_v:this->_n_grid_31404)_n_splice_31616.push(_v);return _n_removed_31617;})());

}
}

explicit Native_sundial(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_31519=_n_meta_31390;
this->_n_cols_31402=_n_binding_31519->_p_cols;
this->_n_rows_31403=_n_binding_31519->_p_rows;
this->_n_grid_31404=d::Array<d::String,false>(size_t((this->_n_cols_31402*this->_n_rows_31403)));
this->_n_face_31408=d::Array<std::shared_ptr<std::tuple<double,double,double,double,bool>>,false>{};
{double _n_r_31434=std::floor(_n_YC_31394);
for(;d::truth((_n_r_31434<this->_n_rows_31403));(void)((_n_r_31434++))){d::check_cancel();{double _n_c_31435=0.0;
for(;d::truth((_n_c_31435<this->_n_cols_31402));(void)((_n_c_31435++))){d::check_cancel();double _n_e_31436=d::hypot(std::initializer_list<double>{(((_n_c_31435+0.5)-_n_CX_31393)/_n_RX_31395),(((_n_r_31434+0.5)-_n_YC_31394)/_n_RY_31396)});
if((d::truth((_n_e_31436>=1.0))||d::truth((_n_e_31436<=_n_INNER_31397)))){d::check_cancel();continue;
}
d::Array<double,false> _n_corners_31437=d::map(d::Array<d::Array<double,false>,false>{d::Array<double,false>{_n_c_31435,_n_r_31434},d::Array<double,false>{(_n_c_31435+1.0),_n_r_31434},d::Array<double,false>{_n_c_31435,(_n_r_31434+1.0)},d::Array<double,false>{(_n_c_31435+1.0),(_n_r_31434+1.0)}},[&]( d::Array<double,false> _a0) mutable ->double{auto _n_binding_31520=_a0;
double _n_x_31438=d::at(_n_binding_31520,0.0);
double _n_y_31439=d::at(_n_binding_31520,1.0);
return this->_n_angle_31407(_n_x_31438,_n_y_31439);});
double _n_lo_31440=([&](){d::Array<double> _n_numbers_31521;for(auto _x:_n_corners_31437)_n_numbers_31521.push(_x);return d::minimum(_n_numbers_31521);})();
double _n_hi_31441=([&](){d::Array<double> _n_numbers_31522;for(auto _x:_n_corners_31437)_n_numbers_31522.push(_x);return d::maximum(_n_numbers_31522);})();
bool _n_hour_31442=([&](){auto _n_left_31523=std::floor((_n_hi_31441/(ascii::PI/12.0)));auto _n_right_31524=std::floor((_n_lo_31440/(ascii::PI/12.0)));return (_n_left_31523!=_n_right_31524);})();
(void)(this->_n_face_31408.push(std::make_shared<std::tuple<double,double,double,double,bool>>(((_n_r_31434*this->_n_cols_31402)+_n_c_31435),this->_n_angle_31407((_n_c_31435+0.5),(_n_r_31434+0.5)),_n_lo_31440,_n_hi_31441,_n_hour_31442)));
}}
}}
this->_n_hidden_31410=(ascii::PI/2.0);
for(auto &&_n_item_31525:this->_n_face_31408){d::check_cancel();auto _n_binding_31526=_n_item_31525;
double _n_k_31444=std::get<0>(*_n_binding_31526);
double _n_psi_31445=std::get<1>(*_n_binding_31526);
{
double _n_r_31446=std::floor((_n_k_31444/this->_n_cols_31402));
double _n_c_31447=d::mod(_n_k_31444,this->_n_cols_31402);
if((d::truth((_n_c_31447<std::floor((_n_CX_31393-this->_n_half_31409(_n_r_31446)))))||d::truth((_n_c_31447>std::floor((_n_CX_31393+this->_n_half_31409(_n_r_31446))))))){d::check_cancel();(void)((this->_n_hidden_31410=([&](){auto _n_argument_31527=this->_n_hidden_31410;auto _n_argument_31528=std::fabs(_n_psi_31445);return d::minimum({_n_argument_31527,_n_argument_31528});})()));
}

}
}
this->_n_rim_31411=d::Map<double,d::String>();
this->_n_UP_31412=0.22;
{double _n_r_31448=std::ceil((_n_YC_31394-0.5));
for(;d::truth(((((_n_r_31448+0.5)-_n_YC_31394)/_n_RY_31396)<this->_n_UP_31412));(void)((_n_r_31448++))){d::check_cancel();double _n_w_31449=(_n_RX_31395*std::sqrt((1.0-std::pow((((_n_r_31448+0.5)-_n_YC_31394)/_n_RY_31396),2.0))));
(void)((([&](){auto _n_argument_31529=((_n_r_31448*this->_n_cols_31402)+std::floor((_n_CX_31393-_n_w_31449)));auto _n_argument_31530=d::String(u"|");return this->_n_rim_31411.set(_n_argument_31529,_n_argument_31530);})(),([&](){auto _n_argument_31531=((_n_r_31448*this->_n_cols_31402)+std::floor((_n_CX_31393+_n_w_31449)));auto _n_argument_31532=d::String(u"|");return this->_n_rim_31411.set(_n_argument_31531,_n_argument_31532);})()));
}}
this->_n_acc_31413=d::Map<double,std::shared_ptr<std::tuple<double,double,double,bool>>>();
{double _n_i_31450=0.0;
for(;d::truth((_n_i_31450<=1200.0));(void)((_n_i_31450++))){d::check_cancel();double _n_p_31451=((((_n_i_31450/1200.0)*2.0)-1.0)*(ascii::PI/2.0));
double _n_x_31452=(_n_CX_31393+(_n_RX_31395*std::sin(_n_p_31451)));
double _n_y_31453=(_n_YC_31394+(_n_RY_31396*std::cos(_n_p_31451)));
if(d::truth(((((std::floor(_n_y_31453)+0.5)-_n_YC_31394)/_n_RY_31396)<this->_n_UP_31412))){d::check_cancel();continue;
}
double _n_k_31454=([&](){auto _n_left_31533=(std::floor(_n_y_31453)*this->_n_cols_31402);auto _n_right_31534=std::floor(_n_x_31452);return (_n_left_31533+_n_right_31534);})();
std::shared_ptr<std::tuple<double,double,double,bool>> _n_e_31455=([&]()->std::shared_ptr<std::tuple<double,double,double,bool>>{auto _n_logical_31535=d::read(this->_n_acc_31413.get(_n_k_31454));return d::truth(_n_logical_31535)?_n_logical_31535:std::make_shared<std::tuple<double,double,double,bool>>(0.0,0.0,0.0,(_n_p_31451<0.0));})();
(void)((((std::get<0>(*_n_e_31455)=(std::get<0>(*_n_e_31455)+1.0)),(std::get<1>(*_n_e_31455)=(std::get<1>(*_n_e_31455)+(_n_y_31453-std::floor(_n_y_31453))))),(std::get<2>(*_n_e_31455)=(std::get<2>(*_n_e_31455)+([&](){auto _n_argument_31536=((2.0*_n_RY_31396)*std::fabs(std::sin(_n_p_31451)));auto _n_argument_31537=(_n_RX_31395*std::cos(_n_p_31451));return std::atan2(_n_argument_31536,_n_argument_31537);})()))));
(void)(this->_n_acc_31413.set(_n_k_31454,_n_e_31455));
}}
this->_n_most_31414=d::Map<double,double>();
for(auto &&_n_item_31538:this->_n_acc_31413.entries()){d::check_cancel();auto _n_binding_31539=_n_item_31538;
double _n_k_31456=std::get<0>(*_n_binding_31539);
auto _n_binding_31540=std::get<1>(*_n_binding_31539);
double _n_n_31457=std::get<0>(*_n_binding_31540);
double _n_phi_31458=std::get<2>(*_n_binding_31540);
bool _n_west_31459=std::get<3>(*_n_binding_31540);
{
double _n_id_31460=((std::floor((_n_k_31456/this->_n_cols_31402))*2.0)+(d::truth(_n_west_31459)?0.0:1.0));
if((d::truth(((_n_phi_31458/_n_n_31457)>1.08))&&d::truth((_n_n_31457>([&]()->double{auto _n_logical_31541=([&]()->std::optional<double>{auto _n_optional_31542=d::read(this->_n_acc_31413.get(d::read(this->_n_most_31414.get(_n_id_31460))));if(!d::present(_n_optional_31542))return {};return std::optional<double>(std::get<0>(*d::read(_n_optional_31542)));})();return d::present(_n_logical_31541)?d::read(_n_logical_31541):0.0;})())))){d::check_cancel();(void)(this->_n_most_31414.set(_n_id_31460,_n_k_31456));
}

}
}
for(auto &&_n_item_31543:this->_n_acc_31413.entries()){d::check_cancel();auto _n_binding_31544=_n_item_31543;
double _n_k_31461=std::get<0>(*_n_binding_31544);
auto _n_binding_31545=std::get<1>(*_n_binding_31544);
double _n_n_31462=std::get<0>(*_n_binding_31545);
double _n_fy_31463=std::get<1>(*_n_binding_31545);
double _n_phi_31464=std::get<2>(*_n_binding_31545);
bool _n_west_31465=std::get<3>(*_n_binding_31545);
{
std::optional<double> _n_s_31466=this->_n_most_31414.get(((std::floor((_n_k_31461/this->_n_cols_31402))*2.0)+(d::truth(_n_west_31465)?0.0:1.0)));
if(d::truth((d::equal(_n_s_31466,_n_k_31461)))){d::check_cancel();(void)(this->_n_rim_31411.set(_n_k_31461,(d::truth(_n_west_31465)?d::String(u"\\"):d::String(u"/"))));
}else {d::check_cancel();if((d::truth((!d::present(_n_s_31466)))||d::truth((_n_n_31462>(std::get<0>(*d::read(this->_n_acc_31413.get(d::read(_n_s_31466))))*0.7))))){d::check_cancel();(void)(this->_n_rim_31411.set(_n_k_31461,(d::truth(((_n_fy_31463/_n_n_31462)<0.4))?d::String(u"'"):(d::truth(((_n_fy_31463/_n_n_31462)>0.6))?(d::truth(((_n_phi_31464/_n_n_31462)>0.2))?d::String(u"."):d::String(u"_")):d::String(u"-")))));
}
}

}
}
this->_n_base_31415=d::Array<d::String,false>(size_t((this->_n_cols_31402*this->_n_rows_31403)));
this->_n_rand_31417=_n_mulberry32_31401(5.0);
this->_n_stars_31418=d::Array<std::array<double,3>,false>(d::from(22.0,[&]( ) mutable ->std::array<double,3>{return std::array<double,3>{double(d::i32((this->_n_rand_31417()*this->_n_cols_31402))|d::i32(0.0)),double(d::i32((this->_n_rand_31417()*8.0))|d::i32(0.0)),(this->_n_rand_31417()*6.0)};}));
this->_n_key_31419=(-d::number(1.0));
this->_n_H_31420=std::optional<double>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_31515> _a1) mutable ->d::String{double _n_t_31490=_a0;
{
d::Date _n_now_31491=d::Date();
double _n_hours_31492=([&](){auto _n_left_31546=_n_now_31491.getHours();auto _n_right_31547=(_n_now_31491.getMinutes()/60.0);return (_n_left_31546+_n_right_31547);})();
double _n_day_31493=(([&](){auto _n_left_31548=_n_now_31491.getTime();auto _n_right_31549=d::Date(_n_now_31491.getFullYear(),0.0,1.0).getTime();return (_n_left_31548-_n_right_31549);})()/86400000.0);
double _n_minute_31494=std::floor((_n_hours_31492*60.0));
if(d::truth((_n_minute_31494!=this->_n_key_31419))){d::check_cancel();(void)((this->_n_key_31419=_n_minute_31494));
double _n_h_31495=((((_n_hours_31492-12.0)*15.0)*ascii::PI)/180.0);
double _n_dec_31496=((((-d::number(23.44))*ascii::PI)*std::cos((((2.0*ascii::PI)*(_n_day_31493+10.0))/365.0)))/180.0);
bool _n_up_31497=(([&](){auto _n_left_31550=([&](){auto _n_left_31552=([&](){auto _n_left_31554=std::cos(_n_dec_31496);auto _n_right_31555=std::cos(_n_h_31495);return (_n_left_31554*_n_right_31555);})();auto _n_right_31553=std::cos(_n_LAT_31392);return (_n_left_31552*_n_right_31553);})();auto _n_right_31551=([&](){auto _n_left_31556=std::sin(_n_dec_31496);auto _n_right_31557=std::sin(_n_LAT_31392);return (_n_left_31556*_n_right_31557);})();return (_n_left_31550+_n_right_31551);})()>0.0);
(void)((this->_n_H_31420=(d::truth(_n_up_31497)?std::optional<double>(([&](){auto _n_argument_31558=((-d::number(ascii::PI))/2.0);auto _n_argument_31559=d::minimum({(ascii::PI/2.0),_n_h_31495});return d::maximum({_n_argument_31558,_n_argument_31559});})()):std::optional<double>{})));
(void)(this->_n_draw_31416(this->_n_H_31420));
}
d::Array<d::String,false> _n_out_31498=this->_n_base_31415.slice();
auto _n_sky_31499=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_31500=_a0;
double _n_r_31501=_a1;
d::String _n_g_31502=_a2;
{
(void)(((_n_c_31500=std::floor(_n_c_31500)),(_n_r_31501=std::floor(_n_r_31501))));
if(((((d::truth((_n_c_31500>=0.0))&&d::truth((_n_c_31500<this->_n_cols_31402)))&&d::truth((_n_r_31501>=0.0)))&&d::truth((_n_r_31501<this->_n_rows_31403)))&&d::truth((d::at(_n_out_31498,((_n_r_31501*this->_n_cols_31402)+_n_c_31500))==d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_31560=_n_out_31498;auto _n_index_31561=((_n_r_31501*this->_n_cols_31402)+_n_c_31500);auto _n_value_31562=_n_g_31502;d::put(_n_array_31560,_n_index_31561,_n_value_31562);return _n_value_31562;})());
}

}
};
if(d::truth((!d::present(this->_n_H_31420)))){d::check_cancel();for(auto &&_n_item_31563:this->_n_stars_31418){d::check_cancel();auto _n_binding_31564=_n_item_31563;
double _n_c_31503=d::at(_n_binding_31564,0.0);
double _n_r_31504=d::at(_n_binding_31564,1.0);
double _n_ph_31505=d::at(_n_binding_31564,2.0);
(void)(([&](){auto _n_argument_31565=_n_c_31503;auto _n_argument_31566=_n_r_31504;auto _n_argument_31567=(d::truth((std::sin(((_n_t_31490*1.4)+_n_ph_31505))>0.5))?d::String(u"+"):d::String(u"·"));return _n_sky_31499(_n_argument_31565,_n_argument_31566,_n_argument_31567);})());
}
}else {d::check_cancel();double _n_x_31506=(_n_CX_31393-(24.0*std::sin(d::read(this->_n_H_31420))));
double _n_y_31507=(1.5+(4.0*(1.0-std::cos(d::read(this->_n_H_31420)))));
(void)(((_n_sky_31499(_n_x_31506,_n_y_31507,d::String(u"O")),_n_sky_31499((_n_x_31506-1.0),_n_y_31507,d::String(u"("))),_n_sky_31499((_n_x_31506+1.0),_n_y_31507,d::String(u")"))));
double _n_step_31508=d::mod(std::floor((_n_t_31490/0.45)),4.0);
d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false> _n_rays_31509=d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false>{d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(0.0,(-d::number(1.0)),d::String(u"|")),std::make_shared<std::tuple<double,double,d::String>>(0.0,1.0,d::String(u"|")),std::make_shared<std::tuple<double,double,d::String>>((-d::number(3.0)),0.0,d::String(u"-")),std::make_shared<std::tuple<double,double,d::String>>(3.0,0.0,d::String(u"-"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>((-d::number(2.0)),(-d::number(1.0)),d::String(u"\\")),std::make_shared<std::tuple<double,double,d::String>>(2.0,(-d::number(1.0)),d::String(u"/")),std::make_shared<std::tuple<double,double,d::String>>((-d::number(2.0)),1.0,d::String(u"/")),std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,d::String(u"\\"))}};
for(auto &&_n_item_31568:(d::truth((_n_step_31508==0.0))?d::at(_n_rays_31509,0.0):(d::truth((_n_step_31508==2.0))?d::at(_n_rays_31509,1.0):([&](){d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_array_31569;for(const auto &_v:d::at(_n_rays_31509,0.0))_n_array_31569.push(_v);for(const auto &_v:d::at(_n_rays_31509,1.0))_n_array_31569.push(_v);return _n_array_31569;})()))){d::check_cancel();auto _n_binding_31570=_n_item_31568;
double _n_dx_31510=std::get<0>(*_n_binding_31570);
double _n_dy_31511=std::get<1>(*_n_binding_31570);
d::String _n_g_31512=std::get<2>(*_n_binding_31570);
(void)(_n_sky_31499((_n_x_31506+_n_dx_31510),(_n_y_31507+_n_dy_31511),_n_g_31512));
}
}
d::Array<d::String,false> _n_lines_31513=d::Array<d::String,false>{};
{double _n_r_31514=0.0;
for(;d::truth((_n_r_31514<this->_n_rows_31403));(void)((_n_r_31514++))){d::check_cancel();(void)(_n_lines_31513.push(d::join(_n_out_31498.slice((_n_r_31514*this->_n_cols_31402),((_n_r_31514+1.0)*this->_n_cols_31402)),d::String(u""))));
}}
return d::join(_n_lines_31513,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sundial").cols)*ascii::catalog_meta("sundial").rows);auto _env=std::make_shared<_n_Record_31515>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sundial_meta(){return catalog_meta("sundial");}
std::unique_ptr<Piece> make_sundial(const AsciiPieceOptions &o){return std::make_unique<Native_sundial>(o);}
}
