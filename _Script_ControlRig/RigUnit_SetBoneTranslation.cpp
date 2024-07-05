#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetBoneTranslation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetBoneTranslation::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetBoneTranslation::get_Translation() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetBoneTranslation::get_CachedBone() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_ControlRig::RigUnit_SetBoneTranslation::get_Weight() {
    return *(float*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_SetBoneTranslation::get_Space() {
    return (void*)((uintptr_t)this + 0x7c);
}
bool _Script_ControlRig::RigUnit_SetBoneTranslation::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SetBoneTranslation::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetBoneTranslation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetBoneTranslation");
    return result;
}
