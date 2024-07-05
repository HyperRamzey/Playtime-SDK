#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionExchangeItem.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionExchangeItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionExchangeItem* _Script_SteamCoreWeb::SteamCoreWebAsyncActionExchangeItem::ExchangeItemAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, void* MaterialsItemID, void* MaterialsQuantity, void* OutputItemdefId) {
    return;
}
