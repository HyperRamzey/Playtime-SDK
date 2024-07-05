#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LeaderboardFindResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionFindLeaderboard.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionFindLeaderboard::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionFindLeaderboard::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard");
    return result;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionFindLeaderboard::HandleCallback(_Script_SteamCore::LeaderboardFindResult& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionFindLeaderboard* _Script_SteamCore::SteamCoreUserStatsAsyncActionFindLeaderboard::FindLeaderboardAsync(_Script_CoreUObject::Object* WorldContextObject, void* LeaderboardName, float Timeout) {
    return;
}
