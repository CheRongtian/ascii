// Direct, statically typed C++ from src/pieces/vinyl.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35984;
struct _n_Record_36079;
struct _n_Record_35984{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_35984> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35984>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_36079{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36079> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36079>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
bool _n_printed_35992(double _a0,double _a1);
std::shared_ptr<_n_Record_35984> _n_meta_35983=[](){return ([&](){auto _n_object_36082=std::make_shared<_n_Record_35984>();_n_object_36082->_p_name=d::String(u"vinyl");_n_object_36082->_p_category=d::String(u"objects");_n_object_36082->_p_note=d::String(u"a record turning under the tonearm, seen from above");_n_object_36082->_p_cols=64.0;_n_object_36082->_p_rows=25.0;_n_object_36082->_p_fps=24.0;return _n_object_36082;})();}();
const d::String _n_RAMP_35985=[](){return d::String(u" .·:-=+*#%@");}();
const double _n_SPIN_35986=[](){return ((((2.0*ascii::PI)*100.0)/3.0)/60.0);}();
const double _n_R_35987=[](){return 9.0;}();
const double _n_RIM_35988=[](){return 9.9;}();
const double _n_LABEL_35989=[](){return 4.0;}();
d::Array<double,false> _n_GAPS_35990=[](){return d::Array<double,false>{6.2,7.5};}();
d::Array<d::Array<double,false>,false> _n_DUST_35991=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{6.8,0.4},d::Array<double,false>{8.2,2.9},d::Array<double,false>{5.4,4.4}};}();
bool _n_printed_35992(double _a0,double _a1){double _n_x_36007=_a0;
double _n_y_36008=_a1;
return ([&]()->bool{auto _n_logical_36083=([&]()->bool{auto _n_logical_36084=([&]()->bool{auto _n_logical_36085=(_n_y_36008>(-d::number(2.9)));return d::truth(_n_logical_36085)?(_n_y_36008<(-d::number(1.45))):_n_logical_36085;})();return d::truth(_n_logical_36084)?(std::fabs(_n_x_36007)<2.7):_n_logical_36084;})();return d::truth(_n_logical_36083)?_n_logical_36083:(d::hypot(std::initializer_list<double>{(_n_x_36007-1.5),(_n_y_36008-1.9)})<0.75);})();}

struct Native_vinyl final:ascii::Piece{
double _n_cols_35993{};
double _n_rows_35994{};
double _n_cx_35995{};
double _n_cy_35996{};
d::Array<d::String,false> _n_out_35997{};
d::Array<std::shared_ptr<std::tuple<double,double,double,double,d::Array<d::Array<double,false>,false>>>,false> _n_cells_36000{};
d::Map<double,std::array<double,4>> _n_rim_36001{};
double _n_side_36002{};
d::Map<double,double> _n_most_36003{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_edge_36005{};
std::function<d::String(double,std::shared_ptr<_n_Record_36079>)> _render;
void _n_put_35998(double _a0,double _a1,d::String _a2){double _n_c_36009=_a0;
double _n_r_36010=_a1;
d::String _n_g_36011=_a2;
{
(void)(((_n_c_36009=std::floor(_n_c_36009)),(_n_r_36010=std::floor(_n_r_36010))));
if((((d::truth((_n_c_36009>=0.0))&&d::truth((_n_c_36009<this->_n_cols_35993)))&&d::truth((_n_r_36010>=0.0)))&&d::truth((_n_r_36010<this->_n_rows_35994)))){d::check_cancel();(void)(([&](){auto&& _n_array_36136=this->_n_out_35997;auto _n_index_36137=((_n_r_36010*this->_n_cols_35993)+_n_c_36009);auto _n_value_36138=_n_g_36011;d::put(_n_array_36136,_n_index_36137,_n_value_36138);return _n_value_36138;})());
}

}
}

void _n_text_35999(double _a0,double _a1,d::String _a2){double _n_c_36012=_a0;
double _n_r_36013=_a1;
d::String _n_s_36014=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_36139;for(const auto &_v:_n_s_36014)_n_array_36139.push(_v);return _n_array_36139;})(),[&]( d::String _a0,double _a1) mutable ->std::optional<bool>{d::String _n_g_36015=_a0;
double _n_i_36016=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_36140=(_n_g_36015!=d::String(u" "));return d::truth(_n_logical_36140)?(this->_n_put_35998((_n_c_36012+_n_i_36016),_n_r_36013,_n_g_36015),std::optional<bool>{}):std::optional<bool>(_n_logical_36140);})();});}

