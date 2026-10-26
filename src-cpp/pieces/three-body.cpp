// Direct, statically typed C++ from src/pieces/three-body.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_32744;
struct _n_Record_32761;
struct _n_Record_32808;
struct _n_Record_32744{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_32744> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32744>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_32761{
double _p_c{};
double _p_r{};
double _p_off{};
double _p_sub{};
static std::shared_ptr<_n_Record_32761> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32761>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);out->_p_off=d::decode<double>(j["off"]);out->_p_sub=d::decode<double>(j["sub"]);return out;}
};
struct _n_Record_32808{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_32808> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32808>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,true> _n_integrate_32750();
std::shared_ptr<_n_Record_32744> _n_meta_32743=[](){return ([&](){auto _n_object_32811=std::make_shared<_n_Record_32744>();_n_object_32811->_p_name=d::String(u"three-body");_n_object_32811->_p_category=d::String(u"space");_n_object_32811->_p_note=d::String(u"three equal masses sharing one figure-eight orbit");_n_object_32811->_p_cols=65.0;_n_object_32811->_p_rows=15.0;_n_object_32811->_p_fps=30.0;return _n_object_32811;})();}();
const double _n_PERIOD_32745=[](){return 6.32591398;}();
const double _n_STEPS_32746=[](){return 7200.0;}();
const double _n_N_32747=[](){return 720.0;}();
const double _n_LAP_32748=[](){return 11.0;}();
const double _n_TRAIL_32749=[](){return 60.0;}();
d::Array<double,true> _n_integrate_32750(){{
d::Array<double,false> _n_p_32766=d::Array<double,false>{0.97000436,(-d::number(0.24308753)),(-d::number(0.97000436)),0.24308753,0.0,0.0};
d::Array<double,false> _n_v_32767=d::Array<double,false>{0.46620368,0.43236573,0.46620368,0.43236573,(-d::number(0.93240737)),(-d::number(0.86473146))};
auto _n_acc_32768=[&]( ) mutable ->d::Array<double,false>{{
d::Array<double,false> _n_a_32769=d::Array<double,false>{0.0,0.0,0.0,0.0,0.0,0.0};
{double _n_i_32770=0.0;
for(;d::truth((_n_i_32770<6.0));(void)((_n_i_32770=(_n_i_32770+2.0)))){d::check_cancel();{double _n_j_32771=0.0;
for(;d::truth((_n_j_32771<6.0));(void)((_n_j_32771=(_n_j_32771+2.0)))){d::check_cancel();if(d::truth((_n_i_32770==_n_j_32771))){d::check_cancel();continue;
}
double _n_dx_32772=(d::at(_n_p_32766,_n_j_32771)-d::at(_n_p_32766,_n_i_32770));
double _n_dy_32773=(d::at(_n_p_32766,(_n_j_32771+1.0))-d::at(_n_p_32766,(_n_i_32770+1.0)));
double _n_r2_32774=((_n_dx_32772*_n_dx_32772)+(_n_dy_32773*_n_dy_32773));
double _n_r3_32775=(_n_r2_32774*std::sqrt(_n_r2_32774));
(void)(([&](){auto&& _n_array_32812=_n_a_32769;auto _n_index_32813=_n_i_32770;auto _n_value_32814=(d::at(_n_array_32812,_n_index_32813)+(_n_dx_32772/_n_r3_32775));d::put(_n_array_32812,_n_index_32813,_n_value_32814);return _n_value_32814;})());
(void)(([&](){auto&& _n_array_32815=_n_a_32769;auto _n_index_32816=(_n_i_32770+1.0);auto _n_value_32817=(d::at(_n_array_32815,_n_index_32816)+(_n_dy_32773/_n_r3_32775));d::put(_n_array_32815,_n_index_32816,_n_value_32817);return _n_value_32817;})());
}}
}}
return _n_a_32769;

}
};
d::Array<double,true> _n_path_32776=d::Array<double,true>(size_t((_n_N_32747*2.0)));
double _n_dt_32777=(_n_PERIOD_32745/_n_STEPS_32746);
d::Array<double,false> _n_a_32778=_n_acc_32768();
{double _n_s_32779=0.0;
for(;d::truth((_n_s_32779<_n_STEPS_32746));(void)((_n_s_32779++))){d::check_cancel();if(d::truth((d::mod(_n_s_32779,(_n_STEPS_32746/_n_N_32747))==0.0))){d::check_cancel();(void)(_n_path_32776.set(d::Array<double,false>{d::at(_n_p_32766,0.0),d::at(_n_p_32766,1.0)},((_n_s_32779/(_n_STEPS_32746/_n_N_32747))*2.0)));
}
{double _n_k_32780=0.0;
for(;d::truth((_n_k_32780<6.0));(void)((_n_k_32780++))){d::check_cancel();(void)(([&](){auto&& _n_array_32818=_n_v_32767;auto _n_index_32819=_n_k_32780;auto _n_value_32820=(d::at(_n_array_32818,_n_index_32819)+((d::at(_n_a_32778,_n_k_32780)*_n_dt_32777)/2.0));d::put(_n_array_32818,_n_index_32819,_n_value_32820);return _n_value_32820;})());
}}
{double _n_k_32781=0.0;
for(;d::truth((_n_k_32781<6.0));(void)((_n_k_32781++))){d::check_cancel();(void)(([&](){auto&& _n_array_32821=_n_p_32766;auto _n_index_32822=_n_k_32781;auto _n_value_32823=(d::at(_n_array_32821,_n_index_32822)+(d::at(_n_v_32767,_n_k_32781)*_n_dt_32777));d::put(_n_array_32821,_n_index_32822,_n_value_32823);return _n_value_32823;})());
}}
(void)((_n_a_32778=_n_acc_32768()));
{double _n_k_32782=0.0;
for(;d::truth((_n_k_32782<6.0));(void)((_n_k_32782++))){d::check_cancel();(void)(([&](){auto&& _n_array_32824=_n_v_32767;auto _n_index_32825=_n_k_32782;auto _n_value_32826=(d::at(_n_array_32824,_n_index_32825)+((d::at(_n_a_32778,_n_k_32782)*_n_dt_32777)/2.0));d::put(_n_array_32824,_n_index_32825,_n_value_32826);return _n_value_32826;})());
}}
}}
return _n_path_32776;

}
}

struct Native_three_body final:ascii::Piece{
double _n_cols_32751{};
double _n_rows_32752{};
d::Array<double,true> _n_path_32753{};
double _n_xMax_32754{};
double _n_yMax_32755{};
double _n_sx_32756{};
double _n_sy_32757{};
d::Array<int32_t,true> _n_at_32758{};
d::Array<d::String,false> _n_orbit_32759{};
d::Array<std::shared_ptr<_n_Record_32761>,false> _n_run_32760{};
double _n_lx_32762{};
double _n_ly_32763{};
d::Array<d::String,false> _n_out_32765{};
std::function<d::String(double,std::shared_ptr<_n_Record_32808>)> _render;
double _n_cell_32764(double _a0){double _n_i_32795=_a0;
return d::at(this->_n_at_32758,d::mod((d::mod(_n_i_32795,_n_N_32747)+_n_N_32747),_n_N_32747));}

explicit Native_three_body(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_32827=_n_meta_32743;
this->_n_cols_32751=_n_binding_32827->_p_cols;
this->_n_rows_32752=_n_binding_32827->_p_rows;
this->_n_path_32753=_n_integrate_32750();
this->_n_xMax_32754=0.0;
this->_n_yMax_32755=0.0;
{double _n_i_32783=0.0;
for(;d::truth((_n_i_32783<_n_N_32747));(void)((_n_i_32783++))){d::check_cancel();(void)((this->_n_xMax_32754=([&](){auto _n_argument_32828=this->_n_xMax_32754;auto _n_argument_32829=std::fabs(d::at(this->_n_path_32753,(2.0*_n_i_32783)));return d::maximum({_n_argument_32828,_n_argument_32829});})()));
(void)((this->_n_yMax_32755=([&](){auto _n_argument_32830=this->_n_yMax_32755;auto _n_argument_32831=std::fabs(d::at(this->_n_path_32753,((2.0*_n_i_32783)+1.0)));return d::maximum({_n_argument_32830,_n_argument_32831});})()));
}}
this->_n_sx_32756=((this->_n_cols_32751-7.0)/(2.0*this->_n_xMax_32754));
this->_n_sy_32757=(d::round(((this->_n_yMax_32755*this->_n_sx_32756)*0.5))/this->_n_yMax_32755);
this->_n_at_32758=d::Array<int32_t,true>(size_t(_n_N_32747));
this->_n_orbit_32759=d::Array<d::String,false>(size_t((this->_n_cols_32751*this->_n_rows_32752))).fill(d::String(u" "));
this->_n_run_32760=d::Array<std::shared_ptr<_n_Record_32761>,false>{};
{double _n_i_32784=0.0;
for(;d::truth((_n_i_32784<_n_N_32747));(void)((_n_i_32784++))){d::check_cancel();double _n_x_32785=(((this->_n_cols_32751-1.0)/2.0)+(d::at(this->_n_path_32753,(2.0*_n_i_32784))*this->_n_sx_32756));
double _n_y_32786=(((this->_n_rows_32752-1.0)/2.0)-(d::at(this->_n_path_32753,((2.0*_n_i_32784)+1.0))*this->_n_sy_32757));
double _n_c_32787=d::round(_n_x_32785);
double _n_r_32788=d::round(_n_y_32786);
double _n_sub_32789=((_n_y_32786-_n_r_32788)+0.5);
(void)(([&](){auto&& _n_array_32832=this->_n_at_32758;auto _n_index_32833=_n_i_32784;auto _n_value_32834=((_n_r_32788*this->_n_cols_32751)+_n_c_32787);d::put(_n_array_32832,_n_index_32833,_n_value_32834);return _n_value_32834;})());
double _n_off_32790=(std::pow((_n_x_32785-_n_c_32787),2.0)+std::pow((2.0*(_n_sub_32789-0.5)),2.0));
std::shared_ptr<_n_Record_32761> _n_last_32791=d::at(this->_n_run_32760,(double(this->_n_run_32760.size())-1.0));
if(((d::truth(_n_last_32791)&&d::truth((_n_last_32791->_p_c==_n_c_32787)))&&d::truth((_n_last_32791->_p_r==_n_r_32788)))){d::check_cancel();if(d::truth((_n_off_32790<_n_last_32791->_p_off))){d::check_cancel();(void)(([&](){auto _n_record_32836=_n_last_32791;_n_record_32836->_p_off=_n_off_32790;_n_record_32836->_p_sub=_n_sub_32789;return _n_record_32836;})());
}
}else {d::check_cancel();(void)(this->_n_run_32760.push(([&](){auto _n_object_32838=std::make_shared<_n_Record_32761>();_n_object_32838->_p_c=_n_c_32787;_n_object_32838->_p_r=_n_r_32788;_n_object_32838->_p_off=_n_off_32790;_n_object_32838->_p_sub=_n_sub_32789;return _n_object_32838;})()));
}
}}
this->_n_lx_32762=(-d::number(9.0));
this->_n_ly_32763=(-d::number(9.0));
for(auto &&_n_item_32839:this->_n_run_32760){d::check_cancel();auto _n_binding_32840=_n_item_32839;
double _n_c_32792=_n_binding_32840->_p_c;
double _n_r_32793=_n_binding_32840->_p_r;
double _n_sub_32794=_n_binding_32840->_p_sub;
{
if(d::truth((d::hypot(std::initializer_list<double>{(_n_c_32792-this->_n_lx_32762),(2.0*((_n_r_32793+_n_sub_32794)-this->_n_ly_32763))})<1.8))){d::check_cancel();continue;
}
(void)(([&](){auto _n_unpack_32841=d::Array<double,false>{_n_c_32792,(_n_r_32793+_n_sub_32794)};this->_n_lx_32762=d::at(_n_unpack_32841,0.0);this->_n_ly_32763=d::at(_n_unpack_32841,1.0);return _n_unpack_32841;})());
(void)(([&](){auto&& _n_array_32842=this->_n_orbit_32759;auto _n_index_32843=((_n_r_32793*this->_n_cols_32751)+_n_c_32792);auto _n_value_32844=(d::truth((_n_sub_32794<0.36))?d::String(u"'"):(d::truth((_n_sub_32794<0.64))?d::String(u"·"):d::String(u".")));d::put(_n_array_32842,_n_index_32843,_n_value_32844);return _n_value_32844;})());

}
}
this->_n_out_32765=d::Array<d::String,false>(size_t((this->_n_cols_32751*this->_n_rows_32752)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_32808> _a1) mutable ->d::String{double _n_t_32796=_a0;
{
{double _n_k_32797=0.0;
for(;d::truth((_n_k_32797<double(this->_n_out_32765.size())));(void)((_n_k_32797++))){d::check_cancel();(void)(([&](){auto&& _n_array_32845=this->_n_out_32765;auto _n_index_32846=_n_k_32797;auto _n_value_32847=d::at(this->_n_orbit_32759,_n_k_32797);d::put(_n_array_32845,_n_index_32846,_n_value_32847);return _n_value_32847;})());
}}
double _n_head_32798=std::floor((d::mod((_n_t_32796/_n_LAP_32748),1.0)*_n_N_32747));
{double _n_b_32799=0.0;
for(;d::truth((_n_b_32799<3.0));(void)((_n_b_32799++))){d::check_cancel();double _n_h_32800=(_n_head_32798+((_n_b_32799*_n_N_32747)/3.0));
double _n_seen_32801=this->_n_cell_32764(_n_h_32800);
double _n_k_32802=0.0;
{double _n_i_32803=1.0;
for(;d::truth((_n_i_32803<=_n_TRAIL_32749));(void)((_n_i_32803++))){d::check_cancel();double _n_q_32804=this->_n_cell_32764((_n_h_32800-_n_i_32803));
if(d::truth((_n_q_32804==_n_seen_32801))){d::check_cancel();continue;
}
(void)((_n_seen_32801=_n_q_32804));
(void)((_n_k_32802++));
(void)(([&](){auto&& _n_array_32848=this->_n_out_32765;auto _n_index_32849=_n_q_32804;auto _n_value_32850=(d::truth((_n_k_32802<=1.0))?d::String(u"o"):((d::truth((_n_k_32802<=3.0))||d::truth((_n_i_32803<(_n_TRAIL_32749*0.45))))?d::String(u":"):d::String(u"·")));d::put(_n_array_32848,_n_index_32849,_n_value_32850);return _n_value_32850;})());
}}
}}
{double _n_b_32805=0.0;
for(;d::truth((_n_b_32805<3.0));(void)((_n_b_32805++))){d::check_cancel();(void)(([&](){auto&& _n_array_32851=this->_n_out_32765;auto _n_index_32852=this->_n_cell_32764((_n_head_32798+((_n_b_32805*_n_N_32747)/3.0)));auto _n_value_32853=d::String(u"O");d::put(_n_array_32851,_n_index_32852,_n_value_32853);return _n_value_32853;})());
}}
d::Array<d::String,false> _n_lines_32806=d::Array<d::String,false>{};
{double _n_r_32807=0.0;
for(;d::truth((_n_r_32807<this->_n_rows_32752));(void)((_n_r_32807++))){d::check_cancel();(void)(_n_lines_32806.push(d::join(this->_n_out_32765.slice((_n_r_32807*this->_n_cols_32751),((_n_r_32807+1.0)*this->_n_cols_32751)),d::String(u""))));
}}
return d::join(_n_lines_32806,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("three-body").cols)*ascii::catalog_meta("three-body").rows);auto _env=std::make_shared<_n_Record_32808>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &three_body_meta(){return catalog_meta("three-body");}
std::unique_ptr<Piece> make_three_body(const AsciiPieceOptions &o){return std::make_unique<Native_three_body>(o);}
}
