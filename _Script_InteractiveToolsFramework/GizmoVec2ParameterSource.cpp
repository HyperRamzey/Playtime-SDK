#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "GizmoVec2ParameterSource.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoVec2ParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource");
    return result;
}
void _Script_InteractiveToolsFramework::GizmoVec2ParameterSource::EndModify() {
    return;
}
void _Script_InteractiveToolsFramework::GizmoVec2ParameterSource::SetParameter(_Script_CoreUObject::Vector2D& NewValue) {
    return;
}
_Script_CoreUObject::Vector2D _Script_InteractiveToolsFramework::GizmoVec2ParameterSource::GetParameter() {
    return;
}
void _Script_InteractiveToolsFramework::GizmoVec2ParameterSource::BeginModify() {
    return;
}
