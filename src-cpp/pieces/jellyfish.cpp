// Direct, statically typed C++ from src/pieces/jellyfish.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_14833;
struct _n_Record_14842;
struct _n_Record_14848;
struct _n_Record_14878;
struct _n_Record_14955;
struct _n_Record_14833{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_14833> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14833>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_14842{
double _p_c{};
double _p_x{};
double _p_y{};
double _p_half{};
static std::shared_ptr<_n_Record_14842> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14842>();out->_p_c=d::decode<double>(j["c"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_half=d::decode<double>(j["half"]);return out;}
};
struct _n_Record_14848{
double _p_x{};
double _p_y{};
double _p_z{};
double _p_w{};
static std::shared_ptr<_n_Record_14848> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14848>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_z=d::decode<double>(j["z"]);out->_p_w=d::decode<double>(j["w"]);return out;}
};
struct _n_Record_14878{
double _p_x{};
double _p_y{};
double _p_half{};
static std::shared_ptr<_n_Record_14878> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14878>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_half=d::decode<double>(j["half"]);return out;}
};
struct _n_Record_14955{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14955> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14955>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_ease_14837(double _a0);
double _n_phase_14838(double _a0);
double _n_squeeze_14839(double _a0);
double _n_lift_14840(double _a0);
std::shared_ptr<_n_Record_14842> _n_rimAt_14841(double _a0);
std::shared_ptr<_n_Record_14833> _n_meta_14832=[](){return ([&](){auto _n_object_14958=std::make_shared<_n_Record_14833>();_n_object_14958->_p_name=d::String(u"jellyfish");_n_object_14958->_p_category=d::String(u"creatures");_n_object_14958->_p_note=d::String(u"a jellyfish pulsing upward, its tentacles trailing late");_n_object_14958->_p_cols=44.0;_n_object_14958->_p_rows=26.0;_n_object_14958->_p_fps=24.0;return _n_object_14958;})();}();
const d::String _n_RAMP_14834=[](){return d::String(u" .::=+*#%@");}();
const double _n_P_14835=[](){return 2.2;}();
const double _n_SQ_14836=[](){return 0.28;}();
double _n_ease_14837(double _a0){double _n_x_14852=_a0;
return ((_n_x_14852*_n_x_14852)*(3.0-(2.0*_n_x_14852)));}

double _n_phase_14838(double _a0){double _n_t_14853=_a0;
return (d::mod((d::mod(_n_t_14853,_n_P_14835)+_n_P_14835),_n_P_14835)/_n_P_14835);}

double _n_squeeze_14839(double _a0){double _n_t_14854=_a0;
{
double _n_p_14855=_n_phase_14838(_n_t_14854);
return (d::truth((_n_p_14855<_n_SQ_14836))?_n_ease_14837((_n_p_14855/_n_SQ_14836)):(1.0-_n_ease_14837(((_n_p_14855-_n_SQ_14836)/(1.0-_n_SQ_14836)))));

}
}

double _n_lift_14840(double _a0){double _n_t_14856=_a0;
{
double _n_p_14857=_n_phase_14838(_n_t_14856);
return (d::truth((_n_p_14857<0.4))?_n_ease_14837((_n_p_14857/0.4)):(1.0-_n_ease_14837(((_n_p_14857-0.4)/0.6))));

}
}

std::shared_ptr<_n_Record_14842> _n_rimAt_14841(double _a0){double _n_t_14858=_a0;
{
double _n_c_14859=_n_squeeze_14839(_n_t_14858);
double _n_x_14860=((_n_meta_14832->_p_cols/2.0)+(1.5*std::sin((((2.0*ascii::PI)*_n_t_14858)/(5.0*_n_P_14835)))));
return ([&](){auto _n_object_14960=std::make_shared<_n_Record_14842>();_n_object_14960->_p_c=_n_c_14859;_n_object_14960->_p_x=_n_x_14860;_n_object_14960->_p_y=((11.0-(0.8*_n_c_14859))-(1.4*_n_lift_14840(_n_t_14858)));_n_object_14960->_p_half=((13.0-(2.6*_n_c_14859))*(1.0-(0.3*_n_c_14859)));return _n_object_14960;})();

}
}

struct Native_jellyfish final:ascii::Piece{
double _n_cols_14843{};
double _n_rows_14844{};
double _n_seed_14845{};
d::Array<std::shared_ptr<_n_Record_14848>,false> _n_specks_14847{};
d::Array<d::String,false> _n_grid_14849{};
std::function<d::String(double,std::shared_ptr<_n_Record_14955>)> _render;
double _n_rnd_14846(){{
(void)((this->_n_seed_14845=double(d::i32((this->_n_seed_14845+1831565813.0))|d::i32(0.0))));
double _n_z_14861=d::imul(double(d::i32(this->_n_seed_14845)^d::i32(double(d::u32(this->_n_seed_14845)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(this->_n_seed_14845)));
(void)((_n_z_14861=double(d::i32((_n_z_14861+d::imul(double(d::i32(_n_z_14861)^d::i32(double(d::u32(_n_z_14861)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_z_14861)))))^d::i32(_n_z_14861))));
return (double(d::u32(double(d::i32(_n_z_14861)^d::i32(double(d::u32(_n_z_14861)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

void _n_put_14850(double _a0,double _a1,d::String _a2){double _n_x_14862=_a0;
double _n_y_14863=_a1;
d::String _n_ch_14864=_a2;
{
(void)((_n_x_14862=d::round(_n_x_14862)));
(void)((_n_y_14863=d::round(_n_y_14863)));
if((((d::truth((_n_x_14862>=0.0))&&d::truth((_n_x_14862<this->_n_cols_14843)))&&d::truth((_n_y_14863>=0.0)))&&d::truth((_n_y_14863<this->_n_rows_14844)))){d::check_cancel();(void)(([&](){auto&& _n_array_15007=this->_n_grid_14849;auto _n_index_15008=((_n_y_14863*this->_n_cols_14843)+_n_x_14862);auto _n_value_15009=_n_ch_14864;d::put(_n_array_15007,_n_index_15008,_n_value_15009);return _n_value_15009;})());
}

}
}

double _n_travel_14851(double _a0){double _n_t_14865=_a0;
{
double _n_k_14866=std::floor((_n_t_14865/_n_P_14835));
double _n_p_14867=_n_phase_14838(_n_t_14865);
return ((0.9*_n_t_14865)+(2.4*(_n_k_14866+(d::truth((_n_p_14867<_n_SQ_14836))?(0.8*_n_ease_14837((_n_p_14867/_n_SQ_14836))):(0.8+((0.2*(_n_p_14867-_n_SQ_14836))/(1.0-_n_SQ_14836)))))));

}
}

explicit Native_jellyfish(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_14961=_n_meta_14832;
this->_n_cols_14843=_n_binding_14961->_p_cols;
this->_n_rows_14844=_n_binding_14961->_p_rows;
this->_n_seed_14845=7.0;
this->_n_specks_14847=d::Array<std::shared_ptr<_n_Record_14848>,false>(d::from(30.0,[&]( ) mutable ->std::shared_ptr<_n_Record_14848>{return ([&](){auto _n_object_14964=std::make_shared<_n_Record_14848>();_n_object_14964->_p_x=(this->_n_rnd_14846()*this->_n_cols_14843);_n_object_14964->_p_y=(this->_n_rnd_14846()*this->_n_rows_14844);_n_object_14964->_p_z=(0.4+(this->_n_rnd_14846()*0.6));_n_object_14964->_p_w=(this->_n_rnd_14846()*6.3);return _n_object_14964;})();}));
this->_n_grid_14849=d::Array<d::String,false>(size_t((this->_n_cols_14843*this->_n_rows_14844)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_14955> _a1) mutable ->d::String{double _n_t_14868=_a0;
{
(void)(this->_n_grid_14849.fill(d::String(u" ")));
double _n_D_14869=this->_n_travel_14851(_n_t_14868);
for(auto &&_n_item_14965:this->_n_specks_14847){d::check_cancel();std::shared_ptr<_n_Record_14848> _n_s_14870=_n_item_14965;
{
double _n_y_14871=std::floor(d::mod((d::mod((_n_s_14870->_p_y+(_n_D_14869*_n_s_14870->_p_z)),this->_n_rows_14844)+this->_n_rows_14844),this->_n_rows_14844));
(void)(([&](){auto _n_argument_14966=(_n_s_14870->_p_x+(0.6*std::sin(((_n_t_14868*0.5)+_n_s_14870->_p_w))));auto _n_argument_14967=_n_y_14871;auto _n_argument_14968=(d::truth((_n_s_14870->_p_z>0.8))?d::String(u"·"):d::String(u"."));return this->_n_put_14850(_n_argument_14966,_n_argument_14967,_n_argument_14968);})());

}
}
std::shared_ptr<_n_Record_14842> _n_now_14872=_n_rimAt_14841(_n_t_14868);
auto _n_binding_14969=_n_now_14872;
double _n_c_14873=_n_binding_14969->_p_c;
double _n_a_14874=(13.0-(2.6*_n_c_14873));
double _n_b_14875=(13.0+(2.0*_n_c_14873));
double _n_rim_14876=std::floor(_n_now_14872->_p_y);
auto _n_trail_14877=[=]( double _a0,double _a1) mutable ->std::shared_ptr<_n_Record_14878>{double _n_d_14879=_a0;
double _n_lagPer_14880=_a1;
{
std::shared_ptr<_n_Record_14842> _n_was_14881=_n_rimAt_14841((_n_t_14868-(_n_d_14879*_n_lagPer_14880)));
return ([&](){auto _n_object_14971=std::make_shared<_n_Record_14878>();_n_object_14971->_p_x=_n_was_14881->_p_x;_n_object_14971->_p_y=((_n_rim_14876+_n_d_14879)+(d::maximum({0.0,(_n_was_14881->_p_y-_n_now_14872->_p_y)})*0.8));_n_object_14971->_p_half=_n_was_14881->_p_half;return _n_object_14971;})();

}
};
double _n_cx_14882=_n_now_14872->_p_x;
auto _n_strand_14883=[&]( double _a0,double _a1,std::function<double(double,std::shared_ptr<_n_Record_14878>)> _a2,std::function<void(double,double,double,double,double,double)> _a3) mutable ->void{double _n_len_14884=_a0;
double _n_lag_14885=_a1;
std::function<double(double,std::shared_ptr<_n_Record_14878>)> _n_xAt_14886=_a2;
std::function<void(double,double,double,double,double,double)> _n_mark_14889=_a3;
{
double _n_d_14896=1.0;
double _n_px_14897=([&](){auto _n_argument_14972=1.0;auto _n_argument_14973=_n_trail_14877(1.0,_n_lag_14885);return _n_xAt_14886(_n_argument_14972,_n_argument_14973);})();
double _n_pdx_14898=0.0;
{double _n_y_14899=(_n_rim_14876+1.0);
for(;d::truth((_n_y_14899<this->_n_rows_14844));(void)((_n_y_14899++))){d::check_cancel();while((d::truth((_n_d_14896<_n_len_14884))&&d::truth((_n_trail_14877(_n_d_14896,_n_lag_14885)->_p_y<_n_y_14899)))){d::check_cancel();(void)((_n_d_14896=(_n_d_14896+0.25)));
}
if(d::truth((_n_d_14896>=_n_len_14884))){d::check_cancel();break;
}
double _n_x_14900=([&](){auto _n_argument_14974=_n_d_14896;auto _n_argument_14975=_n_trail_14877(_n_d_14896,_n_lag_14885);return _n_xAt_14886(_n_argument_14974,_n_argument_14975);})();
double _n_dx_14901=(_n_x_14900-_n_px_14897);
(void)(_n_mark_14889(_n_x_14900,_n_y_14899,_n_dx_14901,(_n_dx_14901-_n_pdx_14898),_n_d_14896,(_n_d_14896/_n_len_14884)));
(void)(((_n_px_14897=_n_x_14900),(_n_pdx_14898=_n_dx_14901)));
}}

}
};
{double _n_i_14902=0.0;
for(;d::truth((_n_i_14902<8.0));(void)((_n_i_14902++))){d::check_cancel();double _n_u_14903=((-d::number(0.92))+((1.84*_n_i_14902)/7.0));
auto _n_wob_14904=[=]( double _a0) mutable ->double{double _n_d_14905=_a0;
return std::sin((((_n_d_14905*0.5)-(_n_t_14868*3.0))+(_n_i_14902*1.9)));};
double _n_len_14906=((8.5+(3.2*(1.0-std::fabs(_n_u_14903))))+(d::mod((_n_i_14902*3.0),5.0)*0.8));
(void)(_n_strand_14883(_n_len_14906,0.06,[=]( double _a0,std::shared_ptr<_n_Record_14878> _a1) mutable ->double{double _n_d_14907=_a0;
std::shared_ptr<_n_Record_14878> _n_at_14908=_a1;
return ((_n_at_14908->_p_x+((_n_u_14903*_n_at_14908->_p_half)*(1.0-(0.01*_n_d_14907))))+(((0.05+(_n_d_14907*0.013))*_n_d_14907)*_n_wob_14904(_n_d_14907)));},[=]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5) mutable ->void{double _n_x_14909=_a0;
double _n_y_14910=_a1;
double _n_dx_14911=_a2;
double _n_bow_14912=_a3;
double _n__d_14913=_a4;
double _n_f_14914=_a5;
{
d::String _n_ch_14915=(d::truth((_n_f_14914>0.9))?d::String(u"."):(d::truth((_n_f_14914>0.8))?d::String(u":"):(d::truth((_n_dx_14911>0.6))?d::String(u"\\"):(d::truth((_n_dx_14911<(-d::number(0.6))))?d::String(u"/"):(d::truth((_n_bow_14912>0.22))?d::String(u"("):(d::truth((_n_bow_14912<(-d::number(0.22))))?d::String(u")"):d::String(u"|")))))));
(void)(this->_n_put_14850(_n_x_14909,_n_y_14910,_n_ch_14915));

}
}));
}}
{double _n_i_14916=0.0;
for(;d::truth((_n_i_14916<2.0));(void)((_n_i_14916++))){d::check_cancel();double _n_s_14917=(d::truth(_n_i_14916)?1.0:(-d::number(1.0)));
(void)(_n_strand_14883(10.0,0.09,[=]( double _a0,std::shared_ptr<_n_Record_14878> _a1) mutable ->double{double _n_d_14918=_a0;
std::shared_ptr<_n_Record_14878> _n_at_14919=_a1;
return ((_n_at_14919->_p_x+(((_n_s_14917*2.0)*(1.0-(_n_d_14918*0.06)))*(_n_at_14919->_p_half/10.0)))+(0.9*std::sin((((_n_d_14918*0.6)-(_n_t_14868*2.2))+(_n_i_14916*2.5)))));},[=]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5) mutable ->void{double _n_x_14920=_a0;
double _n_y_14921=_a1;
double _n__dx_14922=_a2;
double _n__bow_14923=_a3;
double _n_d_14924=_a4;
double _n_f_14925=_a5;
{
double _n_tw_14926=std::cos((((_n_d_14924*1.1)+(_n_i_14916*1.3))-(_n_t_14868*1.6)));
if(d::truth((_n_f_14925>0.8))){d::check_cancel();return this->_n_put_14850(_n_x_14920,_n_y_14921,(d::truth((_n_f_14925>0.9))?d::String(u"."):d::String(u":")));
}
if(d::truth((std::fabs(_n_tw_14926)<0.35))){d::check_cancel();return this->_n_put_14850(_n_x_14920,_n_y_14921,d::String(u":"));
}
(void)(this->_n_put_14850(_n_x_14920,_n_y_14921,d::String(u";")));
if(d::truth((_n_tw_14926>0.5))){d::check_cancel();(void)(this->_n_put_14850((_n_x_14920+_n_s_14917),_n_y_14921,(d::truth((_n_s_14917>0.0))?d::String(u")"):d::String(u"("))));
}

}
}));
}}
auto _n_width_14927=[&]( double _a0) mutable ->double{double _n_s_14928=_a0;
return ((_n_a_14874*std::sqrt((1.0-(_n_s_14928*_n_s_14928))))*(1.0-((0.3*_n_c_14873)*std::pow((1.0-_n_s_14928),2.0))));};
auto _n_inside_14929=[&]( double _a0,double _a1) mutable ->bool{double _n_X_14930=_a0;
double _n_yy_14931=_a1;
{
double _n_s_14932=(((_n_now_14872->_p_y-_n_yy_14931)*2.0)/_n_b_14875);
return ([&]()->bool{auto _n_logical_14976=([&]()->bool{auto _n_logical_14979=(_n_s_14932>=0.0);return d::truth(_n_logical_14979)?(_n_s_14932<1.0):_n_logical_14979;})();return d::truth(_n_logical_14976)?([&](){auto _n_left_14977=std::fabs(_n_X_14930);auto _n_right_14978=_n_width_14927(_n_s_14932);return (_n_left_14977<_n_right_14978);})():_n_logical_14976;})();

}
};
{double _n_x_14933=0.0;
for(;d::truth((_n_x_14933<this->_n_cols_14843));(void)((_n_x_14933++))){d::check_cancel();double _n_u_14934=(((_n_x_14933+0.5)-_n_cx_14882)/_n_width_14927(0.0));
if(d::truth((std::fabs(_n_u_14934)<1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_14980=this->_n_grid_14849;auto _n_index_14981=((_n_rim_14876*this->_n_cols_14843)+_n_x_14933);auto _n_value_14982=(d::truth((std::fabs(_n_u_14934)>0.93))?d::String(u"'"):(d::truth(double(d::i32(_n_x_14933)&d::i32(1.0)))?d::String(u"~"):d::String(u"'")));d::put(_n_array_14980,_n_index_14981,_n_value_14982);return _n_value_14982;})());
}
}}
{double _n_r_14935=0.0;
for(;d::truth((_n_r_14935<_n_rim_14876));(void)((_n_r_14935++))){d::check_cancel();{double _n_x_14936=0.0;
for(;d::truth((_n_x_14936<this->_n_cols_14843));(void)((_n_x_14936++))){d::check_cancel();double _n_n_14937=0.0;
double _n_sx_14938=0.0;
double _n_sy_14939=0.0;
{double _n_j_14940=0.0;
for(;d::truth((_n_j_14940<4.0));(void)((_n_j_14940++))){d::check_cancel();{double _n_i_14941=0.0;
for(;d::truth((_n_i_14941<3.0));(void)((_n_i_14941++))){d::check_cancel();if(d::truth(_n_inside_14929(((_n_x_14936+((_n_i_14941+0.5)/3.0))-_n_cx_14882),(_n_r_14935+((_n_j_14940+0.5)/4.0))))){d::check_cancel();(void)((((_n_n_14937++),(_n_sx_14938=(_n_sx_14938+(_n_i_14941-1.0)))),(_n_sy_14939=(_n_sy_14939+((_n_j_14940-1.5)/1.5)))));
}
}}
}}
if(d::truth((!d::truth(_n_n_14937)))){d::check_cancel();continue;
}
double _n_k_14942=((_n_r_14935*this->_n_cols_14843)+_n_x_14936);
if(d::truth((_n_n_14937<10.0))){d::check_cancel();double _n_ux_14943=(_n_sx_14938/_n_n_14937);
double _n_uy_14944=(_n_sy_14939/_n_n_14937);
if(d::truth((_n_uy_14944>(std::fabs(_n_ux_14943)*1.2)))){d::check_cancel();(void)(([&](){auto&& _n_array_14983=this->_n_grid_14849;auto _n_index_14984=_n_k_14942;auto _n_value_14985=(d::truth((_n_n_14937<5.0))?d::String(u"_"):d::String(u"-"));d::put(_n_array_14983,_n_index_14984,_n_value_14985);return _n_value_14985;})());
}else {d::check_cancel();if(d::truth((std::fabs(_n_ux_14943)>(_n_uy_14944*1.5)))){d::check_cancel();(void)(([&](){auto&& _n_array_14986=this->_n_grid_14849;auto _n_index_14987=_n_k_14942;auto _n_value_14988=(d::truth((_n_ux_14943>0.0))?d::String(u"("):d::String(u")"));d::put(_n_array_14986,_n_index_14987,_n_value_14988);return _n_value_14988;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_14989=this->_n_grid_14849;auto _n_index_14990=_n_k_14942;auto _n_value_14991=(d::truth((_n_n_14937<4.0))?d::String(u"."):(d::truth((_n_ux_14943>0.0))?d::String(u"/"):d::String(u"\\")));d::put(_n_array_14989,_n_index_14990,_n_value_14991);return _n_value_14991;})());
}
}
continue;
}
double _n_s_14945=d::maximum({0.0,((((_n_now_14872->_p_y-_n_r_14935)-0.5)*2.0)/_n_b_14875)});
double _n_u_14946=([&](){auto _n_argument_14992=(-d::number(0.999));auto _n_argument_14993=([&](){auto _n_argument_14994=0.999;auto _n_argument_14995=(((_n_x_14936+0.5)-_n_cx_14882)/_n_width_14927(_n_s_14945));return d::minimum({_n_argument_14994,_n_argument_14995});})();return d::maximum({_n_argument_14992,_n_argument_14993});})();
double _n_nz_14947=([&](){auto _n_left_14996=std::sqrt((1.0-(_n_u_14946*_n_u_14946)));auto _n_right_14997=std::sqrt((1.0-(_n_s_14945*_n_s_14945)));return (_n_left_14996*_n_right_14997);})();
double _n_ph_14948=std::asin(_n_u_14946);
double _n_g_14949=([&](){auto _n_argument_14998=std::fabs((_n_ph_14948-0.6));auto _n_argument_14999=std::fabs((_n_ph_14948+0.6));return d::minimum({_n_argument_14998,_n_argument_14999});})();
double _n_ring_14950=([&](){auto _n_argument_15000=0.0;auto _n_argument_15001=(1.0-(std::fabs((d::hypot(std::initializer_list<double>{(_n_g_14949/0.36),((_n_s_14945-0.45)/0.26)})-1.0))*3.5));return d::maximum({_n_argument_15000,_n_argument_15001});})();
double _n_crown_14951=(1.0-(0.6*_n_ease_14837(d::maximum({0.0,((_n_s_14945-0.62)/0.38)}))));
double _n_v_14952=d::minimum({1.0,((((0.16+(0.07*_n_s_14945))+(0.6*std::pow((1.0-_n_nz_14947),2.0)))*_n_crown_14951)+(0.55*_n_ring_14950))});
(void)(([&](){auto&& _n_array_15002=this->_n_grid_14849;auto _n_index_15003=_n_k_14942;auto _n_value_15004=d::at(_n_RAMP_14834,([&](){auto _n_argument_15005=1.0;auto _n_argument_15006=d::round((_n_v_14952*(double(_n_RAMP_14834.size())-1.0)));return d::maximum({_n_argument_15005,_n_argument_15006});})());d::put(_n_array_15002,_n_index_15003,_n_value_15004);return _n_value_15004;})());
}}
}}
d::Array<d::String,false> _n_lines_14953=d::Array<d::String,false>{};
{double _n_r_14954=0.0;
for(;d::truth((_n_r_14954<this->_n_rows_14844));(void)((_n_r_14954++))){d::check_cancel();(void)(_n_lines_14953.push(d::join(this->_n_grid_14849.slice((_n_r_14954*this->_n_cols_14843),((_n_r_14954+1.0)*this->_n_cols_14843)),d::String(u""))));
}}
return d::join(_n_lines_14953,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("jellyfish").cols)*ascii::catalog_meta("jellyfish").rows);auto _env=std::make_shared<_n_Record_14955>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &jellyfish_meta(){return catalog_meta("jellyfish");}
std::unique_ptr<Piece> make_jellyfish(const AsciiPieceOptions &o){return std::make_unique<Native_jellyfish>(o);}
}
