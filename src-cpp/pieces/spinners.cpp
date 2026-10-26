// Direct, statically typed C++ from src/pieces/spinners.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29849;
struct _n_Record_29850;
struct _n_Record_29957;
struct _n_Record_29958;
struct _n_Record_29849{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29850> _p_options{};
static std::shared_ptr<_n_Record_29849> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29849>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29850>>(j["options"]);return out;}
};
struct _n_Record_29850{
d::Array<d::Nil,false> _p_names{};
bool _p_labels{};
double _p_speed{};
static std::shared_ptr<_n_Record_29850> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29850>();out->_p_names=d::decode<d::Array<d::Nil,false>>(j["names"]);out->_p_labels=d::decode<bool>(j["labels"]);out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_29957{
std::optional<d::Array<d::String,false>> _p_names{};
std::optional<bool> _p_labels{};
std::optional<double> _p_speed{};
static std::shared_ptr<_n_Record_29957> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29957>();out->_p_names=d::decode<std::optional<d::Array<d::String,false>>>(j["names"]);out->_p_labels=d::decode<std::optional<bool>>(j["labels"]);out->_p_speed=d::decode<std::optional<double>>(j["speed"]);return out;}
};
struct _n_Record_29958{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29958> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29958>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::String _n_quad_29852(double _a0,double _a1,double _a2,double _a3);
double _n_ping_29853(double _a0,double _a1);
d::Array<d::Array<d::String,false>,false> _n_blank_29854(double _a0,double _a1);
d::Array<d::String,false> _n_rows_29855(d::Array<d::Array<d::String,false>,false> _a0);
d::Array<d::String,false> _n_plot_29856(double _a0,double _a1,d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _a2);
std::shared_ptr<_n_Record_29849> _n_meta_29848=[](){return ([&](){auto _n_object_29963=std::make_shared<_n_Record_29849>();_n_object_29963->_p_name=d::String(u"spinners");_n_object_29963->_p_category=d::String(u"ui");_n_object_29963->_p_note=d::String(u"twelve loading spinners side by side, each with its name");_n_object_29963->_p_cols=66.0;_n_object_29963->_p_rows=13.0;_n_object_29963->_p_fps=12.0;_n_object_29963->_p_options=([&](){auto _n_object_29965=std::make_shared<_n_Record_29850>();_n_object_29965->_p_names=d::Array<d::Nil,false>{};_n_object_29965->_p_labels=true;_n_object_29965->_p_speed=1.0;return _n_object_29965;})();return _n_object_29963;})();}();
const d::String _n_QUAD_29851=[](){return d::String(u" ▗▖▄▝▐▞▟▘▚▌▙▀▜▛█");}();
d::Array<std::shared_ptr<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>,false> _n_SPINNERS_29857=[](){return d::Array<std::shared_ptr<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>,false>{std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"line"),2.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29887=_a0;
return _n_plot_29856(5.0,3.0,d::at(d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false>{d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(2.0,0.0,d::String(u"│")),std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,d::String(u"│")),std::make_shared<std::tuple<double,double,d::String>>(2.0,2.0,d::String(u"│"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(3.0,0.0,d::String(u"╱")),std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,d::String(u"╱")),std::make_shared<std::tuple<double,double,d::String>>(1.0,2.0,d::String(u"╱"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(0.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(1.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(3.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(4.0,1.0,d::String(u"─"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(1.0,0.0,d::String(u"╲")),std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,d::String(u"╲")),std::make_shared<std::tuple<double,double,d::String>>(3.0,2.0,d::String(u"╲"))}},d::mod(_n_i_29887,4.0)));}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"dots"),2.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29888=_a0;
{
d::Array<d::Array<d::String,false>,false> _n_g_29889=_n_blank_29854(5.0,2.0);
{double _n_d_29890=0.0;
for(;d::truth((_n_d_29890<3.0));(void)((_n_d_29890++))){d::check_cancel();double _n_h_29891=d::at(d::Array<double,false>{0.0,1.0,2.0,1.0,0.0,0.0,0.0},d::mod(((_n_i_29888-(_n_d_29890*2.0))+70.0),7.0));
(void)(([&](){auto&& _n_array_29966=d::at(_n_g_29889,(d::truth((_n_h_29891==2.0))?0.0:1.0));auto _n_index_29967=(_n_d_29890*2.0);auto _n_value_29968=(d::truth((_n_h_29891==1.0))?d::String(u"▀"):d::String(u"▄"));d::put(_n_array_29966,_n_index_29967,_n_value_29968);return _n_value_29968;})());
}}
return _n_rows_29855(_n_g_29889);

}
}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"pipe"),2.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29892=_a0;
{
d::Array<double,false> _n_arms_29893=d::at(d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,1.0,0.0,1.0},d::Array<double,false>{1.0,1.0,0.0,0.0},d::Array<double,false>{1.0,1.0,1.0,0.0},d::Array<double,false>{1.0,0.0,1.0,0.0},d::Array<double,false>{1.0,0.0,1.0,1.0},d::Array<double,false>{0.0,0.0,1.0,1.0},d::Array<double,false>{0.0,1.0,1.0,1.0},d::Array<double,false>{0.0,1.0,0.0,1.0}},d::mod(_n_i_29892,8.0));
auto _n_binding_29969=_n_arms_29893;
double _n_u_29894=d::at(_n_binding_29969,0.0);
double _n_l_29895=d::at(_n_binding_29969,1.0);
double _n_r_29896=d::at(_n_binding_29969,2.0);
double _n_d_29897=d::at(_n_binding_29969,3.0);
d::String _n_hub_29898=d::at(d::String(u"┼├┤│┴└┘╵┬┌┐╷─╶╴ "),double(d::i32(double(d::i32(double(d::i32(double(int32_t(d::u32((1.0-_n_u_29894))<<(d::u32(3.0)&31))))|d::i32(double(int32_t(d::u32((1.0-_n_d_29897))<<(d::u32(2.0)&31))))))|d::i32(double(int32_t(d::u32((1.0-_n_r_29896))<<(d::u32(1.0)&31))))))|d::i32((1.0-_n_l_29895))));
return _n_plot_29856(5.0,3.0,([&](){d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_array_29970;_n_array_29970.push(std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,_n_hub_29898));for(const auto &_v:(d::truth(_n_u_29894)?d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(2.0,0.0,d::String(u"│"))}:d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{}))_n_array_29970.push(_v);for(const auto &_v:(d::truth(_n_d_29897)?d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(2.0,2.0,d::String(u"│"))}:d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{}))_n_array_29970.push(_v);for(const auto &_v:(d::truth(_n_l_29895)?d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(0.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(1.0,1.0,d::String(u"─"))}:d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{}))_n_array_29970.push(_v);for(const auto &_v:(d::truth(_n_r_29896)?d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(3.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(4.0,1.0,d::String(u"─"))}:d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{}))_n_array_29970.push(_v);return _n_array_29970;})());

}
}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"arc"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29899=_a0;
{
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_ring_29900=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(0.0,0.0,d::String(u"╭")),std::make_shared<std::tuple<double,double,d::String>>(1.0,0.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(2.0,0.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(3.0,0.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(4.0,0.0,d::String(u"╮")),std::make_shared<std::tuple<double,double,d::String>>(4.0,1.0,d::String(u"│")),std::make_shared<std::tuple<double,double,d::String>>(4.0,2.0,d::String(u"╯")),std::make_shared<std::tuple<double,double,d::String>>(3.0,2.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(2.0,2.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(1.0,2.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(0.0,2.0,d::String(u"╰")),std::make_shared<std::tuple<double,double,d::String>>(0.0,1.0,d::String(u"│"))};
double _n_n_29901=(3.0+d::round(((_n_ping_29853(8.0,_n_i_29899)*4.0)/7.0)));
return ([&](){auto _n_argument_29971=5.0;auto _n_argument_29972=3.0;auto _n_argument_29973=d::map(([&](){d::Array<d::Nil,false> _n_array_29974;for(const auto &_v:d::Array<d::Nil,false>(size_t(_n_n_29901)))_n_array_29974.push(_v);return _n_array_29974;})(),[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<std::tuple<double,double,d::String>>{d::Nil _n___29902=_a0;
double _n_k_29903=_a1;
return d::at(_n_ring_29900,d::mod(((_n_i_29899+12.0)-_n_k_29903),12.0));});return _n_plot_29856(_n_argument_29971,_n_argument_29972,_n_argument_29973);})();

}
}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"bounce"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29904=_a0;
return d::Array<d::String,false>{(d::string(([&](){auto _n_left_29975=(d::string((d::string(d::String(u"["))+d::string(d::repeat(d::String(u" "),_n_ping_29853(6.0,_n_i_29904)))))+d::string(d::String(u"o")));auto _n_right_29976=d::repeat(d::String(u" "),(5.0-_n_ping_29853(6.0,_n_i_29904)));return (d::string(_n_left_29975)+d::string(_n_right_29976));})())+d::string(d::String(u"]")))};}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"clock"),3.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29905=_a0;
{
d::Array<d::Array<d::String,false>,false> _n_g_29906=d::Array<d::Array<d::String,false>,false>{([&](){d::Array<d::String,false> _n_array_29977;for(const auto &_v:d::String(u"╭─────╮"))_n_array_29977.push(_v);return _n_array_29977;})(),([&](){d::Array<d::String,false> _n_array_29978;for(const auto &_v:d::String(u"│     │"))_n_array_29978.push(_v);return _n_array_29978;})(),([&](){d::Array<d::String,false> _n_array_29979;for(const auto &_v:d::String(u"╰─────╯"))_n_array_29979.push(_v);return _n_array_29979;})()};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_hand_29907=d::at(d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false>{d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(3.0,0.0,d::String(u"┬")),std::make_shared<std::tuple<double,double,d::String>>(3.0,1.0,d::String(u"╵"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(3.0,1.0,d::String(u"╶")),std::make_shared<std::tuple<double,double,d::String>>(4.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(5.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(6.0,1.0,d::String(u"┤"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(3.0,1.0,d::String(u"╷")),std::make_shared<std::tuple<double,double,d::String>>(3.0,2.0,d::String(u"┴"))},d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(0.0,1.0,d::String(u"├")),std::make_shared<std::tuple<double,double,d::String>>(1.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(2.0,1.0,d::String(u"─")),std::make_shared<std::tuple<double,double,d::String>>(3.0,1.0,d::String(u"╴"))}},d::mod(_n_i_29905,4.0));
for(auto &&_n_item_29980:_n_hand_29907){d::check_cancel();auto _n_binding_29981=_n_item_29980;
double _n_x_29908=std::get<0>(*_n_binding_29981);
double _n_y_29909=std::get<1>(*_n_binding_29981);
d::String _n_ch_29910=std::get<2>(*_n_binding_29981);
(void)(([&](){auto&& _n_array_29982=d::at(_n_g_29906,_n_y_29909);auto _n_index_29983=_n_x_29908;auto _n_value_29984=_n_ch_29910;d::put(_n_array_29982,_n_index_29983,_n_value_29984);return _n_value_29984;})());
}
return _n_rows_29855(_n_g_29906);

}
}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"bar"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29911=_a0;
{
double _n_level_29912=d::round(((_n_ping_29853(12.0,(_n_i_29911+2.0))*24.0)/11.0));
return d::map(d::Array<double,false>{2.0,1.0,0.0},[&]( double _a0) mutable ->d::String{double _n_k_29913=_a0;
return d::repeat(d::at(d::String(u" ▁▂▃▄▅▆▇█"),([&](){auto _n_argument_29985=0.0;auto _n_argument_29986=d::minimum({8.0,(_n_level_29912-(8.0*_n_k_29913))});return d::maximum({_n_argument_29985,_n_argument_29986});})()),3.0);});

}
}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"loop"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29914=_a0;
{
d::Array<d::Array<double,false>,false> _n_path_29915=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{1.0,0.0},d::Array<double,false>{2.0,0.0},d::Array<double,false>{3.0,0.0},d::Array<double,false>{4.0,0.0},d::Array<double,false>{5.0,0.0},d::Array<double,false>{5.0,1.0},d::Array<double,false>{4.0,1.0},d::Array<double,false>{3.0,1.0},d::Array<double,false>{2.0,1.0},d::Array<double,false>{1.0,1.0},d::Array<double,false>{0.0,1.0}};
d::Set<d::String> _n_on_29916=d::Set<d::String>(d::map(d::Array<double,false>{0.0,1.0,2.0,3.0},[&]( double _a0) mutable ->d::String{double _n_k_29917=_a0;
return d::join(d::at(_n_path_29915,d::mod((_n_i_29914+_n_k_29917),12.0)));}));
auto _n_at_29918=[&]( double _a0,double _a1) mutable ->double{double _n_x_29919=_a0;
double _n_y_29920=_a1;
return (d::truth(_n_on_29916.has((d::String(u"")+d::string(_n_x_29919)+d::String(u",")+d::string(_n_y_29920)+d::String(u""))))?1.0:0.0);};
return d::Array<d::String,false>{d::join(d::map(d::Array<double,false>{0.0,2.0,4.0},[&]( double _a0) mutable ->d::String{double _n_x_29921=_a0;
return ([&](){auto _n_argument_29987=_n_at_29918(_n_x_29921,0.0);auto _n_argument_29988=_n_at_29918((_n_x_29921+1.0),0.0);auto _n_argument_29989=_n_at_29918(_n_x_29921,1.0);auto _n_argument_29990=_n_at_29918((_n_x_29921+1.0),1.0);return _n_quad_29852(_n_argument_29987,_n_argument_29988,_n_argument_29989,_n_argument_29990);})();}),d::String(u""))};

}
}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"scan"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29922=_a0;
{
double _n_head_29923=_n_ping_29853(7.0,_n_i_29922);
double _n_dir_29924=(d::truth((d::mod(_n_i_29922,12.0)<6.0))?(-d::number(1.0)):1.0);
return d::Array<d::String,false>{d::join(d::map(([&](){d::Array<d::Nil,false> _n_array_29991;for(const auto &_v:d::Array<d::Nil,false>(size_t(7.0)))_n_array_29991.push(_v);return _n_array_29991;})(),[&]( d::Nil _a0,double _a1) mutable ->d::String{d::Nil _n___29925=_a0;
double _n_x_29926=_a1;
return (d::truth((_n_x_29926==_n_head_29923))?d::String(u"█"):(d::truth((_n_x_29926==(_n_head_29923+_n_dir_29924)))?d::String(u"▓"):(d::truth((_n_x_29926==(_n_head_29923+(2.0*_n_dir_29924))))?d::String(u"░"):d::String(u"·"))));}),d::String(u""))};

}
}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"wave"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29927=_a0;
return d::Array<d::String,false>{d::join(d::map(d::Array<double,false>{0.0,1.0,2.0,3.0,4.0,5.0,6.0},[&]( double _a0) mutable ->d::String{double _n_x_29928=_a0;
return d::at(d::String(u"▁▂▃▄▅▆▇█"),d::round((3.5+(3.5*std::sin((((_n_x_29928-_n_i_29927)*ascii::PI)/4.0))))));}),d::String(u""))};}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"slide"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29929=_a0;
return d::Array<d::String,false>{(d::string((d::string(d::String(u"["))+d::string(d::join(d::map(([&](){d::Array<d::Nil,false> _n_array_29992;for(const auto &_v:d::Array<d::Nil,false>(size_t(8.0)))_n_array_29992.push(_v);return _n_array_29992;})(),[&]( d::Nil _a0,double _a1) mutable ->d::String{d::Nil _n___29930=_a0;
double _n_x_29931=_a1;
return ((d::truth(((_n_x_29931-(d::mod(_n_i_29929,10.0)-2.0))>=0.0))&&d::truth(((_n_x_29931-(d::mod(_n_i_29929,10.0)-2.0))<3.0)))?d::String(u"="):d::String(u" "));}),d::String(u"")))))+d::string(d::String(u"]")))};}),std::make_shared<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>(d::String(u"orbit"),1.0,[=]( double _a0) mutable ->d::Array<d::String,false>{double _n_i_29932=_a0;
{
d::Array<d::Array<double,false>,false> _n_ring_29933=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0},d::Array<double,false>{2.0,0.0},d::Array<double,false>{3.0,0.0},d::Array<double,false>{4.0,1.0},d::Array<double,false>{3.0,2.0},d::Array<double,false>{2.0,2.0},d::Array<double,false>{1.0,2.0},d::Array<double,false>{0.0,1.0}};
return ([&](){auto _n_argument_29993=5.0;auto _n_argument_29994=3.0;auto _n_argument_29995=d::map(_n_ring_29933,[&]( d::Array<double,false> _a0,double _a1) mutable ->std::shared_ptr<std::tuple<double,double,d::String>>{auto _n_binding_29996=_a0;
double _n_x_29934=d::at(_n_binding_29996,0.0);
double _n_y_29935=d::at(_n_binding_29996,1.0);
double _n_k_29936=_a1;
return std::make_shared<std::tuple<double,double,d::String>>(_n_x_29934,_n_y_29935,(d::truth((_n_k_29936==d::mod(_n_i_29932,8.0)))?d::String(u"o"):(d::truth((_n_k_29936==d::mod((_n_i_29932+7.0),8.0)))?d::String(u"°"):d::String(u"·"))));});return _n_plot_29856(_n_argument_29993,_n_argument_29994,_n_argument_29995);})();

}
})};}();
d::String _n_quad_29852(double _a0,double _a1,double _a2,double _a3){double _n_ul_29870=_a0;
double _n_ur_29871=_a1;
double _n_ll_29872=_a2;
double _n_lr_29873=_a3;
return d::at(_n_QUAD_29851,double(d::i32(double(d::i32(double(d::i32(double(int32_t(d::u32(_n_ul_29870)<<(d::u32(3.0)&31))))|d::i32(double(int32_t(d::u32(_n_ur_29871)<<(d::u32(2.0)&31))))))|d::i32(double(int32_t(d::u32(_n_ll_29872)<<(d::u32(1.0)&31))))))|d::i32(_n_lr_29873)));}

