#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LobbyGameCreated.hpp"
int32_t& _Script_SteamCore::LobbyGameCreated::get_Port() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_SteamCore::LobbyGameCreated::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::LobbyGameCreated::get_SteamIDGameServer() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::LobbyGameCreated::get_IP() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::LobbyGameCreated::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LobbyGameCreated");
    return result;
}
