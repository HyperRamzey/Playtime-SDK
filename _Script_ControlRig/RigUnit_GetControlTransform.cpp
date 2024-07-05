#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetControlTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetControlTransform::get_Control() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_GetControlTransform::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_GetControlTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetControlTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_GetControlTransform::get_Minimum() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::RigUnit_GetControlTransform::get_Maximum() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetControlTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetControlTransform");
    return result;
}
