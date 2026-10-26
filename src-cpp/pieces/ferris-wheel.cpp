// Direct, statically typed C++ from src/pieces/ferris-wheel.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_9896;
struct _n_Record_9974;
struct _n_Record_9896{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_9896> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9896>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_9974{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_9974> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9974>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_9896> _n_meta_9895=[](){return ([&](){auto _n_object_9977=std::make_shared<_n_Record_9896>();_n_object_9977->_p_name=d::String(u"ferris wheel");_n_object_9977->_p_category=d::String(u"objects");_n_object_9977->_p_note=d::String(u"a wheel turning on its a-frame, cabins hanging upright");_n_object_9977->_p_cols=64.0;_n_object_9977->_p_rows=26.0;_n_object_9977->_p_fps=10.0;return _n_object_9977;})();}();
const double _n_N_9897=[](){return 8.0;}();
const double _n_R_9898=[](){return 10.0;}();
const double _n_TURN_9899=[](){return 30.0;}();
const double _n_BULBS_9900=[](){return 24.0;}();

struct Native_ferris_wheel final:ascii::Piece{
double _n_cols_9901{};
double _n_rows_9902{};
double _n_cx_9903{};
double _n_cy_9904{};
double _n_ground_9905{};
d::Array<d::String,false> _n_out_9906{};
d::Map<double,d::Array<double,false>> _n_acc_9909{};
double _n_side_9910{};
d::Map<double,double> _n_most_9911{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_rim_9914{};
d::Map<double,d::String> _n_frame_9915{};
double _n_top_9916{};
double _n_slope_9917{};
std::function<d::String(double,std::shared_ptr<_n_Record_9974>)> _render;
void _n_put_9907(double _a0,double _a1,d::String _a2){double _n_c_9918=_a0;
double _n_r_9919=_a1;
d::String _n_g_9920=_a2;
{
(void)(((_n_c_9918=std::floor(_n_c_9918)),(_n_r_9919=std::floor(_n_r_9919))));
if((((d::truth((_n_c_9918>=0.0))&&d::truth((_n_c_9918<this->_n_cols_9901)))&&d::truth((_n_r_9919>=0.0)))&&d::truth((_n_r_9919<this->_n_rows_9902)))){d::check_cancel();(void)(([&](){auto&& _n_array_10027=this->_n_out_9906;auto _n_index_10028=((_n_r_9919*this->_n_cols_9901)+_n_c_9918);auto _n_value_10029=_n_g_9920;d::put(_n_array_10027,_n_index_10028,_n_value_10029);return _n_value_10029;})());
}

}
}

void _n_text_9908(double _a0,double _a1,d::String _a2){double _n_c_9921=_a0;
double _n_r_9922=_a1;
d::String _n_s_9923=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_10030;for(const auto &_v:_n_s_9923)_n_array_10030.push(_v);return _n_array_10030;})(),[&]( d::String _a0,double _a1) mutable ->std::optional<bool>{d::String _n_g_9924=_a0;
double _n_i_9925=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_10031=(_n_g_9924!=d::String(u" "));return d::truth(_n_logical_10031)?(this->_n_put_9907((_n_c_9921+_n_i_9925),_n_r_9922,_n_g_9924),std::optional<bool>{}):std::optional<bool>(_n_logical_10031);})();});}

double _n_phiOf_9912(d::Array<double,false> _a0){auto _n_binding_10032=_a0;
double _n_n_9935=d::at(_n_binding_10032,0.0);
double _n_c_9936=d::at(_n_binding_10032,2.0);
return ((([&](){auto _n_argument_10033=(_n_c_9936/_n_n_9935);auto _n_argument_10034=std::sqrt(d::maximum({0.0,(1.0-std::pow((_n_c_9936/_n_n_9935),2.0))}));return std::atan2(_n_argument_10033,_n_argument_10034);})()*180.0)/ascii::PI);}

