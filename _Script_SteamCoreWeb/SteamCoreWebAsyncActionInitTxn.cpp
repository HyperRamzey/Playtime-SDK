#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionInitTxn.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionInitTxn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionInitTxn");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionInitTxn* _Script_SteamCoreWeb::SteamCoreWebAsyncActionInitTxn::InitTxnAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* OrderId, void* SteamID, int32_t AppID, void* Language, void* Currency, void* UserSession, void* Ipaddress, void* ItemId, void* Quantity, void* Amount, void* Description, void* Category, void* AssociatedBundle, void* BillingType, void* StartDate, void* EndDate, void* Period, void* Frequency, void* RecurringAmt, void* BundleCount, void* BundleId, void* BundleQty, void* BundleDesc, void* BundleCategory) {
    return;
}
