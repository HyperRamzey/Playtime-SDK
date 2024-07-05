#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoWorldAxisSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoWorldAxisSource::get_Origin() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_InteractiveToolsFramework::GizmoWorldAxisSource::get_AxisIndex() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoWorldAxisSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource");
    return result;
}
