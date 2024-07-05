#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "TicketRewardableAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct TicketSaveGame;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Playtime_Multiplayer {
struct TicketReward;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct TicketFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void TryPurchaseItemWithTickets(int32_t PriceOfItem, bool& Success);
    bool SaveTicketSaveGame(_Script_Playtime_Multiplayer::TicketSaveGame* TicketSaveGame);
    _Script_Playtime_Multiplayer::TicketSaveGame* LoadTicketSaveGame();
    void* GetTicketSaveGameSlotName();
    int32_t CalculateTicketRewardFromEntries(_Script_Engine::DataTable* TicketRewardsDataTable, _Script_Playtime_Multiplayer::TicketRewardableAction TicketRewardableAction, _Script_Playtime_Multiplayer::TicketReward& Out_Reward);
}; // Size: 0x28
#pragma pack(pop)
}
