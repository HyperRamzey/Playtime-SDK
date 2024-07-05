#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LobbyChatMsg.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::LobbyChatMsg::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LobbyChatMsg");
    return result;
}
void* _Script_SteamCore::LobbyChatMsg::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::LobbyChatMsg::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::LobbyChatMsg::get_ChatEntryType() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SteamCore::LobbyChatMsg::get_ChatID() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
