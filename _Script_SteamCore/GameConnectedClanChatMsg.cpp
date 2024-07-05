#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameConnectedClanChatMsg.hpp"
void* _Script_SteamCore::GameConnectedClanChatMsg::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GameConnectedClanChatMsg::get_SteamIDClanChat() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::GameConnectedClanChatMsg::get_MessageID() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::GameConnectedClanChatMsg::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameConnectedClanChatMsg");
    return result;
}
