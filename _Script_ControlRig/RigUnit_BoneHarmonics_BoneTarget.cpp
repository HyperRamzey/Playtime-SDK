#include "..\FUObjectArray.hpp"
#include "RigUnit_BoneHarmonics_BoneTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_BoneHarmonics_BoneTarget::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::RigUnit_BoneHarmonics_BoneTarget::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BoneHarmonics_BoneTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget");
    return result;
}
