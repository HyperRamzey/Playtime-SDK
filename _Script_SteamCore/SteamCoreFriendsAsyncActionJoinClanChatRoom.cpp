#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "JoinClanChatRoomCompletionResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionJoinClanChatRoom.hpp"
#include "SteamID.hpp"
void _Script_SteamCore::SteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(_Script_SteamCore::JoinClanChatRoomCompletionResult& Data, bool bWasSuccessful) {
    return;
}
void* _Script_SteamCore::SteamCoreFriendsAsyncActionJoinClanChatRoom::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionJoinClanChatRoom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom");
    return result;
}
_Script_SteamCore::SteamCoreFriendsAsyncActionJoinClanChatRoom* _Script_SteamCore::SteamCoreFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamIDClan, float Timeout) {
    return;
}
