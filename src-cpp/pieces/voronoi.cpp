// Direct, statically typed C++ from src/pieces/voronoi.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36682;
struct _n_Record_36693;
struct _n_Record_36774;
struct _n_Record_36682{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_36682> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36682>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_36693{
double _p_hx{};
double _p_hy{};
double _p_r{};
double _p_turns{};
double _p_p{};
static std::shared_ptr<_n_Record_36693> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36693>();out->_p_hx=d::decode<double>(j["hx"]);out->_p_hy=d::decode<double>(j["hy"]);out->_p_r=d::decode<double>(j["r"]);out->_p_turns=d::decode<double>(j["turns"]);out->_p_p=d::decode<double>(j["p"]);return out;}
};
struct _n_Record_36774{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36774> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36774>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_36686(double _a0);
std::shared_ptr<_n_Record_36682> _n_meta_36681=[](){return ([&](){auto _n_object_36777=std::make_shared<_n_Record_36682>();_n_object_36777->_p_name=d::String(u"voronoi");_n_object_36777->_p_category=d::String(u"generative");_n_object_36777->_p_note=d::String(u"cells of ground nearest each drifting seed");_n_object_36777->_p_cols=64.0;_n_object_36777->_p_rows=22.0;_n_object_36777->_p_fps=15.0;return _n_object_36777;})();}();
const double _n_CW_36683=[](){return 0.6;}();
const double _n_RH_36684=[](){return 1.2;}();
const double _n_PERIOD_36685=[](){return 30.0;}();
std::function<double()> _n_mulberry32_36686(double _a0){double _n_a_36702=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_36702=double(d::i32((_n_a_36702+1831565813.0))|d::i32(0.0))));
double _n_t_36703=d::imul(double(d::i32(_n_a_36702)^d::i32(double(d::u32(_n_a_36702)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_36702)));
(void)((_n_t_36703=double(d::i32((_n_t_36703+d::imul(double(d::i32(_n_t_36703)^d::i32(double(d::u32(_n_t_36703)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_36703)))))^d::i32(_n_t_36703))));
return (double(d::u32(double(d::i32(_n_t_36703)^d::i32(double(d::u32(_n_t_36703)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_voronoi final:ascii::Piece{
double _n_cols_36687{};
double _n_rows_36688{};
double _n_X_36689{};
double _n_Y_36690{};
std::function<double()> _n_rand_36691{};
d::Array<std::shared_ptr<_n_Record_36693>,false> _n_seeds_36692{};
double _n_N_36695{};
d::Array<double,true> _n_sx_36696{};
d::Array<double,true> _n_sy_36697{};
d::Array<d::String,false> _n_grid_36698{};
std::function<d::String(double,std::shared_ptr<_n_Record_36774>)> _render;
double _n_clamp_36694(double _a0,double _a1,double _a2){double _n_v_36704=_a0;
double _n_lo_36705=_a1;
double _n_hi_36706=_a2;
return ([&](){auto _n_argument_36802=_n_lo_36705;auto _n_argument_36803=d::minimum({_n_hi_36706,_n_v_36704});return d::maximum({_n_argument_36802,_n_argument_36803});})();}

d::Array<d::Array<double,false>,false> _n_cell_36699(double _a0){double _n_i_36713=_a0;
{
d::Array<d::Array<double,false>,false> _n_poly_36714=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,(-d::number(1.0))},d::Array<double,false>{this->_n_X_36689,0.0,(-d::number(1.0))},d::Array<double,false>{this->_n_X_36689,this->_n_Y_36690,(-d::number(1.0))},d::Array<double,false>{0.0,this->_n_Y_36690,(-d::number(1.0))}};
{double _n_j_36715=0.0;
for(;(d::truth((_n_j_36715<this->_n_N_36695))&&d::truth(double(_n_poly_36714.size())));(void)((_n_j_36715++))){d::check_cancel();if(d::truth((_n_j_36715==_n_i_36713))){d::check_cancel();continue;
}
double _n_nx_36716=(d::at(this->_n_sx_36696,_n_j_36715)-d::at(this->_n_sx_36696,_n_i_36713));
double _n_ny_36717=(d::at(this->_n_sy_36697,_n_j_36715)-d::at(this->_n_sy_36697,_n_i_36713));
double _n_c_36718=(((_n_nx_36716*(d::at(this->_n_sx_36696,_n_i_36713)+d::at(this->_n_sx_36696,_n_j_36715)))/2.0)+((_n_ny_36717*(d::at(this->_n_sy_36697,_n_i_36713)+d::at(this->_n_sy_36697,_n_j_36715)))/2.0));
d::Array<d::Array<double,false>,false> _n_out_36719=d::Array<d::Array<double,false>,false>{};
{double _n_k_36720=0.0;
for(;d::truth((_n_k_36720<double(_n_poly_36714.size())));(void)((_n_k_36720++))){d::check_cancel();d::Array<double,false> _n_a_36721=d::at(_n_poly_36714,_n_k_36720);
d::Array<double,false> _n_b_36722=d::at(_n_poly_36714,d::mod((_n_k_36720+1.0),double(_n_poly_36714.size())));
double _n_da_36723=(((d::at(_n_a_36721,0.0)*_n_nx_36716)+(d::at(_n_a_36721,1.0)*_n_ny_36717))-_n_c_36718);
double _n_db_36724=(((d::at(_n_b_36722,0.0)*_n_nx_36716)+(d::at(_n_b_36722,1.0)*_n_ny_36717))-_n_c_36718);
if(d::truth((_n_da_36723<=0.0))){d::check_cancel();(void)(_n_out_36719.push(_n_a_36721));
}
if(d::truth(((_n_da_36723<=0.0)!=(_n_db_36724<=0.0)))){d::check_cancel();double _n_f_36725=(_n_da_36723/(_n_da_36723-_n_db_36724));
(void)(_n_out_36719.push(d::Array<double,false>{(d::at(_n_a_36721,0.0)+((d::at(_n_b_36722,0.0)-d::at(_n_a_36721,0.0))*_n_f_36725)),(d::at(_n_a_36721,1.0)+((d::at(_n_b_36722,1.0)-d::at(_n_a_36721,1.0))*_n_f_36725)),(d::truth((_n_da_36723<=0.0))?_n_j_36715:d::at(_n_a_36721,2.0))}));
}
}}
(void)((_n_poly_36714=_n_out_36719));
}}
return _n_poly_36714;

}
}

void _n_put_36700(double _a0,double _a1,d::String _a2){double _n_c_36726=_a0;
double _n_r_36727=_a1;
d::String _n_ch_36728=_a2;
{
if((((d::truth((_n_c_36726>=0.0))&&d::truth((_n_c_36726<this->_n_cols_36687)))&&d::truth((_n_r_36727>=0.0)))&&d::truth((_n_r_36727<this->_n_rows_36688)))){d::check_cancel();(void)(([&](){auto&& _n_array_36804=this->_n_grid_36698;auto _n_index_36805=((_n_r_36727*this->_n_cols_36687)+_n_c_36726);auto _n_value_36806=_n_ch_36728;d::put(_n_array_36804,_n_index_36805,_n_value_36806);return _n_value_36806;})());
}

}
}

void _n_edge_36701(double _a0,double _a1,double _a2,double _a3){double _n_x0_36729=_a0;
double _n_y0_36730=_a1;
double _n_x1_36731=_a2;
double _n_y1_36732=_a3;
{
if(d::truth(([&](){auto _n_left_36807=std::fabs((_n_x1_36731-_n_x0_36729));auto _n_right_36808=std::fabs((_n_y1_36732-_n_y0_36730));return (_n_left_36807<=_n_right_36808);})())){d::check_cancel();if(d::truth((_n_y1_36732<_n_y0_36730))){d::check_cancel();(void)(([&](){auto _n_unpack_36809=d::Array<double,false>{_n_x1_36731,_n_y1_36732,_n_x0_36729,_n_y0_36730};_n_x0_36729=d::at(_n_unpack_36809,0.0);_n_y0_36730=d::at(_n_unpack_36809,1.0);_n_x1_36731=d::at(_n_unpack_36809,2.0);_n_y1_36732=d::at(_n_unpack_36809,3.0);return _n_unpack_36809;})());
}
double _n_k_36733=((_n_x1_36731-_n_x0_36729)/(_n_y1_36732-_n_y0_36730));
{double _n_r_36734=std::ceil((_n_y0_36730-0.5));
for(;d::truth(((_n_r_36734+0.5)<=_n_y1_36732));(void)((_n_r_36734++))){d::check_cancel();double _n_xa_36735=(_n_x0_36729+(_n_k_36733*(_n_r_36734-_n_y0_36730)));
double _n_xb_36736=(_n_x0_36729+(_n_k_36733*((_n_r_36734+1.0)-_n_y0_36730)));
d::String _n_ch_36737=(d::truth(([&](){auto _n_left_36810=std::floor(_n_xa_36735);auto _n_right_36811=std::floor(_n_xb_36736);return (_n_left_36810==_n_right_36811);})())?d::String(u"|"):(d::truth((_n_k_36733>0.0))?d::String(u"\\"):d::String(u"/")));
(void)(([&](){auto _n_argument_36812=std::floor((_n_x0_36729+(_n_k_36733*((_n_r_36734+0.5)-_n_y0_36730))));auto _n_argument_36813=_n_r_36734;auto _n_argument_36814=_n_ch_36737;return this->_n_put_36700(_n_argument_36812,_n_argument_36813,_n_argument_36814);})());
}}
}else {d::check_cancel();if(d::truth((_n_x1_36731<_n_x0_36729))){d::check_cancel();(void)(([&](){auto _n_unpack_36815=d::Array<double,false>{_n_x1_36731,_n_y1_36732,_n_x0_36729,_n_y0_36730};_n_x0_36729=d::at(_n_unpack_36815,0.0);_n_y0_36730=d::at(_n_unpack_36815,1.0);_n_x1_36731=d::at(_n_unpack_36815,2.0);_n_y1_36732=d::at(_n_unpack_36815,3.0);return _n_unpack_36815;})());
}
double _n_k_36738=((_n_y1_36732-_n_y0_36730)/(_n_x1_36731-_n_x0_36729));
double _n_first_36739=std::ceil((_n_x0_36729-0.5));
{double _n_c_36740=_n_first_36739;
for(;d::truth(((_n_c_36740+0.5)<=_n_x1_36731));(void)((_n_c_36740++))){d::check_cancel();double _n_la_36741=d::round((d::truth((_n_c_36740==_n_first_36739))?_n_y0_36730:(_n_y0_36730+(_n_k_36738*(_n_c_36740-_n_x0_36729)))));
double _n_lb_36742=d::round((d::truth(((_n_c_36740+1.5)>_n_x1_36731))?_n_y1_36732:(_n_y0_36730+(_n_k_36738*((_n_c_36740+1.0)-_n_x0_36729)))));
if(d::truth((_n_la_36741==_n_lb_36742))){d::check_cancel();(void)(this->_n_put_36700(_n_c_36740,(_n_la_36741-1.0),d::String(u"_")));
}else {d::check_cancel();if(d::truth((_n_lb_36742<_n_la_36741))){d::check_cancel();(void)(this->_n_put_36700(_n_c_36740,_n_lb_36742,d::String(u"/")));
}else {d::check_cancel();(void)(this->_n_put_36700(_n_c_36740,_n_la_36741,d::String(u"\\")));
}
}
}}
}

}
}

explicit Native_voronoi(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36778=_n_meta_36681;
this->_n_cols_36687=_n_binding_36778->_p_cols;
this->_n_rows_36688=_n_binding_36778->_p_rows;
this->_n_X_36689=(this->_n_cols_36687*_n_CW_36683);
this->_n_Y_36690=(this->_n_rows_36688*_n_RH_36684);
this->_n_rand_36691=_n_mulberry32_36686(7.0);
this->_n_seeds_36692=d::Array<std::shared_ptr<_n_Record_36693>,false>{};
(void)(d::forEach(d::Array<double,false>{4.0,5.0,4.0},[&]( double _a0,double _a1) mutable ->void{double _n_n_36707=_a0;
double _n_row_36708=_a1;
{
{double _n_i_36709=0.0;
for(;d::truth((_n_i_36709<_n_n_36707));(void)((_n_i_36709++))){d::check_cancel();double _n_hx_36710=((((_n_i_36709+0.5)+((this->_n_rand_36691()-0.5)*0.5))/_n_n_36707)*this->_n_X_36689);
double _n_hy_36711=((((_n_row_36708+0.5)+((this->_n_rand_36691()-0.5)*0.4))/3.0)*this->_n_Y_36690);
double _n_r_36712=(2.2+(this->_n_rand_36691()*1.4));
(void)(this->_n_seeds_36692.push(([&](){auto _n_object_36780=std::make_shared<_n_Record_36693>();_n_object_36780->_p_hx=this->_n_clamp_36694(_n_hx_36710,(_n_r_36712+1.0),((this->_n_X_36689-_n_r_36712)-1.0));_n_object_36780->_p_hy=this->_n_clamp_36694(_n_hy_36711,((0.8*_n_r_36712)+0.8),((this->_n_Y_36690-(0.8*_n_r_36712))-0.8));_n_object_36780->_p_r=_n_r_36712;_n_object_36780->_p_turns=([&](){auto _n_left_36781=(d::truth((this->_n_rand_36691()<0.5))?1.0:(-d::number(1.0)));auto _n_right_36782=(1.0+std::floor((this->_n_rand_36691()*2.0)));return (_n_left_36781*_n_right_36782);})();_n_object_36780->_p_p=(this->_n_rand_36691()*6.283);return _n_object_36780;})()));
}}

}
}));
this->_n_N_36695=double(this->_n_seeds_36692.size());
this->_n_sx_36696=d::Array<double,true>(size_t(this->_n_N_36695));
this->_n_sy_36697=d::Array<double,true>(size_t(this->_n_N_36695));
this->_n_grid_36698=d::Array<d::String,false>(size_t((this->_n_cols_36687*this->_n_rows_36688)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36774> _a1) mutable ->d::String{double _n_t_36743=_a0;
auto _n_binding_36785=(d::present(_a1)?_a1:([&](){auto _n_object_36784=std::make_shared<_n_Record_36774>();return _n_object_36784;})());
bool _n_paper_36744=(d::present(_n_binding_36785->_p_paper)?d::read(_n_binding_36785->_p_paper):false);
{
double _n_a_36745=(((2.0*ascii::PI)*_n_t_36743)/_n_PERIOD_36685);
(void)(d::forEach(this->_n_seeds_36692,[&]( std::shared_ptr<_n_Record_36693> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_36693> _n_s_36746=_a0;
double _n_i_36747=_a1;
{
(void)(([&](){auto&& _n_array_36786=this->_n_sx_36696;auto _n_index_36787=_n_i_36747;auto _n_value_36788=(_n_s_36746->_p_hx+(_n_s_36746->_p_r*std::cos(((_n_s_36746->_p_turns*_n_a_36745)+_n_s_36746->_p_p))));d::put(_n_array_36786,_n_index_36787,_n_value_36788);return _n_value_36788;})());
(void)(([&](){auto&& _n_array_36789=this->_n_sy_36697;auto _n_index_36790=_n_i_36747;auto _n_value_36791=(_n_s_36746->_p_hy+((_n_s_36746->_p_r*0.8)*std::sin(((_n_s_36746->_p_turns*_n_a_36745)+_n_s_36746->_p_p))));d::put(_n_array_36789,_n_index_36790,_n_value_36791);return _n_value_36791;})());

}
}));
{double _n_r_36748=0.0;
for(;d::truth((_n_r_36748<this->_n_rows_36688));(void)((_n_r_36748++))){d::check_cancel();{double _n_c_36749=0.0;
for(;d::truth((_n_c_36749<this->_n_cols_36687));(void)((_n_c_36749++))){d::check_cancel();double _n_px_36750=((_n_c_36749+0.5)*_n_CW_36683);
double _n_py_36751=((_n_r_36748+0.5)*_n_RH_36684);
double _n_d1_36752=INFINITY;
double _n_d2_36753=INFINITY;
{double _n_i_36754=0.0;
for(;d::truth((_n_i_36754<this->_n_N_36695));(void)((_n_i_36754++))){d::check_cancel();double _n_d_36755=(std::pow((_n_px_36750-d::at(this->_n_sx_36696,_n_i_36754)),2.0)+std::pow((_n_py_36751-d::at(this->_n_sy_36697,_n_i_36754)),2.0));
if(d::truth((_n_d_36755<_n_d1_36752))){d::check_cancel();(void)(((_n_d2_36753=_n_d1_36752),(_n_d1_36752=_n_d_36755)));
}else {d::check_cancel();if(d::truth((_n_d_36755<_n_d2_36753))){d::check_cancel();(void)((_n_d2_36753=_n_d_36755));
}
}
}}
double _n_f_36756=std::sqrt((_n_d1_36752/_n_d2_36753));
double _n_lv_36757=(d::truth(_n_paper_36744)?(d::truth((_n_f_36756<0.45))?0.0:(d::truth((_n_f_36756<0.62))?1.0:(d::truth((_n_f_36756<0.84))?2.0:0.0))):(d::truth((_n_f_36756<0.22))?3.0:(d::truth((_n_f_36756<0.42))?2.0:(d::truth((_n_f_36756<0.62))?1.0:0.0))));
(void)(([&](){auto&& _n_array_36792=this->_n_grid_36698;auto _n_index_36793=((_n_r_36748*this->_n_cols_36687)+_n_c_36749);auto _n_value_36794=(d::truth((_n_lv_36757==3.0))?d::String(u":"):((d::truth((_n_lv_36757==2.0))||d::truth(([&]()->std::variant<double,bool>{auto _n_logical_36795=(_n_lv_36757==1.0);return d::truth(_n_logical_36795)?std::variant<double,bool>(d::mod((_n_r_36748+_n_c_36749),2.0)):std::variant<double,bool>(_n_logical_36795);})()))?d::String(u"·"):d::String(u" ")));d::put(_n_array_36792,_n_index_36793,_n_value_36794);return _n_value_36794;})());
}}
}}
d::Array<d::Array<double,false>,false> _n_corners_36758=d::Array<d::Array<double,false>,false>{};
{double _n_i_36759=0.0;
for(;d::truth((_n_i_36759<this->_n_N_36695));(void)((_n_i_36759++))){d::check_cancel();d::Array<d::Array<double,false>,false> _n_poly_36760=this->_n_cell_36699(_n_i_36759);
{double _n_k_36761=0.0;
for(;d::truth((_n_k_36761<double(_n_poly_36760.size())));(void)((_n_k_36761++))){d::check_cancel();d::Array<double,false> _n_p_36762=d::at(_n_poly_36760,_n_k_36761);
d::Array<double,false> _n_q_36763=d::at(_n_poly_36760,d::mod((_n_k_36761+1.0),double(_n_poly_36760.size())));
double _n_j_36764=d::at(_n_p_36762,2.0);
if(d::truth((_n_j_36764>_n_i_36759))){d::check_cancel();(void)(this->_n_edge_36701((d::at(_n_p_36762,0.0)/_n_CW_36683),(d::at(_n_p_36762,1.0)/_n_RH_36684),(d::at(_n_q_36763,0.0)/_n_CW_36683),(d::at(_n_q_36763,1.0)/_n_RH_36684)));
}
double _n_prev_36765=d::at(d::at(_n_poly_36760,d::mod(((_n_k_36761+double(_n_poly_36760.size()))-1.0),double(_n_poly_36760.size()))),2.0);
if((((d::truth((_n_j_36764>=0.0))&&d::truth((_n_prev_36765>=0.0)))&&d::truth((_n_i_36759<_n_j_36764)))&&d::truth((_n_i_36759<_n_prev_36765)))){d::check_cancel();(void)(_n_corners_36758.push(_n_p_36762));
}
}}
}}
for(auto &&_n_item_36796:_n_corners_36758){d::check_cancel();auto _n_binding_36797=_n_item_36796;
double _n_x_36766=d::at(_n_binding_36797,0.0);
double _n_y_36767=d::at(_n_binding_36797,1.0);
(void)(([&](){auto _n_argument_36798=std::floor((_n_x_36766/_n_CW_36683));auto _n_argument_36799=(d::round((_n_y_36767/_n_RH_36684))-1.0);auto _n_argument_36800=d::String(u"+");return this->_n_put_36700(_n_argument_36798,_n_argument_36799,_n_argument_36800);})());
}
{double _n_i_36768=0.0;
for(;d::truth((_n_i_36768<this->_n_N_36695));(void)((_n_i_36768++))){d::check_cancel();double _n_c_36769=std::floor((d::at(this->_n_sx_36696,_n_i_36768)/_n_CW_36683));
double _n_r_36770=std::floor((d::at(this->_n_sy_36697,_n_i_36768)/_n_RH_36684));
for(auto &&_n_item_36801:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_d_36771=_n_item_36801;
if(d::truth(d::includes(d::String(u":·"),d::at(this->_n_grid_36698,(((_n_r_36770*this->_n_cols_36687)+_n_c_36769)+_n_d_36771))))){d::check_cancel();(void)(this->_n_put_36700((_n_c_36769+_n_d_36771),_n_r_36770,d::String(u" ")));
}
}
(void)(this->_n_put_36700(_n_c_36769,_n_r_36770,d::String(u"@")));
}}
d::Array<d::String,false> _n_lines_36772=d::Array<d::String,false>{};
{double _n_r_36773=0.0;
for(;d::truth((_n_r_36773<this->_n_rows_36688));(void)((_n_r_36773++))){d::check_cancel();(void)(_n_lines_36772.push(d::join(this->_n_grid_36698.slice((_n_r_36773*this->_n_cols_36687),((_n_r_36773+1.0)*this->_n_cols_36687)),d::String(u""))));
}}
return d::join(_n_lines_36772,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("voronoi").cols)*ascii::catalog_meta("voronoi").rows);auto _env=std::make_shared<_n_Record_36774>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &voronoi_meta(){return catalog_meta("voronoi");}
std::unique_ptr<Piece> make_voronoi(const AsciiPieceOptions &o){return std::make_unique<Native_voronoi>(o);}
}
