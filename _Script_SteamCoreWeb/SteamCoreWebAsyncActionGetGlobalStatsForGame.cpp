#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetGlobalStatsForGame.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetGlobalStatsForGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetGlobalStatsForGame* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetGlobalStatsForGame::GetGlobalStatsForGameAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, void* Names, int32_t StartDate, int32_t EndDate) {
    return;
}
