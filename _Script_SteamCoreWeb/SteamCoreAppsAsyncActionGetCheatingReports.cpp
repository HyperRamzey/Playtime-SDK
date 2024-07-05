#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAppsAsyncActionGetCheatingReports.hpp"
#include "SteamCoreWebAsyncAction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetCheatingReports::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports");
    return result;
}
_Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetCheatingReports* _Script_SteamCoreWeb::SteamCoreAppsAsyncActionGetCheatingReports::GetCheatingReportsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin) {
    return;
}
