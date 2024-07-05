#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoTransformChangeStateTarget.hpp"
void* _Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget::get_TransactionManager() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget");
    return result;
}
