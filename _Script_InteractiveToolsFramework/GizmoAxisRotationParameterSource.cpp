#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoAxisRotationParameterSource.hpp"
#include "GizmoBaseFloatParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::get_AxisSource() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::get_TransformSource() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource");
    return result;
}
float& _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::get_Angle() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::get_InitialTransform() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::get_CurRotationAxis() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_InteractiveToolsFramework::GizmoAxisRotationParameterSource::get_CurRotationOrigin() {
    return (void*)((uintptr_t)this + 0xc8);
}
