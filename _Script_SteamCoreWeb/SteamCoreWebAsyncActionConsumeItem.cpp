#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionConsumeItem.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionConsumeItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionConsumeItem* _Script_SteamCoreWeb::SteamCoreWebAsyncActionConsumeItem::ConsumeItemAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* ItemId, void* Quantity, void* SteamID, void* RequestID) {
    return;
}
