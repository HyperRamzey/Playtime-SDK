#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamServersConnected.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamServersConnected::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamServersConnected");
    return result;
}
