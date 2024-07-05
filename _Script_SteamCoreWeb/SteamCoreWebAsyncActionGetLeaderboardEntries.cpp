#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetLeaderboardEntries.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetLeaderboardEntries* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetLeaderboardEntries::GetLeaderboardEntriesAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, void* SteamID) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetLeaderboardEntries::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries");
    return result;
}
