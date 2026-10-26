#include "value.hpp"
#include "catalog.hpp"
#include "draw.hpp"
#include <charconv>
#include <cstring>
#include <fstream>
#include <numeric>
#include <zlib.h>

namespace ascii::native {
namespace {
Value tagged(Value::Kind kind){Value v;v.kind=kind;v.data=std::make_shared<Data>();return v;}
template<class T> double read_number(const uint8_t *p){T n;std::memcpy(&n,p,sizeof(n));return double(n);}
template<class T> void write_number(uint8_t *p,T n){std::memcpy(p,&n,sizeof(n));}
Value read_typed(const Value &v,size_t i){const auto &t=v.data->type;const auto *p=v.data->buffer->data()+v.data->byteOffset+i*typed_width(t);return Value(t=="Float32Array"?read_number<float>(p):t=="Float64Array"?read_number<double>(p):t=="Int32Array"?read_number<int32_t>(p):t=="Uint32Array"?read_number<uint32_t>(p):t=="Int16Array"?read_number<int16_t>(p):t=="Uint16Array"?read_number<uint16_t>(p):t=="Int8Array"?read_number<int8_t>(p):read_number<uint8_t>(p));}
void write_typed(const Value &v,size_t i,const Value &value){const auto &t=v.data->type;auto *p=v.data->buffer->data()+v.data->byteOffset+i*typed_width(t);if(t=="Float32Array")write_number(p,float(number(value)));else if(t=="Float64Array")write_number(p,number(value));else if(t=="Uint8ClampedArray"){const double n=number(value);write_number(p,uint8_t(std::isnan(n)?0:std::nearbyint(std::clamp(n,0.,255.))));}else{const auto u=u32(value);if(t=="Int32Array"||t=="Uint32Array")write_number(p,u);else if(t=="Int16Array"||t=="Uint16Array")write_number(p,uint16_t(u));else write_number(p,uint8_t(u));}}
bool numeric(const Value &v){return v.kind==Value::Number||v.kind==Value::Boolean;}
int index_of(const Value &key){if(key.kind==Value::Number)return std::isfinite(key.n)&&key.n>=0&&key.n<=INT32_MAX&&std::floor(key.n)==key.n?int(key.n):-1;const auto s=string(key);if(s.empty()||(s.size()>1&&s[0]==u'0'))return -1;for(auto c:s)if(c<u'0'||c>u'9')return -1;try{return std::stoi(utf8(s));}catch(...){return -1;}}
size_t length(const Value &v){if(v.kind==Value::String)return v.data->string.size();if(v.kind==Value::Array)return v.data->items.size();if(v.kind==Value::Typed)return v.data->typedLength;return 0;}
int bound(int n,int size){return n<0?std::max(0,size+n):std::min(size,n);}
Value error_value(const std::string &message){return object({{u"message",Value(utf16(message))},{u"name",u"Error"}});}
Value native_fn(std::function<Value(const Args &)> f){return function([f=std::move(f)](const Args&a,const Value&,const Value&){return f(a);});}
std::wstring wide(std::u16string_view s){return std::wstring(s.begin(),s.end());}
std::u16string narrow(const std::wstring &s){return std::u16string(s.begin(),s.end());}
}

Value array(Args values){auto v=tagged(Value::Array);v.data->items.assign(values.begin(),values.end());return v;}
Value object(std::initializer_list<std::pair<Value,Value>> values){auto v=tagged(Value::Object);for(const auto &p:values)put(v,p.first,p.second);return v;}
Value function(Callback callback,int arity){auto v=tagged(Value::Function);v.n=arity;v.data->callback=std::move(callback);return v;}
Value regexp(std::u16string pattern,const std::string &flags){auto v=tagged(Value::Regex);v.data->string=pattern;v.data->flags=flags;put(v,u"lastIndex",Value(0));if(flags.find('s')!=flags.npos){std::u16string expanded;bool escaped=false,group=false;for(auto c:pattern){if(escaped){expanded+=c;escaped=false;continue;}if(c==u'\\'){expanded+=c;escaped=true;continue;}if(c==u'[')group=true;if(c==u']')group=false;if(c==u'.'&&!group)expanded+=u"[\\s\\S]";else expanded+=c;}pattern=std::move(expanded);}auto options=std::regex_constants::ECMAScript;if(flags.find('m')!=flags.npos)options|=std::regex_constants::multiline;if(flags.find('i')!=flags.npos)options|=std::regex_constants::icase;v.data->regex=std::make_shared<std::wregex>(wide(pattern),options);return v;}
std::u16string string(const Value &v){
    if(v.kind==Value::String)return v.data->string;
    if(v.kind==Value::Undefined||v.kind==Value::Hole)return u"undefined";
    if(v.kind==Value::Null)return u"null";
    if(v.kind==Value::Boolean)return v.n?u"true":u"false";
    if(v.kind==Value::Number){if(std::isnan(v.n))return u"NaN";if(std::isinf(v.n))return v.n<0?u"-Infinity":u"Infinity";if(v.n==0)return u"0";char buf[100];const auto result=std::to_chars(buf,buf+100,v.n);if(result.ec==std::errc()){
        std::string text(buf,result.ptr);const auto e=text.find_first_of("eE");
        if(e!=text.npos){const int exponent=std::stoi(text.substr(e+1));const bool negative=text[0]=='-';auto mantissa=text.substr(negative?1:0,e-(negative?1:0));const auto dot=mantissa.find('.');const int decimal=int(dot==mantissa.npos?mantissa.size():dot)+exponent;mantissa.erase(std::remove(mantissa.begin(),mantissa.end(),'.'),mantissa.end());
            if(std::abs(v.n)>=1e-6&&std::abs(v.n)<1e21){if(decimal<=0)text=(negative?"-0.":"0.")+std::string(-decimal,'0')+mantissa;else if(decimal>=int(mantissa.size()))text=(negative?"-":"")+mantissa+std::string(decimal-mantissa.size(),'0');else{mantissa.insert(decimal,".");text=(negative?"-":"")+mantissa;}}
            else{text=text.substr(0,e)+"e"+(exponent>=0?"+":"-")+std::to_string(std::abs(exponent));}
        }
        return utf16(text);
    }std::ostringstream o;o<<std::setprecision(15)<<v.n;return utf16(o.str());}
    if(v.kind==Value::Array||v.kind==Value::Typed){std::u16string s;for(const auto &a:elements(v)){if(!s.empty()){}if(!nullish(a))s+=string(a);s+=u',';}if(!s.empty())s.pop_back();return s;}
    if(v.kind==Value::Date){std::time_t stamp=std::time_t(v.n/1000);char buf[80];auto now=WallClock::local(double(stamp));std::strftime(buf,sizeof(buf),"%a %b %d %Y %H:%M:%S",&now);return utf16(buf);}
    return u"[object Object]";
}
double number_slow(const Value &v){if(v.kind==Value::Null)return 0;if(v.kind==Value::Undefined||v.kind==Value::Hole)return std::numeric_limits<double>::quiet_NaN();const auto s=utf8(string(v));if(s.find_first_not_of(" \r\n\t")==s.npos)return 0;char *end=nullptr;const auto n=std::strtod(s.c_str(),&end);while(end&&(*end==' '||*end=='\r'||*end=='\n'||*end=='\t'))++end;return end&&end!=s.c_str()&&!*end?n:std::numeric_limits<double>::quiet_NaN();}
std::string type_of(const Value &v){switch(v.kind){case Value::Undefined:case Value::Hole:return "undefined";case Value::Boolean:return "boolean";case Value::Number:return "number";case Value::String:return "string";case Value::Function:case Value::Class:return "function";default:return "object";}}
bool equal(const Value&a,const Value&b,bool strict){if(!strict&&nullish(a)&&nullish(b))return true;if(a.kind==b.kind){if(numeric(a))return a.n==b.n;if(a.kind==Value::String)return a.data->string==b.data->string;if(nullish(a))return true;return a.data==b.data;}if(!strict){if(numeric(a)||numeric(b))return number(a)==number(b);}return false;}
Value binary(const std::string &op,const Value&a,const Value&b){
    if(op=="==="||op=="==")return Value(equal(a,b,op=="==="));if(op=="!=="||op=="!=")return Value(!equal(a,b,op=="!=="));
    if(op=="+"){if(a.kind==Value::String||b.kind==Value::String||a.kind==Value::Array||b.kind==Value::Array)return Value(string(a)+string(b));return Value(number(a)+number(b));}
    if(op=="-")return Value(number(a)-number(b));if(op=="*")return Value(number(a)*number(b));if(op=="/")return Value(number(a)/number(b));if(op=="%")return Value(std::fmod(number(a),number(b)));if(op=="**")return Value(std::pow(number(a),number(b)));
    if(op=="<"||op==">"||op=="<="||op==">="){if(a.kind==Value::String&&b.kind==Value::String){const auto &x=a.data->string,&y=b.data->string;return Value(op=="<"?x<y:op==">"?x>y:op=="<="?x<=y:x>=y);}const double x=number(a),y=number(b);return Value(op=="<"?x<y:op==">"?x>y:op=="<="?x<=y:x>=y);}
    if(op=="|")return Value(int(i32(a)|i32(b)));if(op=="&")return Value(int(i32(a)&i32(b)));if(op=="^")return Value(int(i32(a)^i32(b)));if(op=="<<")return Value(double(int32_t(u32(a)<<(u32(b)&31))));if(op==">>")return Value(int(i32(a)>>(u32(b)&31)));if(op==">>>")return Value(double(u32(a)>>(u32(b)&31)));
    if(op=="in"){const auto key=string(a);for(const auto &k:keys(b))if(string(k)==key)return Value(true);return Value(false);}
    if(op=="instanceof"){if(b.kind==Value::Class){Value proto=a.data?a.data->prototype:Value{};while(proto.data){if(equal(proto,b.data->prototype))return Value(true);proto=proto.data->prototype;}return Value(false);}const auto name=b.data?b.data->type:"";if(a.kind==Value::Typed)return Value(name==a.data->type||name=="Object");return Value((a.kind==Value::Array&&name=="Array")||(a.kind==Value::Date&&name=="Date")||(a.kind==Value::Map&&name=="Map")||(a.kind==Value::Set&&name=="Set"));}
    throw std::runtime_error("Unsupported native operator: "+op);
}
Value unary(const std::string&op,const Value&a){if(op=="!")return Value(!truth(a));if(op=="-")return Value(-number(a));if(op=="+")return Value(number(a));if(op=="~")return Value(int(~i32(a)));if(op=="void")return {};if(op=="typeof")return Value(utf16(type_of(a)));return {};}
Value defaulted(const Value &v,const Value&fallback){return v.kind==Value::Undefined||v.kind==Value::Hole?fallback:v;}
Value rest(const Args&a,size_t start){return array(start<a.size()?Args(a.begin()+start,a.end()):Args{});}
Value object_rest(const Value &v,const std::vector<std::u16string>&excluded){auto out=object();for(const auto &k:keys(v))if(std::find(excluded.begin(),excluded.end(),string(k))==excluded.end())put(out,k,get(v,k));return out;}
Value merge_object(const std::vector<Value>&parts){auto out=object();for(auto &v:parts)for(auto &k:keys(v))put(out,k,get(v,k));return out;}
Value increment(Value &target,int delta,bool prefix){const auto old=Value(number(target));target=Value(old.n+delta);return prefix?target:old;}
Value increment(const Value &v,const Value&key,int delta,bool prefix){const auto old=Value(number(get(v,key)));const auto next=Value(old.n+delta);put(v,key,next);return prefix?next:old;}
Value update(const Value&v,const Value&key,const std::string&op,const Value&rhs){return put(v,key,binary(op,get(v,key),rhs));}
Args elements(const Value &v){Args out;if(v.kind==Value::Array){for(const auto &x:v.data->items)out.push_back(x.kind==Value::Hole?Value{}:x);}else if(v.kind==Value::Typed){for(size_t i=0;i<v.data->typedLength;++i)out.push_back(get(v,Value(i)));}else if(v.kind==Value::String){for(size_t i=0;i<v.data->string.size();++i){std::u16string s(1,v.data->string[i]);if(s[0]>=0xd800&&s[0]<=0xdbff&&i+1<v.data->string.size())s+=v.data->string[++i];out.push_back(Value(s));}}else if(v.kind==Value::Set){for(const auto &p:v.data->pairs)out.push_back(p.first);}else if(v.kind==Value::Map){for(const auto &p:v.data->pairs)out.push_back(array({p.first,p.second}));}else if(!nullish(v)){const auto size=get(v,u"length");if(!nullish(size))for(int i=0;i<int(number(size));++i)out.push_back(get(v,Value(i)));}return out;}
std::vector<Value> keys(const Value &v){
    std::vector<Value> out;
    if(v.kind==Value::Array||v.kind==Value::Typed||v.kind==Value::String)for(size_t i=0;i<length(v);++i){if(v.kind!=Value::Array||v.data->items[i].kind!=Value::Hole)out.push_back(Value(string(Value(i))));}
    if(v.kind==Value::Namespace){for(const auto &p:v.data->module->exports)out.push_back(Value(utf16(p.first)));}
    else if(v.data){
        std::vector<std::pair<int,std::u16string>> indices;std::vector<std::u16string> names;
        for(const auto &key:v.data->order)if(!v.data->hidden.count(key)&&(v.data->props.count(key)||v.data->getters.count(key))){const int i=index_of(Value(key));if(i>=0)indices.emplace_back(i,key);else names.push_back(key);}
        std::sort(indices.begin(),indices.end());for(const auto &p:indices)out.push_back(Value(p.second));for(const auto &key:names)out.push_back(Value(key));
    }
    return out;
}
Value get(const Value &v,const Value &key){
    if(nullish(v))throw std::runtime_error("Cannot read property of null or undefined");const auto name=string(key);const int index=index_of(key);
    if(name==u"length"&&(v.kind==Value::Array||v.kind==Value::String||v.kind==Value::Typed))return Value(length(v));
    if(name==u"length"&&v.kind==Value::Function)return Value(v.n);
    if(index>=0){if(v.kind==Value::Buffer)return size_t(index)<v.data->buffer->size()?Value(int((*v.data->buffer)[index])):Value{};if(v.kind==Value::Array)return size_t(index)<v.data->items.size()?(v.data->items[index].kind==Value::Hole?Value{}:v.data->items[index]):Value{};if(v.kind==Value::Typed)return size_t(index)<v.data->typedLength?read_typed(v,size_t(index)):Value{};if(v.kind==Value::String)return size_t(index)<v.data->string.size()?Value(std::u16string(1,v.data->string[index])):Value{};}
    if(name==u"size"&&(v.kind==Value::Map||v.kind==Value::Set))return Value(v.data->pairs.size());
    if(v.kind==Value::Typed&&(name==u"byteLength"||name==u"byteOffset"||name==u"buffer")){if(name==u"buffer"){auto out=tagged(Value::Buffer);out.data->buffer=v.data->buffer;return out;}if(name==u"byteOffset")return Value(v.data->byteOffset);const auto &t=v.data->type;const int width=t.find("64")!=t.npos?8:t.find("32")!=t.npos?4:t.find("16")!=t.npos?2:1;return Value(v.data->typedLength*size_t(width));}
    if(v.kind==Value::Buffer&&name==u"byteLength")return Value(v.data->buffer->size());
    if(v.kind==Value::Class&&name==u"prototype")return v.data->prototype;
    if(v.kind==Value::Namespace)return v.data->module->exported(utf8(name)).get();
    for(auto cursor=v;cursor.data;cursor=cursor.data->prototype){auto it=cursor.data->props.find(name);if(it!=cursor.data->props.end())return it->second;auto g=cursor.data->getters.find(name);if(g!=cursor.data->getters.end())return call(g->second,{},v);if(nullish(cursor.data->prototype))break;}
    return has_native_method(v,name)?native_fn([v,key](const Args&a){return method(v,key,a);}):Value{};
}
Value put(const Value &v,const Value&key,const Value &value){
    if(!v.data)throw std::runtime_error("Cannot write native property");const auto name=string(key);const int index=index_of(key);
    if(v.kind==Value::Array&&name==u"length"){v.data->items.resize(size_t(std::max(0.,number(value))),Value::hole());return value;}
    if(index>=0&&v.kind==Value::Array){if(size_t(index)>=v.data->items.size())v.data->items.resize(index+1,Value::hole());v.data->items[index]=value;return value;}
    if(index>=0&&v.kind==Value::Typed){if(size_t(index)<v.data->typedLength)write_typed(v,size_t(index),value);return value;}
    for(auto cursor=v;cursor.data;cursor=cursor.data->prototype){const auto setter=cursor.data->setters.find(name);if(setter!=cursor.data->setters.end()){call(setter->second,{value},v);return value;}if(nullish(cursor.data->prototype))break;}{if(!v.data->props.count(name))v.data->order.push_back(name);v.data->props[name]=value;}return value;
}
Value erase(const Value&v,const Value&key){if(v.data){const int i=index_of(key);if(v.kind==Value::Array&&i>=0&&size_t(i)<v.data->items.size())v.data->items[i]=Value::hole();else {const auto name=string(key);v.data->props.erase(name);v.data->order.erase(std::remove(v.data->order.begin(),v.data->order.end(),name),v.data->order.end());}}return Value(true);}
void accessor(const Value &v,const Value &key,const Value &fn,bool getter){const auto name=string(key);if(!v.data->props.count(name)&&!v.data->getters.count(name)&&!v.data->setters.count(name))v.data->order.push_back(name);if(getter)v.data->getters[name]=fn;else v.data->setters[name]=fn;}
size_t typed_width(const std::string &type){return type.find("64")!=type.npos?8:type.find("32")!=type.npos?4:type.find("16")!=type.npos?2:1;}
Value byte_buffer(size_t size){auto v=tagged(Value::Buffer);v.data->buffer=std::make_shared<std::vector<uint8_t>>(size);return v;}
Value typed(const std::string &type,const Args &a){
    auto v=tagged(Value::Typed);v.data->type=type;const auto width=typed_width(type);
    if(!a.empty()&&a[0].kind==Value::Buffer){v.data->buffer=a[0].data->buffer;v.data->byteOffset=a.size()>1?size_t(number(a[1])):0;if(v.data->byteOffset>v.data->buffer->size())throw std::runtime_error("Typed array offset exceeds its buffer");v.data->typedLength=a.size()>2?size_t(number(a[2])):(v.data->buffer->size()-v.data->byteOffset)/width;if(v.data->byteOffset+v.data->typedLength*width>v.data->buffer->size())throw std::runtime_error("Typed array view exceeds its buffer");return v;}
    Args values;if(!a.empty()&&a[0].kind!=Value::Number)values=elements(a[0]);v.data->typedLength=a.empty()?0:a[0].kind==Value::Number?size_t(std::max(0.,number(a[0]))):values.size();v.data->buffer=std::make_shared<std::vector<uint8_t>>(v.data->typedLength*width);for(size_t i=0;i<values.size();++i)write_typed(v,i,values[i]);return v;
}
Value call(const Value&fn,const Args&a,const Value&receiver){if(fn.kind==Value::Function)return fn.data->callback(a,receiver,fn);if(fn.kind==Value::Class)return construct(fn,a,receiver);throw std::runtime_error("Native value is not callable");}
Value make_class(const std::string&name,const Value&base,const Value&ctor){auto c=tagged(Value::Class);c.data->type=name;c.data->base=base;c.data->constructor=ctor;c.data->prototype=object();if(base.kind==Value::Class)c.data->prototype.data->prototype=base.data->prototype;c.data->prototype.data->hidden.insert(u"constructor");put(c.data->prototype,u"constructor",c);return c;}
void class_method(const Value&c,const Value&key,const Value&fn,bool stat,const std::string&kind){auto obj=stat?c:c.data->prototype;obj.data->hidden.insert(string(key));if(kind=="get")obj.data->getters[string(key)]=fn;else if(kind=="set")obj.data->setters[string(key)]=fn;else put(obj,key,fn);}
Value construct(const Value&fn,const Args&a,const Value&receiver){if(fn.kind!=Value::Class)return call(fn,a,receiver);const bool fresh=nullish(receiver);auto obj=fresh?object():receiver;if(fresh)obj.data->prototype=fn.data->prototype;if(!nullish(fn.data->constructor))call(fn.data->constructor,a,obj);else if(fn.data->base.kind==Value::Class)construct(fn.data->base,a,obj);return obj;}
Value raise(const Value&v){throw std::runtime_error(utf8(v.data&&v.data->props.count(u"message")?string(v.data->props[u"message"]):string(v)));}
Value from_json(const Json&j){if(std::holds_alternative<std::nullptr_t>(j.value))return Value::null();if(auto v=std::get_if<bool>(&j.value))return Value(*v);if(auto v=std::get_if<double>(&j.value))return Value(*v);if(auto v=std::get_if<std::string>(&j.value))return Value(utf16(*v));if(auto v=std::get_if<Json::Array>(&j.value)){auto out=array();for(auto &a:*v)out.data->items.push_back(from_json(a));return out;}auto out=object();for(const auto&p:std::get<Json::Object>(j.value))put(out,Value(utf16(p.first)),from_json(p.second));return out;}
Json to_json(const Value&v){if(nullish(v))return Json();if(v.kind==Value::Boolean)return Json(v.n!=0);if(v.kind==Value::Number)return Json(v.n);if(v.kind==Value::String)return Json(utf8(v.data->string));if(v.kind==Value::Array||v.kind==Value::Typed){Json::Array a;for(const auto &x:elements(v))a.push_back(to_json(x));return Json(a);}Json::Object o;for(const auto&k:keys(v)){auto x=get(v,k);if(x.kind!=Value::Undefined&&x.kind!=Value::Function)o[utf8(string(k))]=to_json(x);}return Json(o);}
} // namespace ascii::native
