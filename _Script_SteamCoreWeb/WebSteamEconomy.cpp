#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebSteamEconomy.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebSteamEconomy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebSteamEconomy");
    return result;
}
void _Script_SteamCoreWeb::WebSteamEconomy::FinalizeAssetTransaction(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* TxnId, void* Language) {
    return;
}
void _Script_SteamCoreWeb::WebSteamEconomy::GetAssetClassInfo(void*& Callback, void* Key, int32_t AppID, void* Language, int32_t ClassCount, void* ClassId, void* InstanceID) {
    return;
}
void _Script_SteamCoreWeb::WebSteamEconomy::StartTrade(void*& Callback, void* Key, int32_t AppID, void* SteamIDd, void* SteamId2) {
    return;
}
void _Script_SteamCoreWeb::WebSteamEconomy::GetAssetPrices(void*& Callback, void* Key, int32_t AppID, void* Currency, void* Language) {
    return;
}
void _Script_SteamCoreWeb::WebSteamEconomy::StartAssetTransaction(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* AssetId, int32_t AssetQuantity, void* Currency, void* Language, void* Ipaddress, void* Referer, bool bClientAuth) {
    return;
}
void _Script_SteamCoreWeb::WebSteamEconomy::GetMarketPrices(void*& Callback, void* Key, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebSteamEconomy::GetExportedAssetsForUser(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* ContextId) {
    return;
}
void _Script_SteamCoreWeb::WebSteamEconomy::CanTrade(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* TargetId) {
    return;
}
