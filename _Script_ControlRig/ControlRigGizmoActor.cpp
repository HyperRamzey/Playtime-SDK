#include "..\FUObjectArray.hpp"
#include "ControlRigGizmoActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Script_ControlRig::ControlRigGizmoActor::get_ControlName() {
    return (void*)((uintptr_t)this + 0x234);
}
_Script_Engine::SceneComponent*& _Script_ControlRig::ControlRigGizmoActor::get_ActorRootComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x220);
}
void _Script_ControlRig::ControlRigGizmoActor::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::ControlRigGizmoActor::SetSelected(bool bInSelected) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Script_ControlRig::ControlRigGizmoActor::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x228);
}
void* _Script_ControlRig::ControlRigGizmoActor::get_ControlRigIndex() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Script_ControlRig::ControlRigGizmoActor::get_bSelectable() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 4 != 0;
}
bool _Script_ControlRig::ControlRigGizmoActor::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 1 != 0;
}
void* _Script_ControlRig::ControlRigGizmoActor::get_ColorParameterName() {
    return (void*)((uintptr_t)this + 0x23c);
}
bool _Script_ControlRig::ControlRigGizmoActor::get_bSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 2 != 0;
}
void _Script_ControlRig::ControlRigGizmoActor::set_bSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_ControlRig::ControlRigGizmoActor::set_bSelectable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_ControlRig::ControlRigGizmoActor::get_bHovered() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 8 != 0;
}
void _Script_ControlRig::ControlRigGizmoActor::set_bHovered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigGizmoActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigGizmoActor");
    return result;
}
void _Script_ControlRig::ControlRigGizmoActor::SetSelectable(bool bInSelectable) {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::SetHovered(bool bInHovered) {
    return;
}
bool _Script_ControlRig::ControlRigGizmoActor::IsEnabled() {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::SetGlobalTransform(_Script_CoreUObject::Transform& InTransform) {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::SetEnabled(bool bInEnabled) {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::OnTransformChanged(_Script_CoreUObject::Transform& NewTransform) {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::OnSelectionChanged(bool bIsSelected) {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::OnManipulatingChanged(bool bIsManipulating) {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::OnHoveredChanged(bool bIsSelected) {
    return;
}
void _Script_ControlRig::ControlRigGizmoActor::OnEnabledChanged(bool BIsEnabled) {
    return;
}
bool _Script_ControlRig::ControlRigGizmoActor::IsSelectedInEditor() {
    return;
}
bool _Script_ControlRig::ControlRigGizmoActor::IsHovered() {
    return;
}
_Script_CoreUObject::Transform _Script_ControlRig::ControlRigGizmoActor::GetGlobalTransform() {
    return;
}
