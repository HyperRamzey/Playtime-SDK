#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetBoneRotation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetBoneRotation::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_ControlRig::RigUnit_SetBoneRotation::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_SetBoneRotation::get_Rotation() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetBoneRotation::get_Space() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetBoneRotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetBoneRotation");
    return result;
}
float& _Script_ControlRig::RigUnit_SetBoneRotation::get_Weight() {
    return *(float*)((uintptr_t)this + 0x84);
}
void _Script_ControlRig::RigUnit_SetBoneRotation::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SetBoneRotation::get_CachedBone() {
    return (void*)((uintptr_t)this + 0x8c);
}
