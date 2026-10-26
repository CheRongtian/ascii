// Build-time source conversion for this repository's native implementation.
// Generated .cpp files are committed source; the app never evaluates scripts.
import { readFileSync, writeFileSync, readdirSync, existsSync } from 'node:fs';
import { stripTypeScriptTypes } from 'node:module';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '../..');
const acorn = { exports: {} };
new Function('exports', 'module', process.binding('natives')['internal/deps/acorn/acorn/dist/acorn'])(acorn.exports, acorn);
let serial = 0;
const next = prefix => `_${prefix}${++serial}`;
const str = value => {
  let out = 'u"';
  for (const c of value) {
    const n = c.codePointAt(0);
    if (c === '"') out += '\\"'; else if (c === '\\') out += '\\\\';
    else if (c === '\n') out += '\\n'; else if (c === '\r') out += '\\r'; else if (c === '\t') out += '\\t';
    else if (n < 32 || n === 127) out += `\\x${n.toString(16).padStart(2, '0')}" u"`;
    else out += c;
  }
  return out + '"';
};
const cpp = value => JSON.stringify(value);
const idFor = file => path.relative(path.join(root, 'src'), file).replace(/\.ts$/, '').split(path.sep).join('/');
const symFor = id => id.replace(/[^a-zA-Z0-9_]/g, '_');
const children = node => Object.entries(node).flatMap(([key, value]) => {
  if (['start', 'end', 'loc'].includes(key)) return [];
  if (Array.isArray(value)) return value.filter(x => x && typeof x.type === 'string').map(x => [key, x]);
  return value && typeof value.type === 'string' ? [[key, value]] : [];
});

