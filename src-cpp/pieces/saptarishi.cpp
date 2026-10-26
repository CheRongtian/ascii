// Direct, statically typed C++ from src/pieces/saptarishi.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26648;
struct _n_Record_26649;
struct _n_Record_26673;
struct _n_Record_26710;
struct _n_Record_26720;
struct _n_Record_26762;
struct _n_Record_26763;
struct _n_Record_26648{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_26649> _p_options{};
static std::shared_ptr<_n_Record_26648> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26648>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_26649>>(j["options"]);return out;}
};
struct _n_Record_26649{
bool _p_lines{};
static std::shared_ptr<_n_Record_26649> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26649>();out->_p_lines=d::decode<bool>(j["lines"]);return out;}
};
struct _n_Record_26673{
double _p_k{};
d::String _p_ch{};
double _p_rate{};
static std::shared_ptr<_n_Record_26673> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26673>();out->_p_k=d::decode<double>(j["k"]);out->_p_ch=d::decode<d::String>(j["ch"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_26710{
double _p_c{};
double _p_r{};
double _p_off{};
double _p_sub{};
static std::shared_ptr<_n_Record_26710> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26710>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);out->_p_off=d::decode<double>(j["off"]);out->_p_sub=d::decode<double>(j["sub"]);return out;}
};
struct _n_Record_26720{
double _p_c{};
double _p_r{};
static std::shared_ptr<_n_Record_26720> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26720>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);return out;}
};
struct _n_Record_26762{
std::optional<bool> _p_lines{};
static std::shared_ptr<_n_Record_26762> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26762>();out->_p_lines=d::decode<std::optional<bool>>(j["lines"]);return out;}
};
struct _n_Record_26763{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26763> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26763>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_26653(double _a0,double _a1);
double _n_ease_26654(double _a0);
double _n_clamp_26655(double _a0);
d::String _n_dot_26656(double _a0);
std::shared_ptr<_n_Record_26648> _n_meta_26647=[](){return ([&](){auto _n_object_26768=std::make_shared<_n_Record_26648>();_n_object_26768->_p_name=d::String(u"saptarishi");_n_object_26768->_p_category=d::String(u"space");_n_object_26768->_p_note=d::String(u"the big dipper at true positions in a twinkling sky");_n_object_26768->_p_cols=64.0;_n_object_26768->_p_rows=18.0;_n_object_26768->_p_fps=12.0;_n_object_26768->_p_options=([&](){auto _n_object_26770=std::make_shared<_n_Record_26649>();_n_object_26770->_p_lines=true;return _n_object_26770;})();return _n_object_26768;})();}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_SEVEN_26650=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(11.062,61.751,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(11.031,56.383,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(11.897,53.695,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(12.257,57.033,d::String(u"+")),std::make_shared<std::tuple<double,double,d::String>>(12.901,55.96,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(13.399,54.925,d::String(u"*")),std::make_shared<std::tuple<double,double,d::String>>(13.792,49.313,d::String(u"*"))};}();
d::Array<d::Array<double,false>,false> _n_EDGES_26651=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{6.0,5.0},d::Array<double,false>{5.0,4.0},d::Array<double,false>{4.0,3.0},d::Array<double,false>{3.0,0.0},d::Array<double,false>{0.0,1.0},d::Array<double,false>{1.0,2.0},d::Array<double,false>{2.0,3.0}};}();
const double _n_METEOR_26652=[](){return 11.0;}();
double _n_hash_26653(double _a0,double _a1){double _n_x_26676=_a0;
double _n_y_26677=_a1;
{
double _n_h_26678=([&](){auto _n_left_26771=d::imul(_n_x_26676,668265261.0);auto _n_right_26772=d::imul(_n_y_26677,374761393.0);return double(d::i32(_n_left_26771)^d::i32(_n_right_26772));})();
(void)((_n_h_26678=d::imul(double(d::i32(_n_h_26678)^d::i32(double(d::u32(_n_h_26678)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_26678=d::imul(double(d::i32(_n_h_26678)^d::i32(double(d::u32(_n_h_26678)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_26678)^d::i32(double(d::u32(_n_h_26678)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_26654(double _a0){double _n_t_26679=_a0;
return ((_n_t_26679*_n_t_26679)*(3.0-(2.0*_n_t_26679)));}

double _n_clamp_26655(double _a0){double _n_x_26680=_a0;
return ([&](){auto _n_argument_26773=1.0;auto _n_argument_26774=d::maximum({0.0,_n_x_26680});return d::minimum({_n_argument_26773,_n_argument_26774});})();}

d::String _n_dot_26656(double _a0){double _n_sub_26681=_a0;
return (d::truth((_n_sub_26681<0.36))?d::String(u"'"):(d::truth((_n_sub_26681<0.64))?d::String(u"·"):d::String(u".")));}

struct Native_saptarishi final:ascii::Piece{
bool _n_lines_26657{};
double _n_cols_26658{};
double _n_rows_26659{};
double _n_rad_26660{};
double _n_a0_26661{};
double _n_d0_26662{};
d::Array<d::Array<double,false>,false> _n_plane_26663{};
d::Array<double,false> _n_xs_26664{};
d::Array<double,false> _n_ys_26665{};
double _n_s_26666{};
d::Array<d::Array<double,false>,false> _n_pts_26667{};
d::Array<d::String,false> _n_sky_26668{};
d::Array<uint8_t,true> _n_used_26669{};
d::Array<d::Array<double,false>,false> _n_cell_26671{};
d::Array<std::shared_ptr<_n_Record_26673>,false> _n_field_26672{};
d::Array<d::String,false> _n_out_26674{};
std::function<d::String(double,std::shared_ptr<_n_Record_26763>)> _render;
void _n_keep_26670(double _a0,double _a1,double _a2,double _a3){double _n_c_26691=_a0;
double _n_r_26692=_a1;
double _n_mc_26693=_a2;
double _n_mr_26694=_a3;
{
{double _n_j_26695=(-d::number(_n_mr_26694));
for(;d::truth((_n_j_26695<=_n_mr_26694));(void)((_n_j_26695++))){d::check_cancel();{double _n_i_26696=(-d::number(_n_mc_26693));
for(;d::truth((_n_i_26696<=_n_mc_26693));(void)((_n_i_26696++))){d::check_cancel();if((((d::truth(((_n_r_26692+_n_j_26695)>=0.0))&&d::truth(((_n_r_26692+_n_j_26695)<this->_n_rows_26659)))&&d::truth(((_n_c_26691+_n_i_26696)>=0.0)))&&d::truth(((_n_c_26691+_n_i_26696)<this->_n_cols_26658)))){d::check_cancel();(void)(([&](){auto&& _n_array_26858=this->_n_used_26669;auto _n_index_26859=((((_n_r_26692+_n_j_26695)*this->_n_cols_26658)+_n_c_26691)+_n_i_26696);auto _n_value_26860=1.0;d::put(_n_array_26858,_n_index_26859,_n_value_26860);return _n_value_26860;})());
}
}}
}}

}
}

explicit Native_saptarishi(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26775=d::decode<std::shared_ptr<_n_Record_26762>>(_options.data);
this->_n_lines_26657=(d::present(_n_binding_26775->_p_lines)?d::read(_n_binding_26775->_p_lines):true);
auto _n_binding_26776=_n_meta_26647;
this->_n_cols_26658=_n_binding_26776->_p_cols;
this->_n_rows_26659=_n_binding_26776->_p_rows;
this->_n_rad_26660=(ascii::PI/180.0);
this->_n_a0_26661=(186.0*this->_n_rad_26660);
this->_n_d0_26662=(55.5*this->_n_rad_26660);
this->_n_plane_26663=d::map(_n_SEVEN_26650,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0) mutable ->d::Array<double,false>{auto _n_binding_26777=_a0;
double _n_ra_26682=std::get<0>(*_n_binding_26777);
double _n_dec_26683=std::get<1>(*_n_binding_26777);
{
double _n_a_26684=(((_n_ra_26682*15.0)*this->_n_rad_26660)-this->_n_a0_26661);
double _n_d_26685=(_n_dec_26683*this->_n_rad_26660);
double _n_k_26686=([&](){auto _n_left_26778=([&](){auto _n_left_26780=std::sin(this->_n_d0_26662);auto _n_right_26781=std::sin(_n_d_26685);return (_n_left_26780*_n_right_26781);})();auto _n_right_26779=([&](){auto _n_left_26782=([&](){auto _n_left_26784=std::cos(this->_n_d0_26662);auto _n_right_26785=std::cos(_n_d_26685);return (_n_left_26784*_n_right_26785);})();auto _n_right_26783=std::cos(_n_a_26684);return (_n_left_26782*_n_right_26783);})();return (_n_left_26778+_n_right_26779);})();
return d::Array<double,false>{(([&](){auto _n_left_26786=(-d::number(std::cos(_n_d_26685)));auto _n_right_26787=std::sin(_n_a_26684);return (_n_left_26786*_n_right_26787);})()/_n_k_26686),(([&](){auto _n_left_26788=([&](){auto _n_left_26790=([&](){auto _n_left_26792=std::sin(this->_n_d0_26662);auto _n_right_26793=std::cos(_n_d_26685);return (_n_left_26792*_n_right_26793);})();auto _n_right_26791=std::cos(_n_a_26684);return (_n_left_26790*_n_right_26791);})();auto _n_right_26789=([&](){auto _n_left_26794=std::cos(this->_n_d0_26662);auto _n_right_26795=std::sin(_n_d_26685);return (_n_left_26794*_n_right_26795);})();return (_n_left_26788-_n_right_26789);})()/_n_k_26686)};

}
});
this->_n_xs_26664=d::map(this->_n_plane_26663,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_p_26687=_a0;
return d::at(_n_p_26687,0.0);});
this->_n_ys_26665=d::map(this->_n_plane_26663,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_p_26688=_a0;
return d::at(_n_p_26688,1.0);});
this->_n_s_26666=((this->_n_cols_26658-12.0)/([&](){auto _n_left_26796=([&](){d::Array<double> _n_numbers_26798;for(auto _x:this->_n_xs_26664)_n_numbers_26798.push(_x);return d::maximum(_n_numbers_26798);})();auto _n_right_26797=([&](){d::Array<double> _n_numbers_26799;for(auto _x:this->_n_xs_26664)_n_numbers_26799.push(_x);return d::minimum(_n_numbers_26799);})();return (_n_left_26796-_n_right_26797);})());
this->_n_pts_26667=d::map(this->_n_plane_26663,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{auto _n_binding_26800=_a0;
double _n_x_26689=d::at(_n_binding_26800,0.0);
double _n_y_26690=d::at(_n_binding_26800,1.0);
return d::Array<double,false>{(((this->_n_cols_26658/2.0)-0.5)+(this->_n_s_26666*(_n_x_26689-(([&](){auto _n_left_26801=([&](){d::Array<double> _n_numbers_26803;for(auto _x:this->_n_xs_26664)_n_numbers_26803.push(_x);return d::maximum(_n_numbers_26803);})();auto _n_right_26802=([&](){d::Array<double> _n_numbers_26804;for(auto _x:this->_n_xs_26664)_n_numbers_26804.push(_x);return d::minimum(_n_numbers_26804);})();return (_n_left_26801+_n_right_26802);})()/2.0)))),(((this->_n_rows_26659/2.0)-0.5)+((this->_n_s_26666/2.0)*(_n_y_26690-(([&](){auto _n_left_26805=([&](){d::Array<double> _n_numbers_26807;for(auto _x:this->_n_ys_26665)_n_numbers_26807.push(_x);return d::maximum(_n_numbers_26807);})();auto _n_right_26806=([&](){d::Array<double> _n_numbers_26808;for(auto _x:this->_n_ys_26665)_n_numbers_26808.push(_x);return d::minimum(_n_numbers_26808);})();return (_n_left_26805+_n_right_26806);})()/2.0))))};});
this->_n_sky_26668=d::Array<d::String,false>(size_t((this->_n_cols_26658*this->_n_rows_26659))).fill(d::String(u" "));
this->_n_used_26669=d::Array<uint8_t,true>(size_t((this->_n_cols_26658*this->_n_rows_26659)));
this->_n_cell_26671=d::map(this->_n_pts_26667,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{auto _n_binding_26809=_a0;
double _n_x_26697=d::at(_n_binding_26809,0.0);
double _n_y_26698=d::at(_n_binding_26809,1.0);
return d::Array<double,false>{d::round(_n_x_26697),d::round(_n_y_26698)};});
(void)(d::forEach(this->_n_cell_26671,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_26810=_a0;
double _n_c_26699=d::at(_n_binding_26810,0.0);
double _n_r_26700=d::at(_n_binding_26810,1.0);
double _n_i_26701=_a1;
(([&](){auto&& _n_array_26811=this->_n_sky_26668;auto _n_index_26812=((_n_r_26700*this->_n_cols_26658)+_n_c_26699);auto _n_value_26813=std::get<2>(*d::at(_n_SEVEN_26650,_n_i_26701));d::put(_n_array_26811,_n_index_26812,_n_value_26813);return _n_value_26813;})(),this->_n_keep_26670(_n_c_26699,_n_r_26700,3.0,1.0));}));
(void)(([&](){auto&& _n_array_26814=this->_n_sky_26668;auto _n_index_26815=((((d::at(d::at(this->_n_cell_26671,5.0),1.0)-1.0)*this->_n_cols_26658)+d::at(d::at(this->_n_cell_26671,5.0),0.0))-1.0);auto _n_value_26816=d::String(u".");d::put(_n_array_26814,_n_index_26815,_n_value_26816);return _n_value_26816;})());
for(auto &&_n_item_26817:_n_EDGES_26651){d::check_cancel();auto _n_binding_26818=_n_item_26817;
double _n_i_26702=d::at(_n_binding_26818,0.0);
double _n_j_26703=d::at(_n_binding_26818,1.0);
{
auto _n_binding_26819=d::at(this->_n_cell_26671,_n_i_26702);
double _n_x0_26704=d::at(_n_binding_26819,0.0);
double _n_y0_26705=d::at(_n_binding_26819,1.0);
auto _n_binding_26820=d::at(this->_n_cell_26671,_n_j_26703);
double _n_x1_26706=d::at(_n_binding_26820,0.0);
double _n_y1_26707=d::at(_n_binding_26820,1.0);
double _n_n_26708=std::ceil((d::hypot(std::initializer_list<double>{(_n_x1_26706-_n_x0_26704),(2.0*(_n_y1_26707-_n_y0_26705))})*8.0));
d::Array<std::shared_ptr<_n_Record_26710>,false> _n_run_26709=d::Array<std::shared_ptr<_n_Record_26710>,false>{};
{double _n_q_26711=0.0;
for(;d::truth((_n_q_26711<=_n_n_26708));(void)((_n_q_26711++))){d::check_cancel();double _n_x_26712=(_n_x0_26704+(((_n_x1_26706-_n_x0_26704)*_n_q_26711)/_n_n_26708));
double _n_y_26713=(_n_y0_26705+(((_n_y1_26707-_n_y0_26705)*_n_q_26711)/_n_n_26708));
double _n_c_26714=d::round(_n_x_26712);
double _n_r_26715=d::round(_n_y_26713);
double _n_sub_26716=((_n_y_26713-_n_r_26715)+0.5);
(void)(this->_n_keep_26670(_n_c_26714,_n_r_26715,1.0,1.0));
double _n_off_26717=(std::pow((_n_x_26712-_n_c_26714),2.0)+std::pow((2.0*(_n_sub_26716-0.5)),2.0));
std::shared_ptr<_n_Record_26710> _n_last_26718=d::at(_n_run_26709,(double(_n_run_26709.size())-1.0));
if(((d::truth(_n_last_26718)&&d::truth((_n_last_26718->_p_c==_n_c_26714)))&&d::truth((_n_last_26718->_p_r==_n_r_26715)))){d::check_cancel();if(d::truth((_n_off_26717<_n_last_26718->_p_off))){d::check_cancel();(void)(([&](){auto _n_record_26822=_n_last_26718;_n_record_26822->_p_off=_n_off_26717;_n_record_26822->_p_sub=_n_sub_26716;return _n_record_26822;})());
}
}else {d::check_cancel();(void)(_n_run_26709.push(([&](){auto _n_object_26824=std::make_shared<_n_Record_26710>();_n_object_26824->_p_c=_n_c_26714;_n_object_26824->_p_r=_n_r_26715;_n_object_26824->_p_off=_n_off_26717;_n_object_26824->_p_sub=_n_sub_26716;return _n_object_26824;})()));
}
}}
auto _n_clear_26719=[&]( std::shared_ptr<_n_Record_26720> _a0) mutable ->bool{auto _n_binding_26825=_a0;
double _n_c_26721=_n_binding_26825->_p_c;
double _n_r_26722=_n_binding_26825->_p_r;
return d::every(d::Array<d::Array<double,false>,false>{d::at(this->_n_cell_26671,_n_i_26702),d::at(this->_n_cell_26671,_n_j_26703)},[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_26826=_a0;
double _n_sc_26723=d::at(_n_binding_26826,0.0);
double _n_sr_26724=d::at(_n_binding_26826,1.0);
return ([&]()->bool{auto _n_logical_26827=(std::fabs((_n_sr_26724-_n_r_26722))>1.0);return d::truth(_n_logical_26827)?_n_logical_26827:(std::fabs((_n_sc_26723-_n_c_26721))>(d::truth((_n_sr_26724==_n_r_26722))?2.0:1.0));})();});};
double _n_lc_26725=(-d::number(9.0));
double _n_ly_26726=(-d::number(9.0));
for(auto &&_n_item_26828:_n_run_26709){d::check_cancel();std::shared_ptr<_n_Record_26710> _n_p_26727=_n_item_26828;
{
if(((d::truth((!d::truth(this->_n_lines_26657)))||d::truth((!d::truth(_n_clear_26719(([&](){auto _n_record_26829=_n_p_26727;auto _n_record_26830=std::make_shared<_n_Record_26720>();_n_record_26830->_p_c=_n_record_26829->_p_c;_n_record_26830->_p_r=_n_record_26829->_p_r;return _n_record_26830;})())))))||d::truth((d::hypot(std::initializer_list<double>{(_n_p_26727->_p_c-_n_lc_26725),(2.0*((_n_p_26727->_p_r+_n_p_26727->_p_sub)-_n_ly_26726))})<1.8)))){d::check_cancel();continue;
}
(void)(([&](){auto _n_unpack_26831=d::Array<double,false>{_n_p_26727->_p_c,(_n_p_26727->_p_r+_n_p_26727->_p_sub)};_n_lc_26725=d::at(_n_unpack_26831,0.0);_n_ly_26726=d::at(_n_unpack_26831,1.0);return _n_unpack_26831;})());
if(d::truth((d::at(this->_n_sky_26668,((_n_p_26727->_p_r*this->_n_cols_26658)+_n_p_26727->_p_c))==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_26832=this->_n_sky_26668;auto _n_index_26833=((_n_p_26727->_p_r*this->_n_cols_26658)+_n_p_26727->_p_c);auto _n_value_26834=_n_dot_26656(_n_p_26727->_p_sub);d::put(_n_array_26832,_n_index_26833,_n_value_26834);return _n_value_26834;})());
}

}
}

}
}
this->_n_field_26672=d::Array<std::shared_ptr<_n_Record_26673>,false>{};
{double _n_r_26728=0.0;
for(;d::truth((_n_r_26728<this->_n_rows_26659));(void)((_n_r_26728++))){d::check_cancel();{double _n_c_26729=0.0;
for(;d::truth((_n_c_26729<this->_n_cols_26658));(void)((_n_c_26729++))){d::check_cancel();if((d::truth(d::at(this->_n_used_26669,((_n_r_26728*this->_n_cols_26658)+_n_c_26729)))||d::truth(([&](){auto _n_left_26835=_n_hash_26653(_n_c_26729,_n_r_26728);auto _n_right_26836=(0.058*_n_ease_26654(_n_clamp_26655((d::minimum({_n_c_26729,((this->_n_cols_26658-1.0)-_n_c_26729)})/9.0))));return (_n_left_26835>=_n_right_26836);})()))){d::check_cancel();continue;
}
(void)(this->_n_field_26672.push(([&](){auto _n_object_26838=std::make_shared<_n_Record_26673>();_n_object_26838->_p_k=((_n_r_26728*this->_n_cols_26658)+_n_c_26729);_n_object_26838->_p_ch=(d::truth((_n_hash_26653(_n_r_26728,(_n_c_26729+99.0))>0.85))?d::String(u"·"):d::String(u"."));_n_object_26838->_p_rate=(0.35+(0.7*_n_hash_26653(_n_c_26729,(_n_r_26728+7.0))));return _n_object_26838;})()));
(void)(this->_n_keep_26670(_n_c_26729,_n_r_26728,2.0,1.0));
}}
}}
this->_n_out_26674=d::Array<d::String,false>(size_t((this->_n_cols_26658*this->_n_rows_26659)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_26763> _a1) mutable ->d::String{double _n_t_26730=_a0;
{
{double _n_i_26731=0.0;
for(;d::truth((_n_i_26731<double(this->_n_out_26674.size())));(void)((_n_i_26731++))){d::check_cancel();(void)(([&](){auto&& _n_array_26839=this->_n_out_26674;auto _n_index_26840=_n_i_26731;auto _n_value_26841=d::at(this->_n_sky_26668,_n_i_26731);d::put(_n_array_26839,_n_index_26840,_n_value_26841);return _n_value_26841;})());
}}
(void)(d::forEach(this->_n_field_26672,[&]( std::shared_ptr<_n_Record_26673> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_26673> _n_f_26732=_a0;
double _n_i_26733=_a1;
{
double _n_x_26734=(_n_t_26730*_n_f_26732->_p_rate);
double _n_k_26735=std::floor(_n_x_26734);
double _n_e_26736=_n_ease_26654((_n_x_26734-_n_k_26735));
double _n_w_26737=([&](){auto _n_left_26842=_n_hash_26653(_n_k_26735,(_n_i_26733+7.0));auto _n_right_26843=(([&](){auto _n_left_26844=_n_hash_26653((_n_k_26735+1.0),(_n_i_26733+7.0));auto _n_right_26845=_n_hash_26653(_n_k_26735,(_n_i_26733+7.0));return (_n_left_26844-_n_right_26845);})()*_n_e_26736);return (_n_left_26842+_n_right_26843);})();
(void)(([&](){auto&& _n_array_26846=this->_n_out_26674;auto _n_index_26847=_n_f_26732->_p_k;auto _n_value_26848=(d::truth((_n_w_26737<0.2))?d::String(u" "):_n_f_26732->_p_ch);d::put(_n_array_26846,_n_index_26847,_n_value_26848);return _n_value_26848;})());

}
}));
double _n_m0_26738=([&](){auto _n_argument_26849=0.0;auto _n_argument_26850=std::floor((((_n_t_26730-2.0)+2.5)/_n_METEOR_26652));return d::maximum({_n_argument_26849,_n_argument_26850});})();
for(auto &&_n_item_26851:d::Array<double,false>{(_n_m0_26738-1.0),_n_m0_26738}){d::check_cancel();double _n_m_26739=_n_item_26851;
{
if(d::truth((_n_m_26739<0.0))){d::check_cancel();continue;
}
double _n_start_26740=((2.0+(_n_m_26739*_n_METEOR_26652))+(d::truth(_n_m_26739)?((_n_hash_26653(_n_m_26739,3.0)*4.0)-2.0):0.0));
double _n_age_26741=((_n_t_26730-_n_start_26740)/0.8);
if((d::truth((_n_age_26741<=0.0))||d::truth((_n_age_26741>=1.45)))){d::check_cancel();continue;
}
double _n_dir_26742=(d::truth((_n_hash_26653(_n_m_26739,5.0)<0.5))?1.0:(-d::number(1.0)));
double _n_len_26743=(18.0+(8.0*_n_hash_26653(_n_m_26739,6.0)));
double _n_drop_26744=(3.0+(3.0*_n_hash_26653(_n_m_26739,7.0)));
double _n_x0_26745=(d::truth((_n_dir_26742>0.0))?(4.0+(_n_hash_26653(_n_m_26739,8.0)*((this->_n_cols_26658-_n_len_26743)-8.0))):((this->_n_cols_26658-5.0)-(_n_hash_26653(_n_m_26739,8.0)*((this->_n_cols_26658-_n_len_26743)-8.0))));
double _n_y0_26746=(0.6+(_n_hash_26653(_n_m_26739,9.0)*((this->_n_rows_26659-_n_drop_26744)-2.2)));
double _n_front_26747=d::minimum({_n_age_26741,1.0});
double _n_back_26748=d::maximum({0.0,(_n_age_26741-0.45)});
{double _n_q_26749=std::ceil((_n_back_26748*40.0));
for(;d::truth((_n_q_26749<=(_n_front_26747*40.0)));(void)((_n_q_26749++))){d::check_cancel();double _n_f_26750=(_n_q_26749/40.0);
double _n_x_26751=(_n_x0_26745+((_n_dir_26742*_n_len_26743)*_n_f_26750));
double _n_y_26752=(_n_y0_26746+(_n_drop_26744*_n_f_26750));
double _n_c_26753=d::round(_n_x_26751);
double _n_r_26754=std::floor(_n_y_26752);
double _n_sub_26755=(_n_y_26752-_n_r_26754);
double _n_k_26756=((_n_r_26754*this->_n_cols_26658)+_n_c_26753);
if(((((d::truth((_n_c_26753<0.0))||d::truth((_n_c_26753>=this->_n_cols_26658)))||d::truth((_n_r_26754<0.0)))||d::truth((_n_r_26754>=this->_n_rows_26659)))||d::truth(d::includes(d::String(u"*+"),d::at(this->_n_sky_26668,_n_k_26756))))){d::check_cancel();continue;
}
double _n_fresh_26757=((_n_f_26750-_n_back_26748)/d::maximum({0.000001,(_n_front_26747-_n_back_26748)}));
(void)(([&](){auto&& _n_array_26852=this->_n_out_26674;auto _n_index_26853=_n_k_26756;auto _n_value_26854=(d::truth((_n_fresh_26757>0.5))?(d::truth((_n_sub_26755<0.34))?d::String(u"'"):(d::truth((_n_sub_26755<0.67))?d::String(u"-"):d::String(u"_"))):(d::truth((_n_sub_26755<0.5))?d::String(u"·"):d::String(u".")));d::put(_n_array_26852,_n_index_26853,_n_value_26854);return _n_value_26854;})());
}}
if(d::truth((_n_age_26741<1.0))){d::check_cancel();double _n_c_26758=d::round((_n_x0_26745+((_n_dir_26742*_n_len_26743)*_n_age_26741)));
double _n_r_26759=std::floor((_n_y0_26746+(_n_drop_26744*_n_age_26741)));
if(((((d::truth((_n_c_26758>=0.0))&&d::truth((_n_c_26758<this->_n_cols_26658)))&&d::truth((_n_r_26759>=0.0)))&&d::truth((_n_r_26759<this->_n_rows_26659)))&&d::truth((!d::truth(d::includes(d::String(u"*+"),d::at(this->_n_sky_26668,((_n_r_26759*this->_n_cols_26658)+_n_c_26758)))))))){d::check_cancel();(void)(([&](){auto&& _n_array_26855=this->_n_out_26674;auto _n_index_26856=((_n_r_26759*this->_n_cols_26658)+_n_c_26758);auto _n_value_26857=d::String(u"o");d::put(_n_array_26855,_n_index_26856,_n_value_26857);return _n_value_26857;})());
}
}

}
}
d::Array<d::String,false> _n_res_26760=d::Array<d::String,false>{};
{double _n_r_26761=0.0;
for(;d::truth((_n_r_26761<this->_n_rows_26659));(void)((_n_r_26761++))){d::check_cancel();(void)(_n_res_26760.push(d::join(this->_n_out_26674.slice((_n_r_26761*this->_n_cols_26658),((_n_r_26761+1.0)*this->_n_cols_26658)),d::String(u""))));
}}
return d::join(_n_res_26760,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("saptarishi").cols)*ascii::catalog_meta("saptarishi").rows);auto _env=std::make_shared<_n_Record_26763>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &saptarishi_meta(){return catalog_meta("saptarishi");}
std::unique_ptr<Piece> make_saptarishi(const AsciiPieceOptions &o){return std::make_unique<Native_saptarishi>(o);}
}
