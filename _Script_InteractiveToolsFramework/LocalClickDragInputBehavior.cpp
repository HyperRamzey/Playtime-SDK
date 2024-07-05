#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClickDragInputBehavior.hpp"
#include "LocalClickDragInputBehavior.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::LocalClickDragInputBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior");
    return result;
}
