#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetCheatingReports.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCheatingReports::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCheatingReports* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCheatingReports::GetCheatingReportsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, void* ReportidMin, bool bIncludeReports, bool bIncludeBans, void* SteamID) {
    return;
}
