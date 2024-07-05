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
struct WebLeaderboards : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void SetLeaderboardScore(void*& Callback, void* Key, int32_t AppID, int32_t LeaderbordId, void* SteamID, int32_t Score, void* Details, void* ScoreMethod);
    void ResetLeaderboard(void*& Callback, void* Key, int32_t AppID, int32_t LeaderboardId);
    void GetLeaderboardsForGame(void*& Callback, void* Key, int32_t AppID);
    void GetLeaderboardEntries(void*& Callback, void* Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, void* SteamID);
    void FindOrCreateLeaderboard(void*& Callback, void* Key, int32_t AppID, void* Name, void* SortMethod, void* DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    void DeleteLeaderboard(void*& Callback, void* Key, int32_t AppID, void* Name);
}; // Size: 0x48
#pragma pack(pop)
}
