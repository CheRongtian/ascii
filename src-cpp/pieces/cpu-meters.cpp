// Direct, statically typed C++ from src/pieces/cpu-meters.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_6048;
struct _n_Record_6049;
struct _n_Record_6067;
struct _n_Record_6069;
struct _n_Record_6071;
struct _n_Record_6075;
struct _n_Record_6160;
struct _n_Record_6161;
struct _n_Record_6227;
struct _n_Record_6048{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_6049> _p_options{};
static std::shared_ptr<_n_Record_6048> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6048>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_6049>>(j["options"]);return out;}
};
struct _n_Record_6049{
d::Array<d::String,false> _p_commands{};
static std::shared_ptr<_n_Record_6049> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6049>();out->_p_commands=d::decode<d::Array<d::String,false>>(j["commands"]);return out;}
};
struct _n_Record_6067{
double _p_u{};
double _p_k{};
double _p_idle{};
double _p_base{};
d::Array<double,false> _p_part{};
static std::shared_ptr<_n_Record_6067> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6067>();out->_p_u=d::decode<double>(j["u"]);out->_p_k=d::decode<double>(j["k"]);out->_p_idle=d::decode<double>(j["idle"]);out->_p_base=d::decode<double>(j["base"]);out->_p_part=d::decode<d::Array<double,false>>(j["part"]);return out;}
};
struct _n_Record_6069{
double _p_who{};
double _p_left{};
double _p_load{};
d::Array<bool,false> _p_on{};
static std::shared_ptr<_n_Record_6069> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6069>();out->_p_who=d::decode<double>(j["who"]);out->_p_left=d::decode<double>(j["left"]);out->_p_load=d::decode<double>(j["load"]);out->_p_on=d::decode<d::Array<bool,false>>(j["on"]);return out;}
};
struct _n_Record_6071{
double _p_used{};
double _p_buf{};
double _p_cache{};
double _p_swap{};
static std::shared_ptr<_n_Record_6071> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6071>();out->_p_used=d::decode<double>(j["used"]);out->_p_buf=d::decode<double>(j["buf"]);out->_p_cache=d::decode<double>(j["cache"]);out->_p_swap=d::decode<double>(j["swap"]);return out;}
};
struct _n_Record_6075{
d::String _p_cmd{};
double _p_pid{};
d::String _p_user{};
double _p_virt{};
double _p_mem{};
double _p_time{};
double _p_w{};
double _p_cpu{};
static std::shared_ptr<_n_Record_6075> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6075>();out->_p_cmd=d::decode<d::String>(j["cmd"]);out->_p_pid=d::decode<double>(j["pid"]);out->_p_user=d::decode<d::String>(j["user"]);out->_p_virt=d::decode<double>(j["virt"]);out->_p_mem=d::decode<double>(j["mem"]);out->_p_time=d::decode<double>(j["time"]);out->_p_w=d::decode<double>(j["w"]);out->_p_cpu=d::decode<double>(j["cpu"]);return out;}
};
struct _n_Record_6160{
std::optional<d::Array<d::String,false>> _p_commands{};
static std::shared_ptr<_n_Record_6160> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6160>();out->_p_commands=d::decode<std::optional<d::Array<d::String,false>>>(j["commands"]);return out;}
};
struct _n_Record_6161{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_6161> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6161>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_6227{
double _p_who{};
double _p_left{};
double _p_load{};
d::Array<d::Nil,false> _p_on{};
static std::shared_ptr<_n_Record_6227> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6227>();out->_p_who=d::decode<double>(j["who"]);out->_p_left=d::decode<double>(j["left"]);out->_p_load=d::decode<double>(j["load"]);out->_p_on=d::decode<d::Array<d::Nil,false>>(j["on"]);return out;}
};
std::function<double()> _n_mulberry32_6056(double _a0);
double _n_clamp_6057(double _a0,double _a1,double _a2);
d::String _n_meter_6058(d::String _a0,d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _a1,d::String _a2);
d::String _n_size_6059(double _a0);
d::String _n_cpuTime_6060(double _a0);
std::shared_ptr<_n_Record_6048> _n_meta_6047=[](){return ([&](){auto _n_object_6166=std::make_shared<_n_Record_6048>();_n_object_6166->_p_name=d::String(u"cpu meters");_n_object_6166->_p_category=d::String(u"data");_n_object_6166->_p_note=d::String(u"htop-style core, memory and swap meters over a process list");_n_object_6166->_p_cols=66.0;_n_object_6166->_p_rows=16.0;_n_object_6166->_p_fps=10.0;_n_object_6166->_p_options=([&](){auto _n_object_6168=std::make_shared<_n_Record_6049>();_n_object_6168->_p_commands=d::Array<d::String,false>{d::String(u"build"),d::String(u"indexer"),d::String(u"server"),d::String(u"backup"),d::String(u"sync"),d::String(u"editor"),d::String(u"shell")};return _n_object_6168;})();return _n_object_6166;})();}();
const double _n_RATE_6050=[](){return 2.0;}();
const double _n_WARM_6051=[](){return 80.0;}();
const double _n_NCPU_6052=[](){return 8.0;}();
const double _n_MEM_6053=[](){return 15.5;}();
const double _n_SWAP_6054=[](){return 2.0;}();
const double _n_COL_6055=[](){return 31.0;}();
std::function<double()> _n_mulberry32_6056(double _a0){double _n_a_6082=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_6082=double(d::i32((_n_a_6082+1831565813.0))|d::i32(0.0))));
double _n_t_6083=d::imul(double(d::i32(_n_a_6082)^d::i32(double(d::u32(_n_a_6082)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_6082)));
(void)((_n_t_6083=double(d::i32((_n_t_6083+d::imul(double(d::i32(_n_t_6083)^d::i32(double(d::u32(_n_t_6083)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_6083)))))^d::i32(_n_t_6083))));
return (double(d::u32(double(d::i32(_n_t_6083)^d::i32(double(d::u32(_n_t_6083)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_clamp_6057(double _a0,double _a1,double _a2){double _n_v_6084=_a0;
double _n_lo_6085=_a1;
double _n_hi_6086=_a2;
return ([&](){auto _n_argument_6169=_n_lo_6085;auto _n_argument_6170=d::minimum({_n_hi_6086,_n_v_6084});return d::maximum({_n_argument_6169,_n_argument_6170});})();}

d::String _n_meter_6058(d::String _a0,d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _a1,d::String _a2){d::String _n_label_6087=_a0;
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_parts_6088=_a1;
d::String _n_text_6089=_a2;
{
double _n_inner_6090=(_n_COL_6055-5.0);
d::Array<d::String,false> _n_cells_6091=d::Array<d::String,false>(size_t(_n_inner_6090)).fill(d::String(u" "));
double _n_at_6092=0.0;
double _n_acc_6093=0.0;
for(auto &&_n_item_6171:_n_parts_6088){d::check_cancel();auto _n_binding_6172=_n_item_6171;
double _n_f_6094=std::get<0>(*_n_binding_6172);
d::String _n_g_6095=std::get<1>(*_n_binding_6172);
{
(void)((_n_acc_6093=(_n_acc_6093+_n_f_6094)));
{double _n_end_6096=([&](){auto _n_argument_6173=_n_inner_6090;auto _n_argument_6174=d::round((_n_acc_6093*_n_inner_6090));return d::minimum({_n_argument_6173,_n_argument_6174});})();
for(;d::truth((_n_at_6092<_n_end_6096));(void)((_n_at_6092++))){d::check_cancel();(void)(([&](){auto&& _n_array_6175=_n_cells_6091;auto _n_index_6176=_n_at_6092;auto _n_value_6177=_n_g_6095;d::put(_n_array_6175,_n_index_6176,_n_value_6177);return _n_value_6177;})());
}}

}
}
{double _n_i_6097=0.0;
for(;d::truth((_n_i_6097<double(_n_text_6089.size())));(void)((_n_i_6097++))){d::check_cancel();(void)(([&](){auto&& _n_array_6178=_n_cells_6091;auto _n_index_6179=((_n_inner_6090-double(_n_text_6089.size()))+_n_i_6097);auto _n_value_6180=d::at(_n_text_6089,_n_i_6097);d::put(_n_array_6178,_n_index_6179,_n_value_6180);return _n_value_6180;})());
}}
return (d::string(([&](){auto _n_left_6181=(d::string(d::padStart(_n_label_6087,3.0))+d::string(d::String(u"[")));auto _n_right_6182=d::join(_n_cells_6091,d::String(u""));return (d::string(_n_left_6181)+d::string(_n_right_6182));})())+d::string(d::String(u"]")));

}
}

d::String _n_size_6059(double _a0){double _n_gb_6098=_a0;
return (d::truth((_n_gb_6098<0.98))?(d::string(d::round((_n_gb_6098*1024.0)))+d::string(d::String(u"M"))):(d::string(d::fixed(_n_gb_6098,(d::truth((_n_gb_6098<10.0))?2.0:1.0)))+d::string(d::String(u"G"))));}

d::String _n_cpuTime_6060(double _a0){double _n_s_6099=_a0;
{
double _n_m_6100=std::floor((_n_s_6099/60.0));
double _n_sec_6101=(_n_s_6099-(_n_m_6100*60.0));
if(d::truth((_n_m_6100<60.0))){d::check_cancel();return (d::string((d::string(_n_m_6100)+d::string(d::String(u":"))))+d::string(d::padStart(d::fixed(_n_sec_6101,2.0),5.0,d::String(u"0"))));
}
return ([&](){auto _n_left_6183=(d::string(([&](){auto _n_left_6185=(d::string(std::floor((_n_m_6100/60.0)))+d::string(d::String(u"h")));auto _n_right_6186=d::padStart(d::string(d::mod(_n_m_6100,60.0)),2.0,d::String(u"0"));return (d::string(_n_left_6185)+d::string(_n_right_6186));})())+d::string(d::String(u":")));auto _n_right_6184=d::padStart(d::string(std::floor(_n_sec_6101)),2.0,d::String(u"0"));return (d::string(_n_left_6183)+d::string(_n_right_6184));})();

}
}

struct Native_cpu_meters final:ascii::Piece{
d::Array<d::String,false> _n_commands_6061{};
double _n_cols_6062{};
d::String _n_blank_6063{};
double _n_made_6064{};
std::function<double()> _n_rand_6065{};
d::Array<std::shared_ptr<_n_Record_6067>,false> _n_cores_6066{};
d::Array<std::shared_ptr<_n_Record_6069>,false> _n_jobs_6068{};
std::shared_ptr<_n_Record_6071> _n_mem_6070{};
d::Array<double,false> _n_load_6072{};
double _n_tasks_6073{};
d::Array<std::shared_ptr<_n_Record_6075>,false> _n_procs_6074{};
d::String _n_header_6080{};
std::function<d::String(double,std::shared_ptr<_n_Record_6161>)> _render;
void _n_reset_6076(){{
(void)((this->_n_made_6064=0.0));
(void)((this->_n_rand_6065=_n_mulberry32_6056(1.0)));
(void)((this->_n_cores_6066=d::Array<std::shared_ptr<_n_Record_6067>,false>(d::from(_n_NCPU_6052,[&]( ) mutable ->std::shared_ptr<_n_Record_6067>{return ([&](){auto _n_object_6226=std::make_shared<_n_Record_6067>();_n_object_6226->_p_u=0.1;_n_object_6226->_p_k=0.02;_n_object_6226->_p_idle=(0.03+(this->_n_rand_6065()*0.14));_n_object_6226->_p_base=0.1;_n_object_6226->_p_part=d::Array<double,false>{0.0,0.0};return _n_object_6226;})();}))));
(void)((this->_n_jobs_6068=d::Array<std::shared_ptr<_n_Record_6069>,false>(d::map(d::map(d::Array<double,false>{0.0,1.0},[&]( double _a0) mutable ->std::shared_ptr<_n_Record_6227>{double _n_who_6102=_a0;
return ([&](){auto _n_object_6230=std::make_shared<_n_Record_6227>();_n_object_6230->_p_who=_n_who_6102;_n_object_6230->_p_left=0.0;_n_object_6230->_p_load=0.0;_n_object_6230->_p_on=d::Array<d::Nil,false>{};return _n_object_6230;})();}),[&](const auto &_n_element_6231){return ([&](){auto _n_record_6232=_n_element_6231;auto _n_record_6233=std::make_shared<_n_Record_6069>();_n_record_6233->_p_who=_n_record_6232->_p_who;_n_record_6233->_p_left=_n_record_6232->_p_left;_n_record_6233->_p_load=_n_record_6232->_p_load;_n_record_6233->_p_on=d::Array<bool,false>(_n_record_6232->_p_on);return _n_record_6233;})();}))));
(void)((this->_n_mem_6070=([&](){auto _n_object_6236=std::make_shared<_n_Record_6071>();_n_object_6236->_p_used=4.6;_n_object_6236->_p_buf=0.31;_n_object_6236->_p_cache=5.2;_n_object_6236->_p_swap=0.13;return _n_object_6236;})()));
(void)((this->_n_load_6072=d::Array<double,false>{1.62,1.24,0.91}));
(void)((this->_n_tasks_6073=141.0));
(void)((this->_n_procs_6074=d::map(this->_n_commands_6061,[&]( d::String _a0,double _a1) mutable ->std::shared_ptr<_n_Record_6075>{d::String _n_cmd_6103=_a0;
double _n_i_6104=_a1;
return ([&](){auto _n_object_6240=std::make_shared<_n_Record_6075>();_n_object_6240->_p_cmd=d::slice(d::string(_n_cmd_6103),0.0,13.0);_n_object_6240->_p_pid=(1000.0+std::floor((this->_n_rand_6065()*48000.0)));_n_object_6240->_p_user=(d::truth((d::mod(_n_i_6104,3.0)==2.0))?d::String(u"root"):d::String(u"app"));_n_object_6240->_p_virt=(0.4+(this->_n_rand_6065()*3.2));_n_object_6240->_p_mem=(0.4+(this->_n_rand_6065()*4.0));_n_object_6240->_p_time=(20.0+(this->_n_rand_6065()*3000.0));_n_object_6240->_p_w=this->_n_rand_6065();_n_object_6240->_p_cpu=0.0;return _n_object_6240;})();})));

}
}

void _n_step_6077(){{
for(auto &&_n_item_6241:this->_n_jobs_6068){d::check_cancel();std::shared_ptr<_n_Record_6069> _n_j_6105=_n_item_6241;
{
if(d::truth((_n_j_6105->_p_left>0.0))){d::check_cancel();(void)((_n_j_6105->_p_left--));
}else {d::check_cancel();if(d::truth((this->_n_rand_6065()<d::at(d::Array<double,false>{0.1,0.06},_n_j_6105->_p_who)))){d::check_cancel();(void)((_n_j_6105->_p_left=(5.0+std::floor((this->_n_rand_6065()*16.0)))));
(void)((_n_j_6105->_p_load=(0.35+(this->_n_rand_6065()*0.55))));
(void)((_n_j_6105->_p_on=d::map(this->_n_cores_6066,[&]( ) mutable ->bool{return (this->_n_rand_6065()<(0.3+(_n_j_6105->_p_load*0.5)));})));
}
}

}
}
double _n_busy_6106=0.0;
d::Array<double,false> _n_share_6107=d::map(this->_n_jobs_6068,[&]( ) mutable ->double{return 0.0;});
for(auto &&_n_item_6242:d::entries(this->_n_cores_6066)){d::check_cancel();auto _n_binding_6243=_n_item_6242;
double _n_i_6108=std::get<0>(*_n_binding_6243);
std::shared_ptr<_n_Record_6067> _n_c_6109=std::get<1>(*_n_binding_6243);
{
if(d::truth((this->_n_rand_6065()<0.06))){d::check_cancel();(void)((_n_c_6109->_p_idle=(0.02+(this->_n_rand_6065()*0.2))));
}
(void)((_n_c_6109->_p_base=(_n_c_6109->_p_base+((_n_c_6109->_p_idle-_n_c_6109->_p_base)*0.6))));
(void)(d::forEach(this->_n_jobs_6068,[&]( std::shared_ptr<_n_Record_6069> _a0,double _a1) mutable ->double{std::shared_ptr<_n_Record_6069> _n_j_6110=_a0;
double _n_n_6111=_a1;
return ([&](){auto&& _n_array_6244=_n_c_6109->_p_part;auto _n_index_6245=_n_n_6111;auto _n_value_6246=(d::at(_n_array_6244,_n_index_6245)+((((d::truth(_n_j_6110->_p_left)&&d::truth(d::at(_n_j_6110->_p_on,_n_i_6108)))?_n_j_6110->_p_load:0.0)-d::at(_n_c_6109->_p_part,_n_n_6111))*0.6));d::put(_n_array_6244,_n_index_6245,_n_value_6246);return _n_value_6246;})();}));
double _n_want_6112=((_n_c_6109->_p_base+d::at(_n_c_6109->_p_part,0.0))+d::at(_n_c_6109->_p_part,1.0));
(void)((_n_c_6109->_p_u=([&](){auto _n_argument_6247=(_n_want_6112+((this->_n_rand_6065()-0.5)*0.12));auto _n_argument_6248=0.004;auto _n_argument_6249=0.95;return _n_clamp_6057(_n_argument_6247,_n_argument_6248,_n_argument_6249);})()));
(void)((_n_c_6109->_p_k=([&](){auto _n_argument_6250=([&](){auto _n_left_6251=(_n_c_6109->_p_u*(0.1+(this->_n_rand_6065()*0.22)));auto _n_right_6252=(this->_n_rand_6065()*0.015);return (_n_left_6251+_n_right_6252);})();auto _n_argument_6253=0.0;auto _n_argument_6254=((0.97+(this->_n_rand_6065()*0.03))-_n_c_6109->_p_u);return _n_clamp_6057(_n_argument_6250,_n_argument_6253,_n_argument_6254);})()));
(void)((_n_busy_6106=(_n_busy_6106+(_n_c_6109->_p_u+_n_c_6109->_p_k))));
(void)(d::forEach(this->_n_jobs_6068,[&]( std::shared_ptr<_n_Record_6069> _a0,double _a1) mutable ->double{std::shared_ptr<_n_Record_6069> _n___6113=_a0;
double _n_n_6114=_a1;
return ([&](){auto&& _n_array_6255=_n_share_6107;auto _n_index_6256=_n_n_6114;auto _n_value_6257=(d::at(_n_array_6255,_n_index_6256)+(((_n_c_6109->_p_u+_n_c_6109->_p_k)*d::at(_n_c_6109->_p_part,_n_n_6114))/_n_want_6112));d::put(_n_array_6255,_n_index_6256,_n_value_6257);return _n_value_6257;})();}));

}
}
bool _n_working_6115=d::some(this->_n_jobs_6068,[&]( std::shared_ptr<_n_Record_6069> _a0) mutable ->double{std::shared_ptr<_n_Record_6069> _n_j_6116=_a0;
return _n_j_6116->_p_left;});
(void)((this->_n_mem_6070->_p_used=([&](){auto _n_argument_6258=((this->_n_mem_6070->_p_used+(((4.4+(d::truth(_n_working_6115)?2.6:0.0))-this->_n_mem_6070->_p_used)*0.12))+((this->_n_rand_6065()-0.5)*0.05));auto _n_argument_6259=3.0;auto _n_argument_6260=9.0;return _n_clamp_6057(_n_argument_6258,_n_argument_6259,_n_argument_6260);})()));
(void)((this->_n_mem_6070->_p_buf=([&](){auto _n_argument_6261=(this->_n_mem_6070->_p_buf+((this->_n_rand_6065()-0.5)*0.01));auto _n_argument_6262=0.25;auto _n_argument_6263=0.4;return _n_clamp_6057(_n_argument_6261,_n_argument_6262,_n_argument_6263);})()));
(void)((this->_n_mem_6070->_p_cache=([&](){auto _n_argument_6264=(this->_n_mem_6070->_p_cache+((this->_n_rand_6065()-0.45)*0.03));auto _n_argument_6265=4.0;auto _n_argument_6266=(((_n_MEM_6053-0.4)-this->_n_mem_6070->_p_used)-this->_n_mem_6070->_p_buf);return _n_clamp_6057(_n_argument_6264,_n_argument_6265,_n_argument_6266);})()));
(void)((this->_n_mem_6070->_p_swap=([&](){auto _n_argument_6267=(this->_n_mem_6070->_p_swap+((this->_n_rand_6065()-0.5)*0.004));auto _n_argument_6268=0.11;auto _n_argument_6269=0.16;return _n_clamp_6057(_n_argument_6267,_n_argument_6268,_n_argument_6269);})()));
(void)((this->_n_load_6072=d::map(this->_n_load_6072,[&]( double _a0,double _a1) mutable ->double{double _n_l_6117=_a0;
double _n_i_6118=_a1;
return (_n_l_6117+((_n_busy_6106-_n_l_6117)*(1.0-std::exp((((-d::number(1.0))/_n_RATE_6050)/d::at(d::Array<double,false>{60.0,300.0,900.0},_n_i_6118))))));})));
(void)((this->_n_tasks_6073=([&](){auto _n_argument_6270=(this->_n_tasks_6073+d::round(((this->_n_rand_6065()-0.5)*2.2)));auto _n_argument_6271=136.0;auto _n_argument_6272=149.0;return _n_clamp_6057(_n_argument_6270,_n_argument_6271,_n_argument_6272);})()));
double _n_jobCpu_6119=(d::reduce(_n_share_6107,[&]( double _a0,double _a1) mutable ->double{double _n_a_6120=_a0;
double _n_b_6121=_a1;
return (_n_a_6120+_n_b_6121);},0.0)*100.0);
double _n_sw_6122=0.0;
(void)(d::forEach(this->_n_procs_6074,[&]( std::shared_ptr<_n_Record_6075> _a0) mutable ->double{std::shared_ptr<_n_Record_6075> _n_p_6123=_a0;
return ((_n_p_6123->_p_w=([&](){auto _n_argument_6273=(_n_p_6123->_p_w+((this->_n_rand_6065()-0.5)*0.3));auto _n_argument_6274=0.02;auto _n_argument_6275=1.0;return _n_clamp_6057(_n_argument_6273,_n_argument_6274,_n_argument_6275);})()),(_n_sw_6122=(_n_sw_6122+(_n_p_6123->_p_w*_n_p_6123->_p_w))));}));
(void)(d::forEach(this->_n_procs_6074,[&]( std::shared_ptr<_n_Record_6075> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_6075> _n_p_6124=_a0;
double _n_i_6125=_a1;
{
double _n_n_6126=d::findIndex(this->_n_jobs_6068,[&]( std::shared_ptr<_n_Record_6069> _a0) mutable ->bool{std::shared_ptr<_n_Record_6069> _n_j_6127=_a0;
return (_n_j_6127->_p_who==_n_i_6125);});
bool _n_mine_6128=([&]()->bool{auto _n_logical_6276=(_n_n_6126>=0.0);return d::truth(_n_logical_6276)?(d::at(this->_n_jobs_6068,_n_n_6126)->_p_left>0.0):_n_logical_6276;})();
(void)((_n_p_6124->_p_cpu=(((((((_n_busy_6106*100.0)-_n_jobCpu_6119)*0.75)*_n_p_6124->_p_w)*_n_p_6124->_p_w)/_n_sw_6122)+(d::truth((_n_n_6126>=0.0))?(d::at(_n_share_6107,_n_n_6126)*100.0):0.0))));
(void)((_n_p_6124->_p_mem=([&](){auto _n_argument_6277=((_n_p_6124->_p_mem+((this->_n_rand_6065()-0.5)*0.06))+(d::truth(_n_mine_6128)?0.05:(-d::number(0.004))));auto _n_argument_6278=0.2;auto _n_argument_6279=14.0;return _n_clamp_6057(_n_argument_6277,_n_argument_6278,_n_argument_6279);})()));
(void)((_n_p_6124->_p_time=(_n_p_6124->_p_time+((_n_p_6124->_p_cpu/100.0)/_n_RATE_6050))));

}
}));

}
}

void _n_fill_6078(double _a0){double _n_need_6129=_a0;
{
if(d::truth((_n_need_6129<this->_n_made_6064))){d::check_cancel();(void)(this->_n_reset_6076());
}
{for(;d::truth((this->_n_made_6064<_n_need_6129));(void)((this->_n_made_6064++))){d::check_cancel();(void)(this->_n_step_6077());
}}

}
}

d::String _n_row_6079(d::String _a0,d::String _a1,d::String _a2,d::String _a3,d::String _a4,d::String _a5,d::String _a6,d::String _a7,d::String _a8){d::String _n_pid_6130=_a0;
d::String _n_user_6131=_a1;
d::String _n_virt_6132=_a2;
d::String _n_res_6133=_a3;
d::String _n_s_6134=_a4;
d::String _n_cpu_6135=_a5;
d::String _n_mem_6136=_a6;
d::String _n_time_6137=_a7;
d::String _n_cmd_6138=_a8;
return d::padEnd((d::string((d::string(([&](){auto _n_left_6280=(d::string(([&](){auto _n_left_6282=(d::string(([&](){auto _n_left_6284=(d::string((d::string((d::string(([&](){auto _n_left_6286=(d::string(([&](){auto _n_left_6288=(d::string(([&](){auto _n_left_6290=(d::string((d::string(d::String(u" "))+d::string(d::padStart(_n_pid_6130,5.0))))+d::string(d::String(u" ")));auto _n_right_6291=d::padEnd(_n_user_6131,8.0);return (d::string(_n_left_6290)+d::string(_n_right_6291));})())+d::string(d::String(u" ")));auto _n_right_6289=d::padStart(_n_virt_6132,5.0);return (d::string(_n_left_6288)+d::string(_n_right_6289));})())+d::string(d::String(u" ")));auto _n_right_6287=d::padStart(_n_res_6133,5.0);return (d::string(_n_left_6286)+d::string(_n_right_6287));})())+d::string(d::String(u" "))))+d::string(_n_s_6134)))+d::string(d::String(u" ")));auto _n_right_6285=d::padStart(_n_cpu_6135,5.0);return (d::string(_n_left_6284)+d::string(_n_right_6285));})())+d::string(d::String(u" ")));auto _n_right_6283=d::padStart(_n_mem_6136,4.0);return (d::string(_n_left_6282)+d::string(_n_right_6283));})())+d::string(d::String(u" ")));auto _n_right_6281=d::padStart(_n_time_6137,9.0);return (d::string(_n_left_6280)+d::string(_n_right_6281));})())+d::string(d::String(u"  "))))+d::string(_n_cmd_6138)),this->_n_cols_6062);}

explicit Native_cpu_meters(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_6187=d::decode<std::shared_ptr<_n_Record_6160>>(_options.data);
this->_n_commands_6061=(d::present(_n_binding_6187->_p_commands)?d::read(_n_binding_6187->_p_commands):_n_meta_6047->_p_options->_p_commands);
auto _n_binding_6188=_n_meta_6047;
this->_n_cols_6062=_n_binding_6188->_p_cols;
this->_n_blank_6063=d::repeat(d::String(u" "),this->_n_cols_6062);
(void)(this->_n_reset_6076());
this->_n_header_6080=this->_n_row_6079(d::String(u"PID"),d::String(u"USER"),d::String(u"VIRT"),d::String(u"RES"),d::String(u"S"),d::String(u"CPU%"),d::String(u"MEM%"),d::String(u"TIME+"),d::String(u"Command"));
_render=[=]( double _a0,std::shared_ptr<_n_Record_6161> _a1) mutable ->d::String{double _n_t_6139=_a0;
{
(void)(this->_n_fill_6078((_n_WARM_6051+std::floor((_n_t_6139*_n_RATE_6050)))));
auto _n_core_6140=[&]( double _a0) mutable ->d::String{double _n_i_6141=_a0;
{
std::shared_ptr<_n_Record_6067> _n_c_6142=d::at(this->_n_cores_6066,_n_i_6141);
return ([&](){auto _n_argument_6189=d::string(_n_i_6141);auto _n_argument_6190=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{std::make_shared<std::tuple<double,d::String>>(_n_c_6142->_p_u,d::String(u"|")),std::make_shared<std::tuple<double,d::String>>(_n_c_6142->_p_k,d::String(u"#"))};auto _n_argument_6191=(d::string(d::fixed(((_n_c_6142->_p_u+_n_c_6142->_p_k)*100.0),1.0))+d::string(d::String(u"%")));return _n_meter_6058(_n_argument_6189,_n_argument_6190,_n_argument_6191);})();

}
};
d::Array<d::String,false> _n_left_6143=d::Array<d::String,false>{};
d::Array<d::String,false> _n_right_6144=d::Array<d::String,false>{};
{double _n_i_6145=0.0;
for(;d::truth((_n_i_6145<(_n_NCPU_6052/2.0)));(void)((_n_i_6145++))){d::check_cancel();(void)((_n_left_6143.push(_n_core_6140(_n_i_6145)),_n_right_6144.push(_n_core_6140((_n_i_6145+(_n_NCPU_6052/2.0))))));
}}
(void)(([&](){auto _n_argument_6192=([&](){auto _n_argument_6193=d::String(u"Mem");auto _n_argument_6194=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{std::make_shared<std::tuple<double,d::String>>((this->_n_mem_6070->_p_used/_n_MEM_6053),d::String(u"|")),std::make_shared<std::tuple<double,d::String>>((this->_n_mem_6070->_p_buf/_n_MEM_6053),d::String(u"#")),std::make_shared<std::tuple<double,d::String>>((this->_n_mem_6070->_p_cache/_n_MEM_6053),d::String(u"*"))};auto _n_argument_6195=(d::string((d::string((d::string(_n_size_6059(this->_n_mem_6070->_p_used))+d::string(d::String(u"/"))))+d::string(_n_MEM_6053)))+d::string(d::String(u"G")));return _n_meter_6058(_n_argument_6193,_n_argument_6194,_n_argument_6195);})();auto _n_argument_6196=([&](){auto _n_argument_6197=d::String(u"Swp");auto _n_argument_6198=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{std::make_shared<std::tuple<double,d::String>>((this->_n_mem_6070->_p_swap/_n_SWAP_6054),d::String(u"|"))};auto _n_argument_6199=(d::string(([&](){auto _n_left_6200=(d::string(_n_size_6059(this->_n_mem_6070->_p_swap))+d::string(d::String(u"/")));auto _n_right_6201=d::fixed(_n_SWAP_6054,2.0);return (d::string(_n_left_6200)+d::string(_n_right_6201));})())+d::string(d::String(u"G")));return _n_meter_6058(_n_argument_6197,_n_argument_6198,_n_argument_6199);})();auto _n_argument_6202=d::String(u"");return _n_left_6143.push(_n_argument_6192,_n_argument_6196,_n_argument_6202);})());
double _n_running_6146=([&](){auto _n_argument_6203=1.0;auto _n_argument_6204=double(d::filter(this->_n_cores_6066,[&]( std::shared_ptr<_n_Record_6067> _a0) mutable ->bool{std::shared_ptr<_n_Record_6067> _n_c_6147=_a0;
return ((_n_c_6147->_p_u+_n_c_6147->_p_k)>0.45);}).size());return d::maximum({_n_argument_6203,_n_argument_6204});})();
double _n_up_6148=(((((4.0*86400.0)+(3.0*3600.0))+(12.0*60.0))+45.0)+std::floor(_n_t_6139));
d::Array<d::String,false> _n_hms_6149=d::map(d::Array<double,false>{d::mod(std::floor((_n_up_6148/3600.0)),24.0),d::mod(std::floor((_n_up_6148/60.0)),60.0),d::mod(_n_up_6148,60.0)},[&]( double _a0) mutable ->d::String{double _n_n_6150=_a0;
return d::padStart(d::string(_n_n_6150),2.0,d::String(u"0"));});
(void)(([&](){auto _n_argument_6205=(d::string((d::string((d::string((d::string((d::string((d::string(d::String(u"Tasks: "))+d::string(this->_n_tasks_6073)))+d::string(d::String(u", "))))+d::string(((this->_n_tasks_6073*3.0)-5.0))))+d::string(d::String(u" thr; "))))+d::string(_n_running_6146)))+d::string(d::String(u" running")));auto _n_argument_6206=(d::string(d::String(u"Load average: "))+d::string(d::join(d::map(this->_n_load_6072,[&]( double _a0) mutable ->d::String{double _n_l_6151=_a0;
return d::fixed(_n_l_6151,2.0);}),d::String(u" "))));auto _n_argument_6207=([&](){auto _n_left_6208=(d::string((d::string(d::String(u"Uptime: "))+d::string(std::floor((_n_up_6148/86400.0)))))+d::string(d::String(u" days, ")));auto _n_right_6209=d::join(_n_hms_6149,d::String(u":"));return (d::string(_n_left_6208)+d::string(_n_right_6209));})();return _n_right_6144.push(_n_argument_6205,_n_argument_6206,_n_argument_6207);})());
d::Array<d::String,false> _n_lines_6152=d::Array<d::String,false>{this->_n_blank_6063};
auto _n_fit_6153=[&]( d::String _a0) mutable ->d::String{d::String _n_s_6154=_a0;
return d::padEnd(d::slice(_n_s_6154,0.0,_n_COL_6055),_n_COL_6055);};
{double _n_r_6155=0.0;
for(;d::truth((_n_r_6155<double(_n_left_6143.size())));(void)((_n_r_6155++))){d::check_cancel();(void)(_n_lines_6152.push((d::string(([&](){auto _n_left_6210=(d::string((d::string(d::String(u" "))+d::string(_n_fit_6153(d::at(_n_left_6143,_n_r_6155)))))+d::string(d::String(u"  ")));auto _n_right_6211=_n_fit_6153(d::at(_n_right_6144,_n_r_6155));return (d::string(_n_left_6210)+d::string(_n_right_6211));})())+d::string(d::String(u" ")))));
}}
(void)(_n_lines_6152.push(this->_n_blank_6063,this->_n_header_6080));
d::Array<std::shared_ptr<_n_Record_6075>,false> _n_top_6156=([&](){d::Array<std::shared_ptr<_n_Record_6075>,false> _n_array_6212;for(const auto &_v:this->_n_procs_6074)_n_array_6212.push(_v);return _n_array_6212;})().sort([=]( std::shared_ptr<_n_Record_6075> _a0,std::shared_ptr<_n_Record_6075> _a1) mutable ->double{std::shared_ptr<_n_Record_6075> _n_a_6157=_a0;
std::shared_ptr<_n_Record_6075> _n_b_6158=_a1;
return (_n_b_6158->_p_cpu-_n_a_6157->_p_cpu);}).slice(0.0,5.0);
for(auto &&_n_item_6213:_n_top_6156){d::check_cancel();std::shared_ptr<_n_Record_6075> _n_p_6159=_n_item_6213;
(void)(_n_lines_6152.push(([&](){auto _n_argument_6214=d::string(_n_p_6159->_p_pid);auto _n_argument_6215=_n_p_6159->_p_user;auto _n_argument_6216=_n_size_6059(_n_p_6159->_p_virt);auto _n_argument_6217=_n_size_6059(((_n_p_6159->_p_mem/100.0)*_n_MEM_6053));auto _n_argument_6218=(d::truth((_n_p_6159->_p_cpu>30.0))?d::String(u"R"):d::String(u"S"));auto _n_argument_6219=d::fixed(_n_p_6159->_p_cpu,1.0);auto _n_argument_6220=d::fixed(_n_p_6159->_p_mem,1.0);auto _n_argument_6221=_n_cpuTime_6060(_n_p_6159->_p_time);auto _n_argument_6222=_n_p_6159->_p_cmd;return this->_n_row_6079(_n_argument_6214,_n_argument_6215,_n_argument_6216,_n_argument_6217,_n_argument_6218,_n_argument_6219,_n_argument_6220,_n_argument_6221,_n_argument_6222);})()));
}
while(d::truth((double(_n_lines_6152.size())<_n_meta_6047->_p_rows))){d::check_cancel();(void)(_n_lines_6152.push(this->_n_blank_6063));
}
return d::join(_n_lines_6152,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("cpu-meters").cols)*ascii::catalog_meta("cpu-meters").rows);auto _env=std::make_shared<_n_Record_6161>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &cpu_meters_meta(){return catalog_meta("cpu-meters");}
std::unique_ptr<Piece> make_cpu_meters(const AsciiPieceOptions &o){return std::make_unique<Native_cpu_meters>(o);}
}
