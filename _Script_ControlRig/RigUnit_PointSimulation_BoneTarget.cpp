#include "..\FUObjectArray.hpp"
#include "RigUnit_PointSimulation_BoneTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_PointSimulation_BoneTarget::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_PointSimulation_BoneTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget");
    return result;
}
int32_t& _Script_ControlRig::RigUnit_PointSimulation_BoneTarget::get_TranslationPoint() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_PointSimulation_BoneTarget::get_PrimaryAimPoint() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_ControlRig::RigUnit_PointSimulation_BoneTarget::get_SecondaryAimPoint() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