class Compiler {
  constructor(file) {
    this.file = file; this.id = idFor(file); this.symbol = symFor(this.id);
    this.source = stripTypeScriptTypes(readFileSync(file, 'utf8'), { mode: 'strip' });
    this.ast = acorn.exports.parse(this.source, { ecmaVersion: 'latest', sourceType: 'module' });
    this.scopes = new WeakMap(); this.bindings = new WeakMap(); this.refs = new WeakMap();
    this.functions = new WeakMap(); this.literals = []; this.literalMap = new Map(); this.builtins=new Set();
    this.rootScope = this.scope(null, 'program');
    this.build(this.ast, this.rootScope);
    this.analyze(this.ast);
  }
  scope(parent, kind) { const s = { parent, kind, bindings: new Map(), node: null }; s.fn = kind === 'function' || kind === 'program' ? s : parent.fn; return s; }
  declare(pattern, scope, kind = 'let') {
    if (!pattern) return;
    if (pattern.type === 'Identifier') {
      let target = scope;
      if (kind === 'var') while (target.kind !== 'program' && target.kind !== 'function') target = target.parent;
      let binding = target.bindings.get(pattern.name);
      if (!binding) { binding = { name: pattern.name, cpp: next('v_') + '_' + pattern.name.replace(/[^a-zA-Z0-9_]/g, '_'), scope: target, captured: false, kind }; target.bindings.set(pattern.name, binding); }
      this.bindings.set(pattern, binding); return binding;
    }
    if (pattern.type === 'AssignmentPattern') return this.declare(pattern.left, scope, kind);
    if (pattern.type === 'RestElement') return this.declare(pattern.argument, scope, kind);
    if (pattern.type === 'ArrayPattern') for (const e of pattern.elements) this.declare(e, scope, kind);
    if (pattern.type === 'ObjectPattern') for (const p of pattern.properties) this.declare(p.type === 'RestElement' ? p.argument : p.value, scope, kind);
  }
  build(node, scope) {
    if (!node) return;
    if (node.type === 'FunctionDeclaration') {
      const binding = this.declare(node.id, scope, 'function');
      binding.functionNode = node;
    }
    if (['FunctionDeclaration', 'FunctionExpression', 'ArrowFunctionExpression'].includes(node.type)) {
      const f = this.scope(scope, 'function'); f.node = node; f.uid = next('fn'); f.arrow = node.type === 'ArrowFunctionExpression';
      this.scopes.set(node, f); this.functions.set(node, f);
      if (node.type === 'FunctionExpression' && node.id) { const b = this.declare(node.id, f, 'self'); b.self = f; }
      if (node.type === 'FunctionDeclaration') f.selfBinding = this.bindings.get(node.id);
      for (const p of node.params) { this.declare(p, f, 'parameter'); this.build(p, f); }
      this.build(node.body, f); return;
    }
    if (node.type === 'BlockStatement' || node.type === 'ForStatement' || node.type === 'ForOfStatement' || node.type === 'ForInStatement' || node.type === 'SwitchStatement' || node.type === 'CatchClause') {
      const s = this.scope(scope, node.type); s.node = node; this.scopes.set(node, s);
      if (node.type === 'CatchClause') this.declare(node.param, s, 'catch');
      for (const [, child] of children(node)) this.build(child, s); return;
    }
    this.scopes.set(node, scope);
    if (node.type === 'VariableDeclarator') {this.declare(node.id, scope, node._kind || 'let');if(this.id==='svg'&&node.id.name==='xml'&&node.init)node.init.nativeXML=true;}
    if (node.type === 'VariableDeclaration') {
      for (const d of node.declarations) { d._kind = node.kind; this.build(d, scope); }
      return;
    }
    if (node.type === 'ImportDeclaration') for (const spec of node.specifiers) this.declare(spec.local, scope, 'import');
    if (node.type === 'ClassDeclaration') this.declare(node.id, scope, 'class');
    for (const [, child] of children(node)) this.build(child, scope);
  }
  resolve(name, scope) { for (let s = scope; s; s = s.parent) if (s.bindings.has(name)) return s.bindings.get(name); return null; }
  analyze(node, parent = null, field = '') {
    if (!node) return;
    if (node.type === 'Identifier' && !this.bindings.has(node)) {
      const excluded = parent && ((parent.type === 'MemberExpression' && field === 'property' && !parent.computed) || (['Property', 'MethodDefinition', 'PropertyDefinition'].includes(parent.type) && field === 'key' && !parent.computed) || parent.type.startsWith('Import') || parent.type === 'ExportSpecifier');
      if (!excluded) {
        const scope = this.scopes.get(node); const binding = this.resolve(node.name, scope);
        if (binding) { this.refs.set(node, binding); if (binding.scope !== this.rootScope && binding.scope.fn !== scope.fn) binding.captured = true; }
      }
    }
    for (const [key, child] of children(node)) this.analyze(child, node, key);
  }
  read(binding, context = {}) {
    if (binding.self || context.fn?.selfBinding === binding) return `_self${(binding.self || context.fn).uid}`;
    return binding.scope === this.rootScope ? `this->${binding.cpp}.get()` : binding.captured ? `${binding.cpp}.get()` : binding.cpp;
  }
  literal(s) {
    if (!this.literalMap.has(s)) { this.literalMap.set(s, this.literals.length); this.literals.push(s); }
    return `this->_literals[${this.literalMap.get(s)}]`;
  }
  key(node, computed, context) { return computed ? this.expr(node, context) : this.literal((node.type === 'PrivateIdentifier' ? '#' : '') + (node.name ?? String(node.value))); }
  expr(node, context = {}) {
    if (!node) return 'V{}';
    const E = n => this.expr(n, context);
    switch (node.type) {
      case 'Identifier': { const b = this.refs.get(node) || this.bindings.get(node) || this.resolve(node.name, this.scopes.get(node));if(!b)this.builtins.add(node.name); return b ? this.read(b, context) : `j::builtin(${cpp(node.name)})`; }
      case 'PrivateIdentifier': return this.literal('#' + node.name);
      case 'ThisExpression': {
        if (context.thisValue) return context.thisValue;
        for (let f = context.fn; f; ) { if (!f.arrow) return `_receiver${f.uid}`; let p = f.parent; while (p && p.kind !== 'function') p = p.parent; f = p; }
        return 'V{}';
      }
      case 'Super': return context.base || 'V{}';
      case 'Literal': if (node.regex) return `j::regexp(${str(node.regex.pattern)},${cpp(node.regex.flags)})`; if (node.value === null) return 'V::null()'; if (typeof node.value === 'string') return this.literal(node.value); if (typeof node.value === 'boolean') return `V(${node.value})`; return `V(${Number.isFinite(node.value) ? String(node.value) + (Number.isInteger(node.value) && !/[eE]/.test(String(node.value)) ? '.0' : '') : 'INFINITY'})`;
      case 'ArrayExpression': return this.array(node.elements, context);
      case 'ObjectExpression': {
        const out = next('obj'); let code = `V ${out}=j::object();`;
        for (const p of node.properties) {
          if (p.type === 'SpreadElement') { const v = next('spread'); code += `V ${v}=${E(p.argument)};for(const auto &_key:j::keys(${v}))j::put(${out},_key,j::get(${v},_key));`; }
          else if(p.kind==='get'||p.kind==='set'){const key=next('accessor');code+=`V ${key}=${this.key(p.key,p.computed,context)};j::accessor(${out},${key},${E(p.value)},${p.kind==='get'});`;}
          else code += `j::put(${out},${this.key(p.key,p.computed,context)},${E(p.value)});`;
        }
        return `([&]()->V{${code}return ${out};})()`;
      }
      case 'FunctionExpression': case 'ArrowFunctionExpression': return this.func(node, context);
      case 'MemberExpression': {
        const base = E(node.object), key = this.key(node.property,node.computed,context);
        if (node.optional) { const v = next('optional'); return `([&]()->V{V ${v}=${base};return j::nullish(${v})?V{}:j::get(${v},${key});})()`; }
        return `j::get(${base},${key})`;
      }
      case 'ChainExpression': return this.chain(node.expression,context);
      case 'CallExpression': case 'NewExpression': return this.call(node, context);
      case 'AwaitExpression': return E(node.argument);
      case 'BinaryExpression': { const a = next('lhs'), b = next('rhs'); return `([&]()->V{V ${a}=${E(node.left)};V ${b}=${E(node.right)};return ${this.operation(node.operator,a,b)};})()`; }
      case 'LogicalExpression': {
        const v = next('logical'); const condition = node.operator === '??' ? `j::nullish(${v})` : node.operator === '&&' ? `j::truth(${v})` : `!j::truth(${v})`;
        return `([&]()->V{V ${v}=${E(node.left)};return ${condition}?${E(node.right)}:${v};})()`;
      }
      case 'ConditionalExpression': return `(j::truth(${E(node.test)})?${E(node.consequent)}:${E(node.alternate)})`;
      case 'UnaryExpression': if (node.operator === 'delete' && node.argument.type === 'MemberExpression') return `j::erase(${E(node.argument.object)},${this.key(node.argument.property,node.argument.computed,context)})`; return `j::unary(${cpp(node.operator)},${E(node.argument)})`;
      case 'UpdateExpression': return node.argument.type === 'MemberExpression' ? `j::increment(${E(node.argument.object)},${this.key(node.argument.property,node.argument.computed,context)},${node.operator==='++'?1:-1},${node.prefix})` : `j::increment(${E(node.argument)},${node.operator==='++'?1:-1},${node.prefix})`;
      case 'AssignmentExpression': {
        const temp = next('assign'); let code = '';
        if (node.left.type === 'ArrayPattern' || node.left.type === 'ObjectPattern') return `([&]()->V{V ${temp}=${E(node.right)};${this.bind(node.left,temp,context,false)}return ${temp};})()`;
        if (node.left.type === 'MemberExpression') {
          const base=next('base'), key=next('key'); code=`V ${base}=${E(node.left.object)};V ${key}=${this.key(node.left.property,node.left.computed,context)};`;
          if (['??=','&&=','||='].includes(node.operator)) { const old=next('old');const check=node.operator==='??='?`j::nullish(${old})`:node.operator==='&&='?`j::truth(${old})`:`!j::truth(${old})`;return `([&]()->V{${code}V ${old}=j::get(${base},${key});return ${check}?j::put(${base},${key},${E(node.right)}):${old};})()`; }
          return `([&]()->V{${code}V ${temp}=${E(node.right)};return ${node.operator==='='?`j::put(${base},${key},${temp})`:`j::update(${base},${key},${cpp(node.operator.slice(0,-1))},${temp})`};})()`;
        }
        const lhs=E(node.left);
        if(['??=','&&=','||='].includes(node.operator)){const check=node.operator==='??='?`j::nullish(${lhs})`:node.operator==='&&='?`j::truth(${lhs})`:`!j::truth(${lhs})`;return `(${check}?(${lhs}=${E(node.right)}):${lhs})`;}
        return node.operator==='='?`(${lhs}=${E(node.right)})`:`(${lhs}=j::binary(${cpp(node.operator.slice(0,-1))},${lhs},${E(node.right)}))`;
      }
      case 'SequenceExpression': return '(' + node.expressions.map(E).join(',') + ')';
      case 'TemplateLiteral': {
        const name=next('text'); let code=`std::u16string ${name};`;
        node.quasis.forEach((q,i)=>{code+=`${name}+=${str(q.value.cooked??q.value.raw)};`;if(i<node.expressions.length)code+=`${name}+=j::string(${E(node.expressions[i])});`;});
        return `([&]()->V{${code}return V(std::move(${name}));})()`;
      }
      case 'TaggedTemplateExpression': {
        if(node.tag.type==='MemberExpression'&&node.tag.object.name==='String'&&node.tag.property.name==='raw'){
          const name=next('raw');let code=`std::u16string ${name};`;node.quasi.quasis.forEach((q,i)=>{code+=`${name}+=${str(q.value.raw)};`;if(i<node.quasi.expressions.length)code+=`${name}+=j::string(${E(node.quasi.expressions[i])});`;});return `([&]()->V{${code}return V(std::move(${name}));})()`;
        }
        const parts=next('template');return `([&]()->V{V ${parts}=j::array({${node.quasi.quasis.map(q=>q.value.cooked==null?'V{}':this.literal(q.value.cooked)).join(',')}});j::put(${parts},V(u"raw"),j::array({${node.quasi.quasis.map(q=>this.literal(q.value.raw)).join(',')}}));return j::call(${E(node.tag)},j::Args{${parts}${node.quasi.expressions.map(x=>','+E(x)).join('')}});})()`;
      }
      default: throw new Error(this.id+': unsupported expression '+node.type+' at '+node.start);
    }
  }
  operation(op,a,b){if(['-','*','/'].includes(op))return `V(j::number(${a})${op}j::number(${b}))`;if(op==='%')return `V(std::fmod(j::number(${a}),j::number(${b})))`;if(op==='**')return `V(std::pow(j::number(${a}),j::number(${b})))`;if(['|','&','^'].includes(op))return `V(int(j::i32(${a})${op}j::i32(${b})))`;if(op==='<<')return `V(double(int32_t(j::u32(${a})<<(j::u32(${b})&31))))`;if(op==='>>')return `V(int(j::i32(${a})>>(j::u32(${b})&31)))`;if(op==='>>>')return `V(double(j::u32(${a})>>(j::u32(${b})&31)))`;if(['===','==','!==','!='].includes(op))return `V(${op[0]==='!'?'!':''}j::equal(${a},${b},${op.length===3}))`;return `j::binary(${cpp(op)},${a},${b})`;}
  chain(node,context){let code='';const visit=n=>{if(n.type==='MemberExpression'){const base=visit(n.object);if(n.optional)code+=`if(j::nullish(${base.value}))return V{};`;const value=next('chain');code+=`V ${value}=j::get(${base.value},${this.key(n.property,n.computed,context)});`;return{value,receiver:base.value};}if(n.type==='CallExpression'){const target=visit(n.callee);if(n.optional)code+=`if(j::nullish(${target.value}))return V{};`;const value=next('chain');code+=`V ${value}=j::call(${target.value},${this.args(n.arguments,context)},${target.receiver||'V{}'});`;return{value};}const value=next('chain');code+=`V ${value}=${this.expr(n,context)};`;return{value};};const result=visit(node);return `([&]()->V{${code}return ${result.value};})()`;}
  array(nodes,context){const out=next('array');let code=`j::Args ${out};`;for(const n of nodes){if(!n)code+=`${out}.push_back(V::hole());`;else if(n.type==='SpreadElement')code+=`for(const auto &_value:j::elements(${this.expr(n.argument,context)}))${out}.push_back(_value);`;else code+=`${out}.push_back(${this.expr(n,context)});`;}return `([&]()->V{${code}return j::array(std::move(${out}));})()`;}
  args(nodes,context){if(!nodes.some(n=>n.type==='SpreadElement'))return `j::Args{${nodes.map(n=>this.expr(n,context)).join(',')}}`;const out=next('args');let code=`j::Args ${out};`;for(const n of nodes)code+=n.type==='SpreadElement'?`for(const auto &_v:j::elements(${this.expr(n.argument,context)}))${out}.push_back(_v);`:`${out}.push_back(${this.expr(n,context)});`;return `([&](){${code}return ${out};})()`;}
  call(node,context){const E=n=>this.expr(n,context),args=this.args(node.arguments,context);const invoke=node.type==='NewExpression'?'construct':'call';
    const callee=node.callee;
    if(node.type==='CallExpression'&&callee.type==='MemberExpression'&&!callee.computed&&callee.object.type==='Identifier'&&callee.object.name==='Math'&&!this.refs.has(callee.object)&&!node.arguments.some(x=>x.type==='SpreadElement')){
      const name=callee.property.name,values=node.arguments.map(()=>next('number'));let result=null;
      if(['abs','acos','asin','atan','cbrt','ceil','cos','exp','expm1','floor','log','log10','log1p','log2','sin','sqrt','tan','tanh','trunc'].includes(name)&&values.length===1)result=`std::${name==='abs'?'fabs':name}(j::number(${values[0]}))`;
      if(['atan2','pow'].includes(name)&&values.length===2)result=`std::${name}(j::number(${values[0]}),j::number(${values[1]}))`;
      if(name==='round'&&values.length===1)result=`std::floor(j::number(${values[0]})+.5)`;
      if(name==='imul'&&values.length===2)result=`double(int32_t(j::u32(${values[0]})*j::u32(${values[1]})))`;
      if(name==='hypot'&&[2,3].includes(values.length))result=`std::hypot(${values.map(v=>`j::number(${v})`).join(',')})`;
      if(result)return `([&]()->V{${values.map((v,i)=>`V ${v}=${E(node.arguments[i])};`).join('')}return V(${result});})()`;
    }
    if(node.callee.type==='Super')return `j::construct(${context.base||'V{}'},${args},${this.expr({type:'ThisExpression'},context)})`;
    if(node.callee.type==='MemberExpression'){
      const m=node.callee,base=next('receiver'),key=next('method'),a=next('params');
      const receiver=m.object.type==='Super'?this.expr({type:'ThisExpression'},context):base;
      const obj=m.object.type==='Super'?`j::get(${context.base},${this.literal('prototype')})`:E(m.object);
      return `([&]()->V{V ${base}=${obj};${m.optional?`if(j::nullish(${base}))return V{};`:''}V ${key}=${this.key(m.property,m.computed,context)};V _method=j::get(${base},${key});${node.optional?'if(j::nullish(_method))return V{};':''}j::Args ${a}=${args};return j::${invoke}(_method,${a},${receiver});})()`;
    }
    const f=next('callee');return `([&]()->V{V ${f}=${E(node.callee)};${node.optional?`if(j::nullish(${f}))return V{};`:''}return j::${invoke}(${f},${args});})()`;
  }
  prefix(scope,context){let out='';for(const b of scope.bindings.values()){if(b.kind==='self'||b.scope===this.rootScope)continue;out+=`${b.captured?'j::Cell':'V'} ${b.cpp};\n`;}for(const b of scope.bindings.values())if(b.functionNode)out+=`${this.read(b,context)}=${this.func(b.functionNode,context)};\n`;return out;}
  bind(pattern,value,context,decl=true){if(!pattern)return '';if(pattern.type==='Identifier'){const b=decl?this.bindings.get(pattern):this.refs.get(pattern)||this.resolve(pattern.name,this.scopes.get(pattern));return `${this.read(b,context)}=${value};\n`;}
    if(pattern.type==='MemberExpression')return `j::put(${this.expr(pattern.object,context)},${this.key(pattern.property,pattern.computed,context)},${value});\n`;
    if(pattern.type==='AssignmentPattern'){const temp=next('default');return `V ${temp}=${value};if(${temp}.kind==V::Undefined||${temp}.kind==V::Hole)${temp}=${this.expr(pattern.right,context)};\n${this.bind(pattern.left,temp,context,decl)}`;}
    if(pattern.type==='RestElement')return this.bind(pattern.argument,value,context,decl);
    const temp=next('pattern');let out=`V ${temp}=${value};\n`;
    if(pattern.type==='ArrayPattern'){pattern.elements.forEach((p,i)=>{if(!p)return;out+=p.type==='RestElement'?this.bind(p.argument,`j::rest(j::elements(${temp}),${i})`,context,decl):this.bind(p,`j::get(${temp},V(${i}))`,context,decl);});return out;}
    if(pattern.type==='ObjectPattern'){const excluded=[];for(const p of pattern.properties){if(p.type==='RestElement')out+=this.bind(p.argument,`j::object_rest(${temp},{${excluded.join(',')}})`,context,decl);else{const key=this.key(p.key,p.computed,context);excluded.push(`j::string(${key})`);out+=this.bind(p.value,`j::get(${temp},${key})`,context,decl);}}return out;}
    throw new Error(this.id+': unsupported binding '+pattern.type);
  }
  func(node,parentContext={}){const f=this.functions.get(node);const context={...parentContext,fn:f,thisValue:null};const A=`_args${f.uid}`,R=`_receiver${f.uid}`,S=`_self${f.uid}`;
    if(this.id==='kit/image'&&node.id?.name==='pixelsOf')return `j::function([](const j::Args &_a,const V &,const V &)->V{return j::image_pixels(_a[0]);})`;
    if(this.id==='kit/image'&&node.id?.name==='inflate')return `j::function([](const j::Args &_a,const V &,const V &)->V{return j::inflate_bytes(_a[0],size_t(j::number(_a[1])));})`;
    if(node.nativeXML)return `j::function([](const j::Args &_a,const V &,const V &)->V{return j::clean_xml(_a[0]);})`;
    if(this.id==='print'&&node.id?.name==='banner')return `j::function([](const j::Args &_a,const V &,const V &)->V{return j::terminal_banner(_a[0],j::defaulted(_a[1],j::object()));})`;
    if(this.id==='terminal'&&node.id?.name==='play')return `j::function([](const j::Args &_a,const V &,const V &)->V{return j::terminal_play(_a[0],j::defaulted(_a[1],j::object()));})`;
    let body=this.prefix(f,context);
    node.params.forEach((p,i)=>{body+=this.bind(p,p.type==='RestElement'?`j::rest(${A},${i})`:`${A}[${i}]`,context);});
    body+=node.body.type==='BlockStatement'?this.statement(node.body,context):`return ${this.expr(node.body,context)};`;
    const arity=node.params.findIndex(p=>p.type==='AssignmentPattern'||p.type==='RestElement');
    return `j::function([=](const j::Args &${A},const V &${R},const V &${S}) mutable ->V{\n${body}\nreturn V{};\n},${arity<0?node.params.length:arity})`;
  }
  statement(node,context={}){if(!node)return '';const E=n=>this.expr(n,context),S=n=>this.statement(n,context);switch(node.type){
    case 'BlockStatement':return `{\n${this.prefix(this.scopes.get(node),context)}${node.body.map(S).join('')}\n}\n`;
    case 'EmptyStatement':case 'FunctionDeclaration':case 'ImportDeclaration':return '';
    case 'VariableDeclaration':return node.declarations.map(d=>d.init?this.bind(d.id,E(d.init),context):'').join('');
    case 'ExpressionStatement':{const out=`(void)(${E(node.expression)});\n`;return out+(node.expression.type==='CallExpression'&&node.expression.callee.type==='Super'&&context.fields?context.fields:'');}
    case 'ReturnStatement':return `return ${node.argument?E(node.argument):'V{}'};\n`;
    case 'IfStatement':return `if(j::truth(${E(node.test)}))${this.block(node.consequent,context)}${node.alternate?`else ${this.block(node.alternate,context)}`:''}\n`;
    case 'WhileStatement':return `while(j::truth(${E(node.test)}))${this.block(node.body,{...context,breakLabel:null})}\n`;
    case 'DoWhileStatement':return `do ${this.block(node.body,{...context,breakLabel:null})}while(j::truth(${E(node.test)}));\n`;
    case 'ForStatement':{const scope=this.scopes.get(node);let clones='';for(const b of scope.bindings.values())if(b.captured&&b.kind!=='var')clones+=`${b.cpp}=j::Cell(${b.cpp}.get()),`;return `{${this.prefix(scope,context)}${node.init?(node.init.type==='VariableDeclaration'?S(node.init):`(void)(${E(node.init)});`):''}for(;${node.test?`j::truth(${E(node.test)})`:'true'};${clones}${node.update?`(void)(${E(node.update)})`:'(void)0'})${this.block(node.body,{...context,breakLabel:null})}}\n`;}
    case 'ForOfStatement':case 'ForInStatement':{const scope=this.scopes.get(node),item=next('item');const pattern=node.left.type==='VariableDeclaration'?node.left.declarations[0].id:node.left;return `{for(const auto &${item}:${node.type==='ForInStatement'?'j::keys':'j::elements'}(${E(node.right)})){${this.prefix(scope,context)}${this.bind(pattern,item,context,node.left.type==='VariableDeclaration')}${this.statement(node.body,{...context,breakLabel:null})}}}\n`;}
    case 'BreakStatement':return context.breakLabel?`goto ${context.breakLabel};\n`:'break;\n';case 'ContinueStatement':return 'continue;\n';
    case 'ThrowStatement':return `j::raise(${E(node.argument)});\n`;
    case 'SwitchStatement':{const scope=this.scopes.get(node),value=next('switch'),label=next('case'),end=next('switch_end');let out=`{${this.prefix(scope,context)}V ${value}=${E(node.discriminant)};int ${label}=-1;`;node.cases.forEach((c,i)=>{if(c.test)out+=`if(${label}<0&&j::equal(${value},${E(c.test)}))${label}=${i};`;});const fallback=node.cases.findIndex(c=>!c.test);if(fallback>=0)out+=`if(${label}<0)${label}=${fallback};`;node.cases.forEach((c,i)=>{out+=`if(${label}>=0&&${label}<=${i}){${c.consequent.map(n=>this.statement(n,{...context,breakLabel:end})).join('')}}`;});return out+`${end}:;\n}\n`;}
    case 'TryStatement':{let out='{';if(node.finalizer)out+=`struct _Guard{std::function<void()> f;~_Guard(){f();}} _guard{[&](){${S(node.finalizer)}}};`;out+='try '+S(node.block);if(node.handler){const scope=this.scopes.get(node.handler),ex=next('error');out+=`catch(const std::exception &${ex}){${this.prefix(scope,context)}${node.handler.param?this.bind(node.handler.param,`j::object({{V(u"message"),V(ascii::utf16(${ex}.what()))}})`,context):''}${S(node.handler.body)}}`;}else out+='catch(...){throw;}';return out+'}\n';}
    case 'ClassDeclaration':return this.klass(node,context);
    case 'ExportNamedDeclaration':return node.declaration?S(node.declaration):'';
    case 'ExportDefaultDeclaration':if(node.declaration.type==='FunctionDeclaration'||node.declaration.type==='ClassDeclaration')return S(node.declaration);return `this->exported("default").get()=${E(node.declaration)};\n`;
    case 'ExportAllDeclaration':return '';
    default:throw new Error(this.id+': unsupported statement '+node.type);
  }}
  block(node,context){return node.type==='BlockStatement'?this.statement(node,context):`{${this.statement(node,context)}}`;}
  klass(node,context){const name=node.id.name,b=this.bindings.get(node.id),target=this.read(b,context),base=next('base'),klass=next('class');const body=node.body.body;const ctor=body.find(m=>m.type==='MethodDefinition'&&m.kind==='constructor');const receiver=ctor?`_receiver${this.functions.get(ctor.value).uid}`:'_instance';
    let fields='';for(const f of body.filter(m=>m.type==='PropertyDefinition'&&!m.static)){const key=this.key(f.key,f.computed,context);fields+=`j::put(${receiver},${key},${f.value?this.expr(f.value,{...context,thisValue:receiver}):'V{}'});`;if(f.key.type==='PrivateIdentifier')fields+=`${receiver}.data->hidden.insert(j::string(${key}));`;}
    const ctx={...context,base,fields};let callback;
    if(ctor){callback=this.func(ctor.value,ctx);if(!node.superClass){const uid=this.functions.get(ctor.value).uid;const needle=`mutable ->V{\n`;callback=callback.replace(needle,needle+fields);}}
    else callback=`j::function([=](const j::Args &_a,const V &_instance,const V &)->V{${node.superClass?`j::construct(${base},_a,_instance);`:''}${fields}return V{};})`;
    let out=`{V ${base}=${node.superClass?this.expr(node.superClass,context):'V{}'};V ${klass}=j::make_class(${cpp(name)},${base},${callback});${target}=${klass};`;
    for(const m of body){if(m.type==='MethodDefinition'&&m.kind!=='constructor')out+=`j::class_method(${klass},${this.key(m.key,m.computed,context)},${this.func(m.value,{...context,base})},${m.static},${cpp(m.kind)});`;else if(m.type==='PropertyDefinition'&&m.static)out+=`j::put(${klass},${this.key(m.key,m.computed,context)},${m.value?this.expr(m.value,{...context,thisValue:klass}):'V{}'});`;}
    return out+'}\n';
  }
  dependency(source){if(source.startsWith('node:'))return source;const resolved=path.resolve(path.dirname(this.file),source);return idFor(resolved);}
  output(){
    const fields=[...this.rootScope.bindings.values()];let exports='',imports='',hoist='';
    for(const node of this.ast.body){
      if(node.type==='ImportDeclaration'){
        const dep=this.dependency(node.source.value);imports+=`auto &_import${node.start}=j::module(${cpp(dep)});\n`;
        for(const s of node.specifiers){const b=this.bindings.get(s.local);imports+=s.type==='ImportNamespaceSpecifier'?`this->${b.cpp}.get()=j::module_value(_import${node.start});\n`:`this->${b.cpp}=_import${node.start}.exported(${cpp(s.type==='ImportDefaultSpecifier'?'default':s.imported.name??s.imported.value)});\n`;}
      }
      if(node.type==='ExportDefaultDeclaration'&&(node.declaration.type==='FunctionDeclaration'||node.declaration.type==='ClassDeclaration')){const b=this.bindings.get(node.declaration.id);exports+=`this->exports["default"]=this->${b.cpp};\n`;}
      if(node.type==='ExportNamedDeclaration'){
        if(node.declaration){const d=node.declaration;const names=d.type==='VariableDeclaration'?d.declarations.flatMap(x=>this.patternBindings(x.id)):[this.bindings.get(d.id)];for(const b of names)exports+=`this->exports[${cpp(b.name)}]=this->${b.cpp};\n`;}
        else if(node.source){const dep=this.dependency(node.source.value);imports+=`{auto &_m=j::module(${cpp(dep)});`;for(const s of node.specifiers)imports+=`this->exports[${cpp(s.exported.name??s.exported.value)}]=_m.exported(${cpp(s.local.name??s.local.value)});`;imports+='}\n';}
        else for(const s of node.specifiers){const b=this.resolve(s.local.name,this.rootScope);exports+=`this->exports[${cpp(s.exported.name??s.exported.value)}]=this->${b.cpp};\n`;}
      }
      if(node.type==='ExportAllDeclaration'){const dep=this.dependency(node.source.value);imports+=node.exported?`this->exported(${cpp(node.exported.name)}).get()=j::module_value(j::module(${cpp(dep)}));\n`:`for(const auto &_entry:j::module(${cpp(dep)}).exports)if(_entry.first!="default")this->exports[_entry.first]=_entry.second;\n`;}
    }
    for(const b of fields)if(b.functionNode)hoist+=`this->${b.cpp}.get()=${this.func(b.functionNode)};\n`;
    const body=this.ast.body.map(n=>this.statement(n)).join('');
    const literals=this.literals.map(s=>`V(${str(s)})`).join(',\n');
    return `// Native source generated from src/${this.id}.ts (ascii.rest, MIT).\n#include "../value.hpp"\n#include <limits>\nnamespace ascii::native {\nnamespace {\nnamespace j=ascii::native;using V=j::Value;\nstruct Generated_${this.symbol} final:j::Module {\n${fields.map(b=>'j::Cell '+b.cpp+';').join('\n')}\nstd::vector<V> _literals;\nGenerated_${this.symbol}():${fields.map(b=>`${b.cpp}(this->slot(${cpp(b.name)}))`).join(',')}${fields.length?',':''}_literals{${literals}}{\n${exports}}\nvoid init() override{if(initialized)return;initialized=true;\n${hoist}${imports}${exports}${body}}\n};\n}\nstd::unique_ptr<Module> new_${this.symbol}(){return std::make_unique<Generated_${this.symbol}>();}\n}\n`;
  }
  patternBindings(pattern){if(!pattern)return [];if(pattern.type==='Identifier')return[this.bindings.get(pattern)];if(pattern.type==='AssignmentPattern')return this.patternBindings(pattern.left);if(pattern.type==='RestElement')return this.patternBindings(pattern.argument);if(pattern.type==='ArrayPattern')return pattern.elements.flatMap(p=>this.patternBindings(p));return pattern.properties.flatMap(p=>this.patternBindings(p.type==='RestElement'?p.argument:p.value));}
}

