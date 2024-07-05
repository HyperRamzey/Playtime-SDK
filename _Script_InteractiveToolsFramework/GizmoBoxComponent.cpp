#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseComponent.hpp"
#include "GizmoBoxComponent.hpp"
void _Script_InteractiveToolsFramework::GizmoBoxComponent::set_bRemoveHiddenLines(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::GizmoBoxComponent::get_Origin() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Script_InteractiveToolsFramework::GizmoBoxComponent::get_Rotation() {
    return (void*)((uintptr_t)this + 0x480);
}
void _Script_InteractiveToolsFramework::GizmoBoxComponent::set_bEnableAxisFlip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::GizmoBoxComponent::get_bRemoveHiddenLines() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a0 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::GizmoBoxComponent::get_Dimensions() {
    return (void*)((uintptr_t)this + 0x490);
}
float& _Script_InteractiveToolsFramework::GizmoBoxComponent::get_LineThickness() {
    return *(float*)((uintptr_t)this + 0x49c);
}
bool _Script_InteractiveToolsFramework::GizmoBoxComponent::get_bEnableAxisFlip() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a1 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoBoxComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoBoxComponent");
    return result;
}
