// Direct, statically typed C++ from src/pieces/jellyfish.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_14832;
struct _n_Record_14841;
struct _n_Record_14847;
struct _n_Record_14877;
struct _n_Record_14954;
struct _n_Record_14832{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_14832> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14832>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_14841{
double _p_c{};
double _p_x{};
double _p_y{};
double _p_half{};
static std::shared_ptr<_n_Record_14841> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14841>();out->_p_c=d::decode<double>(j["c"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_half=d::decode<double>(j["half"]);return out;}
};
struct _n_Record_14847{
double _p_x{};
double _p_y{};
double _p_z{};
double _p_w{};
static std::shared_ptr<_n_Record_14847> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14847>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_z=d::decode<double>(j["z"]);out->_p_w=d::decode<double>(j["w"]);return out;}
};
struct _n_Record_14877{
double _p_x{};
double _p_y{};
double _p_half{};
static std::shared_ptr<_n_Record_14877> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14877>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_half=d::decode<double>(j["half"]);return out;}
};
struct _n_Record_14954{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14954> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14954>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_ease_14836(double _a0);
double _n_phase_14837(double _a0);
double _n_squeeze_14838(double _a0);
double _n_lift_14839(double _a0);
std::shared_ptr<_n_Record_14841> _n_rimAt_14840(double _a0);
std::shared_ptr<_n_Record_14832> _n_meta_14831=[](){return ([&](){auto _n_object_14957=std::make_shared<_n_Record_14832>();_n_object_14957->_p_name=d::String(u"jellyfish");_n_object_14957->_p_category=d::String(u"creatures");_n_object_14957->_p_note=d::String(u"a jellyfish pulsing upward, its tentacles trailing late");_n_object_14957->_p_cols=44.0;_n_object_14957->_p_rows=26.0;_n_object_14957->_p_fps=24.0;return _n_object_14957;})();}();
const d::String _n_RAMP_14833=[](){return d::String(u" .::=+*#%@");}();
const double _n_P_14834=[](){return 2.2;}();
const double _n_SQ_14835=[](){return 0.28;}();
double _n_ease_14836(double _a0){double _n_x_14851=_a0;
return ((_n_x_14851*_n_x_14851)*(3.0-(2.0*_n_x_14851)));}

double _n_phase_14837(double _a0){double _n_t_14852=_a0;
return (d::mod((d::mod(_n_t_14852,_n_P_14834)+_n_P_14834),_n_P_14834)/_n_P_14834);}

double _n_squeeze_14838(double _a0){double _n_t_14853=_a0;
{
double _n_p_14854=_n_phase_14837(_n_t_14853);
return (d::truth((_n_p_14854<_n_SQ_14835))?_n_ease_14836((_n_p_14854/_n_SQ_14835)):(1.0-_n_ease_14836(((_n_p_14854-_n_SQ_14835)/(1.0-_n_SQ_14835)))));

}
}

double _n_lift_14839(double _a0){double _n_t_14855=_a0;
{
double _n_p_14856=_n_phase_14837(_n_t_14855);
return (d::truth((_n_p_14856<0.4))?_n_ease_14836((_n_p_14856/0.4)):(1.0-_n_ease_14836(((_n_p_14856-0.4)/0.6))));

}
}

std::shared_ptr<_n_Record_14841> _n_rimAt_14840(double _a0){double _n_t_14857=_a0;
{
double _n_c_14858=_n_squeeze_14838(_n_t_14857);
double _n_x_14859=((_n_meta_14831->_p_cols/2.0)+(1.5*std::sin((((2.0*ascii::PI)*_n_t_14857)/(5.0*_n_P_14834)))));
return ([&](){auto _n_object_14959=std::make_shared<_n_Record_14841>();_n_object_14959->_p_c=_n_c_14858;_n_object_14959->_p_x=_n_x_14859;_n_object_14959->_p_y=((11.0-(0.8*_n_c_14858))-(1.4*_n_lift_14839(_n_t_14857)));_n_object_14959->_p_half=((13.0-(2.6*_n_c_14858))*(1.0-(0.3*_n_c_14858)));return _n_object_14959;})();

}
}

struct Native_jellyfish final:ascii::Piece{
double _n_cols_14842{};
double _n_rows_14843{};
double _n_seed_14844{};
d::Array<std::shared_ptr<_n_Record_14847>,false> _n_specks_14846{};
d::Array<d::String,false> _n_grid_14848{};
std::function<d::String(double,std::shared_ptr<_n_Record_14954>)> _render;
double _n_rnd_14845(){{
(void)((this->_n_seed_14844=double(d::i32((this->_n_seed_14844+1831565813.0))|d::i32(0.0))));
double _n_z_14860=d::imul(double(d::i32(this->_n_seed_14844)^d::i32(double(d::u32(this->_n_seed_14844)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(this->_n_seed_14844)));
(void)((_n_z_14860=double(d::i32((_n_z_14860+d::imul(double(d::i32(_n_z_14860)^d::i32(double(d::u32(_n_z_14860)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_z_14860)))))^d::i32(_n_z_14860))));
return (double(d::u32(double(d::i32(_n_z_14860)^d::i32(double(d::u32(_n_z_14860)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

void _n_put_14849(double _a0,double _a1,d::String _a2){double _n_x_14861=_a0;
double _n_y_14862=_a1;
d::String _n_ch_14863=_a2;
{
(void)((_n_x_14861=d::round(_n_x_14861)));
(void)((_n_y_14862=d::round(_n_y_14862)));
if((((d::truth((_n_x_14861>=0.0))&&d::truth((_n_x_14861<this->_n_cols_14842)))&&d::truth((_n_y_14862>=0.0)))&&d::truth((_n_y_14862<this->_n_rows_14843)))){d::check_cancel();(void)(([&](){auto&& _n_array_15006=this->_n_grid_14848;auto _n_index_15007=((_n_y_14862*this->_n_cols_14842)+_n_x_14861);auto _n_value_15008=_n_ch_14863;d::put(_n_array_15006,_n_index_15007,_n_value_15008);return _n_value_15008;})());
}

}
}

double _n_travel_14850(double _a0){double _n_t_14864=_a0;
{
double _n_k_14865=std::floor((_n_t_14864/_n_P_14834));
double _n_p_14866=_n_phase_14837(_n_t_14864);
return ((0.9*_n_t_14864)+(2.4*(_n_k_14865+(d::truth((_n_p_14866<_n_SQ_14835))?(0.8*_n_ease_14836((_n_p_14866/_n_SQ_14835))):(0.8+((0.2*(_n_p_14866-_n_SQ_14835))/(1.0-_n_SQ_14835)))))));

}
}

explicit Native_jellyfish(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_14960=_n_meta_14831;
this->_n_cols_14842=_n_binding_14960->_p_cols;
this->_n_rows_14843=_n_binding_14960->_p_rows;
this->_n_seed_14844=7.0;
this->_n_specks_14846=d::Array<std::shared_ptr<_n_Record_14847>,false>(d::from(30.0,[&]( ) mutable ->std::shared_ptr<_n_Record_14847>{return ([&](){auto _n_object_14963=std::make_shared<_n_Record_14847>();_n_object_14963->_p_x=(this->_n_rnd_14845()*this->_n_cols_14842);_n_object_14963->_p_y=(this->_n_rnd_14845()*this->_n_rows_14843);_n_object_14963->_p_z=(0.4+(this->_n_rnd_14845()*0.6));_n_object_14963->_p_w=(this->_n_rnd_14845()*6.3);return _n_object_14963;})();}));
this->_n_grid_14848=d::Array<d::String,false>(size_t((this->_n_cols_14842*this->_n_rows_14843)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_14954> _a1) mutable ->d::String{double _n_t_14867=_a0;
{
(void)(this->_n_grid_14848.fill(d::String(u" ")));
double _n_D_14868=this->_n_travel_14850(_n_t_14867);
for(auto &&_n_item_14964:this->_n_specks_14846){d::check_cancel();std::shared_ptr<_n_Record_14847> _n_s_14869=_n_item_14964;
{
double _n_y_14870=std::floor(d::mod((d::mod((_n_s_14869->_p_y+(_n_D_14868*_n_s_14869->_p_z)),this->_n_rows_14843)+this->_n_rows_14843),this->_n_rows_14843));
(void)(([&](){auto _n_argument_14965=(_n_s_14869->_p_x+(0.6*std::sin(((_n_t_14867*0.5)+_n_s_14869->_p_w))));auto _n_argument_14966=_n_y_14870;auto _n_argument_14967=(d::truth((_n_s_14869->_p_z>0.8))?d::String(u"·"):d::String(u"."));return this->_n_put_14849(_n_argument_14965,_n_argument_14966,_n_argument_14967);})());

}
}
std::shared_ptr<_n_Record_14841> _n_now_14871=_n_rimAt_14840(_n_t_14867);
auto _n_binding_14968=_n_now_14871;
double _n_c_14872=_n_binding_14968->_p_c;
double _n_a_14873=(13.0-(2.6*_n_c_14872));
double _n_b_14874=(13.0+(2.0*_n_c_14872));
double _n_rim_14875=std::floor(_n_now_14871->_p_y);
auto _n_trail_14876=[=]( double _a0,double _a1) mutable ->std::shared_ptr<_n_Record_14877>{double _n_d_14878=_a0;
double _n_lagPer_14879=_a1;
{
std::shared_ptr<_n_Record_14841> _n_was_14880=_n_rimAt_14840((_n_t_14867-(_n_d_14878*_n_lagPer_14879)));
return ([&](){auto _n_object_14970=std::make_shared<_n_Record_14877>();_n_object_14970->_p_x=_n_was_14880->_p_x;_n_object_14970->_p_y=((_n_rim_14875+_n_d_14878)+(d::maximum({0.0,(_n_was_14880->_p_y-_n_now_14871->_p_y)})*0.8));_n_object_14970->_p_half=_n_was_14880->_p_half;return _n_object_14970;})();

}
};
double _n_cx_14881=_n_now_14871->_p_x;
auto _n_strand_14882=[&]( double _a0,double _a1,std::function<double(double,std::shared_ptr<_n_Record_14877>)> _a2,std::function<void(double,double,double,double,double,double)> _a3) mutable ->void{double _n_len_14883=_a0;
double _n_lag_14884=_a1;
std::function<double(double,std::shared_ptr<_n_Record_14877>)> _n_xAt_14885=_a2;
std::function<void(double,double,double,double,double,double)> _n_mark_14888=_a3;
{
double _n_d_14895=1.0;
double _n_px_14896=([&](){auto _n_argument_14971=1.0;auto _n_argument_14972=_n_trail_14876(1.0,_n_lag_14884);return _n_xAt_14885(_n_argument_14971,_n_argument_14972);})();
double _n_pdx_14897=0.0;
{double _n_y_14898=(_n_rim_14875+1.0);
for(;d::truth((_n_y_14898<this->_n_rows_14843));(void)((_n_y_14898++))){d::check_cancel();while((d::truth((_n_d_14895<_n_len_14883))&&d::truth((_n_trail_14876(_n_d_14895,_n_lag_14884)->_p_y<_n_y_14898)))){d::check_cancel();(void)((_n_d_14895=(_n_d_14895+0.25)));
}
if(d::truth((_n_d_14895>=_n_len_14883))){d::check_cancel();break;
}
double _n_x_14899=([&](){auto _n_argument_14973=_n_d_14895;auto _n_argument_14974=_n_trail_14876(_n_d_14895,_n_lag_14884);return _n_xAt_14885(_n_argument_14973,_n_argument_14974);})();
double _n_dx_14900=(_n_x_14899-_n_px_14896);
(void)(_n_mark_14888(_n_x_14899,_n_y_14898,_n_dx_14900,(_n_dx_14900-_n_pdx_14897),_n_d_14895,(_n_d_14895/_n_len_14883)));
(void)(((_n_px_14896=_n_x_14899),(_n_pdx_14897=_n_dx_14900)));
}}

}
};
{double _n_i_14901=0.0;
for(;d::truth((_n_i_14901<8.0));(void)((_n_i_14901++))){d::check_cancel();double _n_u_14902=((-d::number(0.92))+((1.84*_n_i_14901)/7.0));
auto _n_wob_14903=[&]( double _a0) mutable ->double{double _n_d_14904=_a0;
return std::sin((((_n_d_14904*0.5)-(_n_t_14867*3.0))+(_n_i_14901*1.9)));};
double _n_len_14905=((8.5+(3.2*(1.0-std::fabs(_n_u_14902))))+(d::mod((_n_i_14901*3.0),5.0)*0.8));
(void)(_n_strand_14882(_n_len_14905,0.06,[=]( double _a0,std::shared_ptr<_n_Record_14877> _a1) mutable ->double{double _n_d_14906=_a0;
std::shared_ptr<_n_Record_14877> _n_at_14907=_a1;
return ((_n_at_14907->_p_x+((_n_u_14902*_n_at_14907->_p_half)*(1.0-(0.01*_n_d_14906))))+(((0.05+(_n_d_14906*0.013))*_n_d_14906)*_n_wob_14903(_n_d_14906)));},[=]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5) mutable ->void{double _n_x_14908=_a0;
double _n_y_14909=_a1;
double _n_dx_14910=_a2;
double _n_bow_14911=_a3;
double _n__d_14912=_a4;
double _n_f_14913=_a5;
{
d::String _n_ch_14914=(d::truth((_n_f_14913>0.9))?d::String(u"."):(d::truth((_n_f_14913>0.8))?d::String(u":"):(d::truth((_n_dx_14910>0.6))?d::String(u"\\"):(d::truth((_n_dx_14910<(-d::number(0.6))))?d::String(u"/"):(d::truth((_n_bow_14911>0.22))?d::String(u"("):(d::truth((_n_bow_14911<(-d::number(0.22))))?d::String(u")"):d::String(u"|")))))));
(void)(this->_n_put_14849(_n_x_14908,_n_y_14909,_n_ch_14914));

}
}));
}}
{double _n_i_14915=0.0;
for(;d::truth((_n_i_14915<2.0));(void)((_n_i_14915++))){d::check_cancel();double _n_s_14916=(d::truth(_n_i_14915)?1.0:(-d::number(1.0)));
(void)(_n_strand_14882(10.0,0.09,[=]( double _a0,std::shared_ptr<_n_Record_14877> _a1) mutable ->double{double _n_d_14917=_a0;
std::shared_ptr<_n_Record_14877> _n_at_14918=_a1;
return ((_n_at_14918->_p_x+(((_n_s_14916*2.0)*(1.0-(_n_d_14917*0.06)))*(_n_at_14918->_p_half/10.0)))+(0.9*std::sin((((_n_d_14917*0.6)-(_n_t_14867*2.2))+(_n_i_14915*2.5)))));},[=]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5) mutable ->void{double _n_x_14919=_a0;
double _n_y_14920=_a1;
double _n__dx_14921=_a2;
double _n__bow_14922=_a3;
double _n_d_14923=_a4;
double _n_f_14924=_a5;
{
double _n_tw_14925=std::cos((((_n_d_14923*1.1)+(_n_i_14915*1.3))-(_n_t_14867*1.6)));
if(d::truth((_n_f_14924>0.8))){d::check_cancel();return this->_n_put_14849(_n_x_14919,_n_y_14920,(d::truth((_n_f_14924>0.9))?d::String(u"."):d::String(u":")));
}
if(d::truth((std::fabs(_n_tw_14925)<0.35))){d::check_cancel();return this->_n_put_14849(_n_x_14919,_n_y_14920,d::String(u":"));
}
(void)(this->_n_put_14849(_n_x_14919,_n_y_14920,d::String(u";")));
if(d::truth((_n_tw_14925>0.5))){d::check_cancel();(void)(this->_n_put_14849((_n_x_14919+_n_s_14916),_n_y_14920,(d::truth((_n_s_14916>0.0))?d::String(u")"):d::String(u"("))));
}

}
}));
}}
auto _n_width_14926=[&]( double _a0) mutable ->double{double _n_s_14927=_a0;
return ((_n_a_14873*std::sqrt((1.0-(_n_s_14927*_n_s_14927))))*(1.0-((0.3*_n_c_14872)*std::pow((1.0-_n_s_14927),2.0))));};
auto _n_inside_14928=[&]( double _a0,double _a1) mutable ->bool{double _n_X_14929=_a0;
double _n_yy_14930=_a1;
{
double _n_s_14931=(((_n_now_14871->_p_y-_n_yy_14930)*2.0)/_n_b_14874);
return ([&]()->bool{auto _n_logical_14975=([&]()->bool{auto _n_logical_14978=(_n_s_14931>=0.0);return d::truth(_n_logical_14978)?(_n_s_14931<1.0):_n_logical_14978;})();return d::truth(_n_logical_14975)?([&](){auto _n_left_14976=std::fabs(_n_X_14929);auto _n_right_14977=_n_width_14926(_n_s_14931);return (_n_left_14976<_n_right_14977);})():_n_logical_14975;})();

}
};
{double _n_x_14932=0.0;
for(;d::truth((_n_x_14932<this->_n_cols_14842));(void)((_n_x_14932++))){d::check_cancel();double _n_u_14933=(((_n_x_14932+0.5)-_n_cx_14881)/_n_width_14926(0.0));
if(d::truth((std::fabs(_n_u_14933)<1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_14979=this->_n_grid_14848;auto _n_index_14980=((_n_rim_14875*this->_n_cols_14842)+_n_x_14932);auto _n_value_14981=(d::truth((std::fabs(_n_u_14933)>0.93))?d::String(u"'"):(d::truth(double(d::i32(_n_x_14932)&d::i32(1.0)))?d::String(u"~"):d::String(u"'")));d::put(_n_array_14979,_n_index_14980,_n_value_14981);return _n_value_14981;})());
}
}}
{double _n_r_14934=0.0;
for(;d::truth((_n_r_14934<_n_rim_14875));(void)((_n_r_14934++))){d::check_cancel();{double _n_x_14935=0.0;
for(;d::truth((_n_x_14935<this->_n_cols_14842));(void)((_n_x_14935++))){d::check_cancel();double _n_n_14936=0.0;
double _n_sx_14937=0.0;
double _n_sy_14938=0.0;
{double _n_j_14939=0.0;
for(;d::truth((_n_j_14939<4.0));(void)((_n_j_14939++))){d::check_cancel();{double _n_i_14940=0.0;
for(;d::truth((_n_i_14940<3.0));(void)((_n_i_14940++))){d::check_cancel();if(d::truth(_n_inside_14928(((_n_x_14935+((_n_i_14940+0.5)/3.0))-_n_cx_14881),(_n_r_14934+((_n_j_14939+0.5)/4.0))))){d::check_cancel();(void)((((_n_n_14936++),(_n_sx_14937=(_n_sx_14937+(_n_i_14940-1.0)))),(_n_sy_14938=(_n_sy_14938+((_n_j_14939-1.5)/1.5)))));
}
}}
}}
if(d::truth((!d::truth(_n_n_14936)))){d::check_cancel();continue;
}
double _n_k_14941=((_n_r_14934*this->_n_cols_14842)+_n_x_14935);
if(d::truth((_n_n_14936<10.0))){d::check_cancel();double _n_ux_14942=(_n_sx_14937/_n_n_14936);
double _n_uy_14943=(_n_sy_14938/_n_n_14936);
if(d::truth((_n_uy_14943>(std::fabs(_n_ux_14942)*1.2)))){d::check_cancel();(void)(([&](){auto&& _n_array_14982=this->_n_grid_14848;auto _n_index_14983=_n_k_14941;auto _n_value_14984=(d::truth((_n_n_14936<5.0))?d::String(u"_"):d::String(u"-"));d::put(_n_array_14982,_n_index_14983,_n_value_14984);return _n_value_14984;})());
}else {d::check_cancel();if(d::truth((std::fabs(_n_ux_14942)>(_n_uy_14943*1.5)))){d::check_cancel();(void)(([&](){auto&& _n_array_14985=this->_n_grid_14848;auto _n_index_14986=_n_k_14941;auto _n_value_14987=(d::truth((_n_ux_14942>0.0))?d::String(u"("):d::String(u")"));d::put(_n_array_14985,_n_index_14986,_n_value_14987);return _n_value_14987;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_14988=this->_n_grid_14848;auto _n_index_14989=_n_k_14941;auto _n_value_14990=(d::truth((_n_n_14936<4.0))?d::String(u"."):(d::truth((_n_ux_14942>0.0))?d::String(u"/"):d::String(u"\\")));d::put(_n_array_14988,_n_index_14989,_n_value_14990);return _n_value_14990;})());
}
}
continue;
}
double _n_s_14944=d::maximum({0.0,((((_n_now_14871->_p_y-_n_r_14934)-0.5)*2.0)/_n_b_14874)});
double _n_u_14945=([&](){auto _n_argument_14991=(-d::number(0.999));auto _n_argument_14992=([&](){auto _n_argument_14993=0.999;auto _n_argument_14994=(((_n_x_14935+0.5)-_n_cx_14881)/_n_width_14926(_n_s_14944));return d::minimum({_n_argument_14993,_n_argument_14994});})();return d::maximum({_n_argument_14991,_n_argument_14992});})();
double _n_nz_14946=([&](){auto _n_left_14995=std::sqrt((1.0-(_n_u_14945*_n_u_14945)));auto _n_right_14996=std::sqrt((1.0-(_n_s_14944*_n_s_14944)));return (_n_left_14995*_n_right_14996);})();
double _n_ph_14947=std::asin(_n_u_14945);
double _n_g_14948=([&](){auto _n_argument_14997=std::fabs((_n_ph_14947-0.6));auto _n_argument_14998=std::fabs((_n_ph_14947+0.6));return d::minimum({_n_argument_14997,_n_argument_14998});})();
double _n_ring_14949=([&](){auto _n_argument_14999=0.0;auto _n_argument_15000=(1.0-(std::fabs((d::hypot(std::initializer_list<double>{(_n_g_14948/0.36),((_n_s_14944-0.45)/0.26)})-1.0))*3.5));return d::maximum({_n_argument_14999,_n_argument_15000});})();
double _n_crown_14950=(1.0-(0.6*_n_ease_14836(d::maximum({0.0,((_n_s_14944-0.62)/0.38)}))));
double _n_v_14951=d::minimum({1.0,((((0.16+(0.07*_n_s_14944))+(0.6*std::pow((1.0-_n_nz_14946),2.0)))*_n_crown_14950)+(0.55*_n_ring_14949))});
(void)(([&](){auto&& _n_array_15001=this->_n_grid_14848;auto _n_index_15002=_n_k_14941;auto _n_value_15003=d::at(_n_RAMP_14833,([&](){auto _n_argument_15004=1.0;auto _n_argument_15005=d::round((_n_v_14951*(double(_n_RAMP_14833.size())-1.0)));return d::maximum({_n_argument_15004,_n_argument_15005});})());d::put(_n_array_15001,_n_index_15002,_n_value_15003);return _n_value_15003;})());
}}
}}
d::Array<d::String,false> _n_lines_14952=d::Array<d::String,false>{};
{double _n_r_14953=0.0;
for(;d::truth((_n_r_14953<this->_n_rows_14843));(void)((_n_r_14953++))){d::check_cancel();(void)(_n_lines_14952.push(d::join(this->_n_grid_14848.slice((_n_r_14953*this->_n_cols_14842),((_n_r_14953+1.0)*this->_n_cols_14842)),d::String(u""))));
}}
return d::join(_n_lines_14952,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("jellyfish").cols)*ascii::catalog_meta("jellyfish").rows);auto _env=std::make_shared<_n_Record_14954>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &jellyfish_meta(){return catalog_meta("jellyfish");}
std::unique_ptr<Piece> make_jellyfish(const AsciiPieceOptions &o){return std::make_unique<Native_jellyfish>(o);}
}
