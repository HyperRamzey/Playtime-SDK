#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AssetManagerSearchRules.hpp"
void* _Script_Engine::AssetManagerSearchRules::get_ExcludePatterns() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::AssetManagerSearchRules::get_AssetScanPaths() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AssetManagerSearchRules::get_IncludePatterns() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::AssetManagerSearchRules::set_bForceSynchronousScan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AssetManagerSearchRules::get_AssetBaseClass() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::AssetManagerSearchRules::get_bHasBlueprintClasses() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManagerSearchRules::set_bHasBlueprintClasses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManagerSearchRules::get_bForceSynchronousScan() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
bool _Script_Engine::AssetManagerSearchRules::get_bSkipVirtualPathExpansion() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void _Script_Engine::AssetManagerSearchRules::set_bSkipVirtualPathExpansion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManagerSearchRules::get_bSkipManagerIncludeCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b + 0)) & 1 != 0;
}
void _Script_Engine::AssetManagerSearchRules::set_bSkipManagerIncludeCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AssetManagerSearchRules::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AssetManagerSearchRules");
    return result;
}
