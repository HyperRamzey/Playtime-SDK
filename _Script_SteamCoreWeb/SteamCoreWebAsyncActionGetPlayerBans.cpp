#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetPlayerBans.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPlayerBans::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPlayerBans* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPlayerBans::GetPlayerBansAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamIDs) {
    return;
}
