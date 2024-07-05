#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebMicroTxn : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void RefundTxn(void*& Callback, void* Key, void* OrderId, int32_t AppID);
    void QueryTxn(void*& Callback, void* Key, int32_t AppID, void* OrderId, void* TransId);
    void ProcessAgreement(void*& Callback, void* Key, void* OrderId, void* SteamID, void* AgreementId, int32_t AppID, int32_t Amount, void* Currency);
    void* MakeTransactionID();
    void InitTxn(void*& Callback, void* Key, void* OrderId, void* SteamID, int32_t AppID, void* Language, void* Currency, void* UserSession, void* Ipaddress, void* ItemId, void* Quantity, void* Amount, void* Description, void* Category, void* AssociatedBundle, void* BillingType, void* StartDate, void* EndDate, void* Period, void* Frequency, void* RecurringAmt, void* BundleCount, void* BundleId, void* BundleQty, void* BundleDesc, void* BundleCategory);
    void GetUserInfo(void*& Callback, void* Key, void* SteamID, int32_t Ipaddress);
    void GetUserAgreementInfo(void*& Callback, void* Key, void* SteamID, int32_t AppID);
    void GetReport(void*& Callback, void* Key, int32_t AppID, void* Time, void* Type, int32_t MaxResults);
    void FinalizeTxn(void*& Callback, void* Key, void* OrderId, int32_t AppID);
    void CancelAgreement(void*& Callback, void* Key, void* SteamID, void* AgreementId, int32_t AppID);
    void AdjustAgreement(void*& Callback, void* Key, void* SteamID, void* AgreementId, int32_t AppID, void* NextProcessDate);
}; // Size: 0x48
#pragma pack(pop)
}
