// Native source generated from src/banner.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_banner final:j::Module {
j::Cell _v_68931_fonts;
j::Cell _v_68932_shadows;
j::Cell _v_68933_INK;
j::Cell _v_68934_QUIET;
j::Cell _v_68935_HEX;
j::Cell _v_68936_and;
j::Cell _v_68939_resolve;
j::Cell _v_68943_fail;
j::Cell _v_68946_whole;
j::Cell _v_68951_positive;
j::Cell _v_68955_chars;
j::Cell _v_68964_drawable;
j::Cell _v_68973_shapes;
j::Cell _v_68985_fade;
j::Cell _v_69006_pick;
j::Cell _v_69010_banner;
std::vector<V> _literals;
Generated_banner():_v_68931_fonts(this->slot("fonts")),_v_68932_shadows(this->slot("shadows")),_v_68933_INK(this->slot("INK")),_v_68934_QUIET(this->slot("QUIET")),_v_68935_HEX(this->slot("HEX")),_v_68936_and(this->slot("and")),_v_68939_resolve(this->slot("resolve")),_v_68943_fail(this->slot("fail")),_v_68946_whole(this->slot("whole")),_v_68951_positive(this->slot("positive")),_v_68955_chars(this->slot("chars")),_v_68964_drawable(this->slot("drawable")),_v_68973_shapes(this->slot("shapes")),_v_68985_fade(this->slot("fade")),_v_69006_pick(this->slot("pick")),_v_69010_banner(this->slot("banner")),_literals{V(u"object"),
V(u"block"),
V(u"hasOwn"),
V(u"keys"),
V(u""),
V(u"glyphs"),
V(u"cased"),
V(u"toUpperCase"),
V(u"some"),
V(u"filter"),
V(u"join"),
V(u"slice"),
V(u"map"),
V(u"length"),
V(u"min"),
V(u"0"),
V(u"toString"),
V(u"padStart"),
V(u"from"),
V(u"font"),
V(u"trim"),
V(u"effect"),
V(u"glint"),
V(u"type"),
V(u"still"),
V(u"includes"),
V(u"stringify"),
V(u"gap"),
V(u"double"),
V(u"shadow"),
V(u"none"),
V(u"string"),
V(u"test"),
V(u", "),
V(u"height"),
V(u"reduce"),
V(u"pad"),
V(u"number"),
V(u"isArray"),
V(u"pad's columns"),
V(u"pixel"),
V(u"max"),
V(u"size"),
V(u"cols"),
V(u"rows"),
V(u"size takes { cols, rows }, both of them"),
V(u"size.cols"),
V(u"size.rows"),
V(u"#"),
V(u"forEach"),
V(u"push"),
V(u" "),
V(u"dark"),
V(u"light"),
V(u"fill"),
V(u"▓"),
V(u"█"),
V(u"chars"),
V(u"glint.chars"),
V(u"██"),
V(u"▒▓"),
V(u"speed"),
V(u"first"),
V(u"isFinite"),
V(u"sweep"),
V(u"glint.sweep"),
V(u"every"),
V(u"glint.every"),
V(u"width"),
V(u"glint.width"),
V(u"slant"),
V(u"step"),
V(u"type.step"),
V(u"color"),
V(u"shadowColor"),
V(u"color takes a colour as #rrggbb, or two or more for a fade, not an empty list"),
V(u"paper"),
V(u"\n"),
V(u"seconds"),
V(u"once"),
V(u"pass"),
V(u"name"),
V(u"category"),
V(u"note"),
V(u"fps"),
V(u"palette"),
V(u"loop"),
V(u"meta"),
V(u"default"),
V(u"text"),
V(u"motion"),
V(u"A"),
V(u".##.|#..#|####|#..#|#..#"),
V(u"B"),
V(u"###.|#..#|###.|#..#|###."),
V(u"C"),
V(u".###|#...|#...|#...|.###"),
V(u"D"),
V(u"###.|#..#|#..#|#..#|###."),
V(u"E"),
V(u"####|#...|###.|#...|####"),
V(u"F"),
V(u"####|#...|###.|#...|#..."),
V(u"G"),
V(u".###|#...|#.##|#..#|.###"),
V(u"H"),
V(u"#..#|#..#|####|#..#|#..#"),
V(u"I"),
V(u"#|#|#|#|#"),
V(u"J"),
V(u"...#|...#|...#|#..#|.##."),
V(u"K"),
V(u"#..#|#.#.|##..|#.#.|#..#"),
V(u"L"),
V(u"#...|#...|#...|#...|####"),
V(u"M"),
V(u"#...#|##.##|#.#.#|#...#|#...#"),
V(u"N"),
V(u"#...#|##..#|#.#.#|#..##|#...#"),
V(u"O"),
V(u".##.|#..#|#..#|#..#|.##."),
V(u"P"),
V(u"###.|#..#|###.|#...|#..."),
V(u"Q"),
V(u".##.|#..#|#..#|#.#.|.#.#"),
V(u"R"),
V(u"###.|#..#|###.|#.#.|#..#"),
V(u"S"),
V(u".###|#...|.##.|...#|###."),
V(u"T"),
V(u"#####|..#..|..#..|..#..|..#.."),
V(u"U"),
V(u"#..#|#..#|#..#|#..#|.##."),
V(u"V"),
V(u"#...#|#...#|#...#|.#.#.|..#.."),
V(u"W"),
V(u"#...#|#...#|#.#.#|##.##|#...#"),
V(u"X"),
V(u"#...#|.#.#.|..#..|.#.#.|#...#"),
V(u"Y"),
V(u"#...#|.#.#.|..#..|..#..|..#.."),
V(u"Z"),
V(u"####|...#|..#.|.#..|####"),
V(u"###|#.#|#.#|#.#|###"),
V(u"1"),
V(u".#.|##.|.#.|.#.|###"),
V(u"2"),
V(u"###|..#|###|#..|###"),
V(u"3"),
V(u"###|..#|.##|..#|###"),
V(u"4"),
V(u"#.#|#.#|###|..#|..#"),
V(u"5"),
V(u"###|#..|###|..#|###"),
V(u"6"),
V(u"###|#..|###|#.#|###"),
V(u"7"),
V(u"###|..#|..#|..#|..#"),
V(u"8"),
V(u"###|#.#|###|#.#|###"),
V(u"9"),
V(u"###|#.#|###|..#|###"),
V(u"."),
V(u".|.|.|.|#"),
V(u","),
V(u".|.|.|#|#"),
V(u"!"),
V(u"#|#|#|.|#"),
V(u"?"),
V(u"###|..#|.##|...|.#."),
V(u"'"),
V(u"#|#|.|.|."),
V(u":"),
V(u".|#|.|#|."),
V(u"-"),
V(u"...|...|###|...|..."),
V(u"+"),
V(u"...|.#.|###|.#.|..."),
V(u"="),
V(u"...|###|...|###|..."),
V(u"/"),
V(u"..#|..#|.#.|#..|#.."),
V(u"_"),
V(u"...|...|...|...|###"),
V(u".."),
V(u"slim"),
V(u".#.|#.#|###|#.#|#.#"),
V(u"##.|#.#|##.|#.#|##."),
V(u".##|#..|#..|#..|.##"),
V(u"##.|#.#|#.#|#.#|##."),
V(u"###|#..|##.|#..|###"),
V(u"###|#..|##.|#..|#.."),
V(u".##|#..|#.#|#.#|.##"),
V(u"#.#|#.#|###|#.#|#.#"),
V(u"###|.#.|.#.|.#.|###"),
V(u"..#|..#|..#|#.#|.#."),
V(u"#.#|#.#|##.|#.#|#.#"),
V(u"#..|#..|#..|#..|###"),
V(u"#.#|###|#.#|#.#|#.#"),
V(u"##.|#.#|#.#|#.#|#.#"),
V(u".#.|#.#|#.#|#.#|.#."),
V(u"##.|#.#|##.|#..|#.."),
V(u".#.|#.#|#.#|##.|.##"),
V(u"##.|#.#|##.|#.#|#.#"),
V(u".##|#..|.#.|..#|##."),
V(u"###|.#.|.#.|.#.|.#."),
V(u"#.#|#.#|#.#|#.#|###"),
V(u"#.#|#.#|#.#|.#.|.#."),
V(u"#.#|#.#|#.#|###|#.#"),
V(u"#.#|#.#|.#.|#.#|#.#"),
V(u"#.#|#.#|.#.|.#.|.#."),
V(u"###|..#|.#.|#..|###"),
V(u"##.|..#|.#.|#..|###"),
V(u"##.|..#|.#.|..#|##."),
V(u"###|#..|##.|..#|##."),
V(u".##|#..|###|#.#|###"),
V(u"###|..#|.#.|.#.|.#."),
V(u"###|#.#|###|..#|##."),
V(u"##.|..#|.#.|...|.#."),
V(u"tall"),
V(u".###.|#...#|#...#|#####|#...#|#...#|#...#"),
V(u"####.|#...#|#...#|####.|#...#|#...#|####."),
V(u".###.|#...#|#....|#....|#....|#...#|.###."),
V(u"###..|#..#.|#...#|#...#|#...#|#..#.|###.."),
V(u"#####|#....|#....|####.|#....|#....|#####"),
V(u"#####|#....|#....|####.|#....|#....|#...."),
V(u".###.|#...#|#....|#.###|#...#|#...#|.###."),
V(u"#...#|#...#|#...#|#####|#...#|#...#|#...#"),
V(u"###|.#.|.#.|.#.|.#.|.#.|###"),
V(u"....#|....#|....#|....#|....#|#...#|.###."),
V(u"#...#|#..#.|#.#..|##...|#.#..|#..#.|#...#"),
V(u"#....|#....|#....|#....|#....|#....|#####"),
V(u"#...#|##.##|#.#.#|#.#.#|#...#|#...#|#...#"),
V(u"#...#|#...#|##..#|#.#.#|#..##|#...#|#...#"),
V(u".###.|#...#|#...#|#...#|#...#|#...#|.###."),
V(u"####.|#...#|#...#|####.|#....|#....|#...."),
V(u".###.|#...#|#...#|#...#|#.#.#|#..#.|.##.#"),
V(u"####.|#...#|#...#|####.|#.#..|#..#.|#...#"),
V(u".###.|#...#|#....|.###.|....#|#...#|.###."),
V(u"#####|..#..|..#..|..#..|..#..|..#..|..#.."),
V(u"#...#|#...#|#...#|#...#|#...#|#...#|.###."),
V(u"#...#|#...#|#...#|#...#|#...#|.#.#.|..#.."),
V(u"#...#|#...#|#...#|#.#.#|#.#.#|##.##|#...#"),
V(u"#...#|#...#|.#.#.|..#..|.#.#.|#...#|#...#"),
V(u"#...#|#...#|.#.#.|..#..|..#..|..#..|..#.."),
V(u"#####|....#|...#.|..#..|.#...|#....|#####"),
V(u".###.|#...#|#..##|#.#.#|##..#|#...#|.###."),
V(u"..#|.##|#.#|..#|..#|..#|..#"),
V(u".###.|#...#|....#|...#.|..#..|.#...|#####"),
V(u".###.|#...#|....#|..##.|....#|#...#|.###."),
V(u"...#.|..##.|.#.#.|#..#.|#####|...#.|...#."),
V(u"#####|#....|####.|....#|....#|#...#|.###."),
V(u"..##.|.#...|#....|####.|#...#|#...#|.###."),
V(u"#####|....#|...#.|..#..|..#..|..#..|..#.."),
V(u".###.|#...#|#...#|.###.|#...#|#...#|.###."),
V(u".###.|#...#|#...#|.####|....#|...#.|.##.."),
V(u".|.|.|.|.|.|#"),
V(u"..|..|..|..|..|.#|#."),
V(u"#|#|#|#|#|.|#"),
V(u".###.|#...#|....#|...#.|..#..|.....|..#.."),
V(u"#|#|.|.|.|.|."),
V(u".|.|#|.|.|.|#"),
V(u"....|....|....|####|....|....|...."),
V(u".....|..#..|..#..|#####|..#..|..#..|....."),
V(u".....|.....|#####|.....|#####|.....|....."),
V(u"....#|....#|...#.|..#..|.#...|#....|#...."),
V(u".....|.....|.....|.....|.....|.....|#####"),
V(u"...|...|...|...|...|...|..."),
V(u"bold"),
V(u".####.|##..##|##..##|######|##..##|##..##|##..##"),
V(u"#####.|##..##|##..##|#####.|##..##|##..##|#####."),
V(u".####.|##..##|##....|##....|##....|##..##|.####."),
V(u"####..|##.##.|##..##|##..##|##..##|##.##.|####.."),
V(u"######|##....|##....|#####.|##....|##....|######"),
V(u"######|##....|##....|#####.|##....|##....|##...."),
V(u".####.|##..##|##....|##.###|##..##|##..##|.#####"),
V(u"##..##|##..##|##..##|######|##..##|##..##|##..##"),
V(u"####|.##.|.##.|.##.|.##.|.##.|####"),
V(u"....##|....##|....##|....##|##..##|##..##|.####."),
V(u"##..##|##.##.|####..|###...|####..|##.##.|##..##"),
V(u"##....|##....|##....|##....|##....|##....|######"),
V(u"##....##|###..###|########|##.##.##|##....##|##....##|##....##"),
V(u"##...##|###..##|####.##|##.####|##..###|##...##|##...##"),
V(u".####.|##..##|##..##|##..##|##..##|##..##|.####."),
V(u"#####.|##..##|##..##|#####.|##....|##....|##...."),
V(u".####.|##..##|##..##|##..##|##.###|##.##.|.##.##"),
V(u"#####.|##..##|##..##|#####.|##.##.|##..##|##..##"),
V(u".####.|##..##|##....|.####.|....##|##..##|.####."),
V(u"######|..##..|..##..|..##..|..##..|..##..|..##.."),
V(u"##..##|##..##|##..##|##..##|##..##|##..##|.####."),
V(u"##..##|##..##|##..##|##..##|##..##|.####.|..##.."),
V(u"##....##|##....##|##....##|##.##.##|########|###..###|##....##"),
V(u"##..##|##..##|.####.|..##..|.####.|##..##|##..##"),
V(u"##..##|##..##|.####.|..##..|..##..|..##..|..##.."),
V(u"######|....##|...##.|..##..|.##...|##....|######"),
V(u".####.|##..##|##..##|##.###|###.##|##..##|.####."),
V(u"..##|.###|####|..##|..##|..##|..##"),
V(u".####.|##..##|....##|...##.|..##..|.##...|######"),
V(u".####.|##..##|....##|..###.|....##|##..##|.####."),
V(u"...###|..####|.##.##|##..##|######|....##|....##"),
V(u"######|##....|#####.|....##|....##|##..##|.####."),
V(u"..###.|.##...|##....|#####.|##..##|##..##|.####."),
V(u"######|....##|...##.|..##..|..##..|..##..|..##.."),
V(u".####.|##..##|##..##|.####.|##..##|##..##|.####."),
V(u".####.|##..##|##..##|.#####|....##|...##.|.###.."),
V(u"..|..|..|..|..|##|##"),
V(u"..|..|..|..|##|##|#."),
V(u"##|##|##|##|..|##|##"),
V(u".####.|##..##|...##.|..##..|......|..##..|..##.."),
V(u"##|##|..|..|..|..|.."),
V(u"..|##|##|..|..|##|##"),
V(u"......|..##..|..##..|######|..##..|..##..|......"),
V(u"......|......|######|......|######|......|......"),
V(u"....##|....##|...##.|..##..|.##...|##....|##...."),
V(u"......|......|......|......|......|......|######"),
V(u"round"),
V(u".###.|#...#|#.#.#|#.#.#|#...#|.###."),
V(u".#.|##.|.#.|.#.|.#.|###"),
V(u".###.|#...#|...#.|..#..|.#...|#####"),
V(u".###.|#...#|..##.|....#|#...#|.###."),
V(u"...#.|..##.|.#.#.|#..#.|#####|...#."),
V(u"#####|#....|####.|....#|#...#|.###."),
V(u"..##.|.#...|#....|####.|#...#|.###."),
V(u"####.|....#|...#.|..#..|..#..|..#.."),
V(u".###.|#...#|.###.|#...#|#...#|.###."),
V(u".###.|#...#|.####|....#|...#.|.##.."),
V(u".###.|#...#|#...#|#####|#...#|#...#"),
V(u"###..|#..#.|###..|#..#.|#...#|####."),
V(u".####|#....|#....|#....|#....|.####"),
V(u"###..|#..#.|#...#|#...#|#..#.|###.."),
V(u".####|#....|####.|#....|#....|.####"),
V(u".####|#....|####.|#....|#....|#...."),
V(u".####|#....|#....|#.##.|#...#|.###."),
V(u"#...#|#...#|#####|#...#|#...#|#...#"),
V(u"###|.#.|.#.|.#.|.#.|###"),
V(u"....#|....#|....#|....#|#...#|.###."),
V(u"#...#|#..#.|###..|#..#.|#...#|#...#"),
V(u"#....|#....|#....|#....|#....|.####"),
V(u"#...#|##.##|#.#.#|#...#|#...#|#...#"),
V(u"#...#|##..#|#.#.#|#.#.#|#..##|#...#"),
V(u".###.|#...#|#...#|#...#|#...#|.###."),
V(u".###.|#...#|#...#|####.|#....|#...."),
V(u".###.|#...#|#...#|#.#.#|#..#.|.##.#"),
V(u".###.|#...#|#..#.|###..|#..#.|#...#"),
V(u".###.|#....|.##..|...#.|....#|####."),
V(u"#####|..#..|..#..|..#..|..#..|..#.."),
V(u"#...#|#...#|#...#|#...#|#...#|.###."),
V(u"#...#|#...#|#...#|.#.#.|.#.#.|..#.."),
V(u"#...#|#...#|#...#|#.#.#|#.#.#|.#.#."),
V(u"#...#|.#.#.|..#..|..#..|.#.#.|#...#"),
V(u"#...#|#...#|.#.#.|..#..|..#..|..#.."),
V(u"#####|...#.|..#..|..#..|.#...|#####"),
V(u".|.|.|.|.|#"),
V(u".|.|.|.|#|#"),
V(u"#|#|#|#|.|#"),
V(u".###.|#...#|...#.|..#..|.....|..#.."),
V(u"#|#|.|.|.|."),
V(u".|#|.|.|#|."),
V(u"...|...|###|...|...|..."),
V(u"...|.#.|###|.#.|...|..."),
V(u"...|###|...|###|...|..."),
V(u"..#|..#|.#.|.#.|#..|#.."),
V(u"....|....|....|....|....|####"),
V(u"...|...|...|...|...|..."),
V(u"wide"),
V(u".####.|#...##|#.##.#|##...#|.####."),
V(u"..#|.##|..#|..#|..#"),
V(u"#####.|.....#|.####.|#.....|######"),
V(u"#####.|.....#|.####.|.....#|#####."),
V(u"#...#.|#...#.|######|....#.|....#."),
V(u"######|#.....|#####.|.....#|#####."),
V(u".####.|#.....|#####.|#....#|.####."),
V(u"######|.....#|....#.|...#..|..#..."),
V(u".####.|#....#|.####.|#....#|.####."),
V(u".####.|#....#|.#####|.....#|.####."),
V(u".####.|#....#|######|#....#|#....#"),
V(u"#####.|#....#|######|#....#|#####."),
V(u".#####|#.....|#.....|#.....|.#####"),
V(u"#####.|#....#|#....#|#....#|#####."),
V(u"######|#.....|#####.|#.....|######"),
V(u"######|#.....|#####.|#.....|#....."),
V(u".#####|#.....|#..###|#....#|.####."),
V(u"#....#|#....#|######|#....#|#....#"),
V(u".....#|.....#|.....#|#....#|.####."),
V(u"#....#|#...#.|#####.|#...#.|#....#"),
V(u"#.....|#.....|#.....|#.....|######"),
V(u"#.....#|##...##|#.#.#.#|#..#..#|#.....#"),
V(u"#....#|##...#|#.#..#|#..#.#|#...##"),
V(u".####.|#....#|#....#|#....#|.####."),
V(u"#####.|#....#|#####.|#.....|#....."),
V(u".####.|#....#|#....#|#...#.|.###.#"),
V(u"#####.|#....#|#####.|#...#.|#....#"),
V(u".####.|#.....|.####.|.....#|.####."),
V(u"#######|...#...|...#...|...#...|...#..."),
V(u"#....#|#....#|#....#|#....#|.####."),
V(u"#.....#|#.....#|.#...#.|..#.#..|...#..."),
V(u"#.....#|#..#..#|#.#.#.#|##...##|#.....#"),
V(u"#....#|.#..#.|..##..|.#..#.|#....#"),
V(u"#.....#|.#...#.|..#.#..|...#...|...#..."),
V(u"######|....#.|..##..|.#....|######"),
V(u"#####.|.....#|..###.|......|..#..."),
V(u"....|....|####|....|...."),
V(u".....|..#..|#####|..#..|....."),
V(u"....|####|....|####|...."),
V(u"....#|...#.|..#..|.#...|#...."),
V(u"......|......|......|......|######"),
V(u"....|....|....|....|...."),
V(u"mixed"),
V(u".###.|#...#|#...#|#####|#...#|#...#|#...#|.....|....."),
V(u"####.|#...#|#...#|####.|#...#|#...#|####.|.....|....."),
V(u".###.|#...#|#....|#....|#....|#...#|.###.|.....|....."),
V(u"####.|#...#|#...#|#...#|#...#|#...#|####.|.....|....."),
V(u"#####|#....|#....|####.|#....|#....|#####|.....|....."),
V(u"#####|#....|#....|####.|#....|#....|#....|.....|....."),
V(u".###.|#...#|#....|#.###|#...#|#...#|.####|.....|....."),
V(u"#...#|#...#|#...#|#####|#...#|#...#|#...#|.....|....."),
V(u"###|.#.|.#.|.#.|.#.|.#.|###|...|..."),
V(u"....#|....#|....#|....#|....#|#...#|.###.|.....|....."),
V(u"#...#|#..#.|#.#..|##...|#.#..|#..#.|#...#|.....|....."),
V(u"#....|#....|#....|#....|#....|#....|#####|.....|....."),
V(u"#...#|##.##|#.#.#|#.#.#|#...#|#...#|#...#|.....|....."),
V(u"#...#|#...#|##..#|#.#.#|#..##|#...#|#...#|.....|....."),
V(u".###.|#...#|#...#|#...#|#...#|#...#|.###.|.....|....."),
V(u"####.|#...#|#...#|####.|#....|#....|#....|.....|....."),
V(u".###.|#...#|#...#|#...#|#.#.#|#..#.|.##.#|.....|....."),
V(u"####.|#...#|#...#|####.|#.#..|#..#.|#...#|.....|....."),
V(u".###.|#...#|#....|.###.|....#|#...#|.###.|.....|....."),
V(u"#####|..#..|..#..|..#..|..#..|..#..|..#..|.....|....."),
V(u"#...#|#...#|#...#|#...#|#...#|#...#|.###.|.....|....."),
V(u"#...#|#...#|#...#|#...#|#...#|.#.#.|..#..|.....|....."),
V(u"#...#|#...#|#...#|#.#.#|#.#.#|#.#.#|.#.#.|.....|....."),
V(u"#...#|#...#|.#.#.|..#..|.#.#.|#...#|#...#|.....|....."),
V(u"#...#|#...#|.#.#.|..#..|..#..|..#..|..#..|.....|....."),
V(u"#####|....#|...#.|..#..|.#...|#....|#####|.....|....."),
V(u"a"),
V(u".....|.....|.###.|....#|.####|#...#|.####|.....|....."),
V(u"b"),
V(u"#....|#....|####.|#...#|#...#|#...#|####.|.....|....."),
V(u"c"),
V(u"....|....|.###|#...|#...|#...|.###|....|...."),
V(u"d"),
V(u"....#|....#|.####|#...#|#...#|#...#|.####|.....|....."),
V(u"e"),
V(u".....|.....|.###.|#...#|#####|#....|.####|.....|....."),
V(u"f"),
V(u"..##|.#..|###.|.#..|.#..|.#..|.#..|....|...."),
V(u"g"),
V(u".....|.....|.####|#...#|#...#|#...#|.####|....#|.###."),
V(u"h"),
V(u"#....|#....|#.##.|##..#|#...#|#...#|#...#|.....|....."),
V(u"i"),
V(u"#|.|#|#|#|#|#|.|."),
V(u"j"),
V(u"..#|...|..#|..#|..#|..#|..#|..#|##."),
V(u"k"),
V(u"#...|#...|#..#|#.#.|##..|#.#.|#..#|....|...."),
V(u"l"),
V(u"#.|#.|#.|#.|#.|#.|.#|..|.."),
V(u"m"),
V(u".....|.....|##.#.|#.#.#|#.#.#|#.#.#|#.#.#|.....|....."),
V(u"n"),
V(u".....|.....|#.##.|##..#|#...#|#...#|#...#|.....|....."),
V(u"o"),
V(u".....|.....|.###.|#...#|#...#|#...#|.###.|.....|....."),
V(u"p"),
V(u".....|.....|####.|#...#|#...#|#...#|####.|#....|#...."),
V(u"q"),
V(u".....|.....|.####|#...#|#...#|#...#|.####|....#|....#"),
V(u"r"),
V(u"....|....|#.##|##..|#...|#...|#...|....|...."),
V(u"s"),
V(u".....|.....|.####|#....|.###.|....#|####.|.....|....."),
V(u"t"),
V(u".#..|.#..|###.|.#..|.#..|.#..|..##|....|...."),
V(u"u"),
V(u".....|.....|#...#|#...#|#...#|#...#|.####|.....|....."),
V(u"v"),
V(u".....|.....|#...#|#...#|#...#|.#.#.|..#..|.....|....."),
V(u"w"),
V(u".....|.....|#...#|#...#|#.#.#|#.#.#|.#.#.|.....|....."),
V(u"x"),
V(u".....|.....|#...#|.#.#.|..#..|.#.#.|#...#|.....|....."),
V(u"y"),
V(u".....|.....|#...#|#...#|#...#|#...#|.####|....#|.###."),
V(u"z"),
V(u".....|.....|#####|...#.|..#..|.#...|#####|.....|....."),
V(u".###.|#...#|#..##|#.#.#|##..#|#...#|.###.|.....|....."),
V(u".#.|##.|.#.|.#.|.#.|.#.|###|...|..."),
V(u".###.|#...#|....#|...#.|..#..|.#...|#####|.....|....."),
V(u".###.|#...#|....#|..##.|....#|#...#|.###.|.....|....."),
V(u"...#.|..##.|.#.#.|#..#.|#####|...#.|...#.|.....|....."),
V(u"#####|#....|####.|....#|....#|#...#|.###.|.....|....."),
V(u"..##.|.#...|#....|####.|#...#|#...#|.###.|.....|....."),
V(u"#####|....#|...#.|..#..|.#...|.#...|.#...|.....|....."),
V(u".###.|#...#|#...#|.###.|#...#|#...#|.###.|.....|....."),
V(u".###.|#...#|#...#|.####|....#|...#.|.##..|.....|....."),
V(u".|.|.|.|.|.|#|.|."),
V(u"..|..|..|..|..|..|.#|#.|.."),
V(u"#|#|#|#|#|.|#|.|."),
V(u".###.|#...#|....#|...#.|..#..|.....|..#..|.....|....."),
V(u"#|#|.|.|.|.|.|.|."),
V(u".|.|.|#|.|.|#|.|."),
V(u"....|....|....|....|####|....|....|....|...."),
V(u".....|.....|..#..|..#..|#####|..#..|..#..|.....|....."),
V(u".....|.....|.....|#####|.....|#####|.....|.....|....."),
V(u"....#|....#|...#.|..#..|.#...|#....|#....|.....|....."),
V(u".....|.....|.....|.....|.....|.....|#####|.....|....."),
V(u"...|...|...|...|...|...|...|...|..."),
V(u"italic"),
V(u"..##.|.#..#|.#.##|##.#.|.##.."),
V(u"...#|.##.|..#.|.#..|###."),
V(u"..###|....#|..##.|.#...|####."),
V(u"..###|....#|..##.|...#.|###.."),
V(u".#..#|#..#.|####.|..#..|..#.."),
V(u"..####|.#....|.###..|...#..|###..."),
V(u"..##.|.#...|.###.|#..#.|.##.."),
V(u".####|...#.|..#..|.#...|#...."),
V(u"..##.|.#..#|..##.|#..#.|.##.."),
V(u"..##.|.#..#|..###|...#.|.##.."),
V(u"..##.|.#..#|.####|#..#.|#..#."),
V(u"..###|.#..#|.###.|#..#.|###.."),
V(u"..###|.#...|.#...|#....|.###."),
V(u"..###|.#..#|.#..#|#..#.|###.."),
V(u"..####|.#....|.###..|#.....|####.."),
V(u"..####|.#....|.###..|#.....|#....."),
V(u"..###|.#...|.#.##|#..#.|.###."),
V(u"..#..#|.#..#.|.####.|#..#..|#..#.."),
V(u".###.|..#..|..#..|.#...|###.."),
V(u".....#|....#.|....#.|#..#..|.##..."),
V(u"..#.#|.#.#.|.##..|#.#..|#..#."),
V(u"..#.|.#..|.#..|#...|####"),
V(u"..#...#|.##.##.|.#.#.#.|#...#..|#...#.."),
V(u"..#..#|.##.#.|.#.##.|#..#..|#..#.."),
V(u"..##.|.#..#|.#..#|#..#.|.##.."),
V(u"..###|.#..#|.###.|#....|#...."),
V(u"..##.|.#..#|.#..#|#.##.|.##.#"),
V(u"..###|.#..#|.###.|#.#..|#..#."),
V(u"..###|.#...|..##.|...#.|###.."),
V(u"#####|..#..|..#..|.#...|.#..."),
V(u"..#..#|.#..#.|.#..#.|#..#..|.##..."),
V(u"..#..#|.#..#.|.#.#..|#.#...|.#...."),
V(u"..#...#|.#...#.|.#.#.#.|#.#.#..|.#.#..."),
V(u"..#...#|..#.#..|...#...|.#.#...|#...#.."),
V(u"#...#|.#.#.|..#..|.#...|.#..."),
V(u"..####|....#.|..##..|.#....|####.."),
V(u"..|..|..|.#|#."),
V(u"..#|.#.|.#.|...|#.."),
V(u"###|..#|.#.|...|#.."),
V(u".#|#.|..|..|.."),
V(u"..|.#|..|..|#."),
V(u"....|.###|....|###.|...."),
V(u"....|....|....|....|####"),
V(u"...|...|...|...|..."),
V(u" ║║║═╝╗╣═╚╔╠═╩╦╬"),
V(u"single"),
V(u" │││─┘┐┤─└┌├─┴┬┼"),
V(u"heavy"),
V(u" ┃┃┃━┛┓┫━┗┏┣━┻┳╋"),
V(u"rounded"),
V(u" │││─╯╮┤─╰╭├─┴┬┼"),
V(u"ascii"),
V(u" |||-+++-+++-+++"),
V(u"#1f2328"),
V(u"#f0f6fc"),
V(u"#59636e"),
V(u"#9198a1"),
V(u"at"),
V(u"isInteger"),
V(u"one character"),
V(u"one or two characters"),
V(u"|"),
V(u"split"),
V(u"flatMap")}{
this->exports["fonts"]=this->_v_68931_fonts;
this->exports["shadows"]=this->_v_68932_shadows;
this->exports["drawable"]=this->_v_68964_drawable;
this->exports["banner"]=this->_v_69010_banner;
}
void init() override{if(initialized)return;initialized=true;
this->_v_68939_resolve.get()=j::function([=](const j::Args &_args_fn68940,const V &_receiver_fn68940,const V &_self_fn68940) mutable ->V{
V _v_68941_font;
_v_68941_font=_args_fn68940[0];
{
V _v_68942_name;
if(j::truth(([&]()->V{V _logical69125=([&]()->V{V _logical69126=([&]()->V{V _lhs69127=_v_68941_font;V _rhs69128=j::builtin("undefined");return V(!j::equal(_lhs69127,_rhs69128,true));})();return j::truth(_logical69126)?([&]()->V{V _lhs69129=_v_68941_font;V _rhs69130=V::null();return V(!j::equal(_lhs69129,_rhs69130,true));})():_logical69126;})();return j::truth(_logical69125)?([&]()->V{V _lhs69131=j::unary("typeof",_v_68941_font);V _rhs69132=this->_literals[0];return V(j::equal(_lhs69131,_rhs69132,true));})():_logical69125;})())){return _v_68941_font;
}
_v_68942_name=([&]()->V{V _logical69133=_v_68941_font;return j::nullish(_logical69133)?this->_literals[1]:_logical69133;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver69134=j::builtin("Object");V _method69135=this->_literals[2];V _method=j::get(_receiver69134,_method69135);j::Args _params69136=j::Args{this->_v_68931_fonts.get(),_v_68942_name};return j::call(_method,_params69136,_receiver69134);})()))){j::raise(([&]()->V{V _callee69142=j::builtin("Error");return j::construct(_callee69142,j::Args{([&]()->V{std::u16string _text69137;_text69137+=u"ascii.rest: there is no font named \"";_text69137+=j::string(_v_68942_name);_text69137+=u"\": there are ";_text69137+=j::string(([&]()->V{V _callee69141=this->_v_68936_and.get();return j::call(_callee69141,j::Args{([&]()->V{V _receiver69138=j::builtin("Object");V _method69139=this->_literals[3];V _method=j::get(_receiver69138,_method69139);j::Args _params69140=j::Args{this->_v_68931_fonts.get()};return j::call(_method,_params69140,_receiver69138);})()});})());_text69137+=u", or pass one of your own";return V(std::move(_text69137));})()});})());
}
return j::get(this->_v_68931_fonts.get(),_v_68942_name);

}

