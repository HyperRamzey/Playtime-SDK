#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoComponentAxisSource.hpp"
#include "GizmoConstantFrameAxisSource.hpp"
#include "GizmoScaledTransformSource.hpp"
#include "GizmoTransformChangeStateTarget.hpp"
#include "InteractiveGizmo.hpp"
#include "TransformGizmo.hpp"
#include "TransformProxy.hpp"
bool _Script_InteractiveToolsFramework::TransformGizmo::get_bSnapToWorldGrid() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_InteractiveToolsFramework::TransformProxy*& _Script_InteractiveToolsFramework::TransformGizmo::get_ActiveTarget() {
    return *(_Script_InteractiveToolsFramework::TransformProxy**)((uintptr_t)this + 0x40);
}
void _Script_InteractiveToolsFramework::TransformGizmo::set_bSnapToWorldGrid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_InteractiveToolsFramework::TransformGizmo::set_bGridSizeIsExplicit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::TransformGizmo::get_bGridSizeIsExplicit() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::TransformGizmo::get_ExplicitGridSize() {
    return (void*)((uintptr_t)this + 0x4c);
}
bool _Script_InteractiveToolsFramework::TransformGizmo::get_bRotationGridSizeIsExplicit() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::TransformGizmo::set_bRotationGridSizeIsExplicit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::TransformGizmo::get_ExplicitRotationGridSize() {
    return (void*)((uintptr_t)this + 0x5c);
}
bool _Script_InteractiveToolsFramework::TransformGizmo::get_bSnapToWorldRotGrid() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::TransformGizmo::set_bUseContextCoordinateSystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_InteractiveToolsFramework::TransformGizmo::set_bSnapToWorldRotGrid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::TransformGizmo::get_bUseContextCoordinateSystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::TransformGizmo::get_CurrentCoordinateSystem() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_InteractiveToolsFramework::TransformGizmo::get_ActiveComponents() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_InteractiveToolsFramework::TransformGizmo::get_NonuniformScaleComponents() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_InteractiveToolsFramework::TransformGizmo::get_ActiveGizmos() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_CameraAxisSource() {
    return *(_Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource**)((uintptr_t)this + 0x140);
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_AxisXSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x148);
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_AxisYSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x150);
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_AxisZSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x158);
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_UnitAxisXSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x160);
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_UnitAxisYSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x168);
}
_Script_InteractiveToolsFramework::GizmoComponentAxisSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_UnitAxisZSource() {
    return *(_Script_InteractiveToolsFramework::GizmoComponentAxisSource**)((uintptr_t)this + 0x170);
}
_Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget*& _Script_InteractiveToolsFramework::TransformGizmo::get_StateTarget() {
    return *(_Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget**)((uintptr_t)this + 0x178);
}
_Script_InteractiveToolsFramework::GizmoScaledTransformSource*& _Script_InteractiveToolsFramework::TransformGizmo::get_ScaledTransformSource() {
    return *(_Script_InteractiveToolsFramework::GizmoScaledTransformSource**)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::TransformGizmo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.TransformGizmo");
    return result;
}
