#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionResultSetSummary.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionResultSetSummary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionResultSetSummary* _Script_SteamCoreWeb::SteamCoreWebAsyncActionResultSetSummary::ResultSetSummaryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, void* Tag, void* UserTag) {
    return;
}
