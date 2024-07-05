#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameLobbyJoinRequested.hpp"
void* _Script_SteamCore::GameLobbyJoinRequested::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GameLobbyJoinRequested::get_SteamIDFriend() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::GameLobbyJoinRequested::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameLobbyJoinRequested");
    return result;
}
