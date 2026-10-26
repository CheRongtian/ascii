// Direct, statically typed C++ from src/pieces/cherry-blossom.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_4285;
struct _n_Record_4304;
struct _n_Record_4349;
struct _n_Record_4285{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_4285> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4285>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_4304{
double _p_t0{};
double _p_flower{};
double _p_fall{};
double _p_drag{};
double _p_spin{};
double _p_ph{};
static std::shared_ptr<_n_Record_4304> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4304>();out->_p_t0=d::decode<double>(j["t0"]);out->_p_flower=d::decode<double>(j["flower"]);out->_p_fall=d::decode<double>(j["fall"]);out->_p_drag=d::decode<double>(j["drag"]);out->_p_spin=d::decode<double>(j["spin"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_4349{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_4349> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4349>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_4294(double _a0,double _a1);
double _n_gust_4295(double _a0);
double _n_blown_4296(double _a0);
std::shared_ptr<_n_Record_4285> _n_meta_4284=[](){return ([&](){auto _n_object_4352=std::make_shared<_n_Record_4285>();_n_object_4352->_p_name=d::String(u"cherry blossom");_n_object_4352->_p_category=d::String(u"nature");_n_object_4352->_p_note=d::String(u"a flowering cherry branch shedding petals on the wind");_n_object_4352->_p_cols=64.0;_n_object_4352->_p_rows=20.0;_n_object_4352->_p_fps=15.0;return _n_object_4352;})();}();
const double _n_LOOP_4286=[](){return 24.0;}();
const double _n_GUST_4287=[](){return 12.0;}();
const double _n_BLOW_4288=[](){return 4.5;}();
const double _n_PETALS_4289=[](){return 14.0;}();
d::Array<d::String,false> _n_WOOD_4290=[](){return d::Array<d::String,false>{d::String(u""),d::String(u""),d::String(u"______"),d::String(u"      `----.___"),d::String(u"______         `---.__  |             /"),d::String(u"      `----.___       `-|.__      \\  /"),d::String(u"             | `---.___     `-.__  \\/"),d::String(u"             |         `--.__    `-.__                 /"),d::String(u"                             `-._     `--.___         /"),d::String(u"                                 \\           `---.___/"),d::String(u"                                  \\ \\                \\"),d::String(u"                                   ) )                \\"),d::String(u"                                  / /                  \\"),d::String(u"                                 / /"),d::String(u"                                ( ("),d::String(u"                                 \\ \\"),d::String(u"                                    \\_")};}();
d::Array<d::String,false> _n_OPEN_4291=[](){return d::Array<d::String,false>{d::String(u" _(_)_"),d::String(u"(_)@(_)"),d::String(u" (_)(_)")};}();
d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>,false> _n_FLOWERS_4292=[](){return d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>,false>{std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(_n_OPEN_4291,1.0,21.0,1.0,std::array<double,3>{2.0,4.0,3.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(d::Array<d::String,false>{d::String(u"    _"),d::String(u" _(_)"),d::String(u"(_)@"),d::String(u" (_)")},1.0,31.0,1.0,std::array<double,3>{3.0,1.0,3.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(d::Array<d::String,false>{d::String(u" _ _"),d::String(u"(_@_)")},2.0,37.0,2.0,std::array<double,3>{0.0,3.0,1.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(d::Array<d::String,false>{d::String(u" .-."),d::String(u"(_@_)"),d::String(u" '|'")},4.0,54.0,1.0,std::array<double,3>{0.0,1.0,3.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(d::Array<d::String,false>{d::String(u" _(_)"),d::String(u"(_)@(_)"),d::String(u"    (_)")},12.0,56.0,2.0,std::array<double,3>{0.0,1.0,4.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(_n_OPEN_4291,16.0,30.0,0.0,std::array<double,3>{2.0,1.0,3.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(d::Array<d::String,false>{d::String(u" _ _"),d::String(u"(_@_)"),d::String(u" (_)")},15.0,38.0,0.0,std::array<double,3>{2.0,1.0,3.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(d::Array<d::String,false>{d::String(u"(_)(_)"),d::String(u" (@)")},8.0,11.0,1.0,std::array<double,3>{0.0,3.0,3.0}),std::make_shared<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>>(d::Array<d::String,false>{d::String(u"o")},19.0,34.0,1.0,std::optional<std::array<double,3>>{})};}();
d::Array<d::String,false> _n_TUMBLE_4293=[](){return d::Array<d::String,false>{d::String(u"o"),d::String(u"°"),d::String(u"-"),d::String(u"~"),d::String(u"-"),d::String(u"°")};}();
double _n_hash_4294(double _a0,double _a1){double _n_a_4305=_a0;
double _n_b_4306=_a1;
{
double _n_h_4307=([&](){auto _n_left_4353=d::imul(_n_a_4305,668265261.0);auto _n_right_4354=d::imul(_n_b_4306,374761393.0);return double(d::i32(_n_left_4353)^d::i32(_n_right_4354));})();
(void)((_n_h_4307=d::imul(double(d::i32(_n_h_4307)^d::i32(double(d::u32(_n_h_4307)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_4307=d::imul(double(d::i32(_n_h_4307)^d::i32(double(d::u32(_n_h_4307)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_4307)^d::i32(double(d::u32(_n_h_4307)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_gust_4295(double _a0){double _n_t_4308=_a0;
{
double _n_x_4309=d::mod((d::mod((_n_t_4308-1.0),_n_GUST_4287)+_n_GUST_4287),_n_GUST_4287);
return (d::truth((_n_x_4309<_n_BLOW_4288))?std::pow(std::sin(((ascii::PI*_n_x_4309)/_n_BLOW_4288)),2.0):0.0);

}
}

double _n_blown_4296(double _a0){double _n_t_4310=_a0;
{
double _n_n_4311=std::floor(((_n_t_4310-1.0)/_n_GUST_4287));
double _n_x_4312=((_n_t_4310-1.0)-(_n_n_4311*_n_GUST_4287));
return (((_n_n_4311*_n_BLOW_4288)*0.5)+(d::truth((_n_x_4312<_n_BLOW_4288))?((_n_x_4312/2.0)-((_n_BLOW_4288/(2.0*ascii::PI))*std::sin((((2.0*ascii::PI)*_n_x_4312)/_n_BLOW_4288)))):(_n_BLOW_4288/2.0)));

}
}

struct Native_cherry_blossom final:ascii::Piece{
double _n_cols_4297{};
double _n_rows_4298{};
d::Array<d::Array<d::String,false>,false> _n_wood_4299{};
d::Array<double,false> _n_from_4302{};
d::Array<std::shared_ptr<_n_Record_4304>,false> _n_petals_4303{};
std::function<d::String(double,std::shared_ptr<_n_Record_4349>)> _render;
bool _n_inside_4300(double _a0,double _a1){double _n_r_4315=_a0;
double _n_c_4316=_a1;
return ([&]()->bool{auto _n_logical_4384=([&]()->bool{auto _n_logical_4385=([&]()->bool{auto _n_logical_4386=(_n_r_4315>=0.0);return d::truth(_n_logical_4386)?(_n_r_4315<this->_n_rows_4298):_n_logical_4386;})();return d::truth(_n_logical_4385)?(_n_c_4316>=0.0):_n_logical_4385;})();return d::truth(_n_logical_4384)?(_n_c_4316<this->_n_cols_4297):_n_logical_4384;})();}

double _n_shake_4301(double _a0,double _a1){double _n_k_4317=_a0;
double _n_t_4318=_a1;
{
double _n_flex_4319=std::get<3>(*d::at(_n_FLOWERS_4292,_n_k_4317));
return d::round(([&](){auto _n_argument_4387=_n_flex_4319;auto _n_argument_4388=([&](){auto _n_left_4389=(_n_flex_4319*_n_gust_4295(_n_t_4318));auto _n_right_4390=(0.8+(0.35*std::sin(((_n_t_4318*8.5)+(_n_k_4317*2.3)))));return (_n_left_4389*_n_right_4390);})();return d::minimum({_n_argument_4387,_n_argument_4388});})());

}
}

explicit Native_cherry_blossom(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_4355=_n_meta_4284;
this->_n_cols_4297=_n_binding_4355->_p_cols;
this->_n_rows_4298=_n_binding_4355->_p_rows;
this->_n_wood_4299=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_4298,[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_4314=_a1;
return d::split(d::padEnd(([&]()->d::String{auto _n_logical_4356=d::at(_n_WOOD_4290,_n_r_4314);return d::truth(_n_logical_4356)?_n_logical_4356:d::String(u"");})(),this->_n_cols_4297),d::String(u""));}));
this->_n_from_4302=d::Array<double,false>{0.0,1.0,3.0,2.0,7.0,0.0,4.0,1.0,3.0,7.0,2.0,0.0,5.0,6.0};
this->_n_petals_4303=d::Array<std::shared_ptr<_n_Record_4304>,false>(d::from(_n_PETALS_4289,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_4304>{double _n_i_4321=_a1;
return ([&](){auto _n_object_4359=std::make_shared<_n_Record_4304>();_n_object_4359->_p_t0=(d::truth(d::mod(_n_i_4321,2.0))?([&](){auto _n_left_4360=((d::mod(std::floor((_n_i_4321/2.0)),2.0)*_n_GUST_4287)+1.2);auto _n_right_4361=(_n_hash_4294(_n_i_4321,2.0)*2.2);return (_n_left_4360+_n_right_4361);})():(_n_hash_4294(_n_i_4321,1.0)*_n_LOOP_4286));_n_object_4359->_p_flower=d::at(this->_n_from_4302,d::mod(_n_i_4321,double(this->_n_from_4302.size())));_n_object_4359->_p_fall=(0.42+(_n_hash_4294(_n_i_4321,5.0)*0.22));_n_object_4359->_p_drag=(0.8+(_n_hash_4294(_n_i_4321,6.0)*0.5));_n_object_4359->_p_spin=(1.2+(_n_hash_4294(_n_i_4321,8.0)*0.8));_n_object_4359->_p_ph=(_n_hash_4294(_n_i_4321,9.0)*6.3);return _n_object_4359;})();}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_4349> _a1) mutable ->d::String{double _n_t_4322=_a0;
{
double _n_u_4323=d::mod((d::mod(_n_t_4322,_n_LOOP_4286)+_n_LOOP_4286),_n_LOOP_4286);
d::Array<d::Array<d::String,false>,false> _n_g_4324=d::map(this->_n_wood_4299,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_4325=_a0;
return _n_row_4325.slice();});
d::Set<double> _n_loose_4326=d::Set<double>();
for(auto &&_n_item_4362:this->_n_petals_4303){d::check_cancel();std::shared_ptr<_n_Record_4304> _n_p_4327=_n_item_4362;
if(d::truth((d::mod(((_n_u_4323-_n_p_4327->_p_t0)+_n_LOOP_4286),_n_LOOP_4286)<3.0))){d::check_cancel();(void)(_n_loose_4326.add(_n_p_4327->_p_flower));
}
}
(void)(d::forEach(_n_FLOWERS_4292,[&]( std::shared_ptr<std::tuple<d::Array<d::String,false>,double,double,double,std::optional<std::array<double,3>>>> _a0,double _a1) mutable ->void{auto _n_binding_4363=_a0;
d::Array<d::String,false> _n_art_4328=std::get<0>(*_n_binding_4363);
double _n_r0_4329=std::get<1>(*_n_binding_4363);
double _n_c0_4330=std::get<2>(*_n_binding_4363);
std::optional<std::array<double,3>> _n_slot_4331=std::get<4>(*_n_binding_4363);
double _n_k_4332=_a1;
{
double _n_dc_4333=this->_n_shake_4301(_n_k_4332,_n_t_4322);
(void)(d::forEach(_n_art_4328,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_4334=_a0;
double _n_i_4335=_a1;
{
{double _n_j_4336=d::search(_n_line_4334,d::Regex(u"\\S",u""));
for(;d::truth((_n_j_4336<double(_n_line_4334.size())));(void)((_n_j_4336++))){d::check_cancel();std::optional<bool> _n_gap_4337=([&]()->std::optional<bool>{auto _n_logical_4364=([&]()->std::optional<bool>{auto _n_logical_4365=([&]()->std::optional<bool>{auto _n_logical_4366=([&]()->std::optional<std::variant<bool,std::array<double,3>>>{auto _n_logical_4368=_n_loose_4326.has(_n_k_4332);return d::truth(_n_logical_4368)?([&]()->std::optional<std::variant<bool,std::array<double,3>>>{auto _n_nullable_4369=_n_slot_4331;if(!d::present(_n_nullable_4369))return {};return std::variant<bool,std::array<double,3>>(d::read(_n_nullable_4369));})():std::optional<std::variant<bool,std::array<double,3>>>(std::variant<bool,std::array<double,3>>(_n_logical_4368));})();return d::truth(_n_logical_4366)?std::optional<bool>((_n_i_4335==d::at(d::read(_n_slot_4331),0.0))):([&]()->std::optional<bool>{auto _n_nullable_4367=_n_logical_4366;if(!d::present(_n_nullable_4367))return {};return std::get<bool>(d::read(_n_nullable_4367));})();})();return d::truth(_n_logical_4365)?std::optional<bool>((_n_j_4336>=d::at(d::read(_n_slot_4331),1.0))):_n_logical_4365;})();return d::truth(_n_logical_4364)?std::optional<bool>((_n_j_4336<(d::at(d::read(_n_slot_4331),1.0)+d::at(d::read(_n_slot_4331),2.0)))):_n_logical_4364;})();
if((d::truth(this->_n_inside_4300((_n_r0_4329+_n_i_4335),((_n_c0_4330+_n_j_4336)+_n_dc_4333)))&&d::truth((d::at(_n_line_4334,_n_j_4336)!=d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_4370=d::at(_n_g_4324,(_n_r0_4329+_n_i_4335));auto _n_index_4371=((_n_c0_4330+_n_j_4336)+_n_dc_4333);auto _n_value_4372=(d::truth(_n_gap_4337)?d::String(u" "):d::at(_n_line_4334,_n_j_4336));d::put(_n_array_4370,_n_index_4371,_n_value_4372);return _n_value_4372;})());
}
}}

}
}));

}
}));
for(auto &&_n_item_4373:this->_n_petals_4303){d::check_cancel();std::shared_ptr<_n_Record_4304> _n_p_4338=_n_item_4373;
{
auto _n_binding_4374=d::at(_n_FLOWERS_4292,_n_p_4338->_p_flower);
double _n_r0_4339=std::get<1>(*_n_binding_4374);
double _n_c0_4340=std::get<2>(*_n_binding_4374);
std::optional<std::array<double,3>> _n_slot_4341=std::get<4>(*_n_binding_4374);
{double _n_k_4342=0.0;
for(;d::truth((_n_k_4342<2.0));(void)((_n_k_4342++))){d::check_cancel();double _n_age_4343=(d::mod(((_n_u_4323-_n_p_4338->_p_t0)+_n_LOOP_4286),_n_LOOP_4286)+(_n_k_4342*_n_LOOP_4286));
double _n_x_4344=([&](){auto _n_left_4375=([&](){auto _n_left_4377=(((_n_c0_4340+d::at(d::read(_n_slot_4341),1.0))+1.0)+this->_n_shake_4301(_n_p_4338->_p_flower,(_n_t_4322-_n_age_4343)));auto _n_right_4378=(_n_p_4338->_p_drag*((0.16*_n_age_4343)+(2.2*([&](){auto _n_left_4379=_n_blown_4296(_n_t_4322);auto _n_right_4380=_n_blown_4296((_n_t_4322-_n_age_4343));return (_n_left_4379-_n_right_4380);})())));return (_n_left_4377+_n_right_4378);})();auto _n_right_4376=(1.1*std::sin(((_n_age_4343*0.9)+_n_p_4338->_p_ph)));return (_n_left_4375+_n_right_4376);})();
double _n_y_4345=((((_n_r0_4339+d::at(d::read(_n_slot_4341),0.0))+0.5)+(_n_p_4338->_p_fall*_n_age_4343))+(0.3*std::sin(((_n_age_4343*1.9)+_n_p_4338->_p_ph))));
double _n_c_4346=std::floor(_n_x_4344);
double _n_r_4347=std::floor(_n_y_4345);
if((d::truth((_n_r_4347>=this->_n_rows_4298))||d::truth((_n_c_4346>=this->_n_cols_4297)))){d::check_cancel();continue;
}
if((d::truth((!d::truth(this->_n_inside_4300(_n_r_4347,_n_c_4346))))||d::truth((d::at(d::at(_n_g_4324,_n_r_4347),_n_c_4346)!=d::String(u" "))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_4381=d::at(_n_g_4324,_n_r_4347);auto _n_index_4382=_n_c_4346;auto _n_value_4383=d::at(_n_TUMBLE_4293,d::mod(std::floor(((_n_age_4343*_n_p_4338->_p_spin)+_n_p_4338->_p_ph)),double(_n_TUMBLE_4293.size())));d::put(_n_array_4381,_n_index_4382,_n_value_4383);return _n_value_4383;})());
}}

}
}
return d::join(d::map(_n_g_4324,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_4348=_a0;
return d::join(_n_row_4348,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("cherry-blossom").cols)*ascii::catalog_meta("cherry-blossom").rows);auto _env=std::make_shared<_n_Record_4349>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &cherry_blossom_meta(){return catalog_meta("cherry-blossom");}
std::unique_ptr<Piece> make_cherry_blossom(const AsciiPieceOptions &o){return std::make_unique<Native_cherry_blossom>(o);}
}
