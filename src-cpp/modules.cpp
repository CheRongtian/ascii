#include "value.hpp"
#include "catalog.hpp"
#include "canvas_ids.hpp"
#include <cstring>
#include <cstdio>

namespace ascii::native {
namespace {
struct BuiltinModule final:Module {
    std::string name;
    explicit BuiltinModule(std::string n):name(std::move(n)){}
    void init() override{
        if(initialized)return;initialized=true;
        if(name=="node:process"){exported("default").get()=builtin("process");return;}
        if(name.rfind("pieces/",0)==0){auto p=library_piece(name.substr(7));exported("meta").get()=get(p,u"meta");exported("default").get()=get(p,u"default");return;}
        if(name=="library"){
            auto names=array(),load=object();for(size_t i=0;i<ascii_piece_count();++i){const std::string id=ascii_piece_meta_at(i)->id;names.data->items.push_back(Value(utf16(id)));auto factory=function([id](const Args &,const Value &,const Value &){return library_piece(id);});put(load,Value(utf16(id)),factory);if(name=="pieces/index")exported(id).get()=library_piece(id);}
            exported("names").get()=names;exported("load").get()=load;
            exported("isPiece").get()=function([](const Args&a,const Value &,const Value &){return Value(a[0].kind==Value::String&&ascii_piece_find(utf8(string(a[0])).c_str())!=nullptr);});
            auto canvas=construct(builtin("Set"));for(const auto *id:ascii::canvas_ids)method(canvas,u"add",{Value(utf16(id))});exported("canvas").get()=canvas;
            return;
        }
        throw std::runtime_error("Unknown native module: "+name);
    }
};
}

std::unique_ptr<Module> new_module(const std::string &name){if(auto create=module_factory(name))return create();return std::make_unique<BuiltinModule>(name);}
Module &module(const std::string &name){
    static std::map<std::string,std::unique_ptr<Module>> modules;
    auto &owner=modules[name];if(!owner)owner=new_module(name);owner->init();return *owner;
}
Value module_value(Module &m){Value v;v.kind=Value::Namespace;v.data=std::make_shared<Data>();v.data->module=&m;return v;}

Value library_piece(const std::string &id){
    const auto *meta=ascii_piece_find(id.c_str());if(!meta)throw std::runtime_error("Unknown piece: "+id);
    auto m=object({{u"name",Value(utf16(meta->name))},{u"category",Value(utf16(meta->category))},{u"note",Value(utf16(meta->note))},{u"cols",Value(int(meta->cols))},{u"rows",Value(int(meta->rows))},{u"fps",Value(int(meta->fps))},{u"cell",Value(int(meta->cell))},{u"clock",Value(meta->clock!=0)},{u"options",from_json(Json::parse(meta->options.json?meta->options.json:"{}"))}});
    if(meta->ground)put(m,u"ground",Value(utf16(meta->ground)));
    if(meta->loop>0)put(m,u"loop",Value(meta->loop));put(m,u"still",Value(meta->still));
    if(meta->palette_count){auto palette=array();for(size_t i=0;i<meta->palette_count;++i){char text[8];std::snprintf(text,sizeof(text),"#%06x",meta->palette[i]);palette.data->items.push_back(Value(utf16(text)));}put(m,u"palette",palette);}
    auto factory=function([id,meta](const Args&a,const Value &,const Value &){
        auto overrideOptions=meta->options;
        std::string json;if(!a.empty()&&!nullish(a[0])){json=utf8(string(call(get(builtin("JSON"),u"stringify"),{a[0]})));overrideOptions.json=json.c_str();auto shine=get(a[0],u"shine"),scan=get(a[0],u"scan");if(!nullish(shine))overrideOptions.shine=number(shine);if(!nullish(scan))overrideOptions.scan=number(scan);}
        std::shared_ptr<AsciiPiece> piece(ascii_piece_create(id.c_str(),&overrideOptions),ascii_piece_destroy);if(!piece)throw std::runtime_error(ascii_engine_last_error());
        return function([piece,meta](const Args &args,const Value &,const Value &){
            const auto env=args.size()>1&&!nullish(args[1])?args[1]:object();const auto color=get(env,u"color");AsciiFrame frame{};
            if(!ascii_piece_render(piece.get(),number(args[0]),truth(get(env,u"paper")),!nullish(color),&frame))throw std::runtime_error(ascii_engine_last_error());
            if(!nullish(color))for(size_t i=0;i<frame.color_count;++i)put(color,Value(i),Value(int(frame.colors[i])));
            return Value(std::u16string(reinterpret_cast<const char16_t*>(frame.text),frame.text_length));
        });
    });
    return object({{u"meta",m},{u"default",factory}});
}
} // namespace ascii::native