double _n_ping_29853(double _a0,double _a1){double _n_n_29874=_a0;
double _n_i_29875=_a1;
return (d::truth((d::mod(_n_i_29875,((2.0*_n_n_29874)-2.0))<_n_n_29874))?d::mod(_n_i_29875,((2.0*_n_n_29874)-2.0)):(((2.0*_n_n_29874)-2.0)-d::mod(_n_i_29875,((2.0*_n_n_29874)-2.0))));}

d::Array<d::Array<d::String,false>,false> _n_blank_29854(double _a0,double _a1){double _n_w_29876=_a0;
double _n_h_29877=_a1;
return d::Array<d::Array<d::String,false>,false>(d::from(_n_h_29877,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(_n_w_29876)).fill(d::String(u" "));}));}

d::Array<d::String,false> _n_rows_29855(d::Array<d::Array<d::String,false>,false> _a0){d::Array<d::Array<d::String,false>,false> _n_g_29878=_a0;
return d::map(_n_g_29878,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_r_29879=_a0;
return d::join(_n_r_29879,d::String(u""));});}

d::Array<d::String,false> _n_plot_29856(double _a0,double _a1,d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _a2){double _n_w_29880=_a0;
double _n_h_29881=_a1;
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_cells_29882=_a2;
{
d::Array<d::Array<d::String,false>,false> _n_g_29883=_n_blank_29854(_n_w_29880,_n_h_29881);
for(auto &&_n_item_29997:_n_cells_29882){d::check_cancel();auto _n_binding_29998=_n_item_29997;
double _n_x_29884=std::get<0>(*_n_binding_29998);
double _n_y_29885=std::get<1>(*_n_binding_29998);
d::String _n_ch_29886=std::get<2>(*_n_binding_29998);
(void)(([&](){auto&& _n_array_29999=d::at(_n_g_29883,_n_y_29885);auto _n_index_30000=_n_x_29884;auto _n_value_30001=_n_ch_29886;d::put(_n_array_29999,_n_index_30000,_n_value_30001);return _n_value_30001;})());
}
return _n_rows_29855(_n_g_29883);

}
}

