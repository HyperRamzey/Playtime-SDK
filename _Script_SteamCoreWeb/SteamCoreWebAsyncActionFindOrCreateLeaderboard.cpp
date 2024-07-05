#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionFindOrCreateLeaderboard.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionFindOrCreateLeaderboard::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionFindOrCreateLeaderboard* _Script_SteamCoreWeb::SteamCoreWebAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* Name, void* SortMethod, void* DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads) {
    return;
}
