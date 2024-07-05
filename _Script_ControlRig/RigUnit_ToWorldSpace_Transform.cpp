#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ToWorldSpace_Transform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ToWorldSpace_Transform::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ToWorldSpace_Transform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ToWorldSpace_Transform");
    return result;
}
void* _Script_ControlRig::RigUnit_ToWorldSpace_Transform::get_World() {
    return (void*)((uintptr_t)this + 0x40);
}
