#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoAxisScaleParameterSource.hpp"
#include "GizmoBaseFloatParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_TransformSource() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_ScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_Parameter() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_CurScaleAxis() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::get_CurScaleOrigin() {
    return (void*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoAxisScaleParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource");
    return result;
}
