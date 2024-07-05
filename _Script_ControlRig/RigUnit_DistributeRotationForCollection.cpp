#include "..\FUObjectArray.hpp"
#include "RigUnit_DistributeRotationForCollection.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_DistributeRotationForCollection::get_Weight() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_ControlRig::RigUnit_DistributeRotationForCollection::get_Items() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_DistributeRotationForCollection::get_Rotations() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_DistributeRotationForCollection::get_RotationEaseType() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_ControlRig::RigUnit_DistributeRotationForCollection::get_WorkData() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DistributeRotationForCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DistributeRotationForCollection");
    return result;
}
