#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebLeaderboards.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebLeaderboards::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebLeaderboards");
    return result;
}
void _Script_SteamCoreWeb::WebLeaderboards::GetLeaderboardEntries(void*& Callback, void* Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebLeaderboards::SetLeaderboardScore(void*& Callback, void* Key, int32_t AppID, int32_t LeaderbordId, void* SteamID, int32_t Score, void* Details, void* ScoreMethod) {
    return;
}
void _Script_SteamCoreWeb::WebLeaderboards::ResetLeaderboard(void*& Callback, void* Key, int32_t AppID, int32_t LeaderboardId) {
    return;
}
void _Script_SteamCoreWeb::WebLeaderboards::GetLeaderboardsForGame(void*& Callback, void* Key, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebLeaderboards::DeleteLeaderboard(void*& Callback, void* Key, int32_t AppID, void* Name) {
    return;
}
void _Script_SteamCoreWeb::WebLeaderboards::FindOrCreateLeaderboard(void*& Callback, void* Key, int32_t AppID, void* Name, void* SortMethod, void* DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads) {
    return;
}
