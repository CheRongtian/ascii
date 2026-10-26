#include "core.hpp"
#include "catalog.hpp"
#include "cancellation.hpp"
#include <cstring>
#include <exception>
#include <iterator>

struct AsciiPiece {
    std::unique_ptr<ascii::Piece> implementation;
    std::shared_ptr<std::atomic_bool> cancellation;
};

namespace {
struct Registration {
    const AsciiPieceMeta &(*meta)();
    std::unique_ptr<ascii::Piece> (*create)(const AsciiPieceOptions &options);
};

const Registration pieces[] = {
    {ascii::a0_meta, ascii::make_a0},
    {ascii::agentmail_meta, ascii::make_agentmail},
    {ascii::almalinux_meta, ascii::make_almalinux},
    {ascii::alpine_dawn_meta, ascii::make_alpine_dawn},
    {ascii::alpine_linux_meta, ascii::make_alpine_linux},
    {ascii::amer_fort_meta, ascii::make_amer_fort},
    {ascii::analog_clock_meta, ascii::make_analog_clock},
    {ascii::apple_meta, ascii::make_apple},
    {ascii::aquarium_meta, ascii::make_aquarium},
    {ascii::arch_linux_meta, ascii::make_arch_linux},
    {ascii::aurora_meta, ascii::make_aurora},
    {ascii::aurora_fjord_meta, ascii::make_aurora_fjord},
    {ascii::autumn_meta, ascii::make_autumn},
    {ascii::bar_chart_meta, ascii::make_bar_chart},
    {ascii::big_text_meta, ascii::make_big_text},
    {ascii::black_hole_meta, ascii::make_black_hole},
    {ascii::black_prism_meta, ascii::make_black_prism},
    {ascii::bonsai_meta, ascii::make_bonsai},
    {ascii::boot_log_meta, ascii::make_boot_log},
    {ascii::bouncing_balls_meta, ascii::make_bouncing_balls},
    {ascii::box_frames_meta, ascii::make_box_frames},
    {ascii::butterfly_meta, ascii::make_butterfly},
    {ascii::c_meta, ascii::make_c},
    {ascii::calendar_meta, ascii::make_calendar},
    {ascii::campfire_meta, ascii::make_campfire},
    {ascii::candle_meta, ascii::make_candle},
    {ascii::candlesticks_meta, ascii::make_candlesticks},
    {ascii::cat_meta, ascii::make_cat},
    {ascii::centos_meta, ascii::make_centos},
    {ascii::chat_meta, ascii::make_chat},
    {ascii::cherry_blossom_meta, ascii::make_cherry_blossom},
    {ascii::chladni_meta, ascii::make_chladni},
    {ascii::clojure_meta, ascii::make_clojure},
    {ascii::cloud_sea_meta, ascii::make_cloud_sea},
    {ascii::cloudflare_meta, ascii::make_cloudflare},
    {ascii::coderabbit_meta, ascii::make_coderabbit},
    {ascii::coffee_meta, ascii::make_coffee},
    {ascii::collabute_meta, ascii::make_collabute},
    {ascii::command_city_meta, ascii::make_command_city},
    {ascii::command_code_meta, ascii::make_command_code},
    {ascii::contour_map_meta, ascii::make_contour_map},
    {ascii::cpp_meta, ascii::make_cpp},
    {ascii::cpu_meters_meta, ascii::make_cpu_meters},
    {ascii::csharp_meta, ascii::make_csharp},
    {ascii::css_meta, ascii::make_css},
    {ascii::cube_meta, ascii::make_cube},
    {ascii::dart_meta, ascii::make_dart},
    {ascii::databuddy_meta, ascii::make_databuddy},
    {ascii::debian_meta, ascii::make_debian},
    {ascii::deep_reef_meta, ascii::make_deep_reef},
    {ascii::deepin_meta, ascii::make_deepin},
    {ascii::desert_night_meta, ascii::make_desert_night},
    {ascii::digital_clock_meta, ascii::make_digital_clock},
    {ascii::dissolve_meta, ascii::make_dissolve},
    {ascii::dividers_meta, ascii::make_dividers},
    {ascii::dna_helix_meta, ascii::make_dna_helix},
    {ascii::donut_meta, ascii::make_donut},
    {ascii::doom_fire_meta, ascii::make_doom_fire},
    {ascii::double_pendulum_meta, ascii::make_double_pendulum},
    {ascii::earth_meta, ascii::make_earth},
    {ascii::earthrise_meta, ascii::make_earthrise},
    {ascii::eclipse_meta, ascii::make_eclipse},
    {ascii::edge_orbit_meta, ascii::make_edge_orbit},
    {ascii::elementary_os_meta, ascii::make_elementary_os},
    {ascii::elixir_meta, ascii::make_elixir},
    {ascii::elm_meta, ascii::make_elm},
    {ascii::endeavouros_meta, ascii::make_endeavouros},
    {ascii::epicycles_meta, ascii::make_epicycles},
    {ascii::equalizer_meta, ascii::make_equalizer},
    {ascii::erlang_meta, ascii::make_erlang},
    {ascii::falling_sand_meta, ascii::make_falling_sand},
    {ascii::fedora_meta, ascii::make_fedora},
    {ascii::fern_meta, ascii::make_fern},
    {ascii::ferris_wheel_meta, ascii::make_ferris_wheel},
    {ascii::file_tree_meta, ascii::make_file_tree},
    {ascii::fireflies_meta, ascii::make_fireflies},
    {ascii::fireworks_meta, ascii::make_fireworks},
    {ascii::flag_meta, ascii::make_flag},
    {ascii::flow_field_meta, ascii::make_flow_field},
    {ascii::form_controls_meta, ascii::make_form_controls},
    {ascii::fountain_meta, ascii::make_fountain},
    {ascii::fox_meta, ascii::make_fox},
    {ascii::fractal_tree_meta, ascii::make_fractal_tree},
    {ascii::galaxy_meta, ascii::make_galaxy},
    {ascii::gangaur_ghat_meta, ascii::make_gangaur_ghat},
    {ascii::gauge_meta, ascii::make_gauge},
    {ascii::gentoo_meta, ascii::make_gentoo},
    {ascii::git_graph_meta, ascii::make_git_graph},
    {ascii::glider_gun_meta, ascii::make_glider_gun},
    {ascii::glitch_meta, ascii::make_glitch},
    {ascii::glxgears_meta, ascii::make_glxgears},
    {ascii::go_meta, ascii::make_go},
    {ascii::green_storm_meta, ascii::make_green_storm},
    {ascii::greptile_meta, ascii::make_greptile},
    {ascii::gyroscope_meta, ascii::make_gyroscope},
    {ascii::harmonograph_meta, ascii::make_harmonograph},
    {ascii::haskell_meta, ascii::make_haskell},
    {ascii::hawa_mahal_meta, ascii::make_hawa_mahal},
    {ascii::heart_meta, ascii::make_heart},
    {ascii::heartbeat_meta, ascii::make_heartbeat},
    {ascii::heatmap_meta, ascii::make_heatmap},
    {ascii::helium_meta, ascii::make_helium},
    {ascii::helixdb_meta, ascii::make_helixdb},
    {ascii::helmcode_meta, ascii::make_helmcode},
    {ascii::hilbert_curve_meta, ascii::make_hilbert_curve},
    {ascii::hourglass_meta, ascii::make_hourglass},
    {ascii::html_meta, ascii::make_html},
    {ascii::icosahedron_meta, ascii::make_icosahedron},
    {ascii::jal_mahal_meta, ascii::make_jal_mahal},
    {ascii::java_meta, ascii::make_java},
    {ascii::javascript_meta, ascii::make_javascript},
    {ascii::jellyfish_meta, ascii::make_jellyfish},
    {ascii::julia_meta, ascii::make_julia},
    {ascii::julia_set_meta, ascii::make_julia_set},
    {ascii::jungle_falls_meta, ascii::make_jungle_falls},
    {ascii::kali_linux_meta, ascii::make_kali_linux},
    {ascii::keiki_meta, ascii::make_keiki},
    {ascii::kite_meta, ascii::make_kite},
    {ascii::kite_festival_meta, ascii::make_kite_festival},
    {ascii::kotlin_meta, ascii::make_kotlin},
    {ascii::kyoto_dusk_meta, ascii::make_kyoto_dusk},
    {ascii::lake_pichola_meta, ascii::make_lake_pichola},
    {ascii::landscape_meta, ascii::make_landscape},
    {ascii::langtons_ant_meta, ascii::make_langtons_ant},
    {ascii::lantern_lake_meta, ascii::make_lantern_lake},
    {ascii::lava_lamp_meta, ascii::make_lava_lamp},
    {ascii::lava_wall_meta, ascii::make_lava_wall},
    {ascii::lighthouse_meta, ascii::make_lighthouse},
    {ascii::lightning_meta, ascii::make_lightning},
    {ascii::linux_mint_meta, ascii::make_linux_mint},
    {ascii::lorenz_meta, ascii::make_lorenz},
    {ascii::lua_meta, ascii::make_lua},
    {ascii::mandelbrot_meta, ascii::make_mandelbrot},
    {ascii::manjaro_meta, ascii::make_manjaro},
    {ascii::marine_drive_meta, ascii::make_marine_drive},
    {ascii::marquee_meta, ascii::make_marquee},
    {ascii::matrix_rain_meta, ascii::make_matrix_rain},
    {ascii::maze_meta, ascii::make_maze},
    {ascii::mintlify_meta, ascii::make_mintlify},
    {ascii::misty_forest_meta, ascii::make_misty_forest},
    {ascii::mobius_strip_meta, ascii::make_mobius_strip},
    {ascii::moon_phases_meta, ascii::make_moon_phases},
    {ascii::morse_meta, ascii::make_morse},
    {ascii::newtons_cradle_meta, ascii::make_newtons_cradle},
    {ascii::night_coast_meta, ascii::make_night_coast},
    {ascii::night_highway_meta, ascii::make_night_highway},
    {ascii::nixos_meta, ascii::make_nixos},
    {ascii::not_found_meta, ascii::make_not_found},
    {ascii::ocaml_meta, ascii::make_ocaml},
    {ascii::ocean_sunset_meta, ascii::make_ocean_sunset},
    {ascii::omarchy_meta, ascii::make_omarchy},
    {ascii::opensuse_meta, ascii::make_opensuse},
    {ascii::orchid_meta, ascii::make_orchid},
    {ascii::owl_meta, ascii::make_owl},
    {ascii::pendulum_wave_meta, ascii::make_pendulum_wave},
    {ascii::perl_meta, ascii::make_perl},
    {ascii::php_meta, ascii::make_php},
    {ascii::pipeline_meta, ascii::make_pipeline},
    {ascii::planet_meta, ascii::make_planet},
    {ascii::planet_scale_meta, ascii::make_planet_scale},
    {ascii::planetscale_meta, ascii::make_planetscale},
    {ascii::plasma_meta, ascii::make_plasma},
    {ascii::playstation_meta, ascii::make_playstation},
    {ascii::plucked_string_meta, ascii::make_plucked_string},
    {ascii::polar_meta, ascii::make_polar},
    {ascii::pond_ripples_meta, ascii::make_pond_ripples},
    {ascii::pop_os_meta, ascii::make_pop_os},
    {ascii::prism_city_meta, ascii::make_prism_city},
    {ascii::progress_bar_meta, ascii::make_progress_bar},
    {ascii::python_meta, ascii::make_python},
    {ascii::r_meta, ascii::make_r},
    {ascii::radar_meta, ascii::make_radar},
    {ascii::rain_meta, ascii::make_rain},
    {ascii::reaction_diffusion_meta, ascii::make_reaction_diffusion},
    {ascii::red_hat_meta, ascii::make_red_hat},
    {ascii::rocket_meta, ascii::make_rocket},
    {ascii::rocky_linux_meta, ascii::make_rocky_linux},
    {ascii::rotozoomer_meta, ascii::make_rotozoomer},
    {ascii::ruby_meta, ascii::make_ruby},
    {ascii::rule_30_meta, ascii::make_rule_30},
    {ascii::ruled_mountains_meta, ascii::make_ruled_mountains},
    {ascii::rust_meta, ascii::make_rust},
    {ascii::salt_flat_meta, ascii::make_salt_flat},
    {ascii::saptarishi_meta, ascii::make_saptarishi},
    {ascii::saturn_rise_meta, ascii::make_saturn_rise},
    {ascii::scala_meta, ascii::make_scala},
    {ascii::scramble_meta, ascii::make_scramble},
    {ascii::sea_swell_meta, ascii::make_sea_swell},
    {ascii::sierpinski_meta, ascii::make_sierpinski},
    {ascii::skeleton_meta, ascii::make_skeleton},
    {ascii::skyline_meta, ascii::make_skyline},
    {ascii::smoke_meta, ascii::make_smoke},
    {ascii::snake_meta, ascii::make_snake},
    {ascii::snow_train_meta, ascii::make_snow_train},
    {ascii::snowfall_meta, ascii::make_snowfall},
    {ascii::solar_system_meta, ascii::make_solar_system},
    {ascii::sparkline_meta, ascii::make_sparkline},
    {ascii::sparks_meta, ascii::make_sparks},
    {ascii::spider_meta, ascii::make_spider},
    {ascii::spinners_meta, ascii::make_spinners},
    {ascii::split_flap_meta, ascii::make_split_flap},
    {ascii::spring_meta, ascii::make_spring},
    {ascii::starfield_meta, ascii::make_starfield},
    {ascii::starlings_meta, ascii::make_starlings},
    {ascii::storm_plains_meta, ascii::make_storm_plains},
    {ascii::sundial_meta, ascii::make_sundial},
    {ascii::sunrise_meta, ascii::make_sunrise},
    {ascii::supabase_meta, ascii::make_supabase},
    {ascii::supermemory_meta, ascii::make_supermemory},
    {ascii::svelte_meta, ascii::make_svelte},
    {ascii::swift_meta, ascii::make_swift},
    {ascii::synthwave_meta, ascii::make_synthwave},
    {ascii::taj_dawn_meta, ascii::make_taj_dawn},
    {ascii::terminal_meta, ascii::make_terminal},
    {ascii::tesseract_meta, ascii::make_tesseract},
    {ascii::three_body_meta, ascii::make_three_body},
    {ascii::tokyo_rain_meta, ascii::make_tokyo_rain},
    {ascii::torus_knot_meta, ascii::make_torus_knot},
    {ascii::train_meta, ascii::make_train},
    {ascii::tunnel_meta, ascii::make_tunnel},
    {ascii::tux_meta, ascii::make_tux},
    {ascii::tv_static_meta, ascii::make_tv_static},
    {ascii::twisted_ring_meta, ascii::make_twisted_ring},
    {ascii::typescript_meta, ascii::make_typescript},
    {ascii::typewriter_meta, ascii::make_typewriter},
    {ascii::ubuntu_meta, ascii::make_ubuntu},
    {ascii::uptime_bar_meta, ascii::make_uptime_bar},
    {ascii::varanasi_ghats_meta, ascii::make_varanasi_ghats},
    {ascii::vercel_meta, ascii::make_vercel},
    {ascii::vinyl_meta, ascii::make_vinyl},
    {ascii::void_linux_meta, ascii::make_void_linux},
    {ascii::volcano_night_meta, ascii::make_volcano_night},
    {ascii::voronoi_meta, ascii::make_voronoi},
    {ascii::wave_interference_meta, ascii::make_wave_interference},
    {ascii::wave_text_meta, ascii::make_wave_text},
    {ascii::whale_meta, ascii::make_whale},
    {ascii::wind_meta, ascii::make_wind},
    {ascii::windmill_meta, ascii::make_windmill},
    {ascii::zig_meta, ascii::make_zig},
    {ascii::zorin_os_meta, ascii::make_zorin_os},
};
thread_local std::string lastError;

const Registration *find(const char *id) {
    if (!id) return nullptr;
    for (const auto &piece : pieces) {
        if (std::strcmp(piece.meta().id, id) == 0) return &piece;
    }
    return nullptr;
}
} // namespace

