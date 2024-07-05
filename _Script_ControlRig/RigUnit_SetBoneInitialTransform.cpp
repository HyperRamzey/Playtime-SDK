#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetBoneInitialTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetBoneInitialTransform::get_CachedBone() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_ControlRig::RigUnit_SetBoneInitialTransform::get_Result() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_SetBoneInitialTransform::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetBoneInitialTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetBoneInitialTransform::get_Space() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_ControlRig::RigUnit_SetBoneInitialTransform::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xd1 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SetBoneInitialTransform::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetBoneInitialTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetBoneInitialTransform");
    return result;
}
