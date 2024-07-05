#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_SpringIK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SpringIK::get_StartBone() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SpringIK::get_RootStrength() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_EndBone() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_ControlRig::RigUnit_SpringIK::get_HierarchyStrength() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_ControlRig::RigUnit_SpringIK::get_EffectorRatio() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_ControlRig::RigUnit_SpringIK::get_EffectorStrength() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_ControlRig::RigUnit_SpringIK::get_RootRatio() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_ControlRig::RigUnit_SpringIK::get_Damping() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_PoleVector() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_ControlRig::RigUnit_SpringIK::get_bFlipPolePlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SpringIK::set_bFlipPolePlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_PoleVectorKind() {
    return (void*)((uintptr_t)this + 0x9d);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_PoleVectorSpace() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_PrimaryAxis() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_SecondaryAxis() {
    return (void*)((uintptr_t)this + 0xb4);
}
bool _Script_ControlRig::RigUnit_SpringIK::get_bLiveSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SpringIK::set_bLiveSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_ControlRig::RigUnit_SpringIK::get_Iterations() {
    return *(int32_t*)((uintptr_t)this + 0xc4);
}
bool _Script_ControlRig::RigUnit_SpringIK::get_bLimitLocalPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SpringIK::set_bLimitLocalPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_SpringIK::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xc9 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SpringIK::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_SpringIK::get_WorkData() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SpringIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SpringIK");
    return result;
}
