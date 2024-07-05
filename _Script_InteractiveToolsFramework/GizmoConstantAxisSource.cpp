#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoConstantAxisSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoConstantAxisSource::get_Origin() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_InteractiveToolsFramework::GizmoConstantAxisSource::get_Direction() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoConstantAxisSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource");
    return result;
}
