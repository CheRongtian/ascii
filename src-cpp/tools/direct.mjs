// Source maintenance: lower the repository's statically typed piece algorithms
// to native C++ fields, typed arrays, numeric expressions and functions.
import fs from 'node:fs';
import path from 'node:path';
import {createRequire} from 'node:module';
import {fileURLToPath} from 'node:url';
const require=createRequire(import.meta.url);
let ts;
for(const candidate of [process.env.ASCII_TYPESCRIPT_PATH,'typescript','/opt/homebrew/lib/node_modules/openclaw/node_modules/typescript/lib/typescript.js'].filter(Boolean)){
  try{ts=require(candidate);break;}catch{}
}
if(!ts)throw new Error('Source conversion needs an existing TypeScript installation; set ASCII_TYPESCRIPT_PATH to its typescript.js.');
const root=path.resolve(path.dirname(fileURLToPath(import.meta.url)),'../..');
const files=fs.readdirSync(path.join(root,'src/pieces')).filter(x=>x.endsWith('.ts')&&x!=='index.ts').map(x=>path.join(root,'src/pieces',x));
const compilerOptions={target:ts.ScriptTarget.ES2022,module:ts.ModuleKind.ESNext,moduleResolution:ts.ModuleResolutionKind.Bundler,strict:true,skipLibCheck:true,allowImportingTsExtensions:true,noEmit:true};
let program=ts.createProgram(files,compilerOptions),checker=program.getTypeChecker();
// Keep small returned numeric vectors on the stack. These assertions exist only
// in the converter's in-memory source; original algorithms are left intact.
const rewritten=new Map();
for(const file of files){const sf=program.getSourceFile(file),changes=[];const visit=n=>{const value=ts.isReturnStatement(n)?n.expression:ts.isArrowFunction(n)&&!ts.isBlock(n.body)?n.body:null;if(value&&ts.isArrayLiteralExpression(value)&&value.elements.length>=2&&value.elements.length<=9&&value.elements.every(e=>!ts.isSpreadElement(e)&&(checker.getTypeAtLocation(e).flags&ts.TypeFlags.NumberLike))){changes.push([value.getStart(sf),value.end,`(${value.getText(sf)} as [${value.elements.map(()=> 'number').join(',')}])`]);}if((ts.isNewExpression(n)||ts.isCallExpression(n))&&ts.isIdentifier(n.expression)&&n.expression.text==='Array'&&!n.typeArguments?.length){let element=null,depth=0;for(let at=n;at.parent;at=at.parent){const parent=at.parent;if(ts.isCallExpression(parent)&&ts.isPropertyAccessExpression(parent.expression)&&parent.expression.name.text==='fill'&&parent.arguments.length){element=checker.getTypeAtLocation(parent.arguments[0]);break;}if(ts.isArrowFunction(parent)||ts.isFunctionExpression(parent))++depth;if(ts.isVariableDeclaration(parent)&&parent.type){let type=checker.getTypeAtLocation(parent.name);for(let i=0;i<depth;++i)type=checker.getTypeArguments(type)[0]??type;if(checker.isArrayType(type))element=checker.getTypeArguments(type)[0];break;}if(ts.isReturnStatement(parent)&&depth===0){const fn=parent.parent?.parent;if(fn?.type){const type=checker.getTypeAtLocation(fn.type);if(checker.isArrayType(type))element=checker.getTypeArguments(type)[0];}break;}}if(element&&!(element.flags&(ts.TypeFlags.Any|ts.TypeFlags.Unknown|ts.TypeFlags.TypeParameter))){if(element.flags&ts.TypeFlags.StringLike)element=checker.getStringType();if(element.flags&ts.TypeFlags.NumberLike)element=checker.getNumberType();changes.push([n.expression.end,n.expression.end,'<'+checker.typeToString(element,n,ts.TypeFormatFlags.NoTruncation)+'>']);}}ts.forEachChild(n,visit);};visit(sf);if(changes.length){let text=sf.text;for(const[a,b,replacement]of changes.sort((a,b)=>b[0]-a[0]))text=text.slice(0,a)+replacement+text.slice(b);rewritten.set(file,text);}}
const host=ts.createCompilerHost(compilerOptions),read=host.readFile;
host.readFile=file=>rewritten.get(file)??read(file);
program=ts.createProgram(files,compilerOptions,host);checker=program.getTypeChecker();
// A tuple passed as an ordinary JS array must keep shared storage. Copying
// it into a temporary vector would lose writes through a function parameter.
const sharedTuples=new Set();
const markSharedArrays=(actual,expected)=>{
  if(!actual||!expected)return;
  if(checker.isTupleType(actual)&&checker.isArrayType(expected)){sharedTuples.add(actual);return;}
  if(checker.isArrayType(actual)&&checker.isArrayType(expected))
    markSharedArrays(checker.getTypeArguments(actual)[0],checker.getTypeArguments(expected)[0]);
};
for(const file of files){
  const visit=n=>{
    if(ts.isCallExpression(n)){
      const signature=checker.getResolvedSignature(n);
      if(signature)n.arguments.forEach((arg,i)=>{
        const parameter=signature.parameters[i];
        if(parameter&&!ts.isSpreadElement(arg))markSharedArrays(checker.getTypeAtLocation(arg),checker.getTypeOfSymbolAtLocation(parameter,n));
      });
    }
    if(ts.isVariableDeclaration(n)&&n.initializer&&n.type)markSharedArrays(checker.getTypeAtLocation(n.initializer),checker.getTypeAtLocation(n.name));
    if(ts.isBinaryExpression(n)&&n.operatorToken.kind===ts.SyntaxKind.EqualsToken)markSharedArrays(checker.getTypeAtLocation(n.right),checker.getTypeAtLocation(n.left));
    if(ts.isAsExpression(n))markSharedArrays(checker.getTypeAtLocation(n.expression),checker.getTypeAtLocation(n));
    ts.forEachChild(n,visit);
  };visit(program.getSourceFile(file));
}
const quote=s=>'u'+JSON.stringify(s).replace(/\\u([dD][89aAbB][0-9a-fA-F]{2})\\u([dD][c-fC-F][0-9a-fA-F]{2})/g,(_,a,b)=>String.fromCodePoint(0x10000+((parseInt(a,16)-0xd800)<<10)+parseInt(b,16)-0xdc00));
let serial=0;const fresh=p=>'_n_'+p.replace(/[^A-Za-z0-9_]/g,'_')+'_'+(++serial);
const num=n=>Number.isFinite(n)?String(n)+(!/[.eE]/.test(String(n))?'.0':''):n<0?'-INFINITY':'INFINITY';
// Encode character keys without collapsing distinct punctuation to one name.
// Reserve the encoded prefix so an ordinary key cannot collide with it.
const fieldName=key=>/^[A-Za-z0-9_]+$/.test(key)&&!key.startsWith('symbol_')
  ? '_p_'+key
  : '_p_symbol_'+Array.from(key,c=>c.codePointAt(0).toString(16)).join('_');

