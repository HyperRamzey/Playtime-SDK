#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebEconMarketService.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebEconMarketService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebEconMarketService");
    return result;
}
void _Script_SteamCoreWeb::WebEconMarketService::GetPopular(void*& Callback, void* Key, void* Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency) {
    return;
}
void _Script_SteamCoreWeb::WebEconMarketService::GetMarketEligibility(void*& Callback, void* Key, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebEconMarketService::GetAssetID(void*& Callback, void* Key, int32_t AppID, void* ListingId) {
    return;
}
void _Script_SteamCoreWeb::WebEconMarketService::CancelAppListingsForUser(void*& Callback, void* Key, int32_t AppID, void* SteamID, bool bSynchronous) {
    return;
}
