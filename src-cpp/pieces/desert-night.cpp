// Direct, statically typed C++ from src/pieces/desert-night.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_7301;
struct _n_Record_7622;
struct _n_Record_7301{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_7301> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7301>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_7622{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_7622> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7622>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_7316(double _a0,double _a1);
double _n_noise_7317(double _a0,double _a1);
double _n_fbm_7318(double _a0,double _a1,double _a2);
double _n_clamp_7319(double _a0);
double _n_smooth_7320(double _a0,double _a1,double _a2);
double _n_mix_7321(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_7322(d::String _a0);
double _n_phase_7323(double _a0,double _a1);
double _n_crestX_7324(double _a0);
double _n_ridge_7325(double _a0,double _a1);
double _n_dunes_7326(double _a0,double _a1);
double _n_march_7327(double _a0,double _a1);
std::shared_ptr<_n_Record_7301> _n_meta_7300=[](){return ([&](){auto _n_object_7625=std::make_shared<_n_Record_7301>();_n_object_7625->_p_name=d::String(u"desert night");_n_object_7625->_p_category=d::String(u"scenes");_n_object_7625->_p_note=d::String(u"the milky way over a lone acacia on moonless dunes, meteors falling");_n_object_7625->_p_cols=200.0;_n_object_7625->_p_rows=100.0;_n_object_7625->_p_cell=1.0;_n_object_7625->_p_fps=15.0;_n_object_7625->_p_ground=d::String(u"#04060c");_n_object_7625->_p_palette=d::Array<d::String,false>{d::String(u"#0a1024"),d::String(u"#101830"),d::String(u"#16213f"),d::String(u"#1e2b50"),d::String(u"#283864"),d::String(u"#34477a"),d::String(u"#45598f"),d::String(u"#5a6fa6"),d::String(u"#7488bd"),d::String(u"#93a5d2"),d::String(u"#b6c3e4"),d::String(u"#d8e0f2"),d::String(u"#f4f6fb"),d::String(u"#fff3dc"),d::String(u"#ffe2b4"),d::String(u"#f5c98e"),d::String(u"#e2a86e"),d::String(u"#c4864f"),d::String(u"#9c6440"),d::String(u"#74492f"),d::String(u"#2a2230"),d::String(u"#3d2f3a"),d::String(u"#56404a"),d::String(u"#735358"),d::String(u"#946a62"),d::String(u"#b6836c"),d::String(u"#4a3b48"),d::String(u"#6b5562"),d::String(u"#8a6f7a"),d::String(u"#a88590"),d::String(u"#c9a3a3"),d::String(u"#e2bfb4"),d::String(u"#2a2448"),d::String(u"#3d3466"),d::String(u"#57498a"),d::String(u"#7a68a8"),d::String(u"#ffd8a8"),d::String(u"#cfe0ff"),d::String(u"#a9c4ff"),d::String(u"#ff9a52"),d::String(u"#e07a3e"),d::String(u"#0d0f1a"),d::String(u"#151827")};return _n_object_7625;})();}();
const double _n_W_7302=[](){return 200.0;}();
const double _n_H_7303=[](){return 100.0;}();
const double _n_K_7304=[](){return 0.62;}();
const double _n_HZ_7305=[](){return 64.0;}();
const double _n_CAM_7306=[](){return 6.0;}();
const double _n_HMAX_7307=[](){return 16.0;}();
d::Array<double,false> _n_TOWN_7308=[](){return d::Array<double,false>{30.0,66.0};}();
d::Array<double,false> _n_CORE_7309=[](){return d::Array<double,false>{152.0,38.0};}();
d::Array<double,false> _n_ARC_7310=[](){return d::Array<double,false>{50.0,209.8,199.8};}();
d::Array<double,false> _n_ARC_S_7311=[](){return d::Array<double,false>{(-d::number(1.035)),0.8};}();
const double _n_ACACIA_7312=[](){return 150.0;}();
const d::String _n_DOTS_7313=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_7314=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_7315=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_7362=_a0;
return ((_n_v_7362/16.0)-0.47);});}();
double _n_hash_7316(double _a0,double _a1){double _n_x_7363=_a0;
double _n_y_7364=_a1;
{
double _n_h_7365=([&](){auto _n_left_7626=d::imul(double(d::i32(_n_x_7363)|d::i32(0.0)),374761393.0);auto _n_right_7627=d::imul(double(d::i32(_n_y_7364)|d::i32(0.0)),668265263.0);return (_n_left_7626+_n_right_7627);})();
(void)((_n_h_7365=d::imul(double(d::i32(_n_h_7365)^d::i32(double(d::u32(_n_h_7365)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_7365)^d::i32(double(d::u32(_n_h_7365)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_7317(double _a0,double _a1){double _n_x_7366=_a0;
double _n_y_7367=_a1;
{
double _n_xi_7368=std::floor(_n_x_7366);
double _n_yi_7369=std::floor(_n_y_7367);
double _n_fx_7370=(_n_x_7366-_n_xi_7368);
double _n_fy_7371=(_n_y_7367-_n_yi_7369);
double _n_u_7372=((_n_fx_7370*_n_fx_7370)*(3.0-(2.0*_n_fx_7370)));
double _n_v_7373=((_n_fy_7371*_n_fy_7371)*(3.0-(2.0*_n_fy_7371)));
double _n_a_7374=_n_hash_7316(_n_xi_7368,_n_yi_7369);
double _n_b_7375=_n_hash_7316((_n_xi_7368+1.0),_n_yi_7369);
double _n_c_7376=_n_hash_7316(_n_xi_7368,(_n_yi_7369+1.0));
double _n_d_7377=_n_hash_7316((_n_xi_7368+1.0),(_n_yi_7369+1.0));
return (((_n_a_7374+((_n_b_7375-_n_a_7374)*_n_u_7372))+((_n_c_7376-_n_a_7374)*_n_v_7373))+(((((_n_a_7374-_n_b_7375)-_n_c_7376)+_n_d_7377)*_n_u_7372)*_n_v_7373));

}
}

double _n_fbm_7318(double _a0,double _a1,double _a2){double _n_x_7378=_a0;
double _n_y_7379=_a1;
double _n_octaves_7380=_a2;
{
double _n_s_7381=0.0;
double _n_n_7382=0.0;
double _n_amp_7383=0.5;
double _n_f_7384=1.0;
{double _n_i_7385=0.0;
for(;d::truth((_n_i_7385<_n_octaves_7380));(void)((_n_i_7385++))){d::check_cancel();(void)((_n_s_7381=(_n_s_7381+(_n_amp_7383*_n_noise_7317(((_n_x_7378*_n_f_7384)+(_n_i_7385*31.7)),(_n_y_7379*_n_f_7384))))));
(void)((_n_n_7382=(_n_n_7382+_n_amp_7383)));
(void)((_n_amp_7383=(_n_amp_7383*0.5)));
(void)((_n_f_7384=(_n_f_7384*2.0)));
}}
return (_n_s_7381/_n_n_7382);

}
}

double _n_clamp_7319(double _a0){double _n_v_7386=_a0;
return (d::truth((_n_v_7386<0.0))?0.0:(d::truth((_n_v_7386>1.0))?1.0:_n_v_7386));}

double _n_smooth_7320(double _a0,double _a1,double _a2){double _n_a_7387=_a0;
double _n_b_7388=_a1;
double _n_v_7389=_a2;
{
double _n_k_7390=_n_clamp_7319(((_n_v_7389-_n_a_7387)/(_n_b_7388-_n_a_7387)));
return ((_n_k_7390*_n_k_7390)*(3.0-(2.0*_n_k_7390)));

}
}

double _n_mix_7321(double _a0,double _a1,double _a2){double _n_a_7391=_a0;
double _n_b_7392=_a1;
double _n_k_7393=_a2;
return (_n_a_7391+((_n_b_7392-_n_a_7391)*_n_k_7393));}

d::Array<double,false> _n_hex_7322(d::String _a0){d::String _n_s_7394=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_7395=_a0;
return (([&](){auto _n_argument_7628=d::slice(_n_s_7394,_n_i_7395,(_n_i_7395+2.0));auto _n_argument_7629=16.0;return d::parseInt(_n_argument_7628,_n_argument_7629);})()/255.0);});}

double _n_phase_7323(double _a0,double _a1){double _n_x_7396=_a0;
double _n_z_7397=_a1;
{
double _n_p_7398=(((_n_x_7396*0.9)+(_n_z_7397*0.42))+(26.0*_n_fbm_7318((_n_x_7396*0.014),(_n_z_7397*0.014),3.0)));
double _n_q_7399=(_n_p_7398/19.0);
return (_n_q_7399-std::floor(_n_q_7399));

}
}

double _n_crestX_7324(double _a0){double _n_z_7400=_a0;
{
double _n_k_7401=_n_clamp_7319(((_n_z_7400-22.0)/52.0));
return (((-d::number(4.0))+(((26.0*_n_k_7401)*_n_k_7401)*(3.0-(2.0*_n_k_7401))))+(5.0*std::sin(((_n_z_7400-22.0)*0.09))));

}
}

double _n_ridge_7325(double _a0,double _a1){double _n_x_7402=_a0;
double _n_z_7403=_a1;
{
if(d::truth((_n_z_7403<8.0))){d::check_cancel();return 0.0;
}
double _n_hc_7404=(d::truth((_n_z_7403<=74.0))?(0.5+(13.0*([&](){auto _n_argument_7630=_n_clamp_7319(((_n_z_7403-12.0)/62.0));auto _n_argument_7631=1.25;return std::pow(_n_argument_7630,_n_argument_7631);})())):(13.5*(1.0-((_n_z_7403-74.0)/9.0))));
double _n_dx_7405=(_n_x_7402-_n_crestX_7324(_n_z_7403));
return (_n_hc_7404-(d::truth((_n_dx_7405<0.0))?((-d::number(_n_dx_7405))*0.36):(_n_dx_7405*0.8)));

}
}

double _n_dunes_7326(double _a0,double _a1){double _n_x_7406=_a0;
double _n_z_7407=_a1;
{
double _n_u_7408=_n_phase_7323(_n_x_7406,_n_z_7407);
double _n_prof_7409=(d::truth((_n_u_7408<0.72))?std::pow((_n_u_7408/0.72),1.5):std::pow(((1.0-_n_u_7408)/0.28),0.75));
double _n_rg_7410=_n_ridge_7325(_n_x_7406,_n_z_7407);
double _n_amp_7411=([&](){auto _n_left_7632=(1.0+(4.5*_n_fbm_7318(((_n_x_7406*0.008)+5.0),(_n_z_7407*0.008),2.0)));auto _n_right_7633=(1.0-(0.8*_n_smooth_7320((-d::number(3.0)),3.0,_n_rg_7410)));return (_n_left_7632*_n_right_7633);})();
return ([&](){auto _n_left_7634=d::maximum({(_n_prof_7409*_n_amp_7411),_n_rg_7410});auto _n_right_7635=(0.3*_n_fbm_7318((_n_x_7406*0.05),(_n_z_7407*0.05),2.0));return (_n_left_7634+_n_right_7635);})();

}
}

double _n_march_7327(double _a0,double _a1){double _n_u_7412=_a0;
double _n_v_7413=_a1;
{
double _n_z_7414=3.0;
double _n_prev_7415=_n_z_7414;
{double _n_i_7416=0.0;
for(;(d::truth((_n_i_7416<300.0))&&d::truth((_n_z_7414<600.0)));(void)((_n_i_7416++))){d::check_cancel();double _n_y_7417=(_n_CAM_7306+(_n_v_7413*_n_z_7414));
if((d::truth((_n_v_7413>0.0))&&d::truth((_n_y_7417>_n_HMAX_7307)))){d::check_cancel();return 0.0;
}
double _n_gap_7418=(_n_y_7417-_n_dunes_7326((_n_u_7412*_n_z_7414),_n_z_7414));
if(d::truth((_n_gap_7418<0.0))){d::check_cancel();double _n_a_7419=_n_prev_7415;
double _n_b_7420=_n_z_7414;
{double _n_j_7421=0.0;
for(;d::truth((_n_j_7421<7.0));(void)((_n_j_7421++))){d::check_cancel();double _n_m_7422=((_n_a_7419+_n_b_7420)/2.0);
if(d::truth((((_n_CAM_7306+(_n_v_7413*_n_m_7422))-_n_dunes_7326((_n_u_7412*_n_m_7422),_n_m_7422))<0.0))){d::check_cancel();(void)((_n_b_7420=_n_m_7422));
}else {d::check_cancel();(void)((_n_a_7419=_n_m_7422));
}
}}
return _n_b_7420;
}
(void)((_n_prev_7415=_n_z_7414));
(void)((_n_z_7414=(_n_z_7414+(d::maximum({0.25,(_n_gap_7418*0.5)})+(_n_z_7414*0.004)))));
}}
return 0.0;

}
}

struct Native_desert_night final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_7328{};
double _n_N_7329{};
d::Array<d::String,false> _n_out_7330{};
d::Array<uint8_t,true> _n_lut_7331{};
d::Array<double,false> _n_L_7334{};
d::Array<double,false> _n_G_7335{};
double _n_SKY_7336{};
double _n_SAND_7337{};
double _n_TREE_7338{};
d::Array<uint8_t,true> _n_mat_7339{};
d::Array<float,true> _n_depth_7340{};
d::Array<float,true> _n_sR_7341{};
d::Array<float,true> _n_sG_7342{};
d::Array<float,true> _n_sB_7343{};
d::Array<float,true> _n_crest_7344{};
d::Array<int16_t,true> _n_top_7345{};
d::Array<float,true> _n_bark_7346{};
d::Array<d::Array<double,false>,false> _n_lamps_7347{};
d::Array<float,true> _n_kR_7348{};
d::Array<float,true> _n_kG_7349{};
d::Array<float,true> _n_kB_7350{};
d::Array<float,true> _n_air_7351{};
d::Array<float,true> _n_band_7352{};
d::Array<float,true> _n_dith_7353{};
d::Array<float,true> _n_floor0_7354{};
d::Array<std::shared_ptr<std::tuple<double,double,d::Array<double,false>,double,double>>,false> _n_stars_7355{};
d::Array<float,true> _n_FR_7356{};
d::Array<float,true> _n_FG_7357{};
d::Array<float,true> _n_FB_7358{};
d::Array<float,true> _n_floor_7359{};
double _n_AIR0_7360{};
std::function<d::String(double,std::shared_ptr<_n_Record_7622>)> _render;
double _n_nearest_7332(double _a0,double _a1,double _a2){double _n_r_7423=_a0;
double _n_g_7424=_a1;
double _n_b_7425=_a2;
{
double _n_k_7426=([&](){auto _n_left_7862=([&](){auto _n_left_7864=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_7423*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_7865=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_7424*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_7864)|d::i32(_n_right_7865));})();auto _n_right_7863=d::minimum({31.0,double(d::i32((_n_b_7425*31.99))|d::i32(0.0))});return double(d::i32(_n_left_7862)|d::i32(_n_right_7863));})();
if(d::truth((d::at(this->_n_lut_7331,_n_k_7426)!=255.0))){d::check_cancel();return d::at(this->_n_lut_7331,_n_k_7426);
}
double _n_best_7427=0.0;
double _n_bd_7428=1000000000.0;
{double _n_i_7429=0.0;
for(;d::truth((_n_i_7429<double(this->_n_P_7328.size())));(void)((_n_i_7429++))){d::check_cancel();double _n_dr_7430=(d::at(d::at(this->_n_P_7328,_n_i_7429),0.0)-_n_r_7423);
double _n_dg_7431=(d::at(d::at(this->_n_P_7328,_n_i_7429),1.0)-_n_g_7424);
double _n_db_7432=(d::at(d::at(this->_n_P_7328,_n_i_7429),2.0)-_n_b_7425);
double _n_d_7433=((((0.3*_n_dr_7430)*_n_dr_7430)+((0.5*_n_dg_7431)*_n_dg_7431))+((0.2*_n_db_7432)*_n_db_7432));
if(d::truth((_n_d_7433<_n_bd_7428))){d::check_cancel();(void)(((_n_bd_7428=_n_d_7433),(_n_best_7427=_n_i_7429)));
}
}}
return ([&](){auto&& _n_array_7866=this->_n_lut_7331;auto _n_index_7867=_n_k_7426;auto _n_value_7868=_n_best_7427;d::put(_n_array_7866,_n_index_7867,_n_value_7868);return _n_value_7868;})();

}
}

d::Array<double,false> _n_unit_7333(d::Array<double,false> _a0){d::Array<double,false> _n_v_7434=_a0;
{
double _n_n_7435=d::hypot(_n_v_7434);
return d::map(_n_v_7434,[&]( double _a0) mutable ->double{double _n_c_7436=_a0;
return (_n_c_7436/_n_n_7435);});

}
}

std::array<double,6> _n_meteor_7361(double _a0){double _n_n_7558=_a0;
{
double _n_start_7559=(d::truth((_n_n_7558==0.0))?(-d::number(0.35)):(((7.0*(_n_n_7558-1.0))+2.5)+(_n_hash_7316(_n_n_7558,71.0)*2.5)));
double _n_x0_7560=(d::truth((_n_n_7558==0.0))?199.0:(30.0+(_n_hash_7316(_n_n_7558,72.0)*140.0)));
double _n_y0_7561=(d::truth((_n_n_7558==0.0))?4.0:(4.0+(_n_hash_7316(_n_n_7558,73.0)*18.0)));
double _n_a_7562=(d::truth((_n_n_7558==0.0))?2.65:((d::truth((_n_x0_7560>100.0))?2.6:0.55)+((_n_hash_7316(_n_n_7558,75.0)-0.5)*0.4)));
return std::array<double,6>{_n_start_7559,_n_x0_7560,_n_y0_7561,std::cos(_n_a_7562),std::sin(_n_a_7562),(52.0+(_n_hash_7316(_n_n_7558,76.0)*30.0))};

}
}

explicit Native_desert_night(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_7328=d::map(_n_meta_7300->_p_palette,_n_hex_7322);
this->_n_N_7329=(_n_W_7302*_n_H_7303);
this->_n_out_7330=d::Array<d::String,false>(size_t(this->_n_N_7329));
this->_n_lut_7331=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_L_7334=this->_n_unit_7333(d::Array<double,false>{(-d::number(0.8)),0.32,0.5});
this->_n_G_7335=this->_n_unit_7333(d::Array<double,false>{0.6,0.5,0.4});
this->_n_SKY_7336=0.0;
this->_n_SAND_7337=1.0;
this->_n_TREE_7338=2.0;
this->_n_mat_7339=d::Array<uint8_t,true>(size_t(this->_n_N_7329));
this->_n_depth_7340=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_sR_7341=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_sG_7342=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_sB_7343=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_crest_7344=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_top_7345=d::Array<int16_t,true>(size_t(_n_W_7302)).fill(_n_H_7303);
{double _n_r_7437=0.0;
for(;d::truth((_n_r_7437<_n_H_7303));(void)((_n_r_7437++))){d::check_cancel();double _n_v_7438=(((_n_HZ_7305-(_n_r_7437+0.5))/100.0)*_n_K_7304);
{double _n_x_7439=0.0;
for(;d::truth((_n_x_7439<_n_W_7302));(void)((_n_x_7439++))){d::check_cancel();double _n_u_7440=((((_n_x_7439+0.5)-100.0)/100.0)*_n_K_7304);
double _n_z_7441=_n_march_7327(_n_u_7440,_n_v_7438);
if(d::truth((!d::truth(_n_z_7441)))){d::check_cancel();continue;
}
double _n_k_7442=((_n_r_7437*_n_W_7302)+_n_x_7439);
(void)(([&](){auto&& _n_array_7636=this->_n_mat_7339;auto _n_index_7637=_n_k_7442;auto _n_value_7638=this->_n_SAND_7337;d::put(_n_array_7636,_n_index_7637,_n_value_7638);return _n_value_7638;})());
(void)(([&](){auto&& _n_array_7639=this->_n_depth_7340;auto _n_index_7640=_n_k_7442;auto _n_value_7641=_n_z_7441;d::put(_n_array_7639,_n_index_7640,_n_value_7641);return _n_value_7641;})());
if(d::truth((_n_r_7437<d::at(this->_n_top_7345,_n_x_7439)))){d::check_cancel();(void)(([&](){auto&& _n_array_7642=this->_n_top_7345;auto _n_index_7643=_n_x_7439;auto _n_value_7644=_n_r_7437;d::put(_n_array_7642,_n_index_7643,_n_value_7644);return _n_value_7644;})());
}
double _n_px_7443=(_n_u_7440*_n_z_7441);
double _n_py_7444=(_n_CAM_7306+(_n_v_7438*_n_z_7441));
double _n_e_7445=0.2;
double _n_hx_7446=(([&](){auto _n_left_7645=_n_dunes_7326((_n_px_7443+_n_e_7445),_n_z_7441);auto _n_right_7646=_n_dunes_7326((_n_px_7443-_n_e_7445),_n_z_7441);return (_n_left_7645-_n_right_7646);})()/(2.0*_n_e_7445));
double _n_hz_7447=(([&](){auto _n_left_7647=_n_dunes_7326(_n_px_7443,(_n_z_7441+_n_e_7445));auto _n_right_7648=_n_dunes_7326(_n_px_7443,(_n_z_7441-_n_e_7445));return (_n_left_7647-_n_right_7648);})()/(2.0*_n_e_7445));
double _n_nl_7448=d::hypot(std::initializer_list<double>{_n_hx_7446,1.0,_n_hz_7447});
double _n_nx_7449=((-d::number(_n_hx_7446))/_n_nl_7448);
double _n_ny_7450=(1.0/_n_nl_7448);
double _n_nz_7451=((-d::number(_n_hz_7447))/_n_nl_7448);
double _n_lit_7452=d::maximum({0.0,(((_n_nx_7449*d::at(this->_n_L_7334,0.0))+(_n_ny_7450*d::at(this->_n_L_7334,1.0)))+(_n_nz_7451*d::at(this->_n_L_7334,2.0)))});
if(d::truth((_n_lit_7452>0.0))){d::check_cancel();double _n_sh_7453=1.0;
{double _n_s_7454=0.6;
for(;d::truth((_n_s_7454<90.0));(void)((_n_s_7454=(_n_s_7454+(0.5+(_n_s_7454*0.05)))))){d::check_cancel();double _n_qx_7455=(_n_px_7443+(d::at(this->_n_L_7334,0.0)*_n_s_7454));
double _n_qy_7456=((_n_py_7444+(d::at(this->_n_L_7334,1.0)*_n_s_7454))+0.05);
double _n_qz_7457=(_n_z_7441+(d::at(this->_n_L_7334,2.0)*_n_s_7454));
if(d::truth((_n_qy_7456>_n_HMAX_7307))){d::check_cancel();break;
}
(void)((_n_sh_7453=([&](){auto _n_argument_7649=_n_sh_7453;auto _n_argument_7650=((_n_qy_7456-_n_dunes_7326(_n_qx_7455,_n_qz_7457))/(0.08*_n_s_7454));return d::minimum({_n_argument_7649,_n_argument_7650});})()));
if(d::truth((_n_sh_7453<=0.0))){d::check_cancel();break;
}
}}
(void)((_n_lit_7452=(_n_lit_7452*_n_clamp_7319(_n_sh_7453))));
}
(void)((_n_lit_7452=([&](){auto _n_argument_7651=1.0;auto _n_argument_7652=(std::pow(_n_lit_7452,1.4)*1.45);return d::minimum({_n_argument_7651,_n_argument_7652});})()));
double _n_ph_7458=_n_phase_7323(_n_px_7443,_n_z_7441);
bool _n_onRidge_7459=([&](){auto _n_left_7653=_n_ridge_7325(_n_px_7443,_n_z_7441);auto _n_right_7654=(_n_dunes_7326(_n_px_7443,_n_z_7441)-0.35);return (_n_left_7653>=_n_right_7654);})();
double _n_dxc_7460=(_n_px_7443-_n_crestX_7324(_n_z_7441));
double _n_fall_7461=(d::truth(_n_onRidge_7459)?(0.5+(0.5*std::exp(((-d::number(std::fabs(_n_dxc_7460)))/7.0)))):(0.55+(0.45*_n_smooth_7320(0.2,0.72,_n_ph_7458))));
double _n_near_7462=(0.72+(0.28*_n_smooth_7320(5.0,25.0,_n_z_7441)));
double _n_reach_7463=([&](){auto _n_left_7655=(((0.55+(0.45*std::exp(((-d::number(std::fabs((_n_x_7439-d::at(_n_TOWN_7308,0.0)))))/90.0))))*_n_fall_7461)*_n_near_7462);auto _n_right_7656=_n_smooth_7320(300.0,120.0,_n_z_7441);return (_n_left_7655*_n_right_7656);})();
double _n_fill_7464=(0.045*d::maximum({0.0,(((_n_nx_7449*d::at(this->_n_G_7335,0.0))+(_n_ny_7450*d::at(this->_n_G_7335,1.0)))+(_n_nz_7451*d::at(this->_n_G_7335,2.0)))}));
double _n_ripple_7465=((_n_fbm_7318(((_n_px_7443*0.6)+(_n_z_7441*0.2)),(_n_z_7441*0.6),2.0)-0.5)*0.05);
double _n_amb_7466=(((0.02+(0.03*_n_ny_7450))+_n_ripple_7465)*_n_near_7462);
double _n_cr_7467=(((_n_amb_7466*0.7)+(_n_fill_7464*0.45))+((_n_lit_7452*1.0)*_n_reach_7463));
double _n_cg_7468=(((_n_amb_7466*0.62)+(_n_fill_7464*0.65))+((_n_lit_7452*0.63)*_n_reach_7463));
double _n_cb_7469=(((_n_amb_7466*1.35)+(_n_fill_7464*1.2))+((_n_lit_7452*0.53)*_n_reach_7463));
if(((d::truth(_n_onRidge_7459)&&d::truth((_n_z_7441<76.0)))&&d::truth((_n_dxc_7460>0.0)))){d::check_cancel();double _n_cellW_7470=((_n_z_7441*_n_K_7304)*0.01);
double _n_rim_7471=([&](){auto _n_left_7657=_n_smooth_7320((2.2*_n_cellW_7470),(0.6*_n_cellW_7470),_n_dxc_7460);auto _n_right_7658=_n_smooth_7320(10.0,20.0,_n_z_7441);return (_n_left_7657*_n_right_7658);})();
(void)((_n_cr_7467=(_n_cr_7467+(0.1*_n_rim_7471))));
(void)((_n_cg_7468=(_n_cg_7468+(0.14*_n_rim_7471))));
(void)((_n_cb_7469=(_n_cb_7469+(0.24*_n_rim_7471))));
}
double _n_haze_7472=([&](){auto _n_left_7659=_n_clamp_7319((1.0-std::exp(((-d::number(_n_z_7441))/260.0))));auto _n_right_7660=([&](){auto _n_argument_7661=0.7;auto _n_argument_7662=0.92;auto _n_argument_7663=_n_smooth_7320(120.0,300.0,_n_z_7441);return _n_mix_7321(_n_argument_7661,_n_argument_7662,_n_argument_7663);})();return (_n_left_7659*_n_right_7660);})();
double _n_hg_7473=(std::exp(((-d::number(std::fabs((_n_x_7439-d::at(_n_TOWN_7308,0.0)))))/40.0))*0.18);
(void)((_n_cr_7467=_n_mix_7321(_n_cr_7467,(0.07+_n_hg_7473),_n_haze_7472)));
(void)((_n_cg_7468=_n_mix_7321(_n_cg_7468,(0.085+(_n_hg_7473*0.6)),_n_haze_7472)));
(void)((_n_cb_7469=_n_mix_7321(_n_cb_7469,(0.15+(_n_hg_7473*0.3)),_n_haze_7472)));
(void)(([&](){auto&& _n_array_7664=this->_n_sR_7341;auto _n_index_7665=_n_k_7442;auto _n_value_7666=_n_cr_7467;d::put(_n_array_7664,_n_index_7665,_n_value_7666);return _n_value_7666;})());
(void)(([&](){auto&& _n_array_7667=this->_n_sG_7342;auto _n_index_7668=_n_k_7442;auto _n_value_7669=_n_cg_7468;d::put(_n_array_7667,_n_index_7668,_n_value_7669);return _n_value_7669;})());
(void)(([&](){auto&& _n_array_7670=this->_n_sB_7343;auto _n_index_7671=_n_k_7442;auto _n_value_7672=_n_cb_7469;d::put(_n_array_7670,_n_index_7671,_n_value_7672);return _n_value_7672;})());
double _n_big_7474=((d::truth((_n_ridge_7325(_n_px_7443,_n_z_7441)>0.5))&&d::truth((_n_z_7441<76.0)))?([&](){auto _n_argument_7673=0.9;auto _n_argument_7674=0.0;auto _n_argument_7675=std::fabs(_n_dxc_7460);return _n_smooth_7320(_n_argument_7673,_n_argument_7674,_n_argument_7675);})():0.0);
(void)(([&](){auto&& _n_array_7676=this->_n_crest_7344;auto _n_index_7677=_n_k_7442;auto _n_value_7678=([&](){auto _n_left_7679=([&](){auto _n_argument_7681=([&](){auto _n_left_7682=([&](){auto _n_argument_7684=0.07;auto _n_argument_7685=0.0;auto _n_argument_7686=std::fabs((_n_ph_7458-0.72));return _n_smooth_7320(_n_argument_7684,_n_argument_7685,_n_argument_7686);})();auto _n_right_7683=_n_smooth_7320(260.0,30.0,_n_z_7441);return (_n_left_7682*_n_right_7683);})();auto _n_argument_7687=_n_big_7474;return d::maximum({_n_argument_7681,_n_argument_7687});})();auto _n_right_7680=(0.3+(0.7*_n_smooth_7320(0.0,0.2,_n_lit_7452)));return (_n_left_7679*_n_right_7680);})();d::put(_n_array_7676,_n_index_7677,_n_value_7678);return _n_value_7678;})());
}}
}}
this->_n_bark_7346=d::Array<float,true>(size_t(this->_n_N_7329));
{
double _n_base_7475=d::at(this->_n_top_7345,_n_ACACIA_7312);
double _n_canopyTop_7476=(_n_base_7475-16.0);
double _n_SPAN_7477=17.0;
auto _n_canopy_7478=[&]( double _a0,double _a1,double _a2) mutable ->bool{double _n_x_7479=_a0;
double _n_px_7480=_a1;
double _n_py_7481=_a2;
{
double _n_q_7482=((_n_px_7480-_n_ACACIA_7312)/_n_SPAN_7477);
if(d::truth((std::fabs(_n_q_7482)>1.08))){d::check_cancel();return false;
}
double _n_topY_7483=(((_n_canopyTop_7476+0.4)+((2.6*_n_q_7482)*_n_q_7482))+(1.3*(_n_noise_7317((_n_px_7480*0.3),7.1)-0.5)));
double _n_botY_7484=([&](){auto _n_left_7688=([&](){auto _n_left_7690=(((_n_canopyTop_7476+3.8)+(1.4*(1.0-(_n_q_7482*_n_q_7482))))-(1.4*([&](){auto _n_argument_7692=0.8;auto _n_argument_7693=1.08;auto _n_argument_7694=std::fabs(_n_q_7482);return _n_smooth_7320(_n_argument_7692,_n_argument_7693,_n_argument_7694);})()));auto _n_right_7691=(1.2*(_n_noise_7317((_n_px_7480*0.45),3.3)-0.5));return (_n_left_7690+_n_right_7691);})();auto _n_right_7689=(d::truth((_n_hash_7316(_n_x_7479,51.0)<0.2))?0.9:0.0);return (_n_left_7688+_n_right_7689);})();
return ([&]()->bool{auto _n_logical_7695=(_n_py_7481>_n_topY_7483);return d::truth(_n_logical_7695)?(_n_py_7481<_n_botY_7484):_n_logical_7695;})();

}
};
d::Array<double,false> _n_fork_7485=d::Array<double,false>{(_n_ACACIA_7312+0.3),(_n_base_7475-5.0)};
d::Array<std::shared_ptr<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>,false> _n_limbs_7486=d::Array<std::shared_ptr<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>,false>{std::make_shared<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>(d::Array<double,false>{_n_ACACIA_7312,(_n_base_7475+1.0)},_n_fork_7485,1.3),std::make_shared<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>(_n_fork_7485,d::Array<double,false>{(_n_ACACIA_7312-9.0),(_n_canopyTop_7476+3.0)},0.8),std::make_shared<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>(_n_fork_7485,d::Array<double,false>{(_n_ACACIA_7312+1.5),(_n_canopyTop_7476+2.0)},0.75),std::make_shared<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>(_n_fork_7485,d::Array<double,false>{(_n_ACACIA_7312+10.0),(_n_canopyTop_7476+3.2)},0.8),std::make_shared<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>(_n_fork_7485,d::Array<double,false>{(_n_ACACIA_7312-4.0),(_n_canopyTop_7476+2.6)},0.55),std::make_shared<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>(d::Array<double,false>{(_n_ACACIA_7312-4.0),(_n_base_7475-9.0)},d::Array<double,false>{(_n_ACACIA_7312-14.0),(_n_canopyTop_7476+3.5)},0.55),std::make_shared<std::tuple<d::Array<double,false>,d::Array<double,false>,double>>(d::Array<double,false>{(_n_ACACIA_7312+3.0),(_n_base_7475-8.0)},d::Array<double,false>{(_n_ACACIA_7312+15.0),(_n_canopyTop_7476+3.6)},0.5)};
{double _n_r_7487=d::maximum({0.0,(_n_canopyTop_7476-3.0)});
for(;d::truth((_n_r_7487<=(_n_base_7475+1.0)));(void)((_n_r_7487++))){d::check_cancel();{double _n_x_7488=(_n_ACACIA_7312-26.0);
for(;d::truth((_n_x_7488<=(_n_ACACIA_7312+26.0)));(void)((_n_x_7488++))){d::check_cancel();if((d::truth((_n_x_7488<0.0))||d::truth((_n_x_7488>=_n_W_7302)))){d::check_cancel();continue;
}
double _n_px_7489=(_n_x_7488+0.5);
double _n_py_7490=(_n_r_7487+0.5);
bool _n_on_7491=_n_canopy_7478(_n_x_7488,_n_px_7489,_n_py_7490);
for(auto &&_n_item_7696:_n_limbs_7486){d::check_cancel();auto _n_binding_7697=_n_item_7696;
auto _n_binding_7698=std::get<0>(*_n_binding_7697);
double _n_ax_7492=d::at(_n_binding_7698,0.0);
double _n_ay_7493=d::at(_n_binding_7698,1.0);
auto _n_binding_7699=std::get<1>(*_n_binding_7697);
double _n_bx_7494=d::at(_n_binding_7699,0.0);
double _n_by_7495=d::at(_n_binding_7699,1.0);
double _n_w_7496=std::get<2>(*_n_binding_7697);
{
double _n_lx_7497=(_n_bx_7494-_n_ax_7492);
double _n_ly_7498=(_n_by_7495-_n_ay_7493);
double _n_t_7499=_n_clamp_7319(((((_n_px_7489-_n_ax_7492)*_n_lx_7497)+((_n_py_7490-_n_ay_7493)*_n_ly_7498))/((_n_lx_7497*_n_lx_7497)+(_n_ly_7498*_n_ly_7498))));
double _n_dx_7500=(_n_px_7489-(_n_ax_7492+(_n_lx_7497*_n_t_7499)));
double _n_dy_7501=(_n_py_7490-(_n_ay_7493+(_n_ly_7498*_n_t_7499)));
if(d::truth((((_n_dx_7500*_n_dx_7500)+(_n_dy_7501*_n_dy_7501))<std::pow((_n_w_7496*(1.0-(0.4*_n_t_7499))),2.0)))){d::check_cancel();(void)((_n_on_7491=true));
}

}
}
if(d::truth(_n_on_7491)){d::check_cancel();(void)(([&](){auto&& _n_array_7700=this->_n_mat_7339;auto _n_index_7701=((_n_r_7487*_n_W_7302)+_n_x_7488);auto _n_value_7702=this->_n_TREE_7338;d::put(_n_array_7700,_n_index_7701,_n_value_7702);return _n_value_7702;})());
}
}}
}}
{double _n_r_7502=1.0;
for(;d::truth((_n_r_7502<_n_H_7303));(void)((_n_r_7502++))){d::check_cancel();{double _n_x_7503=0.0;
for(;d::truth((_n_x_7503<_n_W_7302));(void)((_n_x_7503++))){d::check_cancel();double _n_k_7504=((_n_r_7502*_n_W_7302)+_n_x_7503);
if((d::truth((d::at(this->_n_mat_7339,_n_k_7504)!=this->_n_TREE_7338))||d::truth((d::at(this->_n_mat_7339,(_n_k_7504-_n_W_7302))!=this->_n_SKY_7336)))){d::check_cancel();continue;
}
double _n_dx_7505=((_n_x_7503+0.5)-d::at(_n_CORE_7309,0.0));
double _n_dy_7506=((_n_r_7502-d::at(_n_CORE_7309,1.0))*1.3);
(void)(([&](){auto&& _n_array_7703=this->_n_bark_7346;auto _n_index_7704=_n_k_7504;auto _n_value_7705=(0.25+(0.75*std::exp(((-d::number(std::sqrt(((_n_dx_7505*_n_dx_7505)+(_n_dy_7506*_n_dy_7506)))))/18.0))));d::put(_n_array_7703,_n_index_7704,_n_value_7705);return _n_value_7705;})());
}}
}}

}
this->_n_lamps_7347=d::Array<d::Array<double,false>,false>{};
{double _n_x_7507=(d::at(_n_TOWN_7308,0.0)-9.0);
for(;(d::truth((_n_x_7507<=(d::at(_n_TOWN_7308,0.0)+9.0)))&&d::truth((double(this->_n_lamps_7347.size())<5.0)));(void)((_n_x_7507++))){d::check_cancel();double _n_r_7508=d::at(this->_n_top_7345,_n_x_7507);
if(((d::truth((_n_r_7508>=_n_H_7303))||d::truth((d::at(this->_n_depth_7340,((_n_r_7508*_n_W_7302)+_n_x_7507))<140.0)))||d::truth((_n_hash_7316(_n_x_7507,91.0)>0.45)))){d::check_cancel();continue;
}
if(d::truth(d::some(this->_n_lamps_7347,[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_7706=_a0;
double _n_k_7509=d::at(_n_binding_7706,0.0);
return (std::fabs((d::mod(_n_k_7509,_n_W_7302)-_n_x_7507))<2.0);}))){d::check_cancel();continue;
}
(void)(this->_n_lamps_7347.push(d::Array<double,false>{((_n_r_7508*_n_W_7302)+_n_x_7507),(_n_hash_7316(_n_x_7507,92.0)*6.28),(0.7+(_n_hash_7316(_n_x_7507,93.0)*1.4))}));
}}
this->_n_kR_7348=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_kG_7349=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_kB_7350=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_air_7351=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_band_7352=d::Array<float,true>(size_t(this->_n_N_7329));
{double _n_r_7510=0.0;
for(;d::truth((_n_r_7510<_n_H_7303));(void)((_n_r_7510++))){d::check_cancel();{double _n_x_7511=0.0;
for(;d::truth((_n_x_7511<_n_W_7302));(void)((_n_x_7511++))){d::check_cancel();double _n_k_7512=((_n_r_7510*_n_W_7302)+_n_x_7511);
double _n_y_7513=(_n_r_7510+0.5);
double _n_v_7514=_n_clamp_7319((_n_y_7513/_n_HZ_7305));
double _n_cr_7515=(0.02+((0.03*_n_v_7514)*_n_v_7514));
double _n_cg_7516=(0.035+((0.045*_n_v_7514)*_n_v_7514));
double _n_cb_7517=(0.1+((0.08*_n_v_7514)*_n_v_7514));
double _n_tx_7518=((_n_x_7511+0.5)-d::at(_n_TOWN_7308,0.0));
double _n_ty_7519=((_n_y_7513-d::at(_n_TOWN_7308,1.0))*1.9);
double _n_td_7520=std::sqrt(((_n_tx_7518*_n_tx_7518)+(_n_ty_7519*_n_ty_7519)));
double _n_glow_7521=([&](){auto _n_left_7707=(std::exp(((-d::number(_n_td_7520))/16.0))*0.4);auto _n_right_7708=(std::exp(((-d::number(_n_td_7520))/60.0))*0.22);return (_n_left_7707+_n_right_7708);})();
double _n_cool_7522=(1.0-(0.85*_n_clamp_7319((std::exp(((-d::number(_n_td_7520))/22.0))*1.5))));
(void)((_n_cr_7515=((_n_cr_7515*_n_cool_7522)+_n_glow_7521)));
(void)((_n_cg_7516=((_n_cg_7516*_n_cool_7522)+(_n_glow_7521*0.5))));
(void)((_n_cb_7517=((_n_cb_7517*_n_cool_7522)+(_n_glow_7521*0.16))));
double _n_along_7523=(0.72+(0.5*_n_fbm_7318(((_n_x_7511*0.025)+3.0),(_n_y_7513*0.04),2.0)));
(void)(([&](){auto&& _n_array_7709=this->_n_air_7351;auto _n_index_7710=_n_k_7512;auto _n_value_7711=(((([&](){auto _n_left_7712=([&](){auto _n_argument_7714=_n_smooth_7320(0.3,0.94,_n_v_7514);auto _n_argument_7715=3.0;return std::pow(_n_argument_7714,_n_argument_7715);})();auto _n_right_7713=(1.0-(0.3*_n_smooth_7320(0.92,1.02,_n_v_7514)));return (_n_left_7712*_n_right_7713);})()*0.32)*_n_cool_7522)*_n_along_7523);d::put(_n_array_7709,_n_index_7710,_n_value_7711);return _n_value_7711;})());
double _n_ax_7524=((_n_x_7511+0.5)-d::at(_n_ARC_7310,0.0));
double _n_ay_7525=(_n_y_7513-d::at(_n_ARC_7310,1.0));
double _n_d_7526=(std::sqrt(((_n_ax_7524*_n_ax_7524)+(_n_ay_7525*_n_ay_7525)))-d::at(_n_ARC_7310,2.0));
double _n_sRaw_7527=((d::at(_n_ARC_S_7311,0.0)-std::atan2(_n_ay_7525,_n_ax_7524))/d::at(_n_ARC_S_7311,1.0));
double _n_s_7528=_n_clamp_7319(_n_sRaw_7527);
double _n_end_7529=(d::truth((_n_sRaw_7527<0.0))?std::exp((-d::number(std::pow((_n_sRaw_7527/0.05),2.0)))):1.0);
double _n_laneEnd_7530=(d::truth((_n_sRaw_7527<0.0))?std::exp((-d::number(std::pow((_n_sRaw_7527/0.11),2.0)))):1.0);
double _n_w_7531=(9.0+(8.0*std::pow((1.0-_n_s_7528),1.4)));
double _n_lane0_7532=([&](){auto _n_left_7716=(((_n_noise_7317((_n_s_7528*9.0),3.3)-0.5)*_n_w_7531)*0.5);auto _n_right_7717=_n_smooth_7320(0.0,0.25,_n_s_7528);return (_n_left_7716*_n_right_7717);})();
double _n_b_7533=std::exp((-d::number(std::pow((_n_d_7526/_n_w_7531),2.0))));
double _n_clump_7534=_n_fbm_7318((_n_x_7511*0.09),(_n_y_7513*0.09),4.0);
(void)((_n_b_7533=(_n_b_7533*(0.35+(1.1*_n_smooth_7320(0.3,0.75,_n_clump_7534))))));
(void)((_n_b_7533=(_n_b_7533*((0.55+(0.55*(1.0-_n_s_7528)))*_n_end_7529))));
double _n_cx_7535=((_n_x_7511+0.5)-d::at(_n_CORE_7309,0.0));
double _n_cy_7536=((_n_y_7513-d::at(_n_CORE_7309,1.0))*1.3);
double _n_cd_7537=std::sqrt(((_n_cx_7535*_n_cx_7535)+(_n_cy_7536*_n_cy_7536)));
double _n_core_7538=([&](){auto _n_left_7718=(std::exp(((-d::number(_n_cd_7537))/6.0))*0.5);auto _n_right_7719=(std::exp(((-d::number(_n_cd_7537))/22.0))*0.25);return (_n_left_7718+_n_right_7719);})();
(void)((_n_b_7533=(_n_b_7533+_n_core_7538)));
double _n_nearCore_7539=std::exp(((-d::number(_n_cd_7537))/16.0));
double _n_lane_7540=(([&](){auto _n_left_7720=std::exp((-d::number(std::pow(((_n_d_7526-_n_lane0_7532)/(_n_w_7531*0.12)),2.0))));auto _n_right_7721=([&](){auto _n_argument_7722=((0.55+(0.6*_n_fbm_7318((_n_x_7511*0.12),(_n_y_7513*0.12),3.0)))*(0.55+(0.45*(1.0-_n_s_7528))));auto _n_argument_7723=1.0;auto _n_argument_7724=_n_nearCore_7539;return _n_mix_7321(_n_argument_7722,_n_argument_7723,_n_argument_7724);})();return (_n_left_7720*_n_right_7721);})()*_n_laneEnd_7530);
double _n_fil_7541=(([&](){auto _n_argument_7725=0.58;auto _n_argument_7726=0.78;auto _n_argument_7727=_n_fbm_7318(((_n_x_7511*0.16)+9.0),(_n_y_7513*0.16),3.0);return _n_smooth_7320(_n_argument_7725,_n_argument_7726,_n_argument_7727);})()*0.6);
(void)((_n_b_7533=(_n_b_7533*([&](){auto _n_left_7728=_n_clamp_7319((1.0-(_n_mix_7321(0.92,0.97,_n_nearCore_7539)*_n_lane_7540)));auto _n_right_7729=(1.0-(_n_fil_7541*std::exp((-d::number(std::pow((_n_d_7526/(_n_w_7531*1.3)),2.0))))));return (_n_left_7728*_n_right_7729);})())));
(void)(([&](){auto&& _n_array_7730=this->_n_band_7352;auto _n_index_7731=_n_k_7512;auto _n_value_7732=((std::exp((-d::number(std::pow((_n_d_7526/(_n_w_7531*1.2)),2.0))))*_n_end_7529)+_n_core_7538);d::put(_n_array_7730,_n_index_7731,_n_value_7732);return _n_value_7732;})());
double _n_warm_7542=_n_clamp_7319(((std::exp(((-d::number(_n_cd_7537))/26.0))*1.2)+((1.0-_n_s_7528)*0.25)));
(void)((_n_cr_7515=(_n_cr_7515+((_n_b_7533*_n_mix_7321(0.62,1.0,_n_warm_7542))*0.75))));
(void)((_n_cg_7516=(_n_cg_7516+((_n_b_7533*_n_mix_7321(0.68,0.9,_n_warm_7542))*0.75))));
(void)((_n_cb_7517=(_n_cb_7517+((_n_b_7533*_n_mix_7321(0.95,0.74,_n_warm_7542))*0.75))));
(void)(([&](){auto&& _n_array_7733=this->_n_kR_7348;auto _n_index_7734=_n_k_7512;auto _n_value_7735=_n_cr_7515;d::put(_n_array_7733,_n_index_7734,_n_value_7735);return _n_value_7735;})());
(void)(([&](){auto&& _n_array_7736=this->_n_kG_7349;auto _n_index_7737=_n_k_7512;auto _n_value_7738=_n_cg_7516;d::put(_n_array_7736,_n_index_7737,_n_value_7738);return _n_value_7738;})());
(void)(([&](){auto&& _n_array_7739=this->_n_kB_7350;auto _n_index_7740=_n_k_7512;auto _n_value_7741=_n_cb_7517;d::put(_n_array_7739,_n_index_7740,_n_value_7741);return _n_value_7741;})());
}}
}}
this->_n_dith_7353=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_floor0_7354=d::Array<float,true>(size_t(this->_n_N_7329));
{double _n_r_7543=0.0;
for(;d::truth((_n_r_7543<_n_H_7303));(void)((_n_r_7543++))){d::check_cancel();{double _n_x_7544=0.0;
for(;d::truth((_n_x_7544<_n_W_7302));(void)((_n_x_7544++))){d::check_cancel();double _n_k_7545=((_n_r_7543*_n_W_7302)+_n_x_7544);
double _n_bay_7546=d::at(_n_BAYER_7315,((double(d::i32(_n_r_7543)&d::i32(3.0))*4.0)+double(d::i32(_n_x_7544)&d::i32(3.0))));
if(d::truth((d::at(this->_n_mat_7339,_n_k_7545)==this->_n_SKY_7336))){d::check_cancel();double _n_inb_7547=_n_clamp_7319(d::at(this->_n_band_7352,_n_k_7545));
double _n_soft_7548=([&](){auto _n_argument_7742=_n_inb_7547;auto _n_argument_7743=_n_clamp_7319((d::at(this->_n_air_7351,_n_k_7545)/0.2));return d::maximum({_n_argument_7742,_n_argument_7743});})();
double _n_rnd_7549=([&](){auto _n_left_7744=(_n_hash_7316(((_n_x_7544*3.0)+1.0),((_n_r_7543*5.0)+2.0))-0.5);auto _n_right_7745=_n_mix_7321(0.6,0.94,_n_soft_7548);return (_n_left_7744*_n_right_7745);})();
(void)(([&](){auto&& _n_array_7746=this->_n_dith_7353;auto _n_index_7747=_n_k_7545;auto _n_value_7748=_n_mix_7321(_n_rnd_7549,_n_bay_7546,(0.5*_n_soft_7548));d::put(_n_array_7746,_n_index_7747,_n_value_7748);return _n_value_7748;})());
(void)(([&](){auto&& _n_array_7749=this->_n_floor0_7354;auto _n_index_7750=_n_k_7545;auto _n_value_7751=(0.1*_n_inb_7547);d::put(_n_array_7749,_n_index_7750,_n_value_7751);return _n_value_7751;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_7752=this->_n_dith_7353;auto _n_index_7753=_n_k_7545;auto _n_value_7754=_n_bay_7546;d::put(_n_array_7752,_n_index_7753,_n_value_7754);return _n_value_7754;})());
(void)(([&](){auto&& _n_array_7755=this->_n_floor0_7354;auto _n_index_7756=_n_k_7545;auto _n_value_7757=(d::truth((d::at(this->_n_mat_7339,_n_k_7545)==this->_n_SAND_7337))?0.02:0.0);d::put(_n_array_7755,_n_index_7756,_n_value_7757);return _n_value_7757;})());
}
}}
}}
this->_n_stars_7355=d::Array<std::shared_ptr<std::tuple<double,double,d::Array<double,false>,double,double>>,false>{};
{double _n_r_7550=0.0;
for(;d::truth((_n_r_7550<(_n_HZ_7305+2.0)));(void)((_n_r_7550++))){d::check_cancel();{double _n_x_7551=0.0;
for(;d::truth((_n_x_7551<_n_W_7302));(void)((_n_x_7551++))){d::check_cancel();double _n_k_7552=((_n_r_7550*_n_W_7302)+_n_x_7551);
if(d::truth((d::at(this->_n_mat_7339,_n_k_7552)!=this->_n_SKY_7336))){d::check_cancel();continue;
}
double _n_p_7553=(0.015+(0.12*_n_clamp_7319(d::at(this->_n_band_7352,_n_k_7552))));
if(d::truth((_n_hash_7316(((_n_x_7551*7.0)+3.0),((_n_r_7550*13.0)+1.0))>_n_p_7553))){d::check_cancel();continue;
}
double _n_m_7554=([&](){auto _n_argument_7758=_n_hash_7316(((_n_x_7551*5.0)+1.0),((_n_r_7550*3.0)+7.0));auto _n_argument_7759=12.0;return std::pow(_n_argument_7758,_n_argument_7759);})();
double _n_bright_7555=((0.2+(0.95*_n_m_7554))*_n_smooth_7320((_n_HZ_7305+1.0),(_n_HZ_7305-6.0),(_n_r_7550+0.5)));
double _n_c_7556=_n_hash_7316((_n_x_7551*11.0),((_n_r_7550*17.0)+5.0));
d::Array<double,false> _n_tint_7557=(d::truth((_n_c_7556<0.2))?d::Array<double,false>{0.78,0.86,1.0}:(d::truth((_n_c_7556<0.9))?d::Array<double,false>{1.0,1.0,1.0}:d::Array<double,false>{1.0,0.82,0.6}));
(void)(this->_n_stars_7355.push(std::make_shared<std::tuple<double,double,d::Array<double,false>,double,double>>(_n_k_7552,_n_bright_7555,_n_tint_7557,(1.5+(_n_hash_7316(_n_x_7551,(_n_r_7550*9.0))*4.0)),(_n_hash_7316(_n_r_7550,(_n_x_7551*3.0))*6.28))));
}}
}}
this->_n_FR_7356=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_FG_7357=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_FB_7358=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_floor_7359=d::Array<float,true>(size_t(this->_n_N_7329));
this->_n_AIR0_7360=std::floor((_n_HZ_7305*0.3));
_render=[=]( double _a0,std::shared_ptr<_n_Record_7622> _a1) mutable ->d::String{double _n_t_7563=_a0;
auto _n_binding_7762=(d::present(_a1)?_a1:([&](){auto _n_object_7761=std::make_shared<_n_Record_7622>();return _n_object_7761;})());
std::optional<d::Array<uint8_t,true>> _n_color_7564=_n_binding_7762->_p_color;
{
(void)(this->_n_FR_7356.set(this->_n_kR_7348));
(void)(this->_n_FG_7357.set(this->_n_kG_7349));
(void)(this->_n_FB_7358.set(this->_n_kB_7350));
(void)(this->_n_floor_7359.set(this->_n_floor0_7354));
{double _n_r_7565=this->_n_AIR0_7360;
for(;d::truth((_n_r_7565<(_n_HZ_7305+2.0)));(void)((_n_r_7565++))){d::check_cancel();{double _n_x_7566=0.0;
for(;d::truth((_n_x_7566<_n_W_7302));(void)((_n_x_7566++))){d::check_cancel();double _n_k_7567=((_n_r_7565*_n_W_7302)+_n_x_7566);
if(d::truth((d::at(this->_n_mat_7339,_n_k_7567)!=this->_n_SKY_7336))){d::check_cancel();continue;
}
double _n_a_7568=(d::at(this->_n_air_7351,_n_k_7567)*(0.86+(0.28*_n_noise_7317(((_n_x_7566-(_n_t_7563*0.3))*0.03),(_n_r_7565*0.08)))));
(void)(([&](){auto&& _n_array_7763=this->_n_FR_7356;auto _n_index_7764=_n_k_7567;auto _n_value_7765=(d::at(_n_array_7763,_n_index_7764)+(_n_a_7568*0.3));d::put(_n_array_7763,_n_index_7764,_n_value_7765);return _n_value_7765;})());
(void)(([&](){auto&& _n_array_7766=this->_n_FG_7357;auto _n_index_7767=_n_k_7567;auto _n_value_7768=(d::at(_n_array_7766,_n_index_7767)+(_n_a_7568*0.5));d::put(_n_array_7766,_n_index_7767,_n_value_7768);return _n_value_7768;})());
(void)(([&](){auto&& _n_array_7769=this->_n_FB_7358;auto _n_index_7770=_n_k_7567;auto _n_value_7771=(d::at(_n_array_7769,_n_index_7770)+(_n_a_7568*1.2));d::put(_n_array_7769,_n_index_7770,_n_value_7771);return _n_value_7771;})());
}}
}}
{double _n_k_7569=0.0;
for(;d::truth((_n_k_7569<this->_n_N_7329));(void)((_n_k_7569++))){d::check_cancel();double _n_m_7570=d::at(this->_n_mat_7339,_n_k_7569);
if(d::truth((_n_m_7570==this->_n_SAND_7337))){d::check_cancel();(void)(([&](){auto&& _n_array_7772=this->_n_FR_7356;auto _n_index_7773=_n_k_7569;auto _n_value_7774=d::at(this->_n_sR_7341,_n_k_7569);d::put(_n_array_7772,_n_index_7773,_n_value_7774);return _n_value_7774;})());
(void)(([&](){auto&& _n_array_7775=this->_n_FG_7357;auto _n_index_7776=_n_k_7569;auto _n_value_7777=d::at(this->_n_sG_7342,_n_k_7569);d::put(_n_array_7775,_n_index_7776,_n_value_7777);return _n_value_7777;})());
(void)(([&](){auto&& _n_array_7778=this->_n_FB_7358;auto _n_index_7779=_n_k_7569;auto _n_value_7780=d::at(this->_n_sB_7343,_n_k_7569);d::put(_n_array_7778,_n_index_7779,_n_value_7780);return _n_value_7780;})());
double _n_c_7571=d::at(this->_n_crest_7344,_n_k_7569);
if(d::truth((_n_c_7571>0.0))){d::check_cancel();double _n_h_7572=_n_hash_7316(_n_k_7569,5.0);
double _n_g_7573=((_n_c_7571*([&](){auto _n_argument_7781=([&](){auto _n_argument_7782=0.0;auto _n_argument_7783=std::sin(((_n_t_7563*(0.8+(2.2*_n_h_7572)))+(_n_h_7572*40.0)));return d::maximum({_n_argument_7782,_n_argument_7783});})();auto _n_argument_7784=8.0;return std::pow(_n_argument_7781,_n_argument_7784);})())*0.5);
(void)(([&](){auto&& _n_array_7785=this->_n_FR_7356;auto _n_index_7786=_n_k_7569;auto _n_value_7787=(d::at(_n_array_7785,_n_index_7786)+_n_g_7573);d::put(_n_array_7785,_n_index_7786,_n_value_7787);return _n_value_7787;})());
(void)(([&](){auto&& _n_array_7788=this->_n_FG_7357;auto _n_index_7789=_n_k_7569;auto _n_value_7790=(d::at(_n_array_7788,_n_index_7789)+(_n_g_7573*0.85));d::put(_n_array_7788,_n_index_7789,_n_value_7790);return _n_value_7790;})());
(void)(([&](){auto&& _n_array_7791=this->_n_FB_7358;auto _n_index_7792=_n_k_7569;auto _n_value_7793=(d::at(_n_array_7791,_n_index_7792)+(_n_g_7573*0.7));d::put(_n_array_7791,_n_index_7792,_n_value_7793);return _n_value_7793;})());
}
}else {d::check_cancel();if(d::truth((_n_m_7570==this->_n_TREE_7338))){d::check_cancel();double _n_e_7574=d::at(this->_n_bark_7346,_n_k_7569);
(void)(([&](){auto&& _n_array_7794=this->_n_FR_7356;auto _n_index_7795=_n_k_7569;auto _n_value_7796=(_n_e_7574*0.42);d::put(_n_array_7794,_n_index_7795,_n_value_7796);return _n_value_7796;})());
(void)(([&](){auto&& _n_array_7797=this->_n_FG_7357;auto _n_index_7798=_n_k_7569;auto _n_value_7799=(_n_e_7574*0.3);d::put(_n_array_7797,_n_index_7798,_n_value_7799);return _n_value_7799;})());
(void)(([&](){auto&& _n_array_7800=this->_n_FB_7358;auto _n_index_7801=_n_k_7569;auto _n_value_7802=(_n_e_7574*0.2);d::put(_n_array_7800,_n_index_7801,_n_value_7802);return _n_value_7802;})());
(void)(([&](){auto&& _n_array_7803=this->_n_floor_7359;auto _n_index_7804=_n_k_7569;auto _n_value_7805=(d::truth((_n_e_7574>0.0))?0.1:0.0);d::put(_n_array_7803,_n_index_7804,_n_value_7805);return _n_value_7805;})());
}
}
}}
for(auto &&_n_item_7806:this->_n_stars_7355){d::check_cancel();auto _n_binding_7807=_n_item_7806;
double _n_k_7575=std::get<0>(*_n_binding_7807);
double _n_b_7576=std::get<1>(*_n_binding_7807);
d::Array<double,false> _n_tint_7577=std::get<2>(*_n_binding_7807);
double _n_rate_7578=std::get<3>(*_n_binding_7807);
double _n_ph_7579=std::get<4>(*_n_binding_7807);
{
double _n_tw_7580=(d::truth((_n_b_7576>0.35))?(0.72+(0.28*std::sin(((_n_t_7563*_n_rate_7578)+_n_ph_7579)))):(0.6+(0.4*std::sin(((_n_t_7563*_n_rate_7578)+_n_ph_7579)))));
double _n_s_7581=(_n_b_7576*_n_tw_7580);
(void)(([&](){auto&& _n_array_7808=this->_n_FR_7356;auto _n_index_7809=_n_k_7575;auto _n_value_7810=(d::at(_n_array_7808,_n_index_7809)+(_n_s_7581*d::at(_n_tint_7577,0.0)));d::put(_n_array_7808,_n_index_7809,_n_value_7810);return _n_value_7810;})());
(void)(([&](){auto&& _n_array_7811=this->_n_FG_7357;auto _n_index_7812=_n_k_7575;auto _n_value_7813=(d::at(_n_array_7811,_n_index_7812)+(_n_s_7581*d::at(_n_tint_7577,1.0)));d::put(_n_array_7811,_n_index_7812,_n_value_7813);return _n_value_7813;})());
(void)(([&](){auto&& _n_array_7814=this->_n_FB_7358;auto _n_index_7815=_n_k_7575;auto _n_value_7816=(d::at(_n_array_7814,_n_index_7815)+(_n_s_7581*d::at(_n_tint_7577,2.0)));d::put(_n_array_7814,_n_index_7815,_n_value_7816);return _n_value_7816;})());
(void)(([&](){auto&& _n_array_7817=this->_n_floor_7359;auto _n_index_7818=_n_k_7575;auto _n_value_7819=0.28;d::put(_n_array_7817,_n_index_7818,_n_value_7819);return _n_value_7819;})());

}
}
for(auto &&_n_item_7820:this->_n_lamps_7347){d::check_cancel();auto _n_binding_7821=_n_item_7820;
double _n_k_7582=d::at(_n_binding_7821,0.0);
double _n_ph_7583=d::at(_n_binding_7821,1.0);
double _n_rate_7584=d::at(_n_binding_7821,2.0);
{
double _n_g_7585=(0.42+([&](){auto _n_left_7822=(0.14*std::sin(((_n_t_7563*_n_rate_7584)+_n_ph_7583)));auto _n_right_7823=std::sin((((_n_t_7563*_n_rate_7584)*2.3)+(_n_ph_7583*3.0)));return (_n_left_7822*_n_right_7823);})());
(void)(([&](){auto&& _n_array_7824=this->_n_FR_7356;auto _n_index_7825=_n_k_7582;auto _n_value_7826=_n_g_7585;d::put(_n_array_7824,_n_index_7825,_n_value_7826);return _n_value_7826;})());
(void)(([&](){auto&& _n_array_7827=this->_n_FG_7357;auto _n_index_7828=_n_k_7582;auto _n_value_7829=(0.85*_n_g_7585);d::put(_n_array_7827,_n_index_7828,_n_value_7829);return _n_value_7829;})());
(void)(([&](){auto&& _n_array_7830=this->_n_FB_7358;auto _n_index_7831=_n_k_7582;auto _n_value_7832=(0.66*_n_g_7585);d::put(_n_array_7830,_n_index_7831,_n_value_7832);return _n_value_7832;})());
(void)(([&](){auto&& _n_array_7833=this->_n_floor_7359;auto _n_index_7834=_n_k_7582;auto _n_value_7835=0.12;d::put(_n_array_7833,_n_index_7834,_n_value_7835);return _n_value_7835;})());

}
}
double _n_n_7586=(std::floor(((_n_t_7563-2.5)/7.0))+1.0);
{double _n_i_7587=d::maximum({0.0,(_n_n_7586-1.0)});
for(;d::truth((_n_i_7587<=(_n_n_7586+1.0)));(void)((_n_i_7587++))){d::check_cancel();auto _n_binding_7836=this->_n_meteor_7361(_n_i_7587);
double _n_start_7588=d::at(_n_binding_7836,0.0);
double _n_x0_7589=d::at(_n_binding_7836,1.0);
double _n_y0_7590=d::at(_n_binding_7836,2.0);
double _n_dx_7591=d::at(_n_binding_7836,3.0);
double _n_dy_7592=d::at(_n_binding_7836,4.0);
double _n_speed_7593=d::at(_n_binding_7836,5.0);
double _n_age_7594=(_n_t_7563-_n_start_7588);
if((d::truth((_n_age_7594<0.0))||d::truth((_n_age_7594>0.9)))){d::check_cancel();continue;
}
double _n_fadeIn_7595=_n_smooth_7320(0.0,0.12,_n_age_7594);
double _n_fadeOut_7596=_n_smooth_7320(0.9,0.6,_n_age_7594);
double _n_hx_7597=(_n_x0_7589+((_n_dx_7591*_n_speed_7593)*_n_age_7594));
double _n_hy_7598=(_n_y0_7590+(((_n_dy_7592*_n_speed_7593)*_n_age_7594)*0.75));
double _n_len_7599=d::minimum({28.0,(_n_speed_7593*_n_age_7594)});
{double _n_j_7600=0.0;
for(;d::truth((_n_j_7600<(_n_len_7599*2.0)));(void)((_n_j_7600++))){d::check_cancel();double _n_f_7601=(_n_j_7600/(_n_len_7599*2.0));
double _n_px_7602=d::round((_n_hx_7597-((_n_dx_7591*_n_f_7601)*_n_len_7599)));
double _n_py_7603=d::round((_n_hy_7598-(((_n_dy_7592*_n_f_7601)*_n_len_7599)*0.75)));
if((((d::truth((_n_px_7602<0.0))||d::truth((_n_px_7602>=_n_W_7302)))||d::truth((_n_py_7603<0.0)))||d::truth((_n_py_7603>=_n_H_7303)))){d::check_cancel();continue;
}
double _n_k_7604=((_n_py_7603*_n_W_7302)+_n_px_7602);
if(d::truth((d::at(this->_n_mat_7339,_n_k_7604)!=this->_n_SKY_7336))){d::check_cancel();continue;
}
double _n_s_7605=((((1.0-_n_f_7601)*_n_fadeIn_7595)*_n_fadeOut_7596)*1.25);
(void)(([&](){auto&& _n_array_7837=this->_n_FR_7356;auto _n_index_7838=_n_k_7604;auto _n_value_7839=d::maximum({d::at(this->_n_FR_7356,_n_k_7604),(_n_s_7605*0.9)});d::put(_n_array_7837,_n_index_7838,_n_value_7839);return _n_value_7839;})());
(void)(([&](){auto&& _n_array_7840=this->_n_FG_7357;auto _n_index_7841=_n_k_7604;auto _n_value_7842=d::maximum({d::at(this->_n_FG_7357,_n_k_7604),(_n_s_7605*0.96)});d::put(_n_array_7840,_n_index_7841,_n_value_7842);return _n_value_7842;})());
(void)(([&](){auto&& _n_array_7843=this->_n_FB_7358;auto _n_index_7844=_n_k_7604;auto _n_value_7845=d::maximum({d::at(this->_n_FB_7358,_n_k_7604),_n_s_7605});d::put(_n_array_7843,_n_index_7844,_n_value_7845);return _n_value_7845;})());
(void)(([&](){auto&& _n_array_7846=this->_n_floor_7359;auto _n_index_7847=_n_k_7604;auto _n_value_7848=d::maximum({d::at(this->_n_floor_7359,_n_k_7604),(d::truth((_n_s_7605>0.12))?0.4:0.0)});d::put(_n_array_7846,_n_index_7847,_n_value_7848);return _n_value_7848;})());
}}
}}
{double _n_r_7606=0.0;
for(;d::truth((_n_r_7606<_n_H_7303));(void)((_n_r_7606++))){d::check_cancel();double _n_edge_7607=_n_smooth_7320((_n_H_7303+1.0),(_n_H_7303-12.0),(_n_r_7606+0.5));
{double _n_x_7608=0.0;
for(;d::truth((_n_x_7608<_n_W_7302));(void)((_n_x_7608++))){d::check_cancel();double _n_k_7609=((_n_r_7606*_n_W_7302)+_n_x_7608);
double _n_cr_7610=d::at(this->_n_FR_7356,_n_k_7609);
double _n_cg_7611=d::at(this->_n_FG_7357,_n_k_7609);
double _n_cbl_7612=d::at(this->_n_FB_7358,_n_k_7609);
double _n_fl_7613=d::at(this->_n_floor_7359,_n_k_7609);
double _n_peak_7614=d::maximum({_n_cr_7610,_n_cg_7611,_n_cbl_7612,0.0001});
bool _n_sky_7615=(d::at(this->_n_mat_7339,_n_k_7609)==this->_n_SKY_7336);
double _n_level_7616=(_n_clamp_7319((_n_fl_7613+((1.0-_n_fl_7613)*std::pow(_n_peak_7614,(d::truth(_n_sky_7615)?0.92:0.75)))))*_n_edge_7607);
double _n_step_7617=([&](){auto _n_argument_7849=0.0;auto _n_argument_7850=([&](){auto _n_argument_7851=3.0;auto _n_argument_7852=d::round(((_n_level_7616*3.0)+d::at(this->_n_dith_7353,_n_k_7609)));return d::minimum({_n_argument_7851,_n_argument_7852});})();return d::maximum({_n_argument_7849,_n_argument_7850});})();
(void)(([&](){auto&& _n_array_7853=this->_n_out_7330;auto _n_index_7854=_n_k_7609;auto _n_value_7855=d::at(_n_DOTS_7313,_n_step_7617);d::put(_n_array_7853,_n_index_7854,_n_value_7855);return _n_value_7855;})());
if(d::truth(_n_color_7564)){d::check_cancel();double _n_want_7618=(d::truth(_n_step_7617)?d::minimum({1.0,((_n_level_7616+0.06)/d::at(_n_COVER_7314,_n_step_7617))}):0.0);
double _n_s_7619=((0.3+(0.7*_n_want_7618))/_n_peak_7614);
(void)(([&](){auto&& _n_array_7856=d::read(_n_color_7564);auto _n_index_7857=_n_k_7609;auto _n_value_7858=([&](){auto _n_argument_7859=_n_clamp_7319((_n_cr_7610*_n_s_7619));auto _n_argument_7860=_n_clamp_7319((_n_cg_7611*_n_s_7619));auto _n_argument_7861=_n_clamp_7319((_n_cbl_7612*_n_s_7619));return this->_n_nearest_7332(_n_argument_7859,_n_argument_7860,_n_argument_7861);})();d::put(_n_array_7856,_n_index_7857,_n_value_7858);return _n_value_7858;})());
}
}}
}}
d::Array<d::String,false> _n_lines_7620=d::Array<d::String,false>{};
{double _n_r_7621=0.0;
for(;d::truth((_n_r_7621<_n_H_7303));(void)((_n_r_7621++))){d::check_cancel();(void)(_n_lines_7620.push(d::join(this->_n_out_7330.slice((_n_r_7621*_n_W_7302),((_n_r_7621+1.0)*_n_W_7302)),d::String(u""))));
}}
return d::join(_n_lines_7620,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("desert-night").cols)*ascii::catalog_meta("desert-night").rows);auto _env=std::make_shared<_n_Record_7622>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &desert_night_meta(){return catalog_meta("desert-night");}
std::unique_ptr<Piece> make_desert_night(const AsciiPieceOptions &o){return std::make_unique<Native_desert_night>(o);}
}
