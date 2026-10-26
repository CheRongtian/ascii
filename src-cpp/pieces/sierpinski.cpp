// Direct, statically typed C++ from src/pieces/sierpinski.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_27929;
struct _n_Record_28007;
struct _n_Record_27929{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_27929> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27929>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_28007{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28007> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28007>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_27940(double _a0);
std::shared_ptr<_n_Record_27929> _n_meta_27928=[](){return ([&](){auto _n_object_28010=std::make_shared<_n_Record_27929>();_n_object_28010->_p_name=d::String(u"sierpinski");_n_object_28010->_p_category=d::String(u"generative");_n_object_28010->_p_note=d::String(u"the chaos game filling a sierpinski triangle point by point");_n_object_28010->_p_cols=59.0;_n_object_28010->_p_rows=26.0;_n_object_28010->_p_fps=20.0;return _n_object_28010;})();}();
const d::String _n_QUAD_27930=[](){return d::String(u" ▘▝▀▖▌▞▛▗▚▐▜▄▙▟█");}();
const double _n_CYCLE_27931=[](){return 9.6;}();
const double _n_FILL_27932=[](){return 6.0;}();
const double _n_HOLD_27933=[](){return 7.3;}();
const double _n_CLEAR_27934=[](){return 9.3;}();
const double _n_START_27935=[](){return 6.1;}();
const double _n_POINTS_27936=[](){return 12000.0;}();
const double _n_RATE_27937=[](){return 1.0;}();
const double _n_STEADY_27938=[](){return 60.0;}();
const double _n_DEPTH_27939=[](){return 7.0;}();
std::function<double()> _n_mulberry32_27940(double _a0){double _n_seed_27956=_a0;
{
double _n_s_27957=double(d::i32(_n_seed_27956)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_27957=double(d::i32((_n_s_27957+1831565813.0))|d::i32(0.0))));
double _n_t_27958=d::imul(double(d::i32(_n_s_27957)^d::i32(double(d::u32(_n_s_27957)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_27957)));
(void)((_n_t_27958=double(d::i32((_n_t_27958+d::imul(double(d::i32(_n_t_27958)^d::i32(double(d::u32(_n_t_27958)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_27958)))))^d::i32(_n_t_27958))));
return (double(d::u32(double(d::i32(_n_t_27958)^d::i32(double(d::u32(_n_t_27958)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_sierpinski final:ascii::Piece{
double _n_cols_27941{};
double _n_rows_27942{};
double _n_W_27943{};
double _n_H_27944{};
double _n_top_27945{};
double _n_base_27946{};
double _n_half_27947{};
d::Array<d::Array<double,false>,false> _n_corners_27948{};
d::Array<float,true> _n_rank_27950{};
d::Array<int32_t,true> _n_first_27951{};
double _n_cycle_27952{};
double _n_scale_27954{};
d::Array<double,false> _n_marks_27955{};
std::function<d::String(double,std::shared_ptr<_n_Record_28007>)> _render;
double _n_place_27949(double _a0,double _a1){double _n_x_27959=_a0;
double _n_y_27960=_a1;
{
double _n_v_27961=((_n_y_27960-this->_n_top_27945)/(this->_n_base_27946-this->_n_top_27945));
double _n_s_27962=((_n_x_27959-this->_n_cols_27941)/this->_n_half_27947);
d::Array<double,false> _n_w_27963=d::Array<double,false>{(1.0-_n_v_27961),((_n_v_27961-_n_s_27962)/2.0),((_n_v_27961+_n_s_27962)/2.0)};
if(((d::truth((d::at(_n_w_27963,0.0)<0.0))||d::truth((d::at(_n_w_27963,1.0)<0.0)))||d::truth((d::at(_n_w_27963,2.0)<0.0)))){d::check_cancel();return (-d::number(1.0));
}
d::Array<double,false> _n_p_27964=d::Array<double,false>{1.0,0.0,2.0};
double _n_at_27965=0.0;
double _n_step_27966=1.0;
{double _n_l_27967=0.0;
for(;d::truth((_n_l_27967<_n_DEPTH_27939));(void)((_n_l_27967++))){d::check_cancel();double _n_k_27968=d::findIndex(_n_w_27963,[&]( double _a0) mutable ->bool{double _n_x_27969=_a0;
return (_n_x_27969>=0.5);});
if(d::truth((_n_k_27968<0.0))){d::check_cancel();return (-d::number(1.0));
}
{double _n_j_27970=0.0;
for(;d::truth((_n_j_27970<3.0));(void)((_n_j_27970++))){d::check_cancel();(void)(([&](){auto&& _n_array_28026=_n_w_27963;auto _n_index_28027=_n_j_27970;auto _n_value_28028=(d::truth((_n_j_27970==_n_k_27968))?((2.0*d::at(_n_w_27963,_n_j_27970))-1.0):(2.0*d::at(_n_w_27963,_n_j_27970)));d::put(_n_array_28026,_n_index_28027,_n_value_28028);return _n_value_28028;})());
}}
double _n_i_27971=_n_p_27964.indexOf(_n_k_27968);
(void)((_n_at_27965=(_n_at_27965+(_n_i_27971*(_n_step_27966=(_n_step_27966/3.0))))));
(void)((_n_p_27964=(d::truth((_n_i_27971==0.0))?d::Array<double,false>{d::at(_n_p_27964,0.0),d::at(_n_p_27964,2.0),d::at(_n_p_27964,1.0)}:(d::truth((_n_i_27971==2.0))?d::Array<double,false>{d::at(_n_p_27964,1.0),d::at(_n_p_27964,0.0),d::at(_n_p_27964,2.0)}:_n_p_27964))));
}}
return _n_at_27965;

}
}

void _n_build_27953(double _a0){double _n_k_27978=_a0;
{
std::function<double()> _n_rand_27979=_n_mulberry32_27940(((_n_k_27978*977.0)+31.0));
(void)(this->_n_first_27951.fill((_n_POINTS_27936-1.0)));
auto _n_binding_28029=d::at(this->_n_corners_27948,double(d::i32((_n_rand_27979()*3.0))|d::i32(0.0)));
double _n_x_27980=d::at(_n_binding_28029,0.0);
double _n_y_27981=d::at(_n_binding_28029,1.0);
{double _n_n_27982=0.0;
for(;d::truth((_n_n_27982<_n_POINTS_27936));(void)((_n_n_27982++))){d::check_cancel();auto _n_binding_28030=d::at(this->_n_corners_27948,double(d::i32((_n_rand_27979()*3.0))|d::i32(0.0)));
double _n_cx_27983=d::at(_n_binding_28030,0.0);
double _n_cy_27984=d::at(_n_binding_28030,1.0);
(void)((_n_x_27980=((_n_x_27980+_n_cx_27983)/2.0)));
(void)((_n_y_27981=((_n_y_27981+_n_cy_27984)/2.0)));
double _n_at_27985=([&](){auto _n_left_28031=std::floor(_n_x_27980);auto _n_right_28032=(std::floor(_n_y_27981)*this->_n_W_27943);return (_n_left_28031+_n_right_28032);})();
if(d::truth((d::at(this->_n_first_27951,_n_at_27985)>_n_n_27982))){d::check_cancel();(void)(([&](){auto&& _n_array_28033=this->_n_first_27951;auto _n_index_28034=_n_at_27985;auto _n_value_28035=_n_n_27982;d::put(_n_array_28033,_n_index_28034,_n_value_28035);return _n_value_28035;})());
}
}}

}
}

explicit Native_sierpinski(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_28011=_n_meta_27928;
this->_n_cols_27941=_n_binding_28011->_p_cols;
this->_n_rows_27942=_n_binding_28011->_p_rows;
this->_n_W_27943=(this->_n_cols_27941*2.0);
this->_n_H_27944=(this->_n_rows_27942*2.0);
this->_n_top_27945=2.0;
this->_n_base_27946=(this->_n_H_27944-2.0);
this->_n_half_27947=((this->_n_base_27946-this->_n_top_27945)/std::sin((ascii::PI/3.0)));
this->_n_corners_27948=d::Array<d::Array<double,false>,false>{d::Array<double,false>{this->_n_cols_27941,this->_n_top_27945},d::Array<double,false>{(this->_n_cols_27941-this->_n_half_27947),this->_n_base_27946},d::Array<double,false>{(this->_n_cols_27941+this->_n_half_27947),this->_n_base_27946}};
this->_n_rank_27950=d::Array<float,true>(size_t((this->_n_W_27943*this->_n_H_27944))).fill((-d::number(1.0)));
{double _n_qy_27972=0.0;
for(;d::truth((_n_qy_27972<this->_n_H_27944));(void)((_n_qy_27972++))){d::check_cancel();{double _n_qx_27973=0.0;
for(;d::truth((_n_qx_27973<this->_n_W_27943));(void)((_n_qx_27973++))){d::check_cancel();double _n_n_27974=0.0;
double _n_first_27975=2.0;
{double _n_i_27976=0.0;
for(;d::truth((_n_i_27976<16.0));(void)((_n_i_27976++))){d::check_cancel();double _n_at_27977=this->_n_place_27949((_n_qx_27973+((double(d::i32(_n_i_27976)&d::i32(3.0))+0.5)/4.0)),(_n_qy_27972+((double(d::i32(_n_i_27976)>>(d::u32(2.0)&31))+0.5)/4.0)));
if(d::truth((_n_at_27977>=0.0))){d::check_cancel();(void)(((_n_n_27974++),(_n_first_27975=d::minimum({_n_first_27975,_n_at_27977}))));
}
}}
if(d::truth((_n_n_27974>=2.0))){d::check_cancel();(void)(([&](){auto&& _n_array_28012=this->_n_rank_27950;auto _n_index_28013=(_n_qx_27973+(_n_qy_27972*this->_n_W_27943));auto _n_value_28014=_n_first_27975;d::put(_n_array_28012,_n_index_28013,_n_value_28014);return _n_value_28014;})());
}
}}
}}
this->_n_first_27951=d::Array<int32_t,true>(size_t((this->_n_W_27943*this->_n_H_27944)));
this->_n_cycle_27952=(-d::number(1.0));
this->_n_scale_27954=((_n_POINTS_27936-(_n_STEADY_27938*_n_FILL_27932))/(std::exp((_n_RATE_27937*_n_FILL_27932))-1.0));
this->_n_marks_27955=d::map(this->_n_corners_27948,[&]( d::Array<double,false> _a0,double _a1) mutable ->double{auto _n_binding_28015=_a0;
double _n_x_27986=d::at(_n_binding_28015,0.0);
double _n_y_27987=d::at(_n_binding_28015,1.0);
double _n_i_27988=_a1;
return ([&](){auto _n_left_28016=std::floor(((_n_x_27986+d::at(d::Array<double,false>{0.0,1.0,(-d::number(1.0))},_n_i_27988))/2.0));auto _n_right_28017=(std::floor(((_n_y_27987+(d::truth(_n_i_27988)?(-d::number(1.0)):1.0))/2.0))*this->_n_cols_27941);return (_n_left_28016+_n_right_28017);})();});
_render=[=]( double _a0,std::shared_ptr<_n_Record_28007> _a1) mutable ->d::String{double _n_t_27989=_a0;
{
double _n_u_27990=(_n_t_27989+_n_START_27935);
double _n_k_27991=std::floor((_n_u_27990/_n_CYCLE_27931));
if(d::truth((_n_k_27991!=this->_n_cycle_27952))){d::check_cancel();(void)(this->_n_build_27953((this->_n_cycle_27952=_n_k_27991)));
}
double _n_tau_27992=(_n_u_27990-(_n_k_27991*_n_CYCLE_27931));
double _n_shown_27993=(d::truth((_n_tau_27992>=_n_FILL_27932))?_n_POINTS_27936:std::floor(((_n_STEADY_27938*_n_tau_27992)+(this->_n_scale_27954*(std::exp((_n_RATE_27937*_n_tau_27992))-1.0)))));
double _n_gone_27994=(d::truth((_n_tau_27992<=_n_HOLD_27933))?0.0:((_n_tau_27992-_n_HOLD_27933)/(_n_CLEAR_27934-_n_HOLD_27933)));
auto _n_on_27995=[&]( double _a0,double _a1) mutable ->double{double _n_qx_27996=_a0;
double _n_qy_27997=_a1;
{
double _n_at_27998=(_n_qx_27996+(_n_qy_27997*this->_n_W_27943));
return d::number(([&]()->bool{auto _n_logical_28018=(d::at(this->_n_rank_27950,_n_at_27998)>=_n_gone_27994);return d::truth(_n_logical_28018)?(d::at(this->_n_first_27951,_n_at_27998)<_n_shown_27993):_n_logical_28018;})());

}
};
bool _n_marked_27999=([&]()->bool{auto _n_logical_28019=(_n_tau_27992<_n_FILL_27932);return d::truth(_n_logical_28019)?_n_logical_28019:(_n_tau_27992>=_n_CLEAR_27934);})();
d::Array<d::String,false> _n_lines_28000=d::Array<d::String,false>{};
{double _n_r_28001=0.0;
for(;d::truth((_n_r_28001<this->_n_rows_27942));(void)((_n_r_28001++))){d::check_cancel();d::String _n_line_28002=d::String(u"");
{double _n_c_28003=0.0;
for(;d::truth((_n_c_28003<this->_n_cols_27941));(void)((_n_c_28003++))){d::check_cancel();double _n_qx_28004=(_n_c_28003*2.0);
double _n_qy_28005=(_n_r_28001*2.0);
double _n_m_28006=([&](){auto _n_left_28020=([&](){auto _n_left_28022=([&](){auto _n_left_28024=_n_on_27995(_n_qx_28004,_n_qy_28005);auto _n_right_28025=double(int32_t(d::u32(_n_on_27995((_n_qx_28004+1.0),_n_qy_28005))<<(d::u32(1.0)&31)));return double(d::i32(_n_left_28024)|d::i32(_n_right_28025));})();auto _n_right_28023=double(int32_t(d::u32(_n_on_27995(_n_qx_28004,(_n_qy_28005+1.0)))<<(d::u32(2.0)&31)));return double(d::i32(_n_left_28022)|d::i32(_n_right_28023));})();auto _n_right_28021=double(int32_t(d::u32(_n_on_27995((_n_qx_28004+1.0),(_n_qy_28005+1.0)))<<(d::u32(3.0)&31)));return double(d::i32(_n_left_28020)|d::i32(_n_right_28021));})();
(void)((_n_line_28002=(d::string(_n_line_28002)+d::string((d::truth(_n_m_28006)?d::at(_n_QUAD_27930,_n_m_28006):((d::truth(_n_marked_27999)&&d::truth(this->_n_marks_27955.includes((_n_c_28003+(_n_r_28001*this->_n_cols_27941)))))?d::String(u"·"):d::String(u" ")))))));
}}
(void)(_n_lines_28000.push(_n_line_28002));
}}
return d::join(_n_lines_28000,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sierpinski").cols)*ascii::catalog_meta("sierpinski").rows);auto _env=std::make_shared<_n_Record_28007>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sierpinski_meta(){return catalog_meta("sierpinski");}
std::unique_ptr<Piece> make_sierpinski(const AsciiPieceOptions &o){return std::make_unique<Native_sierpinski>(o);}
}
