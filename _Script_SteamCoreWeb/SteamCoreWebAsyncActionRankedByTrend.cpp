#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionRankedByTrend.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRankedByTrend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionRankedByTrend* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRankedByTrend::RankedByTrendAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, void* Tag, void* UserTag) {
    return;
}