return V{};
},1);
this->_v_68964_drawable.get()=j::function([=](const j::Args &_args_fn68965,const V &_receiver_fn68965,const V &_self_fn68965) mutable ->V{
V _v_68966_text;
V _v_68967_font;
_v_68966_text=_args_fn68965[0];
V _default69143=_args_fn68965[1];if(_default69143.kind==V::Undefined||_default69143.kind==V::Hole)_default69143=this->_literals[1];
_v_68967_font=_default69143;
{
j::Cell _v_68968_f;
_v_68968_f.get()=([&]()->V{V _callee69144=this->_v_68939_resolve.get();return j::call(_callee69144,j::Args{_v_68967_font});})();
return ([&]()->V{V _receiver69145=([&]()->V{V _receiver69158=([&]()->V{j::Args _array69161;for(const auto &_value:j::elements(([&]()->V{V _callee69162=j::builtin("String");return j::call(_callee69162,j::Args{_v_68966_text});})()))_array69161.push_back(_value);return j::array(std::move(_array69161));})();V _method69159=this->_literals[9];V _method=j::get(_receiver69158,_method69159);j::Args _params69160=j::Args{j::function([=](const j::Args &_args_fn68969,const V &_receiver_fn68969,const V &_self_fn68969) mutable ->V{
V _v_68970_ch;
_v_68970_ch=_args_fn68969[0];
return ([&]()->V{V _receiver69151=([&]()->V{j::Args _array69154;for(const auto &_value:j::elements((j::truth(j::get(_v_68968_f.get(),this->_literals[6]))?_v_68970_ch:([&]()->V{V _receiver69155=_v_68970_ch;V _method69156=this->_literals[7];V _method=j::get(_receiver69155,_method69156);j::Args _params69157=j::Args{};return j::call(_method,_params69157,_receiver69155);})())))_array69154.push_back(_value);return j::array(std::move(_array69154));})();V _method69152=this->_literals[8];V _method=j::get(_receiver69151,_method69152);j::Args _params69153=j::Args{j::function([=](const j::Args &_args_fn68971,const V &_receiver_fn68971,const V &_self_fn68971) mutable ->V{
V _v_68972_c;
_v_68972_c=_args_fn68971[0];
return ([&]()->V{V _receiver69148=j::builtin("Object");V _method69149=this->_literals[2];V _method=j::get(_receiver69148,_method69149);j::Args _params69150=j::Args{j::get(_v_68968_f.get(),this->_literals[5]),_v_68972_c};return j::call(_method,_params69150,_receiver69148);})();
return V{};
},1)};return j::call(_method,_params69153,_receiver69151);})();
return V{};
},1)};return j::call(_method,_params69160,_receiver69158);})();V _method69146=this->_literals[10];V _method=j::get(_receiver69145,_method69146);j::Args _params69147=j::Args{this->_literals[4]};return j::call(_method,_params69147,_receiver69145);})();

}

return V{};
},1);
this->_v_68985_fade.get()=j::function([=](const j::Args &_args_fn68986,const V &_receiver_fn68986,const V &_self_fn68986) mutable ->V{
V _v_68987_stops;
j::Cell _v_68988_n;
_v_68987_stops=_args_fn68986[0];
_v_68988_n.get()=_args_fn68986[1];
{
j::Cell _v_68989_rgb;
_v_68989_rgb.get()=([&]()->V{V _receiver69173=_v_68987_stops;V _method69174=this->_literals[12];V _method=j::get(_receiver69173,_method69174);j::Args _params69175=j::Args{j::function([=](const j::Args &_args_fn68990,const V &_receiver_fn68990,const V &_self_fn68990) mutable ->V{
j::Cell _v_68991_s;
_v_68991_s.get()=_args_fn68990[0];
return ([&]()->V{V _receiver69169=([&]()->V{j::Args _array69172;_array69172.push_back(V(1.0));_array69172.push_back(V(3.0));_array69172.push_back(V(5.0));return j::array(std::move(_array69172));})();V _method69170=this->_literals[12];V _method=j::get(_receiver69169,_method69170);j::Args _params69171=j::Args{j::function([=](const j::Args &_args_fn68992,const V &_receiver_fn68992,const V &_self_fn68992) mutable ->V{
V _v_68993_i;
_v_68993_i=_args_fn68992[0];
return ([&]()->V{V _callee69168=j::builtin("parseInt");return j::call(_callee69168,j::Args{([&]()->V{V _receiver69165=_v_68991_s.get();V _method69166=this->_literals[11];V _method=j::get(_receiver69165,_method69166);j::Args _params69167=j::Args{_v_68993_i,([&]()->V{V _lhs69163=_v_68993_i;V _rhs69164=V(2.0);return j::binary("+",_lhs69163,_rhs69164);})()};return j::call(_method,_params69167,_receiver69165);})(),V(16.0)});})();
return V{};
},1)};return j::call(_method,_params69171,_receiver69169);})();
return V{};
},1)};return j::call(_method,_params69175,_receiver69173);})();
return ([&]()->V{V _receiver69232=j::builtin("Array");V _method69233=this->_literals[18];V _method=j::get(_receiver69232,_method69233);j::Args _params69234=j::Args{([&]()->V{V _obj69176=j::object();j::put(_obj69176,this->_literals[13],_v_68988_n.get());return _obj69176;})(),j::function([=](const j::Args &_args_fn68994,const V &_receiver_fn68994,const V &_self_fn68994) mutable ->V{
V _v_68995__;
V _v_68996_i;
_v_68995__=_args_fn68994[0];
_v_68996_i=_args_fn68994[1];
{
V _v_68997_k;
j::Cell _v_68998_a;
j::Cell _v_68999_f;
V _v_69000_c;
_v_68997_k=(j::truth(([&]()->V{V _lhs69177=_v_68988_n.get();V _rhs69178=V(1.0);return j::binary(">",_lhs69177,_rhs69178);})())?([&]()->V{V _lhs69179=([&]()->V{V _lhs69181=_v_68996_i;V _rhs69182=([&]()->V{V _lhs69183=_v_68988_n.get();V _rhs69184=V(1.0);return V(j::number(_lhs69183)-j::number(_rhs69184));})();return V(j::number(_lhs69181)/j::number(_rhs69182));})();V _rhs69180=([&]()->V{V _lhs69185=j::get(_v_68989_rgb.get(),this->_literals[13]);V _rhs69186=V(1.0);return V(j::number(_lhs69185)-j::number(_rhs69186));})();return V(j::number(_lhs69179)*j::number(_rhs69180));})():V(0.0));
_v_68998_a.get()=([&]()->V{V _receiver69192=j::builtin("Math");V _method69193=this->_literals[14];V _method=j::get(_receiver69192,_method69193);j::Args _params69194=j::Args{([&]()->V{V _lhs69187=j::get(_v_68989_rgb.get(),this->_literals[13]);V _rhs69188=V(2.0);return V(j::number(_lhs69187)-j::number(_rhs69188));})(),([&]()->V{V _number69189=_v_68997_k;return V(std::floor(j::number(_number69189)));})()};return j::call(_method,_params69194,_receiver69192);})();
_v_68999_f.get()=([&]()->V{V _lhs69195=_v_68997_k;V _rhs69196=_v_68998_a.get();return V(j::number(_lhs69195)-j::number(_rhs69196));})();
_v_69000_c=(j::truth(([&]()->V{V _lhs69197=j::get(_v_68989_rgb.get(),this->_literals[13]);V _rhs69198=V(1.0);return V(j::equal(_lhs69197,_rhs69198,true));})())?j::get(_v_68989_rgb.get(),V(0.0)):([&]()->V{V _receiver69216=j::get(_v_68989_rgb.get(),_v_68998_a.get());V _method69217=this->_literals[12];V _method=j::get(_receiver69216,_method69217);j::Args _params69218=j::Args{j::function([=](const j::Args &_args_fn69001,const V &_receiver_fn69001,const V &_self_fn69001) mutable ->V{
V _v_69002_v;
V _v_69003_j;
_v_69002_v=_args_fn69001[0];
_v_69003_j=_args_fn69001[1];
return ([&]()->V{V _number69207=([&]()->V{V _lhs69208=_v_69002_v;V _rhs69209=([&]()->V{V _lhs69210=([&]()->V{V _lhs69212=j::get(j::get(_v_68989_rgb.get(),([&]()->V{V _lhs69214=_v_68998_a.get();V _rhs69215=V(1.0);return j::binary("+",_lhs69214,_rhs69215);})()),_v_69003_j);V _rhs69213=_v_69002_v;return V(j::number(_lhs69212)-j::number(_rhs69213));})();V _rhs69211=_v_68999_f.get();return V(j::number(_lhs69210)*j::number(_rhs69211));})();return j::binary("+",_lhs69208,_rhs69209);})();return V(std::floor(j::number(_number69207)+.5));})();
return V{};
},2)};return j::call(_method,_params69218,_receiver69216);})());
return ([&]()->V{std::u16string _text69219;_text69219+=u"#";_text69219+=j::string(([&]()->V{V _receiver69220=([&]()->V{V _receiver69229=_v_69000_c;V _method69230=this->_literals[12];V _method=j::get(_receiver69229,_method69230);j::Args _params69231=j::Args{j::function([=](const j::Args &_args_fn69004,const V &_receiver_fn69004,const V &_self_fn69004) mutable ->V{
V _v_69005_v;
_v_69005_v=_args_fn69004[0];
return ([&]()->V{V _receiver69223=([&]()->V{V _receiver69226=_v_69005_v;V _method69227=this->_literals[16];V _method=j::get(_receiver69226,_method69227);j::Args _params69228=j::Args{V(16.0)};return j::call(_method,_params69228,_receiver69226);})();V _method69224=this->_literals[17];V _method=j::get(_receiver69223,_method69224);j::Args _params69225=j::Args{V(2.0),this->_literals[15]};return j::call(_method,_params69225,_receiver69223);})();
return V{};
},1)};return j::call(_method,_params69231,_receiver69229);})();V _method69221=this->_literals[10];V _method=j::get(_receiver69220,_method69221);j::Args _params69222=j::Args{this->_literals[4]};return j::call(_method,_params69222,_receiver69220);})());_text69219+=u"";return V(std::move(_text69219));})();

}

return V{};
},2)};return j::call(_method,_params69234,_receiver69232);})();

}

return V{};
},2);
this->_v_69010_banner.get()=j::function([=](const j::Args &_args_fn69011,const V &_receiver_fn69011,const V &_self_fn69011) mutable ->V{
V _v_69012_text;
j::Cell _v_69013_options;
_v_69012_text=_args_fn69011[0];
V _default69235=_args_fn69011[1];if(_default69235.kind==V::Undefined||_default69235.kind==V::Hole)_default69235=([&]()->V{V _obj69236=j::object();return _obj69236;})();
_v_69013_options.get()=_default69235;
{
V _v_69014_font;
j::Cell _v_69015_glyphs;
j::Cell _v_69016_effect;
j::Cell _v_69017_gap;
j::Cell _v_69018_shade;
V _v_69019_joins;
V _v_69020_h;
V _v_69021_span;
V _v_69027_pad;
V _v_69028_pads;
V _v_69029_padY;
V _v_69030_padX;
V _v_69034_tall;
j::Cell _v_69035_s;
V _v_69036_max;
j::Cell _v_69037_cols;
j::Cell _v_69038_rows;
V _v_69039_x0;
j::Cell _v_69040_y0;
j::Cell _v_69041_ink;
j::Cell _v_69042_x;
V _v_69049_at;
j::Cell _v_69053_grid;
V _v_69060_both;
j::Cell _v_69065_fill;
V _v_69066_gl;
j::Cell _v_69067_shine;
V _v_69068_speed;
V _v_69069_firstAt;
j::Cell _v_69070_first;
j::Cell _v_69071_sweep;
j::Cell _v_69072_every;
j::Cell _v_69073_width;
j::Cell _v_69074_slant;
j::Cell _v_69075_step;
V _v_69076_rest;
j::Cell _v_69077_ends;
V _v_69080_colored;
j::Cell _v_69083_steps;
j::Cell _v_69088_palette;
j::Cell _v_69094_half;
j::Cell _v_69095_lo;
j::Cell _v_69096_hi;
j::Cell _v_69097_bucket;
j::Cell _v_69100_left;
j::Cell _v_69101_right;
j::Cell _v_69102_frame;
V _v_69121_motion;
V _v_69122_name;
V _v_69123_meta;
_v_69014_font=([&]()->V{V _callee69237=this->_v_68939_resolve.get();return j::call(_callee69237,j::Args{j::get(_v_69013_options.get(),this->_literals[19])});})();
if(j::truth(j::unary("!",([&]()->V{V _receiver69238=([&]()->V{V _callee69241=this->_v_68964_drawable.get();return j::call(_callee69241,j::Args{_v_69012_text,_v_69014_font});})();V _method69239=this->_literals[20];V _method=j::get(_receiver69238,_method69239);j::Args _params69240=j::Args{};return j::call(_method,_params69240,_receiver69238);})()))){(void)(([&]()->V{V _callee69243=this->_v_68943_fail.get();return j::call(_callee69243,j::Args{([&]()->V{std::u16string _text69242;_text69242+=u"the font draws none of \"";_text69242+=j::string(_v_69012_text);_text69242+=u"\"";return V(std::move(_text69242));})()});})());
}
_v_69015_glyphs.get()=([&]()->V{V _callee69244=this->_v_68973_shapes.get();return j::call(_callee69244,j::Args{_v_69012_text,_v_69014_font});})();
_v_69016_effect.get()=([&]()->V{V _logical69245=j::get(_v_69013_options.get(),this->_literals[21]);return j::nullish(_logical69245)?this->_literals[22]:_logical69245;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver69246=([&]()->V{j::Args _array69249;_array69249.push_back(this->_literals[22]);_array69249.push_back(this->_literals[23]);_array69249.push_back(this->_literals[24]);return j::array(std::move(_array69249));})();V _method69247=this->_literals[25];V _method=j::get(_receiver69246,_method69247);j::Args _params69248=j::Args{_v_69016_effect.get()};return j::call(_method,_params69248,_receiver69246);})()))){(void)(([&]()->V{V _callee69254=this->_v_68943_fail.get();return j::call(_callee69254,j::Args{([&]()->V{std::u16string _text69250;_text69250+=u"effect takes \"glint\", \"type\" or \"still\", not ";_text69250+=j::string(([&]()->V{V _receiver69251=j::builtin("JSON");V _method69252=this->_literals[26];V _method=j::get(_receiver69251,_method69252);j::Args _params69253=j::Args{_v_69016_effect.get()};return j::call(_method,_params69253,_receiver69251);})());_text69250+=u"";return V(std::move(_text69250));})()});})());
}
_v_69017_gap.get()=([&]()->V{V _logical69255=([&]()->V{V _callee69256=this->_v_68946_whole.get();return j::call(_callee69256,j::Args{j::get(_v_69013_options.get(),this->_literals[27]),this->_literals[27],V(0.0)});})();return j::nullish(_logical69255)?V(2.0):_logical69255;})();
_v_69018_shade.get()=j::get(this->_v_68932_shadows.get(),this->_literals[28]);
if(j::truth(([&]()->V{V _lhs69257=j::get(_v_69013_options.get(),this->_literals[29]);V _rhs69258=this->_literals[30];return V(j::equal(_lhs69257,_rhs69258,true));})())){(void)((_v_69018_shade.get()=V::null()));
}else {if(j::truth(([&]()->V{V _lhs69260=j::get(_v_69013_options.get(),this->_literals[29]);V _rhs69261=j::builtin("undefined");return V(!j::equal(_lhs69260,_rhs69261,true));})())){
(void)((_v_69018_shade.get()=(j::truth(([&]()->V{V _receiver69263=j::builtin("Object");V _method69264=this->_literals[2];V _method=j::get(_receiver69263,_method69264);j::Args _params69265=j::Args{this->_v_68932_shadows.get(),j::get(_v_69013_options.get(),this->_literals[29])};return j::call(_method,_params69265,_receiver69263);})())?j::get(this->_v_68932_shadows.get(),j::get(_v_69013_options.get(),this->_literals[29])):j::get(_v_69013_options.get(),this->_literals[29]))));
if(j::truth(([&]()->V{V _logical69266=([&]()->V{V _logical69267=([&]()->V{V _lhs69268=j::unary("typeof",_v_69018_shade.get());V _rhs69269=this->_literals[31];return V(!j::equal(_lhs69268,_rhs69269,true));})();return !j::truth(_logical69267)?([&]()->V{V _lhs69270=j::get(([&]()->V{j::Args _array69272;for(const auto &_value:j::elements(_v_69018_shade.get()))_array69272.push_back(_value);return j::array(std::move(_array69272));})(),this->_literals[13]);V _rhs69271=V(16.0);return V(!j::equal(_lhs69270,_rhs69271,true));})():_logical69267;})();return !j::truth(_logical69266)?([&]()->V{V _receiver69273=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f]","");V _method69274=this->_literals[32];V _method=j::get(_receiver69273,_method69274);j::Args _params69275=j::Args{_v_69018_shade.get()};return j::call(_method,_params69275,_receiver69273);})():_logical69266;})())){(void)(([&]()->V{V _callee69287=this->_v_68943_fail.get();return j::call(_callee69287,j::Args{([&]()->V{std::u16string _text69276;_text69276+=u"shadow takes ";_text69276+=j::string(([&]()->V{V _receiver69277=([&]()->V{j::Args _array69280;for(const auto &_value:j::elements(([&]()->V{V _receiver69281=j::builtin("Object");V _method69282=this->_literals[3];V _method=j::get(_receiver69281,_method69282);j::Args _params69283=j::Args{this->_v_68932_shadows.get()};return j::call(_method,_params69283,_receiver69281);})()))_array69280.push_back(_value);_array69280.push_back(this->_literals[30]);return j::array(std::move(_array69280));})();V _method69278=this->_literals[10];V _method=j::get(_receiver69277,_method69278);j::Args _params69279=j::Args{this->_literals[33]};return j::call(_method,_params69279,_receiver69277);})());_text69276+=u", or 16 characters of your own, not ";_text69276+=j::string(([&]()->V{V _receiver69284=j::builtin("JSON");V _method69285=this->_literals[26];V _method=j::get(_receiver69284,_method69285);j::Args _params69286=j::Args{j::get(_v_69013_options.get(),this->_literals[29])};return j::call(_method,_params69286,_receiver69284);})());_text69276+=u"";return V(std::move(_text69276));})()});})());
}

}

}
_v_69019_joins=(j::truth(([&]()->V{V _lhs69288=_v_69018_shade.get();V _rhs69289=V::null();return V(j::equal(_lhs69288,_rhs69289,true));})())?([&]()->V{j::Args _array69290;return j::array(std::move(_array69290));})():([&]()->V{j::Args _array69291;for(const auto &_value:j::elements(_v_69018_shade.get()))_array69291.push_back(_value);return j::array(std::move(_array69291));})());
_v_69020_h=j::get(_v_69014_font,this->_literals[34]);
_v_69021_span=j::function([=](const j::Args &_args_fn69022,const V &_receiver_fn69022,const V &_self_fn69022) mutable ->V{
j::Cell _v_69023_s;
_v_69023_s.get()=_args_fn69022[0];
return ([&]()->V{V _lhs69292=([&]()->V{V _lhs69294=([&]()->V{V _receiver69300=_v_69015_glyphs.get();V _method69301=this->_literals[35];V _method=j::get(_receiver69300,_method69301);j::Args _params69302=j::Args{j::function([=](const j::Args &_args_fn69024,const V &_receiver_fn69024,const V &_self_fn69024) mutable ->V{
V _v_69025_w;
V _v_69026_g;
_v_69025_w=_args_fn69024[0];
_v_69026_g=_args_fn69024[1];
return ([&]()->V{V _lhs69296=_v_69025_w;V _rhs69297=([&]()->V{V _lhs69298=j::get(j::get(_v_69026_g,V(0.0)),this->_literals[13]);V _rhs69299=_v_69023_s.get();return V(j::number(_lhs69298)*j::number(_rhs69299));})();return j::binary("+",_lhs69296,_rhs69297);})();
return V{};
},2),V(0.0)};return j::call(_method,_params69302,_receiver69300);})();V _rhs69295=([&]()->V{V _lhs69303=_v_69017_gap.get();V _rhs69304=([&]()->V{V _lhs69305=j::get(_v_69015_glyphs.get(),this->_literals[13]);V _rhs69306=V(1.0);return V(j::number(_lhs69305)-j::number(_rhs69306));})();return V(j::number(_lhs69303)*j::number(_rhs69304));})();return j::binary("+",_lhs69294,_rhs69295);})();V _rhs69293=(j::truth(_v_69018_shade.get())?V(1.0):V(0.0));return j::binary("+",_lhs69292,_rhs69293);})();
return V{};
},1);
_v_69027_pad=j::get(_v_69013_options.get(),this->_literals[36]);
_v_69028_pads=(j::truth(([&]()->V{V _logical69307=([&]()->V{V _lhs69308=_v_69027_pad;V _rhs69309=j::builtin("undefined");return V(j::equal(_lhs69308,_rhs69309,true));})();return !j::truth(_logical69307)?([&]()->V{V _lhs69310=j::unary("typeof",_v_69027_pad);V _rhs69311=this->_literals[37];return V(j::equal(_lhs69310,_rhs69311,true));})():_logical69307;})())?([&]()->V{j::Args _array69312;_array69312.push_back(([&]()->V{V _logical69313=_v_69027_pad;return j::nullish(_logical69313)?V(0.0):_logical69313;})());_array69312.push_back(([&]()->V{V _logical69314=_v_69027_pad;return j::nullish(_logical69314)?V(0.0):_logical69314;})());return j::array(std::move(_array69312));})():(j::truth(([&]()->V{V _logical69315=([&]()->V{V _receiver69316=j::builtin("Array");V _method69317=this->_literals[38];V _method=j::get(_receiver69316,_method69317);j::Args _params69318=j::Args{_v_69027_pad};return j::call(_method,_params69318,_receiver69316);})();return j::truth(_logical69315)?([&]()->V{V _lhs69319=j::get(_v_69027_pad,this->_literals[13]);V _rhs69320=V(2.0);return V(j::equal(_lhs69319,_rhs69320,true));})():_logical69315;})())?_v_69027_pad:([&]()->V{V _callee69325=this->_v_68943_fail.get();return j::call(_callee69325,j::Args{([&]()->V{std::u16string _text69321;_text69321+=u"pad takes a number, or [rows, columns], not ";_text69321+=j::string(([&]()->V{V _receiver69322=j::builtin("JSON");V _method69323=this->_literals[26];V _method=j::get(_receiver69322,_method69323);j::Args _params69324=j::Args{_v_69027_pad};return j::call(_method,_params69324,_receiver69322);})());_text69321+=u"";return V(std::move(_text69321));})()});})()));
V _pattern69331=([&]()->V{V _receiver69328=_v_69028_pads;V _method69329=this->_literals[12];V _method=j::get(_receiver69328,_method69329);j::Args _params69330=j::Args{j::function([=](const j::Args &_args_fn69031,const V &_receiver_fn69031,const V &_self_fn69031) mutable ->V{
V _v_69032_p;
V _v_69033_i;
_v_69032_p=_args_fn69031[0];
_v_69033_i=_args_fn69031[1];
return ([&]()->V{V _logical69326=([&]()->V{V _callee69327=this->_v_68946_whole.get();return j::call(_callee69327,j::Args{_v_69032_p,(j::truth(_v_69033_i)?this->_literals[39]:this->_literals[36]),V(0.0)});})();return j::nullish(_logical69326)?V(0.0):_logical69326;})();
return V{};
},2)};return j::call(_method,_params69330,_receiver69328);})();
_v_69029_padY=j::get(_pattern69331,V(0));
_v_69030_padX=j::get(_pattern69331,V(1));
_v_69034_tall=([&]()->V{V _lhs69332=_v_69020_h;V _rhs69333=(j::truth(_v_69018_shade.get())?V(1.0):V(0.0));return j::binary("+",_lhs69332,_rhs69333);})();
_v_69035_s.get()=([&]()->V{V _logical69334=([&]()->V{V _callee69335=this->_v_68946_whole.get();return j::call(_callee69335,j::Args{j::get(_v_69013_options.get(),this->_literals[40]),this->_literals[40],V(1.0)});})();return j::nullish(_logical69334)?V(2.0):_logical69334;})();
_v_69036_max=([&]()->V{V _callee69336=this->_v_68951_positive.get();return j::call(_callee69336,j::Args{j::get(_v_69013_options.get(),this->_literals[41]),this->_literals[41]});})();
if(j::truth(j::get(_v_69013_options.get(),this->_literals[42]))){
if(j::truth(([&]()->V{V _logical69337=([&]()->V{V _lhs69338=j::get(j::get(_v_69013_options.get(),this->_literals[42]),this->_literals[43]);V _rhs69339=j::builtin("undefined");return V(j::equal(_lhs69338,_rhs69339,true));})();return !j::truth(_logical69337)?([&]()->V{V _lhs69340=j::get(j::get(_v_69013_options.get(),this->_literals[42]),this->_literals[44]);V _rhs69341=j::builtin("undefined");return V(j::equal(_lhs69340,_rhs69341,true));})():_logical69337;})())){(void)(([&]()->V{V _callee69342=this->_v_68943_fail.get();return j::call(_callee69342,j::Args{this->_literals[45]});})());
}
(void)((_v_69037_cols.get()=([&]()->V{V _callee69344=this->_v_68946_whole.get();return j::call(_callee69344,j::Args{j::get(j::get(_v_69013_options.get(),this->_literals[42]),this->_literals[43]),this->_literals[46],V(1.0)});})()));
(void)((_v_69038_rows.get()=([&]()->V{V _callee69346=this->_v_68946_whole.get();return j::call(_callee69346,j::Args{j::get(j::get(_v_69013_options.get(),this->_literals[42]),this->_literals[44]),this->_literals[47],V(1.0)});})()));
while(j::truth(([&]()->V{V _logical69347=([&]()->V{V _lhs69348=_v_69035_s.get();V _rhs69349=V(1.0);return j::binary(">",_lhs69348,_rhs69349);})();return j::truth(_logical69347)?([&]()->V{V _lhs69350=([&]()->V{V _callee69352=_v_69021_span;return j::call(_callee69352,j::Args{_v_69035_s.get()});})();V _rhs69351=([&]()->V{V _lhs69353=_v_69037_cols.get();V _rhs69354=V(2.0);return V(j::number(_lhs69353)-j::number(_rhs69354));})();return j::binary(">",_lhs69350,_rhs69351);})():_logical69347;})())){(void)(j::increment(_v_69035_s.get(),-1,false));
}
(void)((_v_69039_x0=([&]()->V{V _receiver69369=j::builtin("Math");V _method69370=this->_literals[41];V _method=j::get(_receiver69369,_method69370);j::Args _params69371=j::Args{V(0.0),([&]()->V{V _number69361=([&]()->V{V _lhs69362=([&]()->V{V _lhs69364=_v_69037_cols.get();V _rhs69365=([&]()->V{V _callee69366=_v_69021_span;return j::call(_callee69366,j::Args{_v_69035_s.get()});})();return V(j::number(_lhs69364)-j::number(_rhs69365));})();V _rhs69363=V(2.0);return V(j::number(_lhs69362)/j::number(_rhs69363));})();return V(std::floor(j::number(_number69361)));})()};return j::call(_method,_params69371,_receiver69369);})()));
(void)((_v_69040_y0.get()=([&]()->V{V _number69377=([&]()->V{V _lhs69378=([&]()->V{V _lhs69380=_v_69038_rows.get();V _rhs69381=_v_69034_tall;return V(j::number(_lhs69380)-j::number(_rhs69381));})();V _rhs69379=V(2.0);return V(j::number(_lhs69378)/j::number(_rhs69379));})();return V(std::floor(j::number(_number69377)));})()));

}
else {
if(j::truth(([&]()->V{V _lhs69382=_v_69036_max;V _rhs69383=j::builtin("undefined");return V(!j::equal(_lhs69382,_rhs69383,true));})())){while(j::truth(([&]()->V{V _logical69384=([&]()->V{V _lhs69385=_v_69035_s.get();V _rhs69386=V(1.0);return j::binary(">",_lhs69385,_rhs69386);})();return j::truth(_logical69384)?([&]()->V{V _lhs69387=([&]()->V{V _lhs69389=([&]()->V{V _callee69391=_v_69021_span;return j::call(_callee69391,j::Args{_v_69035_s.get()});})();V _rhs69390=([&]()->V{V _lhs69392=V(2.0);V _rhs69393=_v_69030_padX;return V(j::number(_lhs69392)*j::number(_rhs69393));})();return j::binary("+",_lhs69389,_rhs69390);})();V _rhs69388=_v_69036_max;return j::binary(">",_lhs69387,_rhs69388);})():_logical69384;})())){(void)(j::increment(_v_69035_s.get(),-1,false));
}
}
(void)((_v_69037_cols.get()=([&]()->V{V _lhs69395=([&]()->V{V _callee69397=_v_69021_span;return j::call(_callee69397,j::Args{_v_69035_s.get()});})();V _rhs69396=([&]()->V{V _lhs69398=V(2.0);V _rhs69399=_v_69030_padX;return V(j::number(_lhs69398)*j::number(_rhs69399));})();return j::binary("+",_lhs69395,_rhs69396);})()));
(void)((_v_69038_rows.get()=([&]()->V{V _lhs69401=_v_69034_tall;V _rhs69402=([&]()->V{V _lhs69403=V(2.0);V _rhs69404=_v_69029_padY;return V(j::number(_lhs69403)*j::number(_rhs69404));})();return j::binary("+",_lhs69401,_rhs69402);})()));
(void)((_v_69039_x0=_v_69030_padX));
(void)((_v_69040_y0.get()=_v_69029_padY));

}

_v_69041_ink.get()=([&]()->V{V _callee69409=j::builtin("Uint8Array");return j::construct(_callee69409,j::Args{([&]()->V{V _lhs69407=_v_69037_cols.get();V _rhs69408=_v_69038_rows.get();return V(j::number(_lhs69407)*j::number(_rhs69408));})()});})();
_v_69042_x.get()=_v_69039_x0;
{for(const auto &_item69410:j::elements(_v_69015_glyphs.get())){V _v_69043_g;
_v_69043_g=_item69410;
{
(void)(([&]()->V{V _receiver69445=_v_69043_g;V _method69446=this->_literals[49];V _method=j::get(_receiver69445,_method69446);j::Args _params69447=j::Args{j::function([=](const j::Args &_args_fn69044,const V &_receiver_fn69044,const V &_self_fn69044) mutable ->V{
V _v_69045_line;
V _v_69046_y;
_v_69045_line=_args_fn69044[0];
_v_69046_y=_args_fn69044[1];
{
{V _v_69047_i;
_v_69047_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs69411=_v_69047_i;V _rhs69412=j::get(_v_69045_line,this->_literals[13]);return j::binary("<",_lhs69411,_rhs69412);})());(void)(j::increment(_v_69047_i,1,false))){if(j::truth(([&]()->V{V _lhs69413=j::get(_v_69045_line,_v_69047_i);V _rhs69414=this->_literals[48];return V(j::equal(_lhs69413,_rhs69414,true));})())){{V _v_69048_k;
_v_69048_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs69415=_v_69048_k;V _rhs69416=_v_69035_s.get();return j::binary("<",_lhs69415,_rhs69416);})());(void)(j::increment(_v_69048_k,1,false))){if(j::truth(([&]()->V{V _logical69417=([&]()->V{V _lhs69418=([&]()->V{V _lhs69420=([&]()->V{V _lhs69422=_v_69042_x.get();V _rhs69423=([&]()->V{V _lhs69424=_v_69047_i;V _rhs69425=_v_69035_s.get();return V(j::number(_lhs69424)*j::number(_rhs69425));})();return j::binary("+",_lhs69422,_rhs69423);})();V _rhs69421=_v_69048_k;return j::binary("+",_lhs69420,_rhs69421);})();V _rhs69419=_v_69037_cols.get();return j::binary("<",_lhs69418,_rhs69419);})();return j::truth(_logical69417)?([&]()->V{V _lhs69426=([&]()->V{V _lhs69428=_v_69040_y0.get();V _rhs69429=_v_69046_y;return j::binary("+",_lhs69428,_rhs69429);})();V _rhs69427=_v_69038_rows.get();return j::binary("<",_lhs69426,_rhs69427);})():_logical69417;})())){(void)(([&]()->V{V _base69431=_v_69041_ink.get();V _key69432=([&]()->V{V _lhs69433=([&]()->V{V _lhs69435=([&]()->V{V _lhs69437=([&]()->V{V _lhs69439=([&]()->V{V _lhs69441=_v_69040_y0.get();V _rhs69442=_v_69046_y;return j::binary("+",_lhs69441,_rhs69442);})();V _rhs69440=_v_69037_cols.get();return V(j::number(_lhs69439)*j::number(_rhs69440));})();V _rhs69438=_v_69042_x.get();return j::binary("+",_lhs69437,_rhs69438);})();V _rhs69436=([&]()->V{V _lhs69443=_v_69047_i;V _rhs69444=_v_69035_s.get();return V(j::number(_lhs69443)*j::number(_rhs69444));})();return j::binary("+",_lhs69435,_rhs69436);})();V _rhs69434=_v_69048_k;return j::binary("+",_lhs69433,_rhs69434);})();V _assign69430=V(1.0);return j::put(_base69431,_key69432,_assign69430);})());
}
}}
}
}}

}

return V{};
},2)};return j::call(_method,_params69447,_receiver69445);})());
(void)((_v_69042_x.get()=j::binary("+",_v_69042_x.get(),([&]()->V{V _lhs69449=([&]()->V{V _lhs69451=j::get(j::get(_v_69043_g,V(0.0)),this->_literals[13]);V _rhs69452=_v_69035_s.get();return V(j::number(_lhs69451)*j::number(_rhs69452));})();V _rhs69450=_v_69017_gap.get();return j::binary("+",_lhs69449,_rhs69450);})())));

}
}}
_v_69049_at=j::function([=](const j::Args &_args_fn69050,const V &_receiver_fn69050,const V &_self_fn69050) mutable ->V{
V _v_69051_c;
V _v_69052_r;
_v_69051_c=_args_fn69050[0];
_v_69052_r=_args_fn69050[1];
return (j::truth(([&]()->V{V _logical69453=([&]()->V{V _logical69454=([&]()->V{V _logical69455=([&]()->V{V _lhs69456=_v_69051_c;V _rhs69457=V(0.0);return j::binary(">=",_lhs69456,_rhs69457);})();return j::truth(_logical69455)?([&]()->V{V _lhs69458=_v_69051_c;V _rhs69459=_v_69037_cols.get();return j::binary("<",_lhs69458,_rhs69459);})():_logical69455;})();return j::truth(_logical69454)?([&]()->V{V _lhs69460=_v_69052_r;V _rhs69461=V(0.0);return j::binary(">=",_lhs69460,_rhs69461);})():_logical69454;})();return j::truth(_logical69453)?([&]()->V{V _lhs69462=_v_69052_r;V _rhs69463=_v_69038_rows.get();return j::binary("<",_lhs69462,_rhs69463);})():_logical69453;})())?j::get(_v_69041_ink.get(),([&]()->V{V _lhs69464=([&]()->V{V _lhs69466=_v_69052_r;V _rhs69467=_v_69037_cols.get();return V(j::number(_lhs69466)*j::number(_rhs69467));})();V _rhs69465=_v_69051_c;return j::binary("+",_lhs69464,_rhs69465);})()):V(0.0));
return V{};
},2);
_v_69053_grid.get()=([&]()->V{j::Args _array69468;return j::array(std::move(_array69468));})();
{V _v_69054_r;
_v_69054_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs69469=_v_69054_r;V _rhs69470=_v_69038_rows.get();return j::binary("<",_lhs69469,_rhs69470);})());(void)(j::increment(_v_69054_r,1,false))){
{V _v_69055_c;
_v_69055_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs69471=_v_69055_c;V _rhs69472=_v_69037_cols.get();return j::binary("<",_lhs69471,_rhs69472);})());(void)(j::increment(_v_69055_c,1,false))){
V _v_69056_a;
V _v_69057_b;
V _v_69058_d;
V _v_69059_edges;
if(j::truth(([&]()->V{V _callee69473=_v_69049_at;return j::call(_callee69473,j::Args{_v_69055_c,_v_69054_r});})())){
(void)(([&]()->V{V _receiver69474=_v_69053_grid.get();V _method69475=this->_literals[50];V _method=j::get(_receiver69474,_method69475);j::Args _params69476=j::Args{V::null()};return j::call(_method,_params69476,_receiver69474);})());
continue;

}

if(j::truth(j::unary("!",_v_69018_shade.get()))){
(void)(([&]()->V{V _receiver69477=_v_69053_grid.get();V _method69478=this->_literals[50];V _method=j::get(_receiver69477,_method69478);j::Args _params69479=j::Args{this->_literals[51]};return j::call(_method,_params69479,_receiver69477);})());
continue;

}

_v_69056_a=([&]()->V{V _callee69484=_v_69049_at;return j::call(_callee69484,j::Args{([&]()->V{V _lhs69480=_v_69055_c;V _rhs69481=V(1.0);return V(j::number(_lhs69480)-j::number(_rhs69481));})(),([&]()->V{V _lhs69482=_v_69054_r;V _rhs69483=V(1.0);return V(j::number(_lhs69482)-j::number(_rhs69483));})()});})();
_v_69057_b=([&]()->V{V _callee69487=_v_69049_at;return j::call(_callee69487,j::Args{_v_69055_c,([&]()->V{V _lhs69485=_v_69054_r;V _rhs69486=V(1.0);return V(j::number(_lhs69485)-j::number(_rhs69486));})()});})();
_v_69058_d=([&]()->V{V _callee69490=_v_69049_at;return j::call(_callee69490,j::Args{([&]()->V{V _lhs69488=_v_69055_c;V _rhs69489=V(1.0);return V(j::number(_lhs69488)-j::number(_rhs69489));})(),_v_69054_r});})();
_v_69059_edges=([&]()->V{V _lhs69491=([&]()->V{V _lhs69493=([&]()->V{V _lhs69495=(j::truth(([&]()->V{V _lhs69497=_v_69056_a;V _rhs69498=_v_69057_b;return V(!j::equal(_lhs69497,_rhs69498,true));})())?V(1.0):V(0.0));V _rhs69496=(j::truth(_v_69058_d)?V(2.0):V(0.0));return V(int(j::i32(_lhs69495)|j::i32(_rhs69496)));})();V _rhs69494=(j::truth(([&]()->V{V _lhs69499=_v_69056_a;V _rhs69500=_v_69058_d;return V(!j::equal(_lhs69499,_rhs69500,true));})())?V(4.0):V(0.0));return V(int(j::i32(_lhs69493)|j::i32(_rhs69494)));})();V _rhs69492=(j::truth(_v_69057_b)?V(8.0):V(0.0));return V(int(j::i32(_lhs69491)|j::i32(_rhs69492)));})();
(void)(([&]()->V{V _receiver69505=_v_69053_grid.get();V _method69506=this->_literals[50];V _method=j::get(_receiver69505,_method69506);j::Args _params69507=j::Args{j::get(_v_69019_joins,(j::truth(([&]()->V{V _lhs69501=_v_69059_edges;V _rhs69502=V(15.0);return V(j::equal(_lhs69501,_rhs69502,true));})())?([&]()->V{V _lhs69503=V(2.0);V _rhs69504=V(8.0);return V(int(j::i32(_lhs69503)|j::i32(_rhs69504)));})():_v_69059_edges))};return j::call(_method,_params69507,_receiver69505);})());

}
}

}
}
_v_69060_both=j::function([=](const j::Args &_args_fn69061,const V &_receiver_fn69061,const V &_self_fn69061) mutable ->V{
V _v_69062_v;
V _v_69063_dark;
V _v_69064_light;
_v_69062_v=_args_fn69061[0];
_v_69063_dark=_args_fn69061[1];
_v_69064_light=_args_fn69061[2];
return (j::truth(([&]()->V{V _lhs69508=j::unary("typeof",_v_69062_v);V _rhs69509=this->_literals[31];return V(j::equal(_lhs69508,_rhs69509,true));})())?([&]()->V{V _obj69510=j::object();j::put(_obj69510,this->_literals[52],_v_69062_v);j::put(_obj69510,this->_literals[53],_v_69062_v);return _obj69510;})():([&]()->V{V _obj69511=j::object();j::put(_obj69511,this->_literals[52],([&]()->V{V _logical69512=([&]()->V{V _chain69513=_v_69062_v;if(j::nullish(_chain69513))return V{};V _chain69514=j::get(_chain69513,this->_literals[52]);return _chain69514;})();return j::nullish(_logical69512)?_v_69063_dark:_logical69512;})());j::put(_obj69511,this->_literals[53],([&]()->V{V _logical69515=([&]()->V{V _chain69516=_v_69062_v;if(j::nullish(_chain69516))return V{};V _chain69517=j::get(_chain69516,this->_literals[53]);return _chain69517;})();return j::nullish(_logical69515)?_v_69064_light:_logical69515;})());return _obj69511;})());
return V{};
},3);
_v_69065_fill.get()=([&]()->V{V _callee69519=_v_69060_both;return j::call(_callee69519,j::Args{([&]()->V{V _callee69518=this->_v_68955_chars.get();return j::call(_callee69518,j::Args{j::get(_v_69013_options.get(),this->_literals[54]),this->_literals[54],V(1.0)});})(),this->_literals[55],this->_literals[56]});})();
_v_69066_gl=([&]()->V{V _logical69520=j::get(_v_69013_options.get(),this->_literals[22]);return j::nullish(_logical69520)?([&]()->V{V _obj69521=j::object();return _obj69521;})():_logical69520;})();
_v_69067_shine.get()=([&]()->V{V _callee69523=_v_69060_both;return j::call(_callee69523,j::Args{([&]()->V{V _callee69522=this->_v_68955_chars.get();return j::call(_callee69522,j::Args{j::get(_v_69066_gl,this->_literals[57]),this->_literals[58],V(2.0)});})(),this->_literals[59],this->_literals[60]});})();
_v_69068_speed=([&]()->V{V _logical69524=([&]()->V{V _callee69525=this->_v_68951_positive.get();return j::call(_callee69525,j::Args{j::get(_v_69013_options.get(),this->_literals[61]),this->_literals[61]});})();return j::nullish(_logical69524)?V(1.0):_logical69524;})();
_v_69069_firstAt=([&]()->V{V _logical69526=j::get(_v_69066_gl,this->_literals[62]);return j::nullish(_logical69526)?V(0.5):_logical69526;})();
if(j::truth(([&]()->V{V _logical69527=([&]()->V{V _lhs69528=j::unary("typeof",_v_69069_firstAt);V _rhs69529=this->_literals[37];return V(!j::equal(_lhs69528,_rhs69529,true));})();return !j::truth(_logical69527)?j::unary("!",([&]()->V{V _receiver69530=j::builtin("Number");V _method69531=this->_literals[63];V _method=j::get(_receiver69530,_method69531);j::Args _params69532=j::Args{_v_69069_firstAt};return j::call(_method,_params69532,_receiver69530);})()):_logical69527;})())){(void)(([&]()->V{V _callee69535=this->_v_68943_fail.get();return j::call(_callee69535,j::Args{([&]()->V{std::u16string _text69533;_text69533+=u"glint.first takes a number of seconds, not ";_text69533+=j::string(([&]()->V{V _callee69534=j::builtin("String");return j::call(_callee69534,j::Args{_v_69069_firstAt});})());_text69533+=u"";return V(std::move(_text69533));})()});})());
}
_v_69070_first.get()=([&]()->V{V _lhs69536=_v_69069_firstAt;V _rhs69537=_v_69068_speed;return V(j::number(_lhs69536)/j::number(_rhs69537));})();
_v_69071_sweep.get()=([&]()->V{V _lhs69538=([&]()->V{V _logical69540=([&]()->V{V _callee69541=this->_v_68951_positive.get();return j::call(_callee69541,j::Args{j::get(_v_69066_gl,this->_literals[64]),this->_literals[65]});})();return j::nullish(_logical69540)?V(2.4):_logical69540;})();V _rhs69539=_v_69068_speed;return V(j::number(_lhs69538)/j::number(_rhs69539));})();
_v_69072_every.get()=([&]()->V{V _lhs69542=([&]()->V{V _logical69544=([&]()->V{V _callee69545=this->_v_68951_positive.get();return j::call(_callee69545,j::Args{j::get(_v_69066_gl,this->_literals[66]),this->_literals[67]});})();return j::nullish(_logical69544)?V(3.2):_logical69544;})();V _rhs69543=_v_69068_speed;return V(j::number(_lhs69542)/j::number(_rhs69543));})();
_v_69073_width.get()=([&]()->V{V _logical69546=([&]()->V{V _callee69547=this->_v_68951_positive.get();return j::call(_callee69547,j::Args{j::get(_v_69066_gl,this->_literals[68]),this->_literals[69]});})();return j::nullish(_logical69546)?V(2.4):_logical69546;})();
_v_69074_slant.get()=([&]()->V{V _logical69548=j::get(_v_69066_gl,this->_literals[70]);return j::nullish(_logical69548)?V(1.2):_logical69548;})();
if(j::truth(([&]()->V{V _logical69549=([&]()->V{V _lhs69550=j::unary("typeof",_v_69074_slant.get());V _rhs69551=this->_literals[37];return V(!j::equal(_lhs69550,_rhs69551,true));})();return !j::truth(_logical69549)?j::unary("!",([&]()->V{V _receiver69552=j::builtin("Number");V _method69553=this->_literals[63];V _method=j::get(_receiver69552,_method69553);j::Args _params69554=j::Args{_v_69074_slant.get()};return j::call(_method,_params69554,_receiver69552);})()):_logical69549;})())){(void)(([&]()->V{V _callee69557=this->_v_68943_fail.get();return j::call(_callee69557,j::Args{([&]()->V{std::u16string _text69555;_text69555+=u"glint.slant takes a number, not ";_text69555+=j::string(([&]()->V{V _callee69556=j::builtin("String");return j::call(_callee69556,j::Args{_v_69074_slant.get()});})());_text69555+=u"";return V(std::move(_text69555));})()});})());
}
_v_69075_step.get()=([&]()->V{V _lhs69558=([&]()->V{V _logical69560=([&]()->V{V _callee69564=this->_v_68951_positive.get();return j::call(_callee69564,j::Args{([&]()->V{V _chain69561=_v_69013_options.get();V _chain69562=j::get(_chain69561,this->_literals[23]);if(j::nullish(_chain69562))return V{};V _chain69563=j::get(_chain69562,this->_literals[71]);return _chain69563;})(),this->_literals[72]});})();return j::nullish(_logical69560)?([&]()->V{V _lhs69565=V(2.0);V _rhs69566=V(15.0);return V(j::number(_lhs69565)/j::number(_rhs69566));})():_logical69560;})();V _rhs69559=_v_69068_speed;return V(j::number(_lhs69558)/j::number(_rhs69559));})();
_v_69076_rest=(j::truth(([&]()->V{V _lhs69567=_v_69072_every.get();V _rhs69568=_v_69071_sweep.get();return j::binary("<=",_lhs69567,_rhs69568);})())?_v_69070_first.get():(j::truth(([&]()->V{V _lhs69569=([&]()->V{V _lhs69571=([&]()->V{V _lhs69573=([&]()->V{V _lhs69575=j::unary("-",_v_69070_first.get());V _rhs69576=_v_69072_every.get();return V(std::fmod(j::number(_lhs69575),j::number(_rhs69576)));})();V _rhs69574=_v_69072_every.get();return j::binary("+",_lhs69573,_rhs69574);})();V _rhs69572=_v_69072_every.get();return V(std::fmod(j::number(_lhs69571),j::number(_rhs69572)));})();V _rhs69570=_v_69071_sweep.get();return j::binary(">=",_lhs69569,_rhs69570);})())?V(0.0):([&]()->V{V _lhs69577=([&]()->V{V _lhs69579=([&]()->V{V _lhs69581=_v_69070_first.get();V _rhs69582=_v_69071_sweep.get();return j::binary("+",_lhs69581,_rhs69582);})();V _rhs69580=([&]()->V{V _lhs69583=([&]()->V{V _lhs69585=_v_69072_every.get();V _rhs69586=_v_69071_sweep.get();return V(j::number(_lhs69585)-j::number(_rhs69586));})();V _rhs69584=V(2.0);return V(j::number(_lhs69583)/j::number(_rhs69584));})();return j::binary("+",_lhs69579,_rhs69580);})();V _rhs69578=_v_69072_every.get();return V(std::fmod(j::number(_lhs69577),j::number(_rhs69578)));})()));
_v_69077_ends.get()=([&]()->V{j::Args _array69587;return j::array(std::move(_array69587));})();
{V _v_69078_i;
V _v_69079_e;
_v_69078_i=V(0.0);
_v_69079_e=_v_69039_x0;
for(;j::truth(([&]()->V{V _lhs69588=_v_69078_i;V _rhs69589=j::get(_v_69015_glyphs.get(),this->_literals[13]);return j::binary("<",_lhs69588,_rhs69589);})());(void)(j::increment(_v_69078_i,1,false))){(void)(([&]()->V{V _receiver69597=_v_69077_ends.get();V _method69598=this->_literals[50];V _method=j::get(_receiver69597,_method69598);j::Args _params69599=j::Args{([&]()->V{V _lhs69590=(_v_69079_e=j::binary("+",_v_69079_e,([&]()->V{V _lhs69593=([&]()->V{V _lhs69595=j::get(j::get(j::get(_v_69015_glyphs.get(),_v_69078_i),V(0.0)),this->_literals[13]);V _rhs69596=_v_69035_s.get();return V(j::number(_lhs69595)*j::number(_rhs69596));})();V _rhs69594=(j::truth(_v_69078_i)?_v_69017_gap.get():V(0.0));return j::binary("+",_lhs69593,_rhs69594);})()));V _rhs69591=(j::truth(_v_69018_shade.get())?V(1.0):V(0.0));return j::binary("+",_lhs69590,_rhs69591);})()};return j::call(_method,_params69599,_receiver69597);})());
}}
_v_69080_colored=([&]()->V{V _logical69600=([&]()->V{V _logical69601=([&]()->V{V _lhs69602=j::get(_v_69013_options.get(),this->_literals[73]);V _rhs69603=j::builtin("undefined");return V(!j::equal(_lhs69602,_rhs69603,true));})();return j::truth(_logical69601)?([&]()->V{V _lhs69604=j::get(_v_69013_options.get(),this->_literals[73]);V _rhs69605=V::null();return V(!j::equal(_lhs69604,_rhs69605,true));})():_logical69601;})();return !j::truth(_logical69600)?([&]()->V{V _logical69606=([&]()->V{V _lhs69607=j::get(_v_69013_options.get(),this->_literals[74]);V _rhs69608=j::builtin("undefined");return V(!j::equal(_lhs69607,_rhs69608,true));})();return j::truth(_logical69606)?([&]()->V{V _lhs69609=j::get(_v_69013_options.get(),this->_literals[74]);V _rhs69610=V::null();return V(!j::equal(_lhs69609,_rhs69610,true));})():_logical69606;})():_logical69600;})();
{for(const auto &_item69611:j::elements(([&]()->V{j::Args _array69612;_array69612.push_back(this->_literals[53]);_array69612.push_back(this->_literals[52]);return j::array(std::move(_array69612));})())){V _v_69081_theme;
_v_69081_theme=_item69611;
{
V _v_69082_c;
_v_69082_c=([&]()->V{V _callee69614=this->_v_69006_pick.get();return j::call(_callee69614,j::Args{([&]()->V{V _logical69613=j::get(_v_69013_options.get(),this->_literals[73]);return j::nullish(_logical69613)?j::builtin("undefined"):_logical69613;})(),_v_69081_theme});})();
if(j::truth(([&]()->V{V _logical69615=([&]()->V{V _receiver69616=j::builtin("Array");V _method69617=this->_literals[38];V _method=j::get(_receiver69616,_method69617);j::Args _params69618=j::Args{_v_69082_c};return j::call(_method,_params69618,_receiver69616);})();return j::truth(_logical69615)?([&]()->V{V _lhs69619=j::get(_v_69082_c,this->_literals[13]);V _rhs69620=V(0.0);return V(j::equal(_lhs69619,_rhs69620,true));})():_logical69615;})())){(void)(([&]()->V{V _callee69621=this->_v_68943_fail.get();return j::call(_callee69621,j::Args{this->_literals[75]});})());
}

}
}}
_v_69083_steps.get()=([&]()->V{V _callee69622=j::function([=](const j::Args &_args_fn69084,const V &_receiver_fn69084,const V &_self_fn69084) mutable ->V{
{
V _v_69085_c;
_v_69085_c=([&]()->V{j::Args _array69623;_array69623.push_back(([&]()->V{V _callee69624=this->_v_69006_pick.get();return j::call(_callee69624,j::Args{j::get(_v_69013_options.get(),this->_literals[73]),this->_literals[53]});})());_array69623.push_back(([&]()->V{V _callee69625=this->_v_69006_pick.get();return j::call(_callee69625,j::Args{j::get(_v_69013_options.get(),this->_literals[73]),this->_literals[52]});})());return j::array(std::move(_array69623));})();
return (j::truth(([&]()->V{V _receiver69632=_v_69085_c;V _method69633=this->_literals[8];V _method=j::get(_receiver69632,_method69633);j::Args _params69634=j::Args{j::function([=](const j::Args &_args_fn69086,const V &_receiver_fn69086,const V &_self_fn69086) mutable ->V{
V _v_69087_v;
_v_69087_v=_args_fn69086[0];
return ([&]()->V{V _logical69626=([&]()->V{V _receiver69627=j::builtin("Array");V _method69628=this->_literals[38];V _method=j::get(_receiver69627,_method69628);j::Args _params69629=j::Args{_v_69087_v};return j::call(_method,_params69629,_receiver69627);})();return j::truth(_logical69626)?([&]()->V{V _lhs69630=j::get(_v_69087_v,this->_literals[13]);V _rhs69631=V(1.0);return j::binary(">",_lhs69630,_rhs69631);})():_logical69626;})();
return V{};
},1)};return j::call(_method,_params69634,_receiver69632);})())?([&]()->V{V _receiver69642=j::builtin("Math");V _method69643=this->_literals[41];V _method=j::get(_receiver69642,_method69643);j::Args _params69644=j::Args{V(2.0),([&]()->V{V _receiver69637=j::builtin("Math");V _method69638=this->_literals[14];V _method=j::get(_receiver69637,_method69638);j::Args _params69639=j::Args{V(30.0),_v_69037_cols.get()};return j::call(_method,_params69639,_receiver69637);})()};return j::call(_method,_params69644,_receiver69642);})():V(1.0));

}

return V{};
},0);return j::call(_callee69622,j::Args{});})();
if(j::truth(_v_69080_colored)){
(void)((_v_69088_palette.get()=([&]()->V{j::Args _array69646;return j::array(std::move(_array69646));})()));
{for(const auto &_item69647:j::elements(([&]()->V{j::Args _array69648;_array69648.push_back(this->_literals[53]);_array69648.push_back(this->_literals[52]);return j::array(std::move(_array69648));})())){V _v_69089_theme;
_v_69089_theme=_item69647;
{
V _v_69090_c;
V _v_69091_stops;
V _v_69092_quiet;
_v_69090_c=([&]()->V{V _callee69650=this->_v_69006_pick.get();return j::call(_callee69650,j::Args{([&]()->V{V _logical69649=j::get(_v_69013_options.get(),this->_literals[73]);return j::nullish(_logical69649)?j::builtin("undefined"):_logical69649;})(),_v_69089_theme});})();
_v_69091_stops=(j::truth(([&]()->V{V _logical69651=([&]()->V{V _lhs69652=_v_69090_c;V _rhs69653=j::builtin("undefined");return V(j::equal(_lhs69652,_rhs69653,true));})();return !j::truth(_logical69651)?([&]()->V{V _lhs69654=_v_69090_c;V _rhs69655=V::null();return V(j::equal(_lhs69654,_rhs69655,true));})():_logical69651;})())?([&]()->V{j::Args _array69656;_array69656.push_back(j::get(this->_v_68933_INK.get(),_v_69089_theme));return j::array(std::move(_array69656));})():(j::truth(([&]()->V{V _lhs69657=j::unary("typeof",_v_69090_c);V _rhs69658=this->_literals[31];return V(j::equal(_lhs69657,_rhs69658,true));})())?([&]()->V{j::Args _array69659;_array69659.push_back(_v_69090_c);return j::array(std::move(_array69659));})():(j::truth(([&]()->V{V _receiver69660=j::builtin("Array");V _method69661=this->_literals[38];V _method=j::get(_receiver69660,_method69661);j::Args _params69662=j::Args{_v_69090_c};return j::call(_method,_params69662,_receiver69660);})())?([&]()->V{j::Args _array69663;for(const auto &_value:j::elements(_v_69090_c))_array69663.push_back(_value);return j::array(std::move(_array69663));})():([&]()->V{V _callee69668=this->_v_68943_fail.get();return j::call(_callee69668,j::Args{([&]()->V{std::u16string _text69664;_text69664+=u"a colour takes #rrggbb, not ";_text69664+=j::string(([&]()->V{V _receiver69665=j::builtin("JSON");V _method69666=this->_literals[26];V _method=j::get(_receiver69665,_method69666);j::Args _params69667=j::Args{_v_69090_c};return j::call(_method,_params69667,_receiver69665);})());_text69664+=u"";return V(std::move(_text69664));})()});})())));
_v_69092_quiet=([&]()->V{V _logical69669=([&]()->V{V _callee69671=this->_v_69006_pick.get();return j::call(_callee69671,j::Args{([&]()->V{V _logical69670=j::get(_v_69013_options.get(),this->_literals[74]);return j::nullish(_logical69670)?j::builtin("undefined"):_logical69670;})(),_v_69089_theme});})();return j::nullish(_logical69669)?j::get(this->_v_68934_QUIET.get(),_v_69089_theme):_logical69669;})();
{for(const auto &_item69672:j::elements(([&]()->V{j::Args _array69673;for(const auto &_value:j::elements(_v_69091_stops))_array69673.push_back(_value);_array69673.push_back(_v_69092_quiet);return j::array(std::move(_array69673));})())){V _v_69093_v;
_v_69093_v=_item69672;
if(j::truth(([&]()->V{V _logical69674=([&]()->V{V _lhs69675=j::unary("typeof",_v_69093_v);V _rhs69676=this->_literals[31];return V(!j::equal(_lhs69675,_rhs69676,true));})();return !j::truth(_logical69674)?j::unary("!",([&]()->V{V _receiver69677=this->_v_68935_HEX.get();V _method69678=this->_literals[32];V _method=j::get(_receiver69677,_method69678);j::Args _params69679=j::Args{_v_69093_v};return j::call(_method,_params69679,_receiver69677);})()):_logical69674;})())){(void)(([&]()->V{V _callee69684=this->_v_68943_fail.get();return j::call(_callee69684,j::Args{([&]()->V{std::u16string _text69680;_text69680+=u"a colour takes #rrggbb, not ";_text69680+=j::string(([&]()->V{V _receiver69681=j::builtin("JSON");V _method69682=this->_literals[26];V _method=j::get(_receiver69681,_method69682);j::Args _params69683=j::Args{_v_69093_v};return j::call(_method,_params69683,_receiver69681);})());_text69680+=u"";return V(std::move(_text69680));})()});})());
}
}}
(void)(([&]()->V{V _receiver69687=_v_69088_palette.get();V _method69688=this->_literals[50];V _method=j::get(_receiver69687,_method69688);j::Args _params69689=([&](){j::Args _args69685;_args69685.push_back(_v_69092_quiet);for(const auto &_v:j::elements(([&]()->V{V _callee69686=this->_v_68985_fade.get();return j::call(_callee69686,j::Args{_v_69091_stops,_v_69083_steps.get()});})()))_args69685.push_back(_v);return _args69685;})();return j::call(_method,_params69689,_receiver69687);})());

}
}}

}

