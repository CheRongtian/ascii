#include "../draw.hpp"
#include "../catalog.hpp"
namespace ascii {
const AsciiPieceMeta &calendar_meta(){return catalog_meta("calendar");}
std::unique_ptr<Piece> make_calendar(const AsciiPieceOptions &options){
    const Options o(options);const bool monday=o.boolean("monday",false),time=o.boolean("time",true);
    return drawing_piece([monday,time,clock=WallClock{},key=std::string{},page=std::vector<std::u16string>{}](double t,bool,bool,Piece &p)mutable{
        const std::u16string days[]={u"sunday",u"monday",u"tuesday",u"wednesday",u"thursday",u"friday",u"saturday"},months[]={u"january",u"february",u"march",u"april",u"may",u"june",u"july",u"august",u"september",u"october",u"november",u"december"};
        const auto now=WallClock::local(clock.seconds(t));const int y=now.tm_year+1900,m=now.tm_mon,d=now.tm_mday;const std::string today=std::to_string(y)+"-"+std::to_string(m)+"-"+std::to_string(d);
        const auto margin=[](std::u16string s){return clip(u"  "+s,32);};
        if(key!=today){key=today;std::tm first=now;first.tm_mday=1;first.tm_hour=12;first.tm_min=first.tm_sec=0;std::mktime(&first);std::tm end=first;end.tm_mon++;end.tm_mday=0;std::mktime(&end);const int lead=(first.tm_wday-(monday?1:0)+7)%7;page={std::u16string(32,u' '),margin(repeat(u" ",std::max(0,int(std::floor((28-double(months[m].size()+1+integer(y).size()))/2))))+months[m]+u" "+integer(y)),margin(repeat(u"─",28))};std::u16string header;for(int c=0;c<7;++c)header+=u" "+days[(c+(monday?1:0))%7].substr(0,2)+u" ";page.push_back(margin(header));for(int w=0;w<6;++w){std::u16string s;for(int c=0;c<7;++c){const int n=w*7+c-lead+1;s+=n<1||n>end.tm_mday?u"    ":n==d?(n<10?u" [":u"[")+integer(n)+u"]":u" "+leftpad(integer(n),2)+u" ";}page.push_back(margin(s));}page.push_back(margin(repeat(u"─",28)));}
        Grid g(32,13);for(size_t r=0;r<page.size();++r)g.write(0,int(r),page[r]);const auto day=days[now.tm_wday]+u" "+integer(d);const auto two=[](int n){return leftpad(integer(n),2,u'0');};const auto shown=time?two(now.tm_hour)+u":"+two(now.tm_min)+u":"+two(now.tm_sec):u"";g.write(0,11,margin(u" "+day+leftpad(shown,26-int(day.size()))));g.publish(p);
    });
}
}
