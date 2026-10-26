// Direct, statically typed C++ from src/pieces/vinyl.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35985;
struct _n_Record_36080;
struct _n_Record_35985{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_35985> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35985>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_36080{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36080> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36080>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
bool _n_printed_35993(double _a0,double _a1);
std::shared_ptr<_n_Record_35985> _n_meta_35984=[](){return ([&](){auto _n_object_36083=std::make_shared<_n_Record_35985>();_n_object_36083->_p_name=d::String(u"vinyl");_n_object_36083->_p_category=d::String(u"objects");_n_object_36083->_p_note=d::String(u"a record turning under the tonearm, seen from above");_n_object_36083->_p_cols=64.0;_n_object_36083->_p_rows=25.0;_n_object_36083->_p_fps=24.0;return _n_object_36083;})();}();
const d::String _n_RAMP_35986=[](){return d::String(u" .·:-=+*#%@");}();
const double _n_SPIN_35987=[](){return ((((2.0*ascii::PI)*100.0)/3.0)/60.0);}();
const double _n_R_35988=[](){return 9.0;}();
const double _n_RIM_35989=[](){return 9.9;}();
const double _n_LABEL_35990=[](){return 4.0;}();
d::Array<double,false> _n_GAPS_35991=[](){return d::Array<double,false>{6.2,7.5};}();
d::Array<std::array<double,2>,false> _n_DUST_35992=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{6.8,0.4},std::array<double,2>{8.2,2.9},std::array<double,2>{5.4,4.4}};}();
bool _n_printed_35993(double _a0,double _a1){double _n_x_36008=_a0;
double _n_y_36009=_a1;
return ([&]()->bool{auto _n_logical_36084=([&]()->bool{auto _n_logical_36085=([&]()->bool{auto _n_logical_36086=(_n_y_36009>(-d::number(2.9)));return d::truth(_n_logical_36086)?(_n_y_36009<(-d::number(1.45))):_n_logical_36086;})();return d::truth(_n_logical_36085)?(std::fabs(_n_x_36008)<2.7):_n_logical_36085;})();return d::truth(_n_logical_36084)?_n_logical_36084:(d::hypot(std::initializer_list<double>{(_n_x_36008-1.5),(_n_y_36009-1.9)})<0.75);})();}

struct Native_vinyl final:ascii::Piece{
double _n_cols_35994{};
double _n_rows_35995{};
double _n_cx_35996{};
double _n_cy_35997{};
d::Array<d::String,false> _n_out_35998{};
d::Array<std::shared_ptr<std::tuple<double,double,double,double,d::Array<std::array<double,2>,false>>>,false> _n_cells_36001{};
d::Map<double,std::array<double,4>> _n_rim_36002{};
double _n_side_36003{};
d::Map<double,double> _n_most_36004{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_edge_36006{};
std::function<d::String(double,std::shared_ptr<_n_Record_36080>)> _render;
void _n_put_35999(double _a0,double _a1,d::String _a2){double _n_c_36010=_a0;
double _n_r_36011=_a1;
d::String _n_g_36012=_a2;
{
(void)(((_n_c_36010=std::floor(_n_c_36010)),(_n_r_36011=std::floor(_n_r_36011))));
if((((d::truth((_n_c_36010>=0.0))&&d::truth((_n_c_36010<this->_n_cols_35994)))&&d::truth((_n_r_36011>=0.0)))&&d::truth((_n_r_36011<this->_n_rows_35995)))){d::check_cancel();(void)(([&](){auto&& _n_array_36137=this->_n_out_35998;auto _n_index_36138=((_n_r_36011*this->_n_cols_35994)+_n_c_36010);auto _n_value_36139=_n_g_36012;d::put(_n_array_36137,_n_index_36138,_n_value_36139);return _n_value_36139;})());
}

}
}

void _n_text_36000(double _a0,double _a1,d::String _a2){double _n_c_36013=_a0;
double _n_r_36014=_a1;
d::String _n_s_36015=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_36140;for(const auto &_v:_n_s_36015)_n_array_36140.push(_v);return _n_array_36140;})(),[&]( d::String _a0,double _a1) mutable ->std::optional<bool>{d::String _n_g_36016=_a0;
double _n_i_36017=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_36141=(_n_g_36016!=d::String(u" "));return d::truth(_n_logical_36141)?(this->_n_put_35999((_n_c_36013+_n_i_36017),_n_r_36014,_n_g_36016),std::optional<bool>{}):std::optional<bool>(_n_logical_36141);})();});}

