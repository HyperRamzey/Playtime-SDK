#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAppsAsyncActionGetAppDepotVersions.hpp"
#include "SteamCoreWebAsyncAction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppDepotVersions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions");
    return result;
}
_Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppDepotVersions* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppDepotVersions::GetAppDepotVersionsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID) {
    return;
}
