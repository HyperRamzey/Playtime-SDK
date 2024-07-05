#include "..\FUObjectArray.hpp"
#include "RigUnit_ModifyBoneTransforms_PerBone.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ModifyBoneTransforms_PerBone::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_ModifyBoneTransforms_PerBone::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ModifyBoneTransforms_PerBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone");
    return result;
}
