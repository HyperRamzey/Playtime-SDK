#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionReportCheatData.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionReportCheatData* _Script_SteamCoreWeb::SteamCoreWebAsyncActionReportCheatData::ReportCheatDataAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* PathAndFileName, void* WebCheatURL, void* TimeNow, void* TimeStarted, void* TimeStopped, void* CheatName, int32_t GameProcessId, int32_t CheatProcessId, void* CheatParam1, void* CheatParam2) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionReportCheatData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData");
    return result;
}
