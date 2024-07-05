#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseVec2ParameterSource.hpp"
#include "GizmoPlaneTranslationParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_TransformSource() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_Parameter() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_CurTranslationAxisX() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_CurTranslationOrigin() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_CurTranslationNormal() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::get_CurTranslationAxisY() {
    return (void*)((uintptr_t)this + 0xec);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoPlaneTranslationParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
    return result;
}