double _n_id_9913(double _a0){double _n_k_9937=_a0;
return ((std::floor((_n_k_9937/this->_n_cols_9901))*2.0)+(d::truth((d::mod(_n_k_9937,this->_n_cols_9901)<this->_n_cx_9903))?0.0:1.0));}

explicit Native_ferris_wheel(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_9978=_n_meta_9895;
this->_n_cols_9901=_n_binding_9978->_p_cols;
this->_n_rows_9902=_n_binding_9978->_p_rows;
this->_n_cx_9903=32.5;
this->_n_cy_9904=11.5;
this->_n_ground_9905=(this->_n_rows_9902-1.0);
this->_n_out_9906=d::Array<d::String,false>(size_t((this->_n_cols_9901*this->_n_rows_9902)));
this->_n_acc_9909=d::Map<double,d::Array<double,false>>();
this->_n_side_9910=(_n_R_9898*0.3);
{double _n_r_9926=std::ceil(((this->_n_cy_9904-this->_n_side_9910)-0.5));
for(;d::truth(((_n_r_9926+0.5)<(this->_n_cy_9904+this->_n_side_9910)));(void)((_n_r_9926++))){d::check_cancel();double _n_w_9927=(2.0*std::sqrt(((_n_R_9898*_n_R_9898)-std::pow(((_n_r_9926+0.5)-this->_n_cy_9904),2.0))));
for(auto &&_n_item_9979:d::Array<double,false>{(this->_n_cx_9903-_n_w_9927),(this->_n_cx_9903+_n_w_9927)}){d::check_cancel();double _n_c_9928=_n_item_9979;
(void)(([&](){auto _n_argument_9980=((_n_r_9926*this->_n_cols_9901)+std::floor(_n_c_9928));auto _n_argument_9981=d::Array<double,false>{1.0,0.5,1.0,0.0};return this->_n_acc_9909.set(_n_argument_9980,_n_argument_9981);})());
}
}}
{double _n_i_9929=0.0;
for(;d::truth((_n_i_9929<2000.0));(void)((_n_i_9929++))){d::check_cancel();double _n_p_9930=(((_n_i_9929/2000.0)*2.0)*ascii::PI);
double _n_x_9931=(this->_n_cx_9903+((2.0*_n_R_9898)*std::cos(_n_p_9930)));
double _n_y_9932=(this->_n_cy_9904+(_n_R_9898*std::sin(_n_p_9930)));
if(d::truth((std::fabs(((std::floor(_n_y_9932)+0.5)-this->_n_cy_9904))<this->_n_side_9910))){d::check_cancel();continue;
}
double _n_k_9933=([&](){auto _n_left_9982=(std::floor(_n_y_9932)*this->_n_cols_9901);auto _n_right_9983=std::floor(_n_x_9931);return (_n_left_9982+_n_right_9983);})();
d::Array<double,false> _n_e_9934=([&]()->d::Array<double,false>{auto _n_logical_9984=this->_n_acc_9909.get(_n_k_9933);return d::truth(_n_logical_9984)?d::read(_n_logical_9984):d::Array<double,false>{0.0,0.0,0.0,0.0};})();
(void)((((([&](){auto&& _n_array_9985=_n_e_9934;auto _n_index_9986=0.0;auto _n_value_9987=(d::at(_n_array_9985,_n_index_9986)+1.0);d::put(_n_array_9985,_n_index_9986,_n_value_9987);return _n_value_9987;})(),([&](){auto&& _n_array_9988=_n_e_9934;auto _n_index_9989=1.0;auto _n_value_9990=(d::at(_n_array_9988,_n_index_9989)+(_n_y_9932-std::floor(_n_y_9932)));d::put(_n_array_9988,_n_index_9989,_n_value_9990);return _n_value_9990;})()),([&](){auto&& _n_array_9991=_n_e_9934;auto _n_index_9992=2.0;auto _n_value_9993=(d::at(_n_array_9991,_n_index_9992)+std::fabs(std::cos(_n_p_9930)));d::put(_n_array_9991,_n_index_9992,_n_value_9993);return _n_value_9993;})()),([&](){auto&& _n_array_9994=_n_e_9934;auto _n_index_9995=3.0;auto _n_value_9996=(d::at(_n_array_9994,_n_index_9995)+(d::truth((([&](){auto _n_left_9997=std::sin(_n_p_9930);auto _n_right_9998=std::cos(_n_p_9930);return (_n_left_9997*_n_right_9998);})()<0.0))?1.0:0.0));d::put(_n_array_9994,_n_index_9995,_n_value_9996);return _n_value_9996;})()));
(void)(this->_n_acc_9909.set(_n_k_9933,_n_e_9934));
}}
this->_n_most_9911=d::Map<double,double>();
for(auto &&_n_item_9999:this->_n_acc_9909.entries()){d::check_cancel();auto _n_binding_10000=_n_item_9999;
double _n_k_9938=std::get<0>(*_n_binding_10000);
d::Array<double,false> _n_e_9939=std::get<1>(*_n_binding_10000);
if(((d::truth((this->_n_phiOf_9912(_n_e_9939)>50.0))&&d::truth((this->_n_phiOf_9912(_n_e_9939)<=72.0)))&&d::truth((d::at(_n_e_9939,0.0)>([&]()->double{auto _n_logical_10001=([&]()->std::optional<double>{auto _n_optional_10002=this->_n_acc_9909.get(d::read(this->_n_most_9911.get(this->_n_id_9913(_n_k_9938))));if(!d::present(_n_optional_10002))return {};return std::optional<double>(d::at(d::read(_n_optional_10002),0.0));})();return d::present(_n_logical_10001)?d::read(_n_logical_10001):0.0;})())))){d::check_cancel();(void)(([&](){auto _n_argument_10003=this->_n_id_9913(_n_k_9938);auto _n_argument_10004=_n_k_9938;return this->_n_most_9911.set(_n_argument_10003,_n_argument_10004);})());
}
}
this->_n_rim_9914=d::map(([&](){d::Array<std::shared_ptr<std::tuple<double,d::Array<double,false>>>,false> _n_array_10005;for(const auto &_v:this->_n_acc_9909.entries())_n_array_10005.push(_v);return _n_array_10005;})(),[&]( std::shared_ptr<std::tuple<double,d::Array<double,false>>> _a0) mutable ->std::shared_ptr<std::tuple<double,d::String>>{auto _n_binding_10006=_a0;
double _n_k_9940=std::get<0>(*_n_binding_10006);
d::Array<double,false> _n_e_9941=std::get<1>(*_n_binding_10006);
{
auto _n_binding_10007=_n_e_9941;
double _n_n_9942=d::at(_n_binding_10007,0.0);
double _n_fy_9943=d::at(_n_binding_10007,1.0);
double _n_fall_9944=d::at(_n_binding_10007,3.0);
double _n_phi_9945=this->_n_phiOf_9912(_n_e_9941);
return std::make_shared<std::tuple<double,d::String>>(_n_k_9940,(d::truth((_n_phi_9945>72.0))?d::String(u"|"):(d::truth((d::equal(this->_n_most_9911.get(this->_n_id_9913(_n_k_9940)),_n_k_9940)))?(d::truth(((_n_fall_9944/_n_n_9942)>0.5))?d::String(u"\\"):d::String(u"/")):(d::truth(((_n_fy_9943/_n_n_9942)<0.38))?d::String(u"'"):(d::truth(((_n_fy_9943/_n_n_9942)>0.62))?(d::truth((_n_phi_9945>10.0))?d::String(u"."):d::String(u"_")):d::String(u"-"))))));

}
});
this->_n_frame_9915=d::Map<double,d::String>();
this->_n_top_9916=std::ceil(this->_n_cy_9904);
this->_n_slope_9917=0.9;
for(auto &&_n_item_10008:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_9946=_n_item_10008;
{
{double _n_r_9947=this->_n_top_9916;
for(;d::truth((_n_r_9947<this->_n_ground_9905));(void)((_n_r_9947++))){d::check_cancel();double _n_d_9948=(1.2+(this->_n_slope_9917*(_n_r_9947-this->_n_top_9916)));
double _n_a_9949=std::floor((this->_n_cx_9903+(_n_s_9946*_n_d_9948)));
double _n_b_9950=std::floor((this->_n_cx_9903+(_n_s_9946*(_n_d_9948+2.6))));
(void)(this->_n_frame_9915.set(((_n_r_9947*this->_n_cols_9901)+_n_a_9949),(d::truth((_n_s_9946<0.0))?d::String(u"/"):d::String(u"\\"))));
(void)(this->_n_frame_9915.set(((_n_r_9947*this->_n_cols_9901)+_n_b_9950),(d::truth((_n_s_9946<0.0))?d::String(u"/"):d::String(u"\\"))));
if(d::truth((d::mod((_n_r_9947-this->_n_top_9916),3.0)==2.0))){d::check_cancel();{double _n_c_9951=(d::minimum({_n_a_9949,_n_b_9950})+1.0);
for(;d::truth((_n_c_9951<d::maximum({_n_a_9949,_n_b_9950})));(void)((_n_c_9951++))){d::check_cancel();(void)(this->_n_frame_9915.set(((_n_r_9947*this->_n_cols_9901)+_n_c_9951),d::String(u"─")));
}}
}
}}

}
}
_render=[=]( double _a0,std::shared_ptr<_n_Record_9974> _a1) mutable ->d::String{double _n_t_9952=_a0;
{
double _n_a_9953=(((2.0*ascii::PI)*_n_t_9952)/_n_TURN_9899);
(void)(this->_n_out_9906.fill(d::String(u" ")));
d::Array<std::array<double,2>,false> _n_ends_9954=d::Array<std::array<double,2>,false>{};
{double _n_k_9955=0.0;
for(;d::truth((_n_k_9955<_n_N_9897));(void)((_n_k_9955++))){d::check_cancel();double _n_th_9956=(_n_a_9953+(((_n_k_9955*2.0)*ascii::PI)/_n_N_9897));
double _n_x_9957=(this->_n_cx_9903+((2.0*_n_R_9898)*std::cos(_n_th_9956)));
double _n_y_9958=(this->_n_cy_9904+(_n_R_9898*std::sin(_n_th_9956)));
{double _n_i_9959=3.0;
for(;d::truth((_n_i_9959<((2.0*_n_R_9898)-1.0)));(void)((_n_i_9959++))){d::check_cancel();(void)(([&](){auto _n_argument_10009=(this->_n_cx_9903+(_n_i_9959*std::cos(_n_th_9956)));auto _n_argument_10010=(this->_n_cy_9904+((_n_i_9959/2.0)*std::sin(_n_th_9956)));auto _n_argument_10011=d::String(u"·");return this->_n_put_9907(_n_argument_10009,_n_argument_10010,_n_argument_10011);})());
}}
(void)(_n_ends_9954.push(std::array<double,2>{_n_x_9957,_n_y_9958}));
}}
for(auto &&_n_item_10012:this->_n_rim_9914){d::check_cancel();auto _n_binding_10013=_n_item_10012;
double _n_k_9960=std::get<0>(*_n_binding_10013);
d::String _n_g_9961=std::get<1>(*_n_binding_10013);
(void)(([&](){auto&& _n_array_10014=this->_n_out_9906;auto _n_index_10015=_n_k_9960;auto _n_value_10016=_n_g_9961;d::put(_n_array_10014,_n_index_10015,_n_value_10016);return _n_value_10016;})());
}
double _n_blink_9962=d::mod(std::floor((_n_t_9952/0.6)),2.0);
{double _n_k_9963=0.0;
for(;d::truth((_n_k_9963<_n_BULBS_9900));(void)((_n_k_9963++))){d::check_cancel();if(d::truth((d::mod(_n_k_9963,(_n_BULBS_9900/_n_N_9897))==0.0))){d::check_cancel();continue;
}
double _n_th_9964=((_n_a_9953+(((_n_k_9963*2.0)*ascii::PI)/_n_BULBS_9900))+(ascii::PI/_n_BULBS_9900));
if(d::truth(d::mod((_n_k_9963+_n_blink_9962),2.0))){d::check_cancel();(void)(([&](){auto _n_argument_10017=(this->_n_cx_9903+((2.0*_n_R_9898)*std::cos(_n_th_9964)));auto _n_argument_10018=(this->_n_cy_9904+(_n_R_9898*std::sin(_n_th_9964)));auto _n_argument_10019=d::String(u"*");return this->_n_put_9907(_n_argument_10017,_n_argument_10018,_n_argument_10019);})());
}
}}
for(auto &&_n_item_10020:this->_n_frame_9915.entries()){d::check_cancel();auto _n_binding_10021=_n_item_10020;
double _n_k_9965=std::get<0>(*_n_binding_10021);
d::String _n_g_9966=std::get<1>(*_n_binding_10021);
(void)(([&](){auto&& _n_array_10022=this->_n_out_9906;auto _n_index_10023=_n_k_9965;auto _n_value_10024=_n_g_9966;d::put(_n_array_10022,_n_index_10023,_n_value_10024);return _n_value_10024;})());
}
(void)(this->_n_text_9908((this->_n_cx_9903-1.5),this->_n_cy_9904,d::String(u"(@)")));
for(auto &&_n_item_10025:_n_ends_9954){d::check_cancel();auto _n_binding_10026=_n_item_10025;
double _n_x_9967=d::at(_n_binding_10026,0.0);
double _n_y_9968=d::at(_n_binding_10026,1.0);
{
double _n_c_9969=std::floor(_n_x_9967);
double _n_r_9970=std::floor(_n_y_9968);
(void)(this->_n_put_9907(_n_c_9969,_n_r_9970,d::String(u"o")));
(void)(this->_n_text_9908((_n_c_9969-2.0),(_n_r_9970+1.0),d::String(u"╭─┴─╮")));
(void)(this->_n_text_9908((_n_c_9969-2.0),(_n_r_9970+2.0),d::String(u"╰───╯")));

}
}
(void)(this->_n_text_9908((this->_n_cx_9903-7.5),(this->_n_ground_9905-1.0),d::String(u"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄")));
{double _n_c_9971=0.0;
for(;d::truth((_n_c_9971<this->_n_cols_9901));(void)((_n_c_9971++))){d::check_cancel();(void)(this->_n_put_9907(_n_c_9971,this->_n_ground_9905,d::String(u"▀")));
}}
d::Array<d::String,false> _n_lines_9972=d::Array<d::String,false>{};
{double _n_r_9973=0.0;
for(;d::truth((_n_r_9973<this->_n_rows_9902));(void)((_n_r_9973++))){d::check_cancel();(void)(_n_lines_9972.push(d::join(this->_n_out_9906.slice((_n_r_9973*this->_n_cols_9901),((_n_r_9973+1.0)*this->_n_cols_9901)),d::String(u""))));
}}
return d::join(_n_lines_9972,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("ferris-wheel").cols)*ascii::catalog_meta("ferris-wheel").rows);auto _env=std::make_shared<_n_Record_9974>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &ferris_wheel_meta(){return catalog_meta("ferris-wheel");}
std::unique_ptr<Piece> make_ferris_wheel(const AsciiPieceOptions &o){return std::make_unique<Native_ferris_wheel>(o);}
}
