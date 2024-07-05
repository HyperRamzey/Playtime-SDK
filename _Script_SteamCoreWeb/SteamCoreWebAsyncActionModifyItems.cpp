#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionModifyItems.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionModifyItems::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionModifyItems");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionModifyItems* _Script_SteamCoreWeb::SteamCoreWebAsyncActionModifyItems::ModifyItemsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* InputJson, void* SteamID, int32_t Timestamp, void* Updates) {
    return;
}
