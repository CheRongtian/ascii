// Direct, statically typed C++ from src/pieces/flow-field.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10696;
struct _n_Record_10719;
struct _n_Record_10795;
struct _n_Record_10696{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_10696> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10696>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_10719{
double _p_x{};
double _p_y{};
double _p_o{};
static std::shared_ptr<_n_Record_10719> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10719>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_o=d::decode<double>(j["o"]);return out;}
};
struct _n_Record_10795{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10795> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10795>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_10708(double _a0);
double _n_hash_10709(double _a0,double _a1,double _a2);
double _n_noise_10710(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_10696> _n_meta_10695=[](){return ([&](){auto _n_object_10798=std::make_shared<_n_Record_10696>();_n_object_10798->_p_name=d::String(u"flow field");_n_object_10798->_p_category=d::String(u"generative");_n_object_10798->_p_note=d::String(u"particle trails gathering into winding, merging streams");_n_object_10798->_p_cols=64.0;_n_object_10798->_p_rows=22.0;_n_object_10798->_p_fps=20.0;return _n_object_10798;})();}();
const double _n_STREAMS_10697=[](){return 4.0;}();
const double _n_RATE_10698=[](){return 16.0;}();
const double _n_SPEED_10699=[](){return 9.0;}();
const double _n_FADE_10700=[](){return 1.6;}();
const double _n_BEND_10701=[](){return 12.0;}();
const double _n_SCALE_10702=[](){return 0.085;}();
const double _n_PULL_10703=[](){return 0.22;}();
const double _n_REACH_10704=[](){return 7.0;}();
const double _n_DRIFT_10705=[](){return 0.04;}();
const double _n_TURN_10706=[](){return 1.2;}();
const double _n_WARM_10707=[](){return 9.0;}();
std::function<double()> _n_mulberry32_10708(double _a0){double _n_a_10731=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_10731=double(d::i32((_n_a_10731+1831565813.0))|d::i32(0.0))));
double _n_t_10732=d::imul(double(d::i32(_n_a_10731)^d::i32(double(d::u32(_n_a_10731)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_10731)));
(void)((_n_t_10732=double(d::i32((_n_t_10732+d::imul(double(d::i32(_n_t_10732)^d::i32(double(d::u32(_n_t_10732)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_10732)))))^d::i32(_n_t_10732))));
return (double(d::u32(double(d::i32(_n_t_10732)^d::i32(double(d::u32(_n_t_10732)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_hash_10709(double _a0,double _a1,double _a2){double _n_i_10733=_a0;
double _n_j_10734=_a1;
double _n_k_10735=_a2;
{
double _n_h_10736=([&](){auto _n_left_10799=([&](){auto _n_left_10801=d::imul(_n_i_10733,668265261.0);auto _n_right_10802=d::imul(_n_j_10734,374761393.0);return double(d::i32(_n_left_10801)^d::i32(_n_right_10802));})();auto _n_right_10800=d::imul(_n_k_10735,2654435761.0);return double(d::i32(_n_left_10799)^d::i32(_n_right_10800));})();
(void)((_n_h_10736=d::imul(double(d::i32(_n_h_10736)^d::i32(double(d::u32(_n_h_10736)>>(d::u32(15.0)&31)))),2246822519.0)));
return (double(d::u32(double(d::i32(_n_h_10736)^d::i32(double(d::u32(_n_h_10736)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_10710(double _a0,double _a1,double _a2){double _n_x_10737=_a0;
double _n_z_10738=_a1;
double _n_k_10739=_a2;
{
double _n_i_10740=std::floor(_n_x_10737);
double _n_j_10741=std::floor(_n_z_10738);
auto _n_s_10742=[&]( double _a0) mutable ->double{double _n_f_10743=_a0;
return (((_n_f_10743*_n_f_10743)*_n_f_10743)*((_n_f_10743*((_n_f_10743*6.0)-15.0))+10.0));};
double _n_u_10744=_n_s_10742((_n_x_10737-_n_i_10740));
double _n_v_10745=_n_s_10742((_n_z_10738-_n_j_10741));
double _n_a_10746=([&](){auto _n_left_10803=_n_hash_10709(_n_i_10740,_n_j_10741,_n_k_10739);auto _n_right_10804=(([&](){auto _n_left_10805=_n_hash_10709((_n_i_10740+1.0),_n_j_10741,_n_k_10739);auto _n_right_10806=_n_hash_10709(_n_i_10740,_n_j_10741,_n_k_10739);return (_n_left_10805-_n_right_10806);})()*_n_u_10744);return (_n_left_10803+_n_right_10804);})();
double _n_b_10747=([&](){auto _n_left_10807=_n_hash_10709(_n_i_10740,(_n_j_10741+1.0),_n_k_10739);auto _n_right_10808=(([&](){auto _n_left_10809=_n_hash_10709((_n_i_10740+1.0),(_n_j_10741+1.0),_n_k_10739);auto _n_right_10810=_n_hash_10709(_n_i_10740,(_n_j_10741+1.0),_n_k_10739);return (_n_left_10809-_n_right_10810);})()*_n_u_10744);return (_n_left_10807+_n_right_10808);})();
return (_n_a_10746+((_n_b_10747-_n_a_10746)*_n_v_10745));

}
}

struct Native_flow_field final:ascii::Piece{
double _n_cols_10711{};
double _n_rows_10712{};
double _n_W_10713{};
double _n_H_10714{};
std::function<double()> _n_rand_10715{};
d::Array<float,true> _n_ink_10716{};
d::Array<uint8_t,true> _n_dir_10717{};
d::Array<std::shared_ptr<_n_Record_10719>,false> _n_ps_10718{};
d::Array<float,true> _n_ys_10720{};
d::Array<float,true> _n_ss_10721{};
double _n_STEEP_10724{};
double _n_clock_10727{};
double _n_due_10728{};
double _n_last_10730{};
std::function<d::String(double,std::shared_ptr<_n_Record_10795>)> _render;
void _n_currents_10722(double _a0,double _a1){double _n_x_10748=_a0;
double _n_z_10749=_a1;
{
{double _n_k_10750=0.0;
for(;d::truth((_n_k_10750<_n_STREAMS_10697));(void)((_n_k_10750++))){d::check_cancel();auto _n_at_10751=[&]( double _a0) mutable ->double{double _n_xx_10752=_a0;
{
double _n_y_10753=(((((_n_k_10750+0.5)/_n_STREAMS_10697)-0.5)*this->_n_H_10714)+(_n_BEND_10701*((2.0*_n_noise_10710(((_n_xx_10752*_n_SCALE_10702)+(_n_k_10750*7.3)),(_n_z_10749+(_n_k_10750*3.1)),_n_k_10750))-1.0)));
return ((this->_n_H_10714/2.0)+(((this->_n_H_10714/2.0)-3.0)*std::tanh((_n_y_10753/((this->_n_H_10714/2.0)-3.0)))));

}
};
(void)(([&](){auto&& _n_array_10814=this->_n_ys_10720;auto _n_index_10815=_n_k_10750;auto _n_value_10816=_n_at_10751(_n_x_10748);d::put(_n_array_10814,_n_index_10815,_n_value_10816);return _n_value_10816;})());
(void)(([&](){auto&& _n_array_10817=this->_n_ss_10721;auto _n_index_10818=_n_k_10750;auto _n_value_10819=([&](){auto _n_left_10820=_n_at_10751((_n_x_10748+0.5));auto _n_right_10821=_n_at_10751((_n_x_10748-0.5));return (_n_left_10820-_n_right_10821);})();d::put(_n_array_10817,_n_index_10818,_n_value_10819);return _n_value_10819;})());
}}

}
}

double _n_heading_10723(double _a0,double _a1,double _a2,double _a3){double _n_x_10754=_a0;
double _n_y_10755=_a1;
double _n_o_10756=_a2;
double _n_z_10757=_a3;
{
(void)(this->_n_currents_10722(_n_x_10754,_n_z_10757));
double _n_num_10758=0.0;
double _n_den_10759=1e-9;
double _n_best_10760=0.0;
double _n_near_10761=1000000000.0;
{double _n_k_10762=0.0;
for(;d::truth((_n_k_10762<_n_STREAMS_10697));(void)((_n_k_10762++))){d::check_cancel();double _n_d_10763=((d::at(this->_n_ys_10720,_n_k_10762)+_n_o_10756)-_n_y_10755);
double _n_w_10764=std::exp((-d::number(std::pow((_n_d_10763/_n_REACH_10704),2.0))));
(void)((_n_num_10758=(_n_num_10758+(_n_w_10764*(d::at(this->_n_ss_10721,_n_k_10762)+(_n_PULL_10703*_n_d_10763))))));
(void)((_n_den_10759=(_n_den_10759+_n_w_10764)));
if(d::truth((std::fabs(_n_d_10763)<_n_near_10761))){d::check_cancel();(void)(((_n_near_10761=std::fabs(_n_d_10763)),(_n_best_10760=(d::at(this->_n_ss_10721,_n_k_10762)+(_n_PULL_10703*_n_d_10763)))));
}
}}
double _n_slope_10765=(d::truth((_n_den_10759>0.0001))?(_n_num_10758/_n_den_10759):_n_best_10760);
return ([&](){auto _n_argument_10822=(-d::number(_n_TURN_10706));auto _n_argument_10823=([&](){auto _n_argument_10824=_n_TURN_10706;auto _n_argument_10825=std::atan(_n_slope_10765);return d::minimum({_n_argument_10824,_n_argument_10825});})();return d::maximum({_n_argument_10822,_n_argument_10823});})();

}
}

d::String _n_glyph_10725(double _a0){double _n_a_10766=_a0;
{
double _n_tilt_10767=std::fabs(_n_a_10766);
if(d::truth((_n_tilt_10767<(this->_n_STEEP_10724/2.0)))){d::check_cancel();return d::String(u"-");
}
if(d::truth((_n_tilt_10767>(((ascii::PI/2.0)+this->_n_STEEP_10724)/2.0)))){d::check_cancel();return d::String(u"|");
}
return (d::truth((_n_a_10766>0.0))?d::String(u"\\"):d::String(u"/"));

}
}

void _n_mark_10726(double _a0,double _a1,double _a2){double _n_x_10768=_a0;
double _n_y_10769=_a1;
double _n_a_10770=_a2;
{
double _n_c_10771=std::floor(_n_x_10768);
double _n_r_10772=std::floor((_n_y_10769/2.0));
if((((d::truth((_n_c_10771<0.0))||d::truth((_n_c_10771>=this->_n_cols_10711)))||d::truth((_n_r_10772<0.0)))||d::truth((_n_r_10772>=this->_n_rows_10712)))){d::check_cancel();return;
}
double _n_k_10773=((_n_r_10772*this->_n_cols_10711)+_n_c_10771);
(void)(([&](){auto&& _n_array_10826=this->_n_ink_10716;auto _n_index_10827=_n_k_10773;auto _n_value_10828=1.0;d::put(_n_array_10826,_n_index_10827,_n_value_10828);return _n_value_10828;})());
(void)(([&](){auto&& _n_array_10829=this->_n_dir_10717;auto _n_index_10830=_n_k_10773;auto _n_value_10831=d::charCodeAt(this->_n_glyph_10725(_n_a_10770),0.0);d::put(_n_array_10829,_n_index_10830,_n_value_10831);return _n_value_10831;})());

}
}

void _n_step_10729(double _a0){double _n_dt_10774=_a0;
{
(void)((this->_n_clock_10727=(this->_n_clock_10727+_n_dt_10774)));
double _n_keep_10775=std::exp(((-d::number(_n_dt_10774))/_n_FADE_10700));
{double _n_k_10776=0.0;
for(;d::truth((_n_k_10776<double(this->_n_ink_10716.size())));(void)((_n_k_10776++))){d::check_cancel();(void)(([&](){auto&& _n_array_10832=this->_n_ink_10716;auto _n_index_10833=_n_k_10776;auto _n_value_10834=(d::at(_n_array_10832,_n_index_10833)*_n_keep_10775);d::put(_n_array_10832,_n_index_10833,_n_value_10834);return _n_value_10834;})());
}}
double _n_z_10777=(this->_n_clock_10727*_n_DRIFT_10705);
{(void)((this->_n_due_10728=(this->_n_due_10728-_n_dt_10774)));for(;d::truth((this->_n_due_10728<=0.0));(void)((this->_n_due_10728=(this->_n_due_10728+(1.0/_n_RATE_10698))))){d::check_cancel();(void)(this->_n_currents_10722(0.0,_n_z_10777));
double _n_y_10778=(d::truth((this->_n_rand_10715()<0.75))?([&](){auto _n_left_10835=d::at(this->_n_ys_10720,std::floor((this->_n_rand_10715()*_n_STREAMS_10697)));auto _n_right_10836=((this->_n_rand_10715()-0.5)*8.0);return (_n_left_10835+_n_right_10836);})():(2.0+(this->_n_rand_10715()*(this->_n_H_10714-4.0))));
(void)(this->_n_ps_10718.push(([&](){auto _n_object_10838=std::make_shared<_n_Record_10719>();_n_object_10838->_p_x=0.0;_n_object_10838->_p_y=_n_y_10778;_n_object_10838->_p_o=((this->_n_rand_10715()-0.5)*3.2);return _n_object_10838;})()));
}}
{double _n_i_10779=(double(this->_n_ps_10718.size())-1.0);
for(;d::truth((_n_i_10779>=0.0));(void)((_n_i_10779--))){d::check_cancel();std::shared_ptr<_n_Record_10719> _n_p_10780=d::at(this->_n_ps_10718,_n_i_10779);
double _n_a_10781=this->_n_heading_10723(_n_p_10780->_p_x,_n_p_10780->_p_y,_n_p_10780->_p_o,_n_z_10777);
double _n_dx_10782=((std::cos(_n_a_10781)*_n_SPEED_10699)*_n_dt_10774);
double _n_dy_10783=((std::sin(_n_a_10781)*_n_SPEED_10699)*_n_dt_10774);
double _n_n_10784=([&](){auto _n_argument_10839=1.0;auto _n_argument_10840=std::ceil((d::hypot(std::initializer_list<double>{_n_dx_10782,(_n_dy_10783*0.5)})*1.5));return d::maximum({_n_argument_10839,_n_argument_10840});})();
{double _n_s_10785=1.0;
for(;d::truth((_n_s_10785<=_n_n_10784));(void)((_n_s_10785++))){d::check_cancel();(void)(this->_n_mark_10726((_n_p_10780->_p_x+((_n_dx_10782*_n_s_10785)/_n_n_10784)),(_n_p_10780->_p_y+((_n_dy_10783*_n_s_10785)/_n_n_10784)),_n_a_10781));
}}
(void)((_n_p_10780->_p_x=(_n_p_10780->_p_x+_n_dx_10782)));
(void)((_n_p_10780->_p_y=(_n_p_10780->_p_y+_n_dy_10783)));
if(((d::truth((_n_p_10780->_p_x>=this->_n_W_10713))||d::truth((_n_p_10780->_p_y<0.0)))||d::truth((_n_p_10780->_p_y>=this->_n_H_10714)))){d::check_cancel();(void)(this->_n_ps_10718.splice(_n_i_10779,1.0));
}
}}

}
}

explicit Native_flow_field(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10811=_n_meta_10695;
this->_n_cols_10711=_n_binding_10811->_p_cols;
this->_n_rows_10712=_n_binding_10811->_p_rows;
this->_n_W_10713=this->_n_cols_10711;
this->_n_H_10714=(this->_n_rows_10712*2.0);
this->_n_rand_10715=_n_mulberry32_10708(24301.0);
this->_n_ink_10716=d::Array<float,true>(size_t((this->_n_cols_10711*this->_n_rows_10712)));
this->_n_dir_10717=d::Array<uint8_t,true>(size_t((this->_n_cols_10711*this->_n_rows_10712)));
this->_n_ps_10718=d::Array<std::shared_ptr<_n_Record_10719>,false>{};
this->_n_ys_10720=d::Array<float,true>(size_t(_n_STREAMS_10697));
this->_n_ss_10721=d::Array<float,true>(size_t(_n_STREAMS_10697));
this->_n_STEEP_10724=std::atan(2.0);
this->_n_clock_10727=0.0;
this->_n_due_10728=0.0;
{double _n_i_10786=0.0;
for(;d::truth((_n_i_10786<(_n_WARM_10707*_n_meta_10695->_p_fps)));(void)((_n_i_10786++))){d::check_cancel();(void)(this->_n_step_10729((1.0/_n_meta_10695->_p_fps)));
}}
this->_n_last_10730=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_10795> _a1) mutable ->d::String{double _n_t_10787=_a0;
{
double _n_dt_10788=([&](){auto _n_argument_10812=0.1;auto _n_argument_10813=d::maximum({0.0,(_n_t_10787-this->_n_last_10730)});return d::minimum({_n_argument_10812,_n_argument_10813});})();
(void)((this->_n_last_10730=_n_t_10787));
if(d::truth((_n_dt_10788>0.0))){d::check_cancel();(void)(this->_n_step_10729(_n_dt_10788));
}
d::Array<d::String,false> _n_lines_10789=d::Array<d::String,false>{};
{double _n_r_10790=0.0;
for(;d::truth((_n_r_10790<this->_n_rows_10712));(void)((_n_r_10790++))){d::check_cancel();d::String _n_s_10791=d::String(u"");
{double _n_c_10792=0.0;
for(;d::truth((_n_c_10792<this->_n_cols_10711));(void)((_n_c_10792++))){d::check_cancel();double _n_k_10793=((_n_r_10790*this->_n_cols_10711)+_n_c_10792);
double _n_v_10794=d::at(this->_n_ink_10716,_n_k_10793);
(void)((_n_s_10791=(d::string(_n_s_10791)+d::string((d::truth((_n_v_10794>0.5))?d::fromCharCode({d::at(this->_n_dir_10717,_n_k_10793)}):(d::truth((_n_v_10794>0.27))?d::String(u"·"):(d::truth((_n_v_10794>0.14))?d::String(u"."):d::String(u" "))))))));
}}
(void)(_n_lines_10789.push(_n_s_10791));
}}
return d::join(_n_lines_10789,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("flow-field").cols)*ascii::catalog_meta("flow-field").rows);auto _env=std::make_shared<_n_Record_10795>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &flow_field_meta(){return catalog_meta("flow-field");}
std::unique_ptr<Piece> make_flow_field(const AsciiPieceOptions &o){return std::make_unique<Native_flow_field>(o);}
}
