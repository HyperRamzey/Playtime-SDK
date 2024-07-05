#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateTransformLerp.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AccumulateTransformLerp::get_Blend() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_AccumulateTransformLerp::get_TargetValue() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_AccumulateTransformLerp::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_ControlRig::RigUnit_AccumulateTransformLerp::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateTransformLerp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateTransformLerp");
    return result;
}
void _Script_ControlRig::RigUnit_AccumulateTransformLerp::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_AccumulateTransformLerp::get_AccumulatedValue() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_AccumulateTransformLerp::get_Result() {
    return (void*)((uintptr_t)this + 0x80);
}
