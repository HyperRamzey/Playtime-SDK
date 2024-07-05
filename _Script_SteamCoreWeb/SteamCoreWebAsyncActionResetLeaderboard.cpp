#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionResetLeaderboard.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionResetLeaderboard::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionResetLeaderboard* _Script_SteamCoreWeb::SteamCoreWebAsyncActionResetLeaderboard::ResetLeaderboardAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t LeaderboardId) {
    return;
}
