#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAppsAsyncActionSetAppBuildLive.hpp"
#include "SteamCoreWebAsyncAction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionSetAppBuildLive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive");
    return result;
}
_Script_SteamCoreWeb::SteamCoreAppsAsyncActionSetAppBuildLive* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionSetAppBuildLive::SetAppBuildLiveAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t BuildID, void* BetaKey, void* Description) {
    return;
}
