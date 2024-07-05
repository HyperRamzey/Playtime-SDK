#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoConstantFrameAxisSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource::get_Origin() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource::get_Direction() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource::get_TangentX() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource");
    return result;
}
void* _Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource::get_TangentY() {
    return (void*)((uintptr_t)this + 0x54);
}
