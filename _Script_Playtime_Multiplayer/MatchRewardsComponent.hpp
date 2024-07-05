#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
#include "MatchPointsCriterionDef.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MatchRewardsComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x10]; public:
    void* get_RewardableActionsArray();
    static _Script_CoreUObject::Class* static_class();
    void WriteResultsToFile(void*& Results);
    _Script_Playtime_Multiplayer::MatchPointsCriterionDef LookupActionRow(void* Action);
    int32_t GetTotalTickets();
    float GetTotalPoints();
    void* GetRewardableActions();
    int32_t GetCountofAction(void* Action);
    void AddPoints(void* Action);
}; // Size: 0xc0
#pragma pack(pop)
}
