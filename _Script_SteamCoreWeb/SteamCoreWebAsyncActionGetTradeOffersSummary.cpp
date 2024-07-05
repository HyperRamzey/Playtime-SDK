#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetTradeOffersSummary.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeOffersSummary* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeOffersSummary::GetTradeOffersSummaryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t TimeLastVisit) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeOffersSummary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary");
    return result;
}
