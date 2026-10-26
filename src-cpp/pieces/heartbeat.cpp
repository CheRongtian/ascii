// Direct, statically typed C++ from src/pieces/heartbeat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13623;
struct _n_Record_13624;
struct _n_Record_13711;
struct _n_Record_13712;
struct _n_Record_13721;
struct _n_Record_13623{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_13624> _p_options{};
static std::shared_ptr<_n_Record_13623> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13623>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_13624>>(j["options"]);return out;}
};
struct _n_Record_13624{
double _p_bpm{};
static std::shared_ptr<_n_Record_13624> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13624>();out->_p_bpm=d::decode<double>(j["bpm"]);return out;}
};
struct _n_Record_13711{
std::optional<double> _p_bpm{};
static std::shared_ptr<_n_Record_13711> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13711>();out->_p_bpm=d::decode<std::optional<double>>(j["bpm"]);return out;}
};
struct _n_Record_13712{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13712> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13712>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_13721{
d::String _p_1100{};
d::String _p_0011{};
d::String _p_0110{};
d::String _p_1010{};
d::String _p_0101{};
d::String _p_1001{};
static std::shared_ptr<_n_Record_13721> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13721>();out->_p_1100=d::decode<d::String>(j["1100"]);out->_p_0011=d::decode<d::String>(j["0011"]);out->_p_0110=d::decode<d::String>(j["0110"]);out->_p_1010=d::decode<d::String>(j["1010"]);out->_p_0101=d::decode<d::String>(j["0101"]);out->_p_1001=d::decode<d::String>(j["1001"]);return out;}
};
std::function<double()> _n_mulberry32_13636(double _a0);
std::shared_ptr<_n_Record_13623> _n_meta_13622=[](){return ([&](){auto _n_object_13717=std::make_shared<_n_Record_13623>();_n_object_13717->_p_name=d::String(u"heartbeat");_n_object_13717->_p_category=d::String(u"data");_n_object_13717->_p_note=d::String(u"an ecg trace sweeping over its last pass, with a bpm readout");_n_object_13717->_p_cols=72.0;_n_object_13717->_p_rows=15.0;_n_object_13717->_p_fps=25.0;_n_object_13717->_p_options=([&](){auto _n_object_13719=std::make_shared<_n_Record_13624>();_n_object_13719->_p_bpm=72.0;return _n_object_13719;})();return _n_object_13717;})();}();
const double _n_SPEED_13625=[](){return 25.0;}();
const double _n_W_13626=[](){return 46.0;}();
const double _n_GAP_13627=[](){return 4.0;}();
const double _n_BASE_13628=[](){return 10.0;}();
d::Array<double,false> _n_BEAT_13629=[](){return d::Array<double,false>{0.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,2.0,2.0,1.0,0.0};}();
const double _n_R_AT_13630=[](){return 7.0;}();
const double _n_R_TOP_13631=[](){return 7.0;}();
d::Dict<double,d::Array<d::String,false>> _n_QRS_13632=[](){return ([&](){d::Dict<double,d::Array<d::String,false>> _n_dictionary_13720;_n_dictionary_13720.set((_n_R_AT_13630-1.0),d::Array<d::String,false>{d::String(u"╮"),d::String(u"╰")});_n_dictionary_13720.set((_n_R_AT_13630+1.0),d::Array<d::String,false>{d::String(u"╭"),d::String(u"╯")});return _n_dictionary_13720;})();}();
d::Array<d::Array<d::String,false>,false> _n_FONT_13633=[](){return d::map(d::Array<d::String,false>{d::String(u"###,#.#,#.#,#.#,###"),d::String(u"##.,.#.,.#.,.#.,###"),d::String(u"###,..#,###,#..,###"),d::String(u"###,..#,###,..#,###"),d::String(u"#.#,#.#,###,..#,..#"),d::String(u"###,#..,###,..#,###"),d::String(u"###,#..,###,#.#,###"),d::String(u"###,..#,..#,..#,..#"),d::String(u"###,#.#,###,#.#,###"),d::String(u"###,#.#,###,..#,###")},[&]( d::String _a0) mutable ->d::Array<d::String,false>{d::String _n_d_13655=_a0;
return d::split(_n_d_13655,d::String(u","));});}();
d::Array<d::Array<d::String,false>,false> _n_HEARTS_13634=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u" ▄█▄█▄ "),d::String(u"  ▀█▀  "),d::String(u"       ")},d::Array<d::String,false>{d::String(u"▄██▄██▄"),d::String(u" ▀███▀ "),d::String(u"   ▀   ")},d::Array<d::String,false>{d::String(u"▄██▄██▄"),d::String(u"▀█████▀"),d::String(u"  ▀█▀  ")}};}();
d::Dict<d::String,d::String> _n_JOIN_13635=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_13722;_n_dictionary_13722.set(d::String(u"1100"),d::String(u"│"));_n_dictionary_13722.set(d::String(u"0011"),d::String(u"─"));_n_dictionary_13722.set(d::String(u"0110"),d::String(u"╮"));_n_dictionary_13722.set(d::String(u"1010"),d::String(u"╯"));_n_dictionary_13722.set(d::String(u"0101"),d::String(u"╭"));_n_dictionary_13722.set(d::String(u"1001"),d::String(u"╰"));return _n_dictionary_13722;})();}();
std::function<double()> _n_mulberry32_13636(double _a0){double _n_a_13656=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_13656=double(d::i32((_n_a_13656+1831565813.0))|d::i32(0.0))));
double _n_t_13657=d::imul(double(d::i32(_n_a_13656)^d::i32(double(d::u32(_n_a_13656)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_13656)));
(void)((_n_t_13657=double(d::i32((_n_t_13657+d::imul(double(d::i32(_n_t_13657)^d::i32(double(d::u32(_n_t_13657)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_13657)))))^d::i32(_n_t_13657))));
return (double(d::u32(double(d::i32(_n_t_13657)^d::i32(double(d::u32(_n_t_13657)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_heartbeat final:ascii::Piece{
double _n_bpm_13637{};
double _n_cols_13638{};
double _n_rows_13639{};
double _n_X0_13640{};
double _n_PX_13641{};
double _n_PW_13642{};
std::function<double()> _n_rand_13643{};
d::Array<double,false> _n_beats_13644{};
d::Array<d::Array<d::String,false>,false> _n_grid_13652{};
std::function<d::String(double,std::shared_ptr<_n_Record_13712>)> _render;
void _n_extend_13645(double _a0){double _n_g_13658=_a0;
{
while(d::truth((d::at(this->_n_beats_13644,(double(this->_n_beats_13644.size())-1.0))<=_n_g_13658))){d::check_cancel();double _n_n_13659=double(this->_n_beats_13644.size());
double _n_rate_13660=([&](){auto _n_left_13763=([&](){auto _n_left_13765=([&](){auto _n_argument_13767=30.0;auto _n_argument_13768=d::minimum({199.0,this->_n_bpm_13637});return d::maximum({_n_argument_13767,_n_argument_13768});})();auto _n_right_13766=(2.5*std::sin((_n_n_13659*0.8)));return (_n_left_13765+_n_right_13766);})();auto _n_right_13764=((this->_n_rand_13643()-0.5)*2.0);return (_n_left_13763+_n_right_13764);})();
(void)(this->_n_beats_13644.push((d::at(this->_n_beats_13644,(_n_n_13659-1.0))+((_n_SPEED_13625*60.0)/_n_rate_13660))));
}

}
}

double _n_beatOf_13646(double _a0){double _n_g_13661=_a0;
{
double _n_lo_13662=0.0;
double _n_hi_13663=(double(this->_n_beats_13644.size())-1.0);
while(d::truth((_n_lo_13662<_n_hi_13663))){d::check_cancel();double _n_mid_13664=double(d::i32(((_n_lo_13662+_n_hi_13663)+1.0))>>(d::u32(1.0)&31));
if(d::truth((d::at(this->_n_beats_13644,_n_mid_13664)<=_n_g_13661))){d::check_cancel();(void)((_n_lo_13662=_n_mid_13664));
}else {d::check_cancel();(void)((_n_hi_13663=(_n_mid_13664-1.0)));
}
}
return _n_lo_13662;

}
}

double _n_start_13647(double _a0){double _n_n_13665=_a0;
return std::ceil(d::at(this->_n_beats_13644,_n_n_13665));}

double _n_cut_13648(double _a0){double _n_n_13666=_a0;
return ([&](){auto _n_argument_13769=0.0;auto _n_argument_13770=([&](){auto _n_argument_13771=4.0;auto _n_argument_13772=(double(_n_BEAT_13629.size())-([&](){auto _n_left_13773=this->_n_start_13647((_n_n_13666+1.0));auto _n_right_13774=this->_n_start_13647(_n_n_13666);return (_n_left_13773-_n_right_13774);})());return d::minimum({_n_argument_13771,_n_argument_13772});})();return d::maximum({_n_argument_13769,_n_argument_13770});})();}

double _n_phase_13649(double _a0,double _a1){double _n_n_13667=_a0;
double _n_g_13668=_a1;
{
double _n_c_13669=this->_n_cut_13648(_n_n_13667);
double _n_pr_13670=double(d::i32((_n_c_13669+1.0))>>(d::u32(1.0)&31));
double _n_k_13671=(_n_g_13668-this->_n_start_13647(_n_n_13667));
if(d::truth((_n_k_13671>=((_n_R_AT_13630-1.0)-_n_pr_13670)))){d::check_cancel();(void)((_n_k_13671=(_n_k_13671+_n_pr_13670)));
}
if(d::truth((_n_k_13671>=(12.0-(_n_c_13669-_n_pr_13670))))){d::check_cancel();(void)((_n_k_13671=(_n_k_13671+(_n_c_13669-_n_pr_13670))));
}
return _n_k_13671;

}
}

double _n_level_13650(double _a0){double _n_g_13672=_a0;
{
double _n_n_13673=this->_n_beatOf_13646(_n_g_13672);
return ([&](){auto _n_argument_13775=([&]()->double{auto _n_logical_13776=d::at(_n_BEAT_13629,this->_n_phase_13649(_n_n_13673,_n_g_13672));return d::has(_n_BEAT_13629,this->_n_phase_13649(_n_n_13673,_n_g_13672))?_n_logical_13776:0.0;})();auto _n_argument_13777=([&]()->double{auto _n_logical_13778=d::at(_n_BEAT_13629,this->_n_phase_13649((_n_n_13673-1.0),_n_g_13672));return d::has(_n_BEAT_13629,this->_n_phase_13649((_n_n_13673-1.0),_n_g_13672))?_n_logical_13778:0.0;})();return d::maximum({_n_argument_13775,_n_argument_13777});})();

}
}

double _n_rAt_13651(double _a0){double _n_n_13674=_a0;
return ([&](){auto _n_left_13779=(this->_n_start_13647(_n_n_13674)+_n_R_AT_13630);auto _n_right_13780=double(d::i32((this->_n_cut_13648(_n_n_13674)+1.0))>>(d::u32(1.0)&31));return (_n_left_13779-_n_right_13780);})();}

void _n_put_13653(double _a0,double _a1,d::String _a2){double _n_r_13675=_a0;
double _n_c_13676=_a1;
d::String _n_s_13677=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_13781;for(const auto &_v:_n_s_13677)_n_array_13781.push(_v);return _n_array_13781;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_13678=_a0;
double _n_i_13679=_a1;
return ([&](){auto&& _n_array_13782=d::at(this->_n_grid_13652,_n_r_13675);auto _n_index_13783=(_n_c_13676+_n_i_13679);auto _n_value_13784=_n_ch_13678;d::put(_n_array_13782,_n_index_13783,_n_value_13784);return _n_value_13784;})();});}

explicit Native_heartbeat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13723=d::decode<std::shared_ptr<_n_Record_13711>>(_options.data);
this->_n_bpm_13637=(d::present(_n_binding_13723->_p_bpm)?d::read(_n_binding_13723->_p_bpm):_n_meta_13622->_p_options->_p_bpm);
auto _n_binding_13724=_n_meta_13622;
this->_n_cols_13638=_n_binding_13724->_p_cols;
this->_n_rows_13639=_n_binding_13724->_p_rows;
this->_n_X0_13640=2.0;
this->_n_PX_13641=((this->_n_X0_13640+_n_W_13626)+3.0);
this->_n_PW_13642=((this->_n_cols_13638-this->_n_PX_13641)-1.0);
this->_n_rand_13643=_n_mulberry32_13636(7240.0);
this->_n_beats_13644=d::Array<double,false>{(-d::number(400.0))};
this->_n_grid_13652=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_13639,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_13638)).fill(d::String(u" "));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_13712> _a1) mutable ->d::String{double _n_t_13680=_a0;
{
double _n_H_13681=(((3.0*_n_W_13626)+31.0)+std::floor((_n_t_13680*_n_SPEED_13625)));
(void)(this->_n_extend_13645((_n_H_13681+2.0)));
for(auto &&_n_item_13725:this->_n_grid_13652){d::check_cancel();d::Array<d::String,false> _n_row_13682=_n_item_13725;
(void)(_n_row_13682.fill(d::String(u" ")));
}
(void)(this->_n_put_13653(1.0,this->_n_X0_13640,d::String(u"ecg  ii")));
(void)(this->_n_put_13653(1.0,((this->_n_X0_13640+_n_W_13626)-7.0),d::String(u"25 mm/s")));
{double _n_r_13683=1.0;
for(;d::truth((_n_r_13683<(this->_n_rows_13639-1.0)));(void)((_n_r_13683++))){d::check_cancel();(void)(([&](){auto&& _n_array_13726=d::at(this->_n_grid_13652,_n_r_13683);auto _n_index_13727=(this->_n_PX_13641-2.0);auto _n_value_13728=d::String(u"│");d::put(_n_array_13726,_n_index_13727,_n_value_13728);return _n_value_13728;})());
}}
double _n_head_13684=d::mod(_n_H_13681,_n_W_13626);
{double _n_c_13685=0.0;
for(;d::truth((_n_c_13685<_n_W_13626));(void)((_n_c_13685++))){d::check_cancel();double _n_ahead_13686=d::mod(((_n_c_13685-_n_head_13684)+_n_W_13626),_n_W_13626);
if((d::truth((_n_ahead_13686>0.0))&&d::truth((_n_ahead_13686<=_n_GAP_13627)))){d::check_cancel();continue;
}
double _n_x_13687=(this->_n_X0_13640+_n_c_13685);
if(d::truth((d::mod(_n_c_13685,5.0)==2.0))){d::check_cancel();{double _n_r_13688=(_n_BASE_13628-6.0);
for(;d::truth((_n_r_13688<(this->_n_rows_13639-1.0)));(void)((_n_r_13688=(_n_r_13688+3.0)))){d::check_cancel();if(d::truth((_n_r_13688!=_n_BASE_13628))){d::check_cancel();(void)(([&](){auto&& _n_array_13729=d::at(this->_n_grid_13652,_n_r_13688);auto _n_index_13730=_n_x_13687;auto _n_value_13731=d::String(u"·");d::put(_n_array_13729,_n_index_13730,_n_value_13731);return _n_value_13731;})());
}
}}
}
double _n_g_13689=(_n_H_13681-d::mod(((_n_head_13684-_n_c_13685)+_n_W_13626),_n_W_13626));
double _n_k_13690=([&](){auto _n_argument_13732=this->_n_beatOf_13646(_n_g_13689);auto _n_argument_13733=_n_g_13689;return this->_n_phase_13649(_n_argument_13732,_n_argument_13733);})();
if(d::truth((_n_k_13690==_n_R_AT_13630))){d::check_cancel();(void)(([&](){auto&& _n_array_13734=d::at(this->_n_grid_13652,(_n_BASE_13628-_n_R_TOP_13631));auto _n_index_13735=_n_x_13687;auto _n_value_13736=d::String(u"╷");d::put(_n_array_13734,_n_index_13735,_n_value_13736);return _n_value_13736;})());
{double _n_r_13691=((_n_BASE_13628-_n_R_TOP_13631)+1.0);
for(;d::truth((_n_r_13691<=_n_BASE_13628));(void)((_n_r_13691++))){d::check_cancel();(void)(([&](){auto&& _n_array_13737=d::at(this->_n_grid_13652,_n_r_13691);auto _n_index_13738=_n_x_13687;auto _n_value_13739=d::String(u"│");d::put(_n_array_13737,_n_index_13738,_n_value_13739);return _n_value_13739;})());
}}
(void)(([&](){auto&& _n_array_13740=d::at(this->_n_grid_13652,(_n_BASE_13628+1.0));auto _n_index_13741=_n_x_13687;auto _n_value_13742=d::String(u"┴");d::put(_n_array_13740,_n_index_13741,_n_value_13742);return _n_value_13742;})());
continue;
}
if(d::truth(_n_QRS_13632.get(_n_k_13690))){d::check_cancel();(void)(([&](){auto&& _n_array_13743=d::at(this->_n_grid_13652,_n_BASE_13628);auto _n_index_13744=_n_x_13687;auto _n_value_13745=d::at(_n_QRS_13632.get(_n_k_13690),0.0);d::put(_n_array_13743,_n_index_13744,_n_value_13745);return _n_value_13745;})());
(void)(([&](){auto&& _n_array_13746=d::at(this->_n_grid_13652,(_n_BASE_13628+1.0));auto _n_index_13747=_n_x_13687;auto _n_value_13748=d::at(_n_QRS_13632.get(_n_k_13690),1.0);d::put(_n_array_13746,_n_index_13747,_n_value_13748);return _n_value_13748;})());
continue;
}
double _n_a_13692=(_n_BASE_13628-this->_n_level_13650(_n_g_13689));
double _n_b_13693=(_n_BASE_13628-this->_n_level_13650((_n_g_13689+1.0)));
double _n_top_13694=d::minimum({_n_a_13692,_n_b_13693});
double _n_bot_13695=d::maximum({_n_a_13692,_n_b_13693});
{double _n_r_13696=_n_top_13694;
for(;d::truth((_n_r_13696<=_n_bot_13695));(void)((_n_r_13696++))){d::check_cancel();d::String _n_key_13697=(d::String(u"")+d::string((+d::number((_n_r_13696>_n_top_13694))))+d::String(u"")+d::string((+d::number((_n_r_13696<_n_bot_13695))))+d::String(u"")+d::string((+d::number((_n_r_13696==_n_a_13692))))+d::String(u"")+d::string((+d::number((_n_r_13696==_n_b_13693))))+d::String(u""));
(void)(([&](){auto&& _n_array_13749=d::at(this->_n_grid_13652,_n_r_13696);auto _n_index_13750=_n_x_13687;auto _n_value_13751=([&]()->d::String{auto _n_logical_13752=_n_JOIN_13635.get(_n_key_13697);return d::truth(_n_logical_13752)?_n_logical_13752:d::String(u"─");})();d::put(_n_array_13749,_n_index_13750,_n_value_13751);return _n_value_13751;})());
}}
}}
double _n_n_13698=this->_n_beatOf_13646(((_n_H_13681-_n_R_AT_13630)+2.0));
if(d::truth((this->_n_rAt_13651(_n_n_13698)>_n_H_13681))){d::check_cancel();(void)((_n_n_13698--));
}
double _n_rr_13699=((d::at(this->_n_beats_13644,_n_n_13698)-d::at(this->_n_beats_13644,(_n_n_13698-4.0)))/4.0);
d::String _n_shown_13700=d::string(d::round(((_n_SPEED_13625*60.0)/_n_rr_13699)));
(void)(this->_n_put_13653(2.0,this->_n_PX_13641,d::String(u"hr")));
(void)(this->_n_put_13653(2.0,((this->_n_PX_13641+this->_n_PW_13642)-3.0),d::String(u"bpm")));
double _n_step_13701=(d::truth((double(_n_shown_13700.size())>2.0))?7.0:8.0);
double _n_dx_13702=(this->_n_PX_13641+std::floor(((((this->_n_PW_13642-(double(_n_shown_13700.size())*_n_step_13701))+_n_step_13701)-6.0)/2.0)));
for(auto &&_n_item_13753:d::chars(_n_shown_13700)){d::check_cancel();d::String _n_ch_13703=_n_item_13753;
{
d::Array<d::String,false> _n_f_13704=d::at(_n_FONT_13633,(+d::number(_n_ch_13703)));
{double _n_r_13705=0.0;
for(;d::truth((_n_r_13705<5.0));(void)((_n_r_13705++))){d::check_cancel();{double _n_c_13706=0.0;
for(;d::truth((_n_c_13706<3.0));(void)((_n_c_13706++))){d::check_cancel();if(d::truth((d::at(d::at(_n_f_13704,_n_r_13705),_n_c_13706)==d::String(u"#")))){d::check_cancel();(void)(([&](){auto&& _n_array_13754=d::at(this->_n_grid_13652,(4.0+_n_r_13705));auto _n_index_13755=(_n_dx_13702+(2.0*_n_c_13706));auto _n_value_13756=([&](){auto&& _n_array_13757=d::at(this->_n_grid_13652,(4.0+_n_r_13705));auto _n_index_13758=((_n_dx_13702+(2.0*_n_c_13706))+1.0);auto _n_value_13759=d::String(u"█");d::put(_n_array_13757,_n_index_13758,_n_value_13759);return _n_value_13759;})();d::put(_n_array_13754,_n_index_13755,_n_value_13756);return _n_value_13756;})());
}
}}
}}
(void)((_n_dx_13702=(_n_dx_13702+_n_step_13701)));

}
}
double _n_since_13707=(_n_H_13681-this->_n_rAt_13651(_n_n_13698));
(void)(d::forEach(d::at(_n_HEARTS_13634,(d::truth((_n_since_13707<4.0))?2.0:(d::truth((_n_since_13707<9.0))?1.0:0.0))),[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_13708=_a0;
double _n_i_13709=_a1;
([&](){auto _n_argument_13760=(10.0+_n_i_13709);auto _n_argument_13761=(this->_n_PX_13641+std::floor(((this->_n_PW_13642-7.0)/2.0)));auto _n_argument_13762=_n_s_13708;return this->_n_put_13653(_n_argument_13760,_n_argument_13761,_n_argument_13762);})();}));
return d::join(d::map(this->_n_grid_13652,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_13710=_a0;
return d::join(_n_row_13710,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("heartbeat").cols)*ascii::catalog_meta("heartbeat").rows);auto _env=std::make_shared<_n_Record_13712>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &heartbeat_meta(){return catalog_meta("heartbeat");}
std::unique_ptr<Piece> make_heartbeat(const AsciiPieceOptions &o){return std::make_unique<Native_heartbeat>(o);}
}