_v_69094_half.get()=([&]()->V{V _lhs69690=_v_69083_steps.get();V _rhs69691=V(1.0);return j::binary("+",_lhs69690,_rhs69691);})();
_v_69095_lo.get()=_v_69039_x0;
_v_69096_hi.get()=([&]()->V{V _lhs69692=([&]()->V{V _lhs69694=_v_69039_x0;V _rhs69695=([&]()->V{V _callee69696=_v_69021_span;return j::call(_callee69696,j::Args{_v_69035_s.get()});})();return j::binary("+",_lhs69694,_rhs69695);})();V _rhs69693=(j::truth(_v_69018_shade.get())?V(2.0):V(1.0));return V(j::number(_lhs69692)-j::number(_rhs69693));})();
_v_69097_bucket.get()=j::function([=](const j::Args &_args_fn69098,const V &_receiver_fn69098,const V &_self_fn69098) mutable ->V{
V _v_69099_c;
_v_69099_c=_args_fn69098[0];
return (j::truth(([&]()->V{V _lhs69697=_v_69083_steps.get();V _rhs69698=V(1.0);return V(j::equal(_lhs69697,_rhs69698,true));})())?V(0.0):([&]()->V{V _receiver69739=j::builtin("Math");V _method69740=this->_literals[41];V _method=j::get(_receiver69739,_method69740);j::Args _params69741=j::Args{V(0.0),([&]()->V{V _receiver69734=j::builtin("Math");V _method69735=this->_literals[14];V _method=j::get(_receiver69734,_method69735);j::Args _params69736=j::Args{([&]()->V{V _lhs69699=_v_69083_steps.get();V _rhs69700=V(1.0);return V(j::number(_lhs69699)-j::number(_rhs69700));})(),([&]()->V{V _number69716=([&]()->V{V _lhs69717=([&]()->V{V _lhs69719=([&]()->V{V _lhs69721=_v_69099_c;V _rhs69722=_v_69095_lo.get();return V(j::number(_lhs69721)-j::number(_rhs69722));})();V _rhs69720=([&]()->V{V _receiver69727=j::builtin("Math");V _method69728=this->_literals[41];V _method=j::get(_receiver69727,_method69728);j::Args _params69729=j::Args{V(1.0),([&]()->V{V _lhs69723=_v_69096_hi.get();V _rhs69724=_v_69095_lo.get();return V(j::number(_lhs69723)-j::number(_rhs69724));})()};return j::call(_method,_params69729,_receiver69727);})();return V(j::number(_lhs69719)/j::number(_rhs69720));})();V _rhs69718=([&]()->V{V _lhs69730=_v_69083_steps.get();V _rhs69731=V(1.0);return V(j::number(_lhs69730)-j::number(_rhs69731));})();return V(j::number(_lhs69717)*j::number(_rhs69718));})();return V(std::floor(j::number(_number69716)+.5));})()};return j::call(_method,_params69736,_receiver69734);})()};return j::call(_method,_params69741,_receiver69739);})());
return V{};
},1);
_v_69100_left.get()=([&]()->V{V _lhs69742=_v_69039_x0;V _rhs69743=V(2.0);return V(j::number(_lhs69742)-j::number(_rhs69743));})();
_v_69101_right.get()=([&]()->V{V _lhs69744=([&]()->V{V _lhs69746=_v_69039_x0;V _rhs69747=([&]()->V{V _callee69748=_v_69021_span;return j::call(_callee69748,j::Args{_v_69035_s.get()});})();return j::binary("+",_lhs69746,_rhs69747);})();V _rhs69745=V(9.0);return j::binary("+",_lhs69744,_rhs69745);})();
_v_69102_frame.get()=j::function([=](const j::Args &_args_fn69103,const V &_receiver_fn69103,const V &_self_fn69103) mutable ->V{
V _v_69104_t;
V _v_69105_paper;
V _v_69106_color;
_v_69104_t=_args_fn69103[0];
V _default69749=_args_fn69103[1];if(_default69749.kind==V::Undefined||_default69749.kind==V::Hole)_default69749=([&]()->V{V _obj69750=j::object();return _obj69750;})();
V _pattern69751=_default69749;
V _default69752=j::get(_pattern69751,this->_literals[76]);if(_default69752.kind==V::Undefined||_default69752.kind==V::Hole)_default69752=V(false);
_v_69105_paper=_default69752;
_v_69106_color=j::get(_pattern69751,this->_literals[73]);
{
V _v_69107_glinting;
V _v_69108_p;
V _v_69110_upTo;
V _v_69111_g;
V _v_69112_core;
V _v_69113_edge;
V _v_69114_lines;
_v_69107_glinting=([&]()->V{V _lhs69753=_v_69016_effect.get();V _rhs69754=this->_literals[22];return V(j::equal(_lhs69753,_rhs69754,true));})();
_v_69108_p=j::unary("-",V(99.0));
if(j::truth(_v_69107_glinting)){
V _v_69109_u;
_v_69109_u=([&]()->V{V _lhs69755=([&]()->V{V _lhs69757=([&]()->V{V _lhs69759=([&]()->V{V _lhs69761=([&]()->V{V _lhs69763=_v_69104_t;V _rhs69764=_v_69070_first.get();return V(j::number(_lhs69763)-j::number(_rhs69764));})();V _rhs69762=_v_69072_every.get();return V(std::fmod(j::number(_lhs69761),j::number(_rhs69762)));})();V _rhs69760=_v_69072_every.get();return j::binary("+",_lhs69759,_rhs69760);})();V _rhs69758=_v_69072_every.get();return V(std::fmod(j::number(_lhs69757),j::number(_rhs69758)));})();V _rhs69756=_v_69071_sweep.get();return V(j::number(_lhs69755)/j::number(_rhs69756));})();
if(j::truth(([&]()->V{V _lhs69765=_v_69109_u;V _rhs69766=V(1.0);return j::binary("<",_lhs69765,_rhs69766);})())){(void)((_v_69108_p=([&]()->V{V _lhs69768=_v_69100_left.get();V _rhs69769=([&]()->V{V _lhs69770=([&]()->V{V _lhs69772=_v_69101_right.get();V _rhs69773=_v_69100_left.get();return V(j::number(_lhs69772)-j::number(_rhs69773));})();V _rhs69771=_v_69109_u;return V(j::number(_lhs69770)*j::number(_rhs69771));})();return j::binary("+",_lhs69768,_rhs69769);})()));
}

}

_v_69110_upTo=(j::truth(([&]()->V{V _lhs69774=_v_69016_effect.get();V _rhs69775=this->_literals[23];return V(j::equal(_lhs69774,_rhs69775,true));})())?j::get(_v_69077_ends.get(),([&]()->V{V _receiver69794=j::builtin("Math");V _method69795=this->_literals[14];V _method=j::get(_receiver69794,_method69795);j::Args _params69796=j::Args{([&]()->V{V _lhs69776=j::get(_v_69077_ends.get(),this->_literals[13]);V _rhs69777=V(1.0);return V(j::number(_lhs69776)-j::number(_rhs69777));})(),([&]()->V{V _receiver69789=j::builtin("Math");V _method69790=this->_literals[41];V _method=j::get(_receiver69789,_method69790);j::Args _params69791=j::Args{V(0.0),([&]()->V{V _number69782=([&]()->V{V _lhs69783=([&]()->V{V _lhs69785=_v_69104_t;V _rhs69786=_v_69075_step.get();return V(j::number(_lhs69785)/j::number(_rhs69786));})();V _rhs69784=V(1e-9);return j::binary("+",_lhs69783,_rhs69784);})();return V(std::floor(j::number(_number69782)));})()};return j::call(_method,_params69791,_receiver69789);})()};return j::call(_method,_params69796,_receiver69794);})()):_v_69037_cols.get());
_v_69111_g=(j::truth(_v_69105_paper)?this->_literals[53]:this->_literals[52]);
V _pattern69798=([&]()->V{j::Args _array69797;for(const auto &_value:j::elements(j::get(_v_69067_shine.get(),_v_69111_g)))_array69797.push_back(_value);return j::array(std::move(_array69797));})();
_v_69112_core=j::get(_pattern69798,V(0));
_v_69113_edge=j::get(_pattern69798,V(1));
_v_69114_lines=([&]()->V{j::Args _array69799;return j::array(std::move(_array69799));})();
{V _v_69115_r;
_v_69115_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs69800=_v_69115_r;V _rhs69801=_v_69038_rows.get();return j::binary("<",_lhs69800,_rhs69801);})());(void)(j::increment(_v_69115_r,1,false))){
V _v_69116_line;
_v_69116_line=this->_literals[4];
{V _v_69117_c;
_v_69117_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs69802=_v_69117_c;V _rhs69803=_v_69037_cols.get();return j::binary("<",_lhs69802,_rhs69803);})());(void)(j::increment(_v_69117_c,1,false))){
V _v_69118_k;
V _v_69119_cell;
V _v_69120_d;
_v_69118_k=([&]()->V{V _lhs69804=([&]()->V{V _lhs69806=_v_69115_r;V _rhs69807=_v_69037_cols.get();return V(j::number(_lhs69806)*j::number(_rhs69807));})();V _rhs69805=_v_69117_c;return j::binary("+",_lhs69804,_rhs69805);})();
_v_69119_cell=j::get(_v_69053_grid.get(),_v_69118_k);
if(j::truth(([&]()->V{V _lhs69808=_v_69117_c;V _rhs69809=_v_69110_upTo;return j::binary(">=",_lhs69808,_rhs69809);})())){
(void)((_v_69116_line=j::binary("+",_v_69116_line,this->_literals[51])));
continue;

}

if(j::truth(([&]()->V{V _lhs69811=_v_69119_cell;V _rhs69812=V::null();return V(!j::equal(_lhs69811,_rhs69812,true));})())){
(void)((_v_69116_line=j::binary("+",_v_69116_line,_v_69119_cell)));
if(j::truth(([&]()->V{V _logical69814=([&]()->V{V _logical69815=_v_69106_color;return j::truth(_logical69815)?_v_69088_palette.get():_logical69815;})();return j::truth(_logical69814)?([&]()->V{V _lhs69816=_v_69119_cell;V _rhs69817=this->_literals[51];return V(!j::equal(_lhs69816,_rhs69817,true));})():_logical69814;})())){(void)(([&]()->V{V _base69819=_v_69106_color;V _key69820=_v_69118_k;V _assign69818=([&]()->V{V _lhs69821=(j::truth(_v_69105_paper)?V(0.0):_v_69094_half.get());V _rhs69822=V(0.0);return j::binary("+",_lhs69821,_rhs69822);})();return j::put(_base69819,_key69820,_assign69818);})());
}
continue;

}

_v_69120_d=([&]()->V{V _number69829=([&]()->V{V _lhs69830=([&]()->V{V _lhs69832=_v_69117_c;V _rhs69833=([&]()->V{V _lhs69834=_v_69074_slant.get();V _rhs69835=_v_69115_r;return V(j::number(_lhs69834)*j::number(_rhs69835));})();return j::binary("+",_lhs69832,_rhs69833);})();V _rhs69831=_v_69108_p;return V(j::number(_lhs69830)-j::number(_rhs69831));})();return V(std::fabs(j::number(_number69829)));})();
(void)((_v_69116_line=j::binary("+",_v_69116_line,(j::truth(([&]()->V{V _lhs69837=_v_69120_d;V _rhs69838=([&]()->V{V _lhs69839=_v_69073_width.get();V _rhs69840=V(2.0);return V(j::number(_lhs69839)/j::number(_rhs69840));})();return j::binary("<",_lhs69837,_rhs69838);})())?_v_69112_core:(j::truth(([&]()->V{V _lhs69841=_v_69120_d;V _rhs69842=_v_69073_width.get();return j::binary("<",_lhs69841,_rhs69842);})())?([&]()->V{V _logical69843=_v_69113_edge;return j::nullish(_logical69843)?_v_69112_core:_logical69843;})():j::get(_v_69065_fill.get(),_v_69111_g))))));
if(j::truth(([&]()->V{V _logical69844=_v_69106_color;return j::truth(_logical69844)?_v_69088_palette.get():_logical69844;})())){(void)(([&]()->V{V _base69846=_v_69106_color;V _key69847=_v_69118_k;V _assign69845=([&]()->V{V _lhs69848=([&]()->V{V _lhs69850=(j::truth(_v_69105_paper)?V(0.0):_v_69094_half.get());V _rhs69851=V(1.0);return j::binary("+",_lhs69850,_rhs69851);})();V _rhs69849=([&]()->V{V _callee69852=_v_69097_bucket.get();return j::call(_callee69852,j::Args{_v_69117_c});})();return j::binary("+",_lhs69848,_rhs69849);})();return j::put(_base69846,_key69847,_assign69845);})());
}

}
}
(void)(([&]()->V{V _receiver69853=_v_69114_lines;V _method69854=this->_literals[50];V _method=j::get(_receiver69853,_method69854);j::Args _params69855=j::Args{_v_69116_line};return j::call(_method,_params69855,_receiver69853);})());

}
}
return ([&]()->V{V _receiver69856=_v_69114_lines;V _method69857=this->_literals[10];V _method=j::get(_receiver69856,_method69857);j::Args _params69858=j::Args{this->_literals[77]};return j::call(_method,_params69858,_receiver69856);})();

}

