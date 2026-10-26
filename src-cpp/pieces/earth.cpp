// Direct, statically typed C++ from src/pieces/earth.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_8422;
struct _n_Record_8514;
struct _n_Record_8422{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_8422> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8422>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_8514{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_8514> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8514>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_8432(double _a0);
std::shared_ptr<_n_Record_8422> _n_meta_8421=[](){return ([&](){auto _n_object_8517=std::make_shared<_n_Record_8422>();_n_object_8517->_p_name=d::String(u"earth");_n_object_8517->_p_category=d::String(u"space");_n_object_8517->_p_note=d::String(u"a lit globe turning, continents from a five-degree map");_n_object_8517->_p_cols=60.0;_n_object_8517->_p_rows=30.0;_n_object_8517->_p_fps=20.0;return _n_object_8517;})();}();
d::Array<d::String,false> _n_MAP_8423=[](){return d::Array<d::String,false>{d::String(u"                                                                        "),d::String(u"                     ##   ######                                        "),d::String(u"             ###################       #                #               "),d::String(u"           ###########   #######                  ###########           "),d::String(u"#  ##############   ###  #####         #################################"),d::String(u"   ##############    ##   ##    #    ### ############################## "),d::String(u"    #    #########  ####           # ## ########################   ##   "),d::String(u"          ###############         ## ###########################        "),d::String(u"           #############           #############################        "),d::String(u"           ###########            ### ####  ## ###############  #       "),d::String(u"           ##########             ##     ################### #          "),d::String(u"            ########              ##### #  #################  #         "),d::String(u"             ####  #             ###########################            "),d::String(u"               ##                ###############  #########             "),d::String(u"                ###              ##############    ##  ###  #           "),d::String(u"                  ##             #############     #    ##  #           "),d::String(u"                    #####         ############          #   #           "),d::String(u"                    ######            #######          ## ##            "),d::String(u"                    ########          ######            # ### ##        "),d::String(u"                    #########         ######             ##    ###      "),d::String(u"                     ########          #####                  #         "),d::String(u"                      ######          ###### #               ####       "),d::String(u"                      ######           ####  #             #######      "),d::String(u"                      ####             ####                ########     "),d::String(u"                     ####              ###                 #######      "),d::String(u"                     ###                                        ##      "),d::String(u"                     ##                                               # "),d::String(u"                     ##                                                 "),d::String(u"                     #                                                  "),d::String(u"                                                                        "),d::String(u"                                                                        "),d::String(u"                       #                       ##################       "),d::String(u"                    ####        ######################################  "),d::String(u"  ####################################################################  "),d::String(u"########################################################################"),d::String(u"########################################################################")};}();
const double _n_MW_8424=[](){return 72.0;}();
const double _n_MH_8425=[](){return 36.0;}();
const d::String _n_LAND_8426=[](){return d::String(u":+*#%@");}();
const d::String _n_PAPER_LAND_8427=[](){return d::String(u"##%%%@");}();
const double _n_DAY_8428=[](){return 36.0;}();
const double _n_START_8429=[](){return 20.0;}();
const double _n_TILT_8430=[](){return 0.3;}();
const double _n_SS_8431=[](){return 2.0;}();
std::function<double()> _n_mulberry32_8432(double _a0){double _n_a_8457=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_8457=double(d::i32((_n_a_8457+1831565813.0))|d::i32(0.0))));
double _n_t_8458=d::imul(double(d::i32(_n_a_8457)^d::i32(double(d::u32(_n_a_8457)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_8457)));
(void)((_n_t_8458=double(d::i32((_n_t_8458+d::imul(double(d::i32(_n_t_8458)^d::i32(double(d::u32(_n_t_8458)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_8458)))))^d::i32(_n_t_8458))));
return (double(d::u32(double(d::i32(_n_t_8458)^d::i32(double(d::u32(_n_t_8458)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_earth final:ascii::Piece{
double _n_cols_8433{};
double _n_rows_8434{};
double _n_cx_8435{};
double _n_cy_8436{};
double _n_R_8437{};
d::Array<float,true> _n_land_8438{};
double _n_m_8440{};
double _n_lx_8441{};
double _n_ly_8442{};
double _n_lz_8443{};
double _n_hm_8444{};
double _n_hx_8445{};
double _n_hy_8446{};
double _n_hz_8447{};
d::Array<d::Array<double,false>,false> _n_cells_8448{};
double _n_cT_8449{};
double _n_sT_8450{};
d::Array<uint8_t,true> _n_limb_8452{};
std::function<double()> _n_rand_8454{};
d::Array<uint8_t,true> _n_stars_8455{};
std::function<d::String(double,std::shared_ptr<_n_Record_8514>)> _render;
double _n_at_8439(double _a0,double _a1){double _n_u_8461=_a0;
double _n_v_8462=_a1;
{
double _n_x_8463=(_n_u_8461-0.5);
double _n_y_8464=([&](){auto _n_argument_8540=(_n_MH_8425-1.0);auto _n_argument_8541=d::maximum({0.0,(_n_v_8462-0.5)});return d::minimum({_n_argument_8540,_n_argument_8541});})();
double _n_x0_8465=std::floor(_n_x_8463);
double _n_y0_8466=std::floor(_n_y_8464);
double _n_fx_8467=(_n_x_8463-_n_x0_8465);
double _n_fy_8468=(_n_y_8464-_n_y0_8466);
double _n_y1_8469=d::minimum({(_n_MH_8425-1.0),(_n_y0_8466+1.0)});
double _n_a_8470=d::mod((d::mod(_n_x0_8465,_n_MW_8424)+_n_MW_8424),_n_MW_8424);
double _n_b_8471=d::mod((_n_a_8470+1.0),_n_MW_8424);
double _n_top_8472=((d::at(this->_n_land_8438,((_n_y0_8466*_n_MW_8424)+_n_a_8470))*(1.0-_n_fx_8467))+(d::at(this->_n_land_8438,((_n_y0_8466*_n_MW_8424)+_n_b_8471))*_n_fx_8467));
double _n_bot_8473=((d::at(this->_n_land_8438,((_n_y1_8469*_n_MW_8424)+_n_a_8470))*(1.0-_n_fx_8467))+(d::at(this->_n_land_8438,((_n_y1_8469*_n_MW_8424)+_n_b_8471))*_n_fx_8467));
return ((_n_top_8472*(1.0-_n_fy_8468))+(_n_bot_8473*_n_fy_8468));

}
}

bool _n_inside_8451(double _a0,double _a1){double _n_c_8487=_a0;
double _n_r_8488=_a1;
return ([&]()->bool{auto _n_logical_8542=([&]()->bool{auto _n_logical_8543=([&]()->bool{auto _n_logical_8544=([&]()->bool{auto _n_logical_8545=(_n_c_8487>=0.0);return d::truth(_n_logical_8545)?(_n_c_8487<this->_n_cols_8433):_n_logical_8545;})();return d::truth(_n_logical_8544)?(_n_r_8488>=0.0):_n_logical_8544;})();return d::truth(_n_logical_8543)?(_n_r_8488<this->_n_rows_8434):_n_logical_8543;})();return d::truth(_n_logical_8542)?((double(d::at(this->_n_cells_8448,((_n_r_8488*this->_n_cols_8433)+_n_c_8487)).size())*2.0)>=((4.0*_n_SS_8431)*_n_SS_8431)):_n_logical_8542;})();}

bool _n_rim_8453(double _a0,double _a1){double _n_c_8493=_a0;
double _n_r_8494=_a1;
return (d::at(this->_n_limb_8452,((_n_r_8494*this->_n_cols_8433)+_n_c_8493))==1.0);}

bool _n_crest_8456(double _a0,double _a1){double _n_u_8497=_a0;
double _n_v_8498=_a1;
{
double _n_h_8499=(std::sin(([&](){auto _n_left_8546=(std::floor((_n_u_8497*1.5))*12.9898);auto _n_right_8547=(std::floor((_n_v_8498*1.5))*78.233);return (_n_left_8546+_n_right_8547);})())*43758.5453);
return ((_n_h_8499-std::floor(_n_h_8499))<0.12);

}
}

explicit Native_earth(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_8518=_n_meta_8421;
this->_n_cols_8433=_n_binding_8518->_p_cols;
this->_n_rows_8434=_n_binding_8518->_p_rows;
this->_n_cx_8435=(this->_n_cols_8433/2.0);
this->_n_cy_8436=(this->_n_rows_8434/2.0);
this->_n_R_8437=((this->_n_rows_8434/2.0)-1.0);
this->_n_land_8438=d::Array<float,true>(size_t((_n_MW_8424*_n_MH_8425)));
{double _n_r_8459=0.0;
for(;d::truth((_n_r_8459<_n_MH_8425));(void)((_n_r_8459++))){d::check_cancel();{double _n_c_8460=0.0;
for(;d::truth((_n_c_8460<_n_MW_8424));(void)((_n_c_8460++))){d::check_cancel();(void)(([&](){auto&& _n_array_8519=this->_n_land_8438;auto _n_index_8520=((_n_r_8459*_n_MW_8424)+_n_c_8460);auto _n_value_8521=(d::truth((d::at(d::at(_n_MAP_8423,_n_r_8459),_n_c_8460)==d::String(u"#")))?1.0:0.0);d::put(_n_array_8519,_n_index_8520,_n_value_8521);return _n_value_8521;})());
}}
}}
this->_n_m_8440=d::hypot(std::initializer_list<double>{(-d::number(0.42)),0.28,0.86});
auto _n_binding_8522=std::array<double,3>{((-d::number(0.42))/this->_n_m_8440),(0.28/this->_n_m_8440),(0.86/this->_n_m_8440)};
this->_n_lx_8441=d::at(_n_binding_8522,0.0);
this->_n_ly_8442=d::at(_n_binding_8522,1.0);
this->_n_lz_8443=d::at(_n_binding_8522,2.0);
this->_n_hm_8444=d::hypot(std::initializer_list<double>{this->_n_lx_8441,this->_n_ly_8442,(this->_n_lz_8443+1.0)});
auto _n_binding_8523=std::array<double,3>{(this->_n_lx_8441/this->_n_hm_8444),(this->_n_ly_8442/this->_n_hm_8444),((this->_n_lz_8443+1.0)/this->_n_hm_8444)};
this->_n_hx_8445=d::at(_n_binding_8523,0.0);
this->_n_hy_8446=d::at(_n_binding_8523,1.0);
this->_n_hz_8447=d::at(_n_binding_8523,2.0);
this->_n_cells_8448=d::Array<d::Array<double,false>,false>{};
this->_n_cT_8449=std::cos(_n_TILT_8430);
this->_n_sT_8450=std::sin(_n_TILT_8430);
{double _n_r_8474=0.0;
for(;d::truth((_n_r_8474<this->_n_rows_8434));(void)((_n_r_8474++))){d::check_cancel();{double _n_c_8475=0.0;
for(;d::truth((_n_c_8475<this->_n_cols_8433));(void)((_n_c_8475++))){d::check_cancel();d::Array<double,false> _n_s_8476=d::Array<double,false>{};
{double _n_j_8477=0.0;
for(;d::truth((_n_j_8477<_n_SS_8431));(void)((_n_j_8477++))){d::check_cancel();{double _n_i_8478=0.0;
for(;d::truth((_n_i_8478<_n_SS_8431));(void)((_n_i_8478++))){d::check_cancel();double _n_x_8479=(((_n_c_8475+((_n_i_8478+0.5)/_n_SS_8431))-this->_n_cx_8435)/(2.0*this->_n_R_8437));
double _n_y_8480=(((this->_n_cy_8436-_n_r_8474)-((_n_j_8477+0.5)/_n_SS_8431))/this->_n_R_8437);
double _n_d_8481=((_n_x_8479*_n_x_8479)+(_n_y_8480*_n_y_8480));
if(d::truth((_n_d_8481>=1.0))){d::check_cancel();continue;
}
double _n_z_8482=std::sqrt((1.0-_n_d_8481));
double _n_py_8483=((_n_y_8480*this->_n_cT_8449)+(_n_z_8482*this->_n_sT_8450));
double _n_pz_8484=((_n_z_8482*this->_n_cT_8449)-(_n_y_8480*this->_n_sT_8450));
double _n_lat_8485=std::asin(_n_py_8483);
double _n_lon_8486=std::atan2(_n_x_8479,_n_pz_8484);
(void)(([&](){auto _n_argument_8524=_n_lon_8486;auto _n_argument_8525=((((ascii::PI/2.0)-_n_lat_8485)/ascii::PI)*_n_MH_8425);auto _n_argument_8526=d::maximum({0.0,(((_n_x_8479*this->_n_lx_8441)+(_n_y_8480*this->_n_ly_8442))+(_n_z_8482*this->_n_lz_8443))});auto _n_argument_8527=std::pow(d::maximum({0.0,(((_n_x_8479*this->_n_hx_8445)+(_n_y_8480*this->_n_hy_8446))+(_n_z_8482*this->_n_hz_8447))}),300.0);return _n_s_8476.push(_n_argument_8524,_n_argument_8525,_n_argument_8526,_n_argument_8527);})());
}}
}}
(void)(this->_n_cells_8448.push(_n_s_8476));
}}
}}
this->_n_limb_8452=d::Array<uint8_t,true>(size_t((this->_n_cols_8433*this->_n_rows_8434)));
{double _n_r_8489=0.0;
for(;d::truth((_n_r_8489<this->_n_rows_8434));(void)((_n_r_8489++))){d::check_cancel();{double _n_c_8490=0.0;
for(;d::truth((_n_c_8490<this->_n_cols_8433));(void)((_n_c_8490++))){d::check_cancel();if(d::truth(this->_n_inside_8451(_n_c_8490,_n_r_8489))){d::check_cancel();{double _n_dr_8491=(-d::number(1.0));
for(;d::truth((_n_dr_8491<=1.0));(void)((_n_dr_8491++))){d::check_cancel();{double _n_dc_8492=(-d::number(1.0));
for(;d::truth((_n_dc_8492<=1.0));(void)((_n_dc_8492++))){d::check_cancel();if(d::truth((!d::truth(this->_n_inside_8451((_n_c_8490+_n_dc_8492),(_n_r_8489+_n_dr_8491)))))){d::check_cancel();(void)(([&](){auto&& _n_array_8528=this->_n_limb_8452;auto _n_index_8529=((_n_r_8489*this->_n_cols_8433)+_n_c_8490);auto _n_value_8530=1.0;d::put(_n_array_8528,_n_index_8529,_n_value_8530);return _n_value_8530;})());
}
}}
}}
}
}}
}}
this->_n_rand_8454=_n_mulberry32_8432(5.0);
this->_n_stars_8455=d::Array<uint8_t,true>(size_t((this->_n_cols_8433*this->_n_rows_8434)));
{double _n_r_8495=0.0;
for(;d::truth((_n_r_8495<this->_n_rows_8434));(void)((_n_r_8495++))){d::check_cancel();{double _n_c_8496=0.0;
for(;d::truth((_n_c_8496<this->_n_cols_8433));(void)((_n_c_8496++))){d::check_cancel();if((d::truth((d::hypot(std::initializer_list<double>{(((_n_c_8496+0.5)-this->_n_cx_8435)/(2.0*this->_n_R_8437)),(((this->_n_cy_8436-_n_r_8495)-0.5)/this->_n_R_8437)})>1.1))&&d::truth((this->_n_rand_8454()<0.03)))){d::check_cancel();(void)(([&](){auto&& _n_array_8531=this->_n_stars_8455;auto _n_index_8532=((_n_r_8495*this->_n_cols_8433)+_n_c_8496);auto _n_value_8533=1.0;d::put(_n_array_8531,_n_index_8532,_n_value_8533);return _n_value_8533;})());
}
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_8514> _a1) mutable ->d::String{double _n_t_8500=_a0;
auto _n_binding_8536=(d::present(_a1)?_a1:([&](){auto _n_object_8535=std::make_shared<_n_Record_8514>();return _n_object_8535;})());
bool _n_paper_8501=(d::present(_n_binding_8536->_p_paper)?d::read(_n_binding_8536->_p_paper):false);
{
double _n_turn_8502=(((_n_START_8429-((360.0*d::mod(_n_t_8500,_n_DAY_8428))/_n_DAY_8428))*ascii::PI)/180.0);
d::String _n_out_8503=d::String(u"");
{double _n_r_8504=0.0;
for(;d::truth((_n_r_8504<this->_n_rows_8434));(void)((_n_r_8504++))){d::check_cancel();if(d::truth(_n_r_8504)){d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string(d::String(u"\n")))));
}
{double _n_c_8505=0.0;
for(;d::truth((_n_c_8505<this->_n_cols_8433));(void)((_n_c_8505++))){d::check_cancel();if(d::truth((!d::truth(this->_n_inside_8451(_n_c_8505,_n_r_8504))))){d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string((d::truth(d::at(this->_n_stars_8455,((_n_r_8504*this->_n_cols_8433)+_n_c_8505)))?d::String(u"."):d::String(u" "))))));
continue;
}
d::Array<double,false> _n_s_8506=d::at(this->_n_cells_8448,((_n_r_8504*this->_n_cols_8433)+_n_c_8505));
double _n_v_8507=0.0;
double _n_l_8508=0.0;
double _n_g_8509=0.0;
double _n_u0_8510=0.0;
{double _n_i_8511=0.0;
for(;d::truth((_n_i_8511<double(_n_s_8506.size())));(void)((_n_i_8511=(_n_i_8511+4.0)))){d::check_cancel();double _n_u_8512=d::mod(((((d::at(_n_s_8506,_n_i_8511)+_n_turn_8502)/(2.0*ascii::PI))+0.5)*_n_MW_8424),_n_MW_8424);
if(d::truth((_n_u_8512<0.0))){d::check_cancel();(void)((_n_u_8512=(_n_u_8512+_n_MW_8424)));
}
if(d::truth((!d::truth(_n_i_8511)))){d::check_cancel();(void)((_n_u0_8510=_n_u_8512));
}
(void)((_n_l_8508=(_n_l_8508+this->_n_at_8439(_n_u_8512,d::at(_n_s_8506,(_n_i_8511+1.0))))));
(void)((_n_v_8507=(_n_v_8507+d::at(_n_s_8506,(_n_i_8511+2.0)))));
(void)((_n_g_8509=(_n_g_8509+d::at(_n_s_8506,(_n_i_8511+3.0)))));
}}
double _n_k_8513=(double(_n_s_8506.size())/4.0);
(void)((_n_v_8507=(_n_v_8507/_n_k_8513)));
(void)((_n_l_8508=(_n_l_8508/_n_k_8513)));
(void)((_n_g_8509=(_n_g_8509/_n_k_8513)));
if(d::truth((_n_l_8508>=0.5))){d::check_cancel();if(d::truth((_n_v_8507<0.03))){d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string((d::truth(this->_n_rim_8453(_n_c_8505,_n_r_8504))?d::String(u"."):d::String(u"·"))))));
}else {d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string(d::at((d::truth(_n_paper_8501)?_n_PAPER_LAND_8427:_n_LAND_8426),([&](){auto _n_argument_8537=(double(_n_LAND_8426.size())-1.0);auto _n_argument_8538=std::floor((((d::truth(_n_paper_8501)?(1.0-_n_v_8507):_n_v_8507)*1.15)*double(_n_LAND_8426.size())));return d::minimum({_n_argument_8537,_n_argument_8538});})())))));
}
}else {d::check_cancel();if(d::truth((_n_v_8507<0.1))){d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string((d::truth(this->_n_rim_8453(_n_c_8505,_n_r_8504))?d::String(u"."):d::String(u" "))))));
}else {d::check_cancel();if(d::truth((_n_g_8509>0.4))){d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string(d::String(u"=")))));
}else {d::check_cancel();if((d::truth((_n_v_8507>0.5))&&d::truth(([&]()->bool{auto _n_logical_8539=(_n_g_8509>0.08);return d::truth(_n_logical_8539)?_n_logical_8539:this->_n_crest_8456(_n_u0_8510,d::at(_n_s_8506,1.0));})()))){d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string(d::String(u"~")))));
}else {d::check_cancel();(void)((_n_out_8503=(d::string(_n_out_8503)+d::string((d::truth((_n_v_8507>0.5))?d::String(u"-"):d::String(u"."))))));
}
}
}
}
}}
}}
return _n_out_8503;

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("earth").cols)*ascii::catalog_meta("earth").rows);auto _env=std::make_shared<_n_Record_8514>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &earth_meta(){return catalog_meta("earth");}
std::unique_ptr<Piece> make_earth(const AsciiPieceOptions &o){return std::make_unique<Native_earth>(o);}
}
