#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetAssetPrices.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetPrices::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetPrices* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetPrices::GetAssetPricesAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* Currency, void* Language) {
    return;
}
