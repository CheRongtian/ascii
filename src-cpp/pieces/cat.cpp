// Direct, statically typed C++ from src/pieces/cat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_4093;
struct _n_Record_4146;
struct _n_Record_4093{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_4093> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4093>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_4146{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_4146> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4146>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_4093> _n_meta_4092=[](){return ([&](){auto _n_object_4149=std::make_shared<_n_Record_4093>();_n_object_4149->_p_name=d::String(u"cat");_n_object_4149->_p_category=d::String(u"creatures");_n_object_4149->_p_note=d::String(u"a tabby asleep on its paws, breathing slowly");_n_object_4149->_p_cols=56.0;_n_object_4149->_p_rows=15.0;_n_object_4149->_p_fps=15.0;return _n_object_4149;})();}();
d::Array<d::String,false> _n_CAT_4094=[](){return d::Array<d::String,false>{d::String(u""),d::String(u""),d::String(u""),d::String(u"                                    /\\      /\\"),d::String(u"                                   /  `----'  \\"),d::String(u"                                  /            \\"),d::String(u"                                 |  `-'    `-'  |"),d::String(u"                                 |       v      |"),d::String(u"                                  \\    `-'-'   /"),d::String(u"       |          _.--._           `-._____.-'"),d::String(u"        \\       .'      `.         _(__)  (__)_"),d::String(u"         `.   /          \\_______.'            `."),d::String(u"      `-._ `-(______.---.___________________________)"),d::String(u"          `---'")};}();
d::Array<d::Array<d::String,false>,false> _n_BACK_4095=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u""),d::String(u"               _..-------.._"),d::String(u"           _.-'   )   )   ) `-."),d::String(u"         .'     )   )   )   )  `-"),d::String(u"        /      )   )   )   )"),d::String(u"       |")},d::Array<d::String,false>{d::String(u"               ____________"),d::String(u"            _.-'            `-._"),d::String(u"          .'      )   )   )     `-"),d::String(u"         /      )   )   )   )"),d::String(u"        |      )   )   )   )"),d::String(u"       |")},d::Array<d::String,false>{d::String(u"              _..--------.._"),d::String(u"          _.-'    )   )   ) `-._"),d::String(u"        .'      )   )   )   )   `-"),d::String(u"       /       )   )   )   )"),d::String(u"       |"),d::String(u"       |")}};}();
d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false> _n_TIP_4096=[](){return d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false>{d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(10.0,3.0,d::String(u"_")),std::make_shared<std::tuple<double,double,d::String>>(11.0,2.0,d::String(u"( `.")),std::make_shared<std::tuple<double,double,d::String>>(12.0,3.0,d::String(u"`.")),std::make_shared<std::tuple<double,double,d::String>>(13.0,5.0,d::String(u"`-.__"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(9.0,2.0,d::String(u".-.")),std::make_shared<std::tuple<double,double,d::String>>(10.0,1.0,d::String(u"( ,'")),std::make_shared<std::tuple<double,double,d::String>>(11.0,2.0,d::String(u"\\ `.")),std::make_shared<std::tuple<double,double,d::String>>(12.0,3.0,d::String(u"`.")),std::make_shared<std::tuple<double,double,d::String>>(13.0,5.0,d::String(u"`-.__"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(7.0,2.0,d::String(u".-.")),std::make_shared<std::tuple<double,double,d::String>>(8.0,1.0,d::String(u"/ ,'")),std::make_shared<std::tuple<double,double,d::String>>(9.0,1.0,d::String(u"| |")),std::make_shared<std::tuple<double,double,d::String>>(10.0,1.0,d::String(u"\\ \\")),std::make_shared<std::tuple<double,double,d::String>>(11.0,2.0,d::String(u"\\ `.")),std::make_shared<std::tuple<double,double,d::String>>(12.0,3.0,d::String(u"`.")),std::make_shared<std::tuple<double,double,d::String>>(13.0,5.0,d::String(u"`-.__"))}};}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_EAR_BACK_4097=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(3.0,44.0,d::String(u"  _")),std::make_shared<std::tuple<double,double,d::String>>(4.0,43.0,d::String(u".-' \\"))};}();
const double _n_LOOP_4098=[](){return 16.0;}();
const double _n_BREATH_4099=[](){return 4.0;}();
d::Array<d::Array<double,false>,false> _n_FLICK_4100=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.9,3.4},d::Array<double,false>{10.4,11.6}};}();
d::Array<d::Array<double,false>,false> _n_TWITCH_4101=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.5,4.8},d::Array<double,false>{4.95,5.3},d::Array<double,false>{12.8,13.1}};}();
const double _n_Z_EVERY_4102=[](){return 1.6;}();
const double _n_Z_LIFE_4103=[](){return 3.2;}();

