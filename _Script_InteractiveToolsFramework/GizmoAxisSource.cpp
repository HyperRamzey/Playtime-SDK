#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "GizmoAxisSource.hpp"
_Script_CoreUObject::Vector _Script_InteractiveToolsFramework::GizmoAxisSource::GetOrigin() {
    return;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoAxisSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoAxisSource");
    return result;
}
_Script_CoreUObject::Vector _Script_InteractiveToolsFramework::GizmoAxisSource::GetDirection() {
    return;
}
bool _Script_InteractiveToolsFramework::GizmoAxisSource::HasTangentVectors() {
    return;
}
void _Script_InteractiveToolsFramework::GizmoAxisSource::GetTangentVectors(_Script_CoreUObject::Vector& TangentXOut, _Script_CoreUObject::Vector& TangentYOut) {
    return;
}
