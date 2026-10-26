// Direct, statically typed C++ from src/pieces/smoke.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28228;
struct _n_Record_28243;
struct _n_Record_28246;
struct _n_Record_28302;
struct _n_Record_28333;
struct _n_Record_28228{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_28228> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28228>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_28243{
double _p_kx{};
double _p_ky{};
double _p_w{};
double _p_a{};
double _p_ph{};
static std::shared_ptr<_n_Record_28243> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28243>();out->_p_kx=d::decode<double>(j["kx"]);out->_p_ky=d::decode<double>(j["ky"]);out->_p_w=d::decode<double>(j["w"]);out->_p_a=d::decode<double>(j["a"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_28246{
double _p_x{};
double _p_y{};
double _p_age{};
double _p_n{};
double _p_cut{};
static std::shared_ptr<_n_Record_28246> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28246>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_age=d::decode<double>(j["age"]);out->_p_n=d::decode<double>(j["n"]);out->_p_cut=d::decode<double>(j["cut"]);return out;}
};
struct _n_Record_28302{
double _p_r{};
double _p_x{};
double _p_s{};
double _p_hold{};
static std::shared_ptr<_n_Record_28302> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28302>();out->_p_r=d::decode<double>(j["r"]);out->_p_x=d::decode<double>(j["x"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hold=d::decode<double>(j["hold"]);return out;}
};
struct _n_Record_28333{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28333> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28333>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_28236(double _a0);
double _n_smooth_28237(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_28228> _n_meta_28227=[](){return ([&](){auto _n_object_28336=std::make_shared<_n_Record_28228>();_n_object_28336->_p_name=d::String(u"smoke");_n_object_28336->_p_category=d::String(u"physics");_n_object_28336->_p_note=d::String(u"incense smoke rising straight, then curling and thinning");_n_object_28336->_p_cols=44.0;_n_object_28336->_p_rows=24.0;_n_object_28336->_p_fps=30.0;return _n_object_28336;})();}();
const d::String _n_RAMP_28229=[](){return d::String(u" .·:;+");}();
const double _n_TIP_28230=[](){return 17.0;}();
const double _n_RATE_28231=[](){return 70.0;}();
const double _n_LIFE_28232=[](){return 8.0;}();
const double _n_RISE_28233=[](){return 3.4;}();
d::Array<double,false> _n_FRAY_28234=[](){return d::Array<double,false>{2.3,3.6};}();
d::Array<std::array<double,4>,false> _n_WAVES_28235=[](){return d::Array<std::array<double,4>,false>{std::array<double,4>{8.0,0.4,0.5,1.0},std::array<double,4>{5.5,2.3,(-d::number(0.8)),0.9},std::array<double,4>{3.6,1.1,1.1,0.6},std::array<double,4>{11.0,(-d::number(1.0)),0.3,0.8}};}();
std::function<double()> _n_mulberry32_28236(double _a0){double _n_a_28256=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_28256=double(d::i32((_n_a_28256+1831565813.0))|d::i32(0.0))));
double _n_t_28257=d::imul(double(d::i32(_n_a_28256)^d::i32(double(d::u32(_n_a_28256)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_28256)));
(void)((_n_t_28257=double(d::i32((_n_t_28257+d::imul(double(d::i32(_n_t_28257)^d::i32(double(d::u32(_n_t_28257)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_28257)))))^d::i32(_n_t_28257))));
return (double(d::u32(double(d::i32(_n_t_28257)^d::i32(double(d::u32(_n_t_28257)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_smooth_28237(double _a0,double _a1,double _a2){double _n_a_28258=_a0;
double _n_b_28259=_a1;
double _n_x_28260=_a2;
{
double _n_u_28261=([&](){auto _n_argument_28337=1.0;auto _n_argument_28338=d::maximum({0.0,((_n_x_28260-_n_a_28258)/(_n_b_28259-_n_a_28258))});return d::minimum({_n_argument_28337,_n_argument_28338});})();
return ((_n_u_28261*_n_u_28261)*(3.0-(2.0*_n_u_28261)));

}
}

struct Native_smoke final:ascii::Piece{
double _n_cols_28238{};
double _n_rows_28239{};
std::function<double()> _n_rand_28240{};
double _n_CX_28241{};
d::Array<std::shared_ptr<_n_Record_28243>,false> _n_waves_28242{};
d::Array<std::shared_ptr<_n_Record_28246>,false> _n_puffs_28245{};
double _n_clock_28247{};
double _n_made_28248{};
double _n_N_28250{};
d::Array<double,true> _n_haze_28251{};
d::Array<double,true> _n_line_28252{};
d::Array<double,false> _n_X_28253{};
d::Array<double,false> _n_Y_28254{};
double _n_last_28255{};
std::function<d::String(double,std::shared_ptr<_n_Record_28333>)> _render;
std::array<double,2> _n_flow_28244(double _a0,double _a1,double _a2){double _n_x_28267=_a0;
double _n_y_28268=_a1;
double _n_t_28269=_a2;
{
double _n_k_28270=1.05;
double _n_s_28271=((_n_k_28270*(_n_y_28268-((_n_RISE_28233*0.8)*_n_t_28269)))+(0.4*std::sin((_n_t_28269*0.37))));
double _n_g_28272=std::exp((-d::number(std::pow((_n_x_28267/2.2),2.0))));
double _n_lift_28273=([&](){auto _n_left_28385=(1.7*_n_smooth_28237(1.5,7.0,_n_y_28268));auto _n_right_28386=(1.0-(0.5*_n_smooth_28237(9.0,15.0,_n_y_28268)));return (_n_left_28385*_n_right_28386);})();
double _n_u_28274=((_n_lift_28273*_n_g_28272)*std::cos(_n_s_28271));
double _n_v_28275=(((((_n_lift_28273*_n_g_28272)*std::sin(_n_s_28271))*2.0)*_n_x_28267)/((2.2*2.2)*_n_k_28270));
double _n_e_28276=_n_smooth_28237(6.0,12.0,_n_y_28268);
double _n_yy_28277=(_n_y_28268-((_n_RISE_28233*0.7)*_n_t_28269));
for(auto &&_n_item_28387:this->_n_waves_28242){d::check_cancel();std::shared_ptr<_n_Record_28243> _n_q_28278=_n_item_28387;
{
double _n_c_28279=((std::cos(((((_n_q_28278->_p_kx*_n_x_28267)+(_n_q_28278->_p_ky*_n_yy_28277))+(_n_q_28278->_p_w*_n_t_28269))+_n_q_28278->_p_ph))*_n_q_28278->_p_a)*_n_e_28276);
(void)((_n_u_28274=(_n_u_28274+((_n_c_28279*_n_q_28278->_p_ky)/1.2))));
(void)((_n_v_28275=(_n_v_28275-((_n_c_28279*_n_q_28278->_p_kx)/1.2))));

}
}
return std::array<double,2>{(_n_u_28274+([&](){auto _n_left_28388=(0.15*std::sin((_n_t_28269*0.55)));auto _n_right_28389=_n_smooth_28237(0.5,5.0,_n_y_28268);return (_n_left_28388*_n_right_28389);})()),((_n_RISE_28233*(1.0-(0.35*_n_smooth_28237(3.0,15.0,_n_y_28268))))+(0.5*_n_v_28275))};

}
}

void _n_step_28249(double _a0){double _n_dt_28280=_a0;
{
(void)((this->_n_clock_28247=(this->_n_clock_28247+_n_dt_28280)));
{for(;d::truth((this->_n_made_28248<(this->_n_clock_28247*_n_RATE_28231)));(void)((this->_n_made_28248++))){d::check_cancel();double _n_age_28281=(this->_n_clock_28247-(this->_n_made_28248/_n_RATE_28231));
(void)(this->_n_puffs_28245.push(([&](){auto _n_object_28391=std::make_shared<_n_Record_28246>();_n_object_28391->_p_x=0.0;_n_object_28391->_p_y=(_n_age_28281*_n_RISE_28233);_n_object_28391->_p_age=_n_age_28281;_n_object_28391->_p_n=this->_n_made_28248;_n_object_28391->_p_cut=([&](){auto _n_left_28392=(this->_n_rand_28240()*0.7);auto _n_right_28393=(0.3*std::sin((this->_n_made_28248*0.09)));return (_n_left_28392+_n_right_28393);})();return _n_object_28391;})()));
}}
for(auto &&_n_item_28394:this->_n_puffs_28245){d::check_cancel();std::shared_ptr<_n_Record_28246> _n_p_28282=_n_item_28394;
{
auto _n_binding_28395=this->_n_flow_28244(_n_p_28282->_p_x,_n_p_28282->_p_y,this->_n_clock_28247);
double _n_u_28283=d::at(_n_binding_28395,0.0);
double _n_v_28284=d::at(_n_binding_28395,1.0);
(void)((_n_p_28282->_p_x=(_n_p_28282->_p_x+(_n_u_28283*_n_dt_28280))));
(void)((_n_p_28282->_p_y=(_n_p_28282->_p_y+(_n_v_28284*_n_dt_28280))));
(void)((_n_p_28282->_p_age=(_n_p_28282->_p_age+_n_dt_28280)));

}
}
while((d::truth(double(this->_n_puffs_28245.size()))&&d::truth(([&]()->bool{auto _n_logical_28396=(d::at(this->_n_puffs_28245,0.0)->_p_age>_n_LIFE_28232);return d::truth(_n_logical_28396)?_n_logical_28396:(d::at(this->_n_puffs_28245,0.0)->_p_y>(_n_TIP_28230+3.0));})()))){d::check_cancel();(void)(this->_n_puffs_28245.shift());
}

}
}

explicit Native_smoke(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_28339=_n_meta_28227;
this->_n_cols_28238=_n_binding_28339->_p_cols;
this->_n_rows_28239=_n_binding_28339->_p_rows;
this->_n_rand_28240=_n_mulberry32_28236(11.0);
this->_n_CX_28241=(std::floor((this->_n_cols_28238/2.0))+0.5);
this->_n_waves_28242=d::map(_n_WAVES_28235,[&]( std::array<double,4> _a0) mutable ->std::shared_ptr<_n_Record_28243>{auto _n_binding_28340=_a0;
double _n_len_28262=d::at(_n_binding_28340,0.0);
double _n_ang_28263=d::at(_n_binding_28340,1.0);
double _n_drift_28264=d::at(_n_binding_28340,2.0);
double _n_amp_28265=d::at(_n_binding_28340,3.0);
{
double _n_k_28266=((2.0*ascii::PI)/_n_len_28262);
return ([&](){auto _n_object_28342=std::make_shared<_n_Record_28243>();_n_object_28342->_p_kx=(_n_k_28266*std::cos(_n_ang_28263));_n_object_28342->_p_ky=(_n_k_28266*std::sin(_n_ang_28263));_n_object_28342->_p_w=_n_drift_28264;_n_object_28342->_p_a=(_n_amp_28265*1.6);_n_object_28342->_p_ph=(this->_n_rand_28240()*6.283);return _n_object_28342;})();

}
});
this->_n_puffs_28245=d::Array<std::shared_ptr<_n_Record_28246>,false>{};
this->_n_clock_28247=0.0;
this->_n_made_28248=0.0;
{double _n_i_28285=0.0;
for(;d::truth((_n_i_28285<270.0));(void)((_n_i_28285++))){d::check_cancel();(void)(this->_n_step_28249((1.0/30.0)));
}}
this->_n_N_28250=(this->_n_cols_28238*this->_n_rows_28239);
this->_n_haze_28251=d::Array<double,true>(size_t(this->_n_N_28250));
this->_n_line_28252=d::Array<double,true>(size_t(this->_n_N_28250));
this->_n_X_28253=d::Array<double,false>{};
this->_n_Y_28254=d::Array<double,false>{};
this->_n_last_28255=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_28333> _a1) mutable ->d::String{double _n_time_28286=_a0;
{
double _n_dt_28287=([&](){auto _n_argument_28343=0.1;auto _n_argument_28344=d::maximum({0.0,(_n_time_28286-this->_n_last_28255)});return d::minimum({_n_argument_28343,_n_argument_28344});})();
(void)((this->_n_last_28255=_n_time_28286));
{for(;d::truth((_n_dt_28287>1e-9));(void)((_n_dt_28287=(_n_dt_28287-(1.0/30.0))))){d::check_cancel();(void)(this->_n_step_28249(d::minimum({_n_dt_28287,(1.0/30.0)})));
}}
double _n_n_28288=double(this->_n_puffs_28245.size());
{double _n_i_28289=0.0;
for(;d::truth((_n_i_28289<_n_n_28288));(void)((_n_i_28289++))){d::check_cancel();(void)((([&](){auto&& _n_array_28345=this->_n_X_28253;auto _n_index_28346=_n_i_28289;auto _n_value_28347=(this->_n_CX_28241+(2.0*d::at(this->_n_puffs_28245,_n_i_28289)->_p_x));d::put(_n_array_28345,_n_index_28346,_n_value_28347);return _n_value_28347;})(),([&](){auto&& _n_array_28348=this->_n_Y_28254;auto _n_index_28349=_n_i_28289;auto _n_value_28350=((_n_TIP_28230+0.5)-d::at(this->_n_puffs_28245,_n_i_28289)->_p_y);d::put(_n_array_28348,_n_index_28349,_n_value_28350);return _n_value_28350;})()));
}}
d::Array<d::Array<d::String,false>,false> _n_g_28290=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_28239,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_28238)).fill(d::String(u" "));}));
(void)(this->_n_haze_28251.fill(0.0));
(void)(this->_n_line_28252.fill(0.0));
{double _n_i_28291=0.0;
for(;d::truth((_n_i_28291<_n_n_28288));(void)((_n_i_28291++))){d::check_cancel();std::shared_ptr<_n_Record_28246> _n_p_28292=d::at(this->_n_puffs_28245,_n_i_28291);
double _n_loose_28293=_n_smooth_28237((d::at(_n_FRAY_28234,0.0)-0.4),d::at(_n_FRAY_28234,1.0),_n_p_28292->_p_age);
if(d::truth((_n_loose_28293<=0.0))){d::check_cancel();continue;
}
double _n_rad_28294=(0.55+(0.2*((_n_p_28292->_p_age-d::at(_n_FRAY_28234,0.0))+0.4)));
double _n_m_28295=((_n_loose_28293*std::exp(((-d::number((_n_p_28292->_p_age-d::at(_n_FRAY_28234,0.0))))/1.7)))/(_n_rad_28294*_n_rad_28294));
double _n_col_28296=d::at(this->_n_X_28253,_n_i_28291);
double _n_row_28297=d::at(this->_n_Y_28254,_n_i_28291);
{double _n_rr_28298=([&](){auto _n_argument_28351=0.0;auto _n_argument_28352=std::floor((_n_row_28297-_n_rad_28294));return d::maximum({_n_argument_28351,_n_argument_28352});})();
for(;d::truth((_n_rr_28298<=d::minimum({(this->_n_rows_28239-1.0),(_n_row_28297+_n_rad_28294)})));(void)((_n_rr_28298++))){d::check_cancel();{double _n_cc_28299=([&](){auto _n_argument_28353=0.0;auto _n_argument_28354=std::floor((_n_col_28296-(2.0*_n_rad_28294)));return d::maximum({_n_argument_28353,_n_argument_28354});})();
for(;d::truth((_n_cc_28299<=d::minimum({(this->_n_cols_28238-1.0),(_n_col_28296+(2.0*_n_rad_28294))})));(void)((_n_cc_28299++))){d::check_cancel();double _n_d2_28300=((std::pow((((_n_cc_28299+0.5)-_n_col_28296)/2.0),2.0)+std::pow(((_n_rr_28298+0.5)-_n_row_28297),2.0))/(_n_rad_28294*_n_rad_28294));
if(d::truth((_n_d2_28300<1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_28355=this->_n_haze_28251;auto _n_index_28356=((_n_rr_28298*this->_n_cols_28238)+_n_cc_28299);auto _n_value_28357=(d::at(_n_array_28355,_n_index_28356)+((_n_m_28295*(1.0-_n_d2_28300))*(1.0-_n_d2_28300)));d::put(_n_array_28355,_n_index_28356,_n_value_28357);return _n_value_28357;})());
}
}}
}}
}}
d::Array<std::shared_ptr<_n_Record_28302>,false> _n_hits_28301=d::Array<std::shared_ptr<_n_Record_28302>,false>{};
{double _n_i_28303=0.0;
for(;d::truth(((_n_i_28303+1.0)<_n_n_28288));(void)((_n_i_28303++))){d::check_cancel();std::shared_ptr<_n_Record_28246> _n_p_28304=d::at(this->_n_puffs_28245,_n_i_28303);
double _n_hold_28305=(1.0-_n_smooth_28237(d::at(_n_FRAY_28234,0.0),d::at(_n_FRAY_28234,1.0),_n_p_28304->_p_age));
if(d::truth((_n_hold_28305<(_n_p_28304->_p_cut*0.9)))){d::check_cancel();continue;
}
double _n_y0_28306=d::at(this->_n_Y_28254,_n_i_28303);
double _n_y1_28307=d::at(this->_n_Y_28254,(_n_i_28303+1.0));
double _n_r_28308=std::floor((d::maximum({_n_y0_28306,_n_y1_28307})-0.5));
if(((d::truth((_n_r_28308<0.0))||d::truth((d::minimum({_n_y0_28306,_n_y1_28307})>(_n_r_28308+0.5))))||d::truth((_n_y0_28306==_n_y1_28307)))){d::check_cancel();continue;
}
double _n_u_28309=(((_n_r_28308+0.5)-_n_y0_28306)/(_n_y1_28307-_n_y0_28306));
double _n_x_28310=(d::at(this->_n_X_28253,_n_i_28303)+(_n_u_28309*(d::at(this->_n_X_28253,(_n_i_28303+1.0))-d::at(this->_n_X_28253,_n_i_28303))));
double _n_a_28311=d::maximum({0.0,(_n_i_28303-3.0)});
double _n_b_28312=d::minimum({(_n_n_28288-1.0),(_n_i_28303+4.0)});
(void)(_n_hits_28301.push(([&](){auto _n_object_28359=std::make_shared<_n_Record_28302>();_n_object_28359->_p_r=_n_r_28308;_n_object_28359->_p_x=_n_x_28310;_n_object_28359->_p_s=((d::at(this->_n_X_28253,_n_b_28312)-d::at(this->_n_X_28253,_n_a_28311))/([&]()->double{auto _n_logical_28360=(d::at(this->_n_Y_28254,_n_b_28312)-d::at(this->_n_Y_28254,_n_a_28311));return d::truth(_n_logical_28360)?_n_logical_28360:0.000001;})());_n_object_28359->_p_hold=_n_hold_28305;return _n_object_28359;})()));
}}
{double _n_h_28313=0.0;
for(;d::truth((_n_h_28313<double(_n_hits_28301.size())));(void)((_n_h_28313++))){d::check_cancel();std::shared_ptr<_n_Record_28302> _n_q_28314=d::at(_n_hits_28301,_n_h_28313);
double _n_c_28315=std::floor(_n_q_28314->_p_x);
if((d::truth((_n_c_28315<0.0))||d::truth((_n_c_28315>=this->_n_cols_28238)))){d::check_cancel();continue;
}
double _n_k_28316=((_n_q_28314->_p_r*this->_n_cols_28238)+_n_c_28315);
if(d::truth((d::at(this->_n_line_28252,_n_k_28316)>=_n_q_28314->_p_hold))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_28361=this->_n_line_28252;auto _n_index_28362=_n_k_28316;auto _n_value_28363=_n_q_28314->_p_hold;d::put(_n_array_28361,_n_index_28362,_n_value_28363);return _n_value_28363;})());
std::shared_ptr<_n_Record_28302> _n_up_28317=d::at(_n_hits_28301,(_n_h_28313-1.0));
std::shared_ptr<_n_Record_28302> _n_dn_28318=d::at(_n_hits_28301,(_n_h_28313+1.0));
double _n_bend_28319=((((d::truth(_n_up_28317)&&d::truth(_n_dn_28318))&&d::truth((_n_up_28317->_p_r==(_n_q_28314->_p_r-1.0))))&&d::truth((_n_dn_28318->_p_r==(_n_q_28314->_p_r+1.0))))?(_n_q_28314->_p_x-((_n_up_28317->_p_x+_n_dn_28318->_p_x)/2.0)):0.0);
double _n_s_28320=_n_q_28314->_p_s;
d::String _n_ch_28321=(d::truth((std::fabs(_n_s_28320)<0.6))?d::String(u"|"):(d::truth((std::fabs(_n_s_28320)<3.2))?(d::truth((_n_s_28320<0.0))?d::String(u"/"):d::String(u"\\")):d::String(u"-")));
if((d::truth((std::fabs(_n_s_28320)<1.1))&&d::truth((std::fabs(_n_bend_28319)>0.45)))){d::check_cancel();(void)((_n_ch_28321=(d::truth((_n_bend_28319<0.0))?d::String(u"("):d::String(u")"))));
}
(void)(([&](){auto&& _n_array_28364=d::at(_n_g_28290,_n_q_28314->_p_r);auto _n_index_28365=_n_c_28315;auto _n_value_28366=_n_ch_28321;d::put(_n_array_28364,_n_index_28365,_n_value_28366);return _n_value_28366;})());
}}
{double _n_r_28322=0.0;
for(;d::truth((_n_r_28322<this->_n_rows_28239));(void)((_n_r_28322++))){d::check_cancel();{double _n_c_28323=0.0;
for(;d::truth((_n_c_28323<this->_n_cols_28238));(void)((_n_c_28323++))){d::check_cancel();double _n_k_28324=((_n_r_28322*this->_n_cols_28238)+_n_c_28323);
if(d::truth((d::at(this->_n_line_28252,_n_k_28324)>0.0))){d::check_cancel();continue;
}
double _n_h_28325=(d::at(this->_n_haze_28251,_n_k_28324)*0.5);
if(d::truth((_n_h_28325<0.07))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_28367=d::at(_n_g_28290,_n_r_28322);auto _n_index_28368=_n_c_28323;auto _n_value_28369=d::at(_n_RAMP_28229,([&](){auto _n_argument_28370=(double(_n_RAMP_28229.size())-1.0);auto _n_argument_28371=(1.0+std::floor((std::sqrt(_n_h_28325)*2.3)));return d::minimum({_n_argument_28370,_n_argument_28371});})());d::put(_n_array_28367,_n_index_28368,_n_value_28369);return _n_value_28369;})());
}}
}}
double _n_sc_28326=std::floor(this->_n_CX_28241);
double _n_glow_28327=([&](){auto _n_left_28372=([&](){auto _n_left_28374=(0.55+(0.25*std::sin((_n_time_28286*1.9))));auto _n_right_28375=(0.15*std::sin(((_n_time_28286*4.7)+1.0)));return (_n_left_28374+_n_right_28375);})();auto _n_right_28373=(0.12*std::sin(((_n_time_28286*11.3)+2.0)));return (_n_left_28372+_n_right_28373);})();
(void)(([&](){auto&& _n_array_28376=d::at(_n_g_28290,_n_TIP_28230);auto _n_index_28377=_n_sc_28326;auto _n_value_28378=(d::truth((_n_glow_28327>0.5))?d::String(u"*"):(d::truth((_n_glow_28327>0.2))?d::String(u"+"):d::String(u"·")));d::put(_n_array_28376,_n_index_28377,_n_value_28378);return _n_value_28378;})());
{double _n_r_28328=(_n_TIP_28230+1.0);
for(;d::truth((_n_r_28328<(this->_n_rows_28239-2.0)));(void)((_n_r_28328++))){d::check_cancel();(void)(([&](){auto&& _n_array_28379=d::at(_n_g_28290,_n_r_28328);auto _n_index_28380=_n_sc_28326;auto _n_value_28381=d::String(u"┃");d::put(_n_array_28379,_n_index_28380,_n_value_28381);return _n_value_28381;})());
}}
(void)(d::forEach(d::Array<d::String,false>{d::String(u"._______┃_______."),d::String(u"\\_______________/")},[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_28329=_a0;
double _n_k_28330=_a1;
{
{double _n_i_28331=0.0;
for(;d::truth((_n_i_28331<double(_n_s_28329.size())));(void)((_n_i_28331++))){d::check_cancel();(void)(([&](){auto&& _n_array_28382=d::at(_n_g_28290,((this->_n_rows_28239-2.0)+_n_k_28330));auto _n_index_28383=((_n_sc_28326-8.0)+_n_i_28331);auto _n_value_28384=d::at(_n_s_28329,_n_i_28331);d::put(_n_array_28382,_n_index_28383,_n_value_28384);return _n_value_28384;})());
}}

}
}));
return d::join(d::map(_n_g_28290,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_28332=_a0;
return d::join(_n_row_28332,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("smoke").cols)*ascii::catalog_meta("smoke").rows);auto _env=std::make_shared<_n_Record_28333>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &smoke_meta(){return catalog_meta("smoke");}
std::unique_ptr<Piece> make_smoke(const AsciiPieceOptions &o){return std::make_unique<Native_smoke>(o);}
}
