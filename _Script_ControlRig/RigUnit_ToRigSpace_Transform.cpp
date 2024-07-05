#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ToRigSpace_Transform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ToRigSpace_Transform::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_ToRigSpace_Transform::get_Global() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ToRigSpace_Transform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ToRigSpace_Transform");
    return result;
}