return V{};
},1);
_v_69121_motion=(j::truth(([&]()->V{V _lhs69859=_v_69016_effect.get();V _rhs69860=this->_literals[22];return V(j::equal(_lhs69859,_rhs69860,true));})())?([&]()->V{V _obj69861=j::object();j::put(_obj69861,this->_literals[78],_v_69072_every.get());j::put(_obj69861,this->_literals[18],_v_69076_rest);j::put(_obj69861,this->_literals[79],V(false));j::put(_obj69861,this->_literals[80],([&]()->V{j::Args _array69862;_array69862.push_back(_v_69070_first.get());_array69862.push_back(([&]()->V{V _lhs69863=_v_69070_first.get();V _rhs69864=_v_69071_sweep.get();return j::binary("+",_lhs69863,_rhs69864);})());return j::array(std::move(_array69862));})());return _obj69861;})():(j::truth(([&]()->V{V _lhs69865=_v_69016_effect.get();V _rhs69866=this->_literals[23];return V(j::equal(_lhs69865,_rhs69866,true));})())?([&]()->V{V _obj69867=j::object();j::put(_obj69867,this->_literals[78],([&]()->V{V _lhs69868=([&]()->V{V _lhs69870=_v_69075_step.get();V _rhs69871=j::get(_v_69077_ends.get(),this->_literals[13]);return V(j::number(_lhs69870)*j::number(_rhs69871));})();V _rhs69869=([&]()->V{V _lhs69872=V(4.0);V _rhs69873=V(15.0);return V(j::number(_lhs69872)/j::number(_rhs69873));})();return j::binary("+",_lhs69868,_rhs69869);})());j::put(_obj69867,this->_literals[18],V(0.0));j::put(_obj69867,this->_literals[79],V(true));return _obj69867;})():([&]()->V{V _obj69874=j::object();j::put(_obj69874,this->_literals[78],V(0.0));j::put(_obj69874,this->_literals[18],V(0.0));j::put(_obj69874,this->_literals[79],V(false));return _obj69874;})()));
_v_69122_name=([&]()->V{V _logical69875=j::get(_v_69013_options.get(),this->_literals[81]);return j::nullish(_logical69875)?([&]()->V{V _receiver69876=([&]()->V{V _callee69879=this->_v_68964_drawable.get();return j::call(_callee69879,j::Args{_v_69012_text,_v_69014_font});})();V _method69877=this->_literals[20];V _method=j::get(_receiver69876,_method69877);j::Args _params69878=j::Args{};return j::call(_method,_params69878,_receiver69876);})():_logical69875;})();
_v_69123_meta=([&]()->V{V _obj69880=j::object();j::put(_obj69880,this->_literals[81],_v_69122_name);j::put(_obj69880,this->_literals[82],this->_literals[23]);j::put(_obj69880,this->_literals[83],([&]()->V{std::u16string _text69881;_text69881+=u"\"";_text69881+=j::string(_v_69122_name);_text69881+=u"\" in block letters";return V(std::move(_text69881));})());j::put(_obj69880,this->_literals[43],_v_69037_cols.get());j::put(_obj69880,this->_literals[44],_v_69038_rows.get());j::put(_obj69880,this->_literals[84],(j::truth(([&]()->V{V _lhs69882=_v_69016_effect.get();V _rhs69883=this->_literals[24];return V(j::equal(_lhs69882,_rhs69883,true));})())?V(0.0):V(24.0)));V _spread69884=(j::truth(_v_69088_palette.get())?([&]()->V{V _obj69885=j::object();j::put(_obj69885,this->_literals[85],_v_69088_palette.get());return _obj69885;})():([&]()->V{V _obj69886=j::object();return _obj69886;})());for(const auto &_key:j::keys(_spread69884))j::put(_obj69880,_key,j::get(_spread69884,_key));V _spread69887=(j::truth(([&]()->V{V _lhs69888=_v_69016_effect.get();V _rhs69889=this->_literals[22];return V(j::equal(_lhs69888,_rhs69889,true));})())?([&]()->V{V _obj69890=j::object();j::put(_obj69890,this->_literals[86],_v_69072_every.get());return _obj69890;})():([&]()->V{V _obj69891=j::object();return _obj69891;})());for(const auto &_key:j::keys(_spread69887))j::put(_obj69880,_key,j::get(_spread69887,_key));V _spread69892=(j::truth(([&]()->V{V _logical69893=([&]()->V{V _lhs69894=_v_69016_effect.get();V _rhs69895=this->_literals[22];return V(j::equal(_lhs69894,_rhs69895,true));})();return j::truth(_logical69893)?_v_69076_rest:_logical69893;})())?([&]()->V{V _obj69896=j::object();j::put(_obj69896,this->_literals[24],_v_69076_rest);return _obj69896;})():(j::truth(([&]()->V{V _lhs69897=_v_69016_effect.get();V _rhs69898=this->_literals[23];return V(j::equal(_lhs69897,_rhs69898,true));})())?([&]()->V{V _obj69899=j::object();j::put(_obj69899,this->_literals[24],j::get(_v_69121_motion,this->_literals[78]));return _obj69899;})():([&]()->V{V _obj69900=j::object();return _obj69900;})()));for(const auto &_key:j::keys(_spread69892))j::put(_obj69880,_key,j::get(_spread69892,_key));return _obj69880;})();
return ([&]()->V{V _obj69901=j::object();j::put(_obj69901,this->_literals[87],_v_69123_meta);j::put(_obj69901,this->_literals[88],j::function([=](const j::Args &_args_fn69124,const V &_receiver_fn69124,const V &_self_fn69124) mutable ->V{
return _v_69102_frame.get();
return V{};
},0));j::put(_obj69901,this->_literals[89],([&]()->V{V _callee69902=this->_v_68964_drawable.get();return j::call(_callee69902,j::Args{_v_69012_text,_v_69014_font});})());j::put(_obj69901,this->_literals[90],_v_69121_motion);return _obj69901;})();

}

