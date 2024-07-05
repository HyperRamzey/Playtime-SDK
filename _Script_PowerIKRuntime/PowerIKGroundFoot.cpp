#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKGroundFoot.hpp"
void* _Script_PowerIKRuntime::PowerIKGroundFoot::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_PowerIKRuntime::PowerIKGroundFoot::get_PullWeight() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKGroundFoot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKGroundFoot");
    return result;
}
bool _Script_PowerIKRuntime::PowerIKGroundFoot::get_NormalizePulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKGroundFoot::set_NormalizePulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_PowerIKRuntime::PowerIKGroundFoot::get_PositivePullFactor() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_PowerIKRuntime::PowerIKGroundFoot::get_NegativePullFactor() {
    return (void*)((uintptr_t)this + 0x1c);
}
