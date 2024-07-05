#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoComponentAxisSource.hpp"
#include "GizmoTransformChangeStateTarget.hpp"
#include "InteractiveGizmo.hpp"
#include "IntervalGizmo.hpp"
#include "TransformProxy.hpp"
_Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget*& _Script_InteractiveToolsFramework::IntervalGizmo::get_StateTarget() {
    return *(_Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::IntervalGizmo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.IntervalGizmo");
    return result;
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::IntervalGizmo::get_AxisYSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x90);
}
_Script_InteractiveToolsFramework::TransformProxy*& _Script_InteractiveToolsFramework::IntervalGizmo::get_TransformProxy() {
    return *(_Script_InteractiveToolsFramework::TransformProxy**)((uintptr_t)this + 0x50);
}
void* _Script_InteractiveToolsFramework::IntervalGizmo::get_ActiveComponents() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_InteractiveToolsFramework::IntervalGizmo::get_ActiveGizmos() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::IntervalGizmo::get_AxisZSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x98);
}
