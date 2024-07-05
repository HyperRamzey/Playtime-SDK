#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionRankedByPublicationOrder.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionRankedByPublicationOrder* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRankedByPublicationOrder::RankedByPublicationOrderAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, void* Tag, void* UserTag) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRankedByPublicationOrder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder");
    return result;
}
