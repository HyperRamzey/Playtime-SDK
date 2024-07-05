#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "MatchRewardsComponent.hpp"
#include "PlaytimePlayerState.hpp"
void* _Script_Playtime_Multiplayer::PlaytimePlayerState::get_TicketRewardableActions() {
    return (void*)((uintptr_t)this + 0x330);
}
bool _Script_Playtime_Multiplayer::PlaytimePlayerState::get_IsMonster() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::PlaytimePlayerState::get_UserFacingName() {
    return (void*)((uintptr_t)this + 0x360);
}
int32_t& _Script_Playtime_Multiplayer::PlaytimePlayerState::get_PuzzlesSolved() {
    return *(int32_t*)((uintptr_t)this + 0x340);
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::set_IsMonster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::MatchRewardsComponent*& _Script_Playtime_Multiplayer::PlaytimePlayerState::get_MatchRewardsComponent() {
    return *(_Script_Playtime_Multiplayer::MatchRewardsComponent**)((uintptr_t)this + 0x328);
}
int32_t& _Script_Playtime_Multiplayer::PlaytimePlayerState::get_PlayersRescued() {
    return *(int32_t*)((uintptr_t)this + 0x344);
}
int32_t& _Script_Playtime_Multiplayer::PlaytimePlayerState::get_Kills() {
    return *(int32_t*)((uintptr_t)this + 0x34c);
}
int32_t& _Script_Playtime_Multiplayer::PlaytimePlayerState::get_DamageDone() {
    return *(int32_t*)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimePlayerState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimePlayerState");
    return result;
}
_Script_Engine::DataTable*& _Script_Playtime_Multiplayer::PlaytimePlayerState::get_TicketRewardsTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x350);
}
int32_t& _Script_Playtime_Multiplayer::PlaytimePlayerState::get_EarnedTickets() {
    return *(int32_t*)((uintptr_t)this + 0x358);
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::Client_DisplayTicketCollectionNotification(void*& NotificationText, int32_t TicketsReward) {
    return;
}
void* _Script_Playtime_Multiplayer::PlaytimePlayerState::get_AvailableNames() {
    return (void*)((uintptr_t)this + 0x370);
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::TickPuzzlesSolved() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::TickPlayersRescued() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::BP_OnRep_EarnedTickets() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::TickKills() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::SetEarnedTicketsWithNotify(int32_t AbsoluteValue) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::OnRep_EarnedTickets() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::OnRep_TicketRewardableActions() {
    return;
}
void* _Script_Playtime_Multiplayer::PlaytimePlayerState::GetUserFacingName() {
    return;
}
void* _Script_Playtime_Multiplayer::PlaytimePlayerState::GenerateUserFacingName() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::BP_DisplayTicketCollectionNotification(void*& NotificationText, int32_t TicketsReward) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerState::AddToDamageDone(int32_t Amount) {
    return;
}
