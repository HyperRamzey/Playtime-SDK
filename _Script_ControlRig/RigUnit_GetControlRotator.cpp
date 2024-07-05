#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetControlRotator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetControlRotator::get_Rotator() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_GetControlRotator::get_Control() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetControlRotator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetControlRotator");
    return result;
}
void* _Script_ControlRig::RigUnit_GetControlRotator::get_Space() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetControlRotator::get_Minimum() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_GetControlRotator::get_Maximum() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ControlRig::RigUnit_GetControlRotator::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x38);
}
