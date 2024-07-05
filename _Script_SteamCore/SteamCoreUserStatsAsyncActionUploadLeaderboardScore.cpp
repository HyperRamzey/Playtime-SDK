#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LeaderboardScoreUploaded.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionUploadLeaderboardScore.hpp"
#include "SteamLeaderboard.hpp"
void _Script_SteamCore::SteamCoreUserStatsAsyncActionUploadLeaderboardScore::HandleCallback(_Script_SteamCore::LeaderboardScoreUploaded& Data, bool bWasSuccessful) {
    return;
}
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionUploadLeaderboardScore::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionUploadLeaderboardScore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore");
    return result;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionUploadLeaderboardScore* _Script_SteamCore::SteamCoreUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, void* UploadScoreMethod, int32_t Score, void* ScoreDetails, float Timeout) {
    return;
}