struct Native_cat final:ascii::Piece{
double _n_cols_4104{};
double _n_rows_4105{};
d::Array<d::Array<d::String,false>,false> _n_art_4106{};
std::function<d::String(double,std::shared_ptr<_n_Record_4146>)> _render;
bool _n_within_4107(double _a0,d::Array<d::Array<double,false>,false> _a1){double _n_u_4110=_a0;
d::Array<d::Array<double,false>,false> _n_spans_4111=_a1;
return d::some(_n_spans_4111,[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_4169=_a0;
double _n_a_4112=d::at(_n_binding_4169,0.0);
double _n_b_4113=d::at(_n_binding_4169,1.0);
return ([&]()->bool{auto _n_logical_4170=(_n_u_4110>=_n_a_4112);return d::truth(_n_logical_4170)?(_n_u_4110<_n_b_4113):_n_logical_4170;})();});}

explicit Native_cat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_4150=_n_meta_4092;
this->_n_cols_4104=_n_binding_4150->_p_cols;
this->_n_rows_4105=_n_binding_4150->_p_rows;
this->_n_art_4106=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_4105,[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_4109=_a1;
return d::split(d::padEnd(([&]()->d::String{auto _n_logical_4151=d::at(_n_CAT_4094,_n_r_4109);return d::truth(_n_logical_4151)?_n_logical_4151:d::String(u"");})(),this->_n_cols_4104),d::String(u""));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_4146> _a1) mutable ->d::String{double _n_t_4114=_a0;
{
double _n_u_4115=d::mod((d::mod(_n_t_4114,_n_LOOP_4098)+_n_LOOP_4098),_n_LOOP_4098);
d::Array<d::Array<d::String,false>,false> _n_g_4116=d::map(this->_n_art_4106,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_4117=_a0;
return _n_row_4117.slice();});
auto _n_put_4118=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_r_4119=_a0;
double _n_c_4120=_a1;
d::String _n_s_4121=_a2;
d::forEach(([&](){d::Array<d::String,false> _n_array_4152;for(const auto &_v:_n_s_4121)_n_array_4152.push(_v);return _n_array_4152;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_4122=_a0;
double _n_i_4123=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_4153=([&]()->bool{auto _n_logical_4157=(_n_ch_4122!=d::String(u" "));return d::truth(_n_logical_4157)?((_n_c_4120+_n_i_4123)<this->_n_cols_4104):_n_logical_4157;})();return d::truth(_n_logical_4153)?std::variant<d::String,bool>(([&](){auto&& _n_array_4154=d::at(_n_g_4116,_n_r_4119);auto _n_index_4155=(_n_c_4120+_n_i_4123);auto _n_value_4156=_n_ch_4122;d::put(_n_array_4154,_n_index_4155,_n_value_4156);return _n_value_4156;})()):std::variant<d::String,bool>(_n_logical_4153);})();});};
double _n_p_4124=(d::mod((_n_u_4115+0.4),_n_BREATH_4099)/_n_BREATH_4099);
double _n_rise_4125=(d::truth((_n_p_4124<0.35))?std::pow(std::sin(((ascii::PI/2.0)*(_n_p_4124/0.35))),2.0):(d::truth((_n_p_4124<0.8))?std::pow(std::cos(((ascii::PI/2.0)*((_n_p_4124-0.35)/0.45))),2.0):0.0));
(void)(d::forEach(d::at(_n_BACK_4095,(d::truth((_n_rise_4125<0.3))?0.0:(d::truth((_n_rise_4125<0.75))?1.0:2.0))),[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_4126=_a0;
double _n_i_4127=_a1;
_n_put_4118((3.0+_n_i_4127),0.0,_n_line_4126);}));
std::optional<d::Array<double,false>> _n_fl_4128=d::find(_n_FLICK_4100,[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_4158=_a0;
double _n_a_4129=d::at(_n_binding_4158,0.0);
double _n_b_4130=d::at(_n_binding_4158,1.0);
return ([&]()->bool{auto _n_logical_4159=(_n_u_4115>=_n_a_4129);return d::truth(_n_logical_4159)?(_n_u_4115<_n_b_4130):_n_logical_4159;})();});
double _n_up_4131=(d::truth(_n_fl_4128)?std::sin(((ascii::PI*(_n_u_4115-d::at(d::read(_n_fl_4128),0.0)))/(d::at(d::read(_n_fl_4128),1.0)-d::at(d::read(_n_fl_4128),0.0)))):0.0);
(void)(d::forEach(d::at(_n_TIP_4096,(d::truth((_n_up_4131>0.7))?2.0:(d::truth((_n_up_4131>0.25))?1.0:0.0))),[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0) mutable ->void{auto _n_binding_4160=_a0;
double _n_r_4132=std::get<0>(*_n_binding_4160);
double _n_c_4133=std::get<1>(*_n_binding_4160);
d::String _n_s_4134=std::get<2>(*_n_binding_4160);
_n_put_4118(_n_r_4132,_n_c_4133,_n_s_4134);}));
if(d::truth(this->_n_within_4107(_n_u_4115,_n_TWITCH_4101))){d::check_cancel();(void)(d::forEach(_n_EAR_BACK_4097,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0) mutable ->void{auto _n_binding_4161=_a0;
double _n_r_4135=std::get<0>(*_n_binding_4161);
double _n_c_4136=std::get<1>(*_n_binding_4161);
d::String _n_s_4137=std::get<2>(*_n_binding_4161);
d::forEach(([&](){d::Array<d::String,false> _n_array_4162;for(const auto &_v:_n_s_4137)_n_array_4162.push(_v);return _n_array_4162;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_4138=_a0;
double _n_i_4139=_a1;
return ([&](){auto&& _n_array_4163=d::at(_n_g_4116,_n_r_4135);auto _n_index_4164=(_n_c_4136+_n_i_4139);auto _n_value_4165=_n_ch_4138;d::put(_n_array_4163,_n_index_4164,_n_value_4165);return _n_value_4165;})();});}));
}
{double _n_k_4140=(-d::number(2.0));
for(;d::truth((_n_k_4140<=(_n_LOOP_4098/_n_Z_EVERY_4102)));(void)((_n_k_4140++))){d::check_cancel();double _n_age_4141=(_n_u_4115-(_n_k_4140*_n_Z_EVERY_4102));
if(((d::truth((_n_age_4141<0.0))||d::truth((_n_age_4141>=_n_Z_LIFE_4103)))||d::truth(this->_n_within_4107(d::mod((d::mod((_n_k_4140*_n_Z_EVERY_4102),_n_LOOP_4098)+_n_LOOP_4098),_n_LOOP_4098),_n_TWITCH_4101)))){d::check_cancel();continue;
}
double _n_f_4142=(_n_age_4141/_n_Z_LIFE_4103);
double _n_c_4143=std::floor(((48.5+(_n_f_4142*4.0))+(std::sin(((_n_age_4141*2.6)+_n_k_4140))*0.7)));
double _n_r_4144=std::floor((3.7-(_n_f_4142*3.7)));
if(((d::truth((_n_r_4144>=0.0))&&d::truth((_n_c_4143<this->_n_cols_4104)))&&d::truth((d::at(d::at(_n_g_4116,_n_r_4144),_n_c_4143)==d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_4166=d::at(_n_g_4116,_n_r_4144);auto _n_index_4167=_n_c_4143;auto _n_value_4168=(d::truth((_n_f_4142<0.5))?d::String(u"z"):d::String(u"Z"));d::put(_n_array_4166,_n_index_4167,_n_value_4168);return _n_value_4168;})());
}
}}
return d::join(d::map(_n_g_4116,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_4145=_a0;
return d::join(_n_row_4145,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("cat").cols)*ascii::catalog_meta("cat").rows);auto _env=std::make_shared<_n_Record_4146>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &cat_meta(){return catalog_meta("cat");}
std::unique_ptr<Piece> make_cat(const AsciiPieceOptions &o){return std::make_unique<Native_cat>(o);}
}
