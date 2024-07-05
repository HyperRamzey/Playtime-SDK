#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct StatsCoreFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    private: char pad_28[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void UpdateCalculations();
    void IncrementRandomStat(float Amount, void* Stat);
    void IncrementPlayerStat(float Amount, void* Stat);
    void IncrementMommyStat(float Amount, void* Stat);
    void IncrementHuggyStat(float Amount, void* Stat);
    void IncrementBoxyStat(float Amount, void* Stat);
    void* GetStatistics(void* Category);
    void GetStatisticNames(void* Category, void*& Names);
    float GetStat(void* Category, void* StatisticName);
    float GetRandomStatF(void* Stat);
    void* GetRandomStat(void* Stat);
    float GetPlayerStatF(void* Stat);
    void* GetPlayerStat(void* Stat);
    float GetMonsterStatF(void* Stat);
    void* GetMonsterStat(void* Stat);
    float GetMommyStatF(void* Stat);
    void* GetMommyStat(void* Stat);
    float GetHuggyStatF(void* Stat);
    void* GetHuggyStat(void* Stat);
    float GetGeneralStatF(void* Stat);
    void* GetGeneralStat(void* Stat);
    void GetCategories(void*& Names, void*& Categories);
    float GetBoxyStatF(void* Stat);
    void* GetBoxyStat(void* Stat);
}; // Size: 0x38
#pragma pack(pop)
}
