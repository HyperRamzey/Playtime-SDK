#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebUserStats : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void SetUserStatsForGame(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* Names, void* Values);
    void GetUserStatsForGame(void*& Callback, void* Key, void* SteamID, int32_t AppID);
    void GetSchemaForGame(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* Language);
    void GetPlayerAchievements(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* Language);
    void GetNumberOfCurrentPlayers(void*& Callback, int32_t AppID);
    void GetGlobalStatsForGame(void*& Callback, int32_t AppID, void* Names, int32_t StartDate, int32_t EndDate);
    void GetGlobalAchievementPercentagesForApp(void*& Callback, void* GameID);
}; // Size: 0x48
#pragma pack(pop)
}
