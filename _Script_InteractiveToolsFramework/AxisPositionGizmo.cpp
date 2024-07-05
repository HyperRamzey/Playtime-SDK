#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AxisPositionGizmo.hpp"
#include "InteractiveGizmo.hpp"
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_InteractiveToolsFramework::AxisPositionGizmo::get_bInInteraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x89 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_ParameterSource() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_HitTarget() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_InteractiveToolsFramework::AxisPositionGizmo::get_bEnableSignedAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_StateTarget() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_InteractiveToolsFramework::AxisPositionGizmo::set_bEnableSignedAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_InteractiveToolsFramework::AxisPositionGizmo::set_bInInteraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x89 + 0);
    *(uint8_t*)((uintptr_t)this + 0x89 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_InteractionOrigin() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_InteractionAxis() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_InteractionStartPoint() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_InteractiveToolsFramework::AxisPositionGizmo::get_InteractionCurPoint() {
    return (void*)((uintptr_t)this + 0xb0);
}
float& _Script_InteractiveToolsFramework::AxisPositionGizmo::get_InteractionStartParameter() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_InteractiveToolsFramework::AxisPositionGizmo::get_InteractionCurParameter() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_InteractiveToolsFramework::AxisPositionGizmo::get_ParameterSign() {
    return *(float*)((uintptr_t)this + 0xc4);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::AxisPositionGizmo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.AxisPositionGizmo");
    return result;
}
