#pragma once
// Typed helpers for native piece algorithms. Numeric expressions stay numeric;
// arrays store their declared element type, and records have C++ fields.
#include "options.hpp"
#include <charconv>
#include <chrono>
#include <functional>
#include <iomanip>
#include <limits>
#include <ctime>
#include <optional>
#include <regex>
#include <sstream>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <variant>
#include "cancellation.hpp"

namespace ascii::direct {
using String=std::u16string;
using Nil=std::monostate;
using Unknown=std::variant<Nil,double,String,bool>;
using ascii::check_cancel;
template<class T,size_t N> bool truth(const std::array<T,N>&);
template<class...T> bool truth(const std::variant<T...>&);
template<class...T> String string(const std::variant<T...>&);
template<class...T> double number(const std::variant<T...>&);
template<class...T> String typeOf(const std::variant<T...>&);
template<class T,class U> T cast(const U &v);
inline constexpr double nan=std::numeric_limits<double>::quiet_NaN();
inline int32_t i32(double x){return !std::isfinite(x)||x==0?0:int32_t(uint32_t(int64_t(std::fmod(std::trunc(x),4294967296.))));}
inline uint32_t u32(double x){return uint32_t(i32(x));}
inline double imul(double a,double b){return double(int32_t(u32(a)*u32(b)));}
inline double mod(double a,double b){return std::fmod(a,b);}
inline double round(double x){return std::floor(x+.5);}
inline double sign(double x){return std::isnan(x)||x==0?x:x>0?1:-1;}
inline double minimum(std::initializer_list<double> a){double r=INFINITY;for(auto x:a){if(std::isnan(x))return nan;if(x<r||(x==0&&r==0&&std::signbit(x)))r=x;}return r;}
inline double maximum(std::initializer_list<double> a){double r=-INFINITY;for(auto x:a){if(std::isnan(x))return nan;if(x>r||(x==0&&r==0&&!std::signbit(x)))r=x;}return r;}
inline bool truth(double x){return x!=0&&!std::isnan(x);}
inline bool truth(bool x){return x;}
inline bool truth(const String &s){return !s.empty();}
inline bool truth(Nil){return false;}
template<class T> bool truth(const std::shared_ptr<T>&v){return bool(v);}
template<class T> bool truth(const std::optional<T>&v){return v&&truth(*v);}
template<class R,class...A> bool truth(const std::function<R(A...)>&f){return bool(f);}
template<class...T> bool truth(const std::variant<T...>&v){return std::visit([](const auto &x){return truth(x);},v);}
template<class T> bool present(const T&){return true;}
inline bool present(Nil){return false;}
template<class T> bool present(const std::optional<T>&v){return v.has_value();}
template<class T> bool present(const std::shared_ptr<T>&v){return bool(v);}
template<class T> T read(const std::optional<T>&v){if(v)return *v;if constexpr(std::is_same_v<T,double>)return nan;else return T{};}
template<class T> const T &read(const T&v){return v;}
template<class T> struct Missing{static T get(){if constexpr(std::is_same_v<T,double>)return nan;else return T{};}};
template<class T> T absent(){return Missing<T>::get();}

template<class T,bool Typed=false> struct Array {
    using value_type=T;
    std::shared_ptr<std::vector<T>> storage=std::make_shared<std::vector<T>>();
    size_t offset=0,extent=SIZE_MAX;
    Array()=default;
    explicit Array(size_t n):storage(std::make_shared<std::vector<T>>(n,Typed?T{}:absent<T>())){}
    Array(std::initializer_list<T> items):storage(std::make_shared<std::vector<T>>(items)){}
    template<class A> explicit Array(const A&a):Array(a.size()){for(size_t i=0;i<a.size();++i)(*storage)[i]=cast<T>(a[i]);}
    size_t size()const{return !storage?0:extent==SIZE_MAX?storage->size()-offset:extent;}
    bool empty()const{return size()==0;}
    T *data(){return storage->data()+offset;}const T *data()const{return storage->data()+offset;}
    decltype(auto) operator[](size_t i){return (*storage)[offset+i];}decltype(auto) operator[](size_t i)const{return (*storage)[offset+i];}
    auto begin(){return storage->begin()+offset;}auto end(){return begin()+size();}
    auto begin()const{return storage->begin()+offset;}auto end()const{return begin()+size();}
    void resize(size_t n){storage->resize(offset+n,Typed?T{}:absent<T>());extent=SIZE_MAX;}
    template<class...U> double push(U&&...v){(storage->push_back(cast<T>(std::forward<U>(v))),...);return double(size());}
    T pop(){if(empty())return absent<T>();T v=storage->back();storage->pop_back();return v;}
    T shift(){if(empty())return absent<T>();T v=(*this)[0];storage->erase(storage->begin()+offset);return v;}
    template<class U> double unshift(const U &v){storage->insert(storage->begin()+offset,T(v));return double(size());}
    int bound(double n)const{const auto i=int(n);return i<0?std::max(0,int(size())+i):std::min(int(size()),i);}
    template<class U> Array &fill(U value,double start=0,double end=INFINITY){T v=cast<T>(value);const int a=bound(start),b=std::isinf(end)?int(size()):bound(end);for(int i=a;i<b;++i)(*this)[i]=v;return *this;}
    Array slice(double from=0,double to=INFINITY)const{const int a=bound(from),b=std::isinf(to)?int(size()):bound(to);Array out;for(int i=a;i<b;++i)out.push((*this)[i]);return out;}
    Array subarray(double from=0,double to=INFINITY)const{Array out=*this;const int a=bound(from),b=std::isinf(to)?int(size()):bound(to);out.offset+=a;out.extent=std::max(0,b-a);return out;}
    template<class U,bool B> void set(const Array<U,B>&a,double at=0){for(size_t i=0;i<a.size();++i)(*this)[size_t(at)+i]=T(a[i]);}
    Array &reverse(){std::reverse(begin(),end());return *this;}
    template<class F> Array &sort(F f){std::stable_sort(begin(),end(),[&](const auto&a,const auto&b){return f(a,b)<0;});return *this;}
    Array &sort(){std::stable_sort(begin(),end());return *this;}
    bool includes(const T &x)const{return std::find(begin(),end(),x)!=end();}
    double indexOf(const T &x,double start=0)const{for(int i=bound(start);i<int(size());++i)if((*this)[i]==x)return i;return -1;}
    Array splice(double start,double count=INFINITY){const auto a=bound(start),n=std::isinf(count)?int(size())-a:std::max(0,std::min(int(count),int(size())-a));auto out=slice(a,a+n);storage->erase(begin()+a,begin()+a+n);return out;}
    Array concat(const Array&a)const{auto out=slice();for(const auto &v:a)out.push(v);return out;}
    Array concat(const T&value)const{auto out=slice();out.push(value);return out;}
    Array &copyWithin(double target,double start,double end=INFINITY){auto source=slice(start,end);int dest=bound(target);for(size_t i=0;i<source.size()&&dest+int(i)<int(size());++i)(*this)[dest+i]=source[i];return *this;}
    bool operator==(const Array&a)const{return storage==a.storage&&offset==a.offset&&extent==a.extent;}
    bool operator!=(const Array&a)const{return !(*this==a);}
};
template<class T,bool B> struct Missing<Array<T,B>>{static Array<T,B> get(){Array<T,B> a;a.storage.reset();return a;}};
template<class T,bool B> bool truth(const Array<T,B>&a){return bool(a.storage);}
template<class T,bool B> bool present(const Array<T,B>&a){return bool(a.storage);}
template<class T,bool B> decltype(auto) at(const Array<T,B>&a,double n){if constexpr(std::is_arithmetic_v<T>){using R=std::conditional_t<std::is_same_v<T,bool>,bool,double>;if(!std::isfinite(n)||n<0||n>=a.size()||std::floor(n)!=n)return absent<R>();return R(a[size_t(n)]);}else{static T missing=absent<T>();if(!std::isfinite(n)||n<0||n>=a.size()||std::floor(n)!=n)return (missing);return (a[size_t(n)]);}}
template<class T,bool B> bool has(const Array<T,B>&a,double n){return std::isfinite(n)&&n>=0&&n<a.size()&&std::floor(n)==n;}
template<class T,bool B,class U> U put(const Array<T,B>&ref,double n,U v){auto a=ref;if(!std::isfinite(n)||n<0||std::floor(n)!=n)return v;if(size_t(n)>=a.size()){if constexpr(B)return v;else a.resize(size_t(n)+1);}a[size_t(n)]=cast<T>(v);return v;}
template<class T,size_t N> decltype(auto) at(const std::array<T,N>&a,double n){if constexpr(std::is_arithmetic_v<T>)return n>=0&&n<N&&std::floor(n)==n?double(a[size_t(n)]):nan;else{static const T missing=absent<T>();if(n<0||n>=N||std::floor(n)!=n)return (missing);return (a[size_t(n)]);}}
template<class T,size_t N> bool has(const std::array<T,N>&,double n){return n>=0&&n<N&&std::floor(n)==n;}
template<class T,size_t N,class U> U put(std::array<T,N>&a,double n,U v){if(has(a,n))a[size_t(n)]=cast<T>(v);return v;}
template<class T,size_t N> bool truth(const std::array<T,N>&){return true;}
template<class T,size_t N,class A> std::array<T,N> fixedArray(const A&a){std::array<T,N> out{};for(size_t i=0;i<N;++i)out[i]=cast<T>(at(a,double(i)));return out;}
template<class...A> double at(const std::variant<A...>&a,double n){return std::visit([&](const auto &v){return double(at(v,n));},a);}
template<class T> bool isArray(const T&){return false;}
template<class T,bool B> bool isArray(const Array<T,B>&){return true;}
template<class T,size_t N> bool isArray(const std::array<T,N>&){return true;}
template<class...A> bool isArray(const std::variant<A...>&v){return std::visit([](const auto &a){return isArray(a);},v);}
template<class F,class T,class A> decltype(auto) invoke(F &f,const T &v,double i,const A &a){if constexpr(std::is_invocable_v<F,T,double,A>)return f(v,i,a);else if constexpr(std::is_invocable_v<F,T,double>)return f(v,i);else if constexpr(std::is_invocable_v<F,T>)return f(v);else return f();}
template<class T,bool B,class F> auto map(const Array<T,B>&a,F f){using R=std::decay_t<decltype(invoke(f,at(a,0),0,a))>;std::conditional_t<B,Array<T,true>,Array<R>> out;out.storage->reserve(a.size());for(size_t i=0;i<a.size();++i)out.push(invoke(f,at(a,i),i,a));return out;}
template<class T,bool B,class F> void forEach(const Array<T,B>&a,F f){for(size_t i=0;i<a.size();++i)invoke(f,at(a,i),i,a);}
template<class T,bool B,class F> Array<T,B> filter(const Array<T,B>&a,F f){Array<T,B> out;for(size_t i=0;i<a.size();++i)if(truth(invoke(f,at(a,i),i,a)))out.push(a[i]);return out;}
template<class T,bool B,class F> std::optional<T> find(const Array<T,B>&a,F f){for(size_t i=0;i<a.size();++i)if(truth(invoke(f,at(a,i),i,a)))return T(a[i]);return std::nullopt;}
template<class T,bool B,class F> double findIndex(const Array<T,B>&a,F f){for(size_t i=0;i<a.size();++i)if(truth(invoke(f,at(a,i),i,a)))return i;return -1;}
template<class T,bool B,class F> bool some(const Array<T,B>&a,F f){return findIndex(a,f)>=0;}
template<class T,bool B,class F> bool every(const Array<T,B>&a,F f){for(size_t i=0;i<a.size();++i)if(!truth(invoke(f,at(a,i),i,a)))return false;return true;}
template<class T,bool B,class F,class R> R reduce(const Array<T,B>&a,F f,R r){for(size_t i=0;i<a.size();++i){if constexpr(std::is_invocable_v<F,R,T,double>)r=f(r,at(a,i),double(i));else r=f(r,at(a,i));}return r;}
template<class T,bool B,class F> auto reduce(const Array<T,B>&a,F f){if(a.empty())throw std::runtime_error("Empty array reduction");auto r=at(a,0);for(size_t i=1;i<a.size();++i)r=f(r,at(a,i));return r;}
template<class T,bool B> auto flat(const Array<T,B>&a){using U=typename T::value_type;Array<U> out;for(auto &row:a)for(auto &x:row)out.push(x);return out;}
template<class T,bool B,class F> auto flatMap(const Array<T,B>&a,F f){return flat(map(a,f));}
template<class F> auto from(double n,F f){Array<Nil> items(size_t(std::max(0.,n)));return map(items,f);}
inline String string(const String &s){return s;}inline String string(char16_t c){return String(1,c);}inline String string(const char16_t *s){return s;}inline String string(Nil){return u"undefined";}inline String string(bool b){return b?u"true":u"false";}
inline String string(double x){if(std::isnan(x))return u"NaN";if(std::isinf(x))return x<0?u"-Infinity":u"Infinity";if(x==0)return u"0";char b[64];auto r=std::to_chars(b,b+64,x);return utf16(std::string(b,r.ptr));}
template<class T> String string(const std::optional<T>&v){return v?string(*v):u"undefined";}
template<class...T> String string(const std::variant<T...>&v){return std::visit([](const auto &x){return string(x);},v);}
template<class T,bool B> String join(const Array<T,B>&a,const String &separator=u","){String s;for(size_t i=0;i<a.size();++i){if(i)s+=separator;s+=string(a[i]);}return s;}
template<class T,bool B> String string(const Array<T,B>&a){return join(a);}
inline String at(const String&s,double i){return i>=0&&i<s.size()&&std::floor(i)==i?String(1,s[size_t(i)]):String{};}
inline bool has(const String&s,double i){return i>=0&&i<s.size()&&std::floor(i)==i;}
inline String slice(const String&s,double from,double to=INFINITY){auto bound=[&](double n){return n<0?std::max(0,int(s.size())+int(n)):std::min(int(s.size()),int(n));};const int a=bound(from),b=std::isinf(to)?int(s.size()):bound(to);return s.substr(a,std::max(0,b-a));}
inline String repeat(const String&s,double n){String out;out.reserve(s.size()*size_t(std::max(0.,n)));for(int i=0;i<int(n);++i)out+=s;return out;}
inline String padEnd(const String&s,double n,const String&fill=u" "){if(n<=s.size()||fill.empty())return s;return s+repeat(fill,std::ceil((n-s.size())/fill.size())).substr(0,size_t(n)-s.size());}
inline String padStart(const String&s,double n,const String&fill=u" "){if(n<=s.size()||fill.empty())return s;return repeat(fill,std::ceil((n-s.size())/fill.size())).substr(0,size_t(n)-s.size())+s;}
inline String trim(const String&s,bool left=true,bool right=true){const auto a=left?s.find_first_not_of(u" \t\r\n\f\v"):size_t(0),b=right?s.find_last_not_of(u" \t\r\n\f\v"):s.size()-1;return a==s.npos||b==s.npos?String{}:s.substr(a,b-a+1);}
inline Array<String> split(const String&s,const String&sep){Array<String> out;if(sep.empty()){for(auto c:s)out.push(String(1,c));return out;}size_t i=0;for(;;){auto j=s.find(sep,i);out.push(s.substr(i,j==s.npos?s.npos:j-i));if(j==s.npos)break;i=j+sep.size();}return out;}
inline String fixed(double x,double digits){std::ostringstream out;out<<std::fixed<<std::setprecision(int(digits))<<x;return utf16(out.str());}
inline String radix(double x,double base){if(base==10)return string(x);int64_t n=int64_t(x);const bool negative=n<0;uint64_t v=negative?uint64_t(-n):uint64_t(n);String out;do{out+=u"0123456789abcdefghijklmnopqrstuvwxyz"[v%uint64_t(base)];v/=uint64_t(base);}while(v);if(negative)out+=u'-';std::reverse(out.begin(),out.end());return out;}
inline double parseInt(const String&s,double base=10){char *end=nullptr;const auto text=utf8(s);auto n=std::strtoll(text.c_str(),&end,int(base));return end==text.c_str()?nan:double(n);}
inline double number(double n){return n;}inline double number(bool b){return b?1:0;}inline double number(Nil){return nan;}inline double number(const String&s){char *end=nullptr;const auto text=utf8(s);const auto n=std::strtod(text.c_str(),&end);return end==text.c_str()?nan:n;}
template<class T> double number(const std::optional<T>&v){return v?number(*v):nan;}
template<class...T> double number(const std::variant<T...>&v){return std::visit([](const auto &x){return number(x);},v);}
template<class T> String typeOf(const T&){if constexpr(std::is_same_v<T,double>)return u"number";else if constexpr(std::is_same_v<T,bool>)return u"boolean";else if constexpr(std::is_same_v<T,String>)return u"string";else if constexpr(std::is_same_v<T,Nil>)return u"undefined";else return u"object";}
template<class T> String typeOf(const std::optional<T>&v){return v?typeOf(*v):u"undefined";}
template<class...T> String typeOf(const std::variant<T...>&v){return std::visit([](const auto &x){return typeOf(x);},v);}
struct ToString {template<class T> String operator()(const T&v)const{return string(v);}};
struct ToNumber {template<class T> double operator()(const T&v)const{return number(v);}};
struct ToBoolean {template<class T> bool operator()(const T&v)const{return truth(v);}};
template<class T,bool B> auto entries(const Array<T,B>&a){if constexpr(std::is_same_v<T,double>){Array<std::array<double,2>> out;for(size_t i=0;i<a.size();++i)out.push(std::array<double,2>{double(i),a[i]});return out;}else{Array<std::shared_ptr<std::tuple<double,T>>> out;for(size_t i=0;i<a.size();++i)out.push(std::make_shared<std::tuple<double,T>>(double(i),a[i]));return out;}}
template<class T,bool B> T first(const Array<T,B>&a){return a.empty()?absent<T>():T(a[0]);}
template<class K,class V> struct Map {
    struct Storage {std::vector<std::pair<K,V>> entries;std::unordered_map<K,size_t> index;};
    std::shared_ptr<Storage> storage=std::make_shared<Storage>();
    Map()=default;
    template<class A> explicit Map(const A&a){for(const auto &entry:a){if constexpr(std::is_same_v<K,V>)set(at(entry,0),at(entry,1));else set(std::get<0>(*entry),std::get<1>(*entry));}}
    size_t size()const{return storage->entries.size();}
    bool has(const K&key)const{return storage->index.count(key)>0;}
    std::optional<V> get(const K&key)const{auto found=storage->index.find(key);if(found==storage->index.end())return std::nullopt;return storage->entries[found->second].second;}
    Map &set(const K&key,V value){auto found=storage->index.find(key);if(found==storage->index.end()){storage->index.emplace(key,size());storage->entries.emplace_back(key,std::move(value));}else storage->entries[found->second].second=std::move(value);return *this;}
    bool erase(const K&key){auto f=storage->index.find(key);if(f==storage->index.end())return false;const auto i=f->second;storage->entries.erase(storage->entries.begin()+i);storage->index.erase(f);for(size_t j=i;j<size();++j)storage->index[storage->entries[j].first]=j;return true;}
    void clear(){storage->entries.clear();storage->index.clear();}
    Array<K> keys()const{Array<K> out;for(auto &p:storage->entries)out.push(p.first);return out;}
    Array<V> values()const{Array<V> out;for(auto &p:storage->entries)out.push(p.second);return out;}
    auto entries()const{if constexpr(std::is_same_v<K,double>&&std::is_same_v<V,double>){Array<std::array<K,2>> out;for(auto &p:storage->entries)out.push(std::array<K,2>{p.first,p.second});return out;}else if constexpr(std::is_same_v<K,V>){Array<Array<K>> out;for(auto &p:storage->entries)out.push(Array<K>{p.first,p.second});return out;}else{Array<std::shared_ptr<std::tuple<K,V>>> out;for(auto &p:storage->entries)out.push(std::make_shared<std::tuple<K,V>>(p.first,p.second));return out;}}
};
template<class K,class V> bool truth(const Map<K,V>&){return true;}
template<class T> struct Set {
    Map<T,bool> values_;
    Set()=default;template<class A> explicit Set(const A&a){for(const auto &v:a)add(v);}
    size_t size()const{return values_.size();}bool has(const T&v)const{return values_.has(v);}Set &add(const T&v){values_.set(v,true);return *this;}bool erase(const T&v){return values_.erase(v);}void clear(){values_.clear();}auto values()const{return values_.keys();}auto keys()const{return values();}
};
struct Match;
struct Regex {bool test(const String&)const;std::shared_ptr<Match> exec(const String&)const;std::wregex expression;bool global=false;Regex()=default;Regex(const String &pattern,const String &flags):global(flags.find(u'g')!=flags.npos){auto options=std::regex_constants::ECMAScript;if(flags.find(u'i')!=flags.npos)options|=std::regex_constants::icase;expression=std::wregex(std::wstring(pattern.begin(),pattern.end()),options);}};
inline String replace(const String&s,const Regex&re,const String&replacement){const auto w=std::regex_replace(std::wstring(s.begin(),s.end()),re.expression,std::wstring(replacement.begin(),replacement.end()),re.global?std::regex_constants::format_default:std::regex_constants::format_first_only);return String(w.begin(),w.end());}
inline String replace(const String&s,const String&from,const String&to){auto out=s;auto i=out.find(from);if(i!=out.npos)out.replace(i,from.size(),to);return out;}
inline Array<String> split(const String&s,const Regex&re){Array<String> out;const std::wstring w(s.begin(),s.end());size_t at=0;for(std::wsregex_iterator it(w.begin(),w.end(),re.expression),end;it!=end;++it){out.push(s.substr(at,it->position()-at));at=it->position()+it->length();}out.push(s.substr(at));return out;}
inline String upper(String s){for(auto &c:s)if(c>=u'a'&&c<=u'z')c-=32;return s;}inline String lower(String s){for(auto &c:s)if(c>=u'A'&&c<=u'Z')c+=32;return s;}
inline Array<String> chars(const String&s){return split(s,String{});}
template<class T> T decode(const Json &j);
template<class T> struct Decoder {static T get(const Json &j){if constexpr(std::is_same_v<T,double>)return j.number(nan);else if constexpr(std::is_same_v<T,bool>)return j.boolean();else if constexpr(std::is_same_v<T,String>)return utf16(j.string());else return T{};}};
template<class T> struct Decoder<std::optional<T>> {static std::optional<T> get(const Json&j){return j.missing()?std::nullopt:std::optional<T>(decode<T>(j));}};
template<class T> struct Decoder<std::shared_ptr<T>> {static std::shared_ptr<T> get(const Json&j){return j.missing()?nullptr:T::decode(j);}};
template<class T,bool B> struct Decoder<Array<T,B>> {static Array<T,B> get(const Json&j){Array<T,B> out;for(auto &v:j.array())out.push(decode<T>(v));return out;}};
template<class T> T decode(const Json &j){return Decoder<T>::get(j);}
template<class T> T option(const Json&j,const std::string&key,T fallback){return j[key].missing()?fallback:decode<T>(j[key]);}
inline double now(){return std::chrono::duration<double,std::milli>(std::chrono::system_clock::now().time_since_epoch()).count();}
struct Date {double time=now();Date()=default;explicit Date(double n):time(n){}Date(double y,double m,double d=1){std::tm t{};t.tm_year=int(y)-1900;t.tm_mon=int(m);t.tm_mday=int(d);t.tm_isdst=-1;time=std::mktime(&t)*1000.;}std::tm local()const{auto t=std::time_t(time/1000);std::tm out{};localtime_r(&t,&out);return out;}double getTime()const{return time;}double getHours()const{return local().tm_hour;}double getMinutes()const{return local().tm_min;}double getSeconds()const{return local().tm_sec;}double getDay()const{return local().tm_wday;}double getDate()const{return local().tm_mday;}double getMonth()const{return local().tm_mon;}double getFullYear()const{return local().tm_year+1900;}};
// The options boundary converts JSON once. Frame loops use these concrete types.
template<class K,class V> struct Dict {
    std::shared_ptr<std::unordered_map<K,V>> values=std::make_shared<std::unordered_map<K,V>>();
    V get(const K&k)const{auto i=values->find(k);if(i!=values->end())return i->second;if constexpr(std::is_same_v<V,double>)return nan;else return absent<V>();}
    Dict &set(const K&k,V v){(*values)[k]=std::move(v);return *this;}
};
template<class K,class V> bool truth(const Dict<K,V>&){return true;}
template<class T,size_t N,class F> auto map(const std::array<T,N>&a,F f){using R=std::decay_t<decltype(invoke(f,at(a,0),0,a))>;Array<R> out;out.storage->reserve(N);for(size_t i=0;i<N;++i)out.push(invoke(f,at(a,i),double(i),a));return out;}
template<class T,size_t N> bool includes(const std::array<T,N>&a,const T&value){return std::find(a.begin(),a.end(),value)!=a.end();}
template<class T,size_t N,class F,class R> R reduce(const std::array<T,N>&a,F f,R r){for(size_t i=0;i<N;++i)r=f(r,at(a,i));return r;}
template<class T,size_t N,class F> void forEach(const std::array<T,N>&a,F f){for(size_t i=0;i<N;++i)invoke(f,at(a,i),double(i),a);}
template<class T,size_t N> String join(const std::array<T,N>&a,const String&sep=u","){String out;for(size_t i=0;i<N;++i){if(i)out+=sep;out+=string(double(a[i]));}return out;}
template<class A> double hypot(const A&a){double scale=0,ssq=0;for(auto x:a){x=std::fabs(double(x));if(std::isinf(x))return INFINITY;if(std::isnan(x))return nan;if(x>scale){ssq=ssq*(scale/x)*(scale/x)+1;scale=x;}else if(x)ssq+=(x/scale)*(x/scale);}return scale?scale*std::sqrt(ssq):0;}
template<class T,bool B> double minimum(const Array<T,B>&a){double r=INFINITY;for(auto x:a)r=minimum({r,double(x)});return r;}
template<class T,bool B> double maximum(const Array<T,B>&a){double r=-INFINITY;for(auto x:a)r=maximum({r,double(x)});return r;}
inline bool isInteger(double x){return std::isfinite(x)&&std::floor(x)==x;}
inline String fromCharCode(std::initializer_list<double> chars){String out;for(auto n:chars)out+=char16_t(u32(n));return out;}
template<class A> String fromCharCode(const A&chars){String out;for(auto n:chars)out+=char16_t(u32(n));return out;}
inline String substring(const String&s,double start,double end=INFINITY){auto a=size_t(std::clamp(start,0.,double(s.size()))),b=std::isinf(end)?s.size():size_t(std::clamp(end,0.,double(s.size())));if(a>b)std::swap(a,b);return s.substr(a,b-a);}
inline double indexOf(const String&s,const String&needle,double start=0){auto i=s.find(needle,size_t(std::max(0.,start)));return i==s.npos?-1.:double(i);}
inline double lastIndexOf(const String&s,const String&needle,double start=INFINITY){auto i=s.rfind(needle,std::isinf(start)?s.npos:size_t(std::max(0.,start)));return i==s.npos?-1.:double(i);}
inline bool includes(const String&s,const String&needle,double start=0){return indexOf(s,needle,start)>=0;}
inline bool startsWith(const String&s,const String&needle,double start=0){return s.compare(size_t(std::clamp(start,0.,double(s.size()))),needle.size(),needle)==0;}
inline bool endsWith(const String&s,const String&needle,double end=INFINITY){const auto n=size_t(std::clamp(end,0.,double(s.size())));return n>=needle.size()&&s.compare(n-needle.size(),needle.size(),needle)==0;}
inline double charCodeAt(const String&s,double n=0){return n>=0&&n<s.size()?double(s[size_t(n)]):nan;}
inline double codePointAt(const String&s,double n=0){if(n<0||n>=s.size())return nan;const uint32_t a=s[size_t(n)];if(a>=0xd800&&a<=0xdbff&&n+1<s.size()){const uint32_t b=s[size_t(n)+1];if(b>=0xdc00&&b<=0xdfff)return 0x10000+((a-0xd800)<<10)+b-0xdc00;}return a;}
inline String replaceAll(String s,const String&from,const String&to){if(from.empty()){String out=to;for(auto c:s){out+=c;out+=to;}return out;}size_t i=0;while((i=s.find(from,i))!=s.npos){s.replace(i,from.size(),to);i+=to.size();}return s;}
inline String replaceAll(const String&s,const Regex&re,const String&replacement){const auto w=std::regex_replace(std::wstring(s.begin(),s.end()),re.expression,std::wstring(replacement.begin(),replacement.end()));return String(w.begin(),w.end());}
struct Match {Array<String> groups;double index=0;size_t size()const{return groups.size();}};
inline String at(const std::shared_ptr<Match>&m,double n){return m?at(m->groups,n):String{};}
inline std::shared_ptr<Match> match(const String&s,const Regex&re){std::wstring w(s.begin(),s.end());std::wsmatch m;if(!std::regex_search(w,m,re.expression))return {};auto out=std::make_shared<Match>();out->index=m.position();for(auto &g:m){const auto text=g.str();out->groups.push(String(text.begin(),text.end()));}return out;}
inline double search(const String&s,const Regex&re){auto m=match(s,re);return m?m->index:-1.;}
inline Array<std::shared_ptr<Match>> matchAll(const String&s,const Regex&re){Array<std::shared_ptr<Match>> out;const std::wstring w(s.begin(),s.end());for(std::wsregex_iterator it(w.begin(),w.end(),re.expression),end;it!=end;++it){auto m=std::make_shared<Match>();m->index=it->position();for(auto &g:*it){auto text=g.str();m->groups.push(String(text.begin(),text.end()));}out.push(m);}return out;}
inline bool Regex::test(const String&s)const{return bool(match(s,*this));}
inline std::shared_ptr<Match> Regex::exec(const String&s)const{return match(s,*this);}
template<class T,size_t N> struct Decoder<std::array<T,N>> {static std::array<T,N> get(const Json&j){std::array<T,N> out{};for(size_t i=0;i<N&&i<j.array().size();++i)out[i]=decode<T>(j.array()[i]);return out;}};
template<class K,class V> struct Decoder<Dict<K,V>> {static Dict<K,V> get(const Json&j){Dict<K,V> out;if(const auto *o=std::get_if<Json::Object>(&j.value))for(const auto &[k,v]:*o){if constexpr(std::is_same_v<K,String>)out.set(utf16(k),decode<V>(v));else out.set(parseInt(utf16(k)),decode<V>(v));}return out;}};
template<class...T> struct Decoder<std::variant<T...>> {
    template<class U> static bool fits(const Json&j){if constexpr(std::is_same_v<U,Nil>)return j.missing();else if constexpr(std::is_same_v<U,double>)return std::holds_alternative<double>(j.value);else if constexpr(std::is_same_v<U,bool>)return std::holds_alternative<bool>(j.value);else if constexpr(std::is_same_v<U,String>)return std::holds_alternative<std::string>(j.value);else return std::holds_alternative<Json::Array>(j.value)||std::holds_alternative<Json::Object>(j.value);}
    static std::variant<T...> get(const Json&j){std::variant<T...> out{};bool done=false;([&](){if(!done&&fits<T>(j)){out=decode<T>(j);done=true;}}(),...);return out;}
};
template<class T,class U> T cast(const U &v){if constexpr(std::is_same_v<T,U>)return v;else if constexpr(std::is_same_v<T,bool>)return truth(v);else if constexpr(std::is_arithmetic_v<T>)return T(number(v));else if constexpr(std::is_same_v<T,String>)return string(v);else return T(v);}

template<class T> bool truth(const Set<T>&){return true;}
template<class...T> struct Decoder<std::shared_ptr<std::tuple<T...>>> {template<size_t...I> static auto unpack(const Json&j,std::index_sequence<I...>){const auto &a=j.array();return std::make_shared<std::tuple<T...>>(decode<T>(I<a.size()?a[I]:Json{})...);}static auto get(const Json&j){return j.missing()?std::shared_ptr<std::tuple<T...>>{}:unpack(j,std::index_sequence_for<T...>{});}};
template<> struct Decoder<std::shared_ptr<Match>>{static std::shared_ptr<Match> get(const Json&){return {};}};
template<class T> struct IsVariant:std::false_type{};
template<class...T> struct IsVariant<std::variant<T...>>:std::true_type{};
template<class T> struct IsOptional:std::false_type{};
template<class T> struct IsOptional<std::optional<T>>:std::true_type{};
template<class A,class B> bool equal(const A&a,const B&b){if constexpr(IsVariant<A>::value)return std::visit([&](const auto &v){return equal(v,b);},a);else if constexpr(IsVariant<B>::value)return std::visit([&](const auto &v){return equal(a,v);},b);else if constexpr(IsOptional<A>::value)return a?equal(*a,b):equal(Nil{},b);else if constexpr(IsOptional<B>::value)return b?equal(a,*b):equal(a,Nil{});else if constexpr(std::is_same_v<A,Nil>||std::is_same_v<B,Nil>)return std::is_same_v<A,B>;else if constexpr(std::is_same_v<A,B>)return a==b;else if constexpr(std::is_arithmetic_v<A>&&std::is_arithmetic_v<B>)return (std::is_same_v<A,bool> == std::is_same_v<B,bool>)&&a==b;else return false;}
} // namespace ascii::direct
