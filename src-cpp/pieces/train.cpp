// Direct, statically typed C++ from src/pieces/train.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34447;
struct _n_Record_34449;
struct _n_Record_34543;
struct _n_Record_34447{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34447> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34447>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_34449{
d::Array<d::String,false> _p_raw{};
static std::shared_ptr<_n_Record_34449> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34449>();out->_p_raw=d::decode<d::Array<d::String,false>>(j["raw"]);return out;}
};
struct _n_Record_34543{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34543> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34543>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_34465(double _a0,double _a1);
std::shared_ptr<_n_Record_34447> _n_meta_34446=[](){return ([&](){auto _n_object_34546=std::make_shared<_n_Record_34447>();_n_object_34546->_p_name=d::String(u"train");_n_object_34546->_p_category=d::String(u"objects");_n_object_34546->_p_note=d::String(u"a steam train crossing on its track, smoke puffing behind");_n_object_34546->_p_cols=76.0;_n_object_34546->_p_rows=26.0;_n_object_34546->_p_fps=15.0;return _n_object_34546;})();}();
d::Array<std::shared_ptr<std::tuple<double,double,d::Array<d::String,false>>>,false> _n_PARTS_34450=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::Array<d::String,false>>>,false>{std::make_shared<std::tuple<double,double,d::Array<d::String,false>>>(14.0,0.0,d::Array<d::String,false>{d::String(u" ________________ "),d::String(u"/________________\\ "),d::String(u"| __  __  __  __ | "),d::String(u"||  ||  ||  ||  || "),d::String(u"||__||__||__||__|| "),d::String(u"|________________|="),d::String(u" |=|=|      |=|=|  ")}),std::make_shared<std::tuple<double,double,d::Array<d::String,false>>>(15.0,19.0,d::Array<d::String,false>{d::String(u"  _.-^^^^-._  "),d::String(u" |^^^^^^^^^^| "),d::String(u" |          | "),d::String(u" |          | "),d::String(u" |__________|="),d::String(u"  |=|=||=|=|  ")}),std::make_shared<std::tuple<double,double,d::Array<d::String,false>>>(9.0,33.0,d::Array<d::String,false>{d::String(u"                           _____ "),d::String(u"                           \\   / "),d::String(u" _________      .-.  _      | |  "),d::String(u" \\_______/_____/   \\| |_____| |__[]"),d::String(u"  | ___ |  ||      ||      ||    \\ "),d::String(u"  ||   ||  ||      ||      ||     )"),d::String(u"  ||___||  ||      ||      ||     )"),d::String(u"  |     |__||______||______||____/ "),d::String(u"  |_____|=========================[]"),d::String(u"  | |                             |\\ "),d::String(u"  |_|                       ____  |\\\\ "),d::String(u"                           |____| |\\\\\\ "),d::String(u"                                  | \\\\\\ "),d::String(u"                                  |__\\\\\\ ")})};}();
const double _n_LEN_34451=[](){return 73.0;}();
const double _n_RAIL_34452=[](){return 23.0;}();
const double _n_SPEED_34453=[](){return 8.0;}();
d::Array<double,false> _n_DRIVE_34454=[](){return d::Array<double,false>{42.0,52.0};}();
d::Array<double,false> _n_SMALL_34455=[](){return d::Array<double,false>{3.0,6.0,12.0,15.0,22.0,25.0,28.0,31.0};}();
const double _n_CROSS_34456=[](){return 58.0;}();
const double _n_CYL_34457=[](){return 60.0;}();
const double _n_STACK_34458=[](){return 62.0;}();
const double _n_RIM_34459=[](){return 2.5;}();
const double _n_LIFE_34460=[](){return 5.5;}();
const double _n_WIND_34461=[](){return 2.4;}();
const d::String _n_SMOKE_34462=[](){return d::String(u" .:-=+*");}();
d::Array<d::String,false> _n_WHEEL_34463=[](){return d::Array<d::String,false>{d::String(u"  .---.  "),d::String(u" /     \\ "),d::String(u"|  (o)  |"),d::String(u" \\     / "),d::String(u"  '---'  ")};}();
d::Array<d::Array<d::String,false>,false> _n_SPOKES_34464=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"    |    "),d::String(u" --   -- "),d::String(u"    |    ")},d::Array<d::String,false>{d::String(u"   \\ /   "),d::String(u"         "),d::String(u"   / \\   ")}};}();
double _n_hash_34465(double _a0,double _a1){double _n_x_34478=_a0;
double _n_y_34479=_a1;
{
double _n_h_34480=([&](){auto _n_left_34547=d::imul(_n_x_34478,668265261.0);auto _n_right_34548=d::imul(_n_y_34479,374761393.0);return double(d::i32(_n_left_34547)^d::i32(_n_right_34548));})();
(void)((_n_h_34480=d::imul(double(d::i32(_n_h_34480)^d::i32(double(d::u32(_n_h_34480)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_34480)^d::i32(double(d::u32(_n_h_34480)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_train final:ascii::Piece{
double _n_cols_34466{};
double _n_rows_34467{};
double _n_SPAN_34468{};
double _n_X0_34469{};
d::Array<d::String,false> _n_out_34470{};
double _n_OMEGA_34474{};
double _n_BEAT_34475{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_track_34476{};
d::Array<float,true> _n_dens_34477{};
std::function<d::String(double,std::shared_ptr<_n_Record_34543>)> _render;
void _n_put_34471(double _a0,double _a1,d::String _a2){double _n_r_34481=_a0;
double _n_c_34482=_a1;
d::String _n_ch_34483=_a2;
{
if((((d::truth((_n_r_34481>=0.0))&&d::truth((_n_r_34481<this->_n_rows_34467)))&&d::truth((_n_c_34482>=0.0)))&&d::truth((_n_c_34482<this->_n_cols_34466)))){d::check_cancel();(void)(([&](){auto&& _n_array_34570=this->_n_out_34470;auto _n_index_34571=((_n_r_34481*this->_n_cols_34466)+_n_c_34482);auto _n_value_34572=_n_ch_34483;d::put(_n_array_34570,_n_index_34571,_n_value_34572);return _n_value_34572;})());
}

}
}

void _n_text_34472(double _a0,double _a1,d::String _a2){double _n_r_34484=_a0;
double _n_c_34485=_a1;
d::String _n_s_34486=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_34573;for(const auto &_v:_n_s_34486)_n_array_34573.push(_v);return _n_array_34573;})(),[&]( d::String _a0,double _a1) mutable ->std::optional<bool>{d::String _n_ch_34487=_a0;
double _n_i_34488=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_34574=(_n_ch_34487!=d::String(u" "));return d::truth(_n_logical_34574)?(this->_n_put_34471(_n_r_34484,(_n_c_34485+_n_i_34488),_n_ch_34487),std::optional<bool>{}):std::optional<bool>(_n_logical_34574);})();});}

double _n_left_34473(double _a0){double _n_t_34489=_a0;
return (std::floor(d::mod((d::mod((this->_n_X0_34469+(_n_SPEED_34453*_n_t_34489)),this->_n_SPAN_34468)+this->_n_SPAN_34468),this->_n_SPAN_34468))-_n_LEN_34451);}

explicit Native_train(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34549=_n_meta_34446;
this->_n_cols_34466=_n_binding_34549->_p_cols;
this->_n_rows_34467=_n_binding_34549->_p_rows;
this->_n_SPAN_34468=((this->_n_cols_34466+_n_LEN_34451)+1.0);
this->_n_X0_34469=(_n_LEN_34451-16.0);
this->_n_out_34470=d::Array<d::String,false>(size_t((this->_n_cols_34466*this->_n_rows_34467)));
this->_n_OMEGA_34474=(_n_SPEED_34453/(2.0*_n_RIM_34459));
this->_n_BEAT_34475=((ascii::PI/2.0)/this->_n_OMEGA_34474);
this->_n_track_34476=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_c_34490=0.0;
for(;d::truth((_n_c_34490<this->_n_cols_34466));(void)((_n_c_34490++))){d::check_cancel();(void)(this->_n_track_34476.push(std::make_shared<std::tuple<double,double,d::String>>(_n_RAIL_34452,_n_c_34490,d::String(u"=")),std::make_shared<std::tuple<double,double,d::String>>((_n_RAIL_34452+1.0),_n_c_34490,(d::truth(d::mod(_n_c_34490,3.0))?d::String(u"_"):d::String(u"|")))));
double _n_h_34491=_n_hash_34465(_n_c_34490,5.0);
(void)(this->_n_track_34476.push(std::make_shared<std::tuple<double,double,d::String>>((_n_RAIL_34452+2.0),_n_c_34490,(d::truth((_n_h_34491<0.16))?d::String(u":"):(d::truth((_n_h_34491<0.34))?d::String(u","):(d::truth((_n_h_34491<0.44))?d::String(u"'"):(d::truth((_n_h_34491<0.7))?d::String(u"."):d::String(u" "))))))));
}}
this->_n_dens_34477=d::Array<float,true>(size_t((this->_n_cols_34466*this->_n_rows_34467)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_34543> _a1) mutable ->d::String{double _n_t_34492=_a0;
{
(void)(this->_n_out_34470.fill(d::String(u" ")));
double _n_ox_34493=this->_n_left_34473(_n_t_34492);
(void)(this->_n_dens_34477.fill(0.0));
{double _n_k_34494=std::ceil(((_n_t_34492-_n_LIFE_34460)/this->_n_BEAT_34475));
for(;d::truth(((_n_k_34494*this->_n_BEAT_34475)<=_n_t_34492));(void)((_n_k_34494++))){d::check_cancel();double _n_age_34495=(_n_t_34492-(_n_k_34494*this->_n_BEAT_34475));
double _n_u_34496=(_n_age_34495/_n_LIFE_34460);
double _n_x_34497=([&](){auto _n_left_34550=((this->_n_left_34473((_n_k_34494*this->_n_BEAT_34475))+_n_STACK_34458)-(_n_WIND_34461*_n_age_34495));auto _n_right_34551=(0.8*std::sin((_n_k_34494*1.7)));return (_n_left_34550+_n_right_34551);})();
double _n_y_34498=([&](){auto _n_left_34552=(8.4-(7.2*(1.0-std::exp(((-d::number(_n_age_34495))/2.0)))));auto _n_right_34553=(0.5*std::sin((_n_k_34494*2.9)));return (_n_left_34552+_n_right_34553);})();
double _n_rad_34499=(1.5+(0.75*std::pow(_n_age_34495,0.8)));
double _n_w_34500=std::pow((1.0-_n_u_34496),1.2);
{double _n_r_34501=std::floor((_n_y_34498-_n_rad_34499));
for(;d::truth((_n_r_34501<=(_n_y_34498+_n_rad_34499)));(void)((_n_r_34501++))){d::check_cancel();{double _n_c_34502=std::floor((_n_x_34497-(2.0*_n_rad_34499)));
for(;d::truth((_n_c_34502<=(_n_x_34497+(2.0*_n_rad_34499))));(void)((_n_c_34502++))){d::check_cancel();if((((d::truth((_n_r_34501<0.0))||d::truth((_n_r_34501>=this->_n_rows_34467)))||d::truth((_n_c_34502<0.0)))||d::truth((_n_c_34502>=this->_n_cols_34466)))){d::check_cancel();continue;
}
double _n_dx_34503=((((_n_c_34502+0.5)-_n_x_34497)/2.0)/_n_rad_34499);
double _n_dy_34504=(((_n_r_34501+0.5)-_n_y_34498)/_n_rad_34499);
double _n_q_34505=((_n_dx_34503*_n_dx_34503)+(_n_dy_34504*_n_dy_34504));
if(d::truth((_n_q_34505>=1.0))){d::check_cancel();continue;
}
double _n_v_34506=((_n_w_34500*std::sqrt((1.0-_n_q_34505)))*((0.6-(0.4*_n_dy_34504))-(0.1*_n_dx_34503)));
double _n_j_34507=((_n_r_34501*this->_n_cols_34466)+_n_c_34502);
if(d::truth((_n_v_34506>d::at(this->_n_dens_34477,_n_j_34507)))){d::check_cancel();(void)(([&](){auto&& _n_array_34554=this->_n_dens_34477;auto _n_index_34555=_n_j_34507;auto _n_value_34556=_n_v_34506;d::put(_n_array_34554,_n_index_34555,_n_value_34556);return _n_value_34556;})());
}
}}
}}
}}
{double _n_k_34508=0.0;
for(;d::truth((_n_k_34508<(this->_n_cols_34466*this->_n_rows_34467)));(void)((_n_k_34508++))){d::check_cancel();double _n_v_34509=d::at(this->_n_dens_34477,_n_k_34508);
if(d::truth((_n_v_34509>0.08))){d::check_cancel();(void)(([&](){auto&& _n_array_34557=this->_n_out_34470;auto _n_index_34558=_n_k_34508;auto _n_value_34559=d::at(_n_SMOKE_34462,([&](){auto _n_argument_34560=(double(_n_SMOKE_34462.size())-1.0);auto _n_argument_34561=std::ceil((_n_v_34509*7.0));return d::minimum({_n_argument_34560,_n_argument_34561});})());d::put(_n_array_34557,_n_index_34558,_n_value_34559);return _n_value_34559;})());
}
}}
for(auto &&_n_item_34562:this->_n_track_34476){d::check_cancel();auto _n_binding_34563=_n_item_34562;
double _n_r_34510=std::get<0>(*_n_binding_34563);
double _n_c_34511=std::get<1>(*_n_binding_34563);
d::String _n_ch_34512=std::get<2>(*_n_binding_34563);
(void)(this->_n_put_34471(_n_r_34510,_n_c_34511,_n_ch_34512));
}
for(auto &&_n_item_34564:_n_PARTS_34450){d::check_cancel();auto _n_binding_34565=_n_item_34564;
double _n_r0_34513=std::get<0>(*_n_binding_34565);
double _n_c0_34514=std::get<1>(*_n_binding_34565);
d::Array<d::String,false> _n_lines_34515=std::get<2>(*_n_binding_34565);
(void)(d::forEach(_n_lines_34515,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_34516=_a0;
double _n_i_34517=_a1;
this->_n_text_34472((_n_r0_34513+_n_i_34517),(_n_ox_34493+_n_c0_34514),_n_s_34516);}));
}
double _n_a_34518=(this->_n_OMEGA_34474*_n_t_34492);
double _n_eighth_34519=d::mod(std::floor((_n_a_34518/(ascii::PI/4.0))),2.0);
for(auto &&_n_item_34566:_n_DRIVE_34454){d::check_cancel();double _n_c_34520=_n_item_34566;
{
(void)(d::forEach(_n_WHEEL_34463,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_34521=_a0;
double _n_i_34522=_a1;
this->_n_text_34472(((_n_RAIL_34452-5.0)+_n_i_34522),((_n_ox_34493+_n_c_34520)-4.0),_n_s_34521);}));
(void)(d::forEach(d::at(_n_SPOKES_34464,_n_eighth_34519),[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_34523=_a0;
double _n_i_34524=_a1;
this->_n_text_34472(((_n_RAIL_34452-4.0)+_n_i_34524),((_n_ox_34493+_n_c_34520)-4.0),_n_s_34523);}));

}
}
double _n_roll_34525=d::mod(std::floor(((_n_SPEED_34453*_n_t_34492)/1.4)),2.0);
for(auto &&_n_item_34567:_n_SMALL_34455){d::check_cancel();double _n_c_34526=_n_item_34567;
{
(void)(this->_n_text_34472((_n_RAIL_34452-2.0),((_n_ox_34493+_n_c_34526)-1.0),d::String(u".-.")));
(void)(this->_n_text_34472((_n_RAIL_34452-1.0),((_n_ox_34493+_n_c_34526)-1.0),(d::truth(_n_roll_34525)?d::String(u"(+)"):d::String(u"(x)"))));

}
}
double _n_hub_34527=(_n_RAIL_34452-3.0);
double _n_dr_34528=(-d::number(d::round((1.2*std::sin(_n_a_34518)))));
double _n_dc_34529=d::round(((d::truth(_n_dr_34528)?2.4:3.0)*std::cos(_n_a_34518)));
double _n_pr_34530=(_n_hub_34527+_n_dr_34528);
auto _n_free_34531=[&]( double _a0,double _a1) mutable ->bool{double _n_r_34532=_a0;
double _n_c_34533=_a1;
return d::every(_n_DRIVE_34454,[&]( double _a0) mutable ->bool{double _n_d_34534=_a0;
return ([&]()->bool{auto _n_logical_34568=(std::fabs((_n_c_34533-_n_d_34534))!=(d::truth((_n_r_34532==_n_hub_34527))?4.0:3.0));return d::truth(_n_logical_34568)?([&]()->bool{auto _n_logical_34569=(_n_r_34532!=_n_hub_34527);return d::truth(_n_logical_34569)?_n_logical_34569:(std::fabs((_n_c_34533-_n_d_34534))>1.0);})():_n_logical_34568;})();});};
{double _n_c_34535=(d::at(_n_DRIVE_34454,0.0)+_n_dc_34529);
for(;d::truth((_n_c_34535<=(d::at(_n_DRIVE_34454,1.0)+_n_dc_34529)));(void)((_n_c_34535++))){d::check_cancel();if(d::truth(_n_free_34531(_n_pr_34530,_n_c_34535))){d::check_cancel();(void)(this->_n_put_34471(_n_pr_34530,(_n_ox_34493+_n_c_34535),((d::truth((_n_c_34535==(d::at(_n_DRIVE_34454,0.0)+_n_dc_34529)))||d::truth((_n_c_34535==(d::at(_n_DRIVE_34454,1.0)+_n_dc_34529))))?d::String(u"o"):d::String(u"="))));
}
}}
double _n_x0_34536=(d::at(_n_DRIVE_34454,1.0)+_n_dc_34529);
double _n_xh_34537=(_n_CROSS_34456+d::round(std::cos(_n_a_34518)));
{double _n_c_34538=(_n_x0_34536+1.0);
for(;d::truth((_n_c_34538<_n_xh_34537));(void)((_n_c_34538++))){d::check_cancel();double _n_r_34539=d::round((_n_pr_34530+(((_n_hub_34527-_n_pr_34530)*(_n_c_34538-_n_x0_34536))/(_n_xh_34537-_n_x0_34536))));
if(d::truth(_n_free_34531(_n_r_34539,_n_c_34538))){d::check_cancel();(void)(this->_n_put_34471(_n_r_34539,(_n_ox_34493+_n_c_34538),(d::truth((_n_r_34539==_n_pr_34530))?d::String(u"="):d::String(u"-"))));
}
}}
(void)(this->_n_put_34471(_n_hub_34527,(_n_ox_34493+_n_xh_34537),d::String(u"#")));
{double _n_c_34540=(_n_xh_34537+1.0);
for(;d::truth((_n_c_34540<_n_CYL_34457));(void)((_n_c_34540++))){d::check_cancel();(void)(this->_n_put_34471(_n_hub_34527,(_n_ox_34493+_n_c_34540),d::String(u"=")));
}}
d::Array<d::String,false> _n_lines_34541=d::Array<d::String,false>{};
{double _n_r_34542=0.0;
for(;d::truth((_n_r_34542<this->_n_rows_34467));(void)((_n_r_34542++))){d::check_cancel();(void)(_n_lines_34541.push(d::join(this->_n_out_34470.slice((_n_r_34542*this->_n_cols_34466),((_n_r_34542+1.0)*this->_n_cols_34466)),d::String(u""))));
}}
return d::join(_n_lines_34541,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("train").cols)*ascii::catalog_meta("train").rows);auto _env=std::make_shared<_n_Record_34543>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &train_meta(){return catalog_meta("train");}
std::unique_ptr<Piece> make_train(const AsciiPieceOptions &o){return std::make_unique<Native_train>(o);}
}
