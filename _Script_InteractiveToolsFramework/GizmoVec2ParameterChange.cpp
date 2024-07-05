#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoVec2ParameterChange.hpp"
void* _Script_InteractiveToolsFramework::GizmoVec2ParameterChange::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_InteractiveToolsFramework::GizmoVec2ParameterChange::get_CurrentValue() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoVec2ParameterChange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/InteractiveToolsFramework.GizmoVec2ParameterChange");
    return result;
}
