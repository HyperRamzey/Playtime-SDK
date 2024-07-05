#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseComponent.hpp"
#include "GizmoLineHandleComponent.hpp"
void* _Script_InteractiveToolsFramework::GizmoLineHandleComponent::get_Normal() {
    return (void*)((uintptr_t)this + 0x470);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoLineHandleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent");
    return result;
}
float& _Script_InteractiveToolsFramework::GizmoLineHandleComponent::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x480);
}
float& _Script_InteractiveToolsFramework::GizmoLineHandleComponent::get_HandleSize() {
    return *(float*)((uintptr_t)this + 0x47c);
}
void _Script_InteractiveToolsFramework::GizmoLineHandleComponent::set_bImageScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x494 + 0);
    *(uint8_t*)((uintptr_t)this + 0x494 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::GizmoLineHandleComponent::get_Direction() {
    return (void*)((uintptr_t)this + 0x484);
}
float& _Script_InteractiveToolsFramework::GizmoLineHandleComponent::get_Length() {
    return *(float*)((uintptr_t)this + 0x490);
}
bool _Script_InteractiveToolsFramework::GizmoLineHandleComponent::get_bImageScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x494 + 0)) & 1 != 0;
}
