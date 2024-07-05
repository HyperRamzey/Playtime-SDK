#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamTicketHandle.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamTicketHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamTicketHandle");
    return result;
}
