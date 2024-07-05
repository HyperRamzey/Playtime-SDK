#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionSetUserStatsForGame.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSetUserStatsForGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionSetUserStatsForGame* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSetUserStatsForGame::SetUserStatsForGameAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* Names, void* Values) {
    return;
}