double _n_phiOf_36005(std::array<double,4> _a0){auto _n_binding_36142=_a0;
double _n_n_36037=d::at(_n_binding_36142,0.0);
double _n_c_36038=d::at(_n_binding_36142,2.0);
return ((([&](){auto _n_argument_36143=(_n_c_36038/_n_n_36037);auto _n_argument_36144=std::sqrt(d::maximum({0.0,(1.0-std::pow((_n_c_36038/_n_n_36037),2.0))}));return std::atan2(_n_argument_36143,_n_argument_36144);})()*180.0)/ascii::PI);}

double _n_sheen_36007(double _a0){double _n_th_36051=_a0;
{
double _n_d_36052=(d::mod((d::mod((_n_th_36051+0.8),ascii::PI)+ascii::PI),ascii::PI)-(ascii::PI/2.0));
return std::exp((-d::number(std::pow((_n_d_36052*2.4),2.0))));

}
}

explicit Native_vinyl(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36087=_n_meta_35984;
this->_n_cols_35994=_n_binding_36087->_p_cols;
this->_n_rows_35995=_n_binding_36087->_p_rows;
this->_n_cx_35996=22.5;
this->_n_cy_35997=12.5;
this->_n_out_35998=d::Array<d::String,false>(size_t((this->_n_cols_35994*this->_n_rows_35995)));
this->_n_cells_36001=d::Array<std::shared_ptr<std::tuple<double,double,double,double,d::Array<std::array<double,2>,false>>>,false>{};
{double _n_r_36018=0.0;
for(;d::truth((_n_r_36018<this->_n_rows_35995));(void)((_n_r_36018++))){d::check_cancel();{double _n_c_36019=0.0;
for(;d::truth((_n_c_36019<this->_n_cols_35994));(void)((_n_c_36019++))){d::check_cancel();double _n_dx_36020=(((_n_c_36019+0.5)-this->_n_cx_35996)/2.0);
double _n_dy_36021=((_n_r_36018+0.5)-this->_n_cy_35997);
double _n_d_36022=d::hypot(std::initializer_list<double>{_n_dx_36020,_n_dy_36021});
if(d::truth((_n_d_36022>(_n_R_35988+0.1)))){d::check_cancel();continue;
}
double _n_th_36023=std::atan2(_n_dy_36021,_n_dx_36020);
double _n_h_36024=([&](){auto _n_left_36088=(0.5*std::fabs(std::cos(_n_th_36023)));auto _n_right_36089=std::fabs(std::sin(_n_th_36023));return (_n_left_36088+_n_right_36089);})();
d::Array<std::array<double,2>,false> _n_sub_36025=d::Array<std::array<double,2>,false>{};
if(d::truth((_n_d_36022<_n_LABEL_35990))){d::check_cancel();{double _n_j_36026=0.0;
for(;d::truth((_n_j_36026<4.0));(void)((_n_j_36026++))){d::check_cancel();{double _n_i_36027=0.0;
for(;d::truth((_n_i_36027<4.0));(void)((_n_i_36027++))){d::check_cancel();(void)(_n_sub_36025.push(std::array<double,2>{(_n_dx_36020+((_n_i_36027-1.5)/8.0)),(_n_dy_36021+((_n_j_36026-1.5)/4.0))}));
}}
}}
}
(void)(this->_n_cells_36001.push(std::make_shared<std::tuple<double,double,double,double,d::Array<std::array<double,2>,false>>>(((_n_r_36018*this->_n_cols_35994)+_n_c_36019),_n_d_36022,_n_th_36023,_n_h_36024,_n_sub_36025)));
}}
}}
this->_n_rim_36002=d::Map<double,std::array<double,4>>();
this->_n_side_36003=(_n_RIM_35989*0.3);
{double _n_r_36028=std::ceil(((this->_n_cy_35997-this->_n_side_36003)-0.5));
for(;d::truth(((_n_r_36028+0.5)<(this->_n_cy_35997+this->_n_side_36003)));(void)((_n_r_36028++))){d::check_cancel();double _n_w_36029=(2.0*std::sqrt(((_n_RIM_35989*_n_RIM_35989)-std::pow(((_n_r_36028+0.5)-this->_n_cy_35997),2.0))));
for(auto &&_n_item_36090:d::Array<double,false>{(this->_n_cx_35996-_n_w_36029),(this->_n_cx_35996+_n_w_36029)}){d::check_cancel();double _n_c_36030=_n_item_36090;
(void)(([&](){auto _n_argument_36091=((_n_r_36028*this->_n_cols_35994)+std::floor(_n_c_36030));auto _n_argument_36092=std::array<double,4>{1.0,0.5,1.0,0.0};return this->_n_rim_36002.set(_n_argument_36091,_n_argument_36092);})());
}
}}
{double _n_i_36031=0.0;
for(;d::truth((_n_i_36031<2000.0));(void)((_n_i_36031++))){d::check_cancel();double _n_p_36032=(((_n_i_36031/2000.0)*2.0)*ascii::PI);
double _n_x_36033=(this->_n_cx_35996+((2.0*_n_RIM_35989)*std::cos(_n_p_36032)));
double _n_y_36034=(this->_n_cy_35997+(_n_RIM_35989*std::sin(_n_p_36032)));
if(d::truth((std::fabs(((std::floor(_n_y_36034)+0.5)-this->_n_cy_35997))<this->_n_side_36003))){d::check_cancel();continue;
}
double _n_k_36035=([&](){auto _n_left_36093=(std::floor(_n_y_36034)*this->_n_cols_35994);auto _n_right_36094=std::floor(_n_x_36033);return (_n_left_36093+_n_right_36094);})();
auto&& _n_e_36036=([&]()->std::array<double,4>{auto _n_logical_36095=this->_n_rim_36002.get(_n_k_36035);return d::truth(_n_logical_36095)?d::read(_n_logical_36095):std::array<double,4>{0.0,0.0,0.0,0.0};})();
(void)((((([&](){auto&& _n_array_36096=_n_e_36036;auto _n_index_36097=0.0;auto _n_value_36098=(d::at(_n_array_36096,_n_index_36097)+1.0);d::put(_n_array_36096,_n_index_36097,_n_value_36098);return _n_value_36098;})(),([&](){auto&& _n_array_36099=_n_e_36036;auto _n_index_36100=1.0;auto _n_value_36101=(d::at(_n_array_36099,_n_index_36100)+(_n_y_36034-std::floor(_n_y_36034)));d::put(_n_array_36099,_n_index_36100,_n_value_36101);return _n_value_36101;})()),([&](){auto&& _n_array_36102=_n_e_36036;auto _n_index_36103=2.0;auto _n_value_36104=(d::at(_n_array_36102,_n_index_36103)+std::fabs(std::cos(_n_p_36032)));d::put(_n_array_36102,_n_index_36103,_n_value_36104);return _n_value_36104;})()),([&](){auto&& _n_array_36105=_n_e_36036;auto _n_index_36106=3.0;auto _n_value_36107=(d::at(_n_array_36105,_n_index_36106)+(d::truth((([&](){auto _n_left_36108=std::sin(_n_p_36032);auto _n_right_36109=std::cos(_n_p_36032);return (_n_left_36108*_n_right_36109);})()<0.0))?1.0:0.0));d::put(_n_array_36105,_n_index_36106,_n_value_36107);return _n_value_36107;})()));
(void)(this->_n_rim_36002.set(_n_k_36035,_n_e_36036));
}}
this->_n_most_36004=d::Map<double,double>();
for(auto &&_n_item_36110:this->_n_rim_36002.entries()){d::check_cancel();auto _n_binding_36111=_n_item_36110;
double _n_k_36039=std::get<0>(*_n_binding_36111);
auto&& _n_e_36040=std::get<1>(*_n_binding_36111);
{
double _n_id_36041=((std::floor((_n_k_36039/this->_n_cols_35994))*2.0)+(d::truth((d::mod(_n_k_36039,this->_n_cols_35994)<this->_n_cx_35996))?0.0:1.0));
double _n_phi_36042=this->_n_phiOf_36005(_n_e_36040);
if(((d::truth((_n_phi_36042>50.0))&&d::truth((_n_phi_36042<=72.0)))&&d::truth((d::at(_n_e_36040,0.0)>([&]()->double{auto _n_logical_36112=([&]()->std::optional<double>{auto _n_optional_36113=this->_n_rim_36002.get(d::read(this->_n_most_36004.get(_n_id_36041)));if(!d::present(_n_optional_36113))return {};return std::optional<double>(d::at(d::read(_n_optional_36113),0.0));})();return d::present(_n_logical_36112)?d::read(_n_logical_36112):0.0;})())))){d::check_cancel();(void)(this->_n_most_36004.set(_n_id_36041,_n_k_36039));
}

}
}
this->_n_edge_36006=d::map(([&](){d::Array<std::shared_ptr<std::tuple<double,std::array<double,4>>>,false> _n_array_36114;for(const auto &_v:this->_n_rim_36002.entries())_n_array_36114.push(_v);return _n_array_36114;})(),[&]( std::shared_ptr<std::tuple<double,std::array<double,4>>> _a0) mutable ->std::shared_ptr<std::tuple<double,d::String>>{auto _n_binding_36115=_a0;
double _n_k_36043=std::get<0>(*_n_binding_36115);
auto&& _n_e_36044=std::get<1>(*_n_binding_36115);
{
auto _n_binding_36116=_n_e_36044;
double _n_n_36045=d::at(_n_binding_36116,0.0);
double _n_fy_36046=d::at(_n_binding_36116,1.0);
double _n_fall_36047=d::at(_n_binding_36116,3.0);
double _n_phi_36048=this->_n_phiOf_36005(_n_e_36044);
bool _n_slant_36049=(d::equal(this->_n_most_36004.get(((std::floor((_n_k_36043/this->_n_cols_35994))*2.0)+(d::truth((d::mod(_n_k_36043,this->_n_cols_35994)<this->_n_cx_35996))?0.0:1.0))),_n_k_36043));
d::String _n_g_36050=(d::truth((_n_phi_36048>72.0))?d::String(u"|"):(d::truth(_n_slant_36049)?(d::truth(((_n_fall_36047/_n_n_36045)>0.5))?d::String(u"\\"):d::String(u"/")):(d::truth(((_n_fy_36046/_n_n_36045)<0.42))?d::String(u"'"):(d::truth(((_n_fy_36046/_n_n_36045)>0.58))?(d::truth((_n_phi_36048>10.0))?d::String(u"."):d::String(u"_")):d::String(u"-")))));
return std::make_shared<std::tuple<double,d::String>>(_n_k_36043,_n_g_36050);

}
});
_render=[=]( double _a0,std::shared_ptr<_n_Record_36080> _a1) mutable ->d::String{double _n_t_36053=_a0;
auto _n_binding_36119=(d::present(_a1)?_a1:([&](){auto _n_object_36118=std::make_shared<_n_Record_36080>();return _n_object_36118;})());
bool _n_paper_36054=(d::present(_n_binding_36119->_p_paper)?d::read(_n_binding_36119->_p_paper):false);
{
double _n_a_36055=(_n_SPIN_35987*_n_t_36053);
double _n_ca_36056=std::cos(_n_a_36055);
double _n_sa_36057=std::sin(_n_a_36055);
(void)(this->_n_out_35998.fill(d::String(u" ")));
for(auto &&_n_item_36120:this->_n_edge_36006){d::check_cancel();auto _n_binding_36121=_n_item_36120;
double _n_k_36058=std::get<0>(*_n_binding_36121);
d::String _n_g_36059=std::get<1>(*_n_binding_36121);
(void)(([&](){auto&& _n_array_36122=this->_n_out_35998;auto _n_index_36123=_n_k_36058;auto _n_value_36124=_n_g_36059;d::put(_n_array_36122,_n_index_36123,_n_value_36124);return _n_value_36124;})());
}
for(auto &&_n_item_36125:this->_n_cells_36001){d::check_cancel();auto _n_binding_36126=_n_item_36125;
double _n_k_36060=std::get<0>(*_n_binding_36126);
double _n_r_36061=std::get<1>(*_n_binding_36126);
double _n_th_36062=std::get<2>(*_n_binding_36126);
double _n_h_36063=std::get<3>(*_n_binding_36126);
d::Array<std::array<double,2>,false> _n_sub_36064=std::get<4>(*_n_binding_36126);
{
auto _n_ring_36065=[&]( double _a0) mutable ->bool{double _n_g_36066=_a0;
return (std::fabs((_n_r_36061-_n_g_36066))<(_n_h_36063/2.0));};
double _n_s_36067=this->_n_sheen_36007(_n_th_36062);
double _n_b_36068{};
if(d::truth((_n_r_36061<0.6))){d::check_cancel();continue;
}else {d::check_cancel();if(d::truth((_n_r_36061<_n_LABEL_35990))){d::check_cancel();double _n_ink_36069=0.0;
for(auto &&_n_item_36127:_n_sub_36064){d::check_cancel();auto _n_binding_36128=_n_item_36127;
double _n_x_36070=d::at(_n_binding_36128,0.0);
double _n_y_36071=d::at(_n_binding_36128,1.0);
(void)((_n_ink_36069=(_n_ink_36069+(d::truth(_n_printed_35993(((_n_x_36070*_n_ca_36056)+(_n_y_36071*_n_sa_36057)),((_n_y_36071*_n_ca_36056)-(_n_x_36070*_n_sa_36057))))?1.0:0.0))));
}
(void)((_n_b_36068=(d::truth((_n_ink_36069>(double(_n_sub_36064.size())/2.0)))?5.0:9.0)));
}else {d::check_cancel();if(d::truth((_n_r_36061>(_n_R_35988-0.45)))){d::check_cancel();(void)((_n_b_36068=(4.0+d::round((2.0*_n_s_36067)))));
}else {d::check_cancel();if(d::truth((_n_r_36061<(_n_LABEL_35990+1.0)))){d::check_cancel();(void)((_n_b_36068=(2.0+d::round((2.0*_n_s_36067)))));
}else {d::check_cancel();if(d::truth(d::some(_n_GAPS_35991,_n_ring_36065))){d::check_cancel();(void)((_n_b_36068=(2.0+d::round((3.0*_n_s_36067)))));
}else {d::check_cancel();(void)((_n_b_36068=(3.0+d::round((4.0*_n_s_36067)))));
}
}
}
}
}
(void)(([&](){auto&& _n_array_36129=this->_n_out_35998;auto _n_index_36130=_n_k_36060;auto _n_value_36131=d::at(_n_RAMP_35986,(d::truth(_n_paper_36054)?((double(_n_RAMP_35986.size())-1.0)-_n_b_36068):_n_b_36068));d::put(_n_array_36129,_n_index_36130,_n_value_36131);return _n_value_36131;})());

}
}
(void)(this->_n_put_35999(this->_n_cx_35996,this->_n_cy_35997,d::String(u"o")));
for(auto &&_n_item_36132:_n_DUST_35992){d::check_cancel();auto _n_binding_36133=_n_item_36132;
double _n_r_36072=d::at(_n_binding_36133,0.0);
double _n_p_36073=d::at(_n_binding_36133,1.0);
(void)(([&](){auto _n_argument_36134=(this->_n_cx_35996+((2.0*_n_r_36072)*std::cos((_n_p_36073+_n_a_36055))));auto _n_argument_36135=(this->_n_cy_35997+(_n_r_36072*std::sin((_n_p_36073+_n_a_36055))));auto _n_argument_36136=d::String(u"°");return this->_n_put_35999(_n_argument_36134,_n_argument_36135,_n_argument_36136);})());
}
{double _n_c_36074=1.0;
for(;d::truth((_n_c_36074<(this->_n_cols_35994-1.0)));(void)((_n_c_36074++))){d::check_cancel();(void)((this->_n_put_35999(_n_c_36074,0.0,d::String(u"─")),this->_n_put_35999(_n_c_36074,(this->_n_rows_35995-1.0),d::String(u"─"))));
}}
{double _n_r_36075=1.0;
for(;d::truth((_n_r_36075<(this->_n_rows_35995-1.0)));(void)((_n_r_36075++))){d::check_cancel();(void)((this->_n_put_35999(0.0,_n_r_36075,d::String(u"│")),this->_n_put_35999((this->_n_cols_35994-1.0),_n_r_36075,d::String(u"│"))));
}}
(void)((((this->_n_put_35999(0.0,0.0,d::String(u"╭")),this->_n_put_35999((this->_n_cols_35994-1.0),0.0,d::String(u"╮"))),this->_n_put_35999(0.0,(this->_n_rows_35995-1.0),d::String(u"╰"))),this->_n_put_35999((this->_n_cols_35994-1.0),(this->_n_rows_35995-1.0),d::String(u"╯"))));
(void)((this->_n_text_36000(2.0,21.0,d::String(u"┌──┐")),this->_n_text_36000(2.0,22.0,d::String(u"└──┘"))));
(void)((this->_n_text_36000(47.0,21.0,d::String(u"┌┐┌┐")),this->_n_text_36000(47.0,22.0,d::String(u"└┘└┘"))));
{double _n_r_36076=12.0;
for(;d::truth((_n_r_36076<=22.0));(void)((_n_r_36076++))){d::check_cancel();(void)(this->_n_put_35999(59.0,_n_r_36076,(d::truth((_n_r_36076==17.0))?d::String(u"═"):d::String(u"┊"))));
}}
(void)(this->_n_text_36000(49.0,2.0,d::String(u"▗▄▄▄▖")));
(void)(this->_n_text_36000(49.0,3.0,d::String(u"▝▀█▀▘")));
(void)(this->_n_text_36000(48.0,4.0,d::String(u"╭──╨──╮")));
(void)(this->_n_text_36000(48.0,5.0,d::String(u"│  O  │")));
(void)(this->_n_text_36000(48.0,6.0,d::String(u"╰──╥──╯")));
{double _n_r_36077=7.0;
for(;d::truth((_n_r_36077<16.0));(void)((_n_r_36077++))){d::check_cancel();(void)(this->_n_put_35999(51.0,_n_r_36077,d::String(u"║")));
}}
(void)(this->_n_text_36000(41.0,16.0,d::String(u"══════════╝")));
(void)(this->_n_text_36000(36.0,16.0,d::String(u"▐███▌")));
(void)(((this->_n_text_36000(54.0,9.0,d::String(u"╭╮")),this->_n_text_36000(54.0,10.0,d::String(u"││"))),this->_n_text_36000(54.0,11.0,d::String(u"╰╯"))));
d::Array<d::String,false> _n_lines_36078=d::Array<d::String,false>{};
{double _n_r_36079=0.0;
for(;d::truth((_n_r_36079<this->_n_rows_35995));(void)((_n_r_36079++))){d::check_cancel();(void)(_n_lines_36078.push(d::join(this->_n_out_35998.slice((_n_r_36079*this->_n_cols_35994),((_n_r_36079+1.0)*this->_n_cols_35994)),d::String(u""))));
}}
return d::join(_n_lines_36078,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("vinyl").cols)*ascii::catalog_meta("vinyl").rows);auto _env=std::make_shared<_n_Record_36080>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &vinyl_meta(){return catalog_meta("vinyl");}
std::unique_ptr<Piece> make_vinyl(const AsciiPieceOptions &o){return std::make_unique<Native_vinyl>(o);}
}
