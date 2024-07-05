#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoFloatParameterChange.hpp"
float& _Script_InteractiveToolsFramework::GizmoFloatParameterChange::get_CurrentValue() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_InteractiveToolsFramework::GizmoFloatParameterChange::get_InitialValue() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoFloatParameterChange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/InteractiveToolsFramework.GizmoFloatParameterChange");
    return result;
}
