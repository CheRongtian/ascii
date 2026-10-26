#include "../draw.hpp"
#include "../catalog.hpp"
namespace ascii {
const AsciiPieceMeta &box_frames_meta() { return catalog_meta("box-frames"); }
std::unique_ptr<Piece> make_box_frames(const AsciiPieceOptions &) {
    Grid base(78,20);
    const std::u16string names[]={u"single",u"double",u"rounded",u"heavy",u"dashed",u"ascii",u"mixed",u"titled",u"shade",u"block",u"shadow",u"corners"};
    const std::u16string edges[]={u"┌┐└┘──││",u"╔╗╚╝══║║",u"╭╮╰╯──││",u"┏┓┗┛━━┃┃",u"┌┐└┘┄┄┆┆",u"++++--||",u"╒╕╘╛══││",u"┌┐└┘──││",u"",u"▛▜▙▟▀▄▌▐",u"┌┐└┘──││",u""};
    for(int i=0;i<12;++i){
        const int y=1+(i/4)*6,x=1+(i%4)*20;
        if(i==11){base.write(x,y,u"┌──");base.write(x+13,y,u"──┐");base.write(x,y+4,u"└──");base.write(x+13,y+4,u"──┘");}
        else if(i==8){for(int c=0;c<16;++c){base.put(x+c,y,u'░');base.put(x+c,y+4,u'░');}for(int r=1;r<4;++r)for(int c:{0,1,14,15})base.put(x+c,y+r,u'░');}
        else {const auto &g=edges[i];for(int c=1;c<15;++c){base.put(x+c,y,g[4]);base.put(x+c,y+4,g[5]);}for(int r=1;r<4;++r){base.put(x,y+r,g[6]);base.put(x+15,y+r,g[7]);}base.put(x,y,g[0]);base.put(x+15,y,g[1]);base.put(x,y+4,g[2]);base.put(x+15,y+4,g[3]);}
        if(i==10){for(int r=1;r<=5;++r){base.put(x+16,y+r,u'▒');base.put(x+17,y+r,u'▒');}for(int c=2;c<16;++c)base.put(x+c,y+5,u'▒');}
        if(i==7)base.write(x+2,y,u" "+names[i]+u" ");else base.write(x+(16-int(names[i].size()))/2,y+2,names[i]);
    }
    return drawing_piece([base](double,bool,bool,Piece &p){base.publish(p);});
}
}
