#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialCachedParameters.hpp"
void* _Script_Engine::MaterialCachedParameters::get_RuntimeEntries() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialCachedParameters::get_ScalarValues() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::MaterialCachedParameters::get_VectorValues() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialCachedParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialCachedParameters");
    return result;
}
void* _Script_Engine::MaterialCachedParameters::get_FontValues() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::MaterialCachedParameters::get_TextureValues() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::MaterialCachedParameters::get_FontPageValues() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::MaterialCachedParameters::get_RuntimeVirtualTextureValues() {
    return (void*)((uintptr_t)this + 0x140);
}
