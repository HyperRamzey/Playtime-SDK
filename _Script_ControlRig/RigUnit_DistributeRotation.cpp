#include "..\FUObjectArray.hpp"
#include "RigUnit_DistributeRotation.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_DistributeRotation::get_Weight() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_ControlRig::RigUnit_DistributeRotation::get_StartBone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_DistributeRotation::get_EndBone() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_DistributeRotation::get_Rotations() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_ControlRig::RigUnit_DistributeRotation::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_DistributeRotation::get_RotationEaseType() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_ControlRig::RigUnit_DistributeRotation::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_DistributeRotation::get_WorkData() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DistributeRotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DistributeRotation");
    return result;
}
