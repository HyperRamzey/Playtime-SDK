#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateVectorLerp.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AccumulateVectorLerp::get_Blend() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorLerp::get_TargetValue() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorLerp::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x14);
}
bool _Script_ControlRig::RigUnit_AccumulateVectorLerp::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AccumulateVectorLerp::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateVectorLerp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateVectorLerp");
    return result;
}
void* _Script_ControlRig::RigUnit_AccumulateVectorLerp::get_Result() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorLerp::get_AccumulatedValue() {
    return (void*)((uintptr_t)this + 0x34);
}
