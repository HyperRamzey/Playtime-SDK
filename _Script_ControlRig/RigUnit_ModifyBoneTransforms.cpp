#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_ModifyBoneTransforms.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ModifyBoneTransforms::get_Mode() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_ModifyBoneTransforms::get_BoneToModify() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_ModifyBoneTransforms::get_Weight() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_ControlRig::RigUnit_ModifyBoneTransforms::get_WeightMinimum() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_ControlRig::RigUnit_ModifyBoneTransforms::get_WeightMaximum() {
    return *(float*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_ModifyBoneTransforms::get_WorkData() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ModifyBoneTransforms::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ModifyBoneTransforms");
    return result;
}
