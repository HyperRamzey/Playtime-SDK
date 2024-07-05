#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterColor.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterColor::get_Color() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterColor::get_DefaultColor() {
    return (void*)((uintptr_t)this + 0x118);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterColor::get_bIsChildOfRamp() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterColor::set_bIsChildOfRamp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterColor");
    return result;
}
