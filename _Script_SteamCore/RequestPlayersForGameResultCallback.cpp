#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RequestPlayersForGameResultCallback.hpp"
void* _Script_SteamCore::RequestPlayersForGameResultCallback::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::RequestPlayersForGameResultCallback::get_TotalPlayersAcceptedGame() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void* _Script_SteamCore::RequestPlayersForGameResultCallback::get_SearchID() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::RequestPlayersForGameResultCallback::get_TotalPlayersFound() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_SteamCore::RequestPlayersForGameResultCallback::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_SteamCore::RequestPlayersForGameResultCallback::get_SteamIDPlayerFound() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::RequestPlayersForGameResultCallback::get_PlayerAcceptState() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SteamCore::RequestPlayersForGameResultCallback::get_PlayerIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_SteamCore::RequestPlayersForGameResultCallback::get_SuggestedTeamIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_SteamCore::RequestPlayersForGameResultCallback::get_UniqueGameID() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_SteamCore::RequestPlayersForGameResultCallback::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RequestPlayersForGameResultCallback");
    return result;
}
