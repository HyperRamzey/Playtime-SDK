#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoAxisIntervalParameterSource.hpp"
#include "GizmoBaseFloatParameterSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoAxisIntervalParameterSource::get_FloatParameterSource() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_InteractiveToolsFramework::GizmoAxisIntervalParameterSource::get_MinParameter() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_InteractiveToolsFramework::GizmoAxisIntervalParameterSource::get_MaxParameter() {
    return *(float*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoAxisIntervalParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
    return result;
}
