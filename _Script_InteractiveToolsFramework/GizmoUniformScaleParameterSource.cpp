#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseVec2ParameterSource.hpp"
#include "GizmoUniformScaleParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_TransformSource() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0x74);
}
float& _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_ScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_Parameter() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_CurScaleOrigin() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_CurScaleNormal() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_CurScaleAxisX() {
    return (void*)((uintptr_t)this + 0x9c);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_CurScaleAxisY() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoUniformScaleParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource");
    return result;
}
