#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InteractiveTool.hpp"
#include "InteractiveToolManager.hpp"
_Script_InteractiveToolsFramework::InteractiveTool*& _Script_InteractiveToolsFramework::InteractiveToolManager::get_ActiveLeftTool() {
    return *(_Script_InteractiveToolsFramework::InteractiveTool**)((uintptr_t)this + 0x30);
}
_Script_InteractiveToolsFramework::InteractiveTool*& _Script_InteractiveToolsFramework::InteractiveToolManager::get_ActiveRightTool() {
    return *(_Script_InteractiveToolsFramework::InteractiveTool**)((uintptr_t)this + 0x38);
}
void* _Script_InteractiveToolsFramework::InteractiveToolManager::get_ToolBuilders() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InteractiveToolManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InteractiveToolManager");
    return result;
}
