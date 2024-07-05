#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "GizmoBaseComponent.hpp"
void _Script_InteractiveToolsFramework::GizmoBaseComponent::UpdateHoverState(bool bHoveringIn) {
    return;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoBaseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoBaseComponent");
    return result;
}
void* _Script_InteractiveToolsFramework::GizmoBaseComponent::get_Color() {
    return (void*)((uintptr_t)this + 0x450);
}
void _Script_InteractiveToolsFramework::GizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn) {
    return;
}
float& _Script_InteractiveToolsFramework::GizmoBaseComponent::get_HoverSizeMultiplier() {
    return *(float*)((uintptr_t)this + 0x460);
}
float& _Script_InteractiveToolsFramework::GizmoBaseComponent::get_PixelHitDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x464);
}
