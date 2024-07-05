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
struct WebEconMarketService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void GetPopular(void*& Callback, void* Key, void* Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency);
    void GetMarketEligibility(void*& Callback, void* Key, void* SteamID);
    void GetAssetID(void*& Callback, void* Key, int32_t AppID, void* ListingId);
    void CancelAppListingsForUser(void*& Callback, void* Key, int32_t AppID, void* SteamID, bool bSynchronous);
}; // Size: 0x48
#pragma pack(pop)
}
