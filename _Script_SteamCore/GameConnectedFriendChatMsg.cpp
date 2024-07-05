#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameConnectedFriendChatMsg.hpp"
void* _Script_SteamCore::GameConnectedFriendChatMsg::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::GameConnectedFriendChatMsg::get_MessageID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::GameConnectedFriendChatMsg::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameConnectedFriendChatMsg");
    return result;
}
