#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SelectionSet.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::SelectionSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.SelectionSet");
    return result;
}
