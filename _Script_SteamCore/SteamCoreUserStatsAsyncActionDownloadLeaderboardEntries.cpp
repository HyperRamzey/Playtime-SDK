#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LeaderboardScoresDownloaded.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.hpp"
#include "SteamLeaderboard.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries");
    return result;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::HandleCallback(_Script_SteamCore::LeaderboardScoresDownloaded& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* Request, int32_t RangeStart, int32_t RangeEnd, float Timeout) {
    return;
}
