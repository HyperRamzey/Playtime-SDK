#include "..\FUObjectArray.hpp"
#include "RigControl.hpp"
#include "RigElement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
void* _Script_ControlRig::RigControl::get_ControlType() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigControl::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_ControlRig::RigControl::get_SpaceName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigControl::get_ParentName() {
    return (void*)((uintptr_t)this + 0x24);
}
int32_t& _Script_ControlRig::RigControl::get_ParentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_ControlRig::RigControl::get_SpaceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Enum*& _Script_ControlRig::RigControl::get_ControlEnum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x2e8);
}
void* _Script_ControlRig::RigControl::get_OffsetTransform() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigControl::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigControl::get_Value() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_ControlRig::RigControl::get_PrimaryAxis() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Script_ControlRig::RigControl::get_bIsCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x171 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bIsCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigControl::get_bAnimatable() {
    return (*(uint8_t*)((uintptr_t)this + 0x172 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bAnimatable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x172 + 0);
    *(uint8_t*)((uintptr_t)this + 0x172 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigControl::get_bLimitTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x173 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bLimitTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x173 + 0);
    *(uint8_t*)((uintptr_t)this + 0x173 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigControl::get_bLimitRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x174 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bLimitRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x174 + 0);
    *(uint8_t*)((uintptr_t)this + 0x174 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigControl::get_bLimitScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x175 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bLimitScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x175 + 0);
    *(uint8_t*)((uintptr_t)this + 0x175 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigControl::get_bDrawLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x176 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bDrawLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x176 + 0);
    *(uint8_t*)((uintptr_t)this + 0x176 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigControl::get_MinimumValue() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_ControlRig::RigControl::get_MaximumValue() {
    return (void*)((uintptr_t)this + 0x200);
}
bool _Script_ControlRig::RigControl::get_bGizmoEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bGizmoEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigControl::get_bGizmoVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x281 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bGizmoVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x281 + 0);
    *(uint8_t*)((uintptr_t)this + 0x281 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigControl::get_GizmoName() {
    return (void*)((uintptr_t)this + 0x284);
}
void* _Script_ControlRig::RigControl::get_GizmoTransform() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_ControlRig::RigControl::get_GizmoColor() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_ControlRig::RigControl::get_Dependents() {
    return (void*)((uintptr_t)this + 0x2d0);
}
bool _Script_ControlRig::RigControl::get_bIsTransientControl() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigControl::set_bIsTransientControl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigControl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigControl");
    return result;
}
