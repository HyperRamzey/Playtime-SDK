#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebInventoryService.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebInventoryService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebInventoryService");
    return result;
}
void _Script_SteamCoreWeb::WebInventoryService::ConsumeItem(void*& Callback, void* Key, int32_t AppID, void* ItemId, void* Quantity, void* SteamID, void* RequestID) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::GetPriceSheet(void*& Callback, void* Key, int32_t Currency) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::ModifyItems(void*& Callback, void* Key, int32_t AppID, void* InputJson, void* SteamID, int32_t Timestamp, void* Updates) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::GetQuantity(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ItemdefIDs, bool bForce) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::GetItemDefs(void*& Callback, void* Key, int32_t AppID, void* ModifiedSince, void* ItemdefIDs, void* WorkshopIDs, int32_t CacheMaxAgeSeconds) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::GetInventory(void*& Callback, void* Key, int32_t AppID, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::ExchangeItem(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* MaterialsItemID, void* MaterialsQuantity, void* OutputItemdefId) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::Consolidate(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ItemdefIDs, bool bForce) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::AddPromoItem(void*& Callback, void* Key, int32_t AppID, int32_t ItemdefId, void* ItemPropsJson, void* SteamID, bool bNotify, void* RequestID) {
    return;
}
void _Script_SteamCoreWeb::WebInventoryService::AddItem(void*& Callback, void* Key, int32_t AppID, void* ItemdefId, void* ItemPropsJson, void* SteamID, bool bNotify, void* RequestID, bool bTradeRestriction) {
    return;
}
