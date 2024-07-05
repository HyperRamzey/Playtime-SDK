#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InteractiveGizmo.hpp"
#include "PlanePositionGizmo.hpp"
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_ParameterSource() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_InteractiveToolsFramework::PlanePositionGizmo::get_bFlipX() {
    return (*(uint8_t*)((uintptr_t)this + 0x89 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_HitTarget() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionNormal() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_StateTarget() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_InteractiveToolsFramework::PlanePositionGizmo::get_bEnableSignedAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::PlanePositionGizmo::set_bEnableSignedAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_InteractiveToolsFramework::PlanePositionGizmo::set_bFlipX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x89 + 0);
    *(uint8_t*)((uintptr_t)this + 0x89 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::PlanePositionGizmo::get_bFlipY() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::PlanePositionGizmo::set_bFlipY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionCurParameter() {
    return (void*)((uintptr_t)this + 0xdc);
}
bool _Script_InteractiveToolsFramework::PlanePositionGizmo::get_bInInteraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::PlanePositionGizmo::set_bInInteraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionOrigin() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionAxisX() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionAxisY() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionStartPoint() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionCurPoint() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_InteractionStartParameter() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_InteractiveToolsFramework::PlanePositionGizmo::get_ParameterSigns() {
    return (void*)((uintptr_t)this + 0xe4);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::PlanePositionGizmo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.PlanePositionGizmo");
    return result;
}
