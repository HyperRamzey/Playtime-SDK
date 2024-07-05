#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActiveGizmo.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::ActiveGizmo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/InteractiveToolsFramework.ActiveGizmo");
    return result;
}
