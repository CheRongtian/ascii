#pragma once
// Value operations used by the generated native source. No script interpreter.
#include "options.hpp"
#include <functional>
#include <initializer_list>
#include <map>
#include <regex>
#include <set>
#include <array>

namespace ascii::native {
struct Data;
struct Module;
struct Value {
    enum Kind { Undefined, Null, Hole, Boolean, Number, String, Array, Typed, Buffer, Object, Function, Map, Set, Regex, Date, Class, Namespace } kind = Undefined;
    double n = 0;
    std::shared_ptr<Data> data;
    Value() = default;
    Value(double v) : kind(Number), n(v) {}
    Value(int v) : Value(double(v)) {}
    Value(size_t v) : Value(double(v)) {}
    Value(bool v) : kind(Boolean), n(v) {}
    Value(const char16_t *s);
    Value(std::u16string s);
    static Value null() { Value v; v.kind=Null;return v; }
    static Value hole() { Value v; v.kind=Hole;return v; }
};
struct Args {
    std::array<Value,8> small;
    std::vector<Value> large;
    size_t count=0;
    Args()=default;
    Args(std::initializer_list<Value> values){for(const auto &v:values)push_back(v);}
    explicit Args(const std::vector<Value> &values){for(const auto &v:values)push_back(v);}
    template<class It> Args(It a,It b){for(;a!=b;++a)push_back(*a);}
    void push_back(Value v){if(count<8&&large.empty())small[count++]=std::move(v);else{if(large.empty())large.assign(small.begin(),small.end());large.push_back(std::move(v));++count;}}
    size_t size()const{return count;}
    bool empty()const{return count==0;}
    Value *begin(){return large.empty()?small.data():large.data();}
    Value *end(){return begin()+count;}
    const Value *begin()const{return large.empty()?small.data():large.data();}
    const Value *end()const{return begin()+count;}
    Value &operator[](size_t i){return begin()[i];}
    const Value &operator[](size_t i)const{static const Value absent;return i<count?begin()[i]:absent;}
};
using Callback = std::function<Value(const Args &, const Value &, const Value &)>;
struct Cell {
    std::shared_ptr<Value> p = std::make_shared<Value>();
    Cell() = default;
    explicit Cell(Value v) : p(std::make_shared<Value>(std::move(v))) {}
    Value &get() const { return *p; }
};
struct Data {
    std::u16string string;
    std::vector<Value> items;
    std::shared_ptr<std::vector<uint8_t>> buffer;
    size_t byteOffset=0,typedLength=0;
    std::map<std::u16string,Value> props, getters, setters;
    std::vector<std::u16string> order;
    std::set<std::u16string> hidden;
    std::vector<std::pair<Value,Value>> pairs;
    struct WeakEntry {std::weak_ptr<Data> key;Value value;};
    std::vector<WeakEntry> weakPairs;
    Value prototype, constructor, base;
    Callback callback;
    std::string type, flags;
    std::shared_ptr<std::wregex> regex;
    Module *module = nullptr;
};
inline Value::Value(std::u16string s) : kind(String), data(std::make_shared<Data>()) {data->string=std::move(s);}
inline Value::Value(const char16_t *s) : Value(std::u16string(s)) {}
Value array(Args values = {});
Value object(std::initializer_list<std::pair<Value,Value>> values = {});
Value function(Callback callback,int arity=0);
Value typed(const std::string &type, const Args &args);
size_t typed_width(const std::string &type);
Value byte_buffer(size_t size);
Value regexp(std::u16string pattern, const std::string &flags);
Value builtin(const std::string &name);
Value call(const Value &fn, const Args &args = {}, const Value &receiver = {});
Value construct(const Value &fn, const Args &args = {}, const Value &receiver = {});
Value get(const Value &base, const Value &key);
Value put(const Value &base, const Value &key, const Value &value);
void accessor(const Value &base,const Value &key,const Value &function,bool getter);
Value erase(const Value &base, const Value &key);
Value method(const Value &base, const Value &key, const Args &args = {});
bool has_native_method(const Value &base,const std::u16string &key);
Args elements(const Value &value);
std::vector<Value> keys(const Value &value);
std::u16string string(const Value &value);
double number_slow(const Value &value);
inline double number(const Value &v) {return v.kind==Value::Number||v.kind==Value::Boolean?v.n:number_slow(v);}
inline bool truth(const Value &v) {
    if(v.kind==Value::Undefined||v.kind==Value::Null||v.kind==Value::Hole)return false;
    if(v.kind==Value::Number||v.kind==Value::Boolean)return v.n!=0&&!std::isnan(v.n);
    return v.kind!=Value::String||!v.data->string.empty();
}
inline bool nullish(const Value &v){return v.kind==Value::Null||v.kind==Value::Undefined||v.kind==Value::Hole;}
inline int32_t i32(const Value &v){const double n=number(v);if(!std::isfinite(n)||n==0)return 0;return int32_t(uint32_t(int64_t(std::fmod(std::trunc(n),4294967296.))));}
inline uint32_t u32(const Value &v){return uint32_t(i32(v));}
bool equal(const Value &a,const Value &b,bool strict=true);
Value binary(const std::string &op,const Value &a,const Value &b);
Value unary(const std::string &op,const Value &a);
Value update(const Value &base,const Value &key,const std::string &op,const Value &rhs);
Value increment(Value &target,int delta,bool prefix);
Value increment(const Value &base,const Value &key,int delta,bool prefix);
Value defaulted(const Value &value,const Value &fallback);
Value rest(const Args &args,size_t start);
Value object_rest(const Value &value,const std::vector<std::u16string> &excluded);
Value merge_object(const std::vector<Value> &parts);
Value make_class(const std::string &name,const Value &base,const Value &ctor);
void class_method(const Value &klass,const Value &key,const Value &fn,bool isStatic,const std::string &kind);
Value raise(const Value &value);
Value from_json(const Json &value);
Json to_json(const Value &value);
std::string type_of(const Value &v);

struct Module {
    std::map<std::string,Cell> slots, exports;
    bool initialized=false;
    virtual ~Module()=default;
    Cell slot(const std::string &name){return slots.try_emplace(name).first->second;}
    Cell exported(const std::string &name){return exports.try_emplace(name).first->second;}
    virtual void init()=0;
};
using ModuleFactory=std::unique_ptr<Module>(*)();
Module &module(const std::string &name);
std::unique_ptr<Module> new_module(const std::string &name);
Value module_value(Module &module);
ModuleFactory module_factory(const std::string &name);
Value library_piece(const std::string &id);
Value image_pixels(const Value &source);
Value inflate_bytes(const Value &source,size_t limit);
Value clean_xml(const Value &source);
Value terminal_play(const Value &piece,const Value &options);
Value terminal_banner(const Value &text,const Value &options);
Value terminal_output();
} // namespace ascii::native
