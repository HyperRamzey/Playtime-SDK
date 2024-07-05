#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InputBehaviorSet.hpp"
#include "InteractiveTool.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InteractiveTool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InteractiveTool");
    return result;
}
void* _Script_InteractiveToolsFramework::InteractiveTool::get_ToolPropertyObjects() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_InteractiveToolsFramework::InputBehaviorSet*& _Script_InteractiveToolsFramework::InteractiveTool::get_InputBehaviors() {
    return *(_Script_InteractiveToolsFramework::InputBehaviorSet**)((uintptr_t)this + 0x48);
}
