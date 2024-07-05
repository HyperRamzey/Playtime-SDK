#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameConnectedChatJoin.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::GameConnectedChatJoin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameConnectedChatJoin");
    return result;
}
void* _Script_SteamCore::GameConnectedChatJoin::get_SteamIDClanChat() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GameConnectedChatJoin::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x8);
}
