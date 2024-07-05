#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionSetLeaderboardScore.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSetLeaderboardScore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionSetLeaderboardScore* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSetLeaderboardScore::SetLeaderboardScoreAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t LeaderboardId, void* SteamID, int32_t Score, void* Details, void* ScoreMethod) {
    return;
}