struct Native_spinners final:ascii::Piece{
d::Array<d::String,false> _n_names_29858{};
bool _n_labels_29859{};
double _n_speed_29860{};
d::Array<std::shared_ptr<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>,false> _n_chosen_29861{};
bool _n_all_29862{};
double _n_slot_29863{};
double _n_per_29864{};
double _n_block_29865{};
double _n_cols_29866{};
double _n_height_29867{};
std::function<d::String(double,std::shared_ptr<_n_Record_29958>)> _render;

explicit Native_spinners(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_30002=d::decode<std::shared_ptr<_n_Record_29957>>(_options.data);
this->_n_names_29858=(d::present(_n_binding_30002->_p_names)?d::read(_n_binding_30002->_p_names):d::Array<d::String,false>(d::map(_n_meta_29848->_p_options->_p_names,[&](const auto &_n_element_30003){return d::String{};})));
this->_n_labels_29859=(d::present(_n_binding_30002->_p_labels)?d::read(_n_binding_30002->_p_labels):_n_meta_29848->_p_options->_p_labels);
this->_n_speed_29860=(d::present(_n_binding_30002->_p_speed)?d::read(_n_binding_30002->_p_speed):_n_meta_29848->_p_options->_p_speed);
this->_n_chosen_29861=((d::truth(this->_n_names_29858)&&d::truth(double(this->_n_names_29858.size())))?d::filter(d::map(this->_n_names_29858,[&]( d::String _a0) mutable ->std::shared_ptr<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>>{d::String _n_n_29937=_a0;
return d::read(d::find(_n_SPINNERS_29857,[&]( std::shared_ptr<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>> _a0) mutable ->bool{std::shared_ptr<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>> _n_s_29938=_a0;
return (std::get<0>(*_n_s_29938)==_n_n_29937);}));}),d::ToBoolean{}):_n_SPINNERS_29857);
this->_n_all_29862=(this->_n_chosen_29861==_n_SPINNERS_29857);
this->_n_slot_29863=11.0;
this->_n_per_29864=(d::truth(this->_n_all_29862)?6.0:d::minimum({6.0,double(this->_n_chosen_29861.size())}));
this->_n_block_29865=((d::truth(this->_n_labels_29859)||d::truth(this->_n_all_29862))?5.0:3.0);
this->_n_cols_29866=(d::truth(this->_n_all_29862)?_n_meta_29848->_p_cols:(this->_n_per_29864*this->_n_slot_29863));
this->_n_height_29867=(d::truth(this->_n_all_29862)?_n_meta_29848->_p_rows:((std::ceil((double(this->_n_chosen_29861.size())/this->_n_per_29864))*(this->_n_block_29865+1.0))+1.0));
_render=[=]( double _a0,std::shared_ptr<_n_Record_29958> _a1) mutable ->d::String{double _n_t_29939=_a0;
{
d::Array<d::Array<d::String,false>,false> _n_grid_29940=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_height_29867,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_29866)).fill(d::String(u" "));}));
(void)(d::forEach(this->_n_chosen_29861,[&]( std::shared_ptr<std::tuple<d::String,double,std::function<d::Array<d::String,false>(double)>>> _a0,double _a1) mutable ->void{auto _n_binding_30005=_a0;
d::String _n_name_29941=std::get<0>(*_n_binding_30005);
double _n_frames_29942=std::get<1>(*_n_binding_30005);
std::function<d::Array<d::String,false>(double)> _n_draw_29943=std::get<2>(*_n_binding_30005);
double _n_n_29944=_a1;
{
double _n_x0_29945=(d::mod(_n_n_29944,this->_n_per_29864)*this->_n_slot_29863);
double _n_y0_29946=(1.0+(std::floor((_n_n_29944/this->_n_per_29864))*(this->_n_block_29865+1.0)));
d::Array<d::String,false> _n_art_29947=_n_draw_29943(std::floor(((((_n_t_29939*_n_meta_29848->_p_fps)*this->_n_speed_29860)/_n_frames_29942)+0.001)));
double _n_top_29948=(_n_y0_29946+std::floor(((3.0-double(_n_art_29947.size()))/2.0)));
(void)(d::forEach(_n_art_29947,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_29949=_a0;
double _n_j_29950=_a1;
{
double _n_left_29951=(_n_x0_29945+std::floor(((this->_n_slot_29863-double(([&](){d::Array<d::String,false> _n_array_30006;for(const auto &_v:_n_line_29949)_n_array_30006.push(_v);return _n_array_30006;})().size()))/2.0)));
(void)(d::forEach(([&](){d::Array<d::String,false> _n_array_30007;for(const auto &_v:_n_line_29949)_n_array_30007.push(_v);return _n_array_30007;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_g_29952=_a0;
double _n_i_29953=_a1;
return ([&](){auto&& _n_array_30008=d::at(_n_grid_29940,(_n_top_29948+_n_j_29950));auto _n_index_30009=(_n_left_29951+_n_i_29953);auto _n_value_30010=_n_g_29952;d::put(_n_array_30008,_n_index_30009,_n_value_30010);return _n_value_30010;})();}));

}
}));
if(d::truth(this->_n_labels_29859)){d::check_cancel();(void)(d::forEach(([&](){d::Array<d::String,false> _n_array_30011;for(const auto &_v:_n_name_29941)_n_array_30011.push(_v);return _n_array_30011;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_g_29954=_a0;
double _n_i_29955=_a1;
return ([&](){auto&& _n_array_30012=d::at(_n_grid_29940,(_n_y0_29946+4.0));auto _n_index_30013=((_n_x0_29945+std::floor(((this->_n_slot_29863-double(_n_name_29941.size()))/2.0)))+_n_i_29955);auto _n_value_30014=_n_g_29954;d::put(_n_array_30012,_n_index_30013,_n_value_30014);return _n_value_30014;})();}));
}

}
}));
return d::join(d::map(_n_grid_29940,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_l_29956=_a0;
return d::join(_n_l_29956,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("spinners").cols)*ascii::catalog_meta("spinners").rows);auto _env=std::make_shared<_n_Record_29958>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &spinners_meta(){return catalog_meta("spinners");}
std::unique_ptr<Piece> make_spinners(const AsciiPieceOptions &o){return std::make_unique<Native_spinners>(o);}
}
