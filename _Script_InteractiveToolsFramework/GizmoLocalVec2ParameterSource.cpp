#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseVec2ParameterSource.hpp"
#include "GizmoLocalVec2ParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoLocalVec2ParameterSource::get_Value() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoLocalVec2ParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
    return result;
}
void* _Script_InteractiveToolsFramework::GizmoLocalVec2ParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0x50);
}
