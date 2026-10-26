// Direct, statically typed C++ from src/pieces/maze.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_20978;
struct _n_Record_20988;
struct _n_Record_21087;
struct _n_Record_20978{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_20978> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20978>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_20988{
d::Array<double,false> _p_moves{};
d::Array<double,false> _p_way{};
static std::shared_ptr<_n_Record_20988> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20988>();out->_p_moves=d::decode<d::Array<double,false>>(j["moves"]);out->_p_way=d::decode<d::Array<double,false>>(j["way"]);return out;}
};
struct _n_Record_21087{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_21087> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21087>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_20986(double _a0);
std::shared_ptr<_n_Record_20988> _n_build_20987(double _a0);
std::shared_ptr<_n_Record_20978> _n_meta_20977=[](){return ([&](){auto _n_object_21090=std::make_shared<_n_Record_20978>();_n_object_21090->_p_name=d::String(u"maze");_n_object_21090->_p_category=d::String(u"generative");_n_object_21090->_p_note=d::String(u"a maze carved by backtracking, then solved, then remade");_n_object_21090->_p_cols=61.0;_n_object_21090->_p_rows=21.0;_n_object_21090->_p_fps=20.0;return _n_object_21090;})();}();
const double _n_MW_20979=[](){return 15.0;}();
const double _n_MH_20980=[](){return 10.0;}();
const double _n_CARVE_20981=[](){return 40.0;}();
const double _n_SOLVE_20982=[](){return 2.4;}();
const double _n_HOLD_20983=[](){return 2.2;}();
const double _n_CLOSE_20984=[](){return 1.2;}();
const double _n_START_20985=[](){return 5.2;}();
const double _n_L_20989=[](){return 1.0;}();
const double _n_R_20990=[](){return 2.0;}();
const double _n_U_20991=[](){return 4.0;}();
const double _n_D_20992=[](){return 8.0;}();
d::Array<d::String,false> _n_JOIN_20993=[](){return d::Array<d::String,false>{d::String(u" "),d::String(u"╴"),d::String(u"╶"),d::String(u"─"),d::String(u"╵"),d::String(u"┘"),d::String(u"└"),d::String(u"┴"),d::String(u"╷"),d::String(u"┐"),d::String(u"┌"),d::String(u"┬"),d::String(u"│"),d::String(u"┤"),d::String(u"├"),d::String(u"┼")};}();
d::Dict<double,d::String> _n_PATH_20994=[](){return ([&](){d::Dict<double,d::String> _n_dictionary_21091;_n_dictionary_21091.set(double(d::i32(_n_L_20989)|d::i32(_n_R_20990)),d::String(u"━"));_n_dictionary_21091.set(double(d::i32(_n_U_20991)|d::i32(_n_D_20992)),d::String(u"┃"));_n_dictionary_21091.set(double(d::i32(_n_R_20990)|d::i32(_n_D_20992)),d::String(u"┏"));_n_dictionary_21091.set(double(d::i32(_n_L_20989)|d::i32(_n_D_20992)),d::String(u"┓"));_n_dictionary_21091.set(double(d::i32(_n_R_20990)|d::i32(_n_U_20991)),d::String(u"┗"));_n_dictionary_21091.set(double(d::i32(_n_L_20989)|d::i32(_n_U_20991)),d::String(u"┛"));return _n_dictionary_21091;})();}();
std::function<double()> _n_mulberry32_20986(double _a0){double _n_a_21010=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_21010=double(d::i32((_n_a_21010+1831565813.0))|d::i32(0.0))));
double _n_t_21011=d::imul(double(d::i32(_n_a_21010)^d::i32(double(d::u32(_n_a_21010)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_21010)));
(void)((_n_t_21011=double(d::i32((_n_t_21011+d::imul(double(d::i32(_n_t_21011)^d::i32(double(d::u32(_n_t_21011)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_21011)))))^d::i32(_n_t_21011))));
return (double(d::u32(double(d::i32(_n_t_21011)^d::i32(double(d::u32(_n_t_21011)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

std::shared_ptr<_n_Record_20988> _n_build_20987(double _a0){double _n_seed_21012=_a0;
{
std::function<double()> _n_rand_21013=_n_mulberry32_20986(_n_seed_21012);
double _n_N_21014=(_n_MW_20979*_n_MH_20980);
d::Array<uint8_t,true> _n_seen_21015=d::Array<uint8_t,true>(size_t(_n_N_21014));
d::Array<int16_t,true> _n_parent_21016=d::Array<int16_t,true>(size_t(_n_N_21014)).fill((-d::number(1.0)));
d::Array<double,false> _n_moves_21017=d::Array<double,false>{};
d::Array<double,false> _n_stack_21018=d::Array<double,false>{0.0};
(void)(([&](){auto&& _n_array_21092=_n_seen_21015;auto _n_index_21093=0.0;auto _n_value_21094=1.0;d::put(_n_array_21092,_n_index_21093,_n_value_21094);return _n_value_21094;})());
while(d::truth(double(_n_stack_21018.size()))){d::check_cancel();double _n_c_21019=d::at(_n_stack_21018,(double(_n_stack_21018.size())-1.0));
double _n_x_21020=d::mod(_n_c_21019,_n_MW_20979);
double _n_y_21021=double(d::i32((_n_c_21019/_n_MW_20979))|d::i32(0.0));
d::Array<double,false> _n_next_21022=d::Array<double,false>{};
if((d::truth((_n_x_21020>0.0))&&d::truth((!d::truth(d::at(_n_seen_21015,(_n_c_21019-1.0))))))){d::check_cancel();(void)(_n_next_21022.push((_n_c_21019-1.0)));
}
if((d::truth((_n_x_21020<(_n_MW_20979-1.0)))&&d::truth((!d::truth(d::at(_n_seen_21015,(_n_c_21019+1.0))))))){d::check_cancel();(void)(_n_next_21022.push((_n_c_21019+1.0)));
}
if((d::truth((_n_y_21021>0.0))&&d::truth((!d::truth(d::at(_n_seen_21015,(_n_c_21019-_n_MW_20979))))))){d::check_cancel();(void)(_n_next_21022.push((_n_c_21019-_n_MW_20979)));
}
if((d::truth((_n_y_21021<(_n_MH_20980-1.0)))&&d::truth((!d::truth(d::at(_n_seen_21015,(_n_c_21019+_n_MW_20979))))))){d::check_cancel();(void)(_n_next_21022.push((_n_c_21019+_n_MW_20979)));
}
if(d::truth((!d::truth(double(_n_next_21022.size()))))){d::check_cancel();(void)(_n_stack_21018.pop());
if(d::truth(double(_n_stack_21018.size()))){d::check_cancel();(void)(_n_moves_21017.push((-d::number(1.0))));
}
continue;
}
double _n_n_21023=d::at(_n_next_21022,std::floor((_n_rand_21013()*double(_n_next_21022.size()))));
(void)(([&](){auto&& _n_array_21095=_n_seen_21015;auto _n_index_21096=_n_n_21023;auto _n_value_21097=1.0;d::put(_n_array_21095,_n_index_21096,_n_value_21097);return _n_value_21097;})());
(void)(([&](){auto&& _n_array_21098=_n_parent_21016;auto _n_index_21099=_n_n_21023;auto _n_value_21100=_n_c_21019;d::put(_n_array_21098,_n_index_21099,_n_value_21100);return _n_value_21100;})());
(void)(_n_stack_21018.push(_n_n_21023));
(void)(_n_moves_21017.push(_n_n_21023));
}
d::Array<double,false> _n_way_21024=d::Array<double,false>{(_n_N_21014-1.0)};
while(d::truth((d::at(_n_way_21024,(double(_n_way_21024.size())-1.0))!=0.0))){d::check_cancel();(void)(_n_way_21024.push(d::at(_n_parent_21016,d::at(_n_way_21024,(double(_n_way_21024.size())-1.0)))));
}
return ([&](){auto _n_object_21102=std::make_shared<_n_Record_20988>();_n_object_21102->_p_moves=_n_moves_21017;_n_object_21102->_p_way=_n_way_21024.reverse();return _n_object_21102;})();

}
}

struct Native_maze final:ascii::Piece{
double _n_cols_20995{};
double _n_rows_20996{};
d::Map<double,std::shared_ptr<_n_Record_20988>> _n_mazes_20997{};
double _n_CARVED_20999{};
double _n_PERIOD_21000{};
d::Array<uint8_t,true> _n_H_21001{};
d::Array<uint8_t,true> _n_V_21002{};
d::Array<uint8_t,true> _n_state_21003{};
d::Array<d::Array<d::String,false>,false> _n_grid_21004{};
std::function<d::Array<double,false>(double)> _n_centre_21006{};
d::Array<d::String,false> _n_now_21008{};
d::Array<d::String,false> _n_fresh_21009{};
std::function<d::String(double,std::shared_ptr<_n_Record_21087>)> _render;
std::shared_ptr<_n_Record_20988> _n_get_20998(double _a0){double _n_n_21025=_a0;
{
if(d::truth((!d::truth(this->_n_mazes_20997.has(_n_n_21025))))){d::check_cancel();if(d::truth((double(this->_n_mazes_20997.size())>2.0))){d::check_cancel();(void)(this->_n_mazes_20997.erase(d::first(this->_n_mazes_20997.keys())));
}
(void)(([&](){auto _n_argument_21116=_n_n_21025;auto _n_argument_21117=_n_build_20987((1009.0+(_n_n_21025*7919.0)));return this->_n_mazes_20997.set(_n_argument_21116,_n_argument_21117);})());
}
return d::read(this->_n_mazes_20997.get(_n_n_21025));

}
}

d::String _n_put_21005(double _a0,double _a1,d::String _a2){double _n_r_21026=_a0;
double _n_c_21027=_a1;
d::String _n_ch_21028=_a2;
return ([&](){auto&& _n_array_21118=d::at(this->_n_grid_21004,_n_r_21026);auto _n_index_21119=_n_c_21027;auto _n_value_21120=_n_ch_21028;d::put(_n_array_21118,_n_index_21119,_n_value_21120);return _n_value_21120;})();}

void _n_draw_21007(std::shared_ptr<_n_Record_20988> _a0,double _a1,double _a2,d::Array<d::String,false> _a3){std::shared_ptr<_n_Record_20988> _n_m_21030=_a0;
double _n_k_21031=_a1;
double _n_solved_21032=_a2;
d::Array<d::String,false> _n_out_21033=_a3;
{
(void)(this->_n_H_21001.fill(1.0));
(void)(this->_n_V_21002.fill(1.0));
(void)(([&](){auto&& _n_array_21121=this->_n_V_21002;auto _n_index_21122=0.0;auto _n_value_21123=0.0;d::put(_n_array_21121,_n_index_21122,_n_value_21123);return _n_value_21123;})());
(void)(([&](){auto&& _n_array_21124=this->_n_V_21002;auto _n_index_21125=(((_n_MH_20980-1.0)*(_n_MW_20979+1.0))+_n_MW_20979);auto _n_value_21126=0.0;d::put(_n_array_21124,_n_index_21125,_n_value_21126);return _n_value_21126;})());
(void)(this->_n_state_21003.fill(0.0));
(void)(([&](){auto&& _n_array_21127=this->_n_state_21003;auto _n_index_21128=0.0;auto _n_value_21129=1.0;d::put(_n_array_21127,_n_index_21128,_n_value_21129);return _n_value_21129;})());
d::Array<double,false> _n_stack_21034=d::Array<double,false>{0.0};
{double _n_i_21035=0.0;
for(;d::truth((_n_i_21035<_n_k_21031));(void)((_n_i_21035++))){d::check_cancel();double _n_mv_21036=d::at(_n_m_21030->_p_moves,_n_i_21035);
double _n_c_21037=d::at(_n_stack_21034,(double(_n_stack_21034.size())-1.0));
if(d::truth((_n_mv_21036<0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_21130=this->_n_state_21003;auto _n_index_21131=d::read(_n_stack_21034.pop());auto _n_value_21132=2.0;d::put(_n_array_21130,_n_index_21131,_n_value_21132);return _n_value_21132;})());
continue;
}
double _n_d_21038=(_n_mv_21036-_n_c_21037);
if(d::truth((_n_d_21038==1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_21133=this->_n_V_21002;auto _n_index_21134=(((double(d::i32((_n_c_21037/_n_MW_20979))|d::i32(0.0))*(_n_MW_20979+1.0))+d::mod(_n_c_21037,_n_MW_20979))+1.0);auto _n_value_21135=0.0;d::put(_n_array_21133,_n_index_21134,_n_value_21135);return _n_value_21135;})());
}else {d::check_cancel();if(d::truth((_n_d_21038==(-d::number(1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_21136=this->_n_V_21002;auto _n_index_21137=((double(d::i32((_n_c_21037/_n_MW_20979))|d::i32(0.0))*(_n_MW_20979+1.0))+d::mod(_n_c_21037,_n_MW_20979));auto _n_value_21138=0.0;d::put(_n_array_21136,_n_index_21137,_n_value_21138);return _n_value_21138;})());
}else {d::check_cancel();if(d::truth((_n_d_21038==_n_MW_20979))){d::check_cancel();(void)(([&](){auto&& _n_array_21139=this->_n_H_21001;auto _n_index_21140=_n_mv_21036;auto _n_value_21141=0.0;d::put(_n_array_21139,_n_index_21140,_n_value_21141);return _n_value_21141;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_21142=this->_n_H_21001;auto _n_index_21143=_n_c_21037;auto _n_value_21144=0.0;d::put(_n_array_21142,_n_index_21143,_n_value_21144);return _n_value_21144;})());
}
}
}
(void)(([&](){auto&& _n_array_21145=this->_n_state_21003;auto _n_index_21146=_n_mv_21036;auto _n_value_21147=1.0;d::put(_n_array_21145,_n_index_21146,_n_value_21147);return _n_value_21147;})());
(void)(_n_stack_21034.push(_n_mv_21036));
}}
if(d::truth((_n_k_21031>=double(_n_m_21030->_p_moves.size())))){d::check_cancel();(void)(([&](){auto&& _n_array_21148=this->_n_state_21003;auto _n_index_21149=0.0;auto _n_value_21150=2.0;d::put(_n_array_21148,_n_index_21149,_n_value_21150);return _n_value_21150;})());
}
{double _n_r_21039=0.0;
for(;d::truth((_n_r_21039<this->_n_rows_20996));(void)((_n_r_21039++))){d::check_cancel();(void)(d::at(this->_n_grid_21004,_n_r_21039).fill(d::String(u" ")));
}}
{double _n_j_21040=0.0;
for(;d::truth((_n_j_21040<=_n_MH_20980));(void)((_n_j_21040++))){d::check_cancel();{double _n_i_21041=0.0;
for(;d::truth((_n_i_21041<=_n_MW_20979));(void)((_n_i_21041++))){d::check_cancel();double _n_arms_21042=double(d::i32(double(d::i32(double(d::i32(((d::truth((_n_i_21041>0.0))&&d::truth(d::at(this->_n_H_21001,(((_n_j_21040*_n_MW_20979)+_n_i_21041)-1.0))))?_n_L_20989:0.0))|d::i32(((d::truth((_n_i_21041<_n_MW_20979))&&d::truth(d::at(this->_n_H_21001,((_n_j_21040*_n_MW_20979)+_n_i_21041))))?_n_R_20990:0.0))))|d::i32(((d::truth((_n_j_21040>0.0))&&d::truth(d::at(this->_n_V_21002,(((_n_j_21040-1.0)*(_n_MW_20979+1.0))+_n_i_21041))))?_n_U_20991:0.0))))|d::i32(((d::truth((_n_j_21040<_n_MH_20980))&&d::truth(d::at(this->_n_V_21002,((_n_j_21040*(_n_MW_20979+1.0))+_n_i_21041))))?_n_D_20992:0.0)));
(void)(this->_n_put_21005((2.0*_n_j_21040),(4.0*_n_i_21041),d::at(_n_JOIN_20993,_n_arms_21042)));
if((d::truth((_n_i_21041<_n_MW_20979))&&d::truth(d::at(this->_n_H_21001,((_n_j_21040*_n_MW_20979)+_n_i_21041))))){d::check_cancel();{double _n_s_21043=1.0;
for(;d::truth((_n_s_21043<4.0));(void)((_n_s_21043++))){d::check_cancel();(void)(this->_n_put_21005((2.0*_n_j_21040),((4.0*_n_i_21041)+_n_s_21043),d::String(u"─")));
}}
}
if((d::truth((_n_j_21040<_n_MH_20980))&&d::truth(d::at(this->_n_V_21002,((_n_j_21040*(_n_MW_20979+1.0))+_n_i_21041))))){d::check_cancel();(void)(this->_n_put_21005(((2.0*_n_j_21040)+1.0),(4.0*_n_i_21041),d::String(u"│")));
}
}}
}}
{double _n_n_21044=0.0;
for(;d::truth((_n_n_21044<(_n_MW_20979*_n_MH_20980)));(void)((_n_n_21044++))){d::check_cancel();auto _n_binding_21151=this->_n_centre_21006(_n_n_21044);
double _n_r_21045=d::at(_n_binding_21151,0.0);
double _n_c_21046=d::at(_n_binding_21151,1.0);
if(d::truth((d::at(this->_n_state_21003,_n_n_21044)==0.0))){d::check_cancel();{double _n_s_21047=(-d::number(1.0));
for(;d::truth((_n_s_21047<=1.0));(void)((_n_s_21047++))){d::check_cancel();(void)(this->_n_put_21005(_n_r_21045,(_n_c_21046+_n_s_21047),d::String(u"░")));
}}
}
}}
if(d::truth((_n_k_21031<double(_n_m_21030->_p_moves.size())))){d::check_cancel();{double _n_i_21048=0.0;
for(;d::truth((_n_i_21048<double(_n_stack_21034.size())));(void)((_n_i_21048++))){d::check_cancel();auto _n_binding_21152=this->_n_centre_21006(d::at(_n_stack_21034,_n_i_21048));
double _n_r_21049=d::at(_n_binding_21152,0.0);
double _n_c_21050=d::at(_n_binding_21152,1.0);
(void)(this->_n_put_21005(_n_r_21049,_n_c_21050,d::String(u"·")));
if(d::truth((_n_i_21048>0.0))){d::check_cancel();auto _n_binding_21153=this->_n_centre_21006(d::at(_n_stack_21034,(_n_i_21048-1.0)));
double _n_r0_21051=d::at(_n_binding_21153,0.0);
double _n_c0_21052=d::at(_n_binding_21153,1.0);
(void)(this->_n_put_21005(((_n_r_21049+_n_r0_21051)/2.0),((_n_c_21050+_n_c0_21052)/2.0),d::String(u"·")));
}
}}
auto _n_binding_21154=this->_n_centre_21006(d::at(_n_stack_21034,(double(_n_stack_21034.size())-1.0)));
double _n_r_21053=d::at(_n_binding_21154,0.0);
double _n_c_21054=d::at(_n_binding_21154,1.0);
(void)(this->_n_put_21005(_n_r_21053,(_n_c_21054-1.0),d::String(u"█")));
(void)(this->_n_put_21005(_n_r_21053,_n_c_21054,d::String(u"█")));
(void)(this->_n_put_21005(_n_r_21053,(_n_c_21054+1.0),d::String(u"█")));
}
if(d::truth((_n_solved_21032>0.0))){d::check_cancel();d::Array<double,false> _n_way_21055=_n_m_21030->_p_way;
d::Array<d::Array<double,false>,false> _n_pts_21056=([&](){d::Array<d::Array<double,false>,false> _n_array_21155;_n_array_21155.push(d::Array<double,false>{1.0,(-d::number(1.0))});for(const auto &_v:d::map(_n_way_21055,this->_n_centre_21006))_n_array_21155.push(_v);_n_array_21155.push(d::Array<double,false>{((2.0*_n_MH_20980)-1.0),this->_n_cols_20995});return _n_array_21155;})();
d::Array<d::Array<double,false>,false> _n_cells_21057=d::Array<d::Array<double,false>,false>{};
{double _n_p_21058=1.0;
for(;d::truth((_n_p_21058<double(_n_pts_21056.size())));(void)((_n_p_21058++))){d::check_cancel();auto _n_binding_21156=d::at(_n_pts_21056,(_n_p_21058-1.0));
double _n_r0_21059=d::at(_n_binding_21156,0.0);
double _n_c0_21060=d::at(_n_binding_21156,1.0);
auto _n_binding_21157=d::at(_n_pts_21056,_n_p_21058);
double _n_r1_21061=d::at(_n_binding_21157,0.0);
double _n_c1_21062=d::at(_n_binding_21157,1.0);
double _n_dr_21063=d::sign((_n_r1_21061-_n_r0_21059));
double _n_dc_21064=d::sign((_n_c1_21062-_n_c0_21060));
{double _n_r_21065=_n_r0_21059;
double _n_c_21066=_n_c0_21060;
for(;(d::truth((_n_r_21065!=_n_r1_21061))||d::truth((_n_c_21066!=_n_c1_21062)));){d::check_cancel();(void)((_n_r_21065=(_n_r_21065+_n_dr_21063)));
(void)((_n_c_21066=(_n_c_21066+_n_dc_21064)));
(void)(_n_cells_21057.push(d::Array<double,false>{_n_r_21065,_n_c_21066,_n_dr_21063,_n_dc_21064}));
}}
}}
double _n_shown_21067=d::round((_n_solved_21032*double(_n_cells_21057.size())));
{double _n_q_21068=0.0;
for(;(d::truth((_n_q_21068<_n_shown_21067))&&d::truth((_n_q_21068<double(_n_cells_21057.size()))));(void)((_n_q_21068++))){d::check_cancel();auto _n_binding_21158=d::at(_n_cells_21057,_n_q_21068);
double _n_r_21069=d::at(_n_binding_21158,0.0);
double _n_c_21070=d::at(_n_binding_21158,1.0);
double _n_dr_21071=d::at(_n_binding_21158,2.0);
double _n_dc_21072=d::at(_n_binding_21158,3.0);
if((d::truth((_n_c_21070<0.0))||d::truth((_n_c_21070>=this->_n_cols_20995)))){d::check_cancel();continue;
}
double _n_into_21073=(d::truth((_n_dc_21072>0.0))?_n_L_20989:(d::truth((_n_dc_21072<0.0))?_n_R_20990:(d::truth((_n_dr_21071>0.0))?_n_U_20991:_n_D_20992)));
d::Array<double,false> _n_nx_21074=d::at(_n_cells_21057,(_n_q_21068+1.0));
double _n_outOf_21075=((d::truth((!d::truth(_n_nx_21074)))||d::truth(((_n_q_21068+1.0)>=_n_shown_21067)))?double(d::i32((d::truth(double(d::i32(_n_into_21073)&d::i32(double(d::i32(_n_L_20989)|d::i32(_n_R_20990)))))?double(d::i32(_n_L_20989)|d::i32(_n_R_20990)):double(d::i32(_n_U_20991)|d::i32(_n_D_20992))))&d::i32(double(~d::i32(_n_into_21073)))):(d::truth((d::at(_n_nx_21074,3.0)>0.0))?_n_R_20990:(d::truth((d::at(_n_nx_21074,3.0)<0.0))?_n_L_20989:(d::truth((d::at(_n_nx_21074,2.0)>0.0))?_n_D_20992:_n_U_20991))));
(void)(this->_n_put_21005(_n_r_21069,_n_c_21070,([&]()->d::String{auto _n_logical_21159=_n_PATH_20994.get(double(d::i32(_n_into_21073)|d::i32(_n_outOf_21075)));return d::truth(_n_logical_21159)?_n_logical_21159:d::String(u"━");})()));
}}
}
{double _n_r_21076=0.0;
for(;d::truth((_n_r_21076<this->_n_rows_20996));(void)((_n_r_21076++))){d::check_cancel();(void)(([&](){auto&& _n_array_21160=_n_out_21033;auto _n_index_21161=_n_r_21076;auto _n_value_21162=d::join(d::at(this->_n_grid_21004,_n_r_21076),d::String(u""));d::put(_n_array_21160,_n_index_21161,_n_value_21162);return _n_value_21162;})());
}}

}
}

explicit Native_maze(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_21103=_n_meta_20977;
this->_n_cols_20995=_n_binding_21103->_p_cols;
this->_n_rows_20996=_n_binding_21103->_p_rows;
this->_n_mazes_20997=d::Map<double,std::shared_ptr<_n_Record_20988>>();
this->_n_CARVED_20999=((2.0*((_n_MW_20979*_n_MH_20980)-1.0))/_n_CARVE_20981);
this->_n_PERIOD_21000=(((this->_n_CARVED_20999+_n_SOLVE_20982)+_n_HOLD_20983)+_n_CLOSE_20984);
this->_n_H_21001=d::Array<uint8_t,true>(size_t(((_n_MH_20980+1.0)*_n_MW_20979)));
this->_n_V_21002=d::Array<uint8_t,true>(size_t((_n_MH_20980*(_n_MW_20979+1.0))));
this->_n_state_21003=d::Array<uint8_t,true>(size_t((_n_MW_20979*_n_MH_20980)));
this->_n_grid_21004=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_20996,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_20995));}));
this->_n_centre_21006=[=]( double _a0) mutable ->d::Array<double,false>{double _n_n_21029=_a0;
return d::Array<double,false>{((2.0*double(d::i32((_n_n_21029/_n_MW_20979))|d::i32(0.0)))+1.0),((4.0*d::mod(_n_n_21029,_n_MW_20979))+2.0)};};
this->_n_now_21008=d::Array<d::String,false>{};
this->_n_fresh_21009=d::Array<d::String,false>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_21087> _a1) mutable ->d::String{double _n_t_21077=_a0;
{
double _n_n_21078=std::floor(((_n_t_21077+_n_START_20985)/this->_n_PERIOD_21000));
double _n_p_21079=((_n_t_21077+_n_START_20985)-(_n_n_21078*this->_n_PERIOD_21000));
std::shared_ptr<_n_Record_20988> _n_m_21080=this->_n_get_20998(_n_n_21078);
double _n_k_21081=([&](){auto _n_argument_21104=double(_n_m_21080->_p_moves.size());auto _n_argument_21105=std::floor((_n_p_21079*_n_CARVE_20981));return d::minimum({_n_argument_21104,_n_argument_21105});})();
double _n_solved_21082=([&](){auto _n_argument_21106=1.0;auto _n_argument_21107=d::maximum({0.0,((_n_p_21079-this->_n_CARVED_20999)/_n_SOLVE_20982)});return d::minimum({_n_argument_21106,_n_argument_21107});})();
(void)(this->_n_draw_21007(_n_m_21080,_n_k_21081,_n_solved_21082,this->_n_now_21008));
double _n_close_21083=((((_n_p_21079-this->_n_CARVED_20999)-_n_SOLVE_20982)-_n_HOLD_20983)/_n_CLOSE_20984);
if(d::truth((_n_close_21083<=0.0))){d::check_cancel();return d::join(this->_n_now_21008,d::String(u"\n"));
}
(void)(([&](){auto _n_argument_21108=this->_n_get_20998((_n_n_21078+1.0));auto _n_argument_21109=0.0;auto _n_argument_21110=0.0;auto _n_argument_21111=this->_n_fresh_21009;return this->_n_draw_21007(_n_argument_21108,_n_argument_21109,_n_argument_21110,_n_argument_21111);})());
double _n_edge_21084=((4.0*([&](){auto _n_argument_21112=_n_MW_20979;auto _n_argument_21113=std::floor((_n_close_21083*(_n_MW_20979+1.0)));return d::minimum({_n_argument_21112,_n_argument_21113});})())+1.0);
return d::join(d::map(this->_n_now_21008,[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_line_21085=_a0;
double _n_r_21086=_a1;
return ([&](){auto _n_left_21114=d::slice(d::at(this->_n_fresh_21009,_n_r_21086),0.0,_n_edge_21084);auto _n_right_21115=d::slice(_n_line_21085,_n_edge_21084);return (d::string(_n_left_21114)+d::string(_n_right_21115));})();}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("maze").cols)*ascii::catalog_meta("maze").rows);auto _env=std::make_shared<_n_Record_21087>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &maze_meta(){return catalog_meta("maze");}
std::unique_ptr<Piece> make_maze(const AsciiPieceOptions &o){return std::make_unique<Native_maze>(o);}
}
