#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LobbyInviteData.hpp"
void* _Script_SteamCore::LobbyInviteData::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::LobbyInviteData::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::LobbyInviteData::get_GameID() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::LobbyInviteData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LobbyInviteData");
    return result;
}
