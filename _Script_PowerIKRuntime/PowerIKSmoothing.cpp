#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKSmoothing.hpp"
bool _Script_PowerIKRuntime::PowerIKSmoothing::get_SmoothPositionOverTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_PowerIKRuntime::PowerIKSmoothing::get_MaxPositionSpeed() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_PowerIKRuntime::PowerIKSmoothing::set_SmoothPositionOverTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_PowerIKRuntime::PowerIKSmoothing::set_SmoothRotationOverTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKSmoothing::get_MaxPositionDistance() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_PowerIKRuntime::PowerIKSmoothing::get_SmoothRotationOverTime() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
float& _Script_PowerIKRuntime::PowerIKSmoothing::get_MaxDegreesSpeed() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_PowerIKRuntime::PowerIKSmoothing::get_MaxDegreesDistance() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKSmoothing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKSmoothing");
    return result;
}
