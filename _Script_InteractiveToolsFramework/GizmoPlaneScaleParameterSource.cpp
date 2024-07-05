#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseVec2ParameterSource.hpp"
#include "GizmoPlaneScaleParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_TransformSource() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_ScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_Parameter() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_CurScaleOrigin() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_CurScaleNormal() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_CurScaleAxisX() {
    return (void*)((uintptr_t)this + 0xe4);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
    return result;
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_CurScaleAxisY() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneScaleParameterSource::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0x100);
}
