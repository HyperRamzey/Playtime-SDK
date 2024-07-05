#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InputRouter.hpp"
#include "InteractiveGizmoManager.hpp"
#include "InteractiveToolManager.hpp"
#include "InteractiveToolsContext.hpp"
_Script_InteractiveToolsFramework::InputRouter*& _Script_InteractiveToolsFramework::InteractiveToolsContext::get_InputRouter() {
    return *(_Script_InteractiveToolsFramework::InputRouter**)((uintptr_t)this + 0x58);
}
_Script_InteractiveToolsFramework::InteractiveToolManager*& _Script_InteractiveToolsFramework::InteractiveToolsContext::get_ToolManager() {
    return *(_Script_InteractiveToolsFramework::InteractiveToolManager**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InteractiveToolsContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InteractiveToolsContext");
    return result;
}
_Script_InteractiveToolsFramework::InteractiveGizmoManager*& _Script_InteractiveToolsFramework::InteractiveToolsContext::get_GizmoManager() {
    return *(_Script_InteractiveToolsFramework::InteractiveGizmoManager**)((uintptr_t)this + 0x68);
}
void* _Script_InteractiveToolsFramework::InteractiveToolsContext::get_ToolManagerClass() {
    return (void*)((uintptr_t)this + 0x70);
}
