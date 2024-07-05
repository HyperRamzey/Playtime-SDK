#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetBoneTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetBoneTransform::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_ControlRig::RigUnit_SetBoneTransform::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SetBoneTransform::get_CachedBone() {
    return (void*)((uintptr_t)this + 0xdc);
}
void* _Script_ControlRig::RigUnit_SetBoneTransform::get_Space() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_SetBoneTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetBoneTransform::get_Result() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_ControlRig::RigUnit_SetBoneTransform::get_Weight() {
    return *(float*)((uintptr_t)this + 0xd4);
}
bool _Script_ControlRig::RigUnit_SetBoneTransform::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetBoneTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetBoneTransform");
    return result;
}
