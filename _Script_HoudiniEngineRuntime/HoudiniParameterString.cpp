#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterString.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterString::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterString");
    return result;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterString::get_Values() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterString::get_DefaultValues() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterString::get_ChosenAssets() {
    return (void*)((uintptr_t)this + 0x128);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterString::set_bIsAssetRef(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterString::get_bIsAssetRef() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
