#include "..\FUObjectArray.hpp"
#include "RigUnit_ChainHarmonics_Pendulum.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_PendulumBlend() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_PendulumGravity() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_PendulumStiffness() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_PendulumMinimum() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_PendulumDrag() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_PendulumMaximum() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_PendulumEase() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_UnwindAxis() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_UnwindMinimum() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::get_UnwindMaximum() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ChainHarmonics_Pendulum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum");
    return result;
}
