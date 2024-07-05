#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetLeaderboardsForGame.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetLeaderboardsForGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetLeaderboardsForGame* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetLeaderboardsForGame::GetLeaderboardsForGameAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID) {
    return;
}
