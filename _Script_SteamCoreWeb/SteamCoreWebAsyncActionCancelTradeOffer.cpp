#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionCancelTradeOffer.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelTradeOffer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelTradeOffer* _Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelTradeOffer::CancelTradeOfferAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* TradeOfferId) {
    return;
}