class Types {
  constructor(){this.cache=new Map();this.records=[];this.canonical=new Map();}
  base(t){return t.kind==='optional'?this.base(t.base):t.alias?this.base(t.alias):t;}
  cpp(t){if(t.alias)return this.cpp(t.alias);switch(t.kind){case 'number':return 'double';case 'boolean':return 'bool';case 'string':return 'd::String';case 'nil':return 'd::Nil';case 'unknown':return 'd::Unknown';case 'void':return 'void';case 'date':return 'd::Date';case 'regex':return 'd::Regex';case 'match':return 'std::shared_ptr<d::Match>';case 'dict':return `d::Dict<${this.cpp(t.key)},${this.cpp(t.value)}>`;case 'fixed':return `std::array<${this.cpp(t.element)},${t.length}>`;case 'array':return `d::Array<${t.storage||this.cpp(t.element)},${!!t.storage}>`;case 'object':return 'std::shared_ptr<'+t.name+'>';case 'tuple':return 'std::shared_ptr<std::tuple<'+t.elements.map(x=>this.cpp(x)).join(',')+'>>';case 'optional':return ['object','tuple','function','match'].includes(this.base(t.base).kind)?this.cpp(t.base):`std::optional<${this.cpp(t.base)}>`;case 'variant':return 'std::variant<'+t.types.map(x=>this.cpp(x)).join(',')+'>';case 'function':return `std::function<${this.cpp(t.result)}(${t.params.map(p=>this.cpp(p.type)).join(',')})>`;case 'map':return `d::Map<${this.cpp(t.key)},${this.cpp(t.value)}>`;case 'set':return `d::Set<${this.cpp(t.element)}>`;default:throw new Error('Unknown C++ type '+t.kind);}}
  union(alternatives,nullable=false){const unique=[];for(let a of alternatives){if(a.kind==='void')a={kind:'nil'};if(a.kind==='nil'){nullable=true;continue;}if(a.kind==='optional'){nullable=true;a=a.base;}if(!unique.some(v=>this.cpp(v)===this.cpp(a)))unique.push(a);}let out;
    if(unique.length>1&&unique.every(t=>this.base(t).kind==='object')){out={kind:'object',name:fresh('Record'),fields:[]};this.records.push(out);const keys=[...new Set(unique.flatMap(t=>this.base(t).fields.map(f=>f.key)))];out.fields=keys.map(key=>{const fields=unique.map(t=>this.base(t).fields.find(f=>f.key===key));return {key,name:fieldName(key),type:this.union(fields.filter(Boolean).map(f=>f.type),fields.some(f=>!f))};});}
    else out=unique.length===0?{kind:'nil'}:unique.length===1?unique[0]:{kind:'variant',types:unique};return nullable?this.optional(out):out;
  }
  get(node){return this.of(checker.getTypeAtLocation(node));}
  optional(t){return t.kind==='optional'?t:{kind:'optional',base:t};}
  of(t){
    if(this.cache.has(t))return this.cache.get(t);
    const F=ts.TypeFlags;
    if(t.flags&(F.Number|F.NumberLiteral|F.NumberLike))return {kind:'number'};
    if(t.flags&(F.Boolean|F.BooleanLiteral))return {kind:'boolean'};
    if(t.flags&(F.String|F.StringLiteral|F.TemplateLiteral))return {kind:'string'};
    if(t.flags&F.Void)return {kind:'void'};
    if(t.flags&(F.Undefined|F.Null|F.Never))return {kind:'nil'};
    if(t.flags&F.Any)return {kind:'nil'};if(t.flags&F.Unknown)return {kind:'unknown'};
    if(t.isUnion()){
      const nullable=t.types.some(x=>x.flags&(F.Undefined|F.Null));const alternatives=[];
      for(const x of t.types){if(x.flags&(F.Undefined|F.Null|F.Never))continue;const a=this.of(x);if(!alternatives.some(v=>this.cpp(v)===this.cpp(a)))alternatives.push(a);}
      const out=this.union(alternatives,nullable);this.cache.set(t,out);return out;
    }
    const name=t.symbol?.name??t.target?.symbol?.name;
    if(name==='Date')return {kind:'date'};
    if(name==='RegExp')return {kind:'regex'};
    if(name==='RegExpExecArray'||name==='RegExpMatchArray')return {kind:'match'};
    if((['ArrayIterator','MapIterator','SetIterator','IterableIterator','IteratorObject','RegExpStringIterator'].includes(name)))return {kind:'array',element:this.of(checker.getTypeArguments(t)[0])};
    const typed={Float32Array:'float',Float64Array:'double',Uint8Array:'uint8_t',Uint8ClampedArray:'uint8_t',Int8Array:'int8_t',Uint16Array:'uint16_t',Int16Array:'int16_t',Uint32Array:'uint32_t',Int32Array:'int32_t'};
    if(typed[name])return {kind:'array',storage:typed[name],element:{kind:'number'}};
    if(checker.isTupleType(t)){
      const elements=checker.getTypeArguments(t).map(x=>this.of(x));const flags=t.target.elementFlags??[];
      for(let i=0;i<elements.length;++i)if(flags[i]&ts.ElementFlags.Optional)elements[i]=this.optional(elements[i]);
      if(!sharedTuples.has(t)&&elements.length&&elements.every(x=>x.kind==='number'))return {kind:'fixed',element:elements[0],length:elements.length};if(elements.length&&elements.every(x=>this.cpp(x)===this.cpp(elements[0])))return {kind:'array',element:elements[0]};
      return {kind:'tuple',elements};
    }
    if(checker.isArrayType(t)||name==='ReadonlyArray'||name==='ArrayLike')return {kind:'array',element:this.of(checker.getTypeArguments(t)[0]??checker.getIndexTypeOfType(t,ts.IndexKind.Number))};
    if(name==='Map'||name==='ReadonlyMap'){const [key,value]=checker.getTypeArguments(t);return {kind:'map',key:this.of(key),value:this.of(value)};}
    if(name==='Set'||name==='ReadonlySet')return {kind:'set',element:this.of(checker.getTypeArguments(t)[0])};
    const signature=t.getCallSignatures()[0];
    if(signature){const out={kind:'function',params:[],result:{kind:'void'}};this.cache.set(t,out);out.params=signature.parameters.map(s=>{const decl=s.valueDeclaration??s.declarations?.[0];let type=this.of(checker.getTypeOfSymbolAtLocation(s,decl));const optional=!!(s.flags&ts.SymbolFlags.Optional)||!!decl?.initializer||!!decl?.questionToken;if(type.kind==='unknown'&&decl?.name&&ts.isIdentifier(decl.name)){let uses=0;const scan=n=>{if(ts.isIdentifier(n)&&checker.getSymbolAtLocation(n)===s)++uses;ts.forEachChild(n,scan);};if(decl.getSourceFile().fileName.startsWith(root))scan(decl.parent);if(uses<=1)type={kind:'nil'};}if(optional)type=this.optional(type);return{type,optional,rest:!!decl?.dotDotDotToken};});out.result=this.of(checker.getReturnTypeOfSignature(signature));return out;}
    const index=checker.getIndexTypeOfType(t,ts.IndexKind.String)??checker.getIndexTypeOfType(t,ts.IndexKind.Number);
    if(index&&checker.getPropertiesOfType(t).length===0){const out={kind:'dict',key:{kind:checker.getIndexTypeOfType(t,ts.IndexKind.String)?'string':'number'},value:this.of(index)};this.cache.set(t,out);return out;}
    const out={kind:'object',name:fresh('Record'),fields:[],bases:[]};this.cache.set(t,out);this.records.push(out);if(t.flags&ts.TypeFlags.Object&&t.objectFlags&ts.ObjectFlags.Interface)out.bases=(checker.getBaseTypes(t)??[]).map(base=>this.of(base)).filter(base=>this.base(base).kind==='object');
    out.fields=checker.getPropertiesOfType(t).map(s=>{const decl=s.valueDeclaration??s.declarations?.[0];return {key:s.name,name:fieldName(s.name),type:this.of(checker.getTypeOfPropertyOfType(t,s.name)??checker.getTypeOfSymbolAtLocation(s,decl))};});
    if(out.fields.length===0){out.kind='unknown';return out;}
    const key=out.fields.map(f=>f.key+':'+this.cpp(f.type)).sort().join(';');const previous=this.canonical.get(key);if(previous){out.alias=previous;}else this.canonical.set(key,out);return out;
  }
  declarations(){const records=[];const add=t=>{if(t.kind!=='object'||t.alias||records.includes(t))return;for(const base of t.bases??[])add(this.base(base));records.push(t);};this.records.forEach(add);return records.map(t=>`struct ${t.name};`).join('\n')+'\n'+records.map(t=>`struct ${t.name}${t.bases?.length?':'+t.bases.map(b=>'public '+this.base(b).name).join(','):''}{\n${t.fields.filter(f=>!t.bases?.some(b=>this.base(b).fields.some(p=>p.key===f.key))).map(f=>`${this.cpp(f.type)} ${f.name}{};`).join('\n')}\nstatic std::shared_ptr<${t.name}> decode(const ascii::Json &j){auto out=std::make_shared<${t.name}>();${t.fields.map(f=>`out->${f.name}=d::decode<${this.cpp(f.type)}>(j[${JSON.stringify(f.key)}]);`).join('')}return out;}\n};`).join('\n');}
}

