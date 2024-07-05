#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetTradeOffers.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeOffers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeOffers* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeOffers::GetTradeOffersAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, void* Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff) {
    return;
}
