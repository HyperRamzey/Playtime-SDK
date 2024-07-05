#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionAddPromoItem.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAddPromoItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionAddPromoItem* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAddPromoItem::AddPromoItemAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t ItemdefId, void* ItemPropsJson, void* SteamID, bool bNotify, void* RequestID) {
    return;
}