extern "C" size_t ascii_piece_count(void) { return std::size(pieces); }

extern "C" const AsciiPieceMeta *ascii_piece_meta_at(size_t index) {
    lastError.clear();
    try {
        if (index >= std::size(pieces)) {
            lastError = "Piece metadata index out of range: " + std::to_string(index);
            return nullptr;
        }
        return &ascii::catalog_meta(pieces[index].meta().id);
    } catch (const std::exception &error) {
        lastError = error.what();
        return nullptr;
    }
}

extern "C" const AsciiPieceMeta *ascii_piece_find(const char *id) {
    lastError.clear();
    try {
        const auto *piece = find(id);
        if (!piece) {
            lastError = std::string("Unknown C++ piece: ") + (id ? id : "(null)");
            return nullptr;
        }
        return &ascii::catalog_meta(piece->meta().id);
    } catch (const std::exception &error) {
        lastError = error.what();
        return nullptr;
    }
}

extern "C" AsciiPiece *ascii_piece_create(const char *id, const AsciiPieceOptions *options) {
    lastError.clear();
    try {
        const auto *registration = find(id);
        if (!registration) {
            lastError = std::string("Unknown C++ piece: ") + (id ? id : "(null)");
            return nullptr;
        }
        auto piece = std::make_unique<AsciiPiece>();
        auto settings=options ? *options : ascii::catalog_meta(id).options;
        if(settings.cancellation)piece->cancellation=settings.cancellation->flag;
        ascii::CalculationScope calculation(piece->cancellation);
        ascii::check_cancel();
        piece->implementation = registration->create(settings);
        ascii::check_cancel();
        return piece.release();
    } catch (const std::exception &error) {
        lastError = error.what();
        return nullptr;
    }
}

