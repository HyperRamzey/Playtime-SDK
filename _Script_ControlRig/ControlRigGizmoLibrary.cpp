#include "..\FUObjectArray.hpp"
#include "ControlRigGizmoLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_ControlRig::ControlRigGizmoLibrary::get_DefaultGizmo() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::ControlRigGizmoLibrary::get_DefaultMaterial() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::ControlRigGizmoLibrary::get_MaterialColorParameter() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::ControlRigGizmoLibrary::get_Gizmos() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigGizmoLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigGizmoLibrary");
    return result;
}
