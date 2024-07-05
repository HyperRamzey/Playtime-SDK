#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionQueryTxn.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionQueryTxn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionQueryTxn* _Script_SteamCoreWeb::SteamCoreWebAsyncActionQueryTxn::QueryTxnAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* OrderId, void* TransId) {
    return;
}
