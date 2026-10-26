// Direct, statically typed C++ from src/pieces/contour-map.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_5839;
struct _n_Record_5943;
struct _n_Record_5839{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_5839> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_5839>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_5943{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_5943> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_5943>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_5839> _n_meta_5838=[](){return ([&](){auto _n_object_5946=std::make_shared<_n_Record_5839>();_n_object_5946->_p_name=d::String(u"contour map");_n_object_5946->_p_category=d::String(u"nature");_n_object_5946->_p_note=d::String(u"an island in contour lines, its hills slowly reshaping");_n_object_5946->_p_cols=72.0;_n_object_5946->_p_rows=20.0;_n_object_5946->_p_fps=8.0;return _n_object_5946;})();}();
const double _n_CW_5840=[](){return 0.6;}();
const double _n_RH_5841=[](){return 1.2;}();
const double _n_LEVEL_5842=[](){return 0.26;}();
const double _n_START_5843=[](){return 280.0;}();
const double _n_PERIOD_5844=[](){return 60.0;}();
const double _n_SWING_5845=[](){return 1.15;}();
const double _n_CROWD_5846=[](){return 1.0;}();
const double _n_SPECK_5847=[](){return 4.0;}();
const double _n_FLOOR_5848=[](){return 0.55;}();
d::Array<std::array<double,6>,false> _n_WAVES_5849=[](){return d::Array<std::array<double,6>,false>{std::array<double,6>{0.21,0.08,0.0,0.055,0.51,0.0},std::array<double,6>{(-d::number(0.13)),0.27,1.7,(-d::number(0.035)),0.42,2.1},std::array<double,6>{0.34,(-d::number(0.19)),4.1,0.025,0.31,4.0},std::array<double,6>{0.09,0.41,2.6,0.045,0.25,1.1},std::array<double,6>{(-d::number(0.47)),(-d::number(0.12)),5.3,(-d::number(0.065)),0.17,5.2}};}();

struct Native_contour_map final:ascii::Piece{
double _n_cols_5850{};
double _n_rows_5851{};
double _n_X_5852{};
double _n_Y_5853{};
double _n_W_5854{};
double _n_N_5855{};
d::Array<double,true> _n_h_5856{};
d::Array<double,true> _n_mid_5857{};
d::Array<double,true> _n_gx_5858{};
d::Array<double,true> _n_gy_5859{};
d::Array<int16_t,true> _n_lvl_5860{};
d::Array<double,true> _n_off_5861{};
d::Array<uint8_t,true> _n_dot_5862{};
d::Array<double,true> _n_doff_5863{};
d::Array<uint8_t,true> _n_sea_5864{};
d::Array<uint8_t,true> _n_seen_5865{};
d::Array<d::String,false> _n_out_5866{};
std::function<d::String(double,std::shared_ptr<_n_Record_5943>)> _render;
double _n_height_5867(double _a0,double _a1,d::Array<double,false> _a2){double _n_x_5870=_a0;
double _n_y_5871=_a1;
d::Array<double,false> _n_phases_5872=_a2;
{
double _n_n_5873=1.0;
{double _n_i_5874=0.0;
for(;d::truth((_n_i_5874<double(_n_WAVES_5849.size())));(void)((_n_i_5874++))){d::check_cancel();auto _n_binding_6026=d::at(_n_WAVES_5849,_n_i_5874);
double _n_kx_5875=d::at(_n_binding_6026,0.0);
double _n_ky_5876=d::at(_n_binding_6026,1.0);
double _n_p_5877=d::at(_n_binding_6026,2.0);
double _n_a_5878=d::at(_n_binding_6026,4.0);
(void)((_n_n_5873=(_n_n_5873+(_n_a_5878*std::sin(((((_n_kx_5875*_n_x_5870)+(_n_ky_5876*_n_y_5871))+_n_p_5877)+d::at(_n_phases_5872,_n_i_5874)))))));
}}
(void)((_n_n_5873=(_n_FLOOR_5848+(std::log1p(std::exp((6.0*(_n_n_5873-_n_FLOOR_5848))))/6.0))));
return (((std::exp(((-d::number(std::pow((_n_x_5870/17.0),2.0)))-std::pow((_n_y_5871/8.0),2.0)))*(1.0-std::pow((_n_x_5870/this->_n_X_5852),2.0)))*(1.0-std::pow((_n_y_5871/this->_n_Y_5853),2.0)))*_n_n_5873);

}
}

bool _n_steep_5868(double _a0){double _n_i_5879=_a0;
return ([&](){auto _n_left_6027=(std::fabs(d::at(this->_n_gx_5858,_n_i_5879))*_n_CW_5840);auto _n_right_6028=(std::fabs(d::at(this->_n_gy_5859,_n_i_5879))*_n_RH_5841);return (_n_left_6027>_n_right_6028);})();}

d::Array<uint8_t,true> _n_thin_5869(std::variant<d::Array<uint8_t,true>,d::Array<int16_t,true>> _a0,d::Array<double,true> _a1){std::variant<d::Array<uint8_t,true>,d::Array<int16_t,true>> _n_lv_5880=_a0;
d::Array<double,true> _n_of_5881=_a1;
{
d::Array<uint8_t,true> _n_keep_5882=d::Array<uint8_t,true>(size_t(this->_n_N_5855));
{double _n_i_5883=0.0;
for(;d::truth((_n_i_5883<this->_n_N_5855));(void)((_n_i_5883++))){d::check_cancel();double _n_L_5884=d::at(_n_lv_5880,_n_i_5883);
if(d::truth((!d::truth(_n_L_5884)))){d::check_cancel();continue;
}
double _n_r_5885=double(d::i32((_n_i_5883/this->_n_cols_5850))|d::i32(0.0));
double _n_c_5886=d::mod(_n_i_5883,this->_n_cols_5850);
auto _n_binding_6029=(d::truth(this->_n_steep_5868(_n_i_5883))?std::array<double,2>{(d::truth((_n_c_5886>0.0))?(_n_i_5883-1.0):(-d::number(1.0))),(d::truth((_n_c_5886<(this->_n_cols_5850-1.0)))?(_n_i_5883+1.0):(-d::number(1.0)))}:std::array<double,2>{(d::truth((_n_r_5885>0.0))?(_n_i_5883-this->_n_cols_5850):(-d::number(1.0))),(d::truth((_n_r_5885<(this->_n_rows_5851-1.0)))?(_n_i_5883+this->_n_cols_5850):(-d::number(1.0)))});
double _n_p_5887=d::at(_n_binding_6029,0.0);
double _n_q_5888=d::at(_n_binding_6029,1.0);
auto _n_beaten_5889=[&]( double _a0) mutable ->bool{double _n_j_5890=_a0;
return ([&]()->bool{auto _n_logical_6030=([&]()->bool{auto _n_logical_6033=(_n_j_5890>=0.0);return d::truth(_n_logical_6033)?(d::at(_n_lv_5880,_n_j_5890)==_n_L_5884):_n_logical_6033;})();return d::truth(_n_logical_6030)?([&]()->bool{auto _n_logical_6031=(d::at(_n_of_5881,_n_j_5890)<d::at(_n_of_5881,_n_i_5883));return d::truth(_n_logical_6031)?_n_logical_6031:([&]()->bool{auto _n_logical_6032=(d::at(_n_of_5881,_n_j_5890)==d::at(_n_of_5881,_n_i_5883));return d::truth(_n_logical_6032)?(_n_j_5890<_n_i_5883):_n_logical_6032;})();})():_n_logical_6030;})();};
if((d::truth((!d::truth(_n_beaten_5889(_n_p_5887))))&&d::truth((!d::truth(_n_beaten_5889(_n_q_5888)))))){d::check_cancel();(void)(([&](){auto&& _n_array_6034=_n_keep_5882;auto _n_index_6035=_n_i_5883;auto _n_value_6036=1.0;d::put(_n_array_6034,_n_index_6035,_n_value_6036);return _n_value_6036;})());
}
}}
(void)(this->_n_seen_5865.fill(0.0));
{double _n_i_5891=0.0;
for(;d::truth((_n_i_5891<this->_n_N_5855));(void)((_n_i_5891++))){d::check_cancel();if((d::truth((!d::truth(d::at(_n_keep_5882,_n_i_5891))))||d::truth(d::at(this->_n_seen_5865,_n_i_5891)))){d::check_cancel();continue;
}
d::Array<double,false> _n_part_5892=d::Array<double,false>{_n_i_5891};
(void)(([&](){auto&& _n_array_6037=this->_n_seen_5865;auto _n_index_6038=_n_i_5891;auto _n_value_6039=1.0;d::put(_n_array_6037,_n_index_6038,_n_value_6039);return _n_value_6039;})());
{double _n_n_5893=0.0;
for(;d::truth((_n_n_5893<double(_n_part_5892.size())));(void)((_n_n_5893++))){d::check_cancel();double _n_r_5894=double(d::i32((d::at(_n_part_5892,_n_n_5893)/this->_n_cols_5850))|d::i32(0.0));
double _n_c_5895=d::mod(d::at(_n_part_5892,_n_n_5893),this->_n_cols_5850);
{double _n_dr_5896=(-d::number(1.0));
for(;d::truth((_n_dr_5896<=1.0));(void)((_n_dr_5896++))){d::check_cancel();{double _n_dc_5897=(-d::number(1.0));
for(;d::truth((_n_dc_5897<=1.0));(void)((_n_dc_5897++))){d::check_cancel();double _n_rr_5898=(_n_r_5894+_n_dr_5896);
double _n_cc_5899=(_n_c_5895+_n_dc_5897);
double _n_j_5900=((_n_rr_5898*this->_n_cols_5850)+_n_cc_5899);
if(((((((d::truth((_n_rr_5898>=0.0))&&d::truth((_n_rr_5898<this->_n_rows_5851)))&&d::truth((_n_cc_5899>=0.0)))&&d::truth((_n_cc_5899<this->_n_cols_5850)))&&d::truth(d::at(_n_keep_5882,_n_j_5900)))&&d::truth((!d::truth(d::at(this->_n_seen_5865,_n_j_5900)))))&&d::truth((d::at(_n_lv_5880,_n_j_5900)==d::at(_n_lv_5880,_n_i_5891))))){d::check_cancel();(void)((([&](){auto&& _n_array_6040=this->_n_seen_5865;auto _n_index_6041=_n_j_5900;auto _n_value_6042=1.0;d::put(_n_array_6040,_n_index_6041,_n_value_6042);return _n_value_6042;})(),_n_part_5892.push(_n_j_5900)));
}
}}
}}
}}
if(d::truth((double(_n_part_5892.size())<_n_SPECK_5847))){d::check_cancel();for(auto &&_n_item_6043:_n_part_5892){d::check_cancel();double _n_j_5901=_n_item_6043;
(void)(([&](){auto&& _n_array_6044=_n_keep_5882;auto _n_index_6045=_n_j_5901;auto _n_value_6046=0.0;d::put(_n_array_6044,_n_index_6045,_n_value_6046);return _n_value_6046;})());
}
}
}}
return _n_keep_5882;

}
}

explicit Native_contour_map(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_5947=_n_meta_5838;
this->_n_cols_5850=_n_binding_5947->_p_cols;
this->_n_rows_5851=_n_binding_5947->_p_rows;
this->_n_X_5852=((this->_n_cols_5850/2.0)*_n_CW_5840);
this->_n_Y_5853=((this->_n_rows_5851/2.0)*_n_RH_5841);
this->_n_W_5854=(this->_n_cols_5850+1.0);
this->_n_N_5855=(this->_n_cols_5850*this->_n_rows_5851);
this->_n_h_5856=d::Array<double,true>(size_t((this->_n_W_5854*(this->_n_rows_5851+1.0))));
this->_n_mid_5857=d::Array<double,true>(size_t(this->_n_N_5855));
this->_n_gx_5858=d::Array<double,true>(size_t(this->_n_N_5855));
this->_n_gy_5859=d::Array<double,true>(size_t(this->_n_N_5855));
this->_n_lvl_5860=d::Array<int16_t,true>(size_t(this->_n_N_5855));
this->_n_off_5861=d::Array<double,true>(size_t(this->_n_N_5855));
this->_n_dot_5862=d::Array<uint8_t,true>(size_t(this->_n_N_5855));
this->_n_doff_5863=d::Array<double,true>(size_t(this->_n_N_5855));
this->_n_sea_5864=d::Array<uint8_t,true>(size_t(this->_n_N_5855));
this->_n_seen_5865=d::Array<uint8_t,true>(size_t(this->_n_N_5855));
this->_n_out_5866=d::Array<d::String,false>(size_t(this->_n_N_5855));
_render=[=]( double _a0,std::shared_ptr<_n_Record_5943> _a1) mutable ->d::String{double _n_t_5902=_a0;
{
double _n_turn_5903=(((2.0*ascii::PI)*_n_t_5902)/_n_PERIOD_5844);
d::Array<double,false> _n_phases_5904=d::map(_n_WAVES_5849,[&]( std::array<double,6> _a0) mutable ->double{auto _n_binding_5948=_a0;
double _n_w_5905=d::at(_n_binding_5948,3.0);
double _n_psi_5906=d::at(_n_binding_5948,5.0);
return ((_n_w_5905*_n_START_5843)+([&](){auto _n_left_5949=(d::sign(_n_w_5905)*_n_SWING_5845);auto _n_right_5950=std::sin((_n_turn_5903+_n_psi_5906));return (_n_left_5949*_n_right_5950);})());});
{double _n_r_5907=0.0;
for(;d::truth((_n_r_5907<=this->_n_rows_5851));(void)((_n_r_5907++))){d::check_cancel();{double _n_c_5908=0.0;
for(;d::truth((_n_c_5908<=this->_n_cols_5850));(void)((_n_c_5908++))){d::check_cancel();(void)(([&](){auto&& _n_array_5951=this->_n_h_5856;auto _n_index_5952=((_n_r_5907*this->_n_W_5854)+_n_c_5908);auto _n_value_5953=this->_n_height_5867(((_n_c_5908-(this->_n_cols_5850/2.0))*_n_CW_5840),((_n_r_5907-(this->_n_rows_5851/2.0))*_n_RH_5841),_n_phases_5904);d::put(_n_array_5951,_n_index_5952,_n_value_5953);return _n_value_5953;})());
}}
}}
{double _n_r_5909=0.0;
double _n_i_5910=0.0;
for(;d::truth((_n_r_5909<this->_n_rows_5851));(void)((_n_r_5909++))){d::check_cancel();{double _n_c_5911=0.0;
for(;d::truth((_n_c_5911<this->_n_cols_5850));(void)(((_n_c_5911++),(_n_i_5910++)))){d::check_cancel();double _n_a_5912=d::at(this->_n_h_5856,((_n_r_5909*this->_n_W_5854)+_n_c_5911));
double _n_b_5913=d::at(this->_n_h_5856,(((_n_r_5909*this->_n_W_5854)+_n_c_5911)+1.0));
double _n_d_5914=d::at(this->_n_h_5856,(((_n_r_5909+1.0)*this->_n_W_5854)+_n_c_5911));
double _n_e_5915=d::at(this->_n_h_5856,((((_n_r_5909+1.0)*this->_n_W_5854)+_n_c_5911)+1.0));
(void)(([&](){auto&& _n_array_5954=this->_n_mid_5857;auto _n_index_5955=_n_i_5910;auto _n_value_5956=((((_n_a_5912+_n_b_5913)+_n_d_5914)+_n_e_5915)/4.0);d::put(_n_array_5954,_n_index_5955,_n_value_5956);return _n_value_5956;})());
(void)(([&](){auto&& _n_array_5957=this->_n_gx_5858;auto _n_index_5958=_n_i_5910;auto _n_value_5959=((((_n_b_5913+_n_e_5915)-_n_a_5912)-_n_d_5914)/(2.0*_n_CW_5840));d::put(_n_array_5957,_n_index_5958,_n_value_5959);return _n_value_5959;})());
(void)(([&](){auto&& _n_array_5960=this->_n_gy_5859;auto _n_index_5961=_n_i_5910;auto _n_value_5962=((((_n_d_5914+_n_e_5915)-_n_a_5912)-_n_b_5913)/(2.0*_n_RH_5841));d::put(_n_array_5960,_n_index_5961,_n_value_5962);return _n_value_5962;})());
(void)(([&](){auto&& _n_array_5963=this->_n_lvl_5860;auto _n_index_5964=_n_i_5910;auto _n_value_5965=([&](){auto&& _n_array_5966=this->_n_dot_5862;auto _n_index_5967=_n_i_5910;auto _n_value_5968=0.0;d::put(_n_array_5966,_n_index_5967,_n_value_5968);return _n_value_5968;})();d::put(_n_array_5963,_n_index_5964,_n_value_5965);return _n_value_5965;})());
double _n_lo_5916=d::minimum({_n_a_5912,_n_b_5913,_n_d_5914,_n_e_5915});
double _n_hi_5917=d::maximum({_n_a_5912,_n_b_5913,_n_d_5914,_n_e_5915});
double _n_g_5918=([&]()->double{auto _n_logical_5969=d::hypot(std::initializer_list<double>{d::at(this->_n_gx_5858,_n_i_5910),d::at(this->_n_gy_5859,_n_i_5910)});return d::truth(_n_logical_5969)?_n_logical_5969:1e-9;})();
double _n_L_5919=d::round((d::at(this->_n_mid_5857,_n_i_5910)/_n_LEVEL_5842));
if((((d::truth((_n_L_5919>=1.0))&&d::truth((_n_lo_5916<(_n_L_5919*_n_LEVEL_5842))))&&d::truth((_n_hi_5917>=(_n_L_5919*_n_LEVEL_5842))))&&d::truth(([&]()->bool{auto _n_logical_5970=((_n_LEVEL_5842/_n_g_5918)>_n_CROWD_5846);return d::truth(_n_logical_5970)?_n_logical_5970:(d::mod(_n_L_5919,2.0)==1.0);})()))){d::check_cancel();(void)((([&](){auto&& _n_array_5971=this->_n_lvl_5860;auto _n_index_5972=_n_i_5910;auto _n_value_5973=_n_L_5919;d::put(_n_array_5971,_n_index_5972,_n_value_5973);return _n_value_5973;})(),([&](){auto&& _n_array_5974=this->_n_off_5861;auto _n_index_5975=_n_i_5910;auto _n_value_5976=(std::fabs(((_n_L_5919*_n_LEVEL_5842)-d::at(this->_n_mid_5857,_n_i_5910)))/_n_g_5918);d::put(_n_array_5974,_n_index_5975,_n_value_5976);return _n_value_5976;})()));
}
if((d::truth((_n_lo_5916<(_n_LEVEL_5842/2.0)))&&d::truth((_n_hi_5917>=(_n_LEVEL_5842/2.0))))){d::check_cancel();(void)((([&](){auto&& _n_array_5977=this->_n_dot_5862;auto _n_index_5978=_n_i_5910;auto _n_value_5979=1.0;d::put(_n_array_5977,_n_index_5978,_n_value_5979);return _n_value_5979;})(),([&](){auto&& _n_array_5980=this->_n_doff_5863;auto _n_index_5981=_n_i_5910;auto _n_value_5982=(std::fabs(((_n_LEVEL_5842/2.0)-d::at(this->_n_mid_5857,_n_i_5910)))/_n_g_5918);d::put(_n_array_5980,_n_index_5981,_n_value_5982);return _n_value_5982;})()));
}
}}
}}
(void)(this->_n_sea_5864.fill(0.0));
d::Array<double,false> _n_stack_5920=d::Array<double,false>{};
{double _n_i_5921=0.0;
for(;d::truth((_n_i_5921<this->_n_N_5855));(void)((_n_i_5921++))){d::check_cancel();double _n_r_5922=double(d::i32((_n_i_5921/this->_n_cols_5850))|d::i32(0.0));
double _n_c_5923=d::mod(_n_i_5921,this->_n_cols_5850);
if((d::truth(([&]()->bool{auto _n_logical_5983=([&]()->bool{auto _n_logical_5984=([&]()->bool{auto _n_logical_5985=(_n_r_5922==0.0);return d::truth(_n_logical_5985)?_n_logical_5985:(_n_c_5923==0.0);})();return d::truth(_n_logical_5984)?_n_logical_5984:(_n_r_5922==(this->_n_rows_5851-1.0));})();return d::truth(_n_logical_5983)?_n_logical_5983:(_n_c_5923==(this->_n_cols_5850-1.0));})())&&d::truth((d::at(this->_n_mid_5857,_n_i_5921)<(_n_LEVEL_5842/2.0))))){d::check_cancel();(void)((([&](){auto&& _n_array_5986=this->_n_sea_5864;auto _n_index_5987=_n_i_5921;auto _n_value_5988=1.0;d::put(_n_array_5986,_n_index_5987,_n_value_5988);return _n_value_5988;})(),_n_stack_5920.push(_n_i_5921)));
}
}}
while(d::truth(double(_n_stack_5920.size()))){d::check_cancel();double _n_i_5924=d::read(_n_stack_5920.pop());
double _n_r_5925=double(d::i32((_n_i_5924/this->_n_cols_5850))|d::i32(0.0));
double _n_c_5926=d::mod(_n_i_5924,this->_n_cols_5850);
for(auto &&_n_item_5989:d::Array<double,false>{(d::truth((_n_c_5926>0.0))?(_n_i_5924-1.0):(-d::number(1.0))),(d::truth((_n_c_5926<(this->_n_cols_5850-1.0)))?(_n_i_5924+1.0):(-d::number(1.0))),(d::truth((_n_r_5925>0.0))?(_n_i_5924-this->_n_cols_5850):(-d::number(1.0))),(d::truth((_n_r_5925<(this->_n_rows_5851-1.0)))?(_n_i_5924+this->_n_cols_5850):(-d::number(1.0)))}){d::check_cancel();double _n_j_5927=_n_item_5989;
if(((d::truth((_n_j_5927>=0.0))&&d::truth((!d::truth(d::at(this->_n_sea_5864,_n_j_5927)))))&&d::truth((d::at(this->_n_mid_5857,_n_j_5927)<(_n_LEVEL_5842/2.0))))){d::check_cancel();(void)((([&](){auto&& _n_array_5990=this->_n_sea_5864;auto _n_index_5991=_n_j_5927;auto _n_value_5992=1.0;d::put(_n_array_5990,_n_index_5991,_n_value_5992);return _n_value_5992;})(),_n_stack_5920.push(_n_j_5927)));
}
}
}
{double _n_i_5928=0.0;
for(;d::truth((_n_i_5928<this->_n_N_5855));(void)((_n_i_5928++))){d::check_cancel();double _n_r_5929=double(d::i32((_n_i_5928/this->_n_cols_5850))|d::i32(0.0));
double _n_c_5930=d::mod(_n_i_5928,this->_n_cols_5850);
if((((((d::truth(d::at(this->_n_dot_5862,_n_i_5928))&&d::truth((!d::truth(d::at(this->_n_sea_5864,_n_i_5928)))))&&d::truth((!d::truth(([&]()->std::variant<double,bool>{auto _n_logical_5993=(_n_c_5930>0.0);return d::truth(_n_logical_5993)?std::variant<double,bool>(d::at(this->_n_sea_5864,(_n_i_5928-1.0))):std::variant<double,bool>(_n_logical_5993);})()))))&&d::truth((!d::truth(([&]()->std::variant<double,bool>{auto _n_logical_5994=(_n_c_5930<(this->_n_cols_5850-1.0));return d::truth(_n_logical_5994)?std::variant<double,bool>(d::at(this->_n_sea_5864,(_n_i_5928+1.0))):std::variant<double,bool>(_n_logical_5994);})()))))&&d::truth((!d::truth(([&]()->std::variant<double,bool>{auto _n_logical_5995=(_n_r_5929>0.0);return d::truth(_n_logical_5995)?std::variant<double,bool>(d::at(this->_n_sea_5864,(_n_i_5928-this->_n_cols_5850))):std::variant<double,bool>(_n_logical_5995);})()))))&&d::truth((!d::truth(([&]()->std::variant<double,bool>{auto _n_logical_5996=(_n_r_5929<(this->_n_rows_5851-1.0));return d::truth(_n_logical_5996)?std::variant<double,bool>(d::at(this->_n_sea_5864,(_n_i_5928+this->_n_cols_5850))):std::variant<double,bool>(_n_logical_5996);})()))))){d::check_cancel();(void)(([&](){auto&& _n_array_5997=this->_n_dot_5862;auto _n_index_5998=_n_i_5928;auto _n_value_5999=0.0;d::put(_n_array_5997,_n_index_5998,_n_value_5999);return _n_value_5999;})());
}
}}
d::Array<uint8_t,true> _n_keep_5931=this->_n_thin_5869(std::variant<d::Array<uint8_t,true>,d::Array<int16_t,true>>(this->_n_lvl_5860),this->_n_off_5861);
d::Array<uint8_t,true> _n_dots_5932=this->_n_thin_5869(std::variant<d::Array<uint8_t,true>,d::Array<int16_t,true>>(this->_n_dot_5862),this->_n_doff_5863);
{double _n_i_5933=0.0;
for(;d::truth((_n_i_5933<this->_n_N_5855));(void)((_n_i_5933++))){d::check_cancel();(void)(([&](){auto&& _n_array_6000=this->_n_out_5866;auto _n_index_6001=_n_i_5933;auto _n_value_6002=(d::truth(d::at(_n_dots_5932,_n_i_5933))?d::String(u"·"):d::String(u" "));d::put(_n_array_6000,_n_index_6001,_n_value_6002);return _n_value_6002;})());
if(d::truth((!d::truth(d::at(_n_keep_5931,_n_i_5933))))){d::check_cancel();continue;
}
double _n_L_5934=d::at(this->_n_lvl_5860,_n_i_5933);
double _n_c_5935=d::mod(_n_i_5933,this->_n_cols_5850);
double _n_angle_5936=(([&](){auto _n_argument_6003=std::fabs(d::at(this->_n_gx_5858,_n_i_5933));auto _n_argument_6004=std::fabs(d::at(this->_n_gy_5859,_n_i_5933));return std::atan2(_n_argument_6003,_n_argument_6004);})()*(180.0/ascii::PI));
double _n_y_5937=(0.5+(((_n_L_5934*_n_LEVEL_5842)-d::at(this->_n_mid_5857,_n_i_5933))/(([&]()->double{auto _n_logical_6005=d::at(this->_n_gy_5859,_n_i_5933);return d::truth(_n_logical_6005)?_n_logical_6005:1e-9;})()*_n_RH_5841)));
auto _n_twin_5938=[&]( double _a0) mutable ->std::variant<bool,double>{double _n_j_5939=_a0;
return ([&]()->std::variant<bool,double>{auto _n_logical_6006=([&]()->std::variant<bool,double>{auto _n_logical_6007=([&]()->std::variant<double,bool>{auto _n_logical_6008=(_n_j_5939>=0.0);return d::truth(_n_logical_6008)?std::variant<double,bool>(d::at(_n_keep_5931,_n_j_5939)):std::variant<double,bool>(_n_logical_6008);})();return d::truth(_n_logical_6007)?std::variant<bool,double>((d::at(this->_n_lvl_5860,_n_j_5939)==_n_L_5934)):std::visit([&](const auto &_v)->std::variant<bool,double>{return std::variant<bool,double>(_v);},_n_logical_6007);})();return d::truth(_n_logical_6006)?std::variant<bool,double>((d::at(this->_n_off_5861,_n_j_5939)<d::at(this->_n_off_5861,_n_i_5933))):_n_logical_6006;})();};
std::variant<bool,double> _n_paired_5940=([&]()->std::variant<bool,double>{auto _n_logical_6009=([&]()->bool{auto _n_logical_6011=(_n_angle_5936>45.0);return d::truth(_n_logical_6011)?(_n_angle_5936<=63.0):_n_logical_6011;})();return d::truth(_n_logical_6009)?([&]()->std::variant<bool,double>{auto _n_logical_6010=_n_twin_5938((d::truth((_n_c_5935>0.0))?(_n_i_5933-1.0):(-d::number(1.0))));return d::truth(_n_logical_6010)?_n_logical_6010:_n_twin_5938((d::truth((_n_c_5935<(this->_n_cols_5850-1.0)))?(_n_i_5933+1.0):(-d::number(1.0))));})():std::variant<bool,double>(_n_logical_6009);})();
if(d::truth((_n_angle_5936>76.0))){d::check_cancel();(void)(([&](){auto&& _n_array_6012=this->_n_out_5866;auto _n_index_6013=_n_i_5933;auto _n_value_6014=d::String(u"|");d::put(_n_array_6012,_n_index_6013,_n_value_6014);return _n_value_6014;})());
}else {d::check_cancel();if((d::truth((_n_angle_5936>45.0))&&d::truth((!d::truth(([&]()->std::variant<bool,double>{auto _n_logical_6015=_n_paired_5940;return d::truth(_n_logical_6015)?([&]()->std::variant<bool,double>{auto _n_logical_6016=(_n_y_5937<0.35);return d::truth(_n_logical_6016)?std::variant<bool,double>(_n_logical_6016):std::variant<bool,double>((_n_y_5937>0.65));})():_n_logical_6015;})()))))){d::check_cancel();(void)(([&](){auto&& _n_array_6017=this->_n_out_5866;auto _n_index_6018=_n_i_5933;auto _n_value_6019=(d::truth(((d::at(this->_n_gx_5858,_n_i_5933)*d::at(this->_n_gy_5859,_n_i_5933))>0.0))?d::String(u"/"):d::String(u"\\"));d::put(_n_array_6017,_n_index_6018,_n_value_6019);return _n_value_6019;})());
}else {d::check_cancel();if((d::truth((_n_angle_5936<10.0))&&d::truth((!d::truth(_n_paired_5940))))){d::check_cancel();(void)(([&](){auto&& _n_array_6020=this->_n_out_5866;auto _n_index_6021=_n_i_5933;auto _n_value_6022=(d::truth((_n_y_5937<0.6))?d::String(u"-"):d::String(u"_"));d::put(_n_array_6020,_n_index_6021,_n_value_6022);return _n_value_6022;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_6023=this->_n_out_5866;auto _n_index_6024=_n_i_5933;auto _n_value_6025=(d::truth((_n_y_5937<0.3))?d::String(u"'"):(d::truth((_n_y_5937<0.6))?d::String(u"-"):(d::truth((_n_y_5937<0.85))?d::String(u"."):d::String(u"_"))));d::put(_n_array_6023,_n_index_6024,_n_value_6025);return _n_value_6025;})());
}
}
}
}}
d::Array<d::String,false> _n_lines_5941=d::Array<d::String,false>{};
{double _n_r_5942=0.0;
for(;d::truth((_n_r_5942<this->_n_rows_5851));(void)((_n_r_5942++))){d::check_cancel();(void)(_n_lines_5941.push(d::join(this->_n_out_5866.slice((_n_r_5942*this->_n_cols_5850),((_n_r_5942+1.0)*this->_n_cols_5850)),d::String(u""))));
}}
return d::join(_n_lines_5941,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("contour-map").cols)*ascii::catalog_meta("contour-map").rows);auto _env=std::make_shared<_n_Record_5943>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &contour_map_meta(){return catalog_meta("contour-map");}
std::unique_ptr<Piece> make_contour_map(const AsciiPieceOptions &o){return std::make_unique<Native_contour_map>(o);}
}
