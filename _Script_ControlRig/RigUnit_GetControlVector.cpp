#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetControlVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetControlVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetControlVector");
    return result;
}
void* _Script_ControlRig::RigUnit_GetControlVector::get_Vector() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_GetControlVector::get_Control() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_GetControlVector::get_Space() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetControlVector::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_GetControlVector::get_Minimum() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_GetControlVector::get_Maximum() {
    return (void*)((uintptr_t)this + 0x2c);
}
