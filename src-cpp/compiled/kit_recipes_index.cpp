// Native source generated from src/kit/recipes/index.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_recipes_index final:j::Module {

std::vector<V> _literals;
Generated_kit_recipes_index():_literals{}{
}
void init() override{if(initialized)return;initialized=true;
for(const auto &_entry:j::module("kit/recipes/palettes").exports)if(_entry.first!="default")this->exports[_entry.first]=_entry.second;
for(const auto &_entry:j::module("kit/recipes/words").exports)if(_entry.first!="default")this->exports[_entry.first]=_entry.second;
for(const auto &_entry:j::module("kit/recipes/looks").exports)if(_entry.first!="default")this->exports[_entry.first]=_entry.second;
for(const auto &_entry:j::module("kit/recipes/motion").exports)if(_entry.first!="default")this->exports[_entry.first]=_entry.second;
for(const auto &_entry:j::module("kit/recipes/widgets").exports)if(_entry.first!="default")this->exports[_entry.first]=_entry.second;
}
};
}
std::unique_ptr<Module> new_kit_recipes_index(){return std::make_unique<Generated_kit_recipes_index>();}
}
