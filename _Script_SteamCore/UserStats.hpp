#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamLeaderboard.hpp"
#include "SteamLeaderboardEntries.hpp"
#include "SteamUGCHandle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct SteamLeaderboardEntry;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct UserStats : public SteamCoreSubsystem {
    private: char pad_48[0xf0]; public:
    void* get_UserAchievementIconFetched();
    void* get_UserAchievementStored();
    void* get_UserStatsReceived();
    void* get_UserStatsStored();
    void* get_UserStatsUnloaded();
    static _Script_CoreUObject::Class* static_class();
    void UploadLeaderboardScore(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* UploadScoreMethod, int32_t Score, void* ScoreDetails);
    bool UpdateAvgRateStat(void* Name, float CountThisSession, float SessionLength);
    bool StoreStats();
    bool SetStatInt(void* Name, int32_t Data);
    bool SetStatFloat(void* Name, float Data);
    bool SetAchievement(void* Name);
    bool ResetAllStats(bool bAchievementsToo);
    void RequestUserStats(void*& Callback, _Script_SteamCore::SteamID SteamID);
    void RequestGlobalStats(void*& Callback, int32_t HistoryDays);
    void RequestGlobalAchievementPercentages(void*& Callback);
    bool RequestCurrentStats();
    bool IndicateAchievementProgress(void* Name, int32_t CurrentProgress, int32_t MaxProgress);
    bool GetUserStatInteger(_Script_SteamCore::SteamID SteamIDUser, void* Name, int32_t& Data);
    bool GetUserStatFloat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float& Data);
    bool GetUserAchievementAndUnlockTime(_Script_SteamCore::SteamID SteamIDUser, void* Name, bool& bAchieved, int32_t& UnlockTime);
    bool GetUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name, bool& bAchieved);
    bool GetStatInt(void* Name, int32_t& Data);
    bool GetStatFloat(void* Name, float& Data);
    void GetNumberOfCurrentPlayers(void*& Callback);
    int32_t GetNumAchievements();
    int32_t GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, void*& Name, float& Percent, bool& bAchieved);
    int32_t GetMostAchievedAchievementInfo(void*& Name, float& Percent, bool& bAchieved);
    void* GetLeaderboardSortMethod(_Script_SteamCore::SteamLeaderboard SteamLeaderboard);
    void* GetLeaderboardName(_Script_SteamCore::SteamLeaderboard SteamLeaderboard);
    int32_t GetLeaderboardEntryCount(_Script_SteamCore::SteamLeaderboard SteamLeaderboard);
    void* GetLeaderboardDisplayType(_Script_SteamCore::SteamLeaderboard SteamLeaderboard);
    bool GetGlobalStatInt(void* StatName, int32_t& Data);
    int32_t GetGlobalStatHistoryInt(void* StatName, int32_t HistoryDays, void*& Data);
    int32_t GetGlobalStatHistoryFloat(void* StatName, int32_t HistoryDays, void*& Data);
    bool GetGlobalStatFloat(void* StatName, float& Data);
    bool GetDownloadedLeaderboardEntry(_Script_SteamCore::SteamLeaderboardEntries LeaderboardEntries, int32_t Index, _Script_SteamCore::SteamLeaderboardEntry& LeaderboardEntry, void* Details, void*& outDetails);
    bool GetAchievementProgressLimitsFloat(void* Name, float& MinProgress, float& MaxProgress);
    bool GetAchievementProgressLimits(void* Name, int32_t& MinProgress, int32_t& MaxProgress);
    void* GetAchievementName(int32_t Achievement);
    _Script_Engine::Texture2D* GetAchievementIcon(void* Name);
    void* GetAchievementDisplayAttribute(void* Name, void* Key);
    bool GetAchievementAndUnlockTime(void* Name, bool& bAchieved, int32_t& UnlockTime);
    bool GetAchievementAchievedPercent(void* Name, float& Percent);
    bool GetAchievement(void* Name, bool& bAchieved);
    void FindOrCreateLeaderboard(void*& Callback, void* LeaderboardName, void* SortMethod, void* DisplayType);
    void FindLeaderboard(void*& Callback, void* LeaderboardName);
    void DownloadLeaderboardEntriesForUsers(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* Users);
    void DownloadLeaderboardEntries(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* DataRequest, int32_t RangeStart, int32_t RangeEnd);
    bool ClearAchievement(void* Name);
    void AttachLeaderboardUGC(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, _Script_SteamCore::SteamUGCHandle Handle);
}; // Size: 0x138
#pragma pack(pop)
}
