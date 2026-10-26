// Direct, statically typed C++ from src/pieces/flow-field.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10695;
struct _n_Record_10718;
struct _n_Record_10794;
struct _n_Record_10695{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_10695> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10695>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_10718{
double _p_x{};
double _p_y{};
double _p_o{};
static std::shared_ptr<_n_Record_10718> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10718>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_o=d::decode<double>(j["o"]);return out;}
};
struct _n_Record_10794{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10794> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10794>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_10707(double _a0);
double _n_hash_10708(double _a0,double _a1,double _a2);
double _n_noise_10709(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_10695> _n_meta_10694=[](){return ([&](){auto _n_object_10797=std::make_shared<_n_Record_10695>();_n_object_10797->_p_name=d::String(u"flow field");_n_object_10797->_p_category=d::String(u"generative");_n_object_10797->_p_note=d::String(u"particle trails gathering into winding, merging streams");_n_object_10797->_p_cols=64.0;_n_object_10797->_p_rows=22.0;_n_object_10797->_p_fps=20.0;return _n_object_10797;})();}();
const double _n_STREAMS_10696=[](){return 4.0;}();
const double _n_RATE_10697=[](){return 16.0;}();
const double _n_SPEED_10698=[](){return 9.0;}();
const double _n_FADE_10699=[](){return 1.6;}();
const double _n_BEND_10700=[](){return 12.0;}();
const double _n_SCALE_10701=[](){return 0.085;}();
const double _n_PULL_10702=[](){return 0.22;}();
const double _n_REACH_10703=[](){return 7.0;}();
const double _n_DRIFT_10704=[](){return 0.04;}();
const double _n_TURN_10705=[](){return 1.2;}();
const double _n_WARM_10706=[](){return 9.0;}();
std::function<double()> _n_mulberry32_10707(double _a0){double _n_a_10730=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_10730=double(d::i32((_n_a_10730+1831565813.0))|d::i32(0.0))));
double _n_t_10731=d::imul(double(d::i32(_n_a_10730)^d::i32(double(d::u32(_n_a_10730)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_10730)));
(void)((_n_t_10731=double(d::i32((_n_t_10731+d::imul(double(d::i32(_n_t_10731)^d::i32(double(d::u32(_n_t_10731)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_10731)))))^d::i32(_n_t_10731))));
return (double(d::u32(double(d::i32(_n_t_10731)^d::i32(double(d::u32(_n_t_10731)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_hash_10708(double _a0,double _a1,double _a2){double _n_i_10732=_a0;
double _n_j_10733=_a1;
double _n_k_10734=_a2;
{
double _n_h_10735=([&](){auto _n_left_10798=([&](){auto _n_left_10800=d::imul(_n_i_10732,668265261.0);auto _n_right_10801=d::imul(_n_j_10733,374761393.0);return double(d::i32(_n_left_10800)^d::i32(_n_right_10801));})();auto _n_right_10799=d::imul(_n_k_10734,2654435761.0);return double(d::i32(_n_left_10798)^d::i32(_n_right_10799));})();
(void)((_n_h_10735=d::imul(double(d::i32(_n_h_10735)^d::i32(double(d::u32(_n_h_10735)>>(d::u32(15.0)&31)))),2246822519.0)));
return (double(d::u32(double(d::i32(_n_h_10735)^d::i32(double(d::u32(_n_h_10735)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_10709(double _a0,double _a1,double _a2){double _n_x_10736=_a0;
double _n_z_10737=_a1;
double _n_k_10738=_a2;
{
double _n_i_10739=std::floor(_n_x_10736);
double _n_j_10740=std::floor(_n_z_10737);
auto _n_s_10741=[&]( double _a0) mutable ->double{double _n_f_10742=_a0;
return (((_n_f_10742*_n_f_10742)*_n_f_10742)*((_n_f_10742*((_n_f_10742*6.0)-15.0))+10.0));};
double _n_u_10743=_n_s_10741((_n_x_10736-_n_i_10739));
double _n_v_10744=_n_s_10741((_n_z_10737-_n_j_10740));
double _n_a_10745=([&](){auto _n_left_10802=_n_hash_10708(_n_i_10739,_n_j_10740,_n_k_10738);auto _n_right_10803=(([&](){auto _n_left_10804=_n_hash_10708((_n_i_10739+1.0),_n_j_10740,_n_k_10738);auto _n_right_10805=_n_hash_10708(_n_i_10739,_n_j_10740,_n_k_10738);return (_n_left_10804-_n_right_10805);})()*_n_u_10743);return (_n_left_10802+_n_right_10803);})();
double _n_b_10746=([&](){auto _n_left_10806=_n_hash_10708(_n_i_10739,(_n_j_10740+1.0),_n_k_10738);auto _n_right_10807=(([&](){auto _n_left_10808=_n_hash_10708((_n_i_10739+1.0),(_n_j_10740+1.0),_n_k_10738);auto _n_right_10809=_n_hash_10708(_n_i_10739,(_n_j_10740+1.0),_n_k_10738);return (_n_left_10808-_n_right_10809);})()*_n_u_10743);return (_n_left_10806+_n_right_10807);})();
return (_n_a_10745+((_n_b_10746-_n_a_10745)*_n_v_10744));

}
}

struct Native_flow_field final:ascii::Piece{
double _n_cols_10710{};
double _n_rows_10711{};
double _n_W_10712{};
double _n_H_10713{};
std::function<double()> _n_rand_10714{};
d::Array<float,true> _n_ink_10715{};
d::Array<uint8_t,true> _n_dir_10716{};
d::Array<std::shared_ptr<_n_Record_10718>,false> _n_ps_10717{};
d::Array<float,true> _n_ys_10719{};
d::Array<float,true> _n_ss_10720{};
double _n_STEEP_10723{};
double _n_clock_10726{};
double _n_due_10727{};
double _n_last_10729{};
std::function<d::String(double,std::shared_ptr<_n_Record_10794>)> _render;
void _n_currents_10721(double _a0,double _a1){double _n_x_10747=_a0;
double _n_z_10748=_a1;
{
{double _n_k_10749=0.0;
for(;d::truth((_n_k_10749<_n_STREAMS_10696));(void)((_n_k_10749++))){d::check_cancel();auto _n_at_10750=[&]( double _a0) mutable ->double{double _n_xx_10751=_a0;
{
double _n_y_10752=(((((_n_k_10749+0.5)/_n_STREAMS_10696)-0.5)*this->_n_H_10713)+(_n_BEND_10700*((2.0*_n_noise_10709(((_n_xx_10751*_n_SCALE_10701)+(_n_k_10749*7.3)),(_n_z_10748+(_n_k_10749*3.1)),_n_k_10749))-1.0)));
return ((this->_n_H_10713/2.0)+(((this->_n_H_10713/2.0)-3.0)*std::tanh((_n_y_10752/((this->_n_H_10713/2.0)-3.0)))));

}
};
(void)(([&](){auto&& _n_array_10813=this->_n_ys_10719;auto _n_index_10814=_n_k_10749;auto _n_value_10815=_n_at_10750(_n_x_10747);d::put(_n_array_10813,_n_index_10814,_n_value_10815);return _n_value_10815;})());
(void)(([&](){auto&& _n_array_10816=this->_n_ss_10720;auto _n_index_10817=_n_k_10749;auto _n_value_10818=([&](){auto _n_left_10819=_n_at_10750((_n_x_10747+0.5));auto _n_right_10820=_n_at_10750((_n_x_10747-0.5));return (_n_left_10819-_n_right_10820);})();d::put(_n_array_10816,_n_index_10817,_n_value_10818);return _n_value_10818;})());
}}

}
}

double _n_heading_10722(double _a0,double _a1,double _a2,double _a3){double _n_x_10753=_a0;
double _n_y_10754=_a1;
double _n_o_10755=_a2;
double _n_z_10756=_a3;
{
(void)(this->_n_currents_10721(_n_x_10753,_n_z_10756));
double _n_num_10757=0.0;
double _n_den_10758=1e-9;
double _n_best_10759=0.0;
double _n_near_10760=1000000000.0;
{double _n_k_10761=0.0;
for(;d::truth((_n_k_10761<_n_STREAMS_10696));(void)((_n_k_10761++))){d::check_cancel();double _n_d_10762=((d::at(this->_n_ys_10719,_n_k_10761)+_n_o_10755)-_n_y_10754);
double _n_w_10763=std::exp((-d::number(std::pow((_n_d_10762/_n_REACH_10703),2.0))));
(void)((_n_num_10757=(_n_num_10757+(_n_w_10763*(d::at(this->_n_ss_10720,_n_k_10761)+(_n_PULL_10702*_n_d_10762))))));
(void)((_n_den_10758=(_n_den_10758+_n_w_10763)));
if(d::truth((std::fabs(_n_d_10762)<_n_near_10760))){d::check_cancel();(void)(((_n_near_10760=std::fabs(_n_d_10762)),(_n_best_10759=(d::at(this->_n_ss_10720,_n_k_10761)+(_n_PULL_10702*_n_d_10762)))));
}
}}
double _n_slope_10764=(d::truth((_n_den_10758>0.0001))?(_n_num_10757/_n_den_10758):_n_best_10759);
return ([&](){auto _n_argument_10821=(-d::number(_n_TURN_10705));auto _n_argument_10822=([&](){auto _n_argument_10823=_n_TURN_10705;auto _n_argument_10824=std::atan(_n_slope_10764);return d::minimum({_n_argument_10823,_n_argument_10824});})();return d::maximum({_n_argument_10821,_n_argument_10822});})();

}
}

d::String _n_glyph_10724(double _a0){double _n_a_10765=_a0;
{
double _n_tilt_10766=std::fabs(_n_a_10765);
if(d::truth((_n_tilt_10766<(this->_n_STEEP_10723/2.0)))){d::check_cancel();return d::String(u"-");
}
if(d::truth((_n_tilt_10766>(((ascii::PI/2.0)+this->_n_STEEP_10723)/2.0)))){d::check_cancel();return d::String(u"|");
}
return (d::truth((_n_a_10765>0.0))?d::String(u"\\"):d::String(u"/"));

}
}

void _n_mark_10725(double _a0,double _a1,double _a2){double _n_x_10767=_a0;
double _n_y_10768=_a1;
double _n_a_10769=_a2;
{
double _n_c_10770=std::floor(_n_x_10767);
double _n_r_10771=std::floor((_n_y_10768/2.0));
if((((d::truth((_n_c_10770<0.0))||d::truth((_n_c_10770>=this->_n_cols_10710)))||d::truth((_n_r_10771<0.0)))||d::truth((_n_r_10771>=this->_n_rows_10711)))){d::check_cancel();return;
}
double _n_k_10772=((_n_r_10771*this->_n_cols_10710)+_n_c_10770);
(void)(([&](){auto&& _n_array_10825=this->_n_ink_10715;auto _n_index_10826=_n_k_10772;auto _n_value_10827=1.0;d::put(_n_array_10825,_n_index_10826,_n_value_10827);return _n_value_10827;})());
(void)(([&](){auto&& _n_array_10828=this->_n_dir_10716;auto _n_index_10829=_n_k_10772;auto _n_value_10830=d::charCodeAt(this->_n_glyph_10724(_n_a_10769),0.0);d::put(_n_array_10828,_n_index_10829,_n_value_10830);return _n_value_10830;})());

}
}

void _n_step_10728(double _a0){double _n_dt_10773=_a0;
{
(void)((this->_n_clock_10726=(this->_n_clock_10726+_n_dt_10773)));
double _n_keep_10774=std::exp(((-d::number(_n_dt_10773))/_n_FADE_10699));
{double _n_k_10775=0.0;
for(;d::truth((_n_k_10775<double(this->_n_ink_10715.size())));(void)((_n_k_10775++))){d::check_cancel();(void)(([&](){auto&& _n_array_10831=this->_n_ink_10715;auto _n_index_10832=_n_k_10775;auto _n_value_10833=(d::at(_n_array_10831,_n_index_10832)*_n_keep_10774);d::put(_n_array_10831,_n_index_10832,_n_value_10833);return _n_value_10833;})());
}}
double _n_z_10776=(this->_n_clock_10726*_n_DRIFT_10704);
{(void)((this->_n_due_10727=(this->_n_due_10727-_n_dt_10773)));for(;d::truth((this->_n_due_10727<=0.0));(void)((this->_n_due_10727=(this->_n_due_10727+(1.0/_n_RATE_10697))))){d::check_cancel();(void)(this->_n_currents_10721(0.0,_n_z_10776));
double _n_y_10777=(d::truth((this->_n_rand_10714()<0.75))?([&](){auto _n_left_10834=d::at(this->_n_ys_10719,std::floor((this->_n_rand_10714()*_n_STREAMS_10696)));auto _n_right_10835=((this->_n_rand_10714()-0.5)*8.0);return (_n_left_10834+_n_right_10835);})():(2.0+(this->_n_rand_10714()*(this->_n_H_10713-4.0))));
(void)(this->_n_ps_10717.push(([&](){auto _n_object_10837=std::make_shared<_n_Record_10718>();_n_object_10837->_p_x=0.0;_n_object_10837->_p_y=_n_y_10777;_n_object_10837->_p_o=((this->_n_rand_10714()-0.5)*3.2);return _n_object_10837;})()));
}}
{double _n_i_10778=(double(this->_n_ps_10717.size())-1.0);
for(;d::truth((_n_i_10778>=0.0));(void)((_n_i_10778--))){d::check_cancel();std::shared_ptr<_n_Record_10718> _n_p_10779=d::at(this->_n_ps_10717,_n_i_10778);
double _n_a_10780=this->_n_heading_10722(_n_p_10779->_p_x,_n_p_10779->_p_y,_n_p_10779->_p_o,_n_z_10776);
double _n_dx_10781=((std::cos(_n_a_10780)*_n_SPEED_10698)*_n_dt_10773);
double _n_dy_10782=((std::sin(_n_a_10780)*_n_SPEED_10698)*_n_dt_10773);
double _n_n_10783=([&](){auto _n_argument_10838=1.0;auto _n_argument_10839=std::ceil((d::hypot(std::initializer_list<double>{_n_dx_10781,(_n_dy_10782*0.5)})*1.5));return d::maximum({_n_argument_10838,_n_argument_10839});})();
{double _n_s_10784=1.0;
for(;d::truth((_n_s_10784<=_n_n_10783));(void)((_n_s_10784++))){d::check_cancel();(void)(this->_n_mark_10725((_n_p_10779->_p_x+((_n_dx_10781*_n_s_10784)/_n_n_10783)),(_n_p_10779->_p_y+((_n_dy_10782*_n_s_10784)/_n_n_10783)),_n_a_10780));
}}
(void)((_n_p_10779->_p_x=(_n_p_10779->_p_x+_n_dx_10781)));
(void)((_n_p_10779->_p_y=(_n_p_10779->_p_y+_n_dy_10782)));
if(((d::truth((_n_p_10779->_p_x>=this->_n_W_10712))||d::truth((_n_p_10779->_p_y<0.0)))||d::truth((_n_p_10779->_p_y>=this->_n_H_10713)))){d::check_cancel();(void)(this->_n_ps_10717.splice(_n_i_10778,1.0));
}
}}

}
}

explicit Native_flow_field(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10810=_n_meta_10694;
this->_n_cols_10710=_n_binding_10810->_p_cols;
this->_n_rows_10711=_n_binding_10810->_p_rows;
this->_n_W_10712=this->_n_cols_10710;
this->_n_H_10713=(this->_n_rows_10711*2.0);
this->_n_rand_10714=_n_mulberry32_10707(24301.0);
this->_n_ink_10715=d::Array<float,true>(size_t((this->_n_cols_10710*this->_n_rows_10711)));
this->_n_dir_10716=d::Array<uint8_t,true>(size_t((this->_n_cols_10710*this->_n_rows_10711)));
this->_n_ps_10717=d::Array<std::shared_ptr<_n_Record_10718>,false>{};
this->_n_ys_10719=d::Array<float,true>(size_t(_n_STREAMS_10696));
this->_n_ss_10720=d::Array<float,true>(size_t(_n_STREAMS_10696));
this->_n_STEEP_10723=std::atan(2.0);
this->_n_clock_10726=0.0;
this->_n_due_10727=0.0;
{double _n_i_10785=0.0;
for(;d::truth((_n_i_10785<(_n_WARM_10706*_n_meta_10694->_p_fps)));(void)((_n_i_10785++))){d::check_cancel();(void)(this->_n_step_10728((1.0/_n_meta_10694->_p_fps)));
}}
this->_n_last_10729=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_10794> _a1) mutable ->d::String{double _n_t_10786=_a0;
{
double _n_dt_10787=([&](){auto _n_argument_10811=0.1;auto _n_argument_10812=d::maximum({0.0,(_n_t_10786-this->_n_last_10729)});return d::minimum({_n_argument_10811,_n_argument_10812});})();
(void)((this->_n_last_10729=_n_t_10786));
if(d::truth((_n_dt_10787>0.0))){d::check_cancel();(void)(this->_n_step_10728(_n_dt_10787));
}
d::Array<d::String,false> _n_lines_10788=d::Array<d::String,false>{};
{double _n_r_10789=0.0;
for(;d::truth((_n_r_10789<this->_n_rows_10711));(void)((_n_r_10789++))){d::check_cancel();d::String _n_s_10790=d::String(u"");
{double _n_c_10791=0.0;
for(;d::truth((_n_c_10791<this->_n_cols_10710));(void)((_n_c_10791++))){d::check_cancel();double _n_k_10792=((_n_r_10789*this->_n_cols_10710)+_n_c_10791);
double _n_v_10793=d::at(this->_n_ink_10715,_n_k_10792);
(void)((_n_s_10790=(d::string(_n_s_10790)+d::string((d::truth((_n_v_10793>0.5))?d::fromCharCode({d::at(this->_n_dir_10716,_n_k_10792)}):(d::truth((_n_v_10793>0.27))?d::String(u"·"):(d::truth((_n_v_10793>0.14))?d::String(u"."):d::String(u" "))))))));
}}
(void)(_n_lines_10788.push(_n_s_10790));
}}
return d::join(_n_lines_10788,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("flow-field").cols)*ascii::catalog_meta("flow-field").rows);auto _env=std::make_shared<_n_Record_10794>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &flow_field_meta(){return catalog_meta("flow-field");}
std::unique_ptr<Piece> make_flow_field(const AsciiPieceOptions &o){return std::make_unique<Native_flow_field>(o);}
}