const files=[];
for(const directory of ['kit','kit/recipes'])for(const file of readdirSync(path.join(root,'src',directory)).filter(x=>x.endsWith('.ts')&&!x.endsWith('.test.ts')))files.push(path.join(root,'src',directory,file));
for(const file of ['banner.ts','svg.ts','print.ts','terminal.ts'])files.push(path.join(root,'src',file));
const modules=[];
files.push(path.join(root,'src/pieces/index.ts'));
const canvasIDs=JSON.parse(readFileSync(path.join(root,'src/library.ts'),'utf8').match(/new Set<PieceName>\((\[[^\]]*\])\)/)[1]);
writeFileSync(path.join(root,'src-cpp/canvas_ids.hpp'),'#pragma once\nnamespace ascii {inline constexpr const char *canvas_ids[]={'+canvasIDs.map(cpp).join(',')+'};}\n');
for(const file of files){const c=new Compiler(file);const code=c.output();writeFileSync(path.join(root,'src-cpp/compiled',c.symbol+'.cpp'),code);modules.push({id:c.id,symbol:c.symbol,builtins:[...c.builtins].sort()});process.stdout.write('Converted '+c.id+'\n');}
writeFileSync(path.join(root,'src-cpp/compiled/manifest.json'),JSON.stringify(modules,null,2)+'\n');
writeFileSync(path.join(root,'src-cpp/compiled_modules.cpp'),'#include "value.hpp"\nnamespace ascii::native {\n'+modules.map(m=>`std::unique_ptr<Module> new_${m.symbol}();`).join('\n')+'\nModuleFactory module_factory(const std::string &name){\n'+modules.map(m=>`if(name==${cpp(m.id)})return new_${m.symbol};`).join('\n')+'\nreturn nullptr;\n}\n}\n');
