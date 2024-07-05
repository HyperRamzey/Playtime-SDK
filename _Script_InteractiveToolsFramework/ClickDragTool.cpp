#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClickDragTool.hpp"
#include "InteractiveTool.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::ClickDragTool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.ClickDragTool");
    return result;
}
