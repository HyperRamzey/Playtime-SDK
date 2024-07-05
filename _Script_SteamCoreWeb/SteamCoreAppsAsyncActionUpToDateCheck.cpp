#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAppsAsyncActionUpToDateCheck.hpp"
#include "SteamCoreWebAsyncAction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionUpToDateCheck::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck");
    return result;
}
_Script_SteamCoreWeb::SteamCoreAppsAsyncActionUpToDateCheck* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionUpToDateCheck::UpToDateCheckAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, int32_t Version) {
    return;
}
