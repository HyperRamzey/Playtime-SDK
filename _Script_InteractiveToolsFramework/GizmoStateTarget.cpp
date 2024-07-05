#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "GizmoStateTarget.hpp"
void _Script_InteractiveToolsFramework::GizmoStateTarget::BeginUpdate() {
    return;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoStateTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoStateTarget");
    return result;
}
void _Script_InteractiveToolsFramework::GizmoStateTarget::EndUpdate() {
    return;
}
