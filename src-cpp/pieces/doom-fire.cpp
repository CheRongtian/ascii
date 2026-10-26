// Direct, statically typed C++ from src/pieces/doom-fire.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_8145;
struct _n_Record_8235;
struct _n_Record_8145{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_8145> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8145>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_8235{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_8235> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8235>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_8155(double _a0);
double _n_hash_8156(double _a0,double _a1);
double _n_ease_8157(double _a0);
double _n_noise_8158(double _a0,double _a1);
std::shared_ptr<_n_Record_8145> _n_meta_8144=[](){return ([&](){auto _n_object_8238=std::make_shared<_n_Record_8145>();_n_object_8238->_p_name=d::String(u"doom fire");_n_object_8238->_p_category=d::String(u"effects");_n_object_8238->_p_note=d::String(u"the psx fire spread, tongues climbing off a white-hot bed");_n_object_8238->_p_cols=60.0;_n_object_8238->_p_rows=18.0;_n_object_8238->_p_fps=24.0;return _n_object_8238;})();}();
const double _n_SX_8146=[](){return 2.0;}();
const double _n_SY_8147=[](){return 4.0;}();
const double _n_MAX_8148=[](){return 36.0;}();
const d::String _n_RAMP_8149=[](){return d::String(u" .:;!+*#%@");}();
const double _n_RATE_8150=[](){return 24.0;}();
const double _n_BED_8151=[](){return 0.72;}();
d::Array<d::Array<double,false>,false> _n_TONGUES_8152=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(0.66)),1.05,11.0},d::Array<double,false>{(-d::number(0.18)),2.1,15.0},d::Array<double,false>{0.3,1.6,13.0},d::Array<double,false>{0.73,0.95,9.0}};}();
const double _n_DRIFT_8153=[](){return 34.0;}();
const double _n_FLOOR_8154=[](){return 0.16;}();
std::function<double()> _n_mulberry32_8155(double _a0){double _n_seed_8173=_a0;
{
double _n_s_8174=double(d::i32(_n_seed_8173)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_8174=double(d::i32((_n_s_8174+1831565813.0))|d::i32(0.0))));
double _n_t_8175=d::imul(double(d::i32(_n_s_8174)^d::i32(double(d::u32(_n_s_8174)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_8174)));
(void)((_n_t_8175=double(d::i32((_n_t_8175+d::imul(double(d::i32(_n_t_8175)^d::i32(double(d::u32(_n_t_8175)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_8175)))))^d::i32(_n_t_8175))));
return (double(d::u32(double(d::i32(_n_t_8175)^d::i32(double(d::u32(_n_t_8175)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_hash_8156(double _a0,double _a1){double _n_x_8176=_a0;
double _n_y_8177=_a1;
{
double _n_h_8178=([&](){auto _n_left_8239=d::imul(_n_x_8176,668265261.0);auto _n_right_8240=d::imul(_n_y_8177,374761393.0);return double(d::i32(_n_left_8239)^d::i32(_n_right_8240));})();
(void)((_n_h_8178=d::imul(double(d::i32(_n_h_8178)^d::i32(double(d::u32(_n_h_8178)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_8178=d::imul(double(d::i32(_n_h_8178)^d::i32(double(d::u32(_n_h_8178)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_8178)^d::i32(double(d::u32(_n_h_8178)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_8157(double _a0){double _n_t_8179=_a0;
return ((_n_t_8179*_n_t_8179)*(3.0-(2.0*_n_t_8179)));}

double _n_noise_8158(double _a0,double _a1){double _n_x_8180=_a0;
double _n_y_8181=_a1;
{
double _n_i_8182=std::floor(_n_x_8180);
double _n_j_8183=std::floor(_n_y_8181);
double _n_u_8184=_n_ease_8157((_n_x_8180-_n_i_8182));
double _n_v_8185=_n_ease_8157((_n_y_8181-_n_j_8183));
double _n_a_8186=_n_hash_8156(_n_i_8182,_n_j_8183);
double _n_b_8187=_n_hash_8156((_n_i_8182+1.0),_n_j_8183);
double _n_c_8188=_n_hash_8156(_n_i_8182,(_n_j_8183+1.0));
double _n_d_8189=_n_hash_8156((_n_i_8182+1.0),(_n_j_8183+1.0));
return (((_n_a_8186+((_n_b_8187-_n_a_8186)*_n_u_8184))+((_n_c_8188-_n_a_8186)*_n_v_8185))+(((((_n_a_8186-_n_b_8187)-_n_c_8188)+_n_d_8189)*_n_u_8184)*_n_v_8185));

}
}

struct Native_doom_fire final:ascii::Piece{
double _n_cols_8159{};
double _n_rows_8160{};
double _n_W_8161{};
double _n_H_8162{};
std::function<double()> _n_rand_8163{};
d::Array<float,true> _n_heat_8164{};
d::Array<float,true> _n_cool_8165{};
d::Array<float,true> _n_tall_8166{};
d::Array<float,true> _n_bed_8167{};
double _n_n_8168{};
d::Array<float,true> _n_lv_8170{};
double _n_last_8171{};
double _n_acc_8172{};
std::function<d::String(double,std::shared_ptr<_n_Record_8235>)> _render;
void _n_step_8169(){{
(void)((this->_n_n_8168++));
(void)(this->_n_tall_8166.fill(0.28));
(void)(d::forEach(_n_TONGUES_8152,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_8249=_a0;
double _n_at_8193=d::at(_n_binding_8249,0.0);
double _n_top_8194=d::at(_n_binding_8249,1.0);
double _n_half_8195=d::at(_n_binding_8249,2.0);
double _n_i_8196=_a1;
{
double _n_lift_8197=(_n_top_8194*(0.55+(0.45*([&](){auto _n_left_8250=(_n_noise_8158((_n_i_8196*7.3),(this->_n_n_8168/_n_DRIFT_8153))*0.7);auto _n_right_8251=(_n_noise_8158(((_n_i_8196*3.1)+40.0),(this->_n_n_8168/(_n_DRIFT_8153*0.4)))*0.3);return (_n_left_8250+_n_right_8251);})())));
double _n_mid_8198=(((this->_n_W_8161/2.0)*(1.0+(_n_at_8193*_n_BED_8151)))+(6.0*(_n_noise_8158(((_n_i_8196*5.7)+90.0),(this->_n_n_8168/(_n_DRIFT_8153*2.0)))-0.5)));
{double _n_x_8199=([&](){auto _n_argument_8252=0.0;auto _n_argument_8253=std::floor((_n_mid_8198-_n_half_8195));return d::maximum({_n_argument_8252,_n_argument_8253});})();
for(;d::truth((_n_x_8199<d::minimum({this->_n_W_8161,(_n_mid_8198+_n_half_8195)})));(void)((_n_x_8199++))){d::check_cancel();double _n_d_8200=(((_n_x_8199+0.5)-_n_mid_8198)/_n_half_8195);
(void)(([&](){auto&& _n_array_8254=this->_n_tall_8166;auto _n_index_8255=_n_x_8199;auto _n_value_8256=([&](){auto _n_argument_8257=d::at(this->_n_tall_8166,_n_x_8199);auto _n_argument_8258=(_n_lift_8197*(1.0-std::pow(std::fabs(_n_d_8200),1.3)));return d::maximum({_n_argument_8257,_n_argument_8258});})();d::put(_n_array_8254,_n_index_8255,_n_value_8256);return _n_value_8256;})());
}}

}
}));
{double _n_x_8201=0.0;
for(;d::truth((_n_x_8201<this->_n_W_8161));(void)((_n_x_8201++))){d::check_cancel();(void)(([&](){auto&& _n_array_8259=this->_n_cool_8165;auto _n_index_8260=_n_x_8201;auto _n_value_8261=(_n_MAX_8148/((this->_n_rows_8160*_n_SY_8147)*d::at(this->_n_tall_8166,_n_x_8201)));d::put(_n_array_8259,_n_index_8260,_n_value_8261);return _n_value_8261;})());
}}
double _n_base_8202=((this->_n_H_8162-1.0)*this->_n_W_8161);
{double _n_x_8203=0.0;
for(;d::truth((_n_x_8203<this->_n_W_8161));(void)((_n_x_8203++))){d::check_cancel();(void)(([&](){auto&& _n_array_8262=this->_n_heat_8164;auto _n_index_8263=(_n_base_8202+_n_x_8203);auto _n_value_8264=(_n_MAX_8148*d::at(this->_n_bed_8167,_n_x_8203));d::put(_n_array_8262,_n_index_8263,_n_value_8264);return _n_value_8264;})());
}}
{double _n_y_8204=1.0;
for(;d::truth((_n_y_8204<this->_n_H_8162));(void)((_n_y_8204++))){d::check_cancel();double _n_row_8205=(_n_y_8204*this->_n_W_8161);
double _n_up_8206=(1.0-(_n_y_8204/this->_n_H_8162));
double _n_flip_8207=double(d::i32((_n_y_8204+this->_n_n_8168))&d::i32(1.0));
{double _n_i_8208=0.0;
for(;d::truth((_n_i_8208<this->_n_W_8161));(void)((_n_i_8208++))){d::check_cancel();double _n_x_8209=(d::truth(_n_flip_8207)?((this->_n_W_8161-1.0)-_n_i_8208):_n_i_8208);
double _n_r_8210=this->_n_rand_8163();
double _n_to_8211=(_n_x_8209+(d::truth((_n_r_8210<0.3))?(-d::number(1.0)):(d::truth((_n_r_8210>0.7))?1.0:0.0)));
if((d::truth((_n_to_8211<0.0))||d::truth((_n_to_8211>=this->_n_W_8161)))){d::check_cancel();continue;
}
double _n_tear_8212=(1.0+(((2.2*_n_up_8206)*_n_up_8206)*([&](){auto _n_argument_8265=0.0;auto _n_argument_8266=(_n_noise_8158((_n_x_8209/5.0),((_n_y_8204+this->_n_n_8168)/6.0))-0.45);return d::maximum({_n_argument_8265,_n_argument_8266});})()));
double _n_v_8213=(d::at(this->_n_heat_8164,(_n_row_8205+_n_x_8209))-(((this->_n_rand_8163()*2.0)*d::at(this->_n_cool_8165,_n_x_8209))*_n_tear_8212));
(void)(([&](){auto&& _n_array_8267=this->_n_heat_8164;auto _n_index_8268=((_n_row_8205-this->_n_W_8161)+_n_to_8211);auto _n_value_8269=(d::truth((_n_v_8213>0.0))?_n_v_8213:0.0);d::put(_n_array_8267,_n_index_8268,_n_value_8269);return _n_value_8269;})());
}}
}}

}
}

explicit Native_doom_fire(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_8241=_n_meta_8144;
this->_n_cols_8159=_n_binding_8241->_p_cols;
this->_n_rows_8160=_n_binding_8241->_p_rows;
this->_n_W_8161=(this->_n_cols_8159*_n_SX_8146);
this->_n_H_8162=((this->_n_rows_8160*_n_SY_8147)+1.0);
this->_n_rand_8163=_n_mulberry32_8155(9.0);
this->_n_heat_8164=d::Array<float,true>(size_t((this->_n_W_8161*this->_n_H_8162)));
this->_n_cool_8165=d::Array<float,true>(size_t(this->_n_W_8161));
this->_n_tall_8166=d::Array<float,true>(size_t(this->_n_W_8161));
this->_n_bed_8167=d::Array<float,true>(d::from(this->_n_W_8161,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_x_8191=_a1;
{
double _n_d_8192=(std::fabs(((((2.0*_n_x_8191)+1.0)/this->_n_W_8161)-1.0))/_n_BED_8151);
return (d::truth((_n_d_8192<0.88))?1.0:(d::truth((_n_d_8192<1.0))?_n_ease_8157(((1.0-_n_d_8192)/0.12)):0.0));

}
}));
this->_n_n_8168=0.0;
{double _n_i_8214=0.0;
for(;d::truth((_n_i_8214<200.0));(void)((_n_i_8214++))){d::check_cancel();(void)(this->_n_step_8169());
}}
this->_n_lv_8170=d::Array<float,true>(size_t((this->_n_cols_8159*this->_n_rows_8160)));
this->_n_last_8171=0.0;
this->_n_acc_8172=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_8235> _a1) mutable ->d::String{double _n_t_8215=_a0;
{
(void)((this->_n_acc_8172=(this->_n_acc_8172+([&](){auto _n_argument_8242=d::maximum({(_n_t_8215-this->_n_last_8171),0.0});auto _n_argument_8243=0.25;return d::minimum({_n_argument_8242,_n_argument_8243});})())));
(void)((this->_n_last_8171=_n_t_8215));
while(d::truth((this->_n_acc_8172>=((1.0/_n_RATE_8150)-0.000001)))){d::check_cancel();(void)(this->_n_step_8169());
(void)((this->_n_acc_8172=(this->_n_acc_8172-(1.0/_n_RATE_8150))));
}
{double _n_cy_8216=0.0;
for(;d::truth((_n_cy_8216<this->_n_rows_8160));(void)((_n_cy_8216++))){d::check_cancel();{double _n_cx_8217=0.0;
for(;d::truth((_n_cx_8217<this->_n_cols_8159));(void)((_n_cx_8217++))){d::check_cancel();double _n_sum_8218=0.0;
{double _n_j_8219=0.0;
for(;d::truth((_n_j_8219<_n_SY_8147));(void)((_n_j_8219++))){d::check_cancel();double _n_at_8220=((((_n_cy_8216*_n_SY_8147)+_n_j_8219)*this->_n_W_8161)+(_n_cx_8217*_n_SX_8146));
{double _n_i_8221=0.0;
for(;d::truth((_n_i_8221<_n_SX_8146));(void)((_n_i_8221++))){d::check_cancel();(void)((_n_sum_8218=(_n_sum_8218+d::at(this->_n_heat_8164,(_n_at_8220+_n_i_8221)))));
}}
}}
double _n_v_8222=(((_n_sum_8218/((_n_SX_8146*_n_SY_8147)*_n_MAX_8148))-_n_FLOOR_8154)/(1.0-_n_FLOOR_8154));
(void)(([&](){auto&& _n_array_8244=this->_n_lv_8170;auto _n_index_8245=((_n_cy_8216*this->_n_cols_8159)+_n_cx_8217);auto _n_value_8246=(d::truth((_n_v_8222<=0.0))?0.0:d::minimum({(double(_n_RAMP_8149.size())-1.0),(1.0+double(d::i32((_n_v_8222*(double(_n_RAMP_8149.size())-1.0)))|d::i32(0.0)))}));d::put(_n_array_8244,_n_index_8245,_n_value_8246);return _n_value_8246;})());
}}
}}
d::Array<d::String,false> _n_lines_8223=d::Array<d::String,false>{};
{double _n_cy_8224=0.0;
for(;d::truth((_n_cy_8224<this->_n_rows_8160));(void)((_n_cy_8224++))){d::check_cancel();d::String _n_line_8225=d::String(u"");
{double _n_cx_8226=0.0;
for(;d::truth((_n_cx_8226<this->_n_cols_8159));(void)((_n_cx_8226++))){d::check_cancel();double _n_k_8227=d::at(this->_n_lv_8170,((_n_cy_8224*this->_n_cols_8159)+_n_cx_8226));
if((d::truth((_n_k_8227>0.0))&&d::truth((_n_k_8227<5.0)))){d::check_cancel();double _n_any_8228=0.0;
double _n_under_8229=0.0;
{double _n_dy_8230=(-d::number(1.0));
for(;d::truth((_n_dy_8230<=1.0));(void)((_n_dy_8230++))){d::check_cancel();{double _n_dx_8231=(-d::number(1.0));
for(;d::truth((_n_dx_8231<=1.0));(void)((_n_dx_8231++))){d::check_cancel();double _n_y_8232=(_n_cy_8224+_n_dy_8230);
double _n_x_8233=(_n_cx_8226+_n_dx_8231);
if(((((d::truth(([&]()->double{auto _n_logical_8247=_n_dy_8230;return d::truth(_n_logical_8247)?_n_logical_8247:_n_dx_8231;})())&&d::truth((_n_y_8232>=0.0)))&&d::truth((_n_y_8232<this->_n_rows_8160)))&&d::truth((_n_x_8233>=0.0)))&&d::truth((_n_x_8233<this->_n_cols_8159)))){d::check_cancel();double _n_o_8234=d::at(this->_n_lv_8170,((_n_y_8232*this->_n_cols_8159)+_n_x_8233));
if(d::truth(_n_o_8234)){d::check_cancel();(void)((_n_any_8228++));
}
if((d::truth((_n_dy_8230>=0.0))&&d::truth((_n_o_8234>_n_under_8229)))){d::check_cancel();(void)((_n_under_8229=_n_o_8234));
}
}
}}
}}
if((d::truth((_n_any_8228<2.0))||d::truth(([&]()->bool{auto _n_logical_8248=(_n_k_8227<3.0);return d::truth(_n_logical_8248)?(_n_under_8229<3.0):_n_logical_8248;})()))){d::check_cancel();(void)((_n_k_8227=0.0));
}
}
(void)((_n_line_8225=(d::string(_n_line_8225)+d::string(d::at(_n_RAMP_8149,_n_k_8227)))));
}}
(void)(_n_lines_8223.push(_n_line_8225));
}}
return d::join(_n_lines_8223,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("doom-fire").cols)*ascii::catalog_meta("doom-fire").rows);auto _env=std::make_shared<_n_Record_8235>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &doom_fire_meta(){return catalog_meta("doom-fire");}
std::unique_ptr<Piece> make_doom_fire(const AsciiPieceOptions &o){return std::make_unique<Native_doom_fire>(o);}
}