return V{};
},1);
this->exports["fonts"]=this->_v_68931_fonts;
this->exports["shadows"]=this->_v_68932_shadows;
this->exports["drawable"]=this->_v_68964_drawable;
this->exports["banner"]=this->_v_69010_banner;
this->_v_68931_fonts.get()=([&]()->V{V _obj69903=j::object();j::put(_obj69903,this->_literals[1],([&]()->V{V _obj69904=j::object();j::put(_obj69904,this->_literals[34],V(5.0));j::put(_obj69904,this->_literals[5],([&]()->V{V _obj69905=j::object();j::put(_obj69905,this->_literals[91],this->_literals[92]);j::put(_obj69905,this->_literals[93],this->_literals[94]);j::put(_obj69905,this->_literals[95],this->_literals[96]);j::put(_obj69905,this->_literals[97],this->_literals[98]);j::put(_obj69905,this->_literals[99],this->_literals[100]);j::put(_obj69905,this->_literals[101],this->_literals[102]);j::put(_obj69905,this->_literals[103],this->_literals[104]);j::put(_obj69905,this->_literals[105],this->_literals[106]);j::put(_obj69905,this->_literals[107],this->_literals[108]);j::put(_obj69905,this->_literals[109],this->_literals[110]);j::put(_obj69905,this->_literals[111],this->_literals[112]);j::put(_obj69905,this->_literals[113],this->_literals[114]);j::put(_obj69905,this->_literals[115],this->_literals[116]);j::put(_obj69905,this->_literals[117],this->_literals[118]);j::put(_obj69905,this->_literals[119],this->_literals[120]);j::put(_obj69905,this->_literals[121],this->_literals[122]);j::put(_obj69905,this->_literals[123],this->_literals[124]);j::put(_obj69905,this->_literals[125],this->_literals[126]);j::put(_obj69905,this->_literals[127],this->_literals[128]);j::put(_obj69905,this->_literals[129],this->_literals[130]);j::put(_obj69905,this->_literals[131],this->_literals[132]);j::put(_obj69905,this->_literals[133],this->_literals[134]);j::put(_obj69905,this->_literals[135],this->_literals[136]);j::put(_obj69905,this->_literals[137],this->_literals[138]);j::put(_obj69905,this->_literals[139],this->_literals[140]);j::put(_obj69905,this->_literals[141],this->_literals[142]);j::put(_obj69905,this->_literals[15],this->_literals[143]);j::put(_obj69905,this->_literals[144],this->_literals[145]);j::put(_obj69905,this->_literals[146],this->_literals[147]);j::put(_obj69905,this->_literals[148],this->_literals[149]);j::put(_obj69905,this->_literals[150],this->_literals[151]);j::put(_obj69905,this->_literals[152],this->_literals[153]);j::put(_obj69905,this->_literals[154],this->_literals[155]);j::put(_obj69905,this->_literals[156],this->_literals[157]);j::put(_obj69905,this->_literals[158],this->_literals[159]);j::put(_obj69905,this->_literals[160],this->_literals[161]);j::put(_obj69905,this->_literals[162],this->_literals[163]);j::put(_obj69905,this->_literals[164],this->_literals[165]);j::put(_obj69905,this->_literals[166],this->_literals[167]);j::put(_obj69905,this->_literals[168],this->_literals[169]);j::put(_obj69905,this->_literals[170],this->_literals[171]);j::put(_obj69905,this->_literals[172],this->_literals[173]);j::put(_obj69905,this->_literals[174],this->_literals[175]);j::put(_obj69905,this->_literals[176],this->_literals[177]);j::put(_obj69905,this->_literals[178],this->_literals[179]);j::put(_obj69905,this->_literals[180],this->_literals[181]);j::put(_obj69905,this->_literals[182],this->_literals[183]);j::put(_obj69905,this->_literals[51],this->_literals[184]);return _obj69905;})());return _obj69904;})());j::put(_obj69903,this->_literals[185],([&]()->V{V _obj69906=j::object();j::put(_obj69906,this->_literals[34],V(5.0));j::put(_obj69906,this->_literals[5],([&]()->V{V _obj69907=j::object();j::put(_obj69907,this->_literals[91],this->_literals[186]);j::put(_obj69907,this->_literals[93],this->_literals[187]);j::put(_obj69907,this->_literals[95],this->_literals[188]);j::put(_obj69907,this->_literals[97],this->_literals[189]);j::put(_obj69907,this->_literals[99],this->_literals[190]);j::put(_obj69907,this->_literals[101],this->_literals[191]);j::put(_obj69907,this->_literals[103],this->_literals[192]);j::put(_obj69907,this->_literals[105],this->_literals[193]);j::put(_obj69907,this->_literals[107],this->_literals[194]);j::put(_obj69907,this->_literals[109],this->_literals[195]);j::put(_obj69907,this->_literals[111],this->_literals[196]);j::put(_obj69907,this->_literals[113],this->_literals[197]);j::put(_obj69907,this->_literals[115],this->_literals[198]);j::put(_obj69907,this->_literals[117],this->_literals[199]);j::put(_obj69907,this->_literals[119],this->_literals[200]);j::put(_obj69907,this->_literals[121],this->_literals[201]);j::put(_obj69907,this->_literals[123],this->_literals[202]);j::put(_obj69907,this->_literals[125],this->_literals[203]);j::put(_obj69907,this->_literals[127],this->_literals[204]);j::put(_obj69907,this->_literals[129],this->_literals[205]);j::put(_obj69907,this->_literals[131],this->_literals[206]);j::put(_obj69907,this->_literals[133],this->_literals[207]);j::put(_obj69907,this->_literals[135],this->_literals[208]);j::put(_obj69907,this->_literals[137],this->_literals[209]);j::put(_obj69907,this->_literals[139],this->_literals[210]);j::put(_obj69907,this->_literals[141],this->_literals[211]);j::put(_obj69907,this->_literals[15],this->_literals[143]);j::put(_obj69907,this->_literals[144],this->_literals[145]);j::put(_obj69907,this->_literals[146],this->_literals[212]);j::put(_obj69907,this->_literals[148],this->_literals[213]);j::put(_obj69907,this->_literals[150],this->_literals[151]);j::put(_obj69907,this->_literals[152],this->_literals[214]);j::put(_obj69907,this->_literals[154],this->_literals[215]);j::put(_obj69907,this->_literals[156],this->_literals[216]);j::put(_obj69907,this->_literals[158],this->_literals[159]);j::put(_obj69907,this->_literals[160],this->_literals[217]);j::put(_obj69907,this->_literals[162],this->_literals[163]);j::put(_obj69907,this->_literals[164],this->_literals[165]);j::put(_obj69907,this->_literals[166],this->_literals[167]);j::put(_obj69907,this->_literals[168],this->_literals[218]);j::put(_obj69907,this->_literals[170],this->_literals[171]);j::put(_obj69907,this->_literals[172],this->_literals[173]);j::put(_obj69907,this->_literals[174],this->_literals[175]);j::put(_obj69907,this->_literals[176],this->_literals[177]);j::put(_obj69907,this->_literals[178],this->_literals[179]);j::put(_obj69907,this->_literals[180],this->_literals[181]);j::put(_obj69907,this->_literals[182],this->_literals[183]);j::put(_obj69907,this->_literals[51],this->_literals[184]);return _obj69907;})());return _obj69906;})());j::put(_obj69903,this->_literals[219],([&]()->V{V _obj69908=j::object();j::put(_obj69908,this->_literals[34],V(7.0));j::put(_obj69908,this->_literals[5],([&]()->V{V _obj69909=j::object();j::put(_obj69909,this->_literals[91],this->_literals[220]);j::put(_obj69909,this->_literals[93],this->_literals[221]);j::put(_obj69909,this->_literals[95],this->_literals[222]);j::put(_obj69909,this->_literals[97],this->_literals[223]);j::put(_obj69909,this->_literals[99],this->_literals[224]);j::put(_obj69909,this->_literals[101],this->_literals[225]);j::put(_obj69909,this->_literals[103],this->_literals[226]);j::put(_obj69909,this->_literals[105],this->_literals[227]);j::put(_obj69909,this->_literals[107],this->_literals[228]);j::put(_obj69909,this->_literals[109],this->_literals[229]);j::put(_obj69909,this->_literals[111],this->_literals[230]);j::put(_obj69909,this->_literals[113],this->_literals[231]);j::put(_obj69909,this->_literals[115],this->_literals[232]);j::put(_obj69909,this->_literals[117],this->_literals[233]);j::put(_obj69909,this->_literals[119],this->_literals[234]);j::put(_obj69909,this->_literals[121],this->_literals[235]);j::put(_obj69909,this->_literals[123],this->_literals[236]);j::put(_obj69909,this->_literals[125],this->_literals[237]);j::put(_obj69909,this->_literals[127],this->_literals[238]);j::put(_obj69909,this->_literals[129],this->_literals[239]);j::put(_obj69909,this->_literals[131],this->_literals[240]);j::put(_obj69909,this->_literals[133],this->_literals[241]);j::put(_obj69909,this->_literals[135],this->_literals[242]);j::put(_obj69909,this->_literals[137],this->_literals[243]);j::put(_obj69909,this->_literals[139],this->_literals[244]);j::put(_obj69909,this->_literals[141],this->_literals[245]);j::put(_obj69909,this->_literals[15],this->_literals[246]);j::put(_obj69909,this->_literals[144],this->_literals[247]);j::put(_obj69909,this->_literals[146],this->_literals[248]);j::put(_obj69909,this->_literals[148],this->_literals[249]);j::put(_obj69909,this->_literals[150],this->_literals[250]);j::put(_obj69909,this->_literals[152],this->_literals[251]);j::put(_obj69909,this->_literals[154],this->_literals[252]);j::put(_obj69909,this->_literals[156],this->_literals[253]);j::put(_obj69909,this->_literals[158],this->_literals[254]);j::put(_obj69909,this->_literals[160],this->_literals[255]);j::put(_obj69909,this->_literals[162],this->_literals[256]);j::put(_obj69909,this->_literals[164],this->_literals[257]);j::put(_obj69909,this->_literals[166],this->_literals[258]);j::put(_obj69909,this->_literals[168],this->_literals[259]);j::put(_obj69909,this->_literals[170],this->_literals[260]);j::put(_obj69909,this->_literals[172],this->_literals[261]);j::put(_obj69909,this->_literals[174],this->_literals[262]);j::put(_obj69909,this->_literals[176],this->_literals[263]);j::put(_obj69909,this->_literals[178],this->_literals[264]);j::put(_obj69909,this->_literals[180],this->_literals[265]);j::put(_obj69909,this->_literals[182],this->_literals[266]);j::put(_obj69909,this->_literals[51],this->_literals[267]);return _obj69909;})());return _obj69908;})());j::put(_obj69903,this->_literals[268],([&]()->V{V _obj69910=j::object();j::put(_obj69910,this->_literals[34],V(7.0));j::put(_obj69910,this->_literals[5],([&]()->V{V _obj69911=j::object();j::put(_obj69911,this->_literals[91],this->_literals[269]);j::put(_obj69911,this->_literals[93],this->_literals[270]);j::put(_obj69911,this->_literals[95],this->_literals[271]);j::put(_obj69911,this->_literals[97],this->_literals[272]);j::put(_obj69911,this->_literals[99],this->_literals[273]);j::put(_obj69911,this->_literals[101],this->_literals[274]);j::put(_obj69911,this->_literals[103],this->_literals[275]);j::put(_obj69911,this->_literals[105],this->_literals[276]);j::put(_obj69911,this->_literals[107],this->_literals[277]);j::put(_obj69911,this->_literals[109],this->_literals[278]);j::put(_obj69911,this->_literals[111],this->_literals[279]);j::put(_obj69911,this->_literals[113],this->_literals[280]);j::put(_obj69911,this->_literals[115],this->_literals[281]);j::put(_obj69911,this->_literals[117],this->_literals[282]);j::put(_obj69911,this->_literals[119],this->_literals[283]);j::put(_obj69911,this->_literals[121],this->_literals[284]);j::put(_obj69911,this->_literals[123],this->_literals[285]);j::put(_obj69911,this->_literals[125],this->_literals[286]);j::put(_obj69911,this->_literals[127],this->_literals[287]);j::put(_obj69911,this->_literals[129],this->_literals[288]);j::put(_obj69911,this->_literals[131],this->_literals[289]);j::put(_obj69911,this->_literals[133],this->_literals[290]);j::put(_obj69911,this->_literals[135],this->_literals[291]);j::put(_obj69911,this->_literals[137],this->_literals[292]);j::put(_obj69911,this->_literals[139],this->_literals[293]);j::put(_obj69911,this->_literals[141],this->_literals[294]);j::put(_obj69911,this->_literals[15],this->_literals[295]);j::put(_obj69911,this->_literals[144],this->_literals[296]);j::put(_obj69911,this->_literals[146],this->_literals[297]);j::put(_obj69911,this->_literals[148],this->_literals[298]);j::put(_obj69911,this->_literals[150],this->_literals[299]);j::put(_obj69911,this->_literals[152],this->_literals[300]);j::put(_obj69911,this->_literals[154],this->_literals[301]);j::put(_obj69911,this->_literals[156],this->_literals[302]);j::put(_obj69911,this->_literals[158],this->_literals[303]);j::put(_obj69911,this->_literals[160],this->_literals[304]);j::put(_obj69911,this->_literals[162],this->_literals[305]);j::put(_obj69911,this->_literals[164],this->_literals[306]);j::put(_obj69911,this->_literals[166],this->_literals[307]);j::put(_obj69911,this->_literals[168],this->_literals[308]);j::put(_obj69911,this->_literals[170],this->_literals[309]);j::put(_obj69911,this->_literals[172],this->_literals[310]);j::put(_obj69911,this->_literals[174],this->_literals[262]);j::put(_obj69911,this->_literals[176],this->_literals[311]);j::put(_obj69911,this->_literals[178],this->_literals[312]);j::put(_obj69911,this->_literals[180],this->_literals[313]);j::put(_obj69911,this->_literals[182],this->_literals[314]);j::put(_obj69911,this->_literals[51],this->_literals[267]);return _obj69911;})());return _obj69910;})());j::put(_obj69903,this->_literals[315],([&]()->V{V _obj69912=j::object();j::put(_obj69912,this->_literals[34],V(6.0));j::put(_obj69912,this->_literals[5],([&]()->V{V _obj69913=j::object();j::put(_obj69913,this->_literals[15],this->_literals[316]);j::put(_obj69913,this->_literals[144],this->_literals[317]);j::put(_obj69913,this->_literals[146],this->_literals[318]);j::put(_obj69913,this->_literals[148],this->_literals[319]);j::put(_obj69913,this->_literals[150],this->_literals[320]);j::put(_obj69913,this->_literals[152],this->_literals[321]);j::put(_obj69913,this->_literals[154],this->_literals[322]);j::put(_obj69913,this->_literals[156],this->_literals[323]);j::put(_obj69913,this->_literals[158],this->_literals[324]);j::put(_obj69913,this->_literals[160],this->_literals[325]);j::put(_obj69913,this->_literals[91],this->_literals[326]);j::put(_obj69913,this->_literals[93],this->_literals[327]);j::put(_obj69913,this->_literals[95],this->_literals[328]);j::put(_obj69913,this->_literals[97],this->_literals[329]);j::put(_obj69913,this->_literals[99],this->_literals[330]);j::put(_obj69913,this->_literals[101],this->_literals[331]);j::put(_obj69913,this->_literals[103],this->_literals[332]);j::put(_obj69913,this->_literals[105],this->_literals[333]);j::put(_obj69913,this->_literals[107],this->_literals[334]);j::put(_obj69913,this->_literals[109],this->_literals[335]);j::put(_obj69913,this->_literals[111],this->_literals[336]);j::put(_obj69913,this->_literals[113],this->_literals[337]);j::put(_obj69913,this->_literals[115],this->_literals[338]);j::put(_obj69913,this->_literals[117],this->_literals[339]);j::put(_obj69913,this->_literals[119],this->_literals[340]);j::put(_obj69913,this->_literals[121],this->_literals[341]);j::put(_obj69913,this->_literals[123],this->_literals[342]);j::put(_obj69913,this->_literals[125],this->_literals[343]);j::put(_obj69913,this->_literals[127],this->_literals[344]);j::put(_obj69913,this->_literals[129],this->_literals[345]);j::put(_obj69913,this->_literals[131],this->_literals[346]);j::put(_obj69913,this->_literals[133],this->_literals[347]);j::put(_obj69913,this->_literals[135],this->_literals[348]);j::put(_obj69913,this->_literals[137],this->_literals[349]);j::put(_obj69913,this->_literals[139],this->_literals[350]);j::put(_obj69913,this->_literals[141],this->_literals[351]);j::put(_obj69913,this->_literals[162],this->_literals[352]);j::put(_obj69913,this->_literals[164],this->_literals[353]);j::put(_obj69913,this->_literals[166],this->_literals[354]);j::put(_obj69913,this->_literals[168],this->_literals[355]);j::put(_obj69913,this->_literals[170],this->_literals[356]);j::put(_obj69913,this->_literals[172],this->_literals[357]);j::put(_obj69913,this->_literals[174],this->_literals[358]);j::put(_obj69913,this->_literals[176],this->_literals[359]);j::put(_obj69913,this->_literals[178],this->_literals[360]);j::put(_obj69913,this->_literals[180],this->_literals[361]);j::put(_obj69913,this->_literals[182],this->_literals[362]);j::put(_obj69913,this->_literals[51],this->_literals[363]);return _obj69913;})());return _obj69912;})());j::put(_obj69903,this->_literals[364],([&]()->V{V _obj69914=j::object();j::put(_obj69914,this->_literals[34],V(5.0));j::put(_obj69914,this->_literals[5],([&]()->V{V _obj69915=j::object();j::put(_obj69915,this->_literals[15],this->_literals[365]);j::put(_obj69915,this->_literals[144],this->_literals[366]);j::put(_obj69915,this->_literals[146],this->_literals[367]);j::put(_obj69915,this->_literals[148],this->_literals[368]);j::put(_obj69915,this->_literals[150],this->_literals[369]);j::put(_obj69915,this->_literals[152],this->_literals[370]);j::put(_obj69915,this->_literals[154],this->_literals[371]);j::put(_obj69915,this->_literals[156],this->_literals[372]);j::put(_obj69915,this->_literals[158],this->_literals[373]);j::put(_obj69915,this->_literals[160],this->_literals[374]);j::put(_obj69915,this->_literals[91],this->_literals[375]);j::put(_obj69915,this->_literals[93],this->_literals[376]);j::put(_obj69915,this->_literals[95],this->_literals[377]);j::put(_obj69915,this->_literals[97],this->_literals[378]);j::put(_obj69915,this->_literals[99],this->_literals[379]);j::put(_obj69915,this->_literals[101],this->_literals[380]);j::put(_obj69915,this->_literals[103],this->_literals[381]);j::put(_obj69915,this->_literals[105],this->_literals[382]);j::put(_obj69915,this->_literals[107],this->_literals[194]);j::put(_obj69915,this->_literals[109],this->_literals[383]);j::put(_obj69915,this->_literals[111],this->_literals[384]);j::put(_obj69915,this->_literals[113],this->_literals[385]);j::put(_obj69915,this->_literals[115],this->_literals[386]);j::put(_obj69915,this->_literals[117],this->_literals[387]);j::put(_obj69915,this->_literals[119],this->_literals[388]);j::put(_obj69915,this->_literals[121],this->_literals[389]);j::put(_obj69915,this->_literals[123],this->_literals[390]);j::put(_obj69915,this->_literals[125],this->_literals[391]);j::put(_obj69915,this->_literals[127],this->_literals[392]);j::put(_obj69915,this->_literals[129],this->_literals[393]);j::put(_obj69915,this->_literals[131],this->_literals[394]);j::put(_obj69915,this->_literals[133],this->_literals[395]);j::put(_obj69915,this->_literals[135],this->_literals[396]);j::put(_obj69915,this->_literals[137],this->_literals[397]);j::put(_obj69915,this->_literals[139],this->_literals[398]);j::put(_obj69915,this->_literals[141],this->_literals[399]);j::put(_obj69915,this->_literals[162],this->_literals[163]);j::put(_obj69915,this->_literals[164],this->_literals[165]);j::put(_obj69915,this->_literals[166],this->_literals[167]);j::put(_obj69915,this->_literals[168],this->_literals[400]);j::put(_obj69915,this->_literals[170],this->_literals[171]);j::put(_obj69915,this->_literals[172],this->_literals[173]);j::put(_obj69915,this->_literals[174],this->_literals[401]);j::put(_obj69915,this->_literals[176],this->_literals[402]);j::put(_obj69915,this->_literals[178],this->_literals[403]);j::put(_obj69915,this->_literals[180],this->_literals[404]);j::put(_obj69915,this->_literals[182],this->_literals[405]);j::put(_obj69915,this->_literals[51],this->_literals[406]);return _obj69915;})());return _obj69914;})());j::put(_obj69903,this->_literals[407],([&]()->V{V _obj69916=j::object();j::put(_obj69916,this->_literals[34],V(9.0));j::put(_obj69916,this->_literals[6],V(true));j::put(_obj69916,this->_literals[5],([&]()->V{V _obj69917=j::object();j::put(_obj69917,this->_literals[91],this->_literals[408]);j::put(_obj69917,this->_literals[93],this->_literals[409]);j::put(_obj69917,this->_literals[95],this->_literals[410]);j::put(_obj69917,this->_literals[97],this->_literals[411]);j::put(_obj69917,this->_literals[99],this->_literals[412]);j::put(_obj69917,this->_literals[101],this->_literals[413]);j::put(_obj69917,this->_literals[103],this->_literals[414]);j::put(_obj69917,this->_literals[105],this->_literals[415]);j::put(_obj69917,this->_literals[107],this->_literals[416]);j::put(_obj69917,this->_literals[109],this->_literals[417]);j::put(_obj69917,this->_literals[111],this->_literals[418]);j::put(_obj69917,this->_literals[113],this->_literals[419]);j::put(_obj69917,this->_literals[115],this->_literals[420]);j::put(_obj69917,this->_literals[117],this->_literals[421]);j::put(_obj69917,this->_literals[119],this->_literals[422]);j::put(_obj69917,this->_literals[121],this->_literals[423]);j::put(_obj69917,this->_literals[123],this->_literals[424]);j::put(_obj69917,this->_literals[125],this->_literals[425]);j::put(_obj69917,this->_literals[127],this->_literals[426]);j::put(_obj69917,this->_literals[129],this->_literals[427]);j::put(_obj69917,this->_literals[131],this->_literals[428]);j::put(_obj69917,this->_literals[133],this->_literals[429]);j::put(_obj69917,this->_literals[135],this->_literals[430]);j::put(_obj69917,this->_literals[137],this->_literals[431]);j::put(_obj69917,this->_literals[139],this->_literals[432]);j::put(_obj69917,this->_literals[141],this->_literals[433]);j::put(_obj69917,this->_literals[434],this->_literals[435]);j::put(_obj69917,this->_literals[436],this->_literals[437]);j::put(_obj69917,this->_literals[438],this->_literals[439]);j::put(_obj69917,this->_literals[440],this->_literals[441]);j::put(_obj69917,this->_literals[442],this->_literals[443]);j::put(_obj69917,this->_literals[444],this->_literals[445]);j::put(_obj69917,this->_literals[446],this->_literals[447]);j::put(_obj69917,this->_literals[448],this->_literals[449]);j::put(_obj69917,this->_literals[450],this->_literals[451]);j::put(_obj69917,this->_literals[452],this->_literals[453]);j::put(_obj69917,this->_literals[454],this->_literals[455]);j::put(_obj69917,this->_literals[456],this->_literals[457]);j::put(_obj69917,this->_literals[458],this->_literals[459]);j::put(_obj69917,this->_literals[460],this->_literals[461]);j::put(_obj69917,this->_literals[462],this->_literals[463]);j::put(_obj69917,this->_literals[464],this->_literals[465]);j::put(_obj69917,this->_literals[466],this->_literals[467]);j::put(_obj69917,this->_literals[468],this->_literals[469]);j::put(_obj69917,this->_literals[470],this->_literals[471]);j::put(_obj69917,this->_literals[472],this->_literals[473]);j::put(_obj69917,this->_literals[474],this->_literals[475]);j::put(_obj69917,this->_literals[476],this->_literals[477]);j::put(_obj69917,this->_literals[478],this->_literals[479]);j::put(_obj69917,this->_literals[480],this->_literals[481]);j::put(_obj69917,this->_literals[482],this->_literals[483]);j::put(_obj69917,this->_literals[484],this->_literals[485]);j::put(_obj69917,this->_literals[15],this->_literals[486]);j::put(_obj69917,this->_literals[144],this->_literals[487]);j::put(_obj69917,this->_literals[146],this->_literals[488]);j::put(_obj69917,this->_literals[148],this->_literals[489]);j::put(_obj69917,this->_literals[150],this->_literals[490]);j::put(_obj69917,this->_literals[152],this->_literals[491]);j::put(_obj69917,this->_literals[154],this->_literals[492]);j::put(_obj69917,this->_literals[156],this->_literals[493]);j::put(_obj69917,this->_literals[158],this->_literals[494]);j::put(_obj69917,this->_literals[160],this->_literals[495]);j::put(_obj69917,this->_literals[162],this->_literals[496]);j::put(_obj69917,this->_literals[164],this->_literals[497]);j::put(_obj69917,this->_literals[166],this->_literals[498]);j::put(_obj69917,this->_literals[168],this->_literals[499]);j::put(_obj69917,this->_literals[170],this->_literals[500]);j::put(_obj69917,this->_literals[172],this->_literals[501]);j::put(_obj69917,this->_literals[174],this->_literals[502]);j::put(_obj69917,this->_literals[176],this->_literals[503]);j::put(_obj69917,this->_literals[178],this->_literals[504]);j::put(_obj69917,this->_literals[180],this->_literals[505]);j::put(_obj69917,this->_literals[182],this->_literals[506]);j::put(_obj69917,this->_literals[51],this->_literals[507]);return _obj69917;})());return _obj69916;})());j::put(_obj69903,this->_literals[508],([&]()->V{V _obj69918=j::object();j::put(_obj69918,this->_literals[34],V(5.0));j::put(_obj69918,this->_literals[5],([&]()->V{V _obj69919=j::object();j::put(_obj69919,this->_literals[15],this->_literals[509]);j::put(_obj69919,this->_literals[144],this->_literals[510]);j::put(_obj69919,this->_literals[146],this->_literals[511]);j::put(_obj69919,this->_literals[148],this->_literals[512]);j::put(_obj69919,this->_literals[150],this->_literals[513]);j::put(_obj69919,this->_literals[152],this->_literals[514]);j::put(_obj69919,this->_literals[154],this->_literals[515]);j::put(_obj69919,this->_literals[156],this->_literals[516]);j::put(_obj69919,this->_literals[158],this->_literals[517]);j::put(_obj69919,this->_literals[160],this->_literals[518]);j::put(_obj69919,this->_literals[91],this->_literals[519]);j::put(_obj69919,this->_literals[93],this->_literals[520]);j::put(_obj69919,this->_literals[95],this->_literals[521]);j::put(_obj69919,this->_literals[97],this->_literals[522]);j::put(_obj69919,this->_literals[99],this->_literals[523]);j::put(_obj69919,this->_literals[101],this->_literals[524]);j::put(_obj69919,this->_literals[103],this->_literals[525]);j::put(_obj69919,this->_literals[105],this->_literals[526]);j::put(_obj69919,this->_literals[107],this->_literals[527]);j::put(_obj69919,this->_literals[109],this->_literals[528]);j::put(_obj69919,this->_literals[111],this->_literals[529]);j::put(_obj69919,this->_literals[113],this->_literals[530]);j::put(_obj69919,this->_literals[115],this->_literals[531]);j::put(_obj69919,this->_literals[117],this->_literals[532]);j::put(_obj69919,this->_literals[119],this->_literals[533]);j::put(_obj69919,this->_literals[121],this->_literals[534]);j::put(_obj69919,this->_literals[123],this->_literals[535]);j::put(_obj69919,this->_literals[125],this->_literals[536]);j::put(_obj69919,this->_literals[127],this->_literals[537]);j::put(_obj69919,this->_literals[129],this->_literals[538]);j::put(_obj69919,this->_literals[131],this->_literals[539]);j::put(_obj69919,this->_literals[133],this->_literals[540]);j::put(_obj69919,this->_literals[135],this->_literals[541]);j::put(_obj69919,this->_literals[137],this->_literals[542]);j::put(_obj69919,this->_literals[139],this->_literals[543]);j::put(_obj69919,this->_literals[141],this->_literals[544]);j::put(_obj69919,this->_literals[162],this->_literals[163]);j::put(_obj69919,this->_literals[164],this->_literals[545]);j::put(_obj69919,this->_literals[166],this->_literals[546]);j::put(_obj69919,this->_literals[168],this->_literals[547]);j::put(_obj69919,this->_literals[170],this->_literals[548]);j::put(_obj69919,this->_literals[172],this->_literals[549]);j::put(_obj69919,this->_literals[174],this->_literals[175]);j::put(_obj69919,this->_literals[176],this->_literals[177]);j::put(_obj69919,this->_literals[178],this->_literals[550]);j::put(_obj69919,this->_literals[180],this->_literals[404]);j::put(_obj69919,this->_literals[182],this->_literals[551]);j::put(_obj69919,this->_literals[51],this->_literals[552]);return _obj69919;})());return _obj69918;})());return _obj69903;})();
this->_v_68932_shadows.get()=([&]()->V{V _obj69920=j::object();j::put(_obj69920,this->_literals[28],this->_literals[553]);j::put(_obj69920,this->_literals[554],this->_literals[555]);j::put(_obj69920,this->_literals[556],this->_literals[557]);j::put(_obj69920,this->_literals[558],this->_literals[559]);j::put(_obj69920,this->_literals[560],this->_literals[561]);return _obj69920;})();
this->_v_68933_INK.get()=([&]()->V{V _obj69921=j::object();j::put(_obj69921,this->_literals[53],this->_literals[562]);j::put(_obj69921,this->_literals[52],this->_literals[563]);return _obj69921;})();
this->_v_68934_QUIET.get()=([&]()->V{V _obj69922=j::object();j::put(_obj69922,this->_literals[53],this->_literals[564]);j::put(_obj69922,this->_literals[52],this->_literals[565]);return _obj69922;})();
this->_v_68935_HEX.get()=j::regexp(u"^#[0-9a-f]{6}$","i");
this->_v_68936_and.get()=j::function([=](const j::Args &_args_fn68937,const V &_receiver_fn68937,const V &_self_fn68937) mutable ->V{
V _v_68938_words;
_v_68938_words=_args_fn68937[0];
return (j::truth(([&]()->V{V _lhs69923=j::get(_v_68938_words,this->_literals[13]);V _rhs69924=V(1.0);return j::binary(">",_lhs69923,_rhs69924);})())?([&]()->V{std::u16string _text69925;_text69925+=u"";_text69925+=j::string(([&]()->V{V _receiver69926=([&]()->V{V _receiver69929=_v_68938_words;V _method69930=this->_literals[11];V _method=j::get(_receiver69929,_method69930);j::Args _params69931=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params69931,_receiver69929);})();V _method69927=this->_literals[10];V _method=j::get(_receiver69926,_method69927);j::Args _params69928=j::Args{this->_literals[33]};return j::call(_method,_params69928,_receiver69926);})());_text69925+=u" and ";_text69925+=j::string(([&]()->V{V _receiver69932=_v_68938_words;V _method69933=this->_literals[566];V _method=j::get(_receiver69932,_method69933);j::Args _params69934=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params69934,_receiver69932);})());_text69925+=u"";return V(std::move(_text69925));})():([&]()->V{V _logical69935=j::get(_v_68938_words,V(0.0));return j::nullish(_logical69935)?this->_literals[4]:_logical69935;})());
return V{};
},1);
this->_v_68943_fail.get()=j::function([=](const j::Args &_args_fn68944,const V &_receiver_fn68944,const V &_self_fn68944) mutable ->V{
V _v_68945_what;
_v_68945_what=_args_fn68944[0];
{
j::raise(([&]()->V{V _callee69937=j::builtin("Error");return j::construct(_callee69937,j::Args{([&]()->V{std::u16string _text69936;_text69936+=u"ascii.rest: ";_text69936+=j::string(_v_68945_what);_text69936+=u"";return V(std::move(_text69936));})()});})());

}

return V{};
},1);
this->_v_68946_whole.get()=j::function([=](const j::Args &_args_fn68947,const V &_receiver_fn68947,const V &_self_fn68947) mutable ->V{
V _v_68948_v;
V _v_68949_name;
V _v_68950_least;
_v_68948_v=_args_fn68947[0];
_v_68949_name=_args_fn68947[1];
_v_68950_least=_args_fn68947[2];
return (j::truth(([&]()->V{V _logical69938=([&]()->V{V _lhs69939=_v_68948_v;V _rhs69940=j::builtin("undefined");return V(j::equal(_lhs69939,_rhs69940,true));})();return !j::truth(_logical69938)?([&]()->V{V _logical69941=([&]()->V{V _receiver69942=j::builtin("Number");V _method69943=this->_literals[567];V _method=j::get(_receiver69942,_method69943);j::Args _params69944=j::Args{_v_68948_v};return j::call(_method,_params69944,_receiver69942);})();return j::truth(_logical69941)?([&]()->V{V _lhs69945=_v_68948_v;V _rhs69946=_v_68950_least;return j::binary(">=",_lhs69945,_rhs69946);})():_logical69941;})():_logical69938;})())?_v_68948_v:([&]()->V{V _callee69949=this->_v_68943_fail.get();return j::call(_callee69949,j::Args{([&]()->V{std::u16string _text69947;_text69947+=u"";_text69947+=j::string(_v_68949_name);_text69947+=u" takes a whole number of ";_text69947+=j::string(_v_68950_least);_text69947+=u" or more, not ";_text69947+=j::string(([&]()->V{V _callee69948=j::builtin("String");return j::call(_callee69948,j::Args{_v_68948_v});})());_text69947+=u"";return V(std::move(_text69947));})()});})());
return V{};
},3);
this->_v_68951_positive.get()=j::function([=](const j::Args &_args_fn68952,const V &_receiver_fn68952,const V &_self_fn68952) mutable ->V{
V _v_68953_v;
V _v_68954_name;
_v_68953_v=_args_fn68952[0];
_v_68954_name=_args_fn68952[1];
return (j::truth(([&]()->V{V _logical69950=([&]()->V{V _lhs69951=_v_68953_v;V _rhs69952=j::builtin("undefined");return V(j::equal(_lhs69951,_rhs69952,true));})();return !j::truth(_logical69950)?([&]()->V{V _logical69953=([&]()->V{V _logical69954=([&]()->V{V _lhs69955=j::unary("typeof",_v_68953_v);V _rhs69956=this->_literals[37];return V(j::equal(_lhs69955,_rhs69956,true));})();return j::truth(_logical69954)?([&]()->V{V _receiver69957=j::builtin("Number");V _method69958=this->_literals[63];V _method=j::get(_receiver69957,_method69958);j::Args _params69959=j::Args{_v_68953_v};return j::call(_method,_params69959,_receiver69957);})():_logical69954;})();return j::truth(_logical69953)?([&]()->V{V _lhs69960=_v_68953_v;V _rhs69961=V(0.0);return j::binary(">",_lhs69960,_rhs69961);})():_logical69953;})():_logical69950;})())?_v_68953_v:([&]()->V{V _callee69964=this->_v_68943_fail.get();return j::call(_callee69964,j::Args{([&]()->V{std::u16string _text69962;_text69962+=u"";_text69962+=j::string(_v_68954_name);_text69962+=u" takes a number above 0, not ";_text69962+=j::string(([&]()->V{V _callee69963=j::builtin("String");return j::call(_callee69963,j::Args{_v_68953_v});})());_text69962+=u"";return V(std::move(_text69962));})()});})());
return V{};
},2);
this->_v_68955_chars.get()=j::function([=](const j::Args &_args_fn68956,const V &_receiver_fn68956,const V &_self_fn68956) mutable ->V{
V _v_68957_v;
j::Cell _v_68958_name;
j::Cell _v_68959_most;
_v_68957_v=_args_fn68956[0];
_v_68958_name.get()=_args_fn68956[1];
_v_68959_most.get()=_args_fn68956[2];
{
V _v_68960_check;
_v_68960_check=j::function([=](const j::Args &_args_fn68961,const V &_receiver_fn68961,const V &_self_fn68961) mutable ->V{
V _v_68962_s;
_v_68962_s=_args_fn68961[0];
return (j::truth(([&]()->V{V _logical69965=([&]()->V{V _logical69966=([&]()->V{V _logical69967=([&]()->V{V _lhs69968=j::unary("typeof",_v_68962_s);V _rhs69969=this->_literals[31];return V(j::equal(_lhs69968,_rhs69969,true));})();return j::truth(_logical69967)?([&]()->V{V _lhs69970=j::get(([&]()->V{j::Args _array69972;for(const auto &_value:j::elements(_v_68962_s))_array69972.push_back(_value);return j::array(std::move(_array69972));})(),this->_literals[13]);V _rhs69971=V(1.0);return j::binary(">=",_lhs69970,_rhs69971);})():_logical69967;})();return j::truth(_logical69966)?([&]()->V{V _lhs69973=j::get(([&]()->V{j::Args _array69975;for(const auto &_value:j::elements(_v_68962_s))_array69975.push_back(_value);return j::array(std::move(_array69975));})(),this->_literals[13]);V _rhs69974=_v_68959_most.get();return j::binary("<=",_lhs69973,_rhs69974);})():_logical69966;})();return j::truth(_logical69965)?j::unary("!",([&]()->V{V _receiver69976=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f]","");V _method69977=this->_literals[32];V _method=j::get(_receiver69976,_method69977);j::Args _params69978=j::Args{_v_68962_s};return j::call(_method,_params69978,_receiver69976);})()):_logical69965;})())?_v_68962_s:([&]()->V{V _callee69985=this->_v_68943_fail.get();return j::call(_callee69985,j::Args{([&]()->V{std::u16string _text69979;_text69979+=u"";_text69979+=j::string(_v_68958_name.get());_text69979+=u" takes ";_text69979+=j::string((j::truth(([&]()->V{V _lhs69980=_v_68959_most.get();V _rhs69981=V(1.0);return V(j::equal(_lhs69980,_rhs69981,true));})())?this->_literals[568]:this->_literals[569]));_text69979+=u", not ";_text69979+=j::string(([&]()->V{V _receiver69982=j::builtin("JSON");V _method69983=this->_literals[26];V _method=j::get(_receiver69982,_method69983);j::Args _params69984=j::Args{_v_68962_s};return j::call(_method,_params69984,_receiver69982);})());_text69979+=u"";return V(std::move(_text69979));})()});})());
return V{};
},1);
if(j::truth(([&]()->V{V _lhs69986=_v_68957_v;V _rhs69987=j::builtin("undefined");return V(j::equal(_lhs69986,_rhs69987,true));})())){return j::builtin("undefined");
}
if(j::truth(([&]()->V{V _logical69988=([&]()->V{V _lhs69989=j::unary("typeof",_v_68957_v);V _rhs69990=this->_literals[0];return V(j::equal(_lhs69989,_rhs69990,true));})();return j::truth(_logical69988)?([&]()->V{V _lhs69991=_v_68957_v;V _rhs69992=V::null();return V(!j::equal(_lhs69991,_rhs69992,true));})():_logical69988;})())){
V _v_68963_g;
_v_68963_g=_v_68957_v;
return ([&]()->V{V _obj69993=j::object();j::put(_obj69993,this->_literals[52],(j::truth(([&]()->V{V _lhs69994=j::get(_v_68963_g,this->_literals[52]);V _rhs69995=j::builtin("undefined");return V(j::equal(_lhs69994,_rhs69995,true));})())?j::builtin("undefined"):([&]()->V{V _callee69996=_v_68960_check;return j::call(_callee69996,j::Args{j::get(_v_68963_g,this->_literals[52])});})()));j::put(_obj69993,this->_literals[53],(j::truth(([&]()->V{V _lhs69997=j::get(_v_68963_g,this->_literals[53]);V _rhs69998=j::builtin("undefined");return V(j::equal(_lhs69997,_rhs69998,true));})())?j::builtin("undefined"):([&]()->V{V _callee69999=_v_68960_check;return j::call(_callee69999,j::Args{j::get(_v_68963_g,this->_literals[53])});})()));return _obj69993;})();

}

return ([&]()->V{V _callee70000=_v_68960_check;return j::call(_callee70000,j::Args{_v_68957_v});})();

}

return V{};
},3);
this->_v_68973_shapes.get()=j::function([=](const j::Args &_args_fn68974,const V &_receiver_fn68974,const V &_self_fn68974) mutable ->V{
V _v_68975_text;
j::Cell _v_68976_f;
_v_68975_text=_args_fn68974[0];
_v_68976_f.get()=_args_fn68974[1];
return ([&]()->V{V _receiver70004=([&]()->V{V _receiver70008=([&]()->V{V _receiver70014=([&]()->V{V _receiver70021=([&]()->V{j::Args _array70024;for(const auto &_value:j::elements(([&]()->V{V _callee70025=j::builtin("String");return j::call(_callee70025,j::Args{_v_68975_text});})()))_array70024.push_back(_value);return j::array(std::move(_array70024));})();V _method70022=this->_literals[572];V _method=j::get(_receiver70021,_method70022);j::Args _params70023=j::Args{j::function([=](const j::Args &_args_fn68977,const V &_receiver_fn68977,const V &_self_fn68977) mutable ->V{
V _v_68978_ch;
_v_68978_ch=_args_fn68977[0];
return ([&]()->V{j::Args _array70017;for(const auto &_value:j::elements((j::truth(j::get(_v_68976_f.get(),this->_literals[6]))?_v_68978_ch:([&]()->V{V _receiver70018=_v_68978_ch;V _method70019=this->_literals[7];V _method=j::get(_receiver70018,_method70019);j::Args _params70020=j::Args{};return j::call(_method,_params70020,_receiver70018);})())))_array70017.push_back(_value);return j::array(std::move(_array70017));})();
return V{};
},1)};return j::call(_method,_params70023,_receiver70021);})();V _method70015=this->_literals[12];V _method=j::get(_receiver70014,_method70015);j::Args _params70016=j::Args{j::function([=](const j::Args &_args_fn68979,const V &_receiver_fn68979,const V &_self_fn68979) mutable ->V{
V _v_68980_c;
_v_68980_c=_args_fn68979[0];
return (j::truth(([&]()->V{V _receiver70011=j::builtin("Object");V _method70012=this->_literals[2];V _method=j::get(_receiver70011,_method70012);j::Args _params70013=j::Args{j::get(_v_68976_f.get(),this->_literals[5]),_v_68980_c};return j::call(_method,_params70013,_receiver70011);})())?j::get(j::get(_v_68976_f.get(),this->_literals[5]),_v_68980_c):j::builtin("undefined"));
return V{};
},1)};return j::call(_method,_params70016,_receiver70014);})();V _method70009=this->_literals[9];V _method=j::get(_receiver70008,_method70009);j::Args _params70010=j::Args{j::function([=](const j::Args &_args_fn68981,const V &_receiver_fn68981,const V &_self_fn68981) mutable ->V{
V _v_68982_g;
_v_68982_g=_args_fn68981[0];
return ([&]()->V{V _callee70007=j::builtin("Boolean");return j::call(_callee70007,j::Args{_v_68982_g});})();
return V{};
},1)};return j::call(_method,_params70010,_receiver70008);})();V _method70005=this->_literals[12];V _method=j::get(_receiver70004,_method70005);j::Args _params70006=j::Args{j::function([=](const j::Args &_args_fn68983,const V &_receiver_fn68983,const V &_self_fn68983) mutable ->V{
V _v_68984_g;
_v_68984_g=_args_fn68983[0];
return ([&]()->V{V _receiver70001=_v_68984_g;V _method70002=this->_literals[571];V _method=j::get(_receiver70001,_method70002);j::Args _params70003=j::Args{this->_literals[570]};return j::call(_method,_params70003,_receiver70001);})();
return V{};
},1)};return j::call(_method,_params70006,_receiver70004);})();
return V{};
},2);
this->_v_69006_pick.get()=j::function([=](const j::Args &_args_fn69007,const V &_receiver_fn69007,const V &_self_fn69007) mutable ->V{
V _v_69008_themed;
V _v_69009_theme;
_v_69008_themed=_args_fn69007[0];
_v_69009_theme=_args_fn69007[1];
return (j::truth(([&]()->V{V _logical70026=([&]()->V{V _logical70027=([&]()->V{V _lhs70028=_v_69008_themed;V _rhs70029=V::null();return V(!j::equal(_lhs70028,_rhs70029,true));})();return j::truth(_logical70027)?([&]()->V{V _lhs70030=j::unary("typeof",_v_69008_themed);V _rhs70031=this->_literals[0];return V(j::equal(_lhs70030,_rhs70031,true));})():_logical70027;})();return j::truth(_logical70026)?j::unary("!",([&]()->V{V _receiver70032=j::builtin("Array");V _method70033=this->_literals[38];V _method=j::get(_receiver70032,_method70033);j::Args _params70034=j::Args{_v_69008_themed};return j::call(_method,_params70034,_receiver70032);})()):_logical70026;})())?j::get(_v_69008_themed,_v_69009_theme):_v_69008_themed);
return V{};
},2);
}
};
}
std::unique_ptr<Module> new_banner(){return std::make_unique<Generated_banner>();}
}
