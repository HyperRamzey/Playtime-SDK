#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAnalogActionHandle.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::InputAnalogActionHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.InputAnalogActionHandle");
    return result;
}
