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
struct WebEconService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void GetTradeOffersSummary(void*& Callback, void* Key, int32_t TimeLastVisit);
    void GetTradeOffers(void*& Callback, void* Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, void* Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff);
    void GetTradeOffer(void*& Callback, void* Key, void* TradeOfferId, void* Language);
    void GetTradeHistory(void*& Callback, void* Key, int32_t MaxTrades, int32_t StartAfterTime, void* StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, void* Language, bool bIncludeFailed, bool bIncludeTotal);
    void FlushInventoryCache(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* ContextId);
    void FlushContextCache(void*& Callback, void* Key, int32_t AppID);
    void FlushAssetAppearanceCache(void*& Callback, void* Key, int32_t AppID);
    void DeclineTradeOffer(void*& Callback, void* Key, void* TradeOfferId);
    void CancelTradeOffer(void*& Callback, void* Key, void* TradeOfferId);
}; // Size: 0x48
#pragma pack(pop)
}