double _n_phiOf_36004(std::array<double,4> _a0){auto _n_binding_36141=_a0;
double _n_n_36036=d::at(_n_binding_36141,0.0);
double _n_c_36037=d::at(_n_binding_36141,2.0);
return ((([&](){auto _n_argument_36142=(_n_c_36037/_n_n_36036);auto _n_argument_36143=std::sqrt(d::maximum({0.0,(1.0-std::pow((_n_c_36037/_n_n_36036),2.0))}));return std::atan2(_n_argument_36142,_n_argument_36143);})()*180.0)/ascii::PI);}

double _n_sheen_36006(double _a0){double _n_th_36050=_a0;
{
double _n_d_36051=(d::mod((d::mod((_n_th_36050+0.8),ascii::PI)+ascii::PI),ascii::PI)-(ascii::PI/2.0));
return std::exp((-d::number(std::pow((_n_d_36051*2.4),2.0))));

}
}

explicit Native_vinyl(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36086=_n_meta_35983;
this->_n_cols_35993=_n_binding_36086->_p_cols;
this->_n_rows_35994=_n_binding_36086->_p_rows;
this->_n_cx_35995=22.5;
this->_n_cy_35996=12.5;
this->_n_out_35997=d::Array<d::String,false>(size_t((this->_n_cols_35993*this->_n_rows_35994)));
this->_n_cells_36000=d::Array<std::shared_ptr<std::tuple<double,double,double,double,d::Array<d::Array<double,false>,false>>>,false>{};
{double _n_r_36017=0.0;
for(;d::truth((_n_r_36017<this->_n_rows_35994));(void)((_n_r_36017++))){d::check_cancel();{double _n_c_36018=0.0;
for(;d::truth((_n_c_36018<this->_n_cols_35993));(void)((_n_c_36018++))){d::check_cancel();double _n_dx_36019=(((_n_c_36018+0.5)-this->_n_cx_35995)/2.0);
double _n_dy_36020=((_n_r_36017+0.5)-this->_n_cy_35996);
double _n_d_36021=d::hypot(std::initializer_list<double>{_n_dx_36019,_n_dy_36020});
if(d::truth((_n_d_36021>(_n_R_35987+0.1)))){d::check_cancel();continue;
}
double _n_th_36022=std::atan2(_n_dy_36020,_n_dx_36019);
double _n_h_36023=([&](){auto _n_left_36087=(0.5*std::fabs(std::cos(_n_th_36022)));auto _n_right_36088=std::fabs(std::sin(_n_th_36022));return (_n_left_36087+_n_right_36088);})();
d::Array<d::Array<double,false>,false> _n_sub_36024=d::Array<d::Array<double,false>,false>{};
if(d::truth((_n_d_36021<_n_LABEL_35989))){d::check_cancel();{double _n_j_36025=0.0;
for(;d::truth((_n_j_36025<4.0));(void)((_n_j_36025++))){d::check_cancel();{double _n_i_36026=0.0;
for(;d::truth((_n_i_36026<4.0));(void)((_n_i_36026++))){d::check_cancel();(void)(_n_sub_36024.push(d::Array<double,false>{(_n_dx_36019+((_n_i_36026-1.5)/8.0)),(_n_dy_36020+((_n_j_36025-1.5)/4.0))}));
}}
}}
}
(void)(this->_n_cells_36000.push(std::make_shared<std::tuple<double,double,double,double,d::Array<d::Array<double,false>,false>>>(((_n_r_36017*this->_n_cols_35993)+_n_c_36018),_n_d_36021,_n_th_36022,_n_h_36023,_n_sub_36024)));
}}
}}
this->_n_rim_36001=d::Map<double,std::array<double,4>>();
this->_n_side_36002=(_n_RIM_35988*0.3);
{double _n_r_36027=std::ceil(((this->_n_cy_35996-this->_n_side_36002)-0.5));
for(;d::truth(((_n_r_36027+0.5)<(this->_n_cy_35996+this->_n_side_36002)));(void)((_n_r_36027++))){d::check_cancel();double _n_w_36028=(2.0*std::sqrt(((_n_RIM_35988*_n_RIM_35988)-std::pow(((_n_r_36027+0.5)-this->_n_cy_35996),2.0))));
for(auto &&_n_item_36089:d::Array<double,false>{(this->_n_cx_35995-_n_w_36028),(this->_n_cx_35995+_n_w_36028)}){d::check_cancel();double _n_c_36029=_n_item_36089;
(void)(([&](){auto _n_argument_36090=((_n_r_36027*this->_n_cols_35993)+std::floor(_n_c_36029));auto _n_argument_36091=d::Array<double,false>{1.0,0.5,1.0,0.0};return this->_n_rim_36001.set(_n_argument_36090,d::fixedArray<double,4>(_n_argument_36091));})());
}
}}
{double _n_i_36030=0.0;
for(;d::truth((_n_i_36030<2000.0));(void)((_n_i_36030++))){d::check_cancel();double _n_p_36031=(((_n_i_36030/2000.0)*2.0)*ascii::PI);
double _n_x_36032=(this->_n_cx_35995+((2.0*_n_RIM_35988)*std::cos(_n_p_36031)));
double _n_y_36033=(this->_n_cy_35996+(_n_RIM_35988*std::sin(_n_p_36031)));
if(d::truth((std::fabs(((std::floor(_n_y_36033)+0.5)-this->_n_cy_35996))<this->_n_side_36002))){d::check_cancel();continue;
}
double _n_k_36034=([&](){auto _n_left_36092=(std::floor(_n_y_36033)*this->_n_cols_35993);auto _n_right_36093=std::floor(_n_x_36032);return (_n_left_36092+_n_right_36093);})();
d::Array<double,false> _n_e_36035=([&]()->d::Array<double,false>{auto _n_logical_36094=this->_n_rim_36001.get(_n_k_36034);return d::truth(_n_logical_36094)?d::Array<double,false>(d::read(_n_logical_36094)):d::Array<double,false>{0.0,0.0,0.0,0.0};})();
(void)((((([&](){auto&& _n_array_36095=_n_e_36035;auto _n_index_36096=0.0;auto _n_value_36097=(d::at(_n_array_36095,_n_index_36096)+1.0);d::put(_n_array_36095,_n_index_36096,_n_value_36097);return _n_value_36097;})(),([&](){auto&& _n_array_36098=_n_e_36035;auto _n_index_36099=1.0;auto _n_value_36100=(d::at(_n_array_36098,_n_index_36099)+(_n_y_36033-std::floor(_n_y_36033)));d::put(_n_array_36098,_n_index_36099,_n_value_36100);return _n_value_36100;})()),([&](){auto&& _n_array_36101=_n_e_36035;auto _n_index_36102=2.0;auto _n_value_36103=(d::at(_n_array_36101,_n_index_36102)+std::fabs(std::cos(_n_p_36031)));d::put(_n_array_36101,_n_index_36102,_n_value_36103);return _n_value_36103;})()),([&](){auto&& _n_array_36104=_n_e_36035;auto _n_index_36105=3.0;auto _n_value_36106=(d::at(_n_array_36104,_n_index_36105)+(d::truth((([&](){auto _n_left_36107=std::sin(_n_p_36031);auto _n_right_36108=std::cos(_n_p_36031);return (_n_left_36107*_n_right_36108);})()<0.0))?1.0:0.0));d::put(_n_array_36104,_n_index_36105,_n_value_36106);return _n_value_36106;})()));
(void)(this->_n_rim_36001.set(_n_k_36034,d::fixedArray<double,4>(_n_e_36035)));
}}
this->_n_most_36003=d::Map<double,double>();
for(auto &&_n_item_36109:this->_n_rim_36001.entries()){d::check_cancel();auto _n_binding_36110=_n_item_36109;
double _n_k_36038=std::get<0>(*_n_binding_36110);
auto&& _n_e_36039=std::get<1>(*_n_binding_36110);
{
double _n_id_36040=((std::floor((_n_k_36038/this->_n_cols_35993))*2.0)+(d::truth((d::mod(_n_k_36038,this->_n_cols_35993)<this->_n_cx_35995))?0.0:1.0));
double _n_phi_36041=this->_n_phiOf_36004(_n_e_36039);
if(((d::truth((_n_phi_36041>50.0))&&d::truth((_n_phi_36041<=72.0)))&&d::truth((d::at(_n_e_36039,0.0)>([&]()->double{auto _n_logical_36111=([&]()->std::optional<double>{auto _n_optional_36112=this->_n_rim_36001.get(d::read(this->_n_most_36003.get(_n_id_36040)));if(!d::present(_n_optional_36112))return {};return std::optional<double>(d::at(d::read(_n_optional_36112),0.0));})();return d::present(_n_logical_36111)?d::read(_n_logical_36111):0.0;})())))){d::check_cancel();(void)(this->_n_most_36003.set(_n_id_36040,_n_k_36038));
}

}
}
this->_n_edge_36005=d::map(([&](){d::Array<std::shared_ptr<std::tuple<double,std::array<double,4>>>,false> _n_array_36113;for(const auto &_v:this->_n_rim_36001.entries())_n_array_36113.push(_v);return _n_array_36113;})(),[&]( std::shared_ptr<std::tuple<double,std::array<double,4>>> _a0) mutable ->std::shared_ptr<std::tuple<double,d::String>>{auto _n_binding_36114=_a0;
double _n_k_36042=std::get<0>(*_n_binding_36114);
auto&& _n_e_36043=std::get<1>(*_n_binding_36114);
{
auto _n_binding_36115=_n_e_36043;
double _n_n_36044=d::at(_n_binding_36115,0.0);
double _n_fy_36045=d::at(_n_binding_36115,1.0);
double _n_fall_36046=d::at(_n_binding_36115,3.0);
double _n_phi_36047=this->_n_phiOf_36004(_n_e_36043);
bool _n_slant_36048=(d::equal(this->_n_most_36003.get(((std::floor((_n_k_36042/this->_n_cols_35993))*2.0)+(d::truth((d::mod(_n_k_36042,this->_n_cols_35993)<this->_n_cx_35995))?0.0:1.0))),_n_k_36042));
d::String _n_g_36049=(d::truth((_n_phi_36047>72.0))?d::String(u"|"):(d::truth(_n_slant_36048)?(d::truth(((_n_fall_36046/_n_n_36044)>0.5))?d::String(u"\\"):d::String(u"/")):(d::truth(((_n_fy_36045/_n_n_36044)<0.42))?d::String(u"'"):(d::truth(((_n_fy_36045/_n_n_36044)>0.58))?(d::truth((_n_phi_36047>10.0))?d::String(u"."):d::String(u"_")):d::String(u"-")))));
return std::make_shared<std::tuple<double,d::String>>(_n_k_36042,_n_g_36049);

}
});
_render=[=]( double _a0,std::shared_ptr<_n_Record_36079> _a1) mutable ->d::String{double _n_t_36052=_a0;
auto _n_binding_36118=(d::present(_a1)?_a1:([&](){auto _n_object_36117=std::make_shared<_n_Record_36079>();return _n_object_36117;})());
bool _n_paper_36053=(d::present(_n_binding_36118->_p_paper)?d::read(_n_binding_36118->_p_paper):false);
{
double _n_a_36054=(_n_SPIN_35986*_n_t_36052);
double _n_ca_36055=std::cos(_n_a_36054);
double _n_sa_36056=std::sin(_n_a_36054);
(void)(this->_n_out_35997.fill(d::String(u" ")));
for(auto &&_n_item_36119:this->_n_edge_36005){d::check_cancel();auto _n_binding_36120=_n_item_36119;
double _n_k_36057=std::get<0>(*_n_binding_36120);
d::String _n_g_36058=std::get<1>(*_n_binding_36120);
(void)(([&](){auto&& _n_array_36121=this->_n_out_35997;auto _n_index_36122=_n_k_36057;auto _n_value_36123=_n_g_36058;d::put(_n_array_36121,_n_index_36122,_n_value_36123);return _n_value_36123;})());
}
for(auto &&_n_item_36124:this->_n_cells_36000){d::check_cancel();auto _n_binding_36125=_n_item_36124;
double _n_k_36059=std::get<0>(*_n_binding_36125);
double _n_r_36060=std::get<1>(*_n_binding_36125);
double _n_th_36061=std::get<2>(*_n_binding_36125);
double _n_h_36062=std::get<3>(*_n_binding_36125);
d::Array<d::Array<double,false>,false> _n_sub_36063=std::get<4>(*_n_binding_36125);
{
auto _n_ring_36064=[&]( double _a0) mutable ->bool{double _n_g_36065=_a0;
return (std::fabs((_n_r_36060-_n_g_36065))<(_n_h_36062/2.0));};
double _n_s_36066=this->_n_sheen_36006(_n_th_36061);
double _n_b_36067{};
if(d::truth((_n_r_36060<0.6))){d::check_cancel();continue;
}else {d::check_cancel();if(d::truth((_n_r_36060<_n_LABEL_35989))){d::check_cancel();double _n_ink_36068=0.0;
for(auto &&_n_item_36126:_n_sub_36063){d::check_cancel();auto _n_binding_36127=_n_item_36126;
double _n_x_36069=d::at(_n_binding_36127,0.0);
double _n_y_36070=d::at(_n_binding_36127,1.0);
(void)((_n_ink_36068=(_n_ink_36068+(d::truth(_n_printed_35992(((_n_x_36069*_n_ca_36055)+(_n_y_36070*_n_sa_36056)),((_n_y_36070*_n_ca_36055)-(_n_x_36069*_n_sa_36056))))?1.0:0.0))));
}
(void)((_n_b_36067=(d::truth((_n_ink_36068>(double(_n_sub_36063.size())/2.0)))?5.0:9.0)));
}else {d::check_cancel();if(d::truth((_n_r_36060>(_n_R_35987-0.45)))){d::check_cancel();(void)((_n_b_36067=(4.0+d::round((2.0*_n_s_36066)))));
}else {d::check_cancel();if(d::truth((_n_r_36060<(_n_LABEL_35989+1.0)))){d::check_cancel();(void)((_n_b_36067=(2.0+d::round((2.0*_n_s_36066)))));
}else {d::check_cancel();if(d::truth(d::some(_n_GAPS_35990,_n_ring_36064))){d::check_cancel();(void)((_n_b_36067=(2.0+d::round((3.0*_n_s_36066)))));
}else {d::check_cancel();(void)((_n_b_36067=(3.0+d::round((4.0*_n_s_36066)))));
}
}
}
}
}
(void)(([&](){auto&& _n_array_36128=this->_n_out_35997;auto _n_index_36129=_n_k_36059;auto _n_value_36130=d::at(_n_RAMP_35985,(d::truth(_n_paper_36053)?((double(_n_RAMP_35985.size())-1.0)-_n_b_36067):_n_b_36067));d::put(_n_array_36128,_n_index_36129,_n_value_36130);return _n_value_36130;})());

}
}
(void)(this->_n_put_35998(this->_n_cx_35995,this->_n_cy_35996,d::String(u"o")));
for(auto &&_n_item_36131:_n_DUST_35991){d::check_cancel();auto _n_binding_36132=_n_item_36131;
double _n_r_36071=d::at(_n_binding_36132,0.0);
double _n_p_36072=d::at(_n_binding_36132,1.0);
(void)(([&](){auto _n_argument_36133=(this->_n_cx_35995+((2.0*_n_r_36071)*std::cos((_n_p_36072+_n_a_36054))));auto _n_argument_36134=(this->_n_cy_35996+(_n_r_36071*std::sin((_n_p_36072+_n_a_36054))));auto _n_argument_36135=d::String(u"°");return this->_n_put_35998(_n_argument_36133,_n_argument_36134,_n_argument_36135);})());
}
{double _n_c_36073=1.0;
for(;d::truth((_n_c_36073<(this->_n_cols_35993-1.0)));(void)((_n_c_36073++))){d::check_cancel();(void)((this->_n_put_35998(_n_c_36073,0.0,d::String(u"─")),this->_n_put_35998(_n_c_36073,(this->_n_rows_35994-1.0),d::String(u"─"))));
}}
{double _n_r_36074=1.0;
for(;d::truth((_n_r_36074<(this->_n_rows_35994-1.0)));(void)((_n_r_36074++))){d::check_cancel();(void)((this->_n_put_35998(0.0,_n_r_36074,d::String(u"│")),this->_n_put_35998((this->_n_cols_35993-1.0),_n_r_36074,d::String(u"│"))));
}}
(void)((((this->_n_put_35998(0.0,0.0,d::String(u"╭")),this->_n_put_35998((this->_n_cols_35993-1.0),0.0,d::String(u"╮"))),this->_n_put_35998(0.0,(this->_n_rows_35994-1.0),d::String(u"╰"))),this->_n_put_35998((this->_n_cols_35993-1.0),(this->_n_rows_35994-1.0),d::String(u"╯"))));
(void)((this->_n_text_35999(2.0,21.0,d::String(u"┌──┐")),this->_n_text_35999(2.0,22.0,d::String(u"└──┘"))));
(void)((this->_n_text_35999(47.0,21.0,d::String(u"┌┐┌┐")),this->_n_text_35999(47.0,22.0,d::String(u"└┘└┘"))));
{double _n_r_36075=12.0;
for(;d::truth((_n_r_36075<=22.0));(void)((_n_r_36075++))){d::check_cancel();(void)(this->_n_put_35998(59.0,_n_r_36075,(d::truth((_n_r_36075==17.0))?d::String(u"═"):d::String(u"┊"))));
}}
(void)(this->_n_text_35999(49.0,2.0,d::String(u"▗▄▄▄▖")));
(void)(this->_n_text_35999(49.0,3.0,d::String(u"▝▀█▀▘")));
(void)(this->_n_text_35999(48.0,4.0,d::String(u"╭──╨──╮")));
(void)(this->_n_text_35999(48.0,5.0,d::String(u"│  O  │")));
(void)(this->_n_text_35999(48.0,6.0,d::String(u"╰──╥──╯")));
{double _n_r_36076=7.0;
for(;d::truth((_n_r_36076<16.0));(void)((_n_r_36076++))){d::check_cancel();(void)(this->_n_put_35998(51.0,_n_r_36076,d::String(u"║")));
}}
(void)(this->_n_text_35999(41.0,16.0,d::String(u"══════════╝")));
(void)(this->_n_text_35999(36.0,16.0,d::String(u"▐███▌")));
(void)(((this->_n_text_35999(54.0,9.0,d::String(u"╭╮")),this->_n_text_35999(54.0,10.0,d::String(u"││"))),this->_n_text_35999(54.0,11.0,d::String(u"╰╯"))));
d::Array<d::String,false> _n_lines_36077=d::Array<d::String,false>{};
{double _n_r_36078=0.0;
for(;d::truth((_n_r_36078<this->_n_rows_35994));(void)((_n_r_36078++))){d::check_cancel();(void)(_n_lines_36077.push(d::join(this->_n_out_35997.slice((_n_r_36078*this->_n_cols_35993),((_n_r_36078+1.0)*this->_n_cols_35993)),d::String(u""))));
}}
return d::join(_n_lines_36077,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("vinyl").cols)*ascii::catalog_meta("vinyl").rows);auto _env=std::make_shared<_n_Record_36079>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &vinyl_meta(){return catalog_meta("vinyl");}
std::unique_ptr<Piece> make_vinyl(const AsciiPieceOptions &o){return std::make_unique<Native_vinyl>(o);}
}
