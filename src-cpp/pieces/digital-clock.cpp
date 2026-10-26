#include "../draw.hpp"
#include "../catalog.hpp"
namespace ascii {
const AsciiPieceMeta &digital_clock_meta(){return catalog_meta("digital-clock");}
std::unique_ptr<Piece> make_digital_clock(const AsciiPieceOptions &options){
    const Options o(options);const bool hour12=o.boolean("hour12",false),seconds=o.boolean("seconds",true),date=o.boolean("date",true);
    return drawing_piece([hour12,seconds,date,clock=WallClock{}](double t,bool,bool,Piece &p)mutable{
        Grid g(70,11);const int top=date?1:2;const int segs[][4]={{0,0,2,5},{1,2,6,7},{4,5,6,7},{6,6,2,5},{4,5,0,1},{1,2,0,1},{3,3,2,5}};const int masks[]={0x3f,6,0x5b,0x4f,0x66,0x6d,0x7d,7,0x7f,0x6f};const double secs=clock.seconds(t);const auto now=WallClock::local(secs);const bool on=secs-std::floor(secs)<.5,pm=now.tm_hour>=12;int h=now.tm_hour;if(hour12)h=h%12?h%12:12;const int pairs[]={h,now.tm_min,now.tm_sec};const int count=seconds?3:2,width=count*18+(count-1)*6;int x=int(std::floor((70-width)/2.));
        const auto digit=[&](int col,int n){int mask=n<0?0:masks[n];for(int s=0;s<7;++s)for(int r=segs[s][0];r<=segs[s][1];++r)for(int c=segs[s][2];c<=segs[s][3];++c)g.put(col+c,top+r,(mask>>s)&1?u'█':u'░');};
        for(int i=0;i<count;++i){if(i){for(int r:{2,4}){g.put(x+2,top+r,on?u'█':u'░');g.put(x+3,top+r,on?u'█':u'░');}x+=6;}digit(x,i==0&&hour12&&pairs[i]<10?-1:pairs[i]/10);digit(x+10,pairs[i]%10);x+=18;}
        if(date){const std::u16string days[]={u"sunday",u"monday",u"tuesday",u"wednesday",u"thursday",u"friday",u"saturday"},months[]={u"january",u"february",u"march",u"april",u"may",u"june",u"july",u"august",u"september",u"october",u"november",u"december"};auto line=days[now.tm_wday]+u" "+integer(now.tm_mday)+u" "+months[now.tm_mon]+u" "+integer(now.tm_year+1900);if(hour12)line+=pm?u"  pm":u"  am";g.center(top+8,line);}g.publish(p);
    });
}
}
