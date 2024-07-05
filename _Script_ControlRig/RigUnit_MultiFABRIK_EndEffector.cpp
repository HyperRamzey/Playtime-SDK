#include "..\FUObjectArray.hpp"
#include "RigUnit_MultiFABRIK_EndEffector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MultiFABRIK_EndEffector::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_MultiFABRIK_EndEffector::get_Location() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MultiFABRIK_EndEffector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector");
    return result;
}
