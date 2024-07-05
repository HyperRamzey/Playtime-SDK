#include "..\FUObjectArray.hpp"
#include "ControlRigGizmoDefinition.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ControlRigGizmoDefinition::get_GizmoName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ControlRigGizmoDefinition::get_StaticMesh() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::ControlRigGizmoDefinition::get_Transform() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigGizmoDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigGizmoDefinition");
    return result;
}
