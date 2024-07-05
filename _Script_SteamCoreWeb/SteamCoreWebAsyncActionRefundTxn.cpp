#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionRefundTxn.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRefundTxn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionRefundTxn* _Script_SteamCoreWeb::SteamCoreWebAsyncActionRefundTxn::RefundTxnAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* OrderId, int32_t AppID) {
    return;
}
