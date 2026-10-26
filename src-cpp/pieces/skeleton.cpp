#include "../draw.hpp"
#include "../catalog.hpp"
namespace ascii {
const AsciiPieceMeta &skeleton_meta(){return catalog_meta("skeleton");}
std::unique_ptr<Piece> make_skeleton(const AsciiPieceOptions &options){
    const Options o(options);const bool avatar=o.boolean("avatar",true),image=o.boolean("image",true);const int lines=int(std::floor(o.number("lines",3)));
    struct Block{int h;std::vector<std::array<int,3>>runs;};std::vector<Block>blocks;
    if(avatar){Block b{6,{}};for(int r=0;r<6;++r){int c0=-1,c1=-1;for(int c=3;c<15;++c){int hit=0;for(int j=0;j<4;++j)for(int i=0;i<4;++i){const double x=(c+.125+i*.25-9)/2,y=r+.125+j*.25-3;if(x*x+y*y<9)++hit;}if(hit>=8){if(c0<0)c0=c;c1=c;}}b.runs.push_back({r,c0,c1});}b.runs.push_back({1,18,35});b.runs.push_back({4,18,29});blocks.push_back(b);}else blocks.push_back({3,{{0,3,20},{2,3,13}}});
    if(image){Block b{6,{}};for(int r=0;r<6;++r)b.runs.push_back({r,3,48});blocks.push_back(b);}
    int used=0;for(auto &b:blocks)used+=b.h+1;const int n=std::max(0,std::min(lines,int(std::floor((23-4-used+1)/2.))));
    if(n){Block b{n*2-1,{}};for(int i=0;i<n;++i){const double factors[]={1,.91,.96,.87};const double f=i==n-1?(n==1?.72:.58):factors[i%4];b.runs.push_back({i*2,3,3+jsround(46*f)-1});}blocks.push_back(b);}
    int inner=int(blocks.size())-1;for(auto &b:blocks)inner+=b.h;const int H=inner+4,top=int(std::floor((23-H)/2.));Grid base(52,23);base.box(0,top,52,H,u"╭╮╰╯─│");std::vector<uint8_t>mask(52*23);int y=top+2;for(auto &b:blocks){for(auto run:b.runs)for(int c=run[1];c<=run[2];++c)if(y+run[0]>=0&&y+run[0]<23&&c>=0&&c<52)mask[(y+run[0])*52+c]=1;y+=b.h+1;}const double mid=top+H/2.;
    return drawing_piece([base,mask,mid](double t,bool paper,bool,Piece &p){auto g=base;const std::u16string shade=paper?u"▒░·":u"░▒▓";const double x=-12+std::fmod(t/1.8+.3,1.)*76;for(int k=0;k<52*23;++k)if(mask[k]){const double d=std::abs(k%52+.5-x-(mid-k/52)*.8);g.chars[k]=shade[d<.5?2:d<4.5?1:0];}g.publish(p);});
}
}
