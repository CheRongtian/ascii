#include "../draw.hpp"
#include "../catalog.hpp"
namespace ascii {
const AsciiPieceMeta &progress_bar_meta(){return catalog_meta("progress-bar");}
std::unique_ptr<Piece> make_progress_bar(const AsciiPieceOptions &options){
    const auto labels=Options(options).strings("labels",{u"fetching",u"unpacking",u"indexing",u"building",u"linking"});
    struct Bar{double fill,phase;int64_t k=-1;std::vector<std::array<double,2>> knots;};
    std::array<Bar,5> bars={Bar{4.2,2.9},Bar{3.4,.7},Bar{5.6,4.6},Bar{3.8,1.6},Bar{4.8,1.9}};
    return drawing_piece([labels,bars](double t,bool,bool,Piece &piece) mutable {
        Grid g(48,11);
        for(int i=0;i<5;++i){auto &bar=bars[i];const double cycle=bar.fill+1.1+.4,tt=t+bar.phase;const int64_t k=int64_t(std::floor(tt/cycle));const double u=tt-k*cycle;double p;
            if(u>=bar.fill+1.1)p=0;else if(u>=bar.fill)p=1;else{
                if(bar.k!=k){bar.k=k;Random rand(uint32_t(i*7919+k*104729+17));const int legs=4+int(std::floor(rand()*3));std::vector<double>dt(legs),dv(legs);double st=0,sv=0;for(int j=0;j<legs;++j){dt[j]=.5+rand();dv[j]=.2+rand();st+=dt[j];sv+=dv[j];}bar.knots={{{0,0}}};double a=0,b=0;for(int j=0;j<legs;++j)bar.knots.push_back({a+=dt[j]/st,b+=dv[j]/sv});bar.knots[legs]={1,1};}
                const double x=u/bar.fill;size_t j=1;while(bar.knots[j][0]<x)++j;const auto a=bar.knots[j-1],b=bar.knots[j];const double s=(x-a[0])/(b[0]-a[0]);p=a[1]+(b[1]-a[1])*s*s*(3-2*s);
            }
            std::u16string art;const int n=int(std::floor(p*26));
            if(i==0)art=u"["+repeat(u"=",n)+(n<26?u">"+repeat(u" ",25-n):u"")+u"]";
            if(i==1){const int e=jsround(p*26*8),a=e>>3;art=u"▕"+repeat(u"█",a)+(a<26?std::u16string(1,u" ▏▎▍▌▋▊▉"[e&7])+repeat(u" ",25-a):u"")+u"▏";}
            if(i==2)art=u"["+repeat(u"#",n)+repeat(u".",26-n)+u"]";
            if(i==3){const int a=int(std::floor(p*14+1e-9));art=(repeat(u"█ ",a)+repeat(u"░ ",14-a)).substr(0,27)+u" ";}
            if(i==4){const int h=int(std::floor(p*56)),a=h>>1;art=repeat(u"━",a)+(a<28?std::u16string(h&1?u"╾":u"─")+repeat(u"─",27-a):u"");}
            const auto label=pad(i<int(labels.size())?labels[i].substr(0,9):u"",10);
            g.write(0,1+i*2,u"  "+label+art+u"  "+leftpad(integer(int(std::floor(p*100)))+u"%",4));
        }g.publish(piece);
    });
}
}
