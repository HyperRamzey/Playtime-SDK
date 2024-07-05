#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetUserStatsForGame.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUserStatsForGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUserStatsForGame* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetUserStatsForGame::GetUserStatsForGameAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID) {
    return;
}
