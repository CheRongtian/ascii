// Port of ascii.rest (MIT). Original algorithms remain in src/pieces/.
#include "../core.hpp"

namespace ascii {
namespace {
constexpr uint32_t EARTH_PALETTE[] = {
            0x18181b,0x232326,0x303033,0x414143,0x555556,0x6b6a69,0x83817d,0x9c9993,
            0xb6b2aa,0xcfcac1,0xe6e1d8,0xf7f4ee,0x0c1120,0x131a2e,0x1b2540,0x262f4a,
            0xdfe9ff,0x0a2259,0x0f2f72,0x15408c,0x1d53a6,0x2a69bf,0x4386d3,0x6eaeea,
            0xa8d3f6,0xe8f0fa,0xc2d0e3,0x8b9fbc,0x2f4a26,0x3b5a2c,0x5b7238,0x7a9150,
            0x77783f,0x8f8550,0xa8955e,0x6b5634,0xb9774a,0x8a4838};

// The hash wraps exactly like JavaScript's Math.imul and bitwise operators.
double hash(double x, double y) {
    uint32_t h = uint32_t(int32_t(x)) * 374761393u + uint32_t(int32_t(y)) * 668265263u;
    h = (h ^ (h >> 13)) * 1274126177u;
    return double(h ^ (h >> 16)) / 4294967296.;
}
double noise(double x, double y, double period) {
    const double xi = std::floor(x), yi = std::floor(y), fx = x - xi, fy = y - yi;
    const double u = fx * fx * (3 - 2 * fx), v = fy * fy * (3 - 2 * fy);
    double x0 = xi, x1 = xi + 1;
    if (period) { x0 = std::fmod(std::fmod(xi, period) + period, period); x1 = std::fmod(x0 + 1, period); }
    const double a = hash(x0, yi), b = hash(x1, yi), c = hash(x0, yi + 1), d = hash(x1, yi + 1);
    return a + (b - a) * u + (c - a) * v + (a - b - c + d) * u * v;
}
double fbm(double x, double y, int octaves, double period) {
    double s = 0, n = 0, amp = 0.5, f = 1;
    for (int i = 0; i < octaves; ++i) { s += amp * noise(x * f, y * f, period * f); n += amp; amp *= 0.5; f *= 2; }
    return s / n;
}
double bowl(double q, double r) { return r * ((q < 1 ? -0.36 * (1 - q * q) : 0) + 0.14 * std::exp(-sq((q - 1) / 0.25))); }
double craters(double X, double Z, double cell, double salt, double r0, double r1, double p) {
    const int ci = int(std::floor(X / cell)), cj = int(std::floor(Z / cell));
    double h = 0;
    for (int j = cj - 1; j <= cj + 1; ++j) for (int i = ci - 1; i <= ci + 1; ++i) {
        if (hash(i + salt, j - salt) > p) continue;
        const double cx = (i + hash(i, j + salt * 3)) * cell, cz = (j + hash(i + salt * 5, j)) * cell;
        const double e = hash(j + salt, i - salt * 7), r = cell * (r0 + (r1 - r0) * e * e);
        const double dx = X - cx, dz = Z - cz, d2 = dx * dx + dz * dz;
        if (d2 > 4 * r * r) continue;
        h += bowl(std::sqrt(d2) / r, r) * 0.95;
    }
    return h;
}
const std::array<std::array<double, 3>, 6> ROCKS = {{{30,50,2.4},{62,63,1.8},{12,70,1.3},{-4,45,1.2},{90,55,1.6},{46,90,1.4}}};
double height(double X, double Z) {
    double h = 6 * fbm(X * 0.006 + 50, Z * 0.006 + 50, 3, 0) + 0.6 * fbm(X * 0.04, Z * 0.04, 2, 0);
    if (Z > 150) {
        const double lift = smooth(150, 300, Z), m = 1 - std::abs(2 * fbm(X * 0.006 + 7, Z * 0.006, 4, 0) - 1);
        h += lift * (28 * std::exp(-sq((X + 260) / 230)) + 45 * (m * m - 0.35));
        const double ridge = std::exp(-sq((Z - 205) / 20)) * std::exp(-sq((X + 140) / 130));
        h += ridge * 22 * (0.35 + fbm(X * 0.018 + 3, Z * 0.01, 3, 0));
    }
    if (Z > 90) h += craters(X, Z, 110, 11, 0.14, 0.34, 0.55) * smooth(90, 150, Z);
    if (Z < 300) h += craters(X, Z, 34, 23, 0.12, 0.36, 0.85);
    if (Z < 170) h += craters(X, Z, 10, 37, 0.12, 0.34, 0.85) * smooth(170, 110, Z);
    const double dx = X + 24, dz = Z - 58, q = std::sqrt(dx * dx + dz * dz) / 16;
    if (q < 2) h += bowl(q, 16);
    if (Z < 90) {
        const int ci = int(std::floor(X / 5)), cj = int(std::floor(Z / 5));
        if (hash(ci + 91, cj) < 0.14) {
            const double bx = (ci + 0.2 + 0.6 * hash(ci, cj + 92)) * 5, bz = (cj + 0.2 + 0.6 * hash(ci + 93, cj)) * 5;
            const double br = 0.3 + 0.5 * sq(hash(ci + 94, cj + 95)), d2 = (sq(X - bx) + sq(Z - bz)) / (br * br);
            if (d2 < 4) h += br * 0.9 * std::exp(-d2 * 1.4);
        }
        for (const auto &rock : ROCKS) {
            const double bx = rock[0], bz = rock[1], br = rock[2], d2 = (sq(X - bx) + sq(Z - bz)) / (br * br);
            if (d2 < 1) h += br * (0.85 + 0.3 * noise(X * 1.3, Z * 1.3, 0)) * std::sqrt(1 - d2);
        }
    }
    return h;
}

struct Earthrise : Piece {
    static constexpr int W = 200, H = 100, N = W * H, TW = 192, TH = 96;
    const std::array<double, 3> SUN = [] {
        const double l = std::hypot(0.94, 0.14, -0.3);
        return std::array<double, 3>{0.94/l, 0.14/l, -0.3/l};
    }();
    const std::array<double, 3> L = {SUN[0], SUN[1], -SUN[2]};
    const std::array<double, 3> HV = [this] {
        const double l = std::hypot(L[0], L[1], L[2] + 1);
        return std::array<double, 3>{L[0]/l, L[1]/l, (L[2]+1)/l};
    }();
    std::array<std::array<double, 3>, 38> palette;
    std::vector<uint8_t> lut = std::vector<uint8_t>(32768, 255);
    std::vector<char16_t> chars = std::vector<char16_t>(N, u' ');
    Floats sr = Floats(N), sg = Floats(N), sb = Floats(N), sf = Floats(N), scap = Floats(N, 1);
    Floats tr = Floats(TW*TH), tg = Floats(TW*TH), tb = Floats(TW*TH), sea = Floats(TW*TH), cloud = Floats(TW*TH);
    std::vector<int> box;
    struct Star { int k, x, r; double s, p, ph; bool core; };
    std::vector<Star> twinkle;
    std::array<uint8_t, H> dirty{};
    std::array<std::u16string, H> lines;
    const double ct = std::cos(0.4), st = std::sin(0.4), cn = std::cos(0.22), sn = std::sin(0.22);

