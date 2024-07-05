#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "TicketFunctionLibrary.hpp"
#include "TicketReward.hpp"
#include "TicketRewardableAction.hpp"
#include "TicketSaveGame.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::TicketFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.TicketFunctionLibrary");
    return result;
}
void _Script_Playtime_Multiplayer::TicketFunctionLibrary::TryPurchaseItemWithTickets(int32_t PriceOfItem, bool& Success) {
    return;
}
bool _Script_Playtime_Multiplayer::TicketFunctionLibrary::SaveTicketSaveGame(_Script_Playtime_Multiplayer::TicketSaveGame* TicketSaveGame) {
    return;
}
_Script_Playtime_Multiplayer::TicketSaveGame* _Script_Playtime_Multiplayer::TicketFunctionLibrary::LoadTicketSaveGame() {
    return;
}
void* _Script_Playtime_Multiplayer::TicketFunctionLibrary::GetTicketSaveGameSlotName() {
    return;
}
int32_t _Script_Playtime_Multiplayer::TicketFunctionLibrary::CalculateTicketRewardFromEntries(_Script_Engine::DataTable* TicketRewardsDataTable, _Script_Playtime_Multiplayer::TicketRewardableAction TicketRewardableAction, _Script_Playtime_Multiplayer::TicketReward& Out_Reward) {
    return;
}
