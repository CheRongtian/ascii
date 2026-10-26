// Direct, statically typed C++ from src/pieces/boot-log.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_3101;
struct _n_Record_3119;
struct _n_Record_3171;
struct _n_Record_3101{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_3101> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3101>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_3119{
double _p_at{};
std::function<d::String(double)> _p_text{};
static std::shared_ptr<_n_Record_3119> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3119>();out->_p_at=d::decode<double>(j["at"]);out->_p_text=d::decode<std::function<d::String(double)>>(j["text"]);return out;}
};
struct _n_Record_3171{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_3171> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3171>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_3111(double _a0);
std::shared_ptr<_n_Record_3101> _n_meta_3100=[](){return ([&](){auto _n_object_3174=std::make_shared<_n_Record_3101>();_n_object_3174->_p_name=d::String(u"boot log");_n_object_3174->_p_category=d::String(u"ui");_n_object_3174->_p_note=d::String(u"a self test counts memory, then the boot log scrolls by");_n_object_3174->_p_cols=64.0;_n_object_3174->_p_rows=16.0;_n_object_3174->_p_fps=15.0;return _n_object_3174;})();}();
const double _n_W_3102=[](){return 62.0;}();
const double _n_MEMORY_3103=[](){return 16384.0;}();
const double _n_MEM_AT_3104=[](){return 0.4;}();
const double _n_TEST_3105=[](){return 2.0;}();
const d::String _n_SPIN_3106=[](){return d::String(u"|/-\\");}();
const d::String _n_EIGHTHS_3107=[](){return d::String(u"░▏▎▍▌▋▊▉");}();
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_KERNEL_3108=[](){return d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{std::make_shared<std::tuple<double,d::String>>(0.0,d::String(u"kernel 6.8.0 starting on 8 cpus")),std::make_shared<std::tuple<double,d::String>>(0.0,d::String(u"command line: root=/dev/sda2 ro quiet")),std::make_shared<std::tuple<double,d::String>>(0.004,d::String(u"memory: 16384 MB available, 412 MB reserved")),std::make_shared<std::tuple<double,d::String>>(0.077,d::String(u"smp: brought up 1 node, 8 cpus")),std::make_shared<std::tuple<double,d::String>>(0.082,d::String(u"pci: probing bus 0000:00")),std::make_shared<std::tuple<double,d::String>>(0.047,d::String(u"pci 0000:00:17.0: sata controller, 6 ports")),std::make_shared<std::tuple<double,d::String>>(0.087,d::String(u"usb 1-1: new high speed device, number 2")),std::make_shared<std::tuple<double,d::String>>(0.022,d::String(u"usb 1-4: new full speed device, number 3")),std::make_shared<std::tuple<double,d::String>>(0.084,d::String(u"sd 0:0:0:0: [sda] 1000215216 sectors (512 GB)")),std::make_shared<std::tuple<double,d::String>>(0.002,d::String(u" sda: sda1 sda2")),std::make_shared<std::tuple<double,d::String>>(0.107,d::String(u"eth0: link up, 1000 Mb/s, full duplex")),std::make_shared<std::tuple<double,d::String>>(0.129,d::String(u"ext4: mounted sda2 read-only")),std::make_shared<std::tuple<double,d::String>>(0.062,d::String(u"init: running /sbin/init"))};}();
d::Array<std::shared_ptr<std::tuple<double,d::String,std::optional<double>>>,false> _n_SERVICES_3109=[](){return d::Array<std::shared_ptr<std::tuple<double,d::String,std::optional<double>>>,false>{std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.35,d::String(u"[  OK  ] mounted root file system"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.12,d::String(u"[  OK  ] started file system check on sda1"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.08,d::String(u"[  OK  ] reached target local file systems"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.2,d::String(u"[  OK  ] started journal service"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.1,d::String(u"[  OK  ] started device manager"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.06,d::String(u"[  OK  ] created runtime directories"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.15,d::String(u"[  OK  ] started load kernel modules"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.25,d::String(u"[ WARN ] clock not synced, using hardware time"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.2,d::String(u"[  OK  ] started system logger"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.08,d::String(u"[  OK  ] reached target sockets"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.1,d::String(u"[  OK  ] reached target basic system"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.15,d::String(u"[  OK  ] finished waiting for network"),std::optional<double>(2.6)),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.1,d::String(u"[  OK  ] reached target network"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.25,d::String(u"[  OK  ] synced clock to network time"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.1,d::String(u"[  OK  ] started secure shell server"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.08,d::String(u"[  OK  ] started job scheduler"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.1,d::String(u"[  OK  ] started print spooler"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.3,d::String(u"[  OK  ] reached target multi-user system"),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.5,d::String(u""),std::optional<double>{}),std::make_shared<std::tuple<double,d::String,std::optional<double>>>(0.1,d::String(u"node-1 login: "),std::optional<double>{})};}();
const double _n_WAIT_3110=[](){return 3.5;}();
std::function<double()> _n_mulberry32_3111(double _a0){double _n_a_3126=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_3126=double(d::i32((_n_a_3126+1831565813.0))|d::i32(0.0))));
double _n_t_3127=d::imul(double(d::i32(_n_a_3126)^d::i32(double(d::u32(_n_a_3126)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_3126)));
(void)((_n_t_3127=double(d::i32((_n_t_3127+d::imul(double(d::i32(_n_t_3127)^d::i32(double(d::u32(_n_t_3127)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_3127)))))^d::i32(_n_t_3127))));
return (double(d::u32(double(d::i32(_n_t_3127)^d::i32(double(d::u32(_n_t_3127)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_boot_log final:ascii::Piece{
double _n_cols_3112{};
double _n_rows_3113{};
std::function<double()> _n_rand_3114{};
d::Array<std::shared_ptr<_n_Record_3119>,false> _n_entries_3118{};
double _n_at_3120{};
double _n_stamp_3122{};
double _n_login_3123{};
double _n_period_3124{};
double _n_start_3125{};
std::function<d::String(double,std::shared_ptr<_n_Record_3171>)> _render;
d::String _n_row_3115(d::String _a0,d::String _a1,std::optional<d::String> _a2){d::String _n_label_3128=_a0;
d::String _n_detail_3129=_a1;
d::String _n_status_3130=(d::present(_a2)?d::read(_a2):d::String(u""));
{
d::String _n_left_3131=(d::string(d::padEnd(_n_label_3128,11.0))+d::string(_n_detail_3129));
return (d::string(_n_left_3131)+d::string(d::padStart(_n_status_3130,(_n_W_3102-double(_n_left_3131.size())))));

}
}

std::function<d::String(double)> _n_probe_3116(d::String _a0,d::String _a1,d::String _a2,double _a3){d::String _n_label_3132=_a0;
d::String _n_detail_3133=_a1;
d::String _n_status_3134=_a2;
double _n_done_3135=_a3;
return [=]( double _a0) mutable ->d::String{double _n_now_3136=_a0;
return (d::truth((_n_now_3136>=_n_done_3135))?this->_n_row_3115(_n_label_3132,_n_detail_3133,std::optional<d::String>(_n_status_3134)):([&](){auto _n_argument_3192=_n_label_3132;auto _n_argument_3193=(d::string(d::String(u"detecting "))+d::string(d::at(_n_SPIN_3106,d::mod(std::floor(((_n_now_3136+_n_done_3135)*10.0)),4.0))));return this->_n_row_3115(_n_argument_3192,_n_argument_3193,std::optional<d::String>{});})());};}

double _n_tested_3117(double _a0){double _n_now_3137=_a0;
return ([&](){auto _n_argument_3194=1.0;auto _n_argument_3195=d::maximum({0.0,((_n_now_3137-_n_MEM_AT_3104)/_n_TEST_3105)});return d::minimum({_n_argument_3194,_n_argument_3195});})();}

double _n_put_3121(std::variant<d::String,std::function<d::String(double)>> _a0){std::variant<d::String,std::function<d::String(double)>> _n_text_3139=_a0;
return this->_n_entries_3118.push(([&](){auto _n_object_3197=std::make_shared<_n_Record_3119>();_n_object_3197->_p_at=this->_n_at_3120;_n_object_3197->_p_text=(d::truth((d::typeOf(_n_text_3139)==d::String(u"string")))?[=]( double _a0) mutable ->d::String{return std::get<d::String>(_n_text_3139);}:std::get<std::function<d::String(double)>>(_n_text_3139));return _n_object_3197;})());}

explicit Native_boot_log(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_3175=_n_meta_3100;
this->_n_cols_3112=_n_binding_3175->_p_cols;
this->_n_rows_3113=_n_binding_3175->_p_rows;
this->_n_rand_3114=_n_mulberry32_3111(11.0);
this->_n_entries_3118=d::Array<std::shared_ptr<_n_Record_3119>,false>{};
this->_n_at_3120=0.0;
(void)((this->_n_at_3120=0.12));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_row_3115(d::String(u"system firmware 2.31.0"),d::String(u""),std::optional<d::String>(d::String(u"self test"))))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(d::repeat(d::String(u"─"),_n_W_3102))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_row_3115(d::String(u"cpu"),d::String(u"4 cores, 8 threads at 2.40 GHz"),std::optional<d::String>(d::String(u"ok"))))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_row_3115(d::String(u"cache"),d::String(u"l1 256 KB   l2 2 MB   l3 8 MB"),std::optional<d::String>(d::String(u"ok"))))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121([=]( double _a0) mutable ->d::String{double _n_now_3141=_a0;
{
double _n_f_3142=this->_n_tested_3117(_n_now_3141);
double _n_mb_3143=std::floor((_n_f_3142*_n_MEMORY_3103));
return ([&](){auto _n_argument_3176=d::String(u"memory");auto _n_argument_3177=(d::string((d::string((d::string(d::padStart(d::string(_n_mb_3143),5.0))+d::string(d::String(u" MB of "))))+d::string(_n_MEMORY_3103)))+d::string(d::String(u" MB")));auto _n_argument_3178=(d::truth((_n_f_3142<1.0))?d::String(u"testing"):d::String(u"ok"));return this->_n_row_3115(_n_argument_3176,_n_argument_3177,std::optional<d::String>(_n_argument_3178));})();

}
}));
(void)(this->_n_put_3121([=]( double _a0) mutable ->d::String{double _n_now_3144=_a0;
{
double _n_f_3145=this->_n_tested_3117(_n_now_3144);
double _n_fill_3146=(_n_f_3145*32.0);
double _n_full_3147=std::floor(_n_fill_3146);
d::String _n_bar_3148=d::padEnd(([&](){auto _n_left_3179=d::repeat(d::String(u"█"),_n_full_3147);auto _n_right_3180=(d::truth((_n_full_3147<32.0))?d::at(_n_EIGHTHS_3107,std::floor(((_n_fill_3146-_n_full_3147)*8.0))):d::String(u""));return (d::string(_n_left_3179)+d::string(_n_right_3180));})(),32.0,d::String(u"░"));
double _n_top_3149=(_n_MEMORY_3103*1048576.0);
double _n_addr_3150=(d::truth((_n_f_3145<1.0))?(std::floor(((_n_f_3145*_n_top_3149)/4096.0))*4096.0):(_n_top_3149-1.0));
d::String _n_hex_3151=(d::string(d::String(u"0x"))+d::string(d::padStart(d::upper(d::radix(_n_addr_3150,16.0)),9.0,d::String(u"0"))));
return ([&](){auto _n_left_3181=(d::string((d::string((d::string(d::repeat(d::String(u" "),11.0))+d::string(_n_bar_3148)))+d::string(d::String(u"  "))))+d::string(_n_hex_3151));auto _n_right_3182=d::padStart((d::string(std::floor((_n_f_3145*100.0)))+d::string(d::String(u"%"))),(_n_W_3102-56.0));return (d::string(_n_left_3181)+d::string(_n_right_3182));})();

}
}));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_row_3115(d::String(u"display"),d::String(u"1920 x 1080 at 60 Hz"),std::optional<d::String>(d::String(u"ok"))))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_probe_3116(d::String(u"storage"),d::String(u"sata 0: disk 0, 512 GB"),d::String(u"ok"),1.3))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_probe_3116(d::String(u"usb"),d::String(u"2 controllers, 2 devices"),d::String(u"ok"),1.9))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_probe_3116(d::String(u"network"),d::String(u"1 port, 1000 Mb/s"),d::String(u"link up"),2.2))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_probe_3116(d::String(u"sensors"),d::String(u"cpu 41°C   board 33°C   fan 2400 rpm"),d::String(u"ok"),0.95))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(this->_n_row_3115(d::String(u"boot order"),d::String(u"disk 0, usb, network"),std::optional<d::String>{}))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(d::repeat(d::String(u"─"),_n_W_3102))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.04)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(d::String(u"F2 setup    F12 boot menu    esc skip memory test"))));
(void)((this->_n_at_3120=((_n_MEM_AT_3104+_n_TEST_3105)+0.2)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(d::String(u""))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.05)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(d::String(u"booting from disk 0"))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.2)));
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(d::String(u"loading kernel 6.8.0 ..."))));
(void)((this->_n_at_3120=(this->_n_at_3120+0.3)));
this->_n_stamp_3122=0.0;
for(auto &&_n_item_3183:_n_KERNEL_3108){d::check_cancel();auto _n_binding_3184=_n_item_3183;
double _n_gap_3152=std::get<0>(*_n_binding_3184);
d::String _n_text_3153=std::get<1>(*_n_binding_3184);
{
(void)((this->_n_stamp_3122=(this->_n_stamp_3122+_n_gap_3152)));
(void)((this->_n_at_3120=(this->_n_at_3120+(_n_gap_3152*1.5))));
double _n_s_3154=(d::truth(this->_n_stamp_3122)?(this->_n_stamp_3122+(this->_n_rand_3114()*0.0009)):0.0);
(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>((d::string((d::string((d::string(d::String(u"["))+d::string(d::padStart(d::fixed(_n_s_3154,6.0),12.0))))+d::string(d::String(u"] "))))+d::string(_n_text_3153)))));

}
}
for(auto &&_n_item_3185:_n_SERVICES_3109){d::check_cancel();auto _n_binding_3186=_n_item_3185;
double _n_gap_3155=std::get<0>(*_n_binding_3186);
d::String _n_text_3156=std::get<1>(*_n_binding_3186);
std::optional<double> _n_spin_3157=std::get<2>(*_n_binding_3186);
{
(void)((this->_n_at_3120=(this->_n_at_3120+_n_gap_3155)));
if(d::truth(_n_spin_3157)){d::check_cancel();double _n_from_3158=this->_n_at_3120;
(void)(this->_n_put_3121([=]( double _a0) mutable ->d::String{double _n_now_3159=_a0;
{
double _n_age_3160=(_n_now_3159-_n_from_3158);
if(d::truth((_n_age_3160>=d::read(_n_spin_3157)))){d::check_cancel();return _n_text_3156;
}
double _n_k_3161=d::mod(std::floor((_n_age_3160*8.0)),6.0);
double _n_p_3162=(d::truth((_n_k_3161<4.0))?_n_k_3161:(6.0-_n_k_3161));
d::String _n_stars_3163=d::padEnd((d::string(d::repeat(d::String(u" "),_n_p_3162))+d::string(d::String(u"***"))),6.0);
return (d::string((d::string((d::string((d::string(d::String(u"["))+d::string(_n_stars_3163)))+d::string(d::String(u"] a start job is running for network ("))))+d::string(std::floor((_n_age_3160+5.0)))))+d::string(d::String(u"s / 1min 30s)")));

}
}));
(void)((this->_n_at_3120=(this->_n_at_3120+d::read(_n_spin_3157))));
}else {d::check_cancel();(void)(this->_n_put_3121(std::variant<d::String,std::function<d::String(double)>>(_n_text_3156)));
}

}
}
this->_n_login_3123=this->_n_at_3120;
this->_n_period_3124=(this->_n_login_3123+_n_WAIT_3110);
this->_n_start_3125=(this->_n_period_3124-0.25);
_render=[=]( double _a0,std::shared_ptr<_n_Record_3171> _a1) mutable ->d::String{double _n_t_3164=_a0;
{
double _n_now_3165=d::mod((_n_t_3164+this->_n_start_3125),this->_n_period_3124);
d::Array<d::String,false> _n_lines_3166=d::Array<d::String,false>{};
for(auto &&_n_item_3187:this->_n_entries_3118){d::check_cancel();std::shared_ptr<_n_Record_3119> _n_e_3167=_n_item_3187;
if(d::truth((_n_e_3167->_p_at<=_n_now_3165))){d::check_cancel();(void)(_n_lines_3166.push(_n_e_3167->_p_text(_n_now_3165)));
}
}
if(d::truth((_n_now_3165>=this->_n_login_3123))){d::check_cancel();(void)(([&](){auto&& _n_array_3188=_n_lines_3166;auto _n_index_3189=(double(_n_lines_3166.size())-1.0);auto _n_value_3190=(d::string(d::at(_n_array_3188,_n_index_3189))+d::string((d::truth((d::mod((_n_now_3165-this->_n_login_3123),1.0)<0.6))?d::String(u"_"):d::String(u""))));d::put(_n_array_3188,_n_index_3189,_n_value_3190);return _n_value_3190;})());
}else {d::check_cancel();if(d::truth((!d::truth(double(_n_lines_3166.size()))))){d::check_cancel();(void)(_n_lines_3166.push(d::String(u"_")));
}
}
double _n_top_3168=d::maximum({0.0,(double(_n_lines_3166.size())-this->_n_rows_3113)});
d::Array<d::String,false> _n_out_3169=d::Array<d::String,false>{};
{double _n_r_3170=0.0;
for(;d::truth((_n_r_3170<this->_n_rows_3113));(void)((_n_r_3170++))){d::check_cancel();(void)(_n_out_3169.push(d::slice(d::padEnd((d::string(d::String(u" "))+d::string(([&]()->d::String{auto _n_logical_3191=d::at(_n_lines_3166,(_n_top_3168+_n_r_3170));return d::has(_n_lines_3166,(_n_top_3168+_n_r_3170))?_n_logical_3191:d::String(u"");})())),this->_n_cols_3112),0.0,this->_n_cols_3112)));
}}
return d::join(_n_out_3169,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("boot-log").cols)*ascii::catalog_meta("boot-log").rows);auto _env=std::make_shared<_n_Record_3171>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &boot_log_meta(){return catalog_meta("boot-log");}
std::unique_ptr<Piece> make_boot_log(const AsciiPieceOptions &o){return std::make_unique<Native_boot_log>(o);}
}
