// Direct, statically typed C++ from src/pieces/heartbeat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13624;
struct _n_Record_13625;
struct _n_Record_13712;
struct _n_Record_13713;
struct _n_Record_13722;
struct _n_Record_13624{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_13625> _p_options{};
static std::shared_ptr<_n_Record_13624> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13624>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_13625>>(j["options"]);return out;}
};
struct _n_Record_13625{
double _p_bpm{};
static std::shared_ptr<_n_Record_13625> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13625>();out->_p_bpm=d::decode<double>(j["bpm"]);return out;}
};
struct _n_Record_13712{
std::optional<double> _p_bpm{};
static std::shared_ptr<_n_Record_13712> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13712>();out->_p_bpm=d::decode<std::optional<double>>(j["bpm"]);return out;}
};
struct _n_Record_13713{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13713> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13713>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_13722{
d::String _p_1100{};
d::String _p_0011{};
d::String _p_0110{};
d::String _p_1010{};
d::String _p_0101{};
d::String _p_1001{};
static std::shared_ptr<_n_Record_13722> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13722>();out->_p_1100=d::decode<d::String>(j["1100"]);out->_p_0011=d::decode<d::String>(j["0011"]);out->_p_0110=d::decode<d::String>(j["0110"]);out->_p_1010=d::decode<d::String>(j["1010"]);out->_p_0101=d::decode<d::String>(j["0101"]);out->_p_1001=d::decode<d::String>(j["1001"]);return out;}
};
std::function<double()> _n_mulberry32_13637(double _a0);
std::shared_ptr<_n_Record_13624> _n_meta_13623=[](){return ([&](){auto _n_object_13718=std::make_shared<_n_Record_13624>();_n_object_13718->_p_name=d::String(u"heartbeat");_n_object_13718->_p_category=d::String(u"data");_n_object_13718->_p_note=d::String(u"an ecg trace sweeping over its last pass, with a bpm readout");_n_object_13718->_p_cols=72.0;_n_object_13718->_p_rows=15.0;_n_object_13718->_p_fps=25.0;_n_object_13718->_p_options=([&](){auto _n_object_13720=std::make_shared<_n_Record_13625>();_n_object_13720->_p_bpm=72.0;return _n_object_13720;})();return _n_object_13718;})();}();
const double _n_SPEED_13626=[](){return 25.0;}();
const double _n_W_13627=[](){return 46.0;}();
const double _n_GAP_13628=[](){return 4.0;}();
const double _n_BASE_13629=[](){return 10.0;}();
d::Array<double,false> _n_BEAT_13630=[](){return d::Array<double,false>{0.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,2.0,2.0,1.0,0.0};}();
const double _n_R_AT_13631=[](){return 7.0;}();
const double _n_R_TOP_13632=[](){return 7.0;}();
d::Dict<double,d::Array<d::String,false>> _n_QRS_13633=[](){return ([&](){d::Dict<double,d::Array<d::String,false>> _n_dictionary_13721;_n_dictionary_13721.set((_n_R_AT_13631-1.0),d::Array<d::String,false>{d::String(u"╮"),d::String(u"╰")});_n_dictionary_13721.set((_n_R_AT_13631+1.0),d::Array<d::String,false>{d::String(u"╭"),d::String(u"╯")});return _n_dictionary_13721;})();}();
d::Array<d::Array<d::String,false>,false> _n_FONT_13634=[](){return d::map(d::Array<d::String,false>{d::String(u"###,#.#,#.#,#.#,###"),d::String(u"##.,.#.,.#.,.#.,###"),d::String(u"###,..#,###,#..,###"),d::String(u"###,..#,###,..#,###"),d::String(u"#.#,#.#,###,..#,..#"),d::String(u"###,#..,###,..#,###"),d::String(u"###,#..,###,#.#,###"),d::String(u"###,..#,..#,..#,..#"),d::String(u"###,#.#,###,#.#,###"),d::String(u"###,#.#,###,..#,###")},[&]( d::String _a0) mutable ->d::Array<d::String,false>{d::String _n_d_13656=_a0;
return d::split(_n_d_13656,d::String(u","));});}();
d::Array<d::Array<d::String,false>,false> _n_HEARTS_13635=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u" ▄█▄█▄ "),d::String(u"  ▀█▀  "),d::String(u"       ")},d::Array<d::String,false>{d::String(u"▄██▄██▄"),d::String(u" ▀███▀ "),d::String(u"   ▀   ")},d::Array<d::String,false>{d::String(u"▄██▄██▄"),d::String(u"▀█████▀"),d::String(u"  ▀█▀  ")}};}();
d::Dict<d::String,d::String> _n_JOIN_13636=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_13723;_n_dictionary_13723.set(d::String(u"1100"),d::String(u"│"));_n_dictionary_13723.set(d::String(u"0011"),d::String(u"─"));_n_dictionary_13723.set(d::String(u"0110"),d::String(u"╮"));_n_dictionary_13723.set(d::String(u"1010"),d::String(u"╯"));_n_dictionary_13723.set(d::String(u"0101"),d::String(u"╭"));_n_dictionary_13723.set(d::String(u"1001"),d::String(u"╰"));return _n_dictionary_13723;})();}();
std::function<double()> _n_mulberry32_13637(double _a0){double _n_a_13657=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_13657=double(d::i32((_n_a_13657+1831565813.0))|d::i32(0.0))));
double _n_t_13658=d::imul(double(d::i32(_n_a_13657)^d::i32(double(d::u32(_n_a_13657)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_13657)));
(void)((_n_t_13658=double(d::i32((_n_t_13658+d::imul(double(d::i32(_n_t_13658)^d::i32(double(d::u32(_n_t_13658)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_13658)))))^d::i32(_n_t_13658))));
return (double(d::u32(double(d::i32(_n_t_13658)^d::i32(double(d::u32(_n_t_13658)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_heartbeat final:ascii::Piece{
double _n_bpm_13638{};
double _n_cols_13639{};
double _n_rows_13640{};
double _n_X0_13641{};
double _n_PX_13642{};
double _n_PW_13643{};
std::function<double()> _n_rand_13644{};
d::Array<double,false> _n_beats_13645{};
d::Array<d::Array<d::String,false>,false> _n_grid_13653{};
std::function<d::String(double,std::shared_ptr<_n_Record_13713>)> _render;
void _n_extend_13646(double _a0){double _n_g_13659=_a0;
{
while(d::truth((d::at(this->_n_beats_13645,(double(this->_n_beats_13645.size())-1.0))<=_n_g_13659))){d::check_cancel();double _n_n_13660=double(this->_n_beats_13645.size());
double _n_rate_13661=([&](){auto _n_left_13764=([&](){auto _n_left_13766=([&](){auto _n_argument_13768=30.0;auto _n_argument_13769=d::minimum({199.0,this->_n_bpm_13638});return d::maximum({_n_argument_13768,_n_argument_13769});})();auto _n_right_13767=(2.5*std::sin((_n_n_13660*0.8)));return (_n_left_13766+_n_right_13767);})();auto _n_right_13765=((this->_n_rand_13644()-0.5)*2.0);return (_n_left_13764+_n_right_13765);})();
(void)(this->_n_beats_13645.push((d::at(this->_n_beats_13645,(_n_n_13660-1.0))+((_n_SPEED_13626*60.0)/_n_rate_13661))));
}

}
}

double _n_beatOf_13647(double _a0){double _n_g_13662=_a0;
{
double _n_lo_13663=0.0;
double _n_hi_13664=(double(this->_n_beats_13645.size())-1.0);
while(d::truth((_n_lo_13663<_n_hi_13664))){d::check_cancel();double _n_mid_13665=double(d::i32(((_n_lo_13663+_n_hi_13664)+1.0))>>(d::u32(1.0)&31));
if(d::truth((d::at(this->_n_beats_13645,_n_mid_13665)<=_n_g_13662))){d::check_cancel();(void)((_n_lo_13663=_n_mid_13665));
}else {d::check_cancel();(void)((_n_hi_13664=(_n_mid_13665-1.0)));
}
}
return _n_lo_13663;

}
}

double _n_start_13648(double _a0){double _n_n_13666=_a0;
return std::ceil(d::at(this->_n_beats_13645,_n_n_13666));}

double _n_cut_13649(double _a0){double _n_n_13667=_a0;
return ([&](){auto _n_argument_13770=0.0;auto _n_argument_13771=([&](){auto _n_argument_13772=4.0;auto _n_argument_13773=(double(_n_BEAT_13630.size())-([&](){auto _n_left_13774=this->_n_start_13648((_n_n_13667+1.0));auto _n_right_13775=this->_n_start_13648(_n_n_13667);return (_n_left_13774-_n_right_13775);})());return d::minimum({_n_argument_13772,_n_argument_13773});})();return d::maximum({_n_argument_13770,_n_argument_13771});})();}

double _n_phase_13650(double _a0,double _a1){double _n_n_13668=_a0;
double _n_g_13669=_a1;
{
double _n_c_13670=this->_n_cut_13649(_n_n_13668);
double _n_pr_13671=double(d::i32((_n_c_13670+1.0))>>(d::u32(1.0)&31));
double _n_k_13672=(_n_g_13669-this->_n_start_13648(_n_n_13668));
if(d::truth((_n_k_13672>=((_n_R_AT_13631-1.0)-_n_pr_13671)))){d::check_cancel();(void)((_n_k_13672=(_n_k_13672+_n_pr_13671)));
}
if(d::truth((_n_k_13672>=(12.0-(_n_c_13670-_n_pr_13671))))){d::check_cancel();(void)((_n_k_13672=(_n_k_13672+(_n_c_13670-_n_pr_13671))));
}
return _n_k_13672;

}
}

double _n_level_13651(double _a0){double _n_g_13673=_a0;
{
double _n_n_13674=this->_n_beatOf_13647(_n_g_13673);
return ([&](){auto _n_argument_13776=([&]()->double{auto _n_logical_13777=d::at(_n_BEAT_13630,this->_n_phase_13650(_n_n_13674,_n_g_13673));return d::has(_n_BEAT_13630,this->_n_phase_13650(_n_n_13674,_n_g_13673))?_n_logical_13777:0.0;})();auto _n_argument_13778=([&]()->double{auto _n_logical_13779=d::at(_n_BEAT_13630,this->_n_phase_13650((_n_n_13674-1.0),_n_g_13673));return d::has(_n_BEAT_13630,this->_n_phase_13650((_n_n_13674-1.0),_n_g_13673))?_n_logical_13779:0.0;})();return d::maximum({_n_argument_13776,_n_argument_13778});})();

}
}

double _n_rAt_13652(double _a0){double _n_n_13675=_a0;
return ([&](){auto _n_left_13780=(this->_n_start_13648(_n_n_13675)+_n_R_AT_13631);auto _n_right_13781=double(d::i32((this->_n_cut_13649(_n_n_13675)+1.0))>>(d::u32(1.0)&31));return (_n_left_13780-_n_right_13781);})();}

void _n_put_13654(double _a0,double _a1,d::String _a2){double _n_r_13676=_a0;
double _n_c_13677=_a1;
d::String _n_s_13678=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_13782;for(const auto &_v:_n_s_13678)_n_array_13782.push(_v);return _n_array_13782;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_13679=_a0;
double _n_i_13680=_a1;
return ([&](){auto&& _n_array_13783=d::at(this->_n_grid_13653,_n_r_13676);auto _n_index_13784=(_n_c_13677+_n_i_13680);auto _n_value_13785=_n_ch_13679;d::put(_n_array_13783,_n_index_13784,_n_value_13785);return _n_value_13785;})();});}

explicit Native_heartbeat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13724=d::decode<std::shared_ptr<_n_Record_13712>>(_options.data);
this->_n_bpm_13638=(d::present(_n_binding_13724->_p_bpm)?d::read(_n_binding_13724->_p_bpm):_n_meta_13623->_p_options->_p_bpm);
auto _n_binding_13725=_n_meta_13623;
this->_n_cols_13639=_n_binding_13725->_p_cols;
this->_n_rows_13640=_n_binding_13725->_p_rows;
this->_n_X0_13641=2.0;
this->_n_PX_13642=((this->_n_X0_13641+_n_W_13627)+3.0);
this->_n_PW_13643=((this->_n_cols_13639-this->_n_PX_13642)-1.0);
this->_n_rand_13644=_n_mulberry32_13637(7240.0);
this->_n_beats_13645=d::Array<double,false>{(-d::number(400.0))};
this->_n_grid_13653=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_13640,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_13639)).fill(d::String(u" "));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_13713> _a1) mutable ->d::String{double _n_t_13681=_a0;
{
double _n_H_13682=(((3.0*_n_W_13627)+31.0)+std::floor((_n_t_13681*_n_SPEED_13626)));
(void)(this->_n_extend_13646((_n_H_13682+2.0)));
for(auto &&_n_item_13726:this->_n_grid_13653){d::check_cancel();d::Array<d::String,false> _n_row_13683=_n_item_13726;
(void)(_n_row_13683.fill(d::String(u" ")));
}
(void)(this->_n_put_13654(1.0,this->_n_X0_13641,d::String(u"ecg  ii")));
(void)(this->_n_put_13654(1.0,((this->_n_X0_13641+_n_W_13627)-7.0),d::String(u"25 mm/s")));
{double _n_r_13684=1.0;
for(;d::truth((_n_r_13684<(this->_n_rows_13640-1.0)));(void)((_n_r_13684++))){d::check_cancel();(void)(([&](){auto&& _n_array_13727=d::at(this->_n_grid_13653,_n_r_13684);auto _n_index_13728=(this->_n_PX_13642-2.0);auto _n_value_13729=d::String(u"│");d::put(_n_array_13727,_n_index_13728,_n_value_13729);return _n_value_13729;})());
}}
double _n_head_13685=d::mod(_n_H_13682,_n_W_13627);
{double _n_c_13686=0.0;
for(;d::truth((_n_c_13686<_n_W_13627));(void)((_n_c_13686++))){d::check_cancel();double _n_ahead_13687=d::mod(((_n_c_13686-_n_head_13685)+_n_W_13627),_n_W_13627);
if((d::truth((_n_ahead_13687>0.0))&&d::truth((_n_ahead_13687<=_n_GAP_13628)))){d::check_cancel();continue;
}
double _n_x_13688=(this->_n_X0_13641+_n_c_13686);
if(d::truth((d::mod(_n_c_13686,5.0)==2.0))){d::check_cancel();{double _n_r_13689=(_n_BASE_13629-6.0);
for(;d::truth((_n_r_13689<(this->_n_rows_13640-1.0)));(void)((_n_r_13689=(_n_r_13689+3.0)))){d::check_cancel();if(d::truth((_n_r_13689!=_n_BASE_13629))){d::check_cancel();(void)(([&](){auto&& _n_array_13730=d::at(this->_n_grid_13653,_n_r_13689);auto _n_index_13731=_n_x_13688;auto _n_value_13732=d::String(u"·");d::put(_n_array_13730,_n_index_13731,_n_value_13732);return _n_value_13732;})());
}
}}
}
double _n_g_13690=(_n_H_13682-d::mod(((_n_head_13685-_n_c_13686)+_n_W_13627),_n_W_13627));
double _n_k_13691=([&](){auto _n_argument_13733=this->_n_beatOf_13647(_n_g_13690);auto _n_argument_13734=_n_g_13690;return this->_n_phase_13650(_n_argument_13733,_n_argument_13734);})();
if(d::truth((_n_k_13691==_n_R_AT_13631))){d::check_cancel();(void)(([&](){auto&& _n_array_13735=d::at(this->_n_grid_13653,(_n_BASE_13629-_n_R_TOP_13632));auto _n_index_13736=_n_x_13688;auto _n_value_13737=d::String(u"╷");d::put(_n_array_13735,_n_index_13736,_n_value_13737);return _n_value_13737;})());
{double _n_r_13692=((_n_BASE_13629-_n_R_TOP_13632)+1.0);
for(;d::truth((_n_r_13692<=_n_BASE_13629));(void)((_n_r_13692++))){d::check_cancel();(void)(([&](){auto&& _n_array_13738=d::at(this->_n_grid_13653,_n_r_13692);auto _n_index_13739=_n_x_13688;auto _n_value_13740=d::String(u"│");d::put(_n_array_13738,_n_index_13739,_n_value_13740);return _n_value_13740;})());
}}
(void)(([&](){auto&& _n_array_13741=d::at(this->_n_grid_13653,(_n_BASE_13629+1.0));auto _n_index_13742=_n_x_13688;auto _n_value_13743=d::String(u"┴");d::put(_n_array_13741,_n_index_13742,_n_value_13743);return _n_value_13743;})());
continue;
}
if(d::truth(_n_QRS_13633.get(_n_k_13691))){d::check_cancel();(void)(([&](){auto&& _n_array_13744=d::at(this->_n_grid_13653,_n_BASE_13629);auto _n_index_13745=_n_x_13688;auto _n_value_13746=d::at(_n_QRS_13633.get(_n_k_13691),0.0);d::put(_n_array_13744,_n_index_13745,_n_value_13746);return _n_value_13746;})());
(void)(([&](){auto&& _n_array_13747=d::at(this->_n_grid_13653,(_n_BASE_13629+1.0));auto _n_index_13748=_n_x_13688;auto _n_value_13749=d::at(_n_QRS_13633.get(_n_k_13691),1.0);d::put(_n_array_13747,_n_index_13748,_n_value_13749);return _n_value_13749;})());
continue;
}
double _n_a_13693=(_n_BASE_13629-this->_n_level_13651(_n_g_13690));
double _n_b_13694=(_n_BASE_13629-this->_n_level_13651((_n_g_13690+1.0)));
double _n_top_13695=d::minimum({_n_a_13693,_n_b_13694});
double _n_bot_13696=d::maximum({_n_a_13693,_n_b_13694});
{double _n_r_13697=_n_top_13695;
for(;d::truth((_n_r_13697<=_n_bot_13696));(void)((_n_r_13697++))){d::check_cancel();d::String _n_key_13698=(d::String(u"")+d::string((+d::number((_n_r_13697>_n_top_13695))))+d::String(u"")+d::string((+d::number((_n_r_13697<_n_bot_13696))))+d::String(u"")+d::string((+d::number((_n_r_13697==_n_a_13693))))+d::String(u"")+d::string((+d::number((_n_r_13697==_n_b_13694))))+d::String(u""));
(void)(([&](){auto&& _n_array_13750=d::at(this->_n_grid_13653,_n_r_13697);auto _n_index_13751=_n_x_13688;auto _n_value_13752=([&]()->d::String{auto _n_logical_13753=_n_JOIN_13636.get(_n_key_13698);return d::truth(_n_logical_13753)?_n_logical_13753:d::String(u"─");})();d::put(_n_array_13750,_n_index_13751,_n_value_13752);return _n_value_13752;})());
}}
}}
double _n_n_13699=this->_n_beatOf_13647(((_n_H_13682-_n_R_AT_13631)+2.0));
if(d::truth((this->_n_rAt_13652(_n_n_13699)>_n_H_13682))){d::check_cancel();(void)((_n_n_13699--));
}
double _n_rr_13700=((d::at(this->_n_beats_13645,_n_n_13699)-d::at(this->_n_beats_13645,(_n_n_13699-4.0)))/4.0);
d::String _n_shown_13701=d::string(d::round(((_n_SPEED_13626*60.0)/_n_rr_13700)));
(void)(this->_n_put_13654(2.0,this->_n_PX_13642,d::String(u"hr")));
(void)(this->_n_put_13654(2.0,((this->_n_PX_13642+this->_n_PW_13643)-3.0),d::String(u"bpm")));
double _n_step_13702=(d::truth((double(_n_shown_13701.size())>2.0))?7.0:8.0);
double _n_dx_13703=(this->_n_PX_13642+std::floor(((((this->_n_PW_13643-(double(_n_shown_13701.size())*_n_step_13702))+_n_step_13702)-6.0)/2.0)));
for(auto &&_n_item_13754:d::chars(_n_shown_13701)){d::check_cancel();d::String _n_ch_13704=_n_item_13754;
{
d::Array<d::String,false> _n_f_13705=d::at(_n_FONT_13634,(+d::number(_n_ch_13704)));
{double _n_r_13706=0.0;
for(;d::truth((_n_r_13706<5.0));(void)((_n_r_13706++))){d::check_cancel();{double _n_c_13707=0.0;
for(;d::truth((_n_c_13707<3.0));(void)((_n_c_13707++))){d::check_cancel();if(d::truth((d::at(d::at(_n_f_13705,_n_r_13706),_n_c_13707)==d::String(u"#")))){d::check_cancel();(void)(([&](){auto&& _n_array_13755=d::at(this->_n_grid_13653,(4.0+_n_r_13706));auto _n_index_13756=(_n_dx_13703+(2.0*_n_c_13707));auto _n_value_13757=([&](){auto&& _n_array_13758=d::at(this->_n_grid_13653,(4.0+_n_r_13706));auto _n_index_13759=((_n_dx_13703+(2.0*_n_c_13707))+1.0);auto _n_value_13760=d::String(u"█");d::put(_n_array_13758,_n_index_13759,_n_value_13760);return _n_value_13760;})();d::put(_n_array_13755,_n_index_13756,_n_value_13757);return _n_value_13757;})());
}
}}
}}
(void)((_n_dx_13703=(_n_dx_13703+_n_step_13702)));

}
}
double _n_since_13708=(_n_H_13682-this->_n_rAt_13652(_n_n_13699));
(void)(d::forEach(d::at(_n_HEARTS_13635,(d::truth((_n_since_13708<4.0))?2.0:(d::truth((_n_since_13708<9.0))?1.0:0.0))),[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_13709=_a0;
double _n_i_13710=_a1;
([&](){auto _n_argument_13761=(10.0+_n_i_13710);auto _n_argument_13762=(this->_n_PX_13642+std::floor(((this->_n_PW_13643-7.0)/2.0)));auto _n_argument_13763=_n_s_13709;return this->_n_put_13654(_n_argument_13761,_n_argument_13762,_n_argument_13763);})();}));
return d::join(d::map(this->_n_grid_13653,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_13711=_a0;
return d::join(_n_row_13711,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("heartbeat").cols)*ascii::catalog_meta("heartbeat").rows);auto _env=std::make_shared<_n_Record_13713>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &heartbeat_meta(){return catalog_meta("heartbeat");}
std::unique_ptr<Piece> make_heartbeat(const AsciiPieceOptions &o){return std::make_unique<Native_heartbeat>(o);}
}
