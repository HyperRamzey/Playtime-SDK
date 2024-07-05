#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InteractiveTool.hpp"
#include "SingleClickTool.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::SingleClickTool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.SingleClickTool");
    return result;
}
