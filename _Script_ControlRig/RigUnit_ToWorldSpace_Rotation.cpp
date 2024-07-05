#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ToWorldSpace_Rotation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ToWorldSpace_Rotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation");
    return result;
}
void* _Script_ControlRig::RigUnit_ToWorldSpace_Rotation::get_Rotation() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_ToWorldSpace_Rotation::get_World() {
    return (void*)((uintptr_t)this + 0x20);
}
