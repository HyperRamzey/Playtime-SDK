#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerState.hpp"
namespace _Script_Playtime_Multiplayer {
struct MatchRewardsComponent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimePlayerState : public _Script_Engine::PlayerState {
    private: char pad_320[0x60]; public:
    bool get_IsMonster();
    void set_IsMonster(bool value);
    _Script_Playtime_Multiplayer::MatchRewardsComponent*& get_MatchRewardsComponent();
    void* get_TicketRewardableActions();
    int32_t& get_PuzzlesSolved();
    int32_t& get_PlayersRescued();
    int32_t& get_DamageDone();
    int32_t& get_Kills();
    _Script_Engine::DataTable*& get_TicketRewardsTable();
    int32_t& get_EarnedTickets();
    void* get_UserFacingName();
    void* get_AvailableNames();
    static _Script_CoreUObject::Class* static_class();
    void TickPuzzlesSolved();
    void TickPlayersRescued();
    void TickKills();
    void SetEarnedTicketsWithNotify(int32_t AbsoluteValue);
    void OnRep_TicketRewardableActions();
    void OnRep_EarnedTickets();
    void* GetUserFacingName();
    void* GenerateUserFacingName();
    void Client_DisplayTicketCollectionNotification(void*& NotificationText, int32_t TicketsReward);
    void BP_OnRep_EarnedTickets();
    void BP_DisplayTicketCollectionNotification(void*& NotificationText, int32_t TicketsReward);
    void AddToDamageDone(int32_t Amount);
}; // Size: 0x380
#pragma pack(pop)
}
