#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InteractiveToolBuilder.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InteractiveToolBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InteractiveToolBuilder");
    return result;
}
