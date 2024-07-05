#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetReport.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetReport::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetReport");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetReport* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetReport::GetReportAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* Time, void* Type, int32_t MaxResults) {
    return;
}
