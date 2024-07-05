#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebInventoryService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void ModifyItems(void*& Callback, void* Key, int32_t AppID, void* InputJson, void* SteamID, int32_t Timestamp, void* Updates);
    void GetQuantity(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ItemdefIDs, bool bForce);
    void GetPriceSheet(void*& Callback, void* Key, int32_t Currency);
    void GetItemDefs(void*& Callback, void* Key, int32_t AppID, void* ModifiedSince, void* ItemdefIDs, void* WorkshopIDs, int32_t CacheMaxAgeSeconds);
    void GetInventory(void*& Callback, void* Key, int32_t AppID, void* SteamID);
    void ExchangeItem(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* MaterialsItemID, void* MaterialsQuantity, void* OutputItemdefId);
    void ConsumeItem(void*& Callback, void* Key, int32_t AppID, void* ItemId, void* Quantity, void* SteamID, void* RequestID);
    void Consolidate(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ItemdefIDs, bool bForce);
    void AddPromoItem(void*& Callback, void* Key, int32_t AppID, int32_t ItemdefId, void* ItemPropsJson, void* SteamID, bool bNotify, void* RequestID);
    void AddItem(void*& Callback, void* Key, int32_t AppID, void* ItemdefId, void* ItemPropsJson, void* SteamID, bool bNotify, void* RequestID, bool bTradeRestriction);
}; // Size: 0x48
#pragma pack(pop)
}
