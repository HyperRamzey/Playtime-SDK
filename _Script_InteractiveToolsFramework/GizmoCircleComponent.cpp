#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseComponent.hpp"
#include "GizmoCircleComponent.hpp"
void _Script_InteractiveToolsFramework::GizmoCircleComponent::set_bViewAligned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::GizmoCircleComponent::get_Normal() {
    return (void*)((uintptr_t)this + 0x470);
}
void _Script_InteractiveToolsFramework::GizmoCircleComponent::set_bOnlyAllowFrontFacingHits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x489 + 0);
    *(uint8_t*)((uintptr_t)this + 0x489 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_InteractiveToolsFramework::GizmoCircleComponent::get_Radius() {
    return *(float*)((uintptr_t)this + 0x47c);
}
float& _Script_InteractiveToolsFramework::GizmoCircleComponent::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x480);
}
int32_t& _Script_InteractiveToolsFramework::GizmoCircleComponent::get_NumSides() {
    return *(int32_t*)((uintptr_t)this + 0x484);
}
bool _Script_InteractiveToolsFramework::GizmoCircleComponent::get_bOnlyAllowFrontFacingHits() {
    return (*(uint8_t*)((uintptr_t)this + 0x489 + 0)) & 1 != 0;
}
bool _Script_InteractiveToolsFramework::GizmoCircleComponent::get_bViewAligned() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoCircleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoCircleComponent");
    return result;
}
