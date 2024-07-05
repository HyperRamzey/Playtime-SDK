#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetBoneTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetBoneTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_GetBoneTransform::get_Bone() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_GetBoneTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetBoneTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetBoneTransform");
    return result;
}
void* _Script_ControlRig::RigUnit_GetBoneTransform::get_CachedBone() {
    return (void*)((uintptr_t)this + 0x50);
}
