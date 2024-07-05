#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AxisAngleGizmo.hpp"
#include "InteractiveGizmo.hpp"
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_RotationAxis() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_InteractiveToolsFramework::AxisAngleGizmo::set_bInInteraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_AngleSource() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_HitTarget() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_StateTarget() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_InteractiveToolsFramework::AxisAngleGizmo::get_bInInteraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_RotationOrigin() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_RotationPlaneX() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_RotationPlaneY() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_InteractionStartPoint() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_InteractiveToolsFramework::AxisAngleGizmo::get_InteractionCurPoint() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_InteractiveToolsFramework::AxisAngleGizmo::get_InteractionStartAngle() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_InteractiveToolsFramework::AxisAngleGizmo::get_InteractionCurAngle() {
    return *(float*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::AxisAngleGizmo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.AxisAngleGizmo");
    return result;
}
