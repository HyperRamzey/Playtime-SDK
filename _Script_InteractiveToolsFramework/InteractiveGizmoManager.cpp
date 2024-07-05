#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InteractiveGizmoManager.hpp"
void* _Script_InteractiveToolsFramework::InteractiveGizmoManager::get_ActiveGizmos() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_InteractiveToolsFramework::InteractiveGizmoManager::get_GizmoBuilders() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InteractiveGizmoManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InteractiveGizmoManager");
    return result;
}
