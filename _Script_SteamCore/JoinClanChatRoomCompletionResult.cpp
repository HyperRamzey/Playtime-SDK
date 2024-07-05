#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "JoinClanChatRoomCompletionResult.hpp"
void* _Script_SteamCore::JoinClanChatRoomCompletionResult::get_SteamIDClanChat() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::JoinClanChatRoomCompletionResult::get_ChatRoomEnterResponse() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::JoinClanChatRoomCompletionResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.JoinClanChatRoomCompletionResult");
    return result;
}
