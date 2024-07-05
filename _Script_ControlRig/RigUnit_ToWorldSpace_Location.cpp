#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ToWorldSpace_Location.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ToWorldSpace_Location::get_Location() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_ToWorldSpace_Location::get_World() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ToWorldSpace_Location::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ToWorldSpace_Location");
    return result;
}
