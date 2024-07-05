#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreWebAsyncActionInitTxn : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionInitTxn* InitTxnAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* OrderId, void* SteamID, int32_t AppID, void* Language, void* Currency, void* UserSession, void* Ipaddress, void* ItemId, void* Quantity, void* Amount, void* Description, void* Category, void* AssociatedBundle, void* BillingType, void* StartDate, void* EndDate, void* Period, void* Frequency, void* RecurringAmt, void* BundleCount, void* BundleId, void* BundleQty, void* BundleDesc, void* BundleCategory);
}; // Size: 0x58
#pragma pack(pop)
}
