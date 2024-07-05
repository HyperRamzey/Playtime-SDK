#include "..\FUObjectArray.hpp"
#include "AdvancedFriendsLibrary.hpp"
#include "BPFriendInfo.hpp"
#include "BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void _Script_AdvancedSessions::AdvancedFriendsLibrary::SendSessionInviteToFriends(_Script_Engine::PlayerController* PlayerController, void*& Friends, void*& Result) {
    return;
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedFriendsLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedFriendsLibrary");
    return result;
}
void _Script_AdvancedSessions::AdvancedFriendsLibrary::SendSessionInviteToFriend(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId& FriendUniqueNetId, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsLibrary::IsAFriend(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId UniqueNetId, bool& IsFriend) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsLibrary::GetStoredRecentPlayersList(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void*& PlayersList) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsLibrary::GetFriend(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId FriendUniqueNetId, _Script_AdvancedSessions::BPFriendInfo& Friend) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsLibrary::GetStoredFriendsList(_Script_Engine::PlayerController* PlayerController, void*& FriendsList) {
    return;
}
