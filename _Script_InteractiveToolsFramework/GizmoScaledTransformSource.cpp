#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseTransformSource.hpp"
#include "GizmoScaledTransformSource.hpp"
void* _Script_InteractiveToolsFramework::GizmoScaledTransformSource::get_ChildTransformSource() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoScaledTransformSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource");
    return result;
}
