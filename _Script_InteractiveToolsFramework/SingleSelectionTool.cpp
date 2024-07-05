#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InteractiveTool.hpp"
#include "SingleSelectionTool.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::SingleSelectionTool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.SingleSelectionTool");
    return result;
}