    uint8_t nearest(double r, double g, double b) {
        const int k = (std::min(31, int(r * 31.99)) << 10) | (std::min(31, int(g * 31.99)) << 5) | std::min(31, int(b * 31.99));
        if (lut[k] != 255) return lut[k];
        int best = 0; double bd = 1e9;
        for (int i = 0; i < int(palette.size()); ++i) {
            const double dr = palette[i][0]-r, dg = palette[i][1]-g, db = palette[i][2]-b;
            const double d = 0.3*dr*dr + 0.5*dg*dg + 0.2*db*db;
            if (d < bd) { bd = d; best = i; }
        }
        return lut[k] = uint8_t(best);
    }
    void dot(int k, int x, int r, double cr, double cg, double cb, double floor, double cap) {
        static constexpr int bayer[] = {0,8,2,10,12,4,14,6,3,11,1,9,15,7,13,5};
        static constexpr char16_t dots[] = u" ·•●";
        static constexpr double cover[] = {0,0.3,0.6,1};
        const double peak = std::max({cr,cg,cb,1e-4});
        const double level = clamp(floor + (1-floor)*std::pow(peak,0.85)*0.95);
        const int step = std::max(0,std::min(3,jsround(level*3 + (bayer[(r&3)*4+(x&3)]/16. - 0.47))));
        chars[k] = dots[step];
        const double want = step ? std::min(1.,(level+0.06)/cover[step]) : 0;
        const double s = std::min(cap,0.3+0.7*want)/peak;
        colors[k] = nearest(clamp(cr*s),clamp(cg*s),clamp(cb*s));
    }
    Earthrise() {
        colors.resize(N);
        const auto &hexes = EARTH_PALETTE;
        for (int i = 0; i < 38; ++i) palette[i] = {double((hexes[i]>>16)&255)/255, double((hexes[i]>>8)&255)/255, double(hexes[i]&255)/255};
        std::vector<uint8_t> ground(N);
        std::vector<int16_t> top(W,H);
        Floats gx(N),gz(N),gy(N);
        const double camY = height(0,7)+20;
        for (int c = 0; c < W; ++c) {
            const double dir = (c+0.5-W/2)/112;
            int topR = H;
            double Z = 26, prevY = 0, prevZ = 0, prevF = 1e9;
            while (Z < 520 && topR > 0) {
                const double X = dir*Z, hy = height(X,Z), Y = hy-(Z*Z)/(2*1500);
                const double yf = 37-(112*(Y-camY))/Z;
                const int r0 = std::max(0,int(std::ceil(yf-0.5)));
                for (int r = r0; r < topR; ++r) { check_cancel();
                    const double a = prevF > yf+1e-6 ? clamp((prevF-(r+0.5))/(prevF-yf)) : 1;
                    const int k = r*W+c;
                    ground[k] = 1;
                    gz[k] = float(prevZ ? mix(prevZ,Z,a) : Z);
                    gx[k] = float(dir*get(gz,k));
                    gy[k] = float(prevZ ? mix(prevY,hy,a) : hy);
                }
                if (r0 < topR) topR = r0;
                prevF=yf; prevY=hy; prevZ=Z;
                Z += 0.03+Z*0.012;
            }
            top[c] = int16_t(topR);
        }
        for (int r = 0; r < H; ++r) for (int x = 0; x < W; ++x) {
            const int k=r*W+x;
            if (!ground[k]) continue;
            const double X=get(gx,k), Z=get(gz,k), Y=get(gy,k), e=0.1+Z*0.004;
            const double hx=(height(X+e,Z)-height(X-e,Z))/(2*e), hz=(height(X,Z+e)-height(X,Z-e))/(2*e);
            const double nl=std::hypot(hx,1.,hz), lam=(-hx*SUN[0]+SUN[1]-hz*SUN[2])/nl;
            const double vx=-X,vy=camY-Y,vz=-Z,vl=std::hypot(vx,vy,vz);
            const double mu=std::max(0.02,(-hx*vx+vy-hz*vz)/(nl*vl));
            double lit=0;
            if (lam>0) {
                lit=1;
                double s=0.1+Z*0.003;
                while (s<120) {
                    const double px=X+SUN[0]*s,pz=Z+SUN[2]*s,py=Y+SUN[1]*s,d=py-height(px,pz);
                    if (d<0) {lit=0;break;}
                    lit=std::min(lit,(d*30)/s);
                    s+=0.05+s*0.2;
                }
                lit=smooth(0,1,lit);
            }
            const double albedo=0.5+0.9*fbm(X*0.025+3,Z*0.025,3,0)+0.3*(fbm(X*0.35,Z*0.35,2,0)-0.5)-0.22*smooth(0.46,0.64,fbm(X*0.0035,Z*0.0035+20,3,0));
            const double ls=lam>0 ? ((0.2*lam)/(lam+mu)+2.6*lam)*lit : 0;
            const double vig=1-0.3*smooth(84,102,r)*smooth(30,100,std::abs(x-100));
            double b=std::pow((1-std::exp(-ls*1.5))*albedo,1.)*vig;
            const int crest=r-top[x];
            if (crest<2 && lit>0.2) b=std::max(b,(crest?0.55:0.85)*albedo);
            const double fill=lit>0.02 || b>0.03 ? 0.008+0.007*clamp(-hz/nl+0.5) : 0;
            sr[k]=float(b*1.+fill*0.75); sg[k]=float(b*0.95+fill*0.85); sb[k]=float(b*0.86+fill*1.2);
            sf[k]=0; scap[k]=float(0.42+0.62*b);
        }
        for (int r=0;r<H;++r) for (int x=0;x<W;++x) {
            const int k=r*W+x;
            if (ground[k]) continue;
            const double bandD=(r-(4+x*0.32))/1.05;
            const double band=std::exp(-sq(bandD/10))*smooth(0.35,0.65,fbm(x*0.05,r*0.08,3,0))*smooth(120,70,x);
            double cr=0,cg=0,cb=0;
            const double hs=hash(x*3+1,r*7+2);
            const bool near=std::hypot(x+0.5-141,r+0.5-(32-5./2))<2*22;
            if (hs>0.994-0.05*band && !near) {
                const double m=std::pow(hash(x+17,r+29),3),s=0.2+0.5*m,tint=hash(x+5,r+77);
                const std::array<double,3> rgb=tint<0.3?std::array<double,3>{0.84,0.9,1}:tint>0.88?std::array<double,3>{1,0.93,0.84}:std::array<double,3>{0.96,0.96,0.98};
                cr=s*rgb[0];cg=s*rgb[1];cb=s*rgb[2];
            }
            sr[k]=float(cr);sg[k]=float(cg);sb[k]=float(cb);sf[k]=0;scap[k]=1;
        }
        for (int k=0;k<N;++k) dot(k,k%W,k/W,get(sr,k),get(sg,k),get(sb,k),get(sf,k),get(scap,k));
        const std::array<std::array<double,3>,5> storms={{{0.9,0.8,1},{3.1,-0.85,-1},{4.6,0.62,1},{1.9,0.25,1},{5.6,-0.55,-1}}};
        Floats elev(TW*TH);
        for (int j=0;j<TH;++j) {
            const double v=(j+0.5)/TH,lat=(0.5-v)*PI,al=std::abs(lat);
            for (int i=0;i<TW;++i) {
                const double u=double(i)/TW,lon=u*PI*2;const int t=j*TW+i;
                const double wx=fbm(u*6,v*3+9,3,6);
                elev[t]=float(fbm(u*8+1.6*wx,v*4,5,8)-0.04*smooth(1.2,1.5,al));
                double cx=u*14,cy=v*7;
                for (const auto &storm:storms) {
                    double dl=lon-storm[0];dl-=jsround(dl/(PI*2))*PI*2;
                    const double lx=dl*std::cos(lat),ly=lat-storm[1],dd=std::hypot(lx,ly),a=storm[2]*5*std::exp(-dd/0.2);
                    if (a*storm[2]>0.02) {
                        const double ca=std::cos(a),sa=std::sin(a);
                        cx+=((lx*ca-ly*sa-lx)/(PI*2))*14;
                        cy-=((lx*sa+ly*ca-ly)/PI)*7;
                    }
                }
                const double q=fbm(cx*0.5+3,cy*1.2,3,7),n0=fbm(cx+1.6*q,cy*1.3+0.5*q,5,14);
                const double n=0.4*n0+0.6*(1-std::abs(2*fbm(cx*1.5+2.2*q,cy*1.6+9,4,21)-1));
                const double belt=0.05*std::exp(-sq(lat/0.12))-0.07*std::exp(-sq((al-0.42)/0.16))+0.05*std::exp(-sq((al-0.95)/0.25));
                cloud[t]=float(n+belt);
            }
        }
        const auto quantile=[](Floats a,double p) {std::sort(a.begin(),a.end());return double(a[int(std::floor(p*(a.size()-1)))]);};
        const double shore=quantile(elev,0.7),c0=quantile(cloud,0.6),c1=quantile(cloud,0.86);
        for (int j=0;j<TH;++j) {
            const double v=(j+0.5)/TH,lat=(0.5-v)*PI,al=std::abs(lat);
            for (int i=0;i<TW;++i) {
                const double u=double(i)/TW;const int t=j*TW+i;const double e=get(elev,t);
                const double land=smooth(shore-0.004,shore+0.006,e),ice=smooth(1.22,1.32,al+0.12*fbm(u*12,v*6,2,12));
                const double grain=fbm(u*36+2,v*18,3,36)-0.5;
                const double arid=clamp(std::exp(-sq((al-0.4)/0.22))*(0.1+1.2*fbm(u*10+4,v*5,3,10))+(e-shore-0.04)*4+0.8*grain);
                const double relief=1+1.2*grain-2.5*std::max(0.,e-shore-0.08);
                double r=mix(0.13,0.4,arid)*relief,g=mix(0.25,0.34,arid)*relief,b=mix(0.08,0.19,arid)*relief;
                const double shelf=smooth(shore-0.06,shore,e),or_=mix(0.025,0.07,shelf),og=mix(0.11,0.3,shelf),ob=mix(0.38,0.62,shelf);
                r=mix(or_,r,land);g=mix(og,g,land);b=mix(ob,b,land);
                r=mix(r,0.92,ice);g=mix(g,0.95,ice);b=mix(b,0.99,ice);
                tr[t]=float(r);tg[t]=float(g);tb[t]=float(b);sea[t]=float((1-land)*(1-ice));
                cloud[t]=float(smooth(c0,c1,get(cloud,t)));
            }
        }
        for (int r=std::max(0,32-5-22-13);r<=std::min(H-1,32+22+2);++r) {
            for (int x=141-22-13;x<=141+22+13;++x) if (!ground[r*W+x]) box.push_back(r*W+x);
        }
        const double bright[][4]={{24,9,1,4.6},{67,27,0.85,3.4},{99,12,0.95,5.8},{189,7,0.8,4.1}};
        const double offsets[][3]={{0,0,1},{-1,0,0.2},{1,0,0.2},{0,-1,0.2},{0,1,0.2}};
        for (const auto &star:bright) for (const auto &o:offsets) {
            const int x=int(star[0]+o[0]),r=int(star[1]+o[1]),k=r*W+x;
            if (!ground[k]) twinkle.push_back({k,x,r,star[2]*o[2],star[3],hash(star[0],star[1])*6.28,o[2]==1});
        }
        for (const int k:box) dirty[k/W]=1;
        for (const auto &s:twinkle) dirty[s.k/W]=1;
        for (int r=0;r<H;++r) lines[r].assign(chars.data()+r*W,W);
    }
    double sample(const Floats &A,double lon,double vy) const {
        const double fx=std::fmod(std::fmod(lon/(PI*2),1)+1,1)*TW;
        const int x0=int(std::floor(fx)),x1=(x0+1)%TW;const double ax=fx-x0;
        const int y0=std::max(0,std::min(TH-2,int(std::floor(vy))));const double ay=clamp(vy-y0);
        const double a=get(A,y0*TW+x0),b=get(A,y0*TW+x1),c=get(A,y0*TW+TW+x0),d=get(A,y0*TW+TW+x1);
        return a+(b-a)*ax+(c-a)*ay+(a-b-c+d)*ax*ay;
    }
    void frame(double t,bool,bool) override {
        const double spin=t*0.045,drift=t*0.012,ey=32-5*(0.5-0.5*std::cos((t/150)*PI*2));
        for (const int k:box) {
            const int x=k%W,r=k/W;
            double cr=get(sr,k),cg=get(sg,k),cb=get(sb,k),cap=get(scap,k),floor=0;
            const double dx=x+0.5-141,dy=r+0.5-ey,d=std::hypot(dx,dy);
            if (d>=22-1 && d<22+12) {
                const double side=smooth(-0.3,0.75,(dx*L[0]-dy*L[1])/d);
                double g=std::exp(-std::max(0.,d-22)/1.2)*0.55*side;
                if (g<0.05) g=0;
                cr+=0.25*g;cg+=0.52*g;cb+=1.*g;if(g>0)cap=1;
            }
            if (d<22) {
                const double nx=dx/22,ny=-dy/22,q2=nx*nx+ny*ny,nz=std::sqrt(1-q2);
                const double ax=nx*ct+ny*st,ay0=-nx*st+ny*ct,ay=ay0*cn-nz*sn,az=ay0*sn+nz*cn;
                const double lat=std::asin(std::max(-1.,std::min(1.,ay))),lon=std::atan2(ax,az)+3.5+spin;
                const double vy=(0.5-lat/PI)*TH-0.5,ndl=nx*L[0]+ny*L[1]+nz*L[2];
                const double day=smooth(-0.005,0.06,ndl)*(0.45+0.8*std::sqrt(clamp(ndl))),dusk=std::exp(-sq((ndl-0.02)/0.035));
                const double cl=sample(cloud,lon+drift,vy),sh=sample(cloud,lon+drift-0.03,vy+0.4),sw=sample(sea,lon,vy);
                double er=sample(tr,lon,vy),eg=sample(tg,lon,vy),eb=sample(tb,lon,vy);
                const double shade=1-0.45*sh*(1-cl);
                er*=shade;eg*=shade;eb*=shade;
                er=mix(er,0.95,cl);eg=mix(eg,0.97,cl);eb=mix(eb,1.,cl);
                er*=day*(1+0.06*dusk);eg*=day*(1-0.03*dusk);eb*=day*(1-0.1*dusk);
                const double glint=std::pow(std::max(0.,nx*HV[0]+ny*HV[1]+nz*HV[2]),70)*0.8*sw*(1-cl);
                const double rim=std::pow(1-nz,2.2)*smooth(0,0.3,ndl);
                er+=glint*0.95+rim*0.2;eg+=glint*0.92+rim*0.42;eb+=glint*0.85+rim*0.85;
                const double edge=smooth(1,0.95,std::sqrt(q2));
                cr=mix(cr,er,edge);cg=mix(cg,eg,edge);cb=mix(cb,eb,edge);
                cap=mix(1,0.66,(1-sw)*(1-cl)*smooth(0.95,0.85,std::abs(ay)));
                floor=0.15*std::min(1.,day)*edge;
            }
            dot(k,x,r,cr,cg,cb,floor,cap);
        }
        for (const auto &s:twinkle) {
            const double v=s.s*(0.86+0.14*std::sin((t/s.p)*PI*2+s.ph));
            if (s.core) dot(s.k,s.x,s.r,v*0.97,v*0.98,v,0,1);
            else dot(s.k,s.x,s.r,std::max(get(sr,s.k),v*0.95),std::max(get(sg,s.k),v),std::max(get(sb,s.k),v*1.15),0,0.6);
        }
        for (int r=0;r<H;++r) if (dirty[r]) lines[r].assign(chars.data()+r*W,W);
        text.clear();text.reserve(N+H-1);
        for (int r=0;r<H;++r) {if(r)text.push_back(u'\n');text+=lines[r];}
    }
};
} // namespace

const AsciiPieceMeta &earthrise_meta() {
    static const AsciiPieceMeta meta = {
        "earthrise", "earthrise", "scenes",
        "the earth rising over a cratered lunar horizon in long low sunlight",
        200, 100, 15, 1, 0, "#030408", EARTH_PALETTE,
        sizeof(EARTH_PALETTE) / sizeof(EARTH_PALETTE[0]), {0}
    };
    return meta;
}

std::unique_ptr<Piece> make_earthrise(const AsciiPieceOptions &) { return std::make_unique<Earthrise>(); }
} // namespace ascii
