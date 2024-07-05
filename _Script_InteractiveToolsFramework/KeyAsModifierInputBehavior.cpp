#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputBehavior.hpp"
#include "KeyAsModifierInputBehavior.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::KeyAsModifierInputBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior");
    return result;
}
