#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetItemDefs.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetItemDefs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetItemDefs* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetItemDefs::GetItemDefsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* ModifiedSince, void* ItemdefIDs, void* WorkshopIDs, int32_t CacheMaxAgeSeconds) {
    return;
}
