#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "ToolFrameworkComponent.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::ToolFrameworkComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.ToolFrameworkComponent");
    return result;
}
