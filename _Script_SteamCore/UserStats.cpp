#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamLeaderboard.hpp"
#include "SteamLeaderboardEntries.hpp"
#include "SteamLeaderboardEntry.hpp"
#include "SteamUGCHandle.hpp"
#include "UserStats.hpp"
void _Script_SteamCore::UserStats::UploadLeaderboardScore(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* UploadScoreMethod, int32_t Score, void* ScoreDetails) {
    return;
}
void _Script_SteamCore::UserStats::FindLeaderboard(void*& Callback, void* LeaderboardName) {
    return;
}
void* _Script_SteamCore::UserStats::get_UserAchievementIconFetched() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::UserStats::get_UserStatsReceived() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::UserStats::get_UserAchievementStored() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCore::UserStats::get_UserStatsStored() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SteamCore::UserStats::get_UserStatsUnloaded() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_SteamCore::UserStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.UserStats");
    return result;
}
bool _Script_SteamCore::UserStats::UpdateAvgRateStat(void* Name, float CountThisSession, float SessionLength) {
    return;
}
bool _Script_SteamCore::UserStats::StoreStats() {
    return;
}
bool _Script_SteamCore::UserStats::SetStatInt(void* Name, int32_t Data) {
    return;
}
bool _Script_SteamCore::UserStats::SetStatFloat(void* Name, float Data) {
    return;
}
void _Script_SteamCore::UserStats::AttachLeaderboardUGC(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, _Script_SteamCore::SteamUGCHandle Handle) {
    return;
}
bool _Script_SteamCore::UserStats::SetAchievement(void* Name) {
    return;
}
bool _Script_SteamCore::UserStats::ResetAllStats(bool bAchievementsToo) {
    return;
}
void _Script_SteamCore::UserStats::RequestUserStats(void*& Callback, _Script_SteamCore::SteamID SteamID) {
    return;
}
void _Script_SteamCore::UserStats::FindOrCreateLeaderboard(void*& Callback, void* LeaderboardName, void* SortMethod, void* DisplayType) {
    return;
}
void _Script_SteamCore::UserStats::RequestGlobalStats(void*& Callback, int32_t HistoryDays) {
    return;
}
void _Script_SteamCore::UserStats::RequestGlobalAchievementPercentages(void*& Callback) {
    return;
}
bool _Script_SteamCore::UserStats::RequestCurrentStats() {
    return;
}
bool _Script_SteamCore::UserStats::IndicateAchievementProgress(void* Name, int32_t CurrentProgress, int32_t MaxProgress) {
    return;
}
bool _Script_SteamCore::UserStats::GetUserStatInteger(_Script_SteamCore::SteamID SteamIDUser, void* Name, int32_t& Data) {
    return;
}
bool _Script_SteamCore::UserStats::GetUserStatFloat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float& Data) {
    return;
}
int32_t _Script_SteamCore::UserStats::GetGlobalStatHistoryFloat(void* StatName, int32_t HistoryDays, void*& Data) {
    return;
}
bool _Script_SteamCore::UserStats::GetUserAchievementAndUnlockTime(_Script_SteamCore::SteamID SteamIDUser, void* Name, bool& bAchieved, int32_t& UnlockTime) {
    return;
}
bool _Script_SteamCore::UserStats::GetUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name, bool& bAchieved) {
    return;
}
void _Script_SteamCore::UserStats::DownloadLeaderboardEntries(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* DataRequest, int32_t RangeStart, int32_t RangeEnd) {
    return;
}
void* _Script_SteamCore::UserStats::GetLeaderboardSortMethod(_Script_SteamCore::SteamLeaderboard SteamLeaderboard) {
    return;
}
bool _Script_SteamCore::UserStats::GetStatInt(void* Name, int32_t& Data) {
    return;
}
bool _Script_SteamCore::UserStats::GetStatFloat(void* Name, float& Data) {
    return;
}
void _Script_SteamCore::UserStats::GetNumberOfCurrentPlayers(void*& Callback) {
    return;
}
int32_t _Script_SteamCore::UserStats::GetNumAchievements() {
    return;
}
bool _Script_SteamCore::UserStats::GetAchievementAchievedPercent(void* Name, float& Percent) {
    return;
}
int32_t _Script_SteamCore::UserStats::GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, void*& Name, float& Percent, bool& bAchieved) {
    return;
}
bool _Script_SteamCore::UserStats::GetAchievementProgressLimitsFloat(void* Name, float& MinProgress, float& MaxProgress) {
    return;
}
int32_t _Script_SteamCore::UserStats::GetMostAchievedAchievementInfo(void*& Name, float& Percent, bool& bAchieved) {
    return;
}
void* _Script_SteamCore::UserStats::GetLeaderboardName(_Script_SteamCore::SteamLeaderboard SteamLeaderboard) {
    return;
}
int32_t _Script_SteamCore::UserStats::GetLeaderboardEntryCount(_Script_SteamCore::SteamLeaderboard SteamLeaderboard) {
    return;
}
void* _Script_SteamCore::UserStats::GetAchievementDisplayAttribute(void* Name, void* Key) {
    return;
}
void* _Script_SteamCore::UserStats::GetLeaderboardDisplayType(_Script_SteamCore::SteamLeaderboard SteamLeaderboard) {
    return;
}
bool _Script_SteamCore::UserStats::GetGlobalStatInt(void* StatName, int32_t& Data) {
    return;
}
int32_t _Script_SteamCore::UserStats::GetGlobalStatHistoryInt(void* StatName, int32_t HistoryDays, void*& Data) {
    return;
}
bool _Script_SteamCore::UserStats::GetGlobalStatFloat(void* StatName, float& Data) {
    return;
}
bool _Script_SteamCore::UserStats::GetDownloadedLeaderboardEntry(_Script_SteamCore::SteamLeaderboardEntries LeaderboardEntries, int32_t Index, _Script_SteamCore::SteamLeaderboardEntry& LeaderboardEntry, void* Details, void*& outDetails) {
    return;
}
bool _Script_SteamCore::UserStats::GetAchievementProgressLimits(void* Name, int32_t& MinProgress, int32_t& MaxProgress) {
    return;
}
void* _Script_SteamCore::UserStats::GetAchievementName(int32_t Achievement) {
    return;
}
_Script_Engine::Texture2D* _Script_SteamCore::UserStats::GetAchievementIcon(void* Name) {
    return;
}
bool _Script_SteamCore::UserStats::GetAchievementAndUnlockTime(void* Name, bool& bAchieved, int32_t& UnlockTime) {
    return;
}
bool _Script_SteamCore::UserStats::GetAchievement(void* Name, bool& bAchieved) {
    return;
}
void _Script_SteamCore::UserStats::DownloadLeaderboardEntriesForUsers(void*& Callback, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* Users) {
    return;
}
bool _Script_SteamCore::UserStats::ClearAchievement(void* Name) {
    return;
}
