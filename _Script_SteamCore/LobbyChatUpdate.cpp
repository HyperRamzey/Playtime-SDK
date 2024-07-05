#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LobbyChatUpdate.hpp"
void* _Script_SteamCore::LobbyChatUpdate::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::LobbyChatUpdate::get_SteamIDUserChanged() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::LobbyChatUpdate::get_SteamIDMakingChange() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::LobbyChatUpdate::get_ChatMemberStateChange() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SteamCore::LobbyChatUpdate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LobbyChatUpdate");
    return result;
}
