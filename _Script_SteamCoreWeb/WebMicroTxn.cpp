#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebMicroTxn.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebMicroTxn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebMicroTxn");
    return result;
}
void _Script_SteamCoreWeb::WebMicroTxn::RefundTxn(void*& Callback, void* Key, void* OrderId, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::InitTxn(void*& Callback, void* Key, void* OrderId, void* SteamID, int32_t AppID, void* Language, void* Currency, void* UserSession, void* Ipaddress, void* ItemId, void* Quantity, void* Amount, void* Description, void* Category, void* AssociatedBundle, void* BillingType, void* StartDate, void* EndDate, void* Period, void* Frequency, void* RecurringAmt, void* BundleCount, void* BundleId, void* BundleQty, void* BundleDesc, void* BundleCategory) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::QueryTxn(void*& Callback, void* Key, int32_t AppID, void* OrderId, void* TransId) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::ProcessAgreement(void*& Callback, void* Key, void* OrderId, void* SteamID, void* AgreementId, int32_t AppID, int32_t Amount, void* Currency) {
    return;
}
void* _Script_SteamCoreWeb::WebMicroTxn::MakeTransactionID() {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::GetUserInfo(void*& Callback, void* Key, void* SteamID, int32_t Ipaddress) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::GetUserAgreementInfo(void*& Callback, void* Key, void* SteamID, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::GetReport(void*& Callback, void* Key, int32_t AppID, void* Time, void* Type, int32_t MaxResults) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::FinalizeTxn(void*& Callback, void* Key, void* OrderId, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::CancelAgreement(void*& Callback, void* Key, void* SteamID, void* AgreementId, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebMicroTxn::AdjustAgreement(void*& Callback, void* Key, void* SteamID, void* AgreementId, int32_t AppID, void* NextProcessDate) {
    return;
}
