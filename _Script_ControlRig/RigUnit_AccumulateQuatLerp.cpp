#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateQuatLerp.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AccumulateQuatLerp::get_TargetValue() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_AccumulateQuatLerp::get_Blend() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_AccumulateQuatLerp::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_ControlRig::RigUnit_AccumulateQuatLerp::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AccumulateQuatLerp::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_AccumulateQuatLerp::get_Result() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_AccumulateQuatLerp::get_AccumulatedValue() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateQuatLerp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateQuatLerp");
    return result;
}
