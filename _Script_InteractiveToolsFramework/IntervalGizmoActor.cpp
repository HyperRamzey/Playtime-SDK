#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoActor.hpp"
#include "GizmoLineHandleComponent.hpp"
#include "IntervalGizmoActor.hpp"
_Script_InteractiveToolsFramework::GizmoLineHandleComponent*& _Script_InteractiveToolsFramework::IntervalGizmoActor::get_UpIntervalComponent() {
    return *(_Script_InteractiveToolsFramework::GizmoLineHandleComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::IntervalGizmoActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.IntervalGizmoActor");
    return result;
}
_Script_InteractiveToolsFramework::GizmoLineHandleComponent*& _Script_InteractiveToolsFramework::IntervalGizmoActor::get_DownIntervalComponent() {
    return *(_Script_InteractiveToolsFramework::GizmoLineHandleComponent**)((uintptr_t)this + 0x228);
}
_Script_InteractiveToolsFramework::GizmoLineHandleComponent*& _Script_InteractiveToolsFramework::IntervalGizmoActor::get_ForwardIntervalComponent() {
    return *(_Script_InteractiveToolsFramework::GizmoLineHandleComponent**)((uintptr_t)this + 0x230);
}