extern "C" void ascii_piece_destroy(AsciiPiece *piece) { delete piece; }

extern "C" AsciiCancellation *ascii_cancellation_create(void) { return new AsciiCancellation; }
extern "C" void ascii_cancellation_cancel(AsciiCancellation *cancellation) {
    if(cancellation)cancellation->flag->store(true,std::memory_order_relaxed);
}
extern "C" void ascii_cancellation_destroy(AsciiCancellation *cancellation) { delete cancellation; }

extern "C" int32_t ascii_piece_render(AsciiPiece *piece, double time,
                                      int32_t paper, int32_t colored,
                                      AsciiFrame *output) {
    lastError.clear();
    if (!piece || !output) { lastError = "Missing piece or frame output"; return 0; }
    *output = {};
    try {
        ascii::CalculationScope calculation(piece->cancellation);
        ascii::check_cancel();
        auto &implementation = *piece->implementation;
        implementation.frame(time, paper != 0, colored != 0);
        ascii::check_cancel();
        output->text = reinterpret_cast<const uint16_t *>(implementation.text.data());
        output->text_length = implementation.text.size();
        if (colored && !implementation.colors.empty()) {
            output->colors = implementation.colors.data();
            output->color_count = implementation.colors.size();
        }
        return 1;
    } catch (const std::exception &error) {
        lastError = error.what();
        return 0;
    }
}

extern "C" const char *ascii_engine_last_error(void) { return lastError.c_str(); }
