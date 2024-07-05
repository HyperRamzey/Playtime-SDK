#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputRayHit.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InputRayHit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/InteractiveToolsFramework.InputRayHit");
    return result;
}
