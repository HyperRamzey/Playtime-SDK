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
struct WebSteamEconomy : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void StartTrade(void*& Callback, void* Key, int32_t AppID, void* SteamIDd, void* SteamId2);
    void StartAssetTransaction(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* AssetId, int32_t AssetQuantity, void* Currency, void* Language, void* Ipaddress, void* Referer, bool bClientAuth);
    void GetMarketPrices(void*& Callback, void* Key, int32_t AppID);
    void GetExportedAssetsForUser(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* ContextId);
    void GetAssetPrices(void*& Callback, void* Key, int32_t AppID, void* Currency, void* Language);
    void GetAssetClassInfo(void*& Callback, void* Key, int32_t AppID, void* Language, int32_t ClassCount, void* ClassId, void* InstanceID);
    void FinalizeAssetTransaction(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* TxnId, void* Language);
    void CanTrade(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* TargetId);
}; // Size: 0x48
#pragma pack(pop)
}
