// Direct, statically typed C++ from src/pieces/voronoi.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36683;
struct _n_Record_36694;
struct _n_Record_36775;
struct _n_Record_36683{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_36683> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36683>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_36694{
double _p_hx{};
double _p_hy{};
double _p_r{};
double _p_turns{};
double _p_p{};
static std::shared_ptr<_n_Record_36694> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36694>();out->_p_hx=d::decode<double>(j["hx"]);out->_p_hy=d::decode<double>(j["hy"]);out->_p_r=d::decode<double>(j["r"]);out->_p_turns=d::decode<double>(j["turns"]);out->_p_p=d::decode<double>(j["p"]);return out;}
};
struct _n_Record_36775{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36775> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36775>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_36687(double _a0);
std::shared_ptr<_n_Record_36683> _n_meta_36682=[](){return ([&](){auto _n_object_36778=std::make_shared<_n_Record_36683>();_n_object_36778->_p_name=d::String(u"voronoi");_n_object_36778->_p_category=d::String(u"generative");_n_object_36778->_p_note=d::String(u"cells of ground nearest each drifting seed");_n_object_36778->_p_cols=64.0;_n_object_36778->_p_rows=22.0;_n_object_36778->_p_fps=15.0;return _n_object_36778;})();}();
const double _n_CW_36684=[](){return 0.6;}();
const double _n_RH_36685=[](){return 1.2;}();
const double _n_PERIOD_36686=[](){return 30.0;}();
std::function<double()> _n_mulberry32_36687(double _a0){double _n_a_36703=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_36703=double(d::i32((_n_a_36703+1831565813.0))|d::i32(0.0))));
double _n_t_36704=d::imul(double(d::i32(_n_a_36703)^d::i32(double(d::u32(_n_a_36703)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_36703)));
(void)((_n_t_36704=double(d::i32((_n_t_36704+d::imul(double(d::i32(_n_t_36704)^d::i32(double(d::u32(_n_t_36704)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_36704)))))^d::i32(_n_t_36704))));
return (double(d::u32(double(d::i32(_n_t_36704)^d::i32(double(d::u32(_n_t_36704)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_voronoi final:ascii::Piece{
double _n_cols_36688{};
double _n_rows_36689{};
double _n_X_36690{};
double _n_Y_36691{};
std::function<double()> _n_rand_36692{};
d::Array<std::shared_ptr<_n_Record_36694>,false> _n_seeds_36693{};
double _n_N_36696{};
d::Array<double,true> _n_sx_36697{};
d::Array<double,true> _n_sy_36698{};
d::Array<d::String,false> _n_grid_36699{};
std::function<d::String(double,std::shared_ptr<_n_Record_36775>)> _render;
double _n_clamp_36695(double _a0,double _a1,double _a2){double _n_v_36705=_a0;
double _n_lo_36706=_a1;
double _n_hi_36707=_a2;
return ([&](){auto _n_argument_36803=_n_lo_36706;auto _n_argument_36804=d::minimum({_n_hi_36707,_n_v_36705});return d::maximum({_n_argument_36803,_n_argument_36804});})();}

d::Array<std::array<double,3>,false> _n_cell_36700(double _a0){double _n_i_36714=_a0;
{
d::Array<std::array<double,3>,false> _n_poly_36715=d::Array<std::array<double,3>,false>{std::array<double,3>{0.0,0.0,(-d::number(1.0))},std::array<double,3>{this->_n_X_36690,0.0,(-d::number(1.0))},std::array<double,3>{this->_n_X_36690,this->_n_Y_36691,(-d::number(1.0))},std::array<double,3>{0.0,this->_n_Y_36691,(-d::number(1.0))}};
{double _n_j_36716=0.0;
for(;(d::truth((_n_j_36716<this->_n_N_36696))&&d::truth(double(_n_poly_36715.size())));(void)((_n_j_36716++))){d::check_cancel();if(d::truth((_n_j_36716==_n_i_36714))){d::check_cancel();continue;
}
double _n_nx_36717=(d::at(this->_n_sx_36697,_n_j_36716)-d::at(this->_n_sx_36697,_n_i_36714));
double _n_ny_36718=(d::at(this->_n_sy_36698,_n_j_36716)-d::at(this->_n_sy_36698,_n_i_36714));
double _n_c_36719=(((_n_nx_36717*(d::at(this->_n_sx_36697,_n_i_36714)+d::at(this->_n_sx_36697,_n_j_36716)))/2.0)+((_n_ny_36718*(d::at(this->_n_sy_36698,_n_i_36714)+d::at(this->_n_sy_36698,_n_j_36716)))/2.0));
d::Array<std::array<double,3>,false> _n_out_36720=d::Array<std::array<double,3>,false>{};
{double _n_k_36721=0.0;
for(;d::truth((_n_k_36721<double(_n_poly_36715.size())));(void)((_n_k_36721++))){d::check_cancel();auto&& _n_a_36722=d::at(_n_poly_36715,_n_k_36721);
auto&& _n_b_36723=d::at(_n_poly_36715,d::mod((_n_k_36721+1.0),double(_n_poly_36715.size())));
double _n_da_36724=(((d::at(_n_a_36722,0.0)*_n_nx_36717)+(d::at(_n_a_36722,1.0)*_n_ny_36718))-_n_c_36719);
double _n_db_36725=(((d::at(_n_b_36723,0.0)*_n_nx_36717)+(d::at(_n_b_36723,1.0)*_n_ny_36718))-_n_c_36719);
if(d::truth((_n_da_36724<=0.0))){d::check_cancel();(void)(_n_out_36720.push(_n_a_36722));
}
if(d::truth(((_n_da_36724<=0.0)!=(_n_db_36725<=0.0)))){d::check_cancel();double _n_f_36726=(_n_da_36724/(_n_da_36724-_n_db_36725));
(void)(_n_out_36720.push(std::array<double,3>{(d::at(_n_a_36722,0.0)+((d::at(_n_b_36723,0.0)-d::at(_n_a_36722,0.0))*_n_f_36726)),(d::at(_n_a_36722,1.0)+((d::at(_n_b_36723,1.0)-d::at(_n_a_36722,1.0))*_n_f_36726)),(d::truth((_n_da_36724<=0.0))?_n_j_36716:d::at(_n_a_36722,2.0))}));
}
}}
(void)((_n_poly_36715=_n_out_36720));
}}
return _n_poly_36715;

}
}

void _n_put_36701(double _a0,double _a1,d::String _a2){double _n_c_36727=_a0;
double _n_r_36728=_a1;
d::String _n_ch_36729=_a2;
{
if((((d::truth((_n_c_36727>=0.0))&&d::truth((_n_c_36727<this->_n_cols_36688)))&&d::truth((_n_r_36728>=0.0)))&&d::truth((_n_r_36728<this->_n_rows_36689)))){d::check_cancel();(void)(([&](){auto&& _n_array_36805=this->_n_grid_36699;auto _n_index_36806=((_n_r_36728*this->_n_cols_36688)+_n_c_36727);auto _n_value_36807=_n_ch_36729;d::put(_n_array_36805,_n_index_36806,_n_value_36807);return _n_value_36807;})());
}

}
}

void _n_edge_36702(double _a0,double _a1,double _a2,double _a3){double _n_x0_36730=_a0;
double _n_y0_36731=_a1;
double _n_x1_36732=_a2;
double _n_y1_36733=_a3;
{
if(d::truth(([&](){auto _n_left_36808=std::fabs((_n_x1_36732-_n_x0_36730));auto _n_right_36809=std::fabs((_n_y1_36733-_n_y0_36731));return (_n_left_36808<=_n_right_36809);})())){d::check_cancel();if(d::truth((_n_y1_36733<_n_y0_36731))){d::check_cancel();(void)(([&](){auto _n_unpack_36810=std::array<double,4>{_n_x1_36732,_n_y1_36733,_n_x0_36730,_n_y0_36731};_n_x0_36730=d::at(_n_unpack_36810,0.0);_n_y0_36731=d::at(_n_unpack_36810,1.0);_n_x1_36732=d::at(_n_unpack_36810,2.0);_n_y1_36733=d::at(_n_unpack_36810,3.0);return _n_unpack_36810;})());
}
double _n_k_36734=((_n_x1_36732-_n_x0_36730)/(_n_y1_36733-_n_y0_36731));
{double _n_r_36735=std::ceil((_n_y0_36731-0.5));
for(;d::truth(((_n_r_36735+0.5)<=_n_y1_36733));(void)((_n_r_36735++))){d::check_cancel();double _n_xa_36736=(_n_x0_36730+(_n_k_36734*(_n_r_36735-_n_y0_36731)));
double _n_xb_36737=(_n_x0_36730+(_n_k_36734*((_n_r_36735+1.0)-_n_y0_36731)));
d::String _n_ch_36738=(d::truth(([&](){auto _n_left_36811=std::floor(_n_xa_36736);auto _n_right_36812=std::floor(_n_xb_36737);return (_n_left_36811==_n_right_36812);})())?d::String(u"|"):(d::truth((_n_k_36734>0.0))?d::String(u"\\"):d::String(u"/")));
(void)(([&](){auto _n_argument_36813=std::floor((_n_x0_36730+(_n_k_36734*((_n_r_36735+0.5)-_n_y0_36731))));auto _n_argument_36814=_n_r_36735;auto _n_argument_36815=_n_ch_36738;return this->_n_put_36701(_n_argument_36813,_n_argument_36814,_n_argument_36815);})());
}}
}else {d::check_cancel();if(d::truth((_n_x1_36732<_n_x0_36730))){d::check_cancel();(void)(([&](){auto _n_unpack_36816=std::array<double,4>{_n_x1_36732,_n_y1_36733,_n_x0_36730,_n_y0_36731};_n_x0_36730=d::at(_n_unpack_36816,0.0);_n_y0_36731=d::at(_n_unpack_36816,1.0);_n_x1_36732=d::at(_n_unpack_36816,2.0);_n_y1_36733=d::at(_n_unpack_36816,3.0);return _n_unpack_36816;})());
}
double _n_k_36739=((_n_y1_36733-_n_y0_36731)/(_n_x1_36732-_n_x0_36730));
double _n_first_36740=std::ceil((_n_x0_36730-0.5));
{double _n_c_36741=_n_first_36740;
for(;d::truth(((_n_c_36741+0.5)<=_n_x1_36732));(void)((_n_c_36741++))){d::check_cancel();double _n_la_36742=d::round((d::truth((_n_c_36741==_n_first_36740))?_n_y0_36731:(_n_y0_36731+(_n_k_36739*(_n_c_36741-_n_x0_36730)))));
double _n_lb_36743=d::round((d::truth(((_n_c_36741+1.5)>_n_x1_36732))?_n_y1_36733:(_n_y0_36731+(_n_k_36739*((_n_c_36741+1.0)-_n_x0_36730)))));
if(d::truth((_n_la_36742==_n_lb_36743))){d::check_cancel();(void)(this->_n_put_36701(_n_c_36741,(_n_la_36742-1.0),d::String(u"_")));
}else {d::check_cancel();if(d::truth((_n_lb_36743<_n_la_36742))){d::check_cancel();(void)(this->_n_put_36701(_n_c_36741,_n_lb_36743,d::String(u"/")));
}else {d::check_cancel();(void)(this->_n_put_36701(_n_c_36741,_n_la_36742,d::String(u"\\")));
}
}
}}
}

}
}

explicit Native_voronoi(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36779=_n_meta_36682;
this->_n_cols_36688=_n_binding_36779->_p_cols;
this->_n_rows_36689=_n_binding_36779->_p_rows;
this->_n_X_36690=(this->_n_cols_36688*_n_CW_36684);
this->_n_Y_36691=(this->_n_rows_36689*_n_RH_36685);
this->_n_rand_36692=_n_mulberry32_36687(7.0);
this->_n_seeds_36693=d::Array<std::shared_ptr<_n_Record_36694>,false>{};
(void)(d::forEach(d::Array<double,false>{4.0,5.0,4.0},[&]( double _a0,double _a1) mutable ->void{double _n_n_36708=_a0;
double _n_row_36709=_a1;
{
{double _n_i_36710=0.0;
for(;d::truth((_n_i_36710<_n_n_36708));(void)((_n_i_36710++))){d::check_cancel();double _n_hx_36711=((((_n_i_36710+0.5)+((this->_n_rand_36692()-0.5)*0.5))/_n_n_36708)*this->_n_X_36690);
double _n_hy_36712=((((_n_row_36709+0.5)+((this->_n_rand_36692()-0.5)*0.4))/3.0)*this->_n_Y_36691);
double _n_r_36713=(2.2+(this->_n_rand_36692()*1.4));
(void)(this->_n_seeds_36693.push(([&](){auto _n_object_36781=std::make_shared<_n_Record_36694>();_n_object_36781->_p_hx=this->_n_clamp_36695(_n_hx_36711,(_n_r_36713+1.0),((this->_n_X_36690-_n_r_36713)-1.0));_n_object_36781->_p_hy=this->_n_clamp_36695(_n_hy_36712,((0.8*_n_r_36713)+0.8),((this->_n_Y_36691-(0.8*_n_r_36713))-0.8));_n_object_36781->_p_r=_n_r_36713;_n_object_36781->_p_turns=([&](){auto _n_left_36782=(d::truth((this->_n_rand_36692()<0.5))?1.0:(-d::number(1.0)));auto _n_right_36783=(1.0+std::floor((this->_n_rand_36692()*2.0)));return (_n_left_36782*_n_right_36783);})();_n_object_36781->_p_p=(this->_n_rand_36692()*6.283);return _n_object_36781;})()));
}}

}
}));
this->_n_N_36696=double(this->_n_seeds_36693.size());
this->_n_sx_36697=d::Array<double,true>(size_t(this->_n_N_36696));
this->_n_sy_36698=d::Array<double,true>(size_t(this->_n_N_36696));
this->_n_grid_36699=d::Array<d::String,false>(size_t((this->_n_cols_36688*this->_n_rows_36689)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36775> _a1) mutable ->d::String{double _n_t_36744=_a0;
auto _n_binding_36786=(d::present(_a1)?_a1:([&](){auto _n_object_36785=std::make_shared<_n_Record_36775>();return _n_object_36785;})());
bool _n_paper_36745=(d::present(_n_binding_36786->_p_paper)?d::read(_n_binding_36786->_p_paper):false);
{
double _n_a_36746=(((2.0*ascii::PI)*_n_t_36744)/_n_PERIOD_36686);
(void)(d::forEach(this->_n_seeds_36693,[&]( std::shared_ptr<_n_Record_36694> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_36694> _n_s_36747=_a0;
double _n_i_36748=_a1;
{
(void)(([&](){auto&& _n_array_36787=this->_n_sx_36697;auto _n_index_36788=_n_i_36748;auto _n_value_36789=(_n_s_36747->_p_hx+(_n_s_36747->_p_r*std::cos(((_n_s_36747->_p_turns*_n_a_36746)+_n_s_36747->_p_p))));d::put(_n_array_36787,_n_index_36788,_n_value_36789);return _n_value_36789;})());
(void)(([&](){auto&& _n_array_36790=this->_n_sy_36698;auto _n_index_36791=_n_i_36748;auto _n_value_36792=(_n_s_36747->_p_hy+((_n_s_36747->_p_r*0.8)*std::sin(((_n_s_36747->_p_turns*_n_a_36746)+_n_s_36747->_p_p))));d::put(_n_array_36790,_n_index_36791,_n_value_36792);return _n_value_36792;})());

}
}));
{double _n_r_36749=0.0;
for(;d::truth((_n_r_36749<this->_n_rows_36689));(void)((_n_r_36749++))){d::check_cancel();{double _n_c_36750=0.0;
for(;d::truth((_n_c_36750<this->_n_cols_36688));(void)((_n_c_36750++))){d::check_cancel();double _n_px_36751=((_n_c_36750+0.5)*_n_CW_36684);
double _n_py_36752=((_n_r_36749+0.5)*_n_RH_36685);
double _n_d1_36753=INFINITY;
double _n_d2_36754=INFINITY;
{double _n_i_36755=0.0;
for(;d::truth((_n_i_36755<this->_n_N_36696));(void)((_n_i_36755++))){d::check_cancel();double _n_d_36756=(std::pow((_n_px_36751-d::at(this->_n_sx_36697,_n_i_36755)),2.0)+std::pow((_n_py_36752-d::at(this->_n_sy_36698,_n_i_36755)),2.0));
if(d::truth((_n_d_36756<_n_d1_36753))){d::check_cancel();(void)(((_n_d2_36754=_n_d1_36753),(_n_d1_36753=_n_d_36756)));
}else {d::check_cancel();if(d::truth((_n_d_36756<_n_d2_36754))){d::check_cancel();(void)((_n_d2_36754=_n_d_36756));
}
}
}}
double _n_f_36757=std::sqrt((_n_d1_36753/_n_d2_36754));
double _n_lv_36758=(d::truth(_n_paper_36745)?(d::truth((_n_f_36757<0.45))?0.0:(d::truth((_n_f_36757<0.62))?1.0:(d::truth((_n_f_36757<0.84))?2.0:0.0))):(d::truth((_n_f_36757<0.22))?3.0:(d::truth((_n_f_36757<0.42))?2.0:(d::truth((_n_f_36757<0.62))?1.0:0.0))));
(void)(([&](){auto&& _n_array_36793=this->_n_grid_36699;auto _n_index_36794=((_n_r_36749*this->_n_cols_36688)+_n_c_36750);auto _n_value_36795=(d::truth((_n_lv_36758==3.0))?d::String(u":"):((d::truth((_n_lv_36758==2.0))||d::truth(([&]()->std::variant<double,bool>{auto _n_logical_36796=(_n_lv_36758==1.0);return d::truth(_n_logical_36796)?std::variant<double,bool>(d::mod((_n_r_36749+_n_c_36750),2.0)):std::variant<double,bool>(_n_logical_36796);})()))?d::String(u"·"):d::String(u" ")));d::put(_n_array_36793,_n_index_36794,_n_value_36795);return _n_value_36795;})());
}}
}}
d::Array<std::array<double,3>,false> _n_corners_36759=d::Array<std::array<double,3>,false>{};
{double _n_i_36760=0.0;
for(;d::truth((_n_i_36760<this->_n_N_36696));(void)((_n_i_36760++))){d::check_cancel();d::Array<std::array<double,3>,false> _n_poly_36761=this->_n_cell_36700(_n_i_36760);
{double _n_k_36762=0.0;
for(;d::truth((_n_k_36762<double(_n_poly_36761.size())));(void)((_n_k_36762++))){d::check_cancel();auto&& _n_p_36763=d::at(_n_poly_36761,_n_k_36762);
auto&& _n_q_36764=d::at(_n_poly_36761,d::mod((_n_k_36762+1.0),double(_n_poly_36761.size())));
double _n_j_36765=d::at(_n_p_36763,2.0);
if(d::truth((_n_j_36765>_n_i_36760))){d::check_cancel();(void)(this->_n_edge_36702((d::at(_n_p_36763,0.0)/_n_CW_36684),(d::at(_n_p_36763,1.0)/_n_RH_36685),(d::at(_n_q_36764,0.0)/_n_CW_36684),(d::at(_n_q_36764,1.0)/_n_RH_36685)));
}
double _n_prev_36766=d::at(d::at(_n_poly_36761,d::mod(((_n_k_36762+double(_n_poly_36761.size()))-1.0),double(_n_poly_36761.size()))),2.0);
if((((d::truth((_n_j_36765>=0.0))&&d::truth((_n_prev_36766>=0.0)))&&d::truth((_n_i_36760<_n_j_36765)))&&d::truth((_n_i_36760<_n_prev_36766)))){d::check_cancel();(void)(_n_corners_36759.push(_n_p_36763));
}
}}
}}
for(auto &&_n_item_36797:_n_corners_36759){d::check_cancel();auto _n_binding_36798=_n_item_36797;
double _n_x_36767=d::at(_n_binding_36798,0.0);
double _n_y_36768=d::at(_n_binding_36798,1.0);
(void)(([&](){auto _n_argument_36799=std::floor((_n_x_36767/_n_CW_36684));auto _n_argument_36800=(d::round((_n_y_36768/_n_RH_36685))-1.0);auto _n_argument_36801=d::String(u"+");return this->_n_put_36701(_n_argument_36799,_n_argument_36800,_n_argument_36801);})());
}
{double _n_i_36769=0.0;
for(;d::truth((_n_i_36769<this->_n_N_36696));(void)((_n_i_36769++))){d::check_cancel();double _n_c_36770=std::floor((d::at(this->_n_sx_36697,_n_i_36769)/_n_CW_36684));
double _n_r_36771=std::floor((d::at(this->_n_sy_36698,_n_i_36769)/_n_RH_36685));
for(auto &&_n_item_36802:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_d_36772=_n_item_36802;
if(d::truth(d::includes(d::String(u":·"),d::at(this->_n_grid_36699,(((_n_r_36771*this->_n_cols_36688)+_n_c_36770)+_n_d_36772))))){d::check_cancel();(void)(this->_n_put_36701((_n_c_36770+_n_d_36772),_n_r_36771,d::String(u" ")));
}
}
(void)(this->_n_put_36701(_n_c_36770,_n_r_36771,d::String(u"@")));
}}
d::Array<d::String,false> _n_lines_36773=d::Array<d::String,false>{};
{double _n_r_36774=0.0;
for(;d::truth((_n_r_36774<this->_n_rows_36689));(void)((_n_r_36774++))){d::check_cancel();(void)(_n_lines_36773.push(d::join(this->_n_grid_36699.slice((_n_r_36774*this->_n_cols_36688),((_n_r_36774+1.0)*this->_n_cols_36688)),d::String(u""))));
}}
return d::join(_n_lines_36773,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("voronoi").cols)*ascii::catalog_meta("voronoi").rows);auto _env=std::make_shared<_n_Record_36775>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &voronoi_meta(){return catalog_meta("voronoi");}
std::unique_ptr<Piece> make_voronoi(const AsciiPieceOptions &o){return std::make_unique<Native_voronoi>(o);}
}
