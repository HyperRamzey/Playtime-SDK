#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamRemotePlaySessionConnected.hpp"
int32_t& _Script_SteamCore::SteamRemotePlaySessionConnected::get_SessionID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamRemotePlaySessionConnected::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamRemotePlaySessionConnected");
    return result;
}
