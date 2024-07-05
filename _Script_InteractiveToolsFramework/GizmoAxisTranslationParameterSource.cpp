#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoAxisTranslationParameterSource.hpp"
#include "GizmoBaseFloatParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::get_TransformSource() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::get_Parameter() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::get_CurTranslationAxis() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::get_CurTranslationOrigin() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
    return result;
}
void* _Script_InteractiveToolsFramework::GizmoAxisTranslationParameterSource::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0xe0);
}
