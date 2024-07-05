#include "..\FUObjectArray.hpp"
#include "AdvancedFriendsInterface.hpp"
#include "BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_OnlineSubsystemUtils\BlueprintSessionResult.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedFriendsInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedFriendsInterface");
    return result;
}
void _Script_AdvancedSessions::AdvancedFriendsInterface::OnPlayerVoiceStateChanged(_Script_AdvancedSessions::BPUniqueNetId PlayerID, bool bIsTalking) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsInterface::OnSessionInviteReceived(_Script_AdvancedSessions::BPUniqueNetId PersonInviting, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SearchResult) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsInterface::OnPlayerLoginStatusChanged(void* PreviousStatus, void* NewStatus, _Script_AdvancedSessions::BPUniqueNetId PlayerUniqueNetID) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsInterface::OnSessionInviteAccepted(_Script_AdvancedSessions::BPUniqueNetId PersonInvited, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SearchResult) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsInterface::OnPlayerLoginChanged(int32_t PlayerNum) {
    return;
}
