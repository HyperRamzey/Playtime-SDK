#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "GizmoFloatParameterSource.hpp"
void _Script_InteractiveToolsFramework::GizmoFloatParameterSource::SetParameter(float NewValue) {
    return;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoFloatParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource");
    return result;
}
float _Script_InteractiveToolsFramework::GizmoFloatParameterSource::GetParameter() {
    return;
}
void _Script_InteractiveToolsFramework::GizmoFloatParameterSource::BeginModify() {
    return;
}
void _Script_InteractiveToolsFramework::GizmoFloatParameterSource::EndModify() {
    return;
}
