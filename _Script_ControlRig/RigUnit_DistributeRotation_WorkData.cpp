#include "..\FUObjectArray.hpp"
#include "RigUnit_DistributeRotation_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DistributeRotation_WorkData::get_CachedItems() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_DistributeRotation_WorkData::get_ItemRotationT() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_DistributeRotation_WorkData::get_ItemRotationA() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_DistributeRotation_WorkData::get_ItemRotationB() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_DistributeRotation_WorkData::get_ItemLocalTransforms() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DistributeRotation_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DistributeRotation_WorkData");
    return result;
}
