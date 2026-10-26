// Direct, statically typed C++ from src/pieces/smoke.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28229;
struct _n_Record_28244;
struct _n_Record_28247;
struct _n_Record_28303;
struct _n_Record_28334;
struct _n_Record_28229{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_28229> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28229>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_28244{
double _p_kx{};
double _p_ky{};
double _p_w{};
double _p_a{};
double _p_ph{};
static std::shared_ptr<_n_Record_28244> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28244>();out->_p_kx=d::decode<double>(j["kx"]);out->_p_ky=d::decode<double>(j["ky"]);out->_p_w=d::decode<double>(j["w"]);out->_p_a=d::decode<double>(j["a"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_28247{
double _p_x{};
double _p_y{};
double _p_age{};
double _p_n{};
double _p_cut{};
static std::shared_ptr<_n_Record_28247> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28247>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_age=d::decode<double>(j["age"]);out->_p_n=d::decode<double>(j["n"]);out->_p_cut=d::decode<double>(j["cut"]);return out;}
};
struct _n_Record_28303{
double _p_r{};
double _p_x{};
double _p_s{};
double _p_hold{};
static std::shared_ptr<_n_Record_28303> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28303>();out->_p_r=d::decode<double>(j["r"]);out->_p_x=d::decode<double>(j["x"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hold=d::decode<double>(j["hold"]);return out;}
};
struct _n_Record_28334{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28334> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28334>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_28237(double _a0);
double _n_smooth_28238(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_28229> _n_meta_28228=[](){return ([&](){auto _n_object_28337=std::make_shared<_n_Record_28229>();_n_object_28337->_p_name=d::String(u"smoke");_n_object_28337->_p_category=d::String(u"physics");_n_object_28337->_p_note=d::String(u"incense smoke rising straight, then curling and thinning");_n_object_28337->_p_cols=44.0;_n_object_28337->_p_rows=24.0;_n_object_28337->_p_fps=30.0;return _n_object_28337;})();}();
const d::String _n_RAMP_28230=[](){return d::String(u" .·:;+");}();
const double _n_TIP_28231=[](){return 17.0;}();
const double _n_RATE_28232=[](){return 70.0;}();
const double _n_LIFE_28233=[](){return 8.0;}();
const double _n_RISE_28234=[](){return 3.4;}();
d::Array<double,false> _n_FRAY_28235=[](){return d::Array<double,false>{2.3,3.6};}();
d::Array<d::Array<double,false>,false> _n_WAVES_28236=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{8.0,0.4,0.5,1.0},d::Array<double,false>{5.5,2.3,(-d::number(0.8)),0.9},d::Array<double,false>{3.6,1.1,1.1,0.6},d::Array<double,false>{11.0,(-d::number(1.0)),0.3,0.8}};}();
std::function<double()> _n_mulberry32_28237(double _a0){double _n_a_28257=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_28257=double(d::i32((_n_a_28257+1831565813.0))|d::i32(0.0))));
double _n_t_28258=d::imul(double(d::i32(_n_a_28257)^d::i32(double(d::u32(_n_a_28257)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_28257)));
(void)((_n_t_28258=double(d::i32((_n_t_28258+d::imul(double(d::i32(_n_t_28258)^d::i32(double(d::u32(_n_t_28258)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_28258)))))^d::i32(_n_t_28258))));
return (double(d::u32(double(d::i32(_n_t_28258)^d::i32(double(d::u32(_n_t_28258)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_smooth_28238(double _a0,double _a1,double _a2){double _n_a_28259=_a0;
double _n_b_28260=_a1;
double _n_x_28261=_a2;
{
double _n_u_28262=([&](){auto _n_argument_28338=1.0;auto _n_argument_28339=d::maximum({0.0,((_n_x_28261-_n_a_28259)/(_n_b_28260-_n_a_28259))});return d::minimum({_n_argument_28338,_n_argument_28339});})();
return ((_n_u_28262*_n_u_28262)*(3.0-(2.0*_n_u_28262)));

}
}

struct Native_smoke final:ascii::Piece{
double _n_cols_28239{};
double _n_rows_28240{};
std::function<double()> _n_rand_28241{};
double _n_CX_28242{};
d::Array<std::shared_ptr<_n_Record_28244>,false> _n_waves_28243{};
d::Array<std::shared_ptr<_n_Record_28247>,false> _n_puffs_28246{};
double _n_clock_28248{};
double _n_made_28249{};
double _n_N_28251{};
d::Array<double,true> _n_haze_28252{};
d::Array<double,true> _n_line_28253{};
d::Array<double,false> _n_X_28254{};
d::Array<double,false> _n_Y_28255{};
double _n_last_28256{};
std::function<d::String(double,std::shared_ptr<_n_Record_28334>)> _render;
d::Array<double,false> _n_flow_28245(double _a0,double _a1,double _a2){double _n_x_28268=_a0;
double _n_y_28269=_a1;
double _n_t_28270=_a2;
{
double _n_k_28271=1.05;
double _n_s_28272=((_n_k_28271*(_n_y_28269-((_n_RISE_28234*0.8)*_n_t_28270)))+(0.4*std::sin((_n_t_28270*0.37))));
double _n_g_28273=std::exp((-d::number(std::pow((_n_x_28268/2.2),2.0))));
double _n_lift_28274=([&](){auto _n_left_28386=(1.7*_n_smooth_28238(1.5,7.0,_n_y_28269));auto _n_right_28387=(1.0-(0.5*_n_smooth_28238(9.0,15.0,_n_y_28269)));return (_n_left_28386*_n_right_28387);})();
double _n_u_28275=((_n_lift_28274*_n_g_28273)*std::cos(_n_s_28272));
double _n_v_28276=(((((_n_lift_28274*_n_g_28273)*std::sin(_n_s_28272))*2.0)*_n_x_28268)/((2.2*2.2)*_n_k_28271));
double _n_e_28277=_n_smooth_28238(6.0,12.0,_n_y_28269);
double _n_yy_28278=(_n_y_28269-((_n_RISE_28234*0.7)*_n_t_28270));
for(auto &&_n_item_28388:this->_n_waves_28243){d::check_cancel();std::shared_ptr<_n_Record_28244> _n_q_28279=_n_item_28388;
{
double _n_c_28280=((std::cos(((((_n_q_28279->_p_kx*_n_x_28268)+(_n_q_28279->_p_ky*_n_yy_28278))+(_n_q_28279->_p_w*_n_t_28270))+_n_q_28279->_p_ph))*_n_q_28279->_p_a)*_n_e_28277);
(void)((_n_u_28275=(_n_u_28275+((_n_c_28280*_n_q_28279->_p_ky)/1.2))));
(void)((_n_v_28276=(_n_v_28276-((_n_c_28280*_n_q_28279->_p_kx)/1.2))));

}
}
return d::Array<double,false>{(_n_u_28275+([&](){auto _n_left_28389=(0.15*std::sin((_n_t_28270*0.55)));auto _n_right_28390=_n_smooth_28238(0.5,5.0,_n_y_28269);return (_n_left_28389*_n_right_28390);})()),((_n_RISE_28234*(1.0-(0.35*_n_smooth_28238(3.0,15.0,_n_y_28269))))+(0.5*_n_v_28276))};

}
}

void _n_step_28250(double _a0){double _n_dt_28281=_a0;
{
(void)((this->_n_clock_28248=(this->_n_clock_28248+_n_dt_28281)));
{for(;d::truth((this->_n_made_28249<(this->_n_clock_28248*_n_RATE_28232)));(void)((this->_n_made_28249++))){d::check_cancel();double _n_age_28282=(this->_n_clock_28248-(this->_n_made_28249/_n_RATE_28232));
(void)(this->_n_puffs_28246.push(([&](){auto _n_object_28392=std::make_shared<_n_Record_28247>();_n_object_28392->_p_x=0.0;_n_object_28392->_p_y=(_n_age_28282*_n_RISE_28234);_n_object_28392->_p_age=_n_age_28282;_n_object_28392->_p_n=this->_n_made_28249;_n_object_28392->_p_cut=([&](){auto _n_left_28393=(this->_n_rand_28241()*0.7);auto _n_right_28394=(0.3*std::sin((this->_n_made_28249*0.09)));return (_n_left_28393+_n_right_28394);})();return _n_object_28392;})()));
}}
for(auto &&_n_item_28395:this->_n_puffs_28246){d::check_cancel();std::shared_ptr<_n_Record_28247> _n_p_28283=_n_item_28395;
{
auto _n_binding_28396=this->_n_flow_28245(_n_p_28283->_p_x,_n_p_28283->_p_y,this->_n_clock_28248);
double _n_u_28284=d::at(_n_binding_28396,0.0);
double _n_v_28285=d::at(_n_binding_28396,1.0);
(void)((_n_p_28283->_p_x=(_n_p_28283->_p_x+(_n_u_28284*_n_dt_28281))));
(void)((_n_p_28283->_p_y=(_n_p_28283->_p_y+(_n_v_28285*_n_dt_28281))));
(void)((_n_p_28283->_p_age=(_n_p_28283->_p_age+_n_dt_28281)));

}
}
while((d::truth(double(this->_n_puffs_28246.size()))&&d::truth(([&]()->bool{auto _n_logical_28397=(d::at(this->_n_puffs_28246,0.0)->_p_age>_n_LIFE_28233);return d::truth(_n_logical_28397)?_n_logical_28397:(d::at(this->_n_puffs_28246,0.0)->_p_y>(_n_TIP_28231+3.0));})()))){d::check_cancel();(void)(this->_n_puffs_28246.shift());
}

}
}

explicit Native_smoke(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_28340=_n_meta_28228;
this->_n_cols_28239=_n_binding_28340->_p_cols;
this->_n_rows_28240=_n_binding_28340->_p_rows;
this->_n_rand_28241=_n_mulberry32_28237(11.0);
this->_n_CX_28242=(std::floor((this->_n_cols_28239/2.0))+0.5);
this->_n_waves_28243=d::map(_n_WAVES_28236,[&]( d::Array<double,false> _a0) mutable ->std::shared_ptr<_n_Record_28244>{auto _n_binding_28341=_a0;
double _n_len_28263=d::at(_n_binding_28341,0.0);
double _n_ang_28264=d::at(_n_binding_28341,1.0);
double _n_drift_28265=d::at(_n_binding_28341,2.0);
double _n_amp_28266=d::at(_n_binding_28341,3.0);
{
double _n_k_28267=((2.0*ascii::PI)/_n_len_28263);
return ([&](){auto _n_object_28343=std::make_shared<_n_Record_28244>();_n_object_28343->_p_kx=(_n_k_28267*std::cos(_n_ang_28264));_n_object_28343->_p_ky=(_n_k_28267*std::sin(_n_ang_28264));_n_object_28343->_p_w=_n_drift_28265;_n_object_28343->_p_a=(_n_amp_28266*1.6);_n_object_28343->_p_ph=(this->_n_rand_28241()*6.283);return _n_object_28343;})();

}
});
this->_n_puffs_28246=d::Array<std::shared_ptr<_n_Record_28247>,false>{};
this->_n_clock_28248=0.0;
this->_n_made_28249=0.0;
{double _n_i_28286=0.0;
for(;d::truth((_n_i_28286<270.0));(void)((_n_i_28286++))){d::check_cancel();(void)(this->_n_step_28250((1.0/30.0)));
}}
this->_n_N_28251=(this->_n_cols_28239*this->_n_rows_28240);
this->_n_haze_28252=d::Array<double,true>(size_t(this->_n_N_28251));
this->_n_line_28253=d::Array<double,true>(size_t(this->_n_N_28251));
this->_n_X_28254=d::Array<double,false>{};
this->_n_Y_28255=d::Array<double,false>{};
this->_n_last_28256=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_28334> _a1) mutable ->d::String{double _n_time_28287=_a0;
{
double _n_dt_28288=([&](){auto _n_argument_28344=0.1;auto _n_argument_28345=d::maximum({0.0,(_n_time_28287-this->_n_last_28256)});return d::minimum({_n_argument_28344,_n_argument_28345});})();
(void)((this->_n_last_28256=_n_time_28287));
{for(;d::truth((_n_dt_28288>1e-9));(void)((_n_dt_28288=(_n_dt_28288-(1.0/30.0))))){d::check_cancel();(void)(this->_n_step_28250(d::minimum({_n_dt_28288,(1.0/30.0)})));
}}
double _n_n_28289=double(this->_n_puffs_28246.size());
{double _n_i_28290=0.0;
for(;d::truth((_n_i_28290<_n_n_28289));(void)((_n_i_28290++))){d::check_cancel();(void)((([&](){auto&& _n_array_28346=this->_n_X_28254;auto _n_index_28347=_n_i_28290;auto _n_value_28348=(this->_n_CX_28242+(2.0*d::at(this->_n_puffs_28246,_n_i_28290)->_p_x));d::put(_n_array_28346,_n_index_28347,_n_value_28348);return _n_value_28348;})(),([&](){auto&& _n_array_28349=this->_n_Y_28255;auto _n_index_28350=_n_i_28290;auto _n_value_28351=((_n_TIP_28231+0.5)-d::at(this->_n_puffs_28246,_n_i_28290)->_p_y);d::put(_n_array_28349,_n_index_28350,_n_value_28351);return _n_value_28351;})()));
}}
d::Array<d::Array<d::String,false>,false> _n_g_28291=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_28240,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_28239)).fill(d::String(u" "));}));
(void)(this->_n_haze_28252.fill(0.0));
(void)(this->_n_line_28253.fill(0.0));
{double _n_i_28292=0.0;
for(;d::truth((_n_i_28292<_n_n_28289));(void)((_n_i_28292++))){d::check_cancel();std::shared_ptr<_n_Record_28247> _n_p_28293=d::at(this->_n_puffs_28246,_n_i_28292);
double _n_loose_28294=_n_smooth_28238((d::at(_n_FRAY_28235,0.0)-0.4),d::at(_n_FRAY_28235,1.0),_n_p_28293->_p_age);
if(d::truth((_n_loose_28294<=0.0))){d::check_cancel();continue;
}
double _n_rad_28295=(0.55+(0.2*((_n_p_28293->_p_age-d::at(_n_FRAY_28235,0.0))+0.4)));
double _n_m_28296=((_n_loose_28294*std::exp(((-d::number((_n_p_28293->_p_age-d::at(_n_FRAY_28235,0.0))))/1.7)))/(_n_rad_28295*_n_rad_28295));
double _n_col_28297=d::at(this->_n_X_28254,_n_i_28292);
double _n_row_28298=d::at(this->_n_Y_28255,_n_i_28292);
{double _n_rr_28299=([&](){auto _n_argument_28352=0.0;auto _n_argument_28353=std::floor((_n_row_28298-_n_rad_28295));return d::maximum({_n_argument_28352,_n_argument_28353});})();
for(;d::truth((_n_rr_28299<=d::minimum({(this->_n_rows_28240-1.0),(_n_row_28298+_n_rad_28295)})));(void)((_n_rr_28299++))){d::check_cancel();{double _n_cc_28300=([&](){auto _n_argument_28354=0.0;auto _n_argument_28355=std::floor((_n_col_28297-(2.0*_n_rad_28295)));return d::maximum({_n_argument_28354,_n_argument_28355});})();
for(;d::truth((_n_cc_28300<=d::minimum({(this->_n_cols_28239-1.0),(_n_col_28297+(2.0*_n_rad_28295))})));(void)((_n_cc_28300++))){d::check_cancel();double _n_d2_28301=((std::pow((((_n_cc_28300+0.5)-_n_col_28297)/2.0),2.0)+std::pow(((_n_rr_28299+0.5)-_n_row_28298),2.0))/(_n_rad_28295*_n_rad_28295));
if(d::truth((_n_d2_28301<1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_28356=this->_n_haze_28252;auto _n_index_28357=((_n_rr_28299*this->_n_cols_28239)+_n_cc_28300);auto _n_value_28358=(d::at(_n_array_28356,_n_index_28357)+((_n_m_28296*(1.0-_n_d2_28301))*(1.0-_n_d2_28301)));d::put(_n_array_28356,_n_index_28357,_n_value_28358);return _n_value_28358;})());
}
}}
}}
}}
d::Array<std::shared_ptr<_n_Record_28303>,false> _n_hits_28302=d::Array<std::shared_ptr<_n_Record_28303>,false>{};
{double _n_i_28304=0.0;
for(;d::truth(((_n_i_28304+1.0)<_n_n_28289));(void)((_n_i_28304++))){d::check_cancel();std::shared_ptr<_n_Record_28247> _n_p_28305=d::at(this->_n_puffs_28246,_n_i_28304);
double _n_hold_28306=(1.0-_n_smooth_28238(d::at(_n_FRAY_28235,0.0),d::at(_n_FRAY_28235,1.0),_n_p_28305->_p_age));
if(d::truth((_n_hold_28306<(_n_p_28305->_p_cut*0.9)))){d::check_cancel();continue;
}
double _n_y0_28307=d::at(this->_n_Y_28255,_n_i_28304);
double _n_y1_28308=d::at(this->_n_Y_28255,(_n_i_28304+1.0));
double _n_r_28309=std::floor((d::maximum({_n_y0_28307,_n_y1_28308})-0.5));
if(((d::truth((_n_r_28309<0.0))||d::truth((d::minimum({_n_y0_28307,_n_y1_28308})>(_n_r_28309+0.5))))||d::truth((_n_y0_28307==_n_y1_28308)))){d::check_cancel();continue;
}
double _n_u_28310=(((_n_r_28309+0.5)-_n_y0_28307)/(_n_y1_28308-_n_y0_28307));
double _n_x_28311=(d::at(this->_n_X_28254,_n_i_28304)+(_n_u_28310*(d::at(this->_n_X_28254,(_n_i_28304+1.0))-d::at(this->_n_X_28254,_n_i_28304))));
double _n_a_28312=d::maximum({0.0,(_n_i_28304-3.0)});
double _n_b_28313=d::minimum({(_n_n_28289-1.0),(_n_i_28304+4.0)});
(void)(_n_hits_28302.push(([&](){auto _n_object_28360=std::make_shared<_n_Record_28303>();_n_object_28360->_p_r=_n_r_28309;_n_object_28360->_p_x=_n_x_28311;_n_object_28360->_p_s=((d::at(this->_n_X_28254,_n_b_28313)-d::at(this->_n_X_28254,_n_a_28312))/([&]()->double{auto _n_logical_28361=(d::at(this->_n_Y_28255,_n_b_28313)-d::at(this->_n_Y_28255,_n_a_28312));return d::truth(_n_logical_28361)?_n_logical_28361:0.000001;})());_n_object_28360->_p_hold=_n_hold_28306;return _n_object_28360;})()));
}}
{double _n_h_28314=0.0;
for(;d::truth((_n_h_28314<double(_n_hits_28302.size())));(void)((_n_h_28314++))){d::check_cancel();std::shared_ptr<_n_Record_28303> _n_q_28315=d::at(_n_hits_28302,_n_h_28314);
double _n_c_28316=std::floor(_n_q_28315->_p_x);
if((d::truth((_n_c_28316<0.0))||d::truth((_n_c_28316>=this->_n_cols_28239)))){d::check_cancel();continue;
}
double _n_k_28317=((_n_q_28315->_p_r*this->_n_cols_28239)+_n_c_28316);
if(d::truth((d::at(this->_n_line_28253,_n_k_28317)>=_n_q_28315->_p_hold))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_28362=this->_n_line_28253;auto _n_index_28363=_n_k_28317;auto _n_value_28364=_n_q_28315->_p_hold;d::put(_n_array_28362,_n_index_28363,_n_value_28364);return _n_value_28364;})());
std::shared_ptr<_n_Record_28303> _n_up_28318=d::at(_n_hits_28302,(_n_h_28314-1.0));
std::shared_ptr<_n_Record_28303> _n_dn_28319=d::at(_n_hits_28302,(_n_h_28314+1.0));
double _n_bend_28320=((((d::truth(_n_up_28318)&&d::truth(_n_dn_28319))&&d::truth((_n_up_28318->_p_r==(_n_q_28315->_p_r-1.0))))&&d::truth((_n_dn_28319->_p_r==(_n_q_28315->_p_r+1.0))))?(_n_q_28315->_p_x-((_n_up_28318->_p_x+_n_dn_28319->_p_x)/2.0)):0.0);
double _n_s_28321=_n_q_28315->_p_s;
d::String _n_ch_28322=(d::truth((std::fabs(_n_s_28321)<0.6))?d::String(u"|"):(d::truth((std::fabs(_n_s_28321)<3.2))?(d::truth((_n_s_28321<0.0))?d::String(u"/"):d::String(u"\\")):d::String(u"-")));
if((d::truth((std::fabs(_n_s_28321)<1.1))&&d::truth((std::fabs(_n_bend_28320)>0.45)))){d::check_cancel();(void)((_n_ch_28322=(d::truth((_n_bend_28320<0.0))?d::String(u"("):d::String(u")"))));
}
(void)(([&](){auto&& _n_array_28365=d::at(_n_g_28291,_n_q_28315->_p_r);auto _n_index_28366=_n_c_28316;auto _n_value_28367=_n_ch_28322;d::put(_n_array_28365,_n_index_28366,_n_value_28367);return _n_value_28367;})());
}}
{double _n_r_28323=0.0;
for(;d::truth((_n_r_28323<this->_n_rows_28240));(void)((_n_r_28323++))){d::check_cancel();{double _n_c_28324=0.0;
for(;d::truth((_n_c_28324<this->_n_cols_28239));(void)((_n_c_28324++))){d::check_cancel();double _n_k_28325=((_n_r_28323*this->_n_cols_28239)+_n_c_28324);
if(d::truth((d::at(this->_n_line_28253,_n_k_28325)>0.0))){d::check_cancel();continue;
}
double _n_h_28326=(d::at(this->_n_haze_28252,_n_k_28325)*0.5);
if(d::truth((_n_h_28326<0.07))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_28368=d::at(_n_g_28291,_n_r_28323);auto _n_index_28369=_n_c_28324;auto _n_value_28370=d::at(_n_RAMP_28230,([&](){auto _n_argument_28371=(double(_n_RAMP_28230.size())-1.0);auto _n_argument_28372=(1.0+std::floor((std::sqrt(_n_h_28326)*2.3)));return d::minimum({_n_argument_28371,_n_argument_28372});})());d::put(_n_array_28368,_n_index_28369,_n_value_28370);return _n_value_28370;})());
}}
}}
double _n_sc_28327=std::floor(this->_n_CX_28242);
double _n_glow_28328=([&](){auto _n_left_28373=([&](){auto _n_left_28375=(0.55+(0.25*std::sin((_n_time_28287*1.9))));auto _n_right_28376=(0.15*std::sin(((_n_time_28287*4.7)+1.0)));return (_n_left_28375+_n_right_28376);})();auto _n_right_28374=(0.12*std::sin(((_n_time_28287*11.3)+2.0)));return (_n_left_28373+_n_right_28374);})();
(void)(([&](){auto&& _n_array_28377=d::at(_n_g_28291,_n_TIP_28231);auto _n_index_28378=_n_sc_28327;auto _n_value_28379=(d::truth((_n_glow_28328>0.5))?d::String(u"*"):(d::truth((_n_glow_28328>0.2))?d::String(u"+"):d::String(u"·")));d::put(_n_array_28377,_n_index_28378,_n_value_28379);return _n_value_28379;})());
{double _n_r_28329=(_n_TIP_28231+1.0);
for(;d::truth((_n_r_28329<(this->_n_rows_28240-2.0)));(void)((_n_r_28329++))){d::check_cancel();(void)(([&](){auto&& _n_array_28380=d::at(_n_g_28291,_n_r_28329);auto _n_index_28381=_n_sc_28327;auto _n_value_28382=d::String(u"┃");d::put(_n_array_28380,_n_index_28381,_n_value_28382);return _n_value_28382;})());
}}
(void)(d::forEach(d::Array<d::String,false>{d::String(u"._______┃_______."),d::String(u"\\_______________/")},[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_28330=_a0;
double _n_k_28331=_a1;
{
{double _n_i_28332=0.0;
for(;d::truth((_n_i_28332<double(_n_s_28330.size())));(void)((_n_i_28332++))){d::check_cancel();(void)(([&](){auto&& _n_array_28383=d::at(_n_g_28291,((this->_n_rows_28240-2.0)+_n_k_28331));auto _n_index_28384=((_n_sc_28327-8.0)+_n_i_28332);auto _n_value_28385=d::at(_n_s_28330,_n_i_28332);d::put(_n_array_28383,_n_index_28384,_n_value_28385);return _n_value_28385;})());
}}

}
}));
return d::join(d::map(_n_g_28291,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_28333=_a0;
return d::join(_n_row_28333,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("smoke").cols)*ascii::catalog_meta("smoke").rows);auto _env=std::make_shared<_n_Record_28334>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &smoke_meta(){return catalog_meta("smoke");}
std::unique_ptr<Piece> make_smoke(const AsciiPieceOptions &o){return std::make_unique<Native_smoke>(o);}
}
