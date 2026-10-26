#include "value.hpp"
#include <chrono>
#include <csignal>
#include <iostream>
#include <poll.h>
#include <sstream>
#include <sys/ioctl.h>
#include <termios.h>
#include <thread>
#include <unistd.h>

namespace ascii::native {
namespace {
volatile sig_atomic_t interrupted=0;
void interrupt(int){interrupted=1;}
Value invoke(const Value &receiver,const char16_t *name,const Args &args={}){return call(get(receiver,name),args,receiver);}
void write(const Value &out,const std::string &text){invoke(out,u"write",{Value(utf16(text))});}
std::string ansi(int layer,int rgb){return "\033["+std::to_string(layer)+";2;"+std::to_string((rgb>>16)&255)+";"+std::to_string((rgb>>8)&255)+";"+std::to_string(rgb&255)+"m";}
int whole(const Value &v,const char16_t *key,int fallback){const auto value=get(v,key);return nullish(value)||number(value)<=0?fallback:int(number(value));}
Value resolve(const Value &piece){return piece.kind==Value::String?library_piece(utf8(string(piece))):piece;}
struct Session {
    Value out;
    struct sigaction previous{};
    termios settings{};
    bool raw=false,alternate=false;
    Session(Value stream,bool screen,bool keyboard):out(std::move(stream)),alternate(screen){
        interrupted=0;struct sigaction action{};action.sa_handler=interrupt;sigemptyset(&action.sa_mask);sigaction(SIGINT,&action,&previous);
        if(keyboard&&isatty(STDIN_FILENO)&&tcgetattr(STDIN_FILENO,&settings)==0){auto next=settings;next.c_lflag&=~(ICANON|ECHO);next.c_cc[VMIN]=0;next.c_cc[VTIME]=0;raw=tcsetattr(STDIN_FILENO,TCSANOW,&next)==0;}
        try{write(out,alternate?"\033[?1049h\033[?25l\033[?7l\033[2J":"\033[?25l");}catch(...){restore();throw;}
    }
    void restore(){if(raw){tcsetattr(STDIN_FILENO,TCSANOW,&settings);raw=false;}sigaction(SIGINT,&previous,nullptr);}
    ~Session(){try{write(out,alternate?"\033[0m\033[?7h\033[?25h\033[?1049l":"\033[0m\033[?25h");}catch(...){}restore();}
    bool key(){if(!raw)return false;pollfd fd{STDIN_FILENO,POLLIN,0};if(poll(&fd,1,0)>0){char key[64];const auto count=::read(STDIN_FILENO,key,sizeof(key));for(ssize_t i=0;i<count;++i)if(key[i]==3)interrupted=1;return count>0;}return false;}
};
double elapsed(std::chrono::steady_clock::time_point start){return std::chrono::duration<double>(std::chrono::steady_clock::now()-start).count();}
Value merged_options(const Value &meta,const Value &options){auto out=object();const auto defaults=get(meta,u"options");for(auto &k:keys(defaults))put(out,k,get(defaults,k));for(auto &k:keys(options))put(out,k,get(options,k));return out;}
}

Value terminal_output(){
    winsize size{};ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
    return object({{u"isTTY",Value(isatty(STDOUT_FILENO)!=0)},{u"columns",Value(size.ws_col?int(size.ws_col):80)},{u"rows",Value(size.ws_row?int(size.ws_row):24)},{u"write",function([](const Args&a,const Value &,const Value &){std::cout<<utf8(string(a[0]));std::cout.flush();return Value{};})}});
}

Value terminal_play(const Value &input,const Value &options){
    auto piece=resolve(input),meta=get(piece,u"meta");auto out=get(options,u"out");const bool standard=nullish(out);if(standard)out=terminal_output();
    auto cells=call(module("terminal").slot("painter").get(),{meta,Value(!truth(get(options,u"mono")))});
    invoke(cells,u"size",{Value(whole(out,u"columns",80)),Value(whole(out,u"rows",24))});
    auto result=object({{u"cropped",Value(false)},{u"interrupted",Value(false)},{u"piece",object({{u"cols",get(cells,u"cols")},{u"rows",get(cells,u"rows")}})},{u"terminal",object({{u"cols",Value(0)},{u"rows",Value(0)}})}});
    if(!truth(get(out,u"isTTY")))return result;
    const auto secondsValue=get(options,u"seconds");const double seconds=nullish(secondsValue)?INFINITY:number(secondsValue);if(seconds<0||std::isnan(seconds))throw std::runtime_error("seconds must be at least zero");
    auto frame=call(get(piece,u"default"),{merged_options(meta,defaulted(get(options,u"options"),object()))});
    const int base=int(number(get(cells,u"base")));const bool paper=base>=0?(.2126*((base>>16)&255)+.7152*((base>>8)&255)+.0722*(base&255)>=128):truth(get(options,u"light"));
    const double rate=number(defaulted(get(options,u"fps"),get(meta,u"fps")));const double delay=rate>0?1/std::max(1.,rate):1./30;
    Session session(out,true,true);auto start=std::chrono::steady_clock::now();auto next=start;
    int oldWidth=0,oldHeight=0;bool first=true;
    for(;;){
        if(standard)out=terminal_output();const int W=whole(out,u"columns",80),H=whole(out,u"rows",24);
        if(W!=oldWidth||H!=oldHeight){invoke(cells,u"size",{Value(W),Value(H)});write(out,"\033[2J");oldWidth=W;oldHeight=H;first=true;}
        if(first||rate>0){
            auto env=object({{u"paper",Value(paper)},{u"color",get(cells,u"color")}});
            invoke(cells,u"paint",{call(frame,{Value(rate>0?elapsed(start):0),env})});
            const int cols=int(number(get(cells,u"cols"))),rows=int(number(get(cells,u"rows"))),w=std::min(cols,W),h=std::min(rows,H),sx=(cols-w)/2,sy=(rows-h)/2,left=(W-w)/2+1,top=(H-h)/2+1;
            put(result,u"piece",object({{u"cols",Value(cols)},{u"rows",Value(rows)}}));put(result,u"terminal",object({{u"cols",Value(W)},{u"rows",Value(H)}}));put(result,u"cropped",Value(w<cols||h<rows));
            const auto chars=get(cells,u"ch"),fg=get(cells,u"fg"),bg=get(cells,u"bg");std::string output;
            for(int y=0;y<h;++y){output+="\033["+std::to_string(top+y)+";"+std::to_string(left)+"H";int previousFg=-2,previousBg=-2;for(int x=0;x<w;++x){const int k=(sy+y)*cols+sx+x,ink=int(number(get(fg,Value(k)))),ground=int(number(get(bg,Value(k))));if(ink!=previousFg||ground!=previousBg){output+="\033[0m";if(ink>=0)output+=ansi(38,ink);if(ground>=0)output+=ansi(48,ground);previousFg=ink;previousBg=ground;}output+=utf8(string(get(chars,Value(k))));}output+="\033[0m";}
            write(out,output);first=false;
        }
        const auto signal=get(options,u"signal");if(interrupted||session.key()||elapsed(start)>=seconds||(!nullish(signal)&&truth(get(signal,u"aborted"))))break;
        next+=std::chrono::duration_cast<std::chrono::steady_clock::duration>(std::chrono::duration<double>(delay));std::this_thread::sleep_until(next);
    }
    put(result,u"interrupted",Value(interrupted!=0));return result;
}

Value terminal_banner(const Value &text,const Value &options){
    auto out=get(options,u"out");const bool standard=nullish(out);if(standard)out=terminal_output();const bool tty=truth(get(out,u"isTTY")),plain=!tty||std::getenv("NO_COLOR");
    const double seconds=number(defaulted(get(options,u"seconds"),Value(1)));if(!std::isfinite(seconds)||seconds<0)throw std::runtime_error("seconds must be a finite number of at least zero");
    auto &bannerModule=module("banner");auto words=call(bannerModule.exported("drawable").get(),{text,get(options,u"font")});words=invoke(invoke(words,u"trim"),u"replace",{regexp(u"\\s+","g"),u" "});if(string(words).empty())throw std::runtime_error("The selected font draws no characters");
    auto settings=merge_object({options,object({{u"max",Value(whole(out,u"columns",80)-1)}})});auto piece=call(bannerModule.exported("banner").get(),{words,settings}),meta=get(piece,u"meta");
    auto result=object({{u"cols",get(meta,u"cols")},{u"rows",get(meta,u"rows")},{u"interrupted",Value(false)}});const auto tagline=string(defaulted(get(options,u"tagline"),Value(u"")));const auto under=tagline.empty()?std::string{}:(plain?utf8(tagline):"\033[2m"+utf8(tagline)+"\033[0m")+"\n";
    if(int(number(get(meta,u"cols")))>whole(out,u"columns",80)-1){write(out,utf8(string(words))+"\n"+under);put(result,u"cols",Value(0));put(result,u"rows",Value(0));return result;}
    const bool colored=!nullish(get(meta,u"palette"));auto sorter=colored?piece:call(bannerModule.exported("banner").get(),{words,merge_object({settings,object({{u"color",u"#000000"}})})});auto frame=call(get(sorter,u"default"));const auto palette=get(get(sorter,u"meta"),u"palette");const int cols=int(number(get(meta,u"cols"))),rows=int(number(get(meta,u"rows"))),base=truth(get(options,u"light"))?0:int(number(get(palette,u"length")))/2;auto colors=typed("Uint8Array",{Value(cols*rows)});
    const bool tinted=colored&&!nullish(get(options,u"shadowColor"));
    auto lines=[&](double time){invoke(colors,u"fill",{Value(0)});const auto content=call(frame,{Value(time),object({{u"paper",Value(truth(get(options,u"light")))},{u"color",colors}})});auto lines=elements(invoke(content,u"split",{u"\n"}));std::string output;
        for(size_t y=0;y<lines.size();++y){const auto line=string(invoke(lines[y],u"trimEnd"));std::string state;for(size_t x=0;x<line.size();++x){if(!plain&&line[x]!=u' '){const int i=int(number(get(colors,Value(y*cols+x))))-base;std::string next;if(i==0&&!tinted)next="\033[2m";else if(colored){const auto hex=utf8(string(get(palette,Value(base+i))));next=ansi(38,int(std::strtol(hex.c_str()+1,nullptr,16)));}if(next!=state){if(!state.empty())output+="\033[0m";output+=next;state=next;}}output+=utf8(std::u16string(1,line[x]));}if(!state.empty())output+="\033[0m";output+="\n";}return output;};
    const auto rest=lines(number(defaulted(get(meta,u"still"),Value(0))));const auto motion=get(piece,u"motion");const double duration=number(get(motion,u"seconds"));if(!tty||seconds==0||duration<=0||whole(out,u"rows",24)<=rows+1){write(out,rest+under);return result;}
    auto pass=get(motion,u"pass");const double from=nullish(pass)?0:number(get(pass,Value(0))),to=nullish(pass)?duration:number(get(pass,Value(1)));const int width=whole(out,u"columns",80);Session session(out,false,false);auto start=std::chrono::steady_clock::now(),next=start;write(out,lines(from));
    for(;;){const double k=elapsed(start)/seconds;if(interrupted||k>=1){write(out,"\033["+std::to_string(rows)+"F"+rest+under);break;}if(standard&&whole(terminal_output(),u"columns",80)!=width){write(out,under);break;}write(out,"\033["+std::to_string(rows)+"F"+lines(from+(to-from)*k));next+=std::chrono::milliseconds(33);std::this_thread::sleep_until(next);}
    put(result,u"interrupted",Value(interrupted!=0));return result;
}
} // namespace ascii::native
