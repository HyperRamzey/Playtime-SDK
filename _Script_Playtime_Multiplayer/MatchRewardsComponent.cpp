#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "MatchPointsCriterionDef.hpp"
#include "MatchRewardsComponent.hpp"
int32_t _Script_Playtime_Multiplayer::MatchRewardsComponent::GetCountofAction(void* Action) {
    return;
}
void* _Script_Playtime_Multiplayer::MatchRewardsComponent::get_RewardableActionsArray() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MatchRewardsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MatchRewardsComponent");
    return result;
}
void* _Script_Playtime_Multiplayer::MatchRewardsComponent::GetRewardableActions() {
    return;
}
void _Script_Playtime_Multiplayer::MatchRewardsComponent::WriteResultsToFile(void*& Results) {
    return;
}
_Script_Playtime_Multiplayer::MatchPointsCriterionDef _Script_Playtime_Multiplayer::MatchRewardsComponent::LookupActionRow(void* Action) {
    return;
}
int32_t _Script_Playtime_Multiplayer::MatchRewardsComponent::GetTotalTickets() {
    return;
}
float _Script_Playtime_Multiplayer::MatchRewardsComponent::GetTotalPoints() {
    return;
}
void _Script_Playtime_Multiplayer::MatchRewardsComponent::AddPoints(void* Action) {
    return;
}
