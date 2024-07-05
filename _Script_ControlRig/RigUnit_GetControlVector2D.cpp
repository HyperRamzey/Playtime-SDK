#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetControlVector2D.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetControlVector2D::get_Control() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_GetControlVector2D::get_Vector() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetControlVector2D::get_Minimum() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetControlVector2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetControlVector2D");
    return result;
}
void* _Script_ControlRig::RigUnit_GetControlVector2D::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_GetControlVector2D::get_Maximum() {
    return (void*)((uintptr_t)this + 0x20);
}
