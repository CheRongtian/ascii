// Direct, statically typed C++ from src/pieces/train.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34448;
struct _n_Record_34450;
struct _n_Record_34544;
struct _n_Record_34448{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34448> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34448>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_34450{
d::Array<d::String,false> _p_raw{};
static std::shared_ptr<_n_Record_34450> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34450>();out->_p_raw=d::decode<d::Array<d::String,false>>(j["raw"]);return out;}
};
struct _n_Record_34544{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34544> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34544>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_34466(double _a0,double _a1);
std::shared_ptr<_n_Record_34448> _n_meta_34447=[](){return ([&](){auto _n_object_34547=std::make_shared<_n_Record_34448>();_n_object_34547->_p_name=d::String(u"train");_n_object_34547->_p_category=d::String(u"objects");_n_object_34547->_p_note=d::String(u"a steam train crossing on its track, smoke puffing behind");_n_object_34547->_p_cols=76.0;_n_object_34547->_p_rows=26.0;_n_object_34547->_p_fps=15.0;return _n_object_34547;})();}();
d::Array<std::shared_ptr<std::tuple<double,double,d::Array<d::String,false>>>,false> _n_PARTS_34451=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::Array<d::String,false>>>,false>{std::make_shared<std::tuple<double,double,d::Array<d::String,false>>>(14.0,0.0,d::Array<d::String,false>{d::String(u" ________________ "),d::String(u"/________________\\ "),d::String(u"| __  __  __  __ | "),d::String(u"||  ||  ||  ||  || "),d::String(u"||__||__||__||__|| "),d::String(u"|________________|="),d::String(u" |=|=|      |=|=|  ")}),std::make_shared<std::tuple<double,double,d::Array<d::String,false>>>(15.0,19.0,d::Array<d::String,false>{d::String(u"  _.-^^^^-._  "),d::String(u" |^^^^^^^^^^| "),d::String(u" |          | "),d::String(u" |          | "),d::String(u" |__________|="),d::String(u"  |=|=||=|=|  ")}),std::make_shared<std::tuple<double,double,d::Array<d::String,false>>>(9.0,33.0,d::Array<d::String,false>{d::String(u"                           _____ "),d::String(u"                           \\   / "),d::String(u" _________      .-.  _      | |  "),d::String(u" \\_______/_____/   \\| |_____| |__[]"),d::String(u"  | ___ |  ||      ||      ||    \\ "),d::String(u"  ||   ||  ||      ||      ||     )"),d::String(u"  ||___||  ||      ||      ||     )"),d::String(u"  |     |__||______||______||____/ "),d::String(u"  |_____|=========================[]"),d::String(u"  | |                             |\\ "),d::String(u"  |_|                       ____  |\\\\ "),d::String(u"                           |____| |\\\\\\ "),d::String(u"                                  | \\\\\\ "),d::String(u"                                  |__\\\\\\ ")})};}();
const double _n_LEN_34452=[](){return 73.0;}();
const double _n_RAIL_34453=[](){return 23.0;}();
const double _n_SPEED_34454=[](){return 8.0;}();
d::Array<double,false> _n_DRIVE_34455=[](){return d::Array<double,false>{42.0,52.0};}();
d::Array<double,false> _n_SMALL_34456=[](){return d::Array<double,false>{3.0,6.0,12.0,15.0,22.0,25.0,28.0,31.0};}();
const double _n_CROSS_34457=[](){return 58.0;}();
const double _n_CYL_34458=[](){return 60.0;}();
const double _n_STACK_34459=[](){return 62.0;}();
const double _n_RIM_34460=[](){return 2.5;}();
const double _n_LIFE_34461=[](){return 5.5;}();
const double _n_WIND_34462=[](){return 2.4;}();
const d::String _n_SMOKE_34463=[](){return d::String(u" .:-=+*");}();
d::Array<d::String,false> _n_WHEEL_34464=[](){return d::Array<d::String,false>{d::String(u"  .---.  "),d::String(u" /     \\ "),d::String(u"|  (o)  |"),d::String(u" \\     / "),d::String(u"  '---'  ")};}();
d::Array<d::Array<d::String,false>,false> _n_SPOKES_34465=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"    |    "),d::String(u" --   -- "),d::String(u"    |    ")},d::Array<d::String,false>{d::String(u"   \\ /   "),d::String(u"         "),d::String(u"   / \\   ")}};}();
double _n_hash_34466(double _a0,double _a1){double _n_x_34479=_a0;
double _n_y_34480=_a1;
{
double _n_h_34481=([&](){auto _n_left_34548=d::imul(_n_x_34479,668265261.0);auto _n_right_34549=d::imul(_n_y_34480,374761393.0);return double(d::i32(_n_left_34548)^d::i32(_n_right_34549));})();
(void)((_n_h_34481=d::imul(double(d::i32(_n_h_34481)^d::i32(double(d::u32(_n_h_34481)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_34481)^d::i32(double(d::u32(_n_h_34481)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_train final:ascii::Piece{
double _n_cols_34467{};
double _n_rows_34468{};
double _n_SPAN_34469{};
double _n_X0_34470{};
d::Array<d::String,false> _n_out_34471{};
double _n_OMEGA_34475{};
double _n_BEAT_34476{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_track_34477{};
d::Array<float,true> _n_dens_34478{};
std::function<d::String(double,std::shared_ptr<_n_Record_34544>)> _render;
void _n_put_34472(double _a0,double _a1,d::String _a2){double _n_r_34482=_a0;
double _n_c_34483=_a1;
d::String _n_ch_34484=_a2;
{
if((((d::truth((_n_r_34482>=0.0))&&d::truth((_n_r_34482<this->_n_rows_34468)))&&d::truth((_n_c_34483>=0.0)))&&d::truth((_n_c_34483<this->_n_cols_34467)))){d::check_cancel();(void)(([&](){auto&& _n_array_34571=this->_n_out_34471;auto _n_index_34572=((_n_r_34482*this->_n_cols_34467)+_n_c_34483);auto _n_value_34573=_n_ch_34484;d::put(_n_array_34571,_n_index_34572,_n_value_34573);return _n_value_34573;})());
}

}
}

void _n_text_34473(double _a0,double _a1,d::String _a2){double _n_r_34485=_a0;
double _n_c_34486=_a1;
d::String _n_s_34487=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_34574;for(const auto &_v:_n_s_34487)_n_array_34574.push(_v);return _n_array_34574;})(),[&]( d::String _a0,double _a1) mutable ->std::optional<bool>{d::String _n_ch_34488=_a0;
double _n_i_34489=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_34575=(_n_ch_34488!=d::String(u" "));return d::truth(_n_logical_34575)?(this->_n_put_34472(_n_r_34485,(_n_c_34486+_n_i_34489),_n_ch_34488),std::optional<bool>{}):std::optional<bool>(_n_logical_34575);})();});}

double _n_left_34474(double _a0){double _n_t_34490=_a0;
return (std::floor(d::mod((d::mod((this->_n_X0_34470+(_n_SPEED_34454*_n_t_34490)),this->_n_SPAN_34469)+this->_n_SPAN_34469),this->_n_SPAN_34469))-_n_LEN_34452);}

explicit Native_train(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34550=_n_meta_34447;
this->_n_cols_34467=_n_binding_34550->_p_cols;
this->_n_rows_34468=_n_binding_34550->_p_rows;
this->_n_SPAN_34469=((this->_n_cols_34467+_n_LEN_34452)+1.0);
this->_n_X0_34470=(_n_LEN_34452-16.0);
this->_n_out_34471=d::Array<d::String,false>(size_t((this->_n_cols_34467*this->_n_rows_34468)));
this->_n_OMEGA_34475=(_n_SPEED_34454/(2.0*_n_RIM_34460));
this->_n_BEAT_34476=((ascii::PI/2.0)/this->_n_OMEGA_34475);
this->_n_track_34477=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_c_34491=0.0;
for(;d::truth((_n_c_34491<this->_n_cols_34467));(void)((_n_c_34491++))){d::check_cancel();(void)(this->_n_track_34477.push(std::make_shared<std::tuple<double,double,d::String>>(_n_RAIL_34453,_n_c_34491,d::String(u"=")),std::make_shared<std::tuple<double,double,d::String>>((_n_RAIL_34453+1.0),_n_c_34491,(d::truth(d::mod(_n_c_34491,3.0))?d::String(u"_"):d::String(u"|")))));
double _n_h_34492=_n_hash_34466(_n_c_34491,5.0);
(void)(this->_n_track_34477.push(std::make_shared<std::tuple<double,double,d::String>>((_n_RAIL_34453+2.0),_n_c_34491,(d::truth((_n_h_34492<0.16))?d::String(u":"):(d::truth((_n_h_34492<0.34))?d::String(u","):(d::truth((_n_h_34492<0.44))?d::String(u"'"):(d::truth((_n_h_34492<0.7))?d::String(u"."):d::String(u" "))))))));
}}
this->_n_dens_34478=d::Array<float,true>(size_t((this->_n_cols_34467*this->_n_rows_34468)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_34544> _a1) mutable ->d::String{double _n_t_34493=_a0;
{
(void)(this->_n_out_34471.fill(d::String(u" ")));
double _n_ox_34494=this->_n_left_34474(_n_t_34493);
(void)(this->_n_dens_34478.fill(0.0));
{double _n_k_34495=std::ceil(((_n_t_34493-_n_LIFE_34461)/this->_n_BEAT_34476));
for(;d::truth(((_n_k_34495*this->_n_BEAT_34476)<=_n_t_34493));(void)((_n_k_34495++))){d::check_cancel();double _n_age_34496=(_n_t_34493-(_n_k_34495*this->_n_BEAT_34476));
double _n_u_34497=(_n_age_34496/_n_LIFE_34461);
double _n_x_34498=([&](){auto _n_left_34551=((this->_n_left_34474((_n_k_34495*this->_n_BEAT_34476))+_n_STACK_34459)-(_n_WIND_34462*_n_age_34496));auto _n_right_34552=(0.8*std::sin((_n_k_34495*1.7)));return (_n_left_34551+_n_right_34552);})();
double _n_y_34499=([&](){auto _n_left_34553=(8.4-(7.2*(1.0-std::exp(((-d::number(_n_age_34496))/2.0)))));auto _n_right_34554=(0.5*std::sin((_n_k_34495*2.9)));return (_n_left_34553+_n_right_34554);})();
double _n_rad_34500=(1.5+(0.75*std::pow(_n_age_34496,0.8)));
double _n_w_34501=std::pow((1.0-_n_u_34497),1.2);
{double _n_r_34502=std::floor((_n_y_34499-_n_rad_34500));
for(;d::truth((_n_r_34502<=(_n_y_34499+_n_rad_34500)));(void)((_n_r_34502++))){d::check_cancel();{double _n_c_34503=std::floor((_n_x_34498-(2.0*_n_rad_34500)));
for(;d::truth((_n_c_34503<=(_n_x_34498+(2.0*_n_rad_34500))));(void)((_n_c_34503++))){d::check_cancel();if((((d::truth((_n_r_34502<0.0))||d::truth((_n_r_34502>=this->_n_rows_34468)))||d::truth((_n_c_34503<0.0)))||d::truth((_n_c_34503>=this->_n_cols_34467)))){d::check_cancel();continue;
}
double _n_dx_34504=((((_n_c_34503+0.5)-_n_x_34498)/2.0)/_n_rad_34500);
double _n_dy_34505=(((_n_r_34502+0.5)-_n_y_34499)/_n_rad_34500);
double _n_q_34506=((_n_dx_34504*_n_dx_34504)+(_n_dy_34505*_n_dy_34505));
if(d::truth((_n_q_34506>=1.0))){d::check_cancel();continue;
}
double _n_v_34507=((_n_w_34501*std::sqrt((1.0-_n_q_34506)))*((0.6-(0.4*_n_dy_34505))-(0.1*_n_dx_34504)));
double _n_j_34508=((_n_r_34502*this->_n_cols_34467)+_n_c_34503);
if(d::truth((_n_v_34507>d::at(this->_n_dens_34478,_n_j_34508)))){d::check_cancel();(void)(([&](){auto&& _n_array_34555=this->_n_dens_34478;auto _n_index_34556=_n_j_34508;auto _n_value_34557=_n_v_34507;d::put(_n_array_34555,_n_index_34556,_n_value_34557);return _n_value_34557;})());
}
}}
}}
}}
{double _n_k_34509=0.0;
for(;d::truth((_n_k_34509<(this->_n_cols_34467*this->_n_rows_34468)));(void)((_n_k_34509++))){d::check_cancel();double _n_v_34510=d::at(this->_n_dens_34478,_n_k_34509);
if(d::truth((_n_v_34510>0.08))){d::check_cancel();(void)(([&](){auto&& _n_array_34558=this->_n_out_34471;auto _n_index_34559=_n_k_34509;auto _n_value_34560=d::at(_n_SMOKE_34463,([&](){auto _n_argument_34561=(double(_n_SMOKE_34463.size())-1.0);auto _n_argument_34562=std::ceil((_n_v_34510*7.0));return d::minimum({_n_argument_34561,_n_argument_34562});})());d::put(_n_array_34558,_n_index_34559,_n_value_34560);return _n_value_34560;})());
}
}}
for(auto &&_n_item_34563:this->_n_track_34477){d::check_cancel();auto _n_binding_34564=_n_item_34563;
double _n_r_34511=std::get<0>(*_n_binding_34564);
double _n_c_34512=std::get<1>(*_n_binding_34564);
d::String _n_ch_34513=std::get<2>(*_n_binding_34564);
(void)(this->_n_put_34472(_n_r_34511,_n_c_34512,_n_ch_34513));
}
for(auto &&_n_item_34565:_n_PARTS_34451){d::check_cancel();auto _n_binding_34566=_n_item_34565;
double _n_r0_34514=std::get<0>(*_n_binding_34566);
double _n_c0_34515=std::get<1>(*_n_binding_34566);
d::Array<d::String,false> _n_lines_34516=std::get<2>(*_n_binding_34566);
(void)(d::forEach(_n_lines_34516,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_34517=_a0;
double _n_i_34518=_a1;
this->_n_text_34473((_n_r0_34514+_n_i_34518),(_n_ox_34494+_n_c0_34515),_n_s_34517);}));
}
double _n_a_34519=(this->_n_OMEGA_34475*_n_t_34493);
double _n_eighth_34520=d::mod(std::floor((_n_a_34519/(ascii::PI/4.0))),2.0);
for(auto &&_n_item_34567:_n_DRIVE_34455){d::check_cancel();double _n_c_34521=_n_item_34567;
{
(void)(d::forEach(_n_WHEEL_34464,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_34522=_a0;
double _n_i_34523=_a1;
this->_n_text_34473(((_n_RAIL_34453-5.0)+_n_i_34523),((_n_ox_34494+_n_c_34521)-4.0),_n_s_34522);}));
(void)(d::forEach(d::at(_n_SPOKES_34465,_n_eighth_34520),[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_34524=_a0;
double _n_i_34525=_a1;
this->_n_text_34473(((_n_RAIL_34453-4.0)+_n_i_34525),((_n_ox_34494+_n_c_34521)-4.0),_n_s_34524);}));

}
}
double _n_roll_34526=d::mod(std::floor(((_n_SPEED_34454*_n_t_34493)/1.4)),2.0);
for(auto &&_n_item_34568:_n_SMALL_34456){d::check_cancel();double _n_c_34527=_n_item_34568;
{
(void)(this->_n_text_34473((_n_RAIL_34453-2.0),((_n_ox_34494+_n_c_34527)-1.0),d::String(u".-.")));
(void)(this->_n_text_34473((_n_RAIL_34453-1.0),((_n_ox_34494+_n_c_34527)-1.0),(d::truth(_n_roll_34526)?d::String(u"(+)"):d::String(u"(x)"))));

}
}
double _n_hub_34528=(_n_RAIL_34453-3.0);
double _n_dr_34529=(-d::number(d::round((1.2*std::sin(_n_a_34519)))));
double _n_dc_34530=d::round(((d::truth(_n_dr_34529)?2.4:3.0)*std::cos(_n_a_34519)));
double _n_pr_34531=(_n_hub_34528+_n_dr_34529);
auto _n_free_34532=[&]( double _a0,double _a1) mutable ->bool{double _n_r_34533=_a0;
double _n_c_34534=_a1;
return d::every(_n_DRIVE_34455,[&]( double _a0) mutable ->bool{double _n_d_34535=_a0;
return ([&]()->bool{auto _n_logical_34569=(std::fabs((_n_c_34534-_n_d_34535))!=(d::truth((_n_r_34533==_n_hub_34528))?4.0:3.0));return d::truth(_n_logical_34569)?([&]()->bool{auto _n_logical_34570=(_n_r_34533!=_n_hub_34528);return d::truth(_n_logical_34570)?_n_logical_34570:(std::fabs((_n_c_34534-_n_d_34535))>1.0);})():_n_logical_34569;})();});};
{double _n_c_34536=(d::at(_n_DRIVE_34455,0.0)+_n_dc_34530);
for(;d::truth((_n_c_34536<=(d::at(_n_DRIVE_34455,1.0)+_n_dc_34530)));(void)((_n_c_34536++))){d::check_cancel();if(d::truth(_n_free_34532(_n_pr_34531,_n_c_34536))){d::check_cancel();(void)(this->_n_put_34472(_n_pr_34531,(_n_ox_34494+_n_c_34536),((d::truth((_n_c_34536==(d::at(_n_DRIVE_34455,0.0)+_n_dc_34530)))||d::truth((_n_c_34536==(d::at(_n_DRIVE_34455,1.0)+_n_dc_34530))))?d::String(u"o"):d::String(u"="))));
}
}}
double _n_x0_34537=(d::at(_n_DRIVE_34455,1.0)+_n_dc_34530);
double _n_xh_34538=(_n_CROSS_34457+d::round(std::cos(_n_a_34519)));
{double _n_c_34539=(_n_x0_34537+1.0);
for(;d::truth((_n_c_34539<_n_xh_34538));(void)((_n_c_34539++))){d::check_cancel();double _n_r_34540=d::round((_n_pr_34531+(((_n_hub_34528-_n_pr_34531)*(_n_c_34539-_n_x0_34537))/(_n_xh_34538-_n_x0_34537))));
if(d::truth(_n_free_34532(_n_r_34540,_n_c_34539))){d::check_cancel();(void)(this->_n_put_34472(_n_r_34540,(_n_ox_34494+_n_c_34539),(d::truth((_n_r_34540==_n_pr_34531))?d::String(u"="):d::String(u"-"))));
}
}}
(void)(this->_n_put_34472(_n_hub_34528,(_n_ox_34494+_n_xh_34538),d::String(u"#")));
{double _n_c_34541=(_n_xh_34538+1.0);
for(;d::truth((_n_c_34541<_n_CYL_34458));(void)((_n_c_34541++))){d::check_cancel();(void)(this->_n_put_34472(_n_hub_34528,(_n_ox_34494+_n_c_34541),d::String(u"=")));
}}
d::Array<d::String,false> _n_lines_34542=d::Array<d::String,false>{};
{double _n_r_34543=0.0;
for(;d::truth((_n_r_34543<this->_n_rows_34468));(void)((_n_r_34543++))){d::check_cancel();(void)(_n_lines_34542.push(d::join(this->_n_out_34471.slice((_n_r_34543*this->_n_cols_34467),((_n_r_34543+1.0)*this->_n_cols_34467)),d::String(u""))));
}}
return d::join(_n_lines_34542,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("train").cols)*ascii::catalog_meta("train").rows);auto _env=std::make_shared<_n_Record_34544>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &train_meta(){return catalog_meta("train");}
std::unique_ptr<Piece> make_train(const AsciiPieceOptions &o){return std::make_unique<Native_train>(o);}
}
