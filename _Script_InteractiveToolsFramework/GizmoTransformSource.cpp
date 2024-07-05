#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "GizmoTransformSource.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoTransformSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoTransformSource");
    return result;
}
void _Script_InteractiveToolsFramework::GizmoTransformSource::SetTransform(_Script_CoreUObject::Transform& NewTransform) {
    return;
}
_Script_CoreUObject::Transform _Script_InteractiveToolsFramework::GizmoTransformSource::GetTransform() {
    return;
}
