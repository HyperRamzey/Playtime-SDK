#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetMarketPrices.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetMarketPrices::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetMarketPrices* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetMarketPrices::GetMarketPricesAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID) {
    return;
}
