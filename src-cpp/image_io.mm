#include "value.hpp"
#import <AppKit/AppKit.h>
#import <ImageIO/ImageIO.h>
#include <zlib.h>

namespace ascii::native {
Value clean_xml(const Value &source){
    const auto s=string(source);std::u16string out;
    for(size_t i=0;i<s.size();++i){const auto c=s[i];if(c<32&&c!=9&&c!=10&&c!=13)continue;if(c==0xfffe||c==0xffff)continue;if(c>=0xd800&&c<=0xdbff){if(i+1<s.size()&&s[i+1]>=0xdc00&&s[i+1]<=0xdfff){out+=c;out+=s[++i];}continue;}if(c>=0xdc00&&c<=0xdfff)continue;out+=c;}
    return Value(out);
}
Value inflate_bytes(const Value &source,size_t limit){
    auto input=elements(source);std::vector<uint8_t> bytes;bytes.reserve(input.size());for(auto &v:input)bytes.push_back(uint8_t(number(v)));
    z_stream z{};z.next_in=bytes.data();z.avail_in=uInt(bytes.size());if(inflateInit(&z)!=Z_OK)throw std::runtime_error("Cannot initialize PNG decompression");
    std::vector<uint8_t> output;int status=Z_OK;
    while(status==Z_OK){uint8_t block[32768];z.next_out=block;z.avail_out=sizeof(block);status=::inflate(&z,Z_NO_FLUSH);const auto count=sizeof(block)-z.avail_out;if(output.size()+count>limit){inflateEnd(&z);throw std::runtime_error("PNG data exceeds its image dimensions");}output.insert(output.end(),block,block+count);}
    inflateEnd(&z);if(status!=Z_STREAM_END)throw std::runtime_error("PNG decompression failed");
    auto value=typed("Uint8Array",{Value(output.size())});std::copy(output.begin(),output.end(),value.data->buffer->begin());return value;
}
Value image_pixels(const Value &source){
    @autoreleasepool {
        NSData *data=nil;
        if(source.kind==Value::String){const auto text=utf8(string(source));NSString *path=[NSString stringWithUTF8String:text.c_str()];
            if([path stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]].length==0)throw std::runtime_error("fromImage() needs an image path or bytes");
            if([path containsString:@"<svg"])data=[path dataUsingEncoding:NSUTF8StringEncoding];
            else {NSURL *url=[NSURL URLWithString:path];if(!url.scheme)url=[NSURL fileURLWithPath:[path stringByExpandingTildeInPath]];NSError *error=nil;data=[NSData dataWithContentsOfURL:url options:0 error:&error];if(!data)throw std::runtime_error(error?error.localizedDescription.UTF8String:"Cannot read image");}
        }else if(source.kind==Value::Typed||source.kind==Value::Buffer){
            if(source.kind==Value::Buffer)data=[NSData dataWithBytes:source.data->buffer->data() length:source.data->buffer->size()];
            else {auto bytes=elements(source);std::vector<uint8_t> values;values.reserve(bytes.size());for(auto &v:bytes)values.push_back(uint8_t(number(v)));data=[NSData dataWithBytes:values.data() length:values.size()];}
        }else if(source.data&&!nullish(get(source,u"data"))&&!nullish(get(source,u"width"))&&!nullish(get(source,u"height")))return source;
        else throw std::runtime_error("Native fromImage() takes an image path, URL, file bytes or RGBA data; SVG shapes are also available through fromSvg()");
        CGImageRef image=nullptr;
        CGImageSourceRef decoder=CGImageSourceCreateWithData((__bridge CFDataRef)data,nullptr);if(decoder){image=CGImageSourceCreateImageAtIndex(decoder,0,nullptr);CFRelease(decoder);}
        if(!image){NSImage *vector=[[NSImage alloc] initWithData:data];if(vector){NSRect rect=NSMakeRect(0,0,vector.size.width,vector.size.height);CGImageRef candidate=[vector CGImageForProposedRect:&rect context:nil hints:nil];if(candidate)image=CGImageRetain(candidate);}}
        if(!image)throw std::runtime_error("Cannot decode image; use PNG, JPEG, GIF, WebP or fromSvg() for vector markup");
        const size_t width=CGImageGetWidth(image),height=CGImageGetHeight(image);auto pixels=typed("Uint8ClampedArray",{Value(width*height*4)});
        CGColorSpaceRef space=CGColorSpaceCreateWithName(kCGColorSpaceSRGB);CGContextRef context=CGBitmapContextCreate(pixels.data->buffer->data(),width,height,8,width*4,space,kCGImageAlphaPremultipliedLast|kCGBitmapByteOrder32Big);CGColorSpaceRelease(space);
        if(!context){CGImageRelease(image);throw std::runtime_error("Cannot allocate image pixels");}
        CGContextTranslateCTM(context,0,height);CGContextScaleCTM(context,1,-1);CGContextDrawImage(context,CGRectMake(0,0,width,height),image);CGContextRelease(context);CGImageRelease(image);
        auto &bytes=*pixels.data->buffer;for(size_t i=0;i<bytes.size();i+=4){const int a=bytes[i+3];if(a&&a<255)for(int c=0;c<3;++c)bytes[i+c]=uint8_t(std::min(255,(int(bytes[i+c])*255+a/2)/a));}
        return object({{u"data",pixels},{u"width",Value(width)},{u"height",Value(height)}});
    }
}
} // namespace ascii::native
