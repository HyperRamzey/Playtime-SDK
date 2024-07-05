#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseComponent.hpp"
#include "GizmoRectangleComponent.hpp"
void* _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_SegmentFlags() {
    return (void*)((uintptr_t)this + 0x49c);
}
float& _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_LengthY() {
    return *(float*)((uintptr_t)this + 0x494);
}
float& _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_OffsetX() {
    return *(float*)((uintptr_t)this + 0x488);
}
void* _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_DirectionX() {
    return (void*)((uintptr_t)this + 0x470);
}
float& _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_LengthX() {
    return *(float*)((uintptr_t)this + 0x490);
}
void* _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_DirectionY() {
    return (void*)((uintptr_t)this + 0x47c);
}
float& _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_OffsetY() {
    return *(float*)((uintptr_t)this + 0x48c);
}
float& _Script_InteractiveToolsFramework::GizmoRectangleComponent::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x498);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoRectangleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoRectangleComponent");
    return result;
}
