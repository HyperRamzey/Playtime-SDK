#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAppsAsyncActionGetAppBetas.hpp"
#include "SteamCoreWebAsyncAction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppBetas::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas");
    return result;
}
_Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppBetas* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppBetas::GetAppBetasAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID) {
    return;
}