class Emitter {
  constructor(file){this.file=file;this.sf=program.getSourceFile(file);this.id=path.basename(file,'.ts');this.types=new Types();this.symbols=new Map();this.globals=[];this.members=[];this.methods=[];this.serial=0;
    for(const n of this.sf.statements){if(ts.isFunctionDeclaration(n)&&n.modifiers?.some(m=>m.kind===ts.SyntaxKind.DefaultKeyword))this.factory=n;else if(ts.isFunctionDeclaration(n)){this.declare(n.name,'global-function',n);this.globals.push(n);}else if(ts.isVariableStatement(n)){for(const d of n.declarationList.declarations){this.declarePattern(d.name,'global',d);this.globals.push(d);}}}
    if(!this.factory)throw new Error('No default factory in '+this.id);
    for(const p of this.factory.parameters)this.declarePattern(p.name,'member',p);
    for(const n of this.factory.body.statements){if(ts.isVariableStatement(n))for(const d of n.declarationList.declarations)this.declarePattern(d.name,'member',d);else if(ts.isFunctionDeclaration(n))this.declare(n.name,'member-function',n);}
    const visit=n=>{if(ts.isVariableDeclaration(n))this.declarePattern(n.name,'local',n);if(ts.isParameter(n))this.declarePattern(n.name,'local',n);if(ts.isFunctionDeclaration(n)&&n!==this.factory&&n.name)this.declare(n.name,'local-function',n);ts.forEachChild(n,visit);};visit(this.sf);
    for(const binding of this.symbols.values()){
      if(binding.role==='member'&&binding.node.initializer&&(ts.isArrowFunction(binding.node.initializer)||ts.isFunctionExpression(binding.node.initializer))){
        let direct=true;const scan=n=>{if(ts.isIdentifier(n)&&checker.getSymbolAtLocation(n)===binding.symbol&&n!==binding.node.name){if(!ts.isCallExpression(n.parent)||n.parent.expression!==n)direct=false;}ts.forEachChild(n,scan);};scan(this.factory.body);if(direct){binding.role='member-function';binding.fn=binding.node.initializer;}
      }
      if(binding.role==='global'&&binding.node.initializer&&(ts.isArrowFunction(binding.node.initializer)||ts.isFunctionExpression(binding.node.initializer))){binding.role='global-function';binding.fn=binding.node.initializer;}
      if(binding.role==='member')this.members.push(binding);if(binding.role==='member-function')this.methods.push(binding);
    }
    this.escapingClosures=this.closureLifetimes();
  }
  closureLifetimes(){
    const isClosure=n=>ts.isArrowFunction(n)||ts.isFunctionExpression(n)||ts.isFunctionDeclaration(n);
    const immediateUse=n=>{
      const parent=n.parent;
      return ts.isCallExpression(parent)&&(parent.expression===n||ts.isPropertyAccessExpression(parent.expression)&&['map','forEach','filter','find','some','every','reduce','from','flatMap','sort'].includes(parent.expression.name.text));
    };
    const functions=[],bindings=new Map(),references=new Map(),escaped=new Set();
    const collect=n=>{if(isClosure(n)){functions.push(n);references.set(n,[]);}ts.forEachChild(n,collect);};collect(this.sf);
    for(const binding of this.symbols.values()){
      const fn=binding.fn??binding.node.initializer;
      if(fn&&isClosure(fn))bindings.set(fn,binding);
    }
    const uses=n=>{
      if(ts.isIdentifier(n)){
        const binding=this.binding(n),fn=binding&&(binding.fn??binding.node.initializer);
        if(references.has(fn)&&n!==binding.node.name&&n!==fn.name)references.get(fn).push(n);
      }
      ts.forEachChild(n,uses);
    };uses(this.sf);
    for(const fn of functions){
      const binding=bindings.get(fn);
      if(binding?!['local','local-function'].includes(binding.role)||references.get(fn).some(ref=>!immediateUse(ref)):!immediateUse(fn))escaped.add(fn);
    }
    // A local helper also escapes when a retained callback calls it. Follow
    // this dependency transitively so copying a callback never preserves
    // references into a constructor's expired stack frame.
    let changed=true;
    while(changed){
      changed=false;
      for(const [fn,binding] of bindings){
        if(escaped.has(fn))continue;
        let owner=binding.node.parent;while(owner&&!isClosure(owner))owner=owner.parent;
        for(const ref of references.get(fn)){
          let escapes=false;
          for(let at=ref.parent;at&&at!==owner;at=at.parent){
            if(at===fn)break;
            if(isClosure(at)&&escaped.has(at)){escapes=true;break;}
          }
          if(escapes){escaped.add(fn);changed=true;break;}
        }
      }
    }
    return escaped;
  }
  fail(n,why){const p=this.sf.getLineAndCharacterOfPosition(n.getStart(this.sf));throw new Error(`${this.id}:${p.line+1}: ${why}: ${n.getText(this.sf).slice(0,140)}`);}
  declare(name,role,node){if(!name)return;const symbol=checker.getSymbolAtLocation(name);if(!symbol)return;if(this.symbols.has(symbol))return this.symbols.get(symbol);const b={symbol,node,name:fresh(name.text??'binding'),role,type:this.inferredBindingType(name,node),fn:ts.isFunctionDeclaration(node)?node:null};this.symbols.set(symbol,b);return b;}
  inferredBindingType(name,node){const type=this.types.get(name);if(type.kind!=='nil'||!ts.isVariableDeclaration(node)||node.initializer)return type;const values=[];const symbol=checker.getSymbolAtLocation(name);const scan=n=>{if(ts.isBinaryExpression(n)&&n.operatorToken.kind===ts.SyntaxKind.EqualsToken&&ts.isIdentifier(n.left)&&checker.getSymbolAtLocation(n.left)===symbol)values.push(this.types.get(n.right));ts.forEachChild(n,scan);};scan(this.sf);return values.length&&values.every(t=>t.kind==='number')?{kind:'number'}:type;}
  declarePattern(pattern,role,node){if(ts.isIdentifier(pattern))return this.declare(pattern,role,node);for(const e of pattern.elements??[])if(ts.isBindingElement(e))this.declarePattern(e.name,role,e);}
  binding(n){const symbol=ts.isShorthandPropertyAssignment(n.parent)?checker.getShorthandAssignmentValueSymbol(n.parent):checker.getSymbolAtLocation(n);return this.symbols.get(symbol);}
  cpp(t){return this.types.cpp(t);}
  base(t){return this.types.base(t);}
  type(n){return this.types.get(n);}
  convert(code,from,to){if(!to||this.cpp(from)===this.cpp(to))return code;if(to.kind==='nil')return `(${code},d::Nil{})`;if(to.kind==='void')return `([&](){(void)(${code});})()`;if(from.kind==='void')return `(${code},${this.cpp(to)}{})`;if(from.kind==='variant'&&(to.kind==='variant'||to.kind==='unknown'))return `std::visit([&](const auto &_v)->${this.cpp(to)}{return ${this.cpp(to)}(_v);},${code})`;if(from.kind==='unknown'&&to.kind!=='unknown')return `std::get<${this.cpp(to)}>(${code})`;if(from.kind==='optional'&&to.kind==='optional'){const value=fresh('nullable');return `([&]()->${this.cpp(to)}{auto ${value}=${code};if(!d::present(${value}))return {};return ${this.convert(`d::read(${value})`,from.base,to.base)};})()`;}if(from.kind==='optional'&&to.kind!=='optional')return this.convert(`d::read(${code})`,from.base,to);if(from.kind==='variant'&&to.kind!=='variant'&&to.kind!=='unknown'){const match=from.types.find(t=>this.cpp(t)===this.cpp(to))??from.types.find(t=>this.base(t).kind===this.base(to).kind);if(match)return this.convert(`std::get<${this.cpp(match)}>(${code})`,match,to);}if(from.kind==='nil')return to.kind==='number'?'d::nan':`${this.cpp(to)}{}`;if(to.kind==='optional')return `${this.cpp(to)}(${this.convert(code,from,to.base)})`;if(to.kind==='variant'||to.kind==='unknown')return `${this.cpp(to)}(${code})`;if(to.kind==='number')return `d::number(${code})`;if(to.kind==='string')return `d::string(${code})`;if(to.kind==='fixed')return `d::fixedArray<${this.cpp(to.element)},${to.length}>(${code})`;if(to.kind==='array'){if(from.kind==='array'&&this.cpp(from.element)!==this.cpp(to.element)&&!['number','boolean'].includes(this.base(to.element).kind)){const item=fresh('element');return `${this.cpp(to)}(d::map(${code},[&](const auto &${item}){return ${this.convert(item,from.element,to.element)};}))`;}return `${this.cpp(to)}(${code})`;}if(from.kind==='function'&&to.kind==='function'){const fn=fresh('callable');const params=to.params.map((p,i)=>`${this.cpp(p.type)} _p${i}`).join(',');const args=from.params.map((p,i)=>this.convert(`_p${i}`,to.params[i].type,p.type)).join(',');const result=this.convert(`${fn}(${args})`,from.result,to.result);return `[${fn}=${code}](${params})mutable->${this.cpp(to.result)}{return ${result};}`;}if(this.base(from).kind==='object'&&this.base(to).kind==='object'){const inherits=t=>(t.bases??[]).some(b=>this.cpp(b)===this.cpp(to)||inherits(this.base(b)));if(inherits(this.base(from)))return `std::static_pointer_cast<${this.base(to).name}>(${code})`;const old=fresh('record'),out=fresh('record');let s=`auto ${old}=${code};auto ${out}=std::make_shared<${this.base(to).name}>();`;for(const f of this.base(to).fields){const p=this.base(from).fields.find(x=>x.key===f.key);if(p)s+=`${out}->${f.name}=${this.convert(`${old}->${p.name}`,p.type,f.type)};`;}return `([&](){${s}return ${out};})()`;}return `${this.cpp(to)}(${code})`;}
  identifier(n,raw=false){const b=this.binding(n);if(!b){if(n.text==='undefined')return 'd::Nil{}';if(n.text==='Infinity')return 'INFINITY';if(n.text==='NaN')return 'd::nan';if(n.text==='String')return 'd::ToString{}';if(n.text==='Number')return 'd::ToNumber{}';if(n.text==='Boolean')return 'd::ToBoolean{}';this.fail(n,'Unbound identifier');}const value=(b.role==='member'||b.role==='member-function'?'this->':'')+b.name;return raw?value:this.convert(value,b.type,this.type(n));}
  expr(n,expected=null,ctx={}){
    if(!n)return expected?`${this.cpp(expected)}{}`:'d::Nil{}';if(ctx.replacements?.has(n)){const r=ctx.replacements.get(n);return this.convert(r.code,r.type,expected);}const E=(x,t=null)=>this.expr(x,t,ctx);let code;const actual=this.type(n),target=expected??actual;
    if(ts.isParenthesizedExpression(n)||ts.isAsExpression(n)||ts.isTypeAssertionExpression(n)||ts.isSatisfiesExpression(n)||ts.isNonNullExpression(n))return this.expr(n.expression,expected??actual,ctx);
    if(ts.isIdentifier(n)){const b=this.binding(n);if(b&&this.cpp(b.type)!==this.cpp(actual)&&b.type.kind==='number'&&actual.kind==='nil')return this.convert(this.identifier(n,true),b.type,expected);if(ctx.generic)return this.identifier(n,true);return this.convert(this.identifier(n,ctx.raw),actual,expected);}
    if(ts.isNumericLiteral(n))return this.convert(num(Number(n.text)),{kind:'number'},expected);
    if(ts.isStringLiteral(n)||ts.isNoSubstitutionTemplateLiteral(n))return this.convert(`d::String(${quote(n.text)})`,{kind:'string'},expected);
    if(n.kind===ts.SyntaxKind.TrueKeyword||n.kind===ts.SyntaxKind.FalseKeyword)return this.convert(n.kind===ts.SyntaxKind.TrueKeyword?'true':'false',{kind:'boolean'},expected);
    if(n.kind===ts.SyntaxKind.NullKeyword)return this.convert('d::Nil{}',{kind:'nil'},expected);
    if(n.kind===ts.SyntaxKind.RegularExpressionLiteral){const i=n.text.lastIndexOf('/');return `d::Regex(${quote(n.text.slice(1,i))},${quote(n.text.slice(i+1))})`;}
    if(ts.isArrayLiteralExpression(n)){
      let t=this.base(target);if(t.kind==='variant')t=t.types.find(x=>['array','fixed','tuple'].includes(this.base(x).kind))??t;
      if(t.kind==='tuple'){const values=t.elements.map((e,i)=>n.elements[i]?E(n.elements[i],e):`${this.cpp(e)}{}`);return `std::make_shared<std::tuple<${t.elements.map(e=>this.cpp(e)).join(',')}>>(${values.join(',')})`;}
      if(t.kind!=='array'&&t.kind!=='fixed')this.fail(n,'Array needs a concrete element type');
      if(n.elements.some(ts.isSpreadElement)){const a=fresh('array');let s=`${this.cpp(t)} ${a};`;for(const x of n.elements)if(ts.isSpreadElement(x))s+=`for(const auto &_v:${this.iterable(x.expression,ctx)})${a}.push(_v);`;else s+=`${a}.push(${E(x,t.element)});`;return `([&](){${s}return ${a};})()`;}
      return `${this.cpp(t)}{${n.elements.map(x=>E(x,t.element)).join(',')}}`;
    }
    if(ts.isObjectLiteralExpression(n)){
      let t=this.base(target);if(t.kind==='variant')t=t.types.find(x=>this.base(x).kind==='object'&&n.properties.every(p=>this.base(x).fields.some(f=>f.key===p.name?.text)))??t;t=this.base(t);if(t.kind==='dict'){const a=fresh('dictionary');let s=`${this.cpp(t)} ${a};`;for(const p of n.properties){const key=ts.isComputedPropertyName(p.name)?E(p.name.expression,t.key):t.key.kind==='number'?num(Number(p.name.text)):`d::String(${quote(p.name.text)})`;s+=`${a}.set(${key},${E(p.initializer,t.value)});`;}return `([&](){${s}return ${a};})()`;}if(t.kind!=='object')this.fail(n,'Object needs concrete fields');const a=fresh('object');let s=`auto ${a}=std::make_shared<${t.name}>();`;
      for(const p of n.properties){if(ts.isSpreadAssignment(p)){const v=fresh('spread'),pt=this.base(this.type(p.expression));s+=`auto ${v}=${E(p.expression)};`;for(const f of t.fields){const q=pt.fields?.find(x=>x.key===f.key);if(q)s+=`${a}->${f.name}=${this.convert(`${v}->${q.name}`,q.type,f.type)};`;}continue;}const key=p.name.text;const f=t.fields.find(x=>x.key===key);if(!f)continue;const v=ts.isShorthandPropertyAssignment(p)?p.name:p.initializer;s+=`${a}->${f.name}=${E(v,f.type)};`;}
      return `([&](){${s}return ${a};})()`;
    }
    if(ts.isPropertyAccessExpression(n)){
      const key=n.name.text;
      if(ts.isIdentifier(n.expression)&&n.expression.text==='Math'){const constants={PI:'ascii::PI',E:'std::exp(1.)',SQRT2:'std::sqrt(2.)',SQRT1_2:'std::sqrt(.5)'};if(constants[key])return constants[key];}
      if(ts.isIdentifier(n.expression)&&n.expression.text==='Math'&&key==='sign')return 'd::sign';
      if(key==='value'&&ts.isCallExpression(n.expression)&&ts.isPropertyAccessExpression(n.expression.expression)&&n.expression.expression.name.text==='next')return `d::first(${E(n.expression.expression.expression)})`;
      const t=this.base(this.type(n.expression));
      if(t.kind==='match'){if(key==='index')return `${E(n.expression)}->index`;if(key==='length')return `double(${E(n.expression)}->size())`;}
      if(key==='length'&&(['array','fixed','string'].includes(t.kind)))return `double(${E(n.expression)}.size())`;
      if(key==='length'&&t.kind==='tuple')return num(t.elements.length);
      if(key==='size'&&(t.kind==='set'||t.kind==='map'))return `double(${E(n.expression)}.size())`;
      if(t.kind!=='object')this.fail(n,'Unsupported property '+key+' on '+t.kind);
      const f=t.fields.find(x=>x.key===key);if(!f)this.fail(n,'Missing record field '+key);
      code=`${E(n.expression)}->${f.name}`;
      if(n.questionDotToken){const obj=fresh('optional');code=`([&]()->${this.cpp(actual)}{auto ${obj}=${this.expr(n.expression,null,{...ctx,raw:true})};if(!d::present(${obj}))return {};return ${this.convert(`${obj}->${f.name}`,f.type,actual)};})()`;}
      else code=this.convert(code,f.type,actual);
      return this.convert(code,actual,expected);
    }
    if(ts.isElementAccessExpression(n)){
      const t=this.base(this.type(n.expression)),index=n.argumentExpression;
      if(t.kind==='tuple'){if(!ts.isNumericLiteral(index))this.fail(n,'Tuple index must be fixed');code=`std::get<${index.text}>(*${E(n.expression)})`;code=this.convert(code,t.elements[Number(index.text)],actual);}
      else if(t.kind==='array'||t.kind==='fixed')code=this.convert(`d::at(${E(n.expression)},${E(index)})`,t.element,actual);else if(t.kind==='string'||t.kind==='match'||t.kind==='variant'&&t.types.every(a=>this.base(a).kind==='array'))code=`d::at(${E(n.expression)},${E(index)})`;
      else if(t.kind==='dict')code=this.convert(`${E(n.expression)}.get(${E(index,t.key)})`,t.value,actual);
      else if(t.kind==='object'){const a=fresh('record'),k=fresh('key');let s=`auto ${a}=${E(n.expression)};auto ${k}=${E(index)};`;for(const f of t.fields)s+=`if(${k}==${quote(f.key)})return ${this.convert(`${a}->${f.name}`,f.type,actual)};`;code=`([&]()->${this.cpp(actual)}{${s}return {};})()`;}
      else this.fail(n,'Unsupported index on '+t.kind);
      if(n.questionDotToken){const object=fresh('optional');const item=this.indexed(`d::read(${object})`,t,index,ctx);code=`([&]()->${this.cpp(actual)}{auto ${object}=${this.expr(n.expression,null,{...ctx,raw:true})};if(!d::present(${object}))return {};return ${this.convert(item.code,item.type,actual)};})()`;}
      return this.convert(code,actual,expected);
    }
    if(ts.isArrowFunction(n)||ts.isFunctionExpression(n))return this.lambda(n,expected??actual,ctx);
    if(ts.isCallExpression(n)||ts.isNewExpression(n)){let callContext=ctx,prefix='';if(ts.isCallExpression(n)&&n.arguments.length>1&&!n.arguments.some(ts.isSpreadElement)&&n.arguments.some(a=>this.effects(a))){const replacements=new Map(ctx.replacements??[]);for(const a of n.arguments){const name=fresh('argument');prefix+=`auto ${name}=${E(a)};`;replacements.set(a,{code:name,type:this.type(a)});}callContext={...ctx,replacements};}const value=prefix?`([&](){${prefix}return ${this.call(n,callContext,expected)};})()`:this.call(n,ctx,expected);const override=expected&&this.base(actual).kind==='array'&&['unknown','nil'].includes(this.base(actual).element.kind)&&['array','fixed'].includes(this.base(expected).kind);return override?value:this.convert(value,actual,expected);}
    if(ts.isConditionalExpression(n))return `(${this.condition(n.condition,ctx)}?${E(n.whenTrue,target)}:${E(n.whenFalse,target)})`;
    if(ts.isBinaryExpression(n)){
      const op=ts.tokenToString(n.operatorToken.kind);
      if(op===',')return `(${E(n.left)},${E(n.right,expected)})`;
      if(['=','+=','-=','*=','/=','%=','|=','&=','^=','<<=','>>=','>>>=','??=','&&=','||='].includes(op))return this.convert(this.assignment(n,ctx),actual,expected);
      if(['&&','||','??'].includes(op)){const a=fresh('logical');const condition=op==='??'?this.present(n.left,a,ctx):`d::truth(${a})`;const choose=op==='&&'?`${condition}?${E(n.right,target)}:${this.convert(a,this.type(n.left),target)}`:op==='||'?`${condition}?${this.convert(a,this.type(n.left),target)}:${E(n.right,target)}`:`${condition}?${this.convert(a,this.type(n.left),target)}:${E(n.right,target)}`;return `([&]()->${this.cpp(target)}{auto ${a}=${E(n.left)};return ${choose};})()`;}
      if(this.effects(n.left)&&this.effects(n.right)){const a=fresh('left'),b=fresh('right');code=`([&](){auto ${a}=${E(n.left)};auto ${b}=${E(n.right)};return ${this.operation(op,a,b,this.type(n.left),this.type(n.right))};})()`;}else code=this.operation(op,E(n.left),E(n.right),this.type(n.left),this.type(n.right));return this.convert(code,actual,expected);
    }
    if(ts.isPrefixUnaryExpression(n)){const op=ts.tokenToString(n.operator);if(op==='++'||op==='--')return this.update(n.operand,op==='++'?1:-1,true,ctx);if(op==='!')return `(!${this.condition(n.operand,ctx)})`;if(op==='~')return `double(~d::i32(${E(n.operand)}))`;return `(${op}d::number(${E(n.operand)}))`;}
    if(ts.isPostfixUnaryExpression(n))return this.update(n.operand,n.operator===ts.SyntaxKind.PlusPlusToken?1:-1,false,ctx);
    if(ts.isTypeOfExpression(n)){const t=this.base(this.type(n.expression));if(t.kind==='variant'||t.kind==='unknown'||this.type(n.expression).kind==='optional')return `d::typeOf(${E(n.expression)})`;return `d::String(${quote(t.kind==='number'?'number':t.kind==='string'?'string':t.kind==='boolean'?'boolean':t.kind==='function'?'function':t.kind==='nil'?'undefined':'object')})`;}
    if(ts.isTemplateExpression(n))return `(${[`d::String(${quote(n.head.text)})`,...n.templateSpans.flatMap(s=>[`d::string(${E(s.expression)})`,`d::String(${quote(s.literal.text)})`])].join('+')})`;
    if(ts.isTaggedTemplateExpression(n)){if(n.tag.getText(this.sf)==='String.raw'||n.tag.getText(this.sf)==='S'){if(ts.isNoSubstitutionTemplateLiteral(n.template))return `d::String(${quote(n.template.rawText??n.template.text)})`;}this.fail(n,'Unsupported template tag');}
    this.fail(n,'Unsupported expression '+ts.SyntaxKind[n.kind]);
  }
  effects(n){let found=false;const visit=x=>{if(ts.isArrowFunction(x)||ts.isFunctionExpression(x))return;if(ts.isCallExpression(x)||ts.isPostfixUnaryExpression(x)||ts.isPrefixUnaryExpression(x)&&[ts.SyntaxKind.PlusPlusToken,ts.SyntaxKind.MinusMinusToken].includes(x.operator)||ts.isBinaryExpression(x)&&x.operatorToken.kind>=ts.SyntaxKind.FirstAssignment&&x.operatorToken.kind<=ts.SyntaxKind.LastAssignment)found=true;else ts.forEachChild(x,visit);};visit(n);return found;}
  operation(op,a,b,ta,tb){if(op==='+'){if(this.base(ta).kind==='string'||this.base(tb).kind==='string')return `(d::string(${a})+d::string(${b}))`;return `(${a}+${b})`;}if(op==='%')return `d::mod(${a},${b})`;if(op==='**')return `std::pow(${a},${b})`;if(['|','&','^'].includes(op))return `double(d::i32(${a})${op}d::i32(${b}))`;if(op==='<<')return `double(int32_t(d::u32(${a})<<(d::u32(${b})&31)))`;if(op==='>>')return `double(d::i32(${a})>>(d::u32(${b})&31))`;if(op==='>>>')return `double(d::u32(${a})>>(d::u32(${b})&31))`;if(['===','==','!==','!='].includes(op)){const negate=op.startsWith('!');if(ta.kind==='nil'||tb.kind==='nil')return `(${negate?'':'!'}d::present(${ta.kind==='nil'?b:a}))`;if(['variant','unknown','optional'].includes(ta.kind)||['variant','unknown','optional'].includes(tb.kind))return `(${negate?'!':''}d::equal(${a},${b}))`;return `(${a}${negate?'!=':'=='}${b})`;}return `(${a}${op}${b})`;}
  condition(n,ctx){if(ts.isBinaryExpression(n)&&[ts.SyntaxKind.AmpersandAmpersandToken,ts.SyntaxKind.BarBarToken].includes(n.operatorToken.kind))return `(${this.condition(n.left,ctx)}${ts.tokenToString(n.operatorToken.kind)}${this.condition(n.right,ctx)})`;return `d::truth(${this.expr(n,null,ctx)})`;}
  present(n,value,ctx){if(ts.isElementAccessExpression(n)&&!n.questionDotToken&&['array','fixed','string'].includes(this.base(this.type(n.expression)).kind)){const test=`d::has(${this.expr(n.expression,null,ctx)},${this.expr(n.argumentExpression,null,ctx)})`;const type=this.type(n);return ['optional','nil','object','array','tuple','match'].includes(type.kind)?`(${test}&&d::present(${value}))`:test;}return `d::present(${value})`;}
  iterable(n,ctx){const t=this.base(this.type(n)),value=this.expr(n,null,ctx);return t.kind==='map'?`${value}.entries()`:t.kind==='set'?`${value}.values()`:value;}
  indexed(value,type,index,ctx){const t=this.base(type);if(t.kind==='tuple'){const i=typeof index==='number'?index:ts.isNumericLiteral(index)?Number(index.text):null;if(i===null)this.fail(index,'Tuple index must be fixed');return {code:`std::get<${i}>(*${value})`,type:t.elements[i]};}return {code:`d::at(${value},${typeof index==='number'?num(index):this.expr(index,null,ctx)})`,type:t.kind==='string'||t.kind==='match'?{kind:'string'}:t.element};}
  storageType(n){while(ts.isAsExpression(n)||ts.isNonNullExpression(n)||ts.isParenthesizedExpression(n))n=n.expression;if(ts.isIdentifier(n))return this.binding(n).type;if(ts.isPropertyAccessExpression(n))return this.base(this.type(n.expression)).fields.find(f=>f.key===n.name.text).type;const t=this.base(this.type(n.expression));return t.kind==='dict'?t.value:t.kind==='tuple'?t.elements[Number(n.argumentExpression.text)]:t.element;}
  lvalue(n,ctx){if(ts.isAsExpression(n)||ts.isNonNullExpression(n)||ts.isParenthesizedExpression(n))return this.lvalue(n.expression,ctx);if(ts.isIdentifier(n))return this.identifier(n,true);if(ts.isElementAccessExpression(n)&&this.base(this.type(n.expression)).kind==='tuple')return `std::get<${n.argumentExpression.text}>(*${this.expr(n.expression,null,ctx)})`;if(ts.isPropertyAccessExpression(n)){const t=this.base(this.type(n.expression)),f=t.fields?.find(x=>x.key===n.name.text);if(!f)this.fail(n,'Invalid assignment property');return `${this.expr(n.expression,null,ctx)}->${f.name}`;}this.fail(n,'Unsupported assignment target');}
  store(n,value,ctx){if(ts.isElementAccessExpression(n)){const t=this.base(this.type(n.expression));if(t.kind==='tuple')return `${this.lvalue(n,ctx)}=${value}`;return t.kind==='dict'?`${this.expr(n.expression,null,ctx)}.set(${this.expr(n.argumentExpression,t.key,ctx)},${value})`:`d::put(${this.expr(n.expression,null,ctx)},${this.expr(n.argumentExpression,null,ctx)},${value})`;}return `${this.lvalue(n,ctx)}=${value}`;}
  assignment(n,ctx,discardResult=false){const op=ts.tokenToString(n.operatorToken.kind),result=this.type(n),finish=(code,type)=>discardResult?code:this.convert(code,type,result);if(ts.isArrayLiteralExpression(n.left)){const value=fresh('unpack'),sourceType=this.type(n.right);return `([&](){auto ${value}=${this.expr(n.right,sourceType,ctx)};${n.left.elements.map((x,i)=>{if(ts.isOmittedExpression(x))return '';const item=this.indexed(value,sourceType,i,ctx);return this.store(x,this.convert(item.code,item.type,this.storageType(x)),ctx)+';';}).join('')}return ${value};})()`;}
    let left=n.left;while(ts.isAsExpression(left)||ts.isNonNullExpression(left)||ts.isParenthesizedExpression(left))left=left.expression;const right=n.right,kind=this.type(n.left);if(ts.isPropertyAccessExpression(left)&&left.name.text==='length'&&this.base(this.type(left.expression)).kind==='array')return `(${this.expr(left.expression,null,ctx)}.resize(size_t(${this.expr(right,null,ctx)})),${this.expr(right,null,ctx)})`;
    if(ts.isElementAccessExpression(left)&&this.base(this.type(left.expression)).kind!=='tuple'){
      const a=fresh('array'),i=fresh('index'),v=fresh('value'),container=this.base(this.type(left.expression));
      const read=container.kind==='dict'?`${a}.get(${i})`:`d::at(${a},${i})`,write=value=>container.kind==='dict'?`${a}.set(${i},${value})`:`d::put(${a},${i},${value})`;
      const setup=`auto&& ${a}=${this.expr(left.expression,null,ctx)};auto ${i}=${this.expr(left.argumentExpression,container.kind==='dict'?container.key:null,ctx)};`;
      if(['??=','&&=','||='].includes(op)){const old=fresh('old'),storage=this.storageType(left);const keep=op==='??='?`d::present(${old})`:op==='&&='?`!d::truth(${old})`:`d::truth(${old})`;return `([&]()->${this.cpp(result)}{${setup}auto ${old}=${read};if(${keep})return ${this.convert(old,storage,result)};auto ${v}=${this.expr(right,result,ctx)};${write(this.convert(v,result,storage))};return ${v};})()`;}
      let value=this.expr(right,kind,ctx);if(op!=='=')value=this.operation(op.slice(0,-1),this.convert(read,this.storageType(left),kind),value,kind,kind);
      return `([&](){${setup}auto ${v}=${value};${write(v)};return ${finish(v,kind)};})()`;
    }
    const lhs=this.lvalue(left,ctx),storage=this.storageType(left);
    if(op==='=')return finish(`(${lhs}=${this.expr(right,storage,ctx)})`,storage);
    if(['??=','&&=','||='].includes(op)){const test=op==='??='?`!d::present(${lhs})`:op==='&&='?`d::truth(${lhs})`:`!d::truth(${lhs})`;return finish(`(${test}?(${lhs}=${this.expr(right,storage,ctx)}):${lhs})`,storage);}
    return finish(`(${lhs}=${this.operation(op.slice(0,-1),this.expr(left,null,ctx),this.expr(right,null,ctx),kind,this.type(right))})`,storage);
  }
  update(n,delta,prefix,ctx){while(ts.isAsExpression(n)||ts.isNonNullExpression(n)||ts.isParenthesizedExpression(n))n=n.expression;if(ts.isElementAccessExpression(n)&&this.base(this.type(n.expression)).kind!=='tuple'){const a=fresh('array'),i=fresh('index'),old=fresh('old');return `([&](){auto&& ${a}=${this.expr(n.expression,null,ctx)};auto ${i}=${this.expr(n.argumentExpression,null,ctx)};double ${old}=d::number(d::at(${a},${i}));d::put(${a},${i},${old}+(${delta}.0));return ${old}${prefix?`+(${delta}.0)`:''};})()`;}const l=this.lvalue(n,ctx);return prefix?`(${delta>0?'++':'--'}${l})`:`(${l}${delta>0?'++':'--'})`;}
  call(n,ctx,expected=null){
    const E=(x,t=null)=>this.expr(x,t,ctx),args=Array.from(n.arguments??[]),callee=n.expression,actual=this.type(n),inferred=this.base(actual),target=expected&&['array','fixed'].includes(this.base(expected).kind)&&inferred.kind==='array'&&['unknown','nil'].includes(inferred.element.kind)?this.base(expected):inferred;
    if(ts.isNewExpression(n)){
      const name=callee.getText(this.sf);
      if(target.kind==='array'){if(!args.length)return `${this.cpp(target)}{}`;if(this.base(this.type(args[0])).kind==='number')return `${this.cpp(target)}(size_t(${E(args[0])}))`;return `${this.cpp(target)}(${E(args[0])})`;}
      if(target.kind==='date')return `d::Date(${args.map(x=>E(x)).join(',')})`;
      if(target.kind==='map'){const element=this.cpp(target.key)===this.cpp(target.value)?{kind:'array',element:target.key}:{kind:'tuple',elements:[target.key,target.value]};return `${this.cpp(target)}(${args.length?E(args[0],{kind:'array',element}):''})`;}
      if(target.kind==='set')return `${this.cpp(target)}(${args.length?E(args[0],{kind:'array',element:target.element}):''})`;
      this.fail(n,'Unsupported constructor '+name);
    }
    if(ts.isIdentifier(callee)){
      if(callee.text==='Array')return args.length===1?`${this.cpp(target)}(size_t(${E(args[0])}))`:`${this.cpp(target)}{${args.map(x=>E(x,target.element)).join(',')}}`;
      if(callee.text==='String')return `d::string(${args.length?E(args[0]):'d::Nil{}'})`;
      if(callee.text==='Number')return `d::number(${args.length?E(args[0]):'0.0'})`;
      if(callee.text==='Boolean')return `d::truth(${args.length?E(args[0]):'d::Nil{}'})`;
      if(callee.text==='parseInt')return `d::parseInt(${args.map(x=>E(x)).join(',')})`;
      if(callee.text==='isNaN')return `std::isnan(d::number(${E(args[0])}))`;
    }
    if(ts.isPropertyAccessExpression(callee)){
      const name=callee.name.text,object=callee.expression,global=ts.isIdentifier(object)?object.text:'';
      if(global==='Math'){
        if(name==='hypot')return args.length===1&&ts.isSpreadElement(args[0])?`d::hypot(${E(args[0].expression)})`:`d::hypot(std::initializer_list<double>{${args.map(x=>E(x)).join(',')}})`;
        if(['min','max'].includes(name)){if(args.some(ts.isSpreadElement)){const values=fresh('numbers');let s=`d::Array<double> ${values};`;for(const a of args)s+=ts.isSpreadElement(a)?`for(auto _x:${E(a.expression)})${values}.push(_x);`:`${values}.push(${E(a)});`;return `([&](){${s}return d::${name==='min'?'minimum':'maximum'}(${values});})()`;}return `d::${name==='min'?'minimum':'maximum'}({${args.map(x=>E(x)).join(',')}})`;}
        if(['imul','round','sign'].includes(name))return `d::${name}(${args.map(x=>E(x)).join(',')})`;
        const native={abs:'fabs',pow:'pow',hypot:'hypot',floor:'floor',ceil:'ceil',trunc:'trunc',sin:'sin',cos:'cos',tan:'tan',asin:'asin',acos:'acos',atan:'atan',atan2:'atan2',exp:'exp',expm1:'expm1',log:'log',log2:'log2',log10:'log10',log1p:'log1p',sqrt:'sqrt',cbrt:'cbrt',tanh:'tanh'}[name];if(native)return `std::${native}(${args.map(x=>E(x)).join(',')})`;
        this.fail(n,'Unknown Math operation '+name);
      }
      if(global==='Number'){if(name==='isFinite')return `std::isfinite(${E(args[0])})`;if(name==='isNaN')return `std::isnan(${E(args[0])})`;if(name==='isInteger')return `d::isInteger(${E(args[0])})`;}
      if(global==='Date'&&name==='now')return 'd::now()';
      if(global==='String'&&name==='fromCharCode')return args.length===1&&ts.isSpreadElement(args[0])?`d::fromCharCode(${E(args[0].expression)})`:`d::fromCharCode({${args.map(x=>E(x)).join(',')}})`;
      if(global==='Array'||/^(?:Float|Uint|Int)\d+(?:Clamped)?Array$/.test(global)){
        if(name==='isArray')return `d::isArray(${E(args[0])})`;
        if(name==='from'){
          if(ts.isObjectLiteralExpression(args[0])){const length=args[0].properties.find(x=>x.name?.text==='length');if(!length)this.fail(n,'Array.from needs length');return args.length>1?`${this.cpp(target)}(d::from(${E(length.initializer)},${this.expr(args[1],null,{...ctx,immediate:true})}))`:`${this.cpp(target)}(size_t(${E(length.initializer)}))`;}
          return args.length>1?`${this.cpp(target)}(d::map(${E(args[0])},${this.expr(args[1],null,{...ctx,immediate:true})}))`:`${this.cpp(target)}(${E(args[0])})`;
        }
      }
      if(global==='Object'&&name==='assign'){
        const value=fresh('record'),type=this.base(this.type(args[0]));let s=`auto ${value}=${E(args[0])};`;for(const a of args.slice(1)){if(!ts.isObjectLiteralExpression(a))this.fail(a,'Object.assign source');for(const p of a.properties){const f=type.fields.find(f=>f.key===p.name.text);if(f)s+=`${value}->${f.name}=${E(ts.isShorthandPropertyAssignment(p)?p.name:p.initializer,f.type)};`;}}return `([&](){${s}return ${value};})()`;
      }
      const type=this.base(this.type(object)),value=E(object,type.kind==='array'&&['unknown','nil'].includes(type.element.kind)&&target.kind==='array'&&['fill','slice','reverse','sort','copyWithin'].includes(name)?target:null);
      if(type.kind==='regex'&&['test','exec'].includes(name))return `${value}.${name}(${args.map(x=>E(x)).join(',')})`;
      if(type.kind==='date')return `${value}.${name}(${args.map(x=>E(x)).join(',')})`;
      if(type.kind==='number'){if(name==='toFixed')return `d::fixed(${value},${args[0]?E(args[0]):'0.0'})`;if(name==='toString')return args.length?`d::radix(${value},${E(args[0])})`:`d::string(${value})`;}
      if(type.kind==='string'){
        const helper={slice:'slice',substring:'substring',repeat:'repeat',padStart:'padStart',padEnd:'padEnd',split:'split',replace:'replace',replaceAll:'replaceAll',trim:'trim',toUpperCase:'upper',toLowerCase:'lower',indexOf:'indexOf',lastIndexOf:'lastIndexOf',includes:'includes',startsWith:'startsWith',endsWith:'endsWith',charCodeAt:'charCodeAt',codePointAt:'codePointAt',matchAll:'matchAll',search:'search'}[name];
        if(name==='trimEnd')return `d::trim(${value},false,true)`;if(name==='trimStart')return `d::trim(${value},true,false)`;if(name==='toString')return value;
        if(helper)return `d::${helper}(${[value,...args.map(x=>E(x))].join(',')})`;this.fail(n,'Unsupported string operation '+name);
      }
      if(type.kind==='array'||type.kind==='fixed'){
        if(type.kind==='fixed'&&name==='includes')return `d::includes(${value},${E(args[0],type.element)})`;
        const helpers=['map','forEach','filter','find','findIndex','some','every','reduce','flatMap'];
        if(helpers.includes(name)){const values=args.map((a,i)=>i===0?this.expr(a,null,{...ctx,immediate:true}):E(a));let code=`d::${name}(${[value,...values].join(',')})`;if(name==='find'&&actual.kind==='optional'&&['object','tuple','function','match'].includes(this.base(actual.base).kind))code=`d::read(${code})`;return code;}
        if(name==='flat')return `d::flat(${value})`;if(name==='join')return `d::join(${[value,...args.map(x=>E(x))].join(',')})`;if(name==='entries')return `d::entries(${value})`;if(name==='at')return `d::at(${value},(${E(args[0])}<0?${E(args[0])}+double(${value}.size()):${E(args[0])}))`;
        if(name==='push'||name==='unshift'){if(args.some(ts.isSpreadElement)){const a=fresh('append');let s=`auto ${a}=${value};`;for(const x of args)s+=ts.isSpreadElement(x)?`for(const auto &_v:${E(x.expression)})${a}.push(_v);`:`${a}.push(${E(x,type.element)});`;return `([&](){${s}return double(${a}.size());})()`;}return `${value}.${name}(${args.map(x=>E(x,type.element)).join(',')})`;}
        if(name==='fill')return `${value}.fill(${args.map((x,i)=>E(x,i===0?target.element??type.element:null)).join(',')})`;
        if(name==='splice'&&args.some(ts.isSpreadElement)){const a=fresh('splice'),removed=fresh('removed');return `([&](){auto ${a}=${value};auto ${removed}=${a}.splice(${args.slice(0,2).map(x=>E(x)).join(',')});for(const auto &_v:${E(args[2].expression)})${a}.push(_v);return ${removed};})()`;}
        if(['sort','slice','subarray','pop','shift','reverse','splice','concat','set','indexOf','includes','copyWithin'].includes(name))return `${value}.${name}(${args.map(x=>E(x)).join(',')})`;
        this.fail(n,'Unsupported array operation '+name);
      }
      if(type.kind==='map'||type.kind==='set'){
        const keyType=type.kind==='map'?type.key:type.element;const values=args.map((x,i)=>E(x,i===0?keyType:type.value));let s=`${value}.${name==='delete'?'erase':name}(${values.join(',')})`;if(name==='get'&&actual.kind==='optional'&&['object','tuple','function'].includes(this.base(actual.base).kind))s=`d::read(${s})`;return s;
      }
    }
    let signature=this.base(this.type(callee));const resolved=checker.getResolvedSignature(n);if(resolved&&resolved.target?.typeParameters?.length)signature={kind:'function',params:resolved.parameters.map(p=>({type:this.types.of(checker.getTypeOfSymbolAtLocation(p,n))})),result:this.types.of(checker.getReturnTypeOfSignature(resolved))};if(signature.kind!=='function')this.fail(n,'Call needs a concrete signature');
    if(args.some(ts.isSpreadElement)){let code='',values=[],index=0;for(const arg of args){if(ts.isSpreadElement(arg)){const spread=fresh('arguments'),t=this.base(this.type(arg.expression));code+=`auto ${spread}=${E(arg.expression)};`;const count=t.kind==='fixed'?t.length:t.kind==='tuple'?t.elements.length:signature.params.length-args.length+1;for(let j=0;j<count;++j){const item=this.indexed(spread,t,j,ctx);values.push(this.convert(item.code,item.type,signature.params[index++]?.type));}}else{values.push(E(arg,signature.params[index++]?.type));}}while(values.length<signature.params.length)values.push(`${this.cpp(signature.params[values.length].type)}{}`);return `([&](){${code}return ${E(callee)}(${values.join(',')});})()`;}
    const values=signature.params.map((p,i)=>args[i]?E(args[i],p.type):`${this.cpp(p.type)}{}`);return `${E(callee)}(${values.join(',')})`;
  }
  bind(pattern,value,type,ctx,declare=true){
    if(ts.isIdentifier(pattern)){const b=this.binding(pattern);if(b.type.kind==='unknown'&&type.kind==='nil')return '';const lhs=(b.role==='member'?'this->':'')+b.name;return `${declare&&b.role==='local'?(b.type.kind==='fixed'?'auto&& ':this.cpp(b.type)+' '):''}${lhs}=${this.convert(value,type,b.type)};\n`;}
    const temp=fresh('binding');let code=`auto ${temp}=${value};\n`;
    for(let i=0;i<pattern.elements.length;++i){const p=pattern.elements[i];if(!ts.isBindingElement(p))continue;let key=p.propertyName?.text??p.name.text,sourceType,source;if(ts.isObjectBindingPattern(pattern)){const f=this.base(type).fields?.find(x=>x.key===key);if(!f)this.fail(p,'Unknown destructured field '+key);sourceType=f.type;source=`${temp}->${f.name}`;}else if(this.base(type).kind==='tuple'){sourceType=this.base(type).elements[i];source=`std::get<${i}>(*${temp})`;}else{sourceType=this.base(type).kind==='string'?{kind:'string'}:this.base(type).element;source=`d::at(${temp},${num(i)})`;}
      const t=this.type(p.name);if(p.initializer){source=`(d::present(${source})?${this.convert(source,sourceType,t)}:${this.expr(p.initializer,t,ctx)})`;sourceType=t;}code+=this.bind(p.name,source,sourceType,ctx,declare);
    }return code;
  }
  lambda(n,type,ctx={}){if(n.typeParameters?.length){const signature=this.base(this.type(n)),params=n.parameters.map((p,i)=>`auto _a${i}`).join(',');let body='';for(let i=0;i<n.parameters.length;++i){const b=this.binding(n.parameters[i].name);body+=`auto ${b.name}=_a${i};`;}body+=ts.isBlock(n.body)?this.statement(n.body,{...ctx,generic:true,result:null}):`return ${this.expr(n.body,null,{...ctx,generic:true})};`;return `[=](${params})mutable{${body}}`;}let t=this.base(type);if(t.kind!=='function')t=this.base(this.type(n));if(t.kind!=='function')this.fail(n,'Missing lambda signature');const params=t.params.map((p,i)=>`${this.cpp(p.type)} _a${i}`).join(',');let code='';for(let i=0;i<n.parameters.length;++i){const p=n.parameters[i],pt=t.params[i]?.type;if(!pt)this.fail(p,'Lambda parameter mismatch');let v=`_a${i}`,type=pt;if(p.initializer){const t=this.type(p.name);v=`(d::present(${v})?${this.convert(v,pt,t)}:${this.expr(p.initializer,t,ctx)})`;type=t;}code+=this.bind(p.name,v,type,ctx);}
    const nested={...ctx,result:t.result};code+=ts.isBlock(n.body)?this.statement(n.body,nested):`${t.result.kind==='void'?'':'return '}${this.expr(n.body,t.result,nested)};`;
    return `[${ctx.immediate?'&':'='}]( ${params}) mutable ->${this.cpp(t.result)}{${code}}`;
  }
  statement(n,ctx={}){if(!n)return '';const E=x=>this.expr(x,null,ctx),S=x=>this.statement(x,ctx);if(ts.isBlock(n))return `{\n${n.statements.map(S).join('')}\n}\n`;if(ts.isVariableStatement(n))return n.declarationList.declarations.map(d=>this.variable(d,ctx)).join('');if(ts.isExpressionStatement(n)){const expression=n.expression,assignment=ts.isBinaryExpression(expression)&&expression.operatorToken.kind>=ts.SyntaxKind.FirstAssignment&&expression.operatorToken.kind<=ts.SyntaxKind.LastAssignment;return `(void)(${assignment?this.assignment(expression,ctx,true):E(expression)});\n`;}if(ts.isReturnStatement(n))return `return${n.expression?' '+this.expr(n.expression,ctx.result,ctx):''};\n`;if(ts.isIfStatement(n))return `if(${this.condition(n.expression,ctx)})${this.block(n.thenStatement,ctx)}${n.elseStatement?'else '+this.block(n.elseStatement,ctx):''}\n`;if(ts.isForStatement(n)){let init='';if(n.initializer)init=ts.isVariableDeclarationList(n.initializer)?n.initializer.declarations.map(d=>this.variable(d,ctx)).join(''):`(void)(${E(n.initializer)});`;return `{${init}for(;${n.condition?this.condition(n.condition,ctx):'true'};${n.incrementor?`(void)(${E(n.incrementor)})`:''})${this.block(n.statement,{...ctx,breakLabel:null})}}\n`;}
    if(ts.isForOfStatement(n)||ts.isForInStatement(n)){const item=fresh('item'),type=this.base(this.type(n.expression));if(ts.isForInStatement(n))this.fail(n,'for-in needs record keys');const pattern=n.initializer.declarations?.[0]?.name??n.initializer;let source=E(n.expression),element=type.element??type;if(type.kind==='map'){source+='.entries()';element=this.cpp(type.key)===this.cpp(type.value)?{kind:'array',element:type.key}:{kind:'tuple',elements:[type.key,type.value]};}if(type.kind==='set')source+='.values()';if(type.kind==='string'){source=`d::chars(${source})`;element={kind:'string'};}return `for(auto &&${item}:${source}){d::check_cancel();${this.bind(pattern,item,element,ctx)}${this.statement(n.statement,{...ctx,breakLabel:null})}}\n`;}
    if(ts.isWhileStatement(n))return `while(${this.condition(n.expression,ctx)})${this.block(n.statement,{...ctx,breakLabel:null})}\n`;if(ts.isDoStatement(n))return `do ${this.block(n.statement,{...ctx,breakLabel:null})}while(${this.condition(n.expression,ctx)});\n`;if(ts.isBreakStatement(n))return ctx.breakLabel?`goto ${ctx.breakLabel};\n`:'break;\n';if(ts.isContinueStatement(n))return 'continue;\n';if(ts.isEmptyStatement(n)||ts.isInterfaceDeclaration(n)||ts.isTypeAliasDeclaration(n)||ts.isImportDeclaration(n))return '';if(ts.isFunctionDeclaration(n)){const b=this.binding(n.name);if(['global-function','member-function'].includes(b.role))return '';return `${this.cpp(b.type)} ${b.name};${b.name}=${this.lambda(n,b.type,{...ctx,immediate:!this.escapingClosures.has(n)})};\n`;}
    if(ts.isSwitchStatement(n)){const value=fresh('switch'),which=fresh('case'),end=fresh('end');let s=`{auto ${value}=${E(n.expression)};int ${which}=-1;`;let fallback=-1;n.caseBlock.clauses.forEach((c,i)=>{if(ts.isCaseClause(c))s+=`if(${which}<0&&${value}==${E(c.expression)})${which}=${i};`;else fallback=i;});if(fallback>=0)s+=`if(${which}<0)${which}=${fallback};`;n.caseBlock.clauses.forEach((c,i)=>{s+=`if(${which}>=0&&${which}<=${i}){${c.statements.map(x=>this.statement(x,{...ctx,breakLabel:end})).join('')}}`;});return s+`${end}:;}`;}
    this.fail(n,'Unsupported statement '+ts.SyntaxKind[n.kind]);
  }
  block(n,ctx){return `{d::check_cancel();${ts.isBlock(n)?n.statements.map(x=>this.statement(x,ctx)).join(''):this.statement(n,ctx)}}`;}
  variable(n,ctx){const first=ts.isIdentifier(n.name)?this.binding(n.name):null;if(first?.role==='member-function'||first?.role==='global-function'||n.initializer?.getText(this.sf)==='String.raw')return '';if(!n.initializer){if(first?.role==='local')return `${this.cpp(first.type)} ${first.name}{};\n`;return '';}
    if(ts.isArrowFunction(n.initializer)||ts.isFunctionExpression(n.initializer)){let recursive=false;const scan=x=>{if(ts.isIdentifier(x)&&checker.getSymbolAtLocation(x)===first.symbol&&x!==n.initializer.name)recursive=true;ts.forEachChild(x,scan);};scan(n.initializer);if(first.role==='local'&&recursive)return `${this.cpp(first.type)} ${first.name}=${this.lambda(n.initializer,first.type,{...ctx,immediate:true})};\n`;if(first.role==='local')return `auto ${first.name}=${this.lambda(n.initializer,first.type,{...ctx,immediate:!this.escapingClosures.has(n.initializer)})};\n`;}if(n.initializer.typeParameters?.length)return `auto ${first.name}=${this.lambda(n.initializer,first.type,ctx)};\n`;return this.bind(n.name,this.expr(n.initializer,first?.type??this.type(n.name),ctx),first?.type??this.type(n.name),ctx);
  }
  method(b,prototype=false){const fn=b.fn??b.node,type=this.base(b.type);const args=type.params.map((p,i)=>`${this.cpp(p.type)} _a${i}`).join(',');const head=`${this.cpp(type.result)} ${b.name}(${args})`;if(prototype)return head+';';let body='';for(let i=0;i<fn.parameters.length;++i){const p=fn.parameters[i],pt=type.params[i].type,t=this.type(p.name);let v=`_a${i}`;if(p.initializer)v=`(d::present(${v})?${this.convert(v,pt,t)}:${this.expr(p.initializer,t)})`;else v=this.convert(v,pt,t);body+=this.bind(p.name,v,t,{});}
    body+=ts.isBlock(fn.body)?this.statement(fn.body,{result:type.result}):`return ${this.expr(fn.body,type.result)};`;return head+'{'+body+'}\n';
  }
  output(){
    const factoryType=this.base(this.type(this.factory)),frameType=this.base(factoryType.result);if(frameType.kind!=='function')this.fail(this.factory,'A piece must return its typed frame function');
    const globalFns=this.globals.map(n=>ts.isFunctionDeclaration(n)?this.binding(n.name):ts.isIdentifier(n.name)?this.binding(n.name):null).filter(b=>b?.role==='global-function');
    const prototypes=globalFns.map(b=>this.method(b,true)).join('\n');let globals='';
    for(const n of this.globals){if(ts.isFunctionDeclaration(n)||ts.isIdentifier(n.name)&&this.binding(n.name)?.role==='global-function'||n.initializer?.getText(this.sf)==='String.raw')continue;if(ts.isIdentifier(n.name)){const b=this.binding(n.name);globals+=`${(n.parent.flags&ts.NodeFlags.Const)&&['number','boolean','string'].includes(this.base(b.type).kind)?'const ':''}${this.cpp(b.type)} ${b.name}=[](){return ${this.expr(n.initializer,b.type)};}();\n`;}else{const names=[];const collect=p=>{if(ts.isIdentifier(p))names.push(this.binding(p));else for(const e of p.elements)if(ts.isBindingElement(e))collect(e.name);};collect(n.name);globals+=names.map(b=>`${this.cpp(b.type)} ${b.name}{};`).join('\n')+`\nconst bool ${fresh('unpack_init')}=[](){${this.variable(n,{})}return true;}();\n`;}}
    const other=this.sf.statements.filter(n=>ts.isForStatement(n)||ts.isForOfStatement(n)||ts.isExpressionStatement(n));if(other.length)globals+=`const bool ${fresh('init')}=[](){${other.map(n=>this.statement(n,{})).join('')}return true;}();\n`;
    globals+=globalFns.map(b=>this.method(b)).join('\n');
    let constructor='ascii::Options _options(_input);\n';for(const p of this.factory.parameters){const type=this.type(p.name);constructor+=this.bind(p.name,`d::decode<${this.cpp(type)}>(_options.data)`,type,{},false);}
    for(const n of this.factory.body.statements){if(ts.isReturnStatement(n)){constructor+=`_render=${this.expr(n.expression,frameType)};\n`;}else constructor+=this.statement(n,{constructor:true});}
    const methods=this.methods.map(b=>this.method(b)).join('\n');
    const members=this.members.map(b=>`${this.cpp(b.type)} ${b.name}{};`).join('\n');
    let env='',args='t';if(frameType.params.length>1){const t=this.base(frameType.params[1].type);if(t.kind!=='object')this.fail(this.factory,'Frame environment needs typed fields');env=`auto _env=std::make_shared<${t.name}>();`;const p=t.fields.find(x=>x.key==='paper'),c=t.fields.find(x=>x.key==='color');if(p)env+=`_env->${p.name}=paper;`;if(c)env+=`if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->${c.name}=_indices;}`;args+=',_env';}
    const className='Native_'+this.id.replaceAll('-','_'),symbol=this.id.replaceAll('-','_');
    const body=`${prototypes}\n${globals}\nstruct ${className} final:ascii::Piece{\n${members}\n${this.cpp(frameType)} _render;\n${methods}\nexplicit ${className}(const AsciiPieceOptions &_input){${constructor}}\nvoid frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta(${JSON.stringify(this.id)}).cols)*ascii::catalog_meta(${JSON.stringify(this.id)}).rows);${env}text=_render(${args});if(!colored)colors.clear();}\n};`;
    return `// Direct, statically typed C++ from src/pieces/${this.id}.ts (ascii.rest, MIT).\n#include "../direct.hpp"\n#include "../catalog.hpp"\nnamespace ascii {namespace {namespace d=ascii::direct;\n${this.types.declarations()}\n${body}\n}\nconst AsciiPieceMeta &${symbol}_meta(){return catalog_meta(${JSON.stringify(this.id)});}\nstd::unique_ptr<Piece> make_${symbol}(const AsciiPieceOptions &o){return std::make_unique<${className}>(o);}\n}\n`;
  }
}

const selected=process.argv.slice(2);const targets=files.filter(file=>{const id=path.basename(file,'.ts');return selected.length?selected.includes(id):fs.readFileSync(path.join(root,'src-cpp/pieces',id+'.cpp'),'utf8').includes('Direct, statically typed C++');});
fs.mkdirSync(path.join(root,'src-cpp/pieces'),{recursive:true});
let failures=0;
for(const file of targets){try{const emitter=new Emitter(file);const output=emitter.output();const target=path.join(root,'src-cpp/pieces',emitter.id+'.cpp');if(!fs.existsSync(target)||fs.readFileSync(target,'utf8')!==output)fs.writeFileSync(target,output);process.stdout.write('Native '+emitter.id+'\n');}catch(error){++failures;process.stderr.write(path.basename(file)+': '+(selected.length?error.stack:error.message)+'\n');}}
if(failures)process.exitCode=1;
