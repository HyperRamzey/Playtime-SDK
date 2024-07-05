#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoArrowComponent.hpp"
#include "GizmoBaseComponent.hpp"
void* _Script_InteractiveToolsFramework::GizmoArrowComponent::get_Direction() {
    return (void*)((uintptr_t)this + 0x470);
}
float& _Script_InteractiveToolsFramework::GizmoArrowComponent::get_Gap() {
    return *(float*)((uintptr_t)this + 0x47c);
}
float& _Script_InteractiveToolsFramework::GizmoArrowComponent::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x484);
}
float& _Script_InteractiveToolsFramework::GizmoArrowComponent::get_Length() {
    return *(float*)((uintptr_t)this + 0x480);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoArrowComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoArrowComponent");
    return result;
}
