#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebEconService.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebEconService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebEconService");
    return result;
}
void _Script_SteamCoreWeb::WebEconService::GetTradeOffersSummary(void*& Callback, void* Key, int32_t TimeLastVisit) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::GetTradeOffers(void*& Callback, void* Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, void* Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::GetTradeOffer(void*& Callback, void* Key, void* TradeOfferId, void* Language) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::FlushContextCache(void*& Callback, void* Key, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::GetTradeHistory(void*& Callback, void* Key, int32_t MaxTrades, int32_t StartAfterTime, void* StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, void* Language, bool bIncludeFailed, bool bIncludeTotal) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::FlushInventoryCache(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* ContextId) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::FlushAssetAppearanceCache(void*& Callback, void* Key, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::DeclineTradeOffer(void*& Callback, void* Key, void* TradeOfferId) {
    return;
}
void _Script_SteamCoreWeb::WebEconService::CancelTradeOffer(void*& Callback, void* Key, void* TradeOfferId) {
    return;
}
