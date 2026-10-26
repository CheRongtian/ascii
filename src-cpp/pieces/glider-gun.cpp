// Direct, statically typed C++ from src/pieces/glider-gun.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12306;
struct _n_Record_12345;
struct _n_Record_12306{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_12306> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12306>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_12345{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12345> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12345>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_12306> _n_meta_12305=[](){return ([&](){auto _n_object_12348=std::make_shared<_n_Record_12306>();_n_object_12348->_p_name=d::String(u"glider gun");_n_object_12348->_p_category=d::String(u"generative");_n_object_12348->_p_note=d::String(u"gosper's gun firing a glider every 30 generations");_n_object_12348->_p_cols=56.0;_n_object_12348->_p_rows=20.0;_n_object_12348->_p_fps=10.0;return _n_object_12348;})();}();
d::Array<d::String,false> _n_GUN_12307=[](){return d::Array<d::String,false>{d::String(u"........................o"),d::String(u"......................o.o"),d::String(u"............oo......oo............oo"),d::String(u"...........o...o....oo............oo"),d::String(u"oo........o.....o...oo"),d::String(u"oo........o...o.oo....o.o"),d::String(u"..........o.....o.......o"),d::String(u"...........o...o"),d::String(u"............oo")};}();
d::Array<d::String,false> _n_EATER_12308=[](){return d::Array<d::String,false>{d::String(u"oo"),d::String(u"o"),d::String(u".ooo"),d::String(u"...o")};}();
const double _n_PERIOD_12309=[](){return 30.0;}();

struct Native_glider_gun final:ascii::Piece{
double _n_cols_12310{};
double _n_rows_12311{};
double _n_fps_12312{};
double _n_PAD_12313{};
double _n_GX_12314{};
double _n_GY_12315{};
double _n_K_12316{};
double _n_W_12317{};
double _n_H_12318{};
d::Array<uint8_t,true> _n_cur_12319{};
d::Array<uint8_t,true> _n_nxt_12320{};
d::Array<d::String,false> _n_GLYPH_12323{};
d::Array<d::String,false> _n_cycle_12325{};
std::function<d::String(double,std::shared_ptr<_n_Record_12345>)> _render;
void _n_place_12321(d::Array<d::String,false> _a0,double _a1,double _a2){d::Array<d::String,false> _n_shape_12326=_a0;
double _n_x0_12327=_a1;
double _n_y0_12328=_a2;
return d::forEach(_n_shape_12326,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_row_12329=_a0;
double _n_y_12330=_a1;
d::forEach(([&](){d::Array<d::String,false> _n_array_12350;for(const auto &_v:_n_row_12329)_n_array_12350.push(_v);return _n_array_12350;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<bool,double>{d::String _n_c_12331=_a0;
double _n_x_12332=_a1;
return ([&]()->std::variant<bool,double>{auto _n_logical_12351=(_n_c_12331==d::String(u"o"));return d::truth(_n_logical_12351)?std::variant<bool,double>(([&](){auto&& _n_array_12352=this->_n_cur_12319;auto _n_index_12353=((((((this->_n_PAD_12313+_n_y0_12328)+_n_y_12330)*this->_n_W_12317)+this->_n_PAD_12313)+_n_x0_12327)+_n_x_12332);auto _n_value_12354=1.0;d::put(_n_array_12352,_n_index_12353,_n_value_12354);return _n_value_12354;})()):std::variant<bool,double>(_n_logical_12351);})();});});}

void _n_step_12322(){{
{double _n_y_12333=1.0;
for(;d::truth((_n_y_12333<(this->_n_H_12318-1.0)));(void)((_n_y_12333++))){d::check_cancel();{double _n_x_12334=1.0;
for(;d::truth((_n_x_12334<(this->_n_W_12317-1.0)));(void)((_n_x_12334++))){d::check_cancel();double _n_i_12335=((_n_y_12333*this->_n_W_12317)+_n_x_12334);
double _n_n_12336=(((((((d::at(this->_n_cur_12319,((_n_i_12335-this->_n_W_12317)-1.0))+d::at(this->_n_cur_12319,(_n_i_12335-this->_n_W_12317)))+d::at(this->_n_cur_12319,((_n_i_12335-this->_n_W_12317)+1.0)))+d::at(this->_n_cur_12319,(_n_i_12335-1.0)))+d::at(this->_n_cur_12319,(_n_i_12335+1.0)))+d::at(this->_n_cur_12319,((_n_i_12335+this->_n_W_12317)-1.0)))+d::at(this->_n_cur_12319,(_n_i_12335+this->_n_W_12317)))+d::at(this->_n_cur_12319,((_n_i_12335+this->_n_W_12317)+1.0)));
(void)(([&](){auto&& _n_array_12355=this->_n_nxt_12320;auto _n_index_12356=_n_i_12335;auto _n_value_12357=((d::truth((_n_n_12336==3.0))||d::truth(([&]()->std::variant<double,bool>{auto _n_logical_12358=(_n_n_12336==2.0);return d::truth(_n_logical_12358)?std::variant<double,bool>(d::at(this->_n_cur_12319,_n_i_12335)):std::variant<double,bool>(_n_logical_12358);})()))?1.0:0.0);d::put(_n_array_12355,_n_index_12356,_n_value_12357);return _n_value_12357;})());
}}
}}
(void)(([&](){auto _n_unpack_12359=d::Array<d::Array<uint8_t,true>,false>{this->_n_nxt_12320,this->_n_cur_12319};this->_n_cur_12319=d::at(_n_unpack_12359,0.0);this->_n_nxt_12320=d::at(_n_unpack_12359,1.0);return _n_unpack_12359;})());

}
}

d::String _n_text_12324(){{
d::Array<d::String,false> _n_lines_12337=d::Array<d::String,false>{};
{double _n_r_12338=0.0;
for(;d::truth((_n_r_12338<this->_n_rows_12311));(void)((_n_r_12338++))){d::check_cancel();d::String _n_line_12339=d::String(u"");
double _n_a_12340=(((this->_n_PAD_12313+(2.0*_n_r_12338))*this->_n_W_12317)+this->_n_PAD_12313);
{double _n_c_12341=0.0;
for(;d::truth((_n_c_12341<this->_n_cols_12310));(void)((_n_c_12341++))){d::check_cancel();(void)((_n_line_12339=(d::string(_n_line_12339)+d::string(d::at(this->_n_GLYPH_12323,(d::at(this->_n_cur_12319,(_n_a_12340+_n_c_12341))+(2.0*d::at(this->_n_cur_12319,((_n_a_12340+this->_n_W_12317)+_n_c_12341)))))))));
}}
(void)(_n_lines_12337.push(_n_line_12339));
}}
return d::join(_n_lines_12337,d::String(u"\n"));

}
}

explicit Native_glider_gun(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12349=_n_meta_12305;
this->_n_cols_12310=_n_binding_12349->_p_cols;
this->_n_rows_12311=_n_binding_12349->_p_rows;
this->_n_fps_12312=_n_binding_12349->_p_fps;
this->_n_PAD_12313=4.0;
this->_n_GX_12314=2.0;
this->_n_GY_12315=2.0;
this->_n_K_12316=30.0;
this->_n_W_12317=((this->_n_cols_12310+(2.0*this->_n_PAD_12313))+8.0);
this->_n_H_12318=(((this->_n_rows_12311*2.0)+(2.0*this->_n_PAD_12313))+8.0);
this->_n_cur_12319=d::Array<uint8_t,true>(size_t((this->_n_W_12317*this->_n_H_12318)));
this->_n_nxt_12320=d::Array<uint8_t,true>(size_t((this->_n_W_12317*this->_n_H_12318)));
(void)(this->_n_place_12321(_n_GUN_12307,this->_n_GX_12314,this->_n_GY_12315));
(void)(this->_n_place_12321(_n_EATER_12308,((this->_n_GX_12314+28.0)+this->_n_K_12316),((this->_n_GY_12315+15.0)+this->_n_K_12316)));
this->_n_GLYPH_12323=d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};
{double _n_g_12342=0.0;
for(;d::truth((_n_g_12342<((4.0*(this->_n_K_12316+40.0))+60.0)));(void)((_n_g_12342++))){d::check_cancel();(void)(this->_n_step_12322());
}}
this->_n_cycle_12325=d::Array<d::String,false>{};
{double _n_g_12343=0.0;
for(;d::truth((_n_g_12343<_n_PERIOD_12309));(void)((_n_g_12343++))){d::check_cancel();(void)(this->_n_cycle_12325.push(this->_n_text_12324()));
(void)(this->_n_step_12322());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_12345> _a1) mutable ->d::String{double _n_t_12344=_a0;
return d::at(this->_n_cycle_12325,d::mod(std::floor(((_n_t_12344*this->_n_fps_12312)+0.000001)),_n_PERIOD_12309));};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("glider-gun").cols)*ascii::catalog_meta("glider-gun").rows);auto _env=std::make_shared<_n_Record_12345>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &glider_gun_meta(){return catalog_meta("glider-gun");}
std::unique_ptr<Piece> make_glider_gun(const AsciiPieceOptions &o){return std::make_unique<Native_glider_gun>(o);}
}
