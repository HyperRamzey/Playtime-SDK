#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LeaderboardScoresDownloadedForUsers.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.hpp"
#include "SteamLeaderboard.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers");
    return result;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* Users, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::HandleCallback(_Script_SteamCore::LeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful) {
    return;
}
