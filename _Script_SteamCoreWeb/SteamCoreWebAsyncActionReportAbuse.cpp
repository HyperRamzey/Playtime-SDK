#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionReportAbuse.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionReportAbuse* _Script_SteamCoreWeb::SteamCoreWebAsyncActionReportAbuse::ReportAbuseAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamIdActor, void* SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, void* Description, void* Gid) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionReportAbuse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse");
    return result;
}
