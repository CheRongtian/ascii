#include "../draw.hpp"
#include "../catalog.hpp"
namespace ascii {
const AsciiPieceMeta &dividers_meta(){return catalog_meta("dividers");}
std::unique_ptr<Piece> make_dividers(const AsciiPieceOptions &options){
    const Options o(options);int width=int(std::floor(o.number("width",59)));if(!width)width=59;const int W=std::max(13,std::min(63,width));
    const auto rep=[](std::u16string_view unit,int n){return repeat(unit,std::max(0,int(std::ceil(double(n)/unit.size())))).substr(0,std::max(0,n));};
    const auto mirror=[](std::u16string s){std::reverse(s.begin(),s.end());const std::u16string a=u"<>╱╲╶╴╡╞",b=u"><╲╱╴╶╞╡";for(auto &c:s){auto i=a.find(c);if(i!=a.npos)c=b[i];}return s;};
    const auto sym=[=](std::u16string h,std::u16string m=u""){return h+m+mirror(h);};
    const auto around=[=](std::u16string m,std::u16string f,int n){int side=int(std::floor((n-double(m.size()))/2));return sym(rep(f,side),int(m.size())+2*side<n?f+m:m);};
    const auto odd=[](int n){return n-(n%2?0:1);};const auto part=[=](double f){return std::max(5,jsround(W*f));};
    std::u16string tapered;
    const int h=W/2,run=h-8,thin=int(std::ceil(run*0.45));
    tapered=h<12?rep(u"─",W):sym(u"· · ─ ─ "+rep(u"─",thin)+rep(u"━",run-thin),W%2?u"━":u"");
    const std::u16string sheet[]={rep(u"─",W),rep(u"═",W),rep(u"· ",odd(W)),rep(u"━",odd(part(.25))),tapered,around(u" · ° · ",u"─",W),u"*     *     *",sym(u"╶"+rep(u"─",(odd(part(.5))-5)/2)+u" ",u"°"),around(u"╡ ° ╞",u"═",odd(part(.7))),sym(rep(u"─<>",int(std::floor((part(.73)-1)/6.))*3),u"─"),rep(u"╱╲",part(.55)-part(.55)%2),rep(u"_.·°·.",int(std::floor((part(.73)-1)/6.))*6)+u"_"};
    Grid base(63,25);for(int i=0;i<12;++i)base.center(1+i*2,sheet[i]);
    return drawing_piece([base](double,bool,bool,Piece &p){base.publish(p);});
}
}
