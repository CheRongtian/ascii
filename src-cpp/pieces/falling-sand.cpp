// Direct, statically typed C++ from src/pieces/falling-sand.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_9620;
struct _n_Record_9694;
struct _n_Record_9620{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_9620> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9620>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_9694{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_9694> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9694>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_9625(double _a0);
std::shared_ptr<_n_Record_9620> _n_meta_9619=[](){return ([&](){auto _n_object_9697=std::make_shared<_n_Record_9620>();_n_object_9697->_p_name=d::String(u"falling sand");_n_object_9697->_p_category=d::String(u"physics");_n_object_9697->_p_note=d::String(u"sand pouring into a heap, then draining through the shelf");_n_object_9697->_p_cols=55.0;_n_object_9697->_p_rows=22.0;_n_object_9697->_p_fps=20.0;return _n_object_9697;})();}();
const double _n_STEPS_9621=[](){return 4.0;}();
const double _n_RATE_9622=[](){return 0.92;}();
const double _n_LAYER_9623=[](){return 150.0;}();
const double _n_WARM_9624=[](){return 290.0;}();
std::function<double()> _n_mulberry32_9625(double _a0){double _n_seed_9651=_a0;
{
double _n_s_9652=double(d::i32(_n_seed_9651)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_9652=double(d::i32((_n_s_9652+1831565813.0))|d::i32(0.0))));
double _n_t_9653=d::imul(double(d::i32(_n_s_9652)^d::i32(double(d::u32(_n_s_9652)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_9652)));
(void)((_n_t_9653=double(d::i32((_n_t_9653+d::imul(double(d::i32(_n_t_9653)^d::i32(double(d::u32(_n_t_9653)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_9653)))))^d::i32(_n_t_9653))));
return (double(d::u32(double(d::i32(_n_t_9653)^d::i32(double(d::u32(_n_t_9653)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_falling_sand final:ascii::Piece{
double _n_cols_9626{};
double _n_rows_9627{};
double _n_W_9628{};
double _n_H_9629{};
double _n_SHELF_9630{};
double _n_MID_9631{};
double _n_END_9632{};
double _n_OPEN_9633{};
double _n_NOZZLE_9634{};
std::function<double()> _n_rand_9635{};
d::Array<uint8_t,true> _n_grid_9636{};
d::Array<int32_t,true> _n_moved_9637{};
double _n_step_9638{};
d::String _n_phase_9639{};
double _n_clock_9640{};
double _n_slide_9641{};
double _n_shade_9642{};
double _n_poured_9643{};
double _n_spilled_9644{};
double _n_held_9645{};
double _n_last_9650{};
std::function<d::String(double,std::shared_ptr<_n_Record_9694>)> _render;
bool _n_solid_9646(double _a0,double _a1){double _n_x_9654=_a0;
double _n_y_9655=_a1;
return ([&]()->bool{auto _n_logical_9727=([&]()->bool{auto _n_logical_9728=([&]()->bool{auto _n_logical_9729=(_n_y_9655>=this->_n_SHELF_9630);return d::truth(_n_logical_9729)?(_n_x_9654>=this->_n_END_9632):_n_logical_9729;})();return d::truth(_n_logical_9728)?(_n_x_9654<=((this->_n_W_9628-1.0)-this->_n_END_9632)):_n_logical_9728;})();return d::truth(_n_logical_9727)?(std::fabs((_n_x_9654-this->_n_MID_9631))>=this->_n_slide_9641):_n_logical_9727;})();}

bool _n_free_9647(double _a0,double _a1){double _n_x_9656=_a0;
double _n_y_9657=_a1;
return ([&]()->bool{auto _n_logical_9730=(_n_y_9657<this->_n_H_9629);return d::truth(_n_logical_9730)?([&]()->bool{auto _n_logical_9731=([&]()->bool{auto _n_logical_9733=(_n_x_9656<0.0);return d::truth(_n_logical_9733)?_n_logical_9733:(_n_x_9656>=this->_n_W_9628);})();return d::truth(_n_logical_9731)?_n_logical_9731:([&]()->bool{auto _n_logical_9732=(!d::truth(d::at(this->_n_grid_9636,((_n_y_9657*this->_n_W_9628)+_n_x_9656))));return d::truth(_n_logical_9732)?(!d::truth(this->_n_solid_9646(_n_x_9656,_n_y_9657))):_n_logical_9732;})();})():_n_logical_9730;})();}

void _n_move_9648(double _a0,double _a1,double _a2){double _n_a_9658=_a0;
double _n_x_9659=_a1;
double _n_y_9660=_a2;
{
if((d::truth((_n_x_9659>=0.0))&&d::truth((_n_x_9659<this->_n_W_9628)))){d::check_cancel();(void)(([&](){auto&& _n_array_9734=this->_n_grid_9636;auto _n_index_9735=((_n_y_9660*this->_n_W_9628)+_n_x_9659);auto _n_value_9736=d::at(this->_n_grid_9636,_n_a_9658);d::put(_n_array_9734,_n_index_9735,_n_value_9736);return _n_value_9736;})());
(void)(([&](){auto&& _n_array_9737=this->_n_moved_9637;auto _n_index_9738=((_n_y_9660*this->_n_W_9628)+_n_x_9659);auto _n_value_9739=this->_n_step_9638;d::put(_n_array_9737,_n_index_9738,_n_value_9739);return _n_value_9739;})());
}
(void)(([&](){auto&& _n_array_9740=this->_n_grid_9636;auto _n_index_9741=_n_a_9658;auto _n_value_9742=0.0;d::put(_n_array_9740,_n_index_9741,_n_value_9742);return _n_value_9742;})());

}
}

void _n_tick_9649(){{
(void)((this->_n_step_9638++));
double _n_top_9661=this->_n_H_9629;
(void)((this->_n_held_9645=0.0));
{double _n_y_9662=(this->_n_H_9629-1.0);
for(;d::truth((_n_y_9662>=0.0));(void)((_n_y_9662--))){d::check_cancel();double _n_flip_9663=double(d::i32((this->_n_step_9638+_n_y_9662))&d::i32(1.0));
{double _n_i_9664=0.0;
for(;d::truth((_n_i_9664<this->_n_W_9628));(void)((_n_i_9664++))){d::check_cancel();double _n_x_9665=(d::truth(_n_flip_9663)?((this->_n_W_9628-1.0)-_n_i_9664):_n_i_9664);
double _n_a_9666=((_n_y_9662*this->_n_W_9628)+_n_x_9665);
if((d::truth((!d::truth(d::at(this->_n_grid_9636,_n_a_9666))))||d::truth((d::at(this->_n_moved_9637,_n_a_9666)==this->_n_step_9638)))){d::check_cancel();continue;
}
(void)((this->_n_held_9645++));
if(d::truth((_n_y_9662==(this->_n_H_9629-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_9743=this->_n_grid_9636;auto _n_index_9744=_n_a_9666;auto _n_value_9745=0.0;d::put(_n_array_9743,_n_index_9744,_n_value_9745);return _n_value_9745;})());
(void)((this->_n_spilled_9644++));
continue;
}
if(d::truth(this->_n_free_9647(_n_x_9665,(_n_y_9662+1.0)))){d::check_cancel();(void)(this->_n_move_9648(_n_a_9666,_n_x_9665,(_n_y_9662+1.0)));
continue;
}
double _n_d_9667=(d::truth((this->_n_rand_9635()<0.5))?(-d::number(1.0)):1.0);
if(d::truth(this->_n_free_9647((_n_x_9665+_n_d_9667),(_n_y_9662+1.0)))){d::check_cancel();(void)(this->_n_move_9648(_n_a_9666,(_n_x_9665+_n_d_9667),(_n_y_9662+1.0)));
}else {d::check_cancel();if(d::truth(this->_n_free_9647((_n_x_9665-_n_d_9667),(_n_y_9662+1.0)))){d::check_cancel();(void)(this->_n_move_9648(_n_a_9666,(_n_x_9665-_n_d_9667),(_n_y_9662+1.0)));
}else {d::check_cancel();if(((d::truth((this->_n_rand_9635()<0.35))&&d::truth(this->_n_free_9647((_n_x_9665+_n_d_9667),_n_y_9662)))&&d::truth(this->_n_free_9647((_n_x_9665+(2.0*_n_d_9667)),(_n_y_9662+1.0))))){d::check_cancel();(void)(this->_n_move_9648(_n_a_9666,(_n_x_9665+_n_d_9667),_n_y_9662));
}else {d::check_cancel();if((d::truth((d::at(this->_n_moved_9637,_n_a_9666)<(this->_n_step_9638-2.0)))&&d::truth((_n_y_9662<_n_top_9661)))){d::check_cancel();(void)((_n_top_9661=_n_y_9662));
}
}
}
}
}}
}}
if((d::truth((this->_n_rand_9635()<_n_RATE_9622))&&d::truth(this->_n_free_9647(this->_n_MID_9631,this->_n_NOZZLE_9634)))){d::check_cancel();(void)(([&](){auto&& _n_array_9746=this->_n_grid_9636;auto _n_index_9747=((this->_n_NOZZLE_9634*this->_n_W_9628)+this->_n_MID_9631);auto _n_value_9748=(1.0+this->_n_shade_9642);d::put(_n_array_9746,_n_index_9747,_n_value_9748);return _n_value_9748;})());
(void)(([&](){auto&& _n_array_9749=this->_n_moved_9637;auto _n_index_9750=((this->_n_NOZZLE_9634*this->_n_W_9628)+this->_n_MID_9631);auto _n_value_9751=this->_n_step_9638;d::put(_n_array_9749,_n_index_9750,_n_value_9751);return _n_value_9751;})());
}
if(d::truth((d::mod((++this->_n_poured_9643),_n_LAYER_9623)==0.0))){d::check_cancel();(void)((this->_n_shade_9642=double(d::i32(this->_n_shade_9642)^d::i32(1.0))));
}
if((d::truth((this->_n_phase_9639==d::String(u"pour")))&&d::truth(([&]()->bool{auto _n_logical_9752=(this->_n_spilled_9644>50.0);return d::truth(_n_logical_9752)?_n_logical_9752:(_n_top_9661<(this->_n_NOZZLE_9634+10.0));})()))){d::check_cancel();(void)(((this->_n_phase_9639=d::String(u"hold")),(this->_n_clock_9640=0.0)));
}else {d::check_cancel();if((d::truth((this->_n_phase_9639==d::String(u"hold")))&&d::truth(((++this->_n_clock_9640)>40.0)))){d::check_cancel();(void)((this->_n_phase_9639=d::String(u"open")));
}else {d::check_cancel();if(d::truth((this->_n_phase_9639==d::String(u"open")))){d::check_cancel();(void)((this->_n_slide_9641=d::minimum({this->_n_OPEN_9633,(this->_n_slide_9641+0.35)})));
if((d::truth((this->_n_slide_9641==this->_n_OPEN_9633))&&d::truth((this->_n_held_9645<110.0)))){d::check_cancel();(void)(((this->_n_phase_9639=d::String(u"close")),(this->_n_spilled_9644=0.0)));
}
}else {d::check_cancel();if(d::truth((this->_n_phase_9639==d::String(u"close")))){d::check_cancel();(void)((this->_n_slide_9641=d::maximum({0.0,(this->_n_slide_9641-0.5)})));
if(d::truth((!d::truth(this->_n_slide_9641)))){d::check_cancel();(void)((this->_n_phase_9639=d::String(u"pour")));
}
}
}
}
}

}
}

explicit Native_falling_sand(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_9698=_n_meta_9619;
this->_n_cols_9626=_n_binding_9698->_p_cols;
this->_n_rows_9627=_n_binding_9698->_p_rows;
this->_n_W_9628=this->_n_cols_9626;
this->_n_H_9629=(this->_n_rows_9627*2.0);
this->_n_SHELF_9630=(this->_n_H_9629-2.0);
this->_n_MID_9631=((this->_n_W_9628-1.0)/2.0);
this->_n_END_9632=5.0;
this->_n_OPEN_9633=((this->_n_MID_9631-this->_n_END_9632)+0.5);
this->_n_NOZZLE_9634=5.0;
this->_n_rand_9635=_n_mulberry32_9625(7.0);
this->_n_grid_9636=d::Array<uint8_t,true>(size_t((this->_n_W_9628*this->_n_H_9629)));
this->_n_moved_9637=d::Array<int32_t,true>(size_t((this->_n_W_9628*this->_n_H_9629))).fill((-d::number(9.0)));
this->_n_step_9638=0.0;
this->_n_phase_9639=d::String(u"pour");
this->_n_clock_9640=0.0;
this->_n_slide_9641=0.0;
this->_n_shade_9642=0.0;
this->_n_poured_9643=0.0;
this->_n_spilled_9644=0.0;
this->_n_held_9645=0.0;
{double _n_i_9668=0.0;
for(;d::truth((_n_i_9668<_n_WARM_9624));(void)((_n_i_9668++))){d::check_cancel();(void)(this->_n_tick_9649());
}}
this->_n_last_9650=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_9694> _a1) mutable ->d::String{double _n_t_9669=_a0;
{
double _n_n_9670=([&](){auto _n_argument_9699=12.0;auto _n_argument_9700=([&](){auto _n_argument_9701=0.0;auto _n_argument_9702=d::round(((_n_t_9669-this->_n_last_9650)*_n_meta_9619->_p_fps));return d::maximum({_n_argument_9701,_n_argument_9702});})();return d::minimum({_n_argument_9699,_n_argument_9700});})();
(void)((this->_n_last_9650=(this->_n_last_9650+(_n_n_9670/_n_meta_9619->_p_fps))));
{double _n_i_9671=0.0;
for(;d::truth((_n_i_9671<(_n_n_9670*_n_STEPS_9621)));(void)((_n_i_9671++))){d::check_cancel();(void)(this->_n_tick_9649());
}}
d::Array<d::String,false> _n_lines_9672=d::Array<d::String,false>{};
auto _n_rests_9673=[&]( double _a0,double _a1) mutable ->std::variant<bool,double>{double _n_x_9674=_a0;
double _n_y_9675=_a1;
return ([&]()->std::variant<bool,double>{auto _n_logical_9703=(_n_y_9675<this->_n_H_9629);return d::truth(_n_logical_9703)?([&]()->std::variant<bool,double>{auto _n_logical_9704=this->_n_solid_9646(_n_x_9674,_n_y_9675);return d::truth(_n_logical_9704)?std::variant<bool,double>(_n_logical_9704):([&]()->std::variant<bool,double>{auto _n_logical_9705=([&]()->std::variant<double,bool>{auto _n_logical_9706=([&]()->bool{auto _n_logical_9707=(_n_x_9674>=0.0);return d::truth(_n_logical_9707)?(_n_x_9674<this->_n_W_9628):_n_logical_9707;})();return d::truth(_n_logical_9706)?std::variant<double,bool>(d::at(this->_n_grid_9636,((_n_y_9675*this->_n_W_9628)+_n_x_9674))):std::variant<double,bool>(_n_logical_9706);})();return d::truth(_n_logical_9705)?std::variant<bool,double>((d::at(this->_n_moved_9637,((_n_y_9675*this->_n_W_9628)+_n_x_9674))<(this->_n_step_9638-2.0))):std::visit([&](const auto &_v)->std::variant<bool,double>{return std::variant<bool,double>(_v);},_n_logical_9705);})();})():std::variant<bool,double>(_n_logical_9703);})();};
auto _n_air_9676=[&]( double _a0,double _a1) mutable ->std::variant<bool,double>{double _n_x_9677=_a0;
double _n_y_9678=_a1;
return ([&]()->std::variant<bool,double>{auto _n_logical_9708=([&]()->std::variant<bool,double>{auto _n_logical_9709=([&]()->std::variant<bool,double>{auto _n_logical_9710=([&]()->std::variant<bool,double>{auto _n_logical_9711=d::at(this->_n_grid_9636,((_n_y_9678*this->_n_W_9628)+_n_x_9677));return d::truth(_n_logical_9711)?std::variant<bool,double>((d::at(this->_n_moved_9637,((_n_y_9678*this->_n_W_9628)+_n_x_9677))>=(this->_n_step_9638-2.0))):std::variant<bool,double>(_n_logical_9711);})();return d::truth(_n_logical_9710)?(!d::truth(_n_rests_9673(_n_x_9677,(_n_y_9678+1.0)))):_n_logical_9710;})();return d::truth(_n_logical_9709)?(!d::truth(_n_rests_9673((_n_x_9677-1.0),(_n_y_9678+1.0)))):_n_logical_9709;})();return d::truth(_n_logical_9708)?(!d::truth(_n_rests_9673((_n_x_9677+1.0),(_n_y_9678+1.0)))):_n_logical_9708;})();};
{double _n_r_9679=0.0;
for(;d::truth((_n_r_9679<this->_n_rows_9627));(void)((_n_r_9679++))){d::check_cancel();d::String _n_line_9680=d::String(u"");
{double _n_c_9681=0.0;
for(;d::truth((_n_c_9681<this->_n_W_9628));(void)((_n_c_9681++))){d::check_cancel();double _n_a_9682=(((2.0*_n_r_9679)*this->_n_W_9628)+_n_c_9681);
double _n_b_9683=(_n_a_9682+this->_n_W_9628);
if(d::truth(this->_n_solid_9646(_n_c_9681,(2.0*_n_r_9679)))){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u"▀")))));
continue;
}
std::variant<bool,double> _n_fa_9684=_n_air_9676(_n_c_9681,(2.0*_n_r_9679));
std::variant<bool,double> _n_fb_9685=_n_air_9676(_n_c_9681,((2.0*_n_r_9679)+1.0));
std::variant<bool,double> _n_sa_9686=([&]()->std::variant<bool,double>{auto _n_logical_9712=d::at(this->_n_grid_9636,_n_a_9682);return d::truth(_n_logical_9712)?(!d::truth(_n_fa_9684)):std::variant<bool,double>(_n_logical_9712);})();
std::variant<bool,double> _n_sb_9687=([&]()->std::variant<bool,double>{auto _n_logical_9713=d::at(this->_n_grid_9636,_n_b_9683);return d::truth(_n_logical_9713)?(!d::truth(_n_fb_9685)):std::variant<bool,double>(_n_logical_9713);})();
if((((d::truth((_n_c_9681==this->_n_MID_9631))&&d::truth(([&]()->std::variant<bool,double>{auto _n_logical_9714=_n_fa_9684;return d::truth(_n_logical_9714)?_n_logical_9714:_n_fb_9685;})()))&&d::truth((!d::truth(_n_sa_9686))))&&d::truth((!d::truth(_n_sb_9687))))){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u"┊")))));
}else {d::check_cancel();if((d::truth(_n_sa_9686)&&d::truth(([&]()->std::variant<bool,double>{auto _n_logical_9715=_n_sb_9687;return d::truth(_n_logical_9715)?_n_logical_9715:_n_fb_9685;})()))){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string((d::truth((d::at(this->_n_grid_9636,_n_a_9682)==1.0))?d::String(u"█"):d::String(u"▓"))))));
}else {d::check_cancel();if((d::truth(_n_sb_9687)&&d::truth(_n_fa_9684))){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u"█")))));
}else {d::check_cancel();if(d::truth(_n_sa_9686)){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u"▀")))));
}else {d::check_cancel();if(d::truth(_n_sb_9687)){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u"▄")))));
}else {d::check_cancel();if((d::truth(_n_fa_9684)&&d::truth(_n_fb_9685))){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u":")))));
}else {d::check_cancel();if(d::truth(_n_fa_9684)){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u"'")))));
}else {d::check_cancel();if(d::truth(_n_fb_9685)){d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u".")))));
}else {d::check_cancel();(void)((_n_line_9680=(d::string(_n_line_9680)+d::string(d::String(u" ")))));
}
}
}
}
}
}
}
}
}}
(void)(_n_lines_9672.push(_n_line_9680));
}}
double _n_p_9688=(this->_n_MID_9631-2.0);
d::String _n_fill_9689=d::String(u"░");
auto _n_put_9690=[&]( double _a0,double _a1,d::String _a2) mutable ->d::String{double _n_r_9691=_a0;
double _n_at_9692=_a1;
d::String _n_s_9693=_a2;
return ([&](){auto&& _n_array_9716=_n_lines_9672;auto _n_index_9717=_n_r_9691;auto _n_value_9718=([&](){auto _n_left_9719=(d::string(d::slice(d::at(_n_lines_9672,_n_r_9691),0.0,_n_at_9692))+d::string(_n_s_9693));auto _n_right_9720=d::slice(d::at(_n_lines_9672,_n_r_9691),(_n_at_9692+double(_n_s_9693.size())));return (d::string(_n_left_9719)+d::string(_n_right_9720));})();d::put(_n_array_9716,_n_index_9717,_n_value_9718);return _n_value_9718;})();};
(void)(([&](){auto _n_argument_9721=0.0;auto _n_argument_9722=(_n_p_9688-1.0);auto _n_argument_9723=(d::string((d::string(d::String(u"│"))+d::string(d::repeat(_n_fill_9689,5.0))))+d::string(d::String(u"│")));return _n_put_9690(_n_argument_9721,_n_argument_9722,_n_argument_9723);})());
(void)(([&](){auto _n_argument_9724=1.0;auto _n_argument_9725=(_n_p_9688-1.0);auto _n_argument_9726=(d::string((d::string(d::String(u"╰╮"))+d::string(d::repeat(_n_fill_9689,3.0))))+d::string(d::String(u"╭╯")));return _n_put_9690(_n_argument_9724,_n_argument_9725,_n_argument_9726);})());
(void)(_n_put_9690(2.0,_n_p_9688,(d::string((d::string(d::String(u" ╰"))+d::string(_n_fill_9689)))+d::string(d::String(u"╯ ")))));
(void)(_n_put_9690((this->_n_rows_9627-1.0),(this->_n_END_9632-1.0),d::String(u"▐")));
(void)(_n_put_9690((this->_n_rows_9627-1.0),(this->_n_W_9628-this->_n_END_9632),d::String(u"▌")));
return d::join(_n_lines_9672,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("falling-sand").cols)*ascii::catalog_meta("falling-sand").rows);auto _env=std::make_shared<_n_Record_9694>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &falling_sand_meta(){return catalog_meta("falling-sand");}
std::unique_ptr<Piece> make_falling_sand(const AsciiPieceOptions &o){return std::make_unique<Native_falling_sand>(o);}
}
