#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FindOrCreateLeaderboardData.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard");
    return result;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::HandleCallback(_Script_SteamCore::FindOrCreateLeaderboardData& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* _Script_SteamCore::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(_Script_CoreUObject::Object* WorldContextObject, void* LeaderboardName, void* SortMethod, void* DisplayType, float Timeout) {
    return;
}
