// Direct, statically typed C++ from src/pieces/three-body.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_32745;
struct _n_Record_32762;
struct _n_Record_32809;
struct _n_Record_32745{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_32745> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32745>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_32762{
double _p_c{};
double _p_r{};
double _p_off{};
double _p_sub{};
static std::shared_ptr<_n_Record_32762> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32762>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);out->_p_off=d::decode<double>(j["off"]);out->_p_sub=d::decode<double>(j["sub"]);return out;}
};
struct _n_Record_32809{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_32809> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32809>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,true> _n_integrate_32751();
std::shared_ptr<_n_Record_32745> _n_meta_32744=[](){return ([&](){auto _n_object_32812=std::make_shared<_n_Record_32745>();_n_object_32812->_p_name=d::String(u"three-body");_n_object_32812->_p_category=d::String(u"space");_n_object_32812->_p_note=d::String(u"three equal masses sharing one figure-eight orbit");_n_object_32812->_p_cols=65.0;_n_object_32812->_p_rows=15.0;_n_object_32812->_p_fps=30.0;return _n_object_32812;})();}();
const double _n_PERIOD_32746=[](){return 6.32591398;}();
const double _n_STEPS_32747=[](){return 7200.0;}();
const double _n_N_32748=[](){return 720.0;}();
const double _n_LAP_32749=[](){return 11.0;}();
const double _n_TRAIL_32750=[](){return 60.0;}();
d::Array<double,true> _n_integrate_32751(){{
d::Array<double,false> _n_p_32767=d::Array<double,false>{0.97000436,(-d::number(0.24308753)),(-d::number(0.97000436)),0.24308753,0.0,0.0};
d::Array<double,false> _n_v_32768=d::Array<double,false>{0.46620368,0.43236573,0.46620368,0.43236573,(-d::number(0.93240737)),(-d::number(0.86473146))};
auto _n_acc_32769=[&]( ) mutable ->d::Array<double,false>{{
d::Array<double,false> _n_a_32770=d::Array<double,false>{0.0,0.0,0.0,0.0,0.0,0.0};
{double _n_i_32771=0.0;
for(;d::truth((_n_i_32771<6.0));(void)((_n_i_32771=(_n_i_32771+2.0)))){d::check_cancel();{double _n_j_32772=0.0;
for(;d::truth((_n_j_32772<6.0));(void)((_n_j_32772=(_n_j_32772+2.0)))){d::check_cancel();if(d::truth((_n_i_32771==_n_j_32772))){d::check_cancel();continue;
}
double _n_dx_32773=(d::at(_n_p_32767,_n_j_32772)-d::at(_n_p_32767,_n_i_32771));
double _n_dy_32774=(d::at(_n_p_32767,(_n_j_32772+1.0))-d::at(_n_p_32767,(_n_i_32771+1.0)));
double _n_r2_32775=((_n_dx_32773*_n_dx_32773)+(_n_dy_32774*_n_dy_32774));
double _n_r3_32776=(_n_r2_32775*std::sqrt(_n_r2_32775));
(void)(([&](){auto&& _n_array_32813=_n_a_32770;auto _n_index_32814=_n_i_32771;auto _n_value_32815=(d::at(_n_array_32813,_n_index_32814)+(_n_dx_32773/_n_r3_32776));d::put(_n_array_32813,_n_index_32814,_n_value_32815);return _n_value_32815;})());
(void)(([&](){auto&& _n_array_32816=_n_a_32770;auto _n_index_32817=(_n_i_32771+1.0);auto _n_value_32818=(d::at(_n_array_32816,_n_index_32817)+(_n_dy_32774/_n_r3_32776));d::put(_n_array_32816,_n_index_32817,_n_value_32818);return _n_value_32818;})());
}}
}}
return _n_a_32770;

}
};
d::Array<double,true> _n_path_32777=d::Array<double,true>(size_t((_n_N_32748*2.0)));
double _n_dt_32778=(_n_PERIOD_32746/_n_STEPS_32747);
d::Array<double,false> _n_a_32779=_n_acc_32769();
{double _n_s_32780=0.0;
for(;d::truth((_n_s_32780<_n_STEPS_32747));(void)((_n_s_32780++))){d::check_cancel();if(d::truth((d::mod(_n_s_32780,(_n_STEPS_32747/_n_N_32748))==0.0))){d::check_cancel();(void)(_n_path_32777.set(d::Array<double,false>{d::at(_n_p_32767,0.0),d::at(_n_p_32767,1.0)},((_n_s_32780/(_n_STEPS_32747/_n_N_32748))*2.0)));
}
{double _n_k_32781=0.0;
for(;d::truth((_n_k_32781<6.0));(void)((_n_k_32781++))){d::check_cancel();(void)(([&](){auto&& _n_array_32819=_n_v_32768;auto _n_index_32820=_n_k_32781;auto _n_value_32821=(d::at(_n_array_32819,_n_index_32820)+((d::at(_n_a_32779,_n_k_32781)*_n_dt_32778)/2.0));d::put(_n_array_32819,_n_index_32820,_n_value_32821);return _n_value_32821;})());
}}
{double _n_k_32782=0.0;
for(;d::truth((_n_k_32782<6.0));(void)((_n_k_32782++))){d::check_cancel();(void)(([&](){auto&& _n_array_32822=_n_p_32767;auto _n_index_32823=_n_k_32782;auto _n_value_32824=(d::at(_n_array_32822,_n_index_32823)+(d::at(_n_v_32768,_n_k_32782)*_n_dt_32778));d::put(_n_array_32822,_n_index_32823,_n_value_32824);return _n_value_32824;})());
}}
(void)((_n_a_32779=_n_acc_32769()));
{double _n_k_32783=0.0;
for(;d::truth((_n_k_32783<6.0));(void)((_n_k_32783++))){d::check_cancel();(void)(([&](){auto&& _n_array_32825=_n_v_32768;auto _n_index_32826=_n_k_32783;auto _n_value_32827=(d::at(_n_array_32825,_n_index_32826)+((d::at(_n_a_32779,_n_k_32783)*_n_dt_32778)/2.0));d::put(_n_array_32825,_n_index_32826,_n_value_32827);return _n_value_32827;})());
}}
}}
return _n_path_32777;

}
}

struct Native_three_body final:ascii::Piece{
double _n_cols_32752{};
double _n_rows_32753{};
d::Array<double,true> _n_path_32754{};
double _n_xMax_32755{};
double _n_yMax_32756{};
double _n_sx_32757{};
double _n_sy_32758{};
d::Array<int32_t,true> _n_at_32759{};
d::Array<d::String,false> _n_orbit_32760{};
d::Array<std::shared_ptr<_n_Record_32762>,false> _n_run_32761{};
double _n_lx_32763{};
double _n_ly_32764{};
d::Array<d::String,false> _n_out_32766{};
std::function<d::String(double,std::shared_ptr<_n_Record_32809>)> _render;
double _n_cell_32765(double _a0){double _n_i_32796=_a0;
return d::at(this->_n_at_32759,d::mod((d::mod(_n_i_32796,_n_N_32748)+_n_N_32748),_n_N_32748));}

explicit Native_three_body(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_32828=_n_meta_32744;
this->_n_cols_32752=_n_binding_32828->_p_cols;
this->_n_rows_32753=_n_binding_32828->_p_rows;
this->_n_path_32754=_n_integrate_32751();
this->_n_xMax_32755=0.0;
this->_n_yMax_32756=0.0;
{double _n_i_32784=0.0;
for(;d::truth((_n_i_32784<_n_N_32748));(void)((_n_i_32784++))){d::check_cancel();(void)((this->_n_xMax_32755=([&](){auto _n_argument_32829=this->_n_xMax_32755;auto _n_argument_32830=std::fabs(d::at(this->_n_path_32754,(2.0*_n_i_32784)));return d::maximum({_n_argument_32829,_n_argument_32830});})()));
(void)((this->_n_yMax_32756=([&](){auto _n_argument_32831=this->_n_yMax_32756;auto _n_argument_32832=std::fabs(d::at(this->_n_path_32754,((2.0*_n_i_32784)+1.0)));return d::maximum({_n_argument_32831,_n_argument_32832});})()));
}}
this->_n_sx_32757=((this->_n_cols_32752-7.0)/(2.0*this->_n_xMax_32755));
this->_n_sy_32758=(d::round(((this->_n_yMax_32756*this->_n_sx_32757)*0.5))/this->_n_yMax_32756);
this->_n_at_32759=d::Array<int32_t,true>(size_t(_n_N_32748));
this->_n_orbit_32760=d::Array<d::String,false>(size_t((this->_n_cols_32752*this->_n_rows_32753))).fill(d::String(u" "));
this->_n_run_32761=d::Array<std::shared_ptr<_n_Record_32762>,false>{};
{double _n_i_32785=0.0;
for(;d::truth((_n_i_32785<_n_N_32748));(void)((_n_i_32785++))){d::check_cancel();double _n_x_32786=(((this->_n_cols_32752-1.0)/2.0)+(d::at(this->_n_path_32754,(2.0*_n_i_32785))*this->_n_sx_32757));
double _n_y_32787=(((this->_n_rows_32753-1.0)/2.0)-(d::at(this->_n_path_32754,((2.0*_n_i_32785)+1.0))*this->_n_sy_32758));
double _n_c_32788=d::round(_n_x_32786);
double _n_r_32789=d::round(_n_y_32787);
double _n_sub_32790=((_n_y_32787-_n_r_32789)+0.5);
(void)(([&](){auto&& _n_array_32833=this->_n_at_32759;auto _n_index_32834=_n_i_32785;auto _n_value_32835=((_n_r_32789*this->_n_cols_32752)+_n_c_32788);d::put(_n_array_32833,_n_index_32834,_n_value_32835);return _n_value_32835;})());
double _n_off_32791=(std::pow((_n_x_32786-_n_c_32788),2.0)+std::pow((2.0*(_n_sub_32790-0.5)),2.0));
std::shared_ptr<_n_Record_32762> _n_last_32792=d::at(this->_n_run_32761,(double(this->_n_run_32761.size())-1.0));
if(((d::truth(_n_last_32792)&&d::truth((_n_last_32792->_p_c==_n_c_32788)))&&d::truth((_n_last_32792->_p_r==_n_r_32789)))){d::check_cancel();if(d::truth((_n_off_32791<_n_last_32792->_p_off))){d::check_cancel();(void)(([&](){auto _n_record_32837=_n_last_32792;_n_record_32837->_p_off=_n_off_32791;_n_record_32837->_p_sub=_n_sub_32790;return _n_record_32837;})());
}
}else {d::check_cancel();(void)(this->_n_run_32761.push(([&](){auto _n_object_32839=std::make_shared<_n_Record_32762>();_n_object_32839->_p_c=_n_c_32788;_n_object_32839->_p_r=_n_r_32789;_n_object_32839->_p_off=_n_off_32791;_n_object_32839->_p_sub=_n_sub_32790;return _n_object_32839;})()));
}
}}
this->_n_lx_32763=(-d::number(9.0));
this->_n_ly_32764=(-d::number(9.0));
for(auto &&_n_item_32840:this->_n_run_32761){d::check_cancel();auto _n_binding_32841=_n_item_32840;
double _n_c_32793=_n_binding_32841->_p_c;
double _n_r_32794=_n_binding_32841->_p_r;
double _n_sub_32795=_n_binding_32841->_p_sub;
{
if(d::truth((d::hypot(std::initializer_list<double>{(_n_c_32793-this->_n_lx_32763),(2.0*((_n_r_32794+_n_sub_32795)-this->_n_ly_32764))})<1.8))){d::check_cancel();continue;
}
(void)(([&](){auto _n_unpack_32842=std::array<double,2>{_n_c_32793,(_n_r_32794+_n_sub_32795)};this->_n_lx_32763=d::at(_n_unpack_32842,0.0);this->_n_ly_32764=d::at(_n_unpack_32842,1.0);return _n_unpack_32842;})());
(void)(([&](){auto&& _n_array_32843=this->_n_orbit_32760;auto _n_index_32844=((_n_r_32794*this->_n_cols_32752)+_n_c_32793);auto _n_value_32845=(d::truth((_n_sub_32795<0.36))?d::String(u"'"):(d::truth((_n_sub_32795<0.64))?d::String(u"·"):d::String(u".")));d::put(_n_array_32843,_n_index_32844,_n_value_32845);return _n_value_32845;})());

}
}
this->_n_out_32766=d::Array<d::String,false>(size_t((this->_n_cols_32752*this->_n_rows_32753)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_32809> _a1) mutable ->d::String{double _n_t_32797=_a0;
{
{double _n_k_32798=0.0;
for(;d::truth((_n_k_32798<double(this->_n_out_32766.size())));(void)((_n_k_32798++))){d::check_cancel();(void)(([&](){auto&& _n_array_32846=this->_n_out_32766;auto _n_index_32847=_n_k_32798;auto _n_value_32848=d::at(this->_n_orbit_32760,_n_k_32798);d::put(_n_array_32846,_n_index_32847,_n_value_32848);return _n_value_32848;})());
}}
double _n_head_32799=std::floor((d::mod((_n_t_32797/_n_LAP_32749),1.0)*_n_N_32748));
{double _n_b_32800=0.0;
for(;d::truth((_n_b_32800<3.0));(void)((_n_b_32800++))){d::check_cancel();double _n_h_32801=(_n_head_32799+((_n_b_32800*_n_N_32748)/3.0));
double _n_seen_32802=this->_n_cell_32765(_n_h_32801);
double _n_k_32803=0.0;
{double _n_i_32804=1.0;
for(;d::truth((_n_i_32804<=_n_TRAIL_32750));(void)((_n_i_32804++))){d::check_cancel();double _n_q_32805=this->_n_cell_32765((_n_h_32801-_n_i_32804));
if(d::truth((_n_q_32805==_n_seen_32802))){d::check_cancel();continue;
}
(void)((_n_seen_32802=_n_q_32805));
(void)((_n_k_32803++));
(void)(([&](){auto&& _n_array_32849=this->_n_out_32766;auto _n_index_32850=_n_q_32805;auto _n_value_32851=(d::truth((_n_k_32803<=1.0))?d::String(u"o"):((d::truth((_n_k_32803<=3.0))||d::truth((_n_i_32804<(_n_TRAIL_32750*0.45))))?d::String(u":"):d::String(u"·")));d::put(_n_array_32849,_n_index_32850,_n_value_32851);return _n_value_32851;})());
}}
}}
{double _n_b_32806=0.0;
for(;d::truth((_n_b_32806<3.0));(void)((_n_b_32806++))){d::check_cancel();(void)(([&](){auto&& _n_array_32852=this->_n_out_32766;auto _n_index_32853=this->_n_cell_32765((_n_head_32799+((_n_b_32806*_n_N_32748)/3.0)));auto _n_value_32854=d::String(u"O");d::put(_n_array_32852,_n_index_32853,_n_value_32854);return _n_value_32854;})());
}}
d::Array<d::String,false> _n_lines_32807=d::Array<d::String,false>{};
{double _n_r_32808=0.0;
for(;d::truth((_n_r_32808<this->_n_rows_32753));(void)((_n_r_32808++))){d::check_cancel();(void)(_n_lines_32807.push(d::join(this->_n_out_32766.slice((_n_r_32808*this->_n_cols_32752),((_n_r_32808+1.0)*this->_n_cols_32752)),d::String(u""))));
}}
return d::join(_n_lines_32807,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("three-body").cols)*ascii::catalog_meta("three-body").rows);auto _env=std::make_shared<_n_Record_32809>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &three_body_meta(){return catalog_meta("three-body");}
std::unique_ptr<Piece> make_three_body(const AsciiPieceOptions &o){return std::make_unique<Native_three_body>(o);}
}
