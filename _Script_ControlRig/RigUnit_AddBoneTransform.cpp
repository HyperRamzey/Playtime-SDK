#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_AddBoneTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AddBoneTransform::get_CachedBone() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_ControlRig::RigUnit_AddBoneTransform::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_AddBoneTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_ControlRig::RigUnit_AddBoneTransform::get_Weight() {
    return *(float*)((uintptr_t)this + 0xa0);
}
bool _Script_ControlRig::RigUnit_AddBoneTransform::get_bPostMultiply() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AddBoneTransform::set_bPostMultiply(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::RigUnit_AddBoneTransform::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_AddBoneTransform::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xa5 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AddBoneTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AddBoneTransform");
    return result;
}
