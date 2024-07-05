#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionAddItem.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAddItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddItem");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionAddItem* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAddItem::AddItemAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* ItemdefId, void* ItemPropsJson, void* SteamID, bool bNotify, void* RequestID, bool bTradeRestriction) {
    return;
}
