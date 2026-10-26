// Direct, statically typed C++ from src/pieces/maze.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_20977;
struct _n_Record_20987;
struct _n_Record_21086;
struct _n_Record_20977{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_20977> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20977>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_20987{
d::Array<double,false> _p_moves{};
d::Array<double,false> _p_way{};
static std::shared_ptr<_n_Record_20987> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20987>();out->_p_moves=d::decode<d::Array<double,false>>(j["moves"]);out->_p_way=d::decode<d::Array<double,false>>(j["way"]);return out;}
};
struct _n_Record_21086{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_21086> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21086>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_20985(double _a0);
std::shared_ptr<_n_Record_20987> _n_build_20986(double _a0);
std::shared_ptr<_n_Record_20977> _n_meta_20976=[](){return ([&](){auto _n_object_21089=std::make_shared<_n_Record_20977>();_n_object_21089->_p_name=d::String(u"maze");_n_object_21089->_p_category=d::String(u"generative");_n_object_21089->_p_note=d::String(u"a maze carved by backtracking, then solved, then remade");_n_object_21089->_p_cols=61.0;_n_object_21089->_p_rows=21.0;_n_object_21089->_p_fps=20.0;return _n_object_21089;})();}();
const double _n_MW_20978=[](){return 15.0;}();
const double _n_MH_20979=[](){return 10.0;}();
const double _n_CARVE_20980=[](){return 40.0;}();
const double _n_SOLVE_20981=[](){return 2.4;}();
const double _n_HOLD_20982=[](){return 2.2;}();
const double _n_CLOSE_20983=[](){return 1.2;}();
const double _n_START_20984=[](){return 5.2;}();
const double _n_L_20988=[](){return 1.0;}();
const double _n_R_20989=[](){return 2.0;}();
const double _n_U_20990=[](){return 4.0;}();
const double _n_D_20991=[](){return 8.0;}();
d::Array<d::String,false> _n_JOIN_20992=[](){return d::Array<d::String,false>{d::String(u" "),d::String(u"╴"),d::String(u"╶"),d::String(u"─"),d::String(u"╵"),d::String(u"┘"),d::String(u"└"),d::String(u"┴"),d::String(u"╷"),d::String(u"┐"),d::String(u"┌"),d::String(u"┬"),d::String(u"│"),d::String(u"┤"),d::String(u"├"),d::String(u"┼")};}();
d::Dict<double,d::String> _n_PATH_20993=[](){return ([&](){d::Dict<double,d::String> _n_dictionary_21090;_n_dictionary_21090.set(double(d::i32(_n_L_20988)|d::i32(_n_R_20989)),d::String(u"━"));_n_dictionary_21090.set(double(d::i32(_n_U_20990)|d::i32(_n_D_20991)),d::String(u"┃"));_n_dictionary_21090.set(double(d::i32(_n_R_20989)|d::i32(_n_D_20991)),d::String(u"┏"));_n_dictionary_21090.set(double(d::i32(_n_L_20988)|d::i32(_n_D_20991)),d::String(u"┓"));_n_dictionary_21090.set(double(d::i32(_n_R_20989)|d::i32(_n_U_20990)),d::String(u"┗"));_n_dictionary_21090.set(double(d::i32(_n_L_20988)|d::i32(_n_U_20990)),d::String(u"┛"));return _n_dictionary_21090;})();}();
std::function<double()> _n_mulberry32_20985(double _a0){double _n_a_21009=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_21009=double(d::i32((_n_a_21009+1831565813.0))|d::i32(0.0))));
double _n_t_21010=d::imul(double(d::i32(_n_a_21009)^d::i32(double(d::u32(_n_a_21009)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_21009)));
(void)((_n_t_21010=double(d::i32((_n_t_21010+d::imul(double(d::i32(_n_t_21010)^d::i32(double(d::u32(_n_t_21010)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_21010)))))^d::i32(_n_t_21010))));
return (double(d::u32(double(d::i32(_n_t_21010)^d::i32(double(d::u32(_n_t_21010)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

std::shared_ptr<_n_Record_20987> _n_build_20986(double _a0){double _n_seed_21011=_a0;
{
std::function<double()> _n_rand_21012=_n_mulberry32_20985(_n_seed_21011);
double _n_N_21013=(_n_MW_20978*_n_MH_20979);
d::Array<uint8_t,true> _n_seen_21014=d::Array<uint8_t,true>(size_t(_n_N_21013));
d::Array<int16_t,true> _n_parent_21015=d::Array<int16_t,true>(size_t(_n_N_21013)).fill((-d::number(1.0)));
d::Array<double,false> _n_moves_21016=d::Array<double,false>{};
d::Array<double,false> _n_stack_21017=d::Array<double,false>{0.0};
(void)(([&](){auto&& _n_array_21091=_n_seen_21014;auto _n_index_21092=0.0;auto _n_value_21093=1.0;d::put(_n_array_21091,_n_index_21092,_n_value_21093);return _n_value_21093;})());
while(d::truth(double(_n_stack_21017.size()))){d::check_cancel();double _n_c_21018=d::at(_n_stack_21017,(double(_n_stack_21017.size())-1.0));
double _n_x_21019=d::mod(_n_c_21018,_n_MW_20978);
double _n_y_21020=double(d::i32((_n_c_21018/_n_MW_20978))|d::i32(0.0));
d::Array<double,false> _n_next_21021=d::Array<double,false>{};
if((d::truth((_n_x_21019>0.0))&&d::truth((!d::truth(d::at(_n_seen_21014,(_n_c_21018-1.0))))))){d::check_cancel();(void)(_n_next_21021.push((_n_c_21018-1.0)));
}
if((d::truth((_n_x_21019<(_n_MW_20978-1.0)))&&d::truth((!d::truth(d::at(_n_seen_21014,(_n_c_21018+1.0))))))){d::check_cancel();(void)(_n_next_21021.push((_n_c_21018+1.0)));
}
if((d::truth((_n_y_21020>0.0))&&d::truth((!d::truth(d::at(_n_seen_21014,(_n_c_21018-_n_MW_20978))))))){d::check_cancel();(void)(_n_next_21021.push((_n_c_21018-_n_MW_20978)));
}
if((d::truth((_n_y_21020<(_n_MH_20979-1.0)))&&d::truth((!d::truth(d::at(_n_seen_21014,(_n_c_21018+_n_MW_20978))))))){d::check_cancel();(void)(_n_next_21021.push((_n_c_21018+_n_MW_20978)));
}
if(d::truth((!d::truth(double(_n_next_21021.size()))))){d::check_cancel();(void)(_n_stack_21017.pop());
if(d::truth(double(_n_stack_21017.size()))){d::check_cancel();(void)(_n_moves_21016.push((-d::number(1.0))));
}
continue;
}
double _n_n_21022=d::at(_n_next_21021,std::floor((_n_rand_21012()*double(_n_next_21021.size()))));
(void)(([&](){auto&& _n_array_21094=_n_seen_21014;auto _n_index_21095=_n_n_21022;auto _n_value_21096=1.0;d::put(_n_array_21094,_n_index_21095,_n_value_21096);return _n_value_21096;})());
(void)(([&](){auto&& _n_array_21097=_n_parent_21015;auto _n_index_21098=_n_n_21022;auto _n_value_21099=_n_c_21018;d::put(_n_array_21097,_n_index_21098,_n_value_21099);return _n_value_21099;})());
(void)(_n_stack_21017.push(_n_n_21022));
(void)(_n_moves_21016.push(_n_n_21022));
}
d::Array<double,false> _n_way_21023=d::Array<double,false>{(_n_N_21013-1.0)};
while(d::truth((d::at(_n_way_21023,(double(_n_way_21023.size())-1.0))!=0.0))){d::check_cancel();(void)(_n_way_21023.push(d::at(_n_parent_21015,d::at(_n_way_21023,(double(_n_way_21023.size())-1.0)))));
}
return ([&](){auto _n_object_21101=std::make_shared<_n_Record_20987>();_n_object_21101->_p_moves=_n_moves_21016;_n_object_21101->_p_way=_n_way_21023.reverse();return _n_object_21101;})();

}
}

struct Native_maze final:ascii::Piece{
double _n_cols_20994{};
double _n_rows_20995{};
d::Map<double,std::shared_ptr<_n_Record_20987>> _n_mazes_20996{};
double _n_CARVED_20998{};
double _n_PERIOD_20999{};
d::Array<uint8_t,true> _n_H_21000{};
d::Array<uint8_t,true> _n_V_21001{};
d::Array<uint8_t,true> _n_state_21002{};
d::Array<d::Array<d::String,false>,false> _n_grid_21003{};
std::function<std::array<double,2>(double)> _n_centre_21005{};
d::Array<d::String,false> _n_now_21007{};
d::Array<d::String,false> _n_fresh_21008{};
std::function<d::String(double,std::shared_ptr<_n_Record_21086>)> _render;
std::shared_ptr<_n_Record_20987> _n_get_20997(double _a0){double _n_n_21024=_a0;
{
if(d::truth((!d::truth(this->_n_mazes_20996.has(_n_n_21024))))){d::check_cancel();if(d::truth((double(this->_n_mazes_20996.size())>2.0))){d::check_cancel();(void)(this->_n_mazes_20996.erase(d::first(this->_n_mazes_20996.keys())));
}
(void)(([&](){auto _n_argument_21115=_n_n_21024;auto _n_argument_21116=_n_build_20986((1009.0+(_n_n_21024*7919.0)));return this->_n_mazes_20996.set(_n_argument_21115,_n_argument_21116);})());
}
return d::read(this->_n_mazes_20996.get(_n_n_21024));

}
}

d::String _n_put_21004(double _a0,double _a1,d::String _a2){double _n_r_21025=_a0;
double _n_c_21026=_a1;
d::String _n_ch_21027=_a2;
return ([&](){auto&& _n_array_21117=d::at(this->_n_grid_21003,_n_r_21025);auto _n_index_21118=_n_c_21026;auto _n_value_21119=_n_ch_21027;d::put(_n_array_21117,_n_index_21118,_n_value_21119);return _n_value_21119;})();}

void _n_draw_21006(std::shared_ptr<_n_Record_20987> _a0,double _a1,double _a2,d::Array<d::String,false> _a3){std::shared_ptr<_n_Record_20987> _n_m_21029=_a0;
double _n_k_21030=_a1;
double _n_solved_21031=_a2;
d::Array<d::String,false> _n_out_21032=_a3;
{
(void)(this->_n_H_21000.fill(1.0));
(void)(this->_n_V_21001.fill(1.0));
(void)(([&](){auto&& _n_array_21120=this->_n_V_21001;auto _n_index_21121=0.0;auto _n_value_21122=0.0;d::put(_n_array_21120,_n_index_21121,_n_value_21122);return _n_value_21122;})());
(void)(([&](){auto&& _n_array_21123=this->_n_V_21001;auto _n_index_21124=(((_n_MH_20979-1.0)*(_n_MW_20978+1.0))+_n_MW_20978);auto _n_value_21125=0.0;d::put(_n_array_21123,_n_index_21124,_n_value_21125);return _n_value_21125;})());
(void)(this->_n_state_21002.fill(0.0));
(void)(([&](){auto&& _n_array_21126=this->_n_state_21002;auto _n_index_21127=0.0;auto _n_value_21128=1.0;d::put(_n_array_21126,_n_index_21127,_n_value_21128);return _n_value_21128;})());
d::Array<double,false> _n_stack_21033=d::Array<double,false>{0.0};
{double _n_i_21034=0.0;
for(;d::truth((_n_i_21034<_n_k_21030));(void)((_n_i_21034++))){d::check_cancel();double _n_mv_21035=d::at(_n_m_21029->_p_moves,_n_i_21034);
double _n_c_21036=d::at(_n_stack_21033,(double(_n_stack_21033.size())-1.0));
if(d::truth((_n_mv_21035<0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_21129=this->_n_state_21002;auto _n_index_21130=d::read(_n_stack_21033.pop());auto _n_value_21131=2.0;d::put(_n_array_21129,_n_index_21130,_n_value_21131);return _n_value_21131;})());
continue;
}
double _n_d_21037=(_n_mv_21035-_n_c_21036);
if(d::truth((_n_d_21037==1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_21132=this->_n_V_21001;auto _n_index_21133=(((double(d::i32((_n_c_21036/_n_MW_20978))|d::i32(0.0))*(_n_MW_20978+1.0))+d::mod(_n_c_21036,_n_MW_20978))+1.0);auto _n_value_21134=0.0;d::put(_n_array_21132,_n_index_21133,_n_value_21134);return _n_value_21134;})());
}else {d::check_cancel();if(d::truth((_n_d_21037==(-d::number(1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_21135=this->_n_V_21001;auto _n_index_21136=((double(d::i32((_n_c_21036/_n_MW_20978))|d::i32(0.0))*(_n_MW_20978+1.0))+d::mod(_n_c_21036,_n_MW_20978));auto _n_value_21137=0.0;d::put(_n_array_21135,_n_index_21136,_n_value_21137);return _n_value_21137;})());
}else {d::check_cancel();if(d::truth((_n_d_21037==_n_MW_20978))){d::check_cancel();(void)(([&](){auto&& _n_array_21138=this->_n_H_21000;auto _n_index_21139=_n_mv_21035;auto _n_value_21140=0.0;d::put(_n_array_21138,_n_index_21139,_n_value_21140);return _n_value_21140;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_21141=this->_n_H_21000;auto _n_index_21142=_n_c_21036;auto _n_value_21143=0.0;d::put(_n_array_21141,_n_index_21142,_n_value_21143);return _n_value_21143;})());
}
}
}
(void)(([&](){auto&& _n_array_21144=this->_n_state_21002;auto _n_index_21145=_n_mv_21035;auto _n_value_21146=1.0;d::put(_n_array_21144,_n_index_21145,_n_value_21146);return _n_value_21146;})());
(void)(_n_stack_21033.push(_n_mv_21035));
}}
if(d::truth((_n_k_21030>=double(_n_m_21029->_p_moves.size())))){d::check_cancel();(void)(([&](){auto&& _n_array_21147=this->_n_state_21002;auto _n_index_21148=0.0;auto _n_value_21149=2.0;d::put(_n_array_21147,_n_index_21148,_n_value_21149);return _n_value_21149;})());
}
{double _n_r_21038=0.0;
for(;d::truth((_n_r_21038<this->_n_rows_20995));(void)((_n_r_21038++))){d::check_cancel();(void)(d::at(this->_n_grid_21003,_n_r_21038).fill(d::String(u" ")));
}}
{double _n_j_21039=0.0;
for(;d::truth((_n_j_21039<=_n_MH_20979));(void)((_n_j_21039++))){d::check_cancel();{double _n_i_21040=0.0;
for(;d::truth((_n_i_21040<=_n_MW_20978));(void)((_n_i_21040++))){d::check_cancel();double _n_arms_21041=double(d::i32(double(d::i32(double(d::i32(((d::truth((_n_i_21040>0.0))&&d::truth(d::at(this->_n_H_21000,(((_n_j_21039*_n_MW_20978)+_n_i_21040)-1.0))))?_n_L_20988:0.0))|d::i32(((d::truth((_n_i_21040<_n_MW_20978))&&d::truth(d::at(this->_n_H_21000,((_n_j_21039*_n_MW_20978)+_n_i_21040))))?_n_R_20989:0.0))))|d::i32(((d::truth((_n_j_21039>0.0))&&d::truth(d::at(this->_n_V_21001,(((_n_j_21039-1.0)*(_n_MW_20978+1.0))+_n_i_21040))))?_n_U_20990:0.0))))|d::i32(((d::truth((_n_j_21039<_n_MH_20979))&&d::truth(d::at(this->_n_V_21001,((_n_j_21039*(_n_MW_20978+1.0))+_n_i_21040))))?_n_D_20991:0.0)));
(void)(this->_n_put_21004((2.0*_n_j_21039),(4.0*_n_i_21040),d::at(_n_JOIN_20992,_n_arms_21041)));
if((d::truth((_n_i_21040<_n_MW_20978))&&d::truth(d::at(this->_n_H_21000,((_n_j_21039*_n_MW_20978)+_n_i_21040))))){d::check_cancel();{double _n_s_21042=1.0;
for(;d::truth((_n_s_21042<4.0));(void)((_n_s_21042++))){d::check_cancel();(void)(this->_n_put_21004((2.0*_n_j_21039),((4.0*_n_i_21040)+_n_s_21042),d::String(u"─")));
}}
}
if((d::truth((_n_j_21039<_n_MH_20979))&&d::truth(d::at(this->_n_V_21001,((_n_j_21039*(_n_MW_20978+1.0))+_n_i_21040))))){d::check_cancel();(void)(this->_n_put_21004(((2.0*_n_j_21039)+1.0),(4.0*_n_i_21040),d::String(u"│")));
}
}}
}}
{double _n_n_21043=0.0;
for(;d::truth((_n_n_21043<(_n_MW_20978*_n_MH_20979)));(void)((_n_n_21043++))){d::check_cancel();auto _n_binding_21150=this->_n_centre_21005(_n_n_21043);
double _n_r_21044=d::at(_n_binding_21150,0.0);
double _n_c_21045=d::at(_n_binding_21150,1.0);
if(d::truth((d::at(this->_n_state_21002,_n_n_21043)==0.0))){d::check_cancel();{double _n_s_21046=(-d::number(1.0));
for(;d::truth((_n_s_21046<=1.0));(void)((_n_s_21046++))){d::check_cancel();(void)(this->_n_put_21004(_n_r_21044,(_n_c_21045+_n_s_21046),d::String(u"░")));
}}
}
}}
if(d::truth((_n_k_21030<double(_n_m_21029->_p_moves.size())))){d::check_cancel();{double _n_i_21047=0.0;
for(;d::truth((_n_i_21047<double(_n_stack_21033.size())));(void)((_n_i_21047++))){d::check_cancel();auto _n_binding_21151=this->_n_centre_21005(d::at(_n_stack_21033,_n_i_21047));
double _n_r_21048=d::at(_n_binding_21151,0.0);
double _n_c_21049=d::at(_n_binding_21151,1.0);
(void)(this->_n_put_21004(_n_r_21048,_n_c_21049,d::String(u"·")));
if(d::truth((_n_i_21047>0.0))){d::check_cancel();auto _n_binding_21152=this->_n_centre_21005(d::at(_n_stack_21033,(_n_i_21047-1.0)));
double _n_r0_21050=d::at(_n_binding_21152,0.0);
double _n_c0_21051=d::at(_n_binding_21152,1.0);
(void)(this->_n_put_21004(((_n_r_21048+_n_r0_21050)/2.0),((_n_c_21049+_n_c0_21051)/2.0),d::String(u"·")));
}
}}
auto _n_binding_21153=this->_n_centre_21005(d::at(_n_stack_21033,(double(_n_stack_21033.size())-1.0)));
double _n_r_21052=d::at(_n_binding_21153,0.0);
double _n_c_21053=d::at(_n_binding_21153,1.0);
(void)(this->_n_put_21004(_n_r_21052,(_n_c_21053-1.0),d::String(u"█")));
(void)(this->_n_put_21004(_n_r_21052,_n_c_21053,d::String(u"█")));
(void)(this->_n_put_21004(_n_r_21052,(_n_c_21053+1.0),d::String(u"█")));
}
if(d::truth((_n_solved_21031>0.0))){d::check_cancel();d::Array<double,false> _n_way_21054=_n_m_21029->_p_way;
d::Array<d::Array<double,false>,false> _n_pts_21055=([&](){d::Array<d::Array<double,false>,false> _n_array_21154;_n_array_21154.push(d::Array<double,false>{1.0,(-d::number(1.0))});for(const auto &_v:d::map(_n_way_21054,this->_n_centre_21005))_n_array_21154.push(_v);_n_array_21154.push(d::Array<double,false>{((2.0*_n_MH_20979)-1.0),this->_n_cols_20994});return _n_array_21154;})();
d::Array<std::array<double,4>,false> _n_cells_21056=d::Array<std::array<double,4>,false>{};
{double _n_p_21057=1.0;
for(;d::truth((_n_p_21057<double(_n_pts_21055.size())));(void)((_n_p_21057++))){d::check_cancel();auto _n_binding_21155=d::at(_n_pts_21055,(_n_p_21057-1.0));
double _n_r0_21058=d::at(_n_binding_21155,0.0);
double _n_c0_21059=d::at(_n_binding_21155,1.0);
auto _n_binding_21156=d::at(_n_pts_21055,_n_p_21057);
double _n_r1_21060=d::at(_n_binding_21156,0.0);
double _n_c1_21061=d::at(_n_binding_21156,1.0);
double _n_dr_21062=d::sign((_n_r1_21060-_n_r0_21058));
double _n_dc_21063=d::sign((_n_c1_21061-_n_c0_21059));
{double _n_r_21064=_n_r0_21058;
double _n_c_21065=_n_c0_21059;
for(;(d::truth((_n_r_21064!=_n_r1_21060))||d::truth((_n_c_21065!=_n_c1_21061)));){d::check_cancel();(void)((_n_r_21064=(_n_r_21064+_n_dr_21062)));
(void)((_n_c_21065=(_n_c_21065+_n_dc_21063)));
(void)(_n_cells_21056.push(std::array<double,4>{_n_r_21064,_n_c_21065,_n_dr_21062,_n_dc_21063}));
}}
}}
double _n_shown_21066=d::round((_n_solved_21031*double(_n_cells_21056.size())));
{double _n_q_21067=0.0;
for(;(d::truth((_n_q_21067<_n_shown_21066))&&d::truth((_n_q_21067<double(_n_cells_21056.size()))));(void)((_n_q_21067++))){d::check_cancel();auto _n_binding_21157=d::at(_n_cells_21056,_n_q_21067);
double _n_r_21068=d::at(_n_binding_21157,0.0);
double _n_c_21069=d::at(_n_binding_21157,1.0);
double _n_dr_21070=d::at(_n_binding_21157,2.0);
double _n_dc_21071=d::at(_n_binding_21157,3.0);
if((d::truth((_n_c_21069<0.0))||d::truth((_n_c_21069>=this->_n_cols_20994)))){d::check_cancel();continue;
}
double _n_into_21072=(d::truth((_n_dc_21071>0.0))?_n_L_20988:(d::truth((_n_dc_21071<0.0))?_n_R_20989:(d::truth((_n_dr_21070>0.0))?_n_U_20990:_n_D_20991)));
auto&& _n_nx_21073=d::at(_n_cells_21056,(_n_q_21067+1.0));
double _n_outOf_21074=((d::truth((!d::truth(_n_nx_21073)))||d::truth(((_n_q_21067+1.0)>=_n_shown_21066)))?double(d::i32((d::truth(double(d::i32(_n_into_21072)&d::i32(double(d::i32(_n_L_20988)|d::i32(_n_R_20989)))))?double(d::i32(_n_L_20988)|d::i32(_n_R_20989)):double(d::i32(_n_U_20990)|d::i32(_n_D_20991))))&d::i32(double(~d::i32(_n_into_21072)))):(d::truth((d::at(_n_nx_21073,3.0)>0.0))?_n_R_20989:(d::truth((d::at(_n_nx_21073,3.0)<0.0))?_n_L_20988:(d::truth((d::at(_n_nx_21073,2.0)>0.0))?_n_D_20991:_n_U_20990))));
(void)(this->_n_put_21004(_n_r_21068,_n_c_21069,([&]()->d::String{auto _n_logical_21158=_n_PATH_20993.get(double(d::i32(_n_into_21072)|d::i32(_n_outOf_21074)));return d::truth(_n_logical_21158)?_n_logical_21158:d::String(u"━");})()));
}}
}
{double _n_r_21075=0.0;
for(;d::truth((_n_r_21075<this->_n_rows_20995));(void)((_n_r_21075++))){d::check_cancel();(void)(([&](){auto&& _n_array_21159=_n_out_21032;auto _n_index_21160=_n_r_21075;auto _n_value_21161=d::join(d::at(this->_n_grid_21003,_n_r_21075),d::String(u""));d::put(_n_array_21159,_n_index_21160,_n_value_21161);return _n_value_21161;})());
}}

}
}

explicit Native_maze(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_21102=_n_meta_20976;
this->_n_cols_20994=_n_binding_21102->_p_cols;
this->_n_rows_20995=_n_binding_21102->_p_rows;
this->_n_mazes_20996=d::Map<double,std::shared_ptr<_n_Record_20987>>();
this->_n_CARVED_20998=((2.0*((_n_MW_20978*_n_MH_20979)-1.0))/_n_CARVE_20980);
this->_n_PERIOD_20999=(((this->_n_CARVED_20998+_n_SOLVE_20981)+_n_HOLD_20982)+_n_CLOSE_20983);
this->_n_H_21000=d::Array<uint8_t,true>(size_t(((_n_MH_20979+1.0)*_n_MW_20978)));
this->_n_V_21001=d::Array<uint8_t,true>(size_t((_n_MH_20979*(_n_MW_20978+1.0))));
this->_n_state_21002=d::Array<uint8_t,true>(size_t((_n_MW_20978*_n_MH_20979)));
this->_n_grid_21003=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_20995,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_20994));}));
this->_n_centre_21005=[=]( double _a0) mutable ->std::array<double,2>{double _n_n_21028=_a0;
return std::array<double,2>{((2.0*double(d::i32((_n_n_21028/_n_MW_20978))|d::i32(0.0)))+1.0),((4.0*d::mod(_n_n_21028,_n_MW_20978))+2.0)};};
this->_n_now_21007=d::Array<d::String,false>{};
this->_n_fresh_21008=d::Array<d::String,false>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_21086> _a1) mutable ->d::String{double _n_t_21076=_a0;
{
double _n_n_21077=std::floor(((_n_t_21076+_n_START_20984)/this->_n_PERIOD_20999));
double _n_p_21078=((_n_t_21076+_n_START_20984)-(_n_n_21077*this->_n_PERIOD_20999));
std::shared_ptr<_n_Record_20987> _n_m_21079=this->_n_get_20997(_n_n_21077);
double _n_k_21080=([&](){auto _n_argument_21103=double(_n_m_21079->_p_moves.size());auto _n_argument_21104=std::floor((_n_p_21078*_n_CARVE_20980));return d::minimum({_n_argument_21103,_n_argument_21104});})();
double _n_solved_21081=([&](){auto _n_argument_21105=1.0;auto _n_argument_21106=d::maximum({0.0,((_n_p_21078-this->_n_CARVED_20998)/_n_SOLVE_20981)});return d::minimum({_n_argument_21105,_n_argument_21106});})();
(void)(this->_n_draw_21006(_n_m_21079,_n_k_21080,_n_solved_21081,this->_n_now_21007));
double _n_close_21082=((((_n_p_21078-this->_n_CARVED_20998)-_n_SOLVE_20981)-_n_HOLD_20982)/_n_CLOSE_20983);
if(d::truth((_n_close_21082<=0.0))){d::check_cancel();return d::join(this->_n_now_21007,d::String(u"\n"));
}
(void)(([&](){auto _n_argument_21107=this->_n_get_20997((_n_n_21077+1.0));auto _n_argument_21108=0.0;auto _n_argument_21109=0.0;auto _n_argument_21110=this->_n_fresh_21008;return this->_n_draw_21006(_n_argument_21107,_n_argument_21108,_n_argument_21109,_n_argument_21110);})());
double _n_edge_21083=((4.0*([&](){auto _n_argument_21111=_n_MW_20978;auto _n_argument_21112=std::floor((_n_close_21082*(_n_MW_20978+1.0)));return d::minimum({_n_argument_21111,_n_argument_21112});})())+1.0);
return d::join(d::map(this->_n_now_21007,[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_line_21084=_a0;
double _n_r_21085=_a1;
return ([&](){auto _n_left_21113=d::slice(d::at(this->_n_fresh_21008,_n_r_21085),0.0,_n_edge_21083);auto _n_right_21114=d::slice(_n_line_21084,_n_edge_21083);return (d::string(_n_left_21113)+d::string(_n_right_21114));})();}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("maze").cols)*ascii::catalog_meta("maze").rows);auto _env=std::make_shared<_n_Record_21086>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &maze_meta(){return catalog_meta("maze");}
std::unique_ptr<Piece> make_maze(const AsciiPieceOptions &o){return std::make_unique<Native_maze>(o);}
}
