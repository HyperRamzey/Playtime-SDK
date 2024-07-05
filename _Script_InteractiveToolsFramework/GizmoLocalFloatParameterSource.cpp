#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseFloatParameterSource.hpp"
#include "GizmoLocalFloatParameterSource.hpp"
float& _Script_InteractiveToolsFramework::GizmoLocalFloatParameterSource::get_Value() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoLocalFloatParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource");
    return result;
}
void* _Script_InteractiveToolsFramework::GizmoLocalFloatParameterSource::get_LastChange() {
    return (void*)((uintptr_t)this + 0x4c);
}
