// Direct, statically typed C++ from src/pieces/saptarishi.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26647;
struct _n_Record_26648;
struct _n_Record_26672;
struct _n_Record_26709;
struct _n_Record_26719;
struct _n_Record_26761;
struct _n_Record_26762;
struct _n_Record_26647{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_26648> _p_options{};
static std::shared_ptr<_n_Record_26647> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26647>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_26648>>(j["options"]);return out;}
};
struct _n_Record_26648{
bool _p_lines{};
static std::shared_ptr<_n_Record_26648> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26648>();out->_p_lines=d::decode<bool>(j["lines"]);return out;}
};
struct _n_Record_26672{
double _p_k{};
d::String _p_ch{};
double _p_rate{};
static std::shared_ptr<_n_Record_26672> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26672>();out->_p_k=d::decode<double>(j["k"]);out->_p_ch=d::decode<d::String>(j["ch"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_26709{
double _p_c{};
double _p_r{};
double _p_off{};
double _p_sub{};
static std::shared_ptr<_n_Record_26709> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26709>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);out->_p_off=d::decode<double>(j["off"]);out->_p_sub=d::decode<double>(j["sub"]);return out;}
};
struct _n_Record_26719{
double _p_c{};
double _p_r{};
static std::shared_ptr<_n_Record_26719> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26719>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);return out;}
};
struct _n_Record_26761{
std::optional<bool> _p_lines{};
static std::shared_ptr<_n_Record_26761> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26761>();out->_p_lines=d::decode<std::optional<bool>>(j["lines"]);return out;}
};
struct _n_Record_26762{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26762> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26762>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_26652(double _a0,double _a1);
double _n_ease_26653(double _a0);
double _n_clamp_26654(double _a0);
d::String _n_dot_26655(double _a0);
std::shared_ptr<_n_Record_26647> _n_meta_26646=[](){return ([&](){auto _n_object_26767=std::make_shared<_n_Record_26647>();_n_object_26767->_p_name=d::String(u"saptarishi");_n_object_26767->_p_category=d::String(u"space");_n_object_26767->_p_note=d::String(u"the big dipper at true positions in a twinkling sky");_n_object_26767->_p_cols=64.0;_n_object_26767->_p_rows=18.0;_n_object_26767->_p_fps=12.0;_n_object_26767->_p_options=([&](){auto _n_object_26769=std::make_shared<_n_Record_26648>();_n_object_26769->_p_lines=true;return _n_object_26769;})();return _n_object_26767;})();}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_SEVEN_26649=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(11.062,61.751,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(11.031,56.383,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(11.897,53.695,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(12.257,57.033,d::String(u"+")),std::make_shared<std::tuple<double,double,d::String>>(12.901,55.96,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(13.399,54.925,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(13.792,49.313,d::String(u"*"))};}();
d::Array<std::array<double,2>,false> _n_EDGES_26650=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{6.0,5.0},std::array<double,2>{5.0,4.0},std::array<double,2>{4.0,3.0},std::array<double,2>{3.0,0.0},std::array<double,2>{0.0,1.0},std::array<double,2>{1.0,2.0},std::array<double,2>{2.0,3.0}};}();
const double _n_METEOR_26651=[](){return 11.0;}();
double _n_hash_26652(double _a0,double _a1){double _n_x_26675=_a0;
double _n_y_26676=_a1;
{
double _n_h_26677=([&](){auto _n_left_26770=d::imul(_n_x_26675,668265261.0);auto _n_right_26771=d::imul(_n_y_26676,374761393.0);return double(d::i32(_n_left_26770)^d::i32(_n_right_26771));})();
(void)((_n_h_26677=d::imul(double(d::i32(_n_h_26677)^d::i32(double(d::u32(_n_h_26677)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_26677=d::imul(double(d::i32(_n_h_26677)^d::i32(double(d::u32(_n_h_26677)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_26677)^d::i32(double(d::u32(_n_h_26677)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_26653(double _a0){double _n_t_26678=_a0;
return ((_n_t_26678*_n_t_26678)*(3.0-(2.0*_n_t_26678)));}

double _n_clamp_26654(double _a0){double _n_x_26679=_a0;
return ([&](){auto _n_argument_26772=1.0;auto _n_argument_26773=d::maximum({0.0,_n_x_26679});return d::minimum({_n_argument_26772,_n_argument_26773});})();}

d::String _n_dot_26655(double _a0){double _n_sub_26680=_a0;
return (d::truth((_n_sub_26680<0.36))?d::String(u"'"):(d::truth((_n_sub_26680<0.64))?d::String(u"·"):d::String(u".")));}

struct Native_saptarishi final:ascii::Piece{
bool _n_lines_26656{};
double _n_cols_26657{};
double _n_rows_26658{};
double _n_rad_26659{};
double _n_a0_26660{};
double _n_d0_26661{};
d::Array<std::array<double,2>,false> _n_plane_26662{};
d::Array<double,false> _n_xs_26663{};
d::Array<double,false> _n_ys_26664{};
double _n_s_26665{};
d::Array<std::array<double,2>,false> _n_pts_26666{};
d::Array<d::String,false> _n_sky_26667{};
d::Array<uint8_t,true> _n_used_26668{};
d::Array<std::array<double,2>,false> _n_cell_26670{};
d::Array<std::shared_ptr<_n_Record_26672>,false> _n_field_26671{};
d::Array<d::String,false> _n_out_26673{};
std::function<d::String(double,std::shared_ptr<_n_Record_26762>)> _render;
void _n_keep_26669(double _a0,double _a1,double _a2,double _a3){double _n_c_26690=_a0;
double _n_r_26691=_a1;
double _n_mc_26692=_a2;
double _n_mr_26693=_a3;
{
{double _n_j_26694=(-d::number(_n_mr_26693));
for(;d::truth((_n_j_26694<=_n_mr_26693));(void)((_n_j_26694++))){d::check_cancel();{double _n_i_26695=(-d::number(_n_mc_26692));
for(;d::truth((_n_i_26695<=_n_mc_26692));(void)((_n_i_26695++))){d::check_cancel();if((((d::truth(((_n_r_26691+_n_j_26694)>=0.0))&&d::truth(((_n_r_26691+_n_j_26694)<this->_n_rows_26658)))&&d::truth(((_n_c_26690+_n_i_26695)>=0.0)))&&d::truth(((_n_c_26690+_n_i_26695)<this->_n_cols_26657)))){d::check_cancel();(void)(([&](){auto&& _n_array_26857=this->_n_used_26668;auto _n_index_26858=((((_n_r_26691+_n_j_26694)*this->_n_cols_26657)+_n_c_26690)+_n_i_26695);auto _n_value_26859=1.0;d::put(_n_array_26857,_n_index_26858,_n_value_26859);return _n_value_26859;})());
}
}}
}}

}
}

explicit Native_saptarishi(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26774=d::decode<std::shared_ptr<_n_Record_26761>>(_options.data);
this->_n_lines_26656=(d::present(_n_binding_26774->_p_lines)?d::read(_n_binding_26774->_p_lines):true);
auto _n_binding_26775=_n_meta_26646;
this->_n_cols_26657=_n_binding_26775->_p_cols;
this->_n_rows_26658=_n_binding_26775->_p_rows;
this->_n_rad_26659=(ascii::PI/180.0);
this->_n_a0_26660=(186.0*this->_n_rad_26659);
this->_n_d0_26661=(55.5*this->_n_rad_26659);
this->_n_plane_26662=d::map(_n_SEVEN_26649,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0) mutable ->std::array<double,2>{auto _n_binding_26776=_a0;
double _n_ra_26681=std::get<0>(*_n_binding_26776);
double _n_dec_26682=std::get<1>(*_n_binding_26776);
{
double _n_a_26683=(((_n_ra_26681*15.0)*this->_n_rad_26659)-this->_n_a0_26660);
double _n_d_26684=(_n_dec_26682*this->_n_rad_26659);
double _n_k_26685=([&](){auto _n_left_26777=([&](){auto _n_left_26779=std::sin(this->_n_d0_26661);auto _n_right_26780=std::sin(_n_d_26684);return (_n_left_26779*_n_right_26780);})();auto _n_right_26778=([&](){auto _n_left_26781=([&](){auto _n_left_26783=std::cos(this->_n_d0_26661);auto _n_right_26784=std::cos(_n_d_26684);return (_n_left_26783*_n_right_26784);})();auto _n_right_26782=std::cos(_n_a_26683);return (_n_left_26781*_n_right_26782);})();return (_n_left_26777+_n_right_26778);})();
return std::array<double,2>{(([&](){auto _n_left_26785=(-d::number(std::cos(_n_d_26684)));auto _n_right_26786=std::sin(_n_a_26683);return (_n_left_26785*_n_right_26786);})()/_n_k_26685),(([&](){auto _n_left_26787=([&](){auto _n_left_26789=([&](){auto _n_left_26791=std::sin(this->_n_d0_26661);auto _n_right_26792=std::cos(_n_d_26684);return (_n_left_26791*_n_right_26792);})();auto _n_right_26790=std::cos(_n_a_26683);return (_n_left_26789*_n_right_26790);})();auto _n_right_26788=([&](){auto _n_left_26793=std::cos(this->_n_d0_26661);auto _n_right_26794=std::sin(_n_d_26684);return (_n_left_26793*_n_right_26794);})();return (_n_left_26787-_n_right_26788);})()/_n_k_26685)};

}
});
this->_n_xs_26663=d::map(this->_n_plane_26662,[&]( std::array<double,2> _a0) mutable ->double{auto&& _n_p_26686=_a0;
return d::at(_n_p_26686,0.0);});
this->_n_ys_26664=d::map(this->_n_plane_26662,[&]( std::array<double,2> _a0) mutable ->double{auto&& _n_p_26687=_a0;
return d::at(_n_p_26687,1.0);});
this->_n_s_26665=((this->_n_cols_26657-12.0)/([&](){auto _n_left_26795=([&](){d::Array<double> _n_numbers_26797;for(auto _x:this->_n_xs_26663)_n_numbers_26797.push(_x);return d::maximum(_n_numbers_26797);})();auto _n_right_26796=([&](){d::Array<double> _n_numbers_26798;for(auto _x:this->_n_xs_26663)_n_numbers_26798.push(_x);return d::minimum(_n_numbers_26798);})();return (_n_left_26795-_n_right_26796);})());
this->_n_pts_26666=d::map(this->_n_plane_26662,[&]( std::array<double,2> _a0) mutable ->std::array<double,2>{auto _n_binding_26799=_a0;
double _n_x_26688=d::at(_n_binding_26799,0.0);
double _n_y_26689=d::at(_n_binding_26799,1.0);
return std::array<double,2>{(((this->_n_cols_26657/2.0)-0.5)+(this->_n_s_26665*(_n_x_26688-(([&](){auto _n_left_26800=([&](){d::Array<double> _n_numbers_26802;for(auto _x:this->_n_xs_26663)_n_numbers_26802.push(_x);return d::maximum(_n_numbers_26802);})();auto _n_right_26801=([&](){d::Array<double> _n_numbers_26803;for(auto _x:this->_n_xs_26663)_n_numbers_26803.push(_x);return d::minimum(_n_numbers_26803);})();return (_n_left_26800+_n_right_26801);})()/2.0)))),(((this->_n_rows_26658/2.0)-0.5)+((this->_n_s_26665/2.0)*(_n_y_26689-(([&](){auto _n_left_26804=([&](){d::Array<double> _n_numbers_26806;for(auto _x:this->_n_ys_26664)_n_numbers_26806.push(_x);return d::maximum(_n_numbers_26806);})();auto _n_right_26805=([&](){d::Array<double> _n_numbers_26807;for(auto _x:this->_n_ys_26664)_n_numbers_26807.push(_x);return d::minimum(_n_numbers_26807);})();return (_n_left_26804+_n_right_26805);})()/2.0))))};});
this->_n_sky_26667=d::Array<d::String,false>(size_t((this->_n_cols_26657*this->_n_rows_26658))).fill(d::String(u" "));
this->_n_used_26668=d::Array<uint8_t,true>(size_t((this->_n_cols_26657*this->_n_rows_26658)));
this->_n_cell_26670=d::map(this->_n_pts_26666,[&]( std::array<double,2> _a0) mutable ->std::array<double,2>{auto _n_binding_26808=_a0;
double _n_x_26696=d::at(_n_binding_26808,0.0);
double _n_y_26697=d::at(_n_binding_26808,1.0);
return std::array<double,2>{d::round(_n_x_26696),d::round(_n_y_26697)};});
(void)(d::forEach(this->_n_cell_26670,[&]( std::array<double,2> _a0,double _a1) mutable ->void{auto _n_binding_26809=_a0;
double _n_c_26698=d::at(_n_binding_26809,0.0);
double _n_r_26699=d::at(_n_binding_26809,1.0);
double _n_i_26700=_a1;
(([&](){auto&& _n_array_26810=this->_n_sky_26667;auto _n_index_26811=((_n_r_26699*this->_n_cols_26657)+_n_c_26698);auto _n_value_26812=std::get<2>(*d::at(_n_SEVEN_26649,_n_i_26700));d::put(_n_array_26810,_n_index_26811,_n_value_26812);return _n_value_26812;})(),this->_n_keep_26669(_n_c_26698,_n_r_26699,3.0,1.0));}));
(void)(([&](){auto&& _n_array_26813=this->_n_sky_26667;auto _n_index_26814=((((d::at(d::at(this->_n_cell_26670,5.0),1.0)-1.0)*this->_n_cols_26657)+d::at(d::at(this->_n_cell_26670,5.0),0.0))-1.0);auto _n_value_26815=d::String(u".");d::put(_n_array_26813,_n_index_26814,_n_value_26815);return _n_value_26815;})());
for(auto &&_n_item_26816:_n_EDGES_26650){d::check_cancel();auto _n_binding_26817=_n_item_26816;
double _n_i_26701=d::at(_n_binding_26817,0.0);
double _n_j_26702=d::at(_n_binding_26817,1.0);
{
auto _n_binding_26818=d::at(this->_n_cell_26670,_n_i_26701);
double _n_x0_26703=d::at(_n_binding_26818,0.0);
double _n_y0_26704=d::at(_n_binding_26818,1.0);
auto _n_binding_26819=d::at(this->_n_cell_26670,_n_j_26702);
double _n_x1_26705=d::at(_n_binding_26819,0.0);
double _n_y1_26706=d::at(_n_binding_26819,1.0);
double _n_n_26707=std::ceil((d::hypot(std::initializer_list<double>{(_n_x1_26705-_n_x0_26703),(2.0*(_n_y1_26706-_n_y0_26704))})*8.0));
d::Array<std::shared_ptr<_n_Record_26709>,false> _n_run_26708=d::Array<std::shared_ptr<_n_Record_26709>,false>{};
{double _n_q_26710=0.0;
for(;d::truth((_n_q_26710<=_n_n_26707));(void)((_n_q_26710++))){d::check_cancel();double _n_x_26711=(_n_x0_26703+(((_n_x1_26705-_n_x0_26703)*_n_q_26710)/_n_n_26707));
double _n_y_26712=(_n_y0_26704+(((_n_y1_26706-_n_y0_26704)*_n_q_26710)/_n_n_26707));
double _n_c_26713=d::round(_n_x_26711);
double _n_r_26714=d::round(_n_y_26712);
double _n_sub_26715=((_n_y_26712-_n_r_26714)+0.5);
(void)(this->_n_keep_26669(_n_c_26713,_n_r_26714,1.0,1.0));
double _n_off_26716=(std::pow((_n_x_26711-_n_c_26713),2.0)+std::pow((2.0*(_n_sub_26715-0.5)),2.0));
std::shared_ptr<_n_Record_26709> _n_last_26717=d::at(_n_run_26708,(double(_n_run_26708.size())-1.0));
if(((d::truth(_n_last_26717)&&d::truth((_n_last_26717->_p_c==_n_c_26713)))&&d::truth((_n_last_26717->_p_r==_n_r_26714)))){d::check_cancel();if(d::truth((_n_off_26716<_n_last_26717->_p_off))){d::check_cancel();(void)(([&](){auto _n_record_26821=_n_last_26717;_n_record_26821->_p_off=_n_off_26716;_n_record_26821->_p_sub=_n_sub_26715;return _n_record_26821;})());
}
}else {d::check_cancel();(void)(_n_run_26708.push(([&](){auto _n_object_26823=std::make_shared<_n_Record_26709>();_n_object_26823->_p_c=_n_c_26713;_n_object_26823->_p_r=_n_r_26714;_n_object_26823->_p_off=_n_off_26716;_n_object_26823->_p_sub=_n_sub_26715;return _n_object_26823;})()));
}
}}
auto _n_clear_26718=[&]( std::shared_ptr<_n_Record_26719> _a0) mutable ->bool{auto _n_binding_26824=_a0;
double _n_c_26720=_n_binding_26824->_p_c;
double _n_r_26721=_n_binding_26824->_p_r;
return d::every(d::Array<std::array<double,2>,false>{d::at(this->_n_cell_26670,_n_i_26701),d::at(this->_n_cell_26670,_n_j_26702)},[&]( std::array<double,2> _a0) mutable ->bool{auto _n_binding_26825=_a0;
double _n_sc_26722=d::at(_n_binding_26825,0.0);
double _n_sr_26723=d::at(_n_binding_26825,1.0);
return ([&]()->bool{auto _n_logical_26826=(std::fabs((_n_sr_26723-_n_r_26721))>1.0);return d::truth(_n_logical_26826)?_n_logical_26826:(std::fabs((_n_sc_26722-_n_c_26720))>(d::truth((_n_sr_26723==_n_r_26721))?2.0:1.0));})();});};
double _n_lc_26724=(-d::number(9.0));
double _n_ly_26725=(-d::number(9.0));
for(auto &&_n_item_26827:_n_run_26708){d::check_cancel();std::shared_ptr<_n_Record_26709> _n_p_26726=_n_item_26827;
{
if(((d::truth((!d::truth(this->_n_lines_26656)))||d::truth((!d::truth(_n_clear_26718(([&](){auto _n_record_26828=_n_p_26726;auto _n_record_26829=std::make_shared<_n_Record_26719>();_n_record_26829->_p_c=_n_record_26828->_p_c;_n_record_26829->_p_r=_n_record_26828->_p_r;return _n_record_26829;})())))))||d::truth((d::hypot(std::initializer_list<double>{(_n_p_26726->_p_c-_n_lc_26724),(2.0*((_n_p_26726->_p_r+_n_p_26726->_p_sub)-_n_ly_26725))})<1.8)))){d::check_cancel();continue;
}
(void)(([&](){auto _n_unpack_26830=std::array<double,2>{_n_p_26726->_p_c,(_n_p_26726->_p_r+_n_p_26726->_p_sub)};_n_lc_26724=d::at(_n_unpack_26830,0.0);_n_ly_26725=d::at(_n_unpack_26830,1.0);return _n_unpack_26830;})());
if(d::truth((d::at(this->_n_sky_26667,((_n_p_26726->_p_r*this->_n_cols_26657)+_n_p_26726->_p_c))==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_26831=this->_n_sky_26667;auto _n_index_26832=((_n_p_26726->_p_r*this->_n_cols_26657)+_n_p_26726->_p_c);auto _n_value_26833=_n_dot_26655(_n_p_26726->_p_sub);d::put(_n_array_26831,_n_index_26832,_n_value_26833);return _n_value_26833;})());
}

}
}

}
}
this->_n_field_26671=d::Array<std::shared_ptr<_n_Record_26672>,false>{};
{double _n_r_26727=0.0;
for(;d::truth((_n_r_26727<this->_n_rows_26658));(void)((_n_r_26727++))){d::check_cancel();{double _n_c_26728=0.0;
for(;d::truth((_n_c_26728<this->_n_cols_26657));(void)((_n_c_26728++))){d::check_cancel();if((d::truth(d::at(this->_n_used_26668,((_n_r_26727*this->_n_cols_26657)+_n_c_26728)))||d::truth(([&](){auto _n_left_26834=_n_hash_26652(_n_c_26728,_n_r_26727);auto _n_right_26835=(0.058*_n_ease_26653(_n_clamp_26654((d::minimum({_n_c_26728,((this->_n_cols_26657-1.0)-_n_c_26728)})/9.0))));return (_n_left_26834>=_n_right_26835);})()))){d::check_cancel();continue;
}
(void)(this->_n_field_26671.push(([&](){auto _n_object_26837=std::make_shared<_n_Record_26672>();_n_object_26837->_p_k=((_n_r_26727*this->_n_cols_26657)+_n_c_26728);_n_object_26837->_p_ch=(d::truth((_n_hash_26652(_n_r_26727,(_n_c_26728+99.0))>0.85))?d::String(u"·"):d::String(u"."));_n_object_26837->_p_rate=(0.35+(0.7*_n_hash_26652(_n_c_26728,(_n_r_26727+7.0))));return _n_object_26837;})()));
(void)(this->_n_keep_26669(_n_c_26728,_n_r_26727,2.0,1.0));
}}
}}
this->_n_out_26673=d::Array<d::String,false>(size_t((this->_n_cols_26657*this->_n_rows_26658)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_26762> _a1) mutable ->d::String{double _n_t_26729=_a0;
{
{double _n_i_26730=0.0;
for(;d::truth((_n_i_26730<double(this->_n_out_26673.size())));(void)((_n_i_26730++))){d::check_cancel();(void)(([&](){auto&& _n_array_26838=this->_n_out_26673;auto _n_index_26839=_n_i_26730;auto _n_value_26840=d::at(this->_n_sky_26667,_n_i_26730);d::put(_n_array_26838,_n_index_26839,_n_value_26840);return _n_value_26840;})());
}}
(void)(d::forEach(this->_n_field_26671,[&]( std::shared_ptr<_n_Record_26672> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_26672> _n_f_26731=_a0;
double _n_i_26732=_a1;
{
double _n_x_26733=(_n_t_26729*_n_f_26731->_p_rate);
double _n_k_26734=std::floor(_n_x_26733);
double _n_e_26735=_n_ease_26653((_n_x_26733-_n_k_26734));
double _n_w_26736=([&](){auto _n_left_26841=_n_hash_26652(_n_k_26734,(_n_i_26732+7.0));auto _n_right_26842=(([&](){auto _n_left_26843=_n_hash_26652((_n_k_26734+1.0),(_n_i_26732+7.0));auto _n_right_26844=_n_hash_26652(_n_k_26734,(_n_i_26732+7.0));return (_n_left_26843-_n_right_26844);})()*_n_e_26735);return (_n_left_26841+_n_right_26842);})();
(void)(([&](){auto&& _n_array_26845=this->_n_out_26673;auto _n_index_26846=_n_f_26731->_p_k;auto _n_value_26847=(d::truth((_n_w_26736<0.2))?d::String(u" "):_n_f_26731->_p_ch);d::put(_n_array_26845,_n_index_26846,_n_value_26847);return _n_value_26847;})());

}
}));
double _n_m0_26737=([&](){auto _n_argument_26848=0.0;auto _n_argument_26849=std::floor((((_n_t_26729-2.0)+2.5)/_n_METEOR_26651));return d::maximum({_n_argument_26848,_n_argument_26849});})();
for(auto &&_n_item_26850:d::Array<double,false>{(_n_m0_26737-1.0),_n_m0_26737}){d::check_cancel();double _n_m_26738=_n_item_26850;
{
if(d::truth((_n_m_26738<0.0))){d::check_cancel();continue;
}
double _n_start_26739=((2.0+(_n_m_26738*_n_METEOR_26651))+(d::truth(_n_m_26738)?((_n_hash_26652(_n_m_26738,3.0)*4.0)-2.0):0.0));
double _n_age_26740=((_n_t_26729-_n_start_26739)/0.8);
if((d::truth((_n_age_26740<=0.0))||d::truth((_n_age_26740>=1.45)))){d::check_cancel();continue;
}
double _n_dir_26741=(d::truth((_n_hash_26652(_n_m_26738,5.0)<0.5))?1.0:(-d::number(1.0)));
double _n_len_26742=(18.0+(8.0*_n_hash_26652(_n_m_26738,6.0)));
double _n_drop_26743=(3.0+(3.0*_n_hash_26652(_n_m_26738,7.0)));
double _n_x0_26744=(d::truth((_n_dir_26741>0.0))?(4.0+(_n_hash_26652(_n_m_26738,8.0)*((this->_n_cols_26657-_n_len_26742)-8.0))):((this->_n_cols_26657-5.0)-(_n_hash_26652(_n_m_26738,8.0)*((this->_n_cols_26657-_n_len_26742)-8.0))));
double _n_y0_26745=(0.6+(_n_hash_26652(_n_m_26738,9.0)*((this->_n_rows_26658-_n_drop_26743)-2.2)));
double _n_front_26746=d::minimum({_n_age_26740,1.0});
double _n_back_26747=d::maximum({0.0,(_n_age_26740-0.45)});
{double _n_q_26748=std::ceil((_n_back_26747*40.0));
for(;d::truth((_n_q_26748<=(_n_front_26746*40.0)));(void)((_n_q_26748++))){d::check_cancel();double _n_f_26749=(_n_q_26748/40.0);
double _n_x_26750=(_n_x0_26744+((_n_dir_26741*_n_len_26742)*_n_f_26749));
double _n_y_26751=(_n_y0_26745+(_n_drop_26743*_n_f_26749));
double _n_c_26752=d::round(_n_x_26750);
double _n_r_26753=std::floor(_n_y_26751);
double _n_sub_26754=(_n_y_26751-_n_r_26753);
double _n_k_26755=((_n_r_26753*this->_n_cols_26657)+_n_c_26752);
if(((((d::truth((_n_c_26752<0.0))||d::truth((_n_c_26752>=this->_n_cols_26657)))||d::truth((_n_r_26753<0.0)))||d::truth((_n_r_26753>=this->_n_rows_26658)))||d::truth(d::includes(d::String(u"*+"),d::at(this->_n_sky_26667,_n_k_26755))))){d::check_cancel();continue;
}
double _n_fresh_26756=((_n_f_26749-_n_back_26747)/d::maximum({0.000001,(_n_front_26746-_n_back_26747)}));
(void)(([&](){auto&& _n_array_26851=this->_n_out_26673;auto _n_index_26852=_n_k_26755;auto _n_value_26853=(d::truth((_n_fresh_26756>0.5))?(d::truth((_n_sub_26754<0.34))?d::String(u"'"):(d::truth((_n_sub_26754<0.67))?d::String(u"-"):d::String(u"_"))):(d::truth((_n_sub_26754<0.5))?d::String(u"·"):d::String(u".")));d::put(_n_array_26851,_n_index_26852,_n_value_26853);return _n_value_26853;})());
}}
if(d::truth((_n_age_26740<1.0))){d::check_cancel();double _n_c_26757=d::round((_n_x0_26744+((_n_dir_26741*_n_len_26742)*_n_age_26740)));
double _n_r_26758=std::floor((_n_y0_26745+(_n_drop_26743*_n_age_26740)));
if(((((d::truth((_n_c_26757>=0.0))&&d::truth((_n_c_26757<this->_n_cols_26657)))&&d::truth((_n_r_26758>=0.0)))&&d::truth((_n_r_26758<this->_n_rows_26658)))&&d::truth((!d::truth(d::includes(d::String(u"*+"),d::at(this->_n_sky_26667,((_n_r_26758*this->_n_cols_26657)+_n_c_26757)))))))){d::check_cancel();(void)(([&](){auto&& _n_array_26854=this->_n_out_26673;auto _n_index_26855=((_n_r_26758*this->_n_cols_26657)+_n_c_26757);auto _n_value_26856=d::String(u"o");d::put(_n_array_26854,_n_index_26855,_n_value_26856);return _n_value_26856;})());
}
}

}
}
d::Array<d::String,false> _n_res_26759=d::Array<d::String,false>{};
{double _n_r_26760=0.0;
for(;d::truth((_n_r_26760<this->_n_rows_26658));(void)((_n_r_26760++))){d::check_cancel();(void)(_n_res_26759.push(d::join(this->_n_out_26673.slice((_n_r_26760*this->_n_cols_26657),((_n_r_26760+1.0)*this->_n_cols_26657)),d::String(u""))));
}}
return d::join(_n_res_26759,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("saptarishi").cols)*ascii::catalog_meta("saptarishi").rows);auto _env=std::make_shared<_n_Record_26762>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &saptarishi_meta(){return catalog_meta("saptarishi");}
std::unique_ptr<Piece> make_saptarishi(const AsciiPieceOptions &o){return std::make_unique<Native_saptarishi>(o);}
}
