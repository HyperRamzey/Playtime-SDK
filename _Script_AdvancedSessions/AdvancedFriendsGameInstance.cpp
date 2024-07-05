#include "..\FUObjectArray.hpp"
#include "AdvancedFriendsGameInstance.hpp"
#include "BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameInstance.hpp"
#include "..\_Script_OnlineSubsystemUtils\BlueprintSessionResult.hpp"
bool _Script_AdvancedSessions::AdvancedFriendsGameInstance::get_bCallFriendInterfaceEventsOnPlayerControllers() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 1 != 0;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::set_bCallFriendInterfaceEventsOnPlayerControllers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AdvancedSessions::AdvancedFriendsGameInstance::get_bEnableTalkingStatusDelegate() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ab + 0)) & 1 != 0;
}
bool _Script_AdvancedSessions::AdvancedFriendsGameInstance::get_bCallIdentityInterfaceEventsOnPlayerControllers() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a9 + 0)) & 1 != 0;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::set_bCallIdentityInterfaceEventsOnPlayerControllers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AdvancedSessions::AdvancedFriendsGameInstance::get_bCallVoiceInterfaceEventsOnPlayerControllers() {
    return (*(uint8_t*)((uintptr_t)this + 0x1aa + 0)) & 1 != 0;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::set_bCallVoiceInterfaceEventsOnPlayerControllers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::set_bEnableTalkingStatusDelegate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ab + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ab + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedFriendsGameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedFriendsGameInstance");
    return result;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::OnSessionInviteReceived(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInviting, void* AppID, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::OnSessionInviteAccepted(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInvited, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(_Script_AdvancedSessions::BPUniqueNetId PlayerID, bool bIsTalking) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int32_t PlayerNum, void* PreviousStatus, void* NewStatus, _Script_AdvancedSessions::BPUniqueNetId NewPlayerUniqueNetID) {
    return;
}
void _Script_AdvancedSessions::AdvancedFriendsGameInstance::OnPlayerLoginChanged(int32_t PlayerNum) {
    return;
}
