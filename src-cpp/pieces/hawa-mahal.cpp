// Direct, statically typed C++ from src/pieces/hawa-mahal.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13422;
struct _n_Record_13487;
struct _n_Record_13422{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13422> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13422>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13487{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13487> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13487>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_13429(double _a0);
double _n_hash_13430(double _a0,double _a1);
std::shared_ptr<_n_Record_13422> _n_meta_13421=[](){return ([&](){auto _n_object_13490=std::make_shared<_n_Record_13422>();_n_object_13490->_p_name=d::String(u"hawa mahal");_n_object_13490->_p_category=d::String(u"objects");_n_object_13490->_p_note=d::String(u"jaipur's palace of winds at night, lamps behind the jali");_n_object_13490->_p_cols=61.0;_n_object_13490->_p_rows=24.0;_n_object_13490->_p_fps=10.0;return _n_object_13490;})();}();
d::Array<d::String,false> _n_FACADE_13423=[](){return d::split(d::slice(d::String(u"\n                        '\n                       .^.\n                 '   .-' '-.   '\n                .^.  (+++++)  .^.\n              __|_|__|+++++|__|_|__\n              .-^-..^..-^-..^..-^-.\n          '   (+++)(+)(+++)(+)(+++)   '\n         .^.  |+++||+||+++||+||+++|  .^.\n        _|_|__|___________________|__|_|_\n        .^..^..-^-..^..-^-..^..-^-..^..^.\n   '    (+)(+)(+++)(+)(+++)(+)(+++)(+)(+)    '\n  .^.   |+||+||+++||+||+++||+||+++||+||+|   .^.\n__|_|___|_______________________________|___|_|__\n.^..-^-..^..^..-^-..^..-^-..^..-^-..^..^..-^-..^.\n(+)(+++)(+)(+)(+++)(+)(+++)(+)(+++)(+)(+)(+++)(+)\n|+||+++||+||+||+++||+||+++||+||+++||+||+||+++||+|\n=================================================\n.-..---..-..-..---..-..---..-..---..-..-..---..-.\n(+)(+++)(+)(+)(+++)(+)(+++)(+)(+++)(+)(+)(+++)(+)\n|+||+++||+||+||+++||+||+++||+||+++||+||+||+++||+|\n/^\\/'^'\\/^\\/^\\/'^'\\/^\\/'^'\\/^\\/'^'\\/^\\/^\\/'^'\\/^\\\n|+||+++||+||+||+++||+||+++||+||+++||+||+||+++||+|\n|+||+++||+||+||+++||+||+++||+||+++||+||+||+++||+|\n|_||___||_||_||___||_||___||_||___||_||_||___||_|"),1.0),d::String(u"\n"));}();
d::Array<d::Array<double,false>,false> _n_STARS_13424=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,4.0,0.9,0.0},d::Array<double,false>{1.0,15.0,1.3,2.0},d::Array<double,false>{3.0,8.0,0.7,4.0},d::Array<double,false>{6.0,2.0,1.1,1.0},d::Array<double,false>{0.0,53.0,1.2,3.0},d::Array<double,false>{2.0,45.0,0.8,5.0},d::Array<double,false>{4.0,57.0,1.0,0.5},d::Array<double,false>{7.0,52.0,1.4,2.5}};}();
const double _n_SHARE_13425=[](){return 0.3;}();
const double _n_RISE_13426=[](){return 0.3;}();
const double _n_FADE_13427=[](){return 1.8;}();
d::Array<d::Array<d::String,false>,false> _n_JALI_13428=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"·"),d::String(u":")},d::Array<d::String,false>{d::String(u":"),d::String(u"+")},d::Array<d::String,false>{d::String(u"+"),d::String(u"#")}};}();
std::function<double()> _n_mulberry32_13429(double _a0){double _n_seed_13446=_a0;
{
double _n_s_13447=double(d::i32(_n_seed_13446)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_13447=double(d::i32((_n_s_13447+1831565813.0))|d::i32(0.0))));
double _n_t_13448=d::imul(double(d::i32(_n_s_13447)^d::i32(double(d::u32(_n_s_13447)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_13447)));
(void)((_n_t_13448=double(d::i32((_n_t_13448+d::imul(double(d::i32(_n_t_13448)^d::i32(double(d::u32(_n_t_13448)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_13448)))))^d::i32(_n_t_13448))));
return (double(d::u32(double(d::i32(_n_t_13448)^d::i32(double(d::u32(_n_t_13448)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_hash_13430(double _a0,double _a1){double _n_x_13449=_a0;
double _n_y_13450=_a1;
{
double _n_h_13451=([&](){auto _n_left_13491=d::imul((_n_x_13449+1.0),668265261.0);auto _n_right_13492=d::imul((_n_y_13450+1.0),374761393.0);return double(d::i32(_n_left_13491)^d::i32(_n_right_13492));})();
(void)((_n_h_13451=d::imul(double(d::i32(_n_h_13451)^d::i32(double(d::u32(_n_h_13451)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_13451)^d::i32(double(d::u32(_n_h_13451)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_hawa_mahal final:ascii::Piece{
double _n_cols_13431{};
double _n_rows_13432{};
double _n_left_13433{};
std::function<double()> _n_rand_13434{};
d::Array<d::Array<d::String,false>,false> _n_base_13435{};
double _n_band_13436{};
d::Array<std::array<double,4>,false> _n_cells_13437{};
d::Map<d::String,double> _n_at_13438{};
double _n_count_13439{};
d::Array<bool,false> _n_lit_13440{};
d::Array<double,true> _n_since_13441{};
double _n_next_13442{};
double _n_clock_13443{};
std::function<d::String(double,std::shared_ptr<_n_Record_13487>)> _render;
void _n_advance_13444(double _a0){double _n_t_13466=_a0;
{
while(d::truth((this->_n_next_13442<=_n_t_13466))){d::check_cancel();double _n_share_13467=(double(d::filter(this->_n_lit_13440,d::ToBoolean{}).size())/this->_n_count_13439);
bool _n_light_13468=(this->_n_rand_13434()<(0.5+((_n_SHARE_13425-_n_share_13467)*3.0)));
d::Array<double,false> _n_pool_13469=d::Array<double,false>{};
{double _n_w_13470=0.0;
for(;d::truth((_n_w_13470<this->_n_count_13439));(void)((_n_w_13470++))){d::check_cancel();if(d::truth((d::at(this->_n_lit_13440,_n_w_13470)!=_n_light_13468))){d::check_cancel();(void)(_n_pool_13469.push(_n_w_13470));
}
}}
double _n_w_13471=d::at(_n_pool_13469,double(d::i32((this->_n_rand_13434()*double(_n_pool_13469.size())))|d::i32(0.0)));
if(d::truth((d::present(_n_w_13471)))){d::check_cancel();(void)(([&](){auto&& _n_array_13526=this->_n_lit_13440;auto _n_index_13527=_n_w_13471;auto _n_value_13528=_n_light_13468;d::put(_n_array_13526,_n_index_13527,_n_value_13528);return _n_value_13528;})());
(void)(([&](){auto&& _n_array_13529=this->_n_since_13441;auto _n_index_13530=_n_w_13471;auto _n_value_13531=this->_n_next_13442;d::put(_n_array_13529,_n_index_13530,_n_value_13531);return _n_value_13531;})());
}
(void)((this->_n_next_13442=(this->_n_next_13442+(0.3+(this->_n_rand_13434()*0.5)))));
}

}
}

double _n_level_13445(double _a0){double _n_w_13472=_a0;
{
double _n_age_13473=(this->_n_clock_13443-d::at(this->_n_since_13441,_n_w_13472));
if(d::truth((!d::truth(d::at(this->_n_lit_13440,_n_w_13472))))){d::check_cancel();return (d::truth((_n_age_13473<0.2))?2.0:(d::truth((_n_age_13473<_n_FADE_13427))?1.0:0.0));
}
if(d::truth((_n_age_13473<_n_RISE_13426))){d::check_cancel();return 1.0;
}
return (d::truth((([&](){auto _n_argument_13532=_n_w_13472;auto _n_argument_13533=std::floor(((this->_n_clock_13443*10.0)+0.000001));return _n_hash_13430(_n_argument_13532,_n_argument_13533);})()<0.03))?1.0:2.0);

}
}

explicit Native_hawa_mahal(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13493=_n_meta_13421;
this->_n_cols_13431=_n_binding_13493->_p_cols;
this->_n_rows_13432=_n_binding_13493->_p_rows;
this->_n_left_13433=std::floor(((this->_n_cols_13431-49.0)/2.0));
this->_n_rand_13434=_n_mulberry32_13429(8.0);
this->_n_base_13435=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_13432,[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_13453=_a1;
{
d::Array<d::String,false> _n_line_13454=([&](){d::Array<d::String,false> _n_array_13494;for(const auto &_v:d::padEnd((d::string(d::repeat(d::String(u" "),this->_n_left_13433))+d::string(([&]()->d::String{auto _n_logical_13495=d::at(_n_FACADE_13423,_n_r_13453);return d::has(_n_FACADE_13423,_n_r_13453)?_n_logical_13495:d::String(u"");})())),this->_n_cols_13431))_n_array_13494.push(_v);return _n_array_13494;})();
if(d::truth((_n_r_13453==(this->_n_rows_13432-1.0)))){d::check_cancel();{double _n_c_13455=0.0;
for(;d::truth((_n_c_13455<this->_n_cols_13431));(void)((_n_c_13455++))){d::check_cancel();if(d::truth((d::at(_n_line_13454,_n_c_13455)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_13496=_n_line_13454;auto _n_index_13497=_n_c_13455;auto _n_value_13498=d::String(u"_");d::put(_n_array_13496,_n_index_13497,_n_value_13498);return _n_value_13498;})());
}
}}
}
return _n_line_13454;

}
}));
this->_n_band_13436=d::findIndex(_n_FACADE_13423,[&]( d::String _a0) mutable ->bool{d::String _n_l_13456=_a0;
return d::startsWith(_n_l_13456,d::String(u"="));});
(void)(([&](){auto&& _n_array_13499=d::at(this->_n_base_13435,this->_n_band_13436);auto _n_index_13500=(this->_n_left_13433-1.0);auto _n_value_13501=([&](){auto&& _n_array_13502=d::at(this->_n_base_13435,this->_n_band_13436);auto _n_index_13503=(this->_n_left_13433+49.0);auto _n_value_13504=d::String(u"=");d::put(_n_array_13502,_n_index_13503,_n_value_13504);return _n_value_13504;})();d::put(_n_array_13499,_n_index_13500,_n_value_13501);return _n_value_13501;})());
this->_n_cells_13437=d::Array<std::array<double,4>,false>{};
this->_n_at_13438=d::Map<d::String,double>();
this->_n_count_13439=0.0;
(void)(d::forEach(_n_FACADE_13423,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_13457=_a0;
double _n_y_13458=_a1;
{
for(auto &&_n_item_13505:d::matchAll(_n_line_13457,d::Regex(u"\\++",u"g"))){d::check_cancel();std::shared_ptr<d::Match> _n_m_13459=_n_item_13505;
{
double _n_w_13460=([&]()->double{auto _n_logical_13506=this->_n_at_13438.get((d::String(u"")+d::string((_n_y_13458-1.0))+d::String(u",")+d::string(_n_m_13459->index)+d::String(u"")));return d::present(_n_logical_13506)?d::read(_n_logical_13506):(this->_n_count_13439++);})();
(void)(this->_n_at_13438.set((d::String(u"")+d::string(_n_y_13458)+d::String(u",")+d::string(_n_m_13459->index)+d::String(u"")),_n_w_13460));
{double _n_i_13461=0.0;
for(;d::truth((_n_i_13461<double(d::at(_n_m_13459,0.0).size())));(void)((_n_i_13461++))){d::check_cancel();(void)(this->_n_cells_13437.push(std::array<double,4>{_n_y_13458,((this->_n_left_13433+_n_m_13459->index)+_n_i_13461),_n_w_13460,double(d::i32(((_n_m_13459->index+_n_i_13461)+_n_y_13458))&d::i32(1.0))}));
}}

}
}

}
}));
this->_n_lit_13440=d::Array<bool,false>(size_t(this->_n_count_13439)).fill(false);
{double _n_n_13462=d::round((_n_SHARE_13425*this->_n_count_13439));
for(;d::truth((_n_n_13462>0.0));){d::check_cancel();double _n_w_13463=double(d::i32((this->_n_rand_13434()*this->_n_count_13439))|d::i32(0.0));
if(d::truth((!d::truth(d::at(this->_n_lit_13440,_n_w_13463))))){d::check_cancel();(void)((([&](){auto&& _n_array_13507=this->_n_lit_13440;auto _n_index_13508=_n_w_13463;auto _n_value_13509=true;d::put(_n_array_13507,_n_index_13508,_n_value_13509);return _n_value_13509;})(),(_n_n_13462--)));
}
}}
this->_n_since_13441=d::Array<double,true>(size_t(this->_n_count_13439)).fill((-d::number(99.0)));
{double _n_n_13464=3.0;
for(;d::truth((_n_n_13464>0.0));){d::check_cancel();double _n_w_13465=double(d::i32((this->_n_rand_13434()*this->_n_count_13439))|d::i32(0.0));
if((d::truth((!d::truth(d::at(this->_n_lit_13440,_n_w_13465))))&&d::truth((d::at(this->_n_since_13441,_n_w_13465)<(-d::number(9.0)))))){d::check_cancel();(void)((([&](){auto&& _n_array_13510=this->_n_since_13441;auto _n_index_13511=_n_w_13465;auto _n_value_13512=((-d::number(_n_FADE_13427))*(0.3+(0.5*this->_n_rand_13434())));d::put(_n_array_13510,_n_index_13511,_n_value_13512);return _n_value_13512;})(),(_n_n_13464--)));
}
}}
this->_n_next_13442=0.2;
this->_n_clock_13443=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_13487> _a1) mutable ->d::String{double _n_t_13474=_a0;
{
(void)((this->_n_clock_13443=(this->_n_clock_13443+([&](){auto _n_argument_13513=d::maximum({(_n_t_13474-this->_n_clock_13443),0.0});auto _n_argument_13514=1.0;return d::minimum({_n_argument_13513,_n_argument_13514});})())));
(void)(this->_n_advance_13444(this->_n_clock_13443));
d::Array<d::Array<d::String,false>,false> _n_grid_13475=d::map(this->_n_base_13435,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_line_13476=_a0;
return _n_line_13476.slice();});
for(auto &&_n_item_13515:this->_n_cells_13437){d::check_cancel();auto _n_binding_13516=_n_item_13515;
double _n_y_13477=d::at(_n_binding_13516,0.0);
double _n_x_13478=d::at(_n_binding_13516,1.0);
double _n_w_13479=d::at(_n_binding_13516,2.0);
double _n_k_13480=d::at(_n_binding_13516,3.0);
(void)(([&](){auto&& _n_array_13517=d::at(_n_grid_13475,_n_y_13477);auto _n_index_13518=_n_x_13478;auto _n_value_13519=d::at(d::at(_n_JALI_13428,this->_n_level_13445(_n_w_13479)),_n_k_13480);d::put(_n_array_13517,_n_index_13518,_n_value_13519);return _n_value_13519;})());
}
for(auto &&_n_item_13520:_n_STARS_13424){d::check_cancel();auto _n_binding_13521=_n_item_13520;
double _n_r_13481=d::at(_n_binding_13521,0.0);
double _n_c_13482=d::at(_n_binding_13521,1.0);
double _n_f_13483=d::at(_n_binding_13521,2.0);
double _n_p_13484=d::at(_n_binding_13521,3.0);
{
double _n_b_13485=std::sin(((_n_f_13483*this->_n_clock_13443)+_n_p_13484));
(void)(([&](){auto&& _n_array_13522=d::at(_n_grid_13475,_n_r_13481);auto _n_index_13523=_n_c_13482;auto _n_value_13524=(d::truth((_n_b_13485>0.85))?d::String(u"*"):(d::truth((_n_b_13485>(-d::number(0.3))))?d::String(u"·"):d::String(u".")));d::put(_n_array_13522,_n_index_13523,_n_value_13524);return _n_value_13524;})());

}
}
return d::join(d::map(_n_grid_13475,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_l_13486=_a0;
return d::join(_n_l_13486,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("hawa-mahal").cols)*ascii::catalog_meta("hawa-mahal").rows);auto _env=std::make_shared<_n_Record_13487>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &hawa_mahal_meta(){return catalog_meta("hawa-mahal");}
std::unique_ptr<Piece> make_hawa_mahal(const AsciiPieceOptions &o){return std::make_unique<Native_hawa_mahal>(o);}
}
