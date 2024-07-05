#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAppsAsyncActionGetAppBuilds.hpp"
#include "SteamCoreWebAsyncAction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppBuilds::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds");
    return result;
}
_Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppBuilds* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetAppBuilds::GetAppBuildsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t Count) {
    return;
}
